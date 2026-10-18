#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_703(u8* __restrict R,Cpu& c);
u32 body_706(u8* __restrict R,Cpu& c);
u32 body_708(u8* __restrict R,Cpu& c);
u32 body_70d(u8* __restrict R,Cpu& c);
u32 body_70e(u8* __restrict R,Cpu& c);
u32 body_70f(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x707,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x707,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_707(u8* __restrict R,Cpu& c);
u32 page_707(Cpu& c){return body_707(c.regs.data(),c);}
__attribute__((noinline)) u32 body_707(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x707001:goto L707001;
case 0x707002:c.instructions+=2;goto B707002;
case 0x707005:c.instructions+=1;goto B707005;
case 0x707007:goto L707007;
case 0x70700d:c.instructions+=3;goto B70700d;
case 0x70700e:c.instructions+=2;goto B70700e;
case 0x70700f:c.instructions+=1;goto B70700f;
case 0x707014:goto L707014;
case 0x707015:c.instructions+=2;goto B707015;
case 0x707016:c.instructions+=1;goto B707016;
case 0x707018:goto L707018;
case 0x70701a:goto L70701a;
case 0x707022:c.instructions+=4;goto B707022;
case 0x707023:c.instructions+=3;goto B707023;
case 0x707029:c.instructions+=2;goto B707029;
case 0x70702a:c.instructions+=1;goto B70702a;
case 0x70702f:goto L70702f;
case 0x707031:c.instructions+=3;goto B707031;
case 0x707032:c.instructions+=2;goto B707032;
case 0x707033:c.instructions+=1;goto B707033;
case 0x707035:goto L707035;
case 0x70703b:c.instructions+=3;goto B70703b;
case 0x70703d:c.instructions+=2;goto B70703d;
case 0x70703e:c.instructions+=1;goto B70703e;
case 0x707043:goto L707043;
case 0x707045:c.instructions+=6;goto B707045;
case 0x707046:c.instructions+=5;goto B707046;
case 0x707047:c.instructions+=4;goto B707047;
case 0x70704a:c.instructions+=3;goto B70704a;
case 0x70704c:c.instructions+=2;goto B70704c;
case 0x70704f:c.instructions+=1;goto B70704f;
case 0x707056:goto L707056;
case 0x707057:c.instructions+=2;goto B707057;
case 0x70705a:c.instructions+=1;goto B70705a;
case 0x70705c:goto L70705c;
case 0x70705f:c.instructions+=2;goto B70705f;
case 0x707062:c.instructions+=1;goto B707062;
case 0x707064:goto L707064;
case 0x707068:c.instructions+=1;goto B707068;
case 0x70706d:goto L70706d;
case 0x707070:c.instructions+=2;goto B707070;
case 0x707073:c.instructions+=1;goto B707073;
case 0x70707a:goto L70707a;
case 0x70707c:c.instructions+=1;goto B70707c;
case 0x70707f:goto L70707f;
case 0x707081:goto L707081;
case 0x707084:c.instructions+=5;goto B707084;
case 0x707088:c.instructions+=4;goto B707088;
case 0x707089:c.instructions+=3;goto B707089;
case 0x70708f:c.instructions+=2;goto B70708f;
case 0x707090:c.instructions+=1;goto B707090;
case 0x707095:goto L707095;
case 0x707097:c.instructions+=3;goto B707097;
case 0x707098:c.instructions+=2;goto B707098;
case 0x707099:c.instructions+=1;goto B707099;
case 0x70709b:goto L70709b;
case 0x7070a1:c.instructions+=3;goto B7070a1;
case 0x7070a3:c.instructions+=2;goto B7070a3;
case 0x7070a4:c.instructions+=1;goto B7070a4;
case 0x7070a9:goto L7070a9;
case 0x7070aa:c.instructions+=6;goto B7070aa;
case 0x7070ac:c.instructions+=5;goto B7070ac;
case 0x7070ad:c.instructions+=4;goto B7070ad;
case 0x7070b0:c.instructions+=3;goto B7070b0;
case 0x7070b2:c.instructions+=2;goto B7070b2;
case 0x7070b6:c.instructions+=1;goto B7070b6;
case 0x7070b8:goto L7070b8;
case 0x7070bc:c.instructions+=1;goto B7070bc;
case 0x7070be:goto L7070be;
case 0x7070c2:goto L7070c2;
case 0x7070c5:c.instructions+=4;goto B7070c5;
case 0x7070c7:c.instructions+=3;goto B7070c7;
case 0x7070ca:c.instructions+=2;goto B7070ca;
case 0x7070cc:c.instructions+=1;goto B7070cc;
case 0x7070d3:goto L7070d3;
case 0x7070d4:c.instructions+=2;goto B7070d4;
case 0x7070d7:c.instructions+=1;goto B7070d7;
case 0x7070d9:goto L7070d9;
case 0x7070dd:c.instructions+=3;goto B7070dd;
case 0x7070de:c.instructions+=2;goto B7070de;
case 0x7070e1:c.instructions+=1;goto B7070e1;
case 0x7070e3:goto L7070e3;
case 0x7070e7:c.instructions+=3;goto B7070e7;
case 0x7070ea:c.instructions+=2;goto B7070ea;
case 0x7070ed:c.instructions+=1;goto B7070ed;
case 0x7070ef:goto L7070ef;
case 0x7070f3:c.instructions+=2;goto B7070f3;
case 0x7070f8:c.instructions+=1;goto B7070f8;
case 0x7070fe:goto L7070fe;
case 0x7070ff:c.instructions+=1;goto B7070ff;
case 0x707104:goto L707104;
case 0x707105:c.instructions+=5;goto B707105;
case 0x707106:c.instructions+=4;goto B707106;
case 0x707107:c.instructions+=3;goto B707107;
case 0x707108:c.instructions+=2;goto B707108;
case 0x707109:c.instructions+=1;goto B707109;
case 0x70710a:goto L70710a;
case 0x70710b:c.instructions+=41;goto B70710b;
case 0x70710d:c.instructions+=40;goto B70710d;
case 0x707110:c.instructions+=39;goto B707110;
case 0x707111:c.instructions+=38;goto B707111;
case 0x707113:c.instructions+=37;goto B707113;
case 0x707119:c.instructions+=36;goto B707119;
case 0x70711a:c.instructions+=35;goto B70711a;
case 0x70711b:c.instructions+=34;goto B70711b;
case 0x70711c:c.instructions+=33;goto B70711c;
case 0x70711d:c.instructions+=32;goto B70711d;
case 0x70711f:c.instructions+=31;goto B70711f;
case 0x707125:c.instructions+=30;goto B707125;
case 0x707126:c.instructions+=29;goto B707126;
case 0x707127:c.instructions+=28;goto B707127;
case 0x707128:c.instructions+=27;goto B707128;
case 0x707129:c.instructions+=26;goto B707129;
case 0x70712b:c.instructions+=25;goto B70712b;
case 0x707131:c.instructions+=24;goto B707131;
case 0x707132:c.instructions+=23;goto B707132;
case 0x707133:c.instructions+=22;goto B707133;
case 0x707134:c.instructions+=21;goto B707134;
case 0x707135:c.instructions+=20;goto B707135;
case 0x707137:c.instructions+=19;goto B707137;
case 0x70713d:c.instructions+=18;goto B70713d;
case 0x70713e:c.instructions+=17;goto B70713e;
case 0x70713f:c.instructions+=16;goto B70713f;
case 0x707140:c.instructions+=15;goto B707140;
case 0x707141:c.instructions+=14;goto B707141;
case 0x707144:c.instructions+=13;goto B707144;
case 0x707146:c.instructions+=12;goto B707146;
case 0x70714c:c.instructions+=11;goto B70714c;
case 0x707152:c.instructions+=10;goto B707152;
case 0x707158:c.instructions+=9;goto B707158;
case 0x70715e:c.instructions+=8;goto B70715e;
case 0x70715f:c.instructions+=7;goto B70715f;
case 0x707166:c.instructions+=6;goto B707166;
case 0x70716d:c.instructions+=5;goto B70716d;
case 0x707174:c.instructions+=4;goto B707174;
case 0x70717b:c.instructions+=3;goto B70717b;
case 0x70717c:c.instructions+=2;goto B70717c;
case 0x70717d:c.instructions+=1;goto B70717d;
case 0x70717e:goto L70717e;
case 0x70717f:c.instructions+=12;goto B70717f;
case 0x707181:c.instructions+=11;goto B707181;
case 0x707184:c.instructions+=10;goto B707184;
case 0x70718a:c.instructions+=9;goto B70718a;
case 0x70718b:c.instructions+=8;goto B70718b;
case 0x70718c:c.instructions+=7;goto B70718c;
case 0x70718d:c.instructions+=6;goto B70718d;
case 0x70718f:c.instructions+=5;goto B70718f;
case 0x707190:c.instructions+=4;goto B707190;
case 0x707192:c.instructions+=3;goto B707192;
case 0x707194:c.instructions+=2;goto B707194;
case 0x707196:c.instructions+=1;goto B707196;
case 0x707198:goto L707198;
case 0x70719a:goto L70719a;
case 0x7071a0:c.instructions+=13;goto B7071a0;
case 0x7071a5:c.instructions+=12;goto B7071a5;
case 0x7071ab:c.instructions+=11;goto B7071ab;
case 0x7071b2:c.instructions+=10;goto B7071b2;
case 0x7071b8:c.instructions+=9;goto B7071b8;
case 0x7071bd:c.instructions+=8;goto B7071bd;
case 0x7071c3:c.instructions+=7;goto B7071c3;
case 0x7071c6:c.instructions+=6;goto B7071c6;
case 0x7071cc:c.instructions+=5;goto B7071cc;
case 0x7071cd:c.instructions+=4;goto B7071cd;
case 0x7071cf:c.instructions+=3;goto B7071cf;
case 0x7071d2:c.instructions+=2;goto B7071d2;
case 0x7071d4:c.instructions+=1;goto B7071d4;
case 0x7071d6:goto L7071d6;
case 0x7071dc:c.instructions+=4;goto B7071dc;
case 0x7071de:c.instructions+=3;goto B7071de;
case 0x7071e0:c.instructions+=2;goto B7071e0;
case 0x7071e2:c.instructions+=1;goto B7071e2;
case 0x7071e4:goto L7071e4;
case 0x7071e6:goto L7071e6;
case 0x7071ec:c.instructions+=22;goto B7071ec;
case 0x7071f1:c.instructions+=21;goto B7071f1;
case 0x7071f7:c.instructions+=20;goto B7071f7;
case 0x7071fe:c.instructions+=19;goto B7071fe;
case 0x707204:c.instructions+=18;goto B707204;
case 0x707207:c.instructions+=17;goto B707207;
case 0x70720d:c.instructions+=16;goto B70720d;
case 0x707212:c.instructions+=15;goto B707212;
case 0x707218:c.instructions+=14;goto B707218;
case 0x70721d:c.instructions+=13;goto B70721d;
case 0x707223:c.instructions+=12;goto B707223;
case 0x70722a:c.instructions+=11;goto B70722a;
case 0x707230:c.instructions+=10;goto B707230;
case 0x707233:c.instructions+=9;goto B707233;
case 0x707239:c.instructions+=8;goto B707239;
case 0x70723e:c.instructions+=7;goto B70723e;
case 0x707244:c.instructions+=6;goto B707244;
case 0x707246:c.instructions+=5;goto B707246;
case 0x707247:c.instructions+=4;goto B707247;
case 0x707249:c.instructions+=3;goto B707249;
case 0x70724c:c.instructions+=2;goto B70724c;
case 0x70724e:c.instructions+=1;goto B70724e;
case 0x707250:goto L707250;
case 0x707257:c.instructions+=1;goto B707257;
case 0x707259:goto L707259;
case 0x70725f:c.instructions+=9;goto B70725f;
case 0x707261:c.instructions+=8;goto B707261;
case 0x707264:c.instructions+=7;goto B707264;
case 0x707266:c.instructions+=6;goto B707266;
case 0x70726a:c.instructions+=5;goto B70726a;
case 0x707270:c.instructions+=4;goto B707270;
case 0x707272:c.instructions+=3;goto B707272;
case 0x707275:c.instructions+=2;goto B707275;
case 0x707277:c.instructions+=1;goto B707277;
case 0x70727b:goto L70727b;
case 0x70727d:c.instructions+=8;goto B70727d;
case 0x70727e:c.instructions+=7;goto B70727e;
case 0x70727f:c.instructions+=6;goto B70727f;
case 0x707280:c.instructions+=5;goto B707280;
case 0x707287:c.instructions+=4;goto B707287;
case 0x707290:c.instructions+=3;goto B707290;
case 0x707299:c.instructions+=2;goto B707299;
case 0x70729e:c.instructions+=1;goto B70729e;
case 0x70729f:goto L70729f;
case 0x7072a3:c.instructions+=6;goto B7072a3;
case 0x7072a6:c.instructions+=5;goto B7072a6;
case 0x7072aa:c.instructions+=4;goto B7072aa;
case 0x7072ab:c.instructions+=3;goto B7072ab;
case 0x7072ac:c.instructions+=2;goto B7072ac;
case 0x7072ad:c.instructions+=1;goto B7072ad;
case 0x7072af:goto L7072af;
case 0x7072b0:c.instructions+=1;goto B7072b0;
case 0x7072b1:goto L7072b1;
case 0x7072b2:c.instructions+=17;goto B7072b2;
case 0x7072b4:c.instructions+=16;goto B7072b4;
case 0x7072b7:c.instructions+=15;goto B7072b7;
case 0x7072ba:c.instructions+=14;goto B7072ba;
case 0x7072bd:c.instructions+=13;goto B7072bd;
case 0x7072be:c.instructions+=12;goto B7072be;
case 0x7072c2:c.instructions+=11;goto B7072c2;
case 0x7072c5:c.instructions+=10;goto B7072c5;
case 0x7072c8:c.instructions+=9;goto B7072c8;
case 0x7072cb:c.instructions+=8;goto B7072cb;
case 0x7072cf:c.instructions+=7;goto B7072cf;
case 0x7072d3:c.instructions+=6;goto B7072d3;
case 0x7072d6:c.instructions+=5;goto B7072d6;
case 0x7072de:c.instructions+=4;goto B7072de;
case 0x7072e2:c.instructions+=3;goto B7072e2;
case 0x7072e3:c.instructions+=2;goto B7072e3;
case 0x7072e4:c.instructions+=1;goto B7072e4;
case 0x7072e5:goto L7072e5;
case 0x7072e6:c.instructions+=17;goto B7072e6;
case 0x7072e8:c.instructions+=16;goto B7072e8;
case 0x7072eb:c.instructions+=15;goto B7072eb;
case 0x7072ee:c.instructions+=14;goto B7072ee;
case 0x7072f1:c.instructions+=13;goto B7072f1;
case 0x7072f2:c.instructions+=12;goto B7072f2;
case 0x7072f6:c.instructions+=11;goto B7072f6;
case 0x7072f9:c.instructions+=10;goto B7072f9;
case 0x7072fc:c.instructions+=9;goto B7072fc;
case 0x7072ff:c.instructions+=8;goto B7072ff;
case 0x707303:c.instructions+=7;goto B707303;
case 0x707307:c.instructions+=6;goto B707307;
case 0x70730a:c.instructions+=5;goto B70730a;
case 0x707312:c.instructions+=4;goto B707312;
case 0x707316:c.instructions+=3;goto B707316;
case 0x707317:c.instructions+=2;goto B707317;
case 0x707318:c.instructions+=1;goto B707318;
case 0x707319:goto L707319;
case 0x70731a:c.instructions+=16;goto B70731a;
case 0x70731c:c.instructions+=15;goto B70731c;
case 0x70731f:c.instructions+=14;goto B70731f;
case 0x707322:c.instructions+=13;goto B707322;
case 0x707324:c.instructions+=12;goto B707324;
case 0x70732a:c.instructions+=11;goto B70732a;
case 0x70732b:c.instructions+=10;goto B70732b;
case 0x70732e:c.instructions+=9;goto B70732e;
case 0x707335:c.instructions+=8;goto B707335;
case 0x70733c:c.instructions+=7;goto B70733c;
case 0x70733f:c.instructions+=6;goto B70733f;
case 0x707345:c.instructions+=5;goto B707345;
case 0x70734b:c.instructions+=4;goto B70734b;
case 0x70734c:c.instructions+=3;goto B70734c;
case 0x70734d:c.instructions+=2;goto B70734d;
case 0x707350:c.instructions+=1;goto B707350;
case 0x707352:goto L707352;
case 0x707359:c.instructions+=2;goto B707359;
case 0x70735f:c.instructions+=1;goto B70735f;
case 0x707361:goto L707361;
case 0x707367:goto L707367;
case 0x707369:c.instructions+=16;goto B707369;
case 0x70736c:c.instructions+=15;goto B70736c;
case 0x707373:c.instructions+=14;goto B707373;
case 0x707376:c.instructions+=13;goto B707376;
case 0x707379:c.instructions+=12;goto B707379;
case 0x70737c:c.instructions+=11;goto B70737c;
case 0x70737f:c.instructions+=10;goto B70737f;
case 0x707381:c.instructions+=9;goto B707381;
case 0x707384:c.instructions+=8;goto B707384;
case 0x707387:c.instructions+=7;goto B707387;
case 0x707389:c.instructions+=6;goto B707389;
case 0x70738c:c.instructions+=5;goto B70738c;
case 0x707393:c.instructions+=4;goto B707393;
case 0x707396:c.instructions+=3;goto B707396;
case 0x707397:c.instructions+=2;goto B707397;
case 0x707398:c.instructions+=1;goto B707398;
case 0x70739d:goto L70739d;
case 0x70739e:c.instructions+=4;goto B70739e;
case 0x7073a0:c.instructions+=3;goto B7073a0;
case 0x7073a3:c.instructions+=2;goto B7073a3;
case 0x7073a4:c.instructions+=1;goto B7073a4;
case 0x7073a6:goto L7073a6;
case 0x7073a9:c.instructions+=4;goto B7073a9;
case 0x7073ac:c.instructions+=3;goto B7073ac;
case 0x7073b0:c.instructions+=2;goto B7073b0;
case 0x7073b3:c.instructions+=1;goto B7073b3;
case 0x7073b8:goto L7073b8;
case 0x7073bb:c.instructions+=6;goto B7073bb;
case 0x7073be:c.instructions+=5;goto B7073be;
case 0x7073c1:c.instructions+=4;goto B7073c1;
case 0x7073c5:c.instructions+=3;goto B7073c5;
case 0x7073c6:c.instructions+=2;goto B7073c6;
case 0x7073c7:c.instructions+=1;goto B7073c7;
case 0x7073cc:goto L7073cc;
case 0x7073ce:c.instructions+=3;goto B7073ce;
case 0x7073cf:c.instructions+=2;goto B7073cf;
case 0x7073d0:c.instructions+=1;goto B7073d0;
case 0x7073d6:goto L7073d6;
case 0x7073da:c.instructions+=4;goto B7073da;
case 0x7073db:c.instructions+=3;goto B7073db;
case 0x7073dc:c.instructions+=2;goto B7073dc;
case 0x7073e0:c.instructions+=1;goto B7073e0;
case 0x7073e5:goto L7073e5;
case 0x7073e7:c.instructions+=3;goto B7073e7;
case 0x7073e8:c.instructions+=2;goto B7073e8;
case 0x7073e9:c.instructions+=1;goto B7073e9;
case 0x7073ef:goto L7073ef;
case 0x7073f2:c.instructions+=4;goto B7073f2;
case 0x7073f6:c.instructions+=3;goto B7073f6;
case 0x7073f7:c.instructions+=2;goto B7073f7;
case 0x7073f8:c.instructions+=1;goto B7073f8;
case 0x7073fd:goto L7073fd;
case 0x7073ff:c.instructions+=3;goto B7073ff;
case 0x707400:c.instructions+=2;goto B707400;
case 0x707401:c.instructions+=1;goto B707401;
case 0x707403:goto L707403;
case 0x707407:c.instructions+=3;goto B707407;
case 0x707408:c.instructions+=2;goto B707408;
case 0x707409:c.instructions+=1;goto B707409;
case 0x70740e:goto L70740e;
case 0x707410:c.instructions+=3;goto B707410;
case 0x707411:c.instructions+=2;goto B707411;
case 0x707412:c.instructions+=1;goto B707412;
case 0x707414:goto L707414;
case 0x707418:c.instructions+=3;goto B707418;
case 0x707419:c.instructions+=2;goto B707419;
case 0x70741a:c.instructions+=1;goto B70741a;
case 0x70741f:goto L70741f;
case 0x707422:c.instructions+=1;goto B707422;
case 0x707424:goto L707424;
case 0x707428:c.instructions+=3;goto B707428;
case 0x707429:c.instructions+=2;goto B707429;
case 0x70742a:c.instructions+=1;goto B70742a;
case 0x70742f:goto L70742f;
case 0x707432:c.instructions+=1;goto B707432;
case 0x707434:goto L707434;
case 0x707438:c.instructions+=3;goto B707438;
case 0x707439:c.instructions+=2;goto B707439;
case 0x70743a:c.instructions+=1;goto B70743a;
case 0x70743f:goto L70743f;
case 0x707442:goto L707442;
case 0x707445:c.instructions+=7;goto B707445;
case 0x707447:c.instructions+=6;goto B707447;
case 0x70744e:c.instructions+=5;goto B70744e;
case 0x707451:c.instructions+=4;goto B707451;
case 0x707458:c.instructions+=3;goto B707458;
case 0x707459:c.instructions+=2;goto B707459;
case 0x70745a:c.instructions+=1;goto B70745a;
case 0x70745d:goto L70745d;
case 0x707460:c.instructions+=4;goto B707460;
case 0x707468:c.instructions+=3;goto B707468;
case 0x707469:c.instructions+=2;goto B707469;
case 0x70746a:c.instructions+=1;goto B70746a;
case 0x70746f:goto L70746f;
case 0x707470:c.instructions+=6;goto B707470;
case 0x707471:c.instructions+=5;goto B707471;
case 0x707474:c.instructions+=4;goto B707474;
case 0x707476:c.instructions+=3;goto B707476;
case 0x707479:c.instructions+=2;goto B707479;
case 0x70747c:c.instructions+=1;goto B70747c;
case 0x70747e:goto L70747e;
case 0x707480:c.instructions+=1;goto B707480;
case 0x707485:goto L707485;
case 0x707487:c.instructions+=3;goto B707487;
case 0x707489:c.instructions+=2;goto B707489;
case 0x70748c:c.instructions+=1;goto B70748c;
case 0x70748e:goto L70748e;
case 0x707492:c.instructions+=3;goto B707492;
case 0x707493:c.instructions+=2;goto B707493;
case 0x707494:c.instructions+=1;goto B707494;
case 0x707499:goto L707499;
case 0x70749b:c.instructions+=3;goto B70749b;
case 0x70749c:c.instructions+=2;goto B70749c;
case 0x70749d:c.instructions+=1;goto B70749d;
case 0x70749f:goto L70749f;
case 0x7074a2:c.instructions+=4;goto B7074a2;
case 0x7074a6:c.instructions+=3;goto B7074a6;
case 0x7074a7:c.instructions+=2;goto B7074a7;
case 0x7074a8:c.instructions+=1;goto B7074a8;
case 0x7074ad:goto L7074ad;
case 0x7074ae:c.instructions+=4;goto B7074ae;
case 0x7074b0:c.instructions+=3;goto B7074b0;
case 0x7074b1:c.instructions+=2;goto B7074b1;
case 0x7074b4:c.instructions+=1;goto B7074b4;
case 0x7074b6:goto L7074b6;
case 0x7074b8:c.instructions+=1;goto B7074b8;
case 0x7074b9:goto L7074b9;
case 0x7074bb:c.instructions+=1;goto B7074bb;
case 0x7074c0:goto L7074c0;
case 0x7074c2:c.instructions+=3;goto B7074c2;
case 0x7074c4:c.instructions+=2;goto B7074c4;
case 0x7074c6:c.instructions+=1;goto B7074c6;
case 0x7074c8:goto L7074c8;
case 0x7074ca:c.instructions+=2;goto B7074ca;
case 0x7074ce:c.instructions+=1;goto B7074ce;
case 0x7074d3:goto L7074d3;
case 0x7074d5:c.instructions+=2;goto B7074d5;
case 0x7074d7:c.instructions+=1;goto B7074d7;
case 0x7074da:goto L7074da;
case 0x7074dc:c.instructions+=2;goto B7074dc;
case 0x7074df:c.instructions+=1;goto B7074df;
case 0x7074e2:goto L7074e2;
case 0x7074e6:goto L7074e6;
case 0x7074ea:c.instructions+=9;goto B7074ea;
case 0x7074ee:c.instructions+=8;goto B7074ee;
case 0x7074f1:c.instructions+=7;goto B7074f1;
case 0x7074f8:c.instructions+=6;goto B7074f8;
case 0x7074fb:c.instructions+=5;goto B7074fb;
case 0x7074fe:c.instructions+=4;goto B7074fe;
case 0x707501:c.instructions+=3;goto B707501;
case 0x707504:c.instructions+=2;goto B707504;
case 0x707508:c.instructions+=1;goto B707508;
case 0x70750a:goto L70750a;
case 0x70750e:c.instructions+=1;goto B70750e;
case 0x707514:goto L707514;
case 0x707517:c.instructions+=3;goto B707517;
case 0x707518:c.instructions+=2;goto B707518;
case 0x707519:c.instructions+=1;goto B707519;
case 0x70751e:goto L70751e;
case 0x707520:c.instructions+=3;goto B707520;
case 0x707521:c.instructions+=2;goto B707521;
case 0x707522:c.instructions+=1;goto B707522;
case 0x707528:goto L707528;
case 0x70752c:c.instructions+=3;goto B70752c;
case 0x70752d:c.instructions+=2;goto B70752d;
case 0x70752e:c.instructions+=1;goto B70752e;
case 0x707533:goto L707533;
case 0x707535:c.instructions+=3;goto B707535;
case 0x707536:c.instructions+=2;goto B707536;
case 0x707537:c.instructions+=1;goto B707537;
case 0x70753d:goto L70753d;
case 0x707541:c.instructions+=9;goto B707541;
case 0x707545:c.instructions+=8;goto B707545;
case 0x707547:c.instructions+=7;goto B707547;
case 0x707548:c.instructions+=6;goto B707548;
case 0x70754b:c.instructions+=5;goto B70754b;
case 0x707552:c.instructions+=4;goto B707552;
case 0x707555:c.instructions+=3;goto B707555;
case 0x707556:c.instructions+=2;goto B707556;
case 0x707557:c.instructions+=1;goto B707557;
case 0x70755c:goto L70755c;
case 0x70755e:c.instructions+=3;goto B70755e;
case 0x70755f:c.instructions+=2;goto B70755f;
case 0x707560:c.instructions+=1;goto B707560;
case 0x707562:goto L707562;
case 0x707566:c.instructions+=3;goto B707566;
case 0x707567:c.instructions+=2;goto B707567;
case 0x707568:c.instructions+=1;goto B707568;
case 0x70756d:goto L70756d;
case 0x70756f:c.instructions+=3;goto B70756f;
case 0x707570:c.instructions+=2;goto B707570;
case 0x707571:c.instructions+=1;goto B707571;
case 0x707573:goto L707573;
case 0x707577:c.instructions+=3;goto B707577;
case 0x707578:c.instructions+=2;goto B707578;
case 0x707579:c.instructions+=1;goto B707579;
case 0x70757e:goto L70757e;
case 0x70757f:c.instructions+=3;goto B70757f;
case 0x707580:c.instructions+=2;goto B707580;
case 0x707581:c.instructions+=1;goto B707581;
case 0x707586:goto L707586;
case 0x70758a:c.instructions+=3;goto B70758a;
case 0x70758b:c.instructions+=2;goto B70758b;
case 0x70758c:c.instructions+=1;goto B70758c;
case 0x707591:goto L707591;
case 0x707592:c.instructions+=3;goto B707592;
case 0x707593:c.instructions+=2;goto B707593;
case 0x707596:c.instructions+=1;goto B707596;
case 0x70759b:goto L70759b;
case 0x70759f:c.instructions+=3;goto B70759f;
case 0x7075a0:c.instructions+=2;goto B7075a0;
case 0x7075a1:c.instructions+=1;goto B7075a1;
case 0x7075a6:goto L7075a6;
case 0x7075a8:c.instructions+=3;goto B7075a8;
case 0x7075a9:c.instructions+=2;goto B7075a9;
case 0x7075aa:c.instructions+=1;goto B7075aa;
case 0x7075ac:goto L7075ac;
case 0x7075b0:c.instructions+=3;goto B7075b0;
case 0x7075b1:c.instructions+=2;goto B7075b1;
case 0x7075b2:c.instructions+=1;goto B7075b2;
case 0x7075b7:goto L7075b7;
case 0x7075b9:c.instructions+=3;goto B7075b9;
case 0x7075ba:c.instructions+=2;goto B7075ba;
case 0x7075bb:c.instructions+=1;goto B7075bb;
case 0x7075bd:goto L7075bd;
case 0x7075c1:c.instructions+=3;goto B7075c1;
case 0x7075c2:c.instructions+=2;goto B7075c2;
case 0x7075c3:c.instructions+=1;goto B7075c3;
case 0x7075c8:goto L7075c8;
case 0x7075c9:c.instructions+=3;goto B7075c9;
case 0x7075ca:c.instructions+=2;goto B7075ca;
case 0x7075cd:c.instructions+=1;goto B7075cd;
case 0x7075d2:goto L7075d2;
case 0x7075d6:c.instructions+=3;goto B7075d6;
case 0x7075d7:c.instructions+=2;goto B7075d7;
case 0x7075d8:c.instructions+=1;goto B7075d8;
case 0x7075dd:goto L7075dd;
case 0x7075de:c.instructions+=3;goto B7075de;
case 0x7075df:c.instructions+=2;goto B7075df;
case 0x7075e2:c.instructions+=1;goto B7075e2;
case 0x7075e4:goto L7075e4;
case 0x7075e8:c.instructions+=3;goto B7075e8;
case 0x7075e9:c.instructions+=2;goto B7075e9;
case 0x7075ea:c.instructions+=1;goto B7075ea;
case 0x7075ef:goto L7075ef;
case 0x7075f2:c.instructions+=4;goto B7075f2;
case 0x7075f6:c.instructions+=3;goto B7075f6;
case 0x7075f7:c.instructions+=2;goto B7075f7;
case 0x7075f8:c.instructions+=1;goto B7075f8;
case 0x7075fd:goto L7075fd;
case 0x707600:c.instructions+=6;goto B707600;
case 0x707603:c.instructions+=5;goto B707603;
case 0x707606:c.instructions+=4;goto B707606;
case 0x70760a:c.instructions+=3;goto B70760a;
case 0x70760b:c.instructions+=2;goto B70760b;
case 0x70760c:c.instructions+=1;goto B70760c;
case 0x707611:goto L707611;
case 0x707614:c.instructions+=6;goto B707614;
case 0x707617:c.instructions+=5;goto B707617;
case 0x70761a:c.instructions+=4;goto B70761a;
case 0x70761e:c.instructions+=3;goto B70761e;
case 0x70761f:c.instructions+=2;goto B70761f;
case 0x707620:c.instructions+=1;goto B707620;
case 0x707625:goto L707625;
case 0x707628:c.instructions+=6;goto B707628;
case 0x70762b:c.instructions+=5;goto B70762b;
case 0x70762e:c.instructions+=4;goto B70762e;
case 0x707632:c.instructions+=3;goto B707632;
case 0x707633:c.instructions+=2;goto B707633;
case 0x707634:c.instructions+=1;goto B707634;
case 0x707639:goto L707639;
case 0x70763c:c.instructions+=5;goto B70763c;
case 0x70763f:c.instructions+=4;goto B70763f;
case 0x707643:c.instructions+=3;goto B707643;
case 0x707644:c.instructions+=2;goto B707644;
case 0x707645:c.instructions+=1;goto B707645;
case 0x70764a:goto L70764a;
case 0x70764d:c.instructions+=3;goto B70764d;
case 0x707650:c.instructions+=2;goto B707650;
case 0x707653:c.instructions+=1;goto B707653;
case 0x707657:goto L707657;
case 0x70765a:c.instructions+=1;goto B70765a;
case 0x70765f:goto L70765f;
case 0x707663:c.instructions+=3;goto B707663;
case 0x707664:c.instructions+=2;goto B707664;
case 0x707665:c.instructions+=1;goto B707665;
case 0x70766a:goto L70766a;
case 0x70766c:c.instructions+=3;goto B70766c;
case 0x70766d:c.instructions+=2;goto B70766d;
case 0x70766e:c.instructions+=1;goto B70766e;
case 0x707674:goto L707674;
case 0x707678:c.instructions+=4;goto B707678;
case 0x707679:c.instructions+=3;goto B707679;
case 0x70767a:c.instructions+=2;goto B70767a;
case 0x70767e:c.instructions+=1;goto B70767e;
case 0x707683:goto L707683;
case 0x707685:c.instructions+=3;goto B707685;
case 0x707686:c.instructions+=2;goto B707686;
case 0x707687:c.instructions+=1;goto B707687;
case 0x70768d:goto L70768d;
case 0x707691:c.instructions+=3;goto B707691;
case 0x707692:c.instructions+=2;goto B707692;
case 0x707693:c.instructions+=1;goto B707693;
case 0x707698:goto L707698;
case 0x70769a:c.instructions+=3;goto B70769a;
case 0x70769b:c.instructions+=2;goto B70769b;
case 0x70769c:c.instructions+=1;goto B70769c;
case 0x70769e:goto L70769e;
case 0x7076a2:c.instructions+=3;goto B7076a2;
case 0x7076a3:c.instructions+=2;goto B7076a3;
case 0x7076a4:c.instructions+=1;goto B7076a4;
case 0x7076a9:goto L7076a9;
case 0x7076ab:c.instructions+=3;goto B7076ab;
case 0x7076ac:c.instructions+=2;goto B7076ac;
case 0x7076ad:c.instructions+=1;goto B7076ad;
case 0x7076af:goto L7076af;
case 0x7076b3:c.instructions+=3;goto B7076b3;
case 0x7076b4:c.instructions+=2;goto B7076b4;
case 0x7076b5:c.instructions+=1;goto B7076b5;
case 0x7076ba:goto L7076ba;
case 0x7076bd:c.instructions+=1;goto B7076bd;
case 0x7076bf:goto L7076bf;
case 0x7076c3:c.instructions+=3;goto B7076c3;
case 0x7076c4:c.instructions+=2;goto B7076c4;
case 0x7076c5:c.instructions+=1;goto B7076c5;
case 0x7076ca:goto L7076ca;
case 0x7076cd:c.instructions+=1;goto B7076cd;
case 0x7076cf:goto L7076cf;
case 0x7076d3:c.instructions+=3;goto B7076d3;
case 0x7076d4:c.instructions+=2;goto B7076d4;
case 0x7076d5:c.instructions+=1;goto B7076d5;
case 0x7076da:goto L7076da;
case 0x7076dd:goto L7076dd;
case 0x7076e0:c.instructions+=7;goto B7076e0;
case 0x7076e2:c.instructions+=6;goto B7076e2;
case 0x7076e9:c.instructions+=5;goto B7076e9;
case 0x7076ec:c.instructions+=4;goto B7076ec;
case 0x7076f3:c.instructions+=3;goto B7076f3;
case 0x7076f4:c.instructions+=2;goto B7076f4;
case 0x7076f5:c.instructions+=1;goto B7076f5;
case 0x7076f8:goto L7076f8;
case 0x7076fb:c.instructions+=4;goto B7076fb;
case 0x707703:c.instructions+=3;goto B707703;
case 0x707704:c.instructions+=2;goto B707704;
case 0x707705:c.instructions+=1;goto B707705;
case 0x70770a:goto L70770a;
case 0x70770b:c.instructions+=6;goto B70770b;
case 0x70770c:c.instructions+=5;goto B70770c;
case 0x70770f:c.instructions+=4;goto B70770f;
case 0x707711:c.instructions+=3;goto B707711;
case 0x707714:c.instructions+=2;goto B707714;
case 0x707717:c.instructions+=1;goto B707717;
case 0x707719:goto L707719;
case 0x70771b:c.instructions+=1;goto B70771b;
case 0x707720:goto L707720;
case 0x707722:c.instructions+=3;goto B707722;
case 0x707724:c.instructions+=2;goto B707724;
case 0x707727:c.instructions+=1;goto B707727;
case 0x707729:goto L707729;
case 0x70772d:c.instructions+=3;goto B70772d;
case 0x70772e:c.instructions+=2;goto B70772e;
case 0x70772f:c.instructions+=1;goto B70772f;
case 0x707734:goto L707734;
case 0x707736:c.instructions+=3;goto B707736;
case 0x707737:c.instructions+=2;goto B707737;
case 0x707738:c.instructions+=1;goto B707738;
case 0x70773a:goto L70773a;
case 0x70773e:c.instructions+=3;goto B70773e;
case 0x70773f:c.instructions+=2;goto B70773f;
case 0x707740:c.instructions+=1;goto B707740;
case 0x707745:goto L707745;
case 0x707746:c.instructions+=4;goto B707746;
case 0x707748:c.instructions+=3;goto B707748;
case 0x707749:c.instructions+=2;goto B707749;
case 0x70774c:c.instructions+=1;goto B70774c;
case 0x70774e:goto L70774e;
case 0x707750:c.instructions+=1;goto B707750;
case 0x707751:goto L707751;
case 0x707753:c.instructions+=1;goto B707753;
case 0x707758:goto L707758;
case 0x70775a:c.instructions+=3;goto B70775a;
case 0x70775c:c.instructions+=2;goto B70775c;
case 0x70775e:c.instructions+=1;goto B70775e;
case 0x707760:goto L707760;
case 0x707762:c.instructions+=2;goto B707762;
case 0x707766:c.instructions+=1;goto B707766;
case 0x70776b:goto L70776b;
case 0x70776d:c.instructions+=2;goto B70776d;
case 0x70776f:c.instructions+=1;goto B70776f;
case 0x707772:goto L707772;
case 0x707775:c.instructions+=7;goto B707775;
case 0x707777:c.instructions+=6;goto B707777;
case 0x70777a:c.instructions+=5;goto B70777a;
case 0x707782:c.instructions+=4;goto B707782;
case 0x707785:c.instructions+=3;goto B707785;
case 0x707788:c.instructions+=2;goto B707788;
case 0x70778b:c.instructions+=1;goto B70778b;
case 0x70778f:goto L70778f;
case 0x707793:c.instructions+=1;goto B707793;
case 0x707799:goto L707799;
case 0x70779b:goto L70779b;
case 0x70779e:goto L70779e;
case 0x7077a1:c.instructions+=8;goto B7077a1;
case 0x7077a3:c.instructions+=7;goto B7077a3;
case 0x7077a6:c.instructions+=6;goto B7077a6;
case 0x7077ad:c.instructions+=5;goto B7077ad;
case 0x7077ae:c.instructions+=4;goto B7077ae;
case 0x7077af:c.instructions+=3;goto B7077af;
case 0x7077b0:c.instructions+=2;goto B7077b0;
case 0x7077b1:c.instructions+=1;goto B7077b1;
case 0x7077b2:goto L7077b2;
case 0x7077b3:c.instructions+=13;goto B7077b3;
case 0x7077b5:c.instructions+=12;goto B7077b5;
case 0x7077b6:c.instructions+=11;goto B7077b6;
case 0x7077b7:c.instructions+=10;goto B7077b7;
case 0x7077b8:c.instructions+=9;goto B7077b8;
case 0x7077bb:c.instructions+=8;goto B7077bb;
case 0x7077c2:c.instructions+=7;goto B7077c2;
case 0x7077c8:c.instructions+=6;goto B7077c8;
case 0x7077cb:c.instructions+=5;goto B7077cb;
case 0x7077d1:c.instructions+=4;goto B7077d1;
case 0x7077d2:c.instructions+=3;goto B7077d2;
case 0x7077d3:c.instructions+=2;goto B7077d3;
case 0x7077d6:c.instructions+=1;goto B7077d6;
case 0x7077d8:goto L7077d8;
case 0x7077d9:c.instructions+=1;goto B7077d9;
case 0x7077de:goto L7077de;
case 0x7077e0:c.instructions+=4;goto B7077e0;
case 0x7077e6:c.instructions+=3;goto B7077e6;
case 0x7077e7:c.instructions+=2;goto B7077e7;
case 0x7077e8:c.instructions+=1;goto B7077e8;
case 0x7077ed:goto L7077ed;
case 0x7077f0:c.instructions+=3;goto B7077f0;
case 0x7077f2:c.instructions+=2;goto B7077f2;
case 0x7077f8:c.instructions+=1;goto B7077f8;
case 0x7077fd:goto L7077fd;
case 0x7077ff:c.instructions+=3;goto B7077ff;
case 0x707800:c.instructions+=2;goto B707800;
case 0x707806:c.instructions+=1;goto B707806;
case 0x70780b:goto L70780b;
case 0x70780d:goto L70780d;
case 0x707813:c.instructions+=33;goto B707813;
case 0x70781a:c.instructions+=32;goto B70781a;
case 0x707820:c.instructions+=31;goto B707820;
case 0x707825:c.instructions+=30;goto B707825;
case 0x707826:c.instructions+=29;goto B707826;
case 0x707827:c.instructions+=28;goto B707827;
case 0x707828:c.instructions+=27;goto B707828;
case 0x70782a:c.instructions+=26;goto B70782a;
case 0x707830:c.instructions+=25;goto B707830;
case 0x707837:c.instructions+=24;goto B707837;
case 0x70783d:c.instructions+=23;goto B70783d;
case 0x707842:c.instructions+=22;goto B707842;
case 0x707843:c.instructions+=21;goto B707843;
case 0x707844:c.instructions+=20;goto B707844;
case 0x707845:c.instructions+=19;goto B707845;
case 0x707846:c.instructions+=18;goto B707846;
case 0x70784b:c.instructions+=17;goto B70784b;
case 0x70784d:c.instructions+=16;goto B70784d;
case 0x707853:c.instructions+=15;goto B707853;
case 0x707854:c.instructions+=14;goto B707854;
case 0x707855:c.instructions+=13;goto B707855;
case 0x707857:c.instructions+=12;goto B707857;
case 0x707858:c.instructions+=11;goto B707858;
case 0x70785a:c.instructions+=10;goto B70785a;
case 0x707860:c.instructions+=9;goto B707860;
case 0x707861:c.instructions+=8;goto B707861;
case 0x707862:c.instructions+=7;goto B707862;
case 0x707864:c.instructions+=6;goto B707864;
case 0x707865:c.instructions+=5;goto B707865;
case 0x70786b:c.instructions+=4;goto B70786b;
case 0x707871:c.instructions+=3;goto B707871;
case 0x707873:c.instructions+=2;goto B707873;
case 0x707876:c.instructions+=1;goto B707876;
case 0x70787b:goto L70787b;
case 0x70787d:goto L70787d;
case 0x70787f:c.instructions+=1;goto B70787f;
case 0x707882:goto L707882;
case 0x707884:goto L707884;
case 0x70788b:c.instructions+=6;goto B70788b;
case 0x70788d:c.instructions+=5;goto B70788d;
case 0x707893:c.instructions+=4;goto B707893;
case 0x707894:c.instructions+=3;goto B707894;
case 0x707896:c.instructions+=2;goto B707896;
case 0x70789b:c.instructions+=1;goto B70789b;
case 0x70789d:goto L70789d;
case 0x7078a2:goto L7078a2;
case 0x7078a3:c.instructions+=1;goto B7078a3;
case 0x7078a4:goto L7078a4;
case 0x7078a6:goto L7078a6;
case 0x7078ab:goto L7078ab;
case 0x7078ac:c.instructions+=2;goto B7078ac;
case 0x7078ad:c.instructions+=1;goto B7078ad;
case 0x7078af:goto L7078af;
case 0x7078b1:c.instructions+=4;goto B7078b1;
case 0x7078b7:c.instructions+=3;goto B7078b7;
case 0x7078b8:c.instructions+=2;goto B7078b8;
case 0x7078b9:c.instructions+=1;goto B7078b9;
case 0x7078be:goto L7078be;
case 0x7078bf:c.instructions+=4;goto B7078bf;
case 0x7078c0:c.instructions+=3;goto B7078c0;
case 0x7078c2:c.instructions+=2;goto B7078c2;
case 0x7078c8:c.instructions+=1;goto B7078c8;
case 0x7078c9:goto L7078c9;
case 0x7078cd:c.instructions+=7;goto B7078cd;
case 0x7078d3:c.instructions+=6;goto B7078d3;
case 0x7078d9:c.instructions+=5;goto B7078d9;
case 0x7078dc:c.instructions+=4;goto B7078dc;
case 0x7078de:c.instructions+=3;goto B7078de;
case 0x7078df:c.instructions+=2;goto B7078df;
case 0x7078e0:c.instructions+=1;goto B7078e0;
case 0x7078e2:goto L7078e2;
case 0x7078e8:c.instructions+=1;goto B7078e8;
case 0x7078ea:goto L7078ea;
case 0x7078eb:c.instructions+=1;goto B7078eb;
case 0x7078f0:goto L7078f0;
case 0x7078f1:goto L7078f1;
case 0x7078f8:c.instructions+=1;goto B7078f8;
case 0x7078fa:goto L7078fa;
case 0x707900:c.instructions+=3;goto B707900;
case 0x707902:c.instructions+=2;goto B707902;
case 0x707903:c.instructions+=1;goto B707903;
case 0x707908:goto L707908;
case 0x70790b:c.instructions+=3;goto B70790b;
case 0x70790c:c.instructions+=2;goto B70790c;
case 0x70790d:c.instructions+=1;goto B70790d;
case 0x707913:goto L707913;
case 0x707914:c.instructions+=1;goto B707914;
case 0x707919:goto L707919;
case 0x70791c:c.instructions+=3;goto B70791c;
case 0x70791d:c.instructions+=2;goto B70791d;
case 0x70791f:c.instructions+=1;goto B70791f;
case 0x707924:goto L707924;
case 0x707926:goto L707926;
case 0x707929:c.instructions+=10;goto B707929;
case 0x70792b:c.instructions+=9;goto B70792b;
case 0x70792c:c.instructions+=8;goto B70792c;
case 0x70792f:c.instructions+=7;goto B70792f;
case 0x707931:c.instructions+=6;goto B707931;
case 0x707937:c.instructions+=5;goto B707937;
case 0x70793d:c.instructions+=4;goto B70793d;
case 0x707943:c.instructions+=3;goto B707943;
case 0x707949:c.instructions+=2;goto B707949;
case 0x70794c:c.instructions+=1;goto B70794c;
case 0x70794e:goto L70794e;
case 0x707951:c.instructions+=2;goto B707951;
case 0x707954:c.instructions+=1;goto B707954;
case 0x707957:goto L707957;
case 0x707958:c.instructions+=1;goto B707958;
case 0x70795d:goto L70795d;
case 0x70795e:c.instructions+=4;goto B70795e;
case 0x707960:c.instructions+=3;goto B707960;
case 0x707961:c.instructions+=2;goto B707961;
case 0x707964:c.instructions+=1;goto B707964;
case 0x707966:goto L707966;
case 0x707967:c.instructions+=3;goto B707967;
case 0x70796a:c.instructions+=2;goto B70796a;
case 0x70796b:c.instructions+=1;goto B70796b;
case 0x707970:goto L707970;
case 0x707973:c.instructions+=3;goto B707973;
case 0x707974:c.instructions+=2;goto B707974;
case 0x707977:c.instructions+=1;goto B707977;
case 0x707979:goto L707979;
case 0x70797c:c.instructions+=2;goto B70797c;
case 0x70797f:c.instructions+=1;goto B70797f;
case 0x707981:goto L707981;
case 0x707982:c.instructions+=4;goto B707982;
case 0x707983:c.instructions+=3;goto B707983;
case 0x707984:c.instructions+=2;goto B707984;
case 0x707985:c.instructions+=1;goto B707985;
case 0x707986:goto L707986;
case 0x707987:c.instructions+=12;goto B707987;
case 0x707989:c.instructions+=11;goto B707989;
case 0x70798c:c.instructions+=10;goto B70798c;
case 0x70798f:c.instructions+=9;goto B70798f;
case 0x707991:c.instructions+=8;goto B707991;
case 0x707993:c.instructions+=7;goto B707993;
case 0x70799a:c.instructions+=6;goto B70799a;
case 0x70799d:c.instructions+=5;goto B70799d;
case 0x7079a4:c.instructions+=4;goto B7079a4;
case 0x7079a7:c.instructions+=3;goto B7079a7;
case 0x7079aa:c.instructions+=2;goto B7079aa;
case 0x7079ab:c.instructions+=1;goto B7079ab;
case 0x7079ac:goto L7079ac;
case 0x7079ad:c.instructions+=5;goto B7079ad;
case 0x7079af:c.instructions+=4;goto B7079af;
case 0x7079b2:c.instructions+=3;goto B7079b2;
case 0x7079b5:c.instructions+=2;goto B7079b5;
case 0x7079b8:c.instructions+=1;goto B7079b8;
case 0x7079ba:goto L7079ba;
case 0x7079bc:c.instructions+=1;goto B7079bc;
case 0x7079be:goto L7079be;
case 0x7079c1:c.instructions+=1;goto B7079c1;
case 0x7079c3:goto L7079c3;
case 0x7079c5:c.instructions+=1;goto B7079c5;
case 0x7079c7:goto L7079c7;
case 0x7079c9:goto L7079c9;
case 0x7079cc:c.instructions+=27;goto B7079cc;
case 0x7079cd:c.instructions+=26;goto B7079cd;
case 0x7079cf:c.instructions+=25;goto B7079cf;
case 0x7079d1:c.instructions+=24;goto B7079d1;
case 0x7079d4:c.instructions+=23;goto B7079d4;
case 0x7079d7:c.instructions+=22;goto B7079d7;
case 0x7079d8:c.instructions+=21;goto B7079d8;
case 0x7079db:c.instructions+=20;goto B7079db;
case 0x7079de:c.instructions+=19;goto B7079de;
case 0x7079e1:c.instructions+=18;goto B7079e1;
case 0x7079e4:c.instructions+=17;goto B7079e4;
case 0x7079e7:c.instructions+=16;goto B7079e7;
case 0x7079ea:c.instructions+=15;goto B7079ea;
case 0x7079ed:c.instructions+=14;goto B7079ed;
case 0x7079f0:c.instructions+=13;goto B7079f0;
case 0x7079f3:c.instructions+=12;goto B7079f3;
case 0x7079f6:c.instructions+=11;goto B7079f6;
case 0x7079f9:c.instructions+=10;goto B7079f9;
case 0x7079fc:c.instructions+=9;goto B7079fc;
case 0x7079ff:c.instructions+=8;goto B7079ff;
case 0x707a02:c.instructions+=7;goto B707a02;
case 0x707a04:c.instructions+=6;goto B707a04;
case 0x707a07:c.instructions+=5;goto B707a07;
case 0x707a0a:c.instructions+=4;goto B707a0a;
case 0x707a0d:c.instructions+=3;goto B707a0d;
case 0x707a0e:c.instructions+=2;goto B707a0e;
case 0x707a0f:c.instructions+=1;goto B707a0f;
case 0x707a10:goto L707a10;
case 0x707a11:c.instructions+=13;goto B707a11;
case 0x707a13:c.instructions+=12;goto B707a13;
case 0x707a16:c.instructions+=11;goto B707a16;
case 0x707a19:c.instructions+=10;goto B707a19;
case 0x707a1c:c.instructions+=9;goto B707a1c;
case 0x707a20:c.instructions+=8;goto B707a20;
case 0x707a23:c.instructions+=7;goto B707a23;
case 0x707a24:c.instructions+=6;goto B707a24;
case 0x707a27:c.instructions+=5;goto B707a27;
case 0x707a28:c.instructions+=4;goto B707a28;
case 0x707a2c:c.instructions+=3;goto B707a2c;
case 0x707a2d:c.instructions+=2;goto B707a2d;
case 0x707a2f:c.instructions+=1;goto B707a2f;
case 0x707a31:goto L707a31;
case 0x707a33:c.instructions+=2;goto B707a33;
case 0x707a35:c.instructions+=1;goto B707a35;
case 0x707a37:goto L707a37;
case 0x707a3d:c.instructions+=1;goto B707a3d;
case 0x707a3f:goto L707a3f;
case 0x707a40:goto L707a40;
case 0x707a42:c.instructions+=2;goto B707a42;
case 0x707a44:c.instructions+=1;goto B707a44;
case 0x707a46:goto L707a46;
case 0x707a49:c.instructions+=1;goto B707a49;
case 0x707a4b:goto L707a4b;
case 0x707a4e:c.instructions+=3;goto B707a4e;
case 0x707a50:c.instructions+=2;goto B707a50;
case 0x707a53:c.instructions+=1;goto B707a53;
case 0x707a55:goto L707a55;
case 0x707a58:goto L707a58;
case 0x707a59:c.instructions+=1;goto B707a59;
case 0x707a5b:goto L707a5b;
case 0x707a5e:c.instructions+=2;goto B707a5e;
case 0x707a60:c.instructions+=1;goto B707a60;
case 0x707a62:goto L707a62;
case 0x707a64:c.instructions+=2;goto B707a64;
case 0x707a65:c.instructions+=1;goto B707a65;
case 0x707a67:goto L707a67;
case 0x707a6a:c.instructions+=8;goto B707a6a;
case 0x707a6d:c.instructions+=7;goto B707a6d;
case 0x707a6f:c.instructions+=6;goto B707a6f;
case 0x707a72:c.instructions+=5;goto B707a72;
case 0x707a75:c.instructions+=4;goto B707a75;
case 0x707a78:c.instructions+=3;goto B707a78;
case 0x707a7f:c.instructions+=2;goto B707a7f;
case 0x707a82:c.instructions+=1;goto B707a82;
case 0x707a88:goto L707a88;
case 0x707a8e:c.instructions+=1;goto B707a8e;
case 0x707a90:goto L707a90;
case 0x707a91:goto L707a91;
case 0x707a93:c.instructions+=6;goto B707a93;
case 0x707a94:c.instructions+=5;goto B707a94;
case 0x707a97:c.instructions+=4;goto B707a97;
case 0x707a9a:c.instructions+=3;goto B707a9a;
case 0x707a9b:c.instructions+=2;goto B707a9b;
case 0x707a9c:c.instructions+=1;goto B707a9c;
case 0x707a9d:goto L707a9d;
case 0x707a9e:c.instructions+=15;goto B707a9e;
case 0x707aa0:c.instructions+=14;goto B707aa0;
case 0x707aa3:c.instructions+=13;goto B707aa3;
case 0x707aa5:c.instructions+=12;goto B707aa5;
case 0x707aa6:c.instructions+=11;goto B707aa6;
case 0x707aa9:c.instructions+=10;goto B707aa9;
case 0x707aaa:c.instructions+=9;goto B707aaa;
case 0x707aad:c.instructions+=8;goto B707aad;
case 0x707ab0:c.instructions+=7;goto B707ab0;
case 0x707ab4:c.instructions+=6;goto B707ab4;
case 0x707ab7:c.instructions+=5;goto B707ab7;
case 0x707ab8:c.instructions+=4;goto B707ab8;
case 0x707aba:c.instructions+=3;goto B707aba;
case 0x707abc:c.instructions+=2;goto B707abc;
case 0x707ac2:c.instructions+=1;goto B707ac2;
case 0x707ac4:goto L707ac4;
case 0x707ac5:goto L707ac5;
case 0x707ac7:c.instructions+=2;goto B707ac7;
case 0x707ac9:c.instructions+=1;goto B707ac9;
case 0x707acb:goto L707acb;
case 0x707ace:c.instructions+=1;goto B707ace;
case 0x707ad0:goto L707ad0;
case 0x707ad3:c.instructions+=3;goto B707ad3;
case 0x707ad5:c.instructions+=2;goto B707ad5;
case 0x707ad8:c.instructions+=1;goto B707ad8;
case 0x707ada:goto L707ada;
case 0x707add:goto L707add;
case 0x707ade:c.instructions+=1;goto B707ade;
case 0x707ae0:goto L707ae0;
case 0x707ae3:c.instructions+=2;goto B707ae3;
case 0x707ae5:c.instructions+=1;goto B707ae5;
case 0x707ae7:goto L707ae7;
case 0x707ae9:c.instructions+=2;goto B707ae9;
case 0x707aea:c.instructions+=1;goto B707aea;
case 0x707aec:goto L707aec;
case 0x707aef:c.instructions+=8;goto B707aef;
case 0x707af2:c.instructions+=7;goto B707af2;
case 0x707af4:c.instructions+=6;goto B707af4;
case 0x707af7:c.instructions+=5;goto B707af7;
case 0x707afa:c.instructions+=4;goto B707afa;
case 0x707afd:c.instructions+=3;goto B707afd;
case 0x707b04:c.instructions+=2;goto B707b04;
case 0x707b07:c.instructions+=1;goto B707b07;
case 0x707b0d:goto L707b0d;
case 0x707b13:c.instructions+=1;goto B707b13;
case 0x707b15:goto L707b15;
case 0x707b16:goto L707b16;
case 0x707b19:c.instructions+=6;goto B707b19;
case 0x707b1a:c.instructions+=5;goto B707b1a;
case 0x707b1d:c.instructions+=4;goto B707b1d;
case 0x707b1f:c.instructions+=3;goto B707b1f;
case 0x707b20:c.instructions+=2;goto B707b20;
case 0x707b21:c.instructions+=1;goto B707b21;
case 0x707b22:goto L707b22;
case 0x707b23:c.instructions+=13;goto B707b23;
case 0x707b25:c.instructions+=12;goto B707b25;
case 0x707b28:c.instructions+=11;goto B707b28;
case 0x707b2b:c.instructions+=10;goto B707b2b;
case 0x707b2c:c.instructions+=9;goto B707b2c;
case 0x707b30:c.instructions+=8;goto B707b30;
case 0x707b33:c.instructions+=7;goto B707b33;
case 0x707b34:c.instructions+=6;goto B707b34;
case 0x707b37:c.instructions+=5;goto B707b37;
case 0x707b38:c.instructions+=4;goto B707b38;
case 0x707b3e:c.instructions+=3;goto B707b3e;
case 0x707b3f:c.instructions+=2;goto B707b3f;
case 0x707b41:c.instructions+=1;goto B707b41;
case 0x707b43:goto L707b43;
case 0x707b44:goto L707b44;
case 0x707b46:c.instructions+=2;goto B707b46;
case 0x707b48:c.instructions+=1;goto B707b48;
case 0x707b4a:goto L707b4a;
case 0x707b4d:c.instructions+=1;goto B707b4d;
case 0x707b4f:goto L707b4f;
case 0x707b52:c.instructions+=3;goto B707b52;
case 0x707b54:c.instructions+=2;goto B707b54;
case 0x707b57:c.instructions+=1;goto B707b57;
case 0x707b59:goto L707b59;
case 0x707b5c:goto L707b5c;
case 0x707b5d:c.instructions+=1;goto B707b5d;
case 0x707b5f:goto L707b5f;
case 0x707b62:c.instructions+=2;goto B707b62;
case 0x707b64:c.instructions+=1;goto B707b64;
case 0x707b66:goto L707b66;
case 0x707b68:c.instructions+=2;goto B707b68;
case 0x707b69:c.instructions+=1;goto B707b69;
case 0x707b6b:goto L707b6b;
case 0x707b6e:c.instructions+=8;goto B707b6e;
case 0x707b71:c.instructions+=7;goto B707b71;
case 0x707b73:c.instructions+=6;goto B707b73;
case 0x707b76:c.instructions+=5;goto B707b76;
case 0x707b79:c.instructions+=4;goto B707b79;
case 0x707b7c:c.instructions+=3;goto B707b7c;
case 0x707b83:c.instructions+=2;goto B707b83;
case 0x707b86:c.instructions+=1;goto B707b86;
case 0x707b8c:goto L707b8c;
case 0x707b92:c.instructions+=1;goto B707b92;
case 0x707b94:goto L707b94;
case 0x707b95:goto L707b95;
case 0x707b97:c.instructions+=6;goto B707b97;
case 0x707b98:c.instructions+=5;goto B707b98;
case 0x707b9b:c.instructions+=4;goto B707b9b;
case 0x707b9e:c.instructions+=3;goto B707b9e;
case 0x707b9f:c.instructions+=2;goto B707b9f;
case 0x707ba0:c.instructions+=1;goto B707ba0;
case 0x707ba1:goto L707ba1;
case 0x707ba2:c.instructions+=5;goto B707ba2;
case 0x707ba4:c.instructions+=4;goto B707ba4;
case 0x707ba8:c.instructions+=3;goto B707ba8;
case 0x707bab:c.instructions+=2;goto B707bab;
case 0x707bae:c.instructions+=1;goto B707bae;
case 0x707bb0:goto L707bb0;
case 0x707bb3:c.instructions+=4;goto B707bb3;
case 0x707bb8:c.instructions+=3;goto B707bb8;
case 0x707bba:c.instructions+=2;goto B707bba;
case 0x707bbc:c.instructions+=1;goto B707bbc;
case 0x707bbe:goto L707bbe;
case 0x707bc5:goto L707bc5;
case 0x707bc8:c.instructions+=2;goto B707bc8;
case 0x707bc9:c.instructions+=1;goto B707bc9;
case 0x707bca:goto L707bca;
case 0x707bcb:c.instructions+=24;goto B707bcb;
case 0x707bcd:c.instructions+=23;goto B707bcd;
case 0x707bd0:c.instructions+=22;goto B707bd0;
case 0x707bd3:c.instructions+=21;goto B707bd3;
case 0x707bd7:c.instructions+=20;goto B707bd7;
case 0x707bda:c.instructions+=19;goto B707bda;
case 0x707be1:c.instructions+=18;goto B707be1;
case 0x707be8:c.instructions+=17;goto B707be8;
case 0x707beb:c.instructions+=16;goto B707beb;
case 0x707bee:c.instructions+=15;goto B707bee;
case 0x707bef:c.instructions+=14;goto B707bef;
case 0x707bf3:c.instructions+=13;goto B707bf3;
case 0x707bf6:c.instructions+=12;goto B707bf6;
case 0x707bf8:c.instructions+=11;goto B707bf8;
case 0x707bfc:c.instructions+=10;goto B707bfc;
case 0x707c00:c.instructions+=9;goto B707c00;
case 0x707c03:c.instructions+=8;goto B707c03;
case 0x707c05:c.instructions+=7;goto B707c05;
case 0x707c08:c.instructions+=6;goto B707c08;
case 0x707c0a:c.instructions+=5;goto B707c0a;
case 0x707c0d:c.instructions+=4;goto B707c0d;
case 0x707c14:c.instructions+=3;goto B707c14;
case 0x707c15:c.instructions+=2;goto B707c15;
case 0x707c16:c.instructions+=1;goto B707c16;
case 0x707c18:goto L707c18;
case 0x707c19:c.instructions+=6;goto B707c19;
case 0x707c1b:c.instructions+=5;goto B707c1b;
case 0x707c1c:c.instructions+=4;goto B707c1c;
case 0x707c1f:c.instructions+=3;goto B707c1f;
case 0x707c20:c.instructions+=2;goto B707c20;
case 0x707c22:c.instructions+=1;goto B707c22;
case 0x707c24:goto L707c24;
case 0x707c27:c.instructions+=1;goto B707c27;
case 0x707c2c:goto L707c2c;
case 0x707c2d:c.instructions+=3;goto B707c2d;
case 0x707c2f:c.instructions+=2;goto B707c2f;
case 0x707c31:c.instructions+=1;goto B707c31;
case 0x707c33:goto L707c33;
case 0x707c34:c.instructions+=1;goto B707c34;
case 0x707c36:goto L707c36;
case 0x707c38:c.instructions+=4;goto B707c38;
case 0x707c39:c.instructions+=3;goto B707c39;
case 0x707c3a:c.instructions+=2;goto B707c3a;
case 0x707c3b:c.instructions+=1;goto B707c3b;
case 0x707c3c:goto L707c3c;
case 0x707c3d:c.instructions+=21;goto B707c3d;
case 0x707c3f:c.instructions+=20;goto B707c3f;
case 0x707c42:c.instructions+=19;goto B707c42;
case 0x707c45:c.instructions+=18;goto B707c45;
case 0x707c47:c.instructions+=17;goto B707c47;
case 0x707c4a:c.instructions+=16;goto B707c4a;
case 0x707c4b:c.instructions+=15;goto B707c4b;
case 0x707c4f:c.instructions+=14;goto B707c4f;
case 0x707c52:c.instructions+=13;goto B707c52;
case 0x707c54:c.instructions+=12;goto B707c54;
case 0x707c58:c.instructions+=11;goto B707c58;
case 0x707c5c:c.instructions+=10;goto B707c5c;
case 0x707c5f:c.instructions+=9;goto B707c5f;
case 0x707c61:c.instructions+=8;goto B707c61;
case 0x707c64:c.instructions+=7;goto B707c64;
case 0x707c66:c.instructions+=6;goto B707c66;
case 0x707c69:c.instructions+=5;goto B707c69;
case 0x707c70:c.instructions+=4;goto B707c70;
case 0x707c77:c.instructions+=3;goto B707c77;
case 0x707c78:c.instructions+=2;goto B707c78;
case 0x707c79:c.instructions+=1;goto B707c79;
case 0x707c7a:goto L707c7a;
case 0x707c7b:c.instructions+=14;goto B707c7b;
case 0x707c7d:c.instructions+=13;goto B707c7d;
case 0x707c7e:c.instructions+=12;goto B707c7e;
case 0x707c7f:c.instructions+=11;goto B707c7f;
case 0x707c82:c.instructions+=10;goto B707c82;
case 0x707c85:c.instructions+=9;goto B707c85;
case 0x707c87:c.instructions+=8;goto B707c87;
case 0x707c8a:c.instructions+=7;goto B707c8a;
case 0x707c8b:c.instructions+=6;goto B707c8b;
case 0x707c8e:c.instructions+=5;goto B707c8e;
case 0x707c90:c.instructions+=4;goto B707c90;
case 0x707c92:c.instructions+=3;goto B707c92;
case 0x707c95:c.instructions+=2;goto B707c95;
case 0x707c98:c.instructions+=1;goto B707c98;
case 0x707c9a:goto L707c9a;
case 0x707c9d:c.instructions+=21;goto B707c9d;
case 0x707ca0:c.instructions+=20;goto B707ca0;
case 0x707ca2:c.instructions+=19;goto B707ca2;
case 0x707ca3:c.instructions+=18;goto B707ca3;
case 0x707ca5:c.instructions+=17;goto B707ca5;
case 0x707ca9:c.instructions+=16;goto B707ca9;
case 0x707cab:c.instructions+=15;goto B707cab;
case 0x707cae:c.instructions+=14;goto B707cae;
case 0x707cb0:c.instructions+=13;goto B707cb0;
case 0x707cb2:c.instructions+=12;goto B707cb2;
case 0x707cb5:c.instructions+=11;goto B707cb5;
case 0x707cb8:c.instructions+=10;goto B707cb8;
case 0x707cba:c.instructions+=9;goto B707cba;
case 0x707cbe:c.instructions+=8;goto B707cbe;
case 0x707cc2:c.instructions+=7;goto B707cc2;
case 0x707cc5:c.instructions+=6;goto B707cc5;
case 0x707cc7:c.instructions+=5;goto B707cc7;
case 0x707cca:c.instructions+=4;goto B707cca;
case 0x707ccc:c.instructions+=3;goto B707ccc;
case 0x707ccf:c.instructions+=2;goto B707ccf;
case 0x707cd2:c.instructions+=1;goto B707cd2;
case 0x707cd3:goto L707cd3;
case 0x707cd6:c.instructions+=17;goto B707cd6;
case 0x707cd9:c.instructions+=16;goto B707cd9;
case 0x707cdb:c.instructions+=15;goto B707cdb;
case 0x707cdd:c.instructions+=14;goto B707cdd;
case 0x707cdf:c.instructions+=13;goto B707cdf;
case 0x707ce0:c.instructions+=12;goto B707ce0;
case 0x707ce3:c.instructions+=11;goto B707ce3;
case 0x707ce6:c.instructions+=10;goto B707ce6;
case 0x707ce9:c.instructions+=9;goto B707ce9;
case 0x707cec:c.instructions+=8;goto B707cec;
case 0x707cee:c.instructions+=7;goto B707cee;
case 0x707cef:c.instructions+=6;goto B707cef;
case 0x707cf2:c.instructions+=5;goto B707cf2;
case 0x707cf3:c.instructions+=4;goto B707cf3;
case 0x707cf5:c.instructions+=3;goto B707cf5;
case 0x707cf6:c.instructions+=2;goto B707cf6;
case 0x707cf7:c.instructions+=1;goto B707cf7;
case 0x707cf8:goto L707cf8;
case 0x707cf9:c.instructions+=8;goto B707cf9;
case 0x707cfb:c.instructions+=7;goto B707cfb;
case 0x707cfe:c.instructions+=6;goto B707cfe;
case 0x707cff:c.instructions+=5;goto B707cff;
case 0x707d00:c.instructions+=4;goto B707d00;
case 0x707d06:c.instructions+=3;goto B707d06;
case 0x707d08:c.instructions+=2;goto B707d08;
case 0x707d09:c.instructions+=1;goto B707d09;
case 0x707d0e:goto L707d0e;
case 0x707d10:c.instructions+=3;goto B707d10;
case 0x707d11:c.instructions+=2;goto B707d11;
case 0x707d17:c.instructions+=1;goto B707d17;
case 0x707d1c:goto L707d1c;
case 0x707d1e:c.instructions+=3;goto B707d1e;
case 0x707d1f:c.instructions+=2;goto B707d1f;
case 0x707d22:c.instructions+=1;goto B707d22;
case 0x707d27:goto L707d27;
case 0x707d2a:c.instructions+=4;goto B707d2a;
case 0x707d2d:c.instructions+=3;goto B707d2d;
case 0x707d34:c.instructions+=2;goto B707d34;
case 0x707d3a:c.instructions+=1;goto B707d3a;
case 0x707d40:goto L707d40;
case 0x707d42:c.instructions+=2;goto B707d42;
case 0x707d43:c.instructions+=1;goto B707d43;
case 0x707d48:goto L707d48;
case 0x707d4a:c.instructions+=3;goto B707d4a;
case 0x707d4b:c.instructions+=2;goto B707d4b;
case 0x707d51:c.instructions+=1;goto B707d51;
case 0x707d56:goto L707d56;
case 0x707d5c:c.instructions+=4;goto B707d5c;
case 0x707d62:c.instructions+=3;goto B707d62;
case 0x707d65:c.instructions+=2;goto B707d65;
case 0x707d67:c.instructions+=1;goto B707d67;
case 0x707d69:goto L707d69;
case 0x707d6b:c.instructions+=1;goto B707d6b;
case 0x707d70:goto L707d70;
case 0x707d71:c.instructions+=2;goto B707d71;
case 0x707d77:c.instructions+=1;goto B707d77;
case 0x707d7c:goto L707d7c;
case 0x707d7e:c.instructions+=2;goto B707d7e;
case 0x707d7f:c.instructions+=1;goto B707d7f;
case 0x707d84:goto L707d84;
case 0x707d87:c.instructions+=4;goto B707d87;
case 0x707d8a:c.instructions+=3;goto B707d8a;
case 0x707d91:c.instructions+=2;goto B707d91;
case 0x707d97:c.instructions+=1;goto B707d97;
case 0x707d99:goto L707d99;
case 0x707da0:c.instructions+=1;goto B707da0;
case 0x707da2:goto L707da2;
case 0x707da4:c.instructions+=6;goto B707da4;
case 0x707da5:c.instructions+=5;goto B707da5;
case 0x707da6:c.instructions+=4;goto B707da6;
case 0x707dac:c.instructions+=3;goto B707dac;
case 0x707dad:c.instructions+=2;goto B707dad;
case 0x707dae:c.instructions+=1;goto B707dae;
case 0x707db3:goto L707db3;
case 0x707db4:c.instructions+=2;goto B707db4;
case 0x707db5:c.instructions+=1;goto B707db5;
case 0x707db7:goto L707db7;
case 0x707db9:c.instructions+=5;goto B707db9;
case 0x707dbc:c.instructions+=4;goto B707dbc;
case 0x707dc2:c.instructions+=3;goto B707dc2;
case 0x707dc3:c.instructions+=2;goto B707dc3;
case 0x707dc4:c.instructions+=1;goto B707dc4;
case 0x707dc9:goto L707dc9;
case 0x707dcb:c.instructions+=2;goto B707dcb;
case 0x707dcc:c.instructions+=1;goto B707dcc;
case 0x707dd1:goto L707dd1;
case 0x707dd4:c.instructions+=1;goto B707dd4;
case 0x707dda:goto L707dda;
case 0x707de0:c.instructions+=3;goto B707de0;
case 0x707de6:c.instructions+=2;goto B707de6;
case 0x707de8:c.instructions+=1;goto B707de8;
case 0x707ded:goto L707ded;
case 0x707df4:c.instructions+=3;goto B707df4;
case 0x707df5:c.instructions+=2;goto B707df5;
case 0x707df6:c.instructions+=1;goto B707df6;
case 0x707df8:goto L707df8;
case 0x707dfe:c.instructions+=2;goto B707dfe;
case 0x707e00:c.instructions+=1;goto B707e00;
case 0x707e05:goto L707e05;
case 0x707e06:c.instructions+=1;goto B707e06;
case 0x707e07:goto L707e07;
case 0x707e0d:c.instructions+=3;goto B707e0d;
case 0x707e0f:c.instructions+=2;goto B707e0f;
case 0x707e10:c.instructions+=1;goto B707e10;
case 0x707e15:goto L707e15;
case 0x707e18:c.instructions+=5;goto B707e18;
case 0x707e1a:c.instructions+=4;goto B707e1a;
case 0x707e20:c.instructions+=3;goto B707e20;
case 0x707e21:c.instructions+=2;goto B707e21;
case 0x707e23:c.instructions+=1;goto B707e23;
case 0x707e28:goto L707e28;
case 0x707e2b:c.instructions+=5;goto B707e2b;
case 0x707e2d:c.instructions+=4;goto B707e2d;
case 0x707e2f:c.instructions+=3;goto B707e2f;
case 0x707e30:c.instructions+=2;goto B707e30;
case 0x707e33:c.instructions+=1;goto B707e33;
case 0x707e38:goto L707e38;
case 0x707e3b:c.instructions+=5;goto B707e3b;
case 0x707e41:c.instructions+=4;goto B707e41;
case 0x707e43:c.instructions+=3;goto B707e43;
case 0x707e44:c.instructions+=2;goto B707e44;
case 0x707e46:c.instructions+=1;goto B707e46;
case 0x707e4b:goto L707e4b;
case 0x707e4e:c.instructions+=4;goto B707e4e;
case 0x707e51:c.instructions+=3;goto B707e51;
case 0x707e53:c.instructions+=2;goto B707e53;
case 0x707e5a:c.instructions+=1;goto B707e5a;
case 0x707e5c:goto L707e5c;
case 0x707e66:goto L707e66;
case 0x707e6d:c.instructions+=1;goto B707e6d;
case 0x707e6f:goto L707e6f;
case 0x707e79:goto L707e79;
case 0x707e7f:c.instructions+=19;goto B707e7f;
case 0x707e86:c.instructions+=18;goto B707e86;
case 0x707e89:c.instructions+=17;goto B707e89;
case 0x707e8b:c.instructions+=16;goto B707e8b;
case 0x707e91:c.instructions+=15;goto B707e91;
case 0x707e93:c.instructions+=14;goto B707e93;
case 0x707e96:c.instructions+=13;goto B707e96;
case 0x707e9c:c.instructions+=12;goto B707e9c;
case 0x707ea3:c.instructions+=11;goto B707ea3;
case 0x707ea6:c.instructions+=10;goto B707ea6;
case 0x707eac:c.instructions+=9;goto B707eac;
case 0x707eaf:c.instructions+=8;goto B707eaf;
case 0x707eb1:c.instructions+=7;goto B707eb1;
case 0x707eb4:c.instructions+=6;goto B707eb4;
case 0x707eba:c.instructions+=5;goto B707eba;
case 0x707ebc:c.instructions+=4;goto B707ebc;
case 0x707ebf:c.instructions+=3;goto B707ebf;
case 0x707ec1:c.instructions+=2;goto B707ec1;
case 0x707ec7:c.instructions+=1;goto B707ec7;
case 0x707ec9:goto L707ec9;
case 0x707ecb:c.instructions+=4;goto B707ecb;
case 0x707ecc:c.instructions+=3;goto B707ecc;
case 0x707ed2:c.instructions+=2;goto B707ed2;
case 0x707ed8:c.instructions+=1;goto B707ed8;
case 0x707eda:goto L707eda;
case 0x707edc:c.instructions+=4;goto B707edc;
case 0x707edf:c.instructions+=3;goto B707edf;
case 0x707ee2:c.instructions+=2;goto B707ee2;
case 0x707ee4:c.instructions+=1;goto B707ee4;
case 0x707ee6:goto L707ee6;
case 0x707ef0:c.instructions+=2;goto B707ef0;
case 0x707efa:c.instructions+=1;goto B707efa;
case 0x707efc:goto L707efc;
case 0x707eff:c.instructions+=2;goto B707eff;
case 0x707f01:c.instructions+=1;goto B707f01;
case 0x707f03:goto L707f03;
case 0x707f0d:c.instructions+=2;goto B707f0d;
case 0x707f17:c.instructions+=1;goto B707f17;
case 0x707f19:goto L707f19;
case 0x707f23:c.instructions+=1;goto B707f23;
case 0x707f2d:goto L707f2d;
case 0x707f2f:c.instructions+=1;goto B707f2f;
case 0x707f30:goto L707f30;
case 0x707f33:c.instructions+=2;goto B707f33;
case 0x707f35:c.instructions+=1;goto B707f35;
case 0x707f37:goto L707f37;
case 0x707f3d:c.instructions+=1;goto B707f3d;
case 0x707f3f:goto L707f3f;
case 0x707f42:c.instructions+=5;goto B707f42;
case 0x707f44:c.instructions+=4;goto B707f44;
case 0x707f47:c.instructions+=3;goto B707f47;
case 0x707f49:c.instructions+=2;goto B707f49;
case 0x707f4c:c.instructions+=1;goto B707f4c;
case 0x707f4e:goto L707f4e;
case 0x707f58:c.instructions+=2;goto B707f58;
case 0x707f62:c.instructions+=1;goto B707f62;
case 0x707f64:goto L707f64;
case 0x707f67:c.instructions+=2;goto B707f67;
case 0x707f69:c.instructions+=1;goto B707f69;
case 0x707f6b:goto L707f6b;
case 0x707f75:c.instructions+=2;goto B707f75;
case 0x707f7f:c.instructions+=1;goto B707f7f;
case 0x707f81:goto L707f81;
case 0x707f8b:goto L707f8b;
case 0x707f91:goto L707f91;
case 0x707f97:c.instructions+=18;goto B707f97;
case 0x707f9a:c.instructions+=17;goto B707f9a;
case 0x707f9d:c.instructions+=16;goto B707f9d;
case 0x707f9f:c.instructions+=15;goto B707f9f;
case 0x707fa5:c.instructions+=14;goto B707fa5;
case 0x707fa7:c.instructions+=13;goto B707fa7;
case 0x707fa9:c.instructions+=12;goto B707fa9;
case 0x707fab:c.instructions+=11;goto B707fab;
case 0x707fb1:c.instructions+=10;goto B707fb1;
case 0x707fb4:c.instructions+=9;goto B707fb4;
case 0x707fb7:c.instructions+=8;goto B707fb7;
case 0x707fbd:c.instructions+=7;goto B707fbd;
case 0x707fc0:c.instructions+=6;goto B707fc0;
case 0x707fc6:c.instructions+=5;goto B707fc6;
case 0x707fc9:c.instructions+=4;goto B707fc9;
case 0x707fcf:c.instructions+=3;goto B707fcf;
case 0x707fd5:c.instructions+=2;goto B707fd5;
case 0x707fd6:c.instructions+=1;goto B707fd6;
case 0x707fdb:goto L707fdb;
case 0x707fe1:c.instructions+=4;goto B707fe1;
case 0x707fe2:c.instructions+=3;goto B707fe2;
case 0x707fe3:c.instructions+=2;goto B707fe3;
case 0x707fe9:c.instructions+=1;goto B707fe9;
case 0x707feb:goto L707feb;
case 0x707ff1:c.instructions+=1;goto B707ff1;
case 0x707ff3:goto L707ff3;
case 0x707ff5:c.instructions+=3;goto B707ff5;
case 0x707ff8:c.instructions+=2;goto B707ff8;
case 0x707ffe:c.instructions+=1;goto B707ffe;
default:missing_instruction(c.pc);}
B707001:L707001:{c.instructions+=3;NFSU2_TR(0x707001);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B707002:{NFSU2_TR(0x707002);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w1(R+512,u8((r4(U+0))<(u32(0x40ull))));
}
B707005:{NFSU2_TR(0x707005);
if(r1(R+512)){TAIL_STATIC(0x706fdcu,706);}
}
B707007:L707007:{c.instructions+=4;NFSU2_TR(0x707007);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x63cull))));
__builtin_memmove((R+0),(U+0),4);
}
B70700d:{NFSU2_TR(0x70700d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70700e:{NFSU2_TR(0x70700e);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70700f:{NFSU2_TR(0x70700f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x707014ull));
TAIL_STATIC(0x706ac2u,706);
}
B707014:L707014:{c.instructions+=3;NFSU2_TR(0x707014);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B707015:{NFSU2_TR(0x707015);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B707016:{NFSU2_TR(0x707016);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B707018:L707018:{c.instructions+=1;NFSU2_TR(0x707018);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B70701a:L70701a:{c.instructions+=5;NFSU2_TR(0x70701a);
u8 U[13];
w4(U+0,u32(u32(u32(0x7c6018ull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
w4(R+0,u32(r1(U+12)));
}
B707022:{NFSU2_TR(0x707022);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B707023:{NFSU2_TR(0x707023);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x150ull))));
__builtin_memmove((R+0),(U+0),4);
}
B707029:{NFSU2_TR(0x707029);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70702a:{NFSU2_TR(0x70702a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x70702full));
TAIL_STATIC(0x70d9e8u,70d);
}
B70702f:L70702f:{c.instructions+=4;NFSU2_TR(0x70702f);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B707031:{NFSU2_TR(0x707031);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B707032:{NFSU2_TR(0x707032);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B707033:{NFSU2_TR(0x707033);
if(r1(R+518)){{goto L707056;}}
}
B707035:L707035:{c.instructions+=4;NFSU2_TR(0x707035);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x150ull))));
__builtin_memmove((R+0),(U+0),4);
}
B70703b:{NFSU2_TR(0x70703b);
u8 U[4];
w4(U+0,u32(0x7ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70703d:{NFSU2_TR(0x70703d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70703e:{NFSU2_TR(0x70703e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x707043ull));
{goto L707c18;}
}
B707043:L707043:{c.instructions+=7;NFSU2_TR(0x707043);
w1(R+0,shl<u8>(r1(R+0),u64(u32(0x1ull))));
w1(R+518,u8((r1(R+0))==(u8(0x0ull))));
}
B707045:{NFSU2_TR(0x707045);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B707046:{NFSU2_TR(0x707046);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B707047:{NFSU2_TR(0x707047);
__builtin_memmove((R+4),(R+518),1);
}
B70704a:{NFSU2_TR(0x70704a);
w1(R+4,u8(u32(r1(R+4))+u32(r1(R+0))));
}
B70704c:{NFSU2_TR(0x70704c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B70704f:{NFSU2_TR(0x70704f);
u8 U[13];
w4(U+0,u32(u32(u32(0x560ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+4),1);
s1(u32(r4(U+8)),r1(U+12));
}
B707056:L707056:{c.instructions+=3;NFSU2_TR(0x707056);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B707057:{NFSU2_TR(0x707057);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w1(R+512,u8((r4(U+0))<(u32(0xeull))));
}
B70705a:{NFSU2_TR(0x70705a);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x70701au);}goto L70701a;}}
}
B70705c:L70705c:{c.instructions+=3;NFSU2_TR(0x70705c);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0xeull))));
}
B70705f:{NFSU2_TR(0x70705f);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w1(R+512,u8((r4(U+0))<(u32(0x1cull))));
}
B707062:{NFSU2_TR(0x707062);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x707018u);}goto L707018;}}
}
B707064:L707064:{c.instructions+=2;NFSU2_TR(0x707064);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B707068:{NFSU2_TR(0x707068);
w4(R+0,u32(0x7c6050ull));
}
B70706d:L70706d:{c.instructions+=3;NFSU2_TR(0x70706d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B707070:{NFSU2_TR(0x707070);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B707073:{NFSU2_TR(0x707073);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
w4(U+4,u32(0x2ull));
s4(u32(r4(U+0)),r4(U+4));
}
B70707a:L70707a:{c.instructions+=2;NFSU2_TR(0x70707a);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B70707c:{NFSU2_TR(0x70707c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70707f:L70707f:{c.instructions+=1;NFSU2_TR(0x70707f);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B707081:L707081:{c.instructions+=6;NFSU2_TR(0x707081);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B707084:{NFSU2_TR(0x707084);
u8 U[9];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
w4(R+0,u32(r1(U+8)));
}
B707088:{NFSU2_TR(0x707088);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B707089:{NFSU2_TR(0x707089);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x150ull))));
__builtin_memmove((R+0),(U+0),4);
}
B70708f:{NFSU2_TR(0x70708f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B707090:{NFSU2_TR(0x707090);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x707095ull));
TAIL_STATIC(0x70d9e8u,70d);
}
B707095:L707095:{c.instructions+=4;NFSU2_TR(0x707095);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B707097:{NFSU2_TR(0x707097);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B707098:{NFSU2_TR(0x707098);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B707099:{NFSU2_TR(0x707099);
if(r1(R+518)){{goto L7070b8;}}
}
B70709b:L70709b:{c.instructions+=4;NFSU2_TR(0x70709b);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x150ull))));
__builtin_memmove((R+0),(U+0),4);
}
B7070a1:{NFSU2_TR(0x7070a1);
u8 U[4];
w4(U+0,u32(0x7ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7070a3:{NFSU2_TR(0x7070a3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7070a4:{NFSU2_TR(0x7070a4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7070a9ull));
{goto L707c18;}
}
B7070a9:L7070a9:{c.instructions+=7;NFSU2_TR(0x7070a9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B7070aa:{NFSU2_TR(0x7070aa);
w1(R+0,shl<u8>(r1(R+0),u64(u32(0x1ull))));
w1(R+518,u8((r1(R+0))==(u8(0x0ull))));
}
B7070ac:{NFSU2_TR(0x7070ac);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B7070ad:{NFSU2_TR(0x7070ad);
__builtin_memmove((R+4),(R+518),1);
}
B7070b0:{NFSU2_TR(0x7070b0);
w1(R+4,u8(u32(r1(R+4))+u32(r1(R+0))));
}
B7070b2:{NFSU2_TR(0x7070b2);
u8 U[13];
w4(U+0,u32(u32(u32(0xffffffe8ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+4),1);
s1(u32(r4(U+8)),r1(U+12));
}
B7070b6:{NFSU2_TR(0x7070b6);
{goto L7070c2;}
}
B7070b8:L7070b8:{c.instructions+=2;NFSU2_TR(0x7070b8);
u8 U[7];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x0ull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B7070bc:{NFSU2_TR(0x7070bc);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L7070d3;}}
}
B7070be:L7070be:{c.instructions+=1;NFSU2_TR(0x7070be);
u8 U[13];
w4(U+0,u32(u32(u32(0xffffffe8ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
__builtin_memmove((R+4),(U+12),1);
}
B7070c2:L7070c2:{c.instructions+=5;NFSU2_TR(0x7070c2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7070c5:{NFSU2_TR(0x7070c5);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+28))));
}
B7070c7:{NFSU2_TR(0x7070c7);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0xbull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B7070ca:{NFSU2_TR(0x7070ca);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+24))));
}
B7070cc:{NFSU2_TR(0x7070cc);
u8 U[13];
w4(U+0,u32(u32(u32(0x3b6ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+4),1);
s1(u32(r4(U+8)),r1(U+12));
}
B7070d3:L7070d3:{c.instructions+=3;NFSU2_TR(0x7070d3);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B7070d4:{NFSU2_TR(0x7070d4);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w1(R+512,u8((r4(U+0))<(u32(0xbull))));
}
B7070d7:{NFSU2_TR(0x7070d7);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x707081u);}goto L707081;}}
}
B7070d9:L7070d9:{c.instructions+=4;NFSU2_TR(0x7070d9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0xbull))));
s4(u32(r4(U+0)),r4(U+4));
}
B7070dd:{NFSU2_TR(0x7070dd);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B7070de:{NFSU2_TR(0x7070de);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w1(R+512,u8((r4(U+0))<(u32(0x6ull))));
}
B7070e1:{NFSU2_TR(0x7070e1);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x70707fu);}goto L70707f;}}
}
B7070e3:L7070e3:{c.instructions+=4;NFSU2_TR(0x7070e3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x12ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B7070e7:{NFSU2_TR(0x7070e7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B7070ea:{NFSU2_TR(0x7070ea);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7070ed:{NFSU2_TR(0x7070ed);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x70707au);}goto L70707a;}}
}
B7070ef:L7070ef:{c.instructions+=3;NFSU2_TR(0x7070ef);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x6ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B7070f3:{NFSU2_TR(0x7070f3);
u8 U[4];
w1(R+523,sborrow<u32>(r4(R+0),u32(0x7c61dcull)));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x7c61dcull))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B7070f8:{NFSU2_TR(0x7070f8);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x70706du);}goto L70706d;}}
}
B7070fe:L7070fe:{c.instructions+=2;NFSU2_TR(0x7070fe);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7070ff:{NFSU2_TR(0x7070ff);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x707104ull));
TAIL_STATIC(0x70f16eu,70f);
}
B707104:L707104:{c.instructions+=6;NFSU2_TR(0x707104);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B707105:{NFSU2_TR(0x707105);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B707106:{NFSU2_TR(0x707106);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B707107:{NFSU2_TR(0x707107);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B707108:{NFSU2_TR(0x707108);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B707109:{NFSU2_TR(0x707109);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B70710a:L70710a:{c.instructions+=42;NFSU2_TR(0x70710a);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70710b:{NFSU2_TR(0x70710b);
__builtin_memmove((R+20),(R+16),4);
}
B70710d:{NFSU2_TR(0x70710d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B707110:{NFSU2_TR(0x707110);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B707111:{NFSU2_TR(0x707111);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B707113:{NFSU2_TR(0x707113);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xccull))));
__builtin_memmove((R+28),(U+0),4);
}
B707119:{NFSU2_TR(0x707119);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B70711a:{NFSU2_TR(0x70711a);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B70711b:{NFSU2_TR(0x70711b);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B70711c:{NFSU2_TR(0x70711c);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B70711d:{NFSU2_TR(0x70711d);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B70711f:{NFSU2_TR(0x70711f);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xdcull))));
__builtin_memmove((R+28),(U+0),4);
}
B707125:{NFSU2_TR(0x707125);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B707126:{NFSU2_TR(0x707126);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B707127:{NFSU2_TR(0x707127);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B707128:{NFSU2_TR(0x707128);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B707129:{NFSU2_TR(0x707129);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B70712b:{NFSU2_TR(0x70712b);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xecull))));
__builtin_memmove((R+28),(U+0),4);
}
B707131:{NFSU2_TR(0x707131);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B707132:{NFSU2_TR(0x707132);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B707133:{NFSU2_TR(0x707133);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B707134:{NFSU2_TR(0x707134);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B707135:{NFSU2_TR(0x707135);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B707137:{NFSU2_TR(0x707137);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xfcull))));
__builtin_memmove((R+28),(U+0),4);
}
B70713d:{NFSU2_TR(0x70713d);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B70713e:{NFSU2_TR(0x70713e);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B70713f:{NFSU2_TR(0x70713f);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B707140:{NFSU2_TR(0x707140);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B707141:{NFSU2_TR(0x707141);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))|u32(u32(0xffffffffull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B707144:{NFSU2_TR(0x707144);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B707146:{NFSU2_TR(0x707146);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xd0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70714c:{NFSU2_TR(0x70714c);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xe0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B707152:{NFSU2_TR(0x707152);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xf0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B707158:{NFSU2_TR(0x707158);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x100ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70715e:{NFSU2_TR(0x70715e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B70715f:{NFSU2_TR(0x70715f);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xd4ull))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B707166:{NFSU2_TR(0x707166);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xe4ull))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B70716d:{NFSU2_TR(0x70716d);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xf4ull))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B707174:{NFSU2_TR(0x707174);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x104ull))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B70717b:{NFSU2_TR(0x70717b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B70717c:{NFSU2_TR(0x70717c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B70717d:{NFSU2_TR(0x70717d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B70717e:L70717e:{c.instructions+=13;NFSU2_TR(0x70717e);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70717f:{NFSU2_TR(0x70717f);
__builtin_memmove((R+20),(R+16),4);
}
B707181:{NFSU2_TR(0x707181);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B707184:{NFSU2_TR(0x707184);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1f8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B70718a:{NFSU2_TR(0x70718a);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70718b:{NFSU2_TR(0x70718b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70718c:{NFSU2_TR(0x70718c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70718d:{NFSU2_TR(0x70718d);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70718f:{NFSU2_TR(0x70718f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B707190:{NFSU2_TR(0x707190);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B707192:{NFSU2_TR(0x707192);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B707194:{NFSU2_TR(0x707194);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+24))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B707196:{NFSU2_TR(0x707196);
if(r1(R+518)){{goto L7071d6;}}
}
B707198:L707198:{c.instructions+=1;NFSU2_TR(0x707198);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B70719a:L70719a:{c.instructions+=14;NFSU2_TR(0x70719a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B7071a0:{NFSU2_TR(0x7071a0);
u8 U[16];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
w4(U+12,u32(u32(r4(U+12))|u32(u32(0xffffffffull))));
s4(u32(r4(U+8)),r4(U+12));
}
B7071a5:{NFSU2_TR(0x7071a5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B7071ab:{NFSU2_TR(0x7071ab);
u8 U[14];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
w2(U+12,u16(0x4ull));
s2(u32(r4(U+8)),r2(U+12));
}
B7071b2:{NFSU2_TR(0x7071b2);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B7071b8:{NFSU2_TR(0x7071b8);
u8 U[14];
w4(U+0,u32(u32(u32(0xaull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+8),2);
s2(u32(r4(U+8)),r2(U+12));
}
B7071bd:{NFSU2_TR(0x7071bd);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B7071c3:{NFSU2_TR(0x7071c3);
u8 U[9];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+8),1);
s1(u32(r4(U+4)),r1(U+8));
}
B7071c6:{NFSU2_TR(0x7071c6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1f8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B7071cc:{NFSU2_TR(0x7071cc);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B7071cd:{NFSU2_TR(0x7071cd);
w4(R+12,u32(u32(r4(R+12))+u32(r4(R+24))));
}
B7071cf:{NFSU2_TR(0x7071cf);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x10ull))));
}
B7071d2:{NFSU2_TR(0x7071d2);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w1(R+512,u8((r4(R+28))<(r4(U+0))));
}
B7071d4:{NFSU2_TR(0x7071d4);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x70719au);}goto L70719a;}}
}
B7071d6:L7071d6:{c.instructions+=5;NFSU2_TR(0x7071d6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1f8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7071dc:{NFSU2_TR(0x7071dc);
w4(R+4,shr<u32>(r4(R+4),u64(u32(0x1ull))));
}
B7071de:{NFSU2_TR(0x7071de);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B7071e0:{NFSU2_TR(0x7071e0);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+24))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B7071e2:{NFSU2_TR(0x7071e2);
if(r1(R+518)){{goto L707250;}}
}
B7071e4:L7071e4:{c.instructions+=1;NFSU2_TR(0x7071e4);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B7071e6:L7071e6:{c.instructions+=23;NFSU2_TR(0x7071e6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x110ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B7071ec:{NFSU2_TR(0x7071ec);
u8 U[16];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
w4(U+12,u32(u32(r4(U+12))|u32(u32(0xffffffffull))));
s4(u32(r4(U+8)),r4(U+12));
}
B7071f1:{NFSU2_TR(0x7071f1);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x110ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B7071f7:{NFSU2_TR(0x7071f7);
u8 U[14];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
w2(U+12,u16(0x4ull));
s2(u32(r4(U+8)),r2(U+12));
}
B7071fe:{NFSU2_TR(0x7071fe);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x110ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B707204:{NFSU2_TR(0x707204);
u8 U[9];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+8),1);
s1(u32(r4(U+4)),r1(U+8));
}
B707207:{NFSU2_TR(0x707207);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x110ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B70720d:{NFSU2_TR(0x70720d);
u8 U[14];
w4(U+0,u32(u32(u32(0xaull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+8),2);
s2(u32(r4(U+8)),r2(U+12));
}
B707212:{NFSU2_TR(0x707212);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x114ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B707218:{NFSU2_TR(0x707218);
u8 U[16];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
w4(U+12,u32(u32(r4(U+12))|u32(u32(0xffffffffull))));
s4(u32(r4(U+8)),r4(U+12));
}
B70721d:{NFSU2_TR(0x70721d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x114ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B707223:{NFSU2_TR(0x707223);
u8 U[14];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
w2(U+12,u16(0x4ull));
s2(u32(r4(U+8)),r2(U+12));
}
B70722a:{NFSU2_TR(0x70722a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x114ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B707230:{NFSU2_TR(0x707230);
u8 U[9];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+8),1);
s1(u32(r4(U+4)),r1(U+8));
}
B707233:{NFSU2_TR(0x707233);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x114ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B707239:{NFSU2_TR(0x707239);
u8 U[14];
w4(U+0,u32(u32(u32(0xaull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+8),2);
s2(u32(r4(U+8)),r2(U+12));
}
B70723e:{NFSU2_TR(0x70723e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1f8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B707244:{NFSU2_TR(0x707244);
w4(R+12,shr<u32>(r4(R+12),u64(u32(0x1ull))));
}
B707246:{NFSU2_TR(0x707246);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B707247:{NFSU2_TR(0x707247);
w4(R+12,u32(u32(r4(R+12))+u32(r4(R+24))));
}
B707249:{NFSU2_TR(0x707249);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x10ull))));
}
B70724c:{NFSU2_TR(0x70724c);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w1(R+512,u8((r4(R+28))<(r4(U+0))));
}
B70724e:{NFSU2_TR(0x70724e);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7071e6u);}goto L7071e6;}}
}
B707250:L707250:{c.instructions+=2;NFSU2_TR(0x707250);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x19cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(R+512,u8((r1(U+5))<(u8(0x6ull))));
}
B707257:{NFSU2_TR(0x707257);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L70727b;}}
}
B707259:L707259:{c.instructions+=10;NFSU2_TR(0x707259);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x110ull))));
__builtin_memmove((R+4),(U+0),4);
}
B70725f:{NFSU2_TR(0x70725f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+24),(U+0),4);
}
B707261:{NFSU2_TR(0x707261);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B707264:{NFSU2_TR(0x707264);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+4),(U+0),4);
}
B707266:{NFSU2_TR(0x707266);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+8),2);
s2(u32(r4(U+0)),r2(U+4));
}
B70726a:{NFSU2_TR(0x70726a);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x114ull))));
__builtin_memmove((R+4),(U+0),4);
}
B707270:{NFSU2_TR(0x707270);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+24),(U+0),4);
}
B707272:{NFSU2_TR(0x707272);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B707275:{NFSU2_TR(0x707275);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+4),(U+0),4);
}
B707277:{NFSU2_TR(0x707277);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+8),2);
s2(u32(r4(U+0)),r2(U+4));
}
B70727b:L70727b:{c.instructions+=9;NFSU2_TR(0x70727b);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70727d:{NFSU2_TR(0x70727d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B70727e:{NFSU2_TR(0x70727e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B70727f:{NFSU2_TR(0x70727f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B707280:{NFSU2_TR(0x707280);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x124ull))));
__builtin_memmove((U+4),(R+8),2);
s2(u32(r4(U+0)),r2(U+4));
}
B707287:{NFSU2_TR(0x707287);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x12cull))));
w2(U+4,u16(0x80ull));
s2(u32(r4(U+0)),r2(U+4));
}
B707290:{NFSU2_TR(0x707290);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x134ull))));
w2(U+4,u16(0x80ull));
s2(u32(r4(U+0)),r2(U+4));
}
B707299:{NFSU2_TR(0x707299);
w1(R+512,carry<u32>(r4(R+0),u32(0x12eull)));
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x12eull))));
}
B70729e:{NFSU2_TR(0x70729e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B70729f:L70729f:{c.instructions+=7;NFSU2_TR(0x70729f);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+8),2);
s2(u32(r4(U+0)),r2(U+4));
}
B7072a3:{NFSU2_TR(0x7072a3);
u8 U[2];
__builtin_memmove((U+0),(R+8),2);
s2(u32(r4(R+0)),r2(U+0));
}
B7072a6:{NFSU2_TR(0x7072a6);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+8),2);
s2(u32(r4(U+0)),r2(U+4));
}
B7072aa:{NFSU2_TR(0x7072aa);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B7072ab:{NFSU2_TR(0x7072ab);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B7072ac:{NFSU2_TR(0x7072ac);
u8 U[6];
w1(R+523,sborrow<u32>(r4(R+4),u32(0x1ull)));
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B7072ad:{NFSU2_TR(0x7072ad);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x70729fu);}goto L70729f;}}
}
B7072af:L7072af:{c.instructions+=2;NFSU2_TR(0x7072af);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B7072b0:{NFSU2_TR(0x7072b0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7072b1:L7072b1:{c.instructions+=18;NFSU2_TR(0x7072b1);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7072b2:{NFSU2_TR(0x7072b2);
__builtin_memmove((R+20),(R+16),4);
}
B7072b4:{NFSU2_TR(0x7072b4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7072b7:{NFSU2_TR(0x7072b7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7072ba:{NFSU2_TR(0x7072ba);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B7072bd:{NFSU2_TR(0x7072bd);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7072be:{NFSU2_TR(0x7072be);
u8 U[16];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+24),(U+12),4);
}
B7072c2:{NFSU2_TR(0x7072c2);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7072c5:{NFSU2_TR(0x7072c5);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B7072c8:{NFSU2_TR(0x7072c8);
u8 U[45];
w4(U+37,u32(u32(u32(0x7ull))&u32(u32(0x1full))));
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
B7072cb:{NFSU2_TR(0x7072cb);
u8 U[10];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),2);
__builtin_memmove((R+0),(U+8),2);
}
B7072cf:{NFSU2_TR(0x7072cf);
u8 U[6];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xaull))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B7072d3:{NFSU2_TR(0x7072d3);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7072d6:{NFSU2_TR(0x7072d6);
u8 U[10];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x7c5ab0ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),2);
__builtin_memmove((R+0),(U+8),2);
}
B7072de:{NFSU2_TR(0x7072de);
u8 U[6];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B7072e2:{NFSU2_TR(0x7072e2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B7072e3:{NFSU2_TR(0x7072e3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B7072e4:{NFSU2_TR(0x7072e4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7072e5:L7072e5:{c.instructions+=18;NFSU2_TR(0x7072e5);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7072e6:{NFSU2_TR(0x7072e6);
__builtin_memmove((R+20),(R+16),4);
}
B7072e8:{NFSU2_TR(0x7072e8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7072eb:{NFSU2_TR(0x7072eb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7072ee:{NFSU2_TR(0x7072ee);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B7072f1:{NFSU2_TR(0x7072f1);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7072f2:{NFSU2_TR(0x7072f2);
u8 U[16];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+24),(U+12),4);
}
B7072f6:{NFSU2_TR(0x7072f6);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7072f9:{NFSU2_TR(0x7072f9);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B7072fc:{NFSU2_TR(0x7072fc);
u8 U[45];
w4(U+37,u32(u32(u32(0x7ull))&u32(u32(0x1full))));
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
B7072ff:{NFSU2_TR(0x7072ff);
u8 U[10];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),2);
__builtin_memmove((R+0),(U+8),2);
}
B707303:{NFSU2_TR(0x707303);
u8 U[6];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xaull))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B707307:{NFSU2_TR(0x707307);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B70730a:{NFSU2_TR(0x70730a);
u8 U[10];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x7c5ab0ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),2);
__builtin_memmove((R+0),(U+8),2);
}
B707312:{NFSU2_TR(0x707312);
u8 U[6];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B707316:{NFSU2_TR(0x707316);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B707317:{NFSU2_TR(0x707317);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B707318:{NFSU2_TR(0x707318);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B707319:L707319:{c.instructions+=17;NFSU2_TR(0x707319);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70731a:{NFSU2_TR(0x70731a);
__builtin_memmove((R+20),(R+16),4);
}
B70731c:{NFSU2_TR(0x70731c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xcull))));
}
B70731f:{NFSU2_TR(0x70731f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B707322:{NFSU2_TR(0x707322);
__builtin_memmove((R+4),(R+0),4);
}
B707324:{NFSU2_TR(0x707324);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(u32(0xc6ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B70732a:{NFSU2_TR(0x70732a);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70732b:{NFSU2_TR(0x70732b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B70732e:{NFSU2_TR(0x70732e);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x944ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B707335:{NFSU2_TR(0x707335);
u8 U[12];
w4(U+0,u32(u32(u32(0x3b6ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B70733c:{NFSU2_TR(0x70733c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70733f:{NFSU2_TR(0x70733f);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x13cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B707345:{NFSU2_TR(0x707345);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x13cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B70734b:{NFSU2_TR(0x70734b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70734c:{NFSU2_TR(0x70734c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70734d:{NFSU2_TR(0x70734d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B707350:{NFSU2_TR(0x707350);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L707361;}}
}
B707352:L707352:{c.instructions+=3;NFSU2_TR(0x707352);
u8 U[7];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x19dull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x0ull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B707359:{NFSU2_TR(0x707359);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x150ull))));
__builtin_memmove((R+28),(U+0),4);
}
B70735f:{NFSU2_TR(0x70735f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L707367;}}
}
B707361:L707361:{c.instructions+=1;NFSU2_TR(0x707361);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x170ull))));
__builtin_memmove((R+28),(U+0),4);
}
B707367:L707367:{c.instructions+=17;NFSU2_TR(0x707367);
__builtin_memmove((R+4),(R+0),4);
}
B707369:{NFSU2_TR(0x707369);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(u32(0xbull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B70736c:{NFSU2_TR(0x70736c);
u8 U[12];
w4(U+0,u32(u32(u32(0x3a0ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B707373:{NFSU2_TR(0x707373);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B707376:{NFSU2_TR(0x707376);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B707379:{NFSU2_TR(0x707379);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+4))),1);
w4(R+4,u32(r1(U+0)));
}
B70737c:{NFSU2_TR(0x70737c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B70737f:{NFSU2_TR(0x70737f);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+4))));
}
B707381:{NFSU2_TR(0x707381);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B707384:{NFSU2_TR(0x707384);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+4))),1);
w4(R+4,u32(r1(U+0)));
}
B707387:{NFSU2_TR(0x707387);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+4))));
}
B707389:{NFSU2_TR(0x707389);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B70738c:{NFSU2_TR(0x70738c);
u8 U[12];
w4(U+0,u32(u32(u32(0x542ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+24),(U+8),4);
}
B707393:{NFSU2_TR(0x707393);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
w4(R+0,u32(r1(U+0)));
}
B707396:{NFSU2_TR(0x707396);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B707397:{NFSU2_TR(0x707397);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B707398:{NFSU2_TR(0x707398);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x70739dull));
TAIL_STATIC(0x70d9e8u,70d);
}
B70739d:L70739d:{c.instructions+=5;NFSU2_TR(0x70739d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B70739e:{NFSU2_TR(0x70739e);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B7073a0:{NFSU2_TR(0x7073a0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7073a3:{NFSU2_TR(0x7073a3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B7073a4:{NFSU2_TR(0x7073a4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L7073b8;}}
}
B7073a6:L7073a6:{c.instructions+=5;NFSU2_TR(0x7073a6);
u8 U[1];
w1(U+0,u8(0x0ull));
s1(u32(r4(R+0)),r1(U+0));
}
B7073a9:{NFSU2_TR(0x7073a9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7073ac:{NFSU2_TR(0x7073ac);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x13ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B7073b0:{NFSU2_TR(0x7073b0);
u8 U[1];
w1(U+0,u8(0x0ull));
s1(u32(r4(R+0)),r1(U+0));
}
B7073b3:{NFSU2_TR(0x7073b3);
{goto L7074e2;}
}
B7073b8:L7073b8:{c.instructions+=7;NFSU2_TR(0x7073b8);
u8 U[1];
w1(U+0,u8(0x1ull));
s1(u32(r4(R+0)),r1(U+0));
}
B7073bb:{NFSU2_TR(0x7073bb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7073be:{NFSU2_TR(0x7073be);
u8 U[1];
w1(U+0,u8(0x1ull));
s1(u32(r4(R+0)),r1(U+0));
}
B7073c1:{NFSU2_TR(0x7073c1);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B7073c5:{NFSU2_TR(0x7073c5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7073c6:{NFSU2_TR(0x7073c6);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7073c7:{NFSU2_TR(0x7073c7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7073ccull));
TAIL_STATIC(0x70d9e8u,70d);
}
B7073cc:L7073cc:{c.instructions+=4;NFSU2_TR(0x7073cc);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B7073ce:{NFSU2_TR(0x7073ce);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B7073cf:{NFSU2_TR(0x7073cf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B7073d0:{NFSU2_TR(0x7073d0);
if(r1(R+518)){{goto L7074c8;}}
}
B7073d6:L7073d6:{c.instructions+=5;NFSU2_TR(0x7073d6);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B7073da:{NFSU2_TR(0x7073da);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7073db:{NFSU2_TR(0x7073db);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7073dc:{NFSU2_TR(0x7073dc);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x13ull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B7073e0:{NFSU2_TR(0x7073e0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7073e5ull));
TAIL_STATIC(0x70d9e8u,70d);
}
B7073e5:L7073e5:{c.instructions+=4;NFSU2_TR(0x7073e5);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B7073e7:{NFSU2_TR(0x7073e7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B7073e8:{NFSU2_TR(0x7073e8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B7073e9:{NFSU2_TR(0x7073e9);
if(r1(R+518)){{goto L70748e;}}
}
B7073ef:L7073ef:{c.instructions+=5;NFSU2_TR(0x7073ef);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B7073f2:{NFSU2_TR(0x7073f2);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B7073f6:{NFSU2_TR(0x7073f6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7073f7:{NFSU2_TR(0x7073f7);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7073f8:{NFSU2_TR(0x7073f8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7073fdull));
TAIL_STATIC(0x70d9e8u,70d);
}
B7073fd:L7073fd:{c.instructions+=4;NFSU2_TR(0x7073fd);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B7073ff:{NFSU2_TR(0x7073ff);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B707400:{NFSU2_TR(0x707400);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B707401:{NFSU2_TR(0x707401);
if(r1(R+518)){{goto L707434;}}
}
B707403:L707403:{c.instructions+=4;NFSU2_TR(0x707403);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B707407:{NFSU2_TR(0x707407);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B707408:{NFSU2_TR(0x707408);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B707409:{NFSU2_TR(0x707409);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x70740eull));
TAIL_STATIC(0x70d9e8u,70d);
}
B70740e:L70740e:{c.instructions+=4;NFSU2_TR(0x70740e);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B707410:{NFSU2_TR(0x707410);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B707411:{NFSU2_TR(0x707411);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B707412:{NFSU2_TR(0x707412);
if(r1(R+518)){{goto L707424;}}
}
B707414:L707414:{c.instructions+=4;NFSU2_TR(0x707414);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xaull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B707418:{NFSU2_TR(0x707418);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B707419:{NFSU2_TR(0x707419);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70741a:{NFSU2_TR(0x70741a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x70741full));
TAIL_STATIC(0x70d9e8u,70d);
}
B70741f:L70741f:{c.instructions+=2;NFSU2_TR(0x70741f);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x9ull))));
}
B707422:{NFSU2_TR(0x707422);
{goto L707442;}
}
B707424:L707424:{c.instructions+=4;NFSU2_TR(0x707424);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x9ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B707428:{NFSU2_TR(0x707428);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B707429:{NFSU2_TR(0x707429);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70742a:{NFSU2_TR(0x70742a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x70742full));
TAIL_STATIC(0x70d9e8u,70d);
}
B70742f:L70742f:{c.instructions+=2;NFSU2_TR(0x70742f);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x7ull))));
}
B707432:{NFSU2_TR(0x707432);
{goto L707442;}
}
B707434:L707434:{c.instructions+=4;NFSU2_TR(0x707434);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B707438:{NFSU2_TR(0x707438);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B707439:{NFSU2_TR(0x707439);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70743a:{NFSU2_TR(0x70743a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x70743full));
TAIL_STATIC(0x70d9e8u,70d);
}
B70743f:L70743f:{c.instructions+=1;NFSU2_TR(0x70743f);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x5ull))));
}
B707442:L707442:{c.instructions+=8;NFSU2_TR(0x707442);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B707445:{NFSU2_TR(0x707445);
__builtin_memmove((R+24),(R+0),4);
}
B707447:{NFSU2_TR(0x707447);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7c5630ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B70744e:{NFSU2_TR(0x70744e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B707451:{NFSU2_TR(0x707451);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7c5632ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(s32(s16(r2(U+4)))));
}
B707458:{NFSU2_TR(0x707458);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B707459:{NFSU2_TR(0x707459);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B70745a:{NFSU2_TR(0x70745a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70745d:L70745d:{c.instructions+=5;NFSU2_TR(0x70745d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B707460:{NFSU2_TR(0x707460);
u8 U[13];
w4(U+0,u32(u32(u32(0x7c5634ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
w4(R+0,u32(r1(U+12)));
}
B707468:{NFSU2_TR(0x707468);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B707469:{NFSU2_TR(0x707469);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70746a:{NFSU2_TR(0x70746a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x70746full));
TAIL_STATIC(0x70d9e8u,70d);
}
B70746f:L70746f:{c.instructions+=7;NFSU2_TR(0x70746f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B707470:{NFSU2_TR(0x707470);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B707471:{NFSU2_TR(0x707471);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B707474:{NFSU2_TR(0x707474);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r1(U+0))));
}
B707476:{NFSU2_TR(0x707476);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+0))));
s4(u32(r4(U+0)),r4(U+4));
}
B707479:{NFSU2_TR(0x707479);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B70747c:{NFSU2_TR(0x70747c);
u8 U[1];
w1(U+0,u8(!(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x70745du);}goto L70745d;}}
}
B70747e:L70747e:{c.instructions+=2;NFSU2_TR(0x70747e);
__builtin_memmove((R+4),(R+28),4);
}
B707480:{NFSU2_TR(0x707480);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x707485ull));
TAIL_STATIC(0x706a61u,706);
}
B707485:L707485:{c.instructions+=4;NFSU2_TR(0x707485);
__builtin_memmove((R+4),(R+0),4);
}
B707487:{NFSU2_TR(0x707487);
w4(R+4,u32(0-u32(r4(R+4))));
}
B707489:{NFSU2_TR(0x707489);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+4,u32(u32(r4(R+4))^u32(r4(U+4))));
}
B70748c:{NFSU2_TR(0x70748c);
{goto L7074da;}
}
B70748e:L70748e:{c.instructions+=4;NFSU2_TR(0x70748e);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B707492:{NFSU2_TR(0x707492);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B707493:{NFSU2_TR(0x707493);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B707494:{NFSU2_TR(0x707494);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x707499ull));
TAIL_STATIC(0x70d9e8u,70d);
}
B707499:L707499:{c.instructions+=4;NFSU2_TR(0x707499);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B70749b:{NFSU2_TR(0x70749b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B70749c:{NFSU2_TR(0x70749c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B70749d:{NFSU2_TR(0x70749d);
if(r1(R+518)){{goto L7074b6;}}
}
B70749f:L70749f:{c.instructions+=5;NFSU2_TR(0x70749f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7074a2:{NFSU2_TR(0x7074a2);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x5ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B7074a6:{NFSU2_TR(0x7074a6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7074a7:{NFSU2_TR(0x7074a7);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7074a8:{NFSU2_TR(0x7074a8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7074adull));
TAIL_STATIC(0x70d9e8u,70d);
}
B7074ad:L7074ad:{c.instructions+=5;NFSU2_TR(0x7074ad);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B7074ae:{NFSU2_TR(0x7074ae);
__builtin_memmove((R+24),(R+0),4);
}
B7074b0:{NFSU2_TR(0x7074b0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B7074b1:{NFSU2_TR(0x7074b1);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x3ull))));
}
B7074b4:{NFSU2_TR(0x7074b4);
{goto L7074b9;}
}
B7074b6:L7074b6:{c.instructions+=2;NFSU2_TR(0x7074b6);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7074b8:{NFSU2_TR(0x7074b8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B7074b9:L7074b9:{c.instructions+=2;NFSU2_TR(0x7074b9);
__builtin_memmove((R+4),(R+28),4);
}
B7074bb:{NFSU2_TR(0x7074bb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7074c0ull));
TAIL_STATIC(0x706a61u,706);
}
B7074c0:L7074c0:{c.instructions+=4;NFSU2_TR(0x7074c0);
__builtin_memmove((R+4),(R+0),4);
}
B7074c2:{NFSU2_TR(0x7074c2);
w4(R+4,u32(0-u32(r4(R+4))));
}
B7074c4:{NFSU2_TR(0x7074c4);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+24))));
}
B7074c6:{NFSU2_TR(0x7074c6);
{goto L7074da;}
}
B7074c8:L7074c8:{c.instructions+=3;NFSU2_TR(0x7074c8);
__builtin_memmove((R+4),(R+28),4);
}
B7074ca:{NFSU2_TR(0x7074ca);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x13ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B7074ce:{NFSU2_TR(0x7074ce);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7074d3ull));
TAIL_STATIC(0x706a61u,706);
}
B7074d3:L7074d3:{c.instructions+=3;NFSU2_TR(0x7074d3);
__builtin_memmove((R+4),(R+0),4);
}
B7074d5:{NFSU2_TR(0x7074d5);
w4(R+4,u32(0-u32(r4(R+4))));
}
B7074d7:{NFSU2_TR(0x7074d7);
w4(R+4,u32(u32(r4(R+4))^u32(u32(0x1ull))));
}
B7074da:L7074da:{c.instructions+=3;NFSU2_TR(0x7074da);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+0))));
}
B7074dc:{NFSU2_TR(0x7074dc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7074df:{NFSU2_TR(0x7074df);
u8 U[2];
__builtin_memmove((U+0),(R+4),2);
s2(u32(r4(R+0)),r2(U+0));
}
B7074e2:L7074e2:{c.instructions+=1;NFSU2_TR(0x7074e2);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1bull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B7074e6:L7074e6:{c.instructions+=10;NFSU2_TR(0x7074e6);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1bull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(r1(U+4)));
}
B7074ea:{NFSU2_TR(0x7074ea);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x13ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B7074ee:{NFSU2_TR(0x7074ee);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7074f1:{NFSU2_TR(0x7074f1);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x7c56f0ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B7074f8:{NFSU2_TR(0x7074f8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B7074fb:{NFSU2_TR(0x7074fb);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+24),(U+4),4);
}
B7074fe:{NFSU2_TR(0x7074fe);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+24)))));
w8(U+8,u64(s64(s32(u32(0xbull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+24,u32(r8(U+16)));
}
B707501:{NFSU2_TR(0x707501);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+24,u32(u32(r4(R+24))+u32(r4(U+4))));
}
B707504:{NFSU2_TR(0x707504);
u8 U[7];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1bull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(R+512,u8((r1(U+5))<(u8(0x1ull))));
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x1ull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B707508:{NFSU2_TR(0x707508);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L707514;}}
}
B70750a:L70750a:{c.instructions+=2;NFSU2_TR(0x70750a);
u8 U[7];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x13ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x0ull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B70750e:{NFSU2_TR(0x70750e);
if(r1(R+518)){{goto L70765f;}}
}
B707514:L707514:{c.instructions+=4;NFSU2_TR(0x707514);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
w4(R+0,u32(r1(U+0)));
}
B707517:{NFSU2_TR(0x707517);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B707518:{NFSU2_TR(0x707518);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B707519:{NFSU2_TR(0x707519);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x70751eull));
TAIL_STATIC(0x70d9e8u,70d);
}
B70751e:L70751e:{c.instructions+=4;NFSU2_TR(0x70751e);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B707520:{NFSU2_TR(0x707520);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B707521:{NFSU2_TR(0x707521);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B707522:{NFSU2_TR(0x707522);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L70765f;}}
}
B707528:L707528:{c.instructions+=4;NFSU2_TR(0x707528);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B70752c:{NFSU2_TR(0x70752c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70752d:{NFSU2_TR(0x70752d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70752e:{NFSU2_TR(0x70752e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x707533ull));
TAIL_STATIC(0x70d9e8u,70d);
}
B707533:L707533:{c.instructions+=4;NFSU2_TR(0x707533);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B707535:{NFSU2_TR(0x707535);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B707536:{NFSU2_TR(0x707536);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B707537:{NFSU2_TR(0x707537);
if(r1(R+518)){{goto L70779b;}}
}
B70753d:L70753d:{c.instructions+=10;NFSU2_TR(0x70753d);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1bull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(R+512,u8((r1(U+5))<(u8(0x6ull))));
}
B707541:{NFSU2_TR(0x707541);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x13ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B707545:{NFSU2_TR(0x707545);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(R+0))));
w4(R+0,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B707547:{NFSU2_TR(0x707547);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B707548:{NFSU2_TR(0x707548);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0xeull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B70754b:{NFSU2_TR(0x70754b);
u8 U[12];
w4(U+0,u32(u32(u32(0x560ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+24),(U+8),4);
}
B707552:{NFSU2_TR(0x707552);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
w4(R+0,u32(r1(U+0)));
}
B707555:{NFSU2_TR(0x707555);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B707556:{NFSU2_TR(0x707556);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B707557:{NFSU2_TR(0x707557);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x70755cull));
TAIL_STATIC(0x70d9e8u,70d);
}
B70755c:L70755c:{c.instructions+=4;NFSU2_TR(0x70755c);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B70755e:{NFSU2_TR(0x70755e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B70755f:{NFSU2_TR(0x70755f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B707560:{NFSU2_TR(0x707560);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L70759b;}}
}
B707562:L707562:{c.instructions+=4;NFSU2_TR(0x707562);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B707566:{NFSU2_TR(0x707566);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B707567:{NFSU2_TR(0x707567);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B707568:{NFSU2_TR(0x707568);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x70756dull));
TAIL_STATIC(0x70d9e8u,70d);
}
B70756d:L70756d:{c.instructions+=4;NFSU2_TR(0x70756d);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B70756f:{NFSU2_TR(0x70756f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B707570:{NFSU2_TR(0x707570);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B707571:{NFSU2_TR(0x707571);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L707586;}}
}
B707573:L707573:{c.instructions+=4;NFSU2_TR(0x707573);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B707577:{NFSU2_TR(0x707577);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B707578:{NFSU2_TR(0x707578);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B707579:{NFSU2_TR(0x707579);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x70757eull));
TAIL_STATIC(0x70d9e8u,70d);
}
B70757e:L70757e:{c.instructions+=4;NFSU2_TR(0x70757e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B70757f:{NFSU2_TR(0x70757f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B707580:{NFSU2_TR(0x707580);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B707581:{NFSU2_TR(0x707581);
{goto L707657;}
}
B707586:L707586:{c.instructions+=4;NFSU2_TR(0x707586);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B70758a:{NFSU2_TR(0x70758a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70758b:{NFSU2_TR(0x70758b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70758c:{NFSU2_TR(0x70758c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x707591ull));
TAIL_STATIC(0x70d9e8u,70d);
}
B707591:L707591:{c.instructions+=4;NFSU2_TR(0x707591);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B707592:{NFSU2_TR(0x707592);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B707593:{NFSU2_TR(0x707593);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x3ull))));
}
B707596:{NFSU2_TR(0x707596);
{goto L707657;}
}
B70759b:L70759b:{c.instructions+=4;NFSU2_TR(0x70759b);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B70759f:{NFSU2_TR(0x70759f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7075a0:{NFSU2_TR(0x7075a0);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7075a1:{NFSU2_TR(0x7075a1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7075a6ull));
TAIL_STATIC(0x70d9e8u,70d);
}
B7075a6:L7075a6:{c.instructions+=4;NFSU2_TR(0x7075a6);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B7075a8:{NFSU2_TR(0x7075a8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B7075a9:{NFSU2_TR(0x7075a9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B7075aa:{NFSU2_TR(0x7075aa);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L7075e4;}}
}
B7075ac:L7075ac:{c.instructions+=4;NFSU2_TR(0x7075ac);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B7075b0:{NFSU2_TR(0x7075b0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7075b1:{NFSU2_TR(0x7075b1);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7075b2:{NFSU2_TR(0x7075b2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7075b7ull));
TAIL_STATIC(0x70d9e8u,70d);
}
B7075b7:L7075b7:{c.instructions+=4;NFSU2_TR(0x7075b7);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B7075b9:{NFSU2_TR(0x7075b9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B7075ba:{NFSU2_TR(0x7075ba);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B7075bb:{NFSU2_TR(0x7075bb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L7075d2;}}
}
B7075bd:L7075bd:{c.instructions+=4;NFSU2_TR(0x7075bd);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B7075c1:{NFSU2_TR(0x7075c1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7075c2:{NFSU2_TR(0x7075c2);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7075c3:{NFSU2_TR(0x7075c3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7075c8ull));
TAIL_STATIC(0x70d9e8u,70d);
}
B7075c8:L7075c8:{c.instructions+=4;NFSU2_TR(0x7075c8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B7075c9:{NFSU2_TR(0x7075c9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B7075ca:{NFSU2_TR(0x7075ca);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x5ull))));
}
B7075cd:{NFSU2_TR(0x7075cd);
{goto L707657;}
}
B7075d2:L7075d2:{c.instructions+=4;NFSU2_TR(0x7075d2);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B7075d6:{NFSU2_TR(0x7075d6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7075d7:{NFSU2_TR(0x7075d7);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7075d8:{NFSU2_TR(0x7075d8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7075ddull));
TAIL_STATIC(0x70d9e8u,70d);
}
B7075dd:L7075dd:{c.instructions+=4;NFSU2_TR(0x7075dd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B7075de:{NFSU2_TR(0x7075de);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B7075df:{NFSU2_TR(0x7075df);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x7ull))));
}
B7075e2:{NFSU2_TR(0x7075e2);
{goto L707657;}
}
B7075e4:L7075e4:{c.instructions+=4;NFSU2_TR(0x7075e4);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B7075e8:{NFSU2_TR(0x7075e8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7075e9:{NFSU2_TR(0x7075e9);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7075ea:{NFSU2_TR(0x7075ea);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7075efull));
TAIL_STATIC(0x70d9e8u,70d);
}
B7075ef:L7075ef:{c.instructions+=5;NFSU2_TR(0x7075ef);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7075f2:{NFSU2_TR(0x7075f2);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x9ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B7075f6:{NFSU2_TR(0x7075f6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7075f7:{NFSU2_TR(0x7075f7);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7075f8:{NFSU2_TR(0x7075f8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7075fdull));
TAIL_STATIC(0x70d9e8u,70d);
}
B7075fd:L7075fd:{c.instructions+=7;NFSU2_TR(0x7075fd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B707600:{NFSU2_TR(0x707600);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B707603:{NFSU2_TR(0x707603);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B707606:{NFSU2_TR(0x707606);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xaull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B70760a:{NFSU2_TR(0x70760a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70760b:{NFSU2_TR(0x70760b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70760c:{NFSU2_TR(0x70760c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x707611ull));
TAIL_STATIC(0x70d9e8u,70d);
}
B707611:L707611:{c.instructions+=7;NFSU2_TR(0x707611);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B707614:{NFSU2_TR(0x707614);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B707617:{NFSU2_TR(0x707617);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70761a:{NFSU2_TR(0x70761a);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xbull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B70761e:{NFSU2_TR(0x70761e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70761f:{NFSU2_TR(0x70761f);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B707620:{NFSU2_TR(0x707620);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x707625ull));
TAIL_STATIC(0x70d9e8u,70d);
}
B707625:L707625:{c.instructions+=7;NFSU2_TR(0x707625);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B707628:{NFSU2_TR(0x707628);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x8ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B70762b:{NFSU2_TR(0x70762b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70762e:{NFSU2_TR(0x70762e);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B707632:{NFSU2_TR(0x707632);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B707633:{NFSU2_TR(0x707633);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B707634:{NFSU2_TR(0x707634);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x707639ull));
TAIL_STATIC(0x70d9e8u,70d);
}
B707639:L707639:{c.instructions+=6;NFSU2_TR(0x707639);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B70763c:{NFSU2_TR(0x70763c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+0))));
s4(u32(r4(U+0)),r4(U+4));
}
B70763f:{NFSU2_TR(0x70763f);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xdull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B707643:{NFSU2_TR(0x707643);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B707644:{NFSU2_TR(0x707644);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B707645:{NFSU2_TR(0x707645);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x70764aull));
TAIL_STATIC(0x70d9e8u,70d);
}
B70764a:L70764a:{c.instructions+=4;NFSU2_TR(0x70764a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B70764d:{NFSU2_TR(0x70764d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x30ull))));
}
B707650:{NFSU2_TR(0x707650);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B707653:{NFSU2_TR(0x707653);
u8 U[12];
w4(U+0,u32(u32(u32(0x9ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B707657:L707657:{c.instructions+=2;NFSU2_TR(0x707657);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1bull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+4,u8(u32(r1(U+4))+u32(r1(R+0))));
s1(u32(r4(U+0)),r1(U+4));
}
B70765a:{NFSU2_TR(0x70765a);
{goto L70778f;}
}
B70765f:L70765f:{c.instructions+=4;NFSU2_TR(0x70765f);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B707663:{NFSU2_TR(0x707663);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B707664:{NFSU2_TR(0x707664);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B707665:{NFSU2_TR(0x707665);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x70766aull));
TAIL_STATIC(0x70d9e8u,70d);
}
B70766a:L70766a:{c.instructions+=4;NFSU2_TR(0x70766a);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B70766c:{NFSU2_TR(0x70766c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B70766d:{NFSU2_TR(0x70766d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B70766e:{NFSU2_TR(0x70766e);
if(r1(R+518)){{goto L707760;}}
}
B707674:L707674:{c.instructions+=5;NFSU2_TR(0x707674);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B707678:{NFSU2_TR(0x707678);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B707679:{NFSU2_TR(0x707679);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70767a:{NFSU2_TR(0x70767a);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x13ull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B70767e:{NFSU2_TR(0x70767e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x707683ull));
TAIL_STATIC(0x70d9e8u,70d);
}
B707683:L707683:{c.instructions+=4;NFSU2_TR(0x707683);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B707685:{NFSU2_TR(0x707685);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B707686:{NFSU2_TR(0x707686);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B707687:{NFSU2_TR(0x707687);
if(r1(R+518)){{goto L707729;}}
}
B70768d:L70768d:{c.instructions+=4;NFSU2_TR(0x70768d);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B707691:{NFSU2_TR(0x707691);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B707692:{NFSU2_TR(0x707692);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B707693:{NFSU2_TR(0x707693);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x707698ull));
TAIL_STATIC(0x70d9e8u,70d);
}
B707698:L707698:{c.instructions+=4;NFSU2_TR(0x707698);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B70769a:{NFSU2_TR(0x70769a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B70769b:{NFSU2_TR(0x70769b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B70769c:{NFSU2_TR(0x70769c);
if(r1(R+518)){{goto L7076cf;}}
}
B70769e:L70769e:{c.instructions+=4;NFSU2_TR(0x70769e);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B7076a2:{NFSU2_TR(0x7076a2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7076a3:{NFSU2_TR(0x7076a3);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7076a4:{NFSU2_TR(0x7076a4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7076a9ull));
TAIL_STATIC(0x70d9e8u,70d);
}
B7076a9:L7076a9:{c.instructions+=4;NFSU2_TR(0x7076a9);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B7076ab:{NFSU2_TR(0x7076ab);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B7076ac:{NFSU2_TR(0x7076ac);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B7076ad:{NFSU2_TR(0x7076ad);
if(r1(R+518)){{goto L7076bf;}}
}
B7076af:L7076af:{c.instructions+=4;NFSU2_TR(0x7076af);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xaull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B7076b3:{NFSU2_TR(0x7076b3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7076b4:{NFSU2_TR(0x7076b4);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7076b5:{NFSU2_TR(0x7076b5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7076baull));
TAIL_STATIC(0x70d9e8u,70d);
}
B7076ba:L7076ba:{c.instructions+=2;NFSU2_TR(0x7076ba);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x9ull))));
}
B7076bd:{NFSU2_TR(0x7076bd);
{goto L7076dd;}
}
B7076bf:L7076bf:{c.instructions+=4;NFSU2_TR(0x7076bf);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x9ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B7076c3:{NFSU2_TR(0x7076c3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7076c4:{NFSU2_TR(0x7076c4);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7076c5:{NFSU2_TR(0x7076c5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7076caull));
TAIL_STATIC(0x70d9e8u,70d);
}
B7076ca:L7076ca:{c.instructions+=2;NFSU2_TR(0x7076ca);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x7ull))));
}
B7076cd:{NFSU2_TR(0x7076cd);
{goto L7076dd;}
}
B7076cf:L7076cf:{c.instructions+=4;NFSU2_TR(0x7076cf);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B7076d3:{NFSU2_TR(0x7076d3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7076d4:{NFSU2_TR(0x7076d4);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7076d5:{NFSU2_TR(0x7076d5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7076daull));
TAIL_STATIC(0x70d9e8u,70d);
}
B7076da:L7076da:{c.instructions+=1;NFSU2_TR(0x7076da);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x5ull))));
}
B7076dd:L7076dd:{c.instructions+=8;NFSU2_TR(0x7076dd);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B7076e0:{NFSU2_TR(0x7076e0);
__builtin_memmove((R+24),(R+0),4);
}
B7076e2:{NFSU2_TR(0x7076e2);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7c5630ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B7076e9:{NFSU2_TR(0x7076e9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7076ec:{NFSU2_TR(0x7076ec);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7c5632ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(s32(s16(r2(U+4)))));
}
B7076f3:{NFSU2_TR(0x7076f3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B7076f4:{NFSU2_TR(0x7076f4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B7076f5:{NFSU2_TR(0x7076f5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7076f8:L7076f8:{c.instructions+=5;NFSU2_TR(0x7076f8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7076fb:{NFSU2_TR(0x7076fb);
u8 U[13];
w4(U+0,u32(u32(u32(0x7c5634ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
w4(R+0,u32(r1(U+12)));
}
B707703:{NFSU2_TR(0x707703);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B707704:{NFSU2_TR(0x707704);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B707705:{NFSU2_TR(0x707705);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x70770aull));
TAIL_STATIC(0x70d9e8u,70d);
}
B70770a:L70770a:{c.instructions+=7;NFSU2_TR(0x70770a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B70770b:{NFSU2_TR(0x70770b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B70770c:{NFSU2_TR(0x70770c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B70770f:{NFSU2_TR(0x70770f);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r1(U+0))));
}
B707711:{NFSU2_TR(0x707711);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+0))));
s4(u32(r4(U+0)),r4(U+4));
}
B707714:{NFSU2_TR(0x707714);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B707717:{NFSU2_TR(0x707717);
u8 U[1];
w1(U+0,u8(!(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7076f8u);}goto L7076f8;}}
}
B707719:L707719:{c.instructions+=2;NFSU2_TR(0x707719);
__builtin_memmove((R+4),(R+28),4);
}
B70771b:{NFSU2_TR(0x70771b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x707720ull));
TAIL_STATIC(0x706a61u,706);
}
B707720:L707720:{c.instructions+=4;NFSU2_TR(0x707720);
__builtin_memmove((R+4),(R+0),4);
}
B707722:{NFSU2_TR(0x707722);
w4(R+4,u32(0-u32(r4(R+4))));
}
B707724:{NFSU2_TR(0x707724);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+4,u32(u32(r4(R+4))^u32(r4(U+4))));
}
B707727:{NFSU2_TR(0x707727);
{goto L707772;}
}
B707729:L707729:{c.instructions+=4;NFSU2_TR(0x707729);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B70772d:{NFSU2_TR(0x70772d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70772e:{NFSU2_TR(0x70772e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70772f:{NFSU2_TR(0x70772f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x707734ull));
TAIL_STATIC(0x70d9e8u,70d);
}
B707734:L707734:{c.instructions+=4;NFSU2_TR(0x707734);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B707736:{NFSU2_TR(0x707736);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B707737:{NFSU2_TR(0x707737);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B707738:{NFSU2_TR(0x707738);
if(r1(R+518)){{goto L70774e;}}
}
B70773a:L70773a:{c.instructions+=4;NFSU2_TR(0x70773a);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B70773e:{NFSU2_TR(0x70773e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70773f:{NFSU2_TR(0x70773f);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B707740:{NFSU2_TR(0x707740);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x707745ull));
TAIL_STATIC(0x70d9e8u,70d);
}
B707745:L707745:{c.instructions+=5;NFSU2_TR(0x707745);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B707746:{NFSU2_TR(0x707746);
__builtin_memmove((R+24),(R+0),4);
}
B707748:{NFSU2_TR(0x707748);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B707749:{NFSU2_TR(0x707749);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x3ull))));
}
B70774c:{NFSU2_TR(0x70774c);
{goto L707751;}
}
B70774e:L70774e:{c.instructions+=2;NFSU2_TR(0x70774e);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B707750:{NFSU2_TR(0x707750);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B707751:L707751:{c.instructions+=2;NFSU2_TR(0x707751);
__builtin_memmove((R+4),(R+28),4);
}
B707753:{NFSU2_TR(0x707753);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x707758ull));
TAIL_STATIC(0x706a61u,706);
}
B707758:L707758:{c.instructions+=4;NFSU2_TR(0x707758);
__builtin_memmove((R+4),(R+0),4);
}
B70775a:{NFSU2_TR(0x70775a);
w4(R+4,u32(0-u32(r4(R+4))));
}
B70775c:{NFSU2_TR(0x70775c);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+24))));
}
B70775e:{NFSU2_TR(0x70775e);
{goto L707772;}
}
B707760:L707760:{c.instructions+=3;NFSU2_TR(0x707760);
__builtin_memmove((R+4),(R+28),4);
}
B707762:{NFSU2_TR(0x707762);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x13ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B707766:{NFSU2_TR(0x707766);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x70776bull));
TAIL_STATIC(0x706a61u,706);
}
B70776b:L70776b:{c.instructions+=3;NFSU2_TR(0x70776b);
__builtin_memmove((R+4),(R+0),4);
}
B70776d:{NFSU2_TR(0x70776d);
w4(R+4,u32(0-u32(r4(R+4))));
}
B70776f:{NFSU2_TR(0x70776f);
w4(R+4,u32(u32(r4(R+4))^u32(u32(0x1ull))));
}
B707772:L707772:{c.instructions+=8;NFSU2_TR(0x707772);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B707775:{NFSU2_TR(0x707775);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+0))));
}
B707777:{NFSU2_TR(0x707777);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B70777a:{NFSU2_TR(0x70777a);
u8 U[13];
w4(U+0,u32(u32(u32(0x5bcull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
w4(R+0,u32(r1(U+12)));
}
B707782:{NFSU2_TR(0x707782);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B707785:{NFSU2_TR(0x707785);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B707788:{NFSU2_TR(0x707788);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1bull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+4,u8(u32(r1(U+4))+u32(u8(0x1ull))));
s1(u32(r4(U+0)),r1(U+4));
}
B70778b:{NFSU2_TR(0x70778b);
u8 U[10];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4),2);
s2(u32(r4(U+4)),r2(U+8));
}
B70778f:L70778f:{c.instructions+=2;NFSU2_TR(0x70778f);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1bull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(R+512,u8((r1(U+5))<(u8(0x40ull))));
}
B707793:{NFSU2_TR(0x707793);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7074e6u);}goto L7074e6;}}
}
B707799:L707799:{c.instructions+=1;NFSU2_TR(0x707799);
{goto L70779e;}
}
B70779b:L70779b:{c.instructions+=1;NFSU2_TR(0x70779b);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1bull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+4,u8(u32(r1(U+4))+u32(u8(0x1ull))));
s1(u32(r4(U+0)),r1(U+4));
}
B70779e:L70779e:{c.instructions+=9;NFSU2_TR(0x70779e);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1bull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B7077a1:{NFSU2_TR(0x7077a1);
u8 U[3];
w1(R+523,sborrow<u8>(r1(R+0),u8(0x1ull)));
w1(R+0,u8(u32(r1(R+0))-u32(u8(0x1ull))));
w1(R+519,u8(s8(r1(R+0))<s8(u8(0x0ull))));
w1(R+518,u8((r1(R+0))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(R+0))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B7077a3:{NFSU2_TR(0x7077a3);
w4(R+0,u32(r1(R+0)));
}
B7077a6:{NFSU2_TR(0x7077a6);
u8 U[13];
w4(U+0,u32(u32(u32(0x5fcull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
__builtin_memmove((R+0),(U+12),1);
}
B7077ad:{NFSU2_TR(0x7077ad);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B7077ae:{NFSU2_TR(0x7077ae);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B7077af:{NFSU2_TR(0x7077af);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B7077b0:{NFSU2_TR(0x7077b0);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B7077b1:{NFSU2_TR(0x7077b1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7077b2:L7077b2:{c.instructions+=14;NFSU2_TR(0x7077b2);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7077b3:{NFSU2_TR(0x7077b3);
__builtin_memmove((R+20),(R+16),4);
}
B7077b5:{NFSU2_TR(0x7077b5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7077b6:{NFSU2_TR(0x7077b6);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7077b7:{NFSU2_TR(0x7077b7);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7077b8:{NFSU2_TR(0x7077b8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B7077bb:{NFSU2_TR(0x7077bb);
u8 U[7];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1acull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x0ull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B7077c2:{NFSU2_TR(0x7077c2);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x22cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7077c8:{NFSU2_TR(0x7077c8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7077cb:{NFSU2_TR(0x7077cb);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x230ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7077d1:{NFSU2_TR(0x7077d1);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7077d2:{NFSU2_TR(0x7077d2);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7077d3:{NFSU2_TR(0x7077d3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7077d6:{NFSU2_TR(0x7077d6);
if(r1(R+518)){{goto L7077fd;}}
}
B7077d8:L7077d8:{c.instructions+=2;NFSU2_TR(0x7077d8);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7077d9:{NFSU2_TR(0x7077d9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7077deull));
TAIL_STATIC(0x70f5acu,70f);
}
B7077de:L7077de:{c.instructions+=5;NFSU2_TR(0x7077de);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B7077e0:{NFSU2_TR(0x7077e0);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1acull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B7077e6:{NFSU2_TR(0x7077e6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7077e7:{NFSU2_TR(0x7077e7);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7077e8:{NFSU2_TR(0x7077e8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7077edull));
TAIL_STATIC(0x70f1f3u,70f);
}
B7077ed:L7077ed:{c.instructions+=4;NFSU2_TR(0x7077ed);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B7077f0:{NFSU2_TR(0x7077f0);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B7077f2:{NFSU2_TR(0x7077f2);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x39cull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7077f8:{NFSU2_TR(0x7077f8);
{goto L7078af;}
}
B7077fd:L7077fd:{c.instructions+=4;NFSU2_TR(0x7077fd);
u8 U[4];
w4(U+0,u32(0x14ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7077ff:{NFSU2_TR(0x7077ff);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B707800:{NFSU2_TR(0x707800);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x72cull))));
__builtin_memmove((R+28),(U+0),4);
}
B707806:{NFSU2_TR(0x707806);
w4(R+24,u32(0x7c6668ull));
}
B70780b:L70780b:{c.instructions+=1;NFSU2_TR(0x70780b);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L70780d;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x70780bu);}goto L70780b;}
}
B70780d:L70780d:{c.instructions+=34;NFSU2_TR(0x70780d);
__builtin_memmove((R+0),gp(0x7c629c),2);
}
B707813:{NFSU2_TR(0x707813);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x706ull))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B70781a:{NFSU2_TR(0x70781a);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x708ull))));
__builtin_memmove((R+28),(U+0),4);
}
B707820:{NFSU2_TR(0x707820);
w4(R+24,u32(0x7c627cull));
}
B707825:{NFSU2_TR(0x707825);
u8 U[40];
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
}
B707826:{NFSU2_TR(0x707826);
u8 U[40];
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
}
B707827:{NFSU2_TR(0x707827);
u8 U[40];
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
}
B707828:{NFSU2_TR(0x707828);
u8 U[36];
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
__builtin_memmove((U+16),gp(u32(r4(U+0))),2);
__builtin_memmove((U+34),(U+16),2);
s2(u32(r4(U+18)),r2(U+34));
}
B70782a:{NFSU2_TR(0x70782a);
__builtin_memmove((R+0),gp(0x7c62a0),2);
}
B707830:{NFSU2_TR(0x707830);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x704ull))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B707837:{NFSU2_TR(0x707837);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x71cull))));
__builtin_memmove((R+28),(U+0),4);
}
B70783d:{NFSU2_TR(0x70783d);
w4(R+24,u32(0x7c628cull));
}
B707842:{NFSU2_TR(0x707842);
u8 U[40];
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
}
B707843:{NFSU2_TR(0x707843);
u8 U[40];
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
}
B707844:{NFSU2_TR(0x707844);
u8 U[40];
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
}
B707845:{NFSU2_TR(0x707845);
u8 U[40];
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
}
B707846:{NFSU2_TR(0x707846);
w4(R+4,u32(0x80808080ull));
}
B70784b:{NFSU2_TR(0x70784b);
__builtin_memmove((R+0),(R+4),4);
}
B70784d:{NFSU2_TR(0x70784d);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x67cull))));
__builtin_memmove((R+28),(U+0),4);
}
B707853:{NFSU2_TR(0x707853);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B707854:{NFSU2_TR(0x707854);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B707855:{NFSU2_TR(0x707855);
u8 U[18];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x2ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x4ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),2);
s2(u32(r4(U+0)),r2(U+16));
}
B707857:{NFSU2_TR(0x707857);
u8 U[17];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x1ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x2ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),1);
s1(u32(r4(U+0)),r1(U+16));
}
B707858:{NFSU2_TR(0x707858);
__builtin_memmove((R+0),(R+4),4);
}
B70785a:{NFSU2_TR(0x70785a);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x687ull))));
__builtin_memmove((R+28),(U+0),4);
}
B707860:{NFSU2_TR(0x707860);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B707861:{NFSU2_TR(0x707861);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B707862:{NFSU2_TR(0x707862);
u8 U[18];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x2ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x4ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),2);
s2(u32(r4(U+0)),r2(U+16));
}
B707864:{NFSU2_TR(0x707864);
u8 U[17];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x1ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x2ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),1);
s1(u32(r4(U+0)),r1(U+16));
}
B707865:{NFSU2_TR(0x707865);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x228ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B70786b:{NFSU2_TR(0x70786b);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x6f0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B707871:{NFSU2_TR(0x707871);
__builtin_memmove((R+8),(R+4),4);
}
B707873:{NFSU2_TR(0x707873);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B707876:{NFSU2_TR(0x707876);
w4(R+0,u32(0x1010101ull));
}
B70787b:L70787b:{c.instructions+=1;NFSU2_TR(0x70787b);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L70787d;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x70787bu);}goto L70787b;}
}
B70787d:L70787d:{c.instructions+=2;NFSU2_TR(0x70787d);
__builtin_memmove((R+4),(R+8),4);
}
B70787f:{NFSU2_TR(0x70787f);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B707882:L707882:{c.instructions+=1;NFSU2_TR(0x707882);
u8 U[18];
w1(U+17,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+17)){{goto L707884;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x1ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x2ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),1);
s1(u32(r4(U+0)),r1(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x707882u);}goto L707882;}
}
B707884:L707884:{c.instructions+=7;NFSU2_TR(0x707884);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1dcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B70788b:{NFSU2_TR(0x70788b);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70788d:{NFSU2_TR(0x70788d);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x63cull))));
__builtin_memmove((R+0),(U+0),4);
}
B707893:{NFSU2_TR(0x707893);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B707894:{NFSU2_TR(0x707894);
__builtin_memmove((R+28),(R+0),4);
}
B707896:{NFSU2_TR(0x707896);
w4(R+24,u32(0x7c5a70ull));
}
B70789b:{NFSU2_TR(0x70789b);
if(r1(R+518)){{goto L7078a2;}}
}
B70789d:L70789d:{c.instructions+=1;NFSU2_TR(0x70789d);
w4(R+24,u32(0x7c5a30ull));
}
B7078a2:L7078a2:{c.instructions+=2;NFSU2_TR(0x7078a2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7078a3:{NFSU2_TR(0x7078a3);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7078a4:L7078a4:{c.instructions+=1;NFSU2_TR(0x7078a4);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L7078a6;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7078a4u);}goto L7078a4;}
}
B7078a6:L7078a6:{c.instructions+=1;NFSU2_TR(0x7078a6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7078abull));
TAIL_STATIC(0x706ac2u,706);
}
B7078ab:L7078ab:{c.instructions+=3;NFSU2_TR(0x7078ab);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B7078ac:{NFSU2_TR(0x7078ac);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B7078ad:{NFSU2_TR(0x7078ad);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B7078af:L7078af:{c.instructions+=5;NFSU2_TR(0x7078af);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B7078b1:{NFSU2_TR(0x7078b1);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1acull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B7078b7:{NFSU2_TR(0x7078b7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7078b8:{NFSU2_TR(0x7078b8);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7078b9:{NFSU2_TR(0x7078b9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7078beull));
TAIL_STATIC(0x706f35u,706);
}
B7078be:L7078be:{c.instructions+=5;NFSU2_TR(0x7078be);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B7078bf:{NFSU2_TR(0x7078bf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B7078c0:{NFSU2_TR(0x7078c0);
u8 U[4];
w4(U+0,u32(0x40ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7078c2:{NFSU2_TR(0x7078c2);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x57cull))));
__builtin_memmove((R+0),(U+0),4);
}
B7078c8:{NFSU2_TR(0x7078c8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B7078c9:L7078c9:{c.instructions+=8;NFSU2_TR(0x7078c9);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(r1(U+4)));
}
B7078cd:{NFSU2_TR(0x7078cd);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x13cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B7078d3:{NFSU2_TR(0x7078d3);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x13cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B7078d9:{NFSU2_TR(0x7078d9);
u8 U[9];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
__builtin_memmove((R+4),(U+8),1);
}
B7078dc:{NFSU2_TR(0x7078dc);
u8 U[1];
__builtin_memmove((U+0),(R+4),1);
s1(u32(r4(R+0)),r1(U+0));
}
B7078de:{NFSU2_TR(0x7078de);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B7078df:{NFSU2_TR(0x7078df);
w4(R+28,u32(u32(r4(R+28))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+28))==(u32(0x0ull))));
}
B7078e0:{NFSU2_TR(0x7078e0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7078c9u);}goto L7078c9;}}
}
B7078e2:L7078e2:{c.instructions+=2;NFSU2_TR(0x7078e2);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4520ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+24))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B7078e8:{NFSU2_TR(0x7078e8);
if(r1(R+518)){{goto L7078f1;}}
}
B7078ea:L7078ea:{c.instructions+=2;NFSU2_TR(0x7078ea);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7078eb:{NFSU2_TR(0x7078eb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7078f0ull));
TAIL_STATIC(0x706d62u,706);
}
B7078f0:L7078f0:{c.instructions+=1;NFSU2_TR(0x7078f0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B7078f1:L7078f1:{c.instructions+=2;NFSU2_TR(0x7078f1);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1dcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B7078f8:{NFSU2_TR(0x7078f8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L707913;}}
}
B7078fa:L7078fa:{c.instructions+=4;NFSU2_TR(0x7078fa);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x150ull))));
__builtin_memmove((R+0),(U+0),4);
}
B707900:{NFSU2_TR(0x707900);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B707902:{NFSU2_TR(0x707902);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B707903:{NFSU2_TR(0x707903);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x707908ull));
{goto L707c18;}
}
B707908:L707908:{c.instructions+=4;NFSU2_TR(0x707908);
w4(R+0,u32(r1(R+0)));
}
B70790b:{NFSU2_TR(0x70790b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B70790c:{NFSU2_TR(0x70790c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B70790d:{NFSU2_TR(0x70790d);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x6e8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B707913:L707913:{c.instructions+=2;NFSU2_TR(0x707913);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B707914:{NFSU2_TR(0x707914);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x707919ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x70717eu);}goto L70717e;}
}
B707919:L707919:{c.instructions+=4;NFSU2_TR(0x707919);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B70791c:{NFSU2_TR(0x70791c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B70791d:{NFSU2_TR(0x70791d);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B70791f:{NFSU2_TR(0x70791f);
w4(R+4,u32(0xc0ull));
}
B707924:L707924:{c.instructions+=1;NFSU2_TR(0x707924);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L707926;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x707924u);}goto L707924;}
}
B707926:L707926:{c.instructions+=11;NFSU2_TR(0x707926);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B707929:{NFSU2_TR(0x707929);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70792b:{NFSU2_TR(0x70792b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B70792c:{NFSU2_TR(0x70792c);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0xfffffffdull))));
}
B70792f:{NFSU2_TR(0x70792f);
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
B707931:{NFSU2_TR(0x707931);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4524ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B707937:{NFSU2_TR(0x707937);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4528ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70793d:{NFSU2_TR(0x70793d);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x452cull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B707943:{NFSU2_TR(0x707943);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4530ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B707949:{NFSU2_TR(0x707949);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70794c:{NFSU2_TR(0x70794c);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L707981;}}
}
B70794e:L70794e:{c.instructions+=3;NFSU2_TR(0x70794e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B707951:{NFSU2_TR(0x707951);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xfffffffdull))));
}
B707954:{NFSU2_TR(0x707954);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B707957:L707957:{c.instructions+=2;NFSU2_TR(0x707957);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B707958:{NFSU2_TR(0x707958);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x70795dull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x70710au);}goto L70710a;}
}
B70795d:L70795d:{c.instructions+=5;NFSU2_TR(0x70795d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B70795e:{NFSU2_TR(0x70795e);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B707960:{NFSU2_TR(0x707960);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B707961:{NFSU2_TR(0x707961);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+24))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+24))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B707964:{NFSU2_TR(0x707964);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L707979;}}
}
B707966:L707966:{c.instructions+=4;NFSU2_TR(0x707966);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B707967:{NFSU2_TR(0x707967);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B70796a:{NFSU2_TR(0x70796a);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70796b:{NFSU2_TR(0x70796b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x707970ull));
TAIL_STATIC(0x70e69cu,70e);
}
B707970:L707970:{c.instructions+=4;NFSU2_TR(0x707970);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B707973:{NFSU2_TR(0x707973);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B707974:{NFSU2_TR(0x707974);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+24))<(r4(U+8))));
}
B707977:{NFSU2_TR(0x707977);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x707966u);}goto L707966;}}
}
B707979:L707979:{c.instructions+=3;NFSU2_TR(0x707979);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B70797c:{NFSU2_TR(0x70797c);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
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
B70797f:{NFSU2_TR(0x70797f);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x707957u);}goto L707957;}}
}
B707981:L707981:{c.instructions+=5;NFSU2_TR(0x707981);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B707982:{NFSU2_TR(0x707982);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B707983:{NFSU2_TR(0x707983);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B707984:{NFSU2_TR(0x707984);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B707985:{NFSU2_TR(0x707985);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B707986:L707986:{c.instructions+=13;NFSU2_TR(0x707986);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B707987:{NFSU2_TR(0x707987);
__builtin_memmove((R+20),(R+16),4);
}
B707989:{NFSU2_TR(0x707989);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B70798c:{NFSU2_TR(0x70798c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B70798f:{NFSU2_TR(0x70798f);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B707991:{NFSU2_TR(0x707991);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B707993:{NFSU2_TR(0x707993);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
w4(U+4,u32(0xffull));
s4(u32(r4(U+0)),r4(U+4));
}
B70799a:{NFSU2_TR(0x70799a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70799d:{NFSU2_TR(0x70799d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
w4(U+4,u32(0xffffffe8ull));
s4(u32(r4(U+0)),r4(U+4));
}
B7079a4:{NFSU2_TR(0x7079a4);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7079a7:{NFSU2_TR(0x7079a7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7079aa:{NFSU2_TR(0x7079aa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B7079ab:{NFSU2_TR(0x7079ab);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7079ac:L7079ac:{c.instructions+=6;NFSU2_TR(0x7079ac);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7079ad:{NFSU2_TR(0x7079ad);
__builtin_memmove((R+20),(R+16),4);
}
B7079af:{NFSU2_TR(0x7079af);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7079b2:{NFSU2_TR(0x7079b2);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B7079b5:{NFSU2_TR(0x7079b5);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0xfffffff0ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xfffffff0ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B7079b8:{NFSU2_TR(0x7079b8);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L7079be;}}
}
B7079ba:L7079ba:{c.instructions+=2;NFSU2_TR(0x7079ba);
u8 U[4];
w4(U+0,u32(0x18ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7079bc:{NFSU2_TR(0x7079bc);
{goto L7079c9;}
}
B7079be:L7079be:{c.instructions+=2;NFSU2_TR(0x7079be);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0xfffffff8ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xfffffff8ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B7079c1:{NFSU2_TR(0x7079c1);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L7079c7;}}
}
B7079c3:L7079c3:{c.instructions+=2;NFSU2_TR(0x7079c3);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7079c5:{NFSU2_TR(0x7079c5);
{goto L7079c9;}
}
B7079c7:L7079c7:{c.instructions+=1;NFSU2_TR(0x7079c7);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7079c9:L7079c9:{c.instructions+=28;NFSU2_TR(0x7079c9);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0x7ull))));
}
B7079cc:{NFSU2_TR(0x7079cc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B7079cd:{NFSU2_TR(0x7079cd);
w1(R+512,u8((r4(R+4))<(r4(R+8))));
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+8))));
}
B7079cf:{NFSU2_TR(0x7079cf);
u8 U[21];
w1(U+16,u8(u32(r1(R+4))&u32(u8(0x1full))));
__builtin_memmove((U+5),gp(u32(r4(R+0))),4);
__builtin_memmove((U+17),(U+5),4);
__builtin_memmove((U+5),gp(u32(r4(R+0))),4);
w4(U+5,shl<u32>(r4(U+5),u64(r1(U+16))));
s4(u32(r4(R+0)),r4(U+5));
w1(U+9,u8((r1(U+16))==(u8(0x0ull))));
w1(U+10,u8(u32(r1(U+16))-u32(u8(0x1ull))));
w4(U+11,shl<u32>(r4(U+17),u64(r1(U+10))));
w1(U+15,u8(s32(r4(U+11))<s32(u32(0x0ull))));
__builtin_memmove((U+0),(U+9),1);
w1(U+1,u8(u32(r1(U+0))*u32(r1(R+512))));
w1(U+2,u8(!(r1(U+9))));
__builtin_memmove((U+3),(U+2),1);
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+15))));
w1(R+512,u8(u32(r1(U+1))|u32(r1(U+4))));
}
B7079d1:{NFSU2_TR(0x7079d1);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B7079d4:{NFSU2_TR(0x7079d4);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7079d7:{NFSU2_TR(0x7079d7);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7079d8:{NFSU2_TR(0x7079d8);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+12),(U+4),1);
}
B7079db:{NFSU2_TR(0x7079db);
u8 U[9];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+12),1);
s1(u32(r4(U+4)),r1(U+8));
}
B7079de:{NFSU2_TR(0x7079de);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B7079e1:{NFSU2_TR(0x7079e1);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7079e4:{NFSU2_TR(0x7079e4);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+12),(U+4),1);
}
B7079e7:{NFSU2_TR(0x7079e7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B7079ea:{NFSU2_TR(0x7079ea);
u8 U[9];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+12),1);
s1(u32(r4(U+4)),r1(U+8));
}
B7079ed:{NFSU2_TR(0x7079ed);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B7079f0:{NFSU2_TR(0x7079f0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7079f3:{NFSU2_TR(0x7079f3);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+12),(U+4),1);
}
B7079f6:{NFSU2_TR(0x7079f6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B7079f9:{NFSU2_TR(0x7079f9);
u8 U[9];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+12),1);
s1(u32(r4(U+4)),r1(U+8));
}
B7079fc:{NFSU2_TR(0x7079fc);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B7079ff:{NFSU2_TR(0x7079ff);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B707a02:{NFSU2_TR(0x707a02);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((R+12),(U+0),1);
}
B707a04:{NFSU2_TR(0x707a04);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B707a07:{NFSU2_TR(0x707a07);
u8 U[9];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+12),1);
s1(u32(r4(U+4)),r1(U+8));
}
B707a0a:{NFSU2_TR(0x707a0a);
u8 U[14];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+523,scarry<u32>(r4(U+4),u32(0x1ull)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
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
B707a0d:{NFSU2_TR(0x707a0d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B707a0e:{NFSU2_TR(0x707a0e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B707a0f:{NFSU2_TR(0x707a0f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B707a10:L707a10:{c.instructions+=14;NFSU2_TR(0x707a10);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B707a11:{NFSU2_TR(0x707a11);
__builtin_memmove((R+20),(R+16),4);
}
B707a13:{NFSU2_TR(0x707a13);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B707a16:{NFSU2_TR(0x707a16);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B707a19:{NFSU2_TR(0x707a19);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xffffffffull))));
__builtin_memmove((R+4),(U+0),4);
}
B707a1c:{NFSU2_TR(0x707a1c);
u8 U[32];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
w8(U+8,u64(s64(s32(r4(R+4)))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+16,u64(s64(s32(r4(U+4)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+4,u32(r8(U+24)));
}
B707a20:{NFSU2_TR(0x707a20);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B707a23:{NFSU2_TR(0x707a23);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B707a24:{NFSU2_TR(0x707a24);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B707a27:{NFSU2_TR(0x707a27);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B707a28:{NFSU2_TR(0x707a28);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B707a2c:{NFSU2_TR(0x707a2c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B707a2d:{NFSU2_TR(0x707a2d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+24),(U+0),4);
}
B707a2f:{NFSU2_TR(0x707a2f);
if(r1(R+518)){{goto L707a37;}}
}
B707a31:L707a31:{c.instructions+=3;NFSU2_TR(0x707a31);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+4))));
}
B707a33:{NFSU2_TR(0x707a33);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+4))));
}
B707a35:{NFSU2_TR(0x707a35);
__builtin_memmove((R+4),(R+8),4);
}
B707a37:L707a37:{c.instructions+=2;NFSU2_TR(0x707a37);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
w1(R+512,u8((r4(U+6))<(u32(0x80ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x80ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x80ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B707a3d:{NFSU2_TR(0x707a3d);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L707a91;}}
}
B707a3f:L707a3f:{c.instructions+=1;NFSU2_TR(0x707a3f);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B707a40:L707a40:{c.instructions+=3;NFSU2_TR(0x707a40);
w4(R+4,shl<u32>(r4(R+4),u64(u32(0x1ull))));
}
B707a42:{NFSU2_TR(0x707a42);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B707a44:{NFSU2_TR(0x707a44);
u8 U[1];
w1(U+0,u8(!(r1(R+519))));
if(r1(U+0)){{goto L707a62;}}
}
B707a46:L707a46:{c.instructions+=2;NFSU2_TR(0x707a46);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B707a49:{NFSU2_TR(0x707a49);
{goto L707a58;}
}
B707a4b:L707a4b:{c.instructions+=4;NFSU2_TR(0x707a4b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B707a4e:{NFSU2_TR(0x707a4e);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+8))));
}
B707a50:{NFSU2_TR(0x707a50);
u8 U[3];
__builtin_memmove((U+0),gp(u32(r4(R+28))),1);
__builtin_memmove((U+1),(U+0),1);
w1(U+2,u8(u32(r1(U+1))-u32(u8(0xffull))));
w1(R+518,u8((r1(U+2))==(u8(0x0ull))));
}
B707a53:{NFSU2_TR(0x707a53);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L707a5b;}}
}
B707a55:L707a55:{c.instructions+=1;NFSU2_TR(0x707a55);
u8 U[1];
w1(U+0,u8(0x0ull));
s1(u32(r4(R+28)),r1(U+0));
}
B707a58:L707a58:{c.instructions+=2;NFSU2_TR(0x707a58);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+8))<s32(u32(0x0ull))));
}
B707a59:{NFSU2_TR(0x707a59);
u8 U[1];
w1(U+0,u8(!(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x707a4bu);}goto L707a4b;}}
}
B707a5b:L707a5b:{c.instructions+=3;NFSU2_TR(0x707a5b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B707a5e:{NFSU2_TR(0x707a5e);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+28))));
}
B707a60:{NFSU2_TR(0x707a60);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+8))),1);
w1(U+0,u8(u32(r1(U+0))+u32(u8(0x1ull))));
s1(u32(r4(R+8)),r1(U+0));
}
B707a62:L707a62:{c.instructions+=3;NFSU2_TR(0x707a62);
w4(R+24,shl<u32>(r4(R+24),u64(u32(0x1ull))));
}
B707a64:{NFSU2_TR(0x707a64);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
w1(R+518,u8((r4(R+12))==(u32(0x0ull))));
}
B707a65:{NFSU2_TR(0x707a65);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L707a88;}}
}
B707a67:L707a67:{c.instructions+=9;NFSU2_TR(0x707a67);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B707a6a:{NFSU2_TR(0x707a6a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B707a6d:{NFSU2_TR(0x707a6d);
__builtin_memmove((R+8),(R+24),4);
}
B707a6f:{NFSU2_TR(0x707a6f);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))&u32(u32(0x1full))));
w4(R+8,shr<u32>(r4(R+8),u64(r4(U+0))));
}
B707a72:{NFSU2_TR(0x707a72);
u8 U[9];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+8),1);
s1(u32(r4(U+4)),r1(U+8));
}
B707a75:{NFSU2_TR(0x707a75);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B707a78:{NFSU2_TR(0x707a78);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
w4(U+4,u32(0xfffffff8ull));
s4(u32(r4(U+0)),r4(U+4));
}
B707a7f:{NFSU2_TR(0x707a7f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B707a82:{NFSU2_TR(0x707a82);
w4(R+24,u32(u32(r4(R+24))&u32(u32(0xffffffull))));
}
B707a88:L707a88:{c.instructions+=2;NFSU2_TR(0x707a88);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
w1(R+512,u8((r4(U+6))<(u32(0x80ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x80ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x80ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B707a8e:{NFSU2_TR(0x707a8e);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x707a40u);}goto L707a40;}}
}
B707a90:L707a90:{c.instructions+=1;NFSU2_TR(0x707a90);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B707a91:L707a91:{c.instructions+=7;NFSU2_TR(0x707a91);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+0)),r4(U+0));
}
B707a93:{NFSU2_TR(0x707a93);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B707a94:{NFSU2_TR(0x707a94);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B707a97:{NFSU2_TR(0x707a97);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B707a9a:{NFSU2_TR(0x707a9a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B707a9b:{NFSU2_TR(0x707a9b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B707a9c:{NFSU2_TR(0x707a9c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B707a9d:L707a9d:{c.instructions+=16;NFSU2_TR(0x707a9d);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B707a9e:{NFSU2_TR(0x707a9e);
__builtin_memmove((R+20),(R+16),4);
}
B707aa0:{NFSU2_TR(0x707aa0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B707aa3:{NFSU2_TR(0x707aa3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B707aa5:{NFSU2_TR(0x707aa5);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B707aa6:{NFSU2_TR(0x707aa6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B707aa9:{NFSU2_TR(0x707aa9);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B707aaa:{NFSU2_TR(0x707aaa);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B707aad:{NFSU2_TR(0x707aad);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xffffffffull))));
__builtin_memmove((R+4),(U+0),4);
}
B707ab0:{NFSU2_TR(0x707ab0);
u8 U[32];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
w8(U+8,u64(s64(s32(r4(R+4)))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+16,u64(s64(s32(r4(U+4)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+4,u32(r8(U+24)));
}
B707ab4:{NFSU2_TR(0x707ab4);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B707ab7:{NFSU2_TR(0x707ab7);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B707ab8:{NFSU2_TR(0x707ab8);
w4(R+24,u32(u32(r4(R+24))-u32(r4(R+4))));
}
B707aba:{NFSU2_TR(0x707aba);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+4))));
}
B707abc:{NFSU2_TR(0x707abc);
u8 U[14];
__builtin_memmove((U+6),(R+24),4);
w1(R+512,u8((r4(U+6))<(u32(0x80ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x80ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x80ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B707ac2:{NFSU2_TR(0x707ac2);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L707b16;}}
}
B707ac4:L707ac4:{c.instructions+=1;NFSU2_TR(0x707ac4);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B707ac5:L707ac5:{c.instructions+=3;NFSU2_TR(0x707ac5);
w4(R+24,shl<u32>(r4(R+24),u64(u32(0x1ull))));
}
B707ac7:{NFSU2_TR(0x707ac7);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B707ac9:{NFSU2_TR(0x707ac9);
u8 U[1];
w1(U+0,u8(!(r1(R+519))));
if(r1(U+0)){{goto L707ae7;}}
}
B707acb:L707acb:{c.instructions+=2;NFSU2_TR(0x707acb);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B707ace:{NFSU2_TR(0x707ace);
{goto L707add;}
}
B707ad0:L707ad0:{c.instructions+=4;NFSU2_TR(0x707ad0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B707ad3:{NFSU2_TR(0x707ad3);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+4))));
}
B707ad5:{NFSU2_TR(0x707ad5);
u8 U[3];
__builtin_memmove((U+0),gp(u32(r4(R+28))),1);
__builtin_memmove((U+1),(U+0),1);
w1(U+2,u8(u32(r1(U+1))-u32(u8(0xffull))));
w1(R+518,u8((r1(U+2))==(u8(0x0ull))));
}
B707ad8:{NFSU2_TR(0x707ad8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L707ae0;}}
}
B707ada:L707ada:{c.instructions+=1;NFSU2_TR(0x707ada);
u8 U[1];
w1(U+0,u8(0x0ull));
s1(u32(r4(R+28)),r1(U+0));
}
B707add:L707add:{c.instructions+=2;NFSU2_TR(0x707add);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
}
B707ade:{NFSU2_TR(0x707ade);
u8 U[1];
w1(U+0,u8(!(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x707ad0u);}goto L707ad0;}}
}
B707ae0:L707ae0:{c.instructions+=3;NFSU2_TR(0x707ae0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B707ae3:{NFSU2_TR(0x707ae3);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+28))));
}
B707ae5:{NFSU2_TR(0x707ae5);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+4))),1);
w1(U+0,u8(u32(r1(U+0))+u32(u8(0x1ull))));
s1(u32(r4(R+4)),r1(U+0));
}
B707ae7:L707ae7:{c.instructions+=3;NFSU2_TR(0x707ae7);
w4(R+8,shl<u32>(r4(R+8),u64(u32(0x1ull))));
}
B707ae9:{NFSU2_TR(0x707ae9);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
w1(R+518,u8((r4(R+12))==(u32(0x0ull))));
}
B707aea:{NFSU2_TR(0x707aea);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L707b0d;}}
}
B707aec:L707aec:{c.instructions+=9;NFSU2_TR(0x707aec);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B707aef:{NFSU2_TR(0x707aef);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B707af2:{NFSU2_TR(0x707af2);
__builtin_memmove((R+4),(R+8),4);
}
B707af4:{NFSU2_TR(0x707af4);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B707af7:{NFSU2_TR(0x707af7);
u8 U[9];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4),1);
s1(u32(r4(U+4)),r1(U+8));
}
B707afa:{NFSU2_TR(0x707afa);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B707afd:{NFSU2_TR(0x707afd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
w4(U+4,u32(0xfffffff8ull));
s4(u32(r4(U+0)),r4(U+4));
}
B707b04:{NFSU2_TR(0x707b04);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B707b07:{NFSU2_TR(0x707b07);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0xffffffull))));
}
B707b0d:L707b0d:{c.instructions+=2;NFSU2_TR(0x707b0d);
u8 U[14];
__builtin_memmove((U+6),(R+24),4);
w1(R+512,u8((r4(U+6))<(u32(0x80ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x80ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x80ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B707b13:{NFSU2_TR(0x707b13);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x707ac5u);}goto L707ac5;}}
}
B707b15:L707b15:{c.instructions+=1;NFSU2_TR(0x707b15);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B707b16:L707b16:{c.instructions+=7;NFSU2_TR(0x707b16);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B707b19:{NFSU2_TR(0x707b19);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B707b1a:{NFSU2_TR(0x707b1a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B707b1d:{NFSU2_TR(0x707b1d);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+0)),r4(U+0));
}
B707b1f:{NFSU2_TR(0x707b1f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B707b20:{NFSU2_TR(0x707b20);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B707b21:{NFSU2_TR(0x707b21);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B707b22:L707b22:{c.instructions+=14;NFSU2_TR(0x707b22);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B707b23:{NFSU2_TR(0x707b23);
__builtin_memmove((R+20),(R+16),4);
}
B707b25:{NFSU2_TR(0x707b25);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B707b28:{NFSU2_TR(0x707b28);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B707b2b:{NFSU2_TR(0x707b2b);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
}
B707b2c:{NFSU2_TR(0x707b2c);
u8 U[32];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
w8(U+8,u64(s64(s32(r4(R+4)))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+16,u64(s64(s32(r4(U+4)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+4,u32(r8(U+24)));
}
B707b30:{NFSU2_TR(0x707b30);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B707b33:{NFSU2_TR(0x707b33);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B707b34:{NFSU2_TR(0x707b34);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B707b37:{NFSU2_TR(0x707b37);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B707b38:{NFSU2_TR(0x707b38);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
w1(R+512,u8((r4(U+6))<(u32(0x80ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x80ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x80ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B707b3e:{NFSU2_TR(0x707b3e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B707b3f:{NFSU2_TR(0x707b3f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+24),(U+0),4);
}
B707b41:{NFSU2_TR(0x707b41);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L707b95;}}
}
B707b43:L707b43:{c.instructions+=1;NFSU2_TR(0x707b43);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B707b44:L707b44:{c.instructions+=3;NFSU2_TR(0x707b44);
w4(R+4,shl<u32>(r4(R+4),u64(u32(0x1ull))));
}
B707b46:{NFSU2_TR(0x707b46);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B707b48:{NFSU2_TR(0x707b48);
u8 U[1];
w1(U+0,u8(!(r1(R+519))));
if(r1(U+0)){{goto L707b66;}}
}
B707b4a:L707b4a:{c.instructions+=2;NFSU2_TR(0x707b4a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B707b4d:{NFSU2_TR(0x707b4d);
{goto L707b5c;}
}
B707b4f:L707b4f:{c.instructions+=4;NFSU2_TR(0x707b4f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B707b52:{NFSU2_TR(0x707b52);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+8))));
}
B707b54:{NFSU2_TR(0x707b54);
u8 U[3];
__builtin_memmove((U+0),gp(u32(r4(R+28))),1);
__builtin_memmove((U+1),(U+0),1);
w1(U+2,u8(u32(r1(U+1))-u32(u8(0xffull))));
w1(R+518,u8((r1(U+2))==(u8(0x0ull))));
}
B707b57:{NFSU2_TR(0x707b57);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L707b5f;}}
}
B707b59:L707b59:{c.instructions+=1;NFSU2_TR(0x707b59);
u8 U[1];
w1(U+0,u8(0x0ull));
s1(u32(r4(R+28)),r1(U+0));
}
B707b5c:L707b5c:{c.instructions+=2;NFSU2_TR(0x707b5c);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+8))<s32(u32(0x0ull))));
}
B707b5d:{NFSU2_TR(0x707b5d);
u8 U[1];
w1(U+0,u8(!(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x707b4fu);}goto L707b4f;}}
}
B707b5f:L707b5f:{c.instructions+=3;NFSU2_TR(0x707b5f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B707b62:{NFSU2_TR(0x707b62);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+28))));
}
B707b64:{NFSU2_TR(0x707b64);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+8))),1);
w1(U+0,u8(u32(r1(U+0))+u32(u8(0x1ull))));
s1(u32(r4(R+8)),r1(U+0));
}
B707b66:L707b66:{c.instructions+=3;NFSU2_TR(0x707b66);
w4(R+24,shl<u32>(r4(R+24),u64(u32(0x1ull))));
}
B707b68:{NFSU2_TR(0x707b68);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
w1(R+518,u8((r4(R+12))==(u32(0x0ull))));
}
B707b69:{NFSU2_TR(0x707b69);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L707b8c;}}
}
B707b6b:L707b6b:{c.instructions+=9;NFSU2_TR(0x707b6b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B707b6e:{NFSU2_TR(0x707b6e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B707b71:{NFSU2_TR(0x707b71);
__builtin_memmove((R+8),(R+24),4);
}
B707b73:{NFSU2_TR(0x707b73);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))&u32(u32(0x1full))));
w4(R+8,shr<u32>(r4(R+8),u64(r4(U+0))));
}
B707b76:{NFSU2_TR(0x707b76);
u8 U[9];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+8),1);
s1(u32(r4(U+4)),r1(U+8));
}
B707b79:{NFSU2_TR(0x707b79);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B707b7c:{NFSU2_TR(0x707b7c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
w4(U+4,u32(0xfffffff8ull));
s4(u32(r4(U+0)),r4(U+4));
}
B707b83:{NFSU2_TR(0x707b83);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B707b86:{NFSU2_TR(0x707b86);
w4(R+24,u32(u32(r4(R+24))&u32(u32(0xffffffull))));
}
B707b8c:L707b8c:{c.instructions+=2;NFSU2_TR(0x707b8c);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
w1(R+512,u8((r4(U+6))<(u32(0x80ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x80ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x80ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B707b92:{NFSU2_TR(0x707b92);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x707b44u);}goto L707b44;}}
}
B707b94:L707b94:{c.instructions+=1;NFSU2_TR(0x707b94);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B707b95:L707b95:{c.instructions+=7;NFSU2_TR(0x707b95);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+0)),r4(U+0));
}
B707b97:{NFSU2_TR(0x707b97);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B707b98:{NFSU2_TR(0x707b98);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B707b9b:{NFSU2_TR(0x707b9b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B707b9e:{NFSU2_TR(0x707b9e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B707b9f:{NFSU2_TR(0x707b9f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B707ba0:{NFSU2_TR(0x707ba0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B707ba1:L707ba1:{c.instructions+=6;NFSU2_TR(0x707ba1);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B707ba2:{NFSU2_TR(0x707ba2);
__builtin_memmove((R+20),(R+16),4);
}
B707ba4:{NFSU2_TR(0x707ba4);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B707ba8:{NFSU2_TR(0x707ba8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B707bab:{NFSU2_TR(0x707bab);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B707bae:{NFSU2_TR(0x707bae);
if(r1(R+518)){{goto L707bbe;}}
}
B707bb0:L707bb0:{c.instructions+=5;NFSU2_TR(0x707bb0);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B707bb3:{NFSU2_TR(0x707bb3);
w4(R+8,u32(0x7c5f74ull));
}
B707bb8:{NFSU2_TR(0x707bb8);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+4))));
}
B707bba:{NFSU2_TR(0x707bba);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+4),(U+0),4);
}
B707bbc:{NFSU2_TR(0x707bbc);
{goto L707bc5;}
}
B707bbe:L707bbe:{c.instructions+=1;NFSU2_TR(0x707bbe);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x7c5b78ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B707bc5:L707bc5:{c.instructions+=3;NFSU2_TR(0x707bc5);
u8 U[14];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+512,carry<u32>(r4(U+4),r4(R+4)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+523,scarry<u32>(r4(U+4),r4(R+4)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+4))));
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
B707bc8:{NFSU2_TR(0x707bc8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B707bc9:{NFSU2_TR(0x707bc9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B707bca:L707bca:{c.instructions+=25;NFSU2_TR(0x707bca);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B707bcb:{NFSU2_TR(0x707bcb);
__builtin_memmove((R+20),(R+16),4);
}
B707bcd:{NFSU2_TR(0x707bcd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B707bd0:{NFSU2_TR(0x707bd0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B707bd3:{NFSU2_TR(0x707bd3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B707bd7:{NFSU2_TR(0x707bd7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
w4(U+0,u32(u32(r4(U+0))&u32(u32(0x0ull))));
s4(u32(r4(R+0)),r4(U+0));
}
B707bda:{NFSU2_TR(0x707bda);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
w4(U+4,u32(0xffull));
s4(u32(r4(U+0)),r4(U+4));
}
B707be1:{NFSU2_TR(0x707be1);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
w4(U+4,u32(0x8ull));
s4(u32(r4(U+0)),r4(U+4));
}
B707be8:{NFSU2_TR(0x707be8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B707beb:{NFSU2_TR(0x707beb);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+4))),1);
w4(R+8,u32(r1(U+0)));
}
B707bee:{NFSU2_TR(0x707bee);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B707bef:{NFSU2_TR(0x707bef);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+24,u32(r1(U+4)));
}
B707bf3:{NFSU2_TR(0x707bf3);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B707bf6:{NFSU2_TR(0x707bf6);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+24))));
}
B707bf8:{NFSU2_TR(0x707bf8);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+24,u32(r1(U+4)));
}
B707bfc:{NFSU2_TR(0x707bfc);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x3ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(r1(U+4)));
}
B707c00:{NFSU2_TR(0x707c00);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B707c03:{NFSU2_TR(0x707c03);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+24))));
}
B707c05:{NFSU2_TR(0x707c05);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B707c08:{NFSU2_TR(0x707c08);
u8 U[6];
w1(R+512,carry<u32>(r4(R+8),r4(R+4)));
w1(R+523,scarry<u32>(r4(R+8),r4(R+4)));
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+4))));
w1(R+519,u8(s32(r4(R+8))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+8))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B707c0a:{NFSU2_TR(0x707c0a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B707c0d:{NFSU2_TR(0x707c0d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
w4(U+4,u32(0x4ull));
s4(u32(r4(U+0)),r4(U+4));
}
B707c14:{NFSU2_TR(0x707c14);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B707c15:{NFSU2_TR(0x707c15);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B707c16:{NFSU2_TR(0x707c16);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B707c18:L707c18:{c.instructions+=7;NFSU2_TR(0x707c18);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B707c19:{NFSU2_TR(0x707c19);
__builtin_memmove((R+20),(R+16),4);
}
B707c1b:{NFSU2_TR(0x707c1b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B707c1c:{NFSU2_TR(0x707c1c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B707c1f:{NFSU2_TR(0x707c1f);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B707c20:{NFSU2_TR(0x707c20);
w1(R+512,u8(0x0ull));
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B707c22:{NFSU2_TR(0x707c22);
{goto L707c33;}
}
B707c24:L707c24:{c.instructions+=2;NFSU2_TR(0x707c24);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B707c27:{NFSU2_TR(0x707c27);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x707c2cull));
TAIL_STATIC(0x70d87au,70d);
}
B707c2c:L707c2c:{c.instructions+=4;NFSU2_TR(0x707c2c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B707c2d:{NFSU2_TR(0x707c2d);
__builtin_memmove((R+4),(R+24),4);
}
B707c2f:{NFSU2_TR(0x707c2f);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r1(U+0))));
}
B707c31:{NFSU2_TR(0x707c31);
w1(R+512,u8(0x0ull));
w4(R+28,u32(u32(r4(R+28))|u32(r4(R+0))));
}
B707c33:L707c33:{c.instructions+=2;NFSU2_TR(0x707c33);
u8 U[6];
w1(R+523,sborrow<u32>(r4(R+24),u32(0x1ull)));
w4(R+24,u32(u32(r4(R+24))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B707c34:{NFSU2_TR(0x707c34);
u8 U[1];
w1(U+0,u8(!(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x707c24u);}goto L707c24;}}
}
B707c36:L707c36:{c.instructions+=5;NFSU2_TR(0x707c36);
__builtin_memmove((R+0),(R+28),4);
}
B707c38:{NFSU2_TR(0x707c38);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B707c39:{NFSU2_TR(0x707c39);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B707c3a:{NFSU2_TR(0x707c3a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B707c3b:{NFSU2_TR(0x707c3b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B707c3c:L707c3c:{c.instructions+=22;NFSU2_TR(0x707c3c);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B707c3d:{NFSU2_TR(0x707c3d);
__builtin_memmove((R+20),(R+16),4);
}
B707c3f:{NFSU2_TR(0x707c3f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B707c42:{NFSU2_TR(0x707c42);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B707c45:{NFSU2_TR(0x707c45);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B707c47:{NFSU2_TR(0x707c47);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
w4(R+8,u32(r1(U+0)));
}
B707c4a:{NFSU2_TR(0x707c4a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B707c4b:{NFSU2_TR(0x707c4b);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+24,u32(r1(U+4)));
}
B707c4f:{NFSU2_TR(0x707c4f);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B707c52:{NFSU2_TR(0x707c52);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+24))));
}
B707c54:{NFSU2_TR(0x707c54);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+24,u32(r1(U+4)));
}
B707c58:{NFSU2_TR(0x707c58);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B707c5c:{NFSU2_TR(0x707c5c);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B707c5f:{NFSU2_TR(0x707c5f);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+24))));
}
B707c61:{NFSU2_TR(0x707c61);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B707c64:{NFSU2_TR(0x707c64);
u8 U[6];
w1(R+512,carry<u32>(r4(R+8),r4(R+0)));
w1(R+523,scarry<u32>(r4(R+8),r4(R+0)));
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+0))));
w1(R+519,u8(s32(r4(R+8))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+8))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B707c66:{NFSU2_TR(0x707c66);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B707c69:{NFSU2_TR(0x707c69);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
w4(U+4,u32(0x20ull));
s4(u32(r4(U+0)),r4(U+4));
}
B707c70:{NFSU2_TR(0x707c70);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
w4(U+4,u32(0x4ull));
s4(u32(r4(U+0)),r4(U+4));
}
B707c77:{NFSU2_TR(0x707c77);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B707c78:{NFSU2_TR(0x707c78);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B707c79:{NFSU2_TR(0x707c79);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B707c7a:L707c7a:{c.instructions+=15;NFSU2_TR(0x707c7a);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B707c7b:{NFSU2_TR(0x707c7b);
__builtin_memmove((R+20),(R+16),4);
}
B707c7d:{NFSU2_TR(0x707c7d);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B707c7e:{NFSU2_TR(0x707c7e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B707c7f:{NFSU2_TR(0x707c7f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B707c82:{NFSU2_TR(0x707c82);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B707c85:{NFSU2_TR(0x707c85);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B707c87:{NFSU2_TR(0x707c87);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B707c8a:{NFSU2_TR(0x707c8a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B707c8b:{NFSU2_TR(0x707c8b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B707c8e:{NFSU2_TR(0x707c8e);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+0))));
}
B707c90:{NFSU2_TR(0x707c90);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B707c92:{NFSU2_TR(0x707c92);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+28))<(r4(U+8))));
}
B707c95:{NFSU2_TR(0x707c95);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B707c98:{NFSU2_TR(0x707c98);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L707cd3;}}
}
B707c9a:L707c9a:{c.instructions+=22;NFSU2_TR(0x707c9a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(r4(R+28))));
s4(u32(r4(U+0)),r4(U+4));
}
B707c9d:{NFSU2_TR(0x707c9d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B707ca0:{NFSU2_TR(0x707ca0);
u8 U[4];
w4(U+0,u32(0x20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B707ca2:{NFSU2_TR(0x707ca2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B707ca3:{NFSU2_TR(0x707ca3);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+28))));
}
B707ca5:{NFSU2_TR(0x707ca5);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+28,u32(r1(U+4)));
}
B707ca9:{NFSU2_TR(0x707ca9);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+12,shr<u32>(r4(R+12),u64(r1(U+0))));
}
B707cab:{NFSU2_TR(0x707cab);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B707cae:{NFSU2_TR(0x707cae);
u8 U[4];
w4(U+0,u32(0x20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B707cb0:{NFSU2_TR(0x707cb0);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+12,shl<u32>(r4(R+12),u64(r1(U+0))));
}
B707cb2:{NFSU2_TR(0x707cb2);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+8))),1);
w4(R+4,u32(r1(U+0)));
}
B707cb5:{NFSU2_TR(0x707cb5);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B707cb8:{NFSU2_TR(0x707cb8);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+28))));
}
B707cba:{NFSU2_TR(0x707cba);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+28,u32(r1(U+4)));
}
B707cbe:{NFSU2_TR(0x707cbe);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x3ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+8,u32(r1(U+4)));
}
B707cc2:{NFSU2_TR(0x707cc2);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B707cc5:{NFSU2_TR(0x707cc5);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+28))));
}
B707cc7:{NFSU2_TR(0x707cc7);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B707cca:{NFSU2_TR(0x707cca);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+8))));
}
B707ccc:{NFSU2_TR(0x707ccc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B707ccf:{NFSU2_TR(0x707ccf);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B707cd2:{NFSU2_TR(0x707cd2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B707cd3:L707cd3:{c.instructions+=18;NFSU2_TR(0x707cd3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B707cd6:{NFSU2_TR(0x707cd6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B707cd9:{NFSU2_TR(0x707cd9);
w4(R+28,u32(u32(r4(R+28))-u32(r4(R+4))));
}
B707cdb:{NFSU2_TR(0x707cdb);
u8 U[4];
w4(U+0,u32(0x20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B707cdd:{NFSU2_TR(0x707cdd);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r1(U+0))));
}
B707cdf:{NFSU2_TR(0x707cdf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B707ce0:{NFSU2_TR(0x707ce0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+4,u32(u32(r4(R+4))-u32(r4(U+4))));
}
B707ce3:{NFSU2_TR(0x707ce3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B707ce6:{NFSU2_TR(0x707ce6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B707ce9:{NFSU2_TR(0x707ce9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B707cec:{NFSU2_TR(0x707cec);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r1(U+0))));
}
B707cee:{NFSU2_TR(0x707cee);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B707cef:{NFSU2_TR(0x707cef);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B707cf2:{NFSU2_TR(0x707cf2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B707cf3:{NFSU2_TR(0x707cf3);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))|u32(r4(R+12))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B707cf5:{NFSU2_TR(0x707cf5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B707cf6:{NFSU2_TR(0x707cf6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B707cf7:{NFSU2_TR(0x707cf7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B707cf8:L707cf8:{c.instructions+=9;NFSU2_TR(0x707cf8);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B707cf9:{NFSU2_TR(0x707cf9);
__builtin_memmove((R+20),(R+16),4);
}
B707cfb:{NFSU2_TR(0x707cfb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x14ull))));
}
B707cfe:{NFSU2_TR(0x707cfe);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B707cff:{NFSU2_TR(0x707cff);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B707d00:{NFSU2_TR(0x707d00);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x450cull))));
__builtin_memmove((R+28),(U+0),4);
}
B707d06:{NFSU2_TR(0x707d06);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B707d08:{NFSU2_TR(0x707d08);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B707d09:{NFSU2_TR(0x707d09);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x707d0eull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x707c7au);}goto L707c7a;}
}
B707d0e:L707d0e:{c.instructions+=4;NFSU2_TR(0x707d0e);
u8 U[4];
w4(U+0,u32(0x6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B707d10:{NFSU2_TR(0x707d10);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B707d11:{NFSU2_TR(0x707d11);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1acull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B707d17:{NFSU2_TR(0x707d17);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x707d1cull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x707c7au);}goto L707c7a;}
}
B707d1c:L707d1c:{c.instructions+=4;NFSU2_TR(0x707d1c);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B707d1e:{NFSU2_TR(0x707d1e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B707d1f:{NFSU2_TR(0x707d1f);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffffull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B707d22:{NFSU2_TR(0x707d22);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x707d27ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x707c7au);}goto L707c7a;}
}
B707d27:L707d27:{c.instructions+=5;NFSU2_TR(0x707d27);
w4(R+0,u32(r1(R+0)));
}
B707d2a:{NFSU2_TR(0x707d2a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B707d2d:{NFSU2_TR(0x707d2d);
u8 U[7];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1acull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x0ull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B707d34:{NFSU2_TR(0x707d34);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x944ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B707d3a:{NFSU2_TR(0x707d3a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x7080eeu,708);}
}
B707d40:L707d40:{c.instructions+=3;NFSU2_TR(0x707d40);
u8 U[4];
w4(U+0,u32(0x5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B707d42:{NFSU2_TR(0x707d42);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B707d43:{NFSU2_TR(0x707d43);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x707d48ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x707c7au);}goto L707c7a;}
}
B707d48:L707d48:{c.instructions+=4;NFSU2_TR(0x707d48);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B707d4a:{NFSU2_TR(0x707d4a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B707d4b:{NFSU2_TR(0x707d4b);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x19cull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B707d51:{NFSU2_TR(0x707d51);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x707d56ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x707c7au);}goto L707c7a;}
}
B707d56:L707d56:{c.instructions+=5;NFSU2_TR(0x707d56);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x19dull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B707d5c:{NFSU2_TR(0x707d5c);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x19cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B707d62:{NFSU2_TR(0x707d62);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B707d65:{NFSU2_TR(0x707d65);
u8 U[1];
w1(R+512,u8((r1(R+0))<(u8(0x7ull))));
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x7ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B707d67:{NFSU2_TR(0x707d67);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L707d70;}}
}
B707d69:L707d69:{c.instructions+=2;NFSU2_TR(0x707d69);
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
B707d6b:{NFSU2_TR(0x707d6b);
TAIL_STATIC(0x7081d7u,708);
}
B707d70:L707d70:{c.instructions+=3;NFSU2_TR(0x707d70);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B707d71:{NFSU2_TR(0x707d71);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x13cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B707d77:{NFSU2_TR(0x707d77);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x707d7cull));
TAIL_STATIC(0x70390cu,703);
}
B707d7c:L707d7c:{c.instructions+=3;NFSU2_TR(0x707d7c);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B707d7e:{NFSU2_TR(0x707d7e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B707d7f:{NFSU2_TR(0x707d7f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x707d84ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x707c7au);}goto L707c7a;}
}
B707d84:L707d84:{c.instructions+=5;NFSU2_TR(0x707d84);
w4(R+0,u32(r1(R+0)));
}
B707d87:{NFSU2_TR(0x707d87);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B707d8a:{NFSU2_TR(0x707d8a);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x944ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B707d91:{NFSU2_TR(0x707d91);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1dcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B707d97:{NFSU2_TR(0x707d97);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L707db7;}}
}
B707d99:L707d99:{c.instructions+=2;NFSU2_TR(0x707d99);
u8 U[7];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x19dull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x0ull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B707da0:{NFSU2_TR(0x707da0);
if(r1(R+518)){{goto L707db7;}}
}
B707da2:L707da2:{c.instructions+=7;NFSU2_TR(0x707da2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+4),(U+0),4);
}
B707da4:{NFSU2_TR(0x707da4);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B707da5:{NFSU2_TR(0x707da5);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B707da6:{NFSU2_TR(0x707da6);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x150ull))));
__builtin_memmove((R+0),(U+0),4);
}
B707dac:{NFSU2_TR(0x707dac);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B707dad:{NFSU2_TR(0x707dad);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B707dae:{NFSU2_TR(0x707dae);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x707db3ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x707bcau);}goto L707bca;}
}
B707db3:L707db3:{c.instructions+=3;NFSU2_TR(0x707db3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B707db4:{NFSU2_TR(0x707db4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B707db5:{NFSU2_TR(0x707db5);
{goto L707dda;}
}
B707db7:L707db7:{c.instructions+=6;NFSU2_TR(0x707db7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+4),(U+0),4);
}
B707db9:{NFSU2_TR(0x707db9);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4ull))));
}
B707dbc:{NFSU2_TR(0x707dbc);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x150ull))));
__builtin_memmove((R+0),(U+0),4);
}
B707dc2:{NFSU2_TR(0x707dc2);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B707dc3:{NFSU2_TR(0x707dc3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B707dc4:{NFSU2_TR(0x707dc4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x707dc9ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x707bcau);}goto L707bca;}
}
B707dc9:L707dc9:{c.instructions+=3;NFSU2_TR(0x707dc9);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B707dcb:{NFSU2_TR(0x707dcb);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B707dcc:{NFSU2_TR(0x707dcc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x707dd1ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x707c7au);}goto L707c7a;}
}
B707dd1:L707dd1:{c.instructions+=2;NFSU2_TR(0x707dd1);
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
B707dd4:{NFSU2_TR(0x707dd4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x451cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B707dda:L707dda:{c.instructions+=4;NFSU2_TR(0x707dda);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1dcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B707de0:{NFSU2_TR(0x707de0);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x298ull))));
__builtin_memmove((R+28),(U+0),4);
}
B707de6:{NFSU2_TR(0x707de6);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+4));
}
B707de8:{NFSU2_TR(0x707de8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x707dedull));
TAIL_STATIC(0x70333cu,703);
}
B707ded:L707ded:{c.instructions+=4;NFSU2_TR(0x707ded);
u8 U[22];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1dcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0x0ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0x0ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0x0ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B707df4:{NFSU2_TR(0x707df4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B707df5:{NFSU2_TR(0x707df5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B707df6:{NFSU2_TR(0x707df6);
if(r1(R+518)){{goto L707e07;}}
}
B707df8:L707df8:{c.instructions+=3;NFSU2_TR(0x707df8);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4944ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B707dfe:{NFSU2_TR(0x707dfe);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+4));
}
B707e00:{NFSU2_TR(0x707e00);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x707e05ull));
TAIL_STATIC(0x70334au,703);
}
B707e05:L707e05:{c.instructions+=2;NFSU2_TR(0x707e05);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B707e06:{NFSU2_TR(0x707e06);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B707e07:L707e07:{c.instructions+=4;NFSU2_TR(0x707e07);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x150ull))));
__builtin_memmove((R+0),(U+0),4);
}
B707e0d:{NFSU2_TR(0x707e0d);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B707e0f:{NFSU2_TR(0x707e0f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B707e10:{NFSU2_TR(0x707e10);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x707e15ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x707c18u);}goto L707c18;}
}
B707e15:L707e15:{c.instructions+=6;NFSU2_TR(0x707e15);
w4(R+12,u32(r1(R+0)));
}
B707e18:{NFSU2_TR(0x707e18);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B707e1a:{NFSU2_TR(0x707e1a);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x150ull))));
__builtin_memmove((R+28),(U+0),4);
}
B707e20:{NFSU2_TR(0x707e20);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B707e21:{NFSU2_TR(0x707e21);
w4(R+12,shl<u32>(r4(R+12),u64(u32(0x1ull))));
}
B707e23:{NFSU2_TR(0x707e23);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x707e28ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x707c18u);}goto L707c18;}
}
B707e28:L707e28:{c.instructions+=6;NFSU2_TR(0x707e28);
w4(R+0,u32(r1(R+0)));
}
B707e2b:{NFSU2_TR(0x707e2b);
w4(R+0,shl<u32>(r4(R+0),u64(u32(0x1ull))));
}
B707e2d:{NFSU2_TR(0x707e2d);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B707e2f:{NFSU2_TR(0x707e2f);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B707e30:{NFSU2_TR(0x707e30);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B707e33:{NFSU2_TR(0x707e33);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x707e38ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x707c18u);}goto L707c18;}
}
B707e38:L707e38:{c.instructions+=6;NFSU2_TR(0x707e38);
w4(R+28,u32(r1(R+0)));
}
B707e3b:{NFSU2_TR(0x707e3b);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x150ull))));
__builtin_memmove((R+0),(U+0),4);
}
B707e41:{NFSU2_TR(0x707e41);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B707e43:{NFSU2_TR(0x707e43);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B707e44:{NFSU2_TR(0x707e44);
w4(R+28,shl<u32>(r4(R+28),u64(u32(0x1ull))));
}
B707e46:{NFSU2_TR(0x707e46);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x707e4bull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x707c18u);}goto L707c18;}
}
B707e4b:L707e4b:{c.instructions+=5;NFSU2_TR(0x707e4b);
w4(R+4,u32(r1(R+0)));
}
B707e4e:{NFSU2_TR(0x707e4e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x20ull))));
}
B707e51:{NFSU2_TR(0x707e51);
w4(R+4,shl<u32>(r4(R+4),u64(u32(0x1ull))));
}
B707e53:{NFSU2_TR(0x707e53);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1ccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B707e5a:{NFSU2_TR(0x707e5a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L707e66;}}
}
B707e5c:L707e5c:{c.instructions+=1;NFSU2_TR(0x707e5c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1ccull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B707e66:L707e66:{c.instructions+=2;NFSU2_TR(0x707e66);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1d4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B707e6d:{NFSU2_TR(0x707e6d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L707e79;}}
}
B707e6f:L707e6f:{c.instructions+=1;NFSU2_TR(0x707e6f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1d4ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B707e79:L707e79:{c.instructions+=20;NFSU2_TR(0x707e79);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1f8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B707e7f:{NFSU2_TR(0x707e7f);
u8 U[32];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1c8ull))));
w8(U+8,u64(s64(s32(r4(R+0)))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+16,u64(s64(s32(r4(U+4)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+0,u32(r8(U+24)));
}
B707e86:{NFSU2_TR(0x707e86);
u8 U[4];
w4(U+0,u32(u32(u32(0x3ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B707e89:{NFSU2_TR(0x707e89);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B707e8b:{NFSU2_TR(0x707e8b);
u8 U[64];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1ccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+8,u64(r4(U+4)));
w8(U+16,u64(r4(R+8)));
w8(U+24,shl<u64>(r8(U+16),u64(u32(0x20ull))));
w8(U+32,u64(r4(R+0)));
w8(U+40,u64(u64(r8(U+24))|u64(r8(U+32))));
{u64 d_=u64(r8(U+8));if(__builtin_expect(!d_,0))NFSU2_FAULT("integer division by zero",0x707e8b);w8(U+48,u64(u64(r8(U+40))/d_));}
w4(R+0,u32(r8(U+48)));
{u64 d_=u64(r8(U+8));if(__builtin_expect(!d_,0))NFSU2_FAULT("integer division by zero",0x707e8b);w8(U+56,u64(u64(r8(U+40))%d_));}
w4(R+8,u32(r8(U+56)));
}
B707e91:{NFSU2_TR(0x707e91);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B707e93:{NFSU2_TR(0x707e93);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B707e96:{NFSU2_TR(0x707e96);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1d0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B707e9c:{NFSU2_TR(0x707e9c);
u8 U[32];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1f4ull))));
w8(U+8,u64(s64(s32(r4(R+0)))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+16,u64(s64(s32(r4(U+4)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+0,u32(r8(U+24)));
}
B707ea3:{NFSU2_TR(0x707ea3);
u8 U[4];
w4(U+0,u32(u32(u32(0x3ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B707ea6:{NFSU2_TR(0x707ea6);
u8 U[64];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1d4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+8,u64(r4(U+4)));
w8(U+16,u64(r4(R+8)));
w8(U+24,shl<u64>(r8(U+16),u64(u32(0x20ull))));
w8(U+32,u64(r4(R+0)));
w8(U+40,u64(u64(r8(U+24))|u64(r8(U+32))));
{u64 d_=u64(r8(U+8));if(__builtin_expect(!d_,0))NFSU2_FAULT("integer division by zero",0x707ea6);w8(U+48,u64(u64(r8(U+40))/d_));}
w4(R+0,u32(r8(U+48)));
{u64 d_=u64(r8(U+8));if(__builtin_expect(!d_,0))NFSU2_FAULT("integer division by zero",0x707ea6);w8(U+56,u64(u64(r8(U+40))%d_));}
w4(R+8,u32(r8(U+56)));
}
B707eac:{NFSU2_TR(0x707eac);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B707eaf:{NFSU2_TR(0x707eaf);
__builtin_memmove((R+0),(R+4),4);
}
B707eb1:{NFSU2_TR(0x707eb1);
u8 U[4];
w4(U+0,u32(u32(u32(0x3ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B707eb4:{NFSU2_TR(0x707eb4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1e0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B707eba:{NFSU2_TR(0x707eba);
__builtin_memmove((R+0),(R+28),4);
}
B707ebc:{NFSU2_TR(0x707ebc);
u8 U[4];
w4(U+0,u32(u32(u32(0x3ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B707ebf:{NFSU2_TR(0x707ebf);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w1(R+512,u8((r4(R+12))<(r4(U+0))));
}
B707ec1:{NFSU2_TR(0x707ec1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1e4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B707ec7:{NFSU2_TR(0x707ec7);
if(r1(R+512)){{goto L707eda;}}
}
B707ec9:L707ec9:{c.instructions+=5;NFSU2_TR(0x707ec9);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B707ecb:{NFSU2_TR(0x707ecb);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B707ecc:{NFSU2_TR(0x707ecc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1d0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B707ed2:{NFSU2_TR(0x707ed2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1d4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B707ed8:{NFSU2_TR(0x707ed8);
{goto L707f30;}
}
B707eda:L707eda:{c.instructions+=5;NFSU2_TR(0x707eda);
__builtin_memmove((R+8),(R+28),4);
}
B707edc:{NFSU2_TR(0x707edc);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B707edf:{NFSU2_TR(0x707edf);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B707ee2:{NFSU2_TR(0x707ee2);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
}
B707ee4:{NFSU2_TR(0x707ee4);
if(r1(R+512)){{goto L707efc;}}
}
B707ee6:L707ee6:{c.instructions+=3;NFSU2_TR(0x707ee6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1d0ull))));
w4(U+4,u32(0x5ull));
s4(u32(r4(U+0)),r4(U+4));
}
B707ef0:{NFSU2_TR(0x707ef0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1d4ull))));
w4(U+4,u32(0x4ull));
s4(u32(r4(U+0)),r4(U+4));
}
B707efa:{NFSU2_TR(0x707efa);
{goto L707f2d;}
}
B707efc:L707efc:{c.instructions+=3;NFSU2_TR(0x707efc);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B707eff:{NFSU2_TR(0x707eff);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
}
B707f01:{NFSU2_TR(0x707f01);
if(r1(R+512)){{goto L707f19;}}
}
B707f03:L707f03:{c.instructions+=3;NFSU2_TR(0x707f03);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1d0ull))));
w4(U+4,u32(0x5ull));
s4(u32(r4(U+0)),r4(U+4));
}
B707f0d:{NFSU2_TR(0x707f0d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1d4ull))));
w4(U+4,u32(0x3ull));
s4(u32(r4(U+0)),r4(U+4));
}
B707f17:{NFSU2_TR(0x707f17);
{goto L707f2d;}
}
B707f19:L707f19:{c.instructions+=2;NFSU2_TR(0x707f19);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1d0ull))));
w4(U+4,u32(0x2ull));
s4(u32(r4(U+0)),r4(U+4));
}
B707f23:{NFSU2_TR(0x707f23);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1d4ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B707f2d:L707f2d:{c.instructions+=2;NFSU2_TR(0x707f2d);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B707f2f:{NFSU2_TR(0x707f2f);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B707f30:L707f30:{c.instructions+=3;NFSU2_TR(0x707f30);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B707f33:{NFSU2_TR(0x707f33);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(R+28))<(r4(U+0))));
}
B707f35:{NFSU2_TR(0x707f35);
if(r1(R+512)){{goto L707f3f;}}
}
B707f37:L707f37:{c.instructions+=2;NFSU2_TR(0x707f37);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1c8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B707f3d:{NFSU2_TR(0x707f3d);
{goto L707f8b;}
}
B707f3f:L707f3f:{c.instructions+=6;NFSU2_TR(0x707f3f);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B707f42:{NFSU2_TR(0x707f42);
__builtin_memmove((R+28),(R+4),4);
}
B707f44:{NFSU2_TR(0x707f44);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+28,shl<u32>(r4(R+28),u64(r4(U+0))));
}
B707f47:{NFSU2_TR(0x707f47);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w1(R+512,u8((r4(R+8))<(r4(U+0))));
}
B707f49:{NFSU2_TR(0x707f49);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B707f4c:{NFSU2_TR(0x707f4c);
if(r1(R+512)){{goto L707f64;}}
}
B707f4e:L707f4e:{c.instructions+=3;NFSU2_TR(0x707f4e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1c8ull))));
w4(U+4,u32(0x5ull));
s4(u32(r4(U+0)),r4(U+4));
}
B707f58:{NFSU2_TR(0x707f58);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1ccull))));
w4(U+4,u32(0x4ull));
s4(u32(r4(U+0)),r4(U+4));
}
B707f62:{NFSU2_TR(0x707f62);
{goto L707f91;}
}
B707f64:L707f64:{c.instructions+=3;NFSU2_TR(0x707f64);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B707f67:{NFSU2_TR(0x707f67);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(R+8))<(r4(U+0))));
}
B707f69:{NFSU2_TR(0x707f69);
if(r1(R+512)){{goto L707f81;}}
}
B707f6b:L707f6b:{c.instructions+=3;NFSU2_TR(0x707f6b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1c8ull))));
w4(U+4,u32(0x5ull));
s4(u32(r4(U+0)),r4(U+4));
}
B707f75:{NFSU2_TR(0x707f75);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1ccull))));
w4(U+4,u32(0x3ull));
s4(u32(r4(U+0)),r4(U+4));
}
B707f7f:{NFSU2_TR(0x707f7f);
{goto L707f91;}
}
B707f81:L707f81:{c.instructions+=1;NFSU2_TR(0x707f81);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1c8ull))));
w4(U+4,u32(0x2ull));
s4(u32(r4(U+0)),r4(U+4));
}
B707f8b:L707f8b:{c.instructions+=1;NFSU2_TR(0x707f8b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1ccull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B707f91:L707f91:{c.instructions+=19;NFSU2_TR(0x707f91);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1c8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B707f97:{NFSU2_TR(0x707f97);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(r4(R+28)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B707f9a:{NFSU2_TR(0x707f9a);
u8 U[4];
w4(U+0,u32(u32(u32(0x3ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B707f9d:{NFSU2_TR(0x707f9d);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B707f9f:{NFSU2_TR(0x707f9f);
u8 U[64];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1ccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+8,u64(r4(U+4)));
w8(U+16,u64(r4(R+8)));
w8(U+24,shl<u64>(r8(U+16),u64(u32(0x20ull))));
w8(U+32,u64(r4(R+0)));
w8(U+40,u64(u64(r8(U+24))|u64(r8(U+32))));
{u64 d_=u64(r8(U+8));if(__builtin_expect(!d_,0))NFSU2_FAULT("integer division by zero",0x707f9f);w8(U+48,u64(u64(r8(U+40))/d_));}
w4(R+0,u32(r8(U+48)));
{u64 d_=u64(r8(U+8));if(__builtin_expect(!d_,0))NFSU2_FAULT("integer division by zero",0x707f9f);w8(U+56,u64(u64(r8(U+40))%d_));}
w4(R+8,u32(r8(U+56)));
}
B707fa5:{NFSU2_TR(0x707fa5);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B707fa7:{NFSU2_TR(0x707fa7);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B707fa9:{NFSU2_TR(0x707fa9);
__builtin_memmove((R+4),(R+0),4);
}
B707fab:{NFSU2_TR(0x707fab);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1d0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B707fb1:{NFSU2_TR(0x707fb1);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(r4(R+12)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B707fb4:{NFSU2_TR(0x707fb4);
u8 U[4];
w4(U+0,u32(u32(u32(0x3ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B707fb7:{NFSU2_TR(0x707fb7);
u8 U[64];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1d4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+8,u64(r4(U+4)));
w8(U+16,u64(r4(R+8)));
w8(U+24,shl<u64>(r8(U+16),u64(u32(0x20ull))));
w8(U+32,u64(r4(R+0)));
w8(U+40,u64(u64(r8(U+24))|u64(r8(U+32))));
{u64 d_=u64(r8(U+8));if(__builtin_expect(!d_,0))NFSU2_FAULT("integer division by zero",0x707fb7);w8(U+48,u64(u64(r8(U+40))/d_));}
w4(R+0,u32(r8(U+48)));
{u64 d_=u64(r8(U+8));if(__builtin_expect(!d_,0))NFSU2_FAULT("integer division by zero",0x707fb7);w8(U+56,u64(u64(r8(U+40))%d_));}
w4(R+8,u32(r8(U+56)));
}
B707fbd:{NFSU2_TR(0x707fbd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B707fc0:{NFSU2_TR(0x707fc0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x234ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B707fc6:{NFSU2_TR(0x707fc6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B707fc9:{NFSU2_TR(0x707fc9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x238ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B707fcf:{NFSU2_TR(0x707fcf);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x150ull))));
__builtin_memmove((R+0),(U+0),4);
}
B707fd5:{NFSU2_TR(0x707fd5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B707fd6:{NFSU2_TR(0x707fd6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x707fdbull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x707c18u);}goto L707c18;}
}
B707fdb:L707fdb:{c.instructions+=5;NFSU2_TR(0x707fdb);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1f4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+12))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B707fe1:{NFSU2_TR(0x707fe1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B707fe2:{NFSU2_TR(0x707fe2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B707fe3:{NFSU2_TR(0x707fe3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1d8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B707fe9:{NFSU2_TR(0x707fe9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L707ff3;}}
}
B707feb:L707feb:{c.instructions+=2;NFSU2_TR(0x707feb);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1f8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+28))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B707ff1:{NFSU2_TR(0x707ff1);
if(r1(R+518)){TAIL_STATIC(0x708010u,708);}
}
B707ff3:L707ff3:{c.instructions+=4;NFSU2_TR(0x707ff3);
__builtin_memmove((R+0),(R+28),4);
}
B707ff5:{NFSU2_TR(0x707ff5);
u8 U[4];
w4(U+0,u32(u32(u32(0x3ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B707ff8:{NFSU2_TR(0x707ff8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1b0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B707ffe:{NFSU2_TR(0x707ffe);
__builtin_memmove((R+0),(R+12),4);
TAIL_STATIC(0x708000u,708);
}
XIT:NFSU2_TR_EXIT(0x707,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
