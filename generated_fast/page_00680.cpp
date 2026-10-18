#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_575(u8* __restrict R,Cpu& c);
u32 body_673(u8* __restrict R,Cpu& c);
u32 body_675(u8* __restrict R,Cpu& c);
u32 body_678(u8* __restrict R,Cpu& c);
u32 body_67a(u8* __restrict R,Cpu& c);
u32 body_67f(u8* __restrict R,Cpu& c);
u32 body_681(u8* __restrict R,Cpu& c);
u32 body_699(u8* __restrict R,Cpu& c);
u32 body_75d(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x680,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x680,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_680(u8* __restrict R,Cpu& c);
u32 page_680(Cpu& c){return body_680(c.regs.data(),c);}
__attribute__((noinline)) u32 body_680(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x680001:goto L680001;
case 0x680004:c.instructions+=5;goto B680004;
case 0x680006:c.instructions+=4;goto B680006;
case 0x680007:c.instructions+=3;goto B680007;
case 0x68000a:c.instructions+=2;goto B68000a;
case 0x68000e:c.instructions+=1;goto B68000e;
case 0x680010:goto L680010;
case 0x680013:c.instructions+=3;goto B680013;
case 0x680015:c.instructions+=2;goto B680015;
case 0x680018:c.instructions+=1;goto B680018;
case 0x68001d:goto L68001d;
case 0x68001f:c.instructions+=2;goto B68001f;
case 0x680021:c.instructions+=1;goto B680021;
case 0x680027:goto L680027;
case 0x680028:c.instructions+=7;goto B680028;
case 0x68002b:c.instructions+=6;goto B68002b;
case 0x68002c:c.instructions+=5;goto B68002c;
case 0x68002f:c.instructions+=4;goto B68002f;
case 0x680030:c.instructions+=3;goto B680030;
case 0x680033:c.instructions+=2;goto B680033;
case 0x680038:c.instructions+=1;goto B680038;
case 0x68003d:goto L68003d;
case 0x68003f:c.instructions+=2;goto B68003f;
case 0x680042:c.instructions+=1;goto B680042;
case 0x680048:goto L680048;
case 0x68004b:c.instructions+=1;goto B68004b;
case 0x680051:goto L680051;
case 0x680054:c.instructions+=1;goto B680054;
case 0x68005a:goto L68005a;
case 0x68005c:goto L68005c;
case 0x68005f:c.instructions+=5;goto B68005f;
case 0x680061:c.instructions+=4;goto B680061;
case 0x680065:c.instructions+=3;goto B680065;
case 0x680066:c.instructions+=2;goto B680066;
case 0x680069:c.instructions+=1;goto B680069;
case 0x68006b:goto L68006b;
case 0x68006e:c.instructions+=3;goto B68006e;
case 0x680070:c.instructions+=2;goto B680070;
case 0x680073:c.instructions+=1;goto B680073;
case 0x680078:goto L680078;
case 0x68007a:c.instructions+=2;goto B68007a;
case 0x68007c:c.instructions+=1;goto B68007c;
case 0x680082:goto L680082;
case 0x680083:c.instructions+=6;goto B680083;
case 0x680086:c.instructions+=5;goto B680086;
case 0x680089:c.instructions+=4;goto B680089;
case 0x68008a:c.instructions+=3;goto B68008a;
case 0x68008d:c.instructions+=2;goto B68008d;
case 0x680092:c.instructions+=1;goto B680092;
case 0x680097:goto L680097;
case 0x680099:c.instructions+=2;goto B680099;
case 0x68009c:c.instructions+=1;goto B68009c;
case 0x6800a2:goto L6800a2;
case 0x6800a5:c.instructions+=1;goto B6800a5;
case 0x6800ab:goto L6800ab;
case 0x6800ae:c.instructions+=1;goto B6800ae;
case 0x6800b4:goto L6800b4;
case 0x6800b6:goto L6800b6;
case 0x6800b9:c.instructions+=5;goto B6800b9;
case 0x6800bb:c.instructions+=4;goto B6800bb;
case 0x6800bf:c.instructions+=3;goto B6800bf;
case 0x6800c0:c.instructions+=2;goto B6800c0;
case 0x6800c3:c.instructions+=1;goto B6800c3;
case 0x6800c5:goto L6800c5;
case 0x6800c8:c.instructions+=3;goto B6800c8;
case 0x6800ca:c.instructions+=2;goto B6800ca;
case 0x6800cd:c.instructions+=1;goto B6800cd;
case 0x6800d2:goto L6800d2;
case 0x6800d4:c.instructions+=2;goto B6800d4;
case 0x6800d6:c.instructions+=1;goto B6800d6;
case 0x6800dc:goto L6800dc;
case 0x6800dd:c.instructions+=6;goto B6800dd;
case 0x6800e0:c.instructions+=5;goto B6800e0;
case 0x6800e3:c.instructions+=4;goto B6800e3;
case 0x6800e4:c.instructions+=3;goto B6800e4;
case 0x6800e7:c.instructions+=2;goto B6800e7;
case 0x6800ec:c.instructions+=1;goto B6800ec;
case 0x6800f1:goto L6800f1;
case 0x6800f3:c.instructions+=2;goto B6800f3;
case 0x6800f6:c.instructions+=1;goto B6800f6;
case 0x6800fc:goto L6800fc;
case 0x6800ff:c.instructions+=1;goto B6800ff;
case 0x680105:goto L680105;
case 0x680108:c.instructions+=1;goto B680108;
case 0x68010e:goto L68010e;
case 0x680110:goto L680110;
case 0x680113:c.instructions+=5;goto B680113;
case 0x680115:c.instructions+=4;goto B680115;
case 0x680119:c.instructions+=3;goto B680119;
case 0x68011a:c.instructions+=2;goto B68011a;
case 0x68011d:c.instructions+=1;goto B68011d;
case 0x68011f:goto L68011f;
case 0x680122:c.instructions+=3;goto B680122;
case 0x680124:c.instructions+=2;goto B680124;
case 0x680127:c.instructions+=1;goto B680127;
case 0x68012c:goto L68012c;
case 0x68012e:c.instructions+=2;goto B68012e;
case 0x680130:c.instructions+=1;goto B680130;
case 0x680136:goto L680136;
case 0x680137:c.instructions+=6;goto B680137;
case 0x68013a:c.instructions+=5;goto B68013a;
case 0x68013d:c.instructions+=4;goto B68013d;
case 0x68013e:c.instructions+=3;goto B68013e;
case 0x680141:c.instructions+=2;goto B680141;
case 0x680146:c.instructions+=1;goto B680146;
case 0x68014b:goto L68014b;
case 0x68014d:c.instructions+=2;goto B68014d;
case 0x680150:c.instructions+=1;goto B680150;
case 0x680156:goto L680156;
case 0x680159:c.instructions+=1;goto B680159;
case 0x68015f:goto L68015f;
case 0x680162:c.instructions+=1;goto B680162;
case 0x680168:goto L680168;
case 0x68016a:goto L68016a;
case 0x68016d:c.instructions+=5;goto B68016d;
case 0x68016f:c.instructions+=4;goto B68016f;
case 0x680173:c.instructions+=3;goto B680173;
case 0x680174:c.instructions+=2;goto B680174;
case 0x680177:c.instructions+=1;goto B680177;
case 0x680179:goto L680179;
case 0x68017c:c.instructions+=3;goto B68017c;
case 0x68017e:c.instructions+=2;goto B68017e;
case 0x680181:c.instructions+=1;goto B680181;
case 0x680186:goto L680186;
case 0x680188:c.instructions+=2;goto B680188;
case 0x68018a:c.instructions+=1;goto B68018a;
case 0x680190:goto L680190;
case 0x680191:c.instructions+=6;goto B680191;
case 0x680194:c.instructions+=5;goto B680194;
case 0x680197:c.instructions+=4;goto B680197;
case 0x680198:c.instructions+=3;goto B680198;
case 0x68019b:c.instructions+=2;goto B68019b;
case 0x6801a0:c.instructions+=1;goto B6801a0;
case 0x6801a5:goto L6801a5;
case 0x6801a7:c.instructions+=2;goto B6801a7;
case 0x6801aa:c.instructions+=1;goto B6801aa;
case 0x6801b0:goto L6801b0;
case 0x6801b3:c.instructions+=1;goto B6801b3;
case 0x6801b9:goto L6801b9;
case 0x6801bc:c.instructions+=1;goto B6801bc;
case 0x6801c2:goto L6801c2;
case 0x6801c5:c.instructions+=1;goto B6801c5;
case 0x6801cb:goto L6801cb;
case 0x6801ce:c.instructions+=1;goto B6801ce;
case 0x6801d4:goto L6801d4;
case 0x6801d7:c.instructions+=18;goto B6801d7;
case 0x6801da:c.instructions+=17;goto B6801da;
case 0x6801dc:c.instructions+=16;goto B6801dc;
case 0x6801df:c.instructions+=15;goto B6801df;
case 0x6801e2:c.instructions+=14;goto B6801e2;
case 0x6801e4:c.instructions+=13;goto B6801e4;
case 0x6801e7:c.instructions+=12;goto B6801e7;
case 0x6801ea:c.instructions+=11;goto B6801ea;
case 0x6801ec:c.instructions+=10;goto B6801ec;
case 0x6801ef:c.instructions+=9;goto B6801ef;
case 0x6801f2:c.instructions+=8;goto B6801f2;
case 0x6801f4:c.instructions+=7;goto B6801f4;
case 0x6801f7:c.instructions+=6;goto B6801f7;
case 0x6801fa:c.instructions+=5;goto B6801fa;
case 0x6801fd:c.instructions+=4;goto B6801fd;
case 0x6801ff:c.instructions+=3;goto B6801ff;
case 0x680201:c.instructions+=2;goto B680201;
case 0x680204:c.instructions+=1;goto B680204;
case 0x68020b:goto L68020b;
case 0x68020e:c.instructions+=16;goto B68020e;
case 0x680210:c.instructions+=15;goto B680210;
case 0x680213:c.instructions+=14;goto B680213;
case 0x680216:c.instructions+=13;goto B680216;
case 0x680218:c.instructions+=12;goto B680218;
case 0x68021b:c.instructions+=11;goto B68021b;
case 0x68021e:c.instructions+=10;goto B68021e;
case 0x680221:c.instructions+=9;goto B680221;
case 0x680224:c.instructions+=8;goto B680224;
case 0x680227:c.instructions+=7;goto B680227;
case 0x68022a:c.instructions+=6;goto B68022a;
case 0x68022d:c.instructions+=5;goto B68022d;
case 0x680230:c.instructions+=4;goto B680230;
case 0x680233:c.instructions+=3;goto B680233;
case 0x680236:c.instructions+=2;goto B680236;
case 0x680239:c.instructions+=1;goto B680239;
case 0x68023b:goto L68023b;
case 0x68023e:c.instructions+=3;goto B68023e;
case 0x680240:c.instructions+=2;goto B680240;
case 0x680243:c.instructions+=1;goto B680243;
case 0x680248:goto L680248;
case 0x68024a:c.instructions+=2;goto B68024a;
case 0x68024c:c.instructions+=1;goto B68024c;
case 0x680252:goto L680252;
case 0x680253:c.instructions+=7;goto B680253;
case 0x680256:c.instructions+=6;goto B680256;
case 0x680257:c.instructions+=5;goto B680257;
case 0x68025a:c.instructions+=4;goto B68025a;
case 0x68025b:c.instructions+=3;goto B68025b;
case 0x68025e:c.instructions+=2;goto B68025e;
case 0x680263:c.instructions+=1;goto B680263;
case 0x680268:goto L680268;
case 0x68026a:c.instructions+=2;goto B68026a;
case 0x68026d:c.instructions+=1;goto B68026d;
case 0x680273:goto L680273;
case 0x680276:c.instructions+=1;goto B680276;
case 0x68027c:goto L68027c;
case 0x68027f:c.instructions+=1;goto B68027f;
case 0x680285:goto L680285;
case 0x680287:goto L680287;
case 0x68028a:c.instructions+=5;goto B68028a;
case 0x68028c:c.instructions+=4;goto B68028c;
case 0x680290:c.instructions+=3;goto B680290;
case 0x680291:c.instructions+=2;goto B680291;
case 0x680294:c.instructions+=1;goto B680294;
case 0x680296:goto L680296;
case 0x680299:c.instructions+=3;goto B680299;
case 0x68029b:c.instructions+=2;goto B68029b;
case 0x68029e:c.instructions+=1;goto B68029e;
case 0x6802a3:goto L6802a3;
case 0x6802a5:c.instructions+=2;goto B6802a5;
case 0x6802a7:c.instructions+=1;goto B6802a7;
case 0x6802ad:goto L6802ad;
case 0x6802ae:c.instructions+=6;goto B6802ae;
case 0x6802b1:c.instructions+=5;goto B6802b1;
case 0x6802b4:c.instructions+=4;goto B6802b4;
case 0x6802b5:c.instructions+=3;goto B6802b5;
case 0x6802b8:c.instructions+=2;goto B6802b8;
case 0x6802bd:c.instructions+=1;goto B6802bd;
case 0x6802c2:goto L6802c2;
case 0x6802c4:c.instructions+=2;goto B6802c4;
case 0x6802c7:c.instructions+=1;goto B6802c7;
case 0x6802cd:goto L6802cd;
case 0x6802d0:c.instructions+=1;goto B6802d0;
case 0x6802d6:goto L6802d6;
case 0x6802d9:c.instructions+=1;goto B6802d9;
case 0x6802df:goto L6802df;
case 0x6802e1:goto L6802e1;
case 0x6802e4:c.instructions+=5;goto B6802e4;
case 0x6802e6:c.instructions+=4;goto B6802e6;
case 0x6802ea:c.instructions+=3;goto B6802ea;
case 0x6802eb:c.instructions+=2;goto B6802eb;
case 0x6802ee:c.instructions+=1;goto B6802ee;
case 0x6802f0:goto L6802f0;
case 0x6802f3:c.instructions+=3;goto B6802f3;
case 0x6802f5:c.instructions+=2;goto B6802f5;
case 0x6802f8:c.instructions+=1;goto B6802f8;
case 0x6802fd:goto L6802fd;
case 0x6802ff:c.instructions+=2;goto B6802ff;
case 0x680301:c.instructions+=1;goto B680301;
case 0x680307:goto L680307;
case 0x680308:c.instructions+=6;goto B680308;
case 0x68030b:c.instructions+=5;goto B68030b;
case 0x68030e:c.instructions+=4;goto B68030e;
case 0x68030f:c.instructions+=3;goto B68030f;
case 0x680312:c.instructions+=2;goto B680312;
case 0x680317:c.instructions+=1;goto B680317;
case 0x68031c:goto L68031c;
case 0x68031e:c.instructions+=2;goto B68031e;
case 0x680321:c.instructions+=1;goto B680321;
case 0x680327:goto L680327;
case 0x68032a:c.instructions+=1;goto B68032a;
case 0x680330:goto L680330;
case 0x680333:c.instructions+=1;goto B680333;
case 0x680339:goto L680339;
case 0x68033b:goto L68033b;
case 0x68033e:c.instructions+=5;goto B68033e;
case 0x680340:c.instructions+=4;goto B680340;
case 0x680344:c.instructions+=3;goto B680344;
case 0x680345:c.instructions+=2;goto B680345;
case 0x680348:c.instructions+=1;goto B680348;
case 0x68034a:goto L68034a;
case 0x68034d:c.instructions+=3;goto B68034d;
case 0x68034f:c.instructions+=2;goto B68034f;
case 0x680352:c.instructions+=1;goto B680352;
case 0x680357:goto L680357;
case 0x680359:c.instructions+=2;goto B680359;
case 0x68035b:c.instructions+=1;goto B68035b;
case 0x680361:goto L680361;
case 0x680362:c.instructions+=6;goto B680362;
case 0x680365:c.instructions+=5;goto B680365;
case 0x680368:c.instructions+=4;goto B680368;
case 0x680369:c.instructions+=3;goto B680369;
case 0x68036c:c.instructions+=2;goto B68036c;
case 0x680371:c.instructions+=1;goto B680371;
case 0x680376:goto L680376;
case 0x680378:c.instructions+=2;goto B680378;
case 0x68037b:c.instructions+=1;goto B68037b;
case 0x680381:goto L680381;
case 0x680384:c.instructions+=1;goto B680384;
case 0x68038a:goto L68038a;
case 0x68038d:c.instructions+=1;goto B68038d;
case 0x680393:goto L680393;
case 0x680395:goto L680395;
case 0x680398:c.instructions+=5;goto B680398;
case 0x68039a:c.instructions+=4;goto B68039a;
case 0x68039e:c.instructions+=3;goto B68039e;
case 0x68039f:c.instructions+=2;goto B68039f;
case 0x6803a2:c.instructions+=1;goto B6803a2;
case 0x6803a4:goto L6803a4;
case 0x6803a7:c.instructions+=3;goto B6803a7;
case 0x6803a9:c.instructions+=2;goto B6803a9;
case 0x6803ac:c.instructions+=1;goto B6803ac;
case 0x6803b1:goto L6803b1;
case 0x6803b3:c.instructions+=2;goto B6803b3;
case 0x6803b5:c.instructions+=1;goto B6803b5;
case 0x6803bb:goto L6803bb;
case 0x6803bc:c.instructions+=6;goto B6803bc;
case 0x6803bf:c.instructions+=5;goto B6803bf;
case 0x6803c2:c.instructions+=4;goto B6803c2;
case 0x6803c3:c.instructions+=3;goto B6803c3;
case 0x6803c6:c.instructions+=2;goto B6803c6;
case 0x6803cb:c.instructions+=1;goto B6803cb;
case 0x6803d0:goto L6803d0;
case 0x6803d2:c.instructions+=2;goto B6803d2;
case 0x6803d5:c.instructions+=1;goto B6803d5;
case 0x6803db:goto L6803db;
case 0x6803de:c.instructions+=1;goto B6803de;
case 0x6803e4:goto L6803e4;
case 0x6803e7:c.instructions+=1;goto B6803e7;
case 0x6803ed:goto L6803ed;
case 0x6803f0:c.instructions+=1;goto B6803f0;
case 0x6803f6:goto L6803f6;
case 0x6803f9:c.instructions+=1;goto B6803f9;
case 0x6803ff:goto L6803ff;
case 0x680402:c.instructions+=18;goto B680402;
case 0x680408:c.instructions+=17;goto B680408;
case 0x68040a:c.instructions+=16;goto B68040a;
case 0x68040d:c.instructions+=15;goto B68040d;
case 0x680410:c.instructions+=14;goto B680410;
case 0x680412:c.instructions+=13;goto B680412;
case 0x680415:c.instructions+=12;goto B680415;
case 0x68041b:c.instructions+=11;goto B68041b;
case 0x68041d:c.instructions+=10;goto B68041d;
case 0x680420:c.instructions+=9;goto B680420;
case 0x680423:c.instructions+=8;goto B680423;
case 0x680425:c.instructions+=7;goto B680425;
case 0x680428:c.instructions+=6;goto B680428;
case 0x68042e:c.instructions+=5;goto B68042e;
case 0x680434:c.instructions+=4;goto B680434;
case 0x680436:c.instructions+=3;goto B680436;
case 0x680438:c.instructions+=2;goto B680438;
case 0x68043b:c.instructions+=1;goto B68043b;
case 0x680442:goto L680442;
case 0x680445:c.instructions+=16;goto B680445;
case 0x680447:c.instructions+=15;goto B680447;
case 0x68044a:c.instructions+=14;goto B68044a;
case 0x68044d:c.instructions+=13;goto B68044d;
case 0x68044f:c.instructions+=12;goto B68044f;
case 0x680452:c.instructions+=11;goto B680452;
case 0x680455:c.instructions+=10;goto B680455;
case 0x680458:c.instructions+=9;goto B680458;
case 0x68045b:c.instructions+=8;goto B68045b;
case 0x68045e:c.instructions+=7;goto B68045e;
case 0x680461:c.instructions+=6;goto B680461;
case 0x680464:c.instructions+=5;goto B680464;
case 0x680467:c.instructions+=4;goto B680467;
case 0x68046a:c.instructions+=3;goto B68046a;
case 0x68046d:c.instructions+=2;goto B68046d;
case 0x680470:c.instructions+=1;goto B680470;
case 0x680472:goto L680472;
case 0x680475:c.instructions+=3;goto B680475;
case 0x680477:c.instructions+=2;goto B680477;
case 0x68047a:c.instructions+=1;goto B68047a;
case 0x68047f:goto L68047f;
case 0x680481:c.instructions+=2;goto B680481;
case 0x680483:c.instructions+=1;goto B680483;
case 0x680489:goto L680489;
case 0x68048a:c.instructions+=7;goto B68048a;
case 0x680490:c.instructions+=6;goto B680490;
case 0x680491:c.instructions+=5;goto B680491;
case 0x680497:c.instructions+=4;goto B680497;
case 0x680498:c.instructions+=3;goto B680498;
case 0x68049b:c.instructions+=2;goto B68049b;
case 0x6804a0:c.instructions+=1;goto B6804a0;
case 0x6804a5:goto L6804a5;
case 0x6804a7:c.instructions+=2;goto B6804a7;
case 0x6804aa:c.instructions+=1;goto B6804aa;
case 0x6804b0:goto L6804b0;
case 0x6804b3:c.instructions+=1;goto B6804b3;
case 0x6804b9:goto L6804b9;
case 0x6804bc:c.instructions+=1;goto B6804bc;
case 0x6804c2:goto L6804c2;
case 0x6804c4:goto L6804c4;
case 0x6804c7:c.instructions+=5;goto B6804c7;
case 0x6804c9:c.instructions+=4;goto B6804c9;
case 0x6804cd:c.instructions+=3;goto B6804cd;
case 0x6804ce:c.instructions+=2;goto B6804ce;
case 0x6804d1:c.instructions+=1;goto B6804d1;
case 0x6804d3:goto L6804d3;
case 0x6804d6:c.instructions+=3;goto B6804d6;
case 0x6804d8:c.instructions+=2;goto B6804d8;
case 0x6804db:c.instructions+=1;goto B6804db;
case 0x6804e0:goto L6804e0;
case 0x6804e2:c.instructions+=2;goto B6804e2;
case 0x6804e4:c.instructions+=1;goto B6804e4;
case 0x6804ea:goto L6804ea;
case 0x6804eb:c.instructions+=6;goto B6804eb;
case 0x6804ee:c.instructions+=5;goto B6804ee;
case 0x6804f1:c.instructions+=4;goto B6804f1;
case 0x6804f2:c.instructions+=3;goto B6804f2;
case 0x6804f5:c.instructions+=2;goto B6804f5;
case 0x6804fa:c.instructions+=1;goto B6804fa;
case 0x6804ff:goto L6804ff;
case 0x680501:c.instructions+=2;goto B680501;
case 0x680504:c.instructions+=1;goto B680504;
case 0x68050a:goto L68050a;
case 0x68050d:c.instructions+=1;goto B68050d;
case 0x680513:goto L680513;
case 0x680516:c.instructions+=1;goto B680516;
case 0x68051c:goto L68051c;
case 0x68051e:goto L68051e;
case 0x680521:c.instructions+=5;goto B680521;
case 0x680523:c.instructions+=4;goto B680523;
case 0x680527:c.instructions+=3;goto B680527;
case 0x680528:c.instructions+=2;goto B680528;
case 0x68052b:c.instructions+=1;goto B68052b;
case 0x68052d:goto L68052d;
case 0x680530:c.instructions+=3;goto B680530;
case 0x680532:c.instructions+=2;goto B680532;
case 0x680535:c.instructions+=1;goto B680535;
case 0x68053a:goto L68053a;
case 0x68053c:c.instructions+=2;goto B68053c;
case 0x68053e:c.instructions+=1;goto B68053e;
case 0x680544:goto L680544;
case 0x680545:c.instructions+=6;goto B680545;
case 0x680548:c.instructions+=5;goto B680548;
case 0x68054b:c.instructions+=4;goto B68054b;
case 0x68054c:c.instructions+=3;goto B68054c;
case 0x68054f:c.instructions+=2;goto B68054f;
case 0x680554:c.instructions+=1;goto B680554;
case 0x680559:goto L680559;
case 0x68055b:c.instructions+=2;goto B68055b;
case 0x68055e:c.instructions+=1;goto B68055e;
case 0x680564:goto L680564;
case 0x680567:c.instructions+=1;goto B680567;
case 0x68056d:goto L68056d;
case 0x680570:c.instructions+=1;goto B680570;
case 0x680576:goto L680576;
case 0x680578:goto L680578;
case 0x68057b:c.instructions+=5;goto B68057b;
case 0x68057d:c.instructions+=4;goto B68057d;
case 0x680581:c.instructions+=3;goto B680581;
case 0x680582:c.instructions+=2;goto B680582;
case 0x680585:c.instructions+=1;goto B680585;
case 0x680587:goto L680587;
case 0x68058a:c.instructions+=3;goto B68058a;
case 0x68058c:c.instructions+=2;goto B68058c;
case 0x68058f:c.instructions+=1;goto B68058f;
case 0x680594:goto L680594;
case 0x680596:c.instructions+=2;goto B680596;
case 0x680598:c.instructions+=1;goto B680598;
case 0x68059e:goto L68059e;
case 0x68059f:c.instructions+=6;goto B68059f;
case 0x6805a2:c.instructions+=5;goto B6805a2;
case 0x6805a5:c.instructions+=4;goto B6805a5;
case 0x6805a6:c.instructions+=3;goto B6805a6;
case 0x6805a9:c.instructions+=2;goto B6805a9;
case 0x6805ae:c.instructions+=1;goto B6805ae;
case 0x6805b3:goto L6805b3;
case 0x6805b5:c.instructions+=2;goto B6805b5;
case 0x6805b8:c.instructions+=1;goto B6805b8;
case 0x6805be:goto L6805be;
case 0x6805c1:c.instructions+=1;goto B6805c1;
case 0x6805c7:goto L6805c7;
case 0x6805ca:c.instructions+=1;goto B6805ca;
case 0x6805d0:goto L6805d0;
case 0x6805d2:goto L6805d2;
case 0x6805d5:c.instructions+=5;goto B6805d5;
case 0x6805d7:c.instructions+=4;goto B6805d7;
case 0x6805db:c.instructions+=3;goto B6805db;
case 0x6805dc:c.instructions+=2;goto B6805dc;
case 0x6805df:c.instructions+=1;goto B6805df;
case 0x6805e1:goto L6805e1;
case 0x6805e4:c.instructions+=3;goto B6805e4;
case 0x6805e6:c.instructions+=2;goto B6805e6;
case 0x6805e9:c.instructions+=1;goto B6805e9;
case 0x6805ee:goto L6805ee;
case 0x6805f0:c.instructions+=2;goto B6805f0;
case 0x6805f2:c.instructions+=1;goto B6805f2;
case 0x6805f8:goto L6805f8;
case 0x6805f9:c.instructions+=6;goto B6805f9;
case 0x6805fc:c.instructions+=5;goto B6805fc;
case 0x6805ff:c.instructions+=4;goto B6805ff;
case 0x680600:c.instructions+=3;goto B680600;
case 0x680603:c.instructions+=2;goto B680603;
case 0x680608:c.instructions+=1;goto B680608;
case 0x68060d:goto L68060d;
case 0x68060f:c.instructions+=2;goto B68060f;
case 0x680612:c.instructions+=1;goto B680612;
case 0x680618:goto L680618;
case 0x68061b:c.instructions+=1;goto B68061b;
case 0x680621:goto L680621;
case 0x680624:c.instructions+=1;goto B680624;
case 0x68062a:goto L68062a;
case 0x68062d:c.instructions+=1;goto B68062d;
case 0x680633:goto L680633;
case 0x680636:c.instructions+=1;goto B680636;
case 0x68063c:goto L68063c;
case 0x68063f:c.instructions+=18;goto B68063f;
case 0x680645:c.instructions+=17;goto B680645;
case 0x680647:c.instructions+=16;goto B680647;
case 0x68064a:c.instructions+=15;goto B68064a;
case 0x68064d:c.instructions+=14;goto B68064d;
case 0x68064f:c.instructions+=13;goto B68064f;
case 0x680652:c.instructions+=12;goto B680652;
case 0x680658:c.instructions+=11;goto B680658;
case 0x68065a:c.instructions+=10;goto B68065a;
case 0x68065d:c.instructions+=9;goto B68065d;
case 0x680660:c.instructions+=8;goto B680660;
case 0x680662:c.instructions+=7;goto B680662;
case 0x680665:c.instructions+=6;goto B680665;
case 0x68066b:c.instructions+=5;goto B68066b;
case 0x680671:c.instructions+=4;goto B680671;
case 0x680673:c.instructions+=3;goto B680673;
case 0x680675:c.instructions+=2;goto B680675;
case 0x680678:c.instructions+=1;goto B680678;
case 0x68067f:goto L68067f;
case 0x680682:c.instructions+=16;goto B680682;
case 0x680684:c.instructions+=15;goto B680684;
case 0x680687:c.instructions+=14;goto B680687;
case 0x68068a:c.instructions+=13;goto B68068a;
case 0x68068c:c.instructions+=12;goto B68068c;
case 0x68068f:c.instructions+=11;goto B68068f;
case 0x680692:c.instructions+=10;goto B680692;
case 0x680695:c.instructions+=9;goto B680695;
case 0x680698:c.instructions+=8;goto B680698;
case 0x68069b:c.instructions+=7;goto B68069b;
case 0x68069e:c.instructions+=6;goto B68069e;
case 0x6806a1:c.instructions+=5;goto B6806a1;
case 0x6806a4:c.instructions+=4;goto B6806a4;
case 0x6806a7:c.instructions+=3;goto B6806a7;
case 0x6806aa:c.instructions+=2;goto B6806aa;
case 0x6806ad:c.instructions+=1;goto B6806ad;
case 0x6806af:goto L6806af;
case 0x6806b2:c.instructions+=3;goto B6806b2;
case 0x6806b4:c.instructions+=2;goto B6806b4;
case 0x6806b7:c.instructions+=1;goto B6806b7;
case 0x6806bc:goto L6806bc;
case 0x6806be:c.instructions+=2;goto B6806be;
case 0x6806c0:c.instructions+=1;goto B6806c0;
case 0x6806c6:goto L6806c6;
case 0x6806c7:c.instructions+=7;goto B6806c7;
case 0x6806cd:c.instructions+=6;goto B6806cd;
case 0x6806ce:c.instructions+=5;goto B6806ce;
case 0x6806d4:c.instructions+=4;goto B6806d4;
case 0x6806d5:c.instructions+=3;goto B6806d5;
case 0x6806d8:c.instructions+=2;goto B6806d8;
case 0x6806dd:c.instructions+=1;goto B6806dd;
case 0x6806e2:goto L6806e2;
case 0x6806e4:c.instructions+=2;goto B6806e4;
case 0x6806e7:c.instructions+=1;goto B6806e7;
case 0x6806ed:goto L6806ed;
case 0x6806f0:c.instructions+=1;goto B6806f0;
case 0x6806f6:goto L6806f6;
case 0x6806f9:c.instructions+=1;goto B6806f9;
case 0x6806ff:goto L6806ff;
case 0x680701:goto L680701;
case 0x680704:c.instructions+=5;goto B680704;
case 0x680706:c.instructions+=4;goto B680706;
case 0x68070a:c.instructions+=3;goto B68070a;
case 0x68070b:c.instructions+=2;goto B68070b;
case 0x68070e:c.instructions+=1;goto B68070e;
case 0x680710:goto L680710;
case 0x680713:c.instructions+=3;goto B680713;
case 0x680715:c.instructions+=2;goto B680715;
case 0x680718:c.instructions+=1;goto B680718;
case 0x68071d:goto L68071d;
case 0x68071f:c.instructions+=2;goto B68071f;
case 0x680721:c.instructions+=1;goto B680721;
case 0x680727:goto L680727;
case 0x680728:c.instructions+=6;goto B680728;
case 0x68072b:c.instructions+=5;goto B68072b;
case 0x68072e:c.instructions+=4;goto B68072e;
case 0x68072f:c.instructions+=3;goto B68072f;
case 0x680732:c.instructions+=2;goto B680732;
case 0x680737:c.instructions+=1;goto B680737;
case 0x68073c:goto L68073c;
case 0x68073e:c.instructions+=2;goto B68073e;
case 0x680741:c.instructions+=1;goto B680741;
case 0x680747:goto L680747;
case 0x68074a:c.instructions+=1;goto B68074a;
case 0x680750:goto L680750;
case 0x680753:c.instructions+=1;goto B680753;
case 0x680759:goto L680759;
case 0x68075b:goto L68075b;
case 0x68075e:c.instructions+=5;goto B68075e;
case 0x680760:c.instructions+=4;goto B680760;
case 0x680764:c.instructions+=3;goto B680764;
case 0x680765:c.instructions+=2;goto B680765;
case 0x680768:c.instructions+=1;goto B680768;
case 0x68076a:goto L68076a;
case 0x68076d:c.instructions+=3;goto B68076d;
case 0x68076f:c.instructions+=2;goto B68076f;
case 0x680772:c.instructions+=1;goto B680772;
case 0x680777:goto L680777;
case 0x680779:c.instructions+=2;goto B680779;
case 0x68077b:c.instructions+=1;goto B68077b;
case 0x680781:goto L680781;
case 0x680782:c.instructions+=6;goto B680782;
case 0x680785:c.instructions+=5;goto B680785;
case 0x680788:c.instructions+=4;goto B680788;
case 0x680789:c.instructions+=3;goto B680789;
case 0x68078c:c.instructions+=2;goto B68078c;
case 0x680791:c.instructions+=1;goto B680791;
case 0x680796:goto L680796;
case 0x680798:c.instructions+=2;goto B680798;
case 0x68079b:c.instructions+=1;goto B68079b;
case 0x6807a1:goto L6807a1;
case 0x6807a4:c.instructions+=1;goto B6807a4;
case 0x6807aa:goto L6807aa;
case 0x6807ad:c.instructions+=1;goto B6807ad;
case 0x6807b3:goto L6807b3;
case 0x6807b5:goto L6807b5;
case 0x6807b8:c.instructions+=5;goto B6807b8;
case 0x6807ba:c.instructions+=4;goto B6807ba;
case 0x6807be:c.instructions+=3;goto B6807be;
case 0x6807bf:c.instructions+=2;goto B6807bf;
case 0x6807c2:c.instructions+=1;goto B6807c2;
case 0x6807c4:goto L6807c4;
case 0x6807c7:c.instructions+=3;goto B6807c7;
case 0x6807c9:c.instructions+=2;goto B6807c9;
case 0x6807cc:c.instructions+=1;goto B6807cc;
case 0x6807d1:goto L6807d1;
case 0x6807d3:c.instructions+=2;goto B6807d3;
case 0x6807d5:c.instructions+=1;goto B6807d5;
case 0x6807db:goto L6807db;
case 0x6807dc:c.instructions+=6;goto B6807dc;
case 0x6807df:c.instructions+=5;goto B6807df;
case 0x6807e2:c.instructions+=4;goto B6807e2;
case 0x6807e3:c.instructions+=3;goto B6807e3;
case 0x6807e6:c.instructions+=2;goto B6807e6;
case 0x6807eb:c.instructions+=1;goto B6807eb;
case 0x6807f0:goto L6807f0;
case 0x6807f3:c.instructions+=3;goto B6807f3;
case 0x6807f5:c.instructions+=2;goto B6807f5;
case 0x6807f7:c.instructions+=1;goto B6807f7;
case 0x6807fd:goto L6807fd;
case 0x680800:c.instructions+=1;goto B680800;
case 0x680806:goto L680806;
case 0x680809:c.instructions+=2;goto B680809;
case 0x68080c:c.instructions+=1;goto B68080c;
case 0x680812:goto L680812;
case 0x680815:goto L680815;
case 0x680817:c.instructions+=2;goto B680817;
case 0x68081a:c.instructions+=1;goto B68081a;
case 0x68081c:goto L68081c;
case 0x68081f:c.instructions+=14;goto B68081f;
case 0x680823:c.instructions+=13;goto B680823;
case 0x680826:c.instructions+=12;goto B680826;
case 0x68082a:c.instructions+=11;goto B68082a;
case 0x68082d:c.instructions+=10;goto B68082d;
case 0x680830:c.instructions+=9;goto B680830;
case 0x680833:c.instructions+=8;goto B680833;
case 0x680836:c.instructions+=7;goto B680836;
case 0x680839:c.instructions+=6;goto B680839;
case 0x68083c:c.instructions+=5;goto B68083c;
case 0x68083f:c.instructions+=4;goto B68083f;
case 0x680842:c.instructions+=3;goto B680842;
case 0x680845:c.instructions+=2;goto B680845;
case 0x680848:c.instructions+=1;goto B680848;
case 0x68084a:goto L68084a;
case 0x68084d:c.instructions+=3;goto B68084d;
case 0x680850:c.instructions+=2;goto B680850;
case 0x680853:c.instructions+=1;goto B680853;
case 0x680855:goto L680855;
case 0x68085a:goto L68085a;
case 0x68085c:c.instructions+=2;goto B68085c;
case 0x68085f:c.instructions+=1;goto B68085f;
case 0x680865:goto L680865;
case 0x680868:c.instructions+=1;goto B680868;
case 0x68086e:goto L68086e;
case 0x680871:c.instructions+=8;goto B680871;
case 0x680877:c.instructions+=7;goto B680877;
case 0x680878:c.instructions+=6;goto B680878;
case 0x680879:c.instructions+=5;goto B680879;
case 0x68087c:c.instructions+=4;goto B68087c;
case 0x68087d:c.instructions+=3;goto B68087d;
case 0x68087e:c.instructions+=2;goto B68087e;
case 0x680881:c.instructions+=1;goto B680881;
case 0x680886:goto L680886;
case 0x680889:c.instructions+=16;goto B680889;
case 0x68088c:c.instructions+=15;goto B68088c;
case 0x680892:c.instructions+=14;goto B680892;
case 0x680895:c.instructions+=13;goto B680895;
case 0x68089b:c.instructions+=12;goto B68089b;
case 0x68089d:c.instructions+=11;goto B68089d;
case 0x6808a3:c.instructions+=10;goto B6808a3;
case 0x6808a6:c.instructions+=9;goto B6808a6;
case 0x6808a8:c.instructions+=8;goto B6808a8;
case 0x6808ab:c.instructions+=7;goto B6808ab;
case 0x6808b1:c.instructions+=6;goto B6808b1;
case 0x6808b3:c.instructions+=5;goto B6808b3;
case 0x6808b6:c.instructions+=4;goto B6808b6;
case 0x6808b9:c.instructions+=3;goto B6808b9;
case 0x6808bc:c.instructions+=2;goto B6808bc;
case 0x6808bf:c.instructions+=1;goto B6808bf;
case 0x6808c4:goto L6808c4;
case 0x6808c6:c.instructions+=2;goto B6808c6;
case 0x6808c8:c.instructions+=1;goto B6808c8;
case 0x6808ca:goto L6808ca;
case 0x6808cc:c.instructions+=7;goto B6808cc;
case 0x6808cf:c.instructions+=6;goto B6808cf;
case 0x6808d0:c.instructions+=5;goto B6808d0;
case 0x6808d6:c.instructions+=4;goto B6808d6;
case 0x6808d7:c.instructions+=3;goto B6808d7;
case 0x6808da:c.instructions+=2;goto B6808da;
case 0x6808df:c.instructions+=1;goto B6808df;
case 0x6808e4:goto L6808e4;
case 0x6808e7:c.instructions+=5;goto B6808e7;
case 0x6808ec:c.instructions+=4;goto B6808ec;
case 0x6808f1:c.instructions+=3;goto B6808f1;
case 0x6808f2:c.instructions+=2;goto B6808f2;
case 0x6808f3:c.instructions+=1;goto B6808f3;
case 0x6808f8:goto L6808f8;
case 0x6808fb:c.instructions+=1;goto B6808fb;
case 0x6808fd:goto L6808fd;
case 0x680902:goto L680902;
case 0x680908:c.instructions+=3;goto B680908;
case 0x68090b:c.instructions+=2;goto B68090b;
case 0x680911:c.instructions+=1;goto B680911;
case 0x680914:goto L680914;
case 0x680918:c.instructions+=1;goto B680918;
case 0x68091d:goto L68091d;
case 0x68091e:c.instructions+=3;goto B68091e;
case 0x680921:c.instructions+=2;goto B680921;
case 0x680922:c.instructions+=1;goto B680922;
case 0x680924:goto L680924;
case 0x680925:c.instructions+=3;goto B680925;
case 0x680927:c.instructions+=2;goto B680927;
case 0x680928:c.instructions+=1;goto B680928;
case 0x68092a:goto L68092a;
case 0x68092f:goto L68092f;
case 0x680930:c.instructions+=2;goto B680930;
case 0x680931:c.instructions+=1;goto B680931;
case 0x680a9c:goto L680a9c;
case 0x680a9e:c.instructions+=9;goto B680a9e;
case 0x680a9f:c.instructions+=8;goto B680a9f;
case 0x680aa1:c.instructions+=7;goto B680aa1;
case 0x680aa4:c.instructions+=6;goto B680aa4;
case 0x680aa8:c.instructions+=5;goto B680aa8;
case 0x680aa9:c.instructions+=4;goto B680aa9;
case 0x680aaa:c.instructions+=3;goto B680aaa;
case 0x680aab:c.instructions+=2;goto B680aab;
case 0x680aad:c.instructions+=1;goto B680aad;
case 0x680ab3:goto L680ab3;
case 0x680ab6:c.instructions+=5;goto B680ab6;
case 0x680aba:c.instructions+=4;goto B680aba;
case 0x680abc:c.instructions+=3;goto B680abc;
case 0x680abd:c.instructions+=2;goto B680abd;
case 0x680abf:c.instructions+=1;goto B680abf;
case 0x680ac1:goto L680ac1;
case 0x680ac4:c.instructions+=4;goto B680ac4;
case 0x680ac6:c.instructions+=3;goto B680ac6;
case 0x680ac8:c.instructions+=2;goto B680ac8;
case 0x680acb:c.instructions+=1;goto B680acb;
case 0x680acd:goto L680acd;
case 0x680ad0:goto L680ad0;
case 0x680ad3:c.instructions+=5;goto B680ad3;
case 0x680ad4:c.instructions+=4;goto B680ad4;
case 0x680ad7:c.instructions+=3;goto B680ad7;
case 0x680ad9:c.instructions+=2;goto B680ad9;
case 0x680adb:c.instructions+=1;goto B680adb;
case 0x680ae0:goto L680ae0;
case 0x680ae2:c.instructions+=1;goto B680ae2;
case 0x680ae8:goto L680ae8;
case 0x680aee:c.instructions+=6;goto B680aee;
case 0x680af1:c.instructions+=5;goto B680af1;
case 0x680af3:c.instructions+=4;goto B680af3;
case 0x680af6:c.instructions+=3;goto B680af6;
case 0x680af8:c.instructions+=2;goto B680af8;
case 0x680afb:c.instructions+=1;goto B680afb;
case 0x680afd:goto L680afd;
case 0x680b03:c.instructions+=1;goto B680b03;
case 0x680b05:goto L680b05;
case 0x680b07:c.instructions+=3;goto B680b07;
case 0x680b09:c.instructions+=2;goto B680b09;
case 0x680b0c:c.instructions+=1;goto B680b0c;
case 0x680b0e:goto L680b0e;
case 0x680b11:c.instructions+=1;goto B680b11;
case 0x680b17:goto L680b17;
case 0x680b19:goto L680b19;
case 0x680b1b:goto L680b1b;
case 0x680b1e:c.instructions+=5;goto B680b1e;
case 0x680b21:c.instructions+=4;goto B680b21;
case 0x680b23:c.instructions+=3;goto B680b23;
case 0x680b25:c.instructions+=2;goto B680b25;
case 0x680b28:c.instructions+=1;goto B680b28;
case 0x680b2a:goto L680b2a;
case 0x680b2c:c.instructions+=3;goto B680b2c;
case 0x680b2f:c.instructions+=2;goto B680b2f;
case 0x680b35:c.instructions+=1;goto B680b35;
case 0x680b37:goto L680b37;
case 0x680b3a:c.instructions+=4;goto B680b3a;
case 0x680b3c:c.instructions+=3;goto B680b3c;
case 0x680b3e:c.instructions+=2;goto B680b3e;
case 0x680b41:c.instructions+=1;goto B680b41;
case 0x680b43:goto L680b43;
case 0x680b46:c.instructions+=1;goto B680b46;
case 0x680b4c:goto L680b4c;
case 0x680b4e:goto L680b4e;
case 0x680b50:goto L680b50;
case 0x680b51:c.instructions+=5;goto B680b51;
case 0x680b54:c.instructions+=4;goto B680b54;
case 0x680b57:c.instructions+=3;goto B680b57;
case 0x680b58:c.instructions+=2;goto B680b58;
case 0x680b5b:c.instructions+=1;goto B680b5b;
case 0x680b60:goto L680b60;
case 0x680b62:c.instructions+=3;goto B680b62;
case 0x680b63:c.instructions+=2;goto B680b63;
case 0x680b64:c.instructions+=1;goto B680b64;
case 0x680b66:goto L680b66;
case 0x680b69:c.instructions+=4;goto B680b69;
case 0x680b6f:c.instructions+=3;goto B680b6f;
case 0x680b71:c.instructions+=2;goto B680b71;
case 0x680b74:c.instructions+=1;goto B680b74;
case 0x680b76:goto L680b76;
case 0x680b79:c.instructions+=1;goto B680b79;
case 0x680b7e:goto L680b7e;
case 0x680b81:c.instructions+=1;goto B680b81;
case 0x680b83:goto L680b83;
case 0x680b87:goto L680b87;
case 0x680b8a:c.instructions+=4;goto B680b8a;
case 0x680b90:c.instructions+=3;goto B680b90;
case 0x680b92:c.instructions+=2;goto B680b92;
case 0x680b95:c.instructions+=1;goto B680b95;
case 0x680b9b:goto L680b9b;
case 0x680b9e:c.instructions+=3;goto B680b9e;
case 0x680ba1:c.instructions+=2;goto B680ba1;
case 0x680ba4:c.instructions+=1;goto B680ba4;
case 0x680baa:goto L680baa;
case 0x680bad:c.instructions+=4;goto B680bad;
case 0x680bae:c.instructions+=3;goto B680bae;
case 0x680baf:c.instructions+=2;goto B680baf;
case 0x680bb2:c.instructions+=1;goto B680bb2;
case 0x680bb7:goto L680bb7;
case 0x680bb9:c.instructions+=3;goto B680bb9;
case 0x680bba:c.instructions+=2;goto B680bba;
case 0x680bbb:c.instructions+=1;goto B680bbb;
case 0x680bbd:goto L680bbd;
case 0x680bc0:c.instructions+=1;goto B680bc0;
case 0x680bc5:goto L680bc5;
case 0x680bc7:goto L680bc7;
case 0x680bca:c.instructions+=1;goto B680bca;
case 0x680bcb:goto L680bcb;
case 0x680bcc:c.instructions+=2;goto B680bcc;
case 0x680bcf:c.instructions+=1;goto B680bcf;
case 0x680bd1:goto L680bd1;
case 0x680bd4:goto L680bd4;
case 0x680bd6:c.instructions+=2;goto B680bd6;
case 0x680bd9:c.instructions+=1;goto B680bd9;
case 0x680bdf:goto L680bdf;
case 0x680be2:c.instructions+=2;goto B680be2;
case 0x680be5:c.instructions+=1;goto B680be5;
case 0x680be7:goto L680be7;
case 0x680bea:c.instructions+=4;goto B680bea;
case 0x680bec:c.instructions+=3;goto B680bec;
case 0x680bed:c.instructions+=2;goto B680bed;
case 0x680bf0:c.instructions+=1;goto B680bf0;
case 0x680bf5:goto L680bf5;
case 0x680bf7:c.instructions+=1;goto B680bf7;
case 0x680bfd:goto L680bfd;
case 0x680c00:c.instructions+=4;goto B680c00;
case 0x680c02:c.instructions+=3;goto B680c02;
case 0x680c05:c.instructions+=2;goto B680c05;
case 0x680c08:c.instructions+=1;goto B680c08;
case 0x680c0a:goto L680c0a;
case 0x680c0d:c.instructions+=4;goto B680c0d;
case 0x680c10:c.instructions+=3;goto B680c10;
case 0x680c13:c.instructions+=2;goto B680c13;
case 0x680c16:c.instructions+=1;goto B680c16;
case 0x680c19:goto L680c19;
case 0x680c1c:c.instructions+=11;goto B680c1c;
case 0x680c1f:c.instructions+=10;goto B680c1f;
case 0x680c22:c.instructions+=9;goto B680c22;
case 0x680c25:c.instructions+=8;goto B680c25;
case 0x680c28:c.instructions+=7;goto B680c28;
case 0x680c2b:c.instructions+=6;goto B680c2b;
case 0x680c2e:c.instructions+=5;goto B680c2e;
case 0x680c31:c.instructions+=4;goto B680c31;
case 0x680c33:c.instructions+=3;goto B680c33;
case 0x680c34:c.instructions+=2;goto B680c34;
case 0x680c37:c.instructions+=1;goto B680c37;
case 0x680c39:goto L680c39;
case 0x680c3c:c.instructions+=17;goto B680c3c;
case 0x680c3f:c.instructions+=16;goto B680c3f;
case 0x680c42:c.instructions+=15;goto B680c42;
case 0x680c44:c.instructions+=14;goto B680c44;
case 0x680c46:c.instructions+=13;goto B680c46;
case 0x680c47:c.instructions+=12;goto B680c47;
case 0x680c49:c.instructions+=11;goto B680c49;
case 0x680c4c:c.instructions+=10;goto B680c4c;
case 0x680c4e:c.instructions+=9;goto B680c4e;
case 0x680c51:c.instructions+=8;goto B680c51;
case 0x680c54:c.instructions+=7;goto B680c54;
case 0x680c56:c.instructions+=6;goto B680c56;
case 0x680c59:c.instructions+=5;goto B680c59;
case 0x680c5e:c.instructions+=4;goto B680c5e;
case 0x680c62:c.instructions+=3;goto B680c62;
case 0x680c65:c.instructions+=2;goto B680c65;
case 0x680c68:c.instructions+=1;goto B680c68;
case 0x680c6a:goto L680c6a;
case 0x680c6d:c.instructions+=2;goto B680c6d;
case 0x680c70:c.instructions+=1;goto B680c70;
case 0x680c72:goto L680c72;
case 0x680c75:c.instructions+=2;goto B680c75;
case 0x680c78:c.instructions+=1;goto B680c78;
case 0x680c7a:goto L680c7a;
case 0x680c7e:c.instructions+=1;goto B680c7e;
case 0x680c80:goto L680c80;
case 0x680c84:c.instructions+=1;goto B680c84;
case 0x680c86:goto L680c86;
case 0x680c89:c.instructions+=3;goto B680c89;
case 0x680c8c:c.instructions+=2;goto B680c8c;
case 0x680c8e:c.instructions+=1;goto B680c8e;
case 0x680c94:goto L680c94;
case 0x680c97:goto L680c97;
case 0x680c99:goto L680c99;
case 0x680c9b:goto L680c9b;
case 0x680ca0:goto L680ca0;
case 0x680ca5:c.instructions+=2;goto B680ca5;
case 0x680caa:c.instructions+=1;goto B680caa;
case 0x680caf:goto L680caf;
case 0x680cb3:c.instructions+=1;goto B680cb3;
case 0x680cb5:goto L680cb5;
case 0x680cb8:c.instructions+=2;goto B680cb8;
case 0x680cbc:c.instructions+=1;goto B680cbc;
case 0x680cbe:goto L680cbe;
case 0x680cc1:goto L680cc1;
case 0x680cc4:c.instructions+=3;goto B680cc4;
case 0x680cc7:c.instructions+=2;goto B680cc7;
case 0x680cca:c.instructions+=1;goto B680cca;
case 0x680ccc:goto L680ccc;
case 0x680ccf:c.instructions+=2;goto B680ccf;
case 0x680cd2:c.instructions+=1;goto B680cd2;
case 0x680cd7:goto L680cd7;
case 0x680cda:c.instructions+=5;goto B680cda;
case 0x680cdc:c.instructions+=4;goto B680cdc;
case 0x680cdf:c.instructions+=3;goto B680cdf;
case 0x680ce2:c.instructions+=2;goto B680ce2;
case 0x680ce5:c.instructions+=1;goto B680ce5;
case 0x680ce7:goto L680ce7;
case 0x680cea:goto L680cea;
case 0x680cec:c.instructions+=2;goto B680cec;
case 0x680cef:c.instructions+=1;goto B680cef;
case 0x680cf1:goto L680cf1;
case 0x680cf4:c.instructions+=1;goto B680cf4;
case 0x680cf6:goto L680cf6;
case 0x680cf9:c.instructions+=9;goto B680cf9;
case 0x680cfc:c.instructions+=8;goto B680cfc;
case 0x680cff:c.instructions+=7;goto B680cff;
case 0x680d01:c.instructions+=6;goto B680d01;
case 0x680d04:c.instructions+=5;goto B680d04;
case 0x680d07:c.instructions+=4;goto B680d07;
case 0x680d0a:c.instructions+=3;goto B680d0a;
case 0x680d0d:c.instructions+=2;goto B680d0d;
case 0x680d10:c.instructions+=1;goto B680d10;
case 0x680d12:goto L680d12;
case 0x680d15:c.instructions+=2;goto B680d15;
case 0x680d18:c.instructions+=1;goto B680d18;
case 0x680d1a:goto L680d1a;
case 0x680d1d:c.instructions+=2;goto B680d1d;
case 0x680d20:c.instructions+=1;goto B680d20;
case 0x680d22:goto L680d22;
case 0x680d26:goto L680d26;
case 0x680d29:c.instructions+=2;goto B680d29;
case 0x680d2c:c.instructions+=1;goto B680d2c;
case 0x680d2e:goto L680d2e;
case 0x680d30:goto L680d30;
case 0x680d34:goto L680d34;
case 0x680d38:goto L680d38;
case 0x680d3b:c.instructions+=5;goto B680d3b;
case 0x680d3f:c.instructions+=4;goto B680d3f;
case 0x680d40:c.instructions+=3;goto B680d40;
case 0x680d43:c.instructions+=2;goto B680d43;
case 0x680d46:c.instructions+=1;goto B680d46;
case 0x680d48:goto L680d48;
case 0x680d4a:c.instructions+=2;goto B680d4a;
case 0x680d4d:c.instructions+=1;goto B680d4d;
case 0x680d4f:goto L680d4f;
case 0x680d52:goto L680d52;
case 0x680d55:c.instructions+=1;goto B680d55;
case 0x680d57:goto L680d57;
case 0x680d5a:c.instructions+=1;goto B680d5a;
case 0x680d5c:goto L680d5c;
case 0x680d5e:goto L680d5e;
case 0x680d61:c.instructions+=1;goto B680d61;
case 0x680d66:goto L680d66;
case 0x680d69:c.instructions+=1;goto B680d69;
case 0x680d6b:goto L680d6b;
case 0x680d6e:c.instructions+=1;goto B680d6e;
case 0x680d70:goto L680d70;
case 0x680d73:c.instructions+=13;goto B680d73;
case 0x680d76:c.instructions+=12;goto B680d76;
case 0x680d78:c.instructions+=11;goto B680d78;
case 0x680d7b:c.instructions+=10;goto B680d7b;
case 0x680d7e:c.instructions+=9;goto B680d7e;
case 0x680d81:c.instructions+=8;goto B680d81;
case 0x680d84:c.instructions+=7;goto B680d84;
case 0x680d87:c.instructions+=6;goto B680d87;
case 0x680d8a:c.instructions+=5;goto B680d8a;
case 0x680d8c:c.instructions+=4;goto B680d8c;
case 0x680d8d:c.instructions+=3;goto B680d8d;
case 0x680d8f:c.instructions+=2;goto B680d8f;
case 0x680d92:c.instructions+=1;goto B680d92;
case 0x680d94:goto L680d94;
case 0x680d97:c.instructions+=2;goto B680d97;
case 0x680d9b:c.instructions+=1;goto B680d9b;
case 0x680d9e:goto L680d9e;
case 0x680da1:c.instructions+=9;goto B680da1;
case 0x680da3:c.instructions+=8;goto B680da3;
case 0x680da6:c.instructions+=7;goto B680da6;
case 0x680da9:c.instructions+=6;goto B680da9;
case 0x680dac:c.instructions+=5;goto B680dac;
case 0x680daf:c.instructions+=4;goto B680daf;
case 0x680db2:c.instructions+=3;goto B680db2;
case 0x680db5:c.instructions+=2;goto B680db5;
case 0x680db7:c.instructions+=1;goto B680db7;
case 0x680db9:goto L680db9;
case 0x680dbc:c.instructions+=4;goto B680dbc;
case 0x680dbf:c.instructions+=3;goto B680dbf;
case 0x680dc3:c.instructions+=2;goto B680dc3;
case 0x680dc6:c.instructions+=1;goto B680dc6;
case 0x680dc8:goto L680dc8;
case 0x680dca:goto L680dca;
case 0x680dce:goto L680dce;
case 0x680dd1:goto L680dd1;
case 0x680dd5:c.instructions+=1;goto B680dd5;
case 0x680dd7:goto L680dd7;
case 0x680ddb:goto L680ddb;
case 0x680ddd:c.instructions+=2;goto B680ddd;
case 0x680de0:c.instructions+=1;goto B680de0;
case 0x680de2:goto L680de2;
case 0x680de5:c.instructions+=1;goto B680de5;
case 0x680de7:goto L680de7;
case 0x680dea:c.instructions+=1;goto B680dea;
case 0x680dec:goto L680dec;
case 0x680def:c.instructions+=1;goto B680def;
case 0x680df5:goto L680df5;
case 0x680dfa:c.instructions+=2;goto B680dfa;
case 0x680dff:c.instructions+=1;goto B680dff;
case 0x680e04:goto L680e04;
case 0x680e07:c.instructions+=1;goto B680e07;
case 0x680e0d:goto L680e0d;
case 0x680e0f:c.instructions+=3;goto B680e0f;
case 0x680e10:c.instructions+=2;goto B680e10;
case 0x680e13:c.instructions+=1;goto B680e13;
case 0x680e15:goto L680e15;
case 0x680e18:c.instructions+=7;goto B680e18;
case 0x680e1b:c.instructions+=6;goto B680e1b;
case 0x680e1e:c.instructions+=5;goto B680e1e;
case 0x680e21:c.instructions+=4;goto B680e21;
case 0x680e23:c.instructions+=3;goto B680e23;
case 0x680e26:c.instructions+=2;goto B680e26;
case 0x680e29:c.instructions+=1;goto B680e29;
case 0x680e2c:goto L680e2c;
case 0x680e2f:c.instructions+=5;goto B680e2f;
case 0x680e32:c.instructions+=4;goto B680e32;
case 0x680e34:c.instructions+=3;goto B680e34;
case 0x680e37:c.instructions+=2;goto B680e37;
case 0x680e3c:c.instructions+=1;goto B680e3c;
case 0x680e3e:goto L680e3e;
case 0x680e41:c.instructions+=2;goto B680e41;
case 0x680e44:c.instructions+=1;goto B680e44;
case 0x680e4a:goto L680e4a;
case 0x680e4c:c.instructions+=4;goto B680e4c;
case 0x680e4f:c.instructions+=3;goto B680e4f;
case 0x680e52:c.instructions+=2;goto B680e52;
case 0x680e55:c.instructions+=1;goto B680e55;
case 0x680e57:goto L680e57;
case 0x680e5d:goto L680e5d;
case 0x680e5e:c.instructions+=6;goto B680e5e;
case 0x680e5f:c.instructions+=5;goto B680e5f;
case 0x680e62:c.instructions+=4;goto B680e62;
case 0x680e64:c.instructions+=3;goto B680e64;
case 0x680e66:c.instructions+=2;goto B680e66;
case 0x680e69:c.instructions+=1;goto B680e69;
case 0x680e6e:goto L680e6e;
case 0x680e71:c.instructions+=2;goto B680e71;
case 0x680e74:c.instructions+=1;goto B680e74;
case 0x680e7a:goto L680e7a;
case 0x680e7d:c.instructions+=12;goto B680e7d;
case 0x680e80:c.instructions+=11;goto B680e80;
case 0x680e83:c.instructions+=10;goto B680e83;
case 0x680e84:c.instructions+=9;goto B680e84;
case 0x680e85:c.instructions+=8;goto B680e85;
case 0x680e86:c.instructions+=7;goto B680e86;
case 0x680e87:c.instructions+=6;goto B680e87;
case 0x680e88:c.instructions+=5;goto B680e88;
case 0x680e8b:c.instructions+=4;goto B680e8b;
case 0x680e8e:c.instructions+=3;goto B680e8e;
case 0x680e91:c.instructions+=2;goto B680e91;
case 0x680e94:c.instructions+=1;goto B680e94;
case 0x680e9a:goto L680e9a;
case 0x680e9d:c.instructions+=10;goto B680e9d;
case 0x680e9f:c.instructions+=9;goto B680e9f;
case 0x680ea1:c.instructions+=8;goto B680ea1;
case 0x680ea4:c.instructions+=7;goto B680ea4;
case 0x680ea5:c.instructions+=6;goto B680ea5;
case 0x680ea8:c.instructions+=5;goto B680ea8;
case 0x680ea9:c.instructions+=4;goto B680ea9;
case 0x680eae:c.instructions+=3;goto B680eae;
case 0x680eaf:c.instructions+=2;goto B680eaf;
case 0x680eb1:c.instructions+=1;goto B680eb1;
case 0x680eb6:goto L680eb6;
case 0x680eb8:c.instructions+=1;goto B680eb8;
case 0x680ebe:goto L680ebe;
case 0x680ec0:c.instructions+=9;goto B680ec0;
case 0x680ec2:c.instructions+=8;goto B680ec2;
case 0x680ec5:c.instructions+=7;goto B680ec5;
case 0x680ec6:c.instructions+=6;goto B680ec6;
case 0x680ec9:c.instructions+=5;goto B680ec9;
case 0x680eca:c.instructions+=4;goto B680eca;
case 0x680ecf:c.instructions+=3;goto B680ecf;
case 0x680ed0:c.instructions+=2;goto B680ed0;
case 0x680ed2:c.instructions+=1;goto B680ed2;
case 0x680ed7:goto L680ed7;
case 0x680ed9:c.instructions+=1;goto B680ed9;
case 0x680edf:goto L680edf;
case 0x680ee1:c.instructions+=9;goto B680ee1;
case 0x680ee3:c.instructions+=8;goto B680ee3;
case 0x680ee6:c.instructions+=7;goto B680ee6;
case 0x680ee7:c.instructions+=6;goto B680ee7;
case 0x680eea:c.instructions+=5;goto B680eea;
case 0x680eeb:c.instructions+=4;goto B680eeb;
case 0x680ef0:c.instructions+=3;goto B680ef0;
case 0x680ef1:c.instructions+=2;goto B680ef1;
case 0x680ef3:c.instructions+=1;goto B680ef3;
case 0x680ef8:goto L680ef8;
case 0x680efa:c.instructions+=1;goto B680efa;
case 0x680f00:goto L680f00;
case 0x680f02:c.instructions+=10;goto B680f02;
case 0x680f05:c.instructions+=9;goto B680f05;
case 0x680f06:c.instructions+=8;goto B680f06;
case 0x680f09:c.instructions+=7;goto B680f09;
case 0x680f0a:c.instructions+=6;goto B680f0a;
case 0x680f0d:c.instructions+=5;goto B680f0d;
case 0x680f0e:c.instructions+=4;goto B680f0e;
case 0x680f0f:c.instructions+=3;goto B680f0f;
case 0x680f10:c.instructions+=2;goto B680f10;
case 0x680f12:c.instructions+=1;goto B680f12;
case 0x680f17:goto L680f17;
case 0x680f19:c.instructions+=1;goto B680f19;
case 0x680f1f:goto L680f1f;
case 0x680f22:c.instructions+=1;goto B680f22;
case 0x680f25:goto L680f25;
case 0x680f27:c.instructions+=10;goto B680f27;
case 0x680f2a:c.instructions+=9;goto B680f2a;
case 0x680f2b:c.instructions+=8;goto B680f2b;
case 0x680f2e:c.instructions+=7;goto B680f2e;
case 0x680f2f:c.instructions+=6;goto B680f2f;
case 0x680f32:c.instructions+=5;goto B680f32;
case 0x680f33:c.instructions+=4;goto B680f33;
case 0x680f38:c.instructions+=3;goto B680f38;
case 0x680f3b:c.instructions+=2;goto B680f3b;
case 0x680f3d:c.instructions+=1;goto B680f3d;
case 0x680f42:goto L680f42;
case 0x680f44:c.instructions+=1;goto B680f44;
case 0x680f4a:goto L680f4a;
case 0x680f4d:c.instructions+=1;goto B680f4d;
case 0x680f50:goto L680f50;
case 0x680f53:c.instructions+=8;goto B680f53;
case 0x680f56:c.instructions+=7;goto B680f56;
case 0x680f58:c.instructions+=6;goto B680f58;
case 0x680f5b:c.instructions+=5;goto B680f5b;
case 0x680f5e:c.instructions+=4;goto B680f5e;
case 0x680f61:c.instructions+=3;goto B680f61;
case 0x680f64:c.instructions+=2;goto B680f64;
case 0x680f67:c.instructions+=1;goto B680f67;
case 0x680f6d:goto L680f6d;
case 0x680f70:c.instructions+=16;goto B680f70;
case 0x680f76:c.instructions+=15;goto B680f76;
case 0x680f79:c.instructions+=14;goto B680f79;
case 0x680f7c:c.instructions+=13;goto B680f7c;
case 0x680f7f:c.instructions+=12;goto B680f7f;
case 0x680f82:c.instructions+=11;goto B680f82;
case 0x680f85:c.instructions+=10;goto B680f85;
case 0x680f86:c.instructions+=9;goto B680f86;
case 0x680f87:c.instructions+=8;goto B680f87;
case 0x680f88:c.instructions+=7;goto B680f88;
case 0x680f89:c.instructions+=6;goto B680f89;
case 0x680f8a:c.instructions+=5;goto B680f8a;
case 0x680f8d:c.instructions+=4;goto B680f8d;
case 0x680f90:c.instructions+=3;goto B680f90;
case 0x680f93:c.instructions+=2;goto B680f93;
case 0x680f96:c.instructions+=1;goto B680f96;
case 0x680f9c:goto L680f9c;
case 0x680f9f:c.instructions+=10;goto B680f9f;
case 0x680fa1:c.instructions+=9;goto B680fa1;
case 0x680fa3:c.instructions+=8;goto B680fa3;
case 0x680fa6:c.instructions+=7;goto B680fa6;
case 0x680fa7:c.instructions+=6;goto B680fa7;
case 0x680faa:c.instructions+=5;goto B680faa;
case 0x680fab:c.instructions+=4;goto B680fab;
case 0x680fb0:c.instructions+=3;goto B680fb0;
case 0x680fb1:c.instructions+=2;goto B680fb1;
case 0x680fb3:c.instructions+=1;goto B680fb3;
case 0x680fb8:goto L680fb8;
case 0x680fba:c.instructions+=1;goto B680fba;
case 0x680fc0:goto L680fc0;
case 0x680fc2:c.instructions+=9;goto B680fc2;
case 0x680fc4:c.instructions+=8;goto B680fc4;
case 0x680fc7:c.instructions+=7;goto B680fc7;
case 0x680fc8:c.instructions+=6;goto B680fc8;
case 0x680fcb:c.instructions+=5;goto B680fcb;
case 0x680fcc:c.instructions+=4;goto B680fcc;
case 0x680fd1:c.instructions+=3;goto B680fd1;
case 0x680fd2:c.instructions+=2;goto B680fd2;
case 0x680fd4:c.instructions+=1;goto B680fd4;
case 0x680fd9:goto L680fd9;
case 0x680fdb:c.instructions+=1;goto B680fdb;
case 0x680fe1:goto L680fe1;
case 0x680fe3:c.instructions+=9;goto B680fe3;
case 0x680fe5:c.instructions+=8;goto B680fe5;
case 0x680fe8:c.instructions+=7;goto B680fe8;
case 0x680fe9:c.instructions+=6;goto B680fe9;
case 0x680fec:c.instructions+=5;goto B680fec;
case 0x680fed:c.instructions+=4;goto B680fed;
case 0x680ff2:c.instructions+=3;goto B680ff2;
case 0x680ff3:c.instructions+=2;goto B680ff3;
case 0x680ff5:c.instructions+=1;goto B680ff5;
case 0x680ffa:goto L680ffa;
case 0x680ffc:c.instructions+=1;goto B680ffc;
default:missing_instruction(c.pc);}
B680001:L680001:{c.instructions+=6;NFSU2_TR(0x680001);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B680004:{NFSU2_TR(0x680004);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+8),(U+0),4);
}
B680006:{NFSU2_TR(0x680006);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B680007:{NFSU2_TR(0x680007);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(U+0))<(u32(0x2ull))));
}
B68000a:{NFSU2_TR(0x68000a);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffffe4ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+8),4);
s4(u32(r4(U+8)),r4(U+12));
}
B68000e:{NFSU2_TR(0x68000e);
if(r1(R+512)){TAIL_STATIC(0x67ffe1u,67f);}
}
B680010:L680010:{c.instructions+=4;NFSU2_TR(0x680010);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B680013:{NFSU2_TR(0x680013);
__builtin_memmove((R+4),(R+12),4);
}
B680015:{NFSU2_TR(0x680015);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B680018:{NFSU2_TR(0x680018);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x68001dull));
TAIL_STATIC(0x673b2cu,673);
}
B68001d:L68001d:{c.instructions+=3;NFSU2_TR(0x68001d);
__builtin_memmove((R+24),(R+0),4);
}
B68001f:{NFSU2_TR(0x68001f);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B680021:{NFSU2_TR(0x680021);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L680902;}}
}
B680027:L680027:{c.instructions+=8;NFSU2_TR(0x680027);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B680028:{NFSU2_TR(0x680028);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B68002b:{NFSU2_TR(0x68002b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B68002c:{NFSU2_TR(0x68002c);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((R+0),(U+0),4);
}
B68002f:{NFSU2_TR(0x68002f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B680030:{NFSU2_TR(0x680030);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B680033:{NFSU2_TR(0x680033);
u8 U[4];
w4(U+0,u32(0x60100002ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B680038:{NFSU2_TR(0x680038);
TAIL_STATIC(0x67af04u,67a);
}
B68003d:L68003d:{c.instructions+=3;NFSU2_TR(0x68003d);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B68003f:{NFSU2_TR(0x68003f);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B680042:{NFSU2_TR(0x680042);
if(r1(R+518)){{goto L6808fd;}}
}
B680048:L680048:{c.instructions+=2;NFSU2_TR(0x680048);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B68004b:{NFSU2_TR(0x68004b);
if(r1(R+518)){{goto L6808fd;}}
}
B680051:L680051:{c.instructions+=2;NFSU2_TR(0x680051);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B680054:{NFSU2_TR(0x680054);
if(r1(R+518)){TAIL_STATIC(0x67af18u,67a);}
}
B68005a:L68005a:{c.instructions+=1;NFSU2_TR(0x68005a);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B68005c:L68005c:{c.instructions+=6;NFSU2_TR(0x68005c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B68005f:{NFSU2_TR(0x68005f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+4),(U+0),4);
}
B680061:{NFSU2_TR(0x680061);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffffdcull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+4),4);
s4(u32(r4(U+8)),r4(U+12));
}
B680065:{NFSU2_TR(0x680065);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B680066:{NFSU2_TR(0x680066);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(U+0))<(u32(0x4ull))));
}
B680069:{NFSU2_TR(0x680069);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x68005cu);}goto L68005c;}}
}
B68006b:L68006b:{c.instructions+=4;NFSU2_TR(0x68006b);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B68006e:{NFSU2_TR(0x68006e);
__builtin_memmove((R+4),(R+12),4);
}
B680070:{NFSU2_TR(0x680070);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B680073:{NFSU2_TR(0x680073);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x680078ull));
TAIL_STATIC(0x673b2cu,673);
}
B680078:L680078:{c.instructions+=3;NFSU2_TR(0x680078);
__builtin_memmove((R+24),(R+0),4);
}
B68007a:{NFSU2_TR(0x68007a);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B68007c:{NFSU2_TR(0x68007c);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L680902;}}
}
B680082:L680082:{c.instructions+=7;NFSU2_TR(0x680082);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B680083:{NFSU2_TR(0x680083);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffbcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B680086:{NFSU2_TR(0x680086);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((R+0),(U+0),4);
}
B680089:{NFSU2_TR(0x680089);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B68008a:{NFSU2_TR(0x68008a);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B68008d:{NFSU2_TR(0x68008d);
u8 U[4];
w4(U+0,u32(0x60200004ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B680092:{NFSU2_TR(0x680092);
TAIL_STATIC(0x67af04u,67a);
}
B680097:L680097:{c.instructions+=3;NFSU2_TR(0x680097);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B680099:{NFSU2_TR(0x680099);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B68009c:{NFSU2_TR(0x68009c);
if(r1(R+518)){{goto L6808fd;}}
}
B6800a2:L6800a2:{c.instructions+=2;NFSU2_TR(0x6800a2);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6800a5:{NFSU2_TR(0x6800a5);
if(r1(R+518)){{goto L6808fd;}}
}
B6800ab:L6800ab:{c.instructions+=2;NFSU2_TR(0x6800ab);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6800ae:{NFSU2_TR(0x6800ae);
if(r1(R+518)){TAIL_STATIC(0x67af18u,67a);}
}
B6800b4:L6800b4:{c.instructions+=1;NFSU2_TR(0x6800b4);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6800b6:L6800b6:{c.instructions+=6;NFSU2_TR(0x6800b6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6800b9:{NFSU2_TR(0x6800b9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6800bb:{NFSU2_TR(0x6800bb);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffffdcull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+4),4);
s4(u32(r4(U+8)),r4(U+12));
}
B6800bf:{NFSU2_TR(0x6800bf);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6800c0:{NFSU2_TR(0x6800c0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(U+0))<(u32(0x4ull))));
}
B6800c3:{NFSU2_TR(0x6800c3);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6800b6u);}goto L6800b6;}}
}
B6800c5:L6800c5:{c.instructions+=4;NFSU2_TR(0x6800c5);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6800c8:{NFSU2_TR(0x6800c8);
__builtin_memmove((R+4),(R+12),4);
}
B6800ca:{NFSU2_TR(0x6800ca);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6800cd:{NFSU2_TR(0x6800cd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6800d2ull));
TAIL_STATIC(0x673b2cu,673);
}
B6800d2:L6800d2:{c.instructions+=3;NFSU2_TR(0x6800d2);
__builtin_memmove((R+24),(R+0),4);
}
B6800d4:{NFSU2_TR(0x6800d4);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6800d6:{NFSU2_TR(0x6800d6);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L680902;}}
}
B6800dc:L6800dc:{c.instructions+=7;NFSU2_TR(0x6800dc);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6800dd:{NFSU2_TR(0x6800dd);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffbcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6800e0:{NFSU2_TR(0x6800e0);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((R+0),(U+0),4);
}
B6800e3:{NFSU2_TR(0x6800e3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6800e4:{NFSU2_TR(0x6800e4);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6800e7:{NFSU2_TR(0x6800e7);
u8 U[4];
w4(U+0,u32(0x60300004ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6800ec:{NFSU2_TR(0x6800ec);
TAIL_STATIC(0x67af04u,67a);
}
B6800f1:L6800f1:{c.instructions+=3;NFSU2_TR(0x6800f1);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B6800f3:{NFSU2_TR(0x6800f3);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6800f6:{NFSU2_TR(0x6800f6);
if(r1(R+518)){{goto L6808fd;}}
}
B6800fc:L6800fc:{c.instructions+=2;NFSU2_TR(0x6800fc);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6800ff:{NFSU2_TR(0x6800ff);
if(r1(R+518)){{goto L6808fd;}}
}
B680105:L680105:{c.instructions+=2;NFSU2_TR(0x680105);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B680108:{NFSU2_TR(0x680108);
if(r1(R+518)){TAIL_STATIC(0x67af18u,67a);}
}
B68010e:L68010e:{c.instructions+=1;NFSU2_TR(0x68010e);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B680110:L680110:{c.instructions+=6;NFSU2_TR(0x680110);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B680113:{NFSU2_TR(0x680113);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+4),(U+0),4);
}
B680115:{NFSU2_TR(0x680115);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffffdcull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+4),4);
s4(u32(r4(U+8)),r4(U+12));
}
B680119:{NFSU2_TR(0x680119);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B68011a:{NFSU2_TR(0x68011a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(U+0))<(u32(0x4ull))));
}
B68011d:{NFSU2_TR(0x68011d);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x680110u);}goto L680110;}}
}
B68011f:L68011f:{c.instructions+=4;NFSU2_TR(0x68011f);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B680122:{NFSU2_TR(0x680122);
__builtin_memmove((R+4),(R+12),4);
}
B680124:{NFSU2_TR(0x680124);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B680127:{NFSU2_TR(0x680127);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x68012cull));
TAIL_STATIC(0x673b2cu,673);
}
B68012c:L68012c:{c.instructions+=3;NFSU2_TR(0x68012c);
__builtin_memmove((R+24),(R+0),4);
}
B68012e:{NFSU2_TR(0x68012e);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B680130:{NFSU2_TR(0x680130);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L680902;}}
}
B680136:L680136:{c.instructions+=7;NFSU2_TR(0x680136);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B680137:{NFSU2_TR(0x680137);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffbcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B68013a:{NFSU2_TR(0x68013a);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((R+0),(U+0),4);
}
B68013d:{NFSU2_TR(0x68013d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B68013e:{NFSU2_TR(0x68013e);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B680141:{NFSU2_TR(0x680141);
u8 U[4];
w4(U+0,u32(0x60400004ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B680146:{NFSU2_TR(0x680146);
TAIL_STATIC(0x67af04u,67a);
}
B68014b:L68014b:{c.instructions+=3;NFSU2_TR(0x68014b);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B68014d:{NFSU2_TR(0x68014d);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B680150:{NFSU2_TR(0x680150);
if(r1(R+518)){{goto L6808fd;}}
}
B680156:L680156:{c.instructions+=2;NFSU2_TR(0x680156);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B680159:{NFSU2_TR(0x680159);
if(r1(R+518)){{goto L6808fd;}}
}
B68015f:L68015f:{c.instructions+=2;NFSU2_TR(0x68015f);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B680162:{NFSU2_TR(0x680162);
if(r1(R+518)){TAIL_STATIC(0x67af18u,67a);}
}
B680168:L680168:{c.instructions+=1;NFSU2_TR(0x680168);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B68016a:L68016a:{c.instructions+=6;NFSU2_TR(0x68016a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B68016d:{NFSU2_TR(0x68016d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+4),(U+0),4);
}
B68016f:{NFSU2_TR(0x68016f);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffffacull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+4),4);
s4(u32(r4(U+8)),r4(U+12));
}
B680173:{NFSU2_TR(0x680173);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B680174:{NFSU2_TR(0x680174);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(U+0))<(u32(0x2ull))));
}
B680177:{NFSU2_TR(0x680177);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x68016au);}goto L68016a;}}
}
B680179:L680179:{c.instructions+=4;NFSU2_TR(0x680179);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B68017c:{NFSU2_TR(0x68017c);
__builtin_memmove((R+4),(R+12),4);
}
B68017e:{NFSU2_TR(0x68017e);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B680181:{NFSU2_TR(0x680181);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x680186ull));
TAIL_STATIC(0x673b2cu,673);
}
B680186:L680186:{c.instructions+=3;NFSU2_TR(0x680186);
__builtin_memmove((R+24),(R+0),4);
}
B680188:{NFSU2_TR(0x680188);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B68018a:{NFSU2_TR(0x68018a);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L680902;}}
}
B680190:L680190:{c.instructions+=7;NFSU2_TR(0x680190);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B680191:{NFSU2_TR(0x680191);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffbcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B680194:{NFSU2_TR(0x680194);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffacull))));
__builtin_memmove((R+0),(U+0),4);
}
B680197:{NFSU2_TR(0x680197);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B680198:{NFSU2_TR(0x680198);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B68019b:{NFSU2_TR(0x68019b);
u8 U[4];
w4(U+0,u32(0x60500002ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6801a0:{NFSU2_TR(0x6801a0);
TAIL_STATIC(0x67af04u,67a);
}
B6801a5:L6801a5:{c.instructions+=3;NFSU2_TR(0x6801a5);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B6801a7:{NFSU2_TR(0x6801a7);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6801aa:{NFSU2_TR(0x6801aa);
if(r1(R+518)){{goto L6808fd;}}
}
B6801b0:L6801b0:{c.instructions+=2;NFSU2_TR(0x6801b0);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6801b3:{NFSU2_TR(0x6801b3);
if(r1(R+518)){{goto L6808fd;}}
}
B6801b9:L6801b9:{c.instructions+=2;NFSU2_TR(0x6801b9);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6801bc:{NFSU2_TR(0x6801bc);
if(r1(R+518)){{goto L6808fd;}}
}
B6801c2:L6801c2:{c.instructions+=2;NFSU2_TR(0x6801c2);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6801c5:{NFSU2_TR(0x6801c5);
if(r1(R+518)){{goto L6808fd;}}
}
B6801cb:L6801cb:{c.instructions+=2;NFSU2_TR(0x6801cb);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6801ce:{NFSU2_TR(0x6801ce);
if(r1(R+518)){TAIL_STATIC(0x67af18u,67a);}
}
B6801d4:L6801d4:{c.instructions+=19;NFSU2_TR(0x6801d4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffbcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6801d7:{NFSU2_TR(0x6801d7);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((R+8),(U+0),4);
}
B6801da:{NFSU2_TR(0x6801da);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+0))));
}
B6801dc:{NFSU2_TR(0x6801dc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff94ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6801df:{NFSU2_TR(0x6801df);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6801e2:{NFSU2_TR(0x6801e2);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+0))));
}
B6801e4:{NFSU2_TR(0x6801e4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6801e7:{NFSU2_TR(0x6801e7);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((R+8),(U+0),4);
}
B6801ea:{NFSU2_TR(0x6801ea);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+0))));
}
B6801ec:{NFSU2_TR(0x6801ec);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff88ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6801ef:{NFSU2_TR(0x6801ef);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6801f2:{NFSU2_TR(0x6801f2);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+0))));
}
B6801f4:{NFSU2_TR(0x6801f4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6801f7:{NFSU2_TR(0x6801f7);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((R+4),(U+0),4);
}
B6801fa:{NFSU2_TR(0x6801fa);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((R+8),(U+0),4);
}
B6801fd:{NFSU2_TR(0x6801fd);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+0))));
}
B6801ff:{NFSU2_TR(0x6801ff);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+0))));
}
B680201:{NFSU2_TR(0x680201);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff84ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B680204:{NFSU2_TR(0x680204);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb0ull))));
w4(U+4,u32(0x2ull));
s4(u32(r4(U+0)),r4(U+4));
}
B68020b:L68020b:{c.instructions+=17;NFSU2_TR(0x68020b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B68020e:{NFSU2_TR(0x68020e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+8),(U+0),4);
}
B680210:{NFSU2_TR(0x680210);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff94ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B680213:{NFSU2_TR(0x680213);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+8),4);
s4(u32(r4(U+4)),r4(U+8));
}
B680216:{NFSU2_TR(0x680216);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B680218:{NFSU2_TR(0x680218);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+8),4);
s4(u32(r4(U+4)),r4(U+8));
}
B68021b:{NFSU2_TR(0x68021b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B68021e:{NFSU2_TR(0x68021e);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B680221:{NFSU2_TR(0x680221);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff88ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B680224:{NFSU2_TR(0x680224);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+8),4);
s4(u32(r4(U+4)),r4(U+8));
}
B680227:{NFSU2_TR(0x680227);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B68022a:{NFSU2_TR(0x68022a);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B68022d:{NFSU2_TR(0x68022d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff84ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B680230:{NFSU2_TR(0x680230);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+8),4);
s4(u32(r4(U+4)),r4(U+8));
}
B680233:{NFSU2_TR(0x680233);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B680236:{NFSU2_TR(0x680236);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B680239:{NFSU2_TR(0x680239);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x68020bu);}goto L68020b;}}
}
B68023b:L68023b:{c.instructions+=4;NFSU2_TR(0x68023b);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B68023e:{NFSU2_TR(0x68023e);
__builtin_memmove((R+4),(R+12),4);
}
B680240:{NFSU2_TR(0x680240);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B680243:{NFSU2_TR(0x680243);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x680248ull));
TAIL_STATIC(0x673b2cu,673);
}
B680248:L680248:{c.instructions+=3;NFSU2_TR(0x680248);
__builtin_memmove((R+24),(R+0),4);
}
B68024a:{NFSU2_TR(0x68024a);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B68024c:{NFSU2_TR(0x68024c);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L680902;}}
}
B680252:L680252:{c.instructions+=8;NFSU2_TR(0x680252);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B680253:{NFSU2_TR(0x680253);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B680256:{NFSU2_TR(0x680256);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B680257:{NFSU2_TR(0x680257);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((R+0),(U+0),4);
}
B68025a:{NFSU2_TR(0x68025a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B68025b:{NFSU2_TR(0x68025b);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B68025e:{NFSU2_TR(0x68025e);
u8 U[4];
w4(U+0,u32(0x60600002ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B680263:{NFSU2_TR(0x680263);
TAIL_STATIC(0x67af04u,67a);
}
B680268:L680268:{c.instructions+=3;NFSU2_TR(0x680268);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B68026a:{NFSU2_TR(0x68026a);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B68026d:{NFSU2_TR(0x68026d);
if(r1(R+518)){{goto L6808fd;}}
}
B680273:L680273:{c.instructions+=2;NFSU2_TR(0x680273);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B680276:{NFSU2_TR(0x680276);
if(r1(R+518)){{goto L6808fd;}}
}
B68027c:L68027c:{c.instructions+=2;NFSU2_TR(0x68027c);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B68027f:{NFSU2_TR(0x68027f);
if(r1(R+518)){TAIL_STATIC(0x67af18u,67a);}
}
B680285:L680285:{c.instructions+=1;NFSU2_TR(0x680285);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B680287:L680287:{c.instructions+=6;NFSU2_TR(0x680287);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B68028a:{NFSU2_TR(0x68028a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+4),(U+0),4);
}
B68028c:{NFSU2_TR(0x68028c);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffffdcull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+4),4);
s4(u32(r4(U+8)),r4(U+12));
}
B680290:{NFSU2_TR(0x680290);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B680291:{NFSU2_TR(0x680291);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(U+0))<(u32(0x4ull))));
}
B680294:{NFSU2_TR(0x680294);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x680287u);}goto L680287;}}
}
B680296:L680296:{c.instructions+=4;NFSU2_TR(0x680296);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B680299:{NFSU2_TR(0x680299);
__builtin_memmove((R+4),(R+12),4);
}
B68029b:{NFSU2_TR(0x68029b);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B68029e:{NFSU2_TR(0x68029e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6802a3ull));
TAIL_STATIC(0x673b2cu,673);
}
B6802a3:L6802a3:{c.instructions+=3;NFSU2_TR(0x6802a3);
__builtin_memmove((R+24),(R+0),4);
}
B6802a5:{NFSU2_TR(0x6802a5);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6802a7:{NFSU2_TR(0x6802a7);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L680902;}}
}
B6802ad:L6802ad:{c.instructions+=7;NFSU2_TR(0x6802ad);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6802ae:{NFSU2_TR(0x6802ae);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffbcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6802b1:{NFSU2_TR(0x6802b1);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((R+0),(U+0),4);
}
B6802b4:{NFSU2_TR(0x6802b4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6802b5:{NFSU2_TR(0x6802b5);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6802b8:{NFSU2_TR(0x6802b8);
u8 U[4];
w4(U+0,u32(0x60700004ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6802bd:{NFSU2_TR(0x6802bd);
TAIL_STATIC(0x67af04u,67a);
}
B6802c2:L6802c2:{c.instructions+=3;NFSU2_TR(0x6802c2);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B6802c4:{NFSU2_TR(0x6802c4);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6802c7:{NFSU2_TR(0x6802c7);
if(r1(R+518)){{goto L6808fd;}}
}
B6802cd:L6802cd:{c.instructions+=2;NFSU2_TR(0x6802cd);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6802d0:{NFSU2_TR(0x6802d0);
if(r1(R+518)){{goto L6808fd;}}
}
B6802d6:L6802d6:{c.instructions+=2;NFSU2_TR(0x6802d6);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6802d9:{NFSU2_TR(0x6802d9);
if(r1(R+518)){TAIL_STATIC(0x67af18u,67a);}
}
B6802df:L6802df:{c.instructions+=1;NFSU2_TR(0x6802df);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6802e1:L6802e1:{c.instructions+=6;NFSU2_TR(0x6802e1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6802e4:{NFSU2_TR(0x6802e4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6802e6:{NFSU2_TR(0x6802e6);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffffdcull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+4),4);
s4(u32(r4(U+8)),r4(U+12));
}
B6802ea:{NFSU2_TR(0x6802ea);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6802eb:{NFSU2_TR(0x6802eb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(U+0))<(u32(0x4ull))));
}
B6802ee:{NFSU2_TR(0x6802ee);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6802e1u);}goto L6802e1;}}
}
B6802f0:L6802f0:{c.instructions+=4;NFSU2_TR(0x6802f0);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6802f3:{NFSU2_TR(0x6802f3);
__builtin_memmove((R+4),(R+12),4);
}
B6802f5:{NFSU2_TR(0x6802f5);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6802f8:{NFSU2_TR(0x6802f8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6802fdull));
TAIL_STATIC(0x673b2cu,673);
}
B6802fd:L6802fd:{c.instructions+=3;NFSU2_TR(0x6802fd);
__builtin_memmove((R+24),(R+0),4);
}
B6802ff:{NFSU2_TR(0x6802ff);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B680301:{NFSU2_TR(0x680301);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L680902;}}
}
B680307:L680307:{c.instructions+=7;NFSU2_TR(0x680307);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B680308:{NFSU2_TR(0x680308);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffbcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B68030b:{NFSU2_TR(0x68030b);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((R+0),(U+0),4);
}
B68030e:{NFSU2_TR(0x68030e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B68030f:{NFSU2_TR(0x68030f);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B680312:{NFSU2_TR(0x680312);
u8 U[4];
w4(U+0,u32(0x60800004ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B680317:{NFSU2_TR(0x680317);
TAIL_STATIC(0x67af04u,67a);
}
B68031c:L68031c:{c.instructions+=3;NFSU2_TR(0x68031c);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B68031e:{NFSU2_TR(0x68031e);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B680321:{NFSU2_TR(0x680321);
if(r1(R+518)){{goto L6808fd;}}
}
B680327:L680327:{c.instructions+=2;NFSU2_TR(0x680327);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B68032a:{NFSU2_TR(0x68032a);
if(r1(R+518)){{goto L6808fd;}}
}
B680330:L680330:{c.instructions+=2;NFSU2_TR(0x680330);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B680333:{NFSU2_TR(0x680333);
if(r1(R+518)){TAIL_STATIC(0x67af18u,67a);}
}
B680339:L680339:{c.instructions+=1;NFSU2_TR(0x680339);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B68033b:L68033b:{c.instructions+=6;NFSU2_TR(0x68033b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B68033e:{NFSU2_TR(0x68033e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+4),(U+0),4);
}
B680340:{NFSU2_TR(0x680340);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffffdcull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+4),4);
s4(u32(r4(U+8)),r4(U+12));
}
B680344:{NFSU2_TR(0x680344);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B680345:{NFSU2_TR(0x680345);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(U+0))<(u32(0x4ull))));
}
B680348:{NFSU2_TR(0x680348);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x68033bu);}goto L68033b;}}
}
B68034a:L68034a:{c.instructions+=4;NFSU2_TR(0x68034a);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B68034d:{NFSU2_TR(0x68034d);
__builtin_memmove((R+4),(R+12),4);
}
B68034f:{NFSU2_TR(0x68034f);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B680352:{NFSU2_TR(0x680352);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x680357ull));
TAIL_STATIC(0x673b2cu,673);
}
B680357:L680357:{c.instructions+=3;NFSU2_TR(0x680357);
__builtin_memmove((R+24),(R+0),4);
}
B680359:{NFSU2_TR(0x680359);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B68035b:{NFSU2_TR(0x68035b);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L680902;}}
}
B680361:L680361:{c.instructions+=7;NFSU2_TR(0x680361);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B680362:{NFSU2_TR(0x680362);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffbcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B680365:{NFSU2_TR(0x680365);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((R+0),(U+0),4);
}
B680368:{NFSU2_TR(0x680368);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B680369:{NFSU2_TR(0x680369);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B68036c:{NFSU2_TR(0x68036c);
u8 U[4];
w4(U+0,u32(0x60900004ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B680371:{NFSU2_TR(0x680371);
TAIL_STATIC(0x67af04u,67a);
}
B680376:L680376:{c.instructions+=3;NFSU2_TR(0x680376);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B680378:{NFSU2_TR(0x680378);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B68037b:{NFSU2_TR(0x68037b);
if(r1(R+518)){{goto L6808fd;}}
}
B680381:L680381:{c.instructions+=2;NFSU2_TR(0x680381);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B680384:{NFSU2_TR(0x680384);
if(r1(R+518)){{goto L6808fd;}}
}
B68038a:L68038a:{c.instructions+=2;NFSU2_TR(0x68038a);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B68038d:{NFSU2_TR(0x68038d);
if(r1(R+518)){TAIL_STATIC(0x67af18u,67a);}
}
B680393:L680393:{c.instructions+=1;NFSU2_TR(0x680393);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B680395:L680395:{c.instructions+=6;NFSU2_TR(0x680395);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B680398:{NFSU2_TR(0x680398);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+4),(U+0),4);
}
B68039a:{NFSU2_TR(0x68039a);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffffe0ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+4),4);
s4(u32(r4(U+8)),r4(U+12));
}
B68039e:{NFSU2_TR(0x68039e);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B68039f:{NFSU2_TR(0x68039f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(U+0))<(u32(0x3ull))));
}
B6803a2:{NFSU2_TR(0x6803a2);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x680395u);}goto L680395;}}
}
B6803a4:L6803a4:{c.instructions+=4;NFSU2_TR(0x6803a4);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6803a7:{NFSU2_TR(0x6803a7);
__builtin_memmove((R+4),(R+12),4);
}
B6803a9:{NFSU2_TR(0x6803a9);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6803ac:{NFSU2_TR(0x6803ac);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6803b1ull));
TAIL_STATIC(0x673b2cu,673);
}
B6803b1:L6803b1:{c.instructions+=3;NFSU2_TR(0x6803b1);
__builtin_memmove((R+24),(R+0),4);
}
B6803b3:{NFSU2_TR(0x6803b3);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6803b5:{NFSU2_TR(0x6803b5);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L680902;}}
}
B6803bb:L6803bb:{c.instructions+=7;NFSU2_TR(0x6803bb);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6803bc:{NFSU2_TR(0x6803bc);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffbcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6803bf:{NFSU2_TR(0x6803bf);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6803c2:{NFSU2_TR(0x6803c2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6803c3:{NFSU2_TR(0x6803c3);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6803c6:{NFSU2_TR(0x6803c6);
u8 U[4];
w4(U+0,u32(0x60a00003ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6803cb:{NFSU2_TR(0x6803cb);
TAIL_STATIC(0x67af04u,67a);
}
B6803d0:L6803d0:{c.instructions+=3;NFSU2_TR(0x6803d0);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B6803d2:{NFSU2_TR(0x6803d2);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6803d5:{NFSU2_TR(0x6803d5);
if(r1(R+518)){{goto L6808fd;}}
}
B6803db:L6803db:{c.instructions+=2;NFSU2_TR(0x6803db);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6803de:{NFSU2_TR(0x6803de);
if(r1(R+518)){{goto L6808fd;}}
}
B6803e4:L6803e4:{c.instructions+=2;NFSU2_TR(0x6803e4);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6803e7:{NFSU2_TR(0x6803e7);
if(r1(R+518)){{goto L6808fd;}}
}
B6803ed:L6803ed:{c.instructions+=2;NFSU2_TR(0x6803ed);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6803f0:{NFSU2_TR(0x6803f0);
if(r1(R+518)){{goto L6808fd;}}
}
B6803f6:L6803f6:{c.instructions+=2;NFSU2_TR(0x6803f6);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6803f9:{NFSU2_TR(0x6803f9);
if(r1(R+518)){TAIL_STATIC(0x67af18u,67a);}
}
B6803ff:L6803ff:{c.instructions+=19;NFSU2_TR(0x6803ff);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffbcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B680402:{NFSU2_TR(0x680402);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff10ull))));
__builtin_memmove((R+8),(U+0),4);
}
B680408:{NFSU2_TR(0x680408);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+0))));
}
B68040a:{NFSU2_TR(0x68040a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff94ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B68040d:{NFSU2_TR(0x68040d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B680410:{NFSU2_TR(0x680410);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+0))));
}
B680412:{NFSU2_TR(0x680412);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B680415:{NFSU2_TR(0x680415);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff1cull))));
__builtin_memmove((R+8),(U+0),4);
}
B68041b:{NFSU2_TR(0x68041b);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+0))));
}
B68041d:{NFSU2_TR(0x68041d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff88ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B680420:{NFSU2_TR(0x680420);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B680423:{NFSU2_TR(0x680423);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+0))));
}
B680425:{NFSU2_TR(0x680425);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B680428:{NFSU2_TR(0x680428);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff04ull))));
__builtin_memmove((R+4),(U+0),4);
}
B68042e:{NFSU2_TR(0x68042e);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff28ull))));
__builtin_memmove((R+8),(U+0),4);
}
B680434:{NFSU2_TR(0x680434);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+0))));
}
B680436:{NFSU2_TR(0x680436);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+0))));
}
B680438:{NFSU2_TR(0x680438);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff84ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B68043b:{NFSU2_TR(0x68043b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb0ull))));
w4(U+4,u32(0x3ull));
s4(u32(r4(U+0)),r4(U+4));
}
B680442:L680442:{c.instructions+=17;NFSU2_TR(0x680442);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B680445:{NFSU2_TR(0x680445);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+8),(U+0),4);
}
B680447:{NFSU2_TR(0x680447);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff94ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B68044a:{NFSU2_TR(0x68044a);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+8),4);
s4(u32(r4(U+4)),r4(U+8));
}
B68044d:{NFSU2_TR(0x68044d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B68044f:{NFSU2_TR(0x68044f);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+8),4);
s4(u32(r4(U+4)),r4(U+8));
}
B680452:{NFSU2_TR(0x680452);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B680455:{NFSU2_TR(0x680455);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B680458:{NFSU2_TR(0x680458);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff88ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B68045b:{NFSU2_TR(0x68045b);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+8),4);
s4(u32(r4(U+4)),r4(U+8));
}
B68045e:{NFSU2_TR(0x68045e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B680461:{NFSU2_TR(0x680461);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B680464:{NFSU2_TR(0x680464);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff84ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B680467:{NFSU2_TR(0x680467);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+8),4);
s4(u32(r4(U+4)),r4(U+8));
}
B68046a:{NFSU2_TR(0x68046a);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B68046d:{NFSU2_TR(0x68046d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B680470:{NFSU2_TR(0x680470);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x680442u);}goto L680442;}}
}
B680472:L680472:{c.instructions+=4;NFSU2_TR(0x680472);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B680475:{NFSU2_TR(0x680475);
__builtin_memmove((R+4),(R+12),4);
}
B680477:{NFSU2_TR(0x680477);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B68047a:{NFSU2_TR(0x68047a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x68047full));
TAIL_STATIC(0x673b2cu,673);
}
B68047f:L68047f:{c.instructions+=3;NFSU2_TR(0x68047f);
__builtin_memmove((R+24),(R+0),4);
}
B680481:{NFSU2_TR(0x680481);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B680483:{NFSU2_TR(0x680483);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L680902;}}
}
B680489:L680489:{c.instructions+=8;NFSU2_TR(0x680489);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B68048a:{NFSU2_TR(0x68048a);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff10ull))));
__builtin_memmove((R+0),(U+0),4);
}
B680490:{NFSU2_TR(0x680490);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B680491:{NFSU2_TR(0x680491);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff04ull))));
__builtin_memmove((R+0),(U+0),4);
}
B680497:{NFSU2_TR(0x680497);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B680498:{NFSU2_TR(0x680498);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B68049b:{NFSU2_TR(0x68049b);
u8 U[4];
w4(U+0,u32(0x60b00003ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6804a0:{NFSU2_TR(0x6804a0);
TAIL_STATIC(0x67af04u,67a);
}
B6804a5:L6804a5:{c.instructions+=3;NFSU2_TR(0x6804a5);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B6804a7:{NFSU2_TR(0x6804a7);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6804aa:{NFSU2_TR(0x6804aa);
if(r1(R+518)){{goto L6808fd;}}
}
B6804b0:L6804b0:{c.instructions+=2;NFSU2_TR(0x6804b0);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6804b3:{NFSU2_TR(0x6804b3);
if(r1(R+518)){{goto L6808fd;}}
}
B6804b9:L6804b9:{c.instructions+=2;NFSU2_TR(0x6804b9);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6804bc:{NFSU2_TR(0x6804bc);
if(r1(R+518)){TAIL_STATIC(0x67af18u,67a);}
}
B6804c2:L6804c2:{c.instructions+=1;NFSU2_TR(0x6804c2);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6804c4:L6804c4:{c.instructions+=6;NFSU2_TR(0x6804c4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6804c7:{NFSU2_TR(0x6804c7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6804c9:{NFSU2_TR(0x6804c9);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffffdcull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+4),4);
s4(u32(r4(U+8)),r4(U+12));
}
B6804cd:{NFSU2_TR(0x6804cd);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6804ce:{NFSU2_TR(0x6804ce);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(U+0))<(u32(0x4ull))));
}
B6804d1:{NFSU2_TR(0x6804d1);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6804c4u);}goto L6804c4;}}
}
B6804d3:L6804d3:{c.instructions+=4;NFSU2_TR(0x6804d3);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6804d6:{NFSU2_TR(0x6804d6);
__builtin_memmove((R+4),(R+12),4);
}
B6804d8:{NFSU2_TR(0x6804d8);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6804db:{NFSU2_TR(0x6804db);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6804e0ull));
TAIL_STATIC(0x673b2cu,673);
}
B6804e0:L6804e0:{c.instructions+=3;NFSU2_TR(0x6804e0);
__builtin_memmove((R+24),(R+0),4);
}
B6804e2:{NFSU2_TR(0x6804e2);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6804e4:{NFSU2_TR(0x6804e4);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L680902;}}
}
B6804ea:L6804ea:{c.instructions+=7;NFSU2_TR(0x6804ea);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6804eb:{NFSU2_TR(0x6804eb);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffbcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6804ee:{NFSU2_TR(0x6804ee);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((R+0),(U+0),4);
}
B6804f1:{NFSU2_TR(0x6804f1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6804f2:{NFSU2_TR(0x6804f2);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6804f5:{NFSU2_TR(0x6804f5);
u8 U[4];
w4(U+0,u32(0x60c00004ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6804fa:{NFSU2_TR(0x6804fa);
TAIL_STATIC(0x67af04u,67a);
}
B6804ff:L6804ff:{c.instructions+=3;NFSU2_TR(0x6804ff);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B680501:{NFSU2_TR(0x680501);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B680504:{NFSU2_TR(0x680504);
if(r1(R+518)){{goto L6808fd;}}
}
B68050a:L68050a:{c.instructions+=2;NFSU2_TR(0x68050a);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B68050d:{NFSU2_TR(0x68050d);
if(r1(R+518)){{goto L6808fd;}}
}
B680513:L680513:{c.instructions+=2;NFSU2_TR(0x680513);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B680516:{NFSU2_TR(0x680516);
if(r1(R+518)){TAIL_STATIC(0x67af18u,67a);}
}
B68051c:L68051c:{c.instructions+=1;NFSU2_TR(0x68051c);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B68051e:L68051e:{c.instructions+=6;NFSU2_TR(0x68051e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B680521:{NFSU2_TR(0x680521);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+4),(U+0),4);
}
B680523:{NFSU2_TR(0x680523);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffffdcull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+4),4);
s4(u32(r4(U+8)),r4(U+12));
}
B680527:{NFSU2_TR(0x680527);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B680528:{NFSU2_TR(0x680528);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(U+0))<(u32(0x4ull))));
}
B68052b:{NFSU2_TR(0x68052b);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x68051eu);}goto L68051e;}}
}
B68052d:L68052d:{c.instructions+=4;NFSU2_TR(0x68052d);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B680530:{NFSU2_TR(0x680530);
__builtin_memmove((R+4),(R+12),4);
}
B680532:{NFSU2_TR(0x680532);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B680535:{NFSU2_TR(0x680535);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x68053aull));
TAIL_STATIC(0x673b2cu,673);
}
B68053a:L68053a:{c.instructions+=3;NFSU2_TR(0x68053a);
__builtin_memmove((R+24),(R+0),4);
}
B68053c:{NFSU2_TR(0x68053c);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B68053e:{NFSU2_TR(0x68053e);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L680902;}}
}
B680544:L680544:{c.instructions+=7;NFSU2_TR(0x680544);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B680545:{NFSU2_TR(0x680545);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffbcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B680548:{NFSU2_TR(0x680548);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((R+0),(U+0),4);
}
B68054b:{NFSU2_TR(0x68054b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B68054c:{NFSU2_TR(0x68054c);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B68054f:{NFSU2_TR(0x68054f);
u8 U[4];
w4(U+0,u32(0x60d00004ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B680554:{NFSU2_TR(0x680554);
TAIL_STATIC(0x67af04u,67a);
}
B680559:L680559:{c.instructions+=3;NFSU2_TR(0x680559);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B68055b:{NFSU2_TR(0x68055b);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B68055e:{NFSU2_TR(0x68055e);
if(r1(R+518)){{goto L6808fd;}}
}
B680564:L680564:{c.instructions+=2;NFSU2_TR(0x680564);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B680567:{NFSU2_TR(0x680567);
if(r1(R+518)){{goto L6808fd;}}
}
B68056d:L68056d:{c.instructions+=2;NFSU2_TR(0x68056d);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B680570:{NFSU2_TR(0x680570);
if(r1(R+518)){TAIL_STATIC(0x67af18u,67a);}
}
B680576:L680576:{c.instructions+=1;NFSU2_TR(0x680576);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B680578:L680578:{c.instructions+=6;NFSU2_TR(0x680578);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B68057b:{NFSU2_TR(0x68057b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+4),(U+0),4);
}
B68057d:{NFSU2_TR(0x68057d);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffffdcull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+4),4);
s4(u32(r4(U+8)),r4(U+12));
}
B680581:{NFSU2_TR(0x680581);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B680582:{NFSU2_TR(0x680582);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(U+0))<(u32(0x4ull))));
}
B680585:{NFSU2_TR(0x680585);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x680578u);}goto L680578;}}
}
B680587:L680587:{c.instructions+=4;NFSU2_TR(0x680587);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B68058a:{NFSU2_TR(0x68058a);
__builtin_memmove((R+4),(R+12),4);
}
B68058c:{NFSU2_TR(0x68058c);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B68058f:{NFSU2_TR(0x68058f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x680594ull));
TAIL_STATIC(0x673b2cu,673);
}
B680594:L680594:{c.instructions+=3;NFSU2_TR(0x680594);
__builtin_memmove((R+24),(R+0),4);
}
B680596:{NFSU2_TR(0x680596);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B680598:{NFSU2_TR(0x680598);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L680902;}}
}
B68059e:L68059e:{c.instructions+=7;NFSU2_TR(0x68059e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B68059f:{NFSU2_TR(0x68059f);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffbcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6805a2:{NFSU2_TR(0x6805a2);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((R+0),(U+0),4);
}
B6805a5:{NFSU2_TR(0x6805a5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6805a6:{NFSU2_TR(0x6805a6);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6805a9:{NFSU2_TR(0x6805a9);
u8 U[4];
w4(U+0,u32(0x60e00004ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6805ae:{NFSU2_TR(0x6805ae);
TAIL_STATIC(0x67af04u,67a);
}
B6805b3:L6805b3:{c.instructions+=3;NFSU2_TR(0x6805b3);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B6805b5:{NFSU2_TR(0x6805b5);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6805b8:{NFSU2_TR(0x6805b8);
if(r1(R+518)){{goto L6808fd;}}
}
B6805be:L6805be:{c.instructions+=2;NFSU2_TR(0x6805be);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6805c1:{NFSU2_TR(0x6805c1);
if(r1(R+518)){{goto L6808fd;}}
}
B6805c7:L6805c7:{c.instructions+=2;NFSU2_TR(0x6805c7);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6805ca:{NFSU2_TR(0x6805ca);
if(r1(R+518)){TAIL_STATIC(0x67af18u,67a);}
}
B6805d0:L6805d0:{c.instructions+=1;NFSU2_TR(0x6805d0);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6805d2:L6805d2:{c.instructions+=6;NFSU2_TR(0x6805d2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6805d5:{NFSU2_TR(0x6805d5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6805d7:{NFSU2_TR(0x6805d7);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffffe0ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+4),4);
s4(u32(r4(U+8)),r4(U+12));
}
B6805db:{NFSU2_TR(0x6805db);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6805dc:{NFSU2_TR(0x6805dc);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(U+0))<(u32(0x3ull))));
}
B6805df:{NFSU2_TR(0x6805df);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6805d2u);}goto L6805d2;}}
}
B6805e1:L6805e1:{c.instructions+=4;NFSU2_TR(0x6805e1);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6805e4:{NFSU2_TR(0x6805e4);
__builtin_memmove((R+4),(R+12),4);
}
B6805e6:{NFSU2_TR(0x6805e6);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6805e9:{NFSU2_TR(0x6805e9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6805eeull));
TAIL_STATIC(0x673b2cu,673);
}
B6805ee:L6805ee:{c.instructions+=3;NFSU2_TR(0x6805ee);
__builtin_memmove((R+24),(R+0),4);
}
B6805f0:{NFSU2_TR(0x6805f0);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6805f2:{NFSU2_TR(0x6805f2);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L680902;}}
}
B6805f8:L6805f8:{c.instructions+=7;NFSU2_TR(0x6805f8);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6805f9:{NFSU2_TR(0x6805f9);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffbcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6805fc:{NFSU2_TR(0x6805fc);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6805ff:{NFSU2_TR(0x6805ff);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B680600:{NFSU2_TR(0x680600);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B680603:{NFSU2_TR(0x680603);
u8 U[4];
w4(U+0,u32(0x60f00003ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B680608:{NFSU2_TR(0x680608);
TAIL_STATIC(0x67af04u,67a);
}
B68060d:L68060d:{c.instructions+=3;NFSU2_TR(0x68060d);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B68060f:{NFSU2_TR(0x68060f);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B680612:{NFSU2_TR(0x680612);
if(r1(R+518)){{goto L6808fd;}}
}
B680618:L680618:{c.instructions+=2;NFSU2_TR(0x680618);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B68061b:{NFSU2_TR(0x68061b);
if(r1(R+518)){{goto L6808fd;}}
}
B680621:L680621:{c.instructions+=2;NFSU2_TR(0x680621);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B680624:{NFSU2_TR(0x680624);
if(r1(R+518)){{goto L6808fd;}}
}
B68062a:L68062a:{c.instructions+=2;NFSU2_TR(0x68062a);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B68062d:{NFSU2_TR(0x68062d);
if(r1(R+518)){{goto L6808fd;}}
}
B680633:L680633:{c.instructions+=2;NFSU2_TR(0x680633);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B680636:{NFSU2_TR(0x680636);
if(r1(R+518)){TAIL_STATIC(0x67af18u,67a);}
}
B68063c:L68063c:{c.instructions+=19;NFSU2_TR(0x68063c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffbcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B68063f:{NFSU2_TR(0x68063f);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff10ull))));
__builtin_memmove((R+8),(U+0),4);
}
B680645:{NFSU2_TR(0x680645);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+0))));
}
B680647:{NFSU2_TR(0x680647);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff94ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B68064a:{NFSU2_TR(0x68064a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B68064d:{NFSU2_TR(0x68064d);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+0))));
}
B68064f:{NFSU2_TR(0x68064f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B680652:{NFSU2_TR(0x680652);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff1cull))));
__builtin_memmove((R+8),(U+0),4);
}
B680658:{NFSU2_TR(0x680658);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+0))));
}
B68065a:{NFSU2_TR(0x68065a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff88ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B68065d:{NFSU2_TR(0x68065d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B680660:{NFSU2_TR(0x680660);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+0))));
}
B680662:{NFSU2_TR(0x680662);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B680665:{NFSU2_TR(0x680665);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff04ull))));
__builtin_memmove((R+4),(U+0),4);
}
B68066b:{NFSU2_TR(0x68066b);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff28ull))));
__builtin_memmove((R+8),(U+0),4);
}
B680671:{NFSU2_TR(0x680671);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+0))));
}
B680673:{NFSU2_TR(0x680673);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+0))));
}
B680675:{NFSU2_TR(0x680675);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff84ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B680678:{NFSU2_TR(0x680678);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb0ull))));
w4(U+4,u32(0x3ull));
s4(u32(r4(U+0)),r4(U+4));
}
B68067f:L68067f:{c.instructions+=17;NFSU2_TR(0x68067f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B680682:{NFSU2_TR(0x680682);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+8),(U+0),4);
}
B680684:{NFSU2_TR(0x680684);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff94ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B680687:{NFSU2_TR(0x680687);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+8),4);
s4(u32(r4(U+4)),r4(U+8));
}
B68068a:{NFSU2_TR(0x68068a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B68068c:{NFSU2_TR(0x68068c);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+8),4);
s4(u32(r4(U+4)),r4(U+8));
}
B68068f:{NFSU2_TR(0x68068f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B680692:{NFSU2_TR(0x680692);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B680695:{NFSU2_TR(0x680695);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff88ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B680698:{NFSU2_TR(0x680698);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+8),4);
s4(u32(r4(U+4)),r4(U+8));
}
B68069b:{NFSU2_TR(0x68069b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B68069e:{NFSU2_TR(0x68069e);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B6806a1:{NFSU2_TR(0x6806a1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff84ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6806a4:{NFSU2_TR(0x6806a4);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+8),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6806a7:{NFSU2_TR(0x6806a7);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B6806aa:{NFSU2_TR(0x6806aa);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6806ad:{NFSU2_TR(0x6806ad);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x68067fu);}goto L68067f;}}
}
B6806af:L6806af:{c.instructions+=4;NFSU2_TR(0x6806af);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6806b2:{NFSU2_TR(0x6806b2);
__builtin_memmove((R+4),(R+12),4);
}
B6806b4:{NFSU2_TR(0x6806b4);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6806b7:{NFSU2_TR(0x6806b7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6806bcull));
TAIL_STATIC(0x673b2cu,673);
}
B6806bc:L6806bc:{c.instructions+=3;NFSU2_TR(0x6806bc);
__builtin_memmove((R+24),(R+0),4);
}
B6806be:{NFSU2_TR(0x6806be);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6806c0:{NFSU2_TR(0x6806c0);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L680902;}}
}
B6806c6:L6806c6:{c.instructions+=8;NFSU2_TR(0x6806c6);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6806c7:{NFSU2_TR(0x6806c7);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff10ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6806cd:{NFSU2_TR(0x6806cd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6806ce:{NFSU2_TR(0x6806ce);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff04ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6806d4:{NFSU2_TR(0x6806d4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6806d5:{NFSU2_TR(0x6806d5);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6806d8:{NFSU2_TR(0x6806d8);
u8 U[4];
w4(U+0,u32(0x61000003ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6806dd:{NFSU2_TR(0x6806dd);
TAIL_STATIC(0x67af04u,67a);
}
B6806e2:L6806e2:{c.instructions+=3;NFSU2_TR(0x6806e2);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B6806e4:{NFSU2_TR(0x6806e4);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6806e7:{NFSU2_TR(0x6806e7);
if(r1(R+518)){{goto L6808fd;}}
}
B6806ed:L6806ed:{c.instructions+=2;NFSU2_TR(0x6806ed);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6806f0:{NFSU2_TR(0x6806f0);
if(r1(R+518)){{goto L6808fd;}}
}
B6806f6:L6806f6:{c.instructions+=2;NFSU2_TR(0x6806f6);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6806f9:{NFSU2_TR(0x6806f9);
if(r1(R+518)){TAIL_STATIC(0x67af18u,67a);}
}
B6806ff:L6806ff:{c.instructions+=1;NFSU2_TR(0x6806ff);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B680701:L680701:{c.instructions+=6;NFSU2_TR(0x680701);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B680704:{NFSU2_TR(0x680704);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+4),(U+0),4);
}
B680706:{NFSU2_TR(0x680706);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffffdcull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+4),4);
s4(u32(r4(U+8)),r4(U+12));
}
B68070a:{NFSU2_TR(0x68070a);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B68070b:{NFSU2_TR(0x68070b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(U+0))<(u32(0x4ull))));
}
B68070e:{NFSU2_TR(0x68070e);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x680701u);}goto L680701;}}
}
B680710:L680710:{c.instructions+=4;NFSU2_TR(0x680710);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B680713:{NFSU2_TR(0x680713);
__builtin_memmove((R+4),(R+12),4);
}
B680715:{NFSU2_TR(0x680715);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B680718:{NFSU2_TR(0x680718);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x68071dull));
TAIL_STATIC(0x673b2cu,673);
}
B68071d:L68071d:{c.instructions+=3;NFSU2_TR(0x68071d);
__builtin_memmove((R+24),(R+0),4);
}
B68071f:{NFSU2_TR(0x68071f);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B680721:{NFSU2_TR(0x680721);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L680902;}}
}
B680727:L680727:{c.instructions+=7;NFSU2_TR(0x680727);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B680728:{NFSU2_TR(0x680728);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffbcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B68072b:{NFSU2_TR(0x68072b);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((R+0),(U+0),4);
}
B68072e:{NFSU2_TR(0x68072e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B68072f:{NFSU2_TR(0x68072f);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B680732:{NFSU2_TR(0x680732);
u8 U[4];
w4(U+0,u32(0x61100004ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B680737:{NFSU2_TR(0x680737);
TAIL_STATIC(0x67af04u,67a);
}
B68073c:L68073c:{c.instructions+=3;NFSU2_TR(0x68073c);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B68073e:{NFSU2_TR(0x68073e);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B680741:{NFSU2_TR(0x680741);
if(r1(R+518)){{goto L6808fd;}}
}
B680747:L680747:{c.instructions+=2;NFSU2_TR(0x680747);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B68074a:{NFSU2_TR(0x68074a);
if(r1(R+518)){{goto L6808fd;}}
}
B680750:L680750:{c.instructions+=2;NFSU2_TR(0x680750);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B680753:{NFSU2_TR(0x680753);
if(r1(R+518)){TAIL_STATIC(0x67af18u,67a);}
}
B680759:L680759:{c.instructions+=1;NFSU2_TR(0x680759);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B68075b:L68075b:{c.instructions+=6;NFSU2_TR(0x68075b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B68075e:{NFSU2_TR(0x68075e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+4),(U+0),4);
}
B680760:{NFSU2_TR(0x680760);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffffdcull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+4),4);
s4(u32(r4(U+8)),r4(U+12));
}
B680764:{NFSU2_TR(0x680764);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B680765:{NFSU2_TR(0x680765);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(U+0))<(u32(0x4ull))));
}
B680768:{NFSU2_TR(0x680768);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x68075bu);}goto L68075b;}}
}
B68076a:L68076a:{c.instructions+=4;NFSU2_TR(0x68076a);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B68076d:{NFSU2_TR(0x68076d);
__builtin_memmove((R+4),(R+12),4);
}
B68076f:{NFSU2_TR(0x68076f);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B680772:{NFSU2_TR(0x680772);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x680777ull));
TAIL_STATIC(0x673b2cu,673);
}
B680777:L680777:{c.instructions+=3;NFSU2_TR(0x680777);
__builtin_memmove((R+24),(R+0),4);
}
B680779:{NFSU2_TR(0x680779);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B68077b:{NFSU2_TR(0x68077b);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L680902;}}
}
B680781:L680781:{c.instructions+=7;NFSU2_TR(0x680781);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B680782:{NFSU2_TR(0x680782);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffbcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B680785:{NFSU2_TR(0x680785);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((R+0),(U+0),4);
}
B680788:{NFSU2_TR(0x680788);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B680789:{NFSU2_TR(0x680789);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B68078c:{NFSU2_TR(0x68078c);
u8 U[4];
w4(U+0,u32(0x61200004ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B680791:{NFSU2_TR(0x680791);
TAIL_STATIC(0x67af04u,67a);
}
B680796:L680796:{c.instructions+=3;NFSU2_TR(0x680796);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B680798:{NFSU2_TR(0x680798);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B68079b:{NFSU2_TR(0x68079b);
if(r1(R+518)){{goto L6808fd;}}
}
B6807a1:L6807a1:{c.instructions+=2;NFSU2_TR(0x6807a1);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6807a4:{NFSU2_TR(0x6807a4);
if(r1(R+518)){{goto L6808fd;}}
}
B6807aa:L6807aa:{c.instructions+=2;NFSU2_TR(0x6807aa);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6807ad:{NFSU2_TR(0x6807ad);
if(r1(R+518)){TAIL_STATIC(0x67af18u,67a);}
}
B6807b3:L6807b3:{c.instructions+=1;NFSU2_TR(0x6807b3);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6807b5:L6807b5:{c.instructions+=6;NFSU2_TR(0x6807b5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6807b8:{NFSU2_TR(0x6807b8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6807ba:{NFSU2_TR(0x6807ba);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffffdcull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+4),4);
s4(u32(r4(U+8)),r4(U+12));
}
B6807be:{NFSU2_TR(0x6807be);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6807bf:{NFSU2_TR(0x6807bf);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(U+0))<(u32(0x4ull))));
}
B6807c2:{NFSU2_TR(0x6807c2);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6807b5u);}goto L6807b5;}}
}
B6807c4:L6807c4:{c.instructions+=4;NFSU2_TR(0x6807c4);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6807c7:{NFSU2_TR(0x6807c7);
__builtin_memmove((R+4),(R+12),4);
}
B6807c9:{NFSU2_TR(0x6807c9);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6807cc:{NFSU2_TR(0x6807cc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6807d1ull));
TAIL_STATIC(0x673b2cu,673);
}
B6807d1:L6807d1:{c.instructions+=3;NFSU2_TR(0x6807d1);
__builtin_memmove((R+24),(R+0),4);
}
B6807d3:{NFSU2_TR(0x6807d3);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6807d5:{NFSU2_TR(0x6807d5);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L680902;}}
}
B6807db:L6807db:{c.instructions+=7;NFSU2_TR(0x6807db);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6807dc:{NFSU2_TR(0x6807dc);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffbcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6807df:{NFSU2_TR(0x6807df);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((R+0),(U+0),4);
}
B6807e2:{NFSU2_TR(0x6807e2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6807e3:{NFSU2_TR(0x6807e3);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6807e6:{NFSU2_TR(0x6807e6);
u8 U[4];
w4(U+0,u32(0x61300004ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6807eb:{NFSU2_TR(0x6807eb);
TAIL_STATIC(0x67af04u,67a);
}
B6807f0:L6807f0:{c.instructions+=4;NFSU2_TR(0x6807f0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6807f3:{NFSU2_TR(0x6807f3);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B6807f5:{NFSU2_TR(0x6807f5);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6807f7:{NFSU2_TR(0x6807f7);
if(r1(R+518)){{goto L6808fd;}}
}
B6807fd:L6807fd:{c.instructions+=2;NFSU2_TR(0x6807fd);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B680800:{NFSU2_TR(0x680800);
if(r1(R+518)){TAIL_STATIC(0x67af18u,67a);}
}
B680806:L680806:{c.instructions+=3;NFSU2_TR(0x680806);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+28))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B680809:{NFSU2_TR(0x680809);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa4ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B68080c:{NFSU2_TR(0x68080c);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x67af18u,67a);}
}
B680812:L680812:{c.instructions+=1;NFSU2_TR(0x680812);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B680815:L680815:{c.instructions+=3;NFSU2_TR(0x680815);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+512,u8((r4(R+4))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B680817:{NFSU2_TR(0x680817);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B68081a:{NFSU2_TR(0x68081a);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L68084a;}}
}
B68081c:L68081c:{c.instructions+=15;NFSU2_TR(0x68081c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B68081f:{NFSU2_TR(0x68081f);
u8 U[32];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
w8(U+8,u64(s64(s32(r4(R+4)))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+16,u64(s64(s32(r4(U+4)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+4,u32(r8(U+24)));
}
B680823:{NFSU2_TR(0x680823);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B680826:{NFSU2_TR(0x680826);
u8 U[32];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa4ull))));
w8(U+8,u64(s64(s32(r4(R+8)))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+16,u64(s64(s32(r4(U+4)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+8,u32(r8(U+24)));
}
B68082a:{NFSU2_TR(0x68082a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+4,u32(u32(r4(R+4))+u32(r4(U+4))));
}
B68082d:{NFSU2_TR(0x68082d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+8,u32(u32(r4(R+8))+u32(r4(U+4))));
}
B680830:{NFSU2_TR(0x680830);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B680833:{NFSU2_TR(0x680833);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B680836:{NFSU2_TR(0x680836);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B680839:{NFSU2_TR(0x680839);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B68083c:{NFSU2_TR(0x68083c);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4),4);
s4(u32(r4(U+4)),r4(U+8));
}
B68083f:{NFSU2_TR(0x68083f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B680842:{NFSU2_TR(0x680842);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+4))));
}
B680845:{NFSU2_TR(0x680845);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B680848:{NFSU2_TR(0x680848);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x68081cu);}goto L68081c;}}
}
B68084a:L68084a:{c.instructions+=4;NFSU2_TR(0x68084a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B68084d:{NFSU2_TR(0x68084d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B680850:{NFSU2_TR(0x680850);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+24))<(r4(U+8))));
}
B680853:{NFSU2_TR(0x680853);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x680815u);}goto L680815;}}
}
B680855:L680855:{c.instructions+=1;NFSU2_TR(0x680855);
TAIL_STATIC(0x67af18u,67a);
}
B68085a:L68085a:{c.instructions+=3;NFSU2_TR(0x68085a);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B68085c:{NFSU2_TR(0x68085c);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B68085f:{NFSU2_TR(0x68085f);
if(r1(R+518)){{goto L6808fd;}}
}
B680865:L680865:{c.instructions+=2;NFSU2_TR(0x680865);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B680868:{NFSU2_TR(0x680868);
if(r1(R+518)){TAIL_STATIC(0x67af18u,67a);}
}
B68086e:L68086e:{c.instructions+=9;NFSU2_TR(0x68086e);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B680871:{NFSU2_TR(0x680871);
{u32 ea_=u32(u32(8077512u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B680877:{NFSU2_TR(0x680877);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B680878:{NFSU2_TR(0x680878);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B680879:{NFSU2_TR(0x680879);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B68087c:{NFSU2_TR(0x68087c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B68087d:{NFSU2_TR(0x68087d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B68087e:{NFSU2_TR(0x68087e);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B680881:{NFSU2_TR(0x680881);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x680886ull));
TAIL_STATIC(0x699c39u,699);
}
B680886:L680886:{c.instructions+=17;NFSU2_TR(0x680886);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B680889:{NFSU2_TR(0x680889);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B68088c:{NFSU2_TR(0x68088c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff44ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B680892:{NFSU2_TR(0x680892);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B680895:{NFSU2_TR(0x680895);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff48ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B68089b:{NFSU2_TR(0x68089b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B68089d:{NFSU2_TR(0x68089d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff4cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6808a3:{NFSU2_TR(0x6808a3);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6808a6:{NFSU2_TR(0x6808a6);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6808a8:{NFSU2_TR(0x6808a8);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6808ab:{NFSU2_TR(0x6808ab);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff50ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6808b1:{NFSU2_TR(0x6808b1);
__builtin_memmove((R+4),(R+12),4);
}
B6808b3:{NFSU2_TR(0x6808b3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6808b6:{NFSU2_TR(0x6808b6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6808b9:{NFSU2_TR(0x6808b9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6808bc:{NFSU2_TR(0x6808bc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6808bf:{NFSU2_TR(0x6808bf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6808c4ull));
TAIL_STATIC(0x673b2cu,673);
}
B6808c4:L6808c4:{c.instructions+=3;NFSU2_TR(0x6808c4);
__builtin_memmove((R+24),(R+0),4);
}
B6808c6:{NFSU2_TR(0x6808c6);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6808c8:{NFSU2_TR(0x6808c8);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L680902;}}
}
B6808ca:L6808ca:{c.instructions+=8;NFSU2_TR(0x6808ca);
u8 U[4];
w4(U+0,u32(0x6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6808cc:{NFSU2_TR(0x6808cc);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((R+0),(U+0),4);
}
B6808cf:{NFSU2_TR(0x6808cf);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6808d0:{NFSU2_TR(0x6808d0);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff44ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6808d6:{NFSU2_TR(0x6808d6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6808d7:{NFSU2_TR(0x6808d7);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6808da:{NFSU2_TR(0x6808da);
u8 U[4];
w4(U+0,u32(0x20500004ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6808df:{NFSU2_TR(0x6808df);
TAIL_STATIC(0x67af04u,67a);
}
B6808e4:L6808e4:{c.instructions+=6;NFSU2_TR(0x6808e4);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6808e7:{NFSU2_TR(0x6808e7);
u8 U[4];
w4(U+0,u32(0x7b7a08ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6808ec:{NFSU2_TR(0x6808ec);
u8 U[4];
w4(U+0,u32(0xdacull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6808f1:{NFSU2_TR(0x6808f1);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6808f2:{NFSU2_TR(0x6808f2);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6808f3:{NFSU2_TR(0x6808f3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6808f8ull));
TAIL_STATIC(0x675267u,675);
}
B6808f8:L6808f8:{c.instructions+=2;NFSU2_TR(0x6808f8);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B6808fb:{NFSU2_TR(0x6808fb);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B6808fd:L6808fd:{c.instructions+=1;NFSU2_TR(0x6808fd);
w4(R+24,u32(0x80004005ull));
}
B680902:L680902:{c.instructions+=4;NFSU2_TR(0x680902);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffea4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B680908:{NFSU2_TR(0x680908);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B68090b:{NFSU2_TR(0x68090b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffea0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B680911:{NFSU2_TR(0x680911);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x64ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B680914:L680914:{c.instructions+=2;NFSU2_TR(0x680914);
u8 U[20];
w4(U+0,u32(u32(u32(0xffffffb8ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((U+16),(U+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+16));
}
B680918:{NFSU2_TR(0x680918);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x68091dull));
TAIL_STATIC(0x575630u,575);
}
B68091d:L68091d:{c.instructions+=4;NFSU2_TR(0x68091d);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B68091e:{NFSU2_TR(0x68091e);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
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
B680921:{NFSU2_TR(0x680921);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B680922:{NFSU2_TR(0x680922);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x680914u);}goto L680914;}}
}
B680924:L680924:{c.instructions+=4;NFSU2_TR(0x680924);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B680925:{NFSU2_TR(0x680925);
__builtin_memmove((R+0),(R+24),4);
}
B680927:{NFSU2_TR(0x680927);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B680928:{NFSU2_TR(0x680928);
{goto L68092f;}
}
B68092a:L68092a:{c.instructions+=1;NFSU2_TR(0x68092a);
w4(R+0,u32(0x80004005ull));
}
B68092f:L68092f:{c.instructions+=3;NFSU2_TR(0x68092f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B680930:{NFSU2_TR(0x680930);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B680931:{NFSU2_TR(0x680931);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B680a9c:L680a9c:{c.instructions+=10;NFSU2_TR(0x680a9c);
__builtin_memmove((R+28),(R+28),4);
}
B680a9e:{NFSU2_TR(0x680a9e);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B680a9f:{NFSU2_TR(0x680a9f);
__builtin_memmove((R+20),(R+16),4);
}
B680aa1:{NFSU2_TR(0x680aa1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x68ull))));
}
B680aa4:{NFSU2_TR(0x680aa4);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B680aa8:{NFSU2_TR(0x680aa8);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B680aa9:{NFSU2_TR(0x680aa9);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B680aaa:{NFSU2_TR(0x680aaa);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B680aab:{NFSU2_TR(0x680aab);
__builtin_memmove((R+24),(R+4),4);
}
B680aad:{NFSU2_TR(0x680aad);
if(r1(R+518)){{goto L680ca0;}}
}
B680ab3:L680ab3:{c.instructions+=6;NFSU2_TR(0x680ab3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B680ab6:{NFSU2_TR(0x680ab6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B680aba:{NFSU2_TR(0x680aba);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B680abc:{NFSU2_TR(0x680abc);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B680abd:{NFSU2_TR(0x680abd);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B680abf:{NFSU2_TR(0x680abf);
if(r1(R+518)){{goto L680acd;}}
}
B680ac1:L680ac1:{c.instructions+=5;NFSU2_TR(0x680ac1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B680ac4:{NFSU2_TR(0x680ac4);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B680ac6:{NFSU2_TR(0x680ac6);
u8 U[56];
w8(U+0,u64(r4(R+12)));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{u64 d_=u64(r8(U+0));if(__builtin_expect(!d_,0))NFSU2_FAULT("integer division by zero",0x680ac6);w8(U+40,u64(u64(r8(U+32))/d_));}
w4(R+0,u32(r8(U+40)));
{u64 d_=u64(r8(U+0));if(__builtin_expect(!d_,0))NFSU2_FAULT("integer division by zero",0x680ac6);w8(U+48,u64(u64(r8(U+32))%d_));}
w4(R+8,u32(r8(U+48)));
}
B680ac8:{NFSU2_TR(0x680ac8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B680acb:{NFSU2_TR(0x680acb);
{goto L680ad0;}
}
B680acd:L680acd:{c.instructions+=1;NFSU2_TR(0x680acd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B680ad0:L680ad0:{c.instructions+=6;NFSU2_TR(0x680ad0);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((R+0),(U+0),4);
}
B680ad3:{NFSU2_TR(0x680ad3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B680ad4:{NFSU2_TR(0x680ad4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B680ad7:{NFSU2_TR(0x680ad7);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+4));
}
B680ad9:{NFSU2_TR(0x680ad9);
__builtin_memmove((R+4),(R+24),4);
}
B680adb:{NFSU2_TR(0x680adb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x680ae0ull));
TAIL_STATIC(0x673e90u,673);
}
B680ae0:L680ae0:{c.instructions+=2;NFSU2_TR(0x680ae0);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B680ae2:{NFSU2_TR(0x680ae2);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L680bd4;}}
}
B680ae8:L680ae8:{c.instructions+=7;NFSU2_TR(0x680ae8);
{u32 ea_=u32(u32(7892576u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B680aee:{NFSU2_TR(0x680aee);
{u32 ea_=u32(r4(R+20)+u32(4294967244u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B680af1:{NFSU2_TR(0x680af1);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B680af3:{NFSU2_TR(0x680af3);
{u32 ea_=u32(r4(R+20)+u32(4294967244u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B680af6:{NFSU2_TR(0x680af6);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B680af8:{NFSU2_TR(0x680af8);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B680afb:{NFSU2_TR(0x680afb);
if(r1(R+514)){{goto L680b05;}}
}
B680afd:L680afd:{c.instructions+=2;NFSU2_TR(0x680afd);
{u32 ea_=u32(r4(R+24)+u32(176u));__asm__ volatile(".byte 0xdc,0x20"::"a"(ea_):"memory");}
}
B680b03:{NFSU2_TR(0x680b03);
{goto L680b17;}
}
B680b05:L680b05:{c.instructions+=4;NFSU2_TR(0x680b05);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B680b07:{NFSU2_TR(0x680b07);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B680b09:{NFSU2_TR(0x680b09);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B680b0c:{NFSU2_TR(0x680b0c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L680b19;}}
}
B680b0e:L680b0e:{c.instructions+=2;NFSU2_TR(0x680b0e);
{u32 ea_=u32(r4(R+20)+u32(4294967244u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B680b11:{NFSU2_TR(0x680b11);
{u32 ea_=u32(r4(R+24)+u32(176u));__asm__ volatile(".byte 0xdc,0x00"::"a"(ea_):"memory");}
}
B680b17:L680b17:{c.instructions+=1;NFSU2_TR(0x680b17);
{goto L680b1b;}
}
B680b19:L680b19:{c.instructions+=1;NFSU2_TR(0x680b19);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B680b1b:L680b1b:{c.instructions+=6;NFSU2_TR(0x680b1b);
{u32 ea_=u32(r4(R+20)+u32(4294967244u));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B680b1e:{NFSU2_TR(0x680b1e);
{u32 ea_=u32(r4(R+20)+u32(4294967252u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B680b21:{NFSU2_TR(0x680b21);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B680b23:{NFSU2_TR(0x680b23);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B680b25:{NFSU2_TR(0x680b25);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B680b28:{NFSU2_TR(0x680b28);
if(r1(R+514)){{goto L680b37;}}
}
B680b2a:L680b2a:{c.instructions+=4;NFSU2_TR(0x680b2a);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B680b2c:{NFSU2_TR(0x680b2c);
{u32 ea_=u32(r4(R+20)+u32(4294967252u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B680b2f:{NFSU2_TR(0x680b2f);
{u32 ea_=u32(r4(R+24)+u32(176u));__asm__ volatile(".byte 0xdc,0x20"::"a"(ea_):"memory");}
}
B680b35:{NFSU2_TR(0x680b35);
{goto L680b4c;}
}
B680b37:L680b37:{c.instructions+=5;NFSU2_TR(0x680b37);
{u32 ea_=u32(r4(R+20)+u32(4294967252u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B680b3a:{NFSU2_TR(0x680b3a);
__asm__ volatile(".byte 0xde,0xd9":::"memory");
}
B680b3c:{NFSU2_TR(0x680b3c);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B680b3e:{NFSU2_TR(0x680b3e);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B680b41:{NFSU2_TR(0x680b41);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L680b4e;}}
}
B680b43:L680b43:{c.instructions+=2;NFSU2_TR(0x680b43);
{u32 ea_=u32(r4(R+20)+u32(4294967252u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B680b46:{NFSU2_TR(0x680b46);
{u32 ea_=u32(r4(R+24)+u32(176u));__asm__ volatile(".byte 0xdc,0x00"::"a"(ea_):"memory");}
}
B680b4c:L680b4c:{c.instructions+=1;NFSU2_TR(0x680b4c);
{goto L680b50;}
}
B680b4e:L680b4e:{c.instructions+=1;NFSU2_TR(0x680b4e);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B680b50:L680b50:{c.instructions+=6;NFSU2_TR(0x680b50);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B680b51:{NFSU2_TR(0x680b51);
{u32 ea_=u32(r4(R+20)+u32(4294967252u));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B680b54:{NFSU2_TR(0x680b54);
{u32 ea_=u32(r4(R+20)+u32(4294967244u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B680b57:{NFSU2_TR(0x680b57);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B680b58:{NFSU2_TR(0x680b58);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B680b5b:{NFSU2_TR(0x680b5b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x680b60ull));
TAIL_STATIC(0x75dc4bu,75d);
}
B680b60:L680b60:{c.instructions+=4;NFSU2_TR(0x680b60);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B680b62:{NFSU2_TR(0x680b62);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B680b63:{NFSU2_TR(0x680b63);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B680b64:{NFSU2_TR(0x680b64);
if(r1(R+518)){{goto L680b83;}}
}
B680b66:L680b66:{c.instructions+=5;NFSU2_TR(0x680b66);
{u32 ea_=u32(r4(R+20)+u32(4294967244u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B680b69:{NFSU2_TR(0x680b69);
{u32 ea_=u32(u32(7892576u));__asm__ volatile(".byte 0xdc,0x18"::"a"(ea_):"memory");}
}
B680b6f:{NFSU2_TR(0x680b6f);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B680b71:{NFSU2_TR(0x680b71);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B680b74:{NFSU2_TR(0x680b74);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L680b83;}}
}
B680b76:L680b76:{c.instructions+=2;NFSU2_TR(0x680b76);
{u32 ea_=u32(r4(R+20)+u32(4294967244u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B680b79:{NFSU2_TR(0x680b79);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x680b7eull));
TAIL_STATIC(0x75dd28u,75d);
}
B680b7e:L680b7e:{c.instructions+=2;NFSU2_TR(0x680b7e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B680b81:{NFSU2_TR(0x680b81);
{goto L680b87;}
}
B680b83:L680b83:{c.instructions+=1;NFSU2_TR(0x680b83);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B680b87:L680b87:{c.instructions+=5;NFSU2_TR(0x680b87);
{u32 ea_=u32(r4(R+20)+u32(4294967252u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B680b8a:{NFSU2_TR(0x680b8a);
{u32 ea_=u32(u32(7892576u));__asm__ volatile(".byte 0xdc,0x18"::"a"(ea_):"memory");}
}
B680b90:{NFSU2_TR(0x680b90);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B680b92:{NFSU2_TR(0x680b92);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B680b95:{NFSU2_TR(0x680b95);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L680c80;}}
}
B680b9b:L680b9b:{c.instructions+=4;NFSU2_TR(0x680b9b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B680b9e:{NFSU2_TR(0x680b9e);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(r4(R+12)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B680ba1:{NFSU2_TR(0x680ba1);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B680ba4:{NFSU2_TR(0x680ba4);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L680c80;}}
}
B680baa:L680baa:{c.instructions+=5;NFSU2_TR(0x680baa);
{u32 ea_=u32(r4(R+20)+u32(4294967252u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B680bad:{NFSU2_TR(0x680bad);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B680bae:{NFSU2_TR(0x680bae);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B680baf:{NFSU2_TR(0x680baf);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B680bb2:{NFSU2_TR(0x680bb2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x680bb7ull));
TAIL_STATIC(0x75dc4bu,75d);
}
B680bb7:L680bb7:{c.instructions+=4;NFSU2_TR(0x680bb7);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B680bb9:{NFSU2_TR(0x680bb9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B680bba:{NFSU2_TR(0x680bba);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B680bbb:{NFSU2_TR(0x680bbb);
if(r1(R+518)){{goto L680bc7;}}
}
B680bbd:L680bbd:{c.instructions+=2;NFSU2_TR(0x680bbd);
{u32 ea_=u32(r4(R+20)+u32(4294967252u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B680bc0:{NFSU2_TR(0x680bc0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x680bc5ull));
TAIL_STATIC(0x75dd28u,75d);
}
B680bc5:L680bc5:{c.instructions+=1;NFSU2_TR(0x680bc5);
{goto L680bcb;}
}
B680bc7:L680bc7:{c.instructions+=2;NFSU2_TR(0x680bc7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B680bca:{NFSU2_TR(0x680bca);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B680bcb:L680bcb:{c.instructions+=3;NFSU2_TR(0x680bcb);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B680bcc:{NFSU2_TR(0x680bcc);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+0))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B680bcf:{NFSU2_TR(0x680bcf);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L680bd4;}}
}
B680bd1:L680bd1:{c.instructions+=1;NFSU2_TR(0x680bd1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B680bd4:L680bd4:{c.instructions+=3;NFSU2_TR(0x680bd4);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B680bd6:{NFSU2_TR(0x680bd6);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B680bd9:{NFSU2_TR(0x680bd9);
if(r1(R+518)){TAIL_STATIC(0x681ac1u,681);}
}
B680bdf:L680bdf:{c.instructions+=3;NFSU2_TR(0x680bdf);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B680be2:{NFSU2_TR(0x680be2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B680be5:{NFSU2_TR(0x680be5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L680bfd;}}
}
B680be7:L680be7:{c.instructions+=5;NFSU2_TR(0x680be7);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B680bea:{NFSU2_TR(0x680bea);
__builtin_memmove((R+4),(R+24),4);
}
B680bec:{NFSU2_TR(0x680bec);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B680bed:{NFSU2_TR(0x680bed);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B680bf0:{NFSU2_TR(0x680bf0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x680bf5ull));
TAIL_STATIC(0x678640u,678);
}
B680bf5:L680bf5:{c.instructions+=2;NFSU2_TR(0x680bf5);
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
B680bf7:{NFSU2_TR(0x680bf7);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x681ac3u,681);}
}
B680bfd:L680bfd:{c.instructions+=5;NFSU2_TR(0x680bfd);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0xffffffffull))));
}
B680c00:{NFSU2_TR(0x680c00);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B680c02:{NFSU2_TR(0x680c02);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+12))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B680c05:{NFSU2_TR(0x680c05);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B680c08:{NFSU2_TR(0x680c08);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L680c39;}}
}
B680c0a:L680c0a:{c.instructions+=5;NFSU2_TR(0x680c0a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B680c0d:{NFSU2_TR(0x680c0d);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B680c10:{NFSU2_TR(0x680c10);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B680c13:{NFSU2_TR(0x680c13);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B680c16:{NFSU2_TR(0x680c16);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B680c19:L680c19:{c.instructions+=12;NFSU2_TR(0x680c19);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B680c1c:{NFSU2_TR(0x680c1c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B680c1f:{NFSU2_TR(0x680c1f);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B680c22:{NFSU2_TR(0x680c22);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B680c25:{NFSU2_TR(0x680c25);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B680c28:{NFSU2_TR(0x680c28);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B680c2b:{NFSU2_TR(0x680c2b);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B680c2e:{NFSU2_TR(0x680c2e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(r4(R+4))));
s4(u32(r4(U+0)),r4(U+4));
}
B680c31:{NFSU2_TR(0x680c31);
w4(R+0,u32(u32(r4(R+0))&u32(r4(R+4))));
}
B680c33:{NFSU2_TR(0x680c33);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B680c34:{NFSU2_TR(0x680c34);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+8))<(r4(U+8))));
}
B680c37:{NFSU2_TR(0x680c37);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x680c19u);}goto L680c19;}}
}
B680c39:L680c39:{c.instructions+=18;NFSU2_TR(0x680c39);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B680c3c:{NFSU2_TR(0x680c3c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B680c3f:{NFSU2_TR(0x680c3f);
u8 U[4];
w4(U+0,u32(u32(u32(0x7ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B680c42:{NFSU2_TR(0x680c42);
w4(R+4,u32(~u32(r4(R+4))));
}
B680c44:{NFSU2_TR(0x680c44);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B680c46:{NFSU2_TR(0x680c46);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B680c47:{NFSU2_TR(0x680c47);
w4(R+4,u32(u32(r4(R+4))&u32(r4(R+8))));
}
B680c49:{NFSU2_TR(0x680c49);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B680c4c:{NFSU2_TR(0x680c4c);
__builtin_memmove((R+4),(R+0),4);
}
B680c4e:{NFSU2_TR(0x680c4e);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x2ull))));
}
B680c51:{NFSU2_TR(0x680c51);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B680c54:{NFSU2_TR(0x680c54);
__builtin_memmove((R+4),(R+0),4);
}
B680c56:{NFSU2_TR(0x680c56);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x40ull))));
}
B680c59:{NFSU2_TR(0x680c59);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x400ull))));
}
B680c5e:{NFSU2_TR(0x680c5e);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x10ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B680c62:{NFSU2_TR(0x680c62);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B680c65:{NFSU2_TR(0x680c65);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B680c68:{NFSU2_TR(0x680c68);
if(r1(R+518)){{goto L680caf;}}
}
B680c6a:L680c6a:{c.instructions+=3;NFSU2_TR(0x680c6a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B680c6d:{NFSU2_TR(0x680c6d);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B680c70:{NFSU2_TR(0x680c70);
if(r1(R+512)){{goto L680c7a;}}
}
B680c72:L680c72:{c.instructions+=3;NFSU2_TR(0x680c72);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B680c75:{NFSU2_TR(0x680c75);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B680c78:{NFSU2_TR(0x680c78);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L680cc1;}}
}
B680c7a:L680c7a:{c.instructions+=2;NFSU2_TR(0x680c7a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B680c7e:{NFSU2_TR(0x680c7e);
{goto L680cbe;}
}
B680c80:L680c80:{c.instructions+=2;NFSU2_TR(0x680c80);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B680c84:{NFSU2_TR(0x680c84);
if(r1(R+518)){{goto L680ca0;}}
}
B680c86:L680c86:{c.instructions+=4;NFSU2_TR(0x680c86);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B680c89:{NFSU2_TR(0x680c89);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B680c8c:{NFSU2_TR(0x680c8c);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B680c8e:{NFSU2_TR(0x680c8e);
if(r1(R+518)){TAIL_STATIC(0x681ac1u,681);}
}
B680c94:L680c94:{c.instructions+=1;NFSU2_TR(0x680c94);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B680c97:L680c97:{c.instructions+=1;NFSU2_TR(0x680c97);
__builtin_memmove((R+4),(R+12),4);
}
B680c99:L680c99:{c.instructions+=1;NFSU2_TR(0x680c99);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L680c9b;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x680c99u);}goto L680c99;}
}
B680c9b:L680c9b:{c.instructions+=1;NFSU2_TR(0x680c9b);
TAIL_STATIC(0x681ac1u,681);
}
B680ca0:L680ca0:{c.instructions+=3;NFSU2_TR(0x680ca0);
u8 U[4];
w4(U+0,u32(0x7b43e4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B680ca5:{NFSU2_TR(0x680ca5);
u8 U[4];
w4(U+0,u32(0xdb0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B680caa:{NFSU2_TR(0x680caa);
TAIL_STATIC(0x6811c5u,681);
}
B680caf:L680caf:{c.instructions+=2;NFSU2_TR(0x680caf);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B680cb3:{NFSU2_TR(0x680cb3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L680cc1;}}
}
B680cb5:L680cb5:{c.instructions+=3;NFSU2_TR(0x680cb5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B680cb8:{NFSU2_TR(0x680cb8);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x71ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x2ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B680cbc:{NFSU2_TR(0x680cbc);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L680cc1;}}
}
B680cbe:L680cbe:{c.instructions+=1;NFSU2_TR(0x680cbe);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B680cc1:L680cc1:{c.instructions+=4;NFSU2_TR(0x680cc1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B680cc4:{NFSU2_TR(0x680cc4);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((R+8),(U+0),4);
}
B680cc7:{NFSU2_TR(0x680cc7);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+8))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B680cca:{NFSU2_TR(0x680cca);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L680cd7;}}
}
B680ccc:L680ccc:{c.instructions+=3;NFSU2_TR(0x680ccc);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(r4(R+12)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B680ccf:{NFSU2_TR(0x680ccf);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((R+24),(U+4),4);
}
B680cd2:{NFSU2_TR(0x680cd2);
{goto L680d5e;}
}
B680cd7:L680cd7:{c.instructions+=6;NFSU2_TR(0x680cd7);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+12))<(r4(U+8))));
}
B680cda:{NFSU2_TR(0x680cda);
__builtin_memmove((R+0),(R+12),4);
}
B680cdc:{NFSU2_TR(0x680cdc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B680cdf:{NFSU2_TR(0x680cdf);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B680ce2:{NFSU2_TR(0x680ce2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B680ce5:{NFSU2_TR(0x680ce5);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L680d48;}}
}
B680ce7:L680ce7:{c.instructions+=1;NFSU2_TR(0x680ce7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B680cea:L680cea:{c.instructions+=3;NFSU2_TR(0x680cea);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B680cec:{NFSU2_TR(0x680cec);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+4))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B680cef:{NFSU2_TR(0x680cef);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L680cf6;}}
}
B680cf1:L680cf1:{c.instructions+=2;NFSU2_TR(0x680cf1);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+4))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B680cf4:{NFSU2_TR(0x680cf4);
if(r1(R+518)){{goto L680d4f;}}
}
B680cf6:L680cf6:{c.instructions+=10;NFSU2_TR(0x680cf6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B680cf9:{NFSU2_TR(0x680cf9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B680cfc:{NFSU2_TR(0x680cfc);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B680cff:{NFSU2_TR(0x680cff);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+8),(U+0),4);
}
B680d01:{NFSU2_TR(0x680d01);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B680d04:{NFSU2_TR(0x680d04);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B680d07:{NFSU2_TR(0x680d07);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B680d0a:{NFSU2_TR(0x680d0a);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B680d0d:{NFSU2_TR(0x680d0d);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B680d10:{NFSU2_TR(0x680d10);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L680d30;}}
}
B680d12:L680d12:{c.instructions+=3;NFSU2_TR(0x680d12);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B680d15:{NFSU2_TR(0x680d15);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B680d18:{NFSU2_TR(0x680d18);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L680d30;}}
}
B680d1a:L680d1a:{c.instructions+=3;NFSU2_TR(0x680d1a);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B680d1d:{NFSU2_TR(0x680d1d);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B680d20:{NFSU2_TR(0x680d20);
if(r1(R+518)){{goto L680d26;}}
}
B680d22:L680d22:{c.instructions+=1;NFSU2_TR(0x680d22);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B680d26:L680d26:{c.instructions+=3;NFSU2_TR(0x680d26);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B680d29:{NFSU2_TR(0x680d29);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B680d2c:{NFSU2_TR(0x680d2c);
if(r1(R+518)){{goto L680d38;}}
}
B680d2e:L680d2e:{c.instructions+=1;NFSU2_TR(0x680d2e);
{goto L680d34;}
}
B680d30:L680d30:{c.instructions+=1;NFSU2_TR(0x680d30);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B680d34:L680d34:{c.instructions+=1;NFSU2_TR(0x680d34);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B680d38:L680d38:{c.instructions+=6;NFSU2_TR(0x680d38);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B680d3b:{NFSU2_TR(0x680d3b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x4ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B680d3f:{NFSU2_TR(0x680d3f);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B680d40:{NFSU2_TR(0x680d40);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B680d43:{NFSU2_TR(0x680d43);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B680d46:{NFSU2_TR(0x680d46);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x680ceau);}goto L680cea;}}
}
B680d48:L680d48:{c.instructions+=3;NFSU2_TR(0x680d48);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B680d4a:{NFSU2_TR(0x680d4a);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+4))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B680d4d:{NFSU2_TR(0x680d4d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L680d52;}}
}
B680d4f:L680d4f:{c.instructions+=1;NFSU2_TR(0x680d4f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B680d52:L680d52:{c.instructions+=2;NFSU2_TR(0x680d52);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+4))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B680d55:{NFSU2_TR(0x680d55);
if(r1(R+518)){{goto L680d66;}}
}
B680d57:L680d57:{c.instructions+=2;NFSU2_TR(0x680d57);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+4))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B680d5a:{NFSU2_TR(0x680d5a);
if(r1(R+518)){{goto L680d66;}}
}
B680d5c:L680d5c:{c.instructions+=1;NFSU2_TR(0x680d5c);
__builtin_memmove((R+24),(R+28),4);
}
B680d5e:L680d5e:{c.instructions+=2;NFSU2_TR(0x680d5e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B680d61:{NFSU2_TR(0x680d61);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x680c97u);}goto L680c97;}
}
B680d66:L680d66:{c.instructions+=2;NFSU2_TR(0x680d66);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+4))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B680d69:{NFSU2_TR(0x680d69);
if(r1(R+518)){{goto L680dd7;}}
}
B680d6b:L680d6b:{c.instructions+=2;NFSU2_TR(0x680d6b);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+4))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B680d6e:{NFSU2_TR(0x680d6e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L680dd1;}}
}
B680d70:L680d70:{c.instructions+=14;NFSU2_TR(0x680d70);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B680d73:{NFSU2_TR(0x680d73);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B680d76:{NFSU2_TR(0x680d76);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B680d78:{NFSU2_TR(0x680d78);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B680d7b:{NFSU2_TR(0x680d7b);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+12),(U+8),4);
}
B680d7e:{NFSU2_TR(0x680d7e);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B680d81:{NFSU2_TR(0x680d81);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B680d84:{NFSU2_TR(0x680d84);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+4,u32(u32(r4(R+4))-u32(r4(U+4))));
}
B680d87:{NFSU2_TR(0x680d87);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B680d8a:{NFSU2_TR(0x680d8a);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B680d8c:{NFSU2_TR(0x680d8c);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B680d8d:{NFSU2_TR(0x680d8d);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(R+12))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B680d8f:{NFSU2_TR(0x680d8f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B680d92:{NFSU2_TR(0x680d92);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L680dd1;}}
}
B680d94:L680d94:{c.instructions+=3;NFSU2_TR(0x680d94);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B680d97:{NFSU2_TR(0x680d97);
u8 U[12];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B680d9b:{NFSU2_TR(0x680d9b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B680d9e:L680d9e:{c.instructions+=10;NFSU2_TR(0x680d9e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B680da1:{NFSU2_TR(0x680da1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+12),(U+0),4);
}
B680da3:{NFSU2_TR(0x680da3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B680da6:{NFSU2_TR(0x680da6);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+12),(U+8),4);
}
B680da9:{NFSU2_TR(0x680da9);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B680dac:{NFSU2_TR(0x680dac);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B680daf:{NFSU2_TR(0x680daf);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B680db2:{NFSU2_TR(0x680db2);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+12,u32(u32(r4(R+12))-u32(r4(U+4))));
}
B680db5:{NFSU2_TR(0x680db5);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B680db7:{NFSU2_TR(0x680db7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L680dca;}}
}
B680db9:L680db9:{c.instructions+=5;NFSU2_TR(0x680db9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B680dbc:{NFSU2_TR(0x680dbc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B680dbf:{NFSU2_TR(0x680dbf);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x4ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B680dc3:{NFSU2_TR(0x680dc3);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B680dc6:{NFSU2_TR(0x680dc6);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x680d9eu);}goto L680d9e;}}
}
B680dc8:L680dc8:{c.instructions+=1;NFSU2_TR(0x680dc8);
{goto L680dce;}
}
B680dca:L680dca:{c.instructions+=1;NFSU2_TR(0x680dca);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B680dce:L680dce:{c.instructions+=1;NFSU2_TR(0x680dce);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B680dd1:L680dd1:{c.instructions+=2;NFSU2_TR(0x680dd1);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B680dd5:{NFSU2_TR(0x680dd5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L680ddb;}}
}
B680dd7:L680dd7:{c.instructions+=1;NFSU2_TR(0x680dd7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B680ddb:L680ddb:{c.instructions+=3;NFSU2_TR(0x680ddb);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B680ddd:{NFSU2_TR(0x680ddd);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B680de0:{NFSU2_TR(0x680de0);
if(r1(R+518)){{goto L680e04;}}
}
B680de2:L680de2:{c.instructions+=2;NFSU2_TR(0x680de2);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B680de5:{NFSU2_TR(0x680de5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L680e04;}}
}
B680de7:L680de7:{c.instructions+=2;NFSU2_TR(0x680de7);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B680dea:{NFSU2_TR(0x680dea);
if(r1(R+518)){{goto L680df5;}}
}
B680dec:L680dec:{c.instructions+=2;NFSU2_TR(0x680dec);
u8 U[22];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(r4(R+0))));
w1(R+523,sborrow<u32>(r4(U+14),r4(R+0)));
w4(U+18,u32(u32(r4(U+14))-u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B680def:{NFSU2_TR(0x680def);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x6811dau,681);}
}
B680df5:L680df5:{c.instructions+=3;NFSU2_TR(0x680df5);
u8 U[4];
w4(U+0,u32(0x7b7ac0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B680dfa:{NFSU2_TR(0x680dfa);
u8 U[4];
w4(U+0,u32(0xdacull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B680dff:{NFSU2_TR(0x680dff);
TAIL_STATIC(0x6811c5u,681);
}
B680e04:L680e04:{c.instructions+=2;NFSU2_TR(0x680e04);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B680e07:{NFSU2_TR(0x680e07);
if(r1(R+518)){TAIL_STATIC(0x6811b1u,681);}
}
B680e0d:L680e0d:{c.instructions+=4;NFSU2_TR(0x680e0d);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B680e0f:{NFSU2_TR(0x680e0f);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B680e10:{NFSU2_TR(0x680e10);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+12))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B680e13:{NFSU2_TR(0x680e13);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L680e2c;}}
}
B680e15:L680e15:{c.instructions+=8;NFSU2_TR(0x680e15);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B680e18:{NFSU2_TR(0x680e18);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B680e1b:{NFSU2_TR(0x680e1b);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B680e1e:{NFSU2_TR(0x680e1e);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B680e21:{NFSU2_TR(0x680e21);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+8),(U+0),4);
}
B680e23:{NFSU2_TR(0x680e23);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B680e26:{NFSU2_TR(0x680e26);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B680e29:{NFSU2_TR(0x680e29);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))-u32(r4(U+4))));
}
B680e2c:L680e2c:{c.instructions+=6;NFSU2_TR(0x680e2c);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B680e2f:{NFSU2_TR(0x680e2f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B680e32:{NFSU2_TR(0x680e32);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+4),(U+0),4);
}
B680e34:{NFSU2_TR(0x680e34);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B680e37:{NFSU2_TR(0x680e37);
w4(R+12,u32(0x20400001ull));
}
B680e3c:{NFSU2_TR(0x680e3c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L680e4a;}}
}
B680e3e:L680e3e:{c.instructions+=3;NFSU2_TR(0x680e3e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B680e41:{NFSU2_TR(0x680e41);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x6full))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(r1(R+0))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B680e44:{NFSU2_TR(0x680e44);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L680f50;}}
}
B680e4a:L680e4a:{c.instructions+=5;NFSU2_TR(0x680e4a);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B680e4c:{NFSU2_TR(0x680e4c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B680e4f:{NFSU2_TR(0x680e4f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B680e52:{NFSU2_TR(0x680e52);
{u32 ea_=u32(r4(R+20)+u32(32u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B680e55:{NFSU2_TR(0x680e55);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L680e5d;}}
}
B680e57:L680e57:{c.instructions+=1;NFSU2_TR(0x680e57);
{u32 ea_=u32(u32(8042640u));__asm__ volatile(".byte 0xdc,0x00"::"a"(ea_):"memory");}
}
B680e5d:L680e5d:{c.instructions+=7;NFSU2_TR(0x680e5d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B680e5e:{NFSU2_TR(0x680e5e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B680e5f:{NFSU2_TR(0x680e5f);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B680e62:{NFSU2_TR(0x680e62);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B680e64:{NFSU2_TR(0x680e64);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B680e66:{NFSU2_TR(0x680e66);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B680e69:{NFSU2_TR(0x680e69);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x680e6eull));
TAIL_STATIC(0x699c39u,699);
}
B680e6e:L680e6e:{c.instructions+=3;NFSU2_TR(0x680e6e);
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
B680e71:{NFSU2_TR(0x680e71);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B680e74:{NFSU2_TR(0x680e74);
if(r1(R+518)){TAIL_STATIC(0x681a54u,681);}
}
B680e7a:L680e7a:{c.instructions+=13;NFSU2_TR(0x680e7a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B680e7d:{NFSU2_TR(0x680e7d);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0xffffffffull))));
}
B680e80:{NFSU2_TR(0x680e80);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc8ull))));
__builtin_memmove((R+28),(U+0),4);
}
B680e83:{NFSU2_TR(0x680e83);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B680e84:{NFSU2_TR(0x680e84);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B680e85:{NFSU2_TR(0x680e85);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B680e86:{NFSU2_TR(0x680e86);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B680e87:{NFSU2_TR(0x680e87);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B680e88:{NFSU2_TR(0x680e88);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B680e8b:{NFSU2_TR(0x680e8b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B680e8e:{NFSU2_TR(0x680e8e);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B680e91:{NFSU2_TR(0x680e91);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
w1(U+1,u8(u32(r1(U+0))&u32(u8(0x2ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B680e94:{NFSU2_TR(0x680e94);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L680f25;}}
}
B680e9a:L680e9a:{c.instructions+=11;NFSU2_TR(0x680e9a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B680e9d:{NFSU2_TR(0x680e9d);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B680e9f:{NFSU2_TR(0x680e9f);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B680ea1:{NFSU2_TR(0x680ea1);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((R+0),(U+0),4);
}
B680ea4:{NFSU2_TR(0x680ea4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B680ea5:{NFSU2_TR(0x680ea5);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B680ea8:{NFSU2_TR(0x680ea8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B680ea9:{NFSU2_TR(0x680ea9);
u8 U[4];
w4(U+0,u32(0x10200001ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B680eae:{NFSU2_TR(0x680eae);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B680eaf:{NFSU2_TR(0x680eaf);
__builtin_memmove((R+4),(R+24),4);
}
B680eb1:{NFSU2_TR(0x680eb1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x680eb6ull));
TAIL_STATIC(0x6758ceu,675);
}
B680eb6:L680eb6:{c.instructions+=2;NFSU2_TR(0x680eb6);
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
B680eb8:{NFSU2_TR(0x680eb8);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x681ac3u,681);}
}
B680ebe:L680ebe:{c.instructions+=10;NFSU2_TR(0x680ebe);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B680ec0:{NFSU2_TR(0x680ec0);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B680ec2:{NFSU2_TR(0x680ec2);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B680ec5:{NFSU2_TR(0x680ec5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B680ec6:{NFSU2_TR(0x680ec6);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((R+0),(U+0),4);
}
B680ec9:{NFSU2_TR(0x680ec9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B680eca:{NFSU2_TR(0x680eca);
u8 U[4];
w4(U+0,u32(0x10400001ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B680ecf:{NFSU2_TR(0x680ecf);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B680ed0:{NFSU2_TR(0x680ed0);
__builtin_memmove((R+4),(R+24),4);
}
B680ed2:{NFSU2_TR(0x680ed2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x680ed7ull));
TAIL_STATIC(0x6758ceu,675);
}
B680ed7:L680ed7:{c.instructions+=2;NFSU2_TR(0x680ed7);
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
B680ed9:{NFSU2_TR(0x680ed9);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x681ac3u,681);}
}
B680edf:L680edf:{c.instructions+=10;NFSU2_TR(0x680edf);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B680ee1:{NFSU2_TR(0x680ee1);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B680ee3:{NFSU2_TR(0x680ee3);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((R+0),(U+0),4);
}
B680ee6:{NFSU2_TR(0x680ee6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B680ee7:{NFSU2_TR(0x680ee7);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B680eea:{NFSU2_TR(0x680eea);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B680eeb:{NFSU2_TR(0x680eeb);
u8 U[4];
w4(U+0,u32(0x10100001ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B680ef0:{NFSU2_TR(0x680ef0);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B680ef1:{NFSU2_TR(0x680ef1);
__builtin_memmove((R+4),(R+24),4);
}
B680ef3:{NFSU2_TR(0x680ef3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x680ef8ull));
TAIL_STATIC(0x6758ceu,675);
}
B680ef8:L680ef8:{c.instructions+=2;NFSU2_TR(0x680ef8);
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
B680efa:{NFSU2_TR(0x680efa);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x681ac3u,681);}
}
B680f00:L680f00:{c.instructions+=11;NFSU2_TR(0x680f00);
u8 U[4];
w4(U+0,u32(0x6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B680f02:{NFSU2_TR(0x680f02);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B680f05:{NFSU2_TR(0x680f05);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B680f06:{NFSU2_TR(0x680f06);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B680f09:{NFSU2_TR(0x680f09);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B680f0a:{NFSU2_TR(0x680f0a);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B680f0d:{NFSU2_TR(0x680f0d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B680f0e:{NFSU2_TR(0x680f0e);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B680f0f:{NFSU2_TR(0x680f0f);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B680f10:{NFSU2_TR(0x680f10);
__builtin_memmove((R+4),(R+24),4);
}
B680f12:{NFSU2_TR(0x680f12);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x680f17ull));
TAIL_STATIC(0x6758ceu,675);
}
B680f17:L680f17:{c.instructions+=2;NFSU2_TR(0x680f17);
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
B680f19:{NFSU2_TR(0x680f19);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x681ac3u,681);}
}
B680f1f:L680f1f:{c.instructions+=2;NFSU2_TR(0x680f1f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B680f22:{NFSU2_TR(0x680f22);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B680f25:L680f25:{c.instructions+=11;NFSU2_TR(0x680f25);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B680f27:{NFSU2_TR(0x680f27);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x24ull))));
__builtin_memmove((R+0),(U+0),4);
}
B680f2a:{NFSU2_TR(0x680f2a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B680f2b:{NFSU2_TR(0x680f2b);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((R+0),(U+0),4);
}
B680f2e:{NFSU2_TR(0x680f2e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B680f2f:{NFSU2_TR(0x680f2f);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B680f32:{NFSU2_TR(0x680f32);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B680f33:{NFSU2_TR(0x680f33);
u8 U[4];
w4(U+0,u32(0x20500001ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B680f38:{NFSU2_TR(0x680f38);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B680f3b:{NFSU2_TR(0x680f3b);
__builtin_memmove((R+4),(R+24),4);
}
B680f3d:{NFSU2_TR(0x680f3d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x680f42ull));
TAIL_STATIC(0x6758ceu,675);
}
B680f42:L680f42:{c.instructions+=2;NFSU2_TR(0x680f42);
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
B680f44:{NFSU2_TR(0x680f44);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x681ac3u,681);}
}
B680f4a:L680f4a:{c.instructions+=2;NFSU2_TR(0x680f4a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B680f4d:{NFSU2_TR(0x680f4d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B680f50:L680f50:{c.instructions+=9;NFSU2_TR(0x680f50);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B680f53:{NFSU2_TR(0x680f53);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B680f56:{NFSU2_TR(0x680f56);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+4),(U+0),4);
}
B680f58:{NFSU2_TR(0x680f58);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B680f5b:{NFSU2_TR(0x680f5b);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B680f5e:{NFSU2_TR(0x680f5e);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B680f61:{NFSU2_TR(0x680f61);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B680f64:{NFSU2_TR(0x680f64);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B680f67:{NFSU2_TR(0x680f67);
if(r1(R+518)){TAIL_STATIC(0x68104eu,681);}
}
B680f6d:L680f6d:{c.instructions+=17;NFSU2_TR(0x680f6d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B680f70:{NFSU2_TR(0x680f70);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x88ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B680f76:{NFSU2_TR(0x680f76);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B680f79:{NFSU2_TR(0x680f79);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B680f7c:{NFSU2_TR(0x680f7c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B680f7f:{NFSU2_TR(0x680f7f);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0xffffffffull))));
}
B680f82:{NFSU2_TR(0x680f82);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc8ull))));
__builtin_memmove((R+28),(U+0),4);
}
B680f85:{NFSU2_TR(0x680f85);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B680f86:{NFSU2_TR(0x680f86);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B680f87:{NFSU2_TR(0x680f87);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B680f88:{NFSU2_TR(0x680f88);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B680f89:{NFSU2_TR(0x680f89);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B680f8a:{NFSU2_TR(0x680f8a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B680f8d:{NFSU2_TR(0x680f8d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B680f90:{NFSU2_TR(0x680f90);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B680f93:{NFSU2_TR(0x680f93);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
w1(U+1,u8(u32(r1(U+0))&u32(u8(0x2ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B680f96:{NFSU2_TR(0x680f96);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x681027u,681);}
}
B680f9c:L680f9c:{c.instructions+=11;NFSU2_TR(0x680f9c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B680f9f:{NFSU2_TR(0x680f9f);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B680fa1:{NFSU2_TR(0x680fa1);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B680fa3:{NFSU2_TR(0x680fa3);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((R+0),(U+0),4);
}
B680fa6:{NFSU2_TR(0x680fa6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B680fa7:{NFSU2_TR(0x680fa7);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B680faa:{NFSU2_TR(0x680faa);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B680fab:{NFSU2_TR(0x680fab);
u8 U[4];
w4(U+0,u32(0x10200001ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B680fb0:{NFSU2_TR(0x680fb0);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B680fb1:{NFSU2_TR(0x680fb1);
__builtin_memmove((R+4),(R+24),4);
}
B680fb3:{NFSU2_TR(0x680fb3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x680fb8ull));
TAIL_STATIC(0x6758ceu,675);
}
B680fb8:L680fb8:{c.instructions+=2;NFSU2_TR(0x680fb8);
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
B680fba:{NFSU2_TR(0x680fba);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x681ac3u,681);}
}
B680fc0:L680fc0:{c.instructions+=10;NFSU2_TR(0x680fc0);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B680fc2:{NFSU2_TR(0x680fc2);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B680fc4:{NFSU2_TR(0x680fc4);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B680fc7:{NFSU2_TR(0x680fc7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B680fc8:{NFSU2_TR(0x680fc8);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((R+0),(U+0),4);
}
B680fcb:{NFSU2_TR(0x680fcb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B680fcc:{NFSU2_TR(0x680fcc);
u8 U[4];
w4(U+0,u32(0x10400001ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B680fd1:{NFSU2_TR(0x680fd1);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B680fd2:{NFSU2_TR(0x680fd2);
__builtin_memmove((R+4),(R+24),4);
}
B680fd4:{NFSU2_TR(0x680fd4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x680fd9ull));
TAIL_STATIC(0x6758ceu,675);
}
B680fd9:L680fd9:{c.instructions+=2;NFSU2_TR(0x680fd9);
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
B680fdb:{NFSU2_TR(0x680fdb);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x681ac3u,681);}
}
B680fe1:L680fe1:{c.instructions+=10;NFSU2_TR(0x680fe1);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B680fe3:{NFSU2_TR(0x680fe3);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B680fe5:{NFSU2_TR(0x680fe5);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((R+0),(U+0),4);
}
B680fe8:{NFSU2_TR(0x680fe8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B680fe9:{NFSU2_TR(0x680fe9);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B680fec:{NFSU2_TR(0x680fec);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B680fed:{NFSU2_TR(0x680fed);
u8 U[4];
w4(U+0,u32(0x10100001ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B680ff2:{NFSU2_TR(0x680ff2);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B680ff3:{NFSU2_TR(0x680ff3);
__builtin_memmove((R+4),(R+24),4);
}
B680ff5:{NFSU2_TR(0x680ff5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x680ffaull));
TAIL_STATIC(0x6758ceu,675);
}
B680ffa:L680ffa:{c.instructions+=2;NFSU2_TR(0x680ffa);
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
B680ffc:{NFSU2_TR(0x680ffc);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x681ac3u,681);}
TAIL_STATIC(0x681002u,681);
}
XIT:NFSU2_TR_EXIT(0x680,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
