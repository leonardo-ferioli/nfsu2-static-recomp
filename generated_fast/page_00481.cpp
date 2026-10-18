#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_43b(u8* __restrict R,Cpu& c);
u32 body_43e(u8* __restrict R,Cpu& c);
u32 body_440(u8* __restrict R,Cpu& c);
u32 body_459(u8* __restrict R,Cpu& c);
u32 body_45b(u8* __restrict R,Cpu& c);
u32 body_46a(u8* __restrict R,Cpu& c);
u32 body_46c(u8* __restrict R,Cpu& c);
u32 body_479(u8* __restrict R,Cpu& c);
u32 body_47a(u8* __restrict R,Cpu& c);
u32 body_47b(u8* __restrict R,Cpu& c);
u32 body_480(u8* __restrict R,Cpu& c);
u32 body_482(u8* __restrict R,Cpu& c);
u32 body_483(u8* __restrict R,Cpu& c);
u32 body_4fe(u8* __restrict R,Cpu& c);
u32 body_502(u8* __restrict R,Cpu& c);
u32 body_575(u8* __restrict R,Cpu& c);
u32 body_5e0(u8* __restrict R,Cpu& c);
u32 body_5e5(u8* __restrict R,Cpu& c);
u32 body_6f5(u8* __restrict R,Cpu& c);
u32 body_736(u8* __restrict R,Cpu& c);
u32 body_739(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x481,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x481,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_481(u8* __restrict R,Cpu& c);
u32 page_481(Cpu& c){return body_481(c.regs.data(),c);}
__attribute__((noinline)) u32 body_481(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x481000:goto L481000;
case 0x481002:goto L481002;
case 0x481003:c.instructions+=1;goto B481003;
case 0x481008:goto L481008;
case 0x48100b:c.instructions+=1;goto B48100b;
case 0x481011:goto L481011;
case 0x481017:c.instructions+=2;goto B481017;
case 0x481019:c.instructions+=1;goto B481019;
case 0x48101b:goto L48101b;
case 0x48101c:c.instructions+=1;goto B48101c;
case 0x481021:goto L481021;
case 0x481024:c.instructions+=1;goto B481024;
case 0x48102a:goto L48102a;
case 0x481030:c.instructions+=2;goto B481030;
case 0x481032:c.instructions+=1;goto B481032;
case 0x481034:goto L481034;
case 0x481035:c.instructions+=1;goto B481035;
case 0x48103a:goto L48103a;
case 0x48103d:c.instructions+=1;goto B48103d;
case 0x481043:goto L481043;
case 0x481046:c.instructions+=2;goto B481046;
case 0x481048:c.instructions+=1;goto B481048;
case 0x48104a:goto L48104a;
case 0x48104c:c.instructions+=2;goto B48104c;
case 0x48104e:c.instructions+=1;goto B48104e;
case 0x481050:goto L481050;
case 0x481053:goto L481053;
case 0x481056:c.instructions+=2;goto B481056;
case 0x481058:c.instructions+=1;goto B481058;
case 0x48105a:goto L48105a;
case 0x48105c:c.instructions+=1;goto B48105c;
case 0x48105f:goto L48105f;
case 0x481062:c.instructions+=2;goto B481062;
case 0x481064:c.instructions+=1;goto B481064;
case 0x481066:goto L481066;
case 0x481068:c.instructions+=2;goto B481068;
case 0x48106a:c.instructions+=1;goto B48106a;
case 0x48106c:goto L48106c;
case 0x48106f:goto L48106f;
case 0x481070:c.instructions+=2;goto B481070;
case 0x481071:c.instructions+=1;goto B481071;
case 0x481076:goto L481076;
case 0x481077:c.instructions+=2;goto B481077;
case 0x481078:c.instructions+=1;goto B481078;
case 0x481080:goto L481080;
case 0x481081:c.instructions+=3;goto B481081;
case 0x481087:c.instructions+=2;goto B481087;
case 0x481089:c.instructions+=1;goto B481089;
case 0x48108b:goto L48108b;
case 0x481091:c.instructions+=2;goto B481091;
case 0x481094:c.instructions+=1;goto B481094;
case 0x481096:goto L481096;
case 0x48109c:c.instructions+=4;goto B48109c;
case 0x4810a6:c.instructions+=3;goto B4810a6;
case 0x4810ab:c.instructions+=2;goto B4810ab;
case 0x4810ad:c.instructions+=1;goto B4810ad;
case 0x4810af:goto L4810af;
case 0x4810b5:c.instructions+=2;goto B4810b5;
case 0x4810b7:c.instructions+=1;goto B4810b7;
case 0x4810b9:goto L4810b9;
case 0x4810bf:c.instructions+=3;goto B4810bf;
case 0x4810c1:c.instructions+=2;goto B4810c1;
case 0x4810c2:c.instructions+=1;goto B4810c2;
case 0x4810c7:goto L4810c7;
case 0x4810ca:c.instructions+=1;goto B4810ca;
case 0x4810d1:goto L4810d1;
case 0x4810d7:c.instructions+=3;goto B4810d7;
case 0x4810d9:c.instructions+=2;goto B4810d9;
case 0x4810da:c.instructions+=1;goto B4810da;
case 0x4810dc:goto L4810dc;
case 0x4810e1:goto L4810e1;
case 0x4810f0:goto L4810f0;
case 0x4810f4:c.instructions+=4;goto B4810f4;
case 0x4810f6:c.instructions+=3;goto B4810f6;
case 0x4810f7:c.instructions+=2;goto B4810f7;
case 0x4810f9:c.instructions+=1;goto B4810f9;
case 0x4810fb:goto L4810fb;
case 0x4810fe:c.instructions+=3;goto B4810fe;
case 0x481100:c.instructions+=2;goto B481100;
case 0x481104:c.instructions+=1;goto B481104;
case 0x481106:goto L481106;
case 0x48110a:c.instructions+=2;goto B48110a;
case 0x48110b:c.instructions+=1;goto B48110b;
case 0x48110e:goto L48110e;
case 0x481112:goto L481112;
case 0x481113:c.instructions+=5;goto B481113;
case 0x481117:c.instructions+=4;goto B481117;
case 0x48111a:c.instructions+=3;goto B48111a;
case 0x48111b:c.instructions+=2;goto B48111b;
case 0x48111e:c.instructions+=1;goto B48111e;
case 0x481120:goto L481120;
case 0x481123:c.instructions+=1;goto B481123;
case 0x481125:goto L481125;
case 0x481128:c.instructions+=1;goto B481128;
case 0x48112a:goto L48112a;
case 0x481130:c.instructions+=2;goto B481130;
case 0x481132:c.instructions+=1;goto B481132;
case 0x481134:goto L481134;
case 0x48113a:c.instructions+=2;goto B48113a;
case 0x48113d:c.instructions+=1;goto B48113d;
case 0x48113f:goto L48113f;
case 0x481145:c.instructions+=4;goto B481145;
case 0x48114f:c.instructions+=3;goto B48114f;
case 0x481154:c.instructions+=2;goto B481154;
case 0x481156:c.instructions+=1;goto B481156;
case 0x481158:goto L481158;
case 0x48115e:c.instructions+=2;goto B48115e;
case 0x481160:c.instructions+=1;goto B481160;
case 0x481162:goto L481162;
case 0x481168:c.instructions+=3;goto B481168;
case 0x48116a:c.instructions+=2;goto B48116a;
case 0x48116b:c.instructions+=1;goto B48116b;
case 0x481170:goto L481170;
case 0x481173:c.instructions+=1;goto B481173;
case 0x48117a:goto L48117a;
case 0x481180:c.instructions+=2;goto B481180;
case 0x481182:c.instructions+=1;goto B481182;
case 0x481184:goto L481184;
case 0x481189:goto L481189;
case 0x48118c:c.instructions+=1;goto B48118c;
case 0x48118e:goto L48118e;
case 0x481194:c.instructions+=2;goto B481194;
case 0x481196:c.instructions+=1;goto B481196;
case 0x481198:goto L481198;
case 0x48119e:c.instructions+=2;goto B48119e;
case 0x4811a1:c.instructions+=1;goto B4811a1;
case 0x4811a3:goto L4811a3;
case 0x4811a9:c.instructions+=4;goto B4811a9;
case 0x4811b3:c.instructions+=3;goto B4811b3;
case 0x4811b8:c.instructions+=2;goto B4811b8;
case 0x4811ba:c.instructions+=1;goto B4811ba;
case 0x4811bc:goto L4811bc;
case 0x4811c2:c.instructions+=2;goto B4811c2;
case 0x4811c4:c.instructions+=1;goto B4811c4;
case 0x4811c6:goto L4811c6;
case 0x4811cc:c.instructions+=3;goto B4811cc;
case 0x4811ce:c.instructions+=2;goto B4811ce;
case 0x4811cf:c.instructions+=1;goto B4811cf;
case 0x4811d4:goto L4811d4;
case 0x4811d7:c.instructions+=1;goto B4811d7;
case 0x4811de:goto L4811de;
case 0x4811e4:c.instructions+=2;goto B4811e4;
case 0x4811e6:c.instructions+=1;goto B4811e6;
case 0x4811e8:goto L4811e8;
case 0x4811ed:goto L4811ed;
case 0x4811f0:c.instructions+=7;goto B4811f0;
case 0x4811f1:c.instructions+=6;goto B4811f1;
case 0x4811f2:c.instructions+=5;goto B4811f2;
case 0x4811f6:c.instructions+=4;goto B4811f6;
case 0x4811f9:c.instructions+=3;goto B4811f9;
case 0x4811fd:c.instructions+=2;goto B4811fd;
case 0x4811fe:c.instructions+=1;goto B4811fe;
case 0x481210:goto L481210;
case 0x481211:c.instructions+=6;goto B481211;
case 0x481212:c.instructions+=5;goto B481212;
case 0x481214:c.instructions+=4;goto B481214;
case 0x481217:c.instructions+=3;goto B481217;
case 0x481219:c.instructions+=2;goto B481219;
case 0x48121b:c.instructions+=1;goto B48121b;
case 0x48121d:goto L48121d;
case 0x481221:c.instructions+=2;goto B481221;
case 0x481224:c.instructions+=1;goto B481224;
case 0x481226:goto L481226;
case 0x481229:c.instructions+=3;goto B481229;
case 0x48122a:c.instructions+=2;goto B48122a;
case 0x48122b:c.instructions+=1;goto B48122b;
case 0x48122e:goto L48122e;
case 0x481232:c.instructions+=4;goto B481232;
case 0x481235:c.instructions+=3;goto B481235;
case 0x481238:c.instructions+=2;goto B481238;
case 0x48123b:c.instructions+=1;goto B48123b;
case 0x481241:goto L481241;
case 0x481248:c.instructions+=1;goto B481248;
case 0x48124a:goto L48124a;
case 0x481250:c.instructions+=2;goto B481250;
case 0x481252:c.instructions+=1;goto B481252;
case 0x481258:goto L481258;
case 0x48125e:c.instructions+=2;goto B48125e;
case 0x481261:c.instructions+=1;goto B481261;
case 0x481267:goto L481267;
case 0x48126d:c.instructions+=2;goto B48126d;
case 0x481277:c.instructions+=1;goto B481277;
case 0x48127c:goto L48127c;
case 0x48127e:c.instructions+=1;goto B48127e;
case 0x481284:goto L481284;
case 0x481289:c.instructions+=2;goto B481289;
case 0x48128b:c.instructions+=1;goto B48128b;
case 0x481291:goto L481291;
case 0x481297:c.instructions+=1;goto B481297;
case 0x48129d:goto L48129d;
case 0x48129e:c.instructions+=3;goto B48129e;
case 0x48129f:c.instructions+=2;goto B48129f;
case 0x4812a2:c.instructions+=1;goto B4812a2;
case 0x4812a7:goto L4812a7;
case 0x4812ac:c.instructions+=4;goto B4812ac;
case 0x4812b2:c.instructions+=3;goto B4812b2;
case 0x4812b3:c.instructions+=2;goto B4812b3;
case 0x4812b4:c.instructions+=1;goto B4812b4;
case 0x4812b9:goto L4812b9;
case 0x4812bc:c.instructions+=4;goto B4812bc;
case 0x4812c2:c.instructions+=3;goto B4812c2;
case 0x4812c3:c.instructions+=2;goto B4812c3;
case 0x4812c4:c.instructions+=1;goto B4812c4;
case 0x4812c7:goto L4812c7;
case 0x4812cd:c.instructions+=1;goto B4812cd;
case 0x4812d3:goto L4812d3;
case 0x4812d6:c.instructions+=1;goto B4812d6;
case 0x4812dc:goto L4812dc;
case 0x4812df:c.instructions+=1;goto B4812df;
case 0x4812e5:goto L4812e5;
case 0x4812e8:c.instructions+=1;goto B4812e8;
case 0x4812ea:goto L4812ea;
case 0x4812ed:c.instructions+=1;goto B4812ed;
case 0x4812ef:goto L4812ef;
case 0x4812f2:c.instructions+=1;goto B4812f2;
case 0x4812f8:goto L4812f8;
case 0x4812fe:c.instructions+=2;goto B4812fe;
case 0x481300:c.instructions+=1;goto B481300;
case 0x481302:goto L481302;
case 0x481305:c.instructions+=3;goto B481305;
case 0x481306:c.instructions+=2;goto B481306;
case 0x481308:c.instructions+=1;goto B481308;
case 0x48130a:goto L48130a;
case 0x48130f:goto L48130f;
case 0x481312:c.instructions+=1;goto B481312;
case 0x481317:goto L481317;
case 0x48131d:goto L48131d;
case 0x481320:c.instructions+=2;goto B481320;
case 0x481322:c.instructions+=1;goto B481322;
case 0x481324:goto L481324;
case 0x481329:goto L481329;
case 0x48132c:c.instructions+=1;goto B48132c;
case 0x481331:goto L481331;
case 0x481337:goto L481337;
case 0x48133c:goto L48133c;
case 0x48133d:goto L48133d;
case 0x481343:c.instructions+=2;goto B481343;
case 0x481345:c.instructions+=1;goto B481345;
case 0x48134b:goto L48134b;
case 0x481351:c.instructions+=2;goto B481351;
case 0x481354:c.instructions+=1;goto B481354;
case 0x48135a:goto L48135a;
case 0x481360:c.instructions+=4;goto B481360;
case 0x48136a:c.instructions+=3;goto B48136a;
case 0x48136f:c.instructions+=2;goto B48136f;
case 0x481371:c.instructions+=1;goto B481371;
case 0x481377:goto L481377;
case 0x48137d:c.instructions+=1;goto B48137d;
case 0x481383:goto L481383;
case 0x481389:c.instructions+=3;goto B481389;
case 0x48138b:c.instructions+=2;goto B48138b;
case 0x48138c:c.instructions+=1;goto B48138c;
case 0x481391:goto L481391;
case 0x481394:c.instructions+=4;goto B481394;
case 0x48139b:c.instructions+=3;goto B48139b;
case 0x48139c:c.instructions+=2;goto B48139c;
case 0x48139d:c.instructions+=1;goto B48139d;
case 0x4813a0:goto L4813a0;
case 0x4813a3:c.instructions+=2;goto B4813a3;
case 0x4813a6:c.instructions+=1;goto B4813a6;
case 0x4813a8:goto L4813a8;
case 0x4813ab:c.instructions+=1;goto B4813ab;
case 0x4813ad:goto L4813ad;
case 0x4813b3:c.instructions+=2;goto B4813b3;
case 0x4813b5:c.instructions+=1;goto B4813b5;
case 0x4813b7:goto L4813b7;
case 0x4813b8:c.instructions+=2;goto B4813b8;
case 0x4813ba:c.instructions+=1;goto B4813ba;
case 0x4813bf:goto L4813bf;
case 0x4813c1:goto L4813c1;
case 0x4813c7:c.instructions+=2;goto B4813c7;
case 0x4813c9:c.instructions+=1;goto B4813c9;
case 0x4813cb:goto L4813cb;
case 0x4813d1:c.instructions+=2;goto B4813d1;
case 0x4813d4:c.instructions+=1;goto B4813d4;
case 0x4813d6:goto L4813d6;
case 0x4813dc:c.instructions+=2;goto B4813dc;
case 0x4813e6:c.instructions+=1;goto B4813e6;
case 0x4813eb:goto L4813eb;
case 0x4813ed:c.instructions+=1;goto B4813ed;
case 0x4813ef:goto L4813ef;
case 0x4813f4:c.instructions+=2;goto B4813f4;
case 0x4813f6:c.instructions+=1;goto B4813f6;
case 0x4813f8:goto L4813f8;
case 0x4813fe:c.instructions+=1;goto B4813fe;
case 0x481400:goto L481400;
case 0x481401:c.instructions+=3;goto B481401;
case 0x481402:c.instructions+=2;goto B481402;
case 0x481405:c.instructions+=1;goto B481405;
case 0x48140a:goto L48140a;
case 0x48140f:c.instructions+=4;goto B48140f;
case 0x481415:c.instructions+=3;goto B481415;
case 0x481416:c.instructions+=2;goto B481416;
case 0x481417:c.instructions+=1;goto B481417;
case 0x48141c:goto L48141c;
case 0x48141f:c.instructions+=1;goto B48141f;
case 0x481425:goto L481425;
case 0x48142b:c.instructions+=2;goto B48142b;
case 0x48142d:c.instructions+=1;goto B48142d;
case 0x48142f:goto L48142f;
case 0x481434:goto L481434;
case 0x481435:c.instructions+=2;goto B481435;
case 0x481436:c.instructions+=1;goto B481436;
case 0x481440:goto L481440;
case 0x481445:c.instructions+=4;goto B481445;
case 0x481447:c.instructions+=3;goto B481447;
case 0x481448:c.instructions+=2;goto B481448;
case 0x48144a:c.instructions+=1;goto B48144a;
case 0x48144c:goto L48144c;
case 0x48144f:c.instructions+=2;goto B48144f;
case 0x481451:c.instructions+=1;goto B481451;
case 0x481454:goto L481454;
case 0x48145a:c.instructions+=2;goto B48145a;
case 0x48145c:c.instructions+=1;goto B48145c;
case 0x48145e:goto L48145e;
case 0x481460:c.instructions+=2;goto B481460;
case 0x481462:c.instructions+=1;goto B481462;
case 0x481467:goto L481467;
case 0x48146d:c.instructions+=1;goto B48146d;
case 0x481472:goto L481472;
case 0x48147c:goto L48147c;
case 0x48147d:c.instructions+=1;goto B48147d;
case 0x481480:goto L481480;
case 0x481487:c.instructions+=1;goto B481487;
case 0x481489:goto L481489;
case 0x48148f:c.instructions+=1;goto B48148f;
case 0x481494:goto L481494;
case 0x4814a0:goto L4814a0;
case 0x4814a7:c.instructions+=1;goto B4814a7;
case 0x4814a9:goto L4814a9;
case 0x4814af:c.instructions+=1;goto B4814af;
case 0x4814b4:goto L4814b4;
case 0x4814c0:goto L4814c0;
case 0x4814c5:c.instructions+=2;goto B4814c5;
case 0x4814c7:c.instructions+=1;goto B4814c7;
case 0x4814c9:goto L4814c9;
case 0x4814cf:c.instructions+=1;goto B4814cf;
case 0x4814d4:goto L4814d4;
case 0x4814e0:goto L4814e0;
case 0x4814e5:c.instructions+=2;goto B4814e5;
case 0x4814e7:c.instructions+=1;goto B4814e7;
case 0x4814e9:goto L4814e9;
case 0x4814ec:c.instructions+=1;goto B4814ec;
case 0x4814f1:goto L4814f1;
case 0x481500:goto L481500;
case 0x481501:c.instructions+=6;goto B481501;
case 0x481502:c.instructions+=5;goto B481502;
case 0x481504:c.instructions+=4;goto B481504;
case 0x481507:c.instructions+=3;goto B481507;
case 0x481509:c.instructions+=2;goto B481509;
case 0x48150b:c.instructions+=1;goto B48150b;
case 0x48150d:goto L48150d;
case 0x481510:c.instructions+=3;goto B481510;
case 0x481512:c.instructions+=2;goto B481512;
case 0x481517:c.instructions+=1;goto B481517;
case 0x48151d:goto L48151d;
case 0x481522:c.instructions+=6;goto B481522;
case 0x481526:c.instructions+=5;goto B481526;
case 0x48152c:c.instructions+=4;goto B48152c;
case 0x48152d:c.instructions+=3;goto B48152d;
case 0x48152e:c.instructions+=2;goto B48152e;
case 0x481531:c.instructions+=1;goto B481531;
case 0x481536:goto L481536;
case 0x48153c:c.instructions+=3;goto B48153c;
case 0x48153f:c.instructions+=2;goto B48153f;
case 0x481540:c.instructions+=1;goto B481540;
case 0x481545:goto L481545;
case 0x481548:c.instructions+=2;goto B481548;
case 0x48154d:c.instructions+=1;goto B48154d;
case 0x48154f:goto L48154f;
case 0x481554:c.instructions+=5;goto B481554;
case 0x481557:c.instructions+=4;goto B481557;
case 0x48155c:c.instructions+=3;goto B48155c;
case 0x48155d:c.instructions+=2;goto B48155d;
case 0x48155f:c.instructions+=1;goto B48155f;
case 0x481564:goto L481564;
case 0x481567:c.instructions+=2;goto B481567;
case 0x481569:c.instructions+=1;goto B481569;
case 0x48156b:goto L48156b;
case 0x48156c:c.instructions+=2;goto B48156c;
case 0x48156e:c.instructions+=1;goto B48156e;
case 0x481573:goto L481573;
case 0x481575:goto L481575;
case 0x481577:goto L481577;
case 0x48157b:c.instructions+=10;goto B48157b;
case 0x48157c:c.instructions+=9;goto B48157c;
case 0x48157d:c.instructions+=8;goto B48157d;
case 0x481584:c.instructions+=7;goto B481584;
case 0x48158b:c.instructions+=6;goto B48158b;
case 0x481592:c.instructions+=5;goto B481592;
case 0x481595:c.instructions+=4;goto B481595;
case 0x481596:c.instructions+=3;goto B481596;
case 0x48159a:c.instructions+=2;goto B48159a;
case 0x48159c:c.instructions+=1;goto B48159c;
case 0x4815a1:goto L4815a1;
case 0x4815a2:c.instructions+=2;goto B4815a2;
case 0x4815a3:c.instructions+=1;goto B4815a3;
case 0x4815b0:goto L4815b0;
case 0x4815b3:c.instructions+=7;goto B4815b3;
case 0x4815b4:c.instructions+=6;goto B4815b4;
case 0x4815b5:c.instructions+=5;goto B4815b5;
case 0x4815b6:c.instructions+=4;goto B4815b6;
case 0x4815b8:c.instructions+=3;goto B4815b8;
case 0x4815bd:c.instructions+=2;goto B4815bd;
case 0x4815bf:c.instructions+=1;goto B4815bf;
case 0x4815c0:goto L4815c0;
case 0x4815c3:c.instructions+=2;goto B4815c3;
case 0x4815c5:c.instructions+=1;goto B4815c5;
case 0x4815c7:goto L4815c7;
case 0x4815ca:c.instructions+=1;goto B4815ca;
case 0x4815cc:goto L4815cc;
case 0x4815ce:c.instructions+=2;goto B4815ce;
case 0x4815d0:c.instructions+=1;goto B4815d0;
case 0x4815d2:goto L4815d2;
case 0x4815d4:c.instructions+=2;goto B4815d4;
case 0x4815d6:c.instructions+=1;goto B4815d6;
case 0x4815d8:goto L4815d8;
case 0x4815db:c.instructions+=1;goto B4815db;
case 0x4815dd:goto L4815dd;
case 0x4815e0:c.instructions+=4;goto B4815e0;
case 0x4815e2:c.instructions+=3;goto B4815e2;
case 0x4815e4:c.instructions+=2;goto B4815e4;
case 0x4815e8:c.instructions+=1;goto B4815e8;
case 0x4815eb:goto L4815eb;
case 0x4815ee:c.instructions+=7;goto B4815ee;
case 0x4815f2:c.instructions+=6;goto B4815f2;
case 0x4815f6:c.instructions+=5;goto B4815f6;
case 0x4815f7:c.instructions+=4;goto B4815f7;
case 0x4815fb:c.instructions+=3;goto B4815fb;
case 0x4815ff:c.instructions+=2;goto B4815ff;
case 0x481603:c.instructions+=1;goto B481603;
case 0x481608:goto L481608;
case 0x481609:c.instructions+=1;goto B481609;
case 0x48160b:goto L48160b;
case 0x48160c:c.instructions+=4;goto B48160c;
case 0x48160d:c.instructions+=3;goto B48160d;
case 0x48160e:c.instructions+=2;goto B48160e;
case 0x481611:c.instructions+=1;goto B481611;
case 0x481620:goto L481620;
case 0x481622:c.instructions+=9;goto B481622;
case 0x481627:c.instructions+=8;goto B481627;
case 0x48162d:c.instructions+=7;goto B48162d;
case 0x48162e:c.instructions+=6;goto B48162e;
case 0x481635:c.instructions+=5;goto B481635;
case 0x481636:c.instructions+=4;goto B481636;
case 0x481637:c.instructions+=3;goto B481637;
case 0x481639:c.instructions+=2;goto B481639;
case 0x48163d:c.instructions+=1;goto B48163d;
case 0x481642:goto L481642;
case 0x481647:c.instructions+=4;goto B481647;
case 0x48164c:c.instructions+=3;goto B48164c;
case 0x481654:c.instructions+=2;goto B481654;
case 0x48165a:c.instructions+=1;goto B48165a;
case 0x48165f:goto L48165f;
case 0x481663:c.instructions+=7;goto B481663;
case 0x481666:c.instructions+=6;goto B481666;
case 0x48166d:c.instructions+=5;goto B48166d;
case 0x48166f:c.instructions+=4;goto B48166f;
case 0x481670:c.instructions+=3;goto B481670;
case 0x481677:c.instructions+=2;goto B481677;
case 0x48167a:c.instructions+=1;goto B48167a;
case 0x481680:goto L481680;
case 0x481682:c.instructions+=12;goto B481682;
case 0x481687:c.instructions+=11;goto B481687;
case 0x48168d:c.instructions+=10;goto B48168d;
case 0x48168e:c.instructions+=9;goto B48168e;
case 0x481695:c.instructions+=8;goto B481695;
case 0x481696:c.instructions+=7;goto B481696;
case 0x481697:c.instructions+=6;goto B481697;
case 0x481699:c.instructions+=5;goto B481699;
case 0x48169d:c.instructions+=4;goto B48169d;
case 0x4816a3:c.instructions+=3;goto B4816a3;
case 0x4816a8:c.instructions+=2;goto B4816a8;
case 0x4816b0:c.instructions+=1;goto B4816b0;
case 0x4816b5:goto L4816b5;
case 0x4816b8:c.instructions+=3;goto B4816b8;
case 0x4816ba:c.instructions+=2;goto B4816ba;
case 0x4816c2:c.instructions+=1;goto B4816c2;
case 0x4816c7:goto L4816c7;
case 0x4816cb:c.instructions+=4;goto B4816cb;
case 0x4816cc:c.instructions+=3;goto B4816cc;
case 0x4816d3:c.instructions+=2;goto B4816d3;
case 0x4816d6:c.instructions+=1;goto B4816d6;
case 0x4816e0:goto L4816e0;
case 0x4816e5:c.instructions+=2;goto B4816e5;
case 0x4816e6:c.instructions+=1;goto B4816e6;
case 0x4816eb:goto L4816eb;
case 0x4816ee:c.instructions+=2;goto B4816ee;
case 0x4816f3:c.instructions+=1;goto B4816f3;
case 0x4816f5:goto L4816f5;
case 0x4816fb:c.instructions+=5;goto B4816fb;
case 0x4816fe:c.instructions+=4;goto B4816fe;
case 0x481704:c.instructions+=3;goto B481704;
case 0x481705:c.instructions+=2;goto B481705;
case 0x481707:c.instructions+=1;goto B481707;
case 0x48170c:goto L48170c;
case 0x48170f:c.instructions+=2;goto B48170f;
case 0x481711:c.instructions+=1;goto B481711;
case 0x481713:goto L481713;
case 0x481715:c.instructions+=1;goto B481715;
case 0x48171a:goto L48171a;
case 0x48171c:c.instructions+=1;goto B48171c;
case 0x481720:goto L481720;
case 0x481722:c.instructions+=1;goto B481722;
case 0x481727:goto L481727;
case 0x481729:c.instructions+=10;goto B481729;
case 0x48172f:c.instructions+=9;goto B48172f;
case 0x481735:c.instructions+=8;goto B481735;
case 0x48173b:c.instructions+=7;goto B48173b;
case 0x481741:c.instructions+=6;goto B481741;
case 0x481747:c.instructions+=5;goto B481747;
case 0x48174d:c.instructions+=4;goto B48174d;
case 0x481753:c.instructions+=3;goto B481753;
case 0x48175a:c.instructions+=2;goto B48175a;
case 0x48175c:c.instructions+=1;goto B48175c;
case 0x481760:goto L481760;
case 0x481766:c.instructions+=1;goto B481766;
case 0x481770:goto L481770;
case 0x481775:c.instructions+=2;goto B481775;
case 0x481776:c.instructions+=1;goto B481776;
case 0x48177b:goto L48177b;
case 0x48177e:c.instructions+=2;goto B48177e;
case 0x481783:c.instructions+=1;goto B481783;
case 0x481785:goto L481785;
case 0x48178b:c.instructions+=5;goto B48178b;
case 0x48178e:c.instructions+=4;goto B48178e;
case 0x481794:c.instructions+=3;goto B481794;
case 0x481795:c.instructions+=2;goto B481795;
case 0x48179a:c.instructions+=1;goto B48179a;
case 0x48179f:goto L48179f;
case 0x4817a2:c.instructions+=2;goto B4817a2;
case 0x4817a4:c.instructions+=1;goto B4817a4;
case 0x4817a6:goto L4817a6;
case 0x4817a8:c.instructions+=1;goto B4817a8;
case 0x4817ad:goto L4817ad;
case 0x4817af:c.instructions+=1;goto B4817af;
case 0x4817b0:goto L4817b0;
case 0x4817b1:c.instructions+=2;goto B4817b1;
case 0x4817b3:c.instructions+=1;goto B4817b3;
case 0x4817b8:goto L4817b8;
case 0x4817bd:c.instructions+=1;goto B4817bd;
case 0x4817bf:goto L4817bf;
case 0x4817c0:c.instructions+=1;goto B4817c0;
case 0x4817c5:goto L4817c5;
case 0x4817c8:goto L4817c8;
case 0x4817ca:c.instructions+=2;goto B4817ca;
case 0x4817cb:c.instructions+=1;goto B4817cb;
case 0x4817d0:goto L4817d0;
case 0x4817d2:c.instructions+=13;goto B4817d2;
case 0x4817d7:c.instructions+=12;goto B4817d7;
case 0x4817dd:c.instructions+=11;goto B4817dd;
case 0x4817de:c.instructions+=10;goto B4817de;
case 0x4817e5:c.instructions+=9;goto B4817e5;
case 0x4817e6:c.instructions+=8;goto B4817e6;
case 0x4817e7:c.instructions+=7;goto B4817e7;
case 0x4817e8:c.instructions+=6;goto B4817e8;
case 0x4817ea:c.instructions+=5;goto B4817ea;
case 0x4817ee:c.instructions+=4;goto B4817ee;
case 0x4817f4:c.instructions+=3;goto B4817f4;
case 0x4817f7:c.instructions+=2;goto B4817f7;
case 0x4817ff:c.instructions+=1;goto B4817ff;
case 0x481804:goto L481804;
case 0x481807:c.instructions+=4;goto B481807;
case 0x48180a:c.instructions+=3;goto B48180a;
case 0x48180c:c.instructions+=2;goto B48180c;
case 0x481811:c.instructions+=1;goto B481811;
case 0x481813:goto L481813;
case 0x481815:c.instructions+=5;goto B481815;
case 0x481818:c.instructions+=4;goto B481818;
case 0x48181a:c.instructions+=3;goto B48181a;
case 0x48181b:c.instructions+=2;goto B48181b;
case 0x48181e:c.instructions+=1;goto B48181e;
case 0x481823:goto L481823;
case 0x481825:c.instructions+=3;goto B481825;
case 0x481828:c.instructions+=2;goto B481828;
case 0x48182a:c.instructions+=1;goto B48182a;
case 0x48182c:goto L48182c;
case 0x481830:c.instructions+=6;goto B481830;
case 0x481836:c.instructions+=5;goto B481836;
case 0x481837:c.instructions+=4;goto B481837;
case 0x481838:c.instructions+=3;goto B481838;
case 0x48183f:c.instructions+=2;goto B48183f;
case 0x481842:c.instructions+=1;goto B481842;
case 0x481850:goto L481850;
case 0x481851:c.instructions+=17;goto B481851;
case 0x481853:c.instructions+=16;goto B481853;
case 0x481856:c.instructions+=15;goto B481856;
case 0x481858:c.instructions+=14;goto B481858;
case 0x48185d:c.instructions+=13;goto B48185d;
case 0x481863:c.instructions+=12;goto B481863;
case 0x481864:c.instructions+=11;goto B481864;
case 0x48186b:c.instructions+=10;goto B48186b;
case 0x48186e:c.instructions+=9;goto B48186e;
case 0x48186f:c.instructions+=8;goto B48186f;
case 0x481871:c.instructions+=7;goto B481871;
case 0x481874:c.instructions+=6;goto B481874;
case 0x481876:c.instructions+=5;goto B481876;
case 0x481877:c.instructions+=4;goto B481877;
case 0x481878:c.instructions+=3;goto B481878;
case 0x481879:c.instructions+=2;goto B481879;
case 0x48187d:c.instructions+=1;goto B48187d;
case 0x481883:goto L481883;
case 0x481889:c.instructions+=3;goto B481889;
case 0x48188b:c.instructions+=2;goto B48188b;
case 0x481891:c.instructions+=1;goto B481891;
case 0x481893:goto L481893;
case 0x481896:c.instructions+=3;goto B481896;
case 0x481899:c.instructions+=2;goto B481899;
case 0x48189b:c.instructions+=1;goto B48189b;
case 0x4818a1:goto L4818a1;
case 0x4818a4:c.instructions+=2;goto B4818a4;
case 0x4818a6:c.instructions+=1;goto B4818a6;
case 0x4818a9:goto L4818a9;
case 0x4818ab:c.instructions+=2;goto B4818ab;
case 0x4818ad:c.instructions+=1;goto B4818ad;
case 0x4818af:goto L4818af;
case 0x4818b4:goto L4818b4;
case 0x4818b7:c.instructions+=12;goto B4818b7;
case 0x4818bb:c.instructions+=11;goto B4818bb;
case 0x4818be:c.instructions+=10;goto B4818be;
case 0x4818c0:c.instructions+=9;goto B4818c0;
case 0x4818c4:c.instructions+=8;goto B4818c4;
case 0x4818c8:c.instructions+=7;goto B4818c8;
case 0x4818cc:c.instructions+=6;goto B4818cc;
case 0x4818d0:c.instructions+=5;goto B4818d0;
case 0x4818d8:c.instructions+=4;goto B4818d8;
case 0x4818dc:c.instructions+=3;goto B4818dc;
case 0x4818e0:c.instructions+=2;goto B4818e0;
case 0x4818e4:c.instructions+=1;goto B4818e4;
case 0x4818e6:goto L4818e6;
case 0x4818f0:goto L4818f0;
case 0x4818f3:c.instructions+=2;goto B4818f3;
case 0x4818fa:c.instructions+=1;goto B4818fa;
case 0x4818fc:goto L4818fc;
case 0x481901:goto L481901;
case 0x481903:c.instructions+=1;goto B481903;
case 0x481905:goto L481905;
case 0x481908:c.instructions+=1;goto B481908;
case 0x48190a:goto L48190a;
case 0x48190c:goto L48190c;
case 0x481910:c.instructions+=5;goto B481910;
case 0x481912:c.instructions+=4;goto B481912;
case 0x481916:c.instructions+=3;goto B481916;
case 0x481919:c.instructions+=2;goto B481919;
case 0x48191d:c.instructions+=1;goto B48191d;
case 0x48191f:goto L48191f;
case 0x481921:c.instructions+=2;goto B481921;
case 0x481923:c.instructions+=1;goto B481923;
case 0x481925:goto L481925;
case 0x481928:goto L481928;
case 0x48192a:c.instructions+=2;goto B48192a;
case 0x48192c:c.instructions+=1;goto B48192c;
case 0x48192e:goto L48192e;
case 0x481932:c.instructions+=1;goto B481932;
case 0x481937:goto L481937;
case 0x481939:c.instructions+=1;goto B481939;
case 0x481940:goto L481940;
case 0x481944:c.instructions+=3;goto B481944;
case 0x481946:c.instructions+=2;goto B481946;
case 0x481949:c.instructions+=1;goto B481949;
case 0x48194b:goto L48194b;
case 0x481950:goto L481950;
case 0x481953:c.instructions+=1;goto B481953;
case 0x481955:goto L481955;
case 0x481957:c.instructions+=2;goto B481957;
case 0x481959:c.instructions+=1;goto B481959;
case 0x48195b:goto L48195b;
case 0x48195d:c.instructions+=1;goto B48195d;
case 0x48195f:goto L48195f;
case 0x481965:c.instructions+=4;goto B481965;
case 0x48196b:c.instructions+=3;goto B48196b;
case 0x48196d:c.instructions+=2;goto B48196d;
case 0x481970:c.instructions+=1;goto B481970;
case 0x481972:goto L481972;
case 0x481974:goto L481974;
case 0x481976:c.instructions+=3;goto B481976;
case 0x481979:c.instructions+=2;goto B481979;
case 0x48197b:c.instructions+=1;goto B48197b;
case 0x48197d:goto L48197d;
case 0x48197f:c.instructions+=1;goto B48197f;
case 0x481981:goto L481981;
case 0x481986:goto L481986;
case 0x481988:c.instructions+=1;goto B481988;
case 0x48198a:goto L48198a;
case 0x48198d:c.instructions+=1;goto B48198d;
case 0x48198f:goto L48198f;
case 0x481991:goto L481991;
case 0x481995:c.instructions+=6;goto B481995;
case 0x481997:c.instructions+=5;goto B481997;
case 0x48199b:c.instructions+=4;goto B48199b;
case 0x48199f:c.instructions+=3;goto B48199f;
case 0x4819a2:c.instructions+=2;goto B4819a2;
case 0x4819a4:c.instructions+=1;goto B4819a4;
case 0x4819a6:goto L4819a6;
case 0x4819a9:c.instructions+=4;goto B4819a9;
case 0x4819ac:c.instructions+=3;goto B4819ac;
case 0x4819ae:c.instructions+=2;goto B4819ae;
case 0x4819b2:c.instructions+=1;goto B4819b2;
case 0x4819b4:goto L4819b4;
case 0x4819b7:c.instructions+=1;goto B4819b7;
case 0x4819b9:goto L4819b9;
case 0x4819bb:c.instructions+=1;goto B4819bb;
case 0x4819c0:goto L4819c0;
case 0x4819c2:c.instructions+=1;goto B4819c2;
case 0x4819c4:goto L4819c4;
case 0x4819c7:c.instructions+=1;goto B4819c7;
case 0x4819c9:goto L4819c9;
case 0x4819cb:goto L4819cb;
case 0x4819cd:c.instructions+=1;goto B4819cd;
case 0x4819cf:goto L4819cf;
case 0x4819d6:c.instructions+=1;goto B4819d6;
case 0x4819d8:goto L4819d8;
case 0x4819dd:goto L4819dd;
case 0x4819df:c.instructions+=1;goto B4819df;
case 0x4819e1:goto L4819e1;
case 0x4819e4:c.instructions+=1;goto B4819e4;
case 0x4819e6:goto L4819e6;
case 0x4819e8:goto L4819e8;
case 0x4819ec:c.instructions+=5;goto B4819ec;
case 0x4819ee:c.instructions+=4;goto B4819ee;
case 0x4819f2:c.instructions+=3;goto B4819f2;
case 0x4819f5:c.instructions+=2;goto B4819f5;
case 0x4819f9:c.instructions+=1;goto B4819f9;
case 0x4819fb:goto L4819fb;
case 0x4819fe:c.instructions+=2;goto B4819fe;
case 0x481a00:c.instructions+=1;goto B481a00;
case 0x481a02:goto L481a02;
case 0x481a05:c.instructions+=1;goto B481a05;
case 0x481a07:goto L481a07;
case 0x481a09:c.instructions+=2;goto B481a09;
case 0x481a0b:c.instructions+=1;goto B481a0b;
case 0x481a0d:goto L481a0d;
case 0x481a10:c.instructions+=1;goto B481a10;
case 0x481a12:goto L481a12;
case 0x481a14:goto L481a14;
case 0x481a16:goto L481a16;
case 0x481a18:c.instructions+=1;goto B481a18;
case 0x481a1a:goto L481a1a;
case 0x481a1d:c.instructions+=1;goto B481a1d;
case 0x481a1f:goto L481a1f;
case 0x481a21:goto L481a21;
case 0x481a23:c.instructions+=1;goto B481a23;
case 0x481a25:goto L481a25;
case 0x481a29:c.instructions+=2;goto B481a29;
case 0x481a2d:c.instructions+=1;goto B481a2d;
case 0x481a32:goto L481a32;
case 0x481a34:c.instructions+=1;goto B481a34;
case 0x481a36:goto L481a36;
case 0x481a39:c.instructions+=1;goto B481a39;
case 0x481a3b:goto L481a3b;
case 0x481a3d:c.instructions+=2;goto B481a3d;
case 0x481a3f:c.instructions+=1;goto B481a3f;
case 0x481a41:goto L481a41;
case 0x481a43:c.instructions+=1;goto B481a43;
case 0x481a45:goto L481a45;
case 0x481a4b:c.instructions+=4;goto B481a4b;
case 0x481a51:c.instructions+=3;goto B481a51;
case 0x481a53:c.instructions+=2;goto B481a53;
case 0x481a56:c.instructions+=1;goto B481a56;
case 0x481a58:goto L481a58;
case 0x481a5a:goto L481a5a;
case 0x481a5d:c.instructions+=3;goto B481a5d;
case 0x481a5f:c.instructions+=2;goto B481a5f;
case 0x481a63:c.instructions+=1;goto B481a63;
case 0x481a65:goto L481a65;
case 0x481a68:c.instructions+=1;goto B481a68;
case 0x481a6a:goto L481a6a;
case 0x481a6c:c.instructions+=1;goto B481a6c;
case 0x481a6e:goto L481a6e;
case 0x481a70:c.instructions+=1;goto B481a70;
case 0x481a72:goto L481a72;
case 0x481a77:goto L481a77;
case 0x481a79:c.instructions+=1;goto B481a79;
case 0x481a7b:goto L481a7b;
case 0x481a7e:c.instructions+=1;goto B481a7e;
case 0x481a80:goto L481a80;
case 0x481a82:goto L481a82;
case 0x481a86:c.instructions+=6;goto B481a86;
case 0x481a88:c.instructions+=5;goto B481a88;
case 0x481a8c:c.instructions+=4;goto B481a8c;
case 0x481a90:c.instructions+=3;goto B481a90;
case 0x481a93:c.instructions+=2;goto B481a93;
case 0x481a95:c.instructions+=1;goto B481a95;
case 0x481a9a:goto L481a9a;
case 0x481a9e:c.instructions+=5;goto B481a9e;
case 0x481aa2:c.instructions+=4;goto B481aa2;
case 0x481aa6:c.instructions+=3;goto B481aa6;
case 0x481aab:c.instructions+=2;goto B481aab;
case 0x481aad:c.instructions+=1;goto B481aad;
case 0x481ab0:goto L481ab0;
case 0x481ab4:c.instructions+=6;goto B481ab4;
case 0x481ab7:c.instructions+=5;goto B481ab7;
case 0x481abd:c.instructions+=4;goto B481abd;
case 0x481ac0:c.instructions+=3;goto B481ac0;
case 0x481ac2:c.instructions+=2;goto B481ac2;
case 0x481ac8:c.instructions+=1;goto B481ac8;
case 0x481aca:goto L481aca;
case 0x481acc:c.instructions+=1;goto B481acc;
case 0x481ace:goto L481ace;
case 0x481ad0:c.instructions+=2;goto B481ad0;
case 0x481ad2:c.instructions+=1;goto B481ad2;
case 0x481ad5:goto L481ad5;
case 0x481adc:c.instructions+=4;goto B481adc;
case 0x481ae2:c.instructions+=3;goto B481ae2;
case 0x481ae4:c.instructions+=2;goto B481ae4;
case 0x481ae6:c.instructions+=1;goto B481ae6;
case 0x481ae9:goto L481ae9;
case 0x481aeb:c.instructions+=1;goto B481aeb;
case 0x481aed:goto L481aed;
case 0x481aef:c.instructions+=1;goto B481aef;
case 0x481af1:goto L481af1;
case 0x481af7:c.instructions+=4;goto B481af7;
case 0x481afd:c.instructions+=3;goto B481afd;
case 0x481aff:c.instructions+=2;goto B481aff;
case 0x481b02:c.instructions+=1;goto B481b02;
case 0x481b04:goto L481b04;
case 0x481b06:c.instructions+=2;goto B481b06;
case 0x481b08:c.instructions+=1;goto B481b08;
case 0x481b0b:goto L481b0b;
case 0x481b12:c.instructions+=4;goto B481b12;
case 0x481b18:c.instructions+=3;goto B481b18;
case 0x481b1a:c.instructions+=2;goto B481b1a;
case 0x481b1c:c.instructions+=1;goto B481b1c;
case 0x481b1f:goto L481b1f;
case 0x481b21:c.instructions+=1;goto B481b21;
case 0x481b23:goto L481b23;
case 0x481b28:goto L481b28;
case 0x481b2a:c.instructions+=1;goto B481b2a;
case 0x481b2c:goto L481b2c;
case 0x481b30:c.instructions+=1;goto B481b30;
case 0x481b32:goto L481b32;
case 0x481b36:c.instructions+=5;goto B481b36;
case 0x481b38:c.instructions+=4;goto B481b38;
case 0x481b3b:c.instructions+=3;goto B481b3b;
case 0x481b3f:c.instructions+=2;goto B481b3f;
case 0x481b43:c.instructions+=1;goto B481b43;
case 0x481b48:goto L481b48;
case 0x481b4a:c.instructions+=1;goto B481b4a;
case 0x481b4c:goto L481b4c;
case 0x481b50:c.instructions+=2;goto B481b50;
case 0x481b52:c.instructions+=1;goto B481b52;
case 0x481b58:goto L481b58;
case 0x481b5c:c.instructions+=2;goto B481b5c;
case 0x481b61:c.instructions+=1;goto B481b61;
case 0x481b66:goto L481b66;
case 0x481b6a:c.instructions+=2;goto B481b6a;
case 0x481b72:c.instructions+=1;goto B481b72;
case 0x481b77:goto L481b77;
case 0x481b7b:goto L481b7b;
case 0x481b7e:c.instructions+=3;goto B481b7e;
case 0x481b81:c.instructions+=2;goto B481b81;
case 0x481b83:c.instructions+=1;goto B481b83;
case 0x481b85:goto L481b85;
case 0x481b87:c.instructions+=6;goto B481b87;
case 0x481b89:c.instructions+=5;goto B481b89;
case 0x481b8c:c.instructions+=4;goto B481b8c;
case 0x481b8e:c.instructions+=3;goto B481b8e;
case 0x481b8f:c.instructions+=2;goto B481b8f;
case 0x481b92:c.instructions+=1;goto B481b92;
case 0x481b97:goto L481b97;
case 0x481b99:c.instructions+=3;goto B481b99;
case 0x481b9c:c.instructions+=2;goto B481b9c;
case 0x481b9e:c.instructions+=1;goto B481b9e;
case 0x481ba0:goto L481ba0;
case 0x481ba2:c.instructions+=2;goto B481ba2;
case 0x481ba4:c.instructions+=1;goto B481ba4;
case 0x481ba6:goto L481ba6;
case 0x481ba8:c.instructions+=2;goto B481ba8;
case 0x481baa:c.instructions+=1;goto B481baa;
case 0x481bac:goto L481bac;
case 0x481bae:c.instructions+=4;goto B481bae;
case 0x481bb0:c.instructions+=3;goto B481bb0;
case 0x481bb2:c.instructions+=2;goto B481bb2;
case 0x481bb5:c.instructions+=1;goto B481bb5;
case 0x481bba:goto L481bba;
case 0x481bbd:goto L481bbd;
case 0x481bc1:c.instructions+=8;goto B481bc1;
case 0x481bc2:c.instructions+=7;goto B481bc2;
case 0x481bc9:c.instructions+=6;goto B481bc9;
case 0x481bca:c.instructions+=5;goto B481bca;
case 0x481bcb:c.instructions+=4;goto B481bcb;
case 0x481bcc:c.instructions+=3;goto B481bcc;
case 0x481bce:c.instructions+=2;goto B481bce;
case 0x481bcf:c.instructions+=1;goto B481bcf;
case 0x481bd0:goto L481bd0;
case 0x481bd1:c.instructions+=5;goto B481bd1;
case 0x481bd2:c.instructions+=4;goto B481bd2;
case 0x481bd3:c.instructions+=3;goto B481bd3;
case 0x481bd4:c.instructions+=2;goto B481bd4;
case 0x481bd6:c.instructions+=1;goto B481bd6;
case 0x481bdb:goto L481bdb;
case 0x481bde:c.instructions+=3;goto B481bde;
case 0x481be0:c.instructions+=2;goto B481be0;
case 0x481be3:c.instructions+=1;goto B481be3;
case 0x481be5:goto L481be5;
case 0x481be8:c.instructions+=1;goto B481be8;
case 0x481bea:goto L481bea;
case 0x481bec:goto L481bec;
case 0x481bee:c.instructions+=1;goto B481bee;
case 0x481bf0:goto L481bf0;
case 0x481bf2:c.instructions+=1;goto B481bf2;
case 0x481bf4:goto L481bf4;
case 0x481bf7:c.instructions+=1;goto B481bf7;
case 0x481bf9:goto L481bf9;
case 0x481bfb:goto L481bfb;
case 0x481bfd:c.instructions+=1;goto B481bfd;
case 0x481c03:goto L481c03;
case 0x481c07:c.instructions+=4;goto B481c07;
case 0x481c09:c.instructions+=3;goto B481c09;
case 0x481c0a:c.instructions+=2;goto B481c0a;
case 0x481c0c:c.instructions+=1;goto B481c0c;
case 0x481c0f:goto L481c0f;
case 0x481c15:c.instructions+=2;goto B481c15;
case 0x481c17:c.instructions+=1;goto B481c17;
case 0x481c19:goto L481c19;
case 0x481c1c:c.instructions+=4;goto B481c1c;
case 0x481c20:c.instructions+=3;goto B481c20;
case 0x481c22:c.instructions+=2;goto B481c22;
case 0x481c24:c.instructions+=1;goto B481c24;
case 0x481c26:goto L481c26;
case 0x481c29:c.instructions+=1;goto B481c29;
case 0x481c30:goto L481c30;
case 0x481c32:c.instructions+=2;goto B481c32;
case 0x481c34:c.instructions+=1;goto B481c34;
case 0x481c36:goto L481c36;
case 0x481c3a:c.instructions+=1;goto B481c3a;
case 0x481c3c:goto L481c3c;
case 0x481c3d:goto L481c3d;
case 0x481c40:c.instructions+=2;goto B481c40;
case 0x481c41:c.instructions+=1;goto B481c41;
case 0x481c43:goto L481c43;
case 0x481c45:c.instructions+=1;goto B481c45;
case 0x481c47:goto L481c47;
case 0x481c49:goto L481c49;
case 0x481c4b:c.instructions+=3;goto B481c4b;
case 0x481c51:c.instructions+=2;goto B481c51;
case 0x481c53:c.instructions+=1;goto B481c53;
case 0x481c55:goto L481c55;
case 0x481c5b:c.instructions+=2;goto B481c5b;
case 0x481c5d:c.instructions+=1;goto B481c5d;
case 0x481c5f:goto L481c5f;
case 0x481c65:c.instructions+=2;goto B481c65;
case 0x481c67:c.instructions+=1;goto B481c67;
case 0x481c69:goto L481c69;
case 0x481c6c:c.instructions+=2;goto B481c6c;
case 0x481c6e:c.instructions+=1;goto B481c6e;
case 0x481c70:goto L481c70;
case 0x481c73:c.instructions+=1;goto B481c73;
case 0x481c75:goto L481c75;
case 0x481c77:goto L481c77;
case 0x481c7a:c.instructions+=8;goto B481c7a;
case 0x481c7d:c.instructions+=7;goto B481c7d;
case 0x481c7f:c.instructions+=6;goto B481c7f;
case 0x481c82:c.instructions+=5;goto B481c82;
case 0x481c88:c.instructions+=4;goto B481c88;
case 0x481c8a:c.instructions+=3;goto B481c8a;
case 0x481c8c:c.instructions+=2;goto B481c8c;
case 0x481c8e:c.instructions+=1;goto B481c8e;
case 0x481c90:goto L481c90;
case 0x481c92:c.instructions+=1;goto B481c92;
case 0x481c97:goto L481c97;
case 0x481c9a:c.instructions+=2;goto B481c9a;
case 0x481c9c:c.instructions+=1;goto B481c9c;
case 0x481c9e:goto L481c9e;
case 0x481ca1:c.instructions+=1;goto B481ca1;
case 0x481ca6:goto L481ca6;
case 0x481ca8:c.instructions+=1;goto B481ca8;
case 0x481cad:goto L481cad;
case 0x481cb3:c.instructions+=1;goto B481cb3;
case 0x481cb5:goto L481cb5;
case 0x481cbb:goto L481cbb;
case 0x481cbc:c.instructions+=4;goto B481cbc;
case 0x481cbd:c.instructions+=3;goto B481cbd;
case 0x481cbe:c.instructions+=2;goto B481cbe;
case 0x481cbf:c.instructions+=1;goto B481cbf;
case 0x481cd0:goto L481cd0;
case 0x481cd6:c.instructions+=10;goto B481cd6;
case 0x481cd8:c.instructions+=9;goto B481cd8;
case 0x481cdd:c.instructions+=8;goto B481cdd;
case 0x481cde:c.instructions+=7;goto B481cde;
case 0x481ce3:c.instructions+=6;goto B481ce3;
case 0x481ce5:c.instructions+=5;goto B481ce5;
case 0x481cec:c.instructions+=4;goto B481cec;
case 0x481ced:c.instructions+=3;goto B481ced;
case 0x481cee:c.instructions+=2;goto B481cee;
case 0x481cef:c.instructions+=1;goto B481cef;
case 0x481cf5:goto L481cf5;
case 0x481cfa:c.instructions+=3;goto B481cfa;
case 0x481cfd:c.instructions+=2;goto B481cfd;
case 0x481cff:c.instructions+=1;goto B481cff;
case 0x481d05:goto L481d05;
case 0x481d08:c.instructions+=3;goto B481d08;
case 0x481d0a:c.instructions+=2;goto B481d0a;
case 0x481d0d:c.instructions+=1;goto B481d0d;
case 0x481d0f:goto L481d0f;
case 0x481d12:c.instructions+=1;goto B481d12;
case 0x481d14:goto L481d14;
case 0x481d16:goto L481d16;
case 0x481d1a:c.instructions+=3;goto B481d1a;
case 0x481d1c:c.instructions+=2;goto B481d1c;
case 0x481d1e:c.instructions+=1;goto B481d1e;
case 0x481d20:goto L481d20;
case 0x481d22:c.instructions+=1;goto B481d22;
case 0x481d24:goto L481d24;
case 0x481d27:c.instructions+=1;goto B481d27;
case 0x481d29:goto L481d29;
case 0x481d2b:c.instructions+=1;goto B481d2b;
case 0x481d30:goto L481d30;
case 0x481d32:c.instructions+=1;goto B481d32;
case 0x481d34:goto L481d34;
case 0x481d37:c.instructions+=1;goto B481d37;
case 0x481d39:goto L481d39;
case 0x481d3b:goto L481d3b;
case 0x481d3d:c.instructions+=1;goto B481d3d;
case 0x481d3f:goto L481d3f;
case 0x481d42:c.instructions+=1;goto B481d42;
case 0x481d44:goto L481d44;
case 0x481d47:c.instructions+=1;goto B481d47;
case 0x481d49:goto L481d49;
case 0x481d4b:goto L481d4b;
case 0x481d4f:c.instructions+=1;goto B481d4f;
case 0x481d55:goto L481d55;
case 0x481d57:c.instructions+=1;goto B481d57;
case 0x481d5d:goto L481d5d;
case 0x481d5e:c.instructions+=1;goto B481d5e;
case 0x481d63:goto L481d63;
case 0x481d66:c.instructions+=2;goto B481d66;
case 0x481d69:c.instructions+=1;goto B481d69;
case 0x481d6b:goto L481d6b;
case 0x481d6c:c.instructions+=1;goto B481d6c;
case 0x481d6e:goto L481d6e;
case 0x481d6f:c.instructions+=1;goto B481d6f;
case 0x481d71:goto L481d71;
case 0x481d76:c.instructions+=1;goto B481d76;
case 0x481d7b:goto L481d7b;
case 0x481d7e:c.instructions+=3;goto B481d7e;
case 0x481d82:c.instructions+=2;goto B481d82;
case 0x481d8a:c.instructions+=1;goto B481d8a;
case 0x481d8c:goto L481d8c;
case 0x481d91:c.instructions+=1;goto B481d91;
case 0x481d96:goto L481d96;
case 0x481d99:c.instructions+=4;goto B481d99;
case 0x481d9d:c.instructions+=3;goto B481d9d;
case 0x481d9f:c.instructions+=2;goto B481d9f;
case 0x481da7:c.instructions+=1;goto B481da7;
case 0x481da9:goto L481da9;
case 0x481dab:c.instructions+=1;goto B481dab;
case 0x481db0:goto L481db0;
case 0x481db2:goto L481db2;
case 0x481db7:c.instructions+=1;goto B481db7;
case 0x481dbc:goto L481dbc;
case 0x481dbf:c.instructions+=4;goto B481dbf;
case 0x481dc3:c.instructions+=3;goto B481dc3;
case 0x481dc5:c.instructions+=2;goto B481dc5;
case 0x481dcd:c.instructions+=1;goto B481dcd;
case 0x481dcf:goto L481dcf;
case 0x481dd1:c.instructions+=1;goto B481dd1;
case 0x481dd6:goto L481dd6;
case 0x481dd8:goto L481dd8;
case 0x481ddd:c.instructions+=1;goto B481ddd;
case 0x481de2:goto L481de2;
case 0x481de5:c.instructions+=2;goto B481de5;
case 0x481de9:c.instructions+=1;goto B481de9;
case 0x481df1:goto L481df1;
case 0x481df3:c.instructions+=1;goto B481df3;
case 0x481df5:goto L481df5;
case 0x481df7:c.instructions+=1;goto B481df7;
case 0x481dfc:goto L481dfc;
case 0x481dfe:goto L481dfe;
case 0x481e00:goto L481e00;
case 0x481e03:c.instructions+=12;goto B481e03;
case 0x481e06:c.instructions+=11;goto B481e06;
case 0x481e09:c.instructions+=10;goto B481e09;
case 0x481e0b:c.instructions+=9;goto B481e0b;
case 0x481e0e:c.instructions+=8;goto B481e0e;
case 0x481e11:c.instructions+=7;goto B481e11;
case 0x481e13:c.instructions+=6;goto B481e13;
case 0x481e18:c.instructions+=5;goto B481e18;
case 0x481e1e:c.instructions+=4;goto B481e1e;
case 0x481e1f:c.instructions+=3;goto B481e1f;
case 0x481e21:c.instructions+=2;goto B481e21;
case 0x481e26:c.instructions+=1;goto B481e26;
case 0x481e28:goto L481e28;
case 0x481e2d:goto L481e2d;
case 0x481e31:c.instructions+=6;goto B481e31;
case 0x481e32:c.instructions+=5;goto B481e32;
case 0x481e33:c.instructions+=4;goto B481e33;
case 0x481e3a:c.instructions+=3;goto B481e3a;
case 0x481e3b:c.instructions+=2;goto B481e3b;
case 0x481e3e:c.instructions+=1;goto B481e3e;
case 0x481e50:goto L481e50;
case 0x481e55:c.instructions+=2;goto B481e55;
case 0x481e57:c.instructions+=1;goto B481e57;
case 0x481e5d:goto L481e5d;
case 0x481e60:c.instructions+=6;goto B481e60;
case 0x481e63:c.instructions+=5;goto B481e63;
case 0x481e65:c.instructions+=4;goto B481e65;
case 0x481e66:c.instructions+=3;goto B481e66;
case 0x481e67:c.instructions+=2;goto B481e67;
case 0x481e6b:c.instructions+=1;goto B481e6b;
case 0x481e6d:goto L481e6d;
case 0x481e70:goto L481e70;
case 0x481e73:c.instructions+=2;goto B481e73;
case 0x481e76:c.instructions+=1;goto B481e76;
case 0x481e78:goto L481e78;
case 0x481e7a:c.instructions+=2;goto B481e7a;
case 0x481e7c:c.instructions+=1;goto B481e7c;
case 0x481e7e:goto L481e7e;
case 0x481e81:c.instructions+=3;goto B481e81;
case 0x481e83:c.instructions+=2;goto B481e83;
case 0x481e86:c.instructions+=1;goto B481e86;
case 0x481e88:goto L481e88;
case 0x481e8b:c.instructions+=1;goto B481e8b;
case 0x481e8d:goto L481e8d;
case 0x481e8f:c.instructions+=5;goto B481e8f;
case 0x481e92:c.instructions+=4;goto B481e92;
case 0x481e94:c.instructions+=3;goto B481e94;
case 0x481e95:c.instructions+=2;goto B481e95;
case 0x481e98:c.instructions+=1;goto B481e98;
case 0x481e9d:goto L481e9d;
case 0x481ea0:c.instructions+=8;goto B481ea0;
case 0x481ea3:c.instructions+=7;goto B481ea3;
case 0x481ea5:c.instructions+=6;goto B481ea5;
case 0x481ea8:c.instructions+=5;goto B481ea8;
case 0x481eab:c.instructions+=4;goto B481eab;
case 0x481ead:c.instructions+=3;goto B481ead;
case 0x481eaf:c.instructions+=2;goto B481eaf;
case 0x481eb1:c.instructions+=1;goto B481eb1;
case 0x481eb3:goto L481eb3;
case 0x481eb4:c.instructions+=2;goto B481eb4;
case 0x481eb5:c.instructions+=1;goto B481eb5;
case 0x481eb8:goto L481eb8;
case 0x481eba:c.instructions+=1;goto B481eba;
case 0x481ec0:goto L481ec0;
case 0x481ec2:c.instructions+=1;goto B481ec2;
case 0x481ec4:goto L481ec4;
case 0x481ec7:c.instructions+=1;goto B481ec7;
case 0x481ec9:goto L481ec9;
case 0x481ecb:goto L481ecb;
case 0x481ecd:c.instructions+=1;goto B481ecd;
case 0x481ecf:goto L481ecf;
case 0x481ed2:c.instructions+=1;goto B481ed2;
case 0x481ed4:goto L481ed4;
case 0x481ed7:c.instructions+=2;goto B481ed7;
case 0x481ed9:c.instructions+=1;goto B481ed9;
case 0x481edb:goto L481edb;
case 0x481ede:c.instructions+=1;goto B481ede;
case 0x481ee0:goto L481ee0;
case 0x481ee5:goto L481ee5;
case 0x481ee6:c.instructions+=1;goto B481ee6;
case 0x481ee7:goto L481ee7;
case 0x481ef0:goto L481ef0;
case 0x481ef1:c.instructions+=2;goto B481ef1;
case 0x481ef3:c.instructions+=1;goto B481ef3;
case 0x481ef8:goto L481ef8;
case 0x481efd:c.instructions+=1;goto B481efd;
case 0x481eff:goto L481eff;
case 0x481f00:c.instructions+=1;goto B481f00;
case 0x481f05:goto L481f05;
case 0x481f08:goto L481f08;
case 0x481f0a:c.instructions+=2;goto B481f0a;
case 0x481f0b:c.instructions+=1;goto B481f0b;
case 0x481f10:goto L481f10;
case 0x481f11:c.instructions+=4;goto B481f11;
case 0x481f13:c.instructions+=3;goto B481f13;
case 0x481f16:c.instructions+=2;goto B481f16;
case 0x481f18:c.instructions+=1;goto B481f18;
case 0x481f1e:goto L481f1e;
case 0x481f21:c.instructions+=2;goto B481f21;
case 0x481f23:c.instructions+=1;goto B481f23;
case 0x481f25:goto L481f25;
case 0x481f28:c.instructions+=2;goto B481f28;
case 0x481f2a:c.instructions+=1;goto B481f2a;
case 0x481f2c:goto L481f2c;
case 0x481f2e:c.instructions+=1;goto B481f2e;
case 0x481f30:goto L481f30;
case 0x481f32:c.instructions+=1;goto B481f32;
case 0x481f37:goto L481f37;
case 0x481f3b:goto L481f3b;
case 0x481f41:c.instructions+=2;goto B481f41;
case 0x481f43:c.instructions+=1;goto B481f43;
case 0x481f45:goto L481f45;
case 0x481f48:c.instructions+=2;goto B481f48;
case 0x481f4a:c.instructions+=1;goto B481f4a;
case 0x481f4c:goto L481f4c;
case 0x481f51:goto L481f51;
case 0x481f53:c.instructions+=1;goto B481f53;
case 0x481f55:goto L481f55;
case 0x481f57:c.instructions+=1;goto B481f57;
case 0x481f5c:goto L481f5c;
case 0x481f61:c.instructions+=2;goto B481f61;
case 0x481f63:c.instructions+=1;goto B481f63;
case 0x481f65:goto L481f65;
case 0x481f6b:c.instructions+=2;goto B481f6b;
case 0x481f6d:c.instructions+=1;goto B481f6d;
case 0x481f6f:goto L481f6f;
case 0x481f71:c.instructions+=3;goto B481f71;
case 0x481f73:c.instructions+=2;goto B481f73;
case 0x481f7d:c.instructions+=1;goto B481f7d;
case 0x481f80:goto L481f80;
case 0x481f81:c.instructions+=4;goto B481f81;
case 0x481f85:c.instructions+=3;goto B481f85;
case 0x481f86:c.instructions+=2;goto B481f86;
case 0x481f88:c.instructions+=1;goto B481f88;
case 0x481f8d:goto L481f8d;
case 0x481f93:c.instructions+=2;goto B481f93;
case 0x481f95:c.instructions+=1;goto B481f95;
case 0x481f97:goto L481f97;
case 0x481f98:c.instructions+=2;goto B481f98;
case 0x481f9a:c.instructions+=1;goto B481f9a;
case 0x481f9f:goto L481f9f;
case 0x481fa0:goto L481fa0;
case 0x481fa1:c.instructions+=1;goto B481fa1;
case 0x481fb0:goto L481fb0;
case 0x481fb6:c.instructions+=3;goto B481fb6;
case 0x481fbc:c.instructions+=2;goto B481fbc;
case 0x481fbd:c.instructions+=1;goto B481fbd;
case 0x481fc2:goto L481fc2;
case 0x481fd0:goto L481fd0;
case 0x481fd4:c.instructions+=6;goto B481fd4;
case 0x481fd5:c.instructions+=5;goto B481fd5;
case 0x481fd6:c.instructions+=4;goto B481fd6;
case 0x481fd7:c.instructions+=3;goto B481fd7;
case 0x481fd8:c.instructions+=2;goto B481fd8;
case 0x481fda:c.instructions+=1;goto B481fda;
case 0x481fdf:goto L481fdf;
case 0x481fe1:c.instructions+=3;goto B481fe1;
case 0x481fe8:c.instructions+=2;goto B481fe8;
case 0x481fea:c.instructions+=1;goto B481fea;
case 0x481ff0:goto L481ff0;
case 0x481ff2:c.instructions+=3;goto B481ff2;
case 0x481ff4:c.instructions+=2;goto B481ff4;
case 0x481ffc:c.instructions+=1;goto B481ffc;
case 0x481ffe:goto L481ffe;
default:missing_instruction(c.pc);}
B481000:L481000:{c.instructions+=1;NFSU2_TR(0x481000);
if(r1(R+518)){{goto L481011;}}
}
B481002:L481002:{c.instructions+=2;NFSU2_TR(0x481002);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B481003:{NFSU2_TR(0x481003);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x481008ull));
TAIL_STATIC(0x440540u,440);
}
B481008:L481008:{c.instructions+=2;NFSU2_TR(0x481008);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B48100b:{NFSU2_TR(0x48100b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xe0ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B481011:L481011:{c.instructions+=3;NFSU2_TR(0x481011);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B481017:{NFSU2_TR(0x481017);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B481019:{NFSU2_TR(0x481019);
if(r1(R+518)){{goto L48102a;}}
}
B48101b:L48101b:{c.instructions+=2;NFSU2_TR(0x48101b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48101c:{NFSU2_TR(0x48101c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x481021ull));
TAIL_STATIC(0x440540u,440);
}
B481021:L481021:{c.instructions+=2;NFSU2_TR(0x481021);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B481024:{NFSU2_TR(0x481024);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xe4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48102a:L48102a:{c.instructions+=3;NFSU2_TR(0x48102a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B481030:{NFSU2_TR(0x481030);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B481032:{NFSU2_TR(0x481032);
if(r1(R+518)){{goto L481043;}}
}
B481034:L481034:{c.instructions+=2;NFSU2_TR(0x481034);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B481035:{NFSU2_TR(0x481035);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x48103aull));
TAIL_STATIC(0x440540u,440);
}
B48103a:L48103a:{c.instructions+=2;NFSU2_TR(0x48103a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B48103d:{NFSU2_TR(0x48103d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xe8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B481043:L481043:{c.instructions+=3;NFSU2_TR(0x481043);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B481046:{NFSU2_TR(0x481046);
u8 U[14];
__builtin_memmove((U+6),(R+12),4);
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
B481048:{NFSU2_TR(0x481048);
if(r1(R+518)){{goto L481053;}}
}
B48104a:L48104a:{c.instructions+=3;NFSU2_TR(0x48104a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B48104c:{NFSU2_TR(0x48104c);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48104e:{NFSU2_TR(0x48104e);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x481050ull));
{u32 t_=u32(r4(U+4));TAIL_DYNAMIC(t_);}
}
B481050:L481050:{c.instructions+=1;NFSU2_TR(0x481050);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x78ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B481053:L481053:{c.instructions+=3;NFSU2_TR(0x481053);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B481056:{NFSU2_TR(0x481056);
u8 U[14];
__builtin_memmove((U+6),(R+12),4);
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
B481058:{NFSU2_TR(0x481058);
if(r1(R+518)){{goto L48106f;}}
}
B48105a:L48105a:{c.instructions+=2;NFSU2_TR(0x48105a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B48105c:{NFSU2_TR(0x48105c);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x48105full));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B48105f:L48105f:{c.instructions+=3;NFSU2_TR(0x48105f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B481062:{NFSU2_TR(0x481062);
u8 U[14];
__builtin_memmove((U+6),(R+12),4);
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
B481064:{NFSU2_TR(0x481064);
if(r1(R+518)){{goto L48106c;}}
}
B481066:L481066:{c.instructions+=3;NFSU2_TR(0x481066);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B481068:{NFSU2_TR(0x481068);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48106a:{NFSU2_TR(0x48106a);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x48106cull));
{u32 t_=u32(r4(U+4));TAIL_DYNAMIC(t_);}
}
B48106c:L48106c:{c.instructions+=1;NFSU2_TR(0x48106c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x3cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48106f:L48106f:{c.instructions+=3;NFSU2_TR(0x48106f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B481070:{NFSU2_TR(0x481070);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B481071:{NFSU2_TR(0x481071);
TAIL_STATIC(0x6f56bdu,6f5);
}
B481076:L481076:{c.instructions+=3;NFSU2_TR(0x481076);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B481077:{NFSU2_TR(0x481077);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B481078:{NFSU2_TR(0x481078);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B481080:L481080:{c.instructions+=4;NFSU2_TR(0x481080);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B481081:{NFSU2_TR(0x481081);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xa0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B481087:{NFSU2_TR(0x481087);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B481089:{NFSU2_TR(0x481089);
if(r1(R+518)){{goto L4810d1;}}
}
B48108b:L48108b:{c.instructions+=3;NFSU2_TR(0x48108b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B481091:{NFSU2_TR(0x481091);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x5ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B481094:{NFSU2_TR(0x481094);
if(r1(R+518)){{goto L4810d1;}}
}
B481096:L481096:{c.instructions+=5;NFSU2_TR(0x481096);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48109c:{NFSU2_TR(0x48109c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc0ull))));
w4(U+4,u32(0x5ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4810a6:{NFSU2_TR(0x4810a6);
__builtin_memmove((R+0),gp(0x82b974),4);
}
B4810ab:{NFSU2_TR(0x4810ab);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4810ad:{NFSU2_TR(0x4810ad);
if(r1(R+518)){{goto L4810d1;}}
}
B4810af:L4810af:{c.instructions+=3;NFSU2_TR(0x4810af);
__builtin_memmove((R+4),gp(0x82afb0),4);
}
B4810b5:{NFSU2_TR(0x4810b5);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B4810b7:{NFSU2_TR(0x4810b7);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L4810d1;}}
}
B4810b9:L4810b9:{c.instructions+=4;NFSU2_TR(0x4810b9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x17cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4810bf:{NFSU2_TR(0x4810bf);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4810c1:{NFSU2_TR(0x4810c1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4810c2:{NFSU2_TR(0x4810c2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4810c7ull));
TAIL_STATIC(0x739030u,739);
}
B4810c7:L4810c7:{c.instructions+=2;NFSU2_TR(0x4810c7);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4810ca:{NFSU2_TR(0x4810ca);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa6ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4810d1:L4810d1:{c.instructions+=4;NFSU2_TR(0x4810d1);
__builtin_memmove((R+4),gp(0x82ba30),4);
}
B4810d7:{NFSU2_TR(0x4810d7);
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
B4810d9:{NFSU2_TR(0x4810d9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4810da:{NFSU2_TR(0x4810da);
if(r1(R+518)){{goto L4810e1;}}
}
B4810dc:L4810dc:{c.instructions+=1;NFSU2_TR(0x4810dc);
TAIL_STATIC(0x46c8d0u,46c);
}
B4810e1:L4810e1:{c.instructions+=1;NFSU2_TR(0x4810e1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4810f0:L4810f0:{c.instructions+=5;NFSU2_TR(0x4810f0);
u8 U[5];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B4810f4:{NFSU2_TR(0x4810f4);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4810f6:{NFSU2_TR(0x4810f6);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4810f7:{NFSU2_TR(0x4810f7);
__builtin_memmove((R+28),(R+4),4);
}
B4810f9:{NFSU2_TR(0x4810f9);
if(r1(R+518)){{goto L481112;}}
}
B4810fb:L4810fb:{c.instructions+=4;NFSU2_TR(0x4810fb);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x13ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B4810fe:{NFSU2_TR(0x4810fe);
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
B481100:{NFSU2_TR(0x481100);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B481104:{NFSU2_TR(0x481104);
if(r1(R+518)){{goto L48110e;}}
}
B481106:L481106:{c.instructions+=3;NFSU2_TR(0x481106);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x15ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B48110a:{NFSU2_TR(0x48110a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B48110b:{NFSU2_TR(0x48110b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B48110e:L48110e:{c.instructions+=1;NFSU2_TR(0x48110e);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x15ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B481112:L481112:{c.instructions+=6;NFSU2_TR(0x481112);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B481113:{NFSU2_TR(0x481113);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B481117:{NFSU2_TR(0x481117);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xdull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B48111a:{NFSU2_TR(0x48111a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48111b:{NFSU2_TR(0x48111b);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x50ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48111e:{NFSU2_TR(0x48111e);
if(r1(R+518)){{goto L481189;}}
}
B481120:L481120:{c.instructions+=2;NFSU2_TR(0x481120);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x10ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x10ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B481123:{NFSU2_TR(0x481123);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L48112a;}}
}
B481125:L481125:{c.instructions+=2;NFSU2_TR(0x481125);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x13ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x13ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B481128:{NFSU2_TR(0x481128);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L481189;}}
}
B48112a:L48112a:{c.instructions+=3;NFSU2_TR(0x48112a);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xa0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B481130:{NFSU2_TR(0x481130);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B481132:{NFSU2_TR(0x481132);
if(r1(R+518)){{goto L48117a;}}
}
B481134:L481134:{c.instructions+=3;NFSU2_TR(0x481134);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B48113a:{NFSU2_TR(0x48113a);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x5ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B48113d:{NFSU2_TR(0x48113d);
if(r1(R+518)){{goto L48117a;}}
}
B48113f:L48113f:{c.instructions+=5;NFSU2_TR(0x48113f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B481145:{NFSU2_TR(0x481145);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc0ull))));
w4(U+4,u32(0x5ull));
s4(u32(r4(U+0)),r4(U+4));
}
B48114f:{NFSU2_TR(0x48114f);
__builtin_memmove((R+0),gp(0x82b974),4);
}
B481154:{NFSU2_TR(0x481154);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B481156:{NFSU2_TR(0x481156);
if(r1(R+518)){{goto L48117a;}}
}
B481158:L481158:{c.instructions+=3;NFSU2_TR(0x481158);
__builtin_memmove((R+4),gp(0x82afb0),4);
}
B48115e:{NFSU2_TR(0x48115e);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B481160:{NFSU2_TR(0x481160);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L48117a;}}
}
B481162:L481162:{c.instructions+=4;NFSU2_TR(0x481162);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x17cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B481168:{NFSU2_TR(0x481168);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48116a:{NFSU2_TR(0x48116a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48116b:{NFSU2_TR(0x48116b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x481170ull));
TAIL_STATIC(0x739030u,739);
}
B481170:L481170:{c.instructions+=2;NFSU2_TR(0x481170);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B481173:{NFSU2_TR(0x481173);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa6ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B48117a:L48117a:{c.instructions+=3;NFSU2_TR(0x48117a);
__builtin_memmove((R+4),gp(0x82ba30),4);
}
B481180:{NFSU2_TR(0x481180);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B481182:{NFSU2_TR(0x481182);
if(r1(R+518)){{goto L481189;}}
}
B481184:L481184:{c.instructions+=1;NFSU2_TR(0x481184);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x481189ull));
TAIL_STATIC(0x46c8d0u,46c);
}
B481189:L481189:{c.instructions+=2;NFSU2_TR(0x481189);
u8 U[14];
__builtin_memmove((U+6),(R+20),4);
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
B48118c:{NFSU2_TR(0x48118c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4811ed;}}
}
B48118e:L48118e:{c.instructions+=3;NFSU2_TR(0x48118e);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xa0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B481194:{NFSU2_TR(0x481194);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B481196:{NFSU2_TR(0x481196);
if(r1(R+518)){{goto L4811de;}}
}
B481198:L481198:{c.instructions+=3;NFSU2_TR(0x481198);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B48119e:{NFSU2_TR(0x48119e);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x5ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4811a1:{NFSU2_TR(0x4811a1);
if(r1(R+518)){{goto L4811de;}}
}
B4811a3:L4811a3:{c.instructions+=5;NFSU2_TR(0x4811a3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4811a9:{NFSU2_TR(0x4811a9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc0ull))));
w4(U+4,u32(0x5ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4811b3:{NFSU2_TR(0x4811b3);
__builtin_memmove((R+0),gp(0x82b974),4);
}
B4811b8:{NFSU2_TR(0x4811b8);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4811ba:{NFSU2_TR(0x4811ba);
if(r1(R+518)){{goto L4811de;}}
}
B4811bc:L4811bc:{c.instructions+=3;NFSU2_TR(0x4811bc);
__builtin_memmove((R+4),gp(0x82afb0),4);
}
B4811c2:{NFSU2_TR(0x4811c2);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B4811c4:{NFSU2_TR(0x4811c4);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L4811de;}}
}
B4811c6:L4811c6:{c.instructions+=4;NFSU2_TR(0x4811c6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x17cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4811cc:{NFSU2_TR(0x4811cc);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4811ce:{NFSU2_TR(0x4811ce);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4811cf:{NFSU2_TR(0x4811cf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4811d4ull));
TAIL_STATIC(0x739030u,739);
}
B4811d4:L4811d4:{c.instructions+=2;NFSU2_TR(0x4811d4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4811d7:{NFSU2_TR(0x4811d7);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa6ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4811de:L4811de:{c.instructions+=3;NFSU2_TR(0x4811de);
__builtin_memmove((R+4),gp(0x82ba30),4);
}
B4811e4:{NFSU2_TR(0x4811e4);
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
B4811e6:{NFSU2_TR(0x4811e6);
if(r1(R+518)){{goto L4811ed;}}
}
B4811e8:L4811e8:{c.instructions+=1;NFSU2_TR(0x4811e8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4811edull));
TAIL_STATIC(0x46c8d0u,46c);
}
B4811ed:L4811ed:{c.instructions+=8;NFSU2_TR(0x4811ed);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4811f0:{NFSU2_TR(0x4811f0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4811f1:{NFSU2_TR(0x4811f1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4811f2:{NFSU2_TR(0x4811f2);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x13ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4811f6:{NFSU2_TR(0x4811f6);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4811f9:{NFSU2_TR(0x4811f9);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x5cull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4811fd:{NFSU2_TR(0x4811fd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4811fe:{NFSU2_TR(0x4811fe);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B481210:L481210:{c.instructions+=7;NFSU2_TR(0x481210);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B481211:{NFSU2_TR(0x481211);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B481212:{NFSU2_TR(0x481212);
__builtin_memmove((R+24),(R+4),4);
}
B481214:{NFSU2_TR(0x481214);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B481217:{NFSU2_TR(0x481217);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B481219:{NFSU2_TR(0x481219);
u8 U[2];
__builtin_memmove((U+0),(R+12),1);
w1(U+1,u8(u32(r1(R+0))-u32(r1(U+0))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B48121b:{NFSU2_TR(0x48121b);
if(r1(R+518)){{goto L48122e;}}
}
B48121d:L48121d:{c.instructions+=3;NFSU2_TR(0x48121d);
u8 U[10];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x15ull))));
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
B481221:{NFSU2_TR(0x481221);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B481224:{NFSU2_TR(0x481224);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L48122e;}}
}
B481226:L481226:{c.instructions+=4;NFSU2_TR(0x481226);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x15ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B481229:{NFSU2_TR(0x481229);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B48122a:{NFSU2_TR(0x48122a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B48122b:{NFSU2_TR(0x48122b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B48122e:L48122e:{c.instructions+=5;NFSU2_TR(0x48122e);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B481232:{NFSU2_TR(0x481232);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B481235:{NFSU2_TR(0x481235);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x13ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B481238:{NFSU2_TR(0x481238);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B48123b:{NFSU2_TR(0x48123b);
if(r1(R+518)){{goto L4813c1;}}
}
B481241:L481241:{c.instructions+=2;NFSU2_TR(0x481241);
u8 U[8];
__builtin_memmove((U+0),gp(0x8654a4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B481248:{NFSU2_TR(0x481248);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4812c7;}}
}
B48124a:L48124a:{c.instructions+=3;NFSU2_TR(0x48124a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B481250:{NFSU2_TR(0x481250);
u8 U[14];
__builtin_memmove((U+6),(R+12),4);
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
B481252:{NFSU2_TR(0x481252);
if(r1(R+518)){{goto L481434;}}
}
B481258:L481258:{c.instructions+=3;NFSU2_TR(0x481258);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B48125e:{NFSU2_TR(0x48125e);
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
B481261:{NFSU2_TR(0x481261);
if(r1(R+518)){{goto L481434;}}
}
B481267:L481267:{c.instructions+=3;NFSU2_TR(0x481267);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48126d:{NFSU2_TR(0x48126d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc0ull))));
w4(U+4,u32(0x6ull));
s4(u32(r4(U+0)),r4(U+4));
}
B481277:{NFSU2_TR(0x481277);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x48127cull));
TAIL_STATIC(0x4fe4a0u,4fe);
}
B48127c:L48127c:{c.instructions+=2;NFSU2_TR(0x48127c);
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
B48127e:{NFSU2_TR(0x48127e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L481434;}}
}
B481284:L481284:{c.instructions+=3;NFSU2_TR(0x481284);
__builtin_memmove((R+0),gp(0x82b974),4);
}
B481289:{NFSU2_TR(0x481289);
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
B48128b:{NFSU2_TR(0x48128b);
if(r1(R+518)){{goto L481434;}}
}
B481291:L481291:{c.instructions+=2;NFSU2_TR(0x481291);
u8 U[10];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+8),(U+4),1);
w1(R+512,u8((r1(U+8))<(r1(R+12))));
w1(R+523,sborrow<u8>(r1(U+8),r1(R+12)));
w1(U+9,u8(u32(r1(U+8))-u32(r1(R+12))));
w1(R+519,u8(s8(r1(U+9))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+9))==(u8(0x0ull))));
w1(U+5,u8(u32(r1(U+9))&u32(u8(0xffull))));
w1(U+6,u8(__builtin_popcountll(u64(r1(U+5)))));
w1(U+7,u8(u32(r1(U+6))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+7))==(u8(0x0ull))));
}
B481297:{NFSU2_TR(0x481297);
if(r1(R+518)){{goto L481434;}}
}
B48129d:L48129d:{c.instructions+=4;NFSU2_TR(0x48129d);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48129e:{NFSU2_TR(0x48129e);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48129f:{NFSU2_TR(0x48129f);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4812a2:{NFSU2_TR(0x4812a2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4812a7ull));
TAIL_STATIC(0x46c800u,46c);
}
B4812a7:L4812a7:{c.instructions+=5;NFSU2_TR(0x4812a7);
__builtin_memmove((R+0),gp(0x82b974),4);
}
B4812ac:{NFSU2_TR(0x4812ac);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x17cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4812b2:{NFSU2_TR(0x4812b2);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4812b3:{NFSU2_TR(0x4812b3);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4812b4:{NFSU2_TR(0x4812b4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4812b9ull));
TAIL_STATIC(0x739030u,739);
}
B4812b9:L4812b9:{c.instructions+=5;NFSU2_TR(0x4812b9);
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
B4812bc:{NFSU2_TR(0x4812bc);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa6ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4812c2:{NFSU2_TR(0x4812c2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4812c3:{NFSU2_TR(0x4812c3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4812c4:{NFSU2_TR(0x4812c4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4812c7:L4812c7:{c.instructions+=2;NFSU2_TR(0x4812c7);
u8 U[14];
__builtin_memmove((U+6),gp(0x8900d8),4);
w1(R+512,u8((r4(U+6))<(r4(R+12))));
w1(R+523,sborrow<u32>(r4(U+6),r4(R+12)));
w4(U+10,u32(u32(r4(U+6))-u32(r4(R+12))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4812cd:{NFSU2_TR(0x4812cd);
if(r1(R+518)){{goto L481434;}}
}
B4812d3:L4812d3:{c.instructions+=2;NFSU2_TR(0x4812d3);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4812d6:{NFSU2_TR(0x4812d6);
if(r1(R+518)){{goto L4813a0;}}
}
B4812dc:L4812dc:{c.instructions+=2;NFSU2_TR(0x4812dc);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4812df:{NFSU2_TR(0x4812df);
if(r1(R+518)){{goto L4813a0;}}
}
B4812e5:L4812e5:{c.instructions+=2;NFSU2_TR(0x4812e5);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4812e8:{NFSU2_TR(0x4812e8);
if(r1(R+518)){{goto L4812f8;}}
}
B4812ea:L4812ea:{c.instructions+=2;NFSU2_TR(0x4812ea);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x9ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4812ed:{NFSU2_TR(0x4812ed);
if(r1(R+518)){{goto L4812f8;}}
}
B4812ef:L4812ef:{c.instructions+=2;NFSU2_TR(0x4812ef);
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
B4812f2:{NFSU2_TR(0x4812f2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L481434;}}
}
B4812f8:L4812f8:{c.instructions+=3;NFSU2_TR(0x4812f8);
__builtin_memmove((R+4),gp(0x82ba30),4);
}
B4812fe:{NFSU2_TR(0x4812fe);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B481300:{NFSU2_TR(0x481300);
if(r1(R+518)){{goto L48133d;}}
}
B481302:L481302:{c.instructions+=4;NFSU2_TR(0x481302);
u8 U[7];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(r1(R+12))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B481305:{NFSU2_TR(0x481305);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B481306:{NFSU2_TR(0x481306);
__builtin_memmove((R+28),(R+4),4);
}
B481308:{NFSU2_TR(0x481308);
if(r1(R+518)){{goto L48131d;}}
}
B48130a:L48130a:{c.instructions+=1;NFSU2_TR(0x48130a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x48130full));
TAIL_STATIC(0x736610u,736);
}
B48130f:L48130f:{c.instructions+=2;NFSU2_TR(0x48130f);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B481312:{NFSU2_TR(0x481312);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x481317ull));
TAIL_STATIC(0x46c9d0u,46c);
}
B481317:L481317:{c.instructions+=1;NFSU2_TR(0x481317);
__builtin_memmove((R+4),gp(0x82ba30),4);
}
B48131d:L48131d:{c.instructions+=3;NFSU2_TR(0x48131d);
u8 U[7];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(r1(R+12))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B481320:{NFSU2_TR(0x481320);
__builtin_memmove((R+28),(R+4),4);
}
B481322:{NFSU2_TR(0x481322);
if(r1(R+518)){{goto L481337;}}
}
B481324:L481324:{c.instructions+=1;NFSU2_TR(0x481324);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x481329ull));
TAIL_STATIC(0x736610u,736);
}
B481329:L481329:{c.instructions+=2;NFSU2_TR(0x481329);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B48132c:{NFSU2_TR(0x48132c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x481331ull));
TAIL_STATIC(0x46c9d0u,46c);
}
B481331:L481331:{c.instructions+=1;NFSU2_TR(0x481331);
__builtin_memmove((R+4),gp(0x82ba30),4);
}
B481337:L481337:{c.instructions+=1;NFSU2_TR(0x481337);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x48133cull));
TAIL_STATIC(0x46c930u,46c);
}
B48133c:L48133c:{c.instructions+=1;NFSU2_TR(0x48133c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B48133d:L48133d:{c.instructions+=3;NFSU2_TR(0x48133d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B481343:{NFSU2_TR(0x481343);
u8 U[14];
__builtin_memmove((U+6),(R+12),4);
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
B481345:{NFSU2_TR(0x481345);
if(r1(R+518)){{goto L481434;}}
}
B48134b:L48134b:{c.instructions+=3;NFSU2_TR(0x48134b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B481351:{NFSU2_TR(0x481351);
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
B481354:{NFSU2_TR(0x481354);
if(r1(R+518)){{goto L481434;}}
}
B48135a:L48135a:{c.instructions+=5;NFSU2_TR(0x48135a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B481360:{NFSU2_TR(0x481360);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc0ull))));
w4(U+4,u32(0x5ull));
s4(u32(r4(U+0)),r4(U+4));
}
B48136a:{NFSU2_TR(0x48136a);
__builtin_memmove((R+0),gp(0x82b974),4);
}
B48136f:{NFSU2_TR(0x48136f);
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
B481371:{NFSU2_TR(0x481371);
if(r1(R+518)){{goto L481434;}}
}
B481377:L481377:{c.instructions+=2;NFSU2_TR(0x481377);
u8 U[14];
__builtin_memmove((U+6),gp(0x82afb0),4);
w1(R+512,u8((r4(U+6))<(r4(R+12))));
w1(R+523,sborrow<u32>(r4(U+6),r4(R+12)));
w4(U+10,u32(u32(r4(U+6))-u32(r4(R+12))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B48137d:{NFSU2_TR(0x48137d);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L481434;}}
}
B481383:L481383:{c.instructions+=4;NFSU2_TR(0x481383);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x17cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B481389:{NFSU2_TR(0x481389);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48138b:{NFSU2_TR(0x48138b);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48138c:{NFSU2_TR(0x48138c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x481391ull));
TAIL_STATIC(0x739030u,739);
}
B481391:L481391:{c.instructions+=5;NFSU2_TR(0x481391);
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
B481394:{NFSU2_TR(0x481394);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa6ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B48139b:{NFSU2_TR(0x48139b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B48139c:{NFSU2_TR(0x48139c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B48139d:{NFSU2_TR(0x48139d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4813a0:L4813a0:{c.instructions+=3;NFSU2_TR(0x4813a0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4813a3:{NFSU2_TR(0x4813a3);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xdull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4813a6:{NFSU2_TR(0x4813a6);
if(r1(R+518)){{goto L481425;}}
}
B4813a8:L4813a8:{c.instructions+=2;NFSU2_TR(0x4813a8);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x12ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4813ab:{NFSU2_TR(0x4813ab);
if(r1(R+518)){{goto L481425;}}
}
B4813ad:L4813ad:{c.instructions+=3;NFSU2_TR(0x4813ad);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4813b3:{NFSU2_TR(0x4813b3);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4813b5:{NFSU2_TR(0x4813b5);
if(r1(R+518)){{goto L481425;}}
}
B4813b7:L4813b7:{c.instructions+=3;NFSU2_TR(0x4813b7);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4813b8:{NFSU2_TR(0x4813b8);
u8 U[4];
w4(U+0,u32(0x7ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4813ba:{NFSU2_TR(0x4813ba);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4813bfull));
TAIL_STATIC(0x47ac50u,47a);
}
B4813bf:L4813bf:{c.instructions+=1;NFSU2_TR(0x4813bf);
{goto L481425;}
}
B4813c1:L4813c1:{c.instructions+=3;NFSU2_TR(0x4813c1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B4813c7:{NFSU2_TR(0x4813c7);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4813c9:{NFSU2_TR(0x4813c9);
if(r1(R+518)){{goto L481425;}}
}
B4813cb:L4813cb:{c.instructions+=3;NFSU2_TR(0x4813cb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4813d1:{NFSU2_TR(0x4813d1);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x6ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4813d4:{NFSU2_TR(0x4813d4);
if(r1(R+518)){{goto L481425;}}
}
B4813d6:L4813d6:{c.instructions+=3;NFSU2_TR(0x4813d6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4813dc:{NFSU2_TR(0x4813dc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc0ull))));
w4(U+4,u32(0x6ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4813e6:{NFSU2_TR(0x4813e6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4813ebull));
TAIL_STATIC(0x4fe4a0u,4fe);
}
B4813eb:L4813eb:{c.instructions+=2;NFSU2_TR(0x4813eb);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4813ed:{NFSU2_TR(0x4813ed);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L481425;}}
}
B4813ef:L4813ef:{c.instructions+=3;NFSU2_TR(0x4813ef);
__builtin_memmove((R+0),gp(0x82b974),4);
}
B4813f4:{NFSU2_TR(0x4813f4);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4813f6:{NFSU2_TR(0x4813f6);
if(r1(R+518)){{goto L481425;}}
}
B4813f8:L4813f8:{c.instructions+=2;NFSU2_TR(0x4813f8);
u8 U[7];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(r1(R+12))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B4813fe:{NFSU2_TR(0x4813fe);
if(r1(R+518)){{goto L481425;}}
}
B481400:L481400:{c.instructions+=4;NFSU2_TR(0x481400);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B481401:{NFSU2_TR(0x481401);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B481402:{NFSU2_TR(0x481402);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B481405:{NFSU2_TR(0x481405);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x48140aull));
TAIL_STATIC(0x46c800u,46c);
}
B48140a:L48140a:{c.instructions+=5;NFSU2_TR(0x48140a);
__builtin_memmove((R+0),gp(0x82b974),4);
}
B48140f:{NFSU2_TR(0x48140f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x17cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B481415:{NFSU2_TR(0x481415);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B481416:{NFSU2_TR(0x481416);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B481417:{NFSU2_TR(0x481417);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x48141cull));
TAIL_STATIC(0x739030u,739);
}
B48141c:L48141c:{c.instructions+=2;NFSU2_TR(0x48141c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B48141f:{NFSU2_TR(0x48141f);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa6ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B481425:L481425:{c.instructions+=3;NFSU2_TR(0x481425);
__builtin_memmove((R+4),gp(0x82ba30),4);
}
B48142b:{NFSU2_TR(0x48142b);
u8 U[14];
__builtin_memmove((U+6),(R+12),4);
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
B48142d:{NFSU2_TR(0x48142d);
if(r1(R+518)){{goto L481434;}}
}
B48142f:L48142f:{c.instructions+=1;NFSU2_TR(0x48142f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x481434ull));
TAIL_STATIC(0x46c930u,46c);
}
B481434:L481434:{c.instructions+=3;NFSU2_TR(0x481434);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B481435:{NFSU2_TR(0x481435);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B481436:{NFSU2_TR(0x481436);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B481440:L481440:{c.instructions+=5;NFSU2_TR(0x481440);
__builtin_memmove((R+0),gp(0x7faaa8),4);
}
B481445:{NFSU2_TR(0x481445);
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
B481447:{NFSU2_TR(0x481447);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B481448:{NFSU2_TR(0x481448);
__builtin_memmove((R+24),(R+4),4);
}
B48144a:{NFSU2_TR(0x48144a);
if(r1(R+518)){{goto L48147c;}}
}
B48144c:L48144c:{c.instructions+=3;NFSU2_TR(0x48144c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B48144f:{NFSU2_TR(0x48144f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B481451:{NFSU2_TR(0x481451);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x481454ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B481454:L481454:{c.instructions+=3;NFSU2_TR(0x481454);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B48145a:{NFSU2_TR(0x48145a);
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
B48145c:{NFSU2_TR(0x48145c);
if(r1(R+518)){{goto L481472;}}
}
B48145e:L48145e:{c.instructions+=3;NFSU2_TR(0x48145e);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B481460:{NFSU2_TR(0x481460);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B481462:{NFSU2_TR(0x481462);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x481467ull));
TAIL_STATIC(0x47ac50u,47a);
}
B481467:L481467:{c.instructions+=2;NFSU2_TR(0x481467);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B48146d:{NFSU2_TR(0x48146d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x481472ull));
TAIL_STATIC(0x47af40u,47a);
}
B481472:L481472:{c.instructions+=1;NFSU2_TR(0x481472);
s4(0x82b8b8,u32(0x0ull));
}
B48147c:L48147c:{c.instructions+=2;NFSU2_TR(0x48147c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B48147d:{NFSU2_TR(0x48147d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B481480:L481480:{c.instructions+=2;NFSU2_TR(0x481480);
u8 U[14];
__builtin_memmove((U+6),gp(0x7faaa8),4);
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
B481487:{NFSU2_TR(0x481487);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L481494;}}
}
B481489:L481489:{c.instructions+=2;NFSU2_TR(0x481489);
__builtin_memmove((R+4),gp(0x82b884),4);
}
B48148f:{NFSU2_TR(0x48148f);
TAIL_STATIC(0x480d20u,480);
}
B481494:L481494:{c.instructions+=1;NFSU2_TR(0x481494);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4814a0:L4814a0:{c.instructions+=2;NFSU2_TR(0x4814a0);
u8 U[14];
__builtin_memmove((U+6),gp(0x7faaa8),4);
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
B4814a7:{NFSU2_TR(0x4814a7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4814b4;}}
}
B4814a9:L4814a9:{c.instructions+=2;NFSU2_TR(0x4814a9);
__builtin_memmove((R+4),gp(0x82b884),4);
}
B4814af:{NFSU2_TR(0x4814af);
TAIL_STATIC(0x480eb0u,480);
}
B4814b4:L4814b4:{c.instructions+=1;NFSU2_TR(0x4814b4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4814c0:L4814c0:{c.instructions+=3;NFSU2_TR(0x4814c0);
__builtin_memmove((R+0),gp(0x7faaa8),4);
}
B4814c5:{NFSU2_TR(0x4814c5);
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
B4814c7:{NFSU2_TR(0x4814c7);
if(r1(R+518)){{goto L4814d4;}}
}
B4814c9:L4814c9:{c.instructions+=2;NFSU2_TR(0x4814c9);
__builtin_memmove((R+4),gp(0x82b884),4);
}
B4814cf:{NFSU2_TR(0x4814cf);
TAIL_STATIC(0x480e60u,480);
}
B4814d4:L4814d4:{c.instructions+=1;NFSU2_TR(0x4814d4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4814e0:L4814e0:{c.instructions+=3;NFSU2_TR(0x4814e0);
__builtin_memmove((R+0),gp(0x7faaa8),4);
}
B4814e5:{NFSU2_TR(0x4814e5);
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
B4814e7:{NFSU2_TR(0x4814e7);
if(r1(R+518)){{goto L4814f1;}}
}
B4814e9:L4814e9:{c.instructions+=2;NFSU2_TR(0x4814e9);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4814ec:{NFSU2_TR(0x4814ec);
TAIL_STATIC(0x4797b0u,479);
}
B4814f1:L4814f1:{c.instructions+=1;NFSU2_TR(0x4814f1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B481500:L481500:{c.instructions+=7;NFSU2_TR(0x481500);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B481501:{NFSU2_TR(0x481501);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B481502:{NFSU2_TR(0x481502);
__builtin_memmove((R+24),(R+4),4);
}
B481504:{NFSU2_TR(0x481504);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B481507:{NFSU2_TR(0x481507);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B481509:{NFSU2_TR(0x481509);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B48150b:{NFSU2_TR(0x48150b);
if(r1(R+518)){{goto L48151d;}}
}
B48150d:L48150d:{c.instructions+=4;NFSU2_TR(0x48150d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B481510:{NFSU2_TR(0x481510);
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
B481512:{NFSU2_TR(0x481512);
w4(R+12,u32(0x1ull));
}
B481517:{NFSU2_TR(0x481517);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4815a1;}}
}
B48151d:L48151d:{c.instructions+=7;NFSU2_TR(0x48151d);
__builtin_memmove((R+0),gp(0x82b884),4);
}
B481522:{NFSU2_TR(0x481522);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B481526:{NFSU2_TR(0x481526);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B48152c:{NFSU2_TR(0x48152c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48152d:{NFSU2_TR(0x48152d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48152e:{NFSU2_TR(0x48152e);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B481531:{NFSU2_TR(0x481531);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x481536ull));
TAIL_STATIC(0x43be60u,43b);
}
B481536:L481536:{c.instructions+=4;NFSU2_TR(0x481536);
__builtin_memmove((R+8),gp(0x7ec840),4);
}
B48153c:{NFSU2_TR(0x48153c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B48153f:{NFSU2_TR(0x48153f);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B481540:{NFSU2_TR(0x481540);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x481545ull));
TAIL_STATIC(0x43e910u,43e);
}
B481545:L481545:{c.instructions+=3;NFSU2_TR(0x481545);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B481548:{NFSU2_TR(0x481548);
u8 U[4];
w1(R+523,sborrow<u32>(r4(R+0),u32(0x45cull)));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x45cull))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B48154d:{NFSU2_TR(0x48154d);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L481575;}}
}
B48154f:L48154f:{c.instructions+=6;NFSU2_TR(0x48154f);
__builtin_memmove((R+0),gp(0x7ec840),4);
}
B481554:{NFSU2_TR(0x481554);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x7ull))));
}
B481557:{NFSU2_TR(0x481557);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0x1000ull))));
}
B48155c:{NFSU2_TR(0x48155c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48155d:{NFSU2_TR(0x48155d);
u8 U[4];
w4(U+0,u32(0x5cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48155f:{NFSU2_TR(0x48155f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x481564ull));
TAIL_STATIC(0x440820u,440);
}
B481564:L481564:{c.instructions+=3;NFSU2_TR(0x481564);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B481567:{NFSU2_TR(0x481567);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B481569:{NFSU2_TR(0x481569);
if(r1(R+518)){{goto L481575;}}
}
B48156b:L48156b:{c.instructions+=3;NFSU2_TR(0x48156b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48156c:{NFSU2_TR(0x48156c);
__builtin_memmove((R+4),(R+0),4);
}
B48156e:{NFSU2_TR(0x48156e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x481573ull));
TAIL_STATIC(0x45b1f0u,45b);
}
B481573:L481573:{c.instructions+=1;NFSU2_TR(0x481573);
{goto L481577;}
}
B481575:L481575:{c.instructions+=1;NFSU2_TR(0x481575);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B481577:L481577:{c.instructions+=11;NFSU2_TR(0x481577);
u8 U[16];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+0),4);
s4(u32(r4(U+8)),r4(U+12));
}
B48157b:{NFSU2_TR(0x48157b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B48157c:{NFSU2_TR(0x48157c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B48157d:{NFSU2_TR(0x48157d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B481584:{NFSU2_TR(0x481584);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B48158b:{NFSU2_TR(0x48158b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B481592:{NFSU2_TR(0x481592);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B481595:{NFSU2_TR(0x481595);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B481596:{NFSU2_TR(0x481596);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48159a:{NFSU2_TR(0x48159a);
__builtin_memmove((R+4),(R+0),4);
}
B48159c:{NFSU2_TR(0x48159c);
TAIL_STATIC(0x46cdd0u,46c);
}
B4815a1:L4815a1:{c.instructions+=3;NFSU2_TR(0x4815a1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4815a2:{NFSU2_TR(0x4815a2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4815a3:{NFSU2_TR(0x4815a3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4815b0:L4815b0:{c.instructions+=8;NFSU2_TR(0x4815b0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x14ull))));
}
B4815b3:{NFSU2_TR(0x4815b3);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4815b4:{NFSU2_TR(0x4815b4);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4815b5:{NFSU2_TR(0x4815b5);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4815b6:{NFSU2_TR(0x4815b6);
__builtin_memmove((R+24),(R+4),4);
}
B4815b8:{NFSU2_TR(0x4815b8);
w4(R+28,u32(0x2ull));
}
B4815bd:{NFSU2_TR(0x4815bd);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B4815bf:{NFSU2_TR(0x4815bf);
}
B4815c0:L4815c0:{c.instructions+=3;NFSU2_TR(0x4815c0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4815c3:{NFSU2_TR(0x4815c3);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4815c5:{NFSU2_TR(0x4815c5);
if(r1(R+518)){{goto L481608;}}
}
B4815c7:L4815c7:{c.instructions+=2;NFSU2_TR(0x4815c7);
u8 U[10];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+8),(U+4),1);
w1(R+512,u8((r1(U+8))<(r1(R+12))));
w1(R+523,sborrow<u8>(r1(U+8),r1(R+12)));
w1(U+9,u8(u32(r1(U+8))-u32(r1(R+12))));
w1(R+519,u8(s8(r1(U+9))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+9))==(u8(0x0ull))));
w1(U+5,u8(u32(r1(U+9))&u32(u8(0xffull))));
w1(U+6,u8(__builtin_popcountll(u64(r1(U+5)))));
w1(U+7,u8(u32(r1(U+6))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+7))==(u8(0x0ull))));
}
B4815ca:{NFSU2_TR(0x4815ca);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4815dd;}}
}
B4815cc:L4815cc:{c.instructions+=3;NFSU2_TR(0x4815cc);
__builtin_memmove((R+4),(R+0),4);
}
B4815ce:{NFSU2_TR(0x4815ce);
u8 U[14];
__builtin_memmove((U+6),(R+12),4);
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
B4815d0:{NFSU2_TR(0x4815d0);
if(r1(R+518)){{goto L4815d8;}}
}
B4815d2:L4815d2:{c.instructions+=3;NFSU2_TR(0x4815d2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4815d4:{NFSU2_TR(0x4815d4);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4815d6:{NFSU2_TR(0x4815d6);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4815d8ull));
{u32 t_=u32(r4(U+4));TAIL_DYNAMIC(t_);}
}
B4815d8:L4815d8:{c.instructions+=2;NFSU2_TR(0x4815d8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4815db:{NFSU2_TR(0x4815db);
{goto L481608;}
}
B4815dd:L4815dd:{c.instructions+=5;NFSU2_TR(0x4815dd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4815e0:{NFSU2_TR(0x4815e0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B4815e2:{NFSU2_TR(0x4815e2);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4815e4:{NFSU2_TR(0x4815e4);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4815e8:{NFSU2_TR(0x4815e8);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4815ebull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4815eb:L4815eb:{c.instructions+=8;NFSU2_TR(0x4815eb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4815ee:{NFSU2_TR(0x4815ee);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4815f2:{NFSU2_TR(0x4815f2);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B4815f6:{NFSU2_TR(0x4815f6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4815f7:{NFSU2_TR(0x4815f7);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4815fb:{NFSU2_TR(0x4815fb);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4815ff:{NFSU2_TR(0x4815ff);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B481603:{NFSU2_TR(0x481603);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x481608ull));
TAIL_STATIC(0x47bb30u,47b);
}
B481608:L481608:{c.instructions+=2;NFSU2_TR(0x481608);
w4(R+28,u32(u32(r4(R+28))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+28))==(u32(0x0ull))));
}
B481609:{NFSU2_TR(0x481609);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4815c0u);}goto L4815c0;}}
}
B48160b:L48160b:{c.instructions+=5;NFSU2_TR(0x48160b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B48160c:{NFSU2_TR(0x48160c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B48160d:{NFSU2_TR(0x48160d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B48160e:{NFSU2_TR(0x48160e);
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
B481611:{NFSU2_TR(0x481611);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B481620:L481620:{c.instructions+=10;NFSU2_TR(0x481620);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B481622:{NFSU2_TR(0x481622);
u8 U[4];
w4(U+0,u32(0x772678ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B481627:{NFSU2_TR(0x481627);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B48162d:{NFSU2_TR(0x48162d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48162e:{NFSU2_TR(0x48162e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B481635:{NFSU2_TR(0x481635);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B481636:{NFSU2_TR(0x481636);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B481637:{NFSU2_TR(0x481637);
__builtin_memmove((R+24),(R+4),4);
}
B481639:{NFSU2_TR(0x481639);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48163d:{NFSU2_TR(0x48163d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x481642ull));
TAIL_STATIC(0x479660u,479);
}
B481642:L481642:{c.instructions+=5;NFSU2_TR(0x481642);
u8 U[4];
w4(U+0,u32(0x40000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B481647:{NFSU2_TR(0x481647);
u8 U[4];
w4(U+0,u32(0x4699a0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48164c:{NFSU2_TR(0x48164c);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B481654:{NFSU2_TR(0x481654);
u8 U[4];
w4(U+0,u32(0x78bf30ull));
s4(u32(r4(R+24)),r4(U+0));
}
B48165a:{NFSU2_TR(0x48165a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x48165full));
TAIL_STATIC(0x5e02b0u,5e0);
}
B48165f:L48165f:{c.instructions+=8;NFSU2_TR(0x48165f);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B481663:{NFSU2_TR(0x481663);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B481666:{NFSU2_TR(0x481666);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd4ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B48166d:{NFSU2_TR(0x48166d);
__builtin_memmove((R+0),(R+24),4);
}
B48166f:{NFSU2_TR(0x48166f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B481670:{NFSU2_TR(0x481670);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B481677:{NFSU2_TR(0x481677);
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
B48167a:{NFSU2_TR(0x48167a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B481680:L481680:{c.instructions+=13;NFSU2_TR(0x481680);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B481682:{NFSU2_TR(0x481682);
u8 U[4];
w4(U+0,u32(0x772678ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B481687:{NFSU2_TR(0x481687);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B48168d:{NFSU2_TR(0x48168d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48168e:{NFSU2_TR(0x48168e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B481695:{NFSU2_TR(0x481695);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B481696:{NFSU2_TR(0x481696);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B481697:{NFSU2_TR(0x481697);
__builtin_memmove((R+24),(R+4),4);
}
B481699:{NFSU2_TR(0x481699);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48169d:{NFSU2_TR(0x48169d);
u8 U[4];
w4(U+0,u32(0x78bf30ull));
s4(u32(r4(R+24)),r4(U+0));
}
B4816a3:{NFSU2_TR(0x4816a3);
u8 U[4];
w4(U+0,u32(0x4699a0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4816a8:{NFSU2_TR(0x4816a8);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4816b0:{NFSU2_TR(0x4816b0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4816b5ull));
TAIL_STATIC(0x5e5390u,5e5);
}
B4816b5:L4816b5:{c.instructions+=4;NFSU2_TR(0x4816b5);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4816b8:{NFSU2_TR(0x4816b8);
__builtin_memmove((R+4),(R+24),4);
}
B4816ba:{NFSU2_TR(0x4816ba);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B4816c2:{NFSU2_TR(0x4816c2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4816c7ull));
TAIL_STATIC(0x479710u,479);
}
B4816c7:L4816c7:{c.instructions+=5;NFSU2_TR(0x4816c7);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4816cb:{NFSU2_TR(0x4816cb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4816cc:{NFSU2_TR(0x4816cc);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4816d3:{NFSU2_TR(0x4816d3);
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
B4816d6:{NFSU2_TR(0x4816d6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4816e0:L4816e0:{c.instructions+=3;NFSU2_TR(0x4816e0);
__builtin_memmove((R+0),gp(0x7ec840),4);
}
B4816e5:{NFSU2_TR(0x4816e5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4816e6:{NFSU2_TR(0x4816e6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4816ebull));
TAIL_STATIC(0x43e910u,43e);
}
B4816eb:L4816eb:{c.instructions+=3;NFSU2_TR(0x4816eb);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4816ee:{NFSU2_TR(0x4816ee);
u8 U[4];
w1(R+523,sborrow<u32>(r4(R+0),u32(0x448ull)));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x448ull))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B4816f3:{NFSU2_TR(0x4816f3);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L48171a;}}
}
B4816f5:L4816f5:{c.instructions+=6;NFSU2_TR(0x4816f5);
__builtin_memmove((R+4),gp(0x7ec840),4);
}
B4816fb:{NFSU2_TR(0x4816fb);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x7ull))));
}
B4816fe:{NFSU2_TR(0x4816fe);
w4(R+4,u32(u32(r4(R+4))|u32(u32(0x1000ull))));
}
B481704:{NFSU2_TR(0x481704);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B481705:{NFSU2_TR(0x481705);
u8 U[4];
w4(U+0,u32(0x48ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B481707:{NFSU2_TR(0x481707);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x48170cull));
TAIL_STATIC(0x440820u,440);
}
B48170c:L48170c:{c.instructions+=3;NFSU2_TR(0x48170c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B48170f:{NFSU2_TR(0x48170f);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B481711:{NFSU2_TR(0x481711);
if(r1(R+518)){{goto L48171a;}}
}
B481713:L481713:{c.instructions+=2;NFSU2_TR(0x481713);
__builtin_memmove((R+4),(R+0),4);
}
B481715:{NFSU2_TR(0x481715);
TAIL_STATIC(0x4795d0u,479);
}
B48171a:L48171a:{c.instructions+=2;NFSU2_TR(0x48171a);
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
B48171c:{NFSU2_TR(0x48171c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B481720:L481720:{c.instructions+=2;NFSU2_TR(0x481720);
__builtin_memmove((R+8),(R+4),4);
}
B481722:{NFSU2_TR(0x481722);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x481727ull));
TAIL_STATIC(0x479660u,479);
}
B481727:L481727:{c.instructions+=11;NFSU2_TR(0x481727);
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
B481729:{NFSU2_TR(0x481729);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xd8ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B48172f:{NFSU2_TR(0x48172f);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xe0ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B481735:{NFSU2_TR(0x481735);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xe4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48173b:{NFSU2_TR(0x48173b);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xe8ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B481741:{NFSU2_TR(0x481741);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xecull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B481747:{NFSU2_TR(0x481747);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xf0ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B48174d:{NFSU2_TR(0x48174d);
u8 U[4];
w4(U+0,u32(0x78bf88ull));
s4(u32(r4(R+8)),r4(U+0));
}
B481753:{NFSU2_TR(0x481753);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xf1ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B48175a:{NFSU2_TR(0x48175a);
__builtin_memmove((R+0),(R+8),4);
}
B48175c:{NFSU2_TR(0x48175c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B481760:L481760:{c.instructions+=2;NFSU2_TR(0x481760);
u8 U[4];
w4(U+0,u32(0x78bf88ull));
s4(u32(r4(R+4)),r4(U+0));
}
B481766:{NFSU2_TR(0x481766);
TAIL_STATIC(0x479710u,479);
}
B481770:L481770:{c.instructions+=3;NFSU2_TR(0x481770);
__builtin_memmove((R+0),gp(0x7ec840),4);
}
B481775:{NFSU2_TR(0x481775);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B481776:{NFSU2_TR(0x481776);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x48177bull));
TAIL_STATIC(0x43e910u,43e);
}
B48177b:L48177b:{c.instructions+=3;NFSU2_TR(0x48177b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B48177e:{NFSU2_TR(0x48177e);
u8 U[4];
w1(R+523,sborrow<u32>(r4(R+0),u32(0x4d0ull)));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x4d0ull))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B481783:{NFSU2_TR(0x481783);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L4817ad;}}
}
B481785:L481785:{c.instructions+=6;NFSU2_TR(0x481785);
__builtin_memmove((R+4),gp(0x7ec840),4);
}
B48178b:{NFSU2_TR(0x48178b);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x7ull))));
}
B48178e:{NFSU2_TR(0x48178e);
w4(R+4,u32(u32(r4(R+4))|u32(u32(0x1000ull))));
}
B481794:{NFSU2_TR(0x481794);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B481795:{NFSU2_TR(0x481795);
u8 U[4];
w4(U+0,u32(0xd0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48179a:{NFSU2_TR(0x48179a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x48179full));
TAIL_STATIC(0x440820u,440);
}
B48179f:L48179f:{c.instructions+=3;NFSU2_TR(0x48179f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4817a2:{NFSU2_TR(0x4817a2);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4817a4:{NFSU2_TR(0x4817a4);
if(r1(R+518)){{goto L4817ad;}}
}
B4817a6:L4817a6:{c.instructions+=2;NFSU2_TR(0x4817a6);
__builtin_memmove((R+4),(R+0),4);
}
B4817a8:{NFSU2_TR(0x4817a8);
TAIL_STATIC(0x479660u,479);
}
B4817ad:L4817ad:{c.instructions+=2;NFSU2_TR(0x4817ad);
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
B4817af:{NFSU2_TR(0x4817af);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4817b0:L4817b0:{c.instructions+=3;NFSU2_TR(0x4817b0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4817b1:{NFSU2_TR(0x4817b1);
__builtin_memmove((R+24),(R+4),4);
}
B4817b3:{NFSU2_TR(0x4817b3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4817b8ull));
TAIL_STATIC(0x479710u,479);
}
B4817b8:L4817b8:{c.instructions+=2;NFSU2_TR(0x4817b8);
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
B4817bd:{NFSU2_TR(0x4817bd);
if(r1(R+518)){{goto L4817c8;}}
}
B4817bf:L4817bf:{c.instructions+=2;NFSU2_TR(0x4817bf);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4817c0:{NFSU2_TR(0x4817c0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4817c5ull));
TAIL_STATIC(0x440540u,440);
}
B4817c5:L4817c5:{c.instructions+=1;NFSU2_TR(0x4817c5);
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
B4817c8:L4817c8:{c.instructions+=3;NFSU2_TR(0x4817c8);
__builtin_memmove((R+0),(R+24),4);
}
B4817ca:{NFSU2_TR(0x4817ca);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4817cb:{NFSU2_TR(0x4817cb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4817d0:L4817d0:{c.instructions+=14;NFSU2_TR(0x4817d0);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4817d2:{NFSU2_TR(0x4817d2);
u8 U[4];
w4(U+0,u32(0x7726a3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4817d7:{NFSU2_TR(0x4817d7);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4817dd:{NFSU2_TR(0x4817dd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4817de:{NFSU2_TR(0x4817de);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4817e5:{NFSU2_TR(0x4817e5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4817e6:{NFSU2_TR(0x4817e6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4817e7:{NFSU2_TR(0x4817e7);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4817e8:{NFSU2_TR(0x4817e8);
__builtin_memmove((R+28),(R+4),4);
}
B4817ea:{NFSU2_TR(0x4817ea);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4817ee:{NFSU2_TR(0x4817ee);
u8 U[4];
w4(U+0,u32(0x78bfe0ull));
s4(u32(r4(R+28)),r4(U+0));
}
B4817f4:{NFSU2_TR(0x4817f4);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x24ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4817f7:{NFSU2_TR(0x4817f7);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4817ff:{NFSU2_TR(0x4817ff);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x481804ull));
TAIL_STATIC(0x479100u,479);
}
B481804:L481804:{c.instructions+=5;NFSU2_TR(0x481804);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B481807:{NFSU2_TR(0x481807);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B48180a:{NFSU2_TR(0x48180a);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B48180c:{NFSU2_TR(0x48180c);
u8 U[5];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B481811:{NFSU2_TR(0x481811);
if(r1(R+518)){{goto L48182c;}}
}
B481813:L481813:{c.instructions+=6;NFSU2_TR(0x481813);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B481815:{NFSU2_TR(0x481815);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B481818:{NFSU2_TR(0x481818);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+8)),r4(U+0));
}
B48181a:{NFSU2_TR(0x48181a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48181b:{NFSU2_TR(0x48181b);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48181e:{NFSU2_TR(0x48181e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x481823ull));
TAIL_STATIC(0x440ef0u,440);
}
B481823:L481823:{c.instructions+=4;NFSU2_TR(0x481823);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B481825:{NFSU2_TR(0x481825);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B481828:{NFSU2_TR(0x481828);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B48182a:{NFSU2_TR(0x48182a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x481813u);}goto L481813;}}
}
B48182c:L48182c:{c.instructions+=7;NFSU2_TR(0x48182c);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B481830:{NFSU2_TR(0x481830);
u8 U[4];
w4(U+0,u32(0x789ce4ull));
s4(u32(r4(R+28)),r4(U+0));
}
B481836:{NFSU2_TR(0x481836);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B481837:{NFSU2_TR(0x481837);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B481838:{NFSU2_TR(0x481838);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48183f:{NFSU2_TR(0x48183f);
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
B481842:{NFSU2_TR(0x481842);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B481850:L481850:{c.instructions+=18;NFSU2_TR(0x481850);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B481851:{NFSU2_TR(0x481851);
__builtin_memmove((R+20),(R+16),4);
}
B481853:{NFSU2_TR(0x481853);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff8ull))));
}
B481856:{NFSU2_TR(0x481856);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B481858:{NFSU2_TR(0x481858);
u8 U[4];
w4(U+0,u32(0x7726c0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48185d:{NFSU2_TR(0x48185d);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B481863:{NFSU2_TR(0x481863);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B481864:{NFSU2_TR(0x481864);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48186b:{NFSU2_TR(0x48186b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x24ull))));
}
B48186e:{NFSU2_TR(0x48186e);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48186f:{NFSU2_TR(0x48186f);
__builtin_memmove((R+12),(R+4),4);
}
B481871:{NFSU2_TR(0x481871);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B481874:{NFSU2_TR(0x481874);
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
B481876:{NFSU2_TR(0x481876);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B481877:{NFSU2_TR(0x481877);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B481878:{NFSU2_TR(0x481878);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B481879:{NFSU2_TR(0x481879);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48187d:{NFSU2_TR(0x48187d);
if(r1(R+518)){{goto L481bbd;}}
}
B481883:L481883:{c.instructions+=4;NFSU2_TR(0x481883);
__builtin_memmove((R+4),gp(0x82b950),4);
}
B481889:{NFSU2_TR(0x481889);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+4))));
}
B48188b:{NFSU2_TR(0x48188b);
u8 U[8];
__builtin_memmove((U+0),gp(0x7ecbc8),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B481891:{NFSU2_TR(0x481891);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L4818b4;}}
}
B481893:L481893:{c.instructions+=4;NFSU2_TR(0x481893);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B481896:{NFSU2_TR(0x481896);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B481899:{NFSU2_TR(0x481899);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
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
B48189b:{NFSU2_TR(0x48189b);
if(r1(R+518)){{goto L481b7b;}}
}
B4818a1:L4818a1:{c.instructions+=3;NFSU2_TR(0x4818a1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4818a4:{NFSU2_TR(0x4818a4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B4818a6:{NFSU2_TR(0x4818a6);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4818a9ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4818a9:L4818a9:{c.instructions+=3;NFSU2_TR(0x4818a9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+24),(U+0),4);
}
B4818ab:{NFSU2_TR(0x4818ab);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
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
B4818ad:{NFSU2_TR(0x4818ad);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4818a1u);}goto L4818a1;}}
}
B4818af:L4818af:{c.instructions+=1;NFSU2_TR(0x4818af);
{goto L481b7b;}
}
B4818b4:L4818b4:{c.instructions+=13;NFSU2_TR(0x4818b4);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B4818b7:{NFSU2_TR(0x4818b7);
u8 U[4];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B4818bb:{NFSU2_TR(0x4818bb);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4818be:{NFSU2_TR(0x4818be);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4818c0:{NFSU2_TR(0x4818c0);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4818c4:{NFSU2_TR(0x4818c4);
u8 U[4];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B4818c8:{NFSU2_TR(0x4818c8);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B4818cc:{NFSU2_TR(0x4818cc);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B4818d0:{NFSU2_TR(0x4818d0);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4818d8:{NFSU2_TR(0x4818d8);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4818dc:{NFSU2_TR(0x4818dc);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4818e0:{NFSU2_TR(0x4818e0);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4818e4:{NFSU2_TR(0x4818e4);
if(r1(R+518)){{goto L481925;}}
}
B4818e6:L4818e6:{c.instructions+=1;NFSU2_TR(0x4818e6);
{goto L4818f0;}
}
B4818f0:L4818f0:{c.instructions+=3;NFSU2_TR(0x4818f0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4818f3:{NFSU2_TR(0x4818f3);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x128ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B4818fa:{NFSU2_TR(0x4818fa);
if(r1(R+518)){{goto L48191f;}}
}
B4818fc:L4818fc:{c.instructions+=1;NFSU2_TR(0x4818fc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x481901ull));
TAIL_STATIC(0x440ec0u,440);
}
B481901:L481901:{c.instructions+=2;NFSU2_TR(0x481901);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B481903:{NFSU2_TR(0x481903);
if(r1(R+518)){{goto L48190a;}}
}
B481905:L481905:{c.instructions+=2;NFSU2_TR(0x481905);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B481908:{NFSU2_TR(0x481908);
{goto L48190c;}
}
B48190a:L48190a:{c.instructions+=1;NFSU2_TR(0x48190a);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B48190c:L48190c:{c.instructions+=6;NFSU2_TR(0x48190c);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B481910:{NFSU2_TR(0x481910);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B481912:{NFSU2_TR(0x481912);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B481916:{NFSU2_TR(0x481916);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B481919:{NFSU2_TR(0x481919);
u8 U[4];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B48191d:{NFSU2_TR(0x48191d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B48191f:L48191f:{c.instructions+=3;NFSU2_TR(0x48191f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+24),(U+0),4);
}
B481921:{NFSU2_TR(0x481921);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B481923:{NFSU2_TR(0x481923);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4818f0u);}goto L4818f0;}}
}
B481925:L481925:{c.instructions+=1;NFSU2_TR(0x481925);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+20))),4);
__builtin_memmove((R+24),(U+0),4);
}
B481928:L481928:{c.instructions+=3;NFSU2_TR(0x481928);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B48192a:{NFSU2_TR(0x48192a);
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
B48192c:{NFSU2_TR(0x48192c);
if(r1(R+518)){{goto L4819a6;}}
}
B48192e:L48192e:{c.instructions+=2;NFSU2_TR(0x48192e);
u8 U[4];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B481932:{NFSU2_TR(0x481932);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x481937ull));
TAIL_STATIC(0x502fd0u,502);
}
B481937:L481937:{c.instructions+=2;NFSU2_TR(0x481937);
__builtin_memmove((R+8),(R+0),4);
}
B481939:{NFSU2_TR(0x481939);
__builtin_memmove((R+16),(R+16),4);
}
B481940:L481940:{c.instructions+=4;NFSU2_TR(0x481940);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B481944:{NFSU2_TR(0x481944);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B481946:{NFSU2_TR(0x481946);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B481949:{NFSU2_TR(0x481949);
if(r1(R+518)){{goto L48195b;}}
}
B48194b:L48194b:{c.instructions+=1;NFSU2_TR(0x48194b);
{goto L481950;}
}
B481950:L481950:{c.instructions+=2;NFSU2_TR(0x481950);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+4))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B481953:{NFSU2_TR(0x481953);
if(r1(R+518)){{goto L481974;}}
}
B481955:L481955:{c.instructions+=3;NFSU2_TR(0x481955);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B481957:{NFSU2_TR(0x481957);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B481959:{NFSU2_TR(0x481959);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x481950u);}goto L481950;}}
}
B48195b:L48195b:{c.instructions+=2;NFSU2_TR(0x48195b);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B48195d:{NFSU2_TR(0x48195d);
if(r1(R+518)){{goto L481972;}}
}
B48195f:L48195f:{c.instructions+=5;NFSU2_TR(0x48195f);
{u32 ea_=u32(r4(R+28)+u32(168u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B481965:{NFSU2_TR(0x481965);
{u32 ea_=u32(r4(R+4)+u32(168u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B48196b:{NFSU2_TR(0x48196b);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B48196d:{NFSU2_TR(0x48196d);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B481970:{NFSU2_TR(0x481970);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L481974;}}
}
B481972:L481972:{c.instructions+=1;NFSU2_TR(0x481972);
__builtin_memmove((R+28),(R+4),4);
}
B481974:L481974:{c.instructions+=4;NFSU2_TR(0x481974);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+24),(U+0),4);
}
B481976:{NFSU2_TR(0x481976);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B481979:{NFSU2_TR(0x481979);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B48197b:{NFSU2_TR(0x48197b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x481940u);}goto L481940;}}
}
B48197d:L48197d:{c.instructions+=2;NFSU2_TR(0x48197d);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B48197f:{NFSU2_TR(0x48197f);
if(r1(R+518)){{goto L4819a6;}}
}
B481981:L481981:{c.instructions+=1;NFSU2_TR(0x481981);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x481986ull));
TAIL_STATIC(0x440ec0u,440);
}
B481986:L481986:{c.instructions+=2;NFSU2_TR(0x481986);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B481988:{NFSU2_TR(0x481988);
if(r1(R+518)){{goto L48198f;}}
}
B48198a:L48198a:{c.instructions+=2;NFSU2_TR(0x48198a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48198d:{NFSU2_TR(0x48198d);
{goto L481991;}
}
B48198f:L48198f:{c.instructions+=1;NFSU2_TR(0x48198f);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B481991:L481991:{c.instructions+=7;NFSU2_TR(0x481991);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B481995:{NFSU2_TR(0x481995);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B481997:{NFSU2_TR(0x481997);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48199b:{NFSU2_TR(0x48199b);
u8 U[4];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B48199f:{NFSU2_TR(0x48199f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4819a2:{NFSU2_TR(0x4819a2);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+0)),r4(U+0));
}
B4819a4:{NFSU2_TR(0x4819a4);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x481928u);}goto L481928;}
}
B4819a6:L4819a6:{c.instructions+=5;NFSU2_TR(0x4819a6);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4819a9:{NFSU2_TR(0x4819a9);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x24ull))));
}
B4819ac:{NFSU2_TR(0x4819ac);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4819ae:{NFSU2_TR(0x4819ae);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4819b2:{NFSU2_TR(0x4819b2);
if(r1(R+518)){{goto L4819b9;}}
}
B4819b4:L4819b4:{c.instructions+=2;NFSU2_TR(0x4819b4);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffff0ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4819b7:{NFSU2_TR(0x4819b7);
{goto L4819c0;}
}
B4819b9:L4819b9:{c.instructions+=2;NFSU2_TR(0x4819b9);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B4819bb:{NFSU2_TR(0x4819bb);
{goto L4819c0;}
}
B4819c0:L4819c0:{c.instructions+=2;NFSU2_TR(0x4819c0);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4819c2:{NFSU2_TR(0x4819c2);
if(r1(R+518)){{goto L4819c9;}}
}
B4819c4:L4819c4:{c.instructions+=2;NFSU2_TR(0x4819c4);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xfffffff0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B4819c7:{NFSU2_TR(0x4819c7);
{goto L4819cb;}
}
B4819c9:L4819c9:{c.instructions+=1;NFSU2_TR(0x4819c9);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4819cb:L4819cb:{c.instructions+=2;NFSU2_TR(0x4819cb);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4819cd:{NFSU2_TR(0x4819cd);
if(r1(R+518)){{goto L481a07;}}
}
B4819cf:L4819cf:{c.instructions+=2;NFSU2_TR(0x4819cf);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x128ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B4819d6:{NFSU2_TR(0x4819d6);
if(r1(R+518)){{goto L4819fb;}}
}
B4819d8:L4819d8:{c.instructions+=1;NFSU2_TR(0x4819d8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4819ddull));
TAIL_STATIC(0x440ec0u,440);
}
B4819dd:L4819dd:{c.instructions+=2;NFSU2_TR(0x4819dd);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4819df:{NFSU2_TR(0x4819df);
if(r1(R+518)){{goto L4819e6;}}
}
B4819e1:L4819e1:{c.instructions+=2;NFSU2_TR(0x4819e1);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4819e4:{NFSU2_TR(0x4819e4);
{goto L4819e8;}
}
B4819e6:L4819e6:{c.instructions+=1;NFSU2_TR(0x4819e6);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4819e8:L4819e8:{c.instructions+=6;NFSU2_TR(0x4819e8);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4819ec:{NFSU2_TR(0x4819ec);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B4819ee:{NFSU2_TR(0x4819ee);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4819f2:{NFSU2_TR(0x4819f2);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4819f5:{NFSU2_TR(0x4819f5);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B4819f9:{NFSU2_TR(0x4819f9);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B4819fb:L4819fb:{c.instructions+=3;NFSU2_TR(0x4819fb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B4819fe:{NFSU2_TR(0x4819fe);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B481a00:{NFSU2_TR(0x481a00);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4819b9u);}goto L4819b9;}}
}
B481a02:L481a02:{c.instructions+=2;NFSU2_TR(0x481a02);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0xfffffff0ull))));
}
B481a05:{NFSU2_TR(0x481a05);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4819c0u);}goto L4819c0;}
}
B481a07:L481a07:{c.instructions+=3;NFSU2_TR(0x481a07);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+28),(U+0),4);
}
B481a09:{NFSU2_TR(0x481a09);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B481a0b:{NFSU2_TR(0x481a0b);
if(r1(R+518)){{goto L481a12;}}
}
B481a0d:L481a0d:{c.instructions+=2;NFSU2_TR(0x481a0d);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0xfffffff0ull))));
}
B481a10:{NFSU2_TR(0x481a10);
{goto L481a14;}
}
B481a12:L481a12:{c.instructions+=1;NFSU2_TR(0x481a12);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B481a14:L481a14:{c.instructions+=1;NFSU2_TR(0x481a14);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B481a16:L481a16:{c.instructions+=2;NFSU2_TR(0x481a16);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B481a18:{NFSU2_TR(0x481a18);
if(r1(R+518)){{goto L481a1f;}}
}
B481a1a:L481a1a:{c.instructions+=2;NFSU2_TR(0x481a1a);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xfffffff0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B481a1d:{NFSU2_TR(0x481a1d);
{goto L481a21;}
}
B481a1f:L481a1f:{c.instructions+=1;NFSU2_TR(0x481a1f);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B481a21:L481a21:{c.instructions+=2;NFSU2_TR(0x481a21);
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
B481a23:{NFSU2_TR(0x481a23);
if(r1(R+518)){{goto L481a6e;}}
}
B481a25:L481a25:{c.instructions+=3;NFSU2_TR(0x481a25);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B481a29:{NFSU2_TR(0x481a29);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B481a2d:{NFSU2_TR(0x481a2d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x481a32ull));
TAIL_STATIC(0x502fd0u,502);
}
B481a32:L481a32:{c.instructions+=2;NFSU2_TR(0x481a32);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B481a34:{NFSU2_TR(0x481a34);
if(r1(R+518)){{goto L481a41;}}
}
B481a36:L481a36:{c.instructions+=2;NFSU2_TR(0x481a36);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+28))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B481a39:{NFSU2_TR(0x481a39);
if(r1(R+518)){{goto L481a5a;}}
}
B481a3b:L481a3b:{c.instructions+=3;NFSU2_TR(0x481a3b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+24),(U+0),4);
}
B481a3d:{NFSU2_TR(0x481a3d);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B481a3f:{NFSU2_TR(0x481a3f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x481a36u);}goto L481a36;}}
}
B481a41:L481a41:{c.instructions+=2;NFSU2_TR(0x481a41);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))&u32(r4(R+20))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B481a43:{NFSU2_TR(0x481a43);
if(r1(R+518)){{goto L481a58;}}
}
B481a45:L481a45:{c.instructions+=5;NFSU2_TR(0x481a45);
{u32 ea_=u32(r4(R+20)+u32(168u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B481a4b:{NFSU2_TR(0x481a4b);
{u32 ea_=u32(r4(R+28)+u32(168u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B481a51:{NFSU2_TR(0x481a51);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B481a53:{NFSU2_TR(0x481a53);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B481a56:{NFSU2_TR(0x481a56);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L481a5a;}}
}
B481a58:L481a58:{c.instructions+=1;NFSU2_TR(0x481a58);
__builtin_memmove((R+20),(R+28),4);
}
B481a5a:L481a5a:{c.instructions+=4;NFSU2_TR(0x481a5a);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B481a5d:{NFSU2_TR(0x481a5d);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B481a5f:{NFSU2_TR(0x481a5f);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B481a63:{NFSU2_TR(0x481a63);
if(r1(R+518)){{goto L481a6a;}}
}
B481a65:L481a65:{c.instructions+=2;NFSU2_TR(0x481a65);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffff0ull))));
__builtin_memmove((R+28),(U+0),4);
}
B481a68:{NFSU2_TR(0x481a68);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x481a16u);}goto L481a16;}
}
B481a6a:L481a6a:{c.instructions+=2;NFSU2_TR(0x481a6a);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B481a6c:{NFSU2_TR(0x481a6c);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x481a16u);}goto L481a16;}
}
B481a6e:L481a6e:{c.instructions+=2;NFSU2_TR(0x481a6e);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))&u32(r4(R+20))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B481a70:{NFSU2_TR(0x481a70);
if(r1(R+518)){{goto L481a9a;}}
}
B481a72:L481a72:{c.instructions+=1;NFSU2_TR(0x481a72);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x481a77ull));
TAIL_STATIC(0x440ec0u,440);
}
B481a77:L481a77:{c.instructions+=2;NFSU2_TR(0x481a77);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B481a79:{NFSU2_TR(0x481a79);
if(r1(R+518)){{goto L481a80;}}
}
B481a7b:L481a7b:{c.instructions+=2;NFSU2_TR(0x481a7b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B481a7e:{NFSU2_TR(0x481a7e);
{goto L481a82;}
}
B481a80:L481a80:{c.instructions+=1;NFSU2_TR(0x481a80);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B481a82:L481a82:{c.instructions+=7;NFSU2_TR(0x481a82);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B481a86:{NFSU2_TR(0x481a86);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B481a88:{NFSU2_TR(0x481a88);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B481a8c:{NFSU2_TR(0x481a8c);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B481a90:{NFSU2_TR(0x481a90);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B481a93:{NFSU2_TR(0x481a93);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+0)),r4(U+0));
}
B481a95:{NFSU2_TR(0x481a95);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x481a14u);}goto L481a14;}
}
B481a9a:L481a9a:{c.instructions+=6;NFSU2_TR(0x481a9a);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B481a9e:{NFSU2_TR(0x481a9e);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B481aa2:{NFSU2_TR(0x481aa2);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B481aa6:{NFSU2_TR(0x481aa6);
u8 U[5];
w4(U+0,u32(u32(u32(0x17ull))+u32(r4(R+16))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B481aab:{NFSU2_TR(0x481aab);
w1(R+12,u8(u32(r1(R+12))^u32(r1(R+12))));
}
B481aad:{NFSU2_TR(0x481aad);
__builtin_memmove((R+4),(R+4),4);
}
B481ab0:L481ab0:{c.instructions+=7;NFSU2_TR(0x481ab0);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B481ab4:{NFSU2_TR(0x481ab4);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B481ab7:{NFSU2_TR(0x481ab7);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x128ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B481abd:{NFSU2_TR(0x481abd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B481ac0:{NFSU2_TR(0x481ac0);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B481ac2:{NFSU2_TR(0x481ac2);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x128ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B481ac8:{NFSU2_TR(0x481ac8);
if(r1(R+518)){{goto L481aed;}}
}
B481aca:L481aca:{c.instructions+=2;NFSU2_TR(0x481aca);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+0))&u32(u8(0x1ull))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B481acc:{NFSU2_TR(0x481acc);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L481b28;}}
}
B481ace:L481ace:{c.instructions+=3;NFSU2_TR(0x481ace);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B481ad0:{NFSU2_TR(0x481ad0);
__builtin_memmove((R+4),(R+24),4);
}
B481ad2:{NFSU2_TR(0x481ad2);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x481ad5ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B481ad5:L481ad5:{c.instructions+=5;NFSU2_TR(0x481ad5);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x132ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B481adc:{NFSU2_TR(0x481adc);
u8 U[6];
w1(R+523,sborrow<u32>(m4(0x82b950),u32(0x1ull)));
s4(0x82b950,u32(u32(m4(0x82b950))-u32(u32(0x1ull))));
w1(R+519,u8(s32(m4(0x82b950))<s32(u32(0x0ull))));
w1(R+518,u8((m4(0x82b950))==(u32(0x0ull))));
w4(U+0,u32(u32(m4(0x82b950))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B481ae2:{NFSU2_TR(0x481ae2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B481ae4:{NFSU2_TR(0x481ae4);
__builtin_memmove((R+4),(R+28),4);
}
B481ae6:{NFSU2_TR(0x481ae6);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x481ae9ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B481ae9:L481ae9:{c.instructions+=2;NFSU2_TR(0x481ae9);
w1(R+12,u8(0x1ull));
}
B481aeb:{NFSU2_TR(0x481aeb);
{goto L481b2c;}
}
B481aed:L481aed:{c.instructions+=2;NFSU2_TR(0x481aed);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B481aef:{NFSU2_TR(0x481aef);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L481b23;}}
}
B481af1:L481af1:{c.instructions+=5;NFSU2_TR(0x481af1);
{u32 ea_=u32(r4(R+28)+u32(168u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B481af7:{NFSU2_TR(0x481af7);
{u32 ea_=u32(r4(R+24)+u32(168u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B481afd:{NFSU2_TR(0x481afd);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B481aff:{NFSU2_TR(0x481aff);
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
B481b02:{NFSU2_TR(0x481b02);
if(r1(R+514)){{goto L481b28;}}
}
B481b04:L481b04:{c.instructions+=3;NFSU2_TR(0x481b04);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B481b06:{NFSU2_TR(0x481b06);
__builtin_memmove((R+4),(R+24),4);
}
B481b08:{NFSU2_TR(0x481b08);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x481b0bull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B481b0b:L481b0b:{c.instructions+=5;NFSU2_TR(0x481b0b);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x132ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B481b12:{NFSU2_TR(0x481b12);
u8 U[6];
w1(R+523,sborrow<u32>(m4(0x82b950),u32(0x1ull)));
s4(0x82b950,u32(u32(m4(0x82b950))-u32(u32(0x1ull))));
w1(R+519,u8(s32(m4(0x82b950))<s32(u32(0x0ull))));
w1(R+518,u8((m4(0x82b950))==(u32(0x0ull))));
w4(U+0,u32(u32(m4(0x82b950))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B481b18:{NFSU2_TR(0x481b18);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B481b1a:{NFSU2_TR(0x481b1a);
__builtin_memmove((R+4),(R+28),4);
}
B481b1c:{NFSU2_TR(0x481b1c);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x481b1full));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B481b1f:L481b1f:{c.instructions+=2;NFSU2_TR(0x481b1f);
w1(R+12,u8(0x1ull));
}
B481b21:{NFSU2_TR(0x481b21);
{goto L481b2c;}
}
B481b23:L481b23:{c.instructions+=1;NFSU2_TR(0x481b23);
u8 U[5];
w4(U+0,u32(u32(u32(0x17ull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B481b28:L481b28:{c.instructions+=2;NFSU2_TR(0x481b28);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(r1(R+12))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B481b2a:{NFSU2_TR(0x481b2a);
if(r1(R+518)){{goto L481b58;}}
}
B481b2c:L481b2c:{c.instructions+=2;NFSU2_TR(0x481b2c);
u8 U[22];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
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
B481b30:{NFSU2_TR(0x481b30);
if(r1(R+518)){{goto L481b58;}}
}
B481b32:L481b32:{c.instructions+=6;NFSU2_TR(0x481b32);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B481b36:{NFSU2_TR(0x481b36);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+24),(U+0),4);
}
B481b38:{NFSU2_TR(0x481b38);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B481b3b:{NFSU2_TR(0x481b3b);
u8 U[4];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B481b3f:{NFSU2_TR(0x481b3f);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B481b43:{NFSU2_TR(0x481b43);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x481b48ull));
TAIL_STATIC(0x502fd0u,502);
}
B481b48:L481b48:{c.instructions+=2;NFSU2_TR(0x481b48);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B481b4a:{NFSU2_TR(0x481b4a);
if(r1(R+518)){{goto L481b58;}}
}
B481b4c:L481b4c:{c.instructions+=3;NFSU2_TR(0x481b4c);
u8 U[5];
w4(U+0,u32(u32(u32(0x17ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B481b50:{NFSU2_TR(0x481b50);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B481b52:{NFSU2_TR(0x481b52);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x481ab0u);}goto L481ab0;}}
}
B481b58:L481b58:{c.instructions+=3;NFSU2_TR(0x481b58);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B481b5c:{NFSU2_TR(0x481b5c);
u8 U[5];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B481b61:{NFSU2_TR(0x481b61);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x481b66ull));
TAIL_STATIC(0x4835c0u,483);
}
B481b66:L481b66:{c.instructions+=3;NFSU2_TR(0x481b66);
u8 U[4];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B481b6a:{NFSU2_TR(0x481b6a);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B481b72:{NFSU2_TR(0x481b72);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x481b77ull));
TAIL_STATIC(0x4835c0u,483);
}
B481b77:L481b77:{c.instructions+=1;NFSU2_TR(0x481b77);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B481b7b:L481b7b:{c.instructions+=4;NFSU2_TR(0x481b7b);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B481b7e:{NFSU2_TR(0x481b7e);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B481b81:{NFSU2_TR(0x481b81);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B481b83:{NFSU2_TR(0x481b83);
if(r1(R+518)){{goto L481ba0;}}
}
B481b85:L481b85:{c.instructions+=7;NFSU2_TR(0x481b85);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B481b87:{NFSU2_TR(0x481b87);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B481b89:{NFSU2_TR(0x481b89);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B481b8c:{NFSU2_TR(0x481b8c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+8)),r4(U+0));
}
B481b8e:{NFSU2_TR(0x481b8e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B481b8f:{NFSU2_TR(0x481b8f);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B481b92:{NFSU2_TR(0x481b92);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x481b97ull));
TAIL_STATIC(0x440ef0u,440);
}
B481b97:L481b97:{c.instructions+=4;NFSU2_TR(0x481b97);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B481b99:{NFSU2_TR(0x481b99);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B481b9c:{NFSU2_TR(0x481b9c);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B481b9e:{NFSU2_TR(0x481b9e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x481b85u);}goto L481b85;}}
}
B481ba0:L481ba0:{c.instructions+=3;NFSU2_TR(0x481ba0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B481ba2:{NFSU2_TR(0x481ba2);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B481ba4:{NFSU2_TR(0x481ba4);
if(r1(R+518)){{goto L481bac;}}
}
B481ba6:L481ba6:{c.instructions+=3;NFSU2_TR(0x481ba6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B481ba8:{NFSU2_TR(0x481ba8);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B481baa:{NFSU2_TR(0x481baa);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x481ba6u);}goto L481ba6;}}
}
B481bac:L481bac:{c.instructions+=5;NFSU2_TR(0x481bac);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B481bae:{NFSU2_TR(0x481bae);
__builtin_memmove((R+4),(R+24),4);
}
B481bb0:{NFSU2_TR(0x481bb0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+24)),r4(U+0));
}
B481bb2:{NFSU2_TR(0x481bb2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B481bb5:{NFSU2_TR(0x481bb5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x481bbaull));
TAIL_STATIC(0x43be80u,43b);
}
B481bba:L481bba:{c.instructions+=1;NFSU2_TR(0x481bba);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B481bbd:L481bbd:{c.instructions+=9;NFSU2_TR(0x481bbd);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B481bc1:{NFSU2_TR(0x481bc1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B481bc2:{NFSU2_TR(0x481bc2);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B481bc9:{NFSU2_TR(0x481bc9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B481bca:{NFSU2_TR(0x481bca);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B481bcb:{NFSU2_TR(0x481bcb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B481bcc:{NFSU2_TR(0x481bcc);
__builtin_memmove((R+16),(R+20),4);
}
B481bce:{NFSU2_TR(0x481bce);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B481bcf:{NFSU2_TR(0x481bcf);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B481bd0:L481bd0:{c.instructions+=6;NFSU2_TR(0x481bd0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B481bd1:{NFSU2_TR(0x481bd1);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B481bd2:{NFSU2_TR(0x481bd2);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B481bd3:{NFSU2_TR(0x481bd3);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B481bd4:{NFSU2_TR(0x481bd4);
__builtin_memmove((R+24),(R+4),4);
}
B481bd6:{NFSU2_TR(0x481bd6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x481bdbull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x481850u);}goto L481850;}
}
B481bdb:L481bdb:{c.instructions+=4;NFSU2_TR(0x481bdb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B481bde:{NFSU2_TR(0x481bde);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B481be0:{NFSU2_TR(0x481be0);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((R+12),(U+0),4);
}
B481be3:{NFSU2_TR(0x481be3);
if(r1(R+518)){{goto L481bea;}}
}
B481be5:L481be5:{c.instructions+=2;NFSU2_TR(0x481be5);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffff0ull))));
__builtin_memmove((R+24),(U+0),4);
}
B481be8:{NFSU2_TR(0x481be8);
{goto L481bec;}
}
B481bea:L481bea:{c.instructions+=1;NFSU2_TR(0x481bea);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B481bec:L481bec:{c.instructions+=2;NFSU2_TR(0x481bec);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B481bee:{NFSU2_TR(0x481bee);
__builtin_memmove((R+28),(R+28),4);
}
B481bf0:L481bf0:{c.instructions+=2;NFSU2_TR(0x481bf0);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B481bf2:{NFSU2_TR(0x481bf2);
if(r1(R+518)){{goto L481bf9;}}
}
B481bf4:L481bf4:{c.instructions+=2;NFSU2_TR(0x481bf4);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xfffffff0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B481bf7:{NFSU2_TR(0x481bf7);
{goto L481bfb;}
}
B481bf9:L481bf9:{c.instructions+=1;NFSU2_TR(0x481bf9);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B481bfb:L481bfb:{c.instructions+=2;NFSU2_TR(0x481bfb);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
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
B481bfd:{NFSU2_TR(0x481bfd);
if(r1(R+518)){{goto L481cad;}}
}
B481c03:L481c03:{c.instructions+=5;NFSU2_TR(0x481c03);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B481c07:{NFSU2_TR(0x481c07);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B481c09:{NFSU2_TR(0x481c09);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B481c0a:{NFSU2_TR(0x481c0a);
__builtin_memmove((R+4),(R+24),4);
}
B481c0c:{NFSU2_TR(0x481c0c);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x481c0full));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B481c0f:L481c0f:{c.instructions+=3;NFSU2_TR(0x481c0f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B481c15:{NFSU2_TR(0x481c15);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B481c17:{NFSU2_TR(0x481c17);
if(r1(R+518)){{goto L481c47;}}
}
B481c19:L481c19:{c.instructions+=5;NFSU2_TR(0x481c19);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B481c1c:{NFSU2_TR(0x481c1c);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x9ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+8,u32(r1(U+4)));
}
B481c20:{NFSU2_TR(0x481c20);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B481c22:{NFSU2_TR(0x481c22);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B481c24:{NFSU2_TR(0x481c24);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L481c43;}}
}
B481c26:L481c26:{c.instructions+=2;NFSU2_TR(0x481c26);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((R+4),(U+0),4);
}
B481c29:{NFSU2_TR(0x481c29);
__builtin_memmove((R+16),(R+16),4);
}
B481c30:L481c30:{c.instructions+=3;NFSU2_TR(0x481c30);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B481c32:{NFSU2_TR(0x481c32);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B481c34:{NFSU2_TR(0x481c34);
if(r1(R+518)){{goto L481c3d;}}
}
B481c36:L481c36:{c.instructions+=2;NFSU2_TR(0x481c36);
u8 U[7];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x0ull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B481c3a:{NFSU2_TR(0x481c3a);
if(r1(R+518)){{goto L481c3d;}}
}
B481c3c:L481c3c:{c.instructions+=1;NFSU2_TR(0x481c3c);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B481c3d:L481c3d:{c.instructions+=3;NFSU2_TR(0x481c3d);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4ull))));
}
B481c40:{NFSU2_TR(0x481c40);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
}
B481c41:{NFSU2_TR(0x481c41);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x481c30u);}goto L481c30;}}
}
B481c43:L481c43:{c.instructions+=2;NFSU2_TR(0x481c43);
__builtin_memmove((R+0),(R+28),4);
}
B481c45:{NFSU2_TR(0x481c45);
{goto L481c49;}
}
B481c47:L481c47:{c.instructions+=1;NFSU2_TR(0x481c47);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B481c49:L481c49:{c.instructions+=4;NFSU2_TR(0x481c49);
w4(R+20,u32(u32(r4(R+20))+u32(r4(R+0))));
}
B481c4b:{NFSU2_TR(0x481c4b);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x132ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B481c51:{NFSU2_TR(0x481c51);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B481c53:{NFSU2_TR(0x481c53);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L481c97;}}
}
B481c55:L481c55:{c.instructions+=3;NFSU2_TR(0x481c55);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x134ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B481c5b:{NFSU2_TR(0x481c5b);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B481c5d:{NFSU2_TR(0x481c5d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L481c97;}}
}
B481c5f:L481c5f:{c.instructions+=3;NFSU2_TR(0x481c5f);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x135ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B481c65:{NFSU2_TR(0x481c65);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B481c67:{NFSU2_TR(0x481c67);
if(r1(R+518)){{goto L481c97;}}
}
B481c69:L481c69:{c.instructions+=3;NFSU2_TR(0x481c69);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B481c6c:{NFSU2_TR(0x481c6c);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B481c6e:{NFSU2_TR(0x481c6e);
if(r1(R+518)){{goto L481c75;}}
}
B481c70:L481c70:{c.instructions+=2;NFSU2_TR(0x481c70);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffff0ull))));
__builtin_memmove((R+28),(U+0),4);
}
B481c73:{NFSU2_TR(0x481c73);
{goto L481c77;}
}
B481c75:L481c75:{c.instructions+=1;NFSU2_TR(0x481c75);
w1(R+512,u8(0x0ull));
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B481c77:L481c77:{c.instructions+=9;NFSU2_TR(0x481c77);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B481c7a:{NFSU2_TR(0x481c7a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B481c7d:{NFSU2_TR(0x481c7d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B481c7f:{NFSU2_TR(0x481c7f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B481c82:{NFSU2_TR(0x481c82);
u8 U[6];
w1(R+523,sborrow<u32>(m4(0x82b944),u32(0x1ull)));
s4(0x82b944,u32(u32(m4(0x82b944))-u32(u32(0x1ull))));
w1(R+519,u8(s32(m4(0x82b944))<s32(u32(0x0ull))));
w1(R+518,u8((m4(0x82b944))==(u32(0x0ull))));
w4(U+0,u32(u32(m4(0x82b944))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B481c88:{NFSU2_TR(0x481c88);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B481c8a:{NFSU2_TR(0x481c8a);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B481c8c:{NFSU2_TR(0x481c8c);
__builtin_memmove((R+4),(R+24),4);
}
B481c8e:{NFSU2_TR(0x481c8e);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x481c90ull));
{u32 t_=u32(r4(U+4));TAIL_DYNAMIC(t_);}
}
B481c90:L481c90:{c.instructions+=2;NFSU2_TR(0x481c90);
__builtin_memmove((R+24),(R+28),4);
}
B481c92:{NFSU2_TR(0x481c92);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x481bf0u);}goto L481bf0;}
}
B481c97:L481c97:{c.instructions+=3;NFSU2_TR(0x481c97);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B481c9a:{NFSU2_TR(0x481c9a);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B481c9c:{NFSU2_TR(0x481c9c);
if(r1(R+518)){{goto L481ca6;}}
}
B481c9e:L481c9e:{c.instructions+=2;NFSU2_TR(0x481c9e);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0xfffffff0ull))));
}
B481ca1:{NFSU2_TR(0x481ca1);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x481bf0u);}goto L481bf0;}
}
B481ca6:L481ca6:{c.instructions+=2;NFSU2_TR(0x481ca6);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B481ca8:{NFSU2_TR(0x481ca8);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x481bf0u);}goto L481bf0;}
}
B481cad:L481cad:{c.instructions+=2;NFSU2_TR(0x481cad);
u8 U[14];
__builtin_memmove((U+6),gp(0x82b958),4);
w1(R+512,u8((r4(R+20))<(r4(U+6))));
w1(R+523,sborrow<u32>(r4(R+20),r4(U+6)));
w4(U+10,u32(u32(r4(R+20))-u32(r4(U+6))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B481cb3:{NFSU2_TR(0x481cb3);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L481cbb;}}
}
B481cb5:L481cb5:{c.instructions+=1;NFSU2_TR(0x481cb5);
__builtin_memmove(gp(0x82b958),(R+20),4);
}
B481cbb:L481cbb:{c.instructions+=5;NFSU2_TR(0x481cbb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B481cbc:{NFSU2_TR(0x481cbc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B481cbd:{NFSU2_TR(0x481cbd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B481cbe:{NFSU2_TR(0x481cbe);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B481cbf:{NFSU2_TR(0x481cbf);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B481cd0:L481cd0:{c.instructions+=11;NFSU2_TR(0x481cd0);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B481cd6:{NFSU2_TR(0x481cd6);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B481cd8:{NFSU2_TR(0x481cd8);
u8 U[4];
w4(U+0,u32(0x772720ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B481cdd:{NFSU2_TR(0x481cdd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B481cde:{NFSU2_TR(0x481cde);
__builtin_memmove((R+0),gp(0x7faaa8),4);
}
B481ce3:{NFSU2_TR(0x481ce3);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B481ce5:{NFSU2_TR(0x481ce5);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B481cec:{NFSU2_TR(0x481cec);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B481ced:{NFSU2_TR(0x481ced);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B481cee:{NFSU2_TR(0x481cee);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B481cef:{NFSU2_TR(0x481cef);
if(r1(R+518)){{goto L481e2d;}}
}
B481cf5:L481cf5:{c.instructions+=4;NFSU2_TR(0x481cf5);
__builtin_memmove((R+0),gp(0x82b884),4);
}
B481cfa:{NFSU2_TR(0x481cfa);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x13ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B481cfd:{NFSU2_TR(0x481cfd);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(r1(R+8))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B481cff:{NFSU2_TR(0x481cff);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L481e2d;}}
}
B481d05:L481d05:{c.instructions+=4;NFSU2_TR(0x481d05);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B481d08:{NFSU2_TR(0x481d08);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B481d0a:{NFSU2_TR(0x481d0a);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x24ull))));
__builtin_memmove((R+24),(U+0),4);
}
B481d0d:{NFSU2_TR(0x481d0d);
if(r1(R+518)){{goto L481d14;}}
}
B481d0f:L481d0f:{c.instructions+=2;NFSU2_TR(0x481d0f);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffff0ull))));
__builtin_memmove((R+8),(U+0),4);
}
B481d12:{NFSU2_TR(0x481d12);
{goto L481d16;}
}
B481d14:L481d14:{c.instructions+=1;NFSU2_TR(0x481d14);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B481d16:L481d16:{c.instructions+=4;NFSU2_TR(0x481d16);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B481d1a:{NFSU2_TR(0x481d1a);
w1(R+12,u8(u32(r1(R+12))^u32(r1(R+12))));
}
B481d1c:{NFSU2_TR(0x481d1c);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B481d1e:{NFSU2_TR(0x481d1e);
if(r1(R+518)){{goto L481d4b;}}
}
B481d20:L481d20:{c.instructions+=2;NFSU2_TR(0x481d20);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B481d22:{NFSU2_TR(0x481d22);
if(r1(R+518)){{goto L481d29;}}
}
B481d24:L481d24:{c.instructions+=2;NFSU2_TR(0x481d24);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xfffffff0ull))));
}
B481d27:{NFSU2_TR(0x481d27);
{goto L481d30;}
}
B481d29:L481d29:{c.instructions+=2;NFSU2_TR(0x481d29);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B481d2b:{NFSU2_TR(0x481d2b);
{goto L481d30;}
}
B481d30:L481d30:{c.instructions+=2;NFSU2_TR(0x481d30);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B481d32:{NFSU2_TR(0x481d32);
if(r1(R+518)){{goto L481d39;}}
}
B481d34:L481d34:{c.instructions+=2;NFSU2_TR(0x481d34);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfffffff0ull))));
__builtin_memmove((R+8),(U+0),4);
}
B481d37:{NFSU2_TR(0x481d37);
{goto L481d3b;}
}
B481d39:L481d39:{c.instructions+=1;NFSU2_TR(0x481d39);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B481d3b:L481d3b:{c.instructions+=2;NFSU2_TR(0x481d3b);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B481d3d:{NFSU2_TR(0x481d3d);
if(r1(R+518)){{goto L481d4b;}}
}
B481d3f:L481d3f:{c.instructions+=2;NFSU2_TR(0x481d3f);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B481d42:{NFSU2_TR(0x481d42);
if(r1(R+518)){{goto L481d49;}}
}
B481d44:L481d44:{c.instructions+=2;NFSU2_TR(0x481d44);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B481d47:{NFSU2_TR(0x481d47);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x481d20u);}goto L481d20;}
}
B481d49:L481d49:{c.instructions+=1;NFSU2_TR(0x481d49);
w1(R+12,u8(0x1ull));
}
B481d4b:L481d4b:{c.instructions+=2;NFSU2_TR(0x481d4b);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(U+8),u32(0xaull)));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0xaull))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B481d4f:{NFSU2_TR(0x481d4f);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L481e2d;}}
}
B481d55:L481d55:{c.instructions+=2;NFSU2_TR(0x481d55);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(r1(R+12))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B481d57:{NFSU2_TR(0x481d57);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L481e2d;}}
}
B481d5d:L481d5d:{c.instructions+=2;NFSU2_TR(0x481d5d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B481d5e:{NFSU2_TR(0x481d5e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x481d63ull));
TAIL_STATIC(0x459680u,459);
}
B481d63:L481d63:{c.instructions+=3;NFSU2_TR(0x481d63);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B481d66:{NFSU2_TR(0x481d66);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B481d69:{NFSU2_TR(0x481d69);
if(r1(R+518)){{goto L481dd8;}}
}
B481d6b:L481d6b:{c.instructions+=2;NFSU2_TR(0x481d6b);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B481d6c:{NFSU2_TR(0x481d6c);
if(r1(R+518)){{goto L481db2;}}
}
B481d6e:L481d6e:{c.instructions+=2;NFSU2_TR(0x481d6e);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B481d6f:{NFSU2_TR(0x481d6f);
if(r1(R+518)){{goto L481d8c;}}
}
B481d71:L481d71:{c.instructions+=2;NFSU2_TR(0x481d71);
u8 U[4];
w4(U+0,u32(0x140ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B481d76:{NFSU2_TR(0x481d76);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x481d7bull));
TAIL_STATIC(0x575620u,575);
}
B481d7b:L481d7b:{c.instructions+=4;NFSU2_TR(0x481d7b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B481d7e:{NFSU2_TR(0x481d7e);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B481d82:{NFSU2_TR(0x481d82);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(0x3ull));
s4(u32(r4(U+0)),r4(U+4));
}
B481d8a:{NFSU2_TR(0x481d8a);
{goto L481df1;}
}
B481d8c:L481d8c:{c.instructions+=2;NFSU2_TR(0x481d8c);
u8 U[4];
w4(U+0,u32(0x160ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B481d91:{NFSU2_TR(0x481d91);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x481d96ull));
TAIL_STATIC(0x575620u,575);
}
B481d96:L481d96:{c.instructions+=5;NFSU2_TR(0x481d96);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B481d99:{NFSU2_TR(0x481d99);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B481d9d:{NFSU2_TR(0x481d9d);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B481d9f:{NFSU2_TR(0x481d9f);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B481da7:{NFSU2_TR(0x481da7);
if(r1(R+518)){{goto L481dfe;}}
}
B481da9:L481da9:{c.instructions+=2;NFSU2_TR(0x481da9);
__builtin_memmove((R+4),(R+0),4);
}
B481dab:{NFSU2_TR(0x481dab);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x481db0ull));
TAIL_STATIC(0x47a960u,47a);
}
B481db0:L481db0:{c.instructions+=1;NFSU2_TR(0x481db0);
{goto L481e00;}
}
B481db2:L481db2:{c.instructions+=2;NFSU2_TR(0x481db2);
u8 U[4];
w4(U+0,u32(0x150ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B481db7:{NFSU2_TR(0x481db7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x481dbcull));
TAIL_STATIC(0x575620u,575);
}
B481dbc:L481dbc:{c.instructions+=5;NFSU2_TR(0x481dbc);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B481dbf:{NFSU2_TR(0x481dbf);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B481dc3:{NFSU2_TR(0x481dc3);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B481dc5:{NFSU2_TR(0x481dc5);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B481dcd:{NFSU2_TR(0x481dcd);
if(r1(R+518)){{goto L481dfe;}}
}
B481dcf:L481dcf:{c.instructions+=2;NFSU2_TR(0x481dcf);
__builtin_memmove((R+4),(R+0),4);
}
B481dd1:{NFSU2_TR(0x481dd1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x481dd6ull));
TAIL_STATIC(0x480b70u,480);
}
B481dd6:L481dd6:{c.instructions+=1;NFSU2_TR(0x481dd6);
{goto L481e00;}
}
B481dd8:L481dd8:{c.instructions+=2;NFSU2_TR(0x481dd8);
u8 U[4];
w4(U+0,u32(0x140ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B481ddd:{NFSU2_TR(0x481ddd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x481de2ull));
TAIL_STATIC(0x575620u,575);
}
B481de2:L481de2:{c.instructions+=3;NFSU2_TR(0x481de2);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B481de5:{NFSU2_TR(0x481de5);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B481de9:{NFSU2_TR(0x481de9);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(0x2ull));
s4(u32(r4(U+0)),r4(U+4));
}
B481df1:L481df1:{c.instructions+=2;NFSU2_TR(0x481df1);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B481df3:{NFSU2_TR(0x481df3);
if(r1(R+518)){{goto L481dfe;}}
}
B481df5:L481df5:{c.instructions+=2;NFSU2_TR(0x481df5);
__builtin_memmove((R+4),(R+0),4);
}
B481df7:{NFSU2_TR(0x481df7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x481dfcull));
TAIL_STATIC(0x480bc0u,480);
}
B481dfc:L481dfc:{c.instructions+=1;NFSU2_TR(0x481dfc);
{goto L481e00;}
}
B481dfe:L481dfe:{c.instructions+=1;NFSU2_TR(0x481dfe);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B481e00:L481e00:{c.instructions+=13;NFSU2_TR(0x481e00);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B481e03:{NFSU2_TR(0x481e03);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B481e06:{NFSU2_TR(0x481e06);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
}
B481e09:{NFSU2_TR(0x481e09);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B481e0b:{NFSU2_TR(0x481e0b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B481e0e:{NFSU2_TR(0x481e0e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B481e11:{NFSU2_TR(0x481e11);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+0)),r4(U+0));
}
B481e13:{NFSU2_TR(0x481e13);
__builtin_memmove((R+0),gp(0x82b944),4);
}
B481e18:{NFSU2_TR(0x481e18);
__builtin_memmove((R+4),gp(0x82b948),4);
}
B481e1e:{NFSU2_TR(0x481e1e);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B481e1f:{NFSU2_TR(0x481e1f);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B481e21:{NFSU2_TR(0x481e21);
__builtin_memmove(gp(0x82b944),(R+0),4);
}
B481e26:{NFSU2_TR(0x481e26);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L481e2d;}}
}
B481e28:L481e28:{c.instructions+=1;NFSU2_TR(0x481e28);
__builtin_memmove(gp(0x82b948),(R+0),4);
}
B481e2d:L481e2d:{c.instructions+=7;NFSU2_TR(0x481e2d);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B481e31:{NFSU2_TR(0x481e31);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B481e32:{NFSU2_TR(0x481e32);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B481e33:{NFSU2_TR(0x481e33);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B481e3a:{NFSU2_TR(0x481e3a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B481e3b:{NFSU2_TR(0x481e3b);
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
B481e3e:{NFSU2_TR(0x481e3e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B481e50:L481e50:{c.instructions+=3;NFSU2_TR(0x481e50);
__builtin_memmove((R+0),gp(0x7faaa8),4);
}
B481e55:{NFSU2_TR(0x481e55);
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
B481e57:{NFSU2_TR(0x481e57);
if(r1(R+518)){{goto L481ee7;}}
}
B481e5d:L481e5d:{c.instructions+=7;NFSU2_TR(0x481e5d);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B481e60:{NFSU2_TR(0x481e60);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((R+8),(U+0),4);
}
B481e63:{NFSU2_TR(0x481e63);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B481e65:{NFSU2_TR(0x481e65);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B481e66:{NFSU2_TR(0x481e66);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B481e67:{NFSU2_TR(0x481e67);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B481e6b:{NFSU2_TR(0x481e6b);
if(r1(R+518)){{goto L481e7e;}}
}
B481e6d:L481e6d:{c.instructions+=1;NFSU2_TR(0x481e6d);
__builtin_memmove((R+4),(R+4),4);
}
B481e70:L481e70:{c.instructions+=3;NFSU2_TR(0x481e70);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B481e73:{NFSU2_TR(0x481e73);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B481e76:{NFSU2_TR(0x481e76);
if(r1(R+518)){{goto L481e8d;}}
}
B481e78:L481e78:{c.instructions+=3;NFSU2_TR(0x481e78);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B481e7a:{NFSU2_TR(0x481e7a);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B481e7c:{NFSU2_TR(0x481e7c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x481e70u);}goto L481e70;}}
}
B481e7e:L481e7e:{c.instructions+=4;NFSU2_TR(0x481e7e);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B481e81:{NFSU2_TR(0x481e81);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B481e83:{NFSU2_TR(0x481e83);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x24ull))));
__builtin_memmove((R+8),(U+0),4);
}
B481e86:{NFSU2_TR(0x481e86);
if(r1(R+518)){{goto L481eb8;}}
}
B481e88:L481e88:{c.instructions+=2;NFSU2_TR(0x481e88);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffff0ull))));
__builtin_memmove((R+4),(U+0),4);
}
B481e8b:{NFSU2_TR(0x481e8b);
{goto L481ec0;}
}
B481e8d:L481e8d:{c.instructions+=6;NFSU2_TR(0x481e8d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B481e8f:{NFSU2_TR(0x481e8f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B481e92:{NFSU2_TR(0x481e92);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+8)),r4(U+0));
}
B481e94:{NFSU2_TR(0x481e94);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B481e95:{NFSU2_TR(0x481e95);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B481e98:{NFSU2_TR(0x481e98);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x481e9dull));
TAIL_STATIC(0x440ef0u,440);
}
B481e9d:L481e9d:{c.instructions+=9;NFSU2_TR(0x481e9d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B481ea0:{NFSU2_TR(0x481ea0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B481ea3:{NFSU2_TR(0x481ea3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B481ea5:{NFSU2_TR(0x481ea5);
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
B481ea8:{NFSU2_TR(0x481ea8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B481eab:{NFSU2_TR(0x481eab);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B481ead:{NFSU2_TR(0x481ead);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B481eaf:{NFSU2_TR(0x481eaf);
__builtin_memmove((R+4),(R+24),4);
}
B481eb1:{NFSU2_TR(0x481eb1);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x481eb3ull));
{u32 t_=u32(r4(U+4));TAIL_DYNAMIC(t_);}
}
B481eb3:L481eb3:{c.instructions+=3;NFSU2_TR(0x481eb3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B481eb4:{NFSU2_TR(0x481eb4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B481eb5:{NFSU2_TR(0x481eb5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B481eb8:L481eb8:{c.instructions+=2;NFSU2_TR(0x481eb8);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B481eba:{NFSU2_TR(0x481eba);
__builtin_memmove((R+12),(R+12),4);
}
B481ec0:L481ec0:{c.instructions+=2;NFSU2_TR(0x481ec0);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B481ec2:{NFSU2_TR(0x481ec2);
if(r1(R+518)){{goto L481ec9;}}
}
B481ec4:L481ec4:{c.instructions+=2;NFSU2_TR(0x481ec4);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xfffffff0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B481ec7:{NFSU2_TR(0x481ec7);
{goto L481ecb;}
}
B481ec9:L481ec9:{c.instructions+=1;NFSU2_TR(0x481ec9);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B481ecb:L481ecb:{c.instructions+=2;NFSU2_TR(0x481ecb);
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
B481ecd:{NFSU2_TR(0x481ecd);
if(r1(R+518)){{goto L481ee5;}}
}
B481ecf:L481ecf:{c.instructions+=2;NFSU2_TR(0x481ecf);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B481ed2:{NFSU2_TR(0x481ed2);
if(r1(R+518)){{goto L481ee0;}}
}
B481ed4:L481ed4:{c.instructions+=3;NFSU2_TR(0x481ed4);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B481ed7:{NFSU2_TR(0x481ed7);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B481ed9:{NFSU2_TR(0x481ed9);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x481eb8u);}goto L481eb8;}}
}
B481edb:L481edb:{c.instructions+=2;NFSU2_TR(0x481edb);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0xfffffff0ull))));
}
B481ede:{NFSU2_TR(0x481ede);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x481ec0u);}goto L481ec0;}
}
B481ee0:L481ee0:{c.instructions+=1;NFSU2_TR(0x481ee0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x481ee5ull));
TAIL_STATIC(0x46a1a0u,46a);
}
B481ee5:L481ee5:{c.instructions+=2;NFSU2_TR(0x481ee5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B481ee6:{NFSU2_TR(0x481ee6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B481ee7:L481ee7:{c.instructions+=1;NFSU2_TR(0x481ee7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B481ef0:L481ef0:{c.instructions+=3;NFSU2_TR(0x481ef0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B481ef1:{NFSU2_TR(0x481ef1);
__builtin_memmove((R+24),(R+4),4);
}
B481ef3:{NFSU2_TR(0x481ef3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x481ef8ull));
TAIL_STATIC(0x479880u,479);
}
B481ef8:L481ef8:{c.instructions+=2;NFSU2_TR(0x481ef8);
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
B481efd:{NFSU2_TR(0x481efd);
if(r1(R+518)){{goto L481f08;}}
}
B481eff:L481eff:{c.instructions+=2;NFSU2_TR(0x481eff);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B481f00:{NFSU2_TR(0x481f00);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x481f05ull));
TAIL_STATIC(0x575630u,575);
}
B481f05:L481f05:{c.instructions+=1;NFSU2_TR(0x481f05);
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
B481f08:L481f08:{c.instructions+=3;NFSU2_TR(0x481f08);
__builtin_memmove((R+0),(R+24),4);
}
B481f0a:{NFSU2_TR(0x481f0a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B481f0b:{NFSU2_TR(0x481f0b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B481f10:L481f10:{c.instructions+=5;NFSU2_TR(0x481f10);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B481f11:{NFSU2_TR(0x481f11);
__builtin_memmove((R+24),(R+4),4);
}
B481f13:{NFSU2_TR(0x481f13);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B481f16:{NFSU2_TR(0x481f16);
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
B481f18:{NFSU2_TR(0x481f18);
if(r1(R+518)){{goto L481fa0;}}
}
B481f1e:L481f1e:{c.instructions+=3;NFSU2_TR(0x481f1e);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x22ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B481f21:{NFSU2_TR(0x481f21);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B481f23:{NFSU2_TR(0x481f23);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L481f30;}}
}
B481f25:L481f25:{c.instructions+=3;NFSU2_TR(0x481f25);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x21ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B481f28:{NFSU2_TR(0x481f28);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B481f2a:{NFSU2_TR(0x481f2a);
if(r1(R+518)){{goto L481f3b;}}
}
B481f2c:L481f2c:{c.instructions+=2;NFSU2_TR(0x481f2c);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B481f2e:{NFSU2_TR(0x481f2e);
if(r1(R+518)){{goto L481f3b;}}
}
B481f30:L481f30:{c.instructions+=2;NFSU2_TR(0x481f30);
__builtin_memmove((R+4),(R+24),4);
}
B481f32:{NFSU2_TR(0x481f32);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x481f37ull));
TAIL_STATIC(0x46a460u,46a);
}
B481f37:L481f37:{c.instructions+=1;NFSU2_TR(0x481f37);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x22ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B481f3b:L481f3b:{c.instructions+=3;NFSU2_TR(0x481f3b);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x135ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B481f41:{NFSU2_TR(0x481f41);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B481f43:{NFSU2_TR(0x481f43);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L481f5c;}}
}
B481f45:L481f45:{c.instructions+=3;NFSU2_TR(0x481f45);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B481f48:{NFSU2_TR(0x481f48);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B481f4a:{NFSU2_TR(0x481f4a);
if(r1(R+518)){{goto L481f55;}}
}
B481f4c:L481f4c:{c.instructions+=1;NFSU2_TR(0x481f4c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x481f51ull));
TAIL_STATIC(0x4595d0u,459);
}
B481f51:L481f51:{c.instructions+=2;NFSU2_TR(0x481f51);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B481f53:{NFSU2_TR(0x481f53);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L481f5c;}}
}
B481f55:L481f55:{c.instructions+=2;NFSU2_TR(0x481f55);
__builtin_memmove((R+4),(R+24),4);
}
B481f57:{NFSU2_TR(0x481f57);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x481f5cull));
TAIL_STATIC(0x46a1a0u,46a);
}
B481f5c:L481f5c:{c.instructions+=3;NFSU2_TR(0x481f5c);
__builtin_memmove((R+0),gp(0x7faaa8),4);
}
B481f61:{NFSU2_TR(0x481f61);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B481f63:{NFSU2_TR(0x481f63);
if(r1(R+518)){{goto L481f80;}}
}
B481f65:L481f65:{c.instructions+=3;NFSU2_TR(0x481f65);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x132ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B481f6b:{NFSU2_TR(0x481f6b);
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
B481f6d:{NFSU2_TR(0x481f6d);
if(r1(R+518)){{goto L481f80;}}
}
B481f6f:L481f6f:{c.instructions+=4;NFSU2_TR(0x481f6f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B481f71:{NFSU2_TR(0x481f71);
__builtin_memmove((R+4),(R+24),4);
}
B481f73:{NFSU2_TR(0x481f73);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc4ull))));
w4(U+4,u32(0x1000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B481f7d:{NFSU2_TR(0x481f7d);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x481f80ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B481f80:L481f80:{c.instructions+=5;NFSU2_TR(0x481f80);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B481f81:{NFSU2_TR(0x481f81);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B481f85:{NFSU2_TR(0x481f85);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B481f86:{NFSU2_TR(0x481f86);
__builtin_memmove((R+4),(R+24),4);
}
B481f88:{NFSU2_TR(0x481f88);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x481f8dull));
TAIL_STATIC(0x479970u,479);
}
B481f8d:L481f8d:{c.instructions+=3;NFSU2_TR(0x481f8d);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x135ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B481f93:{NFSU2_TR(0x481f93);
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
B481f95:{NFSU2_TR(0x481f95);
if(r1(R+518)){{goto L481f9f;}}
}
B481f97:L481f97:{c.instructions+=3;NFSU2_TR(0x481f97);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B481f98:{NFSU2_TR(0x481f98);
__builtin_memmove((R+4),(R+24),4);
}
B481f9a:{NFSU2_TR(0x481f9a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x481f9full));
TAIL_STATIC(0x46a3a0u,46a);
}
B481f9f:L481f9f:{c.instructions+=1;NFSU2_TR(0x481f9f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B481fa0:L481fa0:{c.instructions+=2;NFSU2_TR(0x481fa0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B481fa1:{NFSU2_TR(0x481fa1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B481fb0:L481fb0:{c.instructions+=4;NFSU2_TR(0x481fb0);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xbcull))));
__builtin_memmove((R+0),(U+0),4);
}
B481fb6:{NFSU2_TR(0x481fb6);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xb4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B481fbc:{NFSU2_TR(0x481fbc);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B481fbd:{NFSU2_TR(0x481fbd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x481fc2ull));
TAIL_STATIC(0x47bb30u,47b);
}
B481fc2:L481fc2:{c.instructions+=1;NFSU2_TR(0x481fc2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B481fd0:L481fd0:{c.instructions+=7;NFSU2_TR(0x481fd0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B481fd4:{NFSU2_TR(0x481fd4);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B481fd5:{NFSU2_TR(0x481fd5);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B481fd6:{NFSU2_TR(0x481fd6);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B481fd7:{NFSU2_TR(0x481fd7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B481fd8:{NFSU2_TR(0x481fd8);
__builtin_memmove((R+28),(R+4),4);
}
B481fda:{NFSU2_TR(0x481fda);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x481fdfull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x481f10u);}goto L481f10;}
}
B481fdf:L481fdf:{c.instructions+=4;NFSU2_TR(0x481fdf);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B481fe1:{NFSU2_TR(0x481fe1);
u8 U[16];
w4(U+0,u32(u32(u32(0x14cull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+20))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B481fe8:{NFSU2_TR(0x481fe8);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B481fea:{NFSU2_TR(0x481fea);
if(r1(R+518)){TAIL_STATIC(0x4820f7u,482);}
}
B481ff0:L481ff0:{c.instructions+=4;NFSU2_TR(0x481ff0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B481ff2:{NFSU2_TR(0x481ff2);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B481ff4:{NFSU2_TR(0x481ff4);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B481ffc:{NFSU2_TR(0x481ffc);
if(r1(R+518)){TAIL_STATIC(0x482015u,482);}
}
B481ffe:L481ffe:{c.instructions+=1;NFSU2_TR(0x481ffe);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
TAIL_STATIC(0x482002u,482);
}
XIT:NFSU2_TR_EXIT(0x481,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
