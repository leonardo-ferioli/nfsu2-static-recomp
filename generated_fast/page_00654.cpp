#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_575(u8* __restrict R,Cpu& c);
u32 body_645(u8* __restrict R,Cpu& c);
u32 body_64f(u8* __restrict R,Cpu& c);
u32 body_650(u8* __restrict R,Cpu& c);
u32 body_651(u8* __restrict R,Cpu& c);
u32 body_652(u8* __restrict R,Cpu& c);
u32 body_655(u8* __restrict R,Cpu& c);
u32 body_672(u8* __restrict R,Cpu& c);
u32 body_75d(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x654,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x654,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_654(u8* __restrict R,Cpu& c);
u32 page_654(Cpu& c){return body_654(c.regs.data(),c);}
__attribute__((noinline)) u32 body_654(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x6540df:goto L6540df;
case 0x6540e1:c.instructions+=11;goto B6540e1;
case 0x6540e2:c.instructions+=10;goto B6540e2;
case 0x6540e4:c.instructions+=9;goto B6540e4;
case 0x6540ea:c.instructions+=8;goto B6540ea;
case 0x6540eb:c.instructions+=7;goto B6540eb;
case 0x6540ec:c.instructions+=6;goto B6540ec;
case 0x6540ef:c.instructions+=5;goto B6540ef;
case 0x6540f1:c.instructions+=4;goto B6540f1;
case 0x6540f3:c.instructions+=3;goto B6540f3;
case 0x6540f4:c.instructions+=2;goto B6540f4;
case 0x6540f7:c.instructions+=1;goto B6540f7;
case 0x6540f9:goto L6540f9;
case 0x6540fb:goto L6540fb;
case 0x6540fe:c.instructions+=2;goto B6540fe;
case 0x654100:c.instructions+=1;goto B654100;
case 0x654102:goto L654102;
case 0x654104:goto L654104;
case 0x654108:c.instructions+=4;goto B654108;
case 0x65410b:c.instructions+=3;goto B65410b;
case 0x65410e:c.instructions+=2;goto B65410e;
case 0x654111:c.instructions+=1;goto B654111;
case 0x654117:goto L654117;
case 0x65411a:c.instructions+=1;goto B65411a;
case 0x654120:goto L654120;
case 0x654123:c.instructions+=3;goto B654123;
case 0x654126:c.instructions+=2;goto B654126;
case 0x654127:c.instructions+=1;goto B654127;
case 0x65412c:goto L65412c;
case 0x65412e:c.instructions+=1;goto B65412e;
case 0x654133:goto L654133;
case 0x654136:c.instructions+=1;goto B654136;
case 0x65413c:goto L65413c;
case 0x65413f:c.instructions+=4;goto B65413f;
case 0x654142:c.instructions+=3;goto B654142;
case 0x654145:c.instructions+=2;goto B654145;
case 0x654148:c.instructions+=1;goto B654148;
case 0x65414e:goto L65414e;
case 0x654150:c.instructions+=2;goto B654150;
case 0x654154:c.instructions+=1;goto B654154;
case 0x654156:goto L654156;
case 0x654159:c.instructions+=5;goto B654159;
case 0x65415c:c.instructions+=4;goto B65415c;
case 0x65415f:c.instructions+=3;goto B65415f;
case 0x654162:c.instructions+=2;goto B654162;
case 0x654165:c.instructions+=1;goto B654165;
case 0x65416a:goto L65416a;
case 0x65416c:goto L65416c;
case 0x654170:c.instructions+=1;goto B654170;
case 0x654172:goto L654172;
case 0x654175:c.instructions+=5;goto B654175;
case 0x654178:c.instructions+=4;goto B654178;
case 0x65417b:c.instructions+=3;goto B65417b;
case 0x65417e:c.instructions+=2;goto B65417e;
case 0x654181:c.instructions+=1;goto B654181;
case 0x654186:goto L654186;
case 0x654188:goto L654188;
case 0x65418b:c.instructions+=1;goto B65418b;
case 0x654191:goto L654191;
case 0x654194:c.instructions+=1;goto B654194;
case 0x654196:goto L654196;
case 0x65419a:c.instructions+=2;goto B65419a;
case 0x65419d:c.instructions+=1;goto B65419d;
case 0x65419f:goto L65419f;
case 0x6541a1:goto L6541a1;
case 0x6541a5:c.instructions+=1;goto B6541a5;
case 0x6541a7:goto L6541a7;
case 0x6541aa:c.instructions+=2;goto B6541aa;
case 0x6541ad:c.instructions+=1;goto B6541ad;
case 0x6541b4:goto L6541b4;
case 0x6541b6:c.instructions+=2;goto B6541b6;
case 0x6541b9:c.instructions+=1;goto B6541b9;
case 0x6541bf:goto L6541bf;
case 0x6541c2:c.instructions+=1;goto B6541c2;
case 0x6541c8:goto L6541c8;
case 0x6541cb:c.instructions+=1;goto B6541cb;
case 0x6541d1:goto L6541d1;
case 0x6541d4:c.instructions+=3;goto B6541d4;
case 0x6541d7:c.instructions+=2;goto B6541d7;
case 0x6541d9:c.instructions+=1;goto B6541d9;
case 0x6541db:goto L6541db;
case 0x6541df:c.instructions+=1;goto B6541df;
case 0x6541e1:goto L6541e1;
case 0x6541e4:c.instructions+=3;goto B6541e4;
case 0x6541e5:c.instructions+=2;goto B6541e5;
case 0x6541e6:c.instructions+=1;goto B6541e6;
case 0x6541eb:goto L6541eb;
case 0x6541ed:goto L6541ed;
case 0x6541f0:c.instructions+=2;goto B6541f0;
case 0x6541f4:c.instructions+=1;goto B6541f4;
case 0x6541f6:goto L6541f6;
case 0x6541f9:goto L6541f9;
case 0x6541fb:c.instructions+=1;goto B6541fb;
case 0x6541fd:goto L6541fd;
case 0x6541ff:goto L6541ff;
case 0x654202:c.instructions+=5;goto B654202;
case 0x654207:c.instructions+=4;goto B654207;
case 0x65420c:c.instructions+=3;goto B65420c;
case 0x65420d:c.instructions+=2;goto B65420d;
case 0x654210:c.instructions+=1;goto B654210;
case 0x654215:goto L654215;
case 0x654218:c.instructions+=1;goto B654218;
case 0x65421f:goto L65421f;
case 0x654222:c.instructions+=1;goto B654222;
case 0x654224:goto L654224;
case 0x654227:c.instructions+=2;goto B654227;
case 0x65422b:c.instructions+=1;goto B65422b;
case 0x65422d:goto L65422d;
case 0x654230:c.instructions+=2;goto B654230;
case 0x654232:c.instructions+=1;goto B654232;
case 0x654234:goto L654234;
case 0x654236:goto L654236;
case 0x654239:c.instructions+=5;goto B654239;
case 0x65423e:c.instructions+=4;goto B65423e;
case 0x654243:c.instructions+=3;goto B654243;
case 0x654244:c.instructions+=2;goto B654244;
case 0x654247:c.instructions+=1;goto B654247;
case 0x65424c:goto L65424c;
case 0x65424f:c.instructions+=1;goto B65424f;
case 0x654256:goto L654256;
case 0x654259:c.instructions+=3;goto B654259;
case 0x65425c:c.instructions+=2;goto B65425c;
case 0x65425e:c.instructions+=1;goto B65425e;
case 0x654260:goto L654260;
case 0x654263:c.instructions+=1;goto B654263;
case 0x654269:goto L654269;
case 0x65426c:c.instructions+=4;goto B65426c;
case 0x65426f:c.instructions+=3;goto B65426f;
case 0x654271:c.instructions+=2;goto B654271;
case 0x654274:c.instructions+=1;goto B654274;
case 0x65427a:goto L65427a;
case 0x65427e:c.instructions+=1;goto B65427e;
case 0x654284:goto L654284;
case 0x654288:c.instructions+=2;goto B654288;
case 0x65428e:c.instructions+=1;goto B65428e;
case 0x654290:goto L654290;
case 0x654293:c.instructions+=4;goto B654293;
case 0x654295:c.instructions+=3;goto B654295;
case 0x654296:c.instructions+=2;goto B654296;
case 0x654299:c.instructions+=1;goto B654299;
case 0x65429b:goto L65429b;
case 0x6542a2:c.instructions+=5;goto B6542a2;
case 0x6542a5:c.instructions+=4;goto B6542a5;
case 0x6542a8:c.instructions+=3;goto B6542a8;
case 0x6542ab:c.instructions+=2;goto B6542ab;
case 0x6542ae:c.instructions+=1;goto B6542ae;
case 0x6542b3:goto L6542b3;
case 0x6542b5:c.instructions+=1;goto B6542b5;
case 0x6542b7:goto L6542b7;
case 0x6542ba:c.instructions+=5;goto B6542ba;
case 0x6542bc:c.instructions+=4;goto B6542bc;
case 0x6542bf:c.instructions+=3;goto B6542bf;
case 0x6542c2:c.instructions+=2;goto B6542c2;
case 0x6542c3:c.instructions+=1;goto B6542c3;
case 0x6542c8:goto L6542c8;
case 0x6542cb:c.instructions+=1;goto B6542cb;
case 0x6542cd:goto L6542cd;
case 0x6542ce:c.instructions+=2;goto B6542ce;
case 0x6542d1:c.instructions+=1;goto B6542d1;
case 0x6542d3:goto L6542d3;
case 0x6542d6:c.instructions+=1;goto B6542d6;
case 0x6542d8:goto L6542d8;
case 0x6542db:c.instructions+=6;goto B6542db;
case 0x6542de:c.instructions+=5;goto B6542de;
case 0x6542e3:c.instructions+=4;goto B6542e3;
case 0x6542e8:c.instructions+=3;goto B6542e8;
case 0x6542e9:c.instructions+=2;goto B6542e9;
case 0x6542ec:c.instructions+=1;goto B6542ec;
case 0x6542f1:goto L6542f1;
case 0x6542f4:goto L6542f4;
case 0x6542f7:c.instructions+=2;goto B6542f7;
case 0x6542f9:c.instructions+=1;goto B6542f9;
case 0x6542fb:goto L6542fb;
case 0x6542ff:c.instructions+=1;goto B6542ff;
case 0x654301:goto L654301;
case 0x654304:c.instructions+=2;goto B654304;
case 0x654306:c.instructions+=1;goto B654306;
case 0x654308:goto L654308;
case 0x65430c:c.instructions+=1;goto B65430c;
case 0x65430e:goto L65430e;
case 0x654311:c.instructions+=9;goto B654311;
case 0x654318:c.instructions+=8;goto B654318;
case 0x65431b:c.instructions+=7;goto B65431b;
case 0x654322:c.instructions+=6;goto B654322;
case 0x654325:c.instructions+=5;goto B654325;
case 0x65432a:c.instructions+=4;goto B65432a;
case 0x65432f:c.instructions+=3;goto B65432f;
case 0x654330:c.instructions+=2;goto B654330;
case 0x654333:c.instructions+=1;goto B654333;
case 0x654338:goto L654338;
case 0x65433b:goto L65433b;
case 0x65433e:c.instructions+=2;goto B65433e;
case 0x654340:c.instructions+=1;goto B654340;
case 0x654342:goto L654342;
case 0x654344:goto L654344;
case 0x654349:c.instructions+=1;goto B654349;
case 0x65434e:goto L65434e;
case 0x654351:c.instructions+=2;goto B654351;
case 0x654353:c.instructions+=1;goto B654353;
case 0x654355:goto L654355;
case 0x654356:c.instructions+=1;goto B654356;
case 0x65435b:goto L65435b;
case 0x65435d:c.instructions+=3;goto B65435d;
case 0x654360:c.instructions+=2;goto B654360;
case 0x654362:c.instructions+=1;goto B654362;
case 0x654368:goto L654368;
case 0x65436a:c.instructions+=2;goto B65436a;
case 0x65436d:c.instructions+=1;goto B65436d;
case 0x654373:goto L654373;
case 0x654376:c.instructions+=3;goto B654376;
case 0x654379:c.instructions+=2;goto B654379;
case 0x65437c:c.instructions+=1;goto B65437c;
case 0x65437e:goto L65437e;
case 0x654380:c.instructions+=1;goto B654380;
case 0x654385:goto L654385;
case 0x654387:c.instructions+=1;goto B654387;
case 0x654389:goto L654389;
case 0x65438e:c.instructions+=4;goto B65438e;
case 0x654390:c.instructions+=3;goto B654390;
case 0x654392:c.instructions+=2;goto B654392;
case 0x654394:c.instructions+=1;goto B654394;
case 0x654399:goto L654399;
case 0x65439b:goto L65439b;
case 0x65439d:goto L65439d;
case 0x65439f:c.instructions+=2;goto B65439f;
case 0x6543a1:c.instructions+=1;goto B6543a1;
case 0x6543a7:goto L6543a7;
case 0x6543a9:c.instructions+=1;goto B6543a9;
case 0x6543ae:goto L6543ae;
case 0x6543b0:c.instructions+=1;goto B6543b0;
case 0x6543b2:goto L6543b2;
case 0x6543b5:c.instructions+=5;goto B6543b5;
case 0x6543bc:c.instructions+=4;goto B6543bc;
case 0x6543bf:c.instructions+=3;goto B6543bf;
case 0x6543c1:c.instructions+=2;goto B6543c1;
case 0x6543c3:c.instructions+=1;goto B6543c3;
case 0x6543c8:goto L6543c8;
case 0x6543ca:goto L6543ca;
case 0x6543cc:goto L6543cc;
case 0x6543ce:c.instructions+=3;goto B6543ce;
case 0x6543d0:c.instructions+=2;goto B6543d0;
case 0x6543d3:c.instructions+=1;goto B6543d3;
case 0x6543d9:goto L6543d9;
case 0x6543db:c.instructions+=4;goto B6543db;
case 0x6543de:c.instructions+=3;goto B6543de;
case 0x6543df:c.instructions+=2;goto B6543df;
case 0x6543e2:c.instructions+=1;goto B6543e2;
case 0x6543e4:goto L6543e4;
case 0x6543e7:c.instructions+=3;goto B6543e7;
case 0x6543ea:c.instructions+=2;goto B6543ea;
case 0x6543ec:c.instructions+=1;goto B6543ec;
case 0x6543f1:goto L6543f1;
case 0x6543f4:goto L6543f4;
case 0x6543f8:c.instructions+=1;goto B6543f8;
case 0x6543fe:goto L6543fe;
case 0x654401:c.instructions+=1;goto B654401;
case 0x654407:goto L654407;
case 0x65440a:c.instructions+=1;goto B65440a;
case 0x654410:goto L654410;
case 0x654415:c.instructions+=2;goto B654415;
case 0x654418:c.instructions+=1;goto B654418;
case 0x65441d:goto L65441d;
case 0x65441f:c.instructions+=3;goto B65441f;
case 0x654420:c.instructions+=2;goto B654420;
case 0x654421:c.instructions+=1;goto B654421;
case 0x654423:goto L654423;
case 0x654425:c.instructions+=1;goto B654425;
case 0x654427:goto L654427;
case 0x65442c:c.instructions+=2;goto B65442c;
case 0x65442f:c.instructions+=1;goto B65442f;
case 0x654434:goto L654434;
case 0x654436:c.instructions+=3;goto B654436;
case 0x654437:c.instructions+=2;goto B654437;
case 0x654438:c.instructions+=1;goto B654438;
case 0x65443a:goto L65443a;
case 0x65443c:goto L65443c;
case 0x65443e:c.instructions+=2;goto B65443e;
case 0x65443f:c.instructions+=1;goto B65443f;
case 0x654445:goto L654445;
case 0x654447:c.instructions+=1;goto B654447;
case 0x65444c:goto L65444c;
case 0x65444e:c.instructions+=1;goto B65444e;
case 0x654450:goto L654450;
case 0x654451:c.instructions+=5;goto B654451;
case 0x654453:c.instructions+=4;goto B654453;
case 0x654455:c.instructions+=3;goto B654455;
case 0x654456:c.instructions+=2;goto B654456;
case 0x654457:c.instructions+=1;goto B654457;
case 0x654459:goto L654459;
case 0x65445b:goto L65445b;
case 0x65445d:goto L65445d;
case 0x65445f:goto L65445f;
case 0x654465:goto L654465;
case 0x65446a:goto L65446a;
case 0x65446f:c.instructions+=2;goto B65446f;
case 0x654472:c.instructions+=1;goto B654472;
case 0x654477:goto L654477;
case 0x654479:c.instructions+=3;goto B654479;
case 0x65447a:c.instructions+=2;goto B65447a;
case 0x65447b:c.instructions+=1;goto B65447b;
case 0x65447d:goto L65447d;
case 0x65447f:c.instructions+=1;goto B65447f;
case 0x654485:goto L654485;
case 0x654487:c.instructions+=1;goto B654487;
case 0x65448c:goto L65448c;
case 0x65448e:c.instructions+=1;goto B65448e;
case 0x654490:goto L654490;
case 0x654491:c.instructions+=5;goto B654491;
case 0x654493:c.instructions+=4;goto B654493;
case 0x654495:c.instructions+=3;goto B654495;
case 0x654497:c.instructions+=2;goto B654497;
case 0x654499:c.instructions+=1;goto B654499;
case 0x65449b:goto L65449b;
case 0x6544a0:c.instructions+=2;goto B6544a0;
case 0x6544a3:c.instructions+=1;goto B6544a3;
case 0x6544a8:goto L6544a8;
case 0x6544aa:c.instructions+=3;goto B6544aa;
case 0x6544ab:c.instructions+=2;goto B6544ab;
case 0x6544ac:c.instructions+=1;goto B6544ac;
case 0x6544ae:goto L6544ae;
case 0x6544b0:c.instructions+=1;goto B6544b0;
case 0x6544b6:goto L6544b6;
case 0x6544b8:c.instructions+=1;goto B6544b8;
case 0x6544bd:goto L6544bd;
case 0x6544bf:c.instructions+=1;goto B6544bf;
case 0x6544c1:goto L6544c1;
case 0x6544c2:c.instructions+=4;goto B6544c2;
case 0x6544c4:c.instructions+=3;goto B6544c4;
case 0x6544c6:c.instructions+=2;goto B6544c6;
case 0x6544c8:c.instructions+=1;goto B6544c8;
case 0x6544ca:goto L6544ca;
case 0x6544cc:c.instructions+=1;goto B6544cc;
case 0x6544d1:goto L6544d1;
case 0x6544d3:goto L6544d3;
case 0x6544d8:c.instructions+=2;goto B6544d8;
case 0x6544db:c.instructions+=1;goto B6544db;
case 0x6544e0:goto L6544e0;
case 0x6544e2:c.instructions+=3;goto B6544e2;
case 0x6544e3:c.instructions+=2;goto B6544e3;
case 0x6544e4:c.instructions+=1;goto B6544e4;
case 0x6544e6:goto L6544e6;
case 0x6544e8:c.instructions+=1;goto B6544e8;
case 0x6544ea:goto L6544ea;
case 0x6544ef:c.instructions+=2;goto B6544ef;
case 0x6544f2:c.instructions+=1;goto B6544f2;
case 0x6544f7:goto L6544f7;
case 0x6544f9:c.instructions+=3;goto B6544f9;
case 0x6544fa:c.instructions+=2;goto B6544fa;
case 0x6544fb:c.instructions+=1;goto B6544fb;
case 0x6544fd:goto L6544fd;
case 0x6544ff:c.instructions+=1;goto B6544ff;
case 0x654501:goto L654501;
case 0x654506:c.instructions+=2;goto B654506;
case 0x654509:c.instructions+=1;goto B654509;
case 0x65450e:goto L65450e;
case 0x654510:c.instructions+=3;goto B654510;
case 0x654511:c.instructions+=2;goto B654511;
case 0x654512:c.instructions+=1;goto B654512;
case 0x654514:goto L654514;
case 0x654516:c.instructions+=1;goto B654516;
case 0x654518:goto L654518;
case 0x65451d:c.instructions+=2;goto B65451d;
case 0x654520:c.instructions+=1;goto B654520;
case 0x654525:goto L654525;
case 0x654527:c.instructions+=3;goto B654527;
case 0x654528:c.instructions+=2;goto B654528;
case 0x654529:c.instructions+=1;goto B654529;
case 0x65452b:goto L65452b;
case 0x65452d:goto L65452d;
case 0x654530:c.instructions+=3;goto B654530;
case 0x654532:c.instructions+=2;goto B654532;
case 0x654533:c.instructions+=1;goto B654533;
case 0x654539:goto L654539;
case 0x65453b:c.instructions+=1;goto B65453b;
case 0x654540:goto L654540;
case 0x654542:c.instructions+=1;goto B654542;
case 0x654544:goto L654544;
case 0x654545:c.instructions+=6;goto B654545;
case 0x654547:c.instructions+=5;goto B654547;
case 0x654549:c.instructions+=4;goto B654549;
case 0x65454a:c.instructions+=3;goto B65454a;
case 0x65454c:c.instructions+=2;goto B65454c;
case 0x65454e:c.instructions+=1;goto B65454e;
case 0x654553:goto L654553;
case 0x654555:goto L654555;
case 0x654557:goto L654557;
case 0x654559:c.instructions+=1;goto B654559;
case 0x65455e:goto L65455e;
case 0x654561:c.instructions+=2;goto B654561;
case 0x654563:c.instructions+=1;goto B654563;
case 0x654566:goto L654566;
case 0x654568:c.instructions+=3;goto B654568;
case 0x654569:c.instructions+=2;goto B654569;
case 0x65456b:c.instructions+=1;goto B65456b;
case 0x65456d:goto L65456d;
case 0x65456f:c.instructions+=4;goto B65456f;
case 0x654572:c.instructions+=3;goto B654572;
case 0x654574:c.instructions+=2;goto B654574;
case 0x654575:c.instructions+=1;goto B654575;
case 0x654577:goto L654577;
case 0x654579:c.instructions+=3;goto B654579;
case 0x65457e:c.instructions+=2;goto B65457e;
case 0x654580:c.instructions+=1;goto B654580;
case 0x654582:goto L654582;
case 0x654584:c.instructions+=3;goto B654584;
case 0x654587:c.instructions+=2;goto B654587;
case 0x65458a:c.instructions+=1;goto B65458a;
case 0x65458c:goto L65458c;
case 0x65458e:c.instructions+=1;goto B65458e;
case 0x654590:goto L654590;
case 0x654595:c.instructions+=2;goto B654595;
case 0x654597:c.instructions+=1;goto B654597;
case 0x654599:goto L654599;
case 0x65459b:goto L65459b;
case 0x65459d:goto L65459d;
case 0x6545a0:c.instructions+=3;goto B6545a0;
case 0x6545a2:c.instructions+=2;goto B6545a2;
case 0x6545a5:c.instructions+=1;goto B6545a5;
case 0x6545a7:goto L6545a7;
case 0x6545aa:c.instructions+=1;goto B6545aa;
case 0x6545ac:goto L6545ac;
case 0x6545ae:c.instructions+=3;goto B6545ae;
case 0x6545b3:c.instructions+=2;goto B6545b3;
case 0x6545b5:c.instructions+=1;goto B6545b5;
case 0x6545b7:goto L6545b7;
case 0x6545ba:c.instructions+=3;goto B6545ba;
case 0x6545bc:c.instructions+=2;goto B6545bc;
case 0x6545bf:c.instructions+=1;goto B6545bf;
case 0x6545c1:goto L6545c1;
case 0x6545c4:c.instructions+=1;goto B6545c4;
case 0x6545c6:goto L6545c6;
case 0x6545c8:c.instructions+=4;goto B6545c8;
case 0x6545c9:c.instructions+=3;goto B6545c9;
case 0x6545ce:c.instructions+=2;goto B6545ce;
case 0x6545d0:c.instructions+=1;goto B6545d0;
case 0x6545d2:goto L6545d2;
case 0x6545d4:goto L6545d4;
case 0x6545d6:goto L6545d6;
case 0x6545d9:c.instructions+=3;goto B6545d9;
case 0x6545db:c.instructions+=2;goto B6545db;
case 0x6545de:c.instructions+=1;goto B6545de;
case 0x6545e0:goto L6545e0;
case 0x6545e3:c.instructions+=1;goto B6545e3;
case 0x6545e9:goto L6545e9;
case 0x6545eb:c.instructions+=4;goto B6545eb;
case 0x6545ec:c.instructions+=3;goto B6545ec;
case 0x6545f1:c.instructions+=2;goto B6545f1;
case 0x6545f3:c.instructions+=1;goto B6545f3;
case 0x6545f5:goto L6545f5;
case 0x6545f8:goto L6545f8;
case 0x6545fe:goto L6545fe;
case 0x654601:c.instructions+=2;goto B654601;
case 0x654603:c.instructions+=1;goto B654603;
case 0x654606:goto L654606;
case 0x654607:goto L654607;
case 0x65460a:c.instructions+=1;goto B65460a;
case 0x65460c:goto L65460c;
case 0x65460e:c.instructions+=2;goto B65460e;
case 0x654610:c.instructions+=1;goto B654610;
case 0x654616:goto L654616;
case 0x654618:c.instructions+=1;goto B654618;
case 0x65461e:goto L65461e;
case 0x654622:c.instructions+=1;goto B654622;
case 0x654628:goto L654628;
case 0x65462a:c.instructions+=1;goto B65462a;
case 0x65462f:goto L65462f;
case 0x654631:c.instructions+=1;goto B654631;
case 0x654633:goto L654633;
case 0x654636:c.instructions+=6;goto B654636;
case 0x654638:c.instructions+=5;goto B654638;
case 0x65463b:c.instructions+=4;goto B65463b;
case 0x65463c:c.instructions+=3;goto B65463c;
case 0x65463e:c.instructions+=2;goto B65463e;
case 0x65463f:c.instructions+=1;goto B65463f;
case 0x654641:goto L654641;
case 0x654643:c.instructions+=1;goto B654643;
case 0x654648:goto L654648;
case 0x65464a:goto L65464a;
case 0x65464d:c.instructions+=1;goto B65464d;
case 0x654653:goto L654653;
case 0x654655:c.instructions+=2;goto B654655;
case 0x654657:c.instructions+=1;goto B654657;
case 0x65465d:goto L65465d;
case 0x65465f:c.instructions+=1;goto B65465f;
case 0x654665:goto L654665;
case 0x654669:c.instructions+=1;goto B654669;
case 0x65466f:goto L65466f;
case 0x654672:c.instructions+=2;goto B654672;
case 0x654674:c.instructions+=1;goto B654674;
case 0x65467a:goto L65467a;
case 0x65467c:c.instructions+=1;goto B65467c;
case 0x654682:goto L654682;
case 0x654686:c.instructions+=1;goto B654686;
case 0x65468c:goto L65468c;
case 0x65468e:c.instructions+=1;goto B65468e;
case 0x654693:goto L654693;
case 0x654695:c.instructions+=1;goto B654695;
case 0x654697:goto L654697;
case 0x65469b:c.instructions+=9;goto B65469b;
case 0x65469d:c.instructions+=8;goto B65469d;
case 0x6546a0:c.instructions+=7;goto B6546a0;
case 0x6546a1:c.instructions+=6;goto B6546a1;
case 0x6546a4:c.instructions+=5;goto B6546a4;
case 0x6546a7:c.instructions+=4;goto B6546a7;
case 0x6546a8:c.instructions+=3;goto B6546a8;
case 0x6546a9:c.instructions+=2;goto B6546a9;
case 0x6546ab:c.instructions+=1;goto B6546ab;
case 0x6546ad:goto L6546ad;
case 0x6546af:goto L6546af;
case 0x6546b2:c.instructions+=3;goto B6546b2;
case 0x6546b4:c.instructions+=2;goto B6546b4;
case 0x6546b6:c.instructions+=1;goto B6546b6;
case 0x6546bb:goto L6546bb;
case 0x6546bf:c.instructions+=1;goto B6546bf;
case 0x6546c5:goto L6546c5;
case 0x6546c8:c.instructions+=5;goto B6546c8;
case 0x6546cb:c.instructions+=4;goto B6546cb;
case 0x6546cd:c.instructions+=3;goto B6546cd;
case 0x6546d2:c.instructions+=2;goto B6546d2;
case 0x6546d3:c.instructions+=1;goto B6546d3;
case 0x6546d5:goto L6546d5;
case 0x6546d7:goto L6546d7;
case 0x6546dd:goto L6546dd;
case 0x6546df:c.instructions+=2;goto B6546df;
case 0x6546e2:c.instructions+=1;goto B6546e2;
case 0x6546e8:goto L6546e8;
case 0x6546ea:c.instructions+=1;goto B6546ea;
case 0x6546ef:goto L6546ef;
case 0x6546f1:c.instructions+=1;goto B6546f1;
case 0x6546f3:goto L6546f3;
case 0x6546f5:c.instructions+=1;goto B6546f5;
case 0x6546fa:goto L6546fa;
case 0x6546fc:c.instructions+=1;goto B6546fc;
case 0x6546fe:goto L6546fe;
case 0x654700:goto L654700;
case 0x654702:c.instructions+=1;goto B654702;
case 0x654704:goto L654704;
case 0x654706:c.instructions+=6;goto B654706;
case 0x654707:c.instructions+=5;goto B654707;
case 0x654709:c.instructions+=4;goto B654709;
case 0x65470c:c.instructions+=3;goto B65470c;
case 0x65470f:c.instructions+=2;goto B65470f;
case 0x654716:c.instructions+=1;goto B654716;
case 0x65471b:goto L65471b;
case 0x65471d:c.instructions+=1;goto B65471d;
case 0x65471f:goto L65471f;
case 0x654724:c.instructions+=6;goto B654724;
case 0x654725:c.instructions+=5;goto B654725;
case 0x654726:c.instructions+=4;goto B654726;
case 0x654728:c.instructions+=3;goto B654728;
case 0x65472a:c.instructions+=2;goto B65472a;
case 0x65472c:c.instructions+=1;goto B65472c;
case 0x654731:goto L654731;
case 0x654733:goto L654733;
case 0x654735:goto L654735;
case 0x654737:c.instructions+=2;goto B654737;
case 0x65473a:c.instructions+=1;goto B65473a;
case 0x65473c:goto L65473c;
case 0x65473e:c.instructions+=1;goto B65473e;
case 0x654743:goto L654743;
case 0x654745:c.instructions+=1;goto B654745;
case 0x654747:goto L654747;
case 0x65474a:c.instructions+=5;goto B65474a;
case 0x65474c:c.instructions+=4;goto B65474c;
case 0x65474d:c.instructions+=3;goto B65474d;
case 0x65474e:c.instructions+=2;goto B65474e;
case 0x654750:c.instructions+=1;goto B654750;
case 0x654755:goto L654755;
case 0x654757:goto L654757;
case 0x654759:goto L654759;
case 0x65475b:c.instructions+=2;goto B65475b;
case 0x65475e:c.instructions+=1;goto B65475e;
case 0x654760:goto L654760;
case 0x654765:c.instructions+=1;goto B654765;
case 0x654767:goto L654767;
case 0x65476a:c.instructions+=1;goto B65476a;
case 0x65476c:goto L65476c;
case 0x65476e:c.instructions+=1;goto B65476e;
case 0x654770:goto L654770;
case 0x654774:c.instructions+=1;goto B654774;
case 0x654776:goto L654776;
case 0x654779:c.instructions+=6;goto B654779;
case 0x65477c:c.instructions+=5;goto B65477c;
case 0x654781:c.instructions+=4;goto B654781;
case 0x654786:c.instructions+=3;goto B654786;
case 0x654787:c.instructions+=2;goto B654787;
case 0x65478a:c.instructions+=1;goto B65478a;
case 0x65478f:goto L65478f;
case 0x654792:goto L654792;
case 0x654794:c.instructions+=1;goto B654794;
case 0x654795:goto L654795;
case 0x654796:c.instructions+=4;goto B654796;
case 0x654797:c.instructions+=3;goto B654797;
case 0x654798:c.instructions+=2;goto B654798;
case 0x654799:c.instructions+=1;goto B654799;
case 0x65479c:goto L65479c;
case 0x65479e:c.instructions+=11;goto B65479e;
case 0x65479f:c.instructions+=10;goto B65479f;
case 0x6547a1:c.instructions+=9;goto B6547a1;
case 0x6547a2:c.instructions+=8;goto B6547a2;
case 0x6547a3:c.instructions+=7;goto B6547a3;
case 0x6547a6:c.instructions+=6;goto B6547a6;
case 0x6547a7:c.instructions+=5;goto B6547a7;
case 0x6547a9:c.instructions+=4;goto B6547a9;
case 0x6547ab:c.instructions+=3;goto B6547ab;
case 0x6547ae:c.instructions+=2;goto B6547ae;
case 0x6547b1:c.instructions+=1;goto B6547b1;
case 0x6547b7:goto L6547b7;
case 0x6547bb:c.instructions+=1;goto B6547bb;
case 0x6547c1:goto L6547c1;
case 0x6547c2:c.instructions+=6;goto B6547c2;
case 0x6547c3:c.instructions+=5;goto B6547c3;
case 0x6547c6:c.instructions+=4;goto B6547c6;
case 0x6547c8:c.instructions+=3;goto B6547c8;
case 0x6547cb:c.instructions+=2;goto B6547cb;
case 0x6547ce:c.instructions+=1;goto B6547ce;
case 0x6547d0:goto L6547d0;
case 0x6547d1:c.instructions+=9;goto B6547d1;
case 0x6547d4:c.instructions+=8;goto B6547d4;
case 0x6547d5:c.instructions+=7;goto B6547d5;
case 0x6547d7:c.instructions+=6;goto B6547d7;
case 0x6547da:c.instructions+=5;goto B6547da;
case 0x6547db:c.instructions+=4;goto B6547db;
case 0x6547dc:c.instructions+=3;goto B6547dc;
case 0x6547dd:c.instructions+=2;goto B6547dd;
case 0x6547df:c.instructions+=1;goto B6547df;
case 0x6547e4:goto L6547e4;
case 0x6547e6:c.instructions+=1;goto B6547e6;
case 0x6547ec:goto L6547ec;
case 0x6547ef:goto L6547ef;
case 0x6547f1:c.instructions+=1;goto B6547f1;
case 0x6547f6:goto L6547f6;
case 0x6547f8:c.instructions+=1;goto B6547f8;
case 0x6547fa:goto L6547fa;
case 0x6547fb:c.instructions+=7;goto B6547fb;
case 0x6547fd:c.instructions+=6;goto B6547fd;
case 0x6547fe:c.instructions+=5;goto B6547fe;
case 0x6547ff:c.instructions+=4;goto B6547ff;
case 0x654800:c.instructions+=3;goto B654800;
case 0x654801:c.instructions+=2;goto B654801;
case 0x654803:c.instructions+=1;goto B654803;
case 0x654808:goto L654808;
case 0x65480a:c.instructions+=1;goto B65480a;
case 0x65480c:goto L65480c;
case 0x65480e:goto L65480e;
case 0x654810:c.instructions+=1;goto B654810;
case 0x654812:goto L654812;
case 0x654815:c.instructions+=1;goto B654815;
case 0x654817:goto L654817;
case 0x65481a:c.instructions+=2;goto B65481a;
case 0x65481c:c.instructions+=1;goto B65481c;
case 0x65481f:goto L65481f;
case 0x654821:goto L654821;
case 0x654823:c.instructions+=1;goto B654823;
case 0x654828:goto L654828;
case 0x65482a:c.instructions+=1;goto B65482a;
case 0x65482c:goto L65482c;
case 0x65482f:c.instructions+=5;goto B65482f;
case 0x654831:c.instructions+=4;goto B654831;
case 0x654834:c.instructions+=3;goto B654834;
case 0x654837:c.instructions+=2;goto B654837;
case 0x654839:c.instructions+=1;goto B654839;
case 0x65483e:goto L65483e;
case 0x654840:goto L654840;
case 0x654842:goto L654842;
case 0x654844:c.instructions+=2;goto B654844;
case 0x654847:c.instructions+=1;goto B654847;
case 0x654849:goto L654849;
case 0x65484c:c.instructions+=1;goto B65484c;
case 0x654851:goto L654851;
case 0x654854:c.instructions+=2;goto B654854;
case 0x654857:c.instructions+=1;goto B654857;
case 0x654859:goto L654859;
case 0x65485c:c.instructions+=3;goto B65485c;
case 0x65485d:c.instructions+=2;goto B65485d;
case 0x65485e:c.instructions+=1;goto B65485e;
case 0x654863:goto L654863;
case 0x654865:c.instructions+=1;goto B654865;
case 0x65486a:goto L65486a;
case 0x65486c:c.instructions+=1;goto B65486c;
case 0x65486e:goto L65486e;
case 0x654873:c.instructions+=4;goto B654873;
case 0x654874:c.instructions+=3;goto B654874;
case 0x654877:c.instructions+=2;goto B654877;
case 0x654879:c.instructions+=1;goto B654879;
case 0x65487e:goto L65487e;
case 0x654880:goto L654880;
case 0x654882:goto L654882;
case 0x654884:c.instructions+=1;goto B654884;
case 0x654886:goto L654886;
case 0x654888:c.instructions+=1;goto B654888;
case 0x65488a:goto L65488a;
case 0x65488d:c.instructions+=3;goto B65488d;
case 0x65488e:c.instructions+=2;goto B65488e;
case 0x654891:c.instructions+=1;goto B654891;
case 0x654896:goto L654896;
case 0x654897:c.instructions+=3;goto B654897;
case 0x654899:c.instructions+=2;goto B654899;
case 0x65489a:c.instructions+=1;goto B65489a;
case 0x65489c:goto L65489c;
case 0x65489e:goto L65489e;
case 0x65489f:c.instructions+=2;goto B65489f;
case 0x6548a0:c.instructions+=1;goto B6548a0;
case 0x6548a3:goto L6548a3;
case 0x6548a5:c.instructions+=14;goto B6548a5;
case 0x6548a6:c.instructions+=13;goto B6548a6;
case 0x6548a8:c.instructions+=12;goto B6548a8;
case 0x6548a9:c.instructions+=11;goto B6548a9;
case 0x6548aa:c.instructions+=10;goto B6548aa;
case 0x6548ab:c.instructions+=9;goto B6548ab;
case 0x6548ac:c.instructions+=8;goto B6548ac;
case 0x6548ad:c.instructions+=7;goto B6548ad;
case 0x6548b0:c.instructions+=6;goto B6548b0;
case 0x6548b2:c.instructions+=5;goto B6548b2;
case 0x6548b4:c.instructions+=4;goto B6548b4;
case 0x6548b6:c.instructions+=3;goto B6548b6;
case 0x6548b9:c.instructions+=2;goto B6548b9;
case 0x6548bc:c.instructions+=1;goto B6548bc;
case 0x6548be:goto L6548be;
case 0x6548c2:c.instructions+=1;goto B6548c2;
case 0x6548c4:goto L6548c4;
case 0x6548c5:c.instructions+=10;goto B6548c5;
case 0x6548c8:c.instructions+=9;goto B6548c8;
case 0x6548c9:c.instructions+=8;goto B6548c9;
case 0x6548cb:c.instructions+=7;goto B6548cb;
case 0x6548ce:c.instructions+=6;goto B6548ce;
case 0x6548d1:c.instructions+=5;goto B6548d1;
case 0x6548d2:c.instructions+=4;goto B6548d2;
case 0x6548d3:c.instructions+=3;goto B6548d3;
case 0x6548d4:c.instructions+=2;goto B6548d4;
case 0x6548d5:c.instructions+=1;goto B6548d5;
case 0x6548da:goto L6548da;
case 0x6548dd:goto L6548dd;
case 0x6548e0:c.instructions+=3;goto B6548e0;
case 0x6548e3:c.instructions+=2;goto B6548e3;
case 0x6548e6:c.instructions+=1;goto B6548e6;
case 0x6548e8:goto L6548e8;
case 0x6548ea:c.instructions+=1;goto B6548ea;
case 0x6548ec:goto L6548ec;
case 0x6548f0:c.instructions+=1;goto B6548f0;
case 0x6548f2:goto L6548f2;
case 0x6548f3:c.instructions+=2;goto B6548f3;
case 0x6548f5:c.instructions+=1;goto B6548f5;
case 0x6548fa:goto L6548fa;
case 0x6548fc:c.instructions+=1;goto B6548fc;
case 0x6548fe:goto L6548fe;
case 0x654901:c.instructions+=2;goto B654901;
case 0x654903:c.instructions+=1;goto B654903;
case 0x654905:goto L654905;
case 0x654909:c.instructions+=1;goto B654909;
case 0x65490f:goto L65490f;
case 0x654910:c.instructions+=2;goto B654910;
case 0x654912:c.instructions+=1;goto B654912;
case 0x654917:goto L654917;
case 0x65491a:c.instructions+=1;goto B65491a;
case 0x65491f:goto L65491f;
case 0x654924:c.instructions+=4;goto B654924;
case 0x654929:c.instructions+=3;goto B654929;
case 0x65492c:c.instructions+=2;goto B65492c;
case 0x65492d:c.instructions+=1;goto B65492d;
case 0x654932:goto L654932;
case 0x654935:c.instructions+=3;goto B654935;
case 0x654938:c.instructions+=2;goto B654938;
case 0x65493a:c.instructions+=1;goto B65493a;
case 0x65493c:goto L65493c;
case 0x654940:c.instructions+=1;goto B654940;
case 0x654946:goto L654946;
case 0x654949:c.instructions+=3;goto B654949;
case 0x65494c:c.instructions+=2;goto B65494c;
case 0x65494f:c.instructions+=1;goto B65494f;
case 0x654952:goto L654952;
case 0x654955:c.instructions+=4;goto B654955;
case 0x654957:c.instructions+=3;goto B654957;
case 0x65495a:c.instructions+=2;goto B65495a;
case 0x65495b:c.instructions+=1;goto B65495b;
case 0x654960:goto L654960;
case 0x654962:c.instructions+=2;goto B654962;
case 0x654964:c.instructions+=1;goto B654964;
case 0x654966:goto L654966;
case 0x654969:c.instructions+=5;goto B654969;
case 0x65496c:c.instructions+=4;goto B65496c;
case 0x65496d:c.instructions+=3;goto B65496d;
case 0x65496e:c.instructions+=2;goto B65496e;
case 0x654971:c.instructions+=1;goto B654971;
case 0x654976:goto L654976;
case 0x65497b:goto L65497b;
case 0x65497c:c.instructions+=1;goto B65497c;
case 0x654981:goto L654981;
case 0x654983:c.instructions+=1;goto B654983;
case 0x654985:goto L654985;
case 0x654988:c.instructions+=2;goto B654988;
case 0x65498a:c.instructions+=1;goto B65498a;
case 0x65498f:goto L65498f;
case 0x654991:c.instructions+=1;goto B654991;
case 0x654993:goto L654993;
case 0x654996:c.instructions+=1;goto B654996;
case 0x654998:goto L654998;
case 0x65499f:goto L65499f;
case 0x6549a0:c.instructions+=2;goto B6549a0;
case 0x6549a2:c.instructions+=1;goto B6549a2;
case 0x6549a7:goto L6549a7;
case 0x6549aa:c.instructions+=2;goto B6549aa;
case 0x6549ac:c.instructions+=1;goto B6549ac;
case 0x6549b1:goto L6549b1;
case 0x6549b3:c.instructions+=2;goto B6549b3;
case 0x6549b5:c.instructions+=1;goto B6549b5;
case 0x6549b7:goto L6549b7;
case 0x6549ba:c.instructions+=7;goto B6549ba;
case 0x6549bc:c.instructions+=6;goto B6549bc;
case 0x6549be:c.instructions+=5;goto B6549be;
case 0x6549bf:c.instructions+=4;goto B6549bf;
case 0x6549c0:c.instructions+=3;goto B6549c0;
case 0x6549c1:c.instructions+=2;goto B6549c1;
case 0x6549c2:c.instructions+=1;goto B6549c2;
case 0x6549c7:goto L6549c7;
case 0x6549c9:goto L6549c9;
case 0x6549cb:c.instructions+=1;goto B6549cb;
case 0x6549d1:goto L6549d1;
case 0x6549d3:c.instructions+=1;goto B6549d3;
case 0x6549d5:goto L6549d5;
case 0x6549d7:c.instructions+=2;goto B6549d7;
case 0x6549d9:c.instructions+=1;goto B6549d9;
case 0x6549dc:goto L6549dc;
case 0x6549de:c.instructions+=2;goto B6549de;
case 0x6549e1:c.instructions+=1;goto B6549e1;
case 0x6549e7:goto L6549e7;
case 0x6549e9:c.instructions+=1;goto B6549e9;
case 0x6549eb:goto L6549eb;
case 0x6549ed:c.instructions+=2;goto B6549ed;
case 0x6549ef:c.instructions+=1;goto B6549ef;
case 0x6549f2:goto L6549f2;
case 0x6549f4:c.instructions+=2;goto B6549f4;
case 0x6549f7:c.instructions+=1;goto B6549f7;
case 0x6549fd:goto L6549fd;
case 0x654a01:c.instructions+=1;goto B654a01;
case 0x654a03:goto L654a03;
case 0x654a06:c.instructions+=1;goto B654a06;
case 0x654a08:goto L654a08;
case 0x654a0b:c.instructions+=2;goto B654a0b;
case 0x654a0d:c.instructions+=1;goto B654a0d;
case 0x654a0f:goto L654a0f;
case 0x654a13:c.instructions+=1;goto B654a13;
case 0x654a15:goto L654a15;
case 0x654a18:c.instructions+=2;goto B654a18;
case 0x654a1b:c.instructions+=1;goto B654a1b;
case 0x654a20:goto L654a20;
case 0x654a22:c.instructions+=1;goto B654a22;
case 0x654a24:goto L654a24;
case 0x654a28:c.instructions+=1;goto B654a28;
case 0x654a2a:goto L654a2a;
case 0x654a2d:c.instructions+=3;goto B654a2d;
case 0x654a30:c.instructions+=2;goto B654a30;
case 0x654a33:c.instructions+=1;goto B654a33;
case 0x654a38:goto L654a38;
case 0x654a3b:goto L654a3b;
case 0x654a3e:goto L654a3e;
case 0x654a40:c.instructions+=1;goto B654a40;
case 0x654a42:goto L654a42;
case 0x654a46:c.instructions+=1;goto B654a46;
case 0x654a48:goto L654a48;
case 0x654a4b:c.instructions+=3;goto B654a4b;
case 0x654a4d:c.instructions+=2;goto B654a4d;
case 0x654a50:c.instructions+=1;goto B654a50;
case 0x654a55:goto L654a55;
case 0x654a59:c.instructions+=1;goto B654a59;
case 0x654a5b:goto L654a5b;
case 0x654a5e:c.instructions+=2;goto B654a5e;
case 0x654a60:c.instructions+=1;goto B654a60;
case 0x654a62:goto L654a62;
case 0x654a67:c.instructions+=2;goto B654a67;
case 0x654a6c:c.instructions+=1;goto B654a6c;
case 0x654a6e:goto L654a6e;
case 0x654a71:c.instructions+=2;goto B654a71;
case 0x654a73:c.instructions+=1;goto B654a73;
case 0x654a75:goto L654a75;
case 0x654a79:c.instructions+=1;goto B654a79;
case 0x654a7b:goto L654a7b;
case 0x654a7e:c.instructions+=2;goto B654a7e;
case 0x654a81:c.instructions+=1;goto B654a81;
case 0x654a86:goto L654a86;
case 0x654a88:goto L654a88;
case 0x654a8b:goto L654a8b;
case 0x654a8d:c.instructions+=1;goto B654a8d;
case 0x654a8f:goto L654a8f;
case 0x654a92:c.instructions+=2;goto B654a92;
case 0x654a95:c.instructions+=1;goto B654a95;
case 0x654a9a:goto L654a9a;
case 0x654a9c:c.instructions+=1;goto B654a9c;
case 0x654a9e:goto L654a9e;
case 0x654aa3:c.instructions+=1;goto B654aa3;
case 0x654aa8:goto L654aa8;
case 0x654aab:c.instructions+=1;goto B654aab;
case 0x654aae:goto L654aae;
case 0x654ab3:goto L654ab3;
case 0x654ab6:goto L654ab6;
case 0x654ab8:c.instructions+=1;goto B654ab8;
case 0x654aba:goto L654aba;
case 0x654abd:c.instructions+=2;goto B654abd;
case 0x654abe:c.instructions+=1;goto B654abe;
case 0x654ac3:goto L654ac3;
case 0x654ac4:c.instructions+=5;goto B654ac4;
case 0x654ac6:c.instructions+=4;goto B654ac6;
case 0x654ac7:c.instructions+=3;goto B654ac7;
case 0x654ac8:c.instructions+=2;goto B654ac8;
case 0x654ac9:c.instructions+=1;goto B654ac9;
case 0x654acc:goto L654acc;
case 0x654ace:c.instructions+=11;goto B654ace;
case 0x654acf:c.instructions+=10;goto B654acf;
case 0x654ad1:c.instructions+=9;goto B654ad1;
case 0x654ad4:c.instructions+=8;goto B654ad4;
case 0x654ad7:c.instructions+=7;goto B654ad7;
case 0x654ad8:c.instructions+=6;goto B654ad8;
case 0x654ad9:c.instructions+=5;goto B654ad9;
case 0x654adb:c.instructions+=4;goto B654adb;
case 0x654add:c.instructions+=3;goto B654add;
case 0x654adf:c.instructions+=2;goto B654adf;
case 0x654ae2:c.instructions+=1;goto B654ae2;
case 0x654ae4:goto L654ae4;
case 0x654ae8:c.instructions+=1;goto B654ae8;
case 0x654aea:goto L654aea;
case 0x654aed:c.instructions+=2;goto B654aed;
case 0x654aef:c.instructions+=1;goto B654aef;
case 0x654af1:goto L654af1;
case 0x654af5:c.instructions+=1;goto B654af5;
case 0x654af7:goto L654af7;
case 0x654afa:c.instructions+=2;goto B654afa;
case 0x654afc:c.instructions+=1;goto B654afc;
case 0x654afe:goto L654afe;
case 0x654b02:c.instructions+=1;goto B654b02;
case 0x654b04:goto L654b04;
case 0x654b06:c.instructions+=1;goto B654b06;
case 0x654b0b:goto L654b0b;
case 0x654b0d:c.instructions+=3;goto B654b0d;
case 0x654b0e:c.instructions+=2;goto B654b0e;
case 0x654b11:c.instructions+=1;goto B654b11;
case 0x654b13:goto L654b13;
case 0x654b16:goto L654b16;
case 0x654b18:c.instructions+=2;goto B654b18;
case 0x654b1b:c.instructions+=1;goto B654b1b;
case 0x654b1d:goto L654b1d;
case 0x654b20:c.instructions+=2;goto B654b20;
case 0x654b23:c.instructions+=1;goto B654b23;
case 0x654b25:goto L654b25;
case 0x654b28:goto L654b28;
case 0x654b2a:c.instructions+=1;goto B654b2a;
case 0x654b2c:goto L654b2c;
case 0x654b2f:c.instructions+=2;goto B654b2f;
case 0x654b32:c.instructions+=1;goto B654b32;
case 0x654b34:goto L654b34;
case 0x654b37:goto L654b37;
case 0x654b39:c.instructions+=1;goto B654b39;
case 0x654b3b:goto L654b3b;
case 0x654b3e:c.instructions+=2;goto B654b3e;
case 0x654b41:c.instructions+=1;goto B654b41;
case 0x654b43:goto L654b43;
case 0x654b46:goto L654b46;
case 0x654b49:c.instructions+=6;goto B654b49;
case 0x654b4c:c.instructions+=5;goto B654b4c;
case 0x654b4f:c.instructions+=4;goto B654b4f;
case 0x654b51:c.instructions+=3;goto B654b51;
case 0x654b54:c.instructions+=2;goto B654b54;
case 0x654b56:c.instructions+=1;goto B654b56;
case 0x654b5b:goto L654b5b;
case 0x654b5d:c.instructions+=1;goto B654b5d;
case 0x654b5f:goto L654b5f;
case 0x654b62:c.instructions+=7;goto B654b62;
case 0x654b64:c.instructions+=6;goto B654b64;
case 0x654b66:c.instructions+=5;goto B654b66;
case 0x654b67:c.instructions+=4;goto B654b67;
case 0x654b68:c.instructions+=3;goto B654b68;
case 0x654b6a:c.instructions+=2;goto B654b6a;
case 0x654b6b:c.instructions+=1;goto B654b6b;
case 0x654b70:goto L654b70;
case 0x654b73:c.instructions+=1;goto B654b73;
case 0x654b75:goto L654b75;
case 0x654b78:goto L654b78;
case 0x654b7b:c.instructions+=1;goto B654b7b;
case 0x654b7d:goto L654b7d;
case 0x654b80:c.instructions+=2;goto B654b80;
case 0x654b82:c.instructions+=1;goto B654b82;
case 0x654b87:goto L654b87;
case 0x654b89:c.instructions+=1;goto B654b89;
case 0x654b8b:goto L654b8b;
case 0x654b90:c.instructions+=3;goto B654b90;
case 0x654b95:c.instructions+=2;goto B654b95;
case 0x654b98:c.instructions+=1;goto B654b98;
case 0x654b99:goto L654b99;
case 0x654b9e:goto L654b9e;
case 0x654ba1:goto L654ba1;
case 0x654ba4:c.instructions+=1;goto B654ba4;
case 0x654ba9:goto L654ba9;
case 0x654bac:c.instructions+=10;goto B654bac;
case 0x654baf:c.instructions+=9;goto B654baf;
case 0x654bb2:c.instructions+=8;goto B654bb2;
case 0x654bb3:c.instructions+=7;goto B654bb3;
case 0x654bb6:c.instructions+=6;goto B654bb6;
case 0x654bb7:c.instructions+=5;goto B654bb7;
case 0x654bba:c.instructions+=4;goto B654bba;
case 0x654bbb:c.instructions+=3;goto B654bbb;
case 0x654bbe:c.instructions+=2;goto B654bbe;
case 0x654bc1:c.instructions+=1;goto B654bc1;
case 0x654bc6:goto L654bc6;
case 0x654bc8:c.instructions+=1;goto B654bc8;
case 0x654bca:goto L654bca;
case 0x654bcf:c.instructions+=1;goto B654bcf;
case 0x654bd1:goto L654bd1;
case 0x654bd3:c.instructions+=2;goto B654bd3;
case 0x654bd5:c.instructions+=1;goto B654bd5;
case 0x654bd7:goto L654bd7;
case 0x654bdb:c.instructions+=2;goto B654bdb;
case 0x654bdd:c.instructions+=1;goto B654bdd;
case 0x654bdf:goto L654bdf;
case 0x654be4:goto L654be4;
case 0x654be6:c.instructions+=1;goto B654be6;
case 0x654be8:goto L654be8;
case 0x654bea:c.instructions+=5;goto B654bea;
case 0x654bef:c.instructions+=4;goto B654bef;
case 0x654bf2:c.instructions+=3;goto B654bf2;
case 0x654bf4:c.instructions+=2;goto B654bf4;
case 0x654bf7:c.instructions+=1;goto B654bf7;
case 0x654bf9:goto L654bf9;
case 0x654bfe:goto L654bfe;
case 0x654c00:c.instructions+=2;goto B654c00;
case 0x654c02:c.instructions+=1;goto B654c02;
case 0x654c04:goto L654c04;
case 0x654c07:c.instructions+=3;goto B654c07;
case 0x654c0c:c.instructions+=2;goto B654c0c;
case 0x654c0e:c.instructions+=1;goto B654c0e;
case 0x654c13:goto L654c13;
case 0x654c14:c.instructions+=2;goto B654c14;
case 0x654c16:c.instructions+=1;goto B654c16;
case 0x654c18:goto L654c18;
case 0x654c19:c.instructions+=2;goto B654c19;
case 0x654c1b:c.instructions+=1;goto B654c1b;
case 0x654c20:goto L654c20;
case 0x654c22:c.instructions+=1;goto B654c22;
case 0x654c24:goto L654c24;
case 0x654c26:goto L654c26;
case 0x654c28:c.instructions+=1;goto B654c28;
case 0x654c2e:goto L654c2e;
case 0x654c31:c.instructions+=4;goto B654c31;
case 0x654c32:c.instructions+=3;goto B654c32;
case 0x654c35:c.instructions+=2;goto B654c35;
case 0x654c36:c.instructions+=1;goto B654c36;
case 0x654c3b:goto L654c3b;
case 0x654c3d:c.instructions+=1;goto B654c3d;
case 0x654c3f:goto L654c3f;
case 0x654c44:goto L654c44;
case 0x654c49:c.instructions+=3;goto B654c49;
case 0x654c4c:c.instructions+=2;goto B654c4c;
case 0x654c4f:c.instructions+=1;goto B654c4f;
case 0x654c54:goto L654c54;
case 0x654c57:c.instructions+=1;goto B654c57;
case 0x654c59:goto L654c59;
case 0x654c5c:c.instructions+=5;goto B654c5c;
case 0x654c5d:c.instructions+=4;goto B654c5d;
case 0x654c5e:c.instructions+=3;goto B654c5e;
case 0x654c61:c.instructions+=2;goto B654c61;
case 0x654c62:c.instructions+=1;goto B654c62;
case 0x654c67:goto L654c67;
case 0x654c69:c.instructions+=3;goto B654c69;
case 0x654c6c:c.instructions+=2;goto B654c6c;
case 0x654c6f:c.instructions+=1;goto B654c6f;
case 0x654c75:goto L654c75;
case 0x654c77:c.instructions+=1;goto B654c77;
case 0x654c7c:goto L654c7c;
case 0x654c7e:c.instructions+=1;goto B654c7e;
case 0x654c80:goto L654c80;
case 0x654c83:c.instructions+=7;goto B654c83;
case 0x654c85:c.instructions+=6;goto B654c85;
case 0x654c87:c.instructions+=5;goto B654c87;
case 0x654c88:c.instructions+=4;goto B654c88;
case 0x654c89:c.instructions+=3;goto B654c89;
case 0x654c8a:c.instructions+=2;goto B654c8a;
case 0x654c8b:c.instructions+=1;goto B654c8b;
case 0x654c90:goto L654c90;
case 0x654c92:c.instructions+=1;goto B654c92;
case 0x654c94:goto L654c94;
case 0x654c96:goto L654c96;
case 0x654c98:c.instructions+=3;goto B654c98;
case 0x654c9b:c.instructions+=2;goto B654c9b;
case 0x654c9e:c.instructions+=1;goto B654c9e;
case 0x654ca4:goto L654ca4;
case 0x654ca6:c.instructions+=1;goto B654ca6;
case 0x654cab:goto L654cab;
case 0x654cad:c.instructions+=1;goto B654cad;
case 0x654caf:goto L654caf;
case 0x654cb4:c.instructions+=4;goto B654cb4;
case 0x654cb5:c.instructions+=3;goto B654cb5;
case 0x654cb6:c.instructions+=2;goto B654cb6;
case 0x654cb8:c.instructions+=1;goto B654cb8;
case 0x654cbd:goto L654cbd;
case 0x654cbf:goto L654cbf;
case 0x654cc1:goto L654cc1;
case 0x654cc3:c.instructions+=2;goto B654cc3;
case 0x654cc6:c.instructions+=1;goto B654cc6;
case 0x654ccc:goto L654ccc;
case 0x654ccf:c.instructions+=2;goto B654ccf;
case 0x654cd1:c.instructions+=1;goto B654cd1;
case 0x654cd3:goto L654cd3;
case 0x654cd5:c.instructions+=2;goto B654cd5;
case 0x654cd7:c.instructions+=1;goto B654cd7;
case 0x654cda:goto L654cda;
case 0x654cdd:c.instructions+=4;goto B654cdd;
case 0x654ce0:c.instructions+=3;goto B654ce0;
case 0x654ce3:c.instructions+=2;goto B654ce3;
case 0x654ce6:c.instructions+=1;goto B654ce6;
case 0x654cec:goto L654cec;
case 0x654cee:c.instructions+=1;goto B654cee;
case 0x654cf3:goto L654cf3;
case 0x654cf5:c.instructions+=1;goto B654cf5;
case 0x654cf7:goto L654cf7;
case 0x654cfc:c.instructions+=4;goto B654cfc;
case 0x654cfd:c.instructions+=3;goto B654cfd;
case 0x654cfe:c.instructions+=2;goto B654cfe;
case 0x654d00:c.instructions+=1;goto B654d00;
case 0x654d05:goto L654d05;
case 0x654d07:goto L654d07;
case 0x654d09:goto L654d09;
case 0x654d0b:c.instructions+=2;goto B654d0b;
case 0x654d0e:c.instructions+=1;goto B654d0e;
case 0x654d14:goto L654d14;
case 0x654d17:c.instructions+=1;goto B654d17;
case 0x654d19:goto L654d19;
case 0x654d1c:c.instructions+=1;goto B654d1c;
case 0x654d1e:goto L654d1e;
case 0x654d21:c.instructions+=3;goto B654d21;
case 0x654d22:c.instructions+=2;goto B654d22;
case 0x654d25:c.instructions+=1;goto B654d25;
case 0x654d2a:goto L654d2a;
case 0x654d2c:c.instructions+=1;goto B654d2c;
case 0x654d2e:goto L654d2e;
case 0x654d31:c.instructions+=5;goto B654d31;
case 0x654d32:c.instructions+=4;goto B654d32;
case 0x654d33:c.instructions+=3;goto B654d33;
case 0x654d36:c.instructions+=2;goto B654d36;
case 0x654d37:c.instructions+=1;goto B654d37;
case 0x654d3c:goto L654d3c;
case 0x654d3e:goto L654d3e;
case 0x654d41:c.instructions+=1;goto B654d41;
case 0x654d46:goto L654d46;
case 0x654d49:c.instructions+=4;goto B654d49;
case 0x654d4c:c.instructions+=3;goto B654d4c;
case 0x654d4f:c.instructions+=2;goto B654d4f;
case 0x654d52:c.instructions+=1;goto B654d52;
case 0x654d58:goto L654d58;
case 0x654d5a:c.instructions+=1;goto B654d5a;
case 0x654d5f:goto L654d5f;
case 0x654d61:c.instructions+=1;goto B654d61;
case 0x654d63:goto L654d63;
case 0x654d68:c.instructions+=4;goto B654d68;
case 0x654d69:c.instructions+=3;goto B654d69;
case 0x654d6a:c.instructions+=2;goto B654d6a;
case 0x654d6c:c.instructions+=1;goto B654d6c;
case 0x654d71:goto L654d71;
case 0x654d73:goto L654d73;
case 0x654d75:goto L654d75;
case 0x654d77:c.instructions+=3;goto B654d77;
case 0x654d7a:c.instructions+=2;goto B654d7a;
case 0x654d7d:c.instructions+=1;goto B654d7d;
case 0x654d83:goto L654d83;
case 0x654d86:c.instructions+=2;goto B654d86;
case 0x654d88:c.instructions+=1;goto B654d88;
case 0x654d8a:goto L654d8a;
case 0x654d8c:c.instructions+=2;goto B654d8c;
case 0x654d8e:c.instructions+=1;goto B654d8e;
case 0x654d91:goto L654d91;
case 0x654d94:c.instructions+=6;goto B654d94;
case 0x654d97:c.instructions+=5;goto B654d97;
case 0x654d9a:c.instructions+=4;goto B654d9a;
case 0x654d9d:c.instructions+=3;goto B654d9d;
case 0x654da0:c.instructions+=2;goto B654da0;
case 0x654da3:c.instructions+=1;goto B654da3;
case 0x654da9:goto L654da9;
case 0x654dab:c.instructions+=1;goto B654dab;
case 0x654db0:goto L654db0;
case 0x654db2:c.instructions+=1;goto B654db2;
case 0x654db4:goto L654db4;
case 0x654db9:c.instructions+=4;goto B654db9;
case 0x654dba:c.instructions+=3;goto B654dba;
case 0x654dbb:c.instructions+=2;goto B654dbb;
case 0x654dbd:c.instructions+=1;goto B654dbd;
case 0x654dc2:goto L654dc2;
case 0x654dc4:goto L654dc4;
case 0x654dc6:goto L654dc6;
case 0x654dc8:c.instructions+=3;goto B654dc8;
case 0x654dcb:c.instructions+=2;goto B654dcb;
case 0x654dce:c.instructions+=1;goto B654dce;
case 0x654dd4:goto L654dd4;
case 0x654dd7:c.instructions+=1;goto B654dd7;
case 0x654dd9:goto L654dd9;
case 0x654ddc:c.instructions+=1;goto B654ddc;
case 0x654dde:goto L654dde;
case 0x654de1:c.instructions+=3;goto B654de1;
case 0x654de2:c.instructions+=2;goto B654de2;
case 0x654de5:c.instructions+=1;goto B654de5;
case 0x654dea:goto L654dea;
case 0x654dec:c.instructions+=1;goto B654dec;
case 0x654dee:goto L654dee;
case 0x654df1:c.instructions+=5;goto B654df1;
case 0x654df2:c.instructions+=4;goto B654df2;
case 0x654df3:c.instructions+=3;goto B654df3;
case 0x654df6:c.instructions+=2;goto B654df6;
case 0x654df7:c.instructions+=1;goto B654df7;
case 0x654dfc:goto L654dfc;
case 0x654dff:c.instructions+=6;goto B654dff;
case 0x654e02:c.instructions+=5;goto B654e02;
case 0x654e05:c.instructions+=4;goto B654e05;
case 0x654e08:c.instructions+=3;goto B654e08;
case 0x654e0b:c.instructions+=2;goto B654e0b;
case 0x654e0e:c.instructions+=1;goto B654e0e;
case 0x654e14:goto L654e14;
case 0x654e17:c.instructions+=2;goto B654e17;
case 0x654e18:c.instructions+=1;goto B654e18;
case 0x654e1d:goto L654e1d;
case 0x654e20:c.instructions+=2;goto B654e20;
case 0x654e23:c.instructions+=1;goto B654e23;
case 0x654e28:goto L654e28;
case 0x654e2b:c.instructions+=1;goto B654e2b;
case 0x654e2c:goto L654e2c;
case 0x654e2d:c.instructions+=3;goto B654e2d;
case 0x654e2e:c.instructions+=2;goto B654e2e;
case 0x654e2f:c.instructions+=1;goto B654e2f;
case 0x654e32:goto L654e32;
case 0x654e35:c.instructions+=1;goto B654e35;
case 0x654e3a:goto L654e3a;
case 0x654e3c:goto L654e3c;
case 0x654e3e:c.instructions+=9;goto B654e3e;
case 0x654e3f:c.instructions+=8;goto B654e3f;
case 0x654e41:c.instructions+=7;goto B654e41;
case 0x654e44:c.instructions+=6;goto B654e44;
case 0x654e45:c.instructions+=5;goto B654e45;
case 0x654e46:c.instructions+=4;goto B654e46;
case 0x654e49:c.instructions+=3;goto B654e49;
case 0x654e4b:c.instructions+=2;goto B654e4b;
case 0x654e4e:c.instructions+=1;goto B654e4e;
case 0x654e54:goto L654e54;
case 0x654e58:c.instructions+=1;goto B654e58;
case 0x654e5e:goto L654e5e;
case 0x654e61:c.instructions+=5;goto B654e61;
case 0x654e65:c.instructions+=4;goto B654e65;
case 0x654e68:c.instructions+=3;goto B654e68;
case 0x654e6b:c.instructions+=2;goto B654e6b;
case 0x654e6e:c.instructions+=1;goto B654e6e;
case 0x654e73:goto L654e73;
case 0x654e75:c.instructions+=1;goto B654e75;
case 0x654e7b:goto L654e7b;
case 0x654e7e:c.instructions+=2;goto B654e7e;
case 0x654e81:c.instructions+=1;goto B654e81;
case 0x654e83:goto L654e83;
case 0x654e86:c.instructions+=1;goto B654e86;
case 0x654e8c:goto L654e8c;
case 0x654e8f:c.instructions+=1;goto B654e8f;
case 0x654e91:goto L654e91;
case 0x654e94:c.instructions+=1;goto B654e94;
case 0x654e9a:goto L654e9a;
case 0x654e9d:c.instructions+=1;goto B654e9d;
case 0x654ea3:goto L654ea3;
case 0x654ea6:c.instructions+=1;goto B654ea6;
case 0x654eac:goto L654eac;
case 0x654eaf:c.instructions+=1;goto B654eaf;
case 0x654eb5:goto L654eb5;
case 0x654eb8:c.instructions+=11;goto B654eb8;
case 0x654eba:c.instructions+=10;goto B654eba;
case 0x654ebb:c.instructions+=9;goto B654ebb;
case 0x654ebd:c.instructions+=8;goto B654ebd;
case 0x654ebf:c.instructions+=7;goto B654ebf;
case 0x654ec2:c.instructions+=6;goto B654ec2;
case 0x654ec5:c.instructions+=5;goto B654ec5;
case 0x654ec8:c.instructions+=4;goto B654ec8;
case 0x654ecb:c.instructions+=3;goto B654ecb;
case 0x654ece:c.instructions+=2;goto B654ece;
case 0x654ed1:c.instructions+=1;goto B654ed1;
case 0x654ed3:goto L654ed3;
case 0x654ed7:c.instructions+=1;goto B654ed7;
case 0x654ed9:goto L654ed9;
case 0x654edb:c.instructions+=7;goto B654edb;
case 0x654ede:c.instructions+=6;goto B654ede;
case 0x654ee2:c.instructions+=5;goto B654ee2;
case 0x654ee5:c.instructions+=4;goto B654ee5;
case 0x654ee8:c.instructions+=3;goto B654ee8;
case 0x654ee9:c.instructions+=2;goto B654ee9;
case 0x654eec:c.instructions+=1;goto B654eec;
case 0x654ef1:goto L654ef1;
case 0x654ef3:c.instructions+=3;goto B654ef3;
case 0x654ef4:c.instructions+=2;goto B654ef4;
case 0x654ef7:c.instructions+=1;goto B654ef7;
case 0x654ef9:goto L654ef9;
case 0x654efc:c.instructions+=2;goto B654efc;
case 0x654efe:c.instructions+=1;goto B654efe;
case 0x654f00:goto L654f00;
case 0x654f04:c.instructions+=1;goto B654f04;
case 0x654f06:goto L654f06;
case 0x654f08:c.instructions+=7;goto B654f08;
case 0x654f0b:c.instructions+=6;goto B654f0b;
case 0x654f0f:c.instructions+=5;goto B654f0f;
case 0x654f12:c.instructions+=4;goto B654f12;
case 0x654f15:c.instructions+=3;goto B654f15;
case 0x654f16:c.instructions+=2;goto B654f16;
case 0x654f19:c.instructions+=1;goto B654f19;
case 0x654f1e:goto L654f1e;
case 0x654f20:c.instructions+=3;goto B654f20;
case 0x654f21:c.instructions+=2;goto B654f21;
case 0x654f24:c.instructions+=1;goto B654f24;
case 0x654f26:goto L654f26;
case 0x654f2b:c.instructions+=1;goto B654f2b;
case 0x654f30:goto L654f30;
case 0x654f33:c.instructions+=3;goto B654f33;
case 0x654f36:c.instructions+=2;goto B654f36;
case 0x654f37:c.instructions+=1;goto B654f37;
case 0x654f3c:goto L654f3c;
case 0x654f41:goto L654f41;
case 0x654f45:c.instructions+=1;goto B654f45;
case 0x654f47:goto L654f47;
case 0x654f49:c.instructions+=1;goto B654f49;
case 0x654f4b:goto L654f4b;
case 0x654f4e:c.instructions+=3;goto B654f4e;
case 0x654f51:c.instructions+=2;goto B654f51;
case 0x654f52:c.instructions+=1;goto B654f52;
case 0x654f57:goto L654f57;
case 0x654f59:c.instructions+=2;goto B654f59;
case 0x654f5b:c.instructions+=1;goto B654f5b;
case 0x654f61:goto L654f61;
case 0x654f64:goto L654f64;
case 0x654f66:c.instructions+=1;goto B654f66;
case 0x654f68:goto L654f68;
case 0x654f6b:c.instructions+=2;goto B654f6b;
case 0x654f6e:c.instructions+=1;goto B654f6e;
case 0x654f70:goto L654f70;
case 0x654f72:c.instructions+=1;goto B654f72;
case 0x654f74:goto L654f74;
case 0x654f77:c.instructions+=3;goto B654f77;
case 0x654f7a:c.instructions+=2;goto B654f7a;
case 0x654f7d:c.instructions+=1;goto B654f7d;
case 0x654f82:goto L654f82;
case 0x654f84:c.instructions+=2;goto B654f84;
case 0x654f86:c.instructions+=1;goto B654f86;
case 0x654f8c:goto L654f8c;
case 0x654f8e:c.instructions+=1;goto B654f8e;
case 0x654f90:goto L654f90;
case 0x654f93:c.instructions+=1;goto B654f93;
case 0x654f94:goto L654f94;
case 0x654f97:c.instructions+=1;goto B654f97;
case 0x654f9c:goto L654f9c;
case 0x654f9e:c.instructions+=2;goto B654f9e;
case 0x654fa0:c.instructions+=1;goto B654fa0;
case 0x654fa6:goto L654fa6;
case 0x654fa9:c.instructions+=3;goto B654fa9;
case 0x654fab:c.instructions+=2;goto B654fab;
case 0x654fad:c.instructions+=1;goto B654fad;
case 0x654fb3:goto L654fb3;
case 0x654fb5:c.instructions+=3;goto B654fb5;
case 0x654fb6:c.instructions+=2;goto B654fb6;
case 0x654fb8:c.instructions+=1;goto B654fb8;
case 0x654fbe:goto L654fbe;
case 0x654fc1:c.instructions+=1;goto B654fc1;
case 0x654fc7:goto L654fc7;
case 0x654fca:c.instructions+=1;goto B654fca;
case 0x654fd0:goto L654fd0;
case 0x654fd3:c.instructions+=1;goto B654fd3;
case 0x654fd9:goto L654fd9;
case 0x654fdc:c.instructions+=2;goto B654fdc;
case 0x654fdf:c.instructions+=1;goto B654fdf;
case 0x654fe5:goto L654fe5;
case 0x654fe8:c.instructions+=9;goto B654fe8;
case 0x654feb:c.instructions+=8;goto B654feb;
case 0x654fee:c.instructions+=7;goto B654fee;
case 0x654ff1:c.instructions+=6;goto B654ff1;
case 0x654ff4:c.instructions+=5;goto B654ff4;
case 0x654ff6:c.instructions+=4;goto B654ff6;
case 0x654ff9:c.instructions+=3;goto B654ff9;
case 0x654ffc:c.instructions+=2;goto B654ffc;
case 0x654ffe:c.instructions+=1;goto B654ffe;
default:missing_instruction(c.pc);}
B6540df:L6540df:{c.instructions+=12;NFSU2_TR(0x6540df);
__builtin_memmove((R+28),(R+28),4);
}
B6540e1:{NFSU2_TR(0x6540e1);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6540e2:{NFSU2_TR(0x6540e2);
__builtin_memmove((R+20),(R+16),4);
}
B6540e4:{NFSU2_TR(0x6540e4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x110ull))));
}
B6540ea:{NFSU2_TR(0x6540ea);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6540eb:{NFSU2_TR(0x6540eb);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6540ec:{NFSU2_TR(0x6540ec);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6540ef:{NFSU2_TR(0x6540ef);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B6540f1:{NFSU2_TR(0x6540f1);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6540f3:{NFSU2_TR(0x6540f3);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6540f4:{NFSU2_TR(0x6540f4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6540f7:{NFSU2_TR(0x6540f7);
if(r1(R+518)){{goto L6540fb;}}
}
B6540f9:L6540f9:{c.instructions+=1;NFSU2_TR(0x6540f9);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
s4(u32(r4(R+24)),r4(U+0));
}
B6540fb:L6540fb:{c.instructions+=3;NFSU2_TR(0x6540fb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6540fe:{NFSU2_TR(0x6540fe);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B654100:{NFSU2_TR(0x654100);
if(r1(R+518)){{goto L654104;}}
}
B654102:L654102:{c.instructions+=1;NFSU2_TR(0x654102);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
s4(u32(r4(R+0)),r4(U+0));
}
B654104:L654104:{c.instructions+=5;NFSU2_TR(0x654104);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0xffffffffull))));
s4(u32(r4(U+0)),r4(U+4));
}
B654108:{NFSU2_TR(0x654108);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B65410b:{NFSU2_TR(0x65410b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B65410e:{NFSU2_TR(0x65410e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B654111:{NFSU2_TR(0x654111);
if(r1(R+518)){{goto L6543f4;}}
}
B654117:L654117:{c.instructions+=2;NFSU2_TR(0x654117);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B65411a:{NFSU2_TR(0x65411a);
if(r1(R+518)){{goto L65427a;}}
}
B654120:L654120:{c.instructions+=4;NFSU2_TR(0x654120);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B654123:{NFSU2_TR(0x654123);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B654126:{NFSU2_TR(0x654126);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B654127:{NFSU2_TR(0x654127);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x65412cull));
TAIL_STATIC(0x64f7f1u,64f);
}
B65412c:L65412c:{c.instructions+=2;NFSU2_TR(0x65412c);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B65412e:{NFSU2_TR(0x65412e);
{goto L654260;}
}
B654133:L654133:{c.instructions+=2;NFSU2_TR(0x654133);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B654136:{NFSU2_TR(0x654136);
if(r1(R+518)){{goto L654269;}}
}
B65413c:L65413c:{c.instructions+=5;NFSU2_TR(0x65413c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65413f:{NFSU2_TR(0x65413f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B654142:{NFSU2_TR(0x654142);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B654145:{NFSU2_TR(0x654145);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B654148:{NFSU2_TR(0x654148);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L654308;}}
}
B65414e:L65414e:{c.instructions+=3;NFSU2_TR(0x65414e);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B654150:{NFSU2_TR(0x654150);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x4ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B654154:{NFSU2_TR(0x654154);
if(r1(R+518)){{goto L65416c;}}
}
B654156:L654156:{c.instructions+=6;NFSU2_TR(0x654156);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B654159:{NFSU2_TR(0x654159);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B65415c:{NFSU2_TR(0x65415c);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B65415f:{NFSU2_TR(0x65415f);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B654162:{NFSU2_TR(0x654162);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B654165:{NFSU2_TR(0x654165);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x65416aull));
TAIL_STATIC(0x652aa8u,652);
}
B65416a:L65416a:{c.instructions+=1;NFSU2_TR(0x65416a);
__builtin_memmove((R+12),(R+0),4);
}
B65416c:L65416c:{c.instructions+=2;NFSU2_TR(0x65416c);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x8ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B654170:{NFSU2_TR(0x654170);
if(r1(R+518)){{goto L654188;}}
}
B654172:L654172:{c.instructions+=6;NFSU2_TR(0x654172);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B654175:{NFSU2_TR(0x654175);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B654178:{NFSU2_TR(0x654178);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B65417b:{NFSU2_TR(0x65417b);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B65417e:{NFSU2_TR(0x65417e);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B654181:{NFSU2_TR(0x654181);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x654186ull));
TAIL_STATIC(0x651365u,651);
}
B654186:L654186:{c.instructions+=1;NFSU2_TR(0x654186);
w4(R+12,u32(u32(r4(R+12))+u32(r4(R+0))));
}
B654188:L654188:{c.instructions+=2;NFSU2_TR(0x654188);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B65418b:{NFSU2_TR(0x65418b);
if(r1(R+518)){{goto L654256;}}
}
B654191:L654191:{c.instructions+=2;NFSU2_TR(0x654191);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+12))<(r4(U+8))));
w4(U+12,u32(u32(r4(R+12))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B654194:{NFSU2_TR(0x654194);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L65419f;}}
}
B654196:L654196:{c.instructions+=3;NFSU2_TR(0x654196);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B65419a:{NFSU2_TR(0x65419a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B65419d:{NFSU2_TR(0x65419d);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B65419f:L65419f:{c.instructions+=1;NFSU2_TR(0x65419f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6541b4;}}
}
B6541a1:L6541a1:{c.instructions+=2;NFSU2_TR(0x6541a1);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x40ull))));
}
B6541a5:{NFSU2_TR(0x6541a5);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L6541b4;}}
}
B6541a7:L6541a7:{c.instructions+=3;NFSU2_TR(0x6541a7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6541aa:{NFSU2_TR(0x6541aa);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6541ad:{NFSU2_TR(0x6541ad);
u8 U[16];
w4(U+0,u32(u32(u32(0xfffffef0ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+24),4);
s4(u32(r4(U+8)),r4(U+12));
}
B6541b4:L6541b4:{c.instructions+=3;NFSU2_TR(0x6541b4);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B6541b6:{NFSU2_TR(0x6541b6);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+4))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6541b9:{NFSU2_TR(0x6541b9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L654256;}}
}
B6541bf:L6541bf:{c.instructions+=2;NFSU2_TR(0x6541bf);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+4))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6541c2:{NFSU2_TR(0x6541c2);
if(r1(R+518)){{goto L654256;}}
}
B6541c8:L6541c8:{c.instructions+=2;NFSU2_TR(0x6541c8);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+4))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6541cb:{NFSU2_TR(0x6541cb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L654256;}}
}
B6541d1:L6541d1:{c.instructions+=4;NFSU2_TR(0x6541d1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6541d4:{NFSU2_TR(0x6541d4);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6541d7:{NFSU2_TR(0x6541d7);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6541d9:{NFSU2_TR(0x6541d9);
if(r1(R+518)){{goto L65421f;}}
}
B6541db:L6541db:{c.instructions+=2;NFSU2_TR(0x6541db);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6541df:{NFSU2_TR(0x6541df);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L65421f;}}
}
B6541e1:L6541e1:{c.instructions+=4;NFSU2_TR(0x6541e1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6541e4:{NFSU2_TR(0x6541e4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6541e5:{NFSU2_TR(0x6541e5);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6541e6:{NFSU2_TR(0x6541e6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6541ebull));
TAIL_STATIC(0x64f7f1u,64f);
}
B6541eb:L6541eb:{c.instructions+=1;NFSU2_TR(0x6541eb);
{goto L6541f9;}
}
B6541ed:L6541ed:{c.instructions+=3;NFSU2_TR(0x6541ed);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6541f0:{NFSU2_TR(0x6541f0);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6541f4:{NFSU2_TR(0x6541f4);
if(r1(R+518)){{goto L6541ff;}}
}
B6541f6:L6541f6:{c.instructions+=1;NFSU2_TR(0x6541f6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6541f9:L6541f9:{c.instructions+=2;NFSU2_TR(0x6541f9);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6541fb:{NFSU2_TR(0x6541fb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6541edu);}goto L6541ed;}}
}
B6541fd:L6541fd:{c.instructions+=1;NFSU2_TR(0x6541fd);
{goto L65421f;}
}
B6541ff:L6541ff:{c.instructions+=6;NFSU2_TR(0x6541ff);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B654202:{NFSU2_TR(0x654202);
u8 U[4];
w4(U+0,u32(0x7b4238ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B654207:{NFSU2_TR(0x654207);
u8 U[4];
w4(U+0,u32(0xc06ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65420c:{NFSU2_TR(0x65420c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65420d:{NFSU2_TR(0x65420d);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B654210:{NFSU2_TR(0x654210);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x654215ull));
TAIL_STATIC(0x64f580u,64f);
}
B654215:L654215:{c.instructions+=2;NFSU2_TR(0x654215);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B654218:{NFSU2_TR(0x654218);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B65421f:L65421f:{c.instructions+=2;NFSU2_TR(0x65421f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B654222:{NFSU2_TR(0x654222);
{goto L65422d;}
}
B654224:L654224:{c.instructions+=3;NFSU2_TR(0x654224);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B654227:{NFSU2_TR(0x654227);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B65422b:{NFSU2_TR(0x65422b);
if(r1(R+518)){{goto L654236;}}
}
B65422d:L65422d:{c.instructions+=3;NFSU2_TR(0x65422d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B654230:{NFSU2_TR(0x654230);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B654232:{NFSU2_TR(0x654232);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x654224u);}goto L654224;}}
}
B654234:L654234:{c.instructions+=1;NFSU2_TR(0x654234);
{goto L654256;}
}
B654236:L654236:{c.instructions+=6;NFSU2_TR(0x654236);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B654239:{NFSU2_TR(0x654239);
u8 U[4];
w4(U+0,u32(0x7b4238ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65423e:{NFSU2_TR(0x65423e);
u8 U[4];
w4(U+0,u32(0xc06ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B654243:{NFSU2_TR(0x654243);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B654244:{NFSU2_TR(0x654244);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B654247:{NFSU2_TR(0x654247);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x65424cull));
TAIL_STATIC(0x64f580u,64f);
}
B65424c:L65424c:{c.instructions+=2;NFSU2_TR(0x65424c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B65424f:{NFSU2_TR(0x65424f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B654256:L654256:{c.instructions+=4;NFSU2_TR(0x654256);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B654259:{NFSU2_TR(0x654259);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65425c:{NFSU2_TR(0x65425c);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B65425e:{NFSU2_TR(0x65425e);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B654260:L654260:{c.instructions+=2;NFSU2_TR(0x654260);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B654263:{NFSU2_TR(0x654263);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x654133u);}goto L654133;}}
}
B654269:L654269:{c.instructions+=5;NFSU2_TR(0x654269);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65426c:{NFSU2_TR(0x65426c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65426f:{NFSU2_TR(0x65426f);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B654271:{NFSU2_TR(0x654271);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B654274:{NFSU2_TR(0x654274);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x654117u);}goto L654117;}}
}
B65427a:L65427a:{c.instructions+=2;NFSU2_TR(0x65427a);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B65427e:{NFSU2_TR(0x65427e);
if(r1(R+518)){{goto L6543f1;}}
}
B654284:L654284:{c.instructions+=3;NFSU2_TR(0x654284);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x4ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B654288:{NFSU2_TR(0x654288);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffef0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B65428e:{NFSU2_TR(0x65428e);
if(r1(R+518)){{goto L6542f4;}}
}
B654290:L654290:{c.instructions+=5;NFSU2_TR(0x654290);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B654293:{NFSU2_TR(0x654293);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B654295:{NFSU2_TR(0x654295);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B654296:{NFSU2_TR(0x654296);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+12))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B654299:{NFSU2_TR(0x654299);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6542f4;}}
}
B65429b:L65429b:{c.instructions+=6;NFSU2_TR(0x65429b);
u8 U[16];
w4(U+0,u32(u32(u32(0xfffffef0ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B6542a2:{NFSU2_TR(0x6542a2);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6542a5:{NFSU2_TR(0x6542a5);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6542a8:{NFSU2_TR(0x6542a8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6542ab:{NFSU2_TR(0x6542ab);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6542ae:{NFSU2_TR(0x6542ae);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6542b3ull));
TAIL_STATIC(0x64fbecu,64f);
}
B6542b3:L6542b3:{c.instructions+=2;NFSU2_TR(0x6542b3);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6542b5:{NFSU2_TR(0x6542b5);
if(r1(R+518)){{goto L6542d3;}}
}
B6542b7:L6542b7:{c.instructions+=6;NFSU2_TR(0x6542b7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6542ba:{NFSU2_TR(0x6542ba);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6542bc:{NFSU2_TR(0x6542bc);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6542bf:{NFSU2_TR(0x6542bf);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6542c2:{NFSU2_TR(0x6542c2);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6542c3:{NFSU2_TR(0x6542c3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6542c8ull));
TAIL_STATIC(0x651365u,651);
}
B6542c8:L6542c8:{c.instructions+=2;NFSU2_TR(0x6542c8);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6542cb:{NFSU2_TR(0x6542cb);
if(r1(R+518)){{goto L6542d3;}}
}
B6542cd:L6542cd:{c.instructions+=3;NFSU2_TR(0x6542cd);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B6542ce:{NFSU2_TR(0x6542ce);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+12))<(r4(U+8))));
}
B6542d1:{NFSU2_TR(0x6542d1);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65429bu);}goto L65429b;}}
}
B6542d3:L6542d3:{c.instructions+=2;NFSU2_TR(0x6542d3);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+12))<(r4(U+8))));
}
B6542d6:{NFSU2_TR(0x6542d6);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L6542f4;}}
}
B6542d8:L6542d8:{c.instructions+=7;NFSU2_TR(0x6542d8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6542db:{NFSU2_TR(0x6542db);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6542de:{NFSU2_TR(0x6542de);
u8 U[4];
w4(U+0,u32(0x7b4218ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6542e3:{NFSU2_TR(0x6542e3);
u8 U[4];
w4(U+0,u32(0xbfbull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6542e8:{NFSU2_TR(0x6542e8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6542e9:{NFSU2_TR(0x6542e9);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6542ec:{NFSU2_TR(0x6542ec);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6542f1ull));
TAIL_STATIC(0x64f52au,64f);
}
B6542f1:L6542f1:{c.instructions+=1;NFSU2_TR(0x6542f1);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B6542f4:L6542f4:{c.instructions+=3;NFSU2_TR(0x6542f4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6542f7:{NFSU2_TR(0x6542f7);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6542f9:{NFSU2_TR(0x6542f9);
if(r1(R+518)){{goto L654368;}}
}
B6542fb:L6542fb:{c.instructions+=2;NFSU2_TR(0x6542fb);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x2ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B6542ff:{NFSU2_TR(0x6542ff);
if(r1(R+518)){{goto L65434e;}}
}
B654301:L654301:{c.instructions+=3;NFSU2_TR(0x654301);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B654304:{NFSU2_TR(0x654304);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B654306:{NFSU2_TR(0x654306);
{goto L654368;}
}
B654308:L654308:{c.instructions+=2;NFSU2_TR(0x654308);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x5ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B65430c:{NFSU2_TR(0x65430c);
if(r1(R+518)){{goto L65433b;}}
}
B65430e:L65430e:{c.instructions+=10;NFSU2_TR(0x65430e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B654311:{NFSU2_TR(0x654311);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x7b4204ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+12));
}
B654318:{NFSU2_TR(0x654318);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65431b:{NFSU2_TR(0x65431b);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x7b4204ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+12));
}
B654322:{NFSU2_TR(0x654322);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B654325:{NFSU2_TR(0x654325);
u8 U[4];
w4(U+0,u32(0x7b41d8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65432a:{NFSU2_TR(0x65432a);
u8 U[4];
w4(U+0,u32(0xbbdull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65432f:{NFSU2_TR(0x65432f);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B654330:{NFSU2_TR(0x654330);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B654333:{NFSU2_TR(0x654333);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x654338ull));
TAIL_STATIC(0x64f52au,64f);
}
B654338:L654338:{c.instructions+=1;NFSU2_TR(0x654338);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x1cull))));
}
B65433b:L65433b:{c.instructions+=3;NFSU2_TR(0x65433b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65433e:{NFSU2_TR(0x65433e);
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
B654340:{NFSU2_TR(0x654340);
if(r1(R+518)){{goto L654344;}}
}
B654342:L654342:{c.instructions+=1;NFSU2_TR(0x654342);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
s4(u32(r4(R+0)),r4(U+0));
}
B654344:L654344:{c.instructions+=2;NFSU2_TR(0x654344);
w4(R+0,u32(0x80004005ull));
}
B654349:{NFSU2_TR(0x654349);
{goto L654795;}
}
B65434e:L65434e:{c.instructions+=3;NFSU2_TR(0x65434e);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B654351:{NFSU2_TR(0x654351);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B654353:{NFSU2_TR(0x654353);
if(r1(R+518)){{goto L654368;}}
}
B654355:L654355:{c.instructions+=2;NFSU2_TR(0x654355);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B654356:{NFSU2_TR(0x654356);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x65435bull));
TAIL_STATIC(0x672440u,672);
}
B65435b:L65435b:{c.instructions+=4;NFSU2_TR(0x65435b);
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
B65435d:{NFSU2_TR(0x65435d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B654360:{NFSU2_TR(0x654360);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B654362:{NFSU2_TR(0x654362);
if(r1(R+518)){{goto L654760;}}
}
B654368:L654368:{c.instructions+=3;NFSU2_TR(0x654368);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B65436a:{NFSU2_TR(0x65436a);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B65436d:{NFSU2_TR(0x65436d);
if(r1(R+518)){{goto L65476c;}}
}
B654373:L654373:{c.instructions+=4;NFSU2_TR(0x654373);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+28))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B654376:{NFSU2_TR(0x654376);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B654379:{NFSU2_TR(0x654379);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((R+24),(U+0),4);
}
B65437c:{NFSU2_TR(0x65437c);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6543e4;}}
}
B65437e:L65437e:{c.instructions+=2;NFSU2_TR(0x65437e);
u8 U[4];
w4(U+0,u32(0x14ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B654380:{NFSU2_TR(0x654380);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x654385ull));
TAIL_STATIC(0x645362u,645);
}
B654385:L654385:{c.instructions+=2;NFSU2_TR(0x654385);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B654387:{NFSU2_TR(0x654387);
if(r1(R+518)){{goto L65439b;}}
}
B654389:L654389:{c.instructions+=5;NFSU2_TR(0x654389);
u8 U[4];
w4(U+0,u32(0x7b3fd8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65438e:{NFSU2_TR(0x65438e);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B654390:{NFSU2_TR(0x654390);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B654392:{NFSU2_TR(0x654392);
__builtin_memmove((R+4),(R+0),4);
}
B654394:{NFSU2_TR(0x654394);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x654399ull));
TAIL_STATIC(0x672498u,672);
}
B654399:L654399:{c.instructions+=1;NFSU2_TR(0x654399);
{goto L65439d;}
}
B65439b:L65439b:{c.instructions+=1;NFSU2_TR(0x65439b);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B65439d:L65439d:{c.instructions+=3;NFSU2_TR(0x65439d);
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
B65439f:{NFSU2_TR(0x65439f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+24)),r4(U+0));
}
B6543a1:{NFSU2_TR(0x6543a1);
if(r1(R+518)){{goto L654760;}}
}
B6543a7:L6543a7:{c.instructions+=2;NFSU2_TR(0x6543a7);
u8 U[4];
w4(U+0,u32(0x40ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6543a9:{NFSU2_TR(0x6543a9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6543aeull));
TAIL_STATIC(0x645362u,645);
}
B6543ae:L6543ae:{c.instructions+=2;NFSU2_TR(0x6543ae);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6543b0:{NFSU2_TR(0x6543b0);
if(r1(R+518)){{goto L6543ca;}}
}
B6543b2:L6543b2:{c.instructions+=6;NFSU2_TR(0x6543b2);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6543b5:{NFSU2_TR(0x6543b5);
u8 U[16];
w4(U+0,u32(u32(u32(0xfffffef0ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+4),(U+12),4);
}
B6543bc:{NFSU2_TR(0x6543bc);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6543bf:{NFSU2_TR(0x6543bf);
__builtin_memmove((R+4),(R+0),4);
}
B6543c1:{NFSU2_TR(0x6543c1);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6543c3:{NFSU2_TR(0x6543c3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6543c8ull));
TAIL_STATIC(0x672ec8u,672);
}
B6543c8:L6543c8:{c.instructions+=1;NFSU2_TR(0x6543c8);
{goto L6543cc;}
}
B6543ca:L6543ca:{c.instructions+=1;NFSU2_TR(0x6543ca);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6543cc:L6543cc:{c.instructions+=4;NFSU2_TR(0x6543cc);
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
B6543ce:{NFSU2_TR(0x6543ce);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6543d0:{NFSU2_TR(0x6543d0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6543d3:{NFSU2_TR(0x6543d3);
if(r1(R+518)){{goto L654760;}}
}
B6543d9:L6543d9:{c.instructions+=5;NFSU2_TR(0x6543d9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+24),(U+0),4);
}
B6543db:{NFSU2_TR(0x6543db);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0xcull))));
}
B6543de:{NFSU2_TR(0x6543de);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B6543df:{NFSU2_TR(0x6543df);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+28))<(r4(U+8))));
}
B6543e2:{NFSU2_TR(0x6543e2);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65437eu);}goto L65437e;}}
}
B6543e4:L6543e4:{c.instructions+=4;NFSU2_TR(0x6543e4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6543e7:{NFSU2_TR(0x6543e7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6543ea:{NFSU2_TR(0x6543ea);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B6543ec:{NFSU2_TR(0x6543ec);
{goto L65476c;}
}
B6543f1:L6543f1:{c.instructions+=1;NFSU2_TR(0x6543f1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6543f4:L6543f4:{c.instructions+=2;NFSU2_TR(0x6543f4);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x2ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B6543f8:{NFSU2_TR(0x6543f8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L654770;}}
}
B6543fe:L6543fe:{c.instructions+=2;NFSU2_TR(0x6543fe);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B654401:{NFSU2_TR(0x654401);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L654770;}}
}
B654407:L654407:{c.instructions+=2;NFSU2_TR(0x654407);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(r4(R+12))));
w1(R+523,sborrow<u32>(r4(U+14),r4(R+12)));
w4(U+18,u32(u32(r4(U+14))-u32(r4(R+12))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B65440a:{NFSU2_TR(0x65440a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6546bb;}}
}
B654410:L654410:{c.instructions+=3;NFSU2_TR(0x654410);
u8 U[4];
w4(U+0,u32(0x7b41d0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B654415:{NFSU2_TR(0x654415);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B654418:{NFSU2_TR(0x654418);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x65441dull));
TAIL_STATIC(0x75dd6fu,75d);
}
B65441d:L65441d:{c.instructions+=4;NFSU2_TR(0x65441d);
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
B65441f:{NFSU2_TR(0x65441f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B654420:{NFSU2_TR(0x654420);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B654421:{NFSU2_TR(0x654421);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L654427;}}
}
B654423:L654423:{c.instructions+=2;NFSU2_TR(0x654423);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B654425:{NFSU2_TR(0x654425);
{goto L65443c;}
}
B654427:L654427:{c.instructions+=3;NFSU2_TR(0x654427);
u8 U[4];
w4(U+0,u32(0x7b3decull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65442c:{NFSU2_TR(0x65442c);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B65442f:{NFSU2_TR(0x65442f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x654434ull));
TAIL_STATIC(0x75dd6fu,75d);
}
B654434:L654434:{c.instructions+=4;NFSU2_TR(0x654434);
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
B654436:{NFSU2_TR(0x654436);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B654437:{NFSU2_TR(0x654437);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B654438:{NFSU2_TR(0x654438);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L65446a;}}
}
B65443a:L65443a:{c.instructions+=1;NFSU2_TR(0x65443a);
u8 U[4];
w4(U+0,u32(0xbull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65443c:L65443c:{c.instructions+=3;NFSU2_TR(0x65443c);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B65443e:{NFSU2_TR(0x65443e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B65443f:{NFSU2_TR(0x65443f);
if(r1(R+518)){{goto L65476c;}}
}
B654445:L654445:{c.instructions+=2;NFSU2_TR(0x654445);
u8 U[4];
w4(U+0,u32(0x24ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B654447:{NFSU2_TR(0x654447);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x65444cull));
TAIL_STATIC(0x645362u,645);
}
B65444c:L65444c:{c.instructions+=2;NFSU2_TR(0x65444c);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B65444e:{NFSU2_TR(0x65444e);
if(r1(R+518)){{goto L654459;}}
}
B654450:L654450:{c.instructions+=6;NFSU2_TR(0x654450);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B654451:{NFSU2_TR(0x654451);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B654453:{NFSU2_TR(0x654453);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B654455:{NFSU2_TR(0x654455);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B654456:{NFSU2_TR(0x654456);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B654457:{NFSU2_TR(0x654457);
{goto L6544ca;}
}
B654459:L654459:{c.instructions+=1;NFSU2_TR(0x654459);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B65445b:L65445b:{c.instructions+=1;NFSU2_TR(0x65445b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+24)),r4(U+0));
}
B65445d:L65445d:{c.instructions+=1;NFSU2_TR(0x65445d);
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
B65445f:L65445f:{c.instructions+=1;NFSU2_TR(0x65445f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L65476c;}}
}
B654465:L654465:{c.instructions+=1;NFSU2_TR(0x654465);
{goto L654760;}
}
B65446a:L65446a:{c.instructions+=3;NFSU2_TR(0x65446a);
u8 U[4];
w4(U+0,u32(0x7b41c8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65446f:{NFSU2_TR(0x65446f);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B654472:{NFSU2_TR(0x654472);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x654477ull));
TAIL_STATIC(0x75dd6fu,75d);
}
B654477:L654477:{c.instructions+=4;NFSU2_TR(0x654477);
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
B654479:{NFSU2_TR(0x654479);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B65447a:{NFSU2_TR(0x65447a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B65447b:{NFSU2_TR(0x65447b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L65449b;}}
}
B65447d:L65447d:{c.instructions+=2;NFSU2_TR(0x65447d);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B65447f:{NFSU2_TR(0x65447f);
if(r1(R+518)){{goto L65476c;}}
}
B654485:L654485:{c.instructions+=2;NFSU2_TR(0x654485);
u8 U[4];
w4(U+0,u32(0x24ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B654487:{NFSU2_TR(0x654487);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x65448cull));
TAIL_STATIC(0x645362u,645);
}
B65448c:L65448c:{c.instructions+=2;NFSU2_TR(0x65448c);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B65448e:{NFSU2_TR(0x65448e);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x654459u);}goto L654459;}}
}
B654490:L654490:{c.instructions+=6;NFSU2_TR(0x654490);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B654491:{NFSU2_TR(0x654491);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B654493:{NFSU2_TR(0x654493);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B654495:{NFSU2_TR(0x654495);
u8 U[4];
w4(U+0,u32(0xbull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B654497:{NFSU2_TR(0x654497);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B654499:{NFSU2_TR(0x654499);
{goto L6544ca;}
}
B65449b:L65449b:{c.instructions+=3;NFSU2_TR(0x65449b);
u8 U[4];
w4(U+0,u32(0x7b41c0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6544a0:{NFSU2_TR(0x6544a0);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6544a3:{NFSU2_TR(0x6544a3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6544a8ull));
TAIL_STATIC(0x75dd6fu,75d);
}
B6544a8:L6544a8:{c.instructions+=4;NFSU2_TR(0x6544a8);
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
B6544aa:{NFSU2_TR(0x6544aa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6544ab:{NFSU2_TR(0x6544ab);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6544ac:{NFSU2_TR(0x6544ac);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6544d3;}}
}
B6544ae:L6544ae:{c.instructions+=2;NFSU2_TR(0x6544ae);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6544b0:{NFSU2_TR(0x6544b0);
if(r1(R+518)){{goto L65476c;}}
}
B6544b6:L6544b6:{c.instructions+=2;NFSU2_TR(0x6544b6);
u8 U[4];
w4(U+0,u32(0x24ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6544b8:{NFSU2_TR(0x6544b8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6544bdull));
TAIL_STATIC(0x645362u,645);
}
B6544bd:L6544bd:{c.instructions+=2;NFSU2_TR(0x6544bd);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6544bf:{NFSU2_TR(0x6544bf);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x654459u);}goto L654459;}}
}
B6544c1:L6544c1:{c.instructions+=5;NFSU2_TR(0x6544c1);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6544c2:{NFSU2_TR(0x6544c2);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6544c4:{NFSU2_TR(0x6544c4);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6544c6:{NFSU2_TR(0x6544c6);
u8 U[4];
w4(U+0,u32(0xbull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6544c8:{NFSU2_TR(0x6544c8);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6544ca:L6544ca:{c.instructions+=2;NFSU2_TR(0x6544ca);
__builtin_memmove((R+4),(R+0),4);
}
B6544cc:{NFSU2_TR(0x6544cc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6544d1ull));
TAIL_STATIC(0x672a51u,672);
}
B6544d1:L6544d1:{c.instructions+=1;NFSU2_TR(0x6544d1);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65445bu);}goto L65445b;}
}
B6544d3:L6544d3:{c.instructions+=3;NFSU2_TR(0x6544d3);
u8 U[4];
w4(U+0,u32(0x7b3ddcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6544d8:{NFSU2_TR(0x6544d8);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6544db:{NFSU2_TR(0x6544db);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6544e0ull));
TAIL_STATIC(0x75dd6fu,75d);
}
B6544e0:L6544e0:{c.instructions+=4;NFSU2_TR(0x6544e0);
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
B6544e2:{NFSU2_TR(0x6544e2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6544e3:{NFSU2_TR(0x6544e3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6544e4:{NFSU2_TR(0x6544e4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6544ea;}}
}
B6544e6:L6544e6:{c.instructions+=2;NFSU2_TR(0x6544e6);
u8 U[4];
w4(U+0,u32(0xeull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6544e8:{NFSU2_TR(0x6544e8);
{goto L65452d;}
}
B6544ea:L6544ea:{c.instructions+=3;NFSU2_TR(0x6544ea);
u8 U[4];
w4(U+0,u32(0x7b3dd4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6544ef:{NFSU2_TR(0x6544ef);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6544f2:{NFSU2_TR(0x6544f2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6544f7ull));
TAIL_STATIC(0x75dd6fu,75d);
}
B6544f7:L6544f7:{c.instructions+=4;NFSU2_TR(0x6544f7);
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
B6544f9:{NFSU2_TR(0x6544f9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6544fa:{NFSU2_TR(0x6544fa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6544fb:{NFSU2_TR(0x6544fb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L654501;}}
}
B6544fd:L6544fd:{c.instructions+=2;NFSU2_TR(0x6544fd);
u8 U[4];
w4(U+0,u32(0xfull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6544ff:{NFSU2_TR(0x6544ff);
{goto L65452d;}
}
B654501:L654501:{c.instructions+=3;NFSU2_TR(0x654501);
u8 U[4];
w4(U+0,u32(0x7b3d60ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B654506:{NFSU2_TR(0x654506);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B654509:{NFSU2_TR(0x654509);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x65450eull));
TAIL_STATIC(0x75dd6fu,75d);
}
B65450e:L65450e:{c.instructions+=4;NFSU2_TR(0x65450e);
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
B654510:{NFSU2_TR(0x654510);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B654511:{NFSU2_TR(0x654511);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B654512:{NFSU2_TR(0x654512);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L654518;}}
}
B654514:L654514:{c.instructions+=2;NFSU2_TR(0x654514);
u8 U[4];
w4(U+0,u32(0x19ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B654516:{NFSU2_TR(0x654516);
{goto L65452d;}
}
B654518:L654518:{c.instructions+=3;NFSU2_TR(0x654518);
u8 U[4];
w4(U+0,u32(0x7b3d50ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65451d:{NFSU2_TR(0x65451d);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B654520:{NFSU2_TR(0x654520);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x654525ull));
TAIL_STATIC(0x75dd6fu,75d);
}
B654525:L654525:{c.instructions+=4;NFSU2_TR(0x654525);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B654527:{NFSU2_TR(0x654527);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B654528:{NFSU2_TR(0x654528);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B654529:{NFSU2_TR(0x654529);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L65455e;}}
}
B65452b:L65452b:{c.instructions+=1;NFSU2_TR(0x65452b);
u8 U[4];
w4(U+0,u32(0x1aull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65452d:L65452d:{c.instructions+=4;NFSU2_TR(0x65452d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B654530:{NFSU2_TR(0x654530);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B654532:{NFSU2_TR(0x654532);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B654533:{NFSU2_TR(0x654533);
if(r1(R+518)){{goto L65476c;}}
}
B654539:L654539:{c.instructions+=2;NFSU2_TR(0x654539);
u8 U[4];
w4(U+0,u32(0x24ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65453b:{NFSU2_TR(0x65453b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x654540ull));
TAIL_STATIC(0x645362u,645);
}
B654540:L654540:{c.instructions+=2;NFSU2_TR(0x654540);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B654542:{NFSU2_TR(0x654542);
if(r1(R+518)){{goto L654555;}}
}
B654544:L654544:{c.instructions+=7;NFSU2_TR(0x654544);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B654545:{NFSU2_TR(0x654545);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B654547:{NFSU2_TR(0x654547);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B654549:{NFSU2_TR(0x654549);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65454a:{NFSU2_TR(0x65454a);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65454c:{NFSU2_TR(0x65454c);
__builtin_memmove((R+4),(R+0),4);
}
B65454e:{NFSU2_TR(0x65454e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x654553ull));
TAIL_STATIC(0x672a51u,672);
}
B654553:L654553:{c.instructions+=1;NFSU2_TR(0x654553);
{goto L654557;}
}
B654555:L654555:{c.instructions+=1;NFSU2_TR(0x654555);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B654557:L654557:{c.instructions+=2;NFSU2_TR(0x654557);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+28)),r4(U+0));
}
B654559:{NFSU2_TR(0x654559);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65445du);}goto L65445d;}
}
B65455e:L65455e:{c.instructions+=3;NFSU2_TR(0x65455e);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B654561:{NFSU2_TR(0x654561);
__builtin_memmove((R+0),(R+12),4);
}
B654563:{NFSU2_TR(0x654563);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((R+24),(U+0),4);
}
B654566:L654566:{c.instructions+=4;NFSU2_TR(0x654566);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((R+4),(U+0),1);
}
B654568:{NFSU2_TR(0x654568);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B654569:{NFSU2_TR(0x654569);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B65456b:{NFSU2_TR(0x65456b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x654566u);}goto L654566;}}
}
B65456d:L65456d:{c.instructions+=5;NFSU2_TR(0x65456d);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+24))));
}
B65456f:{NFSU2_TR(0x65456f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(U+0))<(u32(0x4ull))));
}
B654572:{NFSU2_TR(0x654572);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B654574:{NFSU2_TR(0x654574);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B654575:{NFSU2_TR(0x654575);
if(r1(R+512)){{goto L65458c;}}
}
B654577:L654577:{c.instructions+=4;NFSU2_TR(0x654577);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+24),(U+0),4);
}
B654579:{NFSU2_TR(0x654579);
w4(R+8,u32(0x7b3e00ull));
}
B65457e:{NFSU2_TR(0x65457e);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(R+24))-u32(r4(U+4))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B654580:{NFSU2_TR(0x654580);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L65458c;}}
}
B654582:L654582:{c.instructions+=4;NFSU2_TR(0x654582);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B654584:{NFSU2_TR(0x654584);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x4ull))));
}
B654587:{NFSU2_TR(0x654587);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x4ull))));
}
B65458a:{NFSU2_TR(0x65458a);
{goto L654607;}
}
B65458c:L65458c:{c.instructions+=2;NFSU2_TR(0x65458c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
}
B65458e:{NFSU2_TR(0x65458e);
if(r1(R+512)){{goto L6545a7;}}
}
B654590:L654590:{c.instructions+=3;NFSU2_TR(0x654590);
w4(R+28,u32(0x7b3dfcull));
}
B654595:{NFSU2_TR(0x654595);
__builtin_memmove((R+24),(R+12),4);
}
B654597:{NFSU2_TR(0x654597);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
}
B654599:L654599:{c.instructions+=1;NFSU2_TR(0x654599);
u8 U[41];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L65459b;}}
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
__builtin_memmove((U+33),gp(u32(r4(U+17))),1);
__builtin_memmove((U+38),(U+33),1);
__builtin_memmove((U+16),gp(u32(r4(U+0))),1);
__builtin_memmove((U+39),(U+16),1);
w1(R+512,u8((r1(U+39))<(r1(U+38))));
w1(R+523,sborrow<u8>(r1(U+39),r1(U+38)));
w1(U+40,u8(u32(r1(U+39))-u32(r1(U+38))));
w1(R+519,u8(s8(r1(U+40))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+40))==(u8(0x0ull))));
w1(U+35,u8(u32(r1(U+40))&u32(u8(0xffull))));
w1(U+36,u8(__builtin_popcountll(u64(r1(U+35)))));
w1(U+37,u8(u32(r1(U+36))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+37))==(u8(0x0ull))));
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x654599u);}goto L654599;}}
}
B65459b:L65459b:{c.instructions+=1;NFSU2_TR(0x65459b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6545a7;}}
}
B65459d:L65459d:{c.instructions+=4;NFSU2_TR(0x65459d);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x3ull))));
}
B6545a0:{NFSU2_TR(0x6545a0);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6545a2:{NFSU2_TR(0x6545a2);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x3ull))));
}
B6545a5:{NFSU2_TR(0x6545a5);
{goto L654606;}
}
B6545a7:L6545a7:{c.instructions+=2;NFSU2_TR(0x6545a7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(U+0))<(u32(0x4ull))));
}
B6545aa:{NFSU2_TR(0x6545aa);
if(r1(R+512)){{goto L6545c1;}}
}
B6545ac:L6545ac:{c.instructions+=4;NFSU2_TR(0x6545ac);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6545ae:{NFSU2_TR(0x6545ae);
w4(R+4,u32(0x7b3df4ull));
}
B6545b3:{NFSU2_TR(0x6545b3);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(R+8))-u32(r4(U+4))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B6545b5:{NFSU2_TR(0x6545b5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6545c1;}}
}
B6545b7:L6545b7:{c.instructions+=4;NFSU2_TR(0x6545b7);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x4ull))));
}
B6545ba:{NFSU2_TR(0x6545ba);
u8 U[4];
w4(U+0,u32(0xaull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6545bc:{NFSU2_TR(0x6545bc);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x4ull))));
}
B6545bf:{NFSU2_TR(0x6545bf);
{goto L654606;}
}
B6545c1:L6545c1:{c.instructions+=2;NFSU2_TR(0x6545c1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(U+0))<(u32(0x5ull))));
}
B6545c4:{NFSU2_TR(0x6545c4);
if(r1(R+512)){{goto L6545e0;}}
}
B6545c6:L6545c6:{c.instructions+=5;NFSU2_TR(0x6545c6);
u8 U[4];
w4(U+0,u32(0x5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6545c8:{NFSU2_TR(0x6545c8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6545c9:{NFSU2_TR(0x6545c9);
w4(R+28,u32(0x7b3decull));
}
B6545ce:{NFSU2_TR(0x6545ce);
__builtin_memmove((R+24),(R+12),4);
}
B6545d0:{NFSU2_TR(0x6545d0);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
}
B6545d2:L6545d2:{c.instructions+=1;NFSU2_TR(0x6545d2);
u8 U[41];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L6545d4;}}
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
__builtin_memmove((U+33),gp(u32(r4(U+17))),1);
__builtin_memmove((U+38),(U+33),1);
__builtin_memmove((U+16),gp(u32(r4(U+0))),1);
__builtin_memmove((U+39),(U+16),1);
w1(R+512,u8((r1(U+39))<(r1(U+38))));
w1(R+523,sborrow<u8>(r1(U+39),r1(U+38)));
w1(U+40,u8(u32(r1(U+39))-u32(r1(U+38))));
w1(R+519,u8(s8(r1(U+40))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+40))==(u8(0x0ull))));
w1(U+35,u8(u32(r1(U+40))&u32(u8(0xffull))));
w1(U+36,u8(__builtin_popcountll(u64(r1(U+35)))));
w1(U+37,u8(u32(r1(U+36))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+37))==(u8(0x0ull))));
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6545d2u);}goto L6545d2;}}
}
B6545d4:L6545d4:{c.instructions+=1;NFSU2_TR(0x6545d4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6545e0;}}
}
B6545d6:L6545d6:{c.instructions+=4;NFSU2_TR(0x6545d6);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x5ull))));
}
B6545d9:{NFSU2_TR(0x6545d9);
u8 U[4];
w4(U+0,u32(0xbull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6545db:{NFSU2_TR(0x6545db);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x5ull))));
}
B6545de:{NFSU2_TR(0x6545de);
{goto L654606;}
}
B6545e0:L6545e0:{c.instructions+=2;NFSU2_TR(0x6545e0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(U+0))<(u32(0x6ull))));
}
B6545e3:{NFSU2_TR(0x6545e3);
if(r1(R+512)){{goto L654770;}}
}
B6545e9:L6545e9:{c.instructions+=5;NFSU2_TR(0x6545e9);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6545eb:{NFSU2_TR(0x6545eb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6545ec:{NFSU2_TR(0x6545ec);
w4(R+28,u32(0x7b3de4ull));
}
B6545f1:{NFSU2_TR(0x6545f1);
__builtin_memmove((R+24),(R+12),4);
}
B6545f3:{NFSU2_TR(0x6545f3);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
}
B6545f5:L6545f5:{c.instructions+=1;NFSU2_TR(0x6545f5);
u8 U[47];
w1(U+36,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+36)){{goto L6545f8;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+18),(R+28),4);
w4(U+22,u32(u32(r4(R+28))+u32(u32(0x2ull))));
w4(U+26,u32(r1(R+522)));
w4(U+30,u32(u32(u32(0x4ull))*u32(r4(U+26))));
w4(R+28,u32(u32(r4(U+22))-u32(r4(U+30))));
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+24))+u32(u32(0x2ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x4ull))*u32(r4(U+8))));
w4(R+24,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+34),gp(u32(r4(U+18))),2);
__builtin_memmove((U+41),(U+34),2);
__builtin_memmove((U+16),gp(u32(r4(U+0))),2);
__builtin_memmove((U+43),(U+16),2);
w1(R+512,u8((r2(U+43))<(r2(U+41))));
w1(R+523,sborrow<u16>(r2(U+43),r2(U+41)));
w2(U+45,u16(u32(r2(U+43))-u32(r2(U+41))));
w1(R+519,u8(s16(r2(U+45))<s16(u16(0x0ull))));
w1(R+518,u8((r2(U+45))==(u16(0x0ull))));
w2(U+37,u16(u32(r2(U+45))&u32(u16(0xffull))));
w1(U+39,u8(__builtin_popcountll(u64(r2(U+37)))));
w1(U+40,u8(u32(r1(U+39))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+40))==(u8(0x0ull))));
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6545f5u);}goto L6545f5;}}
}
B6545f8:L6545f8:{c.instructions+=1;NFSU2_TR(0x6545f8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L654770;}}
}
B6545fe:L6545fe:{c.instructions+=3;NFSU2_TR(0x6545fe);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x6ull))));
}
B654601:{NFSU2_TR(0x654601);
u8 U[4];
w4(U+0,u32(0xcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B654603:{NFSU2_TR(0x654603);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x6ull))));
}
B654606:L654606:{c.instructions+=1;NFSU2_TR(0x654606);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B654607:L654607:{c.instructions+=2;NFSU2_TR(0x654607);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B65460a:{NFSU2_TR(0x65460a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L65464a;}}
}
B65460c:L65460c:{c.instructions+=3;NFSU2_TR(0x65460c);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+12))),1);
__builtin_memmove((R+0),(U+0),1);
}
B65460e:{NFSU2_TR(0x65460e);
u8 U[1];
w1(R+523,sborrow<u8>(r1(R+0),u8(0x31ull)));
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x31ull))));
w1(R+519,u8(s8(r1(U+0))<s8(u8(0x0ull))));
}
B654610:{NFSU2_TR(0x654610);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L654770;}}
}
B654616:L654616:{c.instructions+=2;NFSU2_TR(0x654616);
u8 U[1];
w1(R+523,sborrow<u8>(r1(R+0),u8(0x35ull)));
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x35ull))));
w1(R+519,u8(s8(r1(U+0))<s8(u8(0x0ull))));
}
B654618:{NFSU2_TR(0x654618);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L654770;}}
}
B65461e:L65461e:{c.instructions+=2;NFSU2_TR(0x65461e);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B654622:{NFSU2_TR(0x654622);
if(r1(R+518)){{goto L65476c;}}
}
B654628:L654628:{c.instructions+=2;NFSU2_TR(0x654628);
u8 U[4];
w4(U+0,u32(0x24ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65462a:{NFSU2_TR(0x65462a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x65462full));
TAIL_STATIC(0x645362u,645);
}
B65462f:L65462f:{c.instructions+=2;NFSU2_TR(0x65462f);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B654631:{NFSU2_TR(0x654631);
if(r1(R+518)){{goto L6546ad;}}
}
B654633:L654633:{c.instructions+=7;NFSU2_TR(0x654633);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+12))),1);
w4(R+4,u32(s32(s8(r1(U+0)))));
}
B654636:{NFSU2_TR(0x654636);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B654638:{NFSU2_TR(0x654638);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x30ull))));
}
B65463b:{NFSU2_TR(0x65463b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65463c:{NFSU2_TR(0x65463c);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65463e:{NFSU2_TR(0x65463e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65463f:{NFSU2_TR(0x65463f);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B654641:L654641:{c.instructions+=2;NFSU2_TR(0x654641);
__builtin_memmove((R+4),(R+0),4);
}
B654643:{NFSU2_TR(0x654643);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x654648ull));
TAIL_STATIC(0x672a51u,672);
}
B654648:L654648:{c.instructions+=1;NFSU2_TR(0x654648);
{goto L6546af;}
}
B65464a:L65464a:{c.instructions+=2;NFSU2_TR(0x65464a);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B65464d:{NFSU2_TR(0x65464d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L654770;}}
}
B654653:L654653:{c.instructions+=3;NFSU2_TR(0x654653);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+12))),1);
__builtin_memmove((R+0),(U+0),1);
}
B654655:{NFSU2_TR(0x654655);
u8 U[1];
w1(R+523,sborrow<u8>(r1(R+0),u8(0x31ull)));
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x31ull))));
w1(R+519,u8(s8(r1(U+0))<s8(u8(0x0ull))));
}
B654657:{NFSU2_TR(0x654657);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L654770;}}
}
B65465d:L65465d:{c.instructions+=2;NFSU2_TR(0x65465d);
u8 U[1];
w1(R+523,sborrow<u8>(r1(R+0),u8(0x35ull)));
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x35ull))));
w1(R+519,u8(s8(r1(U+0))<s8(u8(0x0ull))));
}
B65465f:{NFSU2_TR(0x65465f);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L654770;}}
}
B654665:L654665:{c.instructions+=2;NFSU2_TR(0x654665);
u8 U[7];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x78ull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B654669:{NFSU2_TR(0x654669);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L654770;}}
}
B65466f:L65466f:{c.instructions+=3;NFSU2_TR(0x65466f);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B654672:{NFSU2_TR(0x654672);
u8 U[1];
w1(R+523,sborrow<u8>(r1(R+0),u8(0x31ull)));
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x31ull))));
w1(R+519,u8(s8(r1(U+0))<s8(u8(0x0ull))));
}
B654674:{NFSU2_TR(0x654674);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L654770;}}
}
B65467a:L65467a:{c.instructions+=2;NFSU2_TR(0x65467a);
u8 U[1];
w1(R+523,sborrow<u8>(r1(R+0),u8(0x35ull)));
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x35ull))));
w1(R+519,u8(s8(r1(U+0))<s8(u8(0x0ull))));
}
B65467c:{NFSU2_TR(0x65467c);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L654770;}}
}
B654682:L654682:{c.instructions+=2;NFSU2_TR(0x654682);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B654686:{NFSU2_TR(0x654686);
if(r1(R+518)){{goto L65476c;}}
}
B65468c:L65468c:{c.instructions+=2;NFSU2_TR(0x65468c);
u8 U[4];
w4(U+0,u32(0x24ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65468e:{NFSU2_TR(0x65468e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x654693ull));
TAIL_STATIC(0x645362u,645);
}
B654693:L654693:{c.instructions+=2;NFSU2_TR(0x654693);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B654695:{NFSU2_TR(0x654695);
if(r1(R+518)){{goto L6546ad;}}
}
B654697:L654697:{c.instructions+=10;NFSU2_TR(0x654697);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(s32(s8(r1(U+4)))));
}
B65469b:{NFSU2_TR(0x65469b);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65469d:{NFSU2_TR(0x65469d);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x30ull))));
}
B6546a0:{NFSU2_TR(0x6546a0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6546a1:{NFSU2_TR(0x6546a1);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+12))),1);
w4(R+4,u32(s32(s8(r1(U+0)))));
}
B6546a4:{NFSU2_TR(0x6546a4);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x30ull))));
}
B6546a7:{NFSU2_TR(0x6546a7);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6546a8:{NFSU2_TR(0x6546a8);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6546a9:{NFSU2_TR(0x6546a9);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6546ab:{NFSU2_TR(0x6546ab);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x654641u);}goto L654641;}
}
B6546ad:L6546ad:{c.instructions+=1;NFSU2_TR(0x6546ad);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6546af:L6546af:{c.instructions+=4;NFSU2_TR(0x6546af);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6546b2:{NFSU2_TR(0x6546b2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B6546b4:{NFSU2_TR(0x6546b4);
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
B6546b6:{NFSU2_TR(0x6546b6);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65445fu);}goto L65445f;}
}
B6546bb:L6546bb:{c.instructions+=2;NFSU2_TR(0x6546bb);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6546bf:{NFSU2_TR(0x6546bf);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L654770;}}
}
B6546c5:L6546c5:{c.instructions+=6;NFSU2_TR(0x6546c5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6546c8:{NFSU2_TR(0x6546c8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6546cb:{NFSU2_TR(0x6546cb);
u8 U[4];
w4(U+0,u32(0x5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6546cd:{NFSU2_TR(0x6546cd);
w4(R+28,u32(0x7aec20ull));
}
B6546d2:{NFSU2_TR(0x6546d2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6546d3:{NFSU2_TR(0x6546d3);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B6546d5:L6546d5:{c.instructions+=1;NFSU2_TR(0x6546d5);
u8 U[41];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L6546d7;}}
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
__builtin_memmove((U+33),gp(u32(r4(U+17))),1);
__builtin_memmove((U+38),(U+33),1);
__builtin_memmove((U+16),gp(u32(r4(U+0))),1);
__builtin_memmove((U+39),(U+16),1);
w1(R+512,u8((r1(U+39))<(r1(U+38))));
w1(R+523,sborrow<u8>(r1(U+39),r1(U+38)));
w1(U+40,u8(u32(r1(U+39))-u32(r1(U+38))));
w1(R+519,u8(s8(r1(U+40))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+40))==(u8(0x0ull))));
w1(U+35,u8(u32(r1(U+40))&u32(u8(0xffull))));
w1(U+36,u8(__builtin_popcountll(u64(r1(U+35)))));
w1(U+37,u8(u32(r1(U+36))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+37))==(u8(0x0ull))));
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6546d5u);}goto L6546d5;}}
}
B6546d7:L6546d7:{c.instructions+=1;NFSU2_TR(0x6546d7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L654770;}}
}
B6546dd:L6546dd:{c.instructions+=3;NFSU2_TR(0x6546dd);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B6546df:{NFSU2_TR(0x6546df);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6546e2:{NFSU2_TR(0x6546e2);
if(r1(R+518)){{goto L65476c;}}
}
B6546e8:L6546e8:{c.instructions+=2;NFSU2_TR(0x6546e8);
u8 U[4];
w4(U+0,u32(0x40ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6546ea:{NFSU2_TR(0x6546ea);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6546efull));
TAIL_STATIC(0x645362u,645);
}
B6546ef:L6546ef:{c.instructions+=2;NFSU2_TR(0x6546ef);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6546f1:{NFSU2_TR(0x6546f1);
if(r1(R+518)){{goto L6546fe;}}
}
B6546f3:L6546f3:{c.instructions+=2;NFSU2_TR(0x6546f3);
__builtin_memmove((R+4),(R+0),4);
}
B6546f5:{NFSU2_TR(0x6546f5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6546faull));
TAIL_STATIC(0x672bc6u,672);
}
B6546fa:L6546fa:{c.instructions+=2;NFSU2_TR(0x6546fa);
__builtin_memmove((R+24),(R+0),4);
}
B6546fc:{NFSU2_TR(0x6546fc);
{goto L654700;}
}
B6546fe:L6546fe:{c.instructions+=1;NFSU2_TR(0x6546fe);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B654700:L654700:{c.instructions+=2;NFSU2_TR(0x654700);
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
B654702:{NFSU2_TR(0x654702);
if(r1(R+518)){{goto L654760;}}
}
B654704:L654704:{c.instructions+=7;NFSU2_TR(0x654704);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B654706:{NFSU2_TR(0x654706);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B654707:{NFSU2_TR(0x654707);
u8 U[4];
w4(U+0,u32(0x24ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B654709:{NFSU2_TR(0x654709);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B65470c:{NFSU2_TR(0x65470c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B65470f:{NFSU2_TR(0x65470f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
w4(U+4,u32(0x202ull));
s4(u32(r4(U+0)),r4(U+4));
}
B654716:{NFSU2_TR(0x654716);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x65471bull));
TAIL_STATIC(0x645362u,645);
}
B65471b:L65471b:{c.instructions+=2;NFSU2_TR(0x65471b);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B65471d:{NFSU2_TR(0x65471d);
if(r1(R+518)){{goto L654733;}}
}
B65471f:L65471f:{c.instructions+=7;NFSU2_TR(0x65471f);
u8 U[4];
w4(U+0,u32(0x200ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B654724:{NFSU2_TR(0x654724);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B654725:{NFSU2_TR(0x654725);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B654726:{NFSU2_TR(0x654726);
u8 U[4];
w4(U+0,u32(0xdull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B654728:{NFSU2_TR(0x654728);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65472a:{NFSU2_TR(0x65472a);
__builtin_memmove((R+4),(R+0),4);
}
B65472c:{NFSU2_TR(0x65472c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x654731ull));
TAIL_STATIC(0x672a51u,672);
}
B654731:L654731:{c.instructions+=1;NFSU2_TR(0x654731);
{goto L654735;}
}
B654733:L654733:{c.instructions+=1;NFSU2_TR(0x654733);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B654735:L654735:{c.instructions+=3;NFSU2_TR(0x654735);
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
B654737:{NFSU2_TR(0x654737);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B65473a:{NFSU2_TR(0x65473a);
if(r1(R+518)){{goto L654760;}}
}
B65473c:L65473c:{c.instructions+=2;NFSU2_TR(0x65473c);
u8 U[4];
w4(U+0,u32(0x40ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65473e:{NFSU2_TR(0x65473e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x654743ull));
TAIL_STATIC(0x645362u,645);
}
B654743:L654743:{c.instructions+=2;NFSU2_TR(0x654743);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B654745:{NFSU2_TR(0x654745);
if(r1(R+518)){{goto L654757;}}
}
B654747:L654747:{c.instructions+=6;NFSU2_TR(0x654747);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B65474a:{NFSU2_TR(0x65474a);
__builtin_memmove((R+4),(R+0),4);
}
B65474c:{NFSU2_TR(0x65474c);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65474d:{NFSU2_TR(0x65474d);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65474e:{NFSU2_TR(0x65474e);
u8 U[4];
w4(U+0,u32(0x5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B654750:{NFSU2_TR(0x654750);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x654755ull));
TAIL_STATIC(0x672f32u,672);
}
B654755:L654755:{c.instructions+=1;NFSU2_TR(0x654755);
{goto L654759;}
}
B654757:L654757:{c.instructions+=1;NFSU2_TR(0x654757);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B654759:L654759:{c.instructions+=3;NFSU2_TR(0x654759);
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
B65475b:{NFSU2_TR(0x65475b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B65475e:{NFSU2_TR(0x65475e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L654767;}}
}
B654760:L654760:{c.instructions+=2;NFSU2_TR(0x654760);
w4(R+0,u32(0x8007000eull));
}
B654765:{NFSU2_TR(0x654765);
{goto L654795;}
}
B654767:L654767:{c.instructions+=2;NFSU2_TR(0x654767);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65476a:{NFSU2_TR(0x65476a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+0)),r4(U+0));
}
B65476c:L65476c:{c.instructions+=2;NFSU2_TR(0x65476c);
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
B65476e:{NFSU2_TR(0x65476e);
{goto L654795;}
}
B654770:L654770:{c.instructions+=2;NFSU2_TR(0x654770);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B654774:{NFSU2_TR(0x654774);
if(r1(R+518)){{goto L654792;}}
}
B654776:L654776:{c.instructions+=7;NFSU2_TR(0x654776);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B654779:{NFSU2_TR(0x654779);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B65477c:{NFSU2_TR(0x65477c);
u8 U[4];
w4(U+0,u32(0x7b41a4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B654781:{NFSU2_TR(0x654781);
u8 U[4];
w4(U+0,u32(0xbbcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B654786:{NFSU2_TR(0x654786);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B654787:{NFSU2_TR(0x654787);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B65478a:{NFSU2_TR(0x65478a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x65478full));
TAIL_STATIC(0x64f52au,64f);
}
B65478f:L65478f:{c.instructions+=1;NFSU2_TR(0x65478f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B654792:L654792:{c.instructions+=2;NFSU2_TR(0x654792);
w1(R+512,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B654794:{NFSU2_TR(0x654794);
u8 U[6];
w1(R+523,scarry<u32>(r4(R+0),u32(0x1ull)));
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B654795:L654795:{c.instructions+=5;NFSU2_TR(0x654795);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B654796:{NFSU2_TR(0x654796);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B654797:{NFSU2_TR(0x654797);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B654798:{NFSU2_TR(0x654798);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B654799:{NFSU2_TR(0x654799);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x20ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B65479c:L65479c:{c.instructions+=12;NFSU2_TR(0x65479c);
__builtin_memmove((R+28),(R+28),4);
}
B65479e:{NFSU2_TR(0x65479e);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65479f:{NFSU2_TR(0x65479f);
__builtin_memmove((R+20),(R+16),4);
}
B6547a1:{NFSU2_TR(0x6547a1);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6547a2:{NFSU2_TR(0x6547a2);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6547a3:{NFSU2_TR(0x6547a3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6547a6:{NFSU2_TR(0x6547a6);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6547a7:{NFSU2_TR(0x6547a7);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B6547a9:{NFSU2_TR(0x6547a9);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6547ab:{NFSU2_TR(0x6547ab);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6547ae:{NFSU2_TR(0x6547ae);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6547b1:{NFSU2_TR(0x6547b1);
if(r1(R+518)){{goto L65489c;}}
}
B6547b7:L6547b7:{c.instructions+=2;NFSU2_TR(0x6547b7);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6547bb:{NFSU2_TR(0x6547bb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L65489c;}}
}
B6547c1:L6547c1:{c.instructions+=7;NFSU2_TR(0x6547c1);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6547c2:{NFSU2_TR(0x6547c2);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6547c3:{NFSU2_TR(0x6547c3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6547c6:{NFSU2_TR(0x6547c6);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6547c8:{NFSU2_TR(0x6547c8);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6547cb:{NFSU2_TR(0x6547cb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6547ce:{NFSU2_TR(0x6547ce);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6547ef;}}
}
B6547d0:L6547d0:{c.instructions+=10;NFSU2_TR(0x6547d0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6547d1:{NFSU2_TR(0x6547d1);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+0),(U+0),4);
}
B6547d4:{NFSU2_TR(0x6547d4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6547d5:{NFSU2_TR(0x6547d5);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6547d7:{NFSU2_TR(0x6547d7);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6547da:{NFSU2_TR(0x6547da);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6547db:{NFSU2_TR(0x6547db);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6547dc:{NFSU2_TR(0x6547dc);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6547dd:{NFSU2_TR(0x6547dd);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6547df:{NFSU2_TR(0x6547df);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6547e4ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6540dfu);}goto L6540df;}
}
B6547e4:L6547e4:{c.instructions+=2;NFSU2_TR(0x6547e4);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6547e6:{NFSU2_TR(0x6547e6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L654886;}}
}
B6547ec:L6547ec:{c.instructions+=1;NFSU2_TR(0x6547ec);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6547ef:L6547ef:{c.instructions+=2;NFSU2_TR(0x6547ef);
u8 U[4];
w4(U+0,u32(0x50ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6547f1:{NFSU2_TR(0x6547f1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6547f6ull));
TAIL_STATIC(0x645362u,645);
}
B6547f6:L6547f6:{c.instructions+=2;NFSU2_TR(0x6547f6);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6547f8:{NFSU2_TR(0x6547f8);
if(r1(R+518)){{goto L65480c;}}
}
B6547fa:L6547fa:{c.instructions+=8;NFSU2_TR(0x6547fa);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6547fb:{NFSU2_TR(0x6547fb);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6547fd:{NFSU2_TR(0x6547fd);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6547fe:{NFSU2_TR(0x6547fe);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6547ff:{NFSU2_TR(0x6547ff);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B654800:{NFSU2_TR(0x654800);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B654801:{NFSU2_TR(0x654801);
__builtin_memmove((R+4),(R+0),4);
}
B654803:{NFSU2_TR(0x654803);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x654808ull));
TAIL_STATIC(0x672d7bu,672);
}
B654808:L654808:{c.instructions+=2;NFSU2_TR(0x654808);
__builtin_memmove((R+24),(R+0),4);
}
B65480a:{NFSU2_TR(0x65480a);
{goto L65480e;}
}
B65480c:L65480c:{c.instructions+=1;NFSU2_TR(0x65480c);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B65480e:L65480e:{c.instructions+=2;NFSU2_TR(0x65480e);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B654810:{NFSU2_TR(0x654810);
if(r1(R+518)){{goto L654886;}}
}
B654812:L654812:{c.instructions+=2;NFSU2_TR(0x654812);
u8 U[22];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(r4(R+12))));
w1(R+523,sborrow<u32>(r4(U+14),r4(R+12)));
w4(U+18,u32(u32(r4(U+14))-u32(r4(R+12))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B654815:{NFSU2_TR(0x654815);
if(r1(R+518)){{goto L654821;}}
}
B654817:L654817:{c.instructions+=3;NFSU2_TR(0x654817);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B65481a:{NFSU2_TR(0x65481a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B65481c:{NFSU2_TR(0x65481c);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x65481full));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B65481f:L65481f:{c.instructions+=1;NFSU2_TR(0x65481f);
{goto L654842;}
}
B654821:L654821:{c.instructions+=2;NFSU2_TR(0x654821);
u8 U[4];
w4(U+0,u32(0x40ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B654823:{NFSU2_TR(0x654823);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x654828ull));
TAIL_STATIC(0x645362u,645);
}
B654828:L654828:{c.instructions+=2;NFSU2_TR(0x654828);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B65482a:{NFSU2_TR(0x65482a);
if(r1(R+518)){{goto L654840;}}
}
B65482c:L65482c:{c.instructions+=6;NFSU2_TR(0x65482c);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B65482f:{NFSU2_TR(0x65482f);
__builtin_memmove((R+4),(R+0),4);
}
B654831:{NFSU2_TR(0x654831);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B654834:{NFSU2_TR(0x654834);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B654837:{NFSU2_TR(0x654837);
u8 U[4];
w4(U+0,u32(0x6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B654839:{NFSU2_TR(0x654839);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x65483eull));
TAIL_STATIC(0x672f32u,672);
}
B65483e:L65483e:{c.instructions+=1;NFSU2_TR(0x65483e);
{goto L654842;}
}
B654840:L654840:{c.instructions+=1;NFSU2_TR(0x654840);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B654842:L654842:{c.instructions+=3;NFSU2_TR(0x654842);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B654844:{NFSU2_TR(0x654844);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B654847:{NFSU2_TR(0x654847);
if(r1(R+518)){{goto L654886;}}
}
B654849:L654849:{c.instructions+=2;NFSU2_TR(0x654849);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B65484c:{NFSU2_TR(0x65484c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x654851ull));
TAIL_STATIC(0x672440u,672);
}
B654851:L654851:{c.instructions+=3;NFSU2_TR(0x654851);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B654854:{NFSU2_TR(0x654854);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B654857:{NFSU2_TR(0x654857);
if(r1(R+518)){{goto L654863;}}
}
B654859:L654859:{c.instructions+=4;NFSU2_TR(0x654859);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B65485c:{NFSU2_TR(0x65485c);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65485d:{NFSU2_TR(0x65485d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65485e:{NFSU2_TR(0x65485e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x654863ull));
TAIL_STATIC(0x64f92eu,64f);
}
B654863:L654863:{c.instructions+=2;NFSU2_TR(0x654863);
u8 U[4];
w4(U+0,u32(0x14ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B654865:{NFSU2_TR(0x654865);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x65486aull));
TAIL_STATIC(0x645362u,645);
}
B65486a:L65486a:{c.instructions+=2;NFSU2_TR(0x65486a);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B65486c:{NFSU2_TR(0x65486c);
if(r1(R+518)){{goto L654880;}}
}
B65486e:L65486e:{c.instructions+=5;NFSU2_TR(0x65486e);
u8 U[4];
w4(U+0,u32(0x7b4088ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B654873:{NFSU2_TR(0x654873);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B654874:{NFSU2_TR(0x654874);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B654877:{NFSU2_TR(0x654877);
__builtin_memmove((R+4),(R+0),4);
}
B654879:{NFSU2_TR(0x654879);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x65487eull));
TAIL_STATIC(0x672498u,672);
}
B65487e:L65487e:{c.instructions+=1;NFSU2_TR(0x65487e);
{goto L654882;}
}
B654880:L654880:{c.instructions+=1;NFSU2_TR(0x654880);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B654882:L654882:{c.instructions+=2;NFSU2_TR(0x654882);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B654884:{NFSU2_TR(0x654884);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L65488a;}}
}
B654886:L654886:{c.instructions+=2;NFSU2_TR(0x654886);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B654888:{NFSU2_TR(0x654888);
{goto L654896;}
}
B65488a:L65488a:{c.instructions+=4;NFSU2_TR(0x65488a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B65488d:{NFSU2_TR(0x65488d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65488e:{NFSU2_TR(0x65488e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B654891:{NFSU2_TR(0x654891);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x654896ull));
TAIL_STATIC(0x650571u,650);
}
B654896:L654896:{c.instructions+=4;NFSU2_TR(0x654896);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B654897:{NFSU2_TR(0x654897);
__builtin_memmove((R+0),(R+24),4);
}
B654899:{NFSU2_TR(0x654899);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B65489a:{NFSU2_TR(0x65489a);
{goto L65489e;}
}
B65489c:L65489c:{c.instructions+=1;NFSU2_TR(0x65489c);
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
B65489e:L65489e:{c.instructions+=3;NFSU2_TR(0x65489e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B65489f:{NFSU2_TR(0x65489f);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6548a0:{NFSU2_TR(0x6548a0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6548a3:L6548a3:{c.instructions+=15;NFSU2_TR(0x6548a3);
__builtin_memmove((R+28),(R+28),4);
}
B6548a5:{NFSU2_TR(0x6548a5);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6548a6:{NFSU2_TR(0x6548a6);
__builtin_memmove((R+20),(R+16),4);
}
B6548a8:{NFSU2_TR(0x6548a8);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6548a9:{NFSU2_TR(0x6548a9);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6548aa:{NFSU2_TR(0x6548aa);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6548ab:{NFSU2_TR(0x6548ab);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6548ac:{NFSU2_TR(0x6548ac);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6548ad:{NFSU2_TR(0x6548ad);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6548b0:{NFSU2_TR(0x6548b0);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B6548b2:{NFSU2_TR(0x6548b2);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6548b4:{NFSU2_TR(0x6548b4);
__builtin_memmove((R+24),(R+4),4);
}
B6548b6:{NFSU2_TR(0x6548b6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6548b9:{NFSU2_TR(0x6548b9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6548bc:{NFSU2_TR(0x6548bc);
if(r1(R+518)){{goto L6548dd;}}
}
B6548be:L6548be:{c.instructions+=2;NFSU2_TR(0x6548be);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6548c2:{NFSU2_TR(0x6548c2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6548dd;}}
}
B6548c4:L6548c4:{c.instructions+=11;NFSU2_TR(0x6548c4);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6548c5:{NFSU2_TR(0x6548c5);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6548c8:{NFSU2_TR(0x6548c8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6548c9:{NFSU2_TR(0x6548c9);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6548cb:{NFSU2_TR(0x6548cb);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6548ce:{NFSU2_TR(0x6548ce);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x10ull))));
}
B6548d1:{NFSU2_TR(0x6548d1);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6548d2:{NFSU2_TR(0x6548d2);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6548d3:{NFSU2_TR(0x6548d3);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6548d4:{NFSU2_TR(0x6548d4);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6548d5:{NFSU2_TR(0x6548d5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6548daull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6540dfu);}goto L6540df;}
}
B6548da:L6548da:{c.instructions+=1;NFSU2_TR(0x6548da);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6548dd:L6548dd:{c.instructions+=4;NFSU2_TR(0x6548dd);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6548e0:{NFSU2_TR(0x6548e0);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6548e3:{NFSU2_TR(0x6548e3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6548e6:{NFSU2_TR(0x6548e6);
if(r1(R+518)){{goto L654932;}}
}
B6548e8:L6548e8:{c.instructions+=2;NFSU2_TR(0x6548e8);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6548ea:{NFSU2_TR(0x6548ea);
if(r1(R+518)){{goto L65491f;}}
}
B6548ec:L6548ec:{c.instructions+=2;NFSU2_TR(0x6548ec);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x9ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6548f0:{NFSU2_TR(0x6548f0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L65491f;}}
}
B6548f2:L6548f2:{c.instructions+=3;NFSU2_TR(0x6548f2);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6548f3:{NFSU2_TR(0x6548f3);
__builtin_memmove((R+4),(R+24),4);
}
B6548f5:{NFSU2_TR(0x6548f5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6548faull));
TAIL_STATIC(0x64fae7u,64f);
}
B6548fa:L6548fa:{c.instructions+=2;NFSU2_TR(0x6548fa);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6548fc:{NFSU2_TR(0x6548fc);
if(r1(R+518)){{goto L65491f;}}
}
B6548fe:L6548fe:{c.instructions+=3;NFSU2_TR(0x6548fe);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B654901:{NFSU2_TR(0x654901);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B654903:{NFSU2_TR(0x654903);
if(r1(R+518)){{goto L65490f;}}
}
B654905:L654905:{c.instructions+=2;NFSU2_TR(0x654905);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B654909:{NFSU2_TR(0x654909);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L654ab6;}}
}
B65490f:L65490f:{c.instructions+=3;NFSU2_TR(0x65490f);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B654910:{NFSU2_TR(0x654910);
__builtin_memmove((R+4),(R+24),4);
}
B654912:{NFSU2_TR(0x654912);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x654917ull));
TAIL_STATIC(0x64fa50u,64f);
}
B654917:L654917:{c.instructions+=2;NFSU2_TR(0x654917);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B65491a:{NFSU2_TR(0x65491a);
{goto L65499f;}
}
B65491f:L65491f:{c.instructions+=5;NFSU2_TR(0x65491f);
u8 U[4];
w4(U+0,u32(0x7b4338ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B654924:{NFSU2_TR(0x654924);
u8 U[4];
w4(U+0,u32(0xbddull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B654929:{NFSU2_TR(0x654929);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B65492c:{NFSU2_TR(0x65492c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65492d:{NFSU2_TR(0x65492d);
{goto L654aae;}
}
B654932:L654932:{c.instructions+=4;NFSU2_TR(0x654932);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B654935:{NFSU2_TR(0x654935);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B654938:{NFSU2_TR(0x654938);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B65493a:{NFSU2_TR(0x65493a);
if(r1(R+518)){{goto L654952;}}
}
B65493c:L65493c:{c.instructions+=2;NFSU2_TR(0x65493c);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0xdull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B654940:{NFSU2_TR(0x654940);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L654ab6;}}
}
B654946:L654946:{c.instructions+=4;NFSU2_TR(0x654946);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B654949:{NFSU2_TR(0x654949);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B65494c:{NFSU2_TR(0x65494c);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x30ull))));
__builtin_memmove((R+0),(U+0),4);
}
B65494f:{NFSU2_TR(0x65494f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B654952:L654952:{c.instructions+=5;NFSU2_TR(0x654952);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B654955:{NFSU2_TR(0x654955);
__builtin_memmove((R+4),(R+24),4);
}
B654957:{NFSU2_TR(0x654957);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B65495a:{NFSU2_TR(0x65495a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65495b:{NFSU2_TR(0x65495b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x654960ull));
TAIL_STATIC(0x65164au,651);
}
B654960:L654960:{c.instructions+=3;NFSU2_TR(0x654960);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B654962:{NFSU2_TR(0x654962);
__builtin_memmove((R+4),(R+24),4);
}
B654964:{NFSU2_TR(0x654964);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L65497b;}}
}
B654966:L654966:{c.instructions+=6;NFSU2_TR(0x654966);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B654969:{NFSU2_TR(0x654969);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B65496c:{NFSU2_TR(0x65496c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65496d:{NFSU2_TR(0x65496d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65496e:{NFSU2_TR(0x65496e);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B654971:{NFSU2_TR(0x654971);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x654976ull));
TAIL_STATIC(0x651982u,651);
}
B654976:L654976:{c.instructions+=1;NFSU2_TR(0x654976);
{goto L654ab6;}
}
B65497b:L65497b:{c.instructions+=2;NFSU2_TR(0x65497b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65497c:{NFSU2_TR(0x65497c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x654981ull));
TAIL_STATIC(0x64fa50u,64f);
}
B654981:L654981:{c.instructions+=2;NFSU2_TR(0x654981);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B654983:{NFSU2_TR(0x654983);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L654998;}}
}
B654985:L654985:{c.instructions+=3;NFSU2_TR(0x654985);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B654988:{NFSU2_TR(0x654988);
__builtin_memmove((R+4),(R+24),4);
}
B65498a:{NFSU2_TR(0x65498a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x65498full));
TAIL_STATIC(0x64fa50u,64f);
}
B65498f:L65498f:{c.instructions+=2;NFSU2_TR(0x65498f);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B654991:{NFSU2_TR(0x654991);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L654998;}}
}
B654993:L654993:{c.instructions+=2;NFSU2_TR(0x654993);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(r4(R+0))));
s4(u32(r4(U+0)),r4(U+4));
}
B654996:{NFSU2_TR(0x654996);
{goto L65499f;}
}
B654998:L654998:{c.instructions+=1;NFSU2_TR(0x654998);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B65499f:L65499f:{c.instructions+=3;NFSU2_TR(0x65499f);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6549a0:{NFSU2_TR(0x6549a0);
__builtin_memmove((R+4),(R+24),4);
}
B6549a2:{NFSU2_TR(0x6549a2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6549a7ull));
TAIL_STATIC(0x6503d7u,650);
}
B6549a7:L6549a7:{c.instructions+=3;NFSU2_TR(0x6549a7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(r4(R+0))));
s4(u32(r4(U+0)),r4(U+4));
}
B6549aa:{NFSU2_TR(0x6549aa);
u8 U[4];
w4(U+0,u32(0x50ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6549ac:{NFSU2_TR(0x6549ac);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6549b1ull));
TAIL_STATIC(0x645362u,645);
}
B6549b1:L6549b1:{c.instructions+=3;NFSU2_TR(0x6549b1);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B6549b3:{NFSU2_TR(0x6549b3);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6549b5:{NFSU2_TR(0x6549b5);
if(r1(R+518)){{goto L6549c9;}}
}
B6549b7:L6549b7:{c.instructions+=8;NFSU2_TR(0x6549b7);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6549ba:{NFSU2_TR(0x6549ba);
__builtin_memmove((R+4),(R+0),4);
}
B6549bc:{NFSU2_TR(0x6549bc);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6549be:{NFSU2_TR(0x6549be);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6549bf:{NFSU2_TR(0x6549bf);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6549c0:{NFSU2_TR(0x6549c0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6549c1:{NFSU2_TR(0x6549c1);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6549c2:{NFSU2_TR(0x6549c2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6549c7ull));
TAIL_STATIC(0x672d7bu,672);
}
B6549c7:L6549c7:{c.instructions+=1;NFSU2_TR(0x6549c7);
__builtin_memmove((R+24),(R+0),4);
}
B6549c9:L6549c9:{c.instructions+=2;NFSU2_TR(0x6549c9);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6549cb:{NFSU2_TR(0x6549cb);
if(r1(R+518)){{goto L654ab6;}}
}
B6549d1:L6549d1:{c.instructions+=2;NFSU2_TR(0x6549d1);
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
B6549d3:{NFSU2_TR(0x6549d3);
if(r1(R+518)){{goto L6549e7;}}
}
B6549d5:L6549d5:{c.instructions+=3;NFSU2_TR(0x6549d5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6549d7:{NFSU2_TR(0x6549d7);
__builtin_memmove((R+4),(R+28),4);
}
B6549d9:{NFSU2_TR(0x6549d9);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6549dcull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6549dc:L6549dc:{c.instructions+=3;NFSU2_TR(0x6549dc);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6549de:{NFSU2_TR(0x6549de);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6549e1:{NFSU2_TR(0x6549e1);
if(r1(R+518)){{goto L654ab6;}}
}
B6549e7:L6549e7:{c.instructions+=2;NFSU2_TR(0x6549e7);
u8 U[10];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(U+6,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6549e9:{NFSU2_TR(0x6549e9);
if(r1(R+518)){{goto L6549fd;}}
}
B6549eb:L6549eb:{c.instructions+=3;NFSU2_TR(0x6549eb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6549ed:{NFSU2_TR(0x6549ed);
__builtin_memmove((R+4),(R+12),4);
}
B6549ef:{NFSU2_TR(0x6549ef);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6549f2ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6549f2:L6549f2:{c.instructions+=3;NFSU2_TR(0x6549f2);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6549f4:{NFSU2_TR(0x6549f4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6549f7:{NFSU2_TR(0x6549f7);
if(r1(R+518)){{goto L654ab6;}}
}
B6549fd:L6549fd:{c.instructions+=2;NFSU2_TR(0x6549fd);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B654a01:{NFSU2_TR(0x654a01);
if(r1(R+518)){{goto L654a42;}}
}
B654a03:L654a03:{c.instructions+=2;NFSU2_TR(0x654a03);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B654a06:{NFSU2_TR(0x654a06);
{goto L654a3e;}
}
B654a08:L654a08:{c.instructions+=3;NFSU2_TR(0x654a08);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B654a0b:{NFSU2_TR(0x654a0b);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B654a0d:{NFSU2_TR(0x654a0d);
if(r1(R+518)){{goto L654a3b;}}
}
B654a0f:L654a0f:{c.instructions+=2;NFSU2_TR(0x654a0f);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0xdull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B654a13:{NFSU2_TR(0x654a13);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L654a3b;}}
}
B654a15:L654a15:{c.instructions+=3;NFSU2_TR(0x654a15);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B654a18:{NFSU2_TR(0x654a18);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B654a1b:{NFSU2_TR(0x654a1b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x654a20ull));
TAIL_STATIC(0x64fae7u,64f);
}
B654a20:L654a20:{c.instructions+=2;NFSU2_TR(0x654a20);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B654a22:{NFSU2_TR(0x654a22);
if(r1(R+518)){{goto L654a62;}}
}
B654a24:L654a24:{c.instructions+=2;NFSU2_TR(0x654a24);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B654a28:{NFSU2_TR(0x654a28);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L654a3b;}}
}
B654a2a:L654a2a:{c.instructions+=4;NFSU2_TR(0x654a2a);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B654a2d:{NFSU2_TR(0x654a2d);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B654a30:{NFSU2_TR(0x654a30);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B654a33:{NFSU2_TR(0x654a33);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x654a38ull));
TAIL_STATIC(0x64fa50u,64f);
}
B654a38:L654a38:{c.instructions+=1;NFSU2_TR(0x654a38);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B654a3b:L654a3b:{c.instructions+=1;NFSU2_TR(0x654a3b);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B654a3e:L654a3e:{c.instructions+=2;NFSU2_TR(0x654a3e);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B654a40:{NFSU2_TR(0x654a40);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x654a08u);}goto L654a08;}}
}
B654a42:L654a42:{c.instructions+=2;NFSU2_TR(0x654a42);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B654a46:{NFSU2_TR(0x654a46);
if(r1(R+518)){{goto L654a55;}}
}
B654a48:L654a48:{c.instructions+=4;NFSU2_TR(0x654a48);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B654a4b:{NFSU2_TR(0x654a4b);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B654a4d:{NFSU2_TR(0x654a4d);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B654a50:{NFSU2_TR(0x654a50);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x654a55ull));
TAIL_STATIC(0x64f92eu,64f);
}
B654a55:L654a55:{c.instructions+=2;NFSU2_TR(0x654a55);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B654a59:{NFSU2_TR(0x654a59);
if(r1(R+518)){{goto L654aba;}}
}
B654a5b:L654a5b:{c.instructions+=3;NFSU2_TR(0x654a5b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B654a5e:{NFSU2_TR(0x654a5e);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B654a60:{NFSU2_TR(0x654a60);
{goto L654a8b;}
}
B654a62:L654a62:{c.instructions+=3;NFSU2_TR(0x654a62);
u8 U[4];
w4(U+0,u32(0x7b4304ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B654a67:{NFSU2_TR(0x654a67);
u8 U[4];
w4(U+0,u32(0xbc9ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B654a6c:{NFSU2_TR(0x654a6c);
{goto L654aa8;}
}
B654a6e:L654a6e:{c.instructions+=3;NFSU2_TR(0x654a6e);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B654a71:{NFSU2_TR(0x654a71);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B654a73:{NFSU2_TR(0x654a73);
if(r1(R+518)){{goto L654a88;}}
}
B654a75:L654a75:{c.instructions+=2;NFSU2_TR(0x654a75);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0xdull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B654a79:{NFSU2_TR(0x654a79);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L654a88;}}
}
B654a7b:L654a7b:{c.instructions+=3;NFSU2_TR(0x654a7b);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B654a7e:{NFSU2_TR(0x654a7e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B654a81:{NFSU2_TR(0x654a81);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x654a86ull));
TAIL_STATIC(0x64fb5eu,64f);
}
B654a86:L654a86:{c.instructions+=1;NFSU2_TR(0x654a86);
w4(R+12,u32(u32(r4(R+12))+u32(r4(R+0))));
}
B654a88:L654a88:{c.instructions+=1;NFSU2_TR(0x654a88);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B654a8b:L654a8b:{c.instructions+=2;NFSU2_TR(0x654a8b);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B654a8d:{NFSU2_TR(0x654a8d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x654a6eu);}goto L654a6e;}}
}
B654a8f:L654a8f:{c.instructions+=3;NFSU2_TR(0x654a8f);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B654a92:{NFSU2_TR(0x654a92);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B654a95:{NFSU2_TR(0x654a95);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x654a9aull));
TAIL_STATIC(0x64fb5eu,64f);
}
B654a9a:L654a9a:{c.instructions+=2;NFSU2_TR(0x654a9a);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B654a9c:{NFSU2_TR(0x654a9c);
if(r1(R+518)){{goto L654aba;}}
}
B654a9e:L654a9e:{c.instructions+=2;NFSU2_TR(0x654a9e);
u8 U[4];
w4(U+0,u32(0x7b42c8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B654aa3:{NFSU2_TR(0x654aa3);
u8 U[4];
w4(U+0,u32(0xbc6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B654aa8:L654aa8:{c.instructions+=2;NFSU2_TR(0x654aa8);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B654aab:{NFSU2_TR(0x654aab);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B654aae:L654aae:{c.instructions+=1;NFSU2_TR(0x654aae);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x654ab3ull));
TAIL_STATIC(0x64f52au,64f);
}
B654ab3:L654ab3:{c.instructions+=1;NFSU2_TR(0x654ab3);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B654ab6:L654ab6:{c.instructions+=2;NFSU2_TR(0x654ab6);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B654ab8:{NFSU2_TR(0x654ab8);
{goto L654ac3;}
}
B654aba:L654aba:{c.instructions+=3;NFSU2_TR(0x654aba);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B654abd:{NFSU2_TR(0x654abd);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B654abe:{NFSU2_TR(0x654abe);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x654ac3ull));
TAIL_STATIC(0x650571u,650);
}
B654ac3:L654ac3:{c.instructions+=6;NFSU2_TR(0x654ac3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B654ac4:{NFSU2_TR(0x654ac4);
__builtin_memmove((R+0),(R+24),4);
}
B654ac6:{NFSU2_TR(0x654ac6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B654ac7:{NFSU2_TR(0x654ac7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B654ac8:{NFSU2_TR(0x654ac8);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B654ac9:{NFSU2_TR(0x654ac9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B654acc:L654acc:{c.instructions+=12;NFSU2_TR(0x654acc);
__builtin_memmove((R+28),(R+28),4);
}
B654ace:{NFSU2_TR(0x654ace);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B654acf:{NFSU2_TR(0x654acf);
__builtin_memmove((R+20),(R+16),4);
}
B654ad1:{NFSU2_TR(0x654ad1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x20ull))));
}
B654ad4:{NFSU2_TR(0x654ad4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B654ad7:{NFSU2_TR(0x654ad7);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B654ad8:{NFSU2_TR(0x654ad8);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B654ad9:{NFSU2_TR(0x654ad9);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B654adb:{NFSU2_TR(0x654adb);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B654add:{NFSU2_TR(0x654add);
__builtin_memmove((R+24),(R+4),4);
}
B654adf:{NFSU2_TR(0x654adf);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B654ae2:{NFSU2_TR(0x654ae2);
if(r1(R+518)){{goto L654aea;}}
}
B654ae4:L654ae4:{c.instructions+=2;NFSU2_TR(0x654ae4);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0xdull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B654ae8:{NFSU2_TR(0x654ae8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L654b04;}}
}
B654aea:L654aea:{c.instructions+=3;NFSU2_TR(0x654aea);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B654aed:{NFSU2_TR(0x654aed);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B654aef:{NFSU2_TR(0x654aef);
if(r1(R+518)){{goto L654af7;}}
}
B654af1:L654af1:{c.instructions+=2;NFSU2_TR(0x654af1);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0xdull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B654af5:{NFSU2_TR(0x654af5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L654b04;}}
}
B654af7:L654af7:{c.instructions+=3;NFSU2_TR(0x654af7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B654afa:{NFSU2_TR(0x654afa);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B654afc:{NFSU2_TR(0x654afc);
if(r1(R+518)){{goto L654b0b;}}
}
B654afe:L654afe:{c.instructions+=2;NFSU2_TR(0x654afe);
u8 U[16];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0xdull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B654b02:{NFSU2_TR(0x654b02);
if(r1(R+518)){{goto L654b0b;}}
}
B654b04:L654b04:{c.instructions+=2;NFSU2_TR(0x654b04);
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
B654b06:{NFSU2_TR(0x654b06);
{goto L654e2c;}
}
B654b0b:L654b0b:{c.instructions+=4;NFSU2_TR(0x654b0b);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B654b0d:{NFSU2_TR(0x654b0d);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B654b0e:{NFSU2_TR(0x654b0e);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((R+12),(U+0),4);
}
B654b11:{NFSU2_TR(0x654b11);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L654b16;}}
}
B654b13:L654b13:{c.instructions+=1;NFSU2_TR(0x654b13);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((R+12),(U+0),4);
}
B654b16:L654b16:{c.instructions+=3;NFSU2_TR(0x654b16);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B654b18:{NFSU2_TR(0x654b18);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B654b1b:{NFSU2_TR(0x654b1b);
if(r1(R+518)){{goto L654b25;}}
}
B654b1d:L654b1d:{c.instructions+=3;NFSU2_TR(0x654b1d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B654b20:{NFSU2_TR(0x654b20);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B654b23:{NFSU2_TR(0x654b23);
{goto L654b28;}
}
B654b25:L654b25:{c.instructions+=1;NFSU2_TR(0x654b25);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B654b28:L654b28:{c.instructions+=2;NFSU2_TR(0x654b28);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B654b2a:{NFSU2_TR(0x654b2a);
if(r1(R+518)){{goto L654b34;}}
}
B654b2c:L654b2c:{c.instructions+=3;NFSU2_TR(0x654b2c);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B654b2f:{NFSU2_TR(0x654b2f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B654b32:{NFSU2_TR(0x654b32);
{goto L654b37;}
}
B654b34:L654b34:{c.instructions+=1;NFSU2_TR(0x654b34);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B654b37:L654b37:{c.instructions+=2;NFSU2_TR(0x654b37);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B654b39:{NFSU2_TR(0x654b39);
if(r1(R+518)){{goto L654b43;}}
}
B654b3b:L654b3b:{c.instructions+=3;NFSU2_TR(0x654b3b);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B654b3e:{NFSU2_TR(0x654b3e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B654b41:{NFSU2_TR(0x654b41);
{goto L654b46;}
}
B654b43:L654b43:{c.instructions+=1;NFSU2_TR(0x654b43);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B654b46:L654b46:{c.instructions+=7;NFSU2_TR(0x654b46);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B654b49:{NFSU2_TR(0x654b49);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B654b4c:{NFSU2_TR(0x654b4c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B654b4f:{NFSU2_TR(0x654b4f);
u8 U[4];
w4(U+0,u32(0x50ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B654b51:{NFSU2_TR(0x654b51);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B654b54:{NFSU2_TR(0x654b54);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B654b56:{NFSU2_TR(0x654b56);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x654b5bull));
TAIL_STATIC(0x645362u,645);
}
B654b5b:L654b5b:{c.instructions+=2;NFSU2_TR(0x654b5b);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B654b5d:{NFSU2_TR(0x654b5d);
if(r1(R+518)){{goto L654b75;}}
}
B654b5f:L654b5f:{c.instructions+=8;NFSU2_TR(0x654b5f);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B654b62:{NFSU2_TR(0x654b62);
__builtin_memmove((R+4),(R+0),4);
}
B654b64:{NFSU2_TR(0x654b64);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B654b66:{NFSU2_TR(0x654b66);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B654b67:{NFSU2_TR(0x654b67);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B654b68:{NFSU2_TR(0x654b68);
u8 U[4];
w4(U+0,u32(0x18ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B654b6a:{NFSU2_TR(0x654b6a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B654b6b:{NFSU2_TR(0x654b6b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x654b70ull));
TAIL_STATIC(0x672d7bu,672);
}
B654b70:L654b70:{c.instructions+=2;NFSU2_TR(0x654b70);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B654b73:{NFSU2_TR(0x654b73);
{goto L654b78;}
}
B654b75:L654b75:{c.instructions+=1;NFSU2_TR(0x654b75);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B654b78:L654b78:{c.instructions+=2;NFSU2_TR(0x654b78);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(r4(R+28))));
w1(R+523,sborrow<u32>(r4(U+14),r4(R+28)));
w4(U+18,u32(u32(r4(U+14))-u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B654b7b:{NFSU2_TR(0x654b7b);
if(r1(R+518)){{goto L654ba1;}}
}
B654b7d:L654b7d:{c.instructions+=3;NFSU2_TR(0x654b7d);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B654b80:{NFSU2_TR(0x654b80);
__builtin_memmove((R+4),(R+24),4);
}
B654b82:{NFSU2_TR(0x654b82);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x654b87ull));
TAIL_STATIC(0x64fae7u,64f);
}
B654b87:L654b87:{c.instructions+=2;NFSU2_TR(0x654b87);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B654b89:{NFSU2_TR(0x654b89);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L654ba9;}}
}
B654b8b:L654b8b:{c.instructions+=4;NFSU2_TR(0x654b8b);
u8 U[4];
w4(U+0,u32(0x7b43c8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B654b90:{NFSU2_TR(0x654b90);
u8 U[4];
w4(U+0,u32(0xbccull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B654b95:{NFSU2_TR(0x654b95);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B654b98:{NFSU2_TR(0x654b98);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B654b99:L654b99:{c.instructions+=1;NFSU2_TR(0x654b99);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x654b9eull));
TAIL_STATIC(0x64f52au,64f);
}
B654b9e:L654b9e:{c.instructions+=1;NFSU2_TR(0x654b9e);
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
B654ba1:L654ba1:{c.instructions+=2;NFSU2_TR(0x654ba1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B654ba4:{NFSU2_TR(0x654ba4);
{goto L654e28;}
}
B654ba9:L654ba9:{c.instructions+=11;NFSU2_TR(0x654ba9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B654bac:{NFSU2_TR(0x654bac);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B654baf:{NFSU2_TR(0x654baf);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x10ull))));
}
B654bb2:{NFSU2_TR(0x654bb2);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B654bb3:{NFSU2_TR(0x654bb3);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B654bb6:{NFSU2_TR(0x654bb6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B654bb7:{NFSU2_TR(0x654bb7);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B654bba:{NFSU2_TR(0x654bba);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B654bbb:{NFSU2_TR(0x654bbb);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B654bbe:{NFSU2_TR(0x654bbe);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B654bc1:{NFSU2_TR(0x654bc1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x654bc6ull));
TAIL_STATIC(0x651cb3u,651);
}
B654bc6:L654bc6:{c.instructions+=2;NFSU2_TR(0x654bc6);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B654bc8:{NFSU2_TR(0x654bc8);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L654bd1;}}
}
B654bca:L654bca:{c.instructions+=2;NFSU2_TR(0x654bca);
u8 U[4];
w4(U+0,u32(0x7b439cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B654bcf:{NFSU2_TR(0x654bcf);
{goto L654c44;}
}
B654bd1:L654bd1:{c.instructions+=3;NFSU2_TR(0x654bd1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B654bd3:{NFSU2_TR(0x654bd3);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B654bd5:{NFSU2_TR(0x654bd5);
if(r1(R+518)){{goto L654c54;}}
}
B654bd7:L654bd7:{c.instructions+=3;NFSU2_TR(0x654bd7);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x9ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B654bdb:{NFSU2_TR(0x654bdb);
u8 U[4];
w4(U+0,u32(0x24ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B654bdd:{NFSU2_TR(0x654bdd);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L654bf9;}}
}
B654bdf:L654bdf:{c.instructions+=1;NFSU2_TR(0x654bdf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x654be4ull));
TAIL_STATIC(0x645362u,645);
}
B654be4:L654be4:{c.instructions+=2;NFSU2_TR(0x654be4);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B654be6:{NFSU2_TR(0x654be6);
if(r1(R+518)){{goto L654c24;}}
}
B654be8:L654be8:{c.instructions+=6;NFSU2_TR(0x654be8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+24),(U+0),4);
}
B654bea:{NFSU2_TR(0x654bea);
u8 U[4];
w4(U+0,u32(0x200ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B654bef:{NFSU2_TR(0x654bef);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B654bf2:{NFSU2_TR(0x654bf2);
__builtin_memmove((R+4),(R+0),4);
}
B654bf4:{NFSU2_TR(0x654bf4);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B654bf7:{NFSU2_TR(0x654bf7);
{goto L654c18;}
}
B654bf9:L654bf9:{c.instructions+=1;NFSU2_TR(0x654bf9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x654bfeull));
TAIL_STATIC(0x645362u,645);
}
B654bfe:L654bfe:{c.instructions+=3;NFSU2_TR(0x654bfe);
__builtin_memmove((R+12),(R+0),4);
}
B654c00:{NFSU2_TR(0x654c00);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B654c02:{NFSU2_TR(0x654c02);
if(r1(R+518)){{goto L654c24;}}
}
B654c04:L654c04:{c.instructions+=4;NFSU2_TR(0x654c04);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B654c07:{NFSU2_TR(0x654c07);
u8 U[4];
w4(U+0,u32(0x200ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B654c0c:{NFSU2_TR(0x654c0c);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+4));
}
B654c0e:{NFSU2_TR(0x654c0e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x654c13ull));
TAIL_STATIC(0x64fb5eu,64f);
}
B654c13:L654c13:{c.instructions+=3;NFSU2_TR(0x654c13);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B654c14:{NFSU2_TR(0x654c14);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B654c16:{NFSU2_TR(0x654c16);
__builtin_memmove((R+4),(R+12),4);
}
B654c18:L654c18:{c.instructions+=3;NFSU2_TR(0x654c18);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B654c19:{NFSU2_TR(0x654c19);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B654c1b:{NFSU2_TR(0x654c1b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x654c20ull));
TAIL_STATIC(0x672a51u,672);
}
B654c20:L654c20:{c.instructions+=2;NFSU2_TR(0x654c20);
__builtin_memmove((R+12),(R+0),4);
}
B654c22:{NFSU2_TR(0x654c22);
{goto L654c26;}
}
B654c24:L654c24:{c.instructions+=1;NFSU2_TR(0x654c24);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B654c26:L654c26:{c.instructions+=2;NFSU2_TR(0x654c26);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
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
B654c28:{NFSU2_TR(0x654c28);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x654ba1u);}goto L654ba1;}}
}
B654c2e:L654c2e:{c.instructions+=5;NFSU2_TR(0x654c2e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B654c31:{NFSU2_TR(0x654c31);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B654c32:{NFSU2_TR(0x654c32);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B654c35:{NFSU2_TR(0x654c35);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B654c36:{NFSU2_TR(0x654c36);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x654c3bull));
TAIL_STATIC(0x65164au,651);
}
B654c3b:L654c3b:{c.instructions+=2;NFSU2_TR(0x654c3b);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B654c3d:{NFSU2_TR(0x654c3d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L654c54;}}
}
B654c3f:L654c3f:{c.instructions+=1;NFSU2_TR(0x654c3f);
u8 U[4];
w4(U+0,u32(0x7b436cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B654c44:L654c44:{c.instructions+=4;NFSU2_TR(0x654c44);
u8 U[4];
w4(U+0,u32(0xbccull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B654c49:{NFSU2_TR(0x654c49);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B654c4c:{NFSU2_TR(0x654c4c);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B654c4f:{NFSU2_TR(0x654c4f);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x654b99u);}goto L654b99;}
}
B654c54:L654c54:{c.instructions+=2;NFSU2_TR(0x654c54);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B654c57:{NFSU2_TR(0x654c57);
if(r1(R+518)){{goto L654c75;}}
}
B654c59:L654c59:{c.instructions+=6;NFSU2_TR(0x654c59);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B654c5c:{NFSU2_TR(0x654c5c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B654c5d:{NFSU2_TR(0x654c5d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B654c5e:{NFSU2_TR(0x654c5e);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B654c61:{NFSU2_TR(0x654c61);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B654c62:{NFSU2_TR(0x654c62);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x654c67ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6548a3u);}goto L6548a3;}
}
B654c67:L654c67:{c.instructions+=4;NFSU2_TR(0x654c67);
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
B654c69:{NFSU2_TR(0x654c69);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B654c6c:{NFSU2_TR(0x654c6c);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B654c6f:{NFSU2_TR(0x654c6f);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x654ba1u);}goto L654ba1;}}
}
B654c75:L654c75:{c.instructions+=2;NFSU2_TR(0x654c75);
u8 U[4];
w4(U+0,u32(0x50ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B654c77:{NFSU2_TR(0x654c77);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x654c7cull));
TAIL_STATIC(0x645362u,645);
}
B654c7c:L654c7c:{c.instructions+=2;NFSU2_TR(0x654c7c);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B654c7e:{NFSU2_TR(0x654c7e);
if(r1(R+518)){{goto L654c94;}}
}
B654c80:L654c80:{c.instructions+=8;NFSU2_TR(0x654c80);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B654c83:{NFSU2_TR(0x654c83);
__builtin_memmove((R+4),(R+0),4);
}
B654c85:{NFSU2_TR(0x654c85);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B654c87:{NFSU2_TR(0x654c87);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B654c88:{NFSU2_TR(0x654c88);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B654c89:{NFSU2_TR(0x654c89);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B654c8a:{NFSU2_TR(0x654c8a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B654c8b:{NFSU2_TR(0x654c8b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x654c90ull));
TAIL_STATIC(0x672d7bu,672);
}
B654c90:L654c90:{c.instructions+=2;NFSU2_TR(0x654c90);
__builtin_memmove((R+24),(R+0),4);
}
B654c92:{NFSU2_TR(0x654c92);
{goto L654c96;}
}
B654c94:L654c94:{c.instructions+=1;NFSU2_TR(0x654c94);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B654c96:L654c96:{c.instructions+=4;NFSU2_TR(0x654c96);
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
B654c98:{NFSU2_TR(0x654c98);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B654c9b:{NFSU2_TR(0x654c9b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B654c9e:{NFSU2_TR(0x654c9e);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x654ba1u);}goto L654ba1;}}
}
B654ca4:L654ca4:{c.instructions+=2;NFSU2_TR(0x654ca4);
u8 U[4];
w4(U+0,u32(0x14ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B654ca6:{NFSU2_TR(0x654ca6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x654cabull));
TAIL_STATIC(0x645362u,645);
}
B654cab:L654cab:{c.instructions+=2;NFSU2_TR(0x654cab);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B654cad:{NFSU2_TR(0x654cad);
if(r1(R+518)){{goto L654cbf;}}
}
B654caf:L654caf:{c.instructions+=5;NFSU2_TR(0x654caf);
u8 U[4];
w4(U+0,u32(0x7b4090ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B654cb4:{NFSU2_TR(0x654cb4);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B654cb5:{NFSU2_TR(0x654cb5);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B654cb6:{NFSU2_TR(0x654cb6);
__builtin_memmove((R+4),(R+0),4);
}
B654cb8:{NFSU2_TR(0x654cb8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x654cbdull));
TAIL_STATIC(0x672498u,672);
}
B654cbd:L654cbd:{c.instructions+=1;NFSU2_TR(0x654cbd);
{goto L654cc1;}
}
B654cbf:L654cbf:{c.instructions+=1;NFSU2_TR(0x654cbf);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B654cc1:L654cc1:{c.instructions+=3;NFSU2_TR(0x654cc1);
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
B654cc3:{NFSU2_TR(0x654cc3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B654cc6:{NFSU2_TR(0x654cc6);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x654ba1u);}goto L654ba1;}}
}
B654ccc:L654ccc:{c.instructions+=3;NFSU2_TR(0x654ccc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B654ccf:{NFSU2_TR(0x654ccf);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
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
B654cd1:{NFSU2_TR(0x654cd1);
if(r1(R+518)){{goto L654cec;}}
}
B654cd3:L654cd3:{c.instructions+=3;NFSU2_TR(0x654cd3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+0),(U+0),4);
}
B654cd5:{NFSU2_TR(0x654cd5);
__builtin_memmove((R+4),(R+12),4);
}
B654cd7:{NFSU2_TR(0x654cd7);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x654cdaull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B654cda:L654cda:{c.instructions+=5;NFSU2_TR(0x654cda);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B654cdd:{NFSU2_TR(0x654cdd);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B654ce0:{NFSU2_TR(0x654ce0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B654ce3:{NFSU2_TR(0x654ce3);
u8 U[22];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(r4(R+28))));
w1(R+523,sborrow<u32>(r4(U+14),r4(R+28)));
w4(U+18,u32(u32(r4(U+14))-u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B654ce6:{NFSU2_TR(0x654ce6);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x654ba1u);}goto L654ba1;}}
}
B654cec:L654cec:{c.instructions+=2;NFSU2_TR(0x654cec);
u8 U[4];
w4(U+0,u32(0x14ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B654cee:{NFSU2_TR(0x654cee);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x654cf3ull));
TAIL_STATIC(0x645362u,645);
}
B654cf3:L654cf3:{c.instructions+=2;NFSU2_TR(0x654cf3);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B654cf5:{NFSU2_TR(0x654cf5);
if(r1(R+518)){{goto L654d07;}}
}
B654cf7:L654cf7:{c.instructions+=5;NFSU2_TR(0x654cf7);
u8 U[4];
w4(U+0,u32(0x7b4088ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B654cfc:{NFSU2_TR(0x654cfc);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B654cfd:{NFSU2_TR(0x654cfd);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B654cfe:{NFSU2_TR(0x654cfe);
__builtin_memmove((R+4),(R+0),4);
}
B654d00:{NFSU2_TR(0x654d00);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x654d05ull));
TAIL_STATIC(0x672498u,672);
}
B654d05:L654d05:{c.instructions+=1;NFSU2_TR(0x654d05);
{goto L654d09;}
}
B654d07:L654d07:{c.instructions+=1;NFSU2_TR(0x654d07);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B654d09:L654d09:{c.instructions+=3;NFSU2_TR(0x654d09);
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
B654d0b:{NFSU2_TR(0x654d0b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B654d0e:{NFSU2_TR(0x654d0e);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x654ba1u);}goto L654ba1;}}
}
B654d14:L654d14:{c.instructions+=2;NFSU2_TR(0x654d14);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B654d17:{NFSU2_TR(0x654d17);
if(r1(R+518)){{goto L654d58;}}
}
B654d19:L654d19:{c.instructions+=2;NFSU2_TR(0x654d19);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B654d1c:{NFSU2_TR(0x654d1c);
if(r1(R+518)){{goto L654d3e;}}
}
B654d1e:L654d1e:{c.instructions+=4;NFSU2_TR(0x654d1e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B654d21:{NFSU2_TR(0x654d21);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B654d22:{NFSU2_TR(0x654d22);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B654d25:{NFSU2_TR(0x654d25);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x654d2aull));
TAIL_STATIC(0x64fbecu,64f);
}
B654d2a:L654d2a:{c.instructions+=2;NFSU2_TR(0x654d2a);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B654d2c:{NFSU2_TR(0x654d2c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L654d3e;}}
}
B654d2e:L654d2e:{c.instructions+=6;NFSU2_TR(0x654d2e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B654d31:{NFSU2_TR(0x654d31);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B654d32:{NFSU2_TR(0x654d32);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B654d33:{NFSU2_TR(0x654d33);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B654d36:{NFSU2_TR(0x654d36);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B654d37:{NFSU2_TR(0x654d37);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x654d3cull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6548a3u);}goto L6548a3;}
}
B654d3c:L654d3c:{c.instructions+=1;NFSU2_TR(0x654d3c);
{goto L654d46;}
}
B654d3e:L654d3e:{c.instructions+=2;NFSU2_TR(0x654d3e);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B654d41:{NFSU2_TR(0x654d41);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x654d46ull));
TAIL_STATIC(0x672440u,672);
}
B654d46:L654d46:{c.instructions+=5;NFSU2_TR(0x654d46);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B654d49:{NFSU2_TR(0x654d49);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B654d4c:{NFSU2_TR(0x654d4c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B654d4f:{NFSU2_TR(0x654d4f);
u8 U[22];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(r4(R+28))));
w1(R+523,sborrow<u32>(r4(U+14),r4(R+28)));
w4(U+18,u32(u32(r4(U+14))-u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B654d52:{NFSU2_TR(0x654d52);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x654ba1u);}goto L654ba1;}}
}
B654d58:L654d58:{c.instructions+=2;NFSU2_TR(0x654d58);
u8 U[4];
w4(U+0,u32(0x14ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B654d5a:{NFSU2_TR(0x654d5a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x654d5full));
TAIL_STATIC(0x645362u,645);
}
B654d5f:L654d5f:{c.instructions+=2;NFSU2_TR(0x654d5f);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B654d61:{NFSU2_TR(0x654d61);
if(r1(R+518)){{goto L654d73;}}
}
B654d63:L654d63:{c.instructions+=5;NFSU2_TR(0x654d63);
u8 U[4];
w4(U+0,u32(0x7b4090ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B654d68:{NFSU2_TR(0x654d68);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B654d69:{NFSU2_TR(0x654d69);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B654d6a:{NFSU2_TR(0x654d6a);
__builtin_memmove((R+4),(R+0),4);
}
B654d6c:{NFSU2_TR(0x654d6c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x654d71ull));
TAIL_STATIC(0x672498u,672);
}
B654d71:L654d71:{c.instructions+=1;NFSU2_TR(0x654d71);
{goto L654d75;}
}
B654d73:L654d73:{c.instructions+=1;NFSU2_TR(0x654d73);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B654d75:L654d75:{c.instructions+=4;NFSU2_TR(0x654d75);
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
B654d77:{NFSU2_TR(0x654d77);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B654d7a:{NFSU2_TR(0x654d7a);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B654d7d:{NFSU2_TR(0x654d7d);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x654ba1u);}goto L654ba1;}}
}
B654d83:L654d83:{c.instructions+=3;NFSU2_TR(0x654d83);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B654d86:{NFSU2_TR(0x654d86);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
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
B654d88:{NFSU2_TR(0x654d88);
if(r1(R+518)){{goto L654da9;}}
}
B654d8a:L654d8a:{c.instructions+=3;NFSU2_TR(0x654d8a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+0),(U+0),4);
}
B654d8c:{NFSU2_TR(0x654d8c);
__builtin_memmove((R+4),(R+12),4);
}
B654d8e:{NFSU2_TR(0x654d8e);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x654d91ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B654d91:L654d91:{c.instructions+=7;NFSU2_TR(0x654d91);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B654d94:{NFSU2_TR(0x654d94);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B654d97:{NFSU2_TR(0x654d97);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B654d9a:{NFSU2_TR(0x654d9a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B654d9d:{NFSU2_TR(0x654d9d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B654da0:{NFSU2_TR(0x654da0);
u8 U[22];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(r4(R+28))));
w1(R+523,sborrow<u32>(r4(U+14),r4(R+28)));
w4(U+18,u32(u32(r4(U+14))-u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B654da3:{NFSU2_TR(0x654da3);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x654ba1u);}goto L654ba1;}}
}
B654da9:L654da9:{c.instructions+=2;NFSU2_TR(0x654da9);
u8 U[4];
w4(U+0,u32(0x14ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B654dab:{NFSU2_TR(0x654dab);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x654db0ull));
TAIL_STATIC(0x645362u,645);
}
B654db0:L654db0:{c.instructions+=2;NFSU2_TR(0x654db0);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B654db2:{NFSU2_TR(0x654db2);
if(r1(R+518)){{goto L654dc4;}}
}
B654db4:L654db4:{c.instructions+=5;NFSU2_TR(0x654db4);
u8 U[4];
w4(U+0,u32(0x7b4088ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B654db9:{NFSU2_TR(0x654db9);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B654dba:{NFSU2_TR(0x654dba);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B654dbb:{NFSU2_TR(0x654dbb);
__builtin_memmove((R+4),(R+0),4);
}
B654dbd:{NFSU2_TR(0x654dbd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x654dc2ull));
TAIL_STATIC(0x672498u,672);
}
B654dc2:L654dc2:{c.instructions+=1;NFSU2_TR(0x654dc2);
{goto L654dc6;}
}
B654dc4:L654dc4:{c.instructions+=1;NFSU2_TR(0x654dc4);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B654dc6:L654dc6:{c.instructions+=4;NFSU2_TR(0x654dc6);
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
B654dc8:{NFSU2_TR(0x654dc8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B654dcb:{NFSU2_TR(0x654dcb);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B654dce:{NFSU2_TR(0x654dce);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x654ba1u);}goto L654ba1;}}
}
B654dd4:L654dd4:{c.instructions+=2;NFSU2_TR(0x654dd4);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B654dd7:{NFSU2_TR(0x654dd7);
if(r1(R+518)){{goto L654e14;}}
}
B654dd9:L654dd9:{c.instructions+=2;NFSU2_TR(0x654dd9);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B654ddc:{NFSU2_TR(0x654ddc);
if(r1(R+518)){{goto L654e32;}}
}
B654dde:L654dde:{c.instructions+=4;NFSU2_TR(0x654dde);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B654de1:{NFSU2_TR(0x654de1);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B654de2:{NFSU2_TR(0x654de2);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B654de5:{NFSU2_TR(0x654de5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x654deaull));
TAIL_STATIC(0x64fbecu,64f);
}
B654dea:L654dea:{c.instructions+=2;NFSU2_TR(0x654dea);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B654dec:{NFSU2_TR(0x654dec);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L654e32;}}
}
B654dee:L654dee:{c.instructions+=6;NFSU2_TR(0x654dee);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B654df1:{NFSU2_TR(0x654df1);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B654df2:{NFSU2_TR(0x654df2);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B654df3:{NFSU2_TR(0x654df3);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B654df6:{NFSU2_TR(0x654df6);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B654df7:{NFSU2_TR(0x654df7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x654dfcull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6548a3u);}goto L6548a3;}
}
B654dfc:L654dfc:{c.instructions+=7;NFSU2_TR(0x654dfc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B654dff:{NFSU2_TR(0x654dff);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B654e02:{NFSU2_TR(0x654e02);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B654e05:{NFSU2_TR(0x654e05);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B654e08:{NFSU2_TR(0x654e08);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B654e0b:{NFSU2_TR(0x654e0b);
u8 U[22];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(r4(R+28))));
w1(R+523,sborrow<u32>(r4(U+14),r4(R+28)));
w4(U+18,u32(u32(r4(U+14))-u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B654e0e:{NFSU2_TR(0x654e0e);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x654ba1u);}goto L654ba1;}}
}
B654e14:L654e14:{c.instructions+=3;NFSU2_TR(0x654e14);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B654e17:{NFSU2_TR(0x654e17);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B654e18:{NFSU2_TR(0x654e18);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x654e1dull));
TAIL_STATIC(0x650571u,650);
}
B654e1d:L654e1d:{c.instructions+=3;NFSU2_TR(0x654e1d);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B654e20:{NFSU2_TR(0x654e20);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B654e23:{NFSU2_TR(0x654e23);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x654e28ull));
TAIL_STATIC(0x650571u,650);
}
B654e28:L654e28:{c.instructions+=2;NFSU2_TR(0x654e28);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B654e2b:{NFSU2_TR(0x654e2b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B654e2c:L654e2c:{c.instructions+=4;NFSU2_TR(0x654e2c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B654e2d:{NFSU2_TR(0x654e2d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B654e2e:{NFSU2_TR(0x654e2e);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B654e2f:{NFSU2_TR(0x654e2f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B654e32:L654e32:{c.instructions+=2;NFSU2_TR(0x654e32);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B654e35:{NFSU2_TR(0x654e35);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x654e3aull));
TAIL_STATIC(0x672440u,672);
}
B654e3a:L654e3a:{c.instructions+=1;NFSU2_TR(0x654e3a);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x654dfcu);}goto L654dfc;}
}
B654e3c:L654e3c:{c.instructions+=10;NFSU2_TR(0x654e3c);
__builtin_memmove((R+28),(R+28),4);
}
B654e3e:{NFSU2_TR(0x654e3e);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B654e3f:{NFSU2_TR(0x654e3f);
__builtin_memmove((R+20),(R+16),4);
}
B654e41:{NFSU2_TR(0x654e41);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x28ull))));
}
B654e44:{NFSU2_TR(0x654e44);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B654e45:{NFSU2_TR(0x654e45);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B654e46:{NFSU2_TR(0x654e46);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B654e49:{NFSU2_TR(0x654e49);
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
B654e4b:{NFSU2_TR(0x654e4b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B654e4e:{NFSU2_TR(0x654e4e);
if(r1(R+518)){TAIL_STATIC(0x65564eu,655);}
}
B654e54:L654e54:{c.instructions+=2;NFSU2_TR(0x654e54);
u8 U[22];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0xdull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0xdull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0xdull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B654e58:{NFSU2_TR(0x654e58);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x65564eu,655);}
}
B654e5e:L654e5e:{c.instructions+=6;NFSU2_TR(0x654e5e);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B654e61:{NFSU2_TR(0x654e61);
u8 U[32];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
w8(U+8,u64(s64(s32(r4(R+24)))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+16,u64(s64(s32(r4(U+4)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+24,u32(r8(U+24)));
}
B654e65:{NFSU2_TR(0x654e65);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B654e68:{NFSU2_TR(0x654e68);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B654e6b:{NFSU2_TR(0x654e6b);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B654e6e:{NFSU2_TR(0x654e6e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x654e73ull));
TAIL_STATIC(0x650234u,650);
}
B654e73:L654e73:{c.instructions+=2;NFSU2_TR(0x654e73);
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
B654e75:{NFSU2_TR(0x654e75);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x65564eu,655);}
}
B654e7b:L654e7b:{c.instructions+=3;NFSU2_TR(0x654e7b);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B654e7e:{NFSU2_TR(0x654e7e);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x2ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B654e81:{NFSU2_TR(0x654e81);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L654eb5;}}
}
B654e83:L654e83:{c.instructions+=2;NFSU2_TR(0x654e83);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
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
B654e86:{NFSU2_TR(0x654e86);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){TAIL_STATIC(0x65564eu,655);}
}
B654e8c:L654e8c:{c.instructions+=2;NFSU2_TR(0x654e8c);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x13ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x13ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B654e8f:{NFSU2_TR(0x654e8f);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L654eb5;}}
}
B654e91:L654e91:{c.instructions+=2;NFSU2_TR(0x654e91);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0x15ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x15ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x15ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B654e94:{NFSU2_TR(0x654e94);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){TAIL_STATIC(0x65564eu,655);}
}
B654e9a:L654e9a:{c.instructions+=2;NFSU2_TR(0x654e9a);
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
B654e9d:{NFSU2_TR(0x654e9d);
if(r1(R+518)){TAIL_STATIC(0x65564eu,655);}
}
B654ea3:L654ea3:{c.instructions+=2;NFSU2_TR(0x654ea3);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1aull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B654ea6:{NFSU2_TR(0x654ea6);
if(r1(R+518)){{goto L654f30;}}
}
B654eac:L654eac:{c.instructions+=2;NFSU2_TR(0x654eac);
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
B654eaf:{NFSU2_TR(0x654eaf);
if(r1(R+518)){TAIL_STATIC(0x65564eu,655);}
}
B654eb5:L654eb5:{c.instructions+=12;NFSU2_TR(0x654eb5);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B654eb8:{NFSU2_TR(0x654eb8);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B654eba:{NFSU2_TR(0x654eba);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B654ebb:{NFSU2_TR(0x654ebb);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B654ebd:{NFSU2_TR(0x654ebd);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B654ebf:{NFSU2_TR(0x654ebf);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B654ec2:{NFSU2_TR(0x654ec2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B654ec5:{NFSU2_TR(0x654ec5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B654ec8:{NFSU2_TR(0x654ec8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B654ecb:{NFSU2_TR(0x654ecb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B654ece:{NFSU2_TR(0x654ece);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B654ed1:{NFSU2_TR(0x654ed1);
if(r1(R+518)){{goto L654ef9;}}
}
B654ed3:L654ed3:{c.instructions+=2;NFSU2_TR(0x654ed3);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0xdull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B654ed7:{NFSU2_TR(0x654ed7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L654ef9;}}
}
B654ed9:L654ed9:{c.instructions+=8;NFSU2_TR(0x654ed9);
__builtin_memmove((R+12),(R+0),4);
}
B654edb:{NFSU2_TR(0x654edb);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B654ede:{NFSU2_TR(0x654ede);
u8 U[32];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
w8(U+8,u64(s64(s32(r4(R+0)))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+16,u64(s64(s32(r4(U+4)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+0,u32(r8(U+24)));
}
B654ee2:{NFSU2_TR(0x654ee2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B654ee5:{NFSU2_TR(0x654ee5);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B654ee8:{NFSU2_TR(0x654ee8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B654ee9:{NFSU2_TR(0x654ee9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B654eec:{NFSU2_TR(0x654eec);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x654ef1ull));
TAIL_STATIC(0x575620u,575);
}
B654ef1:L654ef1:{c.instructions+=4;NFSU2_TR(0x654ef1);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B654ef3:{NFSU2_TR(0x654ef3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B654ef4:{NFSU2_TR(0x654ef4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B654ef7:{NFSU2_TR(0x654ef7);
if(r1(R+518)){{goto L654f26;}}
}
B654ef9:L654ef9:{c.instructions+=3;NFSU2_TR(0x654ef9);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B654efc:{NFSU2_TR(0x654efc);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B654efe:{NFSU2_TR(0x654efe);
if(r1(R+518)){{goto L654f41;}}
}
B654f00:L654f00:{c.instructions+=2;NFSU2_TR(0x654f00);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0xdull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B654f04:{NFSU2_TR(0x654f04);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L654f41;}}
}
B654f06:L654f06:{c.instructions+=8;NFSU2_TR(0x654f06);
__builtin_memmove((R+24),(R+0),4);
}
B654f08:{NFSU2_TR(0x654f08);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B654f0b:{NFSU2_TR(0x654f0b);
u8 U[32];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
w8(U+8,u64(s64(s32(r4(R+0)))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+16,u64(s64(s32(r4(U+4)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+0,u32(r8(U+24)));
}
B654f0f:{NFSU2_TR(0x654f0f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B654f12:{NFSU2_TR(0x654f12);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B654f15:{NFSU2_TR(0x654f15);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B654f16:{NFSU2_TR(0x654f16);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B654f19:{NFSU2_TR(0x654f19);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x654f1eull));
TAIL_STATIC(0x575620u,575);
}
B654f1e:L654f1e:{c.instructions+=4;NFSU2_TR(0x654f1e);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B654f20:{NFSU2_TR(0x654f20);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B654f21:{NFSU2_TR(0x654f21);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B654f24:{NFSU2_TR(0x654f24);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L654f41;}}
}
B654f26:L654f26:{c.instructions+=2;NFSU2_TR(0x654f26);
w4(R+24,u32(0x8007000eull));
}
B654f2b:{NFSU2_TR(0x654f2b);
TAIL_STATIC(0x65562eu,655);
}
B654f30:L654f30:{c.instructions+=4;NFSU2_TR(0x654f30);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B654f33:{NFSU2_TR(0x654f33);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B654f36:{NFSU2_TR(0x654f36);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B654f37:{NFSU2_TR(0x654f37);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x654f3cull));
TAIL_STATIC(0x652cefu,652);
}
B654f3c:L654f3c:{c.instructions+=1;NFSU2_TR(0x654f3c);
TAIL_STATIC(0x655653u,655);
}
B654f41:L654f41:{c.instructions+=2;NFSU2_TR(0x654f41);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B654f45:{NFSU2_TR(0x654f45);
if(r1(R+518)){{goto L654f70;}}
}
B654f47:L654f47:{c.instructions+=2;NFSU2_TR(0x654f47);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B654f49:{NFSU2_TR(0x654f49);
if(r1(R+518)){{goto L654f64;}}
}
B654f4b:L654f4b:{c.instructions+=4;NFSU2_TR(0x654f4b);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B654f4e:{NFSU2_TR(0x654f4e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B654f51:{NFSU2_TR(0x654f51);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B654f52:{NFSU2_TR(0x654f52);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x654f57ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x654e3cu);}goto L654e3c;}
}
B654f57:L654f57:{c.instructions+=3;NFSU2_TR(0x654f57);
__builtin_memmove((R+24),(R+0),4);
}
B654f59:{NFSU2_TR(0x654f59);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B654f5b:{NFSU2_TR(0x654f5b);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x65562eu,655);}
}
B654f61:L654f61:{c.instructions+=1;NFSU2_TR(0x654f61);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B654f64:L654f64:{c.instructions+=2;NFSU2_TR(0x654f64);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B654f66:{NFSU2_TR(0x654f66);
if(r1(R+518)){{goto L654fa6;}}
}
B654f68:L654f68:{c.instructions+=3;NFSU2_TR(0x654f68);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B654f6b:{NFSU2_TR(0x654f6b);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B654f6e:{NFSU2_TR(0x654f6e);
{goto L654f94;}
}
B654f70:L654f70:{c.instructions+=2;NFSU2_TR(0x654f70);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B654f72:{NFSU2_TR(0x654f72);
if(r1(R+518)){{goto L654f8c;}}
}
B654f74:L654f74:{c.instructions+=4;NFSU2_TR(0x654f74);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B654f77:{NFSU2_TR(0x654f77);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B654f7a:{NFSU2_TR(0x654f7a);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B654f7d:{NFSU2_TR(0x654f7d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x654f82ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x654e3cu);}goto L654e3c;}
}
B654f82:L654f82:{c.instructions+=3;NFSU2_TR(0x654f82);
__builtin_memmove((R+24),(R+0),4);
}
B654f84:{NFSU2_TR(0x654f84);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B654f86:{NFSU2_TR(0x654f86);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x65562eu,655);}
}
B654f8c:L654f8c:{c.instructions+=2;NFSU2_TR(0x654f8c);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B654f8e:{NFSU2_TR(0x654f8e);
if(r1(R+518)){{goto L654fa6;}}
}
B654f90:L654f90:{c.instructions+=2;NFSU2_TR(0x654f90);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B654f93:{NFSU2_TR(0x654f93);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B654f94:L654f94:{c.instructions+=2;NFSU2_TR(0x654f94);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B654f97:{NFSU2_TR(0x654f97);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x654f9cull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x654e3cu);}goto L654e3c;}
}
B654f9c:L654f9c:{c.instructions+=3;NFSU2_TR(0x654f9c);
__builtin_memmove((R+24),(R+0),4);
}
B654f9e:{NFSU2_TR(0x654f9e);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B654fa0:{NFSU2_TR(0x654fa0);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x65562eu,655);}
}
B654fa6:L654fa6:{c.instructions+=4;NFSU2_TR(0x654fa6);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B654fa9:{NFSU2_TR(0x654fa9);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B654fab:{NFSU2_TR(0x654fab);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B654fad:{NFSU2_TR(0x654fad);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x6553aeu,655);}
}
B654fb3:L654fb3:{c.instructions+=4;NFSU2_TR(0x654fb3);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B654fb5:{NFSU2_TR(0x654fb5);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B654fb6:{NFSU2_TR(0x654fb6);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B654fb8:{NFSU2_TR(0x654fb8);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){TAIL_STATIC(0x6551e4u,655);}
}
B654fbe:L654fbe:{c.instructions+=2;NFSU2_TR(0x654fbe);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x16ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B654fc1:{NFSU2_TR(0x654fc1);
if(r1(R+518)){TAIL_STATIC(0x655157u,655);}
}
B654fc7:L654fc7:{c.instructions+=2;NFSU2_TR(0x654fc7);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x17ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B654fca:{NFSU2_TR(0x654fca);
if(r1(R+518)){TAIL_STATIC(0x65506du,655);}
}
B654fd0:L654fd0:{c.instructions+=2;NFSU2_TR(0x654fd0);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x18ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B654fd3:{NFSU2_TR(0x654fd3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x6553aeu,655);}
}
B654fd9:L654fd9:{c.instructions+=3;NFSU2_TR(0x654fd9);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+24))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+24))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B654fdc:{NFSU2_TR(0x654fdc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B654fdf:{NFSU2_TR(0x654fdf);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x65562cu,655);}
}
B654fe5:L654fe5:{c.instructions+=10;NFSU2_TR(0x654fe5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B654fe8:{NFSU2_TR(0x654fe8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B654feb:{NFSU2_TR(0x654feb);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B654fee:{NFSU2_TR(0x654fee);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x30ull))));
__builtin_memmove((R+12),(U+0),4);
}
B654ff1:{NFSU2_TR(0x654ff1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B654ff4:{NFSU2_TR(0x654ff4);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+28))));
}
B654ff6:{NFSU2_TR(0x654ff6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B654ff9:{NFSU2_TR(0x654ff9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B654ffc:{NFSU2_TR(0x654ffc);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+28))));
}
B654ffe:{NFSU2_TR(0x654ffe);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+28))));
TAIL_STATIC(0x655000u,655);
}
XIT:NFSU2_TR_EXIT(0x654,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
