#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_401(u8* __restrict R,Cpu& c);
u32 body_42f(u8* __restrict R,Cpu& c);
u32 body_430(u8* __restrict R,Cpu& c);
u32 body_431(u8* __restrict R,Cpu& c);
u32 body_432(u8* __restrict R,Cpu& c);
u32 body_433(u8* __restrict R,Cpu& c);
u32 body_434(u8* __restrict R,Cpu& c);
u32 body_435(u8* __restrict R,Cpu& c);
u32 body_437(u8* __restrict R,Cpu& c);
u32 body_43b(u8* __restrict R,Cpu& c);
u32 body_43c(u8* __restrict R,Cpu& c);
u32 body_43d(u8* __restrict R,Cpu& c);
u32 body_43e(u8* __restrict R,Cpu& c);
u32 body_43f(u8* __restrict R,Cpu& c);
u32 body_479(u8* __restrict R,Cpu& c);
u32 body_4de(u8* __restrict R,Cpu& c);
u32 body_502(u8* __restrict R,Cpu& c);
u32 body_575(u8* __restrict R,Cpu& c);
u32 body_5bf(u8* __restrict R,Cpu& c);
u32 body_5e0(u8* __restrict R,Cpu& c);
u32 body_5e7(u8* __restrict R,Cpu& c);
u32 body_60b(u8* __restrict R,Cpu& c);
u32 body_614(u8* __restrict R,Cpu& c);
u32 body_6d8(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x436,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x436,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_436(u8* __restrict R,Cpu& c);
u32 page_436(Cpu& c){return body_436(c.regs.data(),c);}
__attribute__((noinline)) u32 body_436(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x436000:goto L436000;
case 0x436002:c.instructions+=1;goto B436002;
case 0x436004:goto L436004;
case 0x436005:c.instructions+=2;goto B436005;
case 0x436008:c.instructions+=1;goto B436008;
case 0x43600d:goto L43600d;
case 0x43600f:goto L43600f;
case 0x436011:c.instructions+=2;goto B436011;
case 0x436013:c.instructions+=1;goto B436013;
case 0x436016:goto L436016;
case 0x436018:c.instructions+=3;goto B436018;
case 0x43601a:c.instructions+=2;goto B43601a;
case 0x43601c:c.instructions+=1;goto B43601c;
case 0x43601e:goto L43601e;
case 0x436020:c.instructions+=2;goto B436020;
case 0x436024:c.instructions+=1;goto B436024;
case 0x436026:goto L436026;
case 0x436027:c.instructions+=5;goto B436027;
case 0x436028:c.instructions+=4;goto B436028;
case 0x436029:c.instructions+=3;goto B436029;
case 0x43602a:c.instructions+=2;goto B43602a;
case 0x43602b:c.instructions+=1;goto B43602b;
case 0x436030:goto L436030;
case 0x436031:c.instructions+=2;goto B436031;
case 0x436033:c.instructions+=1;goto B436033;
case 0x436038:goto L436038;
case 0x43603d:c.instructions+=1;goto B43603d;
case 0x43603f:goto L43603f;
case 0x436040:c.instructions+=1;goto B436040;
case 0x436045:goto L436045;
case 0x436048:goto L436048;
case 0x43604a:c.instructions+=2;goto B43604a;
case 0x43604b:c.instructions+=1;goto B43604b;
case 0x436050:goto L436050;
case 0x436051:c.instructions+=16;goto B436051;
case 0x436053:c.instructions+=15;goto B436053;
case 0x436056:c.instructions+=14;goto B436056;
case 0x436058:c.instructions+=13;goto B436058;
case 0x43605d:c.instructions+=12;goto B43605d;
case 0x436063:c.instructions+=11;goto B436063;
case 0x436064:c.instructions+=10;goto B436064;
case 0x43606b:c.instructions+=9;goto B43606b;
case 0x436071:c.instructions+=8;goto B436071;
case 0x436072:c.instructions+=7;goto B436072;
case 0x436073:c.instructions+=6;goto B436073;
case 0x436075:c.instructions+=5;goto B436075;
case 0x436078:c.instructions+=4;goto B436078;
case 0x436079:c.instructions+=3;goto B436079;
case 0x43607b:c.instructions+=2;goto B43607b;
case 0x43607d:c.instructions+=1;goto B43607d;
case 0x436083:goto L436083;
case 0x436086:c.instructions+=10;goto B436086;
case 0x43608c:c.instructions+=9;goto B43608c;
case 0x436091:c.instructions+=8;goto B436091;
case 0x436095:c.instructions+=7;goto B436095;
case 0x436098:c.instructions+=6;goto B436098;
case 0x43609b:c.instructions+=5;goto B43609b;
case 0x43609f:c.instructions+=4;goto B43609f;
case 0x4360a2:c.instructions+=3;goto B4360a2;
case 0x4360a3:c.instructions+=2;goto B4360a3;
case 0x4360a7:c.instructions+=1;goto B4360a7;
case 0x4360ac:goto L4360ac;
case 0x4360af:c.instructions+=2;goto B4360af;
case 0x4360b1:c.instructions+=1;goto B4360b1;
case 0x4360b6:goto L4360b6;
case 0x4360b9:c.instructions+=4;goto B4360b9;
case 0x4360bd:c.instructions+=3;goto B4360bd;
case 0x4360c0:c.instructions+=2;goto B4360c0;
case 0x4360c3:c.instructions+=1;goto B4360c3;
case 0x4360c9:goto L4360c9;
case 0x4360cf:c.instructions+=3;goto B4360cf;
case 0x4360d2:c.instructions+=2;goto B4360d2;
case 0x4360d4:c.instructions+=1;goto B4360d4;
case 0x4360da:goto L4360da;
case 0x4360dd:c.instructions+=5;goto B4360dd;
case 0x4360e0:c.instructions+=4;goto B4360e0;
case 0x4360e1:c.instructions+=3;goto B4360e1;
case 0x4360e5:c.instructions+=2;goto B4360e5;
case 0x4360e6:c.instructions+=1;goto B4360e6;
case 0x4360eb:goto L4360eb;
case 0x4360f0:c.instructions+=3;goto B4360f0;
case 0x4360f3:c.instructions+=2;goto B4360f3;
case 0x4360f5:c.instructions+=1;goto B4360f5;
case 0x4360f7:goto L4360f7;
case 0x436100:goto L436100;
case 0x436107:c.instructions+=3;goto B436107;
case 0x43610d:c.instructions+=2;goto B43610d;
case 0x43610f:c.instructions+=1;goto B43610f;
case 0x436111:goto L436111;
case 0x436113:c.instructions+=1;goto B436113;
case 0x436116:goto L436116;
case 0x436118:c.instructions+=1;goto B436118;
case 0x43611a:goto L43611a;
case 0x43611f:c.instructions+=3;goto B43611f;
case 0x436120:c.instructions+=2;goto B436120;
case 0x436122:c.instructions+=1;goto B436122;
case 0x436124:goto L436124;
case 0x436126:goto L436126;
case 0x43612c:c.instructions+=6;goto B43612c;
case 0x436130:c.instructions+=5;goto B436130;
case 0x436134:c.instructions+=4;goto B436134;
case 0x436138:c.instructions+=3;goto B436138;
case 0x43613a:c.instructions+=2;goto B43613a;
case 0x43613e:c.instructions+=1;goto B43613e;
case 0x436140:goto L436140;
case 0x436143:c.instructions+=5;goto B436143;
case 0x436147:c.instructions+=4;goto B436147;
case 0x43614a:c.instructions+=3;goto B43614a;
case 0x43614b:c.instructions+=2;goto B43614b;
case 0x43614c:c.instructions+=1;goto B43614c;
case 0x436151:goto L436151;
case 0x436157:c.instructions+=3;goto B436157;
case 0x43615a:c.instructions+=2;goto B43615a;
case 0x43615c:c.instructions+=1;goto B43615c;
case 0x43615e:goto L43615e;
case 0x436160:c.instructions+=1;goto B436160;
case 0x436165:goto L436165;
case 0x436168:c.instructions+=2;goto B436168;
case 0x43616a:c.instructions+=1;goto B43616a;
case 0x436170:goto L436170;
case 0x436174:c.instructions+=4;goto B436174;
case 0x436175:c.instructions+=3;goto B436175;
case 0x436177:c.instructions+=2;goto B436177;
case 0x436179:c.instructions+=1;goto B436179;
case 0x43617e:goto L43617e;
case 0x436181:c.instructions+=3;goto B436181;
case 0x436187:c.instructions+=2;goto B436187;
case 0x436189:c.instructions+=1;goto B436189;
case 0x43618b:goto L43618b;
case 0x43618d:c.instructions+=1;goto B43618d;
case 0x436192:goto L436192;
case 0x436195:c.instructions+=3;goto B436195;
case 0x43619c:c.instructions+=2;goto B43619c;
case 0x4361a0:c.instructions+=1;goto B4361a0;
case 0x4361a5:goto L4361a5;
case 0x4361a9:c.instructions+=8;goto B4361a9;
case 0x4361aa:c.instructions+=7;goto B4361aa;
case 0x4361ac:c.instructions+=6;goto B4361ac;
case 0x4361ae:c.instructions+=5;goto B4361ae;
case 0x4361b2:c.instructions+=4;goto B4361b2;
case 0x4361b3:c.instructions+=3;goto B4361b3;
case 0x4361ba:c.instructions+=2;goto B4361ba;
case 0x4361c5:c.instructions+=1;goto B4361c5;
case 0x4361ca:goto L4361ca;
case 0x4361ce:c.instructions+=2;goto B4361ce;
case 0x4361d0:c.instructions+=1;goto B4361d0;
case 0x4361d2:goto L4361d2;
case 0x4361d5:c.instructions+=2;goto B4361d5;
case 0x4361d7:c.instructions+=1;goto B4361d7;
case 0x4361d9:goto L4361d9;
case 0x4361df:c.instructions+=8;goto B4361df;
case 0x4361e5:c.instructions+=7;goto B4361e5;
case 0x4361e8:c.instructions+=6;goto B4361e8;
case 0x4361ee:c.instructions+=5;goto B4361ee;
case 0x4361f0:c.instructions+=4;goto B4361f0;
case 0x4361f2:c.instructions+=3;goto B4361f2;
case 0x4361f5:c.instructions+=2;goto B4361f5;
case 0x4361f7:c.instructions+=1;goto B4361f7;
case 0x4361f9:goto L4361f9;
case 0x4361fc:c.instructions+=1;goto B4361fc;
case 0x436200:goto L436200;
case 0x436203:c.instructions+=6;goto B436203;
case 0x436206:c.instructions+=5;goto B436206;
case 0x43620a:c.instructions+=4;goto B43620a;
case 0x436210:c.instructions+=3;goto B436210;
case 0x436216:c.instructions+=2;goto B436216;
case 0x43621c:c.instructions+=1;goto B43621c;
case 0x43621e:goto L43621e;
case 0x436220:goto L436220;
case 0x436227:c.instructions+=2;goto B436227;
case 0x436232:c.instructions+=1;goto B436232;
case 0x436237:goto L436237;
case 0x43623c:goto L43623c;
case 0x43623f:c.instructions+=5;goto B43623f;
case 0x436242:c.instructions+=4;goto B436242;
case 0x436243:c.instructions+=3;goto B436243;
case 0x436247:c.instructions+=2;goto B436247;
case 0x436248:c.instructions+=1;goto B436248;
case 0x43624d:goto L43624d;
case 0x436250:c.instructions+=6;goto B436250;
case 0x436251:c.instructions+=5;goto B436251;
case 0x436255:c.instructions+=4;goto B436255;
case 0x436256:c.instructions+=3;goto B436256;
case 0x43625d:c.instructions+=2;goto B43625d;
case 0x43625e:c.instructions+=1;goto B43625e;
case 0x436263:goto L436263;
case 0x436266:c.instructions+=5;goto B436266;
case 0x43626a:c.instructions+=4;goto B43626a;
case 0x43626b:c.instructions+=3;goto B43626b;
case 0x43626e:c.instructions+=2;goto B43626e;
case 0x43626f:c.instructions+=1;goto B43626f;
case 0x436274:goto L436274;
case 0x436277:c.instructions+=1;goto B436277;
case 0x436279:goto L436279;
case 0x43627c:c.instructions+=4;goto B43627c;
case 0x43627d:c.instructions+=3;goto B43627d;
case 0x436284:c.instructions+=2;goto B436284;
case 0x436285:c.instructions+=1;goto B436285;
case 0x43628a:goto L43628a;
case 0x43628d:c.instructions+=4;goto B43628d;
case 0x436291:c.instructions+=3;goto B436291;
case 0x436292:c.instructions+=2;goto B436292;
case 0x436298:c.instructions+=1;goto B436298;
case 0x43629d:goto L43629d;
case 0x4362a0:c.instructions+=6;goto B4362a0;
case 0x4362a1:c.instructions+=5;goto B4362a1;
case 0x4362a8:c.instructions+=4;goto B4362a8;
case 0x4362a9:c.instructions+=3;goto B4362a9;
case 0x4362ad:c.instructions+=2;goto B4362ad;
case 0x4362ae:c.instructions+=1;goto B4362ae;
case 0x4362b3:goto L4362b3;
case 0x4362b6:c.instructions+=5;goto B4362b6;
case 0x4362ba:c.instructions+=4;goto B4362ba;
case 0x4362bb:c.instructions+=3;goto B4362bb;
case 0x4362be:c.instructions+=2;goto B4362be;
case 0x4362bf:c.instructions+=1;goto B4362bf;
case 0x4362c4:goto L4362c4;
case 0x4362c7:goto L4362c7;
case 0x4362cd:c.instructions+=2;goto B4362cd;
case 0x4362cf:c.instructions+=1;goto B4362cf;
case 0x4362d1:goto L4362d1;
case 0x4362d3:c.instructions+=1;goto B4362d3;
case 0x4362d8:goto L4362d8;
case 0x4362db:c.instructions+=4;goto B4362db;
case 0x4362e1:c.instructions+=3;goto B4362e1;
case 0x4362e3:c.instructions+=2;goto B4362e3;
case 0x4362e6:c.instructions+=1;goto B4362e6;
case 0x4362ec:goto L4362ec;
case 0x4362ef:c.instructions+=28;goto B4362ef;
case 0x4362f5:c.instructions+=27;goto B4362f5;
case 0x4362fb:c.instructions+=26;goto B4362fb;
case 0x436301:c.instructions+=25;goto B436301;
case 0x436308:c.instructions+=24;goto B436308;
case 0x43630a:c.instructions+=23;goto B43630a;
case 0x43630e:c.instructions+=22;goto B43630e;
case 0x436312:c.instructions+=21;goto B436312;
case 0x436316:c.instructions+=20;goto B436316;
case 0x43631a:c.instructions+=19;goto B43631a;
case 0x436321:c.instructions+=18;goto B436321;
case 0x436325:c.instructions+=17;goto B436325;
case 0x43632b:c.instructions+=16;goto B43632b;
case 0x43632e:c.instructions+=15;goto B43632e;
case 0x436332:c.instructions+=14;goto B436332;
case 0x436336:c.instructions+=13;goto B436336;
case 0x43633a:c.instructions+=12;goto B43633a;
case 0x43633e:c.instructions+=11;goto B43633e;
case 0x436342:c.instructions+=10;goto B436342;
case 0x436344:c.instructions+=9;goto B436344;
case 0x436348:c.instructions+=8;goto B436348;
case 0x43634c:c.instructions+=7;goto B43634c;
case 0x436350:c.instructions+=6;goto B436350;
case 0x436356:c.instructions+=5;goto B436356;
case 0x43635c:c.instructions+=4;goto B43635c;
case 0x436362:c.instructions+=3;goto B436362;
case 0x436368:c.instructions+=2;goto B436368;
case 0x43636a:c.instructions+=1;goto B43636a;
case 0x43636c:goto L43636c;
case 0x436371:goto L436371;
case 0x436375:c.instructions+=1;goto B436375;
case 0x436377:goto L436377;
case 0x43637a:c.instructions+=3;goto B43637a;
case 0x43637b:c.instructions+=2;goto B43637b;
case 0x43637d:c.instructions+=1;goto B43637d;
case 0x436382:goto L436382;
case 0x436389:c.instructions+=7;goto B436389;
case 0x43638a:c.instructions+=6;goto B43638a;
case 0x43638b:c.instructions+=5;goto B43638b;
case 0x436392:c.instructions+=4;goto B436392;
case 0x436393:c.instructions+=3;goto B436393;
case 0x436395:c.instructions+=2;goto B436395;
case 0x436396:c.instructions+=1;goto B436396;
case 0x4363a0:goto L4363a0;
case 0x4363a1:c.instructions+=2;goto B4363a1;
case 0x4363a3:c.instructions+=1;goto B4363a3;
case 0x4363a8:goto L4363a8;
case 0x4363ad:c.instructions+=1;goto B4363ad;
case 0x4363af:goto L4363af;
case 0x4363b0:c.instructions+=1;goto B4363b0;
case 0x4363b5:goto L4363b5;
case 0x4363b8:goto L4363b8;
case 0x4363ba:c.instructions+=2;goto B4363ba;
case 0x4363bb:c.instructions+=1;goto B4363bb;
case 0x4363c0:goto L4363c0;
case 0x4363c1:c.instructions+=9;goto B4363c1;
case 0x4363c3:c.instructions+=8;goto B4363c3;
case 0x4363c6:c.instructions+=7;goto B4363c6;
case 0x4363c9:c.instructions+=6;goto B4363c9;
case 0x4363ca:c.instructions+=5;goto B4363ca;
case 0x4363cc:c.instructions+=4;goto B4363cc;
case 0x4363cf:c.instructions+=3;goto B4363cf;
case 0x4363d1:c.instructions+=2;goto B4363d1;
case 0x4363d2:c.instructions+=1;goto B4363d2;
case 0x4363d4:goto L4363d4;
case 0x4363d7:c.instructions+=2;goto B4363d7;
case 0x4363d8:c.instructions+=1;goto B4363d8;
case 0x4363dd:goto L4363dd;
case 0x4363e0:c.instructions+=2;goto B4363e0;
case 0x4363e2:c.instructions+=1;goto B4363e2;
case 0x4363e7:goto L4363e7;
case 0x4363ea:c.instructions+=7;goto B4363ea;
case 0x4363ed:c.instructions+=6;goto B4363ed;
case 0x4363f0:c.instructions+=5;goto B4363f0;
case 0x4363f3:c.instructions+=4;goto B4363f3;
case 0x4363f4:c.instructions+=3;goto B4363f4;
case 0x4363f8:c.instructions+=2;goto B4363f8;
case 0x4363f9:c.instructions+=1;goto B4363f9;
case 0x4363fe:goto L4363fe;
case 0x436401:c.instructions+=7;goto B436401;
case 0x43640b:c.instructions+=6;goto B43640b;
case 0x43640e:c.instructions+=5;goto B43640e;
case 0x436411:c.instructions+=4;goto B436411;
case 0x436414:c.instructions+=3;goto B436414;
case 0x436415:c.instructions+=2;goto B436415;
case 0x436416:c.instructions+=1;goto B436416;
case 0x43641b:goto L43641b;
case 0x436421:c.instructions+=3;goto B436421;
case 0x436424:c.instructions+=2;goto B436424;
case 0x436426:c.instructions+=1;goto B436426;
case 0x436428:goto L436428;
case 0x43642a:c.instructions+=1;goto B43642a;
case 0x43642f:goto L43642f;
case 0x436430:c.instructions+=4;goto B436430;
case 0x436431:c.instructions+=3;goto B436431;
case 0x436433:c.instructions+=2;goto B436433;
case 0x436434:c.instructions+=1;goto B436434;
case 0x436440:goto L436440;
case 0x436441:c.instructions+=4;goto B436441;
case 0x436444:c.instructions+=3;goto B436444;
case 0x436446:c.instructions+=2;goto B436446;
case 0x436448:c.instructions+=1;goto B436448;
case 0x43644d:goto L43644d;
case 0x43644f:c.instructions+=2;goto B43644f;
case 0x436451:c.instructions+=1;goto B436451;
case 0x436453:goto L436453;
case 0x436454:goto L436454;
case 0x436457:c.instructions+=2;goto B436457;
case 0x43645a:c.instructions+=1;goto B43645a;
case 0x43645c:goto L43645c;
case 0x43645f:c.instructions+=1;goto B43645f;
case 0x436461:goto L436461;
case 0x436463:c.instructions+=1;goto B436463;
case 0x436465:goto L436465;
case 0x436468:c.instructions+=2;goto B436468;
case 0x43646a:c.instructions+=1;goto B43646a;
case 0x43646c:goto L43646c;
case 0x43646e:c.instructions+=1;goto B43646e;
case 0x436470:goto L436470;
case 0x436472:c.instructions+=5;goto B436472;
case 0x436475:c.instructions+=4;goto B436475;
case 0x436477:c.instructions+=3;goto B436477;
case 0x436478:c.instructions+=2;goto B436478;
case 0x43647b:c.instructions+=1;goto B43647b;
case 0x436480:goto L436480;
case 0x436483:c.instructions+=1;goto B436483;
case 0x436485:goto L436485;
case 0x436487:c.instructions+=1;goto B436487;
case 0x436489:goto L436489;
case 0x43648a:goto L43648a;
case 0x43648b:c.instructions+=1;goto B43648b;
case 0x436490:goto L436490;
case 0x436491:c.instructions+=2;goto B436491;
case 0x436493:c.instructions+=1;goto B436493;
case 0x436498:goto L436498;
case 0x43649d:c.instructions+=1;goto B43649d;
case 0x43649f:goto L43649f;
case 0x4364a0:c.instructions+=1;goto B4364a0;
case 0x4364a5:goto L4364a5;
case 0x4364a8:goto L4364a8;
case 0x4364aa:c.instructions+=2;goto B4364aa;
case 0x4364ab:c.instructions+=1;goto B4364ab;
case 0x4364b0:goto L4364b0;
case 0x4364b1:c.instructions+=2;goto B4364b1;
case 0x4364b3:c.instructions+=1;goto B4364b3;
case 0x4364b8:goto L4364b8;
case 0x4364bd:c.instructions+=1;goto B4364bd;
case 0x4364bf:goto L4364bf;
case 0x4364c4:c.instructions+=3;goto B4364c4;
case 0x4364c5:c.instructions+=2;goto B4364c5;
case 0x4364c6:c.instructions+=1;goto B4364c6;
case 0x4364cb:goto L4364cb;
case 0x4364ce:goto L4364ce;
case 0x4364d0:c.instructions+=2;goto B4364d0;
case 0x4364d1:c.instructions+=1;goto B4364d1;
case 0x4364e0:goto L4364e0;
case 0x4364e2:c.instructions+=32;goto B4364e2;
case 0x4364e4:c.instructions+=31;goto B4364e4;
case 0x4364e7:c.instructions+=30;goto B4364e7;
case 0x4364ea:c.instructions+=29;goto B4364ea;
case 0x4364ed:c.instructions+=28;goto B4364ed;
case 0x4364f0:c.instructions+=27;goto B4364f0;
case 0x4364f3:c.instructions+=26;goto B4364f3;
case 0x4364f5:c.instructions+=25;goto B4364f5;
case 0x4364f8:c.instructions+=24;goto B4364f8;
case 0x4364fb:c.instructions+=23;goto B4364fb;
case 0x4364fe:c.instructions+=22;goto B4364fe;
case 0x436501:c.instructions+=21;goto B436501;
case 0x436504:c.instructions+=20;goto B436504;
case 0x436507:c.instructions+=19;goto B436507;
case 0x43650a:c.instructions+=18;goto B43650a;
case 0x43650d:c.instructions+=17;goto B43650d;
case 0x436510:c.instructions+=16;goto B436510;
case 0x436513:c.instructions+=15;goto B436513;
case 0x436516:c.instructions+=14;goto B436516;
case 0x43651d:c.instructions+=13;goto B43651d;
case 0x436520:c.instructions+=12;goto B436520;
case 0x436523:c.instructions+=11;goto B436523;
case 0x436526:c.instructions+=10;goto B436526;
case 0x436529:c.instructions+=9;goto B436529;
case 0x43652c:c.instructions+=8;goto B43652c;
case 0x43652f:c.instructions+=7;goto B43652f;
case 0x436532:c.instructions+=6;goto B436532;
case 0x436535:c.instructions+=5;goto B436535;
case 0x436538:c.instructions+=4;goto B436538;
case 0x43653b:c.instructions+=3;goto B43653b;
case 0x43653e:c.instructions+=2;goto B43653e;
case 0x436541:c.instructions+=1;goto B436541;
case 0x436550:goto L436550;
case 0x436551:c.instructions+=2;goto B436551;
case 0x436553:c.instructions+=1;goto B436553;
case 0x436558:goto L436558;
case 0x43655a:c.instructions+=26;goto B43655a;
case 0x43655d:c.instructions+=25;goto B43655d;
case 0x436560:c.instructions+=24;goto B436560;
case 0x436563:c.instructions+=23;goto B436563;
case 0x436566:c.instructions+=22;goto B436566;
case 0x436569:c.instructions+=21;goto B436569;
case 0x43656c:c.instructions+=20;goto B43656c;
case 0x43656f:c.instructions+=19;goto B43656f;
case 0x436572:c.instructions+=18;goto B436572;
case 0x436575:c.instructions+=17;goto B436575;
case 0x436578:c.instructions+=16;goto B436578;
case 0x43657b:c.instructions+=15;goto B43657b;
case 0x436582:c.instructions+=14;goto B436582;
case 0x436585:c.instructions+=13;goto B436585;
case 0x436588:c.instructions+=12;goto B436588;
case 0x43658b:c.instructions+=11;goto B43658b;
case 0x43658e:c.instructions+=10;goto B43658e;
case 0x436591:c.instructions+=9;goto B436591;
case 0x436594:c.instructions+=8;goto B436594;
case 0x436597:c.instructions+=7;goto B436597;
case 0x43659a:c.instructions+=6;goto B43659a;
case 0x43659d:c.instructions+=5;goto B43659d;
case 0x4365a0:c.instructions+=4;goto B4365a0;
case 0x4365a3:c.instructions+=3;goto B4365a3;
case 0x4365a6:c.instructions+=2;goto B4365a6;
case 0x4365a7:c.instructions+=1;goto B4365a7;
case 0x4365b0:goto L4365b0;
case 0x4365b1:c.instructions+=3;goto B4365b1;
case 0x4365b5:c.instructions+=2;goto B4365b5;
case 0x4365bb:c.instructions+=1;goto B4365bb;
case 0x4365c1:goto L4365c1;
case 0x4365c2:c.instructions+=3;goto B4365c2;
case 0x4365c8:c.instructions+=2;goto B4365c8;
case 0x4365cd:c.instructions+=1;goto B4365cd;
case 0x4365d2:goto L4365d2;
case 0x4365d4:c.instructions+=2;goto B4365d4;
case 0x4365d8:c.instructions+=1;goto B4365d8;
case 0x4365da:goto L4365da;
case 0x4365db:c.instructions+=4;goto B4365db;
case 0x4365dc:c.instructions+=3;goto B4365dc;
case 0x4365dd:c.instructions+=2;goto B4365dd;
case 0x4365df:c.instructions+=1;goto B4365df;
case 0x4365e0:goto L4365e0;
case 0x4365e4:c.instructions+=3;goto B4365e4;
case 0x4365e7:c.instructions+=2;goto B4365e7;
case 0x4365e9:c.instructions+=1;goto B4365e9;
case 0x4365eb:goto L4365eb;
case 0x4365ee:c.instructions+=9;goto B4365ee;
case 0x4365f0:c.instructions+=8;goto B4365f0;
case 0x4365f3:c.instructions+=7;goto B4365f3;
case 0x4365f6:c.instructions+=6;goto B4365f6;
case 0x4365f8:c.instructions+=5;goto B4365f8;
case 0x4365fb:c.instructions+=4;goto B4365fb;
case 0x4365fe:c.instructions+=3;goto B4365fe;
case 0x436601:c.instructions+=2;goto B436601;
case 0x436604:c.instructions+=1;goto B436604;
case 0x436606:goto L436606;
case 0x436608:c.instructions+=1;goto B436608;
case 0x43660d:goto L43660d;
case 0x43660f:c.instructions+=2;goto B43660f;
case 0x436610:c.instructions+=1;goto B436610;
case 0x436616:goto L436616;
case 0x436619:c.instructions+=1;goto B436619;
case 0x43661c:goto L43661c;
case 0x43661f:c.instructions+=4;goto B43661f;
case 0x436625:c.instructions+=3;goto B436625;
case 0x436626:c.instructions+=2;goto B436626;
case 0x436627:c.instructions+=1;goto B436627;
case 0x43662c:goto L43662c;
case 0x436630:c.instructions+=1;goto B436630;
case 0x436633:goto L436633;
case 0x436635:c.instructions+=2;goto B436635;
case 0x436637:c.instructions+=1;goto B436637;
case 0x436639:goto L436639;
case 0x43663a:c.instructions+=2;goto B43663a;
case 0x43663b:c.instructions+=1;goto B43663b;
case 0x43663c:goto L43663c;
case 0x436641:c.instructions+=3;goto B436641;
case 0x436642:c.instructions+=2;goto B436642;
case 0x436643:c.instructions+=1;goto B436643;
case 0x436644:goto L436644;
case 0x436646:c.instructions+=2;goto B436646;
case 0x436647:c.instructions+=1;goto B436647;
case 0x436650:goto L436650;
case 0x436652:c.instructions+=12;goto B436652;
case 0x436657:c.instructions+=11;goto B436657;
case 0x43665d:c.instructions+=10;goto B43665d;
case 0x43665e:c.instructions+=9;goto B43665e;
case 0x436665:c.instructions+=8;goto B436665;
case 0x436666:c.instructions+=7;goto B436666;
case 0x436667:c.instructions+=6;goto B436667;
case 0x436669:c.instructions+=5;goto B436669;
case 0x43666a:c.instructions+=4;goto B43666a;
case 0x43666e:c.instructions+=3;goto B43666e;
case 0x436670:c.instructions+=2;goto B436670;
case 0x436674:c.instructions+=1;goto B436674;
case 0x436679:goto L436679;
case 0x43667c:c.instructions+=4;goto B43667c;
case 0x43667e:c.instructions+=3;goto B43667e;
case 0x436686:c.instructions+=2;goto B436686;
case 0x436689:c.instructions+=1;goto B436689;
case 0x43668b:goto L43668b;
case 0x43668c:c.instructions+=1;goto B43668c;
case 0x436691:goto L436691;
case 0x436694:c.instructions+=1;goto B436694;
case 0x436697:goto L436697;
case 0x43669a:c.instructions+=3;goto B43669a;
case 0x43669c:c.instructions+=2;goto B43669c;
case 0x43669f:c.instructions+=1;goto B43669f;
case 0x4366a1:goto L4366a1;
case 0x4366a3:c.instructions+=2;goto B4366a3;
case 0x4366a4:c.instructions+=1;goto B4366a4;
case 0x4366aa:goto L4366aa;
case 0x4366ad:c.instructions+=1;goto B4366ad;
case 0x4366b0:goto L4366b0;
case 0x4366b4:c.instructions+=6;goto B4366b4;
case 0x4366b7:c.instructions+=5;goto B4366b7;
case 0x4366b8:c.instructions+=4;goto B4366b8;
case 0x4366b9:c.instructions+=3;goto B4366b9;
case 0x4366c0:c.instructions+=2;goto B4366c0;
case 0x4366c3:c.instructions+=1;goto B4366c3;
case 0x4366d0:goto L4366d0;
case 0x4366d1:c.instructions+=7;goto B4366d1;
case 0x4366d2:c.instructions+=6;goto B4366d2;
case 0x4366d6:c.instructions+=5;goto B4366d6;
case 0x4366d9:c.instructions+=4;goto B4366d9;
case 0x4366db:c.instructions+=3;goto B4366db;
case 0x4366de:c.instructions+=2;goto B4366de;
case 0x4366e0:c.instructions+=1;goto B4366e0;
case 0x4366e2:goto L4366e2;
case 0x4366e4:goto L4366e4;
case 0x4366e7:c.instructions+=2;goto B4366e7;
case 0x4366e9:c.instructions+=1;goto B4366e9;
case 0x4366eb:goto L4366eb;
case 0x4366ed:c.instructions+=2;goto B4366ed;
case 0x4366ef:c.instructions+=1;goto B4366ef;
case 0x4366f1:goto L4366f1;
case 0x4366f8:c.instructions+=3;goto B4366f8;
case 0x4366f9:c.instructions+=2;goto B4366f9;
case 0x4366fc:c.instructions+=1;goto B4366fc;
case 0x4366fe:goto L4366fe;
case 0x436700:c.instructions+=7;goto B436700;
case 0x436702:c.instructions+=6;goto B436702;
case 0x436704:c.instructions+=5;goto B436704;
case 0x436707:c.instructions+=4;goto B436707;
case 0x43670a:c.instructions+=3;goto B43670a;
case 0x43670d:c.instructions+=2;goto B43670d;
case 0x43670f:c.instructions+=1;goto B43670f;
case 0x436710:goto L436710;
case 0x436713:c.instructions+=1;goto B436713;
case 0x436719:goto L436719;
case 0x436720:goto L436720;
case 0x436722:c.instructions+=1;goto B436722;
case 0x436727:goto L436727;
case 0x43672a:c.instructions+=2;goto B43672a;
case 0x43672c:c.instructions+=1;goto B43672c;
case 0x43672e:goto L43672e;
case 0x436730:c.instructions+=1;goto B436730;
case 0x436735:goto L436735;
case 0x436737:c.instructions+=1;goto B436737;
case 0x436739:goto L436739;
case 0x43673b:c.instructions+=2;goto B43673b;
case 0x43673d:c.instructions+=1;goto B43673d;
case 0x43673f:goto L43673f;
case 0x436741:c.instructions+=1;goto B436741;
case 0x436746:goto L436746;
case 0x436749:c.instructions+=2;goto B436749;
case 0x43674b:c.instructions+=1;goto B43674b;
case 0x43674d:goto L43674d;
case 0x43674f:c.instructions+=1;goto B43674f;
case 0x436754:goto L436754;
case 0x436757:c.instructions+=1;goto B436757;
case 0x436759:goto L436759;
case 0x43675b:c.instructions+=2;goto B43675b;
case 0x43675e:c.instructions+=1;goto B43675e;
case 0x436760:goto L436760;
case 0x436762:c.instructions+=1;goto B436762;
case 0x436767:goto L436767;
case 0x43676a:c.instructions+=2;goto B43676a;
case 0x43676c:c.instructions+=1;goto B43676c;
case 0x43676e:goto L43676e;
case 0x436770:c.instructions+=1;goto B436770;
case 0x436775:goto L436775;
case 0x436778:c.instructions+=1;goto B436778;
case 0x43677a:goto L43677a;
case 0x43677c:c.instructions+=2;goto B43677c;
case 0x43677f:c.instructions+=1;goto B43677f;
case 0x436781:goto L436781;
case 0x436783:c.instructions+=1;goto B436783;
case 0x436788:goto L436788;
case 0x43678b:c.instructions+=2;goto B43678b;
case 0x43678d:c.instructions+=1;goto B43678d;
case 0x43678f:goto L43678f;
case 0x436791:c.instructions+=1;goto B436791;
case 0x436796:goto L436796;
case 0x436798:goto L436798;
case 0x43679a:goto L43679a;
case 0x43679d:goto L43679d;
case 0x43679e:c.instructions+=2;goto B43679e;
case 0x4367a1:c.instructions+=1;goto B4367a1;
case 0x4367a7:goto L4367a7;
case 0x4367a8:c.instructions+=2;goto B4367a8;
case 0x4367a9:c.instructions+=1;goto B4367a9;
case 0x4367c0:goto L4367c0;
case 0x4367c1:c.instructions+=5;goto B4367c1;
case 0x4367c2:c.instructions+=4;goto B4367c2;
case 0x4367c4:c.instructions+=3;goto B4367c4;
case 0x4367c6:c.instructions+=2;goto B4367c6;
case 0x4367c8:c.instructions+=1;goto B4367c8;
case 0x4367ca:goto L4367ca;
case 0x4367d0:goto L4367d0;
case 0x4367d3:c.instructions+=5;goto B4367d3;
case 0x4367d5:c.instructions+=4;goto B4367d5;
case 0x4367d7:c.instructions+=3;goto B4367d7;
case 0x4367da:c.instructions+=2;goto B4367da;
case 0x4367dc:c.instructions+=1;goto B4367dc;
case 0x4367e1:goto L4367e1;
case 0x4367e2:c.instructions+=1;goto B4367e2;
case 0x4367e7:goto L4367e7;
case 0x4367e9:c.instructions+=3;goto B4367e9;
case 0x4367ec:c.instructions+=2;goto B4367ec;
case 0x4367ee:c.instructions+=1;goto B4367ee;
case 0x4367f0:goto L4367f0;
case 0x4367f1:c.instructions+=2;goto B4367f1;
case 0x4367f2:c.instructions+=1;goto B4367f2;
case 0x436800:goto L436800;
case 0x436801:c.instructions+=4;goto B436801;
case 0x436803:c.instructions+=3;goto B436803;
case 0x436805:c.instructions+=2;goto B436805;
case 0x436807:c.instructions+=1;goto B436807;
case 0x436809:goto L436809;
case 0x436810:goto L436810;
case 0x436812:c.instructions+=10;goto B436812;
case 0x436815:c.instructions+=9;goto B436815;
case 0x436817:c.instructions+=8;goto B436817;
case 0x43681a:c.instructions+=7;goto B43681a;
case 0x436820:c.instructions+=6;goto B436820;
case 0x436821:c.instructions+=5;goto B436821;
case 0x436826:c.instructions+=4;goto B436826;
case 0x436827:c.instructions+=3;goto B436827;
case 0x436828:c.instructions+=2;goto B436828;
case 0x43682e:c.instructions+=1;goto B43682e;
case 0x436833:goto L436833;
case 0x436835:c.instructions+=3;goto B436835;
case 0x436838:c.instructions+=2;goto B436838;
case 0x43683a:c.instructions+=1;goto B43683a;
case 0x43683c:goto L43683c;
case 0x43683d:c.instructions+=1;goto B43683d;
case 0x436840:goto L436840;
case 0x436841:c.instructions+=22;goto B436841;
case 0x436843:c.instructions+=21;goto B436843;
case 0x436845:c.instructions+=20;goto B436845;
case 0x43684a:c.instructions+=19;goto B43684a;
case 0x436850:c.instructions+=18;goto B436850;
case 0x436851:c.instructions+=17;goto B436851;
case 0x436858:c.instructions+=16;goto B436858;
case 0x43685b:c.instructions+=15;goto B43685b;
case 0x43685e:c.instructions+=14;goto B43685e;
case 0x436861:c.instructions+=13;goto B436861;
case 0x436862:c.instructions+=12;goto B436862;
case 0x436865:c.instructions+=11;goto B436865;
case 0x436866:c.instructions+=10;goto B436866;
case 0x436869:c.instructions+=9;goto B436869;
case 0x43686a:c.instructions+=8;goto B43686a;
case 0x43686c:c.instructions+=7;goto B43686c;
case 0x43686e:c.instructions+=6;goto B43686e;
case 0x436870:c.instructions+=5;goto B436870;
case 0x436872:c.instructions+=4;goto B436872;
case 0x436875:c.instructions+=3;goto B436875;
case 0x436878:c.instructions+=2;goto B436878;
case 0x43687a:c.instructions+=1;goto B43687a;
case 0x436880:goto L436880;
case 0x436887:goto L436887;
case 0x43688d:c.instructions+=1;goto B43688d;
case 0x436893:goto L436893;
case 0x436898:c.instructions+=2;goto B436898;
case 0x43689a:c.instructions+=1;goto B43689a;
case 0x43689c:goto L43689c;
case 0x43689e:c.instructions+=3;goto B43689e;
case 0x4368a4:c.instructions+=2;goto B4368a4;
case 0x4368a6:c.instructions+=1;goto B4368a6;
case 0x4368ab:goto L4368ab;
case 0x4368b2:c.instructions+=1;goto B4368b2;
case 0x4368b4:goto L4368b4;
case 0x4368b9:c.instructions+=1;goto B4368b9;
case 0x4368be:goto L4368be;
case 0x4368c1:c.instructions+=2;goto B4368c1;
case 0x4368c3:c.instructions+=1;goto B4368c3;
case 0x4368c8:goto L4368c8;
case 0x4368cd:goto L4368cd;
case 0x4368cf:c.instructions+=1;goto B4368cf;
case 0x4368d5:goto L4368d5;
case 0x4368d8:c.instructions+=11;goto B4368d8;
case 0x4368d9:c.instructions+=10;goto B4368d9;
case 0x4368dc:c.instructions+=9;goto B4368dc;
case 0x4368df:c.instructions+=8;goto B4368df;
case 0x4368e2:c.instructions+=7;goto B4368e2;
case 0x4368e5:c.instructions+=6;goto B4368e5;
case 0x4368e8:c.instructions+=5;goto B4368e8;
case 0x4368eb:c.instructions+=4;goto B4368eb;
case 0x4368ee:c.instructions+=3;goto B4368ee;
case 0x4368f1:c.instructions+=2;goto B4368f1;
case 0x4368f4:c.instructions+=1;goto B4368f4;
case 0x4368f9:goto L4368f9;
case 0x4368fc:c.instructions+=7;goto B4368fc;
case 0x4368ff:c.instructions+=6;goto B4368ff;
case 0x436902:c.instructions+=5;goto B436902;
case 0x436905:c.instructions+=4;goto B436905;
case 0x43690b:c.instructions+=3;goto B43690b;
case 0x43690d:c.instructions+=2;goto B43690d;
case 0x436910:c.instructions+=1;goto B436910;
case 0x436916:goto L436916;
case 0x43691a:c.instructions+=2;goto B43691a;
case 0x43691e:c.instructions+=1;goto B43691e;
case 0x436921:goto L436921;
case 0x436924:c.instructions+=5;goto B436924;
case 0x436927:c.instructions+=4;goto B436927;
case 0x436928:c.instructions+=3;goto B436928;
case 0x436929:c.instructions+=2;goto B436929;
case 0x43692a:c.instructions+=1;goto B43692a;
case 0x43692f:goto L43692f;
case 0x436932:c.instructions+=2;goto B436932;
case 0x436934:c.instructions+=1;goto B436934;
case 0x43693a:goto L43693a;
case 0x43693d:c.instructions+=4;goto B43693d;
case 0x436941:c.instructions+=3;goto B436941;
case 0x436942:c.instructions+=2;goto B436942;
case 0x436945:c.instructions+=1;goto B436945;
case 0x43694a:goto L43694a;
case 0x43694c:c.instructions+=1;goto B43694c;
case 0x436952:goto L436952;
case 0x436959:c.instructions+=1;goto B436959;
case 0x43695b:goto L43695b;
case 0x43695c:c.instructions+=2;goto B43695c;
case 0x43695f:c.instructions+=1;goto B43695f;
case 0x436964:goto L436964;
case 0x436966:c.instructions+=1;goto B436966;
case 0x436968:goto L436968;
case 0x43696a:c.instructions+=1;goto B43696a;
case 0x43696f:goto L43696f;
case 0x436972:c.instructions+=2;goto B436972;
case 0x436974:c.instructions+=1;goto B436974;
case 0x436976:goto L436976;
case 0x43697a:c.instructions+=6;goto B43697a;
case 0x43697c:c.instructions+=5;goto B43697c;
case 0x43697f:c.instructions+=4;goto B43697f;
case 0x436982:c.instructions+=3;goto B436982;
case 0x436989:c.instructions+=2;goto B436989;
case 0x43698c:c.instructions+=1;goto B43698c;
case 0x43698e:goto L43698e;
case 0x436990:goto L436990;
case 0x436993:c.instructions+=6;goto B436993;
case 0x436995:c.instructions+=5;goto B436995;
case 0x436998:c.instructions+=4;goto B436998;
case 0x43699b:c.instructions+=3;goto B43699b;
case 0x43699e:c.instructions+=2;goto B43699e;
case 0x4369a0:c.instructions+=1;goto B4369a0;
case 0x4369a2:goto L4369a2;
case 0x4369a4:c.instructions+=1;goto B4369a4;
case 0x4369a9:goto L4369a9;
case 0x4369ac:c.instructions+=2;goto B4369ac;
case 0x4369ae:c.instructions+=1;goto B4369ae;
case 0x4369b0:goto L4369b0;
case 0x4369b4:c.instructions+=6;goto B4369b4;
case 0x4369b6:c.instructions+=5;goto B4369b6;
case 0x4369b9:c.instructions+=4;goto B4369b9;
case 0x4369bc:c.instructions+=3;goto B4369bc;
case 0x4369c3:c.instructions+=2;goto B4369c3;
case 0x4369c6:c.instructions+=1;goto B4369c6;
case 0x4369c8:goto L4369c8;
case 0x4369ca:goto L4369ca;
case 0x4369cd:c.instructions+=5;goto B4369cd;
case 0x4369cf:c.instructions+=4;goto B4369cf;
case 0x4369d2:c.instructions+=3;goto B4369d2;
case 0x4369d5:c.instructions+=2;goto B4369d5;
case 0x4369d8:c.instructions+=1;goto B4369d8;
case 0x4369da:goto L4369da;
case 0x4369dd:c.instructions+=7;goto B4369dd;
case 0x4369e3:c.instructions+=6;goto B4369e3;
case 0x4369e5:c.instructions+=5;goto B4369e5;
case 0x4369e6:c.instructions+=4;goto B4369e6;
case 0x4369e9:c.instructions+=3;goto B4369e9;
case 0x4369eb:c.instructions+=2;goto B4369eb;
case 0x4369ee:c.instructions+=1;goto B4369ee;
case 0x4369f4:goto L4369f4;
case 0x4369f7:c.instructions+=3;goto B4369f7;
case 0x4369fa:c.instructions+=2;goto B4369fa;
case 0x4369fc:c.instructions+=1;goto B4369fc;
case 0x4369fe:goto L4369fe;
case 0x436a01:c.instructions+=6;goto B436a01;
case 0x436a03:c.instructions+=5;goto B436a03;
case 0x436a05:c.instructions+=4;goto B436a05;
case 0x436a07:c.instructions+=3;goto B436a07;
case 0x436a0a:c.instructions+=2;goto B436a0a;
case 0x436a11:c.instructions+=1;goto B436a11;
case 0x436a16:goto L436a16;
case 0x436a1b:goto L436a1b;
case 0x436a1d:c.instructions+=2;goto B436a1d;
case 0x436a20:c.instructions+=1;goto B436a20;
case 0x436a25:goto L436a25;
case 0x436a26:c.instructions+=1;goto B436a26;
case 0x436a2b:goto L436a2b;
case 0x436a2e:c.instructions+=3;goto B436a2e;
case 0x436a2f:c.instructions+=2;goto B436a2f;
case 0x436a32:c.instructions+=1;goto B436a32;
case 0x436a37:goto L436a37;
case 0x436a3a:c.instructions+=14;goto B436a3a;
case 0x436a3c:c.instructions+=13;goto B436a3c;
case 0x436a3f:c.instructions+=12;goto B436a3f;
case 0x436a42:c.instructions+=11;goto B436a42;
case 0x436a44:c.instructions+=10;goto B436a44;
case 0x436a47:c.instructions+=9;goto B436a47;
case 0x436a4a:c.instructions+=8;goto B436a4a;
case 0x436a4c:c.instructions+=7;goto B436a4c;
case 0x436a4f:c.instructions+=6;goto B436a4f;
case 0x436a52:c.instructions+=5;goto B436a52;
case 0x436a54:c.instructions+=4;goto B436a54;
case 0x436a57:c.instructions+=3;goto B436a57;
case 0x436a59:c.instructions+=2;goto B436a59;
case 0x436a60:c.instructions+=1;goto B436a60;
case 0x436a65:goto L436a65;
case 0x436a6a:goto L436a6a;
case 0x436a70:c.instructions+=1;goto B436a70;
case 0x436a76:goto L436a76;
case 0x436a7b:c.instructions+=2;goto B436a7b;
case 0x436a7d:c.instructions+=1;goto B436a7d;
case 0x436a7f:goto L436a7f;
case 0x436a81:c.instructions+=3;goto B436a81;
case 0x436a87:c.instructions+=2;goto B436a87;
case 0x436a89:c.instructions+=1;goto B436a89;
case 0x436a8e:goto L436a8e;
case 0x436a91:c.instructions+=2;goto B436a91;
case 0x436a97:c.instructions+=1;goto B436a97;
case 0x436a99:goto L436a99;
case 0x436a9e:c.instructions+=1;goto B436a9e;
case 0x436aa3:goto L436aa3;
case 0x436aa6:c.instructions+=7;goto B436aa6;
case 0x436aa9:c.instructions+=6;goto B436aa9;
case 0x436aac:c.instructions+=5;goto B436aac;
case 0x436aae:c.instructions+=4;goto B436aae;
case 0x436ab4:c.instructions+=3;goto B436ab4;
case 0x436ab6:c.instructions+=2;goto B436ab6;
case 0x436ab8:c.instructions+=1;goto B436ab8;
case 0x436abd:goto L436abd;
case 0x436ac0:c.instructions+=1;goto B436ac0;
case 0x436ac5:goto L436ac5;
case 0x436ac6:c.instructions+=2;goto B436ac6;
case 0x436ac9:c.instructions+=1;goto B436ac9;
case 0x436ace:goto L436ace;
case 0x436ad3:c.instructions+=2;goto B436ad3;
case 0x436ad4:c.instructions+=1;goto B436ad4;
case 0x436ad9:goto L436ad9;
case 0x436adc:c.instructions+=11;goto B436adc;
case 0x436adf:c.instructions+=10;goto B436adf;
case 0x436ae2:c.instructions+=9;goto B436ae2;
case 0x436ae5:c.instructions+=8;goto B436ae5;
case 0x436ae8:c.instructions+=7;goto B436ae8;
case 0x436aeb:c.instructions+=6;goto B436aeb;
case 0x436af1:c.instructions+=5;goto B436af1;
case 0x436af4:c.instructions+=4;goto B436af4;
case 0x436af6:c.instructions+=3;goto B436af6;
case 0x436af8:c.instructions+=2;goto B436af8;
case 0x436afb:c.instructions+=1;goto B436afb;
case 0x436b01:goto L436b01;
case 0x436b04:c.instructions+=1;goto B436b04;
case 0x436b08:goto L436b08;
case 0x436b0b:c.instructions+=4;goto B436b0b;
case 0x436b0c:c.instructions+=3;goto B436b0c;
case 0x436b0d:c.instructions+=2;goto B436b0d;
case 0x436b0e:c.instructions+=1;goto B436b0e;
case 0x436b13:goto L436b13;
case 0x436b16:c.instructions+=2;goto B436b16;
case 0x436b18:c.instructions+=1;goto B436b18;
case 0x436b1a:goto L436b1a;
case 0x436b20:c.instructions+=4;goto B436b20;
case 0x436b27:c.instructions+=3;goto B436b27;
case 0x436b28:c.instructions+=2;goto B436b28;
case 0x436b2b:c.instructions+=1;goto B436b2b;
case 0x436b30:goto L436b30;
case 0x436b32:c.instructions+=1;goto B436b32;
case 0x436b34:goto L436b34;
case 0x436b35:c.instructions+=2;goto B436b35;
case 0x436b38:c.instructions+=1;goto B436b38;
case 0x436b3d:goto L436b3d;
case 0x436b3f:c.instructions+=1;goto B436b3f;
case 0x436b41:goto L436b41;
case 0x436b44:c.instructions+=4;goto B436b44;
case 0x436b45:c.instructions+=3;goto B436b45;
case 0x436b46:c.instructions+=2;goto B436b46;
case 0x436b49:c.instructions+=1;goto B436b49;
case 0x436b4e:goto L436b4e;
case 0x436b50:c.instructions+=1;goto B436b50;
case 0x436b52:goto L436b52;
case 0x436b54:c.instructions+=1;goto B436b54;
case 0x436b59:goto L436b59;
case 0x436b5c:c.instructions+=2;goto B436b5c;
case 0x436b5e:c.instructions+=1;goto B436b5e;
case 0x436b60:goto L436b60;
case 0x436b64:c.instructions+=6;goto B436b64;
case 0x436b66:c.instructions+=5;goto B436b66;
case 0x436b69:c.instructions+=4;goto B436b69;
case 0x436b6c:c.instructions+=3;goto B436b6c;
case 0x436b73:c.instructions+=2;goto B436b73;
case 0x436b76:c.instructions+=1;goto B436b76;
case 0x436b78:goto L436b78;
case 0x436b7a:goto L436b7a;
case 0x436b7d:c.instructions+=5;goto B436b7d;
case 0x436b7f:c.instructions+=4;goto B436b7f;
case 0x436b82:c.instructions+=3;goto B436b82;
case 0x436b85:c.instructions+=2;goto B436b85;
case 0x436b88:c.instructions+=1;goto B436b88;
case 0x436b8a:goto L436b8a;
case 0x436b90:c.instructions+=4;goto B436b90;
case 0x436b93:c.instructions+=3;goto B436b93;
case 0x436b94:c.instructions+=2;goto B436b94;
case 0x436b96:c.instructions+=1;goto B436b96;
case 0x436b9c:goto L436b9c;
case 0x436b9f:c.instructions+=3;goto B436b9f;
case 0x436ba2:c.instructions+=2;goto B436ba2;
case 0x436ba4:c.instructions+=1;goto B436ba4;
case 0x436ba6:goto L436ba6;
case 0x436ba9:c.instructions+=4;goto B436ba9;
case 0x436bac:c.instructions+=3;goto B436bac;
case 0x436bb2:c.instructions+=2;goto B436bb2;
case 0x436bb8:c.instructions+=1;goto B436bb8;
case 0x436bba:goto L436bba;
case 0x436bbc:c.instructions+=2;goto B436bbc;
case 0x436bbf:c.instructions+=1;goto B436bbf;
case 0x436bc4:goto L436bc4;
case 0x436bc5:c.instructions+=1;goto B436bc5;
case 0x436bca:goto L436bca;
case 0x436bcd:c.instructions+=3;goto B436bcd;
case 0x436bce:c.instructions+=2;goto B436bce;
case 0x436bd1:c.instructions+=1;goto B436bd1;
case 0x436bd6:goto L436bd6;
case 0x436bd9:c.instructions+=11;goto B436bd9;
case 0x436bdc:c.instructions+=10;goto B436bdc;
case 0x436bde:c.instructions+=9;goto B436bde;
case 0x436be1:c.instructions+=8;goto B436be1;
case 0x436be4:c.instructions+=7;goto B436be4;
case 0x436be6:c.instructions+=6;goto B436be6;
case 0x436be9:c.instructions+=5;goto B436be9;
case 0x436bec:c.instructions+=4;goto B436bec;
case 0x436bee:c.instructions+=3;goto B436bee;
case 0x436bf1:c.instructions+=2;goto B436bf1;
case 0x436bf4:c.instructions+=1;goto B436bf4;
case 0x436bf6:goto L436bf6;
case 0x436bf9:c.instructions+=2;goto B436bf9;
case 0x436c00:c.instructions+=1;goto B436c00;
case 0x436c05:goto L436c05;
case 0x436c08:c.instructions+=2;goto B436c08;
case 0x436c0a:c.instructions+=1;goto B436c0a;
case 0x436c0f:goto L436c0f;
case 0x436c15:c.instructions+=1;goto B436c15;
case 0x436c1b:goto L436c1b;
case 0x436c20:c.instructions+=2;goto B436c20;
case 0x436c22:c.instructions+=1;goto B436c22;
case 0x436c24:goto L436c24;
case 0x436c26:c.instructions+=3;goto B436c26;
case 0x436c2c:c.instructions+=2;goto B436c2c;
case 0x436c2e:c.instructions+=1;goto B436c2e;
case 0x436c33:goto L436c33;
case 0x436c36:c.instructions+=7;goto B436c36;
case 0x436c39:c.instructions+=6;goto B436c39;
case 0x436c3c:c.instructions+=5;goto B436c3c;
case 0x436c3f:c.instructions+=4;goto B436c3f;
case 0x436c44:c.instructions+=3;goto B436c44;
case 0x436c47:c.instructions+=2;goto B436c47;
case 0x436c4e:c.instructions+=1;goto B436c4e;
case 0x436c50:goto L436c50;
case 0x436c52:goto L436c52;
case 0x436c59:c.instructions+=3;goto B436c59;
case 0x436c5c:c.instructions+=2;goto B436c5c;
case 0x436c63:c.instructions+=1;goto B436c63;
case 0x436c65:goto L436c65;
case 0x436c69:c.instructions+=2;goto B436c69;
case 0x436c6c:c.instructions+=1;goto B436c6c;
case 0x436c6e:goto L436c6e;
case 0x436c70:c.instructions+=1;goto B436c70;
case 0x436c75:goto L436c75;
case 0x436c78:c.instructions+=2;goto B436c78;
case 0x436c7a:c.instructions+=1;goto B436c7a;
case 0x436c7c:goto L436c7c;
case 0x436c80:c.instructions+=6;goto B436c80;
case 0x436c82:c.instructions+=5;goto B436c82;
case 0x436c85:c.instructions+=4;goto B436c85;
case 0x436c88:c.instructions+=3;goto B436c88;
case 0x436c8f:c.instructions+=2;goto B436c8f;
case 0x436c92:c.instructions+=1;goto B436c92;
case 0x436c94:goto L436c94;
case 0x436c96:goto L436c96;
case 0x436c99:c.instructions+=6;goto B436c99;
case 0x436c9b:c.instructions+=5;goto B436c9b;
case 0x436c9e:c.instructions+=4;goto B436c9e;
case 0x436ca1:c.instructions+=3;goto B436ca1;
case 0x436ca4:c.instructions+=2;goto B436ca4;
case 0x436ca6:c.instructions+=1;goto B436ca6;
case 0x436cab:goto L436cab;
case 0x436cae:c.instructions+=4;goto B436cae;
case 0x436caf:c.instructions+=3;goto B436caf;
case 0x436cb2:c.instructions+=2;goto B436cb2;
case 0x436cb4:c.instructions+=1;goto B436cb4;
case 0x436cb6:goto L436cb6;
case 0x436cb9:c.instructions+=3;goto B436cb9;
case 0x436cbc:c.instructions+=2;goto B436cbc;
case 0x436cbe:c.instructions+=1;goto B436cbe;
case 0x436cc0:goto L436cc0;
case 0x436cc3:c.instructions+=4;goto B436cc3;
case 0x436cc6:c.instructions+=3;goto B436cc6;
case 0x436ccc:c.instructions+=2;goto B436ccc;
case 0x436cd2:c.instructions+=1;goto B436cd2;
case 0x436cd4:goto L436cd4;
case 0x436cd6:c.instructions+=2;goto B436cd6;
case 0x436cd9:c.instructions+=1;goto B436cd9;
case 0x436cde:goto L436cde;
case 0x436cdf:c.instructions+=1;goto B436cdf;
case 0x436ce4:goto L436ce4;
case 0x436ce7:c.instructions+=3;goto B436ce7;
case 0x436ce8:c.instructions+=2;goto B436ce8;
case 0x436ceb:c.instructions+=1;goto B436ceb;
case 0x436cf0:goto L436cf0;
case 0x436cf3:c.instructions+=11;goto B436cf3;
case 0x436cf6:c.instructions+=10;goto B436cf6;
case 0x436cf8:c.instructions+=9;goto B436cf8;
case 0x436cfb:c.instructions+=8;goto B436cfb;
case 0x436cfe:c.instructions+=7;goto B436cfe;
case 0x436d00:c.instructions+=6;goto B436d00;
case 0x436d03:c.instructions+=5;goto B436d03;
case 0x436d06:c.instructions+=4;goto B436d06;
case 0x436d08:c.instructions+=3;goto B436d08;
case 0x436d0b:c.instructions+=2;goto B436d0b;
case 0x436d0e:c.instructions+=1;goto B436d0e;
case 0x436d10:goto L436d10;
case 0x436d13:c.instructions+=2;goto B436d13;
case 0x436d1a:c.instructions+=1;goto B436d1a;
case 0x436d1f:goto L436d1f;
case 0x436d22:c.instructions+=2;goto B436d22;
case 0x436d24:c.instructions+=1;goto B436d24;
case 0x436d29:goto L436d29;
case 0x436d2f:c.instructions+=1;goto B436d2f;
case 0x436d35:goto L436d35;
case 0x436d3c:c.instructions+=1;goto B436d3c;
case 0x436d42:goto L436d42;
case 0x436d45:c.instructions+=11;goto B436d45;
case 0x436d46:c.instructions+=10;goto B436d46;
case 0x436d49:c.instructions+=9;goto B436d49;
case 0x436d4c:c.instructions+=8;goto B436d4c;
case 0x436d4f:c.instructions+=7;goto B436d4f;
case 0x436d52:c.instructions+=6;goto B436d52;
case 0x436d55:c.instructions+=5;goto B436d55;
case 0x436d58:c.instructions+=4;goto B436d58;
case 0x436d5b:c.instructions+=3;goto B436d5b;
case 0x436d5e:c.instructions+=2;goto B436d5e;
case 0x436d61:c.instructions+=1;goto B436d61;
case 0x436d66:goto L436d66;
case 0x436d69:c.instructions+=7;goto B436d69;
case 0x436d6c:c.instructions+=6;goto B436d6c;
case 0x436d6f:c.instructions+=5;goto B436d6f;
case 0x436d72:c.instructions+=4;goto B436d72;
case 0x436d78:c.instructions+=3;goto B436d78;
case 0x436d7b:c.instructions+=2;goto B436d7b;
case 0x436d82:c.instructions+=1;goto B436d82;
case 0x436d88:goto L436d88;
case 0x436d8c:c.instructions+=2;goto B436d8c;
case 0x436d90:c.instructions+=1;goto B436d90;
case 0x436d95:goto L436d95;
case 0x436d98:c.instructions+=5;goto B436d98;
case 0x436d9b:c.instructions+=4;goto B436d9b;
case 0x436d9c:c.instructions+=3;goto B436d9c;
case 0x436d9d:c.instructions+=2;goto B436d9d;
case 0x436d9e:c.instructions+=1;goto B436d9e;
case 0x436da3:goto L436da3;
case 0x436da6:c.instructions+=2;goto B436da6;
case 0x436da8:c.instructions+=1;goto B436da8;
case 0x436daa:goto L436daa;
case 0x436dac:c.instructions+=3;goto B436dac;
case 0x436dad:c.instructions+=2;goto B436dad;
case 0x436db0:c.instructions+=1;goto B436db0;
case 0x436db5:goto L436db5;
case 0x436db7:c.instructions+=1;goto B436db7;
case 0x436db9:goto L436db9;
case 0x436dbb:c.instructions+=1;goto B436dbb;
case 0x436dc0:goto L436dc0;
case 0x436dc3:c.instructions+=2;goto B436dc3;
case 0x436dc5:c.instructions+=1;goto B436dc5;
case 0x436dc7:goto L436dc7;
case 0x436dcb:c.instructions+=6;goto B436dcb;
case 0x436dcd:c.instructions+=5;goto B436dcd;
case 0x436dd0:c.instructions+=4;goto B436dd0;
case 0x436dd3:c.instructions+=3;goto B436dd3;
case 0x436dda:c.instructions+=2;goto B436dda;
case 0x436ddd:c.instructions+=1;goto B436ddd;
case 0x436ddf:goto L436ddf;
case 0x436de1:goto L436de1;
case 0x436de4:c.instructions+=5;goto B436de4;
case 0x436de6:c.instructions+=4;goto B436de6;
case 0x436de9:c.instructions+=3;goto B436de9;
case 0x436dec:c.instructions+=2;goto B436dec;
case 0x436def:c.instructions+=1;goto B436def;
case 0x436df1:goto L436df1;
case 0x436df7:c.instructions+=5;goto B436df7;
case 0x436dfa:c.instructions+=4;goto B436dfa;
case 0x436dfb:c.instructions+=3;goto B436dfb;
case 0x436dfe:c.instructions+=2;goto B436dfe;
case 0x436e00:c.instructions+=1;goto B436e00;
case 0x436e02:goto L436e02;
case 0x436e05:c.instructions+=3;goto B436e05;
case 0x436e08:c.instructions+=2;goto B436e08;
case 0x436e0a:c.instructions+=1;goto B436e0a;
case 0x436e0c:goto L436e0c;
case 0x436e0f:c.instructions+=4;goto B436e0f;
case 0x436e12:c.instructions+=3;goto B436e12;
case 0x436e18:c.instructions+=2;goto B436e18;
case 0x436e1e:c.instructions+=1;goto B436e1e;
case 0x436e23:goto L436e23;
case 0x436e29:c.instructions+=6;goto B436e29;
case 0x436e2c:c.instructions+=5;goto B436e2c;
case 0x436e2d:c.instructions+=4;goto B436e2d;
case 0x436e2f:c.instructions+=3;goto B436e2f;
case 0x436e32:c.instructions+=2;goto B436e32;
case 0x436e35:c.instructions+=1;goto B436e35;
case 0x436e3a:goto L436e3a;
case 0x436e3b:c.instructions+=1;goto B436e3b;
case 0x436e40:goto L436e40;
case 0x436e43:c.instructions+=3;goto B436e43;
case 0x436e44:c.instructions+=2;goto B436e44;
case 0x436e47:c.instructions+=1;goto B436e47;
case 0x436e4c:goto L436e4c;
case 0x436e4e:c.instructions+=1;goto B436e4e;
case 0x436e53:goto L436e53;
case 0x436e55:c.instructions+=1;goto B436e55;
case 0x436e5b:goto L436e5b;
case 0x436e5e:c.instructions+=4;goto B436e5e;
case 0x436e63:c.instructions+=3;goto B436e63;
case 0x436e68:c.instructions+=2;goto B436e68;
case 0x436e6d:c.instructions+=1;goto B436e6d;
case 0x436e72:goto L436e72;
case 0x436e75:c.instructions+=2;goto B436e75;
case 0x436e77:c.instructions+=1;goto B436e77;
case 0x436e79:goto L436e79;
case 0x436e7e:goto L436e7e;
case 0x436e83:c.instructions+=1;goto B436e83;
case 0x436e88:goto L436e88;
case 0x436e8b:c.instructions+=2;goto B436e8b;
case 0x436e8d:c.instructions+=1;goto B436e8d;
case 0x436e8f:goto L436e8f;
case 0x436e94:c.instructions+=2;goto B436e94;
case 0x436e99:c.instructions+=1;goto B436e99;
case 0x436e9b:goto L436e9b;
case 0x436ea0:c.instructions+=1;goto B436ea0;
case 0x436ea5:goto L436ea5;
case 0x436ea8:c.instructions+=2;goto B436ea8;
case 0x436eaa:c.instructions+=1;goto B436eaa;
case 0x436eac:goto L436eac;
case 0x436eb1:c.instructions+=1;goto B436eb1;
case 0x436eb3:goto L436eb3;
case 0x436eb8:c.instructions+=1;goto B436eb8;
case 0x436ebd:goto L436ebd;
case 0x436ec0:c.instructions+=2;goto B436ec0;
case 0x436ec2:c.instructions+=1;goto B436ec2;
case 0x436ec4:goto L436ec4;
case 0x436ec9:c.instructions+=2;goto B436ec9;
case 0x436ece:c.instructions+=1;goto B436ece;
case 0x436ed0:goto L436ed0;
case 0x436ed5:c.instructions+=1;goto B436ed5;
case 0x436eda:goto L436eda;
case 0x436edd:c.instructions+=2;goto B436edd;
case 0x436edf:c.instructions+=1;goto B436edf;
case 0x436ee1:goto L436ee1;
case 0x436ee6:c.instructions+=2;goto B436ee6;
case 0x436eeb:c.instructions+=1;goto B436eeb;
case 0x436eed:goto L436eed;
case 0x436ef2:c.instructions+=1;goto B436ef2;
case 0x436ef7:goto L436ef7;
case 0x436efa:c.instructions+=2;goto B436efa;
case 0x436efc:c.instructions+=1;goto B436efc;
case 0x436efe:goto L436efe;
case 0x436f03:goto L436f03;
case 0x436f08:goto L436f08;
case 0x436f0a:c.instructions+=5;goto B436f0a;
case 0x436f10:c.instructions+=4;goto B436f10;
case 0x436f16:c.instructions+=3;goto B436f16;
case 0x436f19:c.instructions+=2;goto B436f19;
case 0x436f1c:c.instructions+=1;goto B436f1c;
case 0x436f1e:goto L436f1e;
case 0x436f24:goto L436f24;
case 0x436f26:c.instructions+=5;goto B436f26;
case 0x436f28:c.instructions+=4;goto B436f28;
case 0x436f2b:c.instructions+=3;goto B436f2b;
case 0x436f2e:c.instructions+=2;goto B436f2e;
case 0x436f31:c.instructions+=1;goto B436f31;
case 0x436f33:goto L436f33;
case 0x436f39:goto L436f39;
case 0x436f3e:c.instructions+=3;goto B436f3e;
case 0x436f40:c.instructions+=2;goto B436f40;
case 0x436f42:c.instructions+=1;goto B436f42;
case 0x436f44:goto L436f44;
case 0x436f47:c.instructions+=3;goto B436f47;
case 0x436f4d:c.instructions+=2;goto B436f4d;
case 0x436f50:c.instructions+=1;goto B436f50;
case 0x436f52:goto L436f52;
case 0x436f54:goto L436f54;
case 0x436f57:c.instructions+=4;goto B436f57;
case 0x436f5a:c.instructions+=3;goto B436f5a;
case 0x436f60:c.instructions+=2;goto B436f60;
case 0x436f66:c.instructions+=1;goto B436f66;
case 0x436f6b:goto L436f6b;
case 0x436f6e:c.instructions+=16;goto B436f6e;
case 0x436f71:c.instructions+=15;goto B436f71;
case 0x436f73:c.instructions+=14;goto B436f73;
case 0x436f76:c.instructions+=13;goto B436f76;
case 0x436f79:c.instructions+=12;goto B436f79;
case 0x436f7b:c.instructions+=11;goto B436f7b;
case 0x436f7e:c.instructions+=10;goto B436f7e;
case 0x436f81:c.instructions+=9;goto B436f81;
case 0x436f84:c.instructions+=8;goto B436f84;
case 0x436f86:c.instructions+=7;goto B436f86;
case 0x436f89:c.instructions+=6;goto B436f89;
case 0x436f8b:c.instructions+=5;goto B436f8b;
case 0x436f91:c.instructions+=4;goto B436f91;
case 0x436f94:c.instructions+=3;goto B436f94;
case 0x436f96:c.instructions+=2;goto B436f96;
case 0x436f98:c.instructions+=1;goto B436f98;
case 0x436f9a:goto L436f9a;
case 0x436fa0:c.instructions+=2;goto B436fa0;
case 0x436fa3:c.instructions+=1;goto B436fa3;
case 0x436fa6:goto L436fa6;
case 0x436fa9:c.instructions+=3;goto B436fa9;
case 0x436fab:c.instructions+=2;goto B436fab;
case 0x436fae:c.instructions+=1;goto B436fae;
case 0x436fb3:goto L436fb3;
case 0x436fb5:c.instructions+=1;goto B436fb5;
case 0x436fb7:goto L436fb7;
case 0x436fba:c.instructions+=5;goto B436fba;
case 0x436fbb:c.instructions+=4;goto B436fbb;
case 0x436fbe:c.instructions+=3;goto B436fbe;
case 0x436fc0:c.instructions+=2;goto B436fc0;
case 0x436fc3:c.instructions+=1;goto B436fc3;
case 0x436fc5:goto L436fc5;
case 0x436fc7:goto L436fc7;
case 0x436fca:c.instructions+=8;goto B436fca;
case 0x436fcd:c.instructions+=7;goto B436fcd;
case 0x436fd3:c.instructions+=6;goto B436fd3;
case 0x436fda:c.instructions+=5;goto B436fda;
case 0x436fdd:c.instructions+=4;goto B436fdd;
case 0x436fe1:c.instructions+=3;goto B436fe1;
case 0x436fe6:c.instructions+=2;goto B436fe6;
case 0x436fe9:c.instructions+=1;goto B436fe9;
case 0x436feb:goto L436feb;
case 0x436fee:c.instructions+=2;goto B436fee;
case 0x436ff5:c.instructions+=1;goto B436ff5;
case 0x436ffa:goto L436ffa;
case 0x436ffd:c.instructions+=2;goto B436ffd;
case 0x436fff:c.instructions+=1;goto B436fff;
default:missing_instruction(c.pc);}
B436000:L436000:{c.instructions+=2;NFSU2_TR(0x436000);
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
B436002:{NFSU2_TR(0x436002);
if(r1(R+518)){{goto L43600f;}}
}
B436004:L436004:{c.instructions+=3;NFSU2_TR(0x436004);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B436005:{NFSU2_TR(0x436005);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((R+4),(U+0),4);
}
B436008:{NFSU2_TR(0x436008);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x43600dull));
TAIL_STATIC(0x479130u,479);
}
B43600d:L43600d:{c.instructions+=1;NFSU2_TR(0x43600d);
{goto L43601e;}
}
B43600f:L43600f:{c.instructions+=3;NFSU2_TR(0x43600f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B436011:{NFSU2_TR(0x436011);
__builtin_memmove((R+4),(R+24),4);
}
B436013:{NFSU2_TR(0x436013);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x436016ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B436016:L436016:{c.instructions+=4;NFSU2_TR(0x436016);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B436018:{NFSU2_TR(0x436018);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43601a:{NFSU2_TR(0x43601a);
__builtin_memmove((R+4),(R+24),4);
}
B43601c:{NFSU2_TR(0x43601c);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x43601eull));
{u32 t_=u32(r4(U+4));TAIL_DYNAMIC(t_);}
}
B43601e:L43601e:{c.instructions+=3;NFSU2_TR(0x43601e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+28),(U+0),4);
}
B436020:{NFSU2_TR(0x436020);
u8 U[22];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(R+28))<(r4(U+14))));
w1(R+523,sborrow<u32>(r4(R+28),r4(U+14)));
w4(U+18,u32(u32(r4(R+28))-u32(r4(U+14))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B436024:{NFSU2_TR(0x436024);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x435fe0u,435);}
}
B436026:L436026:{c.instructions+=6;NFSU2_TR(0x436026);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B436027:{NFSU2_TR(0x436027);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B436028:{NFSU2_TR(0x436028);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B436029:{NFSU2_TR(0x436029);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B43602a:{NFSU2_TR(0x43602a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B43602b:{NFSU2_TR(0x43602b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B436030:L436030:{c.instructions+=3;NFSU2_TR(0x436030);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B436031:{NFSU2_TR(0x436031);
__builtin_memmove((R+24),(R+4),4);
}
B436033:{NFSU2_TR(0x436033);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x436038ull));
TAIL_STATIC(0x432aa0u,432);
}
B436038:L436038:{c.instructions+=2;NFSU2_TR(0x436038);
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
B43603d:{NFSU2_TR(0x43603d);
if(r1(R+518)){{goto L436048;}}
}
B43603f:L43603f:{c.instructions+=2;NFSU2_TR(0x43603f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B436040:{NFSU2_TR(0x436040);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x436045ull));
TAIL_STATIC(0x575630u,575);
}
B436045:L436045:{c.instructions+=1;NFSU2_TR(0x436045);
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
B436048:L436048:{c.instructions+=3;NFSU2_TR(0x436048);
__builtin_memmove((R+0),(R+24),4);
}
B43604a:{NFSU2_TR(0x43604a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B43604b:{NFSU2_TR(0x43604b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B436050:L436050:{c.instructions+=17;NFSU2_TR(0x436050);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B436051:{NFSU2_TR(0x436051);
__builtin_memmove((R+20),(R+16),4);
}
B436053:{NFSU2_TR(0x436053);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B436056:{NFSU2_TR(0x436056);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B436058:{NFSU2_TR(0x436058);
u8 U[4];
w4(U+0,u32(0x771cebull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43605d:{NFSU2_TR(0x43605d);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B436063:{NFSU2_TR(0x436063);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B436064:{NFSU2_TR(0x436064);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43606b:{NFSU2_TR(0x43606b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x3e8ull))));
}
B436071:{NFSU2_TR(0x436071);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B436072:{NFSU2_TR(0x436072);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B436073:{NFSU2_TR(0x436073);
__builtin_memmove((R+24),(R+4),4);
}
B436075:{NFSU2_TR(0x436075);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B436078:{NFSU2_TR(0x436078);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B436079:{NFSU2_TR(0x436079);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B43607b:{NFSU2_TR(0x43607b);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B43607d:{NFSU2_TR(0x43607d);
if(r1(R+518)){{goto L436371;}}
}
B436083:L436083:{c.instructions+=11;NFSU2_TR(0x436083);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B436086:{NFSU2_TR(0x436086);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x80ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B43608c:{NFSU2_TR(0x43608c);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x80ull))));
}
B436091:{NFSU2_TR(0x436091);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B436095:{NFSU2_TR(0x436095);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B436098:{NFSU2_TR(0x436098);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B43609b:{NFSU2_TR(0x43609b);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43609f:{NFSU2_TR(0x43609f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4360a2:{NFSU2_TR(0x4360a2);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4360a3:{NFSU2_TR(0x4360a3);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4360a7:{NFSU2_TR(0x4360a7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4360acull));
TAIL_STATIC(0x434b00u,434);
}
B4360ac:L4360ac:{c.instructions+=3;NFSU2_TR(0x4360ac);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4360af:{NFSU2_TR(0x4360af);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4360b1:{NFSU2_TR(0x4360b1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4360b6ull));
TAIL_STATIC(0x431400u,431);
}
B4360b6:L4360b6:{c.instructions+=5;NFSU2_TR(0x4360b6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4360b9:{NFSU2_TR(0x4360b9);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B4360bd:{NFSU2_TR(0x4360bd);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B4360c0:{NFSU2_TR(0x4360c0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4360c3:{NFSU2_TR(0x4360c3);
if(r1(R+518)){{goto L436279;}}
}
B4360c9:L4360c9:{c.instructions+=4;NFSU2_TR(0x4360c9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xe8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4360cf:{NFSU2_TR(0x4360cf);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1aull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B4360d2:{NFSU2_TR(0x4360d2);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4360d4:{NFSU2_TR(0x4360d4);
if(r1(R+518)){{goto L436165;}}
}
B4360da:L4360da:{c.instructions+=6;NFSU2_TR(0x4360da);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4360dd:{NFSU2_TR(0x4360dd);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),u32(0x50ull)));
w1(R+523,scarry<u32>(r4(R+0),u32(0x50ull)));
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x50ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4360e0:{NFSU2_TR(0x4360e0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4360e1:{NFSU2_TR(0x4360e1);
u8 U[4];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B4360e5:{NFSU2_TR(0x4360e5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4360e6:{NFSU2_TR(0x4360e6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4360ebull));
TAIL_STATIC(0x4012b0u,401);
}
B4360eb:L4360eb:{c.instructions+=4;NFSU2_TR(0x4360eb);
__builtin_memmove((R+0),gp(0x8900bc),4);
}
B4360f0:{NFSU2_TR(0x4360f0);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4360f3:{NFSU2_TR(0x4360f3);
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
B4360f5:{NFSU2_TR(0x4360f5);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L436140;}}
}
B4360f7:L4360f7:{c.instructions+=1;NFSU2_TR(0x4360f7);
{goto L436100;}
}
B436100:L436100:{c.instructions+=4;NFSU2_TR(0x436100);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x8900b4ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B436107:{NFSU2_TR(0x436107);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x238ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B43610d:{NFSU2_TR(0x43610d);
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
B43610f:{NFSU2_TR(0x43610f);
if(r1(R+518)){{goto L43611a;}}
}
B436111:L436111:{c.instructions+=2;NFSU2_TR(0x436111);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B436113:{NFSU2_TR(0x436113);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x436116ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B436116:L436116:{c.instructions+=2;NFSU2_TR(0x436116);
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
B436118:{NFSU2_TR(0x436118);
if(r1(R+518)){{goto L436126;}}
}
B43611a:L43611a:{c.instructions+=4;NFSU2_TR(0x43611a);
__builtin_memmove((R+0),gp(0x8900bc),4);
}
B43611f:{NFSU2_TR(0x43611f);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B436120:{NFSU2_TR(0x436120);
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
B436122:{NFSU2_TR(0x436122);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x436100u);}goto L436100;}}
}
B436124:L436124:{c.instructions+=1;NFSU2_TR(0x436124);
{goto L436140;}
}
B436126:L436126:{c.instructions+=7;NFSU2_TR(0x436126);
{u32 ea_=u32(u32(7887924u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B43612c:{NFSU2_TR(0x43612c);
u8 U[8];
w4(U+0,u32(u32(u32(0x70ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B436130:{NFSU2_TR(0x436130);
{u32 ea_=u32(r4(R+16)+u32(116u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B436134:{NFSU2_TR(0x436134);
u8 U[8];
w4(U+0,u32(u32(u32(0x70ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B436138:{NFSU2_TR(0x436138);
__asm__ volatile(".byte 0xd8,0xc1":::"memory");
}
B43613a:{NFSU2_TR(0x43613a);
{u32 ea_=u32(r4(R+16)+u32(116u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B43613e:{NFSU2_TR(0x43613e);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B436140:L436140:{c.instructions+=6;NFSU2_TR(0x436140);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B436143:{NFSU2_TR(0x436143);
u8 U[4];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B436147:{NFSU2_TR(0x436147);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x50ull))));
__builtin_memmove((R+0),(U+0),4);
}
B43614a:{NFSU2_TR(0x43614a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43614b:{NFSU2_TR(0x43614b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43614c:{NFSU2_TR(0x43614c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x436151ull));
TAIL_STATIC(0x4012b0u,401);
}
B436151:L436151:{c.instructions+=4;NFSU2_TR(0x436151);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B436157:{NFSU2_TR(0x436157);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B43615a:{NFSU2_TR(0x43615a);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B43615c:{NFSU2_TR(0x43615c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L436165;}}
}
B43615e:L43615e:{c.instructions+=2;NFSU2_TR(0x43615e);
__builtin_memmove((R+4),(R+28),4);
}
B436160:{NFSU2_TR(0x436160);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x436165ull));
TAIL_STATIC(0x6147e0u,614);
}
B436165:L436165:{c.instructions+=3;NFSU2_TR(0x436165);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B436168:{NFSU2_TR(0x436168);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B43616a:{NFSU2_TR(0x43616a);
if(r1(R+518)){{goto L43623c;}}
}
B436170:L436170:{c.instructions+=5;NFSU2_TR(0x436170);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B436174:{NFSU2_TR(0x436174);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B436175:{NFSU2_TR(0x436175);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B436177:{NFSU2_TR(0x436177);
__builtin_memmove((R+4),(R+24),4);
}
B436179:{NFSU2_TR(0x436179);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x43617eull));
TAIL_STATIC(0x431280u,431);
}
B43617e:L43617e:{c.instructions+=4;NFSU2_TR(0x43617e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B436181:{NFSU2_TR(0x436181);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B436187:{NFSU2_TR(0x436187);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B436189:{NFSU2_TR(0x436189);
if(r1(R+518)){{goto L436192;}}
}
B43618b:L43618b:{c.instructions+=2;NFSU2_TR(0x43618b);
__builtin_memmove((R+4),(R+28),4);
}
B43618d:{NFSU2_TR(0x43618d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x436192ull));
TAIL_STATIC(0x60bb10u,60b);
}
B436192:L436192:{c.instructions+=4;NFSU2_TR(0x436192);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B436195:{NFSU2_TR(0x436195);
u8 U[4];
w4(U+0,u32(u32(u32(0xd8ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B43619c:{NFSU2_TR(0x43619c);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4361a0:{NFSU2_TR(0x4361a0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4361a5ull));
TAIL_STATIC(0x5e0b40u,5e0);
}
B4361a5:L4361a5:{c.instructions+=9;NFSU2_TR(0x4361a5);
u8 U[4];
w4(U+0,u32(u32(u32(0x13ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B4361a9:{NFSU2_TR(0x4361a9);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4361aa:{NFSU2_TR(0x4361aa);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4361ac:{NFSU2_TR(0x4361ac);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4361ae:{NFSU2_TR(0x4361ae);
u8 U[4];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B4361b2:{NFSU2_TR(0x4361b2);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4361b3:{NFSU2_TR(0x4361b3);
u8 U[4];
w4(U+0,u32(u32(u32(0xe8ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B4361ba:{NFSU2_TR(0x4361ba);
u8 U[8];
w4(U+0,u32(u32(u32(0x40cull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4361c5:{NFSU2_TR(0x4361c5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4361caull));
TAIL_STATIC(0x5e7e70u,5e7);
}
B4361ca:L4361ca:{c.instructions+=3;NFSU2_TR(0x4361ca);
u8 U[5];
w4(U+0,u32(u32(u32(0x13ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B4361ce:{NFSU2_TR(0x4361ce);
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
B4361d0:{NFSU2_TR(0x4361d0);
if(r1(R+518)){{goto L43621e;}}
}
B4361d2:L4361d2:{c.instructions+=3;NFSU2_TR(0x4361d2);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x19ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B4361d5:{NFSU2_TR(0x4361d5);
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
B4361d7:{NFSU2_TR(0x4361d7);
if(r1(R+518)){{goto L4361f9;}}
}
B4361d9:L4361d9:{c.instructions+=9;NFSU2_TR(0x4361d9);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4361df:{NFSU2_TR(0x4361df);
{u32 ea_=u32(u32(7887920u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B4361e5:{NFSU2_TR(0x4361e5);
{u32 ea_=u32(r4(R+24)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4361e8:{NFSU2_TR(0x4361e8);
{u32 ea_=u32(u32(7887920u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4361ee:{NFSU2_TR(0x4361ee);
__asm__ volatile(".byte 0xd8,0xca":::"memory");
}
B4361f0:{NFSU2_TR(0x4361f0);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B4361f2:{NFSU2_TR(0x4361f2);
{u32 ea_=u32(r4(R+24)+u32(32u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4361f5:{NFSU2_TR(0x4361f5);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B4361f7:{NFSU2_TR(0x4361f7);
{goto L436200;}
}
B4361f9:L4361f9:{c.instructions+=2;NFSU2_TR(0x4361f9);
{u32 ea_=u32(r4(R+24)+u32(32u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4361fc:{NFSU2_TR(0x4361fc);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x19ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B436200:L436200:{c.instructions+=7;NFSU2_TR(0x436200);
{u32 ea_=u32(r4(R+24)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B436203:{NFSU2_TR(0x436203);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B436206:{NFSU2_TR(0x436206);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B43620a:{NFSU2_TR(0x43620a);
{u32 ea_=u32(r4(R+0)+u32(136u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B436210:{NFSU2_TR(0x436210);
{u32 ea_=u32(u32(7887904u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B436216:{NFSU2_TR(0x436216);
{u32 ea_=u32(r4(R+0)+u32(136u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B43621c:{NFSU2_TR(0x43621c);
{goto L436220;}
}
B43621e:L43621e:{c.instructions+=1;NFSU2_TR(0x43621e);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B436220:L436220:{c.instructions+=3;NFSU2_TR(0x436220);
u8 U[4];
w4(U+0,u32(u32(u32(0xd8ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B436227:{NFSU2_TR(0x436227);
u8 U[8];
w4(U+0,u32(u32(u32(0x3fcull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B436232:{NFSU2_TR(0x436232);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x436237ull));
TAIL_STATIC(0x5e0bf0u,5e0);
}
B436237:L436237:{c.instructions+=1;NFSU2_TR(0x436237);
{goto L4362d8;}
}
B43623c:L43623c:{c.instructions+=6;NFSU2_TR(0x43623c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B43623f:{NFSU2_TR(0x43623f);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),u32(0x50ull)));
w1(R+523,scarry<u32>(r4(R+0),u32(0x50ull)));
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x50ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B436242:{NFSU2_TR(0x436242);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B436243:{NFSU2_TR(0x436243);
u8 U[4];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B436247:{NFSU2_TR(0x436247);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B436248:{NFSU2_TR(0x436248);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x43624dull));
TAIL_STATIC(0x4012b0u,401);
}
B43624d:L43624d:{c.instructions+=7;NFSU2_TR(0x43624d);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x40ull))));
}
B436250:{NFSU2_TR(0x436250);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B436251:{NFSU2_TR(0x436251);
u8 U[4];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B436255:{NFSU2_TR(0x436255);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B436256:{NFSU2_TR(0x436256);
u8 U[4];
w4(U+0,u32(u32(u32(0xa0ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B43625d:{NFSU2_TR(0x43625d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43625e:{NFSU2_TR(0x43625e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x436263ull));
TAIL_STATIC(0x43c990u,43c);
}
B436263:L436263:{c.instructions+=6;NFSU2_TR(0x436263);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B436266:{NFSU2_TR(0x436266);
u8 U[4];
w4(U+0,u32(u32(u32(0x54ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B43626a:{NFSU2_TR(0x43626a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43626b:{NFSU2_TR(0x43626b);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x50ull))));
__builtin_memmove((R+8),(U+0),4);
}
B43626e:{NFSU2_TR(0x43626e);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43626f:{NFSU2_TR(0x43626f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x436274ull));
TAIL_STATIC(0x4012b0u,401);
}
B436274:L436274:{c.instructions+=2;NFSU2_TR(0x436274);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x1cull))));
}
B436277:{NFSU2_TR(0x436277);
{goto L4362c7;}
}
B436279:L436279:{c.instructions+=5;NFSU2_TR(0x436279);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),u32(0x50ull)));
w1(R+523,scarry<u32>(r4(R+0),u32(0x50ull)));
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x50ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B43627c:{NFSU2_TR(0x43627c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43627d:{NFSU2_TR(0x43627d);
u8 U[4];
w4(U+0,u32(u32(u32(0x94ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B436284:{NFSU2_TR(0x436284);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B436285:{NFSU2_TR(0x436285);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x43628aull));
TAIL_STATIC(0x4012b0u,401);
}
B43628a:L43628a:{c.instructions+=5;NFSU2_TR(0x43628a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B43628d:{NFSU2_TR(0x43628d);
u8 U[4];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B436291:{NFSU2_TR(0x436291);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B436292:{NFSU2_TR(0x436292);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xe8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B436298:{NFSU2_TR(0x436298);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x43629dull));
TAIL_STATIC(0x43c780u,43c);
}
B43629d:L43629d:{c.instructions+=7;NFSU2_TR(0x43629d);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x40ull))));
}
B4362a0:{NFSU2_TR(0x4362a0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4362a1:{NFSU2_TR(0x4362a1);
u8 U[4];
w4(U+0,u32(u32(u32(0xa0ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B4362a8:{NFSU2_TR(0x4362a8);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4362a9:{NFSU2_TR(0x4362a9);
u8 U[4];
w4(U+0,u32(u32(u32(0x54ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B4362ad:{NFSU2_TR(0x4362ad);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4362ae:{NFSU2_TR(0x4362ae);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4362b3ull));
TAIL_STATIC(0x43c990u,43c);
}
B4362b3:L4362b3:{c.instructions+=6;NFSU2_TR(0x4362b3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4362b6:{NFSU2_TR(0x4362b6);
u8 U[4];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B4362ba:{NFSU2_TR(0x4362ba);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4362bb:{NFSU2_TR(0x4362bb);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x50ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4362be:{NFSU2_TR(0x4362be);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4362bf:{NFSU2_TR(0x4362bf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4362c4ull));
TAIL_STATIC(0x4012b0u,401);
}
B4362c4:L4362c4:{c.instructions+=1;NFSU2_TR(0x4362c4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x20ull))));
}
B4362c7:L4362c7:{c.instructions+=3;NFSU2_TR(0x4362c7);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4362cd:{NFSU2_TR(0x4362cd);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4362cf:{NFSU2_TR(0x4362cf);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4362d8;}}
}
B4362d1:L4362d1:{c.instructions+=2;NFSU2_TR(0x4362d1);
__builtin_memmove((R+4),(R+28),4);
}
B4362d3:{NFSU2_TR(0x4362d3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4362d8ull));
TAIL_STATIC(0x6147e0u,614);
}
B4362d8:L4362d8:{c.instructions+=5;NFSU2_TR(0x4362d8);
{u32 ea_=u32(r4(R+20)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4362db:{NFSU2_TR(0x4362db);
{u32 ea_=u32(u32(7881708u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B4362e1:{NFSU2_TR(0x4362e1);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4362e3:{NFSU2_TR(0x4362e3);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4362e6:{NFSU2_TR(0x4362e6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L436371;}}
}
B4362ec:L4362ec:{c.instructions+=29;NFSU2_TR(0x4362ec);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4362ef:{NFSU2_TR(0x4362ef);
{u32 ea_=u32(r4(R+4)+u32(128u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4362f5:{NFSU2_TR(0x4362f5);
{u32 ea_=u32(r4(R+4)+u32(132u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4362fb:{NFSU2_TR(0x4362fb);
{u32 ea_=u32(r4(R+4)+u32(136u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B436301:{NFSU2_TR(0x436301);
{u32 ea_=u32(r4(R+16)+u32(136u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B436308:{NFSU2_TR(0x436308);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B43630a:{NFSU2_TR(0x43630a);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B43630e:{NFSU2_TR(0x43630e);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B436312:{NFSU2_TR(0x436312);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B436316:{NFSU2_TR(0x436316);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B43631a:{NFSU2_TR(0x43631a);
{u32 ea_=u32(r4(R+16)+u32(136u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B436321:{NFSU2_TR(0x436321);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B436325:{NFSU2_TR(0x436325);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B43632b:{NFSU2_TR(0x43632b);
{u32 ea_=u32(r4(R+20)+u32(8u));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B43632e:{NFSU2_TR(0x43632e);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B436332:{NFSU2_TR(0x436332);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B436336:{NFSU2_TR(0x436336);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B43633a:{NFSU2_TR(0x43633a);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B43633e:{NFSU2_TR(0x43633e);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B436342:{NFSU2_TR(0x436342);
__asm__ volatile(".byte 0xd9,0xca":::"memory");
}
B436344:{NFSU2_TR(0x436344);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B436348:{NFSU2_TR(0x436348);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B43634c:{NFSU2_TR(0x43634c);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B436350:{NFSU2_TR(0x436350);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xa8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B436356:{NFSU2_TR(0x436356);
{u32 ea_=u32(r4(R+4)+u32(160u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B43635c:{NFSU2_TR(0x43635c);
{u32 ea_=u32(r4(R+4)+u32(164u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B436362:{NFSU2_TR(0x436362);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B436368:{NFSU2_TR(0x436368);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B43636a:{NFSU2_TR(0x43636a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L436371;}}
}
B43636c:L43636c:{c.instructions+=1;NFSU2_TR(0x43636c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x436371ull));
TAIL_STATIC(0x6147e0u,614);
}
B436371:L436371:{c.instructions+=2;NFSU2_TR(0x436371);
u8 U[22];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0xffffffffull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0xffffffffull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0xffffffffull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B436375:{NFSU2_TR(0x436375);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L436382;}}
}
B436377:L436377:{c.instructions+=4;NFSU2_TR(0x436377);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B43637a:{NFSU2_TR(0x43637a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43637b:{NFSU2_TR(0x43637b);
__builtin_memmove((R+4),(R+24),4);
}
B43637d:{NFSU2_TR(0x43637d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x436382ull));
TAIL_STATIC(0x4335c0u,433);
}
B436382:L436382:{c.instructions+=8;NFSU2_TR(0x436382);
u8 U[8];
w4(U+0,u32(u32(u32(0x3f4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B436389:{NFSU2_TR(0x436389);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B43638a:{NFSU2_TR(0x43638a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B43638b:{NFSU2_TR(0x43638b);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B436392:{NFSU2_TR(0x436392);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B436393:{NFSU2_TR(0x436393);
__builtin_memmove((R+16),(R+20),4);
}
B436395:{NFSU2_TR(0x436395);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B436396:{NFSU2_TR(0x436396);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4363a0:L4363a0:{c.instructions+=3;NFSU2_TR(0x4363a0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4363a1:{NFSU2_TR(0x4363a1);
__builtin_memmove((R+24),(R+4),4);
}
B4363a3:{NFSU2_TR(0x4363a3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4363a8ull));
TAIL_STATIC(0x433800u,433);
}
B4363a8:L4363a8:{c.instructions+=2;NFSU2_TR(0x4363a8);
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
B4363ad:{NFSU2_TR(0x4363ad);
if(r1(R+518)){{goto L4363b8;}}
}
B4363af:L4363af:{c.instructions+=2;NFSU2_TR(0x4363af);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4363b0:{NFSU2_TR(0x4363b0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4363b5ull));
TAIL_STATIC(0x575630u,575);
}
B4363b5:L4363b5:{c.instructions+=1;NFSU2_TR(0x4363b5);
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
B4363b8:L4363b8:{c.instructions+=3;NFSU2_TR(0x4363b8);
__builtin_memmove((R+0),(R+24),4);
}
B4363ba:{NFSU2_TR(0x4363ba);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4363bb:{NFSU2_TR(0x4363bb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4363c0:L4363c0:{c.instructions+=10;NFSU2_TR(0x4363c0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4363c1:{NFSU2_TR(0x4363c1);
__builtin_memmove((R+20),(R+16),4);
}
B4363c3:{NFSU2_TR(0x4363c3);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B4363c6:{NFSU2_TR(0x4363c6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x48ull))));
}
B4363c9:{NFSU2_TR(0x4363c9);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4363ca:{NFSU2_TR(0x4363ca);
__builtin_memmove((R+24),(R+4),4);
}
B4363cc:{NFSU2_TR(0x4363cc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4363cf:{NFSU2_TR(0x4363cf);
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
B4363d1:{NFSU2_TR(0x4363d1);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4363d2:{NFSU2_TR(0x4363d2);
if(r1(R+518)){{goto L43642f;}}
}
B4363d4:L4363d4:{c.instructions+=3;NFSU2_TR(0x4363d4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4363d7:{NFSU2_TR(0x4363d7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4363d8:{NFSU2_TR(0x4363d8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4363ddull));
TAIL_STATIC(0x434b00u,434);
}
B4363dd:L4363dd:{c.instructions+=3;NFSU2_TR(0x4363dd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4363e0:{NFSU2_TR(0x4363e0);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4363e2:{NFSU2_TR(0x4363e2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4363e7ull));
TAIL_STATIC(0x431400u,431);
}
B4363e7:L4363e7:{c.instructions+=8;NFSU2_TR(0x4363e7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4363ea:{NFSU2_TR(0x4363ea);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4363ed:{NFSU2_TR(0x4363ed);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4363f0:{NFSU2_TR(0x4363f0);
u8 U[6];
w1(R+512,carry<u32>(r4(R+8),u32(0x50ull)));
w1(R+523,scarry<u32>(r4(R+8),u32(0x50ull)));
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x50ull))));
w1(R+519,u8(s32(r4(R+8))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+8))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4363f3:{NFSU2_TR(0x4363f3);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4363f4:{NFSU2_TR(0x4363f4);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B4363f8:{NFSU2_TR(0x4363f8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4363f9:{NFSU2_TR(0x4363f9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4363feull));
TAIL_STATIC(0x4012b0u,401);
}
B4363fe:L4363fe:{c.instructions+=8;NFSU2_TR(0x4363fe);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B436401:{NFSU2_TR(0x436401);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xe8ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B43640b:{NFSU2_TR(0x43640b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B43640e:{NFSU2_TR(0x43640e);
u8 U[6];
w1(R+512,carry<u32>(r4(R+28),u32(0x40ull)));
w1(R+523,scarry<u32>(r4(R+28),u32(0x40ull)));
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x40ull))));
w1(R+519,u8(s32(r4(R+28))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+28))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+28))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B436411:{NFSU2_TR(0x436411);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((R+8),(U+0),4);
}
B436414:{NFSU2_TR(0x436414);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B436415:{NFSU2_TR(0x436415);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B436416:{NFSU2_TR(0x436416);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x43641bull));
TAIL_STATIC(0x4012b0u,401);
}
B43641b:L43641b:{c.instructions+=4;NFSU2_TR(0x43641b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B436421:{NFSU2_TR(0x436421);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B436424:{NFSU2_TR(0x436424);
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
B436426:{NFSU2_TR(0x436426);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L43642f;}}
}
B436428:L436428:{c.instructions+=2;NFSU2_TR(0x436428);
__builtin_memmove((R+4),(R+24),4);
}
B43642a:{NFSU2_TR(0x43642a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x43642full));
TAIL_STATIC(0x6147e0u,614);
}
B43642f:L43642f:{c.instructions+=5;NFSU2_TR(0x43642f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B436430:{NFSU2_TR(0x436430);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B436431:{NFSU2_TR(0x436431);
__builtin_memmove((R+16),(R+20),4);
}
B436433:{NFSU2_TR(0x436433);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B436434:{NFSU2_TR(0x436434);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B436440:L436440:{c.instructions+=5;NFSU2_TR(0x436440);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B436441:{NFSU2_TR(0x436441);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((R+28),(U+0),4);
}
B436444:{NFSU2_TR(0x436444);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B436446:{NFSU2_TR(0x436446);
__builtin_memmove((R+4),(R+28),4);
}
B436448:{NFSU2_TR(0x436448);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x43644dull));
TAIL_STATIC(0x43be80u,43b);
}
B43644d:L43644d:{c.instructions+=3;NFSU2_TR(0x43644d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B43644f:{NFSU2_TR(0x43644f);
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
B436451:{NFSU2_TR(0x436451);
if(r1(R+518)){{goto L43648a;}}
}
B436453:L436453:{c.instructions+=1;NFSU2_TR(0x436453);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B436454:L436454:{c.instructions+=3;NFSU2_TR(0x436454);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B436457:{NFSU2_TR(0x436457);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B43645a:{NFSU2_TR(0x43645a);
if(r1(R+518)){{goto L436470;}}
}
B43645c:L43645c:{c.instructions+=2;NFSU2_TR(0x43645c);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B43645f:{NFSU2_TR(0x43645f);
if(r1(R+518)){{goto L436470;}}
}
B436461:L436461:{c.instructions+=2;NFSU2_TR(0x436461);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B436463:{NFSU2_TR(0x436463);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L43646c;}}
}
B436465:L436465:{c.instructions+=3;NFSU2_TR(0x436465);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B436468:{NFSU2_TR(0x436468);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B43646a:{NFSU2_TR(0x43646a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L436470;}}
}
B43646c:L43646c:{c.instructions+=2;NFSU2_TR(0x43646c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B43646e:{NFSU2_TR(0x43646e);
{goto L436485;}
}
B436470:L436470:{c.instructions+=6;NFSU2_TR(0x436470);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+24),(U+0),4);
}
B436472:{NFSU2_TR(0x436472);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B436475:{NFSU2_TR(0x436475);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+4)),r4(U+0));
}
B436477:{NFSU2_TR(0x436477);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B436478:{NFSU2_TR(0x436478);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43647b:{NFSU2_TR(0x43647b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x436480ull));
TAIL_STATIC(0x575630u,575);
}
B436480:L436480:{c.instructions+=2;NFSU2_TR(0x436480);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B436483:{NFSU2_TR(0x436483);
__builtin_memmove((R+0),(R+24),4);
}
B436485:L436485:{c.instructions+=2;NFSU2_TR(0x436485);
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
B436487:{NFSU2_TR(0x436487);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x436454u);}goto L436454;}}
}
B436489:L436489:{c.instructions+=1;NFSU2_TR(0x436489);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B43648a:L43648a:{c.instructions+=2;NFSU2_TR(0x43648a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B43648b:{NFSU2_TR(0x43648b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B436490:L436490:{c.instructions+=3;NFSU2_TR(0x436490);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B436491:{NFSU2_TR(0x436491);
__builtin_memmove((R+24),(R+4),4);
}
B436493:{NFSU2_TR(0x436493);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x436498ull));
TAIL_STATIC(0x434700u,434);
}
B436498:L436498:{c.instructions+=2;NFSU2_TR(0x436498);
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
B43649d:{NFSU2_TR(0x43649d);
if(r1(R+518)){{goto L4364a8;}}
}
B43649f:L43649f:{c.instructions+=2;NFSU2_TR(0x43649f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4364a0:{NFSU2_TR(0x4364a0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4364a5ull));
TAIL_STATIC(0x575630u,575);
}
B4364a5:L4364a5:{c.instructions+=1;NFSU2_TR(0x4364a5);
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
B4364a8:L4364a8:{c.instructions+=3;NFSU2_TR(0x4364a8);
__builtin_memmove((R+0),(R+24),4);
}
B4364aa:{NFSU2_TR(0x4364aa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4364ab:{NFSU2_TR(0x4364ab);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4364b0:L4364b0:{c.instructions+=3;NFSU2_TR(0x4364b0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4364b1:{NFSU2_TR(0x4364b1);
__builtin_memmove((R+24),(R+4),4);
}
B4364b3:{NFSU2_TR(0x4364b3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4364b8ull));
TAIL_STATIC(0x434700u,434);
}
B4364b8:L4364b8:{c.instructions+=2;NFSU2_TR(0x4364b8);
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
B4364bd:{NFSU2_TR(0x4364bd);
if(r1(R+518)){{goto L4364ce;}}
}
B4364bf:L4364bf:{c.instructions+=4;NFSU2_TR(0x4364bf);
__builtin_memmove((R+0),gp(0x827b4c),4);
}
B4364c4:{NFSU2_TR(0x4364c4);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4364c5:{NFSU2_TR(0x4364c5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4364c6:{NFSU2_TR(0x4364c6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4364cbull));
TAIL_STATIC(0x43f920u,43f);
}
B4364cb:L4364cb:{c.instructions+=1;NFSU2_TR(0x4364cb);
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
B4364ce:L4364ce:{c.instructions+=3;NFSU2_TR(0x4364ce);
__builtin_memmove((R+0),(R+24),4);
}
B4364d0:{NFSU2_TR(0x4364d0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4364d1:{NFSU2_TR(0x4364d1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4364e0:L4364e0:{c.instructions+=33;NFSU2_TR(0x4364e0);
__builtin_memmove((R+0),(R+4),4);
}
B4364e2:{NFSU2_TR(0x4364e2);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B4364e4:{NFSU2_TR(0x4364e4);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4364e7:{NFSU2_TR(0x4364e7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4364ea:{NFSU2_TR(0x4364ea);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4364ed:{NFSU2_TR(0x4364ed);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4364f0:{NFSU2_TR(0x4364f0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4364f3:{NFSU2_TR(0x4364f3);
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
B4364f5:{NFSU2_TR(0x4364f5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x48ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4364f8:{NFSU2_TR(0x4364f8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4364fb:{NFSU2_TR(0x4364fb);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x50ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4364fe:{NFSU2_TR(0x4364fe);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B436501:{NFSU2_TR(0x436501);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x34ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B436504:{NFSU2_TR(0x436504);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B436507:{NFSU2_TR(0x436507);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43650a:{NFSU2_TR(0x43650a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x40ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43650d:{NFSU2_TR(0x43650d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x44ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B436510:{NFSU2_TR(0x436510);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x58ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B436513:{NFSU2_TR(0x436513);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x5cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B436516:{NFSU2_TR(0x436516);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x60ull))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B43651d:{NFSU2_TR(0x43651d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x64ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B436520:{NFSU2_TR(0x436520);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x74ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B436523:{NFSU2_TR(0x436523);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x78ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B436526:{NFSU2_TR(0x436526);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x68ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B436529:{NFSU2_TR(0x436529);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x6cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43652c:{NFSU2_TR(0x43652c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x70ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43652f:{NFSU2_TR(0x43652f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x7cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B436532:{NFSU2_TR(0x436532);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B436535:{NFSU2_TR(0x436535);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B436538:{NFSU2_TR(0x436538);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43653b:{NFSU2_TR(0x43653b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43653e:{NFSU2_TR(0x43653e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B436541:{NFSU2_TR(0x436541);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B436550:L436550:{c.instructions+=3;NFSU2_TR(0x436550);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B436551:{NFSU2_TR(0x436551);
__builtin_memmove((R+24),(R+4),4);
}
B436553:{NFSU2_TR(0x436553);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x436558ull));
TAIL_STATIC(0x434a20u,434);
}
B436558:L436558:{c.instructions+=27;NFSU2_TR(0x436558);
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
B43655a:{NFSU2_TR(0x43655a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x48ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43655d:{NFSU2_TR(0x43655d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B436560:{NFSU2_TR(0x436560);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B436563:{NFSU2_TR(0x436563);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B436566:{NFSU2_TR(0x436566);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B436569:{NFSU2_TR(0x436569);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43656c:{NFSU2_TR(0x43656c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43656f:{NFSU2_TR(0x43656f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B436572:{NFSU2_TR(0x436572);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B436575:{NFSU2_TR(0x436575);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B436578:{NFSU2_TR(0x436578);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43657b:{NFSU2_TR(0x43657b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B436582:{NFSU2_TR(0x436582);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x64ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B436585:{NFSU2_TR(0x436585);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x74ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B436588:{NFSU2_TR(0x436588);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x78ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43658b:{NFSU2_TR(0x43658b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x68ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43658e:{NFSU2_TR(0x43658e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B436591:{NFSU2_TR(0x436591);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x70ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B436594:{NFSU2_TR(0x436594);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B436597:{NFSU2_TR(0x436597);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43659a:{NFSU2_TR(0x43659a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43659d:{NFSU2_TR(0x43659d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4365a0:{NFSU2_TR(0x4365a0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4365a3:{NFSU2_TR(0x4365a3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4365a6:{NFSU2_TR(0x4365a6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4365a7:{NFSU2_TR(0x4365a7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4365b0:L4365b0:{c.instructions+=4;NFSU2_TR(0x4365b0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4365b1:{NFSU2_TR(0x4365b1);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4365b5:{NFSU2_TR(0x4365b5);
u8 U[18];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+10),(U+0),4);
w1(R+512,u8((r4(U+10))<(u32(0xe34009ull))));
w1(R+523,sborrow<u32>(r4(U+10),u32(0xe34009ull)));
w4(U+14,u32(u32(r4(U+10))-u32(u32(0xe34009ull))));
w1(R+519,u8(s32(r4(U+14))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+14))==(u32(0x0ull))));
w4(U+4,u32(u32(r4(U+14))&u32(u32(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r4(U+4)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B4365bb:{NFSU2_TR(0x4365bb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L436644;}}
}
B4365c1:L4365c1:{c.instructions+=4;NFSU2_TR(0x4365c1);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4365c2:{NFSU2_TR(0x4365c2);
__builtin_memmove((R+24),gp(0x827c74),4);
}
B4365c8:{NFSU2_TR(0x4365c8);
w4(R+4,u32(0x827c74ull));
}
B4365cd:{NFSU2_TR(0x4365cd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4365d2ull));
TAIL_STATIC(0x502fd0u,502);
}
B4365d2:L4365d2:{c.instructions+=3;NFSU2_TR(0x4365d2);
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
B4365d4:{NFSU2_TR(0x4365d4);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4365d8:{NFSU2_TR(0x4365d8);
if(r1(R+518)){{goto L43663c;}}
}
B4365da:L4365da:{c.instructions+=5;NFSU2_TR(0x4365da);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4365db:{NFSU2_TR(0x4365db);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4365dc:{NFSU2_TR(0x4365dc);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4365dd:{NFSU2_TR(0x4365dd);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B4365df:{NFSU2_TR(0x4365df);
}
B4365e0:L4365e0:{c.instructions+=4;NFSU2_TR(0x4365e0);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4365e4:{NFSU2_TR(0x4365e4);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+4))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B4365e7:{NFSU2_TR(0x4365e7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+12),(U+0),4);
}
B4365e9:{NFSU2_TR(0x4365e9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L436633;}}
}
B4365eb:L4365eb:{c.instructions+=10;NFSU2_TR(0x4365eb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4365ee:{NFSU2_TR(0x4365ee);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
s4(u32(r4(R+0)),r4(U+0));
}
B4365f0:{NFSU2_TR(0x4365f0);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4365f3:{NFSU2_TR(0x4365f3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4365f6:{NFSU2_TR(0x4365f6);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w1(R+512,u8((r4(R+28))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4365f8:{NFSU2_TR(0x4365f8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4365fb:{NFSU2_TR(0x4365fb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4365fe:{NFSU2_TR(0x4365fe);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B436601:{NFSU2_TR(0x436601);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B436604:{NFSU2_TR(0x436604);
if(r1(R+518)){{goto L43661c;}}
}
B436606:L436606:{c.instructions+=2;NFSU2_TR(0x436606);
__builtin_memmove((R+4),(R+28),4);
}
B436608:{NFSU2_TR(0x436608);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x43660dull));
TAIL_STATIC(0x6d8100u,6d8);
}
B43660d:L43660d:{c.instructions+=3;NFSU2_TR(0x43660d);
u8 U[4];
w4(U+0,u32(0x30ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43660f:{NFSU2_TR(0x43660f);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B436610:{NFSU2_TR(0x436610);
u8 U[4];
__builtin_memmove((U+0),gp(0x80bfdc),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x436616ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B436616:L436616:{c.instructions+=2;NFSU2_TR(0x436616);
w1(R+512,carry<u32>(r4(R+16),u32(0x8ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B436619:{NFSU2_TR(0x436619);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43661c:L43661c:{c.instructions+=5;NFSU2_TR(0x43661c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43661f:{NFSU2_TR(0x43661f);
__builtin_memmove((R+8),gp(0x827b5c),4);
}
B436625:{NFSU2_TR(0x436625);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B436626:{NFSU2_TR(0x436626);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B436627:{NFSU2_TR(0x436627);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x43662cull));
TAIL_STATIC(0x43f920u,43f);
}
B43662c:L43662c:{c.instructions+=2;NFSU2_TR(0x43662c);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B436630:{NFSU2_TR(0x436630);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B436633:L436633:{c.instructions+=3;NFSU2_TR(0x436633);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
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
B436635:{NFSU2_TR(0x436635);
__builtin_memmove((R+24),(R+12),4);
}
B436637:{NFSU2_TR(0x436637);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4365e0u);}goto L4365e0;}}
}
B436639:L436639:{c.instructions+=3;NFSU2_TR(0x436639);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B43663a:{NFSU2_TR(0x43663a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B43663b:{NFSU2_TR(0x43663b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B43663c:L43663c:{c.instructions+=4;NFSU2_TR(0x43663c);
w4(R+0,u32(0x1ull));
}
B436641:{NFSU2_TR(0x436641);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B436642:{NFSU2_TR(0x436642);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B436643:{NFSU2_TR(0x436643);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B436644:L436644:{c.instructions+=3;NFSU2_TR(0x436644);
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
B436646:{NFSU2_TR(0x436646);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B436647:{NFSU2_TR(0x436647);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B436650:L436650:{c.instructions+=13;NFSU2_TR(0x436650);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B436652:{NFSU2_TR(0x436652);
u8 U[4];
w4(U+0,u32(0x771e6bull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B436657:{NFSU2_TR(0x436657);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B43665d:{NFSU2_TR(0x43665d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43665e:{NFSU2_TR(0x43665e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B436665:{NFSU2_TR(0x436665);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B436666:{NFSU2_TR(0x436666);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B436667:{NFSU2_TR(0x436667);
__builtin_memmove((R+24),(R+4),4);
}
B436669:{NFSU2_TR(0x436669);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43666a:{NFSU2_TR(0x43666a);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43666e:{NFSU2_TR(0x43666e);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B436670:{NFSU2_TR(0x436670);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B436674:{NFSU2_TR(0x436674);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x436679ull));
TAIL_STATIC(0x435070u,435);
}
B436679:L436679:{c.instructions+=5;NFSU2_TR(0x436679);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B43667c:{NFSU2_TR(0x43667c);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B43667e:{NFSU2_TR(0x43667e);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B436686:{NFSU2_TR(0x436686);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B436689:{NFSU2_TR(0x436689);
if(r1(R+518)){{goto L436697;}}
}
B43668b:L43668b:{c.instructions+=2;NFSU2_TR(0x43668b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43668c:{NFSU2_TR(0x43668c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x436691ull));
TAIL_STATIC(0x575630u,575);
}
B436691:L436691:{c.instructions+=2;NFSU2_TR(0x436691);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B436694:{NFSU2_TR(0x436694);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B436697:L436697:{c.instructions+=4;NFSU2_TR(0x436697);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B43669a:{NFSU2_TR(0x43669a);
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
B43669c:{NFSU2_TR(0x43669c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43669f:{NFSU2_TR(0x43669f);
if(r1(R+518)){{goto L4366b0;}}
}
B4366a1:L4366a1:{c.instructions+=3;NFSU2_TR(0x4366a1);
u8 U[4];
w4(U+0,u32(0x40ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4366a3:{NFSU2_TR(0x4366a3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4366a4:{NFSU2_TR(0x4366a4);
u8 U[4];
__builtin_memmove((U+0),gp(0x80bfdc),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4366aaull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B4366aa:L4366aa:{c.instructions+=2;NFSU2_TR(0x4366aa);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4366ad:{NFSU2_TR(0x4366ad);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4366b0:L4366b0:{c.instructions+=7;NFSU2_TR(0x4366b0);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4366b4:{NFSU2_TR(0x4366b4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4366b7:{NFSU2_TR(0x4366b7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4366b8:{NFSU2_TR(0x4366b8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4366b9:{NFSU2_TR(0x4366b9);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4366c0:{NFSU2_TR(0x4366c0);
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
B4366c3:{NFSU2_TR(0x4366c3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4366d0:L4366d0:{c.instructions+=8;NFSU2_TR(0x4366d0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4366d1:{NFSU2_TR(0x4366d1);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4366d2:{NFSU2_TR(0x4366d2);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4366d6:{NFSU2_TR(0x4366d6);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4366d9:{NFSU2_TR(0x4366d9);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4366db:{NFSU2_TR(0x4366db);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+0),(U+0),1);
}
B4366de:{NFSU2_TR(0x4366de);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4366e0:{NFSU2_TR(0x4366e0);
if(r1(R+518)){{goto L4366fe;}}
}
B4366e2:L4366e2:{c.instructions+=1;NFSU2_TR(0x4366e2);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B4366e4:L4366e4:{c.instructions+=3;NFSU2_TR(0x4366e4);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B4366e7:{NFSU2_TR(0x4366e7);
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
B4366e9:{NFSU2_TR(0x4366e9);
if(r1(R+518)){{goto L4366f1;}}
}
B4366eb:L4366eb:{c.instructions+=3;NFSU2_TR(0x4366eb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4366ed:{NFSU2_TR(0x4366ed);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4366ef:{NFSU2_TR(0x4366ef);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4366f1ull));
{u32 t_=u32(r4(U+4));TAIL_DYNAMIC(t_);}
}
B4366f1:L4366f1:{c.instructions+=4;NFSU2_TR(0x4366f1);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
w4(U+8,u32(0x0ull));
s4(u32(r4(U+4)),r4(U+8));
}
B4366f8:{NFSU2_TR(0x4366f8);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B4366f9:{NFSU2_TR(0x4366f9);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x4ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B4366fc:{NFSU2_TR(0x4366fc);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4366e4u);}goto L4366e4;}}
}
B4366fe:L4366fe:{c.instructions+=8;NFSU2_TR(0x4366fe);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B436700:{NFSU2_TR(0x436700);
__builtin_memmove((R+8),(R+28),4);
}
B436702:{NFSU2_TR(0x436702);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+8)),r4(U+0));
}
B436704:{NFSU2_TR(0x436704);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B436707:{NFSU2_TR(0x436707);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43670a:{NFSU2_TR(0x43670a);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43670d:{NFSU2_TR(0x43670d);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B43670f:{NFSU2_TR(0x43670f);
}
B436710:L436710:{c.instructions+=2;NFSU2_TR(0x436710);
u8 U[14];
__builtin_memmove((U+6),(R+24),4);
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
B436713:{NFSU2_TR(0x436713);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L43679d;}}
}
B436719:L436719:{c.instructions+=1;NFSU2_TR(0x436719);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x4367acull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B436720:L436720:{c.instructions+=2;NFSU2_TR(0x436720);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B436722:{NFSU2_TR(0x436722);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x436727ull));
TAIL_STATIC(0x575620u,575);
}
B436727:L436727:{c.instructions+=3;NFSU2_TR(0x436727);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B43672a:{NFSU2_TR(0x43672a);
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
B43672c:{NFSU2_TR(0x43672c);
if(r1(R+518)){{goto L436739;}}
}
B43672e:L43672e:{c.instructions+=2;NFSU2_TR(0x43672e);
__builtin_memmove((R+4),(R+0),4);
}
B436730:{NFSU2_TR(0x436730);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x436735ull));
TAIL_STATIC(0x435560u,435);
}
B436735:L436735:{c.instructions+=2;NFSU2_TR(0x436735);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+28)),r4(U+0));
}
B436737:{NFSU2_TR(0x436737);
{goto L43679d;}
}
B436739:L436739:{c.instructions+=3;NFSU2_TR(0x436739);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B43673b:{NFSU2_TR(0x43673b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+28)),r4(U+0));
}
B43673d:{NFSU2_TR(0x43673d);
{goto L43679d;}
}
B43673f:L43673f:{c.instructions+=2;NFSU2_TR(0x43673f);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B436741:{NFSU2_TR(0x436741);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x436746ull));
TAIL_STATIC(0x575620u,575);
}
B436746:L436746:{c.instructions+=3;NFSU2_TR(0x436746);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B436749:{NFSU2_TR(0x436749);
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
B43674b:{NFSU2_TR(0x43674b);
if(r1(R+518)){{goto L436759;}}
}
B43674d:L43674d:{c.instructions+=2;NFSU2_TR(0x43674d);
__builtin_memmove((R+4),(R+0),4);
}
B43674f:{NFSU2_TR(0x43674f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x436754ull));
TAIL_STATIC(0x435570u,435);
}
B436754:L436754:{c.instructions+=2;NFSU2_TR(0x436754);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B436757:{NFSU2_TR(0x436757);
{goto L43679d;}
}
B436759:L436759:{c.instructions+=3;NFSU2_TR(0x436759);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B43675b:{NFSU2_TR(0x43675b);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43675e:{NFSU2_TR(0x43675e);
{goto L43679d;}
}
B436760:L436760:{c.instructions+=2;NFSU2_TR(0x436760);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B436762:{NFSU2_TR(0x436762);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x436767ull));
TAIL_STATIC(0x575620u,575);
}
B436767:L436767:{c.instructions+=3;NFSU2_TR(0x436767);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B43676a:{NFSU2_TR(0x43676a);
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
B43676c:{NFSU2_TR(0x43676c);
if(r1(R+518)){{goto L43677a;}}
}
B43676e:L43676e:{c.instructions+=2;NFSU2_TR(0x43676e);
__builtin_memmove((R+4),(R+0),4);
}
B436770:{NFSU2_TR(0x436770);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x436775ull));
TAIL_STATIC(0x435590u,435);
}
B436775:L436775:{c.instructions+=2;NFSU2_TR(0x436775);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B436778:{NFSU2_TR(0x436778);
{goto L43679d;}
}
B43677a:L43677a:{c.instructions+=3;NFSU2_TR(0x43677a);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B43677c:{NFSU2_TR(0x43677c);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43677f:{NFSU2_TR(0x43677f);
{goto L43679d;}
}
B436781:L436781:{c.instructions+=2;NFSU2_TR(0x436781);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B436783:{NFSU2_TR(0x436783);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x436788ull));
TAIL_STATIC(0x575620u,575);
}
B436788:L436788:{c.instructions+=3;NFSU2_TR(0x436788);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B43678b:{NFSU2_TR(0x43678b);
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
B43678d:{NFSU2_TR(0x43678d);
if(r1(R+518)){{goto L436798;}}
}
B43678f:L43678f:{c.instructions+=2;NFSU2_TR(0x43678f);
__builtin_memmove((R+4),(R+0),4);
}
B436791:{NFSU2_TR(0x436791);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x436796ull));
TAIL_STATIC(0x4355a0u,435);
}
B436796:L436796:{c.instructions+=1;NFSU2_TR(0x436796);
{goto L43679a;}
}
B436798:L436798:{c.instructions+=1;NFSU2_TR(0x436798);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B43679a:L43679a:{c.instructions+=1;NFSU2_TR(0x43679a);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43679d:L43679d:{c.instructions+=3;NFSU2_TR(0x43679d);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B43679e:{NFSU2_TR(0x43679e);
u8 U[14];
__builtin_memmove((U+6),(R+24),4);
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
B4367a1:{NFSU2_TR(0x4367a1);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x436710u);}goto L436710;}}
}
B4367a7:L4367a7:{c.instructions+=3;NFSU2_TR(0x4367a7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4367a8:{NFSU2_TR(0x4367a8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4367a9:{NFSU2_TR(0x4367a9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4367c0:L4367c0:{c.instructions+=6;NFSU2_TR(0x4367c0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4367c1:{NFSU2_TR(0x4367c1);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4367c2:{NFSU2_TR(0x4367c2);
__builtin_memmove((R+28),(R+4),4);
}
B4367c4:{NFSU2_TR(0x4367c4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+24),(U+0),4);
}
B4367c6:{NFSU2_TR(0x4367c6);
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
B4367c8:{NFSU2_TR(0x4367c8);
if(r1(R+518)){{goto L4367f0;}}
}
B4367ca:L4367ca:{c.instructions+=1;NFSU2_TR(0x4367ca);
__builtin_memmove((R+12),(R+12),4);
}
B4367d0:L4367d0:{c.instructions+=6;NFSU2_TR(0x4367d0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4367d3:{NFSU2_TR(0x4367d3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4367d5:{NFSU2_TR(0x4367d5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B4367d7:{NFSU2_TR(0x4367d7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4367da:{NFSU2_TR(0x4367da);
__builtin_memmove((R+4),(R+24),4);
}
B4367dc:{NFSU2_TR(0x4367dc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4367e1ull));
TAIL_STATIC(0x433070u,433);
}
B4367e1:L4367e1:{c.instructions+=2;NFSU2_TR(0x4367e1);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4367e2:{NFSU2_TR(0x4367e2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4367e7ull));
TAIL_STATIC(0x575630u,575);
}
B4367e7:L4367e7:{c.instructions+=4;NFSU2_TR(0x4367e7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+24),(U+0),4);
}
B4367e9:{NFSU2_TR(0x4367e9);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4367ec:{NFSU2_TR(0x4367ec);
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
B4367ee:{NFSU2_TR(0x4367ee);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4367d0u);}goto L4367d0;}}
}
B4367f0:L4367f0:{c.instructions+=3;NFSU2_TR(0x4367f0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4367f1:{NFSU2_TR(0x4367f1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4367f2:{NFSU2_TR(0x4367f2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B436800:L436800:{c.instructions+=5;NFSU2_TR(0x436800);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B436801:{NFSU2_TR(0x436801);
__builtin_memmove((R+24),(R+4),4);
}
B436803:{NFSU2_TR(0x436803);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B436805:{NFSU2_TR(0x436805);
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
B436807:{NFSU2_TR(0x436807);
if(r1(R+518)){{goto L43683c;}}
}
B436809:L436809:{c.instructions+=1;NFSU2_TR(0x436809);
__builtin_memmove((R+16),(R+16),4);
}
B436810:L436810:{c.instructions+=11;NFSU2_TR(0x436810);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B436812:{NFSU2_TR(0x436812);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B436815:{NFSU2_TR(0x436815);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+8)),r4(U+0));
}
B436817:{NFSU2_TR(0x436817);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43681a:{NFSU2_TR(0x43681a);
__builtin_memmove((R+4),gp(0x827b78),4);
}
B436820:{NFSU2_TR(0x436820);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B436821:{NFSU2_TR(0x436821);
__builtin_memmove((R+0),gp(0x827f00),4);
}
B436826:{NFSU2_TR(0x436826);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
}
B436827:{NFSU2_TR(0x436827);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B436828:{NFSU2_TR(0x436828);
__builtin_memmove(gp(0x827b78),(R+4),4);
}
B43682e:{NFSU2_TR(0x43682e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x436833ull));
TAIL_STATIC(0x43f920u,43f);
}
B436833:L436833:{c.instructions+=4;NFSU2_TR(0x436833);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B436835:{NFSU2_TR(0x436835);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B436838:{NFSU2_TR(0x436838);
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
B43683a:{NFSU2_TR(0x43683a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x436810u);}goto L436810;}}
}
B43683c:L43683c:{c.instructions+=2;NFSU2_TR(0x43683c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B43683d:{NFSU2_TR(0x43683d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B436840:L436840:{c.instructions+=23;NFSU2_TR(0x436840);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B436841:{NFSU2_TR(0x436841);
__builtin_memmove((R+20),(R+16),4);
}
B436843:{NFSU2_TR(0x436843);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B436845:{NFSU2_TR(0x436845);
u8 U[4];
w4(U+0,u32(0x771d28ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43684a:{NFSU2_TR(0x43684a);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B436850:{NFSU2_TR(0x436850);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B436851:{NFSU2_TR(0x436851);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B436858:{NFSU2_TR(0x436858);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x30ull))));
}
B43685b:{NFSU2_TR(0x43685b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B43685e:{NFSU2_TR(0x43685e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B436861:{NFSU2_TR(0x436861);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B436862:{NFSU2_TR(0x436862);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B436865:{NFSU2_TR(0x436865);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B436866:{NFSU2_TR(0x436866);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B436869:{NFSU2_TR(0x436869);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43686a:{NFSU2_TR(0x43686a);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B43686c:{NFSU2_TR(0x43686c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
s4(u32(r4(R+12)),r4(U+0));
}
B43686e:{NFSU2_TR(0x43686e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
s4(u32(r4(R+24)),r4(U+0));
}
B436870:{NFSU2_TR(0x436870);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
s4(u32(r4(R+0)),r4(U+0));
}
B436872:{NFSU2_TR(0x436872);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B436875:{NFSU2_TR(0x436875);
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
B436878:{NFSU2_TR(0x436878);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
s4(u32(r4(R+4)),r4(U+0));
}
B43687a:{NFSU2_TR(0x43687a);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){TAIL_STATIC(0x43712au,437);}
}
B436880:L436880:{c.instructions+=1;NFSU2_TR(0x436880);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x43714cull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B436887:L436887:{c.instructions+=2;NFSU2_TR(0x436887);
u8 U[8];
__builtin_memmove((U+0),gp(0x865014),4);
w4(U+4,u32(u32(r4(U+0))-u32(r4(R+28))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B43688d:{NFSU2_TR(0x43688d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x43712au,437);}
}
B436893:L436893:{c.instructions+=3;NFSU2_TR(0x436893);
__builtin_memmove((R+0),gp(0x865028),4);
}
B436898:{NFSU2_TR(0x436898);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B43689a:{NFSU2_TR(0x43689a);
if(r1(R+518)){{goto L4368ab;}}
}
B43689c:L43689c:{c.instructions+=4;NFSU2_TR(0x43689c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+12)),r4(U+0));
}
B43689e:{NFSU2_TR(0x43689e);
__builtin_memmove((R+8),gp(0x86502c),4);
}
B4368a4:{NFSU2_TR(0x4368a4);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+24)),r4(U+0));
}
B4368a6:{NFSU2_TR(0x4368a6);
TAIL_STATIC(0x43712eu,437);
}
B4368ab:L4368ab:{c.instructions+=2;NFSU2_TR(0x4368ab);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x1262ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B4368b2:{NFSU2_TR(0x4368b2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4368c8;}}
}
B4368b4:L4368b4:{c.instructions+=2;NFSU2_TR(0x4368b4);
u8 U[4];
w4(U+0,u32(0x78637cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4368b9:{NFSU2_TR(0x4368b9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4368beull));
TAIL_STATIC(0x43db50u,43d);
}
B4368be:L4368be:{c.instructions+=3;NFSU2_TR(0x4368be);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4368c1:{NFSU2_TR(0x4368c1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+12)),r4(U+0));
}
B4368c3:{NFSU2_TR(0x4368c3);
TAIL_STATIC(0x43712cu,437);
}
B4368c8:L4368c8:{c.instructions+=1;NFSU2_TR(0x4368c8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4368cdull));
TAIL_STATIC(0x5bf6d0u,5bf);
}
B4368cd:L4368cd:{c.instructions+=2;NFSU2_TR(0x4368cd);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4368cf:{NFSU2_TR(0x4368cf);
if(r1(R+518)){TAIL_STATIC(0x43712au,437);}
}
B4368d5:L4368d5:{c.instructions+=12;NFSU2_TR(0x4368d5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4368d8:{NFSU2_TR(0x4368d8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4368d9:{NFSU2_TR(0x4368d9);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4368dc:{NFSU2_TR(0x4368dc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc4ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4368df:{NFSU2_TR(0x4368df);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4368e2:{NFSU2_TR(0x4368e2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4368e5:{NFSU2_TR(0x4368e5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4368e8:{NFSU2_TR(0x4368e8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4368eb:{NFSU2_TR(0x4368eb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4368ee:{NFSU2_TR(0x4368ee);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4368f1:{NFSU2_TR(0x4368f1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4368f4:{NFSU2_TR(0x4368f4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4368f9ull));
TAIL_STATIC(0x431f10u,431);
}
B4368f9:L4368f9:{c.instructions+=8;NFSU2_TR(0x4368f9);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((R+4),(U+0),4);
}
B4368fc:{NFSU2_TR(0x4368fc);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((R+8),(U+0),4);
}
B4368ff:{NFSU2_TR(0x4368ff);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B436902:{NFSU2_TR(0x436902);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B436905:{NFSU2_TR(0x436905);
__builtin_memmove((R+24),gp(0x827ad4),4);
}
B43690b:{NFSU2_TR(0x43690b);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((U+4),(U+0),4);
w1(R+512,u8((r4(U+4))<(r4(R+28))));
w4(U+8,u32(u32(r4(U+4))-u32(r4(R+28))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B43690d:{NFSU2_TR(0x43690d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B436910:{NFSU2_TR(0x436910);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L4369fe;}}
}
B436916:L436916:{c.instructions+=3;NFSU2_TR(0x436916);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B43691a:{NFSU2_TR(0x43691a);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+518),1);
s1(u32(r4(U+0)),r1(U+4));
}
B43691e:{NFSU2_TR(0x43691e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B436921:L436921:{c.instructions+=6;NFSU2_TR(0x436921);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B436924:{NFSU2_TR(0x436924);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B436927:{NFSU2_TR(0x436927);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B436928:{NFSU2_TR(0x436928);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B436929:{NFSU2_TR(0x436929);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43692a:{NFSU2_TR(0x43692a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x43692full));
TAIL_STATIC(0x430070u,430);
}
B43692f:L43692f:{c.instructions+=3;NFSU2_TR(0x43692f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B436932:{NFSU2_TR(0x436932);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B436934:{NFSU2_TR(0x436934);
if(r1(R+518)){{goto L4369da;}}
}
B43693a:L43693a:{c.instructions+=5;NFSU2_TR(0x43693a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B43693d:{NFSU2_TR(0x43693d);
u8 U[12];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+24),(U+8),4);
}
B436941:{NFSU2_TR(0x436941);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B436942:{NFSU2_TR(0x436942);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B436945:{NFSU2_TR(0x436945);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x43694aull));
TAIL_STATIC(0x42fe00u,42f);
}
B43694a:L43694a:{c.instructions+=2;NFSU2_TR(0x43694a);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B43694c:{NFSU2_TR(0x43694c);
if(r1(R+518)){{goto L4369da;}}
}
B436952:L436952:{c.instructions+=2;NFSU2_TR(0x436952);
u8 U[8];
__builtin_memmove((U+0),gp(0x8900bc),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B436959:{NFSU2_TR(0x436959);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4369a2;}}
}
B43695b:L43695b:{c.instructions+=3;NFSU2_TR(0x43695b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43695c:{NFSU2_TR(0x43695c);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B43695f:{NFSU2_TR(0x43695f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x436964ull));
TAIL_STATIC(0x42fda0u,42f);
}
B436964:L436964:{c.instructions+=2;NFSU2_TR(0x436964);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B436966:{NFSU2_TR(0x436966);
if(r1(R+518)){{goto L4369da;}}
}
B436968:L436968:{c.instructions+=2;NFSU2_TR(0x436968);
u8 U[4];
w4(U+0,u32(0x18ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43696a:{NFSU2_TR(0x43696a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x43696full));
TAIL_STATIC(0x575620u,575);
}
B43696f:L43696f:{c.instructions+=3;NFSU2_TR(0x43696f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B436972:{NFSU2_TR(0x436972);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B436974:{NFSU2_TR(0x436974);
if(r1(R+518)){{goto L43698e;}}
}
B436976:L436976:{c.instructions+=7;NFSU2_TR(0x436976);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+8,u32(r1(U+4)));
}
B43697a:{NFSU2_TR(0x43697a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B43697c:{NFSU2_TR(0x43697c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43697f:{NFSU2_TR(0x43697f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B436982:{NFSU2_TR(0x436982);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B436989:{NFSU2_TR(0x436989);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43698c:{NFSU2_TR(0x43698c);
{goto L436990;}
}
B43698e:L43698e:{c.instructions+=1;NFSU2_TR(0x43698e);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B436990:L436990:{c.instructions+=7;NFSU2_TR(0x436990);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B436993:{NFSU2_TR(0x436993);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B436995:{NFSU2_TR(0x436995);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B436998:{NFSU2_TR(0x436998);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43699b:{NFSU2_TR(0x43699b);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((R+4),(U+0),4);
}
B43699e:{NFSU2_TR(0x43699e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B4369a0:{NFSU2_TR(0x4369a0);
{goto L4369da;}
}
B4369a2:L4369a2:{c.instructions+=2;NFSU2_TR(0x4369a2);
u8 U[4];
w4(U+0,u32(0x18ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4369a4:{NFSU2_TR(0x4369a4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4369a9ull));
TAIL_STATIC(0x575620u,575);
}
B4369a9:L4369a9:{c.instructions+=3;NFSU2_TR(0x4369a9);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4369ac:{NFSU2_TR(0x4369ac);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4369ae:{NFSU2_TR(0x4369ae);
if(r1(R+518)){{goto L4369c8;}}
}
B4369b0:L4369b0:{c.instructions+=7;NFSU2_TR(0x4369b0);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+8,u32(r1(U+4)));
}
B4369b4:{NFSU2_TR(0x4369b4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B4369b6:{NFSU2_TR(0x4369b6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4369b9:{NFSU2_TR(0x4369b9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4369bc:{NFSU2_TR(0x4369bc);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4369c3:{NFSU2_TR(0x4369c3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4369c6:{NFSU2_TR(0x4369c6);
{goto L4369ca;}
}
B4369c8:L4369c8:{c.instructions+=1;NFSU2_TR(0x4369c8);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4369ca:L4369ca:{c.instructions+=6;NFSU2_TR(0x4369ca);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4369cd:{NFSU2_TR(0x4369cd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B4369cf:{NFSU2_TR(0x4369cf);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4369d2:{NFSU2_TR(0x4369d2);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((R+8),(U+0),4);
}
B4369d5:{NFSU2_TR(0x4369d5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4369d8:{NFSU2_TR(0x4369d8);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+0)),r4(U+0));
}
B4369da:L4369da:{c.instructions+=8;NFSU2_TR(0x4369da);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4369dd:{NFSU2_TR(0x4369dd);
__builtin_memmove((R+24),gp(0x827ad4),4);
}
B4369e3:{NFSU2_TR(0x4369e3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4369e5:{NFSU2_TR(0x4369e5);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B4369e6:{NFSU2_TR(0x4369e6);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0xcull))));
}
B4369e9:{NFSU2_TR(0x4369e9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(R+28))<(r4(U+0))));
}
B4369eb:{NFSU2_TR(0x4369eb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4369ee:{NFSU2_TR(0x4369ee);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x436921u);}goto L436921;}}
}
B4369f4:L4369f4:{c.instructions+=4;NFSU2_TR(0x4369f4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4369f7:{NFSU2_TR(0x4369f7);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((R+0),(U+0),4);
}
B4369fa:{NFSU2_TR(0x4369fa);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4369fc:{NFSU2_TR(0x4369fc);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L436a1b;}}
}
B4369fe:L4369fe:{c.instructions+=7;NFSU2_TR(0x4369fe);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B436a01:{NFSU2_TR(0x436a01);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B436a03:{NFSU2_TR(0x436a03);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
s4(u32(r4(R+12)),r4(U+0));
}
B436a05:{NFSU2_TR(0x436a05);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
s4(u32(r4(R+4)),r4(U+0));
}
B436a07:{NFSU2_TR(0x436a07);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((R+4),(U+0),4);
}
B436a0a:{NFSU2_TR(0x436a0a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B436a11:{NFSU2_TR(0x436a11);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x436a16ull));
TAIL_STATIC(0x4def30u,4de);
}
B436a16:L436a16:{c.instructions+=1;NFSU2_TR(0x436a16);
TAIL_STATIC(0x43712eu,437);
}
B436a1b:L436a1b:{c.instructions+=3;NFSU2_TR(0x436a1b);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B436a1d:{NFSU2_TR(0x436a1d);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((R+4),(U+0),4);
}
B436a20:{NFSU2_TR(0x436a20);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x436a25ull));
TAIL_STATIC(0x43be80u,43b);
}
B436a25:L436a25:{c.instructions+=2;NFSU2_TR(0x436a25);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B436a26:{NFSU2_TR(0x436a26);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x436a2bull));
TAIL_STATIC(0x43c1c0u,43c);
}
B436a2b:L436a2b:{c.instructions+=4;NFSU2_TR(0x436a2b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B436a2e:{NFSU2_TR(0x436a2e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B436a2f:{NFSU2_TR(0x436a2f);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((R+4),(U+0),4);
}
B436a32:{NFSU2_TR(0x436a32);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x436a37ull));
TAIL_STATIC(0x43be60u,43b);
}
B436a37:L436a37:{c.instructions+=15;NFSU2_TR(0x436a37);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B436a3a:{NFSU2_TR(0x436a3a);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+12)),r4(U+0));
}
B436a3c:{NFSU2_TR(0x436a3c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B436a3f:{NFSU2_TR(0x436a3f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B436a42:{NFSU2_TR(0x436a42);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+8)),r4(U+0));
}
B436a44:{NFSU2_TR(0x436a44);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B436a47:{NFSU2_TR(0x436a47);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B436a4a:{NFSU2_TR(0x436a4a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+8)),r4(U+0));
}
B436a4c:{NFSU2_TR(0x436a4c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B436a4f:{NFSU2_TR(0x436a4f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B436a52:{NFSU2_TR(0x436a52);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B436a54:{NFSU2_TR(0x436a54);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((R+4),(U+0),4);
}
B436a57:{NFSU2_TR(0x436a57);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B436a59:{NFSU2_TR(0x436a59);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B436a60:{NFSU2_TR(0x436a60);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x436a65ull));
TAIL_STATIC(0x4def30u,4de);
}
B436a65:L436a65:{c.instructions+=1;NFSU2_TR(0x436a65);
TAIL_STATIC(0x43712eu,437);
}
B436a6a:L436a6a:{c.instructions+=2;NFSU2_TR(0x436a6a);
u8 U[8];
__builtin_memmove((U+0),gp(0x865014),4);
w4(U+4,u32(u32(r4(U+0))-u32(r4(R+28))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B436a70:{NFSU2_TR(0x436a70);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x43712au,437);}
}
B436a76:L436a76:{c.instructions+=3;NFSU2_TR(0x436a76);
__builtin_memmove((R+0),gp(0x865030),4);
}
B436a7b:{NFSU2_TR(0x436a7b);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B436a7d:{NFSU2_TR(0x436a7d);
if(r1(R+518)){{goto L436a8e;}}
}
B436a7f:L436a7f:{c.instructions+=4;NFSU2_TR(0x436a7f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+12)),r4(U+0));
}
B436a81:{NFSU2_TR(0x436a81);
__builtin_memmove((R+8),gp(0x865034),4);
}
B436a87:{NFSU2_TR(0x436a87);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+24)),r4(U+0));
}
B436a89:{NFSU2_TR(0x436a89);
TAIL_STATIC(0x43712eu,437);
}
B436a8e:L436a8e:{c.instructions+=3;NFSU2_TR(0x436a8e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B436a91:{NFSU2_TR(0x436a91);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1262ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B436a97:{NFSU2_TR(0x436a97);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L436abd;}}
}
B436a99:L436a99:{c.instructions+=2;NFSU2_TR(0x436a99);
u8 U[4];
w4(U+0,u32(0x786370ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B436a9e:{NFSU2_TR(0x436a9e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x436aa3ull));
TAIL_STATIC(0x43db50u,43d);
}
B436aa3:L436aa3:{c.instructions+=8;NFSU2_TR(0x436aa3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B436aa6:{NFSU2_TR(0x436aa6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B436aa9:{NFSU2_TR(0x436aa9);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B436aac:{NFSU2_TR(0x436aac);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B436aae:{NFSU2_TR(0x436aae);
u8 U[4];
w4(U+0,u32(0x0ull));
s4(u32(r4(R+8)),r4(U+0));
}
B436ab4:{NFSU2_TR(0x436ab4);
__builtin_memmove((R+12),(R+4),4);
}
B436ab6:{NFSU2_TR(0x436ab6);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B436ab8:{NFSU2_TR(0x436ab8);
TAIL_STATIC(0x43712eu,437);
}
B436abd:L436abd:{c.instructions+=2;NFSU2_TR(0x436abd);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B436ac0:{NFSU2_TR(0x436ac0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x436ac5ull));
TAIL_STATIC(0x42fea0u,42f);
}
B436ac5:L436ac5:{c.instructions+=3;NFSU2_TR(0x436ac5);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B436ac6:{NFSU2_TR(0x436ac6);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B436ac9:{NFSU2_TR(0x436ac9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x436aceull));
TAIL_STATIC(0x431df0u,431);
}
B436ace:L436ace:{c.instructions+=3;NFSU2_TR(0x436ace);
w4(R+24,u32(0x1ull));
}
B436ad3:{NFSU2_TR(0x436ad3);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B436ad4:{NFSU2_TR(0x436ad4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x436ad9ull));
TAIL_STATIC(0x43e8e0u,43e);
}
B436ad9:L436ad9:{c.instructions+=12;NFSU2_TR(0x436ad9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B436adc:{NFSU2_TR(0x436adc);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((R+0),(U+0),4);
}
B436adf:{NFSU2_TR(0x436adf);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((R+4),(U+0),4);
}
B436ae2:{NFSU2_TR(0x436ae2);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B436ae5:{NFSU2_TR(0x436ae5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B436ae8:{NFSU2_TR(0x436ae8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B436aeb:{NFSU2_TR(0x436aeb);
__builtin_memmove((R+8),gp(0x827ad4),4);
}
B436af1:{NFSU2_TR(0x436af1);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B436af4:{NFSU2_TR(0x436af4);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B436af6:{NFSU2_TR(0x436af6);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B436af8:{NFSU2_TR(0x436af8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B436afb:{NFSU2_TR(0x436afb);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L436ba6;}}
}
B436b01:L436b01:{c.instructions+=2;NFSU2_TR(0x436b01);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+24))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B436b04:{NFSU2_TR(0x436b04);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+518),1);
s1(u32(r4(U+0)),r1(U+4));
}
B436b08:L436b08:{c.instructions+=5;NFSU2_TR(0x436b08);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B436b0b:{NFSU2_TR(0x436b0b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B436b0c:{NFSU2_TR(0x436b0c);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B436b0d:{NFSU2_TR(0x436b0d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B436b0e:{NFSU2_TR(0x436b0e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x436b13ull));
TAIL_STATIC(0x4300f0u,430);
}
B436b13:L436b13:{c.instructions+=3;NFSU2_TR(0x436b13);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B436b16:{NFSU2_TR(0x436b16);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B436b18:{NFSU2_TR(0x436b18);
if(r1(R+518)){{goto L436b8a;}}
}
B436b1a:L436b1a:{c.instructions+=5;NFSU2_TR(0x436b1a);
__builtin_memmove((R+4),gp(0x827ad4),4);
}
B436b20:{NFSU2_TR(0x436b20);
u8 U[12];
w4(U+0,u32(u32(u32(0x25cull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x8ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+24),(U+8),4);
}
B436b27:{NFSU2_TR(0x436b27);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B436b28:{NFSU2_TR(0x436b28);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B436b2b:{NFSU2_TR(0x436b2b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x436b30ull));
TAIL_STATIC(0x42fed0u,42f);
}
B436b30:L436b30:{c.instructions+=2;NFSU2_TR(0x436b30);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B436b32:{NFSU2_TR(0x436b32);
if(r1(R+518)){{goto L436b8a;}}
}
B436b34:L436b34:{c.instructions+=3;NFSU2_TR(0x436b34);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B436b35:{NFSU2_TR(0x436b35);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B436b38:{NFSU2_TR(0x436b38);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x436b3dull));
TAIL_STATIC(0x42ff50u,42f);
}
B436b3d:L436b3d:{c.instructions+=2;NFSU2_TR(0x436b3d);
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
B436b3f:{NFSU2_TR(0x436b3f);
if(r1(R+518)){{goto L436b8a;}}
}
B436b41:L436b41:{c.instructions+=5;NFSU2_TR(0x436b41);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B436b44:{NFSU2_TR(0x436b44);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B436b45:{NFSU2_TR(0x436b45);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B436b46:{NFSU2_TR(0x436b46);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B436b49:{NFSU2_TR(0x436b49);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x436b4eull));
TAIL_STATIC(0x42ff20u,42f);
}
B436b4e:L436b4e:{c.instructions+=2;NFSU2_TR(0x436b4e);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B436b50:{NFSU2_TR(0x436b50);
if(r1(R+518)){{goto L436b8a;}}
}
B436b52:L436b52:{c.instructions+=2;NFSU2_TR(0x436b52);
u8 U[4];
w4(U+0,u32(0x18ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B436b54:{NFSU2_TR(0x436b54);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x436b59ull));
TAIL_STATIC(0x575620u,575);
}
B436b59:L436b59:{c.instructions+=3;NFSU2_TR(0x436b59);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B436b5c:{NFSU2_TR(0x436b5c);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B436b5e:{NFSU2_TR(0x436b5e);
if(r1(R+518)){{goto L436b78;}}
}
B436b60:L436b60:{c.instructions+=7;NFSU2_TR(0x436b60);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+8,u32(r1(U+4)));
}
B436b64:{NFSU2_TR(0x436b64);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B436b66:{NFSU2_TR(0x436b66);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B436b69:{NFSU2_TR(0x436b69);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B436b6c:{NFSU2_TR(0x436b6c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
w4(U+4,u32(0x2ull));
s4(u32(r4(U+0)),r4(U+4));
}
B436b73:{NFSU2_TR(0x436b73);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B436b76:{NFSU2_TR(0x436b76);
{goto L436b7a;}
}
B436b78:L436b78:{c.instructions+=1;NFSU2_TR(0x436b78);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B436b7a:L436b7a:{c.instructions+=6;NFSU2_TR(0x436b7a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B436b7d:{NFSU2_TR(0x436b7d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B436b7f:{NFSU2_TR(0x436b7f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B436b82:{NFSU2_TR(0x436b82);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B436b85:{NFSU2_TR(0x436b85);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((R+4),(U+0),4);
}
B436b88:{NFSU2_TR(0x436b88);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B436b8a:L436b8a:{c.instructions+=5;NFSU2_TR(0x436b8a);
__builtin_memmove((R+8),gp(0x827ad4),4);
}
B436b90:{NFSU2_TR(0x436b90);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B436b93:{NFSU2_TR(0x436b93);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B436b94:{NFSU2_TR(0x436b94);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(R+28))<(r4(U+0))));
}
B436b96:{NFSU2_TR(0x436b96);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x436b08u);}goto L436b08;}}
}
B436b9c:L436b9c:{c.instructions+=4;NFSU2_TR(0x436b9c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B436b9f:{NFSU2_TR(0x436b9f);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((R+0),(U+0),4);
}
B436ba2:{NFSU2_TR(0x436ba2);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B436ba4:{NFSU2_TR(0x436ba4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L436bba;}}
}
B436ba6:L436ba6:{c.instructions+=5;NFSU2_TR(0x436ba6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B436ba9:{NFSU2_TR(0x436ba9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B436bac:{NFSU2_TR(0x436bac);
u8 U[4];
w4(U+0,u32(0x0ull));
s4(u32(r4(R+4)),r4(U+0));
}
B436bb2:{NFSU2_TR(0x436bb2);
u8 U[4];
w4(U+0,u32(0x0ull));
s4(u32(r4(R+8)),r4(U+0));
}
B436bb8:{NFSU2_TR(0x436bb8);
{goto L436bf6;}
}
B436bba:L436bba:{c.instructions+=3;NFSU2_TR(0x436bba);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B436bbc:{NFSU2_TR(0x436bbc);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((R+4),(U+0),4);
}
B436bbf:{NFSU2_TR(0x436bbf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x436bc4ull));
TAIL_STATIC(0x43be80u,43b);
}
B436bc4:L436bc4:{c.instructions+=2;NFSU2_TR(0x436bc4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B436bc5:{NFSU2_TR(0x436bc5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x436bcaull));
TAIL_STATIC(0x43c1c0u,43c);
}
B436bca:L436bca:{c.instructions+=4;NFSU2_TR(0x436bca);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B436bcd:{NFSU2_TR(0x436bcd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B436bce:{NFSU2_TR(0x436bce);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((R+4),(U+0),4);
}
B436bd1:{NFSU2_TR(0x436bd1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x436bd6ull));
TAIL_STATIC(0x43be60u,43b);
}
B436bd6:L436bd6:{c.instructions+=12;NFSU2_TR(0x436bd6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B436bd9:{NFSU2_TR(0x436bd9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B436bdc:{NFSU2_TR(0x436bdc);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+8)),r4(U+0));
}
B436bde:{NFSU2_TR(0x436bde);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B436be1:{NFSU2_TR(0x436be1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B436be4:{NFSU2_TR(0x436be4);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+8)),r4(U+0));
}
B436be6:{NFSU2_TR(0x436be6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B436be9:{NFSU2_TR(0x436be9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B436bec:{NFSU2_TR(0x436bec);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+8)),r4(U+0));
}
B436bee:{NFSU2_TR(0x436bee);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B436bf1:{NFSU2_TR(0x436bf1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B436bf4:{NFSU2_TR(0x436bf4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B436bf6:L436bf6:{c.instructions+=3;NFSU2_TR(0x436bf6);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((R+4),(U+0),4);
}
B436bf9:{NFSU2_TR(0x436bf9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B436c00:{NFSU2_TR(0x436c00);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x436c05ull));
TAIL_STATIC(0x4def30u,4de);
}
B436c05:L436c05:{c.instructions+=3;NFSU2_TR(0x436c05);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B436c08:{NFSU2_TR(0x436c08);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B436c0a:{NFSU2_TR(0x436c0a);
TAIL_STATIC(0x43712eu,437);
}
B436c0f:L436c0f:{c.instructions+=2;NFSU2_TR(0x436c0f);
u8 U[8];
__builtin_memmove((U+0),gp(0x865014),4);
w4(U+4,u32(u32(r4(U+0))-u32(r4(R+28))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B436c15:{NFSU2_TR(0x436c15);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x43712au,437);}
}
B436c1b:L436c1b:{c.instructions+=3;NFSU2_TR(0x436c1b);
__builtin_memmove((R+0),gp(0x865038),4);
}
B436c20:{NFSU2_TR(0x436c20);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B436c22:{NFSU2_TR(0x436c22);
if(r1(R+518)){{goto L436c33;}}
}
B436c24:L436c24:{c.instructions+=4;NFSU2_TR(0x436c24);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+12)),r4(U+0));
}
B436c26:{NFSU2_TR(0x436c26);
__builtin_memmove((R+8),gp(0x86503c),4);
}
B436c2c:{NFSU2_TR(0x436c2c);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+24)),r4(U+0));
}
B436c2e:{NFSU2_TR(0x436c2e);
TAIL_STATIC(0x43712eu,437);
}
B436c33:L436c33:{c.instructions+=8;NFSU2_TR(0x436c33);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((R+0),(U+0),4);
}
B436c36:{NFSU2_TR(0x436c36);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((R+4),(U+0),4);
}
B436c39:{NFSU2_TR(0x436c39);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B436c3c:{NFSU2_TR(0x436c3c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B436c3f:{NFSU2_TR(0x436c3f);
__builtin_memmove((R+0),gp(0x827ad4),4);
}
B436c44:{NFSU2_TR(0x436c44);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+28))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B436c47:{NFSU2_TR(0x436c47);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w4(U+4,u32(0x2ull));
s4(u32(r4(U+0)),r4(U+4));
}
B436c4e:{NFSU2_TR(0x436c4e);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L436cc0;}}
}
B436c50:L436c50:{c.instructions+=1;NFSU2_TR(0x436c50);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B436c52:L436c52:{c.instructions+=4;NFSU2_TR(0x436c52);
u8 U[13];
w4(U+0,u32(u32(u32(0x2a1ull))+u32(r4(R+12))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
__builtin_memmove((R+4),(U+12),1);
}
B436c59:{NFSU2_TR(0x436c59);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x40ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B436c5c:{NFSU2_TR(0x436c5c);
u8 U[12];
w4(U+0,u32(u32(u32(0x29cull))+u32(r4(R+12))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+24),(U+8),4);
}
B436c63:{NFSU2_TR(0x436c63);
if(r1(R+518)){{goto L436cab;}}
}
B436c65:L436c65:{c.instructions+=3;NFSU2_TR(0x436c65);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(r2(U+4)));
}
B436c69:{NFSU2_TR(0x436c69);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B436c6c:{NFSU2_TR(0x436c6c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L436cab;}}
}
B436c6e:L436c6e:{c.instructions+=2;NFSU2_TR(0x436c6e);
u8 U[4];
w4(U+0,u32(0x18ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B436c70:{NFSU2_TR(0x436c70);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x436c75ull));
TAIL_STATIC(0x575620u,575);
}
B436c75:L436c75:{c.instructions+=3;NFSU2_TR(0x436c75);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B436c78:{NFSU2_TR(0x436c78);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B436c7a:{NFSU2_TR(0x436c7a);
if(r1(R+518)){{goto L436c94;}}
}
B436c7c:L436c7c:{c.instructions+=7;NFSU2_TR(0x436c7c);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+8,u32(r1(U+4)));
}
B436c80:{NFSU2_TR(0x436c80);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B436c82:{NFSU2_TR(0x436c82);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B436c85:{NFSU2_TR(0x436c85);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B436c88:{NFSU2_TR(0x436c88);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
w4(U+4,u32(0x3ull));
s4(u32(r4(U+0)),r4(U+4));
}
B436c8f:{NFSU2_TR(0x436c8f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B436c92:{NFSU2_TR(0x436c92);
{goto L436c96;}
}
B436c94:L436c94:{c.instructions+=1;NFSU2_TR(0x436c94);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B436c96:L436c96:{c.instructions+=7;NFSU2_TR(0x436c96);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B436c99:{NFSU2_TR(0x436c99);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B436c9b:{NFSU2_TR(0x436c9b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B436c9e:{NFSU2_TR(0x436c9e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B436ca1:{NFSU2_TR(0x436ca1);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((R+4),(U+0),4);
}
B436ca4:{NFSU2_TR(0x436ca4);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B436ca6:{NFSU2_TR(0x436ca6);
__builtin_memmove((R+0),gp(0x827ad4),4);
}
B436cab:L436cab:{c.instructions+=5;NFSU2_TR(0x436cab);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B436cae:{NFSU2_TR(0x436cae);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B436caf:{NFSU2_TR(0x436caf);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x10ull))));
}
B436cb2:{NFSU2_TR(0x436cb2);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(R+28))<(r4(U+0))));
}
B436cb4:{NFSU2_TR(0x436cb4);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x436c52u);}goto L436c52;}}
}
B436cb6:L436cb6:{c.instructions+=4;NFSU2_TR(0x436cb6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B436cb9:{NFSU2_TR(0x436cb9);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((R+8),(U+0),4);
}
B436cbc:{NFSU2_TR(0x436cbc);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B436cbe:{NFSU2_TR(0x436cbe);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L436cd4;}}
}
B436cc0:L436cc0:{c.instructions+=5;NFSU2_TR(0x436cc0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B436cc3:{NFSU2_TR(0x436cc3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B436cc6:{NFSU2_TR(0x436cc6);
u8 U[4];
w4(U+0,u32(0x0ull));
s4(u32(r4(R+0)),r4(U+0));
}
B436ccc:{NFSU2_TR(0x436ccc);
u8 U[4];
w4(U+0,u32(0x0ull));
s4(u32(r4(R+4)),r4(U+0));
}
B436cd2:{NFSU2_TR(0x436cd2);
{goto L436d10;}
}
B436cd4:L436cd4:{c.instructions+=3;NFSU2_TR(0x436cd4);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B436cd6:{NFSU2_TR(0x436cd6);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((R+4),(U+0),4);
}
B436cd9:{NFSU2_TR(0x436cd9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x436cdeull));
TAIL_STATIC(0x43be80u,43b);
}
B436cde:L436cde:{c.instructions+=2;NFSU2_TR(0x436cde);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B436cdf:{NFSU2_TR(0x436cdf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x436ce4ull));
TAIL_STATIC(0x43c1c0u,43c);
}
B436ce4:L436ce4:{c.instructions+=4;NFSU2_TR(0x436ce4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B436ce7:{NFSU2_TR(0x436ce7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B436ce8:{NFSU2_TR(0x436ce8);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((R+4),(U+0),4);
}
B436ceb:{NFSU2_TR(0x436ceb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x436cf0ull));
TAIL_STATIC(0x43be60u,43b);
}
B436cf0:L436cf0:{c.instructions+=12;NFSU2_TR(0x436cf0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B436cf3:{NFSU2_TR(0x436cf3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B436cf6:{NFSU2_TR(0x436cf6);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+4)),r4(U+0));
}
B436cf8:{NFSU2_TR(0x436cf8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B436cfb:{NFSU2_TR(0x436cfb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B436cfe:{NFSU2_TR(0x436cfe);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+4)),r4(U+0));
}
B436d00:{NFSU2_TR(0x436d00);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B436d03:{NFSU2_TR(0x436d03);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B436d06:{NFSU2_TR(0x436d06);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+4)),r4(U+0));
}
B436d08:{NFSU2_TR(0x436d08);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B436d0b:{NFSU2_TR(0x436d0b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B436d0e:{NFSU2_TR(0x436d0e);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+0)),r4(U+0));
}
B436d10:L436d10:{c.instructions+=3;NFSU2_TR(0x436d10);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((R+4),(U+0),4);
}
B436d13:{NFSU2_TR(0x436d13);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B436d1a:{NFSU2_TR(0x436d1a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x436d1full));
TAIL_STATIC(0x4def30u,4de);
}
B436d1f:L436d1f:{c.instructions+=3;NFSU2_TR(0x436d1f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B436d22:{NFSU2_TR(0x436d22);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B436d24:{NFSU2_TR(0x436d24);
TAIL_STATIC(0x43712eu,437);
}
B436d29:L436d29:{c.instructions+=2;NFSU2_TR(0x436d29);
u8 U[8];
__builtin_memmove((U+0),gp(0x865014),4);
w4(U+4,u32(u32(r4(U+0))-u32(r4(R+28))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B436d2f:{NFSU2_TR(0x436d2f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x43712au,437);}
}
B436d35:L436d35:{c.instructions+=2;NFSU2_TR(0x436d35);
u8 U[8];
__builtin_memmove((U+0),gp(0x850088),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x8ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B436d3c:{NFSU2_TR(0x436d3c);
if(r1(R+518)){TAIL_STATIC(0x43712au,437);}
}
B436d42:L436d42:{c.instructions+=12;NFSU2_TR(0x436d42);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B436d45:{NFSU2_TR(0x436d45);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B436d46:{NFSU2_TR(0x436d46);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B436d49:{NFSU2_TR(0x436d49);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc4ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B436d4c:{NFSU2_TR(0x436d4c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B436d4f:{NFSU2_TR(0x436d4f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B436d52:{NFSU2_TR(0x436d52);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B436d55:{NFSU2_TR(0x436d55);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B436d58:{NFSU2_TR(0x436d58);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B436d5b:{NFSU2_TR(0x436d5b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B436d5e:{NFSU2_TR(0x436d5e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B436d61:{NFSU2_TR(0x436d61);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x436d66ull));
TAIL_STATIC(0x431f10u,431);
}
B436d66:L436d66:{c.instructions+=8;NFSU2_TR(0x436d66);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((R+8),(U+0),4);
}
B436d69:{NFSU2_TR(0x436d69);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((R+0),(U+0),4);
}
B436d6c:{NFSU2_TR(0x436d6c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B436d6f:{NFSU2_TR(0x436d6f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B436d72:{NFSU2_TR(0x436d72);
__builtin_memmove((R+24),gp(0x827ad4),4);
}
B436d78:{NFSU2_TR(0x436d78);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+28))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B436d7b:{NFSU2_TR(0x436d7b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w4(U+4,u32(0x3ull));
s4(u32(r4(U+0)),r4(U+4));
}
B436d82:{NFSU2_TR(0x436d82);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L436e0c;}}
}
B436d88:L436d88:{c.instructions+=3;NFSU2_TR(0x436d88);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B436d8c:{NFSU2_TR(0x436d8c);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+518),1);
s1(u32(r4(U+0)),r1(U+4));
}
B436d90:{NFSU2_TR(0x436d90);
w4(R+12,u32(0x2bcull));
}
B436d95:L436d95:{c.instructions+=6;NFSU2_TR(0x436d95);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B436d98:{NFSU2_TR(0x436d98);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B436d9b:{NFSU2_TR(0x436d9b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B436d9c:{NFSU2_TR(0x436d9c);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B436d9d:{NFSU2_TR(0x436d9d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B436d9e:{NFSU2_TR(0x436d9e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x436da3ull));
TAIL_STATIC(0x430160u,430);
}
B436da3:L436da3:{c.instructions+=3;NFSU2_TR(0x436da3);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B436da6:{NFSU2_TR(0x436da6);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B436da8:{NFSU2_TR(0x436da8);
if(r1(R+518)){{goto L436df1;}}
}
B436daa:L436daa:{c.instructions+=4;NFSU2_TR(0x436daa);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+12))));
}
B436dac:{NFSU2_TR(0x436dac);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B436dad:{NFSU2_TR(0x436dad);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B436db0:{NFSU2_TR(0x436db0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x436db5ull));
TAIL_STATIC(0x430020u,430);
}
B436db5:L436db5:{c.instructions+=2;NFSU2_TR(0x436db5);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B436db7:{NFSU2_TR(0x436db7);
if(r1(R+518)){{goto L436df1;}}
}
B436db9:L436db9:{c.instructions+=2;NFSU2_TR(0x436db9);
u8 U[4];
w4(U+0,u32(0x18ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B436dbb:{NFSU2_TR(0x436dbb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x436dc0ull));
TAIL_STATIC(0x575620u,575);
}
B436dc0:L436dc0:{c.instructions+=3;NFSU2_TR(0x436dc0);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B436dc3:{NFSU2_TR(0x436dc3);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B436dc5:{NFSU2_TR(0x436dc5);
if(r1(R+518)){{goto L436ddf;}}
}
B436dc7:L436dc7:{c.instructions+=7;NFSU2_TR(0x436dc7);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+8,u32(r1(U+4)));
}
B436dcb:{NFSU2_TR(0x436dcb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B436dcd:{NFSU2_TR(0x436dcd);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B436dd0:{NFSU2_TR(0x436dd0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B436dd3:{NFSU2_TR(0x436dd3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
w4(U+4,u32(0x4ull));
s4(u32(r4(U+0)),r4(U+4));
}
B436dda:{NFSU2_TR(0x436dda);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B436ddd:{NFSU2_TR(0x436ddd);
{goto L436de1;}
}
B436ddf:L436ddf:{c.instructions+=1;NFSU2_TR(0x436ddf);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B436de1:L436de1:{c.instructions+=6;NFSU2_TR(0x436de1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B436de4:{NFSU2_TR(0x436de4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B436de6:{NFSU2_TR(0x436de6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B436de9:{NFSU2_TR(0x436de9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B436dec:{NFSU2_TR(0x436dec);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((R+4),(U+0),4);
}
B436def:{NFSU2_TR(0x436def);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B436df1:L436df1:{c.instructions+=6;NFSU2_TR(0x436df1);
__builtin_memmove((R+24),gp(0x827ad4),4);
}
B436df7:{NFSU2_TR(0x436df7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B436dfa:{NFSU2_TR(0x436dfa);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B436dfb:{NFSU2_TR(0x436dfb);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x14ull))));
}
B436dfe:{NFSU2_TR(0x436dfe);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(R+28))<(r4(U+0))));
}
B436e00:{NFSU2_TR(0x436e00);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x436d95u);}goto L436d95;}}
}
B436e02:L436e02:{c.instructions+=4;NFSU2_TR(0x436e02);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B436e05:{NFSU2_TR(0x436e05);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((R+8),(U+0),4);
}
B436e08:{NFSU2_TR(0x436e08);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B436e0a:{NFSU2_TR(0x436e0a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L436e23;}}
}
B436e0c:L436e0c:{c.instructions+=5;NFSU2_TR(0x436e0c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B436e0f:{NFSU2_TR(0x436e0f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B436e12:{NFSU2_TR(0x436e12);
u8 U[4];
w4(U+0,u32(0x0ull));
s4(u32(r4(R+0)),r4(U+0));
}
B436e18:{NFSU2_TR(0x436e18);
u8 U[4];
w4(U+0,u32(0x0ull));
s4(u32(r4(R+4)),r4(U+0));
}
B436e1e:{NFSU2_TR(0x436e1e);
{goto L436feb;}
}
B436e23:L436e23:{c.instructions+=7;NFSU2_TR(0x436e23);
__builtin_memmove((R+8),gp(0x89d00c),4);
}
B436e29:{NFSU2_TR(0x436e29);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((R+0),(U+0),4);
}
B436e2c:{NFSU2_TR(0x436e2c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B436e2d:{NFSU2_TR(0x436e2d);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B436e2f:{NFSU2_TR(0x436e2f);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((R+4),(U+0),4);
}
B436e32:{NFSU2_TR(0x436e32);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B436e35:{NFSU2_TR(0x436e35);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x436e3aull));
TAIL_STATIC(0x43be80u,43b);
}
B436e3a:L436e3a:{c.instructions+=2;NFSU2_TR(0x436e3a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B436e3b:{NFSU2_TR(0x436e3b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x436e40ull));
TAIL_STATIC(0x43c140u,43c);
}
B436e40:L436e40:{c.instructions+=4;NFSU2_TR(0x436e40);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B436e43:{NFSU2_TR(0x436e43);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B436e44:{NFSU2_TR(0x436e44);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((R+4),(U+0),4);
}
B436e47:{NFSU2_TR(0x436e47);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x436e4cull));
TAIL_STATIC(0x43be60u,43b);
}
B436e4c:L436e4c:{c.instructions+=2;NFSU2_TR(0x436e4c);
__builtin_memmove((R+24),(R+0),4);
}
B436e4e:{NFSU2_TR(0x436e4e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x436e53ull));
TAIL_STATIC(0x5bf6d0u,5bf);
}
B436e53:L436e53:{c.instructions+=2;NFSU2_TR(0x436e53);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B436e55:{NFSU2_TR(0x436e55);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L436f6b;}}
}
B436e5b:L436e5b:{c.instructions+=5;NFSU2_TR(0x436e5b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B436e5e:{NFSU2_TR(0x436e5e);
u8 U[4];
w4(U+0,u32(0x785d78ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B436e63:{NFSU2_TR(0x436e63);
w4(R+28,u32(0xb4ull));
}
B436e68:{NFSU2_TR(0x436e68);
w4(R+24,u32(0x104ull));
}
B436e6d:{NFSU2_TR(0x436e6d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x436e72ull));
TAIL_STATIC(0x43db50u,43d);
}
B436e72:L436e72:{c.instructions+=3;NFSU2_TR(0x436e72);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B436e75:{NFSU2_TR(0x436e75);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B436e77:{NFSU2_TR(0x436e77);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L436e7e;}}
}
B436e79:L436e79:{c.instructions+=1;NFSU2_TR(0x436e79);
{goto L436f03;}
}
B436e7e:L436e7e:{c.instructions+=2;NFSU2_TR(0x436e7e);
u8 U[4];
w4(U+0,u32(0x785d6cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B436e83:{NFSU2_TR(0x436e83);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x436e88ull));
TAIL_STATIC(0x43db50u,43d);
}
B436e88:L436e88:{c.instructions+=3;NFSU2_TR(0x436e88);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B436e8b:{NFSU2_TR(0x436e8b);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B436e8d:{NFSU2_TR(0x436e8d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L436e9b;}}
}
B436e8f:L436e8f:{c.instructions+=3;NFSU2_TR(0x436e8f);
w4(R+28,u32(0xc8ull));
}
B436e94:{NFSU2_TR(0x436e94);
w4(R+24,u32(0x142ull));
}
B436e99:{NFSU2_TR(0x436e99);
{goto L436f08;}
}
B436e9b:L436e9b:{c.instructions+=2;NFSU2_TR(0x436e9b);
u8 U[4];
w4(U+0,u32(0x785d54ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B436ea0:{NFSU2_TR(0x436ea0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x436ea5ull));
TAIL_STATIC(0x43db50u,43d);
}
B436ea5:L436ea5:{c.instructions+=3;NFSU2_TR(0x436ea5);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B436ea8:{NFSU2_TR(0x436ea8);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B436eaa:{NFSU2_TR(0x436eaa);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L436eb3;}}
}
B436eac:L436eac:{c.instructions+=2;NFSU2_TR(0x436eac);
w4(R+24,u32(0x109ull));
}
B436eb1:{NFSU2_TR(0x436eb1);
{goto L436f03;}
}
B436eb3:L436eb3:{c.instructions+=2;NFSU2_TR(0x436eb3);
u8 U[4];
w4(U+0,u32(0x786364ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B436eb8:{NFSU2_TR(0x436eb8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x436ebdull));
TAIL_STATIC(0x43db50u,43d);
}
B436ebd:L436ebd:{c.instructions+=3;NFSU2_TR(0x436ebd);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B436ec0:{NFSU2_TR(0x436ec0);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B436ec2:{NFSU2_TR(0x436ec2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L436ed0;}}
}
B436ec4:L436ec4:{c.instructions+=3;NFSU2_TR(0x436ec4);
w4(R+28,u32(0xc8ull));
}
B436ec9:{NFSU2_TR(0x436ec9);
w4(R+24,u32(0x140ull));
}
B436ece:{NFSU2_TR(0x436ece);
{goto L436f08;}
}
B436ed0:L436ed0:{c.instructions+=2;NFSU2_TR(0x436ed0);
u8 U[4];
w4(U+0,u32(0x786358ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B436ed5:{NFSU2_TR(0x436ed5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x436edaull));
TAIL_STATIC(0x43db50u,43d);
}
B436eda:L436eda:{c.instructions+=3;NFSU2_TR(0x436eda);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B436edd:{NFSU2_TR(0x436edd);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B436edf:{NFSU2_TR(0x436edf);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L436eed;}}
}
B436ee1:L436ee1:{c.instructions+=3;NFSU2_TR(0x436ee1);
w4(R+28,u32(0xc8ull));
}
B436ee6:{NFSU2_TR(0x436ee6);
w4(R+24,u32(0x137ull));
}
B436eeb:{NFSU2_TR(0x436eeb);
{goto L436f08;}
}
B436eed:L436eed:{c.instructions+=2;NFSU2_TR(0x436eed);
u8 U[4];
w4(U+0,u32(0x78634cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B436ef2:{NFSU2_TR(0x436ef2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x436ef7ull));
TAIL_STATIC(0x43db50u,43d);
}
B436ef7:L436ef7:{c.instructions+=3;NFSU2_TR(0x436ef7);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B436efa:{NFSU2_TR(0x436efa);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B436efc:{NFSU2_TR(0x436efc);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L436f08;}}
}
B436efe:L436efe:{c.instructions+=1;NFSU2_TR(0x436efe);
w4(R+24,u32(0x113ull));
}
B436f03:L436f03:{c.instructions+=1;NFSU2_TR(0x436f03);
w4(R+28,u32(0xb4ull));
}
B436f08:L436f08:{c.instructions+=6;NFSU2_TR(0x436f08);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B436f0a:{NFSU2_TR(0x436f0a);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B436f10:{NFSU2_TR(0x436f10);
{u32 ea_=u32(u32(7887832u));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B436f16:{NFSU2_TR(0x436f16);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B436f19:{NFSU2_TR(0x436f19);
{u32 ea_=u32(r4(R+20)+u32(12u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B436f1c:{NFSU2_TR(0x436f1c);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L436f24;}}
}
B436f1e:L436f1e:{c.instructions+=1;NFSU2_TR(0x436f1e);
{u32 ea_=u32(u32(7882060u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B436f24:L436f24:{c.instructions+=6;NFSU2_TR(0x436f24);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B436f26:{NFSU2_TR(0x436f26);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B436f28:{NFSU2_TR(0x436f28);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B436f2b:{NFSU2_TR(0x436f2b);
{u32 ea_=u32(r4(R+20)+u32(12u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B436f2e:{NFSU2_TR(0x436f2e);
{u32 ea_=u32(r4(R+20)+u32(28u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B436f31:{NFSU2_TR(0x436f31);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L436f39;}}
}
B436f33:L436f33:{c.instructions+=1;NFSU2_TR(0x436f33);
{u32 ea_=u32(u32(7882060u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B436f39:L436f39:{c.instructions+=4;NFSU2_TR(0x436f39);
__builtin_memmove((R+0),gp(0x890118),4);
}
B436f3e:{NFSU2_TR(0x436f3e);
__asm__ volatile(".byte 0xde,0xc9":::"memory");
}
B436f40:{NFSU2_TR(0x436f40);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B436f42:{NFSU2_TR(0x436f42);
if(r1(R+518)){{goto L436f52;}}
}
B436f44:L436f44:{c.instructions+=4;NFSU2_TR(0x436f44);
{u32 ea_=u32(r4(R+20)+u32(12u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B436f47:{NFSU2_TR(0x436f47);
{u32 ea_=u32(u32(7889736u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B436f4d:{NFSU2_TR(0x436f4d);
{u32 ea_=u32(r4(R+0)+u32(12u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B436f50:{NFSU2_TR(0x436f50);
{goto L436f54;}
}
B436f52:L436f52:{c.instructions+=1;NFSU2_TR(0x436f52);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B436f54:L436f54:{c.instructions+=5;NFSU2_TR(0x436f54);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B436f57:{NFSU2_TR(0x436f57);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B436f5a:{NFSU2_TR(0x436f5a);
u8 U[4];
w4(U+0,u32(0x0ull));
s4(u32(r4(R+4)),r4(U+0));
}
B436f60:{NFSU2_TR(0x436f60);
u8 U[4];
w4(U+0,u32(0x0ull));
s4(u32(r4(R+8)),r4(U+0));
}
B436f66:{NFSU2_TR(0x436f66);
{goto L436feb;}
}
B436f6b:L436f6b:{c.instructions+=17;NFSU2_TR(0x436f6b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B436f6e:{NFSU2_TR(0x436f6e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B436f71:{NFSU2_TR(0x436f71);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B436f73:{NFSU2_TR(0x436f73);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B436f76:{NFSU2_TR(0x436f76);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B436f79:{NFSU2_TR(0x436f79);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+0)),r4(U+0));
}
B436f7b:{NFSU2_TR(0x436f7b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B436f7e:{NFSU2_TR(0x436f7e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B436f81:{NFSU2_TR(0x436f81);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B436f84:{NFSU2_TR(0x436f84);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+8)),r4(U+0));
}
B436f86:{NFSU2_TR(0x436f86);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B436f89:{NFSU2_TR(0x436f89);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+0)),r4(U+0));
}
B436f8b:{NFSU2_TR(0x436f8b);
__builtin_memmove((R+4),gp(0x890118),4);
}
B436f91:{NFSU2_TR(0x436f91);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B436f94:{NFSU2_TR(0x436f94);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B436f96:{NFSU2_TR(0x436f96);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B436f98:{NFSU2_TR(0x436f98);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L436feb;}}
}
B436f9a:L436f9a:{c.instructions+=3;NFSU2_TR(0x436f9a);
__builtin_memmove((R+8),gp(0x890080),4);
}
B436fa0:{NFSU2_TR(0x436fa0);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1cull))));
}
B436fa3:{NFSU2_TR(0x436fa3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B436fa6:L436fa6:{c.instructions+=4;NFSU2_TR(0x436fa6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B436fa9:{NFSU2_TR(0x436fa9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B436fab:{NFSU2_TR(0x436fab);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B436fae:{NFSU2_TR(0x436fae);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x436fb3ull));
TAIL_STATIC(0x431dd0u,431);
}
B436fb3:L436fb3:{c.instructions+=2;NFSU2_TR(0x436fb3);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B436fb5:{NFSU2_TR(0x436fb5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L436fc7;}}
}
B436fb7:L436fb7:{c.instructions+=6;NFSU2_TR(0x436fb7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B436fba:{NFSU2_TR(0x436fba);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B436fbb:{NFSU2_TR(0x436fbb);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4ull))));
}
B436fbe:{NFSU2_TR(0x436fbe);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+12),r4(U+0)));
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B436fc0:{NFSU2_TR(0x436fc0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B436fc3:{NFSU2_TR(0x436fc3);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x436fa6u);}goto L436fa6;}}
}
B436fc5:L436fc5:{c.instructions+=1;NFSU2_TR(0x436fc5);
{goto L436feb;}
}
B436fc7:L436fc7:{c.instructions+=9;NFSU2_TR(0x436fc7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B436fca:{NFSU2_TR(0x436fca);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B436fcd:{NFSU2_TR(0x436fcd);
__builtin_memmove((R+4),gp(0x827ad4),4);
}
B436fd3:{NFSU2_TR(0x436fd3);
u8 U[12];
w4(U+0,u32(u32(u32(0xafull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+8),(U+8),4);
}
B436fda:{NFSU2_TR(0x436fda);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B436fdd:{NFSU2_TR(0x436fdd);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+8,u32(s32(s8(r1(U+4)))));
}
B436fe1:{NFSU2_TR(0x436fe1);
u8 U[13];
w4(U+0,u32(u32(u32(0xbull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
w4(R+0,u32(r1(U+12)));
}
B436fe6:{NFSU2_TR(0x436fe6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B436fe9:{NFSU2_TR(0x436fe9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B436feb:L436feb:{c.instructions+=3;NFSU2_TR(0x436feb);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((R+4),(U+0),4);
}
B436fee:{NFSU2_TR(0x436fee);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B436ff5:{NFSU2_TR(0x436ff5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x436ffaull));
TAIL_STATIC(0x4def30u,4de);
}
B436ffa:L436ffa:{c.instructions+=3;NFSU2_TR(0x436ffa);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B436ffd:{NFSU2_TR(0x436ffd);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B436fff:{NFSU2_TR(0x436fff);
TAIL_STATIC(0x43712eu,437);
}
XIT:NFSU2_TR_EXIT(0x436,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
