#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_401(u8* __restrict R,Cpu& c);
u32 body_403(u8* __restrict R,Cpu& c);
u32 body_441(u8* __restrict R,Cpu& c);
u32 body_442(u8* __restrict R,Cpu& c);
u32 body_444(u8* __restrict R,Cpu& c);
u32 body_446(u8* __restrict R,Cpu& c);
u32 body_44a(u8* __restrict R,Cpu& c);
u32 body_44e(u8* __restrict R,Cpu& c);
u32 body_44f(u8* __restrict R,Cpu& c);
u32 body_453(u8* __restrict R,Cpu& c);
u32 body_574(u8* __restrict R,Cpu& c);
u32 body_575(u8* __restrict R,Cpu& c);
u32 body_59f(u8* __restrict R,Cpu& c);
u32 body_5ba(u8* __restrict R,Cpu& c);
u32 body_5dd(u8* __restrict R,Cpu& c);
u32 body_5ec(u8* __restrict R,Cpu& c);
u32 body_75c(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x452,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x452,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_452(u8* __restrict R,Cpu& c);
u32 page_452(Cpu& c){return body_452(c.regs.data(),c);}
__attribute__((noinline)) u32 body_452(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x452000:goto L452000;
case 0x452002:c.instructions+=6;goto B452002;
case 0x452003:c.instructions+=5;goto B452003;
case 0x452004:c.instructions+=4;goto B452004;
case 0x45200b:c.instructions+=3;goto B45200b;
case 0x45200c:c.instructions+=2;goto B45200c;
case 0x45200e:c.instructions+=1;goto B45200e;
case 0x452013:goto L452013;
case 0x452017:c.instructions+=3;goto B452017;
case 0x452018:c.instructions+=2;goto B452018;
case 0x45201a:c.instructions+=1;goto B45201a;
case 0x45201f:goto L45201f;
case 0x452022:c.instructions+=3;goto B452022;
case 0x452023:c.instructions+=2;goto B452023;
case 0x452028:c.instructions+=1;goto B452028;
case 0x45202d:goto L45202d;
case 0x45202f:c.instructions+=11;goto B45202f;
case 0x452032:c.instructions+=10;goto B452032;
case 0x452034:c.instructions+=9;goto B452034;
case 0x452036:c.instructions+=8;goto B452036;
case 0x452039:c.instructions+=7;goto B452039;
case 0x45203b:c.instructions+=6;goto B45203b;
case 0x45203d:c.instructions+=5;goto B45203d;
case 0x45203f:c.instructions+=4;goto B45203f;
case 0x452041:c.instructions+=3;goto B452041;
case 0x452043:c.instructions+=2;goto B452043;
case 0x452046:c.instructions+=1;goto B452046;
case 0x45204c:goto L45204c;
case 0x452050:c.instructions+=3;goto B452050;
case 0x452051:c.instructions+=2;goto B452051;
case 0x452058:c.instructions+=1;goto B452058;
case 0x45205d:goto L45205d;
case 0x452064:c.instructions+=3;goto B452064;
case 0x452065:c.instructions+=2;goto B452065;
case 0x45206c:c.instructions+=1;goto B45206c;
case 0x452071:goto L452071;
case 0x452074:c.instructions+=3;goto B452074;
case 0x452078:c.instructions+=2;goto B452078;
case 0x452079:c.instructions+=1;goto B452079;
case 0x45207e:goto L45207e;
case 0x452085:c.instructions+=3;goto B452085;
case 0x452086:c.instructions+=2;goto B452086;
case 0x452089:c.instructions+=1;goto B452089;
case 0x45208e:goto L45208e;
case 0x452095:c.instructions+=3;goto B452095;
case 0x452096:c.instructions+=2;goto B452096;
case 0x45209d:c.instructions+=1;goto B45209d;
case 0x4520a2:goto L4520a2;
case 0x4520a6:c.instructions+=3;goto B4520a6;
case 0x4520a7:c.instructions+=2;goto B4520a7;
case 0x4520ae:c.instructions+=1;goto B4520ae;
case 0x4520b3:goto L4520b3;
case 0x4520ba:c.instructions+=3;goto B4520ba;
case 0x4520bb:c.instructions+=2;goto B4520bb;
case 0x4520be:c.instructions+=1;goto B4520be;
case 0x4520c3:goto L4520c3;
case 0x4520c6:c.instructions+=3;goto B4520c6;
case 0x4520ca:c.instructions+=2;goto B4520ca;
case 0x4520cb:c.instructions+=1;goto B4520cb;
case 0x4520d0:goto L4520d0;
case 0x4520d4:c.instructions+=3;goto B4520d4;
case 0x4520d7:c.instructions+=2;goto B4520d7;
case 0x4520d8:c.instructions+=1;goto B4520d8;
case 0x4520dd:goto L4520dd;
case 0x4520e1:c.instructions+=3;goto B4520e1;
case 0x4520e2:c.instructions+=2;goto B4520e2;
case 0x4520e5:c.instructions+=1;goto B4520e5;
case 0x4520ea:goto L4520ea;
case 0x4520ef:goto L4520ef;
case 0x4520f3:c.instructions+=3;goto B4520f3;
case 0x4520f4:c.instructions+=2;goto B4520f4;
case 0x4520fb:c.instructions+=1;goto B4520fb;
case 0x452100:goto L452100;
case 0x452107:c.instructions+=3;goto B452107;
case 0x452108:c.instructions+=2;goto B452108;
case 0x45210f:c.instructions+=1;goto B45210f;
case 0x452114:goto L452114;
case 0x452118:c.instructions+=3;goto B452118;
case 0x452119:c.instructions+=2;goto B452119;
case 0x45211c:c.instructions+=1;goto B45211c;
case 0x452121:goto L452121;
case 0x452124:c.instructions+=3;goto B452124;
case 0x45212b:c.instructions+=2;goto B45212b;
case 0x45212c:c.instructions+=1;goto B45212c;
case 0x452131:goto L452131;
case 0x452138:c.instructions+=3;goto B452138;
case 0x452139:c.instructions+=2;goto B452139;
case 0x452140:c.instructions+=1;goto B452140;
case 0x452145:goto L452145;
case 0x452149:c.instructions+=3;goto B452149;
case 0x45214a:c.instructions+=2;goto B45214a;
case 0x452151:c.instructions+=1;goto B452151;
case 0x452156:goto L452156;
case 0x452159:c.instructions+=3;goto B452159;
case 0x452160:c.instructions+=2;goto B452160;
case 0x452161:c.instructions+=1;goto B452161;
case 0x452166:goto L452166;
case 0x452169:c.instructions+=3;goto B452169;
case 0x45216d:c.instructions+=2;goto B45216d;
case 0x45216e:c.instructions+=1;goto B45216e;
case 0x452173:goto L452173;
case 0x452177:c.instructions+=3;goto B452177;
case 0x452178:c.instructions+=2;goto B452178;
case 0x45217b:c.instructions+=1;goto B45217b;
case 0x452180:goto L452180;
case 0x452183:c.instructions+=2;goto B452183;
case 0x452187:c.instructions+=1;goto B452187;
case 0x45218a:goto L45218a;
case 0x45218d:c.instructions+=2;goto B45218d;
case 0x45218f:c.instructions+=1;goto B45218f;
case 0x452194:goto L452194;
case 0x452197:c.instructions+=1;goto B452197;
case 0x45219c:goto L45219c;
case 0x45219f:c.instructions+=1;goto B45219f;
case 0x4521a4:goto L4521a4;
case 0x4521a7:c.instructions+=2;goto B4521a7;
case 0x4521a9:c.instructions+=1;goto B4521a9;
case 0x4521ae:goto L4521ae;
case 0x4521b1:c.instructions+=1;goto B4521b1;
case 0x4521b6:goto L4521b6;
case 0x4521b9:c.instructions+=1;goto B4521b9;
case 0x4521be:goto L4521be;
case 0x4521c1:c.instructions+=1;goto B4521c1;
case 0x4521c6:goto L4521c6;
case 0x4521c9:c.instructions+=7;goto B4521c9;
case 0x4521cc:c.instructions+=6;goto B4521cc;
case 0x4521ce:c.instructions+=5;goto B4521ce;
case 0x4521d3:c.instructions+=4;goto B4521d3;
case 0x4521d6:c.instructions+=3;goto B4521d6;
case 0x4521d8:c.instructions+=2;goto B4521d8;
case 0x4521db:c.instructions+=1;goto B4521db;
case 0x4521dd:goto L4521dd;
case 0x4521e1:goto L4521e1;
case 0x4521e4:c.instructions+=6;goto B4521e4;
case 0x4521e7:c.instructions+=5;goto B4521e7;
case 0x4521ea:c.instructions+=4;goto B4521ea;
case 0x4521ec:c.instructions+=3;goto B4521ec;
case 0x4521ee:c.instructions+=2;goto B4521ee;
case 0x4521f1:c.instructions+=1;goto B4521f1;
case 0x4521f3:goto L4521f3;
case 0x4521f7:goto L4521f7;
case 0x4521fa:c.instructions+=1;goto B4521fa;
case 0x4521ff:goto L4521ff;
case 0x452202:c.instructions+=6;goto B452202;
case 0x452205:c.instructions+=5;goto B452205;
case 0x452207:c.instructions+=4;goto B452207;
case 0x45220a:c.instructions+=3;goto B45220a;
case 0x45220c:c.instructions+=2;goto B45220c;
case 0x45220f:c.instructions+=1;goto B45220f;
case 0x452211:goto L452211;
case 0x452215:goto L452215;
case 0x452218:c.instructions+=6;goto B452218;
case 0x45221b:c.instructions+=5;goto B45221b;
case 0x45221e:c.instructions+=4;goto B45221e;
case 0x452220:c.instructions+=3;goto B452220;
case 0x452222:c.instructions+=2;goto B452222;
case 0x452225:c.instructions+=1;goto B452225;
case 0x452227:goto L452227;
case 0x45222b:goto L45222b;
case 0x45222e:c.instructions+=1;goto B45222e;
case 0x452233:goto L452233;
case 0x452236:c.instructions+=6;goto B452236;
case 0x452239:c.instructions+=5;goto B452239;
case 0x45223b:c.instructions+=4;goto B45223b;
case 0x45223e:c.instructions+=3;goto B45223e;
case 0x452240:c.instructions+=2;goto B452240;
case 0x452243:c.instructions+=1;goto B452243;
case 0x452245:goto L452245;
case 0x452249:goto L452249;
case 0x45224c:c.instructions+=6;goto B45224c;
case 0x45224f:c.instructions+=5;goto B45224f;
case 0x452252:c.instructions+=4;goto B452252;
case 0x452254:c.instructions+=3;goto B452254;
case 0x452256:c.instructions+=2;goto B452256;
case 0x452259:c.instructions+=1;goto B452259;
case 0x45225b:goto L45225b;
case 0x45225f:goto L45225f;
case 0x452262:c.instructions+=1;goto B452262;
case 0x452267:goto L452267;
case 0x45226a:c.instructions+=6;goto B45226a;
case 0x45226d:c.instructions+=5;goto B45226d;
case 0x45226f:c.instructions+=4;goto B45226f;
case 0x452272:c.instructions+=3;goto B452272;
case 0x452274:c.instructions+=2;goto B452274;
case 0x452277:c.instructions+=1;goto B452277;
case 0x452279:goto L452279;
case 0x45227d:goto L45227d;
case 0x452280:c.instructions+=6;goto B452280;
case 0x452283:c.instructions+=5;goto B452283;
case 0x452286:c.instructions+=4;goto B452286;
case 0x452288:c.instructions+=3;goto B452288;
case 0x45228a:c.instructions+=2;goto B45228a;
case 0x45228d:c.instructions+=1;goto B45228d;
case 0x45228f:goto L45228f;
case 0x452293:goto L452293;
case 0x452296:c.instructions+=1;goto B452296;
case 0x45229b:goto L45229b;
case 0x45229f:c.instructions+=8;goto B45229f;
case 0x4522a3:c.instructions+=7;goto B4522a3;
case 0x4522a6:c.instructions+=6;goto B4522a6;
case 0x4522aa:c.instructions+=5;goto B4522aa;
case 0x4522ac:c.instructions+=4;goto B4522ac;
case 0x4522af:c.instructions+=3;goto B4522af;
case 0x4522b1:c.instructions+=2;goto B4522b1;
case 0x4522b4:c.instructions+=1;goto B4522b4;
case 0x4522b6:goto L4522b6;
case 0x4522ba:goto L4522ba;
case 0x4522be:c.instructions+=8;goto B4522be;
case 0x4522c1:c.instructions+=7;goto B4522c1;
case 0x4522c5:c.instructions+=6;goto B4522c5;
case 0x4522c9:c.instructions+=5;goto B4522c9;
case 0x4522cc:c.instructions+=4;goto B4522cc;
case 0x4522ce:c.instructions+=3;goto B4522ce;
case 0x4522d0:c.instructions+=2;goto B4522d0;
case 0x4522d3:c.instructions+=1;goto B4522d3;
case 0x4522d5:goto L4522d5;
case 0x4522d9:goto L4522d9;
case 0x4522dc:c.instructions+=1;goto B4522dc;
case 0x4522e1:goto L4522e1;
case 0x4522e5:c.instructions+=8;goto B4522e5;
case 0x4522e8:c.instructions+=7;goto B4522e8;
case 0x4522ec:c.instructions+=6;goto B4522ec;
case 0x4522f0:c.instructions+=5;goto B4522f0;
case 0x4522f2:c.instructions+=4;goto B4522f2;
case 0x4522f5:c.instructions+=3;goto B4522f5;
case 0x4522f7:c.instructions+=2;goto B4522f7;
case 0x4522fa:c.instructions+=1;goto B4522fa;
case 0x4522fc:goto L4522fc;
case 0x452300:goto L452300;
case 0x452304:c.instructions+=8;goto B452304;
case 0x452308:c.instructions+=7;goto B452308;
case 0x45230b:c.instructions+=6;goto B45230b;
case 0x45230f:c.instructions+=5;goto B45230f;
case 0x452312:c.instructions+=4;goto B452312;
case 0x452314:c.instructions+=3;goto B452314;
case 0x452316:c.instructions+=2;goto B452316;
case 0x452319:c.instructions+=1;goto B452319;
case 0x45231b:goto L45231b;
case 0x45231f:goto L45231f;
case 0x452322:c.instructions+=1;goto B452322;
case 0x452327:goto L452327;
case 0x45232b:c.instructions+=8;goto B45232b;
case 0x45232e:c.instructions+=7;goto B45232e;
case 0x452332:c.instructions+=6;goto B452332;
case 0x452336:c.instructions+=5;goto B452336;
case 0x452338:c.instructions+=4;goto B452338;
case 0x45233b:c.instructions+=3;goto B45233b;
case 0x45233d:c.instructions+=2;goto B45233d;
case 0x452340:c.instructions+=1;goto B452340;
case 0x452342:goto L452342;
case 0x452346:goto L452346;
case 0x45234a:c.instructions+=8;goto B45234a;
case 0x45234d:c.instructions+=7;goto B45234d;
case 0x452351:c.instructions+=6;goto B452351;
case 0x452355:c.instructions+=5;goto B452355;
case 0x452358:c.instructions+=4;goto B452358;
case 0x45235a:c.instructions+=3;goto B45235a;
case 0x45235c:c.instructions+=2;goto B45235c;
case 0x45235f:c.instructions+=1;goto B45235f;
case 0x452361:goto L452361;
case 0x452365:goto L452365;
case 0x452368:c.instructions+=1;goto B452368;
case 0x45236d:goto L45236d;
case 0x452371:c.instructions+=27;goto B452371;
case 0x452375:c.instructions+=26;goto B452375;
case 0x452379:c.instructions+=25;goto B452379;
case 0x45237d:c.instructions+=24;goto B45237d;
case 0x452381:c.instructions+=23;goto B452381;
case 0x452385:c.instructions+=22;goto B452385;
case 0x452389:c.instructions+=21;goto B452389;
case 0x45238d:c.instructions+=20;goto B45238d;
case 0x452394:c.instructions+=19;goto B452394;
case 0x452398:c.instructions+=18;goto B452398;
case 0x45239c:c.instructions+=17;goto B45239c;
case 0x4523a0:c.instructions+=16;goto B4523a0;
case 0x4523a7:c.instructions+=15;goto B4523a7;
case 0x4523ab:c.instructions+=14;goto B4523ab;
case 0x4523af:c.instructions+=13;goto B4523af;
case 0x4523b6:c.instructions+=12;goto B4523b6;
case 0x4523b7:c.instructions+=11;goto B4523b7;
case 0x4523ba:c.instructions+=10;goto B4523ba;
case 0x4523c1:c.instructions+=9;goto B4523c1;
case 0x4523c5:c.instructions+=8;goto B4523c5;
case 0x4523c9:c.instructions+=7;goto B4523c9;
case 0x4523d0:c.instructions+=6;goto B4523d0;
case 0x4523d4:c.instructions+=5;goto B4523d4;
case 0x4523d8:c.instructions+=4;goto B4523d8;
case 0x4523df:c.instructions+=3;goto B4523df;
case 0x4523e3:c.instructions+=2;goto B4523e3;
case 0x4523ea:c.instructions+=1;goto B4523ea;
case 0x4523ef:goto L4523ef;
case 0x4523f2:c.instructions+=3;goto B4523f2;
case 0x4523f9:c.instructions+=2;goto B4523f9;
case 0x4523fa:c.instructions+=1;goto B4523fa;
case 0x4523ff:goto L4523ff;
case 0x452402:c.instructions+=2;goto B452402;
case 0x452404:c.instructions+=1;goto B452404;
case 0x452409:goto L452409;
case 0x45240c:c.instructions+=1;goto B45240c;
case 0x452411:goto L452411;
case 0x452414:c.instructions+=1;goto B452414;
case 0x452419:goto L452419;
case 0x45241d:c.instructions+=19;goto B45241d;
case 0x452421:c.instructions+=18;goto B452421;
case 0x452425:c.instructions+=17;goto B452425;
case 0x452429:c.instructions+=16;goto B452429;
case 0x45242d:c.instructions+=15;goto B45242d;
case 0x452431:c.instructions+=14;goto B452431;
case 0x452435:c.instructions+=13;goto B452435;
case 0x452439:c.instructions+=12;goto B452439;
case 0x45243d:c.instructions+=11;goto B45243d;
case 0x45243e:c.instructions+=10;goto B45243e;
case 0x452442:c.instructions+=9;goto B452442;
case 0x452445:c.instructions+=8;goto B452445;
case 0x452449:c.instructions+=7;goto B452449;
case 0x45244d:c.instructions+=6;goto B45244d;
case 0x452451:c.instructions+=5;goto B452451;
case 0x452455:c.instructions+=4;goto B452455;
case 0x452459:c.instructions+=3;goto B452459;
case 0x45245d:c.instructions+=2;goto B45245d;
case 0x452461:c.instructions+=1;goto B452461;
case 0x452466:goto L452466;
case 0x452469:c.instructions+=3;goto B452469;
case 0x45246d:c.instructions+=2;goto B45246d;
case 0x45246e:c.instructions+=1;goto B45246e;
case 0x452473:goto L452473;
case 0x452476:c.instructions+=2;goto B452476;
case 0x452478:c.instructions+=1;goto B452478;
case 0x45247d:goto L45247d;
case 0x452480:c.instructions+=1;goto B452480;
case 0x452485:goto L452485;
case 0x45248c:c.instructions+=8;goto B45248c;
case 0x45248f:c.instructions+=7;goto B45248f;
case 0x452493:c.instructions+=6;goto B452493;
case 0x452497:c.instructions+=5;goto B452497;
case 0x452499:c.instructions+=4;goto B452499;
case 0x45249c:c.instructions+=3;goto B45249c;
case 0x45249e:c.instructions+=2;goto B45249e;
case 0x4524a1:c.instructions+=1;goto B4524a1;
case 0x4524a3:goto L4524a3;
case 0x4524a9:goto L4524a9;
case 0x4524b0:c.instructions+=8;goto B4524b0;
case 0x4524b4:c.instructions+=7;goto B4524b4;
case 0x4524b7:c.instructions+=6;goto B4524b7;
case 0x4524bb:c.instructions+=5;goto B4524bb;
case 0x4524be:c.instructions+=4;goto B4524be;
case 0x4524c0:c.instructions+=3;goto B4524c0;
case 0x4524c2:c.instructions+=2;goto B4524c2;
case 0x4524c5:c.instructions+=1;goto B4524c5;
case 0x4524c7:goto L4524c7;
case 0x4524cd:goto L4524cd;
case 0x4524d0:c.instructions+=1;goto B4524d0;
case 0x4524d5:goto L4524d5;
case 0x4524da:c.instructions+=2;goto B4524da;
case 0x4524dc:c.instructions+=1;goto B4524dc;
case 0x4524de:goto L4524de;
case 0x4524e2:c.instructions+=2;goto B4524e2;
case 0x4524e4:c.instructions+=1;goto B4524e4;
case 0x4524e6:goto L4524e6;
case 0x4524eb:c.instructions+=2;goto B4524eb;
case 0x4524ed:c.instructions+=1;goto B4524ed;
case 0x4524ef:goto L4524ef;
case 0x4524f2:c.instructions+=1;goto B4524f2;
case 0x4524f4:goto L4524f4;
case 0x4524fa:c.instructions+=2;goto B4524fa;
case 0x4524fc:c.instructions+=1;goto B4524fc;
case 0x4524fe:goto L4524fe;
case 0x452504:c.instructions+=2;goto B452504;
case 0x452505:c.instructions+=1;goto B452505;
case 0x45250a:goto L45250a;
case 0x45250b:c.instructions+=5;goto B45250b;
case 0x45250c:c.instructions+=4;goto B45250c;
case 0x45250d:c.instructions+=3;goto B45250d;
case 0x45250f:c.instructions+=2;goto B45250f;
case 0x452510:c.instructions+=1;goto B452510;
case 0x452520:goto L452520;
case 0x452521:c.instructions+=14;goto B452521;
case 0x452523:c.instructions+=13;goto B452523;
case 0x452525:c.instructions+=12;goto B452525;
case 0x45252a:c.instructions+=11;goto B45252a;
case 0x452530:c.instructions+=10;goto B452530;
case 0x452531:c.instructions+=9;goto B452531;
case 0x452538:c.instructions+=8;goto B452538;
case 0x452539:c.instructions+=7;goto B452539;
case 0x45253c:c.instructions+=6;goto B45253c;
case 0x45253d:c.instructions+=5;goto B45253d;
case 0x45253f:c.instructions+=4;goto B45253f;
case 0x452541:c.instructions+=3;goto B452541;
case 0x452542:c.instructions+=2;goto B452542;
case 0x452545:c.instructions+=1;goto B452545;
case 0x45254a:goto L45254a;
case 0x45254d:c.instructions+=11;goto B45254d;
case 0x452550:c.instructions+=10;goto B452550;
case 0x452556:c.instructions+=9;goto B452556;
case 0x452559:c.instructions+=8;goto B452559;
case 0x452560:c.instructions+=7;goto B452560;
case 0x452566:c.instructions+=6;goto B452566;
case 0x452568:c.instructions+=5;goto B452568;
case 0x45256e:c.instructions+=4;goto B45256e;
case 0x452571:c.instructions+=3;goto B452571;
case 0x452577:c.instructions+=2;goto B452577;
case 0x45257a:c.instructions+=1;goto B45257a;
case 0x45257c:goto L45257c;
case 0x45257f:c.instructions+=1;goto B45257f;
case 0x452585:goto L452585;
case 0x45258b:c.instructions+=19;goto B45258b;
case 0x452591:c.instructions+=18;goto B452591;
case 0x452596:c.instructions+=17;goto B452596;
case 0x452599:c.instructions+=16;goto B452599;
case 0x45259c:c.instructions+=15;goto B45259c;
case 0x45259f:c.instructions+=14;goto B45259f;
case 0x4525a5:c.instructions+=13;goto B4525a5;
case 0x4525a8:c.instructions+=12;goto B4525a8;
case 0x4525ae:c.instructions+=11;goto B4525ae;
case 0x4525b4:c.instructions+=10;goto B4525b4;
case 0x4525b7:c.instructions+=9;goto B4525b7;
case 0x4525bc:c.instructions+=8;goto B4525bc;
case 0x4525c2:c.instructions+=7;goto B4525c2;
case 0x4525c5:c.instructions+=6;goto B4525c5;
case 0x4525ca:c.instructions+=5;goto B4525ca;
case 0x4525cd:c.instructions+=4;goto B4525cd;
case 0x4525cf:c.instructions+=3;goto B4525cf;
case 0x4525d2:c.instructions+=2;goto B4525d2;
case 0x4525d5:c.instructions+=1;goto B4525d5;
case 0x4525da:goto L4525da;
case 0x4525dc:c.instructions+=1;goto B4525dc;
case 0x4525e1:goto L4525e1;
case 0x4525e4:c.instructions+=6;goto B4525e4;
case 0x4525e6:c.instructions+=5;goto B4525e6;
case 0x4525e7:c.instructions+=4;goto B4525e7;
case 0x4525ee:c.instructions+=3;goto B4525ee;
case 0x4525f0:c.instructions+=2;goto B4525f0;
case 0x4525f1:c.instructions+=1;goto B4525f1;
case 0x452600:goto L452600;
case 0x452601:c.instructions+=16;goto B452601;
case 0x452603:c.instructions+=15;goto B452603;
case 0x452606:c.instructions+=14;goto B452606;
case 0x452608:c.instructions+=13;goto B452608;
case 0x45260d:c.instructions+=12;goto B45260d;
case 0x452613:c.instructions+=11;goto B452613;
case 0x452614:c.instructions+=10;goto B452614;
case 0x45261b:c.instructions+=9;goto B45261b;
case 0x452621:c.instructions+=8;goto B452621;
case 0x452624:c.instructions+=7;goto B452624;
case 0x452625:c.instructions+=6;goto B452625;
case 0x452626:c.instructions+=5;goto B452626;
case 0x452628:c.instructions+=4;goto B452628;
case 0x45262a:c.instructions+=3;goto B45262a;
case 0x45262b:c.instructions+=2;goto B45262b;
case 0x45262f:c.instructions+=1;goto B45262f;
case 0x452634:goto L452634;
case 0x452637:c.instructions+=24;goto B452637;
case 0x45263a:c.instructions+=23;goto B45263a;
case 0x45263f:c.instructions+=22;goto B45263f;
case 0x452641:c.instructions+=21;goto B452641;
case 0x452644:c.instructions+=20;goto B452644;
case 0x452647:c.instructions+=19;goto B452647;
case 0x45264a:c.instructions+=18;goto B45264a;
case 0x45264f:c.instructions+=17;goto B45264f;
case 0x452655:c.instructions+=16;goto B452655;
case 0x45265c:c.instructions+=15;goto B45265c;
case 0x452663:c.instructions+=14;goto B452663;
case 0x452667:c.instructions+=13;goto B452667;
case 0x45266a:c.instructions+=12;goto B45266a;
case 0x45266d:c.instructions+=11;goto B45266d;
case 0x452671:c.instructions+=10;goto B452671;
case 0x452677:c.instructions+=9;goto B452677;
case 0x45267d:c.instructions+=8;goto B45267d;
case 0x452680:c.instructions+=7;goto B452680;
case 0x452683:c.instructions+=6;goto B452683;
case 0x45268a:c.instructions+=5;goto B45268a;
case 0x45268d:c.instructions+=4;goto B45268d;
case 0x452693:c.instructions+=3;goto B452693;
case 0x452699:c.instructions+=2;goto B452699;
case 0x4526a0:c.instructions+=1;goto B4526a0;
case 0x4526a2:goto L4526a2;
case 0x4526a5:c.instructions+=3;goto B4526a5;
case 0x4526ab:c.instructions+=2;goto B4526ab;
case 0x4526b1:c.instructions+=1;goto B4526b1;
case 0x4526b3:goto L4526b3;
case 0x4526b6:c.instructions+=3;goto B4526b6;
case 0x4526bc:c.instructions+=2;goto B4526bc;
case 0x4526c2:c.instructions+=1;goto B4526c2;
case 0x4526c4:goto L4526c4;
case 0x4526c7:c.instructions+=1;goto B4526c7;
case 0x4526d0:goto L4526d0;
case 0x4526d2:c.instructions+=2;goto B4526d2;
case 0x4526d8:c.instructions+=1;goto B4526d8;
case 0x4526dd:goto L4526dd;
case 0x4526e0:c.instructions+=2;goto B4526e0;
case 0x4526e2:c.instructions+=1;goto B4526e2;
case 0x4526e8:goto L4526e8;
case 0x4526eb:c.instructions+=13;goto B4526eb;
case 0x4526f0:c.instructions+=12;goto B4526f0;
case 0x4526f2:c.instructions+=11;goto B4526f2;
case 0x4526f3:c.instructions+=10;goto B4526f3;
case 0x4526fa:c.instructions+=9;goto B4526fa;
case 0x4526fd:c.instructions+=8;goto B4526fd;
case 0x4526ff:c.instructions+=7;goto B4526ff;
case 0x452706:c.instructions+=6;goto B452706;
case 0x452709:c.instructions+=5;goto B452709;
case 0x45270d:c.instructions+=4;goto B45270d;
case 0x45270f:c.instructions+=3;goto B45270f;
case 0x452710:c.instructions+=2;goto B452710;
case 0x452717:c.instructions+=1;goto B452717;
case 0x45271c:goto L45271c;
case 0x452720:c.instructions+=148;goto B452720;
case 0x452726:c.instructions+=147;goto B452726;
case 0x45272a:c.instructions+=146;goto B45272a;
case 0x452730:c.instructions+=145;goto B452730;
case 0x452732:c.instructions+=144;goto B452732;
case 0x452736:c.instructions+=143;goto B452736;
case 0x45273c:c.instructions+=142;goto B45273c;
case 0x452740:c.instructions+=141;goto B452740;
case 0x452744:c.instructions+=140;goto B452744;
case 0x452748:c.instructions+=139;goto B452748;
case 0x45274a:c.instructions+=138;goto B45274a;
case 0x452751:c.instructions+=137;goto B452751;
case 0x452755:c.instructions+=136;goto B452755;
case 0x45275b:c.instructions+=135;goto B45275b;
case 0x45275f:c.instructions+=134;goto B45275f;
case 0x452763:c.instructions+=133;goto B452763;
case 0x452769:c.instructions+=132;goto B452769;
case 0x45276d:c.instructions+=131;goto B45276d;
case 0x452771:c.instructions+=130;goto B452771;
case 0x452777:c.instructions+=129;goto B452777;
case 0x45277b:c.instructions+=128;goto B45277b;
case 0x45277f:c.instructions+=127;goto B45277f;
case 0x452783:c.instructions+=126;goto B452783;
case 0x452785:c.instructions+=125;goto B452785;
case 0x45278c:c.instructions+=124;goto B45278c;
case 0x452793:c.instructions+=123;goto B452793;
case 0x452799:c.instructions+=122;goto B452799;
case 0x45279d:c.instructions+=121;goto B45279d;
case 0x4527a1:c.instructions+=120;goto B4527a1;
case 0x4527a7:c.instructions+=119;goto B4527a7;
case 0x4527ab:c.instructions+=118;goto B4527ab;
case 0x4527af:c.instructions+=117;goto B4527af;
case 0x4527b3:c.instructions+=116;goto B4527b3;
case 0x4527b9:c.instructions+=115;goto B4527b9;
case 0x4527bd:c.instructions+=114;goto B4527bd;
case 0x4527c1:c.instructions+=113;goto B4527c1;
case 0x4527c5:c.instructions+=112;goto B4527c5;
case 0x4527c9:c.instructions+=111;goto B4527c9;
case 0x4527d0:c.instructions+=110;goto B4527d0;
case 0x4527d7:c.instructions+=109;goto B4527d7;
case 0x4527dd:c.instructions+=108;goto B4527dd;
case 0x4527e1:c.instructions+=107;goto B4527e1;
case 0x4527e5:c.instructions+=106;goto B4527e5;
case 0x4527eb:c.instructions+=105;goto B4527eb;
case 0x4527ef:c.instructions+=104;goto B4527ef;
case 0x4527f3:c.instructions+=103;goto B4527f3;
case 0x4527f7:c.instructions+=102;goto B4527f7;
case 0x4527fd:c.instructions+=101;goto B4527fd;
case 0x452801:c.instructions+=100;goto B452801;
case 0x452805:c.instructions+=99;goto B452805;
case 0x452809:c.instructions+=98;goto B452809;
case 0x45280d:c.instructions+=97;goto B45280d;
case 0x452814:c.instructions+=96;goto B452814;
case 0x452818:c.instructions+=95;goto B452818;
case 0x45281e:c.instructions+=94;goto B45281e;
case 0x452822:c.instructions+=93;goto B452822;
case 0x452826:c.instructions+=92;goto B452826;
case 0x452828:c.instructions+=91;goto B452828;
case 0x45282c:c.instructions+=90;goto B45282c;
case 0x452833:c.instructions+=89;goto B452833;
case 0x452837:c.instructions+=88;goto B452837;
case 0x45283d:c.instructions+=87;goto B45283d;
case 0x452841:c.instructions+=86;goto B452841;
case 0x452845:c.instructions+=85;goto B452845;
case 0x452849:c.instructions+=84;goto B452849;
case 0x45284b:c.instructions+=83;goto B45284b;
case 0x452852:c.instructions+=82;goto B452852;
case 0x452854:c.instructions+=81;goto B452854;
case 0x452856:c.instructions+=80;goto B452856;
case 0x45285a:c.instructions+=79;goto B45285a;
case 0x452860:c.instructions+=78;goto B452860;
case 0x452864:c.instructions+=77;goto B452864;
case 0x452866:c.instructions+=76;goto B452866;
case 0x45286a:c.instructions+=75;goto B45286a;
case 0x452871:c.instructions+=74;goto B452871;
case 0x452875:c.instructions+=73;goto B452875;
case 0x45287b:c.instructions+=72;goto B45287b;
case 0x45287f:c.instructions+=71;goto B45287f;
case 0x452883:c.instructions+=70;goto B452883;
case 0x452887:c.instructions+=69;goto B452887;
case 0x45288b:c.instructions+=68;goto B45288b;
case 0x452892:c.instructions+=67;goto B452892;
case 0x452896:c.instructions+=66;goto B452896;
case 0x45289a:c.instructions+=65;goto B45289a;
case 0x45289c:c.instructions+=64;goto B45289c;
case 0x4528a0:c.instructions+=63;goto B4528a0;
case 0x4528a7:c.instructions+=62;goto B4528a7;
case 0x4528ab:c.instructions+=61;goto B4528ab;
case 0x4528af:c.instructions+=60;goto B4528af;
case 0x4528b3:c.instructions+=59;goto B4528b3;
case 0x4528b7:c.instructions+=58;goto B4528b7;
case 0x4528be:c.instructions+=57;goto B4528be;
case 0x4528c2:c.instructions+=56;goto B4528c2;
case 0x4528c4:c.instructions+=55;goto B4528c4;
case 0x4528c8:c.instructions+=54;goto B4528c8;
case 0x4528cc:c.instructions+=53;goto B4528cc;
case 0x4528d3:c.instructions+=52;goto B4528d3;
case 0x4528d5:c.instructions+=51;goto B4528d5;
case 0x4528d7:c.instructions+=50;goto B4528d7;
case 0x4528db:c.instructions+=49;goto B4528db;
case 0x4528df:c.instructions+=48;goto B4528df;
case 0x4528e3:c.instructions+=47;goto B4528e3;
case 0x4528e7:c.instructions+=46;goto B4528e7;
case 0x4528ee:c.instructions+=45;goto B4528ee;
case 0x4528f2:c.instructions+=44;goto B4528f2;
case 0x4528f9:c.instructions+=43;goto B4528f9;
case 0x4528fd:c.instructions+=42;goto B4528fd;
case 0x452904:c.instructions+=41;goto B452904;
case 0x452906:c.instructions+=40;goto B452906;
case 0x45290a:c.instructions+=39;goto B45290a;
case 0x452911:c.instructions+=38;goto B452911;
case 0x452913:c.instructions+=37;goto B452913;
case 0x452917:c.instructions+=36;goto B452917;
case 0x45291e:c.instructions+=35;goto B45291e;
case 0x452922:c.instructions+=34;goto B452922;
case 0x452929:c.instructions+=33;goto B452929;
case 0x45292d:c.instructions+=32;goto B45292d;
case 0x452934:c.instructions+=31;goto B452934;
case 0x452936:c.instructions+=30;goto B452936;
case 0x45293a:c.instructions+=29;goto B45293a;
case 0x452941:c.instructions+=28;goto B452941;
case 0x452943:c.instructions+=27;goto B452943;
case 0x452947:c.instructions+=26;goto B452947;
case 0x45294e:c.instructions+=25;goto B45294e;
case 0x452952:c.instructions+=24;goto B452952;
case 0x452959:c.instructions+=23;goto B452959;
case 0x452960:c.instructions+=22;goto B452960;
case 0x452961:c.instructions+=21;goto B452961;
case 0x452965:c.instructions+=20;goto B452965;
case 0x452968:c.instructions+=19;goto B452968;
case 0x45296f:c.instructions+=18;goto B45296f;
case 0x452970:c.instructions+=17;goto B452970;
case 0x452972:c.instructions+=16;goto B452972;
case 0x452976:c.instructions+=15;goto B452976;
case 0x45297d:c.instructions+=14;goto B45297d;
case 0x45297f:c.instructions+=13;goto B45297f;
case 0x452986:c.instructions+=12;goto B452986;
case 0x45298d:c.instructions+=11;goto B45298d;
case 0x452991:c.instructions+=10;goto B452991;
case 0x452998:c.instructions+=9;goto B452998;
case 0x45299c:c.instructions+=8;goto B45299c;
case 0x4529a3:c.instructions+=7;goto B4529a3;
case 0x4529a5:c.instructions+=6;goto B4529a5;
case 0x4529a9:c.instructions+=5;goto B4529a9;
case 0x4529b0:c.instructions+=4;goto B4529b0;
case 0x4529b2:c.instructions+=3;goto B4529b2;
case 0x4529b9:c.instructions+=2;goto B4529b9;
case 0x4529c0:c.instructions+=1;goto B4529c0;
case 0x4529c5:goto L4529c5;
case 0x4529c8:goto L4529c8;
case 0x4529cf:c.instructions+=7;goto B4529cf;
case 0x4529d0:c.instructions+=6;goto B4529d0;
case 0x4529d2:c.instructions+=5;goto B4529d2;
case 0x4529d9:c.instructions+=4;goto B4529d9;
case 0x4529da:c.instructions+=3;goto B4529da;
case 0x4529dc:c.instructions+=2;goto B4529dc;
case 0x4529dd:c.instructions+=1;goto B4529dd;
case 0x4529e0:goto L4529e0;
case 0x4529e1:c.instructions+=2;goto B4529e1;
case 0x4529e3:c.instructions+=1;goto B4529e3;
case 0x4529e8:goto L4529e8;
case 0x4529ed:c.instructions+=1;goto B4529ed;
case 0x4529ef:goto L4529ef;
case 0x4529f0:c.instructions+=1;goto B4529f0;
case 0x4529f5:goto L4529f5;
case 0x4529f8:goto L4529f8;
case 0x4529fa:c.instructions+=2;goto B4529fa;
case 0x4529fb:c.instructions+=1;goto B4529fb;
case 0x452a00:goto L452a00;
case 0x452a01:c.instructions+=26;goto B452a01;
case 0x452a03:c.instructions+=25;goto B452a03;
case 0x452a06:c.instructions+=24;goto B452a06;
case 0x452a09:c.instructions+=23;goto B452a09;
case 0x452a0a:c.instructions+=22;goto B452a0a;
case 0x452a0b:c.instructions+=21;goto B452a0b;
case 0x452a0e:c.instructions+=20;goto B452a0e;
case 0x452a0f:c.instructions+=19;goto B452a0f;
case 0x452a11:c.instructions+=18;goto B452a11;
case 0x452a13:c.instructions+=17;goto B452a13;
case 0x452a17:c.instructions+=16;goto B452a17;
case 0x452a1a:c.instructions+=15;goto B452a1a;
case 0x452a1e:c.instructions+=14;goto B452a1e;
case 0x452a22:c.instructions+=13;goto B452a22;
case 0x452a25:c.instructions+=12;goto B452a25;
case 0x452a29:c.instructions+=11;goto B452a29;
case 0x452a2b:c.instructions+=10;goto B452a2b;
case 0x452a2e:c.instructions+=9;goto B452a2e;
case 0x452a2f:c.instructions+=8;goto B452a2f;
case 0x452a33:c.instructions+=7;goto B452a33;
case 0x452a36:c.instructions+=6;goto B452a36;
case 0x452a38:c.instructions+=5;goto B452a38;
case 0x452a3c:c.instructions+=4;goto B452a3c;
case 0x452a40:c.instructions+=3;goto B452a40;
case 0x452a43:c.instructions+=2;goto B452a43;
case 0x452a44:c.instructions+=1;goto B452a44;
case 0x452a49:goto L452a49;
case 0x452a4d:c.instructions+=13;goto B452a4d;
case 0x452a4f:c.instructions+=12;goto B452a4f;
case 0x452a55:c.instructions+=11;goto B452a55;
case 0x452a5a:c.instructions+=10;goto B452a5a;
case 0x452a5c:c.instructions+=9;goto B452a5c;
case 0x452a5e:c.instructions+=8;goto B452a5e;
case 0x452a62:c.instructions+=7;goto B452a62;
case 0x452a65:c.instructions+=6;goto B452a65;
case 0x452a67:c.instructions+=5;goto B452a67;
case 0x452a6a:c.instructions+=4;goto B452a6a;
case 0x452a6c:c.instructions+=3;goto B452a6c;
case 0x452a6f:c.instructions+=2;goto B452a6f;
case 0x452a71:c.instructions+=1;goto B452a71;
case 0x452a73:goto L452a73;
case 0x452a77:c.instructions+=10;goto B452a77;
case 0x452a7a:c.instructions+=9;goto B452a7a;
case 0x452a7d:c.instructions+=8;goto B452a7d;
case 0x452a7e:c.instructions+=7;goto B452a7e;
case 0x452a7f:c.instructions+=6;goto B452a7f;
case 0x452a80:c.instructions+=5;goto B452a80;
case 0x452a81:c.instructions+=4;goto B452a81;
case 0x452a85:c.instructions+=3;goto B452a85;
case 0x452a86:c.instructions+=2;goto B452a86;
case 0x452a88:c.instructions+=1;goto B452a88;
case 0x452a8d:goto L452a8d;
case 0x452a8f:c.instructions+=1;goto B452a8f;
case 0x452a91:goto L452a91;
case 0x452a97:c.instructions+=6;goto B452a97;
case 0x452a98:c.instructions+=5;goto B452a98;
case 0x452a99:c.instructions+=4;goto B452a99;
case 0x452a9a:c.instructions+=3;goto B452a9a;
case 0x452a9c:c.instructions+=2;goto B452a9c;
case 0x452a9d:c.instructions+=1;goto B452a9d;
case 0x452aa0:goto L452aa0;
case 0x452aa2:c.instructions+=23;goto B452aa2;
case 0x452aa5:c.instructions+=22;goto B452aa5;
case 0x452aa8:c.instructions+=21;goto B452aa8;
case 0x452aac:c.instructions+=20;goto B452aac;
case 0x452ab0:c.instructions+=19;goto B452ab0;
case 0x452ab2:c.instructions+=18;goto B452ab2;
case 0x452ab6:c.instructions+=17;goto B452ab6;
case 0x452aba:c.instructions+=16;goto B452aba;
case 0x452abe:c.instructions+=15;goto B452abe;
case 0x452ac2:c.instructions+=14;goto B452ac2;
case 0x452ac8:c.instructions+=13;goto B452ac8;
case 0x452acc:c.instructions+=12;goto B452acc;
case 0x452ad2:c.instructions+=11;goto B452ad2;
case 0x452ad4:c.instructions+=10;goto B452ad4;
case 0x452ad6:c.instructions+=9;goto B452ad6;
case 0x452ad8:c.instructions+=8;goto B452ad8;
case 0x452adb:c.instructions+=7;goto B452adb;
case 0x452ade:c.instructions+=6;goto B452ade;
case 0x452ae0:c.instructions+=5;goto B452ae0;
case 0x452ae2:c.instructions+=4;goto B452ae2;
case 0x452ae5:c.instructions+=3;goto B452ae5;
case 0x452ae7:c.instructions+=2;goto B452ae7;
case 0x452ae9:c.instructions+=1;goto B452ae9;
case 0x452aeb:goto L452aeb;
case 0x452aed:c.instructions+=12;goto B452aed;
case 0x452af0:c.instructions+=11;goto B452af0;
case 0x452af3:c.instructions+=10;goto B452af3;
case 0x452af6:c.instructions+=9;goto B452af6;
case 0x452af9:c.instructions+=8;goto B452af9;
case 0x452afd:c.instructions+=7;goto B452afd;
case 0x452b00:c.instructions+=6;goto B452b00;
case 0x452b07:c.instructions+=5;goto B452b07;
case 0x452b09:c.instructions+=4;goto B452b09;
case 0x452b0d:c.instructions+=3;goto B452b0d;
case 0x452b0f:c.instructions+=2;goto B452b0f;
case 0x452b13:c.instructions+=1;goto B452b13;
case 0x452b15:goto L452b15;
case 0x452b1b:c.instructions+=1;goto B452b1b;
case 0x452b1d:goto L452b1d;
case 0x452b1f:c.instructions+=3;goto B452b1f;
case 0x452b23:c.instructions+=2;goto B452b23;
case 0x452b24:c.instructions+=1;goto B452b24;
case 0x452b29:goto L452b29;
case 0x452b2b:c.instructions+=3;goto B452b2b;
case 0x452b2f:c.instructions+=2;goto B452b2f;
case 0x452b31:c.instructions+=1;goto B452b31;
case 0x452b39:goto L452b39;
case 0x452b3b:c.instructions+=9;goto B452b3b;
case 0x452b3f:c.instructions+=8;goto B452b3f;
case 0x452b41:c.instructions+=7;goto B452b41;
case 0x452b42:c.instructions+=6;goto B452b42;
case 0x452b45:c.instructions+=5;goto B452b45;
case 0x452b48:c.instructions+=4;goto B452b48;
case 0x452b4a:c.instructions+=3;goto B452b4a;
case 0x452b4e:c.instructions+=2;goto B452b4e;
case 0x452b4f:c.instructions+=1;goto B452b4f;
case 0x452b54:goto L452b54;
case 0x452b58:c.instructions+=28;goto B452b58;
case 0x452b5c:c.instructions+=27;goto B452b5c;
case 0x452b5e:c.instructions+=26;goto B452b5e;
case 0x452b62:c.instructions+=25;goto B452b62;
case 0x452b66:c.instructions+=24;goto B452b66;
case 0x452b6a:c.instructions+=23;goto B452b6a;
case 0x452b6e:c.instructions+=22;goto B452b6e;
case 0x452b72:c.instructions+=21;goto B452b72;
case 0x452b74:c.instructions+=20;goto B452b74;
case 0x452b76:c.instructions+=19;goto B452b76;
case 0x452b78:c.instructions+=18;goto B452b78;
case 0x452b7a:c.instructions+=17;goto B452b7a;
case 0x452b7c:c.instructions+=16;goto B452b7c;
case 0x452b7e:c.instructions+=15;goto B452b7e;
case 0x452b80:c.instructions+=14;goto B452b80;
case 0x452b82:c.instructions+=13;goto B452b82;
case 0x452b84:c.instructions+=12;goto B452b84;
case 0x452b86:c.instructions+=11;goto B452b86;
case 0x452b88:c.instructions+=10;goto B452b88;
case 0x452b8a:c.instructions+=9;goto B452b8a;
case 0x452b8e:c.instructions+=8;goto B452b8e;
case 0x452b90:c.instructions+=7;goto B452b90;
case 0x452b94:c.instructions+=6;goto B452b94;
case 0x452b95:c.instructions+=5;goto B452b95;
case 0x452b96:c.instructions+=4;goto B452b96;
case 0x452b97:c.instructions+=3;goto B452b97;
case 0x452b99:c.instructions+=2;goto B452b99;
case 0x452b9a:c.instructions+=1;goto B452b9a;
case 0x452ba0:goto L452ba0;
case 0x452ba2:c.instructions+=7;goto B452ba2;
case 0x452ba5:c.instructions+=6;goto B452ba5;
case 0x452bab:c.instructions+=5;goto B452bab;
case 0x452bb2:c.instructions+=4;goto B452bb2;
case 0x452bb9:c.instructions+=3;goto B452bb9;
case 0x452bbb:c.instructions+=2;goto B452bbb;
case 0x452bbe:c.instructions+=1;goto B452bbe;
case 0x452bc0:goto L452bc0;
case 0x452bc3:c.instructions+=4;goto B452bc3;
case 0x452bc4:c.instructions+=3;goto B452bc4;
case 0x452bc7:c.instructions+=2;goto B452bc7;
case 0x452bc9:c.instructions+=1;goto B452bc9;
case 0x452bcb:goto L452bcb;
case 0x452bd0:goto L452bd0;
case 0x452bd2:c.instructions+=5;goto B452bd2;
case 0x452bd5:c.instructions+=4;goto B452bd5;
case 0x452bd7:c.instructions+=3;goto B452bd7;
case 0x452bd8:c.instructions+=2;goto B452bd8;
case 0x452bdb:c.instructions+=1;goto B452bdb;
case 0x452be0:goto L452be0;
case 0x452be2:c.instructions+=3;goto B452be2;
case 0x452be5:c.instructions+=2;goto B452be5;
case 0x452be7:c.instructions+=1;goto B452be7;
case 0x452be9:goto L452be9;
case 0x452bea:c.instructions+=1;goto B452bea;
case 0x452bf0:goto L452bf0;
case 0x452bf1:c.instructions+=4;goto B452bf1;
case 0x452bf4:c.instructions+=3;goto B452bf4;
case 0x452bfb:c.instructions+=2;goto B452bfb;
case 0x452bfd:c.instructions+=1;goto B452bfd;
case 0x452bff:goto L452bff;
case 0x452c00:goto L452c00;
case 0x452c02:c.instructions+=7;goto B452c02;
case 0x452c04:c.instructions+=6;goto B452c04;
case 0x452c07:c.instructions+=5;goto B452c07;
case 0x452c09:c.instructions+=4;goto B452c09;
case 0x452c0c:c.instructions+=3;goto B452c0c;
case 0x452c0f:c.instructions+=2;goto B452c0f;
case 0x452c11:c.instructions+=1;goto B452c11;
case 0x452c13:goto L452c13;
case 0x452c14:c.instructions+=1;goto B452c14;
case 0x452c19:goto L452c19;
case 0x452c1c:goto L452c1c;
case 0x452c1e:c.instructions+=1;goto B452c1e;
case 0x452c20:goto L452c20;
case 0x452c21:c.instructions+=1;goto B452c21;
case 0x452c30:goto L452c30;
case 0x452c32:c.instructions+=10;goto B452c32;
case 0x452c37:c.instructions+=9;goto B452c37;
case 0x452c3d:c.instructions+=8;goto B452c3d;
case 0x452c3e:c.instructions+=7;goto B452c3e;
case 0x452c45:c.instructions+=6;goto B452c45;
case 0x452c46:c.instructions+=5;goto B452c46;
case 0x452c47:c.instructions+=4;goto B452c47;
case 0x452c48:c.instructions+=3;goto B452c48;
case 0x452c4d:c.instructions+=2;goto B452c4d;
case 0x452c4f:c.instructions+=1;goto B452c4f;
case 0x452c54:goto L452c54;
case 0x452c57:c.instructions+=4;goto B452c57;
case 0x452c5b:c.instructions+=3;goto B452c5b;
case 0x452c5d:c.instructions+=2;goto B452c5d;
case 0x452c65:c.instructions+=1;goto B452c65;
case 0x452c67:goto L452c67;
case 0x452c6c:c.instructions+=7;goto B452c6c;
case 0x452c71:c.instructions+=6;goto B452c71;
case 0x452c76:c.instructions+=5;goto B452c76;
case 0x452c79:c.instructions+=4;goto B452c79;
case 0x452c7b:c.instructions+=3;goto B452c7b;
case 0x452c7c:c.instructions+=2;goto B452c7c;
case 0x452c82:c.instructions+=1;goto B452c82;
case 0x452c87:goto L452c87;
case 0x452c89:goto L452c89;
case 0x452c8b:goto L452c8b;
case 0x452c90:c.instructions+=3;goto B452c90;
case 0x452c98:c.instructions+=2;goto B452c98;
case 0x452c9b:c.instructions+=1;goto B452c9b;
case 0x452ca0:goto L452ca0;
case 0x452ca3:c.instructions+=4;goto B452ca3;
case 0x452ca7:c.instructions+=3;goto B452ca7;
case 0x452ca9:c.instructions+=2;goto B452ca9;
case 0x452cb1:c.instructions+=1;goto B452cb1;
case 0x452cb3:goto L452cb3;
case 0x452cb8:c.instructions+=7;goto B452cb8;
case 0x452cbd:c.instructions+=6;goto B452cbd;
case 0x452cc2:c.instructions+=5;goto B452cc2;
case 0x452cc5:c.instructions+=4;goto B452cc5;
case 0x452cc7:c.instructions+=3;goto B452cc7;
case 0x452cc8:c.instructions+=2;goto B452cc8;
case 0x452cce:c.instructions+=1;goto B452cce;
case 0x452cd3:goto L452cd3;
case 0x452cd5:goto L452cd5;
case 0x452cd7:goto L452cd7;
case 0x452cdc:c.instructions+=3;goto B452cdc;
case 0x452ce4:c.instructions+=2;goto B452ce4;
case 0x452ce7:c.instructions+=1;goto B452ce7;
case 0x452cec:goto L452cec;
case 0x452cef:c.instructions+=4;goto B452cef;
case 0x452cf3:c.instructions+=3;goto B452cf3;
case 0x452cf5:c.instructions+=2;goto B452cf5;
case 0x452cfd:c.instructions+=1;goto B452cfd;
case 0x452cff:goto L452cff;
case 0x452d04:c.instructions+=7;goto B452d04;
case 0x452d09:c.instructions+=6;goto B452d09;
case 0x452d0b:c.instructions+=5;goto B452d0b;
case 0x452d0e:c.instructions+=4;goto B452d0e;
case 0x452d10:c.instructions+=3;goto B452d10;
case 0x452d11:c.instructions+=2;goto B452d11;
case 0x452d17:c.instructions+=1;goto B452d17;
case 0x452d1c:goto L452d1c;
case 0x452d1f:c.instructions+=6;goto B452d1f;
case 0x452d20:c.instructions+=5;goto B452d20;
case 0x452d21:c.instructions+=4;goto B452d21;
case 0x452d25:c.instructions+=3;goto B452d25;
case 0x452d2c:c.instructions+=2;goto B452d2c;
case 0x452d2f:c.instructions+=1;goto B452d2f;
case 0x452d30:goto L452d30;
case 0x452d34:c.instructions+=7;goto B452d34;
case 0x452d36:c.instructions+=6;goto B452d36;
case 0x452d39:c.instructions+=5;goto B452d39;
case 0x452d3a:c.instructions+=4;goto B452d3a;
case 0x452d3b:c.instructions+=3;goto B452d3b;
case 0x452d42:c.instructions+=2;goto B452d42;
case 0x452d45:c.instructions+=1;goto B452d45;
case 0x452d50:goto L452d50;
case 0x452d51:c.instructions+=9;goto B452d51;
case 0x452d52:c.instructions+=8;goto B452d52;
case 0x452d53:c.instructions+=7;goto B452d53;
case 0x452d57:c.instructions+=6;goto B452d57;
case 0x452d59:c.instructions+=5;goto B452d59;
case 0x452d5e:c.instructions+=4;goto B452d5e;
case 0x452d5f:c.instructions+=3;goto B452d5f;
case 0x452d61:c.instructions+=2;goto B452d61;
case 0x452d66:c.instructions+=1;goto B452d66;
case 0x452d68:goto L452d68;
case 0x452d6d:c.instructions+=1;goto B452d6d;
case 0x452d6f:goto L452d6f;
case 0x452d74:c.instructions+=1;goto B452d74;
case 0x452d76:goto L452d76;
case 0x452d7b:c.instructions+=1;goto B452d7b;
case 0x452d7d:goto L452d7d;
case 0x452d7f:c.instructions+=1;goto B452d7f;
case 0x452d81:goto L452d81;
case 0x452d86:goto L452d86;
case 0x452d89:c.instructions+=4;goto B452d89;
case 0x452d8c:c.instructions+=3;goto B452d8c;
case 0x452d90:c.instructions+=2;goto B452d90;
case 0x452d92:c.instructions+=1;goto B452d92;
case 0x452d98:goto L452d98;
case 0x452d9a:c.instructions+=4;goto B452d9a;
case 0x452d9c:c.instructions+=3;goto B452d9c;
case 0x452d9e:c.instructions+=2;goto B452d9e;
case 0x452da0:c.instructions+=1;goto B452da0;
case 0x452da2:goto L452da2;
case 0x452da3:c.instructions+=1;goto B452da3;
case 0x452da5:goto L452da5;
case 0x452da6:c.instructions+=1;goto B452da6;
case 0x452da8:goto L452da8;
case 0x452dab:c.instructions+=2;goto B452dab;
case 0x452dae:c.instructions+=1;goto B452dae;
case 0x452db0:goto L452db0;
case 0x452db3:c.instructions+=2;goto B452db3;
case 0x452db6:c.instructions+=1;goto B452db6;
case 0x452db8:goto L452db8;
case 0x452dbb:c.instructions+=1;goto B452dbb;
case 0x452dbe:goto L452dbe;
case 0x452dc0:c.instructions+=2;goto B452dc0;
case 0x452dc2:c.instructions+=1;goto B452dc2;
case 0x452dc4:goto L452dc4;
case 0x452dc7:goto L452dc7;
case 0x452dc9:c.instructions+=1;goto B452dc9;
case 0x452dcb:goto L452dcb;
case 0x452dcc:c.instructions+=3;goto B452dcc;
case 0x452dcf:c.instructions+=2;goto B452dcf;
case 0x452dd1:c.instructions+=1;goto B452dd1;
case 0x452dd3:goto L452dd3;
case 0x452dd5:goto L452dd5;
case 0x452dd8:c.instructions+=3;goto B452dd8;
case 0x452ddf:c.instructions+=2;goto B452ddf;
case 0x452de1:c.instructions+=1;goto B452de1;
case 0x452de3:goto L452de3;
case 0x452de5:c.instructions+=7;goto B452de5;
case 0x452de7:c.instructions+=6;goto B452de7;
case 0x452dea:c.instructions+=5;goto B452dea;
case 0x452dec:c.instructions+=4;goto B452dec;
case 0x452def:c.instructions+=3;goto B452def;
case 0x452df2:c.instructions+=2;goto B452df2;
case 0x452df4:c.instructions+=1;goto B452df4;
case 0x452df6:goto L452df6;
case 0x452df7:c.instructions+=1;goto B452df7;
case 0x452dfc:goto L452dfc;
case 0x452dff:goto L452dff;
case 0x452e01:c.instructions+=1;goto B452e01;
case 0x452e03:goto L452e03;
case 0x452e07:goto L452e07;
case 0x452e0a:c.instructions+=5;goto B452e0a;
case 0x452e0d:c.instructions+=4;goto B452e0d;
case 0x452e11:c.instructions+=3;goto B452e11;
case 0x452e15:c.instructions+=2;goto B452e15;
case 0x452e17:c.instructions+=1;goto B452e17;
case 0x452e1d:goto L452e1d;
case 0x452e1f:c.instructions+=4;goto B452e1f;
case 0x452e21:c.instructions+=3;goto B452e21;
case 0x452e23:c.instructions+=2;goto B452e23;
case 0x452e25:c.instructions+=1;goto B452e25;
case 0x452e27:goto L452e27;
case 0x452e28:c.instructions+=1;goto B452e28;
case 0x452e2a:goto L452e2a;
case 0x452e2b:c.instructions+=1;goto B452e2b;
case 0x452e2d:goto L452e2d;
case 0x452e30:c.instructions+=2;goto B452e30;
case 0x452e33:c.instructions+=1;goto B452e33;
case 0x452e35:goto L452e35;
case 0x452e38:c.instructions+=2;goto B452e38;
case 0x452e3b:c.instructions+=1;goto B452e3b;
case 0x452e3d:goto L452e3d;
case 0x452e40:c.instructions+=1;goto B452e40;
case 0x452e43:goto L452e43;
case 0x452e45:c.instructions+=1;goto B452e45;
case 0x452e47:goto L452e47;
case 0x452e4a:c.instructions+=2;goto B452e4a;
case 0x452e4c:c.instructions+=1;goto B452e4c;
case 0x452e50:goto L452e50;
case 0x452e52:c.instructions+=2;goto B452e52;
case 0x452e54:c.instructions+=1;goto B452e54;
case 0x452e56:goto L452e56;
case 0x452e59:c.instructions+=3;goto B452e59;
case 0x452e5b:c.instructions+=2;goto B452e5b;
case 0x452e5d:c.instructions+=1;goto B452e5d;
case 0x452e5f:goto L452e5f;
case 0x452e62:c.instructions+=4;goto B452e62;
case 0x452e64:c.instructions+=3;goto B452e64;
case 0x452e65:c.instructions+=2;goto B452e65;
case 0x452e68:c.instructions+=1;goto B452e68;
case 0x452e6d:goto L452e6d;
case 0x452e70:c.instructions+=3;goto B452e70;
case 0x452e73:c.instructions+=2;goto B452e73;
case 0x452e74:c.instructions+=1;goto B452e74;
case 0x452e77:goto L452e77;
case 0x452e79:c.instructions+=2;goto B452e79;
case 0x452e7b:c.instructions+=1;goto B452e7b;
case 0x452e7d:goto L452e7d;
case 0x452e80:c.instructions+=2;goto B452e80;
case 0x452e81:c.instructions+=1;goto B452e81;
case 0x452e83:goto L452e83;
case 0x452e84:c.instructions+=4;goto B452e84;
case 0x452e85:c.instructions+=3;goto B452e85;
case 0x452e86:c.instructions+=2;goto B452e86;
case 0x452e87:c.instructions+=1;goto B452e87;
case 0x452e90:goto L452e90;
case 0x452e94:c.instructions+=3;goto B452e94;
case 0x452e96:c.instructions+=2;goto B452e96;
case 0x452e9b:c.instructions+=1;goto B452e9b;
case 0x452e9d:goto L452e9d;
case 0x452ea2:c.instructions+=1;goto B452ea2;
case 0x452ea4:goto L452ea4;
case 0x452ea5:c.instructions+=2;goto B452ea5;
case 0x452eaa:c.instructions+=1;goto B452eaa;
case 0x452eaf:goto L452eaf;
case 0x452eb4:c.instructions+=1;goto B452eb4;
case 0x452eb5:goto L452eb5;
case 0x452eb7:c.instructions+=1;goto B452eb7;
case 0x452ec0:goto L452ec0;
case 0x452ec5:c.instructions+=1;goto B452ec5;
case 0x452ed0:goto L452ed0;
case 0x452ed1:c.instructions+=11;goto B452ed1;
case 0x452ed3:c.instructions+=10;goto B452ed3;
case 0x452ed6:c.instructions+=9;goto B452ed6;
case 0x452ed9:c.instructions+=8;goto B452ed9;
case 0x452edf:c.instructions+=7;goto B452edf;
case 0x452ee0:c.instructions+=6;goto B452ee0;
case 0x452ee3:c.instructions+=5;goto B452ee3;
case 0x452ee6:c.instructions+=4;goto B452ee6;
case 0x452ee8:c.instructions+=3;goto B452ee8;
case 0x452ee9:c.instructions+=2;goto B452ee9;
case 0x452eeb:c.instructions+=1;goto B452eeb;
case 0x452eed:goto L452eed;
case 0x452eef:c.instructions+=1;goto B452eef;
case 0x452ef2:goto L452ef2;
case 0x452ef6:c.instructions+=12;goto B452ef6;
case 0x452efc:c.instructions+=11;goto B452efc;
case 0x452efd:c.instructions+=10;goto B452efd;
case 0x452f01:c.instructions+=9;goto B452f01;
case 0x452f05:c.instructions+=8;goto B452f05;
case 0x452f0d:c.instructions+=7;goto B452f0d;
case 0x452f15:c.instructions+=6;goto B452f15;
case 0x452f1d:c.instructions+=5;goto B452f1d;
case 0x452f21:c.instructions+=4;goto B452f21;
case 0x452f27:c.instructions+=3;goto B452f27;
case 0x452f2a:c.instructions+=2;goto B452f2a;
case 0x452f2b:c.instructions+=1;goto B452f2b;
case 0x452f30:goto L452f30;
case 0x452f36:c.instructions+=40;goto B452f36;
case 0x452f3c:c.instructions+=39;goto B452f3c;
case 0x452f41:c.instructions+=38;goto B452f41;
case 0x452f45:c.instructions+=37;goto B452f45;
case 0x452f49:c.instructions+=36;goto B452f49;
case 0x452f4c:c.instructions+=35;goto B452f4c;
case 0x452f4f:c.instructions+=34;goto B452f4f;
case 0x452f52:c.instructions+=33;goto B452f52;
case 0x452f58:c.instructions+=32;goto B452f58;
case 0x452f5e:c.instructions+=31;goto B452f5e;
case 0x452f60:c.instructions+=30;goto B452f60;
case 0x452f65:c.instructions+=29;goto B452f65;
case 0x452f68:c.instructions+=28;goto B452f68;
case 0x452f6c:c.instructions+=27;goto B452f6c;
case 0x452f6f:c.instructions+=26;goto B452f6f;
case 0x452f75:c.instructions+=25;goto B452f75;
case 0x452f79:c.instructions+=24;goto B452f79;
case 0x452f7f:c.instructions+=23;goto B452f7f;
case 0x452f84:c.instructions+=22;goto B452f84;
case 0x452f87:c.instructions+=21;goto B452f87;
case 0x452f89:c.instructions+=20;goto B452f89;
case 0x452f8c:c.instructions+=19;goto B452f8c;
case 0x452f92:c.instructions+=18;goto B452f92;
case 0x452f98:c.instructions+=17;goto B452f98;
case 0x452f9c:c.instructions+=16;goto B452f9c;
case 0x452fa1:c.instructions+=15;goto B452fa1;
case 0x452fa3:c.instructions+=14;goto B452fa3;
case 0x452fa6:c.instructions+=13;goto B452fa6;
case 0x452faa:c.instructions+=12;goto B452faa;
case 0x452fad:c.instructions+=11;goto B452fad;
case 0x452fb3:c.instructions+=10;goto B452fb3;
case 0x452fb7:c.instructions+=9;goto B452fb7;
case 0x452fbd:c.instructions+=8;goto B452fbd;
case 0x452fbf:c.instructions+=7;goto B452fbf;
case 0x452fc5:c.instructions+=6;goto B452fc5;
case 0x452fc9:c.instructions+=5;goto B452fc9;
case 0x452fcb:c.instructions+=4;goto B452fcb;
case 0x452fcf:c.instructions+=3;goto B452fcf;
case 0x452fd2:c.instructions+=2;goto B452fd2;
case 0x452fd6:c.instructions+=1;goto B452fd6;
case 0x452fd8:goto L452fd8;
case 0x452fdd:goto L452fdd;
case 0x452fdf:c.instructions+=1;goto B452fdf;
case 0x452fe1:goto L452fe1;
case 0x452fe3:c.instructions+=1;goto B452fe3;
case 0x452fe8:goto L452fe8;
case 0x452fea:c.instructions+=1;goto B452fea;
case 0x452fec:goto L452fec;
case 0x452ff2:c.instructions+=3;goto B452ff2;
case 0x452ff6:c.instructions+=2;goto B452ff6;
case 0x452ffa:c.instructions+=1;goto B452ffa;
default:missing_instruction(c.pc);}
B452000:L452000:{c.instructions+=7;NFSU2_TR(0x452000);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B452002:{NFSU2_TR(0x452002);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B452003:{NFSU2_TR(0x452003);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B452004:{NFSU2_TR(0x452004);
u8 U[4];
w4(U+0,u32(u32(u32(0x1c8ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B45200b:{NFSU2_TR(0x45200b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45200c:{NFSU2_TR(0x45200c);
__builtin_memmove((R+4),(R+24),4);
}
B45200e:{NFSU2_TR(0x45200e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x452013ull));
TAIL_STATIC(0x444a70u,444);
}
B452013:L452013:{c.instructions+=4;NFSU2_TR(0x452013);
u8 U[4];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B452017:{NFSU2_TR(0x452017);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B452018:{NFSU2_TR(0x452018);
__builtin_memmove((R+4),(R+24),4);
}
B45201a:{NFSU2_TR(0x45201a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45201full));
TAIL_STATIC(0x444910u,444);
}
B45201f:L45201f:{c.instructions+=4;NFSU2_TR(0x45201f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B452022:{NFSU2_TR(0x452022);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B452023:{NFSU2_TR(0x452023);
w4(R+4,u32(0x828770ull));
}
B452028:{NFSU2_TR(0x452028);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45202dull));
TAIL_STATIC(0x442c80u,442);
}
B45202d:L45202d:{c.instructions+=12;NFSU2_TR(0x45202d);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B45202f:{NFSU2_TR(0x45202f);
{u32 ea_=u32(r4(R+24)+u32(108u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B452032:{NFSU2_TR(0x452032);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B452034:{NFSU2_TR(0x452034);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B452036:{NFSU2_TR(0x452036);
{u32 ea_=u32(r4(R+24)+u32(112u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B452039:{NFSU2_TR(0x452039);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B45203b:{NFSU2_TR(0x45203b);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B45203d:{NFSU2_TR(0x45203d);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B45203f:{NFSU2_TR(0x45203f);
__asm__ volatile(".byte 0xde,0xd9":::"memory");
}
B452041:{NFSU2_TR(0x452041);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B452043:{NFSU2_TR(0x452043);
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
B452046:{NFSU2_TR(0x452046);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4520ef;}}
}
B45204c:L45204c:{c.instructions+=4;NFSU2_TR(0x45204c);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B452050:{NFSU2_TR(0x452050);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B452051:{NFSU2_TR(0x452051);
u8 U[4];
w4(U+0,u32(u32(u32(0x254ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B452058:{NFSU2_TR(0x452058);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45205dull));
TAIL_STATIC(0x574d30u,574);
}
B45205d:L45205d:{c.instructions+=4;NFSU2_TR(0x45205d);
u8 U[4];
w4(U+0,u32(u32(u32(0xb0ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B452064:{NFSU2_TR(0x452064);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B452065:{NFSU2_TR(0x452065);
u8 U[4];
w4(U+0,u32(u32(u32(0x254ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B45206c:{NFSU2_TR(0x45206c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x452071ull));
TAIL_STATIC(0x574d50u,574);
}
B452071:L452071:{c.instructions+=4;NFSU2_TR(0x452071);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B452074:{NFSU2_TR(0x452074);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B452078:{NFSU2_TR(0x452078);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B452079:{NFSU2_TR(0x452079);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45207eull));
TAIL_STATIC(0x574c90u,574);
}
B45207e:L45207e:{c.instructions+=4;NFSU2_TR(0x45207e);
u8 U[4];
w4(U+0,u32(u32(u32(0xb0ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B452085:{NFSU2_TR(0x452085);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B452086:{NFSU2_TR(0x452086);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B452089:{NFSU2_TR(0x452089);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45208eull));
TAIL_STATIC(0x574cb0u,574);
}
B45208e:L45208e:{c.instructions+=4;NFSU2_TR(0x45208e);
u8 U[4];
w4(U+0,u32(u32(u32(0x80ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B452095:{NFSU2_TR(0x452095);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B452096:{NFSU2_TR(0x452096);
u8 U[4];
w4(U+0,u32(u32(u32(0x1c4ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B45209d:{NFSU2_TR(0x45209d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4520a2ull));
TAIL_STATIC(0x574d30u,574);
}
B4520a2:L4520a2:{c.instructions+=4;NFSU2_TR(0x4520a2);
u8 U[4];
w4(U+0,u32(u32(u32(0x70ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B4520a6:{NFSU2_TR(0x4520a6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4520a7:{NFSU2_TR(0x4520a7);
u8 U[4];
w4(U+0,u32(u32(u32(0x1c4ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B4520ae:{NFSU2_TR(0x4520ae);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4520b3ull));
TAIL_STATIC(0x574d50u,574);
}
B4520b3:L4520b3:{c.instructions+=4;NFSU2_TR(0x4520b3);
u8 U[4];
w4(U+0,u32(u32(u32(0x80ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B4520ba:{NFSU2_TR(0x4520ba);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4520bb:{NFSU2_TR(0x4520bb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4520be:{NFSU2_TR(0x4520be);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4520c3ull));
TAIL_STATIC(0x574c90u,574);
}
B4520c3:L4520c3:{c.instructions+=4;NFSU2_TR(0x4520c3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4520c6:{NFSU2_TR(0x4520c6);
u8 U[4];
w4(U+0,u32(u32(u32(0x70ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B4520ca:{NFSU2_TR(0x4520ca);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4520cb:{NFSU2_TR(0x4520cb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4520d0ull));
TAIL_STATIC(0x574cb0u,574);
}
B4520d0:L4520d0:{c.instructions+=4;NFSU2_TR(0x4520d0);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4520d4:{NFSU2_TR(0x4520d4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4520d7:{NFSU2_TR(0x4520d7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4520d8:{NFSU2_TR(0x4520d8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4520ddull));
TAIL_STATIC(0x441940u,441);
}
B4520dd:L4520dd:{c.instructions+=4;NFSU2_TR(0x4520dd);
u8 U[8];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4520e1:{NFSU2_TR(0x4520e1);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4520e2:{NFSU2_TR(0x4520e2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4520e5:{NFSU2_TR(0x4520e5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4520eaull));
TAIL_STATIC(0x441960u,441);
}
B4520ea:L4520ea:{c.instructions+=1;NFSU2_TR(0x4520ea);
{goto L45218a;}
}
B4520ef:L4520ef:{c.instructions+=4;NFSU2_TR(0x4520ef);
u8 U[4];
w4(U+0,u32(u32(u32(0x70ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B4520f3:{NFSU2_TR(0x4520f3);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4520f4:{NFSU2_TR(0x4520f4);
u8 U[4];
w4(U+0,u32(u32(u32(0x254ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B4520fb:{NFSU2_TR(0x4520fb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x452100ull));
TAIL_STATIC(0x574d30u,574);
}
B452100:L452100:{c.instructions+=4;NFSU2_TR(0x452100);
u8 U[4];
w4(U+0,u32(u32(u32(0x80ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B452107:{NFSU2_TR(0x452107);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B452108:{NFSU2_TR(0x452108);
u8 U[4];
w4(U+0,u32(u32(u32(0x254ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B45210f:{NFSU2_TR(0x45210f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x452114ull));
TAIL_STATIC(0x574d50u,574);
}
B452114:L452114:{c.instructions+=4;NFSU2_TR(0x452114);
u8 U[4];
w4(U+0,u32(u32(u32(0x70ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B452118:{NFSU2_TR(0x452118);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B452119:{NFSU2_TR(0x452119);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B45211c:{NFSU2_TR(0x45211c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x452121ull));
TAIL_STATIC(0x574cd0u,574);
}
B452121:L452121:{c.instructions+=4;NFSU2_TR(0x452121);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B452124:{NFSU2_TR(0x452124);
u8 U[4];
w4(U+0,u32(u32(u32(0x80ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B45212b:{NFSU2_TR(0x45212b);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45212c:{NFSU2_TR(0x45212c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x452131ull));
TAIL_STATIC(0x574cf0u,574);
}
B452131:L452131:{c.instructions+=4;NFSU2_TR(0x452131);
u8 U[4];
w4(U+0,u32(u32(u32(0xb0ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B452138:{NFSU2_TR(0x452138);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B452139:{NFSU2_TR(0x452139);
u8 U[4];
w4(U+0,u32(u32(u32(0x1c4ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B452140:{NFSU2_TR(0x452140);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x452145ull));
TAIL_STATIC(0x574d30u,574);
}
B452145:L452145:{c.instructions+=4;NFSU2_TR(0x452145);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B452149:{NFSU2_TR(0x452149);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45214a:{NFSU2_TR(0x45214a);
u8 U[4];
w4(U+0,u32(u32(u32(0x1c4ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B452151:{NFSU2_TR(0x452151);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x452156ull));
TAIL_STATIC(0x574d50u,574);
}
B452156:L452156:{c.instructions+=4;NFSU2_TR(0x452156);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B452159:{NFSU2_TR(0x452159);
u8 U[4];
w4(U+0,u32(u32(u32(0xb0ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B452160:{NFSU2_TR(0x452160);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B452161:{NFSU2_TR(0x452161);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x452166ull));
TAIL_STATIC(0x574cd0u,574);
}
B452166:L452166:{c.instructions+=4;NFSU2_TR(0x452166);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B452169:{NFSU2_TR(0x452169);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B45216d:{NFSU2_TR(0x45216d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45216e:{NFSU2_TR(0x45216e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x452173ull));
TAIL_STATIC(0x574cf0u,574);
}
B452173:L452173:{c.instructions+=4;NFSU2_TR(0x452173);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B452177:{NFSU2_TR(0x452177);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B452178:{NFSU2_TR(0x452178);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B45217b:{NFSU2_TR(0x45217b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x452180ull));
TAIL_STATIC(0x441980u,441);
}
B452180:L452180:{c.instructions+=3;NFSU2_TR(0x452180);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B452183:{NFSU2_TR(0x452183);
u8 U[8];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B452187:{NFSU2_TR(0x452187);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45218a:L45218a:{c.instructions+=3;NFSU2_TR(0x45218a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B45218d:{NFSU2_TR(0x45218d);
__builtin_memmove((R+4),(R+12),4);
}
B45218f:{NFSU2_TR(0x45218f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x452194ull));
TAIL_STATIC(0x574830u,574);
}
B452194:L452194:{c.instructions+=2;NFSU2_TR(0x452194);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x30ull))));
__builtin_memmove((R+4),(U+0),4);
}
B452197:{NFSU2_TR(0x452197);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45219cull));
TAIL_STATIC(0x574830u,574);
}
B45219c:L45219c:{c.instructions+=2;NFSU2_TR(0x45219c);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x60ull))));
__builtin_memmove((R+4),(U+0),4);
}
B45219f:{NFSU2_TR(0x45219f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4521a4ull));
TAIL_STATIC(0x574830u,574);
}
B4521a4:L4521a4:{c.instructions+=3;NFSU2_TR(0x4521a4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B4521a7:{NFSU2_TR(0x4521a7);
__builtin_memmove((R+4),(R+12),4);
}
B4521a9:{NFSU2_TR(0x4521a9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4521aeull));
TAIL_STATIC(0x574830u,574);
}
B4521ae:L4521ae:{c.instructions+=2;NFSU2_TR(0x4521ae);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x30ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4521b1:{NFSU2_TR(0x4521b1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4521b6ull));
TAIL_STATIC(0x574830u,574);
}
B4521b6:L4521b6:{c.instructions+=2;NFSU2_TR(0x4521b6);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x60ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4521b9:{NFSU2_TR(0x4521b9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4521beull));
TAIL_STATIC(0x574830u,574);
}
B4521be:L4521be:{c.instructions+=2;NFSU2_TR(0x4521be);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4521c1:{NFSU2_TR(0x4521c1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4521c6ull));
TAIL_STATIC(0x574830u,574);
}
B4521c6:L4521c6:{c.instructions+=8;NFSU2_TR(0x4521c6);
{u32 ea_=u32(r4(R+28)+u32(80u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4521c9:{NFSU2_TR(0x4521c9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4521cc:{NFSU2_TR(0x4521cc);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B4521ce:{NFSU2_TR(0x4521ce);
w4(R+12,u32(0x2ull));
}
B4521d3:{NFSU2_TR(0x4521d3);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B4521d6:{NFSU2_TR(0x4521d6);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4521d8:{NFSU2_TR(0x4521d8);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B4521db:{NFSU2_TR(0x4521db);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L4521e1;}}
}
B4521dd:L4521dd:{c.instructions+=1;NFSU2_TR(0x4521dd);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+12),2);
s2(u32(r4(U+0)),r2(U+4));
}
B4521e1:L4521e1:{c.instructions+=7;NFSU2_TR(0x4521e1);
{u32 ea_=u32(r4(R+28)+u32(84u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4521e4:{NFSU2_TR(0x4521e4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4521e7:{NFSU2_TR(0x4521e7);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B4521ea:{NFSU2_TR(0x4521ea);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B4521ec:{NFSU2_TR(0x4521ec);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4521ee:{NFSU2_TR(0x4521ee);
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
B4521f1:{NFSU2_TR(0x4521f1);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L4521f7;}}
}
B4521f3:L4521f3:{c.instructions+=1;NFSU2_TR(0x4521f3);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+12),2);
s2(u32(r4(U+0)),r2(U+4));
}
B4521f7:L4521f7:{c.instructions+=2;NFSU2_TR(0x4521f7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4521fa:{NFSU2_TR(0x4521fa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4521ffull));
TAIL_STATIC(0x574830u,574);
}
B4521ff:L4521ff:{c.instructions+=7;NFSU2_TR(0x4521ff);
{u32 ea_=u32(r4(R+28)+u32(88u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B452202:{NFSU2_TR(0x452202);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B452205:{NFSU2_TR(0x452205);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B452207:{NFSU2_TR(0x452207);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B45220a:{NFSU2_TR(0x45220a);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B45220c:{NFSU2_TR(0x45220c);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B45220f:{NFSU2_TR(0x45220f);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L452215;}}
}
B452211:L452211:{c.instructions+=1;NFSU2_TR(0x452211);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+12),2);
s2(u32(r4(U+0)),r2(U+4));
}
B452215:L452215:{c.instructions+=7;NFSU2_TR(0x452215);
{u32 ea_=u32(r4(R+28)+u32(92u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B452218:{NFSU2_TR(0x452218);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B45221b:{NFSU2_TR(0x45221b);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B45221e:{NFSU2_TR(0x45221e);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B452220:{NFSU2_TR(0x452220);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B452222:{NFSU2_TR(0x452222);
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
B452225:{NFSU2_TR(0x452225);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L45222b;}}
}
B452227:L452227:{c.instructions+=1;NFSU2_TR(0x452227);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+12),2);
s2(u32(r4(U+0)),r2(U+4));
}
B45222b:L45222b:{c.instructions+=2;NFSU2_TR(0x45222b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B45222e:{NFSU2_TR(0x45222e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x452233ull));
TAIL_STATIC(0x574830u,574);
}
B452233:L452233:{c.instructions+=7;NFSU2_TR(0x452233);
{u32 ea_=u32(r4(R+28)+u32(96u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B452236:{NFSU2_TR(0x452236);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B452239:{NFSU2_TR(0x452239);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B45223b:{NFSU2_TR(0x45223b);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B45223e:{NFSU2_TR(0x45223e);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B452240:{NFSU2_TR(0x452240);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B452243:{NFSU2_TR(0x452243);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L452249;}}
}
B452245:L452245:{c.instructions+=1;NFSU2_TR(0x452245);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+12),2);
s2(u32(r4(U+0)),r2(U+4));
}
B452249:L452249:{c.instructions+=7;NFSU2_TR(0x452249);
{u32 ea_=u32(r4(R+28)+u32(100u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B45224c:{NFSU2_TR(0x45224c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B45224f:{NFSU2_TR(0x45224f);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B452252:{NFSU2_TR(0x452252);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B452254:{NFSU2_TR(0x452254);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B452256:{NFSU2_TR(0x452256);
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
B452259:{NFSU2_TR(0x452259);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L45225f;}}
}
B45225b:L45225b:{c.instructions+=1;NFSU2_TR(0x45225b);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+12),2);
s2(u32(r4(U+0)),r2(U+4));
}
B45225f:L45225f:{c.instructions+=2;NFSU2_TR(0x45225f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B452262:{NFSU2_TR(0x452262);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x452267ull));
TAIL_STATIC(0x574830u,574);
}
B452267:L452267:{c.instructions+=7;NFSU2_TR(0x452267);
{u32 ea_=u32(r4(R+28)+u32(104u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B45226a:{NFSU2_TR(0x45226a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B45226d:{NFSU2_TR(0x45226d);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B45226f:{NFSU2_TR(0x45226f);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B452272:{NFSU2_TR(0x452272);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B452274:{NFSU2_TR(0x452274);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B452277:{NFSU2_TR(0x452277);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L45227d;}}
}
B452279:L452279:{c.instructions+=1;NFSU2_TR(0x452279);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+12),2);
s2(u32(r4(U+0)),r2(U+4));
}
B45227d:L45227d:{c.instructions+=7;NFSU2_TR(0x45227d);
{u32 ea_=u32(r4(R+28)+u32(108u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B452280:{NFSU2_TR(0x452280);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B452283:{NFSU2_TR(0x452283);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B452286:{NFSU2_TR(0x452286);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B452288:{NFSU2_TR(0x452288);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B45228a:{NFSU2_TR(0x45228a);
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
B45228d:{NFSU2_TR(0x45228d);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L452293;}}
}
B45228f:L45228f:{c.instructions+=1;NFSU2_TR(0x45228f);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+12),2);
s2(u32(r4(U+0)),r2(U+4));
}
B452293:L452293:{c.instructions+=2;NFSU2_TR(0x452293);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B452296:{NFSU2_TR(0x452296);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45229bull));
TAIL_STATIC(0x574830u,574);
}
B45229b:L45229b:{c.instructions+=9;NFSU2_TR(0x45229b);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(r1(U+4)));
}
B45229f:{NFSU2_TR(0x45229f);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4522a3:{NFSU2_TR(0x4522a3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4522a6:{NFSU2_TR(0x4522a6);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B4522aa:{NFSU2_TR(0x4522aa);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B4522ac:{NFSU2_TR(0x4522ac);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B4522af:{NFSU2_TR(0x4522af);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4522b1:{NFSU2_TR(0x4522b1);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B4522b4:{NFSU2_TR(0x4522b4);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L4522ba;}}
}
B4522b6:L4522b6:{c.instructions+=1;NFSU2_TR(0x4522b6);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+12),2);
s2(u32(r4(U+0)),r2(U+4));
}
B4522ba:L4522ba:{c.instructions+=9;NFSU2_TR(0x4522ba);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x71ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+8,u32(r1(U+4)));
}
B4522be:{NFSU2_TR(0x4522be);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4522c1:{NFSU2_TR(0x4522c1);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4522c5:{NFSU2_TR(0x4522c5);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B4522c9:{NFSU2_TR(0x4522c9);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B4522cc:{NFSU2_TR(0x4522cc);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B4522ce:{NFSU2_TR(0x4522ce);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4522d0:{NFSU2_TR(0x4522d0);
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
B4522d3:{NFSU2_TR(0x4522d3);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L4522d9;}}
}
B4522d5:L4522d5:{c.instructions+=1;NFSU2_TR(0x4522d5);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+12),2);
s2(u32(r4(U+0)),r2(U+4));
}
B4522d9:L4522d9:{c.instructions+=2;NFSU2_TR(0x4522d9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4522dc:{NFSU2_TR(0x4522dc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4522e1ull));
TAIL_STATIC(0x574830u,574);
}
B4522e1:L4522e1:{c.instructions+=9;NFSU2_TR(0x4522e1);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x72ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B4522e5:{NFSU2_TR(0x4522e5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4522e8:{NFSU2_TR(0x4522e8);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4522ec:{NFSU2_TR(0x4522ec);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B4522f0:{NFSU2_TR(0x4522f0);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B4522f2:{NFSU2_TR(0x4522f2);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B4522f5:{NFSU2_TR(0x4522f5);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4522f7:{NFSU2_TR(0x4522f7);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B4522fa:{NFSU2_TR(0x4522fa);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L452300;}}
}
B4522fc:L4522fc:{c.instructions+=1;NFSU2_TR(0x4522fc);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+12),2);
s2(u32(r4(U+0)),r2(U+4));
}
B452300:L452300:{c.instructions+=9;NFSU2_TR(0x452300);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x73ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(r1(U+4)));
}
B452304:{NFSU2_TR(0x452304);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B452308:{NFSU2_TR(0x452308);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B45230b:{NFSU2_TR(0x45230b);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B45230f:{NFSU2_TR(0x45230f);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B452312:{NFSU2_TR(0x452312);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B452314:{NFSU2_TR(0x452314);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B452316:{NFSU2_TR(0x452316);
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
B452319:{NFSU2_TR(0x452319);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L45231f;}}
}
B45231b:L45231b:{c.instructions+=1;NFSU2_TR(0x45231b);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+12),2);
s2(u32(r4(U+0)),r2(U+4));
}
B45231f:L45231f:{c.instructions+=2;NFSU2_TR(0x45231f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B452322:{NFSU2_TR(0x452322);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x452327ull));
TAIL_STATIC(0x574830u,574);
}
B452327:L452327:{c.instructions+=9;NFSU2_TR(0x452327);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x74ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+8,u32(r1(U+4)));
}
B45232b:{NFSU2_TR(0x45232b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B45232e:{NFSU2_TR(0x45232e);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B452332:{NFSU2_TR(0x452332);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B452336:{NFSU2_TR(0x452336);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B452338:{NFSU2_TR(0x452338);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B45233b:{NFSU2_TR(0x45233b);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B45233d:{NFSU2_TR(0x45233d);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B452340:{NFSU2_TR(0x452340);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L452346;}}
}
B452342:L452342:{c.instructions+=1;NFSU2_TR(0x452342);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+12),2);
s2(u32(r4(U+0)),r2(U+4));
}
B452346:L452346:{c.instructions+=9;NFSU2_TR(0x452346);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x75ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B45234a:{NFSU2_TR(0x45234a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B45234d:{NFSU2_TR(0x45234d);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B452351:{NFSU2_TR(0x452351);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B452355:{NFSU2_TR(0x452355);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B452358:{NFSU2_TR(0x452358);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B45235a:{NFSU2_TR(0x45235a);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B45235c:{NFSU2_TR(0x45235c);
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
B45235f:{NFSU2_TR(0x45235f);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L452365;}}
}
B452361:L452361:{c.instructions+=1;NFSU2_TR(0x452361);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+12),2);
s2(u32(r4(U+0)),r2(U+4));
}
B452365:L452365:{c.instructions+=2;NFSU2_TR(0x452365);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B452368:{NFSU2_TR(0x452368);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45236dull));
TAIL_STATIC(0x574830u,574);
}
B45236d:L45236d:{c.instructions+=28;NFSU2_TR(0x45236d);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x76ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(r1(U+4)));
}
B452371:{NFSU2_TR(0x452371);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x77ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+8,u32(r1(U+4)));
}
B452375:{NFSU2_TR(0x452375);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B452379:{NFSU2_TR(0x452379);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45237d:{NFSU2_TR(0x45237d);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x79ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(r1(U+4)));
}
B452381:{NFSU2_TR(0x452381);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B452385:{NFSU2_TR(0x452385);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B452389:{NFSU2_TR(0x452389);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x7aull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+8,u32(r1(U+4)));
}
B45238d:{NFSU2_TR(0x45238d);
{u32 ea_=u32(r4(R+16)+u32(144u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B452394:{NFSU2_TR(0x452394);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B452398:{NFSU2_TR(0x452398);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45239c:{NFSU2_TR(0x45239c);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x7bull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B4523a0:{NFSU2_TR(0x4523a0);
{u32 ea_=u32(r4(R+16)+u32(148u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4523a7:{NFSU2_TR(0x4523a7);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B4523ab:{NFSU2_TR(0x4523ab);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4523af:{NFSU2_TR(0x4523af);
u8 U[4];
w4(U+0,u32(u32(u32(0x90ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B4523b6:{NFSU2_TR(0x4523b6);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4523b7:{NFSU2_TR(0x4523b7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4523ba:{NFSU2_TR(0x4523ba);
{u32 ea_=u32(r4(R+16)+u32(156u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4523c1:{NFSU2_TR(0x4523c1);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B4523c5:{NFSU2_TR(0x4523c5);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4523c9:{NFSU2_TR(0x4523c9);
{u32 ea_=u32(r4(R+16)+u32(164u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4523d0:{NFSU2_TR(0x4523d0);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B4523d4:{NFSU2_TR(0x4523d4);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4523d8:{NFSU2_TR(0x4523d8);
{u32 ea_=u32(r4(R+16)+u32(168u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4523df:{NFSU2_TR(0x4523df);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B4523e3:{NFSU2_TR(0x4523e3);
{u32 ea_=u32(r4(R+16)+u32(172u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4523ea:{NFSU2_TR(0x4523ea);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4523efull));
TAIL_STATIC(0x574c90u,574);
}
B4523ef:L4523ef:{c.instructions+=4;NFSU2_TR(0x4523ef);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4523f2:{NFSU2_TR(0x4523f2);
u8 U[4];
w4(U+0,u32(u32(u32(0xa0ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B4523f9:{NFSU2_TR(0x4523f9);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4523fa:{NFSU2_TR(0x4523fa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4523ffull));
TAIL_STATIC(0x574cd0u,574);
}
B4523ff:L4523ff:{c.instructions+=3;NFSU2_TR(0x4523ff);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B452402:{NFSU2_TR(0x452402);
__builtin_memmove((R+4),(R+12),4);
}
B452404:{NFSU2_TR(0x452404);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x452409ull));
TAIL_STATIC(0x574830u,574);
}
B452409:L452409:{c.instructions+=2;NFSU2_TR(0x452409);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x30ull))));
__builtin_memmove((R+4),(U+0),4);
}
B45240c:{NFSU2_TR(0x45240c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x452411ull));
TAIL_STATIC(0x574830u,574);
}
B452411:L452411:{c.instructions+=2;NFSU2_TR(0x452411);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x60ull))));
__builtin_memmove((R+4),(U+0),4);
}
B452414:{NFSU2_TR(0x452414);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x452419ull));
TAIL_STATIC(0x574830u,574);
}
B452419:L452419:{c.instructions+=20;NFSU2_TR(0x452419);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x7cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B45241d:{NFSU2_TR(0x45241d);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x7dull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(r1(U+4)));
}
B452421:{NFSU2_TR(0x452421);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x7eull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+8,u32(r1(U+4)));
}
B452425:{NFSU2_TR(0x452425);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B452429:{NFSU2_TR(0x452429);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x7full))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B45242d:{NFSU2_TR(0x45242d);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B452431:{NFSU2_TR(0x452431);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B452435:{NFSU2_TR(0x452435);
u8 U[4];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B452439:{NFSU2_TR(0x452439);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B45243d:{NFSU2_TR(0x45243d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45243e:{NFSU2_TR(0x45243e);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B452442:{NFSU2_TR(0x452442);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B452445:{NFSU2_TR(0x452445);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B452449:{NFSU2_TR(0x452449);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B45244d:{NFSU2_TR(0x45244d);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B452451:{NFSU2_TR(0x452451);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B452455:{NFSU2_TR(0x452455);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B452459:{NFSU2_TR(0x452459);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B45245d:{NFSU2_TR(0x45245d);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B452461:{NFSU2_TR(0x452461);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x452466ull));
TAIL_STATIC(0x574b10u,574);
}
B452466:L452466:{c.instructions+=4;NFSU2_TR(0x452466);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B452469:{NFSU2_TR(0x452469);
u8 U[4];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B45246d:{NFSU2_TR(0x45246d);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45246e:{NFSU2_TR(0x45246e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x452473ull));
TAIL_STATIC(0x574b90u,574);
}
B452473:L452473:{c.instructions+=3;NFSU2_TR(0x452473);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B452476:{NFSU2_TR(0x452476);
__builtin_memmove((R+4),(R+12),4);
}
B452478:{NFSU2_TR(0x452478);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45247dull));
TAIL_STATIC(0x574830u,574);
}
B45247d:L45247d:{c.instructions+=2;NFSU2_TR(0x45247d);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x30ull))));
__builtin_memmove((R+4),(U+0),4);
}
B452480:{NFSU2_TR(0x452480);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x452485ull));
TAIL_STATIC(0x574830u,574);
}
B452485:L452485:{c.instructions+=9;NFSU2_TR(0x452485);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x80ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B45248c:{NFSU2_TR(0x45248c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B45248f:{NFSU2_TR(0x45248f);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B452493:{NFSU2_TR(0x452493);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B452497:{NFSU2_TR(0x452497);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B452499:{NFSU2_TR(0x452499);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B45249c:{NFSU2_TR(0x45249c);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B45249e:{NFSU2_TR(0x45249e);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B4524a1:{NFSU2_TR(0x4524a1);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L4524a9;}}
}
B4524a3:L4524a3:{c.instructions+=1;NFSU2_TR(0x4524a3);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2cull))));
w2(U+4,u16(0x2ull));
s2(u32(r4(U+0)),r2(U+4));
}
B4524a9:L4524a9:{c.instructions+=9;NFSU2_TR(0x4524a9);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x81ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(r1(U+4)));
}
B4524b0:{NFSU2_TR(0x4524b0);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4524b4:{NFSU2_TR(0x4524b4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4524b7:{NFSU2_TR(0x4524b7);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B4524bb:{NFSU2_TR(0x4524bb);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B4524be:{NFSU2_TR(0x4524be);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B4524c0:{NFSU2_TR(0x4524c0);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4524c2:{NFSU2_TR(0x4524c2);
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
B4524c5:{NFSU2_TR(0x4524c5);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L4524cd;}}
}
B4524c7:L4524c7:{c.instructions+=1;NFSU2_TR(0x4524c7);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2cull))));
w2(U+4,u16(0x2ull));
s2(u32(r4(U+0)),r2(U+4));
}
B4524cd:L4524cd:{c.instructions+=2;NFSU2_TR(0x4524cd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4524d0:{NFSU2_TR(0x4524d0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4524d5ull));
TAIL_STATIC(0x574830u,574);
}
B4524d5:L4524d5:{c.instructions+=3;NFSU2_TR(0x4524d5);
__builtin_memmove((R+0),gp(0x7faaa8),4);
}
B4524da:{NFSU2_TR(0x4524da);
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
B4524dc:{NFSU2_TR(0x4524dc);
if(r1(R+518)){{goto L45250a;}}
}
B4524de:L4524de:{c.instructions+=3;NFSU2_TR(0x4524de);
u8 U[5];
w4(U+0,u32(u32(u32(0x1full))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B4524e2:{NFSU2_TR(0x4524e2);
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
B4524e4:{NFSU2_TR(0x4524e4);
if(r1(R+518)){{goto L45250a;}}
}
B4524e6:L4524e6:{c.instructions+=3;NFSU2_TR(0x4524e6);
__builtin_memmove((R+0),gp(0x82a3a4),4);
}
B4524eb:{NFSU2_TR(0x4524eb);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4524ed:{NFSU2_TR(0x4524ed);
if(r1(R+518)){{goto L4524f4;}}
}
B4524ef:L4524ef:{c.instructions+=2;NFSU2_TR(0x4524ef);
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
B4524f2:{NFSU2_TR(0x4524f2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L45250a;}}
}
B4524f4:L4524f4:{c.instructions+=3;NFSU2_TR(0x4524f4);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x84ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4524fa:{NFSU2_TR(0x4524fa);
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
B4524fc:{NFSU2_TR(0x4524fc);
if(r1(R+518)){{goto L45250a;}}
}
B4524fe:L4524fe:{c.instructions+=3;NFSU2_TR(0x4524fe);
__builtin_memmove((R+4),gp(0x82b884),4);
}
B452504:{NFSU2_TR(0x452504);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B452505:{NFSU2_TR(0x452505);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45250aull));
TAIL_STATIC(0x4031c0u,403);
}
B45250a:L45250a:{c.instructions+=6;NFSU2_TR(0x45250a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B45250b:{NFSU2_TR(0x45250b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B45250c:{NFSU2_TR(0x45250c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B45250d:{NFSU2_TR(0x45250d);
__builtin_memmove((R+16),(R+20),4);
}
B45250f:{NFSU2_TR(0x45250f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B452510:{NFSU2_TR(0x452510);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B452520:L452520:{c.instructions+=15;NFSU2_TR(0x452520);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B452521:{NFSU2_TR(0x452521);
__builtin_memmove((R+20),(R+16),4);
}
B452523:{NFSU2_TR(0x452523);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B452525:{NFSU2_TR(0x452525);
u8 U[4];
w4(U+0,u32(0x772068ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45252a:{NFSU2_TR(0x45252a);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B452530:{NFSU2_TR(0x452530);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B452531:{NFSU2_TR(0x452531);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B452538:{NFSU2_TR(0x452538);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B452539:{NFSU2_TR(0x452539);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B45253c:{NFSU2_TR(0x45253c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45253d:{NFSU2_TR(0x45253d);
u8 U[4];
w4(U+0,u32(0x14ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45253f:{NFSU2_TR(0x45253f);
__builtin_memmove((R+24),(R+4),4);
}
B452541:{NFSU2_TR(0x452541);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B452542:{NFSU2_TR(0x452542);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B452545:{NFSU2_TR(0x452545);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45254aull));
TAIL_STATIC(0x44ab90u,44a);
}
B45254a:L45254a:{c.instructions+=12;NFSU2_TR(0x45254a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B45254d:{NFSU2_TR(0x45254d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B452550:{NFSU2_TR(0x452550);
u8 U[4];
w4(U+0,u32(0x7880d8ull));
s4(u32(r4(R+24)),r4(U+0));
}
B452556:{NFSU2_TR(0x452556);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B452559:{NFSU2_TR(0x452559);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x270ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B452560:{NFSU2_TR(0x452560);
__builtin_memmove((R+8),gp(0x7fb708),4);
}
B452566:{NFSU2_TR(0x452566);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B452568:{NFSU2_TR(0x452568);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x27cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45256e:{NFSU2_TR(0x45256e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B452571:{NFSU2_TR(0x452571);
u8 U[8];
__builtin_memmove((U+0),gp(0x828640),4);
w4(U+4,u32(u32(r4(U+0))-u32(r4(R+4))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B452577:{NFSU2_TR(0x452577);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45257a:{NFSU2_TR(0x45257a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L452585;}}
}
B45257c:L45257c:{c.instructions+=2;NFSU2_TR(0x45257c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B45257f:{NFSU2_TR(0x45257f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x280ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B452585:L452585:{c.instructions+=20;NFSU2_TR(0x452585);
__builtin_memmove((R+4),gp(0x78722c),4);
}
B45258b:{NFSU2_TR(0x45258b);
__builtin_memmove((R+8),gp(0x787230),4);
}
B452591:{NFSU2_TR(0x452591);
__builtin_memmove((R+0),gp(0x787234),4);
}
B452596:{NFSU2_TR(0x452596);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B452599:{NFSU2_TR(0x452599);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45259c:{NFSU2_TR(0x45259c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45259f:{NFSU2_TR(0x45259f);
__builtin_memmove((R+4),gp(0x7ec7a0),4);
}
B4525a5:{NFSU2_TR(0x4525a5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4525a8:{NFSU2_TR(0x4525a8);
__builtin_memmove((R+8),gp(0x7ec7a4),4);
}
B4525ae:{NFSU2_TR(0x4525ae);
__builtin_memmove((R+4),gp(0x787238),4);
}
B4525b4:{NFSU2_TR(0x4525b4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4525b7:{NFSU2_TR(0x4525b7);
__builtin_memmove((R+0),gp(0x7ec7a8),4);
}
B4525bc:{NFSU2_TR(0x4525bc);
__builtin_memmove((R+8),gp(0x78723c),4);
}
B4525c2:{NFSU2_TR(0x4525c2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x48ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4525c5:{NFSU2_TR(0x4525c5);
__builtin_memmove((R+0),gp(0x787240),4);
}
B4525ca:{NFSU2_TR(0x4525ca);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4525cd:{NFSU2_TR(0x4525cd);
__builtin_memmove((R+4),(R+24),4);
}
B4525cf:{NFSU2_TR(0x4525cf);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4525d2:{NFSU2_TR(0x4525d2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4525d5:{NFSU2_TR(0x4525d5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4525daull));
TAIL_STATIC(0x44ef60u,44e);
}
B4525da:L4525da:{c.instructions+=2;NFSU2_TR(0x4525da);
__builtin_memmove((R+4),(R+24),4);
}
B4525dc:{NFSU2_TR(0x4525dc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4525e1ull));
TAIL_STATIC(0x446400u,446);
}
B4525e1:L4525e1:{c.instructions+=7;NFSU2_TR(0x4525e1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4525e4:{NFSU2_TR(0x4525e4);
__builtin_memmove((R+0),(R+24),4);
}
B4525e6:{NFSU2_TR(0x4525e6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4525e7:{NFSU2_TR(0x4525e7);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4525ee:{NFSU2_TR(0x4525ee);
__builtin_memmove((R+16),(R+20),4);
}
B4525f0:{NFSU2_TR(0x4525f0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4525f1:{NFSU2_TR(0x4525f1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B452600:L452600:{c.instructions+=17;NFSU2_TR(0x452600);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B452601:{NFSU2_TR(0x452601);
__builtin_memmove((R+20),(R+16),4);
}
B452603:{NFSU2_TR(0x452603);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B452606:{NFSU2_TR(0x452606);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B452608:{NFSU2_TR(0x452608);
u8 U[4];
w4(U+0,u32(0x77218bull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45260d:{NFSU2_TR(0x45260d);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B452613:{NFSU2_TR(0x452613);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B452614:{NFSU2_TR(0x452614);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45261b:{NFSU2_TR(0x45261b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xfcull))));
}
B452621:{NFSU2_TR(0x452621);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B452624:{NFSU2_TR(0x452624);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B452625:{NFSU2_TR(0x452625);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B452626:{NFSU2_TR(0x452626);
u8 U[4];
w4(U+0,u32(0x15ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B452628:{NFSU2_TR(0x452628);
__builtin_memmove((R+24),(R+4),4);
}
B45262a:{NFSU2_TR(0x45262a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45262b:{NFSU2_TR(0x45262b);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45262f:{NFSU2_TR(0x45262f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x452634ull));
TAIL_STATIC(0x44ab90u,44a);
}
B452634:L452634:{c.instructions+=25;NFSU2_TR(0x452634);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B452637:{NFSU2_TR(0x452637);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B45263a:{NFSU2_TR(0x45263a);
w4(R+0,u32(0x40e66666ull));
}
B45263f:{NFSU2_TR(0x45263f);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B452641:{NFSU2_TR(0x452641);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B452644:{NFSU2_TR(0x452644);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B452647:{NFSU2_TR(0x452647);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45264a:{NFSU2_TR(0x45264a);
w4(R+0,u32(0x70a0ull));
}
B45264f:{NFSU2_TR(0x45264f);
u8 U[4];
w4(U+0,u32(0x788070ull));
s4(u32(r4(R+24)),r4(U+0));
}
B452655:{NFSU2_TR(0x452655);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
w4(U+4,u32(0x40a00000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B45265c:{NFSU2_TR(0x45265c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3cull))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B452663:{NFSU2_TR(0x452663);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B452667:{NFSU2_TR(0x452667);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45266a:{NFSU2_TR(0x45266a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x48ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45266d:{NFSU2_TR(0x45266d);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B452671:{NFSU2_TR(0x452671);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4eull))));
w2(U+4,u16(0x8150ull));
s2(u32(r4(U+0)),r2(U+4));
}
B452677:{NFSU2_TR(0x452677);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
w2(U+4,u16(0xe270ull));
s2(u32(r4(U+0)),r2(U+4));
}
B45267d:{NFSU2_TR(0x45267d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B452680:{NFSU2_TR(0x452680);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B452683:{NFSU2_TR(0x452683);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
w4(U+4,u32(0x18ull));
s4(u32(r4(U+0)),r4(U+4));
}
B45268a:{NFSU2_TR(0x45268a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45268d:{NFSU2_TR(0x45268d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B452693:{NFSU2_TR(0x452693);
u8 U[8];
__builtin_memmove((U+0),gp(0x828640),4);
w4(U+4,u32(u32(r4(U+0))-u32(r4(R+28))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B452699:{NFSU2_TR(0x452699);
u8 U[8];
w4(U+0,u32(u32(u32(0x10cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4526a0:{NFSU2_TR(0x4526a0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4526d0;}}
}
B4526a2:L4526a2:{c.instructions+=4;NFSU2_TR(0x4526a2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4526a5:{NFSU2_TR(0x4526a5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x280ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4526ab:{NFSU2_TR(0x4526ab);
u8 U[8];
__builtin_memmove((U+0),gp(0x828640),4);
w4(U+4,u32(u32(r4(U+0))-u32(r4(R+28))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4526b1:{NFSU2_TR(0x4526b1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4526d0;}}
}
B4526b3:L4526b3:{c.instructions+=4;NFSU2_TR(0x4526b3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4526b6:{NFSU2_TR(0x4526b6);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x284ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4526bc:{NFSU2_TR(0x4526bc);
u8 U[8];
__builtin_memmove((U+0),gp(0x828640),4);
w4(U+4,u32(u32(r4(U+0))-u32(r4(R+28))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4526c2:{NFSU2_TR(0x4526c2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4526d0;}}
}
B4526c4:L4526c4:{c.instructions+=2;NFSU2_TR(0x4526c4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4526c7:{NFSU2_TR(0x4526c7);
u8 U[6];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xc4ull))));
w2(U+4,u16(0x32dcull));
s2(u32(r4(U+0)),r2(U+4));
}
B4526d0:L4526d0:{c.instructions+=3;NFSU2_TR(0x4526d0);
__builtin_memmove((R+4),(R+24),4);
}
B4526d2:{NFSU2_TR(0x4526d2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb4ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4526d8:{NFSU2_TR(0x4526d8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4526ddull));
TAIL_STATIC(0x44f2b0u,44f);
}
B4526dd:L4526dd:{c.instructions+=3;NFSU2_TR(0x4526dd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4526e0:{NFSU2_TR(0x4526e0);
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
B4526e2:{NFSU2_TR(0x4526e2);
if(r1(R+518)){{goto L4529c8;}}
}
B4526e8:L4526e8:{c.instructions+=14;NFSU2_TR(0x4526e8);
{u32 ea_=u32(r4(R+0)+u32(80u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4526eb:{NFSU2_TR(0x4526eb);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),u32(0xd0ull)));
w1(R+523,scarry<u32>(r4(R+0),u32(0xd0ull)));
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xd0ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4526f0:{NFSU2_TR(0x4526f0);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B4526f2:{NFSU2_TR(0x4526f2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4526f3:{NFSU2_TR(0x4526f3);
{u32 ea_=u32(r4(R+16)+u32(244u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4526fa:{NFSU2_TR(0x4526fa);
{u32 ea_=u32(r4(R+0)+u32(4294967172u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4526fd:{NFSU2_TR(0x4526fd);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B4526ff:{NFSU2_TR(0x4526ff);
{u32 ea_=u32(r4(R+16)+u32(248u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B452706:{NFSU2_TR(0x452706);
{u32 ea_=u32(r4(R+0)+u32(4294967176u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B452709:{NFSU2_TR(0x452709);
u8 U[4];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B45270d:{NFSU2_TR(0x45270d);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B45270f:{NFSU2_TR(0x45270f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B452710:{NFSU2_TR(0x452710);
{u32 ea_=u32(r4(R+16)+u32(256u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B452717:{NFSU2_TR(0x452717);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45271cull));
TAIL_STATIC(0x5baf80u,5ba);
}
B45271c:L45271c:{c.instructions+=149;NFSU2_TR(0x45271c);
{u32 ea_=u32(r4(R+16)+u32(120u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B452720:{NFSU2_TR(0x452720);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B452726:{NFSU2_TR(0x452726);
{u32 ea_=u32(r4(R+16)+u32(104u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B45272a:{NFSU2_TR(0x45272a);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B452730:{NFSU2_TR(0x452730);
__asm__ volatile(".byte 0xd8,0xc1":::"memory");
}
B452732:{NFSU2_TR(0x452732);
{u32 ea_=u32(r4(R+16)+u32(88u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B452736:{NFSU2_TR(0x452736);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B45273c:{NFSU2_TR(0x45273c);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B452740:{NFSU2_TR(0x452740);
{u32 ea_=u32(r4(R+16)+u32(72u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B452744:{NFSU2_TR(0x452744);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B452748:{NFSU2_TR(0x452748);
__asm__ volatile(".byte 0xd8,0xc1":::"memory");
}
B45274a:{NFSU2_TR(0x45274a);
{u32 ea_=u32(r4(R+16)+u32(136u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B452751:{NFSU2_TR(0x452751);
{u32 ea_=u32(r4(R+16)+u32(124u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B452755:{NFSU2_TR(0x452755);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B45275b:{NFSU2_TR(0x45275b);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B45275f:{NFSU2_TR(0x45275f);
{u32 ea_=u32(r4(R+16)+u32(108u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B452763:{NFSU2_TR(0x452763);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B452769:{NFSU2_TR(0x452769);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B45276d:{NFSU2_TR(0x45276d);
{u32 ea_=u32(r4(R+16)+u32(92u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B452771:{NFSU2_TR(0x452771);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B452777:{NFSU2_TR(0x452777);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B45277b:{NFSU2_TR(0x45277b);
{u32 ea_=u32(r4(R+16)+u32(76u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B45277f:{NFSU2_TR(0x45277f);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B452783:{NFSU2_TR(0x452783);
__asm__ volatile(".byte 0xd8,0xc1":::"memory");
}
B452785:{NFSU2_TR(0x452785);
{u32 ea_=u32(r4(R+16)+u32(140u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B45278c:{NFSU2_TR(0x45278c);
{u32 ea_=u32(r4(R+16)+u32(128u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B452793:{NFSU2_TR(0x452793);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B452799:{NFSU2_TR(0x452799);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B45279d:{NFSU2_TR(0x45279d);
{u32 ea_=u32(r4(R+16)+u32(112u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4527a1:{NFSU2_TR(0x4527a1);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4527a7:{NFSU2_TR(0x4527a7);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B4527ab:{NFSU2_TR(0x4527ab);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4527af:{NFSU2_TR(0x4527af);
{u32 ea_=u32(r4(R+16)+u32(96u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4527b3:{NFSU2_TR(0x4527b3);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4527b9:{NFSU2_TR(0x4527b9);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4527bd:{NFSU2_TR(0x4527bd);
{u32 ea_=u32(r4(R+16)+u32(80u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4527c1:{NFSU2_TR(0x4527c1);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B4527c5:{NFSU2_TR(0x4527c5);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B4527c9:{NFSU2_TR(0x4527c9);
{u32 ea_=u32(r4(R+16)+u32(144u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4527d0:{NFSU2_TR(0x4527d0);
{u32 ea_=u32(r4(R+16)+u32(132u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4527d7:{NFSU2_TR(0x4527d7);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4527dd:{NFSU2_TR(0x4527dd);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4527e1:{NFSU2_TR(0x4527e1);
{u32 ea_=u32(r4(R+16)+u32(116u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4527e5:{NFSU2_TR(0x4527e5);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4527eb:{NFSU2_TR(0x4527eb);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B4527ef:{NFSU2_TR(0x4527ef);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4527f3:{NFSU2_TR(0x4527f3);
{u32 ea_=u32(r4(R+16)+u32(100u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4527f7:{NFSU2_TR(0x4527f7);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4527fd:{NFSU2_TR(0x4527fd);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B452801:{NFSU2_TR(0x452801);
{u32 ea_=u32(r4(R+16)+u32(84u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B452805:{NFSU2_TR(0x452805);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B452809:{NFSU2_TR(0x452809);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B45280d:{NFSU2_TR(0x45280d);
{u32 ea_=u32(r4(R+16)+u32(148u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B452814:{NFSU2_TR(0x452814);
{u32 ea_=u32(r4(R+16)+u32(72u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B452818:{NFSU2_TR(0x452818);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B45281e:{NFSU2_TR(0x45281e);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B452822:{NFSU2_TR(0x452822);
{u32 ea_=u32(r4(R+16)+u32(88u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B452826:{NFSU2_TR(0x452826);
__asm__ volatile(".byte 0xd8,0xc2":::"memory");
}
B452828:{NFSU2_TR(0x452828);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B45282c:{NFSU2_TR(0x45282c);
{u32 ea_=u32(r4(R+16)+u32(152u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B452833:{NFSU2_TR(0x452833);
{u32 ea_=u32(r4(R+16)+u32(76u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B452837:{NFSU2_TR(0x452837);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B45283d:{NFSU2_TR(0x45283d);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B452841:{NFSU2_TR(0x452841);
{u32 ea_=u32(r4(R+16)+u32(92u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B452845:{NFSU2_TR(0x452845);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B452849:{NFSU2_TR(0x452849);
__asm__ volatile(".byte 0xd8,0xc1":::"memory");
}
B45284b:{NFSU2_TR(0x45284b);
{u32 ea_=u32(r4(R+16)+u32(156u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B452852:{NFSU2_TR(0x452852);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B452854:{NFSU2_TR(0x452854);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B452856:{NFSU2_TR(0x452856);
{u32 ea_=u32(r4(R+16)+u32(80u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B45285a:{NFSU2_TR(0x45285a);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B452860:{NFSU2_TR(0x452860);
{u32 ea_=u32(r4(R+16)+u32(96u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B452864:{NFSU2_TR(0x452864);
__asm__ volatile(".byte 0xd8,0xc1":::"memory");
}
B452866:{NFSU2_TR(0x452866);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B45286a:{NFSU2_TR(0x45286a);
{u32 ea_=u32(r4(R+16)+u32(160u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B452871:{NFSU2_TR(0x452871);
{u32 ea_=u32(r4(R+16)+u32(84u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B452875:{NFSU2_TR(0x452875);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B45287b:{NFSU2_TR(0x45287b);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B45287f:{NFSU2_TR(0x45287f);
{u32 ea_=u32(r4(R+16)+u32(100u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B452883:{NFSU2_TR(0x452883);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B452887:{NFSU2_TR(0x452887);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B45288b:{NFSU2_TR(0x45288b);
{u32 ea_=u32(r4(R+16)+u32(164u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B452892:{NFSU2_TR(0x452892);
{u32 ea_=u32(r4(R+16)+u32(104u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B452896:{NFSU2_TR(0x452896);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B45289a:{NFSU2_TR(0x45289a);
__asm__ volatile(".byte 0xd8,0xc2":::"memory");
}
B45289c:{NFSU2_TR(0x45289c);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B4528a0:{NFSU2_TR(0x4528a0);
{u32 ea_=u32(r4(R+16)+u32(168u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4528a7:{NFSU2_TR(0x4528a7);
{u32 ea_=u32(r4(R+16)+u32(108u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4528ab:{NFSU2_TR(0x4528ab);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B4528af:{NFSU2_TR(0x4528af);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B4528b3:{NFSU2_TR(0x4528b3);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B4528b7:{NFSU2_TR(0x4528b7);
{u32 ea_=u32(r4(R+16)+u32(172u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4528be:{NFSU2_TR(0x4528be);
{u32 ea_=u32(r4(R+16)+u32(112u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4528c2:{NFSU2_TR(0x4528c2);
__asm__ volatile(".byte 0xd8,0xc1":::"memory");
}
B4528c4:{NFSU2_TR(0x4528c4);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B4528c8:{NFSU2_TR(0x4528c8);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B4528cc:{NFSU2_TR(0x4528cc);
{u32 ea_=u32(r4(R+16)+u32(176u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4528d3:{NFSU2_TR(0x4528d3);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B4528d5:{NFSU2_TR(0x4528d5);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B4528d7:{NFSU2_TR(0x4528d7);
{u32 ea_=u32(r4(R+16)+u32(116u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4528db:{NFSU2_TR(0x4528db);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B4528df:{NFSU2_TR(0x4528df);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B4528e3:{NFSU2_TR(0x4528e3);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B4528e7:{NFSU2_TR(0x4528e7);
{u32 ea_=u32(r4(R+16)+u32(180u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4528ee:{NFSU2_TR(0x4528ee);
{u32 ea_=u32(r4(R+16)+u32(104u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4528f2:{NFSU2_TR(0x4528f2);
{u32 ea_=u32(r4(R+16)+u32(256u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4528f9:{NFSU2_TR(0x4528f9);
{u32 ea_=u32(r4(R+16)+u32(88u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4528fd:{NFSU2_TR(0x4528fd);
{u32 ea_=u32(r4(R+16)+u32(252u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B452904:{NFSU2_TR(0x452904);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B452906:{NFSU2_TR(0x452906);
{u32 ea_=u32(r4(R+16)+u32(72u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B45290a:{NFSU2_TR(0x45290a);
{u32 ea_=u32(r4(R+16)+u32(248u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B452911:{NFSU2_TR(0x452911);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B452913:{NFSU2_TR(0x452913);
{u32 ea_=u32(r4(R+16)+u32(120u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B452917:{NFSU2_TR(0x452917);
{u32 ea_=u32(r4(R+16)+u32(184u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B45291e:{NFSU2_TR(0x45291e);
{u32 ea_=u32(r4(R+16)+u32(108u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B452922:{NFSU2_TR(0x452922);
{u32 ea_=u32(r4(R+16)+u32(256u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B452929:{NFSU2_TR(0x452929);
{u32 ea_=u32(r4(R+16)+u32(92u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B45292d:{NFSU2_TR(0x45292d);
{u32 ea_=u32(r4(R+16)+u32(252u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B452934:{NFSU2_TR(0x452934);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B452936:{NFSU2_TR(0x452936);
{u32 ea_=u32(r4(R+16)+u32(76u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B45293a:{NFSU2_TR(0x45293a);
{u32 ea_=u32(r4(R+16)+u32(248u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B452941:{NFSU2_TR(0x452941);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B452943:{NFSU2_TR(0x452943);
{u32 ea_=u32(r4(R+16)+u32(124u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B452947:{NFSU2_TR(0x452947);
{u32 ea_=u32(r4(R+16)+u32(188u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B45294e:{NFSU2_TR(0x45294e);
{u32 ea_=u32(r4(R+16)+u32(112u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B452952:{NFSU2_TR(0x452952);
u8 U[4];
w4(U+0,u32(u32(u32(0x88ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B452959:{NFSU2_TR(0x452959);
{u32 ea_=u32(r4(R+16)+u32(256u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B452960:{NFSU2_TR(0x452960);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B452961:{NFSU2_TR(0x452961);
{u32 ea_=u32(r4(R+16)+u32(100u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B452965:{NFSU2_TR(0x452965);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x70ull))));
__builtin_memmove((R+8),(U+0),4);
}
B452968:{NFSU2_TR(0x452968);
{u32 ea_=u32(r4(R+16)+u32(256u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B45296f:{NFSU2_TR(0x45296f);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B452970:{NFSU2_TR(0x452970);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B452972:{NFSU2_TR(0x452972);
{u32 ea_=u32(r4(R+16)+u32(88u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B452976:{NFSU2_TR(0x452976);
{u32 ea_=u32(r4(R+16)+u32(256u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B45297d:{NFSU2_TR(0x45297d);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B45297f:{NFSU2_TR(0x45297f);
{u32 ea_=u32(r4(R+16)+u32(136u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B452986:{NFSU2_TR(0x452986);
{u32 ea_=u32(r4(R+16)+u32(200u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B45298d:{NFSU2_TR(0x45298d);
{u32 ea_=u32(r4(R+16)+u32(124u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B452991:{NFSU2_TR(0x452991);
{u32 ea_=u32(r4(R+16)+u32(264u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B452998:{NFSU2_TR(0x452998);
{u32 ea_=u32(r4(R+16)+u32(108u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B45299c:{NFSU2_TR(0x45299c);
{u32 ea_=u32(r4(R+16)+u32(260u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4529a3:{NFSU2_TR(0x4529a3);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B4529a5:{NFSU2_TR(0x4529a5);
{u32 ea_=u32(r4(R+16)+u32(92u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4529a9:{NFSU2_TR(0x4529a9);
{u32 ea_=u32(r4(R+16)+u32(256u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4529b0:{NFSU2_TR(0x4529b0);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B4529b2:{NFSU2_TR(0x4529b2);
{u32 ea_=u32(r4(R+16)+u32(140u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B4529b9:{NFSU2_TR(0x4529b9);
{u32 ea_=u32(r4(R+16)+u32(204u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4529c0:{NFSU2_TR(0x4529c0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4529c5ull));
TAIL_STATIC(0x4012b0u,401);
}
B4529c5:L4529c5:{c.instructions+=1;NFSU2_TR(0x4529c5);
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
B4529c8:L4529c8:{c.instructions+=8;NFSU2_TR(0x4529c8);
u8 U[8];
w4(U+0,u32(u32(u32(0x104ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4529cf:{NFSU2_TR(0x4529cf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4529d0:{NFSU2_TR(0x4529d0);
__builtin_memmove((R+0),(R+24),4);
}
B4529d2:{NFSU2_TR(0x4529d2);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4529d9:{NFSU2_TR(0x4529d9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4529da:{NFSU2_TR(0x4529da);
__builtin_memmove((R+16),(R+20),4);
}
B4529dc:{NFSU2_TR(0x4529dc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4529dd:{NFSU2_TR(0x4529dd);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4529e0:L4529e0:{c.instructions+=3;NFSU2_TR(0x4529e0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4529e1:{NFSU2_TR(0x4529e1);
__builtin_memmove((R+24),(R+4),4);
}
B4529e3:{NFSU2_TR(0x4529e3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4529e8ull));
TAIL_STATIC(0x44f1e0u,44f);
}
B4529e8:L4529e8:{c.instructions+=2;NFSU2_TR(0x4529e8);
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
B4529ed:{NFSU2_TR(0x4529ed);
if(r1(R+518)){{goto L4529f8;}}
}
B4529ef:L4529ef:{c.instructions+=2;NFSU2_TR(0x4529ef);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4529f0:{NFSU2_TR(0x4529f0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4529f5ull));
TAIL_STATIC(0x575630u,575);
}
B4529f5:L4529f5:{c.instructions+=1;NFSU2_TR(0x4529f5);
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
B4529f8:L4529f8:{c.instructions+=3;NFSU2_TR(0x4529f8);
__builtin_memmove((R+0),(R+24),4);
}
B4529fa:{NFSU2_TR(0x4529fa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4529fb:{NFSU2_TR(0x4529fb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B452a00:L452a00:{c.instructions+=27;NFSU2_TR(0x452a00);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B452a01:{NFSU2_TR(0x452a01);
__builtin_memmove((R+20),(R+16),4);
}
B452a03:{NFSU2_TR(0x452a03);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B452a06:{NFSU2_TR(0x452a06);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x34ull))));
}
B452a09:{NFSU2_TR(0x452a09);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B452a0a:{NFSU2_TR(0x452a0a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B452a0b:{NFSU2_TR(0x452a0b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B452a0e:{NFSU2_TR(0x452a0e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B452a0f:{NFSU2_TR(0x452a0f);
__builtin_memmove((R+28),(R+4),4);
}
B452a11:{NFSU2_TR(0x452a11);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+4),(U+0),4);
}
B452a13:{NFSU2_TR(0x452a13);
u8 U[12];
w4(U+0,u32(u32(u32(0xfffffffdull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x2ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B452a17:{NFSU2_TR(0x452a17);
u8 U[4];
w4(U+0,u32(u32(u32(0x3ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B452a1a:{NFSU2_TR(0x452a1a);
u8 U[16];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+8),(U+12),4);
}
B452a1e:{NFSU2_TR(0x452a1e);
{u32 ea_=u32(r4(R+4)+r4(R+0)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B452a22:{NFSU2_TR(0x452a22);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+12),(U+8),4);
}
B452a25:{NFSU2_TR(0x452a25);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B452a29:{NFSU2_TR(0x452a29);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+4))));
}
B452a2b:{NFSU2_TR(0x452a2b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B452a2e:{NFSU2_TR(0x452a2e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B452a2f:{NFSU2_TR(0x452a2f);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B452a33:{NFSU2_TR(0x452a33);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B452a36:{NFSU2_TR(0x452a36);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B452a38:{NFSU2_TR(0x452a38);
u8 U[4];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B452a3c:{NFSU2_TR(0x452a3c);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B452a40:{NFSU2_TR(0x452a40);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B452a43:{NFSU2_TR(0x452a43);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B452a44:{NFSU2_TR(0x452a44);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x452a49ull));
TAIL_STATIC(0x5dd360u,5dd);
}
B452a49:L452a49:{c.instructions+=14;NFSU2_TR(0x452a49);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B452a4d:{NFSU2_TR(0x452a4d);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+12))));
}
B452a4f:{NFSU2_TR(0x452a4f);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x8cull))));
}
B452a55:{NFSU2_TR(0x452a55);
w4(R+0,u32(0x92492493ull));
}
B452a5a:{NFSU2_TR(0x452a5a);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(r4(R+4)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(u64(r8(U+16))>>32));
w4(R+0,u32(r8(U+16)));
}
B452a5c:{NFSU2_TR(0x452a5c);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+4))));
}
B452a5e:{NFSU2_TR(0x452a5e);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(s32(s16(r2(U+4)))));
}
B452a62:{NFSU2_TR(0x452a62);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w4(R+8,sar<u32>(r4(R+8),u64(r4(U+0))));
}
B452a65:{NFSU2_TR(0x452a65);
__builtin_memmove((R+0),(R+8),4);
}
B452a67:{NFSU2_TR(0x452a67);
u8 U[4];
w4(U+0,u32(u32(u32(0x1full))&u32(u32(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+0))));
}
B452a6a:{NFSU2_TR(0x452a6a);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+0))));
}
B452a6c:{NFSU2_TR(0x452a6c);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x1ull))));
__builtin_memmove((R+0),(U+0),4);
}
B452a6f:{NFSU2_TR(0x452a6f);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B452a71:{NFSU2_TR(0x452a71);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L452aeb;}}
}
B452a73:L452a73:{c.instructions+=11;NFSU2_TR(0x452a73);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B452a77:{NFSU2_TR(0x452a77);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B452a7a:{NFSU2_TR(0x452a7a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B452a7d:{NFSU2_TR(0x452a7d);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B452a7e:{NFSU2_TR(0x452a7e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B452a7f:{NFSU2_TR(0x452a7f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B452a80:{NFSU2_TR(0x452a80);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B452a81:{NFSU2_TR(0x452a81);
u8 U[4];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B452a85:{NFSU2_TR(0x452a85);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B452a86:{NFSU2_TR(0x452a86);
__builtin_memmove((R+4),(R+28),4);
}
B452a88:{NFSU2_TR(0x452a88);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x452a8dull));
TAIL_STATIC(0x44f480u,44f);
}
B452a8d:L452a8d:{c.instructions+=2;NFSU2_TR(0x452a8d);
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
B452a8f:{NFSU2_TR(0x452a8f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L452aa0;}}
}
B452a91:L452a91:{c.instructions+=7;NFSU2_TR(0x452a91);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B452a97:{NFSU2_TR(0x452a97);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B452a98:{NFSU2_TR(0x452a98);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B452a99:{NFSU2_TR(0x452a99);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B452a9a:{NFSU2_TR(0x452a9a);
__builtin_memmove((R+16),(R+20),4);
}
B452a9c:{NFSU2_TR(0x452a9c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B452a9d:{NFSU2_TR(0x452a9d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B452aa0:L452aa0:{c.instructions+=24;NFSU2_TR(0x452aa0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+4),(U+0),4);
}
B452aa2:{NFSU2_TR(0x452aa2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((R+24),(U+4),4);
}
B452aa5:{NFSU2_TR(0x452aa5);
u8 U[4];
w4(U+0,u32(u32(u32(0x3ull))&u32(u32(0x1full))));
w4(R+24,shl<u32>(r4(R+24),u64(r4(U+0))));
}
B452aa8:{NFSU2_TR(0x452aa8);
u8 U[16];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B452aac:{NFSU2_TR(0x452aac);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(s32(s16(r2(U+4)))));
}
B452ab0:{NFSU2_TR(0x452ab0);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+24))));
}
B452ab2:{NFSU2_TR(0x452ab2);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B452ab6:{NFSU2_TR(0x452ab6);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1aull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(s32(s16(r2(U+4)))));
}
B452aba:{NFSU2_TR(0x452aba);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B452abe:{NFSU2_TR(0x452abe);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B452ac2:{NFSU2_TR(0x452ac2);
{u32 ea_=u32(u32(8554292u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B452ac8:{NFSU2_TR(0x452ac8);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B452acc:{NFSU2_TR(0x452acc);
{u32 ea_=u32(u32(8554292u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B452ad2:{NFSU2_TR(0x452ad2);
{u32 ea_=u32(r4(R+12));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B452ad4:{NFSU2_TR(0x452ad4);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B452ad6:{NFSU2_TR(0x452ad6);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B452ad8:{NFSU2_TR(0x452ad8);
{u32 ea_=u32(r4(R+12)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B452adb:{NFSU2_TR(0x452adb);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B452ade:{NFSU2_TR(0x452ade);
__asm__ volatile(".byte 0xd8,0xcb":::"memory");
}
B452ae0:{NFSU2_TR(0x452ae0);
__asm__ volatile(".byte 0xde,0xe9":::"memory");
}
B452ae2:{NFSU2_TR(0x452ae2);
{u32 ea_=u32(r4(R+4)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B452ae5:{NFSU2_TR(0x452ae5);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B452ae7:{NFSU2_TR(0x452ae7);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B452ae9:{NFSU2_TR(0x452ae9);
{goto L452b39;}
}
B452aeb:L452aeb:{c.instructions+=13;NFSU2_TR(0x452aeb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B452aed:{NFSU2_TR(0x452aed);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(u32(0x38ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B452af0:{NFSU2_TR(0x452af0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((R+24),(U+4),4);
}
B452af3:{NFSU2_TR(0x452af3);
u8 U[4];
w4(U+0,u32(u32(u32(0x3ull))&u32(u32(0x1full))));
w4(R+24,shl<u32>(r4(R+24),u64(r4(U+0))));
}
B452af6:{NFSU2_TR(0x452af6);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+12),4);
s4(u32(r4(U+4)),r4(U+8));
}
B452af9:{NFSU2_TR(0x452af9);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B452afd:{NFSU2_TR(0x452afd);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B452b00:{NFSU2_TR(0x452b00);
u8 U[12];
w4(U+0,u32(u32(u32(0xc4ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B452b07:{NFSU2_TR(0x452b07);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+8),(U+0),4);
}
B452b09:{NFSU2_TR(0x452b09);
u8 U[16];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+4),4);
s4(u32(r4(U+8)),r4(U+12));
}
B452b0d:{NFSU2_TR(0x452b0d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+4),(U+0),4);
}
B452b0f:{NFSU2_TR(0x452b0f);
u8 U[16];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+0),4);
s4(u32(r4(U+8)),r4(U+12));
}
B452b13:{NFSU2_TR(0x452b13);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L452b1d;}}
}
B452b15:L452b15:{c.instructions+=2;NFSU2_TR(0x452b15);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B452b1b:{NFSU2_TR(0x452b1b);
{goto L452b29;}
}
B452b1d:L452b1d:{c.instructions+=4;NFSU2_TR(0x452b1d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+8),(U+0),4);
}
B452b1f:{NFSU2_TR(0x452b1f);
u8 U[16];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+4),(U+12),4);
}
B452b23:{NFSU2_TR(0x452b23);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B452b24:{NFSU2_TR(0x452b24);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x452b29ull));
TAIL_STATIC(0x401c40u,401);
}
B452b29:L452b29:{c.instructions+=4;NFSU2_TR(0x452b29);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B452b2b:{NFSU2_TR(0x452b2b);
{u32 ea_=u32(r4(R+0)+r4(R+24)+u32(12u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B452b2f:{NFSU2_TR(0x452b2f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+4),(U+0),4);
}
B452b31:{NFSU2_TR(0x452b31);
u8 U[16];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
w4(U+12,u32(0x0ull));
s4(u32(r4(U+8)),r4(U+12));
}
B452b39:L452b39:{c.instructions+=10;NFSU2_TR(0x452b39);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B452b3b:{NFSU2_TR(0x452b3b);
{u32 ea_=u32(r4(R+24)+r4(R+0)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B452b3f:{NFSU2_TR(0x452b3f);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+24))));
}
B452b41:{NFSU2_TR(0x452b41);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B452b42:{NFSU2_TR(0x452b42);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B452b45:{NFSU2_TR(0x452b45);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B452b48:{NFSU2_TR(0x452b48);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B452b4a:{NFSU2_TR(0x452b4a);
u8 U[4];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B452b4e:{NFSU2_TR(0x452b4e);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B452b4f:{NFSU2_TR(0x452b4f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x452b54ull));
TAIL_STATIC(0x5dd360u,5dd);
}
B452b54:L452b54:{c.instructions+=29;NFSU2_TR(0x452b54);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B452b58:{NFSU2_TR(0x452b58);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B452b5c:{NFSU2_TR(0x452b5c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+4),(U+0),4);
}
B452b5e:{NFSU2_TR(0x452b5e);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B452b62:{NFSU2_TR(0x452b62);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B452b66:{NFSU2_TR(0x452b66);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B452b6a:{NFSU2_TR(0x452b6a);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B452b6e:{NFSU2_TR(0x452b6e);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B452b72:{NFSU2_TR(0x452b72);
__asm__ volatile(".byte 0xd9,0xc2":::"memory");
}
B452b74:{NFSU2_TR(0x452b74);
__asm__ volatile(".byte 0xde,0xcb":::"memory");
}
B452b76:{NFSU2_TR(0x452b76);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B452b78:{NFSU2_TR(0x452b78);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B452b7a:{NFSU2_TR(0x452b7a);
__asm__ volatile(".byte 0xde,0xc3":::"memory");
}
B452b7c:{NFSU2_TR(0x452b7c);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B452b7e:{NFSU2_TR(0x452b7e);
__asm__ volatile(".byte 0xd8,0xca":::"memory");
}
B452b80:{NFSU2_TR(0x452b80);
__asm__ volatile(".byte 0xde,0xc3":::"memory");
}
B452b82:{NFSU2_TR(0x452b82);
__asm__ volatile(".byte 0xd9,0xca":::"memory");
}
B452b84:{NFSU2_TR(0x452b84);
__asm__ volatile(".byte 0xd9,0xfa":::"memory");
}
B452b86:{NFSU2_TR(0x452b86);
__asm__ volatile(".byte 0xdd,0xda":::"memory");
}
B452b88:{NFSU2_TR(0x452b88);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B452b8a:{NFSU2_TR(0x452b8a);
{u32 ea_=u32(r4(R+4)+r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B452b8e:{NFSU2_TR(0x452b8e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+8),(U+0),4);
}
B452b90:{NFSU2_TR(0x452b90);
{u32 ea_=u32(r4(R+8)+r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B452b94:{NFSU2_TR(0x452b94);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B452b95:{NFSU2_TR(0x452b95);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B452b96:{NFSU2_TR(0x452b96);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B452b97:{NFSU2_TR(0x452b97);
__builtin_memmove((R+16),(R+20),4);
}
B452b99:{NFSU2_TR(0x452b99);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B452b9a:{NFSU2_TR(0x452b9a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B452ba0:L452ba0:{c.instructions+=8;NFSU2_TR(0x452ba0);
__builtin_memmove((R+0),(R+4),4);
}
B452ba2:{NFSU2_TR(0x452ba2);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((R+4),(U+0),4);
}
B452ba5:{NFSU2_TR(0x452ba5);
u8 U[4];
w4(U+0,u32(0x0ull));
s4(u32(r4(R+0)),r4(U+0));
}
B452bab:{NFSU2_TR(0x452bab);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
w4(U+4,u32(0x3ull));
s4(u32(r4(U+0)),r4(U+4));
}
B452bb2:{NFSU2_TR(0x452bb2);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B452bb9:{NFSU2_TR(0x452bb9);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+4)),r4(U+0));
}
B452bbb:{NFSU2_TR(0x452bbb);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B452bbe:{NFSU2_TR(0x452bbe);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B452bc0:L452bc0:{c.instructions+=5;NFSU2_TR(0x452bc0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B452bc3:{NFSU2_TR(0x452bc3);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B452bc4:{NFSU2_TR(0x452bc4);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((R+24),(U+0),4);
}
B452bc7:{NFSU2_TR(0x452bc7);
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
B452bc9:{NFSU2_TR(0x452bc9);
if(r1(R+518)){{goto L452be9;}}
}
B452bcb:L452bcb:{c.instructions+=1;NFSU2_TR(0x452bcb);
{goto L452bd0;}
}
B452bd0:L452bd0:{c.instructions+=6;NFSU2_TR(0x452bd0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B452bd2:{NFSU2_TR(0x452bd2);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B452bd5:{NFSU2_TR(0x452bd5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+8)),r4(U+0));
}
B452bd7:{NFSU2_TR(0x452bd7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B452bd8:{NFSU2_TR(0x452bd8);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B452bdb:{NFSU2_TR(0x452bdb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x452be0ull));
TAIL_STATIC(0x575630u,575);
}
B452be0:L452be0:{c.instructions+=4;NFSU2_TR(0x452be0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B452be2:{NFSU2_TR(0x452be2);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B452be5:{NFSU2_TR(0x452be5);
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
B452be7:{NFSU2_TR(0x452be7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x452bd0u);}goto L452bd0;}}
}
B452be9:L452be9:{c.instructions+=2;NFSU2_TR(0x452be9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B452bea:{NFSU2_TR(0x452bea);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B452bf0:L452bf0:{c.instructions+=5;NFSU2_TR(0x452bf0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B452bf1:{NFSU2_TR(0x452bf1);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((R+24),(U+0),4);
}
B452bf4:{NFSU2_TR(0x452bf4);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B452bfb:{NFSU2_TR(0x452bfb);
u8 U[18];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((U+10),(U+0),4);
w1(R+512,u8((r4(U+10))<(r4(R+24))));
w1(R+523,sborrow<u32>(r4(U+10),r4(R+24)));
w4(U+14,u32(u32(r4(U+10))-u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+14))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+14))==(u32(0x0ull))));
w4(U+4,u32(u32(r4(U+14))&u32(u32(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r4(U+4)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B452bfd:{NFSU2_TR(0x452bfd);
if(r1(R+518)){{goto L452c20;}}
}
B452bff:L452bff:{c.instructions+=1;NFSU2_TR(0x452bff);
}
B452c00:L452c00:{c.instructions+=8;NFSU2_TR(0x452c00);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B452c02:{NFSU2_TR(0x452c02);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B452c04:{NFSU2_TR(0x452c04);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B452c07:{NFSU2_TR(0x452c07);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+8)),r4(U+0));
}
B452c09:{NFSU2_TR(0x452c09);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B452c0c:{NFSU2_TR(0x452c0c);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x11ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B452c0f:{NFSU2_TR(0x452c0f);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B452c11:{NFSU2_TR(0x452c11);
if(r1(R+518)){{goto L452c1c;}}
}
B452c13:L452c13:{c.instructions+=2;NFSU2_TR(0x452c13);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B452c14:{NFSU2_TR(0x452c14);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x452c19ull));
TAIL_STATIC(0x575630u,575);
}
B452c19:L452c19:{c.instructions+=1;NFSU2_TR(0x452c19);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B452c1c:L452c1c:{c.instructions+=2;NFSU2_TR(0x452c1c);
u8 U[18];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((U+10),(U+0),4);
w1(R+512,u8((r4(U+10))<(r4(R+24))));
w1(R+523,sborrow<u32>(r4(U+10),r4(R+24)));
w4(U+14,u32(u32(r4(U+10))-u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+14))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+14))==(u32(0x0ull))));
w4(U+4,u32(u32(r4(U+14))&u32(u32(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r4(U+4)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B452c1e:{NFSU2_TR(0x452c1e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x452c00u);}goto L452c00;}}
}
B452c20:L452c20:{c.instructions+=2;NFSU2_TR(0x452c20);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B452c21:{NFSU2_TR(0x452c21);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B452c30:L452c30:{c.instructions+=11;NFSU2_TR(0x452c30);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B452c32:{NFSU2_TR(0x452c32);
u8 U[4];
w4(U+0,u32(0x7721dcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B452c37:{NFSU2_TR(0x452c37);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B452c3d:{NFSU2_TR(0x452c3d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B452c3e:{NFSU2_TR(0x452c3e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B452c45:{NFSU2_TR(0x452c45);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B452c46:{NFSU2_TR(0x452c46);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B452c47:{NFSU2_TR(0x452c47);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B452c48:{NFSU2_TR(0x452c48);
u8 U[4];
w4(U+0,u32(0x1404ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B452c4d:{NFSU2_TR(0x452c4d);
__builtin_memmove((R+28),(R+4),4);
}
B452c4f:{NFSU2_TR(0x452c4f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x452c54ull));
TAIL_STATIC(0x575620u,575);
}
B452c54:L452c54:{c.instructions+=5;NFSU2_TR(0x452c54);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B452c57:{NFSU2_TR(0x452c57);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B452c5b:{NFSU2_TR(0x452c5b);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B452c5d:{NFSU2_TR(0x452c5d);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B452c65:{NFSU2_TR(0x452c65);
if(r1(R+518)){{goto L452c89;}}
}
B452c67:L452c67:{c.instructions+=8;NFSU2_TR(0x452c67);
u8 U[4];
w4(U+0,u32(0x452bc0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B452c6c:{NFSU2_TR(0x452c6c);
u8 U[4];
w4(U+0,u32(0x452ba0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B452c71:{NFSU2_TR(0x452c71);
u8 U[4];
w4(U+0,u32(0x100ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B452c76:{NFSU2_TR(0x452c76);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B452c79:{NFSU2_TR(0x452c79);
u8 U[4];
w4(U+0,u32(0x14ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B452c7b:{NFSU2_TR(0x452c7b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B452c7c:{NFSU2_TR(0x452c7c);
u8 U[4];
w4(U+0,u32(0x100ull));
s4(u32(r4(R+0)),r4(U+0));
}
B452c82:{NFSU2_TR(0x452c82);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x452c87ull));
TAIL_STATIC(0x75c461u,75c);
}
B452c87:L452c87:{c.instructions+=1;NFSU2_TR(0x452c87);
{goto L452c8b;}
}
B452c89:L452c89:{c.instructions+=1;NFSU2_TR(0x452c89);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B452c8b:L452c8b:{c.instructions+=4;NFSU2_TR(0x452c8b);
u8 U[4];
w4(U+0,u32(0xea64ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B452c90:{NFSU2_TR(0x452c90);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B452c98:{NFSU2_TR(0x452c98);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B452c9b:{NFSU2_TR(0x452c9b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x452ca0ull));
TAIL_STATIC(0x575620u,575);
}
B452ca0:L452ca0:{c.instructions+=5;NFSU2_TR(0x452ca0);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B452ca3:{NFSU2_TR(0x452ca3);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B452ca7:{NFSU2_TR(0x452ca7);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B452ca9:{NFSU2_TR(0x452ca9);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B452cb1:{NFSU2_TR(0x452cb1);
if(r1(R+518)){{goto L452cd5;}}
}
B452cb3:L452cb3:{c.instructions+=8;NFSU2_TR(0x452cb3);
u8 U[4];
w4(U+0,u32(0x452bc0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B452cb8:{NFSU2_TR(0x452cb8);
u8 U[4];
w4(U+0,u32(0x452ba0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B452cbd:{NFSU2_TR(0x452cbd);
u8 U[4];
w4(U+0,u32(0xbb8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B452cc2:{NFSU2_TR(0x452cc2);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B452cc5:{NFSU2_TR(0x452cc5);
u8 U[4];
w4(U+0,u32(0x14ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B452cc7:{NFSU2_TR(0x452cc7);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B452cc8:{NFSU2_TR(0x452cc8);
u8 U[4];
w4(U+0,u32(0xbb8ull));
s4(u32(r4(R+0)),r4(U+0));
}
B452cce:{NFSU2_TR(0x452cce);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x452cd3ull));
TAIL_STATIC(0x75c461u,75c);
}
B452cd3:L452cd3:{c.instructions+=1;NFSU2_TR(0x452cd3);
{goto L452cd7;}
}
B452cd5:L452cd5:{c.instructions+=1;NFSU2_TR(0x452cd5);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B452cd7:L452cd7:{c.instructions+=4;NFSU2_TR(0x452cd7);
u8 U[4];
w4(U+0,u32(0x7d4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B452cdc:{NFSU2_TR(0x452cdc);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B452ce4:{NFSU2_TR(0x452ce4);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B452ce7:{NFSU2_TR(0x452ce7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x452cecull));
TAIL_STATIC(0x575620u,575);
}
B452cec:L452cec:{c.instructions+=5;NFSU2_TR(0x452cec);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B452cef:{NFSU2_TR(0x452cef);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B452cf3:{NFSU2_TR(0x452cf3);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B452cf5:{NFSU2_TR(0x452cf5);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(0x2ull));
s4(u32(r4(U+0)),r4(U+4));
}
B452cfd:{NFSU2_TR(0x452cfd);
if(r1(R+518)){{goto L452d30;}}
}
B452cff:L452cff:{c.instructions+=8;NFSU2_TR(0x452cff);
u8 U[4];
w4(U+0,u32(0x452bc0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B452d04:{NFSU2_TR(0x452d04);
u8 U[4];
w4(U+0,u32(0x452ba0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B452d09:{NFSU2_TR(0x452d09);
u8 U[4];
w4(U+0,u32(0x64ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B452d0b:{NFSU2_TR(0x452d0b);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B452d0e:{NFSU2_TR(0x452d0e);
u8 U[4];
w4(U+0,u32(0x14ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B452d10:{NFSU2_TR(0x452d10);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B452d11:{NFSU2_TR(0x452d11);
u8 U[4];
w4(U+0,u32(0x64ull));
s4(u32(r4(R+0)),r4(U+0));
}
B452d17:{NFSU2_TR(0x452d17);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x452d1cull));
TAIL_STATIC(0x75c461u,75c);
}
B452d1c:L452d1c:{c.instructions+=7;NFSU2_TR(0x452d1c);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B452d1f:{NFSU2_TR(0x452d1f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B452d20:{NFSU2_TR(0x452d20);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B452d21:{NFSU2_TR(0x452d21);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B452d25:{NFSU2_TR(0x452d25);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B452d2c:{NFSU2_TR(0x452d2c);
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
B452d2f:{NFSU2_TR(0x452d2f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B452d30:L452d30:{c.instructions+=8;NFSU2_TR(0x452d30);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B452d34:{NFSU2_TR(0x452d34);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B452d36:{NFSU2_TR(0x452d36);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B452d39:{NFSU2_TR(0x452d39);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B452d3a:{NFSU2_TR(0x452d3a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B452d3b:{NFSU2_TR(0x452d3b);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B452d42:{NFSU2_TR(0x452d42);
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
B452d45:{NFSU2_TR(0x452d45);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B452d50:L452d50:{c.instructions+=10;NFSU2_TR(0x452d50);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B452d51:{NFSU2_TR(0x452d51);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B452d52:{NFSU2_TR(0x452d52);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B452d53:{NFSU2_TR(0x452d53);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B452d57:{NFSU2_TR(0x452d57);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B452d59:{NFSU2_TR(0x452d59);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x8003b200ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B452d5e:{NFSU2_TR(0x452d5e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B452d5f:{NFSU2_TR(0x452d5f);
__builtin_memmove((R+28),(R+4),4);
}
B452d61:{NFSU2_TR(0x452d61);
w4(R+12,u32(0x3ull));
}
B452d66:{NFSU2_TR(0x452d66);
if(r1(R+518)){{goto L452d81;}}
}
B452d68:L452d68:{c.instructions+=2;NFSU2_TR(0x452d68);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x8003b201ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B452d6d:{NFSU2_TR(0x452d6d);
if(r1(R+518)){{goto L452d7d;}}
}
B452d6f:L452d6f:{c.instructions+=2;NFSU2_TR(0x452d6f);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x8003b202ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B452d74:{NFSU2_TR(0x452d74);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L452d86;}}
}
B452d76:L452d76:{c.instructions+=2;NFSU2_TR(0x452d76);
w4(R+12,u32(0x2ull));
}
B452d7b:{NFSU2_TR(0x452d7b);
{goto L452d86;}
}
B452d7d:L452d7d:{c.instructions+=2;NFSU2_TR(0x452d7d);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B452d7f:{NFSU2_TR(0x452d7f);
{goto L452d86;}
}
B452d81:L452d81:{c.instructions+=1;NFSU2_TR(0x452d81);
w4(R+12,u32(0x1ull));
}
B452d86:L452d86:{c.instructions+=5;NFSU2_TR(0x452d86);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B452d89:{NFSU2_TR(0x452d89);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((R+20),(U+0),4);
}
B452d8c:{NFSU2_TR(0x452d8c);
u8 U[12];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B452d90:{NFSU2_TR(0x452d90);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+20))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B452d92:{NFSU2_TR(0x452d92);
if(r1(R+518)){{goto L452e1d;}}
}
B452d98:L452d98:{c.instructions+=5;NFSU2_TR(0x452d98);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B452d9a:{NFSU2_TR(0x452d9a);
__builtin_memmove((R+8),(R+12),4);
}
B452d9c:{NFSU2_TR(0x452d9c);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B452d9e:{NFSU2_TR(0x452d9e);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+0))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
}
B452da0:{NFSU2_TR(0x452da0);
if(r1(R+518)){{goto L452db8;}}
}
B452da2:L452da2:{c.instructions+=2;NFSU2_TR(0x452da2);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
}
B452da3:{NFSU2_TR(0x452da3);
if(r1(R+518)){{goto L452db0;}}
}
B452da5:L452da5:{c.instructions+=2;NFSU2_TR(0x452da5);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
}
B452da6:{NFSU2_TR(0x452da6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L452dbe;}}
}
B452da8:L452da8:{c.instructions+=3;NFSU2_TR(0x452da8);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B452dab:{NFSU2_TR(0x452dab);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B452dae:{NFSU2_TR(0x452dae);
{goto L452dbe;}
}
B452db0:L452db0:{c.instructions+=3;NFSU2_TR(0x452db0);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B452db3:{NFSU2_TR(0x452db3);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B452db6:{NFSU2_TR(0x452db6);
{goto L452dbe;}
}
B452db8:L452db8:{c.instructions+=2;NFSU2_TR(0x452db8);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B452dbb:{NFSU2_TR(0x452dbb);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B452dbe:L452dbe:{c.instructions+=3;NFSU2_TR(0x452dbe);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B452dc0:{NFSU2_TR(0x452dc0);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B452dc2:{NFSU2_TR(0x452dc2);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L452e07;}}
}
B452dc4:L452dc4:{c.instructions+=1;NFSU2_TR(0x452dc4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B452dc7:L452dc7:{c.instructions+=2;NFSU2_TR(0x452dc7);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(R+24))-u32(r4(U+4))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B452dc9:{NFSU2_TR(0x452dc9);
if(r1(R+518)){{goto L452dd5;}}
}
B452dcb:L452dcb:{c.instructions+=4;NFSU2_TR(0x452dcb);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B452dcc:{NFSU2_TR(0x452dcc);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
}
B452dcf:{NFSU2_TR(0x452dcf);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+8),r4(U+0)));
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B452dd1:{NFSU2_TR(0x452dd1);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x452dc7u);}goto L452dc7;}}
}
B452dd3:L452dd3:{c.instructions+=1;NFSU2_TR(0x452dd3);
{goto L452e03;}
}
B452dd5:L452dd5:{c.instructions+=4;NFSU2_TR(0x452dd5);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((R+24),(U+0),4);
}
B452dd8:{NFSU2_TR(0x452dd8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B452ddf:{NFSU2_TR(0x452ddf);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(r4(R+24))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B452de1:{NFSU2_TR(0x452de1);
if(r1(R+518)){{goto L452e03;}}
}
B452de3:L452de3:{c.instructions+=8;NFSU2_TR(0x452de3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B452de5:{NFSU2_TR(0x452de5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B452de7:{NFSU2_TR(0x452de7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B452dea:{NFSU2_TR(0x452dea);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+8)),r4(U+0));
}
B452dec:{NFSU2_TR(0x452dec);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B452def:{NFSU2_TR(0x452def);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x11ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B452df2:{NFSU2_TR(0x452df2);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B452df4:{NFSU2_TR(0x452df4);
if(r1(R+518)){{goto L452dff;}}
}
B452df6:L452df6:{c.instructions+=2;NFSU2_TR(0x452df6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B452df7:{NFSU2_TR(0x452df7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x452dfcull));
TAIL_STATIC(0x575630u,575);
}
B452dfc:L452dfc:{c.instructions+=1;NFSU2_TR(0x452dfc);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B452dff:L452dff:{c.instructions+=2;NFSU2_TR(0x452dff);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(r4(R+24))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B452e01:{NFSU2_TR(0x452e01);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x452de3u);}goto L452de3;}}
}
B452e03:L452e03:{c.instructions+=1;NFSU2_TR(0x452e03);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B452e07:L452e07:{c.instructions+=6;NFSU2_TR(0x452e07);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B452e0a:{NFSU2_TR(0x452e0a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B452e0d:{NFSU2_TR(0x452e0d);
u8 U[12];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+20))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+20),(U+8),4);
}
B452e11:{NFSU2_TR(0x452e11);
u8 U[12];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B452e15:{NFSU2_TR(0x452e15);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+20))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B452e17:{NFSU2_TR(0x452e17);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x452d98u);}goto L452d98;}}
}
B452e1d:L452e1d:{c.instructions+=5;NFSU2_TR(0x452e1d);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B452e1f:{NFSU2_TR(0x452e1f);
__builtin_memmove((R+8),(R+12),4);
}
B452e21:{NFSU2_TR(0x452e21);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B452e23:{NFSU2_TR(0x452e23);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+4))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
}
B452e25:{NFSU2_TR(0x452e25);
if(r1(R+518)){{goto L452e3d;}}
}
B452e27:L452e27:{c.instructions+=2;NFSU2_TR(0x452e27);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
}
B452e28:{NFSU2_TR(0x452e28);
if(r1(R+518)){{goto L452e35;}}
}
B452e2a:L452e2a:{c.instructions+=2;NFSU2_TR(0x452e2a);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
}
B452e2b:{NFSU2_TR(0x452e2b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L452e43;}}
}
B452e2d:L452e2d:{c.instructions+=3;NFSU2_TR(0x452e2d);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B452e30:{NFSU2_TR(0x452e30);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B452e33:{NFSU2_TR(0x452e33);
{goto L452e43;}
}
B452e35:L452e35:{c.instructions+=3;NFSU2_TR(0x452e35);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B452e38:{NFSU2_TR(0x452e38);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B452e3b:{NFSU2_TR(0x452e3b);
{goto L452e43;}
}
B452e3d:L452e3d:{c.instructions+=2;NFSU2_TR(0x452e3d);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B452e40:{NFSU2_TR(0x452e40);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B452e43:L452e43:{c.instructions+=2;NFSU2_TR(0x452e43);
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
B452e45:{NFSU2_TR(0x452e45);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L452e83;}}
}
B452e47:L452e47:{c.instructions+=3;NFSU2_TR(0x452e47);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((R+28),(U+0),4);
}
B452e4a:{NFSU2_TR(0x452e4a);
__builtin_memmove((R+20),(R+0),4);
}
B452e4c:{NFSU2_TR(0x452e4c);
__builtin_memmove((R+16),(R+16),4);
}
B452e50:L452e50:{c.instructions+=3;NFSU2_TR(0x452e50);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B452e52:{NFSU2_TR(0x452e52);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B452e54:{NFSU2_TR(0x452e54);
if(r1(R+518)){{goto L452e7d;}}
}
B452e56:L452e56:{c.instructions+=4;NFSU2_TR(0x452e56);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x11ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B452e59:{NFSU2_TR(0x452e59);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B452e5b:{NFSU2_TR(0x452e5b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+24),(U+0),4);
}
B452e5d:{NFSU2_TR(0x452e5d);
if(r1(R+518)){{goto L452e77;}}
}
B452e5f:L452e5f:{c.instructions+=5;NFSU2_TR(0x452e5f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B452e62:{NFSU2_TR(0x452e62);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+4)),r4(U+0));
}
B452e64:{NFSU2_TR(0x452e64);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B452e65:{NFSU2_TR(0x452e65);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B452e68:{NFSU2_TR(0x452e68);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x452e6dull));
TAIL_STATIC(0x575630u,575);
}
B452e6d:L452e6d:{c.instructions+=4;NFSU2_TR(0x452e6d);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B452e70:{NFSU2_TR(0x452e70);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B452e73:{NFSU2_TR(0x452e73);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B452e74:{NFSU2_TR(0x452e74);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B452e77:L452e77:{c.instructions+=3;NFSU2_TR(0x452e77);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B452e79:{NFSU2_TR(0x452e79);
__builtin_memmove((R+0),(R+24),4);
}
B452e7b:{NFSU2_TR(0x452e7b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x452e56u);}goto L452e56;}}
}
B452e7d:L452e7d:{c.instructions+=3;NFSU2_TR(0x452e7d);
w1(R+512,carry<u32>(r4(R+28),u32(0x14ull)));
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x14ull))));
}
B452e80:{NFSU2_TR(0x452e80);
u8 U[6];
w1(R+523,sborrow<u32>(r4(R+20),u32(0x1ull)));
w4(R+20,u32(u32(r4(R+20))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+20))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+20))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+20))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B452e81:{NFSU2_TR(0x452e81);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x452e50u);}goto L452e50;}}
}
B452e83:L452e83:{c.instructions+=5;NFSU2_TR(0x452e83);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B452e84:{NFSU2_TR(0x452e84);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B452e85:{NFSU2_TR(0x452e85);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B452e86:{NFSU2_TR(0x452e86);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B452e87:{NFSU2_TR(0x452e87);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B452e90:L452e90:{c.instructions+=4;NFSU2_TR(0x452e90);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B452e94:{NFSU2_TR(0x452e94);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B452e96:{NFSU2_TR(0x452e96);
w1(R+512,u8((r4(R+0))<(u32(0x8003b200ull))));
}
B452e9b:{NFSU2_TR(0x452e9b);
if(r1(R+512)){{goto L452eb5;}}
}
B452e9d:L452e9d:{c.instructions+=2;NFSU2_TR(0x452e9d);
u8 U[4];
w1(R+512,u8((r4(R+0))<(u32(0x8003b202ull))));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x8003b202ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B452ea2:{NFSU2_TR(0x452ea2);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L452eb5;}}
}
B452ea4:L452ea4:{c.instructions+=3;NFSU2_TR(0x452ea4);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B452ea5:{NFSU2_TR(0x452ea5);
w4(R+4,u32(0x828770ull));
}
B452eaa:{NFSU2_TR(0x452eaa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x452eafull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x452d50u);}goto L452d50;}
}
B452eaf:L452eaf:{c.instructions+=2;NFSU2_TR(0x452eaf);
w4(R+0,u32(0x1ull));
}
B452eb4:{NFSU2_TR(0x452eb4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B452eb5:L452eb5:{c.instructions+=2;NFSU2_TR(0x452eb5);
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
B452eb7:{NFSU2_TR(0x452eb7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B452ec0:L452ec0:{c.instructions+=2;NFSU2_TR(0x452ec0);
w4(R+4,u32(0x828770ull));
}
B452ec5:{NFSU2_TR(0x452ec5);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x452c30u);}goto L452c30;}
}
B452ed0:L452ed0:{c.instructions+=12;NFSU2_TR(0x452ed0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B452ed1:{NFSU2_TR(0x452ed1);
__builtin_memmove((R+20),(R+16),4);
}
B452ed3:{NFSU2_TR(0x452ed3);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B452ed6:{NFSU2_TR(0x452ed6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x68ull))));
}
B452ed9:{NFSU2_TR(0x452ed9);
{u32 ea_=u32(u32(7881304u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B452edf:{NFSU2_TR(0x452edf);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B452ee0:{NFSU2_TR(0x452ee0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B452ee3:{NFSU2_TR(0x452ee3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B452ee6:{NFSU2_TR(0x452ee6);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B452ee8:{NFSU2_TR(0x452ee8);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B452ee9:{NFSU2_TR(0x452ee9);
__builtin_memmove((R+28),(R+4),4);
}
B452eeb:{NFSU2_TR(0x452eeb);
if(r1(R+518)){{goto L452ef2;}}
}
B452eed:L452eed:{c.instructions+=2;NFSU2_TR(0x452eed);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B452eef:{NFSU2_TR(0x452eef);
{u32 ea_=u32(r4(R+0)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B452ef2:L452ef2:{c.instructions+=13;NFSU2_TR(0x452ef2);
{u32 ea_=u32(r4(R+16)+u32(100u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B452ef6:{NFSU2_TR(0x452ef6);
{u32 ea_=u32(u32(7881976u));__asm__ volatile(".byte 0xd8,0x38"::"a"(ea_):"memory");}
}
B452efc:{NFSU2_TR(0x452efc);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B452efd:{NFSU2_TR(0x452efd);
u8 U[4];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B452f01:{NFSU2_TR(0x452f01);
u8 U[4];
w4(U+0,u32(u32(u32(0x60ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B452f05:{NFSU2_TR(0x452f05);
u8 U[8];
w4(U+0,u32(u32(u32(0x60ull))+u32(r4(R+16))));
w4(U+4,u32(0x5ull));
s4(u32(r4(U+0)),r4(U+4));
}
B452f0d:{NFSU2_TR(0x452f0d);
u8 U[8];
w4(U+0,u32(u32(u32(0x64ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B452f15:{NFSU2_TR(0x452f15);
u8 U[8];
w4(U+0,u32(u32(u32(0x70ull))+u32(r4(R+16))));
w4(U+4,u32(0x7ec430ull));
s4(u32(r4(U+0)),r4(U+4));
}
B452f1d:{NFSU2_TR(0x452f1d);
{u32 ea_=u32(r4(R+16)+u32(108u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B452f21:{NFSU2_TR(0x452f21);
{u32 ea_=u32(r4(R+24)+u32(1072u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B452f27:{NFSU2_TR(0x452f27);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B452f2a:{NFSU2_TR(0x452f2a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B452f2b:{NFSU2_TR(0x452f2b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x452f30ull));
TAIL_STATIC(0x446d00u,446);
}
B452f30:L452f30:{c.instructions+=41;NFSU2_TR(0x452f30);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x394ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B452f36:{NFSU2_TR(0x452f36);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x98ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B452f3c:{NFSU2_TR(0x452f3c);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x800ee0ull))));
}
B452f41:{NFSU2_TR(0x452f41);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B452f45:{NFSU2_TR(0x452f45);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B452f49:{NFSU2_TR(0x452f49);
{u32 ea_=u32(r4(R+0)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B452f4c:{NFSU2_TR(0x452f4c);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((R+4),(U+0),4);
}
B452f4f:{NFSU2_TR(0x452f4f);
{u32 ea_=u32(r4(R+0)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B452f52:{NFSU2_TR(0x452f52);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x398ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B452f58:{NFSU2_TR(0x452f58);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x98ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B452f5e:{NFSU2_TR(0x452f5e);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B452f60:{NFSU2_TR(0x452f60);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x800ee0ull))));
}
B452f65:{NFSU2_TR(0x452f65);
{u32 ea_=u32(r4(R+0)+u32(28u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B452f68:{NFSU2_TR(0x452f68);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B452f6c:{NFSU2_TR(0x452f6c);
{u32 ea_=u32(r4(R+0)+u32(24u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B452f6f:{NFSU2_TR(0x452f6f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x39cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B452f75:{NFSU2_TR(0x452f75);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B452f79:{NFSU2_TR(0x452f79);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x98ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B452f7f:{NFSU2_TR(0x452f7f);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x800ee0ull))));
}
B452f84:{NFSU2_TR(0x452f84);
{u32 ea_=u32(r4(R+0)+u32(28u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B452f87:{NFSU2_TR(0x452f87);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B452f89:{NFSU2_TR(0x452f89);
{u32 ea_=u32(r4(R+0)+u32(24u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B452f8c:{NFSU2_TR(0x452f8c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3a0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B452f92:{NFSU2_TR(0x452f92);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x98ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B452f98:{NFSU2_TR(0x452f98);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B452f9c:{NFSU2_TR(0x452f9c);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x800ee0ull))));
}
B452fa1:{NFSU2_TR(0x452fa1);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B452fa3:{NFSU2_TR(0x452fa3);
{u32 ea_=u32(r4(R+0)+u32(28u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B452fa6:{NFSU2_TR(0x452fa6);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B452faa:{NFSU2_TR(0x452faa);
{u32 ea_=u32(r4(R+0)+u32(24u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B452fad:{NFSU2_TR(0x452fad);
{u32 ea_=u32(u32(7884072u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B452fb3:{NFSU2_TR(0x452fb3);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B452fb7:{NFSU2_TR(0x452fb7);
{u32 ea_=u32(u32(7893180u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B452fbd:{NFSU2_TR(0x452fbd);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B452fbf:{NFSU2_TR(0x452fbf);
{u32 ea_=u32(u32(7884072u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B452fc5:{NFSU2_TR(0x452fc5);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B452fc9:{NFSU2_TR(0x452fc9);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B452fcb:{NFSU2_TR(0x452fcb);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B452fcf:{NFSU2_TR(0x452fcf);
{u32 ea_=u32(r4(R+20)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B452fd2:{NFSU2_TR(0x452fd2);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B452fd6:{NFSU2_TR(0x452fd6);
if(r1(R+518)){TAIL_STATIC(0x453008u,453);}
}
B452fd8:L452fd8:{c.instructions+=1;NFSU2_TR(0x452fd8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x452fddull));
TAIL_STATIC(0x59fa30u,59f);
}
B452fdd:L452fdd:{c.instructions+=2;NFSU2_TR(0x452fdd);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B452fdf:{NFSU2_TR(0x452fdf);
if(r1(R+518)){TAIL_STATIC(0x453008u,453);}
}
B452fe1:L452fe1:{c.instructions+=2;NFSU2_TR(0x452fe1);
__builtin_memmove((R+4),(R+24),4);
}
B452fe3:{NFSU2_TR(0x452fe3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x452fe8ull));
TAIL_STATIC(0x5ecdb0u,5ec);
}
B452fe8:L452fe8:{c.instructions+=2;NFSU2_TR(0x452fe8);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B452fea:{NFSU2_TR(0x452fea);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x453008u,453);}
}
B452fec:L452fec:{c.instructions+=4;NFSU2_TR(0x452fec);
{u32 ea_=u32(u32(7893168u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B452ff2:{NFSU2_TR(0x452ff2);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B452ff6:{NFSU2_TR(0x452ff6);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B452ffa:{NFSU2_TR(0x452ffa);
{u32 ea_=u32(u32(7893172u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
TAIL_STATIC(0x453000u,453);
}
XIT:NFSU2_TR_EXIT(0x452,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
