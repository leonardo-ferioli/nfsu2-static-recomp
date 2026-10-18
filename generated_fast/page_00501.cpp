#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_413(u8* __restrict R,Cpu& c);
u32 body_43d(u8* __restrict R,Cpu& c);
u32 body_458(u8* __restrict R,Cpu& c);
u32 body_48b(u8* __restrict R,Cpu& c);
u32 body_4cb(u8* __restrict R,Cpu& c);
u32 body_500(u8* __restrict R,Cpu& c);
u32 body_502(u8* __restrict R,Cpu& c);
u32 body_5db(u8* __restrict R,Cpu& c);
u32 body_5f0(u8* __restrict R,Cpu& c);
u32 body_5f1(u8* __restrict R,Cpu& c);
u32 body_5f4(u8* __restrict R,Cpu& c);
u32 body_5fa(u8* __restrict R,Cpu& c);
u32 body_602(u8* __restrict R,Cpu& c);
u32 body_61b(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x501,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x501,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_501(u8* __restrict R,Cpu& c);
u32 page_501(Cpu& c){return body_501(c.regs.data(),c);}
__attribute__((noinline)) u32 body_501(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x501000:goto L501000;
case 0x501006:c.instructions+=15;goto B501006;
case 0x501009:c.instructions+=14;goto B501009;
case 0x50100c:c.instructions+=13;goto B50100c;
case 0x501012:c.instructions+=12;goto B501012;
case 0x501018:c.instructions+=11;goto B501018;
case 0x50101b:c.instructions+=10;goto B50101b;
case 0x501021:c.instructions+=9;goto B501021;
case 0x501023:c.instructions+=8;goto B501023;
case 0x501029:c.instructions+=7;goto B501029;
case 0x50102c:c.instructions+=6;goto B50102c;
case 0x501032:c.instructions+=5;goto B501032;
case 0x501034:c.instructions+=4;goto B501034;
case 0x501037:c.instructions+=3;goto B501037;
case 0x501039:c.instructions+=2;goto B501039;
case 0x50103f:c.instructions+=1;goto B50103f;
case 0x501040:goto L501040;
case 0x501042:c.instructions+=2;goto B501042;
case 0x501044:c.instructions+=1;goto B501044;
case 0x501046:goto L501046;
case 0x501049:c.instructions+=3;goto B501049;
case 0x50104f:c.instructions+=2;goto B50104f;
case 0x501050:c.instructions+=1;goto B501050;
case 0x501055:goto L501055;
case 0x501058:c.instructions+=1;goto B501058;
case 0x50105a:goto L50105a;
case 0x50105c:goto L50105c;
case 0x501060:c.instructions+=4;goto B501060;
case 0x501061:c.instructions+=3;goto B501061;
case 0x501064:c.instructions+=2;goto B501064;
case 0x501067:c.instructions+=1;goto B501067;
case 0x501069:goto L501069;
case 0x50106b:c.instructions+=2;goto B50106b;
case 0x501070:c.instructions+=1;goto B501070;
case 0x501074:goto L501074;
case 0x501076:goto L501076;
case 0x50107c:c.instructions+=7;goto B50107c;
case 0x501082:c.instructions+=6;goto B501082;
case 0x501085:c.instructions+=5;goto B501085;
case 0x501087:c.instructions+=4;goto B501087;
case 0x50108d:c.instructions+=3;goto B50108d;
case 0x50108e:c.instructions+=2;goto B50108e;
case 0x501090:c.instructions+=1;goto B501090;
case 0x501092:goto L501092;
case 0x501096:c.instructions+=8;goto B501096;
case 0x501097:c.instructions+=7;goto B501097;
case 0x501098:c.instructions+=6;goto B501098;
case 0x50109a:c.instructions+=5;goto B50109a;
case 0x50109b:c.instructions+=4;goto B50109b;
case 0x50109e:c.instructions+=3;goto B50109e;
case 0x50109f:c.instructions+=2;goto B50109f;
case 0x5010a2:c.instructions+=1;goto B5010a2;
case 0x5010a5:goto L5010a5;
case 0x5010a6:c.instructions+=8;goto B5010a6;
case 0x5010a8:c.instructions+=7;goto B5010a8;
case 0x5010a9:c.instructions+=6;goto B5010a9;
case 0x5010ab:c.instructions+=5;goto B5010ab;
case 0x5010ac:c.instructions+=4;goto B5010ac;
case 0x5010af:c.instructions+=3;goto B5010af;
case 0x5010b0:c.instructions+=2;goto B5010b0;
case 0x5010b3:c.instructions+=1;goto B5010b3;
case 0x5010c0:goto L5010c0;
case 0x5010c4:c.instructions+=8;goto B5010c4;
case 0x5010c8:c.instructions+=7;goto B5010c8;
case 0x5010c9:c.instructions+=6;goto B5010c9;
case 0x5010cc:c.instructions+=5;goto B5010cc;
case 0x5010cf:c.instructions+=4;goto B5010cf;
case 0x5010d0:c.instructions+=3;goto B5010d0;
case 0x5010d1:c.instructions+=2;goto B5010d1;
case 0x5010d2:c.instructions+=1;goto B5010d2;
case 0x5010d7:goto L5010d7;
case 0x5010da:c.instructions+=1;goto B5010da;
case 0x5010e0:goto L5010e0;
case 0x5010e1:c.instructions+=3;goto B5010e1;
case 0x5010e3:c.instructions+=2;goto B5010e3;
case 0x5010e8:c.instructions+=1;goto B5010e8;
case 0x5010ed:goto L5010ed;
case 0x5010ef:c.instructions+=7;goto B5010ef;
case 0x5010f2:c.instructions+=6;goto B5010f2;
case 0x5010f5:c.instructions+=5;goto B5010f5;
case 0x5010f8:c.instructions+=4;goto B5010f8;
case 0x5010fb:c.instructions+=3;goto B5010fb;
case 0x5010fd:c.instructions+=2;goto B5010fd;
case 0x5010fe:c.instructions+=1;goto B5010fe;
case 0x501100:goto L501100;
case 0x501103:c.instructions+=2;goto B501103;
case 0x501105:c.instructions+=1;goto B501105;
case 0x501107:goto L501107;
case 0x50110c:c.instructions+=1;goto B50110c;
case 0x50110d:goto L50110d;
case 0x501112:c.instructions+=2;goto B501112;
case 0x501113:c.instructions+=1;goto B501113;
case 0x501115:goto L501115;
case 0x501116:c.instructions+=1;goto B501116;
case 0x501118:goto L501118;
case 0x50111d:c.instructions+=1;goto B50111d;
case 0x50111f:goto L50111f;
case 0x501123:c.instructions+=2;goto B501123;
case 0x501128:c.instructions+=1;goto B501128;
case 0x50112a:goto L50112a;
case 0x50112c:goto L50112c;
case 0x501132:c.instructions+=2;goto B501132;
case 0x501135:c.instructions+=1;goto B501135;
case 0x501137:goto L501137;
case 0x501138:c.instructions+=1;goto B501138;
case 0x50113a:goto L50113a;
case 0x50113f:c.instructions+=1;goto B50113f;
case 0x501140:goto L501140;
case 0x501145:goto L501145;
case 0x501150:goto L501150;
case 0x501151:c.instructions+=7;goto B501151;
case 0x501153:c.instructions+=6;goto B501153;
case 0x501156:c.instructions+=5;goto B501156;
case 0x501159:c.instructions+=4;goto B501159;
case 0x50115f:c.instructions+=3;goto B50115f;
case 0x501161:c.instructions+=2;goto B501161;
case 0x501163:c.instructions+=1;goto B501163;
case 0x501165:goto L501165;
case 0x50116c:c.instructions+=1;goto B50116c;
case 0x50116e:goto L50116e;
case 0x50116f:c.instructions+=2;goto B50116f;
case 0x501171:c.instructions+=1;goto B501171;
case 0x501173:goto L501173;
case 0x501175:c.instructions+=2;goto B501175;
case 0x501176:c.instructions+=1;goto B501176;
case 0x501179:goto L501179;
case 0x501180:c.instructions+=2;goto B501180;
case 0x501182:c.instructions+=1;goto B501182;
case 0x501184:goto L501184;
case 0x501188:c.instructions+=1;goto B501188;
case 0x50118a:goto L50118a;
case 0x50118e:c.instructions+=3;goto B50118e;
case 0x501191:c.instructions+=2;goto B501191;
case 0x501192:c.instructions+=1;goto B501192;
case 0x5011a0:goto L5011a0;
case 0x5011a4:c.instructions+=3;goto B5011a4;
case 0x5011a7:c.instructions+=2;goto B5011a7;
case 0x5011a9:c.instructions+=1;goto B5011a9;
case 0x5011ab:goto L5011ab;
case 0x5011ad:c.instructions+=1;goto B5011ad;
case 0x5011af:goto L5011af;
case 0x5011b1:c.instructions+=1;goto B5011b1;
case 0x5011b4:goto L5011b4;
case 0x5011b6:c.instructions+=1;goto B5011b6;
case 0x5011c0:goto L5011c0;
case 0x5011c1:c.instructions+=11;goto B5011c1;
case 0x5011c3:c.instructions+=10;goto B5011c3;
case 0x5011c6:c.instructions+=9;goto B5011c6;
case 0x5011ca:c.instructions+=8;goto B5011ca;
case 0x5011cd:c.instructions+=7;goto B5011cd;
case 0x5011d0:c.instructions+=6;goto B5011d0;
case 0x5011d3:c.instructions+=5;goto B5011d3;
case 0x5011d6:c.instructions+=4;goto B5011d6;
case 0x5011dc:c.instructions+=3;goto B5011dc;
case 0x5011de:c.instructions+=2;goto B5011de;
case 0x5011e1:c.instructions+=1;goto B5011e1;
case 0x5011e3:goto L5011e3;
case 0x5011e6:c.instructions+=3;goto B5011e6;
case 0x5011ea:c.instructions+=2;goto B5011ea;
case 0x5011ed:c.instructions+=1;goto B5011ed;
case 0x5011ef:goto L5011ef;
case 0x5011f3:goto L5011f3;
case 0x5011f8:c.instructions+=2;goto B5011f8;
case 0x5011fa:c.instructions+=1;goto B5011fa;
case 0x5011fc:goto L5011fc;
case 0x5011ff:c.instructions+=3;goto B5011ff;
case 0x501200:c.instructions+=2;goto B501200;
case 0x501205:c.instructions+=1;goto B501205;
case 0x50120a:goto L50120a;
case 0x50120c:c.instructions+=1;goto B50120c;
case 0x50120e:goto L50120e;
case 0x501211:c.instructions+=2;goto B501211;
case 0x501214:c.instructions+=1;goto B501214;
case 0x501216:goto L501216;
case 0x501219:c.instructions+=4;goto B501219;
case 0x50121c:c.instructions+=3;goto B50121c;
case 0x501221:c.instructions+=2;goto B501221;
case 0x501228:c.instructions+=1;goto B501228;
case 0x50122d:goto L50122d;
case 0x501233:c.instructions+=5;goto B501233;
case 0x501236:c.instructions+=4;goto B501236;
case 0x50123c:c.instructions+=3;goto B50123c;
case 0x50123d:c.instructions+=2;goto B50123d;
case 0x50123f:c.instructions+=1;goto B50123f;
case 0x501244:goto L501244;
case 0x501245:c.instructions+=1;goto B501245;
case 0x501250:goto L501250;
case 0x501256:c.instructions+=2;goto B501256;
case 0x501258:c.instructions+=1;goto B501258;
case 0x50125a:goto L50125a;
case 0x50125f:goto L50125f;
case 0x501260:c.instructions+=1;goto B501260;
case 0x501265:goto L501265;
case 0x501266:c.instructions+=1;goto B501266;
case 0x50126b:goto L50126b;
case 0x50126e:c.instructions+=3;goto B50126e;
case 0x501271:c.instructions+=2;goto B501271;
case 0x501273:c.instructions+=1;goto B501273;
case 0x501275:goto L501275;
case 0x501278:c.instructions+=2;goto B501278;
case 0x50127a:c.instructions+=1;goto B50127a;
case 0x50127f:goto L50127f;
case 0x501280:c.instructions+=2;goto B501280;
case 0x501283:c.instructions+=1;goto B501283;
case 0x501285:goto L501285;
case 0x501286:c.instructions+=1;goto B501286;
case 0x501290:goto L501290;
case 0x501294:c.instructions+=3;goto B501294;
case 0x501296:c.instructions+=2;goto B501296;
case 0x50129c:c.instructions+=1;goto B50129c;
case 0x50129e:goto L50129e;
case 0x5012a0:c.instructions+=2;goto B5012a0;
case 0x5012a2:c.instructions+=1;goto B5012a2;
case 0x5012a7:goto L5012a7;
case 0x5012ac:goto L5012ac;
case 0x5012af:goto L5012af;
case 0x5012b1:c.instructions+=1;goto B5012b1;
case 0x5012b6:goto L5012b6;
case 0x5012bb:goto L5012bb;
case 0x5012c0:goto L5012c0;
case 0x5012c3:c.instructions+=1;goto B5012c3;
case 0x5012d0:goto L5012d0;
case 0x5012d3:c.instructions+=1;goto B5012d3;
case 0x5012e0:goto L5012e0;
case 0x5012e4:c.instructions+=2;goto B5012e4;
case 0x5012e7:c.instructions+=1;goto B5012e7;
case 0x5012f0:goto L5012f0;
case 0x5012f4:c.instructions+=6;goto B5012f4;
case 0x5012f9:c.instructions+=5;goto B5012f9;
case 0x5012fe:c.instructions+=4;goto B5012fe;
case 0x501302:c.instructions+=3;goto B501302;
case 0x501305:c.instructions+=2;goto B501305;
case 0x50130b:c.instructions+=1;goto B50130b;
case 0x501310:goto L501310;
case 0x501311:c.instructions+=3;goto B501311;
case 0x501315:c.instructions+=2;goto B501315;
case 0x501317:c.instructions+=1;goto B501317;
case 0x501319:goto L501319;
case 0x50131b:c.instructions+=2;goto B50131b;
case 0x50131c:c.instructions+=1;goto B50131c;
case 0x50131d:goto L50131d;
case 0x501322:c.instructions+=6;goto B501322;
case 0x501323:c.instructions+=5;goto B501323;
case 0x501324:c.instructions+=4;goto B501324;
case 0x501326:c.instructions+=3;goto B501326;
case 0x501328:c.instructions+=2;goto B501328;
case 0x501329:c.instructions+=1;goto B501329;
case 0x50132b:goto L50132b;
case 0x50132d:c.instructions+=1;goto B50132d;
case 0x501330:goto L501330;
case 0x501335:c.instructions+=6;goto B501335;
case 0x501339:c.instructions+=5;goto B501339;
case 0x50133f:c.instructions+=4;goto B50133f;
case 0x501342:c.instructions+=3;goto B501342;
case 0x501344:c.instructions+=2;goto B501344;
case 0x501345:c.instructions+=1;goto B501345;
case 0x50134a:goto L50134a;
case 0x50134d:c.instructions+=2;goto B50134d;
case 0x50134f:c.instructions+=1;goto B50134f;
case 0x501351:goto L501351;
case 0x501356:c.instructions+=4;goto B501356;
case 0x501357:c.instructions+=3;goto B501357;
case 0x50135a:c.instructions+=2;goto B50135a;
case 0x50135c:c.instructions+=1;goto B50135c;
case 0x50135e:goto L50135e;
case 0x50135f:c.instructions+=5;goto B50135f;
case 0x501360:c.instructions+=4;goto B501360;
case 0x501361:c.instructions+=3;goto B501361;
case 0x501363:c.instructions+=2;goto B501363;
case 0x501364:c.instructions+=1;goto B501364;
case 0x501365:goto L501365;
case 0x501366:c.instructions+=5;goto B501366;
case 0x501368:c.instructions+=4;goto B501368;
case 0x501369:c.instructions+=3;goto B501369;
case 0x50136a:c.instructions+=2;goto B50136a;
case 0x50136b:c.instructions+=1;goto B50136b;
case 0x501370:goto L501370;
case 0x501371:c.instructions+=6;goto B501371;
case 0x501373:c.instructions+=5;goto B501373;
case 0x501374:c.instructions+=4;goto B501374;
case 0x501377:c.instructions+=3;goto B501377;
case 0x50137a:c.instructions+=2;goto B50137a;
case 0x50137b:c.instructions+=1;goto B50137b;
case 0x50137d:goto L50137d;
case 0x501380:c.instructions+=3;goto B501380;
case 0x501383:c.instructions+=2;goto B501383;
case 0x501385:c.instructions+=1;goto B501385;
case 0x501388:goto L501388;
case 0x50138a:c.instructions+=1;goto B50138a;
case 0x50138c:goto L50138c;
case 0x50138d:c.instructions+=3;goto B50138d;
case 0x501390:c.instructions+=2;goto B501390;
case 0x501393:c.instructions+=1;goto B501393;
case 0x501395:goto L501395;
case 0x501398:c.instructions+=1;goto B501398;
case 0x50139a:goto L50139a;
case 0x50139d:c.instructions+=8;goto B50139d;
case 0x50139f:c.instructions+=7;goto B50139f;
case 0x5013a2:c.instructions+=6;goto B5013a2;
case 0x5013a8:c.instructions+=5;goto B5013a8;
case 0x5013ae:c.instructions+=4;goto B5013ae;
case 0x5013b3:c.instructions+=3;goto B5013b3;
case 0x5013b5:c.instructions+=2;goto B5013b5;
case 0x5013b7:c.instructions+=1;goto B5013b7;
case 0x5013b9:goto L5013b9;
case 0x5013be:goto L5013be;
case 0x5013c4:c.instructions+=2;goto B5013c4;
case 0x5013c6:c.instructions+=1;goto B5013c6;
case 0x5013c8:goto L5013c8;
case 0x5013c9:goto L5013c9;
case 0x5013cf:c.instructions+=2;goto B5013cf;
case 0x5013d1:c.instructions+=1;goto B5013d1;
case 0x5013d3:goto L5013d3;
case 0x5013d4:goto L5013d4;
case 0x5013da:c.instructions+=2;goto B5013da;
case 0x5013dc:c.instructions+=1;goto B5013dc;
case 0x5013de:goto L5013de;
case 0x5013df:goto L5013df;
case 0x5013e1:c.instructions+=7;goto B5013e1;
case 0x5013e3:c.instructions+=6;goto B5013e3;
case 0x5013e6:c.instructions+=5;goto B5013e6;
case 0x5013e7:c.instructions+=4;goto B5013e7;
case 0x5013e9:c.instructions+=3;goto B5013e9;
case 0x5013ea:c.instructions+=2;goto B5013ea;
case 0x5013eb:c.instructions+=1;goto B5013eb;
case 0x5013ee:goto L5013ee;
case 0x5013ef:c.instructions+=4;goto B5013ef;
case 0x5013f1:c.instructions+=3;goto B5013f1;
case 0x5013f2:c.instructions+=2;goto B5013f2;
case 0x5013f3:c.instructions+=1;goto B5013f3;
case 0x5013f6:goto L5013f6;
case 0x5013f9:c.instructions+=1;goto B5013f9;
case 0x5013fb:goto L5013fb;
case 0x5013fe:c.instructions+=5;goto B5013fe;
case 0x501400:c.instructions+=4;goto B501400;
case 0x501403:c.instructions+=3;goto B501403;
case 0x501409:c.instructions+=2;goto B501409;
case 0x50140f:c.instructions+=1;goto B50140f;
case 0x501414:goto L501414;
case 0x50141a:c.instructions+=8;goto B50141a;
case 0x50141c:c.instructions+=7;goto B50141c;
case 0x50141e:c.instructions+=6;goto B50141e;
case 0x501421:c.instructions+=5;goto B501421;
case 0x501422:c.instructions+=4;goto B501422;
case 0x501424:c.instructions+=3;goto B501424;
case 0x501425:c.instructions+=2;goto B501425;
case 0x501426:c.instructions+=1;goto B501426;
case 0x501429:goto L501429;
case 0x50142c:c.instructions+=1;goto B50142c;
case 0x50142e:goto L50142e;
case 0x501431:c.instructions+=5;goto B501431;
case 0x501433:c.instructions+=4;goto B501433;
case 0x501436:c.instructions+=3;goto B501436;
case 0x50143c:c.instructions+=2;goto B50143c;
case 0x501442:c.instructions+=1;goto B501442;
case 0x501447:goto L501447;
case 0x50144d:c.instructions+=8;goto B50144d;
case 0x50144f:c.instructions+=7;goto B50144f;
case 0x501451:c.instructions+=6;goto B501451;
case 0x501454:c.instructions+=5;goto B501454;
case 0x501455:c.instructions+=4;goto B501455;
case 0x501457:c.instructions+=3;goto B501457;
case 0x501458:c.instructions+=2;goto B501458;
case 0x501459:c.instructions+=1;goto B501459;
case 0x50145c:goto L50145c;
case 0x50145d:c.instructions+=4;goto B50145d;
case 0x50145f:c.instructions+=3;goto B50145f;
case 0x501460:c.instructions+=2;goto B501460;
case 0x501461:c.instructions+=1;goto B501461;
case 0x501470:goto L501470;
case 0x501472:c.instructions+=2;goto B501472;
case 0x501475:c.instructions+=1;goto B501475;
case 0x501480:goto L501480;
case 0x501484:c.instructions+=6;goto B501484;
case 0x501485:c.instructions+=5;goto B501485;
case 0x501486:c.instructions+=4;goto B501486;
case 0x501488:c.instructions+=3;goto B501488;
case 0x50148e:c.instructions+=2;goto B50148e;
case 0x501490:c.instructions+=1;goto B501490;
case 0x501495:goto L501495;
case 0x50149c:c.instructions+=2;goto B50149c;
case 0x50149d:c.instructions+=1;goto B50149d;
case 0x5014a0:goto L5014a0;
case 0x5014a4:c.instructions+=2;goto B5014a4;
case 0x5014a6:c.instructions+=1;goto B5014a6;
case 0x5014a8:goto L5014a8;
case 0x5014ae:c.instructions+=1;goto B5014ae;
case 0x5014b0:goto L5014b0;
case 0x5014b3:c.instructions+=2;goto B5014b3;
case 0x5014b6:c.instructions+=1;goto B5014b6;
case 0x5014b9:goto L5014b9;
case 0x5014bb:c.instructions+=1;goto B5014bb;
case 0x5014c0:goto L5014c0;
case 0x5014c4:c.instructions+=5;goto B5014c4;
case 0x5014c7:c.instructions+=4;goto B5014c7;
case 0x5014c8:c.instructions+=3;goto B5014c8;
case 0x5014ca:c.instructions+=2;goto B5014ca;
case 0x5014cc:c.instructions+=1;goto B5014cc;
case 0x5014ce:goto L5014ce;
case 0x5014d1:c.instructions+=1;goto B5014d1;
case 0x5014d3:goto L5014d3;
case 0x5014d5:c.instructions+=1;goto B5014d5;
case 0x5014d7:goto L5014d7;
case 0x5014d9:goto L5014d9;
case 0x5014db:c.instructions+=2;goto B5014db;
case 0x5014de:c.instructions+=1;goto B5014de;
case 0x5014e0:goto L5014e0;
case 0x5014e6:goto L5014e6;
case 0x5014e9:c.instructions+=2;goto B5014e9;
case 0x5014ea:c.instructions+=1;goto B5014ea;
case 0x5014f0:goto L5014f0;
case 0x5014f1:c.instructions+=11;goto B5014f1;
case 0x5014f2:c.instructions+=10;goto B5014f2;
case 0x5014f3:c.instructions+=9;goto B5014f3;
case 0x5014f4:c.instructions+=8;goto B5014f4;
case 0x5014f8:c.instructions+=7;goto B5014f8;
case 0x5014fa:c.instructions+=6;goto B5014fa;
case 0x5014fb:c.instructions+=5;goto B5014fb;
case 0x5014ff:c.instructions+=4;goto B5014ff;
case 0x501503:c.instructions+=3;goto B501503;
case 0x501506:c.instructions+=2;goto B501506;
case 0x50150b:c.instructions+=1;goto B50150b;
case 0x501510:goto L501510;
case 0x501513:c.instructions+=3;goto B501513;
case 0x501515:c.instructions+=2;goto B501515;
case 0x501517:c.instructions+=1;goto B501517;
case 0x501519:goto L501519;
case 0x50151c:c.instructions+=3;goto B50151c;
case 0x501522:c.instructions+=2;goto B501522;
case 0x501523:c.instructions+=1;goto B501523;
case 0x501528:goto L501528;
case 0x50152c:c.instructions+=1;goto B50152c;
case 0x50152f:goto L50152f;
case 0x501531:c.instructions+=51;goto B501531;
case 0x501534:c.instructions+=50;goto B501534;
case 0x501537:c.instructions+=49;goto B501537;
case 0x50153a:c.instructions+=48;goto B50153a;
case 0x50153d:c.instructions+=47;goto B50153d;
case 0x501540:c.instructions+=46;goto B501540;
case 0x501542:c.instructions+=45;goto B501542;
case 0x501544:c.instructions+=44;goto B501544;
case 0x501547:c.instructions+=43;goto B501547;
case 0x501549:c.instructions+=42;goto B501549;
case 0x50154a:c.instructions+=41;goto B50154a;
case 0x50154b:c.instructions+=40;goto B50154b;
case 0x50154d:c.instructions+=39;goto B50154d;
case 0x501550:c.instructions+=38;goto B501550;
case 0x501553:c.instructions+=37;goto B501553;
case 0x501555:c.instructions+=36;goto B501555;
case 0x501556:c.instructions+=35;goto B501556;
case 0x501557:c.instructions+=34;goto B501557;
case 0x501559:c.instructions+=33;goto B501559;
case 0x50155c:c.instructions+=32;goto B50155c;
case 0x50155f:c.instructions+=31;goto B50155f;
case 0x501561:c.instructions+=30;goto B501561;
case 0x501564:c.instructions+=29;goto B501564;
case 0x501565:c.instructions+=28;goto B501565;
case 0x501566:c.instructions+=27;goto B501566;
case 0x501568:c.instructions+=26;goto B501568;
case 0x50156b:c.instructions+=25;goto B50156b;
case 0x50156e:c.instructions+=24;goto B50156e;
case 0x501570:c.instructions+=23;goto B501570;
case 0x501573:c.instructions+=22;goto B501573;
case 0x501574:c.instructions+=21;goto B501574;
case 0x501577:c.instructions+=20;goto B501577;
case 0x50157a:c.instructions+=19;goto B50157a;
case 0x50157c:c.instructions+=18;goto B50157c;
case 0x50157f:c.instructions+=17;goto B50157f;
case 0x501582:c.instructions+=16;goto B501582;
case 0x501584:c.instructions+=15;goto B501584;
case 0x501587:c.instructions+=14;goto B501587;
case 0x50158a:c.instructions+=13;goto B50158a;
case 0x50158d:c.instructions+=12;goto B50158d;
case 0x50158f:c.instructions+=11;goto B50158f;
case 0x501592:c.instructions+=10;goto B501592;
case 0x501595:c.instructions+=9;goto B501595;
case 0x501598:c.instructions+=8;goto B501598;
case 0x50159a:c.instructions+=7;goto B50159a;
case 0x50159c:c.instructions+=6;goto B50159c;
case 0x50159f:c.instructions+=5;goto B50159f;
case 0x5015a2:c.instructions+=4;goto B5015a2;
case 0x5015a5:c.instructions+=3;goto B5015a5;
case 0x5015a6:c.instructions+=2;goto B5015a6;
case 0x5015a8:c.instructions+=1;goto B5015a8;
case 0x5015ae:goto L5015ae;
case 0x5015b4:c.instructions+=22;goto B5015b4;
case 0x5015b6:c.instructions+=21;goto B5015b6;
case 0x5015bc:c.instructions+=20;goto B5015bc;
case 0x5015bf:c.instructions+=19;goto B5015bf;
case 0x5015c5:c.instructions+=18;goto B5015c5;
case 0x5015cb:c.instructions+=17;goto B5015cb;
case 0x5015ce:c.instructions+=16;goto B5015ce;
case 0x5015d0:c.instructions+=15;goto B5015d0;
case 0x5015d3:c.instructions+=14;goto B5015d3;
case 0x5015d6:c.instructions+=13;goto B5015d6;
case 0x5015d8:c.instructions+=12;goto B5015d8;
case 0x5015db:c.instructions+=11;goto B5015db;
case 0x5015e1:c.instructions+=10;goto B5015e1;
case 0x5015e3:c.instructions+=9;goto B5015e3;
case 0x5015e5:c.instructions+=8;goto B5015e5;
case 0x5015e7:c.instructions+=7;goto B5015e7;
case 0x5015e8:c.instructions+=6;goto B5015e8;
case 0x5015eb:c.instructions+=5;goto B5015eb;
case 0x5015ec:c.instructions+=4;goto B5015ec;
case 0x5015ed:c.instructions+=3;goto B5015ed;
case 0x5015ee:c.instructions+=2;goto B5015ee;
case 0x5015ef:c.instructions+=1;goto B5015ef;
case 0x501600:goto L501600;
case 0x501606:c.instructions+=3;goto B501606;
case 0x50160b:c.instructions+=2;goto B50160b;
case 0x50160d:c.instructions+=1;goto B50160d;
case 0x50160f:goto L50160f;
case 0x501612:c.instructions+=8;goto B501612;
case 0x501618:c.instructions+=7;goto B501618;
case 0x50161d:c.instructions+=6;goto B50161d;
case 0x501624:c.instructions+=5;goto B501624;
case 0x501627:c.instructions+=4;goto B501627;
case 0x501628:c.instructions+=3;goto B501628;
case 0x50162e:c.instructions+=2;goto B50162e;
case 0x501630:c.instructions+=1;goto B501630;
case 0x501635:goto L501635;
case 0x501640:goto L501640;
case 0x50164a:c.instructions+=4;goto B50164a;
case 0x501650:c.instructions+=3;goto B501650;
case 0x501652:c.instructions+=2;goto B501652;
case 0x501654:c.instructions+=1;goto B501654;
case 0x501656:goto L501656;
case 0x501659:c.instructions+=2;goto B501659;
case 0x50165c:c.instructions+=1;goto B50165c;
case 0x501660:goto L501660;
case 0x501667:c.instructions+=1;goto B501667;
case 0x501669:goto L501669;
case 0x50166a:c.instructions+=2;goto B50166a;
case 0x50166c:c.instructions+=1;goto B50166c;
case 0x50166e:goto L50166e;
case 0x50166f:goto L50166f;
case 0x501676:c.instructions+=2;goto B501676;
case 0x501678:c.instructions+=1;goto B501678;
case 0x50167a:goto L50167a;
case 0x50167e:goto L50167e;
case 0x501680:goto L501680;
case 0x501687:c.instructions+=2;goto B501687;
case 0x50168a:c.instructions+=1;goto B50168a;
case 0x501690:goto L501690;
case 0x501693:c.instructions+=3;goto B501693;
case 0x501695:c.instructions+=2;goto B501695;
case 0x501698:c.instructions+=1;goto B501698;
case 0x5016a0:goto L5016a0;
case 0x5016a3:c.instructions+=2;goto B5016a3;
case 0x5016a5:c.instructions+=1;goto B5016a5;
case 0x5016a7:goto L5016a7;
case 0x5016ae:c.instructions+=1;goto B5016ae;
case 0x5016b0:goto L5016b0;
case 0x5016b3:c.instructions+=6;goto B5016b3;
case 0x5016b9:c.instructions+=5;goto B5016b9;
case 0x5016bc:c.instructions+=4;goto B5016bc;
case 0x5016c2:c.instructions+=3;goto B5016c2;
case 0x5016c4:c.instructions+=2;goto B5016c4;
case 0x5016c7:c.instructions+=1;goto B5016c7;
case 0x5016c9:goto L5016c9;
case 0x5016ce:goto L5016ce;
case 0x5016d0:goto L5016d0;
case 0x5016d5:c.instructions+=3;goto B5016d5;
case 0x5016d8:c.instructions+=2;goto B5016d8;
case 0x5016da:c.instructions+=1;goto B5016da;
case 0x5016dc:goto L5016dc;
case 0x5016dd:c.instructions+=10;goto B5016dd;
case 0x5016e3:c.instructions+=9;goto B5016e3;
case 0x5016e4:c.instructions+=8;goto B5016e4;
case 0x5016e5:c.instructions+=7;goto B5016e5;
case 0x5016eb:c.instructions+=6;goto B5016eb;
case 0x5016ee:c.instructions+=5;goto B5016ee;
case 0x5016ef:c.instructions+=4;goto B5016ef;
case 0x5016f5:c.instructions+=3;goto B5016f5;
case 0x5016f9:c.instructions+=2;goto B5016f9;
case 0x5016fd:c.instructions+=1;goto B5016fd;
case 0x501700:goto L501700;
case 0x501705:goto L501705;
case 0x501709:c.instructions+=1;goto B501709;
case 0x50170b:goto L50170b;
case 0x50170d:c.instructions+=2;goto B50170d;
case 0x50170f:c.instructions+=1;goto B50170f;
case 0x501711:goto L501711;
case 0x501713:c.instructions+=1;goto B501713;
case 0x501716:goto L501716;
case 0x501718:c.instructions+=1;goto B501718;
case 0x50171a:goto L50171a;
case 0x50171b:c.instructions+=3;goto B50171b;
case 0x501720:c.instructions+=2;goto B501720;
case 0x501722:c.instructions+=1;goto B501722;
case 0x501724:goto L501724;
case 0x501727:c.instructions+=2;goto B501727;
case 0x501728:c.instructions+=1;goto B501728;
case 0x50172a:goto L50172a;
case 0x50172e:c.instructions+=6;goto B50172e;
case 0x501732:c.instructions+=5;goto B501732;
case 0x501735:c.instructions+=4;goto B501735;
case 0x501736:c.instructions+=3;goto B501736;
case 0x50173a:c.instructions+=2;goto B50173a;
case 0x50173e:c.instructions+=1;goto B50173e;
case 0x501740:goto L501740;
case 0x501741:c.instructions+=3;goto B501741;
case 0x501742:c.instructions+=2;goto B501742;
case 0x501743:c.instructions+=1;goto B501743;
case 0x501744:goto L501744;
case 0x501747:c.instructions+=1;goto B501747;
case 0x501750:goto L501750;
case 0x501754:c.instructions+=2;goto B501754;
case 0x501757:c.instructions+=1;goto B501757;
case 0x501759:goto L501759;
case 0x501760:goto L501760;
case 0x501763:c.instructions+=1;goto B501763;
case 0x501766:goto L501766;
case 0x501769:c.instructions+=1;goto B501769;
case 0x50176c:goto L50176c;
case 0x50176f:c.instructions+=1;goto B50176f;
case 0x501772:goto L501772;
case 0x501774:c.instructions+=1;goto B501774;
case 0x501790:goto L501790;
case 0x501792:c.instructions+=1;goto B501792;
case 0x501794:goto L501794;
case 0x501797:c.instructions+=1;goto B501797;
case 0x501799:goto L501799;
case 0x50179f:c.instructions+=4;goto B50179f;
case 0x5017a2:c.instructions+=3;goto B5017a2;
case 0x5017a6:c.instructions+=2;goto B5017a6;
case 0x5017a8:c.instructions+=1;goto B5017a8;
case 0x5017aa:goto L5017aa;
case 0x5017ad:c.instructions+=1;goto B5017ad;
case 0x5017af:goto L5017af;
case 0x5017b6:goto L5017b6;
case 0x5017b9:c.instructions+=1;goto B5017b9;
case 0x5017bb:goto L5017bb;
case 0x5017be:c.instructions+=1;goto B5017be;
case 0x5017c0:goto L5017c0;
case 0x5017c3:goto L5017c3;
case 0x5017c5:c.instructions+=1;goto B5017c5;
case 0x5017c7:goto L5017c7;
case 0x5017cb:c.instructions+=1;goto B5017cb;
case 0x5017cd:goto L5017cd;
case 0x5017cf:c.instructions+=1;goto B5017cf;
case 0x5017d0:goto L5017d0;
case 0x5017d2:c.instructions+=1;goto B5017d2;
case 0x5017f0:goto L5017f0;
case 0x5017f6:c.instructions+=3;goto B5017f6;
case 0x5017f8:c.instructions+=2;goto B5017f8;
case 0x5017fa:c.instructions+=1;goto B5017fa;
case 0x5017fc:goto L5017fc;
case 0x501802:c.instructions+=3;goto B501802;
case 0x501803:c.instructions+=2;goto B501803;
case 0x501806:c.instructions+=1;goto B501806;
case 0x501808:goto L501808;
case 0x50180b:c.instructions+=2;goto B50180b;
case 0x50180e:c.instructions+=1;goto B50180e;
case 0x501810:goto L501810;
case 0x501813:c.instructions+=1;goto B501813;
case 0x501815:goto L501815;
case 0x501818:c.instructions+=1;goto B501818;
case 0x50181a:goto L50181a;
case 0x50181d:c.instructions+=1;goto B50181d;
case 0x50181f:goto L50181f;
case 0x501820:goto L501820;
case 0x501822:c.instructions+=2;goto B501822;
case 0x501825:c.instructions+=1;goto B501825;
case 0x501827:goto L501827;
case 0x50182a:c.instructions+=1;goto B50182a;
case 0x50182c:goto L50182c;
case 0x50182f:c.instructions+=1;goto B50182f;
case 0x501831:goto L501831;
case 0x501834:c.instructions+=1;goto B501834;
case 0x501836:goto L501836;
case 0x501837:goto L501837;
case 0x50183a:c.instructions+=2;goto B50183a;
case 0x50183d:c.instructions+=1;goto B50183d;
case 0x50183f:goto L50183f;
case 0x501842:c.instructions+=1;goto B501842;
case 0x501844:goto L501844;
case 0x501847:c.instructions+=1;goto B501847;
case 0x501849:goto L501849;
case 0x50184c:c.instructions+=1;goto B50184c;
case 0x50184e:goto L50184e;
case 0x50184f:goto L50184f;
case 0x501852:c.instructions+=2;goto B501852;
case 0x501853:c.instructions+=1;goto B501853;
case 0x501855:goto L501855;
case 0x501856:goto L501856;
case 0x501860:goto L501860;
case 0x501864:c.instructions+=2;goto B501864;
case 0x501866:c.instructions+=1;goto B501866;
case 0x501868:goto L501868;
case 0x50186c:c.instructions+=2;goto B50186c;
case 0x50186e:c.instructions+=1;goto B50186e;
case 0x501870:goto L501870;
case 0x501873:c.instructions+=1;goto B501873;
case 0x501875:goto L501875;
case 0x501876:c.instructions+=6;goto B501876;
case 0x50187c:c.instructions+=5;goto B50187c;
case 0x50187f:c.instructions+=4;goto B50187f;
case 0x501883:c.instructions+=3;goto B501883;
case 0x501885:c.instructions+=2;goto B501885;
case 0x501886:c.instructions+=1;goto B501886;
case 0x501888:goto L501888;
case 0x50188b:c.instructions+=1;goto B50188b;
case 0x50188d:goto L50188d;
case 0x501890:c.instructions+=2;goto B501890;
case 0x501893:c.instructions+=1;goto B501893;
case 0x501895:goto L501895;
case 0x50189c:c.instructions+=1;goto B50189c;
case 0x5018a3:goto L5018a3;
case 0x5018a8:c.instructions+=1;goto B5018a8;
case 0x5018a9:goto L5018a9;
case 0x5018ae:c.instructions+=1;goto B5018ae;
case 0x5018af:goto L5018af;
case 0x5018b4:c.instructions+=1;goto B5018b4;
case 0x5018b5:goto L5018b5;
case 0x5018b6:c.instructions+=1;goto B5018b6;
case 0x5018bb:goto L5018bb;
case 0x5018be:c.instructions+=1;goto B5018be;
case 0x5018bf:goto L5018bf;
case 0x5018c1:c.instructions+=1;goto B5018c1;
case 0x501920:goto L501920;
case 0x501922:c.instructions+=3;goto B501922;
case 0x501923:c.instructions+=2;goto B501923;
case 0x501928:c.instructions+=1;goto B501928;
case 0x50192d:goto L50192d;
case 0x50192f:goto L50192f;
case 0x501931:c.instructions+=177;goto B501931;
case 0x501936:c.instructions+=176;goto B501936;
case 0x50193b:c.instructions+=175;goto B50193b;
case 0x501940:c.instructions+=174;goto B501940;
case 0x501945:c.instructions+=173;goto B501945;
case 0x50194a:c.instructions+=172;goto B50194a;
case 0x50194f:c.instructions+=171;goto B50194f;
case 0x501954:c.instructions+=170;goto B501954;
case 0x501959:c.instructions+=169;goto B501959;
case 0x50195e:c.instructions+=168;goto B50195e;
case 0x501963:c.instructions+=167;goto B501963;
case 0x501968:c.instructions+=166;goto B501968;
case 0x50196d:c.instructions+=165;goto B50196d;
case 0x501972:c.instructions+=164;goto B501972;
case 0x501977:c.instructions+=163;goto B501977;
case 0x50197c:c.instructions+=162;goto B50197c;
case 0x501981:c.instructions+=161;goto B501981;
case 0x501986:c.instructions+=160;goto B501986;
case 0x50198b:c.instructions+=159;goto B50198b;
case 0x501990:c.instructions+=158;goto B501990;
case 0x501996:c.instructions+=157;goto B501996;
case 0x5019a0:c.instructions+=156;goto B5019a0;
case 0x5019aa:c.instructions+=155;goto B5019aa;
case 0x5019b0:c.instructions+=154;goto B5019b0;
case 0x5019ba:c.instructions+=153;goto B5019ba;
case 0x5019c4:c.instructions+=152;goto B5019c4;
case 0x5019ce:c.instructions+=151;goto B5019ce;
case 0x5019d4:c.instructions+=150;goto B5019d4;
case 0x5019de:c.instructions+=149;goto B5019de;
case 0x5019e8:c.instructions+=148;goto B5019e8;
case 0x5019ee:c.instructions+=147;goto B5019ee;
case 0x5019f8:c.instructions+=146;goto B5019f8;
case 0x501a02:c.instructions+=145;goto B501a02;
case 0x501a0c:c.instructions+=144;goto B501a0c;
case 0x501a12:c.instructions+=143;goto B501a12;
case 0x501a18:c.instructions+=142;goto B501a18;
case 0x501a1e:c.instructions+=141;goto B501a1e;
case 0x501a24:c.instructions+=140;goto B501a24;
case 0x501a2a:c.instructions+=139;goto B501a2a;
case 0x501a30:c.instructions+=138;goto B501a30;
case 0x501a36:c.instructions+=137;goto B501a36;
case 0x501a3c:c.instructions+=136;goto B501a3c;
case 0x501a42:c.instructions+=135;goto B501a42;
case 0x501a48:c.instructions+=134;goto B501a48;
case 0x501a4e:c.instructions+=133;goto B501a4e;
case 0x501a54:c.instructions+=132;goto B501a54;
case 0x501a5a:c.instructions+=131;goto B501a5a;
case 0x501a60:c.instructions+=130;goto B501a60;
case 0x501a66:c.instructions+=129;goto B501a66;
case 0x501a70:c.instructions+=128;goto B501a70;
case 0x501a76:c.instructions+=127;goto B501a76;
case 0x501a7c:c.instructions+=126;goto B501a7c;
case 0x501a82:c.instructions+=125;goto B501a82;
case 0x501a88:c.instructions+=124;goto B501a88;
case 0x501a8e:c.instructions+=123;goto B501a8e;
case 0x501a93:c.instructions+=122;goto B501a93;
case 0x501a98:c.instructions+=121;goto B501a98;
case 0x501a9d:c.instructions+=120;goto B501a9d;
case 0x501aa2:c.instructions+=119;goto B501aa2;
case 0x501aa7:c.instructions+=118;goto B501aa7;
case 0x501aac:c.instructions+=117;goto B501aac;
case 0x501ab1:c.instructions+=116;goto B501ab1;
case 0x501ab7:c.instructions+=115;goto B501ab7;
case 0x501abd:c.instructions+=114;goto B501abd;
case 0x501ac3:c.instructions+=113;goto B501ac3;
case 0x501ac9:c.instructions+=112;goto B501ac9;
case 0x501acf:c.instructions+=111;goto B501acf;
case 0x501ad5:c.instructions+=110;goto B501ad5;
case 0x501adb:c.instructions+=109;goto B501adb;
case 0x501ae1:c.instructions+=108;goto B501ae1;
case 0x501ae7:c.instructions+=107;goto B501ae7;
case 0x501af1:c.instructions+=106;goto B501af1;
case 0x501afb:c.instructions+=105;goto B501afb;
case 0x501b05:c.instructions+=104;goto B501b05;
case 0x501b0f:c.instructions+=103;goto B501b0f;
case 0x501b19:c.instructions+=102;goto B501b19;
case 0x501b23:c.instructions+=101;goto B501b23;
case 0x501b2d:c.instructions+=100;goto B501b2d;
case 0x501b37:c.instructions+=99;goto B501b37;
case 0x501b41:c.instructions+=98;goto B501b41;
case 0x501b47:c.instructions+=97;goto B501b47;
case 0x501b4d:c.instructions+=96;goto B501b4d;
case 0x501b53:c.instructions+=95;goto B501b53;
case 0x501b59:c.instructions+=94;goto B501b59;
case 0x501b5f:c.instructions+=93;goto B501b5f;
case 0x501b65:c.instructions+=92;goto B501b65;
case 0x501b6b:c.instructions+=91;goto B501b6b;
case 0x501b71:c.instructions+=90;goto B501b71;
case 0x501b77:c.instructions+=89;goto B501b77;
case 0x501b7d:c.instructions+=88;goto B501b7d;
case 0x501b83:c.instructions+=87;goto B501b83;
case 0x501b89:c.instructions+=86;goto B501b89;
case 0x501b8f:c.instructions+=85;goto B501b8f;
case 0x501b95:c.instructions+=84;goto B501b95;
case 0x501b9b:c.instructions+=83;goto B501b9b;
case 0x501ba1:c.instructions+=82;goto B501ba1;
case 0x501bab:c.instructions+=81;goto B501bab;
case 0x501bb1:c.instructions+=80;goto B501bb1;
case 0x501bb7:c.instructions+=79;goto B501bb7;
case 0x501bc1:c.instructions+=78;goto B501bc1;
case 0x501bc6:c.instructions+=77;goto B501bc6;
case 0x501bcb:c.instructions+=76;goto B501bcb;
case 0x501bd0:c.instructions+=75;goto B501bd0;
case 0x501bd5:c.instructions+=74;goto B501bd5;
case 0x501bda:c.instructions+=73;goto B501bda;
case 0x501bdf:c.instructions+=72;goto B501bdf;
case 0x501be4:c.instructions+=71;goto B501be4;
case 0x501be9:c.instructions+=70;goto B501be9;
case 0x501bee:c.instructions+=69;goto B501bee;
case 0x501bf3:c.instructions+=68;goto B501bf3;
case 0x501bf8:c.instructions+=67;goto B501bf8;
case 0x501bfd:c.instructions+=66;goto B501bfd;
case 0x501c02:c.instructions+=65;goto B501c02;
case 0x501c07:c.instructions+=64;goto B501c07;
case 0x501c0c:c.instructions+=63;goto B501c0c;
case 0x501c11:c.instructions+=62;goto B501c11;
case 0x501c16:c.instructions+=61;goto B501c16;
case 0x501c1b:c.instructions+=60;goto B501c1b;
case 0x501c20:c.instructions+=59;goto B501c20;
case 0x501c25:c.instructions+=58;goto B501c25;
case 0x501c2a:c.instructions+=57;goto B501c2a;
case 0x501c2f:c.instructions+=56;goto B501c2f;
case 0x501c34:c.instructions+=55;goto B501c34;
case 0x501c39:c.instructions+=54;goto B501c39;
case 0x501c3e:c.instructions+=53;goto B501c3e;
case 0x501c43:c.instructions+=52;goto B501c43;
case 0x501c48:c.instructions+=51;goto B501c48;
case 0x501c4d:c.instructions+=50;goto B501c4d;
case 0x501c52:c.instructions+=49;goto B501c52;
case 0x501c57:c.instructions+=48;goto B501c57;
case 0x501c5c:c.instructions+=47;goto B501c5c;
case 0x501c61:c.instructions+=46;goto B501c61;
case 0x501c66:c.instructions+=45;goto B501c66;
case 0x501c6b:c.instructions+=44;goto B501c6b;
case 0x501c70:c.instructions+=43;goto B501c70;
case 0x501c75:c.instructions+=42;goto B501c75;
case 0x501c7a:c.instructions+=41;goto B501c7a;
case 0x501c7f:c.instructions+=40;goto B501c7f;
case 0x501c84:c.instructions+=39;goto B501c84;
case 0x501c89:c.instructions+=38;goto B501c89;
case 0x501c8e:c.instructions+=37;goto B501c8e;
case 0x501c93:c.instructions+=36;goto B501c93;
case 0x501c98:c.instructions+=35;goto B501c98;
case 0x501c9d:c.instructions+=34;goto B501c9d;
case 0x501ca2:c.instructions+=33;goto B501ca2;
case 0x501ca7:c.instructions+=32;goto B501ca7;
case 0x501cac:c.instructions+=31;goto B501cac;
case 0x501cb1:c.instructions+=30;goto B501cb1;
case 0x501cb6:c.instructions+=29;goto B501cb6;
case 0x501cbb:c.instructions+=28;goto B501cbb;
case 0x501cc0:c.instructions+=27;goto B501cc0;
case 0x501cc5:c.instructions+=26;goto B501cc5;
case 0x501cca:c.instructions+=25;goto B501cca;
case 0x501ccf:c.instructions+=24;goto B501ccf;
case 0x501cd4:c.instructions+=23;goto B501cd4;
case 0x501cd9:c.instructions+=22;goto B501cd9;
case 0x501ce3:c.instructions+=21;goto B501ce3;
case 0x501ce8:c.instructions+=20;goto B501ce8;
case 0x501ced:c.instructions+=19;goto B501ced;
case 0x501cf2:c.instructions+=18;goto B501cf2;
case 0x501cf7:c.instructions+=17;goto B501cf7;
case 0x501d01:c.instructions+=16;goto B501d01;
case 0x501d0b:c.instructions+=15;goto B501d0b;
case 0x501d15:c.instructions+=14;goto B501d15;
case 0x501d1f:c.instructions+=13;goto B501d1f;
case 0x501d29:c.instructions+=12;goto B501d29;
case 0x501d33:c.instructions+=11;goto B501d33;
case 0x501d3d:c.instructions+=10;goto B501d3d;
case 0x501d42:c.instructions+=9;goto B501d42;
case 0x501d47:c.instructions+=8;goto B501d47;
case 0x501d4c:c.instructions+=7;goto B501d4c;
case 0x501d51:c.instructions+=6;goto B501d51;
case 0x501d5b:c.instructions+=5;goto B501d5b;
case 0x501d61:c.instructions+=4;goto B501d61;
case 0x501d67:c.instructions+=3;goto B501d67;
case 0x501d6d:c.instructions+=2;goto B501d6d;
case 0x501d6e:c.instructions+=1;goto B501d6e;
case 0x501d70:goto L501d70;
case 0x501d71:c.instructions+=4;goto B501d71;
case 0x501d75:c.instructions+=3;goto B501d75;
case 0x501d78:c.instructions+=2;goto B501d78;
case 0x501d79:c.instructions+=1;goto B501d79;
case 0x501d7f:goto L501d7f;
case 0x501d85:goto L501d85;
case 0x501d88:c.instructions+=1;goto B501d88;
case 0x501d8e:goto L501d8e;
case 0x501d92:c.instructions+=4;goto B501d92;
case 0x501d96:c.instructions+=3;goto B501d96;
case 0x501d99:c.instructions+=2;goto B501d99;
case 0x501d9c:c.instructions+=1;goto B501d9c;
case 0x501da2:goto L501da2;
case 0x501da9:goto L501da9;
case 0x501daa:c.instructions+=3;goto B501daa;
case 0x501daf:c.instructions+=2;goto B501daf;
case 0x501db0:c.instructions+=1;goto B501db0;
case 0x501db1:goto L501db1;
case 0x501db2:c.instructions+=3;goto B501db2;
case 0x501db7:c.instructions+=2;goto B501db7;
case 0x501db8:c.instructions+=1;goto B501db8;
case 0x501db9:goto L501db9;
case 0x501dba:c.instructions+=3;goto B501dba;
case 0x501dbf:c.instructions+=2;goto B501dbf;
case 0x501dc0:c.instructions+=1;goto B501dc0;
case 0x501dc1:goto L501dc1;
case 0x501dc2:c.instructions+=3;goto B501dc2;
case 0x501dc7:c.instructions+=2;goto B501dc7;
case 0x501dc8:c.instructions+=1;goto B501dc8;
case 0x501dc9:goto L501dc9;
case 0x501dca:c.instructions+=3;goto B501dca;
case 0x501dcf:c.instructions+=2;goto B501dcf;
case 0x501dd0:c.instructions+=1;goto B501dd0;
case 0x501dd1:goto L501dd1;
case 0x501dd2:c.instructions+=3;goto B501dd2;
case 0x501dd7:c.instructions+=2;goto B501dd7;
case 0x501dd8:c.instructions+=1;goto B501dd8;
case 0x501dd9:goto L501dd9;
case 0x501dda:c.instructions+=3;goto B501dda;
case 0x501ddf:c.instructions+=2;goto B501ddf;
case 0x501de0:c.instructions+=1;goto B501de0;
case 0x501de1:goto L501de1;
case 0x501de2:c.instructions+=3;goto B501de2;
case 0x501de7:c.instructions+=2;goto B501de7;
case 0x501de8:c.instructions+=1;goto B501de8;
case 0x501de9:goto L501de9;
case 0x501dea:c.instructions+=3;goto B501dea;
case 0x501def:c.instructions+=2;goto B501def;
case 0x501df0:c.instructions+=1;goto B501df0;
case 0x501df1:goto L501df1;
case 0x501df2:c.instructions+=3;goto B501df2;
case 0x501df7:c.instructions+=2;goto B501df7;
case 0x501df8:c.instructions+=1;goto B501df8;
case 0x501df9:goto L501df9;
case 0x501dfa:c.instructions+=3;goto B501dfa;
case 0x501dff:c.instructions+=2;goto B501dff;
case 0x501e00:c.instructions+=1;goto B501e00;
case 0x501e01:goto L501e01;
case 0x501e02:c.instructions+=3;goto B501e02;
case 0x501e07:c.instructions+=2;goto B501e07;
case 0x501e08:c.instructions+=1;goto B501e08;
case 0x501e09:goto L501e09;
case 0x501e0a:c.instructions+=3;goto B501e0a;
case 0x501e0f:c.instructions+=2;goto B501e0f;
case 0x501e10:c.instructions+=1;goto B501e10;
case 0x501e11:goto L501e11;
case 0x501e12:c.instructions+=3;goto B501e12;
case 0x501e17:c.instructions+=2;goto B501e17;
case 0x501e18:c.instructions+=1;goto B501e18;
case 0x501e19:goto L501e19;
case 0x501e1a:c.instructions+=3;goto B501e1a;
case 0x501e1f:c.instructions+=2;goto B501e1f;
case 0x501e20:c.instructions+=1;goto B501e20;
case 0x501e21:goto L501e21;
case 0x501e22:c.instructions+=3;goto B501e22;
case 0x501e27:c.instructions+=2;goto B501e27;
case 0x501e28:c.instructions+=1;goto B501e28;
case 0x501e29:goto L501e29;
case 0x501e2a:c.instructions+=3;goto B501e2a;
case 0x501e2f:c.instructions+=2;goto B501e2f;
case 0x501e30:c.instructions+=1;goto B501e30;
case 0x501e31:goto L501e31;
case 0x501e32:c.instructions+=3;goto B501e32;
case 0x501e37:c.instructions+=2;goto B501e37;
case 0x501e38:c.instructions+=1;goto B501e38;
case 0x501e39:goto L501e39;
case 0x501e3a:c.instructions+=3;goto B501e3a;
case 0x501e3f:c.instructions+=2;goto B501e3f;
case 0x501e40:c.instructions+=1;goto B501e40;
case 0x501e41:goto L501e41;
case 0x501e42:c.instructions+=3;goto B501e42;
case 0x501e47:c.instructions+=2;goto B501e47;
case 0x501e48:c.instructions+=1;goto B501e48;
case 0x501e49:goto L501e49;
case 0x501e4a:c.instructions+=3;goto B501e4a;
case 0x501e4f:c.instructions+=2;goto B501e4f;
case 0x501e50:c.instructions+=1;goto B501e50;
case 0x501e51:goto L501e51;
case 0x501e52:c.instructions+=3;goto B501e52;
case 0x501e57:c.instructions+=2;goto B501e57;
case 0x501e58:c.instructions+=1;goto B501e58;
case 0x501e59:goto L501e59;
case 0x501e5a:c.instructions+=3;goto B501e5a;
case 0x501e5f:c.instructions+=2;goto B501e5f;
case 0x501e60:c.instructions+=1;goto B501e60;
case 0x501e61:goto L501e61;
case 0x501e62:c.instructions+=3;goto B501e62;
case 0x501e67:c.instructions+=2;goto B501e67;
case 0x501e68:c.instructions+=1;goto B501e68;
case 0x501e69:goto L501e69;
case 0x501e6a:c.instructions+=3;goto B501e6a;
case 0x501e6f:c.instructions+=2;goto B501e6f;
case 0x501e70:c.instructions+=1;goto B501e70;
case 0x501e71:goto L501e71;
case 0x501e72:c.instructions+=3;goto B501e72;
case 0x501e77:c.instructions+=2;goto B501e77;
case 0x501e78:c.instructions+=1;goto B501e78;
case 0x501e79:goto L501e79;
case 0x501e7a:c.instructions+=3;goto B501e7a;
case 0x501e7f:c.instructions+=2;goto B501e7f;
case 0x501e80:c.instructions+=1;goto B501e80;
case 0x501e81:goto L501e81;
case 0x501e82:c.instructions+=3;goto B501e82;
case 0x501e87:c.instructions+=2;goto B501e87;
case 0x501e88:c.instructions+=1;goto B501e88;
case 0x501e89:goto L501e89;
case 0x501e8d:c.instructions+=4;goto B501e8d;
case 0x501e8f:c.instructions+=3;goto B501e8f;
case 0x501e94:c.instructions+=2;goto B501e94;
case 0x501e96:c.instructions+=1;goto B501e96;
case 0x501e9b:goto L501e9b;
case 0x501e9d:c.instructions+=1;goto B501e9d;
case 0x501e9f:goto L501e9f;
case 0x501ea2:c.instructions+=2;goto B501ea2;
case 0x501ea5:c.instructions+=1;goto B501ea5;
case 0x501ea7:goto L501ea7;
case 0x501eae:c.instructions+=1;goto B501eae;
case 0x501eb5:goto L501eb5;
case 0x501eb6:c.instructions+=3;goto B501eb6;
case 0x501ebb:c.instructions+=2;goto B501ebb;
case 0x501ebc:c.instructions+=1;goto B501ebc;
case 0x501ebd:goto L501ebd;
case 0x501ebe:c.instructions+=3;goto B501ebe;
case 0x501ec3:c.instructions+=2;goto B501ec3;
case 0x501ec4:c.instructions+=1;goto B501ec4;
case 0x501ec5:goto L501ec5;
case 0x501ec6:c.instructions+=3;goto B501ec6;
case 0x501ecb:c.instructions+=2;goto B501ecb;
case 0x501ecc:c.instructions+=1;goto B501ecc;
case 0x501ecd:goto L501ecd;
case 0x501ece:c.instructions+=3;goto B501ece;
case 0x501ed3:c.instructions+=2;goto B501ed3;
case 0x501ed4:c.instructions+=1;goto B501ed4;
case 0x501ed5:goto L501ed5;
case 0x501ed6:c.instructions+=3;goto B501ed6;
case 0x501ed8:c.instructions+=2;goto B501ed8;
case 0x501ed9:c.instructions+=1;goto B501ed9;
case 0x501eda:goto L501eda;
case 0x501edd:c.instructions+=1;goto B501edd;
case 0x501edf:goto L501edf;
case 0x501ee1:c.instructions+=3;goto B501ee1;
case 0x501ee6:c.instructions+=2;goto B501ee6;
case 0x501ee8:c.instructions+=1;goto B501ee8;
case 0x501eed:goto L501eed;
case 0x501ef2:c.instructions+=1;goto B501ef2;
case 0x501ef4:goto L501ef4;
case 0x501ef5:c.instructions+=3;goto B501ef5;
case 0x501efa:c.instructions+=2;goto B501efa;
case 0x501efb:c.instructions+=1;goto B501efb;
case 0x501efc:goto L501efc;
case 0x501eff:c.instructions+=1;goto B501eff;
case 0x501f01:goto L501f01;
case 0x501f04:c.instructions+=4;goto B501f04;
case 0x501f07:c.instructions+=3;goto B501f07;
case 0x501f0a:c.instructions+=2;goto B501f0a;
case 0x501f0f:c.instructions+=1;goto B501f0f;
case 0x501f15:goto L501f15;
case 0x501f1c:c.instructions+=3;goto B501f1c;
case 0x501f1d:c.instructions+=2;goto B501f1d;
case 0x501f1e:c.instructions+=1;goto B501f1e;
case 0x501f1f:goto L501f1f;
case 0x501f23:c.instructions+=4;goto B501f23;
case 0x501f25:c.instructions+=3;goto B501f25;
case 0x501f2a:c.instructions+=2;goto B501f2a;
case 0x501f2c:c.instructions+=1;goto B501f2c;
case 0x501f31:goto L501f31;
case 0x501f36:c.instructions+=2;goto B501f36;
case 0x501f38:c.instructions+=1;goto B501f38;
case 0x501f3d:goto L501f3d;
case 0x501f40:c.instructions+=2;goto B501f40;
case 0x501f42:c.instructions+=1;goto B501f42;
case 0x501f44:goto L501f44;
case 0x501f45:c.instructions+=3;goto B501f45;
case 0x501f4a:c.instructions+=2;goto B501f4a;
case 0x501f4b:c.instructions+=1;goto B501f4b;
case 0x501f4c:goto L501f4c;
case 0x501f4e:c.instructions+=3;goto B501f4e;
case 0x501f53:c.instructions+=2;goto B501f53;
case 0x501f55:c.instructions+=1;goto B501f55;
case 0x501f5a:goto L501f5a;
case 0x501f5f:c.instructions+=2;goto B501f5f;
case 0x501f61:c.instructions+=1;goto B501f61;
case 0x501f66:goto L501f66;
case 0x501f69:c.instructions+=2;goto B501f69;
case 0x501f6b:c.instructions+=1;goto B501f6b;
case 0x501f6d:goto L501f6d;
case 0x501f6e:c.instructions+=3;goto B501f6e;
case 0x501f73:c.instructions+=2;goto B501f73;
case 0x501f74:c.instructions+=1;goto B501f74;
case 0x501f75:goto L501f75;
case 0x501f77:c.instructions+=3;goto B501f77;
case 0x501f7c:c.instructions+=2;goto B501f7c;
case 0x501f7e:c.instructions+=1;goto B501f7e;
case 0x501f83:goto L501f83;
case 0x501f88:c.instructions+=2;goto B501f88;
case 0x501f8a:c.instructions+=1;goto B501f8a;
case 0x501f8f:goto L501f8f;
case 0x501f92:c.instructions+=2;goto B501f92;
case 0x501f94:c.instructions+=1;goto B501f94;
case 0x501f96:goto L501f96;
case 0x501f97:c.instructions+=3;goto B501f97;
case 0x501f9c:c.instructions+=2;goto B501f9c;
case 0x501f9d:c.instructions+=1;goto B501f9d;
case 0x501f9e:goto L501f9e;
case 0x501fa0:c.instructions+=3;goto B501fa0;
case 0x501fa5:c.instructions+=2;goto B501fa5;
case 0x501fa7:c.instructions+=1;goto B501fa7;
case 0x501fac:goto L501fac;
case 0x501fb1:c.instructions+=2;goto B501fb1;
case 0x501fb3:c.instructions+=1;goto B501fb3;
case 0x501fb8:goto L501fb8;
case 0x501fbb:c.instructions+=2;goto B501fbb;
case 0x501fbd:c.instructions+=1;goto B501fbd;
case 0x501fbf:goto L501fbf;
case 0x501fc0:c.instructions+=3;goto B501fc0;
case 0x501fc5:c.instructions+=2;goto B501fc5;
case 0x501fc6:c.instructions+=1;goto B501fc6;
case 0x501fc7:goto L501fc7;
case 0x501fc9:c.instructions+=3;goto B501fc9;
case 0x501fce:c.instructions+=2;goto B501fce;
case 0x501fd0:c.instructions+=1;goto B501fd0;
case 0x501fd5:goto L501fd5;
case 0x501fda:c.instructions+=2;goto B501fda;
case 0x501fdc:c.instructions+=1;goto B501fdc;
case 0x501fe1:goto L501fe1;
case 0x501fe4:c.instructions+=2;goto B501fe4;
case 0x501fe6:c.instructions+=1;goto B501fe6;
case 0x501fe8:goto L501fe8;
case 0x501fe9:c.instructions+=3;goto B501fe9;
case 0x501fee:c.instructions+=2;goto B501fee;
case 0x501fef:c.instructions+=1;goto B501fef;
case 0x501ff0:goto L501ff0;
case 0x501ff2:c.instructions+=3;goto B501ff2;
case 0x501ff7:c.instructions+=2;goto B501ff7;
case 0x501ff9:c.instructions+=1;goto B501ff9;
case 0x501ffe:goto L501ffe;
default:missing_instruction(c.pc);}
B501000:L501000:{c.instructions+=16;NFSU2_TR(0x501000);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B501006:{NFSU2_TR(0x501006);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B501009:{NFSU2_TR(0x501009);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x18ull))));
}
B50100c:{NFSU2_TR(0x50100c);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xdcull))));
__builtin_memmove((R+4),(U+0),4);
}
B501012:{NFSU2_TR(0x501012);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B501018:{NFSU2_TR(0x501018);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x4ull))));
}
B50101b:{NFSU2_TR(0x50101b);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xe0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B501021:{NFSU2_TR(0x501021);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+12)),r4(U+0));
}
B501023:{NFSU2_TR(0x501023);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B501029:{NFSU2_TR(0x501029);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x4ull))));
}
B50102c:{NFSU2_TR(0x50102c);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xe4ull))));
__builtin_memmove((R+8),(U+0),4);
}
B501032:{NFSU2_TR(0x501032);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+12)),r4(U+0));
}
B501034:{NFSU2_TR(0x501034);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x4ull))));
}
B501037:{NFSU2_TR(0x501037);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B501039:{NFSU2_TR(0x501039);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xe8ull))));
__builtin_memmove((R+28),(U+0),4);
}
B50103f:{NFSU2_TR(0x50103f);
}
B501040:L501040:{c.instructions+=3;NFSU2_TR(0x501040);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B501042:{NFSU2_TR(0x501042);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B501044:{NFSU2_TR(0x501044);
if(r1(R+518)){{goto L50105a;}}
}
B501046:L501046:{c.instructions+=4;NFSU2_TR(0x501046);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+0))),2);
w4(R+4,u32(r2(U+0)));
}
B501049:{NFSU2_TR(0x501049);
w4(R+4,u32(u32(r4(R+4))+u32(m4(0x838428))));
}
B50104f:{NFSU2_TR(0x50104f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B501050:{NFSU2_TR(0x501050);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x501055ull));
TAIL_STATIC(0x43db50u,43d);
}
B501055:L501055:{c.instructions+=2;NFSU2_TR(0x501055);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B501058:{NFSU2_TR(0x501058);
{goto L50105c;}
}
B50105a:L50105a:{c.instructions+=1;NFSU2_TR(0x50105a);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B50105c:L50105c:{c.instructions+=5;NFSU2_TR(0x50105c);
u8 U[16];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+0),4);
s4(u32(r4(U+8)),r4(U+12));
}
B501060:{NFSU2_TR(0x501060);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B501061:{NFSU2_TR(0x501061);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x4ull))));
}
B501064:{NFSU2_TR(0x501064);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x5ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x5ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B501067:{NFSU2_TR(0x501067);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x501040u);}goto L501040;}}
}
B501069:L501069:{c.instructions+=3;NFSU2_TR(0x501069);
__builtin_memmove((R+28),(R+12),4);
}
B50106b:{NFSU2_TR(0x50106b);
w4(R+4,u32(0x5ull));
}
B501070:{NFSU2_TR(0x501070);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+24),(U+0),4);
}
B501074:L501074:{c.instructions+=1;NFSU2_TR(0x501074);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L501076;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x501074u);}goto L501074;}
}
B501076:L501076:{c.instructions+=8;NFSU2_TR(0x501076);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B50107c:{NFSU2_TR(0x50107c);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfcull))));
__builtin_memmove((R+8),(U+0),4);
}
B501082:{NFSU2_TR(0x501082);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x14ull))));
}
B501085:{NFSU2_TR(0x501085);
u8 U[1];
__builtin_memmove((U+0),(R+0),1);
s1(u32(r4(R+12)),r1(U+0));
}
B501087:{NFSU2_TR(0x501087);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B50108d:{NFSU2_TR(0x50108d);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B50108e:{NFSU2_TR(0x50108e);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))&u32(r4(R+20))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B501090:{NFSU2_TR(0x501090);
if(r1(R+518)){{goto L5010a5;}}
}
B501092:L501092:{c.instructions+=9;NFSU2_TR(0x501092);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+20))),1);
w4(R+0,u32(s32(s8(r1(U+0)))));
}
B501096:{NFSU2_TR(0x501096);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B501097:{NFSU2_TR(0x501097);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B501098:{NFSU2_TR(0x501098);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+12)),r4(U+0));
}
B50109a:{NFSU2_TR(0x50109a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B50109b:{NFSU2_TR(0x50109b);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B50109e:{NFSU2_TR(0x50109e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B50109f:{NFSU2_TR(0x50109f);
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
B5010a2:{NFSU2_TR(0x5010a2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5010a5:L5010a5:{c.instructions+=9;NFSU2_TR(0x5010a5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5010a6:{NFSU2_TR(0x5010a6);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5010a8:{NFSU2_TR(0x5010a8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5010a9:{NFSU2_TR(0x5010a9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+12)),r4(U+0));
}
B5010ab:{NFSU2_TR(0x5010ab);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5010ac:{NFSU2_TR(0x5010ac);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B5010af:{NFSU2_TR(0x5010af);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5010b0:{NFSU2_TR(0x5010b0);
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
B5010b3:{NFSU2_TR(0x5010b3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5010c0:L5010c0:{c.instructions+=9;NFSU2_TR(0x5010c0);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5010c4:{NFSU2_TR(0x5010c4);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5010c8:{NFSU2_TR(0x5010c8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5010c9:{NFSU2_TR(0x5010c9);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5010cc:{NFSU2_TR(0x5010cc);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5010cf:{NFSU2_TR(0x5010cf);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5010d0:{NFSU2_TR(0x5010d0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5010d1:{NFSU2_TR(0x5010d1);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5010d2:{NFSU2_TR(0x5010d2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5010d7ull));
TAIL_STATIC(0x4cb150u,4cb);
}
B5010d7:L5010d7:{c.instructions+=2;NFSU2_TR(0x5010d7);
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
B5010da:{NFSU2_TR(0x5010da);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5010e0:L5010e0:{c.instructions+=4;NFSU2_TR(0x5010e0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5010e1:{NFSU2_TR(0x5010e1);
__builtin_memmove((R+24),(R+4),4);
}
B5010e3:{NFSU2_TR(0x5010e3);
w4(R+4,u32(0x81cbc0ull));
}
B5010e8:{NFSU2_TR(0x5010e8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5010edull));
TAIL_STATIC(0x4131f0u,413);
}
B5010ed:L5010ed:{c.instructions+=8;NFSU2_TR(0x5010ed);
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
B5010ef:{NFSU2_TR(0x5010ef);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x29ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5010f2:{NFSU2_TR(0x5010f2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5010f5:{NFSU2_TR(0x5010f5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5010f8:{NFSU2_TR(0x5010f8);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5010fb:{NFSU2_TR(0x5010fb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+24)),r4(U+0));
}
B5010fd:{NFSU2_TR(0x5010fd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5010fe:{NFSU2_TR(0x5010fe);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B501100:L501100:{c.instructions+=3;NFSU2_TR(0x501100);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x29ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B501103:{NFSU2_TR(0x501103);
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
B501105:{NFSU2_TR(0x501105);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L50110d;}}
}
B501107:L501107:{c.instructions+=2;NFSU2_TR(0x501107);
w4(R+0,u32(0x4ull));
}
B50110c:{NFSU2_TR(0x50110c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50110d:L50110d:{c.instructions+=3;NFSU2_TR(0x50110d);
__builtin_memmove((R+0),gp(0x81cbc4),4);
}
B501112:{NFSU2_TR(0x501112);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B501113:{NFSU2_TR(0x501113);
if(r1(R+518)){{goto L50112a;}}
}
B501115:L501115:{c.instructions+=2;NFSU2_TR(0x501115);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B501116:{NFSU2_TR(0x501116);
if(r1(R+518)){{goto L50111f;}}
}
B501118:L501118:{c.instructions+=2;NFSU2_TR(0x501118);
w4(R+0,u32(0x4ull));
}
B50111d:{NFSU2_TR(0x50111d);
{goto L50112c;}
}
B50111f:L50111f:{c.instructions+=3;NFSU2_TR(0x50111f);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x28ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B501123:{NFSU2_TR(0x501123);
w4(R+0,u32(0x3ull));
}
B501128:{NFSU2_TR(0x501128);
{goto L50112c;}
}
B50112a:L50112a:{c.instructions+=1;NFSU2_TR(0x50112a);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B50112c:L50112c:{c.instructions+=3;NFSU2_TR(0x50112c);
__builtin_memmove((R+4),gp(0x81cbc8),4);
}
B501132:{NFSU2_TR(0x501132);
u8 U[6];
w1(R+512,u8((r4(R+4))<(u32(0x3ull))));
w1(R+523,sborrow<u32>(r4(R+4),u32(0x3ull)));
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x3ull))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B501135:{NFSU2_TR(0x501135);
if(r1(R+518)){{goto L501140;}}
}
B501137:L501137:{c.instructions+=2;NFSU2_TR(0x501137);
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
B501138:{NFSU2_TR(0x501138);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L501145;}}
}
B50113a:L50113a:{c.instructions+=2;NFSU2_TR(0x50113a);
w4(R+0,u32(0x1ull));
}
B50113f:{NFSU2_TR(0x50113f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B501140:L501140:{c.instructions+=1;NFSU2_TR(0x501140);
w4(R+0,u32(0x2ull));
}
B501145:L501145:{c.instructions+=1;NFSU2_TR(0x501145);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B501150:L501150:{c.instructions+=8;NFSU2_TR(0x501150);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B501151:{NFSU2_TR(0x501151);
__builtin_memmove((R+20),(R+16),4);
}
B501153:{NFSU2_TR(0x501153);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B501156:{NFSU2_TR(0x501156);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B501159:{NFSU2_TR(0x501159);
__builtin_memmove((R+8),gp(0x86283c),4);
}
B50115f:{NFSU2_TR(0x50115f);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B501161:{NFSU2_TR(0x501161);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B501163:{NFSU2_TR(0x501163);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L501173;}}
}
B501165:L501165:{c.instructions+=2;NFSU2_TR(0x501165);
u8 U[20];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x8ull))));
w4(U+4,u32(u32(u32(0x862840ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(U+16,u32(u32(r4(U+12))-u32(r4(R+4))));
w1(R+518,u8((r4(U+16))==(u32(0x0ull))));
}
B50116c:{NFSU2_TR(0x50116c);
if(r1(R+518)){{goto L501179;}}
}
B50116e:L50116e:{c.instructions+=3;NFSU2_TR(0x50116e);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B50116f:{NFSU2_TR(0x50116f);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B501171:{NFSU2_TR(0x501171);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x501165u);}goto L501165;}}
}
B501173:L501173:{c.instructions+=3;NFSU2_TR(0x501173);
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
B501175:{NFSU2_TR(0x501175);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B501176:{NFSU2_TR(0x501176);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B501179:L501179:{c.instructions+=3;NFSU2_TR(0x501179);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x8ull))));
w4(U+4,u32(u32(u32(0x862840ull))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B501180:{NFSU2_TR(0x501180);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B501182:{NFSU2_TR(0x501182);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x501173u);}goto L501173;}}
}
B501184:L501184:{c.instructions+=2;NFSU2_TR(0x501184);
u8 U[7];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x2ull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B501188:{NFSU2_TR(0x501188);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x501173u);}goto L501173;}}
}
B50118a:L50118a:{c.instructions+=4;NFSU2_TR(0x50118a);
u8 U[10];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x6ull))));
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
B50118e:{NFSU2_TR(0x50118e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+0),(U+0),1);
}
B501191:{NFSU2_TR(0x501191);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B501192:{NFSU2_TR(0x501192);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5011a0:L5011a0:{c.instructions+=4;NFSU2_TR(0x5011a0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5011a4:{NFSU2_TR(0x5011a4);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5011a7:{NFSU2_TR(0x5011a7);
u8 U[4];
w1(R+512,u8((r1(R+0))<(u8(0x3ull))));
w1(R+523,sborrow<u8>(r1(R+0),u8(0x3ull)));
w1(U+3,u8(u32(r1(R+0))-u32(u8(0x3ull))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5011a9:{NFSU2_TR(0x5011a9);
if(r1(R+518)){{goto L5011b4;}}
}
B5011ab:L5011ab:{c.instructions+=2;NFSU2_TR(0x5011ab);
u8 U[4];
w1(R+512,u8((r1(R+0))<(u8(0x4ull))));
w1(R+523,sborrow<u8>(r1(R+0),u8(0x4ull)));
w1(U+3,u8(u32(r1(R+0))-u32(u8(0x4ull))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5011ad:{NFSU2_TR(0x5011ad);
if(r1(R+518)){{goto L5011b4;}}
}
B5011af:L5011af:{c.instructions+=2;NFSU2_TR(0x5011af);
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
B5011b1:{NFSU2_TR(0x5011b1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5011b4:L5011b4:{c.instructions+=2;NFSU2_TR(0x5011b4);
w1(R+0,u8(0x1ull));
}
B5011b6:{NFSU2_TR(0x5011b6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5011c0:L5011c0:{c.instructions+=12;NFSU2_TR(0x5011c0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5011c1:{NFSU2_TR(0x5011c1);
__builtin_memmove((R+20),(R+16),4);
}
B5011c3:{NFSU2_TR(0x5011c3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5011c6:{NFSU2_TR(0x5011c6);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x6ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5011ca:{NFSU2_TR(0x5011ca);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5011cd:{NFSU2_TR(0x5011cd);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5011d0:{NFSU2_TR(0x5011d0);
{u32 ea_=u32(r4(R+8)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5011d3:{NFSU2_TR(0x5011d3);
{u32 ea_=u32(r4(R+4)+u32(20u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B5011d6:{NFSU2_TR(0x5011d6);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5011dc:{NFSU2_TR(0x5011dc);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5011de:{NFSU2_TR(0x5011de);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5011e1:{NFSU2_TR(0x5011e1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5011ef;}}
}
B5011e3:L5011e3:{c.instructions+=4;NFSU2_TR(0x5011e3);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5011e6:{NFSU2_TR(0x5011e6);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5011ea:{NFSU2_TR(0x5011ea);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5011ed:{NFSU2_TR(0x5011ed);
{goto L5011f3;}
}
B5011ef:L5011ef:{c.instructions+=1;NFSU2_TR(0x5011ef);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5011f3:L5011f3:{c.instructions+=3;NFSU2_TR(0x5011f3);
__builtin_memmove((R+0),gp(0x861e78),1);
}
B5011f8:{NFSU2_TR(0x5011f8);
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
B5011fa:{NFSU2_TR(0x5011fa);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L501244;}}
}
B5011fc:L5011fc:{c.instructions+=4;NFSU2_TR(0x5011fc);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5011ff:{NFSU2_TR(0x5011ff);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B501200:{NFSU2_TR(0x501200);
w4(R+4,u32(0x85ad40ull));
}
B501205:{NFSU2_TR(0x501205);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x50120aull));
TAIL_STATIC(0x5003b0u,500);
}
B50120a:L50120a:{c.instructions+=2;NFSU2_TR(0x50120a);
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
B50120c:{NFSU2_TR(0x50120c);
if(r1(R+518)){{goto L501244;}}
}
B50120e:L50120e:{c.instructions+=3;NFSU2_TR(0x50120e);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x5ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B501211:{NFSU2_TR(0x501211);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+4))&u32(u8(0x1ull))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B501214:{NFSU2_TR(0x501214);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L501244;}}
}
B501216:L501216:{c.instructions+=5;NFSU2_TR(0x501216);
u8 U[3];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(R+4,u8(u32(r1(R+4))|u32(u8(0x1ull))));
w1(R+519,u8(s8(r1(R+4))<s8(u8(0x0ull))));
w1(R+518,u8((r1(R+4))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(R+4))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B501219:{NFSU2_TR(0x501219);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x5ull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B50121c:{NFSU2_TR(0x50121c);
w4(R+4,u32(0x85ad40ull));
}
B501221:{NFSU2_TR(0x501221);
s1(0x861e78,u8(0x1ull));
}
B501228:{NFSU2_TR(0x501228);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x50122dull));
TAIL_STATIC(0x500b00u,500);
}
B50122d:L50122d:{c.instructions+=6;NFSU2_TR(0x50122d);
__builtin_memmove((R+8),gp(0x8900ac),4);
}
B501233:{NFSU2_TR(0x501233);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B501236:{NFSU2_TR(0x501236);
__builtin_memmove((R+4),gp(0x8900d8),4);
}
B50123c:{NFSU2_TR(0x50123c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50123d:{NFSU2_TR(0x50123d);
u8 U[4];
w4(U+0,u32(0x11ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50123f:{NFSU2_TR(0x50123f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x501244ull));
TAIL_STATIC(0x5f41e0u,5f4);
}
B501244:L501244:{c.instructions+=2;NFSU2_TR(0x501244);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B501245:{NFSU2_TR(0x501245);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B501250:L501250:{c.instructions+=3;NFSU2_TR(0x501250);
__builtin_memmove((R+4),gp(0x82b884),4);
}
B501256:{NFSU2_TR(0x501256);
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
B501258:{NFSU2_TR(0x501258);
if(r1(R+518)){{goto L50125f;}}
}
B50125a:L50125a:{c.instructions+=1;NFSU2_TR(0x50125a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x50125full));
TAIL_STATIC(0x458880u,458);
}
B50125f:L50125f:{c.instructions+=2;NFSU2_TR(0x50125f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B501260:{NFSU2_TR(0x501260);
w4(R+24,u32(0x1ull));
}
B501265:L501265:{c.instructions+=2;NFSU2_TR(0x501265);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B501266:{NFSU2_TR(0x501266);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x50126bull));
TAIL_STATIC(0x48b1e0u,48b);
}
B50126b:L50126b:{c.instructions+=4;NFSU2_TR(0x50126b);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B50126e:{NFSU2_TR(0x50126e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B501271:{NFSU2_TR(0x501271);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B501273:{NFSU2_TR(0x501273);
if(r1(R+518)){{goto L50127f;}}
}
B501275:L501275:{c.instructions+=3;NFSU2_TR(0x501275);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B501278:{NFSU2_TR(0x501278);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50127a:{NFSU2_TR(0x50127a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x50127full));
TAIL_STATIC(0x5dbd70u,5db);
}
B50127f:L50127f:{c.instructions+=3;NFSU2_TR(0x50127f);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B501280:{NFSU2_TR(0x501280);
u8 U[14];
__builtin_memmove((U+6),(R+24),4);
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
B501283:{NFSU2_TR(0x501283);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x501265u);}goto L501265;}}
}
B501285:L501285:{c.instructions+=2;NFSU2_TR(0x501285);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B501286:{NFSU2_TR(0x501286);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B501290:L501290:{c.instructions+=4;NFSU2_TR(0x501290);
u8 U[5];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B501294:{NFSU2_TR(0x501294);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B501296:{NFSU2_TR(0x501296);
__builtin_memmove((R+4),gp(0x8900ac),4);
}
B50129c:{NFSU2_TR(0x50129c);
if(r1(R+518)){{goto L5012af;}}
}
B50129e:L50129e:{c.instructions+=3;NFSU2_TR(0x50129e);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5012a0:{NFSU2_TR(0x5012a0);
u8 U[4];
w4(U+0,u32(0x14ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5012a2:{NFSU2_TR(0x5012a2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5012a7ull));
TAIL_STATIC(0x5f1fd0u,5f1);
}
B5012a7:L5012a7:{c.instructions+=1;NFSU2_TR(0x5012a7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5012acull));
TAIL_STATIC(0x6022a0u,602);
}
B5012ac:L5012ac:{c.instructions+=1;NFSU2_TR(0x5012ac);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5012af:L5012af:{c.instructions+=2;NFSU2_TR(0x5012af);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5012b1:{NFSU2_TR(0x5012b1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5012b6ull));
TAIL_STATIC(0x5fa820u,5fa);
}
B5012b6:L5012b6:{c.instructions+=1;NFSU2_TR(0x5012b6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5012bbull));
TAIL_STATIC(0x5f0c80u,5f0);
}
B5012bb:L5012bb:{c.instructions+=1;NFSU2_TR(0x5012bb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5012c0:L5012c0:{c.instructions+=2;NFSU2_TR(0x5012c0);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5012c3:{NFSU2_TR(0x5012c3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5012d0:L5012d0:{c.instructions+=2;NFSU2_TR(0x5012d0);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1dull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5012d3:{NFSU2_TR(0x5012d3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5012e0:L5012e0:{c.instructions+=3;NFSU2_TR(0x5012e0);
u8 U[5];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5012e4:{NFSU2_TR(0x5012e4);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1dull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5012e7:{NFSU2_TR(0x5012e7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5012f0:L5012f0:{c.instructions+=7;NFSU2_TR(0x5012f0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5012f4:{NFSU2_TR(0x5012f4);
__builtin_memmove(gp(0x838454),(R+0),4);
}
B5012f9:{NFSU2_TR(0x5012f9);
w4(R+0,u32(0xcccccccdull));
}
B5012fe:{NFSU2_TR(0x5012fe);
u8 U[32];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
w8(U+8,u64(r4(R+0)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+16,u64(r4(U+4)));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+8,u32(u64(r8(U+24))>>32));
w1(R+512,u8((r4(R+8))!=(u32(0x0ull))));
w4(R+0,u32(r8(U+24)));
}
B501302:{NFSU2_TR(0x501302);
u8 U[48];
w4(U+40,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
__builtin_memmove((U+44),(R+8),4);
w4(R+8,shr<u32>(r4(R+8),u64(r4(U+40))));
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
w1(U+6,u8(s32(r4(R+8))<s32(u32(0x0ull))));
w1(U+7,u8(!(r1(U+5))));
w1(U+8,u8(u32(r1(U+7))&u32(r1(R+519))));
w1(U+9,u8(u32(r1(U+5))&u32(r1(U+6))));
w1(R+519,u8(u32(r1(U+8))|u32(r1(U+9))));
w1(U+10,u8((r4(R+8))==(u32(0x0ull))));
w1(U+11,u8(!(r1(U+5))));
w1(U+12,u8(u32(r1(U+11))&u32(r1(R+518))));
w1(U+13,u8(u32(r1(U+5))&u32(r1(U+10))));
w1(R+518,u8(u32(r1(U+12))|u32(r1(U+13))));
w4(U+14,u32(u32(r4(R+8))&u32(u32(0xffull))));
w1(U+18,u8(__builtin_popcountll(u64(r4(U+14)))));
w1(U+19,u8(u32(r1(U+18))&u32(u8(0x1ull))));
w1(U+20,u8((r1(U+19))==(u8(0x0ull))));
w1(U+21,u8(!(r1(U+5))));
w1(U+22,u8(u32(r1(U+21))&u32(r1(R+514))));
w1(U+23,u8(u32(r1(U+5))&u32(r1(U+20))));
w1(R+514,u8(u32(r1(U+22))|u32(r1(U+23))));
}
B501305:{NFSU2_TR(0x501305);
__builtin_memmove(gp(0x838450),(R+8),4);
}
B50130b:{NFSU2_TR(0x50130b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B501310:L501310:{c.instructions+=4;NFSU2_TR(0x501310);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B501311:{NFSU2_TR(0x501311);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B501315:{NFSU2_TR(0x501315);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))&u32(r4(R+20))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B501317:{NFSU2_TR(0x501317);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L50131d;}}
}
B501319:L501319:{c.instructions+=3;NFSU2_TR(0x501319);
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
B50131b:{NFSU2_TR(0x50131b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B50131c:{NFSU2_TR(0x50131c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50131d:L50131d:{c.instructions+=7;NFSU2_TR(0x50131d);
__builtin_memmove((R+0),gp(0x838450),4);
}
B501322:{NFSU2_TR(0x501322);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B501323:{NFSU2_TR(0x501323);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B501324:{NFSU2_TR(0x501324);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B501326:{NFSU2_TR(0x501326);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B501328:{NFSU2_TR(0x501328);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B501329:{NFSU2_TR(0x501329);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L50135e;}}
}
B50132b:L50132b:{c.instructions+=2;NFSU2_TR(0x50132b);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B50132d:{NFSU2_TR(0x50132d);
__builtin_memmove((R+4),(R+4),4);
}
B501330:L501330:{c.instructions+=7;NFSU2_TR(0x501330);
__builtin_memmove((R+0),gp(0x838454),4);
}
B501335:{NFSU2_TR(0x501335);
u8 U[10];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),2);
w4(R+4,u32(r2(U+8)));
}
B501339:{NFSU2_TR(0x501339);
__builtin_memmove((R+8),gp(0x838428),4);
}
B50133f:{NFSU2_TR(0x50133f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((R+24),(U+4),4);
}
B501342:{NFSU2_TR(0x501342);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+8))));
}
B501344:{NFSU2_TR(0x501344);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B501345:{NFSU2_TR(0x501345);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x50134aull));
TAIL_STATIC(0x43db50u,43d);
}
B50134a:L50134a:{c.instructions+=3;NFSU2_TR(0x50134a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B50134d:{NFSU2_TR(0x50134d);
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
B50134f:{NFSU2_TR(0x50134f);
if(r1(R+518)){{goto L501365;}}
}
B501351:L501351:{c.instructions+=5;NFSU2_TR(0x501351);
__builtin_memmove((R+0),gp(0x838450),4);
}
B501356:{NFSU2_TR(0x501356);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B501357:{NFSU2_TR(0x501357);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x14ull))));
}
B50135a:{NFSU2_TR(0x50135a);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+12),r4(U+0)));
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B50135c:{NFSU2_TR(0x50135c);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x501330u);}goto L501330;}}
}
B50135e:L50135e:{c.instructions+=6;NFSU2_TR(0x50135e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B50135f:{NFSU2_TR(0x50135f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B501360:{NFSU2_TR(0x501360);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B501361:{NFSU2_TR(0x501361);
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
B501363:{NFSU2_TR(0x501363);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B501364:{NFSU2_TR(0x501364);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B501365:L501365:{c.instructions+=6;NFSU2_TR(0x501365);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B501366:{NFSU2_TR(0x501366);
__builtin_memmove((R+0),(R+24),4);
}
B501368:{NFSU2_TR(0x501368);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B501369:{NFSU2_TR(0x501369);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B50136a:{NFSU2_TR(0x50136a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B50136b:{NFSU2_TR(0x50136b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B501370:L501370:{c.instructions+=7;NFSU2_TR(0x501370);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B501371:{NFSU2_TR(0x501371);
__builtin_memmove((R+20),(R+16),4);
}
B501373:{NFSU2_TR(0x501373);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B501374:{NFSU2_TR(0x501374);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+12),(U+4),1);
}
B501377:{NFSU2_TR(0x501377);
u8 U[2];
__builtin_memmove((U+0),(R+12),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x1ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B50137a:{NFSU2_TR(0x50137a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50137b:{NFSU2_TR(0x50137b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L501395;}}
}
B50137d:L50137d:{c.instructions+=4;NFSU2_TR(0x50137d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B501380:{NFSU2_TR(0x501380);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B501383:{NFSU2_TR(0x501383);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B501385:{NFSU2_TR(0x501385);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((R+8),(U+0),4);
}
B501388:L501388:{c.instructions+=2;NFSU2_TR(0x501388);
u8 U[18];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((U+10),(U+0),4);
w1(R+512,u8((r4(U+10))<(r4(R+24))));
w1(R+523,sborrow<u32>(r4(U+10),r4(R+24)));
w4(U+14,u32(u32(r4(U+10))-u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+14))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+14))==(u32(0x0ull))));
w4(U+4,u32(u32(r4(U+14))&u32(u32(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r4(U+4)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B50138a:{NFSU2_TR(0x50138a);
if(r1(R+518)){{goto L5013ee;}}
}
B50138c:L50138c:{c.instructions+=4;NFSU2_TR(0x50138c);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B50138d:{NFSU2_TR(0x50138d);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x4ull))));
}
B501390:{NFSU2_TR(0x501390);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x2ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B501393:{NFSU2_TR(0x501393);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x501388u);}goto L501388;}}
}
B501395:L501395:{c.instructions+=2;NFSU2_TR(0x501395);
u8 U[2];
__builtin_memmove((U+0),(R+12),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x9ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B501398:{NFSU2_TR(0x501398);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5013f6;}}
}
B50139a:L50139a:{c.instructions+=9;NFSU2_TR(0x50139a);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B50139d:{NFSU2_TR(0x50139d);
__builtin_memmove((R+4),(R+0),4);
}
B50139f:{NFSU2_TR(0x50139f);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B5013a2:{NFSU2_TR(0x5013a2);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(u32(0x104ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B5013a8:{NFSU2_TR(0x5013a8);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8620a4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5013ae:{NFSU2_TR(0x5013ae);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xffffull))));
}
B5013b3:{NFSU2_TR(0x5013b3);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B5013b5:{NFSU2_TR(0x5013b5);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5013b7:{NFSU2_TR(0x5013b7);
if(r1(R+518)){{goto L5013be;}}
}
B5013b9:L5013b9:{c.instructions+=1;NFSU2_TR(0x5013b9);
w4(R+8,u32(0x1ull));
}
B5013be:L5013be:{c.instructions+=3;NFSU2_TR(0x5013be);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8620a8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5013c4:{NFSU2_TR(0x5013c4);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5013c6:{NFSU2_TR(0x5013c6);
if(r1(R+518)){{goto L5013c9;}}
}
B5013c8:L5013c8:{c.instructions+=1;NFSU2_TR(0x5013c8);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B5013c9:L5013c9:{c.instructions+=3;NFSU2_TR(0x5013c9);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8620acull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5013cf:{NFSU2_TR(0x5013cf);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5013d1:{NFSU2_TR(0x5013d1);
if(r1(R+518)){{goto L5013d4;}}
}
B5013d3:L5013d3:{c.instructions+=1;NFSU2_TR(0x5013d3);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B5013d4:L5013d4:{c.instructions+=3;NFSU2_TR(0x5013d4);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8620b0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5013da:{NFSU2_TR(0x5013da);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5013dc:{NFSU2_TR(0x5013dc);
if(r1(R+518)){{goto L5013df;}}
}
B5013de:L5013de:{c.instructions+=1;NFSU2_TR(0x5013de);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B5013df:L5013df:{c.instructions+=8;NFSU2_TR(0x5013df);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B5013e1:{NFSU2_TR(0x5013e1);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
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
B5013e3:{NFSU2_TR(0x5013e3);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
__builtin_memmove((R+4),(U+0),1);
}
B5013e6:{NFSU2_TR(0x5013e6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5013e7:{NFSU2_TR(0x5013e7);
__builtin_memmove((R+0),(R+4),1);
}
B5013e9:{NFSU2_TR(0x5013e9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5013ea:{NFSU2_TR(0x5013ea);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5013eb:{NFSU2_TR(0x5013eb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5013ee:L5013ee:{c.instructions+=5;NFSU2_TR(0x5013ee);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5013ef:{NFSU2_TR(0x5013ef);
w1(R+0,u8(0x1ull));
}
B5013f1:{NFSU2_TR(0x5013f1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5013f2:{NFSU2_TR(0x5013f2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5013f3:{NFSU2_TR(0x5013f3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5013f6:L5013f6:{c.instructions+=2;NFSU2_TR(0x5013f6);
u8 U[2];
__builtin_memmove((U+0),(R+12),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0xaull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B5013f9:{NFSU2_TR(0x5013f9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L501429;}}
}
B5013fb:L5013fb:{c.instructions+=6;NFSU2_TR(0x5013fb);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5013fe:{NFSU2_TR(0x5013fe);
__builtin_memmove((R+4),(R+24),4);
}
B501400:{NFSU2_TR(0x501400);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B501403:{NFSU2_TR(0x501403);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(u32(0x104ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B501409:{NFSU2_TR(0x501409);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x862018ull))));
}
B50140f:{NFSU2_TR(0x50140f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x501414ull));
TAIL_STATIC(0x500520u,500);
}
B501414:L501414:{c.instructions+=9;NFSU2_TR(0x501414);
w4(R+24,u32(u32(r4(R+24))&u32(u32(0xffffull))));
}
B50141a:{NFSU2_TR(0x50141a);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B50141c:{NFSU2_TR(0x50141c);
u8 U[14];
__builtin_memmove((U+6),(R+24),4);
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
B50141e:{NFSU2_TR(0x50141e);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
__builtin_memmove((R+8),(U+0),1);
}
B501421:{NFSU2_TR(0x501421);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B501422:{NFSU2_TR(0x501422);
__builtin_memmove((R+0),(R+8),1);
}
B501424:{NFSU2_TR(0x501424);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B501425:{NFSU2_TR(0x501425);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B501426:{NFSU2_TR(0x501426);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B501429:L501429:{c.instructions+=2;NFSU2_TR(0x501429);
u8 U[2];
__builtin_memmove((U+0),(R+12),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0xcull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B50142c:{NFSU2_TR(0x50142c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L50145c;}}
}
B50142e:L50142e:{c.instructions+=6;NFSU2_TR(0x50142e);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B501431:{NFSU2_TR(0x501431);
__builtin_memmove((R+4),(R+24),4);
}
B501433:{NFSU2_TR(0x501433);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B501436:{NFSU2_TR(0x501436);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(u32(0x104ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B50143c:{NFSU2_TR(0x50143c);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x862018ull))));
}
B501442:{NFSU2_TR(0x501442);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x501447ull));
TAIL_STATIC(0x5004d0u,500);
}
B501447:L501447:{c.instructions+=9;NFSU2_TR(0x501447);
w4(R+24,u32(u32(r4(R+24))&u32(u32(0xffffull))));
}
B50144d:{NFSU2_TR(0x50144d);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B50144f:{NFSU2_TR(0x50144f);
u8 U[14];
__builtin_memmove((U+6),(R+24),4);
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
B501451:{NFSU2_TR(0x501451);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
__builtin_memmove((R+4),(U+0),1);
}
B501454:{NFSU2_TR(0x501454);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B501455:{NFSU2_TR(0x501455);
__builtin_memmove((R+0),(R+4),1);
}
B501457:{NFSU2_TR(0x501457);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B501458:{NFSU2_TR(0x501458);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B501459:{NFSU2_TR(0x501459);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50145c:L50145c:{c.instructions+=5;NFSU2_TR(0x50145c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B50145d:{NFSU2_TR(0x50145d);
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
B50145f:{NFSU2_TR(0x50145f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B501460:{NFSU2_TR(0x501460);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B501461:{NFSU2_TR(0x501461);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B501470:L501470:{c.instructions+=3;NFSU2_TR(0x501470);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B501472:{NFSU2_TR(0x501472);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B501475:{NFSU2_TR(0x501475);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B501480:L501480:{c.instructions+=7;NFSU2_TR(0x501480);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B501484:{NFSU2_TR(0x501484);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B501485:{NFSU2_TR(0x501485);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B501486:{NFSU2_TR(0x501486);
__builtin_memmove((R+24),(R+4),4);
}
B501488:{NFSU2_TR(0x501488);
__builtin_memmove((R+4),gp(0x8900d8),4);
}
B50148e:{NFSU2_TR(0x50148e);
u8 U[4];
w4(U+0,u32(0xdull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B501490:{NFSU2_TR(0x501490);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x501495ull));
TAIL_STATIC(0x5f41e0u,5f4);
}
B501495:L501495:{c.instructions+=3;NFSU2_TR(0x501495);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x140cull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B50149c:{NFSU2_TR(0x50149c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B50149d:{NFSU2_TR(0x50149d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5014a0:L5014a0:{c.instructions+=3;NFSU2_TR(0x5014a0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5014a4:{NFSU2_TR(0x5014a4);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B5014a6:{NFSU2_TR(0x5014a6);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L5014b9;}}
}
B5014a8:L5014a8:{c.instructions+=2;NFSU2_TR(0x5014a8);
u8 U[22];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1400ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+14))));
w1(R+523,sborrow<u32>(r4(R+0),r4(U+14)));
w4(U+18,u32(u32(r4(R+0))-u32(r4(U+14))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B5014ae:{NFSU2_TR(0x5014ae);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L5014b9;}}
}
B5014b0:L5014b0:{c.instructions+=3;NFSU2_TR(0x5014b0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B5014b3:{NFSU2_TR(0x5014b3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B5014b6:{NFSU2_TR(0x5014b6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5014b9:L5014b9:{c.instructions+=2;NFSU2_TR(0x5014b9);
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
B5014bb:{NFSU2_TR(0x5014bb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5014c0:L5014c0:{c.instructions+=6;NFSU2_TR(0x5014c0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5014c4:{NFSU2_TR(0x5014c4);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B5014c7:{NFSU2_TR(0x5014c7);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5014c8:{NFSU2_TR(0x5014c8);
w1(R+12,u8(0x1ull));
}
B5014ca:{NFSU2_TR(0x5014ca);
u8 U[2];
__builtin_memmove((U+0),(R+12),1);
w1(U+1,u8(u32(r1(R+8))-u32(r1(U+0))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B5014cc:{NFSU2_TR(0x5014cc);
if(r1(R+518)){{goto L5014d7;}}
}
B5014ce:L5014ce:{c.instructions+=2;NFSU2_TR(0x5014ce);
u8 U[7];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(r1(R+12))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B5014d1:{NFSU2_TR(0x5014d1);
if(r1(R+518)){{goto L5014d7;}}
}
B5014d3:L5014d3:{c.instructions+=2;NFSU2_TR(0x5014d3);
w1(R+8,u8(u32(r1(R+8))^u32(r1(R+8))));
}
B5014d5:{NFSU2_TR(0x5014d5);
{goto L5014d9;}
}
B5014d7:L5014d7:{c.instructions+=1;NFSU2_TR(0x5014d7);
__builtin_memmove((R+8),(R+12),1);
}
B5014d9:L5014d9:{c.instructions+=3;NFSU2_TR(0x5014d9);
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
B5014db:{NFSU2_TR(0x5014db);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x6ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5014de:{NFSU2_TR(0x5014de);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5014e6;}}
}
B5014e0:L5014e0:{c.instructions+=1;NFSU2_TR(0x5014e0);
u8 U[14];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1404ull))));
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
B5014e6:L5014e6:{c.instructions+=3;NFSU2_TR(0x5014e6);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5014e9:{NFSU2_TR(0x5014e9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5014ea:{NFSU2_TR(0x5014ea);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5014f0:L5014f0:{c.instructions+=12;NFSU2_TR(0x5014f0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5014f1:{NFSU2_TR(0x5014f1);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5014f2:{NFSU2_TR(0x5014f2);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5014f3:{NFSU2_TR(0x5014f3);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5014f4:{NFSU2_TR(0x5014f4);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5014f8:{NFSU2_TR(0x5014f8);
__builtin_memmove((R+8),(R+4),4);
}
B5014fa:{NFSU2_TR(0x5014fa);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5014fb:{NFSU2_TR(0x5014fb);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5014ff:{NFSU2_TR(0x5014ff);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B501503:{NFSU2_TR(0x501503);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x5ull))));
__builtin_memmove((R+12),(U+0),4);
}
B501506:{NFSU2_TR(0x501506);
w4(R+20,u32(0x100ull));
}
B50150b:{NFSU2_TR(0x50150b);
{goto L501510;}
}
B501510:L501510:{c.instructions+=4;NFSU2_TR(0x501510);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xfffffffbull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B501513:{NFSU2_TR(0x501513);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B501515:{NFSU2_TR(0x501515);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B501517:{NFSU2_TR(0x501517);
if(r1(R+518)){{goto L50152f;}}
}
B501519:L501519:{c.instructions+=4;NFSU2_TR(0x501519);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+4))),2);
w4(R+0,u32(r2(U+0)));
}
B50151c:{NFSU2_TR(0x50151c);
w4(R+0,u32(u32(r4(R+0))+u32(m4(0x838428))));
}
B501522:{NFSU2_TR(0x501522);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B501523:{NFSU2_TR(0x501523);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x501528ull));
TAIL_STATIC(0x43db50u,43d);
}
B501528:L501528:{c.instructions+=2;NFSU2_TR(0x501528);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B50152c:{NFSU2_TR(0x50152c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B50152f:L50152f:{c.instructions+=52;NFSU2_TR(0x50152f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+24)),r4(U+0));
}
B501531:{NFSU2_TR(0x501531);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
w4(U+0,u32(u32(r4(U+0))+u32(u32(0xfffffffcull))));
s4(u32(r4(R+28)),r4(U+0));
}
B501534:{NFSU2_TR(0x501534);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xffffffffull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B501537:{NFSU2_TR(0x501537);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B50153a:{NFSU2_TR(0x50153a);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x4ull))));
}
B50153d:{NFSU2_TR(0x50153d);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xffffffffull))));
__builtin_memmove((R+4),(U+0),4);
}
B501540:{NFSU2_TR(0x501540);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
w4(U+0,u32(u32(r4(U+0))-u32(u32(0x1ull))));
s4(u32(r4(R+28)),r4(U+0));
}
B501542:{NFSU2_TR(0x501542);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+12))),1);
__builtin_memmove((R+4),(U+0),1);
}
B501544:{NFSU2_TR(0x501544);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1ull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B501547:{NFSU2_TR(0x501547);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+4),(U+0),4);
}
B501549:{NFSU2_TR(0x501549);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B50154a:{NFSU2_TR(0x50154a);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
}
B50154b:{NFSU2_TR(0x50154b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+28)),r4(U+0));
}
B50154d:{NFSU2_TR(0x50154d);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B501550:{NFSU2_TR(0x501550);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1ull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B501553:{NFSU2_TR(0x501553);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+4),(U+0),4);
}
B501555:{NFSU2_TR(0x501555);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B501556:{NFSU2_TR(0x501556);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
}
B501557:{NFSU2_TR(0x501557);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+28)),r4(U+0));
}
B501559:{NFSU2_TR(0x501559);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B50155c:{NFSU2_TR(0x50155c);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1ull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B50155f:{NFSU2_TR(0x50155f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+4),(U+0),4);
}
B501561:{NFSU2_TR(0x501561);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1ull))));
__builtin_memmove((R+0),(U+0),4);
}
B501564:{NFSU2_TR(0x501564);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B501565:{NFSU2_TR(0x501565);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
}
B501566:{NFSU2_TR(0x501566);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+28)),r4(U+0));
}
B501568:{NFSU2_TR(0x501568);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x3ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B50156b:{NFSU2_TR(0x50156b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B50156e:{NFSU2_TR(0x50156e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+4),(U+0),4);
}
B501570:{NFSU2_TR(0x501570);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x2ull))));
__builtin_memmove((R+0),(U+0),4);
}
B501573:{NFSU2_TR(0x501573);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B501574:{NFSU2_TR(0x501574);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x3ull))));
__builtin_memmove((R+0),(U+0),4);
}
B501577:{NFSU2_TR(0x501577);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0xfffffffcull))));
}
B50157a:{NFSU2_TR(0x50157a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+28)),r4(U+0));
}
B50157c:{NFSU2_TR(0x50157c);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x7ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B50157f:{NFSU2_TR(0x50157f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B501582:{NFSU2_TR(0x501582);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+4),(U+0),4);
}
B501584:{NFSU2_TR(0x501584);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x7ull))));
__builtin_memmove((R+0),(U+0),4);
}
B501587:{NFSU2_TR(0x501587);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x4ull))));
}
B50158a:{NFSU2_TR(0x50158a);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0xfffffffcull))));
}
B50158d:{NFSU2_TR(0x50158d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+28)),r4(U+0));
}
B50158f:{NFSU2_TR(0x50158f);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xbull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B501592:{NFSU2_TR(0x501592);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xbull))));
__builtin_memmove((R+0),(U+0),4);
}
B501595:{NFSU2_TR(0x501595);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x4ull))));
}
B501598:{NFSU2_TR(0x501598);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+24)),r4(U+0));
}
B50159a:{NFSU2_TR(0x50159a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+4),(U+0),4);
}
B50159c:{NFSU2_TR(0x50159c);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0xfffffffcull))));
}
B50159f:{NFSU2_TR(0x50159f);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x4ull))));
}
B5015a2:{NFSU2_TR(0x5015a2);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x14ull))));
}
B5015a5:{NFSU2_TR(0x5015a5);
w4(R+20,u32(u32(r4(R+20))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+20))==(u32(0x0ull))));
}
B5015a6:{NFSU2_TR(0x5015a6);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+28)),r4(U+0));
}
B5015a8:{NFSU2_TR(0x5015a8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x501510u);}goto L501510;}}
}
B5015ae:L5015ae:{c.instructions+=23;NFSU2_TR(0x5015ae);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x1400ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5015b4:{NFSU2_TR(0x5015b4);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+24)),r4(U+0));
}
B5015b6:{NFSU2_TR(0x5015b6);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x1400ull))));
__builtin_memmove((R+0),(U+0),4);
}
B5015bc:{NFSU2_TR(0x5015bc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
w4(U+0,u32(u32(r4(U+0))+u32(u32(0xfffffffcull))));
s4(u32(r4(R+28)),r4(U+0));
}
B5015bf:{NFSU2_TR(0x5015bf);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x1404ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5015c5:{NFSU2_TR(0x5015c5);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x1404ull))));
__builtin_memmove((R+0),(U+0),4);
}
B5015cb:{NFSU2_TR(0x5015cb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5015ce:{NFSU2_TR(0x5015ce);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+12),(U+0),4);
}
B5015d0:{NFSU2_TR(0x5015d0);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x4ull))));
}
B5015d3:{NFSU2_TR(0x5015d3);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0xfffffffcull))));
}
B5015d6:{NFSU2_TR(0x5015d6);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
s4(u32(r4(R+28)),r4(U+0));
}
B5015d8:{NFSU2_TR(0x5015d8);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x4ull))));
}
B5015db:{NFSU2_TR(0x5015db);
w1(R+512,carry<u32>(r4(R+8),u32(0x140cull)));
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x140cull))));
}
B5015e1:{NFSU2_TR(0x5015e1);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+8))),1);
__builtin_memmove((R+8),(U+0),1);
}
B5015e3:{NFSU2_TR(0x5015e3);
u8 U[1];
__builtin_memmove((U+0),(R+8),1);
s1(u32(r4(R+24)),r1(U+0));
}
B5015e5:{NFSU2_TR(0x5015e5);
u8 U[10];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x1ull)));
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
w4(U+0,u32(u32(r4(U+0))-u32(u32(0x1ull))));
s4(u32(r4(R+28)),r4(U+0));
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
w4(U+4,u32(u32(r4(U+0))&u32(u32(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r4(U+4)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B5015e7:{NFSU2_TR(0x5015e7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5015e8:{NFSU2_TR(0x5015e8);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1ull))));
__builtin_memmove((R+0),(U+0),4);
}
B5015eb:{NFSU2_TR(0x5015eb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5015ec:{NFSU2_TR(0x5015ec);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5015ed:{NFSU2_TR(0x5015ed);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5015ee:{NFSU2_TR(0x5015ee);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5015ef:{NFSU2_TR(0x5015ef);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B501600:L501600:{c.instructions+=4;NFSU2_TR(0x501600);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x11cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B501606:{NFSU2_TR(0x501606);
w4(R+0,u32(0x6ull));
}
B50160b:{NFSU2_TR(0x50160b);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
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
B50160d:{NFSU2_TR(0x50160d);
if(r1(R+518)){{goto L501635;}}
}
B50160f:L50160f:{c.instructions+=9;NFSU2_TR(0x50160f);
u8 U[1];
w1(U+0,u8(0x1ull));
s1(u32(r4(R+4)),r1(U+0));
}
B501612:{NFSU2_TR(0x501612);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x11cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B501618:{NFSU2_TR(0x501618);
__builtin_memmove((R+0),gp(0x8900ac),4);
}
B50161d:{NFSU2_TR(0x50161d);
s1(0x861e78,u8(0x1ull));
}
B501624:{NFSU2_TR(0x501624);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B501627:{NFSU2_TR(0x501627);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B501628:{NFSU2_TR(0x501628);
__builtin_memmove((R+4),gp(0x8900d8),4);
}
B50162e:{NFSU2_TR(0x50162e);
u8 U[4];
w4(U+0,u32(0x11ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B501630:{NFSU2_TR(0x501630);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x501635ull));
TAIL_STATIC(0x5f41e0u,5f4);
}
B501635:L501635:{c.instructions+=1;NFSU2_TR(0x501635);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B501640:L501640:{c.instructions+=5;NFSU2_TR(0x501640);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x11cull))));
w4(U+4,u32(0x7ull));
s4(u32(r4(U+0)),r4(U+4));
}
B50164a:{NFSU2_TR(0x50164a);
__builtin_memmove((R+8),gp(0x86283c),4);
}
B501650:{NFSU2_TR(0x501650);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B501652:{NFSU2_TR(0x501652);
u8 U[10];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(U+6,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B501654:{NFSU2_TR(0x501654);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L50167e;}}
}
B501656:L501656:{c.instructions+=3;NFSU2_TR(0x501656);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B501659:{NFSU2_TR(0x501659);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B50165c:{NFSU2_TR(0x50165c);
__builtin_memmove((R+16),(R+16),4);
}
B501660:L501660:{c.instructions+=2;NFSU2_TR(0x501660);
u8 U[20];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x8ull))));
w4(U+4,u32(u32(u32(0x862840ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(U+16,u32(u32(r4(U+12))-u32(r4(R+4))));
w1(R+518,u8((r4(U+16))==(u32(0x0ull))));
}
B501667:{NFSU2_TR(0x501667);
if(r1(R+518)){{goto L50166f;}}
}
B501669:L501669:{c.instructions+=3;NFSU2_TR(0x501669);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B50166a:{NFSU2_TR(0x50166a);
u8 U[14];
__builtin_memmove((U+6),(R+8),4);
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
B50166c:{NFSU2_TR(0x50166c);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x501660u);}goto L501660;}}
}
B50166e:L50166e:{c.instructions+=1;NFSU2_TR(0x50166e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50166f:L50166f:{c.instructions+=3;NFSU2_TR(0x50166f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x8ull))));
w4(U+4,u32(u32(u32(0x862840ull))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B501676:{NFSU2_TR(0x501676);
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
B501678:{NFSU2_TR(0x501678);
if(r1(R+518)){{goto L50167e;}}
}
B50167a:L50167a:{c.instructions+=1;NFSU2_TR(0x50167a);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B50167e:L50167e:{c.instructions+=1;NFSU2_TR(0x50167e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B501680:L501680:{c.instructions+=3;NFSU2_TR(0x501680);
u8 U[22];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x11cull))));
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
B501687:{NFSU2_TR(0x501687);
__builtin_memmove((R+0),(R+518),1);
}
B50168a:{NFSU2_TR(0x50168a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B501690:L501690:{c.instructions+=4;NFSU2_TR(0x501690);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B501693:{NFSU2_TR(0x501693);
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
B501695:{NFSU2_TR(0x501695);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+0),(U+0),1);
}
B501698:{NFSU2_TR(0x501698);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5016a0:L5016a0:{c.instructions+=3;NFSU2_TR(0x5016a0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5016a3:{NFSU2_TR(0x5016a3);
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
B5016a5:{NFSU2_TR(0x5016a5);
if(r1(R+518)){{goto L5016ce;}}
}
B5016a7:L5016a7:{c.instructions+=2;NFSU2_TR(0x5016a7);
u8 U[22];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x11cull))));
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
B5016ae:{NFSU2_TR(0x5016ae);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5016ce;}}
}
B5016b0:L5016b0:{c.instructions+=7;NFSU2_TR(0x5016b0);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5016b3:{NFSU2_TR(0x5016b3);
{u32 ea_=u32(u32(8802644u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5016b9:{NFSU2_TR(0x5016b9);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B5016bc:{NFSU2_TR(0x5016bc);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5016c2:{NFSU2_TR(0x5016c2);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5016c4:{NFSU2_TR(0x5016c4);
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
B5016c7:{NFSU2_TR(0x5016c7);
if(r1(R+514)){{goto L5016ce;}}
}
B5016c9:L5016c9:{c.instructions+=1;NFSU2_TR(0x5016c9);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x501600u);}goto L501600;}
}
B5016ce:L5016ce:{c.instructions+=1;NFSU2_TR(0x5016ce);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5016d0:L5016d0:{c.instructions+=4;NFSU2_TR(0x5016d0);
__builtin_memmove((R+0),gp(0x838460),4);
}
B5016d5:{NFSU2_TR(0x5016d5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x8ull))));
}
B5016d8:{NFSU2_TR(0x5016d8);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5016da:{NFSU2_TR(0x5016da);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L501744;}}
}
B5016dc:L5016dc:{c.instructions+=11;NFSU2_TR(0x5016dc);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5016dd:{NFSU2_TR(0x5016dd);
__builtin_memmove((R+12),gp(0x8383f0),4);
}
B5016e3:{NFSU2_TR(0x5016e3);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5016e4:{NFSU2_TR(0x5016e4);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5016e5:{NFSU2_TR(0x5016e5);
__builtin_memmove((R+24),gp(0x83845c),4);
}
B5016eb:{NFSU2_TR(0x5016eb);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0xcull))));
}
B5016ee:{NFSU2_TR(0x5016ee);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5016ef:{NFSU2_TR(0x5016ef);
__builtin_memmove((R+28),gp(0x8383f4),4);
}
B5016f5:{NFSU2_TR(0x5016f5);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5016f9:{NFSU2_TR(0x5016f9);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5016fd:{NFSU2_TR(0x5016fd);
__builtin_memmove((R+4),(R+4),4);
}
B501700:L501700:{c.instructions+=1;NFSU2_TR(0x501700);
w4(R+20,u32(0x3ull));
}
B501705:L501705:{c.instructions+=2;NFSU2_TR(0x501705);
u8 U[7];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x1ull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B501709:{NFSU2_TR(0x501709);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L501724;}}
}
B50170b:L50170b:{c.instructions+=3;NFSU2_TR(0x50170b);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B50170d:{NFSU2_TR(0x50170d);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B50170f:{NFSU2_TR(0x50170f);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L501724;}}
}
B501711:L501711:{c.instructions+=2;NFSU2_TR(0x501711);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B501713:{NFSU2_TR(0x501713);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x38ull))));
__builtin_memmove((R+0),(U+0),4);
}
B501716:L501716:{c.instructions+=2;NFSU2_TR(0x501716);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(r4(R+8))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B501718:{NFSU2_TR(0x501718);
if(r1(R+518)){{goto L501724;}}
}
B50171a:L50171a:{c.instructions+=4;NFSU2_TR(0x50171a);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B50171b:{NFSU2_TR(0x50171b);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xa0ull))));
}
B501720:{NFSU2_TR(0x501720);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B501722:{NFSU2_TR(0x501722);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x501716u);}goto L501716;}}
}
B501724:L501724:{c.instructions+=3;NFSU2_TR(0x501724);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0xcull))));
}
B501727:{NFSU2_TR(0x501727);
w4(R+20,u32(u32(r4(R+20))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+20))==(u32(0x0ull))));
}
B501728:{NFSU2_TR(0x501728);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x501705u);}goto L501705;}}
}
B50172a:L50172a:{c.instructions+=7;NFSU2_TR(0x50172a);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B50172e:{NFSU2_TR(0x50172e);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B501732:{NFSU2_TR(0x501732);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x28ull))));
}
B501735:{NFSU2_TR(0x501735);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B501736:{NFSU2_TR(0x501736);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B50173a:{NFSU2_TR(0x50173a);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B50173e:{NFSU2_TR(0x50173e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x501700u);}goto L501700;}}
}
B501740:L501740:{c.instructions+=4;NFSU2_TR(0x501740);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B501741:{NFSU2_TR(0x501741);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B501742:{NFSU2_TR(0x501742);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B501743:{NFSU2_TR(0x501743);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B501744:L501744:{c.instructions+=2;NFSU2_TR(0x501744);
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
B501747:{NFSU2_TR(0x501747);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B501750:L501750:{c.instructions+=3;NFSU2_TR(0x501750);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B501754:{NFSU2_TR(0x501754);
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
B501757:{NFSU2_TR(0x501757);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L501772;}}
}
B501759:L501759:{c.instructions+=1;NFSU2_TR(0x501759);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x501778ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B501760:L501760:{c.instructions+=2;NFSU2_TR(0x501760);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B501763:{NFSU2_TR(0x501763);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B501766:L501766:{c.instructions+=2;NFSU2_TR(0x501766);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((R+0),(U+0),4);
}
B501769:{NFSU2_TR(0x501769);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50176c:L50176c:{c.instructions+=2;NFSU2_TR(0x50176c);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1cull))));
__builtin_memmove((R+0),(U+0),4);
}
B50176f:{NFSU2_TR(0x50176f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B501772:L501772:{c.instructions+=2;NFSU2_TR(0x501772);
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
B501774:{NFSU2_TR(0x501774);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B501790:L501790:{c.instructions+=2;NFSU2_TR(0x501790);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B501792:{NFSU2_TR(0x501792);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5017d0;}}
}
B501794:L501794:{c.instructions+=2;NFSU2_TR(0x501794);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x57ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x57ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B501797:{NFSU2_TR(0x501797);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L5017d0;}}
}
B501799:L501799:{c.instructions+=5;NFSU2_TR(0x501799);
__builtin_memmove((R+8),gp(0x83845c),4);
}
B50179f:{NFSU2_TR(0x50179f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B5017a2:{NFSU2_TR(0x5017a2);
u8 U[12];
w4(U+0,u32(u32(u32(0xffffffd8ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x8ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B5017a6:{NFSU2_TR(0x5017a6);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5017a8:{NFSU2_TR(0x5017a8);
if(r1(R+518)){{goto L5017d0;}}
}
B5017aa:L5017aa:{c.instructions+=2;NFSU2_TR(0x5017aa);
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
B5017ad:{NFSU2_TR(0x5017ad);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L5017d0;}}
}
B5017af:L5017af:{c.instructions+=1;NFSU2_TR(0x5017af);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x5017d4ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5017b6:L5017b6:{c.instructions+=2;NFSU2_TR(0x5017b6);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B5017b9:{NFSU2_TR(0x5017b9);
{goto L5017c3;}
}
B5017bb:L5017bb:{c.instructions+=2;NFSU2_TR(0x5017bb);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
}
B5017be:{NFSU2_TR(0x5017be);
{goto L5017c3;}
}
B5017c0:L5017c0:{c.instructions+=1;NFSU2_TR(0x5017c0);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
}
B5017c3:L5017c3:{c.instructions+=2;NFSU2_TR(0x5017c3);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5017c5:{NFSU2_TR(0x5017c5);
if(r1(R+518)){{goto L5017d0;}}
}
B5017c7:L5017c7:{c.instructions+=2;NFSU2_TR(0x5017c7);
u8 U[10];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
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
B5017cb:{NFSU2_TR(0x5017cb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5017d0;}}
}
B5017cd:L5017cd:{c.instructions+=2;NFSU2_TR(0x5017cd);
w1(R+0,u8(0x1ull));
}
B5017cf:{NFSU2_TR(0x5017cf);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5017d0:L5017d0:{c.instructions+=2;NFSU2_TR(0x5017d0);
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
B5017d2:{NFSU2_TR(0x5017d2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5017f0:L5017f0:{c.instructions+=4;NFSU2_TR(0x5017f0);
__builtin_memmove((R+4),gp(0x838460),4);
}
B5017f6:{NFSU2_TR(0x5017f6);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5017f8:{NFSU2_TR(0x5017f8);
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
B5017fa:{NFSU2_TR(0x5017fa);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L501856;}}
}
B5017fc:L5017fc:{c.instructions+=4;NFSU2_TR(0x5017fc);
__builtin_memmove((R+8),gp(0x83845c),4);
}
B501802:{NFSU2_TR(0x501802);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B501803:{NFSU2_TR(0x501803);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x14ull))));
}
B501806:{NFSU2_TR(0x501806);
__builtin_memmove((R+24),(R+4),4);
}
B501808:L501808:{c.instructions+=3;NFSU2_TR(0x501808);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B50180b:{NFSU2_TR(0x50180b);
u8 U[2];
__builtin_memmove((U+0),(R+4),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x1ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B50180e:{NFSU2_TR(0x50180e);
if(r1(R+518)){{goto L50181f;}}
}
B501810:L501810:{c.instructions+=2;NFSU2_TR(0x501810);
u8 U[2];
__builtin_memmove((U+0),(R+4),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x2ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B501813:{NFSU2_TR(0x501813);
if(r1(R+518)){{goto L50181f;}}
}
B501815:L501815:{c.instructions+=2;NFSU2_TR(0x501815);
u8 U[2];
__builtin_memmove((U+0),(R+4),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x3ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B501818:{NFSU2_TR(0x501818);
if(r1(R+518)){{goto L50181f;}}
}
B50181a:L50181a:{c.instructions+=2;NFSU2_TR(0x50181a);
u8 U[2];
__builtin_memmove((U+0),(R+4),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x4ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B50181d:{NFSU2_TR(0x50181d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L501820;}}
}
B50181f:L50181f:{c.instructions+=1;NFSU2_TR(0x50181f);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B501820:L501820:{c.instructions+=3;NFSU2_TR(0x501820);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+8))),1);
__builtin_memmove((R+4),(U+0),1);
}
B501822:{NFSU2_TR(0x501822);
u8 U[2];
__builtin_memmove((U+0),(R+4),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x1ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B501825:{NFSU2_TR(0x501825);
if(r1(R+518)){{goto L501836;}}
}
B501827:L501827:{c.instructions+=2;NFSU2_TR(0x501827);
u8 U[2];
__builtin_memmove((U+0),(R+4),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x2ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B50182a:{NFSU2_TR(0x50182a);
if(r1(R+518)){{goto L501836;}}
}
B50182c:L50182c:{c.instructions+=2;NFSU2_TR(0x50182c);
u8 U[2];
__builtin_memmove((U+0),(R+4),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x3ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B50182f:{NFSU2_TR(0x50182f);
if(r1(R+518)){{goto L501836;}}
}
B501831:L501831:{c.instructions+=2;NFSU2_TR(0x501831);
u8 U[2];
__builtin_memmove((U+0),(R+4),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x4ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B501834:{NFSU2_TR(0x501834);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L501837;}}
}
B501836:L501836:{c.instructions+=1;NFSU2_TR(0x501836);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B501837:L501837:{c.instructions+=3;NFSU2_TR(0x501837);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B50183a:{NFSU2_TR(0x50183a);
u8 U[2];
__builtin_memmove((U+0),(R+4),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x1ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B50183d:{NFSU2_TR(0x50183d);
if(r1(R+518)){{goto L50184e;}}
}
B50183f:L50183f:{c.instructions+=2;NFSU2_TR(0x50183f);
u8 U[2];
__builtin_memmove((U+0),(R+4),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x2ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B501842:{NFSU2_TR(0x501842);
if(r1(R+518)){{goto L50184e;}}
}
B501844:L501844:{c.instructions+=2;NFSU2_TR(0x501844);
u8 U[2];
__builtin_memmove((U+0),(R+4),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x3ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B501847:{NFSU2_TR(0x501847);
if(r1(R+518)){{goto L50184e;}}
}
B501849:L501849:{c.instructions+=2;NFSU2_TR(0x501849);
u8 U[2];
__builtin_memmove((U+0),(R+4),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x4ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B50184c:{NFSU2_TR(0x50184c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L50184f;}}
}
B50184e:L50184e:{c.instructions+=1;NFSU2_TR(0x50184e);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B50184f:L50184f:{c.instructions+=3;NFSU2_TR(0x50184f);
w1(R+512,carry<u32>(r4(R+8),u32(0x28ull)));
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x28ull))));
}
B501852:{NFSU2_TR(0x501852);
u8 U[6];
w1(R+523,sborrow<u32>(r4(R+24),u32(0x1ull)));
w4(R+24,u32(u32(r4(R+24))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B501853:{NFSU2_TR(0x501853);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x501808u);}goto L501808;}}
}
B501855:L501855:{c.instructions+=1;NFSU2_TR(0x501855);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B501856:L501856:{c.instructions+=1;NFSU2_TR(0x501856);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B501860:L501860:{c.instructions+=3;NFSU2_TR(0x501860);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B501864:{NFSU2_TR(0x501864);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B501866:{NFSU2_TR(0x501866);
if(r1(R+518)){{goto L5018bf;}}
}
B501868:L501868:{c.instructions+=3;NFSU2_TR(0x501868);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B50186c:{NFSU2_TR(0x50186c);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B50186e:{NFSU2_TR(0x50186e);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5018bf;}}
}
B501870:L501870:{c.instructions+=2;NFSU2_TR(0x501870);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x57ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x57ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B501873:{NFSU2_TR(0x501873);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L5018bf;}}
}
B501875:L501875:{c.instructions+=7;NFSU2_TR(0x501875);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B501876:{NFSU2_TR(0x501876);
__builtin_memmove((R+24),gp(0x83845c),4);
}
B50187c:{NFSU2_TR(0x50187c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B50187f:{NFSU2_TR(0x50187f);
u8 U[12];
w4(U+0,u32(u32(u32(0xffffffd8ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x8ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B501883:{NFSU2_TR(0x501883);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B501885:{NFSU2_TR(0x501885);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B501886:{NFSU2_TR(0x501886);
if(r1(R+518)){{goto L5018bf;}}
}
B501888:L501888:{c.instructions+=2;NFSU2_TR(0x501888);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B50188b:{NFSU2_TR(0x50188b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5018b5;}}
}
B50188d:L50188d:{c.instructions+=3;NFSU2_TR(0x50188d);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xfffffff5ull))));
}
B501890:{NFSU2_TR(0x501890);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0x40ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x40ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x40ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B501893:{NFSU2_TR(0x501893);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L5018bf;}}
}
B501895:L501895:{c.instructions+=2;NFSU2_TR(0x501895);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x5018d4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+8,u32(r1(U+4)));
}
B50189c:{NFSU2_TR(0x50189c);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x5018c4ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5018a3:L5018a3:{c.instructions+=2;NFSU2_TR(0x5018a3);
w4(R+0,u32(0x190ull));
}
B5018a8:{NFSU2_TR(0x5018a8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5018a9:L5018a9:{c.instructions+=2;NFSU2_TR(0x5018a9);
w4(R+0,u32(0x64ull));
}
B5018ae:{NFSU2_TR(0x5018ae);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5018af:L5018af:{c.instructions+=2;NFSU2_TR(0x5018af);
w4(R+0,u32(0x3e8ull));
}
B5018b4:{NFSU2_TR(0x5018b4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5018b5:L5018b5:{c.instructions+=2;NFSU2_TR(0x5018b5);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5018b6:{NFSU2_TR(0x5018b6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5018bbull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x501750u);}goto L501750;}
}
B5018bb:L5018bb:{c.instructions+=2;NFSU2_TR(0x5018bb);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+0))),2);
w4(R+0,u32(s32(s16(r2(U+0)))));
}
B5018be:{NFSU2_TR(0x5018be);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5018bf:L5018bf:{c.instructions+=2;NFSU2_TR(0x5018bf);
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
B5018c1:{NFSU2_TR(0x5018c1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B501920:L501920:{c.instructions+=4;NFSU2_TR(0x501920);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B501922:{NFSU2_TR(0x501922);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B501923:{NFSU2_TR(0x501923);
w4(R+4,u32(0xaaull));
}
B501928:{NFSU2_TR(0x501928);
w4(R+28,u32(0x837d30ull));
}
B50192d:L50192d:{c.instructions+=1;NFSU2_TR(0x50192d);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L50192f;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x50192du);}goto L50192d;}
}
B50192f:L50192f:{c.instructions+=178;NFSU2_TR(0x50192f);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B501931:{NFSU2_TR(0x501931);
w4(R+0,u32(0x13ull));
}
B501936:{NFSU2_TR(0x501936);
__builtin_memmove(gp(0x837d3c),(R+0),4);
}
B50193b:{NFSU2_TR(0x50193b);
__builtin_memmove(gp(0x837d40),(R+0),4);
}
B501940:{NFSU2_TR(0x501940);
__builtin_memmove(gp(0x837db0),(R+0),4);
}
B501945:{NFSU2_TR(0x501945);
w4(R+0,u32(0x1full));
}
B50194a:{NFSU2_TR(0x50194a);
w4(R+8,u32(0xdull));
}
B50194f:{NFSU2_TR(0x50194f);
__builtin_memmove(gp(0x837dbc),(R+0),4);
}
B501954:{NFSU2_TR(0x501954);
__builtin_memmove(gp(0x837dc0),(R+0),4);
}
B501959:{NFSU2_TR(0x501959);
__builtin_memmove(gp(0x837dc4),(R+0),4);
}
B50195e:{NFSU2_TR(0x50195e);
__builtin_memmove(gp(0x837dc8),(R+0),4);
}
B501963:{NFSU2_TR(0x501963);
__builtin_memmove(gp(0x837dcc),(R+0),4);
}
B501968:{NFSU2_TR(0x501968);
__builtin_memmove(gp(0x837dd0),(R+0),4);
}
B50196d:{NFSU2_TR(0x50196d);
__builtin_memmove(gp(0x837dd4),(R+0),4);
}
B501972:{NFSU2_TR(0x501972);
__builtin_memmove(gp(0x837dd8),(R+0),4);
}
B501977:{NFSU2_TR(0x501977);
__builtin_memmove(gp(0x837ddc),(R+0),4);
}
B50197c:{NFSU2_TR(0x50197c);
__builtin_memmove(gp(0x837de0),(R+0),4);
}
B501981:{NFSU2_TR(0x501981);
__builtin_memmove(gp(0x837de4),(R+0),4);
}
B501986:{NFSU2_TR(0x501986);
__builtin_memmove(gp(0x837de8),(R+0),4);
}
B50198b:{NFSU2_TR(0x50198b);
w4(R+0,u32(0x4cull));
}
B501990:{NFSU2_TR(0x501990);
__builtin_memmove(gp(0x837d30),(R+4),4);
}
B501996:{NFSU2_TR(0x501996);
s4(0x837d34,u32(0x12ull));
}
B5019a0:{NFSU2_TR(0x5019a0);
s4(0x837d38,u32(0x11ull));
}
B5019aa:{NFSU2_TR(0x5019aa);
__builtin_memmove(gp(0x837d44),(R+4),4);
}
B5019b0:{NFSU2_TR(0x5019b0);
s4(0x837d48,u32(0x16ull));
}
B5019ba:{NFSU2_TR(0x5019ba);
s4(0x837d4c,u32(0x14ull));
}
B5019c4:{NFSU2_TR(0x5019c4);
s4(0x837d54,u32(0xbull));
}
B5019ce:{NFSU2_TR(0x5019ce);
__builtin_memmove(gp(0x837d58),(R+4),4);
}
B5019d4:{NFSU2_TR(0x5019d4);
s4(0x837d5c,u32(0x10ull));
}
B5019de:{NFSU2_TR(0x5019de);
s4(0x837d60,u32(0xcull));
}
B5019e8:{NFSU2_TR(0x5019e8);
__builtin_memmove(gp(0x837d64),(R+4),4);
}
B5019ee:{NFSU2_TR(0x5019ee);
s4(0x837d68,u32(0xfull));
}
B5019f8:{NFSU2_TR(0x5019f8);
s4(0x837d6c,u32(0xeull));
}
B501a02:{NFSU2_TR(0x501a02);
s4(0x837d70,u32(0x15ull));
}
B501a0c:{NFSU2_TR(0x501a0c);
__builtin_memmove(gp(0x837d74),(R+4),4);
}
B501a12:{NFSU2_TR(0x501a12);
__builtin_memmove(gp(0x837d78),(R+4),4);
}
B501a18:{NFSU2_TR(0x501a18);
__builtin_memmove(gp(0x837d7c),(R+4),4);
}
B501a1e:{NFSU2_TR(0x501a1e);
__builtin_memmove(gp(0x837d80),(R+4),4);
}
B501a24:{NFSU2_TR(0x501a24);
__builtin_memmove(gp(0x837d84),(R+4),4);
}
B501a2a:{NFSU2_TR(0x501a2a);
__builtin_memmove(gp(0x837d88),(R+4),4);
}
B501a30:{NFSU2_TR(0x501a30);
__builtin_memmove(gp(0x837d8c),(R+4),4);
}
B501a36:{NFSU2_TR(0x501a36);
__builtin_memmove(gp(0x837d90),(R+4),4);
}
B501a3c:{NFSU2_TR(0x501a3c);
__builtin_memmove(gp(0x837d94),(R+4),4);
}
B501a42:{NFSU2_TR(0x501a42);
__builtin_memmove(gp(0x837d98),(R+4),4);
}
B501a48:{NFSU2_TR(0x501a48);
__builtin_memmove(gp(0x837d9c),(R+4),4);
}
B501a4e:{NFSU2_TR(0x501a4e);
__builtin_memmove(gp(0x837da0),(R+4),4);
}
B501a54:{NFSU2_TR(0x501a54);
__builtin_memmove(gp(0x837da4),(R+8),4);
}
B501a5a:{NFSU2_TR(0x501a5a);
__builtin_memmove(gp(0x837da8),(R+8),4);
}
B501a60:{NFSU2_TR(0x501a60);
__builtin_memmove(gp(0x837db4),(R+4),4);
}
B501a66:{NFSU2_TR(0x501a66);
s4(0x837db8,u32(0x1eull));
}
B501a70:{NFSU2_TR(0x501a70);
__builtin_memmove(gp(0x837dec),(R+4),4);
}
B501a76:{NFSU2_TR(0x501a76);
__builtin_memmove(gp(0x837df0),(R+4),4);
}
B501a7c:{NFSU2_TR(0x501a7c);
__builtin_memmove(gp(0x837df4),(R+4),4);
}
B501a82:{NFSU2_TR(0x501a82);
__builtin_memmove(gp(0x837df8),(R+4),4);
}
B501a88:{NFSU2_TR(0x501a88);
__builtin_memmove(gp(0x837dfc),(R+4),4);
}
B501a8e:{NFSU2_TR(0x501a8e);
__builtin_memmove(gp(0x837e00),(R+0),4);
}
B501a93:{NFSU2_TR(0x501a93);
__builtin_memmove(gp(0x837e04),(R+0),4);
}
B501a98:{NFSU2_TR(0x501a98);
__builtin_memmove(gp(0x837e08),(R+0),4);
}
B501a9d:{NFSU2_TR(0x501a9d);
__builtin_memmove(gp(0x837e0c),(R+0),4);
}
B501aa2:{NFSU2_TR(0x501aa2);
__builtin_memmove(gp(0x837e10),(R+0),4);
}
B501aa7:{NFSU2_TR(0x501aa7);
__builtin_memmove(gp(0x837e14),(R+0),4);
}
B501aac:{NFSU2_TR(0x501aac);
__builtin_memmove(gp(0x837e18),(R+0),4);
}
B501ab1:{NFSU2_TR(0x501ab1);
__builtin_memmove(gp(0x837e1c),(R+4),4);
}
B501ab7:{NFSU2_TR(0x501ab7);
__builtin_memmove(gp(0x837e20),(R+4),4);
}
B501abd:{NFSU2_TR(0x501abd);
__builtin_memmove(gp(0x837e24),(R+4),4);
}
B501ac3:{NFSU2_TR(0x501ac3);
__builtin_memmove(gp(0x837e28),(R+4),4);
}
B501ac9:{NFSU2_TR(0x501ac9);
__builtin_memmove(gp(0x837e2c),(R+4),4);
}
B501acf:{NFSU2_TR(0x501acf);
__builtin_memmove(gp(0x837e30),(R+4),4);
}
B501ad5:{NFSU2_TR(0x501ad5);
__builtin_memmove(gp(0x837e34),(R+4),4);
}
B501adb:{NFSU2_TR(0x501adb);
__builtin_memmove(gp(0x837e38),(R+4),4);
}
B501ae1:{NFSU2_TR(0x501ae1);
__builtin_memmove(gp(0x837e3c),(R+4),4);
}
B501ae7:{NFSU2_TR(0x501ae7);
s4(0x837e40,u32(0x28ull));
}
B501af1:{NFSU2_TR(0x501af1);
s4(0x837e44,u32(0x50ull));
}
B501afb:{NFSU2_TR(0x501afb);
s4(0x837e48,u32(0x4full));
}
B501b05:{NFSU2_TR(0x501b05);
s4(0x837e4c,u32(0x4eull));
}
B501b0f:{NFSU2_TR(0x501b0f);
s4(0x837e50,u32(0x52ull));
}
B501b19:{NFSU2_TR(0x501b19);
s4(0x837e54,u32(0x4dull));
}
B501b23:{NFSU2_TR(0x501b23);
s4(0x837e58,u32(0x51ull));
}
B501b2d:{NFSU2_TR(0x501b2d);
s4(0x837e5c,u32(0x53ull));
}
B501b37:{NFSU2_TR(0x501b37);
s4(0x837e60,u32(0x54ull));
}
B501b41:{NFSU2_TR(0x501b41);
__builtin_memmove(gp(0x837e64),(R+4),4);
}
B501b47:{NFSU2_TR(0x501b47);
__builtin_memmove(gp(0x837e68),(R+4),4);
}
B501b4d:{NFSU2_TR(0x501b4d);
__builtin_memmove(gp(0x837e6c),(R+4),4);
}
B501b53:{NFSU2_TR(0x501b53);
__builtin_memmove(gp(0x837e70),(R+4),4);
}
B501b59:{NFSU2_TR(0x501b59);
__builtin_memmove(gp(0x837e74),(R+4),4);
}
B501b5f:{NFSU2_TR(0x501b5f);
__builtin_memmove(gp(0x837e78),(R+4),4);
}
B501b65:{NFSU2_TR(0x501b65);
__builtin_memmove(gp(0x837e7c),(R+4),4);
}
B501b6b:{NFSU2_TR(0x501b6b);
__builtin_memmove(gp(0x837e80),(R+4),4);
}
B501b71:{NFSU2_TR(0x501b71);
__builtin_memmove(gp(0x837e84),(R+4),4);
}
B501b77:{NFSU2_TR(0x501b77);
__builtin_memmove(gp(0x837e88),(R+4),4);
}
B501b7d:{NFSU2_TR(0x501b7d);
__builtin_memmove(gp(0x837e8c),(R+4),4);
}
B501b83:{NFSU2_TR(0x501b83);
__builtin_memmove(gp(0x837e90),(R+4),4);
}
B501b89:{NFSU2_TR(0x501b89);
__builtin_memmove(gp(0x837e94),(R+4),4);
}
B501b8f:{NFSU2_TR(0x501b8f);
__builtin_memmove(gp(0x837e98),(R+4),4);
}
B501b95:{NFSU2_TR(0x501b95);
__builtin_memmove(gp(0x837e9c),(R+4),4);
}
B501b9b:{NFSU2_TR(0x501b9b);
__builtin_memmove(gp(0x837ea0),(R+4),4);
}
B501ba1:{NFSU2_TR(0x501ba1);
s4(0x837ea4,u32(0x55ull));
}
B501bab:{NFSU2_TR(0x501bab);
__builtin_memmove(gp(0x837ea8),(R+4),4);
}
B501bb1:{NFSU2_TR(0x501bb1);
__builtin_memmove(gp(0x837eac),(R+4),4);
}
B501bb7:{NFSU2_TR(0x501bb7);
s4(0x837eb0,u32(0x56ull));
}
B501bc1:{NFSU2_TR(0x501bc1);
__builtin_memmove(gp(0x837eb4),(R+0),4);
}
B501bc6:{NFSU2_TR(0x501bc6);
__builtin_memmove(gp(0x837eb8),(R+0),4);
}
B501bcb:{NFSU2_TR(0x501bcb);
__builtin_memmove(gp(0x837ebc),(R+0),4);
}
B501bd0:{NFSU2_TR(0x501bd0);
__builtin_memmove(gp(0x837ec0),(R+0),4);
}
B501bd5:{NFSU2_TR(0x501bd5);
__builtin_memmove(gp(0x837ec4),(R+0),4);
}
B501bda:{NFSU2_TR(0x501bda);
__builtin_memmove(gp(0x837ec8),(R+0),4);
}
B501bdf:{NFSU2_TR(0x501bdf);
__builtin_memmove(gp(0x837ecc),(R+0),4);
}
B501be4:{NFSU2_TR(0x501be4);
__builtin_memmove(gp(0x837ed0),(R+0),4);
}
B501be9:{NFSU2_TR(0x501be9);
__builtin_memmove(gp(0x837ed4),(R+0),4);
}
B501bee:{NFSU2_TR(0x501bee);
__builtin_memmove(gp(0x837ed8),(R+0),4);
}
B501bf3:{NFSU2_TR(0x501bf3);
__builtin_memmove(gp(0x837edc),(R+0),4);
}
B501bf8:{NFSU2_TR(0x501bf8);
__builtin_memmove(gp(0x837ee0),(R+0),4);
}
B501bfd:{NFSU2_TR(0x501bfd);
__builtin_memmove(gp(0x837ee4),(R+0),4);
}
B501c02:{NFSU2_TR(0x501c02);
__builtin_memmove(gp(0x837ee8),(R+0),4);
}
B501c07:{NFSU2_TR(0x501c07);
__builtin_memmove(gp(0x837eec),(R+0),4);
}
B501c0c:{NFSU2_TR(0x501c0c);
__builtin_memmove(gp(0x837ef0),(R+0),4);
}
B501c11:{NFSU2_TR(0x501c11);
__builtin_memmove(gp(0x837ef4),(R+0),4);
}
B501c16:{NFSU2_TR(0x501c16);
__builtin_memmove(gp(0x837ef8),(R+0),4);
}
B501c1b:{NFSU2_TR(0x501c1b);
__builtin_memmove(gp(0x837efc),(R+0),4);
}
B501c20:{NFSU2_TR(0x501c20);
__builtin_memmove(gp(0x837f00),(R+0),4);
}
B501c25:{NFSU2_TR(0x501c25);
__builtin_memmove(gp(0x837f04),(R+0),4);
}
B501c2a:{NFSU2_TR(0x501c2a);
__builtin_memmove(gp(0x837f08),(R+0),4);
}
B501c2f:{NFSU2_TR(0x501c2f);
__builtin_memmove(gp(0x837f0c),(R+0),4);
}
B501c34:{NFSU2_TR(0x501c34);
__builtin_memmove(gp(0x837f10),(R+0),4);
}
B501c39:{NFSU2_TR(0x501c39);
__builtin_memmove(gp(0x837f14),(R+0),4);
}
B501c3e:{NFSU2_TR(0x501c3e);
__builtin_memmove(gp(0x837f18),(R+0),4);
}
B501c43:{NFSU2_TR(0x501c43);
__builtin_memmove(gp(0x837f1c),(R+0),4);
}
B501c48:{NFSU2_TR(0x501c48);
__builtin_memmove(gp(0x837f20),(R+0),4);
}
B501c4d:{NFSU2_TR(0x501c4d);
__builtin_memmove(gp(0x837f24),(R+0),4);
}
B501c52:{NFSU2_TR(0x501c52);
__builtin_memmove(gp(0x837f28),(R+0),4);
}
B501c57:{NFSU2_TR(0x501c57);
__builtin_memmove(gp(0x837f2c),(R+0),4);
}
B501c5c:{NFSU2_TR(0x501c5c);
__builtin_memmove(gp(0x837f30),(R+0),4);
}
B501c61:{NFSU2_TR(0x501c61);
__builtin_memmove(gp(0x837f34),(R+0),4);
}
B501c66:{NFSU2_TR(0x501c66);
__builtin_memmove(gp(0x837f38),(R+0),4);
}
B501c6b:{NFSU2_TR(0x501c6b);
__builtin_memmove(gp(0x837f3c),(R+0),4);
}
B501c70:{NFSU2_TR(0x501c70);
__builtin_memmove(gp(0x837f40),(R+0),4);
}
B501c75:{NFSU2_TR(0x501c75);
__builtin_memmove(gp(0x837f44),(R+0),4);
}
B501c7a:{NFSU2_TR(0x501c7a);
__builtin_memmove(gp(0x837f48),(R+0),4);
}
B501c7f:{NFSU2_TR(0x501c7f);
__builtin_memmove(gp(0x837f4c),(R+0),4);
}
B501c84:{NFSU2_TR(0x501c84);
__builtin_memmove(gp(0x837f50),(R+0),4);
}
B501c89:{NFSU2_TR(0x501c89);
__builtin_memmove(gp(0x837f54),(R+0),4);
}
B501c8e:{NFSU2_TR(0x501c8e);
__builtin_memmove(gp(0x837f58),(R+0),4);
}
B501c93:{NFSU2_TR(0x501c93);
__builtin_memmove(gp(0x837f5c),(R+0),4);
}
B501c98:{NFSU2_TR(0x501c98);
__builtin_memmove(gp(0x837f60),(R+0),4);
}
B501c9d:{NFSU2_TR(0x501c9d);
__builtin_memmove(gp(0x837f64),(R+0),4);
}
B501ca2:{NFSU2_TR(0x501ca2);
__builtin_memmove(gp(0x837f68),(R+0),4);
}
B501ca7:{NFSU2_TR(0x501ca7);
__builtin_memmove(gp(0x837f6c),(R+0),4);
}
B501cac:{NFSU2_TR(0x501cac);
__builtin_memmove(gp(0x837f70),(R+0),4);
}
B501cb1:{NFSU2_TR(0x501cb1);
__builtin_memmove(gp(0x837f74),(R+0),4);
}
B501cb6:{NFSU2_TR(0x501cb6);
__builtin_memmove(gp(0x837f78),(R+0),4);
}
B501cbb:{NFSU2_TR(0x501cbb);
__builtin_memmove(gp(0x837f7c),(R+0),4);
}
B501cc0:{NFSU2_TR(0x501cc0);
__builtin_memmove(gp(0x837f80),(R+0),4);
}
B501cc5:{NFSU2_TR(0x501cc5);
__builtin_memmove(gp(0x837f84),(R+0),4);
}
B501cca:{NFSU2_TR(0x501cca);
__builtin_memmove(gp(0x837f88),(R+0),4);
}
B501ccf:{NFSU2_TR(0x501ccf);
__builtin_memmove(gp(0x837f8c),(R+0),4);
}
B501cd4:{NFSU2_TR(0x501cd4);
__builtin_memmove(gp(0x837f90),(R+0),4);
}
B501cd9:{NFSU2_TR(0x501cd9);
s4(0x837f94,u32(0x20ull));
}
B501ce3:{NFSU2_TR(0x501ce3);
w4(R+0,u32(0x1bull));
}
B501ce8:{NFSU2_TR(0x501ce8);
__builtin_memmove(gp(0x837fa0),(R+0),4);
}
B501ced:{NFSU2_TR(0x501ced);
__builtin_memmove(gp(0x837fa8),(R+0),4);
}
B501cf2:{NFSU2_TR(0x501cf2);
w4(R+0,u32(0x17ull));
}
B501cf7:{NFSU2_TR(0x501cf7);
s4(0x837f98,u32(0x19ull));
}
B501d01:{NFSU2_TR(0x501d01);
s4(0x837f9c,u32(0x1aull));
}
B501d0b:{NFSU2_TR(0x501d0b);
s4(0x837fa4,u32(0x1cull));
}
B501d15:{NFSU2_TR(0x501d15);
s4(0x837fac,u32(0x18ull));
}
B501d1f:{NFSU2_TR(0x501d1f);
s4(0x837fb0,u32(0x23ull));
}
B501d29:{NFSU2_TR(0x501d29);
s4(0x837fb4,u32(0x24ull));
}
B501d33:{NFSU2_TR(0x501d33);
s4(0x837fb8,u32(0x1dull));
}
B501d3d:{NFSU2_TR(0x501d3d);
__builtin_memmove(gp(0x837fbc),(R+0),4);
}
B501d42:{NFSU2_TR(0x501d42);
__builtin_memmove(gp(0x837fc0),(R+0),4);
}
B501d47:{NFSU2_TR(0x501d47);
__builtin_memmove(gp(0x837fc4),(R+0),4);
}
B501d4c:{NFSU2_TR(0x501d4c);
__builtin_memmove(gp(0x837fc8),(R+0),4);
}
B501d51:{NFSU2_TR(0x501d51);
s4(0x837dac,u32(0x21ull));
}
B501d5b:{NFSU2_TR(0x501d5b);
__builtin_memmove(gp(0x837fcc),(R+4),4);
}
B501d61:{NFSU2_TR(0x501d61);
__builtin_memmove(gp(0x837fd0),(R+4),4);
}
B501d67:{NFSU2_TR(0x501d67);
__builtin_memmove(gp(0x837fd4),(R+4),4);
}
B501d6d:{NFSU2_TR(0x501d6d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B501d6e:{NFSU2_TR(0x501d6e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B501d70:L501d70:{c.instructions+=5;NFSU2_TR(0x501d70);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B501d71:{NFSU2_TR(0x501d71);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B501d75:{NFSU2_TR(0x501d75);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x3full)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3full))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B501d78:{NFSU2_TR(0x501d78);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B501d79:{NFSU2_TR(0x501d79);
if(r1(R+518)){{goto L501f1f;}}
}
B501d7f:L501d7f:{c.instructions+=1;NFSU2_TR(0x501d7f);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L501e89;}}
}
B501d85:L501d85:{c.instructions+=2;NFSU2_TR(0x501d85);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x43ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x43ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B501d88:{NFSU2_TR(0x501d88);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L501e89;}}
}
B501d8e:L501d8e:{c.instructions+=5;NFSU2_TR(0x501d8e);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B501d92:{NFSU2_TR(0x501d92);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x5ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(s32(s8(r1(U+4)))));
}
B501d96:{NFSU2_TR(0x501d96);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x1full))));
}
B501d99:{NFSU2_TR(0x501d99);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0x1bull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x1bull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x1bull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B501d9c:{NFSU2_TR(0x501d9c);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L501ed5;}}
}
B501da2:L501da2:{c.instructions+=1;NFSU2_TR(0x501da2);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x502020ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B501da9:L501da9:{c.instructions+=4;NFSU2_TR(0x501da9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B501daa:{NFSU2_TR(0x501daa);
w4(R+0,u32(0x29ull));
}
B501daf:{NFSU2_TR(0x501daf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B501db0:{NFSU2_TR(0x501db0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B501db1:L501db1:{c.instructions+=4;NFSU2_TR(0x501db1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B501db2:{NFSU2_TR(0x501db2);
w4(R+0,u32(0x2aull));
}
B501db7:{NFSU2_TR(0x501db7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B501db8:{NFSU2_TR(0x501db8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B501db9:L501db9:{c.instructions+=4;NFSU2_TR(0x501db9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B501dba:{NFSU2_TR(0x501dba);
w4(R+0,u32(0x2bull));
}
B501dbf:{NFSU2_TR(0x501dbf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B501dc0:{NFSU2_TR(0x501dc0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B501dc1:L501dc1:{c.instructions+=4;NFSU2_TR(0x501dc1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B501dc2:{NFSU2_TR(0x501dc2);
w4(R+0,u32(0x2cull));
}
B501dc7:{NFSU2_TR(0x501dc7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B501dc8:{NFSU2_TR(0x501dc8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B501dc9:L501dc9:{c.instructions+=4;NFSU2_TR(0x501dc9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B501dca:{NFSU2_TR(0x501dca);
w4(R+0,u32(0x2dull));
}
B501dcf:{NFSU2_TR(0x501dcf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B501dd0:{NFSU2_TR(0x501dd0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B501dd1:L501dd1:{c.instructions+=4;NFSU2_TR(0x501dd1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B501dd2:{NFSU2_TR(0x501dd2);
w4(R+0,u32(0x2eull));
}
B501dd7:{NFSU2_TR(0x501dd7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B501dd8:{NFSU2_TR(0x501dd8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B501dd9:L501dd9:{c.instructions+=4;NFSU2_TR(0x501dd9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B501dda:{NFSU2_TR(0x501dda);
w4(R+0,u32(0x2full));
}
B501ddf:{NFSU2_TR(0x501ddf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B501de0:{NFSU2_TR(0x501de0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B501de1:L501de1:{c.instructions+=4;NFSU2_TR(0x501de1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B501de2:{NFSU2_TR(0x501de2);
w4(R+0,u32(0x30ull));
}
B501de7:{NFSU2_TR(0x501de7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B501de8:{NFSU2_TR(0x501de8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B501de9:L501de9:{c.instructions+=4;NFSU2_TR(0x501de9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B501dea:{NFSU2_TR(0x501dea);
w4(R+0,u32(0x31ull));
}
B501def:{NFSU2_TR(0x501def);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B501df0:{NFSU2_TR(0x501df0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B501df1:L501df1:{c.instructions+=4;NFSU2_TR(0x501df1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B501df2:{NFSU2_TR(0x501df2);
w4(R+0,u32(0x32ull));
}
B501df7:{NFSU2_TR(0x501df7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B501df8:{NFSU2_TR(0x501df8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B501df9:L501df9:{c.instructions+=4;NFSU2_TR(0x501df9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B501dfa:{NFSU2_TR(0x501dfa);
w4(R+0,u32(0x33ull));
}
B501dff:{NFSU2_TR(0x501dff);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B501e00:{NFSU2_TR(0x501e00);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B501e01:L501e01:{c.instructions+=4;NFSU2_TR(0x501e01);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B501e02:{NFSU2_TR(0x501e02);
w4(R+0,u32(0x34ull));
}
B501e07:{NFSU2_TR(0x501e07);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B501e08:{NFSU2_TR(0x501e08);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B501e09:L501e09:{c.instructions+=4;NFSU2_TR(0x501e09);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B501e0a:{NFSU2_TR(0x501e0a);
w4(R+0,u32(0x35ull));
}
B501e0f:{NFSU2_TR(0x501e0f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B501e10:{NFSU2_TR(0x501e10);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B501e11:L501e11:{c.instructions+=4;NFSU2_TR(0x501e11);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B501e12:{NFSU2_TR(0x501e12);
w4(R+0,u32(0x36ull));
}
B501e17:{NFSU2_TR(0x501e17);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B501e18:{NFSU2_TR(0x501e18);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B501e19:L501e19:{c.instructions+=4;NFSU2_TR(0x501e19);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B501e1a:{NFSU2_TR(0x501e1a);
w4(R+0,u32(0x38ull));
}
B501e1f:{NFSU2_TR(0x501e1f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B501e20:{NFSU2_TR(0x501e20);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B501e21:L501e21:{c.instructions+=4;NFSU2_TR(0x501e21);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B501e22:{NFSU2_TR(0x501e22);
w4(R+0,u32(0x39ull));
}
B501e27:{NFSU2_TR(0x501e27);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B501e28:{NFSU2_TR(0x501e28);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B501e29:L501e29:{c.instructions+=4;NFSU2_TR(0x501e29);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B501e2a:{NFSU2_TR(0x501e2a);
w4(R+0,u32(0x3aull));
}
B501e2f:{NFSU2_TR(0x501e2f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B501e30:{NFSU2_TR(0x501e30);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B501e31:L501e31:{c.instructions+=4;NFSU2_TR(0x501e31);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B501e32:{NFSU2_TR(0x501e32);
w4(R+0,u32(0x3bull));
}
B501e37:{NFSU2_TR(0x501e37);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B501e38:{NFSU2_TR(0x501e38);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B501e39:L501e39:{c.instructions+=4;NFSU2_TR(0x501e39);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B501e3a:{NFSU2_TR(0x501e3a);
w4(R+0,u32(0x41ull));
}
B501e3f:{NFSU2_TR(0x501e3f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B501e40:{NFSU2_TR(0x501e40);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B501e41:L501e41:{c.instructions+=4;NFSU2_TR(0x501e41);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B501e42:{NFSU2_TR(0x501e42);
w4(R+0,u32(0x42ull));
}
B501e47:{NFSU2_TR(0x501e47);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B501e48:{NFSU2_TR(0x501e48);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B501e49:L501e49:{c.instructions+=4;NFSU2_TR(0x501e49);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B501e4a:{NFSU2_TR(0x501e4a);
w4(R+0,u32(0x43ull));
}
B501e4f:{NFSU2_TR(0x501e4f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B501e50:{NFSU2_TR(0x501e50);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B501e51:L501e51:{c.instructions+=4;NFSU2_TR(0x501e51);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B501e52:{NFSU2_TR(0x501e52);
w4(R+0,u32(0x3cull));
}
B501e57:{NFSU2_TR(0x501e57);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B501e58:{NFSU2_TR(0x501e58);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B501e59:L501e59:{c.instructions+=4;NFSU2_TR(0x501e59);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B501e5a:{NFSU2_TR(0x501e5a);
w4(R+0,u32(0x3dull));
}
B501e5f:{NFSU2_TR(0x501e5f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B501e60:{NFSU2_TR(0x501e60);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B501e61:L501e61:{c.instructions+=4;NFSU2_TR(0x501e61);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B501e62:{NFSU2_TR(0x501e62);
w4(R+0,u32(0x40ull));
}
B501e67:{NFSU2_TR(0x501e67);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B501e68:{NFSU2_TR(0x501e68);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B501e69:L501e69:{c.instructions+=4;NFSU2_TR(0x501e69);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B501e6a:{NFSU2_TR(0x501e6a);
w4(R+0,u32(0x3eull));
}
B501e6f:{NFSU2_TR(0x501e6f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B501e70:{NFSU2_TR(0x501e70);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B501e71:L501e71:{c.instructions+=4;NFSU2_TR(0x501e71);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B501e72:{NFSU2_TR(0x501e72);
w4(R+0,u32(0x37ull));
}
B501e77:{NFSU2_TR(0x501e77);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B501e78:{NFSU2_TR(0x501e78);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B501e79:L501e79:{c.instructions+=4;NFSU2_TR(0x501e79);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B501e7a:{NFSU2_TR(0x501e7a);
w4(R+0,u32(0x3full));
}
B501e7f:{NFSU2_TR(0x501e7f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B501e80:{NFSU2_TR(0x501e80);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B501e81:L501e81:{c.instructions+=4;NFSU2_TR(0x501e81);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B501e82:{NFSU2_TR(0x501e82);
w4(R+0,u32(0x44ull));
}
B501e87:{NFSU2_TR(0x501e87);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B501e88:{NFSU2_TR(0x501e88);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B501e89:L501e89:{c.instructions+=5;NFSU2_TR(0x501e89);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B501e8d:{NFSU2_TR(0x501e8d);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B501e8f:{NFSU2_TR(0x501e8f);
u8 U[4];
w4(U+0,u32(0x721aff7cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B501e94:{NFSU2_TR(0x501e94);
__builtin_memmove((R+4),(R+28),4);
}
B501e96:{NFSU2_TR(0x501e96);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x501e9bull));
TAIL_STATIC(0x61b500u,61b);
}
B501e9b:L501e9b:{c.instructions+=2;NFSU2_TR(0x501e9b);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B501e9d:{NFSU2_TR(0x501e9d);
if(r1(R+518)){{goto L501eda;}}
}
B501e9f:L501e9f:{c.instructions+=3;NFSU2_TR(0x501e9f);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfffffff9ull))));
__builtin_memmove((R+0),(U+0),4);
}
B501ea2:{NFSU2_TR(0x501ea2);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0x19ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x19ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x19ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B501ea5:{NFSU2_TR(0x501ea5);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L501ed5;}}
}
B501ea7:L501ea7:{c.instructions+=2;NFSU2_TR(0x501ea7);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x5020a4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(r1(U+4)));
}
B501eae:{NFSU2_TR(0x501eae);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x502090ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B501eb5:L501eb5:{c.instructions+=4;NFSU2_TR(0x501eb5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B501eb6:{NFSU2_TR(0x501eb6);
w4(R+0,u32(0x4bull));
}
B501ebb:{NFSU2_TR(0x501ebb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B501ebc:{NFSU2_TR(0x501ebc);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B501ebd:L501ebd:{c.instructions+=4;NFSU2_TR(0x501ebd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B501ebe:{NFSU2_TR(0x501ebe);
w4(R+0,u32(0x4aull));
}
B501ec3:{NFSU2_TR(0x501ec3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B501ec4:{NFSU2_TR(0x501ec4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B501ec5:L501ec5:{c.instructions+=4;NFSU2_TR(0x501ec5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B501ec6:{NFSU2_TR(0x501ec6);
w4(R+0,u32(0x45ull));
}
B501ecb:{NFSU2_TR(0x501ecb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B501ecc:{NFSU2_TR(0x501ecc);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B501ecd:L501ecd:{c.instructions+=4;NFSU2_TR(0x501ecd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B501ece:{NFSU2_TR(0x501ece);
w4(R+0,u32(0x46ull));
}
B501ed3:{NFSU2_TR(0x501ed3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B501ed4:{NFSU2_TR(0x501ed4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B501ed5:L501ed5:{c.instructions+=4;NFSU2_TR(0x501ed5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B501ed6:{NFSU2_TR(0x501ed6);
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
B501ed8:{NFSU2_TR(0x501ed8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B501ed9:{NFSU2_TR(0x501ed9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B501eda:L501eda:{c.instructions+=2;NFSU2_TR(0x501eda);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1dull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B501edd:{NFSU2_TR(0x501edd);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L501efc;}}
}
B501edf:L501edf:{c.instructions+=4;NFSU2_TR(0x501edf);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B501ee1:{NFSU2_TR(0x501ee1);
u8 U[4];
w4(U+0,u32(0xebb03e66ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B501ee6:{NFSU2_TR(0x501ee6);
__builtin_memmove((R+4),(R+28),4);
}
B501ee8:{NFSU2_TR(0x501ee8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x501eedull));
TAIL_STATIC(0x61b500u,61b);
}
B501eed:L501eed:{c.instructions+=2;NFSU2_TR(0x501eed);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0xc8d1a75eull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0xc8d1a75eull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0xc8d1a75eull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B501ef2:{NFSU2_TR(0x501ef2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L501f15;}}
}
B501ef4:L501ef4:{c.instructions+=4;NFSU2_TR(0x501ef4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B501ef5:{NFSU2_TR(0x501ef5);
w4(R+0,u32(0x21ull));
}
B501efa:{NFSU2_TR(0x501efa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B501efb:{NFSU2_TR(0x501efb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B501efc:L501efc:{c.instructions+=2;NFSU2_TR(0x501efc);
u8 U[14];
__builtin_memmove((U+6),(R+24),4);
w1(R+512,u8((r4(U+6))<(u32(0x9ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x9ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x9ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B501eff:{NFSU2_TR(0x501eff);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L501f15;}}
}
B501f01:L501f01:{c.instructions+=5;NFSU2_TR(0x501f01);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x5ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B501f04:{NFSU2_TR(0x501f04);
w1(R+8,u8(u32(r1(R+8))&u32(u8(0x1full))));
}
B501f07:{NFSU2_TR(0x501f07);
u8 U[5];
__builtin_memmove((U+3),(R+8),1);
w1(R+512,u8((r1(U+3))<(u8(0x5ull))));
w1(R+523,sborrow<u8>(r1(U+3),u8(0x5ull)));
w1(U+4,u8(u32(r1(U+3))-u32(u8(0x5ull))));
w1(R+519,u8(s8(r1(U+4))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+4))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+4))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B501f0a:{NFSU2_TR(0x501f0a);
w4(R+0,u32(0x22ull));
}
B501f0f:{NFSU2_TR(0x501f0f);
if(r1(R+518)){TAIL_STATIC(0x50201bu,502);}
}
B501f15:L501f15:{c.instructions+=4;NFSU2_TR(0x501f15);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x837d30ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B501f1c:{NFSU2_TR(0x501f1c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B501f1d:{NFSU2_TR(0x501f1d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B501f1e:{NFSU2_TR(0x501f1e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B501f1f:L501f1f:{c.instructions+=5;NFSU2_TR(0x501f1f);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B501f23:{NFSU2_TR(0x501f23);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B501f25:{NFSU2_TR(0x501f25);
u8 U[4];
w4(U+0,u32(0xebb03e66ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B501f2a:{NFSU2_TR(0x501f2a);
__builtin_memmove((R+4),(R+24),4);
}
B501f2c:{NFSU2_TR(0x501f2c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x501f31ull));
TAIL_STATIC(0x61b500u,61b);
}
B501f31:L501f31:{c.instructions+=3;NFSU2_TR(0x501f31);
u8 U[4];
w4(U+0,u32(0x79aac0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B501f36:{NFSU2_TR(0x501f36);
__builtin_memmove((R+28),(R+0),4);
}
B501f38:{NFSU2_TR(0x501f38);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x501f3dull));
TAIL_STATIC(0x43db50u,43d);
}
B501f3d:L501f3d:{c.instructions+=3;NFSU2_TR(0x501f3d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B501f40:{NFSU2_TR(0x501f40);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(R+28))<(r4(U+6))));
w1(R+523,sborrow<u32>(r4(R+28),r4(U+6)));
w4(U+10,u32(u32(r4(R+28))-u32(r4(U+6))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B501f42:{NFSU2_TR(0x501f42);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L501f4c;}}
}
B501f44:L501f44:{c.instructions+=4;NFSU2_TR(0x501f44);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B501f45:{NFSU2_TR(0x501f45);
w4(R+0,u32(0x26ull));
}
B501f4a:{NFSU2_TR(0x501f4a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B501f4b:{NFSU2_TR(0x501f4b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B501f4c:L501f4c:{c.instructions+=4;NFSU2_TR(0x501f4c);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B501f4e:{NFSU2_TR(0x501f4e);
u8 U[4];
w4(U+0,u32(0xebb03e66ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B501f53:{NFSU2_TR(0x501f53);
__builtin_memmove((R+4),(R+24),4);
}
B501f55:{NFSU2_TR(0x501f55);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x501f5aull));
TAIL_STATIC(0x61b500u,61b);
}
B501f5a:L501f5a:{c.instructions+=3;NFSU2_TR(0x501f5a);
u8 U[4];
w4(U+0,u32(0x79aab0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B501f5f:{NFSU2_TR(0x501f5f);
__builtin_memmove((R+28),(R+0),4);
}
B501f61:{NFSU2_TR(0x501f61);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x501f66ull));
TAIL_STATIC(0x43db50u,43d);
}
B501f66:L501f66:{c.instructions+=3;NFSU2_TR(0x501f66);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B501f69:{NFSU2_TR(0x501f69);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(R+28))<(r4(U+6))));
w1(R+523,sborrow<u32>(r4(R+28),r4(U+6)));
w4(U+10,u32(u32(r4(R+28))-u32(r4(U+6))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B501f6b:{NFSU2_TR(0x501f6b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L501f75;}}
}
B501f6d:L501f6d:{c.instructions+=4;NFSU2_TR(0x501f6d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B501f6e:{NFSU2_TR(0x501f6e);
w4(R+0,u32(0x25ull));
}
B501f73:{NFSU2_TR(0x501f73);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B501f74:{NFSU2_TR(0x501f74);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B501f75:L501f75:{c.instructions+=4;NFSU2_TR(0x501f75);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B501f77:{NFSU2_TR(0x501f77);
u8 U[4];
w4(U+0,u32(0xebb03e66ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B501f7c:{NFSU2_TR(0x501f7c);
__builtin_memmove((R+4),(R+24),4);
}
B501f7e:{NFSU2_TR(0x501f7e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x501f83ull));
TAIL_STATIC(0x61b500u,61b);
}
B501f83:L501f83:{c.instructions+=3;NFSU2_TR(0x501f83);
u8 U[4];
w4(U+0,u32(0x79aab8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B501f88:{NFSU2_TR(0x501f88);
__builtin_memmove((R+28),(R+0),4);
}
B501f8a:{NFSU2_TR(0x501f8a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x501f8full));
TAIL_STATIC(0x43db50u,43d);
}
B501f8f:L501f8f:{c.instructions+=3;NFSU2_TR(0x501f8f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B501f92:{NFSU2_TR(0x501f92);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(R+28))<(r4(U+6))));
w1(R+523,sborrow<u32>(r4(R+28),r4(U+6)));
w4(U+10,u32(u32(r4(R+28))-u32(r4(U+6))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B501f94:{NFSU2_TR(0x501f94);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L501f9e;}}
}
B501f96:L501f96:{c.instructions+=4;NFSU2_TR(0x501f96);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B501f97:{NFSU2_TR(0x501f97);
w4(R+0,u32(0x27ull));
}
B501f9c:{NFSU2_TR(0x501f9c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B501f9d:{NFSU2_TR(0x501f9d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B501f9e:L501f9e:{c.instructions+=4;NFSU2_TR(0x501f9e);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B501fa0:{NFSU2_TR(0x501fa0);
u8 U[4];
w4(U+0,u32(0xebb03e66ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B501fa5:{NFSU2_TR(0x501fa5);
__builtin_memmove((R+4),(R+24),4);
}
B501fa7:{NFSU2_TR(0x501fa7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x501facull));
TAIL_STATIC(0x61b500u,61b);
}
B501fac:L501fac:{c.instructions+=3;NFSU2_TR(0x501fac);
u8 U[4];
w4(U+0,u32(0x79aac8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B501fb1:{NFSU2_TR(0x501fb1);
__builtin_memmove((R+28),(R+0),4);
}
B501fb3:{NFSU2_TR(0x501fb3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x501fb8ull));
TAIL_STATIC(0x43db50u,43d);
}
B501fb8:L501fb8:{c.instructions+=3;NFSU2_TR(0x501fb8);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B501fbb:{NFSU2_TR(0x501fbb);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(R+28))<(r4(U+6))));
w1(R+523,sborrow<u32>(r4(R+28),r4(U+6)));
w4(U+10,u32(u32(r4(R+28))-u32(r4(U+6))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B501fbd:{NFSU2_TR(0x501fbd);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L501fc7;}}
}
B501fbf:L501fbf:{c.instructions+=4;NFSU2_TR(0x501fbf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B501fc0:{NFSU2_TR(0x501fc0);
w4(R+0,u32(0x4eull));
}
B501fc5:{NFSU2_TR(0x501fc5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B501fc6:{NFSU2_TR(0x501fc6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B501fc7:L501fc7:{c.instructions+=4;NFSU2_TR(0x501fc7);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B501fc9:{NFSU2_TR(0x501fc9);
u8 U[4];
w4(U+0,u32(0xebb03e66ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B501fce:{NFSU2_TR(0x501fce);
__builtin_memmove((R+4),(R+24),4);
}
B501fd0:{NFSU2_TR(0x501fd0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x501fd5ull));
TAIL_STATIC(0x61b500u,61b);
}
B501fd5:L501fd5:{c.instructions+=3;NFSU2_TR(0x501fd5);
u8 U[4];
w4(U+0,u32(0x79aad0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B501fda:{NFSU2_TR(0x501fda);
__builtin_memmove((R+28),(R+0),4);
}
B501fdc:{NFSU2_TR(0x501fdc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x501fe1ull));
TAIL_STATIC(0x43db50u,43d);
}
B501fe1:L501fe1:{c.instructions+=3;NFSU2_TR(0x501fe1);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B501fe4:{NFSU2_TR(0x501fe4);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(R+28))<(r4(U+6))));
w1(R+523,sborrow<u32>(r4(R+28),r4(U+6)));
w4(U+10,u32(u32(r4(R+28))-u32(r4(U+6))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B501fe6:{NFSU2_TR(0x501fe6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L501ff0;}}
}
B501fe8:L501fe8:{c.instructions+=4;NFSU2_TR(0x501fe8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B501fe9:{NFSU2_TR(0x501fe9);
w4(R+0,u32(0x4dull));
}
B501fee:{NFSU2_TR(0x501fee);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B501fef:{NFSU2_TR(0x501fef);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B501ff0:L501ff0:{c.instructions+=4;NFSU2_TR(0x501ff0);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B501ff2:{NFSU2_TR(0x501ff2);
u8 U[4];
w4(U+0,u32(0xebb03e66ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B501ff7:{NFSU2_TR(0x501ff7);
__builtin_memmove((R+4),(R+24),4);
}
B501ff9:{NFSU2_TR(0x501ff9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x501ffeull));
TAIL_STATIC(0x61b500u,61b);
}
B501ffe:L501ffe:{c.instructions+=1;NFSU2_TR(0x501ffe);
u8 U[4];
w4(U+0,u32(0x79aad4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
TAIL_STATIC(0x502003u,502);
}
XIT:NFSU2_TR_EXIT(0x501,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
