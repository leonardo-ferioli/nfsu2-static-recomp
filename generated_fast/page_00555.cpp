#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_43d(u8* __restrict R,Cpu& c);
u32 body_43f(u8* __restrict R,Cpu& c);
u32 body_495(u8* __restrict R,Cpu& c);
u32 body_4ff(u8* __restrict R,Cpu& c);
u32 body_504(u8* __restrict R,Cpu& c);
u32 body_505(u8* __restrict R,Cpu& c);
u32 body_50d(u8* __restrict R,Cpu& c);
u32 body_517(u8* __restrict R,Cpu& c);
u32 body_518(u8* __restrict R,Cpu& c);
u32 body_519(u8* __restrict R,Cpu& c);
u32 body_51a(u8* __restrict R,Cpu& c);
u32 body_51c(u8* __restrict R,Cpu& c);
u32 body_52b(u8* __restrict R,Cpu& c);
u32 body_52c(u8* __restrict R,Cpu& c);
u32 body_534(u8* __restrict R,Cpu& c);
u32 body_535(u8* __restrict R,Cpu& c);
u32 body_536(u8* __restrict R,Cpu& c);
u32 body_537(u8* __restrict R,Cpu& c);
u32 body_541(u8* __restrict R,Cpu& c);
u32 body_54d(u8* __restrict R,Cpu& c);
u32 body_551(u8* __restrict R,Cpu& c);
u32 body_554(u8* __restrict R,Cpu& c);
u32 body_556(u8* __restrict R,Cpu& c);
u32 body_575(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x555,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x555,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_555(u8* __restrict R,Cpu& c);
u32 page_555(Cpu& c){return body_555(c.regs.data(),c);}
__attribute__((noinline)) u32 body_555(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x555005:goto L555005;
case 0x555006:c.instructions+=5;goto B555006;
case 0x555007:c.instructions+=4;goto B555007;
case 0x555008:c.instructions+=3;goto B555008;
case 0x55500a:c.instructions+=2;goto B55500a;
case 0x55500c:c.instructions+=1;goto B55500c;
case 0x555011:goto L555011;
case 0x555013:c.instructions+=6;goto B555013;
case 0x555016:c.instructions+=5;goto B555016;
case 0x55501a:c.instructions+=4;goto B55501a;
case 0x55501c:c.instructions+=3;goto B55501c;
case 0x55501e:c.instructions+=2;goto B55501e;
case 0x555022:c.instructions+=1;goto B555022;
case 0x555024:goto L555024;
case 0x555028:c.instructions+=4;goto B555028;
case 0x555029:c.instructions+=3;goto B555029;
case 0x55502a:c.instructions+=2;goto B55502a;
case 0x55502c:c.instructions+=1;goto B55502c;
case 0x555031:goto L555031;
case 0x555037:c.instructions+=4;goto B555037;
case 0x55503a:c.instructions+=3;goto B55503a;
case 0x55503d:c.instructions+=2;goto B55503d;
case 0x555043:c.instructions+=1;goto B555043;
case 0x555045:goto L555045;
case 0x555049:c.instructions+=5;goto B555049;
case 0x55504a:c.instructions+=4;goto B55504a;
case 0x55504b:c.instructions+=3;goto B55504b;
case 0x555052:c.instructions+=2;goto B555052;
case 0x555055:c.instructions+=1;goto B555055;
case 0x555060:goto L555060;
case 0x555062:c.instructions+=9;goto B555062;
case 0x555067:c.instructions+=8;goto B555067;
case 0x55506d:c.instructions+=7;goto B55506d;
case 0x55506e:c.instructions+=6;goto B55506e;
case 0x555075:c.instructions+=5;goto B555075;
case 0x555076:c.instructions+=4;goto B555076;
case 0x555077:c.instructions+=3;goto B555077;
case 0x555079:c.instructions+=2;goto B555079;
case 0x55507b:c.instructions+=1;goto B55507b;
case 0x555080:goto L555080;
case 0x555083:c.instructions+=4;goto B555083;
case 0x555087:c.instructions+=3;goto B555087;
case 0x555089:c.instructions+=2;goto B555089;
case 0x555091:c.instructions+=1;goto B555091;
case 0x555093:goto L555093;
case 0x555097:c.instructions+=5;goto B555097;
case 0x555098:c.instructions+=4;goto B555098;
case 0x55509a:c.instructions+=3;goto B55509a;
case 0x55509b:c.instructions+=2;goto B55509b;
case 0x55509d:c.instructions+=1;goto B55509d;
case 0x5550a2:goto L5550a2;
case 0x5550a3:c.instructions+=4;goto B5550a3;
case 0x5550a7:c.instructions+=3;goto B5550a7;
case 0x5550ae:c.instructions+=2;goto B5550ae;
case 0x5550b1:c.instructions+=1;goto B5550b1;
case 0x5550b4:goto L5550b4;
case 0x5550b8:c.instructions+=5;goto B5550b8;
case 0x5550ba:c.instructions+=4;goto B5550ba;
case 0x5550bb:c.instructions+=3;goto B5550bb;
case 0x5550c2:c.instructions+=2;goto B5550c2;
case 0x5550c5:c.instructions+=1;goto B5550c5;
case 0x5550d0:goto L5550d0;
case 0x5550d2:c.instructions+=10;goto B5550d2;
case 0x5550d7:c.instructions+=9;goto B5550d7;
case 0x5550dd:c.instructions+=8;goto B5550dd;
case 0x5550de:c.instructions+=7;goto B5550de;
case 0x5550e5:c.instructions+=6;goto B5550e5;
case 0x5550e6:c.instructions+=5;goto B5550e6;
case 0x5550e7:c.instructions+=4;goto B5550e7;
case 0x5550e8:c.instructions+=3;goto B5550e8;
case 0x5550ea:c.instructions+=2;goto B5550ea;
case 0x5550ec:c.instructions+=1;goto B5550ec;
case 0x5550f1:goto L5550f1;
case 0x5550f3:c.instructions+=6;goto B5550f3;
case 0x5550f6:c.instructions+=5;goto B5550f6;
case 0x5550fa:c.instructions+=4;goto B5550fa;
case 0x5550fc:c.instructions+=3;goto B5550fc;
case 0x5550fe:c.instructions+=2;goto B5550fe;
case 0x555102:c.instructions+=1;goto B555102;
case 0x555104:goto L555104;
case 0x555108:c.instructions+=4;goto B555108;
case 0x555109:c.instructions+=3;goto B555109;
case 0x55510a:c.instructions+=2;goto B55510a;
case 0x55510c:c.instructions+=1;goto B55510c;
case 0x555111:goto L555111;
case 0x555117:c.instructions+=4;goto B555117;
case 0x55511a:c.instructions+=3;goto B55511a;
case 0x55511d:c.instructions+=2;goto B55511d;
case 0x555123:c.instructions+=1;goto B555123;
case 0x555125:goto L555125;
case 0x555129:c.instructions+=5;goto B555129;
case 0x55512a:c.instructions+=4;goto B55512a;
case 0x55512b:c.instructions+=3;goto B55512b;
case 0x555132:c.instructions+=2;goto B555132;
case 0x555135:c.instructions+=1;goto B555135;
case 0x555140:goto L555140;
case 0x555146:c.instructions+=17;goto B555146;
case 0x555148:c.instructions+=16;goto B555148;
case 0x55514d:c.instructions+=15;goto B55514d;
case 0x55514e:c.instructions+=14;goto B55514e;
case 0x555152:c.instructions+=13;goto B555152;
case 0x555159:c.instructions+=12;goto B555159;
case 0x55515a:c.instructions+=11;goto B55515a;
case 0x55515b:c.instructions+=10;goto B55515b;
case 0x55515f:c.instructions+=9;goto B55515f;
case 0x555160:c.instructions+=8;goto B555160;
case 0x555162:c.instructions+=7;goto B555162;
case 0x555164:c.instructions+=6;goto B555164;
case 0x555166:c.instructions+=5;goto B555166;
case 0x555168:c.instructions+=4;goto B555168;
case 0x555169:c.instructions+=3;goto B555169;
case 0x55516d:c.instructions+=2;goto B55516d;
case 0x555170:c.instructions+=1;goto B555170;
case 0x555176:goto L555176;
case 0x555180:goto L555180;
case 0x555184:c.instructions+=3;goto B555184;
case 0x555187:c.instructions+=2;goto B555187;
case 0x55518c:c.instructions+=1;goto B55518c;
case 0x555192:goto L555192;
case 0x555198:goto L555198;
case 0x55519d:c.instructions+=1;goto B55519d;
case 0x5551a3:goto L5551a3;
case 0x5551a6:c.instructions+=1;goto B5551a6;
case 0x5551ac:goto L5551ac;
case 0x5551b1:c.instructions+=1;goto B5551b1;
case 0x5551b7:goto L5551b7;
case 0x5551ba:c.instructions+=14;goto B5551ba;
case 0x5551bd:c.instructions+=13;goto B5551bd;
case 0x5551c0:c.instructions+=12;goto B5551c0;
case 0x5551c3:c.instructions+=11;goto B5551c3;
case 0x5551c6:c.instructions+=10;goto B5551c6;
case 0x5551c9:c.instructions+=9;goto B5551c9;
case 0x5551cc:c.instructions+=8;goto B5551cc;
case 0x5551cf:c.instructions+=7;goto B5551cf;
case 0x5551d2:c.instructions+=6;goto B5551d2;
case 0x5551d5:c.instructions+=5;goto B5551d5;
case 0x5551d8:c.instructions+=4;goto B5551d8;
case 0x5551dc:c.instructions+=3;goto B5551dc;
case 0x5551df:c.instructions+=2;goto B5551df;
case 0x5551e6:c.instructions+=1;goto B5551e6;
case 0x5551ec:goto L5551ec;
case 0x5551ef:c.instructions+=7;goto B5551ef;
case 0x5551f2:c.instructions+=6;goto B5551f2;
case 0x5551f3:c.instructions+=5;goto B5551f3;
case 0x5551f6:c.instructions+=4;goto B5551f6;
case 0x5551f7:c.instructions+=3;goto B5551f7;
case 0x5551f8:c.instructions+=2;goto B5551f8;
case 0x5551fa:c.instructions+=1;goto B5551fa;
case 0x5551ff:goto L5551ff;
case 0x555201:c.instructions+=1;goto B555201;
case 0x555207:goto L555207;
case 0x555209:c.instructions+=7;goto B555209;
case 0x55520c:c.instructions+=6;goto B55520c;
case 0x555210:c.instructions+=5;goto B555210;
case 0x555213:c.instructions+=4;goto B555213;
case 0x555216:c.instructions+=3;goto B555216;
case 0x555219:c.instructions+=2;goto B555219;
case 0x55521f:c.instructions+=1;goto B55521f;
case 0x555221:goto L555221;
case 0x555223:c.instructions+=6;goto B555223;
case 0x555226:c.instructions+=5;goto B555226;
case 0x555229:c.instructions+=4;goto B555229;
case 0x55522b:c.instructions+=3;goto B55522b;
case 0x55522e:c.instructions+=2;goto B55522e;
case 0x555231:c.instructions+=1;goto B555231;
case 0x555234:goto L555234;
case 0x555236:c.instructions+=2;goto B555236;
case 0x55523a:c.instructions+=1;goto B55523a;
case 0x55523c:goto L55523c;
case 0x55523e:c.instructions+=2;goto B55523e;
case 0x555240:c.instructions+=1;goto B555240;
case 0x555243:goto L555243;
case 0x555245:goto L555245;
case 0x555247:c.instructions+=1;goto B555247;
case 0x55524c:goto L55524c;
case 0x55524f:c.instructions+=4;goto B55524f;
case 0x555253:c.instructions+=3;goto B555253;
case 0x555255:c.instructions+=2;goto B555255;
case 0x555259:c.instructions+=1;goto B555259;
case 0x55525b:goto L55525b;
case 0x55525d:c.instructions+=5;goto B55525d;
case 0x55525f:c.instructions+=4;goto B55525f;
case 0x555260:c.instructions+=3;goto B555260;
case 0x555261:c.instructions+=2;goto B555261;
case 0x555263:c.instructions+=1;goto B555263;
case 0x555268:goto L555268;
case 0x55526a:goto L55526a;
case 0x55526c:goto L55526c;
case 0x555274:goto L555274;
case 0x555277:c.instructions+=21;goto B555277;
case 0x555279:c.instructions+=20;goto B555279;
case 0x55527c:c.instructions+=19;goto B55527c;
case 0x55527f:c.instructions+=18;goto B55527f;
case 0x555282:c.instructions+=17;goto B555282;
case 0x555285:c.instructions+=16;goto B555285;
case 0x555288:c.instructions+=15;goto B555288;
case 0x55528b:c.instructions+=14;goto B55528b;
case 0x55528e:c.instructions+=13;goto B55528e;
case 0x555291:c.instructions+=12;goto B555291;
case 0x555294:c.instructions+=11;goto B555294;
case 0x555298:c.instructions+=10;goto B555298;
case 0x55529c:c.instructions+=9;goto B55529c;
case 0x55529f:c.instructions+=8;goto B55529f;
case 0x5552a2:c.instructions+=7;goto B5552a2;
case 0x5552a5:c.instructions+=6;goto B5552a5;
case 0x5552a8:c.instructions+=5;goto B5552a8;
case 0x5552ab:c.instructions+=4;goto B5552ab;
case 0x5552ae:c.instructions+=3;goto B5552ae;
case 0x5552b1:c.instructions+=2;goto B5552b1;
case 0x5552b3:c.instructions+=1;goto B5552b3;
case 0x5552b5:goto L5552b5;
case 0x5552b7:c.instructions+=2;goto B5552b7;
case 0x5552b9:c.instructions+=1;goto B5552b9;
case 0x5552bb:goto L5552bb;
case 0x5552be:c.instructions+=3;goto B5552be;
case 0x5552c1:c.instructions+=2;goto B5552c1;
case 0x5552c3:c.instructions+=1;goto B5552c3;
case 0x5552c5:goto L5552c5;
case 0x5552c8:c.instructions+=2;goto B5552c8;
case 0x5552ca:c.instructions+=1;goto B5552ca;
case 0x5552cc:goto L5552cc;
case 0x5552cf:c.instructions+=1;goto B5552cf;
case 0x5552d2:goto L5552d2;
case 0x5552d5:c.instructions+=2;goto B5552d5;
case 0x5552d7:c.instructions+=1;goto B5552d7;
case 0x5552d9:goto L5552d9;
case 0x5552dc:c.instructions+=2;goto B5552dc;
case 0x5552e3:c.instructions+=1;goto B5552e3;
case 0x5552e9:goto L5552e9;
case 0x5552eb:c.instructions+=5;goto B5552eb;
case 0x5552ee:c.instructions+=4;goto B5552ee;
case 0x5552f4:c.instructions+=3;goto B5552f4;
case 0x5552f7:c.instructions+=2;goto B5552f7;
case 0x5552fa:c.instructions+=1;goto B5552fa;
case 0x5552ff:goto L5552ff;
case 0x555303:c.instructions+=4;goto B555303;
case 0x555306:c.instructions+=3;goto B555306;
case 0x555308:c.instructions+=2;goto B555308;
case 0x55530a:c.instructions+=1;goto B55530a;
case 0x555310:goto L555310;
case 0x555313:goto L555313;
case 0x555316:c.instructions+=7;goto B555316;
case 0x555318:c.instructions+=6;goto B555318;
case 0x55531b:c.instructions+=5;goto B55531b;
case 0x55531e:c.instructions+=4;goto B55531e;
case 0x55531f:c.instructions+=3;goto B55531f;
case 0x555322:c.instructions+=2;goto B555322;
case 0x555324:c.instructions+=1;goto B555324;
case 0x555326:goto L555326;
case 0x555328:c.instructions+=1;goto B555328;
case 0x55532d:goto L55532d;
case 0x555330:c.instructions+=2;goto B555330;
case 0x555332:c.instructions+=1;goto B555332;
case 0x555334:goto L555334;
case 0x555337:c.instructions+=2;goto B555337;
case 0x55533a:c.instructions+=1;goto B55533a;
case 0x55533c:goto L55533c;
case 0x55533f:c.instructions+=3;goto B55533f;
case 0x555341:c.instructions+=2;goto B555341;
case 0x555342:c.instructions+=1;goto B555342;
case 0x555347:goto L555347;
case 0x55534a:goto L55534a;
case 0x55534d:c.instructions+=2;goto B55534d;
case 0x555350:c.instructions+=1;goto B555350;
case 0x555355:goto L555355;
case 0x555358:c.instructions+=3;goto B555358;
case 0x55535b:c.instructions+=2;goto B55535b;
case 0x55535e:c.instructions+=1;goto B55535e;
case 0x555360:goto L555360;
case 0x555365:c.instructions+=1;goto B555365;
case 0x555367:goto L555367;
case 0x55536c:c.instructions+=1;goto B55536c;
case 0x55536e:goto L55536e;
case 0x555371:c.instructions+=2;goto B555371;
case 0x555373:c.instructions+=1;goto B555373;
case 0x555375:goto L555375;
case 0x555378:c.instructions+=3;goto B555378;
case 0x555379:c.instructions+=2;goto B555379;
case 0x55537c:c.instructions+=1;goto B55537c;
case 0x55537e:goto L55537e;
case 0x555385:c.instructions+=1;goto B555385;
case 0x55538c:goto L55538c;
case 0x55538d:c.instructions+=2;goto B55538d;
case 0x55538f:c.instructions+=1;goto B55538f;
case 0x555394:goto L555394;
case 0x555396:goto L555396;
case 0x555397:c.instructions+=2;goto B555397;
case 0x555399:c.instructions+=1;goto B555399;
case 0x55539e:goto L55539e;
case 0x5553a0:goto L5553a0;
case 0x5553a1:c.instructions+=2;goto B5553a1;
case 0x5553a3:c.instructions+=1;goto B5553a3;
case 0x5553a8:goto L5553a8;
case 0x5553aa:goto L5553aa;
case 0x5553af:c.instructions+=1;goto B5553af;
case 0x5553b1:goto L5553b1;
case 0x5553b4:c.instructions+=2;goto B5553b4;
case 0x5553b7:c.instructions+=1;goto B5553b7;
case 0x5553b9:goto L5553b9;
case 0x5553bc:c.instructions+=3;goto B5553bc;
case 0x5553bd:c.instructions+=2;goto B5553bd;
case 0x5553bf:c.instructions+=1;goto B5553bf;
case 0x5553c4:goto L5553c4;
case 0x5553c7:c.instructions+=1;goto B5553c7;
case 0x5553c9:goto L5553c9;
case 0x5553cc:c.instructions+=1;goto B5553cc;
case 0x5553ce:goto L5553ce;
case 0x5553d1:c.instructions+=3;goto B5553d1;
case 0x5553d4:c.instructions+=2;goto B5553d4;
case 0x5553d5:c.instructions+=1;goto B5553d5;
case 0x5553da:goto L5553da;
case 0x5553de:c.instructions+=4;goto B5553de;
case 0x5553e2:c.instructions+=3;goto B5553e2;
case 0x5553e6:c.instructions+=2;goto B5553e6;
case 0x5553e8:c.instructions+=1;goto B5553e8;
case 0x5553ee:goto L5553ee;
case 0x5553f0:goto L5553f0;
case 0x5553f4:c.instructions+=7;goto B5553f4;
case 0x5553f5:c.instructions+=6;goto B5553f5;
case 0x5553f6:c.instructions+=5;goto B5553f6;
case 0x5553f7:c.instructions+=4;goto B5553f7;
case 0x5553fe:c.instructions+=3;goto B5553fe;
case 0x5553ff:c.instructions+=2;goto B5553ff;
case 0x555402:c.instructions+=1;goto B555402;
case 0x555405:goto L555405;
case 0x555408:c.instructions+=2;goto B555408;
case 0x55540a:c.instructions+=1;goto B55540a;
case 0x55540c:goto L55540c;
case 0x55540e:c.instructions+=2;goto B55540e;
case 0x555410:c.instructions+=1;goto B555410;
case 0x555412:goto L555412;
case 0x555415:c.instructions+=2;goto B555415;
case 0x555417:c.instructions+=1;goto B555417;
case 0x555440:goto L555440;
case 0x555442:c.instructions+=7;goto B555442;
case 0x555447:c.instructions+=6;goto B555447;
case 0x55544d:c.instructions+=5;goto B55544d;
case 0x55544e:c.instructions+=4;goto B55544e;
case 0x555455:c.instructions+=3;goto B555455;
case 0x555456:c.instructions+=2;goto B555456;
case 0x55545b:c.instructions+=1;goto B55545b;
case 0x555460:goto L555460;
case 0x555463:c.instructions+=4;goto B555463;
case 0x555467:c.instructions+=3;goto B555467;
case 0x555469:c.instructions+=2;goto B555469;
case 0x555471:c.instructions+=1;goto B555471;
case 0x555473:goto L555473;
case 0x555477:c.instructions+=3;goto B555477;
case 0x555478:c.instructions+=2;goto B555478;
case 0x55547a:c.instructions+=1;goto B55547a;
case 0x55547f:goto L55547f;
case 0x555483:c.instructions+=3;goto B555483;
case 0x55548a:c.instructions+=2;goto B55548a;
case 0x55548d:c.instructions+=1;goto B55548d;
case 0x55548e:goto L55548e;
case 0x555492:c.instructions+=4;goto B555492;
case 0x555494:c.instructions+=3;goto B555494;
case 0x55549b:c.instructions+=2;goto B55549b;
case 0x55549e:c.instructions+=1;goto B55549e;
case 0x5554a0:goto L5554a0;
case 0x5554a3:c.instructions+=11;goto B5554a3;
case 0x5554a4:c.instructions+=10;goto B5554a4;
case 0x5554a5:c.instructions+=9;goto B5554a5;
case 0x5554a6:c.instructions+=8;goto B5554a6;
case 0x5554a8:c.instructions+=7;goto B5554a8;
case 0x5554ab:c.instructions+=6;goto B5554ab;
case 0x5554ae:c.instructions+=5;goto B5554ae;
case 0x5554b1:c.instructions+=4;goto B5554b1;
case 0x5554b5:c.instructions+=3;goto B5554b5;
case 0x5554b8:c.instructions+=2;goto B5554b8;
case 0x5554be:c.instructions+=1;goto B5554be;
case 0x5554c0:goto L5554c0;
case 0x5554c2:c.instructions+=1;goto B5554c2;
case 0x5554c8:goto L5554c8;
case 0x5554cb:c.instructions+=3;goto B5554cb;
case 0x5554cf:c.instructions+=2;goto B5554cf;
case 0x5554d5:c.instructions+=1;goto B5554d5;
case 0x5554d7:goto L5554d7;
case 0x5554da:c.instructions+=7;goto B5554da;
case 0x5554db:c.instructions+=6;goto B5554db;
case 0x5554de:c.instructions+=5;goto B5554de;
case 0x5554e0:c.instructions+=4;goto B5554e0;
case 0x5554e4:c.instructions+=3;goto B5554e4;
case 0x5554e8:c.instructions+=2;goto B5554e8;
case 0x5554ec:c.instructions+=1;goto B5554ec;
case 0x5554f2:goto L5554f2;
case 0x5554f4:c.instructions+=1;goto B5554f4;
case 0x5554fa:goto L5554fa;
case 0x5554fc:c.instructions+=2;goto B5554fc;
case 0x555501:c.instructions+=1;goto B555501;
case 0x555503:goto L555503;
case 0x555505:c.instructions+=1;goto B555505;
case 0x55550b:goto L55550b;
case 0x555510:c.instructions+=1;goto B555510;
case 0x555512:goto L555512;
case 0x555514:c.instructions+=6;goto B555514;
case 0x555517:c.instructions+=5;goto B555517;
case 0x55551a:c.instructions+=4;goto B55551a;
case 0x555520:c.instructions+=3;goto B555520;
case 0x555526:c.instructions+=2;goto B555526;
case 0x555527:c.instructions+=1;goto B555527;
case 0x55552c:goto L55552c;
case 0x55552f:c.instructions+=3;goto B55552f;
case 0x555531:c.instructions+=2;goto B555531;
case 0x555537:c.instructions+=1;goto B555537;
case 0x555539:goto L555539;
case 0x555540:c.instructions+=2;goto B555540;
case 0x555541:c.instructions+=1;goto B555541;
case 0x555546:goto L555546;
case 0x555549:c.instructions+=1;goto B555549;
case 0x55554b:goto L55554b;
case 0x55554e:goto L55554e;
case 0x555551:c.instructions+=7;goto B555551;
case 0x555555:c.instructions+=6;goto B555555;
case 0x555559:c.instructions+=5;goto B555559;
case 0x55555d:c.instructions+=4;goto B55555d;
case 0x55555f:c.instructions+=3;goto B55555f;
case 0x555564:c.instructions+=2;goto B555564;
case 0x555568:c.instructions+=1;goto B555568;
case 0x55556a:goto L55556a;
case 0x55556c:c.instructions+=1;goto B55556c;
case 0x555572:goto L555572;
case 0x555574:goto L555574;
case 0x55557a:c.instructions+=1;goto B55557a;
case 0x555580:goto L555580;
case 0x555581:c.instructions+=5;goto B555581;
case 0x555582:c.instructions+=4;goto B555582;
case 0x555584:c.instructions+=3;goto B555584;
case 0x555585:c.instructions+=2;goto B555585;
case 0x555588:c.instructions+=1;goto B555588;
case 0x555589:goto L555589;
case 0x55558d:c.instructions+=1;goto B55558d;
case 0x555590:goto L555590;
case 0x555593:c.instructions+=7;goto B555593;
case 0x555595:c.instructions+=6;goto B555595;
case 0x555598:c.instructions+=5;goto B555598;
case 0x55559c:c.instructions+=4;goto B55559c;
case 0x55559e:c.instructions+=3;goto B55559e;
case 0x5555a1:c.instructions+=2;goto B5555a1;
case 0x5555a4:c.instructions+=1;goto B5555a4;
case 0x5555aa:goto L5555aa;
case 0x5555b0:goto L5555b0;
case 0x5555b2:c.instructions+=2;goto B5555b2;
case 0x5555b7:c.instructions+=1;goto B5555b7;
case 0x5555b9:goto L5555b9;
case 0x5555be:c.instructions+=1;goto B5555be;
case 0x5555c0:goto L5555c0;
case 0x5555c5:c.instructions+=1;goto B5555c5;
case 0x5555c7:goto L5555c7;
case 0x5555ca:c.instructions+=5;goto B5555ca;
case 0x5555cb:c.instructions+=4;goto B5555cb;
case 0x5555ce:c.instructions+=3;goto B5555ce;
case 0x5555cf:c.instructions+=2;goto B5555cf;
case 0x5555d1:c.instructions+=1;goto B5555d1;
case 0x5555d6:goto L5555d6;
case 0x5555d8:goto L5555d8;
case 0x5555db:c.instructions+=6;goto B5555db;
case 0x5555dd:c.instructions+=5;goto B5555dd;
case 0x5555de:c.instructions+=4;goto B5555de;
case 0x5555e1:c.instructions+=3;goto B5555e1;
case 0x5555e2:c.instructions+=2;goto B5555e2;
case 0x5555e4:c.instructions+=1;goto B5555e4;
case 0x5555e9:goto L5555e9;
case 0x5555eb:goto L5555eb;
case 0x5555ee:c.instructions+=5;goto B5555ee;
case 0x5555ef:c.instructions+=4;goto B5555ef;
case 0x5555f2:c.instructions+=3;goto B5555f2;
case 0x5555f3:c.instructions+=2;goto B5555f3;
case 0x5555f5:c.instructions+=1;goto B5555f5;
case 0x5555fa:goto L5555fa;
case 0x5555fc:c.instructions+=1;goto B5555fc;
case 0x555602:goto L555602;
case 0x555605:c.instructions+=3;goto B555605;
case 0x555609:c.instructions+=2;goto B555609;
case 0x55560b:c.instructions+=1;goto B55560b;
case 0x55560d:goto L55560d;
case 0x555610:c.instructions+=2;goto B555610;
case 0x555612:c.instructions+=1;goto B555612;
case 0x555618:goto L555618;
case 0x55561b:c.instructions+=2;goto B55561b;
case 0x55561e:c.instructions+=1;goto B55561e;
case 0x555620:goto L555620;
case 0x555625:goto L555625;
case 0x555627:goto L555627;
case 0x55562a:c.instructions+=1;goto B55562a;
case 0x55562c:goto L55562c;
case 0x555631:goto L555631;
case 0x555634:c.instructions+=3;goto B555634;
case 0x555637:c.instructions+=2;goto B555637;
case 0x555639:c.instructions+=1;goto B555639;
case 0x55563b:goto L55563b;
case 0x555640:goto L555640;
case 0x555643:c.instructions+=2;goto B555643;
case 0x555645:c.instructions+=1;goto B555645;
case 0x555647:goto L555647;
case 0x55564a:c.instructions+=3;goto B55564a;
case 0x55564d:c.instructions+=2;goto B55564d;
case 0x55564f:c.instructions+=1;goto B55564f;
case 0x555651:goto L555651;
case 0x555654:c.instructions+=1;goto B555654;
case 0x555656:goto L555656;
case 0x555659:c.instructions+=2;goto B555659;
case 0x55565b:c.instructions+=1;goto B55565b;
case 0x55565d:goto L55565d;
case 0x555660:goto L555660;
case 0x555663:c.instructions+=2;goto B555663;
case 0x555665:c.instructions+=1;goto B555665;
case 0x555667:goto L555667;
case 0x55566a:c.instructions+=3;goto B55566a;
case 0x55566d:c.instructions+=2;goto B55566d;
case 0x55566f:c.instructions+=1;goto B55566f;
case 0x555671:goto L555671;
case 0x555678:c.instructions+=1;goto B555678;
case 0x55567a:goto L55567a;
case 0x55567d:c.instructions+=2;goto B55567d;
case 0x55567f:c.instructions+=1;goto B55567f;
case 0x555681:goto L555681;
case 0x555683:c.instructions+=2;goto B555683;
case 0x555686:c.instructions+=1;goto B555686;
case 0x555688:goto L555688;
case 0x55568d:goto L55568d;
case 0x555694:c.instructions+=3;goto B555694;
case 0x555697:c.instructions+=2;goto B555697;
case 0x555699:c.instructions+=1;goto B555699;
case 0x55569b:goto L55569b;
case 0x55569e:c.instructions+=4;goto B55569e;
case 0x5556a0:c.instructions+=3;goto B5556a0;
case 0x5556a2:c.instructions+=2;goto B5556a2;
case 0x5556a6:c.instructions+=1;goto B5556a6;
case 0x5556a8:goto L5556a8;
case 0x5556ab:c.instructions+=6;goto B5556ab;
case 0x5556af:c.instructions+=5;goto B5556af;
case 0x5556b0:c.instructions+=4;goto B5556b0;
case 0x5556b2:c.instructions+=3;goto B5556b2;
case 0x5556b3:c.instructions+=2;goto B5556b3;
case 0x5556b4:c.instructions+=1;goto B5556b4;
case 0x5556b9:goto L5556b9;
case 0x5556bc:c.instructions+=6;goto B5556bc;
case 0x5556bf:c.instructions+=5;goto B5556bf;
case 0x5556c1:c.instructions+=4;goto B5556c1;
case 0x5556c4:c.instructions+=3;goto B5556c4;
case 0x5556c6:c.instructions+=2;goto B5556c6;
case 0x5556ca:c.instructions+=1;goto B5556ca;
case 0x5556cc:goto L5556cc;
case 0x5556d0:goto L5556d0;
case 0x5556d3:c.instructions+=2;goto B5556d3;
case 0x5556d5:c.instructions+=1;goto B5556d5;
case 0x5556d7:goto L5556d7;
case 0x5556da:c.instructions+=2;goto B5556da;
case 0x5556db:c.instructions+=1;goto B5556db;
case 0x5556e0:goto L5556e0;
case 0x5556e2:goto L5556e2;
case 0x5556e5:c.instructions+=3;goto B5556e5;
case 0x5556e7:c.instructions+=2;goto B5556e7;
case 0x5556e8:c.instructions+=1;goto B5556e8;
case 0x5556ed:goto L5556ed;
case 0x5556f0:c.instructions+=4;goto B5556f0;
case 0x5556f4:c.instructions+=3;goto B5556f4;
case 0x5556f8:c.instructions+=2;goto B5556f8;
case 0x5556fc:c.instructions+=1;goto B5556fc;
case 0x555702:goto L555702;
case 0x555703:c.instructions+=6;goto B555703;
case 0x555704:c.instructions+=5;goto B555704;
case 0x555705:c.instructions+=4;goto B555705;
case 0x555707:c.instructions+=3;goto B555707;
case 0x555708:c.instructions+=2;goto B555708;
case 0x55570b:c.instructions+=1;goto B55570b;
case 0x55570c:goto L55570c;
case 0x55570d:c.instructions+=6;goto B55570d;
case 0x55570e:c.instructions+=5;goto B55570e;
case 0x55570f:c.instructions+=4;goto B55570f;
case 0x555711:c.instructions+=3;goto B555711;
case 0x555712:c.instructions+=2;goto B555712;
case 0x555715:c.instructions+=1;goto B555715;
case 0x555720:goto L555720;
case 0x555724:c.instructions+=29;goto B555724;
case 0x555728:c.instructions+=28;goto B555728;
case 0x555729:c.instructions+=27;goto B555729;
case 0x55572a:c.instructions+=26;goto B55572a;
case 0x55572c:c.instructions+=25;goto B55572c;
case 0x555730:c.instructions+=24;goto B555730;
case 0x555733:c.instructions+=23;goto B555733;
case 0x555737:c.instructions+=22;goto B555737;
case 0x555738:c.instructions+=21;goto B555738;
case 0x55573a:c.instructions+=20;goto B55573a;
case 0x55573d:c.instructions+=19;goto B55573d;
case 0x555741:c.instructions+=18;goto B555741;
case 0x555744:c.instructions+=17;goto B555744;
case 0x555748:c.instructions+=16;goto B555748;
case 0x55574b:c.instructions+=15;goto B55574b;
case 0x55574d:c.instructions+=14;goto B55574d;
case 0x55574f:c.instructions+=13;goto B55574f;
case 0x555751:c.instructions+=12;goto B555751;
case 0x555754:c.instructions+=11;goto B555754;
case 0x555757:c.instructions+=10;goto B555757;
case 0x55575a:c.instructions+=9;goto B55575a;
case 0x55575d:c.instructions+=8;goto B55575d;
case 0x555760:c.instructions+=7;goto B555760;
case 0x555763:c.instructions+=6;goto B555763;
case 0x555766:c.instructions+=5;goto B555766;
case 0x555769:c.instructions+=4;goto B555769;
case 0x55576c:c.instructions+=3;goto B55576c;
case 0x55576f:c.instructions+=2;goto B55576f;
case 0x555772:c.instructions+=1;goto B555772;
case 0x555777:goto L555777;
case 0x555779:c.instructions+=1;goto B555779;
case 0x55577b:goto L55577b;
case 0x55577d:c.instructions+=1;goto B55577d;
case 0x555782:goto L555782;
case 0x555784:c.instructions+=1;goto B555784;
case 0x555786:goto L555786;
case 0x55578b:goto L55578b;
case 0x55578d:c.instructions+=1;goto B55578d;
case 0x55578f:goto L55578f;
case 0x555791:c.instructions+=1;goto B555791;
case 0x555796:goto L555796;
case 0x555798:c.instructions+=1;goto B555798;
case 0x55579a:goto L55579a;
case 0x55579c:c.instructions+=1;goto B55579c;
case 0x5557a1:goto L5557a1;
case 0x5557a3:c.instructions+=1;goto B5557a3;
case 0x5557a5:goto L5557a5;
case 0x5557a7:c.instructions+=1;goto B5557a7;
case 0x5557ac:goto L5557ac;
case 0x5557ae:c.instructions+=1;goto B5557ae;
case 0x5557b0:goto L5557b0;
case 0x5557b2:c.instructions+=1;goto B5557b2;
case 0x5557b7:goto L5557b7;
case 0x5557b9:c.instructions+=1;goto B5557b9;
case 0x5557bb:goto L5557bb;
case 0x5557bd:c.instructions+=1;goto B5557bd;
case 0x5557c2:goto L5557c2;
case 0x5557c4:c.instructions+=1;goto B5557c4;
case 0x5557c6:goto L5557c6;
case 0x5557c9:c.instructions+=6;goto B5557c9;
case 0x5557cb:c.instructions+=5;goto B5557cb;
case 0x5557ce:c.instructions+=4;goto B5557ce;
case 0x5557d1:c.instructions+=3;goto B5557d1;
case 0x5557d3:c.instructions+=2;goto B5557d3;
case 0x5557d4:c.instructions+=1;goto B5557d4;
case 0x5557d9:goto L5557d9;
case 0x5557db:c.instructions+=1;goto B5557db;
case 0x5557dd:goto L5557dd;
case 0x5557df:c.instructions+=1;goto B5557df;
case 0x5557e1:goto L5557e1;
case 0x5557e3:c.instructions+=2;goto B5557e3;
case 0x5557e5:c.instructions+=1;goto B5557e5;
case 0x5557e7:goto L5557e7;
case 0x5557e9:c.instructions+=2;goto B5557e9;
case 0x5557eb:c.instructions+=1;goto B5557eb;
case 0x5557ed:goto L5557ed;
case 0x5557ef:c.instructions+=5;goto B5557ef;
case 0x5557f0:c.instructions+=4;goto B5557f0;
case 0x5557f1:c.instructions+=3;goto B5557f1;
case 0x5557f3:c.instructions+=2;goto B5557f3;
case 0x5557f4:c.instructions+=1;goto B5557f4;
case 0x555800:goto L555800;
case 0x555803:c.instructions+=27;goto B555803;
case 0x555805:c.instructions+=26;goto B555805;
case 0x555809:c.instructions+=25;goto B555809;
case 0x55580d:c.instructions+=24;goto B55580d;
case 0x555811:c.instructions+=23;goto B555811;
case 0x555815:c.instructions+=22;goto B555815;
case 0x555819:c.instructions+=21;goto B555819;
case 0x55581d:c.instructions+=20;goto B55581d;
case 0x555821:c.instructions+=19;goto B555821;
case 0x555825:c.instructions+=18;goto B555825;
case 0x555829:c.instructions+=17;goto B555829;
case 0x55582d:c.instructions+=16;goto B55582d;
case 0x555831:c.instructions+=15;goto B555831;
case 0x555835:c.instructions+=14;goto B555835;
case 0x555836:c.instructions+=13;goto B555836;
case 0x555838:c.instructions+=12;goto B555838;
case 0x55583b:c.instructions+=11;goto B55583b;
case 0x55583d:c.instructions+=10;goto B55583d;
case 0x555840:c.instructions+=9;goto B555840;
case 0x555841:c.instructions+=8;goto B555841;
case 0x555845:c.instructions+=7;goto B555845;
case 0x555846:c.instructions+=6;goto B555846;
case 0x555847:c.instructions+=5;goto B555847;
case 0x55584d:c.instructions+=4;goto B55584d;
case 0x55584e:c.instructions+=3;goto B55584e;
case 0x55584f:c.instructions+=2;goto B55584f;
case 0x555853:c.instructions+=1;goto B555853;
case 0x555858:goto L555858;
case 0x55585b:c.instructions+=1;goto B55585b;
case 0x555860:goto L555860;
case 0x555862:c.instructions+=17;goto B555862;
case 0x555868:c.instructions+=16;goto B555868;
case 0x55586d:c.instructions+=15;goto B55586d;
case 0x55586e:c.instructions+=14;goto B55586e;
case 0x555875:c.instructions+=13;goto B555875;
case 0x555878:c.instructions+=12;goto B555878;
case 0x555879:c.instructions+=11;goto B555879;
case 0x55587a:c.instructions+=10;goto B55587a;
case 0x55587e:c.instructions+=9;goto B55587e;
case 0x55587f:c.instructions+=8;goto B55587f;
case 0x555880:c.instructions+=7;goto B555880;
case 0x555882:c.instructions+=6;goto B555882;
case 0x555888:c.instructions+=5;goto B555888;
case 0x55588e:c.instructions+=4;goto B55588e;
case 0x55588f:c.instructions+=3;goto B55588f;
case 0x555890:c.instructions+=2;goto B555890;
case 0x555892:c.instructions+=1;goto B555892;
case 0x555897:goto L555897;
case 0x555899:c.instructions+=2;goto B555899;
case 0x55589b:c.instructions+=1;goto B55589b;
case 0x55589d:goto L55589d;
case 0x55589f:c.instructions+=1;goto B55589f;
case 0x5558a2:goto L5558a2;
case 0x5558a4:c.instructions+=3;goto B5558a4;
case 0x5558a5:c.instructions+=2;goto B5558a5;
case 0x5558a7:c.instructions+=1;goto B5558a7;
case 0x5558a9:goto L5558a9;
case 0x5558ab:c.instructions+=6;goto B5558ab;
case 0x5558ad:c.instructions+=5;goto B5558ad;
case 0x5558b0:c.instructions+=4;goto B5558b0;
case 0x5558b4:c.instructions+=3;goto B5558b4;
case 0x5558b6:c.instructions+=2;goto B5558b6;
case 0x5558b8:c.instructions+=1;goto B5558b8;
case 0x5558ba:goto L5558ba;
case 0x5558c0:goto L5558c0;
case 0x5558c2:c.instructions+=1;goto B5558c2;
case 0x5558c4:goto L5558c4;
case 0x5558c6:c.instructions+=1;goto B5558c6;
case 0x5558c8:goto L5558c8;
case 0x5558cb:c.instructions+=4;goto B5558cb;
case 0x5558cc:c.instructions+=3;goto B5558cc;
case 0x5558ce:c.instructions+=2;goto B5558ce;
case 0x5558d0:c.instructions+=1;goto B5558d0;
case 0x5558d2:goto L5558d2;
case 0x5558d4:goto L5558d4;
case 0x5558d6:goto L5558d6;
case 0x5558d7:goto L5558d7;
case 0x5558da:c.instructions+=4;goto B5558da;
case 0x5558db:c.instructions+=3;goto B5558db;
case 0x5558dc:c.instructions+=2;goto B5558dc;
case 0x5558de:c.instructions+=1;goto B5558de;
case 0x5558e3:goto L5558e3;
case 0x5558e5:c.instructions+=2;goto B5558e5;
case 0x5558e7:c.instructions+=1;goto B5558e7;
case 0x5558ed:goto L5558ed;
case 0x5558f5:c.instructions+=6;goto B5558f5;
case 0x5558f9:c.instructions+=5;goto B5558f9;
case 0x5558fa:c.instructions+=4;goto B5558fa;
case 0x5558fc:c.instructions+=3;goto B5558fc;
case 0x555904:c.instructions+=2;goto B555904;
case 0x555908:c.instructions+=1;goto B555908;
case 0x55590d:goto L55590d;
case 0x55590e:c.instructions+=2;goto B55590e;
case 0x555910:c.instructions+=1;goto B555910;
case 0x555915:goto L555915;
case 0x55591d:c.instructions+=1;goto B55591d;
case 0x555925:goto L555925;
case 0x555929:c.instructions+=11;goto B555929;
case 0x55592e:c.instructions+=10;goto B55592e;
case 0x555931:c.instructions+=9;goto B555931;
case 0x555934:c.instructions+=8;goto B555934;
case 0x555937:c.instructions+=7;goto B555937;
case 0x55593a:c.instructions+=6;goto B55593a;
case 0x55593d:c.instructions+=5;goto B55593d;
case 0x55593f:c.instructions+=4;goto B55593f;
case 0x555942:c.instructions+=3;goto B555942;
case 0x555948:c.instructions+=2;goto B555948;
case 0x55594a:c.instructions+=1;goto B55594a;
case 0x55594c:goto L55594c;
case 0x55594e:c.instructions+=2;goto B55594e;
case 0x55594f:c.instructions+=1;goto B55594f;
case 0x555952:goto L555952;
case 0x555953:c.instructions+=2;goto B555953;
case 0x555959:c.instructions+=1;goto B555959;
case 0x55595e:goto L55595e;
case 0x555960:goto L555960;
case 0x555964:c.instructions+=7;goto B555964;
case 0x555965:c.instructions+=6;goto B555965;
case 0x555966:c.instructions+=5;goto B555966;
case 0x555967:c.instructions+=4;goto B555967;
case 0x555968:c.instructions+=3;goto B555968;
case 0x55596f:c.instructions+=2;goto B55596f;
case 0x555972:c.instructions+=1;goto B555972;
case 0x555975:goto L555975;
case 0x55597b:c.instructions+=7;goto B55597b;
case 0x55597d:c.instructions+=6;goto B55597d;
case 0x555981:c.instructions+=5;goto B555981;
case 0x555982:c.instructions+=4;goto B555982;
case 0x555986:c.instructions+=3;goto B555986;
case 0x555987:c.instructions+=2;goto B555987;
case 0x555988:c.instructions+=1;goto B555988;
case 0x55598a:goto L55598a;
case 0x55598c:c.instructions+=1;goto B55598c;
case 0x55598e:goto L55598e;
case 0x555990:c.instructions+=3;goto B555990;
case 0x555991:c.instructions+=2;goto B555991;
case 0x555993:c.instructions+=1;goto B555993;
case 0x555998:goto L555998;
case 0x55599a:c.instructions+=3;goto B55599a;
case 0x55599e:c.instructions+=2;goto B55599e;
case 0x5559a0:c.instructions+=1;goto B5559a0;
case 0x5559a2:goto L5559a2;
case 0x5559a6:c.instructions+=2;goto B5559a6;
case 0x5559a7:c.instructions+=1;goto B5559a7;
case 0x5559ac:goto L5559ac;
case 0x5559af:goto L5559af;
case 0x5559b1:c.instructions+=1;goto B5559b1;
case 0x5559b7:goto L5559b7;
case 0x5559b9:c.instructions+=1;goto B5559b9;
case 0x5559c0:goto L5559c0;
case 0x5559c3:c.instructions+=10;goto B5559c3;
case 0x5559c4:c.instructions+=9;goto B5559c4;
case 0x5559c5:c.instructions+=8;goto B5559c5;
case 0x5559c7:c.instructions+=7;goto B5559c7;
case 0x5559c9:c.instructions+=6;goto B5559c9;
case 0x5559ca:c.instructions+=5;goto B5559ca;
case 0x5559ce:c.instructions+=4;goto B5559ce;
case 0x5559d2:c.instructions+=3;goto B5559d2;
case 0x5559d6:c.instructions+=2;goto B5559d6;
case 0x5559d7:c.instructions+=1;goto B5559d7;
case 0x5559e0:goto L5559e0;
case 0x5559e6:c.instructions+=2;goto B5559e6;
case 0x5559e8:c.instructions+=1;goto B5559e8;
case 0x5559ee:goto L5559ee;
case 0x5559f1:c.instructions+=3;goto B5559f1;
case 0x5559f7:c.instructions+=2;goto B5559f7;
case 0x5559fd:c.instructions+=1;goto B5559fd;
case 0x5559ff:goto L5559ff;
case 0x555a02:c.instructions+=1;goto B555a02;
case 0x555a08:goto L555a08;
case 0x555a0b:c.instructions+=2;goto B555a0b;
case 0x555a0d:c.instructions+=1;goto B555a0d;
case 0x555a0f:goto L555a0f;
case 0x555a12:c.instructions+=1;goto B555a12;
case 0x555a15:goto L555a15;
case 0x555a18:c.instructions+=2;goto B555a18;
case 0x555a1a:c.instructions+=1;goto B555a1a;
case 0x555a1c:goto L555a1c;
case 0x555a1f:c.instructions+=1;goto B555a1f;
case 0x555a22:goto L555a22;
case 0x555a27:c.instructions+=6;goto B555a27;
case 0x555a2a:c.instructions+=5;goto B555a2a;
case 0x555a2d:c.instructions+=4;goto B555a2d;
case 0x555a33:c.instructions+=3;goto B555a33;
case 0x555a36:c.instructions+=2;goto B555a36;
case 0x555a38:c.instructions+=1;goto B555a38;
case 0x555a3a:goto L555a3a;
case 0x555a3d:c.instructions+=2;goto B555a3d;
case 0x555a41:c.instructions+=1;goto B555a41;
case 0x555a43:goto L555a43;
case 0x555a4b:goto L555a4b;
case 0x555a4f:c.instructions+=1;goto B555a4f;
case 0x555a55:goto L555a55;
case 0x555a59:c.instructions+=2;goto B555a59;
case 0x555a5b:c.instructions+=1;goto B555a5b;
case 0x555a61:goto L555a61;
case 0x555a64:c.instructions+=2;goto B555a64;
case 0x555a66:c.instructions+=1;goto B555a66;
case 0x555a68:goto L555a68;
case 0x555a6e:c.instructions+=3;goto B555a6e;
case 0x555a70:c.instructions+=2;goto B555a70;
case 0x555a72:c.instructions+=1;goto B555a72;
case 0x555a74:goto L555a74;
case 0x555a76:c.instructions+=1;goto B555a76;
case 0x555a78:goto L555a78;
case 0x555a7a:c.instructions+=1;goto B555a7a;
case 0x555a7c:goto L555a7c;
case 0x555a7e:c.instructions+=1;goto B555a7e;
case 0x555a80:goto L555a80;
case 0x555a83:goto L555a83;
case 0x555a85:c.instructions+=1;goto B555a85;
case 0x555a87:goto L555a87;
case 0x555a89:c.instructions+=1;goto B555a89;
case 0x555a8b:goto L555a8b;
case 0x555a90:c.instructions+=1;goto B555a90;
case 0x555a95:goto L555a95;
case 0x555a98:c.instructions+=2;goto B555a98;
case 0x555a9b:c.instructions+=1;goto B555a9b;
case 0x555aa2:goto L555aa2;
case 0x555aa6:c.instructions+=1;goto B555aa6;
case 0x555aa8:goto L555aa8;
case 0x555aae:c.instructions+=4;goto B555aae;
case 0x555ab0:c.instructions+=3;goto B555ab0;
case 0x555ab3:c.instructions+=2;goto B555ab3;
case 0x555ab6:c.instructions+=1;goto B555ab6;
case 0x555ab8:goto L555ab8;
case 0x555abb:c.instructions+=1;goto B555abb;
case 0x555abd:goto L555abd;
case 0x555ac0:goto L555ac0;
case 0x555ac3:c.instructions+=2;goto B555ac3;
case 0x555ac5:c.instructions+=1;goto B555ac5;
case 0x555ac7:goto L555ac7;
case 0x555ac9:goto L555ac9;
case 0x555acc:c.instructions+=3;goto B555acc;
case 0x555acf:c.instructions+=2;goto B555acf;
case 0x555ad3:c.instructions+=1;goto B555ad3;
case 0x555ad7:goto L555ad7;
case 0x555ada:c.instructions+=3;goto B555ada;
case 0x555add:c.instructions+=2;goto B555add;
case 0x555adf:c.instructions+=1;goto B555adf;
case 0x555ae1:goto L555ae1;
case 0x555ae4:c.instructions+=5;goto B555ae4;
case 0x555ae7:c.instructions+=4;goto B555ae7;
case 0x555aea:c.instructions+=3;goto B555aea;
case 0x555aed:c.instructions+=2;goto B555aed;
case 0x555af0:c.instructions+=1;goto B555af0;
case 0x555af3:goto L555af3;
case 0x555af7:c.instructions+=1;goto B555af7;
case 0x555af9:goto L555af9;
case 0x555aff:c.instructions+=2;goto B555aff;
case 0x555b01:c.instructions+=1;goto B555b01;
case 0x555b03:goto L555b03;
case 0x555b06:c.instructions+=4;goto B555b06;
case 0x555b09:c.instructions+=3;goto B555b09;
case 0x555b0c:c.instructions+=2;goto B555b0c;
case 0x555b0e:c.instructions+=1;goto B555b0e;
case 0x555b10:goto L555b10;
case 0x555b13:c.instructions+=3;goto B555b13;
case 0x555b14:c.instructions+=2;goto B555b14;
case 0x555b16:c.instructions+=1;goto B555b16;
case 0x555b1b:goto L555b1b;
case 0x555b1f:c.instructions+=3;goto B555b1f;
case 0x555b23:c.instructions+=2;goto B555b23;
case 0x555b24:c.instructions+=1;goto B555b24;
case 0x555b28:goto L555b28;
case 0x555b2c:c.instructions+=1;goto B555b2c;
case 0x555b32:goto L555b32;
case 0x555b38:c.instructions+=5;goto B555b38;
case 0x555b3b:c.instructions+=4;goto B555b3b;
case 0x555b3e:c.instructions+=3;goto B555b3e;
case 0x555b41:c.instructions+=2;goto B555b41;
case 0x555b43:c.instructions+=1;goto B555b43;
case 0x555b49:goto L555b49;
case 0x555b50:goto L555b50;
case 0x555b53:c.instructions+=3;goto B555b53;
case 0x555b54:c.instructions+=2;goto B555b54;
case 0x555b55:c.instructions+=1;goto B555b55;
case 0x555b5a:goto L555b5a;
case 0x555b5d:c.instructions+=2;goto B555b5d;
case 0x555b5f:c.instructions+=1;goto B555b5f;
case 0x555b61:goto L555b61;
case 0x555b63:c.instructions+=2;goto B555b63;
case 0x555b65:c.instructions+=1;goto B555b65;
case 0x555b67:goto L555b67;
case 0x555b6c:goto L555b6c;
case 0x555b70:c.instructions+=11;goto B555b70;
case 0x555b73:c.instructions+=10;goto B555b73;
case 0x555b76:c.instructions+=9;goto B555b76;
case 0x555b7a:c.instructions+=8;goto B555b7a;
case 0x555b7c:c.instructions+=7;goto B555b7c;
case 0x555b7e:c.instructions+=6;goto B555b7e;
case 0x555b80:c.instructions+=5;goto B555b80;
case 0x555b81:c.instructions+=4;goto B555b81;
case 0x555b83:c.instructions+=3;goto B555b83;
case 0x555b84:c.instructions+=2;goto B555b84;
case 0x555b85:c.instructions+=1;goto B555b85;
case 0x555b8a:goto L555b8a;
case 0x555b8c:c.instructions+=1;goto B555b8c;
case 0x555b8e:goto L555b8e;
case 0x555b91:c.instructions+=2;goto B555b91;
case 0x555b94:c.instructions+=1;goto B555b94;
case 0x555b96:goto L555b96;
case 0x555b98:c.instructions+=1;goto B555b98;
case 0x555b9a:goto L555b9a;
case 0x555b9d:c.instructions+=9;goto B555b9d;
case 0x555ba0:c.instructions+=8;goto B555ba0;
case 0x555ba3:c.instructions+=7;goto B555ba3;
case 0x555ba6:c.instructions+=6;goto B555ba6;
case 0x555ba9:c.instructions+=5;goto B555ba9;
case 0x555bab:c.instructions+=4;goto B555bab;
case 0x555bad:c.instructions+=3;goto B555bad;
case 0x555bb0:c.instructions+=2;goto B555bb0;
case 0x555bb3:c.instructions+=1;goto B555bb3;
case 0x555bb5:goto L555bb5;
case 0x555bb8:c.instructions+=1;goto B555bb8;
case 0x555bba:goto L555bba;
case 0x555bbe:c.instructions+=4;goto B555bbe;
case 0x555bc1:c.instructions+=3;goto B555bc1;
case 0x555bc7:c.instructions+=2;goto B555bc7;
case 0x555bc9:c.instructions+=1;goto B555bc9;
case 0x555bcb:goto L555bcb;
case 0x555bd0:goto L555bd0;
case 0x555bd4:c.instructions+=2;goto B555bd4;
case 0x555bd7:c.instructions+=1;goto B555bd7;
case 0x555bd9:goto L555bd9;
case 0x555bdc:goto L555bdc;
case 0x555bdf:c.instructions+=2;goto B555bdf;
case 0x555be1:c.instructions+=1;goto B555be1;
case 0x555be3:goto L555be3;
case 0x555be7:c.instructions+=1;goto B555be7;
case 0x555be9:goto L555be9;
case 0x555bed:c.instructions+=3;goto B555bed;
case 0x555bf3:c.instructions+=2;goto B555bf3;
case 0x555bf5:c.instructions+=1;goto B555bf5;
case 0x555bf7:goto L555bf7;
case 0x555bf9:c.instructions+=1;goto B555bf9;
case 0x555bfb:goto L555bfb;
case 0x555bfe:c.instructions+=4;goto B555bfe;
case 0x555c01:c.instructions+=3;goto B555c01;
case 0x555c03:c.instructions+=2;goto B555c03;
case 0x555c05:c.instructions+=1;goto B555c05;
case 0x555c08:goto L555c08;
case 0x555c0b:c.instructions+=2;goto B555c0b;
case 0x555c0d:c.instructions+=1;goto B555c0d;
case 0x555c0f:goto L555c0f;
case 0x555c13:goto L555c13;
case 0x555c17:c.instructions+=1;goto B555c17;
case 0x555c19:goto L555c19;
case 0x555c1c:c.instructions+=3;goto B555c1c;
case 0x555c1f:c.instructions+=2;goto B555c1f;
case 0x555c21:c.instructions+=1;goto B555c21;
case 0x555c23:goto L555c23;
case 0x555c26:c.instructions+=24;goto B555c26;
case 0x555c29:c.instructions+=23;goto B555c29;
case 0x555c2b:c.instructions+=22;goto B555c2b;
case 0x555c2d:c.instructions+=21;goto B555c2d;
case 0x555c2f:c.instructions+=20;goto B555c2f;
case 0x555c31:c.instructions+=19;goto B555c31;
case 0x555c33:c.instructions+=18;goto B555c33;
case 0x555c36:c.instructions+=17;goto B555c36;
case 0x555c39:c.instructions+=16;goto B555c39;
case 0x555c3c:c.instructions+=15;goto B555c3c;
case 0x555c3f:c.instructions+=14;goto B555c3f;
case 0x555c42:c.instructions+=13;goto B555c42;
case 0x555c44:c.instructions+=12;goto B555c44;
case 0x555c47:c.instructions+=11;goto B555c47;
case 0x555c4a:c.instructions+=10;goto B555c4a;
case 0x555c4d:c.instructions+=9;goto B555c4d;
case 0x555c50:c.instructions+=8;goto B555c50;
case 0x555c53:c.instructions+=7;goto B555c53;
case 0x555c54:c.instructions+=6;goto B555c54;
case 0x555c56:c.instructions+=5;goto B555c56;
case 0x555c57:c.instructions+=4;goto B555c57;
case 0x555c5b:c.instructions+=3;goto B555c5b;
case 0x555c5d:c.instructions+=2;goto B555c5d;
case 0x555c62:c.instructions+=1;goto B555c62;
case 0x555c67:goto L555c67;
case 0x555c6b:goto L555c6b;
case 0x555c6f:c.instructions+=1;goto B555c6f;
case 0x555c71:goto L555c71;
case 0x555c77:c.instructions+=2;goto B555c77;
case 0x555c79:c.instructions+=1;goto B555c79;
case 0x555c7b:goto L555c7b;
case 0x555c7e:c.instructions+=1;goto B555c7e;
case 0x555c80:goto L555c80;
case 0x555c83:c.instructions+=1;goto B555c83;
case 0x555c85:goto L555c85;
case 0x555c88:c.instructions+=2;goto B555c88;
case 0x555c8a:c.instructions+=1;goto B555c8a;
case 0x555c8c:goto L555c8c;
case 0x555c8e:c.instructions+=3;goto B555c8e;
case 0x555c90:c.instructions+=2;goto B555c90;
case 0x555c92:c.instructions+=1;goto B555c92;
case 0x555c94:goto L555c94;
case 0x555c98:c.instructions+=1;goto B555c98;
case 0x555c9d:goto L555c9d;
case 0x555ca0:c.instructions+=24;goto B555ca0;
case 0x555ca3:c.instructions+=23;goto B555ca3;
case 0x555ca5:c.instructions+=22;goto B555ca5;
case 0x555ca7:c.instructions+=21;goto B555ca7;
case 0x555ca9:c.instructions+=20;goto B555ca9;
case 0x555cab:c.instructions+=19;goto B555cab;
case 0x555cad:c.instructions+=18;goto B555cad;
case 0x555cb0:c.instructions+=17;goto B555cb0;
case 0x555cb3:c.instructions+=16;goto B555cb3;
case 0x555cb6:c.instructions+=15;goto B555cb6;
case 0x555cb9:c.instructions+=14;goto B555cb9;
case 0x555cbc:c.instructions+=13;goto B555cbc;
case 0x555cbe:c.instructions+=12;goto B555cbe;
case 0x555cc1:c.instructions+=11;goto B555cc1;
case 0x555cc4:c.instructions+=10;goto B555cc4;
case 0x555cc7:c.instructions+=9;goto B555cc7;
case 0x555cca:c.instructions+=8;goto B555cca;
case 0x555ccd:c.instructions+=7;goto B555ccd;
case 0x555cce:c.instructions+=6;goto B555cce;
case 0x555cd0:c.instructions+=5;goto B555cd0;
case 0x555cd1:c.instructions+=4;goto B555cd1;
case 0x555cd5:c.instructions+=3;goto B555cd5;
case 0x555cd7:c.instructions+=2;goto B555cd7;
case 0x555cdc:c.instructions+=1;goto B555cdc;
case 0x555ce1:goto L555ce1;
case 0x555ce3:c.instructions+=3;goto B555ce3;
case 0x555ce5:c.instructions+=2;goto B555ce5;
case 0x555ce7:c.instructions+=1;goto B555ce7;
case 0x555ce9:goto L555ce9;
case 0x555ced:c.instructions+=1;goto B555ced;
case 0x555cf2:goto L555cf2;
case 0x555cf3:c.instructions+=5;goto B555cf3;
case 0x555cf4:c.instructions+=4;goto B555cf4;
case 0x555cf5:c.instructions+=3;goto B555cf5;
case 0x555cf6:c.instructions+=2;goto B555cf6;
case 0x555cf9:c.instructions+=1;goto B555cf9;
case 0x555d00:goto L555d00;
case 0x555d05:c.instructions+=7;goto B555d05;
case 0x555d06:c.instructions+=6;goto B555d06;
case 0x555d07:c.instructions+=5;goto B555d07;
case 0x555d08:c.instructions+=4;goto B555d08;
case 0x555d09:c.instructions+=3;goto B555d09;
case 0x555d0a:c.instructions+=2;goto B555d0a;
case 0x555d0c:c.instructions+=1;goto B555d0c;
case 0x555d11:goto L555d11;
case 0x555d13:c.instructions+=3;goto B555d13;
case 0x555d16:c.instructions+=2;goto B555d16;
case 0x555d18:c.instructions+=1;goto B555d18;
case 0x555d1a:goto L555d1a;
case 0x555d1e:c.instructions+=7;goto B555d1e;
case 0x555d21:c.instructions+=6;goto B555d21;
case 0x555d24:c.instructions+=5;goto B555d24;
case 0x555d27:c.instructions+=4;goto B555d27;
case 0x555d2a:c.instructions+=3;goto B555d2a;
case 0x555d2d:c.instructions+=2;goto B555d2d;
case 0x555d2f:c.instructions+=1;goto B555d2f;
case 0x555d31:goto L555d31;
case 0x555d33:goto L555d33;
case 0x555d37:c.instructions+=7;goto B555d37;
case 0x555d3b:c.instructions+=6;goto B555d3b;
case 0x555d3f:c.instructions+=5;goto B555d3f;
case 0x555d42:c.instructions+=4;goto B555d42;
case 0x555d44:c.instructions+=3;goto B555d44;
case 0x555d47:c.instructions+=2;goto B555d47;
case 0x555d4a:c.instructions+=1;goto B555d4a;
case 0x555d4c:goto L555d4c;
case 0x555d4f:c.instructions+=2;goto B555d4f;
case 0x555d52:c.instructions+=1;goto B555d52;
case 0x555d57:goto L555d57;
case 0x555d5a:c.instructions+=1;goto B555d5a;
case 0x555d5c:goto L555d5c;
case 0x555d5d:c.instructions+=2;goto B555d5d;
case 0x555d5f:c.instructions+=1;goto B555d5f;
case 0x555d64:goto L555d64;
case 0x555d66:c.instructions+=1;goto B555d66;
case 0x555d68:goto L555d68;
case 0x555d6b:c.instructions+=5;goto B555d6b;
case 0x555d6d:c.instructions+=4;goto B555d6d;
case 0x555d70:c.instructions+=3;goto B555d70;
case 0x555d73:c.instructions+=2;goto B555d73;
case 0x555d75:c.instructions+=1;goto B555d75;
case 0x555d77:goto L555d77;
case 0x555d7a:c.instructions+=1;goto B555d7a;
case 0x555d7c:goto L555d7c;
case 0x555d7d:c.instructions+=2;goto B555d7d;
case 0x555d7f:c.instructions+=1;goto B555d7f;
case 0x555d84:goto L555d84;
case 0x555d86:c.instructions+=1;goto B555d86;
case 0x555d88:goto L555d88;
case 0x555d8a:c.instructions+=1;goto B555d8a;
case 0x555d8c:goto L555d8c;
case 0x555d8f:c.instructions+=6;goto B555d8f;
case 0x555d92:c.instructions+=5;goto B555d92;
case 0x555d94:c.instructions+=4;goto B555d94;
case 0x555d97:c.instructions+=3;goto B555d97;
case 0x555d9a:c.instructions+=2;goto B555d9a;
case 0x555d9c:c.instructions+=1;goto B555d9c;
case 0x555d9e:goto L555d9e;
case 0x555da1:c.instructions+=1;goto B555da1;
case 0x555da3:goto L555da3;
case 0x555da6:c.instructions+=3;goto B555da6;
case 0x555da9:c.instructions+=2;goto B555da9;
case 0x555dab:c.instructions+=1;goto B555dab;
case 0x555dad:goto L555dad;
case 0x555daf:c.instructions+=1;goto B555daf;
case 0x555db0:goto L555db0;
case 0x555db3:c.instructions+=1;goto B555db3;
case 0x555db5:goto L555db5;
case 0x555db7:goto L555db7;
case 0x555dba:c.instructions+=2;goto B555dba;
case 0x555dbc:c.instructions+=1;goto B555dbc;
case 0x555dbe:goto L555dbe;
case 0x555dc0:c.instructions+=2;goto B555dc0;
case 0x555dc4:c.instructions+=1;goto B555dc4;
case 0x555dc6:goto L555dc6;
case 0x555dc9:c.instructions+=4;goto B555dc9;
case 0x555dcb:c.instructions+=3;goto B555dcb;
case 0x555dce:c.instructions+=2;goto B555dce;
case 0x555dd0:c.instructions+=1;goto B555dd0;
case 0x555dd2:goto L555dd2;
case 0x555dd5:goto L555dd5;
case 0x555dd7:c.instructions+=2;goto B555dd7;
case 0x555dda:c.instructions+=1;goto B555dda;
case 0x555ddc:goto L555ddc;
case 0x555ddf:goto L555ddf;
case 0x555de2:c.instructions+=1;goto B555de2;
case 0x555de4:goto L555de4;
case 0x555deb:c.instructions+=3;goto B555deb;
case 0x555df1:c.instructions+=2;goto B555df1;
case 0x555df3:c.instructions+=1;goto B555df3;
case 0x555df5:goto L555df5;
case 0x555df8:c.instructions+=6;goto B555df8;
case 0x555dfc:c.instructions+=5;goto B555dfc;
case 0x555e00:c.instructions+=4;goto B555e00;
case 0x555e01:c.instructions+=3;goto B555e01;
case 0x555e02:c.instructions+=2;goto B555e02;
case 0x555e03:c.instructions+=1;goto B555e03;
case 0x555e05:goto L555e05;
case 0x555e0a:goto L555e0a;
case 0x555e0c:c.instructions+=1;goto B555e0c;
case 0x555e11:goto L555e11;
case 0x555e12:c.instructions+=4;goto B555e12;
case 0x555e13:c.instructions+=3;goto B555e13;
case 0x555e14:c.instructions+=2;goto B555e14;
case 0x555e15:c.instructions+=1;goto B555e15;
case 0x555e18:goto L555e18;
case 0x555e1f:c.instructions+=3;goto B555e1f;
case 0x555e24:c.instructions+=2;goto B555e24;
case 0x555e26:c.instructions+=1;goto B555e26;
case 0x555e28:goto L555e28;
case 0x555e2b:c.instructions+=3;goto B555e2b;
case 0x555e31:c.instructions+=2;goto B555e31;
case 0x555e33:c.instructions+=1;goto B555e33;
case 0x555e35:goto L555e35;
case 0x555e38:c.instructions+=4;goto B555e38;
case 0x555e3c:c.instructions+=3;goto B555e3c;
case 0x555e3d:c.instructions+=2;goto B555e3d;
case 0x555e3e:c.instructions+=1;goto B555e3e;
case 0x555e43:goto L555e43;
case 0x555e45:c.instructions+=3;goto B555e45;
case 0x555e48:c.instructions+=2;goto B555e48;
case 0x555e4a:c.instructions+=1;goto B555e4a;
case 0x555e4c:goto L555e4c;
case 0x555e50:c.instructions+=6;goto B555e50;
case 0x555e54:c.instructions+=5;goto B555e54;
case 0x555e55:c.instructions+=4;goto B555e55;
case 0x555e57:c.instructions+=3;goto B555e57;
case 0x555e58:c.instructions+=2;goto B555e58;
case 0x555e5a:c.instructions+=1;goto B555e5a;
case 0x555e5f:goto L555e5f;
case 0x555e61:c.instructions+=1;goto B555e61;
case 0x555e66:goto L555e66;
case 0x555e67:c.instructions+=4;goto B555e67;
case 0x555e68:c.instructions+=3;goto B555e68;
case 0x555e69:c.instructions+=2;goto B555e69;
case 0x555e6a:c.instructions+=1;goto B555e6a;
case 0x555e6d:goto L555e6d;
case 0x555e72:goto L555e72;
case 0x555e74:c.instructions+=1;goto B555e74;
case 0x555e79:goto L555e79;
case 0x555e7a:c.instructions+=4;goto B555e7a;
case 0x555e7b:c.instructions+=3;goto B555e7b;
case 0x555e7c:c.instructions+=2;goto B555e7c;
case 0x555e7d:c.instructions+=1;goto B555e7d;
case 0x555e80:goto L555e80;
case 0x555e86:c.instructions+=2;goto B555e86;
case 0x555e88:c.instructions+=1;goto B555e88;
case 0x555e8a:goto L555e8a;
case 0x555e8e:c.instructions+=7;goto B555e8e;
case 0x555e92:c.instructions+=6;goto B555e92;
case 0x555e93:c.instructions+=5;goto B555e93;
case 0x555e98:c.instructions+=4;goto B555e98;
case 0x555e9a:c.instructions+=3;goto B555e9a;
case 0x555e9b:c.instructions+=2;goto B555e9b;
case 0x555e9d:c.instructions+=1;goto B555e9d;
case 0x555ea2:goto L555ea2;
case 0x555ea8:c.instructions+=1;goto B555ea8;
case 0x555ead:goto L555ead;
case 0x555eb0:goto L555eb0;
case 0x555eb6:c.instructions+=2;goto B555eb6;
case 0x555eb8:c.instructions+=1;goto B555eb8;
case 0x555eba:goto L555eba;
case 0x555ebe:c.instructions+=9;goto B555ebe;
case 0x555ec2:c.instructions+=8;goto B555ec2;
case 0x555ec3:c.instructions+=7;goto B555ec3;
case 0x555ec7:c.instructions+=6;goto B555ec7;
case 0x555ec8:c.instructions+=5;goto B555ec8;
case 0x555ecc:c.instructions+=4;goto B555ecc;
case 0x555ecd:c.instructions+=3;goto B555ecd;
case 0x555ece:c.instructions+=2;goto B555ece;
case 0x555ed0:c.instructions+=1;goto B555ed0;
case 0x555ed5:goto L555ed5;
case 0x555ee0:goto L555ee0;
case 0x555ee6:c.instructions+=2;goto B555ee6;
case 0x555ee8:c.instructions+=1;goto B555ee8;
case 0x555eea:goto L555eea;
case 0x555eee:c.instructions+=9;goto B555eee;
case 0x555ef2:c.instructions+=8;goto B555ef2;
case 0x555ef3:c.instructions+=7;goto B555ef3;
case 0x555ef7:c.instructions+=6;goto B555ef7;
case 0x555ef8:c.instructions+=5;goto B555ef8;
case 0x555efc:c.instructions+=4;goto B555efc;
case 0x555efd:c.instructions+=3;goto B555efd;
case 0x555efe:c.instructions+=2;goto B555efe;
case 0x555f00:c.instructions+=1;goto B555f00;
case 0x555f05:goto L555f05;
case 0x555f10:goto L555f10;
case 0x555f16:c.instructions+=2;goto B555f16;
case 0x555f18:c.instructions+=1;goto B555f18;
case 0x555f1a:goto L555f1a;
case 0x555f1e:c.instructions+=4;goto B555f1e;
case 0x555f20:c.instructions+=3;goto B555f20;
case 0x555f24:c.instructions+=2;goto B555f24;
case 0x555f25:c.instructions+=1;goto B555f25;
case 0x555f27:goto L555f27;
case 0x555f2b:c.instructions+=6;goto B555f2b;
case 0x555f2c:c.instructions+=5;goto B555f2c;
case 0x555f2d:c.instructions+=4;goto B555f2d;
case 0x555f31:c.instructions+=3;goto B555f31;
case 0x555f32:c.instructions+=2;goto B555f32;
case 0x555f34:c.instructions+=1;goto B555f34;
case 0x555f39:goto L555f39;
case 0x555f3a:goto L555f3a;
case 0x555f3e:c.instructions+=6;goto B555f3e;
case 0x555f42:c.instructions+=5;goto B555f42;
case 0x555f43:c.instructions+=4;goto B555f43;
case 0x555f45:c.instructions+=3;goto B555f45;
case 0x555f46:c.instructions+=2;goto B555f46;
case 0x555f48:c.instructions+=1;goto B555f48;
case 0x555f4d:goto L555f4d;
case 0x555f50:goto L555f50;
case 0x555f56:c.instructions+=2;goto B555f56;
case 0x555f58:c.instructions+=1;goto B555f58;
case 0x555f5a:goto L555f5a;
case 0x555f5e:c.instructions+=10;goto B555f5e;
case 0x555f62:c.instructions+=9;goto B555f62;
case 0x555f63:c.instructions+=8;goto B555f63;
case 0x555f67:c.instructions+=7;goto B555f67;
case 0x555f68:c.instructions+=6;goto B555f68;
case 0x555f6c:c.instructions+=5;goto B555f6c;
case 0x555f6d:c.instructions+=4;goto B555f6d;
case 0x555f71:c.instructions+=3;goto B555f71;
case 0x555f72:c.instructions+=2;goto B555f72;
case 0x555f73:c.instructions+=1;goto B555f73;
case 0x555f78:goto L555f78;
case 0x555f80:goto L555f80;
case 0x555f82:c.instructions+=10;goto B555f82;
case 0x555f87:c.instructions+=9;goto B555f87;
case 0x555f8d:c.instructions+=8;goto B555f8d;
case 0x555f8e:c.instructions+=7;goto B555f8e;
case 0x555f95:c.instructions+=6;goto B555f95;
case 0x555f96:c.instructions+=5;goto B555f96;
case 0x555f97:c.instructions+=4;goto B555f97;
case 0x555f98:c.instructions+=3;goto B555f98;
case 0x555f9a:c.instructions+=2;goto B555f9a;
case 0x555f9c:c.instructions+=1;goto B555f9c;
case 0x555fa1:goto L555fa1;
case 0x555fa3:c.instructions+=5;goto B555fa3;
case 0x555fa6:c.instructions+=4;goto B555fa6;
case 0x555faa:c.instructions+=3;goto B555faa;
case 0x555fac:c.instructions+=2;goto B555fac;
case 0x555fb4:c.instructions+=1;goto B555fb4;
case 0x555fb6:goto L555fb6;
case 0x555fba:c.instructions+=4;goto B555fba;
case 0x555fbd:c.instructions+=3;goto B555fbd;
case 0x555fbe:c.instructions+=2;goto B555fbe;
case 0x555fbf:c.instructions+=1;goto B555fbf;
case 0x555fc4:goto L555fc4;
case 0x555fc8:c.instructions+=12;goto B555fc8;
case 0x555fcc:c.instructions+=11;goto B555fcc;
case 0x555fcf:c.instructions+=10;goto B555fcf;
case 0x555fd0:c.instructions+=9;goto B555fd0;
case 0x555fd2:c.instructions+=8;goto B555fd2;
case 0x555fd6:c.instructions+=7;goto B555fd6;
case 0x555fd7:c.instructions+=6;goto B555fd7;
case 0x555fd8:c.instructions+=5;goto B555fd8;
case 0x555fd9:c.instructions+=4;goto B555fd9;
case 0x555fde:c.instructions+=3;goto B555fde;
case 0x555fe1:c.instructions+=2;goto B555fe1;
case 0x555fe8:c.instructions+=1;goto B555fe8;
case 0x555fed:goto L555fed;
case 0x555fef:goto L555fef;
case 0x555ff1:goto L555ff1;
case 0x555ff5:c.instructions+=3;goto B555ff5;
case 0x555ff8:c.instructions+=2;goto B555ff8;
case 0x555fff:c.instructions+=1;goto B555fff;
default:missing_instruction(c.pc);}
B555005:L555005:{c.instructions+=6;NFSU2_TR(0x555005);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B555006:{NFSU2_TR(0x555006);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B555007:{NFSU2_TR(0x555007);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B555008:{NFSU2_TR(0x555008);
u8 U[4];
w4(U+0,u32(0x60ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55500a:{NFSU2_TR(0x55500a);
__builtin_memmove((R+28),(R+4),4);
}
B55500c:{NFSU2_TR(0x55500c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x555011ull));
TAIL_STATIC(0x575620u,575);
}
B555011:L555011:{c.instructions+=7;NFSU2_TR(0x555011);
__builtin_memmove((R+24),(R+0),4);
}
B555013:{NFSU2_TR(0x555013);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B555016:{NFSU2_TR(0x555016);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B55501a:{NFSU2_TR(0x55501a);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B55501c:{NFSU2_TR(0x55501c);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B55501e:{NFSU2_TR(0x55501e);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B555022:{NFSU2_TR(0x555022);
if(r1(R+518)){{goto L555045;}}
}
B555024:L555024:{c.instructions+=5;NFSU2_TR(0x555024);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B555028:{NFSU2_TR(0x555028);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B555029:{NFSU2_TR(0x555029);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55502a:{NFSU2_TR(0x55502a);
__builtin_memmove((R+4),(R+24),4);
}
B55502c:{NFSU2_TR(0x55502c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x555031ull));
TAIL_STATIC(0x554300u,554);
}
B555031:L555031:{c.instructions+=5;NFSU2_TR(0x555031);
u8 U[4];
w4(U+0,u32(0x79ba0cull));
s4(u32(r4(R+24)),r4(U+0));
}
B555037:{NFSU2_TR(0x555037);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B55503a:{NFSU2_TR(0x55503a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B55503d:{NFSU2_TR(0x55503d);
u8 U[4];
w4(U+0,u32(0x79baecull));
s4(u32(r4(R+24)),r4(U+0));
}
B555043:{NFSU2_TR(0x555043);
__builtin_memmove((R+0),(R+24),4);
}
B555045:L555045:{c.instructions+=6;NFSU2_TR(0x555045);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B555049:{NFSU2_TR(0x555049);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B55504a:{NFSU2_TR(0x55504a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B55504b:{NFSU2_TR(0x55504b);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B555052:{NFSU2_TR(0x555052);
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
B555055:{NFSU2_TR(0x555055);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B555060:L555060:{c.instructions+=10;NFSU2_TR(0x555060);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B555062:{NFSU2_TR(0x555062);
u8 U[4];
w4(U+0,u32(0x77806bull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B555067:{NFSU2_TR(0x555067);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B55506d:{NFSU2_TR(0x55506d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55506e:{NFSU2_TR(0x55506e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B555075:{NFSU2_TR(0x555075);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B555076:{NFSU2_TR(0x555076);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B555077:{NFSU2_TR(0x555077);
u8 U[4];
w4(U+0,u32(0x6cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B555079:{NFSU2_TR(0x555079);
__builtin_memmove((R+24),(R+4),4);
}
B55507b:{NFSU2_TR(0x55507b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x555080ull));
TAIL_STATIC(0x575620u,575);
}
B555080:L555080:{c.instructions+=5;NFSU2_TR(0x555080);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B555083:{NFSU2_TR(0x555083);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B555087:{NFSU2_TR(0x555087);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B555089:{NFSU2_TR(0x555089);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B555091:{NFSU2_TR(0x555091);
if(r1(R+518)){{goto L5550b4;}}
}
B555093:L555093:{c.instructions+=6;NFSU2_TR(0x555093);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B555097:{NFSU2_TR(0x555097);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B555098:{NFSU2_TR(0x555098);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55509a:{NFSU2_TR(0x55509a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55509b:{NFSU2_TR(0x55509b);
__builtin_memmove((R+4),(R+0),4);
}
B55509d:{NFSU2_TR(0x55509d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5550a2ull));
TAIL_STATIC(0x5548a0u,554);
}
B5550a2:L5550a2:{c.instructions+=5;NFSU2_TR(0x5550a2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5550a3:{NFSU2_TR(0x5550a3);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5550a7:{NFSU2_TR(0x5550a7);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5550ae:{NFSU2_TR(0x5550ae);
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
B5550b1:{NFSU2_TR(0x5550b1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5550b4:L5550b4:{c.instructions+=6;NFSU2_TR(0x5550b4);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5550b8:{NFSU2_TR(0x5550b8);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5550ba:{NFSU2_TR(0x5550ba);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5550bb:{NFSU2_TR(0x5550bb);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5550c2:{NFSU2_TR(0x5550c2);
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
B5550c5:{NFSU2_TR(0x5550c5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5550d0:L5550d0:{c.instructions+=11;NFSU2_TR(0x5550d0);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5550d2:{NFSU2_TR(0x5550d2);
u8 U[4];
w4(U+0,u32(0x77806bull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5550d7:{NFSU2_TR(0x5550d7);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5550dd:{NFSU2_TR(0x5550dd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5550de:{NFSU2_TR(0x5550de);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5550e5:{NFSU2_TR(0x5550e5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5550e6:{NFSU2_TR(0x5550e6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5550e7:{NFSU2_TR(0x5550e7);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5550e8:{NFSU2_TR(0x5550e8);
u8 U[4];
w4(U+0,u32(0x60ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5550ea:{NFSU2_TR(0x5550ea);
__builtin_memmove((R+28),(R+4),4);
}
B5550ec:{NFSU2_TR(0x5550ec);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5550f1ull));
TAIL_STATIC(0x575620u,575);
}
B5550f1:L5550f1:{c.instructions+=7;NFSU2_TR(0x5550f1);
__builtin_memmove((R+24),(R+0),4);
}
B5550f3:{NFSU2_TR(0x5550f3);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5550f6:{NFSU2_TR(0x5550f6);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5550fa:{NFSU2_TR(0x5550fa);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5550fc:{NFSU2_TR(0x5550fc);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5550fe:{NFSU2_TR(0x5550fe);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B555102:{NFSU2_TR(0x555102);
if(r1(R+518)){{goto L555125;}}
}
B555104:L555104:{c.instructions+=5;NFSU2_TR(0x555104);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B555108:{NFSU2_TR(0x555108);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B555109:{NFSU2_TR(0x555109);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55510a:{NFSU2_TR(0x55510a);
__builtin_memmove((R+4),(R+24),4);
}
B55510c:{NFSU2_TR(0x55510c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x555111ull));
TAIL_STATIC(0x554300u,554);
}
B555111:L555111:{c.instructions+=5;NFSU2_TR(0x555111);
u8 U[4];
w4(U+0,u32(0x79ba0cull));
s4(u32(r4(R+24)),r4(U+0));
}
B555117:{NFSU2_TR(0x555117);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B55511a:{NFSU2_TR(0x55511a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B55511d:{NFSU2_TR(0x55511d);
u8 U[4];
w4(U+0,u32(0x79baf4ull));
s4(u32(r4(R+24)),r4(U+0));
}
B555123:{NFSU2_TR(0x555123);
__builtin_memmove((R+0),(R+24),4);
}
B555125:L555125:{c.instructions+=6;NFSU2_TR(0x555125);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B555129:{NFSU2_TR(0x555129);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B55512a:{NFSU2_TR(0x55512a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B55512b:{NFSU2_TR(0x55512b);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B555132:{NFSU2_TR(0x555132);
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
B555135:{NFSU2_TR(0x555135);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B555140:L555140:{c.instructions+=18;NFSU2_TR(0x555140);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B555146:{NFSU2_TR(0x555146);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B555148:{NFSU2_TR(0x555148);
u8 U[4];
w4(U+0,u32(0x77808bull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55514d:{NFSU2_TR(0x55514d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55514e:{NFSU2_TR(0x55514e);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B555152:{NFSU2_TR(0x555152);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B555159:{NFSU2_TR(0x555159);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55515a:{NFSU2_TR(0x55515a);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55515b:{NFSU2_TR(0x55515b);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B55515f:{NFSU2_TR(0x55515f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B555160:{NFSU2_TR(0x555160);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+20))));
}
B555162:{NFSU2_TR(0x555162);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B555164:{NFSU2_TR(0x555164);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(R+20))<(r4(U+0))));
}
B555166:{NFSU2_TR(0x555166);
__builtin_memmove((R+24),(R+4),4);
}
B555168:{NFSU2_TR(0x555168);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B555169:{NFSU2_TR(0x555169);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B55516d:{NFSU2_TR(0x55516d);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B555170:{NFSU2_TR(0x555170);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L5553ee;}}
}
B555176:L555176:{c.instructions+=1;NFSU2_TR(0x555176);
{goto L555180;}
}
B555180:L555180:{c.instructions+=4;NFSU2_TR(0x555180);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+20))),2);
__builtin_memmove((R+8),(U+0),2);
}
B555184:{NFSU2_TR(0x555184);
w4(R+0,u32(r2(R+8)));
}
B555187:{NFSU2_TR(0x555187);
u8 U[4];
w1(R+523,sborrow<u32>(r4(R+0),u32(0x684full)));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x684full))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B55518c:{NFSU2_TR(0x55518c);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L555360;}}
}
B555192:L555192:{c.instructions+=1;NFSU2_TR(0x555192);
if(r1(R+518)){{goto L555355;}}
}
B555198:L555198:{c.instructions+=2;NFSU2_TR(0x555198);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x4150ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B55519d:{NFSU2_TR(0x55519d);
if(r1(R+518)){{goto L55532d;}}
}
B5551a3:L5551a3:{c.instructions+=2;NFSU2_TR(0x5551a3);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x3ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B5551a6:{NFSU2_TR(0x5551a6);
if(r1(R+518)){{goto L5552ff;}}
}
B5551ac:L5551ac:{c.instructions+=2;NFSU2_TR(0x5551ac);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0xefcull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B5551b1:{NFSU2_TR(0x5551b1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L55536e;}}
}
B5551b7:L5551b7:{c.instructions+=15;NFSU2_TR(0x5551b7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5551ba:{NFSU2_TR(0x5551ba);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5551bd:{NFSU2_TR(0x5551bd);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5551c0:{NFSU2_TR(0x5551c0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5551c3:{NFSU2_TR(0x5551c3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5551c6:{NFSU2_TR(0x5551c6);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5551c9:{NFSU2_TR(0x5551c9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5551cc:{NFSU2_TR(0x5551cc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5551cf:{NFSU2_TR(0x5551cf);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5551d2:{NFSU2_TR(0x5551d2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5551d5:{NFSU2_TR(0x5551d5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5551d8:{NFSU2_TR(0x5551d8);
u8 U[6];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x22ull))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B5551dc:{NFSU2_TR(0x5551dc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5551df:{NFSU2_TR(0x5551df);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+8,u32(u32(r4(U+4))&u32(u32(0x100000ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B5551e6:{NFSU2_TR(0x5551e6);
if(r1(R+518)){{goto L5552d9;}}
}
B5551ec:L5551ec:{c.instructions+=8;NFSU2_TR(0x5551ec);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5551ef:{NFSU2_TR(0x5551ef);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5551f2:{NFSU2_TR(0x5551f2);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5551f3:{NFSU2_TR(0x5551f3);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((R+28),(U+0),4);
}
B5551f6:{NFSU2_TR(0x5551f6);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5551f7:{NFSU2_TR(0x5551f7);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5551f8:{NFSU2_TR(0x5551f8);
__builtin_memmove((R+4),(R+24),4);
}
B5551fa:{NFSU2_TR(0x5551fa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5551ffull));
TAIL_STATIC(0x5186c0u,518);
}
B5551ff:L5551ff:{c.instructions+=2;NFSU2_TR(0x5551ff);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B555201:{NFSU2_TR(0x555201);
if(r1(R+518)){{goto L555405;}}
}
B555207:L555207:{c.instructions+=8;NFSU2_TR(0x555207);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+4),(U+0),4);
}
B555209:{NFSU2_TR(0x555209);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B55520c:{NFSU2_TR(0x55520c);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B555210:{NFSU2_TR(0x555210);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B555213:{NFSU2_TR(0x555213);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(r4(R+8))));
s4(u32(r4(U+0)),r4(U+4));
}
B555216:{NFSU2_TR(0x555216);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B555219:{NFSU2_TR(0x555219);
u8 U[10];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x22ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((U+6),(U+4),2);
w2(U+8,u16(u32(r2(U+6))-u32(u16(0xffffull))));
w1(R+518,u8((r2(U+8))==(u16(0x0ull))));
}
B55521f:{NFSU2_TR(0x55521f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L555234;}}
}
B555221:L555221:{c.instructions+=7;NFSU2_TR(0x555221);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+4),(U+0),4);
}
B555223:{NFSU2_TR(0x555223);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B555226:{NFSU2_TR(0x555226);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B555229:{NFSU2_TR(0x555229);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B55522b:{NFSU2_TR(0x55522b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B55522e:{NFSU2_TR(0x55522e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B555231:{NFSU2_TR(0x555231);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B555234:L555234:{c.instructions+=3;NFSU2_TR(0x555234);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+4),(U+0),4);
}
B555236:{NFSU2_TR(0x555236);
u8 U[22];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0x5ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0x5ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0x5ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B55523a:{NFSU2_TR(0x55523a);
if(r1(R+518)){{goto L555245;}}
}
B55523c:L55523c:{c.instructions+=3;NFSU2_TR(0x55523c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B55523e:{NFSU2_TR(0x55523e);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B555240:{NFSU2_TR(0x555240);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x555243ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B555243:L555243:{c.instructions+=1;NFSU2_TR(0x555243);
{goto L555274;}
}
B555245:L555245:{c.instructions+=2;NFSU2_TR(0x555245);
u8 U[4];
w4(U+0,u32(0x6cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B555247:{NFSU2_TR(0x555247);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55524cull));
TAIL_STATIC(0x575620u,575);
}
B55524c:L55524c:{c.instructions+=5;NFSU2_TR(0x55524c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B55524f:{NFSU2_TR(0x55524f);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B555253:{NFSU2_TR(0x555253);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B555255:{NFSU2_TR(0x555255);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B555259:{NFSU2_TR(0x555259);
if(r1(R+518)){{goto L55526a;}}
}
B55525b:L55525b:{c.instructions+=6;NFSU2_TR(0x55525b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+4),(U+0),4);
}
B55525d:{NFSU2_TR(0x55525d);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55525f:{NFSU2_TR(0x55525f);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B555260:{NFSU2_TR(0x555260);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B555261:{NFSU2_TR(0x555261);
__builtin_memmove((R+4),(R+0),4);
}
B555263:{NFSU2_TR(0x555263);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x555268ull));
TAIL_STATIC(0x5548a0u,554);
}
B555268:L555268:{c.instructions+=1;NFSU2_TR(0x555268);
{goto L55526c;}
}
B55526a:L55526a:{c.instructions+=1;NFSU2_TR(0x55526a);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B55526c:L55526c:{c.instructions+=1;NFSU2_TR(0x55526c);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B555274:L555274:{c.instructions+=22;NFSU2_TR(0x555274);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B555277:{NFSU2_TR(0x555277);
__builtin_memmove((R+28),(R+0),4);
}
B555279:{NFSU2_TR(0x555279);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B55527c:{NFSU2_TR(0x55527c);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B55527f:{NFSU2_TR(0x55527f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B555282:{NFSU2_TR(0x555282);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B555285:{NFSU2_TR(0x555285);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B555288:{NFSU2_TR(0x555288);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B55528b:{NFSU2_TR(0x55528b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B55528e:{NFSU2_TR(0x55528e);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B555291:{NFSU2_TR(0x555291);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B555294:{NFSU2_TR(0x555294);
u8 U[6];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x22ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+0),(U+4),2);
}
B555298:{NFSU2_TR(0x555298);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x22ull))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B55529c:{NFSU2_TR(0x55529c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B55529f:{NFSU2_TR(0x55529f);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5552a2:{NFSU2_TR(0x5552a2);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5552a5:{NFSU2_TR(0x5552a5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5552a8:{NFSU2_TR(0x5552a8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5552ab:{NFSU2_TR(0x5552ab);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5552ae:{NFSU2_TR(0x5552ae);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5552b1:{NFSU2_TR(0x5552b1);
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
B5552b3:{NFSU2_TR(0x5552b3);
if(r1(R+518)){{goto L5552bb;}}
}
B5552b5:L5552b5:{c.instructions+=3;NFSU2_TR(0x5552b5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5552b7:{NFSU2_TR(0x5552b7);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5552b9:{NFSU2_TR(0x5552b9);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5552bbull));
{u32 t_=u32(r4(U+4));TAIL_DYNAMIC(t_);}
}
B5552bb:L5552bb:{c.instructions+=4;NFSU2_TR(0x5552bb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5552be:{NFSU2_TR(0x5552be);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5552c1:{NFSU2_TR(0x5552c1);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5552c3:{NFSU2_TR(0x5552c3);
if(r1(R+518)){{goto L5552d9;}}
}
B5552c5:L5552c5:{c.instructions+=3;NFSU2_TR(0x5552c5);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5552c8:{NFSU2_TR(0x5552c8);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5552ca:{NFSU2_TR(0x5552ca);
if(r1(R+518)){{goto L5552d2;}}
}
B5552cc:L5552cc:{c.instructions+=2;NFSU2_TR(0x5552cc);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5552cf:{NFSU2_TR(0x5552cf);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5552d2:L5552d2:{c.instructions+=3;NFSU2_TR(0x5552d2);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5552d5:{NFSU2_TR(0x5552d5);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5552d7:{NFSU2_TR(0x5552d7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5552c5u);}goto L5552c5;}}
}
B5552d9:L5552d9:{c.instructions+=3;NFSU2_TR(0x5552d9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5552dc:{NFSU2_TR(0x5552dc);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+8,u32(u32(r4(U+4))&u32(u32(0x10000000ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B5552e3:{NFSU2_TR(0x5552e3);
if(r1(R+518)){{goto L5553da;}}
}
B5552e9:L5552e9:{c.instructions+=6;NFSU2_TR(0x5552e9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5552eb:{NFSU2_TR(0x5552eb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5552ee:{NFSU2_TR(0x5552ee);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x90ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5552f4:{NFSU2_TR(0x5552f4);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+0),4);
s4(u32(r4(U+4)),r4(U+8));
}
B5552f7:{NFSU2_TR(0x5552f7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B5552fa:{NFSU2_TR(0x5552fa);
{goto L5553da;}
}
B5552ff:L5552ff:{c.instructions+=5;NFSU2_TR(0x5552ff);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(r2(U+4)));
}
B555303:{NFSU2_TR(0x555303);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B555306:{NFSU2_TR(0x555306);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B555308:{NFSU2_TR(0x555308);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+512,u8((r4(R+4))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B55530a:{NFSU2_TR(0x55530a);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L5553da;}}
}
B555310:L555310:{c.instructions+=1;NFSU2_TR(0x555310);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((R+8),(U+0),4);
}
B555313:L555313:{c.instructions+=8;NFSU2_TR(0x555313);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B555316:{NFSU2_TR(0x555316);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+12),(U+0),4);
}
B555318:{NFSU2_TR(0x555318);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B55531b:{NFSU2_TR(0x55531b);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+12),4);
s4(u32(r4(U+4)),r4(U+8));
}
B55531e:{NFSU2_TR(0x55531e);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B55531f:{NFSU2_TR(0x55531f);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x4ull))));
}
B555322:{NFSU2_TR(0x555322);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
}
B555324:{NFSU2_TR(0x555324);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x555313u);}goto L555313;}}
}
B555326:L555326:{c.instructions+=2;NFSU2_TR(0x555326);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B555328:{NFSU2_TR(0x555328);
{goto L5553da;}
}
B55532d:L55532d:{c.instructions+=3;NFSU2_TR(0x55532d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B555330:{NFSU2_TR(0x555330);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B555332:{NFSU2_TR(0x555332);
if(r1(R+518)){{goto L55533c;}}
}
B555334:L555334:{c.instructions+=3;NFSU2_TR(0x555334);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B555337:{NFSU2_TR(0x555337);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+8))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B55533a:{NFSU2_TR(0x55533a);
if(r1(R+518)){{goto L55534a;}}
}
B55533c:L55533c:{c.instructions+=4;NFSU2_TR(0x55533c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B55533f:{NFSU2_TR(0x55533f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B555341:{NFSU2_TR(0x555341);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B555342:{NFSU2_TR(0x555342);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x555347ull));
TAIL_STATIC(0x517fe0u,517);
}
B555347:L555347:{c.instructions+=1;NFSU2_TR(0x555347);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B55534a:L55534a:{c.instructions+=3;NFSU2_TR(0x55534a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B55534d:{NFSU2_TR(0x55534d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B555350:{NFSU2_TR(0x555350);
{goto L5553da;}
}
B555355:L555355:{c.instructions+=4;NFSU2_TR(0x555355);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B555358:{NFSU2_TR(0x555358);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B55535b:{NFSU2_TR(0x55535b);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B55535e:{NFSU2_TR(0x55535e);
{goto L5553da;}
}
B555360:L555360:{c.instructions+=2;NFSU2_TR(0x555360);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x6e4full))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B555365:{NFSU2_TR(0x555365);
if(r1(R+518)){{goto L5553c9;}}
}
B555367:L555367:{c.instructions+=2;NFSU2_TR(0x555367);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x744full))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B55536c:{NFSU2_TR(0x55536c);
if(r1(R+518)){{goto L5553b9;}}
}
B55536e:L55536e:{c.instructions+=3;NFSU2_TR(0x55536e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B555371:{NFSU2_TR(0x555371);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B555373:{NFSU2_TR(0x555373);
if(r1(R+518)){{goto L5553da;}}
}
B555375:L555375:{c.instructions+=4;NFSU2_TR(0x555375);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B555378:{NFSU2_TR(0x555378);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
}
B555379:{NFSU2_TR(0x555379);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
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
B55537c:{NFSU2_TR(0x55537c);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L5553da;}}
}
B55537e:L55537e:{c.instructions+=2;NFSU2_TR(0x55537e);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x555430ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(r1(U+4)));
}
B555385:{NFSU2_TR(0x555385);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x55541cull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B55538c:L55538c:{c.instructions+=3;NFSU2_TR(0x55538c);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55538d:{NFSU2_TR(0x55538d);
__builtin_memmove((R+4),(R+24),4);
}
B55538f:{NFSU2_TR(0x55538f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x555394ull));
TAIL_STATIC(0x534fc0u,534);
}
B555394:L555394:{c.instructions+=1;NFSU2_TR(0x555394);
{goto L5553da;}
}
B555396:L555396:{c.instructions+=3;NFSU2_TR(0x555396);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B555397:{NFSU2_TR(0x555397);
__builtin_memmove((R+4),(R+24),4);
}
B555399:{NFSU2_TR(0x555399);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55539eull));
TAIL_STATIC(0x52b740u,52b);
}
B55539e:L55539e:{c.instructions+=1;NFSU2_TR(0x55539e);
{goto L5553da;}
}
B5553a0:L5553a0:{c.instructions+=3;NFSU2_TR(0x5553a0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5553a1:{NFSU2_TR(0x5553a1);
__builtin_memmove((R+4),(R+24),4);
}
B5553a3:{NFSU2_TR(0x5553a3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5553a8ull));
TAIL_STATIC(0x535060u,535);
}
B5553a8:L5553a8:{c.instructions+=1;NFSU2_TR(0x5553a8);
{goto L5553da;}
}
B5553aa:L5553aa:{c.instructions+=2;NFSU2_TR(0x5553aa);
u8 U[4];
__builtin_memmove((U+0),(R+8),2);
w2(U+2,u16(u32(r2(U+0))-u32(u16(0x6649ull))));
w1(R+518,u8((r2(U+2))==(u16(0x0ull))));
}
B5553af:{NFSU2_TR(0x5553af);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5553da;}}
}
B5553b1:L5553b1:{c.instructions+=3;NFSU2_TR(0x5553b1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5553b4:{NFSU2_TR(0x5553b4);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x5cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5553b7:{NFSU2_TR(0x5553b7);
{goto L5553da;}
}
B5553b9:L5553b9:{c.instructions+=4;NFSU2_TR(0x5553b9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5553bc:{NFSU2_TR(0x5553bc);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5553bd:{NFSU2_TR(0x5553bd);
__builtin_memmove((R+4),(R+24),4);
}
B5553bf:{NFSU2_TR(0x5553bf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5553c4ull));
TAIL_STATIC(0x534df0u,534);
}
B5553c4:L5553c4:{c.instructions+=2;NFSU2_TR(0x5553c4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5553c7:{NFSU2_TR(0x5553c7);
{goto L5553da;}
}
B5553c9:L5553c9:{c.instructions+=2;NFSU2_TR(0x5553c9);
u8 U[7];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x9ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(r1(R+12))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B5553cc:{NFSU2_TR(0x5553cc);
if(r1(R+518)){{goto L5553da;}}
}
B5553ce:L5553ce:{c.instructions+=4;NFSU2_TR(0x5553ce);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5553d1:{NFSU2_TR(0x5553d1);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B5553d4:{NFSU2_TR(0x5553d4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5553d5:{NFSU2_TR(0x5553d5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5553daull));
TAIL_STATIC(0x5176b0u,517);
}
B5553da:L5553da:{c.instructions+=5;NFSU2_TR(0x5553da);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(r2(U+4)));
}
B5553de:{NFSU2_TR(0x5553de);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5553e2:{NFSU2_TR(0x5553e2);
u8 U[12];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+20))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+20),(U+8),4);
}
B5553e6:{NFSU2_TR(0x5553e6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(R+20))<(r4(U+0))));
}
B5553e8:{NFSU2_TR(0x5553e8);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x555180u);}goto L555180;}}
}
B5553ee:L5553ee:{c.instructions+=1;NFSU2_TR(0x5553ee);
w1(R+0,u8(0x1ull));
}
B5553f0:L5553f0:{c.instructions+=8;NFSU2_TR(0x5553f0);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5553f4:{NFSU2_TR(0x5553f4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5553f5:{NFSU2_TR(0x5553f5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5553f6:{NFSU2_TR(0x5553f6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5553f7:{NFSU2_TR(0x5553f7);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5553fe:{NFSU2_TR(0x5553fe);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5553ff:{NFSU2_TR(0x5553ff);
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
B555402:{NFSU2_TR(0x555402);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B555405:L555405:{c.instructions+=3;NFSU2_TR(0x555405);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B555408:{NFSU2_TR(0x555408);
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
B55540a:{NFSU2_TR(0x55540a);
if(r1(R+518)){{goto L555412;}}
}
B55540c:L55540c:{c.instructions+=3;NFSU2_TR(0x55540c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B55540e:{NFSU2_TR(0x55540e);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B555410:{NFSU2_TR(0x555410);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x555412ull));
{u32 t_=u32(r4(U+4));TAIL_DYNAMIC(t_);}
}
B555412:L555412:{c.instructions+=3;NFSU2_TR(0x555412);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B555415:{NFSU2_TR(0x555415);
w1(R+0,u8(u32(r1(R+0))^u32(r1(R+0))));
}
B555417:{NFSU2_TR(0x555417);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5553f0u);}goto L5553f0;}
}
B555440:L555440:{c.instructions+=8;NFSU2_TR(0x555440);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B555442:{NFSU2_TR(0x555442);
u8 U[4];
w4(U+0,u32(0x7780b4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B555447:{NFSU2_TR(0x555447);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B55544d:{NFSU2_TR(0x55544d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55544e:{NFSU2_TR(0x55544e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B555455:{NFSU2_TR(0x555455);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B555456:{NFSU2_TR(0x555456);
u8 U[4];
w4(U+0,u32(0x150ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55545b:{NFSU2_TR(0x55545b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x555460ull));
TAIL_STATIC(0x575620u,575);
}
B555460:L555460:{c.instructions+=5;NFSU2_TR(0x555460);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B555463:{NFSU2_TR(0x555463);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+16)),r4(U+0));
}
B555467:{NFSU2_TR(0x555467);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B555469:{NFSU2_TR(0x555469);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B555471:{NFSU2_TR(0x555471);
if(r1(R+518)){{goto L55548e;}}
}
B555473:L555473:{c.instructions+=4;NFSU2_TR(0x555473);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B555477:{NFSU2_TR(0x555477);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B555478:{NFSU2_TR(0x555478);
__builtin_memmove((R+4),(R+0),4);
}
B55547a:{NFSU2_TR(0x55547a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55547full));
TAIL_STATIC(0x554ca0u,554);
}
B55547f:L55547f:{c.instructions+=4;NFSU2_TR(0x55547f);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B555483:{NFSU2_TR(0x555483);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B55548a:{NFSU2_TR(0x55548a);
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
B55548d:{NFSU2_TR(0x55548d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B55548e:L55548e:{c.instructions+=5;NFSU2_TR(0x55548e);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B555492:{NFSU2_TR(0x555492);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B555494:{NFSU2_TR(0x555494);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B55549b:{NFSU2_TR(0x55549b);
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
B55549e:{NFSU2_TR(0x55549e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5554a0:L5554a0:{c.instructions+=12;NFSU2_TR(0x5554a0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xcull))));
}
B5554a3:{NFSU2_TR(0x5554a3);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5554a4:{NFSU2_TR(0x5554a4);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5554a5:{NFSU2_TR(0x5554a5);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5554a6:{NFSU2_TR(0x5554a6);
__builtin_memmove((R+28),(R+4),4);
}
B5554a8:{NFSU2_TR(0x5554a8);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5554ab:{NFSU2_TR(0x5554ab);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5554ae:{NFSU2_TR(0x5554ae);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5554b1:{NFSU2_TR(0x5554b1);
u8 U[12];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B5554b5:{NFSU2_TR(0x5554b5);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
}
B5554b8:{NFSU2_TR(0x5554b8);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xcc6a624full))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5554be:{NFSU2_TR(0x5554be);
if(r1(R+518)){{goto L5554d7;}}
}
B5554c0:L5554c0:{c.instructions+=2;NFSU2_TR(0x5554c0);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5554c2:{NFSU2_TR(0x5554c2);
if(r1(R+518)){{goto L555574;}}
}
B5554c8:L5554c8:{c.instructions+=4;NFSU2_TR(0x5554c8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5554cb:{NFSU2_TR(0x5554cb);
u8 U[12];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B5554cf:{NFSU2_TR(0x5554cf);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0xcc6a624full))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B5554d5:{NFSU2_TR(0x5554d5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5554c0u);}goto L5554c0;}}
}
B5554d7:L5554d7:{c.instructions+=8;NFSU2_TR(0x5554d7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5554da:{NFSU2_TR(0x5554da);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5554db:{NFSU2_TR(0x5554db);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5554de:{NFSU2_TR(0x5554de);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5554e0:{NFSU2_TR(0x5554e0);
u8 U[12];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B5554e4:{NFSU2_TR(0x5554e4);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5554e8:{NFSU2_TR(0x5554e8);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5554ec:{NFSU2_TR(0x5554ec);
if(r1(R+518)){{goto L55570c;}}
}
B5554f2:L5554f2:{c.instructions+=2;NFSU2_TR(0x5554f2);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5554f4:{NFSU2_TR(0x5554f4);
if(r1(R+518)){{goto L55570c;}}
}
B5554fa:L5554fa:{c.instructions+=3;NFSU2_TR(0x5554fa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5554fc:{NFSU2_TR(0x5554fc);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xea624f46ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B555501:{NFSU2_TR(0x555501);
if(r1(R+518)){{goto L55556a;}}
}
B555503:L555503:{c.instructions+=2;NFSU2_TR(0x555503);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(R+12))<(r4(U+0))));
}
B555505:{NFSU2_TR(0x555505);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L555702;}}
}
B55550b:L55550b:{c.instructions+=2;NFSU2_TR(0x55550b);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x6e747542ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B555510:{NFSU2_TR(0x555510);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L55554e;}}
}
B555512:L555512:{c.instructions+=7;NFSU2_TR(0x555512);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+24),(U+0),4);
}
B555514:{NFSU2_TR(0x555514);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B555517:{NFSU2_TR(0x555517);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x48ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B55551a:{NFSU2_TR(0x55551a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x90ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B555520:{NFSU2_TR(0x555520);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x90ull))));
}
B555526:{NFSU2_TR(0x555526);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B555527:{NFSU2_TR(0x555527);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55552cull));
TAIL_STATIC(0x575630u,575);
}
B55552c:L55552c:{c.instructions+=4;NFSU2_TR(0x55552c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B55552f:{NFSU2_TR(0x55552f);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))&u32(r4(R+20))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B555531:{NFSU2_TR(0x555531);
u8 U[4];
w4(U+0,u32(0x0ull));
s4(u32(r4(R+24)),r4(U+0));
}
B555537:{NFSU2_TR(0x555537);
if(r1(R+518)){{goto L55554b;}}
}
B555539:L555539:{c.instructions+=3;NFSU2_TR(0x555539);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x0ull))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B555540:{NFSU2_TR(0x555540);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B555541:{NFSU2_TR(0x555541);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x555546ull));
TAIL_STATIC(0x575620u,575);
}
B555546:L555546:{c.instructions+=2;NFSU2_TR(0x555546);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B555549:{NFSU2_TR(0x555549);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+24)),r4(U+0));
}
B55554b:L55554b:{c.instructions+=1;NFSU2_TR(0x55554b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B55554e:L55554e:{c.instructions+=8;NFSU2_TR(0x55554e);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B555551:{NFSU2_TR(0x555551);
u8 U[12];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+12))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B555555:{NFSU2_TR(0x555555);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B555559:{NFSU2_TR(0x555559);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B55555d:{NFSU2_TR(0x55555d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B55555f:{NFSU2_TR(0x55555f);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xea624f46ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B555564:{NFSU2_TR(0x555564);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B555568:{NFSU2_TR(0x555568);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x555503u);}goto L555503;}}
}
B55556a:L55556a:{c.instructions+=2;NFSU2_TR(0x55556a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(R+12))<(r4(U+0))));
}
B55556c:{NFSU2_TR(0x55556c);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L555702;}}
}
B555572:L555572:{c.instructions+=1;NFSU2_TR(0x555572);
{goto L555590;}
}
B555574:L555574:{c.instructions+=2;NFSU2_TR(0x555574);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0xcc6a624full))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B55557a:{NFSU2_TR(0x55557a);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5554d7u);}goto L5554d7;}}
}
B555580:L555580:{c.instructions+=6;NFSU2_TR(0x555580);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B555581:{NFSU2_TR(0x555581);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B555582:{NFSU2_TR(0x555582);
w1(R+0,u8(u32(r1(R+0))^u32(r1(R+0))));
}
B555584:{NFSU2_TR(0x555584);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B555585:{NFSU2_TR(0x555585);
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
B555588:{NFSU2_TR(0x555588);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B555589:L555589:{c.instructions+=2;NFSU2_TR(0x555589);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B55558d:{NFSU2_TR(0x55558d);
__builtin_memmove((R+4),(R+4),4);
}
B555590:L555590:{c.instructions+=8;NFSU2_TR(0x555590);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B555593:{NFSU2_TR(0x555593);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B555595:{NFSU2_TR(0x555595);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((R+24),(U+0),4);
}
B555598:{NFSU2_TR(0x555598);
u8 U[12];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+12))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+20),(U+8),4);
}
B55559c:{NFSU2_TR(0x55559c);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w1(R+512,u8((r4(R+24))<(r4(U+0))));
}
B55559e:{NFSU2_TR(0x55559e);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5555a1:{NFSU2_TR(0x5555a1);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5555a4:{NFSU2_TR(0x5555a4);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L5556ed;}}
}
B5555aa:L5555aa:{c.instructions+=1;NFSU2_TR(0x5555aa);
__builtin_memmove((R+12),(R+12),4);
}
B5555b0:L5555b0:{c.instructions+=3;NFSU2_TR(0x5555b0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5555b2:{NFSU2_TR(0x5555b2);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x446a624full))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5555b7:{NFSU2_TR(0x5555b7);
if(r1(R+518)){{goto L5555eb;}}
}
B5555b9:L5555b9:{c.instructions+=2;NFSU2_TR(0x5555b9);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x5267734dull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5555be:{NFSU2_TR(0x5555be);
if(r1(R+518)){{goto L5555d8;}}
}
B5555c0:L5555c0:{c.instructions+=2;NFSU2_TR(0x5555c0);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x70726353ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5555c5:{NFSU2_TR(0x5555c5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L555602;}}
}
B5555c7:L5555c7:{c.instructions+=6;NFSU2_TR(0x5555c7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5555ca:{NFSU2_TR(0x5555ca);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5555cb:{NFSU2_TR(0x5555cb);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5555ce:{NFSU2_TR(0x5555ce);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5555cf:{NFSU2_TR(0x5555cf);
__builtin_memmove((R+4),(R+28),4);
}
B5555d1:{NFSU2_TR(0x5555d1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5555d6ull));
TAIL_STATIC(0x5515e0u,551);
}
B5555d6:L5555d6:{c.instructions+=1;NFSU2_TR(0x5555d6);
{goto L555602;}
}
B5555d8:L5555d8:{c.instructions+=7;NFSU2_TR(0x5555d8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5555db:{NFSU2_TR(0x5555db);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5555dd:{NFSU2_TR(0x5555dd);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5555de:{NFSU2_TR(0x5555de);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B5555e1:{NFSU2_TR(0x5555e1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5555e2:{NFSU2_TR(0x5555e2);
__builtin_memmove((R+4),(R+28),4);
}
B5555e4:{NFSU2_TR(0x5555e4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5555e9ull));
TAIL_STATIC(0x54d1d0u,54d);
}
B5555e9:L5555e9:{c.instructions+=1;NFSU2_TR(0x5555e9);
{goto L555602;}
}
B5555eb:L5555eb:{c.instructions+=6;NFSU2_TR(0x5555eb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5555ee:{NFSU2_TR(0x5555ee);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5555ef:{NFSU2_TR(0x5555ef);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5555f2:{NFSU2_TR(0x5555f2);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5555f3:{NFSU2_TR(0x5555f3);
__builtin_memmove((R+4),(R+28),4);
}
B5555f5:{NFSU2_TR(0x5555f5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5555faull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x555140u);}goto L555140;}
}
B5555fa:L5555fa:{c.instructions+=2;NFSU2_TR(0x5555fa);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5555fc:{NFSU2_TR(0x5555fc);
if(r1(R+518)){{goto L55570c;}}
}
B555602:L555602:{c.instructions+=4;NFSU2_TR(0x555602);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B555605:{NFSU2_TR(0x555605);
u8 U[12];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+24),(U+8),4);
}
B555609:{NFSU2_TR(0x555609);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w1(R+512,u8((r4(R+24))<(r4(U+0))));
}
B55560b:{NFSU2_TR(0x55560b);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5555b0u);}goto L5555b0;}}
}
B55560d:L55560d:{c.instructions+=3;NFSU2_TR(0x55560d);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B555610:{NFSU2_TR(0x555610);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B555612:{NFSU2_TR(0x555612);
if(r1(R+518)){{goto L5556ed;}}
}
B555618:L555618:{c.instructions+=3;NFSU2_TR(0x555618);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B55561b:{NFSU2_TR(0x55561b);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B55561e:{NFSU2_TR(0x55561e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L555627;}}
}
B555620:L555620:{c.instructions+=1;NFSU2_TR(0x555620);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x555625ull));
TAIL_STATIC(0x504360u,504);
}
B555625:L555625:{c.instructions+=1;NFSU2_TR(0x555625);
{goto L555631;}
}
B555627:L555627:{c.instructions+=2;NFSU2_TR(0x555627);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x6ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B55562a:{NFSU2_TR(0x55562a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L555631;}}
}
B55562c:L55562c:{c.instructions+=1;NFSU2_TR(0x55562c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x555631ull));
TAIL_STATIC(0x504c40u,504);
}
B555631:L555631:{c.instructions+=4;NFSU2_TR(0x555631);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B555634:{NFSU2_TR(0x555634);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B555637:{NFSU2_TR(0x555637);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B555639:{NFSU2_TR(0x555639);
if(r1(R+518)){{goto L555667;}}
}
B55563b:L55563b:{c.instructions+=1;NFSU2_TR(0x55563b);
{goto L555640;}
}
B555640:L555640:{c.instructions+=3;NFSU2_TR(0x555640);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B555643:{NFSU2_TR(0x555643);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B555645:{NFSU2_TR(0x555645);
if(r1(R+518)){{goto L555660;}}
}
B555647:L555647:{c.instructions+=4;NFSU2_TR(0x555647);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B55564a:{NFSU2_TR(0x55564a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B55564d:{NFSU2_TR(0x55564d);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B55564f:{NFSU2_TR(0x55564f);
if(r1(R+518)){{goto L55565d;}}
}
B555651:L555651:{c.instructions+=2;NFSU2_TR(0x555651);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B555654:{NFSU2_TR(0x555654);
if(r1(R+518)){{goto L55565d;}}
}
B555656:L555656:{c.instructions+=3;NFSU2_TR(0x555656);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B555659:{NFSU2_TR(0x555659);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B55565b:{NFSU2_TR(0x55565b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x555651u);}goto L555651;}}
}
B55565d:L55565d:{c.instructions+=1;NFSU2_TR(0x55565d);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B555660:L555660:{c.instructions+=3;NFSU2_TR(0x555660);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B555663:{NFSU2_TR(0x555663);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B555665:{NFSU2_TR(0x555665);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x555640u);}goto L555640;}}
}
B555667:L555667:{c.instructions+=4;NFSU2_TR(0x555667);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B55566a:{NFSU2_TR(0x55566a);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B55566d:{NFSU2_TR(0x55566d);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B55566f:{NFSU2_TR(0x55566f);
if(r1(R+518)){{goto L555681;}}
}
B555671:L555671:{c.instructions+=2;NFSU2_TR(0x555671);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x1744b3ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B555678:{NFSU2_TR(0x555678);
if(r1(R+518)){{goto L555681;}}
}
B55567a:L55567a:{c.instructions+=3;NFSU2_TR(0x55567a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B55567d:{NFSU2_TR(0x55567d);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B55567f:{NFSU2_TR(0x55567f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x555671u);}goto L555671;}}
}
B555681:L555681:{c.instructions+=3;NFSU2_TR(0x555681);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B555683:{NFSU2_TR(0x555683);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B555686:{NFSU2_TR(0x555686);
if(r1(R+518)){{goto L55568d;}}
}
B555688:L555688:{c.instructions+=1;NFSU2_TR(0x555688);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55568dull));
TAIL_STATIC(0x517720u,517);
}
B55568d:L55568d:{c.instructions+=4;NFSU2_TR(0x55568d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B555694:{NFSU2_TR(0x555694);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B555697:{NFSU2_TR(0x555697);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B555699:{NFSU2_TR(0x555699);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5556d0;}}
}
B55569b:L55569b:{c.instructions+=5;NFSU2_TR(0x55569b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B55569e:{NFSU2_TR(0x55569e);
w1(R+12,u8(u32(r1(R+12))^u32(r1(R+12))));
}
B5556a0:{NFSU2_TR(0x5556a0);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5556a2:{NFSU2_TR(0x5556a2);
u8 U[5];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5556a6:{NFSU2_TR(0x5556a6);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L5556cc;}}
}
B5556a8:L5556a8:{c.instructions+=7;NFSU2_TR(0x5556a8);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5556ab:{NFSU2_TR(0x5556ab);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5556af:{NFSU2_TR(0x5556af);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5556b0:{NFSU2_TR(0x5556b0);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5556b2:{NFSU2_TR(0x5556b2);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5556b3:{NFSU2_TR(0x5556b3);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5556b4:{NFSU2_TR(0x5556b4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5556b9ull));
TAIL_STATIC(0x541f60u,541);
}
B5556b9:L5556b9:{c.instructions+=7;NFSU2_TR(0x5556b9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5556bc:{NFSU2_TR(0x5556bc);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B5556bf:{NFSU2_TR(0x5556bf);
w1(R+12,u8(u32(r1(R+12))+u32(u8(0x1ull))));
}
B5556c1:{NFSU2_TR(0x5556c1);
w4(R+0,u32(r1(R+12)));
}
B5556c4:{NFSU2_TR(0x5556c4);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
}
B5556c6:{NFSU2_TR(0x5556c6);
u8 U[5];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5556ca:{NFSU2_TR(0x5556ca);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5556a8u);}goto L5556a8;}}
}
B5556cc:L5556cc:{c.instructions+=1;NFSU2_TR(0x5556cc);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B5556d0:L5556d0:{c.instructions+=3;NFSU2_TR(0x5556d0);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5556d3:{NFSU2_TR(0x5556d3);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5556d5:{NFSU2_TR(0x5556d5);
if(r1(R+518)){{goto L5556e2;}}
}
B5556d7:L5556d7:{c.instructions+=3;NFSU2_TR(0x5556d7);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5556da:{NFSU2_TR(0x5556da);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5556db:{NFSU2_TR(0x5556db);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5556e0ull));
TAIL_STATIC(0x517e90u,517);
}
B5556e0:L5556e0:{c.instructions+=1;NFSU2_TR(0x5556e0);
{goto L5556ed;}
}
B5556e2:L5556e2:{c.instructions+=4;NFSU2_TR(0x5556e2);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5556e5:{NFSU2_TR(0x5556e5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5556e7:{NFSU2_TR(0x5556e7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5556e8:{NFSU2_TR(0x5556e8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5556edull));
TAIL_STATIC(0x495610u,495);
}
B5556ed:L5556ed:{c.instructions+=5;NFSU2_TR(0x5556ed);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5556f0:{NFSU2_TR(0x5556f0);
u8 U[12];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+12))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B5556f4:{NFSU2_TR(0x5556f4);
u8 U[12];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B5556f8:{NFSU2_TR(0x5556f8);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5556fc:{NFSU2_TR(0x5556fc);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x555589u);}goto L555589;}}
}
B555702:L555702:{c.instructions+=7;NFSU2_TR(0x555702);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B555703:{NFSU2_TR(0x555703);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B555704:{NFSU2_TR(0x555704);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B555705:{NFSU2_TR(0x555705);
w1(R+0,u8(0x1ull));
}
B555707:{NFSU2_TR(0x555707);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B555708:{NFSU2_TR(0x555708);
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
B55570b:{NFSU2_TR(0x55570b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B55570c:L55570c:{c.instructions+=7;NFSU2_TR(0x55570c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B55570d:{NFSU2_TR(0x55570d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B55570e:{NFSU2_TR(0x55570e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B55570f:{NFSU2_TR(0x55570f);
w1(R+0,u8(u32(r1(R+0))^u32(r1(R+0))));
}
B555711:{NFSU2_TR(0x555711);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B555712:{NFSU2_TR(0x555712);
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
B555715:{NFSU2_TR(0x555715);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B555720:L555720:{c.instructions+=30;NFSU2_TR(0x555720);
u8 U[5];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B555724:{NFSU2_TR(0x555724);
u8 U[5];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B555728:{NFSU2_TR(0x555728);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B555729:{NFSU2_TR(0x555729);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55572a:{NFSU2_TR(0x55572a);
__builtin_memmove((R+24),(R+4),4);
}
B55572c:{NFSU2_TR(0x55572c);
u8 U[5];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B555730:{NFSU2_TR(0x555730);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x9ull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B555733:{NFSU2_TR(0x555733);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B555737:{NFSU2_TR(0x555737);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B555738:{NFSU2_TR(0x555738);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B55573a:{NFSU2_TR(0x55573a);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B55573d:{NFSU2_TR(0x55573d);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B555741:{NFSU2_TR(0x555741);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xaull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B555744:{NFSU2_TR(0x555744);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B555748:{NFSU2_TR(0x555748);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B55574b:{NFSU2_TR(0x55574b);
__builtin_memmove((R+4),(R+24),4);
}
B55574d:{NFSU2_TR(0x55574d);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B55574f:{NFSU2_TR(0x55574f);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
s4(u32(r4(R+24)),r4(U+0));
}
B555751:{NFSU2_TR(0x555751);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B555754:{NFSU2_TR(0x555754);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B555757:{NFSU2_TR(0x555757);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B55575a:{NFSU2_TR(0x55575a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B55575d:{NFSU2_TR(0x55575d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B555760:{NFSU2_TR(0x555760);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B555763:{NFSU2_TR(0x555763);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B555766:{NFSU2_TR(0x555766);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B555769:{NFSU2_TR(0x555769);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x48ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B55576c:{NFSU2_TR(0x55576c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B55576f:{NFSU2_TR(0x55576f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B555772:{NFSU2_TR(0x555772);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x555777ull));
TAIL_STATIC(0x52b4d0u,52b);
}
B555777:L555777:{c.instructions+=2;NFSU2_TR(0x555777);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B555779:{NFSU2_TR(0x555779);
if(r1(R+518)){{goto L5557e1;}}
}
B55577b:L55577b:{c.instructions+=2;NFSU2_TR(0x55577b);
__builtin_memmove((R+4),(R+24),4);
}
B55577d:{NFSU2_TR(0x55577d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x555782ull));
TAIL_STATIC(0x5049a0u,504);
}
B555782:L555782:{c.instructions+=2;NFSU2_TR(0x555782);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B555784:{NFSU2_TR(0x555784);
if(r1(R+518)){{goto L5557e1;}}
}
B555786:L555786:{c.instructions+=1;NFSU2_TR(0x555786);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55578bull));
TAIL_STATIC(0x52b550u,52b);
}
B55578b:L55578b:{c.instructions+=2;NFSU2_TR(0x55578b);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B55578d:{NFSU2_TR(0x55578d);
if(r1(R+518)){{goto L5557e1;}}
}
B55578f:L55578f:{c.instructions+=2;NFSU2_TR(0x55578f);
__builtin_memmove((R+4),(R+24),4);
}
B555791:{NFSU2_TR(0x555791);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x555796ull));
TAIL_STATIC(0x5182e0u,518);
}
B555796:L555796:{c.instructions+=2;NFSU2_TR(0x555796);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B555798:{NFSU2_TR(0x555798);
if(r1(R+518)){{goto L5557e1;}}
}
B55579a:L55579a:{c.instructions+=2;NFSU2_TR(0x55579a);
__builtin_memmove((R+4),(R+24),4);
}
B55579c:{NFSU2_TR(0x55579c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5557a1ull));
TAIL_STATIC(0x518380u,518);
}
B5557a1:L5557a1:{c.instructions+=2;NFSU2_TR(0x5557a1);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5557a3:{NFSU2_TR(0x5557a3);
if(r1(R+518)){{goto L5557e1;}}
}
B5557a5:L5557a5:{c.instructions+=2;NFSU2_TR(0x5557a5);
__builtin_memmove((R+4),(R+24),4);
}
B5557a7:{NFSU2_TR(0x5557a7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5557acull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5554a0u);}goto L5554a0;}
}
B5557ac:L5557ac:{c.instructions+=2;NFSU2_TR(0x5557ac);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5557ae:{NFSU2_TR(0x5557ae);
if(r1(R+518)){{goto L5557e1;}}
}
B5557b0:L5557b0:{c.instructions+=2;NFSU2_TR(0x5557b0);
__builtin_memmove((R+4),(R+24),4);
}
B5557b2:{NFSU2_TR(0x5557b2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5557b7ull));
TAIL_STATIC(0x551580u,551);
}
B5557b7:L5557b7:{c.instructions+=2;NFSU2_TR(0x5557b7);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5557b9:{NFSU2_TR(0x5557b9);
if(r1(R+518)){{goto L5557e1;}}
}
B5557bb:L5557bb:{c.instructions+=2;NFSU2_TR(0x5557bb);
__builtin_memmove((R+4),(R+24),4);
}
B5557bd:{NFSU2_TR(0x5557bd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5557c2ull));
TAIL_STATIC(0x5184e0u,518);
}
B5557c2:L5557c2:{c.instructions+=2;NFSU2_TR(0x5557c2);
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
B5557c4:{NFSU2_TR(0x5557c4);
if(r1(R+518)){{goto L5557e1;}}
}
B5557c6:L5557c6:{c.instructions+=7;NFSU2_TR(0x5557c6);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B5557c9:{NFSU2_TR(0x5557c9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5557cb:{NFSU2_TR(0x5557cb);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x16ull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5557ce:{NFSU2_TR(0x5557ce);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5557d1:{NFSU2_TR(0x5557d1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5557d3:{NFSU2_TR(0x5557d3);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5557d4:{NFSU2_TR(0x5557d4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5557d9ull));
TAIL_STATIC(0x52b370u,52b);
}
B5557d9:L5557d9:{c.instructions+=2;NFSU2_TR(0x5557d9);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5557db:{NFSU2_TR(0x5557db);
if(r1(R+518)){{goto L5557e1;}}
}
B5557dd:L5557dd:{c.instructions+=2;NFSU2_TR(0x5557dd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+12),(U+0),4);
}
B5557df:{NFSU2_TR(0x5557df);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
s4(u32(r4(R+24)),r4(U+0));
}
B5557e1:L5557e1:{c.instructions+=3;NFSU2_TR(0x5557e1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5557e3:{NFSU2_TR(0x5557e3);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
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
B5557e5:{NFSU2_TR(0x5557e5);
if(r1(R+518)){{goto L5557ed;}}
}
B5557e7:L5557e7:{c.instructions+=3;NFSU2_TR(0x5557e7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5557e9:{NFSU2_TR(0x5557e9);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5557eb:{NFSU2_TR(0x5557eb);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5557edull));
{u32 t_=u32(r4(U+4));TAIL_DYNAMIC(t_);}
}
B5557ed:L5557ed:{c.instructions+=6;NFSU2_TR(0x5557ed);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
s4(u32(r4(R+24)),r4(U+0));
}
B5557ef:{NFSU2_TR(0x5557ef);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5557f0:{NFSU2_TR(0x5557f0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5557f1:{NFSU2_TR(0x5557f1);
__builtin_memmove((R+0),(R+12),4);
}
B5557f3:{NFSU2_TR(0x5557f3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5557f4:{NFSU2_TR(0x5557f4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B555800:L555800:{c.instructions+=28;NFSU2_TR(0x555800);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x50ull))));
}
B555803:{NFSU2_TR(0x555803);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B555805:{NFSU2_TR(0x555805);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B555809:{NFSU2_TR(0x555809);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+16)),r4(U+0));
}
B55580d:{NFSU2_TR(0x55580d);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B555811:{NFSU2_TR(0x555811);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B555815:{NFSU2_TR(0x555815);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B555819:{NFSU2_TR(0x555819);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B55581d:{NFSU2_TR(0x55581d);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B555821:{NFSU2_TR(0x555821);
u8 U[8];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B555825:{NFSU2_TR(0x555825);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B555829:{NFSU2_TR(0x555829);
u8 U[8];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B55582d:{NFSU2_TR(0x55582d);
u8 U[8];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B555831:{NFSU2_TR(0x555831);
u8 U[8];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B555835:{NFSU2_TR(0x555835);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B555836:{NFSU2_TR(0x555836);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B555838:{NFSU2_TR(0x555838);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B55583b:{NFSU2_TR(0x55583b);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B55583d:{NFSU2_TR(0x55583d);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x3ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B555840:{NFSU2_TR(0x555840);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B555841:{NFSU2_TR(0x555841);
u8 U[8];
w4(U+0,u32(u32(u32(0x5cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B555845:{NFSU2_TR(0x555845);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B555846:{NFSU2_TR(0x555846);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B555847:{NFSU2_TR(0x555847);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B55584d:{NFSU2_TR(0x55584d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55584e:{NFSU2_TR(0x55584e);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55584f:{NFSU2_TR(0x55584f);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B555853:{NFSU2_TR(0x555853);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x555858ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x555720u);}goto L555720;}
}
B555858:L555858:{c.instructions+=2;NFSU2_TR(0x555858);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x50ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x50ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x50ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B55585b:{NFSU2_TR(0x55585b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B555860:L555860:{c.instructions+=18;NFSU2_TR(0x555860);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B555862:{NFSU2_TR(0x555862);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B555868:{NFSU2_TR(0x555868);
u8 U[4];
w4(U+0,u32(0x776fa8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55586d:{NFSU2_TR(0x55586d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55586e:{NFSU2_TR(0x55586e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B555875:{NFSU2_TR(0x555875);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x8ull))));
}
B555878:{NFSU2_TR(0x555878);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B555879:{NFSU2_TR(0x555879);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55587a:{NFSU2_TR(0x55587a);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B55587e:{NFSU2_TR(0x55587e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55587f:{NFSU2_TR(0x55587f);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B555880:{NFSU2_TR(0x555880);
__builtin_memmove((R+12),(R+4),4);
}
B555882:{NFSU2_TR(0x555882);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xf4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B555888:{NFSU2_TR(0x555888);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xecull))));
__builtin_memmove((R+28),(U+0),4);
}
B55588e:{NFSU2_TR(0x55588e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55588f:{NFSU2_TR(0x55588f);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B555890:{NFSU2_TR(0x555890);
__builtin_memmove((R+4),(R+28),4);
}
B555892:{NFSU2_TR(0x555892);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x555897ull));
TAIL_STATIC(0x519e50u,519);
}
B555897:L555897:{c.instructions+=3;NFSU2_TR(0x555897);
__builtin_memmove((R+24),(R+0),4);
}
B555899:{NFSU2_TR(0x555899);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B55589b:{NFSU2_TR(0x55589b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5558ed;}}
}
B55589d:L55589d:{c.instructions+=2;NFSU2_TR(0x55589d);
__builtin_memmove((R+0),(R+20),4);
}
B55589f:{NFSU2_TR(0x55589f);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((R+8),(U+0),4);
}
B5558a2:L5558a2:{c.instructions+=4;NFSU2_TR(0x5558a2);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((R+4),(U+0),1);
}
B5558a4:{NFSU2_TR(0x5558a4);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B5558a5:{NFSU2_TR(0x5558a5);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5558a7:{NFSU2_TR(0x5558a7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5558a2u);}goto L5558a2;}}
}
B5558a9:L5558a9:{c.instructions+=7;NFSU2_TR(0x5558a9);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+8))));
}
B5558ab:{NFSU2_TR(0x5558ab);
__builtin_memmove((R+8),(R+0),1);
}
B5558ad:{NFSU2_TR(0x5558ad);
w4(R+0,u32(s32(s8(r1(R+8)))));
}
B5558b0:{NFSU2_TR(0x5558b0);
u8 U[12];
w4(U+0,u32(u32(u32(0xffffffffull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+20))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B5558b4:{NFSU2_TR(0x5558b4);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+4))),1);
__builtin_memmove((R+0),(U+0),1);
}
B5558b6:{NFSU2_TR(0x5558b6);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x2full))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5558b8:{NFSU2_TR(0x5558b8);
if(r1(R+518)){{goto L5558d2;}}
}
B5558ba:L5558ba:{c.instructions+=1;NFSU2_TR(0x5558ba);
__builtin_memmove((R+12),(R+12),4);
}
B5558c0:L5558c0:{c.instructions+=2;NFSU2_TR(0x5558c0);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x5cull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5558c2:{NFSU2_TR(0x5558c2);
if(r1(R+518)){{goto L5558d2;}}
}
B5558c4:L5558c4:{c.instructions+=2;NFSU2_TR(0x5558c4);
u8 U[1];
w1(R+523,u8(0x0ull));
w1(U+0,u8(u32(r1(R+8))&u32(r1(R+8))));
w1(R+519,u8(s8(r1(U+0))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5558c6:{NFSU2_TR(0x5558c6);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5558d4;}}
}
B5558c8:L5558c8:{c.instructions+=5;NFSU2_TR(0x5558c8);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xffffffffull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5558cb:{NFSU2_TR(0x5558cb);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
}
B5558cc:{NFSU2_TR(0x5558cc);
w1(R+8,u8(u32(r1(R+8))-u32(u8(0x1ull))));
}
B5558ce:{NFSU2_TR(0x5558ce);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x2full))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5558d0:{NFSU2_TR(0x5558d0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5558c0u);}goto L5558c0;}}
}
B5558d2:L5558d2:{c.instructions+=1;NFSU2_TR(0x5558d2);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(r1(R+8))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5558d4:L5558d4:{c.instructions+=1;NFSU2_TR(0x5558d4);
if(r1(R+518)){{goto L5558d7;}}
}
B5558d6:L5558d6:{c.instructions+=1;NFSU2_TR(0x5558d6);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B5558d7:L5558d7:{c.instructions+=5;NFSU2_TR(0x5558d7);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5558da:{NFSU2_TR(0x5558da);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5558db:{NFSU2_TR(0x5558db);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5558dc:{NFSU2_TR(0x5558dc);
__builtin_memmove((R+4),(R+28),4);
}
B5558de:{NFSU2_TR(0x5558de);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5558e3ull));
TAIL_STATIC(0x519e50u,519);
}
B5558e3:L5558e3:{c.instructions+=3;NFSU2_TR(0x5558e3);
__builtin_memmove((R+24),(R+0),4);
}
B5558e5:{NFSU2_TR(0x5558e5);
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
B5558e7:{NFSU2_TR(0x5558e7);
if(r1(R+518)){{goto L555975;}}
}
B5558ed:L5558ed:{c.instructions+=7;NFSU2_TR(0x5558ed);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0x79aaecull));
s4(u32(r4(U+0)),r4(U+4));
}
B5558f5:{NFSU2_TR(0x5558f5);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5558f9:{NFSU2_TR(0x5558f9);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5558fa:{NFSU2_TR(0x5558fa);
__builtin_memmove((R+4),(R+24),4);
}
B5558fc:{NFSU2_TR(0x5558fc);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B555904:{NFSU2_TR(0x555904);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x15ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B555908:{NFSU2_TR(0x555908);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55590dull));
TAIL_STATIC(0x504880u,504);
}
B55590d:L55590d:{c.instructions+=3;NFSU2_TR(0x55590d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55590e:{NFSU2_TR(0x55590e);
__builtin_memmove((R+4),(R+28),4);
}
B555910:{NFSU2_TR(0x555910);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x555915ull));
TAIL_STATIC(0x505400u,505);
}
B555915:L555915:{c.instructions+=2;NFSU2_TR(0x555915);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B55591d:{NFSU2_TR(0x55591d);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0x79aa4cull));
s4(u32(r4(U+0)),r4(U+4));
}
B555925:L555925:{c.instructions+=12;NFSU2_TR(0x555925);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B555929:{NFSU2_TR(0x555929);
u8 U[5];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+8,u32(r1(U+4)));
}
B55592e:{NFSU2_TR(0x55592e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B555931:{NFSU2_TR(0x555931);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B555934:{NFSU2_TR(0x555934);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B555937:{NFSU2_TR(0x555937);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B55593a:{NFSU2_TR(0x55593a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B55593d:{NFSU2_TR(0x55593d);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+12))),1);
__builtin_memmove((R+0),(U+0),1);
}
B55593f:{NFSU2_TR(0x55593f);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B555942:{NFSU2_TR(0x555942);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B555948:{NFSU2_TR(0x555948);
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
B55594a:{NFSU2_TR(0x55594a);
if(r1(R+518)){{goto L555952;}}
}
B55594c:L55594c:{c.instructions+=3;NFSU2_TR(0x55594c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B55594e:{NFSU2_TR(0x55594e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55594f:{NFSU2_TR(0x55594f);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x555952ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B555952:L555952:{c.instructions+=3;NFSU2_TR(0x555952);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B555953:{NFSU2_TR(0x555953);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xdcull))));
__builtin_memmove((R+4),(U+0),4);
}
B555959:{NFSU2_TR(0x555959);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55595eull));
TAIL_STATIC(0x518280u,518);
}
B55595e:L55595e:{c.instructions+=1;NFSU2_TR(0x55595e);
__builtin_memmove((R+0),(R+24),4);
}
B555960:L555960:{c.instructions+=8;NFSU2_TR(0x555960);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B555964:{NFSU2_TR(0x555964);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B555965:{NFSU2_TR(0x555965);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B555966:{NFSU2_TR(0x555966);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B555967:{NFSU2_TR(0x555967);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B555968:{NFSU2_TR(0x555968);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B55596f:{NFSU2_TR(0x55596f);
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
B555972:{NFSU2_TR(0x555972);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B555975:L555975:{c.instructions+=8;NFSU2_TR(0x555975);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B55597b:{NFSU2_TR(0x55597b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B55597d:{NFSU2_TR(0x55597d);
u8 U[4];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B555981:{NFSU2_TR(0x555981);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B555982:{NFSU2_TR(0x555982);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B555986:{NFSU2_TR(0x555986);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B555987:{NFSU2_TR(0x555987);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B555988:{NFSU2_TR(0x555988);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55598aull));
{u32 t_=u32(r4(U+4));TAIL_DYNAMIC(t_);}
}
B55598a:L55598a:{c.instructions+=2;NFSU2_TR(0x55598a);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B55598c:{NFSU2_TR(0x55598c);
if(r1(R+518)){{goto L5559b7;}}
}
B55598e:L55598e:{c.instructions+=4;NFSU2_TR(0x55598e);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B555990:{NFSU2_TR(0x555990);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B555991:{NFSU2_TR(0x555991);
__builtin_memmove((R+4),(R+12),4);
}
B555993:{NFSU2_TR(0x555993);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x555998ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x555800u);}goto L555800;}
}
B555998:L555998:{c.instructions+=4;NFSU2_TR(0x555998);
__builtin_memmove((R+24),(R+0),4);
}
B55599a:{NFSU2_TR(0x55599a);
u8 U[5];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B55599e:{NFSU2_TR(0x55599e);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5559a0:{NFSU2_TR(0x5559a0);
if(r1(R+518)){{goto L5559af;}}
}
B5559a2:L5559a2:{c.instructions+=3;NFSU2_TR(0x5559a2);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5559a6:{NFSU2_TR(0x5559a6);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5559a7:{NFSU2_TR(0x5559a7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5559acull));
TAIL_STATIC(0x575630u,575);
}
B5559ac:L5559ac:{c.instructions+=1;NFSU2_TR(0x5559ac);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5559af:L5559af:{c.instructions+=2;NFSU2_TR(0x5559af);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5559b1:{NFSU2_TR(0x5559b1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x555925u);}goto L555925;}}
}
B5559b7:L5559b7:{c.instructions+=2;NFSU2_TR(0x5559b7);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5559b9:{NFSU2_TR(0x5559b9);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x555960u);}goto L555960;}
}
B5559c0:L5559c0:{c.instructions+=11;NFSU2_TR(0x5559c0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x10ull))));
}
B5559c3:{NFSU2_TR(0x5559c3);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5559c4:{NFSU2_TR(0x5559c4);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5559c5:{NFSU2_TR(0x5559c5);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5559c7:{NFSU2_TR(0x5559c7);
__builtin_memmove((R+8),(R+4),4);
}
B5559c9:{NFSU2_TR(0x5559c9);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5559ca:{NFSU2_TR(0x5559ca);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5559ce:{NFSU2_TR(0x5559ce);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5559d2:{NFSU2_TR(0x5559d2);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5559d6:{NFSU2_TR(0x5559d6);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5559d7:{NFSU2_TR(0x5559d7);
{goto L5559e0;}
}
B5559e0:L5559e0:{c.instructions+=3;NFSU2_TR(0x5559e0);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x412cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5559e6:{NFSU2_TR(0x5559e6);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5559e8:{NFSU2_TR(0x5559e8);
if(r1(R+518)){{goto L555cf2;}}
}
B5559ee:L5559ee:{c.instructions+=4;NFSU2_TR(0x5559ee);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5559f1:{NFSU2_TR(0x5559f1);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x412cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5559f7:{NFSU2_TR(0x5559f7);
u8 U[16];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4130ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+24))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B5559fd:{NFSU2_TR(0x5559fd);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L555a08;}}
}
B5559ff:L5559ff:{c.instructions+=2;NFSU2_TR(0x5559ff);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B555a02:{NFSU2_TR(0x555a02);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4130ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B555a08:L555a08:{c.instructions+=3;NFSU2_TR(0x555a08);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B555a0b:{NFSU2_TR(0x555a0b);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B555a0d:{NFSU2_TR(0x555a0d);
if(r1(R+518)){{goto L555a15;}}
}
B555a0f:L555a0f:{c.instructions+=2;NFSU2_TR(0x555a0f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B555a12:{NFSU2_TR(0x555a12);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B555a15:L555a15:{c.instructions+=3;NFSU2_TR(0x555a15);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B555a18:{NFSU2_TR(0x555a18);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B555a1a:{NFSU2_TR(0x555a1a);
if(r1(R+518)){{goto L555a22;}}
}
B555a1c:L555a1c:{c.instructions+=2;NFSU2_TR(0x555a1c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B555a1f:{NFSU2_TR(0x555a1f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B555a22:L555a22:{c.instructions+=7;NFSU2_TR(0x555a22);
w4(R+0,u32(0xabadcafeull));
}
B555a27:{NFSU2_TR(0x555a27);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B555a2a:{NFSU2_TR(0x555a2a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B555a2d:{NFSU2_TR(0x555a2d);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4128ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B555a33:{NFSU2_TR(0x555a33);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B555a36:{NFSU2_TR(0x555a36);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B555a38:{NFSU2_TR(0x555a38);
if(r1(R+518)){{goto L555a43;}}
}
B555a3a:L555a3a:{c.instructions+=3;NFSU2_TR(0x555a3a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B555a3d:{NFSU2_TR(0x555a3d);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B555a41:{NFSU2_TR(0x555a41);
{goto L555a4b;}
}
B555a43:L555a43:{c.instructions+=1;NFSU2_TR(0x555a43);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B555a4b:L555a4b:{c.instructions+=2;NFSU2_TR(0x555a4b);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B555a4f:{NFSU2_TR(0x555a4f);
if(r1(R+518)){{goto L555b28;}}
}
B555a55:L555a55:{c.instructions+=3;NFSU2_TR(0x555a55);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B555a59:{NFSU2_TR(0x555a59);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B555a5b:{NFSU2_TR(0x555a5b);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L555b28;}}
}
B555a61:L555a61:{c.instructions+=3;NFSU2_TR(0x555a61);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B555a64:{NFSU2_TR(0x555a64);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B555a66:{NFSU2_TR(0x555a66);
if(r1(R+518)){{goto L555aa2;}}
}
B555a68:L555a68:{c.instructions+=4;NFSU2_TR(0x555a68);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B555a6e:{NFSU2_TR(0x555a6e);
w1(R+4,u8(u32(r1(R+4))^u32(r1(R+4))));
}
B555a70:{NFSU2_TR(0x555a70);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B555a72:{NFSU2_TR(0x555a72);
if(r1(R+518)){{goto L555a8b;}}
}
B555a74:L555a74:{c.instructions+=2;NFSU2_TR(0x555a74);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B555a76:{NFSU2_TR(0x555a76);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L555aa2;}}
}
B555a78:L555a78:{c.instructions+=2;NFSU2_TR(0x555a78);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B555a7a:{NFSU2_TR(0x555a7a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L555a80;}}
}
B555a7c:L555a7c:{c.instructions+=2;NFSU2_TR(0x555a7c);
w1(R+4,u8(0x1ull));
}
B555a7e:{NFSU2_TR(0x555a7e);
{goto L555a83;}
}
B555a80:L555a80:{c.instructions+=1;NFSU2_TR(0x555a80);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B555a83:L555a83:{c.instructions+=2;NFSU2_TR(0x555a83);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B555a85:{NFSU2_TR(0x555a85);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x555a74u);}goto L555a74;}}
}
B555a87:L555a87:{c.instructions+=2;NFSU2_TR(0x555a87);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B555a89:{NFSU2_TR(0x555a89);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L555aa2;}}
}
B555a8b:L555a8b:{c.instructions+=2;NFSU2_TR(0x555a8b);
u8 U[4];
w4(U+0,u32(0x79ccb8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B555a90:{NFSU2_TR(0x555a90);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x555a95ull));
TAIL_STATIC(0x50d510u,50d);
}
B555a95:L555a95:{c.instructions+=3;NFSU2_TR(0x555a95);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B555a98:{NFSU2_TR(0x555a98);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B555a9b:{NFSU2_TR(0x555a9b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3cull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B555aa2:L555aa2:{c.instructions+=2;NFSU2_TR(0x555aa2);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x2ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B555aa6:{NFSU2_TR(0x555aa6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L555ac9;}}
}
B555aa8:L555aa8:{c.instructions+=5;NFSU2_TR(0x555aa8);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B555aae:{NFSU2_TR(0x555aae);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B555ab0:{NFSU2_TR(0x555ab0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B555ab3:{NFSU2_TR(0x555ab3);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B555ab6:{NFSU2_TR(0x555ab6);
if(r1(R+518)){{goto L555ad7;}}
}
B555ab8:L555ab8:{c.instructions+=2;NFSU2_TR(0x555ab8);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+4))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B555abb:{NFSU2_TR(0x555abb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L555ac0;}}
}
B555abd:L555abd:{c.instructions+=1;NFSU2_TR(0x555abd);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3cull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B555ac0:L555ac0:{c.instructions+=3;NFSU2_TR(0x555ac0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B555ac3:{NFSU2_TR(0x555ac3);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B555ac5:{NFSU2_TR(0x555ac5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x555ab8u);}goto L555ab8;}}
}
B555ac7:L555ac7:{c.instructions+=1;NFSU2_TR(0x555ac7);
{goto L555ad7;}
}
B555ac9:L555ac9:{c.instructions+=4;NFSU2_TR(0x555ac9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B555acc:{NFSU2_TR(0x555acc);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B555acf:{NFSU2_TR(0x555acf);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B555ad3:{NFSU2_TR(0x555ad3);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B555ad7:L555ad7:{c.instructions+=4;NFSU2_TR(0x555ad7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B555ada:{NFSU2_TR(0x555ada);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B555add:{NFSU2_TR(0x555add);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B555adf:{NFSU2_TR(0x555adf);
if(r1(R+518)){{goto L555af3;}}
}
B555ae1:L555ae1:{c.instructions+=6;NFSU2_TR(0x555ae1);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B555ae4:{NFSU2_TR(0x555ae4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))|u32(r4(U+4))));
}
B555ae7:{NFSU2_TR(0x555ae7);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B555aea:{NFSU2_TR(0x555aea);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B555aed:{NFSU2_TR(0x555aed);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B555af0:{NFSU2_TR(0x555af0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B555af3:L555af3:{c.instructions+=2;NFSU2_TR(0x555af3);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x2ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B555af7:{NFSU2_TR(0x555af7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L555b10;}}
}
B555af9:L555af9:{c.instructions+=3;NFSU2_TR(0x555af9);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B555aff:{NFSU2_TR(0x555aff);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B555b01:{NFSU2_TR(0x555b01);
if(r1(R+518)){{goto L555b10;}}
}
B555b03:L555b03:{c.instructions+=5;NFSU2_TR(0x555b03);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B555b06:{NFSU2_TR(0x555b06);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B555b09:{NFSU2_TR(0x555b09);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B555b0c:{NFSU2_TR(0x555b0c);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B555b0e:{NFSU2_TR(0x555b0e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x555b03u);}goto L555b03;}}
}
B555b10:L555b10:{c.instructions+=4;NFSU2_TR(0x555b10);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B555b13:{NFSU2_TR(0x555b13);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B555b14:{NFSU2_TR(0x555b14);
__builtin_memmove((R+4),(R+8),4);
}
B555b16:{NFSU2_TR(0x555b16);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x555b1bull));
TAIL_STATIC(0x5362e0u,536);
}
B555b1b:L555b1b:{c.instructions+=4;NFSU2_TR(0x555b1b);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B555b1f:{NFSU2_TR(0x555b1f);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B555b23:{NFSU2_TR(0x555b23);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B555b24:{NFSU2_TR(0x555b24);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B555b28:L555b28:{c.instructions+=2;NFSU2_TR(0x555b28);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x2ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B555b2c:{NFSU2_TR(0x555b2c);
if(r1(R+518)){{goto L555c13;}}
}
B555b32:L555b32:{c.instructions+=6;NFSU2_TR(0x555b32);
__builtin_memmove((R+20),gp(0x8384c4),4);
}
B555b38:{NFSU2_TR(0x555b38);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B555b3b:{NFSU2_TR(0x555b3b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B555b3e:{NFSU2_TR(0x555b3e);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x10ull))));
}
B555b41:{NFSU2_TR(0x555b41);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B555b43:{NFSU2_TR(0x555b43);
if(r1(R+518)){{goto L555c13;}}
}
B555b49:L555b49:{c.instructions+=1;NFSU2_TR(0x555b49);
__builtin_memmove((R+16),(R+16),4);
}
B555b50:L555b50:{c.instructions+=4;NFSU2_TR(0x555b50);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B555b53:{NFSU2_TR(0x555b53);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B555b54:{NFSU2_TR(0x555b54);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B555b55:{NFSU2_TR(0x555b55);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x555b5aull));
TAIL_STATIC(0x43dcc0u,43d);
}
B555b5a:L555b5a:{c.instructions+=3;NFSU2_TR(0x555b5a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B555b5d:{NFSU2_TR(0x555b5d);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B555b5f:{NFSU2_TR(0x555b5f);
if(r1(R+518)){{goto L555b6c;}}
}
B555b61:L555b61:{c.instructions+=3;NFSU2_TR(0x555b61);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+28),(U+0),4);
}
B555b63:{NFSU2_TR(0x555b63);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B555b65:{NFSU2_TR(0x555b65);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x555b50u);}goto L555b50;}}
}
B555b67:L555b67:{c.instructions+=1;NFSU2_TR(0x555b67);
{goto L555c0f;}
}
B555b6c:L555b6c:{c.instructions+=12;NFSU2_TR(0x555b6c);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B555b70:{NFSU2_TR(0x555b70);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B555b73:{NFSU2_TR(0x555b73);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B555b76:{NFSU2_TR(0x555b76);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B555b7a:{NFSU2_TR(0x555b7a);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B555b7c:{NFSU2_TR(0x555b7c);
__builtin_memmove((R+8),(R+12),1);
}
B555b7e:{NFSU2_TR(0x555b7e);
w1(R+8,u8(u32(r1(R+8))+u32(u8(0x1ull))));
}
B555b80:{NFSU2_TR(0x555b80);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B555b81:{NFSU2_TR(0x555b81);
__builtin_memmove((R+4),(R+28),4);
}
B555b83:{NFSU2_TR(0x555b83);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B555b84:{NFSU2_TR(0x555b84);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B555b85:{NFSU2_TR(0x555b85);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x555b8aull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x555860u);}goto L555860;}
}
B555b8a:L555b8a:{c.instructions+=2;NFSU2_TR(0x555b8a);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B555b8c:{NFSU2_TR(0x555b8c);
if(r1(R+518)){{goto L555be3;}}
}
B555b8e:L555b8e:{c.instructions+=3;NFSU2_TR(0x555b8e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B555b91:{NFSU2_TR(0x555b91);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x1ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B555b94:{NFSU2_TR(0x555b94);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L555bb5;}}
}
B555b96:L555b96:{c.instructions+=2;NFSU2_TR(0x555b96);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B555b98:{NFSU2_TR(0x555b98);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L555bb5;}}
}
B555b9a:L555b9a:{c.instructions+=10;NFSU2_TR(0x555b9a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B555b9d:{NFSU2_TR(0x555b9d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B555ba0:{NFSU2_TR(0x555ba0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B555ba3:{NFSU2_TR(0x555ba3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B555ba6:{NFSU2_TR(0x555ba6);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B555ba9:{NFSU2_TR(0x555ba9);
w4(R+28,u32(~u32(r4(R+28))));
}
B555bab:{NFSU2_TR(0x555bab);
w4(R+4,u32(u32(r4(R+4))&u32(r4(R+28))));
}
B555bad:{NFSU2_TR(0x555bad);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B555bb0:{NFSU2_TR(0x555bb0);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B555bb3:{NFSU2_TR(0x555bb3);
{goto L555be3;}
}
B555bb5:L555bb5:{c.instructions+=2;NFSU2_TR(0x555bb5);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B555bb8:{NFSU2_TR(0x555bb8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L555be3;}}
}
B555bba:L555bba:{c.instructions+=5;NFSU2_TR(0x555bba);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B555bbe:{NFSU2_TR(0x555bbe);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B555bc1:{NFSU2_TR(0x555bc1);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B555bc7:{NFSU2_TR(0x555bc7);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B555bc9:{NFSU2_TR(0x555bc9);
if(r1(R+518)){{goto L555be3;}}
}
B555bcb:L555bcb:{c.instructions+=1;NFSU2_TR(0x555bcb);
{goto L555bd0;}
}
B555bd0:L555bd0:{c.instructions+=3;NFSU2_TR(0x555bd0);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B555bd4:{NFSU2_TR(0x555bd4);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B555bd7:{NFSU2_TR(0x555bd7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L555bdc;}}
}
B555bd9:L555bd9:{c.instructions+=1;NFSU2_TR(0x555bd9);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x3cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B555bdc:L555bdc:{c.instructions+=3;NFSU2_TR(0x555bdc);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B555bdf:{NFSU2_TR(0x555bdf);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B555be1:{NFSU2_TR(0x555be1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x555bd0u);}goto L555bd0;}}
}
B555be3:L555be3:{c.instructions+=2;NFSU2_TR(0x555be3);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x10ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B555be7:{NFSU2_TR(0x555be7);
if(r1(R+518)){{goto L555c0f;}}
}
B555be9:L555be9:{c.instructions+=4;NFSU2_TR(0x555be9);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B555bed:{NFSU2_TR(0x555bed);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B555bf3:{NFSU2_TR(0x555bf3);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B555bf5:{NFSU2_TR(0x555bf5);
if(r1(R+518)){{goto L555c0f;}}
}
B555bf7:L555bf7:{c.instructions+=2;NFSU2_TR(0x555bf7);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B555bf9:{NFSU2_TR(0x555bf9);
if(r1(R+518)){{goto L555c08;}}
}
B555bfb:L555bfb:{c.instructions+=5;NFSU2_TR(0x555bfb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B555bfe:{NFSU2_TR(0x555bfe);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B555c01:{NFSU2_TR(0x555c01);
w4(R+8,u32(~u32(r4(R+8))));
}
B555c03:{NFSU2_TR(0x555c03);
w4(R+28,u32(u32(r4(R+28))&u32(r4(R+8))));
}
B555c05:{NFSU2_TR(0x555c05);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B555c08:L555c08:{c.instructions+=3;NFSU2_TR(0x555c08);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B555c0b:{NFSU2_TR(0x555c0b);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B555c0d:{NFSU2_TR(0x555c0d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x555bf7u);}goto L555bf7;}}
}
B555c0f:L555c0f:{c.instructions+=1;NFSU2_TR(0x555c0f);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B555c13:L555c13:{c.instructions+=2;NFSU2_TR(0x555c13);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x4ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B555c17:{NFSU2_TR(0x555c17);
if(r1(R+518)){{goto L555c6b;}}
}
B555c19:L555c19:{c.instructions+=4;NFSU2_TR(0x555c19);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B555c1c:{NFSU2_TR(0x555c1c);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B555c1f:{NFSU2_TR(0x555c1f);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B555c21:{NFSU2_TR(0x555c21);
if(r1(R+518)){{goto L555c67;}}
}
B555c23:L555c23:{c.instructions+=25;NFSU2_TR(0x555c23);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B555c26:{NFSU2_TR(0x555c26);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B555c29:{NFSU2_TR(0x555c29);
__builtin_memmove((R+28),(R+20),4);
}
B555c2b:{NFSU2_TR(0x555c2b);
w4(R+28,u32(u32(r4(R+28))&u32(r4(R+0))));
}
B555c2d:{NFSU2_TR(0x555c2d);
__builtin_memmove((R+0),(R+28),4);
}
B555c2f:{NFSU2_TR(0x555c2f);
w4(R+0,u32(~u32(r4(R+0))));
}
B555c31:{NFSU2_TR(0x555c31);
w4(R+0,u32(u32(r4(R+0))&u32(r4(R+20))));
}
B555c33:{NFSU2_TR(0x555c33);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B555c36:{NFSU2_TR(0x555c36);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B555c39:{NFSU2_TR(0x555c39);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B555c3c:{NFSU2_TR(0x555c3c);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B555c3f:{NFSU2_TR(0x555c3f);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B555c42:{NFSU2_TR(0x555c42);
w4(R+0,u32(u32(r4(R+0))|u32(r4(R+28))));
}
B555c44:{NFSU2_TR(0x555c44);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B555c47:{NFSU2_TR(0x555c47);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B555c4a:{NFSU2_TR(0x555c4a);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B555c4d:{NFSU2_TR(0x555c4d);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B555c50:{NFSU2_TR(0x555c50);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B555c53:{NFSU2_TR(0x555c53);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B555c54:{NFSU2_TR(0x555c54);
u8 U[4];
w4(U+0,u32(0xfffffffcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B555c56:{NFSU2_TR(0x555c56);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B555c57:{NFSU2_TR(0x555c57);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B555c5b:{NFSU2_TR(0x555c5b);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B555c5d:{NFSU2_TR(0x555c5d);
u8 U[4];
w4(U+0,u32(0x334c5493ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B555c62:{NFSU2_TR(0x555c62);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x555c67ull));
TAIL_STATIC(0x51aa20u,51a);
}
B555c67:L555c67:{c.instructions+=1;NFSU2_TR(0x555c67);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B555c6b:L555c6b:{c.instructions+=2;NFSU2_TR(0x555c6b);
u8 U[9];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+8,u8(u32(r1(U+4))&u32(u8(0x8ull))));
w1(R+519,u8(s8(r1(U+8))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+8))==(u8(0x0ull))));
w1(U+5,u8(u32(r1(U+8))&u32(u8(0xffull))));
w1(U+6,u8(__builtin_popcountll(u64(r1(U+5)))));
w1(U+7,u8(u32(r1(U+6))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+7))==(u8(0x0ull))));
}
B555c6f:{NFSU2_TR(0x555c6f);
if(r1(R+518)){{goto L555ce1;}}
}
B555c71:L555c71:{c.instructions+=3;NFSU2_TR(0x555c71);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B555c77:{NFSU2_TR(0x555c77);
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
B555c79:{NFSU2_TR(0x555c79);
if(r1(R+518)){{goto L555ce1;}}
}
B555c7b:L555c7b:{c.instructions+=2;NFSU2_TR(0x555c7b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B555c7e:{NFSU2_TR(0x555c7e);
__builtin_memmove((R+28),(R+28),4);
}
B555c80:L555c80:{c.instructions+=2;NFSU2_TR(0x555c80);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B555c83:{NFSU2_TR(0x555c83);
if(r1(R+518)){{goto L555c9d;}}
}
B555c85:L555c85:{c.instructions+=3;NFSU2_TR(0x555c85);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B555c88:{NFSU2_TR(0x555c88);
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
B555c8a:{NFSU2_TR(0x555c8a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x555c80u);}goto L555c80;}}
}
B555c8c:L555c8c:{c.instructions+=4;NFSU2_TR(0x555c8c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B555c8e:{NFSU2_TR(0x555c8e);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B555c90:{NFSU2_TR(0x555c90);
__builtin_memmove((R+4),(R+24),4);
}
B555c92:{NFSU2_TR(0x555c92);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x555c94ull));
{u32 t_=u32(r4(U+4));TAIL_DYNAMIC(t_);}
}
B555c94:L555c94:{c.instructions+=2;NFSU2_TR(0x555c94);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B555c98:{NFSU2_TR(0x555c98);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5559e0u);}goto L5559e0;}
}
B555c9d:L555c9d:{c.instructions+=25;NFSU2_TR(0x555c9d);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B555ca0:{NFSU2_TR(0x555ca0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B555ca3:{NFSU2_TR(0x555ca3);
__builtin_memmove((R+28),(R+20),4);
}
B555ca5:{NFSU2_TR(0x555ca5);
w4(R+28,u32(u32(r4(R+28))&u32(r4(R+0))));
}
B555ca7:{NFSU2_TR(0x555ca7);
__builtin_memmove((R+0),(R+28),4);
}
B555ca9:{NFSU2_TR(0x555ca9);
w4(R+0,u32(~u32(r4(R+0))));
}
B555cab:{NFSU2_TR(0x555cab);
w4(R+0,u32(u32(r4(R+0))&u32(r4(R+20))));
}
B555cad:{NFSU2_TR(0x555cad);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B555cb0:{NFSU2_TR(0x555cb0);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B555cb3:{NFSU2_TR(0x555cb3);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B555cb6:{NFSU2_TR(0x555cb6);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B555cb9:{NFSU2_TR(0x555cb9);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B555cbc:{NFSU2_TR(0x555cbc);
w4(R+0,u32(u32(r4(R+0))|u32(r4(R+28))));
}
B555cbe:{NFSU2_TR(0x555cbe);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B555cc1:{NFSU2_TR(0x555cc1);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B555cc4:{NFSU2_TR(0x555cc4);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B555cc7:{NFSU2_TR(0x555cc7);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B555cca:{NFSU2_TR(0x555cca);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B555ccd:{NFSU2_TR(0x555ccd);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B555cce:{NFSU2_TR(0x555cce);
u8 U[4];
w4(U+0,u32(0xfffffffcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B555cd0:{NFSU2_TR(0x555cd0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B555cd1:{NFSU2_TR(0x555cd1);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B555cd5:{NFSU2_TR(0x555cd5);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B555cd7:{NFSU2_TR(0x555cd7);
u8 U[4];
w4(U+0,u32(0x334c5493ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B555cdc:{NFSU2_TR(0x555cdc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x555ce1ull));
TAIL_STATIC(0x51aa20u,51a);
}
B555ce1:L555ce1:{c.instructions+=4;NFSU2_TR(0x555ce1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B555ce3:{NFSU2_TR(0x555ce3);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B555ce5:{NFSU2_TR(0x555ce5);
__builtin_memmove((R+4),(R+24),4);
}
B555ce7:{NFSU2_TR(0x555ce7);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x555ce9ull));
{u32 t_=u32(r4(U+4));TAIL_DYNAMIC(t_);}
}
B555ce9:L555ce9:{c.instructions+=2;NFSU2_TR(0x555ce9);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B555ced:{NFSU2_TR(0x555ced);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5559e0u);}goto L5559e0;}
}
B555cf2:L555cf2:{c.instructions+=6;NFSU2_TR(0x555cf2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B555cf3:{NFSU2_TR(0x555cf3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B555cf4:{NFSU2_TR(0x555cf4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B555cf5:{NFSU2_TR(0x555cf5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B555cf6:{NFSU2_TR(0x555cf6);
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
B555cf9:{NFSU2_TR(0x555cf9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B555d00:L555d00:{c.instructions+=8;NFSU2_TR(0x555d00);
__builtin_memmove((R+0),gp(0x8384b0),4);
}
B555d05:{NFSU2_TR(0x555d05);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B555d06:{NFSU2_TR(0x555d06);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B555d07:{NFSU2_TR(0x555d07);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B555d08:{NFSU2_TR(0x555d08);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B555d09:{NFSU2_TR(0x555d09);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B555d0a:{NFSU2_TR(0x555d0a);
__builtin_memmove((R+28),(R+4),4);
}
B555d0c:{NFSU2_TR(0x555d0c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x555d11ull));
TAIL_STATIC(0x43f8f0u,43f);
}
B555d11:L555d11:{c.instructions+=4;NFSU2_TR(0x555d11);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B555d13:{NFSU2_TR(0x555d13);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B555d16:{NFSU2_TR(0x555d16);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B555d18:{NFSU2_TR(0x555d18);
if(r1(R+518)){{goto L555d31;}}
}
B555d1a:L555d1a:{c.instructions+=8;NFSU2_TR(0x555d1a);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B555d1e:{NFSU2_TR(0x555d1e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B555d21:{NFSU2_TR(0x555d21);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B555d24:{NFSU2_TR(0x555d24);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B555d27:{NFSU2_TR(0x555d27);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B555d2a:{NFSU2_TR(0x555d2a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B555d2d:{NFSU2_TR(0x555d2d);
__builtin_memmove((R+24),(R+0),4);
}
B555d2f:{NFSU2_TR(0x555d2f);
{goto L555d33;}
}
B555d31:L555d31:{c.instructions+=1;NFSU2_TR(0x555d31);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B555d33:L555d33:{c.instructions+=8;NFSU2_TR(0x555d33);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B555d37:{NFSU2_TR(0x555d37);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B555d3b:{NFSU2_TR(0x555d3b);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B555d3f:{NFSU2_TR(0x555d3f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B555d42:{NFSU2_TR(0x555d42);
__builtin_memmove((R+0),(R+12),4);
}
B555d44:{NFSU2_TR(0x555d44);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x6ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B555d47:{NFSU2_TR(0x555d47);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B555d4a:{NFSU2_TR(0x555d4a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L555d57;}}
}
B555d4c:L555d4c:{c.instructions+=3;NFSU2_TR(0x555d4c);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B555d4f:{NFSU2_TR(0x555d4f);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((R+0),(U+0),4);
}
B555d52:{NFSU2_TR(0x555d52);
{goto L555dd5;}
}
B555d57:L555d57:{c.instructions+=2;NFSU2_TR(0x555d57);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B555d5a:{NFSU2_TR(0x555d5a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L555d77;}}
}
B555d5c:L555d5c:{c.instructions+=3;NFSU2_TR(0x555d5c);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B555d5d:{NFSU2_TR(0x555d5d);
__builtin_memmove((R+4),(R+28),4);
}
B555d5f:{NFSU2_TR(0x555d5f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x555d64ull));
TAIL_STATIC(0x51ccd0u,51c);
}
B555d64:L555d64:{c.instructions+=2;NFSU2_TR(0x555d64);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B555d66:{NFSU2_TR(0x555d66);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x555d4cu);}goto L555d4c;}}
}
B555d68:L555d68:{c.instructions+=6;NFSU2_TR(0x555d68);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B555d6b:{NFSU2_TR(0x555d6b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+4)),r4(U+0));
}
B555d6d:{NFSU2_TR(0x555d6d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B555d70:{NFSU2_TR(0x555d70);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B555d73:{NFSU2_TR(0x555d73);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+24)),r4(U+0));
}
B555d75:{NFSU2_TR(0x555d75);
{goto L555ddf;}
}
B555d77:L555d77:{c.instructions+=2;NFSU2_TR(0x555d77);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B555d7a:{NFSU2_TR(0x555d7a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L555d9e;}}
}
B555d7c:L555d7c:{c.instructions+=3;NFSU2_TR(0x555d7c);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B555d7d:{NFSU2_TR(0x555d7d);
__builtin_memmove((R+4),(R+28),4);
}
B555d7f:{NFSU2_TR(0x555d7f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x555d84ull));
TAIL_STATIC(0x51ccd0u,51c);
}
B555d84:L555d84:{c.instructions+=2;NFSU2_TR(0x555d84);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B555d86:{NFSU2_TR(0x555d86);
if(r1(R+518)){{goto L555d8c;}}
}
B555d88:L555d88:{c.instructions+=2;NFSU2_TR(0x555d88);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B555d8a:{NFSU2_TR(0x555d8a);
{goto L555dd5;}
}
B555d8c:L555d8c:{c.instructions+=7;NFSU2_TR(0x555d8c);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B555d8f:{NFSU2_TR(0x555d8f);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((R+0),(U+0),4);
}
B555d92:{NFSU2_TR(0x555d92);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+4)),r4(U+0));
}
B555d94:{NFSU2_TR(0x555d94);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B555d97:{NFSU2_TR(0x555d97);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B555d9a:{NFSU2_TR(0x555d9a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+24)),r4(U+0));
}
B555d9c:{NFSU2_TR(0x555d9c);
{goto L555ddf;}
}
B555d9e:L555d9e:{c.instructions+=2;NFSU2_TR(0x555d9e);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x6ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B555da1:{NFSU2_TR(0x555da1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L555ddf;}}
}
B555da3:L555da3:{c.instructions+=4;NFSU2_TR(0x555da3);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B555da6:{NFSU2_TR(0x555da6);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((R+4),(U+0),4);
}
B555da9:{NFSU2_TR(0x555da9);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B555dab:{NFSU2_TR(0x555dab);
if(r1(R+518)){{goto L555dd2;}}
}
B555dad:L555dad:{c.instructions+=2;NFSU2_TR(0x555dad);
w1(R+12,u8(0x8ull));
}
B555daf:{NFSU2_TR(0x555daf);
}
B555db0:L555db0:{c.instructions+=2;NFSU2_TR(0x555db0);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(r1(R+12))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B555db3:{NFSU2_TR(0x555db3);
if(r1(R+518)){{goto L555db7;}}
}
B555db5:L555db5:{c.instructions+=1;NFSU2_TR(0x555db5);
__builtin_memmove((R+8),(R+0),4);
}
B555db7:L555db7:{c.instructions+=3;NFSU2_TR(0x555db7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B555dba:{NFSU2_TR(0x555dba);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B555dbc:{NFSU2_TR(0x555dbc);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x555db0u);}goto L555db0;}}
}
B555dbe:L555dbe:{c.instructions+=3;NFSU2_TR(0x555dbe);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B555dc0:{NFSU2_TR(0x555dc0);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B555dc4:{NFSU2_TR(0x555dc4);
if(r1(R+518)){{goto L555dd2;}}
}
B555dc6:L555dc6:{c.instructions+=5;NFSU2_TR(0x555dc6);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B555dc9:{NFSU2_TR(0x555dc9);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+0)),r4(U+0));
}
B555dcb:{NFSU2_TR(0x555dcb);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B555dce:{NFSU2_TR(0x555dce);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+24)),r4(U+0));
}
B555dd0:{NFSU2_TR(0x555dd0);
{goto L555ddc;}
}
B555dd2:L555dd2:{c.instructions+=1;NFSU2_TR(0x555dd2);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B555dd5:L555dd5:{c.instructions+=3;NFSU2_TR(0x555dd5);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+0)),r4(U+0));
}
B555dd7:{NFSU2_TR(0x555dd7);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B555dda:{NFSU2_TR(0x555dda);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+24)),r4(U+0));
}
B555ddc:L555ddc:{c.instructions+=1;NFSU2_TR(0x555ddc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B555ddf:L555ddf:{c.instructions+=2;NFSU2_TR(0x555ddf);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(u8(0x11ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B555de2:{NFSU2_TR(0x555de2);
if(r1(R+518)){{goto L555e18;}}
}
B555de4:L555de4:{c.instructions+=4;NFSU2_TR(0x555de4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
w4(U+4,u32(0x2ull));
s4(u32(r4(U+0)),r4(U+4));
}
B555deb:{NFSU2_TR(0x555deb);
__builtin_memmove((R+4),gp(0x8384c4),4);
}
B555df1:{NFSU2_TR(0x555df1);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B555df3:{NFSU2_TR(0x555df3);
if(r1(R+518)){{goto L555e5f;}}
}
B555df5:L555df5:{c.instructions+=7;NFSU2_TR(0x555df5);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B555df8:{NFSU2_TR(0x555df8);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B555dfc:{NFSU2_TR(0x555dfc);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B555e00:{NFSU2_TR(0x555e00);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B555e01:{NFSU2_TR(0x555e01);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B555e02:{NFSU2_TR(0x555e02);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B555e03:{NFSU2_TR(0x555e03);
if(r1(R+518)){{goto L555e6d;}}
}
B555e05:L555e05:{c.instructions+=1;NFSU2_TR(0x555e05);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x555e0aull));
TAIL_STATIC(0x51cb20u,51c);
}
B555e0a:L555e0a:{c.instructions+=2;NFSU2_TR(0x555e0a);
__builtin_memmove((R+4),(R+28),4);
}
B555e0c:{NFSU2_TR(0x555e0c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x555e11ull));
TAIL_STATIC(0x5376b0u,537);
}
B555e11:L555e11:{c.instructions+=5;NFSU2_TR(0x555e11);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B555e12:{NFSU2_TR(0x555e12);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B555e13:{NFSU2_TR(0x555e13);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B555e14:{NFSU2_TR(0x555e14);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B555e15:{NFSU2_TR(0x555e15);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B555e18:L555e18:{c.instructions+=4;NFSU2_TR(0x555e18);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B555e1f:{NFSU2_TR(0x555e1f);
__builtin_memmove((R+0),gp(0x8384c4),4);
}
B555e24:{NFSU2_TR(0x555e24);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B555e26:{NFSU2_TR(0x555e26);
if(r1(R+518)){{goto L555e5f;}}
}
B555e28:L555e28:{c.instructions+=4;NFSU2_TR(0x555e28);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B555e2b:{NFSU2_TR(0x555e2b);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xdcull))));
__builtin_memmove((R+4),(U+0),4);
}
B555e31:{NFSU2_TR(0x555e31);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B555e33:{NFSU2_TR(0x555e33);
if(r1(R+518)){{goto L555e4c;}}
}
B555e35:L555e35:{c.instructions+=5;NFSU2_TR(0x555e35);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B555e38:{NFSU2_TR(0x555e38);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B555e3c:{NFSU2_TR(0x555e3c);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B555e3d:{NFSU2_TR(0x555e3d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B555e3e:{NFSU2_TR(0x555e3e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x555e43ull));
TAIL_STATIC(0x519e50u,519);
}
B555e43:L555e43:{c.instructions+=4;NFSU2_TR(0x555e43);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B555e45:{NFSU2_TR(0x555e45);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+0),(U+0),1);
}
B555e48:{NFSU2_TR(0x555e48);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B555e4a:{NFSU2_TR(0x555e4a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L555e5f;}}
}
B555e4c:L555e4c:{c.instructions+=7;NFSU2_TR(0x555e4c);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B555e50:{NFSU2_TR(0x555e50);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B555e54:{NFSU2_TR(0x555e54);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B555e55:{NFSU2_TR(0x555e55);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B555e57:{NFSU2_TR(0x555e57);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B555e58:{NFSU2_TR(0x555e58);
__builtin_memmove((R+4),(R+24),4);
}
B555e5a:{NFSU2_TR(0x555e5a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x555e5full));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x555860u);}goto L555860;}
}
B555e5f:L555e5f:{c.instructions+=2;NFSU2_TR(0x555e5f);
__builtin_memmove((R+4),(R+28),4);
}
B555e61:{NFSU2_TR(0x555e61);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x555e66ull));
TAIL_STATIC(0x5376b0u,537);
}
B555e66:L555e66:{c.instructions+=5;NFSU2_TR(0x555e66);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B555e67:{NFSU2_TR(0x555e67);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B555e68:{NFSU2_TR(0x555e68);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B555e69:{NFSU2_TR(0x555e69);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B555e6a:{NFSU2_TR(0x555e6a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B555e6d:L555e6d:{c.instructions+=1;NFSU2_TR(0x555e6d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x555e72ull));
TAIL_STATIC(0x51cb60u,51c);
}
B555e72:L555e72:{c.instructions+=2;NFSU2_TR(0x555e72);
__builtin_memmove((R+4),(R+28),4);
}
B555e74:{NFSU2_TR(0x555e74);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x555e79ull));
TAIL_STATIC(0x5376b0u,537);
}
B555e79:L555e79:{c.instructions+=5;NFSU2_TR(0x555e79);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B555e7a:{NFSU2_TR(0x555e7a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B555e7b:{NFSU2_TR(0x555e7b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B555e7c:{NFSU2_TR(0x555e7c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B555e7d:{NFSU2_TR(0x555e7d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B555e80:L555e80:{c.instructions+=3;NFSU2_TR(0x555e80);
__builtin_memmove((R+4),gp(0x8384c4),4);
}
B555e86:{NFSU2_TR(0x555e86);
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
B555e88:{NFSU2_TR(0x555e88);
if(r1(R+518)){{goto L555ead;}}
}
B555e8a:L555e8a:{c.instructions+=8;NFSU2_TR(0x555e8a);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B555e8e:{NFSU2_TR(0x555e8e);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B555e92:{NFSU2_TR(0x555e92);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B555e93:{NFSU2_TR(0x555e93);
u8 U[4];
w4(U+0,u32(0xffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B555e98:{NFSU2_TR(0x555e98);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B555e9a:{NFSU2_TR(0x555e9a);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B555e9b:{NFSU2_TR(0x555e9b);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B555e9d:{NFSU2_TR(0x555e9d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x555ea2ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x555d00u);}goto L555d00;}
}
B555ea2:L555ea2:{c.instructions+=2;NFSU2_TR(0x555ea2);
__builtin_memmove((R+4),gp(0x8384c4),4);
}
B555ea8:{NFSU2_TR(0x555ea8);
TAIL_STATIC(0x52cdd0u,52c);
}
B555ead:L555ead:{c.instructions+=1;NFSU2_TR(0x555ead);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B555eb0:L555eb0:{c.instructions+=3;NFSU2_TR(0x555eb0);
__builtin_memmove((R+4),gp(0x8384c4),4);
}
B555eb6:{NFSU2_TR(0x555eb6);
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
B555eb8:{NFSU2_TR(0x555eb8);
if(r1(R+518)){{goto L555ed5;}}
}
B555eba:L555eba:{c.instructions+=10;NFSU2_TR(0x555eba);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B555ebe:{NFSU2_TR(0x555ebe);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B555ec2:{NFSU2_TR(0x555ec2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B555ec3:{NFSU2_TR(0x555ec3);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B555ec7:{NFSU2_TR(0x555ec7);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B555ec8:{NFSU2_TR(0x555ec8);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B555ecc:{NFSU2_TR(0x555ecc);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B555ecd:{NFSU2_TR(0x555ecd);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B555ece:{NFSU2_TR(0x555ece);
u8 U[4];
w4(U+0,u32(0x5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B555ed0:{NFSU2_TR(0x555ed0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x555ed5ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x555d00u);}goto L555d00;}
}
B555ed5:L555ed5:{c.instructions+=1;NFSU2_TR(0x555ed5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B555ee0:L555ee0:{c.instructions+=3;NFSU2_TR(0x555ee0);
__builtin_memmove((R+4),gp(0x8384c4),4);
}
B555ee6:{NFSU2_TR(0x555ee6);
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
B555ee8:{NFSU2_TR(0x555ee8);
if(r1(R+518)){{goto L555f05;}}
}
B555eea:L555eea:{c.instructions+=10;NFSU2_TR(0x555eea);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B555eee:{NFSU2_TR(0x555eee);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B555ef2:{NFSU2_TR(0x555ef2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B555ef3:{NFSU2_TR(0x555ef3);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B555ef7:{NFSU2_TR(0x555ef7);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B555ef8:{NFSU2_TR(0x555ef8);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B555efc:{NFSU2_TR(0x555efc);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B555efd:{NFSU2_TR(0x555efd);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B555efe:{NFSU2_TR(0x555efe);
u8 U[4];
w4(U+0,u32(0x16ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B555f00:{NFSU2_TR(0x555f00);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x555f05ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x555d00u);}goto L555d00;}
}
B555f05:L555f05:{c.instructions+=1;NFSU2_TR(0x555f05);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B555f10:L555f10:{c.instructions+=3;NFSU2_TR(0x555f10);
__builtin_memmove((R+4),gp(0x8384c4),4);
}
B555f16:{NFSU2_TR(0x555f16);
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
B555f18:{NFSU2_TR(0x555f18);
if(r1(R+518)){{goto L555f4d;}}
}
B555f1a:L555f1a:{c.instructions+=5;NFSU2_TR(0x555f1a);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B555f1e:{NFSU2_TR(0x555f1e);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B555f20:{NFSU2_TR(0x555f20);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B555f24:{NFSU2_TR(0x555f24);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B555f25:{NFSU2_TR(0x555f25);
if(r1(R+518)){{goto L555f3a;}}
}
B555f27:L555f27:{c.instructions+=7;NFSU2_TR(0x555f27);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B555f2b:{NFSU2_TR(0x555f2b);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B555f2c:{NFSU2_TR(0x555f2c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B555f2d:{NFSU2_TR(0x555f2d);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B555f31:{NFSU2_TR(0x555f31);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B555f32:{NFSU2_TR(0x555f32);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B555f34:{NFSU2_TR(0x555f34);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x555f39ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x555d00u);}goto L555d00;}
}
B555f39:L555f39:{c.instructions+=1;NFSU2_TR(0x555f39);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B555f3a:L555f3a:{c.instructions+=7;NFSU2_TR(0x555f3a);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B555f3e:{NFSU2_TR(0x555f3e);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B555f42:{NFSU2_TR(0x555f42);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B555f43:{NFSU2_TR(0x555f43);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B555f45:{NFSU2_TR(0x555f45);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B555f46:{NFSU2_TR(0x555f46);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B555f48:{NFSU2_TR(0x555f48);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x555f4dull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x555d00u);}goto L555d00;}
}
B555f4d:L555f4d:{c.instructions+=1;NFSU2_TR(0x555f4d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B555f50:L555f50:{c.instructions+=3;NFSU2_TR(0x555f50);
__builtin_memmove((R+4),gp(0x8384c4),4);
}
B555f56:{NFSU2_TR(0x555f56);
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
B555f58:{NFSU2_TR(0x555f58);
if(r1(R+518)){{goto L555f78;}}
}
B555f5a:L555f5a:{c.instructions+=11;NFSU2_TR(0x555f5a);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B555f5e:{NFSU2_TR(0x555f5e);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B555f62:{NFSU2_TR(0x555f62);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B555f63:{NFSU2_TR(0x555f63);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B555f67:{NFSU2_TR(0x555f67);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B555f68:{NFSU2_TR(0x555f68);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B555f6c:{NFSU2_TR(0x555f6c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B555f6d:{NFSU2_TR(0x555f6d);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B555f71:{NFSU2_TR(0x555f71);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B555f72:{NFSU2_TR(0x555f72);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B555f73:{NFSU2_TR(0x555f73);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x555f78ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x555d00u);}goto L555d00;}
}
B555f78:L555f78:{c.instructions+=1;NFSU2_TR(0x555f78);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B555f80:L555f80:{c.instructions+=11;NFSU2_TR(0x555f80);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B555f82:{NFSU2_TR(0x555f82);
u8 U[4];
w4(U+0,u32(0x7780d4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B555f87:{NFSU2_TR(0x555f87);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B555f8d:{NFSU2_TR(0x555f8d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B555f8e:{NFSU2_TR(0x555f8e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B555f95:{NFSU2_TR(0x555f95);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B555f96:{NFSU2_TR(0x555f96);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B555f97:{NFSU2_TR(0x555f97);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B555f98:{NFSU2_TR(0x555f98);
u8 U[4];
w4(U+0,u32(0xcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B555f9a:{NFSU2_TR(0x555f9a);
__builtin_memmove((R+28),(R+4),4);
}
B555f9c:{NFSU2_TR(0x555f9c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x555fa1ull));
TAIL_STATIC(0x575620u,575);
}
B555fa1:L555fa1:{c.instructions+=6;NFSU2_TR(0x555fa1);
__builtin_memmove((R+24),(R+0),4);
}
B555fa3:{NFSU2_TR(0x555fa3);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B555fa6:{NFSU2_TR(0x555fa6);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B555faa:{NFSU2_TR(0x555faa);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B555fac:{NFSU2_TR(0x555fac);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B555fb4:{NFSU2_TR(0x555fb4);
if(r1(R+518)){{goto L555fef;}}
}
B555fb6:L555fb6:{c.instructions+=5;NFSU2_TR(0x555fb6);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B555fba:{NFSU2_TR(0x555fba);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B555fbd:{NFSU2_TR(0x555fbd);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B555fbe:{NFSU2_TR(0x555fbe);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B555fbf:{NFSU2_TR(0x555fbf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x555fc4ull));
TAIL_STATIC(0x537a10u,537);
}
B555fc4:L555fc4:{c.instructions+=13;NFSU2_TR(0x555fc4);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B555fc8:{NFSU2_TR(0x555fc8);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B555fcc:{NFSU2_TR(0x555fcc);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B555fcf:{NFSU2_TR(0x555fcf);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B555fd0:{NFSU2_TR(0x555fd0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+24)),r4(U+0));
}
B555fd2:{NFSU2_TR(0x555fd2);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B555fd6:{NFSU2_TR(0x555fd6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B555fd7:{NFSU2_TR(0x555fd7);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B555fd8:{NFSU2_TR(0x555fd8);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B555fd9:{NFSU2_TR(0x555fd9);
w4(R+4,u32(0x83a7b0ull));
}
B555fde:{NFSU2_TR(0x555fde);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B555fe1:{NFSU2_TR(0x555fe1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B555fe8:{NFSU2_TR(0x555fe8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x555fedull));
TAIL_STATIC(0x4ff3b0u,4ff);
}
B555fed:L555fed:{c.instructions+=1;NFSU2_TR(0x555fed);
{goto L555ff1;}
}
B555fef:L555fef:{c.instructions+=1;NFSU2_TR(0x555fef);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B555ff1:L555ff1:{c.instructions+=4;NFSU2_TR(0x555ff1);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B555ff5:{NFSU2_TR(0x555ff5);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B555ff8:{NFSU2_TR(0x555ff8);
s1(0x83a9c0,u8(0x0ull));
}
B555fff:{NFSU2_TR(0x555fff);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
TAIL_STATIC(0x556003u,556);
}
XIT:NFSU2_TR_EXIT(0x555,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
