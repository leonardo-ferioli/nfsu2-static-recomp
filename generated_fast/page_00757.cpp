#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_598(u8* __restrict R,Cpu& c);
u32 body_756(u8* __restrict R,Cpu& c);
u32 body_758(u8* __restrict R,Cpu& c);
u32 body_75c(u8* __restrict R,Cpu& c);
u32 body_75f(u8* __restrict R,Cpu& c);
u32 body_761(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x757,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x757,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_757(u8* __restrict R,Cpu& c);
u32 page_757(Cpu& c){return body_757(c.regs.data(),c);}
__attribute__((noinline)) u32 body_757(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x757001:goto L757001;
case 0x757010:goto L757010;
case 0x757011:c.instructions+=3;goto B757011;
case 0x757013:c.instructions+=2;goto B757013;
case 0x757016:c.instructions+=1;goto B757016;
case 0x757018:goto L757018;
case 0x75701b:c.instructions+=2;goto B75701b;
case 0x757021:c.instructions+=1;goto B757021;
case 0x757023:goto L757023;
case 0x757026:c.instructions+=2;goto B757026;
case 0x757029:c.instructions+=1;goto B757029;
case 0x75702b:goto L75702b;
case 0x757032:c.instructions+=1;goto B757032;
case 0x757037:goto L757037;
case 0x757038:c.instructions+=1;goto B757038;
case 0x757039:goto L757039;
case 0x75703c:c.instructions+=1;goto B75703c;
case 0x75703e:goto L75703e;
case 0x757044:c.instructions+=1;goto B757044;
case 0x757046:goto L757046;
case 0x757050:c.instructions+=2;goto B757050;
case 0x757051:c.instructions+=1;goto B757051;
case 0x757052:goto L757052;
case 0x757055:c.instructions+=1;goto B757055;
case 0x757057:goto L757057;
case 0x75705e:c.instructions+=1;goto B75705e;
case 0x757060:goto L757060;
case 0x75706a:goto L75706a;
case 0x75706b:c.instructions+=1;goto B75706b;
case 0x757070:goto L757070;
case 0x757076:c.instructions+=7;goto B757076;
case 0x75707b:c.instructions+=6;goto B75707b;
case 0x75707c:c.instructions+=5;goto B75707c;
case 0x75707e:c.instructions+=4;goto B75707e;
case 0x757085:c.instructions+=3;goto B757085;
case 0x75708b:c.instructions+=2;goto B75708b;
case 0x75708d:c.instructions+=1;goto B75708d;
case 0x75708f:goto L75708f;
case 0x757090:c.instructions+=1;goto B757090;
case 0x757096:goto L757096;
case 0x757098:goto L757098;
case 0x75709a:c.instructions+=3;goto B75709a;
case 0x75709c:c.instructions+=2;goto B75709c;
case 0x7570a2:c.instructions+=1;goto B7570a2;
case 0x7570a4:goto L7570a4;
case 0x7570a5:goto L7570a5;
case 0x7570ab:c.instructions+=5;goto B7570ab;
case 0x7570af:c.instructions+=4;goto B7570af;
case 0x7570b3:c.instructions+=3;goto B7570b3;
case 0x7570bb:c.instructions+=2;goto B7570bb;
case 0x7570c3:c.instructions+=1;goto B7570c3;
case 0x7570c8:goto L7570c8;
case 0x7570cf:c.instructions+=2;goto B7570cf;
case 0x7570d0:c.instructions+=1;goto B7570d0;
case 0x7570d5:goto L7570d5;
case 0x7570db:c.instructions+=1;goto B7570db;
case 0x7570e0:goto L7570e0;
case 0x7570e6:c.instructions+=12;goto B7570e6;
case 0x7570eb:c.instructions+=11;goto B7570eb;
case 0x7570f2:c.instructions+=10;goto B7570f2;
case 0x7570f3:c.instructions+=9;goto B7570f3;
case 0x7570f5:c.instructions+=8;goto B7570f5;
case 0x7570fb:c.instructions+=7;goto B7570fb;
case 0x757101:c.instructions+=6;goto B757101;
case 0x757105:c.instructions+=5;goto B757105;
case 0x757106:c.instructions+=4;goto B757106;
case 0x75710a:c.instructions+=3;goto B75710a;
case 0x75710e:c.instructions+=2;goto B75710e;
case 0x757116:c.instructions+=1;goto B757116;
case 0x75711b:goto L75711b;
case 0x757122:c.instructions+=2;goto B757122;
case 0x757123:c.instructions+=1;goto B757123;
case 0x757128:goto L757128;
case 0x75712e:c.instructions+=1;goto B75712e;
case 0x757130:goto L757130;
case 0x757131:c.instructions+=7;goto B757131;
case 0x757133:c.instructions+=6;goto B757133;
case 0x757139:c.instructions+=5;goto B757139;
case 0x75713f:c.instructions+=4;goto B75713f;
case 0x757140:c.instructions+=3;goto B757140;
case 0x757141:c.instructions+=2;goto B757141;
case 0x757146:c.instructions+=1;goto B757146;
case 0x757148:goto L757148;
case 0x75714e:c.instructions+=4;goto B75714e;
case 0x757154:c.instructions+=3;goto B757154;
case 0x757155:c.instructions+=2;goto B757155;
case 0x75715b:c.instructions+=1;goto B75715b;
case 0x757160:goto L757160;
case 0x757163:c.instructions+=5;goto B757163;
case 0x757166:c.instructions+=4;goto B757166;
case 0x757167:c.instructions+=3;goto B757167;
case 0x757169:c.instructions+=2;goto B757169;
case 0x75716f:c.instructions+=1;goto B75716f;
case 0x757171:goto L757171;
case 0x757172:goto L757172;
case 0x757178:c.instructions+=2;goto B757178;
case 0x75717e:c.instructions+=1;goto B75717e;
case 0x757180:goto L757180;
case 0x757186:c.instructions+=5;goto B757186;
case 0x75718c:c.instructions+=4;goto B75718c;
case 0x757192:c.instructions+=3;goto B757192;
case 0x757194:c.instructions+=2;goto B757194;
case 0x757196:c.instructions+=1;goto B757196;
case 0x757198:goto L757198;
case 0x75719a:c.instructions+=1;goto B75719a;
case 0x75719c:goto L75719c;
case 0x75719e:c.instructions+=7;goto B75719e;
case 0x7571a4:c.instructions+=6;goto B7571a4;
case 0x7571a6:c.instructions+=5;goto B7571a6;
case 0x7571a7:c.instructions+=4;goto B7571a7;
case 0x7571aa:c.instructions+=3;goto B7571aa;
case 0x7571ad:c.instructions+=2;goto B7571ad;
case 0x7571af:c.instructions+=1;goto B7571af;
case 0x7571b1:goto L7571b1;
case 0x7571b3:c.instructions+=5;goto B7571b3;
case 0x7571b4:c.instructions+=4;goto B7571b4;
case 0x7571b7:c.instructions+=3;goto B7571b7;
case 0x7571b8:c.instructions+=2;goto B7571b8;
case 0x7571b9:c.instructions+=1;goto B7571b9;
case 0x7571bb:goto L7571bb;
case 0x7571be:goto L7571be;
case 0x7571c0:c.instructions+=1;goto B7571c0;
case 0x7571c5:goto L7571c5;
case 0x7571c7:c.instructions+=1;goto B7571c7;
case 0x7571c9:goto L7571c9;
case 0x7571cf:c.instructions+=9;goto B7571cf;
case 0x7571d5:c.instructions+=8;goto B7571d5;
case 0x7571d7:c.instructions+=7;goto B7571d7;
case 0x7571d8:c.instructions+=6;goto B7571d8;
case 0x7571de:c.instructions+=5;goto B7571de;
case 0x7571e4:c.instructions+=4;goto B7571e4;
case 0x7571ea:c.instructions+=3;goto B7571ea;
case 0x7571ec:c.instructions+=2;goto B7571ec;
case 0x7571ee:c.instructions+=1;goto B7571ee;
case 0x7571f0:goto L7571f0;
case 0x7571f1:c.instructions+=3;goto B7571f1;
case 0x7571f2:c.instructions+=2;goto B7571f2;
case 0x7571f3:c.instructions+=1;goto B7571f3;
case 0x757200:goto L757200;
case 0x757201:c.instructions+=10;goto B757201;
case 0x757202:c.instructions+=9;goto B757202;
case 0x757205:c.instructions+=8;goto B757205;
case 0x757207:c.instructions+=7;goto B757207;
case 0x75720a:c.instructions+=6;goto B75720a;
case 0x75720d:c.instructions+=5;goto B75720d;
case 0x75720e:c.instructions+=4;goto B75720e;
case 0x757211:c.instructions+=3;goto B757211;
case 0x757213:c.instructions+=2;goto B757213;
case 0x757215:c.instructions+=1;goto B757215;
case 0x757217:goto L757217;
case 0x757218:goto L757218;
case 0x75721e:c.instructions+=2;goto B75721e;
case 0x757224:c.instructions+=1;goto B757224;
case 0x757226:goto L757226;
case 0x757227:c.instructions+=2;goto B757227;
case 0x75722d:c.instructions+=1;goto B75722d;
case 0x757230:goto L757230;
case 0x757236:c.instructions+=2;goto B757236;
case 0x75723a:c.instructions+=1;goto B75723a;
case 0x75723c:goto L75723c;
case 0x757242:c.instructions+=2;goto B757242;
case 0x757244:c.instructions+=1;goto B757244;
case 0x757246:goto L757246;
case 0x75724c:c.instructions+=4;goto B75724c;
case 0x75724e:c.instructions+=3;goto B75724e;
case 0x75724f:c.instructions+=2;goto B75724f;
case 0x757255:c.instructions+=1;goto B757255;
case 0x75725b:goto L75725b;
case 0x757261:c.instructions+=6;goto B757261;
case 0x757263:c.instructions+=5;goto B757263;
case 0x757264:c.instructions+=4;goto B757264;
case 0x75726a:c.instructions+=3;goto B75726a;
case 0x757270:c.instructions+=2;goto B757270;
case 0x757276:c.instructions+=1;goto B757276;
case 0x757278:goto L757278;
case 0x757279:goto L757279;
case 0x75727a:c.instructions+=4;goto B75727a;
case 0x75727b:c.instructions+=3;goto B75727b;
case 0x75727d:c.instructions+=2;goto B75727d;
case 0x75727e:c.instructions+=1;goto B75727e;
case 0x757280:goto L757280;
case 0x757286:c.instructions+=3;goto B757286;
case 0x75728c:c.instructions+=2;goto B75728c;
case 0x75728e:c.instructions+=1;goto B75728e;
case 0x757293:goto L757293;
case 0x7572a0:goto L7572a0;
case 0x7572a1:c.instructions+=11;goto B7572a1;
case 0x7572a3:c.instructions+=10;goto B7572a3;
case 0x7572a9:c.instructions+=9;goto B7572a9;
case 0x7572aa:c.instructions+=8;goto B7572aa;
case 0x7572ac:c.instructions+=7;goto B7572ac;
case 0x7572ad:c.instructions+=6;goto B7572ad;
case 0x7572b3:c.instructions+=5;goto B7572b3;
case 0x7572b6:c.instructions+=4;goto B7572b6;
case 0x7572b7:c.instructions+=3;goto B7572b7;
case 0x7572bd:c.instructions+=2;goto B7572bd;
case 0x7572c3:c.instructions+=1;goto B7572c3;
case 0x7572c9:goto L7572c9;
case 0x7572cc:c.instructions+=3;goto B7572cc;
case 0x7572d2:c.instructions+=2;goto B7572d2;
case 0x7572d4:c.instructions+=1;goto B7572d4;
case 0x7572da:goto L7572da;
case 0x7572dc:goto L7572dc;
case 0x7572e3:c.instructions+=5;goto B7572e3;
case 0x7572e9:c.instructions+=4;goto B7572e9;
case 0x7572ec:c.instructions+=3;goto B7572ec;
case 0x7572ee:c.instructions+=2;goto B7572ee;
case 0x7572f4:c.instructions+=1;goto B7572f4;
case 0x7572f9:goto L7572f9;
case 0x7572fa:c.instructions+=3;goto B7572fa;
case 0x7572fb:c.instructions+=2;goto B7572fb;
case 0x7572fc:c.instructions+=1;goto B7572fc;
case 0x7572fd:goto L7572fd;
case 0x757300:c.instructions+=1;goto B757300;
case 0x757302:goto L757302;
case 0x757304:c.instructions+=5;goto B757304;
case 0x757305:c.instructions+=4;goto B757305;
case 0x75730b:c.instructions+=3;goto B75730b;
case 0x75730d:c.instructions+=2;goto B75730d;
case 0x757310:c.instructions+=1;goto B757310;
case 0x757312:goto L757312;
case 0x757314:goto L757314;
case 0x757316:c.instructions+=1;goto B757316;
case 0x757319:goto L757319;
case 0x75731b:goto L75731b;
case 0x757321:c.instructions+=14;goto B757321;
case 0x757327:c.instructions+=13;goto B757327;
case 0x757328:c.instructions+=12;goto B757328;
case 0x75732e:c.instructions+=11;goto B75732e;
case 0x757334:c.instructions+=10;goto B757334;
case 0x757336:c.instructions+=9;goto B757336;
case 0x757337:c.instructions+=8;goto B757337;
case 0x75733d:c.instructions+=7;goto B75733d;
case 0x757340:c.instructions+=6;goto B757340;
case 0x757346:c.instructions+=5;goto B757346;
case 0x75734c:c.instructions+=4;goto B75734c;
case 0x75734d:c.instructions+=3;goto B75734d;
case 0x75734f:c.instructions+=2;goto B75734f;
case 0x757355:c.instructions+=1;goto B757355;
case 0x757357:goto L757357;
case 0x75735a:c.instructions+=7;goto B75735a;
case 0x75735d:c.instructions+=6;goto B75735d;
case 0x75735e:c.instructions+=5;goto B75735e;
case 0x75735f:c.instructions+=4;goto B75735f;
case 0x757362:c.instructions+=3;goto B757362;
case 0x757363:c.instructions+=2;goto B757363;
case 0x757364:c.instructions+=1;goto B757364;
case 0x757366:goto L757366;
case 0x757369:goto L757369;
case 0x75736f:c.instructions+=4;goto B75736f;
case 0x757370:c.instructions+=3;goto B757370;
case 0x757376:c.instructions+=2;goto B757376;
case 0x75737d:c.instructions+=1;goto B75737d;
case 0x75737e:goto L75737e;
case 0x75737f:c.instructions+=3;goto B75737f;
case 0x757380:c.instructions+=2;goto B757380;
case 0x757381:c.instructions+=1;goto B757381;
case 0x757390:goto L757390;
case 0x757396:c.instructions+=6;goto B757396;
case 0x75739b:c.instructions+=5;goto B75739b;
case 0x75739c:c.instructions+=4;goto B75739c;
case 0x7573a3:c.instructions+=3;goto B7573a3;
case 0x7573aa:c.instructions+=2;goto B7573aa;
case 0x7573b1:c.instructions+=1;goto B7573b1;
case 0x7573b3:goto L7573b3;
case 0x7573b4:c.instructions+=3;goto B7573b4;
case 0x7573b5:c.instructions+=2;goto B7573b5;
case 0x7573b6:c.instructions+=1;goto B7573b6;
case 0x7573c0:goto L7573c0;
case 0x7573c6:c.instructions+=2;goto B7573c6;
case 0x7573c9:c.instructions+=1;goto B7573c9;
case 0x7573cb:goto L7573cb;
case 0x7573d5:goto L7573d5;
case 0x7573d7:goto L7573d7;
case 0x7573dd:goto L7573dd;
case 0x7573e4:c.instructions+=1;goto B7573e4;
case 0x7573e6:goto L7573e6;
case 0x7573e7:c.instructions+=2;goto B7573e7;
case 0x7573e8:c.instructions+=1;goto B7573e8;
case 0x7573e9:goto L7573e9;
case 0x7573f0:c.instructions+=4;goto B7573f0;
case 0x7573fa:c.instructions+=3;goto B7573fa;
case 0x7573fc:c.instructions+=2;goto B7573fc;
case 0x7573fd:c.instructions+=1;goto B7573fd;
case 0x757402:goto L757402;
case 0x757408:c.instructions+=1;goto B757408;
case 0x757409:goto L757409;
case 0x75740c:c.instructions+=1;goto B75740c;
case 0x757412:goto L757412;
case 0x757414:c.instructions+=1;goto B757414;
case 0x75741a:goto L75741a;
case 0x75741d:c.instructions+=1;goto B75741d;
case 0x757423:goto L757423;
case 0x757426:c.instructions+=1;goto B757426;
case 0x75742c:goto L75742c;
case 0x757432:c.instructions+=4;goto B757432;
case 0x757438:c.instructions+=3;goto B757438;
case 0x75743a:c.instructions+=2;goto B75743a;
case 0x75743b:c.instructions+=1;goto B75743b;
case 0x75743d:goto L75743d;
case 0x757442:c.instructions+=1;goto B757442;
case 0x757444:goto L757444;
case 0x75744a:c.instructions+=5;goto B75744a;
case 0x75744c:c.instructions+=4;goto B75744c;
case 0x757452:c.instructions+=3;goto B757452;
case 0x757456:c.instructions+=2;goto B757456;
case 0x75745b:c.instructions+=1;goto B75745b;
case 0x75745d:goto L75745d;
case 0x757463:c.instructions+=3;goto B757463;
case 0x757465:c.instructions+=2;goto B757465;
case 0x757466:c.instructions+=1;goto B757466;
case 0x757468:goto L757468;
case 0x75746d:c.instructions+=1;goto B75746d;
case 0x75746f:goto L75746f;
case 0x757475:c.instructions+=2;goto B757475;
case 0x757479:c.instructions+=1;goto B757479;
case 0x75747e:goto L75747e;
case 0x757480:c.instructions+=5;goto B757480;
case 0x757482:c.instructions+=4;goto B757482;
case 0x757486:c.instructions+=3;goto B757486;
case 0x757487:c.instructions+=2;goto B757487;
case 0x757488:c.instructions+=1;goto B757488;
case 0x75748e:goto L75748e;
case 0x757492:c.instructions+=3;goto B757492;
case 0x757493:c.instructions+=2;goto B757493;
case 0x75749b:c.instructions+=1;goto B75749b;
case 0x7574a0:goto L7574a0;
case 0x7574a6:c.instructions+=2;goto B7574a6;
case 0x7574a9:c.instructions+=1;goto B7574a9;
case 0x7574ab:goto L7574ab;
case 0x7574b1:c.instructions+=3;goto B7574b1;
case 0x7574b2:c.instructions+=2;goto B7574b2;
case 0x7574b4:c.instructions+=1;goto B7574b4;
case 0x7574ba:goto L7574ba;
case 0x7574bc:c.instructions+=1;goto B7574bc;
case 0x7574c1:goto L7574c1;
case 0x7574c7:c.instructions+=2;goto B7574c7;
case 0x7574ca:c.instructions+=1;goto B7574ca;
case 0x7574cc:goto L7574cc;
case 0x7574d2:c.instructions+=4;goto B7574d2;
case 0x7574d4:c.instructions+=3;goto B7574d4;
case 0x7574d6:c.instructions+=2;goto B7574d6;
case 0x7574dc:c.instructions+=1;goto B7574dc;
case 0x7574de:goto L7574de;
case 0x7574e8:c.instructions+=1;goto B7574e8;
case 0x7574ea:goto L7574ea;
case 0x7574ed:c.instructions+=1;goto B7574ed;
case 0x7574ef:goto L7574ef;
case 0x7574f1:c.instructions+=1;goto B7574f1;
case 0x7574f6:goto L7574f6;
case 0x7574fd:c.instructions+=1;goto B7574fd;
case 0x7574ff:goto L7574ff;
case 0x757505:c.instructions+=2;goto B757505;
case 0x75750b:c.instructions+=1;goto B75750b;
case 0x75750d:goto L75750d;
case 0x75750f:c.instructions+=1;goto B75750f;
case 0x757514:goto L757514;
case 0x757516:goto L757516;
case 0x757518:goto L757518;
case 0x75751f:c.instructions+=1;goto B75751f;
case 0x757521:goto L757521;
case 0x757527:c.instructions+=4;goto B757527;
case 0x757529:c.instructions+=3;goto B757529;
case 0x75752b:c.instructions+=2;goto B75752b;
case 0x757530:c.instructions+=1;goto B757530;
case 0x757532:goto L757532;
case 0x757534:c.instructions+=1;goto B757534;
case 0x757539:goto L757539;
case 0x75753b:goto L75753b;
case 0x75753d:goto L75753d;
case 0x757544:c.instructions+=1;goto B757544;
case 0x757546:goto L757546;
case 0x75754c:c.instructions+=2;goto B75754c;
case 0x757552:c.instructions+=1;goto B757552;
case 0x757554:goto L757554;
case 0x75755a:c.instructions+=2;goto B75755a;
case 0x757560:c.instructions+=1;goto B757560;
case 0x757562:goto L757562;
case 0x757564:c.instructions+=1;goto B757564;
case 0x757569:goto L757569;
case 0x75756b:goto L75756b;
case 0x75756f:c.instructions+=2;goto B75756f;
case 0x757571:c.instructions+=1;goto B757571;
case 0x757573:goto L757573;
case 0x757579:c.instructions+=2;goto B757579;
case 0x75757c:c.instructions+=1;goto B75757c;
case 0x75757e:goto L75757e;
case 0x757581:c.instructions+=1;goto B757581;
case 0x757583:goto L757583;
case 0x757587:c.instructions+=2;goto B757587;
case 0x75758a:c.instructions+=1;goto B75758a;
case 0x75758c:goto L75758c;
case 0x757590:c.instructions+=2;goto B757590;
case 0x757592:c.instructions+=1;goto B757592;
case 0x757597:goto L757597;
case 0x757599:goto L757599;
case 0x75759c:c.instructions+=1;goto B75759c;
case 0x75759e:goto L75759e;
case 0x7575a1:c.instructions+=1;goto B7575a1;
case 0x7575a3:goto L7575a3;
case 0x7575a6:c.instructions+=1;goto B7575a6;
case 0x7575a8:goto L7575a8;
case 0x7575ac:c.instructions+=2;goto B7575ac;
case 0x7575ae:c.instructions+=1;goto B7575ae;
case 0x7575b3:goto L7575b3;
case 0x7575b7:c.instructions+=2;goto B7575b7;
case 0x7575b9:c.instructions+=1;goto B7575b9;
case 0x7575be:goto L7575be;
case 0x7575c0:goto L7575c0;
case 0x7575c4:c.instructions+=2;goto B7575c4;
case 0x7575c6:c.instructions+=1;goto B7575c6;
case 0x7575cb:goto L7575cb;
case 0x7575cf:goto L7575cf;
case 0x7575d2:c.instructions+=2;goto B7575d2;
case 0x7575d6:c.instructions+=1;goto B7575d6;
case 0x7575dc:goto L7575dc;
case 0x7575e2:c.instructions+=1;goto B7575e2;
case 0x7575e4:goto L7575e4;
case 0x7575e8:goto L7575e8;
case 0x7575ef:c.instructions+=1;goto B7575ef;
case 0x7575f1:goto L7575f1;
case 0x7575f3:c.instructions+=1;goto B7575f3;
case 0x7575f5:goto L7575f5;
case 0x7575f9:c.instructions+=2;goto B7575f9;
case 0x7575fb:c.instructions+=1;goto B7575fb;
case 0x7575fd:goto L7575fd;
case 0x757600:c.instructions+=1;goto B757600;
case 0x757602:goto L757602;
case 0x757608:c.instructions+=4;goto B757608;
case 0x75760c:c.instructions+=3;goto B75760c;
case 0x75760e:c.instructions+=2;goto B75760e;
case 0x757618:c.instructions+=1;goto B757618;
case 0x75761d:goto L75761d;
case 0x757625:c.instructions+=1;goto B757625;
case 0x75762b:goto L75762b;
case 0x757631:goto L757631;
case 0x757632:c.instructions+=1;goto B757632;
case 0x757638:goto L757638;
case 0x75763e:c.instructions+=2;goto B75763e;
case 0x757640:c.instructions+=1;goto B757640;
case 0x757646:goto L757646;
case 0x75764c:c.instructions+=2;goto B75764c;
case 0x75764e:c.instructions+=1;goto B75764e;
case 0x757650:goto L757650;
case 0x757651:c.instructions+=2;goto B757651;
case 0x757652:c.instructions+=1;goto B757652;
case 0x757654:goto L757654;
case 0x757657:goto L757657;
case 0x757661:c.instructions+=1;goto B757661;
case 0x757666:goto L757666;
case 0x757669:c.instructions+=1;goto B757669;
case 0x75766f:goto L75766f;
case 0x757675:c.instructions+=2;goto B757675;
case 0x757677:c.instructions+=1;goto B757677;
case 0x75767d:goto L75767d;
case 0x757683:c.instructions+=2;goto B757683;
case 0x757684:c.instructions+=1;goto B757684;
case 0x75768a:goto L75768a;
case 0x757690:c.instructions+=2;goto B757690;
case 0x757692:c.instructions+=1;goto B757692;
case 0x757694:goto L757694;
case 0x75769a:c.instructions+=3;goto B75769a;
case 0x75769c:c.instructions+=2;goto B75769c;
case 0x75769d:c.instructions+=1;goto B75769d;
case 0x7576a3:goto L7576a3;
case 0x7576a8:c.instructions+=1;goto B7576a8;
case 0x7576aa:goto L7576aa;
case 0x7576b0:c.instructions+=12;goto B7576b0;
case 0x7576b6:c.instructions+=11;goto B7576b6;
case 0x7576b7:c.instructions+=10;goto B7576b7;
case 0x7576bd:c.instructions+=9;goto B7576bd;
case 0x7576c3:c.instructions+=8;goto B7576c3;
case 0x7576c4:c.instructions+=7;goto B7576c4;
case 0x7576c5:c.instructions+=6;goto B7576c5;
case 0x7576c8:c.instructions+=5;goto B7576c8;
case 0x7576cb:c.instructions+=4;goto B7576cb;
case 0x7576d2:c.instructions+=3;goto B7576d2;
case 0x7576d3:c.instructions+=2;goto B7576d3;
case 0x7576d4:c.instructions+=1;goto B7576d4;
case 0x7576da:goto L7576da;
case 0x7576e1:c.instructions+=1;goto B7576e1;
case 0x7576eb:goto L7576eb;
case 0x7576ec:c.instructions+=1;goto B7576ec;
case 0x7576f2:goto L7576f2;
case 0x7576f4:c.instructions+=1;goto B7576f4;
case 0x757700:goto L757700;
case 0x757701:c.instructions+=6;goto B757701;
case 0x757702:c.instructions+=5;goto B757702;
case 0x757706:c.instructions+=4;goto B757706;
case 0x75770d:c.instructions+=3;goto B75770d;
case 0x75770e:c.instructions+=2;goto B75770e;
case 0x757714:c.instructions+=1;goto B757714;
case 0x757716:goto L757716;
case 0x75771b:c.instructions+=1;goto B75771b;
case 0x757721:goto L757721;
case 0x757723:c.instructions+=1;goto B757723;
case 0x757725:goto L757725;
case 0x75772b:c.instructions+=1;goto B75772b;
case 0x75772d:goto L75772d;
case 0x757737:c.instructions+=2;goto B757737;
case 0x75773c:c.instructions+=1;goto B75773c;
case 0x757740:goto L757740;
case 0x757742:c.instructions+=1;goto B757742;
case 0x757744:goto L757744;
case 0x75774a:c.instructions+=1;goto B75774a;
case 0x75774c:goto L75774c;
case 0x75774f:c.instructions+=3;goto B75774f;
case 0x757752:c.instructions+=2;goto B757752;
case 0x757758:c.instructions+=1;goto B757758;
case 0x75775a:goto L75775a;
case 0x75775c:c.instructions+=2;goto B75775c;
case 0x75775d:c.instructions+=1;goto B75775d;
case 0x757763:goto L757763;
case 0x757766:c.instructions+=3;goto B757766;
case 0x757768:c.instructions+=2;goto B757768;
case 0x757769:c.instructions+=1;goto B757769;
case 0x75776f:goto L75776f;
case 0x757772:c.instructions+=2;goto B757772;
case 0x757773:c.instructions+=1;goto B757773;
case 0x757775:goto L757775;
case 0x75777b:c.instructions+=2;goto B75777b;
case 0x75777c:c.instructions+=1;goto B75777c;
case 0x75777e:goto L75777e;
case 0x757784:c.instructions+=2;goto B757784;
case 0x757785:c.instructions+=1;goto B757785;
case 0x757787:goto L757787;
case 0x75778d:c.instructions+=2;goto B75778d;
case 0x75778e:c.instructions+=1;goto B75778e;
case 0x757790:goto L757790;
case 0x757796:c.instructions+=2;goto B757796;
case 0x757797:c.instructions+=1;goto B757797;
case 0x75779c:goto L75779c;
case 0x7577a2:c.instructions+=2;goto B7577a2;
case 0x7577a3:c.instructions+=1;goto B7577a3;
case 0x7577a8:goto L7577a8;
case 0x7577a9:c.instructions+=1;goto B7577a9;
case 0x7577ae:goto L7577ae;
case 0x7577b1:c.instructions+=4;goto B7577b1;
case 0x7577b2:c.instructions+=3;goto B7577b2;
case 0x7577b3:c.instructions+=2;goto B7577b3;
case 0x7577b4:c.instructions+=1;goto B7577b4;
case 0x7577c0:goto L7577c0;
case 0x7577c3:c.instructions+=14;goto B7577c3;
case 0x7577c7:c.instructions+=13;goto B7577c7;
case 0x7577c9:c.instructions+=12;goto B7577c9;
case 0x7577ca:c.instructions+=11;goto B7577ca;
case 0x7577ce:c.instructions+=10;goto B7577ce;
case 0x7577d6:c.instructions+=9;goto B7577d6;
case 0x7577de:c.instructions+=8;goto B7577de;
case 0x7577e6:c.instructions+=7;goto B7577e6;
case 0x7577ee:c.instructions+=6;goto B7577ee;
case 0x7577f6:c.instructions+=5;goto B7577f6;
case 0x7577fa:c.instructions+=4;goto B7577fa;
case 0x7577fe:c.instructions+=3;goto B7577fe;
case 0x757802:c.instructions+=2;goto B757802;
case 0x757806:c.instructions+=1;goto B757806;
case 0x75780c:goto L75780c;
case 0x75780f:c.instructions+=1;goto B75780f;
case 0x757815:goto L757815;
case 0x757816:c.instructions+=4;goto B757816;
case 0x757817:c.instructions+=3;goto B757817;
case 0x75781b:c.instructions+=2;goto B75781b;
case 0x75781e:c.instructions+=1;goto B75781e;
case 0x757824:goto L757824;
case 0x757826:c.instructions+=2;goto B757826;
case 0x757829:c.instructions+=1;goto B757829;
case 0x757830:goto L757830;
case 0x757832:c.instructions+=3;goto B757832;
case 0x757833:c.instructions+=2;goto B757833;
case 0x757835:c.instructions+=1;goto B757835;
case 0x757837:goto L757837;
case 0x757839:c.instructions+=3;goto B757839;
case 0x75783c:c.instructions+=2;goto B75783c;
case 0x75783e:c.instructions+=1;goto B75783e;
case 0x757844:goto L757844;
case 0x757849:c.instructions+=3;goto B757849;
case 0x75784b:c.instructions+=2;goto B75784b;
case 0x757850:c.instructions+=1;goto B757850;
case 0x757852:goto L757852;
case 0x757854:goto L757854;
case 0x757856:goto L757856;
case 0x757857:c.instructions+=4;goto B757857;
case 0x757858:c.instructions+=3;goto B757858;
case 0x75785d:c.instructions+=2;goto B75785d;
case 0x75785e:c.instructions+=1;goto B75785e;
case 0x757864:goto L757864;
case 0x757867:c.instructions+=6;goto B757867;
case 0x757868:c.instructions+=5;goto B757868;
case 0x757869:c.instructions+=4;goto B757869;
case 0x75786e:c.instructions+=3;goto B75786e;
case 0x75786f:c.instructions+=2;goto B75786f;
case 0x757872:c.instructions+=1;goto B757872;
case 0x757873:goto L757873;
case 0x757879:c.instructions+=3;goto B757879;
case 0x75787a:c.instructions+=2;goto B75787a;
case 0x75787f:c.instructions+=1;goto B75787f;
case 0x757883:goto L757883;
case 0x757885:c.instructions+=7;goto B757885;
case 0x75788a:c.instructions+=6;goto B75788a;
case 0x75788c:c.instructions+=5;goto B75788c;
case 0x75788e:c.instructions+=4;goto B75788e;
case 0x757890:c.instructions+=3;goto B757890;
case 0x757895:c.instructions+=2;goto B757895;
case 0x757896:c.instructions+=1;goto B757896;
case 0x757898:goto L757898;
case 0x75789b:c.instructions+=1;goto B75789b;
case 0x75789d:goto L75789d;
case 0x75789e:c.instructions+=1;goto B75789e;
case 0x7578a4:goto L7578a4;
case 0x7578a8:c.instructions+=1;goto B7578a8;
case 0x7578aa:goto L7578aa;
case 0x7578ae:c.instructions+=2;goto B7578ae;
case 0x7578b1:c.instructions+=1;goto B7578b1;
case 0x7578b2:goto L7578b2;
case 0x7578b3:c.instructions+=3;goto B7578b3;
case 0x7578b8:c.instructions+=2;goto B7578b8;
case 0x7578b9:c.instructions+=1;goto B7578b9;
case 0x7578bf:goto L7578bf;
case 0x7578c2:c.instructions+=1;goto B7578c2;
case 0x7578c4:goto L7578c4;
case 0x7578c7:c.instructions+=3;goto B7578c7;
case 0x7578ca:c.instructions+=2;goto B7578ca;
case 0x7578cc:c.instructions+=1;goto B7578cc;
case 0x7578ce:goto L7578ce;
case 0x7578cf:c.instructions+=8;goto B7578cf;
case 0x7578d0:c.instructions+=7;goto B7578d0;
case 0x7578d4:c.instructions+=6;goto B7578d4;
case 0x7578d5:c.instructions+=5;goto B7578d5;
case 0x7578d9:c.instructions+=4;goto B7578d9;
case 0x7578de:c.instructions+=3;goto B7578de;
case 0x7578df:c.instructions+=2;goto B7578df;
case 0x7578e2:c.instructions+=1;goto B7578e2;
case 0x7578e3:goto L7578e3;
case 0x7578e4:c.instructions+=5;goto B7578e4;
case 0x7578e5:c.instructions+=4;goto B7578e5;
case 0x7578ea:c.instructions+=3;goto B7578ea;
case 0x7578eb:c.instructions+=2;goto B7578eb;
case 0x7578ee:c.instructions+=1;goto B7578ee;
case 0x7578ef:goto L7578ef;
case 0x7578f2:c.instructions+=3;goto B7578f2;
case 0x7578f3:c.instructions+=2;goto B7578f3;
case 0x7578f6:c.instructions+=1;goto B7578f6;
case 0x757900:goto L757900;
case 0x757910:goto L757910;
case 0x757915:c.instructions+=1;goto B757915;
case 0x75791a:goto L75791a;
case 0x75791f:c.instructions+=14;goto B75791f;
case 0x757920:c.instructions+=13;goto B757920;
case 0x757921:c.instructions+=12;goto B757921;
case 0x757928:c.instructions+=11;goto B757928;
case 0x75792a:c.instructions+=10;goto B75792a;
case 0x75792b:c.instructions+=9;goto B75792b;
case 0x757932:c.instructions+=8;goto B757932;
case 0x757934:c.instructions+=7;goto B757934;
case 0x75793b:c.instructions+=6;goto B75793b;
case 0x757943:c.instructions+=5;goto B757943;
case 0x757947:c.instructions+=4;goto B757947;
case 0x75794b:c.instructions+=3;goto B75794b;
case 0x75794f:c.instructions+=2;goto B75794f;
case 0x757953:c.instructions+=1;goto B757953;
case 0x757955:goto L757955;
case 0x75795c:c.instructions+=1;goto B75795c;
case 0x75795e:goto L75795e;
case 0x757961:c.instructions+=4;goto B757961;
case 0x757963:c.instructions+=3;goto B757963;
case 0x757964:c.instructions+=2;goto B757964;
case 0x75796e:c.instructions+=1;goto B75796e;
case 0x757974:goto L757974;
case 0x757977:c.instructions+=3;goto B757977;
case 0x757979:c.instructions+=2;goto B757979;
case 0x75797a:c.instructions+=1;goto B75797a;
case 0x757980:goto L757980;
case 0x757983:c.instructions+=2;goto B757983;
case 0x757984:c.instructions+=1;goto B757984;
case 0x75798a:goto L75798a;
case 0x75798b:c.instructions+=6;goto B75798b;
case 0x757992:c.instructions+=5;goto B757992;
case 0x757993:c.instructions+=4;goto B757993;
case 0x757995:c.instructions+=3;goto B757995;
case 0x757996:c.instructions+=2;goto B757996;
case 0x75799d:c.instructions+=1;goto B75799d;
case 0x7579a2:goto L7579a2;
case 0x7579a8:c.instructions+=1;goto B7579a8;
case 0x7579a9:goto L7579a9;
case 0x7579af:c.instructions+=2;goto B7579af;
case 0x7579b2:c.instructions+=1;goto B7579b2;
case 0x7579b4:goto L7579b4;
case 0x7579b7:c.instructions+=1;goto B7579b7;
case 0x7579b9:goto L7579b9;
case 0x7579ba:c.instructions+=5;goto B7579ba;
case 0x7579bb:c.instructions+=4;goto B7579bb;
case 0x7579c0:c.instructions+=3;goto B7579c0;
case 0x7579c1:c.instructions+=2;goto B7579c1;
case 0x7579c8:c.instructions+=1;goto B7579c8;
case 0x7579cd:goto L7579cd;
case 0x7579d3:c.instructions+=1;goto B7579d3;
case 0x7579d4:goto L7579d4;
case 0x7579d7:c.instructions+=1;goto B7579d7;
case 0x7579d9:goto L7579d9;
case 0x7579de:goto L7579de;
case 0x7579e0:c.instructions+=4;goto B7579e0;
case 0x7579e4:c.instructions+=3;goto B7579e4;
case 0x7579e5:c.instructions+=2;goto B7579e5;
case 0x7579e6:c.instructions+=1;goto B7579e6;
case 0x7579eb:goto L7579eb;
case 0x7579ef:c.instructions+=3;goto B7579ef;
case 0x7579f1:c.instructions+=2;goto B7579f1;
case 0x7579f2:c.instructions+=1;goto B7579f2;
case 0x7579f7:goto L7579f7;
case 0x7579fa:c.instructions+=2;goto B7579fa;
case 0x7579fc:c.instructions+=1;goto B7579fc;
case 0x7579fe:goto L7579fe;
case 0x757a02:c.instructions+=3;goto B757a02;
case 0x757a04:c.instructions+=2;goto B757a04;
case 0x757a05:c.instructions+=1;goto B757a05;
case 0x757a0a:goto L757a0a;
case 0x757a0c:c.instructions+=3;goto B757a0c;
case 0x757a0d:c.instructions+=2;goto B757a0d;
case 0x757a10:c.instructions+=1;goto B757a10;
case 0x757a15:goto L757a15;
case 0x757a17:c.instructions+=3;goto B757a17;
case 0x757a1a:c.instructions+=2;goto B757a1a;
case 0x757a1b:c.instructions+=1;goto B757a1b;
case 0x757a1d:goto L757a1d;
case 0x757a22:goto L757a22;
case 0x757a24:c.instructions+=4;goto B757a24;
case 0x757a28:c.instructions+=3;goto B757a28;
case 0x757a2d:c.instructions+=2;goto B757a2d;
case 0x757a2e:c.instructions+=1;goto B757a2e;
case 0x757a33:goto L757a33;
case 0x757a36:c.instructions+=2;goto B757a36;
case 0x757a38:c.instructions+=1;goto B757a38;
case 0x757a3e:goto L757a3e;
case 0x757a42:c.instructions+=4;goto B757a42;
case 0x757a44:c.instructions+=3;goto B757a44;
case 0x757a46:c.instructions+=2;goto B757a46;
case 0x757a4a:c.instructions+=1;goto B757a4a;
case 0x757a4c:goto L757a4c;
case 0x757a50:goto L757a50;
case 0x757a52:c.instructions+=1;goto B757a52;
case 0x757a54:goto L757a54;
case 0x757a57:c.instructions+=6;goto B757a57;
case 0x757a5b:c.instructions+=5;goto B757a5b;
case 0x757a5c:c.instructions+=4;goto B757a5c;
case 0x757a5f:c.instructions+=3;goto B757a5f;
case 0x757a61:c.instructions+=2;goto B757a61;
case 0x757a63:c.instructions+=1;goto B757a63;
case 0x757a65:goto L757a65;
case 0x757a68:goto L757a68;
case 0x757a6b:c.instructions+=4;goto B757a6b;
case 0x757a70:c.instructions+=3;goto B757a70;
case 0x757a75:c.instructions+=2;goto B757a75;
case 0x757a76:c.instructions+=1;goto B757a76;
case 0x757a7c:goto L757a7c;
case 0x757a7f:c.instructions+=4;goto B757a7f;
case 0x757a83:c.instructions+=3;goto B757a83;
case 0x757a84:c.instructions+=2;goto B757a84;
case 0x757a85:c.instructions+=1;goto B757a85;
case 0x757a8b:goto L757a8b;
case 0x757a8e:c.instructions+=3;goto B757a8e;
case 0x757a90:c.instructions+=2;goto B757a90;
case 0x757a91:c.instructions+=1;goto B757a91;
case 0x757a97:goto L757a97;
case 0x757a99:c.instructions+=1;goto B757a99;
case 0x757a9f:goto L757a9f;
case 0x757aa2:c.instructions+=7;goto B757aa2;
case 0x757aa6:c.instructions+=6;goto B757aa6;
case 0x757aa7:c.instructions+=5;goto B757aa7;
case 0x757aab:c.instructions+=4;goto B757aab;
case 0x757aac:c.instructions+=3;goto B757aac;
case 0x757aad:c.instructions+=2;goto B757aad;
case 0x757ab5:c.instructions+=1;goto B757ab5;
case 0x757abb:goto L757abb;
case 0x757abf:c.instructions+=11;goto B757abf;
case 0x757ac3:c.instructions+=10;goto B757ac3;
case 0x757ac6:c.instructions+=9;goto B757ac6;
case 0x757ac9:c.instructions+=8;goto B757ac9;
case 0x757ace:c.instructions+=7;goto B757ace;
case 0x757ad2:c.instructions+=6;goto B757ad2;
case 0x757ad3:c.instructions+=5;goto B757ad3;
case 0x757ad7:c.instructions+=4;goto B757ad7;
case 0x757ad8:c.instructions+=3;goto B757ad8;
case 0x757ad9:c.instructions+=2;goto B757ad9;
case 0x757ade:c.instructions+=1;goto B757ade;
case 0x757ae4:goto L757ae4;
case 0x757ae9:goto L757ae9;
case 0x757aeb:c.instructions+=8;goto B757aeb;
case 0x757af0:c.instructions+=7;goto B757af0;
case 0x757af2:c.instructions+=6;goto B757af2;
case 0x757af4:c.instructions+=5;goto B757af4;
case 0x757af6:c.instructions+=4;goto B757af6;
case 0x757afb:c.instructions+=3;goto B757afb;
case 0x757aff:c.instructions+=2;goto B757aff;
case 0x757b00:c.instructions+=1;goto B757b00;
case 0x757b06:goto L757b06;
case 0x757b09:c.instructions+=2;goto B757b09;
case 0x757b0c:c.instructions+=1;goto B757b0c;
case 0x757b12:goto L757b12;
case 0x757b13:c.instructions+=5;goto B757b13;
case 0x757b14:c.instructions+=4;goto B757b14;
case 0x757b19:c.instructions+=3;goto B757b19;
case 0x757b1a:c.instructions+=2;goto B757b1a;
case 0x757b21:c.instructions+=1;goto B757b21;
case 0x757b26:goto L757b26;
case 0x757b2c:c.instructions+=1;goto B757b2c;
case 0x757b2d:goto L757b2d;
case 0x757b30:c.instructions+=5;goto B757b30;
case 0x757b34:c.instructions+=4;goto B757b34;
case 0x757b35:c.instructions+=3;goto B757b35;
case 0x757b36:c.instructions+=2;goto B757b36;
case 0x757b3e:c.instructions+=1;goto B757b3e;
case 0x757b44:goto L757b44;
case 0x757b48:c.instructions+=11;goto B757b48;
case 0x757b4b:c.instructions+=10;goto B757b4b;
case 0x757b50:c.instructions+=9;goto B757b50;
case 0x757b53:c.instructions+=8;goto B757b53;
case 0x757b56:c.instructions+=7;goto B757b56;
case 0x757b59:c.instructions+=6;goto B757b59;
case 0x757b5b:c.instructions+=5;goto B757b5b;
case 0x757b60:c.instructions+=4;goto B757b60;
case 0x757b65:c.instructions+=3;goto B757b65;
case 0x757b6a:c.instructions+=2;goto B757b6a;
case 0x757b6e:c.instructions+=1;goto B757b6e;
case 0x757b74:goto L757b74;
case 0x757b76:c.instructions+=2;goto B757b76;
case 0x757b78:c.instructions+=1;goto B757b78;
case 0x757b7e:goto L757b7e;
case 0x757b80:c.instructions+=1;goto B757b80;
case 0x757b82:goto L757b82;
case 0x757b83:goto L757b83;
case 0x757b85:c.instructions+=3;goto B757b85;
case 0x757b8a:c.instructions+=2;goto B757b8a;
case 0x757b8b:c.instructions+=1;goto B757b8b;
case 0x757b90:goto L757b90;
case 0x757b93:c.instructions+=2;goto B757b93;
case 0x757b95:c.instructions+=1;goto B757b95;
case 0x757b97:goto L757b97;
case 0x757b9b:c.instructions+=3;goto B757b9b;
case 0x757ba1:c.instructions+=2;goto B757ba1;
case 0x757ba7:c.instructions+=1;goto B757ba7;
case 0x757bab:goto L757bab;
case 0x757bad:c.instructions+=3;goto B757bad;
case 0x757bb2:c.instructions+=2;goto B757bb2;
case 0x757bb3:c.instructions+=1;goto B757bb3;
case 0x757bb8:goto L757bb8;
case 0x757bbb:c.instructions+=2;goto B757bbb;
case 0x757bbd:c.instructions+=1;goto B757bbd;
case 0x757bbf:goto L757bbf;
case 0x757bc3:c.instructions+=3;goto B757bc3;
case 0x757bc9:c.instructions+=2;goto B757bc9;
case 0x757bcf:c.instructions+=1;goto B757bcf;
case 0x757bd3:goto L757bd3;
case 0x757bd5:c.instructions+=3;goto B757bd5;
case 0x757bda:c.instructions+=2;goto B757bda;
case 0x757bdb:c.instructions+=1;goto B757bdb;
case 0x757be0:goto L757be0;
case 0x757be3:c.instructions+=2;goto B757be3;
case 0x757be5:c.instructions+=1;goto B757be5;
case 0x757be7:goto L757be7;
case 0x757bec:goto L757bec;
case 0x757bee:c.instructions+=3;goto B757bee;
case 0x757bf3:c.instructions+=2;goto B757bf3;
case 0x757bf4:c.instructions+=1;goto B757bf4;
case 0x757bf9:goto L757bf9;
case 0x757bfc:c.instructions+=2;goto B757bfc;
case 0x757bfe:c.instructions+=1;goto B757bfe;
case 0x757c00:goto L757c00;
case 0x757c05:goto L757c05;
case 0x757c07:c.instructions+=2;goto B757c07;
case 0x757c09:c.instructions+=1;goto B757c09;
case 0x757c0b:goto L757c0b;
case 0x757c0d:c.instructions+=1;goto B757c0d;
case 0x757c0f:goto L757c0f;
case 0x757c11:c.instructions+=5;goto B757c11;
case 0x757c13:c.instructions+=4;goto B757c13;
case 0x757c17:c.instructions+=3;goto B757c17;
case 0x757c19:c.instructions+=2;goto B757c19;
case 0x757c1b:c.instructions+=1;goto B757c1b;
case 0x757c1d:goto L757c1d;
case 0x757c20:goto L757c20;
case 0x757c22:c.instructions+=1;goto B757c22;
case 0x757c24:goto L757c24;
case 0x757c27:c.instructions+=7;goto B757c27;
case 0x757c2a:c.instructions+=6;goto B757c2a;
case 0x757c2d:c.instructions+=5;goto B757c2d;
case 0x757c2e:c.instructions+=4;goto B757c2e;
case 0x757c32:c.instructions+=3;goto B757c32;
case 0x757c34:c.instructions+=2;goto B757c34;
case 0x757c36:c.instructions+=1;goto B757c36;
case 0x757c38:goto L757c38;
case 0x757c3a:c.instructions+=2;goto B757c3a;
case 0x757c3c:c.instructions+=1;goto B757c3c;
case 0x757c42:goto L757c42;
case 0x757c44:c.instructions+=1;goto B757c44;
case 0x757c4a:goto L757c4a;
case 0x757c4d:c.instructions+=3;goto B757c4d;
case 0x757c4e:c.instructions+=2;goto B757c4e;
case 0x757c50:c.instructions+=1;goto B757c50;
case 0x757c52:goto L757c52;
case 0x757c57:goto L757c57;
case 0x757c5a:c.instructions+=4;goto B757c5a;
case 0x757c5e:c.instructions+=3;goto B757c5e;
case 0x757c5f:c.instructions+=2;goto B757c5f;
case 0x757c60:c.instructions+=1;goto B757c60;
case 0x757c66:goto L757c66;
case 0x757c69:c.instructions+=3;goto B757c69;
case 0x757c6b:c.instructions+=2;goto B757c6b;
case 0x757c6c:c.instructions+=1;goto B757c6c;
case 0x757c72:goto L757c72;
case 0x757c78:c.instructions+=3;goto B757c78;
case 0x757c7e:c.instructions+=2;goto B757c7e;
case 0x757c7f:c.instructions+=1;goto B757c7f;
case 0x757c81:goto L757c81;
case 0x757c87:c.instructions+=2;goto B757c87;
case 0x757c88:c.instructions+=1;goto B757c88;
case 0x757c8a:goto L757c8a;
case 0x757c90:c.instructions+=2;goto B757c90;
case 0x757c91:c.instructions+=1;goto B757c91;
case 0x757c93:goto L757c93;
case 0x757c99:c.instructions+=11;goto B757c99;
case 0x757c9b:c.instructions+=10;goto B757c9b;
case 0x757c9e:c.instructions+=9;goto B757c9e;
case 0x757ca5:c.instructions+=8;goto B757ca5;
case 0x757ca8:c.instructions+=7;goto B757ca8;
case 0x757ca9:c.instructions+=6;goto B757ca9;
case 0x757cab:c.instructions+=5;goto B757cab;
case 0x757cae:c.instructions+=4;goto B757cae;
case 0x757cb4:c.instructions+=3;goto B757cb4;
case 0x757cb5:c.instructions+=2;goto B757cb5;
case 0x757cb6:c.instructions+=1;goto B757cb6;
case 0x757cbb:goto L757cbb;
case 0x757cc1:c.instructions+=1;goto B757cc1;
case 0x757cd0:goto L757cd0;
case 0x757cd1:c.instructions+=4;goto B757cd1;
case 0x757cd5:c.instructions+=3;goto B757cd5;
case 0x757cd7:c.instructions+=2;goto B757cd7;
case 0x757cd8:c.instructions+=1;goto B757cd8;
case 0x757cda:goto L757cda;
case 0x757cde:c.instructions+=2;goto B757cde;
case 0x757ce5:c.instructions+=1;goto B757ce5;
case 0x757ce7:goto L757ce7;
case 0x757ce8:c.instructions+=3;goto B757ce8;
case 0x757cee:c.instructions+=2;goto B757cee;
case 0x757cef:c.instructions+=1;goto B757cef;
case 0x757cf5:goto L757cf5;
case 0x757cf6:c.instructions+=2;goto B757cf6;
case 0x757cf7:c.instructions+=1;goto B757cf7;
case 0x757cfc:goto L757cfc;
case 0x757cfe:c.instructions+=4;goto B757cfe;
case 0x757d04:c.instructions+=3;goto B757d04;
case 0x757d07:c.instructions+=2;goto B757d07;
case 0x757d0a:c.instructions+=1;goto B757d0a;
case 0x757d0c:goto L757d0c;
case 0x757d16:goto L757d16;
case 0x757d17:c.instructions+=1;goto B757d17;
case 0x757d1d:goto L757d1d;
case 0x757d1e:c.instructions+=4;goto B757d1e;
case 0x757d1f:c.instructions+=3;goto B757d1f;
case 0x757d21:c.instructions+=2;goto B757d21;
case 0x757d22:c.instructions+=1;goto B757d22;
case 0x757d23:goto L757d23;
case 0x757d24:c.instructions+=3;goto B757d24;
case 0x757d29:c.instructions+=2;goto B757d29;
case 0x757d2a:c.instructions+=1;goto B757d2a;
case 0x757d30:goto L757d30;
case 0x757d31:c.instructions+=4;goto B757d31;
case 0x757d35:c.instructions+=3;goto B757d35;
case 0x757d3b:c.instructions+=2;goto B757d3b;
case 0x757d3e:c.instructions+=1;goto B757d3e;
case 0x757d40:goto L757d40;
case 0x757d43:c.instructions+=3;goto B757d43;
case 0x757d44:c.instructions+=2;goto B757d44;
case 0x757d4a:c.instructions+=1;goto B757d4a;
case 0x757d4c:goto L757d4c;
case 0x757d56:goto L757d56;
case 0x757d58:c.instructions+=1;goto B757d58;
case 0x757d5a:goto L757d5a;
case 0x757d61:c.instructions+=1;goto B757d61;
case 0x757d63:goto L757d63;
case 0x757d6d:c.instructions+=1;goto B757d6d;
case 0x757d70:goto L757d70;
case 0x757d72:c.instructions+=1;goto B757d72;
case 0x757d74:goto L757d74;
case 0x757d7b:c.instructions+=1;goto B757d7b;
case 0x757d7d:goto L757d7d;
case 0x757d80:c.instructions+=3;goto B757d80;
case 0x757d83:c.instructions+=2;goto B757d83;
case 0x757d84:c.instructions+=1;goto B757d84;
case 0x757d86:goto L757d86;
case 0x757d88:c.instructions+=2;goto B757d88;
case 0x757d89:c.instructions+=1;goto B757d89;
case 0x757d8f:goto L757d8f;
case 0x757d92:c.instructions+=3;goto B757d92;
case 0x757d94:c.instructions+=2;goto B757d94;
case 0x757d95:c.instructions+=1;goto B757d95;
case 0x757d9b:goto L757d9b;
case 0x757d9e:c.instructions+=2;goto B757d9e;
case 0x757d9f:c.instructions+=1;goto B757d9f;
case 0x757da5:goto L757da5;
case 0x757dac:goto L757dac;
case 0x757dae:c.instructions+=2;goto B757dae;
case 0x757daf:c.instructions+=1;goto B757daf;
case 0x757db0:goto L757db0;
case 0x757db1:c.instructions+=4;goto B757db1;
case 0x757db5:c.instructions+=3;goto B757db5;
case 0x757db7:c.instructions+=2;goto B757db7;
case 0x757db8:c.instructions+=1;goto B757db8;
case 0x757dba:goto L757dba;
case 0x757dbe:c.instructions+=2;goto B757dbe;
case 0x757dc5:c.instructions+=1;goto B757dc5;
case 0x757dc7:goto L757dc7;
case 0x757dc8:c.instructions+=3;goto B757dc8;
case 0x757dce:c.instructions+=2;goto B757dce;
case 0x757dcf:c.instructions+=1;goto B757dcf;
case 0x757dd5:goto L757dd5;
case 0x757dd6:c.instructions+=2;goto B757dd6;
case 0x757dd7:c.instructions+=1;goto B757dd7;
case 0x757ddc:goto L757ddc;
case 0x757dde:c.instructions+=4;goto B757dde;
case 0x757de4:c.instructions+=3;goto B757de4;
case 0x757de7:c.instructions+=2;goto B757de7;
case 0x757dea:c.instructions+=1;goto B757dea;
case 0x757dec:goto L757dec;
case 0x757df6:goto L757df6;
case 0x757df7:c.instructions+=1;goto B757df7;
case 0x757dfd:goto L757dfd;
case 0x757dfe:c.instructions+=4;goto B757dfe;
case 0x757dff:c.instructions+=3;goto B757dff;
case 0x757e01:c.instructions+=2;goto B757e01;
case 0x757e02:c.instructions+=1;goto B757e02;
case 0x757e03:goto L757e03;
case 0x757e04:c.instructions+=3;goto B757e04;
case 0x757e09:c.instructions+=2;goto B757e09;
case 0x757e0a:c.instructions+=1;goto B757e0a;
case 0x757e10:goto L757e10;
case 0x757e20:goto L757e20;
case 0x757e24:c.instructions+=3;goto B757e24;
case 0x757e2a:c.instructions+=2;goto B757e2a;
case 0x757e2d:c.instructions+=1;goto B757e2d;
case 0x757e2f:goto L757e2f;
case 0x757e32:c.instructions+=1;goto B757e32;
case 0x757e34:goto L757e34;
case 0x757e37:c.instructions+=1;goto B757e37;
case 0x757e39:goto L757e39;
case 0x757e3c:c.instructions+=1;goto B757e3c;
case 0x757e3e:goto L757e3e;
case 0x757e41:c.instructions+=1;goto B757e41;
case 0x757e43:goto L757e43;
case 0x757e46:c.instructions+=1;goto B757e46;
case 0x757e48:goto L757e48;
case 0x757e4d:c.instructions+=1;goto B757e4d;
case 0x757e4e:goto L757e4e;
case 0x757e53:c.instructions+=1;goto B757e53;
case 0x757e54:goto L757e54;
case 0x757e59:c.instructions+=1;goto B757e59;
case 0x757e5a:goto L757e5a;
case 0x757e5f:c.instructions+=1;goto B757e5f;
case 0x757e60:goto L757e60;
case 0x757e61:c.instructions+=4;goto B757e61;
case 0x757e65:c.instructions+=3;goto B757e65;
case 0x757e6b:c.instructions+=2;goto B757e6b;
case 0x757e6e:c.instructions+=1;goto B757e6e;
case 0x757e70:goto L757e70;
case 0x757e73:c.instructions+=1;goto B757e73;
case 0x757e75:goto L757e75;
case 0x757e7a:c.instructions+=2;goto B757e7a;
case 0x757e7b:c.instructions+=1;goto B757e7b;
case 0x757e7c:goto L757e7c;
case 0x757e7d:c.instructions+=12;goto B757e7d;
case 0x757e83:c.instructions+=11;goto B757e83;
case 0x757e84:c.instructions+=10;goto B757e84;
case 0x757e8a:c.instructions+=9;goto B757e8a;
case 0x757e8d:c.instructions+=8;goto B757e8d;
case 0x757e8e:c.instructions+=7;goto B757e8e;
case 0x757e94:c.instructions+=6;goto B757e94;
case 0x757e95:c.instructions+=5;goto B757e95;
case 0x757e97:c.instructions+=4;goto B757e97;
case 0x757e9d:c.instructions+=3;goto B757e9d;
case 0x757ea1:c.instructions+=2;goto B757ea1;
case 0x757ea3:c.instructions+=1;goto B757ea3;
case 0x757ea5:goto L757ea5;
case 0x757ea6:c.instructions+=5;goto B757ea6;
case 0x757ea7:c.instructions+=4;goto B757ea7;
case 0x757ea8:c.instructions+=3;goto B757ea8;
case 0x757eaa:c.instructions+=2;goto B757eaa;
case 0x757eab:c.instructions+=1;goto B757eab;
case 0x757eac:goto L757eac;
case 0x757eb0:c.instructions+=2;goto B757eb0;
case 0x757eb2:c.instructions+=1;goto B757eb2;
case 0x757eb4:goto L757eb4;
case 0x757eb8:c.instructions+=14;goto B757eb8;
case 0x757eba:c.instructions+=13;goto B757eba;
case 0x757ebc:c.instructions+=12;goto B757ebc;
case 0x757ebe:c.instructions+=11;goto B757ebe;
case 0x757ebf:c.instructions+=10;goto B757ebf;
case 0x757ec1:c.instructions+=9;goto B757ec1;
case 0x757ec2:c.instructions+=8;goto B757ec2;
case 0x757ec3:c.instructions+=7;goto B757ec3;
case 0x757ec5:c.instructions+=6;goto B757ec5;
case 0x757ec6:c.instructions+=5;goto B757ec6;
case 0x757ec8:c.instructions+=4;goto B757ec8;
case 0x757ec9:c.instructions+=3;goto B757ec9;
case 0x757eca:c.instructions+=2;goto B757eca;
case 0x757ecb:c.instructions+=1;goto B757ecb;
case 0x757ecc:goto L757ecc;
case 0x757ed2:c.instructions+=7;goto B757ed2;
case 0x757ed4:c.instructions+=6;goto B757ed4;
case 0x757ed7:c.instructions+=5;goto B757ed7;
case 0x757edd:c.instructions+=4;goto B757edd;
case 0x757ee2:c.instructions+=3;goto B757ee2;
case 0x757ee5:c.instructions+=2;goto B757ee5;
case 0x757ee7:c.instructions+=1;goto B757ee7;
case 0x757ee9:goto L757ee9;
case 0x757eea:c.instructions+=5;goto B757eea;
case 0x757eeb:c.instructions+=4;goto B757eeb;
case 0x757eec:c.instructions+=3;goto B757eec;
case 0x757ef1:c.instructions+=2;goto B757ef1;
case 0x757ef2:c.instructions+=1;goto B757ef2;
case 0x757ef3:goto L757ef3;
case 0x757ef7:c.instructions+=3;goto B757ef7;
case 0x757ef9:c.instructions+=2;goto B757ef9;
case 0x757efc:c.instructions+=1;goto B757efc;
case 0x757eff:goto L757eff;
case 0x757f01:goto L757f01;
case 0x757f03:c.instructions+=1;goto B757f03;
case 0x757f06:goto L757f06;
case 0x757f08:goto L757f08;
case 0x757f0e:c.instructions+=8;goto B757f0e;
case 0x757f11:c.instructions+=7;goto B757f11;
case 0x757f17:c.instructions+=6;goto B757f17;
case 0x757f1d:c.instructions+=5;goto B757f1d;
case 0x757f1e:c.instructions+=4;goto B757f1e;
case 0x757f1f:c.instructions+=3;goto B757f1f;
case 0x757f25:c.instructions+=2;goto B757f25;
case 0x757f28:c.instructions+=1;goto B757f28;
case 0x757f2e:goto L757f2e;
case 0x757f31:c.instructions+=9;goto B757f31;
case 0x757f37:c.instructions+=8;goto B757f37;
case 0x757f3d:c.instructions+=7;goto B757f3d;
case 0x757f3f:c.instructions+=6;goto B757f3f;
case 0x757f40:c.instructions+=5;goto B757f40;
case 0x757f46:c.instructions+=4;goto B757f46;
case 0x757f4c:c.instructions+=3;goto B757f4c;
case 0x757f4d:c.instructions+=2;goto B757f4d;
case 0x757f53:c.instructions+=1;goto B757f53;
case 0x757f59:goto L757f59;
case 0x757f5b:c.instructions+=1;goto B757f5b;
case 0x757f60:goto L757f60;
case 0x757f61:c.instructions+=1;goto B757f61;
case 0x757f67:goto L757f67;
case 0x757f6d:c.instructions+=11;goto B757f6d;
case 0x757f73:c.instructions+=10;goto B757f73;
case 0x757f79:c.instructions+=9;goto B757f79;
case 0x757f7b:c.instructions+=8;goto B757f7b;
case 0x757f7d:c.instructions+=7;goto B757f7d;
case 0x757f7e:c.instructions+=6;goto B757f7e;
case 0x757f80:c.instructions+=5;goto B757f80;
case 0x757f82:c.instructions+=4;goto B757f82;
case 0x757f83:c.instructions+=3;goto B757f83;
case 0x757f89:c.instructions+=2;goto B757f89;
case 0x757f8b:c.instructions+=1;goto B757f8b;
case 0x757f8d:goto L757f8d;
case 0x757f92:goto L757f92;
case 0x757f93:c.instructions+=4;goto B757f93;
case 0x757f94:c.instructions+=3;goto B757f94;
case 0x757f95:c.instructions+=2;goto B757f95;
case 0x757f96:c.instructions+=1;goto B757f96;
case 0x757fa0:goto L757fa0;
case 0x757fa1:c.instructions+=4;goto B757fa1;
case 0x757fa5:c.instructions+=3;goto B757fa5;
case 0x757fab:c.instructions+=2;goto B757fab;
case 0x757fb1:c.instructions+=1;goto B757fb1;
case 0x757fb3:goto L757fb3;
case 0x757fb8:c.instructions+=2;goto B757fb8;
case 0x757fb9:c.instructions+=1;goto B757fb9;
case 0x757fba:goto L757fba;
case 0x757fc0:c.instructions+=3;goto B757fc0;
case 0x757fc2:c.instructions+=2;goto B757fc2;
case 0x757fc3:c.instructions+=1;goto B757fc3;
case 0x757fc5:goto L757fc5;
case 0x757fcb:c.instructions+=1;goto B757fcb;
case 0x757fd0:goto L757fd0;
case 0x757fd2:c.instructions+=1;goto B757fd2;
case 0x757fd4:goto L757fd4;
case 0x757fda:c.instructions+=2;goto B757fda;
case 0x757fdc:c.instructions+=1;goto B757fdc;
case 0x757fde:goto L757fde;
case 0x757fe4:c.instructions+=6;goto B757fe4;
case 0x757fea:c.instructions+=5;goto B757fea;
case 0x757fed:c.instructions+=4;goto B757fed;
case 0x757ff1:c.instructions+=3;goto B757ff1;
case 0x757ff3:c.instructions+=2;goto B757ff3;
case 0x757ff5:c.instructions+=1;goto B757ff5;
case 0x757ff7:goto L757ff7;
case 0x757ff9:goto L757ff9;
case 0x757ffd:c.instructions+=2;goto B757ffd;
case 0x757fff:c.instructions+=1;goto B757fff;
default:missing_instruction(c.pc);}
B757001:L757001:{c.instructions+=1;NFSU2_TR(0x757001);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B757010:L757010:{c.instructions+=4;NFSU2_TR(0x757010);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B757011:{NFSU2_TR(0x757011);
__builtin_memmove((R+12),(R+4),4);
}
B757013:{NFSU2_TR(0x757013);
u8 U[18];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+10),(U+0),4);
w1(R+512,u8((r4(U+10))<(u32(0x0ull))));
w1(R+523,sborrow<u32>(r4(U+10),u32(0x0ull)));
w4(U+14,u32(u32(r4(U+10))-u32(u32(0x0ull))));
w1(R+519,u8(s32(r4(U+14))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+14))==(u32(0x0ull))));
w4(U+4,u32(u32(r4(U+14))&u32(u32(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r4(U+4)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B757016:{NFSU2_TR(0x757016);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L75706a;}}
}
B757018:L757018:{c.instructions+=3;NFSU2_TR(0x757018);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B75701b:{NFSU2_TR(0x75701b);
u8 U[22];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(R+4))<(r4(U+14))));
w1(R+523,sborrow<u32>(r4(R+4),r4(U+14)));
w4(U+18,u32(u32(r4(R+4))-u32(r4(U+14))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B757021:{NFSU2_TR(0x757021);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L75706a;}}
}
B757023:L757023:{c.instructions+=3;NFSU2_TR(0x757023);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B757026:{NFSU2_TR(0x757026);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B757029:{NFSU2_TR(0x757029);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L757039;}}
}
B75702b:L75702b:{c.instructions+=2;NFSU2_TR(0x75702b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
w4(U+4,u32(0x2ull));
s4(u32(r4(U+0)),r4(U+4));
}
B757032:{NFSU2_TR(0x757032);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x757037ull));
TAIL_STATIC(0x756e60u,756);
}
B757037:L757037:{c.instructions+=2;NFSU2_TR(0x757037);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B757038:{NFSU2_TR(0x757038);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B757039:L757039:{c.instructions+=2;NFSU2_TR(0x757039);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B75703c:{NFSU2_TR(0x75703c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L757052;}}
}
B75703e:L75703e:{c.instructions+=2;NFSU2_TR(0x75703e);
u8 U[22];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(r4(R+4))));
w1(R+523,sborrow<u32>(r4(U+14),r4(R+4)));
w4(U+18,u32(u32(r4(U+14))-u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B757044:{NFSU2_TR(0x757044);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L75706a;}}
}
B757046:L757046:{c.instructions+=3;NFSU2_TR(0x757046);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xc8ull))));
w4(U+4,u32(0x4ull));
s4(u32(r4(U+0)),r4(U+4));
}
B757050:{NFSU2_TR(0x757050);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B757051:{NFSU2_TR(0x757051);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B757052:L757052:{c.instructions+=2;NFSU2_TR(0x757052);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
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
B757055:{NFSU2_TR(0x757055);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L75706a;}}
}
B757057:L757057:{c.instructions+=2;NFSU2_TR(0x757057);
u8 U[22];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xc8ull))));
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
B75705e:{NFSU2_TR(0x75705e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L75706a;}}
}
B757060:L757060:{c.instructions+=1;NFSU2_TR(0x757060);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xc8ull))));
w4(U+4,u32(0x7ull));
s4(u32(r4(U+0)),r4(U+4));
}
B75706a:L75706a:{c.instructions+=2;NFSU2_TR(0x75706a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B75706b:{NFSU2_TR(0x75706b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B757070:L757070:{c.instructions+=8;NFSU2_TR(0x757070);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x814ull))));
}
B757076:{NFSU2_TR(0x757076);
__builtin_memmove((R+0),gp(0x81a1d0),4);
}
B75707b:{NFSU2_TR(0x75707b);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75707c:{NFSU2_TR(0x75707c);
__builtin_memmove((R+12),(R+4),4);
}
B75707e:{NFSU2_TR(0x75707e);
u8 U[8];
w4(U+0,u32(u32(u32(0x814ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B757085:{NFSU2_TR(0x757085);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B75708b:{NFSU2_TR(0x75708b);
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
B75708d:{NFSU2_TR(0x75708d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L7570a5;}}
}
B75708f:L75708f:{c.instructions+=2;NFSU2_TR(0x75708f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B757090:{NFSU2_TR(0x757090);
__builtin_memmove((R+24),gp(0x78320c),4);
}
B757096:L757096:{c.instructions+=1;NFSU2_TR(0x757096);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x757098ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B757098:L757098:{c.instructions+=4;NFSU2_TR(0x757098);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+12))));
}
B75709a:{NFSU2_TR(0x75709a);
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
B75709c:{NFSU2_TR(0x75709c);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xccull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7570a2:{NFSU2_TR(0x7570a2);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x757096u);}goto L757096;}}
}
B7570a4:L7570a4:{c.instructions+=1;NFSU2_TR(0x7570a4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B7570a5:L7570a5:{c.instructions+=6;NFSU2_TR(0x7570a5);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7570ab:{NFSU2_TR(0x7570ab);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7570af:{NFSU2_TR(0x7570af);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B7570b3:{NFSU2_TR(0x7570b3);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B7570bb:{NFSU2_TR(0x7570bb);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B7570c3:{NFSU2_TR(0x7570c3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7570c8ull));
TAIL_STATIC(0x756e60u,756);
}
B7570c8:L7570c8:{c.instructions+=3;NFSU2_TR(0x7570c8);
u8 U[8];
w4(U+0,u32(u32(u32(0x814ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7570cf:{NFSU2_TR(0x7570cf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B7570d0:{NFSU2_TR(0x7570d0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7570d5ull));
TAIL_STATIC(0x76115eu,761);
}
B7570d5:L7570d5:{c.instructions+=2;NFSU2_TR(0x7570d5);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x814ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x814ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x814ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B7570db:{NFSU2_TR(0x7570db);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7570e0:L7570e0:{c.instructions+=13;NFSU2_TR(0x7570e0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x814ull))));
}
B7570e6:{NFSU2_TR(0x7570e6);
__builtin_memmove((R+0),gp(0x81a1d0),4);
}
B7570eb:{NFSU2_TR(0x7570eb);
u8 U[8];
w4(U+0,u32(u32(u32(0x810ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7570f2:{NFSU2_TR(0x7570f2);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7570f3:{NFSU2_TR(0x7570f3);
__builtin_memmove((R+12),(R+4),4);
}
B7570f5:{NFSU2_TR(0x7570f5);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7570fb:{NFSU2_TR(0x7570fb);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B757101:{NFSU2_TR(0x757101);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B757105:{NFSU2_TR(0x757105);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
}
B757106:{NFSU2_TR(0x757106);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B75710a:{NFSU2_TR(0x75710a);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B75710e:{NFSU2_TR(0x75710e);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B757116:{NFSU2_TR(0x757116);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75711bull));
TAIL_STATIC(0x756e60u,756);
}
B75711b:L75711b:{c.instructions+=3;NFSU2_TR(0x75711b);
u8 U[8];
w4(U+0,u32(u32(u32(0x814ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B757122:{NFSU2_TR(0x757122);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B757123:{NFSU2_TR(0x757123);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x757128ull));
TAIL_STATIC(0x76115eu,761);
}
B757128:L757128:{c.instructions+=2;NFSU2_TR(0x757128);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x814ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x814ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x814ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B75712e:{NFSU2_TR(0x75712e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B757130:L757130:{c.instructions+=8;NFSU2_TR(0x757130);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B757131:{NFSU2_TR(0x757131);
__builtin_memmove((R+12),(R+0),4);
}
B757133:{NFSU2_TR(0x757133);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xf4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B757139:{NFSU2_TR(0x757139);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xf8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+8))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B75713f:{NFSU2_TR(0x75713f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B757140:{NFSU2_TR(0x757140);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B757141:{NFSU2_TR(0x757141);
w4(R+28,u32(0x800ull));
}
B757146:{NFSU2_TR(0x757146);
if(r1(R+518)){{goto L757172;}}
}
B757148:L757148:{c.instructions+=5;NFSU2_TR(0x757148);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xfcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B75714e:{NFSU2_TR(0x75714e);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B757154:{NFSU2_TR(0x757154);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B757155:{NFSU2_TR(0x757155);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B75715b:{NFSU2_TR(0x75715b);
{goto L757160;}
}
B757160:L757160:{c.instructions+=6;NFSU2_TR(0x757160);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
w4(R+28,u32(u32(r4(R+28))-u32(r4(U+8))));
}
B757163:{NFSU2_TR(0x757163);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B757166:{NFSU2_TR(0x757166);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B757167:{NFSU2_TR(0x757167);
u8 U[56];
w8(U+0,u64(s64(s32(r4(R+20)))));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x757167);w8(U+40,u64(x_/y_));}
w4(R+0,u32(r8(U+40)));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x757167);w8(U+48,u64(x_%y_));}
w4(R+8,u32(r8(U+48)));
}
B757169:{NFSU2_TR(0x757169);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xf8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+8))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B75716f:{NFSU2_TR(0x75716f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x757160u);}goto L757160;}}
}
B757171:L757171:{c.instructions+=1;NFSU2_TR(0x757171);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B757172:L757172:{c.instructions+=3;NFSU2_TR(0x757172);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xf8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B757178:{NFSU2_TR(0x757178);
u8 U[22];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xf0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+14))));
w1(R+523,sborrow<u32>(r4(R+0),r4(U+14)));
w4(U+18,u32(u32(r4(R+0))-u32(r4(U+14))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B75717e:{NFSU2_TR(0x75717e);
if(r1(R+518)){{goto L7571f0;}}
}
B757180:L757180:{c.instructions+=6;NFSU2_TR(0x757180);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xf8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B757186:{NFSU2_TR(0x757186);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xfcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B75718c:{NFSU2_TR(0x75718c);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xf4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B757192:{NFSU2_TR(0x757192);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+0))));
}
B757194:{NFSU2_TR(0x757194);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B757196:{NFSU2_TR(0x757196);
if(r1(R+518)){{goto L75719c;}}
}
B757198:L757198:{c.instructions+=2;NFSU2_TR(0x757198);
u8 U[18];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((U+10),(U+0),4);
w1(R+512,u8((r4(U+10))<(r4(R+28))));
w1(R+523,sborrow<u32>(r4(U+10),r4(R+28)));
w4(U+14,u32(u32(r4(U+10))-u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+14))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+14))==(u32(0x0ull))));
w4(U+4,u32(u32(r4(U+14))&u32(u32(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r4(U+4)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B75719a:{NFSU2_TR(0x75719a);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L7571f0;}}
}
B75719c:L75719c:{c.instructions+=8;NFSU2_TR(0x75719c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B75719e:{NFSU2_TR(0x75719e);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7571a4:{NFSU2_TR(0x7571a4);
w4(R+28,u32(u32(r4(R+28))-u32(r4(R+0))));
}
B7571a6:{NFSU2_TR(0x7571a6);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
}
B7571a7:{NFSU2_TR(0x7571a7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7571aa:{NFSU2_TR(0x7571aa);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7571ad:{NFSU2_TR(0x7571ad);
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
B7571af:{NFSU2_TR(0x7571af);
if(r1(R+518)){{goto L7571be;}}
}
B7571b1:L7571b1:{c.instructions+=6;NFSU2_TR(0x7571b1);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7571b3:{NFSU2_TR(0x7571b3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7571b4:{NFSU2_TR(0x7571b4);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((R+8),(U+0),4);
}
B7571b7:{NFSU2_TR(0x7571b7);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7571b8:{NFSU2_TR(0x7571b8);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7571b9:{NFSU2_TR(0x7571b9);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7571bbull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B7571bb:L7571bb:{c.instructions+=1;NFSU2_TR(0x7571bb);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B7571be:L7571be:{c.instructions+=2;NFSU2_TR(0x7571be);
__builtin_memmove((R+0),(R+24),4);
}
B7571c0:{NFSU2_TR(0x7571c0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7571c5ull));
TAIL_STATIC(0x756e60u,756);
}
B7571c5:L7571c5:{c.instructions+=2;NFSU2_TR(0x7571c5);
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
B7571c7:{NFSU2_TR(0x7571c7);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L7571f0;}}
}
B7571c9:L7571c9:{c.instructions+=10;NFSU2_TR(0x7571c9);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xf8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B7571cf:{NFSU2_TR(0x7571cf);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7571d5:{NFSU2_TR(0x7571d5);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+8))));
}
B7571d7:{NFSU2_TR(0x7571d7);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B7571d8:{NFSU2_TR(0x7571d8);
u8 U[64];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+8,u64(s64(s32(r4(U+4)))));
w8(U+16,u64(r4(R+8)));
w8(U+24,shl<u64>(r8(U+16),u64(u32(0x20ull))));
w8(U+32,u64(r4(R+0)));
w8(U+40,u64(u64(r8(U+24))|u64(r8(U+32))));
{s64 x_=s64(s64(r8(U+40))),y_=s64(s64(r8(U+8)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x7571d8);w8(U+48,u64(x_/y_));}
w4(R+0,u32(r8(U+48)));
{s64 x_=s64(s64(r8(U+40))),y_=s64(s64(r8(U+8)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x7571d8);w8(U+56,u64(x_%y_));}
w4(R+8,u32(r8(U+56)));
}
B7571de:{NFSU2_TR(0x7571de);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xf8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7571e4:{NFSU2_TR(0x7571e4);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xf0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7571ea:{NFSU2_TR(0x7571ea);
__builtin_memmove((R+0),(R+8),4);
}
B7571ec:{NFSU2_TR(0x7571ec);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
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
B7571ee:{NFSU2_TR(0x7571ee);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x757180u);}goto L757180;}}
}
B7571f0:L7571f0:{c.instructions+=4;NFSU2_TR(0x7571f0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B7571f1:{NFSU2_TR(0x7571f1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B7571f2:{NFSU2_TR(0x7571f2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B7571f3:{NFSU2_TR(0x7571f3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B757200:L757200:{c.instructions+=11;NFSU2_TR(0x757200);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B757201:{NFSU2_TR(0x757201);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B757202:{NFSU2_TR(0x757202);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B757205:{NFSU2_TR(0x757205);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B757207:{NFSU2_TR(0x757207);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B75720a:{NFSU2_TR(0x75720a);
__builtin_memmove((R+8),(R+518),1);
}
B75720d:{NFSU2_TR(0x75720d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75720e:{NFSU2_TR(0x75720e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B757211:{NFSU2_TR(0x757211);
__builtin_memmove((R+20),(R+8),4);
}
B757213:{NFSU2_TR(0x757213);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))&u32(r4(R+20))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B757215:{NFSU2_TR(0x757215);
if(r1(R+518)){{goto L757218;}}
}
B757217:L757217:{c.instructions+=1;NFSU2_TR(0x757217);
w4(R+28,u32(u32(r4(R+28))-u32(u32(0x1ull))));
}
B757218:L757218:{c.instructions+=3;NFSU2_TR(0x757218);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xf4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B75721e:{NFSU2_TR(0x75721e);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xf0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B757224:{NFSU2_TR(0x757224);
if(r1(R+518)){{goto L757279;}}
}
B757226:L757226:{c.instructions+=3;NFSU2_TR(0x757226);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B757227:{NFSU2_TR(0x757227);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xfcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B75722d:{NFSU2_TR(0x75722d);
__builtin_memmove((R+4),(R+4),4);
}
B757230:L757230:{c.instructions+=3;NFSU2_TR(0x757230);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xf4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B757236:{NFSU2_TR(0x757236);
u8 U[20];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+12))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((U+16),(U+12),4);
w1(R+512,u8((r4(R+28))<(r4(U+16))));
}
B75723a:{NFSU2_TR(0x75723a);
if(r1(R+512)){{goto L757278;}}
}
B75723c:L75723c:{c.instructions+=3;NFSU2_TR(0x75723c);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xf8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B757242:{NFSU2_TR(0x757242);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B757244:{NFSU2_TR(0x757244);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L75725b;}}
}
B757246:L757246:{c.instructions+=5;NFSU2_TR(0x757246);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B75724c:{NFSU2_TR(0x75724c);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+8))));
}
B75724e:{NFSU2_TR(0x75724e);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B75724f:{NFSU2_TR(0x75724f);
u8 U[64];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+8,u64(s64(s32(r4(U+4)))));
w8(U+16,u64(r4(R+8)));
w8(U+24,shl<u64>(r8(U+16),u64(u32(0x20ull))));
w8(U+32,u64(r4(R+0)));
w8(U+40,u64(u64(r8(U+24))|u64(r8(U+32))));
{s64 x_=s64(s64(r8(U+40))),y_=s64(s64(r8(U+8)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x75724f);w8(U+48,u64(x_/y_));}
w4(R+0,u32(r8(U+48)));
{s64 x_=s64(s64(r8(U+40))),y_=s64(s64(r8(U+8)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x75724f);w8(U+56,u64(x_%y_));}
w4(R+8,u32(r8(U+56)));
}
B757255:{NFSU2_TR(0x757255);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xf8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B75725b:L75725b:{c.instructions+=7;NFSU2_TR(0x75725b);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B757261:{NFSU2_TR(0x757261);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+24))));
}
B757263:{NFSU2_TR(0x757263);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B757264:{NFSU2_TR(0x757264);
u8 U[64];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+8,u64(s64(s32(r4(U+4)))));
w8(U+16,u64(r4(R+8)));
w8(U+24,shl<u64>(r8(U+16),u64(u32(0x20ull))));
w8(U+32,u64(r4(R+0)));
w8(U+40,u64(u64(r8(U+24))|u64(r8(U+32))));
{s64 x_=s64(s64(r8(U+40))),y_=s64(s64(r8(U+8)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x757264);w8(U+48,u64(x_/y_));}
w4(R+0,u32(r8(U+48)));
{s64 x_=s64(s64(r8(U+40))),y_=s64(s64(r8(U+8)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x757264);w8(U+56,u64(x_%y_));}
w4(R+8,u32(r8(U+56)));
}
B75726a:{NFSU2_TR(0x75726a);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xf4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B757270:{NFSU2_TR(0x757270);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xf0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+8))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B757276:{NFSU2_TR(0x757276);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x757230u);}goto L757230;}}
}
B757278:L757278:{c.instructions+=1;NFSU2_TR(0x757278);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B757279:L757279:{c.instructions+=5;NFSU2_TR(0x757279);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B75727a:{NFSU2_TR(0x75727a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B75727b:{NFSU2_TR(0x75727b);
u8 U[10];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(U+6,u32(u32(r4(R+20))&u32(r4(R+20))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B75727d:{NFSU2_TR(0x75727d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B75727e:{NFSU2_TR(0x75727e);
if(r1(R+518)){{goto L757293;}}
}
B757280:L757280:{c.instructions+=4;NFSU2_TR(0x757280);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xf4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B757286:{NFSU2_TR(0x757286);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xf8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B75728c:{NFSU2_TR(0x75728c);
__builtin_memmove((R+0),(R+4),4);
}
B75728e:{NFSU2_TR(0x75728e);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x757130u);}goto L757130;}
}
B757293:L757293:{c.instructions+=1;NFSU2_TR(0x757293);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7572a0:L7572a0:{c.instructions+=12;NFSU2_TR(0x7572a0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7572a1:{NFSU2_TR(0x7572a1);
__builtin_memmove((R+12),(R+4),4);
}
B7572a3:{NFSU2_TR(0x7572a3);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7572a9:{NFSU2_TR(0x7572a9);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7572aa:{NFSU2_TR(0x7572aa);
__builtin_memmove((R+24),(R+0),4);
}
B7572ac:{NFSU2_TR(0x7572ac);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7572ad:{NFSU2_TR(0x7572ad);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B7572b3:{NFSU2_TR(0x7572b3);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B7572b6:{NFSU2_TR(0x7572b6);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B7572b7:{NFSU2_TR(0x7572b7);
u8 U[64];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+8,u64(s64(s32(r4(U+4)))));
w8(U+16,u64(r4(R+8)));
w8(U+24,shl<u64>(r8(U+16),u64(u32(0x20ull))));
w8(U+32,u64(r4(R+0)));
w8(U+40,u64(u64(r8(U+24))|u64(r8(U+32))));
{s64 x_=s64(s64(r8(U+40))),y_=s64(s64(r8(U+8)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x7572b7);w8(U+48,u64(x_/y_));}
w4(R+0,u32(r8(U+48)));
{s64 x_=s64(s64(r8(U+40))),y_=s64(s64(r8(U+8)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x7572b7);w8(U+56,u64(x_%y_));}
w4(R+8,u32(r8(U+56)));
}
B7572bd:{NFSU2_TR(0x7572bd);
u8 U[22];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(R+8))<(r4(U+14))));
w1(R+523,sborrow<u32>(r4(R+8),r4(U+14)));
w4(U+18,u32(u32(r4(R+8))-u32(r4(U+14))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B7572c3:{NFSU2_TR(0x7572c3);
if(r1(R+518)){{goto L75737e;}}
}
B7572c9:L7572c9:{c.instructions+=4;NFSU2_TR(0x7572c9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7572cc:{NFSU2_TR(0x7572cc);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B7572d2:{NFSU2_TR(0x7572d2);
u8 U[14];
__builtin_memmove((U+6),(R+8),4);
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
B7572d4:{NFSU2_TR(0x7572d4);
if(r1(R+512)){{goto L75737e;}}
}
B7572da:L7572da:{c.instructions+=1;NFSU2_TR(0x7572da);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L7572fd;}}
}
B7572dc:L7572dc:{c.instructions+=6;NFSU2_TR(0x7572dc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
w4(U+4,u32(0x4ull));
s4(u32(r4(U+0)),r4(U+4));
}
B7572e3:{NFSU2_TR(0x7572e3);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7572e9:{NFSU2_TR(0x7572e9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7572ec:{NFSU2_TR(0x7572ec);
__builtin_memmove((R+0),(R+24),4);
}
B7572ee:{NFSU2_TR(0x7572ee);
u8 U[4];
w4(U+0,u32(0x0ull));
s4(u32(r4(R+24)),r4(U+0));
}
B7572f4:{NFSU2_TR(0x7572f4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7572f9ull));
TAIL_STATIC(0x756e60u,756);
}
B7572f9:L7572f9:{c.instructions+=4;NFSU2_TR(0x7572f9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B7572fa:{NFSU2_TR(0x7572fa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B7572fb:{NFSU2_TR(0x7572fb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B7572fc:{NFSU2_TR(0x7572fc);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7572fd:L7572fd:{c.instructions+=2;NFSU2_TR(0x7572fd);
u8 U[18];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((U+10),(U+0),4);
w1(R+512,u8((r4(U+10))<(u32(0x0ull))));
w1(R+523,sborrow<u32>(r4(U+10),u32(0x0ull)));
w4(U+14,u32(u32(r4(U+10))-u32(u32(0x0ull))));
w1(R+519,u8(s32(r4(U+14))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+14))==(u32(0x0ull))));
w4(U+4,u32(u32(r4(U+14))&u32(u32(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r4(U+4)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B757300:{NFSU2_TR(0x757300);
if(r1(R+518)){{goto L75737e;}}
}
B757302:L757302:{c.instructions+=6;NFSU2_TR(0x757302);
__builtin_memmove((R+8),(R+4),4);
}
B757304:{NFSU2_TR(0x757304);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B757305:{NFSU2_TR(0x757305);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B75730b:{NFSU2_TR(0x75730b);
w4(R+20,u32(u32(r4(R+20))+u32(r4(R+28))));
}
B75730d:{NFSU2_TR(0x75730d);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B757310:{NFSU2_TR(0x757310);
__builtin_memmove((R+28),(R+20),4);
}
B757312:L757312:{c.instructions+=1;NFSU2_TR(0x757312);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L757314;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x757312u);}goto L757312;}
}
B757314:L757314:{c.instructions+=2;NFSU2_TR(0x757314);
__builtin_memmove((R+4),(R+8),4);
}
B757316:{NFSU2_TR(0x757316);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B757319:L757319:{c.instructions+=1;NFSU2_TR(0x757319);
u8 U[35];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L75731b;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x757319u);}goto L757319;}
}
B75731b:L75731b:{c.instructions+=15;NFSU2_TR(0x75731b);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1934ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B757321:{NFSU2_TR(0x757321);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B757327:{NFSU2_TR(0x757327);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B757328:{NFSU2_TR(0x757328);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1934ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B75732e:{NFSU2_TR(0x75732e);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B757334:{NFSU2_TR(0x757334);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+24))));
}
B757336:{NFSU2_TR(0x757336);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B757337:{NFSU2_TR(0x757337);
u8 U[64];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+8,u64(s64(s32(r4(U+4)))));
w8(U+16,u64(r4(R+8)));
w8(U+24,shl<u64>(r8(U+16),u64(u32(0x20ull))));
w8(U+32,u64(r4(R+0)));
w8(U+40,u64(u64(r8(U+24))|u64(r8(U+32))));
{s64 x_=s64(s64(r8(U+40))),y_=s64(s64(r8(U+8)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x757337);w8(U+48,u64(x_/y_));}
w4(R+0,u32(r8(U+48)));
{s64 x_=s64(s64(r8(U+40))),y_=s64(s64(r8(U+8)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x757337);w8(U+56,u64(x_%y_));}
w4(R+8,u32(r8(U+56)));
}
B75733d:{NFSU2_TR(0x75733d);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B757340:{NFSU2_TR(0x757340);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xd8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B757346:{NFSU2_TR(0x757346);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B75734c:{NFSU2_TR(0x75734c);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B75734d:{NFSU2_TR(0x75734d);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B75734f:{NFSU2_TR(0x75734f);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xe4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B757355:{NFSU2_TR(0x757355);
if(r1(R+518)){{goto L757369;}}
}
B757357:L757357:{c.instructions+=8;NFSU2_TR(0x757357);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B75735a:{NFSU2_TR(0x75735a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+20))),4);
__builtin_memmove((R+8),(U+0),4);
}
B75735d:{NFSU2_TR(0x75735d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75735e:{NFSU2_TR(0x75735e);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75735f:{NFSU2_TR(0x75735f);
u8 U[6];
w1(R+512,carry<u32>(r4(R+20),u32(0x10ull)));
w1(R+523,scarry<u32>(r4(R+20),u32(0x10ull)));
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x10ull))));
w1(R+519,u8(s32(r4(R+20))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+20))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+20))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B757362:{NFSU2_TR(0x757362);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B757363:{NFSU2_TR(0x757363);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B757364:{NFSU2_TR(0x757364);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x757366ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B757366:L757366:{c.instructions+=1;NFSU2_TR(0x757366);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B757369:L757369:{c.instructions+=5;NFSU2_TR(0x757369);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1934ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B75736f:{NFSU2_TR(0x75736f);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B757370:{NFSU2_TR(0x757370);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1934ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B757376:{NFSU2_TR(0x757376);
u8 U[14];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1938ull))));
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0x1ull))));
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
B75737d:{NFSU2_TR(0x75737d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B75737e:L75737e:{c.instructions+=4;NFSU2_TR(0x75737e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B75737f:{NFSU2_TR(0x75737f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B757380:{NFSU2_TR(0x757380);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B757381:{NFSU2_TR(0x757381);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B757390:L757390:{c.instructions+=7;NFSU2_TR(0x757390);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x81cull))));
}
B757396:{NFSU2_TR(0x757396);
__builtin_memmove((R+0),gp(0x81a1d0),4);
}
B75739b:{NFSU2_TR(0x75739b);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75739c:{NFSU2_TR(0x75739c);
u8 U[8];
w4(U+0,u32(u32(u32(0x824ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B7573a3:{NFSU2_TR(0x7573a3);
u8 U[8];
w4(U+0,u32(u32(u32(0x81cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7573aa:{NFSU2_TR(0x7573aa);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x9ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B7573b1:{NFSU2_TR(0x7573b1);
if(r1(R+518)){{goto L7573e9;}}
}
B7573b3:L7573b3:{c.instructions+=4;NFSU2_TR(0x7573b3);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7573b4:{NFSU2_TR(0x7573b4);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7573b5:{NFSU2_TR(0x7573b5);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7573b6:{NFSU2_TR(0x7573b6);
{goto L7573c0;}
}
B7573c0:L7573c0:{c.instructions+=3;NFSU2_TR(0x7573c0);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7573c6:{NFSU2_TR(0x7573c6);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0x8ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x8ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x8ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B7573c9:{NFSU2_TR(0x7573c9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L757409;}}
}
B7573cb:L7573cb:{c.instructions+=1;NFSU2_TR(0x7573cb);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xc8ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B7573d5:L7573d5:{c.instructions+=1;NFSU2_TR(0x7573d5);
u8 U[4];
w4(U+0,u32(0x32ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7573d7:L7573d7:{c.instructions+=1;NFSU2_TR(0x7573d7);
u8 U[4];
__builtin_memmove((U+0),gp(0x783150),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7573ddull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B7573dd:L7573dd:{c.instructions+=2;NFSU2_TR(0x7573dd);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x9ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B7573e4:{NFSU2_TR(0x7573e4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7573c0u);}goto L7573c0;}}
}
B7573e6:L7573e6:{c.instructions+=3;NFSU2_TR(0x7573e6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B7573e7:{NFSU2_TR(0x7573e7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B7573e8:{NFSU2_TR(0x7573e8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B7573e9:L7573e9:{c.instructions+=5;NFSU2_TR(0x7573e9);
u8 U[8];
w4(U+0,u32(u32(u32(0x81cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7573f0:{NFSU2_TR(0x7573f0);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xc8ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B7573fa:{NFSU2_TR(0x7573fa);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B7573fc:{NFSU2_TR(0x7573fc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B7573fd:{NFSU2_TR(0x7573fd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x757402ull));
TAIL_STATIC(0x76115eu,761);
}
B757402:L757402:{c.instructions+=2;NFSU2_TR(0x757402);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x81cull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x81cull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x81cull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B757408:{NFSU2_TR(0x757408);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B757409:L757409:{c.instructions+=2;NFSU2_TR(0x757409);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B75740c:{NFSU2_TR(0x75740c);
if(r1(R+518)){{goto L757666;}}
}
B757412:L757412:{c.instructions+=2;NFSU2_TR(0x757412);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B757414:{NFSU2_TR(0x757414);
if(r1(R+518)){{goto L757666;}}
}
B75741a:L75741a:{c.instructions+=2;NFSU2_TR(0x75741a);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x7ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B75741d:{NFSU2_TR(0x75741d);
if(r1(R+518)){{goto L75766f;}}
}
B757423:L757423:{c.instructions+=2;NFSU2_TR(0x757423);
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
B757426:{NFSU2_TR(0x757426);
if(r1(R+518)){{goto L757666;}}
}
B75742c:L75742c:{c.instructions+=5;NFSU2_TR(0x75742c);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xa0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B757432:{NFSU2_TR(0x757432);
__builtin_memmove((R+28),gp(0x783218),4);
}
B757438:{NFSU2_TR(0x757438);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75743a:{NFSU2_TR(0x75743a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75743b:{NFSU2_TR(0x75743b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75743dull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B75743d:L75743d:{c.instructions+=2;NFSU2_TR(0x75743d);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x102ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B757442:{NFSU2_TR(0x757442);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L75748e;}}
}
B757444:L757444:{c.instructions+=6;NFSU2_TR(0x757444);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x190cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B75744a:{NFSU2_TR(0x75744a);
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
B75744c:{NFSU2_TR(0x75744c);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xa0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B757452:{NFSU2_TR(0x757452);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B757456:{NFSU2_TR(0x757456);
w4(R+24,u32(0x1ull));
}
B75745b:{NFSU2_TR(0x75745b);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L75747e;}}
}
B75745d:L75745d:{c.instructions+=4;NFSU2_TR(0x75745d);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xb4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B757463:{NFSU2_TR(0x757463);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B757465:{NFSU2_TR(0x757465);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B757466:{NFSU2_TR(0x757466);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x757468ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B757468:L757468:{c.instructions+=2;NFSU2_TR(0x757468);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0x102ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x102ull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0x102ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B75746d:{NFSU2_TR(0x75746d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L75747e;}}
}
B75746f:L75746f:{c.instructions+=3;NFSU2_TR(0x75746f);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xb4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B757475:{NFSU2_TR(0x757475);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B757479:{NFSU2_TR(0x757479);
w4(R+24,u32(0x2ull));
}
B75747e:L75747e:{c.instructions+=6;NFSU2_TR(0x75747e);
u8 U[4];
w4(U+0,u32(0x64ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B757480:{NFSU2_TR(0x757480);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B757482:{NFSU2_TR(0x757482);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B757486:{NFSU2_TR(0x757486);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B757487:{NFSU2_TR(0x757487);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B757488:{NFSU2_TR(0x757488);
u8 U[4];
__builtin_memmove((U+0),gp(0x78326c),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75748eull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B75748e:L75748e:{c.instructions+=4;NFSU2_TR(0x75748e);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B757492:{NFSU2_TR(0x757492);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B757493:{NFSU2_TR(0x757493);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B75749b:{NFSU2_TR(0x75749b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7574a0ull));
TAIL_STATIC(0x756bf0u,756);
}
B7574a0:L7574a0:{c.instructions+=3;NFSU2_TR(0x7574a0);
__builtin_memmove((R+28),gp(0x78320c),4);
}
B7574a6:{NFSU2_TR(0x7574a6);
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
B7574a9:{NFSU2_TR(0x7574a9);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7574abull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B7574ab:L7574ab:{c.instructions+=4;NFSU2_TR(0x7574ab);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x191cull))));
__builtin_memmove((R+20),(U+0),4);
}
B7574b1:{NFSU2_TR(0x7574b1);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7574b2:{NFSU2_TR(0x7574b2);
__builtin_memmove((R+24),(R+0),4);
}
B7574b4:{NFSU2_TR(0x7574b4);
u8 U[4];
__builtin_memmove((U+0),gp(0x7831a8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7574baull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B7574ba:L7574ba:{c.instructions+=2;NFSU2_TR(0x7574ba);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B7574bc:{NFSU2_TR(0x7574bc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7574c1ull));
TAIL_STATIC(0x756e60u,756);
}
B7574c1:L7574c1:{c.instructions+=3;NFSU2_TR(0x7574c1);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7574c7:{NFSU2_TR(0x7574c7);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B7574ca:{NFSU2_TR(0x7574ca);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L7574ea;}}
}
B7574cc:L7574cc:{c.instructions+=5;NFSU2_TR(0x7574cc);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1918ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B7574d2:{NFSU2_TR(0x7574d2);
__builtin_memmove((R+4),(R+24),4);
}
B7574d4:{NFSU2_TR(0x7574d4);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+8))));
}
B7574d6:{NFSU2_TR(0x7574d6);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(U+0))<(u32(0xafc8ull))));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xafc8ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B7574dc:{NFSU2_TR(0x7574dc);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L7574ea;}}
}
B7574de:L7574de:{c.instructions+=2;NFSU2_TR(0x7574de);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xc8ull))));
w4(U+4,u32(0x6ull));
s4(u32(r4(U+0)),r4(U+4));
}
B7574e8:{NFSU2_TR(0x7574e8);
{goto L7574ef;}
}
B7574ea:L7574ea:{c.instructions+=2;NFSU2_TR(0x7574ea);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x6ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B7574ed:{NFSU2_TR(0x7574ed);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L7574f6;}}
}
B7574ef:L7574ef:{c.instructions+=2;NFSU2_TR(0x7574ef);
__builtin_memmove((R+4),(R+12),4);
}
B7574f1:{NFSU2_TR(0x7574f1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7574f6ull));
TAIL_STATIC(0x756f90u,756);
}
B7574f6:L7574f6:{c.instructions+=2;NFSU2_TR(0x7574f6);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B7574fd:{NFSU2_TR(0x7574fd);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L757518;}}
}
B7574ff:L7574ff:{c.instructions+=3;NFSU2_TR(0x7574ff);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xf8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B757505:{NFSU2_TR(0x757505);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xf0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+8))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B75750b:{NFSU2_TR(0x75750b);
if(r1(R+518)){{goto L757518;}}
}
B75750d:L75750d:{c.instructions+=2;NFSU2_TR(0x75750d);
__builtin_memmove((R+0),(R+12),4);
}
B75750f:{NFSU2_TR(0x75750f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x757514ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x757130u);}goto L757130;}
}
B757514:L757514:{c.instructions+=1;NFSU2_TR(0x757514);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x757516ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B757516:L757516:{c.instructions+=1;NFSU2_TR(0x757516);
__builtin_memmove((R+24),(R+0),4);
}
B757518:L757518:{c.instructions+=2;NFSU2_TR(0x757518);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B75751f:{NFSU2_TR(0x75751f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L75753d;}}
}
B757521:L757521:{c.instructions+=5;NFSU2_TR(0x757521);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1914ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B757527:{NFSU2_TR(0x757527);
__builtin_memmove((R+0),(R+24),4);
}
B757529:{NFSU2_TR(0x757529);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+8))));
}
B75752b:{NFSU2_TR(0x75752b);
u8 U[4];
w1(R+512,u8((r4(R+0))<(u32(0x3e8ull))));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x3e8ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B757530:{NFSU2_TR(0x757530);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L75753d;}}
}
B757532:L757532:{c.instructions+=2;NFSU2_TR(0x757532);
__builtin_memmove((R+4),(R+12),4);
}
B757534:{NFSU2_TR(0x757534);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x757539ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x757070u);}goto L757070;}
}
B757539:L757539:{c.instructions+=1;NFSU2_TR(0x757539);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75753bull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B75753b:L75753b:{c.instructions+=1;NFSU2_TR(0x75753b);
__builtin_memmove((R+24),(R+0),4);
}
B75753d:L75753d:{c.instructions+=2;NFSU2_TR(0x75753d);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B757544:{NFSU2_TR(0x757544);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L75756b;}}
}
B757546:L757546:{c.instructions+=3;NFSU2_TR(0x757546);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xf8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B75754c:{NFSU2_TR(0x75754c);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xf0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+4))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B757552:{NFSU2_TR(0x757552);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L75756b;}}
}
B757554:L757554:{c.instructions+=3;NFSU2_TR(0x757554);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1914ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+24,u32(u32(r4(R+24))-u32(r4(U+4))));
}
B75755a:{NFSU2_TR(0x75755a);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+512,u8((r4(U+0))<(u32(0x3e8ull))));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3e8ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B757560:{NFSU2_TR(0x757560);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L75756b;}}
}
B757562:L757562:{c.instructions+=2;NFSU2_TR(0x757562);
__builtin_memmove((R+4),(R+12),4);
}
B757564:{NFSU2_TR(0x757564);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x757569ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7570e0u);}goto L7570e0;}
}
B757569:L757569:{c.instructions+=1;NFSU2_TR(0x757569);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75756bull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B75756b:L75756b:{c.instructions+=3;NFSU2_TR(0x75756b);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B75756f:{NFSU2_TR(0x75756f);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B757571:{NFSU2_TR(0x757571);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L7575e4;}}
}
B757573:L757573:{c.instructions+=3;NFSU2_TR(0x757573);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B757579:{NFSU2_TR(0x757579);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B75757c:{NFSU2_TR(0x75757c);
if(r1(R+518)){{goto L757583;}}
}
B75757e:L75757e:{c.instructions+=2;NFSU2_TR(0x75757e);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B757581:{NFSU2_TR(0x757581);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L7575e4;}}
}
B757583:L757583:{c.instructions+=3;NFSU2_TR(0x757583);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B757587:{NFSU2_TR(0x757587);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B75758a:{NFSU2_TR(0x75758a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L757599;}}
}
B75758c:L75758c:{c.instructions+=3;NFSU2_TR(0x75758c);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B757590:{NFSU2_TR(0x757590);
__builtin_memmove((R+4),(R+12),4);
}
B757592:{NFSU2_TR(0x757592);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x757597ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x757200u);}goto L757200;}
}
B757597:L757597:{c.instructions+=1;NFSU2_TR(0x757597);
{goto L7575cf;}
}
B757599:L757599:{c.instructions+=2;NFSU2_TR(0x757599);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B75759c:{NFSU2_TR(0x75759c);
if(r1(R+518)){{goto L7575c0;}}
}
B75759e:L75759e:{c.instructions+=2;NFSU2_TR(0x75759e);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B7575a1:{NFSU2_TR(0x7575a1);
if(r1(R+518)){{goto L7575c0;}}
}
B7575a3:L7575a3:{c.instructions+=2;NFSU2_TR(0x7575a3);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B7575a6:{NFSU2_TR(0x7575a6);
if(r1(R+518)){{goto L7575c0;}}
}
B7575a8:L7575a8:{c.instructions+=3;NFSU2_TR(0x7575a8);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B7575ac:{NFSU2_TR(0x7575ac);
__builtin_memmove((R+4),(R+12),4);
}
B7575ae:{NFSU2_TR(0x7575ae);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7575b3ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x757200u);}goto L757200;}
}
B7575b3:L7575b3:{c.instructions+=3;NFSU2_TR(0x7575b3);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B7575b7:{NFSU2_TR(0x7575b7);
__builtin_memmove((R+4),(R+12),4);
}
B7575b9:{NFSU2_TR(0x7575b9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7575beull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7572a0u);}goto L7572a0;}
}
B7575be:L7575be:{c.instructions+=1;NFSU2_TR(0x7575be);
{goto L7575cb;}
}
B7575c0:L7575c0:{c.instructions+=3;NFSU2_TR(0x7575c0);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B7575c4:{NFSU2_TR(0x7575c4);
__builtin_memmove((R+4),(R+12),4);
}
B7575c6:{NFSU2_TR(0x7575c6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7575cbull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x757010u);}goto L757010;}
}
B7575cb:L7575cb:{c.instructions+=1;NFSU2_TR(0x7575cb);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B7575cf:L7575cf:{c.instructions+=3;NFSU2_TR(0x7575cf);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+28,u32(u32(r4(R+28))|u32(u32(0xffffffffull))));
w1(R+519,u8(s32(r4(R+28))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+28))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+28))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B7575d2:{NFSU2_TR(0x7575d2);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7575d6:{NFSU2_TR(0x7575d6);
u8 U[4];
__builtin_memmove((U+0),gp(0x78320c),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7575dcull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B7575dc:L7575dc:{c.instructions+=2;NFSU2_TR(0x7575dc);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1918ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7575e2:{NFSU2_TR(0x7575e2);
{goto L7575e8;}
}
B7575e4:L7575e4:{c.instructions+=1;NFSU2_TR(0x7575e4);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B7575e8:L7575e8:{c.instructions+=2;NFSU2_TR(0x7575e8);
u8 U[22];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xc8ull))));
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
B7575ef:{NFSU2_TR(0x7575ef);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L757631;}}
}
B7575f1:L7575f1:{c.instructions+=2;NFSU2_TR(0x7575f1);
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
B7575f3:{NFSU2_TR(0x7575f3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L757631;}}
}
B7575f5:L7575f5:{c.instructions+=3;NFSU2_TR(0x7575f5);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7575f9:{NFSU2_TR(0x7575f9);
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
B7575fb:{NFSU2_TR(0x7575fb);
if(r1(R+518)){{goto L757631;}}
}
B7575fd:L7575fd:{c.instructions+=2;NFSU2_TR(0x7575fd);
u8 U[14];
__builtin_memmove((U+6),(R+24),4);
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
B757600:{NFSU2_TR(0x757600);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L757631;}}
}
B757602:L757602:{c.instructions+=5;NFSU2_TR(0x757602);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xccull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B757608:{NFSU2_TR(0x757608);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B75760c:{NFSU2_TR(0x75760c);
__builtin_memmove((R+4),(R+12),4);
}
B75760e:{NFSU2_TR(0x75760e);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xc8ull))));
w4(U+4,u32(0x4ull));
s4(u32(r4(U+0)),r4(U+4));
}
B757618:{NFSU2_TR(0x757618);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75761dull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x757010u);}goto L757010;}
}
B75761d:L75761d:{c.instructions+=2;NFSU2_TR(0x75761d);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B757625:{NFSU2_TR(0x757625);
u8 U[4];
__builtin_memmove((U+0),gp(0x78320c),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75762bull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B75762b:L75762b:{c.instructions+=1;NFSU2_TR(0x75762b);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1918ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B757631:L757631:{c.instructions+=2;NFSU2_TR(0x757631);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B757632:{NFSU2_TR(0x757632);
u8 U[4];
__builtin_memmove((U+0),gp(0x7831bc),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x757638ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B757638:L757638:{c.instructions+=3;NFSU2_TR(0x757638);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1938ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B75763e:{NFSU2_TR(0x75763e);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B757640:{NFSU2_TR(0x757640);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7573ddu);}goto L7573dd;}}
}
B757646:L757646:{c.instructions+=3;NFSU2_TR(0x757646);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x193cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B75764c:{NFSU2_TR(0x75764c);
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
B75764e:{NFSU2_TR(0x75764e);
if(r1(R+518)){{goto L757657;}}
}
B757650:L757650:{c.instructions+=3;NFSU2_TR(0x757650);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B757651:{NFSU2_TR(0x757651);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B757652:{NFSU2_TR(0x757652);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x757654ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B757654:L757654:{c.instructions+=1;NFSU2_TR(0x757654);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B757657:L757657:{c.instructions+=2;NFSU2_TR(0x757657);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1938ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B757661:{NFSU2_TR(0x757661);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7573ddu);}goto L7573dd;}
}
B757666:L757666:{c.instructions+=2;NFSU2_TR(0x757666);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0x7ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x7ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x7ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B757669:{NFSU2_TR(0x757669);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7573d5u);}goto L7573d5;}}
}
B75766f:L75766f:{c.instructions+=3;NFSU2_TR(0x75766f);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x190cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B757675:{NFSU2_TR(0x757675);
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
B757677:{NFSU2_TR(0x757677);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7573d5u);}goto L7573d5;}}
}
B75767d:L75767d:{c.instructions+=3;NFSU2_TR(0x75767d);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x191cull))));
__builtin_memmove((R+24),(U+0),4);
}
B757683:{NFSU2_TR(0x757683);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B757684:{NFSU2_TR(0x757684);
u8 U[4];
__builtin_memmove((U+0),gp(0x7831a8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75768aull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B75768a:L75768a:{c.instructions+=3;NFSU2_TR(0x75768a);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x190cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B757690:{NFSU2_TR(0x757690);
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
B757692:{NFSU2_TR(0x757692);
if(r1(R+518)){{goto L7576eb;}}
}
B757694:L757694:{c.instructions+=4;NFSU2_TR(0x757694);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xb4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B75769a:{NFSU2_TR(0x75769a);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75769c:{NFSU2_TR(0x75769c);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75769d:{NFSU2_TR(0x75769d);
u8 U[4];
__builtin_memmove((U+0),gp(0x783218),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7576a3ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B7576a3:L7576a3:{c.instructions+=2;NFSU2_TR(0x7576a3);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0x102ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x102ull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0x102ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B7576a8:{NFSU2_TR(0x7576a8);
if(r1(R+518)){{goto L7576eb;}}
}
B7576aa:L7576aa:{c.instructions+=13;NFSU2_TR(0x7576aa);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x190cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B7576b0:{NFSU2_TR(0x7576b0);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xa4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B7576b6:{NFSU2_TR(0x7576b6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7576b7:{NFSU2_TR(0x7576b7);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1910ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7576bd:{NFSU2_TR(0x7576bd);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xc0ull))));
__builtin_memmove((R+4),(U+0),4);
}
B7576c3:{NFSU2_TR(0x7576c3);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7576c4:{NFSU2_TR(0x7576c4);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7576c5:{NFSU2_TR(0x7576c5);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B7576c8:{NFSU2_TR(0x7576c8);
u8 U[45];
w4(U+37,u32(u32(u32(0xbull))&u32(u32(0x1full))));
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
B7576cb:{NFSU2_TR(0x7576cb);
u8 U[12];
w4(U+0,u32(u32(u32(0x908ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B7576d2:{NFSU2_TR(0x7576d2);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7576d3:{NFSU2_TR(0x7576d3);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7576d4:{NFSU2_TR(0x7576d4);
u8 U[4];
__builtin_memmove((U+0),gp(0x783224),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7576daull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B7576da:L7576da:{c.instructions+=2;NFSU2_TR(0x7576da);
u8 U[14];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1910ull))));
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))^u32(u32(0x1ull))));
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
B7576e1:{NFSU2_TR(0x7576e1);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x190cull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B7576eb:L7576eb:{c.instructions+=2;NFSU2_TR(0x7576eb);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7576ec:{NFSU2_TR(0x7576ec);
u8 U[4];
__builtin_memmove((U+0),gp(0x7831bc),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7576f2ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B7576f2:L7576f2:{c.instructions+=2;NFSU2_TR(0x7576f2);
u8 U[4];
w4(U+0,u32(0x19ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7576f4:{NFSU2_TR(0x7576f4);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7573d7u);}goto L7573d7;}
}
B757700:L757700:{c.instructions+=7;NFSU2_TR(0x757700);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B757701:{NFSU2_TR(0x757701);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B757702:{NFSU2_TR(0x757702);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B757706:{NFSU2_TR(0x757706);
u8 U[22];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc8ull))));
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
B75770d:{NFSU2_TR(0x75770d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75770e:{NFSU2_TR(0x75770e);
__builtin_memmove((R+28),gp(0x783150),4);
}
B757714:{NFSU2_TR(0x757714);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L75772d;}}
}
B757716:L757716:{c.instructions+=2;NFSU2_TR(0x757716);
w4(R+12,u32(0x6ull));
}
B75771b:{NFSU2_TR(0x75771b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B757721:L757721:{c.instructions+=2;NFSU2_TR(0x757721);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B757723:{NFSU2_TR(0x757723);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x757725ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B757725:L757725:{c.instructions+=2;NFSU2_TR(0x757725);
u8 U[22];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc8ull))));
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
B75772b:{NFSU2_TR(0x75772b);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x757721u);}goto L757721;}}
}
B75772d:L75772d:{c.instructions+=3;NFSU2_TR(0x75772d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc8ull))));
w4(U+4,u32(0x9ull));
s4(u32(r4(U+0)),r4(U+4));
}
B757737:{NFSU2_TR(0x757737);
w4(R+12,u32(0x1ull));
}
B75773c:{NFSU2_TR(0x75773c);
__builtin_memmove((R+16),(R+16),4);
}
B757740:L757740:{c.instructions+=2;NFSU2_TR(0x757740);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B757742:{NFSU2_TR(0x757742);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x757744ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B757744:L757744:{c.instructions+=2;NFSU2_TR(0x757744);
u8 U[22];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc8ull))));
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
B75774a:{NFSU2_TR(0x75774a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x757740u);}goto L757740;}}
}
B75774c:L75774c:{c.instructions+=4;NFSU2_TR(0x75774c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B75774f:{NFSU2_TR(0x75774f);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
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
B757752:{NFSU2_TR(0x757752);
__builtin_memmove((R+28),gp(0x783144),4);
}
B757758:{NFSU2_TR(0x757758);
if(r1(R+518)){{goto L757775;}}
}
B75775a:L75775a:{c.instructions+=3;NFSU2_TR(0x75775a);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75775c:{NFSU2_TR(0x75775c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75775d:{NFSU2_TR(0x75775d);
u8 U[4];
__builtin_memmove((U+0),gp(0x783268),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x757763ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B757763:L757763:{c.instructions+=4;NFSU2_TR(0x757763);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B757766:{NFSU2_TR(0x757766);
u8 U[4];
w4(U+0,u32(0xfull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B757768:{NFSU2_TR(0x757768);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B757769:{NFSU2_TR(0x757769);
u8 U[4];
__builtin_memmove((U+0),gp(0x783270),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75776full));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B75776f:L75776f:{c.instructions+=3;NFSU2_TR(0x75776f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B757772:{NFSU2_TR(0x757772);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B757773:{NFSU2_TR(0x757773);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x757775ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B757775:L757775:{c.instructions+=3;NFSU2_TR(0x757775);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B75777b:{NFSU2_TR(0x75777b);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75777c:{NFSU2_TR(0x75777c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75777eull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B75777e:L75777e:{c.instructions+=3;NFSU2_TR(0x75777e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B757784:{NFSU2_TR(0x757784);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B757785:{NFSU2_TR(0x757785);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x757787ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B757787:L757787:{c.instructions+=3;NFSU2_TR(0x757787);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B75778d:{NFSU2_TR(0x75778d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75778e:{NFSU2_TR(0x75778e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x757790ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B757790:L757790:{c.instructions+=3;NFSU2_TR(0x757790);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B757796:{NFSU2_TR(0x757796);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B757797:{NFSU2_TR(0x757797);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75779cull));
TAIL_STATIC(0x598ec0u,598);
}
B75779c:L75779c:{c.instructions+=3;NFSU2_TR(0x75779c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7577a2:{NFSU2_TR(0x7577a2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7577a3:{NFSU2_TR(0x7577a3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7577a8ull));
TAIL_STATIC(0x598ec0u,598);
}
B7577a8:L7577a8:{c.instructions+=2;NFSU2_TR(0x7577a8);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7577a9:{NFSU2_TR(0x7577a9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7577aeull));
TAIL_STATIC(0x598ec0u,598);
}
B7577ae:L7577ae:{c.instructions+=5;NFSU2_TR(0x7577ae);
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
B7577b1:{NFSU2_TR(0x7577b1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B7577b2:{NFSU2_TR(0x7577b2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B7577b3:{NFSU2_TR(0x7577b3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B7577b4:{NFSU2_TR(0x7577b4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7577c0:L7577c0:{c.instructions+=15;NFSU2_TR(0x7577c0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x14ull))));
}
B7577c3:{NFSU2_TR(0x7577c3);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B7577c7:{NFSU2_TR(0x7577c7);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B7577c9:{NFSU2_TR(0x7577c9);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7577ca:{NFSU2_TR(0x7577ca);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B7577ce:{NFSU2_TR(0x7577ce);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
w4(U+4,u32(0x7d357cull));
s4(u32(r4(U+0)),r4(U+4));
}
B7577d6:{NFSU2_TR(0x7577d6);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
w4(U+4,u32(0x7d3574ull));
s4(u32(r4(U+0)),r4(U+4));
}
B7577de:{NFSU2_TR(0x7577de);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
w4(U+4,u32(0x7d356cull));
s4(u32(r4(U+0)),r4(U+4));
}
B7577e6:{NFSU2_TR(0x7577e6);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0x7d3564ull));
s4(u32(r4(U+0)),r4(U+4));
}
B7577ee:{NFSU2_TR(0x7577ee);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B7577f6:{NFSU2_TR(0x7577f6);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7577fa:{NFSU2_TR(0x7577fa);
u8 U[1];
w1(U+0,u8(0x2aull));
s1(u32(r4(R+20)),r1(U+0));
}
B7577fe:{NFSU2_TR(0x7577fe);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B757802:{NFSU2_TR(0x757802);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x2ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B757806:{NFSU2_TR(0x757806);
if(r1(R+518)){{goto L7578ef;}}
}
B75780c:L75780c:{c.instructions+=2;NFSU2_TR(0x75780c);
u8 U[3];
__builtin_memmove((U+0),gp(u32(r4(R+8))),1);
__builtin_memmove((U+1),(U+0),1);
w1(U+2,u8(u32(r1(U+1))-u32(u8(0x0ull))));
w1(R+518,u8((r1(U+2))==(u8(0x0ull))));
}
B75780f:{NFSU2_TR(0x75780f);
if(r1(R+518)){{goto L7578ef;}}
}
B757815:L757815:{c.instructions+=5;NFSU2_TR(0x757815);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B757816:{NFSU2_TR(0x757816);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B757817:{NFSU2_TR(0x757817);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B75781b:{NFSU2_TR(0x75781b);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x40ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x40ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B75781e:{NFSU2_TR(0x75781e);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L7578e3;}}
}
B757824:L757824:{c.instructions+=3;NFSU2_TR(0x757824);
__builtin_memmove((R+0),(R+8),4);
}
B757826:{NFSU2_TR(0x757826);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((R+24),(U+0),4);
}
B757829:{NFSU2_TR(0x757829);
__builtin_memmove((R+16),(R+16),4);
}
B757830:L757830:{c.instructions+=4;NFSU2_TR(0x757830);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((R+4),(U+0),1);
}
B757832:{NFSU2_TR(0x757832);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B757833:{NFSU2_TR(0x757833);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B757835:{NFSU2_TR(0x757835);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x757830u);}goto L757830;}}
}
B757837:L757837:{c.instructions+=4;NFSU2_TR(0x757837);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+24))));
}
B757839:{NFSU2_TR(0x757839);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x2ull))));
}
B75783c:{NFSU2_TR(0x75783c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(R+28))<(r4(U+0))));
}
B75783e:{NFSU2_TR(0x75783e);
if(r1(R+512)){{goto L7578e3;}}
}
B757844:L757844:{c.instructions+=4;NFSU2_TR(0x757844);
w4(R+28,u32(0x7d2fc4ull));
}
B757849:{NFSU2_TR(0x757849);
__builtin_memmove((R+24),(R+8),4);
}
B75784b:{NFSU2_TR(0x75784b);
w4(R+4,u32(0xaull));
}
B757850:{NFSU2_TR(0x757850);
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
B757852:L757852:{c.instructions+=1;NFSU2_TR(0x757852);
u8 U[41];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L757854;}}
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
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x757852u);}goto L757852;}}
}
B757854:L757854:{c.instructions+=1;NFSU2_TR(0x757854);
if(r1(R+518)){{goto L757873;}}
}
B757856:L757856:{c.instructions+=5;NFSU2_TR(0x757856);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B757857:{NFSU2_TR(0x757857);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B757858:{NFSU2_TR(0x757858);
u8 U[4];
w4(U+0,u32(0x7d355cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75785d:{NFSU2_TR(0x75785d);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75785e:{NFSU2_TR(0x75785e);
u8 U[4];
__builtin_memmove((U+0),gp(0x78339c),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x757864ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B757864:L757864:{c.instructions+=7;NFSU2_TR(0x757864);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B757867:{NFSU2_TR(0x757867);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B757868:{NFSU2_TR(0x757868);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B757869:{NFSU2_TR(0x757869);
w4(R+0,u32(0x1ull));
}
B75786e:{NFSU2_TR(0x75786e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B75786f:{NFSU2_TR(0x75786f);
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
B757872:{NFSU2_TR(0x757872);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B757873:L757873:{c.instructions+=4;NFSU2_TR(0x757873);
__builtin_memmove((R+28),gp(0x7831d0),4);
}
B757879:{NFSU2_TR(0x757879);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75787a:{NFSU2_TR(0x75787a);
w4(R+24,u32(0x7d357cull));
}
B75787f:{NFSU2_TR(0x75787f);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+12),(U+0),4);
}
B757883:L757883:{c.instructions+=8;NFSU2_TR(0x757883);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B757885:{NFSU2_TR(0x757885);
u8 U[4];
w4(U+0,u32(0x40000080ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75788a:{NFSU2_TR(0x75788a);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75788c:{NFSU2_TR(0x75788c);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75788e:{NFSU2_TR(0x75788e);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B757890:{NFSU2_TR(0x757890);
u8 U[4];
w4(U+0,u32(0xc0000000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B757895:{NFSU2_TR(0x757895);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B757896:{NFSU2_TR(0x757896);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x757898ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B757898:L757898:{c.instructions+=2;NFSU2_TR(0x757898);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
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
B75789b:{NFSU2_TR(0x75789b);
if(r1(R+518)){{goto L7578c4;}}
}
B75789d:L75789d:{c.instructions+=2;NFSU2_TR(0x75789d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75789e:{NFSU2_TR(0x75789e);
u8 U[4];
__builtin_memmove((U+0),gp(0x783144),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7578a4ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B7578a4:L7578a4:{c.instructions+=2;NFSU2_TR(0x7578a4);
u8 U[22];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
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
B7578a8:{NFSU2_TR(0x7578a8);
if(r1(R+518)){{goto L7578b2;}}
}
B7578aa:L7578aa:{c.instructions+=3;NFSU2_TR(0x7578aa);
u8 U[5];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B7578ae:{NFSU2_TR(0x7578ae);
u8 U[1];
__builtin_memmove((U+0),(R+4),1);
s1(u32(r4(R+20)),r1(U+0));
}
B7578b1:{NFSU2_TR(0x7578b1);
u8 U[6];
w1(R+523,scarry<u32>(r4(R+20),u32(0x1ull)));
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+20))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+20))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+20))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B7578b2:L7578b2:{c.instructions+=4;NFSU2_TR(0x7578b2);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7578b3:{NFSU2_TR(0x7578b3);
u8 U[4];
w4(U+0,u32(0x786e70ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7578b8:{NFSU2_TR(0x7578b8);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7578b9:{NFSU2_TR(0x7578b9);
u8 U[4];
__builtin_memmove((U+0),gp(0x78339c),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7578bfull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B7578bf:L7578bf:{c.instructions+=2;NFSU2_TR(0x7578bf);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B7578c2:{NFSU2_TR(0x7578c2);
w4(R+20,u32(u32(r4(R+20))+u32(r4(R+0))));
}
B7578c4:L7578c4:{c.instructions+=4;NFSU2_TR(0x7578c4);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B7578c7:{NFSU2_TR(0x7578c7);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x4ull))));
}
B7578ca:{NFSU2_TR(0x7578ca);
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
B7578cc:{NFSU2_TR(0x7578cc);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x757883u);}goto L757883;}}
}
B7578ce:L7578ce:{c.instructions+=9;NFSU2_TR(0x7578ce);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B7578cf:{NFSU2_TR(0x7578cf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B7578d0:{NFSU2_TR(0x7578d0);
u8 U[1];
w1(U+0,u8(0x0ull));
s1(u32(r4(R+20)),r1(U+0));
}
B7578d4:{NFSU2_TR(0x7578d4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B7578d5:{NFSU2_TR(0x7578d5);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B7578d9:{NFSU2_TR(0x7578d9);
w4(R+0,u32(0x1ull));
}
B7578de:{NFSU2_TR(0x7578de);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B7578df:{NFSU2_TR(0x7578df);
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
B7578e2:{NFSU2_TR(0x7578e2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7578e3:L7578e3:{c.instructions+=6;NFSU2_TR(0x7578e3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B7578e4:{NFSU2_TR(0x7578e4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B7578e5:{NFSU2_TR(0x7578e5);
w4(R+0,u32(0xfffffffaull));
}
B7578ea:{NFSU2_TR(0x7578ea);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B7578eb:{NFSU2_TR(0x7578eb);
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
B7578ee:{NFSU2_TR(0x7578ee);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7578ef:L7578ef:{c.instructions+=4;NFSU2_TR(0x7578ef);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0xffffffffull))));
}
B7578f2:{NFSU2_TR(0x7578f2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B7578f3:{NFSU2_TR(0x7578f3);
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
B7578f6:{NFSU2_TR(0x7578f6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B757900:L757900:{c.instructions+=1;NFSU2_TR(0x757900);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B757910:L757910:{c.instructions+=2;NFSU2_TR(0x757910);
w4(R+0,u32(0x103cull));
}
B757915:{NFSU2_TR(0x757915);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75791aull));
TAIL_STATIC(0x75c4d0u,75c);
}
B75791a:L75791a:{c.instructions+=15;NFSU2_TR(0x75791a);
__builtin_memmove((R+0),gp(0x81a1d0),4);
}
B75791f:{NFSU2_TR(0x75791f);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B757920:{NFSU2_TR(0x757920);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B757921:{NFSU2_TR(0x757921);
u8 U[8];
w4(U+0,u32(u32(u32(0x1048ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B757928:{NFSU2_TR(0x757928);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B75792a:{NFSU2_TR(0x75792a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75792b:{NFSU2_TR(0x75792b);
u8 U[8];
w4(U+0,u32(u32(u32(0x1050ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B757932:{NFSU2_TR(0x757932);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B757934:{NFSU2_TR(0x757934);
u8 U[8];
w4(U+0,u32(u32(u32(0x1044ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B75793b:{NFSU2_TR(0x75793b);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B757943:{NFSU2_TR(0x757943);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B757947:{NFSU2_TR(0x757947);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B75794b:{NFSU2_TR(0x75794b);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B75794f:{NFSU2_TR(0x75794f);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B757953:{NFSU2_TR(0x757953);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L7579a9;}}
}
B757955:L757955:{c.instructions+=2;NFSU2_TR(0x757955);
u8 U[22];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc8ull))));
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
B75795c:{NFSU2_TR(0x75795c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L7579a9;}}
}
B75795e:L75795e:{c.instructions+=5;NFSU2_TR(0x75795e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B757961:{NFSU2_TR(0x757961);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B757963:{NFSU2_TR(0x757963);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B757964:{NFSU2_TR(0x757964);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc8ull))));
w4(U+4,u32(0x5ull));
s4(u32(r4(U+0)),r4(U+4));
}
B75796e:{NFSU2_TR(0x75796e);
u8 U[4];
__builtin_memmove((U+0),gp(0x783268),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x757974ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B757974:L757974:{c.instructions+=4;NFSU2_TR(0x757974);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B757977:{NFSU2_TR(0x757977);
u8 U[4];
w4(U+0,u32(0xfull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B757979:{NFSU2_TR(0x757979);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75797a:{NFSU2_TR(0x75797a);
u8 U[4];
__builtin_memmove((U+0),gp(0x783270),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x757980ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B757980:L757980:{c.instructions+=3;NFSU2_TR(0x757980);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B757983:{NFSU2_TR(0x757983);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B757984:{NFSU2_TR(0x757984);
u8 U[4];
__builtin_memmove((U+0),gp(0x783144),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75798aull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B75798a:L75798a:{c.instructions+=7;NFSU2_TR(0x75798a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B75798b:{NFSU2_TR(0x75798b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x78ull))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B757992:{NFSU2_TR(0x757992);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B757993:{NFSU2_TR(0x757993);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B757995:{NFSU2_TR(0x757995);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B757996:{NFSU2_TR(0x757996);
u8 U[8];
w4(U+0,u32(u32(u32(0x1038ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B75799d:{NFSU2_TR(0x75799d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7579a2ull));
TAIL_STATIC(0x76115eu,761);
}
B7579a2:L7579a2:{c.instructions+=2;NFSU2_TR(0x7579a2);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x103cull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x103cull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x103cull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B7579a8:{NFSU2_TR(0x7579a8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7579a9:L7579a9:{c.instructions+=3;NFSU2_TR(0x7579a9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7579af:{NFSU2_TR(0x7579af);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B7579b2:{NFSU2_TR(0x7579b2);
if(r1(R+518)){{goto L7579d9;}}
}
B7579b4:L7579b4:{c.instructions+=2;NFSU2_TR(0x7579b4);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x5ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B7579b7:{NFSU2_TR(0x7579b7);
if(r1(R+518)){{goto L7579d4;}}
}
B7579b9:L7579b9:{c.instructions+=6;NFSU2_TR(0x7579b9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B7579ba:{NFSU2_TR(0x7579ba);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B7579bb:{NFSU2_TR(0x7579bb);
w4(R+0,u32(0xfffffff8ull));
}
B7579c0:{NFSU2_TR(0x7579c0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B7579c1:{NFSU2_TR(0x7579c1);
u8 U[8];
w4(U+0,u32(u32(u32(0x1038ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7579c8:{NFSU2_TR(0x7579c8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7579cdull));
TAIL_STATIC(0x76115eu,761);
}
B7579cd:L7579cd:{c.instructions+=2;NFSU2_TR(0x7579cd);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x103cull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x103cull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x103cull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B7579d3:{NFSU2_TR(0x7579d3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7579d4:L7579d4:{c.instructions+=2;NFSU2_TR(0x7579d4);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B7579d7:{NFSU2_TR(0x7579d7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L7579de;}}
}
B7579d9:L7579d9:{c.instructions+=1;NFSU2_TR(0x7579d9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7579deull));
TAIL_STATIC(0x756ba0u,756);
}
B7579de:L7579de:{c.instructions+=5;NFSU2_TR(0x7579de);
u8 U[4];
w4(U+0,u32(0x20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7579e0:{NFSU2_TR(0x7579e0);
u8 U[4];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B7579e4:{NFSU2_TR(0x7579e4);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7579e5:{NFSU2_TR(0x7579e5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7579e6:{NFSU2_TR(0x7579e6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7579ebull));
TAIL_STATIC(0x75c840u,75c);
}
B7579eb:L7579eb:{c.instructions+=4;NFSU2_TR(0x7579eb);
u8 U[4];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B7579ef:{NFSU2_TR(0x7579ef);
u8 U[4];
w4(U+0,u32(0x3aull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7579f1:{NFSU2_TR(0x7579f1);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7579f2:{NFSU2_TR(0x7579f2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7579f7ull));
TAIL_STATIC(0x75cf10u,75c);
}
B7579f7:L7579f7:{c.instructions+=3;NFSU2_TR(0x7579f7);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B7579fa:{NFSU2_TR(0x7579fa);
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
B7579fc:{NFSU2_TR(0x7579fc);
if(r1(R+518)){{goto L757a1d;}}
}
B7579fe:L7579fe:{c.instructions+=4;NFSU2_TR(0x7579fe);
u8 U[4];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B757a02:{NFSU2_TR(0x757a02);
u8 U[4];
w4(U+0,u32(0x3aull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B757a04:{NFSU2_TR(0x757a04);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B757a05:{NFSU2_TR(0x757a05);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x757a0aull));
TAIL_STATIC(0x75cf10u,75c);
}
B757a0a:L757a0a:{c.instructions+=4;NFSU2_TR(0x757a0a);
u8 U[4];
w4(U+0,u32(0x3aull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B757a0c:{NFSU2_TR(0x757a0c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B757a0d:{NFSU2_TR(0x757a0d);
u8 U[1];
w1(U+0,u8(0x0ull));
s1(u32(r4(R+0)),r1(U+0));
}
B757a10:{NFSU2_TR(0x757a10);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x757a15ull));
TAIL_STATIC(0x75cf10u,75c);
}
B757a15:L757a15:{c.instructions+=4;NFSU2_TR(0x757a15);
__builtin_memmove((R+28),(R+0),4);
}
B757a17:{NFSU2_TR(0x757a17);
w1(R+512,carry<u32>(r4(R+16),u32(0x10ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B757a1a:{NFSU2_TR(0x757a1a);
u8 U[6];
w1(R+523,scarry<u32>(r4(R+28),u32(0x1ull)));
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+28))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+28))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+28))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B757a1b:{NFSU2_TR(0x757a1b);
{goto L757a22;}
}
B757a1d:L757a1d:{c.instructions+=1;NFSU2_TR(0x757a1d);
w4(R+28,u32(0x783fe5ull));
}
B757a22:L757a22:{c.instructions+=5;NFSU2_TR(0x757a22);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B757a24:{NFSU2_TR(0x757a24);
u8 U[4];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B757a28:{NFSU2_TR(0x757a28);
u8 U[4];
w4(U+0,u32(0x7d2fd0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B757a2d:{NFSU2_TR(0x757a2d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B757a2e:{NFSU2_TR(0x757a2e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x757a33ull));
TAIL_STATIC(0x75f1d0u,75f);
}
B757a33:L757a33:{c.instructions+=3;NFSU2_TR(0x757a33);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B757a36:{NFSU2_TR(0x757a36);
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
B757a38:{NFSU2_TR(0x757a38);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L757ae9;}}
}
B757a3e:L757a3e:{c.instructions+=5;NFSU2_TR(0x757a3e);
u8 U[5];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B757a42:{NFSU2_TR(0x757a42);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B757a44:{NFSU2_TR(0x757a44);
u8 U[4];
w1(R+512,u8((r1(R+0))<(u8(0x30ull))));
w1(R+523,sborrow<u8>(r1(R+0),u8(0x30ull)));
w1(U+3,u8(u32(r1(R+0))-u32(u8(0x30ull))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B757a46:{NFSU2_TR(0x757a46);
u8 U[4];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B757a4a:{NFSU2_TR(0x757a4a);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L757a65;}}
}
B757a4c:L757a4c:{c.instructions+=1;NFSU2_TR(0x757a4c);
__builtin_memmove((R+16),(R+16),4);
}
B757a50:L757a50:{c.instructions+=2;NFSU2_TR(0x757a50);
u8 U[4];
w1(R+512,u8((r1(R+0))<(u8(0x39ull))));
w1(R+523,sborrow<u8>(r1(R+0),u8(0x39ull)));
w1(U+3,u8(u32(r1(R+0))-u32(u8(0x39ull))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B757a52:{NFSU2_TR(0x757a52);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L757a65;}}
}
B757a54:L757a54:{c.instructions+=7;NFSU2_TR(0x757a54);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfull))));
}
B757a57:{NFSU2_TR(0x757a57);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+20))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B757a5b:{NFSU2_TR(0x757a5b);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B757a5c:{NFSU2_TR(0x757a5c);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+20),(U+4),4);
}
B757a5f:{NFSU2_TR(0x757a5f);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+4))),1);
__builtin_memmove((R+0),(U+0),1);
}
B757a61:{NFSU2_TR(0x757a61);
u8 U[4];
w1(R+512,u8((r1(R+0))<(u8(0x30ull))));
w1(R+523,sborrow<u8>(r1(R+0),u8(0x30ull)));
w1(U+3,u8(u32(r1(R+0))-u32(u8(0x30ull))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B757a63:{NFSU2_TR(0x757a63);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x757a50u);}goto L757a50;}}
}
B757a65:L757a65:{c.instructions+=1;NFSU2_TR(0x757a65);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x78ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B757a68:L757a68:{c.instructions+=5;NFSU2_TR(0x757a68);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B757a6b:{NFSU2_TR(0x757a6b);
u8 U[4];
w4(U+0,u32(0x1000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B757a70:{NFSU2_TR(0x757a70);
u8 U[4];
w4(U+0,u32(0x2000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B757a75:{NFSU2_TR(0x757a75);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B757a76:{NFSU2_TR(0x757a76);
u8 U[4];
__builtin_memmove((U+0),gp(0x783288),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x757a7cull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B757a7c:L757a7c:{c.instructions+=5;NFSU2_TR(0x757a7c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B757a7f:{NFSU2_TR(0x757a7f);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B757a83:{NFSU2_TR(0x757a83);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B757a84:{NFSU2_TR(0x757a84);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B757a85:{NFSU2_TR(0x757a85);
u8 U[4];
__builtin_memmove((U+0),gp(0x783284),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x757a8bull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B757a8b:L757a8b:{c.instructions+=4;NFSU2_TR(0x757a8b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B757a8e:{NFSU2_TR(0x757a8e);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B757a90:{NFSU2_TR(0x757a90);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B757a91:{NFSU2_TR(0x757a91);
u8 U[4];
__builtin_memmove((U+0),gp(0x783268),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x757a97ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B757a97:L757a97:{c.instructions+=2;NFSU2_TR(0x757a97);
u8 U[10];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(U+6,u32(u32(r4(R+20))&u32(r4(R+20))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B757a99:{NFSU2_TR(0x757a99);
if(r1(R+518)){{goto L757b2d;}}
}
B757a9f:L757a9f:{c.instructions+=8;NFSU2_TR(0x757a9f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B757aa2:{NFSU2_TR(0x757aa2);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B757aa6:{NFSU2_TR(0x757aa6);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B757aa7:{NFSU2_TR(0x757aa7);
u8 U[4];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B757aab:{NFSU2_TR(0x757aab);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B757aac:{NFSU2_TR(0x757aac);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B757aad:{NFSU2_TR(0x757aad);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0x1000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B757ab5:{NFSU2_TR(0x757ab5);
u8 U[4];
__builtin_memmove((U+0),gp(0x783280),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x757abbull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B757abb:L757abb:{c.instructions+=12;NFSU2_TR(0x757abb);
u8 U[8];
w4(U+0,u32(u32(u32(0x54ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B757abf:{NFSU2_TR(0x757abf);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B757ac3:{NFSU2_TR(0x757ac3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B757ac6:{NFSU2_TR(0x757ac6);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0x1ull))));
}
B757ac9:{NFSU2_TR(0x757ac9);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xffffb4ffull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B757ace:{NFSU2_TR(0x757ace);
u8 U[8];
w4(U+0,u32(u32(u32(0x54ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B757ad2:{NFSU2_TR(0x757ad2);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B757ad3:{NFSU2_TR(0x757ad3);
u8 U[4];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B757ad7:{NFSU2_TR(0x757ad7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B757ad8:{NFSU2_TR(0x757ad8);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B757ad9:{NFSU2_TR(0x757ad9);
u8 U[5];
w4(U+0,u32(u32(u32(0x71ull))+u32(r4(R+16))));
w1(U+4,u8(0xaull));
s1(u32(r4(U+0)),r1(U+4));
}
B757ade:{NFSU2_TR(0x757ade);
u8 U[4];
__builtin_memmove((U+0),gp(0x78327c),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x757ae4ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B757ae4:L757ae4:{c.instructions+=1;NFSU2_TR(0x757ae4);
{goto L757c66;}
}
B757ae9:L757ae9:{c.instructions+=9;NFSU2_TR(0x757ae9);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B757aeb:{NFSU2_TR(0x757aeb);
u8 U[4];
w4(U+0,u32(0x40000080ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B757af0:{NFSU2_TR(0x757af0);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B757af2:{NFSU2_TR(0x757af2);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B757af4:{NFSU2_TR(0x757af4);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B757af6:{NFSU2_TR(0x757af6);
u8 U[4];
w4(U+0,u32(0xc0000000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B757afb:{NFSU2_TR(0x757afb);
u8 U[4];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B757aff:{NFSU2_TR(0x757aff);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B757b00:{NFSU2_TR(0x757b00);
u8 U[4];
__builtin_memmove((U+0),gp(0x7831d0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x757b06ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B757b06:L757b06:{c.instructions+=3;NFSU2_TR(0x757b06);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
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
B757b09:{NFSU2_TR(0x757b09);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x78ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B757b0c:{NFSU2_TR(0x757b0c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x757a68u);}goto L757a68;}}
}
B757b12:L757b12:{c.instructions+=6;NFSU2_TR(0x757b12);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B757b13:{NFSU2_TR(0x757b13);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B757b14:{NFSU2_TR(0x757b14);
w4(R+0,u32(0xfffffffcull));
}
B757b19:{NFSU2_TR(0x757b19);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B757b1a:{NFSU2_TR(0x757b1a);
u8 U[8];
w4(U+0,u32(u32(u32(0x1038ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B757b21:{NFSU2_TR(0x757b21);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x757b26ull));
TAIL_STATIC(0x76115eu,761);
}
B757b26:L757b26:{c.instructions+=2;NFSU2_TR(0x757b26);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x103cull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x103cull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x103cull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B757b2c:{NFSU2_TR(0x757b2c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B757b2d:L757b2d:{c.instructions+=6;NFSU2_TR(0x757b2d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B757b30:{NFSU2_TR(0x757b30);
u8 U[4];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B757b34:{NFSU2_TR(0x757b34);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B757b35:{NFSU2_TR(0x757b35);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B757b36:{NFSU2_TR(0x757b36);
u8 U[8];
w4(U+0,u32(u32(u32(0x54ull))+u32(r4(R+16))));
w4(U+4,u32(0x1cull));
s4(u32(r4(U+0)),r4(U+4));
}
B757b3e:{NFSU2_TR(0x757b3e);
u8 U[4];
__builtin_memmove((U+0),gp(0x783278),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x757b44ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B757b44:L757b44:{c.instructions+=12;NFSU2_TR(0x757b44);
u8 U[8];
w4(U+0,u32(u32(u32(0x54ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B757b48:{NFSU2_TR(0x757b48);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0x1ull))));
}
B757b4b:{NFSU2_TR(0x757b4b);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xffffb4ffull))));
}
B757b50:{NFSU2_TR(0x757b50);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0x2ull))));
}
B757b53:{NFSU2_TR(0x757b53);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xffffff97ull))));
}
B757b56:{NFSU2_TR(0x757b56);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0x10ull))));
}
B757b59:{NFSU2_TR(0x757b59);
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
B757b5b:{NFSU2_TR(0x757b5b);
u8 U[5];
w4(U+0,u32(u32(u32(0x65ull))+u32(r4(R+16))));
w1(U+4,u8(0xaull));
s1(u32(r4(U+0)),r1(U+4));
}
B757b60:{NFSU2_TR(0x757b60);
u8 U[5];
w4(U+0,u32(u32(u32(0x5eull))+u32(r4(R+16))));
w1(U+4,u8(0x8ull));
s1(u32(r4(U+0)),r1(U+4));
}
B757b65:{NFSU2_TR(0x757b65);
u8 U[5];
w4(U+0,u32(u32(u32(0x60ull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B757b6a:{NFSU2_TR(0x757b6a);
u8 U[8];
w4(U+0,u32(u32(u32(0x54ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B757b6e:{NFSU2_TR(0x757b6e);
if(r1(R+518)){{goto L757c57;}}
}
B757b74:L757b74:{c.instructions+=3;NFSU2_TR(0x757b74);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+28))),1);
__builtin_memmove((R+0),(U+0),1);
}
B757b76:{NFSU2_TR(0x757b76);
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
B757b78:{NFSU2_TR(0x757b78);
if(r1(R+518)){{goto L757c57;}}
}
B757b7e:L757b7e:{c.instructions+=2;NFSU2_TR(0x757b7e);
u8 U[4];
w1(R+512,u8((r1(R+0))<(u8(0x2cull))));
w1(R+523,sborrow<u8>(r1(R+0),u8(0x2cull)));
w1(U+3,u8(u32(r1(R+0))-u32(u8(0x2cull))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B757b80:{NFSU2_TR(0x757b80);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L757b83;}}
}
B757b82:L757b82:{c.instructions+=1;NFSU2_TR(0x757b82);
u8 U[6];
w1(R+523,scarry<u32>(r4(R+28),u32(0x1ull)));
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+28))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+28))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+28))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B757b83:L757b83:{c.instructions+=4;NFSU2_TR(0x757b83);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B757b85:{NFSU2_TR(0x757b85);
u8 U[4];
w4(U+0,u32(0x7d359cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B757b8a:{NFSU2_TR(0x757b8a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B757b8b:{NFSU2_TR(0x757b8b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x757b90ull));
TAIL_STATIC(0x75f1d0u,75f);
}
B757b90:L757b90:{c.instructions+=3;NFSU2_TR(0x757b90);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B757b93:{NFSU2_TR(0x757b93);
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
B757b95:{NFSU2_TR(0x757b95);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L757bab;}}
}
B757b97:L757b97:{c.instructions+=4;NFSU2_TR(0x757b97);
u8 U[8];
w4(U+0,u32(u32(u32(0x54ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B757b9b:{NFSU2_TR(0x757b9b);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0xffffefffull))));
}
B757ba1:{NFSU2_TR(0x757ba1);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+4,u32(u32(r4(R+4))|u32(u32(0x2000ull))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B757ba7:{NFSU2_TR(0x757ba7);
u8 U[8];
w4(U+0,u32(u32(u32(0x54ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B757bab:L757bab:{c.instructions+=4;NFSU2_TR(0x757bab);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B757bad:{NFSU2_TR(0x757bad);
u8 U[4];
w4(U+0,u32(0x7d3594ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B757bb2:{NFSU2_TR(0x757bb2);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B757bb3:{NFSU2_TR(0x757bb3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x757bb8ull));
TAIL_STATIC(0x75f1d0u,75f);
}
B757bb8:L757bb8:{c.instructions+=3;NFSU2_TR(0x757bb8);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B757bbb:{NFSU2_TR(0x757bbb);
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
B757bbd:{NFSU2_TR(0x757bbd);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L757bd3;}}
}
B757bbf:L757bbf:{c.instructions+=4;NFSU2_TR(0x757bbf);
u8 U[8];
w4(U+0,u32(u32(u32(0x54ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B757bc3:{NFSU2_TR(0x757bc3);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0xffffdfffull))));
}
B757bc9:{NFSU2_TR(0x757bc9);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+8,u32(u32(r4(R+8))|u32(u32(0x1000ull))));
w1(R+519,u8(s32(r4(R+8))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+8))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B757bcf:{NFSU2_TR(0x757bcf);
u8 U[8];
w4(U+0,u32(u32(u32(0x54ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B757bd3:L757bd3:{c.instructions+=4;NFSU2_TR(0x757bd3);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B757bd5:{NFSU2_TR(0x757bd5);
u8 U[4];
w4(U+0,u32(0x7d358cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B757bda:{NFSU2_TR(0x757bda);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B757bdb:{NFSU2_TR(0x757bdb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x757be0ull));
TAIL_STATIC(0x75f1d0u,75f);
}
B757be0:L757be0:{c.instructions+=3;NFSU2_TR(0x757be0);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B757be3:{NFSU2_TR(0x757be3);
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
B757be5:{NFSU2_TR(0x757be5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L757bec;}}
}
B757be7:L757be7:{c.instructions+=1;NFSU2_TR(0x757be7);
u8 U[14];
w4(U+0,u32(u32(u32(0x54ull))+u32(r4(R+16))));
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0x4ull))));
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
B757bec:L757bec:{c.instructions+=4;NFSU2_TR(0x757bec);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B757bee:{NFSU2_TR(0x757bee);
u8 U[4];
w4(U+0,u32(0x7d3584ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B757bf3:{NFSU2_TR(0x757bf3);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B757bf4:{NFSU2_TR(0x757bf4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x757bf9ull));
TAIL_STATIC(0x75f1d0u,75f);
}
B757bf9:L757bf9:{c.instructions+=3;NFSU2_TR(0x757bf9);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B757bfc:{NFSU2_TR(0x757bfc);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B757bfe:{NFSU2_TR(0x757bfe);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L757c05;}}
}
B757c00:L757c00:{c.instructions+=1;NFSU2_TR(0x757c00);
u8 U[8];
w4(U+0,u32(u32(u32(0x54ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0xfffffffbull))));
s4(u32(r4(U+0)),r4(U+4));
}
B757c05:L757c05:{c.instructions+=3;NFSU2_TR(0x757c05);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+28))),1);
__builtin_memmove((R+0),(U+0),1);
}
B757c07:{NFSU2_TR(0x757c07);
u8 U[1];
w1(R+523,sborrow<u8>(r1(R+0),u8(0x30ull)));
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x30ull))));
w1(R+519,u8(s8(r1(U+0))<s8(u8(0x0ull))));
}
B757c09:{NFSU2_TR(0x757c09);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L757c38;}}
}
B757c0b:L757c0b:{c.instructions+=2;NFSU2_TR(0x757c0b);
u8 U[1];
w1(R+523,sborrow<u8>(r1(R+0),u8(0x39ull)));
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x39ull))));
w1(R+519,u8(s8(r1(U+0))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B757c0d:{NFSU2_TR(0x757c0d);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L757c38;}}
}
B757c0f:L757c0f:{c.instructions+=6;NFSU2_TR(0x757c0f);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B757c11:{NFSU2_TR(0x757c11);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B757c13:{NFSU2_TR(0x757c13);
u8 U[8];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B757c17:{NFSU2_TR(0x757c17);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+28))),1);
__builtin_memmove((R+0),(U+0),1);
}
B757c19:{NFSU2_TR(0x757c19);
u8 U[1];
w1(R+523,sborrow<u8>(r1(R+0),u8(0x30ull)));
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x30ull))));
w1(R+519,u8(s8(r1(U+0))<s8(u8(0x0ull))));
}
B757c1b:{NFSU2_TR(0x757c1b);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L757c38;}}
}
B757c1d:L757c1d:{c.instructions+=1;NFSU2_TR(0x757c1d);
__builtin_memmove((R+4),(R+4),4);
}
B757c20:L757c20:{c.instructions+=2;NFSU2_TR(0x757c20);
u8 U[1];
w1(R+523,sborrow<u8>(r1(R+0),u8(0x39ull)));
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x39ull))));
w1(R+519,u8(s8(r1(U+0))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B757c22:{NFSU2_TR(0x757c22);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L757c38;}}
}
B757c24:L757c24:{c.instructions+=8;NFSU2_TR(0x757c24);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfull))));
}
B757c27:{NFSU2_TR(0x757c27);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B757c2a:{NFSU2_TR(0x757c2a);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B757c2d:{NFSU2_TR(0x757c2d);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B757c2e:{NFSU2_TR(0x757c2e);
u8 U[8];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B757c32:{NFSU2_TR(0x757c32);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+28))),1);
__builtin_memmove((R+0),(U+0),1);
}
B757c34:{NFSU2_TR(0x757c34);
u8 U[1];
w1(R+523,sborrow<u8>(r1(R+0),u8(0x30ull)));
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x30ull))));
w1(R+519,u8(s8(r1(U+0))<s8(u8(0x0ull))));
}
B757c36:{NFSU2_TR(0x757c36);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x757c20u);}goto L757c20;}}
}
B757c38:L757c38:{c.instructions+=3;NFSU2_TR(0x757c38);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+28))),1);
__builtin_memmove((R+0),(U+0),1);
}
B757c3a:{NFSU2_TR(0x757c3a);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x2cull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B757c3c:{NFSU2_TR(0x757c3c);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x757b74u);}goto L757b74;}}
}
B757c42:L757c42:{c.instructions+=2;NFSU2_TR(0x757c42);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B757c44:{NFSU2_TR(0x757c44);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x757b74u);}goto L757b74;}}
}
B757c4a:L757c4a:{c.instructions+=4;NFSU2_TR(0x757c4a);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B757c4d:{NFSU2_TR(0x757c4d);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B757c4e:{NFSU2_TR(0x757c4e);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x2cull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B757c50:{NFSU2_TR(0x757c50);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x757c42u);}goto L757c42;}}
}
B757c52:L757c52:{c.instructions+=1;NFSU2_TR(0x757c52);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x757b74u);}goto L757b74;}
}
B757c57:L757c57:{c.instructions+=5;NFSU2_TR(0x757c57);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B757c5a:{NFSU2_TR(0x757c5a);
u8 U[4];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B757c5e:{NFSU2_TR(0x757c5e);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B757c5f:{NFSU2_TR(0x757c5f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B757c60:{NFSU2_TR(0x757c60);
u8 U[4];
__builtin_memmove((U+0),gp(0x783274),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x757c66ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B757c66:L757c66:{c.instructions+=4;NFSU2_TR(0x757c66);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B757c69:{NFSU2_TR(0x757c69);
u8 U[4];
w4(U+0,u32(0xcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B757c6b:{NFSU2_TR(0x757c6b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B757c6c:{NFSU2_TR(0x757c6c);
u8 U[4];
__builtin_memmove((U+0),gp(0x783270),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x757c72ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B757c72:L757c72:{c.instructions+=4;NFSU2_TR(0x757c72);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B757c78:{NFSU2_TR(0x757c78);
__builtin_memmove((R+28),gp(0x783214),4);
}
B757c7e:{NFSU2_TR(0x757c7e);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B757c7f:{NFSU2_TR(0x757c7f);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x757c81ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B757c81:L757c81:{c.instructions+=3;NFSU2_TR(0x757c81);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B757c87:{NFSU2_TR(0x757c87);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B757c88:{NFSU2_TR(0x757c88);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x757c8aull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B757c8a:L757c8a:{c.instructions+=3;NFSU2_TR(0x757c8a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B757c90:{NFSU2_TR(0x757c90);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B757c91:{NFSU2_TR(0x757c91);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x757c93ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B757c93:L757c93:{c.instructions+=12;NFSU2_TR(0x757c93);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B757c99:{NFSU2_TR(0x757c99);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B757c9b:{NFSU2_TR(0x757c9b);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x5ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B757c9e:{NFSU2_TR(0x757c9e);
u8 U[8];
w4(U+0,u32(u32(u32(0x1044ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B757ca5:{NFSU2_TR(0x757ca5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+8),(U+0),1);
}
B757ca8:{NFSU2_TR(0x757ca8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B757ca9:{NFSU2_TR(0x757ca9);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B757cab:{NFSU2_TR(0x757cab);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x4ull))));
}
B757cae:{NFSU2_TR(0x757cae);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B757cb4:{NFSU2_TR(0x757cb4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B757cb5:{NFSU2_TR(0x757cb5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B757cb6:{NFSU2_TR(0x757cb6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x757cbbull));
TAIL_STATIC(0x76115eu,761);
}
B757cbb:L757cbb:{c.instructions+=2;NFSU2_TR(0x757cbb);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x103cull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x103cull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x103cull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B757cc1:{NFSU2_TR(0x757cc1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B757cd0:L757cd0:{c.instructions+=5;NFSU2_TR(0x757cd0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B757cd1:{NFSU2_TR(0x757cd1);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B757cd5:{NFSU2_TR(0x757cd5);
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
B757cd7:{NFSU2_TR(0x757cd7);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B757cd8:{NFSU2_TR(0x757cd8);
if(r1(R+518)){{goto L757d23;}}
}
B757cda:L757cda:{c.instructions+=3;NFSU2_TR(0x757cda);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B757cde:{NFSU2_TR(0x757cde);
u8 U[22];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0x1ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0x1ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B757ce5:{NFSU2_TR(0x757ce5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L757d23;}}
}
B757ce7:L757ce7:{c.instructions+=4;NFSU2_TR(0x757ce7);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B757ce8:{NFSU2_TR(0x757ce8);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x191cull))));
__builtin_memmove((R+28),(U+0),4);
}
B757cee:{NFSU2_TR(0x757cee);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B757cef:{NFSU2_TR(0x757cef);
u8 U[4];
__builtin_memmove((U+0),gp(0x7831a8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x757cf5ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B757cf5:L757cf5:{c.instructions+=3;NFSU2_TR(0x757cf5);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B757cf6:{NFSU2_TR(0x757cf6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B757cf7:{NFSU2_TR(0x757cf7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x757cfcull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x757910u);}goto L757910;}
}
B757cfc:L757cfc:{c.instructions+=5;NFSU2_TR(0x757cfc);
__builtin_memmove((R+12),(R+0),4);
}
B757cfe:{NFSU2_TR(0x757cfe);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B757d04:{NFSU2_TR(0x757d04);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B757d07:{NFSU2_TR(0x757d07);
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
B757d0a:{NFSU2_TR(0x757d0a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L757d16;}}
}
B757d0c:L757d0c:{c.instructions+=1;NFSU2_TR(0x757d0c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc8ull))));
w4(U+4,u32(0x3ull));
s4(u32(r4(U+0)),r4(U+4));
}
B757d16:L757d16:{c.instructions+=2;NFSU2_TR(0x757d16);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B757d17:{NFSU2_TR(0x757d17);
u8 U[4];
__builtin_memmove((U+0),gp(0x7831bc),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x757d1dull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B757d1d:L757d1d:{c.instructions+=5;NFSU2_TR(0x757d1d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B757d1e:{NFSU2_TR(0x757d1e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B757d1f:{NFSU2_TR(0x757d1f);
__builtin_memmove((R+0),(R+12),4);
}
B757d21:{NFSU2_TR(0x757d21);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B757d22:{NFSU2_TR(0x757d22);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B757d23:L757d23:{c.instructions+=4;NFSU2_TR(0x757d23);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B757d24:{NFSU2_TR(0x757d24);
w4(R+0,u32(0xfffffffeull));
}
B757d29:{NFSU2_TR(0x757d29);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B757d2a:{NFSU2_TR(0x757d2a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B757d30:L757d30:{c.instructions+=5;NFSU2_TR(0x757d30);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B757d31:{NFSU2_TR(0x757d31);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B757d35:{NFSU2_TR(0x757d35);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B757d3b:{NFSU2_TR(0x757d3b);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B757d3e:{NFSU2_TR(0x757d3e);
if(r1(R+518)){{goto L757dac;}}
}
B757d40:L757d40:{c.instructions+=4;NFSU2_TR(0x757d40);
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
B757d43:{NFSU2_TR(0x757d43);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B757d44:{NFSU2_TR(0x757d44);
__builtin_memmove((R+28),gp(0x783150),4);
}
B757d4a:{NFSU2_TR(0x757d4a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L757d63;}}
}
B757d4c:L757d4c:{c.instructions+=1;NFSU2_TR(0x757d4c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc8ull))));
w4(U+4,u32(0x6ull));
s4(u32(r4(U+0)),r4(U+4));
}
B757d56:L757d56:{c.instructions+=2;NFSU2_TR(0x757d56);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B757d58:{NFSU2_TR(0x757d58);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x757d5aull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B757d5a:L757d5a:{c.instructions+=2;NFSU2_TR(0x757d5a);
u8 U[22];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0x6ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0x6ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0x6ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B757d61:{NFSU2_TR(0x757d61);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x757d56u);}goto L757d56;}}
}
B757d63:L757d63:{c.instructions+=2;NFSU2_TR(0x757d63);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc8ull))));
w4(U+4,u32(0x8ull));
s4(u32(r4(U+0)),r4(U+4));
}
B757d6d:{NFSU2_TR(0x757d6d);
__builtin_memmove((R+4),(R+4),4);
}
B757d70:L757d70:{c.instructions+=2;NFSU2_TR(0x757d70);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B757d72:{NFSU2_TR(0x757d72);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x757d74ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B757d74:L757d74:{c.instructions+=2;NFSU2_TR(0x757d74);
u8 U[22];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0x1ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0x1ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B757d7b:{NFSU2_TR(0x757d7b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x757d70u);}goto L757d70;}}
}
B757d7d:L757d7d:{c.instructions+=4;NFSU2_TR(0x757d7d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B757d80:{NFSU2_TR(0x757d80);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
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
B757d83:{NFSU2_TR(0x757d83);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B757d84:{NFSU2_TR(0x757d84);
if(r1(R+518)){{goto L757dac;}}
}
B757d86:L757d86:{c.instructions+=3;NFSU2_TR(0x757d86);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B757d88:{NFSU2_TR(0x757d88);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B757d89:{NFSU2_TR(0x757d89);
u8 U[4];
__builtin_memmove((U+0),gp(0x783268),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x757d8full));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B757d8f:L757d8f:{c.instructions+=4;NFSU2_TR(0x757d8f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B757d92:{NFSU2_TR(0x757d92);
u8 U[4];
w4(U+0,u32(0xfull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B757d94:{NFSU2_TR(0x757d94);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B757d95:{NFSU2_TR(0x757d95);
u8 U[4];
__builtin_memmove((U+0),gp(0x783270),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x757d9bull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B757d9b:L757d9b:{c.instructions+=3;NFSU2_TR(0x757d9b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B757d9e:{NFSU2_TR(0x757d9e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B757d9f:{NFSU2_TR(0x757d9f);
u8 U[4];
__builtin_memmove((U+0),gp(0x783144),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x757da5ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B757da5:L757da5:{c.instructions+=1;NFSU2_TR(0x757da5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x78ull))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B757dac:L757dac:{c.instructions+=3;NFSU2_TR(0x757dac);
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
B757dae:{NFSU2_TR(0x757dae);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B757daf:{NFSU2_TR(0x757daf);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B757db0:L757db0:{c.instructions+=5;NFSU2_TR(0x757db0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B757db1:{NFSU2_TR(0x757db1);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B757db5:{NFSU2_TR(0x757db5);
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
B757db7:{NFSU2_TR(0x757db7);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B757db8:{NFSU2_TR(0x757db8);
if(r1(R+518)){{goto L757e03;}}
}
B757dba:L757dba:{c.instructions+=3;NFSU2_TR(0x757dba);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B757dbe:{NFSU2_TR(0x757dbe);
u8 U[22];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0x1ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0x1ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B757dc5:{NFSU2_TR(0x757dc5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L757e03;}}
}
B757dc7:L757dc7:{c.instructions+=4;NFSU2_TR(0x757dc7);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B757dc8:{NFSU2_TR(0x757dc8);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x191cull))));
__builtin_memmove((R+28),(U+0),4);
}
B757dce:{NFSU2_TR(0x757dce);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B757dcf:{NFSU2_TR(0x757dcf);
u8 U[4];
__builtin_memmove((U+0),gp(0x7831a8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x757dd5ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B757dd5:L757dd5:{c.instructions+=3;NFSU2_TR(0x757dd5);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B757dd6:{NFSU2_TR(0x757dd6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B757dd7:{NFSU2_TR(0x757dd7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x757ddcull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x757910u);}goto L757910;}
}
B757ddc:L757ddc:{c.instructions+=5;NFSU2_TR(0x757ddc);
__builtin_memmove((R+12),(R+0),4);
}
B757dde:{NFSU2_TR(0x757dde);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B757de4:{NFSU2_TR(0x757de4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B757de7:{NFSU2_TR(0x757de7);
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
B757dea:{NFSU2_TR(0x757dea);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L757df6;}}
}
B757dec:L757dec:{c.instructions+=1;NFSU2_TR(0x757dec);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc8ull))));
w4(U+4,u32(0x2ull));
s4(u32(r4(U+0)),r4(U+4));
}
B757df6:L757df6:{c.instructions+=2;NFSU2_TR(0x757df6);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B757df7:{NFSU2_TR(0x757df7);
u8 U[4];
__builtin_memmove((U+0),gp(0x7831bc),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x757dfdull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B757dfd:L757dfd:{c.instructions+=5;NFSU2_TR(0x757dfd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B757dfe:{NFSU2_TR(0x757dfe);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B757dff:{NFSU2_TR(0x757dff);
__builtin_memmove((R+0),(R+12),4);
}
B757e01:{NFSU2_TR(0x757e01);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B757e02:{NFSU2_TR(0x757e02);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B757e03:L757e03:{c.instructions+=4;NFSU2_TR(0x757e03);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B757e04:{NFSU2_TR(0x757e04);
w4(R+0,u32(0xfffffffeull));
}
B757e09:{NFSU2_TR(0x757e09);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B757e0a:{NFSU2_TR(0x757e0a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B757e10:L757e10:{c.instructions+=1;NFSU2_TR(0x757e10);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x757d30u);}goto L757d30;}
}
B757e20:L757e20:{c.instructions+=4;NFSU2_TR(0x757e20);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B757e24:{NFSU2_TR(0x757e24);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B757e2a:{NFSU2_TR(0x757e2a);
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
B757e2d:{NFSU2_TR(0x757e2d);
if(r1(R+518)){{goto L757e5a;}}
}
B757e2f:L757e2f:{c.instructions+=2;NFSU2_TR(0x757e2f);
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
B757e32:{NFSU2_TR(0x757e32);
if(r1(R+518)){{goto L757e5a;}}
}
B757e34:L757e34:{c.instructions+=2;NFSU2_TR(0x757e34);
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
B757e37:{NFSU2_TR(0x757e37);
if(r1(R+518)){{goto L757e54;}}
}
B757e39:L757e39:{c.instructions+=2;NFSU2_TR(0x757e39);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0x7ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x7ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x7ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B757e3c:{NFSU2_TR(0x757e3c);
if(r1(R+518)){{goto L757e54;}}
}
B757e3e:L757e3e:{c.instructions+=2;NFSU2_TR(0x757e3e);
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
B757e41:{NFSU2_TR(0x757e41);
if(r1(R+518)){{goto L757e4e;}}
}
B757e43:L757e43:{c.instructions+=2;NFSU2_TR(0x757e43);
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
B757e46:{NFSU2_TR(0x757e46);
if(r1(R+518)){{goto L757e4e;}}
}
B757e48:L757e48:{c.instructions+=2;NFSU2_TR(0x757e48);
w4(R+0,u32(0x4ull));
}
B757e4d:{NFSU2_TR(0x757e4d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B757e4e:L757e4e:{c.instructions+=2;NFSU2_TR(0x757e4e);
w4(R+0,u32(0x3ull));
}
B757e53:{NFSU2_TR(0x757e53);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B757e54:L757e54:{c.instructions+=2;NFSU2_TR(0x757e54);
w4(R+0,u32(0x1ull));
}
B757e59:{NFSU2_TR(0x757e59);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B757e5a:L757e5a:{c.instructions+=2;NFSU2_TR(0x757e5a);
w4(R+0,u32(0x2ull));
}
B757e5f:{NFSU2_TR(0x757e5f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B757e60:L757e60:{c.instructions+=5;NFSU2_TR(0x757e60);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B757e61:{NFSU2_TR(0x757e61);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B757e65:{NFSU2_TR(0x757e65);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B757e6b:{NFSU2_TR(0x757e6b);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B757e6e:{NFSU2_TR(0x757e6e);
if(r1(R+518)){{goto L757e7c;}}
}
B757e70:L757e70:{c.instructions+=2;NFSU2_TR(0x757e70);
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
B757e73:{NFSU2_TR(0x757e73);
if(r1(R+518)){{goto L757e7c;}}
}
B757e75:L757e75:{c.instructions+=3;NFSU2_TR(0x757e75);
w4(R+0,u32(0xfffffffeull));
}
B757e7a:{NFSU2_TR(0x757e7a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B757e7b:{NFSU2_TR(0x757e7b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B757e7c:L757e7c:{c.instructions+=13;NFSU2_TR(0x757e7c);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B757e7d:{NFSU2_TR(0x757e7d);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B757e83:{NFSU2_TR(0x757e83);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B757e84:{NFSU2_TR(0x757e84);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xf0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B757e8a:{NFSU2_TR(0x757e8a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B757e8d:{NFSU2_TR(0x757e8d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B757e8e:{NFSU2_TR(0x757e8e);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B757e94:{NFSU2_TR(0x757e94);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B757e95:{NFSU2_TR(0x757e95);
u8 U[56];
w8(U+0,u64(s64(s32(r4(R+28)))));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x757e95);w8(U+40,u64(x_/y_));}
w4(R+0,u32(r8(U+40)));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x757e95);w8(U+48,u64(x_%y_));}
w4(R+8,u32(r8(U+48)));
}
B757e97:{NFSU2_TR(0x757e97);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xf4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B757e9d:{NFSU2_TR(0x757e9d);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B757ea1:{NFSU2_TR(0x757ea1);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B757ea3:{NFSU2_TR(0x757ea3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L757eac;}}
}
B757ea5:L757ea5:{c.instructions+=6;NFSU2_TR(0x757ea5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B757ea6:{NFSU2_TR(0x757ea6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B757ea7:{NFSU2_TR(0x757ea7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B757ea8:{NFSU2_TR(0x757ea8);
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
B757eaa:{NFSU2_TR(0x757eaa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B757eab:{NFSU2_TR(0x757eab);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B757eac:L757eac:{c.instructions+=3;NFSU2_TR(0x757eac);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B757eb0:{NFSU2_TR(0x757eb0);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B757eb2:{NFSU2_TR(0x757eb2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L757ecc;}}
}
B757eb4:L757eb4:{c.instructions+=15;NFSU2_TR(0x757eb4);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B757eb8:{NFSU2_TR(0x757eb8);
__builtin_memmove((R+0),(R+28),4);
}
B757eba:{NFSU2_TR(0x757eba);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+12))));
}
B757ebc:{NFSU2_TR(0x757ebc);
w1(R+512,carry<u32>(r4(R+0),r4(R+24)));
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+24))));
}
B757ebe:{NFSU2_TR(0x757ebe);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B757ebf:{NFSU2_TR(0x757ebf);
u8 U[56];
w8(U+0,u64(s64(s32(r4(R+28)))));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x757ebf);w8(U+40,u64(x_/y_));}
w4(R+0,u32(r8(U+40)));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x757ebf);w8(U+48,u64(x_%y_));}
w4(R+8,u32(r8(U+48)));
}
B757ec1:{NFSU2_TR(0x757ec1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B757ec2:{NFSU2_TR(0x757ec2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B757ec3:{NFSU2_TR(0x757ec3);
__builtin_memmove((R+0),(R+8),4);
}
B757ec5:{NFSU2_TR(0x757ec5);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B757ec6:{NFSU2_TR(0x757ec6);
u8 U[56];
w8(U+0,u64(s64(s32(r4(R+20)))));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x757ec6);w8(U+40,u64(x_/y_));}
w4(R+0,u32(r8(U+40)));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x757ec6);w8(U+48,u64(x_%y_));}
w4(R+8,u32(r8(U+48)));
}
B757ec8:{NFSU2_TR(0x757ec8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B757ec9:{NFSU2_TR(0x757ec9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B757eca:{NFSU2_TR(0x757eca);
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
B757ecb:{NFSU2_TR(0x757ecb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B757ecc:L757ecc:{c.instructions+=8;NFSU2_TR(0x757ecc);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xfcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B757ed2:{NFSU2_TR(0x757ed2);
w4(R+20,u32(u32(r4(R+20))+u32(r4(R+24))));
}
B757ed4:{NFSU2_TR(0x757ed4);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+20)),r4(U+0));
}
B757ed7:{NFSU2_TR(0x757ed7);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B757edd:{NFSU2_TR(0x757edd);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x800ull))));
}
B757ee2:{NFSU2_TR(0x757ee2);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((R+8),(U+0),4);
}
B757ee5:{NFSU2_TR(0x757ee5);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(R+8))<(r4(U+6))));
w1(R+523,sborrow<u32>(r4(R+8),r4(U+6)));
w4(U+10,u32(u32(r4(R+8))-u32(r4(U+6))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B757ee7:{NFSU2_TR(0x757ee7);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L757ef3;}}
}
B757ee9:L757ee9:{c.instructions+=6;NFSU2_TR(0x757ee9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B757eea:{NFSU2_TR(0x757eea);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B757eeb:{NFSU2_TR(0x757eeb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B757eec:{NFSU2_TR(0x757eec);
w4(R+0,u32(0xfffffffaull));
}
B757ef1:{NFSU2_TR(0x757ef1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B757ef2:{NFSU2_TR(0x757ef2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B757ef3:L757ef3:{c.instructions+=4;NFSU2_TR(0x757ef3);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B757ef7:{NFSU2_TR(0x757ef7);
__builtin_memmove((R+0),(R+4),4);
}
B757ef9:{NFSU2_TR(0x757ef9);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B757efc:{NFSU2_TR(0x757efc);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((R+28),(U+0),4);
}
B757eff:L757eff:{c.instructions+=1;NFSU2_TR(0x757eff);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L757f01;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x757effu);}goto L757eff;}
}
B757f01:L757f01:{c.instructions+=2;NFSU2_TR(0x757f01);
__builtin_memmove((R+4),(R+0),4);
}
B757f03:{NFSU2_TR(0x757f03);
w1(R+512,u8(0x0ull));
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B757f06:L757f06:{c.instructions+=1;NFSU2_TR(0x757f06);
u8 U[35];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L757f08;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x757f06u);}goto L757f06;}
}
B757f08:L757f08:{c.instructions+=9;NFSU2_TR(0x757f08);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B757f0e:{NFSU2_TR(0x757f0e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B757f11:{NFSU2_TR(0x757f11);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B757f17:{NFSU2_TR(0x757f17);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B757f1d:{NFSU2_TR(0x757f1d);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B757f1e:{NFSU2_TR(0x757f1e);
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
B757f1f:{NFSU2_TR(0x757f1f);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x100ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B757f25:{NFSU2_TR(0x757f25);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B757f28:{NFSU2_TR(0x757f28);
u8 U[4];
__builtin_memmove((U+0),gp(0x78320c),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x757f2eull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B757f2e:L757f2e:{c.instructions+=10;NFSU2_TR(0x757f2e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B757f31:{NFSU2_TR(0x757f31);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xf0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B757f37:{NFSU2_TR(0x757f37);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B757f3d:{NFSU2_TR(0x757f3d);
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
B757f3f:{NFSU2_TR(0x757f3f);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B757f40:{NFSU2_TR(0x757f40);
u8 U[64];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+8,u64(s64(s32(r4(U+4)))));
w8(U+16,u64(r4(R+8)));
w8(U+24,shl<u64>(r8(U+16),u64(u32(0x20ull))));
w8(U+32,u64(r4(R+0)));
w8(U+40,u64(u64(r8(U+24))|u64(r8(U+32))));
{s64 x_=s64(s64(r8(U+40))),y_=s64(s64(r8(U+8)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x757f40);w8(U+48,u64(x_/y_));}
w4(R+0,u32(r8(U+48)));
{s64 x_=s64(s64(r8(U+40))),y_=s64(s64(r8(U+8)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x757f40);w8(U+56,u64(x_%y_));}
w4(R+8,u32(r8(U+56)));
}
B757f46:{NFSU2_TR(0x757f46);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x191cull))));
__builtin_memmove((R+24),(U+0),4);
}
B757f4c:{NFSU2_TR(0x757f4c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B757f4d:{NFSU2_TR(0x757f4d);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xf0ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B757f53:{NFSU2_TR(0x757f53);
u8 U[4];
__builtin_memmove((U+0),gp(0x7831a8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x757f59ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B757f59:L757f59:{c.instructions+=2;NFSU2_TR(0x757f59);
__builtin_memmove((R+0),(R+12),4);
}
B757f5b:{NFSU2_TR(0x757f5b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x757f60ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x757130u);}goto L757130;}
}
B757f60:L757f60:{c.instructions+=2;NFSU2_TR(0x757f60);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B757f61:{NFSU2_TR(0x757f61);
u8 U[4];
__builtin_memmove((U+0),gp(0x7831bc),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x757f67ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B757f67:L757f67:{c.instructions+=12;NFSU2_TR(0x757f67);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xf0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B757f6d:{NFSU2_TR(0x757f6d);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xf4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B757f73:{NFSU2_TR(0x757f73);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B757f79:{NFSU2_TR(0x757f79);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+24))));
}
B757f7b:{NFSU2_TR(0x757f7b);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+4))));
}
B757f7d:{NFSU2_TR(0x757f7d);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B757f7e:{NFSU2_TR(0x757f7e);
u8 U[56];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x757f7e);w8(U+40,u64(x_/y_));}
w4(R+0,u32(r8(U+40)));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x757f7e);w8(U+48,u64(x_%y_));}
w4(R+8,u32(r8(U+48)));
}
B757f80:{NFSU2_TR(0x757f80);
__builtin_memmove((R+0),(R+8),4);
}
B757f82:{NFSU2_TR(0x757f82);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B757f83:{NFSU2_TR(0x757f83);
u8 U[64];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+8,u64(s64(s32(r4(U+4)))));
w8(U+16,u64(r4(R+8)));
w8(U+24,shl<u64>(r8(U+16),u64(u32(0x20ull))));
w8(U+32,u64(r4(R+0)));
w8(U+40,u64(u64(r8(U+24))|u64(r8(U+32))));
{s64 x_=s64(s64(r8(U+40))),y_=s64(s64(r8(U+8)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x757f83);w8(U+48,u64(x_/y_));}
w4(R+0,u32(r8(U+48)));
{s64 x_=s64(s64(r8(U+40))),y_=s64(s64(r8(U+8)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x757f83);w8(U+56,u64(x_%y_));}
w4(R+8,u32(r8(U+56)));
}
B757f89:{NFSU2_TR(0x757f89);
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
B757f8b:{NFSU2_TR(0x757f8b);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L757f92;}}
}
B757f8d:L757f8d:{c.instructions+=1;NFSU2_TR(0x757f8d);
w4(R+0,u32(0x1ull));
}
B757f92:L757f92:{c.instructions+=5;NFSU2_TR(0x757f92);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B757f93:{NFSU2_TR(0x757f93);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B757f94:{NFSU2_TR(0x757f94);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B757f95:{NFSU2_TR(0x757f95);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B757f96:{NFSU2_TR(0x757f96);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B757fa0:L757fa0:{c.instructions+=5;NFSU2_TR(0x757fa0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B757fa1:{NFSU2_TR(0x757fa1);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B757fa5:{NFSU2_TR(0x757fa5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B757fab:{NFSU2_TR(0x757fab);
u8 U[22];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+14))));
w1(R+523,sborrow<u32>(r4(R+0),r4(U+14)));
w4(U+18,u32(u32(r4(R+0))-u32(r4(U+14))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B757fb1:{NFSU2_TR(0x757fb1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L757fba;}}
}
B757fb3:L757fb3:{c.instructions+=3;NFSU2_TR(0x757fb3);
w4(R+0,u32(0xfffffff9ull));
}
B757fb8:{NFSU2_TR(0x757fb8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B757fb9:{NFSU2_TR(0x757fb9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B757fba:L757fba:{c.instructions+=4;NFSU2_TR(0x757fba);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1934ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B757fc0:{NFSU2_TR(0x757fc0);
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
B757fc2:{NFSU2_TR(0x757fc2);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B757fc3:{NFSU2_TR(0x757fc3);
if(r1(R+518)){{goto L757fde;}}
}
B757fc5:L757fc5:{c.instructions+=2;NFSU2_TR(0x757fc5);
__builtin_memmove((R+28),gp(0x783150),4);
}
B757fcb:{NFSU2_TR(0x757fcb);
{goto L757fd0;}
}
B757fd0:L757fd0:{c.instructions+=2;NFSU2_TR(0x757fd0);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B757fd2:{NFSU2_TR(0x757fd2);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x757fd4ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B757fd4:L757fd4:{c.instructions+=3;NFSU2_TR(0x757fd4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1934ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B757fda:{NFSU2_TR(0x757fda);
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
B757fdc:{NFSU2_TR(0x757fdc);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x757fd0u);}goto L757fd0;}}
}
B757fde:L757fde:{c.instructions+=7;NFSU2_TR(0x757fde);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B757fe4:{NFSU2_TR(0x757fe4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B757fea:{NFSU2_TR(0x757fea);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B757fed:{NFSU2_TR(0x757fed);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B757ff1:{NFSU2_TR(0x757ff1);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+28))));
}
B757ff3:{NFSU2_TR(0x757ff3);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B757ff5:{NFSU2_TR(0x757ff5);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L757ff9;}}
}
B757ff7:L757ff7:{c.instructions+=1;NFSU2_TR(0x757ff7);
__builtin_memmove((R+4),(R+8),4);
}
B757ff9:L757ff9:{c.instructions+=3;NFSU2_TR(0x757ff9);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B757ffd:{NFSU2_TR(0x757ffd);
__builtin_memmove((R+8),(R+4),4);
}
B757fff:{NFSU2_TR(0x757fff);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
TAIL_STATIC(0x758002u,758);
}
XIT:NFSU2_TR_EXIT(0x757,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
