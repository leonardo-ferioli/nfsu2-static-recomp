#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_4fe(u8* __restrict R,Cpu& c);
u32 body_504(u8* __restrict R,Cpu& c);
u32 body_505(u8* __restrict R,Cpu& c);
u32 body_516(u8* __restrict R,Cpu& c);
u32 body_518(u8* __restrict R,Cpu& c);
u32 body_575(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x517,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x517,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_517(u8* __restrict R,Cpu& c);
u32 page_517(Cpu& c){return body_517(c.regs.data(),c);}
__attribute__((noinline)) u32 body_517(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x517002:goto L517002;
case 0x517004:c.instructions+=3;goto B517004;
case 0x51700a:c.instructions+=2;goto B51700a;
case 0x517010:c.instructions+=1;goto B517010;
case 0x517012:goto L517012;
case 0x517016:c.instructions+=20;goto B517016;
case 0x517019:c.instructions+=19;goto B517019;
case 0x51701c:c.instructions+=18;goto B51701c;
case 0x51701f:c.instructions+=17;goto B51701f;
case 0x517025:c.instructions+=16;goto B517025;
case 0x517028:c.instructions+=15;goto B517028;
case 0x51702e:c.instructions+=14;goto B51702e;
case 0x517031:c.instructions+=13;goto B517031;
case 0x517033:c.instructions+=12;goto B517033;
case 0x517039:c.instructions+=11;goto B517039;
case 0x51703f:c.instructions+=10;goto B51703f;
case 0x517041:c.instructions+=9;goto B517041;
case 0x517043:c.instructions+=8;goto B517043;
case 0x517045:c.instructions+=7;goto B517045;
case 0x517047:c.instructions+=6;goto B517047;
case 0x517049:c.instructions+=5;goto B517049;
case 0x51704b:c.instructions+=4;goto B51704b;
case 0x517051:c.instructions+=3;goto B517051;
case 0x517053:c.instructions+=2;goto B517053;
case 0x517056:c.instructions+=1;goto B517056;
case 0x51705c:goto L51705c;
case 0x517062:c.instructions+=14;goto B517062;
case 0x517064:c.instructions+=13;goto B517064;
case 0x517067:c.instructions+=12;goto B517067;
case 0x517069:c.instructions+=11;goto B517069;
case 0x51706f:c.instructions+=10;goto B51706f;
case 0x517071:c.instructions+=9;goto B517071;
case 0x517074:c.instructions+=8;goto B517074;
case 0x517077:c.instructions+=7;goto B517077;
case 0x51707d:c.instructions+=6;goto B51707d;
case 0x517080:c.instructions+=5;goto B517080;
case 0x517082:c.instructions+=4;goto B517082;
case 0x517084:c.instructions+=3;goto B517084;
case 0x517087:c.instructions+=2;goto B517087;
case 0x517089:c.instructions+=1;goto B517089;
case 0x51708b:goto L51708b;
case 0x51708e:c.instructions+=2;goto B51708e;
case 0x517091:c.instructions+=1;goto B517091;
case 0x517094:goto L517094;
case 0x51709a:c.instructions+=1;goto B51709a;
case 0x5170a0:goto L5170a0;
case 0x5170a3:c.instructions+=9;goto B5170a3;
case 0x5170a4:c.instructions+=8;goto B5170a4;
case 0x5170a5:c.instructions+=7;goto B5170a5;
case 0x5170a8:c.instructions+=6;goto B5170a8;
case 0x5170a9:c.instructions+=5;goto B5170a9;
case 0x5170ac:c.instructions+=4;goto B5170ac;
case 0x5170af:c.instructions+=3;goto B5170af;
case 0x5170b0:c.instructions+=2;goto B5170b0;
case 0x5170b1:c.instructions+=1;goto B5170b1;
case 0x5170b4:goto L5170b4;
case 0x5170b6:c.instructions+=1;goto B5170b6;
case 0x5170b8:goto L5170b8;
case 0x5170bb:c.instructions+=6;goto B5170bb;
case 0x5170c1:c.instructions+=5;goto B5170c1;
case 0x5170c4:c.instructions+=4;goto B5170c4;
case 0x5170c7:c.instructions+=3;goto B5170c7;
case 0x5170cb:c.instructions+=2;goto B5170cb;
case 0x5170d1:c.instructions+=1;goto B5170d1;
case 0x5170d4:goto L5170d4;
case 0x5170d7:c.instructions+=8;goto B5170d7;
case 0x5170db:c.instructions+=7;goto B5170db;
case 0x5170de:c.instructions+=6;goto B5170de;
case 0x5170e0:c.instructions+=5;goto B5170e0;
case 0x5170e3:c.instructions+=4;goto B5170e3;
case 0x5170e5:c.instructions+=3;goto B5170e5;
case 0x5170e8:c.instructions+=2;goto B5170e8;
case 0x5170ea:c.instructions+=1;goto B5170ea;
case 0x5170ec:goto L5170ec;
case 0x5170ee:c.instructions+=7;goto B5170ee;
case 0x5170f0:c.instructions+=6;goto B5170f0;
case 0x5170f2:c.instructions+=5;goto B5170f2;
case 0x5170f6:c.instructions+=4;goto B5170f6;
case 0x5170f9:c.instructions+=3;goto B5170f9;
case 0x5170fc:c.instructions+=2;goto B5170fc;
case 0x517102:c.instructions+=1;goto B517102;
case 0x517107:goto L517107;
case 0x517109:c.instructions+=1;goto B517109;
case 0x51710f:goto L51710f;
case 0x517112:c.instructions+=3;goto B517112;
case 0x517118:c.instructions+=2;goto B517118;
case 0x51711b:c.instructions+=1;goto B51711b;
case 0x517121:goto L517121;
case 0x517123:c.instructions+=9;goto B517123;
case 0x517125:c.instructions+=8;goto B517125;
case 0x517127:c.instructions+=7;goto B517127;
case 0x517128:c.instructions+=6;goto B517128;
case 0x51712a:c.instructions+=5;goto B51712a;
case 0x51712d:c.instructions+=4;goto B51712d;
case 0x517131:c.instructions+=3;goto B517131;
case 0x517137:c.instructions+=2;goto B517137;
case 0x51713d:c.instructions+=1;goto B51713d;
case 0x51713f:goto L51713f;
case 0x517141:goto L517141;
case 0x517144:c.instructions+=3;goto B517144;
case 0x517146:c.instructions+=2;goto B517146;
case 0x517149:c.instructions+=1;goto B517149;
case 0x51714f:goto L51714f;
case 0x517152:c.instructions+=2;goto B517152;
case 0x517155:c.instructions+=1;goto B517155;
case 0x51715a:goto L51715a;
case 0x51715c:c.instructions+=1;goto B51715c;
case 0x51715e:goto L51715e;
case 0x517161:c.instructions+=7;goto B517161;
case 0x517167:c.instructions+=6;goto B517167;
case 0x51716a:c.instructions+=5;goto B51716a;
case 0x51716d:c.instructions+=4;goto B51716d;
case 0x517171:c.instructions+=3;goto B517171;
case 0x517177:c.instructions+=2;goto B517177;
case 0x51717a:c.instructions+=1;goto B51717a;
case 0x517180:goto L517180;
case 0x517183:c.instructions+=8;goto B517183;
case 0x517187:c.instructions+=7;goto B517187;
case 0x51718a:c.instructions+=6;goto B51718a;
case 0x51718c:c.instructions+=5;goto B51718c;
case 0x51718f:c.instructions+=4;goto B51718f;
case 0x517191:c.instructions+=3;goto B517191;
case 0x517194:c.instructions+=2;goto B517194;
case 0x517196:c.instructions+=1;goto B517196;
case 0x517198:goto L517198;
case 0x51719a:c.instructions+=7;goto B51719a;
case 0x51719c:c.instructions+=6;goto B51719c;
case 0x51719e:c.instructions+=5;goto B51719e;
case 0x5171a2:c.instructions+=4;goto B5171a2;
case 0x5171a5:c.instructions+=3;goto B5171a5;
case 0x5171a8:c.instructions+=2;goto B5171a8;
case 0x5171ae:c.instructions+=1;goto B5171ae;
case 0x5171b3:goto L5171b3;
case 0x5171b5:c.instructions+=1;goto B5171b5;
case 0x5171bb:goto L5171bb;
case 0x5171be:c.instructions+=4;goto B5171be;
case 0x5171c4:c.instructions+=3;goto B5171c4;
case 0x5171c7:c.instructions+=2;goto B5171c7;
case 0x5171cd:c.instructions+=1;goto B5171cd;
case 0x5171d0:goto L5171d0;
case 0x5171d2:c.instructions+=9;goto B5171d2;
case 0x5171d4:c.instructions+=8;goto B5171d4;
case 0x5171d6:c.instructions+=7;goto B5171d6;
case 0x5171d7:c.instructions+=6;goto B5171d7;
case 0x5171d9:c.instructions+=5;goto B5171d9;
case 0x5171dc:c.instructions+=4;goto B5171dc;
case 0x5171e0:c.instructions+=3;goto B5171e0;
case 0x5171e6:c.instructions+=2;goto B5171e6;
case 0x5171ec:c.instructions+=1;goto B5171ec;
case 0x5171ee:goto L5171ee;
case 0x5171f0:goto L5171f0;
case 0x5171f3:c.instructions+=3;goto B5171f3;
case 0x5171f5:c.instructions+=2;goto B5171f5;
case 0x5171f8:c.instructions+=1;goto B5171f8;
case 0x5171fe:goto L5171fe;
case 0x517201:c.instructions+=2;goto B517201;
case 0x517204:c.instructions+=1;goto B517204;
case 0x517209:goto L517209;
case 0x51720f:c.instructions+=8;goto B51720f;
case 0x517211:c.instructions+=7;goto B517211;
case 0x517213:c.instructions+=6;goto B517213;
case 0x517219:c.instructions+=5;goto B517219;
case 0x51721b:c.instructions+=4;goto B51721b;
case 0x51721d:c.instructions+=3;goto B51721d;
case 0x517223:c.instructions+=2;goto B517223;
case 0x517225:c.instructions+=1;goto B517225;
case 0x517227:goto L517227;
case 0x517228:c.instructions+=5;goto B517228;
case 0x517229:c.instructions+=4;goto B517229;
case 0x51722a:c.instructions+=3;goto B51722a;
case 0x51722b:c.instructions+=2;goto B51722b;
case 0x51722c:c.instructions+=1;goto B51722c;
case 0x517230:goto L517230;
case 0x517234:c.instructions+=8;goto B517234;
case 0x517237:c.instructions+=7;goto B517237;
case 0x51723d:c.instructions+=6;goto B51723d;
case 0x517243:c.instructions+=5;goto B517243;
case 0x517249:c.instructions+=4;goto B517249;
case 0x51724f:c.instructions+=3;goto B51724f;
case 0x517251:c.instructions+=2;goto B517251;
case 0x517254:c.instructions+=1;goto B517254;
case 0x517256:goto L517256;
case 0x517258:c.instructions+=2;goto B517258;
case 0x517262:c.instructions+=1;goto B517262;
case 0x517264:goto L517264;
case 0x51726a:c.instructions+=3;goto B51726a;
case 0x51726c:c.instructions+=2;goto B51726c;
case 0x51726f:c.instructions+=1;goto B51726f;
case 0x517271:goto L517271;
case 0x51727b:goto L51727b;
case 0x517281:c.instructions+=2;goto B517281;
case 0x517283:c.instructions+=1;goto B517283;
case 0x517289:goto L517289;
case 0x51728d:c.instructions+=1;goto B51728d;
case 0x51728f:goto L51728f;
case 0x517295:c.instructions+=37;goto B517295;
case 0x51729b:c.instructions+=36;goto B51729b;
case 0x51729d:c.instructions+=35;goto B51729d;
case 0x5172a3:c.instructions+=34;goto B5172a3;
case 0x5172a5:c.instructions+=33;goto B5172a5;
case 0x5172ab:c.instructions+=32;goto B5172ab;
case 0x5172ad:c.instructions+=31;goto B5172ad;
case 0x5172af:c.instructions+=30;goto B5172af;
case 0x5172b3:c.instructions+=29;goto B5172b3;
case 0x5172b5:c.instructions+=28;goto B5172b5;
case 0x5172b7:c.instructions+=27;goto B5172b7;
case 0x5172b9:c.instructions+=26;goto B5172b9;
case 0x5172bb:c.instructions+=25;goto B5172bb;
case 0x5172bf:c.instructions+=24;goto B5172bf;
case 0x5172c2:c.instructions+=23;goto B5172c2;
case 0x5172c4:c.instructions+=22;goto B5172c4;
case 0x5172c7:c.instructions+=21;goto B5172c7;
case 0x5172cb:c.instructions+=20;goto B5172cb;
case 0x5172ce:c.instructions+=19;goto B5172ce;
case 0x5172d1:c.instructions+=18;goto B5172d1;
case 0x5172d3:c.instructions+=17;goto B5172d3;
case 0x5172d9:c.instructions+=16;goto B5172d9;
case 0x5172db:c.instructions+=15;goto B5172db;
case 0x5172e1:c.instructions+=14;goto B5172e1;
case 0x5172e3:c.instructions+=13;goto B5172e3;
case 0x5172e5:c.instructions+=12;goto B5172e5;
case 0x5172e7:c.instructions+=11;goto B5172e7;
case 0x5172e9:c.instructions+=10;goto B5172e9;
case 0x5172eb:c.instructions+=9;goto B5172eb;
case 0x5172ed:c.instructions+=8;goto B5172ed;
case 0x5172ef:c.instructions+=7;goto B5172ef;
case 0x5172f1:c.instructions+=6;goto B5172f1;
case 0x5172f7:c.instructions+=5;goto B5172f7;
case 0x5172f9:c.instructions+=4;goto B5172f9;
case 0x5172fb:c.instructions+=3;goto B5172fb;
case 0x5172fe:c.instructions+=2;goto B5172fe;
case 0x517300:c.instructions+=1;goto B517300;
case 0x517302:goto L517302;
case 0x517307:goto L517307;
case 0x51730a:c.instructions+=1;goto B51730a;
case 0x517310:goto L517310;
case 0x517312:c.instructions+=21;goto B517312;
case 0x517317:c.instructions+=20;goto B517317;
case 0x51731d:c.instructions+=19;goto B51731d;
case 0x51731e:c.instructions+=18;goto B51731e;
case 0x517325:c.instructions+=17;goto B517325;
case 0x517326:c.instructions+=16;goto B517326;
case 0x517327:c.instructions+=15;goto B517327;
case 0x517329:c.instructions+=14;goto B517329;
case 0x51732e:c.instructions+=13;goto B51732e;
case 0x517332:c.instructions+=12;goto B517332;
case 0x517335:c.instructions+=11;goto B517335;
case 0x517338:c.instructions+=10;goto B517338;
case 0x51733d:c.instructions+=9;goto B51733d;
case 0x517341:c.instructions+=8;goto B517341;
case 0x517344:c.instructions+=7;goto B517344;
case 0x517347:c.instructions+=6;goto B517347;
case 0x517348:c.instructions+=5;goto B517348;
case 0x517350:c.instructions+=4;goto B517350;
case 0x517356:c.instructions+=3;goto B517356;
case 0x51735c:c.instructions+=2;goto B51735c;
case 0x517363:c.instructions+=1;goto B517363;
case 0x517368:goto L517368;
case 0x51736b:c.instructions+=9;goto B51736b;
case 0x51736e:c.instructions+=8;goto B51736e;
case 0x517374:c.instructions+=7;goto B517374;
case 0x517378:c.instructions+=6;goto B517378;
case 0x51737b:c.instructions+=5;goto B51737b;
case 0x51737d:c.instructions+=4;goto B51737d;
case 0x51737e:c.instructions+=3;goto B51737e;
case 0x517385:c.instructions+=2;goto B517385;
case 0x517388:c.instructions+=1;goto B517388;
case 0x517390:goto L517390;
case 0x517391:c.instructions+=2;goto B517391;
case 0x517393:c.instructions+=1;goto B517393;
case 0x517398:goto L517398;
case 0x51739d:c.instructions+=1;goto B51739d;
case 0x51739f:goto L51739f;
case 0x5173a0:c.instructions+=1;goto B5173a0;
case 0x5173a5:goto L5173a5;
case 0x5173a8:goto L5173a8;
case 0x5173aa:c.instructions+=2;goto B5173aa;
case 0x5173ab:c.instructions+=1;goto B5173ab;
case 0x5173b0:goto L5173b0;
case 0x5173b2:c.instructions+=13;goto B5173b2;
case 0x5173b7:c.instructions+=12;goto B5173b7;
case 0x5173bd:c.instructions+=11;goto B5173bd;
case 0x5173be:c.instructions+=10;goto B5173be;
case 0x5173c5:c.instructions+=9;goto B5173c5;
case 0x5173c6:c.instructions+=8;goto B5173c6;
case 0x5173c7:c.instructions+=7;goto B5173c7;
case 0x5173c9:c.instructions+=6;goto B5173c9;
case 0x5173cd:c.instructions+=5;goto B5173cd;
case 0x5173d3:c.instructions+=4;goto B5173d3;
case 0x5173d6:c.instructions+=3;goto B5173d6;
case 0x5173d7:c.instructions+=2;goto B5173d7;
case 0x5173df:c.instructions+=1;goto B5173df;
case 0x5173e4:goto L5173e4;
case 0x5173e8:c.instructions+=6;goto B5173e8;
case 0x5173eb:c.instructions+=5;goto B5173eb;
case 0x5173f1:c.instructions+=4;goto B5173f1;
case 0x5173f2:c.instructions+=3;goto B5173f2;
case 0x5173f9:c.instructions+=2;goto B5173f9;
case 0x5173fc:c.instructions+=1;goto B5173fc;
case 0x517400:goto L517400;
case 0x517402:c.instructions+=10;goto B517402;
case 0x517407:c.instructions+=9;goto B517407;
case 0x51740d:c.instructions+=8;goto B51740d;
case 0x51740e:c.instructions+=7;goto B51740e;
case 0x517415:c.instructions+=6;goto B517415;
case 0x517416:c.instructions+=5;goto B517416;
case 0x517417:c.instructions+=4;goto B517417;
case 0x517419:c.instructions+=3;goto B517419;
case 0x51741c:c.instructions+=2;goto B51741c;
case 0x51741e:c.instructions+=1;goto B51741e;
case 0x517420:goto L517420;
case 0x517425:goto L517425;
case 0x517429:c.instructions+=1;goto B517429;
case 0x51742b:goto L51742b;
case 0x51742e:c.instructions+=2;goto B51742e;
case 0x517430:c.instructions+=1;goto B517430;
case 0x517432:goto L517432;
case 0x517434:c.instructions+=1;goto B517434;
case 0x517439:goto L517439;
case 0x51743c:c.instructions+=4;goto B51743c;
case 0x517440:c.instructions+=3;goto B517440;
case 0x517442:c.instructions+=2;goto B517442;
case 0x51744a:c.instructions+=1;goto B51744a;
case 0x51744c:goto L51744c;
case 0x51744e:c.instructions+=4;goto B51744e;
case 0x517452:c.instructions+=3;goto B517452;
case 0x517453:c.instructions+=2;goto B517453;
case 0x517455:c.instructions+=1;goto B517455;
case 0x51745a:goto L51745a;
case 0x51745c:goto L51745c;
case 0x51745e:goto L51745e;
case 0x517460:c.instructions+=2;goto B517460;
case 0x517462:c.instructions+=1;goto B517462;
case 0x517464:goto L517464;
case 0x517467:c.instructions+=3;goto B517467;
case 0x517469:c.instructions+=2;goto B517469;
case 0x51746c:c.instructions+=1;goto B51746c;
case 0x51746e:goto L51746e;
case 0x517471:goto L517471;
case 0x517478:c.instructions+=4;goto B517478;
case 0x51747b:c.instructions+=3;goto B51747b;
case 0x51747d:c.instructions+=2;goto B51747d;
case 0x517480:c.instructions+=1;goto B517480;
case 0x517482:goto L517482;
case 0x517485:goto L517485;
case 0x517488:goto L517488;
case 0x51748d:goto L51748d;
case 0x517491:c.instructions+=4;goto B517491;
case 0x517492:c.instructions+=3;goto B517492;
case 0x517499:c.instructions+=2;goto B517499;
case 0x51749c:c.instructions+=1;goto B51749c;
case 0x5174a0:goto L5174a0;
case 0x5174a1:c.instructions+=5;goto B5174a1;
case 0x5174a2:c.instructions+=4;goto B5174a2;
case 0x5174a4:c.instructions+=3;goto B5174a4;
case 0x5174a7:c.instructions+=2;goto B5174a7;
case 0x5174a9:c.instructions+=1;goto B5174a9;
case 0x5174ab:goto L5174ab;
case 0x5174af:c.instructions+=1;goto B5174af;
case 0x5174b0:goto L5174b0;
case 0x5174b3:c.instructions+=2;goto B5174b3;
case 0x5174b5:c.instructions+=1;goto B5174b5;
case 0x5174b7:goto L5174b7;
case 0x5174bb:c.instructions+=4;goto B5174bb;
case 0x5174be:c.instructions+=3;goto B5174be;
case 0x5174c0:c.instructions+=2;goto B5174c0;
case 0x5174c2:c.instructions+=1;goto B5174c2;
case 0x5174c4:goto L5174c4;
case 0x5174c7:c.instructions+=2;goto B5174c7;
case 0x5174c9:c.instructions+=1;goto B5174c9;
case 0x5174cb:goto L5174cb;
case 0x5174cc:c.instructions+=3;goto B5174cc;
case 0x5174ce:c.instructions+=2;goto B5174ce;
case 0x5174cf:c.instructions+=1;goto B5174cf;
case 0x5174d2:goto L5174d2;
case 0x5174d5:c.instructions+=17;goto B5174d5;
case 0x5174d9:c.instructions+=16;goto B5174d9;
case 0x5174db:c.instructions+=15;goto B5174db;
case 0x5174dd:c.instructions+=14;goto B5174dd;
case 0x5174e1:c.instructions+=13;goto B5174e1;
case 0x5174e3:c.instructions+=12;goto B5174e3;
case 0x5174e5:c.instructions+=11;goto B5174e5;
case 0x5174e8:c.instructions+=10;goto B5174e8;
case 0x5174ea:c.instructions+=9;goto B5174ea;
case 0x5174ec:c.instructions+=8;goto B5174ec;
case 0x5174ef:c.instructions+=7;goto B5174ef;
case 0x5174f3:c.instructions+=6;goto B5174f3;
case 0x5174f7:c.instructions+=5;goto B5174f7;
case 0x5174f9:c.instructions+=4;goto B5174f9;
case 0x5174fb:c.instructions+=3;goto B5174fb;
case 0x5174fd:c.instructions+=2;goto B5174fd;
case 0x517502:c.instructions+=1;goto B517502;
case 0x517504:goto L517504;
case 0x517505:c.instructions+=2;goto B517505;
case 0x517508:c.instructions+=1;goto B517508;
case 0x51750d:goto L51750d;
case 0x51750f:c.instructions+=3;goto B51750f;
case 0x517511:c.instructions+=2;goto B517511;
case 0x517513:c.instructions+=1;goto B517513;
case 0x517515:goto L517515;
case 0x517516:c.instructions+=3;goto B517516;
case 0x517518:c.instructions+=2;goto B517518;
case 0x517519:c.instructions+=1;goto B517519;
case 0x517520:goto L517520;
case 0x517521:c.instructions+=5;goto B517521;
case 0x517522:c.instructions+=4;goto B517522;
case 0x517526:c.instructions+=3;goto B517526;
case 0x517528:c.instructions+=2;goto B517528;
case 0x51752a:c.instructions+=1;goto B51752a;
case 0x51752c:goto L51752c;
case 0x51752d:c.instructions+=3;goto B51752d;
case 0x517530:c.instructions+=2;goto B517530;
case 0x517532:c.instructions+=1;goto B517532;
case 0x517534:goto L517534;
case 0x517535:c.instructions+=2;goto B517535;
case 0x517537:c.instructions+=1;goto B517537;
case 0x51753c:goto L51753c;
case 0x51753e:c.instructions+=1;goto B51753e;
case 0x517540:goto L517540;
case 0x517543:c.instructions+=2;goto B517543;
case 0x517545:c.instructions+=1;goto B517545;
case 0x517547:goto L517547;
case 0x51754a:c.instructions+=2;goto B51754a;
case 0x51754c:c.instructions+=1;goto B51754c;
case 0x51754e:goto L51754e;
case 0x51754f:c.instructions+=2;goto B51754f;
case 0x517551:c.instructions+=1;goto B517551;
case 0x517556:goto L517556;
case 0x517558:c.instructions+=3;goto B517558;
case 0x51755a:c.instructions+=2;goto B51755a;
case 0x51755c:c.instructions+=1;goto B51755c;
case 0x51755e:goto L51755e;
case 0x51755f:goto L51755f;
case 0x517560:c.instructions+=2;goto B517560;
case 0x517561:c.instructions+=1;goto B517561;
case 0x517570:goto L517570;
case 0x517571:c.instructions+=7;goto B517571;
case 0x517572:c.instructions+=6;goto B517572;
case 0x517576:c.instructions+=5;goto B517576;
case 0x517577:c.instructions+=4;goto B517577;
case 0x517579:c.instructions+=3;goto B517579;
case 0x51757b:c.instructions+=2;goto B51757b;
case 0x51757d:c.instructions+=1;goto B51757d;
case 0x51757f:goto L51757f;
case 0x517582:c.instructions+=2;goto B517582;
case 0x517583:c.instructions+=1;goto B517583;
case 0x517588:goto L517588;
case 0x51758b:c.instructions+=8;goto B51758b;
case 0x51758e:c.instructions+=7;goto B51758e;
case 0x517591:c.instructions+=6;goto B517591;
case 0x517594:c.instructions+=5;goto B517594;
case 0x517595:c.instructions+=4;goto B517595;
case 0x517598:c.instructions+=3;goto B517598;
case 0x517599:c.instructions+=2;goto B517599;
case 0x51759a:c.instructions+=1;goto B51759a;
case 0x51759d:goto L51759d;
case 0x5175a0:c.instructions+=1;goto B5175a0;
case 0x5175a2:goto L5175a2;
case 0x5175a3:c.instructions+=3;goto B5175a3;
case 0x5175aa:c.instructions+=2;goto B5175aa;
case 0x5175ab:c.instructions+=1;goto B5175ab;
case 0x5175b0:goto L5175b0;
case 0x5175b3:c.instructions+=5;goto B5175b3;
case 0x5175b6:c.instructions+=4;goto B5175b6;
case 0x5175b8:c.instructions+=3;goto B5175b8;
case 0x5175ba:c.instructions+=2;goto B5175ba;
case 0x5175be:c.instructions+=1;goto B5175be;
case 0x5175c0:goto L5175c0;
case 0x5175c2:c.instructions+=3;goto B5175c2;
case 0x5175c5:c.instructions+=2;goto B5175c5;
case 0x5175c7:c.instructions+=1;goto B5175c7;
case 0x5175ca:goto L5175ca;
case 0x5175cc:goto L5175cc;
case 0x5175ce:c.instructions+=1;goto B5175ce;
case 0x5175d1:goto L5175d1;
case 0x5175d3:goto L5175d3;
case 0x5175d5:goto L5175d5;
case 0x5175d8:goto L5175d8;
case 0x5175da:goto L5175da;
case 0x5175dd:c.instructions+=2;goto B5175dd;
case 0x5175de:c.instructions+=1;goto B5175de;
case 0x5175e3:goto L5175e3;
case 0x5175e7:c.instructions+=3;goto B5175e7;
case 0x5175ea:c.instructions+=2;goto B5175ea;
case 0x5175ed:c.instructions+=1;goto B5175ed;
case 0x5175ee:goto L5175ee;
case 0x5175ef:c.instructions+=4;goto B5175ef;
case 0x5175f2:c.instructions+=3;goto B5175f2;
case 0x5175f3:c.instructions+=2;goto B5175f3;
case 0x5175f4:c.instructions+=1;goto B5175f4;
case 0x517600:goto L517600;
case 0x517601:c.instructions+=4;goto B517601;
case 0x517603:c.instructions+=3;goto B517603;
case 0x517605:c.instructions+=2;goto B517605;
case 0x51760a:c.instructions+=1;goto B51760a;
case 0x51760c:goto L51760c;
case 0x517611:c.instructions+=1;goto B517611;
case 0x517613:goto L517613;
case 0x517618:c.instructions+=1;goto B517618;
case 0x51761a:goto L51761a;
case 0x51761d:c.instructions+=2;goto B51761d;
case 0x51761e:c.instructions+=1;goto B51761e;
case 0x517623:goto L517623;
case 0x517626:goto L517626;
case 0x51762d:c.instructions+=2;goto B51762d;
case 0x51762e:c.instructions+=1;goto B51762e;
case 0x517630:goto L517630;
case 0x517631:c.instructions+=5;goto B517631;
case 0x517633:c.instructions+=4;goto B517633;
case 0x517635:c.instructions+=3;goto B517635;
case 0x51763a:c.instructions+=2;goto B51763a;
case 0x51763b:c.instructions+=1;goto B51763b;
case 0x51763d:goto L51763d;
case 0x517642:c.instructions+=1;goto B517642;
case 0x517644:goto L517644;
case 0x517649:c.instructions+=1;goto B517649;
case 0x51764b:goto L51764b;
case 0x51764e:c.instructions+=2;goto B51764e;
case 0x51764f:c.instructions+=1;goto B51764f;
case 0x517654:goto L517654;
case 0x517657:goto L517657;
case 0x51765b:c.instructions+=3;goto B51765b;
case 0x51765d:c.instructions+=2;goto B51765d;
case 0x517664:c.instructions+=1;goto B517664;
case 0x517666:goto L517666;
case 0x517668:c.instructions+=2;goto B517668;
case 0x51766b:c.instructions+=1;goto B51766b;
case 0x517670:goto L517670;
case 0x517672:c.instructions+=3;goto B517672;
case 0x517673:c.instructions+=2;goto B517673;
case 0x517675:c.instructions+=1;goto B517675;
case 0x517677:goto L517677;
case 0x517679:c.instructions+=4;goto B517679;
case 0x51767a:c.instructions+=3;goto B51767a;
case 0x51767b:c.instructions+=2;goto B51767b;
case 0x51767c:c.instructions+=1;goto B51767c;
case 0x517681:goto L517681;
case 0x517683:c.instructions+=4;goto B517683;
case 0x517686:c.instructions+=3;goto B517686;
case 0x517688:c.instructions+=2;goto B517688;
case 0x51768a:c.instructions+=1;goto B51768a;
case 0x517690:goto L517690;
case 0x517692:c.instructions+=4;goto B517692;
case 0x517695:c.instructions+=3;goto B517695;
case 0x517696:c.instructions+=2;goto B517696;
case 0x517698:c.instructions+=1;goto B517698;
case 0x51769a:goto L51769a;
case 0x51769d:c.instructions+=1;goto B51769d;
case 0x51769e:goto L51769e;
case 0x51769f:c.instructions+=2;goto B51769f;
case 0x5176a0:c.instructions+=1;goto B5176a0;
case 0x5176b0:goto L5176b0;
case 0x5176b1:c.instructions+=5;goto B5176b1;
case 0x5176b3:c.instructions+=4;goto B5176b3;
case 0x5176b6:c.instructions+=3;goto B5176b6;
case 0x5176b8:c.instructions+=2;goto B5176b8;
case 0x5176b9:c.instructions+=1;goto B5176b9;
case 0x5176bb:goto L5176bb;
case 0x5176bc:c.instructions+=1;goto B5176bc;
case 0x5176c1:goto L5176c1;
case 0x5176c4:c.instructions+=1;goto B5176c4;
case 0x5176cb:goto L5176cb;
case 0x5176cf:c.instructions+=3;goto B5176cf;
case 0x5176d1:c.instructions+=2;goto B5176d1;
case 0x5176d8:c.instructions+=1;goto B5176d8;
case 0x5176da:goto L5176da;
case 0x5176dc:c.instructions+=2;goto B5176dc;
case 0x5176df:c.instructions+=1;goto B5176df;
case 0x5176e0:goto L5176e0;
case 0x5176e2:c.instructions+=3;goto B5176e2;
case 0x5176e3:c.instructions+=2;goto B5176e3;
case 0x5176e5:c.instructions+=1;goto B5176e5;
case 0x5176e7:goto L5176e7;
case 0x5176e9:c.instructions+=3;goto B5176e9;
case 0x5176ea:c.instructions+=2;goto B5176ea;
case 0x5176eb:c.instructions+=1;goto B5176eb;
case 0x5176f0:goto L5176f0;
case 0x5176f3:c.instructions+=4;goto B5176f3;
case 0x5176f6:c.instructions+=3;goto B5176f6;
case 0x5176f8:c.instructions+=2;goto B5176f8;
case 0x5176fa:c.instructions+=1;goto B5176fa;
case 0x517700:goto L517700;
case 0x517702:c.instructions+=5;goto B517702;
case 0x517703:c.instructions+=4;goto B517703;
case 0x517705:c.instructions+=3;goto B517705;
case 0x517706:c.instructions+=2;goto B517706;
case 0x517708:c.instructions+=1;goto B517708;
case 0x51770a:goto L51770a;
case 0x51770d:c.instructions+=2;goto B51770d;
case 0x51770e:c.instructions+=1;goto B51770e;
case 0x517713:goto L517713;
case 0x517716:c.instructions+=1;goto B517716;
case 0x517719:goto L517719;
case 0x51771a:c.instructions+=2;goto B51771a;
case 0x51771b:c.instructions+=1;goto B51771b;
case 0x517720:goto L517720;
case 0x517723:c.instructions+=7;goto B517723;
case 0x517724:c.instructions+=6;goto B517724;
case 0x517726:c.instructions+=5;goto B517726;
case 0x517729:c.instructions+=4;goto B517729;
case 0x51772c:c.instructions+=3;goto B51772c;
case 0x51772f:c.instructions+=2;goto B51772f;
case 0x517731:c.instructions+=1;goto B517731;
case 0x517737:goto L517737;
case 0x517738:c.instructions+=4;goto B517738;
case 0x517739:c.instructions+=3;goto B517739;
case 0x51773a:c.instructions+=2;goto B51773a;
case 0x51773d:c.instructions+=1;goto B51773d;
case 0x517741:goto L517741;
case 0x517744:c.instructions+=5;goto B517744;
case 0x517747:c.instructions+=4;goto B517747;
case 0x51774a:c.instructions+=3;goto B51774a;
case 0x51774c:c.instructions+=2;goto B51774c;
case 0x51774f:c.instructions+=1;goto B51774f;
case 0x517751:goto L517751;
case 0x517753:c.instructions+=1;goto B517753;
case 0x517759:goto L517759;
case 0x51775d:c.instructions+=5;goto B51775d;
case 0x517760:c.instructions+=4;goto B517760;
case 0x517763:c.instructions+=3;goto B517763;
case 0x517766:c.instructions+=2;goto B517766;
case 0x517768:c.instructions+=1;goto B517768;
case 0x51776a:goto L51776a;
case 0x51776d:c.instructions+=1;goto B51776d;
case 0x517772:goto L517772;
case 0x517774:c.instructions+=1;goto B517774;
case 0x517776:goto L517776;
case 0x517779:goto L517779;
case 0x51777b:c.instructions+=1;goto B51777b;
case 0x517781:goto L517781;
case 0x517785:c.instructions+=3;goto B517785;
case 0x517786:c.instructions+=2;goto B517786;
case 0x517789:c.instructions+=1;goto B517789;
case 0x51778f:goto L51778f;
case 0x517796:goto L517796;
case 0x517799:c.instructions+=2;goto B517799;
case 0x51779b:c.instructions+=1;goto B51779b;
case 0x5177a0:goto L5177a0;
case 0x5177a3:c.instructions+=3;goto B5177a3;
case 0x5177a5:c.instructions+=2;goto B5177a5;
case 0x5177a8:c.instructions+=1;goto B5177a8;
case 0x5177ad:goto L5177ad;
case 0x5177b0:c.instructions+=7;goto B5177b0;
case 0x5177b2:c.instructions+=6;goto B5177b2;
case 0x5177b5:c.instructions+=5;goto B5177b5;
case 0x5177b8:c.instructions+=4;goto B5177b8;
case 0x5177ba:c.instructions+=3;goto B5177ba;
case 0x5177bd:c.instructions+=2;goto B5177bd;
case 0x5177c0:c.instructions+=1;goto B5177c0;
case 0x5177c5:goto L5177c5;
case 0x5177c8:c.instructions+=12;goto B5177c8;
case 0x5177ca:c.instructions+=11;goto B5177ca;
case 0x5177cd:c.instructions+=10;goto B5177cd;
case 0x5177d0:c.instructions+=9;goto B5177d0;
case 0x5177d3:c.instructions+=8;goto B5177d3;
case 0x5177d6:c.instructions+=7;goto B5177d6;
case 0x5177da:c.instructions+=6;goto B5177da;
case 0x5177de:c.instructions+=5;goto B5177de;
case 0x5177e0:c.instructions+=4;goto B5177e0;
case 0x5177e3:c.instructions+=3;goto B5177e3;
case 0x5177e6:c.instructions+=2;goto B5177e6;
case 0x5177e9:c.instructions+=1;goto B5177e9;
case 0x5177ee:goto L5177ee;
case 0x5177f0:c.instructions+=23;goto B5177f0;
case 0x5177f2:c.instructions+=22;goto B5177f2;
case 0x5177f5:c.instructions+=21;goto B5177f5;
case 0x5177f9:c.instructions+=20;goto B5177f9;
case 0x5177fd:c.instructions+=19;goto B5177fd;
case 0x517800:c.instructions+=18;goto B517800;
case 0x517802:c.instructions+=17;goto B517802;
case 0x517806:c.instructions+=16;goto B517806;
case 0x51780a:c.instructions+=15;goto B51780a;
case 0x51780e:c.instructions+=14;goto B51780e;
case 0x517811:c.instructions+=13;goto B517811;
case 0x517813:c.instructions+=12;goto B517813;
case 0x517817:c.instructions+=11;goto B517817;
case 0x51781b:c.instructions+=10;goto B51781b;
case 0x51781f:c.instructions+=9;goto B51781f;
case 0x517823:c.instructions+=8;goto B517823;
case 0x517824:c.instructions+=7;goto B517824;
case 0x517828:c.instructions+=6;goto B517828;
case 0x51782a:c.instructions+=5;goto B51782a;
case 0x51782b:c.instructions+=4;goto B51782b;
case 0x51782f:c.instructions+=3;goto B51782f;
case 0x517831:c.instructions+=2;goto B517831;
case 0x517835:c.instructions+=1;goto B517835;
case 0x51783a:goto L51783a;
case 0x51783c:c.instructions+=8;goto B51783c;
case 0x51783f:c.instructions+=7;goto B51783f;
case 0x517842:c.instructions+=6;goto B517842;
case 0x517845:c.instructions+=5;goto B517845;
case 0x517848:c.instructions+=4;goto B517848;
case 0x51784b:c.instructions+=3;goto B51784b;
case 0x51784e:c.instructions+=2;goto B51784e;
case 0x517851:c.instructions+=1;goto B517851;
case 0x517853:goto L517853;
case 0x517854:c.instructions+=4;goto B517854;
case 0x517858:c.instructions+=3;goto B517858;
case 0x517859:c.instructions+=2;goto B517859;
case 0x51785b:c.instructions+=1;goto B51785b;
case 0x517860:goto L517860;
case 0x517863:c.instructions+=6;goto B517863;
case 0x517866:c.instructions+=5;goto B517866;
case 0x517869:c.instructions+=4;goto B517869;
case 0x51786c:c.instructions+=3;goto B51786c;
case 0x51786f:c.instructions+=2;goto B51786f;
case 0x517872:c.instructions+=1;goto B517872;
case 0x517874:goto L517874;
case 0x517877:goto L517877;
case 0x51787b:c.instructions+=4;goto B51787b;
case 0x51787e:c.instructions+=3;goto B51787e;
case 0x51787f:c.instructions+=2;goto B51787f;
case 0x517883:c.instructions+=1;goto B517883;
case 0x517889:goto L517889;
case 0x51788a:c.instructions+=2;goto B51788a;
case 0x51788b:c.instructions+=1;goto B51788b;
case 0x51788c:goto L51788c;
case 0x51788d:c.instructions+=2;goto B51788d;
case 0x517890:c.instructions+=1;goto B517890;
case 0x5178b0:goto L5178b0;
case 0x5178b4:c.instructions+=3;goto B5178b4;
case 0x5178b6:c.instructions+=2;goto B5178b6;
case 0x5178b9:c.instructions+=1;goto B5178b9;
case 0x5178bb:goto L5178bb;
case 0x5178c0:goto L5178c0;
case 0x5178d0:goto L5178d0;
case 0x5178d1:c.instructions+=7;goto B5178d1;
case 0x5178d2:c.instructions+=6;goto B5178d2;
case 0x5178d6:c.instructions+=5;goto B5178d6;
case 0x5178d7:c.instructions+=4;goto B5178d7;
case 0x5178da:c.instructions+=3;goto B5178da;
case 0x5178dc:c.instructions+=2;goto B5178dc;
case 0x5178e0:c.instructions+=1;goto B5178e0;
case 0x5178e6:goto L5178e6;
case 0x5178e7:c.instructions+=2;goto B5178e7;
case 0x5178e8:c.instructions+=1;goto B5178e8;
case 0x5178f0:goto L5178f0;
case 0x5178f4:c.instructions+=6;goto B5178f4;
case 0x5178fb:c.instructions+=5;goto B5178fb;
case 0x5178fe:c.instructions+=4;goto B5178fe;
case 0x517900:c.instructions+=3;goto B517900;
case 0x517902:c.instructions+=2;goto B517902;
case 0x517906:c.instructions+=1;goto B517906;
case 0x517908:goto L517908;
case 0x51790b:c.instructions+=2;goto B51790b;
case 0x51790e:c.instructions+=1;goto B51790e;
case 0x517910:goto L517910;
case 0x517914:c.instructions+=2;goto B517914;
case 0x517918:c.instructions+=1;goto B517918;
case 0x51791a:goto L51791a;
case 0x51791b:c.instructions+=3;goto B51791b;
case 0x51791e:c.instructions+=2;goto B51791e;
case 0x517920:c.instructions+=1;goto B517920;
case 0x517922:goto L517922;
case 0x517924:goto L517924;
case 0x517927:c.instructions+=3;goto B517927;
case 0x517929:c.instructions+=2;goto B517929;
case 0x51792b:c.instructions+=1;goto B51792b;
case 0x51792d:goto L51792d;
case 0x517931:c.instructions+=2;goto B517931;
case 0x517933:c.instructions+=1;goto B517933;
case 0x517935:goto L517935;
case 0x517937:c.instructions+=9;goto B517937;
case 0x51793a:c.instructions+=8;goto B51793a;
case 0x51793d:c.instructions+=7;goto B51793d;
case 0x517940:c.instructions+=6;goto B517940;
case 0x517943:c.instructions+=5;goto B517943;
case 0x517946:c.instructions+=4;goto B517946;
case 0x517949:c.instructions+=3;goto B517949;
case 0x51794c:c.instructions+=2;goto B51794c;
case 0x51794f:c.instructions+=1;goto B51794f;
case 0x517951:goto L517951;
case 0x517953:c.instructions+=5;goto B517953;
case 0x517956:c.instructions+=4;goto B517956;
case 0x517959:c.instructions+=3;goto B517959;
case 0x51795c:c.instructions+=2;goto B51795c;
case 0x51795f:c.instructions+=1;goto B51795f;
case 0x517962:goto L517962;
case 0x517966:goto L517966;
case 0x517969:c.instructions+=2;goto B517969;
case 0x51796b:c.instructions+=1;goto B51796b;
case 0x51796d:goto L51796d;
case 0x517971:c.instructions+=2;goto B517971;
case 0x517972:c.instructions+=1;goto B517972;
case 0x517973:goto L517973;
case 0x517977:c.instructions+=2;goto B517977;
case 0x517979:c.instructions+=1;goto B517979;
case 0x51797b:goto L51797b;
case 0x51797f:c.instructions+=2;goto B51797f;
case 0x517980:c.instructions+=1;goto B517980;
case 0x517985:goto L517985;
case 0x517988:c.instructions+=14;goto B517988;
case 0x51798b:c.instructions+=13;goto B51798b;
case 0x51798d:c.instructions+=12;goto B51798d;
case 0x51798f:c.instructions+=11;goto B51798f;
case 0x517990:c.instructions+=10;goto B517990;
case 0x517992:c.instructions+=9;goto B517992;
case 0x517995:c.instructions+=8;goto B517995;
case 0x517998:c.instructions+=7;goto B517998;
case 0x51799b:c.instructions+=6;goto B51799b;
case 0x51799e:c.instructions+=5;goto B51799e;
case 0x51799f:c.instructions+=4;goto B51799f;
case 0x5179a2:c.instructions+=3;goto B5179a2;
case 0x5179a5:c.instructions+=2;goto B5179a5;
case 0x5179a6:c.instructions+=1;goto B5179a6;
case 0x5179a9:goto L5179a9;
case 0x5179ad:c.instructions+=2;goto B5179ad;
case 0x5179ae:c.instructions+=1;goto B5179ae;
case 0x5179b3:goto L5179b3;
case 0x5179b6:c.instructions+=11;goto B5179b6;
case 0x5179b8:c.instructions+=10;goto B5179b8;
case 0x5179ba:c.instructions+=9;goto B5179ba;
case 0x5179bc:c.instructions+=8;goto B5179bc;
case 0x5179bf:c.instructions+=7;goto B5179bf;
case 0x5179c2:c.instructions+=6;goto B5179c2;
case 0x5179c5:c.instructions+=5;goto B5179c5;
case 0x5179c6:c.instructions+=4;goto B5179c6;
case 0x5179c9:c.instructions+=3;goto B5179c9;
case 0x5179ca:c.instructions+=2;goto B5179ca;
case 0x5179cb:c.instructions+=1;goto B5179cb;
case 0x5179d0:goto L5179d0;
case 0x5179d1:c.instructions+=7;goto B5179d1;
case 0x5179d2:c.instructions+=6;goto B5179d2;
case 0x5179d6:c.instructions+=5;goto B5179d6;
case 0x5179d7:c.instructions+=4;goto B5179d7;
case 0x5179da:c.instructions+=3;goto B5179da;
case 0x5179dc:c.instructions+=2;goto B5179dc;
case 0x5179e0:c.instructions+=1;goto B5179e0;
case 0x5179e2:goto L5179e2;
case 0x5179e3:c.instructions+=2;goto B5179e3;
case 0x5179e4:c.instructions+=1;goto B5179e4;
case 0x5179f0:goto L5179f0;
case 0x5179f4:c.instructions+=5;goto B5179f4;
case 0x5179fb:c.instructions+=4;goto B5179fb;
case 0x5179fe:c.instructions+=3;goto B5179fe;
case 0x517a00:c.instructions+=2;goto B517a00;
case 0x517a02:c.instructions+=1;goto B517a02;
case 0x517a04:goto L517a04;
case 0x517a07:c.instructions+=2;goto B517a07;
case 0x517a0a:c.instructions+=1;goto B517a0a;
case 0x517a10:goto L517a10;
case 0x517a14:c.instructions+=2;goto B517a14;
case 0x517a16:c.instructions+=1;goto B517a16;
case 0x517a18:goto L517a18;
case 0x517a19:c.instructions+=3;goto B517a19;
case 0x517a1c:c.instructions+=2;goto B517a1c;
case 0x517a1e:c.instructions+=1;goto B517a1e;
case 0x517a20:goto L517a20;
case 0x517a24:goto L517a24;
case 0x517a27:c.instructions+=2;goto B517a27;
case 0x517a29:c.instructions+=1;goto B517a29;
case 0x517a2b:goto L517a2b;
case 0x517a2f:c.instructions+=2;goto B517a2f;
case 0x517a30:c.instructions+=1;goto B517a30;
case 0x517a31:goto L517a31;
case 0x517a35:c.instructions+=2;goto B517a35;
case 0x517a37:c.instructions+=1;goto B517a37;
case 0x517a39:goto L517a39;
case 0x517a3d:c.instructions+=4;goto B517a3d;
case 0x517a3f:c.instructions+=3;goto B517a3f;
case 0x517a42:c.instructions+=2;goto B517a42;
case 0x517a43:c.instructions+=1;goto B517a43;
case 0x517a48:goto L517a48;
case 0x517a4a:c.instructions+=10;goto B517a4a;
case 0x517a4d:c.instructions+=9;goto B517a4d;
case 0x517a50:c.instructions+=8;goto B517a50;
case 0x517a52:c.instructions+=7;goto B517a52;
case 0x517a53:c.instructions+=6;goto B517a53;
case 0x517a54:c.instructions+=5;goto B517a54;
case 0x517a56:c.instructions+=4;goto B517a56;
case 0x517a59:c.instructions+=3;goto B517a59;
case 0x517a5c:c.instructions+=2;goto B517a5c;
case 0x517a5d:c.instructions+=1;goto B517a5d;
case 0x517a60:goto L517a60;
case 0x517a63:c.instructions+=3;goto B517a63;
case 0x517a65:c.instructions+=2;goto B517a65;
case 0x517a67:c.instructions+=1;goto B517a67;
case 0x517a69:goto L517a69;
case 0x517a6d:c.instructions+=3;goto B517a6d;
case 0x517a6f:c.instructions+=2;goto B517a6f;
case 0x517a73:c.instructions+=1;goto B517a73;
case 0x517a75:goto L517a75;
case 0x517a78:c.instructions+=9;goto B517a78;
case 0x517a7a:c.instructions+=8;goto B517a7a;
case 0x517a7d:c.instructions+=7;goto B517a7d;
case 0x517a80:c.instructions+=6;goto B517a80;
case 0x517a83:c.instructions+=5;goto B517a83;
case 0x517a86:c.instructions+=4;goto B517a86;
case 0x517a89:c.instructions+=3;goto B517a89;
case 0x517a8c:c.instructions+=2;goto B517a8c;
case 0x517a8f:c.instructions+=1;goto B517a8f;
case 0x517a91:goto L517a91;
case 0x517a93:c.instructions+=5;goto B517a93;
case 0x517a96:c.instructions+=4;goto B517a96;
case 0x517a99:c.instructions+=3;goto B517a99;
case 0x517a9c:c.instructions+=2;goto B517a9c;
case 0x517aa0:c.instructions+=1;goto B517aa0;
case 0x517aa2:goto L517aa2;
case 0x517aa6:c.instructions+=2;goto B517aa6;
case 0x517aa7:c.instructions+=1;goto B517aa7;
case 0x517aac:goto L517aac;
case 0x517aaf:c.instructions+=9;goto B517aaf;
case 0x517ab1:c.instructions+=8;goto B517ab1;
case 0x517ab3:c.instructions+=7;goto B517ab3;
case 0x517ab5:c.instructions+=6;goto B517ab5;
case 0x517ab8:c.instructions+=5;goto B517ab8;
case 0x517ab9:c.instructions+=4;goto B517ab9;
case 0x517abc:c.instructions+=3;goto B517abc;
case 0x517abd:c.instructions+=2;goto B517abd;
case 0x517abe:c.instructions+=1;goto B517abe;
case 0x517ad0:goto L517ad0;
case 0x517ad1:c.instructions+=9;goto B517ad1;
case 0x517ad2:c.instructions+=8;goto B517ad2;
case 0x517ad5:c.instructions+=7;goto B517ad5;
case 0x517ad7:c.instructions+=6;goto B517ad7;
case 0x517ad8:c.instructions+=5;goto B517ad8;
case 0x517ad9:c.instructions+=4;goto B517ad9;
case 0x517add:c.instructions+=3;goto B517add;
case 0x517ade:c.instructions+=2;goto B517ade;
case 0x517ae2:c.instructions+=1;goto B517ae2;
case 0x517ae8:goto L517ae8;
case 0x517af0:goto L517af0;
case 0x517af4:c.instructions+=6;goto B517af4;
case 0x517afb:c.instructions+=5;goto B517afb;
case 0x517afe:c.instructions+=4;goto B517afe;
case 0x517b00:c.instructions+=3;goto B517b00;
case 0x517b02:c.instructions+=2;goto B517b02;
case 0x517b06:c.instructions+=1;goto B517b06;
case 0x517b08:goto L517b08;
case 0x517b0b:c.instructions+=2;goto B517b0b;
case 0x517b0e:c.instructions+=1;goto B517b0e;
case 0x517b10:goto L517b10;
case 0x517b14:c.instructions+=2;goto B517b14;
case 0x517b18:c.instructions+=1;goto B517b18;
case 0x517b1a:goto L517b1a;
case 0x517b1b:c.instructions+=3;goto B517b1b;
case 0x517b1e:c.instructions+=2;goto B517b1e;
case 0x517b20:c.instructions+=1;goto B517b20;
case 0x517b22:goto L517b22;
case 0x517b24:goto L517b24;
case 0x517b27:c.instructions+=3;goto B517b27;
case 0x517b29:c.instructions+=2;goto B517b29;
case 0x517b2b:c.instructions+=1;goto B517b2b;
case 0x517b2d:goto L517b2d;
case 0x517b31:c.instructions+=2;goto B517b31;
case 0x517b33:c.instructions+=1;goto B517b33;
case 0x517b35:goto L517b35;
case 0x517b38:c.instructions+=16;goto B517b38;
case 0x517b3b:c.instructions+=15;goto B517b3b;
case 0x517b3e:c.instructions+=14;goto B517b3e;
case 0x517b41:c.instructions+=13;goto B517b41;
case 0x517b43:c.instructions+=12;goto B517b43;
case 0x517b46:c.instructions+=11;goto B517b46;
case 0x517b49:c.instructions+=10;goto B517b49;
case 0x517b4b:c.instructions+=9;goto B517b4b;
case 0x517b4e:c.instructions+=8;goto B517b4e;
case 0x517b50:c.instructions+=7;goto B517b50;
case 0x517b52:c.instructions+=6;goto B517b52;
case 0x517b55:c.instructions+=5;goto B517b55;
case 0x517b58:c.instructions+=4;goto B517b58;
case 0x517b5b:c.instructions+=3;goto B517b5b;
case 0x517b5d:c.instructions+=2;goto B517b5d;
case 0x517b60:c.instructions+=1;goto B517b60;
case 0x517b62:goto L517b62;
case 0x517b65:c.instructions+=7;goto B517b65;
case 0x517b68:c.instructions+=6;goto B517b68;
case 0x517b6b:c.instructions+=5;goto B517b6b;
case 0x517b6e:c.instructions+=4;goto B517b6e;
case 0x517b71:c.instructions+=3;goto B517b71;
case 0x517b74:c.instructions+=2;goto B517b74;
case 0x517b76:c.instructions+=1;goto B517b76;
case 0x517b79:goto L517b79;
case 0x517b7d:goto L517b7d;
case 0x517b80:c.instructions+=2;goto B517b80;
case 0x517b82:c.instructions+=1;goto B517b82;
case 0x517b88:goto L517b88;
case 0x517b8c:goto L517b8c;
case 0x517b90:c.instructions+=2;goto B517b90;
case 0x517b92:c.instructions+=1;goto B517b92;
case 0x517b94:goto L517b94;
case 0x517b98:c.instructions+=2;goto B517b98;
case 0x517b99:c.instructions+=1;goto B517b99;
case 0x517b9e:goto L517b9e;
case 0x517ba1:c.instructions+=23;goto B517ba1;
case 0x517ba4:c.instructions+=22;goto B517ba4;
case 0x517ba8:c.instructions+=21;goto B517ba8;
case 0x517bac:c.instructions+=20;goto B517bac;
case 0x517bae:c.instructions+=19;goto B517bae;
case 0x517bb0:c.instructions+=18;goto B517bb0;
case 0x517bb3:c.instructions+=17;goto B517bb3;
case 0x517bb6:c.instructions+=16;goto B517bb6;
case 0x517bb8:c.instructions+=15;goto B517bb8;
case 0x517bba:c.instructions+=14;goto B517bba;
case 0x517bbd:c.instructions+=13;goto B517bbd;
case 0x517bbf:c.instructions+=12;goto B517bbf;
case 0x517bc1:c.instructions+=11;goto B517bc1;
case 0x517bc4:c.instructions+=10;goto B517bc4;
case 0x517bc5:c.instructions+=9;goto B517bc5;
case 0x517bc7:c.instructions+=8;goto B517bc7;
case 0x517bca:c.instructions+=7;goto B517bca;
case 0x517bcb:c.instructions+=6;goto B517bcb;
case 0x517bcd:c.instructions+=5;goto B517bcd;
case 0x517bce:c.instructions+=4;goto B517bce;
case 0x517bd1:c.instructions+=3;goto B517bd1;
case 0x517bd2:c.instructions+=2;goto B517bd2;
case 0x517bd3:c.instructions+=1;goto B517bd3;
case 0x517bd6:goto L517bd6;
case 0x517bda:c.instructions+=2;goto B517bda;
case 0x517bdb:c.instructions+=1;goto B517bdb;
case 0x517be0:goto L517be0;
case 0x517be3:c.instructions+=15;goto B517be3;
case 0x517be6:c.instructions+=14;goto B517be6;
case 0x517be8:c.instructions+=13;goto B517be8;
case 0x517beb:c.instructions+=12;goto B517beb;
case 0x517bee:c.instructions+=11;goto B517bee;
case 0x517bf1:c.instructions+=10;goto B517bf1;
case 0x517bf4:c.instructions+=9;goto B517bf4;
case 0x517bf5:c.instructions+=8;goto B517bf5;
case 0x517bf8:c.instructions+=7;goto B517bf8;
case 0x517bfa:c.instructions+=6;goto B517bfa;
case 0x517bfb:c.instructions+=5;goto B517bfb;
case 0x517bfc:c.instructions+=4;goto B517bfc;
case 0x517bfe:c.instructions+=3;goto B517bfe;
case 0x517bff:c.instructions+=2;goto B517bff;
case 0x517c00:c.instructions+=1;goto B517c00;
case 0x517c10:goto L517c10;
case 0x517c13:c.instructions+=4;goto B517c13;
case 0x517c14:c.instructions+=3;goto B517c14;
case 0x517c16:c.instructions+=2;goto B517c16;
case 0x517c1d:c.instructions+=1;goto B517c1d;
case 0x517c1f:goto L517c1f;
case 0x517c20:c.instructions+=5;goto B517c20;
case 0x517c24:c.instructions+=4;goto B517c24;
case 0x517c26:c.instructions+=3;goto B517c26;
case 0x517c27:c.instructions+=2;goto B517c27;
case 0x517c2b:c.instructions+=1;goto B517c2b;
case 0x517c2d:goto L517c2d;
case 0x517c31:c.instructions+=5;goto B517c31;
case 0x517c39:c.instructions+=4;goto B517c39;
case 0x517c41:c.instructions+=3;goto B517c41;
case 0x517c49:c.instructions+=2;goto B517c49;
case 0x517c4a:c.instructions+=1;goto B517c4a;
case 0x517c4c:goto L517c4c;
case 0x517c4f:c.instructions+=2;goto B517c4f;
case 0x517c52:c.instructions+=1;goto B517c52;
case 0x517c53:goto L517c53;
case 0x517c54:c.instructions+=1;goto B517c54;
case 0x517c59:goto L517c59;
case 0x517c5c:c.instructions+=2;goto B517c5c;
case 0x517c5e:c.instructions+=1;goto B517c5e;
case 0x517c60:goto L517c60;
case 0x517c67:goto L517c67;
case 0x517c68:c.instructions+=4;goto B517c68;
case 0x517c69:c.instructions+=3;goto B517c69;
case 0x517c6b:c.instructions+=2;goto B517c6b;
case 0x517c6d:c.instructions+=1;goto B517c6d;
case 0x517c72:goto L517c72;
case 0x517c73:c.instructions+=1;goto B517c73;
case 0x517c74:goto L517c74;
case 0x517c75:c.instructions+=2;goto B517c75;
case 0x517c78:c.instructions+=1;goto B517c78;
case 0x517c80:goto L517c80;
case 0x517c83:c.instructions+=3;goto B517c83;
case 0x517c8a:c.instructions+=2;goto B517c8a;
case 0x517c8e:c.instructions+=1;goto B517c8e;
case 0x517c94:goto L517c94;
case 0x517c97:c.instructions+=9;goto B517c97;
case 0x517c98:c.instructions+=8;goto B517c98;
case 0x517c9c:c.instructions+=7;goto B517c9c;
case 0x517c9d:c.instructions+=6;goto B517c9d;
case 0x517ca0:c.instructions+=5;goto B517ca0;
case 0x517ca6:c.instructions+=4;goto B517ca6;
case 0x517ca8:c.instructions+=3;goto B517ca8;
case 0x517ca9:c.instructions+=2;goto B517ca9;
case 0x517cac:c.instructions+=1;goto B517cac;
case 0x517cb2:goto L517cb2;
case 0x517cb3:goto L517cb3;
case 0x517cb6:c.instructions+=3;goto B517cb6;
case 0x517cb8:c.instructions+=2;goto B517cb8;
case 0x517cba:c.instructions+=1;goto B517cba;
case 0x517cbc:goto L517cbc;
case 0x517cbf:c.instructions+=1;goto B517cbf;
case 0x517cc2:goto L517cc2;
case 0x517cc4:c.instructions+=3;goto B517cc4;
case 0x517cca:c.instructions+=2;goto B517cca;
case 0x517cd0:c.instructions+=1;goto B517cd0;
case 0x517cd2:goto L517cd2;
case 0x517cd3:c.instructions+=3;goto B517cd3;
case 0x517cd6:c.instructions+=2;goto B517cd6;
case 0x517cd8:c.instructions+=1;goto B517cd8;
case 0x517cda:goto L517cda;
case 0x517cdc:goto L517cdc;
case 0x517cdf:c.instructions+=4;goto B517cdf;
case 0x517ce1:c.instructions+=3;goto B517ce1;
case 0x517ce3:c.instructions+=2;goto B517ce3;
case 0x517ce5:c.instructions+=1;goto B517ce5;
case 0x517ce7:goto L517ce7;
case 0x517ceb:c.instructions+=2;goto B517ceb;
case 0x517ced:c.instructions+=1;goto B517ced;
case 0x517cef:goto L517cef;
case 0x517cf0:c.instructions+=5;goto B517cf0;
case 0x517cf4:c.instructions+=4;goto B517cf4;
case 0x517cf7:c.instructions+=3;goto B517cf7;
case 0x517cf8:c.instructions+=2;goto B517cf8;
case 0x517cfa:c.instructions+=1;goto B517cfa;
case 0x517cff:goto L517cff;
case 0x517d01:c.instructions+=8;goto B517d01;
case 0x517d03:c.instructions+=7;goto B517d03;
case 0x517d06:c.instructions+=6;goto B517d06;
case 0x517d09:c.instructions+=5;goto B517d09;
case 0x517d0c:c.instructions+=4;goto B517d0c;
case 0x517d0f:c.instructions+=3;goto B517d0f;
case 0x517d12:c.instructions+=2;goto B517d12;
case 0x517d15:c.instructions+=1;goto B517d15;
case 0x517d17:goto L517d17;
case 0x517d19:c.instructions+=7;goto B517d19;
case 0x517d1c:c.instructions+=6;goto B517d1c;
case 0x517d1f:c.instructions+=5;goto B517d1f;
case 0x517d22:c.instructions+=4;goto B517d22;
case 0x517d25:c.instructions+=3;goto B517d25;
case 0x517d28:c.instructions+=2;goto B517d28;
case 0x517d2b:c.instructions+=1;goto B517d2b;
case 0x517d2e:goto L517d2e;
case 0x517d32:goto L517d32;
case 0x517d35:c.instructions+=2;goto B517d35;
case 0x517d37:c.instructions+=1;goto B517d37;
case 0x517d3d:goto L517d3d;
case 0x517d41:c.instructions+=1;goto B517d41;
case 0x517d42:goto L517d42;
case 0x517d46:c.instructions+=2;goto B517d46;
case 0x517d48:c.instructions+=1;goto B517d48;
case 0x517d4a:goto L517d4a;
case 0x517d4d:c.instructions+=6;goto B517d4d;
case 0x517d4e:c.instructions+=5;goto B517d4e;
case 0x517d52:c.instructions+=4;goto B517d52;
case 0x517d55:c.instructions+=3;goto B517d55;
case 0x517d56:c.instructions+=2;goto B517d56;
case 0x517d58:c.instructions+=1;goto B517d58;
case 0x517d5d:goto L517d5d;
case 0x517d5f:c.instructions+=12;goto B517d5f;
case 0x517d61:c.instructions+=11;goto B517d61;
case 0x517d64:c.instructions+=10;goto B517d64;
case 0x517d67:c.instructions+=9;goto B517d67;
case 0x517d6a:c.instructions+=8;goto B517d6a;
case 0x517d6d:c.instructions+=7;goto B517d6d;
case 0x517d70:c.instructions+=6;goto B517d70;
case 0x517d73:c.instructions+=5;goto B517d73;
case 0x517d74:c.instructions+=4;goto B517d74;
case 0x517d75:c.instructions+=3;goto B517d75;
case 0x517d76:c.instructions+=2;goto B517d76;
case 0x517d79:c.instructions+=1;goto B517d79;
case 0x517d7c:goto L517d7c;
case 0x517d7f:c.instructions+=12;goto B517d7f;
case 0x517d81:c.instructions+=11;goto B517d81;
case 0x517d84:c.instructions+=10;goto B517d84;
case 0x517d86:c.instructions+=9;goto B517d86;
case 0x517d89:c.instructions+=8;goto B517d89;
case 0x517d8c:c.instructions+=7;goto B517d8c;
case 0x517d8f:c.instructions+=6;goto B517d8f;
case 0x517d90:c.instructions+=5;goto B517d90;
case 0x517d93:c.instructions+=4;goto B517d93;
case 0x517d96:c.instructions+=3;goto B517d96;
case 0x517d97:c.instructions+=2;goto B517d97;
case 0x517d9a:c.instructions+=1;goto B517d9a;
case 0x517d9b:goto L517d9b;
case 0x517d9e:c.instructions+=1;goto B517d9e;
case 0x517db0:goto L517db0;
case 0x517db3:c.instructions+=4;goto B517db3;
case 0x517db4:c.instructions+=3;goto B517db4;
case 0x517db6:c.instructions+=2;goto B517db6;
case 0x517dbd:c.instructions+=1;goto B517dbd;
case 0x517dbf:goto L517dbf;
case 0x517dc0:c.instructions+=5;goto B517dc0;
case 0x517dc4:c.instructions+=4;goto B517dc4;
case 0x517dc6:c.instructions+=3;goto B517dc6;
case 0x517dc7:c.instructions+=2;goto B517dc7;
case 0x517dcb:c.instructions+=1;goto B517dcb;
case 0x517dcd:goto L517dcd;
case 0x517dd1:c.instructions+=5;goto B517dd1;
case 0x517dd9:c.instructions+=4;goto B517dd9;
case 0x517de1:c.instructions+=3;goto B517de1;
case 0x517de9:c.instructions+=2;goto B517de9;
case 0x517dea:c.instructions+=1;goto B517dea;
case 0x517dec:goto L517dec;
case 0x517def:c.instructions+=2;goto B517def;
case 0x517df2:c.instructions+=1;goto B517df2;
case 0x517df3:goto L517df3;
case 0x517df4:c.instructions+=1;goto B517df4;
case 0x517df9:goto L517df9;
case 0x517dfc:c.instructions+=2;goto B517dfc;
case 0x517dfe:c.instructions+=1;goto B517dfe;
case 0x517e00:goto L517e00;
case 0x517e07:goto L517e07;
case 0x517e08:c.instructions+=4;goto B517e08;
case 0x517e09:c.instructions+=3;goto B517e09;
case 0x517e0b:c.instructions+=2;goto B517e0b;
case 0x517e0d:c.instructions+=1;goto B517e0d;
case 0x517e12:goto L517e12;
case 0x517e13:c.instructions+=1;goto B517e13;
case 0x517e14:goto L517e14;
case 0x517e15:c.instructions+=2;goto B517e15;
case 0x517e18:c.instructions+=1;goto B517e18;
case 0x517e20:goto L517e20;
case 0x517e23:c.instructions+=4;goto B517e23;
case 0x517e24:c.instructions+=3;goto B517e24;
case 0x517e26:c.instructions+=2;goto B517e26;
case 0x517e2d:c.instructions+=1;goto B517e2d;
case 0x517e2f:goto L517e2f;
case 0x517e30:c.instructions+=5;goto B517e30;
case 0x517e34:c.instructions+=4;goto B517e34;
case 0x517e36:c.instructions+=3;goto B517e36;
case 0x517e37:c.instructions+=2;goto B517e37;
case 0x517e3b:c.instructions+=1;goto B517e3b;
case 0x517e3d:goto L517e3d;
case 0x517e41:c.instructions+=6;goto B517e41;
case 0x517e49:c.instructions+=5;goto B517e49;
case 0x517e51:c.instructions+=4;goto B517e51;
case 0x517e59:c.instructions+=3;goto B517e59;
case 0x517e61:c.instructions+=2;goto B517e61;
case 0x517e62:c.instructions+=1;goto B517e62;
case 0x517e64:goto L517e64;
case 0x517e67:c.instructions+=1;goto B517e67;
case 0x517e68:goto L517e68;
case 0x517e69:c.instructions+=1;goto B517e69;
case 0x517e6e:goto L517e6e;
case 0x517e71:c.instructions+=2;goto B517e71;
case 0x517e73:c.instructions+=1;goto B517e73;
case 0x517e75:goto L517e75;
case 0x517e7c:goto L517e7c;
case 0x517e7d:c.instructions+=4;goto B517e7d;
case 0x517e7e:c.instructions+=3;goto B517e7e;
case 0x517e80:c.instructions+=2;goto B517e80;
case 0x517e82:c.instructions+=1;goto B517e82;
case 0x517e87:goto L517e87;
case 0x517e88:c.instructions+=1;goto B517e88;
case 0x517e89:goto L517e89;
case 0x517e8a:c.instructions+=2;goto B517e8a;
case 0x517e8d:c.instructions+=1;goto B517e8d;
case 0x517e90:goto L517e90;
case 0x517e94:c.instructions+=4;goto B517e94;
case 0x517e96:c.instructions+=3;goto B517e96;
case 0x517e97:c.instructions+=2;goto B517e97;
case 0x517e9a:c.instructions+=1;goto B517e9a;
case 0x517e9c:goto L517e9c;
case 0x517e9e:c.instructions+=1;goto B517e9e;
case 0x517ea0:goto L517ea0;
case 0x517ea3:c.instructions+=3;goto B517ea3;
case 0x517ea5:c.instructions+=2;goto B517ea5;
case 0x517ea8:c.instructions+=1;goto B517ea8;
case 0x517eaa:goto L517eaa;
case 0x517ead:goto L517ead;
case 0x517eb0:c.instructions+=2;goto B517eb0;
case 0x517eb3:c.instructions+=1;goto B517eb3;
case 0x517eb5:goto L517eb5;
case 0x517eb8:c.instructions+=3;goto B517eb8;
case 0x517eba:c.instructions+=2;goto B517eba;
case 0x517ebd:c.instructions+=1;goto B517ebd;
case 0x517ebf:goto L517ebf;
case 0x517ec2:goto L517ec2;
case 0x517ec9:c.instructions+=1;goto B517ec9;
case 0x517ecc:goto L517ecc;
case 0x517ecf:c.instructions+=1;goto B517ecf;
case 0x517ed1:goto L517ed1;
case 0x517ed4:goto L517ed4;
case 0x517ed7:goto L517ed7;
case 0x517ed8:c.instructions+=1;goto B517ed8;
case 0x517ee0:goto L517ee0;
case 0x517ee1:c.instructions+=4;goto B517ee1;
case 0x517ee5:c.instructions+=3;goto B517ee5;
case 0x517ee8:c.instructions+=2;goto B517ee8;
case 0x517eea:c.instructions+=1;goto B517eea;
case 0x517eec:goto L517eec;
case 0x517ef1:goto L517ef1;
case 0x517ef4:c.instructions+=1;goto B517ef4;
case 0x517ef6:goto L517ef6;
case 0x517ef9:c.instructions+=2;goto B517ef9;
case 0x517efb:c.instructions+=1;goto B517efb;
case 0x517efd:goto L517efd;
case 0x517eff:c.instructions+=2;goto B517eff;
case 0x517f02:c.instructions+=1;goto B517f02;
case 0x517f04:goto L517f04;
case 0x517f06:c.instructions+=1;goto B517f06;
case 0x517f0b:goto L517f0b;
case 0x517f0e:c.instructions+=5;goto B517f0e;
case 0x517f15:c.instructions+=4;goto B517f15;
case 0x517f1c:c.instructions+=3;goto B517f1c;
case 0x517f1e:c.instructions+=2;goto B517f1e;
case 0x517f1f:c.instructions+=1;goto B517f1f;
case 0x517f30:goto L517f30;
case 0x517f31:c.instructions+=5;goto B517f31;
case 0x517f33:c.instructions+=4;goto B517f33;
case 0x517f36:c.instructions+=3;goto B517f36;
case 0x517f37:c.instructions+=2;goto B517f37;
case 0x517f38:c.instructions+=1;goto B517f38;
case 0x517f3d:goto L517f3d;
case 0x517f41:c.instructions+=4;goto B517f41;
case 0x517f44:c.instructions+=3;goto B517f44;
case 0x517f46:c.instructions+=2;goto B517f46;
case 0x517f4d:c.instructions+=1;goto B517f4d;
case 0x517f4f:goto L517f4f;
case 0x517f51:c.instructions+=1;goto B517f51;
case 0x517f54:goto L517f54;
case 0x517f56:c.instructions+=3;goto B517f56;
case 0x517f57:c.instructions+=2;goto B517f57;
case 0x517f59:c.instructions+=1;goto B517f59;
case 0x517f5b:goto L517f5b;
case 0x517f5d:c.instructions+=3;goto B517f5d;
case 0x517f5e:c.instructions+=2;goto B517f5e;
case 0x517f5f:c.instructions+=1;goto B517f5f;
case 0x517f64:goto L517f64;
case 0x517f67:c.instructions+=4;goto B517f67;
case 0x517f6a:c.instructions+=3;goto B517f6a;
case 0x517f6c:c.instructions+=2;goto B517f6c;
case 0x517f6e:c.instructions+=1;goto B517f6e;
case 0x517f70:goto L517f70;
case 0x517f72:c.instructions+=5;goto B517f72;
case 0x517f73:c.instructions+=4;goto B517f73;
case 0x517f75:c.instructions+=3;goto B517f75;
case 0x517f76:c.instructions+=2;goto B517f76;
case 0x517f78:c.instructions+=1;goto B517f78;
case 0x517f7a:goto L517f7a;
case 0x517f7b:c.instructions+=2;goto B517f7b;
case 0x517f7c:c.instructions+=1;goto B517f7c;
case 0x517f80:goto L517f80;
case 0x517f82:c.instructions+=14;goto B517f82;
case 0x517f87:c.instructions+=13;goto B517f87;
case 0x517f8d:c.instructions+=12;goto B517f8d;
case 0x517f8e:c.instructions+=11;goto B517f8e;
case 0x517f95:c.instructions+=10;goto B517f95;
case 0x517f98:c.instructions+=9;goto B517f98;
case 0x517fa0:c.instructions+=8;goto B517fa0;
case 0x517fa4:c.instructions+=7;goto B517fa4;
case 0x517fa6:c.instructions+=6;goto B517fa6;
case 0x517faa:c.instructions+=5;goto B517faa;
case 0x517fae:c.instructions+=4;goto B517fae;
case 0x517fb2:c.instructions+=3;goto B517fb2;
case 0x517fb3:c.instructions+=2;goto B517fb3;
case 0x517fb7:c.instructions+=1;goto B517fb7;
case 0x517fbc:goto L517fbc;
case 0x517fc0:c.instructions+=4;goto B517fc0;
case 0x517fc4:c.instructions+=3;goto B517fc4;
case 0x517fcb:c.instructions+=2;goto B517fcb;
case 0x517fce:c.instructions+=1;goto B517fce;
case 0x517fe0:goto L517fe0;
case 0x517fe2:c.instructions+=6;goto B517fe2;
case 0x517fe7:c.instructions+=5;goto B517fe7;
case 0x517fed:c.instructions+=4;goto B517fed;
case 0x517fee:c.instructions+=3;goto B517fee;
case 0x517ff5:c.instructions+=2;goto B517ff5;
case 0x517ff8:c.instructions+=1;goto B517ff8;
default:missing_instruction(c.pc);}
B517002:L517002:{c.instructions+=4;NFSU2_TR(0x517002);
__asm__ volatile(".byte 0xd8,0xe1":::"memory");
}
B517004:{NFSU2_TR(0x517004);
{u32 ea_=u32(r4(R+4)+u32(152u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B51700a:{NFSU2_TR(0x51700a);
{u32 ea_=u32(r4(R+4)+u32(152u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B517010:{NFSU2_TR(0x517010);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B517012:L517012:{c.instructions+=21;NFSU2_TR(0x517012);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0x40ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B517016:{NFSU2_TR(0x517016);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B517019:{NFSU2_TR(0x517019);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0x2ull))));
}
B51701c:{NFSU2_TR(0x51701c);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x5cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51701f:{NFSU2_TR(0x51701f);
{u32 ea_=u32(r4(R+4)+u32(148u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B517025:{NFSU2_TR(0x517025);
{u32 ea_=u32(r4(R+4)+u32(112u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B517028:{NFSU2_TR(0x517028);
{u32 ea_=u32(r4(R+4)+u32(152u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B51702e:{NFSU2_TR(0x51702e);
{u32 ea_=u32(r4(R+4)+u32(116u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B517031:{NFSU2_TR(0x517031);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B517033:{NFSU2_TR(0x517033);
{u32 ea_=u32(r4(R+4)+u32(156u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B517039:{NFSU2_TR(0x517039);
{u32 ea_=u32(r4(R+4)+u32(160u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B51703f:{NFSU2_TR(0x51703f);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B517041:{NFSU2_TR(0x517041);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B517043:{NFSU2_TR(0x517043);
__asm__ volatile(".byte 0xd9,0xc2":::"memory");
}
B517045:{NFSU2_TR(0x517045);
__asm__ volatile(".byte 0xd8,0xcb":::"memory");
}
B517047:{NFSU2_TR(0x517047);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B517049:{NFSU2_TR(0x517049);
__asm__ volatile(".byte 0xd9,0xfa":::"memory");
}
B51704b:{NFSU2_TR(0x51704b);
{u32 ea_=u32(u32(7881560u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B517051:{NFSU2_TR(0x517051);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B517053:{NFSU2_TR(0x517053);
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
B517056:{NFSU2_TR(0x517056);
if(r1(R+514)){{goto L517209;}}
}
B51705c:L51705c:{c.instructions+=15;NFSU2_TR(0x51705c);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x94ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B517062:{NFSU2_TR(0x517062);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B517064:{NFSU2_TR(0x517064);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x70ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B517067:{NFSU2_TR(0x517067);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B517069:{NFSU2_TR(0x517069);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x98ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B51706f:{NFSU2_TR(0x51706f);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B517071:{NFSU2_TR(0x517071);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x74ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B517074:{NFSU2_TR(0x517074);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B517077:{NFSU2_TR(0x517077);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x88ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B51707d:{NFSU2_TR(0x51707d);
w4(R+28,u32(u32(r4(R+28))&u32(u32(0xffffff9dull))));
}
B517080:{NFSU2_TR(0x517080);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B517082:{NFSU2_TR(0x517082);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B517084:{NFSU2_TR(0x517084);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x5cull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B517087:{NFSU2_TR(0x517087);
__builtin_memmove((R+0),(R+28),4);
}
B517089:{NFSU2_TR(0x517089);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L517094;}}
}
B51708b:L51708b:{c.instructions+=3;NFSU2_TR(0x51708b);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfffffff7ull))));
}
B51708e:{NFSU2_TR(0x51708e);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x5cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B517091:{NFSU2_TR(0x517091);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x70ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B517094:L517094:{c.instructions+=2;NFSU2_TR(0x517094);
u8 U[22];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(r4(R+8))));
w1(R+523,sborrow<u32>(r4(U+14),r4(R+8)));
w4(U+18,u32(u32(r4(U+14))-u32(r4(R+8))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B51709a:{NFSU2_TR(0x51709a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L517227;}}
}
B5170a0:L5170a0:{c.instructions+=10;NFSU2_TR(0x5170a0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5170a3:{NFSU2_TR(0x5170a3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5170a4:{NFSU2_TR(0x5170a4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5170a5:{NFSU2_TR(0x5170a5);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xffffffefull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5170a8:{NFSU2_TR(0x5170a8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5170a9:{NFSU2_TR(0x5170a9);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x5cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5170ac:{NFSU2_TR(0x5170ac);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x74ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5170af:{NFSU2_TR(0x5170af);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5170b0:{NFSU2_TR(0x5170b0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5170b1:{NFSU2_TR(0x5170b1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5170b4:L5170b4:{c.instructions+=2;NFSU2_TR(0x5170b4);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B5170b6:{NFSU2_TR(0x5170b6);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L517107;}}
}
B5170b8:L5170b8:{c.instructions+=7;NFSU2_TR(0x5170b8);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B5170bb:{NFSU2_TR(0x5170bb);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x88ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B5170c1:{NFSU2_TR(0x5170c1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B5170c4:{NFSU2_TR(0x5170c4);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B5170c7:{NFSU2_TR(0x5170c7);
{u32 ea_=u32((r4(R+0)*4u)+r4(R+20)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5170cb:{NFSU2_TR(0x5170cb);
{u32 ea_=u32(r4(R+4)+u32(148u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B5170d1:{NFSU2_TR(0x5170d1);
{u32 ea_=u32(r4(R+4)+u32(112u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5170d4:L5170d4:{c.instructions+=9;NFSU2_TR(0x5170d4);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B5170d7:{NFSU2_TR(0x5170d7);
{u32 ea_=u32((r4(R+0)*4u)+r4(R+20));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5170db:{NFSU2_TR(0x5170db);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x1ull))));
__builtin_memmove((R+0),(U+0),4);
}
B5170de:{NFSU2_TR(0x5170de);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B5170e0:{NFSU2_TR(0x5170e0);
{u32 ea_=u32(r4(R+4)+u32(112u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5170e3:{NFSU2_TR(0x5170e3);
u8 U[56];
w8(U+0,u64(r4(R+28)));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{u64 d_=u64(r8(U+0));if(__builtin_expect(!d_,0))NFSU2_FAULT("integer division by zero",0x5170e3);w8(U+40,u64(u64(r8(U+32))/d_));}
w4(R+0,u32(r8(U+40)));
{u64 d_=u64(r8(U+0));if(__builtin_expect(!d_,0))NFSU2_FAULT("integer division by zero",0x5170e3);w8(U+48,u64(u64(r8(U+32))%d_));}
w4(R+8,u32(r8(U+48)));
}
B5170e5:{NFSU2_TR(0x5170e5);
{u32 ea_=u32(r4(R+4)+u32(112u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5170e8:{NFSU2_TR(0x5170e8);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5170ea:{NFSU2_TR(0x5170ea);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5170d4u);}goto L5170d4;}}
}
B5170ec:L5170ec:{c.instructions+=8;NFSU2_TR(0x5170ec);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B5170ee:{NFSU2_TR(0x5170ee);
__builtin_memmove((R+0),(R+24),4);
}
B5170f0:{NFSU2_TR(0x5170f0);
u8 U[56];
w8(U+0,u64(r4(R+28)));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{u64 d_=u64(r8(U+0));if(__builtin_expect(!d_,0))NFSU2_FAULT("integer division by zero",0x5170f0);w8(U+40,u64(u64(r8(U+32))/d_));}
w4(R+0,u32(r8(U+40)));
{u64 d_=u64(r8(U+0));if(__builtin_expect(!d_,0))NFSU2_FAULT("integer division by zero",0x5170f0);w8(U+48,u64(u64(r8(U+32))%d_));}
w4(R+8,u32(r8(U+48)));
}
B5170f2:{NFSU2_TR(0x5170f2);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5170f6:{NFSU2_TR(0x5170f6);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0x8ull))));
}
B5170f9:{NFSU2_TR(0x5170f9);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x5cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5170fc:{NFSU2_TR(0x5170fc);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x88ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B517102:{NFSU2_TR(0x517102);
TAIL_STATIC(0x516f19u,516);
}
B517107:L517107:{c.instructions+=2;NFSU2_TR(0x517107);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B517109:{NFSU2_TR(0x517109);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x516f03u,516);}
}
B51710f:L51710f:{c.instructions+=4;NFSU2_TR(0x51710f);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B517112:{NFSU2_TR(0x517112);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x88ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B517118:{NFSU2_TR(0x517118);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B51711b:{NFSU2_TR(0x51711b);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x94ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B517121:L517121:{c.instructions+=10;NFSU2_TR(0x517121);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B517123:{NFSU2_TR(0x517123);
__builtin_memmove((R+0),(R+12),4);
}
B517125:{NFSU2_TR(0x517125);
u8 U[56];
w8(U+0,u64(r4(R+28)));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{u64 d_=u64(r8(U+0));if(__builtin_expect(!d_,0))NFSU2_FAULT("integer division by zero",0x517125);w8(U+40,u64(u64(r8(U+32))/d_));}
w4(R+0,u32(r8(U+40)));
{u64 d_=u64(r8(U+0));if(__builtin_expect(!d_,0))NFSU2_FAULT("integer division by zero",0x517125);w8(U+48,u64(u64(r8(U+32))%d_));}
w4(R+8,u32(r8(U+48)));
}
B517127:{NFSU2_TR(0x517127);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B517128:{NFSU2_TR(0x517128);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B51712a:{NFSU2_TR(0x51712a);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B51712d:{NFSU2_TR(0x51712d);
{u32 ea_=u32((r4(R+0)*4u)+r4(R+20));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B517131:{NFSU2_TR(0x517131);
{u32 ea_=u32(r4(R+4)+u32(148u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B517137:{NFSU2_TR(0x517137);
{u32 ea_=u32(r4(R+4)+u32(148u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B51713d:{NFSU2_TR(0x51713d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x517121u);}goto L517121;}}
}
B51713f:L51713f:{c.instructions+=1;NFSU2_TR(0x51713f);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5170ecu);}goto L5170ec;}
}
B517141:L517141:{c.instructions+=4;NFSU2_TR(0x517141);
{u32 ea_=u32(r4(R+4)+u32(104u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B517144:{NFSU2_TR(0x517144);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B517146:{NFSU2_TR(0x517146);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B517149:{NFSU2_TR(0x517149);
if(r1(R+514)){TAIL_STATIC(0x516f67u,516);}
}
B51714f:L51714f:{c.instructions+=3;NFSU2_TR(0x51714f);
w4(R+8,u32(u32(r4(R+8))|u32(u32(0x8ull))));
}
B517152:{NFSU2_TR(0x517152);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x5cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B517155:{NFSU2_TR(0x517155);
TAIL_STATIC(0x516f67u,516);
}
B51715a:L51715a:{c.instructions+=2;NFSU2_TR(0x51715a);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B51715c:{NFSU2_TR(0x51715c);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L5171b3;}}
}
B51715e:L51715e:{c.instructions+=8;NFSU2_TR(0x51715e);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x7cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B517161:{NFSU2_TR(0x517161);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B517167:{NFSU2_TR(0x517167);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B51716a:{NFSU2_TR(0x51716a);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B51716d:{NFSU2_TR(0x51716d);
{u32 ea_=u32((r4(R+0)*4u)+r4(R+20)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B517171:{NFSU2_TR(0x517171);
{u32 ea_=u32(r4(R+4)+u32(152u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B517177:{NFSU2_TR(0x517177);
{u32 ea_=u32(r4(R+4)+u32(116u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B51717a:{NFSU2_TR(0x51717a);
__builtin_memmove((R+12),(R+12),4);
}
B517180:L517180:{c.instructions+=9;NFSU2_TR(0x517180);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B517183:{NFSU2_TR(0x517183);
{u32 ea_=u32((r4(R+0)*4u)+r4(R+20));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B517187:{NFSU2_TR(0x517187);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x1ull))));
__builtin_memmove((R+0),(U+0),4);
}
B51718a:{NFSU2_TR(0x51718a);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B51718c:{NFSU2_TR(0x51718c);
{u32 ea_=u32(r4(R+4)+u32(116u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B51718f:{NFSU2_TR(0x51718f);
u8 U[56];
w8(U+0,u64(r4(R+28)));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{u64 d_=u64(r8(U+0));if(__builtin_expect(!d_,0))NFSU2_FAULT("integer division by zero",0x51718f);w8(U+40,u64(u64(r8(U+32))/d_));}
w4(R+0,u32(r8(U+40)));
{u64 d_=u64(r8(U+0));if(__builtin_expect(!d_,0))NFSU2_FAULT("integer division by zero",0x51718f);w8(U+48,u64(u64(r8(U+32))%d_));}
w4(R+8,u32(r8(U+48)));
}
B517191:{NFSU2_TR(0x517191);
{u32 ea_=u32(r4(R+4)+u32(116u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B517194:{NFSU2_TR(0x517194);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B517196:{NFSU2_TR(0x517196);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x517180u);}goto L517180;}}
}
B517198:L517198:{c.instructions+=8;NFSU2_TR(0x517198);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B51719a:{NFSU2_TR(0x51719a);
__builtin_memmove((R+0),(R+24),4);
}
B51719c:{NFSU2_TR(0x51719c);
u8 U[56];
w8(U+0,u64(r4(R+28)));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{u64 d_=u64(r8(U+0));if(__builtin_expect(!d_,0))NFSU2_FAULT("integer division by zero",0x51719c);w8(U+40,u64(u64(r8(U+32))/d_));}
w4(R+0,u32(r8(U+40)));
{u64 d_=u64(r8(U+0));if(__builtin_expect(!d_,0))NFSU2_FAULT("integer division by zero",0x51719c);w8(U+48,u64(u64(r8(U+32))%d_));}
w4(R+8,u32(r8(U+48)));
}
B51719e:{NFSU2_TR(0x51719e);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5171a2:{NFSU2_TR(0x5171a2);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0x8ull))));
}
B5171a5:{NFSU2_TR(0x5171a5);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x5cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5171a8:{NFSU2_TR(0x5171a8);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5171ae:{NFSU2_TR(0x5171ae);
TAIL_STATIC(0x516fc1u,516);
}
B5171b3:L5171b3:{c.instructions+=2;NFSU2_TR(0x5171b3);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5171b5:{NFSU2_TR(0x5171b5);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x516fabu,516);}
}
B5171bb:L5171bb:{c.instructions+=5;NFSU2_TR(0x5171bb);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x74ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5171be:{NFSU2_TR(0x5171be);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B5171c4:{NFSU2_TR(0x5171c4);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x7cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B5171c7:{NFSU2_TR(0x5171c7);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x98ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5171cd:{NFSU2_TR(0x5171cd);
__builtin_memmove((R+4),(R+4),4);
}
B5171d0:L5171d0:{c.instructions+=10;NFSU2_TR(0x5171d0);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B5171d2:{NFSU2_TR(0x5171d2);
__builtin_memmove((R+0),(R+12),4);
}
B5171d4:{NFSU2_TR(0x5171d4);
u8 U[56];
w8(U+0,u64(r4(R+28)));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{u64 d_=u64(r8(U+0));if(__builtin_expect(!d_,0))NFSU2_FAULT("integer division by zero",0x5171d4);w8(U+40,u64(u64(r8(U+32))/d_));}
w4(R+0,u32(r8(U+40)));
{u64 d_=u64(r8(U+0));if(__builtin_expect(!d_,0))NFSU2_FAULT("integer division by zero",0x5171d4);w8(U+48,u64(u64(r8(U+32))%d_));}
w4(R+8,u32(r8(U+48)));
}
B5171d6:{NFSU2_TR(0x5171d6);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B5171d7:{NFSU2_TR(0x5171d7);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5171d9:{NFSU2_TR(0x5171d9);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B5171dc:{NFSU2_TR(0x5171dc);
{u32 ea_=u32((r4(R+0)*4u)+r4(R+20));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5171e0:{NFSU2_TR(0x5171e0);
{u32 ea_=u32(r4(R+4)+u32(152u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5171e6:{NFSU2_TR(0x5171e6);
{u32 ea_=u32(r4(R+4)+u32(152u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5171ec:{NFSU2_TR(0x5171ec);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5171d0u);}goto L5171d0;}}
}
B5171ee:L5171ee:{c.instructions+=1;NFSU2_TR(0x5171ee);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x517198u);}goto L517198;}
}
B5171f0:L5171f0:{c.instructions+=4;NFSU2_TR(0x5171f0);
{u32 ea_=u32(r4(R+4)+u32(108u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5171f3:{NFSU2_TR(0x5171f3);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5171f5:{NFSU2_TR(0x5171f5);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5171f8:{NFSU2_TR(0x5171f8);
if(r1(R+514)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x517012u);}goto L517012;}}
}
B5171fe:L5171fe:{c.instructions+=3;NFSU2_TR(0x5171fe);
w4(R+8,u32(u32(r4(R+8))|u32(u32(0x10ull))));
}
B517201:{NFSU2_TR(0x517201);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x5cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B517204:{NFSU2_TR(0x517204);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x517012u);}goto L517012;}
}
B517209:L517209:{c.instructions+=9;NFSU2_TR(0x517209);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x38"::"a"(ea_):"memory");}
}
B51720f:{NFSU2_TR(0x51720f);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B517211:{NFSU2_TR(0x517211);
__asm__ volatile(".byte 0xd8,0xcb":::"memory");
}
B517213:{NFSU2_TR(0x517213);
{u32 ea_=u32(r4(R+4)+u32(156u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B517219:{NFSU2_TR(0x517219);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B51721b:{NFSU2_TR(0x51721b);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B51721d:{NFSU2_TR(0x51721d);
{u32 ea_=u32(r4(R+4)+u32(160u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B517223:{NFSU2_TR(0x517223);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B517225:{NFSU2_TR(0x517225);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B517227:L517227:{c.instructions+=6;NFSU2_TR(0x517227);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B517228:{NFSU2_TR(0x517228);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B517229:{NFSU2_TR(0x517229);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B51722a:{NFSU2_TR(0x51722a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B51722b:{NFSU2_TR(0x51722b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B51722c:{NFSU2_TR(0x51722c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B517230:L517230:{c.instructions+=9;NFSU2_TR(0x517230);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B517234:{NFSU2_TR(0x517234);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x8ull))));
}
B517237:{NFSU2_TR(0x517237);
{u32 ea_=u32(r4(R+4)+u32(168u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B51723d:{NFSU2_TR(0x51723d);
{u32 ea_=u32(r4(R+4)+u32(164u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B517243:{NFSU2_TR(0x517243);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B517249:{NFSU2_TR(0x517249);
{u32 ea_=u32(r4(R+4)+u32(164u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B51724f:{NFSU2_TR(0x51724f);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B517251:{NFSU2_TR(0x517251);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B517254:{NFSU2_TR(0x517254);
if(r1(R+514)){{goto L517264;}}
}
B517256:L517256:{c.instructions+=3;NFSU2_TR(0x517256);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B517258:{NFSU2_TR(0x517258);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xa4ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B517262:{NFSU2_TR(0x517262);
{goto L51727b;}
}
B517264:L517264:{c.instructions+=4;NFSU2_TR(0x517264);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B51726a:{NFSU2_TR(0x51726a);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B51726c:{NFSU2_TR(0x51726c);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B51726f:{NFSU2_TR(0x51726f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L517289;}}
}
B517271:L517271:{c.instructions+=1;NFSU2_TR(0x517271);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xa4ull))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B51727b:L51727b:{c.instructions+=3;NFSU2_TR(0x51727b);
{u32 ea_=u32(r4(R+4)+u32(168u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B517281:{NFSU2_TR(0x517281);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B517283:{NFSU2_TR(0x517283);
{u32 ea_=u32(r4(R+4)+u32(168u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B517289:L517289:{c.instructions+=2;NFSU2_TR(0x517289);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x2ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B51728d:{NFSU2_TR(0x51728d);
if(r1(R+518)){{goto L517307;}}
}
B51728f:L51728f:{c.instructions+=38;NFSU2_TR(0x51728f);
{u32 ea_=u32(r4(R+4)+u32(156u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B517295:{NFSU2_TR(0x517295);
{u32 ea_=u32(r4(R+4)+u32(160u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B51729b:{NFSU2_TR(0x51729b);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B51729d:{NFSU2_TR(0x51729d);
{u32 ea_=u32(r4(R+4)+u32(132u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5172a3:{NFSU2_TR(0x5172a3);
__asm__ volatile(".byte 0xd9,0xc2":::"memory");
}
B5172a5:{NFSU2_TR(0x5172a5);
{u32 ea_=u32(r4(R+4)+u32(128u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5172ab:{NFSU2_TR(0x5172ab);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5172ad:{NFSU2_TR(0x5172ad);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B5172af:{NFSU2_TR(0x5172af);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5172b3:{NFSU2_TR(0x5172b3);
__asm__ volatile(".byte 0xd9,0xc2":::"memory");
}
B5172b5:{NFSU2_TR(0x5172b5);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B5172b7:{NFSU2_TR(0x5172b7);
__asm__ volatile(".byte 0xd9,0xc2":::"memory");
}
B5172b9:{NFSU2_TR(0x5172b9);
__asm__ volatile(".byte 0xd8,0xca":::"memory");
}
B5172bb:{NFSU2_TR(0x5172bb);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5172bf:{NFSU2_TR(0x5172bf);
{u32 ea_=u32(r4(R+4)+u32(112u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5172c2:{NFSU2_TR(0x5172c2);
__asm__ volatile(".byte 0xdd,0xd9":::"memory");
}
B5172c4:{NFSU2_TR(0x5172c4);
{u32 ea_=u32(r4(R+4)+u32(112u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B5172c7:{NFSU2_TR(0x5172c7);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5172cb:{NFSU2_TR(0x5172cb);
{u32 ea_=u32(r4(R+4)+u32(116u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5172ce:{NFSU2_TR(0x5172ce);
{u32 ea_=u32(r4(R+4)+u32(116u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B5172d1:{NFSU2_TR(0x5172d1);
__asm__ volatile(".byte 0xd9,0xc2":::"memory");
}
B5172d3:{NFSU2_TR(0x5172d3);
{u32 ea_=u32(r4(R+4)+u32(152u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5172d9:{NFSU2_TR(0x5172d9);
__asm__ volatile(".byte 0xd9,0xc4":::"memory");
}
B5172db:{NFSU2_TR(0x5172db);
{u32 ea_=u32(r4(R+4)+u32(148u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5172e1:{NFSU2_TR(0x5172e1);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5172e3:{NFSU2_TR(0x5172e3);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5172e5:{NFSU2_TR(0x5172e5);
__asm__ volatile(".byte 0xd8,0xcb":::"memory");
}
B5172e7:{NFSU2_TR(0x5172e7);
__asm__ volatile(".byte 0xd9,0xca":::"memory");
}
B5172e9:{NFSU2_TR(0x5172e9);
__asm__ volatile(".byte 0xd8,0xcc":::"memory");
}
B5172eb:{NFSU2_TR(0x5172eb);
__asm__ volatile(".byte 0xde,0xc2":::"memory");
}
B5172ed:{NFSU2_TR(0x5172ed);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5172ef:{NFSU2_TR(0x5172ef);
__asm__ volatile(".byte 0xde,0xe9":::"memory");
}
B5172f1:{NFSU2_TR(0x5172f1);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5172f7:{NFSU2_TR(0x5172f7);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5172f9:{NFSU2_TR(0x5172f9);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5172fb:{NFSU2_TR(0x5172fb);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5172fe:{NFSU2_TR(0x5172fe);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B517300:{NFSU2_TR(0x517300);
if(r1(R+514)){{goto L517307;}}
}
B517302:L517302:{c.instructions+=1;NFSU2_TR(0x517302);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x517307ull));
TAIL_STATIC(0x5043b0u,504);
}
B517307:L517307:{c.instructions+=2;NFSU2_TR(0x517307);
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
B51730a:{NFSU2_TR(0x51730a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B517310:L517310:{c.instructions+=22;NFSU2_TR(0x517310);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B517312:{NFSU2_TR(0x517312);
u8 U[4];
w4(U+0,u32(0x776f68ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B517317:{NFSU2_TR(0x517317);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B51731d:{NFSU2_TR(0x51731d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51731e:{NFSU2_TR(0x51731e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B517325:{NFSU2_TR(0x517325);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B517326:{NFSU2_TR(0x517326);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B517327:{NFSU2_TR(0x517327);
__builtin_memmove((R+24),(R+4),4);
}
B517329:{NFSU2_TR(0x517329);
w4(R+0,u32(0xabadcafeull));
}
B51732e:{NFSU2_TR(0x51732e);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B517332:{NFSU2_TR(0x517332);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B517335:{NFSU2_TR(0x517335);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B517338:{NFSU2_TR(0x517338);
u8 U[6];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+0),(U+4),2);
}
B51733d:{NFSU2_TR(0x51733d);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B517341:{NFSU2_TR(0x517341);
w4(R+0,u32(r2(R+0)));
}
B517344:{NFSU2_TR(0x517344);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B517347:{NFSU2_TR(0x517347);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B517348:{NFSU2_TR(0x517348);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B517350:{NFSU2_TR(0x517350);
u8 U[4];
w4(U+0,u32(0x79b13cull));
s4(u32(r4(R+24)),r4(U+0));
}
B517356:{NFSU2_TR(0x517356);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xeull))));
w2(U+4,u16(0x0ull));
s2(u32(r4(U+0)),r2(U+4));
}
B51735c:{NFSU2_TR(0x51735c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B517363:{NFSU2_TR(0x517363);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x517368ull));
TAIL_STATIC(0x575620u,575);
}
B517368:L517368:{c.instructions+=10;NFSU2_TR(0x517368);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51736b:{NFSU2_TR(0x51736b);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((R+4),(U+0),4);
}
B51736e:{NFSU2_TR(0x51736e);
u8 U[4];
w4(U+0,u32(0x0ull));
s4(u32(r4(R+4)),r4(U+0));
}
B517374:{NFSU2_TR(0x517374);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B517378:{NFSU2_TR(0x517378);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B51737b:{NFSU2_TR(0x51737b);
__builtin_memmove((R+0),(R+24),4);
}
B51737d:{NFSU2_TR(0x51737d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B51737e:{NFSU2_TR(0x51737e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B517385:{NFSU2_TR(0x517385);
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
B517388:{NFSU2_TR(0x517388);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B517390:L517390:{c.instructions+=3;NFSU2_TR(0x517390);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B517391:{NFSU2_TR(0x517391);
__builtin_memmove((R+24),(R+4),4);
}
B517393:{NFSU2_TR(0x517393);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x517398ull));
{goto L5173b0;}
}
B517398:L517398:{c.instructions+=2;NFSU2_TR(0x517398);
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
B51739d:{NFSU2_TR(0x51739d);
if(r1(R+518)){{goto L5173a8;}}
}
B51739f:L51739f:{c.instructions+=2;NFSU2_TR(0x51739f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5173a0:{NFSU2_TR(0x5173a0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5173a5ull));
TAIL_STATIC(0x575630u,575);
}
B5173a5:L5173a5:{c.instructions+=1;NFSU2_TR(0x5173a5);
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
B5173a8:L5173a8:{c.instructions+=3;NFSU2_TR(0x5173a8);
__builtin_memmove((R+0),(R+24),4);
}
B5173aa:{NFSU2_TR(0x5173aa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5173ab:{NFSU2_TR(0x5173ab);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5173b0:L5173b0:{c.instructions+=14;NFSU2_TR(0x5173b0);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5173b2:{NFSU2_TR(0x5173b2);
u8 U[4];
w4(U+0,u32(0x776f68ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5173b7:{NFSU2_TR(0x5173b7);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5173bd:{NFSU2_TR(0x5173bd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5173be:{NFSU2_TR(0x5173be);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5173c5:{NFSU2_TR(0x5173c5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5173c6:{NFSU2_TR(0x5173c6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5173c7:{NFSU2_TR(0x5173c7);
__builtin_memmove((R+24),(R+4),4);
}
B5173c9:{NFSU2_TR(0x5173c9);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5173cd:{NFSU2_TR(0x5173cd);
u8 U[4];
w4(U+0,u32(0x79b13cull));
s4(u32(r4(R+24)),r4(U+0));
}
B5173d3:{NFSU2_TR(0x5173d3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5173d6:{NFSU2_TR(0x5173d6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5173d7:{NFSU2_TR(0x5173d7);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5173df:{NFSU2_TR(0x5173df);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5173e4ull));
TAIL_STATIC(0x575630u,575);
}
B5173e4:L5173e4:{c.instructions+=7;NFSU2_TR(0x5173e4);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5173e8:{NFSU2_TR(0x5173e8);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5173eb:{NFSU2_TR(0x5173eb);
u8 U[4];
w4(U+0,u32(0x79a9e8ull));
s4(u32(r4(R+24)),r4(U+0));
}
B5173f1:{NFSU2_TR(0x5173f1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5173f2:{NFSU2_TR(0x5173f2);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5173f9:{NFSU2_TR(0x5173f9);
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
B5173fc:{NFSU2_TR(0x5173fc);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B517400:L517400:{c.instructions+=11;NFSU2_TR(0x517400);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B517402:{NFSU2_TR(0x517402);
u8 U[4];
w4(U+0,u32(0x77806bull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B517407:{NFSU2_TR(0x517407);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B51740d:{NFSU2_TR(0x51740d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51740e:{NFSU2_TR(0x51740e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B517415:{NFSU2_TR(0x517415);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B517416:{NFSU2_TR(0x517416);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B517417:{NFSU2_TR(0x517417);
__builtin_memmove((R+24),(R+4),4);
}
B517419:{NFSU2_TR(0x517419);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B51741c:{NFSU2_TR(0x51741c);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B51741e:{NFSU2_TR(0x51741e);
if(r1(R+518)){{goto L517432;}}
}
B517420:L517420:{c.instructions+=1;NFSU2_TR(0x517420);
w4(R+0,u32(0x20ull));
}
B517425:L517425:{c.instructions+=2;NFSU2_TR(0x517425);
u8 U[10];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xeull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((U+6),(U+4),2);
w2(U+8,u16(u32(r2(U+6))-u32(r2(R+0))));
w1(R+518,u8((r2(U+8))==(u16(0x0ull))));
}
B517429:{NFSU2_TR(0x517429);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L517488;}}
}
B51742b:L51742b:{c.instructions+=3;NFSU2_TR(0x51742b);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B51742e:{NFSU2_TR(0x51742e);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B517430:{NFSU2_TR(0x517430);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x517425u);}goto L517425;}}
}
B517432:L517432:{c.instructions+=2;NFSU2_TR(0x517432);
u8 U[4];
w4(U+0,u32(0x18ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B517434:{NFSU2_TR(0x517434);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x517439ull));
TAIL_STATIC(0x575620u,575);
}
B517439:L517439:{c.instructions+=5;NFSU2_TR(0x517439);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B51743c:{NFSU2_TR(0x51743c);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B517440:{NFSU2_TR(0x517440);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B517442:{NFSU2_TR(0x517442);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B51744a:{NFSU2_TR(0x51744a);
if(r1(R+518)){{goto L51745c;}}
}
B51744c:L51744c:{c.instructions+=5;NFSU2_TR(0x51744c);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B51744e:{NFSU2_TR(0x51744e);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+4),(U+4),2);
}
B517452:{NFSU2_TR(0x517452);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B517453:{NFSU2_TR(0x517453);
__builtin_memmove((R+4),(R+0),4);
}
B517455:{NFSU2_TR(0x517455);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x51745aull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x517310u);}goto L517310;}
}
B51745a:L51745a:{c.instructions+=1;NFSU2_TR(0x51745a);
{goto L51745e;}
}
B51745c:L51745c:{c.instructions+=1;NFSU2_TR(0x51745c);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B51745e:L51745e:{c.instructions+=3;NFSU2_TR(0x51745e);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B517460:{NFSU2_TR(0x517460);
__builtin_memmove((R+4),(R+0),4);
}
B517462:{NFSU2_TR(0x517462);
if(r1(R+518)){{goto L517488;}}
}
B517464:L517464:{c.instructions+=4;NFSU2_TR(0x517464);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B517467:{NFSU2_TR(0x517467);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B517469:{NFSU2_TR(0x517469);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51746c:{NFSU2_TR(0x51746c);
if(r1(R+518)){{goto L517471;}}
}
B51746e:L51746e:{c.instructions+=1;NFSU2_TR(0x51746e);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B517471:L517471:{c.instructions+=5;NFSU2_TR(0x517471);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B517478:{NFSU2_TR(0x517478);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B51747b:{NFSU2_TR(0x51747b);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B51747d:{NFSU2_TR(0x51747d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B517480:{NFSU2_TR(0x517480);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L517485;}}
}
B517482:L517482:{c.instructions+=1;NFSU2_TR(0x517482);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B517485:L517485:{c.instructions+=1;NFSU2_TR(0x517485);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B517488:L517488:{c.instructions+=1;NFSU2_TR(0x517488);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x51748dull));
TAIL_STATIC(0x504400u,504);
}
B51748d:L51748d:{c.instructions+=5;NFSU2_TR(0x51748d);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B517491:{NFSU2_TR(0x517491);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B517492:{NFSU2_TR(0x517492);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B517499:{NFSU2_TR(0x517499);
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
B51749c:{NFSU2_TR(0x51749c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5174a0:L5174a0:{c.instructions+=6;NFSU2_TR(0x5174a0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5174a1:{NFSU2_TR(0x5174a1);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5174a2:{NFSU2_TR(0x5174a2);
__builtin_memmove((R+28),(R+4),4);
}
B5174a4:{NFSU2_TR(0x5174a4);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5174a7:{NFSU2_TR(0x5174a7);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5174a9:{NFSU2_TR(0x5174a9);
if(r1(R+518)){{goto L5174cb;}}
}
B5174ab:L5174ab:{c.instructions+=2;NFSU2_TR(0x5174ab);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5174af:{NFSU2_TR(0x5174af);
}
B5174b0:L5174b0:{c.instructions+=3;NFSU2_TR(0x5174b0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5174b3:{NFSU2_TR(0x5174b3);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
}
B5174b5:{NFSU2_TR(0x5174b5);
if(r1(R+512)){{goto L5174c4;}}
}
B5174b7:L5174b7:{c.instructions+=5;NFSU2_TR(0x5174b7);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(r2(U+4)));
}
B5174bb:{NFSU2_TR(0x5174bb);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B5174be:{NFSU2_TR(0x5174be);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+4))));
}
B5174c0:{NFSU2_TR(0x5174c0);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
}
B5174c2:{NFSU2_TR(0x5174c2);
if(r1(R+512)){{goto L5174d2;}}
}
B5174c4:L5174c4:{c.instructions+=3;NFSU2_TR(0x5174c4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5174c7:{NFSU2_TR(0x5174c7);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5174c9:{NFSU2_TR(0x5174c9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5174b0u);}goto L5174b0;}}
}
B5174cb:L5174cb:{c.instructions+=4;NFSU2_TR(0x5174cb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5174cc:{NFSU2_TR(0x5174cc);
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
B5174ce:{NFSU2_TR(0x5174ce);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5174cf:{NFSU2_TR(0x5174cf);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5174d2:L5174d2:{c.instructions+=18;NFSU2_TR(0x5174d2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))-u32(r4(U+4))));
}
B5174d5:{NFSU2_TR(0x5174d5);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(r2(U+4)));
}
B5174d9:{NFSU2_TR(0x5174d9);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B5174db:{NFSU2_TR(0x5174db);
u8 U[56];
w8(U+0,u64(r4(R+4)));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{u64 d_=u64(r8(U+0));if(__builtin_expect(!d_,0))NFSU2_FAULT("integer division by zero",0x5174db);w8(U+40,u64(u64(r8(U+32))/d_));}
w4(R+0,u32(r8(U+40)));
{u64 d_=u64(r8(U+0));if(__builtin_expect(!d_,0))NFSU2_FAULT("integer division by zero",0x5174db);w8(U+48,u64(u64(r8(U+32))%d_));}
w4(R+8,u32(r8(U+48)));
}
B5174dd:{NFSU2_TR(0x5174dd);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xeull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w2(U+4,u16(u32(r2(U+4))-u32(u16(0x1ull))));
s2(u32(r4(U+0)),r2(U+4));
}
B5174e1:{NFSU2_TR(0x5174e1);
__builtin_memmove((R+4),(R+0),4);
}
B5174e3:{NFSU2_TR(0x5174e3);
__builtin_memmove((R+8),(R+0),4);
}
B5174e5:{NFSU2_TR(0x5174e5);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x7ull))));
}
B5174e8:{NFSU2_TR(0x5174e8);
w1(R+0,u8(0x1ull));
}
B5174ea:{NFSU2_TR(0x5174ea);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w1(R+0,shl<u8>(r1(R+0),u64(r1(U+0))));
}
B5174ec:{NFSU2_TR(0x5174ec);
u8 U[4];
w4(U+0,u32(u32(u32(0x3ull))&u32(u32(0x1full))));
w4(R+8,shr<u32>(r4(R+8),u64(r4(U+0))));
}
B5174ef:{NFSU2_TR(0x5174ef);
u8 U[13];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
__builtin_memmove((R+4),(U+12),1);
}
B5174f3:{NFSU2_TR(0x5174f3);
u8 U[12];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+8),(U+8),4);
}
B5174f7:{NFSU2_TR(0x5174f7);
w1(R+0,u8(~u32(r1(R+0))));
}
B5174f9:{NFSU2_TR(0x5174f9);
w1(R+4,u8(u32(r1(R+4))&u32(r1(R+0))));
}
B5174fb:{NFSU2_TR(0x5174fb);
u8 U[1];
__builtin_memmove((U+0),(R+4),1);
s1(u32(r4(R+8)),r1(U+0));
}
B5174fd:{NFSU2_TR(0x5174fd);
u8 U[14];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xeull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((U+10),(U+4),2);
w1(R+512,u8((r2(U+10))<(u16(0x0ull))));
w1(R+523,sborrow<u16>(r2(U+10),u16(0x0ull)));
w2(U+12,u16(u32(r2(U+10))-u32(u16(0x0ull))));
w1(R+519,u8(s16(r2(U+12))<s16(u16(0x0ull))));
w1(R+518,u8((r2(U+12))==(u16(0x0ull))));
w2(U+6,u16(u32(r2(U+12))&u32(u16(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r2(U+6)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B517502:{NFSU2_TR(0x517502);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L517515;}}
}
B517504:L517504:{c.instructions+=3;NFSU2_TR(0x517504);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B517505:{NFSU2_TR(0x517505);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((R+4),(U+0),4);
}
B517508:{NFSU2_TR(0x517508);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x51750dull));
TAIL_STATIC(0x505400u,505);
}
B51750d:L51750d:{c.instructions+=4;NFSU2_TR(0x51750d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B51750f:{NFSU2_TR(0x51750f);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B517511:{NFSU2_TR(0x517511);
__builtin_memmove((R+4),(R+24),4);
}
B517513:{NFSU2_TR(0x517513);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x517515ull));
{u32 t_=u32(r4(U+4));TAIL_DYNAMIC(t_);}
}
B517515:L517515:{c.instructions+=4;NFSU2_TR(0x517515);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B517516:{NFSU2_TR(0x517516);
w1(R+0,u8(0x1ull));
}
B517518:{NFSU2_TR(0x517518);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B517519:{NFSU2_TR(0x517519);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B517520:L517520:{c.instructions+=6;NFSU2_TR(0x517520);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B517521:{NFSU2_TR(0x517521);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B517522:{NFSU2_TR(0x517522);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B517526:{NFSU2_TR(0x517526);
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
B517528:{NFSU2_TR(0x517528);
__builtin_memmove((R+12),(R+4),4);
}
B51752a:{NFSU2_TR(0x51752a);
if(r1(R+518)){{goto L51755f;}}
}
B51752c:L51752c:{c.instructions+=4;NFSU2_TR(0x51752c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51752d:{NFSU2_TR(0x51752d);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B517530:{NFSU2_TR(0x517530);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B517532:{NFSU2_TR(0x517532);
if(r1(R+518)){{goto L517547;}}
}
B517534:L517534:{c.instructions+=3;NFSU2_TR(0x517534);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B517535:{NFSU2_TR(0x517535);
__builtin_memmove((R+4),(R+24),4);
}
B517537:{NFSU2_TR(0x517537);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x51753cull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5174a0u);}goto L5174a0;}
}
B51753c:L51753c:{c.instructions+=2;NFSU2_TR(0x51753c);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B51753e:{NFSU2_TR(0x51753e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L517547;}}
}
B517540:L517540:{c.instructions+=3;NFSU2_TR(0x517540);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B517543:{NFSU2_TR(0x517543);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B517545:{NFSU2_TR(0x517545);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x517534u);}goto L517534;}}
}
B517547:L517547:{c.instructions+=3;NFSU2_TR(0x517547);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B51754a:{NFSU2_TR(0x51754a);
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
B51754c:{NFSU2_TR(0x51754c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L51755e;}}
}
B51754e:L51754e:{c.instructions+=3;NFSU2_TR(0x51754e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51754f:{NFSU2_TR(0x51754f);
__builtin_memmove((R+4),(R+12),4);
}
B517551:{NFSU2_TR(0x517551);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x517556ull));
TAIL_STATIC(0x505400u,505);
}
B517556:L517556:{c.instructions+=4;NFSU2_TR(0x517556);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B517558:{NFSU2_TR(0x517558);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51755a:{NFSU2_TR(0x51755a);
__builtin_memmove((R+4),(R+24),4);
}
B51755c:{NFSU2_TR(0x51755c);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x51755eull));
{u32 t_=u32(r4(U+4));TAIL_DYNAMIC(t_);}
}
B51755e:L51755e:{c.instructions+=1;NFSU2_TR(0x51755e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B51755f:L51755f:{c.instructions+=3;NFSU2_TR(0x51755f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B517560:{NFSU2_TR(0x517560);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B517561:{NFSU2_TR(0x517561);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B517570:L517570:{c.instructions+=8;NFSU2_TR(0x517570);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B517571:{NFSU2_TR(0x517571);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B517572:{NFSU2_TR(0x517572);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B517576:{NFSU2_TR(0x517576);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B517577:{NFSU2_TR(0x517577);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B517579:{NFSU2_TR(0x517579);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+20))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B51757b:{NFSU2_TR(0x51757b);
__builtin_memmove((R+12),(R+4),4);
}
B51757d:{NFSU2_TR(0x51757d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L51759d;}}
}
B51757f:L51757f:{c.instructions+=3;NFSU2_TR(0x51757f);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B517582:{NFSU2_TR(0x517582);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B517583:{NFSU2_TR(0x517583);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x517588ull));
TAIL_STATIC(0x575630u,575);
}
B517588:L517588:{c.instructions+=9;NFSU2_TR(0x517588);
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
B51758b:{NFSU2_TR(0x51758b);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51758e:{NFSU2_TR(0x51758e);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B517591:{NFSU2_TR(0x517591);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B517594:{NFSU2_TR(0x517594);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B517595:{NFSU2_TR(0x517595);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B517598:{NFSU2_TR(0x517598);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B517599:{NFSU2_TR(0x517599);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B51759a:{NFSU2_TR(0x51759a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B51759d:L51759d:{c.instructions+=2;NFSU2_TR(0x51759d);
u8 U[22];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(R+20))<(r4(U+14))));
w1(R+523,sborrow<u32>(r4(R+20),r4(U+14)));
w4(U+18,u32(u32(r4(R+20))-u32(r4(U+14))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B5175a0:{NFSU2_TR(0x5175a0);
if(r1(R+518)){{goto L5175ee;}}
}
B5175a2:L5175a2:{c.instructions+=4;NFSU2_TR(0x5175a2);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5175a3:{NFSU2_TR(0x5175a3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x0ull))+u32(r4(U+0))));
__builtin_memmove((R+24),(U+4),4);
}
B5175aa:{NFSU2_TR(0x5175aa);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5175ab:{NFSU2_TR(0x5175ab);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5175b0ull));
TAIL_STATIC(0x575620u,575);
}
B5175b0:L5175b0:{c.instructions+=6;NFSU2_TR(0x5175b0);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5175b3:{NFSU2_TR(0x5175b3);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5175b6:{NFSU2_TR(0x5175b6);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(R+20))<(r4(U+0))));
}
B5175b8:{NFSU2_TR(0x5175b8);
__builtin_memmove((R+28),(R+0),4);
}
B5175ba:{NFSU2_TR(0x5175ba);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5175be:{NFSU2_TR(0x5175be);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L5175d5;}}
}
B5175c0:L5175c0:{c.instructions+=4;NFSU2_TR(0x5175c0);
__builtin_memmove((R+4),(R+24),4);
}
B5175c2:{NFSU2_TR(0x5175c2);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5175c5:{NFSU2_TR(0x5175c5);
__builtin_memmove((R+8),(R+4),4);
}
B5175c7:{NFSU2_TR(0x5175c7);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B5175ca:L5175ca:{c.instructions+=1;NFSU2_TR(0x5175ca);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L5175cc;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5175cau);}goto L5175ca;}
}
B5175cc:L5175cc:{c.instructions+=2;NFSU2_TR(0x5175cc);
__builtin_memmove((R+4),(R+8),4);
}
B5175ce:{NFSU2_TR(0x5175ce);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B5175d1:L5175d1:{c.instructions+=1;NFSU2_TR(0x5175d1);
u8 U[35];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L5175d3;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5175d1u);}goto L5175d1;}
}
B5175d3:L5175d3:{c.instructions+=1;NFSU2_TR(0x5175d3);
{goto L5175da;}
}
B5175d5:L5175d5:{c.instructions+=1;NFSU2_TR(0x5175d5);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5175d8:L5175d8:{c.instructions+=1;NFSU2_TR(0x5175d8);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L5175da;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5175d8u);}goto L5175d8;}
}
B5175da:L5175da:{c.instructions+=3;NFSU2_TR(0x5175da);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5175dd:{NFSU2_TR(0x5175dd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5175de:{NFSU2_TR(0x5175de);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5175e3ull));
TAIL_STATIC(0x575630u,575);
}
B5175e3:L5175e3:{c.instructions+=4;NFSU2_TR(0x5175e3);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5175e7:{NFSU2_TR(0x5175e7);
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
B5175ea:{NFSU2_TR(0x5175ea);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5175ed:{NFSU2_TR(0x5175ed);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5175ee:L5175ee:{c.instructions+=5;NFSU2_TR(0x5175ee);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5175ef:{NFSU2_TR(0x5175ef);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5175f2:{NFSU2_TR(0x5175f2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5175f3:{NFSU2_TR(0x5175f3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5175f4:{NFSU2_TR(0x5175f4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B517600:L517600:{c.instructions+=5;NFSU2_TR(0x517600);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B517601:{NFSU2_TR(0x517601);
__builtin_memmove((R+24),(R+4),4);
}
B517603:{NFSU2_TR(0x517603);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B517605:{NFSU2_TR(0x517605);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0x200ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x200ull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0x200ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B51760a:{NFSU2_TR(0x51760a);
if(r1(R+512)){{goto L517626;}}
}
B51760c:L51760c:{c.instructions+=2;NFSU2_TR(0x51760c);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0x204ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x204ull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0x204ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B517611:{NFSU2_TR(0x517611);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L517626;}}
}
B517613:L517613:{c.instructions+=2;NFSU2_TR(0x517613);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0x203ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x203ull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0x203ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B517618:{NFSU2_TR(0x517618);
if(r1(R+518)){{goto L517626;}}
}
B51761a:L51761a:{c.instructions+=3;NFSU2_TR(0x51761a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B51761d:{NFSU2_TR(0x51761d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51761e:{NFSU2_TR(0x51761e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x517623ull));
TAIL_STATIC(0x575630u,575);
}
B517623:L517623:{c.instructions+=1;NFSU2_TR(0x517623);
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
B517626:L517626:{c.instructions+=3;NFSU2_TR(0x517626);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B51762d:{NFSU2_TR(0x51762d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B51762e:{NFSU2_TR(0x51762e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B517630:L517630:{c.instructions+=6;NFSU2_TR(0x517630);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B517631:{NFSU2_TR(0x517631);
__builtin_memmove((R+12),(R+4),4);
}
B517633:{NFSU2_TR(0x517633);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+0),(U+0),4);
}
B517635:{NFSU2_TR(0x517635);
w1(R+512,u8((r4(R+0))<(u32(0x200ull))));
}
B51763a:{NFSU2_TR(0x51763a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51763b:{NFSU2_TR(0x51763b);
if(r1(R+512)){{goto L517657;}}
}
B51763d:L51763d:{c.instructions+=2;NFSU2_TR(0x51763d);
u8 U[4];
w1(R+512,u8((r4(R+0))<(u32(0x204ull))));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x204ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B517642:{NFSU2_TR(0x517642);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L517657;}}
}
B517644:L517644:{c.instructions+=2;NFSU2_TR(0x517644);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x203ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B517649:{NFSU2_TR(0x517649);
if(r1(R+518)){{goto L517657;}}
}
B51764b:L51764b:{c.instructions+=3;NFSU2_TR(0x51764b);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B51764e:{NFSU2_TR(0x51764e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51764f:{NFSU2_TR(0x51764f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x517654ull));
TAIL_STATIC(0x575630u,575);
}
B517654:L517654:{c.instructions+=1;NFSU2_TR(0x517654);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B517657:L517657:{c.instructions+=4;NFSU2_TR(0x517657);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B51765b:{NFSU2_TR(0x51765b);
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
B51765d:{NFSU2_TR(0x51765d);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B517664:{NFSU2_TR(0x517664);
if(r1(R+518)){{goto L51769e;}}
}
B517666:L517666:{c.instructions+=3;NFSU2_TR(0x517666);
__builtin_memmove((R+0),(R+28),4);
}
B517668:{NFSU2_TR(0x517668);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((R+8),(U+0),4);
}
B51766b:{NFSU2_TR(0x51766b);
{goto L517670;}
}
B517670:L517670:{c.instructions+=4;NFSU2_TR(0x517670);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((R+4),(U+0),1);
}
B517672:{NFSU2_TR(0x517672);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B517673:{NFSU2_TR(0x517673);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B517675:{NFSU2_TR(0x517675);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x517670u);}goto L517670;}}
}
B517677:L517677:{c.instructions+=5;NFSU2_TR(0x517677);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+8))));
}
B517679:{NFSU2_TR(0x517679);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B51767a:{NFSU2_TR(0x51767a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51767b:{NFSU2_TR(0x51767b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51767c:{NFSU2_TR(0x51767c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x517681ull));
TAIL_STATIC(0x575620u,575);
}
B517681:L517681:{c.instructions+=5;NFSU2_TR(0x517681);
__builtin_memmove((R+24),(R+0),4);
}
B517683:{NFSU2_TR(0x517683);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B517686:{NFSU2_TR(0x517686);
__builtin_memmove((R+4),(R+28),4);
}
B517688:{NFSU2_TR(0x517688);
w4(R+24,u32(u32(r4(R+24))-u32(r4(R+28))));
}
B51768a:{NFSU2_TR(0x51768a);
__builtin_memmove((R+12),(R+12),4);
}
B517690:L517690:{c.instructions+=5;NFSU2_TR(0x517690);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+4))),1);
__builtin_memmove((R+8),(U+0),1);
}
B517692:{NFSU2_TR(0x517692);
u8 U[9];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+8),1);
s1(u32(r4(U+4)),r1(U+8));
}
B517695:{NFSU2_TR(0x517695);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B517696:{NFSU2_TR(0x517696);
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
B517698:{NFSU2_TR(0x517698);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x517690u);}goto L517690;}}
}
B51769a:L51769a:{c.instructions+=2;NFSU2_TR(0x51769a);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51769d:{NFSU2_TR(0x51769d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B51769e:L51769e:{c.instructions+=3;NFSU2_TR(0x51769e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B51769f:{NFSU2_TR(0x51769f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5176a0:{NFSU2_TR(0x5176a0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5176b0:L5176b0:{c.instructions+=6;NFSU2_TR(0x5176b0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5176b1:{NFSU2_TR(0x5176b1);
__builtin_memmove((R+24),(R+4),4);
}
B5176b3:{NFSU2_TR(0x5176b3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5176b6:{NFSU2_TR(0x5176b6);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5176b8:{NFSU2_TR(0x5176b8);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5176b9:{NFSU2_TR(0x5176b9);
if(r1(R+518)){{goto L5176cb;}}
}
B5176bb:L5176bb:{c.instructions+=2;NFSU2_TR(0x5176bb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5176bc:{NFSU2_TR(0x5176bc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5176c1ull));
TAIL_STATIC(0x575630u,575);
}
B5176c1:L5176c1:{c.instructions+=2;NFSU2_TR(0x5176c1);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5176c4:{NFSU2_TR(0x5176c4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5176cb:L5176cb:{c.instructions+=4;NFSU2_TR(0x5176cb);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5176cf:{NFSU2_TR(0x5176cf);
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
B5176d1:{NFSU2_TR(0x5176d1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B5176d8:{NFSU2_TR(0x5176d8);
if(r1(R+518)){{goto L517719;}}
}
B5176da:L5176da:{c.instructions+=3;NFSU2_TR(0x5176da);
__builtin_memmove((R+0),(R+28),4);
}
B5176dc:{NFSU2_TR(0x5176dc);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((R+8),(U+0),4);
}
B5176df:{NFSU2_TR(0x5176df);
}
B5176e0:L5176e0:{c.instructions+=4;NFSU2_TR(0x5176e0);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((R+4),(U+0),1);
}
B5176e2:{NFSU2_TR(0x5176e2);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B5176e3:{NFSU2_TR(0x5176e3);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5176e5:{NFSU2_TR(0x5176e5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5176e0u);}goto L5176e0;}}
}
B5176e7:L5176e7:{c.instructions+=4;NFSU2_TR(0x5176e7);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+8))));
}
B5176e9:{NFSU2_TR(0x5176e9);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B5176ea:{NFSU2_TR(0x5176ea);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5176eb:{NFSU2_TR(0x5176eb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5176f0ull));
TAIL_STATIC(0x575620u,575);
}
B5176f0:L5176f0:{c.instructions+=5;NFSU2_TR(0x5176f0);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5176f3:{NFSU2_TR(0x5176f3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5176f6:{NFSU2_TR(0x5176f6);
__builtin_memmove((R+4),(R+28),4);
}
B5176f8:{NFSU2_TR(0x5176f8);
__builtin_memmove((R+8),(R+0),4);
}
B5176fa:{NFSU2_TR(0x5176fa);
__builtin_memmove((R+12),(R+12),4);
}
B517700:L517700:{c.instructions+=6;NFSU2_TR(0x517700);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+4))),1);
__builtin_memmove((R+0),(U+0),1);
}
B517702:{NFSU2_TR(0x517702);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B517703:{NFSU2_TR(0x517703);
u8 U[1];
__builtin_memmove((U+0),(R+0),1);
s1(u32(r4(R+8)),r1(U+0));
}
B517705:{NFSU2_TR(0x517705);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B517706:{NFSU2_TR(0x517706);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B517708:{NFSU2_TR(0x517708);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x517700u);}goto L517700;}}
}
B51770a:L51770a:{c.instructions+=3;NFSU2_TR(0x51770a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B51770d:{NFSU2_TR(0x51770d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51770e:{NFSU2_TR(0x51770e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x517713ull));
TAIL_STATIC(0x505450u,505);
}
B517713:L517713:{c.instructions+=2;NFSU2_TR(0x517713);
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
B517716:{NFSU2_TR(0x517716);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B517719:L517719:{c.instructions+=3;NFSU2_TR(0x517719);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B51771a:{NFSU2_TR(0x51771a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B51771b:{NFSU2_TR(0x51771b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B517720:L517720:{c.instructions+=8;NFSU2_TR(0x517720);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x40ull))));
}
B517723:{NFSU2_TR(0x517723);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B517724:{NFSU2_TR(0x517724);
__builtin_memmove((R+12),(R+4),4);
}
B517726:{NFSU2_TR(0x517726);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B517729:{NFSU2_TR(0x517729);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B51772c:{NFSU2_TR(0x51772c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B51772f:{NFSU2_TR(0x51772f);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B517731:{NFSU2_TR(0x517731);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L51788c;}}
}
B517737:L517737:{c.instructions+=5;NFSU2_TR(0x517737);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B517738:{NFSU2_TR(0x517738);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B517739:{NFSU2_TR(0x517739);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51773a:{NFSU2_TR(0x51773a);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((R+24),(U+0),4);
}
B51773d:{NFSU2_TR(0x51773d);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B517741:L517741:{c.instructions+=6;NFSU2_TR(0x517741);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xffffffebull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B517744:{NFSU2_TR(0x517744);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xffffffeaull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B517747:{NFSU2_TR(0x517747);
w1(R+8,u8(u32(r1(R+8))&u32(u8(0x7full))));
}
B51774a:{NFSU2_TR(0x51774a);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x3ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B51774c:{NFSU2_TR(0x51774c);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xffffffebull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B51774f:{NFSU2_TR(0x51774f);
if(r1(R+518)){{goto L517759;}}
}
B517751:L517751:{c.instructions+=2;NFSU2_TR(0x517751);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x4ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B517753:{NFSU2_TR(0x517753);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L517877;}}
}
B517759:L517759:{c.instructions+=6;NFSU2_TR(0x517759);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xffffffefull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(s32(s8(r1(U+4)))));
}
B51775d:{NFSU2_TR(0x51775d);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B517760:{NFSU2_TR(0x517760);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+20),(U+4),4);
}
B517763:{NFSU2_TR(0x517763);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B517766:{NFSU2_TR(0x517766);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B517768:{NFSU2_TR(0x517768);
if(r1(R+518)){{goto L517776;}}
}
B51776a:L51776a:{c.instructions+=2;NFSU2_TR(0x51776a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B51776d:{NFSU2_TR(0x51776d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x517772ull));
TAIL_STATIC(0x4fe890u,4fe);
}
B517772:L517772:{c.instructions+=2;NFSU2_TR(0x517772);
__builtin_memmove((R+28),(R+0),4);
}
B517774:{NFSU2_TR(0x517774);
{goto L517779;}
}
B517776:L517776:{c.instructions+=1;NFSU2_TR(0x517776);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B517779:L517779:{c.instructions+=2;NFSU2_TR(0x517779);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B51777b:{NFSU2_TR(0x51777b);
if(r1(R+518)){{goto L517877;}}
}
B517781:L517781:{c.instructions+=4;NFSU2_TR(0x517781);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B517785:{NFSU2_TR(0x517785);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B517786:{NFSU2_TR(0x517786);
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
B517789:{NFSU2_TR(0x517789);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L517877;}}
}
B51778f:L51778f:{c.instructions+=1;NFSU2_TR(0x51778f);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x517894ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B517796:L517796:{c.instructions+=3;NFSU2_TR(0x517796);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+20))),4);
__builtin_memmove((R+8),(U+0),4);
}
B517799:{NFSU2_TR(0x517799);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
w4(R+8,u32(u32(r4(R+8))-u32(r4(U+0))));
}
B51779b:{NFSU2_TR(0x51779b);
{goto L517874;}
}
B5177a0:L5177a0:{c.instructions+=4;NFSU2_TR(0x5177a0);
{u32 ea_=u32(r4(R+20));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5177a3:{NFSU2_TR(0x5177a3);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5177a5:{NFSU2_TR(0x5177a5);
{u32 ea_=u32(r4(R+28)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5177a8:{NFSU2_TR(0x5177a8);
{goto L517877;}
}
B5177ad:L5177ad:{c.instructions+=8;NFSU2_TR(0x5177ad);
{u32 ea_=u32(r4(R+20));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5177b0:{NFSU2_TR(0x5177b0);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5177b2:{NFSU2_TR(0x5177b2);
{u32 ea_=u32(r4(R+20)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5177b5:{NFSU2_TR(0x5177b5);
{u32 ea_=u32(r4(R+24)+u32(4u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5177b8:{NFSU2_TR(0x5177b8);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5177ba:{NFSU2_TR(0x5177ba);
{u32 ea_=u32(r4(R+28)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5177bd:{NFSU2_TR(0x5177bd);
{u32 ea_=u32(r4(R+28)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5177c0:{NFSU2_TR(0x5177c0);
{goto L517877;}
}
B5177c5:L5177c5:{c.instructions+=13;NFSU2_TR(0x5177c5);
{u32 ea_=u32(r4(R+20));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5177c8:{NFSU2_TR(0x5177c8);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5177ca:{NFSU2_TR(0x5177ca);
{u32 ea_=u32(r4(R+20)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5177cd:{NFSU2_TR(0x5177cd);
{u32 ea_=u32(r4(R+24)+u32(4u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5177d0:{NFSU2_TR(0x5177d0);
{u32 ea_=u32(r4(R+20)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5177d3:{NFSU2_TR(0x5177d3);
{u32 ea_=u32(r4(R+24)+u32(8u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5177d6:{NFSU2_TR(0x5177d6);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5177da:{NFSU2_TR(0x5177da);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5177de:{NFSU2_TR(0x5177de);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5177e0:{NFSU2_TR(0x5177e0);
{u32 ea_=u32(r4(R+28)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5177e3:{NFSU2_TR(0x5177e3);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5177e6:{NFSU2_TR(0x5177e6);
{u32 ea_=u32(r4(R+28)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5177e9:{NFSU2_TR(0x5177e9);
{goto L517877;}
}
B5177ee:L5177ee:{c.instructions+=24;NFSU2_TR(0x5177ee);
__builtin_memmove((R+4),(R+24),4);
}
B5177f0:{NFSU2_TR(0x5177f0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5177f2:{NFSU2_TR(0x5177f2);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5177f5:{NFSU2_TR(0x5177f5);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5177f9:{NFSU2_TR(0x5177f9);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5177fd:{NFSU2_TR(0x5177fd);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B517800:{NFSU2_TR(0x517800);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B517802:{NFSU2_TR(0x517802);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B517806:{NFSU2_TR(0x517806);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51780a:{NFSU2_TR(0x51780a);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B51780e:{NFSU2_TR(0x51780e);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B517811:{NFSU2_TR(0x517811);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B517813:{NFSU2_TR(0x517813);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B517817:{NFSU2_TR(0x517817);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B51781b:{NFSU2_TR(0x51781b);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B51781f:{NFSU2_TR(0x51781f);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B517823:{NFSU2_TR(0x517823);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B517824:{NFSU2_TR(0x517824);
u8 U[4];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B517828:{NFSU2_TR(0x517828);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B51782a:{NFSU2_TR(0x51782a);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51782b:{NFSU2_TR(0x51782b);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B51782f:{NFSU2_TR(0x51782f);
__builtin_memmove((R+4),(R+20),4);
}
B517831:{NFSU2_TR(0x517831);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B517835:{NFSU2_TR(0x517835);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x51783aull));
TAIL_STATIC(0x4fe6b0u,4fe);
}
B51783a:L51783a:{c.instructions+=9;NFSU2_TR(0x51783a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B51783c:{NFSU2_TR(0x51783c);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51783f:{NFSU2_TR(0x51783f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B517842:{NFSU2_TR(0x517842);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B517845:{NFSU2_TR(0x517845);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B517848:{NFSU2_TR(0x517848);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51784b:{NFSU2_TR(0x51784b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B51784e:{NFSU2_TR(0x51784e);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B517851:{NFSU2_TR(0x517851);
{goto L517877;}
}
B517853:L517853:{c.instructions+=5;NFSU2_TR(0x517853);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B517854:{NFSU2_TR(0x517854);
u8 U[4];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B517858:{NFSU2_TR(0x517858);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B517859:{NFSU2_TR(0x517859);
__builtin_memmove((R+4),(R+20),4);
}
B51785b:{NFSU2_TR(0x51785b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x517860ull));
TAIL_STATIC(0x505580u,505);
}
B517860:L517860:{c.instructions+=7;NFSU2_TR(0x517860);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B517863:{NFSU2_TR(0x517863);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B517866:{NFSU2_TR(0x517866);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B517869:{NFSU2_TR(0x517869);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51786c:{NFSU2_TR(0x51786c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B51786f:{NFSU2_TR(0x51786f);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B517872:{NFSU2_TR(0x517872);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B517874:L517874:{c.instructions+=1;NFSU2_TR(0x517874);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B517877:L517877:{c.instructions+=5;NFSU2_TR(0x517877);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B51787b:{NFSU2_TR(0x51787b);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x38ull))));
}
B51787e:{NFSU2_TR(0x51787e);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B51787f:{NFSU2_TR(0x51787f);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B517883:{NFSU2_TR(0x517883);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x517741u);}goto L517741;}}
}
B517889:L517889:{c.instructions+=3;NFSU2_TR(0x517889);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B51788a:{NFSU2_TR(0x51788a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B51788b:{NFSU2_TR(0x51788b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B51788c:L51788c:{c.instructions+=3;NFSU2_TR(0x51788c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B51788d:{NFSU2_TR(0x51788d);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x40ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x40ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x40ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B517890:{NFSU2_TR(0x517890);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5178b0:L5178b0:{c.instructions+=4;NFSU2_TR(0x5178b0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5178b4:{NFSU2_TR(0x5178b4);
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
B5178b6:{NFSU2_TR(0x5178b6);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5178b9:{NFSU2_TR(0x5178b9);
if(r1(R+518)){{goto L5178c0;}}
}
B5178bb:L5178bb:{c.instructions+=1;NFSU2_TR(0x5178bb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5178c0ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x517720u);}goto L517720;}
}
B5178c0:L5178c0:{c.instructions+=1;NFSU2_TR(0x5178c0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5178d0:L5178d0:{c.instructions+=8;NFSU2_TR(0x5178d0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5178d1:{NFSU2_TR(0x5178d1);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5178d2:{NFSU2_TR(0x5178d2);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B5178d6:{NFSU2_TR(0x5178d6);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5178d7:{NFSU2_TR(0x5178d7);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5178da:{NFSU2_TR(0x5178da);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5178dc:{NFSU2_TR(0x5178dc);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5178e0:{NFSU2_TR(0x5178e0);
if(r1(R+518)){{goto L517973;}}
}
B5178e6:L5178e6:{c.instructions+=3;NFSU2_TR(0x5178e6);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5178e7:{NFSU2_TR(0x5178e7);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5178e8:{NFSU2_TR(0x5178e8);
{goto L5178f0;}
}
B5178f0:L5178f0:{c.instructions+=7;NFSU2_TR(0x5178f0);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5178f4:{NFSU2_TR(0x5178f4);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x7992f4ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B5178fb:{NFSU2_TR(0x5178fb);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5178fe:{NFSU2_TR(0x5178fe);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B517900:{NFSU2_TR(0x517900);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B517902:{NFSU2_TR(0x517902);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B517906:{NFSU2_TR(0x517906);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L517966;}}
}
B517908:L517908:{c.instructions+=3;NFSU2_TR(0x517908);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B51790b:{NFSU2_TR(0x51790b);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B51790e:{NFSU2_TR(0x51790e);
__builtin_memmove((R+28),(R+28),4);
}
B517910:L517910:{c.instructions+=3;NFSU2_TR(0x517910);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(s32(s8(r1(U+4)))));
}
B517914:{NFSU2_TR(0x517914);
u8 U[16];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+4))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B517918:{NFSU2_TR(0x517918);
if(r1(R+518)){{goto L517924;}}
}
B51791a:L51791a:{c.instructions+=4;NFSU2_TR(0x51791a);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B51791b:{NFSU2_TR(0x51791b);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x38ull))));
}
B51791e:{NFSU2_TR(0x51791e);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
}
B517920:{NFSU2_TR(0x517920);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x517910u);}goto L517910;}}
}
B517922:L517922:{c.instructions+=1;NFSU2_TR(0x517922);
{goto L517966;}
}
B517924:L517924:{c.instructions+=4;NFSU2_TR(0x517924);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x38ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B517927:{NFSU2_TR(0x517927);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+20))));
}
B517929:{NFSU2_TR(0x517929);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B51792b:{NFSU2_TR(0x51792b);
if(r1(R+518)){{goto L517966;}}
}
B51792d:L51792d:{c.instructions+=3;NFSU2_TR(0x51792d);
u8 U[5];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B517931:{NFSU2_TR(0x517931);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B517933:{NFSU2_TR(0x517933);
if(r1(R+518)){{goto L517951;}}
}
B517935:L517935:{c.instructions+=10;NFSU2_TR(0x517935);
{u32 ea_=u32(r4(R+12));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B517937:{NFSU2_TR(0x517937);
{u32 ea_=u32(r4(R+0)+u32(24u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B51793a:{NFSU2_TR(0x51793a);
{u32 ea_=u32(r4(R+0)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B51793d:{NFSU2_TR(0x51793d);
{u32 ea_=u32(r4(R+12)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B517940:{NFSU2_TR(0x517940);
{u32 ea_=u32(r4(R+0)+u32(28u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B517943:{NFSU2_TR(0x517943);
{u32 ea_=u32(r4(R+0)+u32(28u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B517946:{NFSU2_TR(0x517946);
{u32 ea_=u32(r4(R+12)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B517949:{NFSU2_TR(0x517949);
{u32 ea_=u32(r4(R+0)+u32(32u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B51794c:{NFSU2_TR(0x51794c);
{u32 ea_=u32(r4(R+0)+u32(32u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B51794f:{NFSU2_TR(0x51794f);
{goto L517962;}
}
B517951:L517951:{c.instructions+=6;NFSU2_TR(0x517951);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+8),(U+0),4);
}
B517953:{NFSU2_TR(0x517953);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B517956:{NFSU2_TR(0x517956);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B517959:{NFSU2_TR(0x517959);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51795c:{NFSU2_TR(0x51795c);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B51795f:{NFSU2_TR(0x51795f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B517962:L517962:{c.instructions+=1;NFSU2_TR(0x517962);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+4,u8(u32(r1(U+4))&u32(u8(0x7full))));
s1(u32(r4(U+0)),r1(U+4));
}
B517966:L517966:{c.instructions+=3;NFSU2_TR(0x517966);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B517969:{NFSU2_TR(0x517969);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B51796b:{NFSU2_TR(0x51796b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5178f0u);}goto L5178f0;}}
}
B51796d:L51796d:{c.instructions+=3;NFSU2_TR(0x51796d);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B517971:{NFSU2_TR(0x517971);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B517972:{NFSU2_TR(0x517972);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B517973:L517973:{c.instructions+=3;NFSU2_TR(0x517973);
u8 U[5];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B517977:{NFSU2_TR(0x517977);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B517979:{NFSU2_TR(0x517979);
if(r1(R+518)){{goto L5179a9;}}
}
B51797b:L51797b:{c.instructions+=3;NFSU2_TR(0x51797b);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B51797f:{NFSU2_TR(0x51797f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B517980:{NFSU2_TR(0x517980);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x517985ull));
TAIL_STATIC(0x5046f0u,504);
}
B517985:L517985:{c.instructions+=15;NFSU2_TR(0x517985);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B517988:{NFSU2_TR(0x517988);
{u32 ea_=u32(r4(R+8)+r4(R+0));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B51798b:{NFSU2_TR(0x51798b);
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
B51798d:{NFSU2_TR(0x51798d);
{u32 ea_=u32(r4(R+12));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B51798f:{NFSU2_TR(0x51798f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B517990:{NFSU2_TR(0x517990);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B517992:{NFSU2_TR(0x517992);
{u32 ea_=u32(r4(R+12)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B517995:{NFSU2_TR(0x517995);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B517998:{NFSU2_TR(0x517998);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B51799b:{NFSU2_TR(0x51799b);
{u32 ea_=u32(r4(R+12)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B51799e:{NFSU2_TR(0x51799e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B51799f:{NFSU2_TR(0x51799f);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5179a2:{NFSU2_TR(0x5179a2);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5179a5:{NFSU2_TR(0x5179a5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5179a6:{NFSU2_TR(0x5179a6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5179a9:L5179a9:{c.instructions+=3;NFSU2_TR(0x5179a9);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5179ad:{NFSU2_TR(0x5179ad);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5179ae:{NFSU2_TR(0x5179ae);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5179b3ull));
TAIL_STATIC(0x5046f0u,504);
}
B5179b3:L5179b3:{c.instructions+=12;NFSU2_TR(0x5179b3);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5179b6:{NFSU2_TR(0x5179b6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5179b8:{NFSU2_TR(0x5179b8);
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
B5179ba:{NFSU2_TR(0x5179ba);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B5179bc:{NFSU2_TR(0x5179bc);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5179bf:{NFSU2_TR(0x5179bf);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5179c2:{NFSU2_TR(0x5179c2);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5179c5:{NFSU2_TR(0x5179c5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5179c6:{NFSU2_TR(0x5179c6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5179c9:{NFSU2_TR(0x5179c9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5179ca:{NFSU2_TR(0x5179ca);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5179cb:{NFSU2_TR(0x5179cb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5179d0:L5179d0:{c.instructions+=8;NFSU2_TR(0x5179d0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5179d1:{NFSU2_TR(0x5179d1);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5179d2:{NFSU2_TR(0x5179d2);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5179d6:{NFSU2_TR(0x5179d6);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5179d7:{NFSU2_TR(0x5179d7);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5179da:{NFSU2_TR(0x5179da);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5179dc:{NFSU2_TR(0x5179dc);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5179e0:{NFSU2_TR(0x5179e0);
if(r1(R+518)){{goto L517a31;}}
}
B5179e2:L5179e2:{c.instructions+=3;NFSU2_TR(0x5179e2);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5179e3:{NFSU2_TR(0x5179e3);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5179e4:{NFSU2_TR(0x5179e4);
{goto L5179f0;}
}
B5179f0:L5179f0:{c.instructions+=6;NFSU2_TR(0x5179f0);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5179f4:{NFSU2_TR(0x5179f4);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x7992f4ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+12),(U+8),4);
}
B5179fb:{NFSU2_TR(0x5179fb);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5179fe:{NFSU2_TR(0x5179fe);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B517a00:{NFSU2_TR(0x517a00);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B517a02:{NFSU2_TR(0x517a02);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L517a24;}}
}
B517a04:L517a04:{c.instructions+=3;NFSU2_TR(0x517a04);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B517a07:{NFSU2_TR(0x517a07);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B517a0a:{NFSU2_TR(0x517a0a);
__builtin_memmove((R+12),(R+12),4);
}
B517a10:L517a10:{c.instructions+=3;NFSU2_TR(0x517a10);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+20,u32(s32(s8(r1(U+4)))));
}
B517a14:{NFSU2_TR(0x517a14);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+20))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B517a16:{NFSU2_TR(0x517a16);
if(r1(R+518)){{goto L517a60;}}
}
B517a18:L517a18:{c.instructions+=4;NFSU2_TR(0x517a18);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B517a19:{NFSU2_TR(0x517a19);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x38ull))));
}
B517a1c:{NFSU2_TR(0x517a1c);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
}
B517a1e:{NFSU2_TR(0x517a1e);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x517a10u);}goto L517a10;}}
}
B517a20:L517a20:{c.instructions+=1;NFSU2_TR(0x517a20);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B517a24:L517a24:{c.instructions+=3;NFSU2_TR(0x517a24);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B517a27:{NFSU2_TR(0x517a27);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B517a29:{NFSU2_TR(0x517a29);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5179f0u);}goto L5179f0;}}
}
B517a2b:L517a2b:{c.instructions+=3;NFSU2_TR(0x517a2b);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B517a2f:{NFSU2_TR(0x517a2f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B517a30:{NFSU2_TR(0x517a30);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B517a31:L517a31:{c.instructions+=3;NFSU2_TR(0x517a31);
u8 U[5];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B517a35:{NFSU2_TR(0x517a35);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B517a37:{NFSU2_TR(0x517a37);
if(r1(R+518)){{goto L517aa2;}}
}
B517a39:L517a39:{c.instructions+=5;NFSU2_TR(0x517a39);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B517a3d:{NFSU2_TR(0x517a3d);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B517a3f:{NFSU2_TR(0x517a3f);
{u32 ea_=u32(r4(R+24)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B517a42:{NFSU2_TR(0x517a42);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B517a43:{NFSU2_TR(0x517a43);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x517a48ull));
TAIL_STATIC(0x5046f0u,504);
}
B517a48:L517a48:{c.instructions+=11;NFSU2_TR(0x517a48);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B517a4a:{NFSU2_TR(0x517a4a);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B517a4d:{NFSU2_TR(0x517a4d);
{u32 ea_=u32(r4(R+8)+r4(R+0));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B517a50:{NFSU2_TR(0x517a50);
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
B517a52:{NFSU2_TR(0x517a52);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B517a53:{NFSU2_TR(0x517a53);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B517a54:{NFSU2_TR(0x517a54);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B517a56:{NFSU2_TR(0x517a56);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B517a59:{NFSU2_TR(0x517a59);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B517a5c:{NFSU2_TR(0x517a5c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B517a5d:{NFSU2_TR(0x517a5d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B517a60:L517a60:{c.instructions+=4;NFSU2_TR(0x517a60);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x38ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B517a63:{NFSU2_TR(0x517a63);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+4))));
}
B517a65:{NFSU2_TR(0x517a65);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B517a67:{NFSU2_TR(0x517a67);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x517a20u);}goto L517a20;}}
}
B517a69:L517a69:{c.instructions+=4;NFSU2_TR(0x517a69);
u8 U[5];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B517a6d:{NFSU2_TR(0x517a6d);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B517a6f:{NFSU2_TR(0x517a6f);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B517a73:{NFSU2_TR(0x517a73);
if(r1(R+518)){{goto L517a91;}}
}
B517a75:L517a75:{c.instructions+=10;NFSU2_TR(0x517a75);
{u32 ea_=u32(r4(R+24)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B517a78:{NFSU2_TR(0x517a78);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B517a7a:{NFSU2_TR(0x517a7a);
{u32 ea_=u32(r4(R+0)+u32(24u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B517a7d:{NFSU2_TR(0x517a7d);
{u32 ea_=u32(r4(R+0)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B517a80:{NFSU2_TR(0x517a80);
{u32 ea_=u32(r4(R+0)+u32(28u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B517a83:{NFSU2_TR(0x517a83);
{u32 ea_=u32(r4(R+0)+u32(28u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B517a86:{NFSU2_TR(0x517a86);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B517a89:{NFSU2_TR(0x517a89);
w1(R+4,u8(u32(r1(R+4))&u32(u8(0x7full))));
}
B517a8c:{NFSU2_TR(0x517a8c);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3ull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B517a8f:{NFSU2_TR(0x517a8f);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x517a24u);}goto L517a24;}
}
B517a91:L517a91:{c.instructions+=6;NFSU2_TR(0x517a91);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B517a93:{NFSU2_TR(0x517a93);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B517a96:{NFSU2_TR(0x517a96);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B517a99:{NFSU2_TR(0x517a99);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B517a9c:{NFSU2_TR(0x517a9c);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+4,u8(u32(r1(U+4))&u32(u8(0x7full))));
s1(u32(r4(U+0)),r1(U+4));
}
B517aa0:{NFSU2_TR(0x517aa0);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x517a24u);}goto L517a24;}
}
B517aa2:L517aa2:{c.instructions+=3;NFSU2_TR(0x517aa2);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B517aa6:{NFSU2_TR(0x517aa6);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B517aa7:{NFSU2_TR(0x517aa7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x517aacull));
TAIL_STATIC(0x5046f0u,504);
}
B517aac:L517aac:{c.instructions+=10;NFSU2_TR(0x517aac);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B517aaf:{NFSU2_TR(0x517aaf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B517ab1:{NFSU2_TR(0x517ab1);
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
B517ab3:{NFSU2_TR(0x517ab3);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B517ab5:{NFSU2_TR(0x517ab5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B517ab8:{NFSU2_TR(0x517ab8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B517ab9:{NFSU2_TR(0x517ab9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B517abc:{NFSU2_TR(0x517abc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B517abd:{NFSU2_TR(0x517abd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B517abe:{NFSU2_TR(0x517abe);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B517ad0:L517ad0:{c.instructions+=10;NFSU2_TR(0x517ad0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B517ad1:{NFSU2_TR(0x517ad1);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B517ad2:{NFSU2_TR(0x517ad2);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B517ad5:{NFSU2_TR(0x517ad5);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B517ad7:{NFSU2_TR(0x517ad7);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B517ad8:{NFSU2_TR(0x517ad8);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B517ad9:{NFSU2_TR(0x517ad9);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B517add:{NFSU2_TR(0x517add);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B517ade:{NFSU2_TR(0x517ade);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B517ae2:{NFSU2_TR(0x517ae2);
if(r1(R+518)){{goto L517b8c;}}
}
B517ae8:L517ae8:{c.instructions+=1;NFSU2_TR(0x517ae8);
{goto L517af0;}
}
B517af0:L517af0:{c.instructions+=7;NFSU2_TR(0x517af0);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B517af4:{NFSU2_TR(0x517af4);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x7992f4ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B517afb:{NFSU2_TR(0x517afb);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B517afe:{NFSU2_TR(0x517afe);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B517b00:{NFSU2_TR(0x517b00);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B517b02:{NFSU2_TR(0x517b02);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B517b06:{NFSU2_TR(0x517b06);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L517b7d;}}
}
B517b08:L517b08:{c.instructions+=3;NFSU2_TR(0x517b08);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B517b0b:{NFSU2_TR(0x517b0b);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B517b0e:{NFSU2_TR(0x517b0e);
__builtin_memmove((R+28),(R+28),4);
}
B517b10:L517b10:{c.instructions+=3;NFSU2_TR(0x517b10);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x3ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(s32(s8(r1(U+4)))));
}
B517b14:{NFSU2_TR(0x517b14);
u8 U[16];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+4))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B517b18:{NFSU2_TR(0x517b18);
if(r1(R+518)){{goto L517b24;}}
}
B517b1a:L517b1a:{c.instructions+=4;NFSU2_TR(0x517b1a);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B517b1b:{NFSU2_TR(0x517b1b);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x38ull))));
}
B517b1e:{NFSU2_TR(0x517b1e);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
}
B517b20:{NFSU2_TR(0x517b20);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x517b10u);}goto L517b10;}}
}
B517b22:L517b22:{c.instructions+=1;NFSU2_TR(0x517b22);
{goto L517b7d;}
}
B517b24:L517b24:{c.instructions+=4;NFSU2_TR(0x517b24);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x38ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B517b27:{NFSU2_TR(0x517b27);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+20))));
}
B517b29:{NFSU2_TR(0x517b29);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B517b2b:{NFSU2_TR(0x517b2b);
if(r1(R+518)){{goto L517b7d;}}
}
B517b2d:L517b2d:{c.instructions+=3;NFSU2_TR(0x517b2d);
u8 U[5];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B517b31:{NFSU2_TR(0x517b31);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B517b33:{NFSU2_TR(0x517b33);
if(r1(R+518)){{goto L517b62;}}
}
B517b35:L517b35:{c.instructions+=17;NFSU2_TR(0x517b35);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B517b38:{NFSU2_TR(0x517b38);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B517b3b:{NFSU2_TR(0x517b3b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B517b3e:{NFSU2_TR(0x517b3e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B517b41:{NFSU2_TR(0x517b41);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+8))));
}
B517b43:{NFSU2_TR(0x517b43);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B517b46:{NFSU2_TR(0x517b46);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B517b49:{NFSU2_TR(0x517b49);
w4(R+20,u32(u32(r4(R+20))+u32(r4(R+4))));
}
B517b4b:{NFSU2_TR(0x517b4b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B517b4e:{NFSU2_TR(0x517b4e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B517b50:{NFSU2_TR(0x517b50);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+8))));
}
B517b52:{NFSU2_TR(0x517b52);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B517b55:{NFSU2_TR(0x517b55);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B517b58:{NFSU2_TR(0x517b58);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B517b5b:{NFSU2_TR(0x517b5b);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+4))));
}
B517b5d:{NFSU2_TR(0x517b5d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B517b60:{NFSU2_TR(0x517b60);
{goto L517b79;}
}
B517b62:L517b62:{c.instructions+=8;NFSU2_TR(0x517b62);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B517b65:{NFSU2_TR(0x517b65);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B517b68:{NFSU2_TR(0x517b68);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B517b6b:{NFSU2_TR(0x517b6b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B517b6e:{NFSU2_TR(0x517b6e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B517b71:{NFSU2_TR(0x517b71);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B517b74:{NFSU2_TR(0x517b74);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B517b76:{NFSU2_TR(0x517b76);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B517b79:L517b79:{c.instructions+=1;NFSU2_TR(0x517b79);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+4,u8(u32(r1(U+4))&u32(u8(0x7full))));
s1(u32(r4(U+0)),r1(U+4));
}
B517b7d:L517b7d:{c.instructions+=3;NFSU2_TR(0x517b7d);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B517b80:{NFSU2_TR(0x517b80);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B517b82:{NFSU2_TR(0x517b82);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x517af0u);}goto L517af0;}}
}
B517b88:L517b88:{c.instructions+=1;NFSU2_TR(0x517b88);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B517b8c:L517b8c:{c.instructions+=3;NFSU2_TR(0x517b8c);
u8 U[5];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B517b90:{NFSU2_TR(0x517b90);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B517b92:{NFSU2_TR(0x517b92);
if(r1(R+518)){{goto L517bd6;}}
}
B517b94:L517b94:{c.instructions+=3;NFSU2_TR(0x517b94);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B517b98:{NFSU2_TR(0x517b98);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B517b99:{NFSU2_TR(0x517b99);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x517b9eull));
TAIL_STATIC(0x5046f0u,504);
}
B517b9e:L517b9e:{c.instructions+=24;NFSU2_TR(0x517b9e);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B517ba1:{NFSU2_TR(0x517ba1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B517ba4:{NFSU2_TR(0x517ba4);
u8 U[16];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+20))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+12),(U+12),4);
}
B517ba8:{NFSU2_TR(0x517ba8);
u8 U[16];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+20))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+28),(U+12),4);
}
B517bac:{NFSU2_TR(0x517bac);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+20))));
}
B517bae:{NFSU2_TR(0x517bae);
w4(R+12,u32(u32(r4(R+12))+u32(r4(R+4))));
}
B517bb0:{NFSU2_TR(0x517bb0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B517bb3:{NFSU2_TR(0x517bb3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B517bb6:{NFSU2_TR(0x517bb6);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+8))));
}
B517bb8:{NFSU2_TR(0x517bb8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B517bba:{NFSU2_TR(0x517bba);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B517bbd:{NFSU2_TR(0x517bbd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B517bbf:{NFSU2_TR(0x517bbf);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+4))));
}
B517bc1:{NFSU2_TR(0x517bc1);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B517bc4:{NFSU2_TR(0x517bc4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B517bc5:{NFSU2_TR(0x517bc5);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+0)),r4(U+0));
}
B517bc7:{NFSU2_TR(0x517bc7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B517bca:{NFSU2_TR(0x517bca);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B517bcb:{NFSU2_TR(0x517bcb);
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
B517bcd:{NFSU2_TR(0x517bcd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B517bce:{NFSU2_TR(0x517bce);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B517bd1:{NFSU2_TR(0x517bd1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B517bd2:{NFSU2_TR(0x517bd2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B517bd3:{NFSU2_TR(0x517bd3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B517bd6:L517bd6:{c.instructions+=3;NFSU2_TR(0x517bd6);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B517bda:{NFSU2_TR(0x517bda);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B517bdb:{NFSU2_TR(0x517bdb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x517be0ull));
TAIL_STATIC(0x5046f0u,504);
}
B517be0:L517be0:{c.instructions+=16;NFSU2_TR(0x517be0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B517be3:{NFSU2_TR(0x517be3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B517be6:{NFSU2_TR(0x517be6);
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
B517be8:{NFSU2_TR(0x517be8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B517beb:{NFSU2_TR(0x517beb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B517bee:{NFSU2_TR(0x517bee);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B517bf1:{NFSU2_TR(0x517bf1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B517bf4:{NFSU2_TR(0x517bf4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B517bf5:{NFSU2_TR(0x517bf5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B517bf8:{NFSU2_TR(0x517bf8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B517bfa:{NFSU2_TR(0x517bfa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B517bfb:{NFSU2_TR(0x517bfb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B517bfc:{NFSU2_TR(0x517bfc);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+0)),r4(U+0));
}
B517bfe:{NFSU2_TR(0x517bfe);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B517bff:{NFSU2_TR(0x517bff);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B517c00:{NFSU2_TR(0x517c00);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B517c10:L517c10:{c.instructions+=5;NFSU2_TR(0x517c10);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xcull))));
}
B517c13:{NFSU2_TR(0x517c13);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B517c14:{NFSU2_TR(0x517c14);
__builtin_memmove((R+24),(R+4),4);
}
B517c16:{NFSU2_TR(0x517c16);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(U+8),u32(0x100ull)));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x100ull))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B517c1d:{NFSU2_TR(0x517c1d);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L517c74;}}
}
B517c1f:L517c1f:{c.instructions+=6;NFSU2_TR(0x517c1f);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B517c20:{NFSU2_TR(0x517c20);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B517c24:{NFSU2_TR(0x517c24);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(r1(R+12))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B517c26:{NFSU2_TR(0x517c26);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B517c27:{NFSU2_TR(0x517c27);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B517c2b:{NFSU2_TR(0x517c2b);
if(r1(R+518)){{goto L517c4c;}}
}
B517c2d:L517c2d:{c.instructions+=6;NFSU2_TR(0x517c2d);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B517c31:{NFSU2_TR(0x517c31);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B517c39:{NFSU2_TR(0x517c39);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B517c41:{NFSU2_TR(0x517c41);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B517c49:{NFSU2_TR(0x517c49);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B517c4a:{NFSU2_TR(0x517c4a);
{goto L517c53;}
}
B517c4c:L517c4c:{c.instructions+=3;NFSU2_TR(0x517c4c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B517c4f:{NFSU2_TR(0x517c4f);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1cull))));
}
B517c52:{NFSU2_TR(0x517c52);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B517c53:L517c53:{c.instructions+=2;NFSU2_TR(0x517c53);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B517c54:{NFSU2_TR(0x517c54);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x517c59ull));
TAIL_STATIC(0x504500u,504);
}
B517c59:L517c59:{c.instructions+=3;NFSU2_TR(0x517c59);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B517c5c:{NFSU2_TR(0x517c5c);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B517c5e:{NFSU2_TR(0x517c5e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L517c67;}}
}
B517c60:L517c60:{c.instructions+=1;NFSU2_TR(0x517c60);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0x400000ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B517c67:L517c67:{c.instructions+=5;NFSU2_TR(0x517c67);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B517c68:{NFSU2_TR(0x517c68);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B517c69:{NFSU2_TR(0x517c69);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B517c6b:{NFSU2_TR(0x517c6b);
__builtin_memmove((R+4),(R+24),4);
}
B517c6d:{NFSU2_TR(0x517c6d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x517c72ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5178d0u);}goto L5178d0;}
}
B517c72:L517c72:{c.instructions+=2;NFSU2_TR(0x517c72);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B517c73:{NFSU2_TR(0x517c73);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B517c74:L517c74:{c.instructions+=3;NFSU2_TR(0x517c74);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B517c75:{NFSU2_TR(0x517c75);
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
B517c78:{NFSU2_TR(0x517c78);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B517c80:L517c80:{c.instructions+=4;NFSU2_TR(0x517c80);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x14ull))));
}
B517c83:{NFSU2_TR(0x517c83);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(U+8),u32(0x100ull)));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x100ull))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B517c8a:{NFSU2_TR(0x517c8a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+16)),r4(U+0));
}
B517c8e:{NFSU2_TR(0x517c8e);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L517d9b;}}
}
B517c94:L517c94:{c.instructions+=10;NFSU2_TR(0x517c94);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B517c97:{NFSU2_TR(0x517c97);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B517c98:{NFSU2_TR(0x517c98);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B517c9c:{NFSU2_TR(0x517c9c);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B517c9d:{NFSU2_TR(0x517c9d);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B517ca0:{NFSU2_TR(0x517ca0);
w4(R+8,u32(u32(r4(R+8))|u32(u32(0x400000ull))));
}
B517ca6:{NFSU2_TR(0x517ca6);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))&u32(r4(R+20))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B517ca8:{NFSU2_TR(0x517ca8);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B517ca9:{NFSU2_TR(0x517ca9);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B517cac:{NFSU2_TR(0x517cac);
if(r1(R+518)){{goto L517d42;}}
}
B517cb2:L517cb2:{c.instructions+=1;NFSU2_TR(0x517cb2);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B517cb3:L517cb3:{c.instructions+=4;NFSU2_TR(0x517cb3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B517cb6:{NFSU2_TR(0x517cb6);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B517cb8:{NFSU2_TR(0x517cb8);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B517cba:{NFSU2_TR(0x517cba);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L517d32;}}
}
B517cbc:L517cbc:{c.instructions+=2;NFSU2_TR(0x517cbc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B517cbf:{NFSU2_TR(0x517cbf);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B517cc2:L517cc2:{c.instructions+=4;NFSU2_TR(0x517cc2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+28),(U+0),4);
}
B517cc4:{NFSU2_TR(0x517cc4);
w4(R+28,u32(u32(r4(R+28))&u32(u32(0xff000000ull))));
}
B517cca:{NFSU2_TR(0x517cca);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xa000000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B517cd0:{NFSU2_TR(0x517cd0);
if(r1(R+518)){{goto L517cdc;}}
}
B517cd2:L517cd2:{c.instructions+=4;NFSU2_TR(0x517cd2);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B517cd3:{NFSU2_TR(0x517cd3);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x38ull))));
}
B517cd6:{NFSU2_TR(0x517cd6);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
}
B517cd8:{NFSU2_TR(0x517cd8);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x517cc2u);}goto L517cc2;}}
}
B517cda:L517cda:{c.instructions+=1;NFSU2_TR(0x517cda);
{goto L517d32;}
}
B517cdc:L517cdc:{c.instructions+=5;NFSU2_TR(0x517cdc);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x38ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B517cdf:{NFSU2_TR(0x517cdf);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+24))));
}
B517ce1:{NFSU2_TR(0x517ce1);
__builtin_memmove((R+28),(R+0),4);
}
B517ce3:{NFSU2_TR(0x517ce3);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B517ce5:{NFSU2_TR(0x517ce5);
if(r1(R+518)){{goto L517d32;}}
}
B517ce7:L517ce7:{c.instructions+=3;NFSU2_TR(0x517ce7);
u8 U[5];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B517ceb:{NFSU2_TR(0x517ceb);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B517ced:{NFSU2_TR(0x517ced);
if(r1(R+518)){{goto L517d17;}}
}
B517cef:L517cef:{c.instructions+=6;NFSU2_TR(0x517cef);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B517cf0:{NFSU2_TR(0x517cf0);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B517cf4:{NFSU2_TR(0x517cf4);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x18ull))));
__builtin_memmove((R+24),(U+0),4);
}
B517cf7:{NFSU2_TR(0x517cf7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B517cf8:{NFSU2_TR(0x517cf8);
__builtin_memmove((R+4),(R+24),4);
}
B517cfa:{NFSU2_TR(0x517cfa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x517cffull));
TAIL_STATIC(0x4fe6b0u,4fe);
}
B517cff:L517cff:{c.instructions+=9;NFSU2_TR(0x517cff);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B517d01:{NFSU2_TR(0x517d01);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+24)),r4(U+0));
}
B517d03:{NFSU2_TR(0x517d03);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B517d06:{NFSU2_TR(0x517d06);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B517d09:{NFSU2_TR(0x517d09);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B517d0c:{NFSU2_TR(0x517d0c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B517d0f:{NFSU2_TR(0x517d0f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B517d12:{NFSU2_TR(0x517d12);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B517d15:{NFSU2_TR(0x517d15);
{goto L517d2e;}
}
B517d17:L517d17:{c.instructions+=8;NFSU2_TR(0x517d17);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+0),(U+0),4);
}
B517d19:{NFSU2_TR(0x517d19);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B517d1c:{NFSU2_TR(0x517d1c);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B517d1f:{NFSU2_TR(0x517d1f);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B517d22:{NFSU2_TR(0x517d22);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B517d25:{NFSU2_TR(0x517d25);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B517d28:{NFSU2_TR(0x517d28);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B517d2b:{NFSU2_TR(0x517d2b);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B517d2e:L517d2e:{c.instructions+=1;NFSU2_TR(0x517d2e);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x3ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+4,u8(u32(r1(U+4))&u32(u8(0x7full))));
s1(u32(r4(U+0)),r1(U+4));
}
B517d32:L517d32:{c.instructions+=3;NFSU2_TR(0x517d32);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B517d35:{NFSU2_TR(0x517d35);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))&u32(r4(R+20))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B517d37:{NFSU2_TR(0x517d37);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x517cb3u);}goto L517cb3;}}
}
B517d3d:L517d3d:{c.instructions+=2;NFSU2_TR(0x517d3d);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B517d41:{NFSU2_TR(0x517d41);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B517d42:L517d42:{c.instructions+=3;NFSU2_TR(0x517d42);
u8 U[5];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B517d46:{NFSU2_TR(0x517d46);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B517d48:{NFSU2_TR(0x517d48);
if(r1(R+518)){{goto L517d7c;}}
}
B517d4a:L517d4a:{c.instructions+=7;NFSU2_TR(0x517d4a);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B517d4d:{NFSU2_TR(0x517d4d);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B517d4e:{NFSU2_TR(0x517d4e);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B517d52:{NFSU2_TR(0x517d52);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x28ull))));
}
B517d55:{NFSU2_TR(0x517d55);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B517d56:{NFSU2_TR(0x517d56);
__builtin_memmove((R+4),(R+24),4);
}
B517d58:{NFSU2_TR(0x517d58);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x517d5dull));
TAIL_STATIC(0x4fe6b0u,4fe);
}
B517d5d:L517d5d:{c.instructions+=13;NFSU2_TR(0x517d5d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B517d5f:{NFSU2_TR(0x517d5f);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+24)),r4(U+0));
}
B517d61:{NFSU2_TR(0x517d61);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B517d64:{NFSU2_TR(0x517d64);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B517d67:{NFSU2_TR(0x517d67);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B517d6a:{NFSU2_TR(0x517d6a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B517d6d:{NFSU2_TR(0x517d6d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B517d70:{NFSU2_TR(0x517d70);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B517d73:{NFSU2_TR(0x517d73);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B517d74:{NFSU2_TR(0x517d74);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B517d75:{NFSU2_TR(0x517d75);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B517d76:{NFSU2_TR(0x517d76);
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
B517d79:{NFSU2_TR(0x517d79);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B517d7c:L517d7c:{c.instructions+=13;NFSU2_TR(0x517d7c);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B517d7f:{NFSU2_TR(0x517d7f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+4),(U+0),4);
}
B517d81:{NFSU2_TR(0x517d81);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
}
B517d84:{NFSU2_TR(0x517d84);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B517d86:{NFSU2_TR(0x517d86);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B517d89:{NFSU2_TR(0x517d89);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B517d8c:{NFSU2_TR(0x517d8c);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B517d8f:{NFSU2_TR(0x517d8f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B517d90:{NFSU2_TR(0x517d90);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B517d93:{NFSU2_TR(0x517d93);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B517d96:{NFSU2_TR(0x517d96);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B517d97:{NFSU2_TR(0x517d97);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B517d9a:{NFSU2_TR(0x517d9a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B517d9b:L517d9b:{c.instructions+=2;NFSU2_TR(0x517d9b);
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
B517d9e:{NFSU2_TR(0x517d9e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B517db0:L517db0:{c.instructions+=5;NFSU2_TR(0x517db0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xcull))));
}
B517db3:{NFSU2_TR(0x517db3);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B517db4:{NFSU2_TR(0x517db4);
__builtin_memmove((R+24),(R+4),4);
}
B517db6:{NFSU2_TR(0x517db6);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(U+8),u32(0x100ull)));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x100ull))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B517dbd:{NFSU2_TR(0x517dbd);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L517e14;}}
}
B517dbf:L517dbf:{c.instructions+=6;NFSU2_TR(0x517dbf);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B517dc0:{NFSU2_TR(0x517dc0);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B517dc4:{NFSU2_TR(0x517dc4);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(r1(R+12))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B517dc6:{NFSU2_TR(0x517dc6);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B517dc7:{NFSU2_TR(0x517dc7);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B517dcb:{NFSU2_TR(0x517dcb);
if(r1(R+518)){{goto L517dec;}}
}
B517dcd:L517dcd:{c.instructions+=6;NFSU2_TR(0x517dcd);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B517dd1:{NFSU2_TR(0x517dd1);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B517dd9:{NFSU2_TR(0x517dd9);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B517de1:{NFSU2_TR(0x517de1);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B517de9:{NFSU2_TR(0x517de9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B517dea:{NFSU2_TR(0x517dea);
{goto L517df3;}
}
B517dec:L517dec:{c.instructions+=3;NFSU2_TR(0x517dec);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B517def:{NFSU2_TR(0x517def);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x38ull))));
}
B517df2:{NFSU2_TR(0x517df2);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B517df3:L517df3:{c.instructions+=2;NFSU2_TR(0x517df3);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B517df4:{NFSU2_TR(0x517df4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x517df9ull));
TAIL_STATIC(0x5045a0u,504);
}
B517df9:L517df9:{c.instructions+=3;NFSU2_TR(0x517df9);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B517dfc:{NFSU2_TR(0x517dfc);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B517dfe:{NFSU2_TR(0x517dfe);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L517e07;}}
}
B517e00:L517e00:{c.instructions+=1;NFSU2_TR(0x517e00);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0x400000ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B517e07:L517e07:{c.instructions+=5;NFSU2_TR(0x517e07);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B517e08:{NFSU2_TR(0x517e08);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B517e09:{NFSU2_TR(0x517e09);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B517e0b:{NFSU2_TR(0x517e0b);
__builtin_memmove((R+4),(R+24),4);
}
B517e0d:{NFSU2_TR(0x517e0d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x517e12ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5178d0u);}goto L5178d0;}
}
B517e12:L517e12:{c.instructions+=2;NFSU2_TR(0x517e12);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B517e13:{NFSU2_TR(0x517e13);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B517e14:L517e14:{c.instructions+=3;NFSU2_TR(0x517e14);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B517e15:{NFSU2_TR(0x517e15);
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
B517e18:{NFSU2_TR(0x517e18);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B517e20:L517e20:{c.instructions+=5;NFSU2_TR(0x517e20);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x10ull))));
}
B517e23:{NFSU2_TR(0x517e23);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B517e24:{NFSU2_TR(0x517e24);
__builtin_memmove((R+24),(R+4),4);
}
B517e26:{NFSU2_TR(0x517e26);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(U+8),u32(0x100ull)));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x100ull))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B517e2d:{NFSU2_TR(0x517e2d);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L517e89;}}
}
B517e2f:L517e2f:{c.instructions+=6;NFSU2_TR(0x517e2f);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B517e30:{NFSU2_TR(0x517e30);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B517e34:{NFSU2_TR(0x517e34);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(r1(R+12))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B517e36:{NFSU2_TR(0x517e36);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B517e37:{NFSU2_TR(0x517e37);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B517e3b:{NFSU2_TR(0x517e3b);
if(r1(R+518)){{goto L517e64;}}
}
B517e3d:L517e3d:{c.instructions+=7;NFSU2_TR(0x517e3d);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B517e41:{NFSU2_TR(0x517e41);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B517e49:{NFSU2_TR(0x517e49);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B517e51:{NFSU2_TR(0x517e51);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B517e59:{NFSU2_TR(0x517e59);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B517e61:{NFSU2_TR(0x517e61);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B517e62:{NFSU2_TR(0x517e62);
{goto L517e68;}
}
B517e64:L517e64:{c.instructions+=2;NFSU2_TR(0x517e64);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B517e67:{NFSU2_TR(0x517e67);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B517e68:L517e68:{c.instructions+=2;NFSU2_TR(0x517e68);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B517e69:{NFSU2_TR(0x517e69);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x517e6eull));
TAIL_STATIC(0x504640u,504);
}
B517e6e:L517e6e:{c.instructions+=3;NFSU2_TR(0x517e6e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B517e71:{NFSU2_TR(0x517e71);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B517e73:{NFSU2_TR(0x517e73);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L517e7c;}}
}
B517e75:L517e75:{c.instructions+=1;NFSU2_TR(0x517e75);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0x400000ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B517e7c:L517e7c:{c.instructions+=5;NFSU2_TR(0x517e7c);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B517e7d:{NFSU2_TR(0x517e7d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B517e7e:{NFSU2_TR(0x517e7e);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B517e80:{NFSU2_TR(0x517e80);
__builtin_memmove((R+4),(R+24),4);
}
B517e82:{NFSU2_TR(0x517e82);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x517e87ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x517ad0u);}goto L517ad0;}
}
B517e87:L517e87:{c.instructions+=2;NFSU2_TR(0x517e87);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B517e88:{NFSU2_TR(0x517e88);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B517e89:L517e89:{c.instructions+=3;NFSU2_TR(0x517e89);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B517e8a:{NFSU2_TR(0x517e8a);
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
B517e8d:{NFSU2_TR(0x517e8d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B517e90:L517e90:{c.instructions+=5;NFSU2_TR(0x517e90);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B517e94:{NFSU2_TR(0x517e94);
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
B517e96:{NFSU2_TR(0x517e96);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B517e97:{NFSU2_TR(0x517e97);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B517e9a:{NFSU2_TR(0x517e9a);
if(r1(R+518)){{goto L517ed7;}}
}
B517e9c:L517e9c:{c.instructions+=2;NFSU2_TR(0x517e9c);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B517e9e:{NFSU2_TR(0x517e9e);
if(r1(R+518)){{goto L517eb5;}}
}
B517ea0:L517ea0:{c.instructions+=4;NFSU2_TR(0x517ea0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B517ea3:{NFSU2_TR(0x517ea3);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B517ea5:{NFSU2_TR(0x517ea5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B517ea8:{NFSU2_TR(0x517ea8);
if(r1(R+518)){{goto L517ead;}}
}
B517eaa:L517eaa:{c.instructions+=1;NFSU2_TR(0x517eaa);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B517ead:L517ead:{c.instructions+=3;NFSU2_TR(0x517ead);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B517eb0:{NFSU2_TR(0x517eb0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B517eb3:{NFSU2_TR(0x517eb3);
{goto L517ecc;}
}
B517eb5:L517eb5:{c.instructions+=4;NFSU2_TR(0x517eb5);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B517eb8:{NFSU2_TR(0x517eb8);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B517eba:{NFSU2_TR(0x517eba);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B517ebd:{NFSU2_TR(0x517ebd);
if(r1(R+518)){{goto L517ec2;}}
}
B517ebf:L517ebf:{c.instructions+=1;NFSU2_TR(0x517ebf);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B517ec2:L517ec2:{c.instructions+=2;NFSU2_TR(0x517ec2);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B517ec9:{NFSU2_TR(0x517ec9);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x64ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B517ecc:L517ecc:{c.instructions+=2;NFSU2_TR(0x517ecc);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+24))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+24))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B517ecf:{NFSU2_TR(0x517ecf);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L517ed4;}}
}
B517ed1:L517ed1:{c.instructions+=1;NFSU2_TR(0x517ed1);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x68ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B517ed4:L517ed4:{c.instructions+=1;NFSU2_TR(0x517ed4);
u8 U[14];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x60ull))));
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
B517ed7:L517ed7:{c.instructions+=2;NFSU2_TR(0x517ed7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B517ed8:{NFSU2_TR(0x517ed8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B517ee0:L517ee0:{c.instructions+=5;NFSU2_TR(0x517ee0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B517ee1:{NFSU2_TR(0x517ee1);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B517ee5:{NFSU2_TR(0x517ee5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B517ee8:{NFSU2_TR(0x517ee8);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B517eea:{NFSU2_TR(0x517eea);
if(r1(R+518)){{goto L517efd;}}
}
B517eec:L517eec:{c.instructions+=1;NFSU2_TR(0x517eec);
w4(R+4,u32(0x1744b3ull));
}
B517ef1:L517ef1:{c.instructions+=2;NFSU2_TR(0x517ef1);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+4))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B517ef4:{NFSU2_TR(0x517ef4);
if(r1(R+518)){{goto L517efd;}}
}
B517ef6:L517ef6:{c.instructions+=3;NFSU2_TR(0x517ef6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B517ef9:{NFSU2_TR(0x517ef9);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B517efb:{NFSU2_TR(0x517efb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x517ef1u);}goto L517ef1;}}
}
B517efd:L517efd:{c.instructions+=3;NFSU2_TR(0x517efd);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B517eff:{NFSU2_TR(0x517eff);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B517f02:{NFSU2_TR(0x517f02);
if(r1(R+518)){{goto L517f0b;}}
}
B517f04:L517f04:{c.instructions+=2;NFSU2_TR(0x517f04);
__builtin_memmove((R+4),(R+24),4);
}
B517f06:{NFSU2_TR(0x517f06);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x517f0bull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x517720u);}goto L517720;}
}
B517f0b:L517f0b:{c.instructions+=6;NFSU2_TR(0x517f0b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B517f0e:{NFSU2_TR(0x517f0e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B517f15:{NFSU2_TR(0x517f15);
u8 U[14];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0x3c00000ull))));
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
B517f1c:{NFSU2_TR(0x517f1c);
w1(R+0,u8(0x1ull));
}
B517f1e:{NFSU2_TR(0x517f1e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B517f1f:{NFSU2_TR(0x517f1f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B517f30:L517f30:{c.instructions+=6;NFSU2_TR(0x517f30);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B517f31:{NFSU2_TR(0x517f31);
__builtin_memmove((R+24),(R+4),4);
}
B517f33:{NFSU2_TR(0x517f33);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B517f36:{NFSU2_TR(0x517f36);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B517f37:{NFSU2_TR(0x517f37);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B517f38:{NFSU2_TR(0x517f38);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x517f3dull));
TAIL_STATIC(0x575630u,575);
}
B517f3d:L517f3d:{c.instructions+=5;NFSU2_TR(0x517f3d);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B517f41:{NFSU2_TR(0x517f41);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B517f44:{NFSU2_TR(0x517f44);
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
B517f46:{NFSU2_TR(0x517f46);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B517f4d:{NFSU2_TR(0x517f4d);
if(r1(R+518)){{goto L517f7a;}}
}
B517f4f:L517f4f:{c.instructions+=2;NFSU2_TR(0x517f4f);
__builtin_memmove((R+0),(R+28),4);
}
B517f51:{NFSU2_TR(0x517f51);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((R+8),(U+0),4);
}
B517f54:L517f54:{c.instructions+=4;NFSU2_TR(0x517f54);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((R+4),(U+0),1);
}
B517f56:{NFSU2_TR(0x517f56);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B517f57:{NFSU2_TR(0x517f57);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B517f59:{NFSU2_TR(0x517f59);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x517f54u);}goto L517f54;}}
}
B517f5b:L517f5b:{c.instructions+=4;NFSU2_TR(0x517f5b);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+8))));
}
B517f5d:{NFSU2_TR(0x517f5d);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B517f5e:{NFSU2_TR(0x517f5e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B517f5f:{NFSU2_TR(0x517f5f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x517f64ull));
TAIL_STATIC(0x575620u,575);
}
B517f64:L517f64:{c.instructions+=5;NFSU2_TR(0x517f64);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B517f67:{NFSU2_TR(0x517f67);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B517f6a:{NFSU2_TR(0x517f6a);
__builtin_memmove((R+4),(R+28),4);
}
B517f6c:{NFSU2_TR(0x517f6c);
__builtin_memmove((R+8),(R+0),4);
}
B517f6e:{NFSU2_TR(0x517f6e);
__builtin_memmove((R+28),(R+28),4);
}
B517f70:L517f70:{c.instructions+=6;NFSU2_TR(0x517f70);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+4))),1);
__builtin_memmove((R+0),(U+0),1);
}
B517f72:{NFSU2_TR(0x517f72);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B517f73:{NFSU2_TR(0x517f73);
u8 U[1];
__builtin_memmove((U+0),(R+0),1);
s1(u32(r4(R+8)),r1(U+0));
}
B517f75:{NFSU2_TR(0x517f75);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B517f76:{NFSU2_TR(0x517f76);
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
B517f78:{NFSU2_TR(0x517f78);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x517f70u);}goto L517f70;}}
}
B517f7a:L517f7a:{c.instructions+=3;NFSU2_TR(0x517f7a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B517f7b:{NFSU2_TR(0x517f7b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B517f7c:{NFSU2_TR(0x517f7c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B517f80:L517f80:{c.instructions+=15;NFSU2_TR(0x517f80);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B517f82:{NFSU2_TR(0x517f82);
u8 U[4];
w4(U+0,u32(0x776f88ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B517f87:{NFSU2_TR(0x517f87);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B517f8d:{NFSU2_TR(0x517f8d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B517f8e:{NFSU2_TR(0x517f8e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B517f95:{NFSU2_TR(0x517f95);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xcull))));
}
B517f98:{NFSU2_TR(0x517f98);
u8 U[4];
w4(U+0,u32(0x79aaf4ull));
s4(u32(r4(R+16)),r4(U+0));
}
B517fa0:{NFSU2_TR(0x517fa0);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B517fa4:{NFSU2_TR(0x517fa4);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B517fa6:{NFSU2_TR(0x517fa6);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B517faa:{NFSU2_TR(0x517faa);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B517fae:{NFSU2_TR(0x517fae);
__builtin_memmove((R+0),(R+16),4);
}
B517fb2:{NFSU2_TR(0x517fb2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B517fb3:{NFSU2_TR(0x517fb3);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B517fb7:{NFSU2_TR(0x517fb7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x517fbcull));
TAIL_STATIC(0x504880u,504);
}
B517fbc:L517fbc:{c.instructions+=5;NFSU2_TR(0x517fbc);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B517fc0:{NFSU2_TR(0x517fc0);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B517fc4:{NFSU2_TR(0x517fc4);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B517fcb:{NFSU2_TR(0x517fcb);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x18ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x18ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B517fce:{NFSU2_TR(0x517fce);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B517fe0:L517fe0:{c.instructions+=7;NFSU2_TR(0x517fe0);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B517fe2:{NFSU2_TR(0x517fe2);
u8 U[4];
w4(U+0,u32(0x776f88ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B517fe7:{NFSU2_TR(0x517fe7);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B517fed:{NFSU2_TR(0x517fed);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B517fee:{NFSU2_TR(0x517fee);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B517ff5:{NFSU2_TR(0x517ff5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xcull))));
}
B517ff8:{NFSU2_TR(0x517ff8);
u8 U[4];
w4(U+0,u32(0x79aafcull));
s4(u32(r4(R+16)),r4(U+0));
TAIL_STATIC(0x518000u,518);
}
XIT:NFSU2_TR_EXIT(0x517,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
