#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_439(u8* __restrict R,Cpu& c);
u32 body_43e(u8* __restrict R,Cpu& c);
u32 body_440(u8* __restrict R,Cpu& c);
u32 body_457(u8* __restrict R,Cpu& c);
u32 body_459(u8* __restrict R,Cpu& c);
u32 body_45d(u8* __restrict R,Cpu& c);
u32 body_45e(u8* __restrict R,Cpu& c);
u32 body_463(u8* __restrict R,Cpu& c);
u32 body_734(u8* __restrict R,Cpu& c);
u32 body_735(u8* __restrict R,Cpu& c);
u32 body_75b(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x462,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x462,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_462(u8* __restrict R,Cpu& c);
u32 page_462(Cpu& c){return body_462(c.regs.data(),c);}
__attribute__((noinline)) u32 body_462(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x462000:goto L462000;
case 0x462005:c.instructions+=1;goto B462005;
case 0x462010:goto L462010;
case 0x462015:c.instructions+=1;goto B462015;
case 0x462020:goto L462020;
case 0x462027:c.instructions+=1;goto B462027;
case 0x462030:goto L462030;
case 0x462035:c.instructions+=1;goto B462035;
case 0x462040:goto L462040;
case 0x462045:c.instructions+=1;goto B462045;
case 0x462050:goto L462050;
case 0x462055:c.instructions+=1;goto B462055;
case 0x462060:goto L462060;
case 0x462065:c.instructions+=1;goto B462065;
case 0x462070:goto L462070;
case 0x46207a:c.instructions+=1;goto B46207a;
case 0x462080:goto L462080;
case 0x462086:c.instructions+=12;goto B462086;
case 0x462088:c.instructions+=11;goto B462088;
case 0x46208d:c.instructions+=10;goto B46208d;
case 0x46208e:c.instructions+=9;goto B46208e;
case 0x462095:c.instructions+=8;goto B462095;
case 0x462098:c.instructions+=7;goto B462098;
case 0x462099:c.instructions+=6;goto B462099;
case 0x46209b:c.instructions+=5;goto B46209b;
case 0x4620a1:c.instructions+=4;goto B4620a1;
case 0x4620a2:c.instructions+=3;goto B4620a2;
case 0x4620a4:c.instructions+=2;goto B4620a4;
case 0x4620a6:c.instructions+=1;goto B4620a6;
case 0x4620ac:goto L4620ac;
case 0x4620b0:c.instructions+=3;goto B4620b0;
case 0x4620b1:c.instructions+=2;goto B4620b1;
case 0x4620b2:c.instructions+=1;goto B4620b2;
case 0x4620b7:goto L4620b7;
case 0x4620ba:c.instructions+=1;goto B4620ba;
case 0x4620bf:goto L4620bf;
case 0x4620c3:c.instructions+=8;goto B4620c3;
case 0x4620c7:c.instructions+=7;goto B4620c7;
case 0x4620c8:c.instructions+=6;goto B4620c8;
case 0x4620cc:c.instructions+=5;goto B4620cc;
case 0x4620d0:c.instructions+=4;goto B4620d0;
case 0x4620d4:c.instructions+=3;goto B4620d4;
case 0x4620d6:c.instructions+=2;goto B4620d6;
case 0x4620d8:c.instructions+=1;goto B4620d8;
case 0x4620da:goto L4620da;
case 0x4620dc:c.instructions+=1;goto B4620dc;
case 0x4620e1:goto L4620e1;
case 0x4620e5:c.instructions+=3;goto B4620e5;
case 0x4620e7:c.instructions+=2;goto B4620e7;
case 0x4620eb:c.instructions+=1;goto B4620eb;
case 0x4620ed:goto L4620ed;
case 0x4620f4:c.instructions+=2;goto B4620f4;
case 0x4620f6:c.instructions+=1;goto B4620f6;
case 0x4620f8:goto L4620f8;
case 0x4620fa:c.instructions+=1;goto B4620fa;
case 0x4620fc:goto L4620fc;
case 0x4620ff:c.instructions+=1;goto B4620ff;
case 0x462101:goto L462101;
case 0x462106:goto L462106;
case 0x462107:c.instructions+=10;goto B462107;
case 0x46210a:c.instructions+=9;goto B46210a;
case 0x46210b:c.instructions+=8;goto B46210b;
case 0x46210c:c.instructions+=7;goto B46210c;
case 0x462111:c.instructions+=6;goto B462111;
case 0x462113:c.instructions+=5;goto B462113;
case 0x462116:c.instructions+=4;goto B462116;
case 0x462119:c.instructions+=3;goto B462119;
case 0x46211c:c.instructions+=2;goto B46211c;
case 0x46211f:c.instructions+=1;goto B46211f;
case 0x462124:goto L462124;
case 0x462127:c.instructions+=2;goto B462127;
case 0x462129:c.instructions+=1;goto B462129;
case 0x46212b:goto L46212b;
case 0x462130:c.instructions+=2;goto B462130;
case 0x462135:c.instructions+=1;goto B462135;
case 0x46213a:goto L46213a;
case 0x46213b:c.instructions+=3;goto B46213b;
case 0x46213c:c.instructions+=2;goto B46213c;
case 0x462141:c.instructions+=1;goto B462141;
case 0x462146:goto L462146;
case 0x462149:goto L462149;
case 0x46214a:c.instructions+=1;goto B46214a;
case 0x46214c:goto L46214c;
case 0x46214e:goto L46214e;
case 0x462154:c.instructions+=6;goto B462154;
case 0x462156:c.instructions+=5;goto B462156;
case 0x462158:c.instructions+=4;goto B462158;
case 0x462160:c.instructions+=3;goto B462160;
case 0x462164:c.instructions+=2;goto B462164;
case 0x462165:c.instructions+=1;goto B462165;
case 0x462167:goto L462167;
case 0x46216b:c.instructions+=2;goto B46216b;
case 0x46216c:c.instructions+=1;goto B46216c;
case 0x462171:goto L462171;
case 0x462175:c.instructions+=8;goto B462175;
case 0x46217b:c.instructions+=7;goto B46217b;
case 0x462181:c.instructions+=6;goto B462181;
case 0x462184:c.instructions+=5;goto B462184;
case 0x462187:c.instructions+=4;goto B462187;
case 0x462189:c.instructions+=3;goto B462189;
case 0x46218c:c.instructions+=2;goto B46218c;
case 0x46218d:c.instructions+=1;goto B46218d;
case 0x462190:goto L462190;
case 0x462193:c.instructions+=6;goto B462193;
case 0x462196:c.instructions+=5;goto B462196;
case 0x46219c:c.instructions+=4;goto B46219c;
case 0x46219e:c.instructions+=3;goto B46219e;
case 0x4621a3:c.instructions+=2;goto B4621a3;
case 0x4621a4:c.instructions+=1;goto B4621a4;
case 0x4621a7:goto L4621a7;
case 0x4621ab:c.instructions+=5;goto B4621ab;
case 0x4621ac:c.instructions+=4;goto B4621ac;
case 0x4621ad:c.instructions+=3;goto B4621ad;
case 0x4621b4:c.instructions+=2;goto B4621b4;
case 0x4621b7:c.instructions+=1;goto B4621b7;
case 0x4621c0:goto L4621c0;
case 0x4621c5:c.instructions+=3;goto B4621c5;
case 0x4621c6:c.instructions+=2;goto B4621c6;
case 0x4621cb:c.instructions+=1;goto B4621cb;
case 0x4621cd:goto L4621cd;
case 0x4621ce:c.instructions+=2;goto B4621ce;
case 0x4621d1:c.instructions+=1;goto B4621d1;
case 0x4621d2:goto L4621d2;
case 0x4621d7:c.instructions+=2;goto B4621d7;
case 0x4621dd:c.instructions+=1;goto B4621dd;
case 0x4621f0:goto L4621f0;
case 0x4621f1:c.instructions+=8;goto B4621f1;
case 0x4621f2:c.instructions+=7;goto B4621f2;
case 0x4621f3:c.instructions+=6;goto B4621f3;
case 0x4621f5:c.instructions+=5;goto B4621f5;
case 0x4621f6:c.instructions+=4;goto B4621f6;
case 0x4621fc:c.instructions+=3;goto B4621fc;
case 0x4621fe:c.instructions+=2;goto B4621fe;
case 0x462200:c.instructions+=1;goto B462200;
case 0x462202:goto L462202;
case 0x462204:c.instructions+=2;goto B462204;
case 0x462206:c.instructions+=1;goto B462206;
case 0x462208:goto L462208;
case 0x46220d:goto L46220d;
case 0x462211:c.instructions+=2;goto B462211;
case 0x462212:c.instructions+=1;goto B462212;
case 0x462217:goto L462217;
case 0x46221a:c.instructions+=1;goto B46221a;
case 0x46221f:goto L46221f;
case 0x462223:c.instructions+=4;goto B462223;
case 0x462225:c.instructions+=3;goto B462225;
case 0x462226:c.instructions+=2;goto B462226;
case 0x462227:c.instructions+=1;goto B462227;
case 0x46222a:goto L46222a;
case 0x46222f:goto L46222f;
case 0x462230:c.instructions+=6;goto B462230;
case 0x462236:c.instructions+=5;goto B462236;
case 0x46223c:c.instructions+=4;goto B46223c;
case 0x46223d:c.instructions+=3;goto B46223d;
case 0x46223e:c.instructions+=2;goto B46223e;
case 0x46223f:c.instructions+=1;goto B46223f;
case 0x462240:goto L462240;
case 0x462241:c.instructions+=7;goto B462241;
case 0x462246:c.instructions+=6;goto B462246;
case 0x46224c:c.instructions+=5;goto B46224c;
case 0x46224f:c.instructions+=4;goto B46224f;
case 0x462251:c.instructions+=3;goto B462251;
case 0x462252:c.instructions+=2;goto B462252;
case 0x462254:c.instructions+=1;goto B462254;
case 0x462256:goto L462256;
case 0x462258:c.instructions+=3;goto B462258;
case 0x46225b:c.instructions+=2;goto B46225b;
case 0x46225d:c.instructions+=1;goto B46225d;
case 0x462263:goto L462263;
case 0x462268:goto L462268;
case 0x46226b:c.instructions+=4;goto B46226b;
case 0x46226e:c.instructions+=3;goto B46226e;
case 0x462271:c.instructions+=2;goto B462271;
case 0x462273:c.instructions+=1;goto B462273;
case 0x462279:goto L462279;
case 0x46227c:c.instructions+=2;goto B46227c;
case 0x46227e:c.instructions+=1;goto B46227e;
case 0x462280:goto L462280;
case 0x462286:c.instructions+=2;goto B462286;
case 0x462288:c.instructions+=1;goto B462288;
case 0x46228a:goto L46228a;
case 0x462290:c.instructions+=2;goto B462290;
case 0x462292:c.instructions+=1;goto B462292;
case 0x462298:goto L462298;
case 0x46229f:c.instructions+=6;goto B46229f;
case 0x4622a5:c.instructions+=5;goto B4622a5;
case 0x4622ac:c.instructions+=4;goto B4622ac;
case 0x4622b2:c.instructions+=3;goto B4622b2;
case 0x4622b4:c.instructions+=2;goto B4622b4;
case 0x4622b6:c.instructions+=1;goto B4622b6;
case 0x4622bc:goto L4622bc;
case 0x4622bf:c.instructions+=2;goto B4622bf;
case 0x4622c0:c.instructions+=1;goto B4622c0;
case 0x4622c5:goto L4622c5;
case 0x4622c6:c.instructions+=2;goto B4622c6;
case 0x4622c7:c.instructions+=1;goto B4622c7;
case 0x4622c8:goto L4622c8;
case 0x4622ce:c.instructions+=2;goto B4622ce;
case 0x4622d0:c.instructions+=1;goto B4622d0;
case 0x4622d6:goto L4622d6;
case 0x4622d9:c.instructions+=2;goto B4622d9;
case 0x4622da:c.instructions+=1;goto B4622da;
case 0x4622df:goto L4622df;
case 0x4622e2:c.instructions+=11;goto B4622e2;
case 0x4622e5:c.instructions+=10;goto B4622e5;
case 0x4622eb:c.instructions+=9;goto B4622eb;
case 0x4622ee:c.instructions+=8;goto B4622ee;
case 0x4622f4:c.instructions+=7;goto B4622f4;
case 0x4622fa:c.instructions+=6;goto B4622fa;
case 0x462300:c.instructions+=5;goto B462300;
case 0x462304:c.instructions+=4;goto B462304;
case 0x46230a:c.instructions+=3;goto B46230a;
case 0x46230c:c.instructions+=2;goto B46230c;
case 0x46230f:c.instructions+=1;goto B46230f;
case 0x462311:goto L462311;
case 0x462315:c.instructions+=5;goto B462315;
case 0x46231b:c.instructions+=4;goto B46231b;
case 0x46231f:c.instructions+=3;goto B46231f;
case 0x462321:c.instructions+=2;goto B462321;
case 0x462324:c.instructions+=1;goto B462324;
case 0x462326:goto L462326;
case 0x462328:c.instructions+=1;goto B462328;
case 0x46232e:goto L46232e;
case 0x46232f:c.instructions+=1;goto B46232f;
case 0x462334:goto L462334;
case 0x46233a:c.instructions+=4;goto B46233a;
case 0x46233c:c.instructions+=3;goto B46233c;
case 0x46233e:c.instructions+=2;goto B46233e;
case 0x462340:c.instructions+=1;goto B462340;
case 0x462345:goto L462345;
case 0x46234b:c.instructions+=6;goto B46234b;
case 0x46234d:c.instructions+=5;goto B46234d;
case 0x46234f:c.instructions+=4;goto B46234f;
case 0x462355:c.instructions+=3;goto B462355;
case 0x462357:c.instructions+=2;goto B462357;
case 0x46235b:c.instructions+=1;goto B46235b;
case 0x46235e:goto L46235e;
case 0x462360:c.instructions+=2;goto B462360;
case 0x462366:c.instructions+=1;goto B462366;
case 0x462368:goto L462368;
case 0x46236a:c.instructions+=1;goto B46236a;
case 0x46236c:goto L46236c;
case 0x462372:c.instructions+=1;goto B462372;
case 0x462374:goto L462374;
case 0x462379:c.instructions+=1;goto B462379;
case 0x46237b:goto L46237b;
case 0x462380:goto L462380;
case 0x462383:c.instructions+=4;goto B462383;
case 0x462385:c.instructions+=3;goto B462385;
case 0x462387:c.instructions+=2;goto B462387;
case 0x462389:c.instructions+=1;goto B462389;
case 0x46238c:goto L46238c;
case 0x46238e:c.instructions+=2;goto B46238e;
case 0x462394:c.instructions+=1;goto B462394;
case 0x462396:goto L462396;
case 0x462398:c.instructions+=1;goto B462398;
case 0x46239a:goto L46239a;
case 0x46239f:c.instructions+=1;goto B46239f;
case 0x4623a1:goto L4623a1;
case 0x4623a6:goto L4623a6;
case 0x4623a8:c.instructions+=4;goto B4623a8;
case 0x4623ab:c.instructions+=3;goto B4623ab;
case 0x4623b1:c.instructions+=2;goto B4623b1;
case 0x4623b3:c.instructions+=1;goto B4623b3;
case 0x4623b5:goto L4623b5;
case 0x4623b7:c.instructions+=1;goto B4623b7;
case 0x4623b9:goto L4623b9;
case 0x4623bf:c.instructions+=1;goto B4623bf;
case 0x4623c1:goto L4623c1;
case 0x4623c6:goto L4623c6;
case 0x4623ca:c.instructions+=2;goto B4623ca;
case 0x4623cd:c.instructions+=1;goto B4623cd;
case 0x4623d2:goto L4623d2;
case 0x4623d7:c.instructions+=3;goto B4623d7;
case 0x4623dd:c.instructions+=2;goto B4623dd;
case 0x4623de:c.instructions+=1;goto B4623de;
case 0x4623e0:goto L4623e0;
case 0x4623e5:c.instructions+=1;goto B4623e5;
case 0x4623e7:goto L4623e7;
case 0x4623ec:c.instructions+=1;goto B4623ec;
case 0x4623ee:goto L4623ee;
case 0x4623f3:goto L4623f3;
case 0x4623f6:c.instructions+=4;goto B4623f6;
case 0x4623fc:c.instructions+=3;goto B4623fc;
case 0x4623fe:c.instructions+=2;goto B4623fe;
case 0x462400:c.instructions+=1;goto B462400;
case 0x462402:goto L462402;
case 0x462405:c.instructions+=2;goto B462405;
case 0x462406:c.instructions+=1;goto B462406;
case 0x46240b:goto L46240b;
case 0x462411:c.instructions+=4;goto B462411;
case 0x462413:c.instructions+=3;goto B462413;
case 0x462415:c.instructions+=2;goto B462415;
case 0x46241d:c.instructions+=1;goto B46241d;
case 0x46241f:goto L46241f;
case 0x462423:c.instructions+=2;goto B462423;
case 0x462424:c.instructions+=1;goto B462424;
case 0x462429:goto L462429;
case 0x46242d:c.instructions+=1;goto B46242d;
case 0x462433:goto L462433;
case 0x462434:c.instructions+=2;goto B462434;
case 0x462435:c.instructions+=1;goto B462435;
case 0x462440:goto L462440;
case 0x462445:c.instructions+=1;goto B462445;
case 0x462450:goto L462450;
case 0x462455:c.instructions+=1;goto B462455;
case 0x462460:goto L462460;
case 0x462465:c.instructions+=1;goto B462465;
case 0x462470:goto L462470;
case 0x462475:c.instructions+=1;goto B462475;
case 0x462480:goto L462480;
case 0x462487:c.instructions+=10;goto B462487;
case 0x462489:c.instructions+=9;goto B462489;
case 0x46248e:c.instructions+=8;goto B46248e;
case 0x462498:c.instructions+=7;goto B462498;
case 0x46249e:c.instructions+=6;goto B46249e;
case 0x4624a4:c.instructions+=5;goto B4624a4;
case 0x4624aa:c.instructions+=4;goto B4624aa;
case 0x4624b0:c.instructions+=3;goto B4624b0;
case 0x4624b6:c.instructions+=2;goto B4624b6;
case 0x4624bc:c.instructions+=1;goto B4624bc;
case 0x4624c0:goto L4624c0;
case 0x4624c6:c.instructions+=5;goto B4624c6;
case 0x4624c8:c.instructions+=4;goto B4624c8;
case 0x4624ca:c.instructions+=3;goto B4624ca;
case 0x4624cd:c.instructions+=2;goto B4624cd;
case 0x4624d0:c.instructions+=1;goto B4624d0;
case 0x4624d9:goto L4624d9;
case 0x4624da:c.instructions+=15;goto B4624da;
case 0x4624db:c.instructions+=14;goto B4624db;
case 0x4624dc:c.instructions+=13;goto B4624dc;
case 0x4624dd:c.instructions+=12;goto B4624dd;
case 0x4624de:c.instructions+=11;goto B4624de;
case 0x4624df:c.instructions+=10;goto B4624df;
case 0x4624e0:c.instructions+=9;goto B4624e0;
case 0x4624e1:c.instructions+=8;goto B4624e1;
case 0x4624e2:c.instructions+=7;goto B4624e2;
case 0x4624e3:c.instructions+=6;goto B4624e3;
case 0x4624e5:c.instructions+=5;goto B4624e5;
case 0x4624e6:c.instructions+=4;goto B4624e6;
case 0x4624ec:c.instructions+=3;goto B4624ec;
case 0x4624ee:c.instructions+=2;goto B4624ee;
case 0x4624f0:c.instructions+=1;goto B4624f0;
case 0x4624f2:goto L4624f2;
case 0x4624f4:c.instructions+=2;goto B4624f4;
case 0x4624f6:c.instructions+=1;goto B4624f6;
case 0x4624f8:goto L4624f8;
case 0x4624fd:goto L4624fd;
case 0x462501:c.instructions+=2;goto B462501;
case 0x462502:c.instructions+=1;goto B462502;
case 0x462507:goto L462507;
case 0x46250a:c.instructions+=1;goto B46250a;
case 0x46250f:goto L46250f;
case 0x462513:c.instructions+=4;goto B462513;
case 0x462515:c.instructions+=3;goto B462515;
case 0x462516:c.instructions+=2;goto B462516;
case 0x462517:c.instructions+=1;goto B462517;
case 0x46251a:goto L46251a;
case 0x46251f:goto L46251f;
case 0x462522:c.instructions+=11;goto B462522;
case 0x462528:c.instructions+=10;goto B462528;
case 0x46252e:c.instructions+=9;goto B46252e;
case 0x462534:c.instructions+=8;goto B462534;
case 0x462537:c.instructions+=7;goto B462537;
case 0x462538:c.instructions+=6;goto B462538;
case 0x46253e:c.instructions+=5;goto B46253e;
case 0x462544:c.instructions+=4;goto B462544;
case 0x462545:c.instructions+=3;goto B462545;
case 0x462546:c.instructions+=2;goto B462546;
case 0x462547:c.instructions+=1;goto B462547;
case 0x462550:goto L462550;
case 0x462553:c.instructions+=6;goto B462553;
case 0x462554:c.instructions+=5;goto B462554;
case 0x462556:c.instructions+=4;goto B462556;
case 0x462557:c.instructions+=3;goto B462557;
case 0x46255d:c.instructions+=2;goto B46255d;
case 0x46255f:c.instructions+=1;goto B46255f;
case 0x462565:goto L462565;
case 0x46256b:c.instructions+=3;goto B46256b;
case 0x46256d:c.instructions+=2;goto B46256d;
case 0x46256f:c.instructions+=1;goto B46256f;
case 0x462574:goto L462574;
case 0x46257a:c.instructions+=1;goto B46257a;
case 0x46257f:goto L46257f;
case 0x462581:c.instructions+=1;goto B462581;
case 0x462583:goto L462583;
case 0x462585:c.instructions+=1;goto B462585;
case 0x462587:goto L462587;
case 0x46258c:c.instructions+=1;goto B46258c;
case 0x46258e:goto L46258e;
case 0x462593:goto L462593;
case 0x462596:c.instructions+=6;goto B462596;
case 0x46259c:c.instructions+=5;goto B46259c;
case 0x46259e:c.instructions+=4;goto B46259e;
case 0x4625a0:c.instructions+=3;goto B4625a0;
case 0x4625a2:c.instructions+=2;goto B4625a2;
case 0x4625a6:c.instructions+=1;goto B4625a6;
case 0x4625a9:goto L4625a9;
case 0x4625ad:c.instructions+=3;goto B4625ad;
case 0x4625b1:c.instructions+=2;goto B4625b1;
case 0x4625b5:c.instructions+=1;goto B4625b5;
case 0x4625ba:goto L4625ba;
case 0x4625bc:c.instructions+=2;goto B4625bc;
case 0x4625c2:c.instructions+=1;goto B4625c2;
case 0x4625c4:goto L4625c4;
case 0x4625c6:c.instructions+=1;goto B4625c6;
case 0x4625c8:goto L4625c8;
case 0x4625cd:c.instructions+=1;goto B4625cd;
case 0x4625cf:goto L4625cf;
case 0x4625d4:goto L4625d4;
case 0x4625d7:c.instructions+=4;goto B4625d7;
case 0x4625d9:c.instructions+=3;goto B4625d9;
case 0x4625db:c.instructions+=2;goto B4625db;
case 0x4625dd:c.instructions+=1;goto B4625dd;
case 0x4625e0:goto L4625e0;
case 0x4625e2:c.instructions+=2;goto B4625e2;
case 0x4625e8:c.instructions+=1;goto B4625e8;
case 0x4625ea:goto L4625ea;
case 0x4625ec:c.instructions+=1;goto B4625ec;
case 0x4625ee:goto L4625ee;
case 0x4625f3:c.instructions+=1;goto B4625f3;
case 0x4625f5:goto L4625f5;
case 0x4625fa:goto L4625fa;
case 0x4625fd:c.instructions+=4;goto B4625fd;
case 0x462603:c.instructions+=3;goto B462603;
case 0x462605:c.instructions+=2;goto B462605;
case 0x462607:c.instructions+=1;goto B462607;
case 0x462609:goto L462609;
case 0x46260c:c.instructions+=2;goto B46260c;
case 0x46260d:c.instructions+=1;goto B46260d;
case 0x462612:goto L462612;
case 0x462613:c.instructions+=3;goto B462613;
case 0x462614:c.instructions+=2;goto B462614;
case 0x462617:c.instructions+=1;goto B462617;
case 0x462620:goto L462620;
case 0x462626:c.instructions+=4;goto B462626;
case 0x462628:c.instructions+=3;goto B462628;
case 0x46262a:c.instructions+=2;goto B46262a;
case 0x46262d:c.instructions+=1;goto B46262d;
case 0x462630:goto L462630;
case 0x462635:c.instructions+=1;goto B462635;
case 0x462637:goto L462637;
case 0x462638:c.instructions+=10;goto B462638;
case 0x462639:c.instructions+=9;goto B462639;
case 0x46263a:c.instructions+=8;goto B46263a;
case 0x46263b:c.instructions+=7;goto B46263b;
case 0x46263c:c.instructions+=6;goto B46263c;
case 0x46263d:c.instructions+=5;goto B46263d;
case 0x46263e:c.instructions+=4;goto B46263e;
case 0x46263f:c.instructions+=3;goto B46263f;
case 0x462640:c.instructions+=2;goto B462640;
case 0x462645:c.instructions+=1;goto B462645;
case 0x462650:goto L462650;
case 0x462651:c.instructions+=4;goto B462651;
case 0x462653:c.instructions+=3;goto B462653;
case 0x462659:c.instructions+=2;goto B462659;
case 0x46265b:c.instructions+=1;goto B46265b;
case 0x46265d:goto L46265d;
case 0x46265f:c.instructions+=2;goto B46265f;
case 0x462661:c.instructions+=1;goto B462661;
case 0x462663:goto L462663;
case 0x46266d:c.instructions+=2;goto B46266d;
case 0x46266e:c.instructions+=1;goto B46266e;
case 0x462670:goto L462670;
case 0x462673:c.instructions+=7;goto B462673;
case 0x462674:c.instructions+=6;goto B462674;
case 0x462676:c.instructions+=5;goto B462676;
case 0x462679:c.instructions+=4;goto B462679;
case 0x46267c:c.instructions+=3;goto B46267c;
case 0x46267f:c.instructions+=2;goto B46267f;
case 0x462680:c.instructions+=1;goto B462680;
case 0x462685:goto L462685;
case 0x462688:c.instructions+=2;goto B462688;
case 0x46268a:c.instructions+=1;goto B46268a;
case 0x46268c:goto L46268c;
case 0x462692:c.instructions+=3;goto B462692;
case 0x462693:c.instructions+=2;goto B462693;
case 0x462696:c.instructions+=1;goto B462696;
case 0x462697:goto L462697;
case 0x46269a:c.instructions+=24;goto B46269a;
case 0x46269d:c.instructions+=23;goto B46269d;
case 0x4626a0:c.instructions+=22;goto B4626a0;
case 0x4626a4:c.instructions+=21;goto B4626a4;
case 0x4626a8:c.instructions+=20;goto B4626a8;
case 0x4626ab:c.instructions+=19;goto B4626ab;
case 0x4626af:c.instructions+=18;goto B4626af;
case 0x4626b2:c.instructions+=17;goto B4626b2;
case 0x4626b5:c.instructions+=16;goto B4626b5;
case 0x4626b9:c.instructions+=15;goto B4626b9;
case 0x4626bd:c.instructions+=14;goto B4626bd;
case 0x4626c1:c.instructions+=13;goto B4626c1;
case 0x4626c5:c.instructions+=12;goto B4626c5;
case 0x4626c9:c.instructions+=11;goto B4626c9;
case 0x4626ca:c.instructions+=10;goto B4626ca;
case 0x4626cc:c.instructions+=9;goto B4626cc;
case 0x4626ce:c.instructions+=8;goto B4626ce;
case 0x4626d0:c.instructions+=7;goto B4626d0;
case 0x4626d2:c.instructions+=6;goto B4626d2;
case 0x4626d4:c.instructions+=5;goto B4626d4;
case 0x4626d6:c.instructions+=4;goto B4626d6;
case 0x4626d8:c.instructions+=3;goto B4626d8;
case 0x4626da:c.instructions+=2;goto B4626da;
case 0x4626dd:c.instructions+=1;goto B4626dd;
case 0x4626e0:goto L4626e0;
case 0x4626e5:c.instructions+=1;goto B4626e5;
case 0x4626f0:goto L4626f0;
case 0x4626f5:c.instructions+=1;goto B4626f5;
case 0x462700:goto L462700;
case 0x462701:c.instructions+=6;goto B462701;
case 0x462703:c.instructions+=5;goto B462703;
case 0x462709:c.instructions+=4;goto B462709;
case 0x46270a:c.instructions+=3;goto B46270a;
case 0x46270c:c.instructions+=2;goto B46270c;
case 0x46270e:c.instructions+=1;goto B46270e;
case 0x462710:goto L462710;
case 0x462712:c.instructions+=2;goto B462712;
case 0x462714:c.instructions+=1;goto B462714;
case 0x462716:goto L462716;
case 0x46271c:c.instructions+=3;goto B46271c;
case 0x46271e:c.instructions+=2;goto B46271e;
case 0x462724:c.instructions+=1;goto B462724;
case 0x462726:goto L462726;
case 0x462728:c.instructions+=2;goto B462728;
case 0x46272a:c.instructions+=1;goto B46272a;
case 0x46272c:goto L46272c;
case 0x462732:c.instructions+=3;goto B462732;
case 0x462734:c.instructions+=2;goto B462734;
case 0x46273a:c.instructions+=1;goto B46273a;
case 0x46273c:goto L46273c;
case 0x46273e:c.instructions+=2;goto B46273e;
case 0x462740:c.instructions+=1;goto B462740;
case 0x462742:goto L462742;
case 0x462748:c.instructions+=3;goto B462748;
case 0x462749:c.instructions+=2;goto B462749;
case 0x46274a:c.instructions+=1;goto B46274a;
case 0x462750:goto L462750;
case 0x462755:c.instructions+=1;goto B462755;
case 0x462760:goto L462760;
case 0x462765:c.instructions+=1;goto B462765;
case 0x462770:goto L462770;
case 0x462771:c.instructions+=2;goto B462771;
case 0x462773:c.instructions+=1;goto B462773;
case 0x462778:goto L462778;
case 0x46277e:c.instructions+=3;goto B46277e;
case 0x462780:c.instructions+=2;goto B462780;
case 0x462781:c.instructions+=1;goto B462781;
case 0x462790:goto L462790;
case 0x462795:c.instructions+=1;goto B462795;
case 0x4627a0:goto L4627a0;
case 0x4627a5:c.instructions+=1;goto B4627a5;
case 0x4627b0:goto L4627b0;
case 0x4627b5:c.instructions+=1;goto B4627b5;
case 0x4627c0:goto L4627c0;
case 0x4627c5:c.instructions+=1;goto B4627c5;
case 0x4627d0:goto L4627d0;
case 0x4627d5:c.instructions+=2;goto B4627d5;
case 0x4627d6:c.instructions+=1;goto B4627d6;
case 0x4627db:goto L4627db;
case 0x4627de:c.instructions+=2;goto B4627de;
case 0x4627e3:c.instructions+=1;goto B4627e3;
case 0x4627e5:goto L4627e5;
case 0x4627eb:c.instructions+=5;goto B4627eb;
case 0x4627ee:c.instructions+=4;goto B4627ee;
case 0x4627f4:c.instructions+=3;goto B4627f4;
case 0x4627f5:c.instructions+=2;goto B4627f5;
case 0x4627fa:c.instructions+=1;goto B4627fa;
case 0x4627ff:goto L4627ff;
case 0x462802:c.instructions+=2;goto B462802;
case 0x462804:c.instructions+=1;goto B462804;
case 0x462806:goto L462806;
case 0x462808:c.instructions+=1;goto B462808;
case 0x46280d:goto L46280d;
case 0x46280f:c.instructions+=1;goto B46280f;
case 0x462810:goto L462810;
case 0x462812:c.instructions+=21;goto B462812;
case 0x462818:c.instructions+=20;goto B462818;
case 0x46281d:c.instructions+=19;goto B46281d;
case 0x46281e:c.instructions+=18;goto B46281e;
case 0x462825:c.instructions+=17;goto B462825;
case 0x462828:c.instructions+=16;goto B462828;
case 0x462829:c.instructions+=15;goto B462829;
case 0x46282a:c.instructions+=14;goto B46282a;
case 0x46282b:c.instructions+=13;goto B46282b;
case 0x46282c:c.instructions+=12;goto B46282c;
case 0x46282e:c.instructions+=11;goto B46282e;
case 0x462831:c.instructions+=10;goto B462831;
case 0x462834:c.instructions+=9;goto B462834;
case 0x462837:c.instructions+=8;goto B462837;
case 0x462839:c.instructions+=7;goto B462839;
case 0x46283b:c.instructions+=6;goto B46283b;
case 0x46283c:c.instructions+=5;goto B46283c;
case 0x462842:c.instructions+=4;goto B462842;
case 0x462843:c.instructions+=3;goto B462843;
case 0x462844:c.instructions+=2;goto B462844;
case 0x462845:c.instructions+=1;goto B462845;
case 0x46284a:goto L46284a;
case 0x462850:c.instructions+=4;goto B462850;
case 0x462852:c.instructions+=3;goto B462852;
case 0x462855:c.instructions+=2;goto B462855;
case 0x462856:c.instructions+=1;goto B462856;
case 0x462859:goto L462859;
case 0x46285f:c.instructions+=4;goto B46285f;
case 0x462861:c.instructions+=3;goto B462861;
case 0x462866:c.instructions+=2;goto B462866;
case 0x462867:c.instructions+=1;goto B462867;
case 0x46286a:goto L46286a;
case 0x462870:c.instructions+=1;goto B462870;
case 0x462876:goto L462876;
case 0x46287d:c.instructions+=1;goto B46287d;
case 0x46287f:goto L46287f;
case 0x462886:c.instructions+=1;goto B462886;
case 0x46288c:goto L46288c;
case 0x462892:c.instructions+=2;goto B462892;
case 0x462894:c.instructions+=1;goto B462894;
case 0x462896:goto L462896;
case 0x462898:c.instructions+=2;goto B462898;
case 0x46289a:c.instructions+=1;goto B46289a;
case 0x46289c:goto L46289c;
case 0x4628a1:goto L4628a1;
case 0x4628a5:c.instructions+=2;goto B4628a5;
case 0x4628a6:c.instructions+=1;goto B4628a6;
case 0x4628ab:goto L4628ab;
case 0x4628ae:c.instructions+=1;goto B4628ae;
case 0x4628b3:goto L4628b3;
case 0x4628b7:c.instructions+=4;goto B4628b7;
case 0x4628b9:c.instructions+=3;goto B4628b9;
case 0x4628ba:c.instructions+=2;goto B4628ba;
case 0x4628bb:c.instructions+=1;goto B4628bb;
case 0x4628be:goto L4628be;
case 0x4628c3:goto L4628c3;
case 0x4628c5:c.instructions+=2;goto B4628c5;
case 0x4628cb:c.instructions+=1;goto B4628cb;
case 0x4628d0:goto L4628d0;
case 0x4628d2:c.instructions+=5;goto B4628d2;
case 0x4628d5:c.instructions+=4;goto B4628d5;
case 0x4628d9:c.instructions+=3;goto B4628d9;
case 0x4628db:c.instructions+=2;goto B4628db;
case 0x4628df:c.instructions+=1;goto B4628df;
case 0x4628e1:goto L4628e1;
case 0x4628e4:c.instructions+=9;goto B4628e4;
case 0x4628e5:c.instructions+=8;goto B4628e5;
case 0x4628e6:c.instructions+=7;goto B4628e6;
case 0x4628eb:c.instructions+=6;goto B4628eb;
case 0x4628ee:c.instructions+=5;goto B4628ee;
case 0x4628f1:c.instructions+=4;goto B4628f1;
case 0x4628f4:c.instructions+=3;goto B4628f4;
case 0x4628f7:c.instructions+=2;goto B4628f7;
case 0x4628fa:c.instructions+=1;goto B4628fa;
case 0x4628ff:goto L4628ff;
case 0x462902:c.instructions+=2;goto B462902;
case 0x462904:c.instructions+=1;goto B462904;
case 0x462906:goto L462906;
case 0x46290b:c.instructions+=2;goto B46290b;
case 0x462910:c.instructions+=1;goto B462910;
case 0x462915:goto L462915;
case 0x462916:c.instructions+=3;goto B462916;
case 0x462917:c.instructions+=2;goto B462917;
case 0x46291c:c.instructions+=1;goto B46291c;
case 0x462921:goto L462921;
case 0x462924:c.instructions+=9;goto B462924;
case 0x46292a:c.instructions+=8;goto B46292a;
case 0x46292b:c.instructions+=7;goto B46292b;
case 0x46292c:c.instructions+=6;goto B46292c;
case 0x46292d:c.instructions+=5;goto B46292d;
case 0x46292e:c.instructions+=4;goto B46292e;
case 0x462932:c.instructions+=3;goto B462932;
case 0x462939:c.instructions+=2;goto B462939;
case 0x46293c:c.instructions+=1;goto B46293c;
case 0x46293d:goto L46293d;
case 0x46293f:goto L46293f;
case 0x462945:c.instructions+=8;goto B462945;
case 0x462946:c.instructions+=7;goto B462946;
case 0x462947:c.instructions+=6;goto B462947;
case 0x462948:c.instructions+=5;goto B462948;
case 0x462949:c.instructions+=4;goto B462949;
case 0x46294d:c.instructions+=3;goto B46294d;
case 0x462954:c.instructions+=2;goto B462954;
case 0x462957:c.instructions+=1;goto B462957;
case 0x462958:goto L462958;
case 0x46295e:c.instructions+=2;goto B46295e;
case 0x462960:c.instructions+=1;goto B462960;
case 0x462962:goto L462962;
case 0x462964:c.instructions+=2;goto B462964;
case 0x462966:c.instructions+=1;goto B462966;
case 0x462968:goto L462968;
case 0x46296d:goto L46296d;
case 0x462971:c.instructions+=2;goto B462971;
case 0x462972:c.instructions+=1;goto B462972;
case 0x462977:goto L462977;
case 0x46297a:c.instructions+=1;goto B46297a;
case 0x46297f:goto L46297f;
case 0x462983:c.instructions+=4;goto B462983;
case 0x462985:c.instructions+=3;goto B462985;
case 0x462986:c.instructions+=2;goto B462986;
case 0x462987:c.instructions+=1;goto B462987;
case 0x46298a:goto L46298a;
case 0x46298f:goto L46298f;
case 0x462993:c.instructions+=3;goto B462993;
case 0x462994:c.instructions+=2;goto B462994;
case 0x46299a:c.instructions+=1;goto B46299a;
case 0x46299f:goto L46299f;
case 0x4629a2:c.instructions+=1;goto B4629a2;
case 0x4629a7:goto L4629a7;
case 0x4629ab:c.instructions+=8;goto B4629ab;
case 0x4629af:c.instructions+=7;goto B4629af;
case 0x4629b0:c.instructions+=6;goto B4629b0;
case 0x4629b4:c.instructions+=5;goto B4629b4;
case 0x4629b8:c.instructions+=4;goto B4629b8;
case 0x4629bc:c.instructions+=3;goto B4629bc;
case 0x4629be:c.instructions+=2;goto B4629be;
case 0x4629c0:c.instructions+=1;goto B4629c0;
case 0x4629c2:goto L4629c2;
case 0x4629c4:c.instructions+=1;goto B4629c4;
case 0x4629c9:goto L4629c9;
case 0x4629cd:c.instructions+=3;goto B4629cd;
case 0x4629cf:c.instructions+=2;goto B4629cf;
case 0x4629d7:c.instructions+=1;goto B4629d7;
case 0x4629d9:goto L4629d9;
case 0x4629dc:c.instructions+=9;goto B4629dc;
case 0x4629dd:c.instructions+=8;goto B4629dd;
case 0x4629de:c.instructions+=7;goto B4629de;
case 0x4629e3:c.instructions+=6;goto B4629e3;
case 0x4629ea:c.instructions+=5;goto B4629ea;
case 0x4629ed:c.instructions+=4;goto B4629ed;
case 0x4629f0:c.instructions+=3;goto B4629f0;
case 0x4629f3:c.instructions+=2;goto B4629f3;
case 0x4629f6:c.instructions+=1;goto B4629f6;
case 0x4629fb:goto L4629fb;
case 0x4629fe:c.instructions+=2;goto B4629fe;
case 0x462a00:c.instructions+=1;goto B462a00;
case 0x462a02:goto L462a02;
case 0x462a07:c.instructions+=2;goto B462a07;
case 0x462a0c:c.instructions+=1;goto B462a0c;
case 0x462a11:goto L462a11;
case 0x462a12:c.instructions+=3;goto B462a12;
case 0x462a13:c.instructions+=2;goto B462a13;
case 0x462a18:c.instructions+=1;goto B462a18;
case 0x462a1d:goto L462a1d;
case 0x462a20:c.instructions+=1;goto B462a20;
case 0x462a22:goto L462a22;
case 0x462a24:goto L462a24;
case 0x462a28:c.instructions+=8;goto B462a28;
case 0x462a2e:c.instructions+=7;goto B462a2e;
case 0x462a2f:c.instructions+=6;goto B462a2f;
case 0x462a30:c.instructions+=5;goto B462a30;
case 0x462a31:c.instructions+=4;goto B462a31;
case 0x462a32:c.instructions+=3;goto B462a32;
case 0x462a39:c.instructions+=2;goto B462a39;
case 0x462a3c:c.instructions+=1;goto B462a3c;
case 0x462a40:goto L462a40;
case 0x462a41:c.instructions+=6;goto B462a41;
case 0x462a42:c.instructions+=5;goto B462a42;
case 0x462a43:c.instructions+=4;goto B462a43;
case 0x462a45:c.instructions+=3;goto B462a45;
case 0x462a4b:c.instructions+=2;goto B462a4b;
case 0x462a4d:c.instructions+=1;goto B462a4d;
case 0x462a4f:goto L462a4f;
case 0x462a51:c.instructions+=2;goto B462a51;
case 0x462a53:c.instructions+=1;goto B462a53;
case 0x462a55:goto L462a55;
case 0x462a5a:goto L462a5a;
case 0x462a5e:c.instructions+=2;goto B462a5e;
case 0x462a5f:c.instructions+=1;goto B462a5f;
case 0x462a64:goto L462a64;
case 0x462a67:c.instructions+=1;goto B462a67;
case 0x462a6c:goto L462a6c;
case 0x462a70:c.instructions+=4;goto B462a70;
case 0x462a72:c.instructions+=3;goto B462a72;
case 0x462a74:c.instructions+=2;goto B462a74;
case 0x462a75:c.instructions+=1;goto B462a75;
case 0x462a78:goto L462a78;
case 0x462a7d:goto L462a7d;
case 0x462a83:c.instructions+=3;goto B462a83;
case 0x462a85:c.instructions+=2;goto B462a85;
case 0x462a8f:c.instructions+=1;goto B462a8f;
case 0x462a91:goto L462a91;
case 0x462a93:c.instructions+=2;goto B462a93;
case 0x462a95:c.instructions+=1;goto B462a95;
case 0x462a97:goto L462a97;
case 0x462a9c:goto L462a9c;
case 0x462aa0:c.instructions+=2;goto B462aa0;
case 0x462aa1:c.instructions+=1;goto B462aa1;
case 0x462aa6:goto L462aa6;
case 0x462aa9:c.instructions+=1;goto B462aa9;
case 0x462aae:goto L462aae;
case 0x462ab2:c.instructions+=4;goto B462ab2;
case 0x462ab4:c.instructions+=3;goto B462ab4;
case 0x462ab6:c.instructions+=2;goto B462ab6;
case 0x462ab7:c.instructions+=1;goto B462ab7;
case 0x462aba:goto L462aba;
case 0x462abf:goto L462abf;
case 0x462ac5:c.instructions+=4;goto B462ac5;
case 0x462acf:c.instructions+=3;goto B462acf;
case 0x462ad1:c.instructions+=2;goto B462ad1;
case 0x462ad3:c.instructions+=1;goto B462ad3;
case 0x462ad6:goto L462ad6;
case 0x462ad7:c.instructions+=3;goto B462ad7;
case 0x462ad8:c.instructions+=2;goto B462ad8;
case 0x462ad9:c.instructions+=1;goto B462ad9;
case 0x462ae0:goto L462ae0;
case 0x462ae1:c.instructions+=6;goto B462ae1;
case 0x462ae3:c.instructions+=5;goto B462ae3;
case 0x462ae6:c.instructions+=4;goto B462ae6;
case 0x462ae9:c.instructions+=3;goto B462ae9;
case 0x462aeb:c.instructions+=2;goto B462aeb;
case 0x462aec:c.instructions+=1;goto B462aec;
case 0x462aee:goto L462aee;
case 0x462af1:c.instructions+=8;goto B462af1;
case 0x462af4:c.instructions+=7;goto B462af4;
case 0x462af6:c.instructions+=6;goto B462af6;
case 0x462af8:c.instructions+=5;goto B462af8;
case 0x462afe:c.instructions+=4;goto B462afe;
case 0x462aff:c.instructions+=3;goto B462aff;
case 0x462b00:c.instructions+=2;goto B462b00;
case 0x462b01:c.instructions+=1;goto B462b01;
case 0x462b06:goto L462b06;
case 0x462b08:c.instructions+=26;goto B462b08;
case 0x462b0e:c.instructions+=25;goto B462b0e;
case 0x462b11:c.instructions+=24;goto B462b11;
case 0x462b14:c.instructions+=23;goto B462b14;
case 0x462b1a:c.instructions+=22;goto B462b1a;
case 0x462b1d:c.instructions+=21;goto B462b1d;
case 0x462b23:c.instructions+=20;goto B462b23;
case 0x462b25:c.instructions+=19;goto B462b25;
case 0x462b27:c.instructions+=18;goto B462b27;
case 0x462b29:c.instructions+=17;goto B462b29;
case 0x462b2b:c.instructions+=16;goto B462b2b;
case 0x462b2d:c.instructions+=15;goto B462b2d;
case 0x462b2f:c.instructions+=14;goto B462b2f;
case 0x462b31:c.instructions+=13;goto B462b31;
case 0x462b33:c.instructions+=12;goto B462b33;
case 0x462b35:c.instructions+=11;goto B462b35;
case 0x462b37:c.instructions+=10;goto B462b37;
case 0x462b39:c.instructions+=9;goto B462b39;
case 0x462b3b:c.instructions+=8;goto B462b3b;
case 0x462b41:c.instructions+=7;goto B462b41;
case 0x462b44:c.instructions+=6;goto B462b44;
case 0x462b46:c.instructions+=5;goto B462b46;
case 0x462b49:c.instructions+=4;goto B462b49;
case 0x462b4f:c.instructions+=3;goto B462b4f;
case 0x462b51:c.instructions+=2;goto B462b51;
case 0x462b57:c.instructions+=1;goto B462b57;
case 0x462b5d:goto L462b5d;
case 0x462b5e:c.instructions+=2;goto B462b5e;
case 0x462b5f:c.instructions+=1;goto B462b5f;
case 0x462b70:goto L462b70;
case 0x462b76:c.instructions+=13;goto B462b76;
case 0x462b78:c.instructions+=12;goto B462b78;
case 0x462b7d:c.instructions+=11;goto B462b7d;
case 0x462b7e:c.instructions+=10;goto B462b7e;
case 0x462b85:c.instructions+=9;goto B462b85;
case 0x462b88:c.instructions+=8;goto B462b88;
case 0x462b89:c.instructions+=7;goto B462b89;
case 0x462b8a:c.instructions+=6;goto B462b8a;
case 0x462b8c:c.instructions+=5;goto B462b8c;
case 0x462b8f:c.instructions+=4;goto B462b8f;
case 0x462b92:c.instructions+=3;goto B462b92;
case 0x462b94:c.instructions+=2;goto B462b94;
case 0x462b96:c.instructions+=1;goto B462b96;
case 0x462b9c:goto L462b9c;
case 0x462ba2:c.instructions+=5;goto B462ba2;
case 0x462ba3:c.instructions+=4;goto B462ba3;
case 0x462ba9:c.instructions+=3;goto B462ba9;
case 0x462bab:c.instructions+=2;goto B462bab;
case 0x462bae:c.instructions+=1;goto B462bae;
case 0x462bb0:goto L462bb0;
case 0x462bb6:c.instructions+=2;goto B462bb6;
case 0x462bb8:c.instructions+=1;goto B462bb8;
case 0x462bba:goto L462bba;
case 0x462bbc:c.instructions+=2;goto B462bbc;
case 0x462bbe:c.instructions+=1;goto B462bbe;
case 0x462bc0:goto L462bc0;
case 0x462bc5:goto L462bc5;
case 0x462bc9:c.instructions+=2;goto B462bc9;
case 0x462bca:c.instructions+=1;goto B462bca;
case 0x462bcf:goto L462bcf;
case 0x462bd2:c.instructions+=1;goto B462bd2;
case 0x462bd7:goto L462bd7;
case 0x462bdb:c.instructions+=4;goto B462bdb;
case 0x462bdd:c.instructions+=3;goto B462bdd;
case 0x462bde:c.instructions+=2;goto B462bde;
case 0x462bdf:c.instructions+=1;goto B462bdf;
case 0x462be2:goto L462be2;
case 0x462be7:goto L462be7;
case 0x462bed:c.instructions+=3;goto B462bed;
case 0x462bef:c.instructions+=2;goto B462bef;
case 0x462bf5:c.instructions+=1;goto B462bf5;
case 0x462bf7:goto L462bf7;
case 0x462bf9:c.instructions+=2;goto B462bf9;
case 0x462bfb:c.instructions+=1;goto B462bfb;
case 0x462bfd:goto L462bfd;
case 0x462c02:goto L462c02;
case 0x462c06:c.instructions+=2;goto B462c06;
case 0x462c07:c.instructions+=1;goto B462c07;
case 0x462c0c:goto L462c0c;
case 0x462c0f:c.instructions+=1;goto B462c0f;
case 0x462c14:goto L462c14;
case 0x462c18:c.instructions+=4;goto B462c18;
case 0x462c1a:c.instructions+=3;goto B462c1a;
case 0x462c1b:c.instructions+=2;goto B462c1b;
case 0x462c1c:c.instructions+=1;goto B462c1c;
case 0x462c1f:goto L462c1f;
case 0x462c24:goto L462c24;
case 0x462c2a:c.instructions+=1;goto B462c2a;
case 0x462c2f:goto L462c2f;
case 0x462c35:c.instructions+=1;goto B462c35;
case 0x462c3b:goto L462c3b;
case 0x462c41:c.instructions+=1;goto B462c41;
case 0x462c47:goto L462c47;
case 0x462c4d:c.instructions+=2;goto B462c4d;
case 0x462c4e:c.instructions+=1;goto B462c4e;
case 0x462c54:goto L462c54;
case 0x462c59:c.instructions+=1;goto B462c59;
case 0x462c5e:goto L462c5e;
case 0x462c60:c.instructions+=1;goto B462c60;
case 0x462c62:goto L462c62;
case 0x462c64:c.instructions+=2;goto B462c64;
case 0x462c6a:c.instructions+=1;goto B462c6a;
case 0x462c6f:goto L462c6f;
case 0x462c71:c.instructions+=5;goto B462c71;
case 0x462c74:c.instructions+=4;goto B462c74;
case 0x462c78:c.instructions+=3;goto B462c78;
case 0x462c7a:c.instructions+=2;goto B462c7a;
case 0x462c7e:c.instructions+=1;goto B462c7e;
case 0x462c80:goto L462c80;
case 0x462c83:c.instructions+=9;goto B462c83;
case 0x462c84:c.instructions+=8;goto B462c84;
case 0x462c85:c.instructions+=7;goto B462c85;
case 0x462c8a:c.instructions+=6;goto B462c8a;
case 0x462c8d:c.instructions+=5;goto B462c8d;
case 0x462c90:c.instructions+=4;goto B462c90;
case 0x462c93:c.instructions+=3;goto B462c93;
case 0x462c96:c.instructions+=2;goto B462c96;
case 0x462c99:c.instructions+=1;goto B462c99;
case 0x462c9e:goto L462c9e;
case 0x462ca1:c.instructions+=2;goto B462ca1;
case 0x462ca3:c.instructions+=1;goto B462ca3;
case 0x462ca5:goto L462ca5;
case 0x462caa:c.instructions+=2;goto B462caa;
case 0x462caf:c.instructions+=1;goto B462caf;
case 0x462cb4:goto L462cb4;
case 0x462cb5:c.instructions+=3;goto B462cb5;
case 0x462cb6:c.instructions+=2;goto B462cb6;
case 0x462cbb:c.instructions+=1;goto B462cbb;
case 0x462cc0:goto L462cc0;
case 0x462cc3:c.instructions+=2;goto B462cc3;
case 0x462cc9:c.instructions+=1;goto B462cc9;
case 0x462ccb:goto L462ccb;
case 0x462ccd:goto L462ccd;
case 0x462cd3:c.instructions+=1;goto B462cd3;
case 0x462cd5:goto L462cd5;
case 0x462cd7:c.instructions+=2;goto B462cd7;
case 0x462cdd:c.instructions+=1;goto B462cdd;
case 0x462ce2:goto L462ce2;
case 0x462ce4:c.instructions+=5;goto B462ce4;
case 0x462ce7:c.instructions+=4;goto B462ce7;
case 0x462ceb:c.instructions+=3;goto B462ceb;
case 0x462ced:c.instructions+=2;goto B462ced;
case 0x462cf5:c.instructions+=1;goto B462cf5;
case 0x462cf7:goto L462cf7;
case 0x462cfa:c.instructions+=9;goto B462cfa;
case 0x462cfb:c.instructions+=8;goto B462cfb;
case 0x462cfc:c.instructions+=7;goto B462cfc;
case 0x462d01:c.instructions+=6;goto B462d01;
case 0x462d08:c.instructions+=5;goto B462d08;
case 0x462d0b:c.instructions+=4;goto B462d0b;
case 0x462d0e:c.instructions+=3;goto B462d0e;
case 0x462d11:c.instructions+=2;goto B462d11;
case 0x462d14:c.instructions+=1;goto B462d14;
case 0x462d19:goto L462d19;
case 0x462d1c:c.instructions+=2;goto B462d1c;
case 0x462d1e:c.instructions+=1;goto B462d1e;
case 0x462d20:goto L462d20;
case 0x462d25:c.instructions+=2;goto B462d25;
case 0x462d2a:c.instructions+=1;goto B462d2a;
case 0x462d2f:goto L462d2f;
case 0x462d30:c.instructions+=3;goto B462d30;
case 0x462d31:c.instructions+=2;goto B462d31;
case 0x462d36:c.instructions+=1;goto B462d36;
case 0x462d3b:goto L462d3b;
case 0x462d3e:c.instructions+=1;goto B462d3e;
case 0x462d40:goto L462d40;
case 0x462d42:goto L462d42;
case 0x462d48:goto L462d48;
case 0x462d50:c.instructions+=1;goto B462d50;
case 0x462d51:goto L462d51;
case 0x462d58:c.instructions+=1;goto B462d58;
case 0x462d5a:goto L462d5a;
case 0x462d5c:c.instructions+=1;goto B462d5c;
case 0x462d5e:goto L462d5e;
case 0x462d64:c.instructions+=2;goto B462d64;
case 0x462d65:c.instructions+=1;goto B462d65;
case 0x462d6a:goto L462d6a;
case 0x462d70:c.instructions+=5;goto B462d70;
case 0x462d72:c.instructions+=4;goto B462d72;
case 0x462d75:c.instructions+=3;goto B462d75;
case 0x462d77:c.instructions+=2;goto B462d77;
case 0x462d7a:c.instructions+=1;goto B462d7a;
case 0x462d7c:goto L462d7c;
case 0x462d82:c.instructions+=3;goto B462d82;
case 0x462d84:c.instructions+=2;goto B462d84;
case 0x462d85:c.instructions+=1;goto B462d85;
case 0x462d88:goto L462d88;
case 0x462d8c:c.instructions+=2;goto B462d8c;
case 0x462d92:c.instructions+=1;goto B462d92;
case 0x462d98:goto L462d98;
case 0x462d9a:c.instructions+=3;goto B462d9a;
case 0x462d9c:c.instructions+=2;goto B462d9c;
case 0x462d9e:c.instructions+=1;goto B462d9e;
case 0x462da1:goto L462da1;
case 0x462da5:c.instructions+=5;goto B462da5;
case 0x462dab:c.instructions+=4;goto B462dab;
case 0x462dad:c.instructions+=3;goto B462dad;
case 0x462daf:c.instructions+=2;goto B462daf;
case 0x462db2:c.instructions+=1;goto B462db2;
case 0x462db4:goto L462db4;
case 0x462db6:c.instructions+=1;goto B462db6;
case 0x462dbc:goto L462dbc;
case 0x462dc2:c.instructions+=1;goto B462dc2;
case 0x462dc4:goto L462dc4;
case 0x462dca:c.instructions+=1;goto B462dca;
case 0x462dcc:goto L462dcc;
case 0x462dd2:goto L462dd2;
case 0x462dd8:c.instructions+=1;goto B462dd8;
case 0x462ddd:goto L462ddd;
case 0x462de3:c.instructions+=4;goto B462de3;
case 0x462de4:c.instructions+=3;goto B462de4;
case 0x462de6:c.instructions+=2;goto B462de6;
case 0x462de8:c.instructions+=1;goto B462de8;
case 0x462ded:goto L462ded;
case 0x462df3:c.instructions+=7;goto B462df3;
case 0x462df9:c.instructions+=6;goto B462df9;
case 0x462dfc:c.instructions+=5;goto B462dfc;
case 0x462dfe:c.instructions+=4;goto B462dfe;
case 0x462e02:c.instructions+=3;goto B462e02;
case 0x462e04:c.instructions+=2;goto B462e04;
case 0x462e06:c.instructions+=1;goto B462e06;
case 0x462e09:goto L462e09;
case 0x462e0b:c.instructions+=2;goto B462e0b;
case 0x462e11:c.instructions+=1;goto B462e11;
case 0x462e13:goto L462e13;
case 0x462e15:c.instructions+=1;goto B462e15;
case 0x462e17:goto L462e17;
case 0x462e1c:c.instructions+=1;goto B462e1c;
case 0x462e1e:goto L462e1e;
case 0x462e23:goto L462e23;
case 0x462e27:c.instructions+=2;goto B462e27;
case 0x462e2a:c.instructions+=1;goto B462e2a;
case 0x462e2f:goto L462e2f;
case 0x462e31:c.instructions+=2;goto B462e31;
case 0x462e37:c.instructions+=1;goto B462e37;
case 0x462e39:goto L462e39;
case 0x462e3b:c.instructions+=1;goto B462e3b;
case 0x462e3d:goto L462e3d;
case 0x462e42:c.instructions+=1;goto B462e42;
case 0x462e44:goto L462e44;
case 0x462e49:goto L462e49;
case 0x462e4c:c.instructions+=4;goto B462e4c;
case 0x462e4e:c.instructions+=3;goto B462e4e;
case 0x462e50:c.instructions+=2;goto B462e50;
case 0x462e52:c.instructions+=1;goto B462e52;
case 0x462e55:goto L462e55;
case 0x462e57:c.instructions+=2;goto B462e57;
case 0x462e5d:c.instructions+=1;goto B462e5d;
case 0x462e5f:goto L462e5f;
case 0x462e61:c.instructions+=1;goto B462e61;
case 0x462e63:goto L462e63;
case 0x462e68:c.instructions+=1;goto B462e68;
case 0x462e6a:goto L462e6a;
case 0x462e6f:goto L462e6f;
case 0x462e75:c.instructions+=4;goto B462e75;
case 0x462e78:c.instructions+=3;goto B462e78;
case 0x462e7e:c.instructions+=2;goto B462e7e;
case 0x462e80:c.instructions+=1;goto B462e80;
case 0x462e82:goto L462e82;
case 0x462e87:c.instructions+=1;goto B462e87;
case 0x462e89:goto L462e89;
case 0x462e8f:c.instructions+=1;goto B462e8f;
case 0x462e91:goto L462e91;
case 0x462e96:goto L462e96;
case 0x462e99:c.instructions+=4;goto B462e99;
case 0x462e9f:c.instructions+=3;goto B462e9f;
case 0x462ea1:c.instructions+=2;goto B462ea1;
case 0x462ea3:c.instructions+=1;goto B462ea3;
case 0x462ea5:goto L462ea5;
case 0x462ea8:c.instructions+=2;goto B462ea8;
case 0x462ea9:c.instructions+=1;goto B462ea9;
case 0x462eae:goto L462eae;
case 0x462eb4:c.instructions+=2;goto B462eb4;
case 0x462eb6:c.instructions+=1;goto B462eb6;
case 0x462ebc:goto L462ebc;
case 0x462ec2:c.instructions+=3;goto B462ec2;
case 0x462ec3:c.instructions+=2;goto B462ec3;
case 0x462ec5:c.instructions+=1;goto B462ec5;
case 0x462eca:goto L462eca;
case 0x462ed0:c.instructions+=6;goto B462ed0;
case 0x462ed7:c.instructions+=5;goto B462ed7;
case 0x462ed9:c.instructions+=4;goto B462ed9;
case 0x462eda:c.instructions+=3;goto B462eda;
case 0x462ede:c.instructions+=2;goto B462ede;
case 0x462ee0:c.instructions+=1;goto B462ee0;
case 0x462ee3:goto L462ee3;
case 0x462ee5:c.instructions+=2;goto B462ee5;
case 0x462eeb:c.instructions+=1;goto B462eeb;
case 0x462eed:goto L462eed;
case 0x462eef:c.instructions+=1;goto B462eef;
case 0x462ef1:goto L462ef1;
case 0x462ef6:c.instructions+=1;goto B462ef6;
case 0x462ef8:goto L462ef8;
case 0x462efd:goto L462efd;
case 0x462f01:c.instructions+=2;goto B462f01;
case 0x462f04:c.instructions+=1;goto B462f04;
case 0x462f09:goto L462f09;
case 0x462f0b:c.instructions+=2;goto B462f0b;
case 0x462f11:c.instructions+=1;goto B462f11;
case 0x462f13:goto L462f13;
case 0x462f15:c.instructions+=1;goto B462f15;
case 0x462f17:goto L462f17;
case 0x462f1c:c.instructions+=1;goto B462f1c;
case 0x462f1e:goto L462f1e;
case 0x462f23:goto L462f23;
case 0x462f26:c.instructions+=4;goto B462f26;
case 0x462f28:c.instructions+=3;goto B462f28;
case 0x462f29:c.instructions+=2;goto B462f29;
case 0x462f2b:c.instructions+=1;goto B462f2b;
case 0x462f2e:goto L462f2e;
case 0x462f30:c.instructions+=2;goto B462f30;
case 0x462f36:c.instructions+=1;goto B462f36;
case 0x462f38:goto L462f38;
case 0x462f3a:c.instructions+=1;goto B462f3a;
case 0x462f3c:goto L462f3c;
case 0x462f41:c.instructions+=1;goto B462f41;
case 0x462f43:goto L462f43;
case 0x462f48:goto L462f48;
case 0x462f4b:c.instructions+=4;goto B462f4b;
case 0x462f51:c.instructions+=3;goto B462f51;
case 0x462f53:c.instructions+=2;goto B462f53;
case 0x462f55:c.instructions+=1;goto B462f55;
case 0x462f57:goto L462f57;
case 0x462f5a:c.instructions+=2;goto B462f5a;
case 0x462f5b:c.instructions+=1;goto B462f5b;
case 0x462f60:goto L462f60;
case 0x462f61:goto L462f61;
case 0x462f65:c.instructions+=5;goto B462f65;
case 0x462f66:c.instructions+=4;goto B462f66;
case 0x462f67:c.instructions+=3;goto B462f67;
case 0x462f6e:c.instructions+=2;goto B462f6e;
case 0x462f71:c.instructions+=1;goto B462f71;
case 0x462f80:goto L462f80;
case 0x462f81:c.instructions+=2;goto B462f81;
case 0x462f83:c.instructions+=1;goto B462f83;
case 0x462f88:goto L462f88;
case 0x462f8e:c.instructions+=3;goto B462f8e;
case 0x462f90:c.instructions+=2;goto B462f90;
case 0x462f91:c.instructions+=1;goto B462f91;
case 0x462fa0:goto L462fa0;
case 0x462fa5:c.instructions+=1;goto B462fa5;
case 0x462fb0:goto L462fb0;
case 0x462fb5:c.instructions+=1;goto B462fb5;
case 0x462fc0:goto L462fc0;
case 0x462fc5:c.instructions+=1;goto B462fc5;
case 0x462fd0:goto L462fd0;
case 0x462fd5:c.instructions+=1;goto B462fd5;
case 0x462fe0:goto L462fe0;
case 0x462fe5:c.instructions+=2;goto B462fe5;
case 0x462fe6:c.instructions+=1;goto B462fe6;
case 0x462feb:goto L462feb;
case 0x462fee:c.instructions+=2;goto B462fee;
case 0x462ff3:c.instructions+=1;goto B462ff3;
case 0x462ff5:goto L462ff5;
case 0x462ffb:c.instructions+=2;goto B462ffb;
case 0x462ffe:c.instructions+=1;goto B462ffe;
default:missing_instruction(c.pc);}
B462000:L462000:{c.instructions+=2;NFSU2_TR(0x462000);
w4(R+0,u32(0x7ed504ull));
}
B462005:{NFSU2_TR(0x462005);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B462010:L462010:{c.instructions+=2;NFSU2_TR(0x462010);
__builtin_memmove((R+0),gp(0x7ed508),4);
}
B462015:{NFSU2_TR(0x462015);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B462020:L462020:{c.instructions+=2;NFSU2_TR(0x462020);
s1(0x82bc4a,u8(0x1ull));
}
B462027:{NFSU2_TR(0x462027);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B462030:L462030:{c.instructions+=2;NFSU2_TR(0x462030);
w4(R+0,u32(0x7ed514ull));
}
B462035:{NFSU2_TR(0x462035);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B462040:L462040:{c.instructions+=2;NFSU2_TR(0x462040);
__builtin_memmove((R+0),gp(0x7ed518),4);
}
B462045:{NFSU2_TR(0x462045);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B462050:L462050:{c.instructions+=2;NFSU2_TR(0x462050);
w4(R+0,u32(0x7ed524ull));
}
B462055:{NFSU2_TR(0x462055);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B462060:L462060:{c.instructions+=2;NFSU2_TR(0x462060);
__builtin_memmove((R+0),gp(0x7ed528),4);
}
B462065:{NFSU2_TR(0x462065);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B462070:L462070:{c.instructions+=2;NFSU2_TR(0x462070);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xb0ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B46207a:{NFSU2_TR(0x46207a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B462080:L462080:{c.instructions+=13;NFSU2_TR(0x462080);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B462086:{NFSU2_TR(0x462086);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B462088:{NFSU2_TR(0x462088);
u8 U[4];
w4(U+0,u32(0x77259bull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46208d:{NFSU2_TR(0x46208d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46208e:{NFSU2_TR(0x46208e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B462095:{NFSU2_TR(0x462095);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x14ull))));
}
B462098:{NFSU2_TR(0x462098);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B462099:{NFSU2_TR(0x462099);
__builtin_memmove((R+12),(R+4),4);
}
B46209b:{NFSU2_TR(0x46209b);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4620a1:{NFSU2_TR(0x4620a1);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4620a2:{NFSU2_TR(0x4620a2);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B4620a4:{NFSU2_TR(0x4620a4);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4620a6:{NFSU2_TR(0x4620a6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4621a7;}}
}
B4620ac:L4620ac:{c.instructions+=4;NFSU2_TR(0x4620ac);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B4620b0:{NFSU2_TR(0x4620b0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4620b1:{NFSU2_TR(0x4620b1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4620b2:{NFSU2_TR(0x4620b2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4620b7ull));
TAIL_STATIC(0x734df0u,734);
}
B4620b7:L4620b7:{c.instructions+=2;NFSU2_TR(0x4620b7);
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
B4620ba:{NFSU2_TR(0x4620ba);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4620bfull));
TAIL_STATIC(0x734e40u,734);
}
B4620bf:L4620bf:{c.instructions+=9;NFSU2_TR(0x4620bf);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4620c3:{NFSU2_TR(0x4620c3);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B4620c7:{NFSU2_TR(0x4620c7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4620c8:{NFSU2_TR(0x4620c8);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4620cc:{NFSU2_TR(0x4620cc);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4620d0:{NFSU2_TR(0x4620d0);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4620d4:{NFSU2_TR(0x4620d4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B4620d6:{NFSU2_TR(0x4620d6);
u8 U[4];
w4(U+0,u32(0x18ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4620d8:{NFSU2_TR(0x4620d8);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4620daull));
{u32 t_=u32(r4(U+4));TAIL_DYNAMIC(t_);}
}
B4620da:L4620da:{c.instructions+=2;NFSU2_TR(0x4620da);
__builtin_memmove((R+24),(R+0),4);
}
B4620dc:{NFSU2_TR(0x4620dc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4620e1ull));
TAIL_STATIC(0x734e60u,734);
}
B4620e1:L4620e1:{c.instructions+=4;NFSU2_TR(0x4620e1);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4620e5:{NFSU2_TR(0x4620e5);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4620e7:{NFSU2_TR(0x4620e7);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4620eb:{NFSU2_TR(0x4620eb);
if(r1(R+518)){{goto L46214c;}}
}
B4620ed:L4620ed:{c.instructions+=3;NFSU2_TR(0x4620ed);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xbcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B4620f4:{NFSU2_TR(0x4620f4);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B4620f6:{NFSU2_TR(0x4620f6);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L4620fc;}}
}
B4620f8:L4620f8:{c.instructions+=2;NFSU2_TR(0x4620f8);
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
B4620fa:{NFSU2_TR(0x4620fa);
{goto L462106;}
}
B4620fc:L4620fc:{c.instructions+=2;NFSU2_TR(0x4620fc);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0xfull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0xfull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0xfull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4620ff:{NFSU2_TR(0x4620ff);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L462106;}}
}
B462101:L462101:{c.instructions+=1;NFSU2_TR(0x462101);
w4(R+0,u32(0xfull));
}
B462106:L462106:{c.instructions+=11;NFSU2_TR(0x462106);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B462107:{NFSU2_TR(0x462107);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B46210a:{NFSU2_TR(0x46210a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46210b:{NFSU2_TR(0x46210b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46210c:{NFSU2_TR(0x46210c);
u8 U[4];
w4(U+0,u32(0x82c668ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B462111:{NFSU2_TR(0x462111);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+28)),r4(U+0));
}
B462113:{NFSU2_TR(0x462113);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B462116:{NFSU2_TR(0x462116);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B462119:{NFSU2_TR(0x462119);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46211c:{NFSU2_TR(0x46211c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46211f:{NFSU2_TR(0x46211f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x462124ull));
TAIL_STATIC(0x7358c0u,735);
}
B462124:L462124:{c.instructions+=3;NFSU2_TR(0x462124);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B462127:{NFSU2_TR(0x462127);
u8 U[14];
__builtin_memmove((U+6),(R+20),4);
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
B462129:{NFSU2_TR(0x462129);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L462149;}}
}
B46212b:L46212b:{c.instructions+=3;NFSU2_TR(0x46212b);
u8 U[4];
w4(U+0,u32(0x7edd80ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B462130:{NFSU2_TR(0x462130);
w4(R+4,u32(0x82c668ull));
}
B462135:{NFSU2_TR(0x462135);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46213aull));
TAIL_STATIC(0x735840u,735);
}
B46213a:L46213a:{c.instructions+=4;NFSU2_TR(0x46213a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46213b:{NFSU2_TR(0x46213b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46213c:{NFSU2_TR(0x46213c);
u8 U[4];
w4(U+0,u32(0x82c668ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B462141:{NFSU2_TR(0x462141);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x462146ull));
TAIL_STATIC(0x7358c0u,735);
}
B462146:L462146:{c.instructions+=1;NFSU2_TR(0x462146);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B462149:L462149:{c.instructions+=2;NFSU2_TR(0x462149);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B46214a:{NFSU2_TR(0x46214a);
{goto L46214e;}
}
B46214c:L46214c:{c.instructions+=1;NFSU2_TR(0x46214c);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B46214e:L46214e:{c.instructions+=7;NFSU2_TR(0x46214e);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B462154:{NFSU2_TR(0x462154);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B462156:{NFSU2_TR(0x462156);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B462158:{NFSU2_TR(0x462158);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B462160:{NFSU2_TR(0x462160);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B462164:{NFSU2_TR(0x462164);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B462165:{NFSU2_TR(0x462165);
if(r1(R+518)){{goto L462171;}}
}
B462167:L462167:{c.instructions+=3;NFSU2_TR(0x462167);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B46216b:{NFSU2_TR(0x46216b);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46216c:{NFSU2_TR(0x46216c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x462171ull));
TAIL_STATIC(0x735070u,735);
}
B462171:L462171:{c.instructions+=9;NFSU2_TR(0x462171);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B462175:{NFSU2_TR(0x462175);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xb4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B46217b:{NFSU2_TR(0x46217b);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xb8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B462181:{NFSU2_TR(0x462181);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B462184:{NFSU2_TR(0x462184);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B462187:{NFSU2_TR(0x462187);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B462189:{NFSU2_TR(0x462189);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),u32(0x60ull)));
w1(R+523,scarry<u32>(r4(R+0),u32(0x60ull)));
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x60ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B46218c:{NFSU2_TR(0x46218c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46218d:{NFSU2_TR(0x46218d);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x462190ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B462190:L462190:{c.instructions+=7;NFSU2_TR(0x462190);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B462193:{NFSU2_TR(0x462193);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B462196:{NFSU2_TR(0x462196);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xb4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B46219c:{NFSU2_TR(0x46219c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B46219e:{NFSU2_TR(0x46219e);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),u32(0x90ull)));
w1(R+523,scarry<u32>(r4(R+0),u32(0x90ull)));
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x90ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4621a3:{NFSU2_TR(0x4621a3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4621a4:{NFSU2_TR(0x4621a4);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4621a7ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4621a7:L4621a7:{c.instructions+=6;NFSU2_TR(0x4621a7);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4621ab:{NFSU2_TR(0x4621ab);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4621ac:{NFSU2_TR(0x4621ac);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4621ad:{NFSU2_TR(0x4621ad);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4621b4:{NFSU2_TR(0x4621b4);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x20ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x20ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x20ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4621b7:{NFSU2_TR(0x4621b7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4621c0:L4621c0:{c.instructions+=4;NFSU2_TR(0x4621c0);
__builtin_memmove((R+0),gp(0x82cb38),4);
}
B4621c5:{NFSU2_TR(0x4621c5);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B4621c6:{NFSU2_TR(0x4621c6);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x80000001ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
}
B4621cb:{NFSU2_TR(0x4621cb);
u8 U[1];
w1(U+0,u8(!(r1(R+519))));
if(r1(U+0)){{goto L4621d2;}}
}
B4621cd:L4621cd:{c.instructions+=3;NFSU2_TR(0x4621cd);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B4621ce:{NFSU2_TR(0x4621ce);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0xfffffffeull))));
}
B4621d1:{NFSU2_TR(0x4621d1);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B4621d2:L4621d2:{c.instructions+=3;NFSU2_TR(0x4621d2);
__builtin_memmove(gp(0x82cb38),(R+0),4);
}
B4621d7:{NFSU2_TR(0x4621d7);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xbcull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4621dd:{NFSU2_TR(0x4621dd);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x462080u);}goto L462080;}
}
B4621f0:L4621f0:{c.instructions+=9;NFSU2_TR(0x4621f0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4621f1:{NFSU2_TR(0x4621f1);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4621f2:{NFSU2_TR(0x4621f2);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4621f3:{NFSU2_TR(0x4621f3);
__builtin_memmove((R+24),(R+4),4);
}
B4621f5:{NFSU2_TR(0x4621f5);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4621f6:{NFSU2_TR(0x4621f6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4621fc:{NFSU2_TR(0x4621fc);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B4621fe:{NFSU2_TR(0x4621fe);
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
B462200:{NFSU2_TR(0x462200);
if(r1(R+518)){{goto L46222f;}}
}
B462202:L462202:{c.instructions+=3;NFSU2_TR(0x462202);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+4),(U+0),4);
}
B462204:{NFSU2_TR(0x462204);
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
B462206:{NFSU2_TR(0x462206);
if(r1(R+518)){{goto L46220d;}}
}
B462208:L462208:{c.instructions+=1;NFSU2_TR(0x462208);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46220dull));
TAIL_STATIC(0x735550u,735);
}
B46220d:L46220d:{c.instructions+=3;NFSU2_TR(0x46220d);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B462211:{NFSU2_TR(0x462211);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B462212:{NFSU2_TR(0x462212);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x462217ull));
TAIL_STATIC(0x734df0u,734);
}
B462217:L462217:{c.instructions+=2;NFSU2_TR(0x462217);
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
B46221a:{NFSU2_TR(0x46221a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46221full));
TAIL_STATIC(0x734e40u,734);
}
B46221f:L46221f:{c.instructions+=5;NFSU2_TR(0x46221f);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B462223:{NFSU2_TR(0x462223);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B462225:{NFSU2_TR(0x462225);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B462226:{NFSU2_TR(0x462226);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B462227:{NFSU2_TR(0x462227);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46222aull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B46222a:L46222a:{c.instructions+=1;NFSU2_TR(0x46222a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46222full));
TAIL_STATIC(0x734e60u,734);
}
B46222f:L46222f:{c.instructions+=7;NFSU2_TR(0x46222f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B462230:{NFSU2_TR(0x462230);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B462236:{NFSU2_TR(0x462236);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46223c:{NFSU2_TR(0x46223c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B46223d:{NFSU2_TR(0x46223d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B46223e:{NFSU2_TR(0x46223e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B46223f:{NFSU2_TR(0x46223f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B462240:L462240:{c.instructions+=8;NFSU2_TR(0x462240);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B462241:{NFSU2_TR(0x462241);
__builtin_memmove((R+0),gp(0x82b884),4);
}
B462246:{NFSU2_TR(0x462246);
{u32 ea_=u32(u32(7904500u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B46224c:{NFSU2_TR(0x46224c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B46224f:{NFSU2_TR(0x46224f);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B462251:{NFSU2_TR(0x462251);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B462252:{NFSU2_TR(0x462252);
__builtin_memmove((R+24),(R+4),4);
}
B462254:{NFSU2_TR(0x462254);
if(r1(R+518)){{goto L462263;}}
}
B462256:L462256:{c.instructions+=4;NFSU2_TR(0x462256);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B462258:{NFSU2_TR(0x462258);
{u32 ea_=u32(r4(R+0)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B46225b:{NFSU2_TR(0x46225b);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B46225d:{NFSU2_TR(0x46225d);
{u32 ea_=u32(u32(7904500u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B462263:L462263:{c.instructions+=1;NFSU2_TR(0x462263);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x462268ull));
TAIL_STATIC(0x75bed4u,75b);
}
B462268:L462268:{c.instructions+=5;NFSU2_TR(0x462268);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46226b:{NFSU2_TR(0x46226b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B46226e:{NFSU2_TR(0x46226e);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B462271:{NFSU2_TR(0x462271);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B462273:{NFSU2_TR(0x462273);
if(r1(R+518)){{goto L462433;}}
}
B462279:L462279:{c.instructions+=3;NFSU2_TR(0x462279);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B46227c:{NFSU2_TR(0x46227c);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B46227e:{NFSU2_TR(0x46227e);
if(r1(R+518)){{goto L4622c8;}}
}
B462280:L462280:{c.instructions+=3;NFSU2_TR(0x462280);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x550ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B462286:{NFSU2_TR(0x462286);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B462288:{NFSU2_TR(0x462288);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4622c8;}}
}
B46228a:L46228a:{c.instructions+=3;NFSU2_TR(0x46228a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B462290:{NFSU2_TR(0x462290);
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
B462292:{NFSU2_TR(0x462292);
if(r1(R+518)){{goto L462433;}}
}
B462298:L462298:{c.instructions+=7;NFSU2_TR(0x462298);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B46229f:{NFSU2_TR(0x46229f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4622a5:{NFSU2_TR(0x4622a5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4622ac:{NFSU2_TR(0x4622ac);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B4622b2:{NFSU2_TR(0x4622b2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B4622b4:{NFSU2_TR(0x4622b4);
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
B4622b6:{NFSU2_TR(0x4622b6);
if(r1(R+518)){{goto L462433;}}
}
B4622bc:L4622bc:{c.instructions+=3;NFSU2_TR(0x4622bc);
u8 U[6];
w1(R+512,carry<u32>(r4(R+24),u32(0x4ull)));
w1(R+523,scarry<u32>(r4(R+24),u32(0x4ull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4622bf:{NFSU2_TR(0x4622bf);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4622c0:{NFSU2_TR(0x4622c0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4622c5ull));
TAIL_STATIC(0x735580u,735);
}
B4622c5:L4622c5:{c.instructions+=3;NFSU2_TR(0x4622c5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4622c6:{NFSU2_TR(0x4622c6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4622c7:{NFSU2_TR(0x4622c7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4622c8:L4622c8:{c.instructions+=3;NFSU2_TR(0x4622c8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4622ce:{NFSU2_TR(0x4622ce);
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
B4622d0:{NFSU2_TR(0x4622d0);
if(r1(R+518)){{goto L462433;}}
}
B4622d6:L4622d6:{c.instructions+=3;NFSU2_TR(0x4622d6);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x60ull))));
}
B4622d9:{NFSU2_TR(0x4622d9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4622da:{NFSU2_TR(0x4622da);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4622dfull));
TAIL_STATIC(0x459a50u,459);
}
B4622df:L4622df:{c.instructions+=12;NFSU2_TR(0x4622df);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4622e2:{NFSU2_TR(0x4622e2);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4622e5:{NFSU2_TR(0x4622e5);
{u32 ea_=u32(r4(R+8)+u32(1072u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4622eb:{NFSU2_TR(0x4622eb);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4622ee:{NFSU2_TR(0x4622ee);
{u32 ea_=u32(u32(7881324u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4622f4:{NFSU2_TR(0x4622f4);
{u32 ea_=u32(u32(7899272u));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B4622fa:{NFSU2_TR(0x4622fa);
{u32 ea_=u32(u32(7905684u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B462300:{NFSU2_TR(0x462300);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B462304:{NFSU2_TR(0x462304);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B46230a:{NFSU2_TR(0x46230a);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B46230c:{NFSU2_TR(0x46230c);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B46230f:{NFSU2_TR(0x46230f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L46236c;}}
}
B462311:L462311:{c.instructions+=6;NFSU2_TR(0x462311);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B462315:{NFSU2_TR(0x462315);
{u32 ea_=u32(u32(7905684u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B46231b:{NFSU2_TR(0x46231b);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B46231f:{NFSU2_TR(0x46231f);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B462321:{NFSU2_TR(0x462321);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B462324:{NFSU2_TR(0x462324);
if(r1(R+514)){{goto L46232e;}}
}
B462326:L462326:{c.instructions+=2;NFSU2_TR(0x462326);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B462328:{NFSU2_TR(0x462328);
{u32 ea_=u32(u32(7905684u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B46232e:L46232e:{c.instructions+=2;NFSU2_TR(0x46232e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46232f:{NFSU2_TR(0x46232f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x462334ull));
TAIL_STATIC(0x75bed4u,75b);
}
B462334:L462334:{c.instructions+=5;NFSU2_TR(0x462334);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B46233a:{NFSU2_TR(0x46233a);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46233c:{NFSU2_TR(0x46233c);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46233e:{NFSU2_TR(0x46233e);
__builtin_memmove((R+28),(R+0),4);
}
B462340:{NFSU2_TR(0x462340);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x462345ull));
TAIL_STATIC(0x45e290u,45e);
}
B462345:L462345:{c.instructions+=7;NFSU2_TR(0x462345);
{u32 ea_=u32(u32(7906012u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B46234b:{NFSU2_TR(0x46234b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B46234d:{NFSU2_TR(0x46234d);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46234f:{NFSU2_TR(0x46234f);
{u32 ea_=u32(u32(7906012u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B462355:{NFSU2_TR(0x462355);
__builtin_memmove((R+4),(R+24),4);
}
B462357:{NFSU2_TR(0x462357);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B46235b:{NFSU2_TR(0x46235b);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46235eull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B46235e:L46235e:{c.instructions+=3;NFSU2_TR(0x46235e);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B462360:{NFSU2_TR(0x462360);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B462366:{NFSU2_TR(0x462366);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L462374;}}
}
B462368:L462368:{c.instructions+=2;NFSU2_TR(0x462368);
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
B46236a:{NFSU2_TR(0x46236a);
{goto L462380;}
}
B46236c:L46236c:{c.instructions+=2;NFSU2_TR(0x46236c);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B462372:{NFSU2_TR(0x462372);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x46232eu);}goto L46232e;}
}
B462374:L462374:{c.instructions+=2;NFSU2_TR(0x462374);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0x7fffull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x7fffull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0x7fffull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B462379:{NFSU2_TR(0x462379);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L462380;}}
}
B46237b:L46237b:{c.instructions+=1;NFSU2_TR(0x46237b);
w4(R+0,u32(0x7fffull));
}
B462380:L462380:{c.instructions+=5;NFSU2_TR(0x462380);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B462383:{NFSU2_TR(0x462383);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B462385:{NFSU2_TR(0x462385);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B462387:{NFSU2_TR(0x462387);
__builtin_memmove((R+4),(R+24),4);
}
B462389:{NFSU2_TR(0x462389);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46238cull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B46238c:L46238c:{c.instructions+=3;NFSU2_TR(0x46238c);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B46238e:{NFSU2_TR(0x46238e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B462394:{NFSU2_TR(0x462394);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L46239a;}}
}
B462396:L462396:{c.instructions+=2;NFSU2_TR(0x462396);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B462398:{NFSU2_TR(0x462398);
{goto L4623a6;}
}
B46239a:L46239a:{c.instructions+=2;NFSU2_TR(0x46239a);
u8 U[4];
w1(R+523,sborrow<u32>(r4(R+0),u32(0xffffull)));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xffffull))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B46239f:{NFSU2_TR(0x46239f);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L4623a6;}}
}
B4623a1:L4623a1:{c.instructions+=1;NFSU2_TR(0x4623a1);
w4(R+0,u32(0xffffull));
}
B4623a6:L4623a6:{c.instructions+=5;NFSU2_TR(0x4623a6);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B4623a8:{NFSU2_TR(0x4623a8);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4623ab:{NFSU2_TR(0x4623ab);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4623b1:{NFSU2_TR(0x4623b1);
__builtin_memmove((R+0),(R+28),4);
}
B4623b3:{NFSU2_TR(0x4623b3);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L4623b9;}}
}
B4623b5:L4623b5:{c.instructions+=2;NFSU2_TR(0x4623b5);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4623b7:{NFSU2_TR(0x4623b7);
{goto L4623c6;}
}
B4623b9:L4623b9:{c.instructions+=2;NFSU2_TR(0x4623b9);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x3ffull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ffull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4623bf:{NFSU2_TR(0x4623bf);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L4623c6;}}
}
B4623c1:L4623c1:{c.instructions+=1;NFSU2_TR(0x4623c1);
w4(R+0,u32(0x3ffull));
}
B4623c6:L4623c6:{c.instructions+=3;NFSU2_TR(0x4623c6);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4623ca:{NFSU2_TR(0x4623ca);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4623cd:{NFSU2_TR(0x4623cd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4623d2ull));
TAIL_STATIC(0x75bed4u,75b);
}
B4623d2:L4623d2:{c.instructions+=4;NFSU2_TR(0x4623d2);
u8 U[4];
w1(R+523,sborrow<u32>(r4(R+0),u32(0xffffc001ull)));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xffffc001ull))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B4623d7:{NFSU2_TR(0x4623d7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4623dd:{NFSU2_TR(0x4623dd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4623de:{NFSU2_TR(0x4623de);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L4623e7;}}
}
B4623e0:L4623e0:{c.instructions+=2;NFSU2_TR(0x4623e0);
w4(R+0,u32(0xffffc001ull));
}
B4623e5:{NFSU2_TR(0x4623e5);
{goto L4623f3;}
}
B4623e7:L4623e7:{c.instructions+=2;NFSU2_TR(0x4623e7);
u8 U[4];
w1(R+523,sborrow<u32>(r4(R+0),u32(0x3fffull)));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x3fffull))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4623ec:{NFSU2_TR(0x4623ec);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L4623f3;}}
}
B4623ee:L4623ee:{c.instructions+=1;NFSU2_TR(0x4623ee);
w4(R+0,u32(0x3fffull));
}
B4623f3:L4623f3:{c.instructions+=5;NFSU2_TR(0x4623f3);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4623f6:{NFSU2_TR(0x4623f6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4623fc:{NFSU2_TR(0x4623fc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B4623fe:{NFSU2_TR(0x4623fe);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B462400:{NFSU2_TR(0x462400);
if(r1(R+518)){{goto L46240b;}}
}
B462402:L462402:{c.instructions+=3;NFSU2_TR(0x462402);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),u32(0x4ull)));
w1(R+523,scarry<u32>(r4(R+0),u32(0x4ull)));
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B462405:{NFSU2_TR(0x462405);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B462406:{NFSU2_TR(0x462406);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46240bull));
TAIL_STATIC(0x735580u,735);
}
B46240b:L46240b:{c.instructions+=5;NFSU2_TR(0x46240b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B462411:{NFSU2_TR(0x462411);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B462413:{NFSU2_TR(0x462413);
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
B462415:{NFSU2_TR(0x462415);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B46241d:{NFSU2_TR(0x46241d);
if(r1(R+518)){{goto L462429;}}
}
B46241f:L46241f:{c.instructions+=3;NFSU2_TR(0x46241f);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B462423:{NFSU2_TR(0x462423);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B462424:{NFSU2_TR(0x462424);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x462429ull));
TAIL_STATIC(0x735070u,735);
}
B462429:L462429:{c.instructions+=2;NFSU2_TR(0x462429);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B46242d:{NFSU2_TR(0x46242d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B462433:L462433:{c.instructions+=3;NFSU2_TR(0x462433);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B462434:{NFSU2_TR(0x462434);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B462435:{NFSU2_TR(0x462435);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B462440:L462440:{c.instructions+=2;NFSU2_TR(0x462440);
w4(R+0,u32(0x7ed534ull));
}
B462445:{NFSU2_TR(0x462445);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B462450:L462450:{c.instructions+=2;NFSU2_TR(0x462450);
__builtin_memmove((R+0),gp(0x7ed538),4);
}
B462455:{NFSU2_TR(0x462455);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B462460:L462460:{c.instructions+=2;NFSU2_TR(0x462460);
w4(R+0,u32(0x7ed544ull));
}
B462465:{NFSU2_TR(0x462465);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B462470:L462470:{c.instructions+=2;NFSU2_TR(0x462470);
__builtin_memmove((R+0),gp(0x7ed548),4);
}
B462475:{NFSU2_TR(0x462475);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B462480:L462480:{c.instructions+=11;NFSU2_TR(0x462480);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xecull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B462487:{NFSU2_TR(0x462487);
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
B462489:{NFSU2_TR(0x462489);
w4(R+8,u32(0x3f800000ull));
}
B46248e:{NFSU2_TR(0x46248e);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xd4ull))));
w4(U+4,u32(0x3e19999aull));
s4(u32(r4(U+0)),r4(U+4));
}
B462498:{NFSU2_TR(0x462498);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xdcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46249e:{NFSU2_TR(0x46249e);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xd8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4624a4:{NFSU2_TR(0x4624a4);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xe0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4624aa:{NFSU2_TR(0x4624aa);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xe8ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4624b0:{NFSU2_TR(0x4624b0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xe4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4624b6:{NFSU2_TR(0x4624b6);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xd0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4624bc:{NFSU2_TR(0x4624bc);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4624c0:L4624c0:{c.instructions+=6;NFSU2_TR(0x4624c0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xb4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4624c6:{NFSU2_TR(0x4624c6);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4624c8:{NFSU2_TR(0x4624c8);
u8 U[10];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(U+6,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4624ca:{NFSU2_TR(0x4624ca);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+0),(U+0),1);
}
B4624cd:{NFSU2_TR(0x4624cd);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4624d0:{NFSU2_TR(0x4624d0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4624d9:L4624d9:{c.instructions+=16;NFSU2_TR(0x4624d9);
}
B4624da:{NFSU2_TR(0x4624da);
}
B4624db:{NFSU2_TR(0x4624db);
}
B4624dc:{NFSU2_TR(0x4624dc);
}
B4624dd:{NFSU2_TR(0x4624dd);
}
B4624de:{NFSU2_TR(0x4624de);
}
B4624df:{NFSU2_TR(0x4624df);
}
B4624e0:{NFSU2_TR(0x4624e0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4624e1:{NFSU2_TR(0x4624e1);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4624e2:{NFSU2_TR(0x4624e2);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4624e3:{NFSU2_TR(0x4624e3);
__builtin_memmove((R+24),(R+4),4);
}
B4624e5:{NFSU2_TR(0x4624e5);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4624e6:{NFSU2_TR(0x4624e6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4624ec:{NFSU2_TR(0x4624ec);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B4624ee:{NFSU2_TR(0x4624ee);
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
B4624f0:{NFSU2_TR(0x4624f0);
if(r1(R+518)){{goto L46251f;}}
}
B4624f2:L4624f2:{c.instructions+=3;NFSU2_TR(0x4624f2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+4),(U+0),4);
}
B4624f4:{NFSU2_TR(0x4624f4);
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
B4624f6:{NFSU2_TR(0x4624f6);
if(r1(R+518)){{goto L4624fd;}}
}
B4624f8:L4624f8:{c.instructions+=1;NFSU2_TR(0x4624f8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4624fdull));
TAIL_STATIC(0x735550u,735);
}
B4624fd:L4624fd:{c.instructions+=3;NFSU2_TR(0x4624fd);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B462501:{NFSU2_TR(0x462501);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B462502:{NFSU2_TR(0x462502);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x462507ull));
TAIL_STATIC(0x734df0u,734);
}
B462507:L462507:{c.instructions+=2;NFSU2_TR(0x462507);
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
B46250a:{NFSU2_TR(0x46250a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46250full));
TAIL_STATIC(0x734e40u,734);
}
B46250f:L46250f:{c.instructions+=5;NFSU2_TR(0x46250f);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B462513:{NFSU2_TR(0x462513);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B462515:{NFSU2_TR(0x462515);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B462516:{NFSU2_TR(0x462516);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B462517:{NFSU2_TR(0x462517);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46251aull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B46251a:L46251a:{c.instructions+=1;NFSU2_TR(0x46251a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46251full));
TAIL_STATIC(0x734e60u,734);
}
B46251f:L46251f:{c.instructions+=12;NFSU2_TR(0x46251f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B462522:{NFSU2_TR(0x462522);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B462528:{NFSU2_TR(0x462528);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc4ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B46252e:{NFSU2_TR(0x46252e);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc5ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B462534:{NFSU2_TR(0x462534);
{u32 ea_=u32(r4(R+0)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B462537:{NFSU2_TR(0x462537);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B462538:{NFSU2_TR(0x462538);
{u32 ea_=u32(r4(R+24)+u32(192u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B46253e:{NFSU2_TR(0x46253e);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xecull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B462544:{NFSU2_TR(0x462544);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B462545:{NFSU2_TR(0x462545);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B462546:{NFSU2_TR(0x462546);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B462547:{NFSU2_TR(0x462547);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B462550:L462550:{c.instructions+=7;NFSU2_TR(0x462550);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x8ull))));
}
B462553:{NFSU2_TR(0x462553);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B462554:{NFSU2_TR(0x462554);
__builtin_memmove((R+24),(R+4),4);
}
B462556:{NFSU2_TR(0x462556);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B462557:{NFSU2_TR(0x462557);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B46255d:{NFSU2_TR(0x46255d);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B46255f:{NFSU2_TR(0x46255f);
if(r1(R+518)){{goto L462612;}}
}
B462565:L462565:{c.instructions+=4;NFSU2_TR(0x462565);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B46256b:{NFSU2_TR(0x46256b);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46256d:{NFSU2_TR(0x46256d);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46256f:{NFSU2_TR(0x46256f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x462574ull));
TAIL_STATIC(0x45e290u,45e);
}
B462574:L462574:{c.instructions+=2;NFSU2_TR(0x462574);
{u32 ea_=u32(u32(7906016u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B46257a:{NFSU2_TR(0x46257a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46257full));
TAIL_STATIC(0x75bed4u,75b);
}
B46257f:L46257f:{c.instructions+=2;NFSU2_TR(0x46257f);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B462581:{NFSU2_TR(0x462581);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L462587;}}
}
B462583:L462583:{c.instructions+=2;NFSU2_TR(0x462583);
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
B462585:{NFSU2_TR(0x462585);
{goto L462593;}
}
B462587:L462587:{c.instructions+=2;NFSU2_TR(0x462587);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0x1fa0ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x1fa0ull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0x1fa0ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B46258c:{NFSU2_TR(0x46258c);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L462593;}}
}
B46258e:L46258e:{c.instructions+=1;NFSU2_TR(0x46258e);
w4(R+0,u32(0x1fa0ull));
}
B462593:L462593:{c.instructions+=7;NFSU2_TR(0x462593);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B462596:{NFSU2_TR(0x462596);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B46259c:{NFSU2_TR(0x46259c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B46259e:{NFSU2_TR(0x46259e);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4625a0:{NFSU2_TR(0x4625a0);
__builtin_memmove((R+4),(R+24),4);
}
B4625a2:{NFSU2_TR(0x4625a2);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4625a6:{NFSU2_TR(0x4625a6);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4625a9ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4625a9:L4625a9:{c.instructions+=4;NFSU2_TR(0x4625a9);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4625ad:{NFSU2_TR(0x4625ad);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B4625b1:{NFSU2_TR(0x4625b1);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4625b5:{NFSU2_TR(0x4625b5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4625baull));
TAIL_STATIC(0x75bed4u,75b);
}
B4625ba:L4625ba:{c.instructions+=3;NFSU2_TR(0x4625ba);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B4625bc:{NFSU2_TR(0x4625bc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4625c2:{NFSU2_TR(0x4625c2);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L4625c8;}}
}
B4625c4:L4625c4:{c.instructions+=2;NFSU2_TR(0x4625c4);
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
B4625c6:{NFSU2_TR(0x4625c6);
{goto L4625d4;}
}
B4625c8:L4625c8:{c.instructions+=2;NFSU2_TR(0x4625c8);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0x7fffull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x7fffull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0x7fffull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4625cd:{NFSU2_TR(0x4625cd);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L4625d4;}}
}
B4625cf:L4625cf:{c.instructions+=1;NFSU2_TR(0x4625cf);
w4(R+0,u32(0x7fffull));
}
B4625d4:L4625d4:{c.instructions+=5;NFSU2_TR(0x4625d4);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4625d7:{NFSU2_TR(0x4625d7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4625d9:{NFSU2_TR(0x4625d9);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4625db:{NFSU2_TR(0x4625db);
__builtin_memmove((R+4),(R+24),4);
}
B4625dd:{NFSU2_TR(0x4625dd);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4625e0ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4625e0:L4625e0:{c.instructions+=3;NFSU2_TR(0x4625e0);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B4625e2:{NFSU2_TR(0x4625e2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4625e8:{NFSU2_TR(0x4625e8);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L4625ee;}}
}
B4625ea:L4625ea:{c.instructions+=2;NFSU2_TR(0x4625ea);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4625ec:{NFSU2_TR(0x4625ec);
{goto L4625fa;}
}
B4625ee:L4625ee:{c.instructions+=2;NFSU2_TR(0x4625ee);
u8 U[4];
w1(R+523,sborrow<u32>(r4(R+0),u32(0xffffull)));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xffffull))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4625f3:{NFSU2_TR(0x4625f3);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L4625fa;}}
}
B4625f5:L4625f5:{c.instructions+=1;NFSU2_TR(0x4625f5);
w4(R+0,u32(0xffffull));
}
B4625fa:L4625fa:{c.instructions+=5;NFSU2_TR(0x4625fa);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4625fd:{NFSU2_TR(0x4625fd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B462603:{NFSU2_TR(0x462603);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B462605:{NFSU2_TR(0x462605);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B462607:{NFSU2_TR(0x462607);
if(r1(R+518)){{goto L462612;}}
}
B462609:L462609:{c.instructions+=3;NFSU2_TR(0x462609);
u8 U[6];
w1(R+512,carry<u32>(r4(R+24),u32(0x4ull)));
w1(R+523,scarry<u32>(r4(R+24),u32(0x4ull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B46260c:{NFSU2_TR(0x46260c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46260d:{NFSU2_TR(0x46260d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x462612ull));
TAIL_STATIC(0x735580u,735);
}
B462612:L462612:{c.instructions+=4;NFSU2_TR(0x462612);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B462613:{NFSU2_TR(0x462613);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B462614:{NFSU2_TR(0x462614);
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
B462617:{NFSU2_TR(0x462617);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B462620:L462620:{c.instructions+=5;NFSU2_TR(0x462620);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xb4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B462626:{NFSU2_TR(0x462626);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B462628:{NFSU2_TR(0x462628);
u8 U[10];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(U+6,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B46262a:{NFSU2_TR(0x46262a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+0),(U+0),1);
}
B46262d:{NFSU2_TR(0x46262d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B462630:L462630:{c.instructions+=2;NFSU2_TR(0x462630);
w4(R+0,u32(0x7ed554ull));
}
B462635:{NFSU2_TR(0x462635);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B462637:L462637:{c.instructions+=11;NFSU2_TR(0x462637);
}
B462638:{NFSU2_TR(0x462638);
}
B462639:{NFSU2_TR(0x462639);
}
B46263a:{NFSU2_TR(0x46263a);
}
B46263b:{NFSU2_TR(0x46263b);
}
B46263c:{NFSU2_TR(0x46263c);
}
B46263d:{NFSU2_TR(0x46263d);
}
B46263e:{NFSU2_TR(0x46263e);
}
B46263f:{NFSU2_TR(0x46263f);
}
B462640:{NFSU2_TR(0x462640);
__builtin_memmove((R+0),gp(0x7ed558),4);
}
B462645:{NFSU2_TR(0x462645);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B462650:L462650:{c.instructions+=5;NFSU2_TR(0x462650);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B462651:{NFSU2_TR(0x462651);
__builtin_memmove((R+24),(R+4),4);
}
B462653:{NFSU2_TR(0x462653);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B462659:{NFSU2_TR(0x462659);
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
B46265b:{NFSU2_TR(0x46265b);
if(r1(R+518)){{goto L462663;}}
}
B46265d:L46265d:{c.instructions+=3;NFSU2_TR(0x46265d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B46265f:{NFSU2_TR(0x46265f);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B462661:{NFSU2_TR(0x462661);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x462663ull));
{u32 t_=u32(r4(U+4));TAIL_DYNAMIC(t_);}
}
B462663:L462663:{c.instructions+=3;NFSU2_TR(0x462663);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb4ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B46266d:{NFSU2_TR(0x46266d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B46266e:{NFSU2_TR(0x46266e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B462670:L462670:{c.instructions+=8;NFSU2_TR(0x462670);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x10ull))));
}
B462673:{NFSU2_TR(0x462673);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B462674:{NFSU2_TR(0x462674);
__builtin_memmove((R+24),(R+4),4);
}
B462676:{NFSU2_TR(0x462676);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B462679:{NFSU2_TR(0x462679);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B46267c:{NFSU2_TR(0x46267c);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x60ull))));
}
B46267f:{NFSU2_TR(0x46267f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B462680:{NFSU2_TR(0x462680);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x462685ull));
TAIL_STATIC(0x459a50u,459);
}
B462685:L462685:{c.instructions+=3;NFSU2_TR(0x462685);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B462688:{NFSU2_TR(0x462688);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B46268a:{NFSU2_TR(0x46268a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L462697;}}
}
B46268c:L46268c:{c.instructions+=4;NFSU2_TR(0x46268c);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B462692:{NFSU2_TR(0x462692);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B462693:{NFSU2_TR(0x462693);
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
B462696:{NFSU2_TR(0x462696);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B462697:L462697:{c.instructions+=25;NFSU2_TR(0x462697);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B46269a:{NFSU2_TR(0x46269a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x74ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B46269d:{NFSU2_TR(0x46269d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4626a0:{NFSU2_TR(0x4626a0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4626a4:{NFSU2_TR(0x4626a4);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4626a8:{NFSU2_TR(0x4626a8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4626ab:{NFSU2_TR(0x4626ab);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4626af:{NFSU2_TR(0x4626af);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4626b2:{NFSU2_TR(0x4626b2);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x74ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4626b5:{NFSU2_TR(0x4626b5);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4626b9:{NFSU2_TR(0x4626b9);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B4626bd:{NFSU2_TR(0x4626bd);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4626c1:{NFSU2_TR(0x4626c1);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4626c5:{NFSU2_TR(0x4626c5);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B4626c9:{NFSU2_TR(0x4626c9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4626ca:{NFSU2_TR(0x4626ca);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B4626cc:{NFSU2_TR(0x4626cc);
__asm__ volatile(".byte 0xde,0xca":::"memory");
}
B4626ce:{NFSU2_TR(0x4626ce);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B4626d0:{NFSU2_TR(0x4626d0);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B4626d2:{NFSU2_TR(0x4626d2);
__asm__ volatile(".byte 0xde,0xc2":::"memory");
}
B4626d4:{NFSU2_TR(0x4626d4);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B4626d6:{NFSU2_TR(0x4626d6);
__asm__ volatile(".byte 0xd9,0xfa":::"memory");
}
B4626d8:{NFSU2_TR(0x4626d8);
__asm__ volatile(".byte 0xdd,0xd9":::"memory");
}
B4626da:{NFSU2_TR(0x4626da);
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
B4626dd:{NFSU2_TR(0x4626dd);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4626e0:L4626e0:{c.instructions+=2;NFSU2_TR(0x4626e0);
w4(R+0,u32(0x7ed568ull));
}
B4626e5:{NFSU2_TR(0x4626e5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4626f0:L4626f0:{c.instructions+=2;NFSU2_TR(0x4626f0);
__builtin_memmove((R+0),gp(0x7ed56c),4);
}
B4626f5:{NFSU2_TR(0x4626f5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B462700:L462700:{c.instructions+=7;NFSU2_TR(0x462700);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B462701:{NFSU2_TR(0x462701);
__builtin_memmove((R+24),(R+4),4);
}
B462703:{NFSU2_TR(0x462703);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B462709:{NFSU2_TR(0x462709);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46270a:{NFSU2_TR(0x46270a);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B46270c:{NFSU2_TR(0x46270c);
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
B46270e:{NFSU2_TR(0x46270e);
if(r1(R+518)){{goto L462716;}}
}
B462710:L462710:{c.instructions+=3;NFSU2_TR(0x462710);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B462712:{NFSU2_TR(0x462712);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B462714:{NFSU2_TR(0x462714);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x462716ull));
{u32 t_=u32(r4(U+4));TAIL_DYNAMIC(t_);}
}
B462716:L462716:{c.instructions+=4;NFSU2_TR(0x462716);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B46271c:{NFSU2_TR(0x46271c);
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
B46271e:{NFSU2_TR(0x46271e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb4ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B462724:{NFSU2_TR(0x462724);
if(r1(R+518)){{goto L46272c;}}
}
B462726:L462726:{c.instructions+=3;NFSU2_TR(0x462726);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B462728:{NFSU2_TR(0x462728);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46272a:{NFSU2_TR(0x46272a);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46272cull));
{u32 t_=u32(r4(U+4));TAIL_DYNAMIC(t_);}
}
B46272c:L46272c:{c.instructions+=4;NFSU2_TR(0x46272c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B462732:{NFSU2_TR(0x462732);
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
B462734:{NFSU2_TR(0x462734);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46273a:{NFSU2_TR(0x46273a);
if(r1(R+518)){{goto L462742;}}
}
B46273c:L46273c:{c.instructions+=3;NFSU2_TR(0x46273c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B46273e:{NFSU2_TR(0x46273e);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B462740:{NFSU2_TR(0x462740);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x462742ull));
{u32 t_=u32(r4(U+4));TAIL_DYNAMIC(t_);}
}
B462742:L462742:{c.instructions+=4;NFSU2_TR(0x462742);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B462748:{NFSU2_TR(0x462748);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B462749:{NFSU2_TR(0x462749);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B46274a:{NFSU2_TR(0x46274a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B462750:L462750:{c.instructions+=2;NFSU2_TR(0x462750);
w4(R+0,u32(0x7ed578ull));
}
B462755:{NFSU2_TR(0x462755);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B462760:L462760:{c.instructions+=2;NFSU2_TR(0x462760);
__builtin_memmove((R+0),gp(0x7ed57c),4);
}
B462765:{NFSU2_TR(0x462765);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B462770:L462770:{c.instructions+=3;NFSU2_TR(0x462770);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B462771:{NFSU2_TR(0x462771);
__builtin_memmove((R+24),(R+4),4);
}
B462773:{NFSU2_TR(0x462773);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x462778ull));
TAIL_STATIC(0x45dd60u,45d);
}
B462778:L462778:{c.instructions+=4;NFSU2_TR(0x462778);
u8 U[4];
w4(U+0,u32(0x78a2e4ull));
s4(u32(r4(R+24)),r4(U+0));
}
B46277e:{NFSU2_TR(0x46277e);
__builtin_memmove((R+0),(R+24),4);
}
B462780:{NFSU2_TR(0x462780);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B462781:{NFSU2_TR(0x462781);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B462790:L462790:{c.instructions+=2;NFSU2_TR(0x462790);
w4(R+0,u32(0x7ed588ull));
}
B462795:{NFSU2_TR(0x462795);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4627a0:L4627a0:{c.instructions+=2;NFSU2_TR(0x4627a0);
__builtin_memmove((R+0),gp(0x7ed58c),4);
}
B4627a5:{NFSU2_TR(0x4627a5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4627b0:L4627b0:{c.instructions+=2;NFSU2_TR(0x4627b0);
w4(R+0,u32(0x7ed598ull));
}
B4627b5:{NFSU2_TR(0x4627b5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4627c0:L4627c0:{c.instructions+=2;NFSU2_TR(0x4627c0);
__builtin_memmove((R+0),gp(0x7ed59c),4);
}
B4627c5:{NFSU2_TR(0x4627c5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4627d0:L4627d0:{c.instructions+=3;NFSU2_TR(0x4627d0);
__builtin_memmove((R+0),gp(0x7ec840),4);
}
B4627d5:{NFSU2_TR(0x4627d5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4627d6:{NFSU2_TR(0x4627d6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4627dbull));
TAIL_STATIC(0x43e910u,43e);
}
B4627db:L4627db:{c.instructions+=3;NFSU2_TR(0x4627db);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4627de:{NFSU2_TR(0x4627de);
u8 U[4];
w1(R+523,sborrow<u32>(r4(R+0),u32(0x4d8ull)));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x4d8ull))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B4627e3:{NFSU2_TR(0x4627e3);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L46280d;}}
}
B4627e5:L4627e5:{c.instructions+=6;NFSU2_TR(0x4627e5);
__builtin_memmove((R+4),gp(0x7ec840),4);
}
B4627eb:{NFSU2_TR(0x4627eb);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x7ull))));
}
B4627ee:{NFSU2_TR(0x4627ee);
w4(R+4,u32(u32(r4(R+4))|u32(u32(0x1000ull))));
}
B4627f4:{NFSU2_TR(0x4627f4);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4627f5:{NFSU2_TR(0x4627f5);
u8 U[4];
w4(U+0,u32(0xd8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4627fa:{NFSU2_TR(0x4627fa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4627ffull));
TAIL_STATIC(0x440820u,440);
}
B4627ff:L4627ff:{c.instructions+=3;NFSU2_TR(0x4627ff);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B462802:{NFSU2_TR(0x462802);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B462804:{NFSU2_TR(0x462804);
if(r1(R+518)){{goto L46280d;}}
}
B462806:L462806:{c.instructions+=2;NFSU2_TR(0x462806);
__builtin_memmove((R+4),(R+0),4);
}
B462808:{NFSU2_TR(0x462808);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x462770u);}goto L462770;}
}
B46280d:L46280d:{c.instructions+=2;NFSU2_TR(0x46280d);
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
B46280f:{NFSU2_TR(0x46280f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B462810:L462810:{c.instructions+=22;NFSU2_TR(0x462810);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B462812:{NFSU2_TR(0x462812);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B462818:{NFSU2_TR(0x462818);
u8 U[4];
w4(U+0,u32(0x772486ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46281d:{NFSU2_TR(0x46281d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46281e:{NFSU2_TR(0x46281e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B462825:{NFSU2_TR(0x462825);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x14ull))));
}
B462828:{NFSU2_TR(0x462828);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B462829:{NFSU2_TR(0x462829);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46282a:{NFSU2_TR(0x46282a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46282b:{NFSU2_TR(0x46282b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46282c:{NFSU2_TR(0x46282c);
__builtin_memmove((R+28),(R+4),4);
}
B46282e:{NFSU2_TR(0x46282e);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B462831:{NFSU2_TR(0x462831);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B462834:{NFSU2_TR(0x462834);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B462837:{NFSU2_TR(0x462837);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B462839:{NFSU2_TR(0x462839);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B46283b:{NFSU2_TR(0x46283b);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46283c:{NFSU2_TR(0x46283c);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xc0ull))));
__builtin_memmove((R+24),(U+0),4);
}
B462842:{NFSU2_TR(0x462842);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B462843:{NFSU2_TR(0x462843);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B462844:{NFSU2_TR(0x462844);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B462845:{NFSU2_TR(0x462845);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46284aull));
TAIL_STATIC(0x439f40u,439);
}
B46284a:L46284a:{c.instructions+=5;NFSU2_TR(0x46284a);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B462850:{NFSU2_TR(0x462850);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B462852:{NFSU2_TR(0x462852);
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
B462855:{NFSU2_TR(0x462855);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B462856:{NFSU2_TR(0x462856);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x462859ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B462859:L462859:{c.instructions+=5;NFSU2_TR(0x462859);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B46285f:{NFSU2_TR(0x46285f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B462861:{NFSU2_TR(0x462861);
u8 U[4];
w4(U+0,u32(0x4e20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B462866:{NFSU2_TR(0x462866);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B462867:{NFSU2_TR(0x462867);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46286aull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B46286a:L46286a:{c.instructions+=2;NFSU2_TR(0x46286a);
u8 U[2];
__builtin_memmove((U+0),gp(0x89e7e1),1);
w1(U+1,u8(u32(r1(U+0))-u32(r1(R+12))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B462870:{NFSU2_TR(0x462870);
if(r1(R+518)){{goto L462958;}}
}
B462876:L462876:{c.instructions+=2;NFSU2_TR(0x462876);
u8 U[8];
__builtin_memmove((U+0),gp(0x850078),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B46287d:{NFSU2_TR(0x46287d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L46288c;}}
}
B46287f:L46287f:{c.instructions+=2;NFSU2_TR(0x46287f);
u8 U[8];
__builtin_memmove((U+0),gp(0x83aab4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x8ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B462886:{NFSU2_TR(0x462886);
if(r1(R+518)){{goto L462958;}}
}
B46288c:L46288c:{c.instructions+=3;NFSU2_TR(0x46288c);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B462892:{NFSU2_TR(0x462892);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B462894:{NFSU2_TR(0x462894);
if(r1(R+518)){{goto L4628c3;}}
}
B462896:L462896:{c.instructions+=3;NFSU2_TR(0x462896);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B462898:{NFSU2_TR(0x462898);
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
B46289a:{NFSU2_TR(0x46289a);
if(r1(R+518)){{goto L4628a1;}}
}
B46289c:L46289c:{c.instructions+=1;NFSU2_TR(0x46289c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4628a1ull));
TAIL_STATIC(0x735550u,735);
}
B4628a1:L4628a1:{c.instructions+=3;NFSU2_TR(0x4628a1);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B4628a5:{NFSU2_TR(0x4628a5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4628a6:{NFSU2_TR(0x4628a6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4628abull));
TAIL_STATIC(0x734df0u,734);
}
B4628ab:L4628ab:{c.instructions+=2;NFSU2_TR(0x4628ab);
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
B4628ae:{NFSU2_TR(0x4628ae);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4628b3ull));
TAIL_STATIC(0x734e40u,734);
}
B4628b3:L4628b3:{c.instructions+=5;NFSU2_TR(0x4628b3);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4628b7:{NFSU2_TR(0x4628b7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B4628b9:{NFSU2_TR(0x4628b9);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4628ba:{NFSU2_TR(0x4628ba);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4628bb:{NFSU2_TR(0x4628bb);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4628beull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4628be:L4628be:{c.instructions+=1;NFSU2_TR(0x4628be);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4628c3ull));
TAIL_STATIC(0x734e60u,734);
}
B4628c3:L4628c3:{c.instructions+=3;NFSU2_TR(0x4628c3);
u8 U[4];
w4(U+0,u32(0x18ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4628c5:{NFSU2_TR(0x4628c5);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xdcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4628cb:{NFSU2_TR(0x4628cb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4628d0ull));
TAIL_STATIC(0x457e20u,457);
}
B4628d0:L4628d0:{c.instructions+=6;NFSU2_TR(0x4628d0);
__builtin_memmove((R+24),(R+0),4);
}
B4628d2:{NFSU2_TR(0x4628d2);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4628d5:{NFSU2_TR(0x4628d5);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4628d9:{NFSU2_TR(0x4628d9);
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
B4628db:{NFSU2_TR(0x4628db);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4628df:{NFSU2_TR(0x4628df);
if(r1(R+518)){{goto L46293d;}}
}
B4628e1:L4628e1:{c.instructions+=10;NFSU2_TR(0x4628e1);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4628e4:{NFSU2_TR(0x4628e4);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4628e5:{NFSU2_TR(0x4628e5);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4628e6:{NFSU2_TR(0x4628e6);
u8 U[4];
w4(U+0,u32(0x82c548ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4628eb:{NFSU2_TR(0x4628eb);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
s4(u32(r4(R+20)),r4(U+0));
}
B4628ee:{NFSU2_TR(0x4628ee);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4628f1:{NFSU2_TR(0x4628f1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4628f4:{NFSU2_TR(0x4628f4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4628f7:{NFSU2_TR(0x4628f7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4628fa:{NFSU2_TR(0x4628fa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4628ffull));
TAIL_STATIC(0x7358c0u,735);
}
B4628ff:L4628ff:{c.instructions+=3;NFSU2_TR(0x4628ff);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B462902:{NFSU2_TR(0x462902);
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
B462904:{NFSU2_TR(0x462904);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L46293f;}}
}
B462906:L462906:{c.instructions+=3;NFSU2_TR(0x462906);
u8 U[4];
w4(U+0,u32(0x7edd68ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46290b:{NFSU2_TR(0x46290b);
w4(R+4,u32(0x82c548ull));
}
B462910:{NFSU2_TR(0x462910);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x462915ull));
TAIL_STATIC(0x735840u,735);
}
B462915:L462915:{c.instructions+=4;NFSU2_TR(0x462915);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B462916:{NFSU2_TR(0x462916);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B462917:{NFSU2_TR(0x462917);
u8 U[4];
w4(U+0,u32(0x82c548ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46291c:{NFSU2_TR(0x46291c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x462921ull));
TAIL_STATIC(0x7358c0u,735);
}
B462921:L462921:{c.instructions+=10;NFSU2_TR(0x462921);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B462924:{NFSU2_TR(0x462924);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xdcull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46292a:{NFSU2_TR(0x46292a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B46292b:{NFSU2_TR(0x46292b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B46292c:{NFSU2_TR(0x46292c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B46292d:{NFSU2_TR(0x46292d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B46292e:{NFSU2_TR(0x46292e);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B462932:{NFSU2_TR(0x462932);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B462939:{NFSU2_TR(0x462939);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x20ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x20ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x20ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B46293c:{NFSU2_TR(0x46293c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B46293d:L46293d:{c.instructions+=1;NFSU2_TR(0x46293d);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B46293f:L46293f:{c.instructions+=9;NFSU2_TR(0x46293f);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xdcull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B462945:{NFSU2_TR(0x462945);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B462946:{NFSU2_TR(0x462946);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B462947:{NFSU2_TR(0x462947);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B462948:{NFSU2_TR(0x462948);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B462949:{NFSU2_TR(0x462949);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B46294d:{NFSU2_TR(0x46294d);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B462954:{NFSU2_TR(0x462954);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x20ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x20ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x20ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B462957:{NFSU2_TR(0x462957);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B462958:L462958:{c.instructions+=3;NFSU2_TR(0x462958);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B46295e:{NFSU2_TR(0x46295e);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B462960:{NFSU2_TR(0x462960);
if(r1(R+518)){{goto L46298f;}}
}
B462962:L462962:{c.instructions+=3;NFSU2_TR(0x462962);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B462964:{NFSU2_TR(0x462964);
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
B462966:{NFSU2_TR(0x462966);
if(r1(R+518)){{goto L46296d;}}
}
B462968:L462968:{c.instructions+=1;NFSU2_TR(0x462968);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46296dull));
TAIL_STATIC(0x735550u,735);
}
B46296d:L46296d:{c.instructions+=3;NFSU2_TR(0x46296d);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B462971:{NFSU2_TR(0x462971);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B462972:{NFSU2_TR(0x462972);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x462977ull));
TAIL_STATIC(0x734df0u,734);
}
B462977:L462977:{c.instructions+=2;NFSU2_TR(0x462977);
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
B46297a:{NFSU2_TR(0x46297a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46297full));
TAIL_STATIC(0x734e40u,734);
}
B46297f:L46297f:{c.instructions+=5;NFSU2_TR(0x46297f);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B462983:{NFSU2_TR(0x462983);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B462985:{NFSU2_TR(0x462985);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B462986:{NFSU2_TR(0x462986);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B462987:{NFSU2_TR(0x462987);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46298aull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B46298a:L46298a:{c.instructions+=1;NFSU2_TR(0x46298a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46298full));
TAIL_STATIC(0x734e60u,734);
}
B46298f:L46298f:{c.instructions+=4;NFSU2_TR(0x46298f);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B462993:{NFSU2_TR(0x462993);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B462994:{NFSU2_TR(0x462994);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xd8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46299a:{NFSU2_TR(0x46299a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46299full));
TAIL_STATIC(0x734df0u,734);
}
B46299f:L46299f:{c.instructions+=2;NFSU2_TR(0x46299f);
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
B4629a2:{NFSU2_TR(0x4629a2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4629a7ull));
TAIL_STATIC(0x734e40u,734);
}
B4629a7:L4629a7:{c.instructions+=9;NFSU2_TR(0x4629a7);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4629ab:{NFSU2_TR(0x4629ab);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B4629af:{NFSU2_TR(0x4629af);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4629b0:{NFSU2_TR(0x4629b0);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4629b4:{NFSU2_TR(0x4629b4);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4629b8:{NFSU2_TR(0x4629b8);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4629bc:{NFSU2_TR(0x4629bc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B4629be:{NFSU2_TR(0x4629be);
u8 U[4];
w4(U+0,u32(0x18ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4629c0:{NFSU2_TR(0x4629c0);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4629c2ull));
{u32 t_=u32(r4(U+4));TAIL_DYNAMIC(t_);}
}
B4629c2:L4629c2:{c.instructions+=2;NFSU2_TR(0x4629c2);
__builtin_memmove((R+24),(R+0),4);
}
B4629c4:{NFSU2_TR(0x4629c4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4629c9ull));
TAIL_STATIC(0x734e60u,734);
}
B4629c9:L4629c9:{c.instructions+=4;NFSU2_TR(0x4629c9);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4629cd:{NFSU2_TR(0x4629cd);
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
B4629cf:{NFSU2_TR(0x4629cf);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4629d7:{NFSU2_TR(0x4629d7);
if(r1(R+518)){{goto L462a22;}}
}
B4629d9:L4629d9:{c.instructions+=10;NFSU2_TR(0x4629d9);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4629dc:{NFSU2_TR(0x4629dc);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4629dd:{NFSU2_TR(0x4629dd);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4629de:{NFSU2_TR(0x4629de);
u8 U[4];
w4(U+0,u32(0x82c510ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4629e3:{NFSU2_TR(0x4629e3);
u8 U[4];
w4(U+0,u32(0x1ull));
s4(u32(r4(R+20)),r4(U+0));
}
B4629ea:{NFSU2_TR(0x4629ea);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4629ed:{NFSU2_TR(0x4629ed);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4629f0:{NFSU2_TR(0x4629f0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4629f3:{NFSU2_TR(0x4629f3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4629f6:{NFSU2_TR(0x4629f6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4629fbull));
TAIL_STATIC(0x7358c0u,735);
}
B4629fb:L4629fb:{c.instructions+=3;NFSU2_TR(0x4629fb);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4629fe:{NFSU2_TR(0x4629fe);
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
B462a00:{NFSU2_TR(0x462a00);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L462a24;}}
}
B462a02:L462a02:{c.instructions+=3;NFSU2_TR(0x462a02);
u8 U[4];
w4(U+0,u32(0x7edd60ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B462a07:{NFSU2_TR(0x462a07);
w4(R+4,u32(0x82c510ull));
}
B462a0c:{NFSU2_TR(0x462a0c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x462a11ull));
TAIL_STATIC(0x735840u,735);
}
B462a11:L462a11:{c.instructions+=4;NFSU2_TR(0x462a11);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B462a12:{NFSU2_TR(0x462a12);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B462a13:{NFSU2_TR(0x462a13);
u8 U[4];
w4(U+0,u32(0x82c510ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B462a18:{NFSU2_TR(0x462a18);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x462a1dull));
TAIL_STATIC(0x7358c0u,735);
}
B462a1d:L462a1d:{c.instructions+=2;NFSU2_TR(0x462a1d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B462a20:{NFSU2_TR(0x462a20);
{goto L462a24;}
}
B462a22:L462a22:{c.instructions+=1;NFSU2_TR(0x462a22);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B462a24:L462a24:{c.instructions+=9;NFSU2_TR(0x462a24);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B462a28:{NFSU2_TR(0x462a28);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xd8ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B462a2e:{NFSU2_TR(0x462a2e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B462a2f:{NFSU2_TR(0x462a2f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B462a30:{NFSU2_TR(0x462a30);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B462a31:{NFSU2_TR(0x462a31);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B462a32:{NFSU2_TR(0x462a32);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B462a39:{NFSU2_TR(0x462a39);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x20ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x20ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x20ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B462a3c:{NFSU2_TR(0x462a3c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B462a40:L462a40:{c.instructions+=7;NFSU2_TR(0x462a40);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B462a41:{NFSU2_TR(0x462a41);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B462a42:{NFSU2_TR(0x462a42);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B462a43:{NFSU2_TR(0x462a43);
__builtin_memmove((R+28),(R+4),4);
}
B462a45:{NFSU2_TR(0x462a45);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B462a4b:{NFSU2_TR(0x462a4b);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B462a4d:{NFSU2_TR(0x462a4d);
if(r1(R+518)){{goto L462a7d;}}
}
B462a4f:L462a4f:{c.instructions+=3;NFSU2_TR(0x462a4f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B462a51:{NFSU2_TR(0x462a51);
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
B462a53:{NFSU2_TR(0x462a53);
if(r1(R+518)){{goto L462a5a;}}
}
B462a55:L462a55:{c.instructions+=1;NFSU2_TR(0x462a55);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x462a5aull));
TAIL_STATIC(0x735550u,735);
}
B462a5a:L462a5a:{c.instructions+=3;NFSU2_TR(0x462a5a);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B462a5e:{NFSU2_TR(0x462a5e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B462a5f:{NFSU2_TR(0x462a5f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x462a64ull));
TAIL_STATIC(0x734df0u,734);
}
B462a64:L462a64:{c.instructions+=2;NFSU2_TR(0x462a64);
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
B462a67:{NFSU2_TR(0x462a67);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x462a6cull));
TAIL_STATIC(0x734e40u,734);
}
B462a6c:L462a6c:{c.instructions+=5;NFSU2_TR(0x462a6c);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B462a70:{NFSU2_TR(0x462a70);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B462a72:{NFSU2_TR(0x462a72);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B462a74:{NFSU2_TR(0x462a74);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B462a75:{NFSU2_TR(0x462a75);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x462a78ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B462a78:L462a78:{c.instructions+=1;NFSU2_TR(0x462a78);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x462a7dull));
TAIL_STATIC(0x734e60u,734);
}
B462a7d:L462a7d:{c.instructions+=4;NFSU2_TR(0x462a7d);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B462a83:{NFSU2_TR(0x462a83);
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
B462a85:{NFSU2_TR(0x462a85);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xd8ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B462a8f:{NFSU2_TR(0x462a8f);
if(r1(R+518)){{goto L462abf;}}
}
B462a91:L462a91:{c.instructions+=3;NFSU2_TR(0x462a91);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B462a93:{NFSU2_TR(0x462a93);
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
B462a95:{NFSU2_TR(0x462a95);
if(r1(R+518)){{goto L462a9c;}}
}
B462a97:L462a97:{c.instructions+=1;NFSU2_TR(0x462a97);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x462a9cull));
TAIL_STATIC(0x735550u,735);
}
B462a9c:L462a9c:{c.instructions+=3;NFSU2_TR(0x462a9c);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B462aa0:{NFSU2_TR(0x462aa0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B462aa1:{NFSU2_TR(0x462aa1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x462aa6ull));
TAIL_STATIC(0x734df0u,734);
}
B462aa6:L462aa6:{c.instructions+=2;NFSU2_TR(0x462aa6);
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
B462aa9:{NFSU2_TR(0x462aa9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x462aaeull));
TAIL_STATIC(0x734e40u,734);
}
B462aae:L462aae:{c.instructions+=5;NFSU2_TR(0x462aae);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B462ab2:{NFSU2_TR(0x462ab2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B462ab4:{NFSU2_TR(0x462ab4);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B462ab6:{NFSU2_TR(0x462ab6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B462ab7:{NFSU2_TR(0x462ab7);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x462abaull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B462aba:L462aba:{c.instructions+=1;NFSU2_TR(0x462aba);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x462abfull));
TAIL_STATIC(0x734e60u,734);
}
B462abf:L462abf:{c.instructions+=5;NFSU2_TR(0x462abf);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B462ac5:{NFSU2_TR(0x462ac5);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xdcull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B462acf:{NFSU2_TR(0x462acf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B462ad1:{NFSU2_TR(0x462ad1);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B462ad3:{NFSU2_TR(0x462ad3);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x462ad6ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B462ad6:L462ad6:{c.instructions+=4;NFSU2_TR(0x462ad6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B462ad7:{NFSU2_TR(0x462ad7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B462ad8:{NFSU2_TR(0x462ad8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B462ad9:{NFSU2_TR(0x462ad9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B462ae0:L462ae0:{c.instructions+=7;NFSU2_TR(0x462ae0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B462ae1:{NFSU2_TR(0x462ae1);
__builtin_memmove((R+24),(R+4),4);
}
B462ae3:{NFSU2_TR(0x462ae3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B462ae6:{NFSU2_TR(0x462ae6);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B462ae9:{NFSU2_TR(0x462ae9);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B462aeb:{NFSU2_TR(0x462aeb);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B462aec:{NFSU2_TR(0x462aec);
if(r1(R+518)){{goto L462b5d;}}
}
B462aee:L462aee:{c.instructions+=9;NFSU2_TR(0x462aee);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B462af1:{NFSU2_TR(0x462af1);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B462af4:{NFSU2_TR(0x462af4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B462af6:{NFSU2_TR(0x462af6);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B462af8:{NFSU2_TR(0x462af8);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc0ull))));
__builtin_memmove((R+28),(U+0),4);
}
B462afe:{NFSU2_TR(0x462afe);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B462aff:{NFSU2_TR(0x462aff);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B462b00:{NFSU2_TR(0x462b00);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B462b01:{NFSU2_TR(0x462b01);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x462b06ull));
TAIL_STATIC(0x439f40u,439);
}
B462b06:L462b06:{c.instructions+=27;NFSU2_TR(0x462b06);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B462b08:{NFSU2_TR(0x462b08);
{u32 ea_=u32(r4(R+24)+u32(176u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B462b0e:{NFSU2_TR(0x462b0e);
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
B462b11:{NFSU2_TR(0x462b11);
{u32 ea_=u32(r4(R+28)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B462b14:{NFSU2_TR(0x462b14);
{u32 ea_=u32(r4(R+24)+u32(180u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B462b1a:{NFSU2_TR(0x462b1a);
{u32 ea_=u32(r4(R+28)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B462b1d:{NFSU2_TR(0x462b1d);
{u32 ea_=u32(r4(R+24)+u32(184u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B462b23:{NFSU2_TR(0x462b23);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B462b25:{NFSU2_TR(0x462b25);
__asm__ volatile(".byte 0xd8,0xca":::"memory");
}
B462b27:{NFSU2_TR(0x462b27);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B462b29:{NFSU2_TR(0x462b29);
__asm__ volatile(".byte 0xd8,0xca":::"memory");
}
B462b2b:{NFSU2_TR(0x462b2b);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B462b2d:{NFSU2_TR(0x462b2d);
__asm__ volatile(".byte 0xd9,0xc3":::"memory");
}
B462b2f:{NFSU2_TR(0x462b2f);
__asm__ volatile(".byte 0xd8,0xcc":::"memory");
}
B462b31:{NFSU2_TR(0x462b31);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B462b33:{NFSU2_TR(0x462b33);
__asm__ volatile(".byte 0xd9,0xfa":::"memory");
}
B462b35:{NFSU2_TR(0x462b35);
__asm__ volatile(".byte 0xdd,0xdb":::"memory");
}
B462b37:{NFSU2_TR(0x462b37);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B462b39:{NFSU2_TR(0x462b39);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B462b3b:{NFSU2_TR(0x462b3b);
{u32 ea_=u32(r4(R+24)+u32(208u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B462b41:{NFSU2_TR(0x462b41);
{u32 ea_=u32(r4(R+28)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B462b44:{NFSU2_TR(0x462b44);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B462b46:{NFSU2_TR(0x462b46);
{u32 ea_=u32(r4(R+28)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B462b49:{NFSU2_TR(0x462b49);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B462b4f:{NFSU2_TR(0x462b4f);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B462b51:{NFSU2_TR(0x462b51);
{u32 ea_=u32(r4(R+24)+u32(180u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B462b57:{NFSU2_TR(0x462b57);
{u32 ea_=u32(r4(R+24)+u32(184u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B462b5d:L462b5d:{c.instructions+=3;NFSU2_TR(0x462b5d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B462b5e:{NFSU2_TR(0x462b5e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B462b5f:{NFSU2_TR(0x462b5f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B462b70:L462b70:{c.instructions+=14;NFSU2_TR(0x462b70);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B462b76:{NFSU2_TR(0x462b76);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B462b78:{NFSU2_TR(0x462b78);
u8 U[4];
w4(U+0,u32(0x7724a6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B462b7d:{NFSU2_TR(0x462b7d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B462b7e:{NFSU2_TR(0x462b7e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B462b85:{NFSU2_TR(0x462b85);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x8ull))));
}
B462b88:{NFSU2_TR(0x462b88);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B462b89:{NFSU2_TR(0x462b89);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B462b8a:{NFSU2_TR(0x462b8a);
__builtin_memmove((R+24),(R+4),4);
}
B462b8c:{NFSU2_TR(0x462b8c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B462b8f:{NFSU2_TR(0x462b8f);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B462b92:{NFSU2_TR(0x462b92);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B462b94:{NFSU2_TR(0x462b94);
u8 U[2];
__builtin_memmove((U+0),(R+12),1);
w1(U+1,u8(u32(r1(R+0))-u32(r1(U+0))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B462b96:{NFSU2_TR(0x462b96);
if(r1(R+518)){{goto L462f61;}}
}
B462b9c:L462b9c:{c.instructions+=6;NFSU2_TR(0x462b9c);
{u32 ea_=u32(r4(R+24)+u32(208u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B462ba2:{NFSU2_TR(0x462ba2);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B462ba3:{NFSU2_TR(0x462ba3);
{u32 ea_=u32(u32(7894412u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B462ba9:{NFSU2_TR(0x462ba9);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B462bab:{NFSU2_TR(0x462bab);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B462bae:{NFSU2_TR(0x462bae);
if(r1(R+514)){{goto L462c2f;}}
}
B462bb0:L462bb0:{c.instructions+=3;NFSU2_TR(0x462bb0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B462bb6:{NFSU2_TR(0x462bb6);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B462bb8:{NFSU2_TR(0x462bb8);
if(r1(R+518)){{goto L462be7;}}
}
B462bba:L462bba:{c.instructions+=3;NFSU2_TR(0x462bba);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+4),(U+0),4);
}
B462bbc:{NFSU2_TR(0x462bbc);
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
B462bbe:{NFSU2_TR(0x462bbe);
if(r1(R+518)){{goto L462bc5;}}
}
B462bc0:L462bc0:{c.instructions+=1;NFSU2_TR(0x462bc0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x462bc5ull));
TAIL_STATIC(0x735550u,735);
}
B462bc5:L462bc5:{c.instructions+=3;NFSU2_TR(0x462bc5);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B462bc9:{NFSU2_TR(0x462bc9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B462bca:{NFSU2_TR(0x462bca);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x462bcfull));
TAIL_STATIC(0x734df0u,734);
}
B462bcf:L462bcf:{c.instructions+=2;NFSU2_TR(0x462bcf);
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
B462bd2:{NFSU2_TR(0x462bd2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x462bd7ull));
TAIL_STATIC(0x734e40u,734);
}
B462bd7:L462bd7:{c.instructions+=5;NFSU2_TR(0x462bd7);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B462bdb:{NFSU2_TR(0x462bdb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B462bdd:{NFSU2_TR(0x462bdd);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B462bde:{NFSU2_TR(0x462bde);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B462bdf:{NFSU2_TR(0x462bdf);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x462be2ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B462be2:L462be2:{c.instructions+=1;NFSU2_TR(0x462be2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x462be7ull));
TAIL_STATIC(0x734e60u,734);
}
B462be7:L462be7:{c.instructions+=4;NFSU2_TR(0x462be7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B462bed:{NFSU2_TR(0x462bed);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B462bef:{NFSU2_TR(0x462bef);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xdcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B462bf5:{NFSU2_TR(0x462bf5);
if(r1(R+518)){{goto L462c24;}}
}
B462bf7:L462bf7:{c.instructions+=3;NFSU2_TR(0x462bf7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+4),(U+0),4);
}
B462bf9:{NFSU2_TR(0x462bf9);
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
B462bfb:{NFSU2_TR(0x462bfb);
if(r1(R+518)){{goto L462c02;}}
}
B462bfd:L462bfd:{c.instructions+=1;NFSU2_TR(0x462bfd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x462c02ull));
TAIL_STATIC(0x735550u,735);
}
B462c02:L462c02:{c.instructions+=3;NFSU2_TR(0x462c02);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B462c06:{NFSU2_TR(0x462c06);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B462c07:{NFSU2_TR(0x462c07);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x462c0cull));
TAIL_STATIC(0x734df0u,734);
}
B462c0c:L462c0c:{c.instructions+=2;NFSU2_TR(0x462c0c);
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
B462c0f:{NFSU2_TR(0x462c0f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x462c14ull));
TAIL_STATIC(0x734e40u,734);
}
B462c14:L462c14:{c.instructions+=5;NFSU2_TR(0x462c14);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B462c18:{NFSU2_TR(0x462c18);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B462c1a:{NFSU2_TR(0x462c1a);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B462c1b:{NFSU2_TR(0x462c1b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B462c1c:{NFSU2_TR(0x462c1c);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x462c1full));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B462c1f:L462c1f:{c.instructions+=1;NFSU2_TR(0x462c1f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x462c24ull));
TAIL_STATIC(0x734e60u,734);
}
B462c24:L462c24:{c.instructions+=2;NFSU2_TR(0x462c24);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B462c2a:{NFSU2_TR(0x462c2a);
{goto L462d51;}
}
B462c2f:L462c2f:{c.instructions+=2;NFSU2_TR(0x462c2f);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B462c35:{NFSU2_TR(0x462c35);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L462d51;}}
}
B462c3b:L462c3b:{c.instructions+=2;NFSU2_TR(0x462c3b);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B462c41:{NFSU2_TR(0x462c41);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L462d51;}}
}
B462c47:L462c47:{c.instructions+=3;NFSU2_TR(0x462c47);
u8 U[2];
__builtin_memmove((U+0),gp(0x89e7e1),1);
w1(U+1,u8(u32(r1(U+0))-u32(r1(R+12))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B462c4d:{NFSU2_TR(0x462c4d);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B462c4e:{NFSU2_TR(0x462c4e);
if(r1(R+518)){{goto L462cd5;}}
}
B462c54:L462c54:{c.instructions+=2;NFSU2_TR(0x462c54);
w4(R+4,u32(0x83a9d0ull));
}
B462c59:{NFSU2_TR(0x462c59);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x462c5eull));
TAIL_STATIC(0x457ba0u,457);
}
B462c5e:L462c5e:{c.instructions+=2;NFSU2_TR(0x462c5e);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B462c60:{NFSU2_TR(0x462c60);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L462cd5;}}
}
B462c62:L462c62:{c.instructions+=3;NFSU2_TR(0x462c62);
u8 U[4];
w4(U+0,u32(0x18ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B462c64:{NFSU2_TR(0x462c64);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xdcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B462c6a:{NFSU2_TR(0x462c6a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x462c6full));
TAIL_STATIC(0x457e20u,457);
}
B462c6f:L462c6f:{c.instructions+=6;NFSU2_TR(0x462c6f);
__builtin_memmove((R+28),(R+0),4);
}
B462c71:{NFSU2_TR(0x462c71);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B462c74:{NFSU2_TR(0x462c74);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B462c78:{NFSU2_TR(0x462c78);
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
B462c7a:{NFSU2_TR(0x462c7a);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B462c7e:{NFSU2_TR(0x462c7e);
if(r1(R+518)){{goto L462ccb;}}
}
B462c80:L462c80:{c.instructions+=10;NFSU2_TR(0x462c80);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B462c83:{NFSU2_TR(0x462c83);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B462c84:{NFSU2_TR(0x462c84);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B462c85:{NFSU2_TR(0x462c85);
u8 U[4];
w4(U+0,u32(0x82c548ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B462c8a:{NFSU2_TR(0x462c8a);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
s4(u32(r4(R+20)),r4(U+0));
}
B462c8d:{NFSU2_TR(0x462c8d);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B462c90:{NFSU2_TR(0x462c90);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B462c93:{NFSU2_TR(0x462c93);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B462c96:{NFSU2_TR(0x462c96);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B462c99:{NFSU2_TR(0x462c99);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x462c9eull));
TAIL_STATIC(0x7358c0u,735);
}
B462c9e:L462c9e:{c.instructions+=3;NFSU2_TR(0x462c9e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B462ca1:{NFSU2_TR(0x462ca1);
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
B462ca3:{NFSU2_TR(0x462ca3);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L462ccd;}}
}
B462ca5:L462ca5:{c.instructions+=3;NFSU2_TR(0x462ca5);
u8 U[4];
w4(U+0,u32(0x7edd68ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B462caa:{NFSU2_TR(0x462caa);
w4(R+4,u32(0x82c548ull));
}
B462caf:{NFSU2_TR(0x462caf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x462cb4ull));
TAIL_STATIC(0x735840u,735);
}
B462cb4:L462cb4:{c.instructions+=4;NFSU2_TR(0x462cb4);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B462cb5:{NFSU2_TR(0x462cb5);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B462cb6:{NFSU2_TR(0x462cb6);
u8 U[4];
w4(U+0,u32(0x82c548ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B462cbb:{NFSU2_TR(0x462cbb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x462cc0ull));
TAIL_STATIC(0x7358c0u,735);
}
B462cc0:L462cc0:{c.instructions+=3;NFSU2_TR(0x462cc0);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B462cc3:{NFSU2_TR(0x462cc3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xdcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B462cc9:{NFSU2_TR(0x462cc9);
{goto L462d48;}
}
B462ccb:L462ccb:{c.instructions+=1;NFSU2_TR(0x462ccb);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B462ccd:L462ccd:{c.instructions+=2;NFSU2_TR(0x462ccd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xdcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B462cd3:{NFSU2_TR(0x462cd3);
{goto L462d48;}
}
B462cd5:L462cd5:{c.instructions+=3;NFSU2_TR(0x462cd5);
u8 U[4];
w4(U+0,u32(0x18ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B462cd7:{NFSU2_TR(0x462cd7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B462cdd:{NFSU2_TR(0x462cdd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x462ce2ull));
TAIL_STATIC(0x457e20u,457);
}
B462ce2:L462ce2:{c.instructions+=6;NFSU2_TR(0x462ce2);
__builtin_memmove((R+28),(R+0),4);
}
B462ce4:{NFSU2_TR(0x462ce4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B462ce7:{NFSU2_TR(0x462ce7);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B462ceb:{NFSU2_TR(0x462ceb);
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
B462ced:{NFSU2_TR(0x462ced);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B462cf5:{NFSU2_TR(0x462cf5);
if(r1(R+518)){{goto L462d40;}}
}
B462cf7:L462cf7:{c.instructions+=10;NFSU2_TR(0x462cf7);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B462cfa:{NFSU2_TR(0x462cfa);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B462cfb:{NFSU2_TR(0x462cfb);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B462cfc:{NFSU2_TR(0x462cfc);
u8 U[4];
w4(U+0,u32(0x82c510ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B462d01:{NFSU2_TR(0x462d01);
u8 U[4];
w4(U+0,u32(0x1ull));
s4(u32(r4(R+20)),r4(U+0));
}
B462d08:{NFSU2_TR(0x462d08);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B462d0b:{NFSU2_TR(0x462d0b);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B462d0e:{NFSU2_TR(0x462d0e);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B462d11:{NFSU2_TR(0x462d11);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B462d14:{NFSU2_TR(0x462d14);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x462d19ull));
TAIL_STATIC(0x7358c0u,735);
}
B462d19:L462d19:{c.instructions+=3;NFSU2_TR(0x462d19);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B462d1c:{NFSU2_TR(0x462d1c);
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
B462d1e:{NFSU2_TR(0x462d1e);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L462d42;}}
}
B462d20:L462d20:{c.instructions+=3;NFSU2_TR(0x462d20);
u8 U[4];
w4(U+0,u32(0x7edd60ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B462d25:{NFSU2_TR(0x462d25);
w4(R+4,u32(0x82c510ull));
}
B462d2a:{NFSU2_TR(0x462d2a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x462d2full));
TAIL_STATIC(0x735840u,735);
}
B462d2f:L462d2f:{c.instructions+=4;NFSU2_TR(0x462d2f);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B462d30:{NFSU2_TR(0x462d30);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B462d31:{NFSU2_TR(0x462d31);
u8 U[4];
w4(U+0,u32(0x82c510ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B462d36:{NFSU2_TR(0x462d36);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x462d3bull));
TAIL_STATIC(0x7358c0u,735);
}
B462d3b:L462d3b:{c.instructions+=2;NFSU2_TR(0x462d3b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B462d3e:{NFSU2_TR(0x462d3e);
{goto L462d42;}
}
B462d40:L462d40:{c.instructions+=1;NFSU2_TR(0x462d40);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B462d42:L462d42:{c.instructions+=1;NFSU2_TR(0x462d42);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B462d48:L462d48:{c.instructions+=2;NFSU2_TR(0x462d48);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B462d50:{NFSU2_TR(0x462d50);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B462d51:L462d51:{c.instructions+=2;NFSU2_TR(0x462d51);
u8 U[8];
__builtin_memmove((U+0),gp(0x8900bc),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x2ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B462d58:{NFSU2_TR(0x462d58);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L462d5e;}}
}
B462d5a:L462d5a:{c.instructions+=2;NFSU2_TR(0x462d5a);
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
B462d5c:{NFSU2_TR(0x462d5c);
{goto L462d7c;}
}
B462d5e:L462d5e:{c.instructions+=3;NFSU2_TR(0x462d5e);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B462d64:{NFSU2_TR(0x462d64);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B462d65:{NFSU2_TR(0x462d65);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x462d6aull));
TAIL_STATIC(0x459ac0u,459);
}
B462d6a:L462d6a:{c.instructions+=6;NFSU2_TR(0x462d6a);
__builtin_memmove((R+8),gp(0x8900b4),4);
}
B462d70:{NFSU2_TR(0x462d70);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B462d72:{NFSU2_TR(0x462d72);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B462d75:{NFSU2_TR(0x462d75);
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
B462d77:{NFSU2_TR(0x462d77);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+4),(U+0),1);
}
B462d7a:{NFSU2_TR(0x462d7a);
__builtin_memmove((R+0),(R+4),4);
}
B462d7c:L462d7c:{c.instructions+=4;NFSU2_TR(0x462d7c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B462d82:{NFSU2_TR(0x462d82);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B462d84:{NFSU2_TR(0x462d84);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B462d85:{NFSU2_TR(0x462d85);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x462d88ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B462d88:L462d88:{c.instructions+=3;NFSU2_TR(0x462d88);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B462d8c:{NFSU2_TR(0x462d8c);
u8 U[22];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xdcull))));
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
B462d92:{NFSU2_TR(0x462d92);
if(r1(R+518)){{goto L462eae;}}
}
B462d98:L462d98:{c.instructions+=4;NFSU2_TR(0x462d98);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B462d9a:{NFSU2_TR(0x462d9a);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B462d9c:{NFSU2_TR(0x462d9c);
__builtin_memmove((R+4),(R+24),4);
}
B462d9e:{NFSU2_TR(0x462d9e);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x462da1ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B462da1:L462da1:{c.instructions+=6;NFSU2_TR(0x462da1);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B462da5:{NFSU2_TR(0x462da5);
{u32 ea_=u32(u32(7882064u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B462dab:{NFSU2_TR(0x462dab);
__builtin_memmove((R+4),(R+0),4);
}
B462dad:{NFSU2_TR(0x462dad);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B462daf:{NFSU2_TR(0x462daf);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B462db2:{NFSU2_TR(0x462db2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L462dbc;}}
}
B462db4:L462db4:{c.instructions+=2;NFSU2_TR(0x462db4);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B462db6:{NFSU2_TR(0x462db6);
{u32 ea_=u32(u32(7882064u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B462dbc:L462dbc:{c.instructions+=2;NFSU2_TR(0x462dbc);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x4000ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4000ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B462dc2:{NFSU2_TR(0x462dc2);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L462dd2;}}
}
B462dc4:L462dc4:{c.instructions+=2;NFSU2_TR(0x462dc4);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0xc000ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xc000ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B462dca:{NFSU2_TR(0x462dca);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L462dd2;}}
}
B462dcc:L462dcc:{c.instructions+=1;NFSU2_TR(0x462dcc);
{u32 ea_=u32(u32(7881376u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B462dd2:L462dd2:{c.instructions+=2;NFSU2_TR(0x462dd2);
{u32 ea_=u32(u32(7906076u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B462dd8:{NFSU2_TR(0x462dd8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x462dddull));
TAIL_STATIC(0x75bed4u,75b);
}
B462ddd:L462ddd:{c.instructions+=5;NFSU2_TR(0x462ddd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B462de3:{NFSU2_TR(0x462de3);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B462de4:{NFSU2_TR(0x462de4);
u8 U[4];
w4(U+0,u32(0x5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B462de6:{NFSU2_TR(0x462de6);
__builtin_memmove((R+28),(R+0),4);
}
B462de8:{NFSU2_TR(0x462de8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x462dedull));
TAIL_STATIC(0x45e290u,45e);
}
B462ded:L462ded:{c.instructions+=8;NFSU2_TR(0x462ded);
{u32 ea_=u32(u32(7906016u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B462df3:{NFSU2_TR(0x462df3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B462df9:{NFSU2_TR(0x462df9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B462dfc:{NFSU2_TR(0x462dfc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B462dfe:{NFSU2_TR(0x462dfe);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B462e02:{NFSU2_TR(0x462e02);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B462e04:{NFSU2_TR(0x462e04);
__builtin_memmove((R+4),(R+24),4);
}
B462e06:{NFSU2_TR(0x462e06);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x462e09ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B462e09:L462e09:{c.instructions+=3;NFSU2_TR(0x462e09);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B462e0b:{NFSU2_TR(0x462e0b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B462e11:{NFSU2_TR(0x462e11);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L462e17;}}
}
B462e13:L462e13:{c.instructions+=2;NFSU2_TR(0x462e13);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B462e15:{NFSU2_TR(0x462e15);
{goto L462e23;}
}
B462e17:L462e17:{c.instructions+=2;NFSU2_TR(0x462e17);
u8 U[4];
w1(R+523,sborrow<u32>(r4(R+0),u32(0x7fffull)));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x7fffull))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B462e1c:{NFSU2_TR(0x462e1c);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L462e23;}}
}
B462e1e:L462e1e:{c.instructions+=1;NFSU2_TR(0x462e1e);
w4(R+0,u32(0x7fffull));
}
B462e23:L462e23:{c.instructions+=3;NFSU2_TR(0x462e23);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B462e27:{NFSU2_TR(0x462e27);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B462e2a:{NFSU2_TR(0x462e2a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x462e2full));
TAIL_STATIC(0x75bed4u,75b);
}
B462e2f:L462e2f:{c.instructions+=3;NFSU2_TR(0x462e2f);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B462e31:{NFSU2_TR(0x462e31);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B462e37:{NFSU2_TR(0x462e37);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L462e3d;}}
}
B462e39:L462e39:{c.instructions+=2;NFSU2_TR(0x462e39);
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
B462e3b:{NFSU2_TR(0x462e3b);
{goto L462e49;}
}
B462e3d:L462e3d:{c.instructions+=2;NFSU2_TR(0x462e3d);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0x4000ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x4000ull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0x4000ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B462e42:{NFSU2_TR(0x462e42);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L462e49;}}
}
B462e44:L462e44:{c.instructions+=1;NFSU2_TR(0x462e44);
w4(R+0,u32(0x4000ull));
}
B462e49:L462e49:{c.instructions+=5;NFSU2_TR(0x462e49);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B462e4c:{NFSU2_TR(0x462e4c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B462e4e:{NFSU2_TR(0x462e4e);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B462e50:{NFSU2_TR(0x462e50);
__builtin_memmove((R+4),(R+24),4);
}
B462e52:{NFSU2_TR(0x462e52);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x462e55ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B462e55:L462e55:{c.instructions+=3;NFSU2_TR(0x462e55);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B462e57:{NFSU2_TR(0x462e57);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B462e5d:{NFSU2_TR(0x462e5d);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L462e63;}}
}
B462e5f:L462e5f:{c.instructions+=2;NFSU2_TR(0x462e5f);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B462e61:{NFSU2_TR(0x462e61);
{goto L462e6f;}
}
B462e63:L462e63:{c.instructions+=2;NFSU2_TR(0x462e63);
u8 U[4];
w1(R+523,sborrow<u32>(r4(R+0),u32(0xffffull)));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xffffull))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B462e68:{NFSU2_TR(0x462e68);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L462e6f;}}
}
B462e6a:L462e6a:{c.instructions+=1;NFSU2_TR(0x462e6a);
w4(R+0,u32(0xffffull));
}
B462e6f:L462e6f:{c.instructions+=5;NFSU2_TR(0x462e6f);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0xfffffc18ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xfffffc18ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B462e75:{NFSU2_TR(0x462e75);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B462e78:{NFSU2_TR(0x462e78);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B462e7e:{NFSU2_TR(0x462e7e);
__builtin_memmove((R+0),(R+28),4);
}
B462e80:{NFSU2_TR(0x462e80);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L462e89;}}
}
B462e82:L462e82:{c.instructions+=2;NFSU2_TR(0x462e82);
w4(R+0,u32(0xfffffc18ull));
}
B462e87:{NFSU2_TR(0x462e87);
{goto L462e96;}
}
B462e89:L462e89:{c.instructions+=2;NFSU2_TR(0x462e89);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x3e8ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3e8ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B462e8f:{NFSU2_TR(0x462e8f);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L462e96;}}
}
B462e91:L462e91:{c.instructions+=1;NFSU2_TR(0x462e91);
w4(R+0,u32(0x3e8ull));
}
B462e96:L462e96:{c.instructions+=5;NFSU2_TR(0x462e96);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B462e99:{NFSU2_TR(0x462e99);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B462e9f:{NFSU2_TR(0x462e9f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B462ea1:{NFSU2_TR(0x462ea1);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B462ea3:{NFSU2_TR(0x462ea3);
if(r1(R+518)){{goto L462eae;}}
}
B462ea5:L462ea5:{c.instructions+=3;NFSU2_TR(0x462ea5);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),u32(0x4ull)));
w1(R+523,scarry<u32>(r4(R+0),u32(0x4ull)));
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B462ea8:{NFSU2_TR(0x462ea8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B462ea9:{NFSU2_TR(0x462ea9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x462eaeull));
TAIL_STATIC(0x735580u,735);
}
B462eae:L462eae:{c.instructions+=3;NFSU2_TR(0x462eae);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B462eb4:{NFSU2_TR(0x462eb4);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B462eb6:{NFSU2_TR(0x462eb6);
if(r1(R+518)){{goto L462f60;}}
}
B462ebc:L462ebc:{c.instructions+=4;NFSU2_TR(0x462ebc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B462ec2:{NFSU2_TR(0x462ec2);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B462ec3:{NFSU2_TR(0x462ec3);
u8 U[4];
w4(U+0,u32(0x5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B462ec5:{NFSU2_TR(0x462ec5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x462ecaull));
TAIL_STATIC(0x45e290u,45e);
}
B462eca:L462eca:{c.instructions+=7;NFSU2_TR(0x462eca);
{u32 ea_=u32(u32(7906016u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B462ed0:{NFSU2_TR(0x462ed0);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B462ed7:{NFSU2_TR(0x462ed7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B462ed9:{NFSU2_TR(0x462ed9);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B462eda:{NFSU2_TR(0x462eda);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B462ede:{NFSU2_TR(0x462ede);
__builtin_memmove((R+4),(R+24),4);
}
B462ee0:{NFSU2_TR(0x462ee0);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x462ee3ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B462ee3:L462ee3:{c.instructions+=3;NFSU2_TR(0x462ee3);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B462ee5:{NFSU2_TR(0x462ee5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B462eeb:{NFSU2_TR(0x462eeb);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L462ef1;}}
}
B462eed:L462eed:{c.instructions+=2;NFSU2_TR(0x462eed);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B462eef:{NFSU2_TR(0x462eef);
{goto L462efd;}
}
B462ef1:L462ef1:{c.instructions+=2;NFSU2_TR(0x462ef1);
u8 U[4];
w1(R+523,sborrow<u32>(r4(R+0),u32(0x7fffull)));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x7fffull))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B462ef6:{NFSU2_TR(0x462ef6);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L462efd;}}
}
B462ef8:L462ef8:{c.instructions+=1;NFSU2_TR(0x462ef8);
w4(R+0,u32(0x7fffull));
}
B462efd:L462efd:{c.instructions+=3;NFSU2_TR(0x462efd);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B462f01:{NFSU2_TR(0x462f01);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B462f04:{NFSU2_TR(0x462f04);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x462f09ull));
TAIL_STATIC(0x75bed4u,75b);
}
B462f09:L462f09:{c.instructions+=3;NFSU2_TR(0x462f09);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B462f0b:{NFSU2_TR(0x462f0b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B462f11:{NFSU2_TR(0x462f11);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L462f17;}}
}
B462f13:L462f13:{c.instructions+=2;NFSU2_TR(0x462f13);
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
B462f15:{NFSU2_TR(0x462f15);
{goto L462f23;}
}
B462f17:L462f17:{c.instructions+=2;NFSU2_TR(0x462f17);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0x1fa0ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x1fa0ull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0x1fa0ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B462f1c:{NFSU2_TR(0x462f1c);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L462f23;}}
}
B462f1e:L462f1e:{c.instructions+=1;NFSU2_TR(0x462f1e);
w4(R+0,u32(0x1fa0ull));
}
B462f23:L462f23:{c.instructions+=5;NFSU2_TR(0x462f23);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B462f26:{NFSU2_TR(0x462f26);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B462f28:{NFSU2_TR(0x462f28);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B462f29:{NFSU2_TR(0x462f29);
__builtin_memmove((R+4),(R+24),4);
}
B462f2b:{NFSU2_TR(0x462f2b);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x462f2eull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B462f2e:L462f2e:{c.instructions+=3;NFSU2_TR(0x462f2e);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B462f30:{NFSU2_TR(0x462f30);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B462f36:{NFSU2_TR(0x462f36);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L462f3c;}}
}
B462f38:L462f38:{c.instructions+=2;NFSU2_TR(0x462f38);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B462f3a:{NFSU2_TR(0x462f3a);
{goto L462f48;}
}
B462f3c:L462f3c:{c.instructions+=2;NFSU2_TR(0x462f3c);
u8 U[4];
w1(R+523,sborrow<u32>(r4(R+0),u32(0xffffull)));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xffffull))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B462f41:{NFSU2_TR(0x462f41);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L462f48;}}
}
B462f43:L462f43:{c.instructions+=1;NFSU2_TR(0x462f43);
w4(R+0,u32(0xffffull));
}
B462f48:L462f48:{c.instructions+=5;NFSU2_TR(0x462f48);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B462f4b:{NFSU2_TR(0x462f4b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B462f51:{NFSU2_TR(0x462f51);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B462f53:{NFSU2_TR(0x462f53);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B462f55:{NFSU2_TR(0x462f55);
if(r1(R+518)){{goto L462f60;}}
}
B462f57:L462f57:{c.instructions+=3;NFSU2_TR(0x462f57);
u8 U[6];
w1(R+512,carry<u32>(r4(R+24),u32(0x4ull)));
w1(R+523,scarry<u32>(r4(R+24),u32(0x4ull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B462f5a:{NFSU2_TR(0x462f5a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B462f5b:{NFSU2_TR(0x462f5b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x462f60ull));
TAIL_STATIC(0x735580u,735);
}
B462f60:L462f60:{c.instructions+=1;NFSU2_TR(0x462f60);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B462f61:L462f61:{c.instructions+=6;NFSU2_TR(0x462f61);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B462f65:{NFSU2_TR(0x462f65);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B462f66:{NFSU2_TR(0x462f66);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B462f67:{NFSU2_TR(0x462f67);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B462f6e:{NFSU2_TR(0x462f6e);
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
B462f71:{NFSU2_TR(0x462f71);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B462f80:L462f80:{c.instructions+=3;NFSU2_TR(0x462f80);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B462f81:{NFSU2_TR(0x462f81);
__builtin_memmove((R+24),(R+4),4);
}
B462f83:{NFSU2_TR(0x462f83);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x462f88ull));
TAIL_STATIC(0x45dd60u,45d);
}
B462f88:L462f88:{c.instructions+=4;NFSU2_TR(0x462f88);
u8 U[4];
w4(U+0,u32(0x78a320ull));
s4(u32(r4(R+24)),r4(U+0));
}
B462f8e:{NFSU2_TR(0x462f8e);
__builtin_memmove((R+0),(R+24),4);
}
B462f90:{NFSU2_TR(0x462f90);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B462f91:{NFSU2_TR(0x462f91);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B462fa0:L462fa0:{c.instructions+=2;NFSU2_TR(0x462fa0);
w4(R+0,u32(0x7ed5a8ull));
}
B462fa5:{NFSU2_TR(0x462fa5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B462fb0:L462fb0:{c.instructions+=2;NFSU2_TR(0x462fb0);
__builtin_memmove((R+0),gp(0x7ed5ac),4);
}
B462fb5:{NFSU2_TR(0x462fb5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B462fc0:L462fc0:{c.instructions+=2;NFSU2_TR(0x462fc0);
w4(R+0,u32(0x7ed5b8ull));
}
B462fc5:{NFSU2_TR(0x462fc5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B462fd0:L462fd0:{c.instructions+=2;NFSU2_TR(0x462fd0);
__builtin_memmove((R+0),gp(0x7ed5bc),4);
}
B462fd5:{NFSU2_TR(0x462fd5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B462fe0:L462fe0:{c.instructions+=3;NFSU2_TR(0x462fe0);
__builtin_memmove((R+0),gp(0x7ec840),4);
}
B462fe5:{NFSU2_TR(0x462fe5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B462fe6:{NFSU2_TR(0x462fe6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x462febull));
TAIL_STATIC(0x43e910u,43e);
}
B462feb:L462feb:{c.instructions+=3;NFSU2_TR(0x462feb);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B462fee:{NFSU2_TR(0x462fee);
u8 U[4];
w1(R+523,sborrow<u32>(r4(R+0),u32(0x4d8ull)));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x4d8ull))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B462ff3:{NFSU2_TR(0x462ff3);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x46301du,463);}
}
B462ff5:L462ff5:{c.instructions+=3;NFSU2_TR(0x462ff5);
__builtin_memmove((R+4),gp(0x7ec840),4);
}
B462ffb:{NFSU2_TR(0x462ffb);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x7ull))));
}
B462ffe:{NFSU2_TR(0x462ffe);
w4(R+4,u32(u32(r4(R+4))|u32(u32(0x1000ull))));
TAIL_STATIC(0x463004u,463);
}
XIT:NFSU2_TR_EXIT(0x462,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
