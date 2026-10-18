#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_402(u8* __restrict R,Cpu& c);
u32 body_458(u8* __restrict R,Cpu& c);
u32 body_479(u8* __restrict R,Cpu& c);
u32 body_488(u8* __restrict R,Cpu& c);
u32 body_495(u8* __restrict R,Cpu& c);
u32 body_4a3(u8* __restrict R,Cpu& c);
u32 body_4a7(u8* __restrict R,Cpu& c);
u32 body_4a9(u8* __restrict R,Cpu& c);
u32 body_4ac(u8* __restrict R,Cpu& c);
u32 body_4d8(u8* __restrict R,Cpu& c);
u32 body_503(u8* __restrict R,Cpu& c);
u32 body_505(u8* __restrict R,Cpu& c);
u32 body_50b(u8* __restrict R,Cpu& c);
u32 body_50c(u8* __restrict R,Cpu& c);
u32 body_50d(u8* __restrict R,Cpu& c);
u32 body_50f(u8* __restrict R,Cpu& c);
u32 body_510(u8* __restrict R,Cpu& c);
u32 body_517(u8* __restrict R,Cpu& c);
u32 body_51b(u8* __restrict R,Cpu& c);
u32 body_51d(u8* __restrict R,Cpu& c);
u32 body_51f(u8* __restrict R,Cpu& c);
u32 body_523(u8* __restrict R,Cpu& c);
u32 body_524(u8* __restrict R,Cpu& c);
u32 body_52b(u8* __restrict R,Cpu& c);
u32 body_52c(u8* __restrict R,Cpu& c);
u32 body_52d(u8* __restrict R,Cpu& c);
u32 body_530(u8* __restrict R,Cpu& c);
u32 body_537(u8* __restrict R,Cpu& c);
u32 body_53d(u8* __restrict R,Cpu& c);
u32 body_542(u8* __restrict R,Cpu& c);
u32 body_54e(u8* __restrict R,Cpu& c);
u32 body_550(u8* __restrict R,Cpu& c);
u32 body_551(u8* __restrict R,Cpu& c);
u32 body_555(u8* __restrict R,Cpu& c);
u32 body_556(u8* __restrict R,Cpu& c);
u32 body_558(u8* __restrict R,Cpu& c);
u32 body_55b(u8* __restrict R,Cpu& c);
u32 body_55d(u8* __restrict R,Cpu& c);
u32 body_566(u8* __restrict R,Cpu& c);
u32 body_5ac(u8* __restrict R,Cpu& c);
u32 body_5ba(u8* __restrict R,Cpu& c);
u32 body_5be(u8* __restrict R,Cpu& c);
u32 body_5f4(u8* __restrict R,Cpu& c);
u32 body_5f6(u8* __restrict R,Cpu& c);
u32 body_610(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x565,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x565,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_565(u8* __restrict R,Cpu& c);
u32 page_565(Cpu& c){return body_565(c.regs.data(),c);}
__attribute__((noinline)) u32 body_565(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x565000:goto L565000;
case 0x565005:goto L565005;
case 0x56500b:c.instructions+=3;goto B56500b;
case 0x56500c:c.instructions+=2;goto B56500c;
case 0x565011:c.instructions+=1;goto B565011;
case 0x565016:goto L565016;
case 0x565018:c.instructions+=1;goto B565018;
case 0x56501a:goto L56501a;
case 0x56501d:c.instructions+=2;goto B56501d;
case 0x56501f:c.instructions+=1;goto B56501f;
case 0x565021:goto L565021;
case 0x565024:c.instructions+=2;goto B565024;
case 0x565026:c.instructions+=1;goto B565026;
case 0x565028:goto L565028;
case 0x565029:c.instructions+=5;goto B565029;
case 0x56502b:c.instructions+=4;goto B56502b;
case 0x56502d:c.instructions+=3;goto B56502d;
case 0x565032:c.instructions+=2;goto B565032;
case 0x565034:c.instructions+=1;goto B565034;
case 0x565039:goto L565039;
case 0x56503b:c.instructions+=3;goto B56503b;
case 0x56503c:c.instructions+=2;goto B56503c;
case 0x56503e:c.instructions+=1;goto B56503e;
case 0x565041:goto L565041;
case 0x565043:c.instructions+=2;goto B565043;
case 0x565045:c.instructions+=1;goto B565045;
case 0x565048:goto L565048;
case 0x565049:c.instructions+=4;goto B565049;
case 0x56504a:c.instructions+=3;goto B56504a;
case 0x56504c:c.instructions+=2;goto B56504c;
case 0x56504d:c.instructions+=1;goto B56504d;
case 0x565050:goto L565050;
case 0x565051:c.instructions+=11;goto B565051;
case 0x565055:c.instructions+=10;goto B565055;
case 0x565056:c.instructions+=9;goto B565056;
case 0x56505a:c.instructions+=8;goto B56505a;
case 0x56505b:c.instructions+=7;goto B56505b;
case 0x56505c:c.instructions+=6;goto B56505c;
case 0x565060:c.instructions+=5;goto B565060;
case 0x565061:c.instructions+=4;goto B565061;
case 0x565062:c.instructions+=3;goto B565062;
case 0x565063:c.instructions+=2;goto B565063;
case 0x565065:c.instructions+=1;goto B565065;
case 0x56506a:goto L56506a;
case 0x56506d:c.instructions+=4;goto B56506d;
case 0x56506e:c.instructions+=3;goto B56506e;
case 0x56506f:c.instructions+=2;goto B56506f;
case 0x565070:c.instructions+=1;goto B565070;
case 0x565075:goto L565075;
case 0x565078:c.instructions+=2;goto B565078;
case 0x56507a:c.instructions+=1;goto B56507a;
case 0x56507c:goto L56507c;
case 0x56507d:c.instructions+=2;goto B56507d;
case 0x565082:c.instructions+=1;goto B565082;
case 0x565087:goto L565087;
case 0x565089:c.instructions+=1;goto B565089;
case 0x56508b:goto L56508b;
case 0x56508e:c.instructions+=2;goto B56508e;
case 0x565090:c.instructions+=1;goto B565090;
case 0x565092:goto L565092;
case 0x565095:c.instructions+=2;goto B565095;
case 0x565097:c.instructions+=1;goto B565097;
case 0x565099:goto L565099;
case 0x56509a:c.instructions+=5;goto B56509a;
case 0x56509c:c.instructions+=4;goto B56509c;
case 0x56509e:c.instructions+=3;goto B56509e;
case 0x5650a3:c.instructions+=2;goto B5650a3;
case 0x5650a5:c.instructions+=1;goto B5650a5;
case 0x5650aa:goto L5650aa;
case 0x5650ab:c.instructions+=4;goto B5650ab;
case 0x5650ac:c.instructions+=3;goto B5650ac;
case 0x5650ad:c.instructions+=2;goto B5650ad;
case 0x5650ae:c.instructions+=1;goto B5650ae;
case 0x5650c0:goto L5650c0;
case 0x5650c1:c.instructions+=14;goto B5650c1;
case 0x5650c3:c.instructions+=13;goto B5650c3;
case 0x5650c6:c.instructions+=12;goto B5650c6;
case 0x5650c9:c.instructions+=11;goto B5650c9;
case 0x5650ca:c.instructions+=10;goto B5650ca;
case 0x5650cd:c.instructions+=9;goto B5650cd;
case 0x5650ce:c.instructions+=8;goto B5650ce;
case 0x5650d0:c.instructions+=7;goto B5650d0;
case 0x5650d3:c.instructions+=6;goto B5650d3;
case 0x5650d4:c.instructions+=5;goto B5650d4;
case 0x5650d5:c.instructions+=4;goto B5650d5;
case 0x5650d6:c.instructions+=3;goto B5650d6;
case 0x5650d7:c.instructions+=2;goto B5650d7;
case 0x5650d9:c.instructions+=1;goto B5650d9;
case 0x5650de:goto L5650de;
case 0x5650e4:c.instructions+=1;goto B5650e4;
case 0x5650e6:goto L5650e6;
case 0x5650e8:goto L5650e8;
case 0x5650ee:c.instructions+=1;goto B5650ee;
case 0x5650f0:goto L5650f0;
case 0x5650f6:c.instructions+=1;goto B5650f6;
case 0x5650f8:goto L5650f8;
case 0x5650fe:c.instructions+=1;goto B5650fe;
case 0x565104:goto L565104;
case 0x56510a:c.instructions+=2;goto B56510a;
case 0x56510c:c.instructions+=1;goto B56510c;
case 0x565111:goto L565111;
case 0x565112:c.instructions+=3;goto B565112;
case 0x565113:c.instructions+=2;goto B565113;
case 0x565114:c.instructions+=1;goto B565114;
case 0x565117:goto L565117;
case 0x56511a:c.instructions+=3;goto B56511a;
case 0x56511c:c.instructions+=2;goto B56511c;
case 0x56511d:c.instructions+=1;goto B56511d;
case 0x565122:goto L565122;
case 0x565125:c.instructions+=1;goto B565125;
case 0x56512a:goto L56512a;
case 0x565130:c.instructions+=2;goto B565130;
case 0x565132:c.instructions+=1;goto B565132;
case 0x565137:goto L565137;
case 0x565138:c.instructions+=3;goto B565138;
case 0x565139:c.instructions+=2;goto B565139;
case 0x56513a:c.instructions+=1;goto B56513a;
case 0x56513d:goto L56513d;
case 0x565143:c.instructions+=2;goto B565143;
case 0x565145:c.instructions+=1;goto B565145;
case 0x56514a:goto L56514a;
case 0x56514b:c.instructions+=3;goto B56514b;
case 0x56514c:c.instructions+=2;goto B56514c;
case 0x56514d:c.instructions+=1;goto B56514d;
case 0x565150:goto L565150;
case 0x565156:c.instructions+=1;goto B565156;
case 0x56515c:goto L56515c;
case 0x565162:c.instructions+=1;goto B565162;
case 0x565164:goto L565164;
case 0x56516a:c.instructions+=1;goto B56516a;
case 0x565170:goto L565170;
case 0x565173:c.instructions+=3;goto B565173;
case 0x565175:c.instructions+=2;goto B565175;
case 0x565176:c.instructions+=1;goto B565176;
case 0x56517b:goto L56517b;
case 0x56517e:c.instructions+=1;goto B56517e;
case 0x565183:goto L565183;
case 0x565189:c.instructions+=2;goto B565189;
case 0x56518b:c.instructions+=1;goto B56518b;
case 0x565190:goto L565190;
case 0x565193:c.instructions+=2;goto B565193;
case 0x565195:c.instructions+=1;goto B565195;
case 0x56519b:goto L56519b;
case 0x56519e:c.instructions+=3;goto B56519e;
case 0x56519f:c.instructions+=2;goto B56519f;
case 0x5651a4:c.instructions+=1;goto B5651a4;
case 0x5651a9:goto L5651a9;
case 0x5651ac:c.instructions+=2;goto B5651ac;
case 0x5651af:c.instructions+=1;goto B5651af;
case 0x5651b1:goto L5651b1;
case 0x5651b4:c.instructions+=1;goto B5651b4;
case 0x5651b6:goto L5651b6;
case 0x5651bb:c.instructions+=1;goto B5651bb;
case 0x5651c0:goto L5651c0;
case 0x5651c5:c.instructions+=1;goto B5651c5;
case 0x5651ca:goto L5651ca;
case 0x5651cd:c.instructions+=3;goto B5651cd;
case 0x5651d0:c.instructions+=2;goto B5651d0;
case 0x5651d2:c.instructions+=1;goto B5651d2;
case 0x5651d8:goto L5651d8;
case 0x5651db:c.instructions+=1;goto B5651db;
case 0x5651e0:goto L5651e0;
case 0x5651e6:c.instructions+=2;goto B5651e6;
case 0x5651e8:c.instructions+=1;goto B5651e8;
case 0x5651ed:goto L5651ed;
case 0x5651ee:c.instructions+=3;goto B5651ee;
case 0x5651ef:c.instructions+=2;goto B5651ef;
case 0x5651f0:c.instructions+=1;goto B5651f0;
case 0x5651f3:goto L5651f3;
case 0x5651f9:c.instructions+=1;goto B5651f9;
case 0x5651ff:goto L5651ff;
case 0x565205:goto L565205;
case 0x56520b:c.instructions+=1;goto B56520b;
case 0x565211:goto L565211;
case 0x565213:goto L565213;
case 0x565219:c.instructions+=1;goto B565219;
case 0x56521b:goto L56521b;
case 0x565221:c.instructions+=1;goto B565221;
case 0x565227:goto L565227;
case 0x565229:c.instructions+=1;goto B565229;
case 0x56522e:goto L56522e;
case 0x56522f:c.instructions+=3;goto B56522f;
case 0x565230:c.instructions+=2;goto B565230;
case 0x565231:c.instructions+=1;goto B565231;
case 0x565234:goto L565234;
case 0x565237:c.instructions+=4;goto B565237;
case 0x56523a:c.instructions+=3;goto B56523a;
case 0x56523c:c.instructions+=2;goto B56523c;
case 0x56523d:c.instructions+=1;goto B56523d;
case 0x565240:goto L565240;
case 0x565241:c.instructions+=3;goto B565241;
case 0x565242:c.instructions+=2;goto B565242;
case 0x565243:c.instructions+=1;goto B565243;
case 0x565246:goto L565246;
case 0x565249:c.instructions+=5;goto B565249;
case 0x56524c:c.instructions+=4;goto B56524c;
case 0x56524f:c.instructions+=3;goto B56524f;
case 0x565252:c.instructions+=2;goto B565252;
case 0x565254:c.instructions+=1;goto B565254;
case 0x565256:goto L565256;
case 0x565258:c.instructions+=1;goto B565258;
case 0x56525a:goto L56525a;
case 0x56525d:c.instructions+=1;goto B56525d;
case 0x56525f:goto L56525f;
case 0x565261:goto L565261;
case 0x565263:c.instructions+=1;goto B565263;
case 0x565265:goto L565265;
case 0x565268:c.instructions+=1;goto B565268;
case 0x56526a:goto L56526a;
case 0x56526c:goto L56526c;
case 0x56526e:c.instructions+=1;goto B56526e;
case 0x565274:goto L565274;
case 0x565276:c.instructions+=1;goto B565276;
case 0x56527b:goto L56527b;
case 0x56527d:c.instructions+=2;goto B56527d;
case 0x56527f:c.instructions+=1;goto B56527f;
case 0x565282:goto L565282;
case 0x565285:c.instructions+=2;goto B565285;
case 0x565287:c.instructions+=1;goto B565287;
case 0x565289:goto L565289;
case 0x56528c:c.instructions+=1;goto B56528c;
case 0x56528e:goto L56528e;
case 0x565290:c.instructions+=1;goto B565290;
case 0x565292:goto L565292;
case 0x565295:c.instructions+=1;goto B565295;
case 0x565297:goto L565297;
case 0x565299:c.instructions+=1;goto B565299;
case 0x5652a0:goto L5652a0;
case 0x5652a2:c.instructions+=1;goto B5652a2;
case 0x5652a4:goto L5652a4;
case 0x5652a7:c.instructions+=1;goto B5652a7;
case 0x5652a9:goto L5652a9;
case 0x5652ab:goto L5652ab;
case 0x5652ad:c.instructions+=1;goto B5652ad;
case 0x5652b3:goto L5652b3;
case 0x5652b5:c.instructions+=1;goto B5652b5;
case 0x5652ba:goto L5652ba;
case 0x5652bc:c.instructions+=2;goto B5652bc;
case 0x5652be:c.instructions+=1;goto B5652be;
case 0x5652c1:goto L5652c1;
case 0x5652c4:c.instructions+=2;goto B5652c4;
case 0x5652c6:c.instructions+=1;goto B5652c6;
case 0x5652c8:goto L5652c8;
case 0x5652cb:c.instructions+=1;goto B5652cb;
case 0x5652cd:goto L5652cd;
case 0x5652d3:c.instructions+=1;goto B5652d3;
case 0x5652d9:goto L5652d9;
case 0x5652dc:c.instructions+=2;goto B5652dc;
case 0x5652de:c.instructions+=1;goto B5652de;
case 0x5652e0:goto L5652e0;
case 0x5652e2:c.instructions+=1;goto B5652e2;
case 0x5652e5:goto L5652e5;
case 0x5652e8:c.instructions+=2;goto B5652e8;
case 0x5652e9:c.instructions+=1;goto B5652e9;
case 0x5652ee:goto L5652ee;
case 0x5652ef:c.instructions+=1;goto B5652ef;
case 0x5652f4:goto L5652f4;
case 0x5652f7:c.instructions+=2;goto B5652f7;
case 0x5652f9:c.instructions+=1;goto B5652f9;
case 0x5652fb:goto L5652fb;
case 0x565302:goto L565302;
case 0x565305:c.instructions+=5;goto B565305;
case 0x565307:c.instructions+=4;goto B565307;
case 0x56530c:c.instructions+=3;goto B56530c;
case 0x565311:c.instructions+=2;goto B565311;
case 0x565312:c.instructions+=1;goto B565312;
case 0x565317:goto L565317;
case 0x56531d:c.instructions+=5;goto B56531d;
case 0x56531f:c.instructions+=4;goto B56531f;
case 0x565324:c.instructions+=3;goto B565324;
case 0x565329:c.instructions+=2;goto B565329;
case 0x56532a:c.instructions+=1;goto B56532a;
case 0x56532f:goto L56532f;
case 0x565334:c.instructions+=3;goto B565334;
case 0x565335:c.instructions+=2;goto B565335;
case 0x56533a:c.instructions+=1;goto B56533a;
case 0x56533f:goto L56533f;
case 0x565342:c.instructions+=4;goto B565342;
case 0x565343:c.instructions+=3;goto B565343;
case 0x565344:c.instructions+=2;goto B565344;
case 0x565345:c.instructions+=1;goto B565345;
case 0x565348:goto L565348;
case 0x56534e:c.instructions+=2;goto B56534e;
case 0x565354:c.instructions+=1;goto B565354;
case 0x56535a:goto L56535a;
case 0x56535f:c.instructions+=2;goto B56535f;
case 0x565361:c.instructions+=1;goto B565361;
case 0x565367:goto L565367;
case 0x56536e:c.instructions+=5;goto B56536e;
case 0x565374:c.instructions+=4;goto B565374;
case 0x56537b:c.instructions+=3;goto B56537b;
case 0x56537e:c.instructions+=2;goto B56537e;
case 0x565380:c.instructions+=1;goto B565380;
case 0x565385:goto L565385;
case 0x56538a:c.instructions+=1;goto B56538a;
case 0x56538f:goto L56538f;
case 0x565392:c.instructions+=2;goto B565392;
case 0x565394:c.instructions+=1;goto B565394;
case 0x565396:goto L565396;
case 0x56539b:c.instructions+=1;goto B56539b;
case 0x5653a0:goto L5653a0;
case 0x5653a3:goto L5653a3;
case 0x5653a9:c.instructions+=2;goto B5653a9;
case 0x5653ab:c.instructions+=1;goto B5653ab;
case 0x5653b0:goto L5653b0;
case 0x5653b1:c.instructions+=3;goto B5653b1;
case 0x5653b2:c.instructions+=2;goto B5653b2;
case 0x5653b3:c.instructions+=1;goto B5653b3;
case 0x5653b6:goto L5653b6;
case 0x5653bc:c.instructions+=1;goto B5653bc;
case 0x5653c2:goto L5653c2;
case 0x5653c4:goto L5653c4;
case 0x5653ca:c.instructions+=1;goto B5653ca;
case 0x5653d0:goto L5653d0;
case 0x5653d6:c.instructions+=1;goto B5653d6;
case 0x5653dc:goto L5653dc;
case 0x5653df:c.instructions+=3;goto B5653df;
case 0x5653e2:c.instructions+=2;goto B5653e2;
case 0x5653e3:c.instructions+=1;goto B5653e3;
case 0x5653e8:goto L5653e8;
case 0x5653e9:c.instructions+=4;goto B5653e9;
case 0x5653ec:c.instructions+=3;goto B5653ec;
case 0x5653f1:c.instructions+=2;goto B5653f1;
case 0x5653f2:c.instructions+=1;goto B5653f2;
case 0x5653f7:goto L5653f7;
case 0x5653fa:c.instructions+=4;goto B5653fa;
case 0x5653fb:c.instructions+=3;goto B5653fb;
case 0x5653fc:c.instructions+=2;goto B5653fc;
case 0x5653fd:c.instructions+=1;goto B5653fd;
case 0x565400:goto L565400;
case 0x565402:goto L565402;
case 0x565404:c.instructions+=1;goto B565404;
case 0x565406:goto L565406;
case 0x565409:c.instructions+=1;goto B565409;
case 0x56540b:goto L56540b;
case 0x56540d:goto L56540d;
case 0x56540f:c.instructions+=1;goto B56540f;
case 0x565415:goto L565415;
case 0x565417:c.instructions+=1;goto B565417;
case 0x56541c:goto L56541c;
case 0x56541e:c.instructions+=2;goto B56541e;
case 0x565420:c.instructions+=1;goto B565420;
case 0x565423:goto L565423;
case 0x565426:c.instructions+=2;goto B565426;
case 0x565428:c.instructions+=1;goto B565428;
case 0x56542a:goto L56542a;
case 0x56542d:c.instructions+=1;goto B56542d;
case 0x56542f:goto L56542f;
case 0x565435:c.instructions+=2;goto B565435;
case 0x565437:c.instructions+=1;goto B565437;
case 0x56543d:goto L56543d;
case 0x565443:c.instructions+=2;goto B565443;
case 0x565445:c.instructions+=1;goto B565445;
case 0x565447:goto L565447;
case 0x56544a:c.instructions+=2;goto B56544a;
case 0x56544b:c.instructions+=1;goto B56544b;
case 0x565450:goto L565450;
case 0x565455:c.instructions+=2;goto B565455;
case 0x565457:c.instructions+=1;goto B565457;
case 0x565459:goto L565459;
case 0x56545f:c.instructions+=2;goto B56545f;
case 0x565460:c.instructions+=1;goto B565460;
case 0x565465:goto L565465;
case 0x56546b:c.instructions+=3;goto B56546b;
case 0x56546c:c.instructions+=2;goto B56546c;
case 0x56546d:c.instructions+=1;goto B56546d;
case 0x565472:goto L565472;
case 0x565475:c.instructions+=4;goto B565475;
case 0x565476:c.instructions+=3;goto B565476;
case 0x565477:c.instructions+=2;goto B565477;
case 0x565478:c.instructions+=1;goto B565478;
case 0x56547b:goto L56547b;
case 0x565480:c.instructions+=3;goto B565480;
case 0x565485:c.instructions+=2;goto B565485;
case 0x565486:c.instructions+=1;goto B565486;
case 0x56548b:goto L56548b;
case 0x56548e:c.instructions+=4;goto B56548e;
case 0x56548f:c.instructions+=3;goto B56548f;
case 0x565490:c.instructions+=2;goto B565490;
case 0x565491:c.instructions+=1;goto B565491;
case 0x565494:goto L565494;
case 0x56549a:c.instructions+=1;goto B56549a;
case 0x56549c:goto L56549c;
case 0x56549f:c.instructions+=3;goto B56549f;
case 0x5654a0:c.instructions+=2;goto B5654a0;
case 0x5654a7:c.instructions+=1;goto B5654a7;
case 0x5654ac:goto L5654ac;
case 0x5654ad:c.instructions+=1;goto B5654ad;
case 0x5654b2:goto L5654b2;
case 0x5654b5:c.instructions+=2;goto B5654b5;
case 0x5654b7:c.instructions+=1;goto B5654b7;
case 0x5654b9:goto L5654b9;
case 0x5654c0:goto L5654c0;
case 0x5654c1:c.instructions+=3;goto B5654c1;
case 0x5654c2:c.instructions+=2;goto B5654c2;
case 0x5654c3:c.instructions+=1;goto B5654c3;
case 0x5654d0:goto L5654d0;
case 0x5654d1:c.instructions+=6;goto B5654d1;
case 0x5654d3:c.instructions+=5;goto B5654d3;
case 0x5654d6:c.instructions+=4;goto B5654d6;
case 0x5654db:c.instructions+=3;goto B5654db;
case 0x5654dc:c.instructions+=2;goto B5654dc;
case 0x5654de:c.instructions+=1;goto B5654de;
case 0x5654e4:goto L5654e4;
case 0x5654ea:goto L5654ea;
case 0x5654ef:c.instructions+=1;goto B5654ef;
case 0x5654f5:goto L5654f5;
case 0x5654f7:goto L5654f7;
case 0x5654fc:c.instructions+=1;goto B5654fc;
case 0x5654fe:goto L5654fe;
case 0x565503:c.instructions+=1;goto B565503;
case 0x565509:goto L565509;
case 0x56550c:c.instructions+=2;goto B56550c;
case 0x56550e:c.instructions+=1;goto B56550e;
case 0x565511:goto L565511;
case 0x565514:c.instructions+=5;goto B565514;
case 0x565516:c.instructions+=4;goto B565516;
case 0x56551b:c.instructions+=3;goto B56551b;
case 0x565520:c.instructions+=2;goto B565520;
case 0x565521:c.instructions+=1;goto B565521;
case 0x565526:goto L565526;
case 0x56552c:c.instructions+=5;goto B56552c;
case 0x56552e:c.instructions+=4;goto B56552e;
case 0x565533:c.instructions+=3;goto B565533;
case 0x565538:c.instructions+=2;goto B565538;
case 0x565539:c.instructions+=1;goto B565539;
case 0x56553e:goto L56553e;
case 0x565543:c.instructions+=3;goto B565543;
case 0x565544:c.instructions+=2;goto B565544;
case 0x565549:c.instructions+=1;goto B565549;
case 0x56554e:goto L56554e;
case 0x565551:c.instructions+=3;goto B565551;
case 0x565552:c.instructions+=2;goto B565552;
case 0x565553:c.instructions+=1;goto B565553;
case 0x565556:goto L565556;
case 0x565558:c.instructions+=1;goto B565558;
case 0x56555a:goto L56555a;
case 0x56555c:goto L56555c;
case 0x56555f:c.instructions+=2;goto B56555f;
case 0x565561:c.instructions+=1;goto B565561;
case 0x565564:goto L565564;
case 0x565566:c.instructions+=1;goto B565566;
case 0x56556c:goto L56556c;
case 0x565571:c.instructions+=3;goto B565571;
case 0x565572:c.instructions+=2;goto B565572;
case 0x565577:c.instructions+=1;goto B565577;
case 0x56557c:goto L56557c;
case 0x56557f:c.instructions+=3;goto B56557f;
case 0x565580:c.instructions+=2;goto B565580;
case 0x565581:c.instructions+=1;goto B565581;
case 0x565584:goto L565584;
case 0x565589:c.instructions+=1;goto B565589;
case 0x56558b:goto L56558b;
case 0x565590:c.instructions+=1;goto B565590;
case 0x565596:goto L565596;
case 0x565599:c.instructions+=2;goto B565599;
case 0x56559b:c.instructions+=1;goto B56559b;
case 0x56559e:goto L56559e;
case 0x56559f:c.instructions+=2;goto B56559f;
case 0x5655a0:c.instructions+=1;goto B5655a0;
case 0x5655a3:goto L5655a3;
case 0x5655a6:c.instructions+=3;goto B5655a6;
case 0x5655a8:c.instructions+=2;goto B5655a8;
case 0x5655aa:c.instructions+=1;goto B5655aa;
case 0x5655ad:goto L5655ad;
case 0x5655ae:c.instructions+=2;goto B5655ae;
case 0x5655af:c.instructions+=1;goto B5655af;
case 0x5655b2:goto L5655b2;
case 0x5655b5:c.instructions+=3;goto B5655b5;
case 0x5655b7:c.instructions+=2;goto B5655b7;
case 0x5655b9:c.instructions+=1;goto B5655b9;
case 0x5655bc:goto L5655bc;
case 0x5655bd:c.instructions+=2;goto B5655bd;
case 0x5655be:c.instructions+=1;goto B5655be;
case 0x5655c1:goto L5655c1;
case 0x5655c6:c.instructions+=1;goto B5655c6;
case 0x5655cc:goto L5655cc;
case 0x5655d2:goto L5655d2;
case 0x5655d7:c.instructions+=1;goto B5655d7;
case 0x5655d9:goto L5655d9;
case 0x5655de:c.instructions+=1;goto B5655de;
case 0x5655e4:goto L5655e4;
case 0x5655e7:c.instructions+=2;goto B5655e7;
case 0x5655e9:c.instructions+=1;goto B5655e9;
case 0x5655ef:goto L5655ef;
case 0x5655f2:c.instructions+=3;goto B5655f2;
case 0x5655f3:c.instructions+=2;goto B5655f3;
case 0x5655f8:c.instructions+=1;goto B5655f8;
case 0x5655fd:goto L5655fd;
case 0x565602:c.instructions+=1;goto B565602;
case 0x565607:goto L565607;
case 0x56560c:c.instructions+=1;goto B56560c;
case 0x565611:goto L565611;
case 0x565614:c.instructions+=2;goto B565614;
case 0x565616:c.instructions+=1;goto B565616;
case 0x565619:goto L565619;
case 0x56561c:c.instructions+=2;goto B56561c;
case 0x56561e:c.instructions+=1;goto B56561e;
case 0x565621:goto L565621;
case 0x565622:c.instructions+=2;goto B565622;
case 0x565623:c.instructions+=1;goto B565623;
case 0x565626:goto L565626;
case 0x565629:c.instructions+=2;goto B565629;
case 0x56562f:c.instructions+=1;goto B56562f;
case 0x565635:goto L565635;
case 0x56563a:c.instructions+=2;goto B56563a;
case 0x56563c:c.instructions+=1;goto B56563c;
case 0x565642:goto L565642;
case 0x565647:c.instructions+=2;goto B565647;
case 0x56564b:c.instructions+=1;goto B56564b;
case 0x565650:goto L565650;
case 0x565655:c.instructions+=1;goto B565655;
case 0x56565a:goto L56565a;
case 0x56565d:c.instructions+=2;goto B56565d;
case 0x56565f:c.instructions+=1;goto B56565f;
case 0x565661:goto L565661;
case 0x565666:c.instructions+=1;goto B565666;
case 0x56566b:goto L56566b;
case 0x56566e:goto L56566e;
case 0x565674:c.instructions+=2;goto B565674;
case 0x565676:c.instructions+=1;goto B565676;
case 0x56567b:goto L56567b;
case 0x56567c:c.instructions+=2;goto B56567c;
case 0x56567d:c.instructions+=1;goto B56567d;
case 0x565680:goto L565680;
case 0x565685:c.instructions+=2;goto B565685;
case 0x565688:c.instructions+=1;goto B565688;
case 0x56568a:goto L56568a;
case 0x56568b:c.instructions+=1;goto B56568b;
case 0x56568d:goto L56568d;
case 0x56568e:c.instructions+=1;goto B56568e;
case 0x565690:goto L565690;
case 0x565692:c.instructions+=1;goto B565692;
case 0x565694:goto L565694;
case 0x565699:c.instructions+=1;goto B565699;
case 0x56569b:goto L56569b;
case 0x5656a0:c.instructions+=1;goto B5656a0;
case 0x5656a2:goto L5656a2;
case 0x5656a7:goto L5656a7;
case 0x5656aa:c.instructions+=4;goto B5656aa;
case 0x5656ab:c.instructions+=3;goto B5656ab;
case 0x5656b0:c.instructions+=2;goto B5656b0;
case 0x5656b1:c.instructions+=1;goto B5656b1;
case 0x5656b6:goto L5656b6;
case 0x5656b9:c.instructions+=3;goto B5656b9;
case 0x5656ba:c.instructions+=2;goto B5656ba;
case 0x5656bb:c.instructions+=1;goto B5656bb;
case 0x5656be:goto L5656be;
case 0x5656c3:c.instructions+=1;goto B5656c3;
case 0x5656c5:goto L5656c5;
case 0x5656ca:c.instructions+=1;goto B5656ca;
case 0x5656cc:goto L5656cc;
case 0x5656cf:c.instructions+=3;goto B5656cf;
case 0x5656d0:c.instructions+=2;goto B5656d0;
case 0x5656d4:c.instructions+=1;goto B5656d4;
case 0x5656d9:goto L5656d9;
case 0x5656da:c.instructions+=1;goto B5656da;
case 0x5656df:goto L5656df;
case 0x5656e2:c.instructions+=2;goto B5656e2;
case 0x5656e4:c.instructions+=1;goto B5656e4;
case 0x5656e6:goto L5656e6;
case 0x5656ed:c.instructions+=3;goto B5656ed;
case 0x5656ee:c.instructions+=2;goto B5656ee;
case 0x5656ef:c.instructions+=1;goto B5656ef;
case 0x5656f2:goto L5656f2;
case 0x5656f5:c.instructions+=2;goto B5656f5;
case 0x5656f7:c.instructions+=1;goto B5656f7;
case 0x5656f9:goto L5656f9;
case 0x5656ff:c.instructions+=2;goto B5656ff;
case 0x565701:c.instructions+=1;goto B565701;
case 0x565703:goto L565703;
case 0x565706:c.instructions+=2;goto B565706;
case 0x565707:c.instructions+=1;goto B565707;
case 0x56570c:goto L56570c;
case 0x565711:c.instructions+=2;goto B565711;
case 0x565713:c.instructions+=1;goto B565713;
case 0x565715:goto L565715;
case 0x56571a:c.instructions+=2;goto B56571a;
case 0x56571b:c.instructions+=1;goto B56571b;
case 0x565720:goto L565720;
case 0x565726:c.instructions+=3;goto B565726;
case 0x565727:c.instructions+=2;goto B565727;
case 0x565728:c.instructions+=1;goto B565728;
case 0x56572d:goto L56572d;
case 0x565730:c.instructions+=3;goto B565730;
case 0x565731:c.instructions+=2;goto B565731;
case 0x565732:c.instructions+=1;goto B565732;
case 0x565735:goto L565735;
case 0x56573b:c.instructions+=3;goto B56573b;
case 0x565740:c.instructions+=2;goto B565740;
case 0x565741:c.instructions+=1;goto B565741;
case 0x565746:goto L565746;
case 0x565749:goto L565749;
case 0x56574a:c.instructions+=2;goto B56574a;
case 0x56574b:c.instructions+=1;goto B56574b;
case 0x565750:goto L565750;
case 0x565751:c.instructions+=16;goto B565751;
case 0x565753:c.instructions+=15;goto B565753;
case 0x565756:c.instructions+=14;goto B565756;
case 0x565758:c.instructions+=13;goto B565758;
case 0x56575d:c.instructions+=12;goto B56575d;
case 0x565763:c.instructions+=11;goto B565763;
case 0x565764:c.instructions+=10;goto B565764;
case 0x56576b:c.instructions+=9;goto B56576b;
case 0x565771:c.instructions+=8;goto B565771;
case 0x565772:c.instructions+=7;goto B565772;
case 0x565773:c.instructions+=6;goto B565773;
case 0x565774:c.instructions+=5;goto B565774;
case 0x565777:c.instructions+=4;goto B565777;
case 0x565779:c.instructions+=3;goto B565779;
case 0x56577a:c.instructions+=2;goto B56577a;
case 0x56577e:c.instructions+=1;goto B56577e;
case 0x565783:goto L565783;
case 0x565785:c.instructions+=13;goto B565785;
case 0x56578b:c.instructions+=12;goto B56578b;
case 0x56578e:c.instructions+=11;goto B56578e;
case 0x565791:c.instructions+=10;goto B565791;
case 0x565794:c.instructions+=9;goto B565794;
case 0x565797:c.instructions+=8;goto B565797;
case 0x56579a:c.instructions+=7;goto B56579a;
case 0x56579d:c.instructions+=6;goto B56579d;
case 0x5657a0:c.instructions+=5;goto B5657a0;
case 0x5657a6:c.instructions+=4;goto B5657a6;
case 0x5657ab:c.instructions+=3;goto B5657ab;
case 0x5657ad:c.instructions+=2;goto B5657ad;
case 0x5657b4:c.instructions+=1;goto B5657b4;
case 0x5657b6:goto L5657b6;
case 0x5657b9:c.instructions+=1;goto B5657b9;
case 0x5657bb:goto L5657bb;
case 0x5657c1:c.instructions+=1;goto B5657c1;
case 0x5657c3:goto L5657c3;
case 0x5657c5:c.instructions+=4;goto B5657c5;
case 0x5657c6:c.instructions+=3;goto B5657c6;
case 0x5657c8:c.instructions+=2;goto B5657c8;
case 0x5657cb:c.instructions+=1;goto B5657cb;
case 0x5657d0:goto L5657d0;
case 0x5657d3:c.instructions+=3;goto B5657d3;
case 0x5657d8:c.instructions+=2;goto B5657d8;
case 0x5657d9:c.instructions+=1;goto B5657d9;
case 0x5657de:goto L5657de;
case 0x5657e1:goto L5657e1;
case 0x5657e6:goto L5657e6;
case 0x5657eb:c.instructions+=2;goto B5657eb;
case 0x5657ed:c.instructions+=1;goto B5657ed;
case 0x5657ef:goto L5657ef;
case 0x5657f4:c.instructions+=1;goto B5657f4;
case 0x5657f6:goto L5657f6;
case 0x5657f9:c.instructions+=1;goto B5657f9;
case 0x5657fb:goto L5657fb;
case 0x565800:c.instructions+=1;goto B565800;
case 0x565802:goto L565802;
case 0x565805:c.instructions+=1;goto B565805;
case 0x565807:goto L565807;
case 0x56580c:c.instructions+=1;goto B56580c;
case 0x56580e:goto L56580e;
case 0x565810:c.instructions+=5;goto B565810;
case 0x565813:c.instructions+=4;goto B565813;
case 0x565816:c.instructions+=3;goto B565816;
case 0x565817:c.instructions+=2;goto B565817;
case 0x56581a:c.instructions+=1;goto B56581a;
case 0x56581c:goto L56581c;
case 0x56581f:c.instructions+=2;goto B56581f;
case 0x565820:c.instructions+=1;goto B565820;
case 0x565825:goto L565825;
case 0x565828:c.instructions+=2;goto B565828;
case 0x56582a:c.instructions+=1;goto B56582a;
case 0x56582c:goto L56582c;
case 0x56582f:c.instructions+=3;goto B56582f;
case 0x565832:c.instructions+=2;goto B565832;
case 0x565835:c.instructions+=1;goto B565835;
case 0x565838:goto L565838;
case 0x565839:c.instructions+=1;goto B565839;
case 0x56583e:goto L56583e;
case 0x565841:c.instructions+=3;goto B565841;
case 0x565846:c.instructions+=2;goto B565846;
case 0x56584c:c.instructions+=1;goto B56584c;
case 0x565851:goto L565851;
case 0x565853:c.instructions+=7;goto B565853;
case 0x565856:c.instructions+=6;goto B565856;
case 0x565859:c.instructions+=5;goto B565859;
case 0x56585c:c.instructions+=4;goto B56585c;
case 0x56585f:c.instructions+=3;goto B56585f;
case 0x565866:c.instructions+=2;goto B565866;
case 0x56586c:c.instructions+=1;goto B56586c;
case 0x565871:goto L565871;
case 0x565872:c.instructions+=3;goto B565872;
case 0x565873:c.instructions+=2;goto B565873;
case 0x565878:c.instructions+=1;goto B565878;
case 0x56587d:goto L56587d;
case 0x565880:c.instructions+=3;goto B565880;
case 0x565885:c.instructions+=2;goto B565885;
case 0x565886:c.instructions+=1;goto B565886;
case 0x56588b:goto L56588b;
case 0x565890:c.instructions+=2;goto B565890;
case 0x565891:c.instructions+=1;goto B565891;
case 0x565896:goto L565896;
case 0x56589b:c.instructions+=2;goto B56589b;
case 0x56589c:c.instructions+=1;goto B56589c;
case 0x5658a1:goto L5658a1;
case 0x5658a4:c.instructions+=3;goto B5658a4;
case 0x5658a9:c.instructions+=2;goto B5658a9;
case 0x5658aa:c.instructions+=1;goto B5658aa;
case 0x5658af:goto L5658af;
case 0x5658b2:c.instructions+=4;goto B5658b2;
case 0x5658b7:c.instructions+=3;goto B5658b7;
case 0x5658bc:c.instructions+=2;goto B5658bc;
case 0x5658bd:c.instructions+=1;goto B5658bd;
case 0x5658c2:goto L5658c2;
case 0x5658c5:c.instructions+=3;goto B5658c5;
case 0x5658ca:c.instructions+=2;goto B5658ca;
case 0x5658cb:c.instructions+=1;goto B5658cb;
case 0x5658d0:goto L5658d0;
case 0x5658d3:c.instructions+=3;goto B5658d3;
case 0x5658d6:c.instructions+=2;goto B5658d6;
case 0x5658d8:c.instructions+=1;goto B5658d8;
case 0x5658da:goto L5658da;
case 0x5658db:c.instructions+=1;goto B5658db;
case 0x5658e0:goto L5658e0;
case 0x5658e3:c.instructions+=2;goto B5658e3;
case 0x5658e5:c.instructions+=1;goto B5658e5;
case 0x5658e7:goto L5658e7;
case 0x5658ec:c.instructions+=2;goto B5658ec;
case 0x5658ee:c.instructions+=1;goto B5658ee;
case 0x5658f3:goto L5658f3;
case 0x5658f5:c.instructions+=1;goto B5658f5;
case 0x5658f7:goto L5658f7;
case 0x5658fb:c.instructions+=1;goto B5658fb;
case 0x5658fd:goto L5658fd;
case 0x565902:c.instructions+=2;goto B565902;
case 0x565904:c.instructions+=1;goto B565904;
case 0x565906:goto L565906;
case 0x565909:c.instructions+=3;goto B565909;
case 0x56590a:c.instructions+=2;goto B56590a;
case 0x56590f:c.instructions+=1;goto B56590f;
case 0x565914:goto L565914;
case 0x565918:goto L565918;
case 0x56591a:c.instructions+=1;goto B56591a;
case 0x56591c:goto L56591c;
case 0x56591f:c.instructions+=2;goto B56591f;
case 0x565921:c.instructions+=1;goto B565921;
case 0x565923:goto L565923;
case 0x565928:c.instructions+=1;goto B565928;
case 0x56592d:goto L56592d;
case 0x565930:c.instructions+=3;goto B565930;
case 0x565933:c.instructions+=2;goto B565933;
case 0x565935:c.instructions+=1;goto B565935;
case 0x565937:goto L565937;
case 0x56593a:c.instructions+=2;goto B56593a;
case 0x56593c:c.instructions+=1;goto B56593c;
case 0x56593e:goto L56593e;
case 0x565940:goto L565940;
case 0x565942:c.instructions+=1;goto B565942;
case 0x565944:goto L565944;
case 0x565948:c.instructions+=2;goto B565948;
case 0x56594b:c.instructions+=1;goto B56594b;
case 0x56594d:goto L56594d;
case 0x565950:c.instructions+=1;goto B565950;
case 0x565955:goto L565955;
case 0x565959:c.instructions+=2;goto B565959;
case 0x56595c:c.instructions+=1;goto B56595c;
case 0x56595f:goto L56595f;
case 0x565962:goto L565962;
case 0x565965:c.instructions+=3;goto B565965;
case 0x565967:c.instructions+=2;goto B565967;
case 0x56596a:c.instructions+=1;goto B56596a;
case 0x56596c:goto L56596c;
case 0x56596d:c.instructions+=1;goto B56596d;
case 0x565972:goto L565972;
case 0x565975:c.instructions+=2;goto B565975;
case 0x565977:c.instructions+=1;goto B565977;
case 0x565979:goto L565979;
case 0x56597e:c.instructions+=2;goto B56597e;
case 0x565980:c.instructions+=1;goto B565980;
case 0x565985:goto L565985;
case 0x565987:c.instructions+=1;goto B565987;
case 0x565989:goto L565989;
case 0x56598e:c.instructions+=2;goto B56598e;
case 0x565990:c.instructions+=1;goto B565990;
case 0x565992:goto L565992;
case 0x565995:c.instructions+=3;goto B565995;
case 0x565996:c.instructions+=2;goto B565996;
case 0x56599b:c.instructions+=1;goto B56599b;
case 0x5659a0:goto L5659a0;
case 0x5659a2:goto L5659a2;
case 0x5659a4:goto L5659a4;
case 0x5659a8:c.instructions+=2;goto B5659a8;
case 0x5659ab:c.instructions+=1;goto B5659ab;
case 0x5659b0:goto L5659b0;
case 0x5659b1:c.instructions+=6;goto B5659b1;
case 0x5659b2:c.instructions+=5;goto B5659b2;
case 0x5659b3:c.instructions+=4;goto B5659b3;
case 0x5659b5:c.instructions+=3;goto B5659b5;
case 0x5659b9:c.instructions+=2;goto B5659b9;
case 0x5659c1:c.instructions+=1;goto B5659c1;
case 0x5659c6:goto L5659c6;
case 0x5659cd:c.instructions+=3;goto B5659cd;
case 0x5659d2:c.instructions+=2;goto B5659d2;
case 0x5659da:c.instructions+=1;goto B5659da;
case 0x5659dc:goto L5659dc;
case 0x5659e1:goto L5659e1;
case 0x5659e2:c.instructions+=2;goto B5659e2;
case 0x5659e7:c.instructions+=1;goto B5659e7;
case 0x5659ec:goto L5659ec;
case 0x5659ee:c.instructions+=2;goto B5659ee;
case 0x5659f0:c.instructions+=1;goto B5659f0;
case 0x5659f2:goto L5659f2;
case 0x5659f4:c.instructions+=2;goto B5659f4;
case 0x5659f6:c.instructions+=1;goto B5659f6;
case 0x5659f9:goto L5659f9;
case 0x5659fb:c.instructions+=6;goto B5659fb;
case 0x5659fc:c.instructions+=5;goto B5659fc;
case 0x565a00:c.instructions+=4;goto B565a00;
case 0x565a01:c.instructions+=3;goto B565a01;
case 0x565a02:c.instructions+=2;goto B565a02;
case 0x565a04:c.instructions+=1;goto B565a04;
case 0x565a07:goto L565a07;
case 0x565a08:c.instructions+=4;goto B565a08;
case 0x565a0c:c.instructions+=3;goto B565a0c;
case 0x565a0e:c.instructions+=2;goto B565a0e;
case 0x565a0f:c.instructions+=1;goto B565a0f;
case 0x565a14:goto L565a14;
case 0x565a17:c.instructions+=1;goto B565a17;
case 0x565a1c:goto L565a1c;
case 0x565a21:c.instructions+=2;goto B565a21;
case 0x565a26:c.instructions+=1;goto B565a26;
case 0x565a2b:goto L565a2b;
case 0x565a2d:c.instructions+=1;goto B565a2d;
case 0x565a2f:goto L565a2f;
case 0x565a32:c.instructions+=2;goto B565a32;
case 0x565a34:c.instructions+=1;goto B565a34;
case 0x565a36:goto L565a36;
case 0x565a39:c.instructions+=2;goto B565a39;
case 0x565a3b:c.instructions+=1;goto B565a3b;
case 0x565a3d:goto L565a3d;
case 0x565a3e:c.instructions+=5;goto B565a3e;
case 0x565a3f:c.instructions+=4;goto B565a3f;
case 0x565a40:c.instructions+=3;goto B565a40;
case 0x565a45:c.instructions+=2;goto B565a45;
case 0x565a47:c.instructions+=1;goto B565a47;
case 0x565a4c:goto L565a4c;
case 0x565a51:c.instructions+=1;goto B565a51;
case 0x565a56:goto L565a56;
case 0x565a59:c.instructions+=2;goto B565a59;
case 0x565a5b:c.instructions+=1;goto B565a5b;
case 0x565a5d:goto L565a5d;
case 0x565a63:c.instructions+=2;goto B565a63;
case 0x565a65:c.instructions+=1;goto B565a65;
case 0x565a67:goto L565a67;
case 0x565a68:c.instructions+=5;goto B565a68;
case 0x565a69:c.instructions+=4;goto B565a69;
case 0x565a6a:c.instructions+=3;goto B565a6a;
case 0x565a6f:c.instructions+=2;goto B565a6f;
case 0x565a70:c.instructions+=1;goto B565a70;
case 0x565a75:goto L565a75;
case 0x565a76:c.instructions+=4;goto B565a76;
case 0x565a78:c.instructions+=3;goto B565a78;
case 0x565a7b:c.instructions+=2;goto B565a7b;
case 0x565a7e:c.instructions+=1;goto B565a7e;
case 0x565a83:goto L565a83;
case 0x565a8a:c.instructions+=2;goto B565a8a;
case 0x565a91:c.instructions+=1;goto B565a91;
case 0x565a96:goto L565a96;
case 0x565a9d:c.instructions+=8;goto B565a9d;
case 0x565a9e:c.instructions+=7;goto B565a9e;
case 0x565aa0:c.instructions+=6;goto B565aa0;
case 0x565aa1:c.instructions+=5;goto B565aa1;
case 0x565aa8:c.instructions+=4;goto B565aa8;
case 0x565aa9:c.instructions+=3;goto B565aa9;
case 0x565aab:c.instructions+=2;goto B565aab;
case 0x565aac:c.instructions+=1;goto B565aac;
case 0x565ab0:goto L565ab0;
case 0x565ab2:c.instructions+=12;goto B565ab2;
case 0x565ab7:c.instructions+=11;goto B565ab7;
case 0x565abd:c.instructions+=10;goto B565abd;
case 0x565abe:c.instructions+=9;goto B565abe;
case 0x565ac5:c.instructions+=8;goto B565ac5;
case 0x565ac6:c.instructions+=7;goto B565ac6;
case 0x565ac7:c.instructions+=6;goto B565ac7;
case 0x565ac9:c.instructions+=5;goto B565ac9;
case 0x565acd:c.instructions+=4;goto B565acd;
case 0x565ad3:c.instructions+=3;goto B565ad3;
case 0x565ad8:c.instructions+=2;goto B565ad8;
case 0x565ae0:c.instructions+=1;goto B565ae0;
case 0x565ae5:goto L565ae5;
case 0x565ae8:c.instructions+=2;goto B565ae8;
case 0x565aea:c.instructions+=1;goto B565aea;
case 0x565aec:goto L565aec;
case 0x565af2:c.instructions+=2;goto B565af2;
case 0x565af4:c.instructions+=1;goto B565af4;
case 0x565af6:goto L565af6;
case 0x565afb:c.instructions+=1;goto B565afb;
case 0x565b00:goto L565b00;
case 0x565b05:c.instructions+=2;goto B565b05;
case 0x565b0a:c.instructions+=1;goto B565b0a;
case 0x565b0f:goto L565b0f;
case 0x565b11:c.instructions+=1;goto B565b11;
case 0x565b13:goto L565b13;
case 0x565b16:c.instructions+=2;goto B565b16;
case 0x565b18:c.instructions+=1;goto B565b18;
case 0x565b1a:goto L565b1a;
case 0x565b1d:c.instructions+=2;goto B565b1d;
case 0x565b1f:c.instructions+=1;goto B565b1f;
case 0x565b21:goto L565b21;
case 0x565b22:c.instructions+=4;goto B565b22;
case 0x565b24:c.instructions+=3;goto B565b24;
case 0x565b26:c.instructions+=2;goto B565b26;
case 0x565b2b:c.instructions+=1;goto B565b2b;
case 0x565b30:goto L565b30;
case 0x565b34:c.instructions+=6;goto B565b34;
case 0x565b3e:c.instructions+=5;goto B565b3e;
case 0x565b44:c.instructions+=4;goto B565b44;
case 0x565b45:c.instructions+=3;goto B565b45;
case 0x565b4c:c.instructions+=2;goto B565b4c;
case 0x565b4f:c.instructions+=1;goto B565b4f;
case 0x565b50:goto L565b50;
case 0x565b54:c.instructions+=5;goto B565b54;
case 0x565b59:c.instructions+=4;goto B565b59;
case 0x565b5a:c.instructions+=3;goto B565b5a;
case 0x565b5b:c.instructions+=2;goto B565b5b;
case 0x565b5d:c.instructions+=1;goto B565b5d;
case 0x565b63:goto L565b63;
case 0x565b69:goto L565b69;
case 0x565b6e:c.instructions+=1;goto B565b6e;
case 0x565b74:goto L565b74;
case 0x565b79:c.instructions+=1;goto B565b79;
case 0x565b7b:goto L565b7b;
case 0x565b80:c.instructions+=1;goto B565b80;
case 0x565b86:goto L565b86;
case 0x565b8b:c.instructions+=1;goto B565b8b;
case 0x565b90:goto L565b90;
case 0x565b93:c.instructions+=3;goto B565b93;
case 0x565b94:c.instructions+=2;goto B565b94;
case 0x565b99:c.instructions+=1;goto B565b99;
case 0x565b9e:goto L565b9e;
case 0x565b9f:c.instructions+=3;goto B565b9f;
case 0x565ba3:c.instructions+=2;goto B565ba3;
case 0x565ba4:c.instructions+=1;goto B565ba4;
case 0x565ba7:goto L565ba7;
case 0x565baa:c.instructions+=2;goto B565baa;
case 0x565bac:c.instructions+=1;goto B565bac;
case 0x565bb2:goto L565bb2;
case 0x565bb5:c.instructions+=6;goto B565bb5;
case 0x565bba:c.instructions+=5;goto B565bba;
case 0x565bbb:c.instructions+=4;goto B565bbb;
case 0x565bc0:c.instructions+=3;goto B565bc0;
case 0x565bc5:c.instructions+=2;goto B565bc5;
case 0x565bca:c.instructions+=1;goto B565bca;
case 0x565bcf:goto L565bcf;
case 0x565bd1:c.instructions+=1;goto B565bd1;
case 0x565bd7:goto L565bd7;
case 0x565bda:c.instructions+=5;goto B565bda;
case 0x565bde:c.instructions+=4;goto B565bde;
case 0x565be4:c.instructions+=3;goto B565be4;
case 0x565be5:c.instructions+=2;goto B565be5;
case 0x565bea:c.instructions+=1;goto B565bea;
case 0x565bef:goto L565bef;
case 0x565bf0:c.instructions+=2;goto B565bf0;
case 0x565bf1:c.instructions+=1;goto B565bf1;
case 0x565bf6:goto L565bf6;
case 0x565bf7:c.instructions+=2;goto B565bf7;
case 0x565bf9:c.instructions+=1;goto B565bf9;
case 0x565bfe:goto L565bfe;
case 0x565c01:c.instructions+=8;goto B565c01;
case 0x565c06:c.instructions+=7;goto B565c06;
case 0x565c0b:c.instructions+=6;goto B565c0b;
case 0x565c0d:c.instructions+=5;goto B565c0d;
case 0x565c0f:c.instructions+=4;goto B565c0f;
case 0x565c14:c.instructions+=3;goto B565c14;
case 0x565c15:c.instructions+=2;goto B565c15;
case 0x565c16:c.instructions+=1;goto B565c16;
case 0x565c1b:goto L565c1b;
case 0x565c1e:c.instructions+=3;goto B565c1e;
case 0x565c1f:c.instructions+=2;goto B565c1f;
case 0x565c20:c.instructions+=1;goto B565c20;
case 0x565c23:goto L565c23;
case 0x565c26:c.instructions+=2;goto B565c26;
case 0x565c28:c.instructions+=1;goto B565c28;
case 0x565c2a:goto L565c2a;
case 0x565c2d:c.instructions+=3;goto B565c2d;
case 0x565c2e:c.instructions+=2;goto B565c2e;
case 0x565c33:c.instructions+=1;goto B565c33;
case 0x565c38:goto L565c38;
case 0x565c3c:c.instructions+=1;goto B565c3c;
case 0x565c40:goto L565c40;
case 0x565c46:c.instructions+=2;goto B565c46;
case 0x565c48:c.instructions+=1;goto B565c48;
case 0x565c4e:goto L565c4e;
case 0x565c51:c.instructions+=4;goto B565c51;
case 0x565c53:c.instructions+=3;goto B565c53;
case 0x565c58:c.instructions+=2;goto B565c58;
case 0x565c59:c.instructions+=1;goto B565c59;
case 0x565c5e:goto L565c5e;
case 0x565c5f:c.instructions+=2;goto B565c5f;
case 0x565c60:c.instructions+=1;goto B565c60;
case 0x565c63:goto L565c63;
case 0x565c68:c.instructions+=1;goto B565c68;
case 0x565c6d:goto L565c6d;
case 0x565c70:c.instructions+=2;goto B565c70;
case 0x565c72:c.instructions+=1;goto B565c72;
case 0x565c74:goto L565c74;
case 0x565c7a:c.instructions+=2;goto B565c7a;
case 0x565c7c:c.instructions+=1;goto B565c7c;
case 0x565c82:goto L565c82;
case 0x565c87:c.instructions+=1;goto B565c87;
case 0x565c8c:goto L565c8c;
case 0x565c92:c.instructions+=2;goto B565c92;
case 0x565c94:c.instructions+=1;goto B565c94;
case 0x565c9a:goto L565c9a;
case 0x565c9d:c.instructions+=4;goto B565c9d;
case 0x565c9f:c.instructions+=3;goto B565c9f;
case 0x565ca4:c.instructions+=2;goto B565ca4;
case 0x565ca5:c.instructions+=1;goto B565ca5;
case 0x565caa:goto L565caa;
case 0x565cab:c.instructions+=2;goto B565cab;
case 0x565cac:c.instructions+=1;goto B565cac;
case 0x565caf:goto L565caf;
case 0x565cb4:c.instructions+=1;goto B565cb4;
case 0x565cb6:goto L565cb6;
case 0x565cbb:c.instructions+=1;goto B565cbb;
case 0x565cc1:goto L565cc1;
case 0x565cc4:c.instructions+=2;goto B565cc4;
case 0x565cc6:c.instructions+=1;goto B565cc6;
case 0x565ccc:goto L565ccc;
case 0x565ccf:c.instructions+=3;goto B565ccf;
case 0x565cd1:c.instructions+=2;goto B565cd1;
case 0x565cd4:c.instructions+=1;goto B565cd4;
case 0x565cda:goto L565cda;
case 0x565cdd:c.instructions+=3;goto B565cdd;
case 0x565cde:c.instructions+=2;goto B565cde;
case 0x565ce3:c.instructions+=1;goto B565ce3;
case 0x565ce8:goto L565ce8;
case 0x565ceb:c.instructions+=4;goto B565ceb;
case 0x565cec:c.instructions+=3;goto B565cec;
case 0x565cf1:c.instructions+=2;goto B565cf1;
case 0x565cf2:c.instructions+=1;goto B565cf2;
case 0x565cf7:goto L565cf7;
case 0x565cfc:c.instructions+=2;goto B565cfc;
case 0x565cfd:c.instructions+=1;goto B565cfd;
case 0x565d02:goto L565d02;
case 0x565d05:c.instructions+=3;goto B565d05;
case 0x565d06:c.instructions+=2;goto B565d06;
case 0x565d07:c.instructions+=1;goto B565d07;
case 0x565d0a:goto L565d0a;
case 0x565d0d:c.instructions+=3;goto B565d0d;
case 0x565d12:c.instructions+=2;goto B565d12;
case 0x565d13:c.instructions+=1;goto B565d13;
case 0x565d18:goto L565d18;
case 0x565d1e:c.instructions+=10;goto B565d1e;
case 0x565d21:c.instructions+=9;goto B565d21;
case 0x565d23:c.instructions+=8;goto B565d23;
case 0x565d29:c.instructions+=7;goto B565d29;
case 0x565d2a:c.instructions+=6;goto B565d2a;
case 0x565d2d:c.instructions+=5;goto B565d2d;
case 0x565d31:c.instructions+=4;goto B565d31;
case 0x565d37:c.instructions+=3;goto B565d37;
case 0x565d3d:c.instructions+=2;goto B565d3d;
case 0x565d40:c.instructions+=1;goto B565d40;
case 0x565d45:goto L565d45;
case 0x565d48:c.instructions+=4;goto B565d48;
case 0x565d4a:c.instructions+=3;goto B565d4a;
case 0x565d4c:c.instructions+=2;goto B565d4c;
case 0x565d4e:c.instructions+=1;goto B565d4e;
case 0x565d50:goto L565d50;
case 0x565d55:c.instructions+=1;goto B565d55;
case 0x565d57:goto L565d57;
case 0x565d5c:goto L565d5c;
case 0x565d61:goto L565d61;
case 0x565d62:c.instructions+=1;goto B565d62;
case 0x565d67:goto L565d67;
case 0x565d6a:c.instructions+=2;goto B565d6a;
case 0x565d6c:c.instructions+=1;goto B565d6c;
case 0x565d6e:goto L565d6e;
case 0x565d71:c.instructions+=3;goto B565d71;
case 0x565d72:c.instructions+=2;goto B565d72;
case 0x565d77:c.instructions+=1;goto B565d77;
case 0x565d7c:goto L565d7c;
case 0x565d7f:goto L565d7f;
case 0x565d80:c.instructions+=2;goto B565d80;
case 0x565d81:c.instructions+=1;goto B565d81;
case 0x565d90:goto L565d90;
case 0x565d91:c.instructions+=10;goto B565d91;
case 0x565d93:c.instructions+=9;goto B565d93;
case 0x565d96:c.instructions+=8;goto B565d96;
case 0x565d99:c.instructions+=7;goto B565d99;
case 0x565d9a:c.instructions+=6;goto B565d9a;
case 0x565d9b:c.instructions+=5;goto B565d9b;
case 0x565d9c:c.instructions+=4;goto B565d9c;
case 0x565d9e:c.instructions+=3;goto B565d9e;
case 0x565da4:c.instructions+=2;goto B565da4;
case 0x565da5:c.instructions+=1;goto B565da5;
case 0x565daa:goto L565daa;
case 0x565dad:c.instructions+=2;goto B565dad;
case 0x565daf:c.instructions+=1;goto B565daf;
case 0x565db1:goto L565db1;
case 0x565db8:c.instructions+=3;goto B565db8;
case 0x565dbb:c.instructions+=2;goto B565dbb;
case 0x565dc1:c.instructions+=1;goto B565dc1;
case 0x565dc3:goto L565dc3;
case 0x565dc9:c.instructions+=2;goto B565dc9;
case 0x565dca:c.instructions+=1;goto B565dca;
case 0x565dcf:goto L565dcf;
case 0x565dd1:c.instructions+=4;goto B565dd1;
case 0x565dd3:c.instructions+=3;goto B565dd3;
case 0x565dd6:c.instructions+=2;goto B565dd6;
case 0x565ddc:c.instructions+=1;goto B565ddc;
case 0x565dde:goto L565dde;
case 0x565de4:c.instructions+=2;goto B565de4;
case 0x565de5:c.instructions+=1;goto B565de5;
case 0x565dea:goto L565dea;
case 0x565ded:c.instructions+=2;goto B565ded;
case 0x565def:c.instructions+=1;goto B565def;
case 0x565df1:goto L565df1;
case 0x565df8:c.instructions+=3;goto B565df8;
case 0x565dfb:c.instructions+=2;goto B565dfb;
case 0x565e01:c.instructions+=1;goto B565e01;
case 0x565e03:goto L565e03;
case 0x565e09:c.instructions+=2;goto B565e09;
case 0x565e0a:c.instructions+=1;goto B565e0a;
case 0x565e0f:goto L565e0f;
case 0x565e11:c.instructions+=3;goto B565e11;
case 0x565e13:c.instructions+=2;goto B565e13;
case 0x565e16:c.instructions+=1;goto B565e16;
case 0x565e1b:goto L565e1b;
case 0x565e1d:c.instructions+=1;goto B565e1d;
case 0x565e22:goto L565e22;
case 0x565e28:c.instructions+=1;goto B565e28;
case 0x565e2d:goto L565e2d;
case 0x565e33:c.instructions+=2;goto B565e33;
case 0x565e35:c.instructions+=1;goto B565e35;
case 0x565e37:goto L565e37;
case 0x565e3a:c.instructions+=1;goto B565e3a;
case 0x565e3f:goto L565e3f;
case 0x565e44:goto L565e44;
case 0x565e47:c.instructions+=22;goto B565e47;
case 0x565e4a:c.instructions+=21;goto B565e4a;
case 0x565e4e:c.instructions+=20;goto B565e4e;
case 0x565e51:c.instructions+=19;goto B565e51;
case 0x565e52:c.instructions+=18;goto B565e52;
case 0x565e56:c.instructions+=17;goto B565e56;
case 0x565e5c:c.instructions+=16;goto B565e5c;
case 0x565e60:c.instructions+=15;goto B565e60;
case 0x565e61:c.instructions+=14;goto B565e61;
case 0x565e67:c.instructions+=13;goto B565e67;
case 0x565e6f:c.instructions+=12;goto B565e6f;
case 0x565e77:c.instructions+=11;goto B565e77;
case 0x565e7b:c.instructions+=10;goto B565e7b;
case 0x565e81:c.instructions+=9;goto B565e81;
case 0x565e85:c.instructions+=8;goto B565e85;
case 0x565e8b:c.instructions+=7;goto B565e8b;
case 0x565e8f:c.instructions+=6;goto B565e8f;
case 0x565e93:c.instructions+=5;goto B565e93;
case 0x565e99:c.instructions+=4;goto B565e99;
case 0x565e9a:c.instructions+=3;goto B565e9a;
case 0x565e9b:c.instructions+=2;goto B565e9b;
case 0x565e9f:c.instructions+=1;goto B565e9f;
case 0x565ea4:goto L565ea4;
case 0x565ea7:c.instructions+=2;goto B565ea7;
case 0x565ea9:c.instructions+=1;goto B565ea9;
case 0x565eab:goto L565eab;
case 0x565eb0:c.instructions+=2;goto B565eb0;
case 0x565eb2:c.instructions+=1;goto B565eb2;
case 0x565eb7:goto L565eb7;
case 0x565ebb:c.instructions+=9;goto B565ebb;
case 0x565ebf:c.instructions+=8;goto B565ebf;
case 0x565ec5:c.instructions+=7;goto B565ec5;
case 0x565ec6:c.instructions+=6;goto B565ec6;
case 0x565eca:c.instructions+=5;goto B565eca;
case 0x565ecb:c.instructions+=4;goto B565ecb;
case 0x565ecc:c.instructions+=3;goto B565ecc;
case 0x565ed0:c.instructions+=2;goto B565ed0;
case 0x565ed1:c.instructions+=1;goto B565ed1;
case 0x565ed6:goto L565ed6;
case 0x565ed9:c.instructions+=2;goto B565ed9;
case 0x565edb:c.instructions+=1;goto B565edb;
case 0x565edd:goto L565edd;
case 0x565ee2:c.instructions+=2;goto B565ee2;
case 0x565ee4:c.instructions+=1;goto B565ee4;
case 0x565ee9:goto L565ee9;
case 0x565eec:c.instructions+=2;goto B565eec;
case 0x565eee:c.instructions+=1;goto B565eee;
case 0x565ef4:goto L565ef4;
case 0x565ef7:c.instructions+=2;goto B565ef7;
case 0x565ef9:c.instructions+=1;goto B565ef9;
case 0x565eff:goto L565eff;
case 0x565f00:c.instructions+=19;goto B565f00;
case 0x565f03:c.instructions+=18;goto B565f03;
case 0x565f06:c.instructions+=17;goto B565f06;
case 0x565f09:c.instructions+=16;goto B565f09;
case 0x565f0c:c.instructions+=15;goto B565f0c;
case 0x565f10:c.instructions+=14;goto B565f10;
case 0x565f13:c.instructions+=13;goto B565f13;
case 0x565f17:c.instructions+=12;goto B565f17;
case 0x565f1c:c.instructions+=11;goto B565f1c;
case 0x565f20:c.instructions+=10;goto B565f20;
case 0x565f26:c.instructions+=9;goto B565f26;
case 0x565f28:c.instructions+=8;goto B565f28;
case 0x565f2f:c.instructions+=7;goto B565f2f;
case 0x565f33:c.instructions+=6;goto B565f33;
case 0x565f39:c.instructions+=5;goto B565f39;
case 0x565f3d:c.instructions+=4;goto B565f3d;
case 0x565f43:c.instructions+=3;goto B565f43;
case 0x565f49:c.instructions+=2;goto B565f49;
case 0x565f4d:c.instructions+=1;goto B565f4d;
case 0x565f4f:goto L565f4f;
case 0x565f56:goto L565f56;
case 0x565f58:c.instructions+=1;goto B565f58;
case 0x565f5a:goto L565f5a;
case 0x565f5e:c.instructions+=5;goto B565f5e;
case 0x565f5f:c.instructions+=4;goto B565f5f;
case 0x565f63:c.instructions+=3;goto B565f63;
case 0x565f64:c.instructions+=2;goto B565f64;
case 0x565f65:c.instructions+=1;goto B565f65;
case 0x565f6a:goto L565f6a;
case 0x565f6d:c.instructions+=2;goto B565f6d;
case 0x565f6f:c.instructions+=1;goto B565f6f;
case 0x565f71:goto L565f71;
case 0x565f76:c.instructions+=2;goto B565f76;
case 0x565f78:c.instructions+=1;goto B565f78;
case 0x565f7d:goto L565f7d;
case 0x565f7f:goto L565f7f;
case 0x565f82:c.instructions+=2;goto B565f82;
case 0x565f83:c.instructions+=1;goto B565f83;
case 0x565f88:goto L565f88;
case 0x565f8b:c.instructions+=2;goto B565f8b;
case 0x565f8d:c.instructions+=1;goto B565f8d;
case 0x565f8f:goto L565f8f;
case 0x565f94:c.instructions+=2;goto B565f94;
case 0x565f96:c.instructions+=1;goto B565f96;
case 0x565f9b:goto L565f9b;
case 0x565f9d:goto L565f9d;
case 0x565fa1:c.instructions+=4;goto B565fa1;
case 0x565fa2:c.instructions+=3;goto B565fa2;
case 0x565fa6:c.instructions+=2;goto B565fa6;
case 0x565fa7:c.instructions+=1;goto B565fa7;
case 0x565fac:goto L565fac;
case 0x565faf:c.instructions+=2;goto B565faf;
case 0x565fb1:c.instructions+=1;goto B565fb1;
case 0x565fb3:goto L565fb3;
case 0x565fb6:c.instructions+=3;goto B565fb6;
case 0x565fb7:c.instructions+=2;goto B565fb7;
case 0x565fbc:c.instructions+=1;goto B565fbc;
case 0x565fc1:goto L565fc1;
case 0x565fc3:c.instructions+=1;goto B565fc3;
case 0x565fc5:goto L565fc5;
case 0x565fc8:c.instructions+=2;goto B565fc8;
case 0x565fca:c.instructions+=1;goto B565fca;
case 0x565fcc:goto L565fcc;
case 0x565fcf:c.instructions+=2;goto B565fcf;
case 0x565fd1:c.instructions+=1;goto B565fd1;
case 0x565fd3:goto L565fd3;
case 0x565fd4:c.instructions+=5;goto B565fd4;
case 0x565fd6:c.instructions+=4;goto B565fd6;
case 0x565fd8:c.instructions+=3;goto B565fd8;
case 0x565fdd:c.instructions+=2;goto B565fdd;
case 0x565fdf:c.instructions+=1;goto B565fdf;
case 0x565fe4:goto L565fe4;
case 0x565fe7:c.instructions+=2;goto B565fe7;
case 0x565fe9:c.instructions+=1;goto B565fe9;
case 0x565feb:goto L565feb;
case 0x565fee:c.instructions+=1;goto B565fee;
case 0x565ff0:goto L565ff0;
case 0x565ff2:goto L565ff2;
case 0x565ff4:c.instructions+=1;goto B565ff4;
case 0x565ff6:goto L565ff6;
case 0x565ff9:c.instructions+=2;goto B565ff9;
case 0x565ffb:c.instructions+=1;goto B565ffb;
case 0x565ffd:goto L565ffd;
default:missing_instruction(c.pc);}
B565000:L565000:{c.instructions+=1;NFSU2_TR(0x565000);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x565005ull));
TAIL_STATIC(0x55b5c0u,55b);
}
B565005:L565005:{c.instructions+=4;NFSU2_TR(0x565005);
__builtin_memmove((R+4),gp(0x7fa214),4);
}
B56500b:{NFSU2_TR(0x56500b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56500c:{NFSU2_TR(0x56500c);
w4(R+4,u32(0x8637b0ull));
}
B565011:{NFSU2_TR(0x565011);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x565016ull));
TAIL_STATIC(0x51bb70u,51b);
}
B565016:L565016:{c.instructions+=2;NFSU2_TR(0x565016);
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
B565018:{NFSU2_TR(0x565018);
if(r1(R+518)){{goto L565039;}}
}
B56501a:L56501a:{c.instructions+=3;NFSU2_TR(0x56501a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B56501d:{NFSU2_TR(0x56501d);
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
B56501f:{NFSU2_TR(0x56501f);
if(r1(R+518)){{goto L565039;}}
}
B565021:L565021:{c.instructions+=3;NFSU2_TR(0x565021);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B565024:{NFSU2_TR(0x565024);
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
B565026:{NFSU2_TR(0x565026);
if(r1(R+518)){{goto L565039;}}
}
B565028:L565028:{c.instructions+=6;NFSU2_TR(0x565028);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B565029:{NFSU2_TR(0x565029);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56502b:{NFSU2_TR(0x56502b);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56502d:{NFSU2_TR(0x56502d);
u8 U[4];
w4(U+0,u32(0xe15f62f8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B565032:{NFSU2_TR(0x565032);
__builtin_memmove((R+4),(R+0),4);
}
B565034:{NFSU2_TR(0x565034);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x565039ull));
TAIL_STATIC(0x55b5c0u,55b);
}
B565039:L565039:{c.instructions+=4;NFSU2_TR(0x565039);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+8),(U+0),4);
}
B56503b:{NFSU2_TR(0x56503b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56503c:{NFSU2_TR(0x56503c);
__builtin_memmove((R+4),(R+12),4);
}
B56503e:{NFSU2_TR(0x56503e);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x565041ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B565041:L565041:{c.instructions+=3;NFSU2_TR(0x565041);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+0),(U+0),4);
}
B565043:{NFSU2_TR(0x565043);
__builtin_memmove((R+4),(R+12),4);
}
B565045:{NFSU2_TR(0x565045);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x565048ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B565048:L565048:{c.instructions+=5;NFSU2_TR(0x565048);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B565049:{NFSU2_TR(0x565049);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B56504a:{NFSU2_TR(0x56504a);
__builtin_memmove((R+16),(R+20),4);
}
B56504c:{NFSU2_TR(0x56504c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B56504d:{NFSU2_TR(0x56504d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B565050:L565050:{c.instructions+=12;NFSU2_TR(0x565050);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B565051:{NFSU2_TR(0x565051);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B565055:{NFSU2_TR(0x565055);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B565056:{NFSU2_TR(0x565056);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B56505a:{NFSU2_TR(0x56505a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56505b:{NFSU2_TR(0x56505b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56505c:{NFSU2_TR(0x56505c);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B565060:{NFSU2_TR(0x565060);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B565061:{NFSU2_TR(0x565061);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B565062:{NFSU2_TR(0x565062);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B565063:{NFSU2_TR(0x565063);
__builtin_memmove((R+24),(R+4),4);
}
B565065:{NFSU2_TR(0x565065);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56506aull));
TAIL_STATIC(0x52d9f0u,52d);
}
B56506a:L56506a:{c.instructions+=5;NFSU2_TR(0x56506a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B56506d:{NFSU2_TR(0x56506d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56506e:{NFSU2_TR(0x56506e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56506f:{NFSU2_TR(0x56506f);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B565070:{NFSU2_TR(0x565070);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x565075ull));
TAIL_STATIC(0x52d020u,52d);
}
B565075:L565075:{c.instructions+=3;NFSU2_TR(0x565075);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B565078:{NFSU2_TR(0x565078);
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
B56507a:{NFSU2_TR(0x56507a);
if(r1(R+518)){{goto L5650aa;}}
}
B56507c:L56507c:{c.instructions+=3;NFSU2_TR(0x56507c);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56507d:{NFSU2_TR(0x56507d);
w4(R+4,u32(0x8637b0ull));
}
B565082:{NFSU2_TR(0x565082);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x565087ull));
TAIL_STATIC(0x51bb70u,51b);
}
B565087:L565087:{c.instructions+=2;NFSU2_TR(0x565087);
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
B565089:{NFSU2_TR(0x565089);
if(r1(R+518)){{goto L5650aa;}}
}
B56508b:L56508b:{c.instructions+=3;NFSU2_TR(0x56508b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B56508e:{NFSU2_TR(0x56508e);
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
B565090:{NFSU2_TR(0x565090);
if(r1(R+518)){{goto L5650aa;}}
}
B565092:L565092:{c.instructions+=3;NFSU2_TR(0x565092);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B565095:{NFSU2_TR(0x565095);
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
B565097:{NFSU2_TR(0x565097);
if(r1(R+518)){{goto L5650aa;}}
}
B565099:L565099:{c.instructions+=6;NFSU2_TR(0x565099);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56509a:{NFSU2_TR(0x56509a);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56509c:{NFSU2_TR(0x56509c);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56509e:{NFSU2_TR(0x56509e);
u8 U[4];
w4(U+0,u32(0xc519bfc3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5650a3:{NFSU2_TR(0x5650a3);
__builtin_memmove((R+4),(R+0),4);
}
B5650a5:{NFSU2_TR(0x5650a5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5650aaull));
TAIL_STATIC(0x55b5c0u,55b);
}
B5650aa:L5650aa:{c.instructions+=5;NFSU2_TR(0x5650aa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5650ab:{NFSU2_TR(0x5650ab);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5650ac:{NFSU2_TR(0x5650ac);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5650ad:{NFSU2_TR(0x5650ad);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5650ae:{NFSU2_TR(0x5650ae);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5650c0:L5650c0:{c.instructions+=15;NFSU2_TR(0x5650c0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5650c1:{NFSU2_TR(0x5650c1);
__builtin_memmove((R+20),(R+16),4);
}
B5650c3:{NFSU2_TR(0x5650c3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5650c6:{NFSU2_TR(0x5650c6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5650c9:{NFSU2_TR(0x5650c9);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5650ca:{NFSU2_TR(0x5650ca);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5650cd:{NFSU2_TR(0x5650cd);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5650ce:{NFSU2_TR(0x5650ce);
__builtin_memmove((R+28),(R+4),4);
}
B5650d0:{NFSU2_TR(0x5650d0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5650d3:{NFSU2_TR(0x5650d3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5650d4:{NFSU2_TR(0x5650d4);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5650d5:{NFSU2_TR(0x5650d5);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5650d6:{NFSU2_TR(0x5650d6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5650d7:{NFSU2_TR(0x5650d7);
__builtin_memmove((R+4),(R+28),4);
}
B5650d9:{NFSU2_TR(0x5650d9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5650deull));
TAIL_STATIC(0x556020u,556);
}
B5650de:L5650de:{c.instructions+=2;NFSU2_TR(0x5650de);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+512,u8((r4(U+0))<(u32(0x9120409eull))));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x9120409eull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5650e4:{NFSU2_TR(0x5650e4);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L565150;}}
}
B5650e6:L5650e6:{c.instructions+=1;NFSU2_TR(0x5650e6);
if(r1(R+518)){{goto L56513d;}}
}
B5650e8:L5650e8:{c.instructions+=2;NFSU2_TR(0x5650e8);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x72619778ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5650ee:{NFSU2_TR(0x5650ee);
if(r1(R+518)){{goto L56512a;}}
}
B5650f0:L5650f0:{c.instructions+=2;NFSU2_TR(0x5650f0);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x911ab364ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5650f6:{NFSU2_TR(0x5650f6);
if(r1(R+518)){{goto L565117;}}
}
B5650f8:L5650f8:{c.instructions+=2;NFSU2_TR(0x5650f8);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x911c0a4bull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5650fe:{NFSU2_TR(0x5650fe);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5651f3;}}
}
B565104:L565104:{c.instructions+=3;NFSU2_TR(0x565104);
__builtin_memmove((R+4),gp(0x82b884),4);
}
B56510a:{NFSU2_TR(0x56510a);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56510c:{NFSU2_TR(0x56510c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x565111ull));
TAIL_STATIC(0x458520u,458);
}
B565111:L565111:{c.instructions+=4;NFSU2_TR(0x565111);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B565112:{NFSU2_TR(0x565112);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B565113:{NFSU2_TR(0x565113);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B565114:{NFSU2_TR(0x565114);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B565117:L565117:{c.instructions+=4;NFSU2_TR(0x565117);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B56511a:{NFSU2_TR(0x56511a);
u8 U[4];
w4(U+0,u32(0xaull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56511c:{NFSU2_TR(0x56511c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56511d:{NFSU2_TR(0x56511d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x565122ull));
TAIL_STATIC(0x51de60u,51d);
}
B565122:L565122:{c.instructions+=2;NFSU2_TR(0x565122);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B565125:{NFSU2_TR(0x565125);
{goto L5652d9;}
}
B56512a:L56512a:{c.instructions+=3;NFSU2_TR(0x56512a);
__builtin_memmove((R+4),gp(0x82b884),4);
}
B565130:{NFSU2_TR(0x565130);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B565132:{NFSU2_TR(0x565132);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x565137ull));
TAIL_STATIC(0x458520u,458);
}
B565137:L565137:{c.instructions+=4;NFSU2_TR(0x565137);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B565138:{NFSU2_TR(0x565138);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B565139:{NFSU2_TR(0x565139);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B56513a:{NFSU2_TR(0x56513a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B56513d:L56513d:{c.instructions+=3;NFSU2_TR(0x56513d);
__builtin_memmove((R+4),gp(0x82b884),4);
}
B565143:{NFSU2_TR(0x565143);
u8 U[4];
w4(U+0,u32(0x9ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B565145:{NFSU2_TR(0x565145);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56514aull));
TAIL_STATIC(0x458520u,458);
}
B56514a:L56514a:{c.instructions+=4;NFSU2_TR(0x56514a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B56514b:{NFSU2_TR(0x56514b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B56514c:{NFSU2_TR(0x56514c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B56514d:{NFSU2_TR(0x56514d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B565150:L565150:{c.instructions+=2;NFSU2_TR(0x565150);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xb5971bf1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B565156:{NFSU2_TR(0x565156);
if(r1(R+518)){{goto L5651e0;}}
}
B56515c:L56515c:{c.instructions+=2;NFSU2_TR(0x56515c);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xc519bfc0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B565162:{NFSU2_TR(0x565162);
if(r1(R+518)){{goto L565183;}}
}
B565164:L565164:{c.instructions+=2;NFSU2_TR(0x565164);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xc519bfc3ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B56516a:{NFSU2_TR(0x56516a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5651f3;}}
}
B565170:L565170:{c.instructions+=4;NFSU2_TR(0x565170);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B565173:{NFSU2_TR(0x565173);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B565175:{NFSU2_TR(0x565175);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B565176:{NFSU2_TR(0x565176);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56517bull));
TAIL_STATIC(0x51de60u,51d);
}
B56517b:L56517b:{c.instructions+=2;NFSU2_TR(0x56517b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B56517e:{NFSU2_TR(0x56517e);
{goto L5653dc;}
}
B565183:L565183:{c.instructions+=3;NFSU2_TR(0x565183);
__builtin_memmove((R+4),gp(0x82b884),4);
}
B565189:{NFSU2_TR(0x565189);
u8 U[4];
w4(U+0,u32(0xbull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56518b:{NFSU2_TR(0x56518b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x565190ull));
TAIL_STATIC(0x458520u,458);
}
B565190:L565190:{c.instructions+=3;NFSU2_TR(0x565190);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B565193:{NFSU2_TR(0x565193);
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
B565195:{NFSU2_TR(0x565195);
if(r1(R+518)){{goto L5654c0;}}
}
B56519b:L56519b:{c.instructions+=4;NFSU2_TR(0x56519b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B56519e:{NFSU2_TR(0x56519e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56519f:{NFSU2_TR(0x56519f);
w4(R+4,u32(0x839c40ull));
}
B5651a4:{NFSU2_TR(0x5651a4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5651a9ull));
TAIL_STATIC(0x50f9b0u,50f);
}
B5651a9:L5651a9:{c.instructions+=3;NFSU2_TR(0x5651a9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5651ac:{NFSU2_TR(0x5651ac);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x9ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x9ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5651af:{NFSU2_TR(0x5651af);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L5651ca;}}
}
B5651b1:L5651b1:{c.instructions+=2;NFSU2_TR(0x5651b1);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0xfull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xfull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5651b4:{NFSU2_TR(0x5651b4);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L5651ca;}}
}
B5651b6:L5651b6:{c.instructions+=2;NFSU2_TR(0x5651b6);
w4(R+4,u32(0x839c40ull));
}
B5651bb:{NFSU2_TR(0x5651bb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5651c0ull));
TAIL_STATIC(0x50fda0u,50f);
}
B5651c0:L5651c0:{c.instructions+=2;NFSU2_TR(0x5651c0);
w4(R+4,u32(0x839c40ull));
}
B5651c5:{NFSU2_TR(0x5651c5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5651caull));
TAIL_STATIC(0x50fdd0u,50f);
}
B5651ca:L5651ca:{c.instructions+=4;NFSU2_TR(0x5651ca);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5651cd:{NFSU2_TR(0x5651cd);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x4cull))));
}
B5651d0:{NFSU2_TR(0x5651d0);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5651d2:{NFSU2_TR(0x5651d2);
if(r1(R+518)){{goto L565400;}}
}
B5651d8:L5651d8:{c.instructions+=2;NFSU2_TR(0x5651d8);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+24),(U+0),4);
}
B5651db:{NFSU2_TR(0x5651db);
{goto L565402;}
}
B5651e0:L5651e0:{c.instructions+=3;NFSU2_TR(0x5651e0);
__builtin_memmove((R+4),gp(0x82b884),4);
}
B5651e6:{NFSU2_TR(0x5651e6);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5651e8:{NFSU2_TR(0x5651e8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5651edull));
TAIL_STATIC(0x458520u,458);
}
B5651ed:L5651ed:{c.instructions+=4;NFSU2_TR(0x5651ed);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5651ee:{NFSU2_TR(0x5651ee);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5651ef:{NFSU2_TR(0x5651ef);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5651f0:{NFSU2_TR(0x5651f0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5651f3:L5651f3:{c.instructions+=2;NFSU2_TR(0x5651f3);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+512,u8((r4(U+0))<(u32(0xb5af2461ull))));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xb5af2461ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5651f9:{NFSU2_TR(0x5651f9);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L5653b6;}}
}
B5651ff:L5651ff:{c.instructions+=1;NFSU2_TR(0x5651ff);
if(r1(R+518)){{goto L565348;}}
}
B565205:L565205:{c.instructions+=2;NFSU2_TR(0x565205);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+512,u8((r4(U+0))<(u32(0x5fe4bae4ull))));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x5fe4bae4ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B56520b:{NFSU2_TR(0x56520b);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L5652cd;}}
}
B565211:L565211:{c.instructions+=1;NFSU2_TR(0x565211);
if(r1(R+518)){{goto L565246;}}
}
B565213:L565213:{c.instructions+=2;NFSU2_TR(0x565213);
u8 U[14];
__builtin_memmove((U+6),(R+24),4);
w1(R+512,u8((r4(U+6))<(u32(0xc407210ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0xc407210ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0xc407210ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B565219:{NFSU2_TR(0x565219);
if(r1(R+518)){{goto L565234;}}
}
B56521b:L56521b:{c.instructions+=2;NFSU2_TR(0x56521b);
u8 U[14];
__builtin_memmove((U+6),(R+24),4);
w1(R+512,u8((r4(U+6))<(u32(0x35f8620bull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x35f8620bull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x35f8620bull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B565221:{NFSU2_TR(0x565221);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5654c0;}}
}
B565227:L565227:{c.instructions+=2;NFSU2_TR(0x565227);
__builtin_memmove((R+4),(R+28),4);
}
B565229:{NFSU2_TR(0x565229);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56522eull));
TAIL_STATIC(0x51ff40u,51f);
}
B56522e:L56522e:{c.instructions+=4;NFSU2_TR(0x56522e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B56522f:{NFSU2_TR(0x56522f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B565230:{NFSU2_TR(0x565230);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B565231:{NFSU2_TR(0x565231);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B565234:L565234:{c.instructions+=5;NFSU2_TR(0x565234);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B565237:{NFSU2_TR(0x565237);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B56523a:{NFSU2_TR(0x56523a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B56523c:{NFSU2_TR(0x56523c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56523d:{NFSU2_TR(0x56523d);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x565240ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B565240:L565240:{c.instructions+=4;NFSU2_TR(0x565240);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B565241:{NFSU2_TR(0x565241);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B565242:{NFSU2_TR(0x565242);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B565243:{NFSU2_TR(0x565243);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B565246:L565246:{c.instructions+=6;NFSU2_TR(0x565246);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B565249:{NFSU2_TR(0x565249);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B56524c:{NFSU2_TR(0x56524c);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x4cull))));
}
B56524f:{NFSU2_TR(0x56524f);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x9ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B565252:{NFSU2_TR(0x565252);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B565254:{NFSU2_TR(0x565254);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L56528e;}}
}
B565256:L565256:{c.instructions+=2;NFSU2_TR(0x565256);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B565258:{NFSU2_TR(0x565258);
if(r1(R+518)){{goto L56525f;}}
}
B56525a:L56525a:{c.instructions+=2;NFSU2_TR(0x56525a);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+24),(U+0),4);
}
B56525d:{NFSU2_TR(0x56525d);
{goto L565261;}
}
B56525f:L56525f:{c.instructions+=1;NFSU2_TR(0x56525f);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B565261:L565261:{c.instructions+=2;NFSU2_TR(0x565261);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B565263:{NFSU2_TR(0x565263);
if(r1(R+518)){{goto L56526a;}}
}
B565265:L565265:{c.instructions+=2;NFSU2_TR(0x565265);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+0),(U+0),4);
}
B565268:{NFSU2_TR(0x565268);
{goto L56526c;}
}
B56526a:L56526a:{c.instructions+=1;NFSU2_TR(0x56526a);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B56526c:L56526c:{c.instructions+=2;NFSU2_TR(0x56526c);
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
B56526e:{NFSU2_TR(0x56526e);
if(r1(R+518)){{goto L5654c0;}}
}
B565274:L565274:{c.instructions+=2;NFSU2_TR(0x565274);
__builtin_memmove((R+4),(R+24),4);
}
B565276:{NFSU2_TR(0x565276);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56527bull));
TAIL_STATIC(0x530d90u,530);
}
B56527b:L56527b:{c.instructions+=3;NFSU2_TR(0x56527b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B56527d:{NFSU2_TR(0x56527d);
__builtin_memmove((R+4),(R+24),4);
}
B56527f:{NFSU2_TR(0x56527f);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x565282ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B565282:L565282:{c.instructions+=3;NFSU2_TR(0x565282);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B565285:{NFSU2_TR(0x565285);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B565287:{NFSU2_TR(0x565287);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x56525fu);}goto L56525f;}}
}
B565289:L565289:{c.instructions+=2;NFSU2_TR(0x565289);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0xfffffffcull))));
}
B56528c:{NFSU2_TR(0x56528c);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x565261u);}goto L565261;}
}
B56528e:L56528e:{c.instructions+=2;NFSU2_TR(0x56528e);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B565290:{NFSU2_TR(0x565290);
if(r1(R+518)){{goto L565297;}}
}
B565292:L565292:{c.instructions+=2;NFSU2_TR(0x565292);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+24),(U+0),4);
}
B565295:{NFSU2_TR(0x565295);
{goto L5652a0;}
}
B565297:L565297:{c.instructions+=2;NFSU2_TR(0x565297);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B565299:{NFSU2_TR(0x565299);
__builtin_memmove((R+16),(R+16),4);
}
B5652a0:L5652a0:{c.instructions+=2;NFSU2_TR(0x5652a0);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5652a2:{NFSU2_TR(0x5652a2);
if(r1(R+518)){{goto L5652a9;}}
}
B5652a4:L5652a4:{c.instructions+=2;NFSU2_TR(0x5652a4);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+0),(U+0),4);
}
B5652a7:{NFSU2_TR(0x5652a7);
{goto L5652ab;}
}
B5652a9:L5652a9:{c.instructions+=1;NFSU2_TR(0x5652a9);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5652ab:L5652ab:{c.instructions+=2;NFSU2_TR(0x5652ab);
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
B5652ad:{NFSU2_TR(0x5652ad);
if(r1(R+518)){{goto L5654c0;}}
}
B5652b3:L5652b3:{c.instructions+=2;NFSU2_TR(0x5652b3);
__builtin_memmove((R+4),(R+24),4);
}
B5652b5:{NFSU2_TR(0x5652b5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5652baull));
TAIL_STATIC(0x530d90u,530);
}
B5652ba:L5652ba:{c.instructions+=3;NFSU2_TR(0x5652ba);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5652bc:{NFSU2_TR(0x5652bc);
__builtin_memmove((R+4),(R+24),4);
}
B5652be:{NFSU2_TR(0x5652be);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5652c1ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5652c1:L5652c1:{c.instructions+=3;NFSU2_TR(0x5652c1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5652c4:{NFSU2_TR(0x5652c4);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5652c6:{NFSU2_TR(0x5652c6);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x565297u);}goto L565297;}}
}
B5652c8:L5652c8:{c.instructions+=2;NFSU2_TR(0x5652c8);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0xfffffffcull))));
}
B5652cb:{NFSU2_TR(0x5652cb);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5652a0u);}goto L5652a0;}
}
B5652cd:L5652cd:{c.instructions+=2;NFSU2_TR(0x5652cd);
u8 U[14];
__builtin_memmove((U+6),(R+24),4);
w1(R+512,u8((r4(U+6))<(u32(0x911ab364ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x911ab364ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x911ab364ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5652d3:{NFSU2_TR(0x5652d3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5654c0;}}
}
B5652d9:L5652d9:{c.instructions+=3;NFSU2_TR(0x5652d9);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5652dc:{NFSU2_TR(0x5652dc);
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
B5652de:{NFSU2_TR(0x5652de);
if(r1(R+518)){{goto L5652e5;}}
}
B5652e0:L5652e0:{c.instructions+=2;NFSU2_TR(0x5652e0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5652e2:{NFSU2_TR(0x5652e2);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5652e5ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5652e5:L5652e5:{c.instructions+=3;NFSU2_TR(0x5652e5);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5652e8:{NFSU2_TR(0x5652e8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5652e9:{NFSU2_TR(0x5652e9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5652eeull));
TAIL_STATIC(0x505450u,505);
}
B5652ee:L5652ee:{c.instructions+=2;NFSU2_TR(0x5652ee);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5652ef:{NFSU2_TR(0x5652ef);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5652f4ull));
TAIL_STATIC(0x50b840u,50b);
}
B5652f4:L5652f4:{c.instructions+=3;NFSU2_TR(0x5652f4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B5652f7:{NFSU2_TR(0x5652f7);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5652f9:{NFSU2_TR(0x5652f9);
if(r1(R+518)){{goto L565302;}}
}
B5652fb:L5652fb:{c.instructions+=1;NFSU2_TR(0x5652fb);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B565302:L565302:{c.instructions+=6;NFSU2_TR(0x565302);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B565305:{NFSU2_TR(0x565305);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B565307:{NFSU2_TR(0x565307);
u8 U[4];
w4(U+0,u32(0xde6eff34ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56530c:{NFSU2_TR(0x56530c);
u8 U[4];
w4(U+0,u32(0x47ff4e7cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B565311:{NFSU2_TR(0x565311);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B565312:{NFSU2_TR(0x565312);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x565317ull));
TAIL_STATIC(0x537c60u,537);
}
B565317:L565317:{c.instructions+=6;NFSU2_TR(0x565317);
__builtin_memmove((R+8),gp(0x7fa214),4);
}
B56531d:{NFSU2_TR(0x56531d);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56531f:{NFSU2_TR(0x56531f);
u8 U[4];
w4(U+0,u32(0x78f970ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B565324:{NFSU2_TR(0x565324);
u8 U[4];
w4(U+0,u32(0x79c558ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B565329:{NFSU2_TR(0x565329);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56532a:{NFSU2_TR(0x56532a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56532full));
TAIL_STATIC(0x5426c0u,542);
}
B56532f:L56532f:{c.instructions+=4;NFSU2_TR(0x56532f);
__builtin_memmove((R+0),gp(0x7fa214),4);
}
B565334:{NFSU2_TR(0x565334);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B565335:{NFSU2_TR(0x565335);
u8 U[4];
w4(U+0,u32(0x731bf236ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56533a:{NFSU2_TR(0x56533a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56533full));
TAIL_STATIC(0x55dda0u,55d);
}
B56533f:L56533f:{c.instructions+=5;NFSU2_TR(0x56533f);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x28ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x28ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x28ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B565342:{NFSU2_TR(0x565342);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B565343:{NFSU2_TR(0x565343);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B565344:{NFSU2_TR(0x565344);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B565345:{NFSU2_TR(0x565345);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B565348:L565348:{c.instructions+=3;NFSU2_TR(0x565348);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x150ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B56534e:{NFSU2_TR(0x56534e);
u8 U[14];
__builtin_memmove((U+6),gp(0x8651ac),4);
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
B565354:{NFSU2_TR(0x565354);
if(r1(R+518)){{goto L5654c0;}}
}
B56535a:L56535a:{c.instructions+=3;NFSU2_TR(0x56535a);
__builtin_memmove((R+0),gp(0x83a7a4),1);
}
B56535f:{NFSU2_TR(0x56535f);
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
B565361:{NFSU2_TR(0x565361);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5654c0;}}
}
B565367:L565367:{c.instructions+=6;NFSU2_TR(0x565367);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14cull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B56536e:{NFSU2_TR(0x56536e);
__builtin_memmove((R+8),gp(0x83a64c),4);
}
B565374:{NFSU2_TR(0x565374);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x8900acull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B56537b:{NFSU2_TR(0x56537b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B56537e:{NFSU2_TR(0x56537e);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B565380:{NFSU2_TR(0x565380);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x565385ull));
TAIL_STATIC(0x5f6c20u,5f6);
}
B565385:L565385:{c.instructions+=2;NFSU2_TR(0x565385);
u8 U[4];
w4(U+0,u32(0x790000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56538a:{NFSU2_TR(0x56538a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56538full));
TAIL_STATIC(0x52cf60u,52c);
}
B56538f:L56538f:{c.instructions+=3;NFSU2_TR(0x56538f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B565392:{NFSU2_TR(0x565392);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B565394:{NFSU2_TR(0x565394);
if(r1(R+518)){{goto L5653a3;}}
}
B565396:L565396:{c.instructions+=2;NFSU2_TR(0x565396);
u8 U[4];
w4(U+0,u32(0x790000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56539b:{NFSU2_TR(0x56539b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5653a0ull));
TAIL_STATIC(0x5379a0u,537);
}
B5653a0:L5653a0:{c.instructions+=1;NFSU2_TR(0x5653a0);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5653a3:L5653a3:{c.instructions+=3;NFSU2_TR(0x5653a3);
__builtin_memmove((R+4),gp(0x8900d8),4);
}
B5653a9:{NFSU2_TR(0x5653a9);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5653ab:{NFSU2_TR(0x5653ab);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5653b0ull));
TAIL_STATIC(0x5f4240u,5f4);
}
B5653b0:L5653b0:{c.instructions+=4;NFSU2_TR(0x5653b0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5653b1:{NFSU2_TR(0x5653b1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5653b2:{NFSU2_TR(0x5653b2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5653b3:{NFSU2_TR(0x5653b3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5653b6:L5653b6:{c.instructions+=2;NFSU2_TR(0x5653b6);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+512,u8((r4(U+0))<(u32(0xc98356baull))));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xc98356baull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5653bc:{NFSU2_TR(0x5653bc);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L565494;}}
}
B5653c2:L5653c2:{c.instructions+=1;NFSU2_TR(0x5653c2);
if(r1(R+518)){{goto L56542f;}}
}
B5653c4:L5653c4:{c.instructions+=2;NFSU2_TR(0x5653c4);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xc519bfc0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5653ca:{NFSU2_TR(0x5653ca);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x565190u);}goto L565190;}}
}
B5653d0:L5653d0:{c.instructions+=2;NFSU2_TR(0x5653d0);
u8 U[14];
__builtin_memmove((U+6),(R+24),4);
w1(R+512,u8((r4(U+6))<(u32(0xc519bfc3ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0xc519bfc3ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0xc519bfc3ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5653d6:{NFSU2_TR(0x5653d6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5654c0;}}
}
B5653dc:L5653dc:{c.instructions+=4;NFSU2_TR(0x5653dc);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5653df:{NFSU2_TR(0x5653df);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5653e2:{NFSU2_TR(0x5653e2);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5653e3:{NFSU2_TR(0x5653e3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5653e8ull));
TAIL_STATIC(0x510120u,510);
}
B5653e8:L5653e8:{c.instructions+=5;NFSU2_TR(0x5653e8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5653e9:{NFSU2_TR(0x5653e9);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5653ec:{NFSU2_TR(0x5653ec);
u8 U[4];
w4(U+0,u32(0x783fe5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5653f1:{NFSU2_TR(0x5653f1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5653f2:{NFSU2_TR(0x5653f2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5653f7ull));
TAIL_STATIC(0x558430u,558);
}
B5653f7:L5653f7:{c.instructions+=5;NFSU2_TR(0x5653f7);
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
B5653fa:{NFSU2_TR(0x5653fa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5653fb:{NFSU2_TR(0x5653fb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5653fc:{NFSU2_TR(0x5653fc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5653fd:{NFSU2_TR(0x5653fd);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B565400:L565400:{c.instructions+=1;NFSU2_TR(0x565400);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B565402:L565402:{c.instructions+=2;NFSU2_TR(0x565402);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B565404:{NFSU2_TR(0x565404);
if(r1(R+518)){{goto L56540b;}}
}
B565406:L565406:{c.instructions+=2;NFSU2_TR(0x565406);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+0),(U+0),4);
}
B565409:{NFSU2_TR(0x565409);
{goto L56540d;}
}
B56540b:L56540b:{c.instructions+=1;NFSU2_TR(0x56540b);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B56540d:L56540d:{c.instructions+=2;NFSU2_TR(0x56540d);
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
B56540f:{NFSU2_TR(0x56540f);
if(r1(R+518)){{goto L5654c0;}}
}
B565415:L565415:{c.instructions+=2;NFSU2_TR(0x565415);
__builtin_memmove((R+4),(R+24),4);
}
B565417:{NFSU2_TR(0x565417);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56541cull));
TAIL_STATIC(0x530d90u,530);
}
B56541c:L56541c:{c.instructions+=3;NFSU2_TR(0x56541c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B56541e:{NFSU2_TR(0x56541e);
__builtin_memmove((R+4),(R+24),4);
}
B565420:{NFSU2_TR(0x565420);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x565423ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B565423:L565423:{c.instructions+=3;NFSU2_TR(0x565423);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B565426:{NFSU2_TR(0x565426);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B565428:{NFSU2_TR(0x565428);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x565400u);}goto L565400;}}
}
B56542a:L56542a:{c.instructions+=2;NFSU2_TR(0x56542a);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0xfffffffcull))));
}
B56542d:{NFSU2_TR(0x56542d);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x565402u);}goto L565402;}
}
B56542f:L56542f:{c.instructions+=3;NFSU2_TR(0x56542f);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B565435:{NFSU2_TR(0x565435);
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
B565437:{NFSU2_TR(0x565437);
if(r1(R+518)){{goto L5654c0;}}
}
B56543d:L56543d:{c.instructions+=3;NFSU2_TR(0x56543d);
__builtin_memmove((R+4),gp(0x8384c4),4);
}
B565443:{NFSU2_TR(0x565443);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B565445:{NFSU2_TR(0x565445);
if(r1(R+518)){{goto L565450;}}
}
B565447:L565447:{c.instructions+=3;NFSU2_TR(0x565447);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B56544a:{NFSU2_TR(0x56544a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56544b:{NFSU2_TR(0x56544b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x565450ull));
TAIL_STATIC(0x5376f0u,537);
}
B565450:L565450:{c.instructions+=3;NFSU2_TR(0x565450);
__builtin_memmove((R+0),gp(0x83a644),4);
}
B565455:{NFSU2_TR(0x565455);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B565457:{NFSU2_TR(0x565457);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L56547b;}}
}
B565459:L565459:{c.instructions+=3;NFSU2_TR(0x565459);
__builtin_memmove((R+4),gp(0x83a7a0),4);
}
B56545f:{NFSU2_TR(0x56545f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B565460:{NFSU2_TR(0x565460);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x565465ull));
TAIL_STATIC(0x50d2d0u,50d);
}
B565465:L565465:{c.instructions+=4;NFSU2_TR(0x565465);
__builtin_memmove((R+8),gp(0x7fa214),4);
}
B56546b:{NFSU2_TR(0x56546b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56546c:{NFSU2_TR(0x56546c);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56546d:{NFSU2_TR(0x56546d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x565472ull));
TAIL_STATIC(0x537950u,537);
}
B565472:L565472:{c.instructions+=5;NFSU2_TR(0x565472);
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
B565475:{NFSU2_TR(0x565475);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B565476:{NFSU2_TR(0x565476);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B565477:{NFSU2_TR(0x565477);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B565478:{NFSU2_TR(0x565478);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B56547b:L56547b:{c.instructions+=4;NFSU2_TR(0x56547b);
__builtin_memmove((R+0),gp(0x7fa214),4);
}
B565480:{NFSU2_TR(0x565480);
u8 U[4];
w4(U+0,u32(0xffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B565485:{NFSU2_TR(0x565485);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B565486:{NFSU2_TR(0x565486);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56548bull));
TAIL_STATIC(0x537950u,537);
}
B56548b:L56548b:{c.instructions+=5;NFSU2_TR(0x56548b);
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
B56548e:{NFSU2_TR(0x56548e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B56548f:{NFSU2_TR(0x56548f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B565490:{NFSU2_TR(0x565490);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B565491:{NFSU2_TR(0x565491);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B565494:L565494:{c.instructions+=2;NFSU2_TR(0x565494);
u8 U[14];
__builtin_memmove((U+6),(R+24),4);
w1(R+512,u8((r4(U+6))<(u32(0xe1fde1d1ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0xe1fde1d1ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0xe1fde1d1ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B56549a:{NFSU2_TR(0x56549a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5654c0;}}
}
B56549c:L56549c:{c.instructions+=4;NFSU2_TR(0x56549c);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B56549f:{NFSU2_TR(0x56549f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5654a0:{NFSU2_TR(0x5654a0);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14cull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5654a7:{NFSU2_TR(0x5654a7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5654acull));
TAIL_STATIC(0x505450u,505);
}
B5654ac:L5654ac:{c.instructions+=2;NFSU2_TR(0x5654ac);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5654ad:{NFSU2_TR(0x5654ad);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5654b2ull));
TAIL_STATIC(0x50b840u,50b);
}
B5654b2:L5654b2:{c.instructions+=3;NFSU2_TR(0x5654b2);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B5654b5:{NFSU2_TR(0x5654b5);
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
B5654b7:{NFSU2_TR(0x5654b7);
if(r1(R+518)){{goto L5654c0;}}
}
B5654b9:L5654b9:{c.instructions+=1;NFSU2_TR(0x5654b9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5654c0:L5654c0:{c.instructions+=4;NFSU2_TR(0x5654c0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5654c1:{NFSU2_TR(0x5654c1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5654c2:{NFSU2_TR(0x5654c2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5654c3:{NFSU2_TR(0x5654c3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5654d0:L5654d0:{c.instructions+=7;NFSU2_TR(0x5654d0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5654d1:{NFSU2_TR(0x5654d1);
__builtin_memmove((R+20),(R+16),4);
}
B5654d3:{NFSU2_TR(0x5654d3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5654d6:{NFSU2_TR(0x5654d6);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0xb5971bf1ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0xb5971bf1ull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0xb5971bf1ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5654db:{NFSU2_TR(0x5654db);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5654dc:{NFSU2_TR(0x5654dc);
__builtin_memmove((R+24),(R+4),4);
}
B5654de:{NFSU2_TR(0x5654de);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L5655c1;}}
}
B5654e4:L5654e4:{c.instructions+=1;NFSU2_TR(0x5654e4);
if(r1(R+518)){{goto L5655b2;}}
}
B5654ea:L5654ea:{c.instructions+=2;NFSU2_TR(0x5654ea);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0x911c0a4bull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x911c0a4bull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0x911c0a4bull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5654ef:{NFSU2_TR(0x5654ef);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L565584;}}
}
B5654f5:L5654f5:{c.instructions+=1;NFSU2_TR(0x5654f5);
if(r1(R+518)){{goto L56555a;}}
}
B5654f7:L5654f7:{c.instructions+=2;NFSU2_TR(0x5654f7);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0x72619778ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x72619778ull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0x72619778ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5654fc:{NFSU2_TR(0x5654fc);
if(r1(R+518)){{goto L565556;}}
}
B5654fe:L5654fe:{c.instructions+=2;NFSU2_TR(0x5654fe);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0x911ab364ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x911ab364ull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0x911ab364ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B565503:{NFSU2_TR(0x565503);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L565749;}}
}
B565509:L565509:{c.instructions+=3;NFSU2_TR(0x565509);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B56550c:{NFSU2_TR(0x56550c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B56550e:{NFSU2_TR(0x56550e);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x565511ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B565511:L565511:{c.instructions+=6;NFSU2_TR(0x565511);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B565514:{NFSU2_TR(0x565514);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B565516:{NFSU2_TR(0x565516);
u8 U[4];
w4(U+0,u32(0xde6eff34ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56551b:{NFSU2_TR(0x56551b);
u8 U[4];
w4(U+0,u32(0x47ff4e7cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B565520:{NFSU2_TR(0x565520);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B565521:{NFSU2_TR(0x565521);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x565526ull));
TAIL_STATIC(0x537c60u,537);
}
B565526:L565526:{c.instructions+=6;NFSU2_TR(0x565526);
__builtin_memmove((R+8),gp(0x7fa214),4);
}
B56552c:{NFSU2_TR(0x56552c);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56552e:{NFSU2_TR(0x56552e);
u8 U[4];
w4(U+0,u32(0x78f970ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B565533:{NFSU2_TR(0x565533);
u8 U[4];
w4(U+0,u32(0x79c558ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B565538:{NFSU2_TR(0x565538);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B565539:{NFSU2_TR(0x565539);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56553eull));
TAIL_STATIC(0x5426c0u,542);
}
B56553e:L56553e:{c.instructions+=4;NFSU2_TR(0x56553e);
__builtin_memmove((R+0),gp(0x7fa214),4);
}
B565543:{NFSU2_TR(0x565543);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B565544:{NFSU2_TR(0x565544);
u8 U[4];
w4(U+0,u32(0x731bf236ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B565549:{NFSU2_TR(0x565549);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56554eull));
TAIL_STATIC(0x55dda0u,55d);
}
B56554e:L56554e:{c.instructions+=4;NFSU2_TR(0x56554e);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x28ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x28ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x28ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B565551:{NFSU2_TR(0x565551);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B565552:{NFSU2_TR(0x565552);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B565553:{NFSU2_TR(0x565553);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B565556:L565556:{c.instructions+=2;NFSU2_TR(0x565556);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B565558:{NFSU2_TR(0x565558);
{goto L56555c;}
}
B56555a:L56555a:{c.instructions+=1;NFSU2_TR(0x56555a);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56555c:L56555c:{c.instructions+=3;NFSU2_TR(0x56555c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B56555f:{NFSU2_TR(0x56555f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B565561:{NFSU2_TR(0x565561);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x565564ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B565564:L565564:{c.instructions+=2;NFSU2_TR(0x565564);
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
B565566:{NFSU2_TR(0x565566);
if(r1(R+518)){{goto L565749;}}
}
B56556c:L56556c:{c.instructions+=4;NFSU2_TR(0x56556c);
__builtin_memmove((R+0),gp(0x7fa214),4);
}
B565571:{NFSU2_TR(0x565571);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B565572:{NFSU2_TR(0x565572);
u8 U[4];
w4(U+0,u32(0xe15f62f8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B565577:{NFSU2_TR(0x565577);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56557cull));
TAIL_STATIC(0x55dda0u,55d);
}
B56557c:L56557c:{c.instructions+=4;NFSU2_TR(0x56557c);
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
B56557f:{NFSU2_TR(0x56557f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B565580:{NFSU2_TR(0x565580);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B565581:{NFSU2_TR(0x565581);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B565584:L565584:{c.instructions+=2;NFSU2_TR(0x565584);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0x9120409eull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x9120409eull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0x9120409eull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B565589:{NFSU2_TR(0x565589);
if(r1(R+518)){{goto L5655a3;}}
}
B56558b:L56558b:{c.instructions+=2;NFSU2_TR(0x56558b);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0x9803f6e2ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x9803f6e2ull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0x9803f6e2ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B565590:{NFSU2_TR(0x565590);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L565749;}}
}
B565596:L565596:{c.instructions+=3;NFSU2_TR(0x565596);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B565599:{NFSU2_TR(0x565599);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B56559b:{NFSU2_TR(0x56559b);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56559eull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B56559e:L56559e:{c.instructions+=3;NFSU2_TR(0x56559e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B56559f:{NFSU2_TR(0x56559f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5655a0:{NFSU2_TR(0x5655a0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5655a3:L5655a3:{c.instructions+=4;NFSU2_TR(0x5655a3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5655a6:{NFSU2_TR(0x5655a6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5655a8:{NFSU2_TR(0x5655a8);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5655aa:{NFSU2_TR(0x5655aa);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5655adull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5655ad:L5655ad:{c.instructions+=3;NFSU2_TR(0x5655ad);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5655ae:{NFSU2_TR(0x5655ae);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5655af:{NFSU2_TR(0x5655af);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5655b2:L5655b2:{c.instructions+=4;NFSU2_TR(0x5655b2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5655b5:{NFSU2_TR(0x5655b5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5655b7:{NFSU2_TR(0x5655b7);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5655b9:{NFSU2_TR(0x5655b9);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5655bcull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5655bc:L5655bc:{c.instructions+=3;NFSU2_TR(0x5655bc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5655bd:{NFSU2_TR(0x5655bd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5655be:{NFSU2_TR(0x5655be);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5655c1:L5655c1:{c.instructions+=2;NFSU2_TR(0x5655c1);
u8 U[4];
w1(R+512,u8((r4(R+0))<(u32(0xc519bfc3ull))));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xc519bfc3ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5655c6:{NFSU2_TR(0x5655c6);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L5656be;}}
}
B5655cc:L5655cc:{c.instructions+=1;NFSU2_TR(0x5655cc);
if(r1(R+518)){{goto L565680;}}
}
B5655d2:L5655d2:{c.instructions+=2;NFSU2_TR(0x5655d2);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xb5af2461ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5655d7:{NFSU2_TR(0x5655d7);
if(r1(R+518)){{goto L565626;}}
}
B5655d9:L5655d9:{c.instructions+=2;NFSU2_TR(0x5655d9);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0xc519bfc0ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0xc519bfc0ull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0xc519bfc0ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5655de:{NFSU2_TR(0x5655de);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L565749;}}
}
B5655e4:L5655e4:{c.instructions+=3;NFSU2_TR(0x5655e4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5655e7:{NFSU2_TR(0x5655e7);
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
B5655e9:{NFSU2_TR(0x5655e9);
if(r1(R+518)){{goto L565749;}}
}
B5655ef:L5655ef:{c.instructions+=4;NFSU2_TR(0x5655ef);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5655f2:{NFSU2_TR(0x5655f2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5655f3:{NFSU2_TR(0x5655f3);
w4(R+4,u32(0x839c40ull));
}
B5655f8:{NFSU2_TR(0x5655f8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5655fdull));
TAIL_STATIC(0x50f9b0u,50f);
}
B5655fd:L5655fd:{c.instructions+=2;NFSU2_TR(0x5655fd);
w4(R+4,u32(0x839c40ull));
}
B565602:{NFSU2_TR(0x565602);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x565607ull));
TAIL_STATIC(0x50fda0u,50f);
}
B565607:L565607:{c.instructions+=2;NFSU2_TR(0x565607);
w4(R+4,u32(0x839c40ull));
}
B56560c:{NFSU2_TR(0x56560c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x565611ull));
TAIL_STATIC(0x50fdd0u,50f);
}
B565611:L565611:{c.instructions+=3;NFSU2_TR(0x565611);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B565614:{NFSU2_TR(0x565614);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B565616:{NFSU2_TR(0x565616);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x565619ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B565619:L565619:{c.instructions+=3;NFSU2_TR(0x565619);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B56561c:{NFSU2_TR(0x56561c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B56561e:{NFSU2_TR(0x56561e);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x565621ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B565621:L565621:{c.instructions+=3;NFSU2_TR(0x565621);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B565622:{NFSU2_TR(0x565622);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B565623:{NFSU2_TR(0x565623);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B565626:L565626:{c.instructions+=3;NFSU2_TR(0x565626);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B565629:{NFSU2_TR(0x565629);
u8 U[14];
__builtin_memmove((U+6),gp(0x8651ac),4);
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
B56562f:{NFSU2_TR(0x56562f);
if(r1(R+518)){{goto L565749;}}
}
B565635:L565635:{c.instructions+=3;NFSU2_TR(0x565635);
__builtin_memmove((R+0),gp(0x83a7a4),1);
}
B56563a:{NFSU2_TR(0x56563a);
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
B56563c:{NFSU2_TR(0x56563c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L565749;}}
}
B565642:L565642:{c.instructions+=3;NFSU2_TR(0x565642);
w4(R+4,u32(0x839c40ull));
}
B565647:{NFSU2_TR(0x565647);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4dull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B56564b:{NFSU2_TR(0x56564b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x565650ull));
TAIL_STATIC(0x50fdd0u,50f);
}
B565650:L565650:{c.instructions+=2;NFSU2_TR(0x565650);
u8 U[4];
w4(U+0,u32(0x790000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B565655:{NFSU2_TR(0x565655);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56565aull));
TAIL_STATIC(0x52cf60u,52c);
}
B56565a:L56565a:{c.instructions+=3;NFSU2_TR(0x56565a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B56565d:{NFSU2_TR(0x56565d);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B56565f:{NFSU2_TR(0x56565f);
if(r1(R+518)){{goto L56566e;}}
}
B565661:L565661:{c.instructions+=2;NFSU2_TR(0x565661);
u8 U[4];
w4(U+0,u32(0x790000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B565666:{NFSU2_TR(0x565666);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56566bull));
TAIL_STATIC(0x5379a0u,537);
}
B56566b:L56566b:{c.instructions+=1;NFSU2_TR(0x56566b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B56566e:L56566e:{c.instructions+=3;NFSU2_TR(0x56566e);
__builtin_memmove((R+4),gp(0x8900d8),4);
}
B565674:{NFSU2_TR(0x565674);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B565676:{NFSU2_TR(0x565676);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56567bull));
TAIL_STATIC(0x5f4240u,5f4);
}
B56567b:L56567b:{c.instructions+=3;NFSU2_TR(0x56567b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B56567c:{NFSU2_TR(0x56567c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B56567d:{NFSU2_TR(0x56567d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B565680:L565680:{c.instructions+=3;NFSU2_TR(0x565680);
__builtin_memmove((R+0),gp(0x83a648),4);
}
B565685:{NFSU2_TR(0x565685);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x4ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B565688:{NFSU2_TR(0x565688);
if(r1(R+518)){{goto L5656a2;}}
}
B56568a:L56568a:{c.instructions+=2;NFSU2_TR(0x56568a);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B56568b:{NFSU2_TR(0x56568b);
if(r1(R+518)){{goto L56569b;}}
}
B56568d:L56568d:{c.instructions+=2;NFSU2_TR(0x56568d);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B56568e:{NFSU2_TR(0x56568e);
if(r1(R+518)){{goto L565694;}}
}
B565690:L565690:{c.instructions+=2;NFSU2_TR(0x565690);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B565692:{NFSU2_TR(0x565692);
{goto L5656a7;}
}
B565694:L565694:{c.instructions+=2;NFSU2_TR(0x565694);
w4(R+0,u32(0x46b41bb8ull));
}
B565699:{NFSU2_TR(0x565699);
{goto L5656a7;}
}
B56569b:L56569b:{c.instructions+=2;NFSU2_TR(0x56569b);
w4(R+0,u32(0xcd085170ull));
}
B5656a0:{NFSU2_TR(0x5656a0);
{goto L5656a7;}
}
B5656a2:L5656a2:{c.instructions+=1;NFSU2_TR(0x5656a2);
w4(R+0,u32(0xdacf52c1ull));
}
B5656a7:L5656a7:{c.instructions+=5;NFSU2_TR(0x5656a7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5656aa:{NFSU2_TR(0x5656aa);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5656ab:{NFSU2_TR(0x5656ab);
u8 U[4];
w4(U+0,u32(0x783fe5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5656b0:{NFSU2_TR(0x5656b0);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5656b1:{NFSU2_TR(0x5656b1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5656b6ull));
TAIL_STATIC(0x558430u,558);
}
B5656b6:L5656b6:{c.instructions+=4;NFSU2_TR(0x5656b6);
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
B5656b9:{NFSU2_TR(0x5656b9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5656ba:{NFSU2_TR(0x5656ba);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5656bb:{NFSU2_TR(0x5656bb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5656be:L5656be:{c.instructions+=2;NFSU2_TR(0x5656be);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xc98356baull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5656c3:{NFSU2_TR(0x5656c3);
if(r1(R+518)){{goto L5656f2;}}
}
B5656c5:L5656c5:{c.instructions+=2;NFSU2_TR(0x5656c5);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0xe1fde1d1ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0xe1fde1d1ull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0xe1fde1d1ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5656ca:{NFSU2_TR(0x5656ca);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L565749;}}
}
B5656cc:L5656cc:{c.instructions+=4;NFSU2_TR(0x5656cc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5656cf:{NFSU2_TR(0x5656cf);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5656d0:{NFSU2_TR(0x5656d0);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4dull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5656d4:{NFSU2_TR(0x5656d4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5656d9ull));
TAIL_STATIC(0x505450u,505);
}
B5656d9:L5656d9:{c.instructions+=2;NFSU2_TR(0x5656d9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5656da:{NFSU2_TR(0x5656da);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5656dfull));
TAIL_STATIC(0x50b840u,50b);
}
B5656df:L5656df:{c.instructions+=3;NFSU2_TR(0x5656df);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B5656e2:{NFSU2_TR(0x5656e2);
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
B5656e4:{NFSU2_TR(0x5656e4);
if(r1(R+518)){{goto L565749;}}
}
B5656e6:L5656e6:{c.instructions+=4;NFSU2_TR(0x5656e6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5656ed:{NFSU2_TR(0x5656ed);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5656ee:{NFSU2_TR(0x5656ee);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5656ef:{NFSU2_TR(0x5656ef);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5656f2:L5656f2:{c.instructions+=3;NFSU2_TR(0x5656f2);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4dull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5656f5:{NFSU2_TR(0x5656f5);
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
B5656f7:{NFSU2_TR(0x5656f7);
if(r1(R+518)){{goto L565749;}}
}
B5656f9:L5656f9:{c.instructions+=3;NFSU2_TR(0x5656f9);
__builtin_memmove((R+4),gp(0x8384c4),4);
}
B5656ff:{NFSU2_TR(0x5656ff);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B565701:{NFSU2_TR(0x565701);
if(r1(R+518)){{goto L56570c;}}
}
B565703:L565703:{c.instructions+=3;NFSU2_TR(0x565703);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B565706:{NFSU2_TR(0x565706);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B565707:{NFSU2_TR(0x565707);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56570cull));
TAIL_STATIC(0x5376f0u,537);
}
B56570c:L56570c:{c.instructions+=3;NFSU2_TR(0x56570c);
__builtin_memmove((R+0),gp(0x83a644),4);
}
B565711:{NFSU2_TR(0x565711);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B565713:{NFSU2_TR(0x565713);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L565735;}}
}
B565715:L565715:{c.instructions+=3;NFSU2_TR(0x565715);
__builtin_memmove((R+0),gp(0x83a7a0),4);
}
B56571a:{NFSU2_TR(0x56571a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56571b:{NFSU2_TR(0x56571b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x565720ull));
TAIL_STATIC(0x50d2d0u,50d);
}
B565720:L565720:{c.instructions+=4;NFSU2_TR(0x565720);
__builtin_memmove((R+4),gp(0x7fa214),4);
}
B565726:{NFSU2_TR(0x565726);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B565727:{NFSU2_TR(0x565727);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B565728:{NFSU2_TR(0x565728);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56572dull));
TAIL_STATIC(0x537950u,537);
}
B56572d:L56572d:{c.instructions+=4;NFSU2_TR(0x56572d);
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
B565730:{NFSU2_TR(0x565730);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B565731:{NFSU2_TR(0x565731);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B565732:{NFSU2_TR(0x565732);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B565735:L565735:{c.instructions+=4;NFSU2_TR(0x565735);
__builtin_memmove((R+8),gp(0x7fa214),4);
}
B56573b:{NFSU2_TR(0x56573b);
u8 U[4];
w4(U+0,u32(0xffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B565740:{NFSU2_TR(0x565740);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B565741:{NFSU2_TR(0x565741);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x565746ull));
TAIL_STATIC(0x537950u,537);
}
B565746:L565746:{c.instructions+=1;NFSU2_TR(0x565746);
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
B565749:L565749:{c.instructions+=3;NFSU2_TR(0x565749);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B56574a:{NFSU2_TR(0x56574a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B56574b:{NFSU2_TR(0x56574b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B565750:L565750:{c.instructions+=17;NFSU2_TR(0x565750);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B565751:{NFSU2_TR(0x565751);
__builtin_memmove((R+20),(R+16),4);
}
B565753:{NFSU2_TR(0x565753);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B565756:{NFSU2_TR(0x565756);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B565758:{NFSU2_TR(0x565758);
u8 U[4];
w4(U+0,u32(0x778531ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56575d:{NFSU2_TR(0x56575d);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B565763:{NFSU2_TR(0x565763);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B565764:{NFSU2_TR(0x565764);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B56576b:{NFSU2_TR(0x56576b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x908ull))));
}
B565771:{NFSU2_TR(0x565771);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B565772:{NFSU2_TR(0x565772);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B565773:{NFSU2_TR(0x565773);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B565774:{NFSU2_TR(0x565774);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B565777:{NFSU2_TR(0x565777);
__builtin_memmove((R+24),(R+4),4);
}
B565779:{NFSU2_TR(0x565779);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56577a:{NFSU2_TR(0x56577a);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B56577e:{NFSU2_TR(0x56577e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x565783ull));
TAIL_STATIC(0x551de0u,551);
}
B565783:L565783:{c.instructions+=14;NFSU2_TR(0x565783);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B565785:{NFSU2_TR(0x565785);
u8 U[4];
w4(U+0,u32(0x79d830ull));
s4(u32(r4(R+24)),r4(U+0));
}
B56578b:{NFSU2_TR(0x56578b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B56578e:{NFSU2_TR(0x56578e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B565791:{NFSU2_TR(0x565791);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B565794:{NFSU2_TR(0x565794);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B565797:{NFSU2_TR(0x565797);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x64ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B56579a:{NFSU2_TR(0x56579a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x68ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B56579d:{NFSU2_TR(0x56579d);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5657a0:{NFSU2_TR(0x5657a0);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xacull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5657a6:{NFSU2_TR(0x5657a6);
__builtin_memmove((R+0),gp(0x8384d8),4);
}
B5657ab:{NFSU2_TR(0x5657ab);
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
B5657ad:{NFSU2_TR(0x5657ad);
u8 U[8];
w4(U+0,u32(u32(u32(0x91cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5657b4:{NFSU2_TR(0x5657b4);
if(r1(R+518)){{goto L5657e1;}}
}
B5657b6:L5657b6:{c.instructions+=2;NFSU2_TR(0x5657b6);
u8 U[10];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+8),(U+4),1);
w1(R+512,u8((r1(U+8))<(r1(R+12))));
w1(R+523,sborrow<u8>(r1(U+8),r1(R+12)));
w1(U+9,u8(u32(r1(U+8))-u32(r1(R+12))));
w1(R+519,u8(s8(r1(U+9))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+9))==(u8(0x0ull))));
w1(U+5,u8(u32(r1(U+9))&u32(u8(0xffull))));
w1(U+6,u8(__builtin_popcountll(u64(r1(U+5)))));
w1(U+7,u8(u32(r1(U+6))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+7))==(u8(0x0ull))));
}
B5657b9:{NFSU2_TR(0x5657b9);
if(r1(R+518)){{goto L5657e1;}}
}
B5657bb:L5657bb:{c.instructions+=2;NFSU2_TR(0x5657bb);
u8 U[5];
__builtin_memmove((U+3),gp(0x8384dc),1);
w1(R+512,u8((r1(U+3))<(r1(R+12))));
w1(R+523,sborrow<u8>(r1(U+3),r1(R+12)));
w1(U+4,u8(u32(r1(U+3))-u32(r1(R+12))));
w1(R+519,u8(s8(r1(U+4))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+4))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+4))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5657c1:{NFSU2_TR(0x5657c1);
if(r1(R+518)){{goto L5657e1;}}
}
B5657c3:L5657c3:{c.instructions+=5;NFSU2_TR(0x5657c3);
__builtin_memmove((R+28),(R+0),4);
}
B5657c5:{NFSU2_TR(0x5657c5);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5657c6:{NFSU2_TR(0x5657c6);
__builtin_memmove((R+4),(R+28),4);
}
B5657c8:{NFSU2_TR(0x5657c8);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x6cull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5657cb:{NFSU2_TR(0x5657cb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5657d0ull));
TAIL_STATIC(0x542990u,542);
}
B5657d0:L5657d0:{c.instructions+=4;NFSU2_TR(0x5657d0);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5657d3:{NFSU2_TR(0x5657d3);
u8 U[4];
w4(U+0,u32(0x2bac0ceeull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5657d8:{NFSU2_TR(0x5657d8);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5657d9:{NFSU2_TR(0x5657d9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5657deull));
TAIL_STATIC(0x4954e0u,495);
}
B5657de:L5657de:{c.instructions+=1;NFSU2_TR(0x5657de);
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
B5657e1:L5657e1:{c.instructions+=1;NFSU2_TR(0x5657e1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5657e6ull));
TAIL_STATIC(0x5be190u,5be);
}
B5657e6:L5657e6:{c.instructions+=3;NFSU2_TR(0x5657e6);
__builtin_memmove((R+0),gp(0x83a9d8),4);
}
B5657eb:{NFSU2_TR(0x5657eb);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5657ed:{NFSU2_TR(0x5657ed);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5657f6;}}
}
B5657ef:L5657ef:{c.instructions+=2;NFSU2_TR(0x5657ef);
w4(R+28,u32(0x1ull));
}
B5657f4:{NFSU2_TR(0x5657f4);
{goto L56581c;}
}
B5657f6:L5657f6:{c.instructions+=2;NFSU2_TR(0x5657f6);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5657f9:{NFSU2_TR(0x5657f9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L565802;}}
}
B5657fb:L5657fb:{c.instructions+=2;NFSU2_TR(0x5657fb);
w4(R+28,u32(0x2ull));
}
B565800:{NFSU2_TR(0x565800);
{goto L56581c;}
}
B565802:L565802:{c.instructions+=2;NFSU2_TR(0x565802);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B565805:{NFSU2_TR(0x565805);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L56580e;}}
}
B565807:L565807:{c.instructions+=2;NFSU2_TR(0x565807);
w4(R+28,u32(0x4ull));
}
B56580c:{NFSU2_TR(0x56580c);
{goto L56581c;}
}
B56580e:L56580e:{c.instructions+=6;NFSU2_TR(0x56580e);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B565810:{NFSU2_TR(0x565810);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B565813:{NFSU2_TR(0x565813);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+4),(U+0),1);
}
B565816:{NFSU2_TR(0x565816);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
}
B565817:{NFSU2_TR(0x565817);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x8ull))));
}
B56581a:{NFSU2_TR(0x56581a);
__builtin_memmove((R+28),(R+4),4);
}
B56581c:L56581c:{c.instructions+=3;NFSU2_TR(0x56581c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B56581f:{NFSU2_TR(0x56581f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B565820:{NFSU2_TR(0x565820);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x565825ull));
TAIL_STATIC(0x52cef0u,52c);
}
B565825:L565825:{c.instructions+=3;NFSU2_TR(0x565825);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B565828:{NFSU2_TR(0x565828);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B56582a:{NFSU2_TR(0x56582a);
if(r1(R+518)){{goto L565838;}}
}
B56582c:L56582c:{c.instructions+=4;NFSU2_TR(0x56582c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B56582f:{NFSU2_TR(0x56582f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B565832:{NFSU2_TR(0x565832);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B565835:{NFSU2_TR(0x565835);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B565838:L565838:{c.instructions+=2;NFSU2_TR(0x565838);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B565839:{NFSU2_TR(0x565839);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56583eull));
TAIL_STATIC(0x4ac9b0u,4ac);
}
B56583e:L56583e:{c.instructions+=4;NFSU2_TR(0x56583e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B565841:{NFSU2_TR(0x565841);
w4(R+4,u32(0x832dacull));
}
B565846:{NFSU2_TR(0x565846);
__builtin_memmove(gp(0x7f68b4),(R+12),4);
}
B56584c:{NFSU2_TR(0x56584c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x565851ull));
TAIL_STATIC(0x488ae0u,488);
}
B565851:L565851:{c.instructions+=8;NFSU2_TR(0x565851);
__builtin_memmove((R+4),(R+24),4);
}
B565853:{NFSU2_TR(0x565853);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x70ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B565856:{NFSU2_TR(0x565856);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x71ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B565859:{NFSU2_TR(0x565859);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x72ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B56585c:{NFSU2_TR(0x56585c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x74ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B56585f:{NFSU2_TR(0x56585f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6cull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B565866:{NFSU2_TR(0x565866);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x80ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B56586c:{NFSU2_TR(0x56586c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x565871ull));
TAIL_STATIC(0x510c90u,510);
}
B565871:L565871:{c.instructions+=4;NFSU2_TR(0x565871);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B565872:{NFSU2_TR(0x565872);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B565873:{NFSU2_TR(0x565873);
w4(R+4,u32(0x863780ull));
}
B565878:{NFSU2_TR(0x565878);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56587dull));
TAIL_STATIC(0x510940u,510);
}
B56587d:L56587d:{c.instructions+=4;NFSU2_TR(0x56587d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B565880:{NFSU2_TR(0x565880);
u8 U[4];
w4(U+0,u32(0x791898ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B565885:{NFSU2_TR(0x565885);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B565886:{NFSU2_TR(0x565886);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56588bull));
TAIL_STATIC(0x4954c0u,495);
}
B56588b:L56588b:{c.instructions+=3;NFSU2_TR(0x56588b);
u8 U[4];
w4(U+0,u32(0x79d3bcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B565890:{NFSU2_TR(0x565890);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B565891:{NFSU2_TR(0x565891);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x565896ull));
TAIL_STATIC(0x4954c0u,495);
}
B565896:L565896:{c.instructions+=3;NFSU2_TR(0x565896);
u8 U[4];
w4(U+0,u32(0x791888ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56589b:{NFSU2_TR(0x56589b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56589c:{NFSU2_TR(0x56589c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5658a1ull));
TAIL_STATIC(0x4954c0u,495);
}
B5658a1:L5658a1:{c.instructions+=4;NFSU2_TR(0x5658a1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5658a4:{NFSU2_TR(0x5658a4);
u8 U[4];
w4(U+0,u32(0xb8a7c6cfull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5658a9:{NFSU2_TR(0x5658a9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5658aa:{NFSU2_TR(0x5658aa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5658afull));
TAIL_STATIC(0x495520u,495);
}
B5658af:L5658af:{c.instructions+=5;NFSU2_TR(0x5658af);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5658b2:{NFSU2_TR(0x5658b2);
u8 U[4];
w4(U+0,u32(0xde02cf84ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5658b7:{NFSU2_TR(0x5658b7);
u8 U[4];
w4(U+0,u32(0xb8a7c6cfull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5658bc:{NFSU2_TR(0x5658bc);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5658bd:{NFSU2_TR(0x5658bd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5658c2ull));
TAIL_STATIC(0x495460u,495);
}
B5658c2:L5658c2:{c.instructions+=4;NFSU2_TR(0x5658c2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5658c5:{NFSU2_TR(0x5658c5);
u8 U[4];
w4(U+0,u32(0x69ba0838ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5658ca:{NFSU2_TR(0x5658ca);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5658cb:{NFSU2_TR(0x5658cb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5658d0ull));
TAIL_STATIC(0x495520u,495);
}
B5658d0:L5658d0:{c.instructions+=4;NFSU2_TR(0x5658d0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5658d3:{NFSU2_TR(0x5658d3);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x34ull))));
}
B5658d6:{NFSU2_TR(0x5658d6);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5658d8:{NFSU2_TR(0x5658d8);
if(r1(R+518)){{goto L5658fd;}}
}
B5658da:L5658da:{c.instructions+=2;NFSU2_TR(0x5658da);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5658db:{NFSU2_TR(0x5658db);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5658e0ull));
TAIL_STATIC(0x52cef0u,52c);
}
B5658e0:L5658e0:{c.instructions+=3;NFSU2_TR(0x5658e0);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5658e3:{NFSU2_TR(0x5658e3);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5658e5:{NFSU2_TR(0x5658e5);
if(r1(R+518)){{goto L5658fd;}}
}
B5658e7:L5658e7:{c.instructions+=3;NFSU2_TR(0x5658e7);
u8 U[4];
w4(U+0,u32(0x69ba0838ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5658ec:{NFSU2_TR(0x5658ec);
__builtin_memmove((R+4),(R+0),4);
}
B5658ee:{NFSU2_TR(0x5658ee);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5658f3ull));
TAIL_STATIC(0x517f80u,517);
}
B5658f3:L5658f3:{c.instructions+=2;NFSU2_TR(0x5658f3);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5658f5:{NFSU2_TR(0x5658f5);
if(r1(R+518)){{goto L5658fd;}}
}
B5658f7:L5658f7:{c.instructions+=2;NFSU2_TR(0x5658f7);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5658fb:{NFSU2_TR(0x5658fb);
{goto L565918;}
}
B5658fd:L5658fd:{c.instructions+=3;NFSU2_TR(0x5658fd);
__builtin_memmove((R+0),gp(0x8384c4),4);
}
B565902:{NFSU2_TR(0x565902);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B565904:{NFSU2_TR(0x565904);
if(r1(R+518)){{goto L565962;}}
}
B565906:L565906:{c.instructions+=4;NFSU2_TR(0x565906);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B565909:{NFSU2_TR(0x565909);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56590a:{NFSU2_TR(0x56590a);
u8 U[4];
w4(U+0,u32(0x69ba0838ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56590f:{NFSU2_TR(0x56590f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x565914ull));
TAIL_STATIC(0x52c570u,52c);
}
B565914:L565914:{c.instructions+=1;NFSU2_TR(0x565914);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B565918:L565918:{c.instructions+=2;NFSU2_TR(0x565918);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B56591a:{NFSU2_TR(0x56591a);
if(r1(R+518)){{goto L565962;}}
}
B56591c:L56591c:{c.instructions+=3;NFSU2_TR(0x56591c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B56591f:{NFSU2_TR(0x56591f);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B565921:{NFSU2_TR(0x565921);
if(r1(R+518)){{goto L565962;}}
}
B565923:L565923:{c.instructions+=2;NFSU2_TR(0x565923);
u8 U[4];
w4(U+0,u32(0x78f9d4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B565928:{NFSU2_TR(0x565928);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56592dull));
TAIL_STATIC(0x505450u,505);
}
B56592d:L56592d:{c.instructions+=4;NFSU2_TR(0x56592d);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B565930:{NFSU2_TR(0x565930);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B565933:{NFSU2_TR(0x565933);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B565935:{NFSU2_TR(0x565935);
if(r1(R+518)){{goto L565940;}}
}
B565937:L565937:{c.instructions+=3;NFSU2_TR(0x565937);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B56593a:{NFSU2_TR(0x56593a);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B56593c:{NFSU2_TR(0x56593c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x565923u);}goto L565923;}}
}
B56593e:L56593e:{c.instructions+=1;NFSU2_TR(0x56593e);
{goto L565962;}
}
B565940:L565940:{c.instructions+=2;NFSU2_TR(0x565940);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B565942:{NFSU2_TR(0x565942);
if(r1(R+518)){{goto L565962;}}
}
B565944:L565944:{c.instructions+=3;NFSU2_TR(0x565944);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B565948:{NFSU2_TR(0x565948);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+28))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B56594b:{NFSU2_TR(0x56594b);
if(r1(R+518)){{goto L56595f;}}
}
B56594d:L56594d:{c.instructions+=2;NFSU2_TR(0x56594d);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B565950:{NFSU2_TR(0x565950);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x565955ull));
TAIL_STATIC(0x517720u,517);
}
B565955:L565955:{c.instructions+=3;NFSU2_TR(0x565955);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B565959:{NFSU2_TR(0x565959);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B56595c:{NFSU2_TR(0x56595c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B56595f:L56595f:{c.instructions+=1;NFSU2_TR(0x56595f);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B565962:L565962:{c.instructions+=4;NFSU2_TR(0x565962);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B565965:{NFSU2_TR(0x565965);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B565967:{NFSU2_TR(0x565967);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x78ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B56596a:{NFSU2_TR(0x56596a);
if(r1(R+518)){{goto L565989;}}
}
B56596c:L56596c:{c.instructions+=2;NFSU2_TR(0x56596c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56596d:{NFSU2_TR(0x56596d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x565972ull));
TAIL_STATIC(0x52cef0u,52c);
}
B565972:L565972:{c.instructions+=3;NFSU2_TR(0x565972);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B565975:{NFSU2_TR(0x565975);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B565977:{NFSU2_TR(0x565977);
if(r1(R+518)){{goto L565989;}}
}
B565979:L565979:{c.instructions+=3;NFSU2_TR(0x565979);
u8 U[4];
w4(U+0,u32(0x69ba0838ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56597e:{NFSU2_TR(0x56597e);
__builtin_memmove((R+4),(R+0),4);
}
B565980:{NFSU2_TR(0x565980);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x565985ull));
TAIL_STATIC(0x517f80u,517);
}
B565985:L565985:{c.instructions+=2;NFSU2_TR(0x565985);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B565987:{NFSU2_TR(0x565987);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5659a4;}}
}
B565989:L565989:{c.instructions+=3;NFSU2_TR(0x565989);
__builtin_memmove((R+0),gp(0x8384c4),4);
}
B56598e:{NFSU2_TR(0x56598e);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B565990:{NFSU2_TR(0x565990);
if(r1(R+518)){{goto L5659a2;}}
}
B565992:L565992:{c.instructions+=4;NFSU2_TR(0x565992);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B565995:{NFSU2_TR(0x565995);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B565996:{NFSU2_TR(0x565996);
u8 U[4];
w4(U+0,u32(0x69ba0838ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56599b:{NFSU2_TR(0x56599b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5659a0ull));
TAIL_STATIC(0x52c570u,52c);
}
B5659a0:L5659a0:{c.instructions+=1;NFSU2_TR(0x5659a0);
{goto L5659a4;}
}
B5659a2:L5659a2:{c.instructions+=1;NFSU2_TR(0x5659a2);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5659a4:L5659a4:{c.instructions+=3;NFSU2_TR(0x5659a4);
u8 U[4];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5659a8:{NFSU2_TR(0x5659a8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5659ab:{NFSU2_TR(0x5659ab);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5659b0ull));
TAIL_STATIC(0x5ac6e0u,5ac);
}
B5659b0:L5659b0:{c.instructions+=7;NFSU2_TR(0x5659b0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5659b1:{NFSU2_TR(0x5659b1);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5659b2:{NFSU2_TR(0x5659b2);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5659b3:{NFSU2_TR(0x5659b3);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5659b5:{NFSU2_TR(0x5659b5);
u8 U[4];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5659b9:{NFSU2_TR(0x5659b9);
u8 U[5];
w4(U+0,u32(u32(u32(0x92cull))+u32(r4(R+16))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5659c1:{NFSU2_TR(0x5659c1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5659c6ull));
TAIL_STATIC(0x610270u,610);
}
B5659c6:L5659c6:{c.instructions+=4;NFSU2_TR(0x5659c6);
u8 U[8];
__builtin_memmove((U+0),gp(0x850078),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5659cd:{NFSU2_TR(0x5659cd);
__builtin_memmove((R+0),gp(0x863480),4);
}
B5659d2:{NFSU2_TR(0x5659d2);
u8 U[5];
w4(U+0,u32(u32(u32(0x91cull))+u32(r4(R+16))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5659da:{NFSU2_TR(0x5659da);
if(r1(R+518)){{goto L5659e1;}}
}
B5659dc:L5659dc:{c.instructions+=1;NFSU2_TR(0x5659dc);
__builtin_memmove((R+0),gp(0x83aab8),4);
}
B5659e1:L5659e1:{c.instructions+=3;NFSU2_TR(0x5659e1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5659e2:{NFSU2_TR(0x5659e2);
w4(R+4,u32(0x83ad90ull));
}
B5659e7:{NFSU2_TR(0x5659e7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5659ecull));
TAIL_STATIC(0x503510u,503);
}
B5659ec:L5659ec:{c.instructions+=3;NFSU2_TR(0x5659ec);
__builtin_memmove((R+28),(R+0),4);
}
B5659ee:{NFSU2_TR(0x5659ee);
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
B5659f0:{NFSU2_TR(0x5659f0);
if(r1(R+518)){{goto L565a07;}}
}
B5659f2:L5659f2:{c.instructions+=3;NFSU2_TR(0x5659f2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5659f4:{NFSU2_TR(0x5659f4);
__builtin_memmove((R+4),(R+28),4);
}
B5659f6:{NFSU2_TR(0x5659f6);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5659f9ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5659f9:L5659f9:{c.instructions+=7;NFSU2_TR(0x5659f9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5659fb:{NFSU2_TR(0x5659fb);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5659fc:{NFSU2_TR(0x5659fc);
u8 U[4];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B565a00:{NFSU2_TR(0x565a00);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B565a01:{NFSU2_TR(0x565a01);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B565a02:{NFSU2_TR(0x565a02);
__builtin_memmove((R+4),(R+28),4);
}
B565a04:{NFSU2_TR(0x565a04);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x565a07ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B565a07:L565a07:{c.instructions+=5;NFSU2_TR(0x565a07);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B565a08:{NFSU2_TR(0x565a08);
u8 U[4];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B565a0c:{NFSU2_TR(0x565a0c);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B565a0e:{NFSU2_TR(0x565a0e);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B565a0f:{NFSU2_TR(0x565a0f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x565a14ull));
TAIL_STATIC(0x4d8ec0u,4d8);
}
B565a14:L565a14:{c.instructions+=2;NFSU2_TR(0x565a14);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B565a17:{NFSU2_TR(0x565a17);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x565a1cull));
TAIL_STATIC(0x4a78b0u,4a7);
}
B565a1c:L565a1c:{c.instructions+=3;NFSU2_TR(0x565a1c);
u8 U[4];
w4(U+0,u32(0x78fcd8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B565a21:{NFSU2_TR(0x565a21);
w4(R+4,u32(0x8637b0ull));
}
B565a26:{NFSU2_TR(0x565a26);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x565a2bull));
TAIL_STATIC(0x51bb70u,51b);
}
B565a2b:L565a2b:{c.instructions+=2;NFSU2_TR(0x565a2b);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B565a2d:{NFSU2_TR(0x565a2d);
if(r1(R+518)){{goto L565a4c;}}
}
B565a2f:L565a2f:{c.instructions+=3;NFSU2_TR(0x565a2f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B565a32:{NFSU2_TR(0x565a32);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B565a34:{NFSU2_TR(0x565a34);
if(r1(R+518)){{goto L565a4c;}}
}
B565a36:L565a36:{c.instructions+=3;NFSU2_TR(0x565a36);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B565a39:{NFSU2_TR(0x565a39);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B565a3b:{NFSU2_TR(0x565a3b);
if(r1(R+518)){{goto L565a4c;}}
}
B565a3d:L565a3d:{c.instructions+=6;NFSU2_TR(0x565a3d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B565a3e:{NFSU2_TR(0x565a3e);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B565a3f:{NFSU2_TR(0x565a3f);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B565a40:{NFSU2_TR(0x565a40);
u8 U[4];
w4(U+0,u32(0xad4bbdcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B565a45:{NFSU2_TR(0x565a45);
__builtin_memmove((R+4),(R+0),4);
}
B565a47:{NFSU2_TR(0x565a47);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x565a4cull));
TAIL_STATIC(0x55b5c0u,55b);
}
B565a4c:L565a4c:{c.instructions+=2;NFSU2_TR(0x565a4c);
u8 U[4];
w4(U+0,u32(0x799facull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B565a51:{NFSU2_TR(0x565a51);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x565a56ull));
TAIL_STATIC(0x52cf60u,52c);
}
B565a56:L565a56:{c.instructions+=3;NFSU2_TR(0x565a56);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B565a59:{NFSU2_TR(0x565a59);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B565a5b:{NFSU2_TR(0x565a5b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L565a75;}}
}
B565a5d:L565a5d:{c.instructions+=3;NFSU2_TR(0x565a5d);
__builtin_memmove((R+4),gp(0x8384c4),4);
}
B565a63:{NFSU2_TR(0x565a63);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B565a65:{NFSU2_TR(0x565a65);
if(r1(R+518)){{goto L565a75;}}
}
B565a67:L565a67:{c.instructions+=6;NFSU2_TR(0x565a67);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B565a68:{NFSU2_TR(0x565a68);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B565a69:{NFSU2_TR(0x565a69);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B565a6a:{NFSU2_TR(0x565a6a);
u8 U[4];
w4(U+0,u32(0x799facull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B565a6f:{NFSU2_TR(0x565a6f);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B565a70:{NFSU2_TR(0x565a70);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x565a75ull));
TAIL_STATIC(0x555d00u,555);
}
B565a75:L565a75:{c.instructions+=5;NFSU2_TR(0x565a75);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B565a76:{NFSU2_TR(0x565a76);
__builtin_memmove((R+4),(R+24),4);
}
B565a78:{NFSU2_TR(0x565a78);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B565a7b:{NFSU2_TR(0x565a7b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B565a7e:{NFSU2_TR(0x565a7e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x565a83ull));
TAIL_STATIC(0x523d00u,523);
}
B565a83:L565a83:{c.instructions+=3;NFSU2_TR(0x565a83);
u8 U[4];
w4(U+0,u32(u32(u32(0x3a4ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B565a8a:{NFSU2_TR(0x565a8a);
u8 U[5];
w4(U+0,u32(u32(u32(0x91cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B565a91:{NFSU2_TR(0x565a91);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x565a96ull));
TAIL_STATIC(0x4022c0u,402);
}
B565a96:L565a96:{c.instructions+=9;NFSU2_TR(0x565a96);
u8 U[8];
w4(U+0,u32(u32(u32(0x914ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B565a9d:{NFSU2_TR(0x565a9d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B565a9e:{NFSU2_TR(0x565a9e);
__builtin_memmove((R+0),(R+24),4);
}
B565aa0:{NFSU2_TR(0x565aa0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B565aa1:{NFSU2_TR(0x565aa1);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B565aa8:{NFSU2_TR(0x565aa8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B565aa9:{NFSU2_TR(0x565aa9);
__builtin_memmove((R+16),(R+20),4);
}
B565aab:{NFSU2_TR(0x565aab);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B565aac:{NFSU2_TR(0x565aac);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B565ab0:L565ab0:{c.instructions+=13;NFSU2_TR(0x565ab0);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B565ab2:{NFSU2_TR(0x565ab2);
u8 U[4];
w4(U+0,u32(0x776fe8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B565ab7:{NFSU2_TR(0x565ab7);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B565abd:{NFSU2_TR(0x565abd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B565abe:{NFSU2_TR(0x565abe);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B565ac5:{NFSU2_TR(0x565ac5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B565ac6:{NFSU2_TR(0x565ac6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B565ac7:{NFSU2_TR(0x565ac7);
__builtin_memmove((R+24),(R+4),4);
}
B565ac9:{NFSU2_TR(0x565ac9);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B565acd:{NFSU2_TR(0x565acd);
u8 U[4];
w4(U+0,u32(0x79d830ull));
s4(u32(r4(R+24)),r4(U+0));
}
B565ad3:{NFSU2_TR(0x565ad3);
u8 U[4];
w4(U+0,u32(0x799facull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B565ad8:{NFSU2_TR(0x565ad8);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B565ae0:{NFSU2_TR(0x565ae0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x565ae5ull));
TAIL_STATIC(0x52cf60u,52c);
}
B565ae5:L565ae5:{c.instructions+=3;NFSU2_TR(0x565ae5);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B565ae8:{NFSU2_TR(0x565ae8);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B565aea:{NFSU2_TR(0x565aea);
if(r1(R+518)){{goto L565b00;}}
}
B565aec:L565aec:{c.instructions+=3;NFSU2_TR(0x565aec);
__builtin_memmove((R+4),gp(0x8384c4),4);
}
B565af2:{NFSU2_TR(0x565af2);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B565af4:{NFSU2_TR(0x565af4);
if(r1(R+518)){{goto L565b00;}}
}
B565af6:L565af6:{c.instructions+=2;NFSU2_TR(0x565af6);
u8 U[4];
w4(U+0,u32(0x799facull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B565afb:{NFSU2_TR(0x565afb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x565b00ull));
TAIL_STATIC(0x5376f0u,537);
}
B565b00:L565b00:{c.instructions+=3;NFSU2_TR(0x565b00);
u8 U[4];
w4(U+0,u32(0x78fcd8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B565b05:{NFSU2_TR(0x565b05);
w4(R+4,u32(0x8637b0ull));
}
B565b0a:{NFSU2_TR(0x565b0a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x565b0full));
TAIL_STATIC(0x51bb70u,51b);
}
B565b0f:L565b0f:{c.instructions+=2;NFSU2_TR(0x565b0f);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B565b11:{NFSU2_TR(0x565b11);
if(r1(R+518)){{goto L565b30;}}
}
B565b13:L565b13:{c.instructions+=3;NFSU2_TR(0x565b13);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B565b16:{NFSU2_TR(0x565b16);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B565b18:{NFSU2_TR(0x565b18);
if(r1(R+518)){{goto L565b30;}}
}
B565b1a:L565b1a:{c.instructions+=3;NFSU2_TR(0x565b1a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B565b1d:{NFSU2_TR(0x565b1d);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B565b1f:{NFSU2_TR(0x565b1f);
if(r1(R+518)){{goto L565b30;}}
}
B565b21:L565b21:{c.instructions+=5;NFSU2_TR(0x565b21);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B565b22:{NFSU2_TR(0x565b22);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B565b24:{NFSU2_TR(0x565b24);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B565b26:{NFSU2_TR(0x565b26);
u8 U[4];
w4(U+0,u32(0x18883f75ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B565b2b:{NFSU2_TR(0x565b2b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x565b30ull));
TAIL_STATIC(0x55b5c0u,55b);
}
B565b30:L565b30:{c.instructions+=7;NFSU2_TR(0x565b30);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B565b34:{NFSU2_TR(0x565b34);
s4(0x7f68b4,u32(0x1ull));
}
B565b3e:{NFSU2_TR(0x565b3e);
u8 U[4];
w4(U+0,u32(0x79ac00ull));
s4(u32(r4(R+24)),r4(U+0));
}
B565b44:{NFSU2_TR(0x565b44);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B565b45:{NFSU2_TR(0x565b45);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B565b4c:{NFSU2_TR(0x565b4c);
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
B565b4f:{NFSU2_TR(0x565b4f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B565b50:L565b50:{c.instructions+=6;NFSU2_TR(0x565b50);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B565b54:{NFSU2_TR(0x565b54);
u8 U[4];
w1(R+512,u8((r4(R+0))<(u32(0x911ab364ull))));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x911ab364ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B565b59:{NFSU2_TR(0x565b59);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B565b5a:{NFSU2_TR(0x565b5a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B565b5b:{NFSU2_TR(0x565b5b);
__builtin_memmove((R+24),(R+4),4);
}
B565b5d:{NFSU2_TR(0x565b5d);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L565caf;}}
}
B565b63:L565b63:{c.instructions+=1;NFSU2_TR(0x565b63);
if(r1(R+518)){{goto L565c63;}}
}
B565b69:L565b69:{c.instructions+=2;NFSU2_TR(0x565b69);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x2b46fe08ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B565b6e:{NFSU2_TR(0x565b6e);
if(r1(R+518)){{goto L565c23;}}
}
B565b74:L565b74:{c.instructions+=2;NFSU2_TR(0x565b74);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x35f8620bull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B565b79:{NFSU2_TR(0x565b79);
if(r1(R+518)){{goto L565ba7;}}
}
B565b7b:L565b7b:{c.instructions+=2;NFSU2_TR(0x565b7b);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0x42317a19ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x42317a19ull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0x42317a19ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B565b80:{NFSU2_TR(0x565b80);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L565d7f;}}
}
B565b86:L565b86:{c.instructions+=2;NFSU2_TR(0x565b86);
w4(R+4,u32(0x832dacull));
}
B565b8b:{NFSU2_TR(0x565b8b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x565b90ull));
TAIL_STATIC(0x488b10u,488);
}
B565b90:L565b90:{c.instructions+=4;NFSU2_TR(0x565b90);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B565b93:{NFSU2_TR(0x565b93);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B565b94:{NFSU2_TR(0x565b94);
w4(R+4,u32(0x832dacull));
}
B565b99:{NFSU2_TR(0x565b99);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x565b9eull));
TAIL_STATIC(0x4889d0u,488);
}
B565b9e:L565b9e:{c.instructions+=4;NFSU2_TR(0x565b9e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B565b9f:{NFSU2_TR(0x565b9f);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x51ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B565ba3:{NFSU2_TR(0x565ba3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B565ba4:{NFSU2_TR(0x565ba4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B565ba7:L565ba7:{c.instructions+=3;NFSU2_TR(0x565ba7);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B565baa:{NFSU2_TR(0x565baa);
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
B565bac:{NFSU2_TR(0x565bac);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L565d7f;}}
}
B565bb2:L565bb2:{c.instructions+=7;NFSU2_TR(0x565bb2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B565bb5:{NFSU2_TR(0x565bb5);
u8 U[4];
w4(U+0,u32(0x79d84cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B565bba:{NFSU2_TR(0x565bba);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B565bbb:{NFSU2_TR(0x565bbb);
u8 U[4];
w4(U+0,u32(0x1b0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B565bc0:{NFSU2_TR(0x565bc0);
u8 U[4];
w4(U+0,u32(0x140ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B565bc5:{NFSU2_TR(0x565bc5);
w4(R+4,u32(0x832dacull));
}
B565bca:{NFSU2_TR(0x565bca);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x565bcfull));
TAIL_STATIC(0x4889f0u,488);
}
B565bcf:L565bcf:{c.instructions+=2;NFSU2_TR(0x565bcf);
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
B565bd1:{NFSU2_TR(0x565bd1);
if(r1(R+518)){{goto L565d7f;}}
}
B565bd7:L565bd7:{c.instructions+=6;NFSU2_TR(0x565bd7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B565bda:{NFSU2_TR(0x565bda);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B565bde:{NFSU2_TR(0x565bde);
__builtin_memmove((R+28),gp(0x832db4),4);
}
B565be4:{NFSU2_TR(0x565be4);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B565be5:{NFSU2_TR(0x565be5);
w4(R+4,u32(0x832dacull));
}
B565bea:{NFSU2_TR(0x565bea);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x565befull));
TAIL_STATIC(0x5ba030u,5ba);
}
B565bef:L565bef:{c.instructions+=3;NFSU2_TR(0x565bef);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B565bf0:{NFSU2_TR(0x565bf0);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B565bf1:{NFSU2_TR(0x565bf1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x565bf6ull));
TAIL_STATIC(0x523c70u,523);
}
B565bf6:L565bf6:{c.instructions+=3;NFSU2_TR(0x565bf6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B565bf7:{NFSU2_TR(0x565bf7);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B565bf9:{NFSU2_TR(0x565bf9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x565bfeull));
TAIL_STATIC(0x4a95b0u,4a9);
}
B565bfe:L565bfe:{c.instructions+=9;NFSU2_TR(0x565bfe);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B565c01:{NFSU2_TR(0x565c01);
u8 U[4];
w4(U+0,u32(0x2b46fe08ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B565c06:{NFSU2_TR(0x565c06);
u8 U[4];
w4(U+0,u32(0x42317a19ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B565c0b:{NFSU2_TR(0x565c0b);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B565c0d:{NFSU2_TR(0x565c0d);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B565c0f:{NFSU2_TR(0x565c0f);
u8 U[4];
w4(U+0,u32(0xcc1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B565c14:{NFSU2_TR(0x565c14);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B565c15:{NFSU2_TR(0x565c15);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B565c16:{NFSU2_TR(0x565c16);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x565c1bull));
TAIL_STATIC(0x4a3100u,4a3);
}
B565c1b:L565c1b:{c.instructions+=4;NFSU2_TR(0x565c1b);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x2cull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x2cull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x2cull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B565c1e:{NFSU2_TR(0x565c1e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B565c1f:{NFSU2_TR(0x565c1f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B565c20:{NFSU2_TR(0x565c20);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B565c23:L565c23:{c.instructions+=3;NFSU2_TR(0x565c23);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B565c26:{NFSU2_TR(0x565c26);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B565c28:{NFSU2_TR(0x565c28);
if(r1(R+518)){{goto L565c40;}}
}
B565c2a:L565c2a:{c.instructions+=4;NFSU2_TR(0x565c2a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B565c2d:{NFSU2_TR(0x565c2d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B565c2e:{NFSU2_TR(0x565c2e);
w4(R+4,u32(0x832dacull));
}
B565c33:{NFSU2_TR(0x565c33);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x565c38ull));
TAIL_STATIC(0x488aa0u,488);
}
B565c38:L565c38:{c.instructions+=2;NFSU2_TR(0x565c38);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B565c3c:{NFSU2_TR(0x565c3c);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x51ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B565c40:L565c40:{c.instructions+=3;NFSU2_TR(0x565c40);
__builtin_memmove((R+4),gp(0x8384c4),4);
}
B565c46:{NFSU2_TR(0x565c46);
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
B565c48:{NFSU2_TR(0x565c48);
if(r1(R+518)){{goto L565d7f;}}
}
B565c4e:L565c4e:{c.instructions+=5;NFSU2_TR(0x565c4e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B565c51:{NFSU2_TR(0x565c51);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B565c53:{NFSU2_TR(0x565c53);
u8 U[4];
w4(U+0,u32(0x799f94ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B565c58:{NFSU2_TR(0x565c58);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B565c59:{NFSU2_TR(0x565c59);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x565c5eull));
TAIL_STATIC(0x5377a0u,537);
}
B565c5e:L565c5e:{c.instructions+=3;NFSU2_TR(0x565c5e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B565c5f:{NFSU2_TR(0x565c5f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B565c60:{NFSU2_TR(0x565c60);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B565c63:L565c63:{c.instructions+=2;NFSU2_TR(0x565c63);
u8 U[4];
w4(U+0,u32(0x790000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B565c68:{NFSU2_TR(0x565c68);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x565c6dull));
TAIL_STATIC(0x52cf60u,52c);
}
B565c6d:L565c6d:{c.instructions+=3;NFSU2_TR(0x565c6d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B565c70:{NFSU2_TR(0x565c70);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B565c72:{NFSU2_TR(0x565c72);
if(r1(R+518)){{goto L565c8c;}}
}
B565c74:L565c74:{c.instructions+=3;NFSU2_TR(0x565c74);
__builtin_memmove((R+4),gp(0x8384c4),4);
}
B565c7a:{NFSU2_TR(0x565c7a);
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
B565c7c:{NFSU2_TR(0x565c7c);
if(r1(R+518)){{goto L565d7f;}}
}
B565c82:L565c82:{c.instructions+=2;NFSU2_TR(0x565c82);
u8 U[4];
w4(U+0,u32(0x790000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B565c87:{NFSU2_TR(0x565c87);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x565c8cull));
TAIL_STATIC(0x5376f0u,537);
}
B565c8c:L565c8c:{c.instructions+=3;NFSU2_TR(0x565c8c);
__builtin_memmove((R+4),gp(0x8384c4),4);
}
B565c92:{NFSU2_TR(0x565c92);
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
B565c94:{NFSU2_TR(0x565c94);
if(r1(R+518)){{goto L565d7f;}}
}
B565c9a:L565c9a:{c.instructions+=5;NFSU2_TR(0x565c9a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B565c9d:{NFSU2_TR(0x565c9d);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B565c9f:{NFSU2_TR(0x565c9f);
u8 U[4];
w4(U+0,u32(0x799f94ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B565ca4:{NFSU2_TR(0x565ca4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B565ca5:{NFSU2_TR(0x565ca5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x565caaull));
TAIL_STATIC(0x5377a0u,537);
}
B565caa:L565caa:{c.instructions+=3;NFSU2_TR(0x565caa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B565cab:{NFSU2_TR(0x565cab);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B565cac:{NFSU2_TR(0x565cac);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B565caf:L565caf:{c.instructions+=2;NFSU2_TR(0x565caf);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x9803f6e2ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B565cb4:{NFSU2_TR(0x565cb4);
if(r1(R+518)){{goto L565d0a;}}
}
B565cb6:L565cb6:{c.instructions+=2;NFSU2_TR(0x565cb6);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0xc98356baull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0xc98356baull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0xc98356baull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B565cbb:{NFSU2_TR(0x565cbb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L565d7f;}}
}
B565cc1:L565cc1:{c.instructions+=3;NFSU2_TR(0x565cc1);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B565cc4:{NFSU2_TR(0x565cc4);
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
B565cc6:{NFSU2_TR(0x565cc6);
if(r1(R+518)){{goto L565d7f;}}
}
B565ccc:L565ccc:{c.instructions+=4;NFSU2_TR(0x565ccc);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x51ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B565ccf:{NFSU2_TR(0x565ccf);
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
B565cd1:{NFSU2_TR(0x565cd1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B565cd4:{NFSU2_TR(0x565cd4);
if(r1(R+518)){{goto L565d7f;}}
}
B565cda:L565cda:{c.instructions+=4;NFSU2_TR(0x565cda);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B565cdd:{NFSU2_TR(0x565cdd);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B565cde:{NFSU2_TR(0x565cde);
w4(R+4,u32(0x832dacull));
}
B565ce3:{NFSU2_TR(0x565ce3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x565ce8ull));
TAIL_STATIC(0x4889d0u,488);
}
B565ce8:L565ce8:{c.instructions+=5;NFSU2_TR(0x565ce8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B565ceb:{NFSU2_TR(0x565ceb);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B565cec:{NFSU2_TR(0x565cec);
u8 U[4];
w4(U+0,u32(0x79d840ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B565cf1:{NFSU2_TR(0x565cf1);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B565cf2:{NFSU2_TR(0x565cf2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x565cf7ull));
TAIL_STATIC(0x495400u,495);
}
B565cf7:L565cf7:{c.instructions+=3;NFSU2_TR(0x565cf7);
u8 U[4];
w4(U+0,u32(0x79d840ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B565cfc:{NFSU2_TR(0x565cfc);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B565cfd:{NFSU2_TR(0x565cfd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x565d02ull));
TAIL_STATIC(0x495500u,495);
}
B565d02:L565d02:{c.instructions+=4;NFSU2_TR(0x565d02);
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
B565d05:{NFSU2_TR(0x565d05);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B565d06:{NFSU2_TR(0x565d06);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B565d07:{NFSU2_TR(0x565d07);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B565d0a:L565d0a:{c.instructions+=4;NFSU2_TR(0x565d0a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B565d0d:{NFSU2_TR(0x565d0d);
u8 U[4];
w4(U+0,u32(0x1c7fcf8bull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B565d12:{NFSU2_TR(0x565d12);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B565d13:{NFSU2_TR(0x565d13);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x565d18ull));
TAIL_STATIC(0x537a60u,537);
}
B565d18:L565d18:{c.instructions+=11;NFSU2_TR(0x565d18);
{u32 ea_=u32(u32(8872920u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B565d1e:{NFSU2_TR(0x565d1e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B565d21:{NFSU2_TR(0x565d21);
__builtin_memmove((R+28),(R+0),4);
}
B565d23:{NFSU2_TR(0x565d23);
{u32 ea_=u32(u32(7920176u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B565d29:{NFSU2_TR(0x565d29);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B565d2a:{NFSU2_TR(0x565d2a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x8ull))));
}
B565d2d:{NFSU2_TR(0x565d2d);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B565d31:{NFSU2_TR(0x565d31);
{u32 ea_=u32(u32(8872916u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B565d37:{NFSU2_TR(0x565d37);
{u32 ea_=u32(u32(7961936u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B565d3d:{NFSU2_TR(0x565d3d);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B565d40:{NFSU2_TR(0x565d40);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x565d45ull));
TAIL_STATIC(0x52d020u,52d);
}
B565d45:L565d45:{c.instructions+=5;NFSU2_TR(0x565d45);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B565d48:{NFSU2_TR(0x565d48);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B565d4a:{NFSU2_TR(0x565d4a);
__builtin_memmove((R+4),(R+28),4);
}
B565d4c:{NFSU2_TR(0x565d4c);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B565d4e:{NFSU2_TR(0x565d4e);
if(r1(R+518)){{goto L565d57;}}
}
B565d50:L565d50:{c.instructions+=2;NFSU2_TR(0x565d50);
u8 U[4];
w4(U+0,u32(0xa3e4657bull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B565d55:{NFSU2_TR(0x565d55);
{goto L565d5c;}
}
B565d57:L565d57:{c.instructions+=1;NFSU2_TR(0x565d57);
u8 U[4];
w4(U+0,u32(0x5bab0fc0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B565d5c:L565d5c:{c.instructions+=1;NFSU2_TR(0x565d5c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x565d61ull));
TAIL_STATIC(0x52b030u,52b);
}
B565d61:L565d61:{c.instructions+=2;NFSU2_TR(0x565d61);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B565d62:{NFSU2_TR(0x565d62);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x565d67ull));
TAIL_STATIC(0x52d100u,52d);
}
B565d67:L565d67:{c.instructions+=3;NFSU2_TR(0x565d67);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B565d6a:{NFSU2_TR(0x565d6a);
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
B565d6c:{NFSU2_TR(0x565d6c);
if(r1(R+518)){{goto L565d7f;}}
}
B565d6e:L565d6e:{c.instructions+=4;NFSU2_TR(0x565d6e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B565d71:{NFSU2_TR(0x565d71);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B565d72:{NFSU2_TR(0x565d72);
u8 U[4];
w4(U+0,u32(0x911ab364ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B565d77:{NFSU2_TR(0x565d77);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x565d7cull));
TAIL_STATIC(0x55dda0u,55d);
}
B565d7c:L565d7c:{c.instructions+=1;NFSU2_TR(0x565d7c);
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
B565d7f:L565d7f:{c.instructions+=3;NFSU2_TR(0x565d7f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B565d80:{NFSU2_TR(0x565d80);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B565d81:{NFSU2_TR(0x565d81);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B565d90:L565d90:{c.instructions+=11;NFSU2_TR(0x565d90);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B565d91:{NFSU2_TR(0x565d91);
__builtin_memmove((R+20),(R+16),4);
}
B565d93:{NFSU2_TR(0x565d93);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff8ull))));
}
B565d96:{NFSU2_TR(0x565d96);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x1cull))));
}
B565d99:{NFSU2_TR(0x565d99);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B565d9a:{NFSU2_TR(0x565d9a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B565d9b:{NFSU2_TR(0x565d9b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B565d9c:{NFSU2_TR(0x565d9c);
__builtin_memmove((R+28),(R+4),4);
}
B565d9e:{NFSU2_TR(0x565d9e);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B565da4:{NFSU2_TR(0x565da4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B565da5:{NFSU2_TR(0x565da5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x565daaull));
TAIL_STATIC(0x52d100u,52d);
}
B565daa:L565daa:{c.instructions+=3;NFSU2_TR(0x565daa);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B565dad:{NFSU2_TR(0x565dad);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B565daf:{NFSU2_TR(0x565daf);
if(r1(R+518)){{goto L565dde;}}
}
B565db1:L565db1:{c.instructions+=4;NFSU2_TR(0x565db1);
w4(R+0,u32(s32(s8(m1(0x8381ab)))));
}
B565db8:{NFSU2_TR(0x565db8);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B565dbb:{NFSU2_TR(0x565dbb);
__builtin_memmove((R+12),gp(0x83aa58),1);
}
B565dc1:{NFSU2_TR(0x565dc1);
if(r1(R+518)){{goto L565dcf;}}
}
B565dc3:L565dc3:{c.instructions+=3;NFSU2_TR(0x565dc3);
__builtin_memmove((R+4),gp(0x82b884),4);
}
B565dc9:{NFSU2_TR(0x565dc9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B565dca:{NFSU2_TR(0x565dca);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x565dcfull));
TAIL_STATIC(0x458520u,458);
}
B565dcf:L565dcf:{c.instructions+=5;NFSU2_TR(0x565dcf);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B565dd1:{NFSU2_TR(0x565dd1);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(r1(R+12))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B565dd3:{NFSU2_TR(0x565dd3);
__builtin_memmove((R+4),(R+518),1);
}
B565dd6:{NFSU2_TR(0x565dd6);
__builtin_memmove(gp(0x83aa58),(R+4),4);
}
B565ddc:{NFSU2_TR(0x565ddc);
{goto L565e1b;}
}
B565dde:L565dde:{c.instructions+=3;NFSU2_TR(0x565dde);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x110ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B565de4:{NFSU2_TR(0x565de4);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B565de5:{NFSU2_TR(0x565de5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x565deaull));
TAIL_STATIC(0x52d100u,52d);
}
B565dea:L565dea:{c.instructions+=3;NFSU2_TR(0x565dea);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B565ded:{NFSU2_TR(0x565ded);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B565def:{NFSU2_TR(0x565def);
if(r1(R+518)){{goto L565e2d;}}
}
B565df1:L565df1:{c.instructions+=4;NFSU2_TR(0x565df1);
w4(R+0,u32(s32(s8(m1(0x8381c6)))));
}
B565df8:{NFSU2_TR(0x565df8);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B565dfb:{NFSU2_TR(0x565dfb);
__builtin_memmove((R+12),gp(0x83aa58),1);
}
B565e01:{NFSU2_TR(0x565e01);
if(r1(R+518)){{goto L565e0f;}}
}
B565e03:L565e03:{c.instructions+=3;NFSU2_TR(0x565e03);
__builtin_memmove((R+4),gp(0x82b884),4);
}
B565e09:{NFSU2_TR(0x565e09);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B565e0a:{NFSU2_TR(0x565e0a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x565e0full));
TAIL_STATIC(0x458520u,458);
}
B565e0f:L565e0f:{c.instructions+=4;NFSU2_TR(0x565e0f);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B565e11:{NFSU2_TR(0x565e11);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(r1(R+12))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B565e13:{NFSU2_TR(0x565e13);
__builtin_memmove((R+0),(R+518),1);
}
B565e16:{NFSU2_TR(0x565e16);
__builtin_memmove(gp(0x83aa58),(R+0),4);
}
B565e1b:L565e1b:{c.instructions+=2;NFSU2_TR(0x565e1b);
__builtin_memmove((R+4),(R+28),4);
}
B565e1d:{NFSU2_TR(0x565e1d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x565e22ull));
TAIL_STATIC(0x524120u,524);
}
B565e22:L565e22:{c.instructions+=2;NFSU2_TR(0x565e22);
__builtin_memmove((R+4),gp(0x82b884),4);
}
B565e28:{NFSU2_TR(0x565e28);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x565e2dull));
TAIL_STATIC(0x479220u,479);
}
B565e2d:L565e2d:{c.instructions+=3;NFSU2_TR(0x565e2d);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x108ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B565e33:{NFSU2_TR(0x565e33);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B565e35:{NFSU2_TR(0x565e35);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L565e44;}}
}
B565e37:L565e37:{c.instructions+=2;NFSU2_TR(0x565e37);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4cull))));
__builtin_memmove((R+4),(U+0),4);
}
B565e3a:{NFSU2_TR(0x565e3a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x565e3full));
TAIL_STATIC(0x54eb80u,54e);
}
B565e3f:L565e3f:{c.instructions+=1;NFSU2_TR(0x565e3f);
{goto L565ee9;}
}
B565e44:L565e44:{c.instructions+=23;NFSU2_TR(0x565e44);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B565e47:{NFSU2_TR(0x565e47);
{u32 ea_=u32(r4(R+0)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B565e4a:{NFSU2_TR(0x565e4a);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B565e4e:{NFSU2_TR(0x565e4e);
{u32 ea_=u32(r4(R+0)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B565e51:{NFSU2_TR(0x565e51);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B565e52:{NFSU2_TR(0x565e52);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B565e56:{NFSU2_TR(0x565e56);
{u32 ea_=u32(u32(8872916u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B565e5c:{NFSU2_TR(0x565e5c);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B565e60:{NFSU2_TR(0x565e60);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B565e61:{NFSU2_TR(0x565e61);
{u32 ea_=u32(u32(7961936u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B565e67:{NFSU2_TR(0x565e67);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
w4(U+4,u32(0xc47a0000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B565e6f:{NFSU2_TR(0x565e6f);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
w4(U+4,u32(0x44fa0000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B565e77:{NFSU2_TR(0x565e77);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B565e7b:{NFSU2_TR(0x565e7b);
{u32 ea_=u32(u32(8872920u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B565e81:{NFSU2_TR(0x565e81);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B565e85:{NFSU2_TR(0x565e85);
{u32 ea_=u32(u32(7920176u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B565e8b:{NFSU2_TR(0x565e8b);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B565e8f:{NFSU2_TR(0x565e8f);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B565e93:{NFSU2_TR(0x565e93);
{u32 ea_=u32(u32(7894456u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B565e99:{NFSU2_TR(0x565e99);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B565e9a:{NFSU2_TR(0x565e9a);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B565e9b:{NFSU2_TR(0x565e9b);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B565e9f:{NFSU2_TR(0x565e9f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x565ea4ull));
TAIL_STATIC(0x50cd00u,50c);
}
B565ea4:L565ea4:{c.instructions+=3;NFSU2_TR(0x565ea4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B565ea7:{NFSU2_TR(0x565ea7);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B565ea9:{NFSU2_TR(0x565ea9);
if(r1(R+518)){{goto L565eb7;}}
}
B565eab:L565eab:{c.instructions+=3;NFSU2_TR(0x565eab);
u8 U[4];
w4(U+0,u32(0x72619778ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B565eb0:{NFSU2_TR(0x565eb0);
__builtin_memmove((R+4),(R+28),4);
}
B565eb2:{NFSU2_TR(0x565eb2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x565eb7ull));
TAIL_STATIC(0x550f10u,550);
}
B565eb7:L565eb7:{c.instructions+=10;NFSU2_TR(0x565eb7);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B565ebb:{NFSU2_TR(0x565ebb);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B565ebf:{NFSU2_TR(0x565ebf);
{u32 ea_=u32(u32(7985244u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B565ec5:{NFSU2_TR(0x565ec5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B565ec6:{NFSU2_TR(0x565ec6);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B565eca:{NFSU2_TR(0x565eca);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B565ecb:{NFSU2_TR(0x565ecb);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B565ecc:{NFSU2_TR(0x565ecc);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B565ed0:{NFSU2_TR(0x565ed0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B565ed1:{NFSU2_TR(0x565ed1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x565ed6ull));
TAIL_STATIC(0x50cd00u,50c);
}
B565ed6:L565ed6:{c.instructions+=3;NFSU2_TR(0x565ed6);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B565ed9:{NFSU2_TR(0x565ed9);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B565edb:{NFSU2_TR(0x565edb);
if(r1(R+518)){{goto L565ee9;}}
}
B565edd:L565edd:{c.instructions+=3;NFSU2_TR(0x565edd);
u8 U[4];
w4(U+0,u32(0x911c0a4bull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B565ee2:{NFSU2_TR(0x565ee2);
__builtin_memmove((R+4),(R+28),4);
}
B565ee4:{NFSU2_TR(0x565ee4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x565ee9ull));
TAIL_STATIC(0x550f10u,550);
}
B565ee9:L565ee9:{c.instructions+=3;NFSU2_TR(0x565ee9);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B565eec:{NFSU2_TR(0x565eec);
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
B565eee:{NFSU2_TR(0x565eee);
if(r1(R+518)){TAIL_STATIC(0x56600cu,566);}
}
B565ef4:L565ef4:{c.instructions+=3;NFSU2_TR(0x565ef4);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+24),(U+0),4);
}
B565ef7:{NFSU2_TR(0x565ef7);
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
B565ef9:{NFSU2_TR(0x565ef9);
if(r1(R+518)){TAIL_STATIC(0x56600cu,566);}
}
B565eff:L565eff:{c.instructions+=20;NFSU2_TR(0x565eff);
}
B565f00:{NFSU2_TR(0x565f00);
{u32 ea_=u32(r4(R+24)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B565f03:{NFSU2_TR(0x565f03);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B565f06:{NFSU2_TR(0x565f06);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B565f09:{NFSU2_TR(0x565f09);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B565f0c:{NFSU2_TR(0x565f0c);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B565f10:{NFSU2_TR(0x565f10);
{u32 ea_=u32(r4(R+24)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B565f13:{NFSU2_TR(0x565f13);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B565f17:{NFSU2_TR(0x565f17);
__builtin_memmove((R+0),gp(0x8763f0),1);
}
B565f1c:{NFSU2_TR(0x565f1c);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B565f20:{NFSU2_TR(0x565f20);
{u32 ea_=u32(u32(8872916u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B565f26:{NFSU2_TR(0x565f26);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B565f28:{NFSU2_TR(0x565f28);
w4(R+0,u32(m1(0x8763f2)));
}
B565f2f:{NFSU2_TR(0x565f2f);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B565f33:{NFSU2_TR(0x565f33);
{u32 ea_=u32(u32(7961936u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B565f39:{NFSU2_TR(0x565f39);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B565f3d:{NFSU2_TR(0x565f3d);
{u32 ea_=u32(u32(8872920u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B565f43:{NFSU2_TR(0x565f43);
{u32 ea_=u32(u32(7920176u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B565f49:{NFSU2_TR(0x565f49);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B565f4d:{NFSU2_TR(0x565f4d);
if(r1(R+518)){{goto L565f56;}}
}
B565f4f:L565f4f:{c.instructions+=1;NFSU2_TR(0x565f4f);
w4(R+0,u32(m1(0x8763f5)));
}
B565f56:L565f56:{c.instructions+=2;NFSU2_TR(0x565f56);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B565f58:{NFSU2_TR(0x565f58);
if(r1(R+518)){{goto L565f7f;}}
}
B565f5a:L565f5a:{c.instructions+=6;NFSU2_TR(0x565f5a);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B565f5e:{NFSU2_TR(0x565f5e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B565f5f:{NFSU2_TR(0x565f5f);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B565f63:{NFSU2_TR(0x565f63);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B565f64:{NFSU2_TR(0x565f64);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B565f65:{NFSU2_TR(0x565f65);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x565f6aull));
TAIL_STATIC(0x52d020u,52d);
}
B565f6a:L565f6a:{c.instructions+=3;NFSU2_TR(0x565f6a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B565f6d:{NFSU2_TR(0x565f6d);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B565f6f:{NFSU2_TR(0x565f6f);
if(r1(R+518)){{goto L565f7f;}}
}
B565f71:L565f71:{c.instructions+=3;NFSU2_TR(0x565f71);
u8 U[4];
w4(U+0,u32(0x9120409eull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B565f76:{NFSU2_TR(0x565f76);
__builtin_memmove((R+4),(R+28),4);
}
B565f78:{NFSU2_TR(0x565f78);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x565f7dull));
TAIL_STATIC(0x53deb0u,53d);
}
B565f7d:L565f7d:{c.instructions+=1;NFSU2_TR(0x565f7d);
{goto L565fe4;}
}
B565f7f:L565f7f:{c.instructions+=3;NFSU2_TR(0x565f7f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B565f82:{NFSU2_TR(0x565f82);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B565f83:{NFSU2_TR(0x565f83);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x565f88ull));
TAIL_STATIC(0x52d100u,52d);
}
B565f88:L565f88:{c.instructions+=3;NFSU2_TR(0x565f88);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B565f8b:{NFSU2_TR(0x565f8b);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B565f8d:{NFSU2_TR(0x565f8d);
if(r1(R+518)){{goto L565f9d;}}
}
B565f8f:L565f8f:{c.instructions+=3;NFSU2_TR(0x565f8f);
u8 U[4];
w4(U+0,u32(0xb5971bf1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B565f94:{NFSU2_TR(0x565f94);
__builtin_memmove((R+4),(R+28),4);
}
B565f96:{NFSU2_TR(0x565f96);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x565f9bull));
TAIL_STATIC(0x53deb0u,53d);
}
B565f9b:L565f9b:{c.instructions+=1;NFSU2_TR(0x565f9b);
{goto L565fe4;}
}
B565f9d:L565f9d:{c.instructions+=5;NFSU2_TR(0x565f9d);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B565fa1:{NFSU2_TR(0x565fa1);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B565fa2:{NFSU2_TR(0x565fa2);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B565fa6:{NFSU2_TR(0x565fa6);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B565fa7:{NFSU2_TR(0x565fa7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x565facull));
TAIL_STATIC(0x50cdb0u,50c);
}
B565fac:L565fac:{c.instructions+=3;NFSU2_TR(0x565fac);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B565faf:{NFSU2_TR(0x565faf);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B565fb1:{NFSU2_TR(0x565fb1);
if(r1(R+518)){{goto L565fe4;}}
}
B565fb3:L565fb3:{c.instructions+=4;NFSU2_TR(0x565fb3);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B565fb6:{NFSU2_TR(0x565fb6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B565fb7:{NFSU2_TR(0x565fb7);
w4(R+4,u32(0x8637b0ull));
}
B565fbc:{NFSU2_TR(0x565fbc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x565fc1ull));
TAIL_STATIC(0x51bb70u,51b);
}
B565fc1:L565fc1:{c.instructions+=2;NFSU2_TR(0x565fc1);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B565fc3:{NFSU2_TR(0x565fc3);
if(r1(R+518)){{goto L565fe4;}}
}
B565fc5:L565fc5:{c.instructions+=3;NFSU2_TR(0x565fc5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B565fc8:{NFSU2_TR(0x565fc8);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B565fca:{NFSU2_TR(0x565fca);
if(r1(R+518)){{goto L565fe4;}}
}
B565fcc:L565fcc:{c.instructions+=3;NFSU2_TR(0x565fcc);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B565fcf:{NFSU2_TR(0x565fcf);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B565fd1:{NFSU2_TR(0x565fd1);
if(r1(R+518)){{goto L565fe4;}}
}
B565fd3:L565fd3:{c.instructions+=6;NFSU2_TR(0x565fd3);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B565fd4:{NFSU2_TR(0x565fd4);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B565fd6:{NFSU2_TR(0x565fd6);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B565fd8:{NFSU2_TR(0x565fd8);
u8 U[4];
w4(U+0,u32(0xc407210ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B565fdd:{NFSU2_TR(0x565fdd);
__builtin_memmove((R+4),(R+0),4);
}
B565fdf:{NFSU2_TR(0x565fdf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x565fe4ull));
TAIL_STATIC(0x55b5c0u,55b);
}
B565fe4:L565fe4:{c.instructions+=3;NFSU2_TR(0x565fe4);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B565fe7:{NFSU2_TR(0x565fe7);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B565fe9:{NFSU2_TR(0x565fe9);
if(r1(R+518)){{goto L565ff0;}}
}
B565feb:L565feb:{c.instructions+=2;NFSU2_TR(0x565feb);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
}
B565fee:{NFSU2_TR(0x565fee);
{goto L565ff2;}
}
B565ff0:L565ff0:{c.instructions+=1;NFSU2_TR(0x565ff0);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B565ff2:L565ff2:{c.instructions+=2;NFSU2_TR(0x565ff2);
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
B565ff4:{NFSU2_TR(0x565ff4);
if(r1(R+518)){TAIL_STATIC(0x56600cu,566);}
}
B565ff6:L565ff6:{c.instructions+=3;NFSU2_TR(0x565ff6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B565ff9:{NFSU2_TR(0x565ff9);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B565ffb:{NFSU2_TR(0x565ffb);
if(r1(R+518)){TAIL_STATIC(0x566005u,566);}
}
B565ffd:L565ffd:{c.instructions+=1;NFSU2_TR(0x565ffd);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0xfffffffcull))));
TAIL_STATIC(0x566000u,566);
}
XIT:NFSU2_TR_EXIT(0x565,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
