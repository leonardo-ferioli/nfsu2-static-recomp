#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_43c(u8* __restrict R,Cpu& c);
u32 body_43d(u8* __restrict R,Cpu& c);
u32 body_595(u8* __restrict R,Cpu& c);
u32 body_597(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x596,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x596,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_596(u8* __restrict R,Cpu& c);
u32 page_596(Cpu& c){return body_596(c.regs.data(),c);}
__attribute__((noinline)) u32 body_596(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x596000:goto L596000;
case 0x596002:c.instructions+=2;goto B596002;
case 0x596009:c.instructions+=1;goto B596009;
case 0x59600f:goto L59600f;
case 0x596010:goto L596010;
case 0x596014:c.instructions+=32;goto B596014;
case 0x596018:c.instructions+=31;goto B596018;
case 0x59601b:c.instructions+=30;goto B59601b;
case 0x59601e:c.instructions+=29;goto B59601e;
case 0x596021:c.instructions+=28;goto B596021;
case 0x596023:c.instructions+=27;goto B596023;
case 0x596025:c.instructions+=26;goto B596025;
case 0x596029:c.instructions+=25;goto B596029;
case 0x59602c:c.instructions+=24;goto B59602c;
case 0x59602f:c.instructions+=23;goto B59602f;
case 0x596032:c.instructions+=22;goto B596032;
case 0x596035:c.instructions+=21;goto B596035;
case 0x596038:c.instructions+=20;goto B596038;
case 0x59603f:c.instructions+=19;goto B59603f;
case 0x596046:c.instructions+=18;goto B596046;
case 0x596048:c.instructions+=17;goto B596048;
case 0x59604f:c.instructions+=16;goto B59604f;
case 0x596056:c.instructions+=15;goto B596056;
case 0x59605a:c.instructions+=14;goto B59605a;
case 0x59605c:c.instructions+=13;goto B59605c;
case 0x596063:c.instructions+=12;goto B596063;
case 0x596067:c.instructions+=11;goto B596067;
case 0x59606e:c.instructions+=10;goto B59606e;
case 0x596072:c.instructions+=9;goto B596072;
case 0x596076:c.instructions+=8;goto B596076;
case 0x59607a:c.instructions+=7;goto B59607a;
case 0x596081:c.instructions+=6;goto B596081;
case 0x596083:c.instructions+=5;goto B596083;
case 0x596087:c.instructions+=4;goto B596087;
case 0x59608e:c.instructions+=3;goto B59608e;
case 0x596090:c.instructions+=2;goto B596090;
case 0x596097:c.instructions+=1;goto B596097;
case 0x59609d:goto L59609d;
case 0x5960a0:goto L5960a0;
case 0x5960a4:c.instructions+=57;goto B5960a4;
case 0x5960a8:c.instructions+=56;goto B5960a8;
case 0x5960ab:c.instructions+=55;goto B5960ab;
case 0x5960ae:c.instructions+=54;goto B5960ae;
case 0x5960b1:c.instructions+=53;goto B5960b1;
case 0x5960b4:c.instructions+=52;goto B5960b4;
case 0x5960b6:c.instructions+=51;goto B5960b6;
case 0x5960b9:c.instructions+=50;goto B5960b9;
case 0x5960bc:c.instructions+=49;goto B5960bc;
case 0x5960bf:c.instructions+=48;goto B5960bf;
case 0x5960c2:c.instructions+=47;goto B5960c2;
case 0x5960c9:c.instructions+=46;goto B5960c9;
case 0x5960d0:c.instructions+=45;goto B5960d0;
case 0x5960d2:c.instructions+=44;goto B5960d2;
case 0x5960d9:c.instructions+=43;goto B5960d9;
case 0x5960e0:c.instructions+=42;goto B5960e0;
case 0x5960e7:c.instructions+=41;goto B5960e7;
case 0x5960ee:c.instructions+=40;goto B5960ee;
case 0x5960f5:c.instructions+=39;goto B5960f5;
case 0x5960fc:c.instructions+=38;goto B5960fc;
case 0x596103:c.instructions+=37;goto B596103;
case 0x596105:c.instructions+=36;goto B596105;
case 0x59610c:c.instructions+=35;goto B59610c;
case 0x596113:c.instructions+=34;goto B596113;
case 0x596115:c.instructions+=33;goto B596115;
case 0x596119:c.instructions+=32;goto B596119;
case 0x596120:c.instructions+=31;goto B596120;
case 0x596124:c.instructions+=30;goto B596124;
case 0x59612b:c.instructions+=29;goto B59612b;
case 0x59612d:c.instructions+=28;goto B59612d;
case 0x596131:c.instructions+=27;goto B596131;
case 0x596138:c.instructions+=26;goto B596138;
case 0x59613a:c.instructions+=25;goto B59613a;
case 0x59613e:c.instructions+=24;goto B59613e;
case 0x596145:c.instructions+=23;goto B596145;
case 0x59614c:c.instructions+=22;goto B59614c;
case 0x596153:c.instructions+=21;goto B596153;
case 0x59615a:c.instructions+=20;goto B59615a;
case 0x59615c:c.instructions+=19;goto B59615c;
case 0x596163:c.instructions+=18;goto B596163;
case 0x59616a:c.instructions+=17;goto B59616a;
case 0x59616c:c.instructions+=16;goto B59616c;
case 0x596173:c.instructions+=15;goto B596173;
case 0x596175:c.instructions+=14;goto B596175;
case 0x596179:c.instructions+=13;goto B596179;
case 0x59617d:c.instructions+=12;goto B59617d;
case 0x59617f:c.instructions+=11;goto B59617f;
case 0x596186:c.instructions+=10;goto B596186;
case 0x596188:c.instructions+=9;goto B596188;
case 0x59618c:c.instructions+=8;goto B59618c;
case 0x59618e:c.instructions+=7;goto B59618e;
case 0x596190:c.instructions+=6;goto B596190;
case 0x596192:c.instructions+=5;goto B596192;
case 0x596194:c.instructions+=4;goto B596194;
case 0x59619a:c.instructions+=3;goto B59619a;
case 0x59619c:c.instructions+=2;goto B59619c;
case 0x59619f:c.instructions+=1;goto B59619f;
case 0x5961a1:goto L5961a1;
case 0x5961a3:c.instructions+=7;goto B5961a3;
case 0x5961a7:c.instructions+=6;goto B5961a7;
case 0x5961a9:c.instructions+=5;goto B5961a9;
case 0x5961ad:c.instructions+=4;goto B5961ad;
case 0x5961b3:c.instructions+=3;goto B5961b3;
case 0x5961b5:c.instructions+=2;goto B5961b5;
case 0x5961b8:c.instructions+=1;goto B5961b8;
case 0x5961ba:goto L5961ba;
case 0x5961c2:c.instructions+=1;goto B5961c2;
case 0x5961c4:goto L5961c4;
case 0x5961c6:c.instructions+=5;goto B5961c6;
case 0x5961cc:c.instructions+=4;goto B5961cc;
case 0x5961ce:c.instructions+=3;goto B5961ce;
case 0x5961d0:c.instructions+=2;goto B5961d0;
case 0x5961d3:c.instructions+=1;goto B5961d3;
case 0x5961d5:goto L5961d5;
case 0x5961dd:c.instructions+=1;goto B5961dd;
case 0x5961df:goto L5961df;
case 0x5961e3:c.instructions+=4;goto B5961e3;
case 0x5961e9:c.instructions+=3;goto B5961e9;
case 0x5961eb:c.instructions+=2;goto B5961eb;
case 0x5961ee:c.instructions+=1;goto B5961ee;
case 0x5961f0:goto L5961f0;
case 0x5961f8:goto L5961f8;
case 0x5961fc:c.instructions+=11;goto B5961fc;
case 0x596200:c.instructions+=10;goto B596200;
case 0x596202:c.instructions+=9;goto B596202;
case 0x596204:c.instructions+=8;goto B596204;
case 0x596208:c.instructions+=7;goto B596208;
case 0x59620a:c.instructions+=6;goto B59620a;
case 0x59620c:c.instructions+=5;goto B59620c;
case 0x596210:c.instructions+=4;goto B596210;
case 0x596216:c.instructions+=3;goto B596216;
case 0x596218:c.instructions+=2;goto B596218;
case 0x59621b:c.instructions+=1;goto B59621b;
case 0x596221:goto L596221;
case 0x596225:c.instructions+=4;goto B596225;
case 0x59622b:c.instructions+=3;goto B59622b;
case 0x59622d:c.instructions+=2;goto B59622d;
case 0x596230:c.instructions+=1;goto B596230;
case 0x596236:goto L596236;
case 0x59623a:c.instructions+=4;goto B59623a;
case 0x596240:c.instructions+=3;goto B596240;
case 0x596242:c.instructions+=2;goto B596242;
case 0x596245:c.instructions+=1;goto B596245;
case 0x59624b:goto L59624b;
case 0x59624f:c.instructions+=4;goto B59624f;
case 0x596255:c.instructions+=3;goto B596255;
case 0x596257:c.instructions+=2;goto B596257;
case 0x59625a:c.instructions+=1;goto B59625a;
case 0x596260:goto L596260;
case 0x596267:c.instructions+=5;goto B596267;
case 0x596268:c.instructions+=4;goto B596268;
case 0x59626c:c.instructions+=3;goto B59626c;
case 0x59626d:c.instructions+=2;goto B59626d;
case 0x59626e:c.instructions+=1;goto B59626e;
case 0x596273:goto L596273;
case 0x596274:c.instructions+=2;goto B596274;
case 0x596275:c.instructions+=1;goto B596275;
case 0x59627a:goto L59627a;
case 0x596281:c.instructions+=12;goto B596281;
case 0x596284:c.instructions+=11;goto B596284;
case 0x596287:c.instructions+=10;goto B596287;
case 0x59628e:c.instructions+=9;goto B59628e;
case 0x596290:c.instructions+=8;goto B596290;
case 0x596292:c.instructions+=7;goto B596292;
case 0x596299:c.instructions+=6;goto B596299;
case 0x59629c:c.instructions+=5;goto B59629c;
case 0x59629e:c.instructions+=4;goto B59629e;
case 0x5962a4:c.instructions+=3;goto B5962a4;
case 0x5962a6:c.instructions+=2;goto B5962a6;
case 0x5962a9:c.instructions+=1;goto B5962a9;
case 0x5962ab:goto L5962ab;
case 0x5962ad:c.instructions+=11;goto B5962ad;
case 0x5962af:c.instructions+=10;goto B5962af;
case 0x5962b2:c.instructions+=9;goto B5962b2;
case 0x5962b4:c.instructions+=8;goto B5962b4;
case 0x5962b7:c.instructions+=7;goto B5962b7;
case 0x5962b9:c.instructions+=6;goto B5962b9;
case 0x5962c0:c.instructions+=5;goto B5962c0;
case 0x5962c7:c.instructions+=4;goto B5962c7;
case 0x5962c9:c.instructions+=3;goto B5962c9;
case 0x5962cc:c.instructions+=2;goto B5962cc;
case 0x5962ce:c.instructions+=1;goto B5962ce;
case 0x5962d1:goto L5962d1;
case 0x5962d5:c.instructions+=41;goto B5962d5;
case 0x5962d9:c.instructions+=40;goto B5962d9;
case 0x5962dd:c.instructions+=39;goto B5962dd;
case 0x5962e4:c.instructions+=38;goto B5962e4;
case 0x5962e8:c.instructions+=37;goto B5962e8;
case 0x5962e9:c.instructions+=36;goto B5962e9;
case 0x5962ed:c.instructions+=35;goto B5962ed;
case 0x5962f1:c.instructions+=34;goto B5962f1;
case 0x5962f5:c.instructions+=33;goto B5962f5;
case 0x5962fc:c.instructions+=32;goto B5962fc;
case 0x5962fe:c.instructions+=31;goto B5962fe;
case 0x596305:c.instructions+=30;goto B596305;
case 0x59630c:c.instructions+=29;goto B59630c;
case 0x596313:c.instructions+=28;goto B596313;
case 0x596315:c.instructions+=27;goto B596315;
case 0x59631c:c.instructions+=26;goto B59631c;
case 0x59631f:c.instructions+=25;goto B59631f;
case 0x596321:c.instructions+=24;goto B596321;
case 0x596328:c.instructions+=23;goto B596328;
case 0x59632b:c.instructions+=22;goto B59632b;
case 0x59632f:c.instructions+=21;goto B59632f;
case 0x596331:c.instructions+=20;goto B596331;
case 0x596333:c.instructions+=19;goto B596333;
case 0x596335:c.instructions+=18;goto B596335;
case 0x596337:c.instructions+=17;goto B596337;
case 0x59633e:c.instructions+=16;goto B59633e;
case 0x596341:c.instructions+=15;goto B596341;
case 0x596348:c.instructions+=14;goto B596348;
case 0x59634b:c.instructions+=13;goto B59634b;
case 0x596352:c.instructions+=12;goto B596352;
case 0x596354:c.instructions+=11;goto B596354;
case 0x596355:c.instructions+=10;goto B596355;
case 0x59635c:c.instructions+=9;goto B59635c;
case 0x596363:c.instructions+=8;goto B596363;
case 0x596365:c.instructions+=7;goto B596365;
case 0x59636c:c.instructions+=6;goto B59636c;
case 0x596373:c.instructions+=5;goto B596373;
case 0x596377:c.instructions+=4;goto B596377;
case 0x59637e:c.instructions+=3;goto B59637e;
case 0x59637f:c.instructions+=2;goto B59637f;
case 0x596381:c.instructions+=1;goto B596381;
case 0x596386:goto L596386;
case 0x59638a:c.instructions+=6;goto B59638a;
case 0x59638b:c.instructions+=5;goto B59638b;
case 0x596392:c.instructions+=4;goto B596392;
case 0x596393:c.instructions+=3;goto B596393;
case 0x596397:c.instructions+=2;goto B596397;
case 0x596398:c.instructions+=1;goto B596398;
case 0x59639d:goto L59639d;
case 0x5963a1:c.instructions+=8;goto B5963a1;
case 0x5963a5:c.instructions+=7;goto B5963a5;
case 0x5963a6:c.instructions+=6;goto B5963a6;
case 0x5963ad:c.instructions+=5;goto B5963ad;
case 0x5963ae:c.instructions+=4;goto B5963ae;
case 0x5963af:c.instructions+=3;goto B5963af;
case 0x5963b6:c.instructions+=2;goto B5963b6;
case 0x5963b7:c.instructions+=1;goto B5963b7;
case 0x5963bc:goto L5963bc;
case 0x5963bf:c.instructions+=20;goto B5963bf;
case 0x5963c2:c.instructions+=19;goto B5963c2;
case 0x5963c4:c.instructions+=18;goto B5963c4;
case 0x5963c8:c.instructions+=17;goto B5963c8;
case 0x5963ca:c.instructions+=16;goto B5963ca;
case 0x5963d1:c.instructions+=15;goto B5963d1;
case 0x5963d4:c.instructions+=14;goto B5963d4;
case 0x5963d6:c.instructions+=13;goto B5963d6;
case 0x5963dd:c.instructions+=12;goto B5963dd;
case 0x5963e0:c.instructions+=11;goto B5963e0;
case 0x5963e2:c.instructions+=10;goto B5963e2;
case 0x5963e9:c.instructions+=9;goto B5963e9;
case 0x5963f0:c.instructions+=8;goto B5963f0;
case 0x5963f1:c.instructions+=7;goto B5963f1;
case 0x5963f8:c.instructions+=6;goto B5963f8;
case 0x5963fa:c.instructions+=5;goto B5963fa;
case 0x5963fb:c.instructions+=4;goto B5963fb;
case 0x5963fd:c.instructions+=3;goto B5963fd;
case 0x596404:c.instructions+=2;goto B596404;
case 0x596405:c.instructions+=1;goto B596405;
case 0x59640a:goto L59640a;
case 0x596411:c.instructions+=6;goto B596411;
case 0x596412:c.instructions+=5;goto B596412;
case 0x596419:c.instructions+=4;goto B596419;
case 0x59641a:c.instructions+=3;goto B59641a;
case 0x596421:c.instructions+=2;goto B596421;
case 0x596422:c.instructions+=1;goto B596422;
case 0x596427:goto L596427;
case 0x59642e:c.instructions+=23;goto B59642e;
case 0x596431:c.instructions+=22;goto B596431;
case 0x596434:c.instructions+=21;goto B596434;
case 0x596437:c.instructions+=20;goto B596437;
case 0x59643a:c.instructions+=19;goto B59643a;
case 0x59643d:c.instructions+=18;goto B59643d;
case 0x59643f:c.instructions+=17;goto B59643f;
case 0x596441:c.instructions+=16;goto B596441;
case 0x596443:c.instructions+=15;goto B596443;
case 0x596447:c.instructions+=14;goto B596447;
case 0x596449:c.instructions+=13;goto B596449;
case 0x59644c:c.instructions+=12;goto B59644c;
case 0x59644f:c.instructions+=11;goto B59644f;
case 0x596452:c.instructions+=10;goto B596452;
case 0x596455:c.instructions+=9;goto B596455;
case 0x596457:c.instructions+=8;goto B596457;
case 0x596459:c.instructions+=7;goto B596459;
case 0x59645b:c.instructions+=6;goto B59645b;
case 0x59645d:c.instructions+=5;goto B59645d;
case 0x596461:c.instructions+=4;goto B596461;
case 0x596463:c.instructions+=3;goto B596463;
case 0x596465:c.instructions+=2;goto B596465;
case 0x596468:c.instructions+=1;goto B596468;
case 0x59646a:goto L59646a;
case 0x59646c:c.instructions+=1;goto B59646c;
case 0x596470:goto L596470;
case 0x596473:c.instructions+=21;goto B596473;
case 0x596477:c.instructions+=20;goto B596477;
case 0x59647a:c.instructions+=19;goto B59647a;
case 0x59647d:c.instructions+=18;goto B59647d;
case 0x596480:c.instructions+=17;goto B596480;
case 0x596482:c.instructions+=16;goto B596482;
case 0x596484:c.instructions+=15;goto B596484;
case 0x596486:c.instructions+=14;goto B596486;
case 0x596488:c.instructions+=13;goto B596488;
case 0x59648b:c.instructions+=12;goto B59648b;
case 0x59648e:c.instructions+=11;goto B59648e;
case 0x596491:c.instructions+=10;goto B596491;
case 0x596494:c.instructions+=9;goto B596494;
case 0x596496:c.instructions+=8;goto B596496;
case 0x596498:c.instructions+=7;goto B596498;
case 0x59649a:c.instructions+=6;goto B59649a;
case 0x59649c:c.instructions+=5;goto B59649c;
case 0x5964a0:c.instructions+=4;goto B5964a0;
case 0x5964a2:c.instructions+=3;goto B5964a2;
case 0x5964a4:c.instructions+=2;goto B5964a4;
case 0x5964a7:c.instructions+=1;goto B5964a7;
case 0x5964a9:goto L5964a9;
case 0x5964ab:c.instructions+=1;goto B5964ab;
case 0x5964af:goto L5964af;
case 0x5964b6:c.instructions+=23;goto B5964b6;
case 0x5964b8:c.instructions+=22;goto B5964b8;
case 0x5964bc:c.instructions+=21;goto B5964bc;
case 0x5964c0:c.instructions+=20;goto B5964c0;
case 0x5964c3:c.instructions+=19;goto B5964c3;
case 0x5964c7:c.instructions+=18;goto B5964c7;
case 0x5964ca:c.instructions+=17;goto B5964ca;
case 0x5964cc:c.instructions+=16;goto B5964cc;
case 0x5964d0:c.instructions+=15;goto B5964d0;
case 0x5964d2:c.instructions+=14;goto B5964d2;
case 0x5964d4:c.instructions+=13;goto B5964d4;
case 0x5964d8:c.instructions+=12;goto B5964d8;
case 0x5964db:c.instructions+=11;goto B5964db;
case 0x5964df:c.instructions+=10;goto B5964df;
case 0x5964e2:c.instructions+=9;goto B5964e2;
case 0x5964e4:c.instructions+=8;goto B5964e4;
case 0x5964e8:c.instructions+=7;goto B5964e8;
case 0x5964ea:c.instructions+=6;goto B5964ea;
case 0x5964ec:c.instructions+=5;goto B5964ec;
case 0x5964f0:c.instructions+=4;goto B5964f0;
case 0x5964f2:c.instructions+=3;goto B5964f2;
case 0x5964f4:c.instructions+=2;goto B5964f4;
case 0x5964f7:c.instructions+=1;goto B5964f7;
case 0x5964f9:goto L5964f9;
case 0x5964fb:c.instructions+=1;goto B5964fb;
case 0x5964ff:goto L5964ff;
case 0x596503:c.instructions+=20;goto B596503;
case 0x596506:c.instructions+=19;goto B596506;
case 0x59650a:c.instructions+=18;goto B59650a;
case 0x59650d:c.instructions+=17;goto B59650d;
case 0x59650f:c.instructions+=16;goto B59650f;
case 0x596513:c.instructions+=15;goto B596513;
case 0x596515:c.instructions+=14;goto B596515;
case 0x596517:c.instructions+=13;goto B596517;
case 0x59651b:c.instructions+=12;goto B59651b;
case 0x59651e:c.instructions+=11;goto B59651e;
case 0x596522:c.instructions+=10;goto B596522;
case 0x596525:c.instructions+=9;goto B596525;
case 0x596527:c.instructions+=8;goto B596527;
case 0x59652b:c.instructions+=7;goto B59652b;
case 0x59652d:c.instructions+=6;goto B59652d;
case 0x59652f:c.instructions+=5;goto B59652f;
case 0x596533:c.instructions+=4;goto B596533;
case 0x596535:c.instructions+=3;goto B596535;
case 0x596537:c.instructions+=2;goto B596537;
case 0x59653a:c.instructions+=1;goto B59653a;
case 0x59653c:goto L59653c;
case 0x59653e:c.instructions+=1;goto B59653e;
case 0x596542:goto L596542;
case 0x596544:c.instructions+=5;goto B596544;
case 0x596548:c.instructions+=4;goto B596548;
case 0x59654a:c.instructions+=3;goto B59654a;
case 0x59654c:c.instructions+=2;goto B59654c;
case 0x59654f:c.instructions+=1;goto B59654f;
case 0x596551:goto L596551;
case 0x596555:c.instructions+=7;goto B596555;
case 0x596557:c.instructions+=6;goto B596557;
case 0x59655b:c.instructions+=5;goto B59655b;
case 0x59655d:c.instructions+=4;goto B59655d;
case 0x596561:c.instructions+=3;goto B596561;
case 0x596564:c.instructions+=2;goto B596564;
case 0x596568:c.instructions+=1;goto B596568;
case 0x59656b:goto L59656b;
case 0x596572:c.instructions+=21;goto B596572;
case 0x596576:c.instructions+=20;goto B596576;
case 0x596579:c.instructions+=19;goto B596579;
case 0x596580:c.instructions+=18;goto B596580;
case 0x596583:c.instructions+=17;goto B596583;
case 0x596585:c.instructions+=16;goto B596585;
case 0x59658c:c.instructions+=15;goto B59658c;
case 0x59658e:c.instructions+=14;goto B59658e;
case 0x596590:c.instructions+=13;goto B596590;
case 0x596597:c.instructions+=12;goto B596597;
case 0x59659a:c.instructions+=11;goto B59659a;
case 0x5965a1:c.instructions+=10;goto B5965a1;
case 0x5965a4:c.instructions+=9;goto B5965a4;
case 0x5965a6:c.instructions+=8;goto B5965a6;
case 0x5965ad:c.instructions+=7;goto B5965ad;
case 0x5965af:c.instructions+=6;goto B5965af;
case 0x5965b1:c.instructions+=5;goto B5965b1;
case 0x5965b5:c.instructions+=4;goto B5965b5;
case 0x5965b7:c.instructions+=3;goto B5965b7;
case 0x5965b9:c.instructions+=2;goto B5965b9;
case 0x5965bc:c.instructions+=1;goto B5965bc;
case 0x5965be:goto L5965be;
case 0x5965c0:c.instructions+=1;goto B5965c0;
case 0x5965c4:goto L5965c4;
case 0x5965cb:c.instructions+=20;goto B5965cb;
case 0x5965ce:c.instructions+=19;goto B5965ce;
case 0x5965d5:c.instructions+=18;goto B5965d5;
case 0x5965d8:c.instructions+=17;goto B5965d8;
case 0x5965da:c.instructions+=16;goto B5965da;
case 0x5965e1:c.instructions+=15;goto B5965e1;
case 0x5965e3:c.instructions+=14;goto B5965e3;
case 0x5965e5:c.instructions+=13;goto B5965e5;
case 0x5965ec:c.instructions+=12;goto B5965ec;
case 0x5965ef:c.instructions+=11;goto B5965ef;
case 0x5965f6:c.instructions+=10;goto B5965f6;
case 0x5965f9:c.instructions+=9;goto B5965f9;
case 0x5965fb:c.instructions+=8;goto B5965fb;
case 0x596602:c.instructions+=7;goto B596602;
case 0x596604:c.instructions+=6;goto B596604;
case 0x596606:c.instructions+=5;goto B596606;
case 0x59660a:c.instructions+=4;goto B59660a;
case 0x59660c:c.instructions+=3;goto B59660c;
case 0x59660e:c.instructions+=2;goto B59660e;
case 0x596611:c.instructions+=1;goto B596611;
case 0x596613:goto L596613;
case 0x596615:c.instructions+=1;goto B596615;
case 0x596619:goto L596619;
case 0x59661b:c.instructions+=6;goto B59661b;
case 0x59661d:c.instructions+=5;goto B59661d;
case 0x59661f:c.instructions+=4;goto B59661f;
case 0x596621:c.instructions+=3;goto B596621;
case 0x596624:c.instructions+=2;goto B596624;
case 0x596626:c.instructions+=1;goto B596626;
case 0x59662c:goto L59662c;
case 0x596633:c.instructions+=6;goto B596633;
case 0x59663a:c.instructions+=5;goto B59663a;
case 0x596641:c.instructions+=4;goto B596641;
case 0x596643:c.instructions+=3;goto B596643;
case 0x596646:c.instructions+=2;goto B596646;
case 0x596649:c.instructions+=1;goto B596649;
case 0x59664e:goto L59664e;
case 0x596652:c.instructions+=40;goto B596652;
case 0x596656:c.instructions+=39;goto B596656;
case 0x59665a:c.instructions+=38;goto B59665a;
case 0x596661:c.instructions+=37;goto B596661;
case 0x596665:c.instructions+=36;goto B596665;
case 0x596666:c.instructions+=35;goto B596666;
case 0x59666a:c.instructions+=34;goto B59666a;
case 0x59666e:c.instructions+=33;goto B59666e;
case 0x596672:c.instructions+=32;goto B596672;
case 0x596679:c.instructions+=31;goto B596679;
case 0x59667b:c.instructions+=30;goto B59667b;
case 0x596682:c.instructions+=29;goto B596682;
case 0x596689:c.instructions+=28;goto B596689;
case 0x596690:c.instructions+=27;goto B596690;
case 0x596692:c.instructions+=26;goto B596692;
case 0x596699:c.instructions+=25;goto B596699;
case 0x59669c:c.instructions+=24;goto B59669c;
case 0x59669e:c.instructions+=23;goto B59669e;
case 0x5966a5:c.instructions+=22;goto B5966a5;
case 0x5966a8:c.instructions+=21;goto B5966a8;
case 0x5966ac:c.instructions+=20;goto B5966ac;
case 0x5966ae:c.instructions+=19;goto B5966ae;
case 0x5966b0:c.instructions+=18;goto B5966b0;
case 0x5966b2:c.instructions+=17;goto B5966b2;
case 0x5966b4:c.instructions+=16;goto B5966b4;
case 0x5966bb:c.instructions+=15;goto B5966bb;
case 0x5966be:c.instructions+=14;goto B5966be;
case 0x5966c5:c.instructions+=13;goto B5966c5;
case 0x5966c8:c.instructions+=12;goto B5966c8;
case 0x5966cf:c.instructions+=11;goto B5966cf;
case 0x5966d1:c.instructions+=10;goto B5966d1;
case 0x5966d2:c.instructions+=9;goto B5966d2;
case 0x5966d3:c.instructions+=8;goto B5966d3;
case 0x5966da:c.instructions+=7;goto B5966da;
case 0x5966e1:c.instructions+=6;goto B5966e1;
case 0x5966e3:c.instructions+=5;goto B5966e3;
case 0x5966ea:c.instructions+=4;goto B5966ea;
case 0x5966f1:c.instructions+=3;goto B5966f1;
case 0x5966f8:c.instructions+=2;goto B5966f8;
case 0x5966fa:c.instructions+=1;goto B5966fa;
case 0x5966ff:goto L5966ff;
case 0x596700:c.instructions+=4;goto B596700;
case 0x596707:c.instructions+=3;goto B596707;
case 0x596708:c.instructions+=2;goto B596708;
case 0x596709:c.instructions+=1;goto B596709;
case 0x59670e:goto L59670e;
case 0x596711:c.instructions+=1;goto B596711;
case 0x596716:goto L596716;
case 0x59671a:c.instructions+=5;goto B59671a;
case 0x596722:c.instructions+=4;goto B596722;
case 0x596728:c.instructions+=3;goto B596728;
case 0x59672a:c.instructions+=2;goto B59672a;
case 0x59672d:c.instructions+=1;goto B59672d;
case 0x59672f:goto L59672f;
case 0x596737:goto L596737;
case 0x59673b:c.instructions+=8;goto B59673b;
case 0x59673f:c.instructions+=7;goto B59673f;
case 0x596746:c.instructions+=6;goto B596746;
case 0x59674d:c.instructions+=5;goto B59674d;
case 0x596751:c.instructions+=4;goto B596751;
case 0x596757:c.instructions+=3;goto B596757;
case 0x596759:c.instructions+=2;goto B596759;
case 0x59675c:c.instructions+=1;goto B59675c;
case 0x596762:goto L596762;
case 0x596766:c.instructions+=4;goto B596766;
case 0x59676c:c.instructions+=3;goto B59676c;
case 0x59676e:c.instructions+=2;goto B59676e;
case 0x596771:c.instructions+=1;goto B596771;
case 0x596773:goto L596773;
case 0x596777:c.instructions+=8;goto B596777;
case 0x59677b:c.instructions+=7;goto B59677b;
case 0x59677c:c.instructions+=6;goto B59677c;
case 0x596783:c.instructions+=5;goto B596783;
case 0x596784:c.instructions+=4;goto B596784;
case 0x596785:c.instructions+=3;goto B596785;
case 0x59678c:c.instructions+=2;goto B59678c;
case 0x59678d:c.instructions+=1;goto B59678d;
case 0x596792:goto L596792;
case 0x596795:c.instructions+=19;goto B596795;
case 0x596798:c.instructions+=18;goto B596798;
case 0x59679f:c.instructions+=17;goto B59679f;
case 0x5967a1:c.instructions+=16;goto B5967a1;
case 0x5967a5:c.instructions+=15;goto B5967a5;
case 0x5967a7:c.instructions+=14;goto B5967a7;
case 0x5967ae:c.instructions+=13;goto B5967ae;
case 0x5967b1:c.instructions+=12;goto B5967b1;
case 0x5967b3:c.instructions+=11;goto B5967b3;
case 0x5967ba:c.instructions+=10;goto B5967ba;
case 0x5967bd:c.instructions+=9;goto B5967bd;
case 0x5967c4:c.instructions+=8;goto B5967c4;
case 0x5967c6:c.instructions+=7;goto B5967c6;
case 0x5967c7:c.instructions+=6;goto B5967c7;
case 0x5967c8:c.instructions+=5;goto B5967c8;
case 0x5967cf:c.instructions+=4;goto B5967cf;
case 0x5967d0:c.instructions+=3;goto B5967d0;
case 0x5967d2:c.instructions+=2;goto B5967d2;
case 0x5967d4:c.instructions+=1;goto B5967d4;
case 0x5967d9:goto L5967d9;
case 0x5967da:c.instructions+=4;goto B5967da;
case 0x5967e1:c.instructions+=3;goto B5967e1;
case 0x5967e2:c.instructions+=2;goto B5967e2;
case 0x5967e3:c.instructions+=1;goto B5967e3;
case 0x5967e8:goto L5967e8;
case 0x5967eb:c.instructions+=1;goto B5967eb;
case 0x5967f0:goto L5967f0;
case 0x5967f4:c.instructions+=5;goto B5967f4;
case 0x5967fc:c.instructions+=4;goto B5967fc;
case 0x596802:c.instructions+=3;goto B596802;
case 0x596804:c.instructions+=2;goto B596804;
case 0x596807:c.instructions+=1;goto B596807;
case 0x596809:goto L596809;
case 0x596811:goto L596811;
case 0x596815:c.instructions+=8;goto B596815;
case 0x596819:c.instructions+=7;goto B596819;
case 0x59681a:c.instructions+=6;goto B59681a;
case 0x59681e:c.instructions+=5;goto B59681e;
case 0x59681f:c.instructions+=4;goto B59681f;
case 0x596820:c.instructions+=3;goto B596820;
case 0x596827:c.instructions+=2;goto B596827;
case 0x596828:c.instructions+=1;goto B596828;
case 0x59682d:goto L59682d;
case 0x596831:c.instructions+=9;goto B596831;
case 0x596832:c.instructions+=8;goto B596832;
case 0x596839:c.instructions+=7;goto B596839;
case 0x59683b:c.instructions+=6;goto B59683b;
case 0x59683f:c.instructions+=5;goto B59683f;
case 0x596840:c.instructions+=4;goto B596840;
case 0x596841:c.instructions+=3;goto B596841;
case 0x596848:c.instructions+=2;goto B596848;
case 0x596849:c.instructions+=1;goto B596849;
case 0x59684e:goto L59684e;
case 0x596851:c.instructions+=14;goto B596851;
case 0x596854:c.instructions+=13;goto B596854;
case 0x596857:c.instructions+=12;goto B596857;
case 0x59685a:c.instructions+=11;goto B59685a;
case 0x596861:c.instructions+=10;goto B596861;
case 0x596863:c.instructions+=9;goto B596863;
case 0x596866:c.instructions+=8;goto B596866;
case 0x596868:c.instructions+=7;goto B596868;
case 0x59686a:c.instructions+=6;goto B59686a;
case 0x59686c:c.instructions+=5;goto B59686c;
case 0x59686e:c.instructions+=4;goto B59686e;
case 0x596871:c.instructions+=3;goto B596871;
case 0x596873:c.instructions+=2;goto B596873;
case 0x59687a:c.instructions+=1;goto B59687a;
case 0x59687d:goto L59687d;
case 0x59687f:c.instructions+=12;goto B59687f;
case 0x596883:c.instructions+=11;goto B596883;
case 0x596886:c.instructions+=10;goto B596886;
case 0x596888:c.instructions+=9;goto B596888;
case 0x59688b:c.instructions+=8;goto B59688b;
case 0x596893:c.instructions+=7;goto B596893;
case 0x596896:c.instructions+=6;goto B596896;
case 0x59689b:c.instructions+=5;goto B59689b;
case 0x59689d:c.instructions+=4;goto B59689d;
case 0x5968a0:c.instructions+=3;goto B5968a0;
case 0x5968a3:c.instructions+=2;goto B5968a3;
case 0x5968a5:c.instructions+=1;goto B5968a5;
case 0x5968ab:goto L5968ab;
case 0x5968b0:c.instructions+=1;goto B5968b0;
case 0x5968b3:goto L5968b3;
case 0x5968b6:c.instructions+=12;goto B5968b6;
case 0x5968b8:c.instructions+=11;goto B5968b8;
case 0x5968bb:c.instructions+=10;goto B5968bb;
case 0x5968be:c.instructions+=9;goto B5968be;
case 0x5968c0:c.instructions+=8;goto B5968c0;
case 0x5968c3:c.instructions+=7;goto B5968c3;
case 0x5968c6:c.instructions+=6;goto B5968c6;
case 0x5968c8:c.instructions+=5;goto B5968c8;
case 0x5968cc:c.instructions+=4;goto B5968cc;
case 0x5968ce:c.instructions+=3;goto B5968ce;
case 0x5968d0:c.instructions+=2;goto B5968d0;
case 0x5968d3:c.instructions+=1;goto B5968d3;
case 0x5968d5:goto L5968d5;
case 0x5968d7:c.instructions+=2;goto B5968d7;
case 0x5968db:c.instructions+=1;goto B5968db;
case 0x5968df:goto L5968df;
case 0x5968e2:c.instructions+=12;goto B5968e2;
case 0x5968e4:c.instructions+=11;goto B5968e4;
case 0x5968e7:c.instructions+=10;goto B5968e7;
case 0x5968ea:c.instructions+=9;goto B5968ea;
case 0x5968ec:c.instructions+=8;goto B5968ec;
case 0x5968ef:c.instructions+=7;goto B5968ef;
case 0x5968f1:c.instructions+=6;goto B5968f1;
case 0x5968f3:c.instructions+=5;goto B5968f3;
case 0x5968f7:c.instructions+=4;goto B5968f7;
case 0x5968f9:c.instructions+=3;goto B5968f9;
case 0x5968fb:c.instructions+=2;goto B5968fb;
case 0x5968fe:c.instructions+=1;goto B5968fe;
case 0x596900:goto L596900;
case 0x596903:c.instructions+=3;goto B596903;
case 0x596905:c.instructions+=2;goto B596905;
case 0x596909:c.instructions+=1;goto B596909;
case 0x59690d:goto L59690d;
case 0x596910:c.instructions+=12;goto B596910;
case 0x596913:c.instructions+=11;goto B596913;
case 0x596916:c.instructions+=10;goto B596916;
case 0x596918:c.instructions+=9;goto B596918;
case 0x59691a:c.instructions+=8;goto B59691a;
case 0x59691d:c.instructions+=7;goto B59691d;
case 0x596920:c.instructions+=6;goto B596920;
case 0x596922:c.instructions+=5;goto B596922;
case 0x596926:c.instructions+=4;goto B596926;
case 0x596928:c.instructions+=3;goto B596928;
case 0x59692a:c.instructions+=2;goto B59692a;
case 0x59692d:c.instructions+=1;goto B59692d;
case 0x59692f:goto L59692f;
case 0x596932:c.instructions+=3;goto B596932;
case 0x596934:c.instructions+=2;goto B596934;
case 0x596938:c.instructions+=1;goto B596938;
case 0x59693c:goto L59693c;
case 0x59693f:c.instructions+=12;goto B59693f;
case 0x596942:c.instructions+=11;goto B596942;
case 0x596945:c.instructions+=10;goto B596945;
case 0x596947:c.instructions+=9;goto B596947;
case 0x596949:c.instructions+=8;goto B596949;
case 0x59694c:c.instructions+=7;goto B59694c;
case 0x59694f:c.instructions+=6;goto B59694f;
case 0x596951:c.instructions+=5;goto B596951;
case 0x596955:c.instructions+=4;goto B596955;
case 0x596957:c.instructions+=3;goto B596957;
case 0x596959:c.instructions+=2;goto B596959;
case 0x59695c:c.instructions+=1;goto B59695c;
case 0x59695e:goto L59695e;
case 0x596960:c.instructions+=2;goto B596960;
case 0x596964:c.instructions+=1;goto B596964;
case 0x596968:goto L596968;
case 0x59696c:c.instructions+=5;goto B59696c;
case 0x59696f:c.instructions+=4;goto B59696f;
case 0x596972:c.instructions+=3;goto B596972;
case 0x596975:c.instructions+=2;goto B596975;
case 0x596977:c.instructions+=1;goto B596977;
case 0x59697d:goto L59697d;
case 0x596981:c.instructions+=2;goto B596981;
case 0x596983:c.instructions+=1;goto B596983;
case 0x596985:goto L596985;
case 0x596987:c.instructions+=3;goto B596987;
case 0x59698a:c.instructions+=2;goto B59698a;
case 0x59698e:c.instructions+=1;goto B59698e;
case 0x596990:goto L596990;
case 0x596993:c.instructions+=12;goto B596993;
case 0x596995:c.instructions+=11;goto B596995;
case 0x596998:c.instructions+=10;goto B596998;
case 0x59699b:c.instructions+=9;goto B59699b;
case 0x59699d:c.instructions+=8;goto B59699d;
case 0x59699f:c.instructions+=7;goto B59699f;
case 0x5969a2:c.instructions+=6;goto B5969a2;
case 0x5969a4:c.instructions+=5;goto B5969a4;
case 0x5969a8:c.instructions+=4;goto B5969a8;
case 0x5969aa:c.instructions+=3;goto B5969aa;
case 0x5969ac:c.instructions+=2;goto B5969ac;
case 0x5969af:c.instructions+=1;goto B5969af;
case 0x5969b1:goto L5969b1;
case 0x5969b3:c.instructions+=2;goto B5969b3;
case 0x5969b7:c.instructions+=1;goto B5969b7;
case 0x5969bb:goto L5969bb;
case 0x5969bc:c.instructions+=3;goto B5969bc;
case 0x5969bf:c.instructions+=2;goto B5969bf;
case 0x5969c1:c.instructions+=1;goto B5969c1;
case 0x5969c3:goto L5969c3;
case 0x5969c6:c.instructions+=12;goto B5969c6;
case 0x5969ca:c.instructions+=11;goto B5969ca;
case 0x5969cd:c.instructions+=10;goto B5969cd;
case 0x5969d0:c.instructions+=9;goto B5969d0;
case 0x5969d3:c.instructions+=8;goto B5969d3;
case 0x5969db:c.instructions+=7;goto B5969db;
case 0x5969dd:c.instructions+=6;goto B5969dd;
case 0x5969e2:c.instructions+=5;goto B5969e2;
case 0x5969e4:c.instructions+=4;goto B5969e4;
case 0x5969e7:c.instructions+=3;goto B5969e7;
case 0x5969ea:c.instructions+=2;goto B5969ea;
case 0x5969ec:c.instructions+=1;goto B5969ec;
case 0x5969f2:goto L5969f2;
case 0x5969f7:c.instructions+=1;goto B5969f7;
case 0x5969fa:goto L5969fa;
case 0x5969fd:c.instructions+=12;goto B5969fd;
case 0x5969ff:c.instructions+=11;goto B5969ff;
case 0x596a02:c.instructions+=10;goto B596a02;
case 0x596a05:c.instructions+=9;goto B596a05;
case 0x596a07:c.instructions+=8;goto B596a07;
case 0x596a09:c.instructions+=7;goto B596a09;
case 0x596a0c:c.instructions+=6;goto B596a0c;
case 0x596a0e:c.instructions+=5;goto B596a0e;
case 0x596a12:c.instructions+=4;goto B596a12;
case 0x596a14:c.instructions+=3;goto B596a14;
case 0x596a16:c.instructions+=2;goto B596a16;
case 0x596a19:c.instructions+=1;goto B596a19;
case 0x596a1b:goto L596a1b;
case 0x596a1d:c.instructions+=2;goto B596a1d;
case 0x596a21:c.instructions+=1;goto B596a21;
case 0x596a25:goto L596a25;
case 0x596a28:c.instructions+=12;goto B596a28;
case 0x596a2b:c.instructions+=11;goto B596a2b;
case 0x596a2e:c.instructions+=10;goto B596a2e;
case 0x596a31:c.instructions+=9;goto B596a31;
case 0x596a33:c.instructions+=8;goto B596a33;
case 0x596a36:c.instructions+=7;goto B596a36;
case 0x596a38:c.instructions+=6;goto B596a38;
case 0x596a3a:c.instructions+=5;goto B596a3a;
case 0x596a3e:c.instructions+=4;goto B596a3e;
case 0x596a40:c.instructions+=3;goto B596a40;
case 0x596a42:c.instructions+=2;goto B596a42;
case 0x596a45:c.instructions+=1;goto B596a45;
case 0x596a47:goto L596a47;
case 0x596a4a:c.instructions+=3;goto B596a4a;
case 0x596a4c:c.instructions+=2;goto B596a4c;
case 0x596a50:c.instructions+=1;goto B596a50;
case 0x596a54:goto L596a54;
case 0x596a57:c.instructions+=12;goto B596a57;
case 0x596a5a:c.instructions+=11;goto B596a5a;
case 0x596a5d:c.instructions+=10;goto B596a5d;
case 0x596a60:c.instructions+=9;goto B596a60;
case 0x596a62:c.instructions+=8;goto B596a62;
case 0x596a65:c.instructions+=7;goto B596a65;
case 0x596a67:c.instructions+=6;goto B596a67;
case 0x596a69:c.instructions+=5;goto B596a69;
case 0x596a6d:c.instructions+=4;goto B596a6d;
case 0x596a6f:c.instructions+=3;goto B596a6f;
case 0x596a71:c.instructions+=2;goto B596a71;
case 0x596a74:c.instructions+=1;goto B596a74;
case 0x596a76:goto L596a76;
case 0x596a79:c.instructions+=3;goto B596a79;
case 0x596a7b:c.instructions+=2;goto B596a7b;
case 0x596a7f:c.instructions+=1;goto B596a7f;
case 0x596a83:goto L596a83;
case 0x596a86:c.instructions+=12;goto B596a86;
case 0x596a89:c.instructions+=11;goto B596a89;
case 0x596a8c:c.instructions+=10;goto B596a8c;
case 0x596a8f:c.instructions+=9;goto B596a8f;
case 0x596a91:c.instructions+=8;goto B596a91;
case 0x596a94:c.instructions+=7;goto B596a94;
case 0x596a96:c.instructions+=6;goto B596a96;
case 0x596a98:c.instructions+=5;goto B596a98;
case 0x596a9c:c.instructions+=4;goto B596a9c;
case 0x596a9e:c.instructions+=3;goto B596a9e;
case 0x596aa0:c.instructions+=2;goto B596aa0;
case 0x596aa3:c.instructions+=1;goto B596aa3;
case 0x596aa5:goto L596aa5;
case 0x596aa7:c.instructions+=2;goto B596aa7;
case 0x596aab:c.instructions+=1;goto B596aab;
case 0x596aaf:goto L596aaf;
case 0x596ab3:c.instructions+=5;goto B596ab3;
case 0x596ab6:c.instructions+=4;goto B596ab6;
case 0x596ab9:c.instructions+=3;goto B596ab9;
case 0x596abc:c.instructions+=2;goto B596abc;
case 0x596abe:c.instructions+=1;goto B596abe;
case 0x596ac4:goto L596ac4;
case 0x596ac8:c.instructions+=2;goto B596ac8;
case 0x596aca:c.instructions+=1;goto B596aca;
case 0x596acc:goto L596acc;
case 0x596ace:c.instructions+=2;goto B596ace;
case 0x596ad1:c.instructions+=1;goto B596ad1;
case 0x596ad5:goto L596ad5;
case 0x596ad8:c.instructions+=12;goto B596ad8;
case 0x596ada:c.instructions+=11;goto B596ada;
case 0x596add:c.instructions+=10;goto B596add;
case 0x596ae0:c.instructions+=9;goto B596ae0;
case 0x596ae2:c.instructions+=8;goto B596ae2;
case 0x596ae5:c.instructions+=7;goto B596ae5;
case 0x596ae7:c.instructions+=6;goto B596ae7;
case 0x596ae9:c.instructions+=5;goto B596ae9;
case 0x596aed:c.instructions+=4;goto B596aed;
case 0x596aef:c.instructions+=3;goto B596aef;
case 0x596af1:c.instructions+=2;goto B596af1;
case 0x596af4:c.instructions+=1;goto B596af4;
case 0x596af6:goto L596af6;
case 0x596af8:c.instructions+=2;goto B596af8;
case 0x596afc:c.instructions+=1;goto B596afc;
case 0x596b00:goto L596b00;
case 0x596b01:c.instructions+=3;goto B596b01;
case 0x596b04:c.instructions+=2;goto B596b04;
case 0x596b06:c.instructions+=1;goto B596b06;
case 0x596b08:goto L596b08;
case 0x596b0a:c.instructions+=4;goto B596b0a;
case 0x596b0c:c.instructions+=3;goto B596b0c;
case 0x596b0e:c.instructions+=2;goto B596b0e;
case 0x596b11:c.instructions+=1;goto B596b11;
case 0x596b17:goto L596b17;
case 0x596b1b:c.instructions+=71;goto B596b1b;
case 0x596b1f:c.instructions+=70;goto B596b1f;
case 0x596b23:c.instructions+=69;goto B596b23;
case 0x596b27:c.instructions+=68;goto B596b27;
case 0x596b2b:c.instructions+=67;goto B596b2b;
case 0x596b2f:c.instructions+=66;goto B596b2f;
case 0x596b33:c.instructions+=65;goto B596b33;
case 0x596b3a:c.instructions+=64;goto B596b3a;
case 0x596b3c:c.instructions+=63;goto B596b3c;
case 0x596b43:c.instructions+=62;goto B596b43;
case 0x596b4a:c.instructions+=61;goto B596b4a;
case 0x596b51:c.instructions+=60;goto B596b51;
case 0x596b58:c.instructions+=59;goto B596b58;
case 0x596b5a:c.instructions+=58;goto B596b5a;
case 0x596b5d:c.instructions+=57;goto B596b5d;
case 0x596b64:c.instructions+=56;goto B596b64;
case 0x596b67:c.instructions+=55;goto B596b67;
case 0x596b6b:c.instructions+=54;goto B596b6b;
case 0x596b6d:c.instructions+=53;goto B596b6d;
case 0x596b74:c.instructions+=52;goto B596b74;
case 0x596b7b:c.instructions+=51;goto B596b7b;
case 0x596b7d:c.instructions+=50;goto B596b7d;
case 0x596b83:c.instructions+=49;goto B596b83;
case 0x596b89:c.instructions+=48;goto B596b89;
case 0x596b8f:c.instructions+=47;goto B596b8f;
case 0x596b91:c.instructions+=46;goto B596b91;
case 0x596b98:c.instructions+=45;goto B596b98;
case 0x596b9c:c.instructions+=44;goto B596b9c;
case 0x596ba3:c.instructions+=43;goto B596ba3;
case 0x596ba7:c.instructions+=42;goto B596ba7;
case 0x596bae:c.instructions+=41;goto B596bae;
case 0x596bb2:c.instructions+=40;goto B596bb2;
case 0x596bb9:c.instructions+=39;goto B596bb9;
case 0x596bbb:c.instructions+=38;goto B596bbb;
case 0x596bc2:c.instructions+=37;goto B596bc2;
case 0x596bc9:c.instructions+=36;goto B596bc9;
case 0x596bd0:c.instructions+=35;goto B596bd0;
case 0x596bd7:c.instructions+=34;goto B596bd7;
case 0x596bd9:c.instructions+=33;goto B596bd9;
case 0x596bdc:c.instructions+=32;goto B596bdc;
case 0x596be3:c.instructions+=31;goto B596be3;
case 0x596be6:c.instructions+=30;goto B596be6;
case 0x596be8:c.instructions+=29;goto B596be8;
case 0x596bef:c.instructions+=28;goto B596bef;
case 0x596bf6:c.instructions+=27;goto B596bf6;
case 0x596bf8:c.instructions+=26;goto B596bf8;
case 0x596bfe:c.instructions+=25;goto B596bfe;
case 0x596c04:c.instructions+=24;goto B596c04;
case 0x596c0a:c.instructions+=23;goto B596c0a;
case 0x596c0c:c.instructions+=22;goto B596c0c;
case 0x596c12:c.instructions+=21;goto B596c12;
case 0x596c18:c.instructions+=20;goto B596c18;
case 0x596c1e:c.instructions+=19;goto B596c1e;
case 0x596c24:c.instructions+=18;goto B596c24;
case 0x596c2a:c.instructions+=17;goto B596c2a;
case 0x596c30:c.instructions+=16;goto B596c30;
case 0x596c32:c.instructions+=15;goto B596c32;
case 0x596c34:c.instructions+=14;goto B596c34;
case 0x596c36:c.instructions+=13;goto B596c36;
case 0x596c38:c.instructions+=12;goto B596c38;
case 0x596c3a:c.instructions+=11;goto B596c3a;
case 0x596c3c:c.instructions+=10;goto B596c3c;
case 0x596c3e:c.instructions+=9;goto B596c3e;
case 0x596c40:c.instructions+=8;goto B596c40;
case 0x596c42:c.instructions+=7;goto B596c42;
case 0x596c44:c.instructions+=6;goto B596c44;
case 0x596c46:c.instructions+=5;goto B596c46;
case 0x596c4a:c.instructions+=4;goto B596c4a;
case 0x596c4e:c.instructions+=3;goto B596c4e;
case 0x596c50:c.instructions+=2;goto B596c50;
case 0x596c54:c.instructions+=1;goto B596c54;
case 0x596c56:goto L596c56;
case 0x596c58:c.instructions+=1;goto B596c58;
case 0x596c5a:goto L596c5a;
case 0x596c5e:c.instructions+=3;goto B596c5e;
case 0x596c62:c.instructions+=2;goto B596c62;
case 0x596c64:c.instructions+=1;goto B596c64;
case 0x596c6a:goto L596c6a;
case 0x596c6e:c.instructions+=1;goto B596c6e;
case 0x596c74:goto L596c74;
case 0x596c78:c.instructions+=3;goto B596c78;
case 0x596c7a:c.instructions+=2;goto B596c7a;
case 0x596c7d:c.instructions+=1;goto B596c7d;
case 0x596c83:goto L596c83;
case 0x596c89:c.instructions+=25;goto B596c89;
case 0x596c8b:c.instructions+=24;goto B596c8b;
case 0x596c92:c.instructions+=23;goto B596c92;
case 0x596c98:c.instructions+=22;goto B596c98;
case 0x596c9f:c.instructions+=21;goto B596c9f;
case 0x596ca2:c.instructions+=20;goto B596ca2;
case 0x596ca9:c.instructions+=19;goto B596ca9;
case 0x596caf:c.instructions+=18;goto B596caf;
case 0x596cb6:c.instructions+=17;goto B596cb6;
case 0x596cb9:c.instructions+=16;goto B596cb9;
case 0x596cc0:c.instructions+=15;goto B596cc0;
case 0x596cc6:c.instructions+=14;goto B596cc6;
case 0x596ccd:c.instructions+=13;goto B596ccd;
case 0x596cd3:c.instructions+=12;goto B596cd3;
case 0x596cda:c.instructions+=11;goto B596cda;
case 0x596ce1:c.instructions+=10;goto B596ce1;
case 0x596ce7:c.instructions+=9;goto B596ce7;
case 0x596ceb:c.instructions+=8;goto B596ceb;
case 0x596cef:c.instructions+=7;goto B596cef;
case 0x596cf6:c.instructions+=6;goto B596cf6;
case 0x596cfc:c.instructions+=5;goto B596cfc;
case 0x596d01:c.instructions+=4;goto B596d01;
case 0x596d08:c.instructions+=3;goto B596d08;
case 0x596d0a:c.instructions+=2;goto B596d0a;
case 0x596d0d:c.instructions+=1;goto B596d0d;
case 0x596d0f:goto L596d0f;
case 0x596d16:c.instructions+=1;goto B596d16;
case 0x596d18:goto L596d18;
case 0x596d1c:c.instructions+=4;goto B596d1c;
case 0x596d22:c.instructions+=3;goto B596d22;
case 0x596d24:c.instructions+=2;goto B596d24;
case 0x596d27:c.instructions+=1;goto B596d27;
case 0x596d29:goto L596d29;
case 0x596d30:c.instructions+=2;goto B596d30;
case 0x596d37:c.instructions+=1;goto B596d37;
case 0x596d39:goto L596d39;
case 0x596d44:c.instructions+=1;goto B596d44;
case 0x596d4b:goto L596d4b;
case 0x596d52:goto L596d52;
case 0x596d56:c.instructions+=4;goto B596d56;
case 0x596d5c:c.instructions+=3;goto B596d5c;
case 0x596d5e:c.instructions+=2;goto B596d5e;
case 0x596d61:c.instructions+=1;goto B596d61;
case 0x596d63:goto L596d63;
case 0x596d67:c.instructions+=3;goto B596d67;
case 0x596d6e:c.instructions+=2;goto B596d6e;
case 0x596d75:c.instructions+=1;goto B596d75;
case 0x596d77:goto L596d77;
case 0x596d7b:c.instructions+=4;goto B596d7b;
case 0x596d81:c.instructions+=3;goto B596d81;
case 0x596d83:c.instructions+=2;goto B596d83;
case 0x596d86:c.instructions+=1;goto B596d86;
case 0x596d88:goto L596d88;
case 0x596d8c:c.instructions+=3;goto B596d8c;
case 0x596d93:c.instructions+=2;goto B596d93;
case 0x596d9a:c.instructions+=1;goto B596d9a;
case 0x596d9c:goto L596d9c;
case 0x596da0:c.instructions+=5;goto B596da0;
case 0x596da4:c.instructions+=4;goto B596da4;
case 0x596daf:c.instructions+=3;goto B596daf;
case 0x596db6:c.instructions+=2;goto B596db6;
case 0x596dbd:c.instructions+=1;goto B596dbd;
case 0x596dbf:goto L596dbf;
case 0x596dc1:goto L596dc1;
case 0x596dc5:c.instructions+=5;goto B596dc5;
case 0x596dc9:c.instructions+=4;goto B596dc9;
case 0x596dca:c.instructions+=3;goto B596dca;
case 0x596dcc:c.instructions+=2;goto B596dcc;
case 0x596dd0:c.instructions+=1;goto B596dd0;
case 0x596dd6:goto L596dd6;
case 0x596dda:c.instructions+=3;goto B596dda;
case 0x596dde:c.instructions+=2;goto B596dde;
case 0x596de2:c.instructions+=1;goto B596de2;
case 0x596de8:goto L596de8;
case 0x596dec:c.instructions+=5;goto B596dec;
case 0x596df0:c.instructions+=4;goto B596df0;
case 0x596df1:c.instructions+=3;goto B596df1;
case 0x596df3:c.instructions+=2;goto B596df3;
case 0x596df7:c.instructions+=1;goto B596df7;
case 0x596dfd:goto L596dfd;
case 0x596e01:c.instructions+=3;goto B596e01;
case 0x596e05:c.instructions+=2;goto B596e05;
case 0x596e09:c.instructions+=1;goto B596e09;
case 0x596e0f:goto L596e0f;
case 0x596e14:goto L596e14;
case 0x596e18:goto L596e18;
case 0x596e1c:c.instructions+=5;goto B596e1c;
case 0x596e21:c.instructions+=4;goto B596e21;
case 0x596e27:c.instructions+=3;goto B596e27;
case 0x596e29:c.instructions+=2;goto B596e29;
case 0x596e2c:c.instructions+=1;goto B596e2c;
case 0x596e2e:goto L596e2e;
case 0x596e34:c.instructions+=12;goto B596e34;
case 0x596e3b:c.instructions+=11;goto B596e3b;
case 0x596e3e:c.instructions+=10;goto B596e3e;
case 0x596e40:c.instructions+=9;goto B596e40;
case 0x596e46:c.instructions+=8;goto B596e46;
case 0x596e49:c.instructions+=7;goto B596e49;
case 0x596e4c:c.instructions+=6;goto B596e4c;
case 0x596e4e:c.instructions+=5;goto B596e4e;
case 0x596e50:c.instructions+=4;goto B596e50;
case 0x596e52:c.instructions+=3;goto B596e52;
case 0x596e55:c.instructions+=2;goto B596e55;
case 0x596e58:c.instructions+=1;goto B596e58;
case 0x596e5d:goto L596e5d;
case 0x596e61:c.instructions+=4;goto B596e61;
case 0x596e67:c.instructions+=3;goto B596e67;
case 0x596e69:c.instructions+=2;goto B596e69;
case 0x596e6c:c.instructions+=1;goto B596e6c;
case 0x596e6e:goto L596e6e;
case 0x596e74:c.instructions+=12;goto B596e74;
case 0x596e7b:c.instructions+=11;goto B596e7b;
case 0x596e7e:c.instructions+=10;goto B596e7e;
case 0x596e80:c.instructions+=9;goto B596e80;
case 0x596e86:c.instructions+=8;goto B596e86;
case 0x596e89:c.instructions+=7;goto B596e89;
case 0x596e8c:c.instructions+=6;goto B596e8c;
case 0x596e8e:c.instructions+=5;goto B596e8e;
case 0x596e90:c.instructions+=4;goto B596e90;
case 0x596e92:c.instructions+=3;goto B596e92;
case 0x596e95:c.instructions+=2;goto B596e95;
case 0x596e98:c.instructions+=1;goto B596e98;
case 0x596e9a:goto L596e9a;
case 0x596ea4:c.instructions+=22;goto B596ea4;
case 0x596eab:c.instructions+=21;goto B596eab;
case 0x596eb1:c.instructions+=20;goto B596eb1;
case 0x596eb4:c.instructions+=19;goto B596eb4;
case 0x596eb8:c.instructions+=18;goto B596eb8;
case 0x596eba:c.instructions+=17;goto B596eba;
case 0x596ebd:c.instructions+=16;goto B596ebd;
case 0x596ebf:c.instructions+=15;goto B596ebf;
case 0x596ec1:c.instructions+=14;goto B596ec1;
case 0x596ec3:c.instructions+=13;goto B596ec3;
case 0x596ec6:c.instructions+=12;goto B596ec6;
case 0x596ec9:c.instructions+=11;goto B596ec9;
case 0x596ed0:c.instructions+=10;goto B596ed0;
case 0x596ed6:c.instructions+=9;goto B596ed6;
case 0x596ed9:c.instructions+=8;goto B596ed9;
case 0x596edd:c.instructions+=7;goto B596edd;
case 0x596ee0:c.instructions+=6;goto B596ee0;
case 0x596ee4:c.instructions+=5;goto B596ee4;
case 0x596ee6:c.instructions+=4;goto B596ee6;
case 0x596ee8:c.instructions+=3;goto B596ee8;
case 0x596eeb:c.instructions+=2;goto B596eeb;
case 0x596eee:c.instructions+=1;goto B596eee;
case 0x596ef1:goto L596ef1;
case 0x596ef5:c.instructions+=4;goto B596ef5;
case 0x596efb:c.instructions+=3;goto B596efb;
case 0x596efd:c.instructions+=2;goto B596efd;
case 0x596f00:c.instructions+=1;goto B596f00;
case 0x596f02:goto L596f02;
case 0x596f08:c.instructions+=18;goto B596f08;
case 0x596f0f:c.instructions+=17;goto B596f0f;
case 0x596f15:c.instructions+=16;goto B596f15;
case 0x596f18:c.instructions+=15;goto B596f18;
case 0x596f1b:c.instructions+=14;goto B596f1b;
case 0x596f1f:c.instructions+=13;goto B596f1f;
case 0x596f21:c.instructions+=12;goto B596f21;
case 0x596f24:c.instructions+=11;goto B596f24;
case 0x596f26:c.instructions+=10;goto B596f26;
case 0x596f28:c.instructions+=9;goto B596f28;
case 0x596f2b:c.instructions+=8;goto B596f2b;
case 0x596f2e:c.instructions+=7;goto B596f2e;
case 0x596f31:c.instructions+=6;goto B596f31;
case 0x596f32:c.instructions+=5;goto B596f32;
case 0x596f33:c.instructions+=4;goto B596f33;
case 0x596f34:c.instructions+=3;goto B596f34;
case 0x596f36:c.instructions+=2;goto B596f36;
case 0x596f37:c.instructions+=1;goto B596f37;
case 0x596f3a:goto L596f3a;
case 0x596f3e:c.instructions+=4;goto B596f3e;
case 0x596f44:c.instructions+=3;goto B596f44;
case 0x596f46:c.instructions+=2;goto B596f46;
case 0x596f49:c.instructions+=1;goto B596f49;
case 0x596f4b:goto L596f4b;
case 0x596f4f:c.instructions+=19;goto B596f4f;
case 0x596f55:c.instructions+=18;goto B596f55;
case 0x596f5c:c.instructions+=17;goto B596f5c;
case 0x596f5f:c.instructions+=16;goto B596f5f;
case 0x596f65:c.instructions+=15;goto B596f65;
case 0x596f68:c.instructions+=14;goto B596f68;
case 0x596f6c:c.instructions+=13;goto B596f6c;
case 0x596f6f:c.instructions+=12;goto B596f6f;
case 0x596f73:c.instructions+=11;goto B596f73;
case 0x596f75:c.instructions+=10;goto B596f75;
case 0x596f78:c.instructions+=9;goto B596f78;
case 0x596f7a:c.instructions+=8;goto B596f7a;
case 0x596f7d:c.instructions+=7;goto B596f7d;
case 0x596f80:c.instructions+=6;goto B596f80;
case 0x596f81:c.instructions+=5;goto B596f81;
case 0x596f82:c.instructions+=4;goto B596f82;
case 0x596f83:c.instructions+=3;goto B596f83;
case 0x596f85:c.instructions+=2;goto B596f85;
case 0x596f86:c.instructions+=1;goto B596f86;
case 0x596f89:goto L596f89;
case 0x596f93:c.instructions+=13;goto B596f93;
case 0x596f9a:c.instructions+=12;goto B596f9a;
case 0x596fa0:c.instructions+=11;goto B596fa0;
case 0x596fa4:c.instructions+=10;goto B596fa4;
case 0x596fab:c.instructions+=9;goto B596fab;
case 0x596fae:c.instructions+=8;goto B596fae;
case 0x596fb1:c.instructions+=7;goto B596fb1;
case 0x596fb3:c.instructions+=6;goto B596fb3;
case 0x596fb9:c.instructions+=5;goto B596fb9;
case 0x596fbc:c.instructions+=4;goto B596fbc;
case 0x596fbf:c.instructions+=3;goto B596fbf;
case 0x596fc1:c.instructions+=2;goto B596fc1;
case 0x596fc4:c.instructions+=1;goto B596fc4;
case 0x596fc9:goto L596fc9;
case 0x596fd0:c.instructions+=13;goto B596fd0;
case 0x596fd7:c.instructions+=12;goto B596fd7;
case 0x596fde:c.instructions+=11;goto B596fde;
case 0x596fe0:c.instructions+=10;goto B596fe0;
case 0x596fe3:c.instructions+=9;goto B596fe3;
case 0x596fe6:c.instructions+=8;goto B596fe6;
case 0x596fea:c.instructions+=7;goto B596fea;
case 0x596fed:c.instructions+=6;goto B596fed;
case 0x596ff0:c.instructions+=5;goto B596ff0;
case 0x596ff2:c.instructions+=4;goto B596ff2;
case 0x596ff6:c.instructions+=3;goto B596ff6;
case 0x596ff8:c.instructions+=2;goto B596ff8;
case 0x596ffc:c.instructions+=1;goto B596ffc;
default:missing_instruction(c.pc);}
B596000:L596000:{c.instructions+=3;NFSU2_TR(0x596000);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B596002:{NFSU2_TR(0x596002);
{u32 ea_=u32(r4(R+16)+u32(380u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B596009:{NFSU2_TR(0x596009);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L596de8;}}
}
B59600f:L59600f:{c.instructions+=1;NFSU2_TR(0x59600f);
}
B596010:L596010:{c.instructions+=33;NFSU2_TR(0x596010);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B596014:{NFSU2_TR(0x596014);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B596018:{NFSU2_TR(0x596018);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B59601b:{NFSU2_TR(0x59601b);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B59601e:{NFSU2_TR(0x59601e);
{u32 ea_=u32(r4(R+28)+r4(R+0));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B596021:{NFSU2_TR(0x596021);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+28))));
}
B596023:{NFSU2_TR(0x596023);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B596025:{NFSU2_TR(0x596025);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B596029:{NFSU2_TR(0x596029);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59602c:{NFSU2_TR(0x59602c);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B59602f:{NFSU2_TR(0x59602f);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B596032:{NFSU2_TR(0x596032);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x1ull))));
__builtin_memmove((R+0),(U+0),4);
}
B596035:{NFSU2_TR(0x596035);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B596038:{NFSU2_TR(0x596038);
{u32 ea_=u32(r4(R+16)+u32(696u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59603f:{NFSU2_TR(0x59603f);
u8 U[8];
w4(U+0,u32(u32(u32(0x2b8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B596046:{NFSU2_TR(0x596046);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B596048:{NFSU2_TR(0x596048);
{u32 ea_=u32(r4(R+16)+u32(208u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59604f:{NFSU2_TR(0x59604f);
u8 U[8];
w4(U+0,u32(u32(u32(0xd8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B596056:{NFSU2_TR(0x596056);
u8 U[8];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B59605a:{NFSU2_TR(0x59605a);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B59605c:{NFSU2_TR(0x59605c);
{u32 ea_=u32(r4(R+16)+u32(212u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B596063:{NFSU2_TR(0x596063);
{u32 ea_=u32(r4(R+16)+u32(112u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B596067:{NFSU2_TR(0x596067);
{u32 ea_=u32(r4(R+16)+u32(208u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59606e:{NFSU2_TR(0x59606e);
u8 U[8];
w4(U+0,u32(u32(u32(0x6cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B596072:{NFSU2_TR(0x596072);
{u32 ea_=u32(r4(R+16)+u32(120u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B596076:{NFSU2_TR(0x596076);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B59607a:{NFSU2_TR(0x59607a);
{u32 ea_=u32(r4(R+16)+u32(216u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B596081:{NFSU2_TR(0x596081);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B596083:{NFSU2_TR(0x596083);
{u32 ea_=u32(r4(R+16)+u32(116u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B596087:{NFSU2_TR(0x596087);
{u32 ea_=u32(r4(R+16)+u32(212u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59608e:{NFSU2_TR(0x59608e);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B596090:{NFSU2_TR(0x596090);
{u32 ea_=u32(r4(R+16)+u32(136u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B596097:{NFSU2_TR(0x596097);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L596dd6;}}
}
B59609d:L59609d:{c.instructions+=1;NFSU2_TR(0x59609d);
__builtin_memmove((R+4),(R+4),4);
}
B5960a0:L5960a0:{c.instructions+=58;NFSU2_TR(0x5960a0);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5960a4:{NFSU2_TR(0x5960a4);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5960a8:{NFSU2_TR(0x5960a8);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x4ull))));
}
B5960ab:{NFSU2_TR(0x5960ab);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B5960ae:{NFSU2_TR(0x5960ae);
{u32 ea_=u32(r4(R+28)+r4(R+8));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5960b1:{NFSU2_TR(0x5960b1);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((R+12),(U+4),4);
}
B5960b4:{NFSU2_TR(0x5960b4);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5960b6:{NFSU2_TR(0x5960b6);
{u32 ea_=u32(r4(R+12)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5960b9:{NFSU2_TR(0x5960b9);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5960bc:{NFSU2_TR(0x5960bc);
{u32 ea_=u32(r4(R+12)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5960bf:{NFSU2_TR(0x5960bf);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5960c2:{NFSU2_TR(0x5960c2);
{u32 ea_=u32(r4(R+16)+u32(680u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5960c9:{NFSU2_TR(0x5960c9);
u8 U[8];
w4(U+0,u32(u32(u32(0x2a8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5960d0:{NFSU2_TR(0x5960d0);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5960d2:{NFSU2_TR(0x5960d2);
{u32 ea_=u32(r4(R+16)+u32(144u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5960d9:{NFSU2_TR(0x5960d9);
u8 U[8];
w4(U+0,u32(u32(u32(0x98ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5960e0:{NFSU2_TR(0x5960e0);
{u32 ea_=u32(r4(R+16)+u32(148u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5960e7:{NFSU2_TR(0x5960e7);
{u32 ea_=u32(r4(R+16)+u32(144u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5960ee:{NFSU2_TR(0x5960ee);
{u32 ea_=u32(r4(R+16)+u32(144u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5960f5:{NFSU2_TR(0x5960f5);
{u32 ea_=u32(r4(R+16)+u32(152u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5960fc:{NFSU2_TR(0x5960fc);
{u32 ea_=u32(r4(R+16)+u32(152u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B596103:{NFSU2_TR(0x596103);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B596105:{NFSU2_TR(0x596105);
{u32 ea_=u32(r4(R+16)+u32(148u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59610c:{NFSU2_TR(0x59610c);
{u32 ea_=u32(r4(R+16)+u32(148u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B596113:{NFSU2_TR(0x596113);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B596115:{NFSU2_TR(0x596115);
{u32 ea_=u32(r4(R+16)+u32(112u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B596119:{NFSU2_TR(0x596119);
{u32 ea_=u32(r4(R+16)+u32(144u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B596120:{NFSU2_TR(0x596120);
{u32 ea_=u32(r4(R+16)+u32(120u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B596124:{NFSU2_TR(0x596124);
{u32 ea_=u32(r4(R+16)+u32(152u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59612b:{NFSU2_TR(0x59612b);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B59612d:{NFSU2_TR(0x59612d);
{u32 ea_=u32(r4(R+16)+u32(116u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B596131:{NFSU2_TR(0x596131);
{u32 ea_=u32(r4(R+16)+u32(148u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B596138:{NFSU2_TR(0x596138);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B59613a:{NFSU2_TR(0x59613a);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59613e:{NFSU2_TR(0x59613e);
{u32 ea_=u32(r4(R+16)+u32(144u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B596145:{NFSU2_TR(0x596145);
{u32 ea_=u32(r4(R+16)+u32(208u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59614c:{NFSU2_TR(0x59614c);
{u32 ea_=u32(r4(R+16)+u32(152u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B596153:{NFSU2_TR(0x596153);
{u32 ea_=u32(r4(R+16)+u32(216u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59615a:{NFSU2_TR(0x59615a);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B59615c:{NFSU2_TR(0x59615c);
{u32 ea_=u32(r4(R+16)+u32(148u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B596163:{NFSU2_TR(0x596163);
{u32 ea_=u32(r4(R+16)+u32(212u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59616a:{NFSU2_TR(0x59616a);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B59616c:{NFSU2_TR(0x59616c);
{u32 ea_=u32(r4(R+16)+u32(380u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B596173:{NFSU2_TR(0x596173);
__asm__ volatile(".byte 0xd8,0xca":::"memory");
}
B596175:{NFSU2_TR(0x596175);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B596179:{NFSU2_TR(0x596179);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59617d:{NFSU2_TR(0x59617d);
__asm__ volatile(".byte 0xde,0xe9":::"memory");
}
B59617f:{NFSU2_TR(0x59617f);
{u32 ea_=u32(r4(R+16)+u32(136u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B596186:{NFSU2_TR(0x596186);
__asm__ volatile(".byte 0xd8,0xcb":::"memory");
}
B596188:{NFSU2_TR(0x596188);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59618c:{NFSU2_TR(0x59618c);
__asm__ volatile(".byte 0xd8,0xcb":::"memory");
}
B59618e:{NFSU2_TR(0x59618e);
__asm__ volatile(".byte 0xde,0xe9":::"memory");
}
B596190:{NFSU2_TR(0x596190);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B596192:{NFSU2_TR(0x596192);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B596194:{NFSU2_TR(0x596194);
{u32 ea_=u32(u32(8002880u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B59619a:{NFSU2_TR(0x59619a);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B59619c:{NFSU2_TR(0x59619c);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B59619f:{NFSU2_TR(0x59619f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5961c4;}}
}
B5961a1:L5961a1:{c.instructions+=8;NFSU2_TR(0x5961a1);
__asm__ volatile(".byte 0xd8,0xf1":::"memory");
}
B5961a3:{NFSU2_TR(0x5961a3);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5961a7:{NFSU2_TR(0x5961a7);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5961a9:{NFSU2_TR(0x5961a9);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5961ad:{NFSU2_TR(0x5961ad);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5961b3:{NFSU2_TR(0x5961b3);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5961b5:{NFSU2_TR(0x5961b5);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5961b8:{NFSU2_TR(0x5961b8);
if(r1(R+514)){{goto L5961df;}}
}
B5961ba:L5961ba:{c.instructions+=2;NFSU2_TR(0x5961ba);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5961c2:{NFSU2_TR(0x5961c2);
{goto L5961f8;}
}
B5961c4:L5961c4:{c.instructions+=6;NFSU2_TR(0x5961c4);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B5961c6:{NFSU2_TR(0x5961c6);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5961cc:{NFSU2_TR(0x5961cc);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5961ce:{NFSU2_TR(0x5961ce);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5961d0:{NFSU2_TR(0x5961d0);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5961d3:{NFSU2_TR(0x5961d3);
if(r1(R+518)){{goto L5961f0;}}
}
B5961d5:L5961d5:{c.instructions+=2;NFSU2_TR(0x5961d5);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5961dd:{NFSU2_TR(0x5961dd);
{goto L5961f8;}
}
B5961df:L5961df:{c.instructions+=5;NFSU2_TR(0x5961df);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5961e3:{NFSU2_TR(0x5961e3);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5961e9:{NFSU2_TR(0x5961e9);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5961eb:{NFSU2_TR(0x5961eb);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5961ee:{NFSU2_TR(0x5961ee);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5961f8;}}
}
B5961f0:L5961f0:{c.instructions+=1;NFSU2_TR(0x5961f0);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5961f8:L5961f8:{c.instructions+=12;NFSU2_TR(0x5961f8);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5961fc:{NFSU2_TR(0x5961fc);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B596200:{NFSU2_TR(0x596200);
__asm__ volatile(".byte 0xd8,0xe1":::"memory");
}
B596202:{NFSU2_TR(0x596202);
__asm__ volatile(".byte 0xd8,0xf2":::"memory");
}
B596204:{NFSU2_TR(0x596204);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B596208:{NFSU2_TR(0x596208);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B59620a:{NFSU2_TR(0x59620a);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B59620c:{NFSU2_TR(0x59620c);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B596210:{NFSU2_TR(0x596210);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B596216:{NFSU2_TR(0x596216);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B596218:{NFSU2_TR(0x596218);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B59621b:{NFSU2_TR(0x59621b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L596716;}}
}
B596221:L596221:{c.instructions+=5;NFSU2_TR(0x596221);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B596225:{NFSU2_TR(0x596225);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B59622b:{NFSU2_TR(0x59622b);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B59622d:{NFSU2_TR(0x59622d);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B596230:{NFSU2_TR(0x596230);
if(r1(R+514)){{goto L596716;}}
}
B596236:L596236:{c.instructions+=5;NFSU2_TR(0x596236);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59623a:{NFSU2_TR(0x59623a);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B596240:{NFSU2_TR(0x596240);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B596242:{NFSU2_TR(0x596242);
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
B596245:{NFSU2_TR(0x596245);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L59664e;}}
}
B59624b:L59624b:{c.instructions+=5;NFSU2_TR(0x59624b);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59624f:{NFSU2_TR(0x59624f);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B596255:{NFSU2_TR(0x596255);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B596257:{NFSU2_TR(0x596257);
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
B59625a:{NFSU2_TR(0x59625a);
if(r1(R+514)){{goto L59664e;}}
}
B596260:L596260:{c.instructions+=6;NFSU2_TR(0x596260);
u8 U[4];
w4(U+0,u32(u32(u32(0x90ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B596267:{NFSU2_TR(0x596267);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B596268:{NFSU2_TR(0x596268);
u8 U[4];
w4(U+0,u32(u32(u32(0x74ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B59626c:{NFSU2_TR(0x59626c);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59626d:{NFSU2_TR(0x59626d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59626e:{NFSU2_TR(0x59626e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x596273ull));
TAIL_STATIC(0x43d1e0u,43d);
}
B596273:L596273:{c.instructions+=3;NFSU2_TR(0x596273);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B596274:{NFSU2_TR(0x596274);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B596275:{NFSU2_TR(0x596275);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x59627aull));
TAIL_STATIC(0x43cf10u,43c);
}
B59627a:L59627a:{c.instructions+=13;NFSU2_TR(0x59627a);
{u32 ea_=u32(r4(R+16)+u32(232u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B596281:{NFSU2_TR(0x596281);
{u32 ea_=u32(r4(R+24)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B596284:{NFSU2_TR(0x596284);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B596287:{NFSU2_TR(0x596287);
{u32 ea_=u32(r4(R+16)+u32(208u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59628e:{NFSU2_TR(0x59628e);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B596290:{NFSU2_TR(0x596290);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B596292:{NFSU2_TR(0x596292);
{u32 ea_=u32(r4(R+16)+u32(216u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B596299:{NFSU2_TR(0x596299);
{u32 ea_=u32(r4(R+24)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59629c:{NFSU2_TR(0x59629c);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B59629e:{NFSU2_TR(0x59629e);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5962a4:{NFSU2_TR(0x5962a4);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5962a6:{NFSU2_TR(0x5962a6);
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
B5962a9:{NFSU2_TR(0x5962a9);
if(r1(R+514)){{goto L5962d1;}}
}
B5962ab:L5962ab:{c.instructions+=12;NFSU2_TR(0x5962ab);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5962ad:{NFSU2_TR(0x5962ad);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B5962af:{NFSU2_TR(0x5962af);
{u32 ea_=u32(r4(R+24)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5962b2:{NFSU2_TR(0x5962b2);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B5962b4:{NFSU2_TR(0x5962b4);
{u32 ea_=u32(r4(R+24)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5962b7:{NFSU2_TR(0x5962b7);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B5962b9:{NFSU2_TR(0x5962b9);
{u32 ea_=u32(r4(R+16)+u32(600u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5962c0:{NFSU2_TR(0x5962c0);
u8 U[8];
w4(U+0,u32(u32(u32(0x258ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5962c7:{NFSU2_TR(0x5962c7);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5962c9:{NFSU2_TR(0x5962c9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5962cc:{NFSU2_TR(0x5962cc);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5962ce:{NFSU2_TR(0x5962ce);
{u32 ea_=u32(r4(R+24)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5962d1:L5962d1:{c.instructions+=42;NFSU2_TR(0x5962d1);
{u32 ea_=u32(r4(R+16)+u32(112u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5962d5:{NFSU2_TR(0x5962d5);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5962d9:{NFSU2_TR(0x5962d9);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5962dd:{NFSU2_TR(0x5962dd);
u8 U[4];
w4(U+0,u32(u32(u32(0x90ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5962e4:{NFSU2_TR(0x5962e4);
{u32 ea_=u32(r4(R+16)+u32(116u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5962e8:{NFSU2_TR(0x5962e8);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5962e9:{NFSU2_TR(0x5962e9);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5962ed:{NFSU2_TR(0x5962ed);
{u32 ea_=u32(r4(R+16)+u32(124u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5962f1:{NFSU2_TR(0x5962f1);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5962f5:{NFSU2_TR(0x5962f5);
{u32 ea_=u32(r4(R+16)+u32(540u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5962fc:{NFSU2_TR(0x5962fc);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5962fe:{NFSU2_TR(0x5962fe);
{u32 ea_=u32(r4(R+16)+u32(660u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B596305:{NFSU2_TR(0x596305);
{u32 ea_=u32(r4(R+16)+u32(540u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59630c:{NFSU2_TR(0x59630c);
{u32 ea_=u32(r4(R+16)+u32(660u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B596313:{NFSU2_TR(0x596313);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B596315:{NFSU2_TR(0x596315);
{u32 ea_=u32(r4(R+16)+u32(452u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59631c:{NFSU2_TR(0x59631c);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59631f:{NFSU2_TR(0x59631f);
__asm__ volatile(".byte 0xd8,0xc2":::"memory");
}
B596321:{NFSU2_TR(0x596321);
{u32 ea_=u32(r4(R+16)+u32(456u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B596328:{NFSU2_TR(0x596328);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59632b:{NFSU2_TR(0x59632b);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B59632f:{NFSU2_TR(0x59632f);
__asm__ volatile(".byte 0xd8,0xc1":::"memory");
}
B596331:{NFSU2_TR(0x596331);
__asm__ volatile(".byte 0xdd,0xda":::"memory");
}
B596333:{NFSU2_TR(0x596333);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B596335:{NFSU2_TR(0x596335);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B596337:{NFSU2_TR(0x596337);
{u32 ea_=u32(r4(R+16)+u32(452u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B59633e:{NFSU2_TR(0x59633e);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B596341:{NFSU2_TR(0x596341);
{u32 ea_=u32(r4(R+16)+u32(456u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B596348:{NFSU2_TR(0x596348);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59634b:{NFSU2_TR(0x59634b);
u8 U[4];
w4(U+0,u32(u32(u32(0xe4ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B596352:{NFSU2_TR(0x596352);
__asm__ volatile(".byte 0xd8,0xe3":::"memory");
}
B596354:{NFSU2_TR(0x596354);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B596355:{NFSU2_TR(0x596355);
{u32 ea_=u32(r4(R+16)+u32(576u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59635c:{NFSU2_TR(0x59635c);
u8 U[8];
w4(U+0,u32(u32(u32(0x240ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B596363:{NFSU2_TR(0x596363);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B596365:{NFSU2_TR(0x596365);
{u32 ea_=u32(r4(R+16)+u32(232u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59636c:{NFSU2_TR(0x59636c);
u8 U[8];
w4(U+0,u32(u32(u32(0xf0ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B596373:{NFSU2_TR(0x596373);
u8 U[4];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B596377:{NFSU2_TR(0x596377);
{u32 ea_=u32(r4(R+16)+u32(236u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59637e:{NFSU2_TR(0x59637e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59637f:{NFSU2_TR(0x59637f);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B596381:{NFSU2_TR(0x596381);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x596386ull));
TAIL_STATIC(0x43d1e0u,43d);
}
B596386:L596386:{c.instructions+=7;NFSU2_TR(0x596386);
u8 U[4];
w4(U+0,u32(u32(u32(0x5cull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B59638a:{NFSU2_TR(0x59638a);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59638b:{NFSU2_TR(0x59638b);
u8 U[4];
w4(U+0,u32(u32(u32(0xa0ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B596392:{NFSU2_TR(0x596392);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B596393:{NFSU2_TR(0x596393);
u8 U[4];
w4(U+0,u32(u32(u32(0x64ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B596397:{NFSU2_TR(0x596397);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B596398:{NFSU2_TR(0x596398);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x59639dull));
TAIL_STATIC(0x43d1e0u,43d);
}
B59639d:L59639d:{c.instructions+=9;NFSU2_TR(0x59639d);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5963a1:{NFSU2_TR(0x5963a1);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5963a5:{NFSU2_TR(0x5963a5);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5963a6:{NFSU2_TR(0x5963a6);
u8 U[4];
w4(U+0,u32(u32(u32(0xacull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5963ad:{NFSU2_TR(0x5963ad);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5963ae:{NFSU2_TR(0x5963ae);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5963af:{NFSU2_TR(0x5963af);
u8 U[4];
w4(U+0,u32(u32(u32(0x1a4ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5963b6:{NFSU2_TR(0x5963b6);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5963b7:{NFSU2_TR(0x5963b7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5963bcull));
TAIL_STATIC(0x43d0c0u,43d);
}
B5963bc:L5963bc:{c.instructions+=21;NFSU2_TR(0x5963bc);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5963bf:{NFSU2_TR(0x5963bf);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5963c2:{NFSU2_TR(0x5963c2);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5963c4:{NFSU2_TR(0x5963c4);
u8 U[8];
w4(U+0,u32(u32(u32(0x54ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5963c8:{NFSU2_TR(0x5963c8);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5963ca:{NFSU2_TR(0x5963ca);
{u32 ea_=u32(r4(R+16)+u32(264u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5963d1:{NFSU2_TR(0x5963d1);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5963d4:{NFSU2_TR(0x5963d4);
__asm__ volatile(".byte 0xd8,0xea":::"memory");
}
B5963d6:{NFSU2_TR(0x5963d6);
{u32 ea_=u32(r4(R+16)+u32(268u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5963dd:{NFSU2_TR(0x5963dd);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5963e0:{NFSU2_TR(0x5963e0);
__asm__ volatile(".byte 0xd8,0xe9":::"memory");
}
B5963e2:{NFSU2_TR(0x5963e2);
u8 U[4];
w4(U+0,u32(u32(u32(0x98ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5963e9:{NFSU2_TR(0x5963e9);
{u32 ea_=u32(r4(R+16)+u32(272u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5963f0:{NFSU2_TR(0x5963f0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5963f1:{NFSU2_TR(0x5963f1);
u8 U[4];
w4(U+0,u32(u32(u32(0x10cull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5963f8:{NFSU2_TR(0x5963f8);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5963fa:{NFSU2_TR(0x5963fa);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5963fb:{NFSU2_TR(0x5963fb);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5963fd:{NFSU2_TR(0x5963fd);
u8 U[4];
w4(U+0,u32(u32(u32(0xd0ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B596404:{NFSU2_TR(0x596404);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B596405:{NFSU2_TR(0x596405);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x59640aull));
TAIL_STATIC(0x43d1e0u,43d);
}
B59640a:L59640a:{c.instructions+=7;NFSU2_TR(0x59640a);
u8 U[4];
w4(U+0,u32(u32(u32(0xd4ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B596411:{NFSU2_TR(0x596411);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B596412:{NFSU2_TR(0x596412);
u8 U[4];
w4(U+0,u32(u32(u32(0xa8ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B596419:{NFSU2_TR(0x596419);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59641a:{NFSU2_TR(0x59641a);
u8 U[4];
w4(U+0,u32(u32(u32(0xdcull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B596421:{NFSU2_TR(0x596421);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B596422:{NFSU2_TR(0x596422);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x596427ull));
TAIL_STATIC(0x43d1e0u,43d);
}
B596427:L596427:{c.instructions+=24;NFSU2_TR(0x596427);
u8 U[8];
w4(U+0,u32(u32(u32(0xccull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B59642e:{NFSU2_TR(0x59642e);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B596431:{NFSU2_TR(0x596431);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x40ull))));
}
B596434:{NFSU2_TR(0x596434);
{u32 ea_=u32(r4(R+24)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B596437:{NFSU2_TR(0x596437);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59643a:{NFSU2_TR(0x59643a);
{u32 ea_=u32(r4(R+24)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59643d:{NFSU2_TR(0x59643d);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B59643f:{NFSU2_TR(0x59643f);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B596441:{NFSU2_TR(0x596441);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B596443:{NFSU2_TR(0x596443);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B596447:{NFSU2_TR(0x596447);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B596449:{NFSU2_TR(0x596449);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59644c:{NFSU2_TR(0x59644c);
{u32 ea_=u32(r4(R+24)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59644f:{NFSU2_TR(0x59644f);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B596452:{NFSU2_TR(0x596452);
{u32 ea_=u32(r4(R+24)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B596455:{NFSU2_TR(0x596455);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B596457:{NFSU2_TR(0x596457);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B596459:{NFSU2_TR(0x596459);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59645b:{NFSU2_TR(0x59645b);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B59645d:{NFSU2_TR(0x59645d);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B596461:{NFSU2_TR(0x596461);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B596463:{NFSU2_TR(0x596463);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B596465:{NFSU2_TR(0x596465);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B596468:{NFSU2_TR(0x596468);
if(r1(R+514)){{goto L596470;}}
}
B59646a:L59646a:{c.instructions+=2;NFSU2_TR(0x59646a);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B59646c:{NFSU2_TR(0x59646c);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B596470:L596470:{c.instructions+=22;NFSU2_TR(0x596470);
{u32 ea_=u32(r4(R+12)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B596473:{NFSU2_TR(0x596473);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B596477:{NFSU2_TR(0x596477);
{u32 ea_=u32(r4(R+24)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59647a:{NFSU2_TR(0x59647a);
{u32 ea_=u32(r4(R+12)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59647d:{NFSU2_TR(0x59647d);
{u32 ea_=u32(r4(R+24)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B596480:{NFSU2_TR(0x596480);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B596482:{NFSU2_TR(0x596482);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B596484:{NFSU2_TR(0x596484);
{u32 ea_=u32(r4(R+12));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B596486:{NFSU2_TR(0x596486);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B596488:{NFSU2_TR(0x596488);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59648b:{NFSU2_TR(0x59648b);
{u32 ea_=u32(r4(R+24)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59648e:{NFSU2_TR(0x59648e);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B596491:{NFSU2_TR(0x596491);
{u32 ea_=u32(r4(R+24)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B596494:{NFSU2_TR(0x596494);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B596496:{NFSU2_TR(0x596496);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B596498:{NFSU2_TR(0x596498);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59649a:{NFSU2_TR(0x59649a);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B59649c:{NFSU2_TR(0x59649c);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B5964a0:{NFSU2_TR(0x5964a0);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B5964a2:{NFSU2_TR(0x5964a2);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5964a4:{NFSU2_TR(0x5964a4);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5964a7:{NFSU2_TR(0x5964a7);
if(r1(R+514)){{goto L5964af;}}
}
B5964a9:L5964a9:{c.instructions+=2;NFSU2_TR(0x5964a9);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5964ab:{NFSU2_TR(0x5964ab);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5964af:L5964af:{c.instructions+=24;NFSU2_TR(0x5964af);
u8 U[8];
w4(U+0,u32(u32(u32(0x8cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5964b6:{NFSU2_TR(0x5964b6);
__asm__ volatile(".byte 0xde,0xe1":::"memory");
}
B5964b8:{NFSU2_TR(0x5964b8);
{u32 ea_=u32(r4(R+16)+u32(84u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5964bc:{NFSU2_TR(0x5964bc);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5964c0:{NFSU2_TR(0x5964c0);
{u32 ea_=u32(r4(R+8)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5964c3:{NFSU2_TR(0x5964c3);
{u32 ea_=u32(r4(R+16)+u32(88u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5964c7:{NFSU2_TR(0x5964c7);
{u32 ea_=u32(r4(R+8)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5964ca:{NFSU2_TR(0x5964ca);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5964cc:{NFSU2_TR(0x5964cc);
{u32 ea_=u32(r4(R+16)+u32(80u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5964d0:{NFSU2_TR(0x5964d0);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5964d2:{NFSU2_TR(0x5964d2);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5964d4:{NFSU2_TR(0x5964d4);
{u32 ea_=u32(r4(R+16)+u32(84u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5964d8:{NFSU2_TR(0x5964d8);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5964db:{NFSU2_TR(0x5964db);
{u32 ea_=u32(r4(R+16)+u32(88u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5964df:{NFSU2_TR(0x5964df);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5964e2:{NFSU2_TR(0x5964e2);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5964e4:{NFSU2_TR(0x5964e4);
{u32 ea_=u32(r4(R+16)+u32(80u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5964e8:{NFSU2_TR(0x5964e8);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5964ea:{NFSU2_TR(0x5964ea);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5964ec:{NFSU2_TR(0x5964ec);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B5964f0:{NFSU2_TR(0x5964f0);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B5964f2:{NFSU2_TR(0x5964f2);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5964f4:{NFSU2_TR(0x5964f4);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5964f7:{NFSU2_TR(0x5964f7);
if(r1(R+514)){{goto L5964ff;}}
}
B5964f9:L5964f9:{c.instructions+=2;NFSU2_TR(0x5964f9);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5964fb:{NFSU2_TR(0x5964fb);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5964ff:L5964ff:{c.instructions+=21;NFSU2_TR(0x5964ff);
{u32 ea_=u32(r4(R+16)+u32(88u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B596503:{NFSU2_TR(0x596503);
{u32 ea_=u32(r4(R+12)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B596506:{NFSU2_TR(0x596506);
{u32 ea_=u32(r4(R+16)+u32(84u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59650a:{NFSU2_TR(0x59650a);
{u32 ea_=u32(r4(R+12)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59650d:{NFSU2_TR(0x59650d);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B59650f:{NFSU2_TR(0x59650f);
{u32 ea_=u32(r4(R+16)+u32(80u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B596513:{NFSU2_TR(0x596513);
{u32 ea_=u32(r4(R+12));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B596515:{NFSU2_TR(0x596515);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B596517:{NFSU2_TR(0x596517);
{u32 ea_=u32(r4(R+16)+u32(84u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59651b:{NFSU2_TR(0x59651b);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59651e:{NFSU2_TR(0x59651e);
{u32 ea_=u32(r4(R+16)+u32(88u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B596522:{NFSU2_TR(0x596522);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B596525:{NFSU2_TR(0x596525);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B596527:{NFSU2_TR(0x596527);
{u32 ea_=u32(r4(R+16)+u32(80u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59652b:{NFSU2_TR(0x59652b);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59652d:{NFSU2_TR(0x59652d);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B59652f:{NFSU2_TR(0x59652f);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B596533:{NFSU2_TR(0x596533);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B596535:{NFSU2_TR(0x596535);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B596537:{NFSU2_TR(0x596537);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B59653a:{NFSU2_TR(0x59653a);
if(r1(R+514)){{goto L596542;}}
}
B59653c:L59653c:{c.instructions+=2;NFSU2_TR(0x59653c);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B59653e:{NFSU2_TR(0x59653e);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B596542:L596542:{c.instructions+=6;NFSU2_TR(0x596542);
__asm__ volatile(".byte 0xde,0xe1":::"memory");
}
B596544:{NFSU2_TR(0x596544);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B596548:{NFSU2_TR(0x596548);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B59654a:{NFSU2_TR(0x59654a);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B59654c:{NFSU2_TR(0x59654c);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B59654f:{NFSU2_TR(0x59654f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L59656b;}}
}
B596551:L596551:{c.instructions+=8;NFSU2_TR(0x596551);
u8 U[8];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B596555:{NFSU2_TR(0x596555);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B596557:{NFSU2_TR(0x596557);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59655b:{NFSU2_TR(0x59655b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+24)),r4(U+0));
}
B59655d:{NFSU2_TR(0x59655d);
u8 U[8];
w4(U+0,u32(u32(u32(0x54ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B596561:{NFSU2_TR(0x596561);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B596564:{NFSU2_TR(0x596564);
u8 U[8];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B596568:{NFSU2_TR(0x596568);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B59656b:L59656b:{c.instructions+=22;NFSU2_TR(0x59656b);
{u32 ea_=u32(r4(R+16)+u32(164u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B596572:{NFSU2_TR(0x596572);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B596576:{NFSU2_TR(0x596576);
{u32 ea_=u32(r4(R+8)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B596579:{NFSU2_TR(0x596579);
{u32 ea_=u32(r4(R+16)+u32(168u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B596580:{NFSU2_TR(0x596580);
{u32 ea_=u32(r4(R+8)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B596583:{NFSU2_TR(0x596583);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B596585:{NFSU2_TR(0x596585);
{u32 ea_=u32(r4(R+16)+u32(160u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59658c:{NFSU2_TR(0x59658c);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59658e:{NFSU2_TR(0x59658e);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B596590:{NFSU2_TR(0x596590);
{u32 ea_=u32(r4(R+16)+u32(164u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B596597:{NFSU2_TR(0x596597);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59659a:{NFSU2_TR(0x59659a);
{u32 ea_=u32(r4(R+16)+u32(168u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5965a1:{NFSU2_TR(0x5965a1);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5965a4:{NFSU2_TR(0x5965a4);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5965a6:{NFSU2_TR(0x5965a6);
{u32 ea_=u32(r4(R+16)+u32(160u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5965ad:{NFSU2_TR(0x5965ad);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5965af:{NFSU2_TR(0x5965af);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5965b1:{NFSU2_TR(0x5965b1);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B5965b5:{NFSU2_TR(0x5965b5);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B5965b7:{NFSU2_TR(0x5965b7);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5965b9:{NFSU2_TR(0x5965b9);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5965bc:{NFSU2_TR(0x5965bc);
if(r1(R+514)){{goto L5965c4;}}
}
B5965be:L5965be:{c.instructions+=2;NFSU2_TR(0x5965be);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5965c0:{NFSU2_TR(0x5965c0);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5965c4:L5965c4:{c.instructions+=21;NFSU2_TR(0x5965c4);
{u32 ea_=u32(r4(R+16)+u32(164u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5965cb:{NFSU2_TR(0x5965cb);
{u32 ea_=u32(r4(R+12)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5965ce:{NFSU2_TR(0x5965ce);
{u32 ea_=u32(r4(R+16)+u32(168u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5965d5:{NFSU2_TR(0x5965d5);
{u32 ea_=u32(r4(R+12)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5965d8:{NFSU2_TR(0x5965d8);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5965da:{NFSU2_TR(0x5965da);
{u32 ea_=u32(r4(R+16)+u32(160u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5965e1:{NFSU2_TR(0x5965e1);
{u32 ea_=u32(r4(R+12));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5965e3:{NFSU2_TR(0x5965e3);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5965e5:{NFSU2_TR(0x5965e5);
{u32 ea_=u32(r4(R+16)+u32(164u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5965ec:{NFSU2_TR(0x5965ec);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5965ef:{NFSU2_TR(0x5965ef);
{u32 ea_=u32(r4(R+16)+u32(168u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5965f6:{NFSU2_TR(0x5965f6);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5965f9:{NFSU2_TR(0x5965f9);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5965fb:{NFSU2_TR(0x5965fb);
{u32 ea_=u32(r4(R+16)+u32(160u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B596602:{NFSU2_TR(0x596602);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B596604:{NFSU2_TR(0x596604);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B596606:{NFSU2_TR(0x596606);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B59660a:{NFSU2_TR(0x59660a);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B59660c:{NFSU2_TR(0x59660c);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B59660e:{NFSU2_TR(0x59660e);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B596611:{NFSU2_TR(0x596611);
if(r1(R+514)){{goto L596619;}}
}
B596613:L596613:{c.instructions+=2;NFSU2_TR(0x596613);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B596615:{NFSU2_TR(0x596615);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B596619:L596619:{c.instructions+=7;NFSU2_TR(0x596619);
__asm__ volatile(".byte 0xd8,0xe1":::"memory");
}
B59661b:{NFSU2_TR(0x59661b);
__asm__ volatile(".byte 0xd8,0xda":::"memory");
}
B59661d:{NFSU2_TR(0x59661d);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B59661f:{NFSU2_TR(0x59661f);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B596621:{NFSU2_TR(0x596621);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B596624:{NFSU2_TR(0x596624);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B596626:{NFSU2_TR(0x596626);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L59687d;}}
}
B59662c:L59662c:{c.instructions+=7;NFSU2_TR(0x59662c);
u8 U[8];
w4(U+0,u32(u32(u32(0xa0ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B596633:{NFSU2_TR(0x596633);
u8 U[8];
w4(U+0,u32(u32(u32(0xa4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B59663a:{NFSU2_TR(0x59663a);
u8 U[8];
w4(U+0,u32(u32(u32(0xa8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B596641:{NFSU2_TR(0x596641);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+24)),r4(U+0));
}
B596643:{NFSU2_TR(0x596643);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B596646:{NFSU2_TR(0x596646);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B596649:{NFSU2_TR(0x596649);
{goto L59687d;}
}
B59664e:L59664e:{c.instructions+=41;NFSU2_TR(0x59664e);
{u32 ea_=u32(r4(R+16)+u32(112u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B596652:{NFSU2_TR(0x596652);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B596656:{NFSU2_TR(0x596656);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59665a:{NFSU2_TR(0x59665a);
u8 U[4];
w4(U+0,u32(u32(u32(0x90ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B596661:{NFSU2_TR(0x596661);
{u32 ea_=u32(r4(R+16)+u32(116u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B596665:{NFSU2_TR(0x596665);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B596666:{NFSU2_TR(0x596666);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59666a:{NFSU2_TR(0x59666a);
{u32 ea_=u32(r4(R+16)+u32(124u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59666e:{NFSU2_TR(0x59666e);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B596672:{NFSU2_TR(0x596672);
{u32 ea_=u32(r4(R+16)+u32(636u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B596679:{NFSU2_TR(0x596679);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B59667b:{NFSU2_TR(0x59667b);
{u32 ea_=u32(r4(R+16)+u32(500u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B596682:{NFSU2_TR(0x596682);
{u32 ea_=u32(r4(R+16)+u32(636u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B596689:{NFSU2_TR(0x596689);
{u32 ea_=u32(r4(R+16)+u32(500u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B596690:{NFSU2_TR(0x596690);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B596692:{NFSU2_TR(0x596692);
{u32 ea_=u32(r4(R+16)+u32(420u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B596699:{NFSU2_TR(0x596699);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59669c:{NFSU2_TR(0x59669c);
__asm__ volatile(".byte 0xd8,0xc2":::"memory");
}
B59669e:{NFSU2_TR(0x59669e);
{u32 ea_=u32(r4(R+16)+u32(424u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5966a5:{NFSU2_TR(0x5966a5);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5966a8:{NFSU2_TR(0x5966a8);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5966ac:{NFSU2_TR(0x5966ac);
__asm__ volatile(".byte 0xd8,0xc1":::"memory");
}
B5966ae:{NFSU2_TR(0x5966ae);
__asm__ volatile(".byte 0xdd,0xda":::"memory");
}
B5966b0:{NFSU2_TR(0x5966b0);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5966b2:{NFSU2_TR(0x5966b2);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5966b4:{NFSU2_TR(0x5966b4);
{u32 ea_=u32(r4(R+16)+u32(420u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5966bb:{NFSU2_TR(0x5966bb);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5966be:{NFSU2_TR(0x5966be);
{u32 ea_=u32(r4(R+16)+u32(424u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5966c5:{NFSU2_TR(0x5966c5);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5966c8:{NFSU2_TR(0x5966c8);
u8 U[4];
w4(U+0,u32(u32(u32(0xe4ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5966cf:{NFSU2_TR(0x5966cf);
__asm__ volatile(".byte 0xd8,0xe3":::"memory");
}
B5966d1:{NFSU2_TR(0x5966d1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5966d2:{NFSU2_TR(0x5966d2);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5966d3:{NFSU2_TR(0x5966d3);
{u32 ea_=u32(r4(R+16)+u32(532u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5966da:{NFSU2_TR(0x5966da);
u8 U[8];
w4(U+0,u32(u32(u32(0x214ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5966e1:{NFSU2_TR(0x5966e1);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5966e3:{NFSU2_TR(0x5966e3);
{u32 ea_=u32(r4(R+16)+u32(236u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5966ea:{NFSU2_TR(0x5966ea);
{u32 ea_=u32(r4(R+16)+u32(240u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5966f1:{NFSU2_TR(0x5966f1);
u8 U[8];
w4(U+0,u32(u32(u32(0xf4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5966f8:{NFSU2_TR(0x5966f8);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5966fa:{NFSU2_TR(0x5966fa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5966ffull));
TAIL_STATIC(0x43d1e0u,43d);
}
B5966ff:L5966ff:{c.instructions+=5;NFSU2_TR(0x5966ff);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B596700:{NFSU2_TR(0x596700);
u8 U[4];
w4(U+0,u32(u32(u32(0xa0ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B596707:{NFSU2_TR(0x596707);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B596708:{NFSU2_TR(0x596708);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B596709:{NFSU2_TR(0x596709);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x59670eull));
TAIL_STATIC(0x43d1e0u,43d);
}
B59670e:L59670e:{c.instructions+=2;NFSU2_TR(0x59670e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B596711:{NFSU2_TR(0x596711);
{goto L59687d;}
}
B596716:L596716:{c.instructions+=6;NFSU2_TR(0x596716);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59671a:{NFSU2_TR(0x59671a);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B596722:{NFSU2_TR(0x596722);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B596728:{NFSU2_TR(0x596728);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B59672a:{NFSU2_TR(0x59672a);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B59672d:{NFSU2_TR(0x59672d);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L596737;}}
}
B59672f:L59672f:{c.instructions+=1;NFSU2_TR(0x59672f);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B596737:L596737:{c.instructions+=9;NFSU2_TR(0x596737);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59673b:{NFSU2_TR(0x59673b);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59673f:{NFSU2_TR(0x59673f);
{u32 ea_=u32(r4(R+16)+u32(136u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B596746:{NFSU2_TR(0x596746);
{u32 ea_=u32(r4(R+16)+u32(380u));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B59674d:{NFSU2_TR(0x59674d);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B596751:{NFSU2_TR(0x596751);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B596757:{NFSU2_TR(0x596757);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B596759:{NFSU2_TR(0x596759);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B59675c:{NFSU2_TR(0x59675c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5967f0;}}
}
B596762:L596762:{c.instructions+=5;NFSU2_TR(0x596762);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B596766:{NFSU2_TR(0x596766);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B59676c:{NFSU2_TR(0x59676c);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B59676e:{NFSU2_TR(0x59676e);
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
B596771:{NFSU2_TR(0x596771);
if(r1(R+514)){{goto L5967f0;}}
}
B596773:L596773:{c.instructions+=9;NFSU2_TR(0x596773);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B596777:{NFSU2_TR(0x596777);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B59677b:{NFSU2_TR(0x59677b);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59677c:{NFSU2_TR(0x59677c);
u8 U[4];
w4(U+0,u32(u32(u32(0x94ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B596783:{NFSU2_TR(0x596783);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B596784:{NFSU2_TR(0x596784);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B596785:{NFSU2_TR(0x596785);
u8 U[4];
w4(U+0,u32(u32(u32(0x18cull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B59678c:{NFSU2_TR(0x59678c);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59678d:{NFSU2_TR(0x59678d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x596792ull));
TAIL_STATIC(0x43d0c0u,43d);
}
B596792:L596792:{c.instructions+=20;NFSU2_TR(0x596792);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B596795:{NFSU2_TR(0x596795);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B596798:{NFSU2_TR(0x596798);
u8 U[4];
w4(U+0,u32(u32(u32(0xf0ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B59679f:{NFSU2_TR(0x59679f);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5967a1:{NFSU2_TR(0x5967a1);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5967a5:{NFSU2_TR(0x5967a5);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5967a7:{NFSU2_TR(0x5967a7);
{u32 ea_=u32(r4(R+16)+u32(240u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5967ae:{NFSU2_TR(0x5967ae);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5967b1:{NFSU2_TR(0x5967b1);
__asm__ volatile(".byte 0xd8,0xea":::"memory");
}
B5967b3:{NFSU2_TR(0x5967b3);
{u32 ea_=u32(r4(R+16)+u32(244u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5967ba:{NFSU2_TR(0x5967ba);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5967bd:{NFSU2_TR(0x5967bd);
u8 U[4];
w4(U+0,u32(u32(u32(0x80ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5967c4:{NFSU2_TR(0x5967c4);
__asm__ volatile(".byte 0xd8,0xe9":::"memory");
}
B5967c6:{NFSU2_TR(0x5967c6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5967c7:{NFSU2_TR(0x5967c7);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5967c8:{NFSU2_TR(0x5967c8);
{u32 ea_=u32(r4(R+16)+u32(256u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5967cf:{NFSU2_TR(0x5967cf);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5967d0:{NFSU2_TR(0x5967d0);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5967d2:{NFSU2_TR(0x5967d2);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5967d4:{NFSU2_TR(0x5967d4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5967d9ull));
TAIL_STATIC(0x43d1e0u,43d);
}
B5967d9:L5967d9:{c.instructions+=5;NFSU2_TR(0x5967d9);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5967da:{NFSU2_TR(0x5967da);
u8 U[4];
w4(U+0,u32(u32(u32(0x90ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5967e1:{NFSU2_TR(0x5967e1);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5967e2:{NFSU2_TR(0x5967e2);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5967e3:{NFSU2_TR(0x5967e3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5967e8ull));
TAIL_STATIC(0x43d1e0u,43d);
}
B5967e8:L5967e8:{c.instructions+=2;NFSU2_TR(0x5967e8);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x28ull))));
}
B5967eb:{NFSU2_TR(0x5967eb);
{goto L59687d;}
}
B5967f0:L5967f0:{c.instructions+=6;NFSU2_TR(0x5967f0);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5967f4:{NFSU2_TR(0x5967f4);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5967fc:{NFSU2_TR(0x5967fc);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B596802:{NFSU2_TR(0x596802);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B596804:{NFSU2_TR(0x596804);
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
B596807:{NFSU2_TR(0x596807);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L596811;}}
}
B596809:L596809:{c.instructions+=1;NFSU2_TR(0x596809);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B596811:L596811:{c.instructions+=9;NFSU2_TR(0x596811);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B596815:{NFSU2_TR(0x596815);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B596819:{NFSU2_TR(0x596819);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59681a:{NFSU2_TR(0x59681a);
u8 U[4];
w4(U+0,u32(u32(u32(0x74ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B59681e:{NFSU2_TR(0x59681e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59681f:{NFSU2_TR(0x59681f);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B596820:{NFSU2_TR(0x596820);
u8 U[4];
w4(U+0,u32(u32(u32(0x18cull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B596827:{NFSU2_TR(0x596827);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B596828:{NFSU2_TR(0x596828);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x59682dull));
TAIL_STATIC(0x43d0c0u,43d);
}
B59682d:L59682d:{c.instructions+=10;NFSU2_TR(0x59682d);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B596831:{NFSU2_TR(0x596831);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B596832:{NFSU2_TR(0x596832);
u8 U[4];
w4(U+0,u32(u32(u32(0xa4ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B596839:{NFSU2_TR(0x596839);
__builtin_memmove((R+12),(R+0),4);
}
B59683b:{NFSU2_TR(0x59683b);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B59683f:{NFSU2_TR(0x59683f);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B596840:{NFSU2_TR(0x596840);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B596841:{NFSU2_TR(0x596841);
u8 U[4];
w4(U+0,u32(u32(u32(0xfcull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B596848:{NFSU2_TR(0x596848);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B596849:{NFSU2_TR(0x596849);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x59684eull));
TAIL_STATIC(0x43d0c0u,43d);
}
B59684e:L59684e:{c.instructions+=15;NFSU2_TR(0x59684e);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B596851:{NFSU2_TR(0x596851);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B596854:{NFSU2_TR(0x596854);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B596857:{NFSU2_TR(0x596857);
{u32 ea_=u32(r4(R+12)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59685a:{NFSU2_TR(0x59685a);
u8 U[8];
w4(U+0,u32(u32(u32(0x1dcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B596861:{NFSU2_TR(0x596861);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B596863:{NFSU2_TR(0x596863);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x20ull))));
}
B596866:{NFSU2_TR(0x596866);
{u32 ea_=u32(r4(R+12));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B596868:{NFSU2_TR(0x596868);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59686a:{NFSU2_TR(0x59686a);
__asm__ volatile(".byte 0xd9,0xca":::"memory");
}
B59686c:{NFSU2_TR(0x59686c);
__asm__ volatile(".byte 0xd8,0xe2":::"memory");
}
B59686e:{NFSU2_TR(0x59686e);
{u32 ea_=u32(r4(R+24)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B596871:{NFSU2_TR(0x596871);
__asm__ volatile(".byte 0xdd,0xd9":::"memory");
}
B596873:{NFSU2_TR(0x596873);
{u32 ea_=u32(r4(R+16)+u32(444u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B59687a:{NFSU2_TR(0x59687a);
{u32 ea_=u32(r4(R+24)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59687d:L59687d:{c.instructions+=13;NFSU2_TR(0x59687d);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59687f:{NFSU2_TR(0x59687f);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B596883:{NFSU2_TR(0x596883);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x4ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B596886:{NFSU2_TR(0x596886);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B596888:{NFSU2_TR(0x596888);
{u32 ea_=u32(r4(R+24)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59688b:{NFSU2_TR(0x59688b);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B596893:{NFSU2_TR(0x596893);
{u32 ea_=u32(r4(R+28)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B596896:{NFSU2_TR(0x596896);
w4(R+8,u32(0x1ull));
}
B59689b:{NFSU2_TR(0x59689b);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B59689d:{NFSU2_TR(0x59689d);
{u32 ea_=u32(r4(R+24)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5968a0:{NFSU2_TR(0x5968a0);
{u32 ea_=u32(r4(R+28)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5968a3:{NFSU2_TR(0x5968a3);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5968a5:{NFSU2_TR(0x5968a5);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L59697d;}}
}
B5968ab:L5968ab:{c.instructions+=2;NFSU2_TR(0x5968ab);
w4(R+12,u32(0x4ull));
}
B5968b0:{NFSU2_TR(0x5968b0);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x24ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5968b3:L5968b3:{c.instructions+=13;NFSU2_TR(0x5968b3);
{u32 ea_=u32(r4(R+4)+u32(4294967276u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5968b6:{NFSU2_TR(0x5968b6);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5968b8:{NFSU2_TR(0x5968b8);
{u32 ea_=u32(r4(R+4)+u32(4294967284u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5968bb:{NFSU2_TR(0x5968bb);
{u32 ea_=u32(r4(R+24)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5968be:{NFSU2_TR(0x5968be);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5968c0:{NFSU2_TR(0x5968c0);
{u32 ea_=u32(r4(R+4)+u32(4294967280u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5968c3:{NFSU2_TR(0x5968c3);
{u32 ea_=u32(r4(R+24)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5968c6:{NFSU2_TR(0x5968c6);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5968c8:{NFSU2_TR(0x5968c8);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B5968cc:{NFSU2_TR(0x5968cc);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B5968ce:{NFSU2_TR(0x5968ce);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5968d0:{NFSU2_TR(0x5968d0);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5968d3:{NFSU2_TR(0x5968d3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5968df;}}
}
B5968d5:L5968d5:{c.instructions+=3;NFSU2_TR(0x5968d5);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5968d7:{NFSU2_TR(0x5968d7);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5968db:{NFSU2_TR(0x5968db);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5968df:L5968df:{c.instructions+=13;NFSU2_TR(0x5968df);
{u32 ea_=u32(r4(R+4)+u32(4294967292u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5968e2:{NFSU2_TR(0x5968e2);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5968e4:{NFSU2_TR(0x5968e4);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5968e7:{NFSU2_TR(0x5968e7);
{u32 ea_=u32(r4(R+24)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5968ea:{NFSU2_TR(0x5968ea);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5968ec:{NFSU2_TR(0x5968ec);
{u32 ea_=u32(r4(R+24)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5968ef:{NFSU2_TR(0x5968ef);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5968f1:{NFSU2_TR(0x5968f1);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5968f3:{NFSU2_TR(0x5968f3);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B5968f7:{NFSU2_TR(0x5968f7);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B5968f9:{NFSU2_TR(0x5968f9);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5968fb:{NFSU2_TR(0x5968fb);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5968fe:{NFSU2_TR(0x5968fe);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L59690d;}}
}
B596900:L596900:{c.instructions+=4;NFSU2_TR(0x596900);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xfffffffeull))));
__builtin_memmove((R+0),(U+0),4);
}
B596903:{NFSU2_TR(0x596903);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B596905:{NFSU2_TR(0x596905);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B596909:{NFSU2_TR(0x596909);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B59690d:L59690d:{c.instructions+=13;NFSU2_TR(0x59690d);
{u32 ea_=u32(r4(R+4)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B596910:{NFSU2_TR(0x596910);
{u32 ea_=u32(r4(R+24)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B596913:{NFSU2_TR(0x596913);
{u32 ea_=u32(r4(R+4)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B596916:{NFSU2_TR(0x596916);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B596918:{NFSU2_TR(0x596918);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B59691a:{NFSU2_TR(0x59691a);
{u32 ea_=u32(r4(R+4)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59691d:{NFSU2_TR(0x59691d);
{u32 ea_=u32(r4(R+24)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B596920:{NFSU2_TR(0x596920);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B596922:{NFSU2_TR(0x596922);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B596926:{NFSU2_TR(0x596926);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B596928:{NFSU2_TR(0x596928);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B59692a:{NFSU2_TR(0x59692a);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B59692d:{NFSU2_TR(0x59692d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L59693c;}}
}
B59692f:L59692f:{c.instructions+=4;NFSU2_TR(0x59692f);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xffffffffull))));
__builtin_memmove((R+0),(U+0),4);
}
B596932:{NFSU2_TR(0x596932);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B596934:{NFSU2_TR(0x596934);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B596938:{NFSU2_TR(0x596938);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B59693c:L59693c:{c.instructions+=13;NFSU2_TR(0x59693c);
{u32 ea_=u32(r4(R+4)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59693f:{NFSU2_TR(0x59693f);
{u32 ea_=u32(r4(R+24)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B596942:{NFSU2_TR(0x596942);
{u32 ea_=u32(r4(R+4)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B596945:{NFSU2_TR(0x596945);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B596947:{NFSU2_TR(0x596947);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B596949:{NFSU2_TR(0x596949);
{u32 ea_=u32(r4(R+4)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59694c:{NFSU2_TR(0x59694c);
{u32 ea_=u32(r4(R+24)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59694f:{NFSU2_TR(0x59694f);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B596951:{NFSU2_TR(0x596951);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B596955:{NFSU2_TR(0x596955);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B596957:{NFSU2_TR(0x596957);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B596959:{NFSU2_TR(0x596959);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B59695c:{NFSU2_TR(0x59695c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L596968;}}
}
B59695e:L59695e:{c.instructions+=3;NFSU2_TR(0x59695e);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B596960:{NFSU2_TR(0x596960);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B596964:{NFSU2_TR(0x596964);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B596968:L596968:{c.instructions+=6;NFSU2_TR(0x596968);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B59696c:{NFSU2_TR(0x59696c);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x4ull))));
}
B59696f:{NFSU2_TR(0x59696f);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x4ull))));
}
B596972:{NFSU2_TR(0x596972);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x40ull))));
}
B596975:{NFSU2_TR(0x596975);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+12),r4(U+0)));
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B596977:{NFSU2_TR(0x596977);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5968b3u);}goto L5968b3;}}
}
B59697d:L59697d:{c.instructions+=3;NFSU2_TR(0x59697d);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B596981:{NFSU2_TR(0x596981);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+8),r4(U+0)));
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B596983:{NFSU2_TR(0x596983);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L5969c3;}}
}
B596985:L596985:{c.instructions+=4;NFSU2_TR(0x596985);
__builtin_memmove((R+4),(R+8),4);
}
B596987:{NFSU2_TR(0x596987);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B59698a:{NFSU2_TR(0x59698a);
u8 U[12];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B59698e:{NFSU2_TR(0x59698e);
__builtin_memmove((R+28),(R+28),4);
}
B596990:L596990:{c.instructions+=13;NFSU2_TR(0x596990);
{u32 ea_=u32(r4(R+4)+u32(4294967292u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B596993:{NFSU2_TR(0x596993);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B596995:{NFSU2_TR(0x596995);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B596998:{NFSU2_TR(0x596998);
{u32 ea_=u32(r4(R+24)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59699b:{NFSU2_TR(0x59699b);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B59699d:{NFSU2_TR(0x59699d);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59699f:{NFSU2_TR(0x59699f);
{u32 ea_=u32(r4(R+24)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5969a2:{NFSU2_TR(0x5969a2);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5969a4:{NFSU2_TR(0x5969a4);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B5969a8:{NFSU2_TR(0x5969a8);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B5969aa:{NFSU2_TR(0x5969aa);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5969ac:{NFSU2_TR(0x5969ac);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5969af:{NFSU2_TR(0x5969af);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5969bb;}}
}
B5969b1:L5969b1:{c.instructions+=3;NFSU2_TR(0x5969b1);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5969b3:{NFSU2_TR(0x5969b3);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5969b7:{NFSU2_TR(0x5969b7);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5969bb:L5969bb:{c.instructions+=4;NFSU2_TR(0x5969bb);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B5969bc:{NFSU2_TR(0x5969bc);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x10ull))));
}
B5969bf:{NFSU2_TR(0x5969bf);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+8),r4(U+0)));
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5969c1:{NFSU2_TR(0x5969c1);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x596990u);}goto L596990;}}
}
B5969c3:L5969c3:{c.instructions+=13;NFSU2_TR(0x5969c3);
{u32 ea_=u32(r4(R+28)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5969c6:{NFSU2_TR(0x5969c6);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5969ca:{NFSU2_TR(0x5969ca);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x4ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5969cd:{NFSU2_TR(0x5969cd);
{u32 ea_=u32(r4(R+24)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5969d0:{NFSU2_TR(0x5969d0);
{u32 ea_=u32(r4(R+28)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5969d3:{NFSU2_TR(0x5969d3);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5969db:{NFSU2_TR(0x5969db);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5969dd:{NFSU2_TR(0x5969dd);
w4(R+8,u32(0x1ull));
}
B5969e2:{NFSU2_TR(0x5969e2);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5969e4:{NFSU2_TR(0x5969e4);
{u32 ea_=u32(r4(R+28)+u32(72u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5969e7:{NFSU2_TR(0x5969e7);
{u32 ea_=u32(r4(R+24)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5969ea:{NFSU2_TR(0x5969ea);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5969ec:{NFSU2_TR(0x5969ec);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L596ac4;}}
}
B5969f2:L5969f2:{c.instructions+=2;NFSU2_TR(0x5969f2);
w4(R+12,u32(0x4ull));
}
B5969f7:{NFSU2_TR(0x5969f7);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x54ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5969fa:L5969fa:{c.instructions+=13;NFSU2_TR(0x5969fa);
{u32 ea_=u32(r4(R+4)+u32(4294967292u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5969fd:{NFSU2_TR(0x5969fd);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5969ff:{NFSU2_TR(0x5969ff);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B596a02:{NFSU2_TR(0x596a02);
{u32 ea_=u32(r4(R+24)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B596a05:{NFSU2_TR(0x596a05);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B596a07:{NFSU2_TR(0x596a07);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B596a09:{NFSU2_TR(0x596a09);
{u32 ea_=u32(r4(R+24)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B596a0c:{NFSU2_TR(0x596a0c);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B596a0e:{NFSU2_TR(0x596a0e);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B596a12:{NFSU2_TR(0x596a12);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B596a14:{NFSU2_TR(0x596a14);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B596a16:{NFSU2_TR(0x596a16);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B596a19:{NFSU2_TR(0x596a19);
if(r1(R+514)){{goto L596a25;}}
}
B596a1b:L596a1b:{c.instructions+=3;NFSU2_TR(0x596a1b);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B596a1d:{NFSU2_TR(0x596a1d);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B596a21:{NFSU2_TR(0x596a21);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B596a25:L596a25:{c.instructions+=13;NFSU2_TR(0x596a25);
{u32 ea_=u32(r4(R+4)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B596a28:{NFSU2_TR(0x596a28);
{u32 ea_=u32(r4(R+24)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B596a2b:{NFSU2_TR(0x596a2b);
{u32 ea_=u32(r4(R+4)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B596a2e:{NFSU2_TR(0x596a2e);
{u32 ea_=u32(r4(R+24)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B596a31:{NFSU2_TR(0x596a31);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B596a33:{NFSU2_TR(0x596a33);
{u32 ea_=u32(r4(R+4)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B596a36:{NFSU2_TR(0x596a36);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B596a38:{NFSU2_TR(0x596a38);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B596a3a:{NFSU2_TR(0x596a3a);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B596a3e:{NFSU2_TR(0x596a3e);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B596a40:{NFSU2_TR(0x596a40);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B596a42:{NFSU2_TR(0x596a42);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B596a45:{NFSU2_TR(0x596a45);
if(r1(R+514)){{goto L596a54;}}
}
B596a47:L596a47:{c.instructions+=4;NFSU2_TR(0x596a47);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xfffffffeull))));
__builtin_memmove((R+0),(U+0),4);
}
B596a4a:{NFSU2_TR(0x596a4a);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B596a4c:{NFSU2_TR(0x596a4c);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B596a50:{NFSU2_TR(0x596a50);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B596a54:L596a54:{c.instructions+=13;NFSU2_TR(0x596a54);
{u32 ea_=u32(r4(R+4)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B596a57:{NFSU2_TR(0x596a57);
{u32 ea_=u32(r4(R+24)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B596a5a:{NFSU2_TR(0x596a5a);
{u32 ea_=u32(r4(R+4)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B596a5d:{NFSU2_TR(0x596a5d);
{u32 ea_=u32(r4(R+24)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B596a60:{NFSU2_TR(0x596a60);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B596a62:{NFSU2_TR(0x596a62);
{u32 ea_=u32(r4(R+4)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B596a65:{NFSU2_TR(0x596a65);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B596a67:{NFSU2_TR(0x596a67);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B596a69:{NFSU2_TR(0x596a69);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B596a6d:{NFSU2_TR(0x596a6d);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B596a6f:{NFSU2_TR(0x596a6f);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B596a71:{NFSU2_TR(0x596a71);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B596a74:{NFSU2_TR(0x596a74);
if(r1(R+514)){{goto L596a83;}}
}
B596a76:L596a76:{c.instructions+=4;NFSU2_TR(0x596a76);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xffffffffull))));
__builtin_memmove((R+0),(U+0),4);
}
B596a79:{NFSU2_TR(0x596a79);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B596a7b:{NFSU2_TR(0x596a7b);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B596a7f:{NFSU2_TR(0x596a7f);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B596a83:L596a83:{c.instructions+=13;NFSU2_TR(0x596a83);
{u32 ea_=u32(r4(R+4)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B596a86:{NFSU2_TR(0x596a86);
{u32 ea_=u32(r4(R+24)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B596a89:{NFSU2_TR(0x596a89);
{u32 ea_=u32(r4(R+4)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B596a8c:{NFSU2_TR(0x596a8c);
{u32 ea_=u32(r4(R+24)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B596a8f:{NFSU2_TR(0x596a8f);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B596a91:{NFSU2_TR(0x596a91);
{u32 ea_=u32(r4(R+4)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B596a94:{NFSU2_TR(0x596a94);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B596a96:{NFSU2_TR(0x596a96);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B596a98:{NFSU2_TR(0x596a98);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B596a9c:{NFSU2_TR(0x596a9c);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B596a9e:{NFSU2_TR(0x596a9e);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B596aa0:{NFSU2_TR(0x596aa0);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B596aa3:{NFSU2_TR(0x596aa3);
if(r1(R+514)){{goto L596aaf;}}
}
B596aa5:L596aa5:{c.instructions+=3;NFSU2_TR(0x596aa5);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B596aa7:{NFSU2_TR(0x596aa7);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B596aab:{NFSU2_TR(0x596aab);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B596aaf:L596aaf:{c.instructions+=6;NFSU2_TR(0x596aaf);
u8 U[8];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B596ab3:{NFSU2_TR(0x596ab3);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x4ull))));
}
B596ab6:{NFSU2_TR(0x596ab6);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x4ull))));
}
B596ab9:{NFSU2_TR(0x596ab9);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x40ull))));
}
B596abc:{NFSU2_TR(0x596abc);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+12),r4(U+0)));
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B596abe:{NFSU2_TR(0x596abe);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5969fau);}goto L5969fa;}}
}
B596ac4:L596ac4:{c.instructions+=3;NFSU2_TR(0x596ac4);
u8 U[8];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B596ac8:{NFSU2_TR(0x596ac8);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+8),r4(U+0)));
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B596aca:{NFSU2_TR(0x596aca);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L596b08;}}
}
B596acc:L596acc:{c.instructions+=3;NFSU2_TR(0x596acc);
__builtin_memmove((R+4),(R+8),4);
}
B596ace:{NFSU2_TR(0x596ace);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B596ad1:{NFSU2_TR(0x596ad1);
u8 U[12];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B596ad5:L596ad5:{c.instructions+=13;NFSU2_TR(0x596ad5);
{u32 ea_=u32(r4(R+4)+u32(4294967292u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B596ad8:{NFSU2_TR(0x596ad8);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B596ada:{NFSU2_TR(0x596ada);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B596add:{NFSU2_TR(0x596add);
{u32 ea_=u32(r4(R+24)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B596ae0:{NFSU2_TR(0x596ae0);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B596ae2:{NFSU2_TR(0x596ae2);
{u32 ea_=u32(r4(R+24)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B596ae5:{NFSU2_TR(0x596ae5);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B596ae7:{NFSU2_TR(0x596ae7);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B596ae9:{NFSU2_TR(0x596ae9);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B596aed:{NFSU2_TR(0x596aed);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B596aef:{NFSU2_TR(0x596aef);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B596af1:{NFSU2_TR(0x596af1);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B596af4:{NFSU2_TR(0x596af4);
if(r1(R+514)){{goto L596b00;}}
}
B596af6:L596af6:{c.instructions+=3;NFSU2_TR(0x596af6);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B596af8:{NFSU2_TR(0x596af8);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B596afc:{NFSU2_TR(0x596afc);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B596b00:L596b00:{c.instructions+=4;NFSU2_TR(0x596b00);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B596b01:{NFSU2_TR(0x596b01);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x10ull))));
}
B596b04:{NFSU2_TR(0x596b04);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+8),r4(U+0)));
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B596b06:{NFSU2_TR(0x596b06);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x596ad5u);}goto L596ad5;}}
}
B596b08:L596b08:{c.instructions+=5;NFSU2_TR(0x596b08);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B596b0a:{NFSU2_TR(0x596b0a);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B596b0c:{NFSU2_TR(0x596b0c);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B596b0e:{NFSU2_TR(0x596b0e);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B596b11:{NFSU2_TR(0x596b11);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L596dc1;}}
}
B596b17:L596b17:{c.instructions+=72;NFSU2_TR(0x596b17);
{u32 ea_=u32(r4(R+16)+u32(112u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B596b1b:{NFSU2_TR(0x596b1b);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B596b1f:{NFSU2_TR(0x596b1f);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B596b23:{NFSU2_TR(0x596b23);
{u32 ea_=u32(r4(R+16)+u32(116u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B596b27:{NFSU2_TR(0x596b27);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B596b2b:{NFSU2_TR(0x596b2b);
{u32 ea_=u32(r4(R+16)+u32(120u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B596b2f:{NFSU2_TR(0x596b2f);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B596b33:{NFSU2_TR(0x596b33);
{u32 ea_=u32(r4(R+16)+u32(552u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B596b3a:{NFSU2_TR(0x596b3a);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B596b3c:{NFSU2_TR(0x596b3c);
{u32 ea_=u32(r4(R+16)+u32(464u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B596b43:{NFSU2_TR(0x596b43);
{u32 ea_=u32(r4(R+16)+u32(468u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B596b4a:{NFSU2_TR(0x596b4a);
{u32 ea_=u32(r4(R+16)+u32(552u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B596b51:{NFSU2_TR(0x596b51);
{u32 ea_=u32(r4(R+16)+u32(464u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B596b58:{NFSU2_TR(0x596b58);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B596b5a:{NFSU2_TR(0x596b5a);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B596b5d:{NFSU2_TR(0x596b5d);
{u32 ea_=u32(r4(R+16)+u32(468u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B596b64:{NFSU2_TR(0x596b64);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B596b67:{NFSU2_TR(0x596b67);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B596b6b:{NFSU2_TR(0x596b6b);
__asm__ volatile(".byte 0xd8,0xc3":::"memory");
}
B596b6d:{NFSU2_TR(0x596b6d);
{u32 ea_=u32(r4(R+16)+u32(584u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B596b74:{NFSU2_TR(0x596b74);
u8 U[8];
w4(U+0,u32(u32(u32(0x248ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B596b7b:{NFSU2_TR(0x596b7b);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B596b7d:{NFSU2_TR(0x596b7d);
{u32 ea_=u32(r4(R+28)+u32(128u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B596b83:{NFSU2_TR(0x596b83);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x88ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B596b89:{NFSU2_TR(0x596b89);
{u32 ea_=u32(r4(R+28)+u32(132u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B596b8f:{NFSU2_TR(0x596b8f);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B596b91:{NFSU2_TR(0x596b91);
{u32 ea_=u32(r4(R+16)+u32(144u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B596b98:{NFSU2_TR(0x596b98);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B596b9c:{NFSU2_TR(0x596b9c);
{u32 ea_=u32(r4(R+16)+u32(148u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B596ba3:{NFSU2_TR(0x596ba3);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B596ba7:{NFSU2_TR(0x596ba7);
{u32 ea_=u32(r4(R+16)+u32(152u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B596bae:{NFSU2_TR(0x596bae);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B596bb2:{NFSU2_TR(0x596bb2);
{u32 ea_=u32(r4(R+16)+u32(616u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B596bb9:{NFSU2_TR(0x596bb9);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B596bbb:{NFSU2_TR(0x596bbb);
{u32 ea_=u32(r4(R+16)+u32(400u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B596bc2:{NFSU2_TR(0x596bc2);
{u32 ea_=u32(r4(R+16)+u32(404u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B596bc9:{NFSU2_TR(0x596bc9);
{u32 ea_=u32(r4(R+16)+u32(616u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B596bd0:{NFSU2_TR(0x596bd0);
{u32 ea_=u32(r4(R+16)+u32(400u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B596bd7:{NFSU2_TR(0x596bd7);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B596bd9:{NFSU2_TR(0x596bd9);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B596bdc:{NFSU2_TR(0x596bdc);
{u32 ea_=u32(r4(R+16)+u32(404u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B596be3:{NFSU2_TR(0x596be3);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B596be6:{NFSU2_TR(0x596be6);
__asm__ volatile(".byte 0xd8,0xc3":::"memory");
}
B596be8:{NFSU2_TR(0x596be8);
{u32 ea_=u32(r4(R+16)+u32(648u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B596bef:{NFSU2_TR(0x596bef);
u8 U[8];
w4(U+0,u32(u32(u32(0x288ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B596bf6:{NFSU2_TR(0x596bf6);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B596bf8:{NFSU2_TR(0x596bf8);
{u32 ea_=u32(r4(R+28)+u32(144u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B596bfe:{NFSU2_TR(0x596bfe);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x98ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B596c04:{NFSU2_TR(0x596c04);
{u32 ea_=u32(r4(R+28)+u32(148u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B596c0a:{NFSU2_TR(0x596c0a);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B596c0c:{NFSU2_TR(0x596c0c);
{u32 ea_=u32(r4(R+28)+u32(144u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B596c12:{NFSU2_TR(0x596c12);
{u32 ea_=u32(r4(R+28)+u32(128u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B596c18:{NFSU2_TR(0x596c18);
{u32 ea_=u32(r4(R+28)+u32(148u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B596c1e:{NFSU2_TR(0x596c1e);
{u32 ea_=u32(r4(R+28)+u32(132u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B596c24:{NFSU2_TR(0x596c24);
{u32 ea_=u32(r4(R+28)+u32(152u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B596c2a:{NFSU2_TR(0x596c2a);
{u32 ea_=u32(r4(R+28)+u32(136u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B596c30:{NFSU2_TR(0x596c30);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B596c32:{NFSU2_TR(0x596c32);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B596c34:{NFSU2_TR(0x596c34);
__asm__ volatile(".byte 0xd9,0xc2":::"memory");
}
B596c36:{NFSU2_TR(0x596c36);
__asm__ volatile(".byte 0xd8,0xcb":::"memory");
}
B596c38:{NFSU2_TR(0x596c38);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B596c3a:{NFSU2_TR(0x596c3a);
__asm__ volatile(".byte 0xd9,0xc3":::"memory");
}
B596c3c:{NFSU2_TR(0x596c3c);
__asm__ volatile(".byte 0xd8,0xcc":::"memory");
}
B596c3e:{NFSU2_TR(0x596c3e);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B596c40:{NFSU2_TR(0x596c40);
__asm__ volatile(".byte 0xdd,0xdb":::"memory");
}
B596c42:{NFSU2_TR(0x596c42);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B596c44:{NFSU2_TR(0x596c44);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B596c46:{NFSU2_TR(0x596c46);
u8 U[8];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B596c4a:{NFSU2_TR(0x596c4a);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B596c4e:{NFSU2_TR(0x596c4e);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B596c50:{NFSU2_TR(0x596c50);
u8 U[8];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B596c54:{NFSU2_TR(0x596c54);
if(r1(R+518)){{goto L596c5a;}}
}
B596c56:L596c56:{c.instructions+=2;NFSU2_TR(0x596c56);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B596c58:{NFSU2_TR(0x596c58);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L596c74;}}
}
B596c5a:L596c5a:{c.instructions+=4;NFSU2_TR(0x596c5a);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B596c5e:{NFSU2_TR(0x596c5e);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B596c62:{NFSU2_TR(0x596c62);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B596c64:{NFSU2_TR(0x596c64);
if(r1(R+518)){{goto L596e18;}}
}
B596c6a:L596c6a:{c.instructions+=2;NFSU2_TR(0x596c6a);
u8 U[16];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B596c6e:{NFSU2_TR(0x596c6e);
if(r1(R+518)){{goto L596e14;}}
}
B596c74:L596c74:{c.instructions+=4;NFSU2_TR(0x596c74);
{u32 ea_=u32(r4(R+16)+u32(104u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B596c78:{NFSU2_TR(0x596c78);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B596c7a:{NFSU2_TR(0x596c7a);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B596c7d:{NFSU2_TR(0x596c7d);
if(r1(R+514)){{goto L596dbf;}}
}
B596c83:L596c83:{c.instructions+=26;NFSU2_TR(0x596c83);
{u32 ea_=u32(r4(R+28)+u32(132u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B596c89:{NFSU2_TR(0x596c89);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B596c8b:{NFSU2_TR(0x596c8b);
{u32 ea_=u32(r4(R+16)+u32(356u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B596c92:{NFSU2_TR(0x596c92);
{u32 ea_=u32(r4(R+28)+u32(136u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B596c98:{NFSU2_TR(0x596c98);
u8 U[8];
w4(U+0,u32(u32(u32(0x140ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B596c9f:{NFSU2_TR(0x596c9f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B596ca2:{NFSU2_TR(0x596ca2);
{u32 ea_=u32(r4(R+16)+u32(360u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B596ca9:{NFSU2_TR(0x596ca9);
{u32 ea_=u32(r4(R+28)+u32(148u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B596caf:{NFSU2_TR(0x596caf);
u8 U[8];
w4(U+0,u32(u32(u32(0x144ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B596cb6:{NFSU2_TR(0x596cb6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B596cb9:{NFSU2_TR(0x596cb9);
{u32 ea_=u32(r4(R+16)+u32(340u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B596cc0:{NFSU2_TR(0x596cc0);
{u32 ea_=u32(r4(R+28)+u32(152u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B596cc6:{NFSU2_TR(0x596cc6);
u8 U[8];
w4(U+0,u32(u32(u32(0x148ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B596ccd:{NFSU2_TR(0x596ccd);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x80ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B596cd3:{NFSU2_TR(0x596cd3);
{u32 ea_=u32(r4(R+16)+u32(344u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B596cda:{NFSU2_TR(0x596cda);
u8 U[8];
w4(U+0,u32(u32(u32(0x160ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B596ce1:{NFSU2_TR(0x596ce1);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x90ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B596ce7:{NFSU2_TR(0x596ce7);
{u32 ea_=u32(r4(R+16)+u32(104u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B596ceb:{NFSU2_TR(0x596ceb);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B596cef:{NFSU2_TR(0x596cef);
u8 U[8];
w4(U+0,u32(u32(u32(0x150ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B596cf6:{NFSU2_TR(0x596cf6);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B596cfc:{NFSU2_TR(0x596cfc);
w4(R+12,u32(0x1ull));
}
B596d01:{NFSU2_TR(0x596d01);
u8 U[8];
w4(U+0,u32(u32(u32(0xccull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B596d08:{NFSU2_TR(0x596d08);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B596d0a:{NFSU2_TR(0x596d0a);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B596d0d:{NFSU2_TR(0x596d0d);
if(r1(R+514)){{goto L596d18;}}
}
B596d0f:L596d0f:{c.instructions+=2;NFSU2_TR(0x596d0f);
u8 U[8];
w4(U+0,u32(u32(u32(0x13cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B596d16:{NFSU2_TR(0x596d16);
{goto L596d4b;}
}
B596d18:L596d18:{c.instructions+=5;NFSU2_TR(0x596d18);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B596d1c:{NFSU2_TR(0x596d1c);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B596d22:{NFSU2_TR(0x596d22);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B596d24:{NFSU2_TR(0x596d24);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B596d27:{NFSU2_TR(0x596d27);
if(r1(R+514)){{goto L596d39;}}
}
B596d29:L596d29:{c.instructions+=3;NFSU2_TR(0x596d29);
u8 U[8];
w4(U+0,u32(u32(u32(0x13cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B596d30:{NFSU2_TR(0x596d30);
u8 U[8];
w4(U+0,u32(u32(u32(0x12cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B596d37:{NFSU2_TR(0x596d37);
{goto L596d52;}
}
B596d39:L596d39:{c.instructions+=2;NFSU2_TR(0x596d39);
u8 U[8];
w4(U+0,u32(u32(u32(0x13cull))+u32(r4(R+16))));
w4(U+4,u32(0x2ull));
s4(u32(r4(U+0)),r4(U+4));
}
B596d44:{NFSU2_TR(0x596d44);
u8 U[8];
w4(U+0,u32(u32(u32(0x130ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B596d4b:L596d4b:{c.instructions+=1;NFSU2_TR(0x596d4b);
u8 U[8];
w4(U+0,u32(u32(u32(0x12cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B596d52:L596d52:{c.instructions+=5;NFSU2_TR(0x596d52);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B596d56:{NFSU2_TR(0x596d56);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B596d5c:{NFSU2_TR(0x596d5c);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B596d5e:{NFSU2_TR(0x596d5e);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B596d61:{NFSU2_TR(0x596d61);
if(r1(R+514)){{goto L596d77;}}
}
B596d63:L596d63:{c.instructions+=4;NFSU2_TR(0x596d63);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B596d67:{NFSU2_TR(0x596d67);
u8 U[8];
w4(U+0,u32(u32(u32(0x128ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B596d6e:{NFSU2_TR(0x596d6e);
u8 U[8];
w4(U+0,u32(u32(u32(0x118ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B596d75:{NFSU2_TR(0x596d75);
{goto L596dc1;}
}
B596d77:L596d77:{c.instructions+=5;NFSU2_TR(0x596d77);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B596d7b:{NFSU2_TR(0x596d7b);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B596d81:{NFSU2_TR(0x596d81);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B596d83:{NFSU2_TR(0x596d83);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B596d86:{NFSU2_TR(0x596d86);
if(r1(R+514)){{goto L596d9c;}}
}
B596d88:L596d88:{c.instructions+=4;NFSU2_TR(0x596d88);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B596d8c:{NFSU2_TR(0x596d8c);
u8 U[8];
w4(U+0,u32(u32(u32(0x128ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B596d93:{NFSU2_TR(0x596d93);
u8 U[8];
w4(U+0,u32(u32(u32(0x118ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B596d9a:{NFSU2_TR(0x596d9a);
{goto L596dc1;}
}
B596d9c:L596d9c:{c.instructions+=6;NFSU2_TR(0x596d9c);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B596da0:{NFSU2_TR(0x596da0);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B596da4:{NFSU2_TR(0x596da4);
u8 U[8];
w4(U+0,u32(u32(u32(0x128ull))+u32(r4(R+16))));
w4(U+4,u32(0x2ull));
s4(u32(r4(U+0)),r4(U+4));
}
B596daf:{NFSU2_TR(0x596daf);
u8 U[8];
w4(U+0,u32(u32(u32(0x118ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B596db6:{NFSU2_TR(0x596db6);
u8 U[8];
w4(U+0,u32(u32(u32(0x11cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B596dbd:{NFSU2_TR(0x596dbd);
{goto L596dc1;}
}
B596dbf:L596dbf:{c.instructions+=1;NFSU2_TR(0x596dbf);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B596dc1:L596dc1:{c.instructions+=6;NFSU2_TR(0x596dc1);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B596dc5:{NFSU2_TR(0x596dc5);
u8 U[8];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B596dc9:{NFSU2_TR(0x596dc9);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B596dca:{NFSU2_TR(0x596dca);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B596dcc:{NFSU2_TR(0x596dcc);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B596dd0:{NFSU2_TR(0x596dd0);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5960a0u);}goto L5960a0;}}
}
B596dd6:L596dd6:{c.instructions+=4;NFSU2_TR(0x596dd6);
u8 U[8];
w4(U+0,u32(u32(u32(0x6cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B596dda:{NFSU2_TR(0x596dda);
u8 U[16];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+8)));
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B596dde:{NFSU2_TR(0x596dde);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B596de2:{NFSU2_TR(0x596de2);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x596010u);}goto L596010;}}
}
B596de8:L596de8:{c.instructions+=6;NFSU2_TR(0x596de8);
u8 U[8];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B596dec:{NFSU2_TR(0x596dec);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B596df0:{NFSU2_TR(0x596df0);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B596df1:{NFSU2_TR(0x596df1);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B596df3:{NFSU2_TR(0x596df3);
u8 U[8];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B596df7:{NFSU2_TR(0x596df7);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x595f96u,595);}
}
B596dfd:L596dfd:{c.instructions+=4;NFSU2_TR(0x596dfd);
u8 U[8];
w4(U+0,u32(u32(u32(0x64ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B596e01:{NFSU2_TR(0x596e01);
u8 U[16];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+8)));
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B596e05:{NFSU2_TR(0x596e05);
u8 U[8];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B596e09:{NFSU2_TR(0x596e09);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x595f67u,595);}
}
B596e0f:L596e0f:{c.instructions+=1;NFSU2_TR(0x596e0f);
TAIL_STATIC(0x595681u,595);
}
B596e14:L596e14:{c.instructions+=1;NFSU2_TR(0x596e14);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B596e18:L596e18:{c.instructions+=6;NFSU2_TR(0x596e18);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B596e1c:{NFSU2_TR(0x596e1c);
w4(R+24,u32(0x1ull));
}
B596e21:{NFSU2_TR(0x596e21);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B596e27:{NFSU2_TR(0x596e27);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B596e29:{NFSU2_TR(0x596e29);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B596e2c:{NFSU2_TR(0x596e2c);
if(r1(R+514)){{goto L596e5d;}}
}
B596e2e:L596e2e:{c.instructions+=13;NFSU2_TR(0x596e2e);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xc0ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B596e34:{NFSU2_TR(0x596e34);
u8 U[16];
w4(U+0,u32(u32(u32(0xb0ull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+8),(U+12),4);
}
B596e3b:{NFSU2_TR(0x596e3b);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B596e3e:{NFSU2_TR(0x596e3e);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+28))));
}
B596e40:{NFSU2_TR(0x596e40);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B596e46:{NFSU2_TR(0x596e46);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B596e49:{NFSU2_TR(0x596e49);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B596e4c:{NFSU2_TR(0x596e4c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B596e4e:{NFSU2_TR(0x596e4e);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B596e50:{NFSU2_TR(0x596e50);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+28)),r4(U+0));
}
B596e52:{NFSU2_TR(0x596e52);
{u32 ea_=u32(r4(R+28)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B596e55:{NFSU2_TR(0x596e55);
{u32 ea_=u32(r4(R+28)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B596e58:{NFSU2_TR(0x596e58);
{goto L596ef1;}
}
B596e5d:L596e5d:{c.instructions+=5;NFSU2_TR(0x596e5d);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B596e61:{NFSU2_TR(0x596e61);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B596e67:{NFSU2_TR(0x596e67);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B596e69:{NFSU2_TR(0x596e69);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B596e6c:{NFSU2_TR(0x596e6c);
if(r1(R+514)){{goto L596e9a;}}
}
B596e6e:L596e6e:{c.instructions+=13;NFSU2_TR(0x596e6e);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xc0ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B596e74:{NFSU2_TR(0x596e74);
u8 U[16];
w4(U+0,u32(u32(u32(0xb0ull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+4),(U+12),4);
}
B596e7b:{NFSU2_TR(0x596e7b);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B596e7e:{NFSU2_TR(0x596e7e);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+28))));
}
B596e80:{NFSU2_TR(0x596e80);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B596e86:{NFSU2_TR(0x596e86);
{u32 ea_=u32(r4(R+8)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B596e89:{NFSU2_TR(0x596e89);
{u32 ea_=u32(r4(R+8)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B596e8c:{NFSU2_TR(0x596e8c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+8),(U+0),4);
}
B596e8e:{NFSU2_TR(0x596e8e);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B596e90:{NFSU2_TR(0x596e90);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+28)),r4(U+0));
}
B596e92:{NFSU2_TR(0x596e92);
{u32 ea_=u32(r4(R+28)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B596e95:{NFSU2_TR(0x596e95);
{u32 ea_=u32(r4(R+28)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B596e98:{NFSU2_TR(0x596e98);
{goto L596ef1;}
}
B596e9a:L596e9a:{c.instructions+=23;NFSU2_TR(0x596e9a);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xc0ull))));
w4(U+4,u32(0x2ull));
s4(u32(r4(U+0)),r4(U+4));
}
B596ea4:{NFSU2_TR(0x596ea4);
u8 U[16];
w4(U+0,u32(u32(u32(0xb0ull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B596eab:{NFSU2_TR(0x596eab);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B596eb1:{NFSU2_TR(0x596eb1);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B596eb4:{NFSU2_TR(0x596eb4);
{u32 ea_=u32(r4(R+28)+r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B596eb8:{NFSU2_TR(0x596eb8);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+28))));
}
B596eba:{NFSU2_TR(0x596eba);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B596ebd:{NFSU2_TR(0x596ebd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+4),(U+0),4);
}
B596ebf:{NFSU2_TR(0x596ebf);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+28)),r4(U+0));
}
B596ec1:{NFSU2_TR(0x596ec1);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B596ec3:{NFSU2_TR(0x596ec3);
{u32 ea_=u32(r4(R+28)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B596ec6:{NFSU2_TR(0x596ec6);
{u32 ea_=u32(r4(R+28)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B596ec9:{NFSU2_TR(0x596ec9);
u8 U[16];
w4(U+0,u32(u32(u32(0xb0ull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B596ed0:{NFSU2_TR(0x596ed0);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xb4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B596ed6:{NFSU2_TR(0x596ed6);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B596ed9:{NFSU2_TR(0x596ed9);
{u32 ea_=u32(r4(R+28)+r4(R+8)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B596edd:{NFSU2_TR(0x596edd);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B596ee0:{NFSU2_TR(0x596ee0);
{u32 ea_=u32(r4(R+28)+r4(R+8)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B596ee4:{NFSU2_TR(0x596ee4);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+28))));
}
B596ee6:{NFSU2_TR(0x596ee6);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B596ee8:{NFSU2_TR(0x596ee8);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B596eeb:{NFSU2_TR(0x596eeb);
{u32 ea_=u32(r4(R+28)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B596eee:{NFSU2_TR(0x596eee);
{u32 ea_=u32(r4(R+28)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B596ef1:L596ef1:{c.instructions+=5;NFSU2_TR(0x596ef1);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B596ef5:{NFSU2_TR(0x596ef5);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B596efb:{NFSU2_TR(0x596efb);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B596efd:{NFSU2_TR(0x596efd);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B596f00:{NFSU2_TR(0x596f00);
if(r1(R+514)){{goto L596f3a;}}
}
B596f02:L596f02:{c.instructions+=19;NFSU2_TR(0x596f02);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xd4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B596f08:{NFSU2_TR(0x596f08);
u8 U[16];
w4(U+0,u32(u32(u32(0xc4ull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+8),(U+12),4);
}
B596f0f:{NFSU2_TR(0x596f0f);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xc4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B596f15:{NFSU2_TR(0x596f15);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B596f18:{NFSU2_TR(0x596f18);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B596f1b:{NFSU2_TR(0x596f1b);
{u32 ea_=u32(r4(R+28)+r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B596f1f:{NFSU2_TR(0x596f1f);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),r4(R+28)));
w1(R+523,scarry<u32>(r4(R+0),r4(R+28)));
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+28))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B596f21:{NFSU2_TR(0x596f21);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B596f24:{NFSU2_TR(0x596f24);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B596f26:{NFSU2_TR(0x596f26);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B596f28:{NFSU2_TR(0x596f28);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x40ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B596f2b:{NFSU2_TR(0x596f2b);
{u32 ea_=u32(r4(R+28)+u32(68u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B596f2e:{NFSU2_TR(0x596f2e);
{u32 ea_=u32(r4(R+28)+u32(72u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B596f31:{NFSU2_TR(0x596f31);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B596f32:{NFSU2_TR(0x596f32);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B596f33:{NFSU2_TR(0x596f33);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B596f34:{NFSU2_TR(0x596f34);
__builtin_memmove((R+16),(R+20),4);
}
B596f36:{NFSU2_TR(0x596f36);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B596f37:{NFSU2_TR(0x596f37);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B596f3a:L596f3a:{c.instructions+=5;NFSU2_TR(0x596f3a);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B596f3e:{NFSU2_TR(0x596f3e);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B596f44:{NFSU2_TR(0x596f44);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B596f46:{NFSU2_TR(0x596f46);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B596f49:{NFSU2_TR(0x596f49);
if(r1(R+514)){{goto L596f89;}}
}
B596f4b:L596f4b:{c.instructions+=20;NFSU2_TR(0x596f4b);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B596f4f:{NFSU2_TR(0x596f4f);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xd4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B596f55:{NFSU2_TR(0x596f55);
u8 U[16];
w4(U+0,u32(u32(u32(0xc4ull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+4),(U+12),4);
}
B596f5c:{NFSU2_TR(0x596f5c);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B596f5f:{NFSU2_TR(0x596f5f);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xc4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B596f65:{NFSU2_TR(0x596f65);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B596f68:{NFSU2_TR(0x596f68);
{u32 ea_=u32(r4(R+28)+r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B596f6c:{NFSU2_TR(0x596f6c);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B596f6f:{NFSU2_TR(0x596f6f);
{u32 ea_=u32(r4(R+28)+r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B596f73:{NFSU2_TR(0x596f73);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),r4(R+28)));
w1(R+523,scarry<u32>(r4(R+0),r4(R+28)));
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+28))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B596f75:{NFSU2_TR(0x596f75);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x40ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B596f78:{NFSU2_TR(0x596f78);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B596f7a:{NFSU2_TR(0x596f7a);
{u32 ea_=u32(r4(R+28)+u32(68u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B596f7d:{NFSU2_TR(0x596f7d);
{u32 ea_=u32(r4(R+28)+u32(72u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B596f80:{NFSU2_TR(0x596f80);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B596f81:{NFSU2_TR(0x596f81);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B596f82:{NFSU2_TR(0x596f82);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B596f83:{NFSU2_TR(0x596f83);
__builtin_memmove((R+16),(R+20),4);
}
B596f85:{NFSU2_TR(0x596f85);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B596f86:{NFSU2_TR(0x596f86);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B596f89:L596f89:{c.instructions+=14;NFSU2_TR(0x596f89);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xd4ull))));
w4(U+4,u32(0x2ull));
s4(u32(r4(U+0)),r4(U+4));
}
B596f93:{NFSU2_TR(0x596f93);
u8 U[16];
w4(U+0,u32(u32(u32(0xc4ull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B596f9a:{NFSU2_TR(0x596f9a);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xc4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B596fa0:{NFSU2_TR(0x596fa0);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B596fa4:{NFSU2_TR(0x596fa4);
u8 U[16];
w4(U+0,u32(u32(u32(0xc4ull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+4),(U+12),4);
}
B596fab:{NFSU2_TR(0x596fab);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x4ull))));
}
B596fae:{NFSU2_TR(0x596fae);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+12,shl<u32>(r4(R+12),u64(r4(U+0))));
}
B596fb1:{NFSU2_TR(0x596fb1);
w4(R+12,u32(u32(r4(R+12))+u32(r4(R+28))));
}
B596fb3:{NFSU2_TR(0x596fb3);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xc8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B596fb9:{NFSU2_TR(0x596fb9);
{u32 ea_=u32(r4(R+12)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B596fbc:{NFSU2_TR(0x596fbc);
{u32 ea_=u32(r4(R+12)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B596fbf:{NFSU2_TR(0x596fbf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+8),(U+0),4);
}
B596fc1:{NFSU2_TR(0x596fc1);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B596fc4:{NFSU2_TR(0x596fc4);
TAIL_STATIC(0x59590au,595);
}
B596fc9:L596fc9:{c.instructions+=14;NFSU2_TR(0x596fc9);
u8 U[8];
w4(U+0,u32(u32(u32(0xb0ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B596fd0:{NFSU2_TR(0x596fd0);
u8 U[8];
w4(U+0,u32(u32(u32(0xb4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B596fd7:{NFSU2_TR(0x596fd7);
u8 U[8];
w4(U+0,u32(u32(u32(0xb8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B596fde:{NFSU2_TR(0x596fde);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+24)),r4(U+0));
}
B596fe0:{NFSU2_TR(0x596fe0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B596fe3:{NFSU2_TR(0x596fe3);
{u32 ea_=u32(r4(R+24)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B596fe6:{NFSU2_TR(0x596fe6);
u8 U[8];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B596fea:{NFSU2_TR(0x596fea);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B596fed:{NFSU2_TR(0x596fed);
{u32 ea_=u32(r4(R+12)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B596ff0:{NFSU2_TR(0x596ff0);
{u32 ea_=u32(r4(R+12));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B596ff2:{NFSU2_TR(0x596ff2);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B596ff6:{NFSU2_TR(0x596ff6);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B596ff8:{NFSU2_TR(0x596ff8);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B596ffc:{NFSU2_TR(0x596ffc);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
TAIL_STATIC(0x597000u,597);
}
XIT:NFSU2_TR_EXIT(0x596,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
