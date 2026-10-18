#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_402(u8* __restrict R,Cpu& c);
u32 body_426(u8* __restrict R,Cpu& c);
u32 body_42b(u8* __restrict R,Cpu& c);
u32 body_42e(u8* __restrict R,Cpu& c);
u32 body_43b(u8* __restrict R,Cpu& c);
u32 body_43e(u8* __restrict R,Cpu& c);
u32 body_502(u8* __restrict R,Cpu& c);
u32 body_56d(u8* __restrict R,Cpu& c);
u32 body_575(u8* __restrict R,Cpu& c);
u32 body_577(u8* __restrict R,Cpu& c);
u32 body_581(u8* __restrict R,Cpu& c);
u32 body_584(u8* __restrict R,Cpu& c);
u32 body_5ea(u8* __restrict R,Cpu& c);
u32 body_5ee(u8* __restrict R,Cpu& c);
u32 body_5f7(u8* __restrict R,Cpu& c);
u32 body_5f8(u8* __restrict R,Cpu& c);
u32 body_602(u8* __restrict R,Cpu& c);
u32 body_605(u8* __restrict R,Cpu& c);
u32 body_606(u8* __restrict R,Cpu& c);
u32 body_607(u8* __restrict R,Cpu& c);
u32 body_609(u8* __restrict R,Cpu& c);
u32 body_75b(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x608,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x608,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_608(u8* __restrict R,Cpu& c);
u32 page_608(Cpu& c){return body_608(c.regs.data(),c);}
__attribute__((noinline)) u32 body_608(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x608000:goto L608000;
case 0x608006:c.instructions+=4;goto B608006;
case 0x608008:c.instructions+=3;goto B608008;
case 0x60800b:c.instructions+=2;goto B60800b;
case 0x608010:c.instructions+=1;goto B608010;
case 0x608012:goto L608012;
case 0x608014:c.instructions+=2;goto B608014;
case 0x608016:c.instructions+=1;goto B608016;
case 0x608018:goto L608018;
case 0x60801c:c.instructions+=1;goto B60801c;
case 0x608021:goto L608021;
case 0x608023:c.instructions+=3;goto B608023;
case 0x608027:c.instructions+=2;goto B608027;
case 0x608029:c.instructions+=1;goto B608029;
case 0x60802b:goto L60802b;
case 0x60802c:c.instructions+=3;goto B60802c;
case 0x60802f:c.instructions+=2;goto B60802f;
case 0x608031:c.instructions+=1;goto B608031;
case 0x608033:goto L608033;
case 0x608036:c.instructions+=10;goto B608036;
case 0x60803b:c.instructions+=9;goto B60803b;
case 0x608042:c.instructions+=8;goto B608042;
case 0x608046:c.instructions+=7;goto B608046;
case 0x60804a:c.instructions+=6;goto B60804a;
case 0x60804c:c.instructions+=5;goto B60804c;
case 0x60804f:c.instructions+=4;goto B60804f;
case 0x608052:c.instructions+=3;goto B608052;
case 0x608054:c.instructions+=2;goto B608054;
case 0x60805a:c.instructions+=1;goto B60805a;
case 0x60805c:goto L60805c;
case 0x60805d:c.instructions+=1;goto B60805d;
case 0x608060:goto L608060;
case 0x608062:c.instructions+=2;goto B608062;
case 0x608064:c.instructions+=1;goto B608064;
case 0x608066:goto L608066;
case 0x60806a:c.instructions+=2;goto B60806a;
case 0x60806f:c.instructions+=1;goto B60806f;
case 0x608070:goto L608070;
case 0x608072:c.instructions+=3;goto B608072;
case 0x608076:c.instructions+=2;goto B608076;
case 0x608078:c.instructions+=1;goto B608078;
case 0x60807e:goto L60807e;
case 0x60807f:c.instructions+=3;goto B60807f;
case 0x608082:c.instructions+=2;goto B608082;
case 0x608084:c.instructions+=1;goto B608084;
case 0x608086:goto L608086;
case 0x60808a:c.instructions+=7;goto B60808a;
case 0x60808d:c.instructions+=6;goto B60808d;
case 0x608093:c.instructions+=5;goto B608093;
case 0x608096:c.instructions+=4;goto B608096;
case 0x608097:c.instructions+=3;goto B608097;
case 0x608099:c.instructions+=2;goto B608099;
case 0x60809a:c.instructions+=1;goto B60809a;
case 0x60809f:goto L60809f;
case 0x6080a5:c.instructions+=2;goto B6080a5;
case 0x6080a7:c.instructions+=1;goto B6080a7;
case 0x6080a9:goto L6080a9;
case 0x6080ae:goto L6080ae;
case 0x6080b4:c.instructions+=2;goto B6080b4;
case 0x6080b6:c.instructions+=1;goto B6080b6;
case 0x6080b8:goto L6080b8;
case 0x6080bd:goto L6080bd;
case 0x6080c1:c.instructions+=6;goto B6080c1;
case 0x6080c4:c.instructions+=5;goto B6080c4;
case 0x6080c8:c.instructions+=4;goto B6080c8;
case 0x6080c9:c.instructions+=3;goto B6080c9;
case 0x6080cb:c.instructions+=2;goto B6080cb;
case 0x6080ce:c.instructions+=1;goto B6080ce;
case 0x6080d4:goto L6080d4;
case 0x6080d6:c.instructions+=1;goto B6080d6;
case 0x6080db:goto L6080db;
case 0x6080e1:c.instructions+=3;goto B6080e1;
case 0x6080e4:c.instructions+=2;goto B6080e4;
case 0x6080ea:c.instructions+=1;goto B6080ea;
case 0x6080ec:goto L6080ec;
case 0x6080ef:c.instructions+=1;goto B6080ef;
case 0x6080f1:goto L6080f1;
case 0x6080f4:c.instructions+=3;goto B6080f4;
case 0x6080f9:c.instructions+=2;goto B6080f9;
case 0x6080fc:c.instructions+=1;goto B6080fc;
case 0x6080fe:goto L6080fe;
case 0x608100:c.instructions+=1;goto B608100;
case 0x608102:goto L608102;
case 0x608109:c.instructions+=1;goto B608109;
case 0x60810b:goto L60810b;
case 0x60810c:c.instructions+=1;goto B60810c;
case 0x608111:goto L608111;
case 0x608116:c.instructions+=2;goto B608116;
case 0x608118:c.instructions+=1;goto B608118;
case 0x60811a:goto L60811a;
case 0x60811c:c.instructions+=1;goto B60811c;
case 0x60811e:goto L60811e;
case 0x608125:c.instructions+=1;goto B608125;
case 0x608127:goto L608127;
case 0x60812c:c.instructions+=1;goto B60812c;
case 0x60812e:goto L60812e;
case 0x608133:goto L608133;
case 0x608138:c.instructions+=4;goto B608138;
case 0x60813e:c.instructions+=3;goto B60813e;
case 0x608141:c.instructions+=2;goto B608141;
case 0x608146:c.instructions+=1;goto B608146;
case 0x608148:goto L608148;
case 0x60814f:c.instructions+=1;goto B60814f;
case 0x608151:goto L608151;
case 0x608153:c.instructions+=1;goto B608153;
case 0x608155:goto L608155;
case 0x608157:c.instructions+=1;goto B608157;
case 0x608159:goto L608159;
case 0x60815c:c.instructions+=1;goto B60815c;
case 0x608162:goto L608162;
case 0x608165:c.instructions+=1;goto B608165;
case 0x608167:goto L608167;
case 0x60816c:goto L60816c;
case 0x608172:c.instructions+=2;goto B608172;
case 0x608174:c.instructions+=1;goto B608174;
case 0x608176:goto L608176;
case 0x608178:c.instructions+=1;goto B608178;
case 0x60817a:goto L60817a;
case 0x60817c:c.instructions+=1;goto B60817c;
case 0x60817e:goto L60817e;
case 0x608180:c.instructions+=1;goto B608180;
case 0x608182:goto L608182;
case 0x608187:goto L608187;
case 0x608189:c.instructions+=5;goto B608189;
case 0x60818b:c.instructions+=4;goto B60818b;
case 0x60818d:c.instructions+=3;goto B60818d;
case 0x608190:c.instructions+=2;goto B608190;
case 0x608191:c.instructions+=1;goto B608191;
case 0x608196:goto L608196;
case 0x608199:c.instructions+=4;goto B608199;
case 0x60819e:c.instructions+=3;goto B60819e;
case 0x6081a5:c.instructions+=2;goto B6081a5;
case 0x6081ac:c.instructions+=1;goto B6081ac;
case 0x6081b1:goto L6081b1;
case 0x6081b4:c.instructions+=4;goto B6081b4;
case 0x6081b8:c.instructions+=3;goto B6081b8;
case 0x6081ba:c.instructions+=2;goto B6081ba;
case 0x6081c2:c.instructions+=1;goto B6081c2;
case 0x6081c4:goto L6081c4;
case 0x6081c5:c.instructions+=2;goto B6081c5;
case 0x6081c7:c.instructions+=1;goto B6081c7;
case 0x6081cc:goto L6081cc;
case 0x6081ce:goto L6081ce;
case 0x6081d0:goto L6081d0;
case 0x6081d2:c.instructions+=3;goto B6081d2;
case 0x6081da:c.instructions+=2;goto B6081da;
case 0x6081dd:c.instructions+=1;goto B6081dd;
case 0x6081df:goto L6081df;
case 0x6081e1:c.instructions+=3;goto B6081e1;
case 0x6081e3:c.instructions+=2;goto B6081e3;
case 0x6081e5:c.instructions+=1;goto B6081e5;
case 0x6081e7:goto L6081e7;
case 0x6081ea:c.instructions+=13;goto B6081ea;
case 0x6081ed:c.instructions+=12;goto B6081ed;
case 0x6081f0:c.instructions+=11;goto B6081f0;
case 0x6081f3:c.instructions+=10;goto B6081f3;
case 0x6081f6:c.instructions+=9;goto B6081f6;
case 0x6081fa:c.instructions+=8;goto B6081fa;
case 0x6081fd:c.instructions+=7;goto B6081fd;
case 0x608204:c.instructions+=6;goto B608204;
case 0x608208:c.instructions+=5;goto B608208;
case 0x60820b:c.instructions+=4;goto B60820b;
case 0x608212:c.instructions+=3;goto B608212;
case 0x608216:c.instructions+=2;goto B608216;
case 0x608219:c.instructions+=1;goto B608219;
case 0x608220:goto L608220;
case 0x608224:c.instructions+=1;goto B608224;
case 0x608226:goto L608226;
case 0x608229:c.instructions+=1;goto B608229;
case 0x60822e:goto L60822e;
case 0x608232:c.instructions+=2;goto B608232;
case 0x608234:c.instructions+=1;goto B608234;
case 0x608236:goto L608236;
case 0x60823b:c.instructions+=5;goto B60823b;
case 0x608241:c.instructions+=4;goto B608241;
case 0x608247:c.instructions+=3;goto B608247;
case 0x60824d:c.instructions+=2;goto B60824d;
case 0x608254:c.instructions+=1;goto B608254;
case 0x60825b:goto L60825b;
case 0x608260:c.instructions+=2;goto B608260;
case 0x608262:c.instructions+=1;goto B608262;
case 0x608264:goto L608264;
case 0x608266:c.instructions+=1;goto B608266;
case 0x608268:goto L608268;
case 0x60826a:c.instructions+=1;goto B60826a;
case 0x60826f:goto L60826f;
case 0x608276:c.instructions+=1;goto B608276;
case 0x608278:goto L608278;
case 0x60827f:c.instructions+=1;goto B60827f;
case 0x608281:goto L608281;
case 0x608285:c.instructions+=5;goto B608285;
case 0x608289:c.instructions+=4;goto B608289;
case 0x608290:c.instructions+=3;goto B608290;
case 0x608292:c.instructions+=2;goto B608292;
case 0x608294:c.instructions+=1;goto B608294;
case 0x608296:goto L608296;
case 0x608299:c.instructions+=1;goto B608299;
case 0x60829b:goto L60829b;
case 0x60829d:goto L60829d;
case 0x6082a0:c.instructions+=2;goto B6082a0;
case 0x6082a6:c.instructions+=1;goto B6082a6;
case 0x6082b0:goto L6082b0;
case 0x6082b4:goto L6082b4;
case 0x6082b8:c.instructions+=6;goto B6082b8;
case 0x6082bb:c.instructions+=5;goto B6082bb;
case 0x6082bf:c.instructions+=4;goto B6082bf;
case 0x6082c0:c.instructions+=3;goto B6082c0;
case 0x6082c2:c.instructions+=2;goto B6082c2;
case 0x6082c6:c.instructions+=1;goto B6082c6;
case 0x6082cc:goto L6082cc;
case 0x6082d1:goto L6082d1;
case 0x6082d7:c.instructions+=1;goto B6082d7;
case 0x6082d9:goto L6082d9;
case 0x6082e0:c.instructions+=1;goto B6082e0;
case 0x6082e2:goto L6082e2;
case 0x6082e7:c.instructions+=1;goto B6082e7;
case 0x6082ec:goto L6082ec;
case 0x6082ee:c.instructions+=1;goto B6082ee;
case 0x6082f0:goto L6082f0;
case 0x6082f5:c.instructions+=1;goto B6082f5;
case 0x6082fa:goto L6082fa;
case 0x6082fd:c.instructions+=6;goto B6082fd;
case 0x608301:c.instructions+=5;goto B608301;
case 0x608305:c.instructions+=4;goto B608305;
case 0x60830b:c.instructions+=3;goto B60830b;
case 0x608311:c.instructions+=2;goto B608311;
case 0x608317:c.instructions+=1;goto B608317;
case 0x60831c:goto L60831c;
case 0x60831f:c.instructions+=1;goto B60831f;
case 0x608321:goto L608321;
case 0x608327:c.instructions+=3;goto B608327;
case 0x608329:c.instructions+=2;goto B608329;
case 0x60832b:c.instructions+=1;goto B60832b;
case 0x60832d:goto L60832d;
case 0x608330:c.instructions+=1;goto B608330;
case 0x608332:goto L608332;
case 0x608334:goto L608334;
case 0x60833a:c.instructions+=4;goto B60833a;
case 0x60833c:c.instructions+=3;goto B60833c;
case 0x60833e:c.instructions+=2;goto B60833e;
case 0x608344:c.instructions+=1;goto B608344;
case 0x608346:goto L608346;
case 0x608349:c.instructions+=1;goto B608349;
case 0x60834b:goto L60834b;
case 0x60834d:goto L60834d;
case 0x60834f:c.instructions+=2;goto B60834f;
case 0x608351:c.instructions+=1;goto B608351;
case 0x608357:goto L608357;
case 0x608359:c.instructions+=2;goto B608359;
case 0x60835b:c.instructions+=1;goto B60835b;
case 0x60835d:goto L60835d;
case 0x608360:c.instructions+=2;goto B608360;
case 0x608364:c.instructions+=1;goto B608364;
case 0x608366:goto L608366;
case 0x60836e:goto L60836e;
case 0x608372:c.instructions+=9;goto B608372;
case 0x608377:c.instructions+=8;goto B608377;
case 0x60837a:c.instructions+=7;goto B60837a;
case 0x60837d:c.instructions+=6;goto B60837d;
case 0x608383:c.instructions+=5;goto B608383;
case 0x608385:c.instructions+=4;goto B608385;
case 0x60838a:c.instructions+=3;goto B60838a;
case 0x60838c:c.instructions+=2;goto B60838c;
case 0x60838f:c.instructions+=1;goto B60838f;
case 0x608394:goto L608394;
case 0x60839a:c.instructions+=5;goto B60839a;
case 0x60839c:c.instructions+=4;goto B60839c;
case 0x60839f:c.instructions+=3;goto B60839f;
case 0x6083a5:c.instructions+=2;goto B6083a5;
case 0x6083a8:c.instructions+=1;goto B6083a8;
case 0x6083aa:goto L6083aa;
case 0x6083af:goto L6083af;
case 0x6083b4:c.instructions+=2;goto B6083b4;
case 0x6083b6:c.instructions+=1;goto B6083b6;
case 0x6083b8:goto L6083b8;
case 0x6083bd:c.instructions+=2;goto B6083bd;
case 0x6083bf:c.instructions+=1;goto B6083bf;
case 0x6083c1:goto L6083c1;
case 0x6083c5:c.instructions+=4;goto B6083c5;
case 0x6083c9:c.instructions+=3;goto B6083c9;
case 0x6083cf:c.instructions+=2;goto B6083cf;
case 0x6083d1:c.instructions+=1;goto B6083d1;
case 0x6083d3:goto L6083d3;
case 0x6083d5:c.instructions+=1;goto B6083d5;
case 0x6083da:goto L6083da;
case 0x6083df:c.instructions+=2;goto B6083df;
case 0x6083e1:c.instructions+=1;goto B6083e1;
case 0x6083e3:goto L6083e3;
case 0x6083e8:c.instructions+=2;goto B6083e8;
case 0x6083ea:c.instructions+=1;goto B6083ea;
case 0x6083ec:goto L6083ec;
case 0x6083f1:c.instructions+=2;goto B6083f1;
case 0x6083f3:c.instructions+=1;goto B6083f3;
case 0x6083f9:goto L6083f9;
case 0x6083fc:c.instructions+=2;goto B6083fc;
case 0x6083fe:c.instructions+=1;goto B6083fe;
case 0x608400:goto L608400;
case 0x608404:c.instructions+=1;goto B608404;
case 0x608409:goto L608409;
case 0x60840c:goto L60840c;
case 0x608413:c.instructions+=1;goto B608413;
case 0x608415:goto L608415;
case 0x608419:c.instructions+=5;goto B608419;
case 0x60841d:c.instructions+=4;goto B60841d;
case 0x608423:c.instructions+=3;goto B608423;
case 0x608425:c.instructions+=2;goto B608425;
case 0x608427:c.instructions+=1;goto B608427;
case 0x608429:goto L608429;
case 0x60842f:c.instructions+=5;goto B60842f;
case 0x608436:c.instructions+=4;goto B608436;
case 0x60843a:c.instructions+=3;goto B60843a;
case 0x60843c:c.instructions+=2;goto B60843c;
case 0x60843e:c.instructions+=1;goto B60843e;
case 0x608440:goto L608440;
case 0x608445:c.instructions+=2;goto B608445;
case 0x608447:c.instructions+=1;goto B608447;
case 0x608449:goto L608449;
case 0x60844d:c.instructions+=1;goto B60844d;
case 0x608454:goto L608454;
case 0x608457:c.instructions+=8;goto B608457;
case 0x60845b:c.instructions+=7;goto B60845b;
case 0x60845f:c.instructions+=6;goto B60845f;
case 0x608461:c.instructions+=5;goto B608461;
case 0x608463:c.instructions+=4;goto B608463;
case 0x608464:c.instructions+=3;goto B608464;
case 0x608465:c.instructions+=2;goto B608465;
case 0x60846a:c.instructions+=1;goto B60846a;
case 0x60846f:goto L60846f;
case 0x608471:c.instructions+=1;goto B608471;
case 0x608473:goto L608473;
case 0x608479:c.instructions+=1;goto B608479;
case 0x60847e:goto L60847e;
case 0x608483:c.instructions+=2;goto B608483;
case 0x608485:c.instructions+=1;goto B608485;
case 0x608487:goto L608487;
case 0x60848c:c.instructions+=2;goto B60848c;
case 0x60848e:c.instructions+=1;goto B60848e;
case 0x608490:goto L608490;
case 0x608495:c.instructions+=2;goto B608495;
case 0x608497:c.instructions+=1;goto B608497;
case 0x608499:goto L608499;
case 0x60849e:c.instructions+=2;goto B60849e;
case 0x6084a0:c.instructions+=1;goto B6084a0;
case 0x6084a2:goto L6084a2;
case 0x6084a6:c.instructions+=2;goto B6084a6;
case 0x6084aa:c.instructions+=1;goto B6084aa;
case 0x6084ac:goto L6084ac;
case 0x6084b0:c.instructions+=1;goto B6084b0;
case 0x6084b2:goto L6084b2;
case 0x6084b4:c.instructions+=3;goto B6084b4;
case 0x6084b7:c.instructions+=2;goto B6084b7;
case 0x6084be:c.instructions+=1;goto B6084be;
case 0x6084c0:goto L6084c0;
case 0x6084c4:c.instructions+=2;goto B6084c4;
case 0x6084cb:c.instructions+=1;goto B6084cb;
case 0x6084cd:goto L6084cd;
case 0x6084d1:c.instructions+=5;goto B6084d1;
case 0x6084d7:c.instructions+=4;goto B6084d7;
case 0x6084d8:c.instructions+=3;goto B6084d8;
case 0x6084d9:c.instructions+=2;goto B6084d9;
case 0x6084db:c.instructions+=1;goto B6084db;
case 0x6084e0:goto L6084e0;
case 0x6084e6:c.instructions+=2;goto B6084e6;
case 0x6084e8:c.instructions+=1;goto B6084e8;
case 0x6084ea:goto L6084ea;
case 0x6084ef:goto L6084ef;
case 0x6084f5:c.instructions+=2;goto B6084f5;
case 0x6084f7:c.instructions+=1;goto B6084f7;
case 0x6084f9:goto L6084f9;
case 0x6084fe:goto L6084fe;
case 0x608502:c.instructions+=6;goto B608502;
case 0x608505:c.instructions+=5;goto B608505;
case 0x608509:c.instructions+=4;goto B608509;
case 0x60850a:c.instructions+=3;goto B60850a;
case 0x60850c:c.instructions+=2;goto B60850c;
case 0x60850f:c.instructions+=1;goto B60850f;
case 0x608515:goto L608515;
case 0x608517:c.instructions+=1;goto B608517;
case 0x60851c:goto L60851c;
case 0x608522:c.instructions+=3;goto B608522;
case 0x608525:c.instructions+=2;goto B608525;
case 0x60852b:c.instructions+=1;goto B60852b;
case 0x60852d:goto L60852d;
case 0x608530:c.instructions+=1;goto B608530;
case 0x608532:goto L608532;
case 0x608535:c.instructions+=3;goto B608535;
case 0x60853a:c.instructions+=2;goto B60853a;
case 0x60853d:c.instructions+=1;goto B60853d;
case 0x60853f:goto L60853f;
case 0x608541:c.instructions+=1;goto B608541;
case 0x608543:goto L608543;
case 0x60854a:c.instructions+=1;goto B60854a;
case 0x60854c:goto L60854c;
case 0x608551:c.instructions+=2;goto B608551;
case 0x608553:c.instructions+=1;goto B608553;
case 0x608555:goto L608555;
case 0x608557:c.instructions+=1;goto B608557;
case 0x608559:goto L608559;
case 0x608560:c.instructions+=1;goto B608560;
case 0x608562:goto L608562;
case 0x608567:c.instructions+=1;goto B608567;
case 0x608569:goto L608569;
case 0x60856e:goto L60856e;
case 0x608573:c.instructions+=4;goto B608573;
case 0x608579:c.instructions+=3;goto B608579;
case 0x60857c:c.instructions+=2;goto B60857c;
case 0x608581:c.instructions+=1;goto B608581;
case 0x608583:goto L608583;
case 0x60858a:c.instructions+=1;goto B60858a;
case 0x60858c:goto L60858c;
case 0x60858e:c.instructions+=1;goto B60858e;
case 0x608590:goto L608590;
case 0x608592:c.instructions+=1;goto B608592;
case 0x608594:goto L608594;
case 0x608597:c.instructions+=1;goto B608597;
case 0x60859d:goto L60859d;
case 0x6085a0:c.instructions+=1;goto B6085a0;
case 0x6085a2:goto L6085a2;
case 0x6085a7:goto L6085a7;
case 0x6085ad:c.instructions+=2;goto B6085ad;
case 0x6085af:c.instructions+=1;goto B6085af;
case 0x6085b1:goto L6085b1;
case 0x6085b3:c.instructions+=1;goto B6085b3;
case 0x6085b5:goto L6085b5;
case 0x6085b7:c.instructions+=1;goto B6085b7;
case 0x6085b9:goto L6085b9;
case 0x6085bb:c.instructions+=1;goto B6085bb;
case 0x6085bd:goto L6085bd;
case 0x6085c2:goto L6085c2;
case 0x6085c4:c.instructions+=5;goto B6085c4;
case 0x6085c6:c.instructions+=4;goto B6085c6;
case 0x6085c8:c.instructions+=3;goto B6085c8;
case 0x6085cb:c.instructions+=2;goto B6085cb;
case 0x6085cc:c.instructions+=1;goto B6085cc;
case 0x6085d1:goto L6085d1;
case 0x6085d4:c.instructions+=4;goto B6085d4;
case 0x6085d9:c.instructions+=3;goto B6085d9;
case 0x6085e0:c.instructions+=2;goto B6085e0;
case 0x6085e7:c.instructions+=1;goto B6085e7;
case 0x6085ec:goto L6085ec;
case 0x6085ef:c.instructions+=4;goto B6085ef;
case 0x6085f3:c.instructions+=3;goto B6085f3;
case 0x6085f5:c.instructions+=2;goto B6085f5;
case 0x6085fd:c.instructions+=1;goto B6085fd;
case 0x6085ff:goto L6085ff;
case 0x608600:c.instructions+=2;goto B608600;
case 0x608602:c.instructions+=1;goto B608602;
case 0x608607:goto L608607;
case 0x608609:goto L608609;
case 0x60860b:goto L60860b;
case 0x60860d:c.instructions+=3;goto B60860d;
case 0x608615:c.instructions+=2;goto B608615;
case 0x608618:c.instructions+=1;goto B608618;
case 0x60861a:goto L60861a;
case 0x60861d:c.instructions+=3;goto B60861d;
case 0x60861f:c.instructions+=2;goto B60861f;
case 0x608621:c.instructions+=1;goto B608621;
case 0x608623:goto L608623;
case 0x608626:c.instructions+=13;goto B608626;
case 0x608629:c.instructions+=12;goto B608629;
case 0x60862c:c.instructions+=11;goto B60862c;
case 0x60862f:c.instructions+=10;goto B60862f;
case 0x608632:c.instructions+=9;goto B608632;
case 0x608636:c.instructions+=8;goto B608636;
case 0x608639:c.instructions+=7;goto B608639;
case 0x608640:c.instructions+=6;goto B608640;
case 0x608644:c.instructions+=5;goto B608644;
case 0x608647:c.instructions+=4;goto B608647;
case 0x60864e:c.instructions+=3;goto B60864e;
case 0x608652:c.instructions+=2;goto B608652;
case 0x608655:c.instructions+=1;goto B608655;
case 0x60865c:goto L60865c;
case 0x608660:c.instructions+=1;goto B608660;
case 0x608662:goto L608662;
case 0x608665:c.instructions+=1;goto B608665;
case 0x60866a:goto L60866a;
case 0x60866f:c.instructions+=2;goto B60866f;
case 0x608671:c.instructions+=1;goto B608671;
case 0x608673:goto L608673;
case 0x608675:c.instructions+=1;goto B608675;
case 0x608677:goto L608677;
case 0x608679:c.instructions+=1;goto B608679;
case 0x60867e:goto L60867e;
case 0x608682:c.instructions+=5;goto B608682;
case 0x608687:c.instructions+=4;goto B608687;
case 0x608689:c.instructions+=3;goto B608689;
case 0x60868b:c.instructions+=2;goto B60868b;
case 0x60868d:c.instructions+=1;goto B60868d;
case 0x60868f:goto L60868f;
case 0x608692:c.instructions+=1;goto B608692;
case 0x608694:goto L608694;
case 0x608696:goto L608696;
case 0x608698:c.instructions+=6;goto B608698;
case 0x60869c:c.instructions+=5;goto B60869c;
case 0x6086a2:c.instructions+=4;goto B6086a2;
case 0x6086a8:c.instructions+=3;goto B6086a8;
case 0x6086aa:c.instructions+=2;goto B6086aa;
case 0x6086ac:c.instructions+=1;goto B6086ac;
case 0x6086ae:goto L6086ae;
case 0x6086b1:c.instructions+=1;goto B6086b1;
case 0x6086b3:goto L6086b3;
case 0x6086b5:goto L6086b5;
case 0x6086b9:c.instructions+=9;goto B6086b9;
case 0x6086bc:c.instructions+=8;goto B6086bc;
case 0x6086c1:c.instructions+=7;goto B6086c1;
case 0x6086c4:c.instructions+=6;goto B6086c4;
case 0x6086ca:c.instructions+=5;goto B6086ca;
case 0x6086cc:c.instructions+=4;goto B6086cc;
case 0x6086d1:c.instructions+=3;goto B6086d1;
case 0x6086d3:c.instructions+=2;goto B6086d3;
case 0x6086d5:c.instructions+=1;goto B6086d5;
case 0x6086da:goto L6086da;
case 0x6086e0:c.instructions+=5;goto B6086e0;
case 0x6086e2:c.instructions+=4;goto B6086e2;
case 0x6086e5:c.instructions+=3;goto B6086e5;
case 0x6086eb:c.instructions+=2;goto B6086eb;
case 0x6086ee:c.instructions+=1;goto B6086ee;
case 0x6086f0:goto L6086f0;
case 0x6086f5:goto L6086f5;
case 0x6086fa:c.instructions+=2;goto B6086fa;
case 0x6086fc:c.instructions+=1;goto B6086fc;
case 0x6086fe:goto L6086fe;
case 0x608703:c.instructions+=2;goto B608703;
case 0x608705:c.instructions+=1;goto B608705;
case 0x608707:goto L608707;
case 0x60870b:c.instructions+=4;goto B60870b;
case 0x60870f:c.instructions+=3;goto B60870f;
case 0x608715:c.instructions+=2;goto B608715;
case 0x608717:c.instructions+=1;goto B608717;
case 0x608719:goto L608719;
case 0x60871b:c.instructions+=1;goto B60871b;
case 0x608720:goto L608720;
case 0x608725:c.instructions+=2;goto B608725;
case 0x608727:c.instructions+=1;goto B608727;
case 0x608729:goto L608729;
case 0x60872e:c.instructions+=2;goto B60872e;
case 0x608730:c.instructions+=1;goto B608730;
case 0x608732:goto L608732;
case 0x608737:c.instructions+=2;goto B608737;
case 0x608739:c.instructions+=1;goto B608739;
case 0x60873f:goto L60873f;
case 0x608742:c.instructions+=2;goto B608742;
case 0x608744:c.instructions+=1;goto B608744;
case 0x608746:goto L608746;
case 0x60874a:c.instructions+=1;goto B60874a;
case 0x60874f:goto L60874f;
case 0x608752:goto L608752;
case 0x608759:c.instructions+=1;goto B608759;
case 0x60875b:goto L60875b;
case 0x60875f:c.instructions+=5;goto B60875f;
case 0x608763:c.instructions+=4;goto B608763;
case 0x608769:c.instructions+=3;goto B608769;
case 0x60876c:c.instructions+=2;goto B60876c;
case 0x60876e:c.instructions+=1;goto B60876e;
case 0x608770:goto L608770;
case 0x608775:c.instructions+=5;goto B608775;
case 0x60877c:c.instructions+=4;goto B60877c;
case 0x608780:c.instructions+=3;goto B608780;
case 0x608782:c.instructions+=2;goto B608782;
case 0x608784:c.instructions+=1;goto B608784;
case 0x608786:goto L608786;
case 0x60878b:c.instructions+=2;goto B60878b;
case 0x60878d:c.instructions+=1;goto B60878d;
case 0x60878f:goto L60878f;
case 0x608793:c.instructions+=1;goto B608793;
case 0x60879a:goto L60879a;
case 0x60879c:c.instructions+=8;goto B60879c;
case 0x6087a0:c.instructions+=7;goto B6087a0;
case 0x6087a4:c.instructions+=6;goto B6087a4;
case 0x6087a6:c.instructions+=5;goto B6087a6;
case 0x6087a8:c.instructions+=4;goto B6087a8;
case 0x6087a9:c.instructions+=3;goto B6087a9;
case 0x6087aa:c.instructions+=2;goto B6087aa;
case 0x6087af:c.instructions+=1;goto B6087af;
case 0x6087b4:goto L6087b4;
case 0x6087b6:c.instructions+=1;goto B6087b6;
case 0x6087b8:goto L6087b8;
case 0x6087be:c.instructions+=1;goto B6087be;
case 0x6087c3:goto L6087c3;
case 0x6087c8:c.instructions+=2;goto B6087c8;
case 0x6087ca:c.instructions+=1;goto B6087ca;
case 0x6087cc:goto L6087cc;
case 0x6087d1:c.instructions+=2;goto B6087d1;
case 0x6087d3:c.instructions+=1;goto B6087d3;
case 0x6087d5:goto L6087d5;
case 0x6087da:c.instructions+=2;goto B6087da;
case 0x6087dc:c.instructions+=1;goto B6087dc;
case 0x6087de:goto L6087de;
case 0x6087e3:c.instructions+=2;goto B6087e3;
case 0x6087e5:c.instructions+=1;goto B6087e5;
case 0x6087e7:goto L6087e7;
case 0x6087eb:c.instructions+=2;goto B6087eb;
case 0x6087ef:c.instructions+=1;goto B6087ef;
case 0x6087f1:goto L6087f1;
case 0x6087f5:c.instructions+=1;goto B6087f5;
case 0x6087f7:goto L6087f7;
case 0x6087f9:c.instructions+=3;goto B6087f9;
case 0x6087fc:c.instructions+=2;goto B6087fc;
case 0x608803:c.instructions+=1;goto B608803;
case 0x608805:goto L608805;
case 0x608809:c.instructions+=2;goto B608809;
case 0x608810:c.instructions+=1;goto B608810;
case 0x608812:goto L608812;
case 0x608816:c.instructions+=6;goto B608816;
case 0x60881c:c.instructions+=5;goto B60881c;
case 0x60881f:c.instructions+=4;goto B60881f;
case 0x608820:c.instructions+=3;goto B608820;
case 0x608821:c.instructions+=2;goto B608821;
case 0x608823:c.instructions+=1;goto B608823;
case 0x608828:goto L608828;
case 0x60882e:c.instructions+=2;goto B60882e;
case 0x608830:c.instructions+=1;goto B608830;
case 0x608832:goto L608832;
case 0x608837:goto L608837;
case 0x60883d:c.instructions+=2;goto B60883d;
case 0x60883f:c.instructions+=1;goto B60883f;
case 0x608841:goto L608841;
case 0x608846:goto L608846;
case 0x60884a:c.instructions+=5;goto B60884a;
case 0x60884d:c.instructions+=4;goto B60884d;
case 0x60884e:c.instructions+=3;goto B60884e;
case 0x608850:c.instructions+=2;goto B608850;
case 0x608853:c.instructions+=1;goto B608853;
case 0x608859:goto L608859;
case 0x60885b:c.instructions+=1;goto B60885b;
case 0x608860:goto L608860;
case 0x608866:c.instructions+=3;goto B608866;
case 0x608869:c.instructions+=2;goto B608869;
case 0x60886f:c.instructions+=1;goto B60886f;
case 0x608871:goto L608871;
case 0x608874:c.instructions+=1;goto B608874;
case 0x608876:goto L608876;
case 0x608879:c.instructions+=3;goto B608879;
case 0x60887e:c.instructions+=2;goto B60887e;
case 0x608881:c.instructions+=1;goto B608881;
case 0x608883:goto L608883;
case 0x608885:c.instructions+=1;goto B608885;
case 0x608887:goto L608887;
case 0x60888e:c.instructions+=1;goto B60888e;
case 0x608890:goto L608890;
case 0x608895:c.instructions+=2;goto B608895;
case 0x608897:c.instructions+=1;goto B608897;
case 0x608899:goto L608899;
case 0x60889b:c.instructions+=1;goto B60889b;
case 0x60889d:goto L60889d;
case 0x6088a4:c.instructions+=1;goto B6088a4;
case 0x6088a6:goto L6088a6;
case 0x6088ab:c.instructions+=1;goto B6088ab;
case 0x6088ad:goto L6088ad;
case 0x6088b2:goto L6088b2;
case 0x6088b7:c.instructions+=4;goto B6088b7;
case 0x6088bd:c.instructions+=3;goto B6088bd;
case 0x6088c0:c.instructions+=2;goto B6088c0;
case 0x6088c5:c.instructions+=1;goto B6088c5;
case 0x6088c7:goto L6088c7;
case 0x6088ce:c.instructions+=1;goto B6088ce;
case 0x6088d0:goto L6088d0;
case 0x6088d2:c.instructions+=1;goto B6088d2;
case 0x6088d4:goto L6088d4;
case 0x6088d6:c.instructions+=1;goto B6088d6;
case 0x6088d8:goto L6088d8;
case 0x6088db:c.instructions+=1;goto B6088db;
case 0x6088e1:goto L6088e1;
case 0x6088e4:c.instructions+=1;goto B6088e4;
case 0x6088e6:goto L6088e6;
case 0x6088eb:goto L6088eb;
case 0x6088f1:c.instructions+=2;goto B6088f1;
case 0x6088f3:c.instructions+=1;goto B6088f3;
case 0x6088f5:goto L6088f5;
case 0x6088f7:c.instructions+=1;goto B6088f7;
case 0x6088f9:goto L6088f9;
case 0x6088fb:c.instructions+=1;goto B6088fb;
case 0x6088fd:goto L6088fd;
case 0x6088ff:c.instructions+=1;goto B6088ff;
case 0x608901:goto L608901;
case 0x608906:goto L608906;
case 0x608908:c.instructions+=5;goto B608908;
case 0x60890a:c.instructions+=4;goto B60890a;
case 0x60890c:c.instructions+=3;goto B60890c;
case 0x60890f:c.instructions+=2;goto B60890f;
case 0x608910:c.instructions+=1;goto B608910;
case 0x608915:goto L608915;
case 0x608918:c.instructions+=4;goto B608918;
case 0x60891d:c.instructions+=3;goto B60891d;
case 0x608924:c.instructions+=2;goto B608924;
case 0x60892b:c.instructions+=1;goto B60892b;
case 0x608930:goto L608930;
case 0x608933:c.instructions+=4;goto B608933;
case 0x608937:c.instructions+=3;goto B608937;
case 0x608939:c.instructions+=2;goto B608939;
case 0x608941:c.instructions+=1;goto B608941;
case 0x608943:goto L608943;
case 0x608944:c.instructions+=2;goto B608944;
case 0x608946:c.instructions+=1;goto B608946;
case 0x60894b:goto L60894b;
case 0x60894d:goto L60894d;
case 0x60894f:goto L60894f;
case 0x608951:c.instructions+=3;goto B608951;
case 0x608959:c.instructions+=2;goto B608959;
case 0x60895c:c.instructions+=1;goto B60895c;
case 0x60895e:goto L60895e;
case 0x608960:c.instructions+=3;goto B608960;
case 0x608962:c.instructions+=2;goto B608962;
case 0x608964:c.instructions+=1;goto B608964;
case 0x608966:goto L608966;
case 0x608969:c.instructions+=13;goto B608969;
case 0x60896c:c.instructions+=12;goto B60896c;
case 0x60896f:c.instructions+=11;goto B60896f;
case 0x608972:c.instructions+=10;goto B608972;
case 0x608975:c.instructions+=9;goto B608975;
case 0x608979:c.instructions+=8;goto B608979;
case 0x60897c:c.instructions+=7;goto B60897c;
case 0x608983:c.instructions+=6;goto B608983;
case 0x608987:c.instructions+=5;goto B608987;
case 0x60898a:c.instructions+=4;goto B60898a;
case 0x608991:c.instructions+=3;goto B608991;
case 0x608995:c.instructions+=2;goto B608995;
case 0x608998:c.instructions+=1;goto B608998;
case 0x60899f:goto L60899f;
case 0x6089a3:c.instructions+=1;goto B6089a3;
case 0x6089a5:goto L6089a5;
case 0x6089a8:c.instructions+=1;goto B6089a8;
case 0x6089ad:goto L6089ad;
case 0x6089b2:c.instructions+=2;goto B6089b2;
case 0x6089b4:c.instructions+=1;goto B6089b4;
case 0x6089b6:goto L6089b6;
case 0x6089b8:c.instructions+=1;goto B6089b8;
case 0x6089ba:goto L6089ba;
case 0x6089bc:c.instructions+=1;goto B6089bc;
case 0x6089c1:goto L6089c1;
case 0x6089c5:c.instructions+=4;goto B6089c5;
case 0x6089cb:c.instructions+=3;goto B6089cb;
case 0x6089cd:c.instructions+=2;goto B6089cd;
case 0x6089cf:c.instructions+=1;goto B6089cf;
case 0x6089d1:goto L6089d1;
case 0x6089d4:c.instructions+=1;goto B6089d4;
case 0x6089d6:goto L6089d6;
case 0x6089d8:goto L6089d8;
case 0x6089da:c.instructions+=5;goto B6089da;
case 0x6089e0:c.instructions+=4;goto B6089e0;
case 0x6089e6:c.instructions+=3;goto B6089e6;
case 0x6089e8:c.instructions+=2;goto B6089e8;
case 0x6089ea:c.instructions+=1;goto B6089ea;
case 0x6089ec:goto L6089ec;
case 0x6089ef:c.instructions+=1;goto B6089ef;
case 0x6089f1:goto L6089f1;
case 0x6089f3:c.instructions+=5;goto B6089f3;
case 0x6089f5:c.instructions+=4;goto B6089f5;
case 0x6089f7:c.instructions+=3;goto B6089f7;
case 0x6089f9:c.instructions+=2;goto B6089f9;
case 0x6089fb:c.instructions+=1;goto B6089fb;
case 0x608a00:goto L608a00;
case 0x608a06:c.instructions+=3;goto B608a06;
case 0x608a08:c.instructions+=2;goto B608a08;
case 0x608a0a:c.instructions+=1;goto B608a0a;
case 0x608a0c:goto L608a0c;
case 0x608a0f:c.instructions+=1;goto B608a0f;
case 0x608a11:goto L608a11;
case 0x608a13:goto L608a13;
case 0x608a15:c.instructions+=7;goto B608a15;
case 0x608a17:c.instructions+=6;goto B608a17;
case 0x608a19:c.instructions+=5;goto B608a19;
case 0x608a1b:c.instructions+=4;goto B608a1b;
case 0x608a21:c.instructions+=3;goto B608a21;
case 0x608a23:c.instructions+=2;goto B608a23;
case 0x608a25:c.instructions+=1;goto B608a25;
case 0x608a2a:goto L608a2a;
case 0x608a2c:c.instructions+=3;goto B608a2c;
case 0x608a2e:c.instructions+=2;goto B608a2e;
case 0x608a30:c.instructions+=1;goto B608a30;
case 0x608a32:goto L608a32;
case 0x608a35:c.instructions+=1;goto B608a35;
case 0x608a37:goto L608a37;
case 0x608a39:goto L608a39;
case 0x608a3b:c.instructions+=5;goto B608a3b;
case 0x608a41:c.instructions+=4;goto B608a41;
case 0x608a43:c.instructions+=3;goto B608a43;
case 0x608a45:c.instructions+=2;goto B608a45;
case 0x608a47:c.instructions+=1;goto B608a47;
case 0x608a49:goto L608a49;
case 0x608a4c:c.instructions+=1;goto B608a4c;
case 0x608a4e:goto L608a4e;
case 0x608a50:goto L608a50;
case 0x608a53:c.instructions+=11;goto B608a53;
case 0x608a58:c.instructions+=10;goto B608a58;
case 0x608a62:c.instructions+=9;goto B608a62;
case 0x608a66:c.instructions+=8;goto B608a66;
case 0x608a6d:c.instructions+=7;goto B608a6d;
case 0x608a6e:c.instructions+=6;goto B608a6e;
case 0x608a6f:c.instructions+=5;goto B608a6f;
case 0x608a70:c.instructions+=4;goto B608a70;
case 0x608a71:c.instructions+=3;goto B608a71;
case 0x608a73:c.instructions+=2;goto B608a73;
case 0x608a74:c.instructions+=1;goto B608a74;
case 0x608a75:goto L608a75;
case 0x608a77:c.instructions+=8;goto B608a77;
case 0x608a79:c.instructions+=7;goto B608a79;
case 0x608a7c:c.instructions+=6;goto B608a7c;
case 0x608a7e:c.instructions+=5;goto B608a7e;
case 0x608a7f:c.instructions+=4;goto B608a7f;
case 0x608a81:c.instructions+=3;goto B608a81;
case 0x608a83:c.instructions+=2;goto B608a83;
case 0x608a85:c.instructions+=1;goto B608a85;
case 0x608a8a:goto L608a8a;
case 0x608a8f:goto L608a8f;
case 0x608a93:c.instructions+=8;goto B608a93;
case 0x608a97:c.instructions+=7;goto B608a97;
case 0x608a99:c.instructions+=6;goto B608a99;
case 0x608a9d:c.instructions+=5;goto B608a9d;
case 0x608aa1:c.instructions+=4;goto B608aa1;
case 0x608aa3:c.instructions+=3;goto B608aa3;
case 0x608aa5:c.instructions+=2;goto B608aa5;
case 0x608aad:c.instructions+=1;goto B608aad;
case 0x608ab3:goto L608ab3;
case 0x608ab7:c.instructions+=2;goto B608ab7;
case 0x608abd:c.instructions+=1;goto B608abd;
case 0x608ac1:goto L608ac1;
case 0x608ac5:c.instructions+=3;goto B608ac5;
case 0x608ac7:c.instructions+=2;goto B608ac7;
case 0x608ac9:c.instructions+=1;goto B608ac9;
case 0x608acb:goto L608acb;
case 0x608ad0:c.instructions+=1;goto B608ad0;
case 0x608ad2:goto L608ad2;
case 0x608ad7:c.instructions+=2;goto B608ad7;
case 0x608ad9:c.instructions+=1;goto B608ad9;
case 0x608adb:goto L608adb;
case 0x608add:c.instructions+=4;goto B608add;
case 0x608ae1:c.instructions+=3;goto B608ae1;
case 0x608ae8:c.instructions+=2;goto B608ae8;
case 0x608aea:c.instructions+=1;goto B608aea;
case 0x608aec:goto L608aec;
case 0x608af1:c.instructions+=1;goto B608af1;
case 0x608af3:goto L608af3;
case 0x608af5:c.instructions+=1;goto B608af5;
case 0x608afa:goto L608afa;
case 0x608afd:c.instructions+=2;goto B608afd;
case 0x608aff:c.instructions+=1;goto B608aff;
case 0x608b01:goto L608b01;
case 0x608b03:c.instructions+=7;goto B608b03;
case 0x608b07:c.instructions+=6;goto B608b07;
case 0x608b0b:c.instructions+=5;goto B608b0b;
case 0x608b12:c.instructions+=4;goto B608b12;
case 0x608b15:c.instructions+=3;goto B608b15;
case 0x608b18:c.instructions+=2;goto B608b18;
case 0x608b1b:c.instructions+=1;goto B608b1b;
case 0x608b1d:goto L608b1d;
case 0x608b1f:goto L608b1f;
case 0x608b23:c.instructions+=7;goto B608b23;
case 0x608b27:c.instructions+=6;goto B608b27;
case 0x608b2a:c.instructions+=5;goto B608b2a;
case 0x608b2e:c.instructions+=4;goto B608b2e;
case 0x608b31:c.instructions+=3;goto B608b31;
case 0x608b33:c.instructions+=2;goto B608b33;
case 0x608b37:c.instructions+=1;goto B608b37;
case 0x608b38:goto L608b38;
case 0x608b3c:c.instructions+=6;goto B608b3c;
case 0x608b3f:c.instructions+=5;goto B608b3f;
case 0x608b40:c.instructions+=4;goto B608b40;
case 0x608b43:c.instructions+=3;goto B608b43;
case 0x608b45:c.instructions+=2;goto B608b45;
case 0x608b49:c.instructions+=1;goto B608b49;
case 0x608b4f:goto L608b4f;
case 0x608b51:c.instructions+=1;goto B608b51;
case 0x608b53:goto L608b53;
case 0x608b58:c.instructions+=2;goto B608b58;
case 0x608b5a:c.instructions+=1;goto B608b5a;
case 0x608b5c:goto L608b5c;
case 0x608b61:c.instructions+=2;goto B608b61;
case 0x608b65:c.instructions+=1;goto B608b65;
case 0x608b6a:goto L608b6a;
case 0x608b6e:goto L608b6e;
case 0x608b70:c.instructions+=2;goto B608b70;
case 0x608b72:c.instructions+=1;goto B608b72;
case 0x608b74:goto L608b74;
case 0x608b78:c.instructions+=1;goto B608b78;
case 0x608b80:goto L608b80;
case 0x608b81:c.instructions+=2;goto B608b81;
case 0x608b85:c.instructions+=1;goto B608b85;
case 0x608b8a:goto L608b8a;
case 0x608b8d:c.instructions+=6;goto B608b8d;
case 0x608b94:c.instructions+=5;goto B608b94;
case 0x608b96:c.instructions+=4;goto B608b96;
case 0x608b98:c.instructions+=3;goto B608b98;
case 0x608b99:c.instructions+=2;goto B608b99;
case 0x608b9b:c.instructions+=1;goto B608b9b;
case 0x608b9d:goto L608b9d;
case 0x608ba0:c.instructions+=1;goto B608ba0;
case 0x608ba2:goto L608ba2;
case 0x608ba4:goto L608ba4;
case 0x608ba6:c.instructions+=13;goto B608ba6;
case 0x608ba9:c.instructions+=12;goto B608ba9;
case 0x608bad:c.instructions+=11;goto B608bad;
case 0x608baf:c.instructions+=10;goto B608baf;
case 0x608bb1:c.instructions+=9;goto B608bb1;
case 0x608bb4:c.instructions+=8;goto B608bb4;
case 0x608bb7:c.instructions+=7;goto B608bb7;
case 0x608bb8:c.instructions+=6;goto B608bb8;
case 0x608bbc:c.instructions+=5;goto B608bbc;
case 0x608bbd:c.instructions+=4;goto B608bbd;
case 0x608bbe:c.instructions+=3;goto B608bbe;
case 0x608bbf:c.instructions+=2;goto B608bbf;
case 0x608bc1:c.instructions+=1;goto B608bc1;
case 0x608bc6:goto L608bc6;
case 0x608bc7:c.instructions+=2;goto B608bc7;
case 0x608bc9:c.instructions+=1;goto B608bc9;
case 0x608bcb:goto L608bcb;
case 0x608bcf:goto L608bcf;
case 0x608bd3:c.instructions+=3;goto B608bd3;
case 0x608bd5:c.instructions+=2;goto B608bd5;
case 0x608bdd:c.instructions+=1;goto B608bdd;
case 0x608bdf:goto L608bdf;
case 0x608be0:goto L608be0;
case 0x608be2:c.instructions+=5;goto B608be2;
case 0x608be5:c.instructions+=4;goto B608be5;
case 0x608be7:c.instructions+=3;goto B608be7;
case 0x608be8:c.instructions+=2;goto B608be8;
case 0x608beb:c.instructions+=1;goto B608beb;
case 0x608bf0:goto L608bf0;
case 0x608bf4:c.instructions+=4;goto B608bf4;
case 0x608bf8:c.instructions+=3;goto B608bf8;
case 0x608bfb:c.instructions+=2;goto B608bfb;
case 0x608bfd:c.instructions+=1;goto B608bfd;
case 0x608bff:goto L608bff;
case 0x608c01:goto L608c01;
case 0x608c07:c.instructions+=2;goto B608c07;
case 0x608c09:c.instructions+=1;goto B608c09;
case 0x608c0b:goto L608c0b;
case 0x608c0e:c.instructions+=3;goto B608c0e;
case 0x608c10:c.instructions+=2;goto B608c10;
case 0x608c12:c.instructions+=1;goto B608c12;
case 0x608c14:goto L608c14;
case 0x608c1a:c.instructions+=1;goto B608c1a;
case 0x608c20:goto L608c20;
case 0x608c22:c.instructions+=2;goto B608c22;
case 0x608c27:c.instructions+=1;goto B608c27;
case 0x608c29:goto L608c29;
case 0x608c2f:c.instructions+=2;goto B608c2f;
case 0x608c31:c.instructions+=1;goto B608c31;
case 0x608c33:goto L608c33;
case 0x608c37:c.instructions+=2;goto B608c37;
case 0x608c3d:c.instructions+=1;goto B608c3d;
case 0x608c3f:goto L608c3f;
case 0x608c41:c.instructions+=5;goto B608c41;
case 0x608c43:c.instructions+=4;goto B608c43;
case 0x608c45:c.instructions+=3;goto B608c45;
case 0x608c46:c.instructions+=2;goto B608c46;
case 0x608c48:c.instructions+=1;goto B608c48;
case 0x608c4d:goto L608c4d;
case 0x608c50:c.instructions+=4;goto B608c50;
case 0x608c51:c.instructions+=3;goto B608c51;
case 0x608c54:c.instructions+=2;goto B608c54;
case 0x608c56:c.instructions+=1;goto B608c56;
case 0x608c58:goto L608c58;
case 0x608c5d:c.instructions+=2;goto B608c5d;
case 0x608c5f:c.instructions+=1;goto B608c5f;
case 0x608c61:goto L608c61;
case 0x608c66:c.instructions+=2;goto B608c66;
case 0x608c68:c.instructions+=1;goto B608c68;
case 0x608c6a:goto L608c6a;
case 0x608c6f:goto L608c6f;
case 0x608c74:c.instructions+=2;goto B608c74;
case 0x608c76:c.instructions+=1;goto B608c76;
case 0x608c78:goto L608c78;
case 0x608c7b:c.instructions+=1;goto B608c7b;
case 0x608c7d:goto L608c7d;
case 0x608c81:c.instructions+=2;goto B608c81;
case 0x608c87:c.instructions+=1;goto B608c87;
case 0x608c8c:goto L608c8c;
case 0x608c90:c.instructions+=8;goto B608c90;
case 0x608c91:c.instructions+=7;goto B608c91;
case 0x608c98:c.instructions+=6;goto B608c98;
case 0x608c99:c.instructions+=5;goto B608c99;
case 0x608c9a:c.instructions+=4;goto B608c9a;
case 0x608c9b:c.instructions+=3;goto B608c9b;
case 0x608c9d:c.instructions+=2;goto B608c9d;
case 0x608c9e:c.instructions+=1;goto B608c9e;
case 0x608ca0:goto L608ca0;
case 0x608ca7:c.instructions+=6;goto B608ca7;
case 0x608ca8:c.instructions+=5;goto B608ca8;
case 0x608ca9:c.instructions+=4;goto B608ca9;
case 0x608caa:c.instructions+=3;goto B608caa;
case 0x608cab:c.instructions+=2;goto B608cab;
case 0x608cad:c.instructions+=1;goto B608cad;
case 0x608caf:goto L608caf;
case 0x608cb5:c.instructions+=2;goto B608cb5;
case 0x608cb7:c.instructions+=1;goto B608cb7;
case 0x608cb9:goto L608cb9;
case 0x608cbc:c.instructions+=2;goto B608cbc;
case 0x608cbf:c.instructions+=1;goto B608cbf;
case 0x608cc5:goto L608cc5;
case 0x608ccc:c.instructions+=1;goto B608ccc;
case 0x608cd0:goto L608cd0;
case 0x608cd3:c.instructions+=1;goto B608cd3;
case 0x608cd5:goto L608cd5;
case 0x608cd8:c.instructions+=1;goto B608cd8;
case 0x608cda:goto L608cda;
case 0x608cdc:goto L608cdc;
case 0x608ce1:c.instructions+=1;goto B608ce1;
case 0x608ce3:goto L608ce3;
case 0x608ce8:c.instructions+=2;goto B608ce8;
case 0x608cea:c.instructions+=1;goto B608cea;
case 0x608cec:goto L608cec;
case 0x608cee:c.instructions+=10;goto B608cee;
case 0x608cf1:c.instructions+=9;goto B608cf1;
case 0x608cf4:c.instructions+=8;goto B608cf4;
case 0x608cf7:c.instructions+=7;goto B608cf7;
case 0x608cfb:c.instructions+=6;goto B608cfb;
case 0x608cfc:c.instructions+=5;goto B608cfc;
case 0x608cfe:c.instructions+=4;goto B608cfe;
case 0x608cff:c.instructions+=3;goto B608cff;
case 0x608d00:c.instructions+=2;goto B608d00;
case 0x608d02:c.instructions+=1;goto B608d02;
case 0x608d07:goto L608d07;
case 0x608d09:c.instructions+=2;goto B608d09;
case 0x608d0b:c.instructions+=1;goto B608d0b;
case 0x608d0e:goto L608d0e;
case 0x608d0f:c.instructions+=3;goto B608d0f;
case 0x608d12:c.instructions+=2;goto B608d12;
case 0x608d15:c.instructions+=1;goto B608d15;
case 0x608d17:goto L608d17;
case 0x608d18:c.instructions+=4;goto B608d18;
case 0x608d19:c.instructions+=3;goto B608d19;
case 0x608d1a:c.instructions+=2;goto B608d1a;
case 0x608d1b:c.instructions+=1;goto B608d1b;
case 0x608d1c:goto L608d1c;
case 0x608d1f:c.instructions+=4;goto B608d1f;
case 0x608d21:c.instructions+=3;goto B608d21;
case 0x608d23:c.instructions+=2;goto B608d23;
case 0x608d25:c.instructions+=1;goto B608d25;
case 0x608d27:goto L608d27;
case 0x608d2d:c.instructions+=1;goto B608d2d;
case 0x608d30:goto L608d30;
case 0x608d32:c.instructions+=2;goto B608d32;
case 0x608d36:c.instructions+=1;goto B608d36;
case 0x608d38:goto L608d38;
case 0x608d3e:c.instructions+=1;goto B608d3e;
case 0x608d40:goto L608d40;
case 0x608d42:c.instructions+=5;goto B608d42;
case 0x608d43:c.instructions+=4;goto B608d43;
case 0x608d44:c.instructions+=3;goto B608d44;
case 0x608d45:c.instructions+=2;goto B608d45;
case 0x608d47:c.instructions+=1;goto B608d47;
case 0x608d4c:goto L608d4c;
case 0x608d4f:c.instructions+=4;goto B608d4f;
case 0x608d50:c.instructions+=3;goto B608d50;
case 0x608d53:c.instructions+=2;goto B608d53;
case 0x608d55:c.instructions+=1;goto B608d55;
case 0x608d57:goto L608d57;
case 0x608d59:c.instructions+=1;goto B608d59;
case 0x608d5e:goto L608d5e;
case 0x608d64:c.instructions+=1;goto B608d64;
case 0x608d6a:goto L608d6a;
case 0x608d6b:c.instructions+=4;goto B608d6b;
case 0x608d6c:c.instructions+=3;goto B608d6c;
case 0x608d6d:c.instructions+=2;goto B608d6d;
case 0x608d6e:c.instructions+=1;goto B608d6e;
case 0x608d70:goto L608d70;
case 0x608d74:c.instructions+=6;goto B608d74;
case 0x608d77:c.instructions+=5;goto B608d77;
case 0x608d78:c.instructions+=4;goto B608d78;
case 0x608d7b:c.instructions+=3;goto B608d7b;
case 0x608d7d:c.instructions+=2;goto B608d7d;
case 0x608d7f:c.instructions+=1;goto B608d7f;
case 0x608d81:goto L608d81;
case 0x608d82:c.instructions+=1;goto B608d82;
case 0x608d88:goto L608d88;
case 0x608d8a:c.instructions+=1;goto B608d8a;
case 0x608d8c:goto L608d8c;
case 0x608d8d:c.instructions+=3;goto B608d8d;
case 0x608d90:c.instructions+=2;goto B608d90;
case 0x608d92:c.instructions+=1;goto B608d92;
case 0x608d94:goto L608d94;
case 0x608d95:c.instructions+=2;goto B608d95;
case 0x608d96:c.instructions+=1;goto B608d96;
case 0x608d99:goto L608d99;
case 0x608d9d:c.instructions+=2;goto B608d9d;
case 0x608d9f:c.instructions+=1;goto B608d9f;
case 0x608da1:goto L608da1;
case 0x608da5:goto L608da5;
case 0x608da9:c.instructions+=6;goto B608da9;
case 0x608daa:c.instructions+=5;goto B608daa;
case 0x608dae:c.instructions+=4;goto B608dae;
case 0x608daf:c.instructions+=3;goto B608daf;
case 0x608db0:c.instructions+=2;goto B608db0;
case 0x608db1:c.instructions+=1;goto B608db1;
case 0x608db6:goto L608db6;
case 0x608db7:goto L608db7;
case 0x608db8:c.instructions+=1;goto B608db8;
case 0x608dc0:goto L608dc0;
case 0x608dc3:c.instructions+=14;goto B608dc3;
case 0x608dc4:c.instructions+=13;goto B608dc4;
case 0x608dc5:c.instructions+=12;goto B608dc5;
case 0x608dc6:c.instructions+=11;goto B608dc6;
case 0x608dca:c.instructions+=10;goto B608dca;
case 0x608dcb:c.instructions+=9;goto B608dcb;
case 0x608dcd:c.instructions+=8;goto B608dcd;
case 0x608dcf:c.instructions+=7;goto B608dcf;
case 0x608dd3:c.instructions+=6;goto B608dd3;
case 0x608dd5:c.instructions+=5;goto B608dd5;
case 0x608dd6:c.instructions+=4;goto B608dd6;
case 0x608dd8:c.instructions+=3;goto B608dd8;
case 0x608ddc:c.instructions+=2;goto B608ddc;
case 0x608de0:c.instructions+=1;goto B608de0;
case 0x608de5:goto L608de5;
case 0x608de7:c.instructions+=5;goto B608de7;
case 0x608deb:c.instructions+=4;goto B608deb;
case 0x608dec:c.instructions+=3;goto B608dec;
case 0x608dee:c.instructions+=2;goto B608dee;
case 0x608df2:c.instructions+=1;goto B608df2;
case 0x608df7:goto L608df7;
case 0x608df9:c.instructions+=5;goto B608df9;
case 0x608dfd:c.instructions+=4;goto B608dfd;
case 0x608dfe:c.instructions+=3;goto B608dfe;
case 0x608e00:c.instructions+=2;goto B608e00;
case 0x608e04:c.instructions+=1;goto B608e04;
case 0x608e09:goto L608e09;
case 0x608e0b:c.instructions+=4;goto B608e0b;
case 0x608e0f:c.instructions+=3;goto B608e0f;
case 0x608e10:c.instructions+=2;goto B608e10;
case 0x608e12:c.instructions+=1;goto B608e12;
case 0x608e17:goto L608e17;
case 0x608e1c:c.instructions+=4;goto B608e1c;
case 0x608e1f:c.instructions+=3;goto B608e1f;
case 0x608e20:c.instructions+=2;goto B608e20;
case 0x608e22:c.instructions+=1;goto B608e22;
case 0x608e27:goto L608e27;
case 0x608e29:c.instructions+=2;goto B608e29;
case 0x608e2f:c.instructions+=1;goto B608e2f;
case 0x608e30:goto L608e30;
case 0x608e34:c.instructions+=3;goto B608e34;
case 0x608e39:c.instructions+=2;goto B608e39;
case 0x608e3b:c.instructions+=1;goto B608e3b;
case 0x608e3d:goto L608e3d;
case 0x608e3f:goto L608e3f;
case 0x608e44:c.instructions+=4;goto B608e44;
case 0x608e48:c.instructions+=3;goto B608e48;
case 0x608e4b:c.instructions+=2;goto B608e4b;
case 0x608e4d:c.instructions+=1;goto B608e4d;
case 0x608e4f:goto L608e4f;
case 0x608e51:goto L608e51;
case 0x608e56:c.instructions+=4;goto B608e56;
case 0x608e59:c.instructions+=3;goto B608e59;
case 0x608e5d:c.instructions+=2;goto B608e5d;
case 0x608e5f:c.instructions+=1;goto B608e5f;
case 0x608e61:goto L608e61;
case 0x608e63:goto L608e63;
case 0x608e68:c.instructions+=4;goto B608e68;
case 0x608e6c:c.instructions+=3;goto B608e6c;
case 0x608e70:c.instructions+=2;goto B608e70;
case 0x608e72:c.instructions+=1;goto B608e72;
case 0x608e74:goto L608e74;
case 0x608e76:goto L608e76;
case 0x608e7b:c.instructions+=4;goto B608e7b;
case 0x608e7f:c.instructions+=3;goto B608e7f;
case 0x608e83:c.instructions+=2;goto B608e83;
case 0x608e85:c.instructions+=1;goto B608e85;
case 0x608e87:goto L608e87;
case 0x608e89:goto L608e89;
case 0x608e8e:c.instructions+=4;goto B608e8e;
case 0x608e92:c.instructions+=3;goto B608e92;
case 0x608e96:c.instructions+=2;goto B608e96;
case 0x608e98:c.instructions+=1;goto B608e98;
case 0x608e9a:goto L608e9a;
case 0x608e9c:goto L608e9c;
case 0x608ea1:c.instructions+=4;goto B608ea1;
case 0x608ea5:c.instructions+=3;goto B608ea5;
case 0x608ea9:c.instructions+=2;goto B608ea9;
case 0x608eab:c.instructions+=1;goto B608eab;
case 0x608ead:goto L608ead;
case 0x608eaf:goto L608eaf;
case 0x608eb4:c.instructions+=4;goto B608eb4;
case 0x608eb8:c.instructions+=3;goto B608eb8;
case 0x608ebc:c.instructions+=2;goto B608ebc;
case 0x608ebe:c.instructions+=1;goto B608ebe;
case 0x608ec0:goto L608ec0;
case 0x608ec2:goto L608ec2;
case 0x608ec6:c.instructions+=4;goto B608ec6;
case 0x608ec9:c.instructions+=3;goto B608ec9;
case 0x608ecc:c.instructions+=2;goto B608ecc;
case 0x608ecf:c.instructions+=1;goto B608ecf;
case 0x608ed5:goto L608ed5;
case 0x608ed8:c.instructions+=1;goto B608ed8;
case 0x608eda:goto L608eda;
case 0x608ee0:goto L608ee0;
case 0x608ee6:c.instructions+=3;goto B608ee6;
case 0x608ee8:c.instructions+=2;goto B608ee8;
case 0x608eec:c.instructions+=1;goto B608eec;
case 0x608ef2:goto L608ef2;
case 0x608ef8:c.instructions+=2;goto B608ef8;
case 0x608efa:c.instructions+=1;goto B608efa;
case 0x608f00:goto L608f00;
case 0x608f02:c.instructions+=1;goto B608f02;
case 0x608f07:goto L608f07;
case 0x608f09:c.instructions+=1;goto B608f09;
case 0x608f0f:goto L608f0f;
case 0x608f14:goto L608f14;
case 0x608f18:c.instructions+=1;goto B608f18;
case 0x608f1a:goto L608f1a;
case 0x608f1c:c.instructions+=2;goto B608f1c;
case 0x608f1e:c.instructions+=1;goto B608f1e;
case 0x608f20:goto L608f20;
case 0x608f22:goto L608f22;
case 0x608f24:c.instructions+=1;goto B608f24;
case 0x608f26:goto L608f26;
case 0x608f29:c.instructions+=2;goto B608f29;
case 0x608f2b:c.instructions+=1;goto B608f2b;
case 0x608f2d:goto L608f2d;
case 0x608f32:c.instructions+=1;goto B608f32;
case 0x608f34:goto L608f34;
case 0x608f39:c.instructions+=2;goto B608f39;
case 0x608f3b:c.instructions+=1;goto B608f3b;
case 0x608f3d:goto L608f3d;
case 0x608f41:c.instructions+=10;goto B608f41;
case 0x608f44:c.instructions+=9;goto B608f44;
case 0x608f46:c.instructions+=8;goto B608f46;
case 0x608f48:c.instructions+=7;goto B608f48;
case 0x608f4b:c.instructions+=6;goto B608f4b;
case 0x608f4e:c.instructions+=5;goto B608f4e;
case 0x608f50:c.instructions+=4;goto B608f50;
case 0x608f52:c.instructions+=3;goto B608f52;
case 0x608f55:c.instructions+=2;goto B608f55;
case 0x608f59:c.instructions+=1;goto B608f59;
case 0x608f5b:goto L608f5b;
case 0x608f61:goto L608f61;
case 0x608f63:c.instructions+=1;goto B608f63;
case 0x608f65:goto L608f65;
case 0x608f66:c.instructions+=3;goto B608f66;
case 0x608f69:c.instructions+=2;goto B608f69;
case 0x608f6b:c.instructions+=1;goto B608f6b;
case 0x608f6d:goto L608f6d;
case 0x608f6f:goto L608f6f;
case 0x608f73:c.instructions+=7;goto B608f73;
case 0x608f77:c.instructions+=6;goto B608f77;
case 0x608f78:c.instructions+=5;goto B608f78;
case 0x608f79:c.instructions+=4;goto B608f79;
case 0x608f7a:c.instructions+=3;goto B608f7a;
case 0x608f7b:c.instructions+=2;goto B608f7b;
case 0x608f7d:c.instructions+=1;goto B608f7d;
case 0x608f82:goto L608f82;
case 0x608f88:goto L608f88;
case 0x608f8c:goto L608f8c;
case 0x608f91:c.instructions+=3;goto B608f91;
case 0x608f93:c.instructions+=2;goto B608f93;
case 0x608f99:c.instructions+=1;goto B608f99;
case 0x608f9b:goto L608f9b;
case 0x608f9d:c.instructions+=1;goto B608f9d;
case 0x608fa3:goto L608fa3;
case 0x608fa9:c.instructions+=2;goto B608fa9;
case 0x608fab:c.instructions+=1;goto B608fab;
case 0x608fb1:goto L608fb1;
case 0x608fb7:c.instructions+=2;goto B608fb7;
case 0x608fb9:c.instructions+=1;goto B608fb9;
case 0x608fbb:goto L608fbb;
case 0x608fbd:c.instructions+=1;goto B608fbd;
case 0x608fbf:goto L608fbf;
case 0x608fc1:c.instructions+=1;goto B608fc1;
case 0x608fc3:goto L608fc3;
case 0x608fc5:c.instructions+=3;goto B608fc5;
case 0x608fcc:c.instructions+=2;goto B608fcc;
case 0x608fd0:c.instructions+=1;goto B608fd0;
case 0x608fd2:goto L608fd2;
case 0x608fd3:c.instructions+=2;goto B608fd3;
case 0x608fda:c.instructions+=1;goto B608fda;
case 0x608fe0:goto L608fe0;
case 0x608fe3:c.instructions+=1;goto B608fe3;
case 0x608fe5:goto L608fe5;
case 0x608feb:c.instructions+=2;goto B608feb;
case 0x608fed:c.instructions+=1;goto B608fed;
case 0x608fef:goto L608fef;
case 0x608ff4:c.instructions+=2;goto B608ff4;
case 0x608ff6:c.instructions+=1;goto B608ff6;
case 0x608ff8:goto L608ff8;
case 0x608ffd:c.instructions+=2;goto B608ffd;
case 0x608fff:c.instructions+=1;goto B608fff;
default:missing_instruction(c.pc);}
B608000:L608000:{c.instructions+=5;NFSU2_TR(0x608000);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xbe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B608006:{NFSU2_TR(0x608006);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B608008:{NFSU2_TR(0x608008);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B60800b:{NFSU2_TR(0x60800b);
w4(R+12,u32(0x1ull));
}
B608010:{NFSU2_TR(0x608010);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L608060;}}
}
B608012:L608012:{c.instructions+=3;NFSU2_TR(0x608012);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B608014:{NFSU2_TR(0x608014);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B608016:{NFSU2_TR(0x608016);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L608033;}}
}
B608018:L608018:{c.instructions+=2;NFSU2_TR(0x608018);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B60801c:{NFSU2_TR(0x60801c);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xbd0ull))));
}
B608021:L608021:{c.instructions+=4;NFSU2_TR(0x608021);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B608023:{NFSU2_TR(0x608023);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+8,u32(s32(s8(r1(U+4)))));
}
B608027:{NFSU2_TR(0x608027);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B608029:{NFSU2_TR(0x608029);
if(r1(R+518)){{goto L60805c;}}
}
B60802b:L60802b:{c.instructions+=4;NFSU2_TR(0x60802b);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B60802c:{NFSU2_TR(0x60802c);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B60802f:{NFSU2_TR(0x60802f);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B608031:{NFSU2_TR(0x608031);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x608021u);}goto L608021;}}
}
B608033:L608033:{c.instructions+=11;NFSU2_TR(0x608033);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B608036:{NFSU2_TR(0x608036);
__builtin_memmove((R+0),gp(0x890118),4);
}
B60803b:{NFSU2_TR(0x60803b);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xbf7ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(s32(s8(r1(U+4)))));
}
B608042:{NFSU2_TR(0x608042);
u8 U[12];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B608046:{NFSU2_TR(0x608046);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B60804a:{NFSU2_TR(0x60804a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B60804c:{NFSU2_TR(0x60804c);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B60804f:{NFSU2_TR(0x60804f);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x10ull))));
}
B608052:{NFSU2_TR(0x608052);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+8))));
}
B608054:{NFSU2_TR(0x608054);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x198ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60805a:{NFSU2_TR(0x60805a);
{goto L60809f;}
}
B60805c:L60805c:{c.instructions+=2;NFSU2_TR(0x60805c);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B60805d:{NFSU2_TR(0x60805d);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x608012u);}goto L608012;}
}
B608060:L608060:{c.instructions+=3;NFSU2_TR(0x608060);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B608062:{NFSU2_TR(0x608062);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B608064:{NFSU2_TR(0x608064);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L608086;}}
}
B608066:L608066:{c.instructions+=3;NFSU2_TR(0x608066);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B60806a:{NFSU2_TR(0x60806a);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xbd0ull))));
}
B60806f:{NFSU2_TR(0x60806f);
}
B608070:L608070:{c.instructions+=4;NFSU2_TR(0x608070);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B608072:{NFSU2_TR(0x608072);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+8,u32(s32(s8(r1(U+4)))));
}
B608076:{NFSU2_TR(0x608076);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B608078:{NFSU2_TR(0x608078);
if(r1(R+518)){{goto L60810b;}}
}
B60807e:L60807e:{c.instructions+=4;NFSU2_TR(0x60807e);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B60807f:{NFSU2_TR(0x60807f);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B608082:{NFSU2_TR(0x608082);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B608084:{NFSU2_TR(0x608084);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x608070u);}goto L608070;}}
}
B608086:L608086:{c.instructions+=8;NFSU2_TR(0x608086);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B60808a:{NFSU2_TR(0x60808a);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B60808d:{NFSU2_TR(0x60808d);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xbe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B608093:{NFSU2_TR(0x608093);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x10ull))));
}
B608096:{NFSU2_TR(0x608096);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B608097:{NFSU2_TR(0x608097);
__builtin_memmove((R+4),(R+20),4);
}
B608099:{NFSU2_TR(0x608099);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60809a:{NFSU2_TR(0x60809a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60809full));
TAIL_STATIC(0x5f7ec0u,5f7);
}
B60809f:L60809f:{c.instructions+=3;NFSU2_TR(0x60809f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1d8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6080a5:{NFSU2_TR(0x6080a5);
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
B6080a7:{NFSU2_TR(0x6080a7);
if(r1(R+518)){{goto L6080ae;}}
}
B6080a9:L6080a9:{c.instructions+=1;NFSU2_TR(0x6080a9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6080aeull));
TAIL_STATIC(0x4022c0u,402);
}
B6080ae:L6080ae:{c.instructions+=3;NFSU2_TR(0x6080ae);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1dcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6080b4:{NFSU2_TR(0x6080b4);
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
B6080b6:{NFSU2_TR(0x6080b6);
if(r1(R+518)){{goto L6080bd;}}
}
B6080b8:L6080b8:{c.instructions+=1;NFSU2_TR(0x6080b8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6080bdull));
TAIL_STATIC(0x4022c0u,402);
}
B6080bd:L6080bd:{c.instructions+=7;NFSU2_TR(0x6080bd);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6080c1:{NFSU2_TR(0x6080c1);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6080c4:{NFSU2_TR(0x6080c4);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6080c8:{NFSU2_TR(0x6080c8);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B6080c9:{NFSU2_TR(0x6080c9);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6080cb:{NFSU2_TR(0x6080cb);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6080ce:{NFSU2_TR(0x6080ce);
if(r1(R+518)){{goto L608220;}}
}
B6080d4:L6080d4:{c.instructions+=2;NFSU2_TR(0x6080d4);
__builtin_memmove((R+4),(R+12),4);
}
B6080d6:{NFSU2_TR(0x6080d6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6080dbull));
TAIL_STATIC(0x5ea530u,5ea);
}
B6080db:L6080db:{c.instructions+=4;NFSU2_TR(0x6080db);
__builtin_memmove((R+8),gp(0x850078),4);
}
B6080e1:{NFSU2_TR(0x6080e1);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6080e4:{NFSU2_TR(0x6080e4);
__builtin_memmove((R+24),gp(0x83aab4),4);
}
B6080ea:{NFSU2_TR(0x6080ea);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L608133;}}
}
B6080ec:L6080ec:{c.instructions+=2;NFSU2_TR(0x6080ec);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x8ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6080ef:{NFSU2_TR(0x6080ef);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L608133;}}
}
B6080f1:L6080f1:{c.instructions+=4;NFSU2_TR(0x6080f1);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6080f4:{NFSU2_TR(0x6080f4);
u8 U[10];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((U+6),(U+4),2);
w2(U+8,u16(u32(r2(U+6))-u32(u16(0x6ull))));
w1(R+518,u8((r2(U+8))==(u16(0x0ull))));
}
B6080f9:{NFSU2_TR(0x6080f9);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6080fc:{NFSU2_TR(0x6080fc);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L60811a;}}
}
B6080fe:L6080fe:{c.instructions+=2;NFSU2_TR(0x6080fe);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B608100:{NFSU2_TR(0x608100);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L608111;}}
}
B608102:L608102:{c.instructions+=2;NFSU2_TR(0x608102);
s1(0x83abc8,u8(u32(m1(0x83abc8))+u32(u8(0xaull))));
}
B608109:{NFSU2_TR(0x608109);
{goto L608133;}
}
B60810b:L60810b:{c.instructions+=2;NFSU2_TR(0x60810b);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B60810c:{NFSU2_TR(0x60810c);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x608060u);}goto L608060;}
}
B608111:L608111:{c.instructions+=3;NFSU2_TR(0x608111);
__builtin_memmove((R+0),gp(0x83abc9),1);
}
B608116:{NFSU2_TR(0x608116);
w1(R+0,u8(u32(r1(R+0))+u32(u8(0xaull))));
}
B608118:{NFSU2_TR(0x608118);
{goto L60812e;}
}
B60811a:L60811a:{c.instructions+=2;NFSU2_TR(0x60811a);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B60811c:{NFSU2_TR(0x60811c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L608127;}}
}
B60811e:L60811e:{c.instructions+=2;NFSU2_TR(0x60811e);
s1(0x83abc8,u8(u32(m1(0x83abc8))+u32(u8(0x6ull))));
}
B608125:{NFSU2_TR(0x608125);
{goto L608133;}
}
B608127:L608127:{c.instructions+=2;NFSU2_TR(0x608127);
__builtin_memmove((R+0),gp(0x83abc9),1);
}
B60812c:{NFSU2_TR(0x60812c);
w1(R+0,u8(u32(r1(R+0))+u32(u8(0x6ull))));
}
B60812e:L60812e:{c.instructions+=1;NFSU2_TR(0x60812e);
__builtin_memmove(gp(0x83abc9),(R+0),1);
}
B608133:L608133:{c.instructions+=5;NFSU2_TR(0x608133);
__builtin_memmove((R+0),gp(0x89e7b0),4);
}
B608138:{NFSU2_TR(0x608138);
__builtin_memmove((R+4),gp(0x866a14),4);
}
B60813e:{NFSU2_TR(0x60813e);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x7ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B608141:{NFSU2_TR(0x608141);
__builtin_memmove((R+0),gp(0x8669f4),4);
}
B608146:{NFSU2_TR(0x608146);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L60816c;}}
}
B608148:L608148:{c.instructions+=2;NFSU2_TR(0x608148);
u8 U[2];
__builtin_memmove((U+0),gp(0x89cf69),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x0ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B60814f:{NFSU2_TR(0x60814f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L608182;}}
}
B608151:L608151:{c.instructions+=2;NFSU2_TR(0x608151);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B608153:{NFSU2_TR(0x608153);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L608182;}}
}
B608155:L608155:{c.instructions+=2;NFSU2_TR(0x608155);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B608157:{NFSU2_TR(0x608157);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L608176;}}
}
B608159:L608159:{c.instructions+=2;NFSU2_TR(0x608159);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B60815c:{NFSU2_TR(0x60815c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L608220;}}
}
B608162:L608162:{c.instructions+=2;NFSU2_TR(0x608162);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x8ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B608165:{NFSU2_TR(0x608165);
if(r1(R+518)){{goto L608176;}}
}
B608167:L608167:{c.instructions+=1;NFSU2_TR(0x608167);
{goto L608220;}
}
B60816c:L60816c:{c.instructions+=3;NFSU2_TR(0x60816c);
__builtin_memmove((R+8),gp(0x89cf69),1);
}
B608172:{NFSU2_TR(0x608172);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(r1(R+8))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B608174:{NFSU2_TR(0x608174);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L608182;}}
}
B608176:L608176:{c.instructions+=2;NFSU2_TR(0x608176);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B608178:{NFSU2_TR(0x608178);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L608182;}}
}
B60817a:L60817a:{c.instructions+=2;NFSU2_TR(0x60817a);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B60817c:{NFSU2_TR(0x60817c);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L608182;}}
}
B60817e:L60817e:{c.instructions+=2;NFSU2_TR(0x60817e);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B608180:{NFSU2_TR(0x608180);
{goto L608187;}
}
B608182:L608182:{c.instructions+=1;NFSU2_TR(0x608182);
w4(R+0,u32(0x1ull));
}
B608187:L608187:{c.instructions+=6;NFSU2_TR(0x608187);
w1(R+512,u8((r1(R+0))!=(u8(0x0ull))));
w1(R+0,u8(0-u32(r1(R+0))));
}
B608189:{NFSU2_TR(0x608189);
__builtin_memmove((R+4),(R+12),4);
}
B60818b:{NFSU2_TR(0x60818b);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(R+0))));
w4(R+0,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B60818d:{NFSU2_TR(0x60818d);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x9ull))));
}
B608190:{NFSU2_TR(0x608190);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B608191:{NFSU2_TR(0x608191);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x608196ull));
TAIL_STATIC(0x605c70u,605);
}
B608196:L608196:{c.instructions+=5;NFSU2_TR(0x608196);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B608199:{NFSU2_TR(0x608199);
u8 U[4];
w4(U+0,u32(0x7b4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60819e:{NFSU2_TR(0x60819e);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x2cull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6081a5:{NFSU2_TR(0x6081a5);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x24ull))));
w4(U+4,u32(0x3ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6081ac:{NFSU2_TR(0x6081ac);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6081b1ull));
TAIL_STATIC(0x575620u,575);
}
B6081b1:L6081b1:{c.instructions+=5;NFSU2_TR(0x6081b1);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6081b4:{NFSU2_TR(0x6081b4);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6081b8:{NFSU2_TR(0x6081b8);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6081ba:{NFSU2_TR(0x6081ba);
u8 U[8];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
w4(U+4,u32(0x3ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6081c2:{NFSU2_TR(0x6081c2);
if(r1(R+518)){{goto L6081ce;}}
}
B6081c4:L6081c4:{c.instructions+=3;NFSU2_TR(0x6081c4);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6081c5:{NFSU2_TR(0x6081c5);
__builtin_memmove((R+4),(R+0),4);
}
B6081c7:{NFSU2_TR(0x6081c7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6081ccull));
TAIL_STATIC(0x4260b0u,426);
}
B6081cc:L6081cc:{c.instructions+=1;NFSU2_TR(0x6081cc);
{goto L6081d0;}
}
B6081ce:L6081ce:{c.instructions+=1;NFSU2_TR(0x6081ce);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6081d0:L6081d0:{c.instructions+=4;NFSU2_TR(0x6081d0);
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
B6081d2:{NFSU2_TR(0x6081d2);
u8 U[8];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B6081da:{NFSU2_TR(0x6081da);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6081dd:{NFSU2_TR(0x6081dd);
if(r1(R+518)){{goto L6081e7;}}
}
B6081df:L6081df:{c.instructions+=4;NFSU2_TR(0x6081df);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6081e1:{NFSU2_TR(0x6081e1);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6081e3:{NFSU2_TR(0x6081e3);
__builtin_memmove((R+4),(R+24),4);
}
B6081e5:{NFSU2_TR(0x6081e5);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6081e7ull));
{u32 t_=u32(r4(U+4));TAIL_DYNAMIC(t_);}
}
B6081e7:L6081e7:{c.instructions+=14;NFSU2_TR(0x6081e7);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6081ea:{NFSU2_TR(0x6081ea);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6081ed:{NFSU2_TR(0x6081ed);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6081f0:{NFSU2_TR(0x6081f0);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6081f3:{NFSU2_TR(0x6081f3);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6081f6:{NFSU2_TR(0x6081f6);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(s32(s16(r2(U+4)))));
}
B6081fa:{NFSU2_TR(0x6081fa);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6081fd:{NFSU2_TR(0x6081fd);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x89ce00ull))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4),4);
s4(u32(r4(U+4)),r4(U+8));
}
B608204:{NFSU2_TR(0x608204);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(s32(s16(r2(U+4)))));
}
B608208:{NFSU2_TR(0x608208);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B60820b:{NFSU2_TR(0x60820b);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x89ce58ull))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+0),4);
s4(u32(r4(U+4)),r4(U+8));
}
B608212:{NFSU2_TR(0x608212);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(s32(s16(r2(U+4)))));
}
B608216:{NFSU2_TR(0x608216);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B608219:{NFSU2_TR(0x608219);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x89ceb0ull))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+8),4);
s4(u32(r4(U+4)),r4(U+8));
}
B608220:L608220:{c.instructions+=2;NFSU2_TR(0x608220);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B608224:{NFSU2_TR(0x608224);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L60822e;}}
}
B608226:L608226:{c.instructions+=2;NFSU2_TR(0x608226);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B608229:{NFSU2_TR(0x608229);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60822eull));
TAIL_STATIC(0x42b330u,42b);
}
B60822e:L60822e:{c.instructions+=3;NFSU2_TR(0x60822e);
u8 U[5];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B608232:{NFSU2_TR(0x608232);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B608234:{NFSU2_TR(0x608234);
if(r1(R+518)){{goto L60825b;}}
}
B608236:L608236:{c.instructions+=6;NFSU2_TR(0x608236);
__builtin_memmove((R+0),gp(0x86518c),4);
}
B60823b:{NFSU2_TR(0x60823b);
__builtin_memmove((R+4),gp(0x7a55c0),4);
}
B608241:{NFSU2_TR(0x608241);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x974ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B608247:{NFSU2_TR(0x608247);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x978ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60824d:{NFSU2_TR(0x60824d);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x998ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B608254:{NFSU2_TR(0x608254);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x999ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B60825b:L60825b:{c.instructions+=3;NFSU2_TR(0x60825b);
__builtin_memmove((R+0),gp(0x8650b0),4);
}
B608260:{NFSU2_TR(0x608260);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B608262:{NFSU2_TR(0x608262);
if(r1(R+518)){{goto L60826f;}}
}
B608264:L608264:{c.instructions+=2;NFSU2_TR(0x608264);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B608266:{NFSU2_TR(0x608266);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L60826f;}}
}
B608268:L608268:{c.instructions+=2;NFSU2_TR(0x608268);
__builtin_memmove((R+4),(R+20),4);
}
B60826a:{NFSU2_TR(0x60826a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60826full));
TAIL_STATIC(0x5f8200u,5f8);
}
B60826f:L60826f:{c.instructions+=2;NFSU2_TR(0x60826f);
u8 U[8];
__builtin_memmove((U+0),gp(0x850078),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B608276:{NFSU2_TR(0x608276);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6082b0;}}
}
B608278:L608278:{c.instructions+=2;NFSU2_TR(0x608278);
u8 U[8];
__builtin_memmove((U+0),gp(0x83aab4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x8ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B60827f:{NFSU2_TR(0x60827f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6082b0;}}
}
B608281:L608281:{c.instructions+=6;NFSU2_TR(0x608281);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B608285:{NFSU2_TR(0x608285);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B608289:{NFSU2_TR(0x608289);
u8 U[16];
w4(U+0,u32(u32(u32(0xbd0ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B608290:{NFSU2_TR(0x608290);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B608292:{NFSU2_TR(0x608292);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B608294:{NFSU2_TR(0x608294);
if(r1(R+518)){{goto L60829b;}}
}
B608296:L608296:{c.instructions+=2;NFSU2_TR(0x608296);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B608299:{NFSU2_TR(0x608299);
{goto L60829d;}
}
B60829b:L60829b:{c.instructions+=1;NFSU2_TR(0x60829b);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B60829d:L60829d:{c.instructions+=3;NFSU2_TR(0x60829d);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B6082a0:{NFSU2_TR(0x6082a0);
__builtin_memmove(gp(0x83abcc),(R+4),1);
}
B6082a6:{NFSU2_TR(0x6082a6);
s4(0x83abc4,u32(0x0ull));
}
B6082b0:L6082b0:{c.instructions+=1;NFSU2_TR(0x6082b0);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B6082b4:L6082b4:{c.instructions+=7;NFSU2_TR(0x6082b4);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6082b8:{NFSU2_TR(0x6082b8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6082bb:{NFSU2_TR(0x6082bb);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6082bf:{NFSU2_TR(0x6082bf);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6082c0:{NFSU2_TR(0x6082c0);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6082c2:{NFSU2_TR(0x6082c2);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6082c6:{NFSU2_TR(0x6082c6);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x607d43u,607);}
}
B6082cc:L6082cc:{c.instructions+=1;NFSU2_TR(0x6082cc);
TAIL_STATIC(0x607d1cu,607);
}
B6082d1:L6082d1:{c.instructions+=2;NFSU2_TR(0x6082d1);
u8 U[8];
__builtin_memmove((U+0),gp(0x850078),4);
w4(U+4,u32(u32(r4(U+0))-u32(r4(R+12))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6082d7:{NFSU2_TR(0x6082d7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6082b4u);}goto L6082b4;}}
}
B6082d9:L6082d9:{c.instructions+=2;NFSU2_TR(0x6082d9);
u8 U[14];
__builtin_memmove((U+6),gp(0x83aab4),4);
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
B6082e0:{NFSU2_TR(0x6082e0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6082b4u);}goto L6082b4;}}
}
B6082e2:L6082e2:{c.instructions+=2;NFSU2_TR(0x6082e2);
w4(R+4,u32(0x83aab4ull));
}
B6082e7:{NFSU2_TR(0x6082e7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6082ecull));
TAIL_STATIC(0x502780u,502);
}
B6082ec:L6082ec:{c.instructions+=2;NFSU2_TR(0x6082ec);
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
B6082ee:{NFSU2_TR(0x6082ee);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6082b4u);}goto L6082b4;}}
}
B6082f0:L6082f0:{c.instructions+=2;NFSU2_TR(0x6082f0);
w4(R+4,u32(0x83aab4ull));
}
B6082f5:{NFSU2_TR(0x6082f5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6082faull));
TAIL_STATIC(0x5027a0u,502);
}
B6082fa:L6082fa:{c.instructions+=7;NFSU2_TR(0x6082fa);
w4(R+8,u32(s32(s8(r1(R+0)))));
}
B6082fd:{NFSU2_TR(0x6082fd);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B608301:{NFSU2_TR(0x608301);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B608305:{NFSU2_TR(0x608305);
{u32 ea_=u32(u32(7894416u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B60830b:{NFSU2_TR(0x60830b);
{u32 ea_=u32(u32(7881316u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B608311:{NFSU2_TR(0x608311);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B608317:{NFSU2_TR(0x608317);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60831cull));
TAIL_STATIC(0x75bed4u,75b);
}
B60831c:L60831c:{c.instructions+=2;NFSU2_TR(0x60831c);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(U+8),r4(R+0)));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B60831f:{NFSU2_TR(0x60831f);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6082b4u);}goto L6082b4;}}
}
B608321:L608321:{c.instructions+=4;NFSU2_TR(0x608321);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xbd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B608327:{NFSU2_TR(0x608327);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B608329:{NFSU2_TR(0x608329);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B60832b:{NFSU2_TR(0x60832b);
if(r1(R+518)){{goto L608332;}}
}
B60832d:L60832d:{c.instructions+=2;NFSU2_TR(0x60832d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B608330:{NFSU2_TR(0x608330);
{goto L608334;}
}
B608332:L608332:{c.instructions+=1;NFSU2_TR(0x608332);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B608334:L608334:{c.instructions+=5;NFSU2_TR(0x608334);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xbd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B60833a:{NFSU2_TR(0x60833a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B60833c:{NFSU2_TR(0x60833c);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B60833e:{NFSU2_TR(0x60833e);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xbd0ull))));
__builtin_memmove((R+28),(U+0),4);
}
B608344:{NFSU2_TR(0x608344);
if(r1(R+518)){{goto L60834b;}}
}
B608346:L608346:{c.instructions+=2;NFSU2_TR(0x608346);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B608349:{NFSU2_TR(0x608349);
{goto L60834d;}
}
B60834b:L60834b:{c.instructions+=1;NFSU2_TR(0x60834b);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B60834d:L60834d:{c.instructions+=3;NFSU2_TR(0x60834d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B60834f:{NFSU2_TR(0x60834f);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((U+4),(U+0),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+4)));
w4(U+8,u32(u32(r4(R+0))-u32(r4(U+4))));
w1(R+519,u8(s32(r4(U+8))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B608351:{NFSU2_TR(0x608351);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L6089f1;}}
}
B608357:L608357:{c.instructions+=3;NFSU2_TR(0x608357);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+28),(U+0),4);
}
B608359:{NFSU2_TR(0x608359);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B60835b:{NFSU2_TR(0x60835b);
if(r1(R+518)){{goto L608366;}}
}
B60835d:L60835d:{c.instructions+=3;NFSU2_TR(0x60835d);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B608360:{NFSU2_TR(0x608360);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B608364:{NFSU2_TR(0x608364);
{goto L60836e;}
}
B608366:L608366:{c.instructions+=1;NFSU2_TR(0x608366);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B60836e:L60836e:{c.instructions+=10;NFSU2_TR(0x60836e);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B608372:{NFSU2_TR(0x608372);
__builtin_memmove((R+0),gp(0x86518c),4);
}
B608377:{NFSU2_TR(0x608377);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B60837a:{NFSU2_TR(0x60837a);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x10ull))));
}
B60837d:{NFSU2_TR(0x60837d);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x198ull))));
__builtin_memmove((R+20),(U+0),4);
}
B608383:{NFSU2_TR(0x608383);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+8))));
}
B608385:{NFSU2_TR(0x608385);
u8 U[4];
w4(U+0,u32(0x3c23d70aull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60838a:{NFSU2_TR(0x60838a);
__builtin_memmove((R+4),(R+20),4);
}
B60838c:{NFSU2_TR(0x60838c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+20)),r4(U+0));
}
B60838f:{NFSU2_TR(0x60838f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x608394ull));
TAIL_STATIC(0x577400u,577);
}
B608394:L608394:{c.instructions+=6;NFSU2_TR(0x608394);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1d4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B60839a:{NFSU2_TR(0x60839a);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B60839c:{NFSU2_TR(0x60839c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B60839f:{NFSU2_TR(0x60839f);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
w2(U+4,u16(0x6ull));
s2(u32(r4(U+0)),r2(U+4));
}
B6083a5:{NFSU2_TR(0x6083a5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6083a8:{NFSU2_TR(0x6083a8);
if(r1(R+518)){{goto L6083da;}}
}
B6083aa:L6083aa:{c.instructions+=1;NFSU2_TR(0x6083aa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6083afull));
TAIL_STATIC(0x56d710u,56d);
}
B6083af:L6083af:{c.instructions+=3;NFSU2_TR(0x6083af);
__builtin_memmove((R+0),gp(0x89e7d9),1);
}
B6083b4:{NFSU2_TR(0x6083b4);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6083b6:{NFSU2_TR(0x6083b6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6083c1;}}
}
B6083b8:L6083b8:{c.instructions+=3;NFSU2_TR(0x6083b8);
__builtin_memmove((R+0),gp(0x890104),4);
}
B6083bd:{NFSU2_TR(0x6083bd);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6083bf:{NFSU2_TR(0x6083bf);
if(r1(R+518)){{goto L6083da;}}
}
B6083c1:L6083c1:{c.instructions+=5;NFSU2_TR(0x6083c1);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6083c5:{NFSU2_TR(0x6083c5);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x9ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(s32(s8(r1(U+4)))));
}
B6083c9:{NFSU2_TR(0x6083c9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xbe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6083cf:{NFSU2_TR(0x6083cf);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6083d1:{NFSU2_TR(0x6083d1);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L6083da;}}
}
B6083d3:L6083d3:{c.instructions+=2;NFSU2_TR(0x6083d3);
__builtin_memmove((R+4),(R+24),4);
}
B6083d5:{NFSU2_TR(0x6083d5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6083daull));
TAIL_STATIC(0x5f7a00u,5f7);
}
B6083da:L6083da:{c.instructions+=3;NFSU2_TR(0x6083da);
__builtin_memmove((R+0),gp(0x89cf69),1);
}
B6083df:{NFSU2_TR(0x6083df);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6083e1:{NFSU2_TR(0x6083e1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6083f9;}}
}
B6083e3:L6083e3:{c.instructions+=3;NFSU2_TR(0x6083e3);
__builtin_memmove((R+0),gp(0x8669f4),4);
}
B6083e8:{NFSU2_TR(0x6083e8);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6083ea:{NFSU2_TR(0x6083ea);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L6083f9;}}
}
B6083ec:L6083ec:{c.instructions+=3;NFSU2_TR(0x6083ec);
__builtin_memmove((R+0),gp(0x866a14),4);
}
B6083f1:{NFSU2_TR(0x6083f1);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6083f3:{NFSU2_TR(0x6083f3);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L6084c0;}}
}
B6083f9:L6083f9:{c.instructions+=3;NFSU2_TR(0x6083f9);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B6083fc:{NFSU2_TR(0x6083fc);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6083fe:{NFSU2_TR(0x6083fe);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L60840c;}}
}
B608400:L608400:{c.instructions+=2;NFSU2_TR(0x608400);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B608404:{NFSU2_TR(0x608404);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x608409ull));
TAIL_STATIC(0x5eef70u,5ee);
}
B608409:L608409:{c.instructions+=1;NFSU2_TR(0x608409);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B60840c:L60840c:{c.instructions+=2;NFSU2_TR(0x60840c);
u8 U[8];
__builtin_memmove((U+0),gp(0x850088),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x8ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B608413:{NFSU2_TR(0x608413);
if(r1(R+518)){{goto L608449;}}
}
B608415:L608415:{c.instructions+=6;NFSU2_TR(0x608415);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x9ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(s32(s8(r1(U+4)))));
}
B608419:{NFSU2_TR(0x608419);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B60841d:{NFSU2_TR(0x60841d);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xbe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B608423:{NFSU2_TR(0x608423);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B608425:{NFSU2_TR(0x608425);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+4),(U+0),4);
}
B608427:{NFSU2_TR(0x608427);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L608440;}}
}
B608429:L608429:{c.instructions+=6;NFSU2_TR(0x608429);
__builtin_memmove((R+8),gp(0x890118),4);
}
B60842f:{NFSU2_TR(0x60842f);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xbf7ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(s32(s8(r1(U+4)))));
}
B608436:{NFSU2_TR(0x608436);
u8 U[12];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B60843a:{NFSU2_TR(0x60843a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B60843c:{NFSU2_TR(0x60843c);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+4))));
}
B60843e:{NFSU2_TR(0x60843e);
{goto L608454;}
}
B608440:L608440:{c.instructions+=3;NFSU2_TR(0x608440);
__builtin_memmove((R+0),gp(0x86518c),4);
}
B608445:{NFSU2_TR(0x608445);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+4))));
}
B608447:{NFSU2_TR(0x608447);
{goto L608454;}
}
B608449:L608449:{c.instructions+=2;NFSU2_TR(0x608449);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xaull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(s32(s16(r2(U+4)))));
}
B60844d:{NFSU2_TR(0x60844d);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x89d028ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B608454:L608454:{c.instructions+=9;NFSU2_TR(0x608454);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+20)),r4(U+0));
}
B608457:{NFSU2_TR(0x608457);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(s32(s8(r1(U+4)))));
}
B60845b:{NFSU2_TR(0x60845b);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xaull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(s32(s16(r2(U+4)))));
}
B60845f:{NFSU2_TR(0x60845f);
u8 U[4];
w4(U+0,u32(0x6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B608461:{NFSU2_TR(0x608461);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B608463:{NFSU2_TR(0x608463);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B608464:{NFSU2_TR(0x608464);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B608465:{NFSU2_TR(0x608465);
w4(R+4,u32(0x89cf48ull));
}
B60846a:{NFSU2_TR(0x60846a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60846full));
TAIL_STATIC(0x602000u,602);
}
B60846f:L60846f:{c.instructions+=2;NFSU2_TR(0x60846f);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B608471:{NFSU2_TR(0x608471);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L60847e;}}
}
B608473:L608473:{c.instructions+=2;NFSU2_TR(0x608473);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
w2(U+4,u16(0x0ull));
s2(u32(r4(U+0)),r2(U+4));
}
B608479:{NFSU2_TR(0x608479);
{goto L60867e;}
}
B60847e:L60847e:{c.instructions+=3;NFSU2_TR(0x60847e);
__builtin_memmove((R+0),gp(0x89e7d9),1);
}
B608483:{NFSU2_TR(0x608483);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B608485:{NFSU2_TR(0x608485);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6084b2;}}
}
B608487:L608487:{c.instructions+=3;NFSU2_TR(0x608487);
__builtin_memmove((R+0),gp(0x890104),4);
}
B60848c:{NFSU2_TR(0x60848c);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B60848e:{NFSU2_TR(0x60848e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6084b2;}}
}
B608490:L608490:{c.instructions+=3;NFSU2_TR(0x608490);
__builtin_memmove((R+0),gp(0x89e7e3),1);
}
B608495:{NFSU2_TR(0x608495);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B608497:{NFSU2_TR(0x608497);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6084b2;}}
}
B608499:L608499:{c.instructions+=3;NFSU2_TR(0x608499);
__builtin_memmove((R+0),gp(0x89010c),4);
}
B60849e:{NFSU2_TR(0x60849e);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6084a0:{NFSU2_TR(0x6084a0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6084b2;}}
}
B6084a2:L6084a2:{c.instructions+=3;NFSU2_TR(0x6084a2);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+0),(U+4),2);
}
B6084a6:{NFSU2_TR(0x6084a6);
u8 U[2];
w2(U+0,u16(u32(r2(R+0))-u32(u16(0x9ull))));
w1(R+518,u8((r2(U+0))==(u16(0x0ull))));
}
B6084aa:{NFSU2_TR(0x6084aa);
if(r1(R+518)){{goto L6084b2;}}
}
B6084ac:L6084ac:{c.instructions+=2;NFSU2_TR(0x6084ac);
u8 U[2];
w2(U+0,u16(u32(r2(R+0))-u32(u16(0x8ull))));
w1(R+518,u8((r2(U+0))==(u16(0x0ull))));
}
B6084b0:{NFSU2_TR(0x6084b0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6084e0;}}
}
B6084b2:L6084b2:{c.instructions+=4;NFSU2_TR(0x6084b2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6084b4:{NFSU2_TR(0x6084b4);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6084b7:{NFSU2_TR(0x6084b7);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x190ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B6084be:{NFSU2_TR(0x6084be);
{goto L6084e0;}
}
B6084c0:L6084c0:{c.instructions+=3;NFSU2_TR(0x6084c0);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B6084c4:{NFSU2_TR(0x6084c4);
u8 U[8];
__builtin_memmove((U+0),gp(0x89e7b0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6084cb:{NFSU2_TR(0x6084cb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6084e0;}}
}
B6084cd:L6084cd:{c.instructions+=6;NFSU2_TR(0x6084cd);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6084d1:{NFSU2_TR(0x6084d1);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xbe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6084d7:{NFSU2_TR(0x6084d7);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6084d8:{NFSU2_TR(0x6084d8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6084d9:{NFSU2_TR(0x6084d9);
__builtin_memmove((R+4),(R+24),4);
}
B6084db:{NFSU2_TR(0x6084db);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6084e0ull));
TAIL_STATIC(0x5f7ec0u,5f7);
}
B6084e0:L6084e0:{c.instructions+=3;NFSU2_TR(0x6084e0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1d8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6084e6:{NFSU2_TR(0x6084e6);
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
B6084e8:{NFSU2_TR(0x6084e8);
if(r1(R+518)){{goto L6084ef;}}
}
B6084ea:L6084ea:{c.instructions+=1;NFSU2_TR(0x6084ea);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6084efull));
TAIL_STATIC(0x4022c0u,402);
}
B6084ef:L6084ef:{c.instructions+=3;NFSU2_TR(0x6084ef);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1dcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6084f5:{NFSU2_TR(0x6084f5);
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
B6084f7:{NFSU2_TR(0x6084f7);
if(r1(R+518)){{goto L6084fe;}}
}
B6084f9:L6084f9:{c.instructions+=1;NFSU2_TR(0x6084f9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6084feull));
TAIL_STATIC(0x4022c0u,402);
}
B6084fe:L6084fe:{c.instructions+=7;NFSU2_TR(0x6084fe);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B608502:{NFSU2_TR(0x608502);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B608505:{NFSU2_TR(0x608505);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B608509:{NFSU2_TR(0x608509);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B60850a:{NFSU2_TR(0x60850a);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B60850c:{NFSU2_TR(0x60850c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60850f:{NFSU2_TR(0x60850f);
if(r1(R+518)){{goto L60865c;}}
}
B608515:L608515:{c.instructions+=2;NFSU2_TR(0x608515);
__builtin_memmove((R+4),(R+12),4);
}
B608517:{NFSU2_TR(0x608517);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60851cull));
TAIL_STATIC(0x5ea530u,5ea);
}
B60851c:L60851c:{c.instructions+=4;NFSU2_TR(0x60851c);
__builtin_memmove((R+8),gp(0x850078),4);
}
B608522:{NFSU2_TR(0x608522);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B608525:{NFSU2_TR(0x608525);
__builtin_memmove((R+20),gp(0x83aab4),4);
}
B60852b:{NFSU2_TR(0x60852b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L60856e;}}
}
B60852d:L60852d:{c.instructions+=2;NFSU2_TR(0x60852d);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x8ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B608530:{NFSU2_TR(0x608530);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L60856e;}}
}
B608532:L608532:{c.instructions+=4;NFSU2_TR(0x608532);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B608535:{NFSU2_TR(0x608535);
u8 U[10];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((U+6),(U+4),2);
w2(U+8,u16(u32(r2(U+6))-u32(u16(0x6ull))));
w1(R+518,u8((r2(U+8))==(u16(0x0ull))));
}
B60853a:{NFSU2_TR(0x60853a);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B60853d:{NFSU2_TR(0x60853d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L608555;}}
}
B60853f:L60853f:{c.instructions+=2;NFSU2_TR(0x60853f);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B608541:{NFSU2_TR(0x608541);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L60854c;}}
}
B608543:L608543:{c.instructions+=2;NFSU2_TR(0x608543);
s1(0x83abc8,u8(u32(m1(0x83abc8))+u32(u8(0xaull))));
}
B60854a:{NFSU2_TR(0x60854a);
{goto L60856e;}
}
B60854c:L60854c:{c.instructions+=3;NFSU2_TR(0x60854c);
__builtin_memmove((R+0),gp(0x83abc9),1);
}
B608551:{NFSU2_TR(0x608551);
w1(R+0,u8(u32(r1(R+0))+u32(u8(0xaull))));
}
B608553:{NFSU2_TR(0x608553);
{goto L608569;}
}
B608555:L608555:{c.instructions+=2;NFSU2_TR(0x608555);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B608557:{NFSU2_TR(0x608557);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L608562;}}
}
B608559:L608559:{c.instructions+=2;NFSU2_TR(0x608559);
s1(0x83abc8,u8(u32(m1(0x83abc8))+u32(u8(0x6ull))));
}
B608560:{NFSU2_TR(0x608560);
{goto L60856e;}
}
B608562:L608562:{c.instructions+=2;NFSU2_TR(0x608562);
__builtin_memmove((R+0),gp(0x83abc9),1);
}
B608567:{NFSU2_TR(0x608567);
w1(R+0,u8(u32(r1(R+0))+u32(u8(0x6ull))));
}
B608569:L608569:{c.instructions+=1;NFSU2_TR(0x608569);
__builtin_memmove(gp(0x83abc9),(R+0),1);
}
B60856e:L60856e:{c.instructions+=5;NFSU2_TR(0x60856e);
__builtin_memmove((R+0),gp(0x89e7b0),4);
}
B608573:{NFSU2_TR(0x608573);
__builtin_memmove((R+4),gp(0x866a14),4);
}
B608579:{NFSU2_TR(0x608579);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x7ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B60857c:{NFSU2_TR(0x60857c);
__builtin_memmove((R+0),gp(0x8669f4),4);
}
B608581:{NFSU2_TR(0x608581);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6085a7;}}
}
B608583:L608583:{c.instructions+=2;NFSU2_TR(0x608583);
u8 U[2];
__builtin_memmove((U+0),gp(0x89cf69),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x0ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B60858a:{NFSU2_TR(0x60858a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6085bd;}}
}
B60858c:L60858c:{c.instructions+=2;NFSU2_TR(0x60858c);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B60858e:{NFSU2_TR(0x60858e);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L6085bd;}}
}
B608590:L608590:{c.instructions+=2;NFSU2_TR(0x608590);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B608592:{NFSU2_TR(0x608592);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L6085b1;}}
}
B608594:L608594:{c.instructions+=2;NFSU2_TR(0x608594);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B608597:{NFSU2_TR(0x608597);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L60865c;}}
}
B60859d:L60859d:{c.instructions+=2;NFSU2_TR(0x60859d);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x8ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6085a0:{NFSU2_TR(0x6085a0);
if(r1(R+518)){{goto L6085b1;}}
}
B6085a2:L6085a2:{c.instructions+=1;NFSU2_TR(0x6085a2);
{goto L60865c;}
}
B6085a7:L6085a7:{c.instructions+=3;NFSU2_TR(0x6085a7);
__builtin_memmove((R+8),gp(0x89cf69),1);
}
B6085ad:{NFSU2_TR(0x6085ad);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(r1(R+8))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6085af:{NFSU2_TR(0x6085af);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6085bd;}}
}
B6085b1:L6085b1:{c.instructions+=2;NFSU2_TR(0x6085b1);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6085b3:{NFSU2_TR(0x6085b3);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L6085bd;}}
}
B6085b5:L6085b5:{c.instructions+=2;NFSU2_TR(0x6085b5);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6085b7:{NFSU2_TR(0x6085b7);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L6085bd;}}
}
B6085b9:L6085b9:{c.instructions+=2;NFSU2_TR(0x6085b9);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6085bb:{NFSU2_TR(0x6085bb);
{goto L6085c2;}
}
B6085bd:L6085bd:{c.instructions+=1;NFSU2_TR(0x6085bd);
w4(R+0,u32(0x1ull));
}
B6085c2:L6085c2:{c.instructions+=6;NFSU2_TR(0x6085c2);
w1(R+512,u8((r1(R+0))!=(u8(0x0ull))));
w1(R+0,u8(0-u32(r1(R+0))));
}
B6085c4:{NFSU2_TR(0x6085c4);
__builtin_memmove((R+4),(R+12),4);
}
B6085c6:{NFSU2_TR(0x6085c6);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(R+0))));
w4(R+0,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B6085c8:{NFSU2_TR(0x6085c8);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x9ull))));
}
B6085cb:{NFSU2_TR(0x6085cb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6085cc:{NFSU2_TR(0x6085cc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6085d1ull));
TAIL_STATIC(0x605c70u,605);
}
B6085d1:L6085d1:{c.instructions+=5;NFSU2_TR(0x6085d1);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B6085d4:{NFSU2_TR(0x6085d4);
u8 U[4];
w4(U+0,u32(0x7b4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6085d9:{NFSU2_TR(0x6085d9);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x2cull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6085e0:{NFSU2_TR(0x6085e0);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x24ull))));
w4(U+4,u32(0x3ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6085e7:{NFSU2_TR(0x6085e7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6085ecull));
TAIL_STATIC(0x575620u,575);
}
B6085ec:L6085ec:{c.instructions+=5;NFSU2_TR(0x6085ec);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6085ef:{NFSU2_TR(0x6085ef);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6085f3:{NFSU2_TR(0x6085f3);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6085f5:{NFSU2_TR(0x6085f5);
u8 U[8];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
w4(U+4,u32(0x9ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6085fd:{NFSU2_TR(0x6085fd);
if(r1(R+518)){{goto L608609;}}
}
B6085ff:L6085ff:{c.instructions+=3;NFSU2_TR(0x6085ff);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B608600:{NFSU2_TR(0x608600);
__builtin_memmove((R+4),(R+0),4);
}
B608602:{NFSU2_TR(0x608602);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x608607ull));
TAIL_STATIC(0x4260b0u,426);
}
B608607:L608607:{c.instructions+=1;NFSU2_TR(0x608607);
{goto L60860b;}
}
B608609:L608609:{c.instructions+=1;NFSU2_TR(0x608609);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B60860b:L60860b:{c.instructions+=4;NFSU2_TR(0x60860b);
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
B60860d:{NFSU2_TR(0x60860d);
u8 U[8];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B608615:{NFSU2_TR(0x608615);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B608618:{NFSU2_TR(0x608618);
if(r1(R+518)){{goto L608623;}}
}
B60861a:L60861a:{c.instructions+=4;NFSU2_TR(0x60861a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+20))),4);
__builtin_memmove((R+8),(U+0),4);
}
B60861d:{NFSU2_TR(0x60861d);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60861f:{NFSU2_TR(0x60861f);
__builtin_memmove((R+4),(R+20),4);
}
B608621:{NFSU2_TR(0x608621);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x608623ull));
{u32 t_=u32(r4(U+4));TAIL_DYNAMIC(t_);}
}
B608623:L608623:{c.instructions+=14;NFSU2_TR(0x608623);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B608626:{NFSU2_TR(0x608626);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B608629:{NFSU2_TR(0x608629);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B60862c:{NFSU2_TR(0x60862c);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60862f:{NFSU2_TR(0x60862f);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B608632:{NFSU2_TR(0x608632);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(s32(s16(r2(U+4)))));
}
B608636:{NFSU2_TR(0x608636);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B608639:{NFSU2_TR(0x608639);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x89ce00ull))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+8),4);
s4(u32(r4(U+4)),r4(U+8));
}
B608640:{NFSU2_TR(0x608640);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(s32(s16(r2(U+4)))));
}
B608644:{NFSU2_TR(0x608644);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B608647:{NFSU2_TR(0x608647);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x89ce58ull))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4),4);
s4(u32(r4(U+4)),r4(U+8));
}
B60864e:{NFSU2_TR(0x60864e);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(s32(s16(r2(U+4)))));
}
B608652:{NFSU2_TR(0x608652);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B608655:{NFSU2_TR(0x608655);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x89ceb0ull))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+0),4);
s4(u32(r4(U+4)),r4(U+8));
}
B60865c:L60865c:{c.instructions+=2;NFSU2_TR(0x60865c);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B608660:{NFSU2_TR(0x608660);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L60866a;}}
}
B608662:L608662:{c.instructions+=2;NFSU2_TR(0x608662);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B608665:{NFSU2_TR(0x608665);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60866aull));
TAIL_STATIC(0x42b330u,42b);
}
B60866a:L60866a:{c.instructions+=3;NFSU2_TR(0x60866a);
__builtin_memmove((R+0),gp(0x8650b0),4);
}
B60866f:{NFSU2_TR(0x60866f);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B608671:{NFSU2_TR(0x608671);
if(r1(R+518)){{goto L60867e;}}
}
B608673:L608673:{c.instructions+=2;NFSU2_TR(0x608673);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B608675:{NFSU2_TR(0x608675);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L60867e;}}
}
B608677:L608677:{c.instructions+=2;NFSU2_TR(0x608677);
__builtin_memmove((R+4),(R+24),4);
}
B608679:{NFSU2_TR(0x608679);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60867eull));
TAIL_STATIC(0x5f8200u,5f8);
}
B60867e:L60867e:{c.instructions+=6;NFSU2_TR(0x60867e);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B608682:{NFSU2_TR(0x608682);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xbd0ull))));
}
B608687:{NFSU2_TR(0x608687);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B608689:{NFSU2_TR(0x608689);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B60868b:{NFSU2_TR(0x60868b);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B60868d:{NFSU2_TR(0x60868d);
if(r1(R+518)){{goto L608694;}}
}
B60868f:L60868f:{c.instructions+=2;NFSU2_TR(0x60868f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B608692:{NFSU2_TR(0x608692);
{goto L608696;}
}
B608694:L608694:{c.instructions+=1;NFSU2_TR(0x608694);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B608696:L608696:{c.instructions+=7;NFSU2_TR(0x608696);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B608698:{NFSU2_TR(0x608698);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B60869c:{NFSU2_TR(0x60869c);
__builtin_memmove(gp(0x850380),(R+4),4);
}
B6086a2:{NFSU2_TR(0x6086a2);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xbd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6086a8:{NFSU2_TR(0x6086a8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+20),(U+0),4);
}
B6086aa:{NFSU2_TR(0x6086aa);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))&u32(r4(R+20))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6086ac:{NFSU2_TR(0x6086ac);
if(r1(R+518)){{goto L6086b3;}}
}
B6086ae:L6086ae:{c.instructions+=2;NFSU2_TR(0x6086ae);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6086b1:{NFSU2_TR(0x6086b1);
{goto L6086b5;}
}
B6086b3:L6086b3:{c.instructions+=1;NFSU2_TR(0x6086b3);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B6086b5:L6086b5:{c.instructions+=10;NFSU2_TR(0x6086b5);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6086b9:{NFSU2_TR(0x6086b9);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6086bc:{NFSU2_TR(0x6086bc);
__builtin_memmove((R+0),gp(0x86518c),4);
}
B6086c1:{NFSU2_TR(0x6086c1);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x10ull))));
}
B6086c4:{NFSU2_TR(0x6086c4);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x198ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6086ca:{NFSU2_TR(0x6086ca);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+8))));
}
B6086cc:{NFSU2_TR(0x6086cc);
u8 U[4];
w4(U+0,u32(0x3c23d70aull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6086d1:{NFSU2_TR(0x6086d1);
__builtin_memmove((R+4),(R+28),4);
}
B6086d3:{NFSU2_TR(0x6086d3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+28)),r4(U+0));
}
B6086d5:{NFSU2_TR(0x6086d5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6086daull));
TAIL_STATIC(0x577400u,577);
}
B6086da:L6086da:{c.instructions+=6;NFSU2_TR(0x6086da);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1d4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6086e0:{NFSU2_TR(0x6086e0);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6086e2:{NFSU2_TR(0x6086e2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6086e5:{NFSU2_TR(0x6086e5);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
w2(U+4,u16(0x7ull));
s2(u32(r4(U+0)),r2(U+4));
}
B6086eb:{NFSU2_TR(0x6086eb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6086ee:{NFSU2_TR(0x6086ee);
if(r1(R+518)){{goto L608720;}}
}
B6086f0:L6086f0:{c.instructions+=1;NFSU2_TR(0x6086f0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6086f5ull));
TAIL_STATIC(0x56d710u,56d);
}
B6086f5:L6086f5:{c.instructions+=3;NFSU2_TR(0x6086f5);
__builtin_memmove((R+0),gp(0x89e7d9),1);
}
B6086fa:{NFSU2_TR(0x6086fa);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6086fc:{NFSU2_TR(0x6086fc);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L608707;}}
}
B6086fe:L6086fe:{c.instructions+=3;NFSU2_TR(0x6086fe);
__builtin_memmove((R+0),gp(0x890104),4);
}
B608703:{NFSU2_TR(0x608703);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B608705:{NFSU2_TR(0x608705);
if(r1(R+518)){{goto L608720;}}
}
B608707:L608707:{c.instructions+=5;NFSU2_TR(0x608707);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B60870b:{NFSU2_TR(0x60870b);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x9ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+8,u32(s32(s8(r1(U+4)))));
}
B60870f:{NFSU2_TR(0x60870f);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xbe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B608715:{NFSU2_TR(0x608715);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+8),r4(U+0)));
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B608717:{NFSU2_TR(0x608717);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L608720;}}
}
B608719:L608719:{c.instructions+=2;NFSU2_TR(0x608719);
__builtin_memmove((R+4),(R+24),4);
}
B60871b:{NFSU2_TR(0x60871b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x608720ull));
TAIL_STATIC(0x5f7a00u,5f7);
}
B608720:L608720:{c.instructions+=3;NFSU2_TR(0x608720);
__builtin_memmove((R+0),gp(0x89cf69),1);
}
B608725:{NFSU2_TR(0x608725);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B608727:{NFSU2_TR(0x608727);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L60873f;}}
}
B608729:L608729:{c.instructions+=3;NFSU2_TR(0x608729);
__builtin_memmove((R+0),gp(0x8669f4),4);
}
B60872e:{NFSU2_TR(0x60872e);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B608730:{NFSU2_TR(0x608730);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L60873f;}}
}
B608732:L608732:{c.instructions+=3;NFSU2_TR(0x608732);
__builtin_memmove((R+0),gp(0x866a14),4);
}
B608737:{NFSU2_TR(0x608737);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B608739:{NFSU2_TR(0x608739);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L608805;}}
}
B60873f:L60873f:{c.instructions+=3;NFSU2_TR(0x60873f);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B608742:{NFSU2_TR(0x608742);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B608744:{NFSU2_TR(0x608744);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L608752;}}
}
B608746:L608746:{c.instructions+=2;NFSU2_TR(0x608746);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B60874a:{NFSU2_TR(0x60874a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60874full));
TAIL_STATIC(0x5eefb0u,5ee);
}
B60874f:L60874f:{c.instructions+=1;NFSU2_TR(0x60874f);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B608752:L608752:{c.instructions+=2;NFSU2_TR(0x608752);
u8 U[8];
__builtin_memmove((U+0),gp(0x850088),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x8ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B608759:{NFSU2_TR(0x608759);
if(r1(R+518)){{goto L60878f;}}
}
B60875b:L60875b:{c.instructions+=6;NFSU2_TR(0x60875b);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B60875f:{NFSU2_TR(0x60875f);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x9ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+8,u32(s32(s8(r1(U+4)))));
}
B608763:{NFSU2_TR(0x608763);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xbe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B608769:{NFSU2_TR(0x608769);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x10ull))));
}
B60876c:{NFSU2_TR(0x60876c);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B60876e:{NFSU2_TR(0x60876e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L608786;}}
}
B608770:L608770:{c.instructions+=6;NFSU2_TR(0x608770);
__builtin_memmove((R+0),gp(0x890118),4);
}
B608775:{NFSU2_TR(0x608775);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xbf7ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+8,u32(s32(s8(r1(U+4)))));
}
B60877c:{NFSU2_TR(0x60877c);
u8 U[12];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B608780:{NFSU2_TR(0x608780);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B608782:{NFSU2_TR(0x608782);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
w4(R+0,u32(u32(r4(R+0))-u32(r4(U+0))));
}
B608784:{NFSU2_TR(0x608784);
{goto L60879a;}
}
B608786:L608786:{c.instructions+=3;NFSU2_TR(0x608786);
__builtin_memmove((R+0),gp(0x86518c),4);
}
B60878b:{NFSU2_TR(0x60878b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
w4(R+0,u32(u32(r4(R+0))-u32(r4(U+0))));
}
B60878d:{NFSU2_TR(0x60878d);
{goto L60879a;}
}
B60878f:L60878f:{c.instructions+=2;NFSU2_TR(0x60878f);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xaull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(s32(s16(r2(U+4)))));
}
B608793:{NFSU2_TR(0x608793);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x89d028ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B60879a:L60879a:{c.instructions+=9;NFSU2_TR(0x60879a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+28)),r4(U+0));
}
B60879c:{NFSU2_TR(0x60879c);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(s32(s8(r1(U+4)))));
}
B6087a0:{NFSU2_TR(0x6087a0);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xaull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(s32(s16(r2(U+4)))));
}
B6087a4:{NFSU2_TR(0x6087a4);
u8 U[4];
w4(U+0,u32(0x7ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6087a6:{NFSU2_TR(0x6087a6);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6087a8:{NFSU2_TR(0x6087a8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6087a9:{NFSU2_TR(0x6087a9);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6087aa:{NFSU2_TR(0x6087aa);
w4(R+4,u32(0x89cf48ull));
}
B6087af:{NFSU2_TR(0x6087af);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6087b4ull));
TAIL_STATIC(0x602000u,602);
}
B6087b4:L6087b4:{c.instructions+=2;NFSU2_TR(0x6087b4);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6087b6:{NFSU2_TR(0x6087b6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6087c3;}}
}
B6087b8:L6087b8:{c.instructions+=2;NFSU2_TR(0x6087b8);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
w2(U+4,u16(0x0ull));
s2(u32(r4(U+0)),r2(U+4));
}
B6087be:{NFSU2_TR(0x6087be);
{goto L6089c1;}
}
B6087c3:L6087c3:{c.instructions+=3;NFSU2_TR(0x6087c3);
__builtin_memmove((R+0),gp(0x89e7d9),1);
}
B6087c8:{NFSU2_TR(0x6087c8);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6087ca:{NFSU2_TR(0x6087ca);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6087f7;}}
}
B6087cc:L6087cc:{c.instructions+=3;NFSU2_TR(0x6087cc);
__builtin_memmove((R+0),gp(0x890104),4);
}
B6087d1:{NFSU2_TR(0x6087d1);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6087d3:{NFSU2_TR(0x6087d3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6087f7;}}
}
B6087d5:L6087d5:{c.instructions+=3;NFSU2_TR(0x6087d5);
__builtin_memmove((R+0),gp(0x89e7e3),1);
}
B6087da:{NFSU2_TR(0x6087da);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6087dc:{NFSU2_TR(0x6087dc);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6087f7;}}
}
B6087de:L6087de:{c.instructions+=3;NFSU2_TR(0x6087de);
__builtin_memmove((R+0),gp(0x89010c),4);
}
B6087e3:{NFSU2_TR(0x6087e3);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6087e5:{NFSU2_TR(0x6087e5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6087f7;}}
}
B6087e7:L6087e7:{c.instructions+=3;NFSU2_TR(0x6087e7);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+0),(U+4),2);
}
B6087eb:{NFSU2_TR(0x6087eb);
u8 U[2];
w2(U+0,u16(u32(r2(R+0))-u32(u16(0x9ull))));
w1(R+518,u8((r2(U+0))==(u16(0x0ull))));
}
B6087ef:{NFSU2_TR(0x6087ef);
if(r1(R+518)){{goto L6087f7;}}
}
B6087f1:L6087f1:{c.instructions+=2;NFSU2_TR(0x6087f1);
u8 U[2];
w2(U+0,u16(u32(r2(R+0))-u32(u16(0x8ull))));
w1(R+518,u8((r2(U+0))==(u16(0x0ull))));
}
B6087f5:{NFSU2_TR(0x6087f5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L608828;}}
}
B6087f7:L6087f7:{c.instructions+=4;NFSU2_TR(0x6087f7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6087f9:{NFSU2_TR(0x6087f9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6087fc:{NFSU2_TR(0x6087fc);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x190ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B608803:{NFSU2_TR(0x608803);
{goto L608828;}
}
B608805:L608805:{c.instructions+=3;NFSU2_TR(0x608805);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B608809:{NFSU2_TR(0x608809);
u8 U[8];
__builtin_memmove((U+0),gp(0x89e7b0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B608810:{NFSU2_TR(0x608810);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L608828;}}
}
B608812:L608812:{c.instructions+=7;NFSU2_TR(0x608812);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B608816:{NFSU2_TR(0x608816);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xbe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B60881c:{NFSU2_TR(0x60881c);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x10ull))));
}
B60881f:{NFSU2_TR(0x60881f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B608820:{NFSU2_TR(0x608820);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B608821:{NFSU2_TR(0x608821);
__builtin_memmove((R+4),(R+24),4);
}
B608823:{NFSU2_TR(0x608823);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x608828ull));
TAIL_STATIC(0x5f7ec0u,5f7);
}
B608828:L608828:{c.instructions+=3;NFSU2_TR(0x608828);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1d8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B60882e:{NFSU2_TR(0x60882e);
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
B608830:{NFSU2_TR(0x608830);
if(r1(R+518)){{goto L608837;}}
}
B608832:L608832:{c.instructions+=1;NFSU2_TR(0x608832);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x608837ull));
TAIL_STATIC(0x4022c0u,402);
}
B608837:L608837:{c.instructions+=3;NFSU2_TR(0x608837);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1dcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B60883d:{NFSU2_TR(0x60883d);
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
B60883f:{NFSU2_TR(0x60883f);
if(r1(R+518)){{goto L608846;}}
}
B608841:L608841:{c.instructions+=1;NFSU2_TR(0x608841);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x608846ull));
TAIL_STATIC(0x4022c0u,402);
}
B608846:L608846:{c.instructions+=6;NFSU2_TR(0x608846);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B60884a:{NFSU2_TR(0x60884a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B60884d:{NFSU2_TR(0x60884d);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B60884e:{NFSU2_TR(0x60884e);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B608850:{NFSU2_TR(0x608850);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B608853:{NFSU2_TR(0x608853);
if(r1(R+518)){{goto L60899f;}}
}
B608859:L608859:{c.instructions+=2;NFSU2_TR(0x608859);
__builtin_memmove((R+4),(R+12),4);
}
B60885b:{NFSU2_TR(0x60885b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x608860ull));
TAIL_STATIC(0x5ea530u,5ea);
}
B608860:L608860:{c.instructions+=4;NFSU2_TR(0x608860);
__builtin_memmove((R+8),gp(0x850078),4);
}
B608866:{NFSU2_TR(0x608866);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B608869:{NFSU2_TR(0x608869);
__builtin_memmove((R+28),gp(0x83aab4),4);
}
B60886f:{NFSU2_TR(0x60886f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6088b2;}}
}
B608871:L608871:{c.instructions+=2;NFSU2_TR(0x608871);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x8ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B608874:{NFSU2_TR(0x608874);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6088b2;}}
}
B608876:L608876:{c.instructions+=4;NFSU2_TR(0x608876);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B608879:{NFSU2_TR(0x608879);
u8 U[10];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((U+6),(U+4),2);
w2(U+8,u16(u32(r2(U+6))-u32(u16(0x6ull))));
w1(R+518,u8((r2(U+8))==(u16(0x0ull))));
}
B60887e:{NFSU2_TR(0x60887e);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B608881:{NFSU2_TR(0x608881);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L608899;}}
}
B608883:L608883:{c.instructions+=2;NFSU2_TR(0x608883);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B608885:{NFSU2_TR(0x608885);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L608890;}}
}
B608887:L608887:{c.instructions+=2;NFSU2_TR(0x608887);
s1(0x83abc8,u8(u32(m1(0x83abc8))+u32(u8(0xaull))));
}
B60888e:{NFSU2_TR(0x60888e);
{goto L6088b2;}
}
B608890:L608890:{c.instructions+=3;NFSU2_TR(0x608890);
__builtin_memmove((R+0),gp(0x83abc9),1);
}
B608895:{NFSU2_TR(0x608895);
w1(R+0,u8(u32(r1(R+0))+u32(u8(0xaull))));
}
B608897:{NFSU2_TR(0x608897);
{goto L6088ad;}
}
B608899:L608899:{c.instructions+=2;NFSU2_TR(0x608899);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B60889b:{NFSU2_TR(0x60889b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6088a6;}}
}
B60889d:L60889d:{c.instructions+=2;NFSU2_TR(0x60889d);
s1(0x83abc8,u8(u32(m1(0x83abc8))+u32(u8(0x6ull))));
}
B6088a4:{NFSU2_TR(0x6088a4);
{goto L6088b2;}
}
B6088a6:L6088a6:{c.instructions+=2;NFSU2_TR(0x6088a6);
__builtin_memmove((R+0),gp(0x83abc9),1);
}
B6088ab:{NFSU2_TR(0x6088ab);
w1(R+0,u8(u32(r1(R+0))+u32(u8(0x6ull))));
}
B6088ad:L6088ad:{c.instructions+=1;NFSU2_TR(0x6088ad);
__builtin_memmove(gp(0x83abc9),(R+0),1);
}
B6088b2:L6088b2:{c.instructions+=5;NFSU2_TR(0x6088b2);
__builtin_memmove((R+0),gp(0x89e7b0),4);
}
B6088b7:{NFSU2_TR(0x6088b7);
__builtin_memmove((R+4),gp(0x866a14),4);
}
B6088bd:{NFSU2_TR(0x6088bd);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x7ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6088c0:{NFSU2_TR(0x6088c0);
__builtin_memmove((R+0),gp(0x8669f4),4);
}
B6088c5:{NFSU2_TR(0x6088c5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6088eb;}}
}
B6088c7:L6088c7:{c.instructions+=2;NFSU2_TR(0x6088c7);
u8 U[2];
__builtin_memmove((U+0),gp(0x89cf69),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x0ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B6088ce:{NFSU2_TR(0x6088ce);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L608901;}}
}
B6088d0:L6088d0:{c.instructions+=2;NFSU2_TR(0x6088d0);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6088d2:{NFSU2_TR(0x6088d2);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L608901;}}
}
B6088d4:L6088d4:{c.instructions+=2;NFSU2_TR(0x6088d4);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6088d6:{NFSU2_TR(0x6088d6);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L6088f5;}}
}
B6088d8:L6088d8:{c.instructions+=2;NFSU2_TR(0x6088d8);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6088db:{NFSU2_TR(0x6088db);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L60899f;}}
}
B6088e1:L6088e1:{c.instructions+=2;NFSU2_TR(0x6088e1);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x8ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6088e4:{NFSU2_TR(0x6088e4);
if(r1(R+518)){{goto L6088f5;}}
}
B6088e6:L6088e6:{c.instructions+=1;NFSU2_TR(0x6088e6);
{goto L60899f;}
}
B6088eb:L6088eb:{c.instructions+=3;NFSU2_TR(0x6088eb);
__builtin_memmove((R+8),gp(0x89cf69),1);
}
B6088f1:{NFSU2_TR(0x6088f1);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(r1(R+8))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6088f3:{NFSU2_TR(0x6088f3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L608901;}}
}
B6088f5:L6088f5:{c.instructions+=2;NFSU2_TR(0x6088f5);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6088f7:{NFSU2_TR(0x6088f7);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L608901;}}
}
B6088f9:L6088f9:{c.instructions+=2;NFSU2_TR(0x6088f9);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6088fb:{NFSU2_TR(0x6088fb);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L608901;}}
}
B6088fd:L6088fd:{c.instructions+=2;NFSU2_TR(0x6088fd);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6088ff:{NFSU2_TR(0x6088ff);
{goto L608906;}
}
B608901:L608901:{c.instructions+=1;NFSU2_TR(0x608901);
w4(R+0,u32(0x1ull));
}
B608906:L608906:{c.instructions+=6;NFSU2_TR(0x608906);
w1(R+512,u8((r1(R+0))!=(u8(0x0ull))));
w1(R+0,u8(0-u32(r1(R+0))));
}
B608908:{NFSU2_TR(0x608908);
__builtin_memmove((R+4),(R+12),4);
}
B60890a:{NFSU2_TR(0x60890a);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(R+0))));
w4(R+0,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B60890c:{NFSU2_TR(0x60890c);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x9ull))));
}
B60890f:{NFSU2_TR(0x60890f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B608910:{NFSU2_TR(0x608910);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x608915ull));
TAIL_STATIC(0x605c70u,605);
}
B608915:L608915:{c.instructions+=5;NFSU2_TR(0x608915);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B608918:{NFSU2_TR(0x608918);
u8 U[4];
w4(U+0,u32(0x7b4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60891d:{NFSU2_TR(0x60891d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x2cull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B608924:{NFSU2_TR(0x608924);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x24ull))));
w4(U+4,u32(0x3ull));
s4(u32(r4(U+0)),r4(U+4));
}
B60892b:{NFSU2_TR(0x60892b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x608930ull));
TAIL_STATIC(0x575620u,575);
}
B608930:L608930:{c.instructions+=5;NFSU2_TR(0x608930);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B608933:{NFSU2_TR(0x608933);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B608937:{NFSU2_TR(0x608937);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B608939:{NFSU2_TR(0x608939);
u8 U[8];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
w4(U+4,u32(0xfull));
s4(u32(r4(U+0)),r4(U+4));
}
B608941:{NFSU2_TR(0x608941);
if(r1(R+518)){{goto L60894d;}}
}
B608943:L608943:{c.instructions+=3;NFSU2_TR(0x608943);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B608944:{NFSU2_TR(0x608944);
__builtin_memmove((R+4),(R+0),4);
}
B608946:{NFSU2_TR(0x608946);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60894bull));
TAIL_STATIC(0x4260b0u,426);
}
B60894b:L60894b:{c.instructions+=1;NFSU2_TR(0x60894b);
{goto L60894f;}
}
B60894d:L60894d:{c.instructions+=1;NFSU2_TR(0x60894d);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B60894f:L60894f:{c.instructions+=4;NFSU2_TR(0x60894f);
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
B608951:{NFSU2_TR(0x608951);
u8 U[8];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B608959:{NFSU2_TR(0x608959);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60895c:{NFSU2_TR(0x60895c);
if(r1(R+518)){{goto L608966;}}
}
B60895e:L60895e:{c.instructions+=4;NFSU2_TR(0x60895e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+8),(U+0),4);
}
B608960:{NFSU2_TR(0x608960);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B608962:{NFSU2_TR(0x608962);
__builtin_memmove((R+4),(R+28),4);
}
B608964:{NFSU2_TR(0x608964);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x608966ull));
{u32 t_=u32(r4(U+4));TAIL_DYNAMIC(t_);}
}
B608966:L608966:{c.instructions+=14;NFSU2_TR(0x608966);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B608969:{NFSU2_TR(0x608969);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B60896c:{NFSU2_TR(0x60896c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B60896f:{NFSU2_TR(0x60896f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B608972:{NFSU2_TR(0x608972);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B608975:{NFSU2_TR(0x608975);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(s32(s16(r2(U+4)))));
}
B608979:{NFSU2_TR(0x608979);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B60897c:{NFSU2_TR(0x60897c);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x89ce00ull))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+0),4);
s4(u32(r4(U+4)),r4(U+8));
}
B608983:{NFSU2_TR(0x608983);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(s32(s16(r2(U+4)))));
}
B608987:{NFSU2_TR(0x608987);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B60898a:{NFSU2_TR(0x60898a);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x89ce58ull))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+8),4);
s4(u32(r4(U+4)),r4(U+8));
}
B608991:{NFSU2_TR(0x608991);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(s32(s16(r2(U+4)))));
}
B608995:{NFSU2_TR(0x608995);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B608998:{NFSU2_TR(0x608998);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x89ceb0ull))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4),4);
s4(u32(r4(U+4)),r4(U+8));
}
B60899f:L60899f:{c.instructions+=2;NFSU2_TR(0x60899f);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6089a3:{NFSU2_TR(0x6089a3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6089ad;}}
}
B6089a5:L6089a5:{c.instructions+=2;NFSU2_TR(0x6089a5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6089a8:{NFSU2_TR(0x6089a8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6089adull));
TAIL_STATIC(0x42b330u,42b);
}
B6089ad:L6089ad:{c.instructions+=3;NFSU2_TR(0x6089ad);
__builtin_memmove((R+0),gp(0x8650b0),4);
}
B6089b2:{NFSU2_TR(0x6089b2);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6089b4:{NFSU2_TR(0x6089b4);
if(r1(R+518)){{goto L6089c1;}}
}
B6089b6:L6089b6:{c.instructions+=2;NFSU2_TR(0x6089b6);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6089b8:{NFSU2_TR(0x6089b8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6089c1;}}
}
B6089ba:L6089ba:{c.instructions+=2;NFSU2_TR(0x6089ba);
__builtin_memmove((R+4),(R+24),4);
}
B6089bc:{NFSU2_TR(0x6089bc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6089c1ull));
TAIL_STATIC(0x5f8200u,5f8);
}
B6089c1:L6089c1:{c.instructions+=5;NFSU2_TR(0x6089c1);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6089c5:{NFSU2_TR(0x6089c5);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xbd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6089cb:{NFSU2_TR(0x6089cb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6089cd:{NFSU2_TR(0x6089cd);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6089cf:{NFSU2_TR(0x6089cf);
if(r1(R+518)){{goto L6089d6;}}
}
B6089d1:L6089d1:{c.instructions+=2;NFSU2_TR(0x6089d1);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6089d4:{NFSU2_TR(0x6089d4);
{goto L6089d8;}
}
B6089d6:L6089d6:{c.instructions+=1;NFSU2_TR(0x6089d6);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6089d8:L6089d8:{c.instructions+=6;NFSU2_TR(0x6089d8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6089da:{NFSU2_TR(0x6089da);
__builtin_memmove(gp(0x8505a4),(R+8),4);
}
B6089e0:{NFSU2_TR(0x6089e0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xbd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6089e6:{NFSU2_TR(0x6089e6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6089e8:{NFSU2_TR(0x6089e8);
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
B6089ea:{NFSU2_TR(0x6089ea);
if(r1(R+518)){{goto L608a4e;}}
}
B6089ec:L6089ec:{c.instructions+=2;NFSU2_TR(0x6089ec);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6089ef:{NFSU2_TR(0x6089ef);
{goto L608a50;}
}
B6089f1:L6089f1:{c.instructions+=6;NFSU2_TR(0x6089f1);
u8 U[4];
w4(U+0,u32(0x6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6089f3:{NFSU2_TR(0x6089f3);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6089f5:{NFSU2_TR(0x6089f5);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6089f7:{NFSU2_TR(0x6089f7);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6089f9:{NFSU2_TR(0x6089f9);
__builtin_memmove((R+4),(R+20),4);
}
B6089fb:{NFSU2_TR(0x6089fb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x608a00ull));
TAIL_STATIC(0x606cb0u,606);
}
B608a00:L608a00:{c.instructions+=4;NFSU2_TR(0x608a00);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xbd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B608a06:{NFSU2_TR(0x608a06);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B608a08:{NFSU2_TR(0x608a08);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B608a0a:{NFSU2_TR(0x608a0a);
if(r1(R+518)){{goto L608a11;}}
}
B608a0c:L608a0c:{c.instructions+=2;NFSU2_TR(0x608a0c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B608a0f:{NFSU2_TR(0x608a0f);
{goto L608a13;}
}
B608a11:L608a11:{c.instructions+=1;NFSU2_TR(0x608a11);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B608a13:L608a13:{c.instructions+=8;NFSU2_TR(0x608a13);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B608a15:{NFSU2_TR(0x608a15);
u8 U[4];
w4(U+0,u32(0x7ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B608a17:{NFSU2_TR(0x608a17);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B608a19:{NFSU2_TR(0x608a19);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B608a1b:{NFSU2_TR(0x608a1b);
__builtin_memmove(gp(0x850380),(R+4),4);
}
B608a21:{NFSU2_TR(0x608a21);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B608a23:{NFSU2_TR(0x608a23);
__builtin_memmove((R+4),(R+20),4);
}
B608a25:{NFSU2_TR(0x608a25);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x608a2aull));
TAIL_STATIC(0x606cb0u,606);
}
B608a2a:L608a2a:{c.instructions+=4;NFSU2_TR(0x608a2a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B608a2c:{NFSU2_TR(0x608a2c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B608a2e:{NFSU2_TR(0x608a2e);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B608a30:{NFSU2_TR(0x608a30);
if(r1(R+518)){{goto L608a37;}}
}
B608a32:L608a32:{c.instructions+=2;NFSU2_TR(0x608a32);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B608a35:{NFSU2_TR(0x608a35);
{goto L608a39;}
}
B608a37:L608a37:{c.instructions+=1;NFSU2_TR(0x608a37);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B608a39:L608a39:{c.instructions+=6;NFSU2_TR(0x608a39);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B608a3b:{NFSU2_TR(0x608a3b);
__builtin_memmove(gp(0x8505a4),(R+8),4);
}
B608a41:{NFSU2_TR(0x608a41);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+28),(U+0),4);
}
B608a43:{NFSU2_TR(0x608a43);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B608a45:{NFSU2_TR(0x608a45);
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
B608a47:{NFSU2_TR(0x608a47);
if(r1(R+518)){{goto L608a4e;}}
}
B608a49:L608a49:{c.instructions+=2;NFSU2_TR(0x608a49);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B608a4c:{NFSU2_TR(0x608a4c);
{goto L608a50;}
}
B608a4e:L608a4e:{c.instructions+=1;NFSU2_TR(0x608a4e);
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
B608a50:L608a50:{c.instructions+=12;NFSU2_TR(0x608a50);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B608a53:{NFSU2_TR(0x608a53);
__builtin_memmove(gp(0x83abcc),(R+0),1);
}
B608a58:{NFSU2_TR(0x608a58);
s4(0x83abc4,u32(0x1ull));
}
B608a62:{NFSU2_TR(0x608a62);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B608a66:{NFSU2_TR(0x608a66);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B608a6d:{NFSU2_TR(0x608a6d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B608a6e:{NFSU2_TR(0x608a6e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B608a6f:{NFSU2_TR(0x608a6f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B608a70:{NFSU2_TR(0x608a70);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B608a71:{NFSU2_TR(0x608a71);
__builtin_memmove((R+16),(R+20),4);
}
B608a73:{NFSU2_TR(0x608a73);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B608a74:{NFSU2_TR(0x608a74);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B608a75:L608a75:{c.instructions+=9;NFSU2_TR(0x608a75);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B608a77:{NFSU2_TR(0x608a77);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B608a79:{NFSU2_TR(0x608a79);
__builtin_memmove((R+4),(R+518),1);
}
B608a7c:{NFSU2_TR(0x608a7c);
u8 U[4];
w4(U+0,u32(0x6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B608a7e:{NFSU2_TR(0x608a7e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B608a7f:{NFSU2_TR(0x608a7f);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B608a81:{NFSU2_TR(0x608a81);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B608a83:{NFSU2_TR(0x608a83);
__builtin_memmove((R+4),(R+20),4);
}
B608a85:{NFSU2_TR(0x608a85);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x608a8aull));
TAIL_STATIC(0x606cb0u,606);
}
B608a8a:L608a8a:{c.instructions+=1;NFSU2_TR(0x608a8a);
{goto L608c58;}
}
B608a8f:L608a8f:{c.instructions+=9;NFSU2_TR(0x608a8f);
u8 U[4];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B608a93:{NFSU2_TR(0x608a93);
u8 U[4];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B608a97:{NFSU2_TR(0x608a97);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B608a99:{NFSU2_TR(0x608a99);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B608a9d:{NFSU2_TR(0x608a9d);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B608aa1:{NFSU2_TR(0x608aa1);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B608aa3:{NFSU2_TR(0x608aa3);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B608aa5:{NFSU2_TR(0x608aa5);
u8 U[8];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
w4(U+4,u32(0x12ull));
s4(u32(r4(U+0)),r4(U+4));
}
B608aad:{NFSU2_TR(0x608aad);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L608bcf;}}
}
B608ab3:L608ab3:{c.instructions+=3;NFSU2_TR(0x608ab3);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B608ab7:{NFSU2_TR(0x608ab7);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xbd0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B608abd:{NFSU2_TR(0x608abd);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B608ac1:L608ac1:{c.instructions+=4;NFSU2_TR(0x608ac1);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B608ac5:{NFSU2_TR(0x608ac5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+24),(U+0),4);
}
B608ac7:{NFSU2_TR(0x608ac7);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B608ac9:{NFSU2_TR(0x608ac9);
if(r1(R+518)){{goto L608b38;}}
}
B608acb:L608acb:{c.instructions+=2;NFSU2_TR(0x608acb);
u8 U[10];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((U+6),(U+4),2);
w2(U+8,u16(u32(r2(U+6))-u32(u16(0x0ull))));
w1(R+518,u8((r2(U+8))==(u16(0x0ull))));
}
B608ad0:{NFSU2_TR(0x608ad0);
if(r1(R+518)){{goto L608adb;}}
}
B608ad2:L608ad2:{c.instructions+=3;NFSU2_TR(0x608ad2);
__builtin_memmove((R+0),gp(0x89e7b0),4);
}
B608ad7:{NFSU2_TR(0x608ad7);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B608ad9:{NFSU2_TR(0x608ad9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L608b38;}}
}
B608adb:L608adb:{c.instructions+=5;NFSU2_TR(0x608adb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B608add:{NFSU2_TR(0x608add);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xaull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(s32(s16(r2(U+4)))));
}
B608ae1:{NFSU2_TR(0x608ae1);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x89d028ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B608ae8:{NFSU2_TR(0x608ae8);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B608aea:{NFSU2_TR(0x608aea);
if(r1(R+518)){{goto L608b38;}}
}
B608aec:L608aec:{c.instructions+=2;NFSU2_TR(0x608aec);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x7fffffffull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B608af1:{NFSU2_TR(0x608af1);
if(r1(R+518)){{goto L608b38;}}
}
B608af3:L608af3:{c.instructions+=2;NFSU2_TR(0x608af3);
u8 U[4];
w4(U+0,u32(0x14ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B608af5:{NFSU2_TR(0x608af5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x608afaull));
TAIL_STATIC(0x575620u,575);
}
B608afa:L608afa:{c.instructions+=3;NFSU2_TR(0x608afa);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B608afd:{NFSU2_TR(0x608afd);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B608aff:{NFSU2_TR(0x608aff);
if(r1(R+518)){{goto L608b1d;}}
}
B608b01:L608b01:{c.instructions+=8;NFSU2_TR(0x608b01);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B608b03:{NFSU2_TR(0x608b03);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xaull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(s32(s16(r2(U+4)))));
}
B608b07:{NFSU2_TR(0x608b07);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xaull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+8,u32(s32(s8(r1(U+4)))));
}
B608b0b:{NFSU2_TR(0x608b0b);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x89d040ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B608b12:{NFSU2_TR(0x608b12);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B608b15:{NFSU2_TR(0x608b15);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B608b18:{NFSU2_TR(0x608b18);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B608b1b:{NFSU2_TR(0x608b1b);
{goto L608b1f;}
}
B608b1d:L608b1d:{c.instructions+=1;NFSU2_TR(0x608b1d);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B608b1f:L608b1f:{c.instructions+=8;NFSU2_TR(0x608b1f);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B608b23:{NFSU2_TR(0x608b23);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B608b27:{NFSU2_TR(0x608b27);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B608b2a:{NFSU2_TR(0x608b2a);
u8 U[4];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B608b2e:{NFSU2_TR(0x608b2e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B608b31:{NFSU2_TR(0x608b31);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B608b33:{NFSU2_TR(0x608b33);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B608b37:{NFSU2_TR(0x608b37);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x1ull))));
}
B608b38:L608b38:{c.instructions+=7;NFSU2_TR(0x608b38);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B608b3c:{NFSU2_TR(0x608b3c);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B608b3f:{NFSU2_TR(0x608b3f);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B608b40:{NFSU2_TR(0x608b40);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4ull))));
}
B608b43:{NFSU2_TR(0x608b43);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+0)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B608b45:{NFSU2_TR(0x608b45);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B608b49:{NFSU2_TR(0x608b49);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x608ac1u);}goto L608ac1;}}
}
B608b4f:L608b4f:{c.instructions+=2;NFSU2_TR(0x608b4f);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+20))&u32(r4(R+20))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B608b51:{NFSU2_TR(0x608b51);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L608bcf;}}
}
B608b53:L608b53:{c.instructions+=3;NFSU2_TR(0x608b53);
__builtin_memmove((R+0),gp(0x89d060),1);
}
B608b58:{NFSU2_TR(0x608b58);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B608b5a:{NFSU2_TR(0x608b5a);
if(r1(R+518)){{goto L608b6e;}}
}
B608b5c:L608b5c:{c.instructions+=3;NFSU2_TR(0x608b5c);
u8 U[4];
w4(U+0,u32(0x5eeec0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B608b61:{NFSU2_TR(0x608b61);
u8 U[4];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B608b65:{NFSU2_TR(0x608b65);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x608b6aull));
TAIL_STATIC(0x43e650u,43e);
}
B608b6a:L608b6a:{c.instructions+=1;NFSU2_TR(0x608b6a);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B608b6e:L608b6e:{c.instructions+=3;NFSU2_TR(0x608b6e);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B608b70:{NFSU2_TR(0x608b70);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+20))&u32(r4(R+20))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B608b72:{NFSU2_TR(0x608b72);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L608bcf;}}
}
B608b74:L608b74:{c.instructions+=2;NFSU2_TR(0x608b74);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B608b78:{NFSU2_TR(0x608b78);
{goto L608b80;}
}
B608b80:L608b80:{c.instructions+=3;NFSU2_TR(0x608b80);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B608b81:{NFSU2_TR(0x608b81);
u8 U[4];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B608b85:{NFSU2_TR(0x608b85);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x608b8aull));
TAIL_STATIC(0x43be60u,43b);
}
B608b8a:L608b8a:{c.instructions+=7;NFSU2_TR(0x608b8a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B608b8d:{NFSU2_TR(0x608b8d);
u8 U[16];
w4(U+0,u32(u32(u32(0xbd0ull))+u32(r4(R+12))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+4),(U+12),4);
}
B608b94:{NFSU2_TR(0x608b94);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+4),(U+0),4);
}
B608b96:{NFSU2_TR(0x608b96);
__builtin_memmove((R+8),(R+28),4);
}
B608b98:{NFSU2_TR(0x608b98);
w4(R+28,u32(u32(r4(R+28))-u32(u32(0x1ull))));
}
B608b99:{NFSU2_TR(0x608b99);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B608b9b:{NFSU2_TR(0x608b9b);
if(r1(R+518)){{goto L608ba2;}}
}
B608b9d:L608b9d:{c.instructions+=2;NFSU2_TR(0x608b9d);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B608ba0:{NFSU2_TR(0x608ba0);
{goto L608ba4;}
}
B608ba2:L608ba2:{c.instructions+=1;NFSU2_TR(0x608ba2);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B608ba4:L608ba4:{c.instructions+=14;NFSU2_TR(0x608ba4);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B608ba6:{NFSU2_TR(0x608ba6);
__builtin_memmove((R+4),(R+518),1);
}
B608ba9:{NFSU2_TR(0x608ba9);
u8 U[5];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B608bad:{NFSU2_TR(0x608bad);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B608baf:{NFSU2_TR(0x608baf);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B608bb1:{NFSU2_TR(0x608bb1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+4),(U+0),1);
}
B608bb4:{NFSU2_TR(0x608bb4);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x6ull))));
}
B608bb7:{NFSU2_TR(0x608bb7);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B608bb8:{NFSU2_TR(0x608bb8);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B608bbc:{NFSU2_TR(0x608bbc);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B608bbd:{NFSU2_TR(0x608bbd);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B608bbe:{NFSU2_TR(0x608bbe);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B608bbf:{NFSU2_TR(0x608bbf);
__builtin_memmove((R+4),(R+12),4);
}
B608bc1:{NFSU2_TR(0x608bc1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x608bc6ull));
TAIL_STATIC(0x606cb0u,606);
}
B608bc6:L608bc6:{c.instructions+=3;NFSU2_TR(0x608bc6);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B608bc7:{NFSU2_TR(0x608bc7);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B608bc9:{NFSU2_TR(0x608bc9);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x608b80u);}goto L608b80;}}
}
B608bcb:L608bcb:{c.instructions+=1;NFSU2_TR(0x608bcb);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B608bcf:L608bcf:{c.instructions+=4;NFSU2_TR(0x608bcf);
u8 U[4];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B608bd3:{NFSU2_TR(0x608bd3);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B608bd5:{NFSU2_TR(0x608bd5);
u8 U[8];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B608bdd:{NFSU2_TR(0x608bdd);
if(r1(R+518)){{goto L608c58;}}
}
B608bdf:L608bdf:{c.instructions+=1;NFSU2_TR(0x608bdf);
}
B608be0:L608be0:{c.instructions+=6;NFSU2_TR(0x608be0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+0),(U+0),4);
}
B608be2:{NFSU2_TR(0x608be2);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B608be5:{NFSU2_TR(0x608be5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B608be7:{NFSU2_TR(0x608be7);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B608be8:{NFSU2_TR(0x608be8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B608beb:{NFSU2_TR(0x608beb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x608bf0ull));
TAIL_STATIC(0x575630u,575);
}
B608bf0:L608bf0:{c.instructions+=5;NFSU2_TR(0x608bf0);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B608bf4:{NFSU2_TR(0x608bf4);
u8 U[4];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B608bf8:{NFSU2_TR(0x608bf8);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B608bfb:{NFSU2_TR(0x608bfb);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B608bfd:{NFSU2_TR(0x608bfd);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x608be0u);}goto L608be0;}}
}
B608bff:L608bff:{c.instructions+=1;NFSU2_TR(0x608bff);
{goto L608c58;}
}
B608c01:L608c01:{c.instructions+=3;NFSU2_TR(0x608c01);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xbe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B608c07:{NFSU2_TR(0x608c07);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B608c09:{NFSU2_TR(0x608c09);
if(r1(R+518)){{goto L608c58;}}
}
B608c0b:L608c0b:{c.instructions+=4;NFSU2_TR(0x608c0b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B608c0e:{NFSU2_TR(0x608c0e);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B608c10:{NFSU2_TR(0x608c10);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B608c12:{NFSU2_TR(0x608c12);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L608c58;}}
}
B608c14:L608c14:{c.instructions+=2;NFSU2_TR(0x608c14);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xbd0ull))));
__builtin_memmove((R+28),(U+0),4);
}
B608c1a:{NFSU2_TR(0x608c1a);
__builtin_memmove((R+12),(R+12),4);
}
B608c20:L608c20:{c.instructions+=3;NFSU2_TR(0x608c20);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B608c22:{NFSU2_TR(0x608c22);
u8 U[10];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((U+6),(U+4),2);
w2(U+8,u16(u32(r2(U+6))-u32(u16(0x0ull))));
w1(R+518,u8((r2(U+8))==(u16(0x0ull))));
}
B608c27:{NFSU2_TR(0x608c27);
if(r1(R+518)){{goto L608c33;}}
}
B608c29:L608c29:{c.instructions+=3;NFSU2_TR(0x608c29);
__builtin_memmove((R+4),gp(0x89e7b0),4);
}
B608c2f:{NFSU2_TR(0x608c2f);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B608c31:{NFSU2_TR(0x608c31);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L608c4d;}}
}
B608c33:L608c33:{c.instructions+=3;NFSU2_TR(0x608c33);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x9ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+8,u32(s32(s8(r1(U+4)))));
}
B608c37:{NFSU2_TR(0x608c37);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xbe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+8))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B608c3d:{NFSU2_TR(0x608c3d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L608c4d;}}
}
B608c3f:L608c3f:{c.instructions+=6;NFSU2_TR(0x608c3f);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B608c41:{NFSU2_TR(0x608c41);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B608c43:{NFSU2_TR(0x608c43);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B608c45:{NFSU2_TR(0x608c45);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B608c46:{NFSU2_TR(0x608c46);
__builtin_memmove((R+4),(R+20),4);
}
B608c48:{NFSU2_TR(0x608c48);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x608c4dull));
TAIL_STATIC(0x606cb0u,606);
}
B608c4d:L608c4d:{c.instructions+=5;NFSU2_TR(0x608c4d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B608c50:{NFSU2_TR(0x608c50);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B608c51:{NFSU2_TR(0x608c51);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x4ull))));
}
B608c54:{NFSU2_TR(0x608c54);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B608c56:{NFSU2_TR(0x608c56);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x608c20u);}goto L608c20;}}
}
B608c58:L608c58:{c.instructions+=3;NFSU2_TR(0x608c58);
__builtin_memmove((R+0),gp(0x89e7d9),1);
}
B608c5d:{NFSU2_TR(0x608c5d);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B608c5f:{NFSU2_TR(0x608c5f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L608c6a;}}
}
B608c61:L608c61:{c.instructions+=3;NFSU2_TR(0x608c61);
__builtin_memmove((R+0),gp(0x890104),4);
}
B608c66:{NFSU2_TR(0x608c66);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B608c68:{NFSU2_TR(0x608c68);
if(r1(R+518)){{goto L608c6f;}}
}
B608c6a:L608c6a:{c.instructions+=1;NFSU2_TR(0x608c6a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x608c6full));
TAIL_STATIC(0x56ddd0u,56d);
}
B608c6f:L608c6f:{c.instructions+=3;NFSU2_TR(0x608c6f);
__builtin_memmove((R+0),gp(0x89e7b0),4);
}
B608c74:{NFSU2_TR(0x608c74);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B608c76:{NFSU2_TR(0x608c76);
if(r1(R+518)){{goto L608c7d;}}
}
B608c78:L608c78:{c.instructions+=2;NFSU2_TR(0x608c78);
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
B608c7b:{NFSU2_TR(0x608c7b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L608c8c;}}
}
B608c7d:L608c7d:{c.instructions+=3;NFSU2_TR(0x608c7d);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B608c81:{NFSU2_TR(0x608c81);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0xc40ull))));
}
B608c87:{NFSU2_TR(0x608c87);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x608c8cull));
TAIL_STATIC(0x42edf0u,42e);
}
B608c8c:L608c8c:{c.instructions+=9;NFSU2_TR(0x608c8c);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B608c90:{NFSU2_TR(0x608c90);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B608c91:{NFSU2_TR(0x608c91);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B608c98:{NFSU2_TR(0x608c98);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B608c99:{NFSU2_TR(0x608c99);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B608c9a:{NFSU2_TR(0x608c9a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B608c9b:{NFSU2_TR(0x608c9b);
__builtin_memmove((R+16),(R+20),4);
}
B608c9d:{NFSU2_TR(0x608c9d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B608c9e:{NFSU2_TR(0x608c9e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B608ca0:L608ca0:{c.instructions+=7;NFSU2_TR(0x608ca0);
u8 U[8];
__builtin_memmove((U+0),gp(0x89e7b0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B608ca7:{NFSU2_TR(0x608ca7);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B608ca8:{NFSU2_TR(0x608ca8);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B608ca9:{NFSU2_TR(0x608ca9);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B608caa:{NFSU2_TR(0x608caa);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B608cab:{NFSU2_TR(0x608cab);
__builtin_memmove((R+24),(R+4),4);
}
B608cad:{NFSU2_TR(0x608cad);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L608d1c;}}
}
B608caf:L608caf:{c.instructions+=3;NFSU2_TR(0x608caf);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xbecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B608cb5:{NFSU2_TR(0x608cb5);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B608cb7:{NFSU2_TR(0x608cb7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L608d1c;}}
}
B608cb9:L608cb9:{c.instructions+=3;NFSU2_TR(0x608cb9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B608cbc:{NFSU2_TR(0x608cbc);
u8 U[14];
__builtin_memmove((U+6),(R+12),4);
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
B608cbf:{NFSU2_TR(0x608cbf);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L608d6a;}}
}
B608cc5:L608cc5:{c.instructions+=2;NFSU2_TR(0x608cc5);
u8 U[12];
w4(U+0,u32(u32(u32(0xbccull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+20),(U+8),4);
}
B608ccc:{NFSU2_TR(0x608ccc);
__builtin_memmove((R+16),(R+16),4);
}
B608cd0:L608cd0:{c.instructions+=2;NFSU2_TR(0x608cd0);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(R+12),r4(U+8)));
w4(U+12,u32(u32(r4(R+12))-u32(r4(U+8))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B608cd3:{NFSU2_TR(0x608cd3);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L608cda;}}
}
B608cd5:L608cd5:{c.instructions+=2;NFSU2_TR(0x608cd5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+20))),4);
__builtin_memmove((R+28),(U+0),4);
}
B608cd8:{NFSU2_TR(0x608cd8);
{goto L608cdc;}
}
B608cda:L608cda:{c.instructions+=1;NFSU2_TR(0x608cda);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B608cdc:L608cdc:{c.instructions+=2;NFSU2_TR(0x608cdc);
u8 U[10];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((U+6),(U+4),2);
w2(U+8,u16(u32(r2(U+6))-u32(u16(0x0ull))));
w1(R+518,u8((r2(U+8))==(u16(0x0ull))));
}
B608ce1:{NFSU2_TR(0x608ce1);
if(r1(R+518)){{goto L608cec;}}
}
B608ce3:L608ce3:{c.instructions+=3;NFSU2_TR(0x608ce3);
__builtin_memmove((R+0),gp(0x89e7b0),4);
}
B608ce8:{NFSU2_TR(0x608ce8);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B608cea:{NFSU2_TR(0x608cea);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L608d0e;}}
}
B608cec:L608cec:{c.instructions+=11;NFSU2_TR(0x608cec);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B608cee:{NFSU2_TR(0x608cee);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B608cf1:{NFSU2_TR(0x608cf1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+0),(U+0),1);
}
B608cf4:{NFSU2_TR(0x608cf4);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xffffffffull))));
__builtin_memmove((R+4),(U+0),4);
}
B608cf7:{NFSU2_TR(0x608cf7);
u8 U[12];
w4(U+0,u32(u32(u32(0x1ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B608cfb:{NFSU2_TR(0x608cfb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B608cfc:{NFSU2_TR(0x608cfc);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B608cfe:{NFSU2_TR(0x608cfe);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B608cff:{NFSU2_TR(0x608cff);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B608d00:{NFSU2_TR(0x608d00);
__builtin_memmove((R+4),(R+24),4);
}
B608d02:{NFSU2_TR(0x608d02);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x608d07ull));
TAIL_STATIC(0x606cb0u,606);
}
B608d07:L608d07:{c.instructions+=3;NFSU2_TR(0x608d07);
w1(R+8,u8(0x6ull));
}
B608d09:{NFSU2_TR(0x608d09);
w1(R+8,u8(u32(r1(R+8))-u32(r1(R+12))));
}
B608d0b:{NFSU2_TR(0x608d0b);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x9ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B608d0e:L608d0e:{c.instructions+=4;NFSU2_TR(0x608d0e);
w4(R+12,u32(u32(r4(R+12))-u32(u32(0x1ull))));
}
B608d0f:{NFSU2_TR(0x608d0f);
w4(R+20,u32(u32(r4(R+20))-u32(u32(0x4ull))));
}
B608d12:{NFSU2_TR(0x608d12);
u8 U[14];
__builtin_memmove((U+6),(R+12),4);
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
B608d15:{NFSU2_TR(0x608d15);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x608cd0u);}goto L608cd0;}}
}
B608d17:L608d17:{c.instructions+=5;NFSU2_TR(0x608d17);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B608d18:{NFSU2_TR(0x608d18);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B608d19:{NFSU2_TR(0x608d19);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B608d1a:{NFSU2_TR(0x608d1a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B608d1b:{NFSU2_TR(0x608d1b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B608d1c:L608d1c:{c.instructions+=5;NFSU2_TR(0x608d1c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B608d1f:{NFSU2_TR(0x608d1f);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B608d21:{NFSU2_TR(0x608d21);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B608d23:{NFSU2_TR(0x608d23);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B608d25:{NFSU2_TR(0x608d25);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L608d57;}}
}
B608d27:L608d27:{c.instructions+=2;NFSU2_TR(0x608d27);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xbd0ull))));
__builtin_memmove((R+12),(U+0),4);
}
B608d2d:{NFSU2_TR(0x608d2d);
__builtin_memmove((R+4),(R+4),4);
}
B608d30:L608d30:{c.instructions+=3;NFSU2_TR(0x608d30);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+0),(U+0),4);
}
B608d32:{NFSU2_TR(0x608d32);
u8 U[10];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((U+6),(U+4),2);
w2(U+8,u16(u32(r2(U+6))-u32(r2(R+20))));
w1(R+518,u8((r2(U+8))==(u16(0x0ull))));
}
B608d36:{NFSU2_TR(0x608d36);
if(r1(R+518)){{goto L608d40;}}
}
B608d38:L608d38:{c.instructions+=2;NFSU2_TR(0x608d38);
u8 U[8];
__builtin_memmove((U+0),gp(0x89e7b0),4);
w4(U+4,u32(u32(r4(U+0))-u32(r4(R+20))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B608d3e:{NFSU2_TR(0x608d3e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L608d4c;}}
}
B608d40:L608d40:{c.instructions+=6;NFSU2_TR(0x608d40);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B608d42:{NFSU2_TR(0x608d42);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B608d43:{NFSU2_TR(0x608d43);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B608d44:{NFSU2_TR(0x608d44);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B608d45:{NFSU2_TR(0x608d45);
__builtin_memmove((R+4),(R+24),4);
}
B608d47:{NFSU2_TR(0x608d47);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x608d4cull));
TAIL_STATIC(0x606cb0u,606);
}
B608d4c:L608d4c:{c.instructions+=5;NFSU2_TR(0x608d4c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B608d4f:{NFSU2_TR(0x608d4f);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B608d50:{NFSU2_TR(0x608d50);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x4ull))));
}
B608d53:{NFSU2_TR(0x608d53);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+0)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B608d55:{NFSU2_TR(0x608d55);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x608d30u);}goto L608d30;}}
}
B608d57:L608d57:{c.instructions+=2;NFSU2_TR(0x608d57);
__builtin_memmove((R+4),(R+24),4);
}
B608d59:{NFSU2_TR(0x608d59);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x608d5eull));
TAIL_STATIC(0x5eec80u,5ee);
}
B608d5e:L608d5e:{c.instructions+=2;NFSU2_TR(0x608d5e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xbecull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B608d64:{NFSU2_TR(0x608d64);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xbf0ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B608d6a:L608d6a:{c.instructions+=5;NFSU2_TR(0x608d6a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B608d6b:{NFSU2_TR(0x608d6b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B608d6c:{NFSU2_TR(0x608d6c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B608d6d:{NFSU2_TR(0x608d6d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B608d6e:{NFSU2_TR(0x608d6e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B608d70:L608d70:{c.instructions+=7;NFSU2_TR(0x608d70);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B608d74:{NFSU2_TR(0x608d74);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B608d77:{NFSU2_TR(0x608d77);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B608d78:{NFSU2_TR(0x608d78);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B608d7b:{NFSU2_TR(0x608d7b);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B608d7d:{NFSU2_TR(0x608d7d);
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
B608d7f:{NFSU2_TR(0x608d7f);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L608db7;}}
}
B608d81:L608d81:{c.instructions+=2;NFSU2_TR(0x608d81);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B608d82:{NFSU2_TR(0x608d82);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xbd0ull))));
__builtin_memmove((R+24),(U+0),4);
}
B608d88:L608d88:{c.instructions+=2;NFSU2_TR(0x608d88);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(R+28))-u32(r4(U+4))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B608d8a:{NFSU2_TR(0x608d8a);
if(r1(R+518)){{goto L608d99;}}
}
B608d8c:L608d8c:{c.instructions+=4;NFSU2_TR(0x608d8c);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B608d8d:{NFSU2_TR(0x608d8d);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x4ull))));
}
B608d90:{NFSU2_TR(0x608d90);
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
B608d92:{NFSU2_TR(0x608d92);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x608d88u);}goto L608d88;}}
}
B608d94:L608d94:{c.instructions+=3;NFSU2_TR(0x608d94);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B608d95:{NFSU2_TR(0x608d95);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B608d96:{NFSU2_TR(0x608d96);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B608d99:L608d99:{c.instructions+=3;NFSU2_TR(0x608d99);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B608d9d:{NFSU2_TR(0x608d9d);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B608d9f:{NFSU2_TR(0x608d9f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L608da5;}}
}
B608da1:L608da1:{c.instructions+=1;NFSU2_TR(0x608da1);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xaull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+8,u32(s32(s8(r1(U+4)))));
}
B608da5:L608da5:{c.instructions+=7;NFSU2_TR(0x608da5);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B608da9:{NFSU2_TR(0x608da9);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B608daa:{NFSU2_TR(0x608daa);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B608dae:{NFSU2_TR(0x608dae);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B608daf:{NFSU2_TR(0x608daf);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B608db0:{NFSU2_TR(0x608db0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B608db1:{NFSU2_TR(0x608db1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x608db6ull));
TAIL_STATIC(0x606cb0u,606);
}
B608db6:L608db6:{c.instructions+=1;NFSU2_TR(0x608db6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B608db7:L608db7:{c.instructions+=2;NFSU2_TR(0x608db7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B608db8:{NFSU2_TR(0x608db8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B608dc0:L608dc0:{c.instructions+=15;NFSU2_TR(0x608dc0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x28ull))));
}
B608dc3:{NFSU2_TR(0x608dc3);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B608dc4:{NFSU2_TR(0x608dc4);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B608dc5:{NFSU2_TR(0x608dc5);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B608dc6:{NFSU2_TR(0x608dc6);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B608dca:{NFSU2_TR(0x608dca);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B608dcb:{NFSU2_TR(0x608dcb);
__builtin_memmove((R+28),(R+4),4);
}
B608dcd:{NFSU2_TR(0x608dcd);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B608dcf:{NFSU2_TR(0x608dcf);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B608dd3:{NFSU2_TR(0x608dd3);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B608dd5:{NFSU2_TR(0x608dd5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B608dd6:{NFSU2_TR(0x608dd6);
__builtin_memmove((R+4),(R+24),4);
}
B608dd8:{NFSU2_TR(0x608dd8);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B608ddc:{NFSU2_TR(0x608ddc);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B608de0:{NFSU2_TR(0x608de0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x608de5ull));
TAIL_STATIC(0x581d90u,581);
}
B608de5:L608de5:{c.instructions+=6;NFSU2_TR(0x608de5);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B608de7:{NFSU2_TR(0x608de7);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B608deb:{NFSU2_TR(0x608deb);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B608dec:{NFSU2_TR(0x608dec);
__builtin_memmove((R+4),(R+24),4);
}
B608dee:{NFSU2_TR(0x608dee);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B608df2:{NFSU2_TR(0x608df2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x608df7ull));
TAIL_STATIC(0x581d90u,581);
}
B608df7:L608df7:{c.instructions+=6;NFSU2_TR(0x608df7);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B608df9:{NFSU2_TR(0x608df9);
u8 U[4];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B608dfd:{NFSU2_TR(0x608dfd);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B608dfe:{NFSU2_TR(0x608dfe);
__builtin_memmove((R+4),(R+24),4);
}
B608e00:{NFSU2_TR(0x608e00);
u8 U[8];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B608e04:{NFSU2_TR(0x608e04);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x608e09ull));
TAIL_STATIC(0x581d90u,581);
}
B608e09:L608e09:{c.instructions+=5;NFSU2_TR(0x608e09);
u8 U[4];
w4(U+0,u32(0x20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B608e0b:{NFSU2_TR(0x608e0b);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B608e0f:{NFSU2_TR(0x608e0f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B608e10:{NFSU2_TR(0x608e10);
__builtin_memmove((R+4),(R+24),4);
}
B608e12:{NFSU2_TR(0x608e12);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x608e17ull));
TAIL_STATIC(0x584020u,584);
}
B608e17:L608e17:{c.instructions+=5;NFSU2_TR(0x608e17);
u8 U[4];
w4(U+0,u32(0x224ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B608e1c:{NFSU2_TR(0x608e1c);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x24ull))));
__builtin_memmove((R+4),(U+0),4);
}
B608e1f:{NFSU2_TR(0x608e1f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B608e20:{NFSU2_TR(0x608e20);
__builtin_memmove((R+4),(R+24),4);
}
B608e22:{NFSU2_TR(0x608e22);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x608e27ull));
TAIL_STATIC(0x584020u,584);
}
B608e27:L608e27:{c.instructions+=3;NFSU2_TR(0x608e27);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B608e29:{NFSU2_TR(0x608e29);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x24eull))));
__builtin_memmove((R+0),(U+0),4);
}
B608e2f:{NFSU2_TR(0x608e2f);
}
B608e30:L608e30:{c.instructions+=4;NFSU2_TR(0x608e30);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffffeull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(r2(U+4)));
}
B608e34:{NFSU2_TR(0x608e34);
u8 U[14];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),2);
w4(R+24,u32(r2(U+12)));
}
B608e39:{NFSU2_TR(0x608e39);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B608e3b:{NFSU2_TR(0x608e3b);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L608e3f;}}
}
B608e3d:L608e3d:{c.instructions+=1;NFSU2_TR(0x608e3d);
__builtin_memmove((R+8),(R+24),4);
}
B608e3f:L608e3f:{c.instructions+=5;NFSU2_TR(0x608e3f);
u8 U[14];
w4(U+0,u32(u32(u32(0x1aull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),2);
w4(R+24,u32(r2(U+12)));
}
B608e44:{NFSU2_TR(0x608e44);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffffeull))));
__builtin_memmove((U+4),(R+8),2);
s2(u32(r4(U+0)),r2(U+4));
}
B608e48:{NFSU2_TR(0x608e48);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+0))),2);
w4(R+8,u32(r2(U+0)));
}
B608e4b:{NFSU2_TR(0x608e4b);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B608e4d:{NFSU2_TR(0x608e4d);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L608e51;}}
}
B608e4f:L608e4f:{c.instructions+=1;NFSU2_TR(0x608e4f);
__builtin_memmove((R+8),(R+24),4);
}
B608e51:L608e51:{c.instructions+=5;NFSU2_TR(0x608e51);
u8 U[14];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),2);
w4(R+24,u32(r2(U+12)));
}
B608e56:{NFSU2_TR(0x608e56);
u8 U[2];
__builtin_memmove((U+0),(R+8),2);
s2(u32(r4(R+0)),r2(U+0));
}
B608e59:{NFSU2_TR(0x608e59);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(r2(U+4)));
}
B608e5d:{NFSU2_TR(0x608e5d);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B608e5f:{NFSU2_TR(0x608e5f);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L608e63;}}
}
B608e61:L608e61:{c.instructions+=1;NFSU2_TR(0x608e61);
__builtin_memmove((R+8),(R+24),4);
}
B608e63:L608e63:{c.instructions+=5;NFSU2_TR(0x608e63);
u8 U[14];
w4(U+0,u32(u32(u32(0x1eull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),2);
w4(R+24,u32(r2(U+12)));
}
B608e68:{NFSU2_TR(0x608e68);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2ull))));
__builtin_memmove((U+4),(R+8),2);
s2(u32(r4(U+0)),r2(U+4));
}
B608e6c:{NFSU2_TR(0x608e6c);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(r2(U+4)));
}
B608e70:{NFSU2_TR(0x608e70);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B608e72:{NFSU2_TR(0x608e72);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L608e76;}}
}
B608e74:L608e74:{c.instructions+=1;NFSU2_TR(0x608e74);
__builtin_memmove((R+8),(R+24),4);
}
B608e76:L608e76:{c.instructions+=5;NFSU2_TR(0x608e76);
u8 U[14];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),2);
w4(R+24,u32(r2(U+12)));
}
B608e7b:{NFSU2_TR(0x608e7b);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),2);
s2(u32(r4(U+0)),r2(U+4));
}
B608e7f:{NFSU2_TR(0x608e7f);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(r2(U+4)));
}
B608e83:{NFSU2_TR(0x608e83);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B608e85:{NFSU2_TR(0x608e85);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L608e89;}}
}
B608e87:L608e87:{c.instructions+=1;NFSU2_TR(0x608e87);
__builtin_memmove((R+8),(R+24),4);
}
B608e89:L608e89:{c.instructions+=5;NFSU2_TR(0x608e89);
u8 U[14];
w4(U+0,u32(u32(u32(0x22ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),2);
w4(R+24,u32(r2(U+12)));
}
B608e8e:{NFSU2_TR(0x608e8e);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x6ull))));
__builtin_memmove((U+4),(R+8),2);
s2(u32(r4(U+0)),r2(U+4));
}
B608e92:{NFSU2_TR(0x608e92);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(r2(U+4)));
}
B608e96:{NFSU2_TR(0x608e96);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B608e98:{NFSU2_TR(0x608e98);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L608e9c;}}
}
B608e9a:L608e9a:{c.instructions+=1;NFSU2_TR(0x608e9a);
__builtin_memmove((R+8),(R+24),4);
}
B608e9c:L608e9c:{c.instructions+=5;NFSU2_TR(0x608e9c);
u8 U[14];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),2);
w4(R+24,u32(r2(U+12)));
}
B608ea1:{NFSU2_TR(0x608ea1);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+8),2);
s2(u32(r4(U+0)),r2(U+4));
}
B608ea5:{NFSU2_TR(0x608ea5);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xaull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(r2(U+4)));
}
B608ea9:{NFSU2_TR(0x608ea9);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B608eab:{NFSU2_TR(0x608eab);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L608eaf;}}
}
B608ead:L608ead:{c.instructions+=1;NFSU2_TR(0x608ead);
__builtin_memmove((R+8),(R+24),4);
}
B608eaf:L608eaf:{c.instructions+=5;NFSU2_TR(0x608eaf);
u8 U[14];
w4(U+0,u32(u32(u32(0x26ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),2);
w4(R+24,u32(r2(U+12)));
}
B608eb4:{NFSU2_TR(0x608eb4);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xaull))));
__builtin_memmove((U+4),(R+8),2);
s2(u32(r4(U+0)),r2(U+4));
}
B608eb8:{NFSU2_TR(0x608eb8);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(r2(U+4)));
}
B608ebc:{NFSU2_TR(0x608ebc);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B608ebe:{NFSU2_TR(0x608ebe);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L608ec2;}}
}
B608ec0:L608ec0:{c.instructions+=1;NFSU2_TR(0x608ec0);
__builtin_memmove((R+8),(R+24),4);
}
B608ec2:L608ec2:{c.instructions+=5;NFSU2_TR(0x608ec2);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+8),2);
s2(u32(r4(U+0)),r2(U+4));
}
B608ec6:{NFSU2_TR(0x608ec6);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x8ull))));
}
B608ec9:{NFSU2_TR(0x608ec9);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
}
B608ecc:{NFSU2_TR(0x608ecc);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x10ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x10ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B608ecf:{NFSU2_TR(0x608ecf);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x608e30u);}goto L608e30;}}
}
B608ed5:L608ed5:{c.instructions+=2;NFSU2_TR(0x608ed5);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B608ed8:{NFSU2_TR(0x608ed8);
if(r1(R+518)){{goto L608ee0;}}
}
B608eda:L608eda:{c.instructions+=1;NFSU2_TR(0x608eda);
u8 U[4];
w4(U+0,u32(0x3ull));
s4(u32(r4(R+28)),r4(U+0));
}
B608ee0:L608ee0:{c.instructions+=4;NFSU2_TR(0x608ee0);
__builtin_memmove((R+20),gp(0x890118),4);
}
B608ee6:{NFSU2_TR(0x608ee6);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+20))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B608ee8:{NFSU2_TR(0x608ee8);
u8 U[5];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+12),(U+4),1);
}
B608eec:{NFSU2_TR(0x608eec);
if(r1(R+518)){{goto L608f8c;}}
}
B608ef2:L608ef2:{c.instructions+=3;NFSU2_TR(0x608ef2);
__builtin_memmove((R+4),gp(0x890080),4);
}
B608ef8:{NFSU2_TR(0x608ef8);
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
B608efa:{NFSU2_TR(0x608efa);
if(r1(R+518)){{goto L608f8c;}}
}
B608f00:L608f00:{c.instructions+=2;NFSU2_TR(0x608f00);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+24),(U+0),4);
}
B608f02:{NFSU2_TR(0x608f02);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x608f07ull));
TAIL_STATIC(0x502fd0u,502);
}
B608f07:L608f07:{c.instructions+=2;NFSU2_TR(0x608f07);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B608f09:{NFSU2_TR(0x608f09);
if(r1(R+518)){{goto L608f8c;}}
}
B608f0f:L608f0f:{c.instructions+=1;NFSU2_TR(0x608f0f);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w2(R+4,u16(s16(s8(r1(U+4)))));
}
B608f14:L608f14:{c.instructions+=2;NFSU2_TR(0x608f14);
u8 U[10];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xaull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((U+6),(U+4),2);
w2(U+8,u16(u32(r2(U+6))-u32(r2(R+4))));
w1(R+518,u8((r2(U+8))==(u16(0x0ull))));
}
B608f18:{NFSU2_TR(0x608f18);
if(r1(R+518)){{goto L608f22;}}
}
B608f1a:L608f1a:{c.instructions+=3;NFSU2_TR(0x608f1a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+24),(U+0),4);
}
B608f1c:{NFSU2_TR(0x608f1c);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B608f1e:{NFSU2_TR(0x608f1e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x608f14u);}goto L608f14;}}
}
B608f20:L608f20:{c.instructions+=1;NFSU2_TR(0x608f20);
{goto L608f8c;}
}
B608f22:L608f22:{c.instructions+=2;NFSU2_TR(0x608f22);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B608f24:{NFSU2_TR(0x608f24);
if(r1(R+518)){{goto L608f8c;}}
}
B608f26:L608f26:{c.instructions+=3;NFSU2_TR(0x608f26);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B608f29:{NFSU2_TR(0x608f29);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B608f2b:{NFSU2_TR(0x608f2b);
if(r1(R+518)){{goto L608f8c;}}
}
B608f2d:L608f2d:{c.instructions+=2;NFSU2_TR(0x608f2d);
u8 U[10];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((U+6),(U+4),2);
w2(U+8,u16(u32(r2(U+6))-u32(u16(0x0ull))));
w1(R+518,u8((r2(U+8))==(u16(0x0ull))));
}
B608f32:{NFSU2_TR(0x608f32);
if(r1(R+518)){{goto L608f3d;}}
}
B608f34:L608f34:{c.instructions+=3;NFSU2_TR(0x608f34);
__builtin_memmove((R+0),gp(0x89e7b0),4);
}
B608f39:{NFSU2_TR(0x608f39);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B608f3b:{NFSU2_TR(0x608f3b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L608f8c;}}
}
B608f3d:L608f3d:{c.instructions+=11;NFSU2_TR(0x608f3d);
u8 U[5];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B608f41:{NFSU2_TR(0x608f41);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B608f44:{NFSU2_TR(0x608f44);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B608f46:{NFSU2_TR(0x608f46);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B608f48:{NFSU2_TR(0x608f48);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B608f4b:{NFSU2_TR(0x608f4b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+8),(U+0),1);
}
B608f4e:{NFSU2_TR(0x608f4e);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B608f50:{NFSU2_TR(0x608f50);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B608f52:{NFSU2_TR(0x608f52);
w4(R+28,u32(r1(R+12)));
}
B608f55:{NFSU2_TR(0x608f55);
u8 U[5];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B608f59:{NFSU2_TR(0x608f59);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L608f88;}}
}
B608f5b:L608f5b:{c.instructions+=1;NFSU2_TR(0x608f5b);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xbd0ull))));
__builtin_memmove((R+8),(U+0),4);
}
B608f61:L608f61:{c.instructions+=2;NFSU2_TR(0x608f61);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(R+24))-u32(r4(U+4))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B608f63:{NFSU2_TR(0x608f63);
if(r1(R+518)){{goto L608f6f;}}
}
B608f65:L608f65:{c.instructions+=4;NFSU2_TR(0x608f65);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B608f66:{NFSU2_TR(0x608f66);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x4ull))));
}
B608f69:{NFSU2_TR(0x608f69);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B608f6b:{NFSU2_TR(0x608f6b);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x608f61u);}goto L608f61;}}
}
B608f6d:L608f6d:{c.instructions+=1;NFSU2_TR(0x608f6d);
{goto L608f88;}
}
B608f6f:L608f6f:{c.instructions+=8;NFSU2_TR(0x608f6f);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xaull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(s32(s8(r1(U+4)))));
}
B608f73:{NFSU2_TR(0x608f73);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B608f77:{NFSU2_TR(0x608f77);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B608f78:{NFSU2_TR(0x608f78);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B608f79:{NFSU2_TR(0x608f79);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B608f7a:{NFSU2_TR(0x608f7a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B608f7b:{NFSU2_TR(0x608f7b);
__builtin_memmove((R+4),(R+20),4);
}
B608f7d:{NFSU2_TR(0x608f7d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x608f82ull));
TAIL_STATIC(0x606cb0u,606);
}
B608f82:L608f82:{c.instructions+=1;NFSU2_TR(0x608f82);
__builtin_memmove((R+20),gp(0x890118),4);
}
B608f88:L608f88:{c.instructions+=1;NFSU2_TR(0x608f88);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B608f8c:L608f8c:{c.instructions+=4;NFSU2_TR(0x608f8c);
__builtin_memmove((R+0),gp(0x850098),1);
}
B608f91:{NFSU2_TR(0x608f91);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B608f93:{NFSU2_TR(0x608f93);
__builtin_memmove((R+4),gp(0x864fac),4);
}
B608f99:{NFSU2_TR(0x608f99);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L608fa3;}}
}
B608f9b:L608f9b:{c.instructions+=2;NFSU2_TR(0x608f9b);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B608f9d:{NFSU2_TR(0x608f9d);
if(r1(R+518)){TAIL_STATIC(0x609040u,609);}
}
B608fa3:L608fa3:{c.instructions+=3;NFSU2_TR(0x608fa3);
__builtin_memmove((R+8),gp(0x89d061),1);
}
B608fa9:{NFSU2_TR(0x608fa9);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(r1(R+8))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B608fab:{NFSU2_TR(0x608fab);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x609040u,609);}
}
B608fb1:L608fb1:{c.instructions+=3;NFSU2_TR(0x608fb1);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x248ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B608fb7:{NFSU2_TR(0x608fb7);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B608fb9:{NFSU2_TR(0x608fb9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L608fe0;}}
}
B608fbb:L608fbb:{c.instructions+=2;NFSU2_TR(0x608fbb);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B608fbd:{NFSU2_TR(0x608fbd);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L608fc3;}}
}
B608fbf:L608fbf:{c.instructions+=2;NFSU2_TR(0x608fbf);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B608fc1:{NFSU2_TR(0x608fc1);
if(r1(R+518)){{goto L608fe0;}}
}
B608fc3:L608fc3:{c.instructions+=4;NFSU2_TR(0x608fc3);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B608fc5:{NFSU2_TR(0x608fc5);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x266ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+0),(U+4),2);
}
B608fcc:{NFSU2_TR(0x608fcc);
w1(R+512,u8((r2(R+0))<(u16(0xfe01ull))));
}
B608fd0:{NFSU2_TR(0x608fd0);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L608fe0;}}
}
B608fd2:L608fd2:{c.instructions+=3;NFSU2_TR(0x608fd2);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B608fd3:{NFSU2_TR(0x608fd3);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x266ull))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B608fda:{NFSU2_TR(0x608fda);
__builtin_memmove((R+20),gp(0x890118),4);
}
B608fe0:L608fe0:{c.instructions+=2;NFSU2_TR(0x608fe0);
u8 U[2];
__builtin_memmove((U+0),(R+12),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x1ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B608fe3:{NFSU2_TR(0x608fe3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x609040u,609);}
}
B608fe5:L608fe5:{c.instructions+=3;NFSU2_TR(0x608fe5);
__builtin_memmove((R+12),gp(0x89e7d9),1);
}
B608feb:{NFSU2_TR(0x608feb);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(r1(R+12))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B608fed:{NFSU2_TR(0x608fed);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x609057u,609);}
}
B608fef:L608fef:{c.instructions+=3;NFSU2_TR(0x608fef);
__builtin_memmove((R+0),gp(0x890104),4);
}
B608ff4:{NFSU2_TR(0x608ff4);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B608ff6:{NFSU2_TR(0x608ff6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x609057u,609);}
}
B608ff8:L608ff8:{c.instructions+=3;NFSU2_TR(0x608ff8);
__builtin_memmove((R+0),gp(0x89e7d8),1);
}
B608ffd:{NFSU2_TR(0x608ffd);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B608fff:{NFSU2_TR(0x608fff);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x6090e3u,609);}
TAIL_STATIC(0x609005u,609);
}
XIT:NFSU2_TR_EXIT(0x608,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
