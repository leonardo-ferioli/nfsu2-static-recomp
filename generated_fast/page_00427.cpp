#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_403(u8* __restrict R,Cpu& c);
u32 body_404(u8* __restrict R,Cpu& c);
u32 body_423(u8* __restrict R,Cpu& c);
u32 body_424(u8* __restrict R,Cpu& c);
u32 body_425(u8* __restrict R,Cpu& c);
u32 body_428(u8* __restrict R,Cpu& c);
u32 body_43c(u8* __restrict R,Cpu& c);
u32 body_43e(u8* __restrict R,Cpu& c);
u32 body_440(u8* __restrict R,Cpu& c);
u32 body_571(u8* __restrict R,Cpu& c);
u32 body_578(u8* __restrict R,Cpu& c);
u32 body_5eb(u8* __restrict R,Cpu& c);
u32 body_5ec(u8* __restrict R,Cpu& c);
u32 body_60b(u8* __restrict R,Cpu& c);
u32 body_614(u8* __restrict R,Cpu& c);
u32 body_75c(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x427,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x427,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_427(u8* __restrict R,Cpu& c);
u32 page_427(Cpu& c){return body_427(c.regs.data(),c);}
__attribute__((noinline)) u32 body_427(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x427000:goto L427000;
case 0x427002:c.instructions+=3;goto B427002;
case 0x427004:c.instructions+=2;goto B427004;
case 0x427008:c.instructions+=1;goto B427008;
case 0x42700a:goto L42700a;
case 0x42700d:c.instructions+=10;goto B42700d;
case 0x427010:c.instructions+=9;goto B427010;
case 0x427013:c.instructions+=8;goto B427013;
case 0x427017:c.instructions+=7;goto B427017;
case 0x42701d:c.instructions+=6;goto B42701d;
case 0x42701e:c.instructions+=5;goto B42701e;
case 0x42701f:c.instructions+=4;goto B42701f;
case 0x427021:c.instructions+=3;goto B427021;
case 0x427023:c.instructions+=2;goto B427023;
case 0x427027:c.instructions+=1;goto B427027;
case 0x42702c:goto L42702c;
case 0x427030:c.instructions+=6;goto B427030;
case 0x427034:c.instructions+=5;goto B427034;
case 0x42703a:c.instructions+=4;goto B42703a;
case 0x427040:c.instructions+=3;goto B427040;
case 0x427046:c.instructions+=2;goto B427046;
case 0x42704c:c.instructions+=1;goto B42704c;
case 0x42704e:goto L42704e;
case 0x427052:c.instructions+=5;goto B427052;
case 0x427053:c.instructions+=4;goto B427053;
case 0x427054:c.instructions+=3;goto B427054;
case 0x42705b:c.instructions+=2;goto B42705b;
case 0x42705e:c.instructions+=1;goto B42705e;
case 0x427060:goto L427060;
case 0x427062:c.instructions+=9;goto B427062;
case 0x427067:c.instructions+=8;goto B427067;
case 0x42706d:c.instructions+=7;goto B42706d;
case 0x42706e:c.instructions+=6;goto B42706e;
case 0x427075:c.instructions+=5;goto B427075;
case 0x427076:c.instructions+=4;goto B427076;
case 0x42707b:c.instructions+=3;goto B42707b;
case 0x42707c:c.instructions+=2;goto B42707c;
case 0x42707d:c.instructions+=1;goto B42707d;
case 0x427082:goto L427082;
case 0x427084:c.instructions+=5;goto B427084;
case 0x427087:c.instructions+=4;goto B427087;
case 0x42708b:c.instructions+=3;goto B42708b;
case 0x42708d:c.instructions+=2;goto B42708d;
case 0x427095:c.instructions+=1;goto B427095;
case 0x427097:goto L427097;
case 0x42709d:c.instructions+=5;goto B42709d;
case 0x42709e:c.instructions+=4;goto B42709e;
case 0x4270a3:c.instructions+=3;goto B4270a3;
case 0x4270a5:c.instructions+=2;goto B4270a5;
case 0x4270a7:c.instructions+=1;goto B4270a7;
case 0x4270ac:goto L4270ac;
case 0x4270b2:c.instructions+=7;goto B4270b2;
case 0x4270bc:c.instructions+=6;goto B4270bc;
case 0x4270be:c.instructions+=5;goto B4270be;
case 0x4270bf:c.instructions+=4;goto B4270bf;
case 0x4270c3:c.instructions+=3;goto B4270c3;
case 0x4270ca:c.instructions+=2;goto B4270ca;
case 0x4270cd:c.instructions+=1;goto B4270cd;
case 0x4270ce:goto L4270ce;
case 0x4270d2:c.instructions+=5;goto B4270d2;
case 0x4270d4:c.instructions+=4;goto B4270d4;
case 0x4270d5:c.instructions+=3;goto B4270d5;
case 0x4270dc:c.instructions+=2;goto B4270dc;
case 0x4270df:c.instructions+=1;goto B4270df;
case 0x4270e0:goto L4270e0;
case 0x4270e2:c.instructions+=13;goto B4270e2;
case 0x4270e7:c.instructions+=12;goto B4270e7;
case 0x4270ed:c.instructions+=11;goto B4270ed;
case 0x4270ee:c.instructions+=10;goto B4270ee;
case 0x4270f5:c.instructions+=9;goto B4270f5;
case 0x4270f8:c.instructions+=8;goto B4270f8;
case 0x4270f9:c.instructions+=7;goto B4270f9;
case 0x4270fa:c.instructions+=6;goto B4270fa;
case 0x4270fb:c.instructions+=5;goto B4270fb;
case 0x4270ff:c.instructions+=4;goto B4270ff;
case 0x427104:c.instructions+=3;goto B427104;
case 0x427106:c.instructions+=2;goto B427106;
case 0x427108:c.instructions+=1;goto B427108;
case 0x42710d:goto L42710d;
case 0x427111:c.instructions+=8;goto B427111;
case 0x427113:c.instructions+=7;goto B427113;
case 0x427117:c.instructions+=6;goto B427117;
case 0x427119:c.instructions+=5;goto B427119;
case 0x42711c:c.instructions+=4;goto B42711c;
case 0x42711d:c.instructions+=3;goto B42711d;
case 0x42711f:c.instructions+=2;goto B42711f;
case 0x427123:c.instructions+=1;goto B427123;
case 0x427128:goto L427128;
case 0x42712c:c.instructions+=2;goto B42712c;
case 0x42712e:c.instructions+=1;goto B42712e;
case 0x427134:goto L427134;
case 0x427136:c.instructions+=1;goto B427136;
case 0x427138:goto L427138;
case 0x42713e:c.instructions+=1;goto B42713e;
case 0x427142:goto L427142;
case 0x427144:c.instructions+=6;goto B427144;
case 0x427146:c.instructions+=5;goto B427146;
case 0x427148:c.instructions+=4;goto B427148;
case 0x42714c:c.instructions+=3;goto B42714c;
case 0x42714d:c.instructions+=2;goto B42714d;
case 0x42714f:c.instructions+=1;goto B42714f;
case 0x427154:goto L427154;
case 0x427157:c.instructions+=2;goto B427157;
case 0x427159:c.instructions+=1;goto B427159;
case 0x42715f:goto L42715f;
case 0x427163:c.instructions+=2;goto B427163;
case 0x427166:c.instructions+=1;goto B427166;
case 0x42716c:goto L42716c;
case 0x427173:goto L427173;
case 0x427179:c.instructions+=2;goto B427179;
case 0x42717a:c.instructions+=1;goto B42717a;
case 0x42717f:goto L42717f;
case 0x427182:c.instructions+=4;goto B427182;
case 0x427186:c.instructions+=3;goto B427186;
case 0x427188:c.instructions+=2;goto B427188;
case 0x427190:c.instructions+=1;goto B427190;
case 0x427196:goto L427196;
case 0x427198:c.instructions+=4;goto B427198;
case 0x42719a:c.instructions+=3;goto B42719a;
case 0x42719c:c.instructions+=2;goto B42719c;
case 0x42719e:c.instructions+=1;goto B42719e;
case 0x4271a3:goto L4271a3;
case 0x4271a8:goto L4271a8;
case 0x4271ae:c.instructions+=2;goto B4271ae;
case 0x4271af:c.instructions+=1;goto B4271af;
case 0x4271b4:goto L4271b4;
case 0x4271b7:c.instructions+=4;goto B4271b7;
case 0x4271bb:c.instructions+=3;goto B4271bb;
case 0x4271bd:c.instructions+=2;goto B4271bd;
case 0x4271c5:c.instructions+=1;goto B4271c5;
case 0x4271cb:goto L4271cb;
case 0x4271cd:c.instructions+=3;goto B4271cd;
case 0x4271cf:c.instructions+=2;goto B4271cf;
case 0x4271d1:c.instructions+=1;goto B4271d1;
case 0x4271d6:goto L4271d6;
case 0x4271db:goto L4271db;
case 0x4271e0:c.instructions+=2;goto B4271e0;
case 0x4271e1:c.instructions+=1;goto B4271e1;
case 0x4271e6:goto L4271e6;
case 0x4271e9:c.instructions+=4;goto B4271e9;
case 0x4271ed:c.instructions+=3;goto B4271ed;
case 0x4271ef:c.instructions+=2;goto B4271ef;
case 0x4271f7:c.instructions+=1;goto B4271f7;
case 0x4271fd:goto L4271fd;
case 0x4271ff:c.instructions+=4;goto B4271ff;
case 0x427201:c.instructions+=3;goto B427201;
case 0x427203:c.instructions+=2;goto B427203;
case 0x427205:c.instructions+=1;goto B427205;
case 0x42720a:goto L42720a;
case 0x42720f:goto L42720f;
case 0x427215:c.instructions+=2;goto B427215;
case 0x427216:c.instructions+=1;goto B427216;
case 0x42721b:goto L42721b;
case 0x42721e:c.instructions+=4;goto B42721e;
case 0x427222:c.instructions+=3;goto B427222;
case 0x427224:c.instructions+=2;goto B427224;
case 0x42722c:c.instructions+=1;goto B42722c;
case 0x427232:goto L427232;
case 0x427234:c.instructions+=6;goto B427234;
case 0x427236:c.instructions+=5;goto B427236;
case 0x427238:c.instructions+=4;goto B427238;
case 0x42723a:c.instructions+=3;goto B42723a;
case 0x42723c:c.instructions+=2;goto B42723c;
case 0x42723e:c.instructions+=1;goto B42723e;
case 0x427243:goto L427243;
case 0x427248:goto L427248;
case 0x42724e:c.instructions+=2;goto B42724e;
case 0x42724f:c.instructions+=1;goto B42724f;
case 0x427254:goto L427254;
case 0x427257:c.instructions+=4;goto B427257;
case 0x42725b:c.instructions+=3;goto B42725b;
case 0x42725d:c.instructions+=2;goto B42725d;
case 0x427265:c.instructions+=1;goto B427265;
case 0x42726b:goto L42726b;
case 0x42726d:c.instructions+=4;goto B42726d;
case 0x42726f:c.instructions+=3;goto B42726f;
case 0x427271:c.instructions+=2;goto B427271;
case 0x427273:c.instructions+=1;goto B427273;
case 0x427278:goto L427278;
case 0x42727d:goto L42727d;
case 0x427282:c.instructions+=2;goto B427282;
case 0x427283:c.instructions+=1;goto B427283;
case 0x427288:goto L427288;
case 0x42728b:c.instructions+=4;goto B42728b;
case 0x42728f:c.instructions+=3;goto B42728f;
case 0x427291:c.instructions+=2;goto B427291;
case 0x427299:c.instructions+=1;goto B427299;
case 0x42729f:goto L42729f;
case 0x4272a1:c.instructions+=3;goto B4272a1;
case 0x4272a3:c.instructions+=2;goto B4272a3;
case 0x4272a5:c.instructions+=1;goto B4272a5;
case 0x4272aa:goto L4272aa;
case 0x4272af:goto L4272af;
case 0x4272b5:c.instructions+=2;goto B4272b5;
case 0x4272b6:c.instructions+=1;goto B4272b6;
case 0x4272bb:goto L4272bb;
case 0x4272be:c.instructions+=4;goto B4272be;
case 0x4272c2:c.instructions+=3;goto B4272c2;
case 0x4272c4:c.instructions+=2;goto B4272c4;
case 0x4272cc:c.instructions+=1;goto B4272cc;
case 0x4272d2:goto L4272d2;
case 0x4272d4:c.instructions+=3;goto B4272d4;
case 0x4272d6:c.instructions+=2;goto B4272d6;
case 0x4272d8:c.instructions+=1;goto B4272d8;
case 0x4272dd:goto L4272dd;
case 0x4272e2:goto L4272e2;
case 0x4272e8:c.instructions+=2;goto B4272e8;
case 0x4272e9:c.instructions+=1;goto B4272e9;
case 0x4272ee:goto L4272ee;
case 0x4272f1:c.instructions+=4;goto B4272f1;
case 0x4272f5:c.instructions+=3;goto B4272f5;
case 0x4272f7:c.instructions+=2;goto B4272f7;
case 0x4272ff:c.instructions+=1;goto B4272ff;
case 0x427305:goto L427305;
case 0x427307:c.instructions+=5;goto B427307;
case 0x427309:c.instructions+=4;goto B427309;
case 0x42730b:c.instructions+=3;goto B42730b;
case 0x42730d:c.instructions+=2;goto B42730d;
case 0x42730f:c.instructions+=1;goto B42730f;
case 0x427314:goto L427314;
case 0x427319:goto L427319;
case 0x42731e:c.instructions+=2;goto B42731e;
case 0x42731f:c.instructions+=1;goto B42731f;
case 0x427324:goto L427324;
case 0x427327:c.instructions+=4;goto B427327;
case 0x42732b:c.instructions+=3;goto B42732b;
case 0x42732d:c.instructions+=2;goto B42732d;
case 0x427335:c.instructions+=1;goto B427335;
case 0x42733b:goto L42733b;
case 0x427340:c.instructions+=4;goto B427340;
case 0x427342:c.instructions+=3;goto B427342;
case 0x427344:c.instructions+=2;goto B427344;
case 0x427346:c.instructions+=1;goto B427346;
case 0x42734b:goto L42734b;
case 0x427350:goto L427350;
case 0x427356:c.instructions+=2;goto B427356;
case 0x427357:c.instructions+=1;goto B427357;
case 0x42735c:goto L42735c;
case 0x42735f:c.instructions+=4;goto B42735f;
case 0x427363:c.instructions+=3;goto B427363;
case 0x427365:c.instructions+=2;goto B427365;
case 0x42736d:c.instructions+=1;goto B42736d;
case 0x427373:goto L427373;
case 0x427375:c.instructions+=4;goto B427375;
case 0x427377:c.instructions+=3;goto B427377;
case 0x427379:c.instructions+=2;goto B427379;
case 0x42737b:c.instructions+=1;goto B42737b;
case 0x427380:goto L427380;
case 0x427385:goto L427385;
case 0x42738b:c.instructions+=2;goto B42738b;
case 0x42738c:c.instructions+=1;goto B42738c;
case 0x427391:goto L427391;
case 0x427394:c.instructions+=4;goto B427394;
case 0x427398:c.instructions+=3;goto B427398;
case 0x42739a:c.instructions+=2;goto B42739a;
case 0x4273a2:c.instructions+=1;goto B4273a2;
case 0x4273a8:goto L4273a8;
case 0x4273aa:c.instructions+=3;goto B4273aa;
case 0x4273ac:c.instructions+=2;goto B4273ac;
case 0x4273ae:c.instructions+=1;goto B4273ae;
case 0x4273b3:goto L4273b3;
case 0x4273b8:goto L4273b8;
case 0x4273bd:c.instructions+=2;goto B4273bd;
case 0x4273be:c.instructions+=1;goto B4273be;
case 0x4273c3:goto L4273c3;
case 0x4273c6:c.instructions+=4;goto B4273c6;
case 0x4273ca:c.instructions+=3;goto B4273ca;
case 0x4273cc:c.instructions+=2;goto B4273cc;
case 0x4273d4:c.instructions+=1;goto B4273d4;
case 0x4273da:goto L4273da;
case 0x4273dc:c.instructions+=4;goto B4273dc;
case 0x4273de:c.instructions+=3;goto B4273de;
case 0x4273e0:c.instructions+=2;goto B4273e0;
case 0x4273e2:c.instructions+=1;goto B4273e2;
case 0x4273e7:goto L4273e7;
case 0x4273ec:goto L4273ec;
case 0x4273f2:c.instructions+=2;goto B4273f2;
case 0x4273f3:c.instructions+=1;goto B4273f3;
case 0x4273f8:goto L4273f8;
case 0x4273fb:c.instructions+=4;goto B4273fb;
case 0x4273ff:c.instructions+=3;goto B4273ff;
case 0x427401:c.instructions+=2;goto B427401;
case 0x427409:c.instructions+=1;goto B427409;
case 0x42740f:goto L42740f;
case 0x427411:c.instructions+=3;goto B427411;
case 0x427413:c.instructions+=2;goto B427413;
case 0x427415:c.instructions+=1;goto B427415;
case 0x42741a:goto L42741a;
case 0x42741f:goto L42741f;
case 0x427425:c.instructions+=2;goto B427425;
case 0x427426:c.instructions+=1;goto B427426;
case 0x42742b:goto L42742b;
case 0x42742e:c.instructions+=4;goto B42742e;
case 0x427432:c.instructions+=3;goto B427432;
case 0x427434:c.instructions+=2;goto B427434;
case 0x42743c:c.instructions+=1;goto B42743c;
case 0x427442:goto L427442;
case 0x427444:c.instructions+=4;goto B427444;
case 0x427446:c.instructions+=3;goto B427446;
case 0x427448:c.instructions+=2;goto B427448;
case 0x42744a:c.instructions+=1;goto B42744a;
case 0x42744f:goto L42744f;
case 0x427454:goto L427454;
case 0x427459:c.instructions+=2;goto B427459;
case 0x42745a:c.instructions+=1;goto B42745a;
case 0x42745f:goto L42745f;
case 0x427462:c.instructions+=4;goto B427462;
case 0x427466:c.instructions+=3;goto B427466;
case 0x427468:c.instructions+=2;goto B427468;
case 0x427470:c.instructions+=1;goto B427470;
case 0x427476:goto L427476;
case 0x427478:c.instructions+=5;goto B427478;
case 0x42747a:c.instructions+=4;goto B42747a;
case 0x42747c:c.instructions+=3;goto B42747c;
case 0x42747e:c.instructions+=2;goto B42747e;
case 0x427480:c.instructions+=1;goto B427480;
case 0x427485:goto L427485;
case 0x42748a:goto L42748a;
case 0x427490:c.instructions+=2;goto B427490;
case 0x427491:c.instructions+=1;goto B427491;
case 0x427496:goto L427496;
case 0x427499:c.instructions+=4;goto B427499;
case 0x42749d:c.instructions+=3;goto B42749d;
case 0x42749f:c.instructions+=2;goto B42749f;
case 0x4274a7:c.instructions+=1;goto B4274a7;
case 0x4274ad:goto L4274ad;
case 0x4274af:c.instructions+=6;goto B4274af;
case 0x4274b1:c.instructions+=5;goto B4274b1;
case 0x4274b3:c.instructions+=4;goto B4274b3;
case 0x4274b5:c.instructions+=3;goto B4274b5;
case 0x4274b7:c.instructions+=2;goto B4274b7;
case 0x4274b9:c.instructions+=1;goto B4274b9;
case 0x4274be:goto L4274be;
case 0x4274c3:goto L4274c3;
case 0x4274c9:c.instructions+=2;goto B4274c9;
case 0x4274ca:c.instructions+=1;goto B4274ca;
case 0x4274cf:goto L4274cf;
case 0x4274d2:c.instructions+=4;goto B4274d2;
case 0x4274d6:c.instructions+=3;goto B4274d6;
case 0x4274d8:c.instructions+=2;goto B4274d8;
case 0x4274e0:c.instructions+=1;goto B4274e0;
case 0x4274e2:goto L4274e2;
case 0x4274e4:c.instructions+=3;goto B4274e4;
case 0x4274e6:c.instructions+=2;goto B4274e6;
case 0x4274e8:c.instructions+=1;goto B4274e8;
case 0x4274ed:goto L4274ed;
case 0x4274ef:goto L4274ef;
case 0x4274f4:c.instructions+=2;goto B4274f4;
case 0x4274f5:c.instructions+=1;goto B4274f5;
case 0x4274fa:goto L4274fa;
case 0x4274fd:c.instructions+=4;goto B4274fd;
case 0x427501:c.instructions+=3;goto B427501;
case 0x427503:c.instructions+=2;goto B427503;
case 0x42750b:c.instructions+=1;goto B42750b;
case 0x42750d:goto L42750d;
case 0x42750f:c.instructions+=6;goto B42750f;
case 0x427511:c.instructions+=5;goto B427511;
case 0x427513:c.instructions+=4;goto B427513;
case 0x427515:c.instructions+=3;goto B427515;
case 0x427517:c.instructions+=2;goto B427517;
case 0x427519:c.instructions+=1;goto B427519;
case 0x42751e:goto L42751e;
case 0x427520:goto L427520;
case 0x427526:c.instructions+=2;goto B427526;
case 0x427527:c.instructions+=1;goto B427527;
case 0x42752c:goto L42752c;
case 0x42752f:c.instructions+=4;goto B42752f;
case 0x427533:c.instructions+=3;goto B427533;
case 0x427535:c.instructions+=2;goto B427535;
case 0x42753d:c.instructions+=1;goto B42753d;
case 0x42753f:goto L42753f;
case 0x427541:c.instructions+=6;goto B427541;
case 0x427543:c.instructions+=5;goto B427543;
case 0x427545:c.instructions+=4;goto B427545;
case 0x427547:c.instructions+=3;goto B427547;
case 0x427549:c.instructions+=2;goto B427549;
case 0x42754b:c.instructions+=1;goto B42754b;
case 0x427550:goto L427550;
case 0x427552:goto L427552;
case 0x427554:goto L427554;
case 0x42755c:c.instructions+=1;goto B42755c;
case 0x42755e:goto L42755e;
case 0x427560:goto L427560;
case 0x427562:c.instructions+=1;goto B427562;
case 0x427564:goto L427564;
case 0x427566:c.instructions+=3;goto B427566;
case 0x427567:c.instructions+=2;goto B427567;
case 0x427569:c.instructions+=1;goto B427569;
case 0x42756c:goto L42756c;
case 0x42756e:c.instructions+=1;goto B42756e;
case 0x427573:goto L427573;
case 0x427577:c.instructions+=6;goto B427577;
case 0x427578:c.instructions+=5;goto B427578;
case 0x427579:c.instructions+=4;goto B427579;
case 0x42757a:c.instructions+=3;goto B42757a;
case 0x427581:c.instructions+=2;goto B427581;
case 0x427584:c.instructions+=1;goto B427584;
case 0x4275e0:goto L4275e0;
case 0x4275e1:c.instructions+=10;goto B4275e1;
case 0x4275e3:c.instructions+=9;goto B4275e3;
case 0x4275e6:c.instructions+=8;goto B4275e6;
case 0x4275e8:c.instructions+=7;goto B4275e8;
case 0x4275ed:c.instructions+=6;goto B4275ed;
case 0x4275f3:c.instructions+=5;goto B4275f3;
case 0x4275f4:c.instructions+=4;goto B4275f4;
case 0x4275fb:c.instructions+=3;goto B4275fb;
case 0x4275fc:c.instructions+=2;goto B4275fc;
case 0x427601:c.instructions+=1;goto B427601;
case 0x427606:goto L427606;
case 0x427609:c.instructions+=10;goto B427609;
case 0x42760a:c.instructions+=9;goto B42760a;
case 0x42760b:c.instructions+=8;goto B42760b;
case 0x42760d:c.instructions+=7;goto B42760d;
case 0x427610:c.instructions+=6;goto B427610;
case 0x427611:c.instructions+=5;goto B427611;
case 0x427613:c.instructions+=4;goto B427613;
case 0x427614:c.instructions+=3;goto B427614;
case 0x42761b:c.instructions+=2;goto B42761b;
case 0x427623:c.instructions+=1;goto B427623;
case 0x427628:goto L427628;
case 0x42762b:c.instructions+=2;goto B42762b;
case 0x42762d:c.instructions+=1;goto B42762d;
case 0x427632:goto L427632;
case 0x427633:c.instructions+=2;goto B427633;
case 0x42763a:c.instructions+=1;goto B42763a;
case 0x42763f:goto L42763f;
case 0x427642:c.instructions+=2;goto B427642;
case 0x427644:c.instructions+=1;goto B427644;
case 0x427646:goto L427646;
case 0x427649:c.instructions+=2;goto B427649;
case 0x42764c:c.instructions+=1;goto B42764c;
case 0x42764e:goto L42764e;
case 0x427651:c.instructions+=1;goto B427651;
case 0x427653:goto L427653;
case 0x427656:c.instructions+=1;goto B427656;
case 0x427658:goto L427658;
case 0x42765a:c.instructions+=1;goto B42765a;
case 0x42765f:goto L42765f;
case 0x427663:c.instructions+=1;goto B427663;
case 0x427665:goto L427665;
case 0x42766d:goto L42766d;
case 0x427670:c.instructions+=2;goto B427670;
case 0x427674:c.instructions+=1;goto B427674;
case 0x427676:goto L427676;
case 0x427678:c.instructions+=1;goto B427678;
case 0x42767d:goto L42767d;
case 0x427683:c.instructions+=3;goto B427683;
case 0x427685:c.instructions+=2;goto B427685;
case 0x427688:c.instructions+=1;goto B427688;
case 0x42768a:goto L42768a;
case 0x42768b:c.instructions+=2;goto B42768b;
case 0x427692:c.instructions+=1;goto B427692;
case 0x427697:goto L427697;
case 0x427699:c.instructions+=1;goto B427699;
case 0x42769e:goto L42769e;
case 0x4276a0:c.instructions+=1;goto B4276a0;
case 0x4276a2:goto L4276a2;
case 0x4276a5:c.instructions+=1;goto B4276a5;
case 0x4276aa:goto L4276aa;
case 0x4276b0:c.instructions+=3;goto B4276b0;
case 0x4276b2:c.instructions+=2;goto B4276b2;
case 0x4276b5:c.instructions+=1;goto B4276b5;
case 0x4276b7:goto L4276b7;
case 0x4276b8:c.instructions+=2;goto B4276b8;
case 0x4276bf:c.instructions+=1;goto B4276bf;
case 0x4276c4:goto L4276c4;
case 0x4276ca:c.instructions+=5;goto B4276ca;
case 0x4276cc:c.instructions+=4;goto B4276cc;
case 0x4276ce:c.instructions+=3;goto B4276ce;
case 0x4276d2:c.instructions+=2;goto B4276d2;
case 0x4276d6:c.instructions+=1;goto B4276d6;
case 0x4276db:goto L4276db;
case 0x4276dd:c.instructions+=1;goto B4276dd;
case 0x4276df:goto L4276df;
case 0x4276e5:c.instructions+=1;goto B4276e5;
case 0x4276e9:goto L4276e9;
case 0x4276ed:c.instructions+=1;goto B4276ed;
case 0x4276ef:goto L4276ef;
case 0x4276f7:c.instructions+=1;goto B4276f7;
case 0x4276f9:goto L4276f9;
case 0x4276fb:c.instructions+=1;goto B4276fb;
case 0x427700:goto L427700;
case 0x427702:c.instructions+=1;goto B427702;
case 0x427704:goto L427704;
case 0x42770a:c.instructions+=1;goto B42770a;
case 0x42770e:goto L42770e;
case 0x427714:c.instructions+=20;goto B427714;
case 0x427718:c.instructions+=19;goto B427718;
case 0x42771b:c.instructions+=18;goto B42771b;
case 0x42771e:c.instructions+=17;goto B42771e;
case 0x427720:c.instructions+=16;goto B427720;
case 0x427723:c.instructions+=15;goto B427723;
case 0x427725:c.instructions+=14;goto B427725;
case 0x427727:c.instructions+=13;goto B427727;
case 0x427729:c.instructions+=12;goto B427729;
case 0x42772b:c.instructions+=11;goto B42772b;
case 0x42772d:c.instructions+=10;goto B42772d;
case 0x42772f:c.instructions+=9;goto B42772f;
case 0x427731:c.instructions+=8;goto B427731;
case 0x427733:c.instructions+=7;goto B427733;
case 0x427735:c.instructions+=6;goto B427735;
case 0x427737:c.instructions+=5;goto B427737;
case 0x427739:c.instructions+=4;goto B427739;
case 0x42773b:c.instructions+=3;goto B42773b;
case 0x42773d:c.instructions+=2;goto B42773d;
case 0x427741:c.instructions+=1;goto B427741;
case 0x427746:goto L427746;
case 0x42774d:c.instructions+=2;goto B42774d;
case 0x42774f:c.instructions+=1;goto B42774f;
case 0x427754:goto L427754;
case 0x42775b:c.instructions+=5;goto B42775b;
case 0x427761:c.instructions+=4;goto B427761;
case 0x427767:c.instructions+=3;goto B427767;
case 0x427769:c.instructions+=2;goto B427769;
case 0x42776c:c.instructions+=1;goto B42776c;
case 0x42776e:goto L42776e;
case 0x427771:c.instructions+=3;goto B427771;
case 0x427777:c.instructions+=2;goto B427777;
case 0x427779:c.instructions+=1;goto B427779;
case 0x42777b:goto L42777b;
case 0x427781:c.instructions+=1;goto B427781;
case 0x427783:goto L427783;
case 0x427788:goto L427788;
case 0x42778b:c.instructions+=1;goto B42778b;
case 0x42778d:goto L42778d;
case 0x427790:c.instructions+=1;goto B427790;
case 0x427792:goto L427792;
case 0x427795:c.instructions+=1;goto B427795;
case 0x427797:goto L427797;
case 0x42779e:c.instructions+=2;goto B42779e;
case 0x4277a0:c.instructions+=1;goto B4277a0;
case 0x4277a2:goto L4277a2;
case 0x4277a9:c.instructions+=3;goto B4277a9;
case 0x4277aa:c.instructions+=2;goto B4277aa;
case 0x4277ab:c.instructions+=1;goto B4277ab;
case 0x4277b0:goto L4277b0;
case 0x4277b4:c.instructions+=5;goto B4277b4;
case 0x4277ba:c.instructions+=4;goto B4277ba;
case 0x4277bc:c.instructions+=3;goto B4277bc;
case 0x4277c0:c.instructions+=2;goto B4277c0;
case 0x4277c3:c.instructions+=1;goto B4277c3;
case 0x4277c7:goto L4277c7;
case 0x4277ca:c.instructions+=13;goto B4277ca;
case 0x4277cd:c.instructions+=12;goto B4277cd;
case 0x4277d0:c.instructions+=11;goto B4277d0;
case 0x4277d3:c.instructions+=10;goto B4277d3;
case 0x4277d6:c.instructions+=9;goto B4277d6;
case 0x4277d9:c.instructions+=8;goto B4277d9;
case 0x4277db:c.instructions+=7;goto B4277db;
case 0x4277dd:c.instructions+=6;goto B4277dd;
case 0x4277df:c.instructions+=5;goto B4277df;
case 0x4277e1:c.instructions+=4;goto B4277e1;
case 0x4277e7:c.instructions+=3;goto B4277e7;
case 0x4277e9:c.instructions+=2;goto B4277e9;
case 0x4277ec:c.instructions+=1;goto B4277ec;
case 0x4277ee:goto L4277ee;
case 0x4277f0:c.instructions+=1;goto B4277f0;
case 0x4277f5:goto L4277f5;
case 0x4277f7:c.instructions+=1;goto B4277f7;
case 0x4277f9:goto L4277f9;
case 0x4277fb:c.instructions+=1;goto B4277fb;
case 0x427800:goto L427800;
case 0x427802:c.instructions+=1;goto B427802;
case 0x427804:goto L427804;
case 0x427808:c.instructions+=2;goto B427808;
case 0x42780a:c.instructions+=1;goto B42780a;
case 0x42780c:goto L42780c;
case 0x427812:c.instructions+=2;goto B427812;
case 0x427814:c.instructions+=1;goto B427814;
case 0x427816:goto L427816;
case 0x42781c:c.instructions+=1;goto B42781c;
case 0x42781e:goto L42781e;
case 0x427823:goto L427823;
case 0x427826:c.instructions+=1;goto B427826;
case 0x427828:goto L427828;
case 0x42782b:c.instructions+=1;goto B42782b;
case 0x42782d:goto L42782d;
case 0x427830:c.instructions+=1;goto B427830;
case 0x427832:goto L427832;
case 0x427839:c.instructions+=2;goto B427839;
case 0x42783b:c.instructions+=1;goto B42783b;
case 0x42783d:goto L42783d;
case 0x427844:c.instructions+=3;goto B427844;
case 0x427845:c.instructions+=2;goto B427845;
case 0x427846:c.instructions+=1;goto B427846;
case 0x42784b:goto L42784b;
case 0x42784f:c.instructions+=5;goto B42784f;
case 0x427855:c.instructions+=4;goto B427855;
case 0x427857:c.instructions+=3;goto B427857;
case 0x42785b:c.instructions+=2;goto B42785b;
case 0x42785e:c.instructions+=1;goto B42785e;
case 0x427862:goto L427862;
case 0x427866:c.instructions+=4;goto B427866;
case 0x42786c:c.instructions+=3;goto B42786c;
case 0x42786e:c.instructions+=2;goto B42786e;
case 0x427871:c.instructions+=1;goto B427871;
case 0x427873:goto L427873;
case 0x42787b:goto L42787b;
case 0x42787f:c.instructions+=4;goto B42787f;
case 0x427885:c.instructions+=3;goto B427885;
case 0x427887:c.instructions+=2;goto B427887;
case 0x42788a:c.instructions+=1;goto B42788a;
case 0x42788c:goto L42788c;
case 0x427894:goto L427894;
case 0x427898:c.instructions+=4;goto B427898;
case 0x42789e:c.instructions+=3;goto B42789e;
case 0x4278a0:c.instructions+=2;goto B4278a0;
case 0x4278a3:c.instructions+=1;goto B4278a3;
case 0x4278a5:goto L4278a5;
case 0x4278ab:c.instructions+=1;goto B4278ab;
case 0x4278af:goto L4278af;
case 0x4278b3:c.instructions+=4;goto B4278b3;
case 0x4278b9:c.instructions+=3;goto B4278b9;
case 0x4278bb:c.instructions+=2;goto B4278bb;
case 0x4278be:c.instructions+=1;goto B4278be;
case 0x4278c0:goto L4278c0;
case 0x4278c5:c.instructions+=1;goto B4278c5;
case 0x4278c9:goto L4278c9;
case 0x4278ce:c.instructions+=6;goto B4278ce;
case 0x4278d3:c.instructions+=5;goto B4278d3;
case 0x4278d5:c.instructions+=4;goto B4278d5;
case 0x4278d7:c.instructions+=3;goto B4278d7;
case 0x4278de:c.instructions+=2;goto B4278de;
case 0x4278df:c.instructions+=1;goto B4278df;
case 0x4278e4:goto L4278e4;
case 0x4278e9:c.instructions+=7;goto B4278e9;
case 0x4278ee:c.instructions+=6;goto B4278ee;
case 0x4278f0:c.instructions+=5;goto B4278f0;
case 0x4278f2:c.instructions+=4;goto B4278f2;
case 0x4278f9:c.instructions+=3;goto B4278f9;
case 0x4278fa:c.instructions+=2;goto B4278fa;
case 0x427905:c.instructions+=1;goto B427905;
case 0x42790a:goto L42790a;
case 0x427911:c.instructions+=6;goto B427911;
case 0x427912:c.instructions+=5;goto B427912;
case 0x427919:c.instructions+=4;goto B427919;
case 0x42791a:c.instructions+=3;goto B42791a;
case 0x42791c:c.instructions+=2;goto B42791c;
case 0x427924:c.instructions+=1;goto B427924;
case 0x427929:goto L427929;
case 0x42792d:c.instructions+=14;goto B42792d;
case 0x42792f:c.instructions+=13;goto B42792f;
case 0x427936:c.instructions+=12;goto B427936;
case 0x427937:c.instructions+=11;goto B427937;
case 0x42793e:c.instructions+=10;goto B42793e;
case 0x427945:c.instructions+=9;goto B427945;
case 0x427946:c.instructions+=8;goto B427946;
case 0x42794d:c.instructions+=7;goto B42794d;
case 0x42794e:c.instructions+=6;goto B42794e;
case 0x42794f:c.instructions+=5;goto B42794f;
case 0x427950:c.instructions+=4;goto B427950;
case 0x427957:c.instructions+=3;goto B427957;
case 0x427958:c.instructions+=2;goto B427958;
case 0x42795a:c.instructions+=1;goto B42795a;
case 0x42795f:goto L42795f;
case 0x427966:c.instructions+=5;goto B427966;
case 0x427967:c.instructions+=4;goto B427967;
case 0x42796e:c.instructions+=3;goto B42796e;
case 0x42796f:c.instructions+=2;goto B42796f;
case 0x427971:c.instructions+=1;goto B427971;
case 0x427976:goto L427976;
case 0x427979:c.instructions+=7;goto B427979;
case 0x42797d:c.instructions+=6;goto B42797d;
case 0x427980:c.instructions+=5;goto B427980;
case 0x427982:c.instructions+=4;goto B427982;
case 0x427983:c.instructions+=3;goto B427983;
case 0x427984:c.instructions+=2;goto B427984;
case 0x427985:c.instructions+=1;goto B427985;
case 0x42798a:goto L42798a;
case 0x42798d:c.instructions+=11;goto B42798d;
case 0x427994:c.instructions+=10;goto B427994;
case 0x42799b:c.instructions+=9;goto B42799b;
case 0x42799c:c.instructions+=8;goto B42799c;
case 0x42799d:c.instructions+=7;goto B42799d;
case 0x42799e:c.instructions+=6;goto B42799e;
case 0x4279a5:c.instructions+=5;goto B4279a5;
case 0x4279a6:c.instructions+=4;goto B4279a6;
case 0x4279ad:c.instructions+=3;goto B4279ad;
case 0x4279ae:c.instructions+=2;goto B4279ae;
case 0x4279b0:c.instructions+=1;goto B4279b0;
case 0x4279b5:goto L4279b5;
case 0x4279bb:c.instructions+=10;goto B4279bb;
case 0x4279be:c.instructions+=9;goto B4279be;
case 0x4279c1:c.instructions+=8;goto B4279c1;
case 0x4279c2:c.instructions+=7;goto B4279c2;
case 0x4279c3:c.instructions+=6;goto B4279c3;
case 0x4279c5:c.instructions+=5;goto B4279c5;
case 0x4279c6:c.instructions+=4;goto B4279c6;
case 0x4279cd:c.instructions+=3;goto B4279cd;
case 0x4279d5:c.instructions+=2;goto B4279d5;
case 0x4279d9:c.instructions+=1;goto B4279d9;
case 0x4279de:goto L4279de;
case 0x4279e1:c.instructions+=17;goto B4279e1;
case 0x4279e4:c.instructions+=16;goto B4279e4;
case 0x4279e6:c.instructions+=15;goto B4279e6;
case 0x4279e9:c.instructions+=14;goto B4279e9;
case 0x4279ea:c.instructions+=13;goto B4279ea;
case 0x4279ed:c.instructions+=12;goto B4279ed;
case 0x4279ee:c.instructions+=11;goto B4279ee;
case 0x4279f1:c.instructions+=10;goto B4279f1;
case 0x4279f2:c.instructions+=9;goto B4279f2;
case 0x4279f5:c.instructions+=8;goto B4279f5;
case 0x4279f8:c.instructions+=7;goto B4279f8;
case 0x4279fa:c.instructions+=6;goto B4279fa;
case 0x4279fc:c.instructions+=5;goto B4279fc;
case 0x4279fe:c.instructions+=4;goto B4279fe;
case 0x427a05:c.instructions+=3;goto B427a05;
case 0x427a07:c.instructions+=2;goto B427a07;
case 0x427a0a:c.instructions+=1;goto B427a0a;
case 0x427a0f:goto L427a0f;
case 0x427a11:c.instructions+=26;goto B427a11;
case 0x427a14:c.instructions+=25;goto B427a14;
case 0x427a17:c.instructions+=24;goto B427a17;
case 0x427a1a:c.instructions+=23;goto B427a1a;
case 0x427a1d:c.instructions+=22;goto B427a1d;
case 0x427a24:c.instructions+=21;goto B427a24;
case 0x427a2b:c.instructions+=20;goto B427a2b;
case 0x427a2d:c.instructions+=19;goto B427a2d;
case 0x427a31:c.instructions+=18;goto B427a31;
case 0x427a33:c.instructions+=17;goto B427a33;
case 0x427a37:c.instructions+=16;goto B427a37;
case 0x427a3b:c.instructions+=15;goto B427a3b;
case 0x427a3e:c.instructions+=14;goto B427a3e;
case 0x427a42:c.instructions+=13;goto B427a42;
case 0x427a45:c.instructions+=12;goto B427a45;
case 0x427a48:c.instructions+=11;goto B427a48;
case 0x427a4f:c.instructions+=10;goto B427a4f;
case 0x427a56:c.instructions+=9;goto B427a56;
case 0x427a58:c.instructions+=8;goto B427a58;
case 0x427a5c:c.instructions+=7;goto B427a5c;
case 0x427a64:c.instructions+=6;goto B427a64;
case 0x427a68:c.instructions+=5;goto B427a68;
case 0x427a6a:c.instructions+=4;goto B427a6a;
case 0x427a6e:c.instructions+=3;goto B427a6e;
case 0x427a72:c.instructions+=2;goto B427a72;
case 0x427a76:c.instructions+=1;goto B427a76;
case 0x427a7c:goto L427a7c;
case 0x427a80:c.instructions+=2;goto B427a80;
case 0x427a84:c.instructions+=1;goto B427a84;
case 0x427a86:goto L427a86;
case 0x427a8a:c.instructions+=1;goto B427a8a;
case 0x427a90:goto L427a90;
case 0x427a98:c.instructions+=2;goto B427a98;
case 0x427a9a:c.instructions+=1;goto B427a9a;
case 0x427aa0:goto L427aa0;
case 0x427aa4:c.instructions+=4;goto B427aa4;
case 0x427aa7:c.instructions+=3;goto B427aa7;
case 0x427aa9:c.instructions+=2;goto B427aa9;
case 0x427aac:c.instructions+=1;goto B427aac;
case 0x427ab2:goto L427ab2;
case 0x427ab6:c.instructions+=45;goto B427ab6;
case 0x427aba:c.instructions+=44;goto B427aba;
case 0x427ac1:c.instructions+=43;goto B427ac1;
case 0x427ac5:c.instructions+=42;goto B427ac5;
case 0x427ac9:c.instructions+=41;goto B427ac9;
case 0x427acd:c.instructions+=40;goto B427acd;
case 0x427acf:c.instructions+=39;goto B427acf;
case 0x427ad6:c.instructions+=38;goto B427ad6;
case 0x427add:c.instructions+=37;goto B427add;
case 0x427ae1:c.instructions+=36;goto B427ae1;
case 0x427ae5:c.instructions+=35;goto B427ae5;
case 0x427aec:c.instructions+=34;goto B427aec;
case 0x427af0:c.instructions+=33;goto B427af0;
case 0x427af4:c.instructions+=32;goto B427af4;
case 0x427af8:c.instructions+=31;goto B427af8;
case 0x427afc:c.instructions+=30;goto B427afc;
case 0x427b00:c.instructions+=29;goto B427b00;
case 0x427b02:c.instructions+=28;goto B427b02;
case 0x427b09:c.instructions+=27;goto B427b09;
case 0x427b10:c.instructions+=26;goto B427b10;
case 0x427b12:c.instructions+=25;goto B427b12;
case 0x427b14:c.instructions+=24;goto B427b14;
case 0x427b16:c.instructions+=23;goto B427b16;
case 0x427b18:c.instructions+=22;goto B427b18;
case 0x427b1a:c.instructions+=21;goto B427b1a;
case 0x427b1c:c.instructions+=20;goto B427b1c;
case 0x427b1e:c.instructions+=19;goto B427b1e;
case 0x427b20:c.instructions+=18;goto B427b20;
case 0x427b24:c.instructions+=17;goto B427b24;
case 0x427b28:c.instructions+=16;goto B427b28;
case 0x427b2c:c.instructions+=15;goto B427b2c;
case 0x427b30:c.instructions+=14;goto B427b30;
case 0x427b34:c.instructions+=13;goto B427b34;
case 0x427b36:c.instructions+=12;goto B427b36;
case 0x427b38:c.instructions+=11;goto B427b38;
case 0x427b3c:c.instructions+=10;goto B427b3c;
case 0x427b40:c.instructions+=9;goto B427b40;
case 0x427b44:c.instructions+=8;goto B427b44;
case 0x427b48:c.instructions+=7;goto B427b48;
case 0x427b4c:c.instructions+=6;goto B427b4c;
case 0x427b50:c.instructions+=5;goto B427b50;
case 0x427b54:c.instructions+=4;goto B427b54;
case 0x427b56:c.instructions+=3;goto B427b56;
case 0x427b58:c.instructions+=2;goto B427b58;
case 0x427b5b:c.instructions+=1;goto B427b5b;
case 0x427b5d:goto L427b5d;
case 0x427b61:c.instructions+=3;goto B427b61;
case 0x427b63:c.instructions+=2;goto B427b63;
case 0x427b67:c.instructions+=1;goto B427b67;
case 0x427b69:goto L427b69;
case 0x427b6d:goto L427b6d;
case 0x427b71:c.instructions+=22;goto B427b71;
case 0x427b78:c.instructions+=21;goto B427b78;
case 0x427b7c:c.instructions+=20;goto B427b7c;
case 0x427b83:c.instructions+=19;goto B427b83;
case 0x427b8a:c.instructions+=18;goto B427b8a;
case 0x427b8e:c.instructions+=17;goto B427b8e;
case 0x427b95:c.instructions+=16;goto B427b95;
case 0x427b9c:c.instructions+=15;goto B427b9c;
case 0x427ba0:c.instructions+=14;goto B427ba0;
case 0x427ba4:c.instructions+=13;goto B427ba4;
case 0x427ba8:c.instructions+=12;goto B427ba8;
case 0x427bac:c.instructions+=11;goto B427bac;
case 0x427bb0:c.instructions+=10;goto B427bb0;
case 0x427bb1:c.instructions+=9;goto B427bb1;
case 0x427bb5:c.instructions+=8;goto B427bb5;
case 0x427bbc:c.instructions+=7;goto B427bbc;
case 0x427bc0:c.instructions+=6;goto B427bc0;
case 0x427bc1:c.instructions+=5;goto B427bc1;
case 0x427bc5:c.instructions+=4;goto B427bc5;
case 0x427bc6:c.instructions+=3;goto B427bc6;
case 0x427bd1:c.instructions+=2;goto B427bd1;
case 0x427bdc:c.instructions+=1;goto B427bdc;
case 0x427be1:goto L427be1;
case 0x427be5:c.instructions+=6;goto B427be5;
case 0x427be6:c.instructions+=5;goto B427be6;
case 0x427bed:c.instructions+=4;goto B427bed;
case 0x427bee:c.instructions+=3;goto B427bee;
case 0x427bf5:c.instructions+=2;goto B427bf5;
case 0x427bf6:c.instructions+=1;goto B427bf6;
case 0x427bfb:goto L427bfb;
case 0x427c02:c.instructions+=14;goto B427c02;
case 0x427c06:c.instructions+=13;goto B427c06;
case 0x427c0d:c.instructions+=12;goto B427c0d;
case 0x427c0e:c.instructions+=11;goto B427c0e;
case 0x427c15:c.instructions+=10;goto B427c15;
case 0x427c1c:c.instructions+=9;goto B427c1c;
case 0x427c1d:c.instructions+=8;goto B427c1d;
case 0x427c24:c.instructions+=7;goto B427c24;
case 0x427c25:c.instructions+=6;goto B427c25;
case 0x427c2c:c.instructions+=5;goto B427c2c;
case 0x427c2d:c.instructions+=4;goto B427c2d;
case 0x427c38:c.instructions+=3;goto B427c38;
case 0x427c43:c.instructions+=2;goto B427c43;
case 0x427c4a:c.instructions+=1;goto B427c4a;
case 0x427c4f:goto L427c4f;
case 0x427c53:c.instructions+=5;goto B427c53;
case 0x427c56:c.instructions+=4;goto B427c56;
case 0x427c5a:c.instructions+=3;goto B427c5a;
case 0x427c5c:c.instructions+=2;goto B427c5c;
case 0x427c5f:c.instructions+=1;goto B427c5f;
case 0x427c61:goto L427c61;
case 0x427c65:c.instructions+=4;goto B427c65;
case 0x427c6b:c.instructions+=3;goto B427c6b;
case 0x427c6d:c.instructions+=2;goto B427c6d;
case 0x427c70:c.instructions+=1;goto B427c70;
case 0x427c76:goto L427c76;
case 0x427c7a:c.instructions+=11;goto B427c7a;
case 0x427c81:c.instructions+=10;goto B427c81;
case 0x427c85:c.instructions+=9;goto B427c85;
case 0x427c89:c.instructions+=8;goto B427c89;
case 0x427c8d:c.instructions+=7;goto B427c8d;
case 0x427c94:c.instructions+=6;goto B427c94;
case 0x427c96:c.instructions+=5;goto B427c96;
case 0x427c9d:c.instructions+=4;goto B427c9d;
case 0x427ca3:c.instructions+=3;goto B427ca3;
case 0x427ca5:c.instructions+=2;goto B427ca5;
case 0x427ca8:c.instructions+=1;goto B427ca8;
case 0x427caa:goto L427caa;
case 0x427cae:c.instructions+=6;goto B427cae;
case 0x427cb2:c.instructions+=5;goto B427cb2;
case 0x427cb9:c.instructions+=4;goto B427cb9;
case 0x427cbd:c.instructions+=3;goto B427cbd;
case 0x427cc4:c.instructions+=2;goto B427cc4;
case 0x427cc8:c.instructions+=1;goto B427cc8;
case 0x427cca:goto L427cca;
case 0x427ccc:c.instructions+=2;goto B427ccc;
case 0x427cd2:c.instructions+=1;goto B427cd2;
case 0x427cd8:goto L427cd8;
case 0x427cda:c.instructions+=14;goto B427cda;
case 0x427cde:c.instructions+=13;goto B427cde;
case 0x427ce2:c.instructions+=12;goto B427ce2;
case 0x427ce6:c.instructions+=11;goto B427ce6;
case 0x427cea:c.instructions+=10;goto B427cea;
case 0x427cee:c.instructions+=9;goto B427cee;
case 0x427cf2:c.instructions+=8;goto B427cf2;
case 0x427cf6:c.instructions+=7;goto B427cf6;
case 0x427cfd:c.instructions+=6;goto B427cfd;
case 0x427d01:c.instructions+=5;goto B427d01;
case 0x427d05:c.instructions+=4;goto B427d05;
case 0x427d0b:c.instructions+=3;goto B427d0b;
case 0x427d0d:c.instructions+=2;goto B427d0d;
case 0x427d10:c.instructions+=1;goto B427d10;
case 0x427d12:goto L427d12;
case 0x427d1a:goto L427d1a;
case 0x427d1e:c.instructions+=11;goto B427d1e;
case 0x427d25:c.instructions+=10;goto B427d25;
case 0x427d29:c.instructions+=9;goto B427d29;
case 0x427d2d:c.instructions+=8;goto B427d2d;
case 0x427d31:c.instructions+=7;goto B427d31;
case 0x427d38:c.instructions+=6;goto B427d38;
case 0x427d3a:c.instructions+=5;goto B427d3a;
case 0x427d41:c.instructions+=4;goto B427d41;
case 0x427d47:c.instructions+=3;goto B427d47;
case 0x427d49:c.instructions+=2;goto B427d49;
case 0x427d4c:c.instructions+=1;goto B427d4c;
case 0x427d4e:goto L427d4e;
case 0x427d52:c.instructions+=6;goto B427d52;
case 0x427d56:c.instructions+=5;goto B427d56;
case 0x427d5d:c.instructions+=4;goto B427d5d;
case 0x427d61:c.instructions+=3;goto B427d61;
case 0x427d68:c.instructions+=2;goto B427d68;
case 0x427d6c:c.instructions+=1;goto B427d6c;
case 0x427d6e:goto L427d6e;
case 0x427d70:c.instructions+=2;goto B427d70;
case 0x427d76:c.instructions+=1;goto B427d76;
case 0x427d7c:goto L427d7c;
case 0x427d7e:c.instructions+=14;goto B427d7e;
case 0x427d82:c.instructions+=13;goto B427d82;
case 0x427d86:c.instructions+=12;goto B427d86;
case 0x427d8a:c.instructions+=11;goto B427d8a;
case 0x427d8e:c.instructions+=10;goto B427d8e;
case 0x427d92:c.instructions+=9;goto B427d92;
case 0x427d96:c.instructions+=8;goto B427d96;
case 0x427d9a:c.instructions+=7;goto B427d9a;
case 0x427da1:c.instructions+=6;goto B427da1;
case 0x427da5:c.instructions+=5;goto B427da5;
case 0x427da9:c.instructions+=4;goto B427da9;
case 0x427daf:c.instructions+=3;goto B427daf;
case 0x427db1:c.instructions+=2;goto B427db1;
case 0x427db4:c.instructions+=1;goto B427db4;
case 0x427db6:goto L427db6;
case 0x427dbe:goto L427dbe;
case 0x427dc2:c.instructions+=6;goto B427dc2;
case 0x427dc6:c.instructions+=5;goto B427dc6;
case 0x427dc8:c.instructions+=4;goto B427dc8;
case 0x427dce:c.instructions+=3;goto B427dce;
case 0x427dd0:c.instructions+=2;goto B427dd0;
case 0x427dd3:c.instructions+=1;goto B427dd3;
case 0x427dd5:goto L427dd5;
case 0x427dd9:c.instructions+=8;goto B427dd9;
case 0x427ddc:c.instructions+=7;goto B427ddc;
case 0x427ddd:c.instructions+=6;goto B427ddd;
case 0x427de0:c.instructions+=5;goto B427de0;
case 0x427de3:c.instructions+=4;goto B427de3;
case 0x427de7:c.instructions+=3;goto B427de7;
case 0x427deb:c.instructions+=2;goto B427deb;
case 0x427def:c.instructions+=1;goto B427def;
case 0x427df1:goto L427df1;
case 0x427df5:c.instructions+=9;goto B427df5;
case 0x427df9:c.instructions+=8;goto B427df9;
case 0x427dfc:c.instructions+=7;goto B427dfc;
case 0x427dfd:c.instructions+=6;goto B427dfd;
case 0x427e00:c.instructions+=5;goto B427e00;
case 0x427e03:c.instructions+=4;goto B427e03;
case 0x427e07:c.instructions+=3;goto B427e07;
case 0x427e0b:c.instructions+=2;goto B427e0b;
case 0x427e0f:c.instructions+=1;goto B427e0f;
case 0x427e13:goto L427e13;
case 0x427e17:c.instructions+=5;goto B427e17;
case 0x427e1f:c.instructions+=4;goto B427e1f;
case 0x427e21:c.instructions+=3;goto B427e21;
case 0x427e25:c.instructions+=2;goto B427e25;
case 0x427e29:c.instructions+=1;goto B427e29;
case 0x427e2f:goto L427e2f;
case 0x427e31:goto L427e31;
case 0x427e35:c.instructions+=2;goto B427e35;
case 0x427e39:c.instructions+=1;goto B427e39;
case 0x427e3d:goto L427e3d;
case 0x427e41:c.instructions+=7;goto B427e41;
case 0x427e44:c.instructions+=6;goto B427e44;
case 0x427e46:c.instructions+=5;goto B427e46;
case 0x427e4a:c.instructions+=4;goto B427e4a;
case 0x427e4d:c.instructions+=3;goto B427e4d;
case 0x427e4f:c.instructions+=2;goto B427e4f;
case 0x427e52:c.instructions+=1;goto B427e52;
case 0x427e54:goto L427e54;
case 0x427e58:c.instructions+=6;goto B427e58;
case 0x427e5e:c.instructions+=5;goto B427e5e;
case 0x427e60:c.instructions+=4;goto B427e60;
case 0x427e66:c.instructions+=3;goto B427e66;
case 0x427e68:c.instructions+=2;goto B427e68;
case 0x427e6b:c.instructions+=1;goto B427e6b;
case 0x427e6d:goto L427e6d;
case 0x427e72:c.instructions+=6;goto B427e72;
case 0x427e74:c.instructions+=5;goto B427e74;
case 0x427e76:c.instructions+=4;goto B427e76;
case 0x427e7d:c.instructions+=3;goto B427e7d;
case 0x427e7e:c.instructions+=2;goto B427e7e;
case 0x427e86:c.instructions+=1;goto B427e86;
case 0x427e8b:goto L427e8b;
case 0x427e90:c.instructions+=6;goto B427e90;
case 0x427e92:c.instructions+=5;goto B427e92;
case 0x427e94:c.instructions+=4;goto B427e94;
case 0x427e9b:c.instructions+=3;goto B427e9b;
case 0x427e9c:c.instructions+=2;goto B427e9c;
case 0x427ea7:c.instructions+=1;goto B427ea7;
case 0x427eac:goto L427eac;
case 0x427eae:c.instructions+=8;goto B427eae;
case 0x427eb5:c.instructions+=7;goto B427eb5;
case 0x427ebc:c.instructions+=6;goto B427ebc;
case 0x427ebd:c.instructions+=5;goto B427ebd;
case 0x427ebe:c.instructions+=4;goto B427ebe;
case 0x427ebf:c.instructions+=3;goto B427ebf;
case 0x427ec1:c.instructions+=2;goto B427ec1;
case 0x427ec2:c.instructions+=1;goto B427ec2;
case 0x427ec5:goto L427ec5;
case 0x427eca:c.instructions+=6;goto B427eca;
case 0x427ecc:c.instructions+=5;goto B427ecc;
case 0x427ece:c.instructions+=4;goto B427ece;
case 0x427ed5:c.instructions+=3;goto B427ed5;
case 0x427ed6:c.instructions+=2;goto B427ed6;
case 0x427ede:c.instructions+=1;goto B427ede;
case 0x427ee3:goto L427ee3;
case 0x427ee8:c.instructions+=6;goto B427ee8;
case 0x427eea:c.instructions+=5;goto B427eea;
case 0x427eec:c.instructions+=4;goto B427eec;
case 0x427ef3:c.instructions+=3;goto B427ef3;
case 0x427ef4:c.instructions+=2;goto B427ef4;
case 0x427eff:c.instructions+=1;goto B427eff;
case 0x427f04:goto L427f04;
case 0x427f0b:c.instructions+=8;goto B427f0b;
case 0x427f0c:c.instructions+=7;goto B427f0c;
case 0x427f0d:c.instructions+=6;goto B427f0d;
case 0x427f0f:c.instructions+=5;goto B427f0f;
case 0x427f16:c.instructions+=4;goto B427f16;
case 0x427f17:c.instructions+=3;goto B427f17;
case 0x427f19:c.instructions+=2;goto B427f19;
case 0x427f1a:c.instructions+=1;goto B427f1a;
case 0x427f20:goto L427f20;
case 0x427f22:c.instructions+=14;goto B427f22;
case 0x427f27:c.instructions+=13;goto B427f27;
case 0x427f2d:c.instructions+=12;goto B427f2d;
case 0x427f2e:c.instructions+=11;goto B427f2e;
case 0x427f35:c.instructions+=10;goto B427f35;
case 0x427f36:c.instructions+=9;goto B427f36;
case 0x427f37:c.instructions+=8;goto B427f37;
case 0x427f38:c.instructions+=7;goto B427f38;
case 0x427f3c:c.instructions+=6;goto B427f3c;
case 0x427f3d:c.instructions+=5;goto B427f3d;
case 0x427f3e:c.instructions+=4;goto B427f3e;
case 0x427f40:c.instructions+=3;goto B427f40;
case 0x427f41:c.instructions+=2;goto B427f41;
case 0x427f45:c.instructions+=1;goto B427f45;
case 0x427f4a:goto L427f4a;
case 0x427f50:c.instructions+=6;goto B427f50;
case 0x427f52:c.instructions+=5;goto B427f52;
case 0x427f53:c.instructions+=4;goto B427f53;
case 0x427f55:c.instructions+=3;goto B427f55;
case 0x427f59:c.instructions+=2;goto B427f59;
case 0x427f5f:c.instructions+=1;goto B427f5f;
case 0x427f64:goto L427f64;
case 0x427f6a:c.instructions+=7;goto B427f6a;
case 0x427f6d:c.instructions+=6;goto B427f6d;
case 0x427f73:c.instructions+=5;goto B427f73;
case 0x427f74:c.instructions+=4;goto B427f74;
case 0x427f77:c.instructions+=3;goto B427f77;
case 0x427f79:c.instructions+=2;goto B427f79;
case 0x427f7e:c.instructions+=1;goto B427f7e;
case 0x427f83:goto L427f83;
case 0x427f86:c.instructions+=5;goto B427f86;
case 0x427f8c:c.instructions+=4;goto B427f8c;
case 0x427f8d:c.instructions+=3;goto B427f8d;
case 0x427f90:c.instructions+=2;goto B427f90;
case 0x427f92:c.instructions+=1;goto B427f92;
case 0x427f97:goto L427f97;
case 0x427f9a:c.instructions+=5;goto B427f9a;
case 0x427fa0:c.instructions+=4;goto B427fa0;
case 0x427fa1:c.instructions+=3;goto B427fa1;
case 0x427fa4:c.instructions+=2;goto B427fa4;
case 0x427fa6:c.instructions+=1;goto B427fa6;
case 0x427fab:goto L427fab;
case 0x427fb1:c.instructions+=4;goto B427fb1;
case 0x427fb2:c.instructions+=3;goto B427fb2;
case 0x427fb5:c.instructions+=2;goto B427fb5;
case 0x427fb7:c.instructions+=1;goto B427fb7;
case 0x427fbc:goto L427fbc;
case 0x427fc2:c.instructions+=4;goto B427fc2;
case 0x427fc3:c.instructions+=3;goto B427fc3;
case 0x427fc6:c.instructions+=2;goto B427fc6;
case 0x427fc8:c.instructions+=1;goto B427fc8;
case 0x427fcd:goto L427fcd;
case 0x427fd3:c.instructions+=4;goto B427fd3;
case 0x427fd4:c.instructions+=3;goto B427fd4;
case 0x427fd7:c.instructions+=2;goto B427fd7;
case 0x427fd9:c.instructions+=1;goto B427fd9;
case 0x427fde:goto L427fde;
case 0x427fe3:c.instructions+=2;goto B427fe3;
case 0x427fe6:c.instructions+=1;goto B427fe6;
case 0x427fe8:goto L427fe8;
case 0x427fea:c.instructions+=3;goto B427fea;
case 0x427feb:c.instructions+=2;goto B427feb;
case 0x427fed:c.instructions+=1;goto B427fed;
case 0x427ff0:goto L427ff0;
case 0x427ff3:c.instructions+=2;goto B427ff3;
case 0x427ff5:c.instructions+=1;goto B427ff5;
case 0x427ff7:goto L427ff7;
case 0x427ffc:goto L427ffc;
case 0x427ffe:c.instructions+=2;goto B427ffe;
case 0x427fff:c.instructions+=1;goto B427fff;
default:missing_instruction(c.pc);}
B427000:L427000:{c.instructions+=4;NFSU2_TR(0x427000);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B427002:{NFSU2_TR(0x427002);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B427004:{NFSU2_TR(0x427004);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B427008:{NFSU2_TR(0x427008);
if(r1(R+518)){{goto L42704e;}}
}
B42700a:L42700a:{c.instructions+=11;NFSU2_TR(0x42700a);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B42700d:{NFSU2_TR(0x42700d);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B427010:{NFSU2_TR(0x427010);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B427013:{NFSU2_TR(0x427013);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B427017:{NFSU2_TR(0x427017);
__builtin_memmove((R+4),gp(0x783654),4);
}
B42701d:{NFSU2_TR(0x42701d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42701e:{NFSU2_TR(0x42701e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42701f:{NFSU2_TR(0x42701f);
u8 U[4];
w4(U+0,u32(0x14ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B427021:{NFSU2_TR(0x427021);
__builtin_memmove((R+4),(R+24),4);
}
B427023:{NFSU2_TR(0x427023);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B427027:{NFSU2_TR(0x427027);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42702cull));
TAIL_STATIC(0x4234a0u,423);
}
B42702c:L42702c:{c.instructions+=7;NFSU2_TR(0x42702c);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B427030:{NFSU2_TR(0x427030);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B427034:{NFSU2_TR(0x427034);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x218ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B42703a:{NFSU2_TR(0x42703a);
u8 U[4];
w4(U+0,u32(0x785a4cull));
s4(u32(r4(R+24)),r4(U+0));
}
B427040:{NFSU2_TR(0x427040);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x210ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B427046:{NFSU2_TR(0x427046);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x214ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B42704c:{NFSU2_TR(0x42704c);
__builtin_memmove((R+0),(R+24),4);
}
B42704e:L42704e:{c.instructions+=6;NFSU2_TR(0x42704e);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B427052:{NFSU2_TR(0x427052);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B427053:{NFSU2_TR(0x427053);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B427054:{NFSU2_TR(0x427054);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B42705b:{NFSU2_TR(0x42705b);
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
B42705e:{NFSU2_TR(0x42705e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B427060:L427060:{c.instructions+=10;NFSU2_TR(0x427060);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B427062:{NFSU2_TR(0x427062);
u8 U[4];
w4(U+0,u32(0x77196bull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B427067:{NFSU2_TR(0x427067);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B42706d:{NFSU2_TR(0x42706d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42706e:{NFSU2_TR(0x42706e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B427075:{NFSU2_TR(0x427075);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B427076:{NFSU2_TR(0x427076);
__builtin_memmove((R+0),gp(0x81cb6c),4);
}
B42707b:{NFSU2_TR(0x42707b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42707c:{NFSU2_TR(0x42707c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42707d:{NFSU2_TR(0x42707d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x427082ull));
TAIL_STATIC(0x440e50u,440);
}
B427082:L427082:{c.instructions+=6;NFSU2_TR(0x427082);
__builtin_memmove((R+24),(R+0),4);
}
B427084:{NFSU2_TR(0x427084);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B427087:{NFSU2_TR(0x427087);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B42708b:{NFSU2_TR(0x42708b);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B42708d:{NFSU2_TR(0x42708d);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B427095:{NFSU2_TR(0x427095);
if(r1(R+518)){{goto L4270ce;}}
}
B427097:L427097:{c.instructions+=6;NFSU2_TR(0x427097);
__builtin_memmove((R+4),gp(0x783644),4);
}
B42709d:{NFSU2_TR(0x42709d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42709e:{NFSU2_TR(0x42709e);
u8 U[4];
w4(U+0,u32(0x258ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4270a3:{NFSU2_TR(0x4270a3);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4270a5:{NFSU2_TR(0x4270a5);
__builtin_memmove((R+4),(R+24),4);
}
B4270a7:{NFSU2_TR(0x4270a7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4270acull));
TAIL_STATIC(0x4234a0u,423);
}
B4270ac:L4270ac:{c.instructions+=8;NFSU2_TR(0x4270ac);
u8 U[4];
w4(U+0,u32(0x78591cull));
s4(u32(r4(R+24)),r4(U+0));
}
B4270b2:{NFSU2_TR(0x4270b2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x210ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4270bc:{NFSU2_TR(0x4270bc);
__builtin_memmove((R+0),(R+24),4);
}
B4270be:{NFSU2_TR(0x4270be);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4270bf:{NFSU2_TR(0x4270bf);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4270c3:{NFSU2_TR(0x4270c3);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4270ca:{NFSU2_TR(0x4270ca);
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
B4270cd:{NFSU2_TR(0x4270cd);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4270ce:L4270ce:{c.instructions+=6;NFSU2_TR(0x4270ce);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4270d2:{NFSU2_TR(0x4270d2);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4270d4:{NFSU2_TR(0x4270d4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4270d5:{NFSU2_TR(0x4270d5);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4270dc:{NFSU2_TR(0x4270dc);
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
B4270df:{NFSU2_TR(0x4270df);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4270e0:L4270e0:{c.instructions+=14;NFSU2_TR(0x4270e0);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4270e2:{NFSU2_TR(0x4270e2);
u8 U[4];
w4(U+0,u32(0x771a91ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4270e7:{NFSU2_TR(0x4270e7);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4270ed:{NFSU2_TR(0x4270ed);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4270ee:{NFSU2_TR(0x4270ee);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4270f5:{NFSU2_TR(0x4270f5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x8ull))));
}
B4270f8:{NFSU2_TR(0x4270f8);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4270f9:{NFSU2_TR(0x4270f9);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4270fa:{NFSU2_TR(0x4270fa);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4270fb:{NFSU2_TR(0x4270fb);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4270ff:{NFSU2_TR(0x4270ff);
u8 U[4];
w4(U+0,u32(0x785b60ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B427104:{NFSU2_TR(0x427104);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B427106:{NFSU2_TR(0x427106);
__builtin_memmove((R+4),(R+28),4);
}
B427108:{NFSU2_TR(0x427108);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42710dull));
TAIL_STATIC(0x578ce0u,578);
}
B42710d:L42710d:{c.instructions+=9;NFSU2_TR(0x42710d);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B427111:{NFSU2_TR(0x427111);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+24),(U+0),4);
}
B427113:{NFSU2_TR(0x427113);
u8 U[4];
w4(U+0,u32(u32(u32(0xfull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B427117:{NFSU2_TR(0x427117);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B427119:{NFSU2_TR(0x427119);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+0),(U+0),1);
}
B42711c:{NFSU2_TR(0x42711c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42711d:{NFSU2_TR(0x42711d);
__builtin_memmove((R+4),(R+28),4);
}
B42711f:{NFSU2_TR(0x42711f);
u8 U[5];
w4(U+0,u32(u32(u32(0x13ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B427123:{NFSU2_TR(0x427123);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x427128ull));
TAIL_STATIC(0x5716c0u,571);
}
B427128:L427128:{c.instructions+=3;NFSU2_TR(0x427128);
u8 U[5];
w4(U+0,u32(u32(u32(0xfull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B42712c:{NFSU2_TR(0x42712c);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B42712e:{NFSU2_TR(0x42712e);
if(r1(R+518)){{goto L42756c;}}
}
B427134:L427134:{c.instructions+=2;NFSU2_TR(0x427134);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B427136:{NFSU2_TR(0x427136);
if(r1(R+518)){{goto L427142;}}
}
B427138:L427138:{c.instructions+=2;NFSU2_TR(0x427138);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x204ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B42713e:{NFSU2_TR(0x42713e);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B427142:L427142:{c.instructions+=7;NFSU2_TR(0x427142);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B427144:{NFSU2_TR(0x427144);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B427146:{NFSU2_TR(0x427146);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B427148:{NFSU2_TR(0x427148);
u8 U[4];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B42714c:{NFSU2_TR(0x42714c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42714d:{NFSU2_TR(0x42714d);
__builtin_memmove((R+4),(R+28),4);
}
B42714f:{NFSU2_TR(0x42714f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x427154ull));
TAIL_STATIC(0x571640u,571);
}
B427154:L427154:{c.instructions+=3;NFSU2_TR(0x427154);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x41ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B427157:{NFSU2_TR(0x427157);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B427159:{NFSU2_TR(0x427159);
if(r1(R+518)){{goto L427560;}}
}
B42715f:L42715f:{c.instructions+=3;NFSU2_TR(0x42715f);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B427163:{NFSU2_TR(0x427163);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0x14ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x14ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x14ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B427166:{NFSU2_TR(0x427166);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L42755e;}}
}
B42716c:L42716c:{c.instructions+=1;NFSU2_TR(0x42716c);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x427588ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B427173:L427173:{c.instructions+=3;NFSU2_TR(0x427173);
__builtin_memmove((R+4),gp(0x81cb6c),4);
}
B427179:{NFSU2_TR(0x427179);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42717a:{NFSU2_TR(0x42717a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42717full));
TAIL_STATIC(0x440e50u,440);
}
B42717f:L42717f:{c.instructions+=5;NFSU2_TR(0x42717f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B427182:{NFSU2_TR(0x427182);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B427186:{NFSU2_TR(0x427186);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B427188:{NFSU2_TR(0x427188);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B427190:{NFSU2_TR(0x427190);
if(r1(R+518)){{goto L427552;}}
}
B427196:L427196:{c.instructions+=5;NFSU2_TR(0x427196);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B427198:{NFSU2_TR(0x427198);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42719a:{NFSU2_TR(0x42719a);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42719c:{NFSU2_TR(0x42719c);
__builtin_memmove((R+4),(R+0),4);
}
B42719e:{NFSU2_TR(0x42719e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4271a3ull));
TAIL_STATIC(0x423610u,423);
}
B4271a3:L4271a3:{c.instructions+=1;NFSU2_TR(0x4271a3);
{goto L427554;}
}
B4271a8:L4271a8:{c.instructions+=3;NFSU2_TR(0x4271a8);
__builtin_memmove((R+8),gp(0x81cb6c),4);
}
B4271ae:{NFSU2_TR(0x4271ae);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4271af:{NFSU2_TR(0x4271af);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4271b4ull));
TAIL_STATIC(0x440e50u,440);
}
B4271b4:L4271b4:{c.instructions+=5;NFSU2_TR(0x4271b4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4271b7:{NFSU2_TR(0x4271b7);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4271bb:{NFSU2_TR(0x4271bb);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4271bd:{NFSU2_TR(0x4271bd);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4271c5:{NFSU2_TR(0x4271c5);
if(r1(R+518)){{goto L427552;}}
}
B4271cb:L4271cb:{c.instructions+=4;NFSU2_TR(0x4271cb);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4271cd:{NFSU2_TR(0x4271cd);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4271cf:{NFSU2_TR(0x4271cf);
__builtin_memmove((R+4),(R+0),4);
}
B4271d1:{NFSU2_TR(0x4271d1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4271d6ull));
TAIL_STATIC(0x4235e0u,423);
}
B4271d6:L4271d6:{c.instructions+=1;NFSU2_TR(0x4271d6);
{goto L427554;}
}
B4271db:L4271db:{c.instructions+=3;NFSU2_TR(0x4271db);
__builtin_memmove((R+0),gp(0x81cb6c),4);
}
B4271e0:{NFSU2_TR(0x4271e0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4271e1:{NFSU2_TR(0x4271e1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4271e6ull));
TAIL_STATIC(0x440e50u,440);
}
B4271e6:L4271e6:{c.instructions+=5;NFSU2_TR(0x4271e6);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4271e9:{NFSU2_TR(0x4271e9);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4271ed:{NFSU2_TR(0x4271ed);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4271ef:{NFSU2_TR(0x4271ef);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0x2ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4271f7:{NFSU2_TR(0x4271f7);
if(r1(R+518)){{goto L427552;}}
}
B4271fd:L4271fd:{c.instructions+=5;NFSU2_TR(0x4271fd);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4271ff:{NFSU2_TR(0x4271ff);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B427201:{NFSU2_TR(0x427201);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B427203:{NFSU2_TR(0x427203);
__builtin_memmove((R+4),(R+0),4);
}
B427205:{NFSU2_TR(0x427205);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42720aull));
TAIL_STATIC(0x423780u,423);
}
B42720a:L42720a:{c.instructions+=1;NFSU2_TR(0x42720a);
{goto L427554;}
}
B42720f:L42720f:{c.instructions+=3;NFSU2_TR(0x42720f);
__builtin_memmove((R+4),gp(0x81cb6c),4);
}
B427215:{NFSU2_TR(0x427215);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B427216:{NFSU2_TR(0x427216);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42721bull));
TAIL_STATIC(0x440e50u,440);
}
B42721b:L42721b:{c.instructions+=5;NFSU2_TR(0x42721b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B42721e:{NFSU2_TR(0x42721e);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B427222:{NFSU2_TR(0x427222);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B427224:{NFSU2_TR(0x427224);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0x3ull));
s4(u32(r4(U+0)),r4(U+4));
}
B42722c:{NFSU2_TR(0x42722c);
if(r1(R+518)){{goto L427552;}}
}
B427232:L427232:{c.instructions+=7;NFSU2_TR(0x427232);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B427234:{NFSU2_TR(0x427234);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B427236:{NFSU2_TR(0x427236);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B427238:{NFSU2_TR(0x427238);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42723a:{NFSU2_TR(0x42723a);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42723c:{NFSU2_TR(0x42723c);
__builtin_memmove((R+4),(R+0),4);
}
B42723e:{NFSU2_TR(0x42723e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x427243ull));
TAIL_STATIC(0x4243b0u,424);
}
B427243:L427243:{c.instructions+=1;NFSU2_TR(0x427243);
{goto L427554;}
}
B427248:L427248:{c.instructions+=3;NFSU2_TR(0x427248);
__builtin_memmove((R+8),gp(0x81cb6c),4);
}
B42724e:{NFSU2_TR(0x42724e);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42724f:{NFSU2_TR(0x42724f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x427254ull));
TAIL_STATIC(0x440e50u,440);
}
B427254:L427254:{c.instructions+=5;NFSU2_TR(0x427254);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B427257:{NFSU2_TR(0x427257);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B42725b:{NFSU2_TR(0x42725b);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B42725d:{NFSU2_TR(0x42725d);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0x4ull));
s4(u32(r4(U+0)),r4(U+4));
}
B427265:{NFSU2_TR(0x427265);
if(r1(R+518)){{goto L427552;}}
}
B42726b:L42726b:{c.instructions+=5;NFSU2_TR(0x42726b);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42726d:{NFSU2_TR(0x42726d);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42726f:{NFSU2_TR(0x42726f);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B427271:{NFSU2_TR(0x427271);
__builtin_memmove((R+4),(R+0),4);
}
B427273:{NFSU2_TR(0x427273);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x427278ull));
TAIL_STATIC(0x4238c0u,423);
}
B427278:L427278:{c.instructions+=1;NFSU2_TR(0x427278);
{goto L427554;}
}
B42727d:L42727d:{c.instructions+=3;NFSU2_TR(0x42727d);
__builtin_memmove((R+0),gp(0x81cb6c),4);
}
B427282:{NFSU2_TR(0x427282);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B427283:{NFSU2_TR(0x427283);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x427288ull));
TAIL_STATIC(0x440e50u,440);
}
B427288:L427288:{c.instructions+=5;NFSU2_TR(0x427288);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B42728b:{NFSU2_TR(0x42728b);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B42728f:{NFSU2_TR(0x42728f);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B427291:{NFSU2_TR(0x427291);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0x5ull));
s4(u32(r4(U+0)),r4(U+4));
}
B427299:{NFSU2_TR(0x427299);
if(r1(R+518)){{goto L427552;}}
}
B42729f:L42729f:{c.instructions+=4;NFSU2_TR(0x42729f);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4272a1:{NFSU2_TR(0x4272a1);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4272a3:{NFSU2_TR(0x4272a3);
__builtin_memmove((R+4),(R+0),4);
}
B4272a5:{NFSU2_TR(0x4272a5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4272aaull));
TAIL_STATIC(0x4235a0u,423);
}
B4272aa:L4272aa:{c.instructions+=1;NFSU2_TR(0x4272aa);
{goto L427554;}
}
B4272af:L4272af:{c.instructions+=3;NFSU2_TR(0x4272af);
__builtin_memmove((R+4),gp(0x81cb6c),4);
}
B4272b5:{NFSU2_TR(0x4272b5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4272b6:{NFSU2_TR(0x4272b6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4272bbull));
TAIL_STATIC(0x440e50u,440);
}
B4272bb:L4272bb:{c.instructions+=5;NFSU2_TR(0x4272bb);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4272be:{NFSU2_TR(0x4272be);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4272c2:{NFSU2_TR(0x4272c2);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4272c4:{NFSU2_TR(0x4272c4);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0x6ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4272cc:{NFSU2_TR(0x4272cc);
if(r1(R+518)){{goto L427552;}}
}
B4272d2:L4272d2:{c.instructions+=4;NFSU2_TR(0x4272d2);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4272d4:{NFSU2_TR(0x4272d4);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4272d6:{NFSU2_TR(0x4272d6);
__builtin_memmove((R+4),(R+0),4);
}
B4272d8:{NFSU2_TR(0x4272d8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4272ddull));
TAIL_STATIC(0x424290u,424);
}
B4272dd:L4272dd:{c.instructions+=1;NFSU2_TR(0x4272dd);
{goto L427554;}
}
B4272e2:L4272e2:{c.instructions+=3;NFSU2_TR(0x4272e2);
__builtin_memmove((R+8),gp(0x81cb6c),4);
}
B4272e8:{NFSU2_TR(0x4272e8);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4272e9:{NFSU2_TR(0x4272e9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4272eeull));
TAIL_STATIC(0x440e50u,440);
}
B4272ee:L4272ee:{c.instructions+=5;NFSU2_TR(0x4272ee);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4272f1:{NFSU2_TR(0x4272f1);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4272f5:{NFSU2_TR(0x4272f5);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4272f7:{NFSU2_TR(0x4272f7);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0x7ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4272ff:{NFSU2_TR(0x4272ff);
if(r1(R+518)){{goto L427552;}}
}
B427305:L427305:{c.instructions+=6;NFSU2_TR(0x427305);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B427307:{NFSU2_TR(0x427307);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B427309:{NFSU2_TR(0x427309);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42730b:{NFSU2_TR(0x42730b);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42730d:{NFSU2_TR(0x42730d);
__builtin_memmove((R+4),(R+0),4);
}
B42730f:{NFSU2_TR(0x42730f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x427314ull));
TAIL_STATIC(0x423b60u,423);
}
B427314:L427314:{c.instructions+=1;NFSU2_TR(0x427314);
{goto L427554;}
}
B427319:L427319:{c.instructions+=3;NFSU2_TR(0x427319);
__builtin_memmove((R+0),gp(0x81cb6c),4);
}
B42731e:{NFSU2_TR(0x42731e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42731f:{NFSU2_TR(0x42731f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x427324ull));
TAIL_STATIC(0x440e50u,440);
}
B427324:L427324:{c.instructions+=5;NFSU2_TR(0x427324);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B427327:{NFSU2_TR(0x427327);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B42732b:{NFSU2_TR(0x42732b);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B42732d:{NFSU2_TR(0x42732d);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0x8ull));
s4(u32(r4(U+0)),r4(U+4));
}
B427335:{NFSU2_TR(0x427335);
if(r1(R+518)){{goto L427552;}}
}
B42733b:L42733b:{c.instructions+=5;NFSU2_TR(0x42733b);
u8 U[4];
w4(U+0,u32(0xbf800000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B427340:{NFSU2_TR(0x427340);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B427342:{NFSU2_TR(0x427342);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B427344:{NFSU2_TR(0x427344);
__builtin_memmove((R+4),(R+0),4);
}
B427346:{NFSU2_TR(0x427346);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42734bull));
TAIL_STATIC(0x423c30u,423);
}
B42734b:L42734b:{c.instructions+=1;NFSU2_TR(0x42734b);
{goto L427554;}
}
B427350:L427350:{c.instructions+=3;NFSU2_TR(0x427350);
__builtin_memmove((R+4),gp(0x81cb6c),4);
}
B427356:{NFSU2_TR(0x427356);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B427357:{NFSU2_TR(0x427357);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42735cull));
TAIL_STATIC(0x440e50u,440);
}
B42735c:L42735c:{c.instructions+=5;NFSU2_TR(0x42735c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B42735f:{NFSU2_TR(0x42735f);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B427363:{NFSU2_TR(0x427363);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B427365:{NFSU2_TR(0x427365);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0x9ull));
s4(u32(r4(U+0)),r4(U+4));
}
B42736d:{NFSU2_TR(0x42736d);
if(r1(R+518)){{goto L427552;}}
}
B427373:L427373:{c.instructions+=5;NFSU2_TR(0x427373);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B427375:{NFSU2_TR(0x427375);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B427377:{NFSU2_TR(0x427377);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B427379:{NFSU2_TR(0x427379);
__builtin_memmove((R+4),(R+0),4);
}
B42737b:{NFSU2_TR(0x42737b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x427380ull));
TAIL_STATIC(0x423cc0u,423);
}
B427380:L427380:{c.instructions+=1;NFSU2_TR(0x427380);
{goto L427554;}
}
B427385:L427385:{c.instructions+=3;NFSU2_TR(0x427385);
__builtin_memmove((R+8),gp(0x81cb6c),4);
}
B42738b:{NFSU2_TR(0x42738b);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42738c:{NFSU2_TR(0x42738c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x427391ull));
TAIL_STATIC(0x440e50u,440);
}
B427391:L427391:{c.instructions+=5;NFSU2_TR(0x427391);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B427394:{NFSU2_TR(0x427394);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B427398:{NFSU2_TR(0x427398);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B42739a:{NFSU2_TR(0x42739a);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0xaull));
s4(u32(r4(U+0)),r4(U+4));
}
B4273a2:{NFSU2_TR(0x4273a2);
if(r1(R+518)){{goto L427552;}}
}
B4273a8:L4273a8:{c.instructions+=4;NFSU2_TR(0x4273a8);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4273aa:{NFSU2_TR(0x4273aa);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4273ac:{NFSU2_TR(0x4273ac);
__builtin_memmove((R+4),(R+0),4);
}
B4273ae:{NFSU2_TR(0x4273ae);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4273b3ull));
TAIL_STATIC(0x4241c0u,424);
}
B4273b3:L4273b3:{c.instructions+=1;NFSU2_TR(0x4273b3);
{goto L427554;}
}
B4273b8:L4273b8:{c.instructions+=3;NFSU2_TR(0x4273b8);
__builtin_memmove((R+0),gp(0x81cb6c),4);
}
B4273bd:{NFSU2_TR(0x4273bd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4273be:{NFSU2_TR(0x4273be);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4273c3ull));
TAIL_STATIC(0x440e50u,440);
}
B4273c3:L4273c3:{c.instructions+=5;NFSU2_TR(0x4273c3);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4273c6:{NFSU2_TR(0x4273c6);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4273ca:{NFSU2_TR(0x4273ca);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4273cc:{NFSU2_TR(0x4273cc);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0xbull));
s4(u32(r4(U+0)),r4(U+4));
}
B4273d4:{NFSU2_TR(0x4273d4);
if(r1(R+518)){{goto L427552;}}
}
B4273da:L4273da:{c.instructions+=5;NFSU2_TR(0x4273da);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4273dc:{NFSU2_TR(0x4273dc);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4273de:{NFSU2_TR(0x4273de);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4273e0:{NFSU2_TR(0x4273e0);
__builtin_memmove((R+4),(R+0),4);
}
B4273e2:{NFSU2_TR(0x4273e2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4273e7ull));
TAIL_STATIC(0x424560u,424);
}
B4273e7:L4273e7:{c.instructions+=1;NFSU2_TR(0x4273e7);
{goto L427554;}
}
B4273ec:L4273ec:{c.instructions+=3;NFSU2_TR(0x4273ec);
__builtin_memmove((R+4),gp(0x81cb6c),4);
}
B4273f2:{NFSU2_TR(0x4273f2);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4273f3:{NFSU2_TR(0x4273f3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4273f8ull));
TAIL_STATIC(0x440e50u,440);
}
B4273f8:L4273f8:{c.instructions+=5;NFSU2_TR(0x4273f8);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4273fb:{NFSU2_TR(0x4273fb);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4273ff:{NFSU2_TR(0x4273ff);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B427401:{NFSU2_TR(0x427401);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0xcull));
s4(u32(r4(U+0)),r4(U+4));
}
B427409:{NFSU2_TR(0x427409);
if(r1(R+518)){{goto L427552;}}
}
B42740f:L42740f:{c.instructions+=4;NFSU2_TR(0x42740f);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B427411:{NFSU2_TR(0x427411);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B427413:{NFSU2_TR(0x427413);
__builtin_memmove((R+4),(R+0),4);
}
B427415:{NFSU2_TR(0x427415);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42741aull));
TAIL_STATIC(0x424980u,424);
}
B42741a:L42741a:{c.instructions+=1;NFSU2_TR(0x42741a);
{goto L427554;}
}
B42741f:L42741f:{c.instructions+=3;NFSU2_TR(0x42741f);
__builtin_memmove((R+8),gp(0x81cb6c),4);
}
B427425:{NFSU2_TR(0x427425);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B427426:{NFSU2_TR(0x427426);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42742bull));
TAIL_STATIC(0x440e50u,440);
}
B42742b:L42742b:{c.instructions+=5;NFSU2_TR(0x42742b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B42742e:{NFSU2_TR(0x42742e);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B427432:{NFSU2_TR(0x427432);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B427434:{NFSU2_TR(0x427434);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0xdull));
s4(u32(r4(U+0)),r4(U+4));
}
B42743c:{NFSU2_TR(0x42743c);
if(r1(R+518)){{goto L427552;}}
}
B427442:L427442:{c.instructions+=5;NFSU2_TR(0x427442);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B427444:{NFSU2_TR(0x427444);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B427446:{NFSU2_TR(0x427446);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B427448:{NFSU2_TR(0x427448);
__builtin_memmove((R+4),(R+0),4);
}
B42744a:{NFSU2_TR(0x42744a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42744full));
TAIL_STATIC(0x424b00u,424);
}
B42744f:L42744f:{c.instructions+=1;NFSU2_TR(0x42744f);
{goto L427554;}
}
B427454:L427454:{c.instructions+=3;NFSU2_TR(0x427454);
__builtin_memmove((R+0),gp(0x81cb6c),4);
}
B427459:{NFSU2_TR(0x427459);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42745a:{NFSU2_TR(0x42745a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42745full));
TAIL_STATIC(0x440e50u,440);
}
B42745f:L42745f:{c.instructions+=5;NFSU2_TR(0x42745f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B427462:{NFSU2_TR(0x427462);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B427466:{NFSU2_TR(0x427466);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B427468:{NFSU2_TR(0x427468);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0xeull));
s4(u32(r4(U+0)),r4(U+4));
}
B427470:{NFSU2_TR(0x427470);
if(r1(R+518)){{goto L427552;}}
}
B427476:L427476:{c.instructions+=6;NFSU2_TR(0x427476);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B427478:{NFSU2_TR(0x427478);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42747a:{NFSU2_TR(0x42747a);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42747c:{NFSU2_TR(0x42747c);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42747e:{NFSU2_TR(0x42747e);
__builtin_memmove((R+4),(R+0),4);
}
B427480:{NFSU2_TR(0x427480);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x427485ull));
TAIL_STATIC(0x425100u,425);
}
B427485:L427485:{c.instructions+=1;NFSU2_TR(0x427485);
{goto L427554;}
}
B42748a:L42748a:{c.instructions+=3;NFSU2_TR(0x42748a);
__builtin_memmove((R+4),gp(0x81cb6c),4);
}
B427490:{NFSU2_TR(0x427490);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B427491:{NFSU2_TR(0x427491);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x427496ull));
TAIL_STATIC(0x440e50u,440);
}
B427496:L427496:{c.instructions+=5;NFSU2_TR(0x427496);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B427499:{NFSU2_TR(0x427499);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B42749d:{NFSU2_TR(0x42749d);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B42749f:{NFSU2_TR(0x42749f);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0xfull));
s4(u32(r4(U+0)),r4(U+4));
}
B4274a7:{NFSU2_TR(0x4274a7);
if(r1(R+518)){{goto L427552;}}
}
B4274ad:L4274ad:{c.instructions+=7;NFSU2_TR(0x4274ad);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4274af:{NFSU2_TR(0x4274af);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4274b1:{NFSU2_TR(0x4274b1);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4274b3:{NFSU2_TR(0x4274b3);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4274b5:{NFSU2_TR(0x4274b5);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4274b7:{NFSU2_TR(0x4274b7);
__builtin_memmove((R+4),(R+0),4);
}
B4274b9:{NFSU2_TR(0x4274b9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4274beull));
TAIL_STATIC(0x424b40u,424);
}
B4274be:L4274be:{c.instructions+=1;NFSU2_TR(0x4274be);
{goto L427554;}
}
B4274c3:L4274c3:{c.instructions+=3;NFSU2_TR(0x4274c3);
__builtin_memmove((R+8),gp(0x81cb6c),4);
}
B4274c9:{NFSU2_TR(0x4274c9);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4274ca:{NFSU2_TR(0x4274ca);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4274cfull));
TAIL_STATIC(0x440e50u,440);
}
B4274cf:L4274cf:{c.instructions+=5;NFSU2_TR(0x4274cf);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4274d2:{NFSU2_TR(0x4274d2);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4274d6:{NFSU2_TR(0x4274d6);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4274d8:{NFSU2_TR(0x4274d8);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0x10ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4274e0:{NFSU2_TR(0x4274e0);
if(r1(R+518)){{goto L427552;}}
}
B4274e2:L4274e2:{c.instructions+=4;NFSU2_TR(0x4274e2);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4274e4:{NFSU2_TR(0x4274e4);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4274e6:{NFSU2_TR(0x4274e6);
__builtin_memmove((R+4),(R+0),4);
}
B4274e8:{NFSU2_TR(0x4274e8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4274edull));
TAIL_STATIC(0x425590u,425);
}
B4274ed:L4274ed:{c.instructions+=1;NFSU2_TR(0x4274ed);
{goto L427554;}
}
B4274ef:L4274ef:{c.instructions+=3;NFSU2_TR(0x4274ef);
__builtin_memmove((R+0),gp(0x81cb6c),4);
}
B4274f4:{NFSU2_TR(0x4274f4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4274f5:{NFSU2_TR(0x4274f5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4274faull));
TAIL_STATIC(0x440e50u,440);
}
B4274fa:L4274fa:{c.instructions+=5;NFSU2_TR(0x4274fa);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4274fd:{NFSU2_TR(0x4274fd);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B427501:{NFSU2_TR(0x427501);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B427503:{NFSU2_TR(0x427503);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0x11ull));
s4(u32(r4(U+0)),r4(U+4));
}
B42750b:{NFSU2_TR(0x42750b);
if(r1(R+518)){{goto L427552;}}
}
B42750d:L42750d:{c.instructions+=7;NFSU2_TR(0x42750d);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42750f:{NFSU2_TR(0x42750f);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B427511:{NFSU2_TR(0x427511);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B427513:{NFSU2_TR(0x427513);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B427515:{NFSU2_TR(0x427515);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B427517:{NFSU2_TR(0x427517);
__builtin_memmove((R+4),(R+0),4);
}
B427519:{NFSU2_TR(0x427519);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42751eull));
TAIL_STATIC(0x4255d0u,425);
}
B42751e:L42751e:{c.instructions+=1;NFSU2_TR(0x42751e);
{goto L427554;}
}
B427520:L427520:{c.instructions+=3;NFSU2_TR(0x427520);
__builtin_memmove((R+4),gp(0x81cb6c),4);
}
B427526:{NFSU2_TR(0x427526);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B427527:{NFSU2_TR(0x427527);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42752cull));
TAIL_STATIC(0x440e50u,440);
}
B42752c:L42752c:{c.instructions+=5;NFSU2_TR(0x42752c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B42752f:{NFSU2_TR(0x42752f);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B427533:{NFSU2_TR(0x427533);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B427535:{NFSU2_TR(0x427535);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0x12ull));
s4(u32(r4(U+0)),r4(U+4));
}
B42753d:{NFSU2_TR(0x42753d);
if(r1(R+518)){{goto L427552;}}
}
B42753f:L42753f:{c.instructions+=7;NFSU2_TR(0x42753f);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B427541:{NFSU2_TR(0x427541);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B427543:{NFSU2_TR(0x427543);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B427545:{NFSU2_TR(0x427545);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B427547:{NFSU2_TR(0x427547);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B427549:{NFSU2_TR(0x427549);
__builtin_memmove((R+4),(R+0),4);
}
B42754b:{NFSU2_TR(0x42754b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x427550ull));
TAIL_STATIC(0x425630u,425);
}
B427550:L427550:{c.instructions+=1;NFSU2_TR(0x427550);
{goto L427554;}
}
B427552:L427552:{c.instructions+=1;NFSU2_TR(0x427552);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B427554:L427554:{c.instructions+=2;NFSU2_TR(0x427554);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B42755c:{NFSU2_TR(0x42755c);
__builtin_memmove((R+24),(R+0),4);
}
B42755e:L42755e:{c.instructions+=1;NFSU2_TR(0x42755e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+12)),r4(U+0));
}
B427560:L427560:{c.instructions+=2;NFSU2_TR(0x427560);
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
B427562:{NFSU2_TR(0x427562);
if(r1(R+518)){{goto L42756c;}}
}
B427564:L427564:{c.instructions+=4;NFSU2_TR(0x427564);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B427566:{NFSU2_TR(0x427566);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B427567:{NFSU2_TR(0x427567);
__builtin_memmove((R+4),(R+24),4);
}
B427569:{NFSU2_TR(0x427569);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42756cull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B42756c:L42756c:{c.instructions+=2;NFSU2_TR(0x42756c);
__builtin_memmove((R+4),(R+28),4);
}
B42756e:{NFSU2_TR(0x42756e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x427573ull));
TAIL_STATIC(0x578d90u,578);
}
B427573:L427573:{c.instructions+=7;NFSU2_TR(0x427573);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B427577:{NFSU2_TR(0x427577);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B427578:{NFSU2_TR(0x427578);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B427579:{NFSU2_TR(0x427579);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B42757a:{NFSU2_TR(0x42757a);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B427581:{NFSU2_TR(0x427581);
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
B427584:{NFSU2_TR(0x427584);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4275e0:L4275e0:{c.instructions+=11;NFSU2_TR(0x4275e0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4275e1:{NFSU2_TR(0x4275e1);
__builtin_memmove((R+20),(R+16),4);
}
B4275e3:{NFSU2_TR(0x4275e3);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B4275e6:{NFSU2_TR(0x4275e6);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4275e8:{NFSU2_TR(0x4275e8);
u8 U[4];
w4(U+0,u32(0x771accull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4275ed:{NFSU2_TR(0x4275ed);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4275f3:{NFSU2_TR(0x4275f3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4275f4:{NFSU2_TR(0x4275f4);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4275fb:{NFSU2_TR(0x4275fb);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4275fc:{NFSU2_TR(0x4275fc);
w4(R+0,u32(0x10e4ull));
}
B427601:{NFSU2_TR(0x427601);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x427606ull));
TAIL_STATIC(0x75c4d0u,75c);
}
B427606:L427606:{c.instructions+=11;NFSU2_TR(0x427606);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B427609:{NFSU2_TR(0x427609);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42760a:{NFSU2_TR(0x42760a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42760b:{NFSU2_TR(0x42760b);
__builtin_memmove((R+12),(R+4),4);
}
B42760d:{NFSU2_TR(0x42760d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B427610:{NFSU2_TR(0x427610);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B427611:{NFSU2_TR(0x427611);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+28),(U+0),4);
}
B427613:{NFSU2_TR(0x427613);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B427614:{NFSU2_TR(0x427614);
u8 U[4];
w4(U+0,u32(u32(u32(0xd4ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B42761b:{NFSU2_TR(0x42761b);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
w4(U+4,u32(0x47c34f80ull));
s4(u32(r4(U+0)),r4(U+4));
}
B427623:{NFSU2_TR(0x427623);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x427628ull));
TAIL_STATIC(0x403fc0u,403);
}
B427628:L427628:{c.instructions+=3;NFSU2_TR(0x427628);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B42762b:{NFSU2_TR(0x42762b);
__builtin_memmove((R+4),(R+24),4);
}
B42762d:{NFSU2_TR(0x42762d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x427632ull));
TAIL_STATIC(0x60be10u,60b);
}
B427632:L427632:{c.instructions+=3;NFSU2_TR(0x427632);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B427633:{NFSU2_TR(0x427633);
u8 U[4];
w4(U+0,u32(u32(u32(0x2a4ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B42763a:{NFSU2_TR(0x42763a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42763full));
TAIL_STATIC(0x403fc0u,403);
}
B42763f:L42763f:{c.instructions+=3;NFSU2_TR(0x42763f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B427642:{NFSU2_TR(0x427642);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B427644:{NFSU2_TR(0x427644);
if(r1(R+518)){{goto L427665;}}
}
B427646:L427646:{c.instructions+=3;NFSU2_TR(0x427646);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B427649:{NFSU2_TR(0x427649);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B42764c:{NFSU2_TR(0x42764c);
if(r1(R+518)){{goto L427658;}}
}
B42764e:L42764e:{c.instructions+=2;NFSU2_TR(0x42764e);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B427651:{NFSU2_TR(0x427651);
if(r1(R+518)){{goto L427658;}}
}
B427653:L427653:{c.instructions+=2;NFSU2_TR(0x427653);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B427656:{NFSU2_TR(0x427656);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L427665;}}
}
B427658:L427658:{c.instructions+=2;NFSU2_TR(0x427658);
__builtin_memmove((R+4),(R+24),4);
}
B42765a:{NFSU2_TR(0x42765a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42765full));
TAIL_STATIC(0x60bee0u,60b);
}
B42765f:L42765f:{c.instructions+=2;NFSU2_TR(0x42765f);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B427663:{NFSU2_TR(0x427663);
{goto L42766d;}
}
B427665:L427665:{c.instructions+=1;NFSU2_TR(0x427665);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B42766d:L42766d:{c.instructions+=3;NFSU2_TR(0x42766d);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B427670:{NFSU2_TR(0x427670);
u8 U[22];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0x3ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0x3ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0x3ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B427674:{NFSU2_TR(0x427674);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L427697;}}
}
B427676:L427676:{c.instructions+=2;NFSU2_TR(0x427676);
__builtin_memmove((R+4),(R+28),4);
}
B427678:{NFSU2_TR(0x427678);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42767dull));
TAIL_STATIC(0x5ec0c0u,5ec);
}
B42767d:L42767d:{c.instructions+=4;NFSU2_TR(0x42767d);
{u32 ea_=u32(u32(7887724u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B427683:{NFSU2_TR(0x427683);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B427685:{NFSU2_TR(0x427685);
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
B427688:{NFSU2_TR(0x427688);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L427697;}}
}
B42768a:L42768a:{c.instructions+=3;NFSU2_TR(0x42768a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42768b:{NFSU2_TR(0x42768b);
u8 U[4];
w4(U+0,u32(u32(u32(0xd4ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B427692:{NFSU2_TR(0x427692);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x427697ull));
TAIL_STATIC(0x4259c0u,425);
}
B427697:L427697:{c.instructions+=2;NFSU2_TR(0x427697);
__builtin_memmove((R+4),(R+24),4);
}
B427699:{NFSU2_TR(0x427699);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42769eull));
TAIL_STATIC(0x6148c0u,614);
}
B42769e:L42769e:{c.instructions+=2;NFSU2_TR(0x42769e);
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
B4276a0:{NFSU2_TR(0x4276a0);
if(r1(R+518)){{goto L4276c4;}}
}
B4276a2:L4276a2:{c.instructions+=2;NFSU2_TR(0x4276a2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4276a5:{NFSU2_TR(0x4276a5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4276aaull));
TAIL_STATIC(0x5ec0c0u,5ec);
}
B4276aa:L4276aa:{c.instructions+=4;NFSU2_TR(0x4276aa);
{u32 ea_=u32(u32(7887724u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B4276b0:{NFSU2_TR(0x4276b0);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4276b2:{NFSU2_TR(0x4276b2);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4276b5:{NFSU2_TR(0x4276b5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4276c4;}}
}
B4276b7:L4276b7:{c.instructions+=3;NFSU2_TR(0x4276b7);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4276b8:{NFSU2_TR(0x4276b8);
u8 U[4];
w4(U+0,u32(u32(u32(0x2a4ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B4276bf:{NFSU2_TR(0x4276bf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4276c4ull));
TAIL_STATIC(0x425a40u,425);
}
B4276c4:L4276c4:{c.instructions+=6;NFSU2_TR(0x4276c4);
__builtin_memmove((R+8),gp(0x783798),4);
}
B4276ca:{NFSU2_TR(0x4276ca);
__builtin_memmove((R+0),(R+8),4);
}
B4276cc:{NFSU2_TR(0x4276cc);
__builtin_memmove((R+4),(R+24),4);
}
B4276ce:{NFSU2_TR(0x4276ce);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4276d2:{NFSU2_TR(0x4276d2);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4276d6:{NFSU2_TR(0x4276d6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4276dbull));
TAIL_STATIC(0x614880u,614);
}
B4276db:L4276db:{c.instructions+=2;NFSU2_TR(0x4276db);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4276dd:{NFSU2_TR(0x4276dd);
if(r1(R+518)){{goto L4276e9;}}
}
B4276df:L4276df:{c.instructions+=2;NFSU2_TR(0x4276df);
__builtin_memmove((R+4),gp(0x7837a0),4);
}
B4276e5:{NFSU2_TR(0x4276e5);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4276e9:L4276e9:{c.instructions+=2;NFSU2_TR(0x4276e9);
u8 U[22];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0x4ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0x4ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B4276ed:{NFSU2_TR(0x4276ed);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4276f9;}}
}
B4276ef:L4276ef:{c.instructions+=2;NFSU2_TR(0x4276ef);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4276f7:{NFSU2_TR(0x4276f7);
{goto L42770e;}
}
B4276f9:L4276f9:{c.instructions+=2;NFSU2_TR(0x4276f9);
__builtin_memmove((R+4),(R+24),4);
}
B4276fb:{NFSU2_TR(0x4276fb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x427700ull));
TAIL_STATIC(0x6148c0u,614);
}
B427700:L427700:{c.instructions+=2;NFSU2_TR(0x427700);
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
B427702:{NFSU2_TR(0x427702);
if(r1(R+518)){{goto L42770e;}}
}
B427704:L427704:{c.instructions+=2;NFSU2_TR(0x427704);
__builtin_memmove((R+8),gp(0x7837a8),4);
}
B42770a:{NFSU2_TR(0x42770a);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B42770e:L42770e:{c.instructions+=21;NFSU2_TR(0x42770e);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x430ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B427714:{NFSU2_TR(0x427714);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B427718:{NFSU2_TR(0x427718);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B42771b:{NFSU2_TR(0x42771b);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B42771e:{NFSU2_TR(0x42771e);
__builtin_memmove((R+4),(R+28),4);
}
B427720:{NFSU2_TR(0x427720);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B427723:{NFSU2_TR(0x427723);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B427725:{NFSU2_TR(0x427725);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B427727:{NFSU2_TR(0x427727);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B427729:{NFSU2_TR(0x427729);
__asm__ volatile(".byte 0xd9,0xc2":::"memory");
}
B42772b:{NFSU2_TR(0x42772b);
__asm__ volatile(".byte 0xd8,0xcb":::"memory");
}
B42772d:{NFSU2_TR(0x42772d);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B42772f:{NFSU2_TR(0x42772f);
__asm__ volatile(".byte 0xd9,0xc3":::"memory");
}
B427731:{NFSU2_TR(0x427731);
__asm__ volatile(".byte 0xd8,0xcc":::"memory");
}
B427733:{NFSU2_TR(0x427733);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B427735:{NFSU2_TR(0x427735);
__asm__ volatile(".byte 0xdd,0xdb":::"memory");
}
B427737:{NFSU2_TR(0x427737);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B427739:{NFSU2_TR(0x427739);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B42773b:{NFSU2_TR(0x42773b);
__asm__ volatile(".byte 0xd9,0xfa":::"memory");
}
B42773d:{NFSU2_TR(0x42773d);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B427741:{NFSU2_TR(0x427741);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x427746ull));
TAIL_STATIC(0x5ec3a0u,5ec);
}
B427746:L427746:{c.instructions+=3;NFSU2_TR(0x427746);
{u32 ea_=u32(r4(R+16)+u32(172u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B42774d:{NFSU2_TR(0x42774d);
__builtin_memmove((R+4),(R+24),4);
}
B42774f:{NFSU2_TR(0x42774f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x427754ull));
TAIL_STATIC(0x60be30u,60b);
}
B427754:L427754:{c.instructions+=6;NFSU2_TR(0x427754);
{u32 ea_=u32(r4(R+16)+u32(176u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B42775b:{NFSU2_TR(0x42775b);
{u32 ea_=u32(r4(R+28)+u32(1068u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B427761:{NFSU2_TR(0x427761);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B427767:{NFSU2_TR(0x427767);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B427769:{NFSU2_TR(0x427769);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B42776c:{NFSU2_TR(0x42776c);
if(r1(R+514)){{goto L4277c7;}}
}
B42776e:L42776e:{c.instructions+=4;NFSU2_TR(0x42776e);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B427771:{NFSU2_TR(0x427771);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x6f8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B427777:{NFSU2_TR(0x427777);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B427779:{NFSU2_TR(0x427779);
if(r1(R+518)){{goto L427783;}}
}
B42777b:L42777b:{c.instructions+=2;NFSU2_TR(0x42777b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x204ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B427781:{NFSU2_TR(0x427781);
{goto L427788;}
}
B427783:L427783:{c.instructions+=1;NFSU2_TR(0x427783);
w4(R+0,u32(0x16ull));
}
B427788:L427788:{c.instructions+=2;NFSU2_TR(0x427788);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
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
B42778b:{NFSU2_TR(0x42778b);
if(r1(R+518)){{goto L4277a2;}}
}
B42778d:L42778d:{c.instructions+=2;NFSU2_TR(0x42778d);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0x16ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x16ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x16ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B427790:{NFSU2_TR(0x427790);
if(r1(R+518)){{goto L4277a2;}}
}
B427792:L427792:{c.instructions+=2;NFSU2_TR(0x427792);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0xdull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0xdull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0xdull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B427795:{NFSU2_TR(0x427795);
if(r1(R+518)){{goto L4277a2;}}
}
B427797:L427797:{c.instructions+=3;NFSU2_TR(0x427797);
u8 U[5];
w4(U+0,u32(u32(u32(0xd0ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B42779e:{NFSU2_TR(0x42779e);
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
B4277a0:{NFSU2_TR(0x4277a0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4277c7;}}
}
B4277a2:L4277a2:{c.instructions+=4;NFSU2_TR(0x4277a2);
u8 U[4];
w4(U+0,u32(u32(u32(0xd0ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B4277a9:{NFSU2_TR(0x4277a9);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4277aa:{NFSU2_TR(0x4277aa);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4277ab:{NFSU2_TR(0x4277ab);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4277b0ull));
TAIL_STATIC(0x425910u,425);
}
B4277b0:L4277b0:{c.instructions+=6;NFSU2_TR(0x4277b0);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4277b4:{NFSU2_TR(0x4277b4);
__builtin_memmove((R+8),gp(0x78379c),4);
}
B4277ba:{NFSU2_TR(0x4277ba);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B4277bc:{NFSU2_TR(0x4277bc);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4277c0:{NFSU2_TR(0x4277c0);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4277c3:{NFSU2_TR(0x4277c3);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4277c7:L4277c7:{c.instructions+=14;NFSU2_TR(0x4277c7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4277ca:{NFSU2_TR(0x4277ca);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4277cd:{NFSU2_TR(0x4277cd);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4277d0:{NFSU2_TR(0x4277d0);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4277d3:{NFSU2_TR(0x4277d3);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4277d6:{NFSU2_TR(0x4277d6);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4277d9:{NFSU2_TR(0x4277d9);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B4277db:{NFSU2_TR(0x4277db);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4277dd:{NFSU2_TR(0x4277dd);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4277df:{NFSU2_TR(0x4277df);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B4277e1:{NFSU2_TR(0x4277e1);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B4277e7:{NFSU2_TR(0x4277e7);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4277e9:{NFSU2_TR(0x4277e9);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B4277ec:{NFSU2_TR(0x4277ec);
if(r1(R+514)){{goto L427862;}}
}
B4277ee:L4277ee:{c.instructions+=2;NFSU2_TR(0x4277ee);
__builtin_memmove((R+4),(R+24),4);
}
B4277f0:{NFSU2_TR(0x4277f0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4277f5ull));
TAIL_STATIC(0x6148a0u,614);
}
B4277f5:L4277f5:{c.instructions+=2;NFSU2_TR(0x4277f5);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4277f7:{NFSU2_TR(0x4277f7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L427804;}}
}
B4277f9:L4277f9:{c.instructions+=2;NFSU2_TR(0x4277f9);
__builtin_memmove((R+4),(R+24),4);
}
B4277fb:{NFSU2_TR(0x4277fb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x427800ull));
TAIL_STATIC(0x6148c0u,614);
}
B427800:L427800:{c.instructions+=2;NFSU2_TR(0x427800);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B427802:{NFSU2_TR(0x427802);
if(r1(R+518)){{goto L427862;}}
}
B427804:L427804:{c.instructions+=3;NFSU2_TR(0x427804);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B427808:{NFSU2_TR(0x427808);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B42780a:{NFSU2_TR(0x42780a);
if(r1(R+518)){{goto L427862;}}
}
B42780c:L42780c:{c.instructions+=3;NFSU2_TR(0x42780c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x6f8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B427812:{NFSU2_TR(0x427812);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B427814:{NFSU2_TR(0x427814);
if(r1(R+518)){{goto L42781e;}}
}
B427816:L427816:{c.instructions+=2;NFSU2_TR(0x427816);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x204ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B42781c:{NFSU2_TR(0x42781c);
{goto L427823;}
}
B42781e:L42781e:{c.instructions+=1;NFSU2_TR(0x42781e);
w4(R+0,u32(0x16ull));
}
B427823:L427823:{c.instructions+=2;NFSU2_TR(0x427823);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x9ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B427826:{NFSU2_TR(0x427826);
if(r1(R+518)){{goto L42783d;}}
}
B427828:L427828:{c.instructions+=2;NFSU2_TR(0x427828);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x16ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B42782b:{NFSU2_TR(0x42782b);
if(r1(R+518)){{goto L42783d;}}
}
B42782d:L42782d:{c.instructions+=2;NFSU2_TR(0x42782d);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xdull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B427830:{NFSU2_TR(0x427830);
if(r1(R+518)){{goto L42783d;}}
}
B427832:L427832:{c.instructions+=3;NFSU2_TR(0x427832);
u8 U[5];
w4(U+0,u32(u32(u32(0x2a0ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B427839:{NFSU2_TR(0x427839);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B42783b:{NFSU2_TR(0x42783b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L427862;}}
}
B42783d:L42783d:{c.instructions+=4;NFSU2_TR(0x42783d);
u8 U[4];
w4(U+0,u32(u32(u32(0x2a0ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B427844:{NFSU2_TR(0x427844);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B427845:{NFSU2_TR(0x427845);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B427846:{NFSU2_TR(0x427846);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42784bull));
TAIL_STATIC(0x425980u,425);
}
B42784b:L42784b:{c.instructions+=6;NFSU2_TR(0x42784b);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B42784f:{NFSU2_TR(0x42784f);
__builtin_memmove((R+4),gp(0x78379c),4);
}
B427855:{NFSU2_TR(0x427855);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B427857:{NFSU2_TR(0x427857);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B42785b:{NFSU2_TR(0x42785b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B42785e:{NFSU2_TR(0x42785e);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B427862:L427862:{c.instructions+=5;NFSU2_TR(0x427862);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B427866:{NFSU2_TR(0x427866);
{u32 ea_=u32(u32(7881564u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B42786c:{NFSU2_TR(0x42786c);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B42786e:{NFSU2_TR(0x42786e);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B427871:{NFSU2_TR(0x427871);
if(r1(R+518)){{goto L42787b;}}
}
B427873:L427873:{c.instructions+=1;NFSU2_TR(0x427873);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
w4(U+4,u32(0x3a83126full));
s4(u32(r4(U+0)),r4(U+4));
}
B42787b:L42787b:{c.instructions+=5;NFSU2_TR(0x42787b);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B42787f:{NFSU2_TR(0x42787f);
{u32 ea_=u32(u32(7881564u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B427885:{NFSU2_TR(0x427885);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B427887:{NFSU2_TR(0x427887);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B42788a:{NFSU2_TR(0x42788a);
if(r1(R+518)){{goto L427894;}}
}
B42788c:L42788c:{c.instructions+=1;NFSU2_TR(0x42788c);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
w4(U+4,u32(0x3a83126full));
s4(u32(r4(U+0)),r4(U+4));
}
B427894:L427894:{c.instructions+=5;NFSU2_TR(0x427894);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B427898:{NFSU2_TR(0x427898);
{u32 ea_=u32(u32(7881920u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B42789e:{NFSU2_TR(0x42789e);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4278a0:{NFSU2_TR(0x4278a0);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B4278a3:{NFSU2_TR(0x4278a3);
if(r1(R+514)){{goto L4278af;}}
}
B4278a5:L4278a5:{c.instructions+=2;NFSU2_TR(0x4278a5);
__builtin_memmove((R+8),gp(0x7837a4),4);
}
B4278ab:{NFSU2_TR(0x4278ab);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4278af:L4278af:{c.instructions+=5;NFSU2_TR(0x4278af);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4278b3:{NFSU2_TR(0x4278b3);
{u32 ea_=u32(u32(7881920u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B4278b9:{NFSU2_TR(0x4278b9);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4278bb:{NFSU2_TR(0x4278bb);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B4278be:{NFSU2_TR(0x4278be);
if(r1(R+514)){{goto L4278c9;}}
}
B4278c0:L4278c0:{c.instructions+=2;NFSU2_TR(0x4278c0);
__builtin_memmove((R+0),gp(0x7837a4),4);
}
B4278c5:{NFSU2_TR(0x4278c5);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4278c9:L4278c9:{c.instructions+=7;NFSU2_TR(0x4278c9);
u8 U[4];
w4(U+0,u32(0x405330ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4278ce:{NFSU2_TR(0x4278ce);
u8 U[4];
w4(U+0,u32(0x405320ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4278d3:{NFSU2_TR(0x4278d3);
u8 U[4];
w4(U+0,u32(0x14ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4278d5:{NFSU2_TR(0x4278d5);
u8 U[4];
w4(U+0,u32(0x50ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4278d7:{NFSU2_TR(0x4278d7);
u8 U[4];
w4(U+0,u32(u32(u32(0xac0ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B4278de:{NFSU2_TR(0x4278de);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4278df:{NFSU2_TR(0x4278df);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4278e4ull));
TAIL_STATIC(0x75c461u,75c);
}
B4278e4:L4278e4:{c.instructions+=8;NFSU2_TR(0x4278e4);
u8 U[4];
w4(U+0,u32(0x405330ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4278e9:{NFSU2_TR(0x4278e9);
u8 U[4];
w4(U+0,u32(0x405320ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4278ee:{NFSU2_TR(0x4278ee);
u8 U[4];
w4(U+0,u32(0x14ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4278f0:{NFSU2_TR(0x4278f0);
u8 U[4];
w4(U+0,u32(0x50ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4278f2:{NFSU2_TR(0x4278f2);
u8 U[4];
w4(U+0,u32(u32(u32(0x480ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B4278f9:{NFSU2_TR(0x4278f9);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4278fa:{NFSU2_TR(0x4278fa);
u8 U[8];
w4(U+0,u32(u32(u32(0x1110ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B427905:{NFSU2_TR(0x427905);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42790aull));
TAIL_STATIC(0x75c461u,75c);
}
B42790a:L42790a:{c.instructions+=7;NFSU2_TR(0x42790a);
u8 U[4];
w4(U+0,u32(u32(u32(0x80ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B427911:{NFSU2_TR(0x427911);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B427912:{NFSU2_TR(0x427912);
u8 U[4];
w4(U+0,u32(u32(u32(0x94ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B427919:{NFSU2_TR(0x427919);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42791a:{NFSU2_TR(0x42791a);
__builtin_memmove((R+4),(R+28),4);
}
B42791c:{NFSU2_TR(0x42791c);
u8 U[5];
w4(U+0,u32(u32(u32(0x1104ull))+u32(r4(R+16))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B427924:{NFSU2_TR(0x427924);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x427929ull));
TAIL_STATIC(0x5ec250u,5ec);
}
B427929:L427929:{c.instructions+=15;NFSU2_TR(0x427929);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B42792d:{NFSU2_TR(0x42792d);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B42792f:{NFSU2_TR(0x42792f);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x40cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+0),(U+4),2);
}
B427936:{NFSU2_TR(0x427936);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B427937:{NFSU2_TR(0x427937);
u8 U[4];
w4(U+0,u32(u32(u32(0x94ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B42793e:{NFSU2_TR(0x42793e);
u8 U[4];
w4(U+0,u32(u32(u32(0xab4ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B427945:{NFSU2_TR(0x427945);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B427946:{NFSU2_TR(0x427946);
u8 U[4];
w4(U+0,u32(u32(u32(0x88ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B42794d:{NFSU2_TR(0x42794d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42794e:{NFSU2_TR(0x42794e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42794f:{NFSU2_TR(0x42794f);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B427950:{NFSU2_TR(0x427950);
u8 U[4];
w4(U+0,u32(u32(u32(0xe4ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B427957:{NFSU2_TR(0x427957);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B427958:{NFSU2_TR(0x427958);
__builtin_memmove((R+4),(R+12),4);
}
B42795a:{NFSU2_TR(0x42795a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42795full));
TAIL_STATIC(0x4040a0u,404);
}
B42795f:L42795f:{c.instructions+=6;NFSU2_TR(0x42795f);
u8 U[4];
w4(U+0,u32(u32(u32(0x80ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B427966:{NFSU2_TR(0x427966);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B427967:{NFSU2_TR(0x427967);
u8 U[4];
w4(U+0,u32(u32(u32(0x94ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B42796e:{NFSU2_TR(0x42796e);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42796f:{NFSU2_TR(0x42796f);
__builtin_memmove((R+4),(R+24),4);
}
B427971:{NFSU2_TR(0x427971);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x427976ull));
TAIL_STATIC(0x614840u,614);
}
B427976:L427976:{c.instructions+=8;NFSU2_TR(0x427976);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B427979:{NFSU2_TR(0x427979);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B42797d:{NFSU2_TR(0x42797d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B427980:{NFSU2_TR(0x427980);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B427982:{NFSU2_TR(0x427982);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B427983:{NFSU2_TR(0x427983);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B427984:{NFSU2_TR(0x427984);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B427985:{NFSU2_TR(0x427985);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42798aull));
TAIL_STATIC(0x43e6d0u,43e);
}
B42798a:L42798a:{c.instructions+=12;NFSU2_TR(0x42798a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B42798d:{NFSU2_TR(0x42798d);
u8 U[4];
w4(U+0,u32(u32(u32(0x84ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B427994:{NFSU2_TR(0x427994);
u8 U[4];
w4(U+0,u32(u32(u32(0x94ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B42799b:{NFSU2_TR(0x42799b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42799c:{NFSU2_TR(0x42799c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42799d:{NFSU2_TR(0x42799d);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42799e:{NFSU2_TR(0x42799e);
u8 U[4];
w4(U+0,u32(u32(u32(0x480ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B4279a5:{NFSU2_TR(0x4279a5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4279a6:{NFSU2_TR(0x4279a6);
u8 U[4];
w4(U+0,u32(u32(u32(0x2b4ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B4279ad:{NFSU2_TR(0x4279ad);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4279ae:{NFSU2_TR(0x4279ae);
__builtin_memmove((R+4),(R+12),4);
}
B4279b0:{NFSU2_TR(0x4279b0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4279b5ull));
TAIL_STATIC(0x4040a0u,404);
}
B4279b5:L4279b5:{c.instructions+=11;NFSU2_TR(0x4279b5);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x42cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4279bb:{NFSU2_TR(0x4279bb);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x60ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4279be:{NFSU2_TR(0x4279be);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x70ull))));
}
B4279c1:{NFSU2_TR(0x4279c1);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4279c2:{NFSU2_TR(0x4279c2);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4279c3:{NFSU2_TR(0x4279c3);
__builtin_memmove((R+0),(R+8),4);
}
B4279c5:{NFSU2_TR(0x4279c5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4279c6:{NFSU2_TR(0x4279c6);
u8 U[4];
w4(U+0,u32(u32(u32(0xdcull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B4279cd:{NFSU2_TR(0x4279cd);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4279d5:{NFSU2_TR(0x4279d5);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4279d9:{NFSU2_TR(0x4279d9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4279deull));
TAIL_STATIC(0x404ef0u,404);
}
B4279de:L4279de:{c.instructions+=18;NFSU2_TR(0x4279de);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4279e1:{NFSU2_TR(0x4279e1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4279e4:{NFSU2_TR(0x4279e4);
__builtin_memmove((R+28),(R+0),4);
}
B4279e6:{NFSU2_TR(0x4279e6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4279e9:{NFSU2_TR(0x4279e9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4279ea:{NFSU2_TR(0x4279ea);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4279ed:{NFSU2_TR(0x4279ed);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4279ee:{NFSU2_TR(0x4279ee);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4279f1:{NFSU2_TR(0x4279f1);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4279f2:{NFSU2_TR(0x4279f2);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4279f5:{NFSU2_TR(0x4279f5);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4279f8:{NFSU2_TR(0x4279f8);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B4279fa:{NFSU2_TR(0x4279fa);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4279fc:{NFSU2_TR(0x4279fc);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4279fe:{NFSU2_TR(0x4279fe);
u8 U[4];
w4(U+0,u32(u32(u32(0x2acull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B427a05:{NFSU2_TR(0x427a05);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B427a07:{NFSU2_TR(0x427a07);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B427a0a:{NFSU2_TR(0x427a0a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x427a0full));
TAIL_STATIC(0x404ef0u,404);
}
B427a0f:L427a0f:{c.instructions+=27;NFSU2_TR(0x427a0f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+4),(U+0),4);
}
B427a11:{NFSU2_TR(0x427a11);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B427a14:{NFSU2_TR(0x427a14);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B427a17:{NFSU2_TR(0x427a17);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((R+12),(U+4),4);
}
B427a1a:{NFSU2_TR(0x427a1a);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+12,shl<u32>(r4(R+12),u64(r4(U+0))));
}
B427a1d:{NFSU2_TR(0x427a1d);
{u32 ea_=u32(r4(R+12)+r4(R+16)+u32(2740u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B427a24:{NFSU2_TR(0x427a24);
u8 U[12];
w4(U+0,u32(u32(u32(0xab0ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+12),(U+8),4);
}
B427a2b:{NFSU2_TR(0x427a2b);
{u32 ea_=u32(r4(R+12));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B427a2d:{NFSU2_TR(0x427a2d);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B427a31:{NFSU2_TR(0x427a31);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B427a33:{NFSU2_TR(0x427a33);
{u32 ea_=u32(r4(R+16)+u32(104u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B427a37:{NFSU2_TR(0x427a37);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B427a3b:{NFSU2_TR(0x427a3b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B427a3e:{NFSU2_TR(0x427a3e);
{u32 ea_=u32(r4(R+16)+u32(108u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B427a42:{NFSU2_TR(0x427a42);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+24),(U+4),4);
}
B427a45:{NFSU2_TR(0x427a45);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+24,shl<u32>(r4(R+24),u64(r4(U+0))));
}
B427a48:{NFSU2_TR(0x427a48);
{u32 ea_=u32(r4(R+24)+r4(R+16)+u32(1140u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B427a4f:{NFSU2_TR(0x427a4f);
u8 U[12];
w4(U+0,u32(u32(u32(0x470ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+24),(U+8),4);
}
B427a56:{NFSU2_TR(0x427a56);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B427a58:{NFSU2_TR(0x427a58);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B427a5c:{NFSU2_TR(0x427a5c);
u8 U[5];
w4(U+0,u32(u32(u32(0xd0ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(s32(s8(r1(U+4)))));
}
B427a64:{NFSU2_TR(0x427a64);
{u32 ea_=u32(r4(R+16)+u32(120u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B427a68:{NFSU2_TR(0x427a68);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+0)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B427a6a:{NFSU2_TR(0x427a6a);
{u32 ea_=u32(r4(R+16)+u32(124u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B427a6e:{NFSU2_TR(0x427a6e);
u8 U[8];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B427a72:{NFSU2_TR(0x427a72);
u8 U[8];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B427a76:{NFSU2_TR(0x427a76);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L427e3d;}}
}
B427a7c:L427a7c:{c.instructions+=3;NFSU2_TR(0x427a7c);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B427a80:{NFSU2_TR(0x427a80);
u8 U[8];
w4(U+0,u32(u32(u32(0x5cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B427a84:{NFSU2_TR(0x427a84);
{goto L427a90;}
}
B427a86:L427a86:{c.instructions+=2;NFSU2_TR(0x427a86);
u8 U[8];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B427a8a:{NFSU2_TR(0x427a8a);
__builtin_memmove((R+12),(R+12),4);
}
B427a90:L427a90:{c.instructions+=3;NFSU2_TR(0x427a90);
u8 U[5];
w4(U+0,u32(u32(u32(0x2a0ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+8,u32(s32(s8(r1(U+4)))));
}
B427a98:{NFSU2_TR(0x427a98);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B427a9a:{NFSU2_TR(0x427a9a);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L427e3d;}}
}
B427aa0:L427aa0:{c.instructions+=5;NFSU2_TR(0x427aa0);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B427aa4:{NFSU2_TR(0x427aa4);
{u32 ea_=u32(r4(R+20)+u32(16u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B427aa7:{NFSU2_TR(0x427aa7);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B427aa9:{NFSU2_TR(0x427aa9);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B427aac:{NFSU2_TR(0x427aac);
if(r1(R+514)){{goto L427e3d;}}
}
B427ab2:L427ab2:{c.instructions+=46;NFSU2_TR(0x427ab2);
{u32 ea_=u32(r4(R+16)+u32(104u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B427ab6:{NFSU2_TR(0x427ab6);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B427aba:{NFSU2_TR(0x427aba);
{u32 ea_=u32(r4(R+16)+u32(196u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B427ac1:{NFSU2_TR(0x427ac1);
{u32 ea_=u32(r4(R+16)+u32(108u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B427ac5:{NFSU2_TR(0x427ac5);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B427ac9:{NFSU2_TR(0x427ac9);
{u32 ea_=u32(r4(R+16)+u32(84u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B427acd:{NFSU2_TR(0x427acd);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B427acf:{NFSU2_TR(0x427acf);
{u32 ea_=u32(r4(R+16)+u32(200u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B427ad6:{NFSU2_TR(0x427ad6);
{u32 ea_=u32(r4(R+16)+u32(204u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B427add:{NFSU2_TR(0x427add);
{u32 ea_=u32(r4(R+16)+u32(120u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B427ae1:{NFSU2_TR(0x427ae1);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B427ae5:{NFSU2_TR(0x427ae5);
{u32 ea_=u32(r4(R+16)+u32(160u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B427aec:{NFSU2_TR(0x427aec);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B427af0:{NFSU2_TR(0x427af0);
{u32 ea_=u32(r4(R+16)+u32(124u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B427af4:{NFSU2_TR(0x427af4);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B427af8:{NFSU2_TR(0x427af8);
{u32 ea_=u32(r4(R+16)+u32(80u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B427afc:{NFSU2_TR(0x427afc);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B427b00:{NFSU2_TR(0x427b00);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B427b02:{NFSU2_TR(0x427b02);
{u32 ea_=u32(r4(R+16)+u32(164u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B427b09:{NFSU2_TR(0x427b09);
{u32 ea_=u32(r4(R+16)+u32(168u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B427b10:{NFSU2_TR(0x427b10);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B427b12:{NFSU2_TR(0x427b12);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B427b14:{NFSU2_TR(0x427b14);
__asm__ volatile(".byte 0xd9,0xc2":::"memory");
}
B427b16:{NFSU2_TR(0x427b16);
__asm__ volatile(".byte 0xd8,0xcb":::"memory");
}
B427b18:{NFSU2_TR(0x427b18);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B427b1a:{NFSU2_TR(0x427b1a);
__asm__ volatile(".byte 0xd9,0xfa":::"memory");
}
B427b1c:{NFSU2_TR(0x427b1c);
__asm__ volatile(".byte 0xdd,0xda":::"memory");
}
B427b1e:{NFSU2_TR(0x427b1e);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B427b20:{NFSU2_TR(0x427b20);
{u32 ea_=u32(r4(R+16)+u32(76u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B427b24:{NFSU2_TR(0x427b24);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B427b28:{NFSU2_TR(0x427b28);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B427b2c:{NFSU2_TR(0x427b2c);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B427b30:{NFSU2_TR(0x427b30);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B427b34:{NFSU2_TR(0x427b34);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B427b36:{NFSU2_TR(0x427b36);
__asm__ volatile(".byte 0xd9,0xfa":::"memory");
}
B427b38:{NFSU2_TR(0x427b38);
{u32 ea_=u32(r4(R+16)+u32(72u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B427b3c:{NFSU2_TR(0x427b3c);
{u32 ea_=u32(r4(R+16)+u32(76u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B427b40:{NFSU2_TR(0x427b40);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B427b44:{NFSU2_TR(0x427b44);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B427b48:{NFSU2_TR(0x427b48);
{u32 ea_=u32(r4(R+16)+u32(72u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B427b4c:{NFSU2_TR(0x427b4c);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B427b50:{NFSU2_TR(0x427b50);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B427b54:{NFSU2_TR(0x427b54);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B427b56:{NFSU2_TR(0x427b56);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B427b58:{NFSU2_TR(0x427b58);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B427b5b:{NFSU2_TR(0x427b5b);
if(r1(R+514)){{goto L427b69;}}
}
B427b5d:L427b5d:{c.instructions+=4;NFSU2_TR(0x427b5d);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B427b61:{NFSU2_TR(0x427b61);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B427b63:{NFSU2_TR(0x427b63);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B427b67:{NFSU2_TR(0x427b67);
{goto L427b6d;}
}
B427b69:L427b69:{c.instructions+=1;NFSU2_TR(0x427b69);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B427b6d:L427b6d:{c.instructions+=23;NFSU2_TR(0x427b6d);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B427b71:{NFSU2_TR(0x427b71);
u8 U[8];
w4(U+0,u32(u32(u32(0xccull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B427b78:{NFSU2_TR(0x427b78);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B427b7c:{NFSU2_TR(0x427b7c);
u8 U[8];
w4(U+0,u32(u32(u32(0xc8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B427b83:{NFSU2_TR(0x427b83);
u8 U[8];
w4(U+0,u32(u32(u32(0xa4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B427b8a:{NFSU2_TR(0x427b8a);
u8 U[8];
w4(U+0,u32(u32(u32(0x60ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B427b8e:{NFSU2_TR(0x427b8e);
u8 U[8];
w4(U+0,u32(u32(u32(0xa8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B427b95:{NFSU2_TR(0x427b95);
{u32 ea_=u32(r4(R+16)+u32(128u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B427b9c:{NFSU2_TR(0x427b9c);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B427ba0:{NFSU2_TR(0x427ba0);
u8 U[8];
w4(U+0,u32(u32(u32(0x64ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B427ba4:{NFSU2_TR(0x427ba4);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B427ba8:{NFSU2_TR(0x427ba8);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B427bac:{NFSU2_TR(0x427bac);
u8 U[8];
w4(U+0,u32(u32(u32(0x70ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B427bb0:{NFSU2_TR(0x427bb0);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B427bb1:{NFSU2_TR(0x427bb1);
u8 U[4];
w4(U+0,u32(u32(u32(0x64ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B427bb5:{NFSU2_TR(0x427bb5);
{u32 ea_=u32(r4(R+16)+u32(136u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B427bbc:{NFSU2_TR(0x427bbc);
u8 U[8];
w4(U+0,u32(u32(u32(0x78ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B427bc0:{NFSU2_TR(0x427bc0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B427bc1:{NFSU2_TR(0x427bc1);
u8 U[4];
w4(U+0,u32(u32(u32(0x68ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B427bc5:{NFSU2_TR(0x427bc5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B427bc6:{NFSU2_TR(0x427bc6);
u8 U[8];
w4(U+0,u32(u32(u32(0x94ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B427bd1:{NFSU2_TR(0x427bd1);
u8 U[8];
w4(U+0,u32(u32(u32(0x98ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B427bdc:{NFSU2_TR(0x427bdc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x427be1ull));
TAIL_STATIC(0x43ceb0u,43c);
}
B427be1:L427be1:{c.instructions+=7;NFSU2_TR(0x427be1);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B427be5:{NFSU2_TR(0x427be5);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B427be6:{NFSU2_TR(0x427be6);
u8 U[4];
w4(U+0,u32(u32(u32(0x80ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B427bed:{NFSU2_TR(0x427bed);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B427bee:{NFSU2_TR(0x427bee);
u8 U[4];
w4(U+0,u32(u32(u32(0x84ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B427bf5:{NFSU2_TR(0x427bf5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B427bf6:{NFSU2_TR(0x427bf6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x427bfbull));
TAIL_STATIC(0x43ceb0u,43c);
}
B427bfb:L427bfb:{c.instructions+=15;NFSU2_TR(0x427bfb);
{u32 ea_=u32(r4(R+16)+u32(136u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B427c02:{NFSU2_TR(0x427c02);
{u32 ea_=u32(r4(R+16)+u32(120u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B427c06:{NFSU2_TR(0x427c06);
u8 U[4];
w4(U+0,u32(u32(u32(0xa8ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B427c0d:{NFSU2_TR(0x427c0d);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B427c0e:{NFSU2_TR(0x427c0e);
u8 U[4];
w4(U+0,u32(u32(u32(0x9cull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B427c15:{NFSU2_TR(0x427c15);
{u32 ea_=u32(r4(R+16)+u32(172u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B427c1c:{NFSU2_TR(0x427c1c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B427c1d:{NFSU2_TR(0x427c1d);
{u32 ea_=u32(r4(R+16)+u32(148u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B427c24:{NFSU2_TR(0x427c24);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B427c25:{NFSU2_TR(0x427c25);
{u32 ea_=u32(r4(R+16)+u32(136u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B427c2c:{NFSU2_TR(0x427c2c);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B427c2d:{NFSU2_TR(0x427c2d);
u8 U[8];
w4(U+0,u32(u32(u32(0xc0ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B427c38:{NFSU2_TR(0x427c38);
u8 U[8];
w4(U+0,u32(u32(u32(0xc4ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B427c43:{NFSU2_TR(0x427c43);
{u32 ea_=u32(r4(R+16)+u32(188u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B427c4a:{NFSU2_TR(0x427c4a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x427c4full));
TAIL_STATIC(0x4044c0u,404);
}
B427c4f:L427c4f:{c.instructions+=6;NFSU2_TR(0x427c4f);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B427c53:{NFSU2_TR(0x427c53);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x28ull))));
}
B427c56:{NFSU2_TR(0x427c56);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B427c5a:{NFSU2_TR(0x427c5a);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B427c5c:{NFSU2_TR(0x427c5c);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B427c5f:{NFSU2_TR(0x427c5f);
if(r1(R+514)){{goto L427c76;}}
}
B427c61:L427c61:{c.instructions+=5;NFSU2_TR(0x427c61);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B427c65:{NFSU2_TR(0x427c65);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B427c6b:{NFSU2_TR(0x427c6b);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B427c6d:{NFSU2_TR(0x427c6d);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B427c70:{NFSU2_TR(0x427c70);
if(r1(R+518)){{goto L427e31;}}
}
B427c76:L427c76:{c.instructions+=12;NFSU2_TR(0x427c76);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B427c7a:{NFSU2_TR(0x427c7a);
u8 U[8];
w4(U+0,u32(u32(u32(0xc4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B427c81:{NFSU2_TR(0x427c81);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B427c85:{NFSU2_TR(0x427c85);
u8 U[8];
w4(U+0,u32(u32(u32(0x54ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B427c89:{NFSU2_TR(0x427c89);
{u32 ea_=u32(r4(R+16)+u32(76u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B427c8d:{NFSU2_TR(0x427c8d);
u8 U[8];
w4(U+0,u32(u32(u32(0xb4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B427c94:{NFSU2_TR(0x427c94);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B427c96:{NFSU2_TR(0x427c96);
u8 U[8];
w4(U+0,u32(u32(u32(0xb8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B427c9d:{NFSU2_TR(0x427c9d);
{u32 ea_=u32(u32(7882144u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B427ca3:{NFSU2_TR(0x427ca3);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B427ca5:{NFSU2_TR(0x427ca5);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B427ca8:{NFSU2_TR(0x427ca8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L427cca;}}
}
B427caa:L427caa:{c.instructions+=7;NFSU2_TR(0x427caa);
{u32 ea_=u32(r4(R+16)+u32(76u));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B427cae:{NFSU2_TR(0x427cae);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B427cb2:{NFSU2_TR(0x427cb2);
{u32 ea_=u32(r4(R+16)+u32(180u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B427cb9:{NFSU2_TR(0x427cb9);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B427cbd:{NFSU2_TR(0x427cbd);
{u32 ea_=u32(r4(R+16)+u32(184u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B427cc4:{NFSU2_TR(0x427cc4);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B427cc8:{NFSU2_TR(0x427cc8);
{goto L427cd8;}
}
B427cca:L427cca:{c.instructions+=3;NFSU2_TR(0x427cca);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B427ccc:{NFSU2_TR(0x427ccc);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B427cd2:{NFSU2_TR(0x427cd2);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B427cd8:L427cd8:{c.instructions+=15;NFSU2_TR(0x427cd8);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B427cda:{NFSU2_TR(0x427cda);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B427cde:{NFSU2_TR(0x427cde);
{u32 ea_=u32(r4(R+16)+u32(84u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B427ce2:{NFSU2_TR(0x427ce2);
u8 U[8];
w4(U+0,u32(u32(u32(0x54ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B427ce6:{NFSU2_TR(0x427ce6);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B427cea:{NFSU2_TR(0x427cea);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B427cee:{NFSU2_TR(0x427cee);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B427cf2:{NFSU2_TR(0x427cf2);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B427cf6:{NFSU2_TR(0x427cf6);
{u32 ea_=u32(r4(R+16)+u32(172u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B427cfd:{NFSU2_TR(0x427cfd);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B427d01:{NFSU2_TR(0x427d01);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B427d05:{NFSU2_TR(0x427d05);
{u32 ea_=u32(u32(7881564u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B427d0b:{NFSU2_TR(0x427d0b);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B427d0d:{NFSU2_TR(0x427d0d);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B427d10:{NFSU2_TR(0x427d10);
if(r1(R+518)){{goto L427d1a;}}
}
B427d12:L427d12:{c.instructions+=1;NFSU2_TR(0x427d12);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
w4(U+4,u32(0x3a83126full));
s4(u32(r4(U+0)),r4(U+4));
}
B427d1a:L427d1a:{c.instructions+=12;NFSU2_TR(0x427d1a);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B427d1e:{NFSU2_TR(0x427d1e);
u8 U[8];
w4(U+0,u32(u32(u32(0xa0ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B427d25:{NFSU2_TR(0x427d25);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B427d29:{NFSU2_TR(0x427d29);
u8 U[8];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B427d2d:{NFSU2_TR(0x427d2d);
{u32 ea_=u32(r4(R+16)+u32(72u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B427d31:{NFSU2_TR(0x427d31);
u8 U[8];
w4(U+0,u32(u32(u32(0xc0ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B427d38:{NFSU2_TR(0x427d38);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B427d3a:{NFSU2_TR(0x427d3a);
u8 U[8];
w4(U+0,u32(u32(u32(0xbcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B427d41:{NFSU2_TR(0x427d41);
{u32 ea_=u32(u32(7882144u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B427d47:{NFSU2_TR(0x427d47);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B427d49:{NFSU2_TR(0x427d49);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B427d4c:{NFSU2_TR(0x427d4c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L427d6e;}}
}
B427d4e:L427d4e:{c.instructions+=7;NFSU2_TR(0x427d4e);
{u32 ea_=u32(r4(R+16)+u32(72u));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B427d52:{NFSU2_TR(0x427d52);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B427d56:{NFSU2_TR(0x427d56);
{u32 ea_=u32(r4(R+16)+u32(192u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B427d5d:{NFSU2_TR(0x427d5d);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B427d61:{NFSU2_TR(0x427d61);
{u32 ea_=u32(r4(R+16)+u32(188u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B427d68:{NFSU2_TR(0x427d68);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B427d6c:{NFSU2_TR(0x427d6c);
{goto L427d7c;}
}
B427d6e:L427d6e:{c.instructions+=3;NFSU2_TR(0x427d6e);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B427d70:{NFSU2_TR(0x427d70);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B427d76:{NFSU2_TR(0x427d76);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B427d7c:L427d7c:{c.instructions+=15;NFSU2_TR(0x427d7c);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B427d7e:{NFSU2_TR(0x427d7e);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B427d82:{NFSU2_TR(0x427d82);
{u32 ea_=u32(r4(R+16)+u32(80u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B427d86:{NFSU2_TR(0x427d86);
u8 U[8];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B427d8a:{NFSU2_TR(0x427d8a);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B427d8e:{NFSU2_TR(0x427d8e);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B427d92:{NFSU2_TR(0x427d92);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B427d96:{NFSU2_TR(0x427d96);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B427d9a:{NFSU2_TR(0x427d9a);
{u32 ea_=u32(r4(R+16)+u32(176u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B427da1:{NFSU2_TR(0x427da1);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B427da5:{NFSU2_TR(0x427da5);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B427da9:{NFSU2_TR(0x427da9);
{u32 ea_=u32(u32(7881564u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B427daf:{NFSU2_TR(0x427daf);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B427db1:{NFSU2_TR(0x427db1);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B427db4:{NFSU2_TR(0x427db4);
if(r1(R+518)){{goto L427dbe;}}
}
B427db6:L427db6:{c.instructions+=1;NFSU2_TR(0x427db6);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
w4(U+4,u32(0x3a83126full));
s4(u32(r4(U+0)),r4(U+4));
}
B427dbe:L427dbe:{c.instructions+=7;NFSU2_TR(0x427dbe);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B427dc2:{NFSU2_TR(0x427dc2);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B427dc6:{NFSU2_TR(0x427dc6);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B427dc8:{NFSU2_TR(0x427dc8);
{u32 ea_=u32(u32(7881564u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B427dce:{NFSU2_TR(0x427dce);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B427dd0:{NFSU2_TR(0x427dd0);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B427dd3:{NFSU2_TR(0x427dd3);
if(r1(R+514)){{goto L427df1;}}
}
B427dd5:L427dd5:{c.instructions+=9;NFSU2_TR(0x427dd5);
u8 U[8];
w4(U+0,u32(u32(u32(0x5cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B427dd9:{NFSU2_TR(0x427dd9);
{u32 ea_=u32(r4(R+12)+u32(84u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B427ddc:{NFSU2_TR(0x427ddc);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B427ddd:{NFSU2_TR(0x427ddd);
{u32 ea_=u32(r4(R+12)+u32(80u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B427de0:{NFSU2_TR(0x427de0);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x50ull))));
}
B427de3:{NFSU2_TR(0x427de3);
{u32 ea_=u32(r4(R+16)+u32(104u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B427de7:{NFSU2_TR(0x427de7);
u8 U[8];
w4(U+0,u32(u32(u32(0x5cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B427deb:{NFSU2_TR(0x427deb);
{u32 ea_=u32(r4(R+16)+u32(108u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B427def:{NFSU2_TR(0x427def);
{goto L427e13;}
}
B427df1:L427df1:{c.instructions+=10;NFSU2_TR(0x427df1);
u8 U[8];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B427df5:{NFSU2_TR(0x427df5);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B427df9:{NFSU2_TR(0x427df9);
{u32 ea_=u32(r4(R+24)+u32(84u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B427dfc:{NFSU2_TR(0x427dfc);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B427dfd:{NFSU2_TR(0x427dfd);
{u32 ea_=u32(r4(R+24)+u32(80u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B427e00:{NFSU2_TR(0x427e00);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x50ull))));
}
B427e03:{NFSU2_TR(0x427e03);
{u32 ea_=u32(r4(R+16)+u32(120u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B427e07:{NFSU2_TR(0x427e07);
u8 U[8];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B427e0b:{NFSU2_TR(0x427e0b);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B427e0f:{NFSU2_TR(0x427e0f);
{u32 ea_=u32(r4(R+16)+u32(124u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B427e13:L427e13:{c.instructions+=6;NFSU2_TR(0x427e13);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B427e17:{NFSU2_TR(0x427e17);
u8 U[5];
w4(U+0,u32(u32(u32(0xd0ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(s32(s8(r1(U+4)))));
}
B427e1f:{NFSU2_TR(0x427e1f);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+0)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B427e21:{NFSU2_TR(0x427e21);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B427e25:{NFSU2_TR(0x427e25);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B427e29:{NFSU2_TR(0x427e29);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x427a86u);}goto L427a86;}}
}
B427e2f:L427e2f:{c.instructions+=1;NFSU2_TR(0x427e2f);
{goto L427e3d;}
}
B427e31:L427e31:{c.instructions+=3;NFSU2_TR(0x427e31);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B427e35:{NFSU2_TR(0x427e35);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B427e39:{NFSU2_TR(0x427e39);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B427e3d:L427e3d:{c.instructions+=8;NFSU2_TR(0x427e3d);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B427e41:{NFSU2_TR(0x427e41);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B427e44:{NFSU2_TR(0x427e44);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B427e46:{NFSU2_TR(0x427e46);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B427e4a:{NFSU2_TR(0x427e4a);
{u32 ea_=u32(r4(R+20)+u32(16u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B427e4d:{NFSU2_TR(0x427e4d);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B427e4f:{NFSU2_TR(0x427e4f);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B427e52:{NFSU2_TR(0x427e52);
if(r1(R+514)){{goto L427ec5;}}
}
B427e54:L427e54:{c.instructions+=7;NFSU2_TR(0x427e54);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B427e58:{NFSU2_TR(0x427e58);
{u32 ea_=u32(u32(7881568u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B427e5e:{NFSU2_TR(0x427e5e);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B427e60:{NFSU2_TR(0x427e60);
{u32 ea_=u32(u32(7881564u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B427e66:{NFSU2_TR(0x427e66);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B427e68:{NFSU2_TR(0x427e68);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B427e6b:{NFSU2_TR(0x427e6b);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L427ec5;}}
}
B427e6d:L427e6d:{c.instructions+=7;NFSU2_TR(0x427e6d);
u8 U[4];
w4(U+0,u32(0x405330ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B427e72:{NFSU2_TR(0x427e72);
u8 U[4];
w4(U+0,u32(0x14ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B427e74:{NFSU2_TR(0x427e74);
u8 U[4];
w4(U+0,u32(0x50ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B427e76:{NFSU2_TR(0x427e76);
u8 U[4];
w4(U+0,u32(u32(u32(0x47cull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B427e7d:{NFSU2_TR(0x427e7d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B427e7e:{NFSU2_TR(0x427e7e);
u8 U[5];
w4(U+0,u32(u32(u32(0x110cull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B427e86:{NFSU2_TR(0x427e86);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x427e8bull));
TAIL_STATIC(0x75c401u,75c);
}
B427e8b:L427e8b:{c.instructions+=7;NFSU2_TR(0x427e8b);
u8 U[4];
w4(U+0,u32(0x405330ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B427e90:{NFSU2_TR(0x427e90);
u8 U[4];
w4(U+0,u32(0x14ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B427e92:{NFSU2_TR(0x427e92);
u8 U[4];
w4(U+0,u32(0x50ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B427e94:{NFSU2_TR(0x427e94);
u8 U[4];
w4(U+0,u32(u32(u32(0xabcull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B427e9b:{NFSU2_TR(0x427e9b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B427e9c:{NFSU2_TR(0x427e9c);
u8 U[8];
w4(U+0,u32(u32(u32(0x110cull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B427ea7:{NFSU2_TR(0x427ea7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x427eacull));
TAIL_STATIC(0x75c401u,75c);
}
B427eac:L427eac:{c.instructions+=9;NFSU2_TR(0x427eac);
w1(R+0,u8(0x1ull));
}
B427eae:{NFSU2_TR(0x427eae);
u8 U[8];
w4(U+0,u32(u32(u32(0x10f4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B427eb5:{NFSU2_TR(0x427eb5);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B427ebc:{NFSU2_TR(0x427ebc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B427ebd:{NFSU2_TR(0x427ebd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B427ebe:{NFSU2_TR(0x427ebe);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B427ebf:{NFSU2_TR(0x427ebf);
__builtin_memmove((R+16),(R+20),4);
}
B427ec1:{NFSU2_TR(0x427ec1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B427ec2:{NFSU2_TR(0x427ec2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B427ec5:L427ec5:{c.instructions+=7;NFSU2_TR(0x427ec5);
u8 U[4];
w4(U+0,u32(0x405330ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B427eca:{NFSU2_TR(0x427eca);
u8 U[4];
w4(U+0,u32(0x14ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B427ecc:{NFSU2_TR(0x427ecc);
u8 U[4];
w4(U+0,u32(0x50ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B427ece:{NFSU2_TR(0x427ece);
u8 U[4];
w4(U+0,u32(u32(u32(0x47cull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B427ed5:{NFSU2_TR(0x427ed5);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B427ed6:{NFSU2_TR(0x427ed6);
u8 U[5];
w4(U+0,u32(u32(u32(0x110cull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B427ede:{NFSU2_TR(0x427ede);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x427ee3ull));
TAIL_STATIC(0x75c401u,75c);
}
B427ee3:L427ee3:{c.instructions+=7;NFSU2_TR(0x427ee3);
u8 U[4];
w4(U+0,u32(0x405330ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B427ee8:{NFSU2_TR(0x427ee8);
u8 U[4];
w4(U+0,u32(0x14ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B427eea:{NFSU2_TR(0x427eea);
u8 U[4];
w4(U+0,u32(0x50ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B427eec:{NFSU2_TR(0x427eec);
u8 U[4];
w4(U+0,u32(u32(u32(0xabcull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B427ef3:{NFSU2_TR(0x427ef3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B427ef4:{NFSU2_TR(0x427ef4);
u8 U[8];
w4(U+0,u32(u32(u32(0x110cull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B427eff:{NFSU2_TR(0x427eff);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x427f04ull));
TAIL_STATIC(0x75c401u,75c);
}
B427f04:L427f04:{c.instructions+=9;NFSU2_TR(0x427f04);
u8 U[8];
w4(U+0,u32(u32(u32(0x10f4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B427f0b:{NFSU2_TR(0x427f0b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B427f0c:{NFSU2_TR(0x427f0c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B427f0d:{NFSU2_TR(0x427f0d);
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
B427f0f:{NFSU2_TR(0x427f0f);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B427f16:{NFSU2_TR(0x427f16);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B427f17:{NFSU2_TR(0x427f17);
__builtin_memmove((R+16),(R+20),4);
}
B427f19:{NFSU2_TR(0x427f19);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B427f1a:{NFSU2_TR(0x427f1a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B427f20:L427f20:{c.instructions+=15;NFSU2_TR(0x427f20);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B427f22:{NFSU2_TR(0x427f22);
u8 U[4];
w4(U+0,u32(0x7714e6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B427f27:{NFSU2_TR(0x427f27);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B427f2d:{NFSU2_TR(0x427f2d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B427f2e:{NFSU2_TR(0x427f2e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B427f35:{NFSU2_TR(0x427f35);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B427f36:{NFSU2_TR(0x427f36);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B427f37:{NFSU2_TR(0x427f37);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B427f38:{NFSU2_TR(0x427f38);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B427f3c:{NFSU2_TR(0x427f3c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B427f3d:{NFSU2_TR(0x427f3d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B427f3e:{NFSU2_TR(0x427f3e);
__builtin_memmove((R+24),(R+4),4);
}
B427f40:{NFSU2_TR(0x427f40);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B427f41:{NFSU2_TR(0x427f41);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B427f45:{NFSU2_TR(0x427f45);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x427f4aull));
TAIL_STATIC(0x425ab0u,425);
}
B427f4a:L427f4a:{c.instructions+=7;NFSU2_TR(0x427f4a);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x470ull))));
__builtin_memmove((R+28),(U+0),4);
}
B427f50:{NFSU2_TR(0x427f50);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B427f52:{NFSU2_TR(0x427f52);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B427f53:{NFSU2_TR(0x427f53);
__builtin_memmove((R+4),(R+28),4);
}
B427f55:{NFSU2_TR(0x427f55);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B427f59:{NFSU2_TR(0x427f59);
u8 U[4];
w4(U+0,u32(0x785118ull));
s4(u32(r4(R+24)),r4(U+0));
}
B427f5f:{NFSU2_TR(0x427f5f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x427f64ull));
TAIL_STATIC(0x425fc0u,425);
}
B427f64:L427f64:{c.instructions+=8;NFSU2_TR(0x427f64);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x768ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B427f6a:{NFSU2_TR(0x427f6a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B427f6d:{NFSU2_TR(0x427f6d);
{u32 ea_=u32(r4(R+0)+u32(532u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B427f73:{NFSU2_TR(0x427f73);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B427f74:{NFSU2_TR(0x427f74);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B427f77:{NFSU2_TR(0x427f77);
__builtin_memmove((R+4),(R+28),4);
}
B427f79:{NFSU2_TR(0x427f79);
u8 U[5];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B427f7e:{NFSU2_TR(0x427f7e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x427f83ull));
TAIL_STATIC(0x5eb8f0u,5eb);
}
B427f83:L427f83:{c.instructions+=6;NFSU2_TR(0x427f83);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B427f86:{NFSU2_TR(0x427f86);
{u32 ea_=u32(r4(R+4)+u32(528u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B427f8c:{NFSU2_TR(0x427f8c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B427f8d:{NFSU2_TR(0x427f8d);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B427f90:{NFSU2_TR(0x427f90);
__builtin_memmove((R+4),(R+28),4);
}
B427f92:{NFSU2_TR(0x427f92);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x427f97ull));
TAIL_STATIC(0x5eb900u,5eb);
}
B427f97:L427f97:{c.instructions+=6;NFSU2_TR(0x427f97);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B427f9a:{NFSU2_TR(0x427f9a);
{u32 ea_=u32(r4(R+8)+u32(524u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B427fa0:{NFSU2_TR(0x427fa0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B427fa1:{NFSU2_TR(0x427fa1);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B427fa4:{NFSU2_TR(0x427fa4);
__builtin_memmove((R+4),(R+28),4);
}
B427fa6:{NFSU2_TR(0x427fa6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x427fabull));
TAIL_STATIC(0x5eb910u,5eb);
}
B427fab:L427fab:{c.instructions+=5;NFSU2_TR(0x427fab);
{u32 ea_=u32(r4(R+24)+u32(1668u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B427fb1:{NFSU2_TR(0x427fb1);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B427fb2:{NFSU2_TR(0x427fb2);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B427fb5:{NFSU2_TR(0x427fb5);
__builtin_memmove((R+4),(R+24),4);
}
B427fb7:{NFSU2_TR(0x427fb7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x427fbcull));
TAIL_STATIC(0x5eb8f0u,5eb);
}
B427fbc:L427fbc:{c.instructions+=5;NFSU2_TR(0x427fbc);
{u32 ea_=u32(r4(R+24)+u32(1664u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B427fc2:{NFSU2_TR(0x427fc2);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B427fc3:{NFSU2_TR(0x427fc3);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B427fc6:{NFSU2_TR(0x427fc6);
__builtin_memmove((R+4),(R+24),4);
}
B427fc8:{NFSU2_TR(0x427fc8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x427fcdull));
TAIL_STATIC(0x5eb900u,5eb);
}
B427fcd:L427fcd:{c.instructions+=5;NFSU2_TR(0x427fcd);
{u32 ea_=u32(r4(R+24)+u32(1660u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B427fd3:{NFSU2_TR(0x427fd3);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B427fd4:{NFSU2_TR(0x427fd4);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B427fd7:{NFSU2_TR(0x427fd7);
__builtin_memmove((R+4),(R+24),4);
}
B427fd9:{NFSU2_TR(0x427fd9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x427fdeull));
TAIL_STATIC(0x5eb910u,5eb);
}
B427fde:L427fde:{c.instructions+=3;NFSU2_TR(0x427fde);
__builtin_memmove((R+0),gp(0x890118),4);
}
B427fe3:{NFSU2_TR(0x427fe3);
u8 U[18];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+10),(U+0),4);
w1(R+512,u8((r4(U+10))<(u32(0x4ull))));
w1(R+523,sborrow<u32>(r4(U+10),u32(0x4ull)));
w4(U+14,u32(u32(r4(U+10))-u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(U+14))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+14))==(u32(0x0ull))));
w4(U+4,u32(u32(r4(U+14))&u32(u32(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r4(U+4)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B427fe6:{NFSU2_TR(0x427fe6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L427ff0;}}
}
B427fe8:L427fe8:{c.instructions+=4;NFSU2_TR(0x427fe8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+8),(U+0),4);
}
B427fea:{NFSU2_TR(0x427fea);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B427feb:{NFSU2_TR(0x427feb);
__builtin_memmove((R+4),(R+28),4);
}
B427fed:{NFSU2_TR(0x427fed);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x427ff0ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B427ff0:L427ff0:{c.instructions+=3;NFSU2_TR(0x427ff0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B427ff3:{NFSU2_TR(0x427ff3);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B427ff5:{NFSU2_TR(0x427ff5);
if(r1(R+518)){TAIL_STATIC(0x428004u,428);}
}
B427ff7:L427ff7:{c.instructions+=1;NFSU2_TR(0x427ff7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x427ffcull));
TAIL_STATIC(0x5eb430u,5eb);
}
B427ffc:L427ffc:{c.instructions+=3;NFSU2_TR(0x427ffc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+8),(U+0),4);
}
B427ffe:{NFSU2_TR(0x427ffe);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B427fff:{NFSU2_TR(0x427fff);
__builtin_memmove((R+4),(R+28),4);
TAIL_STATIC(0x428001u,428);
}
XIT:NFSU2_TR_EXIT(0x427,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
