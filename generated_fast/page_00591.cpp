#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_403(u8* __restrict R,Cpu& c);
u32 body_405(u8* __restrict R,Cpu& c);
u32 body_43c(u8* __restrict R,Cpu& c);
u32 body_43d(u8* __restrict R,Cpu& c);
u32 body_43f(u8* __restrict R,Cpu& c);
u32 body_570(u8* __restrict R,Cpu& c);
u32 body_574(u8* __restrict R,Cpu& c);
u32 body_576(u8* __restrict R,Cpu& c);
u32 body_577(u8* __restrict R,Cpu& c);
u32 body_588(u8* __restrict R,Cpu& c);
u32 body_58a(u8* __restrict R,Cpu& c);
u32 body_58b(u8* __restrict R,Cpu& c);
u32 body_58f(u8* __restrict R,Cpu& c);
u32 body_590(u8* __restrict R,Cpu& c);
u32 body_592(u8* __restrict R,Cpu& c);
u32 body_5bb(u8* __restrict R,Cpu& c);
u32 body_5d3(u8* __restrict R,Cpu& c);
u32 body_744(u8* __restrict R,Cpu& c);
u32 body_75b(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x591,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x591,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_591(u8* __restrict R,Cpu& c);
u32 page_591(Cpu& c){return body_591(c.regs.data(),c);}
__attribute__((noinline)) u32 body_591(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x591000:goto L591000;
case 0x591005:c.instructions+=2;goto B591005;
case 0x591007:c.instructions+=1;goto B591007;
case 0x59100c:goto L59100c;
case 0x59100f:c.instructions+=2;goto B59100f;
case 0x591010:c.instructions+=1;goto B591010;
case 0x591015:goto L591015;
case 0x591018:c.instructions+=2;goto B591018;
case 0x59101a:c.instructions+=1;goto B59101a;
case 0x59101c:goto L59101c;
case 0x59101e:c.instructions+=1;goto B59101e;
case 0x591023:goto L591023;
case 0x591026:c.instructions+=2;goto B591026;
case 0x591027:c.instructions+=1;goto B591027;
case 0x591028:goto L591028;
case 0x59102a:c.instructions+=2;goto B59102a;
case 0x59102b:c.instructions+=1;goto B59102b;
case 0x591030:goto L591030;
case 0x591035:goto L591035;
case 0x591037:c.instructions+=1;goto B591037;
case 0x59103c:goto L59103c;
case 0x59103e:c.instructions+=1;goto B59103e;
case 0x591040:goto L591040;
case 0x591042:c.instructions+=1;goto B591042;
case 0x591047:goto L591047;
case 0x59104a:c.instructions+=2;goto B59104a;
case 0x59104c:c.instructions+=1;goto B59104c;
case 0x591051:goto L591051;
case 0x591053:c.instructions+=1;goto B591053;
case 0x591055:goto L591055;
case 0x59105a:goto L59105a;
case 0x59105c:c.instructions+=1;goto B59105c;
case 0x591061:goto L591061;
case 0x591063:c.instructions+=1;goto B591063;
case 0x591065:goto L591065;
case 0x591068:c.instructions+=1;goto B591068;
case 0x591069:goto L591069;
case 0x59106b:c.instructions+=1;goto B59106b;
case 0x591070:goto L591070;
case 0x591075:goto L591075;
case 0x59107a:goto L59107a;
case 0x59107c:c.instructions+=1;goto B59107c;
case 0x591081:goto L591081;
case 0x591084:c.instructions+=2;goto B591084;
case 0x591086:c.instructions+=1;goto B591086;
case 0x591090:goto L591090;
case 0x591096:c.instructions+=5;goto B591096;
case 0x591099:c.instructions+=4;goto B591099;
case 0x59109f:c.instructions+=3;goto B59109f;
case 0x5910a1:c.instructions+=2;goto B5910a1;
case 0x5910a4:c.instructions+=1;goto B5910a4;
case 0x5910a6:goto L5910a6;
case 0x5910a8:c.instructions+=1;goto B5910a8;
case 0x5910ab:goto L5910ab;
case 0x5910ae:c.instructions+=3;goto B5910ae;
case 0x5910b0:c.instructions+=2;goto B5910b0;
case 0x5910b3:c.instructions+=1;goto B5910b3;
case 0x5910b5:goto L5910b5;
case 0x5910b7:c.instructions+=1;goto B5910b7;
case 0x5910ba:goto L5910ba;
case 0x5910bd:c.instructions+=3;goto B5910bd;
case 0x5910bf:c.instructions+=2;goto B5910bf;
case 0x5910c2:c.instructions+=1;goto B5910c2;
case 0x5910c4:goto L5910c4;
case 0x5910c6:c.instructions+=1;goto B5910c6;
case 0x5910c9:goto L5910c9;
case 0x5910cc:c.instructions+=3;goto B5910cc;
case 0x5910ce:c.instructions+=2;goto B5910ce;
case 0x5910d1:c.instructions+=1;goto B5910d1;
case 0x5910d3:goto L5910d3;
case 0x5910d5:c.instructions+=1;goto B5910d5;
case 0x5910d8:goto L5910d8;
case 0x5910db:c.instructions+=3;goto B5910db;
case 0x5910dd:c.instructions+=2;goto B5910dd;
case 0x5910e0:c.instructions+=1;goto B5910e0;
case 0x5910e2:goto L5910e2;
case 0x5910e4:c.instructions+=1;goto B5910e4;
case 0x5910e7:goto L5910e7;
case 0x5910ea:c.instructions+=3;goto B5910ea;
case 0x5910ec:c.instructions+=2;goto B5910ec;
case 0x5910ef:c.instructions+=1;goto B5910ef;
case 0x5910f1:goto L5910f1;
case 0x5910f3:c.instructions+=1;goto B5910f3;
case 0x5910f6:goto L5910f6;
case 0x5910f9:c.instructions+=3;goto B5910f9;
case 0x5910fb:c.instructions+=2;goto B5910fb;
case 0x5910fe:c.instructions+=1;goto B5910fe;
case 0x591100:goto L591100;
case 0x591102:c.instructions+=1;goto B591102;
case 0x591105:goto L591105;
case 0x591108:c.instructions+=3;goto B591108;
case 0x59110a:c.instructions+=2;goto B59110a;
case 0x59110d:c.instructions+=1;goto B59110d;
case 0x59110f:goto L59110f;
case 0x591111:c.instructions+=1;goto B591111;
case 0x591114:goto L591114;
case 0x591117:c.instructions+=3;goto B591117;
case 0x591119:c.instructions+=2;goto B591119;
case 0x59111c:c.instructions+=1;goto B59111c;
case 0x59111e:goto L59111e;
case 0x591120:c.instructions+=1;goto B591120;
case 0x591123:goto L591123;
case 0x591130:goto L591130;
case 0x591131:c.instructions+=9;goto B591131;
case 0x591134:c.instructions+=8;goto B591134;
case 0x59113a:c.instructions+=7;goto B59113a;
case 0x59113b:c.instructions+=6;goto B59113b;
case 0x59113d:c.instructions+=5;goto B59113d;
case 0x591142:c.instructions+=4;goto B591142;
case 0x591144:c.instructions+=3;goto B591144;
case 0x591145:c.instructions+=2;goto B591145;
case 0x591149:c.instructions+=1;goto B591149;
case 0x59114b:goto L59114b;
case 0x591150:c.instructions+=1;goto B591150;
case 0x591154:goto L591154;
case 0x591157:c.instructions+=3;goto B591157;
case 0x591159:c.instructions+=2;goto B591159;
case 0x59115c:c.instructions+=1;goto B59115c;
case 0x59115e:goto L59115e;
case 0x59115f:c.instructions+=1;goto B59115f;
case 0x591163:goto L591163;
case 0x591166:c.instructions+=1;goto B591166;
case 0x591168:goto L591168;
case 0x591169:c.instructions+=1;goto B591169;
case 0x59116d:goto L59116d;
case 0x591170:c.instructions+=1;goto B591170;
case 0x591172:goto L591172;
case 0x591173:c.instructions+=1;goto B591173;
case 0x591177:goto L591177;
case 0x591179:c.instructions+=2;goto B591179;
case 0x59117c:c.instructions+=1;goto B59117c;
case 0x59117e:goto L59117e;
case 0x591183:goto L591183;
case 0x591186:c.instructions+=8;goto B591186;
case 0x591189:c.instructions+=7;goto B591189;
case 0x59118c:c.instructions+=6;goto B59118c;
case 0x59118f:c.instructions+=5;goto B59118f;
case 0x591191:c.instructions+=4;goto B591191;
case 0x591194:c.instructions+=3;goto B591194;
case 0x591197:c.instructions+=2;goto B591197;
case 0x59119a:c.instructions+=1;goto B59119a;
case 0x59119c:goto L59119c;
case 0x59119e:c.instructions+=1;goto B59119e;
case 0x5911a0:goto L5911a0;
case 0x5911a4:c.instructions+=1;goto B5911a4;
case 0x5911a6:goto L5911a6;
case 0x5911a8:c.instructions+=3;goto B5911a8;
case 0x5911ab:c.instructions+=2;goto B5911ab;
case 0x5911ac:c.instructions+=1;goto B5911ac;
case 0x5911ae:goto L5911ae;
case 0x5911b2:c.instructions+=4;goto B5911b2;
case 0x5911b3:c.instructions+=3;goto B5911b3;
case 0x5911b4:c.instructions+=2;goto B5911b4;
case 0x5911b5:c.instructions+=1;goto B5911b5;
case 0x5911c0:goto L5911c0;
case 0x5911c2:c.instructions+=1;goto B5911c2;
case 0x5911c4:goto L5911c4;
case 0x5911c6:c.instructions+=1;goto B5911c6;
case 0x5911c8:goto L5911c8;
case 0x5911ce:c.instructions+=1;goto B5911ce;
case 0x5911d0:goto L5911d0;
case 0x5911d6:goto L5911d6;
case 0x5911d8:c.instructions+=2;goto B5911d8;
case 0x5911db:c.instructions+=1;goto B5911db;
case 0x5911dd:goto L5911dd;
case 0x5911e3:c.instructions+=1;goto B5911e3;
case 0x5911e5:goto L5911e5;
case 0x5911eb:goto L5911eb;
case 0x5911ed:c.instructions+=2;goto B5911ed;
case 0x5911f1:c.instructions+=1;goto B5911f1;
case 0x5911f3:goto L5911f3;
case 0x5911f9:c.instructions+=1;goto B5911f9;
case 0x5911fb:goto L5911fb;
case 0x591201:goto L591201;
case 0x591203:c.instructions+=2;goto B591203;
case 0x591207:c.instructions+=1;goto B591207;
case 0x591209:goto L591209;
case 0x59120f:c.instructions+=1;goto B59120f;
case 0x591211:goto L591211;
case 0x591217:goto L591217;
case 0x591219:c.instructions+=2;goto B591219;
case 0x59121d:c.instructions+=1;goto B59121d;
case 0x59121f:goto L59121f;
case 0x591225:c.instructions+=1;goto B591225;
case 0x591227:goto L591227;
case 0x59122d:goto L59122d;
case 0x59122f:c.instructions+=2;goto B59122f;
case 0x591233:c.instructions+=1;goto B591233;
case 0x591235:goto L591235;
case 0x59123b:c.instructions+=1;goto B59123b;
case 0x59123d:goto L59123d;
case 0x591243:goto L591243;
case 0x591245:c.instructions+=2;goto B591245;
case 0x591249:c.instructions+=1;goto B591249;
case 0x59124b:goto L59124b;
case 0x591251:c.instructions+=1;goto B591251;
case 0x591253:goto L591253;
case 0x591259:goto L591259;
case 0x59125b:c.instructions+=2;goto B59125b;
case 0x59125f:c.instructions+=1;goto B59125f;
case 0x591261:goto L591261;
case 0x591267:c.instructions+=1;goto B591267;
case 0x591269:goto L591269;
case 0x59126f:goto L59126f;
case 0x591271:c.instructions+=2;goto B591271;
case 0x591275:c.instructions+=1;goto B591275;
case 0x591277:goto L591277;
case 0x59127d:c.instructions+=1;goto B59127d;
case 0x59127f:goto L59127f;
case 0x591285:goto L591285;
case 0x591287:c.instructions+=2;goto B591287;
case 0x59128b:c.instructions+=1;goto B59128b;
case 0x59128d:goto L59128d;
case 0x591293:c.instructions+=1;goto B591293;
case 0x591295:goto L591295;
case 0x59129b:goto L59129b;
case 0x59129d:c.instructions+=2;goto B59129d;
case 0x5912a1:c.instructions+=1;goto B5912a1;
case 0x5912a3:goto L5912a3;
case 0x5912a9:c.instructions+=1;goto B5912a9;
case 0x5912ab:goto L5912ab;
case 0x5912b1:goto L5912b1;
case 0x5912b3:c.instructions+=2;goto B5912b3;
case 0x5912b7:c.instructions+=1;goto B5912b7;
case 0x5912b9:goto L5912b9;
case 0x5912bf:c.instructions+=1;goto B5912bf;
case 0x5912c1:goto L5912c1;
case 0x5912c7:goto L5912c7;
case 0x5912c9:c.instructions+=2;goto B5912c9;
case 0x5912cd:c.instructions+=1;goto B5912cd;
case 0x5912cf:goto L5912cf;
case 0x5912d5:c.instructions+=1;goto B5912d5;
case 0x5912d7:goto L5912d7;
case 0x5912dd:goto L5912dd;
case 0x5912df:c.instructions+=2;goto B5912df;
case 0x5912e3:c.instructions+=1;goto B5912e3;
case 0x5912e5:goto L5912e5;
case 0x5912eb:c.instructions+=1;goto B5912eb;
case 0x5912ed:goto L5912ed;
case 0x5912f3:goto L5912f3;
case 0x5912f5:c.instructions+=2;goto B5912f5;
case 0x5912f9:c.instructions+=1;goto B5912f9;
case 0x5912fb:goto L5912fb;
case 0x591301:c.instructions+=1;goto B591301;
case 0x591303:goto L591303;
case 0x591309:goto L591309;
case 0x59130d:c.instructions+=3;goto B59130d;
case 0x59130e:c.instructions+=2;goto B59130e;
case 0x591311:c.instructions+=1;goto B591311;
case 0x591317:goto L591317;
case 0x591320:goto L591320;
case 0x591324:c.instructions+=5;goto B591324;
case 0x591326:c.instructions+=4;goto B591326;
case 0x59132a:c.instructions+=3;goto B59132a;
case 0x59132c:c.instructions+=2;goto B59132c;
case 0x59132f:c.instructions+=1;goto B59132f;
case 0x591331:goto L591331;
case 0x591333:c.instructions+=1;goto B591333;
case 0x591337:goto L591337;
case 0x591339:c.instructions+=5;goto B591339;
case 0x59133c:c.instructions+=4;goto B59133c;
case 0x591340:c.instructions+=3;goto B591340;
case 0x591342:c.instructions+=2;goto B591342;
case 0x591345:c.instructions+=1;goto B591345;
case 0x591347:goto L591347;
case 0x59134a:c.instructions+=1;goto B59134a;
case 0x59134b:goto L59134b;
case 0x59134f:c.instructions+=3;goto B59134f;
case 0x591351:c.instructions+=2;goto B591351;
case 0x591354:c.instructions+=1;goto B591354;
case 0x591360:goto L591360;
case 0x591364:c.instructions+=4;goto B591364;
case 0x59136a:c.instructions+=3;goto B59136a;
case 0x59136b:c.instructions+=2;goto B59136b;
case 0x59136c:c.instructions+=1;goto B59136c;
case 0x591371:goto L591371;
case 0x591374:c.instructions+=1;goto B591374;
case 0x591380:goto L591380;
case 0x591384:c.instructions+=4;goto B591384;
case 0x591385:c.instructions+=3;goto B591385;
case 0x591386:c.instructions+=2;goto B591386;
case 0x591388:c.instructions+=1;goto B591388;
case 0x59138d:goto L59138d;
case 0x591391:c.instructions+=2;goto B591391;
case 0x591392:c.instructions+=1;goto B591392;
case 0x5913a0:goto L5913a0;
case 0x5913b0:goto L5913b0;
case 0x5913b4:c.instructions+=4;goto B5913b4;
case 0x5913ba:c.instructions+=3;goto B5913ba;
case 0x5913bb:c.instructions+=2;goto B5913bb;
case 0x5913bc:c.instructions+=1;goto B5913bc;
case 0x5913c1:goto L5913c1;
case 0x5913c4:c.instructions+=1;goto B5913c4;
case 0x5913d0:goto L5913d0;
case 0x5913d4:c.instructions+=44;goto B5913d4;
case 0x5913d7:c.instructions+=43;goto B5913d7;
case 0x5913da:c.instructions+=42;goto B5913da;
case 0x5913dd:c.instructions+=41;goto B5913dd;
case 0x5913e1:c.instructions+=40;goto B5913e1;
case 0x5913e3:c.instructions+=39;goto B5913e3;
case 0x5913e5:c.instructions+=38;goto B5913e5;
case 0x5913e8:c.instructions+=37;goto B5913e8;
case 0x5913eb:c.instructions+=36;goto B5913eb;
case 0x5913ef:c.instructions+=35;goto B5913ef;
case 0x5913f2:c.instructions+=34;goto B5913f2;
case 0x5913f5:c.instructions+=33;goto B5913f5;
case 0x5913f8:c.instructions+=32;goto B5913f8;
case 0x5913fb:c.instructions+=31;goto B5913fb;
case 0x5913fe:c.instructions+=30;goto B5913fe;
case 0x591402:c.instructions+=29;goto B591402;
case 0x591405:c.instructions+=28;goto B591405;
case 0x591407:c.instructions+=27;goto B591407;
case 0x59140d:c.instructions+=26;goto B59140d;
case 0x591413:c.instructions+=25;goto B591413;
case 0x591417:c.instructions+=24;goto B591417;
case 0x59141d:c.instructions+=23;goto B59141d;
case 0x591423:c.instructions+=22;goto B591423;
case 0x591426:c.instructions+=21;goto B591426;
case 0x591429:c.instructions+=20;goto B591429;
case 0x59142c:c.instructions+=19;goto B59142c;
case 0x591430:c.instructions+=18;goto B591430;
case 0x591433:c.instructions+=17;goto B591433;
case 0x591435:c.instructions+=16;goto B591435;
case 0x59143b:c.instructions+=15;goto B59143b;
case 0x591441:c.instructions+=14;goto B591441;
case 0x591445:c.instructions+=13;goto B591445;
case 0x59144b:c.instructions+=12;goto B59144b;
case 0x591451:c.instructions+=11;goto B591451;
case 0x591454:c.instructions+=10;goto B591454;
case 0x591457:c.instructions+=9;goto B591457;
case 0x59145a:c.instructions+=8;goto B59145a;
case 0x59145d:c.instructions+=7;goto B59145d;
case 0x59145f:c.instructions+=6;goto B59145f;
case 0x591463:c.instructions+=5;goto B591463;
case 0x591469:c.instructions+=4;goto B591469;
case 0x59146f:c.instructions+=3;goto B59146f;
case 0x591475:c.instructions+=2;goto B591475;
case 0x59147b:c.instructions+=1;goto B59147b;
case 0x591480:goto L591480;
case 0x591484:c.instructions+=44;goto B591484;
case 0x591487:c.instructions+=43;goto B591487;
case 0x59148a:c.instructions+=42;goto B59148a;
case 0x59148d:c.instructions+=41;goto B59148d;
case 0x591491:c.instructions+=40;goto B591491;
case 0x591493:c.instructions+=39;goto B591493;
case 0x591495:c.instructions+=38;goto B591495;
case 0x59149b:c.instructions+=37;goto B59149b;
case 0x5914a1:c.instructions+=36;goto B5914a1;
case 0x5914a5:c.instructions+=35;goto B5914a5;
case 0x5914ab:c.instructions+=34;goto B5914ab;
case 0x5914b1:c.instructions+=33;goto B5914b1;
case 0x5914b4:c.instructions+=32;goto B5914b4;
case 0x5914b7:c.instructions+=31;goto B5914b7;
case 0x5914ba:c.instructions+=30;goto B5914ba;
case 0x5914be:c.instructions+=29;goto B5914be;
case 0x5914c1:c.instructions+=28;goto B5914c1;
case 0x5914c3:c.instructions+=27;goto B5914c3;
case 0x5914c9:c.instructions+=26;goto B5914c9;
case 0x5914cf:c.instructions+=25;goto B5914cf;
case 0x5914d3:c.instructions+=24;goto B5914d3;
case 0x5914d9:c.instructions+=23;goto B5914d9;
case 0x5914df:c.instructions+=22;goto B5914df;
case 0x5914e2:c.instructions+=21;goto B5914e2;
case 0x5914e5:c.instructions+=20;goto B5914e5;
case 0x5914e8:c.instructions+=19;goto B5914e8;
case 0x5914ec:c.instructions+=18;goto B5914ec;
case 0x5914ef:c.instructions+=17;goto B5914ef;
case 0x5914f1:c.instructions+=16;goto B5914f1;
case 0x5914f7:c.instructions+=15;goto B5914f7;
case 0x5914fd:c.instructions+=14;goto B5914fd;
case 0x591501:c.instructions+=13;goto B591501;
case 0x591507:c.instructions+=12;goto B591507;
case 0x59150d:c.instructions+=11;goto B59150d;
case 0x591510:c.instructions+=10;goto B591510;
case 0x591513:c.instructions+=9;goto B591513;
case 0x591516:c.instructions+=8;goto B591516;
case 0x591519:c.instructions+=7;goto B591519;
case 0x59151b:c.instructions+=6;goto B59151b;
case 0x59151f:c.instructions+=5;goto B59151f;
case 0x591525:c.instructions+=4;goto B591525;
case 0x59152b:c.instructions+=3;goto B59152b;
case 0x591531:c.instructions+=2;goto B591531;
case 0x591537:c.instructions+=1;goto B591537;
case 0x591540:goto L591540;
case 0x591544:c.instructions+=5;goto B591544;
case 0x591545:c.instructions+=4;goto B591545;
case 0x59154b:c.instructions+=3;goto B59154b;
case 0x59154d:c.instructions+=2;goto B59154d;
case 0x591553:c.instructions+=1;goto B591553;
case 0x591558:goto L591558;
case 0x59155e:c.instructions+=2;goto B59155e;
case 0x59155f:c.instructions+=1;goto B59155f;
case 0x591570:goto L591570;
case 0x591571:c.instructions+=14;goto B591571;
case 0x591573:c.instructions+=13;goto B591573;
case 0x591576:c.instructions+=12;goto B591576;
case 0x591579:c.instructions+=11;goto B591579;
case 0x59157a:c.instructions+=10;goto B59157a;
case 0x59157d:c.instructions+=9;goto B59157d;
case 0x59157e:c.instructions+=8;goto B59157e;
case 0x59157f:c.instructions+=7;goto B59157f;
case 0x591581:c.instructions+=6;goto B591581;
case 0x591583:c.instructions+=5;goto B591583;
case 0x591586:c.instructions+=4;goto B591586;
case 0x591587:c.instructions+=3;goto B591587;
case 0x59158b:c.instructions+=2;goto B59158b;
case 0x59158c:c.instructions+=1;goto B59158c;
case 0x591591:goto L591591;
case 0x591595:c.instructions+=12;goto B591595;
case 0x591598:c.instructions+=11;goto B591598;
case 0x59159c:c.instructions+=10;goto B59159c;
case 0x59159e:c.instructions+=9;goto B59159e;
case 0x5915a2:c.instructions+=8;goto B5915a2;
case 0x5915a4:c.instructions+=7;goto B5915a4;
case 0x5915a5:c.instructions+=6;goto B5915a5;
case 0x5915a9:c.instructions+=5;goto B5915a9;
case 0x5915ac:c.instructions+=4;goto B5915ac;
case 0x5915af:c.instructions+=3;goto B5915af;
case 0x5915b2:c.instructions+=2;goto B5915b2;
case 0x5915b3:c.instructions+=1;goto B5915b3;
case 0x5915b8:goto L5915b8;
case 0x5915bc:c.instructions+=35;goto B5915bc;
case 0x5915bf:c.instructions+=34;goto B5915bf;
case 0x5915c3:c.instructions+=33;goto B5915c3;
case 0x5915c5:c.instructions+=32;goto B5915c5;
case 0x5915c9:c.instructions+=31;goto B5915c9;
case 0x5915cc:c.instructions+=30;goto B5915cc;
case 0x5915cf:c.instructions+=29;goto B5915cf;
case 0x5915d2:c.instructions+=28;goto B5915d2;
case 0x5915d5:c.instructions+=27;goto B5915d5;
case 0x5915d8:c.instructions+=26;goto B5915d8;
case 0x5915d9:c.instructions+=25;goto B5915d9;
case 0x5915db:c.instructions+=24;goto B5915db;
case 0x5915dd:c.instructions+=23;goto B5915dd;
case 0x5915df:c.instructions+=22;goto B5915df;
case 0x5915e2:c.instructions+=21;goto B5915e2;
case 0x5915e4:c.instructions+=20;goto B5915e4;
case 0x5915e8:c.instructions+=19;goto B5915e8;
case 0x5915eb:c.instructions+=18;goto B5915eb;
case 0x5915ee:c.instructions+=17;goto B5915ee;
case 0x5915f0:c.instructions+=16;goto B5915f0;
case 0x5915f2:c.instructions+=15;goto B5915f2;
case 0x5915f4:c.instructions+=14;goto B5915f4;
case 0x5915f7:c.instructions+=13;goto B5915f7;
case 0x5915fb:c.instructions+=12;goto B5915fb;
case 0x5915fe:c.instructions+=11;goto B5915fe;
case 0x591600:c.instructions+=10;goto B591600;
case 0x591603:c.instructions+=9;goto B591603;
case 0x591605:c.instructions+=8;goto B591605;
case 0x591607:c.instructions+=7;goto B591607;
case 0x591608:c.instructions+=6;goto B591608;
case 0x59160a:c.instructions+=5;goto B59160a;
case 0x59160b:c.instructions+=4;goto B59160b;
case 0x59160d:c.instructions+=3;goto B59160d;
case 0x59160f:c.instructions+=2;goto B59160f;
case 0x591610:c.instructions+=1;goto B591610;
case 0x591620:goto L591620;
case 0x591621:c.instructions+=7;goto B591621;
case 0x591623:c.instructions+=6;goto B591623;
case 0x591626:c.instructions+=5;goto B591626;
case 0x591629:c.instructions+=4;goto B591629;
case 0x59162b:c.instructions+=3;goto B59162b;
case 0x59162e:c.instructions+=2;goto B59162e;
case 0x591633:c.instructions+=1;goto B591633;
case 0x591635:goto L591635;
case 0x59163b:c.instructions+=3;goto B59163b;
case 0x59163d:c.instructions+=2;goto B59163d;
case 0x59163e:c.instructions+=1;goto B59163e;
case 0x59163f:goto L59163f;
case 0x591642:c.instructions+=6;goto B591642;
case 0x591644:c.instructions+=5;goto B591644;
case 0x591645:c.instructions+=4;goto B591645;
case 0x591649:c.instructions+=3;goto B591649;
case 0x59164c:c.instructions+=2;goto B59164c;
case 0x59164d:c.instructions+=1;goto B59164d;
case 0x591652:goto L591652;
case 0x591656:c.instructions+=10;goto B591656;
case 0x59165a:c.instructions+=9;goto B59165a;
case 0x59165e:c.instructions+=8;goto B59165e;
case 0x591662:c.instructions+=7;goto B591662;
case 0x591666:c.instructions+=6;goto B591666;
case 0x59166a:c.instructions+=5;goto B59166a;
case 0x59166b:c.instructions+=4;goto B59166b;
case 0x59166f:c.instructions+=3;goto B59166f;
case 0x591670:c.instructions+=2;goto B591670;
case 0x591674:c.instructions+=1;goto B591674;
case 0x591679:goto L591679;
case 0x59167f:c.instructions+=6;goto B59167f;
case 0x591683:c.instructions+=5;goto B591683;
case 0x591686:c.instructions+=4;goto B591686;
case 0x591688:c.instructions+=3;goto B591688;
case 0x59168a:c.instructions+=2;goto B59168a;
case 0x59168b:c.instructions+=1;goto B59168b;
case 0x591690:goto L591690;
case 0x591691:c.instructions+=22;goto B591691;
case 0x591693:c.instructions+=21;goto B591693;
case 0x591696:c.instructions+=20;goto B591696;
case 0x591699:c.instructions+=19;goto B591699;
case 0x59169a:c.instructions+=18;goto B59169a;
case 0x59169c:c.instructions+=17;goto B59169c;
case 0x59169f:c.instructions+=16;goto B59169f;
case 0x5916a0:c.instructions+=15;goto B5916a0;
case 0x5916a3:c.instructions+=14;goto B5916a3;
case 0x5916a9:c.instructions+=13;goto B5916a9;
case 0x5916b0:c.instructions+=12;goto B5916b0;
case 0x5916b4:c.instructions+=11;goto B5916b4;
case 0x5916b5:c.instructions+=10;goto B5916b5;
case 0x5916b9:c.instructions+=9;goto B5916b9;
case 0x5916bc:c.instructions+=8;goto B5916bc;
case 0x5916be:c.instructions+=7;goto B5916be;
case 0x5916c2:c.instructions+=6;goto B5916c2;
case 0x5916c5:c.instructions+=5;goto B5916c5;
case 0x5916c6:c.instructions+=4;goto B5916c6;
case 0x5916c8:c.instructions+=3;goto B5916c8;
case 0x5916cb:c.instructions+=2;goto B5916cb;
case 0x5916cd:c.instructions+=1;goto B5916cd;
case 0x5916d2:goto L5916d2;
case 0x5916d8:c.instructions+=11;goto B5916d8;
case 0x5916dc:c.instructions+=10;goto B5916dc;
case 0x5916e0:c.instructions+=9;goto B5916e0;
case 0x5916e3:c.instructions+=8;goto B5916e3;
case 0x5916e5:c.instructions+=7;goto B5916e5;
case 0x5916e6:c.instructions+=6;goto B5916e6;
case 0x5916e7:c.instructions+=5;goto B5916e7;
case 0x5916ea:c.instructions+=4;goto B5916ea;
case 0x5916ed:c.instructions+=3;goto B5916ed;
case 0x5916f0:c.instructions+=2;goto B5916f0;
case 0x5916f1:c.instructions+=1;goto B5916f1;
case 0x5916f6:goto L5916f6;
case 0x5916fa:c.instructions+=11;goto B5916fa;
case 0x5916fe:c.instructions+=10;goto B5916fe;
case 0x5916ff:c.instructions+=9;goto B5916ff;
case 0x591702:c.instructions+=8;goto B591702;
case 0x591706:c.instructions+=7;goto B591706;
case 0x591707:c.instructions+=6;goto B591707;
case 0x59170b:c.instructions+=5;goto B59170b;
case 0x59170e:c.instructions+=4;goto B59170e;
case 0x59170f:c.instructions+=3;goto B59170f;
case 0x591710:c.instructions+=2;goto B591710;
case 0x591712:c.instructions+=1;goto B591712;
case 0x591717:goto L591717;
case 0x591719:c.instructions+=7;goto B591719;
case 0x59171d:c.instructions+=6;goto B59171d;
case 0x591721:c.instructions+=5;goto B591721;
case 0x591722:c.instructions+=4;goto B591722;
case 0x591726:c.instructions+=3;goto B591726;
case 0x591727:c.instructions+=2;goto B591727;
case 0x59172a:c.instructions+=1;goto B59172a;
case 0x59172f:goto L59172f;
case 0x591732:c.instructions+=8;goto B591732;
case 0x591738:c.instructions+=7;goto B591738;
case 0x59173b:c.instructions+=6;goto B59173b;
case 0x59173e:c.instructions+=5;goto B59173e;
case 0x591740:c.instructions+=4;goto B591740;
case 0x591743:c.instructions+=3;goto B591743;
case 0x591745:c.instructions+=2;goto B591745;
case 0x591749:c.instructions+=1;goto B591749;
case 0x59174c:goto L59174c;
case 0x591752:c.instructions+=6;goto B591752;
case 0x591754:c.instructions+=5;goto B591754;
case 0x591756:c.instructions+=4;goto B591756;
case 0x591759:c.instructions+=3;goto B591759;
case 0x59175d:c.instructions+=2;goto B59175d;
case 0x591761:c.instructions+=1;goto B591761;
case 0x591764:goto L591764;
case 0x59176a:c.instructions+=3;goto B59176a;
case 0x59176c:c.instructions+=2;goto B59176c;
case 0x59176f:c.instructions+=1;goto B59176f;
case 0x591771:goto L591771;
case 0x591773:c.instructions+=2;goto B591773;
case 0x591775:c.instructions+=1;goto B591775;
case 0x591778:goto L591778;
case 0x59177a:goto L59177a;
case 0x591780:goto L591780;
case 0x591784:c.instructions+=11;goto B591784;
case 0x591787:c.instructions+=10;goto B591787;
case 0x591789:c.instructions+=9;goto B591789;
case 0x59178c:c.instructions+=8;goto B59178c;
case 0x59178e:c.instructions+=7;goto B59178e;
case 0x591791:c.instructions+=6;goto B591791;
case 0x591794:c.instructions+=5;goto B591794;
case 0x591798:c.instructions+=4;goto B591798;
case 0x59179c:c.instructions+=3;goto B59179c;
case 0x59179d:c.instructions+=2;goto B59179d;
case 0x59179e:c.instructions+=1;goto B59179e;
case 0x5917a3:goto L5917a3;
case 0x5917a6:c.instructions+=5;goto B5917a6;
case 0x5917a9:c.instructions+=4;goto B5917a9;
case 0x5917ac:c.instructions+=3;goto B5917ac;
case 0x5917ae:c.instructions+=2;goto B5917ae;
case 0x5917b1:c.instructions+=1;goto B5917b1;
case 0x5917b3:goto L5917b3;
case 0x5917b6:c.instructions+=1;goto B5917b6;
case 0x5917b8:goto L5917b8;
case 0x5917ba:c.instructions+=6;goto B5917ba;
case 0x5917c0:c.instructions+=5;goto B5917c0;
case 0x5917c3:c.instructions+=4;goto B5917c3;
case 0x5917c6:c.instructions+=3;goto B5917c6;
case 0x5917c8:c.instructions+=2;goto B5917c8;
case 0x5917cb:c.instructions+=1;goto B5917cb;
case 0x5917cd:goto L5917cd;
case 0x5917d0:c.instructions+=1;goto B5917d0;
case 0x5917d2:goto L5917d2;
case 0x5917d4:goto L5917d4;
case 0x5917d8:c.instructions+=9;goto B5917d8;
case 0x5917d9:c.instructions+=8;goto B5917d9;
case 0x5917dd:c.instructions+=7;goto B5917dd;
case 0x5917de:c.instructions+=6;goto B5917de;
case 0x5917e2:c.instructions+=5;goto B5917e2;
case 0x5917e3:c.instructions+=4;goto B5917e3;
case 0x5917eb:c.instructions+=3;goto B5917eb;
case 0x5917f3:c.instructions+=2;goto B5917f3;
case 0x5917fb:c.instructions+=1;goto B5917fb;
case 0x591800:goto L591800;
case 0x591804:c.instructions+=27;goto B591804;
case 0x591808:c.instructions+=26;goto B591808;
case 0x59180b:c.instructions+=25;goto B59180b;
case 0x59180f:c.instructions+=24;goto B59180f;
case 0x591812:c.instructions+=23;goto B591812;
case 0x591816:c.instructions+=22;goto B591816;
case 0x591819:c.instructions+=21;goto B591819;
case 0x59181c:c.instructions+=20;goto B59181c;
case 0x591821:c.instructions+=19;goto B591821;
case 0x591823:c.instructions+=18;goto B591823;
case 0x591827:c.instructions+=17;goto B591827;
case 0x59182b:c.instructions+=16;goto B59182b;
case 0x59182d:c.instructions+=15;goto B59182d;
case 0x59182f:c.instructions+=14;goto B59182f;
case 0x591833:c.instructions+=13;goto B591833;
case 0x591836:c.instructions+=12;goto B591836;
case 0x59183a:c.instructions+=11;goto B59183a;
case 0x59183d:c.instructions+=10;goto B59183d;
case 0x59183f:c.instructions+=9;goto B59183f;
case 0x591843:c.instructions+=8;goto B591843;
case 0x591845:c.instructions+=7;goto B591845;
case 0x591847:c.instructions+=6;goto B591847;
case 0x59184b:c.instructions+=5;goto B59184b;
case 0x59184d:c.instructions+=4;goto B59184d;
case 0x591850:c.instructions+=3;goto B591850;
case 0x591852:c.instructions+=2;goto B591852;
case 0x591855:c.instructions+=1;goto B591855;
case 0x591857:goto L591857;
case 0x59185b:goto L59185b;
case 0x591861:c.instructions+=7;goto B591861;
case 0x591864:c.instructions+=6;goto B591864;
case 0x591868:c.instructions+=5;goto B591868;
case 0x59186b:c.instructions+=4;goto B59186b;
case 0x59186e:c.instructions+=3;goto B59186e;
case 0x591870:c.instructions+=2;goto B591870;
case 0x591873:c.instructions+=1;goto B591873;
case 0x591875:goto L591875;
case 0x591879:goto L591879;
case 0x59187c:c.instructions+=12;goto B59187c;
case 0x591882:c.instructions+=11;goto B591882;
case 0x591888:c.instructions+=10;goto B591888;
case 0x59188b:c.instructions+=9;goto B59188b;
case 0x59188e:c.instructions+=8;goto B59188e;
case 0x591890:c.instructions+=7;goto B591890;
case 0x591891:c.instructions+=6;goto B591891;
case 0x591894:c.instructions+=5;goto B591894;
case 0x591897:c.instructions+=4;goto B591897;
case 0x591898:c.instructions+=3;goto B591898;
case 0x59189a:c.instructions+=2;goto B59189a;
case 0x59189b:c.instructions+=1;goto B59189b;
case 0x5918a0:goto L5918a0;
case 0x5918a1:c.instructions+=18;goto B5918a1;
case 0x5918a2:c.instructions+=17;goto B5918a2;
case 0x5918a4:c.instructions+=16;goto B5918a4;
case 0x5918a5:c.instructions+=15;goto B5918a5;
case 0x5918a7:c.instructions+=14;goto B5918a7;
case 0x5918aa:c.instructions+=13;goto B5918aa;
case 0x5918ae:c.instructions+=12;goto B5918ae;
case 0x5918b1:c.instructions+=11;goto B5918b1;
case 0x5918b5:c.instructions+=10;goto B5918b5;
case 0x5918b9:c.instructions+=9;goto B5918b9;
case 0x5918bc:c.instructions+=8;goto B5918bc;
case 0x5918c0:c.instructions+=7;goto B5918c0;
case 0x5918c4:c.instructions+=6;goto B5918c4;
case 0x5918c7:c.instructions+=5;goto B5918c7;
case 0x5918ca:c.instructions+=4;goto B5918ca;
case 0x5918cd:c.instructions+=3;goto B5918cd;
case 0x5918d0:c.instructions+=2;goto B5918d0;
case 0x5918d3:c.instructions+=1;goto B5918d3;
case 0x5918d5:goto L5918d5;
case 0x5918d6:c.instructions+=3;goto B5918d6;
case 0x5918d7:c.instructions+=2;goto B5918d7;
case 0x5918d9:c.instructions+=1;goto B5918d9;
case 0x5918de:goto L5918de;
case 0x5918e1:c.instructions+=3;goto B5918e1;
case 0x5918e2:c.instructions+=2;goto B5918e2;
case 0x5918e5:c.instructions+=1;goto B5918e5;
case 0x5918ea:goto L5918ea;
case 0x5918ec:c.instructions+=3;goto B5918ec;
case 0x5918ee:c.instructions+=2;goto B5918ee;
case 0x5918f0:c.instructions+=1;goto B5918f0;
case 0x5918f2:goto L5918f2;
case 0x5918f7:c.instructions+=3;goto B5918f7;
case 0x5918fa:c.instructions+=2;goto B5918fa;
case 0x5918fc:c.instructions+=1;goto B5918fc;
case 0x591900:goto L591900;
case 0x591903:c.instructions+=17;goto B591903;
case 0x591906:c.instructions+=16;goto B591906;
case 0x591909:c.instructions+=15;goto B591909;
case 0x59190b:c.instructions+=14;goto B59190b;
case 0x59190e:c.instructions+=13;goto B59190e;
case 0x591910:c.instructions+=12;goto B591910;
case 0x591912:c.instructions+=11;goto B591912;
case 0x591914:c.instructions+=10;goto B591914;
case 0x591916:c.instructions+=9;goto B591916;
case 0x59191d:c.instructions+=8;goto B59191d;
case 0x591920:c.instructions+=7;goto B591920;
case 0x591921:c.instructions+=6;goto B591921;
case 0x591924:c.instructions+=5;goto B591924;
case 0x591927:c.instructions+=4;goto B591927;
case 0x59192b:c.instructions+=3;goto B59192b;
case 0x59192e:c.instructions+=2;goto B59192e;
case 0x591930:c.instructions+=1;goto B591930;
case 0x591932:goto L591932;
case 0x591934:c.instructions+=1;goto B591934;
case 0x591939:goto L591939;
case 0x59193a:c.instructions+=5;goto B59193a;
case 0x59193e:c.instructions+=4;goto B59193e;
case 0x59193f:c.instructions+=3;goto B59193f;
case 0x591940:c.instructions+=2;goto B591940;
case 0x591941:c.instructions+=1;goto B591941;
case 0x591942:goto L591942;
case 0x591945:c.instructions+=4;goto B591945;
case 0x591946:c.instructions+=3;goto B591946;
case 0x591947:c.instructions+=2;goto B591947;
case 0x591948:c.instructions+=1;goto B591948;
case 0x591950:goto L591950;
case 0x591954:c.instructions+=12;goto B591954;
case 0x591957:c.instructions+=11;goto B591957;
case 0x591958:c.instructions+=10;goto B591958;
case 0x59195a:c.instructions+=9;goto B59195a;
case 0x59195b:c.instructions+=8;goto B59195b;
case 0x59195d:c.instructions+=7;goto B59195d;
case 0x591960:c.instructions+=6;goto B591960;
case 0x591963:c.instructions+=5;goto B591963;
case 0x591969:c.instructions+=4;goto B591969;
case 0x59196a:c.instructions+=3;goto B59196a;
case 0x59196c:c.instructions+=2;goto B59196c;
case 0x59196f:c.instructions+=1;goto B59196f;
case 0x591971:goto L591971;
case 0x591975:c.instructions+=3;goto B591975;
case 0x591977:c.instructions+=2;goto B591977;
case 0x59197b:c.instructions+=1;goto B59197b;
case 0x59197d:goto L59197d;
case 0x591985:goto L591985;
case 0x59198b:c.instructions+=14;goto B59198b;
case 0x59198e:c.instructions+=13;goto B59198e;
case 0x591990:c.instructions+=12;goto B591990;
case 0x591996:c.instructions+=11;goto B591996;
case 0x59199c:c.instructions+=10;goto B59199c;
case 0x5919a2:c.instructions+=9;goto B5919a2;
case 0x5919a4:c.instructions+=8;goto B5919a4;
case 0x5919a8:c.instructions+=7;goto B5919a8;
case 0x5919ae:c.instructions+=6;goto B5919ae;
case 0x5919b4:c.instructions+=5;goto B5919b4;
case 0x5919b7:c.instructions+=4;goto B5919b7;
case 0x5919ba:c.instructions+=3;goto B5919ba;
case 0x5919bc:c.instructions+=2;goto B5919bc;
case 0x5919c2:c.instructions+=1;goto B5919c2;
case 0x5919c4:goto L5919c4;
case 0x5919ca:c.instructions+=2;goto B5919ca;
case 0x5919d0:c.instructions+=1;goto B5919d0;
case 0x5919d2:goto L5919d2;
case 0x5919d8:c.instructions+=1;goto B5919d8;
case 0x5919de:goto L5919de;
case 0x5919e0:c.instructions+=8;goto B5919e0;
case 0x5919e6:c.instructions+=7;goto B5919e6;
case 0x5919ec:c.instructions+=6;goto B5919ec;
case 0x5919f1:c.instructions+=5;goto B5919f1;
case 0x5919f7:c.instructions+=4;goto B5919f7;
case 0x5919f9:c.instructions+=3;goto B5919f9;
case 0x5919fb:c.instructions+=2;goto B5919fb;
case 0x5919fd:c.instructions+=1;goto B5919fd;
case 0x5919ff:goto L5919ff;
case 0x591a04:goto L591a04;
case 0x591a0a:c.instructions+=17;goto B591a0a;
case 0x591a0c:c.instructions+=16;goto B591a0c;
case 0x591a12:c.instructions+=15;goto B591a12;
case 0x591a14:c.instructions+=14;goto B591a14;
case 0x591a17:c.instructions+=13;goto B591a17;
case 0x591a1d:c.instructions+=12;goto B591a1d;
case 0x591a23:c.instructions+=11;goto B591a23;
case 0x591a25:c.instructions+=10;goto B591a25;
case 0x591a28:c.instructions+=9;goto B591a28;
case 0x591a2e:c.instructions+=8;goto B591a2e;
case 0x591a30:c.instructions+=7;goto B591a30;
case 0x591a33:c.instructions+=6;goto B591a33;
case 0x591a35:c.instructions+=5;goto B591a35;
case 0x591a37:c.instructions+=4;goto B591a37;
case 0x591a39:c.instructions+=3;goto B591a39;
case 0x591a3b:c.instructions+=2;goto B591a3b;
case 0x591a3e:c.instructions+=1;goto B591a3e;
case 0x591a40:goto L591a40;
case 0x591a42:c.instructions+=1;goto B591a42;
case 0x591a44:goto L591a44;
case 0x591a46:goto L591a46;
case 0x591a49:c.instructions+=1;goto B591a49;
case 0x591a4b:goto L591a4b;
case 0x591a4d:c.instructions+=2;goto B591a4d;
case 0x591a50:c.instructions+=1;goto B591a50;
case 0x591a52:goto L591a52;
case 0x591a58:c.instructions+=4;goto B591a58;
case 0x591a5a:c.instructions+=3;goto B591a5a;
case 0x591a5d:c.instructions+=2;goto B591a5d;
case 0x591a60:c.instructions+=1;goto B591a60;
case 0x591a62:goto L591a62;
case 0x591a68:c.instructions+=7;goto B591a68;
case 0x591a6a:c.instructions+=6;goto B591a6a;
case 0x591a6d:c.instructions+=5;goto B591a6d;
case 0x591a70:c.instructions+=4;goto B591a70;
case 0x591a73:c.instructions+=3;goto B591a73;
case 0x591a77:c.instructions+=2;goto B591a77;
case 0x591a78:c.instructions+=1;goto B591a78;
case 0x591a7d:goto L591a7d;
case 0x591a83:c.instructions+=9;goto B591a83;
case 0x591a87:c.instructions+=8;goto B591a87;
case 0x591a8b:c.instructions+=7;goto B591a8b;
case 0x591a8c:c.instructions+=6;goto B591a8c;
case 0x591a8f:c.instructions+=5;goto B591a8f;
case 0x591a93:c.instructions+=4;goto B591a93;
case 0x591a99:c.instructions+=3;goto B591a99;
case 0x591a9d:c.instructions+=2;goto B591a9d;
case 0x591aa1:c.instructions+=1;goto B591aa1;
case 0x591aa6:goto L591aa6;
case 0x591aa9:goto L591aa9;
case 0x591aad:c.instructions+=3;goto B591aad;
case 0x591aae:c.instructions+=2;goto B591aae;
case 0x591ab0:c.instructions+=1;goto B591ab0;
case 0x591ab5:goto L591ab5;
case 0x591ab9:c.instructions+=5;goto B591ab9;
case 0x591aba:c.instructions+=4;goto B591aba;
case 0x591abb:c.instructions+=3;goto B591abb;
case 0x591abc:c.instructions+=2;goto B591abc;
case 0x591abf:c.instructions+=1;goto B591abf;
case 0x591ad0:goto L591ad0;
case 0x591ad1:c.instructions+=19;goto B591ad1;
case 0x591ad3:c.instructions+=18;goto B591ad3;
case 0x591ad6:c.instructions+=17;goto B591ad6;
case 0x591ad9:c.instructions+=16;goto B591ad9;
case 0x591adc:c.instructions+=15;goto B591adc;
case 0x591add:c.instructions+=14;goto B591add;
case 0x591adf:c.instructions+=13;goto B591adf;
case 0x591ae2:c.instructions+=12;goto B591ae2;
case 0x591ae4:c.instructions+=11;goto B591ae4;
case 0x591ae8:c.instructions+=10;goto B591ae8;
case 0x591aee:c.instructions+=9;goto B591aee;
case 0x591af1:c.instructions+=8;goto B591af1;
case 0x591af4:c.instructions+=7;goto B591af4;
case 0x591af7:c.instructions+=6;goto B591af7;
case 0x591afb:c.instructions+=5;goto B591afb;
case 0x591aff:c.instructions+=4;goto B591aff;
case 0x591b00:c.instructions+=3;goto B591b00;
case 0x591b01:c.instructions+=2;goto B591b01;
case 0x591b04:c.instructions+=1;goto B591b04;
case 0x591b09:goto L591b09;
case 0x591b0d:c.instructions+=12;goto B591b0d;
case 0x591b10:c.instructions+=11;goto B591b10;
case 0x591b14:c.instructions+=10;goto B591b14;
case 0x591b16:c.instructions+=9;goto B591b16;
case 0x591b1a:c.instructions+=8;goto B591b1a;
case 0x591b1d:c.instructions+=7;goto B591b1d;
case 0x591b21:c.instructions+=6;goto B591b21;
case 0x591b24:c.instructions+=5;goto B591b24;
case 0x591b28:c.instructions+=4;goto B591b28;
case 0x591b2e:c.instructions+=3;goto B591b2e;
case 0x591b30:c.instructions+=2;goto B591b30;
case 0x591b33:c.instructions+=1;goto B591b33;
case 0x591b35:goto L591b35;
case 0x591b38:c.instructions+=7;goto B591b38;
case 0x591b3b:c.instructions+=6;goto B591b3b;
case 0x591b3e:c.instructions+=5;goto B591b3e;
case 0x591b42:c.instructions+=4;goto B591b42;
case 0x591b44:c.instructions+=3;goto B591b44;
case 0x591b47:c.instructions+=2;goto B591b47;
case 0x591b49:c.instructions+=1;goto B591b49;
case 0x591b4b:goto L591b4b;
case 0x591b4e:c.instructions+=4;goto B591b4e;
case 0x591b4f:c.instructions+=3;goto B591b4f;
case 0x591b51:c.instructions+=2;goto B591b51;
case 0x591b52:c.instructions+=1;goto B591b52;
case 0x591b55:goto L591b55;
case 0x591b57:c.instructions+=4;goto B591b57;
case 0x591b58:c.instructions+=3;goto B591b58;
case 0x591b5a:c.instructions+=2;goto B591b5a;
case 0x591b5b:c.instructions+=1;goto B591b5b;
case 0x591b5e:goto L591b5e;
case 0x591b60:c.instructions+=4;goto B591b60;
case 0x591b61:c.instructions+=3;goto B591b61;
case 0x591b63:c.instructions+=2;goto B591b63;
case 0x591b64:c.instructions+=1;goto B591b64;
case 0x591b70:goto L591b70;
case 0x591b71:c.instructions+=19;goto B591b71;
case 0x591b73:c.instructions+=18;goto B591b73;
case 0x591b76:c.instructions+=17;goto B591b76;
case 0x591b79:c.instructions+=16;goto B591b79;
case 0x591b7c:c.instructions+=15;goto B591b7c;
case 0x591b7e:c.instructions+=14;goto B591b7e;
case 0x591b81:c.instructions+=13;goto B591b81;
case 0x591b82:c.instructions+=12;goto B591b82;
case 0x591b86:c.instructions+=11;goto B591b86;
case 0x591b88:c.instructions+=10;goto B591b88;
case 0x591b8b:c.instructions+=9;goto B591b8b;
case 0x591b8f:c.instructions+=8;goto B591b8f;
case 0x591b95:c.instructions+=7;goto B591b95;
case 0x591b98:c.instructions+=6;goto B591b98;
case 0x591b9b:c.instructions+=5;goto B591b9b;
case 0x591b9e:c.instructions+=4;goto B591b9e;
case 0x591ba1:c.instructions+=3;goto B591ba1;
case 0x591ba4:c.instructions+=2;goto B591ba4;
case 0x591ba5:c.instructions+=1;goto B591ba5;
case 0x591baa:goto L591baa;
case 0x591bae:c.instructions+=12;goto B591bae;
case 0x591bb2:c.instructions+=11;goto B591bb2;
case 0x591bb5:c.instructions+=10;goto B591bb5;
case 0x591bb7:c.instructions+=9;goto B591bb7;
case 0x591bbb:c.instructions+=8;goto B591bbb;
case 0x591bbf:c.instructions+=7;goto B591bbf;
case 0x591bc2:c.instructions+=6;goto B591bc2;
case 0x591bc6:c.instructions+=5;goto B591bc6;
case 0x591bca:c.instructions+=4;goto B591bca;
case 0x591bcd:c.instructions+=3;goto B591bcd;
case 0x591bcf:c.instructions+=2;goto B591bcf;
case 0x591bd0:c.instructions+=1;goto B591bd0;
case 0x591be0:goto L591be0;
case 0x591be1:c.instructions+=25;goto B591be1;
case 0x591be3:c.instructions+=24;goto B591be3;
case 0x591be6:c.instructions+=23;goto B591be6;
case 0x591be9:c.instructions+=22;goto B591be9;
case 0x591bec:c.instructions+=21;goto B591bec;
case 0x591bed:c.instructions+=20;goto B591bed;
case 0x591bef:c.instructions+=19;goto B591bef;
case 0x591bf2:c.instructions+=18;goto B591bf2;
case 0x591bf5:c.instructions+=17;goto B591bf5;
case 0x591bfb:c.instructions+=16;goto B591bfb;
case 0x591bfc:c.instructions+=15;goto B591bfc;
case 0x591bfe:c.instructions+=14;goto B591bfe;
case 0x591c00:c.instructions+=13;goto B591c00;
case 0x591c04:c.instructions+=12;goto B591c04;
case 0x591c08:c.instructions+=11;goto B591c08;
case 0x591c0b:c.instructions+=10;goto B591c0b;
case 0x591c0e:c.instructions+=9;goto B591c0e;
case 0x591c11:c.instructions+=8;goto B591c11;
case 0x591c15:c.instructions+=7;goto B591c15;
case 0x591c19:c.instructions+=6;goto B591c19;
case 0x591c1c:c.instructions+=5;goto B591c1c;
case 0x591c1d:c.instructions+=4;goto B591c1d;
case 0x591c1e:c.instructions+=3;goto B591c1e;
case 0x591c21:c.instructions+=2;goto B591c21;
case 0x591c25:c.instructions+=1;goto B591c25;
case 0x591c2a:goto L591c2a;
case 0x591c2e:c.instructions+=17;goto B591c2e;
case 0x591c32:c.instructions+=16;goto B591c32;
case 0x591c36:c.instructions+=15;goto B591c36;
case 0x591c39:c.instructions+=14;goto B591c39;
case 0x591c3b:c.instructions+=13;goto B591c3b;
case 0x591c3f:c.instructions+=12;goto B591c3f;
case 0x591c43:c.instructions+=11;goto B591c43;
case 0x591c45:c.instructions+=10;goto B591c45;
case 0x591c46:c.instructions+=9;goto B591c46;
case 0x591c4a:c.instructions+=8;goto B591c4a;
case 0x591c4e:c.instructions+=7;goto B591c4e;
case 0x591c4f:c.instructions+=6;goto B591c4f;
case 0x591c53:c.instructions+=5;goto B591c53;
case 0x591c57:c.instructions+=4;goto B591c57;
case 0x591c5b:c.instructions+=3;goto B591c5b;
case 0x591c5f:c.instructions+=2;goto B591c5f;
case 0x591c63:c.instructions+=1;goto B591c63;
case 0x591c68:goto L591c68;
case 0x591c6c:c.instructions+=30;goto B591c6c;
case 0x591c70:c.instructions+=29;goto B591c70;
case 0x591c74:c.instructions+=28;goto B591c74;
case 0x591c77:c.instructions+=27;goto B591c77;
case 0x591c7b:c.instructions+=26;goto B591c7b;
case 0x591c7f:c.instructions+=25;goto B591c7f;
case 0x591c83:c.instructions+=24;goto B591c83;
case 0x591c84:c.instructions+=23;goto B591c84;
case 0x591c85:c.instructions+=22;goto B591c85;
case 0x591c89:c.instructions+=21;goto B591c89;
case 0x591c8b:c.instructions+=20;goto B591c8b;
case 0x591c8f:c.instructions+=19;goto B591c8f;
case 0x591c93:c.instructions+=18;goto B591c93;
case 0x591c97:c.instructions+=17;goto B591c97;
case 0x591c9b:c.instructions+=16;goto B591c9b;
case 0x591c9f:c.instructions+=15;goto B591c9f;
case 0x591ca3:c.instructions+=14;goto B591ca3;
case 0x591ca7:c.instructions+=13;goto B591ca7;
case 0x591cab:c.instructions+=12;goto B591cab;
case 0x591caf:c.instructions+=11;goto B591caf;
case 0x591cb3:c.instructions+=10;goto B591cb3;
case 0x591cb7:c.instructions+=9;goto B591cb7;
case 0x591cbb:c.instructions+=8;goto B591cbb;
case 0x591cbf:c.instructions+=7;goto B591cbf;
case 0x591cc1:c.instructions+=6;goto B591cc1;
case 0x591cc3:c.instructions+=5;goto B591cc3;
case 0x591cc6:c.instructions+=4;goto B591cc6;
case 0x591cc9:c.instructions+=3;goto B591cc9;
case 0x591ccb:c.instructions+=2;goto B591ccb;
case 0x591ccc:c.instructions+=1;goto B591ccc;
case 0x591cd0:goto L591cd0;
case 0x591cd1:c.instructions+=8;goto B591cd1;
case 0x591cd2:c.instructions+=7;goto B591cd2;
case 0x591cd4:c.instructions+=6;goto B591cd4;
case 0x591cd5:c.instructions+=5;goto B591cd5;
case 0x591cd7:c.instructions+=4;goto B591cd7;
case 0x591cdd:c.instructions+=3;goto B591cdd;
case 0x591ce3:c.instructions+=2;goto B591ce3;
case 0x591ce9:c.instructions+=1;goto B591ce9;
case 0x591cee:goto L591cee;
case 0x591cf4:c.instructions+=4;goto B591cf4;
case 0x591cfa:c.instructions+=3;goto B591cfa;
case 0x591d00:c.instructions+=2;goto B591d00;
case 0x591d06:c.instructions+=1;goto B591d06;
case 0x591d0b:goto L591d0b;
case 0x591d11:c.instructions+=4;goto B591d11;
case 0x591d17:c.instructions+=3;goto B591d17;
case 0x591d19:c.instructions+=2;goto B591d19;
case 0x591d1d:c.instructions+=1;goto B591d1d;
case 0x591d1f:goto L591d1f;
case 0x591d23:c.instructions+=4;goto B591d23;
case 0x591d29:c.instructions+=3;goto B591d29;
case 0x591d2f:c.instructions+=2;goto B591d2f;
case 0x591d35:c.instructions+=1;goto B591d35;
case 0x591d3a:goto L591d3a;
case 0x591d3b:c.instructions+=5;goto B591d3b;
case 0x591d41:c.instructions+=4;goto B591d41;
case 0x591d4b:c.instructions+=3;goto B591d4b;
case 0x591d4c:c.instructions+=2;goto B591d4c;
case 0x591d4d:c.instructions+=1;goto B591d4d;
case 0x591d4e:goto L591d4e;
case 0x591d4f:c.instructions+=5;goto B591d4f;
case 0x591d59:c.instructions+=4;goto B591d59;
case 0x591d63:c.instructions+=3;goto B591d63;
case 0x591d64:c.instructions+=2;goto B591d64;
case 0x591d65:c.instructions+=1;goto B591d65;
case 0x591d70:goto L591d70;
case 0x591d76:c.instructions+=6;goto B591d76;
case 0x591d7b:c.instructions+=5;goto B591d7b;
case 0x591d7d:c.instructions+=4;goto B591d7d;
case 0x591d80:c.instructions+=3;goto B591d80;
case 0x591d83:c.instructions+=2;goto B591d83;
case 0x591d86:c.instructions+=1;goto B591d86;
case 0x591d90:goto L591d90;
case 0x591d91:c.instructions+=7;goto B591d91;
case 0x591d92:c.instructions+=6;goto B591d92;
case 0x591d94:c.instructions+=5;goto B591d94;
case 0x591d97:c.instructions+=4;goto B591d97;
case 0x591d9a:c.instructions+=3;goto B591d9a;
case 0x591d9b:c.instructions+=2;goto B591d9b;
case 0x591d9c:c.instructions+=1;goto B591d9c;
case 0x591da1:goto L591da1;
case 0x591da8:c.instructions+=11;goto B591da8;
case 0x591dab:c.instructions+=10;goto B591dab;
case 0x591dae:c.instructions+=9;goto B591dae;
case 0x591db2:c.instructions+=8;goto B591db2;
case 0x591db5:c.instructions+=7;goto B591db5;
case 0x591db6:c.instructions+=6;goto B591db6;
case 0x591dba:c.instructions+=5;goto B591dba;
case 0x591dc0:c.instructions+=4;goto B591dc0;
case 0x591dc6:c.instructions+=3;goto B591dc6;
case 0x591dc8:c.instructions+=2;goto B591dc8;
case 0x591dcb:c.instructions+=1;goto B591dcb;
case 0x591dcd:goto L591dcd;
case 0x591dd3:c.instructions+=2;goto B591dd3;
case 0x591dd5:c.instructions+=1;goto B591dd5;
case 0x591dd7:goto L591dd7;
case 0x591dd8:c.instructions+=1;goto B591dd8;
case 0x591de0:goto L591de0;
case 0x591de1:c.instructions+=11;goto B591de1;
case 0x591de3:c.instructions+=10;goto B591de3;
case 0x591de6:c.instructions+=9;goto B591de6;
case 0x591de9:c.instructions+=8;goto B591de9;
case 0x591dea:c.instructions+=7;goto B591dea;
case 0x591deb:c.instructions+=6;goto B591deb;
case 0x591ded:c.instructions+=5;goto B591ded;
case 0x591df3:c.instructions+=4;goto B591df3;
case 0x591df5:c.instructions+=3;goto B591df5;
case 0x591df7:c.instructions+=2;goto B591df7;
case 0x591df8:c.instructions+=1;goto B591df8;
case 0x591dfe:goto L591dfe;
case 0x591e01:c.instructions+=10;goto B591e01;
case 0x591e04:c.instructions+=9;goto B591e04;
case 0x591e08:c.instructions+=8;goto B591e08;
case 0x591e0b:c.instructions+=7;goto B591e0b;
case 0x591e0f:c.instructions+=6;goto B591e0f;
case 0x591e13:c.instructions+=5;goto B591e13;
case 0x591e19:c.instructions+=4;goto B591e19;
case 0x591e1f:c.instructions+=3;goto B591e1f;
case 0x591e21:c.instructions+=2;goto B591e21;
case 0x591e24:c.instructions+=1;goto B591e24;
case 0x591e26:goto L591e26;
case 0x591e2a:c.instructions+=11;goto B591e2a;
case 0x591e2c:c.instructions+=10;goto B591e2c;
case 0x591e30:c.instructions+=9;goto B591e30;
case 0x591e32:c.instructions+=8;goto B591e32;
case 0x591e36:c.instructions+=7;goto B591e36;
case 0x591e38:c.instructions+=6;goto B591e38;
case 0x591e3c:c.instructions+=5;goto B591e3c;
case 0x591e40:c.instructions+=4;goto B591e40;
case 0x591e42:c.instructions+=3;goto B591e42;
case 0x591e46:c.instructions+=2;goto B591e46;
case 0x591e4a:c.instructions+=1;goto B591e4a;
case 0x591e4e:goto L591e4e;
case 0x591e54:c.instructions+=2;goto B591e54;
case 0x591e55:c.instructions+=1;goto B591e55;
case 0x591e5a:goto L591e5a;
case 0x591e5e:c.instructions+=12;goto B591e5e;
case 0x591e62:c.instructions+=11;goto B591e62;
case 0x591e65:c.instructions+=10;goto B591e65;
case 0x591e69:c.instructions+=9;goto B591e69;
case 0x591e6d:c.instructions+=8;goto B591e6d;
case 0x591e6f:c.instructions+=7;goto B591e6f;
case 0x591e73:c.instructions+=6;goto B591e73;
case 0x591e77:c.instructions+=5;goto B591e77;
case 0x591e79:c.instructions+=4;goto B591e79;
case 0x591e7f:c.instructions+=3;goto B591e7f;
case 0x591e81:c.instructions+=2;goto B591e81;
case 0x591e84:c.instructions+=1;goto B591e84;
case 0x591e8a:goto L591e8a;
case 0x591e8e:c.instructions+=24;goto B591e8e;
case 0x591e92:c.instructions+=23;goto B591e92;
case 0x591e96:c.instructions+=22;goto B591e96;
case 0x591e9a:c.instructions+=21;goto B591e9a;
case 0x591e9c:c.instructions+=20;goto B591e9c;
case 0x591e9e:c.instructions+=19;goto B591e9e;
case 0x591ea1:c.instructions+=18;goto B591ea1;
case 0x591ea4:c.instructions+=17;goto B591ea4;
case 0x591ea7:c.instructions+=16;goto B591ea7;
case 0x591ead:c.instructions+=15;goto B591ead;
case 0x591eb3:c.instructions+=14;goto B591eb3;
case 0x591eb9:c.instructions+=13;goto B591eb9;
case 0x591ebf:c.instructions+=12;goto B591ebf;
case 0x591ec5:c.instructions+=11;goto B591ec5;
case 0x591ecb:c.instructions+=10;goto B591ecb;
case 0x591ed0:c.instructions+=9;goto B591ed0;
case 0x591ed6:c.instructions+=8;goto B591ed6;
case 0x591edc:c.instructions+=7;goto B591edc;
case 0x591edd:c.instructions+=6;goto B591edd;
case 0x591ede:c.instructions+=5;goto B591ede;
case 0x591ee4:c.instructions+=4;goto B591ee4;
case 0x591eea:c.instructions+=3;goto B591eea;
case 0x591ef0:c.instructions+=2;goto B591ef0;
case 0x591ef6:c.instructions+=1;goto B591ef6;
case 0x591efb:goto L591efb;
case 0x591efe:c.instructions+=8;goto B591efe;
case 0x591f05:c.instructions+=7;goto B591f05;
case 0x591f0b:c.instructions+=6;goto B591f0b;
case 0x591f0c:c.instructions+=5;goto B591f0c;
case 0x591f0d:c.instructions+=4;goto B591f0d;
case 0x591f0e:c.instructions+=3;goto B591f0e;
case 0x591f10:c.instructions+=2;goto B591f10;
case 0x591f11:c.instructions+=1;goto B591f11;
case 0x591f12:goto L591f12;
case 0x591f14:c.instructions+=3;goto B591f14;
case 0x591f1b:c.instructions+=2;goto B591f1b;
case 0x591f1c:c.instructions+=1;goto B591f1c;
case 0x591f21:goto L591f21;
case 0x591f25:c.instructions+=4;goto B591f25;
case 0x591f27:c.instructions+=3;goto B591f27;
case 0x591f2e:c.instructions+=2;goto B591f2e;
case 0x591f2f:c.instructions+=1;goto B591f2f;
case 0x591f34:goto L591f34;
case 0x591f38:c.instructions+=24;goto B591f38;
case 0x591f3c:c.instructions+=23;goto B591f3c;
case 0x591f3e:c.instructions+=22;goto B591f3e;
case 0x591f40:c.instructions+=21;goto B591f40;
case 0x591f42:c.instructions+=20;goto B591f42;
case 0x591f45:c.instructions+=19;goto B591f45;
case 0x591f48:c.instructions+=18;goto B591f48;
case 0x591f4b:c.instructions+=17;goto B591f4b;
case 0x591f4d:c.instructions+=16;goto B591f4d;
case 0x591f53:c.instructions+=15;goto B591f53;
case 0x591f59:c.instructions+=14;goto B591f59;
case 0x591f5f:c.instructions+=13;goto B591f5f;
case 0x591f65:c.instructions+=12;goto B591f65;
case 0x591f6b:c.instructions+=11;goto B591f6b;
case 0x591f71:c.instructions+=10;goto B591f71;
case 0x591f76:c.instructions+=9;goto B591f76;
case 0x591f7c:c.instructions+=8;goto B591f7c;
case 0x591f82:c.instructions+=7;goto B591f82;
case 0x591f83:c.instructions+=6;goto B591f83;
case 0x591f84:c.instructions+=5;goto B591f84;
case 0x591f8a:c.instructions+=4;goto B591f8a;
case 0x591f90:c.instructions+=3;goto B591f90;
case 0x591f96:c.instructions+=2;goto B591f96;
case 0x591f9c:c.instructions+=1;goto B591f9c;
case 0x591fa1:goto L591fa1;
case 0x591fa4:c.instructions+=1;goto B591fa4;
case 0x591fab:goto L591fab;
case 0x591fac:c.instructions+=6;goto B591fac;
case 0x591fb2:c.instructions+=5;goto B591fb2;
case 0x591fb3:c.instructions+=4;goto B591fb3;
case 0x591fb4:c.instructions+=3;goto B591fb4;
case 0x591fb6:c.instructions+=2;goto B591fb6;
case 0x591fb7:c.instructions+=1;goto B591fb7;
case 0x591fc0:goto L591fc0;
case 0x591fc1:c.instructions+=6;goto B591fc1;
case 0x591fc3:c.instructions+=5;goto B591fc3;
case 0x591fc6:c.instructions+=4;goto B591fc6;
case 0x591fc9:c.instructions+=3;goto B591fc9;
case 0x591fca:c.instructions+=2;goto B591fca;
case 0x591fcc:c.instructions+=1;goto B591fcc;
case 0x591fd1:goto L591fd1;
case 0x591fd2:c.instructions+=3;goto B591fd2;
case 0x591fd6:c.instructions+=2;goto B591fd6;
case 0x591fd7:c.instructions+=1;goto B591fd7;
case 0x591fdc:goto L591fdc;
case 0x591fdf:c.instructions+=10;goto B591fdf;
case 0x591fe1:c.instructions+=9;goto B591fe1;
case 0x591fe5:c.instructions+=8;goto B591fe5;
case 0x591fe8:c.instructions+=7;goto B591fe8;
case 0x591fe9:c.instructions+=6;goto B591fe9;
case 0x591fed:c.instructions+=5;goto B591fed;
case 0x591fee:c.instructions+=4;goto B591fee;
case 0x591ff2:c.instructions+=3;goto B591ff2;
case 0x591ffa:c.instructions+=2;goto B591ffa;
case 0x591ffd:c.instructions+=1;goto B591ffd;
default:missing_instruction(c.pc);}
B591000:L591000:{c.instructions+=3;NFSU2_TR(0x591000);
u8 U[4];
w4(U+0,u32(0x590c80ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B591005:{NFSU2_TR(0x591005);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B591007:{NFSU2_TR(0x591007);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x59100cull));
TAIL_STATIC(0x58a0e0u,58a);
}
B59100c:L59100c:{c.instructions+=3;NFSU2_TR(0x59100c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B59100f:{NFSU2_TR(0x59100f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B591010:{NFSU2_TR(0x591010);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x591015ull));
TAIL_STATIC(0x744410u,744);
}
B591015:L591015:{c.instructions+=3;NFSU2_TR(0x591015);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B591018:{NFSU2_TR(0x591018);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B59101a:{NFSU2_TR(0x59101a);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L591028;}}
}
B59101c:L59101c:{c.instructions+=2;NFSU2_TR(0x59101c);
__builtin_memmove((R+4),(R+24),4);
}
B59101e:{NFSU2_TR(0x59101e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x591023ull));
TAIL_STATIC(0x58f2a0u,58f);
}
B591023:L591023:{c.instructions+=3;NFSU2_TR(0x591023);
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
B591026:{NFSU2_TR(0x591026);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B591027:{NFSU2_TR(0x591027);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B591028:L591028:{c.instructions+=3;NFSU2_TR(0x591028);
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
B59102a:{NFSU2_TR(0x59102a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B59102b:{NFSU2_TR(0x59102b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B591030:L591030:{c.instructions+=1;NFSU2_TR(0x591030);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x591035ull));
TAIL_STATIC(0x58a0e0u,58a);
}
B591035:L591035:{c.instructions+=2;NFSU2_TR(0x591035);
__builtin_memmove((R+4),(R+0),4);
}
B591037:{NFSU2_TR(0x591037);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x59103cull));
TAIL_STATIC(0x588d40u,588);
}
B59103c:L59103c:{c.instructions+=2;NFSU2_TR(0x59103c);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B59103e:{NFSU2_TR(0x59103e);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L591065;}}
}
B591040:L591040:{c.instructions+=2;NFSU2_TR(0x591040);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B591042:{NFSU2_TR(0x591042);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x591047ull));
TAIL_STATIC(0x58f740u,58f);
}
B591047:L591047:{c.instructions+=3;NFSU2_TR(0x591047);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B59104a:{NFSU2_TR(0x59104a);
__builtin_memmove((R+4),(R+0),4);
}
B59104c:{NFSU2_TR(0x59104c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x591051ull));
TAIL_STATIC(0x5907f0u,590);
}
B591051:L591051:{c.instructions+=2;NFSU2_TR(0x591051);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B591053:{NFSU2_TR(0x591053);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L591065;}}
}
B591055:L591055:{c.instructions+=1;NFSU2_TR(0x591055);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x59105aull));
TAIL_STATIC(0x58f6d0u,58f);
}
B59105a:L59105a:{c.instructions+=2;NFSU2_TR(0x59105a);
__builtin_memmove((R+4),(R+0),4);
}
B59105c:{NFSU2_TR(0x59105c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x591061ull));
TAIL_STATIC(0x590ff0u,590);
}
B591061:L591061:{c.instructions+=2;NFSU2_TR(0x591061);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B591063:{NFSU2_TR(0x591063);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L591069;}}
}
B591065:L591065:{c.instructions+=2;NFSU2_TR(0x591065);
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
B591068:{NFSU2_TR(0x591068);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B591069:L591069:{c.instructions+=2;NFSU2_TR(0x591069);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59106b:{NFSU2_TR(0x59106b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x591070ull));
TAIL_STATIC(0x58a140u,58a);
}
B591070:L591070:{c.instructions+=1;NFSU2_TR(0x591070);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x591075ull));
TAIL_STATIC(0x58f230u,58f);
}
B591075:L591075:{c.instructions+=1;NFSU2_TR(0x591075);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x59107aull));
TAIL_STATIC(0x58b9a0u,58b);
}
B59107a:L59107a:{c.instructions+=2;NFSU2_TR(0x59107a);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59107c:{NFSU2_TR(0x59107c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x591081ull));
TAIL_STATIC(0x58b940u,58b);
}
B591081:L591081:{c.instructions+=3;NFSU2_TR(0x591081);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B591084:{NFSU2_TR(0x591084);
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
B591086:{NFSU2_TR(0x591086);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B591090:L591090:{c.instructions+=6;NFSU2_TR(0x591090);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B591096:{NFSU2_TR(0x591096);
{u32 ea_=u32(r4(R+4)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B591099:{NFSU2_TR(0x591099);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B59109f:{NFSU2_TR(0x59109f);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5910a1:{NFSU2_TR(0x5910a1);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5910a4:{NFSU2_TR(0x5910a4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5910ab;}}
}
B5910a6:L5910a6:{c.instructions+=2;NFSU2_TR(0x5910a6);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5910a8:{NFSU2_TR(0x5910a8);
{u32 ea_=u32(r4(R+4)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5910ab:L5910ab:{c.instructions+=4;NFSU2_TR(0x5910ab);
{u32 ea_=u32(r4(R+4)+u32(20u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B5910ae:{NFSU2_TR(0x5910ae);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5910b0:{NFSU2_TR(0x5910b0);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5910b3:{NFSU2_TR(0x5910b3);
if(r1(R+514)){{goto L5910ba;}}
}
B5910b5:L5910b5:{c.instructions+=2;NFSU2_TR(0x5910b5);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5910b7:{NFSU2_TR(0x5910b7);
{u32 ea_=u32(r4(R+4)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5910ba:L5910ba:{c.instructions+=4;NFSU2_TR(0x5910ba);
{u32 ea_=u32(r4(R+4)+u32(24u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B5910bd:{NFSU2_TR(0x5910bd);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5910bf:{NFSU2_TR(0x5910bf);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5910c2:{NFSU2_TR(0x5910c2);
if(r1(R+514)){{goto L5910c9;}}
}
B5910c4:L5910c4:{c.instructions+=2;NFSU2_TR(0x5910c4);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5910c6:{NFSU2_TR(0x5910c6);
{u32 ea_=u32(r4(R+4)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5910c9:L5910c9:{c.instructions+=4;NFSU2_TR(0x5910c9);
{u32 ea_=u32(r4(R+4)+u32(28u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B5910cc:{NFSU2_TR(0x5910cc);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5910ce:{NFSU2_TR(0x5910ce);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5910d1:{NFSU2_TR(0x5910d1);
if(r1(R+514)){{goto L5910d8;}}
}
B5910d3:L5910d3:{c.instructions+=2;NFSU2_TR(0x5910d3);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5910d5:{NFSU2_TR(0x5910d5);
{u32 ea_=u32(r4(R+4)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5910d8:L5910d8:{c.instructions+=4;NFSU2_TR(0x5910d8);
{u32 ea_=u32(r4(R+4)+u32(32u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B5910db:{NFSU2_TR(0x5910db);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5910dd:{NFSU2_TR(0x5910dd);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5910e0:{NFSU2_TR(0x5910e0);
if(r1(R+514)){{goto L5910e7;}}
}
B5910e2:L5910e2:{c.instructions+=2;NFSU2_TR(0x5910e2);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5910e4:{NFSU2_TR(0x5910e4);
{u32 ea_=u32(r4(R+4)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5910e7:L5910e7:{c.instructions+=4;NFSU2_TR(0x5910e7);
{u32 ea_=u32(r4(R+4)+u32(36u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B5910ea:{NFSU2_TR(0x5910ea);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5910ec:{NFSU2_TR(0x5910ec);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5910ef:{NFSU2_TR(0x5910ef);
if(r1(R+514)){{goto L5910f6;}}
}
B5910f1:L5910f1:{c.instructions+=2;NFSU2_TR(0x5910f1);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5910f3:{NFSU2_TR(0x5910f3);
{u32 ea_=u32(r4(R+4)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5910f6:L5910f6:{c.instructions+=4;NFSU2_TR(0x5910f6);
{u32 ea_=u32(r4(R+4)+u32(40u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B5910f9:{NFSU2_TR(0x5910f9);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5910fb:{NFSU2_TR(0x5910fb);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5910fe:{NFSU2_TR(0x5910fe);
if(r1(R+514)){{goto L591105;}}
}
B591100:L591100:{c.instructions+=2;NFSU2_TR(0x591100);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B591102:{NFSU2_TR(0x591102);
{u32 ea_=u32(r4(R+4)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B591105:L591105:{c.instructions+=4;NFSU2_TR(0x591105);
{u32 ea_=u32(r4(R+4)+u32(44u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B591108:{NFSU2_TR(0x591108);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B59110a:{NFSU2_TR(0x59110a);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B59110d:{NFSU2_TR(0x59110d);
if(r1(R+514)){{goto L591114;}}
}
B59110f:L59110f:{c.instructions+=2;NFSU2_TR(0x59110f);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B591111:{NFSU2_TR(0x591111);
{u32 ea_=u32(r4(R+4)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B591114:L591114:{c.instructions+=4;NFSU2_TR(0x591114);
{u32 ea_=u32(r4(R+4)+u32(48u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B591117:{NFSU2_TR(0x591117);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B591119:{NFSU2_TR(0x591119);
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
B59111c:{NFSU2_TR(0x59111c);
if(r1(R+514)){{goto L591123;}}
}
B59111e:L59111e:{c.instructions+=2;NFSU2_TR(0x59111e);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B591120:{NFSU2_TR(0x591120);
{u32 ea_=u32(r4(R+4)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B591123:L591123:{c.instructions+=1;NFSU2_TR(0x591123);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B591130:L591130:{c.instructions+=10;NFSU2_TR(0x591130);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B591131:{NFSU2_TR(0x591131);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B591134:{NFSU2_TR(0x591134);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59113a:{NFSU2_TR(0x59113a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59113b:{NFSU2_TR(0x59113b);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B59113d:{NFSU2_TR(0x59113d);
w4(R+24,u32(0xbf800000ull));
}
B591142:{NFSU2_TR(0x591142);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B591144:{NFSU2_TR(0x591144);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B591145:{NFSU2_TR(0x591145);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B591149:{NFSU2_TR(0x591149);
if(r1(R+518)){{goto L591154;}}
}
B59114b:L59114b:{c.instructions+=2;NFSU2_TR(0x59114b);
w4(R+8,u32(0x1ull));
}
B591150:{NFSU2_TR(0x591150);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B591154:L591154:{c.instructions+=4;NFSU2_TR(0x591154);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B591157:{NFSU2_TR(0x591157);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B591159:{NFSU2_TR(0x591159);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x34ull))));
__builtin_memmove((R+0),(U+0),4);
}
B59115c:{NFSU2_TR(0x59115c);
if(r1(R+518)){{goto L591163;}}
}
B59115e:L59115e:{c.instructions+=2;NFSU2_TR(0x59115e);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B59115f:{NFSU2_TR(0x59115f);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B591163:L591163:{c.instructions+=2;NFSU2_TR(0x591163);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+24))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B591166:{NFSU2_TR(0x591166);
if(r1(R+518)){{goto L59116d;}}
}
B591168:L591168:{c.instructions+=2;NFSU2_TR(0x591168);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B591169:{NFSU2_TR(0x591169);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B59116d:L59116d:{c.instructions+=2;NFSU2_TR(0x59116d);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+24))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B591170:{NFSU2_TR(0x591170);
if(r1(R+518)){{goto L591177;}}
}
B591172:L591172:{c.instructions+=2;NFSU2_TR(0x591172);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B591173:{NFSU2_TR(0x591173);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B591177:L591177:{c.instructions+=3;NFSU2_TR(0x591177);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B591179:{NFSU2_TR(0x591179);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x4ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B59117c:{NFSU2_TR(0x59117c);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L59119c;}}
}
B59117e:L59117e:{c.instructions+=1;NFSU2_TR(0x59117e);
w4(R+24,u32(0x3ull));
}
B591183:L591183:{c.instructions+=9;NFSU2_TR(0x591183);
{u32 ea_=u32(r4(R+0)+u32(4294967292u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B591186:{NFSU2_TR(0x591186);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x4ull))));
}
B591189:{NFSU2_TR(0x591189);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x4ull))));
}
B59118c:{NFSU2_TR(0x59118c);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
}
B59118f:{NFSU2_TR(0x59118f);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B591191:{NFSU2_TR(0x591191);
{u32 ea_=u32(r4(R+0)+u32(4294967280u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B591194:{NFSU2_TR(0x591194);
{u32 ea_=u32(r4(R+0)+u32(4294967284u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B591197:{NFSU2_TR(0x591197);
{u32 ea_=u32(r4(R+0)+u32(4294967288u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B59119a:{NFSU2_TR(0x59119a);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x591183u);}goto L591183;}}
}
B59119c:L59119c:{c.instructions+=2;NFSU2_TR(0x59119c);
u8 U[14];
__builtin_memmove((U+6),(R+8),4);
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
B59119e:{NFSU2_TR(0x59119e);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L5911ae;}}
}
B5911a0:L5911a0:{c.instructions+=2;NFSU2_TR(0x5911a0);
u8 U[12];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B5911a4:{NFSU2_TR(0x5911a4);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+28))));
}
B5911a6:L5911a6:{c.instructions+=4;NFSU2_TR(0x5911a6);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5911a8:{NFSU2_TR(0x5911a8);
w1(R+512,carry<u32>(r4(R+0),u32(0x4ull)));
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B5911ab:{NFSU2_TR(0x5911ab);
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
B5911ac:{NFSU2_TR(0x5911ac);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5911a6u);}goto L5911a6;}}
}
B5911ae:L5911ae:{c.instructions+=5;NFSU2_TR(0x5911ae);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xda,0x30"::"a"(ea_):"memory");}
}
B5911b2:{NFSU2_TR(0x5911b2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5911b3:{NFSU2_TR(0x5911b3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5911b4:{NFSU2_TR(0x5911b4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5911b5:{NFSU2_TR(0x5911b5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5911c0:L5911c0:{c.instructions+=2;NFSU2_TR(0x5911c0);
__builtin_memmove((R+0),(R+4),4);
}
B5911c2:{NFSU2_TR(0x5911c2);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B5911c4:L5911c4:{c.instructions+=2;NFSU2_TR(0x5911c4);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5911c6:{NFSU2_TR(0x5911c6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5911d0;}}
}
B5911c8:L5911c8:{c.instructions+=2;NFSU2_TR(0x5911c8);
{u32 ea_=u32(u32(7881984u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5911ce:{NFSU2_TR(0x5911ce);
{goto L5911d6;}
}
B5911d0:L5911d0:{c.instructions+=1;NFSU2_TR(0x5911d0);
{u32 ea_=u32(u32(8002724u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5911d6:L5911d6:{c.instructions+=3;NFSU2_TR(0x5911d6);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5911d8:{NFSU2_TR(0x5911d8);
{u32 ea_=u32((r4(R+8)*4u)+r4(R+0));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5911db:{NFSU2_TR(0x5911db);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5911e5;}}
}
B5911dd:L5911dd:{c.instructions+=2;NFSU2_TR(0x5911dd);
{u32 ea_=u32(u32(7881984u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5911e3:{NFSU2_TR(0x5911e3);
{goto L5911eb;}
}
B5911e5:L5911e5:{c.instructions+=1;NFSU2_TR(0x5911e5);
{u32 ea_=u32(u32(8002724u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5911eb:L5911eb:{c.instructions+=3;NFSU2_TR(0x5911eb);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5911ed:{NFSU2_TR(0x5911ed);
{u32 ea_=u32((r4(R+8)*4u)+r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5911f1:{NFSU2_TR(0x5911f1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5911fb;}}
}
B5911f3:L5911f3:{c.instructions+=2;NFSU2_TR(0x5911f3);
{u32 ea_=u32(u32(7881984u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5911f9:{NFSU2_TR(0x5911f9);
{goto L591201;}
}
B5911fb:L5911fb:{c.instructions+=1;NFSU2_TR(0x5911fb);
{u32 ea_=u32(u32(8002724u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B591201:L591201:{c.instructions+=3;NFSU2_TR(0x591201);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B591203:{NFSU2_TR(0x591203);
{u32 ea_=u32((r4(R+8)*4u)+r4(R+0)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B591207:{NFSU2_TR(0x591207);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L591211;}}
}
B591209:L591209:{c.instructions+=2;NFSU2_TR(0x591209);
{u32 ea_=u32(u32(7881984u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59120f:{NFSU2_TR(0x59120f);
{goto L591217;}
}
B591211:L591211:{c.instructions+=1;NFSU2_TR(0x591211);
{u32 ea_=u32(u32(8002724u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B591217:L591217:{c.instructions+=3;NFSU2_TR(0x591217);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B591219:{NFSU2_TR(0x591219);
{u32 ea_=u32((r4(R+8)*4u)+r4(R+0)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59121d:{NFSU2_TR(0x59121d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L591227;}}
}
B59121f:L59121f:{c.instructions+=2;NFSU2_TR(0x59121f);
{u32 ea_=u32(u32(7881984u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B591225:{NFSU2_TR(0x591225);
{goto L59122d;}
}
B591227:L591227:{c.instructions+=1;NFSU2_TR(0x591227);
{u32 ea_=u32(u32(8002724u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59122d:L59122d:{c.instructions+=3;NFSU2_TR(0x59122d);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B59122f:{NFSU2_TR(0x59122f);
{u32 ea_=u32((r4(R+8)*4u)+r4(R+0)+u32(32u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B591233:{NFSU2_TR(0x591233);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L59123d;}}
}
B591235:L591235:{c.instructions+=2;NFSU2_TR(0x591235);
{u32 ea_=u32(u32(7881984u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59123b:{NFSU2_TR(0x59123b);
{goto L591243;}
}
B59123d:L59123d:{c.instructions+=1;NFSU2_TR(0x59123d);
{u32 ea_=u32(u32(8002724u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B591243:L591243:{c.instructions+=3;NFSU2_TR(0x591243);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B591245:{NFSU2_TR(0x591245);
{u32 ea_=u32((r4(R+8)*4u)+r4(R+0)+u32(40u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B591249:{NFSU2_TR(0x591249);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L591253;}}
}
B59124b:L59124b:{c.instructions+=2;NFSU2_TR(0x59124b);
{u32 ea_=u32(u32(7881984u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B591251:{NFSU2_TR(0x591251);
{goto L591259;}
}
B591253:L591253:{c.instructions+=1;NFSU2_TR(0x591253);
{u32 ea_=u32(u32(8002724u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B591259:L591259:{c.instructions+=3;NFSU2_TR(0x591259);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B59125b:{NFSU2_TR(0x59125b);
{u32 ea_=u32((r4(R+8)*4u)+r4(R+0)+u32(48u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59125f:{NFSU2_TR(0x59125f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L591269;}}
}
B591261:L591261:{c.instructions+=2;NFSU2_TR(0x591261);
{u32 ea_=u32(u32(7881984u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B591267:{NFSU2_TR(0x591267);
{goto L59126f;}
}
B591269:L591269:{c.instructions+=1;NFSU2_TR(0x591269);
{u32 ea_=u32(u32(8002724u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59126f:L59126f:{c.instructions+=3;NFSU2_TR(0x59126f);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B591271:{NFSU2_TR(0x591271);
{u32 ea_=u32((r4(R+8)*4u)+r4(R+0)+u32(56u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B591275:{NFSU2_TR(0x591275);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L59127f;}}
}
B591277:L591277:{c.instructions+=2;NFSU2_TR(0x591277);
{u32 ea_=u32(u32(7881984u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59127d:{NFSU2_TR(0x59127d);
{goto L591285;}
}
B59127f:L59127f:{c.instructions+=1;NFSU2_TR(0x59127f);
{u32 ea_=u32(u32(8002724u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B591285:L591285:{c.instructions+=3;NFSU2_TR(0x591285);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B591287:{NFSU2_TR(0x591287);
{u32 ea_=u32((r4(R+8)*4u)+r4(R+0)+u32(64u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59128b:{NFSU2_TR(0x59128b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L591295;}}
}
B59128d:L59128d:{c.instructions+=2;NFSU2_TR(0x59128d);
{u32 ea_=u32(u32(7881984u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B591293:{NFSU2_TR(0x591293);
{goto L59129b;}
}
B591295:L591295:{c.instructions+=1;NFSU2_TR(0x591295);
{u32 ea_=u32(u32(8002724u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59129b:L59129b:{c.instructions+=3;NFSU2_TR(0x59129b);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B59129d:{NFSU2_TR(0x59129d);
{u32 ea_=u32((r4(R+8)*4u)+r4(R+0)+u32(72u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5912a1:{NFSU2_TR(0x5912a1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5912ab;}}
}
B5912a3:L5912a3:{c.instructions+=2;NFSU2_TR(0x5912a3);
{u32 ea_=u32(u32(7881984u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5912a9:{NFSU2_TR(0x5912a9);
{goto L5912b1;}
}
B5912ab:L5912ab:{c.instructions+=1;NFSU2_TR(0x5912ab);
{u32 ea_=u32(u32(8002724u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5912b1:L5912b1:{c.instructions+=3;NFSU2_TR(0x5912b1);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5912b3:{NFSU2_TR(0x5912b3);
{u32 ea_=u32((r4(R+8)*4u)+r4(R+0)+u32(80u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5912b7:{NFSU2_TR(0x5912b7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5912c1;}}
}
B5912b9:L5912b9:{c.instructions+=2;NFSU2_TR(0x5912b9);
{u32 ea_=u32(u32(7881984u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5912bf:{NFSU2_TR(0x5912bf);
{goto L5912c7;}
}
B5912c1:L5912c1:{c.instructions+=1;NFSU2_TR(0x5912c1);
{u32 ea_=u32(u32(8002724u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5912c7:L5912c7:{c.instructions+=3;NFSU2_TR(0x5912c7);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5912c9:{NFSU2_TR(0x5912c9);
{u32 ea_=u32((r4(R+8)*4u)+r4(R+0)+u32(88u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5912cd:{NFSU2_TR(0x5912cd);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5912d7;}}
}
B5912cf:L5912cf:{c.instructions+=2;NFSU2_TR(0x5912cf);
{u32 ea_=u32(u32(7881984u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5912d5:{NFSU2_TR(0x5912d5);
{goto L5912dd;}
}
B5912d7:L5912d7:{c.instructions+=1;NFSU2_TR(0x5912d7);
{u32 ea_=u32(u32(8002724u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5912dd:L5912dd:{c.instructions+=3;NFSU2_TR(0x5912dd);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5912df:{NFSU2_TR(0x5912df);
{u32 ea_=u32((r4(R+8)*4u)+r4(R+0)+u32(112u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5912e3:{NFSU2_TR(0x5912e3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5912ed;}}
}
B5912e5:L5912e5:{c.instructions+=2;NFSU2_TR(0x5912e5);
{u32 ea_=u32(u32(7881984u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5912eb:{NFSU2_TR(0x5912eb);
{goto L5912f3;}
}
B5912ed:L5912ed:{c.instructions+=1;NFSU2_TR(0x5912ed);
{u32 ea_=u32(u32(8002724u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5912f3:L5912f3:{c.instructions+=3;NFSU2_TR(0x5912f3);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5912f5:{NFSU2_TR(0x5912f5);
{u32 ea_=u32((r4(R+8)*4u)+r4(R+0)+u32(96u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5912f9:{NFSU2_TR(0x5912f9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L591303;}}
}
B5912fb:L5912fb:{c.instructions+=2;NFSU2_TR(0x5912fb);
{u32 ea_=u32(u32(7881984u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B591301:{NFSU2_TR(0x591301);
{goto L591309;}
}
B591303:L591303:{c.instructions+=1;NFSU2_TR(0x591303);
{u32 ea_=u32(u32(8002724u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B591309:L591309:{c.instructions+=4;NFSU2_TR(0x591309);
{u32 ea_=u32((r4(R+8)*4u)+r4(R+0)+u32(104u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59130d:{NFSU2_TR(0x59130d);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B59130e:{NFSU2_TR(0x59130e);
u8 U[14];
__builtin_memmove((U+6),(R+8),4);
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
B591311:{NFSU2_TR(0x591311);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5911c4u);}goto L5911c4;}}
}
B591317:L591317:{c.instructions+=1;NFSU2_TR(0x591317);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B591320:L591320:{c.instructions+=6;NFSU2_TR(0x591320);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B591324:{NFSU2_TR(0x591324);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B591326:{NFSU2_TR(0x591326);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B59132a:{NFSU2_TR(0x59132a);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B59132c:{NFSU2_TR(0x59132c);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B59132f:{NFSU2_TR(0x59132f);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L591337;}}
}
B591331:L591331:{c.instructions+=2;NFSU2_TR(0x591331);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B591333:{NFSU2_TR(0x591333);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B591337:L591337:{c.instructions+=6;NFSU2_TR(0x591337);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B591339:{NFSU2_TR(0x591339);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59133c:{NFSU2_TR(0x59133c);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B591340:{NFSU2_TR(0x591340);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B591342:{NFSU2_TR(0x591342);
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
B591345:{NFSU2_TR(0x591345);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L59134b;}}
}
B591347:L591347:{c.instructions+=2;NFSU2_TR(0x591347);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59134a:{NFSU2_TR(0x59134a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B59134b:L59134b:{c.instructions+=4;NFSU2_TR(0x59134b);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B59134f:{NFSU2_TR(0x59134f);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B591351:{NFSU2_TR(0x591351);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B591354:{NFSU2_TR(0x591354);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B591360:L591360:{c.instructions+=5;NFSU2_TR(0x591360);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B591364:{NFSU2_TR(0x591364);
__builtin_memmove((R+4),gp(0x86b2e0),4);
}
B59136a:{NFSU2_TR(0x59136a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59136b:{NFSU2_TR(0x59136b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59136c:{NFSU2_TR(0x59136c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x591371ull));
TAIL_STATIC(0x43f920u,43f);
}
B591371:L591371:{c.instructions+=2;NFSU2_TR(0x591371);
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
B591374:{NFSU2_TR(0x591374);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B591380:L591380:{c.instructions+=5;NFSU2_TR(0x591380);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B591384:{NFSU2_TR(0x591384);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B591385:{NFSU2_TR(0x591385);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B591386:{NFSU2_TR(0x591386);
__builtin_memmove((R+24),(R+4),4);
}
B591388:{NFSU2_TR(0x591388);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x59138dull));
TAIL_STATIC(0x5d3c10u,5d3);
}
B59138d:L59138d:{c.instructions+=3;NFSU2_TR(0x59138d);
u8 U[16];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B591391:{NFSU2_TR(0x591391);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B591392:{NFSU2_TR(0x591392);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5913a0:L5913a0:{c.instructions+=1;NFSU2_TR(0x5913a0);
TAIL_STATIC(0x5d3230u,5d3);
}
B5913b0:L5913b0:{c.instructions+=5;NFSU2_TR(0x5913b0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5913b4:{NFSU2_TR(0x5913b4);
__builtin_memmove((R+4),gp(0x86b2e8),4);
}
B5913ba:{NFSU2_TR(0x5913ba);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5913bb:{NFSU2_TR(0x5913bb);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5913bc:{NFSU2_TR(0x5913bc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5913c1ull));
TAIL_STATIC(0x43f920u,43f);
}
B5913c1:L5913c1:{c.instructions+=2;NFSU2_TR(0x5913c1);
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
B5913c4:{NFSU2_TR(0x5913c4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5913d0:L5913d0:{c.instructions+=45;NFSU2_TR(0x5913d0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5913d4:{NFSU2_TR(0x5913d4);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5913d7:{NFSU2_TR(0x5913d7);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5913da:{NFSU2_TR(0x5913da);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5913dd:{NFSU2_TR(0x5913dd);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5913e1:{NFSU2_TR(0x5913e1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5913e3:{NFSU2_TR(0x5913e3);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5913e5:{NFSU2_TR(0x5913e5);
{u32 ea_=u32(r4(R+4)+u32(116u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5913e8:{NFSU2_TR(0x5913e8);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x70ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5913eb:{NFSU2_TR(0x5913eb);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5913ef:{NFSU2_TR(0x5913ef);
{u32 ea_=u32(r4(R+4)+u32(120u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5913f2:{NFSU2_TR(0x5913f2);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x7cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5913f5:{NFSU2_TR(0x5913f5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5913f8:{NFSU2_TR(0x5913f8);
{u32 ea_=u32(r4(R+0)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5913fb:{NFSU2_TR(0x5913fb);
{u32 ea_=u32(r4(R+0)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5913fe:{NFSU2_TR(0x5913fe);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B591402:{NFSU2_TR(0x591402);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B591405:{NFSU2_TR(0x591405);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B591407:{NFSU2_TR(0x591407);
{u32 ea_=u32(r4(R+4)+u32(132u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59140d:{NFSU2_TR(0x59140d);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x80ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B591413:{NFSU2_TR(0x591413);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B591417:{NFSU2_TR(0x591417);
{u32 ea_=u32(r4(R+4)+u32(136u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59141d:{NFSU2_TR(0x59141d);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B591423:{NFSU2_TR(0x591423);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B591426:{NFSU2_TR(0x591426);
{u32 ea_=u32(r4(R+0)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B591429:{NFSU2_TR(0x591429);
{u32 ea_=u32(r4(R+0)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59142c:{NFSU2_TR(0x59142c);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B591430:{NFSU2_TR(0x591430);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B591433:{NFSU2_TR(0x591433);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B591435:{NFSU2_TR(0x591435);
{u32 ea_=u32(r4(R+4)+u32(148u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59143b:{NFSU2_TR(0x59143b);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x90ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B591441:{NFSU2_TR(0x591441);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B591445:{NFSU2_TR(0x591445);
{u32 ea_=u32(r4(R+4)+u32(152u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59144b:{NFSU2_TR(0x59144b);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x9cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B591451:{NFSU2_TR(0x591451);
{u32 ea_=u32(r4(R+0)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B591454:{NFSU2_TR(0x591454);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B591457:{NFSU2_TR(0x591457);
{u32 ea_=u32(r4(R+0)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59145a:{NFSU2_TR(0x59145a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B59145d:{NFSU2_TR(0x59145d);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B59145f:{NFSU2_TR(0x59145f);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B591463:{NFSU2_TR(0x591463);
{u32 ea_=u32(r4(R+4)+u32(164u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B591469:{NFSU2_TR(0x591469);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xa0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B59146f:{NFSU2_TR(0x59146f);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xacull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B591475:{NFSU2_TR(0x591475);
{u32 ea_=u32(r4(R+4)+u32(168u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59147b:{NFSU2_TR(0x59147b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B591480:L591480:{c.instructions+=45;NFSU2_TR(0x591480);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B591484:{NFSU2_TR(0x591484);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B591487:{NFSU2_TR(0x591487);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59148a:{NFSU2_TR(0x59148a);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59148d:{NFSU2_TR(0x59148d);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B591491:{NFSU2_TR(0x591491);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B591493:{NFSU2_TR(0x591493);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B591495:{NFSU2_TR(0x591495);
{u32 ea_=u32(r4(R+4)+u32(180u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59149b:{NFSU2_TR(0x59149b);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5914a1:{NFSU2_TR(0x5914a1);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5914a5:{NFSU2_TR(0x5914a5);
{u32 ea_=u32(r4(R+4)+u32(184u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5914ab:{NFSU2_TR(0x5914ab);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xbcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5914b1:{NFSU2_TR(0x5914b1);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5914b4:{NFSU2_TR(0x5914b4);
{u32 ea_=u32(r4(R+0)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5914b7:{NFSU2_TR(0x5914b7);
{u32 ea_=u32(r4(R+0)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5914ba:{NFSU2_TR(0x5914ba);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5914be:{NFSU2_TR(0x5914be);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5914c1:{NFSU2_TR(0x5914c1);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5914c3:{NFSU2_TR(0x5914c3);
{u32 ea_=u32(r4(R+4)+u32(196u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5914c9:{NFSU2_TR(0x5914c9);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xc0ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5914cf:{NFSU2_TR(0x5914cf);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5914d3:{NFSU2_TR(0x5914d3);
{u32 ea_=u32(r4(R+4)+u32(200u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5914d9:{NFSU2_TR(0x5914d9);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xccull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5914df:{NFSU2_TR(0x5914df);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5914e2:{NFSU2_TR(0x5914e2);
{u32 ea_=u32(r4(R+0)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5914e5:{NFSU2_TR(0x5914e5);
{u32 ea_=u32(r4(R+0)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5914e8:{NFSU2_TR(0x5914e8);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5914ec:{NFSU2_TR(0x5914ec);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5914ef:{NFSU2_TR(0x5914ef);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5914f1:{NFSU2_TR(0x5914f1);
{u32 ea_=u32(r4(R+4)+u32(212u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5914f7:{NFSU2_TR(0x5914f7);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xd0ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5914fd:{NFSU2_TR(0x5914fd);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B591501:{NFSU2_TR(0x591501);
{u32 ea_=u32(r4(R+4)+u32(216u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B591507:{NFSU2_TR(0x591507);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xdcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B59150d:{NFSU2_TR(0x59150d);
{u32 ea_=u32(r4(R+0)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B591510:{NFSU2_TR(0x591510);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B591513:{NFSU2_TR(0x591513);
{u32 ea_=u32(r4(R+0)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B591516:{NFSU2_TR(0x591516);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B591519:{NFSU2_TR(0x591519);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B59151b:{NFSU2_TR(0x59151b);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B59151f:{NFSU2_TR(0x59151f);
{u32 ea_=u32(r4(R+4)+u32(228u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B591525:{NFSU2_TR(0x591525);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xe0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B59152b:{NFSU2_TR(0x59152b);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xecull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B591531:{NFSU2_TR(0x591531);
{u32 ea_=u32(r4(R+4)+u32(232u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B591537:{NFSU2_TR(0x591537);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B591540:L591540:{c.instructions+=6;NFSU2_TR(0x591540);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B591544:{NFSU2_TR(0x591544);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B591545:{NFSU2_TR(0x591545);
{u32 ea_=u32(u32(7881316u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59154b:{NFSU2_TR(0x59154b);
__builtin_memmove((R+24),(R+4),4);
}
B59154d:{NFSU2_TR(0x59154d);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B591553:{NFSU2_TR(0x591553);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x591558ull));
TAIL_STATIC(0x75bed4u,75b);
}
B591558:L591558:{c.instructions+=3;NFSU2_TR(0x591558);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x730ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B59155e:{NFSU2_TR(0x59155e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B59155f:{NFSU2_TR(0x59155f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B591570:L591570:{c.instructions+=15;NFSU2_TR(0x591570);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B591571:{NFSU2_TR(0x591571);
__builtin_memmove((R+20),(R+16),4);
}
B591573:{NFSU2_TR(0x591573);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B591576:{NFSU2_TR(0x591576);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x14ull))));
}
B591579:{NFSU2_TR(0x591579);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59157a:{NFSU2_TR(0x59157a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B59157d:{NFSU2_TR(0x59157d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59157e:{NFSU2_TR(0x59157e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59157f:{NFSU2_TR(0x59157f);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B591581:{NFSU2_TR(0x591581);
__builtin_memmove((R+28),(R+4),4);
}
B591583:{NFSU2_TR(0x591583);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B591586:{NFSU2_TR(0x591586);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B591587:{NFSU2_TR(0x591587);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B59158b:{NFSU2_TR(0x59158b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59158c:{NFSU2_TR(0x59158c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x591591ull));
TAIL_STATIC(0x570640u,570);
}
B591591:L591591:{c.instructions+=13;NFSU2_TR(0x591591);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B591595:{NFSU2_TR(0x591595);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B591598:{NFSU2_TR(0x591598);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B59159c:{NFSU2_TR(0x59159c);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59159e:{NFSU2_TR(0x59159e);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5915a2:{NFSU2_TR(0x5915a2);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5915a4:{NFSU2_TR(0x5915a4);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5915a5:{NFSU2_TR(0x5915a5);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5915a9:{NFSU2_TR(0x5915a9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5915ac:{NFSU2_TR(0x5915ac);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5915af:{NFSU2_TR(0x5915af);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5915b2:{NFSU2_TR(0x5915b2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5915b3:{NFSU2_TR(0x5915b3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5915b8ull));
TAIL_STATIC(0x570640u,570);
}
B5915b8:L5915b8:{c.instructions+=36;NFSU2_TR(0x5915b8);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5915bc:{NFSU2_TR(0x5915bc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5915bf:{NFSU2_TR(0x5915bf);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5915c3:{NFSU2_TR(0x5915c3);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5915c5:{NFSU2_TR(0x5915c5);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5915c9:{NFSU2_TR(0x5915c9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5915cc:{NFSU2_TR(0x5915cc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5915cf:{NFSU2_TR(0x5915cf);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5915d2:{NFSU2_TR(0x5915d2);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5915d5:{NFSU2_TR(0x5915d5);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5915d8:{NFSU2_TR(0x5915d8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5915d9:{NFSU2_TR(0x5915d9);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5915db:{NFSU2_TR(0x5915db);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5915dd:{NFSU2_TR(0x5915dd);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5915df:{NFSU2_TR(0x5915df);
{u32 ea_=u32(r4(R+24)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5915e2:{NFSU2_TR(0x5915e2);
__asm__ volatile(".byte 0xd8,0xe2":::"memory");
}
B5915e4:{NFSU2_TR(0x5915e4);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B5915e8:{NFSU2_TR(0x5915e8);
{u32 ea_=u32(r4(R+24)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5915eb:{NFSU2_TR(0x5915eb);
{u32 ea_=u32(r4(R+24)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5915ee:{NFSU2_TR(0x5915ee);
__asm__ volatile(".byte 0xd8,0xe1":::"memory");
}
B5915f0:{NFSU2_TR(0x5915f0);
__asm__ volatile(".byte 0xdd,0xda":::"memory");
}
B5915f2:{NFSU2_TR(0x5915f2);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5915f4:{NFSU2_TR(0x5915f4);
{u32 ea_=u32(r4(R+24)+u32(8u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B5915f7:{NFSU2_TR(0x5915f7);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5915fb:{NFSU2_TR(0x5915fb);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5915fe:{NFSU2_TR(0x5915fe);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B591600:{NFSU2_TR(0x591600);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B591603:{NFSU2_TR(0x591603);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B591605:{NFSU2_TR(0x591605);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B591607:{NFSU2_TR(0x591607);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B591608:{NFSU2_TR(0x591608);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59160a:{NFSU2_TR(0x59160a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B59160b:{NFSU2_TR(0x59160b);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B59160d:{NFSU2_TR(0x59160d);
__builtin_memmove((R+16),(R+20),4);
}
B59160f:{NFSU2_TR(0x59160f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B591610:{NFSU2_TR(0x591610);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B591620:L591620:{c.instructions+=8;NFSU2_TR(0x591620);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B591621:{NFSU2_TR(0x591621);
__builtin_memmove((R+20),(R+16),4);
}
B591623:{NFSU2_TR(0x591623);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B591626:{NFSU2_TR(0x591626);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x20ull))));
}
B591629:{NFSU2_TR(0x591629);
__builtin_memmove((R+0),(R+4),4);
}
B59162b:{NFSU2_TR(0x59162b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B59162e:{NFSU2_TR(0x59162e);
u8 U[14];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1eull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((U+10),(U+4),2);
w1(R+512,u8((r2(U+10))<(u16(0x2ull))));
w1(R+523,sborrow<u16>(r2(U+10),u16(0x2ull)));
w2(U+12,u16(u32(r2(U+10))-u32(u16(0x2ull))));
w1(R+519,u8(s16(r2(U+12))<s16(u16(0x0ull))));
w1(R+518,u8((r2(U+12))==(u16(0x0ull))));
w2(U+6,u16(u32(r2(U+12))&u32(u16(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r2(U+6)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B591633:{NFSU2_TR(0x591633);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L59163f;}}
}
B591635:L591635:{c.instructions+=4;NFSU2_TR(0x591635);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59163b:{NFSU2_TR(0x59163b);
__builtin_memmove((R+16),(R+20),4);
}
B59163d:{NFSU2_TR(0x59163d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B59163e:{NFSU2_TR(0x59163e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B59163f:L59163f:{c.instructions+=7;NFSU2_TR(0x59163f);
{u32 ea_=u32(r4(R+0)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B591642:{NFSU2_TR(0x591642);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B591644:{NFSU2_TR(0x591644);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B591645:{NFSU2_TR(0x591645);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B591649:{NFSU2_TR(0x591649);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59164c:{NFSU2_TR(0x59164c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59164d:{NFSU2_TR(0x59164d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x591652ull));
TAIL_STATIC(0x570640u,570);
}
B591652:L591652:{c.instructions+=11;NFSU2_TR(0x591652);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B591656:{NFSU2_TR(0x591656);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B59165a:{NFSU2_TR(0x59165a);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B59165e:{NFSU2_TR(0x59165e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+16)),r4(U+0));
}
B591662:{NFSU2_TR(0x591662);
__builtin_memmove((R+4),(R+16),4);
}
B591666:{NFSU2_TR(0x591666);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B59166a:{NFSU2_TR(0x59166a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59166b:{NFSU2_TR(0x59166b);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B59166f:{NFSU2_TR(0x59166f);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B591670:{NFSU2_TR(0x591670);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B591674:{NFSU2_TR(0x591674);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x591679ull));
TAIL_STATIC(0x43cf10u,43c);
}
B591679:L591679:{c.instructions+=7;NFSU2_TR(0x591679);
{u32 ea_=u32(u32(8371952u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59167f:{NFSU2_TR(0x59167f);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B591683:{NFSU2_TR(0x591683);
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
B591686:{NFSU2_TR(0x591686);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B591688:{NFSU2_TR(0x591688);
__builtin_memmove((R+16),(R+20),4);
}
B59168a:{NFSU2_TR(0x59168a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B59168b:{NFSU2_TR(0x59168b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B591690:L591690:{c.instructions+=23;NFSU2_TR(0x591690);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B591691:{NFSU2_TR(0x591691);
__builtin_memmove((R+20),(R+16),4);
}
B591693:{NFSU2_TR(0x591693);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B591696:{NFSU2_TR(0x591696);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x58ull))));
}
B591699:{NFSU2_TR(0x591699);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59169a:{NFSU2_TR(0x59169a);
__builtin_memmove((R+24),(R+4),4);
}
B59169c:{NFSU2_TR(0x59169c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B59169f:{NFSU2_TR(0x59169f);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5916a0:{NFSU2_TR(0x5916a0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5916a3:{NFSU2_TR(0x5916a3);
{u32 ea_=u32(r4(R+28)+u32(468u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5916a9:{NFSU2_TR(0x5916a9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5916b0:{NFSU2_TR(0x5916b0);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(s32(s8(r1(U+4)))));
}
B5916b4:{NFSU2_TR(0x5916b4);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
}
B5916b5:{NFSU2_TR(0x5916b5);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5916b9:{NFSU2_TR(0x5916b9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5916bc:{NFSU2_TR(0x5916bc);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5916be:{NFSU2_TR(0x5916be);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B5916c2:{NFSU2_TR(0x5916c2);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x60ull))));
}
B5916c5:{NFSU2_TR(0x5916c5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5916c6:{NFSU2_TR(0x5916c6);
__asm__ volatile(".byte 0xd8,0xf1":::"memory");
}
B5916c8:{NFSU2_TR(0x5916c8);
{u32 ea_=u32(r4(R+24)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5916cb:{NFSU2_TR(0x5916cb);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5916cd:{NFSU2_TR(0x5916cd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5916d2ull));
TAIL_STATIC(0x570730u,570);
}
B5916d2:L5916d2:{c.instructions+=12;NFSU2_TR(0x5916d2);
__builtin_memmove((R+8),gp(0x7a17c4),4);
}
B5916d8:{NFSU2_TR(0x5916d8);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5916dc:{NFSU2_TR(0x5916dc);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B5916e0:{NFSU2_TR(0x5916e0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5916e3:{NFSU2_TR(0x5916e3);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5916e5:{NFSU2_TR(0x5916e5);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5916e6:{NFSU2_TR(0x5916e6);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5916e7:{NFSU2_TR(0x5916e7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5916ea:{NFSU2_TR(0x5916ea);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5916ed:{NFSU2_TR(0x5916ed);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x60ull))));
}
B5916f0:{NFSU2_TR(0x5916f0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5916f1:{NFSU2_TR(0x5916f1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5916f6ull));
TAIL_STATIC(0x5774c0u,577);
}
B5916f6:L5916f6:{c.instructions+=12;NFSU2_TR(0x5916f6);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5916fa:{NFSU2_TR(0x5916fa);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5916fe:{NFSU2_TR(0x5916fe);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5916ff:{NFSU2_TR(0x5916ff);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B591702:{NFSU2_TR(0x591702);
u8 U[4];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B591706:{NFSU2_TR(0x591706);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B591707:{NFSU2_TR(0x591707);
u8 U[4];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B59170b:{NFSU2_TR(0x59170b);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x60ull))));
}
B59170e:{NFSU2_TR(0x59170e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59170f:{NFSU2_TR(0x59170f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B591710:{NFSU2_TR(0x591710);
__builtin_memmove((R+4),(R+24),4);
}
B591712:{NFSU2_TR(0x591712);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x591717ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x591570u);}goto L591570;}
}
B591717:L591717:{c.instructions+=8;NFSU2_TR(0x591717);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B591719:{NFSU2_TR(0x591719);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B59171d:{NFSU2_TR(0x59171d);
u8 U[4];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B591721:{NFSU2_TR(0x591721);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B591722:{NFSU2_TR(0x591722);
u8 U[4];
w4(U+0,u32(u32(u32(0x54ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B591726:{NFSU2_TR(0x591726);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B591727:{NFSU2_TR(0x591727);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B59172a:{NFSU2_TR(0x59172a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x59172full));
TAIL_STATIC(0x43cf10u,43c);
}
B59172f:L59172f:{c.instructions+=9;NFSU2_TR(0x59172f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B591732:{NFSU2_TR(0x591732);
{u32 ea_=u32(r4(R+8)+u32(1068u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B591738:{NFSU2_TR(0x591738);
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
B59173b:{NFSU2_TR(0x59173b);
{u32 ea_=u32(r4(R+24)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59173e:{NFSU2_TR(0x59173e);
__builtin_memmove((R+4),(R+28),4);
}
B591740:{NFSU2_TR(0x591740);
{u32 ea_=u32(r4(R+24)+u32(32u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B591743:{NFSU2_TR(0x591743);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B591745:{NFSU2_TR(0x591745);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B591749:{NFSU2_TR(0x591749);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x74ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x59174cull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B59174c:L59174c:{c.instructions+=7;NFSU2_TR(0x59174c);
{u32 ea_=u32(u32(8001568u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B591752:{NFSU2_TR(0x591752);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+8),(U+0),4);
}
B591754:{NFSU2_TR(0x591754);
__builtin_memmove((R+4),(R+28),4);
}
B591756:{NFSU2_TR(0x591756);
{u32 ea_=u32(r4(R+24)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B591759:{NFSU2_TR(0x591759);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B59175d:{NFSU2_TR(0x59175d);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B591761:{NFSU2_TR(0x591761);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x591764ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B591764:L591764:{c.instructions+=4;NFSU2_TR(0x591764);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B59176a:{NFSU2_TR(0x59176a);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B59176c:{NFSU2_TR(0x59176c);
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
B59176f:{NFSU2_TR(0x59176f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L59177a;}}
}
B591771:L591771:{c.instructions+=3;NFSU2_TR(0x591771);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B591773:{NFSU2_TR(0x591773);
__builtin_memmove((R+4),(R+28),4);
}
B591775:{NFSU2_TR(0x591775);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x591778ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B591778:L591778:{c.instructions+=1;NFSU2_TR(0x591778);
{goto L591780;}
}
B59177a:L59177a:{c.instructions+=1;NFSU2_TR(0x59177a);
{u32 ea_=u32(u32(8001472u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B591780:L591780:{c.instructions+=12;NFSU2_TR(0x591780);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B591784:{NFSU2_TR(0x591784);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B591787:{NFSU2_TR(0x591787);
__asm__ volatile(".byte 0xd8,0xf1":::"memory");
}
B591789:{NFSU2_TR(0x591789);
{u32 ea_=u32(r4(R+24)+u32(36u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59178c:{NFSU2_TR(0x59178c);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B59178e:{NFSU2_TR(0x59178e);
{u32 ea_=u32(r4(R+24)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B591791:{NFSU2_TR(0x591791);
{u32 ea_=u32(r4(R+24)+u32(16u));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B591794:{NFSU2_TR(0x591794);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B591798:{NFSU2_TR(0x591798);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B59179c:{NFSU2_TR(0x59179c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59179d:{NFSU2_TR(0x59179d);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59179e:{NFSU2_TR(0x59179e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5917a3ull));
TAIL_STATIC(0x4038d0u,403);
}
B5917a3:L5917a3:{c.instructions+=6;NFSU2_TR(0x5917a3);
{u32 ea_=u32(r4(R+24)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5917a6:{NFSU2_TR(0x5917a6);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B5917a9:{NFSU2_TR(0x5917a9);
{u32 ea_=u32(r4(R+24)+u32(36u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B5917ac:{NFSU2_TR(0x5917ac);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5917ae:{NFSU2_TR(0x5917ae);
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
B5917b1:{NFSU2_TR(0x5917b1);
if(r1(R+514)){{goto L5917b8;}}
}
B5917b3:L5917b3:{c.instructions+=2;NFSU2_TR(0x5917b3);
{u32 ea_=u32(r4(R+24)+u32(36u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5917b6:{NFSU2_TR(0x5917b6);
{goto L5917d4;}
}
B5917b8:L5917b8:{c.instructions+=7;NFSU2_TR(0x5917b8);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5917ba:{NFSU2_TR(0x5917ba);
{u32 ea_=u32(u32(8001488u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5917c0:{NFSU2_TR(0x5917c0);
{u32 ea_=u32(r4(R+24)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5917c3:{NFSU2_TR(0x5917c3);
{u32 ea_=u32(r4(R+24)+u32(36u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B5917c6:{NFSU2_TR(0x5917c6);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5917c8:{NFSU2_TR(0x5917c8);
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
B5917cb:{NFSU2_TR(0x5917cb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5917d2;}}
}
B5917cd:L5917cd:{c.instructions+=2;NFSU2_TR(0x5917cd);
{u32 ea_=u32(r4(R+24)+u32(36u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5917d0:{NFSU2_TR(0x5917d0);
{goto L5917d4;}
}
B5917d2:L5917d2:{c.instructions+=1;NFSU2_TR(0x5917d2);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5917d4:L5917d4:{c.instructions+=10;NFSU2_TR(0x5917d4);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5917d8:{NFSU2_TR(0x5917d8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5917d9:{NFSU2_TR(0x5917d9);
u8 U[4];
w4(U+0,u32(u32(u32(0x54ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5917dd:{NFSU2_TR(0x5917dd);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5917de:{NFSU2_TR(0x5917de);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5917e2:{NFSU2_TR(0x5917e2);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5917e3:{NFSU2_TR(0x5917e3);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5917eb:{NFSU2_TR(0x5917eb);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5917f3:{NFSU2_TR(0x5917f3);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5917fb:{NFSU2_TR(0x5917fb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x591800ull));
TAIL_STATIC(0x43d1e0u,43d);
}
B591800:L591800:{c.instructions+=28;NFSU2_TR(0x591800);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B591804:{NFSU2_TR(0x591804);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B591808:{NFSU2_TR(0x591808);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B59180b:{NFSU2_TR(0x59180b);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59180f:{NFSU2_TR(0x59180f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B591812:{NFSU2_TR(0x591812);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B591816:{NFSU2_TR(0x591816);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x70ull))));
}
B591819:{NFSU2_TR(0x591819);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B59181c:{NFSU2_TR(0x59181c);
w4(R+8,u32(0x2ull));
}
B591821:{NFSU2_TR(0x591821);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B591823:{NFSU2_TR(0x591823);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B591827:{NFSU2_TR(0x591827);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59182b:{NFSU2_TR(0x59182b);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B59182d:{NFSU2_TR(0x59182d);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B59182f:{NFSU2_TR(0x59182f);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B591833:{NFSU2_TR(0x591833);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B591836:{NFSU2_TR(0x591836);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59183a:{NFSU2_TR(0x59183a);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59183d:{NFSU2_TR(0x59183d);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B59183f:{NFSU2_TR(0x59183f);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B591843:{NFSU2_TR(0x591843);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B591845:{NFSU2_TR(0x591845);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B591847:{NFSU2_TR(0x591847);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59184b:{NFSU2_TR(0x59184b);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B59184d:{NFSU2_TR(0x59184d);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B591850:{NFSU2_TR(0x591850);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B591852:{NFSU2_TR(0x591852);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B591855:{NFSU2_TR(0x591855);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L59185b;}}
}
B591857:L591857:{c.instructions+=1;NFSU2_TR(0x591857);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+8),2);
s2(u32(r4(U+0)),r2(U+4));
}
B59185b:L59185b:{c.instructions+=8;NFSU2_TR(0x59185b);
{u32 ea_=u32(u32(8001472u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B591861:{NFSU2_TR(0x591861);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B591864:{NFSU2_TR(0x591864);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B591868:{NFSU2_TR(0x591868);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B59186b:{NFSU2_TR(0x59186b);
{u32 ea_=u32(r4(R+4)+u32(12u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B59186e:{NFSU2_TR(0x59186e);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B591870:{NFSU2_TR(0x591870);
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
B591873:{NFSU2_TR(0x591873);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L591879;}}
}
B591875:L591875:{c.instructions+=1;NFSU2_TR(0x591875);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+8),2);
s2(u32(r4(U+0)),r2(U+4));
}
B591879:L591879:{c.instructions+=13;NFSU2_TR(0x591879);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B59187c:{NFSU2_TR(0x59187c);
__builtin_memmove((R+4),gp(0x7a17c0),4);
}
B591882:{NFSU2_TR(0x591882);
__builtin_memmove((R+8),gp(0x7a17e4),4);
}
B591888:{NFSU2_TR(0x591888);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B59188b:{NFSU2_TR(0x59188b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B59188e:{NFSU2_TR(0x59188e);
__builtin_memmove((R+0),(R+8),4);
}
B591890:{NFSU2_TR(0x591890);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B591891:{NFSU2_TR(0x591891);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B591894:{NFSU2_TR(0x591894);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B591897:{NFSU2_TR(0x591897);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B591898:{NFSU2_TR(0x591898);
__builtin_memmove((R+16),(R+20),4);
}
B59189a:{NFSU2_TR(0x59189a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B59189b:{NFSU2_TR(0x59189b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5918a0:L5918a0:{c.instructions+=19;NFSU2_TR(0x5918a0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5918a1:{NFSU2_TR(0x5918a1);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5918a2:{NFSU2_TR(0x5918a2);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B5918a4:{NFSU2_TR(0x5918a4);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5918a5:{NFSU2_TR(0x5918a5);
__builtin_memmove((R+28),(R+4),4);
}
B5918a7:{NFSU2_TR(0x5918a7);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5918aa:{NFSU2_TR(0x5918aa);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2eull))));
__builtin_memmove((U+4),(R+12),2);
s2(u32(r4(U+0)),r2(U+4));
}
B5918ae:{NFSU2_TR(0x5918ae);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5918b1:{NFSU2_TR(0x5918b1);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2eull))));
__builtin_memmove((U+4),(R+12),2);
s2(u32(r4(U+0)),r2(U+4));
}
B5918b5:{NFSU2_TR(0x5918b5);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x5eull))));
__builtin_memmove((U+4),(R+12),2);
s2(u32(r4(U+0)),r2(U+4));
}
B5918b9:{NFSU2_TR(0x5918b9);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5918bc:{NFSU2_TR(0x5918bc);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2eull))));
__builtin_memmove((U+4),(R+12),2);
s2(u32(r4(U+0)),r2(U+4));
}
B5918c0:{NFSU2_TR(0x5918c0);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x5eull))));
__builtin_memmove((U+4),(R+12),2);
s2(u32(r4(U+0)),r2(U+4));
}
B5918c4:{NFSU2_TR(0x5918c4);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5918c7:{NFSU2_TR(0x5918c7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5918ca:{NFSU2_TR(0x5918ca);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B5918cd:{NFSU2_TR(0x5918cd);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x10ull))));
}
B5918d0:{NFSU2_TR(0x5918d0);
u8 U[5];
__builtin_memmove((U+3),(R+4),1);
w1(R+512,u8((r1(U+3))<(u8(0x1ull))));
w1(R+523,sborrow<u8>(r1(U+3),u8(0x1ull)));
w1(U+4,u8(u32(r1(U+3))-u32(u8(0x1ull))));
w1(R+519,u8(s8(r1(U+4))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+4))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+4))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5918d3:{NFSU2_TR(0x5918d3);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L591942;}}
}
B5918d5:L5918d5:{c.instructions+=4;NFSU2_TR(0x5918d5);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5918d6:{NFSU2_TR(0x5918d6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5918d7:{NFSU2_TR(0x5918d7);
__builtin_memmove((R+4),(R+24),4);
}
B5918d9:{NFSU2_TR(0x5918d9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5918deull));
TAIL_STATIC(0x405120u,405);
}
B5918de:L5918de:{c.instructions+=4;NFSU2_TR(0x5918de);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
w4(R+4,u32(s32(s8(r1(U+0)))));
}
B5918e1:{NFSU2_TR(0x5918e1);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5918e2:{NFSU2_TR(0x5918e2);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5918e5:{NFSU2_TR(0x5918e5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5918eaull));
TAIL_STATIC(0x5701d0u,570);
}
B5918ea:L5918ea:{c.instructions+=4;NFSU2_TR(0x5918ea);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
__builtin_memmove((R+0),(U+0),1);
}
B5918ec:{NFSU2_TR(0x5918ec);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B5918ee:{NFSU2_TR(0x5918ee);
u8 U[2];
__builtin_memmove((U+0),(R+12),1);
w1(R+523,sborrow<u8>(r1(R+0),r1(U+0)));
w1(U+1,u8(u32(r1(R+0))-u32(r1(U+0))));
w1(R+519,u8(s8(r1(U+1))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B5918f0:{NFSU2_TR(0x5918f0);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L591932;}}
}
B5918f2:L5918f2:{c.instructions+=4;NFSU2_TR(0x5918f2);
w4(R+12,u32(0xffffffe8ull));
}
B5918f7:{NFSU2_TR(0x5918f7);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5918fa:{NFSU2_TR(0x5918fa);
w4(R+12,u32(u32(r4(R+12))-u32(r4(R+24))));
}
B5918fc:{NFSU2_TR(0x5918fc);
__builtin_memmove((R+16),(R+16),4);
}
B591900:L591900:{c.instructions+=18;NFSU2_TR(0x591900);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B591903:{NFSU2_TR(0x591903);
{u32 ea_=u32(r4(R+4)+u32(4294967292u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B591906:{NFSU2_TR(0x591906);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B591909:{NFSU2_TR(0x591909);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59190b:{NFSU2_TR(0x59190b);
{u32 ea_=u32(r4(R+4)+u32(4294967288u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59190e:{NFSU2_TR(0x59190e);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+12))));
}
B591910:{NFSU2_TR(0x591910);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+4))));
}
B591912:{NFSU2_TR(0x591912);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B591914:{NFSU2_TR(0x591914);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B591916:{NFSU2_TR(0x591916);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B59191d:{NFSU2_TR(0x59191d);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B591920:{NFSU2_TR(0x591920);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x1ull))));
}
B591921:{NFSU2_TR(0x591921);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x10ull))));
}
B591924:{NFSU2_TR(0x591924);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B591927:{NFSU2_TR(0x591927);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x18ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B59192b:{NFSU2_TR(0x59192b);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
w4(R+8,u32(s32(s8(r1(U+0)))));
}
B59192e:{NFSU2_TR(0x59192e);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(R+20),r4(U+0)));
w4(U+4,u32(u32(r4(R+20))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B591930:{NFSU2_TR(0x591930);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x591900u);}goto L591900;}}
}
B591932:L591932:{c.instructions+=2;NFSU2_TR(0x591932);
__builtin_memmove((R+4),(R+28),4);
}
B591934:{NFSU2_TR(0x591934);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x591939ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x591690u);}goto L591690;}
}
B591939:L591939:{c.instructions+=6;NFSU2_TR(0x591939);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B59193a:{NFSU2_TR(0x59193a);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x48ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B59193e:{NFSU2_TR(0x59193e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B59193f:{NFSU2_TR(0x59193f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B591940:{NFSU2_TR(0x591940);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B591941:{NFSU2_TR(0x591941);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B591942:L591942:{c.instructions+=5;NFSU2_TR(0x591942);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x48ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B591945:{NFSU2_TR(0x591945);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B591946:{NFSU2_TR(0x591946);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B591947:{NFSU2_TR(0x591947);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B591948:{NFSU2_TR(0x591948);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B591950:L591950:{c.instructions+=13;NFSU2_TR(0x591950);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B591954:{NFSU2_TR(0x591954);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xcull))));
}
B591957:{NFSU2_TR(0x591957);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B591958:{NFSU2_TR(0x591958);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B59195a:{NFSU2_TR(0x59195a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59195b:{NFSU2_TR(0x59195b);
__builtin_memmove((R+24),(R+4),4);
}
B59195d:{NFSU2_TR(0x59195d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B591960:{NFSU2_TR(0x591960);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B591963:{NFSU2_TR(0x591963);
{u32 ea_=u32(u32(7882144u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B591969:{NFSU2_TR(0x591969);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59196a:{NFSU2_TR(0x59196a);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B59196c:{NFSU2_TR(0x59196c);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B59196f:{NFSU2_TR(0x59196f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L59197d;}}
}
B591971:L591971:{c.instructions+=4;NFSU2_TR(0x591971);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B591975:{NFSU2_TR(0x591975);
__asm__ volatile(".byte 0xd8,0xf1":::"memory");
}
B591977:{NFSU2_TR(0x591977);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59197b:{NFSU2_TR(0x59197b);
{goto L591985;}
}
B59197d:L59197d:{c.instructions+=1;NFSU2_TR(0x59197d);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B591985:L591985:{c.instructions+=15;NFSU2_TR(0x591985);
{u32 ea_=u32(r4(R+4)+u32(216u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59198b:{NFSU2_TR(0x59198b);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B59198e:{NFSU2_TR(0x59198e);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B591990:{NFSU2_TR(0x591990);
{u32 ea_=u32(r4(R+4)+u32(248u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B591996:{NFSU2_TR(0x591996);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59199c:{NFSU2_TR(0x59199c);
{u32 ea_=u32(r4(R+4)+u32(272u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5919a2:{NFSU2_TR(0x5919a2);
__asm__ volatile(".byte 0xde,0xc9":::"memory");
}
B5919a4:{NFSU2_TR(0x5919a4);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B5919a8:{NFSU2_TR(0x5919a8);
{u32 ea_=u32(r4(R+4)+u32(616u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5919ae:{NFSU2_TR(0x5919ae);
{u32 ea_=u32(r4(R+4)+u32(612u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5919b4:{NFSU2_TR(0x5919b4);
{u32 ea_=u32(r4(R+24)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5919b7:{NFSU2_TR(0x5919b7);
{u32 ea_=u32(r4(R+24)+u32(16u));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B5919ba:{NFSU2_TR(0x5919ba);
__asm__ volatile(".byte 0xde,0xc9":::"memory");
}
B5919bc:{NFSU2_TR(0x5919bc);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5919c2:{NFSU2_TR(0x5919c2);
if(r1(R+518)){{goto L5919d2;}}
}
B5919c4:L5919c4:{c.instructions+=3;NFSU2_TR(0x5919c4);
{u32 ea_=u32(r4(R+4)+u32(224u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5919ca:{NFSU2_TR(0x5919ca);
{u32 ea_=u32(r4(R+4)+u32(256u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5919d0:{NFSU2_TR(0x5919d0);
{goto L5919de;}
}
B5919d2:L5919d2:{c.instructions+=2;NFSU2_TR(0x5919d2);
{u32 ea_=u32(r4(R+4)+u32(220u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5919d8:{NFSU2_TR(0x5919d8);
{u32 ea_=u32(r4(R+4)+u32(252u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5919de:L5919de:{c.instructions+=9;NFSU2_TR(0x5919de);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5919e0:{NFSU2_TR(0x5919e0);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5919e6:{NFSU2_TR(0x5919e6);
{u32 ea_=u32(u32(8371952u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5919ec:{NFSU2_TR(0x5919ec);
w4(R+28,u32(0x86b590ull));
}
B5919f1:{NFSU2_TR(0x5919f1);
{u32 ea_=u32(r4(R+4)+u32(272u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5919f7:{NFSU2_TR(0x5919f7);
__asm__ volatile(".byte 0xde,0xc2":::"memory");
}
B5919f9:{NFSU2_TR(0x5919f9);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5919fb:{NFSU2_TR(0x5919fb);
__asm__ volatile(".byte 0xde,0xc9":::"memory");
}
B5919fd:{NFSU2_TR(0x5919fd);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L591a04;}}
}
B5919ff:L5919ff:{c.instructions+=1;NFSU2_TR(0x5919ff);
w4(R+28,u32(0x86b3c0ull));
}
B591a04:L591a04:{c.instructions+=18;NFSU2_TR(0x591a04);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B591a0a:{NFSU2_TR(0x591a0a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B591a0c:{NFSU2_TR(0x591a0c);
{u32 ea_=u32(u32(8001516u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B591a12:{NFSU2_TR(0x591a12);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B591a14:{NFSU2_TR(0x591a14);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B591a17:{NFSU2_TR(0x591a17);
{u32 ea_=u32(u32(8001516u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B591a1d:{NFSU2_TR(0x591a1d);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B591a23:{NFSU2_TR(0x591a23);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B591a25:{NFSU2_TR(0x591a25);
{u32 ea_=u32(r4(R+0)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B591a28:{NFSU2_TR(0x591a28);
{u32 ea_=u32(u32(8001540u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B591a2e:{NFSU2_TR(0x591a2e);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B591a30:{NFSU2_TR(0x591a30);
{u32 ea_=u32(r4(R+0)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B591a33:{NFSU2_TR(0x591a33);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B591a35:{NFSU2_TR(0x591a35);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B591a37:{NFSU2_TR(0x591a37);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B591a39:{NFSU2_TR(0x591a39);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B591a3b:{NFSU2_TR(0x591a3b);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B591a3e:{NFSU2_TR(0x591a3e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L591a44;}}
}
B591a40:L591a40:{c.instructions+=2;NFSU2_TR(0x591a40);
w1(R+12,u8(0x1ull));
}
B591a42:{NFSU2_TR(0x591a42);
{goto L591a46;}
}
B591a44:L591a44:{c.instructions+=1;NFSU2_TR(0x591a44);
w1(R+12,u8(u32(r1(R+12))^u32(r1(R+12))));
}
B591a46:L591a46:{c.instructions+=2;NFSU2_TR(0x591a46);
u8 U[7];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(r1(R+12))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B591a49:{NFSU2_TR(0x591a49);
if(r1(R+518)){{goto L591aa9;}}
}
B591a4b:L591a4b:{c.instructions+=3;NFSU2_TR(0x591a4b);
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
B591a4d:{NFSU2_TR(0x591a4d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B591a50:{NFSU2_TR(0x591a50);
if(r1(R+518)){{goto L591a62;}}
}
B591a52:L591a52:{c.instructions+=5;NFSU2_TR(0x591a52);
__builtin_memmove((R+4),gp(0x7a1810),4);
}
B591a58:{NFSU2_TR(0x591a58);
__builtin_memmove((R+8),(R+4),4);
}
B591a5a:{NFSU2_TR(0x591a5a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B591a5d:{NFSU2_TR(0x591a5d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B591a60:{NFSU2_TR(0x591a60);
{goto L591aa6;}
}
B591a62:L591a62:{c.instructions+=8;NFSU2_TR(0x591a62);
__builtin_memmove((R+4),gp(0x7a180c),4);
}
B591a68:{NFSU2_TR(0x591a68);
__builtin_memmove((R+8),(R+4),4);
}
B591a6a:{NFSU2_TR(0x591a6a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B591a6d:{NFSU2_TR(0x591a6d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B591a70:{NFSU2_TR(0x591a70);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B591a73:{NFSU2_TR(0x591a73);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B591a77:{NFSU2_TR(0x591a77);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B591a78:{NFSU2_TR(0x591a78);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x591a7dull));
TAIL_STATIC(0x574c10u,574);
}
B591a7d:L591a7d:{c.instructions+=10;NFSU2_TR(0x591a7d);
{u32 ea_=u32(u32(8001544u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B591a83:{NFSU2_TR(0x591a83);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B591a87:{NFSU2_TR(0x591a87);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B591a8b:{NFSU2_TR(0x591a8b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B591a8c:{NFSU2_TR(0x591a8c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B591a8f:{NFSU2_TR(0x591a8f);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B591a93:{NFSU2_TR(0x591a93);
{u32 ea_=u32(u32(8001544u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B591a99:{NFSU2_TR(0x591a99);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B591a9d:{NFSU2_TR(0x591a9d);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B591aa1:{NFSU2_TR(0x591aa1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x591aa6ull));
TAIL_STATIC(0x574b50u,574);
}
B591aa6:L591aa6:{c.instructions+=1;NFSU2_TR(0x591aa6);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B591aa9:L591aa9:{c.instructions+=4;NFSU2_TR(0x591aa9);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B591aad:{NFSU2_TR(0x591aad);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B591aae:{NFSU2_TR(0x591aae);
__builtin_memmove((R+4),(R+28),4);
}
B591ab0:{NFSU2_TR(0x591ab0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x591ab5ull));
TAIL_STATIC(0x576790u,576);
}
B591ab5:L591ab5:{c.instructions+=6;NFSU2_TR(0x591ab5);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B591ab9:{NFSU2_TR(0x591ab9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B591aba:{NFSU2_TR(0x591aba);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B591abb:{NFSU2_TR(0x591abb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B591abc:{NFSU2_TR(0x591abc);
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
B591abf:{NFSU2_TR(0x591abf);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B591ad0:L591ad0:{c.instructions+=20;NFSU2_TR(0x591ad0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B591ad1:{NFSU2_TR(0x591ad1);
__builtin_memmove((R+20),(R+16),4);
}
B591ad3:{NFSU2_TR(0x591ad3);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B591ad6:{NFSU2_TR(0x591ad6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x1cull))));
}
B591ad9:{NFSU2_TR(0x591ad9);
{u32 ea_=u32(r4(R+20)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B591adc:{NFSU2_TR(0x591adc);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B591add:{NFSU2_TR(0x591add);
__builtin_memmove((R+24),(R+4),4);
}
B591adf:{NFSU2_TR(0x591adf);
{u32 ea_=u32(r4(R+24)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B591ae2:{NFSU2_TR(0x591ae2);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B591ae4:{NFSU2_TR(0x591ae4);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B591ae8:{NFSU2_TR(0x591ae8);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B591aee:{NFSU2_TR(0x591aee);
{u32 ea_=u32(r4(R+24)+u32(32u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B591af1:{NFSU2_TR(0x591af1);
{u32 ea_=u32(r4(R+20)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B591af4:{NFSU2_TR(0x591af4);
{u32 ea_=u32(r4(R+24)+u32(28u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B591af7:{NFSU2_TR(0x591af7);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B591afb:{NFSU2_TR(0x591afb);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B591aff:{NFSU2_TR(0x591aff);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B591b00:{NFSU2_TR(0x591b00);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B591b01:{NFSU2_TR(0x591b01);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B591b04:{NFSU2_TR(0x591b04);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x591b09ull));
TAIL_STATIC(0x570640u,570);
}
B591b09:L591b09:{c.instructions+=13;NFSU2_TR(0x591b09);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B591b0d:{NFSU2_TR(0x591b0d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B591b10:{NFSU2_TR(0x591b10);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B591b14:{NFSU2_TR(0x591b14);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B591b16:{NFSU2_TR(0x591b16);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B591b1a:{NFSU2_TR(0x591b1a);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B591b1d:{NFSU2_TR(0x591b1d);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B591b21:{NFSU2_TR(0x591b21);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B591b24:{NFSU2_TR(0x591b24);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B591b28:{NFSU2_TR(0x591b28);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B591b2e:{NFSU2_TR(0x591b2e);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B591b30:{NFSU2_TR(0x591b30);
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
B591b33:{NFSU2_TR(0x591b33);
if(r1(R+514)){{goto L591b5e;}}
}
B591b35:L591b35:{c.instructions+=8;NFSU2_TR(0x591b35);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B591b38:{NFSU2_TR(0x591b38);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B591b3b:{NFSU2_TR(0x591b3b);
{u32 ea_=u32(r4(R+8)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B591b3e:{NFSU2_TR(0x591b3e);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B591b42:{NFSU2_TR(0x591b42);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B591b44:{NFSU2_TR(0x591b44);
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
B591b47:{NFSU2_TR(0x591b47);
__builtin_memmove((R+0),(R+4),4);
}
B591b49:{NFSU2_TR(0x591b49);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L591b55;}}
}
B591b4b:L591b4b:{c.instructions+=5;NFSU2_TR(0x591b4b);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B591b4e:{NFSU2_TR(0x591b4e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B591b4f:{NFSU2_TR(0x591b4f);
__builtin_memmove((R+16),(R+20),4);
}
B591b51:{NFSU2_TR(0x591b51);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B591b52:{NFSU2_TR(0x591b52);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B591b55:L591b55:{c.instructions+=5;NFSU2_TR(0x591b55);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B591b57:{NFSU2_TR(0x591b57);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B591b58:{NFSU2_TR(0x591b58);
__builtin_memmove((R+16),(R+20),4);
}
B591b5a:{NFSU2_TR(0x591b5a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B591b5b:{NFSU2_TR(0x591b5b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B591b5e:L591b5e:{c.instructions+=5;NFSU2_TR(0x591b5e);
__builtin_memmove((R+0),(R+4),4);
}
B591b60:{NFSU2_TR(0x591b60);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B591b61:{NFSU2_TR(0x591b61);
__builtin_memmove((R+16),(R+20),4);
}
B591b63:{NFSU2_TR(0x591b63);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B591b64:{NFSU2_TR(0x591b64);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B591b70:L591b70:{c.instructions+=20;NFSU2_TR(0x591b70);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B591b71:{NFSU2_TR(0x591b71);
__builtin_memmove((R+20),(R+16),4);
}
B591b73:{NFSU2_TR(0x591b73);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B591b76:{NFSU2_TR(0x591b76);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x20ull))));
}
B591b79:{NFSU2_TR(0x591b79);
{u32 ea_=u32(r4(R+20)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B591b7c:{NFSU2_TR(0x591b7c);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B591b7e:{NFSU2_TR(0x591b7e);
{u32 ea_=u32(r4(R+4)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B591b81:{NFSU2_TR(0x591b81);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B591b82:{NFSU2_TR(0x591b82);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B591b86:{NFSU2_TR(0x591b86);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B591b88:{NFSU2_TR(0x591b88);
{u32 ea_=u32(r4(R+4)+u32(32u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B591b8b:{NFSU2_TR(0x591b8b);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B591b8f:{NFSU2_TR(0x591b8f);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B591b95:{NFSU2_TR(0x591b95);
{u32 ea_=u32(r4(R+4)+u32(32u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B591b98:{NFSU2_TR(0x591b98);
{u32 ea_=u32(r4(R+20)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B591b9b:{NFSU2_TR(0x591b9b);
{u32 ea_=u32(r4(R+4)+u32(28u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B591b9e:{NFSU2_TR(0x591b9e);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B591ba1:{NFSU2_TR(0x591ba1);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B591ba4:{NFSU2_TR(0x591ba4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B591ba5:{NFSU2_TR(0x591ba5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x591baaull));
TAIL_STATIC(0x570640u,570);
}
B591baa:L591baa:{c.instructions+=13;NFSU2_TR(0x591baa);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B591bae:{NFSU2_TR(0x591bae);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B591bb2:{NFSU2_TR(0x591bb2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B591bb5:{NFSU2_TR(0x591bb5);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B591bb7:{NFSU2_TR(0x591bb7);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B591bbb:{NFSU2_TR(0x591bbb);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B591bbf:{NFSU2_TR(0x591bbf);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B591bc2:{NFSU2_TR(0x591bc2);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B591bc6:{NFSU2_TR(0x591bc6);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B591bca:{NFSU2_TR(0x591bca);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B591bcd:{NFSU2_TR(0x591bcd);
__builtin_memmove((R+16),(R+20),4);
}
B591bcf:{NFSU2_TR(0x591bcf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B591bd0:{NFSU2_TR(0x591bd0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B591be0:L591be0:{c.instructions+=26;NFSU2_TR(0x591be0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B591be1:{NFSU2_TR(0x591be1);
__builtin_memmove((R+20),(R+16),4);
}
B591be3:{NFSU2_TR(0x591be3);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B591be6:{NFSU2_TR(0x591be6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x48ull))));
}
B591be9:{NFSU2_TR(0x591be9);
{u32 ea_=u32(r4(R+20)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B591bec:{NFSU2_TR(0x591bec);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B591bed:{NFSU2_TR(0x591bed);
__builtin_memmove((R+24),(R+4),4);
}
B591bef:{NFSU2_TR(0x591bef);
{u32 ea_=u32(r4(R+24)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B591bf2:{NFSU2_TR(0x591bf2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B591bf5:{NFSU2_TR(0x591bf5);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B591bfb:{NFSU2_TR(0x591bfb);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B591bfc:{NFSU2_TR(0x591bfc);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B591bfe:{NFSU2_TR(0x591bfe);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B591c00:{NFSU2_TR(0x591c00);
u8 U[4];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B591c04:{NFSU2_TR(0x591c04);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B591c08:{NFSU2_TR(0x591c08);
{u32 ea_=u32(r4(R+24)+u32(32u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B591c0b:{NFSU2_TR(0x591c0b);
{u32 ea_=u32(r4(R+20)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B591c0e:{NFSU2_TR(0x591c0e);
{u32 ea_=u32(r4(R+24)+u32(28u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B591c11:{NFSU2_TR(0x591c11);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B591c15:{NFSU2_TR(0x591c15);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B591c19:{NFSU2_TR(0x591c19);
{u32 ea_=u32(r4(R+24)+u32(32u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B591c1c:{NFSU2_TR(0x591c1c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B591c1d:{NFSU2_TR(0x591c1d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B591c1e:{NFSU2_TR(0x591c1e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B591c21:{NFSU2_TR(0x591c21);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B591c25:{NFSU2_TR(0x591c25);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x591c2aull));
TAIL_STATIC(0x570640u,570);
}
B591c2a:L591c2a:{c.instructions+=18;NFSU2_TR(0x591c2a);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B591c2e:{NFSU2_TR(0x591c2e);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B591c32:{NFSU2_TR(0x591c32);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B591c36:{NFSU2_TR(0x591c36);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B591c39:{NFSU2_TR(0x591c39);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B591c3b:{NFSU2_TR(0x591c3b);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B591c3f:{NFSU2_TR(0x591c3f);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B591c43:{NFSU2_TR(0x591c43);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B591c45:{NFSU2_TR(0x591c45);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B591c46:{NFSU2_TR(0x591c46);
u8 U[4];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B591c4a:{NFSU2_TR(0x591c4a);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B591c4e:{NFSU2_TR(0x591c4e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B591c4f:{NFSU2_TR(0x591c4f);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B591c53:{NFSU2_TR(0x591c53);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B591c57:{NFSU2_TR(0x591c57);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B591c5b:{NFSU2_TR(0x591c5b);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B591c5f:{NFSU2_TR(0x591c5f);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B591c63:{NFSU2_TR(0x591c63);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x591c68ull));
TAIL_STATIC(0x570640u,570);
}
B591c68:L591c68:{c.instructions+=31;NFSU2_TR(0x591c68);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B591c6c:{NFSU2_TR(0x591c6c);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B591c70:{NFSU2_TR(0x591c70);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B591c74:{NFSU2_TR(0x591c74);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B591c77:{NFSU2_TR(0x591c77);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B591c7b:{NFSU2_TR(0x591c7b);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B591c7f:{NFSU2_TR(0x591c7f);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B591c83:{NFSU2_TR(0x591c83);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B591c84:{NFSU2_TR(0x591c84);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B591c85:{NFSU2_TR(0x591c85);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B591c89:{NFSU2_TR(0x591c89);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B591c8b:{NFSU2_TR(0x591c8b);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B591c8f:{NFSU2_TR(0x591c8f);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B591c93:{NFSU2_TR(0x591c93);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B591c97:{NFSU2_TR(0x591c97);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B591c9b:{NFSU2_TR(0x591c9b);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B591c9f:{NFSU2_TR(0x591c9f);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B591ca3:{NFSU2_TR(0x591ca3);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B591ca7:{NFSU2_TR(0x591ca7);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B591cab:{NFSU2_TR(0x591cab);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B591caf:{NFSU2_TR(0x591caf);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B591cb3:{NFSU2_TR(0x591cb3);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B591cb7:{NFSU2_TR(0x591cb7);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B591cbb:{NFSU2_TR(0x591cbb);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B591cbf:{NFSU2_TR(0x591cbf);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B591cc1:{NFSU2_TR(0x591cc1);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B591cc3:{NFSU2_TR(0x591cc3);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B591cc6:{NFSU2_TR(0x591cc6);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B591cc9:{NFSU2_TR(0x591cc9);
__builtin_memmove((R+16),(R+20),4);
}
B591ccb:{NFSU2_TR(0x591ccb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B591ccc:{NFSU2_TR(0x591ccc);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B591cd0:L591cd0:{c.instructions+=9;NFSU2_TR(0x591cd0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B591cd1:{NFSU2_TR(0x591cd1);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B591cd2:{NFSU2_TR(0x591cd2);
__builtin_memmove((R+24),(R+4),4);
}
B591cd4:{NFSU2_TR(0x591cd4);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B591cd5:{NFSU2_TR(0x591cd5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+28),(U+0),4);
}
B591cd7:{NFSU2_TR(0x591cd7);
{u32 ea_=u32(r4(R+28)+u32(672u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B591cdd:{NFSU2_TR(0x591cdd);
{u32 ea_=u32(u32(7881316u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B591ce3:{NFSU2_TR(0x591ce3);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B591ce9:{NFSU2_TR(0x591ce9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x591ceeull));
TAIL_STATIC(0x75bed4u,75b);
}
B591cee:L591cee:{c.instructions+=5;NFSU2_TR(0x591cee);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x414ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B591cf4:{NFSU2_TR(0x591cf4);
{u32 ea_=u32(r4(R+28)+u32(672u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B591cfa:{NFSU2_TR(0x591cfa);
{u32 ea_=u32(u32(7881316u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B591d00:{NFSU2_TR(0x591d00);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B591d06:{NFSU2_TR(0x591d06);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x591d0bull));
TAIL_STATIC(0x75bed4u,75b);
}
B591d0b:L591d0b:{c.instructions+=5;NFSU2_TR(0x591d0b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x41cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B591d11:{NFSU2_TR(0x591d11);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x2a4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B591d17:{NFSU2_TR(0x591d17);
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
B591d19:{NFSU2_TR(0x591d19);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B591d1d:{NFSU2_TR(0x591d1d);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L591d4e;}}
}
B591d1f:L591d1f:{c.instructions+=5;NFSU2_TR(0x591d1f);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B591d23:{NFSU2_TR(0x591d23);
{u32 ea_=u32(r4(R+28)+u32(672u));__asm__ volatile(".byte 0xd8,0x38"::"a"(ea_):"memory");}
}
B591d29:{NFSU2_TR(0x591d29);
{u32 ea_=u32(u32(7881316u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B591d2f:{NFSU2_TR(0x591d2f);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B591d35:{NFSU2_TR(0x591d35);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x591d3aull));
TAIL_STATIC(0x75bed4u,75b);
}
B591d3a:L591d3a:{c.instructions+=6;NFSU2_TR(0x591d3a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B591d3b:{NFSU2_TR(0x591d3b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x418ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B591d41:{NFSU2_TR(0x591d41);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x420ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B591d4b:{NFSU2_TR(0x591d4b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B591d4c:{NFSU2_TR(0x591d4c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B591d4d:{NFSU2_TR(0x591d4d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B591d4e:L591d4e:{c.instructions+=6;NFSU2_TR(0x591d4e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B591d4f:{NFSU2_TR(0x591d4f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x418ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B591d59:{NFSU2_TR(0x591d59);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x420ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B591d63:{NFSU2_TR(0x591d63);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B591d64:{NFSU2_TR(0x591d64);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B591d65:{NFSU2_TR(0x591d65);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B591d70:L591d70:{c.instructions+=7;NFSU2_TR(0x591d70);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x364ull))));
__builtin_memmove((R+0),(U+0),4);
}
B591d76:{NFSU2_TR(0x591d76);
w4(R+4,u32(0x1ull));
}
B591d7b:{NFSU2_TR(0x591d7b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B591d7d:{NFSU2_TR(0x591d7d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B591d80:{NFSU2_TR(0x591d80);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B591d83:{NFSU2_TR(0x591d83);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B591d86:{NFSU2_TR(0x591d86);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B591d90:L591d90:{c.instructions+=8;NFSU2_TR(0x591d90);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B591d91:{NFSU2_TR(0x591d91);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B591d92:{NFSU2_TR(0x591d92);
__builtin_memmove((R+24),(R+4),4);
}
B591d94:{NFSU2_TR(0x591d94);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B591d97:{NFSU2_TR(0x591d97);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B591d9a:{NFSU2_TR(0x591d9a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B591d9b:{NFSU2_TR(0x591d9b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B591d9c:{NFSU2_TR(0x591d9c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x591da1ull));
TAIL_STATIC(0x43c570u,43c);
}
B591da1:L591da1:{c.instructions+=12;NFSU2_TR(0x591da1);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3ccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+8),(U+4),2);
}
B591da8:{NFSU2_TR(0x591da8);
w2(R+8,u16(u32(r2(R+8))-u32(r2(R+0))));
}
B591dab:{NFSU2_TR(0x591dab);
w4(R+0,u32(r2(R+8)));
}
B591dae:{NFSU2_TR(0x591dae);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B591db2:{NFSU2_TR(0x591db2);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B591db5:{NFSU2_TR(0x591db5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B591db6:{NFSU2_TR(0x591db6);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B591dba:{NFSU2_TR(0x591dba);
{u32 ea_=u32(u32(7881280u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B591dc0:{NFSU2_TR(0x591dc0);
{u32 ea_=u32(u32(8001416u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B591dc6:{NFSU2_TR(0x591dc6);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B591dc8:{NFSU2_TR(0x591dc8);
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
B591dcb:{NFSU2_TR(0x591dcb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L591dd7;}}
}
B591dcd:L591dcd:{c.instructions+=3;NFSU2_TR(0x591dcd);
{u32 ea_=u32(u32(8001416u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B591dd3:{NFSU2_TR(0x591dd3);
__asm__ volatile(".byte 0xdc,0xc0":::"memory");
}
B591dd5:{NFSU2_TR(0x591dd5);
__asm__ volatile(".byte 0xde,0xe9":::"memory");
}
B591dd7:L591dd7:{c.instructions+=2;NFSU2_TR(0x591dd7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B591dd8:{NFSU2_TR(0x591dd8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B591de0:L591de0:{c.instructions+=12;NFSU2_TR(0x591de0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B591de1:{NFSU2_TR(0x591de1);
__builtin_memmove((R+20),(R+16),4);
}
B591de3:{NFSU2_TR(0x591de3);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B591de6:{NFSU2_TR(0x591de6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x24ull))));
}
B591de9:{NFSU2_TR(0x591de9);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B591dea:{NFSU2_TR(0x591dea);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B591deb:{NFSU2_TR(0x591deb);
__builtin_memmove((R+24),(R+4),4);
}
B591ded:{NFSU2_TR(0x591ded);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x480ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B591df3:{NFSU2_TR(0x591df3);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B591df5:{NFSU2_TR(0x591df5);
u8 U[5];
__builtin_memmove((U+3),(R+12),1);
w1(R+512,u8((r1(R+0))<(r1(U+3))));
w1(R+523,sborrow<u8>(r1(R+0),r1(U+3)));
w1(U+4,u8(u32(r1(R+0))-u32(r1(U+3))));
w1(R+519,u8(s8(r1(U+4))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+4))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+4))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B591df7:{NFSU2_TR(0x591df7);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B591df8:{NFSU2_TR(0x591df8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L591fab;}}
}
B591dfe:L591dfe:{c.instructions+=11;NFSU2_TR(0x591dfe);
{u32 ea_=u32(r4(R+24)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B591e01:{NFSU2_TR(0x591e01);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B591e04:{NFSU2_TR(0x591e04);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B591e08:{NFSU2_TR(0x591e08);
{u32 ea_=u32(r4(R+24)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B591e0b:{NFSU2_TR(0x591e0b);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B591e0f:{NFSU2_TR(0x591e0f);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B591e13:{NFSU2_TR(0x591e13);
{u32 ea_=u32(r4(R+24)+u32(1004u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B591e19:{NFSU2_TR(0x591e19);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B591e1f:{NFSU2_TR(0x591e1f);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B591e21:{NFSU2_TR(0x591e21);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B591e24:{NFSU2_TR(0x591e24);
if(r1(R+514)){{goto L591e4e;}}
}
B591e26:L591e26:{c.instructions+=12;NFSU2_TR(0x591e26);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B591e2a:{NFSU2_TR(0x591e2a);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B591e2c:{NFSU2_TR(0x591e2c);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B591e30:{NFSU2_TR(0x591e30);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B591e32:{NFSU2_TR(0x591e32);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B591e36:{NFSU2_TR(0x591e36);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B591e38:{NFSU2_TR(0x591e38);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B591e3c:{NFSU2_TR(0x591e3c);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B591e40:{NFSU2_TR(0x591e40);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B591e42:{NFSU2_TR(0x591e42);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B591e46:{NFSU2_TR(0x591e46);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B591e4a:{NFSU2_TR(0x591e4a);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B591e4e:L591e4e:{c.instructions+=3;NFSU2_TR(0x591e4e);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x440ull))));
__builtin_memmove((R+28),(U+0),4);
}
B591e54:{NFSU2_TR(0x591e54);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B591e55:{NFSU2_TR(0x591e55);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x591e5aull));
TAIL_STATIC(0x43c780u,43c);
}
B591e5a:L591e5a:{c.instructions+=13;NFSU2_TR(0x591e5a);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B591e5e:{NFSU2_TR(0x591e5e);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B591e62:{NFSU2_TR(0x591e62);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B591e65:{NFSU2_TR(0x591e65);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B591e69:{NFSU2_TR(0x591e69);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B591e6d:{NFSU2_TR(0x591e6d);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B591e6f:{NFSU2_TR(0x591e6f);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B591e73:{NFSU2_TR(0x591e73);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B591e77:{NFSU2_TR(0x591e77);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B591e79:{NFSU2_TR(0x591e79);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B591e7f:{NFSU2_TR(0x591e7f);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B591e81:{NFSU2_TR(0x591e81);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B591e84:{NFSU2_TR(0x591e84);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L591f12;}}
}
B591e8a:L591e8a:{c.instructions+=25;NFSU2_TR(0x591e8a);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B591e8e:{NFSU2_TR(0x591e8e);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B591e92:{NFSU2_TR(0x591e92);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B591e96:{NFSU2_TR(0x591e96);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B591e9a:{NFSU2_TR(0x591e9a);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+28)),r4(U+0));
}
B591e9c:{NFSU2_TR(0x591e9c);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B591e9e:{NFSU2_TR(0x591e9e);
{u32 ea_=u32(r4(R+28)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B591ea1:{NFSU2_TR(0x591ea1);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B591ea4:{NFSU2_TR(0x591ea4);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B591ea7:{NFSU2_TR(0x591ea7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x450ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B591ead:{NFSU2_TR(0x591ead);
{u32 ea_=u32(r4(R+24)+u32(1108u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B591eb3:{NFSU2_TR(0x591eb3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x458ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B591eb9:{NFSU2_TR(0x591eb9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x45cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B591ebf:{NFSU2_TR(0x591ebf);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x460ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B591ec5:{NFSU2_TR(0x591ec5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x464ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B591ecb:{NFSU2_TR(0x591ecb);
w4(R+0,u32(0x3f800000ull));
}
B591ed0:{NFSU2_TR(0x591ed0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x468ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B591ed6:{NFSU2_TR(0x591ed6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x46cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B591edc:{NFSU2_TR(0x591edc);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B591edd:{NFSU2_TR(0x591edd);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B591ede:{NFSU2_TR(0x591ede);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x470ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B591ee4:{NFSU2_TR(0x591ee4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x474ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B591eea:{NFSU2_TR(0x591eea);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x478ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B591ef0:{NFSU2_TR(0x591ef0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x47cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B591ef6:{NFSU2_TR(0x591ef6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x591efbull));
TAIL_STATIC(0x5bb0d0u,5bb);
}
B591efb:L591efb:{c.instructions+=9;NFSU2_TR(0x591efb);
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
B591efe:{NFSU2_TR(0x591efe);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x480ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B591f05:{NFSU2_TR(0x591f05);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x440ull))));
__builtin_memmove((R+0),(U+0),4);
}
B591f0b:{NFSU2_TR(0x591f0b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B591f0c:{NFSU2_TR(0x591f0c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B591f0d:{NFSU2_TR(0x591f0d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B591f0e:{NFSU2_TR(0x591f0e);
__builtin_memmove((R+16),(R+20),4);
}
B591f10:{NFSU2_TR(0x591f10);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B591f11:{NFSU2_TR(0x591f11);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B591f12:L591f12:{c.instructions+=4;NFSU2_TR(0x591f12);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B591f14:{NFSU2_TR(0x591f14);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3ccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+4),(U+4),2);
}
B591f1b:{NFSU2_TR(0x591f1b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B591f1c:{NFSU2_TR(0x591f1c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x591f21ull));
TAIL_STATIC(0x43c2b0u,43c);
}
B591f21:L591f21:{c.instructions+=5;NFSU2_TR(0x591f21);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B591f25:{NFSU2_TR(0x591f25);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B591f27:{NFSU2_TR(0x591f27);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3ccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+8),(U+4),2);
}
B591f2e:{NFSU2_TR(0x591f2e);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B591f2f:{NFSU2_TR(0x591f2f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x591f34ull));
TAIL_STATIC(0x43c370u,43c);
}
B591f34:L591f34:{c.instructions+=25;NFSU2_TR(0x591f34);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B591f38:{NFSU2_TR(0x591f38);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B591f3c:{NFSU2_TR(0x591f3c);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B591f3e:{NFSU2_TR(0x591f3e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+28)),r4(U+0));
}
B591f40:{NFSU2_TR(0x591f40);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B591f42:{NFSU2_TR(0x591f42);
{u32 ea_=u32(r4(R+28)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B591f45:{NFSU2_TR(0x591f45);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B591f48:{NFSU2_TR(0x591f48);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B591f4b:{NFSU2_TR(0x591f4b);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B591f4d:{NFSU2_TR(0x591f4d);
{u32 ea_=u32(r4(R+24)+u32(1104u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B591f53:{NFSU2_TR(0x591f53);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x458ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B591f59:{NFSU2_TR(0x591f59);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x45cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B591f5f:{NFSU2_TR(0x591f5f);
{u32 ea_=u32(r4(R+24)+u32(1108u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B591f65:{NFSU2_TR(0x591f65);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x460ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B591f6b:{NFSU2_TR(0x591f6b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x464ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B591f71:{NFSU2_TR(0x591f71);
w4(R+0,u32(0x3f800000ull));
}
B591f76:{NFSU2_TR(0x591f76);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x468ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B591f7c:{NFSU2_TR(0x591f7c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x46cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B591f82:{NFSU2_TR(0x591f82);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B591f83:{NFSU2_TR(0x591f83);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B591f84:{NFSU2_TR(0x591f84);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x470ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B591f8a:{NFSU2_TR(0x591f8a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x474ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B591f90:{NFSU2_TR(0x591f90);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x478ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B591f96:{NFSU2_TR(0x591f96);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x47cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B591f9c:{NFSU2_TR(0x591f9c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x591fa1ull));
TAIL_STATIC(0x5bb0d0u,5bb);
}
B591fa1:L591fa1:{c.instructions+=2;NFSU2_TR(0x591fa1);
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
B591fa4:{NFSU2_TR(0x591fa4);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x480ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B591fab:L591fab:{c.instructions+=7;NFSU2_TR(0x591fab);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B591fac:{NFSU2_TR(0x591fac);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x440ull))));
__builtin_memmove((R+0),(U+0),4);
}
B591fb2:{NFSU2_TR(0x591fb2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B591fb3:{NFSU2_TR(0x591fb3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B591fb4:{NFSU2_TR(0x591fb4);
__builtin_memmove((R+16),(R+20),4);
}
B591fb6:{NFSU2_TR(0x591fb6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B591fb7:{NFSU2_TR(0x591fb7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B591fc0:L591fc0:{c.instructions+=7;NFSU2_TR(0x591fc0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B591fc1:{NFSU2_TR(0x591fc1);
__builtin_memmove((R+20),(R+16),4);
}
B591fc3:{NFSU2_TR(0x591fc3);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B591fc6:{NFSU2_TR(0x591fc6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x5cull))));
}
B591fc9:{NFSU2_TR(0x591fc9);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B591fca:{NFSU2_TR(0x591fca);
__builtin_memmove((R+24),(R+4),4);
}
B591fcc:{NFSU2_TR(0x591fcc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x591fd1ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x591de0u);}goto L591de0;}
}
B591fd1:L591fd1:{c.instructions+=4;NFSU2_TR(0x591fd1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B591fd2:{NFSU2_TR(0x591fd2);
u8 U[4];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B591fd6:{NFSU2_TR(0x591fd6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B591fd7:{NFSU2_TR(0x591fd7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x591fdcull));
TAIL_STATIC(0x43c9d0u,43c);
}
B591fdc:L591fdc:{c.instructions+=11;NFSU2_TR(0x591fdc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B591fdf:{NFSU2_TR(0x591fdf);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B591fe1:{NFSU2_TR(0x591fe1);
u8 U[4];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B591fe5:{NFSU2_TR(0x591fe5);
{u32 ea_=u32(r4(R+24)+u32(32u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B591fe8:{NFSU2_TR(0x591fe8);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B591fe9:{NFSU2_TR(0x591fe9);
u8 U[4];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B591fed:{NFSU2_TR(0x591fed);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B591fee:{NFSU2_TR(0x591fee);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B591ff2:{NFSU2_TR(0x591ff2);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B591ffa:{NFSU2_TR(0x591ffa);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B591ffd:{NFSU2_TR(0x591ffd);
{u32 ea_=u32(r4(R+24)+u32(36u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
TAIL_STATIC(0x592000u,592);
}
XIT:NFSU2_TR_EXIT(0x591,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
