#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_402(u8* __restrict R,Cpu& c);
u32 body_40c(u8* __restrict R,Cpu& c);
u32 body_43c(u8* __restrict R,Cpu& c);
u32 body_43f(u8* __restrict R,Cpu& c);
u32 body_575(u8* __restrict R,Cpu& c);
u32 body_576(u8* __restrict R,Cpu& c);
u32 body_579(u8* __restrict R,Cpu& c);
u32 body_5d8(u8* __restrict R,Cpu& c);
u32 body_75b(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x401,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x401,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_401(u8* __restrict R,Cpu& c);
u32 page_401(Cpu& c){return body_401(c.regs.data(),c);}
__attribute__((noinline)) u32 body_401(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x401000:goto L401000;
case 0x401004:c.instructions+=6;goto B401004;
case 0x401005:c.instructions+=5;goto B401005;
case 0x401009:c.instructions+=4;goto B401009;
case 0x40100b:c.instructions+=3;goto B40100b;
case 0x40100c:c.instructions+=2;goto B40100c;
case 0x401010:c.instructions+=1;goto B401010;
case 0x401013:goto L401013;
case 0x401015:goto L401015;
case 0x401017:c.instructions+=1;goto B401017;
case 0x40101a:goto L40101a;
case 0x40101c:goto L40101c;
case 0x40101d:c.instructions+=2;goto B40101d;
case 0x40101e:c.instructions+=1;goto B40101e;
case 0x401020:goto L401020;
case 0x401024:c.instructions+=2;goto B401024;
case 0x40102a:c.instructions+=1;goto B40102a;
case 0x40102f:goto L40102f;
case 0x401031:c.instructions+=9;goto B401031;
case 0x401036:c.instructions+=8;goto B401036;
case 0x401038:c.instructions+=7;goto B401038;
case 0x40103a:c.instructions+=6;goto B40103a;
case 0x40103c:c.instructions+=5;goto B40103c;
case 0x40103f:c.instructions+=4;goto B40103f;
case 0x401041:c.instructions+=3;goto B401041;
case 0x401044:c.instructions+=2;goto B401044;
case 0x401046:c.instructions+=1;goto B401046;
case 0x401050:goto L401050;
case 0x401054:c.instructions+=4;goto B401054;
case 0x401058:c.instructions+=3;goto B401058;
case 0x40105a:c.instructions+=2;goto B40105a;
case 0x40105d:c.instructions+=1;goto B40105d;
case 0x40105f:goto L40105f;
case 0x401063:c.instructions+=1;goto B401063;
case 0x401064:goto L401064;
case 0x401068:c.instructions+=1;goto B401068;
case 0x401070:goto L401070;
case 0x401074:c.instructions+=4;goto B401074;
case 0x401078:c.instructions+=3;goto B401078;
case 0x40107a:c.instructions+=2;goto B40107a;
case 0x40107d:c.instructions+=1;goto B40107d;
case 0x40107f:goto L40107f;
case 0x401083:c.instructions+=1;goto B401083;
case 0x401084:goto L401084;
case 0x401088:c.instructions+=1;goto B401088;
case 0x401090:goto L401090;
case 0x401094:c.instructions+=4;goto B401094;
case 0x401098:c.instructions+=3;goto B401098;
case 0x40109a:c.instructions+=2;goto B40109a;
case 0x40109d:c.instructions+=1;goto B40109d;
case 0x40109f:goto L40109f;
case 0x4010a3:c.instructions+=1;goto B4010a3;
case 0x4010a5:goto L4010a5;
case 0x4010a9:goto L4010a9;
case 0x4010ad:c.instructions+=4;goto B4010ad;
case 0x4010af:c.instructions+=3;goto B4010af;
case 0x4010b1:c.instructions+=2;goto B4010b1;
case 0x4010b4:c.instructions+=1;goto B4010b4;
case 0x4010b6:goto L4010b6;
case 0x4010b8:c.instructions+=1;goto B4010b8;
case 0x4010bc:goto L4010bc;
case 0x4010c0:goto L4010c0;
case 0x4010c4:c.instructions+=6;goto B4010c4;
case 0x4010c8:c.instructions+=5;goto B4010c8;
case 0x4010ca:c.instructions+=4;goto B4010ca;
case 0x4010ce:c.instructions+=3;goto B4010ce;
case 0x4010d0:c.instructions+=2;goto B4010d0;
case 0x4010d3:c.instructions+=1;goto B4010d3;
case 0x4010d5:goto L4010d5;
case 0x4010da:c.instructions+=1;goto B4010da;
case 0x4010db:goto L4010db;
case 0x4010dd:c.instructions+=1;goto B4010dd;
case 0x4010e0:goto L4010e0;
case 0x4010e4:c.instructions+=2;goto B4010e4;
case 0x4010e5:c.instructions+=1;goto B4010e5;
case 0x4010ea:goto L4010ea;
case 0x4010ef:c.instructions+=4;goto B4010ef;
case 0x4010f2:c.instructions+=3;goto B4010f2;
case 0x4010f4:c.instructions+=2;goto B4010f4;
case 0x4010f7:c.instructions+=1;goto B4010f7;
case 0x401100:goto L401100;
case 0x401104:c.instructions+=4;goto B401104;
case 0x401105:c.instructions+=3;goto B401105;
case 0x40110b:c.instructions+=2;goto B40110b;
case 0x40110e:c.instructions+=1;goto B40110e;
case 0x401113:goto L401113;
case 0x401114:c.instructions+=1;goto B401114;
case 0x401120:goto L401120;
case 0x401124:c.instructions+=12;goto B401124;
case 0x401127:c.instructions+=11;goto B401127;
case 0x40112b:c.instructions+=10;goto B40112b;
case 0x40112e:c.instructions+=9;goto B40112e;
case 0x401130:c.instructions+=8;goto B401130;
case 0x401134:c.instructions+=7;goto B401134;
case 0x401136:c.instructions+=6;goto B401136;
case 0x401138:c.instructions+=5;goto B401138;
case 0x40113a:c.instructions+=4;goto B40113a;
case 0x40113c:c.instructions+=3;goto B40113c;
case 0x40113f:c.instructions+=2;goto B40113f;
case 0x401141:c.instructions+=1;goto B401141;
case 0x401150:goto L401150;
case 0x401154:c.instructions+=14;goto B401154;
case 0x401158:c.instructions+=13;goto B401158;
case 0x40115a:c.instructions+=12;goto B40115a;
case 0x40115c:c.instructions+=11;goto B40115c;
case 0x40115f:c.instructions+=10;goto B40115f;
case 0x401162:c.instructions+=9;goto B401162;
case 0x401164:c.instructions+=8;goto B401164;
case 0x401166:c.instructions+=7;goto B401166;
case 0x401168:c.instructions+=6;goto B401168;
case 0x40116a:c.instructions+=5;goto B40116a;
case 0x40116c:c.instructions+=4;goto B40116c;
case 0x40116e:c.instructions+=3;goto B40116e;
case 0x401170:c.instructions+=2;goto B401170;
case 0x401172:c.instructions+=1;goto B401172;
case 0x401180:goto L401180;
case 0x401184:c.instructions+=5;goto B401184;
case 0x401187:c.instructions+=4;goto B401187;
case 0x401188:c.instructions+=3;goto B401188;
case 0x40118c:c.instructions+=2;goto B40118c;
case 0x40118d:c.instructions+=1;goto B40118d;
case 0x401192:goto L401192;
case 0x401196:c.instructions+=6;goto B401196;
case 0x40119a:c.instructions+=5;goto B40119a;
case 0x40119e:c.instructions+=4;goto B40119e;
case 0x4011a0:c.instructions+=3;goto B4011a0;
case 0x4011a3:c.instructions+=2;goto B4011a3;
case 0x4011a6:c.instructions+=1;goto B4011a6;
case 0x4011b0:goto L4011b0;
case 0x4011b4:c.instructions+=17;goto B4011b4;
case 0x4011b7:c.instructions+=16;goto B4011b7;
case 0x4011bb:c.instructions+=15;goto B4011bb;
case 0x4011be:c.instructions+=14;goto B4011be;
case 0x4011c1:c.instructions+=13;goto B4011c1;
case 0x4011c4:c.instructions+=12;goto B4011c4;
case 0x4011c8:c.instructions+=11;goto B4011c8;
case 0x4011ca:c.instructions+=10;goto B4011ca;
case 0x4011ce:c.instructions+=9;goto B4011ce;
case 0x4011d0:c.instructions+=8;goto B4011d0;
case 0x4011d2:c.instructions+=7;goto B4011d2;
case 0x4011d4:c.instructions+=6;goto B4011d4;
case 0x4011d6:c.instructions+=5;goto B4011d6;
case 0x4011d9:c.instructions+=4;goto B4011d9;
case 0x4011db:c.instructions+=3;goto B4011db;
case 0x4011df:c.instructions+=2;goto B4011df;
case 0x4011e2:c.instructions+=1;goto B4011e2;
case 0x4011f0:goto L4011f0;
case 0x4011f4:c.instructions+=12;goto B4011f4;
case 0x4011f7:c.instructions+=11;goto B4011f7;
case 0x4011fa:c.instructions+=10;goto B4011fa;
case 0x4011fe:c.instructions+=9;goto B4011fe;
case 0x401200:c.instructions+=8;goto B401200;
case 0x401204:c.instructions+=7;goto B401204;
case 0x401206:c.instructions+=6;goto B401206;
case 0x401208:c.instructions+=5;goto B401208;
case 0x40120c:c.instructions+=4;goto B40120c;
case 0x40120f:c.instructions+=3;goto B40120f;
case 0x401213:c.instructions+=2;goto B401213;
case 0x401216:c.instructions+=1;goto B401216;
case 0x401220:goto L401220;
case 0x401224:c.instructions+=12;goto B401224;
case 0x401227:c.instructions+=11;goto B401227;
case 0x40122a:c.instructions+=10;goto B40122a;
case 0x40122d:c.instructions+=9;goto B40122d;
case 0x401230:c.instructions+=8;goto B401230;
case 0x401232:c.instructions+=7;goto B401232;
case 0x401236:c.instructions+=6;goto B401236;
case 0x401238:c.instructions+=5;goto B401238;
case 0x40123a:c.instructions+=4;goto B40123a;
case 0x40123c:c.instructions+=3;goto B40123c;
case 0x40123f:c.instructions+=2;goto B40123f;
case 0x401242:c.instructions+=1;goto B401242;
case 0x401250:goto L401250;
case 0x401253:c.instructions+=12;goto B401253;
case 0x401257:c.instructions+=11;goto B401257;
case 0x40125a:c.instructions+=10;goto B40125a;
case 0x40125d:c.instructions+=9;goto B40125d;
case 0x401260:c.instructions+=8;goto B401260;
case 0x401262:c.instructions+=7;goto B401262;
case 0x401264:c.instructions+=6;goto B401264;
case 0x401268:c.instructions+=5;goto B401268;
case 0x40126a:c.instructions+=4;goto B40126a;
case 0x40126c:c.instructions+=3;goto B40126c;
case 0x40126f:c.instructions+=2;goto B40126f;
case 0x401272:c.instructions+=1;goto B401272;
case 0x401280:goto L401280;
case 0x401284:c.instructions+=11;goto B401284;
case 0x401287:c.instructions+=10;goto B401287;
case 0x401289:c.instructions+=9;goto B401289;
case 0x40128c:c.instructions+=8;goto B40128c;
case 0x401290:c.instructions+=7;goto B401290;
case 0x401294:c.instructions+=6;goto B401294;
case 0x401296:c.instructions+=5;goto B401296;
case 0x401299:c.instructions+=4;goto B401299;
case 0x40129b:c.instructions+=3;goto B40129b;
case 0x40129e:c.instructions+=2;goto B40129e;
case 0x4012a1:c.instructions+=1;goto B4012a1;
case 0x4012b0:goto L4012b0;
case 0x4012b4:c.instructions+=45;goto B4012b4;
case 0x4012b7:c.instructions+=44;goto B4012b7;
case 0x4012ba:c.instructions+=43;goto B4012ba;
case 0x4012bd:c.instructions+=42;goto B4012bd;
case 0x4012bf:c.instructions+=41;goto B4012bf;
case 0x4012c3:c.instructions+=40;goto B4012c3;
case 0x4012c5:c.instructions+=39;goto B4012c5;
case 0x4012c9:c.instructions+=38;goto B4012c9;
case 0x4012cc:c.instructions+=37;goto B4012cc;
case 0x4012ce:c.instructions+=36;goto B4012ce;
case 0x4012d2:c.instructions+=35;goto B4012d2;
case 0x4012d5:c.instructions+=34;goto B4012d5;
case 0x4012d8:c.instructions+=33;goto B4012d8;
case 0x4012db:c.instructions+=32;goto B4012db;
case 0x4012de:c.instructions+=31;goto B4012de;
case 0x4012e1:c.instructions+=30;goto B4012e1;
case 0x4012e5:c.instructions+=29;goto B4012e5;
case 0x4012e8:c.instructions+=28;goto B4012e8;
case 0x4012ea:c.instructions+=27;goto B4012ea;
case 0x4012ed:c.instructions+=26;goto B4012ed;
case 0x4012f0:c.instructions+=25;goto B4012f0;
case 0x4012f4:c.instructions+=24;goto B4012f4;
case 0x4012f7:c.instructions+=23;goto B4012f7;
case 0x4012fa:c.instructions+=22;goto B4012fa;
case 0x4012fd:c.instructions+=21;goto B4012fd;
case 0x401300:c.instructions+=20;goto B401300;
case 0x401303:c.instructions+=19;goto B401303;
case 0x401307:c.instructions+=18;goto B401307;
case 0x40130a:c.instructions+=17;goto B40130a;
case 0x40130c:c.instructions+=16;goto B40130c;
case 0x40130f:c.instructions+=15;goto B40130f;
case 0x401312:c.instructions+=14;goto B401312;
case 0x401316:c.instructions+=13;goto B401316;
case 0x401319:c.instructions+=12;goto B401319;
case 0x40131c:c.instructions+=11;goto B40131c;
case 0x40131f:c.instructions+=10;goto B40131f;
case 0x401322:c.instructions+=9;goto B401322;
case 0x401325:c.instructions+=8;goto B401325;
case 0x401328:c.instructions+=7;goto B401328;
case 0x40132a:c.instructions+=6;goto B40132a;
case 0x40132e:c.instructions+=5;goto B40132e;
case 0x401331:c.instructions+=4;goto B401331;
case 0x401334:c.instructions+=3;goto B401334;
case 0x401337:c.instructions+=2;goto B401337;
case 0x40133a:c.instructions+=1;goto B40133a;
case 0x401340:goto L401340;
case 0x401344:c.instructions+=43;goto B401344;
case 0x401347:c.instructions+=42;goto B401347;
case 0x40134a:c.instructions+=41;goto B40134a;
case 0x40134d:c.instructions+=40;goto B40134d;
case 0x40134f:c.instructions+=39;goto B40134f;
case 0x401353:c.instructions+=38;goto B401353;
case 0x401355:c.instructions+=37;goto B401355;
case 0x401359:c.instructions+=36;goto B401359;
case 0x40135c:c.instructions+=35;goto B40135c;
case 0x40135e:c.instructions+=34;goto B40135e;
case 0x401362:c.instructions+=33;goto B401362;
case 0x401365:c.instructions+=32;goto B401365;
case 0x401368:c.instructions+=31;goto B401368;
case 0x40136b:c.instructions+=30;goto B40136b;
case 0x40136e:c.instructions+=29;goto B40136e;
case 0x401371:c.instructions+=28;goto B401371;
case 0x401375:c.instructions+=27;goto B401375;
case 0x401378:c.instructions+=26;goto B401378;
case 0x40137a:c.instructions+=25;goto B40137a;
case 0x40137d:c.instructions+=24;goto B40137d;
case 0x401380:c.instructions+=23;goto B401380;
case 0x401384:c.instructions+=22;goto B401384;
case 0x401387:c.instructions+=21;goto B401387;
case 0x40138a:c.instructions+=20;goto B40138a;
case 0x40138d:c.instructions+=19;goto B40138d;
case 0x401390:c.instructions+=18;goto B401390;
case 0x401393:c.instructions+=17;goto B401393;
case 0x401396:c.instructions+=16;goto B401396;
case 0x401399:c.instructions+=15;goto B401399;
case 0x40139b:c.instructions+=14;goto B40139b;
case 0x40139f:c.instructions+=13;goto B40139f;
case 0x4013a2:c.instructions+=12;goto B4013a2;
case 0x4013a5:c.instructions+=11;goto B4013a5;
case 0x4013a8:c.instructions+=10;goto B4013a8;
case 0x4013ac:c.instructions+=9;goto B4013ac;
case 0x4013af:c.instructions+=8;goto B4013af;
case 0x4013b2:c.instructions+=7;goto B4013b2;
case 0x4013b4:c.instructions+=6;goto B4013b4;
case 0x4013b6:c.instructions+=5;goto B4013b6;
case 0x4013b9:c.instructions+=4;goto B4013b9;
case 0x4013bc:c.instructions+=3;goto B4013bc;
case 0x4013c3:c.instructions+=2;goto B4013c3;
case 0x4013c6:c.instructions+=1;goto B4013c6;
case 0x4013d0:goto L4013d0;
case 0x4013d4:c.instructions+=5;goto B4013d4;
case 0x4013d5:c.instructions+=4;goto B4013d5;
case 0x4013d7:c.instructions+=3;goto B4013d7;
case 0x4013d8:c.instructions+=2;goto B4013d8;
case 0x4013d9:c.instructions+=1;goto B4013d9;
case 0x4013de:goto L4013de;
case 0x4013e1:c.instructions+=3;goto B4013e1;
case 0x4013e3:c.instructions+=2;goto B4013e3;
case 0x4013e4:c.instructions+=1;goto B4013e4;
case 0x4013f0:goto L4013f0;
case 0x4013f1:c.instructions+=202;goto B4013f1;
case 0x4013f3:c.instructions+=201;goto B4013f3;
case 0x4013f6:c.instructions+=200;goto B4013f6;
case 0x4013f9:c.instructions+=199;goto B4013f9;
case 0x4013fc:c.instructions+=198;goto B4013fc;
case 0x4013ff:c.instructions+=197;goto B4013ff;
case 0x401401:c.instructions+=196;goto B401401;
case 0x401403:c.instructions+=195;goto B401403;
case 0x401406:c.instructions+=194;goto B401406;
case 0x401409:c.instructions+=193;goto B401409;
case 0x40140b:c.instructions+=192;goto B40140b;
case 0x40140e:c.instructions+=191;goto B40140e;
case 0x401411:c.instructions+=190;goto B401411;
case 0x401413:c.instructions+=189;goto B401413;
case 0x401416:c.instructions+=188;goto B401416;
case 0x401419:c.instructions+=187;goto B401419;
case 0x40141b:c.instructions+=186;goto B40141b;
case 0x40141f:c.instructions+=185;goto B40141f;
case 0x401422:c.instructions+=184;goto B401422;
case 0x401425:c.instructions+=183;goto B401425;
case 0x401428:c.instructions+=182;goto B401428;
case 0x40142b:c.instructions+=181;goto B40142b;
case 0x40142d:c.instructions+=180;goto B40142d;
case 0x401430:c.instructions+=179;goto B401430;
case 0x401433:c.instructions+=178;goto B401433;
case 0x401435:c.instructions+=177;goto B401435;
case 0x401438:c.instructions+=176;goto B401438;
case 0x40143a:c.instructions+=175;goto B40143a;
case 0x40143c:c.instructions+=174;goto B40143c;
case 0x401440:c.instructions+=173;goto B401440;
case 0x401443:c.instructions+=172;goto B401443;
case 0x401446:c.instructions+=171;goto B401446;
case 0x401449:c.instructions+=170;goto B401449;
case 0x40144b:c.instructions+=169;goto B40144b;
case 0x40144d:c.instructions+=168;goto B40144d;
case 0x401450:c.instructions+=167;goto B401450;
case 0x401453:c.instructions+=166;goto B401453;
case 0x401455:c.instructions+=165;goto B401455;
case 0x401458:c.instructions+=164;goto B401458;
case 0x40145b:c.instructions+=163;goto B40145b;
case 0x40145d:c.instructions+=162;goto B40145d;
case 0x401461:c.instructions+=161;goto B401461;
case 0x401464:c.instructions+=160;goto B401464;
case 0x401467:c.instructions+=159;goto B401467;
case 0x40146a:c.instructions+=158;goto B40146a;
case 0x40146d:c.instructions+=157;goto B40146d;
case 0x40146f:c.instructions+=156;goto B40146f;
case 0x401471:c.instructions+=155;goto B401471;
case 0x401474:c.instructions+=154;goto B401474;
case 0x401476:c.instructions+=153;goto B401476;
case 0x401479:c.instructions+=152;goto B401479;
case 0x40147c:c.instructions+=151;goto B40147c;
case 0x40147e:c.instructions+=150;goto B40147e;
case 0x401482:c.instructions+=149;goto B401482;
case 0x401485:c.instructions+=148;goto B401485;
case 0x401488:c.instructions+=147;goto B401488;
case 0x40148b:c.instructions+=146;goto B40148b;
case 0x40148e:c.instructions+=145;goto B40148e;
case 0x401490:c.instructions+=144;goto B401490;
case 0x401493:c.instructions+=143;goto B401493;
case 0x401496:c.instructions+=142;goto B401496;
case 0x401498:c.instructions+=141;goto B401498;
case 0x40149b:c.instructions+=140;goto B40149b;
case 0x40149d:c.instructions+=139;goto B40149d;
case 0x40149f:c.instructions+=138;goto B40149f;
case 0x4014a3:c.instructions+=137;goto B4014a3;
case 0x4014a6:c.instructions+=136;goto B4014a6;
case 0x4014a9:c.instructions+=135;goto B4014a9;
case 0x4014ac:c.instructions+=134;goto B4014ac;
case 0x4014af:c.instructions+=133;goto B4014af;
case 0x4014b1:c.instructions+=132;goto B4014b1;
case 0x4014b4:c.instructions+=131;goto B4014b4;
case 0x4014b7:c.instructions+=130;goto B4014b7;
case 0x4014b9:c.instructions+=129;goto B4014b9;
case 0x4014bc:c.instructions+=128;goto B4014bc;
case 0x4014bf:c.instructions+=127;goto B4014bf;
case 0x4014c1:c.instructions+=126;goto B4014c1;
case 0x4014c5:c.instructions+=125;goto B4014c5;
case 0x4014c8:c.instructions+=124;goto B4014c8;
case 0x4014cb:c.instructions+=123;goto B4014cb;
case 0x4014ce:c.instructions+=122;goto B4014ce;
case 0x4014d1:c.instructions+=121;goto B4014d1;
case 0x4014d3:c.instructions+=120;goto B4014d3;
case 0x4014d6:c.instructions+=119;goto B4014d6;
case 0x4014d9:c.instructions+=118;goto B4014d9;
case 0x4014db:c.instructions+=117;goto B4014db;
case 0x4014de:c.instructions+=116;goto B4014de;
case 0x4014e1:c.instructions+=115;goto B4014e1;
case 0x4014e3:c.instructions+=114;goto B4014e3;
case 0x4014e7:c.instructions+=113;goto B4014e7;
case 0x4014ea:c.instructions+=112;goto B4014ea;
case 0x4014ed:c.instructions+=111;goto B4014ed;
case 0x4014f0:c.instructions+=110;goto B4014f0;
case 0x4014f3:c.instructions+=109;goto B4014f3;
case 0x4014f5:c.instructions+=108;goto B4014f5;
case 0x4014f8:c.instructions+=107;goto B4014f8;
case 0x4014fb:c.instructions+=106;goto B4014fb;
case 0x4014fd:c.instructions+=105;goto B4014fd;
case 0x401500:c.instructions+=104;goto B401500;
case 0x401503:c.instructions+=103;goto B401503;
case 0x401505:c.instructions+=102;goto B401505;
case 0x401509:c.instructions+=101;goto B401509;
case 0x40150c:c.instructions+=100;goto B40150c;
case 0x40150f:c.instructions+=99;goto B40150f;
case 0x401512:c.instructions+=98;goto B401512;
case 0x401515:c.instructions+=97;goto B401515;
case 0x401517:c.instructions+=96;goto B401517;
case 0x40151a:c.instructions+=95;goto B40151a;
case 0x40151d:c.instructions+=94;goto B40151d;
case 0x40151f:c.instructions+=93;goto B40151f;
case 0x401522:c.instructions+=92;goto B401522;
case 0x401524:c.instructions+=91;goto B401524;
case 0x401526:c.instructions+=90;goto B401526;
case 0x40152a:c.instructions+=89;goto B40152a;
case 0x40152d:c.instructions+=88;goto B40152d;
case 0x401530:c.instructions+=87;goto B401530;
case 0x401533:c.instructions+=86;goto B401533;
case 0x401536:c.instructions+=85;goto B401536;
case 0x401538:c.instructions+=84;goto B401538;
case 0x40153b:c.instructions+=83;goto B40153b;
case 0x40153e:c.instructions+=82;goto B40153e;
case 0x401540:c.instructions+=81;goto B401540;
case 0x401543:c.instructions+=80;goto B401543;
case 0x401546:c.instructions+=79;goto B401546;
case 0x401548:c.instructions+=78;goto B401548;
case 0x40154c:c.instructions+=77;goto B40154c;
case 0x40154f:c.instructions+=76;goto B40154f;
case 0x401552:c.instructions+=75;goto B401552;
case 0x401555:c.instructions+=74;goto B401555;
case 0x401558:c.instructions+=73;goto B401558;
case 0x40155a:c.instructions+=72;goto B40155a;
case 0x40155d:c.instructions+=71;goto B40155d;
case 0x401560:c.instructions+=70;goto B401560;
case 0x401562:c.instructions+=69;goto B401562;
case 0x401565:c.instructions+=68;goto B401565;
case 0x401568:c.instructions+=67;goto B401568;
case 0x40156a:c.instructions+=66;goto B40156a;
case 0x40156e:c.instructions+=65;goto B40156e;
case 0x401571:c.instructions+=64;goto B401571;
case 0x401574:c.instructions+=63;goto B401574;
case 0x401577:c.instructions+=62;goto B401577;
case 0x40157a:c.instructions+=61;goto B40157a;
case 0x40157c:c.instructions+=60;goto B40157c;
case 0x40157f:c.instructions+=59;goto B40157f;
case 0x401582:c.instructions+=58;goto B401582;
case 0x401584:c.instructions+=57;goto B401584;
case 0x401587:c.instructions+=56;goto B401587;
case 0x40158a:c.instructions+=55;goto B40158a;
case 0x40158c:c.instructions+=54;goto B40158c;
case 0x401590:c.instructions+=53;goto B401590;
case 0x401593:c.instructions+=52;goto B401593;
case 0x401596:c.instructions+=51;goto B401596;
case 0x401599:c.instructions+=50;goto B401599;
case 0x40159c:c.instructions+=49;goto B40159c;
case 0x40159e:c.instructions+=48;goto B40159e;
case 0x4015a1:c.instructions+=47;goto B4015a1;
case 0x4015a4:c.instructions+=46;goto B4015a4;
case 0x4015a6:c.instructions+=45;goto B4015a6;
case 0x4015a9:c.instructions+=44;goto B4015a9;
case 0x4015ab:c.instructions+=43;goto B4015ab;
case 0x4015ad:c.instructions+=42;goto B4015ad;
case 0x4015b1:c.instructions+=41;goto B4015b1;
case 0x4015b4:c.instructions+=40;goto B4015b4;
case 0x4015b7:c.instructions+=39;goto B4015b7;
case 0x4015ba:c.instructions+=38;goto B4015ba;
case 0x4015bd:c.instructions+=37;goto B4015bd;
case 0x4015bf:c.instructions+=36;goto B4015bf;
case 0x4015c2:c.instructions+=35;goto B4015c2;
case 0x4015c5:c.instructions+=34;goto B4015c5;
case 0x4015c7:c.instructions+=33;goto B4015c7;
case 0x4015ca:c.instructions+=32;goto B4015ca;
case 0x4015cd:c.instructions+=31;goto B4015cd;
case 0x4015cf:c.instructions+=30;goto B4015cf;
case 0x4015d3:c.instructions+=29;goto B4015d3;
case 0x4015d6:c.instructions+=28;goto B4015d6;
case 0x4015d9:c.instructions+=27;goto B4015d9;
case 0x4015dc:c.instructions+=26;goto B4015dc;
case 0x4015df:c.instructions+=25;goto B4015df;
case 0x4015e1:c.instructions+=24;goto B4015e1;
case 0x4015e4:c.instructions+=23;goto B4015e4;
case 0x4015e7:c.instructions+=22;goto B4015e7;
case 0x4015e9:c.instructions+=21;goto B4015e9;
case 0x4015ec:c.instructions+=20;goto B4015ec;
case 0x4015ef:c.instructions+=19;goto B4015ef;
case 0x4015f1:c.instructions+=18;goto B4015f1;
case 0x4015f5:c.instructions+=17;goto B4015f5;
case 0x4015f8:c.instructions+=16;goto B4015f8;
case 0x4015fb:c.instructions+=15;goto B4015fb;
case 0x4015fe:c.instructions+=14;goto B4015fe;
case 0x401601:c.instructions+=13;goto B401601;
case 0x401603:c.instructions+=12;goto B401603;
case 0x401606:c.instructions+=11;goto B401606;
case 0x401609:c.instructions+=10;goto B401609;
case 0x40160b:c.instructions+=9;goto B40160b;
case 0x40160e:c.instructions+=8;goto B40160e;
case 0x401612:c.instructions+=7;goto B401612;
case 0x401615:c.instructions+=6;goto B401615;
case 0x401618:c.instructions+=5;goto B401618;
case 0x401619:c.instructions+=4;goto B401619;
case 0x40161a:c.instructions+=3;goto B40161a;
case 0x40161c:c.instructions+=2;goto B40161c;
case 0x401620:c.instructions+=1;goto B401620;
case 0x401625:goto L401625;
case 0x401628:c.instructions+=3;goto B401628;
case 0x40162a:c.instructions+=2;goto B40162a;
case 0x40162b:c.instructions+=1;goto B40162b;
case 0x401630:goto L401630;
case 0x401634:c.instructions+=5;goto B401634;
case 0x401636:c.instructions+=4;goto B401636;
case 0x401639:c.instructions+=3;goto B401639;
case 0x40163b:c.instructions+=2;goto B40163b;
case 0x40163e:c.instructions+=1;goto B40163e;
case 0x401650:goto L401650;
case 0x401654:c.instructions+=2;goto B401654;
case 0x401655:c.instructions+=1;goto B401655;
case 0x401657:goto L401657;
case 0x401658:c.instructions+=8;goto B401658;
case 0x40165c:c.instructions+=7;goto B40165c;
case 0x40165d:c.instructions+=6;goto B40165d;
case 0x401661:c.instructions+=5;goto B401661;
case 0x401662:c.instructions+=4;goto B401662;
case 0x401666:c.instructions+=3;goto B401666;
case 0x401667:c.instructions+=2;goto B401667;
case 0x40166a:c.instructions+=1;goto B40166a;
case 0x401670:goto L401670;
case 0x401672:c.instructions+=1;goto B401672;
case 0x401674:goto L401674;
case 0x401676:c.instructions+=2;goto B401676;
case 0x401677:c.instructions+=1;goto B401677;
case 0x401679:goto L401679;
case 0x40167a:c.instructions+=3;goto B40167a;
case 0x40167b:c.instructions+=2;goto B40167b;
case 0x40167c:c.instructions+=1;goto B40167c;
case 0x40167d:goto L40167d;
case 0x401680:goto L401680;
case 0x401684:c.instructions+=5;goto B401684;
case 0x401685:c.instructions+=4;goto B401685;
case 0x40168b:c.instructions+=3;goto B40168b;
case 0x40168d:c.instructions+=2;goto B40168d;
case 0x401693:c.instructions+=1;goto B401693;
case 0x401695:goto L401695;
case 0x40169b:c.instructions+=2;goto B40169b;
case 0x40169d:c.instructions+=1;goto B40169d;
case 0x4016a0:goto L4016a0;
case 0x4016a3:c.instructions+=4;goto B4016a3;
case 0x4016a5:c.instructions+=3;goto B4016a5;
case 0x4016a8:c.instructions+=2;goto B4016a8;
case 0x4016a9:c.instructions+=1;goto B4016a9;
case 0x4016ab:goto L4016ab;
case 0x4016ac:c.instructions+=1;goto B4016ac;
case 0x4016b0:goto L4016b0;
case 0x4016b2:c.instructions+=12;goto B4016b2;
case 0x4016b7:c.instructions+=11;goto B4016b7;
case 0x4016bd:c.instructions+=10;goto B4016bd;
case 0x4016be:c.instructions+=9;goto B4016be;
case 0x4016c5:c.instructions+=8;goto B4016c5;
case 0x4016c6:c.instructions+=7;goto B4016c6;
case 0x4016c7:c.instructions+=6;goto B4016c7;
case 0x4016c8:c.instructions+=5;goto B4016c8;
case 0x4016cc:c.instructions+=4;goto B4016cc;
case 0x4016ce:c.instructions+=3;goto B4016ce;
case 0x4016cf:c.instructions+=2;goto B4016cf;
case 0x4016d3:c.instructions+=1;goto B4016d3;
case 0x4016d8:goto L4016d8;
case 0x4016d9:c.instructions+=3;goto B4016d9;
case 0x4016dc:c.instructions+=2;goto B4016dc;
case 0x4016e4:c.instructions+=1;goto B4016e4;
case 0x4016e9:goto L4016e9;
case 0x4016ed:c.instructions+=4;goto B4016ed;
case 0x4016ee:c.instructions+=3;goto B4016ee;
case 0x4016f1:c.instructions+=2;goto B4016f1;
case 0x4016f6:c.instructions+=1;goto B4016f6;
case 0x4016fb:goto L4016fb;
case 0x4016ff:c.instructions+=10;goto B4016ff;
case 0x401702:c.instructions+=9;goto B401702;
case 0x401706:c.instructions+=8;goto B401706;
case 0x40170d:c.instructions+=7;goto B40170d;
case 0x401717:c.instructions+=6;goto B401717;
case 0x401718:c.instructions+=5;goto B401718;
case 0x40171a:c.instructions+=4;goto B40171a;
case 0x40171b:c.instructions+=3;goto B40171b;
case 0x401722:c.instructions+=2;goto B401722;
case 0x401725:c.instructions+=1;goto B401725;
case 0x401730:goto L401730;
case 0x401732:c.instructions+=11;goto B401732;
case 0x401737:c.instructions+=10;goto B401737;
case 0x40173d:c.instructions+=9;goto B40173d;
case 0x40173e:c.instructions+=8;goto B40173e;
case 0x401745:c.instructions+=7;goto B401745;
case 0x401746:c.instructions+=6;goto B401746;
case 0x401747:c.instructions+=5;goto B401747;
case 0x401749:c.instructions+=4;goto B401749;
case 0x40174d:c.instructions+=3;goto B40174d;
case 0x401750:c.instructions+=2;goto B401750;
case 0x401758:c.instructions+=1;goto B401758;
case 0x40175d:goto L40175d;
case 0x401760:c.instructions+=2;goto B401760;
case 0x401765:c.instructions+=1;goto B401765;
case 0x40176a:goto L40176a;
case 0x40176c:c.instructions+=2;goto B40176c;
case 0x401774:c.instructions+=1;goto B401774;
case 0x401779:goto L401779;
case 0x40177d:c.instructions+=4;goto B40177d;
case 0x40177e:c.instructions+=3;goto B40177e;
case 0x401785:c.instructions+=2;goto B401785;
case 0x401788:c.instructions+=1;goto B401788;
case 0x401790:goto L401790;
case 0x401794:c.instructions+=4;goto B401794;
case 0x401798:c.instructions+=3;goto B401798;
case 0x40179a:c.instructions+=2;goto B40179a;
case 0x40179d:c.instructions+=1;goto B40179d;
case 0x40179f:goto L40179f;
case 0x4017a3:c.instructions+=1;goto B4017a3;
case 0x4017a5:goto L4017a5;
case 0x4017a9:goto L4017a9;
case 0x4017ad:c.instructions+=4;goto B4017ad;
case 0x4017af:c.instructions+=3;goto B4017af;
case 0x4017b1:c.instructions+=2;goto B4017b1;
case 0x4017b4:c.instructions+=1;goto B4017b4;
case 0x4017b6:goto L4017b6;
case 0x4017b8:c.instructions+=1;goto B4017b8;
case 0x4017bc:goto L4017bc;
case 0x4017c0:c.instructions+=8;goto B4017c0;
case 0x4017c4:c.instructions+=7;goto B4017c4;
case 0x4017c8:c.instructions+=6;goto B4017c8;
case 0x4017ca:c.instructions+=5;goto B4017ca;
case 0x4017ce:c.instructions+=4;goto B4017ce;
case 0x4017d2:c.instructions+=3;goto B4017d2;
case 0x4017d4:c.instructions+=2;goto B4017d4;
case 0x4017d8:c.instructions+=1;goto B4017d8;
case 0x4017e0:goto L4017e0;
case 0x4017e6:c.instructions+=1;goto B4017e6;
case 0x4017f0:goto L4017f0;
case 0x4017f6:c.instructions+=1;goto B4017f6;
case 0x401800:goto L401800;
case 0x401806:c.instructions+=1;goto B401806;
case 0x401810:goto L401810;
case 0x401812:c.instructions+=2;goto B401812;
case 0x401818:c.instructions+=1;goto B401818;
case 0x401820:goto L401820;
case 0x401822:c.instructions+=2;goto B401822;
case 0x401824:c.instructions+=1;goto B401824;
case 0x401826:goto L401826;
case 0x40182b:c.instructions+=1;goto B40182b;
case 0x40182d:goto L40182d;
case 0x401832:c.instructions+=1;goto B401832;
case 0x401833:goto L401833;
case 0x401835:c.instructions+=1;goto B401835;
case 0x401840:goto L401840;
case 0x401844:c.instructions+=5;goto B401844;
case 0x401845:c.instructions+=4;goto B401845;
case 0x40184b:c.instructions+=3;goto B40184b;
case 0x40184d:c.instructions+=2;goto B40184d;
case 0x401853:c.instructions+=1;goto B401853;
case 0x401858:goto L401858;
case 0x40185a:c.instructions+=2;goto B40185a;
case 0x40185b:c.instructions+=1;goto B40185b;
case 0x401860:goto L401860;
case 0x401866:c.instructions+=2;goto B401866;
case 0x401868:c.instructions+=1;goto B401868;
case 0x40186a:goto L40186a;
case 0x40186f:c.instructions+=1;goto B40186f;
case 0x401871:goto L401871;
case 0x401877:c.instructions+=2;goto B401877;
case 0x40187d:c.instructions+=1;goto B40187d;
case 0x40187e:goto L40187e;
case 0x401884:c.instructions+=1;goto B401884;
case 0x401890:goto L401890;
case 0x401893:c.instructions+=1;goto B401893;
case 0x4018a0:goto L4018a0;
case 0x4018a3:c.instructions+=1;goto B4018a3;
case 0x4018b0:goto L4018b0;
case 0x4018b6:c.instructions+=1;goto B4018b6;
case 0x4018c0:goto L4018c0;
case 0x4018c6:c.instructions+=4;goto B4018c6;
case 0x4018cc:c.instructions+=3;goto B4018cc;
case 0x4018ce:c.instructions+=2;goto B4018ce;
case 0x4018d1:c.instructions+=1;goto B4018d1;
case 0x4018d3:goto L4018d3;
case 0x4018d9:c.instructions+=1;goto B4018d9;
case 0x4018da:goto L4018da;
case 0x4018e0:c.instructions+=1;goto B4018e0;
case 0x4018f0:goto L4018f0;
case 0x4018f3:c.instructions+=2;goto B4018f3;
case 0x4018f5:c.instructions+=1;goto B4018f5;
case 0x4018f7:goto L4018f7;
case 0x4018fc:c.instructions+=2;goto B4018fc;
case 0x4018fe:c.instructions+=1;goto B4018fe;
case 0x401900:goto L401900;
case 0x401902:c.instructions+=1;goto B401902;
case 0x401903:goto L401903;
case 0x401908:c.instructions+=1;goto B401908;
case 0x401910:goto L401910;
case 0x401913:c.instructions+=2;goto B401913;
case 0x401915:c.instructions+=1;goto B401915;
case 0x401917:goto L401917;
case 0x40191c:c.instructions+=2;goto B40191c;
case 0x40191e:c.instructions+=1;goto B40191e;
case 0x401920:goto L401920;
case 0x401922:c.instructions+=1;goto B401922;
case 0x401923:goto L401923;
case 0x401928:c.instructions+=1;goto B401928;
case 0x401930:goto L401930;
case 0x401933:c.instructions+=2;goto B401933;
case 0x401935:c.instructions+=1;goto B401935;
case 0x401937:goto L401937;
case 0x40193c:c.instructions+=2;goto B40193c;
case 0x40193e:c.instructions+=1;goto B40193e;
case 0x401940:goto L401940;
case 0x401942:c.instructions+=1;goto B401942;
case 0x401943:goto L401943;
case 0x401948:c.instructions+=1;goto B401948;
case 0x401950:goto L401950;
case 0x401953:c.instructions+=2;goto B401953;
case 0x401955:c.instructions+=1;goto B401955;
case 0x401957:goto L401957;
case 0x40195c:c.instructions+=2;goto B40195c;
case 0x40195e:c.instructions+=1;goto B40195e;
case 0x401960:goto L401960;
case 0x401965:c.instructions+=2;goto B401965;
case 0x401967:c.instructions+=1;goto B401967;
case 0x401969:goto L401969;
case 0x40196c:c.instructions+=2;goto B40196c;
case 0x40196e:c.instructions+=1;goto B40196e;
case 0x401970:goto L401970;
case 0x401975:c.instructions+=2;goto B401975;
case 0x401977:c.instructions+=1;goto B401977;
case 0x401979:goto L401979;
case 0x40197e:c.instructions+=1;goto B40197e;
case 0x40197f:goto L40197f;
case 0x401981:c.instructions+=1;goto B401981;
case 0x401990:goto L401990;
case 0x401992:c.instructions+=1;goto B401992;
case 0x401994:goto L401994;
case 0x401997:c.instructions+=2;goto B401997;
case 0x40199a:c.instructions+=1;goto B40199a;
case 0x40199c:goto L40199c;
case 0x40199f:c.instructions+=1;goto B40199f;
case 0x4019a1:goto L4019a1;
case 0x4019a4:c.instructions+=1;goto B4019a4;
case 0x4019a6:goto L4019a6;
case 0x4019a9:c.instructions+=2;goto B4019a9;
case 0x4019ab:c.instructions+=1;goto B4019ab;
case 0x4019ad:goto L4019ad;
case 0x4019af:c.instructions+=1;goto B4019af;
case 0x4019b0:goto L4019b0;
case 0x4019b2:c.instructions+=1;goto B4019b2;
case 0x4019c0:goto L4019c0;
case 0x4019c5:c.instructions+=4;goto B4019c5;
case 0x4019c6:c.instructions+=3;goto B4019c6;
case 0x4019c8:c.instructions+=2;goto B4019c8;
case 0x4019ce:c.instructions+=1;goto B4019ce;
case 0x4019d0:goto L4019d0;
case 0x4019d1:c.instructions+=1;goto B4019d1;
case 0x4019d6:goto L4019d6;
case 0x4019d9:goto L4019d9;
case 0x4019db:c.instructions+=2;goto B4019db;
case 0x4019dc:c.instructions+=1;goto B4019dc;
case 0x4019e0:goto L4019e0;
case 0x4019e4:c.instructions+=4;goto B4019e4;
case 0x4019ea:c.instructions+=3;goto B4019ea;
case 0x4019eb:c.instructions+=2;goto B4019eb;
case 0x4019ec:c.instructions+=1;goto B4019ec;
case 0x4019f1:goto L4019f1;
case 0x4019f4:c.instructions+=1;goto B4019f4;
case 0x401a00:goto L401a00;
case 0x401a02:c.instructions+=11;goto B401a02;
case 0x401a06:c.instructions+=10;goto B401a06;
case 0x401a08:c.instructions+=9;goto B401a08;
case 0x401a0b:c.instructions+=8;goto B401a0b;
case 0x401a0e:c.instructions+=7;goto B401a0e;
case 0x401a12:c.instructions+=6;goto B401a12;
case 0x401a15:c.instructions+=5;goto B401a15;
case 0x401a19:c.instructions+=4;goto B401a19;
case 0x401a1d:c.instructions+=3;goto B401a1d;
case 0x401a23:c.instructions+=2;goto B401a23;
case 0x401a26:c.instructions+=1;goto B401a26;
case 0x401a30:goto L401a30;
case 0x401a34:c.instructions+=2;goto B401a34;
case 0x401a36:c.instructions+=1;goto B401a36;
case 0x401a38:goto L401a38;
case 0x401a3c:c.instructions+=5;goto B401a3c;
case 0x401a3f:c.instructions+=4;goto B401a3f;
case 0x401a43:c.instructions+=3;goto B401a43;
case 0x401a47:c.instructions+=2;goto B401a47;
case 0x401a4d:c.instructions+=1;goto B401a4d;
case 0x401a50:goto L401a50;
case 0x401a55:goto L401a55;
case 0x401a60:goto L401a60;
case 0x401a61:c.instructions+=13;goto B401a61;
case 0x401a65:c.instructions+=12;goto B401a65;
case 0x401a69:c.instructions+=11;goto B401a69;
case 0x401a6d:c.instructions+=10;goto B401a6d;
case 0x401a71:c.instructions+=9;goto B401a71;
case 0x401a75:c.instructions+=8;goto B401a75;
case 0x401a79:c.instructions+=7;goto B401a79;
case 0x401a7f:c.instructions+=6;goto B401a7f;
case 0x401a83:c.instructions+=5;goto B401a83;
case 0x401a89:c.instructions+=4;goto B401a89;
case 0x401a8b:c.instructions+=3;goto B401a8b;
case 0x401a8e:c.instructions+=2;goto B401a8e;
case 0x401a8f:c.instructions+=1;goto B401a8f;
case 0x401aa0:goto L401aa0;
case 0x401aa3:c.instructions+=3;goto B401aa3;
case 0x401aa4:c.instructions+=2;goto B401aa4;
case 0x401aa6:c.instructions+=1;goto B401aa6;
case 0x401aab:goto L401aab;
case 0x401aad:c.instructions+=1;goto B401aad;
case 0x401aaf:goto L401aaf;
case 0x401ab3:c.instructions+=9;goto B401ab3;
case 0x401ab7:c.instructions+=8;goto B401ab7;
case 0x401abb:c.instructions+=7;goto B401abb;
case 0x401abf:c.instructions+=6;goto B401abf;
case 0x401ac3:c.instructions+=5;goto B401ac3;
case 0x401ac9:c.instructions+=4;goto B401ac9;
case 0x401acb:c.instructions+=3;goto B401acb;
case 0x401acf:c.instructions+=2;goto B401acf;
case 0x401ad3:c.instructions+=1;goto B401ad3;
case 0x401ad5:goto L401ad5;
case 0x401ad9:c.instructions+=8;goto B401ad9;
case 0x401add:c.instructions+=7;goto B401add;
case 0x401ae1:c.instructions+=6;goto B401ae1;
case 0x401ae5:c.instructions+=5;goto B401ae5;
case 0x401ae9:c.instructions+=4;goto B401ae9;
case 0x401aef:c.instructions+=3;goto B401aef;
case 0x401af1:c.instructions+=2;goto B401af1;
case 0x401af5:c.instructions+=1;goto B401af5;
case 0x401af9:goto L401af9;
case 0x401afd:c.instructions+=11;goto B401afd;
case 0x401b03:c.instructions+=10;goto B401b03;
case 0x401b07:c.instructions+=9;goto B401b07;
case 0x401b08:c.instructions+=8;goto B401b08;
case 0x401b0a:c.instructions+=7;goto B401b0a;
case 0x401b0e:c.instructions+=6;goto B401b0e;
case 0x401b10:c.instructions+=5;goto B401b10;
case 0x401b13:c.instructions+=4;goto B401b13;
case 0x401b15:c.instructions+=3;goto B401b15;
case 0x401b18:c.instructions+=2;goto B401b18;
case 0x401b1b:c.instructions+=1;goto B401b1b;
case 0x401b20:goto L401b20;
case 0x401b24:c.instructions+=2;goto B401b24;
case 0x401b26:c.instructions+=1;goto B401b26;
case 0x401b28:goto L401b28;
case 0x401b2c:c.instructions+=11;goto B401b2c;
case 0x401b30:c.instructions+=10;goto B401b30;
case 0x401b34:c.instructions+=9;goto B401b34;
case 0x401b38:c.instructions+=8;goto B401b38;
case 0x401b3c:c.instructions+=7;goto B401b3c;
case 0x401b40:c.instructions+=6;goto B401b40;
case 0x401b46:c.instructions+=5;goto B401b46;
case 0x401b4a:c.instructions+=4;goto B401b4a;
case 0x401b50:c.instructions+=3;goto B401b50;
case 0x401b52:c.instructions+=2;goto B401b52;
case 0x401b55:c.instructions+=1;goto B401b55;
case 0x401b58:goto L401b58;
case 0x401b59:c.instructions+=3;goto B401b59;
case 0x401b5d:c.instructions+=2;goto B401b5d;
case 0x401b5e:c.instructions+=1;goto B401b5e;
case 0x401b63:goto L401b63;
case 0x401b65:c.instructions+=2;goto B401b65;
case 0x401b66:c.instructions+=1;goto B401b66;
case 0x401b70:goto L401b70;
case 0x401b71:c.instructions+=5;goto B401b71;
case 0x401b75:c.instructions+=4;goto B401b75;
case 0x401b7b:c.instructions+=3;goto B401b7b;
case 0x401b7d:c.instructions+=2;goto B401b7d;
case 0x401b80:c.instructions+=1;goto B401b80;
case 0x401b82:goto L401b82;
case 0x401b86:c.instructions+=7;goto B401b86;
case 0x401b89:c.instructions+=6;goto B401b89;
case 0x401b8d:c.instructions+=5;goto B401b8d;
case 0x401b91:c.instructions+=4;goto B401b91;
case 0x401b97:c.instructions+=3;goto B401b97;
case 0x401b9b:c.instructions+=2;goto B401b9b;
case 0x401b9c:c.instructions+=1;goto B401b9c;
case 0x401b9f:goto L401b9f;
case 0x401ba3:c.instructions+=8;goto B401ba3;
case 0x401ba6:c.instructions+=7;goto B401ba6;
case 0x401baa:c.instructions+=6;goto B401baa;
case 0x401bae:c.instructions+=5;goto B401bae;
case 0x401bb4:c.instructions+=4;goto B401bb4;
case 0x401bb8:c.instructions+=3;goto B401bb8;
case 0x401bba:c.instructions+=2;goto B401bba;
case 0x401bbb:c.instructions+=1;goto B401bbb;
case 0x401bc0:goto L401bc0;
case 0x401bc1:c.instructions+=5;goto B401bc1;
case 0x401bc5:c.instructions+=4;goto B401bc5;
case 0x401bcb:c.instructions+=3;goto B401bcb;
case 0x401bcd:c.instructions+=2;goto B401bcd;
case 0x401bd0:c.instructions+=1;goto B401bd0;
case 0x401bd2:goto L401bd2;
case 0x401bd6:c.instructions+=8;goto B401bd6;
case 0x401bd9:c.instructions+=7;goto B401bd9;
case 0x401bdd:c.instructions+=6;goto B401bdd;
case 0x401be1:c.instructions+=5;goto B401be1;
case 0x401be7:c.instructions+=4;goto B401be7;
case 0x401beb:c.instructions+=3;goto B401beb;
case 0x401bed:c.instructions+=2;goto B401bed;
case 0x401bee:c.instructions+=1;goto B401bee;
case 0x401bf1:goto L401bf1;
case 0x401bf5:c.instructions+=7;goto B401bf5;
case 0x401bf8:c.instructions+=6;goto B401bf8;
case 0x401bfc:c.instructions+=5;goto B401bfc;
case 0x401c00:c.instructions+=4;goto B401c00;
case 0x401c06:c.instructions+=3;goto B401c06;
case 0x401c0a:c.instructions+=2;goto B401c0a;
case 0x401c0b:c.instructions+=1;goto B401c0b;
case 0x401c10:goto L401c10;
case 0x401c14:c.instructions+=2;goto B401c14;
case 0x401c16:c.instructions+=1;goto B401c16;
case 0x401c18:goto L401c18;
case 0x401c1c:c.instructions+=2;goto B401c1c;
case 0x401c1d:c.instructions+=1;goto B401c1d;
case 0x401c22:goto L401c22;
case 0x401c25:goto L401c25;
case 0x401c29:c.instructions+=2;goto B401c29;
case 0x401c2a:c.instructions+=1;goto B401c2a;
case 0x401c2f:goto L401c2f;
case 0x401c40:goto L401c40;
case 0x401c41:c.instructions+=15;goto B401c41;
case 0x401c45:c.instructions+=14;goto B401c45;
case 0x401c49:c.instructions+=13;goto B401c49;
case 0x401c4c:c.instructions+=12;goto B401c4c;
case 0x401c50:c.instructions+=11;goto B401c50;
case 0x401c53:c.instructions+=10;goto B401c53;
case 0x401c57:c.instructions+=9;goto B401c57;
case 0x401c5b:c.instructions+=8;goto B401c5b;
case 0x401c61:c.instructions+=7;goto B401c61;
case 0x401c65:c.instructions+=6;goto B401c65;
case 0x401c6b:c.instructions+=5;goto B401c6b;
case 0x401c6f:c.instructions+=4;goto B401c6f;
case 0x401c71:c.instructions+=3;goto B401c71;
case 0x401c73:c.instructions+=2;goto B401c73;
case 0x401c76:c.instructions+=1;goto B401c76;
case 0x401c78:goto L401c78;
case 0x401c7a:c.instructions+=1;goto B401c7a;
case 0x401c7e:goto L401c7e;
case 0x401c82:c.instructions+=8;goto B401c82;
case 0x401c87:c.instructions+=7;goto B401c87;
case 0x401c8a:c.instructions+=6;goto B401c8a;
case 0x401c8e:c.instructions+=5;goto B401c8e;
case 0x401c92:c.instructions+=4;goto B401c92;
case 0x401c98:c.instructions+=3;goto B401c98;
case 0x401c9a:c.instructions+=2;goto B401c9a;
case 0x401c9b:c.instructions+=1;goto B401c9b;
case 0x401ca0:goto L401ca0;
case 0x401ca4:c.instructions+=6;goto B401ca4;
case 0x401ca9:c.instructions+=5;goto B401ca9;
case 0x401cac:c.instructions+=4;goto B401cac;
case 0x401cb0:c.instructions+=3;goto B401cb0;
case 0x401cb4:c.instructions+=2;goto B401cb4;
case 0x401cba:c.instructions+=1;goto B401cba;
case 0x401cc0:goto L401cc0;
case 0x401cc4:c.instructions+=7;goto B401cc4;
case 0x401cc5:c.instructions+=6;goto B401cc5;
case 0x401cc9:c.instructions+=5;goto B401cc9;
case 0x401ccb:c.instructions+=4;goto B401ccb;
case 0x401cd1:c.instructions+=3;goto B401cd1;
case 0x401cd3:c.instructions+=2;goto B401cd3;
case 0x401cd8:c.instructions+=1;goto B401cd8;
case 0x401cda:goto L401cda;
case 0x401cdc:c.instructions+=9;goto B401cdc;
case 0x401cde:c.instructions+=8;goto B401cde;
case 0x401ce1:c.instructions+=7;goto B401ce1;
case 0x401ce3:c.instructions+=6;goto B401ce3;
case 0x401ce6:c.instructions+=5;goto B401ce6;
case 0x401ce8:c.instructions+=4;goto B401ce8;
case 0x401cec:c.instructions+=3;goto B401cec;
case 0x401cef:c.instructions+=2;goto B401cef;
case 0x401cf1:c.instructions+=1;goto B401cf1;
case 0x401cf3:goto L401cf3;
case 0x401cf6:c.instructions+=3;goto B401cf6;
case 0x401cfd:c.instructions+=2;goto B401cfd;
case 0x401cfe:c.instructions+=1;goto B401cfe;
case 0x401d01:goto L401d01;
case 0x401d03:c.instructions+=6;goto B401d03;
case 0x401d05:c.instructions+=5;goto B401d05;
case 0x401d08:c.instructions+=4;goto B401d08;
case 0x401d0a:c.instructions+=3;goto B401d0a;
case 0x401d0d:c.instructions+=2;goto B401d0d;
case 0x401d0f:c.instructions+=1;goto B401d0f;
case 0x401d11:goto L401d11;
case 0x401d14:c.instructions+=3;goto B401d14;
case 0x401d18:c.instructions+=2;goto B401d18;
case 0x401d19:c.instructions+=1;goto B401d19;
case 0x401d1c:goto L401d1c;
case 0x401d1e:c.instructions+=2;goto B401d1e;
case 0x401d1f:c.instructions+=1;goto B401d1f;
case 0x401d30:goto L401d30;
case 0x401d36:c.instructions+=1;goto B401d36;
case 0x401d40:goto L401d40;
case 0x401d41:c.instructions+=14;goto B401d41;
case 0x401d42:c.instructions+=13;goto B401d42;
case 0x401d44:c.instructions+=12;goto B401d44;
case 0x401d45:c.instructions+=11;goto B401d45;
case 0x401d49:c.instructions+=10;goto B401d49;
case 0x401d4b:c.instructions+=9;goto B401d4b;
case 0x401d4d:c.instructions+=8;goto B401d4d;
case 0x401d50:c.instructions+=7;goto B401d50;
case 0x401d51:c.instructions+=6;goto B401d51;
case 0x401d53:c.instructions+=5;goto B401d53;
case 0x401d56:c.instructions+=4;goto B401d56;
case 0x401d59:c.instructions+=3;goto B401d59;
case 0x401d5c:c.instructions+=2;goto B401d5c;
case 0x401d5e:c.instructions+=1;goto B401d5e;
case 0x401d63:goto L401d63;
case 0x401d66:c.instructions+=10;goto B401d66;
case 0x401d69:c.instructions+=9;goto B401d69;
case 0x401d6c:c.instructions+=8;goto B401d6c;
case 0x401d6f:c.instructions+=7;goto B401d6f;
case 0x401d70:c.instructions+=6;goto B401d70;
case 0x401d73:c.instructions+=5;goto B401d73;
case 0x401d76:c.instructions+=4;goto B401d76;
case 0x401d78:c.instructions+=3;goto B401d78;
case 0x401d7b:c.instructions+=2;goto B401d7b;
case 0x401d7f:c.instructions+=1;goto B401d7f;
case 0x401d81:goto L401d81;
case 0x401d83:c.instructions+=3;goto B401d83;
case 0x401d89:c.instructions+=2;goto B401d89;
case 0x401d8b:c.instructions+=1;goto B401d8b;
case 0x401d90:goto L401d90;
case 0x401d94:c.instructions+=4;goto B401d94;
case 0x401d97:c.instructions+=3;goto B401d97;
case 0x401d9a:c.instructions+=2;goto B401d9a;
case 0x401d9b:c.instructions+=1;goto B401d9b;
case 0x401d9d:goto L401d9d;
case 0x401da3:c.instructions+=2;goto B401da3;
case 0x401da8:c.instructions+=1;goto B401da8;
case 0x401db0:goto L401db0;
case 0x401db4:c.instructions+=4;goto B401db4;
case 0x401db7:c.instructions+=3;goto B401db7;
case 0x401dba:c.instructions+=2;goto B401dba;
case 0x401dbb:c.instructions+=1;goto B401dbb;
case 0x401dbd:goto L401dbd;
case 0x401dc3:c.instructions+=1;goto B401dc3;
case 0x401dc8:goto L401dc8;
case 0x401dcb:c.instructions+=4;goto B401dcb;
case 0x401dcd:c.instructions+=3;goto B401dcd;
case 0x401dce:c.instructions+=2;goto B401dce;
case 0x401dcf:c.instructions+=1;goto B401dcf;
case 0x401dd1:goto L401dd1;
case 0x401dd7:c.instructions+=18;goto B401dd7;
case 0x401ddd:c.instructions+=17;goto B401ddd;
case 0x401de3:c.instructions+=16;goto B401de3;
case 0x401de9:c.instructions+=15;goto B401de9;
case 0x401def:c.instructions+=14;goto B401def;
case 0x401df5:c.instructions+=13;goto B401df5;
case 0x401dfb:c.instructions+=12;goto B401dfb;
case 0x401e01:c.instructions+=11;goto B401e01;
case 0x401e07:c.instructions+=10;goto B401e07;
case 0x401e0d:c.instructions+=9;goto B401e0d;
case 0x401e13:c.instructions+=8;goto B401e13;
case 0x401e14:c.instructions+=7;goto B401e14;
case 0x401e1a:c.instructions+=6;goto B401e1a;
case 0x401e20:c.instructions+=5;goto B401e20;
case 0x401e21:c.instructions+=4;goto B401e21;
case 0x401e22:c.instructions+=3;goto B401e22;
case 0x401e28:c.instructions+=2;goto B401e28;
case 0x401e29:c.instructions+=1;goto B401e29;
case 0x401e30:goto L401e30;
case 0x401e34:c.instructions+=9;goto B401e34;
case 0x401e3a:c.instructions+=8;goto B401e3a;
case 0x401e3d:c.instructions+=7;goto B401e3d;
case 0x401e40:c.instructions+=6;goto B401e40;
case 0x401e41:c.instructions+=5;goto B401e41;
case 0x401e47:c.instructions+=4;goto B401e47;
case 0x401e4a:c.instructions+=3;goto B401e4a;
case 0x401e4c:c.instructions+=2;goto B401e4c;
case 0x401e4d:c.instructions+=1;goto B401e4d;
case 0x401e4f:goto L401e4f;
case 0x401e55:c.instructions+=5;goto B401e55;
case 0x401e57:c.instructions+=4;goto B401e57;
case 0x401e61:c.instructions+=3;goto B401e61;
case 0x401e67:c.instructions+=2;goto B401e67;
case 0x401e69:c.instructions+=1;goto B401e69;
case 0x401e6a:goto L401e6a;
case 0x401e6c:c.instructions+=2;goto B401e6c;
case 0x401e72:c.instructions+=1;goto B401e72;
case 0x401e80:goto L401e80;
case 0x401e84:c.instructions+=10;goto B401e84;
case 0x401e8a:c.instructions+=9;goto B401e8a;
case 0x401e8d:c.instructions+=8;goto B401e8d;
case 0x401e90:c.instructions+=7;goto B401e90;
case 0x401e93:c.instructions+=6;goto B401e93;
case 0x401e94:c.instructions+=5;goto B401e94;
case 0x401e9a:c.instructions+=4;goto B401e9a;
case 0x401e9d:c.instructions+=3;goto B401e9d;
case 0x401e9f:c.instructions+=2;goto B401e9f;
case 0x401ea0:c.instructions+=1;goto B401ea0;
case 0x401ea2:goto L401ea2;
case 0x401ea8:c.instructions+=5;goto B401ea8;
case 0x401eaa:c.instructions+=4;goto B401eaa;
case 0x401eb4:c.instructions+=3;goto B401eb4;
case 0x401eba:c.instructions+=2;goto B401eba;
case 0x401ebc:c.instructions+=1;goto B401ebc;
case 0x401ebd:goto L401ebd;
case 0x401ebf:c.instructions+=2;goto B401ebf;
case 0x401ec5:c.instructions+=1;goto B401ec5;
case 0x401ed0:goto L401ed0;
case 0x401ed4:c.instructions+=2;goto B401ed4;
case 0x401ed8:c.instructions+=1;goto B401ed8;
case 0x401eda:goto L401eda;
case 0x401ede:c.instructions+=2;goto B401ede;
case 0x401ee2:c.instructions+=1;goto B401ee2;
case 0x401ee4:goto L401ee4;
case 0x401ee7:c.instructions+=2;goto B401ee7;
case 0x401ee9:c.instructions+=1;goto B401ee9;
case 0x401eeb:goto L401eeb;
case 0x401ef2:c.instructions+=4;goto B401ef2;
case 0x401ef5:c.instructions+=3;goto B401ef5;
case 0x401ef8:c.instructions+=2;goto B401ef8;
case 0x401eff:c.instructions+=1;goto B401eff;
case 0x401f00:goto L401f00;
case 0x401f03:c.instructions+=4;goto B401f03;
case 0x401f05:c.instructions+=3;goto B401f05;
case 0x401f08:c.instructions+=2;goto B401f08;
case 0x401f0f:c.instructions+=1;goto B401f0f;
case 0x401f10:goto L401f10;
case 0x401f12:c.instructions+=1;goto B401f12;
case 0x401f20:goto L401f20;
case 0x401f24:c.instructions+=2;goto B401f24;
case 0x401f28:c.instructions+=1;goto B401f28;
case 0x401f2a:goto L401f2a;
case 0x401f2e:c.instructions+=2;goto B401f2e;
case 0x401f32:c.instructions+=1;goto B401f32;
case 0x401f34:goto L401f34;
case 0x401f37:c.instructions+=2;goto B401f37;
case 0x401f39:c.instructions+=1;goto B401f39;
case 0x401f3b:goto L401f3b;
case 0x401f42:c.instructions+=4;goto B401f42;
case 0x401f45:c.instructions+=3;goto B401f45;
case 0x401f48:c.instructions+=2;goto B401f48;
case 0x401f4f:c.instructions+=1;goto B401f4f;
case 0x401f54:goto L401f54;
case 0x401f57:c.instructions+=4;goto B401f57;
case 0x401f59:c.instructions+=3;goto B401f59;
case 0x401f5c:c.instructions+=2;goto B401f5c;
case 0x401f63:c.instructions+=1;goto B401f63;
case 0x401f68:goto L401f68;
case 0x401f6a:c.instructions+=1;goto B401f6a;
case 0x401f70:goto L401f70;
case 0x401f73:c.instructions+=2;goto B401f73;
case 0x401f75:c.instructions+=1;goto B401f75;
case 0x401f77:goto L401f77;
case 0x401f7a:c.instructions+=2;goto B401f7a;
case 0x401f7d:c.instructions+=1;goto B401f7d;
case 0x401f7e:goto L401f7e;
case 0x401f84:c.instructions+=1;goto B401f84;
case 0x401f90:goto L401f90;
case 0x401f92:c.instructions+=2;goto B401f92;
case 0x401f98:c.instructions+=1;goto B401f98;
case 0x401fa0:goto L401fa0;
case 0x401fa6:c.instructions+=2;goto B401fa6;
case 0x401fa8:c.instructions+=1;goto B401fa8;
case 0x401faa:goto L401faa;
case 0x401faf:c.instructions+=1;goto B401faf;
case 0x401fb1:goto L401fb1;
case 0x401fb6:c.instructions+=3;goto B401fb6;
case 0x401fb8:c.instructions+=2;goto B401fb8;
case 0x401fbb:c.instructions+=1;goto B401fbb;
case 0x401fbc:goto L401fbc;
case 0x401fbe:c.instructions+=3;goto B401fbe;
case 0x401fc0:c.instructions+=2;goto B401fc0;
case 0x401fc3:c.instructions+=1;goto B401fc3;
case 0x401fd0:goto L401fd0;
case 0x401fd6:c.instructions+=1;goto B401fd6;
case 0x401fe0:goto L401fe0;
case 0x401fe5:c.instructions+=4;goto B401fe5;
case 0x401fe6:c.instructions+=3;goto B401fe6;
case 0x401fe8:c.instructions+=2;goto B401fe8;
case 0x401fee:c.instructions+=1;goto B401fee;
case 0x401ff0:goto L401ff0;
case 0x401ff1:c.instructions+=1;goto B401ff1;
case 0x401ff6:goto L401ff6;
case 0x401ff9:goto L401ff9;
case 0x401ffb:c.instructions+=2;goto B401ffb;
case 0x401ffc:c.instructions+=1;goto B401ffc;
default:missing_instruction(c.pc);}
B401000:L401000:{c.instructions+=7;NFSU2_TR(0x401000);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B401004:{NFSU2_TR(0x401004);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B401005:{NFSU2_TR(0x401005);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B401009:{NFSU2_TR(0x401009);
__builtin_memmove((R+0),(R+4),4);
}
B40100b:{NFSU2_TR(0x40100b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40100c:{NFSU2_TR(0x40100c);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B401010:{NFSU2_TR(0x401010);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B401013:L401013:{c.instructions+=1;NFSU2_TR(0x401013);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L401015;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x401013u);}goto L401013;}
}
B401015:L401015:{c.instructions+=2;NFSU2_TR(0x401015);
__builtin_memmove((R+4),(R+0),4);
}
B401017:{NFSU2_TR(0x401017);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B40101a:L40101a:{c.instructions+=1;NFSU2_TR(0x40101a);
u8 U[35];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L40101c;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x40101au);}goto L40101a;}
}
B40101c:L40101c:{c.instructions+=3;NFSU2_TR(0x40101c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B40101d:{NFSU2_TR(0x40101d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B40101e:{NFSU2_TR(0x40101e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B401020:L401020:{c.instructions+=3;NFSU2_TR(0x401020);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B401024:{NFSU2_TR(0x401024);
{u32 ea_=u32(u32(7881272u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B40102a:{NFSU2_TR(0x40102a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x40102full));
TAIL_STATIC(0x75bed4u,75b);
}
B40102f:L40102f:{c.instructions+=10;NFSU2_TR(0x40102f);
__builtin_memmove((R+4),(R+0),4);
}
B401031:{NFSU2_TR(0x401031);
w4(R+0,u32(0xb60b60b7ull));
}
B401036:{NFSU2_TR(0x401036);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(r4(R+4)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(u64(r8(U+16))>>32));
w4(R+0,u32(r8(U+16)));
}
B401038:{NFSU2_TR(0x401038);
__builtin_memmove((R+0),(R+8),4);
}
B40103a:{NFSU2_TR(0x40103a);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+4))));
}
B40103c:{NFSU2_TR(0x40103c);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+0,sar<u32>(r4(R+0),u64(r4(U+0))));
}
B40103f:{NFSU2_TR(0x40103f);
__builtin_memmove((R+4),(R+0),4);
}
B401041:{NFSU2_TR(0x401041);
u8 U[4];
w4(U+0,u32(u32(u32(0x1full))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B401044:{NFSU2_TR(0x401044);
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
B401046:{NFSU2_TR(0x401046);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B401050:L401050:{c.instructions+=5;NFSU2_TR(0x401050);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B401054:{NFSU2_TR(0x401054);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B401058:{NFSU2_TR(0x401058);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B40105a:{NFSU2_TR(0x40105a);
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
B40105d:{NFSU2_TR(0x40105d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L401064;}}
}
B40105f:L40105f:{c.instructions+=2;NFSU2_TR(0x40105f);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B401063:{NFSU2_TR(0x401063);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B401064:L401064:{c.instructions+=2;NFSU2_TR(0x401064);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B401068:{NFSU2_TR(0x401068);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B401070:L401070:{c.instructions+=5;NFSU2_TR(0x401070);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B401074:{NFSU2_TR(0x401074);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B401078:{NFSU2_TR(0x401078);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B40107a:{NFSU2_TR(0x40107a);
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
B40107d:{NFSU2_TR(0x40107d);
if(r1(R+514)){{goto L401084;}}
}
B40107f:L40107f:{c.instructions+=2;NFSU2_TR(0x40107f);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B401083:{NFSU2_TR(0x401083);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B401084:L401084:{c.instructions+=2;NFSU2_TR(0x401084);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B401088:{NFSU2_TR(0x401088);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B401090:L401090:{c.instructions+=5;NFSU2_TR(0x401090);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B401094:{NFSU2_TR(0x401094);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B401098:{NFSU2_TR(0x401098);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B40109a:{NFSU2_TR(0x40109a);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B40109d:{NFSU2_TR(0x40109d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4010a5;}}
}
B40109f:L40109f:{c.instructions+=2;NFSU2_TR(0x40109f);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4010a3:{NFSU2_TR(0x4010a3);
{goto L4010a9;}
}
B4010a5:L4010a5:{c.instructions+=1;NFSU2_TR(0x4010a5);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4010a9:L4010a9:{c.instructions+=5;NFSU2_TR(0x4010a9);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4010ad:{NFSU2_TR(0x4010ad);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B4010af:{NFSU2_TR(0x4010af);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4010b1:{NFSU2_TR(0x4010b1);
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
B4010b4:{NFSU2_TR(0x4010b4);
if(r1(R+514)){{goto L4010bc;}}
}
B4010b6:L4010b6:{c.instructions+=2;NFSU2_TR(0x4010b6);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B4010b8:{NFSU2_TR(0x4010b8);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4010bc:L4010bc:{c.instructions+=1;NFSU2_TR(0x4010bc);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4010c0:L4010c0:{c.instructions+=7;NFSU2_TR(0x4010c0);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4010c4:{NFSU2_TR(0x4010c4);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B4010c8:{NFSU2_TR(0x4010c8);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B4010ca:{NFSU2_TR(0x4010ca);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B4010ce:{NFSU2_TR(0x4010ce);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4010d0:{NFSU2_TR(0x4010d0);
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
B4010d3:{NFSU2_TR(0x4010d3);
if(r1(R+514)){{goto L4010db;}}
}
B4010d5:L4010d5:{c.instructions+=2;NFSU2_TR(0x4010d5);
w4(R+0,u32(0x1ull));
}
B4010da:{NFSU2_TR(0x4010da);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4010db:L4010db:{c.instructions+=2;NFSU2_TR(0x4010db);
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
B4010dd:{NFSU2_TR(0x4010dd);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4010e0:L4010e0:{c.instructions+=3;NFSU2_TR(0x4010e0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4010e4:{NFSU2_TR(0x4010e4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4010e5:{NFSU2_TR(0x4010e5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4010eaull));
TAIL_STATIC(0x43c490u,43c);
}
B4010ea:L4010ea:{c.instructions+=5;NFSU2_TR(0x4010ea);
w4(R+4,u32(0x4000ull));
}
B4010ef:{NFSU2_TR(0x4010ef);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4010f2:{NFSU2_TR(0x4010f2);
u8 U[6];
w1(R+512,u8((r4(R+4))<(r4(R+0))));
w1(R+523,sborrow<u32>(r4(R+4),r4(R+0)));
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+0))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4010f4:{NFSU2_TR(0x4010f4);
__builtin_memmove((R+0),(R+4),2);
}
B4010f7:{NFSU2_TR(0x4010f7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B401100:L401100:{c.instructions+=5;NFSU2_TR(0x401100);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B401104:{NFSU2_TR(0x401104);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B401105:{NFSU2_TR(0x401105);
{u32 ea_=u32(u32(7881300u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B40110b:{NFSU2_TR(0x40110b);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B40110e:{NFSU2_TR(0x40110e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x401113ull));
TAIL_STATIC(0x43c350u,43c);
}
B401113:L401113:{c.instructions+=2;NFSU2_TR(0x401113);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B401114:{NFSU2_TR(0x401114);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B401120:L401120:{c.instructions+=13;NFSU2_TR(0x401120);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B401124:{NFSU2_TR(0x401124);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B401127:{NFSU2_TR(0x401127);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B40112b:{NFSU2_TR(0x40112b);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B40112e:{NFSU2_TR(0x40112e);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B401130:{NFSU2_TR(0x401130);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B401134:{NFSU2_TR(0x401134);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B401136:{NFSU2_TR(0x401136);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B401138:{NFSU2_TR(0x401138);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B40113a:{NFSU2_TR(0x40113a);
__asm__ volatile(".byte 0xd8,0xe1":::"memory");
}
B40113c:{NFSU2_TR(0x40113c);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B40113f:{NFSU2_TR(0x40113f);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B401141:{NFSU2_TR(0x401141);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B401150:L401150:{c.instructions+=15;NFSU2_TR(0x401150);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B401154:{NFSU2_TR(0x401154);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B401158:{NFSU2_TR(0x401158);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B40115a:{NFSU2_TR(0x40115a);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B40115c:{NFSU2_TR(0x40115c);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B40115f:{NFSU2_TR(0x40115f);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B401162:{NFSU2_TR(0x401162);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B401164:{NFSU2_TR(0x401164);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B401166:{NFSU2_TR(0x401166);
__asm__ volatile(".byte 0xd9,0xc2":::"memory");
}
B401168:{NFSU2_TR(0x401168);
__asm__ volatile(".byte 0xd8,0xcb":::"memory");
}
B40116a:{NFSU2_TR(0x40116a);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B40116c:{NFSU2_TR(0x40116c);
__asm__ volatile(".byte 0xd9,0xfa":::"memory");
}
B40116e:{NFSU2_TR(0x40116e);
__asm__ volatile(".byte 0xdd,0xda":::"memory");
}
B401170:{NFSU2_TR(0x401170);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B401172:{NFSU2_TR(0x401172);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B401180:L401180:{c.instructions+=6;NFSU2_TR(0x401180);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B401184:{NFSU2_TR(0x401184);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x8ull))));
}
B401187:{NFSU2_TR(0x401187);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B401188:{NFSU2_TR(0x401188);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B40118c:{NFSU2_TR(0x40118c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40118d:{NFSU2_TR(0x40118d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x401192ull));
TAIL_STATIC(0x43ce50u,43c);
}
B401192:L401192:{c.instructions+=7;NFSU2_TR(0x401192);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B401196:{NFSU2_TR(0x401196);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B40119a:{NFSU2_TR(0x40119a);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B40119e:{NFSU2_TR(0x40119e);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+0)),r4(U+0));
}
B4011a0:{NFSU2_TR(0x4011a0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4011a3:{NFSU2_TR(0x4011a3);
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
B4011a6:{NFSU2_TR(0x4011a6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4011b0:L4011b0:{c.instructions+=18;NFSU2_TR(0x4011b0);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4011b4:{NFSU2_TR(0x4011b4);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4011b7:{NFSU2_TR(0x4011b7);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4011bb:{NFSU2_TR(0x4011bb);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4011be:{NFSU2_TR(0x4011be);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4011c1:{NFSU2_TR(0x4011c1);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4011c4:{NFSU2_TR(0x4011c4);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4011c8:{NFSU2_TR(0x4011c8);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4011ca:{NFSU2_TR(0x4011ca);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4011ce:{NFSU2_TR(0x4011ce);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B4011d0:{NFSU2_TR(0x4011d0);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4011d2:{NFSU2_TR(0x4011d2);
__asm__ volatile(".byte 0xd9,0xca":::"memory");
}
B4011d4:{NFSU2_TR(0x4011d4);
__asm__ volatile(".byte 0xd8,0xe2":::"memory");
}
B4011d6:{NFSU2_TR(0x4011d6);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4011d9:{NFSU2_TR(0x4011d9);
__asm__ volatile(".byte 0xdd,0xd9":::"memory");
}
B4011db:{NFSU2_TR(0x4011db);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B4011df:{NFSU2_TR(0x4011df);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4011e2:{NFSU2_TR(0x4011e2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4011f0:L4011f0:{c.instructions+=13;NFSU2_TR(0x4011f0);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4011f4:{NFSU2_TR(0x4011f4);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4011f7:{NFSU2_TR(0x4011f7);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4011fa:{NFSU2_TR(0x4011fa);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4011fe:{NFSU2_TR(0x4011fe);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B401200:{NFSU2_TR(0x401200);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B401204:{NFSU2_TR(0x401204);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B401206:{NFSU2_TR(0x401206);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B401208:{NFSU2_TR(0x401208);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B40120c:{NFSU2_TR(0x40120c);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B40120f:{NFSU2_TR(0x40120f);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B401213:{NFSU2_TR(0x401213);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B401216:{NFSU2_TR(0x401216);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B401220:L401220:{c.instructions+=13;NFSU2_TR(0x401220);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B401224:{NFSU2_TR(0x401224);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B401227:{NFSU2_TR(0x401227);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B40122a:{NFSU2_TR(0x40122a);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B40122d:{NFSU2_TR(0x40122d);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B401230:{NFSU2_TR(0x401230);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B401232:{NFSU2_TR(0x401232);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B401236:{NFSU2_TR(0x401236);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B401238:{NFSU2_TR(0x401238);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B40123a:{NFSU2_TR(0x40123a);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B40123c:{NFSU2_TR(0x40123c);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B40123f:{NFSU2_TR(0x40123f);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B401242:{NFSU2_TR(0x401242);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B401250:L401250:{c.instructions+=13;NFSU2_TR(0x401250);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B401253:{NFSU2_TR(0x401253);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B401257:{NFSU2_TR(0x401257);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B40125a:{NFSU2_TR(0x40125a);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B40125d:{NFSU2_TR(0x40125d);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B401260:{NFSU2_TR(0x401260);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B401262:{NFSU2_TR(0x401262);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B401264:{NFSU2_TR(0x401264);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B401268:{NFSU2_TR(0x401268);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B40126a:{NFSU2_TR(0x40126a);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B40126c:{NFSU2_TR(0x40126c);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B40126f:{NFSU2_TR(0x40126f);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B401272:{NFSU2_TR(0x401272);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B401280:L401280:{c.instructions+=12;NFSU2_TR(0x401280);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B401284:{NFSU2_TR(0x401284);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B401287:{NFSU2_TR(0x401287);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B401289:{NFSU2_TR(0x401289);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B40128c:{NFSU2_TR(0x40128c);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B401290:{NFSU2_TR(0x401290);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B401294:{NFSU2_TR(0x401294);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B401296:{NFSU2_TR(0x401296);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B401299:{NFSU2_TR(0x401299);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B40129b:{NFSU2_TR(0x40129b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B40129e:{NFSU2_TR(0x40129e);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4012a1:{NFSU2_TR(0x4012a1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4012b0:L4012b0:{c.instructions+=46;NFSU2_TR(0x4012b0);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4012b4:{NFSU2_TR(0x4012b4);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4012b7:{NFSU2_TR(0x4012b7);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4012ba:{NFSU2_TR(0x4012ba);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4012bd:{NFSU2_TR(0x4012bd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B4012bf:{NFSU2_TR(0x4012bf);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4012c3:{NFSU2_TR(0x4012c3);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B4012c5:{NFSU2_TR(0x4012c5);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4012c9:{NFSU2_TR(0x4012c9);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4012cc:{NFSU2_TR(0x4012cc);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+0)),r4(U+0));
}
B4012ce:{NFSU2_TR(0x4012ce);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4012d2:{NFSU2_TR(0x4012d2);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4012d5:{NFSU2_TR(0x4012d5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4012d8:{NFSU2_TR(0x4012d8);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4012db:{NFSU2_TR(0x4012db);
{u32 ea_=u32(r4(R+4)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4012de:{NFSU2_TR(0x4012de);
{u32 ea_=u32(r4(R+4)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4012e1:{NFSU2_TR(0x4012e1);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4012e5:{NFSU2_TR(0x4012e5);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4012e8:{NFSU2_TR(0x4012e8);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B4012ea:{NFSU2_TR(0x4012ea);
{u32 ea_=u32(r4(R+0)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4012ed:{NFSU2_TR(0x4012ed);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4012f0:{NFSU2_TR(0x4012f0);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4012f4:{NFSU2_TR(0x4012f4);
{u32 ea_=u32(r4(R+0)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4012f7:{NFSU2_TR(0x4012f7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4012fa:{NFSU2_TR(0x4012fa);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4012fd:{NFSU2_TR(0x4012fd);
{u32 ea_=u32(r4(R+4)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B401300:{NFSU2_TR(0x401300);
{u32 ea_=u32(r4(R+4)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B401303:{NFSU2_TR(0x401303);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B401307:{NFSU2_TR(0x401307);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B40130a:{NFSU2_TR(0x40130a);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B40130c:{NFSU2_TR(0x40130c);
{u32 ea_=u32(r4(R+0)+u32(36u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B40130f:{NFSU2_TR(0x40130f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B401312:{NFSU2_TR(0x401312);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B401316:{NFSU2_TR(0x401316);
{u32 ea_=u32(r4(R+0)+u32(40u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B401319:{NFSU2_TR(0x401319);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B40131c:{NFSU2_TR(0x40131c);
{u32 ea_=u32(r4(R+4)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B40131f:{NFSU2_TR(0x40131f);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B401322:{NFSU2_TR(0x401322);
{u32 ea_=u32(r4(R+4)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B401325:{NFSU2_TR(0x401325);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B401328:{NFSU2_TR(0x401328);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B40132a:{NFSU2_TR(0x40132a);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B40132e:{NFSU2_TR(0x40132e);
{u32 ea_=u32(r4(R+0)+u32(52u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B401331:{NFSU2_TR(0x401331);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B401334:{NFSU2_TR(0x401334);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B401337:{NFSU2_TR(0x401337);
{u32 ea_=u32(r4(R+0)+u32(56u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B40133a:{NFSU2_TR(0x40133a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B401340:L401340:{c.instructions+=44;NFSU2_TR(0x401340);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B401344:{NFSU2_TR(0x401344);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B401347:{NFSU2_TR(0x401347);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B40134a:{NFSU2_TR(0x40134a);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B40134d:{NFSU2_TR(0x40134d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B40134f:{NFSU2_TR(0x40134f);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B401353:{NFSU2_TR(0x401353);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B401355:{NFSU2_TR(0x401355);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B401359:{NFSU2_TR(0x401359);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B40135c:{NFSU2_TR(0x40135c);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+0)),r4(U+0));
}
B40135e:{NFSU2_TR(0x40135e);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B401362:{NFSU2_TR(0x401362);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B401365:{NFSU2_TR(0x401365);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B401368:{NFSU2_TR(0x401368);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B40136b:{NFSU2_TR(0x40136b);
{u32 ea_=u32(r4(R+4)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B40136e:{NFSU2_TR(0x40136e);
{u32 ea_=u32(r4(R+4)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B401371:{NFSU2_TR(0x401371);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B401375:{NFSU2_TR(0x401375);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B401378:{NFSU2_TR(0x401378);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B40137a:{NFSU2_TR(0x40137a);
{u32 ea_=u32(r4(R+0)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B40137d:{NFSU2_TR(0x40137d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B401380:{NFSU2_TR(0x401380);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B401384:{NFSU2_TR(0x401384);
{u32 ea_=u32(r4(R+0)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B401387:{NFSU2_TR(0x401387);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B40138a:{NFSU2_TR(0x40138a);
{u32 ea_=u32(r4(R+4)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B40138d:{NFSU2_TR(0x40138d);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B401390:{NFSU2_TR(0x401390);
{u32 ea_=u32(r4(R+4)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B401393:{NFSU2_TR(0x401393);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B401396:{NFSU2_TR(0x401396);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B401399:{NFSU2_TR(0x401399);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B40139b:{NFSU2_TR(0x40139b);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B40139f:{NFSU2_TR(0x40139f);
{u32 ea_=u32(r4(R+0)+u32(36u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4013a2:{NFSU2_TR(0x4013a2);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4013a5:{NFSU2_TR(0x4013a5);
{u32 ea_=u32(r4(R+0)+u32(40u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4013a8:{NFSU2_TR(0x4013a8);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4013ac:{NFSU2_TR(0x4013ac);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4013af:{NFSU2_TR(0x4013af);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4013b2:{NFSU2_TR(0x4013b2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+4),(U+0),4);
}
B4013b4:{NFSU2_TR(0x4013b4);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B4013b6:{NFSU2_TR(0x4013b6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4013b9:{NFSU2_TR(0x4013b9);
{u32 ea_=u32(r4(R+0)+u32(52u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4013bc:{NFSU2_TR(0x4013bc);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3cull))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4013c3:{NFSU2_TR(0x4013c3);
{u32 ea_=u32(r4(R+0)+u32(56u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4013c6:{NFSU2_TR(0x4013c6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4013d0:L4013d0:{c.instructions+=6;NFSU2_TR(0x4013d0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4013d4:{NFSU2_TR(0x4013d4);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4013d5:{NFSU2_TR(0x4013d5);
__builtin_memmove((R+24),(R+4),4);
}
B4013d7:{NFSU2_TR(0x4013d7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4013d8:{NFSU2_TR(0x4013d8);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4013d9:{NFSU2_TR(0x4013d9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4013deull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4012b0u);}goto L4012b0;}
}
B4013de:L4013de:{c.instructions+=4;NFSU2_TR(0x4013de);
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
B4013e1:{NFSU2_TR(0x4013e1);
__builtin_memmove((R+0),(R+24),4);
}
B4013e3:{NFSU2_TR(0x4013e3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4013e4:{NFSU2_TR(0x4013e4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4013f0:L4013f0:{c.instructions+=203;NFSU2_TR(0x4013f0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4013f1:{NFSU2_TR(0x4013f1);
__builtin_memmove((R+20),(R+16),4);
}
B4013f3:{NFSU2_TR(0x4013f3);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B4013f6:{NFSU2_TR(0x4013f6);
u8 U[6];
w1(R+512,u8((r4(R+16))<(u32(0x40ull))));
w1(R+523,sborrow<u32>(r4(R+16),u32(0x40ull)));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x40ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4013f9:{NFSU2_TR(0x4013f9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4013fc:{NFSU2_TR(0x4013fc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4013ff:{NFSU2_TR(0x4013ff);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B401401:{NFSU2_TR(0x401401);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B401403:{NFSU2_TR(0x401403);
{u32 ea_=u32(r4(R+4)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B401406:{NFSU2_TR(0x401406);
{u32 ea_=u32(r4(R+0)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B401409:{NFSU2_TR(0x401409);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B40140b:{NFSU2_TR(0x40140b);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B40140e:{NFSU2_TR(0x40140e);
{u32 ea_=u32(r4(R+0)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B401411:{NFSU2_TR(0x401411);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B401413:{NFSU2_TR(0x401413);
{u32 ea_=u32(r4(R+0)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B401416:{NFSU2_TR(0x401416);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B401419:{NFSU2_TR(0x401419);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B40141b:{NFSU2_TR(0x40141b);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B40141f:{NFSU2_TR(0x40141f);
{u32 ea_=u32(r4(R+0)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B401422:{NFSU2_TR(0x401422);
{u32 ea_=u32(r4(R+4)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B401425:{NFSU2_TR(0x401425);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B401428:{NFSU2_TR(0x401428);
{u32 ea_=u32(r4(R+0)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B40142b:{NFSU2_TR(0x40142b);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B40142d:{NFSU2_TR(0x40142d);
{u32 ea_=u32(r4(R+0)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B401430:{NFSU2_TR(0x401430);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B401433:{NFSU2_TR(0x401433);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B401435:{NFSU2_TR(0x401435);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B401438:{NFSU2_TR(0x401438);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B40143a:{NFSU2_TR(0x40143a);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B40143c:{NFSU2_TR(0x40143c);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B401440:{NFSU2_TR(0x401440);
{u32 ea_=u32(r4(R+0)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B401443:{NFSU2_TR(0x401443);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B401446:{NFSU2_TR(0x401446);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B401449:{NFSU2_TR(0x401449);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B40144b:{NFSU2_TR(0x40144b);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B40144d:{NFSU2_TR(0x40144d);
{u32 ea_=u32(r4(R+4)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B401450:{NFSU2_TR(0x401450);
{u32 ea_=u32(r4(R+0)+u32(56u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B401453:{NFSU2_TR(0x401453);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B401455:{NFSU2_TR(0x401455);
{u32 ea_=u32(r4(R+0)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B401458:{NFSU2_TR(0x401458);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B40145b:{NFSU2_TR(0x40145b);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B40145d:{NFSU2_TR(0x40145d);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B401461:{NFSU2_TR(0x401461);
{u32 ea_=u32(r4(R+0)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B401464:{NFSU2_TR(0x401464);
{u32 ea_=u32(r4(R+4)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B401467:{NFSU2_TR(0x401467);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B40146a:{NFSU2_TR(0x40146a);
{u32 ea_=u32(r4(R+0)+u32(44u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B40146d:{NFSU2_TR(0x40146d);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B40146f:{NFSU2_TR(0x40146f);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B401471:{NFSU2_TR(0x401471);
{u32 ea_=u32(r4(R+0)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B401474:{NFSU2_TR(0x401474);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B401476:{NFSU2_TR(0x401476);
{u32 ea_=u32(r4(R+0)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B401479:{NFSU2_TR(0x401479);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B40147c:{NFSU2_TR(0x40147c);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B40147e:{NFSU2_TR(0x40147e);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B401482:{NFSU2_TR(0x401482);
{u32 ea_=u32(r4(R+4)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B401485:{NFSU2_TR(0x401485);
{u32 ea_=u32(r4(R+0)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B401488:{NFSU2_TR(0x401488);
{u32 ea_=u32(r4(R+4)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B40148b:{NFSU2_TR(0x40148b);
{u32 ea_=u32(r4(R+0)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B40148e:{NFSU2_TR(0x40148e);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B401490:{NFSU2_TR(0x401490);
{u32 ea_=u32(r4(R+0)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B401493:{NFSU2_TR(0x401493);
{u32 ea_=u32(r4(R+4)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B401496:{NFSU2_TR(0x401496);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B401498:{NFSU2_TR(0x401498);
{u32 ea_=u32(r4(R+4)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B40149b:{NFSU2_TR(0x40149b);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B40149d:{NFSU2_TR(0x40149d);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B40149f:{NFSU2_TR(0x40149f);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4014a3:{NFSU2_TR(0x4014a3);
{u32 ea_=u32(r4(R+4)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4014a6:{NFSU2_TR(0x4014a6);
{u32 ea_=u32(r4(R+0)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4014a9:{NFSU2_TR(0x4014a9);
{u32 ea_=u32(r4(R+4)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4014ac:{NFSU2_TR(0x4014ac);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4014af:{NFSU2_TR(0x4014af);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B4014b1:{NFSU2_TR(0x4014b1);
{u32 ea_=u32(r4(R+4)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4014b4:{NFSU2_TR(0x4014b4);
{u32 ea_=u32(r4(R+0)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4014b7:{NFSU2_TR(0x4014b7);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B4014b9:{NFSU2_TR(0x4014b9);
{u32 ea_=u32(r4(R+4)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4014bc:{NFSU2_TR(0x4014bc);
{u32 ea_=u32(r4(R+0)+u32(52u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4014bf:{NFSU2_TR(0x4014bf);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B4014c1:{NFSU2_TR(0x4014c1);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4014c5:{NFSU2_TR(0x4014c5);
{u32 ea_=u32(r4(R+4)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4014c8:{NFSU2_TR(0x4014c8);
{u32 ea_=u32(r4(R+0)+u32(56u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4014cb:{NFSU2_TR(0x4014cb);
{u32 ea_=u32(r4(R+4)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4014ce:{NFSU2_TR(0x4014ce);
{u32 ea_=u32(r4(R+0)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4014d1:{NFSU2_TR(0x4014d1);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B4014d3:{NFSU2_TR(0x4014d3);
{u32 ea_=u32(r4(R+0)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4014d6:{NFSU2_TR(0x4014d6);
{u32 ea_=u32(r4(R+4)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4014d9:{NFSU2_TR(0x4014d9);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B4014db:{NFSU2_TR(0x4014db);
{u32 ea_=u32(r4(R+4)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4014de:{NFSU2_TR(0x4014de);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4014e1:{NFSU2_TR(0x4014e1);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B4014e3:{NFSU2_TR(0x4014e3);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4014e7:{NFSU2_TR(0x4014e7);
{u32 ea_=u32(r4(R+0)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4014ea:{NFSU2_TR(0x4014ea);
{u32 ea_=u32(r4(R+4)+u32(28u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4014ed:{NFSU2_TR(0x4014ed);
{u32 ea_=u32(r4(R+4)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4014f0:{NFSU2_TR(0x4014f0);
{u32 ea_=u32(r4(R+0)+u32(44u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4014f3:{NFSU2_TR(0x4014f3);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B4014f5:{NFSU2_TR(0x4014f5);
{u32 ea_=u32(r4(R+4)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4014f8:{NFSU2_TR(0x4014f8);
{u32 ea_=u32(r4(R+0)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4014fb:{NFSU2_TR(0x4014fb);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B4014fd:{NFSU2_TR(0x4014fd);
{u32 ea_=u32(r4(R+0)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B401500:{NFSU2_TR(0x401500);
{u32 ea_=u32(r4(R+4)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B401503:{NFSU2_TR(0x401503);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B401505:{NFSU2_TR(0x401505);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B401509:{NFSU2_TR(0x401509);
{u32 ea_=u32(r4(R+4)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B40150c:{NFSU2_TR(0x40150c);
{u32 ea_=u32(r4(R+0)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B40150f:{NFSU2_TR(0x40150f);
{u32 ea_=u32(r4(R+4)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B401512:{NFSU2_TR(0x401512);
{u32 ea_=u32(r4(R+0)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B401515:{NFSU2_TR(0x401515);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B401517:{NFSU2_TR(0x401517);
{u32 ea_=u32(r4(R+0)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B40151a:{NFSU2_TR(0x40151a);
{u32 ea_=u32(r4(R+4)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B40151d:{NFSU2_TR(0x40151d);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B40151f:{NFSU2_TR(0x40151f);
{u32 ea_=u32(r4(R+4)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B401522:{NFSU2_TR(0x401522);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B401524:{NFSU2_TR(0x401524);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B401526:{NFSU2_TR(0x401526);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B40152a:{NFSU2_TR(0x40152a);
{u32 ea_=u32(r4(R+4)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B40152d:{NFSU2_TR(0x40152d);
{u32 ea_=u32(r4(R+0)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B401530:{NFSU2_TR(0x401530);
{u32 ea_=u32(r4(R+4)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B401533:{NFSU2_TR(0x401533);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B401536:{NFSU2_TR(0x401536);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B401538:{NFSU2_TR(0x401538);
{u32 ea_=u32(r4(R+4)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B40153b:{NFSU2_TR(0x40153b);
{u32 ea_=u32(r4(R+0)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B40153e:{NFSU2_TR(0x40153e);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B401540:{NFSU2_TR(0x401540);
{u32 ea_=u32(r4(R+4)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B401543:{NFSU2_TR(0x401543);
{u32 ea_=u32(r4(R+0)+u32(52u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B401546:{NFSU2_TR(0x401546);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B401548:{NFSU2_TR(0x401548);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B40154c:{NFSU2_TR(0x40154c);
{u32 ea_=u32(r4(R+4)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B40154f:{NFSU2_TR(0x40154f);
{u32 ea_=u32(r4(R+0)+u32(56u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B401552:{NFSU2_TR(0x401552);
{u32 ea_=u32(r4(R+4)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B401555:{NFSU2_TR(0x401555);
{u32 ea_=u32(r4(R+0)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B401558:{NFSU2_TR(0x401558);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B40155a:{NFSU2_TR(0x40155a);
{u32 ea_=u32(r4(R+0)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B40155d:{NFSU2_TR(0x40155d);
{u32 ea_=u32(r4(R+4)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B401560:{NFSU2_TR(0x401560);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B401562:{NFSU2_TR(0x401562);
{u32 ea_=u32(r4(R+4)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B401565:{NFSU2_TR(0x401565);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B401568:{NFSU2_TR(0x401568);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B40156a:{NFSU2_TR(0x40156a);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B40156e:{NFSU2_TR(0x40156e);
{u32 ea_=u32(r4(R+0)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B401571:{NFSU2_TR(0x401571);
{u32 ea_=u32(r4(R+4)+u32(44u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B401574:{NFSU2_TR(0x401574);
{u32 ea_=u32(r4(R+4)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B401577:{NFSU2_TR(0x401577);
{u32 ea_=u32(r4(R+0)+u32(44u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B40157a:{NFSU2_TR(0x40157a);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B40157c:{NFSU2_TR(0x40157c);
{u32 ea_=u32(r4(R+4)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B40157f:{NFSU2_TR(0x40157f);
{u32 ea_=u32(r4(R+0)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B401582:{NFSU2_TR(0x401582);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B401584:{NFSU2_TR(0x401584);
{u32 ea_=u32(r4(R+0)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B401587:{NFSU2_TR(0x401587);
{u32 ea_=u32(r4(R+4)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B40158a:{NFSU2_TR(0x40158a);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B40158c:{NFSU2_TR(0x40158c);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B401590:{NFSU2_TR(0x401590);
{u32 ea_=u32(r4(R+4)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B401593:{NFSU2_TR(0x401593);
{u32 ea_=u32(r4(R+0)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B401596:{NFSU2_TR(0x401596);
{u32 ea_=u32(r4(R+4)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B401599:{NFSU2_TR(0x401599);
{u32 ea_=u32(r4(R+0)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B40159c:{NFSU2_TR(0x40159c);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B40159e:{NFSU2_TR(0x40159e);
{u32 ea_=u32(r4(R+0)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4015a1:{NFSU2_TR(0x4015a1);
{u32 ea_=u32(r4(R+4)+u32(52u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4015a4:{NFSU2_TR(0x4015a4);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B4015a6:{NFSU2_TR(0x4015a6);
{u32 ea_=u32(r4(R+4)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4015a9:{NFSU2_TR(0x4015a9);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4015ab:{NFSU2_TR(0x4015ab);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B4015ad:{NFSU2_TR(0x4015ad);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4015b1:{NFSU2_TR(0x4015b1);
{u32 ea_=u32(r4(R+4)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4015b4:{NFSU2_TR(0x4015b4);
{u32 ea_=u32(r4(R+0)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4015b7:{NFSU2_TR(0x4015b7);
{u32 ea_=u32(r4(R+4)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4015ba:{NFSU2_TR(0x4015ba);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4015bd:{NFSU2_TR(0x4015bd);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B4015bf:{NFSU2_TR(0x4015bf);
{u32 ea_=u32(r4(R+4)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4015c2:{NFSU2_TR(0x4015c2);
{u32 ea_=u32(r4(R+0)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4015c5:{NFSU2_TR(0x4015c5);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B4015c7:{NFSU2_TR(0x4015c7);
{u32 ea_=u32(r4(R+4)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4015ca:{NFSU2_TR(0x4015ca);
{u32 ea_=u32(r4(R+0)+u32(52u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4015cd:{NFSU2_TR(0x4015cd);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B4015cf:{NFSU2_TR(0x4015cf);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4015d3:{NFSU2_TR(0x4015d3);
{u32 ea_=u32(r4(R+4)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4015d6:{NFSU2_TR(0x4015d6);
{u32 ea_=u32(r4(R+0)+u32(56u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4015d9:{NFSU2_TR(0x4015d9);
{u32 ea_=u32(r4(R+4)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4015dc:{NFSU2_TR(0x4015dc);
{u32 ea_=u32(r4(R+0)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4015df:{NFSU2_TR(0x4015df);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B4015e1:{NFSU2_TR(0x4015e1);
{u32 ea_=u32(r4(R+0)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4015e4:{NFSU2_TR(0x4015e4);
{u32 ea_=u32(r4(R+4)+u32(52u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4015e7:{NFSU2_TR(0x4015e7);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B4015e9:{NFSU2_TR(0x4015e9);
{u32 ea_=u32(r4(R+4)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4015ec:{NFSU2_TR(0x4015ec);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4015ef:{NFSU2_TR(0x4015ef);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B4015f1:{NFSU2_TR(0x4015f1);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4015f5:{NFSU2_TR(0x4015f5);
{u32 ea_=u32(r4(R+0)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4015f8:{NFSU2_TR(0x4015f8);
{u32 ea_=u32(r4(R+4)+u32(60u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4015fb:{NFSU2_TR(0x4015fb);
{u32 ea_=u32(r4(R+4)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4015fe:{NFSU2_TR(0x4015fe);
{u32 ea_=u32(r4(R+0)+u32(44u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B401601:{NFSU2_TR(0x401601);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B401603:{NFSU2_TR(0x401603);
{u32 ea_=u32(r4(R+4)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B401606:{NFSU2_TR(0x401606);
{u32 ea_=u32(r4(R+0)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B401609:{NFSU2_TR(0x401609);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B40160b:{NFSU2_TR(0x40160b);
{u32 ea_=u32(r4(R+0)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B40160e:{NFSU2_TR(0x40160e);
__builtin_memmove((R+0),(R+16),4);
}
B401612:{NFSU2_TR(0x401612);
{u32 ea_=u32(r4(R+4)+u32(52u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B401615:{NFSU2_TR(0x401615);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B401618:{NFSU2_TR(0x401618);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B401619:{NFSU2_TR(0x401619);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40161a:{NFSU2_TR(0x40161a);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B40161c:{NFSU2_TR(0x40161c);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B401620:{NFSU2_TR(0x401620);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x401625ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4012b0u);}goto L4012b0;}
}
B401625:L401625:{c.instructions+=4;NFSU2_TR(0x401625);
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
B401628:{NFSU2_TR(0x401628);
__builtin_memmove((R+16),(R+20),4);
}
B40162a:{NFSU2_TR(0x40162a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B40162b:{NFSU2_TR(0x40162b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B401630:L401630:{c.instructions+=6;NFSU2_TR(0x401630);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B401634:{NFSU2_TR(0x401634);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B401636:{NFSU2_TR(0x401636);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B401639:{NFSU2_TR(0x401639);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+8)),r4(U+0));
}
B40163b:{NFSU2_TR(0x40163b);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B40163e:{NFSU2_TR(0x40163e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B401650:L401650:{c.instructions+=3;NFSU2_TR(0x401650);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B401654:{NFSU2_TR(0x401654);
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
B401655:{NFSU2_TR(0x401655);
if(r1(R+519)){{goto L40167d;}}
}
B401657:L401657:{c.instructions+=9;NFSU2_TR(0x401657);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B401658:{NFSU2_TR(0x401658);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B40165c:{NFSU2_TR(0x40165c);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40165d:{NFSU2_TR(0x40165d);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B401661:{NFSU2_TR(0x401661);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B401662:{NFSU2_TR(0x401662);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B401666:{NFSU2_TR(0x401666);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B401667:{NFSU2_TR(0x401667);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((R+28),(U+0),4);
}
B40166a:{NFSU2_TR(0x40166a);
__builtin_memmove((R+12),(R+12),4);
}
B401670:L401670:{c.instructions+=2;NFSU2_TR(0x401670);
__builtin_memmove((R+4),(R+24),4);
}
B401672:{NFSU2_TR(0x401672);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x401674ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B401674:L401674:{c.instructions+=3;NFSU2_TR(0x401674);
w1(R+512,carry<u32>(r4(R+24),r4(R+20)));
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+20))));
}
B401676:{NFSU2_TR(0x401676);
u8 U[6];
w1(R+523,sborrow<u32>(r4(R+28),u32(0x1ull)));
w4(R+28,u32(u32(r4(R+28))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+28))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+28))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+28))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B401677:{NFSU2_TR(0x401677);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x401670u);}goto L401670;}}
}
B401679:L401679:{c.instructions+=4;NFSU2_TR(0x401679);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B40167a:{NFSU2_TR(0x40167a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B40167b:{NFSU2_TR(0x40167b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B40167c:{NFSU2_TR(0x40167c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B40167d:L40167d:{c.instructions+=1;NFSU2_TR(0x40167d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B401680:L401680:{c.instructions+=6;NFSU2_TR(0x401680);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B401684:{NFSU2_TR(0x401684);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B401685:{NFSU2_TR(0x401685);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x2f0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B40168b:{NFSU2_TR(0x40168b);
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
B40168d:{NFSU2_TR(0x40168d);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2f0ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B401693:{NFSU2_TR(0x401693);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L4016ab;}}
}
B401695:L401695:{c.instructions+=3;NFSU2_TR(0x401695);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2f4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B40169b:{NFSU2_TR(0x40169b);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+4))));
}
B40169d:{NFSU2_TR(0x40169d);
__builtin_memmove((R+4),(R+4),4);
}
B4016a0:L4016a0:{c.instructions+=5;NFSU2_TR(0x4016a0);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B4016a3:{NFSU2_TR(0x4016a3);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B4016a5:{NFSU2_TR(0x4016a5);
w1(R+512,carry<u32>(r4(R+0),u32(0x4ull)));
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B4016a8:{NFSU2_TR(0x4016a8);
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
B4016a9:{NFSU2_TR(0x4016a9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4016a0u);}goto L4016a0;}}
}
B4016ab:L4016ab:{c.instructions+=2;NFSU2_TR(0x4016ab);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4016ac:{NFSU2_TR(0x4016ac);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4016b0:L4016b0:{c.instructions+=13;NFSU2_TR(0x4016b0);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4016b2:{NFSU2_TR(0x4016b2);
u8 U[4];
w4(U+0,u32(0x771303ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4016b7:{NFSU2_TR(0x4016b7);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4016bd:{NFSU2_TR(0x4016bd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4016be:{NFSU2_TR(0x4016be);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4016c5:{NFSU2_TR(0x4016c5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4016c6:{NFSU2_TR(0x4016c6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4016c7:{NFSU2_TR(0x4016c7);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4016c8:{NFSU2_TR(0x4016c8);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4016cc:{NFSU2_TR(0x4016cc);
__builtin_memmove((R+24),(R+4),4);
}
B4016ce:{NFSU2_TR(0x4016ce);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4016cf:{NFSU2_TR(0x4016cf);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4016d3:{NFSU2_TR(0x4016d3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4016d8ull));
TAIL_STATIC(0x579f20u,579);
}
B4016d8:L4016d8:{c.instructions+=4;NFSU2_TR(0x4016d8);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4016d9:{NFSU2_TR(0x4016d9);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4016dc:{NFSU2_TR(0x4016dc);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4016e4:{NFSU2_TR(0x4016e4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4016e9ull));
TAIL_STATIC(0x579f20u,579);
}
B4016e9:L4016e9:{c.instructions+=5;NFSU2_TR(0x4016e9);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4016ed:{NFSU2_TR(0x4016ed);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4016ee:{NFSU2_TR(0x4016ee);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4016f1:{NFSU2_TR(0x4016f1);
u8 U[5];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4016f6:{NFSU2_TR(0x4016f6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4016fbull));
TAIL_STATIC(0x579f20u,579);
}
B4016fb:L4016fb:{c.instructions+=11;NFSU2_TR(0x4016fb);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4016ff:{NFSU2_TR(0x4016ff);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x78ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B401702:{NFSU2_TR(0x401702);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B401706:{NFSU2_TR(0x401706);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7cull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B40170d:{NFSU2_TR(0x40170d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x80ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B401717:{NFSU2_TR(0x401717);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B401718:{NFSU2_TR(0x401718);
__builtin_memmove((R+0),(R+24),4);
}
B40171a:{NFSU2_TR(0x40171a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B40171b:{NFSU2_TR(0x40171b);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B401722:{NFSU2_TR(0x401722);
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
B401725:{NFSU2_TR(0x401725);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B401730:L401730:{c.instructions+=12;NFSU2_TR(0x401730);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B401732:{NFSU2_TR(0x401732);
u8 U[4];
w4(U+0,u32(0x771303ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B401737:{NFSU2_TR(0x401737);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B40173d:{NFSU2_TR(0x40173d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40173e:{NFSU2_TR(0x40173e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B401745:{NFSU2_TR(0x401745);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B401746:{NFSU2_TR(0x401746);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B401747:{NFSU2_TR(0x401747);
__builtin_memmove((R+24),(R+4),4);
}
B401749:{NFSU2_TR(0x401749);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B40174d:{NFSU2_TR(0x40174d);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((R+4),(U+0),4);
}
B401750:{NFSU2_TR(0x401750);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B401758:{NFSU2_TR(0x401758);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x40175dull));
TAIL_STATIC(0x5768e0u,576);
}
B40175d:L40175d:{c.instructions+=3;NFSU2_TR(0x40175d);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((R+4),(U+0),4);
}
B401760:{NFSU2_TR(0x401760);
u8 U[5];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B401765:{NFSU2_TR(0x401765);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x40176aull));
TAIL_STATIC(0x5768e0u,576);
}
B40176a:L40176a:{c.instructions+=3;NFSU2_TR(0x40176a);
__builtin_memmove((R+4),(R+24),4);
}
B40176c:{NFSU2_TR(0x40176c);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B401774:{NFSU2_TR(0x401774);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x401779ull));
TAIL_STATIC(0x5768e0u,576);
}
B401779:L401779:{c.instructions+=5;NFSU2_TR(0x401779);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B40177d:{NFSU2_TR(0x40177d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B40177e:{NFSU2_TR(0x40177e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B401785:{NFSU2_TR(0x401785);
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
B401788:{NFSU2_TR(0x401788);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B401790:L401790:{c.instructions+=5;NFSU2_TR(0x401790);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B401794:{NFSU2_TR(0x401794);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B401798:{NFSU2_TR(0x401798);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B40179a:{NFSU2_TR(0x40179a);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B40179d:{NFSU2_TR(0x40179d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4017a5;}}
}
B40179f:L40179f:{c.instructions+=2;NFSU2_TR(0x40179f);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4017a3:{NFSU2_TR(0x4017a3);
{goto L4017a9;}
}
B4017a5:L4017a5:{c.instructions+=1;NFSU2_TR(0x4017a5);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4017a9:L4017a9:{c.instructions+=5;NFSU2_TR(0x4017a9);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4017ad:{NFSU2_TR(0x4017ad);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B4017af:{NFSU2_TR(0x4017af);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4017b1:{NFSU2_TR(0x4017b1);
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
B4017b4:{NFSU2_TR(0x4017b4);
if(r1(R+514)){{goto L4017bc;}}
}
B4017b6:L4017b6:{c.instructions+=2;NFSU2_TR(0x4017b6);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B4017b8:{NFSU2_TR(0x4017b8);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4017bc:L4017bc:{c.instructions+=9;NFSU2_TR(0x4017bc);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B4017c0:{NFSU2_TR(0x4017c0);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4017c4:{NFSU2_TR(0x4017c4);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B4017c8:{NFSU2_TR(0x4017c8);
__asm__ volatile(".byte 0xde,0xf9":::"memory");
}
B4017ca:{NFSU2_TR(0x4017ca);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4017ce:{NFSU2_TR(0x4017ce);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B4017d2:{NFSU2_TR(0x4017d2);
__asm__ volatile(".byte 0xde,0xc9":::"memory");
}
B4017d4:{NFSU2_TR(0x4017d4);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B4017d8:{NFSU2_TR(0x4017d8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4017e0:L4017e0:{c.instructions+=2;NFSU2_TR(0x4017e0);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2f0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B4017e6:{NFSU2_TR(0x4017e6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4017f0:L4017f0:{c.instructions+=2;NFSU2_TR(0x4017f0);
u8 U[6];
w1(R+512,carry<u32>(r4(R+4),u32(0x374ull)));
w1(R+523,scarry<u32>(r4(R+4),u32(0x374ull)));
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x374ull))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4017f6:{NFSU2_TR(0x4017f6);
TAIL_STATIC(0x4022c0u,402);
}
B401800:L401800:{c.instructions+=2;NFSU2_TR(0x401800);
u8 U[6];
w1(R+512,carry<u32>(r4(R+4),u32(0x384ull)));
w1(R+523,scarry<u32>(r4(R+4),u32(0x384ull)));
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x384ull))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B401806:{NFSU2_TR(0x401806);
TAIL_STATIC(0x4022c0u,402);
}
B401810:L401810:{c.instructions+=3;NFSU2_TR(0x401810);
__builtin_memmove((R+0),(R+4),4);
}
B401812:{NFSU2_TR(0x401812);
u8 U[4];
w4(U+0,u32(0x0ull));
s4(u32(r4(R+0)),r4(U+0));
}
B401818:{NFSU2_TR(0x401818);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B401820:L401820:{c.instructions+=3;NFSU2_TR(0x401820);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B401822:{NFSU2_TR(0x401822);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B401824:{NFSU2_TR(0x401824);
if(r1(R+518)){{goto L401833;}}
}
B401826:L401826:{c.instructions+=2;NFSU2_TR(0x401826);
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
B40182b:{NFSU2_TR(0x40182b);
if(r1(R+518)){{goto L401833;}}
}
B40182d:L40182d:{c.instructions+=2;NFSU2_TR(0x40182d);
w4(R+0,u32(0x1ull));
}
B401832:{NFSU2_TR(0x401832);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B401833:L401833:{c.instructions+=2;NFSU2_TR(0x401833);
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
B401835:{NFSU2_TR(0x401835);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B401840:L401840:{c.instructions+=6;NFSU2_TR(0x401840);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B401844:{NFSU2_TR(0x401844);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B401845:{NFSU2_TR(0x401845);
{u32 ea_=u32(u32(7881316u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B40184b:{NFSU2_TR(0x40184b);
__builtin_memmove((R+24),(R+4),4);
}
B40184d:{NFSU2_TR(0x40184d);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B401853:{NFSU2_TR(0x401853);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x401858ull));
TAIL_STATIC(0x75bed4u,75b);
}
B401858:L401858:{c.instructions+=3;NFSU2_TR(0x401858);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+24)),r4(U+0));
}
B40185a:{NFSU2_TR(0x40185a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B40185b:{NFSU2_TR(0x40185b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B401860:L401860:{c.instructions+=3;NFSU2_TR(0x401860);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x414ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B401866:{NFSU2_TR(0x401866);
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
B401868:{NFSU2_TR(0x401868);
if(r1(R+518)){{goto L40187e;}}
}
B40186a:L40186a:{c.instructions+=2;NFSU2_TR(0x40186a);
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
B40186f:{NFSU2_TR(0x40186f);
if(r1(R+518)){{goto L40187e;}}
}
B401871:L401871:{c.instructions+=3;NFSU2_TR(0x401871);
{u32 ea_=u32(r4(R+4)+u32(1044u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B401877:{NFSU2_TR(0x401877);
{u32 ea_=u32(u32(7881320u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B40187d:{NFSU2_TR(0x40187d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B40187e:L40187e:{c.instructions+=2;NFSU2_TR(0x40187e);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B401884:{NFSU2_TR(0x401884);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B401890:L401890:{c.instructions+=2;NFSU2_TR(0x401890);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x60ull))));
__builtin_memmove((R+0),(U+0),4);
}
B401893:{NFSU2_TR(0x401893);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4018a0:L4018a0:{c.instructions+=2;NFSU2_TR(0x4018a0);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x70ull))));
__builtin_memmove((R+0),(U+0),4);
}
B4018a3:{NFSU2_TR(0x4018a3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4018b0:L4018b0:{c.instructions+=2;NFSU2_TR(0x4018b0);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x90ull))));
__builtin_memmove((R+0),(U+0),4);
}
B4018b6:{NFSU2_TR(0x4018b6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4018c0:L4018c0:{c.instructions+=5;NFSU2_TR(0x4018c0);
{u32 ea_=u32(u32(8371928u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4018c6:{NFSU2_TR(0x4018c6);
{u32 ea_=u32(u32(7881304u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B4018cc:{NFSU2_TR(0x4018cc);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4018ce:{NFSU2_TR(0x4018ce);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B4018d1:{NFSU2_TR(0x4018d1);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L4018da;}}
}
B4018d3:L4018d3:{c.instructions+=2;NFSU2_TR(0x4018d3);
{u32 ea_=u32(u32(8371928u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4018d9:{NFSU2_TR(0x4018d9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4018da:L4018da:{c.instructions+=2;NFSU2_TR(0x4018da);
{u32 ea_=u32(r4(R+4)+u32(1088u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4018e0:{NFSU2_TR(0x4018e0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4018f0:L4018f0:{c.instructions+=3;NFSU2_TR(0x4018f0);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B4018f3:{NFSU2_TR(0x4018f3);
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
B4018f5:{NFSU2_TR(0x4018f5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L401903;}}
}
B4018f7:L4018f7:{c.instructions+=3;NFSU2_TR(0x4018f7);
__builtin_memmove((R+0),gp(0x890108),4);
}
B4018fc:{NFSU2_TR(0x4018fc);
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
B4018fe:{NFSU2_TR(0x4018fe);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L401903;}}
}
B401900:L401900:{c.instructions+=2;NFSU2_TR(0x401900);
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
B401902:{NFSU2_TR(0x401902);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B401903:L401903:{c.instructions+=2;NFSU2_TR(0x401903);
w4(R+0,u32(0x1ull));
}
B401908:{NFSU2_TR(0x401908);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B401910:L401910:{c.instructions+=3;NFSU2_TR(0x401910);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x39ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B401913:{NFSU2_TR(0x401913);
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
B401915:{NFSU2_TR(0x401915);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L401923;}}
}
B401917:L401917:{c.instructions+=3;NFSU2_TR(0x401917);
__builtin_memmove((R+0),gp(0x890104),4);
}
B40191c:{NFSU2_TR(0x40191c);
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
B40191e:{NFSU2_TR(0x40191e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L401923;}}
}
B401920:L401920:{c.instructions+=2;NFSU2_TR(0x401920);
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
B401922:{NFSU2_TR(0x401922);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B401923:L401923:{c.instructions+=2;NFSU2_TR(0x401923);
w4(R+0,u32(0x1ull));
}
B401928:{NFSU2_TR(0x401928);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B401930:L401930:{c.instructions+=3;NFSU2_TR(0x401930);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x43ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B401933:{NFSU2_TR(0x401933);
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
B401935:{NFSU2_TR(0x401935);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L401943;}}
}
B401937:L401937:{c.instructions+=3;NFSU2_TR(0x401937);
__builtin_memmove((R+0),gp(0x89010c),4);
}
B40193c:{NFSU2_TR(0x40193c);
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
B40193e:{NFSU2_TR(0x40193e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L401943;}}
}
B401940:L401940:{c.instructions+=2;NFSU2_TR(0x401940);
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
B401942:{NFSU2_TR(0x401942);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B401943:L401943:{c.instructions+=2;NFSU2_TR(0x401943);
w4(R+0,u32(0x1ull));
}
B401948:{NFSU2_TR(0x401948);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B401950:L401950:{c.instructions+=3;NFSU2_TR(0x401950);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B401953:{NFSU2_TR(0x401953);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B401955:{NFSU2_TR(0x401955);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L40197f;}}
}
B401957:L401957:{c.instructions+=3;NFSU2_TR(0x401957);
__builtin_memmove((R+0),gp(0x890108),4);
}
B40195c:{NFSU2_TR(0x40195c);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B40195e:{NFSU2_TR(0x40195e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L40197f;}}
}
B401960:L401960:{c.instructions+=3;NFSU2_TR(0x401960);
__builtin_memmove((R+0),gp(0x890114),4);
}
B401965:{NFSU2_TR(0x401965);
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
B401967:{NFSU2_TR(0x401967);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L401979;}}
}
B401969:L401969:{c.instructions+=3;NFSU2_TR(0x401969);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x39ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B40196c:{NFSU2_TR(0x40196c);
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
B40196e:{NFSU2_TR(0x40196e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L401979;}}
}
B401970:L401970:{c.instructions+=3;NFSU2_TR(0x401970);
__builtin_memmove((R+0),gp(0x890104),4);
}
B401975:{NFSU2_TR(0x401975);
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
B401977:{NFSU2_TR(0x401977);
if(r1(R+518)){{goto L40197f;}}
}
B401979:L401979:{c.instructions+=2;NFSU2_TR(0x401979);
w4(R+0,u32(0x1ull));
}
B40197e:{NFSU2_TR(0x40197e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B40197f:L40197f:{c.instructions+=2;NFSU2_TR(0x40197f);
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
B401981:{NFSU2_TR(0x401981);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B401990:L401990:{c.instructions+=2;NFSU2_TR(0x401990);
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
B401992:{NFSU2_TR(0x401992);
if(r1(R+518)){{goto L4019b0;}}
}
B401994:L401994:{c.instructions+=3;NFSU2_TR(0x401994);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B401997:{NFSU2_TR(0x401997);
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
B40199a:{NFSU2_TR(0x40199a);
if(r1(R+518)){{goto L4019b0;}}
}
B40199c:L40199c:{c.instructions+=2;NFSU2_TR(0x40199c);
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
B40199f:{NFSU2_TR(0x40199f);
if(r1(R+518)){{goto L4019b0;}}
}
B4019a1:L4019a1:{c.instructions+=2;NFSU2_TR(0x4019a1);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4019a4:{NFSU2_TR(0x4019a4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4019ad;}}
}
B4019a6:L4019a6:{c.instructions+=3;NFSU2_TR(0x4019a6);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B4019a9:{NFSU2_TR(0x4019a9);
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
B4019ab:{NFSU2_TR(0x4019ab);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4019b0;}}
}
B4019ad:L4019ad:{c.instructions+=2;NFSU2_TR(0x4019ad);
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
B4019af:{NFSU2_TR(0x4019af);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4019b0:L4019b0:{c.instructions+=2;NFSU2_TR(0x4019b0);
w1(R+0,u8(0x1ull));
}
B4019b2:{NFSU2_TR(0x4019b2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4019c0:L4019c0:{c.instructions+=5;NFSU2_TR(0x4019c0);
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
B4019c5:{NFSU2_TR(0x4019c5);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4019c6:{NFSU2_TR(0x4019c6);
__builtin_memmove((R+24),(R+4),4);
}
B4019c8:{NFSU2_TR(0x4019c8);
u8 U[4];
w4(U+0,u32(0x784270ull));
s4(u32(r4(R+24)),r4(U+0));
}
B4019ce:{NFSU2_TR(0x4019ce);
if(r1(R+518)){{goto L4019d9;}}
}
B4019d0:L4019d0:{c.instructions+=2;NFSU2_TR(0x4019d0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4019d1:{NFSU2_TR(0x4019d1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4019d6ull));
TAIL_STATIC(0x575630u,575);
}
B4019d6:L4019d6:{c.instructions+=1;NFSU2_TR(0x4019d6);
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
B4019d9:L4019d9:{c.instructions+=3;NFSU2_TR(0x4019d9);
__builtin_memmove((R+0),(R+24),4);
}
B4019db:{NFSU2_TR(0x4019db);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4019dc:{NFSU2_TR(0x4019dc);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4019e0:L4019e0:{c.instructions+=5;NFSU2_TR(0x4019e0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4019e4:{NFSU2_TR(0x4019e4);
__builtin_memmove((R+4),gp(0x81cb6c),4);
}
B4019ea:{NFSU2_TR(0x4019ea);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4019eb:{NFSU2_TR(0x4019eb);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4019ec:{NFSU2_TR(0x4019ec);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4019f1ull));
TAIL_STATIC(0x43f920u,43f);
}
B4019f1:L4019f1:{c.instructions+=2;NFSU2_TR(0x4019f1);
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
B4019f4:{NFSU2_TR(0x4019f4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B401a00:L401a00:{c.instructions+=12;NFSU2_TR(0x401a00);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B401a02:{NFSU2_TR(0x401a02);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B401a06:{NFSU2_TR(0x401a06);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+0)),r4(U+0));
}
B401a08:{NFSU2_TR(0x401a08);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B401a0b:{NFSU2_TR(0x401a0b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B401a0e:{NFSU2_TR(0x401a0e);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x12ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(s32(s16(r2(U+4)))));
}
B401a12:{NFSU2_TR(0x401a12);
u8 U[45];
w4(U+37,u32(u32(u32(0xdull))&u32(u32(0x1full))));
__builtin_memmove((U+41),(R+4),4);
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+37))));
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
w1(U+35,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(U+36,u8(u32(r1(R+512))^u32(r1(U+35))));
__builtin_memmove((U+0),(U+34),1);
w1(U+1,u8(u32(r1(U+0))*u32(r1(U+36))));
w1(U+2,u8(!(r1(U+34))));
__builtin_memmove((U+3),(U+2),1);
w1(U+4,u8(u32(r1(U+3))*u32(r1(R+523))));
w1(R+523,u8(u32(r1(U+1))|u32(r1(U+4))));
w1(U+5,u8((r4(U+37))!=(u32(0x0ull))));
w1(U+6,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(U+7,u8(!(r1(U+5))));
w1(U+8,u8(u32(r1(U+7))&u32(r1(R+519))));
w1(U+9,u8(u32(r1(U+5))&u32(r1(U+6))));
w1(R+519,u8(u32(r1(U+8))|u32(r1(U+9))));
w1(U+10,u8((r4(R+4))==(u32(0x0ull))));
w1(U+11,u8(!(r1(U+5))));
w1(U+12,u8(u32(r1(U+11))&u32(r1(R+518))));
w1(U+13,u8(u32(r1(U+5))&u32(r1(U+10))));
w1(R+518,u8(u32(r1(U+12))|u32(r1(U+13))));
w4(U+14,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+18,u8(__builtin_popcountll(u64(r4(U+14)))));
w1(U+19,u8(u32(r1(U+18))&u32(u8(0x1ull))));
w1(U+20,u8((r1(U+19))==(u8(0x0ull))));
w1(U+21,u8(!(r1(U+5))));
w1(U+22,u8(u32(r1(U+21))&u32(r1(R+514))));
w1(U+23,u8(u32(r1(U+5))&u32(r1(U+20))));
w1(R+514,u8(u32(r1(U+22))|u32(r1(U+23))));
}
B401a15:{NFSU2_TR(0x401a15);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B401a19:{NFSU2_TR(0x401a19);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B401a1d:{NFSU2_TR(0x401a1d);
{u32 ea_=u32(u32(7881336u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B401a23:{NFSU2_TR(0x401a23);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B401a26:{NFSU2_TR(0x401a26);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B401a30:L401a30:{c.instructions+=3;NFSU2_TR(0x401a30);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B401a34:{NFSU2_TR(0x401a34);
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
B401a36:{NFSU2_TR(0x401a36);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L401a50;}}
}
B401a38:L401a38:{c.instructions+=6;NFSU2_TR(0x401a38);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B401a3c:{NFSU2_TR(0x401a3c);
u8 U[45];
w4(U+37,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
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
B401a3f:{NFSU2_TR(0x401a3f);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B401a43:{NFSU2_TR(0x401a43);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B401a47:{NFSU2_TR(0x401a47);
{u32 ea_=u32(u32(7881336u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B401a4d:{NFSU2_TR(0x401a4d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B401a50:L401a50:{c.instructions+=1;NFSU2_TR(0x401a50);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x401a55ull));
TAIL_STATIC(0x40ccc0u,40c);
}
B401a55:L401a55:{c.instructions+=1;NFSU2_TR(0x401a55);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B401a60:L401a60:{c.instructions+=14;NFSU2_TR(0x401a60);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B401a61:{NFSU2_TR(0x401a61);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1aull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(s32(s16(r2(U+4)))));
}
B401a65:{NFSU2_TR(0x401a65);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(s32(s16(r2(U+4)))));
}
B401a69:{NFSU2_TR(0x401a69);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+16)),r4(U+0));
}
B401a6d:{NFSU2_TR(0x401a6d);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B401a71:{NFSU2_TR(0x401a71);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B401a75:{NFSU2_TR(0x401a75);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+16)),r4(U+0));
}
B401a79:{NFSU2_TR(0x401a79);
{u32 ea_=u32(u32(8513532u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B401a7f:{NFSU2_TR(0x401a7f);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B401a83:{NFSU2_TR(0x401a83);
{u32 ea_=u32(u32(8513532u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B401a89:{NFSU2_TR(0x401a89);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B401a8b:{NFSU2_TR(0x401a8b);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B401a8e:{NFSU2_TR(0x401a8e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B401a8f:{NFSU2_TR(0x401a8f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B401aa0:L401aa0:{c.instructions+=4;NFSU2_TR(0x401aa0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xcull))));
}
B401aa3:{NFSU2_TR(0x401aa3);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B401aa4:{NFSU2_TR(0x401aa4);
__builtin_memmove((R+24),(R+4),4);
}
B401aa6:{NFSU2_TR(0x401aa6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x401aabull));
TAIL_STATIC(0x5d89f0u,5d8);
}
B401aab:L401aab:{c.instructions+=2;NFSU2_TR(0x401aab);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B401aad:{NFSU2_TR(0x401aad);
if(r1(R+518)){{goto L401ad5;}}
}
B401aaf:L401aaf:{c.instructions+=10;NFSU2_TR(0x401aaf);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(s32(s16(r2(U+4)))));
}
B401ab3:{NFSU2_TR(0x401ab3);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1aull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(s32(s16(r2(U+4)))));
}
B401ab7:{NFSU2_TR(0x401ab7);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B401abb:{NFSU2_TR(0x401abb);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B401abf:{NFSU2_TR(0x401abf);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B401ac3:{NFSU2_TR(0x401ac3);
{u32 ea_=u32(u32(8513532u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B401ac9:{NFSU2_TR(0x401ac9);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B401acb:{NFSU2_TR(0x401acb);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B401acf:{NFSU2_TR(0x401acf);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B401ad3:{NFSU2_TR(0x401ad3);
{goto L401af9;}
}
B401ad5:L401ad5:{c.instructions+=9;NFSU2_TR(0x401ad5);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(s32(s16(r2(U+4)))));
}
B401ad9:{NFSU2_TR(0x401ad9);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1aull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(s32(s16(r2(U+4)))));
}
B401add:{NFSU2_TR(0x401add);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B401ae1:{NFSU2_TR(0x401ae1);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B401ae5:{NFSU2_TR(0x401ae5);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B401ae9:{NFSU2_TR(0x401ae9);
{u32 ea_=u32(u32(8513532u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B401aef:{NFSU2_TR(0x401aef);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B401af1:{NFSU2_TR(0x401af1);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B401af5:{NFSU2_TR(0x401af5);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B401af9:L401af9:{c.instructions+=12;NFSU2_TR(0x401af9);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B401afd:{NFSU2_TR(0x401afd);
{u32 ea_=u32(u32(8513532u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B401b03:{NFSU2_TR(0x401b03);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B401b07:{NFSU2_TR(0x401b07);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B401b08:{NFSU2_TR(0x401b08);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B401b0a:{NFSU2_TR(0x401b0a);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B401b0e:{NFSU2_TR(0x401b0e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B401b10:{NFSU2_TR(0x401b10);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B401b13:{NFSU2_TR(0x401b13);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+0)),r4(U+0));
}
B401b15:{NFSU2_TR(0x401b15);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B401b18:{NFSU2_TR(0x401b18);
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
B401b1b:{NFSU2_TR(0x401b1b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B401b20:L401b20:{c.instructions+=3;NFSU2_TR(0x401b20);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B401b24:{NFSU2_TR(0x401b24);
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
B401b26:{NFSU2_TR(0x401b26);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L401b58;}}
}
B401b28:L401b28:{c.instructions+=12;NFSU2_TR(0x401b28);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1aull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(s32(s16(r2(U+4)))));
}
B401b2c:{NFSU2_TR(0x401b2c);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(s32(s16(r2(U+4)))));
}
B401b30:{NFSU2_TR(0x401b30);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B401b34:{NFSU2_TR(0x401b34);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B401b38:{NFSU2_TR(0x401b38);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B401b3c:{NFSU2_TR(0x401b3c);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B401b40:{NFSU2_TR(0x401b40);
{u32 ea_=u32(u32(8513532u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B401b46:{NFSU2_TR(0x401b46);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B401b4a:{NFSU2_TR(0x401b4a);
{u32 ea_=u32(u32(8513532u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B401b50:{NFSU2_TR(0x401b50);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B401b52:{NFSU2_TR(0x401b52);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B401b55:{NFSU2_TR(0x401b55);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B401b58:L401b58:{c.instructions+=4;NFSU2_TR(0x401b58);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B401b59:{NFSU2_TR(0x401b59);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B401b5d:{NFSU2_TR(0x401b5d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B401b5e:{NFSU2_TR(0x401b5e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x401b63ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x401aa0u);}goto L401aa0;}
}
B401b63:L401b63:{c.instructions+=3;NFSU2_TR(0x401b63);
__builtin_memmove((R+0),(R+24),4);
}
B401b65:{NFSU2_TR(0x401b65);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B401b66:{NFSU2_TR(0x401b66);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B401b70:L401b70:{c.instructions+=6;NFSU2_TR(0x401b70);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B401b71:{NFSU2_TR(0x401b71);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B401b75:{NFSU2_TR(0x401b75);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B401b7b:{NFSU2_TR(0x401b7b);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B401b7d:{NFSU2_TR(0x401b7d);
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
B401b80:{NFSU2_TR(0x401b80);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L401b9f;}}
}
B401b82:L401b82:{c.instructions+=8;NFSU2_TR(0x401b82);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x16ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B401b86:{NFSU2_TR(0x401b86);
u8 U[45];
w4(U+37,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
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
B401b89:{NFSU2_TR(0x401b89);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+16)),r4(U+0));
}
B401b8d:{NFSU2_TR(0x401b8d);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B401b91:{NFSU2_TR(0x401b91);
{u32 ea_=u32(u32(7881336u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B401b97:{NFSU2_TR(0x401b97);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B401b9b:{NFSU2_TR(0x401b9b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B401b9c:{NFSU2_TR(0x401b9c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B401b9f:L401b9f:{c.instructions+=9;NFSU2_TR(0x401b9f);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(r2(U+4)));
}
B401ba3:{NFSU2_TR(0x401ba3);
u8 U[45];
w4(U+37,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
__builtin_memmove((U+41),(R+4),4);
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+37))));
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
w1(U+35,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(U+36,u8(u32(r1(R+512))^u32(r1(U+35))));
__builtin_memmove((U+0),(U+34),1);
w1(U+1,u8(u32(r1(U+0))*u32(r1(U+36))));
w1(U+2,u8(!(r1(U+34))));
__builtin_memmove((U+3),(U+2),1);
w1(U+4,u8(u32(r1(U+3))*u32(r1(R+523))));
w1(R+523,u8(u32(r1(U+1))|u32(r1(U+4))));
w1(U+5,u8((r4(U+37))!=(u32(0x0ull))));
w1(U+6,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(U+7,u8(!(r1(U+5))));
w1(U+8,u8(u32(r1(U+7))&u32(r1(R+519))));
w1(U+9,u8(u32(r1(U+5))&u32(r1(U+6))));
w1(R+519,u8(u32(r1(U+8))|u32(r1(U+9))));
w1(U+10,u8((r4(R+4))==(u32(0x0ull))));
w1(U+11,u8(!(r1(U+5))));
w1(U+12,u8(u32(r1(U+11))&u32(r1(R+518))));
w1(U+13,u8(u32(r1(U+5))&u32(r1(U+10))));
w1(R+518,u8(u32(r1(U+12))|u32(r1(U+13))));
w4(U+14,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+18,u8(__builtin_popcountll(u64(r4(U+14)))));
w1(U+19,u8(u32(r1(U+18))&u32(u8(0x1ull))));
w1(U+20,u8((r1(U+19))==(u8(0x0ull))));
w1(U+21,u8(!(r1(U+5))));
w1(U+22,u8(u32(r1(U+21))&u32(r1(R+514))));
w1(U+23,u8(u32(r1(U+5))&u32(r1(U+20))));
w1(R+514,u8(u32(r1(U+22))|u32(r1(U+23))));
}
B401ba6:{NFSU2_TR(0x401ba6);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+16)),r4(U+0));
}
B401baa:{NFSU2_TR(0x401baa);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B401bae:{NFSU2_TR(0x401bae);
{u32 ea_=u32(u32(7881336u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B401bb4:{NFSU2_TR(0x401bb4);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B401bb8:{NFSU2_TR(0x401bb8);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B401bba:{NFSU2_TR(0x401bba);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B401bbb:{NFSU2_TR(0x401bbb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B401bc0:L401bc0:{c.instructions+=6;NFSU2_TR(0x401bc0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B401bc1:{NFSU2_TR(0x401bc1);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B401bc5:{NFSU2_TR(0x401bc5);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B401bcb:{NFSU2_TR(0x401bcb);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B401bcd:{NFSU2_TR(0x401bcd);
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
B401bd0:{NFSU2_TR(0x401bd0);
if(r1(R+514)){{goto L401bf1;}}
}
B401bd2:L401bd2:{c.instructions+=9;NFSU2_TR(0x401bd2);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x16ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B401bd6:{NFSU2_TR(0x401bd6);
u8 U[45];
w4(U+37,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
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
B401bd9:{NFSU2_TR(0x401bd9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+16)),r4(U+0));
}
B401bdd:{NFSU2_TR(0x401bdd);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B401be1:{NFSU2_TR(0x401be1);
{u32 ea_=u32(u32(7881336u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B401be7:{NFSU2_TR(0x401be7);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B401beb:{NFSU2_TR(0x401beb);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B401bed:{NFSU2_TR(0x401bed);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B401bee:{NFSU2_TR(0x401bee);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B401bf1:L401bf1:{c.instructions+=8;NFSU2_TR(0x401bf1);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(r2(U+4)));
}
B401bf5:{NFSU2_TR(0x401bf5);
u8 U[45];
w4(U+37,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
__builtin_memmove((U+41),(R+4),4);
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+37))));
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
w1(U+35,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(U+36,u8(u32(r1(R+512))^u32(r1(U+35))));
__builtin_memmove((U+0),(U+34),1);
w1(U+1,u8(u32(r1(U+0))*u32(r1(U+36))));
w1(U+2,u8(!(r1(U+34))));
__builtin_memmove((U+3),(U+2),1);
w1(U+4,u8(u32(r1(U+3))*u32(r1(R+523))));
w1(R+523,u8(u32(r1(U+1))|u32(r1(U+4))));
w1(U+5,u8((r4(U+37))!=(u32(0x0ull))));
w1(U+6,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(U+7,u8(!(r1(U+5))));
w1(U+8,u8(u32(r1(U+7))&u32(r1(R+519))));
w1(U+9,u8(u32(r1(U+5))&u32(r1(U+6))));
w1(R+519,u8(u32(r1(U+8))|u32(r1(U+9))));
w1(U+10,u8((r4(R+4))==(u32(0x0ull))));
w1(U+11,u8(!(r1(U+5))));
w1(U+12,u8(u32(r1(U+11))&u32(r1(R+518))));
w1(U+13,u8(u32(r1(U+5))&u32(r1(U+10))));
w1(R+518,u8(u32(r1(U+12))|u32(r1(U+13))));
w4(U+14,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+18,u8(__builtin_popcountll(u64(r4(U+14)))));
w1(U+19,u8(u32(r1(U+18))&u32(u8(0x1ull))));
w1(U+20,u8((r1(U+19))==(u8(0x0ull))));
w1(U+21,u8(!(r1(U+5))));
w1(U+22,u8(u32(r1(U+21))&u32(r1(R+514))));
w1(U+23,u8(u32(r1(U+5))&u32(r1(U+20))));
w1(R+514,u8(u32(r1(U+22))|u32(r1(U+23))));
}
B401bf8:{NFSU2_TR(0x401bf8);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+16)),r4(U+0));
}
B401bfc:{NFSU2_TR(0x401bfc);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B401c00:{NFSU2_TR(0x401c00);
{u32 ea_=u32(u32(7881336u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B401c06:{NFSU2_TR(0x401c06);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B401c0a:{NFSU2_TR(0x401c0a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B401c0b:{NFSU2_TR(0x401c0b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B401c10:L401c10:{c.instructions+=3;NFSU2_TR(0x401c10);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B401c14:{NFSU2_TR(0x401c14);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B401c16:{NFSU2_TR(0x401c16);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L401c25;}}
}
B401c18:L401c18:{c.instructions+=3;NFSU2_TR(0x401c18);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B401c1c:{NFSU2_TR(0x401c1c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B401c1d:{NFSU2_TR(0x401c1d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x401c22ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x401b70u);}goto L401b70;}
}
B401c22:L401c22:{c.instructions+=1;NFSU2_TR(0x401c22);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B401c25:L401c25:{c.instructions+=3;NFSU2_TR(0x401c25);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B401c29:{NFSU2_TR(0x401c29);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B401c2a:{NFSU2_TR(0x401c2a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x401c2full));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x401bc0u);}goto L401bc0;}
}
B401c2f:L401c2f:{c.instructions+=1;NFSU2_TR(0x401c2f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B401c40:L401c40:{c.instructions+=16;NFSU2_TR(0x401c40);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B401c41:{NFSU2_TR(0x401c41);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x16ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B401c45:{NFSU2_TR(0x401c45);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(r2(U+4)));
}
B401c49:{NFSU2_TR(0x401c49);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B401c4c:{NFSU2_TR(0x401c4c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+16)),r4(U+0));
}
B401c50:{NFSU2_TR(0x401c50);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B401c53:{NFSU2_TR(0x401c53);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B401c57:{NFSU2_TR(0x401c57);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+16)),r4(U+0));
}
B401c5b:{NFSU2_TR(0x401c5b);
{u32 ea_=u32(u32(7881336u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B401c61:{NFSU2_TR(0x401c61);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B401c65:{NFSU2_TR(0x401c65);
{u32 ea_=u32(u32(7881336u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B401c6b:{NFSU2_TR(0x401c6b);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B401c6f:{NFSU2_TR(0x401c6f);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B401c71:{NFSU2_TR(0x401c71);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B401c73:{NFSU2_TR(0x401c73);
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
B401c76:{NFSU2_TR(0x401c76);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L401c7e;}}
}
B401c78:L401c78:{c.instructions+=2;NFSU2_TR(0x401c78);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B401c7a:{NFSU2_TR(0x401c7a);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B401c7e:L401c7e:{c.instructions+=9;NFSU2_TR(0x401c7e);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B401c82:{NFSU2_TR(0x401c82);
u8 U[13];
w4(U+0,u32(u32(u32(0x22ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
w4(R+4,u32(s32(s8(r1(U+12)))));
}
B401c87:{NFSU2_TR(0x401c87);
u8 U[45];
w4(U+37,u32(u32(u32(0x9ull))&u32(u32(0x1full))));
__builtin_memmove((U+41),(R+4),4);
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+37))));
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
w1(U+35,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(U+36,u8(u32(r1(R+512))^u32(r1(U+35))));
__builtin_memmove((U+0),(U+34),1);
w1(U+1,u8(u32(r1(U+0))*u32(r1(U+36))));
w1(U+2,u8(!(r1(U+34))));
__builtin_memmove((U+3),(U+2),1);
w1(U+4,u8(u32(r1(U+3))*u32(r1(R+523))));
w1(R+523,u8(u32(r1(U+1))|u32(r1(U+4))));
w1(U+5,u8((r4(U+37))!=(u32(0x0ull))));
w1(U+6,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(U+7,u8(!(r1(U+5))));
w1(U+8,u8(u32(r1(U+7))&u32(r1(R+519))));
w1(U+9,u8(u32(r1(U+5))&u32(r1(U+6))));
w1(R+519,u8(u32(r1(U+8))|u32(r1(U+9))));
w1(U+10,u8((r4(R+4))==(u32(0x0ull))));
w1(U+11,u8(!(r1(U+5))));
w1(U+12,u8(u32(r1(U+11))&u32(r1(R+518))));
w1(U+13,u8(u32(r1(U+5))&u32(r1(U+10))));
w1(R+518,u8(u32(r1(U+12))|u32(r1(U+13))));
w4(U+14,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+18,u8(__builtin_popcountll(u64(r4(U+14)))));
w1(U+19,u8(u32(r1(U+18))&u32(u8(0x1ull))));
w1(U+20,u8((r1(U+19))==(u8(0x0ull))));
w1(U+21,u8(!(r1(U+5))));
w1(U+22,u8(u32(r1(U+21))&u32(r1(R+514))));
w1(U+23,u8(u32(r1(U+5))&u32(r1(U+20))));
w1(R+514,u8(u32(r1(U+22))|u32(r1(U+23))));
}
B401c8a:{NFSU2_TR(0x401c8a);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B401c8e:{NFSU2_TR(0x401c8e);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B401c92:{NFSU2_TR(0x401c92);
{u32 ea_=u32(u32(7881336u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B401c98:{NFSU2_TR(0x401c98);
__asm__ volatile(".byte 0xde,0xc9":::"memory");
}
B401c9a:{NFSU2_TR(0x401c9a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B401c9b:{NFSU2_TR(0x401c9b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B401ca0:L401ca0:{c.instructions+=7;NFSU2_TR(0x401ca0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B401ca4:{NFSU2_TR(0x401ca4);
u8 U[13];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
w4(R+4,u32(r1(U+12)));
}
B401ca9:{NFSU2_TR(0x401ca9);
u8 U[45];
w4(U+37,u32(u32(u32(0x10ull))&u32(u32(0x1full))));
__builtin_memmove((U+41),(R+4),4);
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+37))));
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
w1(U+35,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(U+36,u8(u32(r1(R+512))^u32(r1(U+35))));
__builtin_memmove((U+0),(U+34),1);
w1(U+1,u8(u32(r1(U+0))*u32(r1(U+36))));
w1(U+2,u8(!(r1(U+34))));
__builtin_memmove((U+3),(U+2),1);
w1(U+4,u8(u32(r1(U+3))*u32(r1(R+523))));
w1(R+523,u8(u32(r1(U+1))|u32(r1(U+4))));
w1(U+5,u8((r4(U+37))!=(u32(0x0ull))));
w1(U+6,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(U+7,u8(!(r1(U+5))));
w1(U+8,u8(u32(r1(U+7))&u32(r1(R+519))));
w1(U+9,u8(u32(r1(U+5))&u32(r1(U+6))));
w1(R+519,u8(u32(r1(U+8))|u32(r1(U+9))));
w1(U+10,u8((r4(R+4))==(u32(0x0ull))));
w1(U+11,u8(!(r1(U+5))));
w1(U+12,u8(u32(r1(U+11))&u32(r1(R+518))));
w1(U+13,u8(u32(r1(U+5))&u32(r1(U+10))));
w1(R+518,u8(u32(r1(U+12))|u32(r1(U+13))));
w4(U+14,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+18,u8(__builtin_popcountll(u64(r4(U+14)))));
w1(U+19,u8(u32(r1(U+18))&u32(u8(0x1ull))));
w1(U+20,u8((r1(U+19))==(u8(0x0ull))));
w1(U+21,u8(!(r1(U+5))));
w1(U+22,u8(u32(r1(U+21))&u32(r1(R+514))));
w1(U+23,u8(u32(r1(U+5))&u32(r1(U+20))));
w1(R+514,u8(u32(r1(U+22))|u32(r1(U+23))));
}
B401cac:{NFSU2_TR(0x401cac);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B401cb0:{NFSU2_TR(0x401cb0);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B401cb4:{NFSU2_TR(0x401cb4);
{u32 ea_=u32(u32(7881336u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B401cba:{NFSU2_TR(0x401cba);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B401cc0:L401cc0:{c.instructions+=8;NFSU2_TR(0x401cc0);
u8 U[5];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B401cc4:{NFSU2_TR(0x401cc4);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B401cc5:{NFSU2_TR(0x401cc5);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B401cc9:{NFSU2_TR(0x401cc9);
w4(R+24,u32(u32(r4(R+24))-u32(r4(R+4))));
}
B401ccb:{NFSU2_TR(0x401ccb);
w4(R+24,u32(u32(r4(R+24))-u32(u32(0x8cull))));
}
B401cd1:{NFSU2_TR(0x401cd1);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B401cd3:{NFSU2_TR(0x401cd3);
w4(R+0,u32(0x92492493ull));
}
B401cd8:{NFSU2_TR(0x401cd8);
if(r1(R+518)){{goto L401d01;}}
}
B401cda:L401cda:{c.instructions+=10;NFSU2_TR(0x401cda);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(r4(R+24)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(u64(r8(U+16))>>32));
w4(R+0,u32(r8(U+16)));
}
B401cdc:{NFSU2_TR(0x401cdc);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+24))));
}
B401cde:{NFSU2_TR(0x401cde);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w4(R+8,sar<u32>(r4(R+8),u64(r4(U+0))));
}
B401ce1:{NFSU2_TR(0x401ce1);
__builtin_memmove((R+0),(R+8),4);
}
B401ce3:{NFSU2_TR(0x401ce3);
u8 U[4];
w4(U+0,u32(u32(u32(0x1full))&u32(u32(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+0))));
}
B401ce6:{NFSU2_TR(0x401ce6);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+0))));
}
B401ce8:{NFSU2_TR(0x401ce8);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(s32(s16(r2(U+4)))));
}
B401cec:{NFSU2_TR(0x401cec);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x1ull))));
__builtin_memmove((R+24),(U+0),4);
}
B401cef:{NFSU2_TR(0x401cef);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+6)));
w4(U+10,u32(u32(r4(R+24))-u32(r4(U+6))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B401cf1:{NFSU2_TR(0x401cf1);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L401d1c;}}
}
B401cf3:L401cf3:{c.instructions+=4;NFSU2_TR(0x401cf3);
u8 U[32];
w8(U+8,u64(s64(s32(r4(R+8)))));
w8(U+16,u64(s64(s32(u32(0x38ull)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+8,u32(r8(U+24)));
w8(U+0,u64(s64(s32(r4(R+8)))));
w1(R+512,u8((r8(U+0))!=(r8(U+24))));
__builtin_memmove((R+523),(R+512),1);
}
B401cf6:{NFSU2_TR(0x401cf6);
u8 U[12];
w4(U+0,u32(u32(u32(0xc4ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B401cfd:{NFSU2_TR(0x401cfd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B401cfe:{NFSU2_TR(0x401cfe);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B401d01:L401d01:{c.instructions+=7;NFSU2_TR(0x401d01);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(r4(R+24)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(u64(r8(U+16))>>32));
w4(R+0,u32(r8(U+16)));
}
B401d03:{NFSU2_TR(0x401d03);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+24))));
}
B401d05:{NFSU2_TR(0x401d05);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w4(R+8,sar<u32>(r4(R+8),u64(r4(U+0))));
}
B401d08:{NFSU2_TR(0x401d08);
__builtin_memmove((R+0),(R+8),4);
}
B401d0a:{NFSU2_TR(0x401d0a);
u8 U[4];
w4(U+0,u32(u32(u32(0x1full))&u32(u32(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+0))));
}
B401d0d:{NFSU2_TR(0x401d0d);
u8 U[6];
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+0))));
w1(R+519,u8(s32(r4(R+8))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+8))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B401d0f:{NFSU2_TR(0x401d0f);
if(r1(R+518)){{goto L401d1c;}}
}
B401d11:L401d11:{c.instructions+=4;NFSU2_TR(0x401d11);
u8 U[32];
w8(U+8,u64(s64(s32(r4(R+8)))));
w8(U+16,u64(s64(s32(u32(0x38ull)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+8,u32(r8(U+24)));
w8(U+0,u64(s64(s32(r4(R+8)))));
w1(R+512,u8((r8(U+0))!=(r8(U+24))));
__builtin_memmove((R+523),(R+512),1);
}
B401d14:{NFSU2_TR(0x401d14);
u8 U[12];
w4(U+0,u32(u32(u32(0x54ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B401d18:{NFSU2_TR(0x401d18);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B401d19:{NFSU2_TR(0x401d19);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B401d1c:L401d1c:{c.instructions+=3;NFSU2_TR(0x401d1c);
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
B401d1e:{NFSU2_TR(0x401d1e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B401d1f:{NFSU2_TR(0x401d1f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B401d30:L401d30:{c.instructions+=2;NFSU2_TR(0x401d30);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B401d36:{NFSU2_TR(0x401d36);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B401d40:L401d40:{c.instructions+=15;NFSU2_TR(0x401d40);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B401d41:{NFSU2_TR(0x401d41);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B401d42:{NFSU2_TR(0x401d42);
__builtin_memmove((R+0),(R+4),4);
}
B401d44:{NFSU2_TR(0x401d44);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B401d45:{NFSU2_TR(0x401d45);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B401d49:{NFSU2_TR(0x401d49);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
__builtin_memmove((R+4),(U+0),1);
}
B401d4b:{NFSU2_TR(0x401d4b);
u8 U[1];
__builtin_memmove((U+0),(R+4),1);
s1(u32(r4(R+0)),r1(U+0));
}
B401d4d:{NFSU2_TR(0x401d4d);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B401d50:{NFSU2_TR(0x401d50);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B401d51:{NFSU2_TR(0x401d51);
__builtin_memmove((R+28),(R+0),4);
}
B401d53:{NFSU2_TR(0x401d53);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B401d56:{NFSU2_TR(0x401d56);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((R+4),(U+0),4);
}
B401d59:{NFSU2_TR(0x401d59);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((R+8),(U+0),4);
}
B401d5c:{NFSU2_TR(0x401d5c);
w4(R+28,u32(u32(r4(R+28))-u32(r4(R+24))));
}
B401d5e:{NFSU2_TR(0x401d5e);
w4(R+12,u32(0x14ull));
}
B401d63:L401d63:{c.instructions+=11;NFSU2_TR(0x401d63);
{u32 ea_=u32(r4(R+8)+u32(4294967292u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B401d66:{NFSU2_TR(0x401d66);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x10ull))));
}
B401d69:{NFSU2_TR(0x401d69);
{u32 ea_=u32(r4(R+8)+u32(4294967280u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B401d6c:{NFSU2_TR(0x401d6c);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x10ull))));
}
B401d6f:{NFSU2_TR(0x401d6f);
w4(R+12,u32(u32(r4(R+12))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+12))==(u32(0x0ull))));
}
B401d70:{NFSU2_TR(0x401d70);
{u32 ea_=u32(r4(R+8)+u32(4294967272u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B401d73:{NFSU2_TR(0x401d73);
{u32 ea_=u32(r4(R+4)+u32(4294967280u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B401d76:{NFSU2_TR(0x401d76);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B401d78:{NFSU2_TR(0x401d78);
{u32 ea_=u32(r4(R+4)+u32(4294967284u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B401d7b:{NFSU2_TR(0x401d7b);
{u32 ea_=u32(r4(R+8)+r4(R+28)+u32(4294967280u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B401d7f:{NFSU2_TR(0x401d7f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x401d63u);}goto L401d63;}}
}
B401d81:L401d81:{c.instructions+=4;NFSU2_TR(0x401d81);
__builtin_memmove((R+8),(R+24),4);
}
B401d83:{NFSU2_TR(0x401d83);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x150ull))));
__builtin_memmove((R+4),(U+0),4);
}
B401d89:{NFSU2_TR(0x401d89);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+0))));
}
B401d8b:{NFSU2_TR(0x401d8b);
w4(R+28,u32(0x14ull));
}
B401d90:L401d90:{c.instructions+=5;NFSU2_TR(0x401d90);
u8 U[10];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),2);
__builtin_memmove((R+12),(U+8),2);
}
B401d94:{NFSU2_TR(0x401d94);
u8 U[2];
__builtin_memmove((U+0),(R+12),2);
s2(u32(r4(R+4)),r2(U+0));
}
B401d97:{NFSU2_TR(0x401d97);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x2ull))));
}
B401d9a:{NFSU2_TR(0x401d9a);
w4(R+28,u32(u32(r4(R+28))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+28))==(u32(0x0ull))));
}
B401d9b:{NFSU2_TR(0x401d9b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x401d90u);}goto L401d90;}}
}
B401d9d:L401d9d:{c.instructions+=3;NFSU2_TR(0x401d9d);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x178ull))));
__builtin_memmove((R+4),(U+0),4);
}
B401da3:{NFSU2_TR(0x401da3);
w4(R+28,u32(0x14ull));
}
B401da8:{NFSU2_TR(0x401da8);
{goto L401db0;}
}
B401db0:L401db0:{c.instructions+=5;NFSU2_TR(0x401db0);
u8 U[10];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),2);
__builtin_memmove((R+12),(U+8),2);
}
B401db4:{NFSU2_TR(0x401db4);
u8 U[2];
__builtin_memmove((U+0),(R+12),2);
s2(u32(r4(R+4)),r2(U+0));
}
B401db7:{NFSU2_TR(0x401db7);
w1(R+512,carry<u32>(r4(R+4),u32(0x2ull)));
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x2ull))));
}
B401dba:{NFSU2_TR(0x401dba);
w4(R+28,u32(u32(r4(R+28))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+28))==(u32(0x0ull))));
}
B401dbb:{NFSU2_TR(0x401dbb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x401db0u);}goto L401db0;}}
}
B401dbd:L401dbd:{c.instructions+=2;NFSU2_TR(0x401dbd);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1a0ull))));
__builtin_memmove((R+28),(U+0),4);
}
B401dc3:{NFSU2_TR(0x401dc3);
w4(R+20,u32(0x14ull));
}
B401dc8:L401dc8:{c.instructions+=5;NFSU2_TR(0x401dc8);
u8 U[9];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
__builtin_memmove((R+4),(U+8),1);
}
B401dcb:{NFSU2_TR(0x401dcb);
u8 U[1];
__builtin_memmove((U+0),(R+4),1);
s1(u32(r4(R+28)),r1(U+0));
}
B401dcd:{NFSU2_TR(0x401dcd);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B401dce:{NFSU2_TR(0x401dce);
u8 U[6];
w1(R+523,sborrow<u32>(r4(R+20),u32(0x1ull)));
w4(R+20,u32(u32(r4(R+20))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+20))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+20))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+20))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B401dcf:{NFSU2_TR(0x401dcf);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x401dc8u);}goto L401dc8;}}
}
B401dd1:L401dd1:{c.instructions+=19;NFSU2_TR(0x401dd1);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1b4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B401dd7:{NFSU2_TR(0x401dd7);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1b4ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B401ddd:{NFSU2_TR(0x401ddd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1b8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B401de3:{NFSU2_TR(0x401de3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1b8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B401de9:{NFSU2_TR(0x401de9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1bcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B401def:{NFSU2_TR(0x401def);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1bcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B401df5:{NFSU2_TR(0x401df5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1c0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B401dfb:{NFSU2_TR(0x401dfb);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1c0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B401e01:{NFSU2_TR(0x401e01);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1c4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B401e07:{NFSU2_TR(0x401e07);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1c4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B401e0d:{NFSU2_TR(0x401e0d);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1c8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B401e13:{NFSU2_TR(0x401e13);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B401e14:{NFSU2_TR(0x401e14);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1c8ull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B401e1a:{NFSU2_TR(0x401e1a);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1c9ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B401e20:{NFSU2_TR(0x401e20);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B401e21:{NFSU2_TR(0x401e21);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B401e22:{NFSU2_TR(0x401e22);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1c9ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B401e28:{NFSU2_TR(0x401e28);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B401e29:{NFSU2_TR(0x401e29);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B401e30:L401e30:{c.instructions+=10;NFSU2_TR(0x401e30);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B401e34:{NFSU2_TR(0x401e34);
__builtin_memmove((R+8),gp(0x82da5c),4);
}
B401e3a:{NFSU2_TR(0x401e3a);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xfull))));
}
B401e3d:{NFSU2_TR(0x401e3d);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfffffff0ull))));
}
B401e40:{NFSU2_TR(0x401e40);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B401e41:{NFSU2_TR(0x401e41);
__builtin_memmove((R+24),gp(0x82da60),4);
}
B401e47:{NFSU2_TR(0x401e47);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B401e4a:{NFSU2_TR(0x401e4a);
u8 U[14];
__builtin_memmove((U+6),(R+24),4);
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
B401e4c:{NFSU2_TR(0x401e4c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B401e4d:{NFSU2_TR(0x401e4d);
if(r1(R+512)){{goto L401e6a;}}
}
B401e4f:L401e4f:{c.instructions+=6;NFSU2_TR(0x401e4f);
__builtin_memmove((R+4),gp(0x82da70),4);
}
B401e55:{NFSU2_TR(0x401e55);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+0))));
}
B401e57:{NFSU2_TR(0x401e57);
s4(0x82da6c,u32(0x1ull));
}
B401e61:{NFSU2_TR(0x401e61);
__builtin_memmove(gp(0x82da70),(R+4),4);
}
B401e67:{NFSU2_TR(0x401e67);
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
B401e69:{NFSU2_TR(0x401e69);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B401e6a:L401e6a:{c.instructions+=3;NFSU2_TR(0x401e6a);
__builtin_memmove((R+0),(R+8),4);
}
B401e6c:{NFSU2_TR(0x401e6c);
__builtin_memmove(gp(0x82da5c),(R+4),4);
}
B401e72:{NFSU2_TR(0x401e72);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B401e80:L401e80:{c.instructions+=11;NFSU2_TR(0x401e80);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B401e84:{NFSU2_TR(0x401e84);
__builtin_memmove((R+8),gp(0x82da5c),4);
}
B401e8a:{NFSU2_TR(0x401e8a);
u8 U[4];
w4(U+0,u32(u32(u32(0x6ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B401e8d:{NFSU2_TR(0x401e8d);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xfull))));
}
B401e90:{NFSU2_TR(0x401e90);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfffffff0ull))));
}
B401e93:{NFSU2_TR(0x401e93);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B401e94:{NFSU2_TR(0x401e94);
__builtin_memmove((R+24),gp(0x82da60),4);
}
B401e9a:{NFSU2_TR(0x401e9a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B401e9d:{NFSU2_TR(0x401e9d);
u8 U[14];
__builtin_memmove((U+6),(R+24),4);
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
B401e9f:{NFSU2_TR(0x401e9f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B401ea0:{NFSU2_TR(0x401ea0);
if(r1(R+512)){{goto L401ebd;}}
}
B401ea2:L401ea2:{c.instructions+=6;NFSU2_TR(0x401ea2);
__builtin_memmove((R+4),gp(0x82da70),4);
}
B401ea8:{NFSU2_TR(0x401ea8);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+0))));
}
B401eaa:{NFSU2_TR(0x401eaa);
s4(0x82da6c,u32(0x1ull));
}
B401eb4:{NFSU2_TR(0x401eb4);
__builtin_memmove(gp(0x82da70),(R+4),4);
}
B401eba:{NFSU2_TR(0x401eba);
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
B401ebc:{NFSU2_TR(0x401ebc);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B401ebd:L401ebd:{c.instructions+=3;NFSU2_TR(0x401ebd);
__builtin_memmove((R+0),(R+8),4);
}
B401ebf:{NFSU2_TR(0x401ebf);
__builtin_memmove(gp(0x82da5c),(R+4),4);
}
B401ec5:{NFSU2_TR(0x401ec5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B401ed0:L401ed0:{c.instructions+=3;NFSU2_TR(0x401ed0);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+0),(U+4),2);
}
B401ed4:{NFSU2_TR(0x401ed4);
u8 U[2];
w2(U+0,u16(u32(r2(R+0))-u32(u16(0xffffull))));
w1(R+518,u8((r2(U+0))==(u16(0x0ull))));
}
B401ed8:{NFSU2_TR(0x401ed8);
if(r1(R+518)){{goto L401f10;}}
}
B401eda:L401eda:{c.instructions+=3;NFSU2_TR(0x401eda);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x5eull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+4),(U+4),2);
}
B401ede:{NFSU2_TR(0x401ede);
u8 U[4];
__builtin_memmove((U+0),(R+4),2);
w2(U+2,u16(u32(r2(U+0))-u32(u16(0xffffull))));
w1(R+518,u8((r2(U+2))==(u16(0x0ull))));
}
B401ee2:{NFSU2_TR(0x401ee2);
if(r1(R+518)){{goto L401f10;}}
}
B401ee4:L401ee4:{c.instructions+=3;NFSU2_TR(0x401ee4);
w4(R+0,u32(s32(s16(r2(R+0)))));
}
B401ee7:{NFSU2_TR(0x401ee7);
u8 U[10];
w1(R+523,u8(0x0ull));
w4(U+6,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B401ee9:{NFSU2_TR(0x401ee9);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L401f00;}}
}
B401eeb:L401eeb:{c.instructions+=5;NFSU2_TR(0x401eeb);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x88a334ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B401ef2:{NFSU2_TR(0x401ef2);
w4(R+4,u32(s32(s16(r2(R+4)))));
}
B401ef5:{NFSU2_TR(0x401ef5);
u8 U[32];
w8(U+8,u64(s64(s32(r4(R+4)))));
w8(U+16,u64(s64(s32(u32(0x38ull)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+4,u32(r8(U+24)));
w8(U+0,u64(s64(s32(r4(R+4)))));
w1(R+512,u8((r8(U+0))!=(r8(U+24))));
__builtin_memmove((R+523),(R+512),1);
}
B401ef8:{NFSU2_TR(0x401ef8);
u8 U[12];
w4(U+0,u32(u32(u32(0x8cull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B401eff:{NFSU2_TR(0x401eff);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B401f00:L401f00:{c.instructions+=5;NFSU2_TR(0x401f00);
w4(R+4,u32(s32(s16(r2(R+4)))));
}
B401f03:{NFSU2_TR(0x401f03);
u8 U[6];
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B401f05:{NFSU2_TR(0x401f05);
u8 U[32];
w8(U+8,u64(s64(s32(r4(R+4)))));
w8(U+16,u64(s64(s32(u32(0x38ull)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+4,u32(r8(U+24)));
w8(U+0,u64(s64(s32(r4(R+4)))));
w1(R+512,u8((r8(U+0))!=(r8(U+24))));
__builtin_memmove((R+523),(R+512),1);
}
B401f08:{NFSU2_TR(0x401f08);
u8 U[12];
w4(U+0,u32(u32(u32(0x8cull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B401f0f:{NFSU2_TR(0x401f0f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B401f10:L401f10:{c.instructions+=2;NFSU2_TR(0x401f10);
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
B401f12:{NFSU2_TR(0x401f12);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B401f20:L401f20:{c.instructions+=3;NFSU2_TR(0x401f20);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+0),(U+4),2);
}
B401f24:{NFSU2_TR(0x401f24);
u8 U[2];
w2(U+0,u16(u32(r2(R+0))-u32(u16(0xffffull))));
w1(R+518,u8((r2(U+0))==(u16(0x0ull))));
}
B401f28:{NFSU2_TR(0x401f28);
if(r1(R+518)){{goto L401f68;}}
}
B401f2a:L401f2a:{c.instructions+=3;NFSU2_TR(0x401f2a);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x5eull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+4),(U+4),2);
}
B401f2e:{NFSU2_TR(0x401f2e);
u8 U[4];
__builtin_memmove((U+0),(R+4),2);
w2(U+2,u16(u32(r2(U+0))-u32(u16(0xffffull))));
w1(R+518,u8((r2(U+2))==(u16(0x0ull))));
}
B401f32:{NFSU2_TR(0x401f32);
if(r1(R+518)){{goto L401f68;}}
}
B401f34:L401f34:{c.instructions+=3;NFSU2_TR(0x401f34);
w4(R+0,u32(s32(s16(r2(R+0)))));
}
B401f37:{NFSU2_TR(0x401f37);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B401f39:{NFSU2_TR(0x401f39);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L401f54;}}
}
B401f3b:L401f3b:{c.instructions+=5;NFSU2_TR(0x401f3b);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x88a334ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B401f42:{NFSU2_TR(0x401f42);
w4(R+4,u32(s32(s16(r2(R+4)))));
}
B401f45:{NFSU2_TR(0x401f45);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(u32(0x38ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B401f48:{NFSU2_TR(0x401f48);
u8 U[12];
w4(U+0,u32(u32(u32(0x8cull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B401f4f:{NFSU2_TR(0x401f4f);
TAIL_STATIC(0x5d8950u,5d8);
}
B401f54:L401f54:{c.instructions+=5;NFSU2_TR(0x401f54);
w4(R+4,u32(s32(s16(r2(R+4)))));
}
B401f57:{NFSU2_TR(0x401f57);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B401f59:{NFSU2_TR(0x401f59);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(u32(0x38ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B401f5c:{NFSU2_TR(0x401f5c);
u8 U[12];
w4(U+0,u32(u32(u32(0x8cull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B401f63:{NFSU2_TR(0x401f63);
TAIL_STATIC(0x5d8950u,5d8);
}
B401f68:L401f68:{c.instructions+=2;NFSU2_TR(0x401f68);
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
B401f6a:{NFSU2_TR(0x401f6a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B401f70:L401f70:{c.instructions+=3;NFSU2_TR(0x401f70);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B401f73:{NFSU2_TR(0x401f73);
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
B401f75:{NFSU2_TR(0x401f75);
if(r1(R+518)){{goto L401f7e;}}
}
B401f77:L401f77:{c.instructions+=3;NFSU2_TR(0x401f77);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B401f7a:{NFSU2_TR(0x401f7a);
{u32 ea_=u32(r4(R+0)+u32(84u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B401f7d:{NFSU2_TR(0x401f7d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B401f7e:L401f7e:{c.instructions+=2;NFSU2_TR(0x401f7e);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B401f84:{NFSU2_TR(0x401f84);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B401f90:L401f90:{c.instructions+=3;NFSU2_TR(0x401f90);
__builtin_memmove((R+0),(R+4),4);
}
B401f92:{NFSU2_TR(0x401f92);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
w2(U+4,u16(0x0ull));
s2(u32(r4(U+0)),r2(U+4));
}
B401f98:{NFSU2_TR(0x401f98);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B401fa0:L401fa0:{c.instructions+=3;NFSU2_TR(0x401fa0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x754ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B401fa6:{NFSU2_TR(0x401fa6);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B401fa8:{NFSU2_TR(0x401fa8);
if(r1(R+518)){{goto L401fbc;}}
}
B401faa:L401faa:{c.instructions+=2;NFSU2_TR(0x401faa);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x7fffffffull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B401faf:{NFSU2_TR(0x401faf);
if(r1(R+518)){{goto L401fbc;}}
}
B401fb1:L401fb1:{c.instructions+=4;NFSU2_TR(0x401fb1);
w4(R+0,u32(0x1ull));
}
B401fb6:{NFSU2_TR(0x401fb6);
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
B401fb8:{NFSU2_TR(0x401fb8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+0),(U+0),1);
}
B401fbb:{NFSU2_TR(0x401fbb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B401fbc:L401fbc:{c.instructions+=4;NFSU2_TR(0x401fbc);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B401fbe:{NFSU2_TR(0x401fbe);
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
B401fc0:{NFSU2_TR(0x401fc0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+0),(U+0),1);
}
B401fc3:{NFSU2_TR(0x401fc3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B401fd0:L401fd0:{c.instructions+=2;NFSU2_TR(0x401fd0);
u8 U[4];
w4(U+0,u32(0x78427cull));
s4(u32(r4(R+4)),r4(U+0));
}
B401fd6:{NFSU2_TR(0x401fd6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B401fe0:L401fe0:{c.instructions+=5;NFSU2_TR(0x401fe0);
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
B401fe5:{NFSU2_TR(0x401fe5);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B401fe6:{NFSU2_TR(0x401fe6);
__builtin_memmove((R+24),(R+4),4);
}
B401fe8:{NFSU2_TR(0x401fe8);
u8 U[4];
w4(U+0,u32(0x78427cull));
s4(u32(r4(R+24)),r4(U+0));
}
B401fee:{NFSU2_TR(0x401fee);
if(r1(R+518)){{goto L401ff9;}}
}
B401ff0:L401ff0:{c.instructions+=2;NFSU2_TR(0x401ff0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B401ff1:{NFSU2_TR(0x401ff1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x401ff6ull));
TAIL_STATIC(0x575630u,575);
}
B401ff6:L401ff6:{c.instructions+=1;NFSU2_TR(0x401ff6);
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
B401ff9:L401ff9:{c.instructions+=3;NFSU2_TR(0x401ff9);
__builtin_memmove((R+0),(R+24),4);
}
B401ffb:{NFSU2_TR(0x401ffb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B401ffc:{NFSU2_TR(0x401ffc);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
XIT:NFSU2_TR_EXIT(0x401,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
