#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_495(u8* __restrict R,Cpu& c);
u32 body_4c2(u8* __restrict R,Cpu& c);
u32 body_4cb(u8* __restrict R,Cpu& c);
u32 body_4de(u8* __restrict R,Cpu& c);
u32 body_4ff(u8* __restrict R,Cpu& c);
u32 body_505(u8* __restrict R,Cpu& c);
u32 body_50b(u8* __restrict R,Cpu& c);
u32 body_50d(u8* __restrict R,Cpu& c);
u32 body_517(u8* __restrict R,Cpu& c);
u32 body_519(u8* __restrict R,Cpu& c);
u32 body_51d(u8* __restrict R,Cpu& c);
u32 body_52a(u8* __restrict R,Cpu& c);
u32 body_52c(u8* __restrict R,Cpu& c);
u32 body_535(u8* __restrict R,Cpu& c);
u32 body_537(u8* __restrict R,Cpu& c);
u32 body_542(u8* __restrict R,Cpu& c);
u32 body_548(u8* __restrict R,Cpu& c);
u32 body_54b(u8* __restrict R,Cpu& c);
u32 body_54c(u8* __restrict R,Cpu& c);
u32 body_551(u8* __restrict R,Cpu& c);
u32 body_552(u8* __restrict R,Cpu& c);
u32 body_553(u8* __restrict R,Cpu& c);
u32 body_555(u8* __restrict R,Cpu& c);
u32 body_575(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x554,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x554,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_554(u8* __restrict R,Cpu& c);
u32 page_554(Cpu& c){return body_554(c.regs.data(),c);}
__attribute__((noinline)) u32 body_554(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x554000:goto L554000;
case 0x554003:c.instructions+=2;goto B554003;
case 0x554005:c.instructions+=1;goto B554005;
case 0x554007:goto L554007;
case 0x554008:c.instructions+=1;goto B554008;
case 0x55400d:goto L55400d;
case 0x554010:c.instructions+=2;goto B554010;
case 0x554012:c.instructions+=1;goto B554012;
case 0x554014:goto L554014;
case 0x55401a:c.instructions+=3;goto B55401a;
case 0x55401b:c.instructions+=2;goto B55401b;
case 0x55401d:c.instructions+=1;goto B55401d;
case 0x554022:goto L554022;
case 0x554024:c.instructions+=1;goto B554024;
case 0x554026:goto L554026;
case 0x55402b:c.instructions+=2;goto B55402b;
case 0x55402d:c.instructions+=1;goto B55402d;
case 0x55402f:goto L55402f;
case 0x554032:c.instructions+=4;goto B554032;
case 0x554033:c.instructions+=3;goto B554033;
case 0x554039:c.instructions+=2;goto B554039;
case 0x55403a:c.instructions+=1;goto B55403a;
case 0x55403f:goto L55403f;
case 0x554041:c.instructions+=2;goto B554041;
case 0x554043:c.instructions+=1;goto B554043;
case 0x554045:goto L554045;
case 0x55404a:c.instructions+=3;goto B55404a;
case 0x55404d:c.instructions+=2;goto B55404d;
case 0x55404f:c.instructions+=1;goto B55404f;
case 0x554050:goto L554050;
case 0x554053:c.instructions+=2;goto B554053;
case 0x554055:c.instructions+=1;goto B554055;
case 0x554057:goto L554057;
case 0x554059:c.instructions+=1;goto B554059;
case 0x55405b:goto L55405b;
case 0x55405d:goto L55405d;
case 0x554060:c.instructions+=5;goto B554060;
case 0x554062:c.instructions+=4;goto B554062;
case 0x554065:c.instructions+=3;goto B554065;
case 0x554066:c.instructions+=2;goto B554066;
case 0x554068:c.instructions+=1;goto B554068;
case 0x55406a:goto L55406a;
case 0x55406d:c.instructions+=2;goto B55406d;
case 0x55406f:c.instructions+=1;goto B55406f;
case 0x554071:goto L554071;
case 0x554074:c.instructions+=1;goto B554074;
case 0x554076:goto L554076;
case 0x554079:c.instructions+=2;goto B554079;
case 0x55407b:c.instructions+=1;goto B55407b;
case 0x55407d:goto L55407d;
case 0x55407f:goto L55407f;
case 0x554081:c.instructions+=1;goto B554081;
case 0x554083:goto L554083;
case 0x554086:c.instructions+=1;goto B554086;
case 0x554088:goto L554088;
case 0x55408a:c.instructions+=2;goto B55408a;
case 0x55408d:c.instructions+=1;goto B55408d;
case 0x554092:goto L554092;
case 0x554095:c.instructions+=1;goto B554095;
case 0x554098:goto L554098;
case 0x55409b:goto L55409b;
case 0x55409f:c.instructions+=8;goto B55409f;
case 0x5540a3:c.instructions+=7;goto B5540a3;
case 0x5540a9:c.instructions+=6;goto B5540a9;
case 0x5540ac:c.instructions+=5;goto B5540ac;
case 0x5540ad:c.instructions+=4;goto B5540ad;
case 0x5540b3:c.instructions+=3;goto B5540b3;
case 0x5540b5:c.instructions+=2;goto B5540b5;
case 0x5540b9:c.instructions+=1;goto B5540b9;
case 0x5540bf:goto L5540bf;
case 0x5540c6:c.instructions+=2;goto B5540c6;
case 0x5540c8:c.instructions+=1;goto B5540c8;
case 0x5540ca:goto L5540ca;
case 0x5540cb:c.instructions+=1;goto B5540cb;
case 0x5540cd:goto L5540cd;
case 0x5540cf:c.instructions+=1;goto B5540cf;
case 0x5540d1:goto L5540d1;
case 0x5540d6:c.instructions+=1;goto B5540d6;
case 0x5540d8:goto L5540d8;
case 0x5540dd:goto L5540dd;
case 0x5540e1:c.instructions+=3;goto B5540e1;
case 0x5540e7:c.instructions+=2;goto B5540e7;
case 0x5540e9:c.instructions+=1;goto B5540e9;
case 0x5540eb:goto L5540eb;
case 0x5540ee:c.instructions+=3;goto B5540ee;
case 0x5540f0:c.instructions+=2;goto B5540f0;
case 0x5540f2:c.instructions+=1;goto B5540f2;
case 0x5540f4:goto L5540f4;
case 0x5540f6:goto L5540f6;
case 0x5540f9:c.instructions+=1;goto B5540f9;
case 0x5540fb:goto L5540fb;
case 0x554100:c.instructions+=2;goto B554100;
case 0x554103:c.instructions+=1;goto B554103;
case 0x554106:goto L554106;
case 0x55410c:c.instructions+=2;goto B55410c;
case 0x55410e:c.instructions+=1;goto B55410e;
case 0x554110:goto L554110;
case 0x554112:c.instructions+=2;goto B554112;
case 0x554113:c.instructions+=1;goto B554113;
case 0x554115:goto L554115;
case 0x554118:c.instructions+=5;goto B554118;
case 0x55411b:c.instructions+=4;goto B55411b;
case 0x55411d:c.instructions+=3;goto B55411d;
case 0x554120:c.instructions+=2;goto B554120;
case 0x554122:c.instructions+=1;goto B554122;
case 0x554124:goto L554124;
case 0x554129:c.instructions+=1;goto B554129;
case 0x55412c:goto L55412c;
case 0x554130:c.instructions+=2;goto B554130;
case 0x554132:c.instructions+=1;goto B554132;
case 0x554137:goto L554137;
case 0x55413b:c.instructions+=8;goto B55413b;
case 0x55413c:c.instructions+=7;goto B55413c;
case 0x55413e:c.instructions+=6;goto B55413e;
case 0x55413f:c.instructions+=5;goto B55413f;
case 0x554140:c.instructions+=4;goto B554140;
case 0x554141:c.instructions+=3;goto B554141;
case 0x554148:c.instructions+=2;goto B554148;
case 0x55414b:c.instructions+=1;goto B55414b;
case 0x554150:goto L554150;
case 0x554151:c.instructions+=2;goto B554151;
case 0x554153:c.instructions+=1;goto B554153;
case 0x554158:goto L554158;
case 0x55415d:c.instructions+=1;goto B55415d;
case 0x55415f:goto L55415f;
case 0x554160:c.instructions+=1;goto B554160;
case 0x554165:goto L554165;
case 0x554168:goto L554168;
case 0x55416a:c.instructions+=2;goto B55416a;
case 0x55416b:c.instructions+=1;goto B55416b;
case 0x554170:goto L554170;
case 0x554172:c.instructions+=11;goto B554172;
case 0x554177:c.instructions+=10;goto B554177;
case 0x55417d:c.instructions+=9;goto B55417d;
case 0x55417e:c.instructions+=8;goto B55417e;
case 0x554185:c.instructions+=7;goto B554185;
case 0x554186:c.instructions+=6;goto B554186;
case 0x554187:c.instructions+=5;goto B554187;
case 0x554189:c.instructions+=4;goto B554189;
case 0x55418d:c.instructions+=3;goto B55418d;
case 0x554190:c.instructions+=2;goto B554190;
case 0x554198:c.instructions+=1;goto B554198;
case 0x55419d:goto L55419d;
case 0x5541a1:c.instructions+=5;goto B5541a1;
case 0x5541a7:c.instructions+=4;goto B5541a7;
case 0x5541a8:c.instructions+=3;goto B5541a8;
case 0x5541af:c.instructions+=2;goto B5541af;
case 0x5541b2:c.instructions+=1;goto B5541b2;
case 0x5541c0:goto L5541c0;
case 0x5541c2:c.instructions+=14;goto B5541c2;
case 0x5541c7:c.instructions+=13;goto B5541c7;
case 0x5541cd:c.instructions+=12;goto B5541cd;
case 0x5541ce:c.instructions+=11;goto B5541ce;
case 0x5541d5:c.instructions+=10;goto B5541d5;
case 0x5541d6:c.instructions+=9;goto B5541d6;
case 0x5541d7:c.instructions+=8;goto B5541d7;
case 0x5541d8:c.instructions+=7;goto B5541d8;
case 0x5541d9:c.instructions+=6;goto B5541d9;
case 0x5541dd:c.instructions+=5;goto B5541dd;
case 0x5541de:c.instructions+=4;goto B5541de;
case 0x5541e0:c.instructions+=3;goto B5541e0;
case 0x5541e1:c.instructions+=2;goto B5541e1;
case 0x5541e5:c.instructions+=1;goto B5541e5;
case 0x5541ea:goto L5541ea;
case 0x5541ed:c.instructions+=5;goto B5541ed;
case 0x5541ef:c.instructions+=4;goto B5541ef;
case 0x5541f1:c.instructions+=3;goto B5541f1;
case 0x5541f5:c.instructions+=2;goto B5541f5;
case 0x5541fc:c.instructions+=1;goto B5541fc;
case 0x554201:goto L554201;
case 0x554206:c.instructions+=1;goto B554206;
case 0x55420b:goto L55420b;
case 0x55420e:c.instructions+=3;goto B55420e;
case 0x554211:c.instructions+=2;goto B554211;
case 0x554214:c.instructions+=1;goto B554214;
case 0x554219:goto L554219;
case 0x55421b:goto L55421b;
case 0x55421e:c.instructions+=2;goto B55421e;
case 0x554220:c.instructions+=1;goto B554220;
case 0x554225:goto L554225;
case 0x55422a:c.instructions+=2;goto B55422a;
case 0x55422c:c.instructions+=1;goto B55422c;
case 0x55422e:goto L55422e;
case 0x554231:c.instructions+=1;goto B554231;
case 0x554233:goto L554233;
case 0x554239:c.instructions+=1;goto B554239;
case 0x55423b:goto L55423b;
case 0x55423f:c.instructions+=5;goto B55423f;
case 0x554245:c.instructions+=4;goto B554245;
case 0x554246:c.instructions+=3;goto B554246;
case 0x554248:c.instructions+=2;goto B554248;
case 0x55424b:c.instructions+=1;goto B55424b;
case 0x554250:goto L554250;
case 0x554253:c.instructions+=3;goto B554253;
case 0x554258:c.instructions+=2;goto B554258;
case 0x554259:c.instructions+=1;goto B554259;
case 0x55425e:goto L55425e;
case 0x554261:c.instructions+=1;goto B554261;
case 0x554263:goto L554263;
case 0x554266:goto L554266;
case 0x55426a:c.instructions+=8;goto B55426a;
case 0x55426b:c.instructions+=7;goto B55426b;
case 0x55426c:c.instructions+=6;goto B55426c;
case 0x55426e:c.instructions+=5;goto B55426e;
case 0x55426f:c.instructions+=4;goto B55426f;
case 0x554270:c.instructions+=3;goto B554270;
case 0x554277:c.instructions+=2;goto B554277;
case 0x55427a:c.instructions+=1;goto B55427a;
case 0x554280:goto L554280;
case 0x554281:c.instructions+=2;goto B554281;
case 0x554283:c.instructions+=1;goto B554283;
case 0x554288:goto L554288;
case 0x55428d:c.instructions+=1;goto B55428d;
case 0x55428f:goto L55428f;
case 0x554290:c.instructions+=1;goto B554290;
case 0x554295:goto L554295;
case 0x554298:goto L554298;
case 0x55429a:c.instructions+=2;goto B55429a;
case 0x55429b:c.instructions+=1;goto B55429b;
case 0x5542a0:goto L5542a0;
case 0x5542a2:c.instructions+=7;goto B5542a2;
case 0x5542a7:c.instructions+=6;goto B5542a7;
case 0x5542ad:c.instructions+=5;goto B5542ad;
case 0x5542ae:c.instructions+=4;goto B5542ae;
case 0x5542b5:c.instructions+=3;goto B5542b5;
case 0x5542b6:c.instructions+=2;goto B5542b6;
case 0x5542bb:c.instructions+=1;goto B5542bb;
case 0x5542c0:goto L5542c0;
case 0x5542c3:c.instructions+=4;goto B5542c3;
case 0x5542c7:c.instructions+=3;goto B5542c7;
case 0x5542c9:c.instructions+=2;goto B5542c9;
case 0x5542d1:c.instructions+=1;goto B5542d1;
case 0x5542d3:goto L5542d3;
case 0x5542d7:c.instructions+=3;goto B5542d7;
case 0x5542d8:c.instructions+=2;goto B5542d8;
case 0x5542da:c.instructions+=1;goto B5542da;
case 0x5542df:goto L5542df;
case 0x5542e3:c.instructions+=3;goto B5542e3;
case 0x5542ea:c.instructions+=2;goto B5542ea;
case 0x5542ed:c.instructions+=1;goto B5542ed;
case 0x5542ee:goto L5542ee;
case 0x5542f2:c.instructions+=4;goto B5542f2;
case 0x5542f4:c.instructions+=3;goto B5542f4;
case 0x5542fb:c.instructions+=2;goto B5542fb;
case 0x5542fe:c.instructions+=1;goto B5542fe;
case 0x554300:goto L554300;
case 0x554302:c.instructions+=44;goto B554302;
case 0x554307:c.instructions+=43;goto B554307;
case 0x55430d:c.instructions+=42;goto B55430d;
case 0x55430e:c.instructions+=41;goto B55430e;
case 0x554315:c.instructions+=40;goto B554315;
case 0x554318:c.instructions+=39;goto B554318;
case 0x554319:c.instructions+=38;goto B554319;
case 0x55431a:c.instructions+=37;goto B55431a;
case 0x55431b:c.instructions+=36;goto B55431b;
case 0x55431d:c.instructions+=35;goto B55431d;
case 0x554322:c.instructions+=34;goto B554322;
case 0x554323:c.instructions+=33;goto B554323;
case 0x554327:c.instructions+=32;goto B554327;
case 0x55432a:c.instructions+=31;goto B55432a;
case 0x55432d:c.instructions+=30;goto B55432d;
case 0x55432f:c.instructions+=29;goto B55432f;
case 0x554335:c.instructions+=28;goto B554335;
case 0x554338:c.instructions+=27;goto B554338;
case 0x55433b:c.instructions+=26;goto B55433b;
case 0x55433e:c.instructions+=25;goto B55433e;
case 0x554341:c.instructions+=24;goto B554341;
case 0x554344:c.instructions+=23;goto B554344;
case 0x554347:c.instructions+=22;goto B554347;
case 0x55434c:c.instructions+=21;goto B55434c;
case 0x554350:c.instructions+=20;goto B554350;
case 0x554353:c.instructions+=19;goto B554353;
case 0x554356:c.instructions+=18;goto B554356;
case 0x554359:c.instructions+=17;goto B554359;
case 0x55435c:c.instructions+=16;goto B55435c;
case 0x55435f:c.instructions+=15;goto B55435f;
case 0x554362:c.instructions+=14;goto B554362;
case 0x554365:c.instructions+=13;goto B554365;
case 0x554368:c.instructions+=12;goto B554368;
case 0x55436d:c.instructions+=11;goto B55436d;
case 0x554371:c.instructions+=10;goto B554371;
case 0x554373:c.instructions+=9;goto B554373;
case 0x554374:c.instructions+=8;goto B554374;
case 0x554379:c.instructions+=7;goto B554379;
case 0x55437c:c.instructions+=6;goto B55437c;
case 0x55437f:c.instructions+=5;goto B55437f;
case 0x554382:c.instructions+=4;goto B554382;
case 0x554383:c.instructions+=3;goto B554383;
case 0x554388:c.instructions+=2;goto B554388;
case 0x55438d:c.instructions+=1;goto B55438d;
case 0x554392:goto L554392;
case 0x554393:c.instructions+=3;goto B554393;
case 0x554398:c.instructions+=2;goto B554398;
case 0x55439b:c.instructions+=1;goto B55439b;
case 0x5543a0:goto L5543a0;
case 0x5543a3:c.instructions+=7;goto B5543a3;
case 0x5543a5:c.instructions+=6;goto B5543a5;
case 0x5543a8:c.instructions+=5;goto B5543a8;
case 0x5543aa:c.instructions+=4;goto B5543aa;
case 0x5543ac:c.instructions+=3;goto B5543ac;
case 0x5543ae:c.instructions+=2;goto B5543ae;
case 0x5543b1:c.instructions+=1;goto B5543b1;
case 0x5543b3:goto L5543b3;
case 0x5543b5:goto L5543b5;
case 0x5543b7:c.instructions+=1;goto B5543b7;
case 0x5543ba:goto L5543ba;
case 0x5543bc:goto L5543bc;
case 0x5543bf:c.instructions+=13;goto B5543bf;
case 0x5543c2:c.instructions+=12;goto B5543c2;
case 0x5543c5:c.instructions+=11;goto B5543c5;
case 0x5543c8:c.instructions+=10;goto B5543c8;
case 0x5543cc:c.instructions+=9;goto B5543cc;
case 0x5543d0:c.instructions+=8;goto B5543d0;
case 0x5543d4:c.instructions+=7;goto B5543d4;
case 0x5543d8:c.instructions+=6;goto B5543d8;
case 0x5543db:c.instructions+=5;goto B5543db;
case 0x5543de:c.instructions+=4;goto B5543de;
case 0x5543e1:c.instructions+=3;goto B5543e1;
case 0x5543e2:c.instructions+=2;goto B5543e2;
case 0x5543e4:c.instructions+=1;goto B5543e4;
case 0x5543e9:goto L5543e9;
case 0x5543ec:c.instructions+=3;goto B5543ec;
case 0x5543ee:c.instructions+=2;goto B5543ee;
case 0x5543f2:c.instructions+=1;goto B5543f2;
case 0x5543f8:goto L5543f8;
case 0x554400:goto L554400;
case 0x554405:c.instructions+=1;goto B554405;
case 0x55440a:goto L55440a;
case 0x55440c:c.instructions+=13;goto B55440c;
case 0x554411:c.instructions+=12;goto B554411;
case 0x554414:c.instructions+=11;goto B554414;
case 0x554417:c.instructions+=10;goto B554417;
case 0x55441b:c.instructions+=9;goto B55441b;
case 0x554421:c.instructions+=8;goto B554421;
case 0x554424:c.instructions+=7;goto B554424;
case 0x554427:c.instructions+=6;goto B554427;
case 0x55442a:c.instructions+=5;goto B55442a;
case 0x55442d:c.instructions+=4;goto B55442d;
case 0x55442e:c.instructions+=3;goto B55442e;
case 0x554430:c.instructions+=2;goto B554430;
case 0x554434:c.instructions+=1;goto B554434;
case 0x554439:goto L554439;
case 0x55443b:c.instructions+=4;goto B55443b;
case 0x55443f:c.instructions+=3;goto B55443f;
case 0x554442:c.instructions+=2;goto B554442;
case 0x554445:c.instructions+=1;goto B554445;
case 0x554447:goto L554447;
case 0x55444b:c.instructions+=2;goto B55444b;
case 0x55444d:c.instructions+=1;goto B55444d;
case 0x554451:goto L554451;
case 0x554455:c.instructions+=6;goto B554455;
case 0x554458:c.instructions+=5;goto B554458;
case 0x55445b:c.instructions+=4;goto B55445b;
case 0x55445d:c.instructions+=3;goto B55445d;
case 0x55445e:c.instructions+=2;goto B55445e;
case 0x554460:c.instructions+=1;goto B554460;
case 0x554465:goto L554465;
case 0x554469:c.instructions+=4;goto B554469;
case 0x55446c:c.instructions+=3;goto B55446c;
case 0x55446d:c.instructions+=2;goto B55446d;
case 0x554471:c.instructions+=1;goto B554471;
case 0x554473:goto L554473;
case 0x554476:c.instructions+=2;goto B554476;
case 0x554478:c.instructions+=1;goto B554478;
case 0x55447a:goto L55447a;
case 0x55447d:c.instructions+=3;goto B55447d;
case 0x55447f:c.instructions+=2;goto B55447f;
case 0x554482:c.instructions+=1;goto B554482;
case 0x554484:goto L554484;
case 0x554487:goto L554487;
case 0x55448a:c.instructions+=2;goto B55448a;
case 0x55448d:c.instructions+=1;goto B55448d;
case 0x55448f:goto L55448f;
case 0x554492:c.instructions+=3;goto B554492;
case 0x554494:c.instructions+=2;goto B554494;
case 0x554497:c.instructions+=1;goto B554497;
case 0x554499:goto L554499;
case 0x55449c:goto L55449c;
case 0x55449f:c.instructions+=1;goto B55449f;
case 0x5544a2:goto L5544a2;
case 0x5544a5:c.instructions+=1;goto B5544a5;
case 0x5544a7:goto L5544a7;
case 0x5544aa:goto L5544aa;
case 0x5544ad:c.instructions+=7;goto B5544ad;
case 0x5544b1:c.instructions+=6;goto B5544b1;
case 0x5544b2:c.instructions+=5;goto B5544b2;
case 0x5544b5:c.instructions+=4;goto B5544b5;
case 0x5544b8:c.instructions+=3;goto B5544b8;
case 0x5544ba:c.instructions+=2;goto B5544ba;
case 0x5544be:c.instructions+=1;goto B5544be;
case 0x5544c4:goto L5544c4;
case 0x5544c8:goto L5544c8;
case 0x5544cb:c.instructions+=2;goto B5544cb;
case 0x5544cd:c.instructions+=1;goto B5544cd;
case 0x5544d3:goto L5544d3;
case 0x5544d8:c.instructions+=1;goto B5544d8;
case 0x5544dd:goto L5544dd;
case 0x5544e0:c.instructions+=13;goto B5544e0;
case 0x5544e3:c.instructions+=12;goto B5544e3;
case 0x5544e6:c.instructions+=11;goto B5544e6;
case 0x5544e9:c.instructions+=10;goto B5544e9;
case 0x5544ec:c.instructions+=9;goto B5544ec;
case 0x5544ef:c.instructions+=8;goto B5544ef;
case 0x5544f2:c.instructions+=7;goto B5544f2;
case 0x5544f6:c.instructions+=6;goto B5544f6;
case 0x5544fa:c.instructions+=5;goto B5544fa;
case 0x5544fb:c.instructions+=4;goto B5544fb;
case 0x5544fc:c.instructions+=3;goto B5544fc;
case 0x5544fe:c.instructions+=2;goto B5544fe;
case 0x554503:c.instructions+=1;goto B554503;
case 0x554508:goto L554508;
case 0x55450a:c.instructions+=3;goto B55450a;
case 0x55450d:c.instructions+=2;goto B55450d;
case 0x554512:c.instructions+=1;goto B554512;
case 0x554514:goto L554514;
case 0x554516:c.instructions+=1;goto B554516;
case 0x554518:goto L554518;
case 0x55451b:c.instructions+=3;goto B55451b;
case 0x55451d:c.instructions+=2;goto B55451d;
case 0x554520:c.instructions+=1;goto B554520;
case 0x554522:goto L554522;
case 0x554525:goto L554525;
case 0x554528:c.instructions+=2;goto B554528;
case 0x55452b:c.instructions+=1;goto B55452b;
case 0x55452d:goto L55452d;
case 0x554530:c.instructions+=3;goto B554530;
case 0x554532:c.instructions+=2;goto B554532;
case 0x554535:c.instructions+=1;goto B554535;
case 0x554537:goto L554537;
case 0x55453a:goto L55453a;
case 0x55453d:c.instructions+=1;goto B55453d;
case 0x554540:goto L554540;
case 0x554543:c.instructions+=1;goto B554543;
case 0x554545:goto L554545;
case 0x554548:goto L554548;
case 0x55454b:goto L55454b;
case 0x55454e:c.instructions+=2;goto B55454e;
case 0x554550:c.instructions+=1;goto B554550;
case 0x554552:goto L554552;
case 0x554555:c.instructions+=2;goto B554555;
case 0x554557:c.instructions+=1;goto B554557;
case 0x554559:goto L554559;
case 0x55455c:c.instructions+=2;goto B55455c;
case 0x55455f:c.instructions+=1;goto B55455f;
case 0x554560:goto L554560;
case 0x554563:c.instructions+=1;goto B554563;
case 0x554565:goto L554565;
case 0x554568:c.instructions+=2;goto B554568;
case 0x55456a:c.instructions+=1;goto B55456a;
case 0x55456c:goto L55456c;
case 0x55456e:c.instructions+=2;goto B55456e;
case 0x554571:c.instructions+=1;goto B554571;
case 0x554573:goto L554573;
case 0x554575:c.instructions+=1;goto B554575;
case 0x55457a:goto L55457a;
case 0x55457d:c.instructions+=3;goto B55457d;
case 0x55457f:c.instructions+=2;goto B55457f;
case 0x554582:c.instructions+=1;goto B554582;
case 0x554584:goto L554584;
case 0x554587:c.instructions+=2;goto B554587;
case 0x554589:c.instructions+=1;goto B554589;
case 0x55458b:goto L55458b;
case 0x55458e:c.instructions+=2;goto B55458e;
case 0x554590:c.instructions+=1;goto B554590;
case 0x554592:goto L554592;
case 0x554595:goto L554595;
case 0x554598:c.instructions+=1;goto B554598;
case 0x55459a:goto L55459a;
case 0x55459d:c.instructions+=2;goto B55459d;
case 0x55459f:c.instructions+=1;goto B55459f;
case 0x5545a1:goto L5545a1;
case 0x5545a4:goto L5545a4;
case 0x5545a7:c.instructions+=3;goto B5545a7;
case 0x5545a9:c.instructions+=2;goto B5545a9;
case 0x5545ac:c.instructions+=1;goto B5545ac;
case 0x5545ae:goto L5545ae;
case 0x5545b2:c.instructions+=8;goto B5545b2;
case 0x5545b3:c.instructions+=7;goto B5545b3;
case 0x5545b5:c.instructions+=6;goto B5545b5;
case 0x5545b6:c.instructions+=5;goto B5545b6;
case 0x5545b7:c.instructions+=4;goto B5545b7;
case 0x5545b8:c.instructions+=3;goto B5545b8;
case 0x5545bf:c.instructions+=2;goto B5545bf;
case 0x5545c2:c.instructions+=1;goto B5545c2;
case 0x5545d0:goto L5545d0;
case 0x5545d2:c.instructions+=9;goto B5545d2;
case 0x5545d7:c.instructions+=8;goto B5545d7;
case 0x5545dd:c.instructions+=7;goto B5545dd;
case 0x5545de:c.instructions+=6;goto B5545de;
case 0x5545e5:c.instructions+=5;goto B5545e5;
case 0x5545e6:c.instructions+=4;goto B5545e6;
case 0x5545e7:c.instructions+=3;goto B5545e7;
case 0x5545e9:c.instructions+=2;goto B5545e9;
case 0x5545eb:c.instructions+=1;goto B5545eb;
case 0x5545f0:goto L5545f0;
case 0x5545f3:c.instructions+=4;goto B5545f3;
case 0x5545f7:c.instructions+=3;goto B5545f7;
case 0x5545f9:c.instructions+=2;goto B5545f9;
case 0x554601:c.instructions+=1;goto B554601;
case 0x554603:goto L554603;
case 0x554607:c.instructions+=4;goto B554607;
case 0x554608:c.instructions+=3;goto B554608;
case 0x554609:c.instructions+=2;goto B554609;
case 0x55460b:c.instructions+=1;goto B55460b;
case 0x554610:goto L554610;
case 0x554611:c.instructions+=4;goto B554611;
case 0x554615:c.instructions+=3;goto B554615;
case 0x55461c:c.instructions+=2;goto B55461c;
case 0x55461f:c.instructions+=1;goto B55461f;
case 0x554622:goto L554622;
case 0x554626:c.instructions+=5;goto B554626;
case 0x554628:c.instructions+=4;goto B554628;
case 0x554629:c.instructions+=3;goto B554629;
case 0x554630:c.instructions+=2;goto B554630;
case 0x554633:c.instructions+=1;goto B554633;
case 0x554640:goto L554640;
case 0x554642:c.instructions+=10;goto B554642;
case 0x554647:c.instructions+=9;goto B554647;
case 0x55464d:c.instructions+=8;goto B55464d;
case 0x55464e:c.instructions+=7;goto B55464e;
case 0x554655:c.instructions+=6;goto B554655;
case 0x554656:c.instructions+=5;goto B554656;
case 0x554657:c.instructions+=4;goto B554657;
case 0x554658:c.instructions+=3;goto B554658;
case 0x55465a:c.instructions+=2;goto B55465a;
case 0x55465c:c.instructions+=1;goto B55465c;
case 0x554661:goto L554661;
case 0x554663:c.instructions+=6;goto B554663;
case 0x554666:c.instructions+=5;goto B554666;
case 0x55466a:c.instructions+=4;goto B55466a;
case 0x55466c:c.instructions+=3;goto B55466c;
case 0x55466e:c.instructions+=2;goto B55466e;
case 0x554672:c.instructions+=1;goto B554672;
case 0x554674:goto L554674;
case 0x554678:c.instructions+=4;goto B554678;
case 0x554679:c.instructions+=3;goto B554679;
case 0x55467a:c.instructions+=2;goto B55467a;
case 0x55467c:c.instructions+=1;goto B55467c;
case 0x554681:goto L554681;
case 0x554687:c.instructions+=3;goto B554687;
case 0x55468a:c.instructions+=2;goto B55468a;
case 0x55468d:c.instructions+=1;goto B55468d;
case 0x55468f:goto L55468f;
case 0x554693:c.instructions+=5;goto B554693;
case 0x554694:c.instructions+=4;goto B554694;
case 0x554695:c.instructions+=3;goto B554695;
case 0x55469c:c.instructions+=2;goto B55469c;
case 0x55469f:c.instructions+=1;goto B55469f;
case 0x5546b0:goto L5546b0;
case 0x5546b2:c.instructions+=10;goto B5546b2;
case 0x5546b7:c.instructions+=9;goto B5546b7;
case 0x5546bd:c.instructions+=8;goto B5546bd;
case 0x5546be:c.instructions+=7;goto B5546be;
case 0x5546c5:c.instructions+=6;goto B5546c5;
case 0x5546c6:c.instructions+=5;goto B5546c6;
case 0x5546c7:c.instructions+=4;goto B5546c7;
case 0x5546c8:c.instructions+=3;goto B5546c8;
case 0x5546ca:c.instructions+=2;goto B5546ca;
case 0x5546cc:c.instructions+=1;goto B5546cc;
case 0x5546d1:goto L5546d1;
case 0x5546d3:c.instructions+=6;goto B5546d3;
case 0x5546d6:c.instructions+=5;goto B5546d6;
case 0x5546da:c.instructions+=4;goto B5546da;
case 0x5546dc:c.instructions+=3;goto B5546dc;
case 0x5546de:c.instructions+=2;goto B5546de;
case 0x5546e2:c.instructions+=1;goto B5546e2;
case 0x5546e4:goto L5546e4;
case 0x5546e8:c.instructions+=4;goto B5546e8;
case 0x5546e9:c.instructions+=3;goto B5546e9;
case 0x5546ea:c.instructions+=2;goto B5546ea;
case 0x5546ec:c.instructions+=1;goto B5546ec;
case 0x5546f1:goto L5546f1;
case 0x5546f7:c.instructions+=1;goto B5546f7;
case 0x5546f9:goto L5546f9;
case 0x5546fd:c.instructions+=5;goto B5546fd;
case 0x5546fe:c.instructions+=4;goto B5546fe;
case 0x5546ff:c.instructions+=3;goto B5546ff;
case 0x554706:c.instructions+=2;goto B554706;
case 0x554709:c.instructions+=1;goto B554709;
case 0x554710:goto L554710;
case 0x554712:c.instructions+=14;goto B554712;
case 0x554717:c.instructions+=13;goto B554717;
case 0x55471d:c.instructions+=12;goto B55471d;
case 0x55471e:c.instructions+=11;goto B55471e;
case 0x554725:c.instructions+=10;goto B554725;
case 0x554726:c.instructions+=9;goto B554726;
case 0x55472a:c.instructions+=8;goto B55472a;
case 0x55472b:c.instructions+=7;goto B55472b;
case 0x55472c:c.instructions+=6;goto B55472c;
case 0x554730:c.instructions+=5;goto B554730;
case 0x554731:c.instructions+=4;goto B554731;
case 0x554733:c.instructions+=3;goto B554733;
case 0x554734:c.instructions+=2;goto B554734;
case 0x554738:c.instructions+=1;goto B554738;
case 0x55473d:goto L55473d;
case 0x55473f:c.instructions+=41;goto B55473f;
case 0x554745:c.instructions+=40;goto B554745;
case 0x554748:c.instructions+=39;goto B554748;
case 0x55474b:c.instructions+=38;goto B55474b;
case 0x55474e:c.instructions+=37;goto B55474e;
case 0x554751:c.instructions+=36;goto B554751;
case 0x554754:c.instructions+=35;goto B554754;
case 0x554757:c.instructions+=34;goto B554757;
case 0x55475a:c.instructions+=33;goto B55475a;
case 0x55475d:c.instructions+=32;goto B55475d;
case 0x554760:c.instructions+=31;goto B554760;
case 0x554763:c.instructions+=30;goto B554763;
case 0x554766:c.instructions+=29;goto B554766;
case 0x554769:c.instructions+=28;goto B554769;
case 0x55476f:c.instructions+=27;goto B55476f;
case 0x554775:c.instructions+=26;goto B554775;
case 0x55477b:c.instructions+=25;goto B55477b;
case 0x554781:c.instructions+=24;goto B554781;
case 0x554787:c.instructions+=23;goto B554787;
case 0x55478d:c.instructions+=22;goto B55478d;
case 0x554793:c.instructions+=21;goto B554793;
case 0x554799:c.instructions+=20;goto B554799;
case 0x55479f:c.instructions+=19;goto B55479f;
case 0x5547a5:c.instructions+=18;goto B5547a5;
case 0x5547ab:c.instructions+=17;goto B5547ab;
case 0x5547b5:c.instructions+=16;goto B5547b5;
case 0x5547bf:c.instructions+=15;goto B5547bf;
case 0x5547c3:c.instructions+=14;goto B5547c3;
case 0x5547c8:c.instructions+=13;goto B5547c8;
case 0x5547ce:c.instructions+=12;goto B5547ce;
case 0x5547d4:c.instructions+=11;goto B5547d4;
case 0x5547da:c.instructions+=10;goto B5547da;
case 0x5547e0:c.instructions+=9;goto B5547e0;
case 0x5547e6:c.instructions+=8;goto B5547e6;
case 0x5547ec:c.instructions+=7;goto B5547ec;
case 0x5547f2:c.instructions+=6;goto B5547f2;
case 0x5547f8:c.instructions+=5;goto B5547f8;
case 0x5547fe:c.instructions+=4;goto B5547fe;
case 0x554804:c.instructions+=3;goto B554804;
case 0x554805:c.instructions+=2;goto B554805;
case 0x554807:c.instructions+=1;goto B554807;
case 0x55480c:goto L55480c;
case 0x554810:c.instructions+=6;goto B554810;
case 0x554811:c.instructions+=5;goto B554811;
case 0x554813:c.instructions+=4;goto B554813;
case 0x554814:c.instructions+=3;goto B554814;
case 0x55481b:c.instructions+=2;goto B55481b;
case 0x55481e:c.instructions+=1;goto B55481e;
case 0x554830:goto L554830;
case 0x554832:c.instructions+=9;goto B554832;
case 0x554837:c.instructions+=8;goto B554837;
case 0x55483d:c.instructions+=7;goto B55483d;
case 0x55483e:c.instructions+=6;goto B55483e;
case 0x554845:c.instructions+=5;goto B554845;
case 0x554846:c.instructions+=4;goto B554846;
case 0x554847:c.instructions+=3;goto B554847;
case 0x55484c:c.instructions+=2;goto B55484c;
case 0x55484e:c.instructions+=1;goto B55484e;
case 0x554853:goto L554853;
case 0x554856:c.instructions+=4;goto B554856;
case 0x55485a:c.instructions+=3;goto B55485a;
case 0x55485c:c.instructions+=2;goto B55485c;
case 0x554864:c.instructions+=1;goto B554864;
case 0x554866:goto L554866;
case 0x55486a:c.instructions+=4;goto B55486a;
case 0x55486b:c.instructions+=3;goto B55486b;
case 0x55486c:c.instructions+=2;goto B55486c;
case 0x55486e:c.instructions+=1;goto B55486e;
case 0x554873:goto L554873;
case 0x554874:c.instructions+=4;goto B554874;
case 0x554878:c.instructions+=3;goto B554878;
case 0x55487f:c.instructions+=2;goto B55487f;
case 0x554882:c.instructions+=1;goto B554882;
case 0x554885:goto L554885;
case 0x554889:c.instructions+=5;goto B554889;
case 0x55488b:c.instructions+=4;goto B55488b;
case 0x55488c:c.instructions+=3;goto B55488c;
case 0x554893:c.instructions+=2;goto B554893;
case 0x554896:c.instructions+=1;goto B554896;
case 0x5548a0:goto L5548a0;
case 0x5548a2:c.instructions+=16;goto B5548a2;
case 0x5548a7:c.instructions+=15;goto B5548a7;
case 0x5548ad:c.instructions+=14;goto B5548ad;
case 0x5548ae:c.instructions+=13;goto B5548ae;
case 0x5548b5:c.instructions+=12;goto B5548b5;
case 0x5548b6:c.instructions+=11;goto B5548b6;
case 0x5548b7:c.instructions+=10;goto B5548b7;
case 0x5548b8:c.instructions+=9;goto B5548b8;
case 0x5548bc:c.instructions+=8;goto B5548bc;
case 0x5548bd:c.instructions+=7;goto B5548bd;
case 0x5548be:c.instructions+=6;goto B5548be;
case 0x5548c2:c.instructions+=5;goto B5548c2;
case 0x5548c3:c.instructions+=4;goto B5548c3;
case 0x5548c5:c.instructions+=3;goto B5548c5;
case 0x5548c6:c.instructions+=2;goto B5548c6;
case 0x5548ca:c.instructions+=1;goto B5548ca;
case 0x5548cf:goto L5548cf;
case 0x5548d1:c.instructions+=9;goto B5548d1;
case 0x5548d7:c.instructions+=8;goto B5548d7;
case 0x5548db:c.instructions+=7;goto B5548db;
case 0x5548e2:c.instructions+=6;goto B5548e2;
case 0x5548e5:c.instructions+=5;goto B5548e5;
case 0x5548e8:c.instructions+=4;goto B5548e8;
case 0x5548eb:c.instructions+=3;goto B5548eb;
case 0x5548ef:c.instructions+=2;goto B5548ef;
case 0x5548f4:c.instructions+=1;goto B5548f4;
case 0x5548f6:goto L5548f6;
case 0x5548f9:c.instructions+=2;goto B5548f9;
case 0x5548fb:c.instructions+=1;goto B5548fb;
case 0x5548fd:goto L5548fd;
case 0x554900:goto L554900;
case 0x554902:c.instructions+=3;goto B554902;
case 0x554903:c.instructions+=2;goto B554903;
case 0x554905:c.instructions+=1;goto B554905;
case 0x554908:goto L554908;
case 0x55490a:c.instructions+=2;goto B55490a;
case 0x55490d:c.instructions+=1;goto B55490d;
case 0x55490f:goto L55490f;
case 0x554911:c.instructions+=1;goto B554911;
case 0x554913:goto L554913;
case 0x554916:c.instructions+=3;goto B554916;
case 0x554918:c.instructions+=2;goto B554918;
case 0x55491b:c.instructions+=1;goto B55491b;
case 0x55491d:goto L55491d;
case 0x554920:goto L554920;
case 0x554923:c.instructions+=2;goto B554923;
case 0x554926:c.instructions+=1;goto B554926;
case 0x554928:goto L554928;
case 0x55492b:c.instructions+=3;goto B55492b;
case 0x55492d:c.instructions+=2;goto B55492d;
case 0x554930:c.instructions+=1;goto B554930;
case 0x554932:goto L554932;
case 0x554935:goto L554935;
case 0x554938:c.instructions+=1;goto B554938;
case 0x55493b:goto L55493b;
case 0x55493e:c.instructions+=1;goto B55493e;
case 0x554940:goto L554940;
case 0x554943:goto L554943;
case 0x554946:goto L554946;
case 0x554949:c.instructions+=2;goto B554949;
case 0x55494b:c.instructions+=1;goto B55494b;
case 0x55494d:goto L55494d;
case 0x554951:c.instructions+=8;goto B554951;
case 0x554952:c.instructions+=7;goto B554952;
case 0x554954:c.instructions+=6;goto B554954;
case 0x554955:c.instructions+=5;goto B554955;
case 0x554956:c.instructions+=4;goto B554956;
case 0x554957:c.instructions+=3;goto B554957;
case 0x55495e:c.instructions+=2;goto B55495e;
case 0x554961:c.instructions+=1;goto B554961;
case 0x554970:goto L554970;
case 0x554972:c.instructions+=15;goto B554972;
case 0x554977:c.instructions+=14;goto B554977;
case 0x55497d:c.instructions+=13;goto B55497d;
case 0x55497e:c.instructions+=12;goto B55497e;
case 0x554985:c.instructions+=11;goto B554985;
case 0x554986:c.instructions+=10;goto B554986;
case 0x55498a:c.instructions+=9;goto B55498a;
case 0x55498b:c.instructions+=8;goto B55498b;
case 0x55498c:c.instructions+=7;goto B55498c;
case 0x55498d:c.instructions+=6;goto B55498d;
case 0x554991:c.instructions+=5;goto B554991;
case 0x554992:c.instructions+=4;goto B554992;
case 0x554994:c.instructions+=3;goto B554994;
case 0x554995:c.instructions+=2;goto B554995;
case 0x554999:c.instructions+=1;goto B554999;
case 0x55499e:goto L55499e;
case 0x5549a1:c.instructions+=8;goto B5549a1;
case 0x5549a3:c.instructions+=7;goto B5549a3;
case 0x5549a6:c.instructions+=6;goto B5549a6;
case 0x5549a7:c.instructions+=5;goto B5549a7;
case 0x5549a9:c.instructions+=4;goto B5549a9;
case 0x5549ad:c.instructions+=3;goto B5549ad;
case 0x5549b3:c.instructions+=2;goto B5549b3;
case 0x5549b6:c.instructions+=1;goto B5549b6;
case 0x5549bb:goto L5549bb;
case 0x5549be:c.instructions+=10;goto B5549be;
case 0x5549c1:c.instructions+=9;goto B5549c1;
case 0x5549c4:c.instructions+=8;goto B5549c4;
case 0x5549c7:c.instructions+=7;goto B5549c7;
case 0x5549ca:c.instructions+=6;goto B5549ca;
case 0x5549cd:c.instructions+=5;goto B5549cd;
case 0x5549d0:c.instructions+=4;goto B5549d0;
case 0x5549d1:c.instructions+=3;goto B5549d1;
case 0x5549d3:c.instructions+=2;goto B5549d3;
case 0x5549d8:c.instructions+=1;goto B5549d8;
case 0x5549dd:goto L5549dd;
case 0x5549e0:c.instructions+=3;goto B5549e0;
case 0x5549e1:c.instructions+=2;goto B5549e1;
case 0x5549e3:c.instructions+=1;goto B5549e3;
case 0x5549e8:goto L5549e8;
case 0x5549ec:c.instructions+=7;goto B5549ec;
case 0x5549ed:c.instructions+=6;goto B5549ed;
case 0x5549ef:c.instructions+=5;goto B5549ef;
case 0x5549f0:c.instructions+=4;goto B5549f0;
case 0x5549f1:c.instructions+=3;goto B5549f1;
case 0x5549f8:c.instructions+=2;goto B5549f8;
case 0x5549fb:c.instructions+=1;goto B5549fb;
case 0x554a00:goto L554a00;
case 0x554a02:c.instructions+=7;goto B554a02;
case 0x554a07:c.instructions+=6;goto B554a07;
case 0x554a0d:c.instructions+=5;goto B554a0d;
case 0x554a0e:c.instructions+=4;goto B554a0e;
case 0x554a15:c.instructions+=3;goto B554a15;
case 0x554a16:c.instructions+=2;goto B554a16;
case 0x554a1b:c.instructions+=1;goto B554a1b;
case 0x554a20:goto L554a20;
case 0x554a23:c.instructions+=4;goto B554a23;
case 0x554a27:c.instructions+=3;goto B554a27;
case 0x554a29:c.instructions+=2;goto B554a29;
case 0x554a31:c.instructions+=1;goto B554a31;
case 0x554a33:goto L554a33;
case 0x554a37:c.instructions+=3;goto B554a37;
case 0x554a38:c.instructions+=2;goto B554a38;
case 0x554a3a:c.instructions+=1;goto B554a3a;
case 0x554a3f:goto L554a3f;
case 0x554a43:c.instructions+=3;goto B554a43;
case 0x554a4a:c.instructions+=2;goto B554a4a;
case 0x554a4d:c.instructions+=1;goto B554a4d;
case 0x554a4e:goto L554a4e;
case 0x554a52:c.instructions+=4;goto B554a52;
case 0x554a54:c.instructions+=3;goto B554a54;
case 0x554a5b:c.instructions+=2;goto B554a5b;
case 0x554a5e:c.instructions+=1;goto B554a5e;
case 0x554a60:goto L554a60;
case 0x554a62:c.instructions+=7;goto B554a62;
case 0x554a67:c.instructions+=6;goto B554a67;
case 0x554a6d:c.instructions+=5;goto B554a6d;
case 0x554a6e:c.instructions+=4;goto B554a6e;
case 0x554a75:c.instructions+=3;goto B554a75;
case 0x554a76:c.instructions+=2;goto B554a76;
case 0x554a7b:c.instructions+=1;goto B554a7b;
case 0x554a80:goto L554a80;
case 0x554a83:c.instructions+=4;goto B554a83;
case 0x554a87:c.instructions+=3;goto B554a87;
case 0x554a89:c.instructions+=2;goto B554a89;
case 0x554a91:c.instructions+=1;goto B554a91;
case 0x554a93:goto L554a93;
case 0x554a97:c.instructions+=3;goto B554a97;
case 0x554a98:c.instructions+=2;goto B554a98;
case 0x554a9a:c.instructions+=1;goto B554a9a;
case 0x554a9f:goto L554a9f;
case 0x554aa3:c.instructions+=3;goto B554aa3;
case 0x554aaa:c.instructions+=2;goto B554aaa;
case 0x554aad:c.instructions+=1;goto B554aad;
case 0x554aae:goto L554aae;
case 0x554ab2:c.instructions+=4;goto B554ab2;
case 0x554ab4:c.instructions+=3;goto B554ab4;
case 0x554abb:c.instructions+=2;goto B554abb;
case 0x554abe:c.instructions+=1;goto B554abe;
case 0x554ac0:goto L554ac0;
case 0x554ac2:c.instructions+=7;goto B554ac2;
case 0x554ac7:c.instructions+=6;goto B554ac7;
case 0x554acd:c.instructions+=5;goto B554acd;
case 0x554ace:c.instructions+=4;goto B554ace;
case 0x554ad5:c.instructions+=3;goto B554ad5;
case 0x554ad6:c.instructions+=2;goto B554ad6;
case 0x554adb:c.instructions+=1;goto B554adb;
case 0x554ae0:goto L554ae0;
case 0x554ae3:c.instructions+=4;goto B554ae3;
case 0x554ae7:c.instructions+=3;goto B554ae7;
case 0x554ae9:c.instructions+=2;goto B554ae9;
case 0x554af1:c.instructions+=1;goto B554af1;
case 0x554af3:goto L554af3;
case 0x554af7:c.instructions+=3;goto B554af7;
case 0x554af8:c.instructions+=2;goto B554af8;
case 0x554afa:c.instructions+=1;goto B554afa;
case 0x554aff:goto L554aff;
case 0x554b03:c.instructions+=3;goto B554b03;
case 0x554b0a:c.instructions+=2;goto B554b0a;
case 0x554b0d:c.instructions+=1;goto B554b0d;
case 0x554b0e:goto L554b0e;
case 0x554b12:c.instructions+=4;goto B554b12;
case 0x554b14:c.instructions+=3;goto B554b14;
case 0x554b1b:c.instructions+=2;goto B554b1b;
case 0x554b1e:c.instructions+=1;goto B554b1e;
case 0x554b20:goto L554b20;
case 0x554b22:c.instructions+=7;goto B554b22;
case 0x554b27:c.instructions+=6;goto B554b27;
case 0x554b2d:c.instructions+=5;goto B554b2d;
case 0x554b2e:c.instructions+=4;goto B554b2e;
case 0x554b35:c.instructions+=3;goto B554b35;
case 0x554b36:c.instructions+=2;goto B554b36;
case 0x554b3b:c.instructions+=1;goto B554b3b;
case 0x554b40:goto L554b40;
case 0x554b43:c.instructions+=4;goto B554b43;
case 0x554b47:c.instructions+=3;goto B554b47;
case 0x554b49:c.instructions+=2;goto B554b49;
case 0x554b51:c.instructions+=1;goto B554b51;
case 0x554b53:goto L554b53;
case 0x554b57:c.instructions+=3;goto B554b57;
case 0x554b58:c.instructions+=2;goto B554b58;
case 0x554b5a:c.instructions+=1;goto B554b5a;
case 0x554b5f:goto L554b5f;
case 0x554b63:c.instructions+=3;goto B554b63;
case 0x554b6a:c.instructions+=2;goto B554b6a;
case 0x554b6d:c.instructions+=1;goto B554b6d;
case 0x554b6e:goto L554b6e;
case 0x554b72:c.instructions+=4;goto B554b72;
case 0x554b74:c.instructions+=3;goto B554b74;
case 0x554b7b:c.instructions+=2;goto B554b7b;
case 0x554b7e:c.instructions+=1;goto B554b7e;
case 0x554b80:goto L554b80;
case 0x554b82:c.instructions+=7;goto B554b82;
case 0x554b87:c.instructions+=6;goto B554b87;
case 0x554b8d:c.instructions+=5;goto B554b8d;
case 0x554b8e:c.instructions+=4;goto B554b8e;
case 0x554b95:c.instructions+=3;goto B554b95;
case 0x554b96:c.instructions+=2;goto B554b96;
case 0x554b9b:c.instructions+=1;goto B554b9b;
case 0x554ba0:goto L554ba0;
case 0x554ba3:c.instructions+=4;goto B554ba3;
case 0x554ba7:c.instructions+=3;goto B554ba7;
case 0x554ba9:c.instructions+=2;goto B554ba9;
case 0x554bb1:c.instructions+=1;goto B554bb1;
case 0x554bb3:goto L554bb3;
case 0x554bb7:c.instructions+=3;goto B554bb7;
case 0x554bb8:c.instructions+=2;goto B554bb8;
case 0x554bba:c.instructions+=1;goto B554bba;
case 0x554bbf:goto L554bbf;
case 0x554bc3:c.instructions+=3;goto B554bc3;
case 0x554bca:c.instructions+=2;goto B554bca;
case 0x554bcd:c.instructions+=1;goto B554bcd;
case 0x554bce:goto L554bce;
case 0x554bd2:c.instructions+=4;goto B554bd2;
case 0x554bd4:c.instructions+=3;goto B554bd4;
case 0x554bdb:c.instructions+=2;goto B554bdb;
case 0x554bde:c.instructions+=1;goto B554bde;
case 0x554be0:goto L554be0;
case 0x554be2:c.instructions+=7;goto B554be2;
case 0x554be7:c.instructions+=6;goto B554be7;
case 0x554bed:c.instructions+=5;goto B554bed;
case 0x554bee:c.instructions+=4;goto B554bee;
case 0x554bf5:c.instructions+=3;goto B554bf5;
case 0x554bf6:c.instructions+=2;goto B554bf6;
case 0x554bfb:c.instructions+=1;goto B554bfb;
case 0x554c00:goto L554c00;
case 0x554c03:c.instructions+=4;goto B554c03;
case 0x554c07:c.instructions+=3;goto B554c07;
case 0x554c09:c.instructions+=2;goto B554c09;
case 0x554c11:c.instructions+=1;goto B554c11;
case 0x554c13:goto L554c13;
case 0x554c17:c.instructions+=3;goto B554c17;
case 0x554c18:c.instructions+=2;goto B554c18;
case 0x554c1a:c.instructions+=1;goto B554c1a;
case 0x554c1f:goto L554c1f;
case 0x554c23:c.instructions+=3;goto B554c23;
case 0x554c2a:c.instructions+=2;goto B554c2a;
case 0x554c2d:c.instructions+=1;goto B554c2d;
case 0x554c2e:goto L554c2e;
case 0x554c32:c.instructions+=4;goto B554c32;
case 0x554c34:c.instructions+=3;goto B554c34;
case 0x554c3b:c.instructions+=2;goto B554c3b;
case 0x554c3e:c.instructions+=1;goto B554c3e;
case 0x554c40:goto L554c40;
case 0x554c42:c.instructions+=7;goto B554c42;
case 0x554c47:c.instructions+=6;goto B554c47;
case 0x554c4d:c.instructions+=5;goto B554c4d;
case 0x554c4e:c.instructions+=4;goto B554c4e;
case 0x554c55:c.instructions+=3;goto B554c55;
case 0x554c56:c.instructions+=2;goto B554c56;
case 0x554c5b:c.instructions+=1;goto B554c5b;
case 0x554c60:goto L554c60;
case 0x554c63:c.instructions+=4;goto B554c63;
case 0x554c67:c.instructions+=3;goto B554c67;
case 0x554c69:c.instructions+=2;goto B554c69;
case 0x554c71:c.instructions+=1;goto B554c71;
case 0x554c73:goto L554c73;
case 0x554c77:c.instructions+=3;goto B554c77;
case 0x554c78:c.instructions+=2;goto B554c78;
case 0x554c7a:c.instructions+=1;goto B554c7a;
case 0x554c7f:goto L554c7f;
case 0x554c83:c.instructions+=3;goto B554c83;
case 0x554c8a:c.instructions+=2;goto B554c8a;
case 0x554c8d:c.instructions+=1;goto B554c8d;
case 0x554c8e:goto L554c8e;
case 0x554c92:c.instructions+=4;goto B554c92;
case 0x554c94:c.instructions+=3;goto B554c94;
case 0x554c9b:c.instructions+=2;goto B554c9b;
case 0x554c9e:c.instructions+=1;goto B554c9e;
case 0x554ca0:goto L554ca0;
case 0x554ca2:c.instructions+=11;goto B554ca2;
case 0x554ca7:c.instructions+=10;goto B554ca7;
case 0x554cad:c.instructions+=9;goto B554cad;
case 0x554cae:c.instructions+=8;goto B554cae;
case 0x554cb5:c.instructions+=7;goto B554cb5;
case 0x554cb6:c.instructions+=6;goto B554cb6;
case 0x554cba:c.instructions+=5;goto B554cba;
case 0x554cbb:c.instructions+=4;goto B554cbb;
case 0x554cbd:c.instructions+=3;goto B554cbd;
case 0x554cbe:c.instructions+=2;goto B554cbe;
case 0x554cc2:c.instructions+=1;goto B554cc2;
case 0x554cc7:goto L554cc7;
case 0x554cca:c.instructions+=6;goto B554cca;
case 0x554ccf:c.instructions+=5;goto B554ccf;
case 0x554cd4:c.instructions+=4;goto B554cd4;
case 0x554cd5:c.instructions+=3;goto B554cd5;
case 0x554cdd:c.instructions+=2;goto B554cdd;
case 0x554ce3:c.instructions+=1;goto B554ce3;
case 0x554ce8:goto L554ce8;
case 0x554cea:c.instructions+=2;goto B554cea;
case 0x554cec:c.instructions+=1;goto B554cec;
case 0x554cf1:goto L554cf1;
case 0x554cf4:c.instructions+=3;goto B554cf4;
case 0x554cf9:c.instructions+=2;goto B554cf9;
case 0x554cfa:c.instructions+=1;goto B554cfa;
case 0x554cff:goto L554cff;
case 0x554d02:c.instructions+=3;goto B554d02;
case 0x554d07:c.instructions+=2;goto B554d07;
case 0x554d08:c.instructions+=1;goto B554d08;
case 0x554d0d:goto L554d0d;
case 0x554d10:c.instructions+=3;goto B554d10;
case 0x554d15:c.instructions+=2;goto B554d15;
case 0x554d16:c.instructions+=1;goto B554d16;
case 0x554d1b:goto L554d1b;
case 0x554d1e:c.instructions+=3;goto B554d1e;
case 0x554d20:c.instructions+=2;goto B554d20;
case 0x554d27:c.instructions+=1;goto B554d27;
case 0x554d2c:goto L554d2c;
case 0x554d2f:c.instructions+=2;goto B554d2f;
case 0x554d30:c.instructions+=1;goto B554d30;
case 0x554d35:goto L554d35;
case 0x554d36:c.instructions+=1;goto B554d36;
case 0x554d3b:goto L554d3b;
case 0x554d3e:c.instructions+=2;goto B554d3e;
case 0x554d40:c.instructions+=1;goto B554d40;
case 0x554d42:goto L554d42;
case 0x554d45:c.instructions+=1;goto B554d45;
case 0x554d47:goto L554d47;
case 0x554d49:goto L554d49;
case 0x554d4c:c.instructions+=3;goto B554d4c;
case 0x554d4f:c.instructions+=2;goto B554d4f;
case 0x554d50:c.instructions+=1;goto B554d50;
case 0x554d53:goto L554d53;
case 0x554d55:c.instructions+=1;goto B554d55;
case 0x554d5a:goto L554d5a;
case 0x554d5e:c.instructions+=5;goto B554d5e;
case 0x554d60:c.instructions+=4;goto B554d60;
case 0x554d61:c.instructions+=3;goto B554d61;
case 0x554d68:c.instructions+=2;goto B554d68;
case 0x554d6b:c.instructions+=1;goto B554d6b;
case 0x554d70:goto L554d70;
case 0x554d71:c.instructions+=2;goto B554d71;
case 0x554d73:c.instructions+=1;goto B554d73;
case 0x554d78:goto L554d78;
case 0x554d7d:c.instructions+=1;goto B554d7d;
case 0x554d7f:goto L554d7f;
case 0x554d80:c.instructions+=1;goto B554d80;
case 0x554d85:goto L554d85;
case 0x554d88:goto L554d88;
case 0x554d8a:c.instructions+=2;goto B554d8a;
case 0x554d8b:c.instructions+=1;goto B554d8b;
case 0x554d90:goto L554d90;
case 0x554d96:c.instructions+=1;goto B554d96;
case 0x554da0:goto L554da0;
case 0x554da2:c.instructions+=7;goto B554da2;
case 0x554da7:c.instructions+=6;goto B554da7;
case 0x554dad:c.instructions+=5;goto B554dad;
case 0x554dae:c.instructions+=4;goto B554dae;
case 0x554db5:c.instructions+=3;goto B554db5;
case 0x554db6:c.instructions+=2;goto B554db6;
case 0x554dbb:c.instructions+=1;goto B554dbb;
case 0x554dc0:goto L554dc0;
case 0x554dc3:c.instructions+=4;goto B554dc3;
case 0x554dc7:c.instructions+=3;goto B554dc7;
case 0x554dc9:c.instructions+=2;goto B554dc9;
case 0x554dd1:c.instructions+=1;goto B554dd1;
case 0x554dd3:goto L554dd3;
case 0x554dd7:c.instructions+=3;goto B554dd7;
case 0x554dd8:c.instructions+=2;goto B554dd8;
case 0x554dda:c.instructions+=1;goto B554dda;
case 0x554ddf:goto L554ddf;
case 0x554de3:c.instructions+=3;goto B554de3;
case 0x554dea:c.instructions+=2;goto B554dea;
case 0x554ded:c.instructions+=1;goto B554ded;
case 0x554dee:goto L554dee;
case 0x554df2:c.instructions+=4;goto B554df2;
case 0x554df4:c.instructions+=3;goto B554df4;
case 0x554dfb:c.instructions+=2;goto B554dfb;
case 0x554dfe:c.instructions+=1;goto B554dfe;
case 0x554e00:goto L554e00;
case 0x554e02:c.instructions+=7;goto B554e02;
case 0x554e07:c.instructions+=6;goto B554e07;
case 0x554e0d:c.instructions+=5;goto B554e0d;
case 0x554e0e:c.instructions+=4;goto B554e0e;
case 0x554e15:c.instructions+=3;goto B554e15;
case 0x554e16:c.instructions+=2;goto B554e16;
case 0x554e18:c.instructions+=1;goto B554e18;
case 0x554e1d:goto L554e1d;
case 0x554e20:c.instructions+=4;goto B554e20;
case 0x554e24:c.instructions+=3;goto B554e24;
case 0x554e26:c.instructions+=2;goto B554e26;
case 0x554e2e:c.instructions+=1;goto B554e2e;
case 0x554e30:goto L554e30;
case 0x554e34:c.instructions+=3;goto B554e34;
case 0x554e35:c.instructions+=2;goto B554e35;
case 0x554e37:c.instructions+=1;goto B554e37;
case 0x554e3c:goto L554e3c;
case 0x554e40:c.instructions+=3;goto B554e40;
case 0x554e47:c.instructions+=2;goto B554e47;
case 0x554e4a:c.instructions+=1;goto B554e4a;
case 0x554e4b:goto L554e4b;
case 0x554e4f:c.instructions+=4;goto B554e4f;
case 0x554e51:c.instructions+=3;goto B554e51;
case 0x554e58:c.instructions+=2;goto B554e58;
case 0x554e5b:c.instructions+=1;goto B554e5b;
case 0x554e60:goto L554e60;
case 0x554e62:c.instructions+=7;goto B554e62;
case 0x554e67:c.instructions+=6;goto B554e67;
case 0x554e6d:c.instructions+=5;goto B554e6d;
case 0x554e6e:c.instructions+=4;goto B554e6e;
case 0x554e75:c.instructions+=3;goto B554e75;
case 0x554e76:c.instructions+=2;goto B554e76;
case 0x554e78:c.instructions+=1;goto B554e78;
case 0x554e7d:goto L554e7d;
case 0x554e80:c.instructions+=4;goto B554e80;
case 0x554e84:c.instructions+=3;goto B554e84;
case 0x554e86:c.instructions+=2;goto B554e86;
case 0x554e8e:c.instructions+=1;goto B554e8e;
case 0x554e90:goto L554e90;
case 0x554e94:c.instructions+=3;goto B554e94;
case 0x554e95:c.instructions+=2;goto B554e95;
case 0x554e97:c.instructions+=1;goto B554e97;
case 0x554e9c:goto L554e9c;
case 0x554ea0:c.instructions+=3;goto B554ea0;
case 0x554ea7:c.instructions+=2;goto B554ea7;
case 0x554eaa:c.instructions+=1;goto B554eaa;
case 0x554eab:goto L554eab;
case 0x554eaf:c.instructions+=4;goto B554eaf;
case 0x554eb1:c.instructions+=3;goto B554eb1;
case 0x554eb8:c.instructions+=2;goto B554eb8;
case 0x554ebb:c.instructions+=1;goto B554ebb;
case 0x554ec0:goto L554ec0;
case 0x554ec2:c.instructions+=7;goto B554ec2;
case 0x554ec7:c.instructions+=6;goto B554ec7;
case 0x554ecd:c.instructions+=5;goto B554ecd;
case 0x554ece:c.instructions+=4;goto B554ece;
case 0x554ed5:c.instructions+=3;goto B554ed5;
case 0x554ed6:c.instructions+=2;goto B554ed6;
case 0x554ed8:c.instructions+=1;goto B554ed8;
case 0x554edd:goto L554edd;
case 0x554ee0:c.instructions+=4;goto B554ee0;
case 0x554ee4:c.instructions+=3;goto B554ee4;
case 0x554ee6:c.instructions+=2;goto B554ee6;
case 0x554eee:c.instructions+=1;goto B554eee;
case 0x554ef0:goto L554ef0;
case 0x554ef4:c.instructions+=3;goto B554ef4;
case 0x554ef5:c.instructions+=2;goto B554ef5;
case 0x554ef7:c.instructions+=1;goto B554ef7;
case 0x554efc:goto L554efc;
case 0x554f00:c.instructions+=3;goto B554f00;
case 0x554f07:c.instructions+=2;goto B554f07;
case 0x554f0a:c.instructions+=1;goto B554f0a;
case 0x554f0b:goto L554f0b;
case 0x554f0f:c.instructions+=4;goto B554f0f;
case 0x554f11:c.instructions+=3;goto B554f11;
case 0x554f18:c.instructions+=2;goto B554f18;
case 0x554f1b:c.instructions+=1;goto B554f1b;
case 0x554f20:goto L554f20;
case 0x554f22:c.instructions+=7;goto B554f22;
case 0x554f27:c.instructions+=6;goto B554f27;
case 0x554f2d:c.instructions+=5;goto B554f2d;
case 0x554f2e:c.instructions+=4;goto B554f2e;
case 0x554f35:c.instructions+=3;goto B554f35;
case 0x554f36:c.instructions+=2;goto B554f36;
case 0x554f3b:c.instructions+=1;goto B554f3b;
case 0x554f40:goto L554f40;
case 0x554f43:c.instructions+=4;goto B554f43;
case 0x554f47:c.instructions+=3;goto B554f47;
case 0x554f49:c.instructions+=2;goto B554f49;
case 0x554f51:c.instructions+=1;goto B554f51;
case 0x554f53:goto L554f53;
case 0x554f57:c.instructions+=3;goto B554f57;
case 0x554f58:c.instructions+=2;goto B554f58;
case 0x554f5a:c.instructions+=1;goto B554f5a;
case 0x554f5f:goto L554f5f;
case 0x554f63:c.instructions+=3;goto B554f63;
case 0x554f6a:c.instructions+=2;goto B554f6a;
case 0x554f6d:c.instructions+=1;goto B554f6d;
case 0x554f6e:goto L554f6e;
case 0x554f72:c.instructions+=4;goto B554f72;
case 0x554f74:c.instructions+=3;goto B554f74;
case 0x554f7b:c.instructions+=2;goto B554f7b;
case 0x554f7e:c.instructions+=1;goto B554f7e;
case 0x554f80:goto L554f80;
case 0x554f82:c.instructions+=10;goto B554f82;
case 0x554f87:c.instructions+=9;goto B554f87;
case 0x554f8d:c.instructions+=8;goto B554f8d;
case 0x554f8e:c.instructions+=7;goto B554f8e;
case 0x554f95:c.instructions+=6;goto B554f95;
case 0x554f96:c.instructions+=5;goto B554f96;
case 0x554f97:c.instructions+=4;goto B554f97;
case 0x554f98:c.instructions+=3;goto B554f98;
case 0x554f9a:c.instructions+=2;goto B554f9a;
case 0x554f9c:c.instructions+=1;goto B554f9c;
case 0x554fa1:goto L554fa1;
case 0x554fa3:c.instructions+=6;goto B554fa3;
case 0x554fa6:c.instructions+=5;goto B554fa6;
case 0x554faa:c.instructions+=4;goto B554faa;
case 0x554fac:c.instructions+=3;goto B554fac;
case 0x554fae:c.instructions+=2;goto B554fae;
case 0x554fb2:c.instructions+=1;goto B554fb2;
case 0x554fb4:goto L554fb4;
case 0x554fb8:c.instructions+=4;goto B554fb8;
case 0x554fb9:c.instructions+=3;goto B554fb9;
case 0x554fba:c.instructions+=2;goto B554fba;
case 0x554fbc:c.instructions+=1;goto B554fbc;
case 0x554fc1:goto L554fc1;
case 0x554fc7:c.instructions+=3;goto B554fc7;
case 0x554fca:c.instructions+=2;goto B554fca;
case 0x554fcd:c.instructions+=1;goto B554fcd;
case 0x554fcf:goto L554fcf;
case 0x554fd3:c.instructions+=5;goto B554fd3;
case 0x554fd4:c.instructions+=4;goto B554fd4;
case 0x554fd5:c.instructions+=3;goto B554fd5;
case 0x554fdc:c.instructions+=2;goto B554fdc;
case 0x554fdf:c.instructions+=1;goto B554fdf;
case 0x554ff0:goto L554ff0;
case 0x554ff2:c.instructions+=4;goto B554ff2;
case 0x554ff7:c.instructions+=3;goto B554ff7;
case 0x554ffd:c.instructions+=2;goto B554ffd;
case 0x554ffe:c.instructions+=1;goto B554ffe;
default:missing_instruction(c.pc);}
B554000:L554000:{c.instructions+=3;NFSU2_TR(0x554000);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B554003:{NFSU2_TR(0x554003);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B554005:{NFSU2_TR(0x554005);
if(r1(R+518)){{goto L554026;}}
}
B554007:L554007:{c.instructions+=2;NFSU2_TR(0x554007);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B554008:{NFSU2_TR(0x554008);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55400dull));
TAIL_STATIC(0x52cef0u,52c);
}
B55400d:L55400d:{c.instructions+=3;NFSU2_TR(0x55400d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B554010:{NFSU2_TR(0x554010);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B554012:{NFSU2_TR(0x554012);
if(r1(R+518)){{goto L554026;}}
}
B554014:L554014:{c.instructions+=4;NFSU2_TR(0x554014);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x844fd3ull))));
__builtin_memmove((R+4),(U+0),4);
}
B55401a:{NFSU2_TR(0x55401a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55401b:{NFSU2_TR(0x55401b);
__builtin_memmove((R+4),(R+0),4);
}
B55401d:{NFSU2_TR(0x55401d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x554022ull));
TAIL_STATIC(0x517f80u,517);
}
B554022:L554022:{c.instructions+=2;NFSU2_TR(0x554022);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B554024:{NFSU2_TR(0x554024);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L55403f;}}
}
B554026:L554026:{c.instructions+=3;NFSU2_TR(0x554026);
__builtin_memmove((R+0),gp(0x8384c4),4);
}
B55402b:{NFSU2_TR(0x55402b);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B55402d:{NFSU2_TR(0x55402d);
if(r1(R+518)){{goto L55409b;}}
}
B55402f:L55402f:{c.instructions+=5;NFSU2_TR(0x55402f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B554032:{NFSU2_TR(0x554032);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B554033:{NFSU2_TR(0x554033);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x844fd3ull))));
__builtin_memmove((R+8),(U+0),4);
}
B554039:{NFSU2_TR(0x554039);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55403a:{NFSU2_TR(0x55403a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55403full));
TAIL_STATIC(0x52c570u,52c);
}
B55403f:L55403f:{c.instructions+=3;NFSU2_TR(0x55403f);
__builtin_memmove((R+28),(R+0),4);
}
B554041:{NFSU2_TR(0x554041);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B554043:{NFSU2_TR(0x554043);
if(r1(R+518)){{goto L55409b;}}
}
B554045:L554045:{c.instructions+=4;NFSU2_TR(0x554045);
w4(R+8,u32(0x78f758ull));
}
B55404a:{NFSU2_TR(0x55404a);
w4(R+4,u32(u32(r4(R+4))|u32(u32(0xffffffffull))));
}
B55404d:{NFSU2_TR(0x55404d);
w1(R+0,u8(0x53ull));
}
B55404f:{NFSU2_TR(0x55404f);
}
B554050:L554050:{c.instructions+=3;NFSU2_TR(0x554050);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(u32(0x21ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B554053:{NFSU2_TR(0x554053);
u8 U[1];
w1(R+523,sborrow<u8>(r1(R+0),u8(0x61ull)));
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x61ull))));
w1(R+519,u8(s8(r1(U+0))<s8(u8(0x0ull))));
}
B554055:{NFSU2_TR(0x554055);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L55405d;}}
}
B554057:L554057:{c.instructions+=2;NFSU2_TR(0x554057);
u8 U[1];
w1(R+523,sborrow<u8>(r1(R+0),u8(0x7aull)));
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x7aull))));
w1(R+519,u8(s8(r1(U+0))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B554059:{NFSU2_TR(0x554059);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L55405d;}}
}
B55405b:L55405b:{c.instructions+=1;NFSU2_TR(0x55405b);
w1(R+0,u8(u32(r1(R+0))+u32(u8(0xe0ull))));
}
B55405d:L55405d:{c.instructions+=6;NFSU2_TR(0x55405d);
w4(R+0,u32(r1(R+0)));
}
B554060:{NFSU2_TR(0x554060);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+0))));
}
B554062:{NFSU2_TR(0x554062);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B554065:{NFSU2_TR(0x554065);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B554066:{NFSU2_TR(0x554066);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B554068:{NFSU2_TR(0x554068);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x554050u);}goto L554050;}}
}
B55406a:L55406a:{c.instructions+=3;NFSU2_TR(0x55406a);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B55406d:{NFSU2_TR(0x55406d);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B55406f:{NFSU2_TR(0x55406f);
if(r1(R+518)){{goto L55409b;}}
}
B554071:L554071:{c.instructions+=2;NFSU2_TR(0x554071);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+4))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B554074:{NFSU2_TR(0x554074);
if(r1(R+518)){{goto L55407f;}}
}
B554076:L554076:{c.instructions+=3;NFSU2_TR(0x554076);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B554079:{NFSU2_TR(0x554079);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B55407b:{NFSU2_TR(0x55407b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x554071u);}goto L554071;}}
}
B55407d:L55407d:{c.instructions+=1;NFSU2_TR(0x55407d);
{goto L55409b;}
}
B55407f:L55407f:{c.instructions+=2;NFSU2_TR(0x55407f);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B554081:{NFSU2_TR(0x554081);
if(r1(R+518)){{goto L55409b;}}
}
B554083:L554083:{c.instructions+=2;NFSU2_TR(0x554083);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+24))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B554086:{NFSU2_TR(0x554086);
if(r1(R+518)){{goto L554098;}}
}
B554088:L554088:{c.instructions+=3;NFSU2_TR(0x554088);
__builtin_memmove((R+4),(R+28),4);
}
B55408a:{NFSU2_TR(0x55408a);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B55408d:{NFSU2_TR(0x55408d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x554092ull));
TAIL_STATIC(0x517720u,517);
}
B554092:L554092:{c.instructions+=2;NFSU2_TR(0x554092);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B554095:{NFSU2_TR(0x554095);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B554098:L554098:{c.instructions+=1;NFSU2_TR(0x554098);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B55409b:L55409b:{c.instructions+=9;NFSU2_TR(0x55409b);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B55409f:{NFSU2_TR(0x55409f);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5540a3:{NFSU2_TR(0x5540a3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x124ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5540a9:{NFSU2_TR(0x5540a9);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x4ull))));
}
B5540ac:{NFSU2_TR(0x5540ac);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B5540ad:{NFSU2_TR(0x5540ad);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x843298fcull))));
__builtin_memmove((R+8),(U+0),4);
}
B5540b3:{NFSU2_TR(0x5540b3);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+8),r4(U+0)));
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5540b5:{NFSU2_TR(0x5540b5);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5540b9:{NFSU2_TR(0x5540b9);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x553e80u,553);}
}
B5540bf:L5540bf:{c.instructions+=3;NFSU2_TR(0x5540bf);
w4(R+0,u32(m1(0x83aa58)));
}
B5540c6:{NFSU2_TR(0x5540c6);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+20))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B5540c8:{NFSU2_TR(0x5540c8);
if(r1(R+518)){{goto L5540d8;}}
}
B5540ca:L5540ca:{c.instructions+=2;NFSU2_TR(0x5540ca);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B5540cb:{NFSU2_TR(0x5540cb);
if(r1(R+518)){{goto L5540d1;}}
}
B5540cd:L5540cd:{c.instructions+=2;NFSU2_TR(0x5540cd);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B5540cf:{NFSU2_TR(0x5540cf);
{goto L5540dd;}
}
B5540d1:L5540d1:{c.instructions+=2;NFSU2_TR(0x5540d1);
w4(R+4,u32(0xa9c9c8f7ull));
}
B5540d6:{NFSU2_TR(0x5540d6);
{goto L5540dd;}
}
B5540d8:L5540d8:{c.instructions+=1;NFSU2_TR(0x5540d8);
w4(R+4,u32(0x4ca36b89ull));
}
B5540dd:L5540dd:{c.instructions+=4;NFSU2_TR(0x5540dd);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5540e1:{NFSU2_TR(0x5540e1);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x104ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5540e7:{NFSU2_TR(0x5540e7);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5540e9:{NFSU2_TR(0x5540e9);
if(r1(R+518)){{goto L55412c;}}
}
B5540eb:L5540eb:{c.instructions+=4;NFSU2_TR(0x5540eb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5540ee:{NFSU2_TR(0x5540ee);
w1(R+12,u8(u32(r1(R+12))^u32(r1(R+12))));
}
B5540f0:{NFSU2_TR(0x5540f0);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(u8(0x2ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5540f2:{NFSU2_TR(0x5540f2);
if(r1(R+518)){{goto L5540f6;}}
}
B5540f4:L5540f4:{c.instructions+=1;NFSU2_TR(0x5540f4);
w1(R+12,u8(0x1ull));
}
B5540f6:L5540f6:{c.instructions+=2;NFSU2_TR(0x5540f6);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+4))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B5540f9:{NFSU2_TR(0x5540f9);
if(r1(R+518)){{goto L554106;}}
}
B5540fb:L5540fb:{c.instructions+=3;NFSU2_TR(0x5540fb);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0x400000ull))));
}
B554100:{NFSU2_TR(0x554100);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B554103:{NFSU2_TR(0x554103);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B554106:L554106:{c.instructions+=3;NFSU2_TR(0x554106);
__builtin_memmove((R+4),gp(0x838478),4);
}
B55410c:{NFSU2_TR(0x55410c);
u8 U[14];
__builtin_memmove((U+6),(R+20),4);
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
B55410e:{NFSU2_TR(0x55410e);
if(r1(R+518)){{goto L554115;}}
}
B554110:L554110:{c.instructions+=3;NFSU2_TR(0x554110);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B554112:{NFSU2_TR(0x554112);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B554113:{NFSU2_TR(0x554113);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x554115ull));
{u32 t_=u32(r4(U+4));TAIL_DYNAMIC(t_);}
}
B554115:L554115:{c.instructions+=6;NFSU2_TR(0x554115);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B554118:{NFSU2_TR(0x554118);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0xfffffffdull))));
}
B55411b:{NFSU2_TR(0x55411b);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(r1(R+12))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B55411d:{NFSU2_TR(0x55411d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B554120:{NFSU2_TR(0x554120);
__builtin_memmove((R+0),(R+8),4);
}
B554122:{NFSU2_TR(0x554122);
if(r1(R+518)){{goto L55412c;}}
}
B554124:L554124:{c.instructions+=2;NFSU2_TR(0x554124);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0x400000ull))));
}
B554129:{NFSU2_TR(0x554129);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B55412c:L55412c:{c.instructions+=3;NFSU2_TR(0x55412c);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B554130:{NFSU2_TR(0x554130);
__builtin_memmove((R+4),(R+24),4);
}
B554132:{NFSU2_TR(0x554132);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x554137ull));
TAIL_STATIC(0x54b310u,54b);
}
B554137:L554137:{c.instructions+=9;NFSU2_TR(0x554137);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B55413b:{NFSU2_TR(0x55413b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B55413c:{NFSU2_TR(0x55413c);
__builtin_memmove((R+0),(R+24),4);
}
B55413e:{NFSU2_TR(0x55413e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B55413f:{NFSU2_TR(0x55413f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B554140:{NFSU2_TR(0x554140);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B554141:{NFSU2_TR(0x554141);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B554148:{NFSU2_TR(0x554148);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x1cull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x1cull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x1cull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B55414b:{NFSU2_TR(0x55414b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B554150:L554150:{c.instructions+=3;NFSU2_TR(0x554150);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B554151:{NFSU2_TR(0x554151);
__builtin_memmove((R+24),(R+4),4);
}
B554153:{NFSU2_TR(0x554153);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x554158ull));
{goto L554170;}
}
B554158:L554158:{c.instructions+=2;NFSU2_TR(0x554158);
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
B55415d:{NFSU2_TR(0x55415d);
if(r1(R+518)){{goto L554168;}}
}
B55415f:L55415f:{c.instructions+=2;NFSU2_TR(0x55415f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B554160:{NFSU2_TR(0x554160);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x554165ull));
TAIL_STATIC(0x575630u,575);
}
B554165:L554165:{c.instructions+=1;NFSU2_TR(0x554165);
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
B554168:L554168:{c.instructions+=3;NFSU2_TR(0x554168);
__builtin_memmove((R+0),(R+24),4);
}
B55416a:{NFSU2_TR(0x55416a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B55416b:{NFSU2_TR(0x55416b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B554170:L554170:{c.instructions+=12;NFSU2_TR(0x554170);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B554172:{NFSU2_TR(0x554172);
u8 U[4];
w4(U+0,u32(0x776fe8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B554177:{NFSU2_TR(0x554177);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B55417d:{NFSU2_TR(0x55417d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55417e:{NFSU2_TR(0x55417e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B554185:{NFSU2_TR(0x554185);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B554186:{NFSU2_TR(0x554186);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B554187:{NFSU2_TR(0x554187);
__builtin_memmove((R+24),(R+4),4);
}
B554189:{NFSU2_TR(0x554189);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B55418d:{NFSU2_TR(0x55418d);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((R+4),(U+0),4);
}
B554190:{NFSU2_TR(0x554190);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B554198:{NFSU2_TR(0x554198);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55419dull));
TAIL_STATIC(0x4cbba0u,4cb);
}
B55419d:L55419d:{c.instructions+=6;NFSU2_TR(0x55419d);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5541a1:{NFSU2_TR(0x5541a1);
u8 U[4];
w4(U+0,u32(0x79ac00ull));
s4(u32(r4(R+24)),r4(U+0));
}
B5541a7:{NFSU2_TR(0x5541a7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5541a8:{NFSU2_TR(0x5541a8);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5541af:{NFSU2_TR(0x5541af);
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
B5541b2:{NFSU2_TR(0x5541b2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5541c0:L5541c0:{c.instructions+=15;NFSU2_TR(0x5541c0);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5541c2:{NFSU2_TR(0x5541c2);
u8 U[4];
w4(U+0,u32(0x776fe8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5541c7:{NFSU2_TR(0x5541c7);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5541cd:{NFSU2_TR(0x5541cd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5541ce:{NFSU2_TR(0x5541ce);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5541d5:{NFSU2_TR(0x5541d5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5541d6:{NFSU2_TR(0x5541d6);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5541d7:{NFSU2_TR(0x5541d7);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5541d8:{NFSU2_TR(0x5541d8);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5541d9:{NFSU2_TR(0x5541d9);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5541dd:{NFSU2_TR(0x5541dd);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5541de:{NFSU2_TR(0x5541de);
__builtin_memmove((R+20),(R+4),4);
}
B5541e0:{NFSU2_TR(0x5541e0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5541e1:{NFSU2_TR(0x5541e1);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5541e5:{NFSU2_TR(0x5541e5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5541eaull));
TAIL_STATIC(0x551de0u,551);
}
B5541ea:L5541ea:{c.instructions+=6;NFSU2_TR(0x5541ea);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x58ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5541ed:{NFSU2_TR(0x5541ed);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B5541ef:{NFSU2_TR(0x5541ef);
__builtin_memmove((R+4),(R+28),4);
}
B5541f1:{NFSU2_TR(0x5541f1);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5541f5:{NFSU2_TR(0x5541f5);
u8 U[4];
w4(U+0,u32(0x79c88cull));
s4(u32(r4(R+20)),r4(U+0));
}
B5541fc:{NFSU2_TR(0x5541fc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x554201ull));
TAIL_STATIC(0x4ff250u,4ff);
}
B554201:L554201:{c.instructions+=2;NFSU2_TR(0x554201);
u8 U[4];
w4(U+0,u32(0x79cb84ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B554206:{NFSU2_TR(0x554206);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55420bull));
TAIL_STATIC(0x50d510u,50d);
}
B55420b:L55420b:{c.instructions+=4;NFSU2_TR(0x55420b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B55420e:{NFSU2_TR(0x55420e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x50ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B554211:{NFSU2_TR(0x554211);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B554214:{NFSU2_TR(0x554214);
w4(R+4,u32(0xceull));
}
B554219:L554219:{c.instructions+=1;NFSU2_TR(0x554219);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L55421b;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x554219u);}goto L554219;}
}
B55421b:L55421b:{c.instructions+=3;NFSU2_TR(0x55421b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B55421e:{NFSU2_TR(0x55421e);
__builtin_memmove((R+4),(R+20),4);
}
B554220:{NFSU2_TR(0x554220);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x554225ull));
TAIL_STATIC(0x54c3d0u,54c);
}
B554225:L554225:{c.instructions+=3;NFSU2_TR(0x554225);
__builtin_memmove((R+0),gp(0x8384d8),4);
}
B55422a:{NFSU2_TR(0x55422a);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B55422c:{NFSU2_TR(0x55422c);
if(r1(R+518)){{goto L554263;}}
}
B55422e:L55422e:{c.instructions+=2;NFSU2_TR(0x55422e);
u8 U[7];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(r1(R+12))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B554231:{NFSU2_TR(0x554231);
if(r1(R+518)){{goto L554263;}}
}
B554233:L554233:{c.instructions+=2;NFSU2_TR(0x554233);
u8 U[2];
__builtin_memmove((U+0),gp(0x8384dc),1);
w1(U+1,u8(u32(r1(U+0))-u32(r1(R+12))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B554239:{NFSU2_TR(0x554239);
if(r1(R+518)){{goto L554263;}}
}
B55423b:L55423b:{c.instructions+=6;NFSU2_TR(0x55423b);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4cull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B55423f:{NFSU2_TR(0x55423f);
__builtin_memmove((R+24),gp(0x8384d8),4);
}
B554245:{NFSU2_TR(0x554245);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B554246:{NFSU2_TR(0x554246);
__builtin_memmove((R+4),(R+24),4);
}
B554248:{NFSU2_TR(0x554248);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6cull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B55424b:{NFSU2_TR(0x55424b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x554250ull));
TAIL_STATIC(0x542990u,542);
}
B554250:L554250:{c.instructions+=4;NFSU2_TR(0x554250);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B554253:{NFSU2_TR(0x554253);
u8 U[4];
w4(U+0,u32(0x2bac0ceeull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B554258:{NFSU2_TR(0x554258);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B554259:{NFSU2_TR(0x554259);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55425eull));
TAIL_STATIC(0x4954e0u,495);
}
B55425e:L55425e:{c.instructions+=2;NFSU2_TR(0x55425e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B554261:{NFSU2_TR(0x554261);
{goto L554266;}
}
B554263:L554263:{c.instructions+=1;NFSU2_TR(0x554263);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4cull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B554266:L554266:{c.instructions+=9;NFSU2_TR(0x554266);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B55426a:{NFSU2_TR(0x55426a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B55426b:{NFSU2_TR(0x55426b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B55426c:{NFSU2_TR(0x55426c);
__builtin_memmove((R+0),(R+20),4);
}
B55426e:{NFSU2_TR(0x55426e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B55426f:{NFSU2_TR(0x55426f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B554270:{NFSU2_TR(0x554270);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B554277:{NFSU2_TR(0x554277);
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
B55427a:{NFSU2_TR(0x55427a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B554280:L554280:{c.instructions+=3;NFSU2_TR(0x554280);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B554281:{NFSU2_TR(0x554281);
__builtin_memmove((R+24),(R+4),4);
}
B554283:{NFSU2_TR(0x554283);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x554288ull));
TAIL_STATIC(0x5511e0u,551);
}
B554288:L554288:{c.instructions+=2;NFSU2_TR(0x554288);
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
B55428d:{NFSU2_TR(0x55428d);
if(r1(R+518)){{goto L554298;}}
}
B55428f:L55428f:{c.instructions+=2;NFSU2_TR(0x55428f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B554290:{NFSU2_TR(0x554290);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x554295ull));
TAIL_STATIC(0x575630u,575);
}
B554295:L554295:{c.instructions+=1;NFSU2_TR(0x554295);
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
B554298:L554298:{c.instructions+=3;NFSU2_TR(0x554298);
__builtin_memmove((R+0),(R+24),4);
}
B55429a:{NFSU2_TR(0x55429a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B55429b:{NFSU2_TR(0x55429b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5542a0:L5542a0:{c.instructions+=8;NFSU2_TR(0x5542a0);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5542a2:{NFSU2_TR(0x5542a2);
u8 U[4];
w4(U+0,u32(0x777e54ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5542a7:{NFSU2_TR(0x5542a7);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5542ad:{NFSU2_TR(0x5542ad);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5542ae:{NFSU2_TR(0x5542ae);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5542b5:{NFSU2_TR(0x5542b5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5542b6:{NFSU2_TR(0x5542b6);
u8 U[4];
w4(U+0,u32(0x390ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5542bb:{NFSU2_TR(0x5542bb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5542c0ull));
TAIL_STATIC(0x575620u,575);
}
B5542c0:L5542c0:{c.instructions+=5;NFSU2_TR(0x5542c0);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5542c3:{NFSU2_TR(0x5542c3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+16)),r4(U+0));
}
B5542c7:{NFSU2_TR(0x5542c7);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5542c9:{NFSU2_TR(0x5542c9);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5542d1:{NFSU2_TR(0x5542d1);
if(r1(R+518)){{goto L5542ee;}}
}
B5542d3:L5542d3:{c.instructions+=4;NFSU2_TR(0x5542d3);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5542d7:{NFSU2_TR(0x5542d7);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5542d8:{NFSU2_TR(0x5542d8);
__builtin_memmove((R+4),(R+0),4);
}
B5542da:{NFSU2_TR(0x5542da);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5542dfull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5541c0u);}goto L5541c0;}
}
B5542df:L5542df:{c.instructions+=4;NFSU2_TR(0x5542df);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5542e3:{NFSU2_TR(0x5542e3);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5542ea:{NFSU2_TR(0x5542ea);
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
B5542ed:{NFSU2_TR(0x5542ed);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5542ee:L5542ee:{c.instructions+=5;NFSU2_TR(0x5542ee);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5542f2:{NFSU2_TR(0x5542f2);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5542f4:{NFSU2_TR(0x5542f4);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5542fb:{NFSU2_TR(0x5542fb);
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
B5542fe:{NFSU2_TR(0x5542fe);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B554300:L554300:{c.instructions+=45;NFSU2_TR(0x554300);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B554302:{NFSU2_TR(0x554302);
u8 U[4];
w4(U+0,u32(0x777e89ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B554307:{NFSU2_TR(0x554307);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B55430d:{NFSU2_TR(0x55430d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55430e:{NFSU2_TR(0x55430e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B554315:{NFSU2_TR(0x554315);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xcull))));
}
B554318:{NFSU2_TR(0x554318);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B554319:{NFSU2_TR(0x554319);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55431a:{NFSU2_TR(0x55431a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55431b:{NFSU2_TR(0x55431b);
__builtin_memmove((R+24),(R+4),4);
}
B55431d:{NFSU2_TR(0x55431d);
w4(R+0,u32(0xabadcafeull));
}
B554322:{NFSU2_TR(0x554322);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B554323:{NFSU2_TR(0x554323);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B554327:{NFSU2_TR(0x554327);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B55432a:{NFSU2_TR(0x55432a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B55432d:{NFSU2_TR(0x55432d);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B55432f:{NFSU2_TR(0x55432f);
u8 U[4];
w4(U+0,u32(0x79b8e0ull));
s4(u32(r4(R+24)),r4(U+0));
}
B554335:{NFSU2_TR(0x554335);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B554338:{NFSU2_TR(0x554338);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B55433b:{NFSU2_TR(0x55433b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B55433e:{NFSU2_TR(0x55433e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B554341:{NFSU2_TR(0x554341);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B554344:{NFSU2_TR(0x554344);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B554347:{NFSU2_TR(0x554347);
w4(R+0,u32(0x79a9ecull));
}
B55434c:{NFSU2_TR(0x55434c);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B554350:{NFSU2_TR(0x554350);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B554353:{NFSU2_TR(0x554353);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3cull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B554356:{NFSU2_TR(0x554356);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B554359:{NFSU2_TR(0x554359);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B55435c:{NFSU2_TR(0x55435c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B55435f:{NFSU2_TR(0x55435f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B554362:{NFSU2_TR(0x554362);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B554365:{NFSU2_TR(0x554365);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x48ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B554368:{NFSU2_TR(0x554368);
__builtin_memmove((R+0),gp(0x7f7cf8),4);
}
B55436d:{NFSU2_TR(0x55436d);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B554371:{NFSU2_TR(0x554371);
__builtin_memmove((R+4),(R+0),4);
}
B554373:{NFSU2_TR(0x554373);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B554374:{NFSU2_TR(0x554374);
__builtin_memmove(gp(0x7f7cf8),(R+0),4);
}
B554379:{NFSU2_TR(0x554379);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B55437c:{NFSU2_TR(0x55437c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B55437f:{NFSU2_TR(0x55437f);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B554382:{NFSU2_TR(0x554382);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B554383:{NFSU2_TR(0x554383);
w4(R+4,u32(0x863770ull));
}
B554388:{NFSU2_TR(0x554388);
u8 U[5];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B55438d:{NFSU2_TR(0x55438d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x554392ull));
TAIL_STATIC(0x517520u,517);
}
B554392:L554392:{c.instructions+=4;NFSU2_TR(0x554392);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B554393:{NFSU2_TR(0x554393);
w4(R+4,u32(0x863770ull));
}
B554398:{NFSU2_TR(0x554398);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B55439b:{NFSU2_TR(0x55439b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5543a0ull));
TAIL_STATIC(0x52ace0u,52a);
}
B5543a0:L5543a0:{c.instructions+=8;NFSU2_TR(0x5543a0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5543a3:{NFSU2_TR(0x5543a3);
__builtin_memmove((R+8),(R+0),4);
}
B5543a5:{NFSU2_TR(0x5543a5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5543a8:{NFSU2_TR(0x5543a8);
__builtin_memmove((R+4),(R+28),4);
}
B5543aa:{NFSU2_TR(0x5543aa);
__builtin_memmove((R+28),(R+8),4);
}
B5543ac:{NFSU2_TR(0x5543ac);
__builtin_memmove((R+8),(R+4),4);
}
B5543ae:{NFSU2_TR(0x5543ae);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B5543b1:{NFSU2_TR(0x5543b1);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5543b3:L5543b3:{c.instructions+=1;NFSU2_TR(0x5543b3);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L5543b5;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5543b3u);}goto L5543b3;}
}
B5543b5:L5543b5:{c.instructions+=2;NFSU2_TR(0x5543b5);
__builtin_memmove((R+4),(R+8),4);
}
B5543b7:{NFSU2_TR(0x5543b7);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B5543ba:L5543ba:{c.instructions+=1;NFSU2_TR(0x5543ba);
u8 U[18];
w1(U+17,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+17)){{goto L5543bc;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x1ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x2ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),1);
s1(u32(r4(U+0)),r1(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5543bau);}goto L5543ba;}
}
B5543bc:L5543bc:{c.instructions+=14;NFSU2_TR(0x5543bc);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5543bf:{NFSU2_TR(0x5543bf);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5543c2:{NFSU2_TR(0x5543c2);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5543c5:{NFSU2_TR(0x5543c5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5543c8:{NFSU2_TR(0x5543c8);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+8),(U+4),2);
}
B5543cc:{NFSU2_TR(0x5543cc);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+8),2);
s2(u32(r4(U+0)),r2(U+4));
}
B5543d0:{NFSU2_TR(0x5543d0);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x22ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+0),(U+4),2);
}
B5543d4:{NFSU2_TR(0x5543d4);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x22ull))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B5543d8:{NFSU2_TR(0x5543d8);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5543db:{NFSU2_TR(0x5543db);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5543de:{NFSU2_TR(0x5543de);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5543e1:{NFSU2_TR(0x5543e1);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5543e2:{NFSU2_TR(0x5543e2);
__builtin_memmove((R+4),(R+24),4);
}
B5543e4:{NFSU2_TR(0x5543e4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5543e9ull));
TAIL_STATIC(0x5176b0u,517);
}
B5543e9:L5543e9:{c.instructions+=4;NFSU2_TR(0x5543e9);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5543ec:{NFSU2_TR(0x5543ec);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5543ee:{NFSU2_TR(0x5543ee);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5543f2:{NFSU2_TR(0x5543f2);
if(r1(R+518)){{goto L5544c8;}}
}
B5543f8:L5543f8:{c.instructions+=1;NFSU2_TR(0x5543f8);
{goto L554400;}
}
B554400:L554400:{c.instructions+=2;NFSU2_TR(0x554400);
w4(R+4,u32(0x8637a0ull));
}
B554405:{NFSU2_TR(0x554405);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55440aull));
TAIL_STATIC(0x54bdf0u,54b);
}
B55440a:L55440a:{c.instructions+=14;NFSU2_TR(0x55440a);
__builtin_memmove((R+28),(R+0),4);
}
B55440c:{NFSU2_TR(0x55440c);
w4(R+0,u32(0xabadcafeull));
}
B554411:{NFSU2_TR(0x554411);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B554414:{NFSU2_TR(0x554414);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B554417:{NFSU2_TR(0x554417);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B55441b:{NFSU2_TR(0x55441b);
u8 U[4];
w4(U+0,u32(0x79aa38ull));
s4(u32(r4(R+28)),r4(U+0));
}
B554421:{NFSU2_TR(0x554421);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B554424:{NFSU2_TR(0x554424);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B554427:{NFSU2_TR(0x554427);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B55442a:{NFSU2_TR(0x55442a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B55442d:{NFSU2_TR(0x55442d);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55442e:{NFSU2_TR(0x55442e);
__builtin_memmove((R+4),(R+28),4);
}
B554430:{NFSU2_TR(0x554430);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B554434:{NFSU2_TR(0x554434);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x554439ull));
TAIL_STATIC(0x52ae00u,52a);
}
B554439:L554439:{c.instructions+=5;NFSU2_TR(0x554439);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w1(R+512,u8((r4(R+12))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B55443b:{NFSU2_TR(0x55443b);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B55443f:{NFSU2_TR(0x55443f);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B554442:{NFSU2_TR(0x554442);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B554445:{NFSU2_TR(0x554445);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L554473;}}
}
B554447:L554447:{c.instructions+=3;NFSU2_TR(0x554447);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B55444b:{NFSU2_TR(0x55444b);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B55444d:{NFSU2_TR(0x55444d);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B554451:L554451:{c.instructions+=7;NFSU2_TR(0x554451);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B554455:{NFSU2_TR(0x554455);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B554458:{NFSU2_TR(0x554458);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B55445b:{NFSU2_TR(0x55445b);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+12))));
}
B55445d:{NFSU2_TR(0x55445d);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55445e:{NFSU2_TR(0x55445e);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+12))));
}
B554460:{NFSU2_TR(0x554460);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x554465ull));
TAIL_STATIC(0x52ad80u,52a);
}
B554465:L554465:{c.instructions+=5;NFSU2_TR(0x554465);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B554469:{NFSU2_TR(0x554469);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0xcull))));
}
B55446c:{NFSU2_TR(0x55446c);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B55446d:{NFSU2_TR(0x55446d);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B554471:{NFSU2_TR(0x554471);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x554451u);}goto L554451;}}
}
B554473:L554473:{c.instructions+=3;NFSU2_TR(0x554473);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B554476:{NFSU2_TR(0x554476);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B554478:{NFSU2_TR(0x554478);
if(r1(R+518)){{goto L55448f;}}
}
B55447a:L55447a:{c.instructions+=4;NFSU2_TR(0x55447a);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B55447d:{NFSU2_TR(0x55447d);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B55447f:{NFSU2_TR(0x55447f);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B554482:{NFSU2_TR(0x554482);
if(r1(R+518)){{goto L554487;}}
}
B554484:L554484:{c.instructions+=1;NFSU2_TR(0x554484);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B554487:L554487:{c.instructions+=3;NFSU2_TR(0x554487);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B55448a:{NFSU2_TR(0x55448a);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B55448d:{NFSU2_TR(0x55448d);
{goto L5544a2;}
}
B55448f:L55448f:{c.instructions+=4;NFSU2_TR(0x55448f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B554492:{NFSU2_TR(0x554492);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B554494:{NFSU2_TR(0x554494);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B554497:{NFSU2_TR(0x554497);
if(r1(R+518)){{goto L55449c;}}
}
B554499:L554499:{c.instructions+=1;NFSU2_TR(0x554499);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B55449c:L55449c:{c.instructions+=2;NFSU2_TR(0x55449c);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B55449f:{NFSU2_TR(0x55449f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3cull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5544a2:L5544a2:{c.instructions+=2;NFSU2_TR(0x5544a2);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+4))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B5544a5:{NFSU2_TR(0x5544a5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5544aa;}}
}
B5544a7:L5544a7:{c.instructions+=1;NFSU2_TR(0x5544a7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5544aa:L5544aa:{c.instructions+=8;NFSU2_TR(0x5544aa);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5544ad:{NFSU2_TR(0x5544ad);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5544b1:{NFSU2_TR(0x5544b1);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B5544b2:{NFSU2_TR(0x5544b2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5544b5:{NFSU2_TR(0x5544b5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5544b8:{NFSU2_TR(0x5544b8);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5544ba:{NFSU2_TR(0x5544ba);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5544be:{NFSU2_TR(0x5544be);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x554400u);}goto L554400;}}
}
B5544c4:L5544c4:{c.instructions+=1;NFSU2_TR(0x5544c4);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B5544c8:L5544c8:{c.instructions+=3;NFSU2_TR(0x5544c8);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5544cb:{NFSU2_TR(0x5544cb);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5544cd:{NFSU2_TR(0x5544cd);
if(r1(R+518)){{goto L554552;}}
}
B5544d3:L5544d3:{c.instructions+=2;NFSU2_TR(0x5544d3);
w4(R+4,u32(0x839c30ull));
}
B5544d8:{NFSU2_TR(0x5544d8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5544ddull));
TAIL_STATIC(0x54beb0u,54b);
}
B5544dd:L5544dd:{c.instructions+=14;NFSU2_TR(0x5544dd);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5544e0:{NFSU2_TR(0x5544e0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5544e3:{NFSU2_TR(0x5544e3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5544e6:{NFSU2_TR(0x5544e6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5544e9:{NFSU2_TR(0x5544e9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5544ec:{NFSU2_TR(0x5544ec);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5544ef:{NFSU2_TR(0x5544ef);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5544f2:{NFSU2_TR(0x5544f2);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5544f6:{NFSU2_TR(0x5544f6);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5544fa:{NFSU2_TR(0x5544fa);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5544fb:{NFSU2_TR(0x5544fb);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5544fc:{NFSU2_TR(0x5544fc);
__builtin_memmove((R+4),(R+0),4);
}
B5544fe:{NFSU2_TR(0x5544fe);
u8 U[5];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
w1(U+4,u8(0x3ull));
s1(u32(r4(U+0)),r1(U+4));
}
B554503:{NFSU2_TR(0x554503);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x554508ull));
TAIL_STATIC(0x551be0u,551);
}
B554508:L554508:{c.instructions+=4;NFSU2_TR(0x554508);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B55450a:{NFSU2_TR(0x55450a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B55450d:{NFSU2_TR(0x55450d);
u8 U[5];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B554512:{NFSU2_TR(0x554512);
if(r1(R+518)){{goto L55454b;}}
}
B554514:L554514:{c.instructions+=2;NFSU2_TR(0x554514);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B554516:{NFSU2_TR(0x554516);
if(r1(R+518)){{goto L55452d;}}
}
B554518:L554518:{c.instructions+=4;NFSU2_TR(0x554518);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B55451b:{NFSU2_TR(0x55451b);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B55451d:{NFSU2_TR(0x55451d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B554520:{NFSU2_TR(0x554520);
if(r1(R+518)){{goto L554525;}}
}
B554522:L554522:{c.instructions+=1;NFSU2_TR(0x554522);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B554525:L554525:{c.instructions+=3;NFSU2_TR(0x554525);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B554528:{NFSU2_TR(0x554528);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B55452b:{NFSU2_TR(0x55452b);
{goto L554540;}
}
B55452d:L55452d:{c.instructions+=4;NFSU2_TR(0x55452d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B554530:{NFSU2_TR(0x554530);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B554532:{NFSU2_TR(0x554532);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B554535:{NFSU2_TR(0x554535);
if(r1(R+518)){{goto L55453a;}}
}
B554537:L554537:{c.instructions+=1;NFSU2_TR(0x554537);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B55453a:L55453a:{c.instructions+=2;NFSU2_TR(0x55453a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B55453d:{NFSU2_TR(0x55453d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B554540:L554540:{c.instructions+=2;NFSU2_TR(0x554540);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+4))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B554543:{NFSU2_TR(0x554543);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L554548;}}
}
B554545:L554545:{c.instructions+=1;NFSU2_TR(0x554545);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B554548:L554548:{c.instructions+=1;NFSU2_TR(0x554548);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B55454b:L55454b:{c.instructions+=3;NFSU2_TR(0x55454b);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B55454e:{NFSU2_TR(0x55454e);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B554550:{NFSU2_TR(0x554550);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5544d3u);}goto L5544d3;}}
}
B554552:L554552:{c.instructions+=3;NFSU2_TR(0x554552);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B554555:{NFSU2_TR(0x554555);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B554557:{NFSU2_TR(0x554557);
if(r1(R+518)){{goto L55456c;}}
}
B554559:L554559:{c.instructions+=3;NFSU2_TR(0x554559);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B55455c:{NFSU2_TR(0x55455c);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B55455f:{NFSU2_TR(0x55455f);
}
B554560:L554560:{c.instructions+=2;NFSU2_TR(0x554560);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+4))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B554563:{NFSU2_TR(0x554563);
if(r1(R+518)){{goto L55456c;}}
}
B554565:L554565:{c.instructions+=3;NFSU2_TR(0x554565);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B554568:{NFSU2_TR(0x554568);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B55456a:{NFSU2_TR(0x55456a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x554560u);}goto L554560;}}
}
B55456c:L55456c:{c.instructions+=3;NFSU2_TR(0x55456c);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B55456e:{NFSU2_TR(0x55456e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B554571:{NFSU2_TR(0x554571);
if(r1(R+518)){{goto L55457a;}}
}
B554573:L554573:{c.instructions+=2;NFSU2_TR(0x554573);
__builtin_memmove((R+4),(R+24),4);
}
B554575:{NFSU2_TR(0x554575);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55457aull));
TAIL_STATIC(0x517720u,517);
}
B55457a:L55457a:{c.instructions+=4;NFSU2_TR(0x55457a);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B55457d:{NFSU2_TR(0x55457d);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B55457f:{NFSU2_TR(0x55457f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B554582:{NFSU2_TR(0x554582);
if(r1(R+518)){{goto L5545ae;}}
}
B554584:L554584:{c.instructions+=3;NFSU2_TR(0x554584);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B554587:{NFSU2_TR(0x554587);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B554589:{NFSU2_TR(0x554589);
if(r1(R+518)){{goto L5545a4;}}
}
B55458b:L55458b:{c.instructions+=3;NFSU2_TR(0x55458b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B55458e:{NFSU2_TR(0x55458e);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B554590:{NFSU2_TR(0x554590);
if(r1(R+518)){{goto L5545a1;}}
}
B554592:L554592:{c.instructions+=1;NFSU2_TR(0x554592);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B554595:L554595:{c.instructions+=2;NFSU2_TR(0x554595);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+4))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B554598:{NFSU2_TR(0x554598);
if(r1(R+518)){{goto L5545a1;}}
}
B55459a:L55459a:{c.instructions+=3;NFSU2_TR(0x55459a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B55459d:{NFSU2_TR(0x55459d);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B55459f:{NFSU2_TR(0x55459f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x554595u);}goto L554595;}}
}
B5545a1:L5545a1:{c.instructions+=1;NFSU2_TR(0x5545a1);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5545a4:L5545a4:{c.instructions+=4;NFSU2_TR(0x5545a4);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B5545a7:{NFSU2_TR(0x5545a7);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5545a9:{NFSU2_TR(0x5545a9);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5545ac:{NFSU2_TR(0x5545ac);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x554584u);}goto L554584;}}
}
B5545ae:L5545ae:{c.instructions+=9;NFSU2_TR(0x5545ae);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5545b2:{NFSU2_TR(0x5545b2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5545b3:{NFSU2_TR(0x5545b3);
__builtin_memmove((R+0),(R+24),4);
}
B5545b5:{NFSU2_TR(0x5545b5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5545b6:{NFSU2_TR(0x5545b6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5545b7:{NFSU2_TR(0x5545b7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5545b8:{NFSU2_TR(0x5545b8);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5545bf:{NFSU2_TR(0x5545bf);
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
B5545c2:{NFSU2_TR(0x5545c2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5545d0:L5545d0:{c.instructions+=10;NFSU2_TR(0x5545d0);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5545d2:{NFSU2_TR(0x5545d2);
u8 U[4];
w4(U+0,u32(0x77806bull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5545d7:{NFSU2_TR(0x5545d7);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5545dd:{NFSU2_TR(0x5545dd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5545de:{NFSU2_TR(0x5545de);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5545e5:{NFSU2_TR(0x5545e5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5545e6:{NFSU2_TR(0x5545e6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5545e7:{NFSU2_TR(0x5545e7);
u8 U[4];
w4(U+0,u32(0x5cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5545e9:{NFSU2_TR(0x5545e9);
__builtin_memmove((R+24),(R+4),4);
}
B5545eb:{NFSU2_TR(0x5545eb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5545f0ull));
TAIL_STATIC(0x575620u,575);
}
B5545f0:L5545f0:{c.instructions+=5;NFSU2_TR(0x5545f0);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5545f3:{NFSU2_TR(0x5545f3);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5545f7:{NFSU2_TR(0x5545f7);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5545f9:{NFSU2_TR(0x5545f9);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B554601:{NFSU2_TR(0x554601);
if(r1(R+518)){{goto L554622;}}
}
B554603:L554603:{c.instructions+=5;NFSU2_TR(0x554603);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B554607:{NFSU2_TR(0x554607);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B554608:{NFSU2_TR(0x554608);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B554609:{NFSU2_TR(0x554609);
__builtin_memmove((R+4),(R+0),4);
}
B55460b:{NFSU2_TR(0x55460b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x554610ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x554300u);}goto L554300;}
}
B554610:L554610:{c.instructions+=5;NFSU2_TR(0x554610);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B554611:{NFSU2_TR(0x554611);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B554615:{NFSU2_TR(0x554615);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B55461c:{NFSU2_TR(0x55461c);
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
B55461f:{NFSU2_TR(0x55461f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B554622:L554622:{c.instructions+=6;NFSU2_TR(0x554622);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B554626:{NFSU2_TR(0x554626);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B554628:{NFSU2_TR(0x554628);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B554629:{NFSU2_TR(0x554629);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B554630:{NFSU2_TR(0x554630);
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
B554633:{NFSU2_TR(0x554633);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B554640:L554640:{c.instructions+=11;NFSU2_TR(0x554640);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B554642:{NFSU2_TR(0x554642);
u8 U[4];
w4(U+0,u32(0x77806bull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B554647:{NFSU2_TR(0x554647);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B55464d:{NFSU2_TR(0x55464d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55464e:{NFSU2_TR(0x55464e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B554655:{NFSU2_TR(0x554655);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B554656:{NFSU2_TR(0x554656);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B554657:{NFSU2_TR(0x554657);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B554658:{NFSU2_TR(0x554658);
u8 U[4];
w4(U+0,u32(0x60ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55465a:{NFSU2_TR(0x55465a);
__builtin_memmove((R+28),(R+4),4);
}
B55465c:{NFSU2_TR(0x55465c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x554661ull));
TAIL_STATIC(0x575620u,575);
}
B554661:L554661:{c.instructions+=7;NFSU2_TR(0x554661);
__builtin_memmove((R+24),(R+0),4);
}
B554663:{NFSU2_TR(0x554663);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B554666:{NFSU2_TR(0x554666);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B55466a:{NFSU2_TR(0x55466a);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B55466c:{NFSU2_TR(0x55466c);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B55466e:{NFSU2_TR(0x55466e);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B554672:{NFSU2_TR(0x554672);
if(r1(R+518)){{goto L55468f;}}
}
B554674:L554674:{c.instructions+=5;NFSU2_TR(0x554674);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B554678:{NFSU2_TR(0x554678);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B554679:{NFSU2_TR(0x554679);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55467a:{NFSU2_TR(0x55467a);
__builtin_memmove((R+4),(R+24),4);
}
B55467c:{NFSU2_TR(0x55467c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x554681ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x554300u);}goto L554300;}
}
B554681:L554681:{c.instructions+=4;NFSU2_TR(0x554681);
u8 U[4];
w4(U+0,u32(0x79b8f0ull));
s4(u32(r4(R+24)),r4(U+0));
}
B554687:{NFSU2_TR(0x554687);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B55468a:{NFSU2_TR(0x55468a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B55468d:{NFSU2_TR(0x55468d);
__builtin_memmove((R+0),(R+24),4);
}
B55468f:L55468f:{c.instructions+=6;NFSU2_TR(0x55468f);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B554693:{NFSU2_TR(0x554693);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B554694:{NFSU2_TR(0x554694);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B554695:{NFSU2_TR(0x554695);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B55469c:{NFSU2_TR(0x55469c);
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
B55469f:{NFSU2_TR(0x55469f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5546b0:L5546b0:{c.instructions+=11;NFSU2_TR(0x5546b0);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5546b2:{NFSU2_TR(0x5546b2);
u8 U[4];
w4(U+0,u32(0x77806bull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5546b7:{NFSU2_TR(0x5546b7);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5546bd:{NFSU2_TR(0x5546bd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5546be:{NFSU2_TR(0x5546be);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5546c5:{NFSU2_TR(0x5546c5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5546c6:{NFSU2_TR(0x5546c6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5546c7:{NFSU2_TR(0x5546c7);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5546c8:{NFSU2_TR(0x5546c8);
u8 U[4];
w4(U+0,u32(0x5cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5546ca:{NFSU2_TR(0x5546ca);
__builtin_memmove((R+28),(R+4),4);
}
B5546cc:{NFSU2_TR(0x5546cc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5546d1ull));
TAIL_STATIC(0x575620u,575);
}
B5546d1:L5546d1:{c.instructions+=7;NFSU2_TR(0x5546d1);
__builtin_memmove((R+24),(R+0),4);
}
B5546d3:{NFSU2_TR(0x5546d3);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5546d6:{NFSU2_TR(0x5546d6);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5546da:{NFSU2_TR(0x5546da);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5546dc:{NFSU2_TR(0x5546dc);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5546de:{NFSU2_TR(0x5546de);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5546e2:{NFSU2_TR(0x5546e2);
if(r1(R+518)){{goto L5546f9;}}
}
B5546e4:L5546e4:{c.instructions+=5;NFSU2_TR(0x5546e4);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5546e8:{NFSU2_TR(0x5546e8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5546e9:{NFSU2_TR(0x5546e9);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5546ea:{NFSU2_TR(0x5546ea);
__builtin_memmove((R+4),(R+24),4);
}
B5546ec:{NFSU2_TR(0x5546ec);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5546f1ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x554300u);}goto L554300;}
}
B5546f1:L5546f1:{c.instructions+=2;NFSU2_TR(0x5546f1);
u8 U[4];
w4(U+0,u32(0x79b8fcull));
s4(u32(r4(R+24)),r4(U+0));
}
B5546f7:{NFSU2_TR(0x5546f7);
__builtin_memmove((R+0),(R+24),4);
}
B5546f9:L5546f9:{c.instructions+=6;NFSU2_TR(0x5546f9);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5546fd:{NFSU2_TR(0x5546fd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5546fe:{NFSU2_TR(0x5546fe);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5546ff:{NFSU2_TR(0x5546ff);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B554706:{NFSU2_TR(0x554706);
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
B554709:{NFSU2_TR(0x554709);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B554710:L554710:{c.instructions+=15;NFSU2_TR(0x554710);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B554712:{NFSU2_TR(0x554712);
u8 U[4];
w4(U+0,u32(0x7774d8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B554717:{NFSU2_TR(0x554717);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B55471d:{NFSU2_TR(0x55471d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55471e:{NFSU2_TR(0x55471e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B554725:{NFSU2_TR(0x554725);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B554726:{NFSU2_TR(0x554726);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B55472a:{NFSU2_TR(0x55472a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55472b:{NFSU2_TR(0x55472b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55472c:{NFSU2_TR(0x55472c);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B554730:{NFSU2_TR(0x554730);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B554731:{NFSU2_TR(0x554731);
__builtin_memmove((R+24),(R+4),4);
}
B554733:{NFSU2_TR(0x554733);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B554734:{NFSU2_TR(0x554734);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B554738:{NFSU2_TR(0x554738);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55473dull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x554300u);}goto L554300;}
}
B55473d:L55473d:{c.instructions+=42;NFSU2_TR(0x55473d);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B55473f:{NFSU2_TR(0x55473f);
u8 U[4];
w4(U+0,u32(0x79b904ull));
s4(u32(r4(R+24)),r4(U+0));
}
B554745:{NFSU2_TR(0x554745);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B554748:{NFSU2_TR(0x554748);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B55474b:{NFSU2_TR(0x55474b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B55474e:{NFSU2_TR(0x55474e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x64ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B554751:{NFSU2_TR(0x554751);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x68ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B554754:{NFSU2_TR(0x554754);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B554757:{NFSU2_TR(0x554757);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B55475a:{NFSU2_TR(0x55475a);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B55475d:{NFSU2_TR(0x55475d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x70ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B554760:{NFSU2_TR(0x554760);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x74ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B554763:{NFSU2_TR(0x554763);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x78ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B554766:{NFSU2_TR(0x554766);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B554769:{NFSU2_TR(0x554769);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x80ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B55476f:{NFSU2_TR(0x55476f);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x84ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B554775:{NFSU2_TR(0x554775);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x84ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B55477b:{NFSU2_TR(0x55477b);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x88ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B554781:{NFSU2_TR(0x554781);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B554787:{NFSU2_TR(0x554787);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x90ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B55478d:{NFSU2_TR(0x55478d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x94ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B554793:{NFSU2_TR(0x554793);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x98ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B554799:{NFSU2_TR(0x554799);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x9cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B55479f:{NFSU2_TR(0x55479f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5547a5:{NFSU2_TR(0x5547a5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x88ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5547ab:{NFSU2_TR(0x5547ab);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa4ull))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5547b5:{NFSU2_TR(0x5547b5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa8ull))));
w4(U+4,u32(0xbab60b61ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5547bf:{NFSU2_TR(0x5547bf);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5547c3:{NFSU2_TR(0x5547c3);
w4(R+0,u32(0xffull));
}
B5547c8:{NFSU2_TR(0x5547c8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5547ce:{NFSU2_TR(0x5547ce);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5547d4:{NFSU2_TR(0x5547d4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5547da:{NFSU2_TR(0x5547da);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xacull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5547e0:{NFSU2_TR(0x5547e0);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xbcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5547e6:{NFSU2_TR(0x5547e6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xbcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5547ec:{NFSU2_TR(0x5547ec);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xc0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5547f2:{NFSU2_TR(0x5547f2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5547f8:{NFSU2_TR(0x5547f8);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xc4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5547fe:{NFSU2_TR(0x5547fe);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B554804:{NFSU2_TR(0x554804);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B554805:{NFSU2_TR(0x554805);
__builtin_memmove((R+4),(R+24),4);
}
B554807:{NFSU2_TR(0x554807);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55480cull));
TAIL_STATIC(0x5352d0u,535);
}
B55480c:L55480c:{c.instructions+=7;NFSU2_TR(0x55480c);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B554810:{NFSU2_TR(0x554810);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B554811:{NFSU2_TR(0x554811);
__builtin_memmove((R+0),(R+24),4);
}
B554813:{NFSU2_TR(0x554813);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B554814:{NFSU2_TR(0x554814);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B55481b:{NFSU2_TR(0x55481b);
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
B55481e:{NFSU2_TR(0x55481e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B554830:L554830:{c.instructions+=10;NFSU2_TR(0x554830);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B554832:{NFSU2_TR(0x554832);
u8 U[4];
w4(U+0,u32(0x77806bull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B554837:{NFSU2_TR(0x554837);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B55483d:{NFSU2_TR(0x55483d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55483e:{NFSU2_TR(0x55483e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B554845:{NFSU2_TR(0x554845);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B554846:{NFSU2_TR(0x554846);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B554847:{NFSU2_TR(0x554847);
u8 U[4];
w4(U+0,u32(0xc8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55484c:{NFSU2_TR(0x55484c);
__builtin_memmove((R+24),(R+4),4);
}
B55484e:{NFSU2_TR(0x55484e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x554853ull));
TAIL_STATIC(0x575620u,575);
}
B554853:L554853:{c.instructions+=5;NFSU2_TR(0x554853);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B554856:{NFSU2_TR(0x554856);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B55485a:{NFSU2_TR(0x55485a);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B55485c:{NFSU2_TR(0x55485c);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B554864:{NFSU2_TR(0x554864);
if(r1(R+518)){{goto L554885;}}
}
B554866:L554866:{c.instructions+=5;NFSU2_TR(0x554866);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B55486a:{NFSU2_TR(0x55486a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55486b:{NFSU2_TR(0x55486b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55486c:{NFSU2_TR(0x55486c);
__builtin_memmove((R+4),(R+0),4);
}
B55486e:{NFSU2_TR(0x55486e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x554873ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x554710u);}goto L554710;}
}
B554873:L554873:{c.instructions+=5;NFSU2_TR(0x554873);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B554874:{NFSU2_TR(0x554874);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B554878:{NFSU2_TR(0x554878);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B55487f:{NFSU2_TR(0x55487f);
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
B554882:{NFSU2_TR(0x554882);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B554885:L554885:{c.instructions+=6;NFSU2_TR(0x554885);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B554889:{NFSU2_TR(0x554889);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B55488b:{NFSU2_TR(0x55488b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B55488c:{NFSU2_TR(0x55488c);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B554893:{NFSU2_TR(0x554893);
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
B554896:{NFSU2_TR(0x554896);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5548a0:L5548a0:{c.instructions+=17;NFSU2_TR(0x5548a0);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5548a2:{NFSU2_TR(0x5548a2);
u8 U[4];
w4(U+0,u32(0x777eb3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5548a7:{NFSU2_TR(0x5548a7);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5548ad:{NFSU2_TR(0x5548ad);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5548ae:{NFSU2_TR(0x5548ae);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5548b5:{NFSU2_TR(0x5548b5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5548b6:{NFSU2_TR(0x5548b6);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5548b7:{NFSU2_TR(0x5548b7);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5548b8:{NFSU2_TR(0x5548b8);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B5548bc:{NFSU2_TR(0x5548bc);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5548bd:{NFSU2_TR(0x5548bd);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5548be:{NFSU2_TR(0x5548be);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5548c2:{NFSU2_TR(0x5548c2);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5548c3:{NFSU2_TR(0x5548c3);
__builtin_memmove((R+24),(R+4),4);
}
B5548c5:{NFSU2_TR(0x5548c5);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5548c6:{NFSU2_TR(0x5548c6);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5548ca:{NFSU2_TR(0x5548ca);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5548cfull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x554300u);}goto L554300;}
}
B5548cf:L5548cf:{c.instructions+=10;NFSU2_TR(0x5548cf);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B5548d1:{NFSU2_TR(0x5548d1);
u8 U[4];
w4(U+0,u32(0x79b8e8ull));
s4(u32(r4(R+24)),r4(U+0));
}
B5548d7:{NFSU2_TR(0x5548d7);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5548db:{NFSU2_TR(0x5548db);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
w4(U+4,u32(0x79a9ecull));
s4(u32(r4(U+0)),r4(U+4));
}
B5548e2:{NFSU2_TR(0x5548e2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x64ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5548e5:{NFSU2_TR(0x5548e5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x68ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5548e8:{NFSU2_TR(0x5548e8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5548eb:{NFSU2_TR(0x5548eb);
u8 U[7];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(r1(R+12))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B5548ef:{NFSU2_TR(0x5548ef);
u8 U[5];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5548f4:{NFSU2_TR(0x5548f4);
if(r1(R+518)){{goto L55494d;}}
}
B5548f6:L5548f6:{c.instructions+=3;NFSU2_TR(0x5548f6);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5548f9:{NFSU2_TR(0x5548f9);
u8 U[14];
__builtin_memmove((U+6),(R+12),4);
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
B5548fb:{NFSU2_TR(0x5548fb);
if(r1(R+518)){{goto L55494d;}}
}
B5548fd:L5548fd:{c.instructions+=1;NFSU2_TR(0x5548fd);
__builtin_memmove((R+4),(R+4),4);
}
B554900:L554900:{c.instructions+=4;NFSU2_TR(0x554900);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B554902:{NFSU2_TR(0x554902);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B554903:{NFSU2_TR(0x554903);
__builtin_memmove((R+4),(R+28),4);
}
B554905:{NFSU2_TR(0x554905);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x554908ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B554908:L554908:{c.instructions+=3;NFSU2_TR(0x554908);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B55490a:{NFSU2_TR(0x55490a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B55490d:{NFSU2_TR(0x55490d);
if(r1(R+518)){{goto L554946;}}
}
B55490f:L55490f:{c.instructions+=2;NFSU2_TR(0x55490f);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B554911:{NFSU2_TR(0x554911);
if(r1(R+518)){{goto L554928;}}
}
B554913:L554913:{c.instructions+=4;NFSU2_TR(0x554913);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B554916:{NFSU2_TR(0x554916);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B554918:{NFSU2_TR(0x554918);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B55491b:{NFSU2_TR(0x55491b);
if(r1(R+518)){{goto L554920;}}
}
B55491d:L55491d:{c.instructions+=1;NFSU2_TR(0x55491d);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B554920:L554920:{c.instructions+=3;NFSU2_TR(0x554920);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B554923:{NFSU2_TR(0x554923);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B554926:{NFSU2_TR(0x554926);
{goto L55493b;}
}
B554928:L554928:{c.instructions+=4;NFSU2_TR(0x554928);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B55492b:{NFSU2_TR(0x55492b);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B55492d:{NFSU2_TR(0x55492d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B554930:{NFSU2_TR(0x554930);
if(r1(R+518)){{goto L554935;}}
}
B554932:L554932:{c.instructions+=1;NFSU2_TR(0x554932);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B554935:L554935:{c.instructions+=2;NFSU2_TR(0x554935);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B554938:{NFSU2_TR(0x554938);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x64ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B55493b:L55493b:{c.instructions+=2;NFSU2_TR(0x55493b);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B55493e:{NFSU2_TR(0x55493e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L554943;}}
}
B554940:L554940:{c.instructions+=1;NFSU2_TR(0x554940);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x68ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B554943:L554943:{c.instructions+=1;NFSU2_TR(0x554943);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B554946:L554946:{c.instructions+=3;NFSU2_TR(0x554946);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B554949:{NFSU2_TR(0x554949);
u8 U[14];
__builtin_memmove((U+6),(R+12),4);
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
B55494b:{NFSU2_TR(0x55494b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x554900u);}goto L554900;}}
}
B55494d:L55494d:{c.instructions+=9;NFSU2_TR(0x55494d);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B554951:{NFSU2_TR(0x554951);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B554952:{NFSU2_TR(0x554952);
__builtin_memmove((R+0),(R+24),4);
}
B554954:{NFSU2_TR(0x554954);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B554955:{NFSU2_TR(0x554955);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B554956:{NFSU2_TR(0x554956);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B554957:{NFSU2_TR(0x554957);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B55495e:{NFSU2_TR(0x55495e);
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
B554961:{NFSU2_TR(0x554961);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B554970:L554970:{c.instructions+=16;NFSU2_TR(0x554970);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B554972:{NFSU2_TR(0x554972);
u8 U[4];
w4(U+0,u32(0x777ed3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B554977:{NFSU2_TR(0x554977);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B55497d:{NFSU2_TR(0x55497d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55497e:{NFSU2_TR(0x55497e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B554985:{NFSU2_TR(0x554985);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B554986:{NFSU2_TR(0x554986);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B55498a:{NFSU2_TR(0x55498a);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55498b:{NFSU2_TR(0x55498b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55498c:{NFSU2_TR(0x55498c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55498d:{NFSU2_TR(0x55498d);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B554991:{NFSU2_TR(0x554991);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B554992:{NFSU2_TR(0x554992);
__builtin_memmove((R+24),(R+4),4);
}
B554994:{NFSU2_TR(0x554994);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B554995:{NFSU2_TR(0x554995);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B554999:{NFSU2_TR(0x554999);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55499eull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x554300u);}goto L554300;}
}
B55499e:L55499e:{c.instructions+=9;NFSU2_TR(0x55499e);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x64ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5549a1:{NFSU2_TR(0x5549a1);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5549a3:{NFSU2_TR(0x5549a3);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x64ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5549a6:{NFSU2_TR(0x5549a6);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5549a7:{NFSU2_TR(0x5549a7);
__builtin_memmove((R+4),(R+12),4);
}
B5549a9:{NFSU2_TR(0x5549a9);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5549ad:{NFSU2_TR(0x5549ad);
u8 U[4];
w4(U+0,u32(0x78f53cull));
s4(u32(r4(R+24)),r4(U+0));
}
B5549b3:{NFSU2_TR(0x5549b3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5549b6:{NFSU2_TR(0x5549b6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5549bbull));
TAIL_STATIC(0x537ff0u,537);
}
B5549bb:L5549bb:{c.instructions+=11;NFSU2_TR(0x5549bb);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5549be:{NFSU2_TR(0x5549be);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5549c1:{NFSU2_TR(0x5549c1);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5549c4:{NFSU2_TR(0x5549c4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x70ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5549c7:{NFSU2_TR(0x5549c7);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x74ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5549ca:{NFSU2_TR(0x5549ca);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x74ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5549cd:{NFSU2_TR(0x5549cd);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5549d0:{NFSU2_TR(0x5549d0);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5549d1:{NFSU2_TR(0x5549d1);
__builtin_memmove((R+4),(R+24),4);
}
B5549d3:{NFSU2_TR(0x5549d3);
u8 U[5];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5549d8:{NFSU2_TR(0x5549d8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5549ddull));
TAIL_STATIC(0x519f40u,519);
}
B5549dd:L5549dd:{c.instructions+=4;NFSU2_TR(0x5549dd);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5549e0:{NFSU2_TR(0x5549e0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5549e1:{NFSU2_TR(0x5549e1);
__builtin_memmove((R+4),(R+12),4);
}
B5549e3:{NFSU2_TR(0x5549e3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5549e8ull));
TAIL_STATIC(0x51de90u,51d);
}
B5549e8:L5549e8:{c.instructions+=8;NFSU2_TR(0x5549e8);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5549ec:{NFSU2_TR(0x5549ec);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5549ed:{NFSU2_TR(0x5549ed);
__builtin_memmove((R+0),(R+24),4);
}
B5549ef:{NFSU2_TR(0x5549ef);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5549f0:{NFSU2_TR(0x5549f0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5549f1:{NFSU2_TR(0x5549f1);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5549f8:{NFSU2_TR(0x5549f8);
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
B5549fb:{NFSU2_TR(0x5549fb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B554a00:L554a00:{c.instructions+=8;NFSU2_TR(0x554a00);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B554a02:{NFSU2_TR(0x554a02);
u8 U[4];
w4(U+0,u32(0x777ef4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B554a07:{NFSU2_TR(0x554a07);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B554a0d:{NFSU2_TR(0x554a0d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B554a0e:{NFSU2_TR(0x554a0e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B554a15:{NFSU2_TR(0x554a15);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B554a16:{NFSU2_TR(0x554a16);
u8 U[4];
w4(U+0,u32(0x88ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B554a1b:{NFSU2_TR(0x554a1b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x554a20ull));
TAIL_STATIC(0x575620u,575);
}
B554a20:L554a20:{c.instructions+=5;NFSU2_TR(0x554a20);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B554a23:{NFSU2_TR(0x554a23);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+16)),r4(U+0));
}
B554a27:{NFSU2_TR(0x554a27);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B554a29:{NFSU2_TR(0x554a29);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B554a31:{NFSU2_TR(0x554a31);
if(r1(R+518)){{goto L554a4e;}}
}
B554a33:L554a33:{c.instructions+=4;NFSU2_TR(0x554a33);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B554a37:{NFSU2_TR(0x554a37);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B554a38:{NFSU2_TR(0x554a38);
__builtin_memmove((R+4),(R+0),4);
}
B554a3a:{NFSU2_TR(0x554a3a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x554a3full));
TAIL_STATIC(0x552eb0u,552);
}
B554a3f:L554a3f:{c.instructions+=4;NFSU2_TR(0x554a3f);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B554a43:{NFSU2_TR(0x554a43);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B554a4a:{NFSU2_TR(0x554a4a);
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
B554a4d:{NFSU2_TR(0x554a4d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B554a4e:L554a4e:{c.instructions+=5;NFSU2_TR(0x554a4e);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B554a52:{NFSU2_TR(0x554a52);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B554a54:{NFSU2_TR(0x554a54);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B554a5b:{NFSU2_TR(0x554a5b);
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
B554a5e:{NFSU2_TR(0x554a5e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B554a60:L554a60:{c.instructions+=8;NFSU2_TR(0x554a60);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B554a62:{NFSU2_TR(0x554a62);
u8 U[4];
w4(U+0,u32(0x777f14ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B554a67:{NFSU2_TR(0x554a67);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B554a6d:{NFSU2_TR(0x554a6d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B554a6e:{NFSU2_TR(0x554a6e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B554a75:{NFSU2_TR(0x554a75);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B554a76:{NFSU2_TR(0x554a76);
u8 U[4];
w4(U+0,u32(0x150ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B554a7b:{NFSU2_TR(0x554a7b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x554a80ull));
TAIL_STATIC(0x575620u,575);
}
B554a80:L554a80:{c.instructions+=5;NFSU2_TR(0x554a80);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B554a83:{NFSU2_TR(0x554a83);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+16)),r4(U+0));
}
B554a87:{NFSU2_TR(0x554a87);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B554a89:{NFSU2_TR(0x554a89);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B554a91:{NFSU2_TR(0x554a91);
if(r1(R+518)){{goto L554aae;}}
}
B554a93:L554a93:{c.instructions+=4;NFSU2_TR(0x554a93);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B554a97:{NFSU2_TR(0x554a97);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B554a98:{NFSU2_TR(0x554a98);
__builtin_memmove((R+4),(R+0),4);
}
B554a9a:{NFSU2_TR(0x554a9a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x554a9full));
TAIL_STATIC(0x553070u,553);
}
B554a9f:L554a9f:{c.instructions+=4;NFSU2_TR(0x554a9f);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B554aa3:{NFSU2_TR(0x554aa3);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B554aaa:{NFSU2_TR(0x554aaa);
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
B554aad:{NFSU2_TR(0x554aad);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B554aae:L554aae:{c.instructions+=5;NFSU2_TR(0x554aae);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B554ab2:{NFSU2_TR(0x554ab2);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B554ab4:{NFSU2_TR(0x554ab4);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B554abb:{NFSU2_TR(0x554abb);
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
B554abe:{NFSU2_TR(0x554abe);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B554ac0:L554ac0:{c.instructions+=8;NFSU2_TR(0x554ac0);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B554ac2:{NFSU2_TR(0x554ac2);
u8 U[4];
w4(U+0,u32(0x777f34ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B554ac7:{NFSU2_TR(0x554ac7);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B554acd:{NFSU2_TR(0x554acd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B554ace:{NFSU2_TR(0x554ace);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B554ad5:{NFSU2_TR(0x554ad5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B554ad6:{NFSU2_TR(0x554ad6);
u8 U[4];
w4(U+0,u32(0x178ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B554adb:{NFSU2_TR(0x554adb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x554ae0ull));
TAIL_STATIC(0x575620u,575);
}
B554ae0:L554ae0:{c.instructions+=5;NFSU2_TR(0x554ae0);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B554ae3:{NFSU2_TR(0x554ae3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+16)),r4(U+0));
}
B554ae7:{NFSU2_TR(0x554ae7);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B554ae9:{NFSU2_TR(0x554ae9);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B554af1:{NFSU2_TR(0x554af1);
if(r1(R+518)){{goto L554b0e;}}
}
B554af3:L554af3:{c.instructions+=4;NFSU2_TR(0x554af3);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B554af7:{NFSU2_TR(0x554af7);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B554af8:{NFSU2_TR(0x554af8);
__builtin_memmove((R+4),(R+0),4);
}
B554afa:{NFSU2_TR(0x554afa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x554affull));
TAIL_STATIC(0x5530f0u,553);
}
B554aff:L554aff:{c.instructions+=4;NFSU2_TR(0x554aff);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B554b03:{NFSU2_TR(0x554b03);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B554b0a:{NFSU2_TR(0x554b0a);
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
B554b0d:{NFSU2_TR(0x554b0d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B554b0e:L554b0e:{c.instructions+=5;NFSU2_TR(0x554b0e);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B554b12:{NFSU2_TR(0x554b12);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B554b14:{NFSU2_TR(0x554b14);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B554b1b:{NFSU2_TR(0x554b1b);
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
B554b1e:{NFSU2_TR(0x554b1e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B554b20:L554b20:{c.instructions+=8;NFSU2_TR(0x554b20);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B554b22:{NFSU2_TR(0x554b22);
u8 U[4];
w4(U+0,u32(0x777f54ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B554b27:{NFSU2_TR(0x554b27);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B554b2d:{NFSU2_TR(0x554b2d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B554b2e:{NFSU2_TR(0x554b2e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B554b35:{NFSU2_TR(0x554b35);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B554b36:{NFSU2_TR(0x554b36);
u8 U[4];
w4(U+0,u32(0x154ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B554b3b:{NFSU2_TR(0x554b3b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x554b40ull));
TAIL_STATIC(0x575620u,575);
}
B554b40:L554b40:{c.instructions+=5;NFSU2_TR(0x554b40);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B554b43:{NFSU2_TR(0x554b43);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+16)),r4(U+0));
}
B554b47:{NFSU2_TR(0x554b47);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B554b49:{NFSU2_TR(0x554b49);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B554b51:{NFSU2_TR(0x554b51);
if(r1(R+518)){{goto L554b6e;}}
}
B554b53:L554b53:{c.instructions+=4;NFSU2_TR(0x554b53);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B554b57:{NFSU2_TR(0x554b57);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B554b58:{NFSU2_TR(0x554b58);
__builtin_memmove((R+4),(R+0),4);
}
B554b5a:{NFSU2_TR(0x554b5a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x554b5full));
TAIL_STATIC(0x553200u,553);
}
B554b5f:L554b5f:{c.instructions+=4;NFSU2_TR(0x554b5f);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B554b63:{NFSU2_TR(0x554b63);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B554b6a:{NFSU2_TR(0x554b6a);
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
B554b6d:{NFSU2_TR(0x554b6d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B554b6e:L554b6e:{c.instructions+=5;NFSU2_TR(0x554b6e);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B554b72:{NFSU2_TR(0x554b72);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B554b74:{NFSU2_TR(0x554b74);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B554b7b:{NFSU2_TR(0x554b7b);
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
B554b7e:{NFSU2_TR(0x554b7e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B554b80:L554b80:{c.instructions+=8;NFSU2_TR(0x554b80);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B554b82:{NFSU2_TR(0x554b82);
u8 U[4];
w4(U+0,u32(0x777f74ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B554b87:{NFSU2_TR(0x554b87);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B554b8d:{NFSU2_TR(0x554b8d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B554b8e:{NFSU2_TR(0x554b8e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B554b95:{NFSU2_TR(0x554b95);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B554b96:{NFSU2_TR(0x554b96);
u8 U[4];
w4(U+0,u32(0x14cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B554b9b:{NFSU2_TR(0x554b9b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x554ba0ull));
TAIL_STATIC(0x575620u,575);
}
B554ba0:L554ba0:{c.instructions+=5;NFSU2_TR(0x554ba0);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B554ba3:{NFSU2_TR(0x554ba3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+16)),r4(U+0));
}
B554ba7:{NFSU2_TR(0x554ba7);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B554ba9:{NFSU2_TR(0x554ba9);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B554bb1:{NFSU2_TR(0x554bb1);
if(r1(R+518)){{goto L554bce;}}
}
B554bb3:L554bb3:{c.instructions+=4;NFSU2_TR(0x554bb3);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B554bb7:{NFSU2_TR(0x554bb7);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B554bb8:{NFSU2_TR(0x554bb8);
__builtin_memmove((R+4),(R+0),4);
}
B554bba:{NFSU2_TR(0x554bba);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x554bbfull));
TAIL_STATIC(0x5532b0u,553);
}
B554bbf:L554bbf:{c.instructions+=4;NFSU2_TR(0x554bbf);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B554bc3:{NFSU2_TR(0x554bc3);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B554bca:{NFSU2_TR(0x554bca);
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
B554bcd:{NFSU2_TR(0x554bcd);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B554bce:L554bce:{c.instructions+=5;NFSU2_TR(0x554bce);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B554bd2:{NFSU2_TR(0x554bd2);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B554bd4:{NFSU2_TR(0x554bd4);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B554bdb:{NFSU2_TR(0x554bdb);
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
B554bde:{NFSU2_TR(0x554bde);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B554be0:L554be0:{c.instructions+=8;NFSU2_TR(0x554be0);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B554be2:{NFSU2_TR(0x554be2);
u8 U[4];
w4(U+0,u32(0x777f94ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B554be7:{NFSU2_TR(0x554be7);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B554bed:{NFSU2_TR(0x554bed);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B554bee:{NFSU2_TR(0x554bee);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B554bf5:{NFSU2_TR(0x554bf5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B554bf6:{NFSU2_TR(0x554bf6);
u8 U[4];
w4(U+0,u32(0x120ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B554bfb:{NFSU2_TR(0x554bfb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x554c00ull));
TAIL_STATIC(0x575620u,575);
}
B554c00:L554c00:{c.instructions+=5;NFSU2_TR(0x554c00);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B554c03:{NFSU2_TR(0x554c03);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+16)),r4(U+0));
}
B554c07:{NFSU2_TR(0x554c07);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B554c09:{NFSU2_TR(0x554c09);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B554c11:{NFSU2_TR(0x554c11);
if(r1(R+518)){{goto L554c2e;}}
}
B554c13:L554c13:{c.instructions+=4;NFSU2_TR(0x554c13);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B554c17:{NFSU2_TR(0x554c17);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B554c18:{NFSU2_TR(0x554c18);
__builtin_memmove((R+4),(R+0),4);
}
B554c1a:{NFSU2_TR(0x554c1a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x554c1full));
TAIL_STATIC(0x553310u,553);
}
B554c1f:L554c1f:{c.instructions+=4;NFSU2_TR(0x554c1f);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B554c23:{NFSU2_TR(0x554c23);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B554c2a:{NFSU2_TR(0x554c2a);
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
B554c2d:{NFSU2_TR(0x554c2d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B554c2e:L554c2e:{c.instructions+=5;NFSU2_TR(0x554c2e);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B554c32:{NFSU2_TR(0x554c32);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B554c34:{NFSU2_TR(0x554c34);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B554c3b:{NFSU2_TR(0x554c3b);
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
B554c3e:{NFSU2_TR(0x554c3e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B554c40:L554c40:{c.instructions+=8;NFSU2_TR(0x554c40);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B554c42:{NFSU2_TR(0x554c42);
u8 U[4];
w4(U+0,u32(0x777fb4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B554c47:{NFSU2_TR(0x554c47);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B554c4d:{NFSU2_TR(0x554c4d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B554c4e:{NFSU2_TR(0x554c4e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B554c55:{NFSU2_TR(0x554c55);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B554c56:{NFSU2_TR(0x554c56);
u8 U[4];
w4(U+0,u32(0x164ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B554c5b:{NFSU2_TR(0x554c5b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x554c60ull));
TAIL_STATIC(0x575620u,575);
}
B554c60:L554c60:{c.instructions+=5;NFSU2_TR(0x554c60);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B554c63:{NFSU2_TR(0x554c63);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+16)),r4(U+0));
}
B554c67:{NFSU2_TR(0x554c67);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B554c69:{NFSU2_TR(0x554c69);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B554c71:{NFSU2_TR(0x554c71);
if(r1(R+518)){{goto L554c8e;}}
}
B554c73:L554c73:{c.instructions+=4;NFSU2_TR(0x554c73);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B554c77:{NFSU2_TR(0x554c77);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B554c78:{NFSU2_TR(0x554c78);
__builtin_memmove((R+4),(R+0),4);
}
B554c7a:{NFSU2_TR(0x554c7a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x554c7full));
TAIL_STATIC(0x5534f0u,553);
}
B554c7f:L554c7f:{c.instructions+=4;NFSU2_TR(0x554c7f);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B554c83:{NFSU2_TR(0x554c83);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B554c8a:{NFSU2_TR(0x554c8a);
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
B554c8d:{NFSU2_TR(0x554c8d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B554c8e:L554c8e:{c.instructions+=5;NFSU2_TR(0x554c8e);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B554c92:{NFSU2_TR(0x554c92);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B554c94:{NFSU2_TR(0x554c94);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B554c9b:{NFSU2_TR(0x554c9b);
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
B554c9e:{NFSU2_TR(0x554c9e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B554ca0:L554ca0:{c.instructions+=12;NFSU2_TR(0x554ca0);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B554ca2:{NFSU2_TR(0x554ca2);
u8 U[4];
w4(U+0,u32(0x777d78ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B554ca7:{NFSU2_TR(0x554ca7);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B554cad:{NFSU2_TR(0x554cad);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B554cae:{NFSU2_TR(0x554cae);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B554cb5:{NFSU2_TR(0x554cb5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B554cb6:{NFSU2_TR(0x554cb6);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B554cba:{NFSU2_TR(0x554cba);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B554cbb:{NFSU2_TR(0x554cbb);
__builtin_memmove((R+24),(R+4),4);
}
B554cbd:{NFSU2_TR(0x554cbd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B554cbe:{NFSU2_TR(0x554cbe);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B554cc2:{NFSU2_TR(0x554cc2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x554cc7ull));
TAIL_STATIC(0x552330u,552);
}
B554cc7:L554cc7:{c.instructions+=7;NFSU2_TR(0x554cc7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B554cca:{NFSU2_TR(0x554cca);
u8 U[4];
w4(U+0,u32(0x2ac7d02dull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B554ccf:{NFSU2_TR(0x554ccf);
u8 U[4];
w4(U+0,u32(0x42adb44cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B554cd4:{NFSU2_TR(0x554cd4);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B554cd5:{NFSU2_TR(0x554cd5);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B554cdd:{NFSU2_TR(0x554cdd);
u8 U[4];
w4(U+0,u32(0x79cc34ull));
s4(u32(r4(R+24)),r4(U+0));
}
B554ce3:{NFSU2_TR(0x554ce3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x554ce8ull));
TAIL_STATIC(0x495460u,495);
}
B554ce8:L554ce8:{c.instructions+=3;NFSU2_TR(0x554ce8);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B554cea:{NFSU2_TR(0x554cea);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B554cec:{NFSU2_TR(0x554cec);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x554cf1ull));
TAIL_STATIC(0x4c2140u,4c2);
}
B554cf1:L554cf1:{c.instructions+=4;NFSU2_TR(0x554cf1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B554cf4:{NFSU2_TR(0x554cf4);
u8 U[4];
w4(U+0,u32(0xd999b6e7ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B554cf9:{NFSU2_TR(0x554cf9);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B554cfa:{NFSU2_TR(0x554cfa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x554cffull));
TAIL_STATIC(0x4954e0u,495);
}
B554cff:L554cff:{c.instructions+=4;NFSU2_TR(0x554cff);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B554d02:{NFSU2_TR(0x554d02);
u8 U[4];
w4(U+0,u32(0xcf6f0439ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B554d07:{NFSU2_TR(0x554d07);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B554d08:{NFSU2_TR(0x554d08);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x554d0dull));
TAIL_STATIC(0x4954e0u,495);
}
B554d0d:L554d0d:{c.instructions+=4;NFSU2_TR(0x554d0d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B554d10:{NFSU2_TR(0x554d10);
u8 U[4];
w4(U+0,u32(0xaba93d3full));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B554d15:{NFSU2_TR(0x554d15);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B554d16:{NFSU2_TR(0x554d16);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x554d1bull));
TAIL_STATIC(0x4954e0u,495);
}
B554d1b:L554d1b:{c.instructions+=4;NFSU2_TR(0x554d1b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x2cull))));
}
B554d1e:{NFSU2_TR(0x554d1e);
__builtin_memmove((R+4),(R+24),4);
}
B554d20:{NFSU2_TR(0x554d20);
s1(0x838528,u8(0x0ull));
}
B554d27:{NFSU2_TR(0x554d27);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x554d2cull));
TAIL_STATIC(0x548450u,548);
}
B554d2c:L554d2c:{c.instructions+=3;NFSU2_TR(0x554d2c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B554d2f:{NFSU2_TR(0x554d2f);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B554d30:{NFSU2_TR(0x554d30);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x554d35ull));
TAIL_STATIC(0x505450u,505);
}
B554d35:L554d35:{c.instructions+=2;NFSU2_TR(0x554d35);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B554d36:{NFSU2_TR(0x554d36);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x554d3bull));
TAIL_STATIC(0x50b840u,50b);
}
B554d3b:L554d3b:{c.instructions+=3;NFSU2_TR(0x554d3b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B554d3e:{NFSU2_TR(0x554d3e);
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
B554d40:{NFSU2_TR(0x554d40);
if(r1(R+518)){{goto L554d47;}}
}
B554d42:L554d42:{c.instructions+=2;NFSU2_TR(0x554d42);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B554d45:{NFSU2_TR(0x554d45);
{goto L554d49;}
}
B554d47:L554d47:{c.instructions+=1;NFSU2_TR(0x554d47);
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
B554d49:L554d49:{c.instructions+=4;NFSU2_TR(0x554d49);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B554d4c:{NFSU2_TR(0x554d4c);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((R+4),(U+0),4);
}
B554d4f:{NFSU2_TR(0x554d4f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B554d50:{NFSU2_TR(0x554d50);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x554d53ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B554d53:L554d53:{c.instructions+=2;NFSU2_TR(0x554d53);
__builtin_memmove((R+4),(R+24),4);
}
B554d55:{NFSU2_TR(0x554d55);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x554d5aull));
TAIL_STATIC(0x5535d0u,553);
}
B554d5a:L554d5a:{c.instructions+=6;NFSU2_TR(0x554d5a);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B554d5e:{NFSU2_TR(0x554d5e);
__builtin_memmove((R+0),(R+24),4);
}
B554d60:{NFSU2_TR(0x554d60);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B554d61:{NFSU2_TR(0x554d61);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B554d68:{NFSU2_TR(0x554d68);
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
B554d6b:{NFSU2_TR(0x554d6b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B554d70:L554d70:{c.instructions+=3;NFSU2_TR(0x554d70);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B554d71:{NFSU2_TR(0x554d71);
__builtin_memmove((R+24),(R+4),4);
}
B554d73:{NFSU2_TR(0x554d73);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x554d78ull));
{goto L554d90;}
}
B554d78:L554d78:{c.instructions+=2;NFSU2_TR(0x554d78);
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
B554d7d:{NFSU2_TR(0x554d7d);
if(r1(R+518)){{goto L554d88;}}
}
B554d7f:L554d7f:{c.instructions+=2;NFSU2_TR(0x554d7f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B554d80:{NFSU2_TR(0x554d80);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x554d85ull));
TAIL_STATIC(0x575630u,575);
}
B554d85:L554d85:{c.instructions+=1;NFSU2_TR(0x554d85);
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
B554d88:L554d88:{c.instructions+=3;NFSU2_TR(0x554d88);
__builtin_memmove((R+0),(R+24),4);
}
B554d8a:{NFSU2_TR(0x554d8a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B554d8b:{NFSU2_TR(0x554d8b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B554d90:L554d90:{c.instructions+=2;NFSU2_TR(0x554d90);
u8 U[4];
w4(U+0,u32(0x79cc34ull));
s4(u32(r4(R+4)),r4(U+0));
}
B554d96:{NFSU2_TR(0x554d96);
TAIL_STATIC(0x4defb0u,4de);
}
B554da0:L554da0:{c.instructions+=8;NFSU2_TR(0x554da0);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B554da2:{NFSU2_TR(0x554da2);
u8 U[4];
w4(U+0,u32(0x777fd4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B554da7:{NFSU2_TR(0x554da7);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B554dad:{NFSU2_TR(0x554dad);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B554dae:{NFSU2_TR(0x554dae);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B554db5:{NFSU2_TR(0x554db5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B554db6:{NFSU2_TR(0x554db6);
u8 U[4];
w4(U+0,u32(0xb4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B554dbb:{NFSU2_TR(0x554dbb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x554dc0ull));
TAIL_STATIC(0x575620u,575);
}
B554dc0:L554dc0:{c.instructions+=5;NFSU2_TR(0x554dc0);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B554dc3:{NFSU2_TR(0x554dc3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+16)),r4(U+0));
}
B554dc7:{NFSU2_TR(0x554dc7);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B554dc9:{NFSU2_TR(0x554dc9);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B554dd1:{NFSU2_TR(0x554dd1);
if(r1(R+518)){{goto L554dee;}}
}
B554dd3:L554dd3:{c.instructions+=4;NFSU2_TR(0x554dd3);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B554dd7:{NFSU2_TR(0x554dd7);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B554dd8:{NFSU2_TR(0x554dd8);
__builtin_memmove((R+4),(R+0),4);
}
B554dda:{NFSU2_TR(0x554dda);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x554ddfull));
TAIL_STATIC(0x553770u,553);
}
B554ddf:L554ddf:{c.instructions+=4;NFSU2_TR(0x554ddf);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B554de3:{NFSU2_TR(0x554de3);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B554dea:{NFSU2_TR(0x554dea);
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
B554ded:{NFSU2_TR(0x554ded);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B554dee:L554dee:{c.instructions+=5;NFSU2_TR(0x554dee);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B554df2:{NFSU2_TR(0x554df2);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B554df4:{NFSU2_TR(0x554df4);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B554dfb:{NFSU2_TR(0x554dfb);
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
B554dfe:{NFSU2_TR(0x554dfe);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B554e00:L554e00:{c.instructions+=8;NFSU2_TR(0x554e00);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B554e02:{NFSU2_TR(0x554e02);
u8 U[4];
w4(U+0,u32(0x777ff4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B554e07:{NFSU2_TR(0x554e07);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B554e0d:{NFSU2_TR(0x554e0d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B554e0e:{NFSU2_TR(0x554e0e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B554e15:{NFSU2_TR(0x554e15);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B554e16:{NFSU2_TR(0x554e16);
u8 U[4];
w4(U+0,u32(0x68ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B554e18:{NFSU2_TR(0x554e18);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x554e1dull));
TAIL_STATIC(0x575620u,575);
}
B554e1d:L554e1d:{c.instructions+=5;NFSU2_TR(0x554e1d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B554e20:{NFSU2_TR(0x554e20);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+16)),r4(U+0));
}
B554e24:{NFSU2_TR(0x554e24);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B554e26:{NFSU2_TR(0x554e26);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B554e2e:{NFSU2_TR(0x554e2e);
if(r1(R+518)){{goto L554e4b;}}
}
B554e30:L554e30:{c.instructions+=4;NFSU2_TR(0x554e30);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B554e34:{NFSU2_TR(0x554e34);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B554e35:{NFSU2_TR(0x554e35);
__builtin_memmove((R+4),(R+0),4);
}
B554e37:{NFSU2_TR(0x554e37);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x554e3cull));
TAIL_STATIC(0x553940u,553);
}
B554e3c:L554e3c:{c.instructions+=4;NFSU2_TR(0x554e3c);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B554e40:{NFSU2_TR(0x554e40);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B554e47:{NFSU2_TR(0x554e47);
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
B554e4a:{NFSU2_TR(0x554e4a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B554e4b:L554e4b:{c.instructions+=5;NFSU2_TR(0x554e4b);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B554e4f:{NFSU2_TR(0x554e4f);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B554e51:{NFSU2_TR(0x554e51);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B554e58:{NFSU2_TR(0x554e58);
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
B554e5b:{NFSU2_TR(0x554e5b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B554e60:L554e60:{c.instructions+=8;NFSU2_TR(0x554e60);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B554e62:{NFSU2_TR(0x554e62);
u8 U[4];
w4(U+0,u32(0x778014ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B554e67:{NFSU2_TR(0x554e67);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B554e6d:{NFSU2_TR(0x554e6d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B554e6e:{NFSU2_TR(0x554e6e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B554e75:{NFSU2_TR(0x554e75);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B554e76:{NFSU2_TR(0x554e76);
u8 U[4];
w4(U+0,u32(0x4cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B554e78:{NFSU2_TR(0x554e78);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x554e7dull));
TAIL_STATIC(0x575620u,575);
}
B554e7d:L554e7d:{c.instructions+=5;NFSU2_TR(0x554e7d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B554e80:{NFSU2_TR(0x554e80);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+16)),r4(U+0));
}
B554e84:{NFSU2_TR(0x554e84);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B554e86:{NFSU2_TR(0x554e86);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B554e8e:{NFSU2_TR(0x554e8e);
if(r1(R+518)){{goto L554eab;}}
}
B554e90:L554e90:{c.instructions+=4;NFSU2_TR(0x554e90);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B554e94:{NFSU2_TR(0x554e94);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B554e95:{NFSU2_TR(0x554e95);
__builtin_memmove((R+4),(R+0),4);
}
B554e97:{NFSU2_TR(0x554e97);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x554e9cull));
TAIL_STATIC(0x553b60u,553);
}
B554e9c:L554e9c:{c.instructions+=4;NFSU2_TR(0x554e9c);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B554ea0:{NFSU2_TR(0x554ea0);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B554ea7:{NFSU2_TR(0x554ea7);
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
B554eaa:{NFSU2_TR(0x554eaa);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B554eab:L554eab:{c.instructions+=5;NFSU2_TR(0x554eab);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B554eaf:{NFSU2_TR(0x554eaf);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B554eb1:{NFSU2_TR(0x554eb1);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B554eb8:{NFSU2_TR(0x554eb8);
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
B554ebb:{NFSU2_TR(0x554ebb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B554ec0:L554ec0:{c.instructions+=8;NFSU2_TR(0x554ec0);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B554ec2:{NFSU2_TR(0x554ec2);
u8 U[4];
w4(U+0,u32(0x778034ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B554ec7:{NFSU2_TR(0x554ec7);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B554ecd:{NFSU2_TR(0x554ecd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B554ece:{NFSU2_TR(0x554ece);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B554ed5:{NFSU2_TR(0x554ed5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B554ed6:{NFSU2_TR(0x554ed6);
u8 U[4];
w4(U+0,u32(0x54ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B554ed8:{NFSU2_TR(0x554ed8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x554eddull));
TAIL_STATIC(0x575620u,575);
}
B554edd:L554edd:{c.instructions+=5;NFSU2_TR(0x554edd);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B554ee0:{NFSU2_TR(0x554ee0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+16)),r4(U+0));
}
B554ee4:{NFSU2_TR(0x554ee4);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B554ee6:{NFSU2_TR(0x554ee6);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B554eee:{NFSU2_TR(0x554eee);
if(r1(R+518)){{goto L554f0b;}}
}
B554ef0:L554ef0:{c.instructions+=4;NFSU2_TR(0x554ef0);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B554ef4:{NFSU2_TR(0x554ef4);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B554ef5:{NFSU2_TR(0x554ef5);
__builtin_memmove((R+4),(R+0),4);
}
B554ef7:{NFSU2_TR(0x554ef7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x554efcull));
TAIL_STATIC(0x553be0u,553);
}
B554efc:L554efc:{c.instructions+=4;NFSU2_TR(0x554efc);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B554f00:{NFSU2_TR(0x554f00);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B554f07:{NFSU2_TR(0x554f07);
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
B554f0a:{NFSU2_TR(0x554f0a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B554f0b:L554f0b:{c.instructions+=5;NFSU2_TR(0x554f0b);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B554f0f:{NFSU2_TR(0x554f0f);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B554f11:{NFSU2_TR(0x554f11);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B554f18:{NFSU2_TR(0x554f18);
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
B554f1b:{NFSU2_TR(0x554f1b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B554f20:L554f20:{c.instructions+=8;NFSU2_TR(0x554f20);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B554f22:{NFSU2_TR(0x554f22);
u8 U[4];
w4(U+0,u32(0x778054ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B554f27:{NFSU2_TR(0x554f27);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B554f2d:{NFSU2_TR(0x554f2d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B554f2e:{NFSU2_TR(0x554f2e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B554f35:{NFSU2_TR(0x554f35);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B554f36:{NFSU2_TR(0x554f36);
u8 U[4];
w4(U+0,u32(0x128ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B554f3b:{NFSU2_TR(0x554f3b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x554f40ull));
TAIL_STATIC(0x575620u,575);
}
B554f40:L554f40:{c.instructions+=5;NFSU2_TR(0x554f40);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B554f43:{NFSU2_TR(0x554f43);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+16)),r4(U+0));
}
B554f47:{NFSU2_TR(0x554f47);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B554f49:{NFSU2_TR(0x554f49);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B554f51:{NFSU2_TR(0x554f51);
if(r1(R+518)){{goto L554f6e;}}
}
B554f53:L554f53:{c.instructions+=4;NFSU2_TR(0x554f53);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B554f57:{NFSU2_TR(0x554f57);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B554f58:{NFSU2_TR(0x554f58);
__builtin_memmove((R+4),(R+0),4);
}
B554f5a:{NFSU2_TR(0x554f5a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x554f5full));
TAIL_STATIC(0x553c70u,553);
}
B554f5f:L554f5f:{c.instructions+=4;NFSU2_TR(0x554f5f);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B554f63:{NFSU2_TR(0x554f63);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B554f6a:{NFSU2_TR(0x554f6a);
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
B554f6d:{NFSU2_TR(0x554f6d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B554f6e:L554f6e:{c.instructions+=5;NFSU2_TR(0x554f6e);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B554f72:{NFSU2_TR(0x554f72);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B554f74:{NFSU2_TR(0x554f74);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B554f7b:{NFSU2_TR(0x554f7b);
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
B554f7e:{NFSU2_TR(0x554f7e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B554f80:L554f80:{c.instructions+=11;NFSU2_TR(0x554f80);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B554f82:{NFSU2_TR(0x554f82);
u8 U[4];
w4(U+0,u32(0x77806bull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B554f87:{NFSU2_TR(0x554f87);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B554f8d:{NFSU2_TR(0x554f8d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B554f8e:{NFSU2_TR(0x554f8e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B554f95:{NFSU2_TR(0x554f95);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B554f96:{NFSU2_TR(0x554f96);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B554f97:{NFSU2_TR(0x554f97);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B554f98:{NFSU2_TR(0x554f98);
u8 U[4];
w4(U+0,u32(0x60ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B554f9a:{NFSU2_TR(0x554f9a);
__builtin_memmove((R+28),(R+4),4);
}
B554f9c:{NFSU2_TR(0x554f9c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x554fa1ull));
TAIL_STATIC(0x575620u,575);
}
B554fa1:L554fa1:{c.instructions+=7;NFSU2_TR(0x554fa1);
__builtin_memmove((R+24),(R+0),4);
}
B554fa3:{NFSU2_TR(0x554fa3);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B554fa6:{NFSU2_TR(0x554fa6);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B554faa:{NFSU2_TR(0x554faa);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B554fac:{NFSU2_TR(0x554fac);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B554fae:{NFSU2_TR(0x554fae);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B554fb2:{NFSU2_TR(0x554fb2);
if(r1(R+518)){{goto L554fcf;}}
}
B554fb4:L554fb4:{c.instructions+=5;NFSU2_TR(0x554fb4);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B554fb8:{NFSU2_TR(0x554fb8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B554fb9:{NFSU2_TR(0x554fb9);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B554fba:{NFSU2_TR(0x554fba);
__builtin_memmove((R+4),(R+24),4);
}
B554fbc:{NFSU2_TR(0x554fbc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x554fc1ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x554300u);}goto L554300;}
}
B554fc1:L554fc1:{c.instructions+=4;NFSU2_TR(0x554fc1);
u8 U[4];
w4(U+0,u32(0x79ba0cull));
s4(u32(r4(R+24)),r4(U+0));
}
B554fc7:{NFSU2_TR(0x554fc7);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B554fca:{NFSU2_TR(0x554fca);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B554fcd:{NFSU2_TR(0x554fcd);
__builtin_memmove((R+0),(R+24),4);
}
B554fcf:L554fcf:{c.instructions+=6;NFSU2_TR(0x554fcf);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B554fd3:{NFSU2_TR(0x554fd3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B554fd4:{NFSU2_TR(0x554fd4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B554fd5:{NFSU2_TR(0x554fd5);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B554fdc:{NFSU2_TR(0x554fdc);
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
B554fdf:{NFSU2_TR(0x554fdf);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B554ff0:L554ff0:{c.instructions+=5;NFSU2_TR(0x554ff0);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B554ff2:{NFSU2_TR(0x554ff2);
u8 U[4];
w4(U+0,u32(0x77806bull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B554ff7:{NFSU2_TR(0x554ff7);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B554ffd:{NFSU2_TR(0x554ffd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B554ffe:{NFSU2_TR(0x554ffe);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
TAIL_STATIC(0x555005u,555);
}
XIT:NFSU2_TR_EXIT(0x554,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
