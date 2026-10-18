#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_401(u8* __restrict R,Cpu& c);
u32 body_43d(u8* __restrict R,Cpu& c);
u32 body_440(u8* __restrict R,Cpu& c);
u32 body_48b(u8* __restrict R,Cpu& c);
u32 body_48d(u8* __restrict R,Cpu& c);
u32 body_48f(u8* __restrict R,Cpu& c);
u32 body_490(u8* __restrict R,Cpu& c);
u32 body_599(u8* __restrict R,Cpu& c);
u32 body_5a6(u8* __restrict R,Cpu& c);
u32 body_5b4(u8* __restrict R,Cpu& c);
u32 body_5b5(u8* __restrict R,Cpu& c);
u32 body_61b(u8* __restrict R,Cpu& c);
u32 body_61f(u8* __restrict R,Cpu& c);
u32 body_637(u8* __restrict R,Cpu& c);
u32 body_63b(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x639,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x639,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_639(u8* __restrict R,Cpu& c);
u32 page_639(Cpu& c){return body_639(c.regs.data(),c);}
__attribute__((noinline)) u32 body_639(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x639000:goto L639000;
case 0x639002:c.instructions+=1;goto B639002;
case 0x639004:goto L639004;
case 0x639008:c.instructions+=2;goto B639008;
case 0x639009:c.instructions+=1;goto B639009;
case 0x63900e:goto L63900e;
case 0x639011:c.instructions+=1;goto B639011;
case 0x639013:goto L639013;
case 0x639017:c.instructions+=2;goto B639017;
case 0x639019:c.instructions+=1;goto B639019;
case 0x63901b:goto L63901b;
case 0x63901d:c.instructions+=1;goto B63901d;
case 0x63901f:goto L63901f;
case 0x639023:c.instructions+=2;goto B639023;
case 0x639024:c.instructions+=1;goto B639024;
case 0x639029:goto L639029;
case 0x63902c:c.instructions+=1;goto B63902c;
case 0x63902e:goto L63902e;
case 0x639032:c.instructions+=2;goto B639032;
case 0x639034:c.instructions+=1;goto B639034;
case 0x639036:goto L639036;
case 0x63903c:c.instructions+=1;goto B63903c;
case 0x63903e:goto L63903e;
case 0x639042:c.instructions+=2;goto B639042;
case 0x639043:c.instructions+=1;goto B639043;
case 0x639048:goto L639048;
case 0x63904b:goto L63904b;
case 0x63904f:c.instructions+=13;goto B63904f;
case 0x639053:c.instructions+=12;goto B639053;
case 0x639059:c.instructions+=11;goto B639059;
case 0x63905d:c.instructions+=10;goto B63905d;
case 0x639063:c.instructions+=9;goto B639063;
case 0x639067:c.instructions+=8;goto B639067;
case 0x63906d:c.instructions+=7;goto B63906d;
case 0x639073:c.instructions+=6;goto B639073;
case 0x639079:c.instructions+=5;goto B639079;
case 0x63907f:c.instructions+=4;goto B63907f;
case 0x639089:c.instructions+=3;goto B639089;
case 0x63908b:c.instructions+=2;goto B63908b;
case 0x639091:c.instructions+=1;goto B639091;
case 0x639096:goto L639096;
case 0x63909c:c.instructions+=3;goto B63909c;
case 0x63909e:c.instructions+=2;goto B63909e;
case 0x6390a4:c.instructions+=1;goto B6390a4;
case 0x6390a6:goto L6390a6;
case 0x6390ab:c.instructions+=1;goto B6390ab;
case 0x6390b0:goto L6390b0;
case 0x6390b3:c.instructions+=3;goto B6390b3;
case 0x6390b4:c.instructions+=2;goto B6390b4;
case 0x6390b6:c.instructions+=1;goto B6390b6;
case 0x6390bb:goto L6390bb;
case 0x6390bd:c.instructions+=1;goto B6390bd;
case 0x6390bf:goto L6390bf;
case 0x6390c1:goto L6390c1;
case 0x6390c3:c.instructions+=1;goto B6390c3;
case 0x6390c5:goto L6390c5;
case 0x6390ca:c.instructions+=1;goto B6390ca;
case 0x6390cf:goto L6390cf;
case 0x6390d2:c.instructions+=3;goto B6390d2;
case 0x6390d3:c.instructions+=2;goto B6390d3;
case 0x6390d5:c.instructions+=1;goto B6390d5;
case 0x6390da:goto L6390da;
case 0x6390dc:goto L6390dc;
case 0x6390de:goto L6390de;
case 0x6390e0:c.instructions+=1;goto B6390e0;
case 0x6390e2:goto L6390e2;
case 0x6390e5:c.instructions+=1;goto B6390e5;
case 0x6390e7:goto L6390e7;
case 0x6390ed:goto L6390ed;
case 0x6390ef:c.instructions+=2;goto B6390ef;
case 0x6390f5:c.instructions+=1;goto B6390f5;
case 0x6390f7:goto L6390f7;
case 0x6390fa:c.instructions+=1;goto B6390fa;
case 0x6390fc:goto L6390fc;
case 0x639102:goto L639102;
case 0x639108:c.instructions+=3;goto B639108;
case 0x63910d:c.instructions+=2;goto B63910d;
case 0x63910e:c.instructions+=1;goto B63910e;
case 0x639113:goto L639113;
case 0x639115:c.instructions+=3;goto B639115;
case 0x639118:c.instructions+=2;goto B639118;
case 0x63911a:c.instructions+=1;goto B63911a;
case 0x63911c:goto L63911c;
case 0x63911e:c.instructions+=19;goto B63911e;
case 0x639121:c.instructions+=18;goto B639121;
case 0x639123:c.instructions+=17;goto B639123;
case 0x639127:c.instructions+=16;goto B639127;
case 0x63912b:c.instructions+=15;goto B63912b;
case 0x63912d:c.instructions+=14;goto B63912d;
case 0x639130:c.instructions+=13;goto B639130;
case 0x639133:c.instructions+=12;goto B639133;
case 0x639135:c.instructions+=11;goto B639135;
case 0x639139:c.instructions+=10;goto B639139;
case 0x63913d:c.instructions+=9;goto B63913d;
case 0x63913f:c.instructions+=8;goto B63913f;
case 0x639142:c.instructions+=7;goto B639142;
case 0x639145:c.instructions+=6;goto B639145;
case 0x639147:c.instructions+=5;goto B639147;
case 0x63914b:c.instructions+=4;goto B63914b;
case 0x63914e:c.instructions+=3;goto B63914e;
case 0x639152:c.instructions+=2;goto B639152;
case 0x639155:c.instructions+=1;goto B639155;
case 0x639157:goto L639157;
case 0x639159:goto L639159;
case 0x63915f:c.instructions+=8;goto B63915f;
case 0x639165:c.instructions+=7;goto B639165;
case 0x639168:c.instructions+=6;goto B639168;
case 0x63916a:c.instructions+=5;goto B63916a;
case 0x63916c:c.instructions+=4;goto B63916c;
case 0x63916f:c.instructions+=3;goto B63916f;
case 0x639171:c.instructions+=2;goto B639171;
case 0x639174:c.instructions+=1;goto B639174;
case 0x639179:goto L639179;
case 0x63917b:c.instructions+=3;goto B63917b;
case 0x639180:c.instructions+=2;goto B639180;
case 0x639181:c.instructions+=1;goto B639181;
case 0x639186:goto L639186;
case 0x639189:c.instructions+=2;goto B639189;
case 0x63918b:c.instructions+=1;goto B63918b;
case 0x63918d:goto L63918d;
case 0x639190:c.instructions+=28;goto B639190;
case 0x639193:c.instructions+=27;goto B639193;
case 0x639199:c.instructions+=26;goto B639199;
case 0x63919c:c.instructions+=25;goto B63919c;
case 0x63919f:c.instructions+=24;goto B63919f;
case 0x6391a5:c.instructions+=23;goto B6391a5;
case 0x6391a8:c.instructions+=22;goto B6391a8;
case 0x6391ab:c.instructions+=21;goto B6391ab;
case 0x6391ae:c.instructions+=20;goto B6391ae;
case 0x6391b4:c.instructions+=19;goto B6391b4;
case 0x6391b8:c.instructions+=18;goto B6391b8;
case 0x6391bc:c.instructions+=17;goto B6391bc;
case 0x6391bf:c.instructions+=16;goto B6391bf;
case 0x6391c3:c.instructions+=15;goto B6391c3;
case 0x6391c7:c.instructions+=14;goto B6391c7;
case 0x6391c9:c.instructions+=13;goto B6391c9;
case 0x6391cd:c.instructions+=12;goto B6391cd;
case 0x6391d0:c.instructions+=11;goto B6391d0;
case 0x6391d4:c.instructions+=10;goto B6391d4;
case 0x6391d8:c.instructions+=9;goto B6391d8;
case 0x6391db:c.instructions+=8;goto B6391db;
case 0x6391dd:c.instructions+=7;goto B6391dd;
case 0x6391e1:c.instructions+=6;goto B6391e1;
case 0x6391e4:c.instructions+=5;goto B6391e4;
case 0x6391e7:c.instructions+=4;goto B6391e7;
case 0x6391e9:c.instructions+=3;goto B6391e9;
case 0x6391ed:c.instructions+=2;goto B6391ed;
case 0x6391f0:c.instructions+=1;goto B6391f0;
case 0x6391f2:goto L6391f2;
case 0x6391f4:goto L6391f4;
case 0x6391fa:c.instructions+=7;goto B6391fa;
case 0x639200:c.instructions+=6;goto B639200;
case 0x639203:c.instructions+=5;goto B639203;
case 0x639205:c.instructions+=4;goto B639205;
case 0x639207:c.instructions+=3;goto B639207;
case 0x63920c:c.instructions+=2;goto B63920c;
case 0x63920d:c.instructions+=1;goto B63920d;
case 0x639212:goto L639212;
case 0x639215:c.instructions+=2;goto B639215;
case 0x639217:c.instructions+=1;goto B639217;
case 0x639219:goto L639219;
case 0x63921f:c.instructions+=28;goto B63921f;
case 0x639222:c.instructions+=27;goto B639222;
case 0x639228:c.instructions+=26;goto B639228;
case 0x63922e:c.instructions+=25;goto B63922e;
case 0x639231:c.instructions+=24;goto B639231;
case 0x639237:c.instructions+=23;goto B639237;
case 0x63923d:c.instructions+=22;goto B63923d;
case 0x639240:c.instructions+=21;goto B639240;
case 0x639243:c.instructions+=20;goto B639243;
case 0x639249:c.instructions+=19;goto B639249;
case 0x63924d:c.instructions+=18;goto B63924d;
case 0x639251:c.instructions+=17;goto B639251;
case 0x639254:c.instructions+=16;goto B639254;
case 0x639258:c.instructions+=15;goto B639258;
case 0x63925c:c.instructions+=14;goto B63925c;
case 0x63925e:c.instructions+=13;goto B63925e;
case 0x639262:c.instructions+=12;goto B639262;
case 0x639265:c.instructions+=11;goto B639265;
case 0x639269:c.instructions+=10;goto B639269;
case 0x63926d:c.instructions+=9;goto B63926d;
case 0x639270:c.instructions+=8;goto B639270;
case 0x639272:c.instructions+=7;goto B639272;
case 0x639276:c.instructions+=6;goto B639276;
case 0x639279:c.instructions+=5;goto B639279;
case 0x63927c:c.instructions+=4;goto B63927c;
case 0x63927e:c.instructions+=3;goto B63927e;
case 0x639282:c.instructions+=2;goto B639282;
case 0x639285:c.instructions+=1;goto B639285;
case 0x639287:goto L639287;
case 0x639289:goto L639289;
case 0x63928f:c.instructions+=7;goto B63928f;
case 0x639295:c.instructions+=6;goto B639295;
case 0x639298:c.instructions+=5;goto B639298;
case 0x63929a:c.instructions+=4;goto B63929a;
case 0x63929c:c.instructions+=3;goto B63929c;
case 0x6392a1:c.instructions+=2;goto B6392a1;
case 0x6392a2:c.instructions+=1;goto B6392a2;
case 0x6392a7:goto L6392a7;
case 0x6392aa:c.instructions+=2;goto B6392aa;
case 0x6392ac:c.instructions+=1;goto B6392ac;
case 0x6392ae:goto L6392ae;
case 0x6392b4:c.instructions+=28;goto B6392b4;
case 0x6392b7:c.instructions+=27;goto B6392b7;
case 0x6392bd:c.instructions+=26;goto B6392bd;
case 0x6392c3:c.instructions+=25;goto B6392c3;
case 0x6392c6:c.instructions+=24;goto B6392c6;
case 0x6392cc:c.instructions+=23;goto B6392cc;
case 0x6392cf:c.instructions+=22;goto B6392cf;
case 0x6392d5:c.instructions+=21;goto B6392d5;
case 0x6392d8:c.instructions+=20;goto B6392d8;
case 0x6392de:c.instructions+=19;goto B6392de;
case 0x6392e2:c.instructions+=18;goto B6392e2;
case 0x6392e6:c.instructions+=17;goto B6392e6;
case 0x6392e9:c.instructions+=16;goto B6392e9;
case 0x6392ed:c.instructions+=15;goto B6392ed;
case 0x6392f1:c.instructions+=14;goto B6392f1;
case 0x6392f3:c.instructions+=13;goto B6392f3;
case 0x6392f7:c.instructions+=12;goto B6392f7;
case 0x6392fa:c.instructions+=11;goto B6392fa;
case 0x6392fe:c.instructions+=10;goto B6392fe;
case 0x639302:c.instructions+=9;goto B639302;
case 0x639305:c.instructions+=8;goto B639305;
case 0x639307:c.instructions+=7;goto B639307;
case 0x63930b:c.instructions+=6;goto B63930b;
case 0x63930e:c.instructions+=5;goto B63930e;
case 0x639311:c.instructions+=4;goto B639311;
case 0x639313:c.instructions+=3;goto B639313;
case 0x639317:c.instructions+=2;goto B639317;
case 0x63931a:c.instructions+=1;goto B63931a;
case 0x63931c:goto L63931c;
case 0x63931e:goto L63931e;
case 0x639324:c.instructions+=7;goto B639324;
case 0x63932a:c.instructions+=6;goto B63932a;
case 0x63932d:c.instructions+=5;goto B63932d;
case 0x63932f:c.instructions+=4;goto B63932f;
case 0x639331:c.instructions+=3;goto B639331;
case 0x639336:c.instructions+=2;goto B639336;
case 0x639337:c.instructions+=1;goto B639337;
case 0x63933c:goto L63933c;
case 0x63933f:c.instructions+=2;goto B63933f;
case 0x639341:c.instructions+=1;goto B639341;
case 0x639343:goto L639343;
case 0x639346:c.instructions+=28;goto B639346;
case 0x639349:c.instructions+=27;goto B639349;
case 0x63934f:c.instructions+=26;goto B63934f;
case 0x639352:c.instructions+=25;goto B639352;
case 0x639355:c.instructions+=24;goto B639355;
case 0x63935b:c.instructions+=23;goto B63935b;
case 0x63935e:c.instructions+=22;goto B63935e;
case 0x639361:c.instructions+=21;goto B639361;
case 0x639364:c.instructions+=20;goto B639364;
case 0x63936a:c.instructions+=19;goto B63936a;
case 0x63936e:c.instructions+=18;goto B63936e;
case 0x639372:c.instructions+=17;goto B639372;
case 0x639375:c.instructions+=16;goto B639375;
case 0x639379:c.instructions+=15;goto B639379;
case 0x63937d:c.instructions+=14;goto B63937d;
case 0x63937f:c.instructions+=13;goto B63937f;
case 0x639383:c.instructions+=12;goto B639383;
case 0x639386:c.instructions+=11;goto B639386;
case 0x63938a:c.instructions+=10;goto B63938a;
case 0x63938e:c.instructions+=9;goto B63938e;
case 0x639391:c.instructions+=8;goto B639391;
case 0x639393:c.instructions+=7;goto B639393;
case 0x639397:c.instructions+=6;goto B639397;
case 0x63939a:c.instructions+=5;goto B63939a;
case 0x63939d:c.instructions+=4;goto B63939d;
case 0x63939f:c.instructions+=3;goto B63939f;
case 0x6393a3:c.instructions+=2;goto B6393a3;
case 0x6393a6:c.instructions+=1;goto B6393a6;
case 0x6393a8:goto L6393a8;
case 0x6393aa:goto L6393aa;
case 0x6393b0:c.instructions+=7;goto B6393b0;
case 0x6393b6:c.instructions+=6;goto B6393b6;
case 0x6393b9:c.instructions+=5;goto B6393b9;
case 0x6393bb:c.instructions+=4;goto B6393bb;
case 0x6393bd:c.instructions+=3;goto B6393bd;
case 0x6393c2:c.instructions+=2;goto B6393c2;
case 0x6393c3:c.instructions+=1;goto B6393c3;
case 0x6393c8:goto L6393c8;
case 0x6393cb:c.instructions+=2;goto B6393cb;
case 0x6393cd:c.instructions+=1;goto B6393cd;
case 0x6393cf:goto L6393cf;
case 0x6393d2:c.instructions+=22;goto B6393d2;
case 0x6393d5:c.instructions+=21;goto B6393d5;
case 0x6393d8:c.instructions+=20;goto B6393d8;
case 0x6393db:c.instructions+=19;goto B6393db;
case 0x6393df:c.instructions+=18;goto B6393df;
case 0x6393e3:c.instructions+=17;goto B6393e3;
case 0x6393e6:c.instructions+=16;goto B6393e6;
case 0x6393ea:c.instructions+=15;goto B6393ea;
case 0x6393ee:c.instructions+=14;goto B6393ee;
case 0x6393f0:c.instructions+=13;goto B6393f0;
case 0x6393f4:c.instructions+=12;goto B6393f4;
case 0x6393f7:c.instructions+=11;goto B6393f7;
case 0x6393fb:c.instructions+=10;goto B6393fb;
case 0x6393ff:c.instructions+=9;goto B6393ff;
case 0x639402:c.instructions+=8;goto B639402;
case 0x639404:c.instructions+=7;goto B639404;
case 0x639408:c.instructions+=6;goto B639408;
case 0x63940b:c.instructions+=5;goto B63940b;
case 0x63940e:c.instructions+=4;goto B63940e;
case 0x639410:c.instructions+=3;goto B639410;
case 0x639414:c.instructions+=2;goto B639414;
case 0x639417:c.instructions+=1;goto B639417;
case 0x639419:goto L639419;
case 0x63941b:goto L63941b;
case 0x639421:c.instructions+=7;goto B639421;
case 0x639427:c.instructions+=6;goto B639427;
case 0x63942a:c.instructions+=5;goto B63942a;
case 0x63942c:c.instructions+=4;goto B63942c;
case 0x63942e:c.instructions+=3;goto B63942e;
case 0x639433:c.instructions+=2;goto B639433;
case 0x639434:c.instructions+=1;goto B639434;
case 0x639439:goto L639439;
case 0x63943c:c.instructions+=2;goto B63943c;
case 0x63943e:c.instructions+=1;goto B63943e;
case 0x639440:goto L639440;
case 0x639443:c.instructions+=22;goto B639443;
case 0x639446:c.instructions+=21;goto B639446;
case 0x639449:c.instructions+=20;goto B639449;
case 0x63944c:c.instructions+=19;goto B63944c;
case 0x639450:c.instructions+=18;goto B639450;
case 0x639454:c.instructions+=17;goto B639454;
case 0x639457:c.instructions+=16;goto B639457;
case 0x63945b:c.instructions+=15;goto B63945b;
case 0x63945f:c.instructions+=14;goto B63945f;
case 0x639461:c.instructions+=13;goto B639461;
case 0x639465:c.instructions+=12;goto B639465;
case 0x639468:c.instructions+=11;goto B639468;
case 0x63946c:c.instructions+=10;goto B63946c;
case 0x639470:c.instructions+=9;goto B639470;
case 0x639473:c.instructions+=8;goto B639473;
case 0x639475:c.instructions+=7;goto B639475;
case 0x639479:c.instructions+=6;goto B639479;
case 0x63947c:c.instructions+=5;goto B63947c;
case 0x63947f:c.instructions+=4;goto B63947f;
case 0x639481:c.instructions+=3;goto B639481;
case 0x639485:c.instructions+=2;goto B639485;
case 0x639488:c.instructions+=1;goto B639488;
case 0x63948a:goto L63948a;
case 0x63948c:goto L63948c;
case 0x639492:c.instructions+=7;goto B639492;
case 0x639498:c.instructions+=6;goto B639498;
case 0x63949b:c.instructions+=5;goto B63949b;
case 0x63949d:c.instructions+=4;goto B63949d;
case 0x63949f:c.instructions+=3;goto B63949f;
case 0x6394a4:c.instructions+=2;goto B6394a4;
case 0x6394a5:c.instructions+=1;goto B6394a5;
case 0x6394aa:goto L6394aa;
case 0x6394ad:c.instructions+=2;goto B6394ad;
case 0x6394af:c.instructions+=1;goto B6394af;
case 0x6394b1:goto L6394b1;
case 0x6394b4:c.instructions+=22;goto B6394b4;
case 0x6394b7:c.instructions+=21;goto B6394b7;
case 0x6394ba:c.instructions+=20;goto B6394ba;
case 0x6394bd:c.instructions+=19;goto B6394bd;
case 0x6394c1:c.instructions+=18;goto B6394c1;
case 0x6394c5:c.instructions+=17;goto B6394c5;
case 0x6394c8:c.instructions+=16;goto B6394c8;
case 0x6394cc:c.instructions+=15;goto B6394cc;
case 0x6394d0:c.instructions+=14;goto B6394d0;
case 0x6394d2:c.instructions+=13;goto B6394d2;
case 0x6394d6:c.instructions+=12;goto B6394d6;
case 0x6394d9:c.instructions+=11;goto B6394d9;
case 0x6394dd:c.instructions+=10;goto B6394dd;
case 0x6394e1:c.instructions+=9;goto B6394e1;
case 0x6394e4:c.instructions+=8;goto B6394e4;
case 0x6394e6:c.instructions+=7;goto B6394e6;
case 0x6394ea:c.instructions+=6;goto B6394ea;
case 0x6394ed:c.instructions+=5;goto B6394ed;
case 0x6394f0:c.instructions+=4;goto B6394f0;
case 0x6394f2:c.instructions+=3;goto B6394f2;
case 0x6394f6:c.instructions+=2;goto B6394f6;
case 0x6394f9:c.instructions+=1;goto B6394f9;
case 0x6394fb:goto L6394fb;
case 0x6394fd:goto L6394fd;
case 0x639503:c.instructions+=7;goto B639503;
case 0x639509:c.instructions+=6;goto B639509;
case 0x63950c:c.instructions+=5;goto B63950c;
case 0x63950e:c.instructions+=4;goto B63950e;
case 0x639510:c.instructions+=3;goto B639510;
case 0x639515:c.instructions+=2;goto B639515;
case 0x639516:c.instructions+=1;goto B639516;
case 0x63951b:goto L63951b;
case 0x63951e:c.instructions+=2;goto B63951e;
case 0x639520:c.instructions+=1;goto B639520;
case 0x639522:goto L639522;
case 0x639528:c.instructions+=22;goto B639528;
case 0x63952e:c.instructions+=21;goto B63952e;
case 0x639534:c.instructions+=20;goto B639534;
case 0x639537:c.instructions+=19;goto B639537;
case 0x63953b:c.instructions+=18;goto B63953b;
case 0x63953f:c.instructions+=17;goto B63953f;
case 0x639542:c.instructions+=16;goto B639542;
case 0x639546:c.instructions+=15;goto B639546;
case 0x63954a:c.instructions+=14;goto B63954a;
case 0x63954c:c.instructions+=13;goto B63954c;
case 0x639550:c.instructions+=12;goto B639550;
case 0x639553:c.instructions+=11;goto B639553;
case 0x639557:c.instructions+=10;goto B639557;
case 0x63955b:c.instructions+=9;goto B63955b;
case 0x63955e:c.instructions+=8;goto B63955e;
case 0x639560:c.instructions+=7;goto B639560;
case 0x639564:c.instructions+=6;goto B639564;
case 0x639567:c.instructions+=5;goto B639567;
case 0x63956a:c.instructions+=4;goto B63956a;
case 0x63956c:c.instructions+=3;goto B63956c;
case 0x639570:c.instructions+=2;goto B639570;
case 0x639573:c.instructions+=1;goto B639573;
case 0x639575:goto L639575;
case 0x639577:goto L639577;
case 0x63957d:c.instructions+=8;goto B63957d;
case 0x639583:c.instructions+=7;goto B639583;
case 0x639586:c.instructions+=6;goto B639586;
case 0x639588:c.instructions+=5;goto B639588;
case 0x63958a:c.instructions+=4;goto B63958a;
case 0x639590:c.instructions+=3;goto B639590;
case 0x639594:c.instructions+=2;goto B639594;
case 0x639598:c.instructions+=1;goto B639598;
case 0x6395a0:goto L6395a0;
case 0x6395a3:c.instructions+=4;goto B6395a3;
case 0x6395a7:c.instructions+=3;goto B6395a7;
case 0x6395ae:c.instructions+=2;goto B6395ae;
case 0x6395b0:c.instructions+=1;goto B6395b0;
case 0x6395b6:goto L6395b6;
case 0x6395ba:c.instructions+=4;goto B6395ba;
case 0x6395bc:c.instructions+=3;goto B6395bc;
case 0x6395be:c.instructions+=2;goto B6395be;
case 0x6395c2:c.instructions+=1;goto B6395c2;
case 0x6395c8:goto L6395c8;
case 0x6395ca:c.instructions+=2;goto B6395ca;
case 0x6395cc:c.instructions+=1;goto B6395cc;
case 0x6395d1:goto L6395d1;
case 0x6395d3:c.instructions+=2;goto B6395d3;
case 0x6395d5:c.instructions+=1;goto B6395d5;
case 0x6395db:goto L6395db;
case 0x6395e0:goto L6395e0;
case 0x6395e2:c.instructions+=3;goto B6395e2;
case 0x6395e7:c.instructions+=2;goto B6395e7;
case 0x6395ef:c.instructions+=1;goto B6395ef;
case 0x6395f5:goto L6395f5;
case 0x6395fb:goto L6395fb;
case 0x639600:c.instructions+=1;goto B639600;
case 0x639606:goto L639606;
case 0x63960c:goto L63960c;
case 0x639611:c.instructions+=1;goto B639611;
case 0x639613:goto L639613;
case 0x639615:goto L639615;
case 0x63961a:c.instructions+=1;goto B63961a;
case 0x63961c:goto L63961c;
case 0x63961e:goto L63961e;
case 0x639623:c.instructions+=1;goto B639623;
case 0x639629:goto L639629;
case 0x63962e:c.instructions+=1;goto B63962e;
case 0x639634:goto L639634;
case 0x63963a:c.instructions+=1;goto B63963a;
case 0x63963f:goto L63963f;
case 0x639644:c.instructions+=1;goto B639644;
case 0x63964a:goto L63964a;
case 0x639650:c.instructions+=1;goto B639650;
case 0x639655:goto L639655;
case 0x63965a:c.instructions+=1;goto B63965a;
case 0x63965c:goto L63965c;
case 0x639662:goto L639662;
case 0x639667:c.instructions+=1;goto B639667;
case 0x639669:goto L639669;
case 0x63966e:c.instructions+=1;goto B63966e;
case 0x639674:goto L639674;
case 0x639679:goto L639679;
case 0x63967f:c.instructions+=1;goto B63967f;
case 0x639684:goto L639684;
case 0x639689:c.instructions+=1;goto B639689;
case 0x63968f:goto L63968f;
case 0x639695:c.instructions+=1;goto B639695;
case 0x63969a:goto L63969a;
case 0x63969f:c.instructions+=1;goto B63969f;
case 0x6396a1:goto L6396a1;
case 0x6396a3:goto L6396a3;
case 0x6396a8:c.instructions+=1;goto B6396a8;
case 0x6396aa:goto L6396aa;
case 0x6396ac:goto L6396ac;
case 0x6396b1:c.instructions+=1;goto B6396b1;
case 0x6396b7:goto L6396b7;
case 0x6396bc:c.instructions+=1;goto B6396bc;
case 0x6396c2:goto L6396c2;
case 0x6396c8:c.instructions+=1;goto B6396c8;
case 0x6396cd:goto L6396cd;
case 0x6396d2:c.instructions+=1;goto B6396d2;
case 0x6396d8:goto L6396d8;
case 0x6396de:c.instructions+=1;goto B6396de;
case 0x6396e3:goto L6396e3;
case 0x6396e9:c.instructions+=1;goto B6396e9;
case 0x6396ee:goto L6396ee;
case 0x6396f3:c.instructions+=1;goto B6396f3;
case 0x6396f5:goto L6396f5;
case 0x6396fa:c.instructions+=1;goto B6396fa;
case 0x639700:goto L639700;
case 0x639705:c.instructions+=1;goto B639705;
case 0x63970b:goto L63970b;
case 0x639711:c.instructions+=1;goto B639711;
case 0x639716:goto L639716;
case 0x63971b:c.instructions+=1;goto B63971b;
case 0x639721:goto L639721;
case 0x639727:goto L639727;
case 0x63972c:c.instructions+=1;goto B63972c;
case 0x63972e:goto L63972e;
case 0x639730:goto L639730;
case 0x639735:c.instructions+=1;goto B639735;
case 0x639737:goto L639737;
case 0x63973d:goto L63973d;
case 0x639742:c.instructions+=1;goto B639742;
case 0x639748:goto L639748;
case 0x63974d:c.instructions+=1;goto B63974d;
case 0x639753:goto L639753;
case 0x639759:c.instructions+=3;goto B639759;
case 0x63975f:c.instructions+=2;goto B63975f;
case 0x639763:c.instructions+=1;goto B639763;
case 0x639768:goto L639768;
case 0x63976d:c.instructions+=1;goto B63976d;
case 0x639773:goto L639773;
case 0x639779:c.instructions+=3;goto B639779;
case 0x63977f:c.instructions+=2;goto B63977f;
case 0x639783:c.instructions+=1;goto B639783;
case 0x639788:goto L639788;
case 0x63978e:c.instructions+=1;goto B63978e;
case 0x639793:goto L639793;
case 0x639798:c.instructions+=1;goto B639798;
case 0x63979e:goto L63979e;
case 0x6397a3:c.instructions+=1;goto B6397a3;
case 0x6397a9:goto L6397a9;
case 0x6397ae:c.instructions+=1;goto B6397ae;
case 0x6397b4:goto L6397b4;
case 0x6397ba:c.instructions+=3;goto B6397ba;
case 0x6397c0:c.instructions+=2;goto B6397c0;
case 0x6397c4:c.instructions+=1;goto B6397c4;
case 0x6397c9:goto L6397c9;
case 0x6397ce:c.instructions+=1;goto B6397ce;
case 0x6397d0:goto L6397d0;
case 0x6397d2:goto L6397d2;
case 0x6397d7:c.instructions+=1;goto B6397d7;
case 0x6397d9:goto L6397d9;
case 0x6397df:goto L6397df;
case 0x6397e4:c.instructions+=1;goto B6397e4;
case 0x6397ea:goto L6397ea;
case 0x6397ef:c.instructions+=1;goto B6397ef;
case 0x6397f5:goto L6397f5;
case 0x6397fb:c.instructions+=1;goto B6397fb;
case 0x6397fd:goto L6397fd;
case 0x639802:c.instructions+=1;goto B639802;
case 0x639808:goto L639808;
case 0x63980e:c.instructions+=3;goto B63980e;
case 0x639814:c.instructions+=2;goto B639814;
case 0x639818:c.instructions+=1;goto B639818;
case 0x63981a:goto L63981a;
case 0x63981f:c.instructions+=1;goto B63981f;
case 0x639821:goto L639821;
case 0x639826:c.instructions+=1;goto B639826;
case 0x639828:goto L639828;
case 0x63982d:c.instructions+=1;goto B63982d;
case 0x639833:goto L639833;
case 0x639839:c.instructions+=1;goto B639839;
case 0x63983b:goto L63983b;
case 0x639841:c.instructions+=1;goto B639841;
case 0x639843:goto L639843;
case 0x639849:goto L639849;
case 0x63984b:c.instructions+=1;goto B63984b;
case 0x63984d:goto L63984d;
case 0x639853:c.instructions+=2;goto B639853;
case 0x639854:c.instructions+=1;goto B639854;
case 0x639859:goto L639859;
case 0x63985c:c.instructions+=2;goto B63985c;
case 0x63985e:c.instructions+=1;goto B63985e;
case 0x639860:goto L639860;
case 0x639863:c.instructions+=22;goto B639863;
case 0x639866:c.instructions+=21;goto B639866;
case 0x639869:c.instructions+=20;goto B639869;
case 0x63986c:c.instructions+=19;goto B63986c;
case 0x63986f:c.instructions+=18;goto B63986f;
case 0x639872:c.instructions+=17;goto B639872;
case 0x639875:c.instructions+=16;goto B639875;
case 0x639878:c.instructions+=15;goto B639878;
case 0x63987a:c.instructions+=14;goto B63987a;
case 0x63987d:c.instructions+=13;goto B63987d;
case 0x639881:c.instructions+=12;goto B639881;
case 0x639884:c.instructions+=11;goto B639884;
case 0x639887:c.instructions+=10;goto B639887;
case 0x639889:c.instructions+=9;goto B639889;
case 0x63988c:c.instructions+=8;goto B63988c;
case 0x639890:c.instructions+=7;goto B639890;
case 0x639893:c.instructions+=6;goto B639893;
case 0x639896:c.instructions+=5;goto B639896;
case 0x639898:c.instructions+=4;goto B639898;
case 0x63989b:c.instructions+=3;goto B63989b;
case 0x63989f:c.instructions+=2;goto B63989f;
case 0x6398a2:c.instructions+=1;goto B6398a2;
case 0x6398a4:goto L6398a4;
case 0x6398a6:goto L6398a6;
case 0x6398a9:c.instructions+=3;goto B6398a9;
case 0x6398ac:c.instructions+=2;goto B6398ac;
case 0x6398ae:c.instructions+=1;goto B6398ae;
case 0x6398b0:goto L6398b0;
case 0x6398b4:c.instructions+=2;goto B6398b4;
case 0x6398b6:c.instructions+=1;goto B6398b6;
case 0x6398b8:goto L6398b8;
case 0x6398bd:c.instructions+=2;goto B6398bd;
case 0x6398be:c.instructions+=1;goto B6398be;
case 0x6398c3:goto L6398c3;
case 0x6398c6:c.instructions+=2;goto B6398c6;
case 0x6398c8:c.instructions+=1;goto B6398c8;
case 0x6398ca:goto L6398ca;
case 0x6398cd:c.instructions+=22;goto B6398cd;
case 0x6398d0:c.instructions+=21;goto B6398d0;
case 0x6398d3:c.instructions+=20;goto B6398d3;
case 0x6398d6:c.instructions+=19;goto B6398d6;
case 0x6398d9:c.instructions+=18;goto B6398d9;
case 0x6398dc:c.instructions+=17;goto B6398dc;
case 0x6398df:c.instructions+=16;goto B6398df;
case 0x6398e2:c.instructions+=15;goto B6398e2;
case 0x6398e4:c.instructions+=14;goto B6398e4;
case 0x6398e7:c.instructions+=13;goto B6398e7;
case 0x6398eb:c.instructions+=12;goto B6398eb;
case 0x6398ee:c.instructions+=11;goto B6398ee;
case 0x6398f1:c.instructions+=10;goto B6398f1;
case 0x6398f3:c.instructions+=9;goto B6398f3;
case 0x6398f6:c.instructions+=8;goto B6398f6;
case 0x6398fa:c.instructions+=7;goto B6398fa;
case 0x6398fd:c.instructions+=6;goto B6398fd;
case 0x639900:c.instructions+=5;goto B639900;
case 0x639902:c.instructions+=4;goto B639902;
case 0x639905:c.instructions+=3;goto B639905;
case 0x639909:c.instructions+=2;goto B639909;
case 0x63990c:c.instructions+=1;goto B63990c;
case 0x63990e:goto L63990e;
case 0x639910:goto L639910;
case 0x639914:c.instructions+=4;goto B639914;
case 0x639917:c.instructions+=3;goto B639917;
case 0x63991a:c.instructions+=2;goto B63991a;
case 0x63991c:c.instructions+=1;goto B63991c;
case 0x63991e:goto L63991e;
case 0x639922:c.instructions+=2;goto B639922;
case 0x639923:c.instructions+=1;goto B639923;
case 0x639928:goto L639928;
case 0x63992a:c.instructions+=2;goto B63992a;
case 0x63992c:c.instructions+=1;goto B63992c;
case 0x639932:goto L639932;
case 0x639936:c.instructions+=7;goto B639936;
case 0x63993a:c.instructions+=6;goto B63993a;
case 0x63993b:c.instructions+=5;goto B63993b;
case 0x63993e:c.instructions+=4;goto B63993e;
case 0x639941:c.instructions+=3;goto B639941;
case 0x639945:c.instructions+=2;goto B639945;
case 0x639949:c.instructions+=1;goto B639949;
case 0x63994f:goto L63994f;
case 0x639953:c.instructions+=2;goto B639953;
case 0x639955:c.instructions+=1;goto B639955;
case 0x639957:goto L639957;
case 0x63995c:c.instructions+=1;goto B63995c;
case 0x639962:goto L639962;
case 0x639968:c.instructions+=1;goto B639968;
case 0x63996a:goto L63996a;
case 0x63996c:c.instructions+=3;goto B63996c;
case 0x63996d:c.instructions+=2;goto B63996d;
case 0x63996e:c.instructions+=1;goto B63996e;
case 0x639973:goto L639973;
case 0x639976:goto L639976;
case 0x639979:c.instructions+=3;goto B639979;
case 0x63997c:c.instructions+=2;goto B63997c;
case 0x639982:c.instructions+=1;goto B639982;
case 0x639984:goto L639984;
case 0x63998b:c.instructions+=8;goto B63998b;
case 0x63998c:c.instructions+=7;goto B63998c;
case 0x63998e:c.instructions+=6;goto B63998e;
case 0x63998f:c.instructions+=5;goto B63998f;
case 0x639996:c.instructions+=4;goto B639996;
case 0x639997:c.instructions+=3;goto B639997;
case 0x639999:c.instructions+=2;goto B639999;
case 0x63999a:c.instructions+=1;goto B63999a;
case 0x6399d0:goto L6399d0;
case 0x6399d4:c.instructions+=7;goto B6399d4;
case 0x6399d7:c.instructions+=6;goto B6399d7;
case 0x6399d9:c.instructions+=5;goto B6399d9;
case 0x6399da:c.instructions+=4;goto B6399da;
case 0x6399db:c.instructions+=3;goto B6399db;
case 0x6399dc:c.instructions+=2;goto B6399dc;
case 0x6399de:c.instructions+=1;goto B6399de;
case 0x6399e4:goto L6399e4;
case 0x6399ea:c.instructions+=3;goto B6399ea;
case 0x6399ec:c.instructions+=2;goto B6399ec;
case 0x6399ee:c.instructions+=1;goto B6399ee;
case 0x6399f3:goto L6399f3;
case 0x6399f7:c.instructions+=3;goto B6399f7;
case 0x6399f9:c.instructions+=2;goto B6399f9;
case 0x6399fb:c.instructions+=1;goto B6399fb;
case 0x639a00:goto L639a00;
case 0x639a04:c.instructions+=4;goto B639a04;
case 0x639a06:c.instructions+=3;goto B639a06;
case 0x639a08:c.instructions+=2;goto B639a08;
case 0x639a0c:c.instructions+=1;goto B639a0c;
case 0x639a11:goto L639a11;
case 0x639a15:c.instructions+=8;goto B639a15;
case 0x639a1d:c.instructions+=7;goto B639a1d;
case 0x639a23:c.instructions+=6;goto B639a23;
case 0x639a27:c.instructions+=5;goto B639a27;
case 0x639a2b:c.instructions+=4;goto B639a2b;
case 0x639a31:c.instructions+=3;goto B639a31;
case 0x639a33:c.instructions+=2;goto B639a33;
case 0x639a36:c.instructions+=1;goto B639a36;
case 0x639a38:goto L639a38;
case 0x639a3c:c.instructions+=5;goto B639a3c;
case 0x639a42:c.instructions+=4;goto B639a42;
case 0x639a46:c.instructions+=3;goto B639a46;
case 0x639a48:c.instructions+=2;goto B639a48;
case 0x639a4b:c.instructions+=1;goto B639a4b;
case 0x639a4d:goto L639a4d;
case 0x639a4f:c.instructions+=2;goto B639a4f;
case 0x639a57:c.instructions+=1;goto B639a57;
case 0x639a59:goto L639a59;
case 0x639a5f:goto L639a5f;
case 0x639a63:goto L639a63;
case 0x639a67:c.instructions+=6;goto B639a67;
case 0x639a69:c.instructions+=5;goto B639a69;
case 0x639a6d:c.instructions+=4;goto B639a6d;
case 0x639a6e:c.instructions+=3;goto B639a6e;
case 0x639a6f:c.instructions+=2;goto B639a6f;
case 0x639a71:c.instructions+=1;goto B639a71;
case 0x639a76:goto L639a76;
case 0x639a78:c.instructions+=3;goto B639a78;
case 0x639a7c:c.instructions+=2;goto B639a7c;
case 0x639a7e:c.instructions+=1;goto B639a7e;
case 0x639a84:goto L639a84;
case 0x639a86:c.instructions+=2;goto B639a86;
case 0x639a88:c.instructions+=1;goto B639a88;
case 0x639a8d:goto L639a8d;
case 0x639a92:goto L639a92;
case 0x639a97:c.instructions+=2;goto B639a97;
case 0x639a99:c.instructions+=1;goto B639a99;
case 0x639a9f:goto L639a9f;
case 0x639aa5:c.instructions+=18;goto B639aa5;
case 0x639aa7:c.instructions+=17;goto B639aa7;
case 0x639aaf:c.instructions+=16;goto B639aaf;
case 0x639ab7:c.instructions+=15;goto B639ab7;
case 0x639abf:c.instructions+=14;goto B639abf;
case 0x639ac7:c.instructions+=13;goto B639ac7;
case 0x639acf:c.instructions+=12;goto B639acf;
case 0x639ad7:c.instructions+=11;goto B639ad7;
case 0x639adf:c.instructions+=10;goto B639adf;
case 0x639ae7:c.instructions+=9;goto B639ae7;
case 0x639aef:c.instructions+=8;goto B639aef;
case 0x639af7:c.instructions+=7;goto B639af7;
case 0x639aff:c.instructions+=6;goto B639aff;
case 0x639b07:c.instructions+=5;goto B639b07;
case 0x639b0f:c.instructions+=4;goto B639b0f;
case 0x639b17:c.instructions+=3;goto B639b17;
case 0x639b1f:c.instructions+=2;goto B639b1f;
case 0x639b27:c.instructions+=1;goto B639b27;
case 0x639b29:goto L639b29;
case 0x639b2c:c.instructions+=3;goto B639b2c;
case 0x639b2f:c.instructions+=2;goto B639b2f;
case 0x639b31:c.instructions+=1;goto B639b31;
case 0x639b33:goto L639b33;
case 0x639b35:c.instructions+=3;goto B639b35;
case 0x639b37:c.instructions+=2;goto B639b37;
case 0x639b3d:c.instructions+=1;goto B639b3d;
case 0x639b42:goto L639b42;
case 0x639b44:goto L639b44;
case 0x639b46:c.instructions+=2;goto B639b46;
case 0x639b4c:c.instructions+=1;goto B639b4c;
case 0x639b51:goto L639b51;
case 0x639b53:c.instructions+=2;goto B639b53;
case 0x639b57:c.instructions+=1;goto B639b57;
case 0x639b60:goto L639b60;
case 0x639b62:c.instructions+=3;goto B639b62;
case 0x639b69:c.instructions+=2;goto B639b69;
case 0x639b6b:c.instructions+=1;goto B639b6b;
case 0x639b6d:goto L639b6d;
case 0x639b70:c.instructions+=4;goto B639b70;
case 0x639b73:c.instructions+=3;goto B639b73;
case 0x639b76:c.instructions+=2;goto B639b76;
case 0x639b78:c.instructions+=1;goto B639b78;
case 0x639b7e:goto L639b7e;
case 0x639b80:goto L639b80;
case 0x639b82:c.instructions+=1;goto B639b82;
case 0x639b84:goto L639b84;
case 0x639b86:c.instructions+=6;goto B639b86;
case 0x639b89:c.instructions+=5;goto B639b89;
case 0x639b8d:c.instructions+=4;goto B639b8d;
case 0x639b8f:c.instructions+=3;goto B639b8f;
case 0x639b90:c.instructions+=2;goto B639b90;
case 0x639b92:c.instructions+=1;goto B639b92;
case 0x639b97:goto L639b97;
case 0x639b99:c.instructions+=1;goto B639b99;
case 0x639b9e:goto L639b9e;
case 0x639ba1:c.instructions+=3;goto B639ba1;
case 0x639ba4:c.instructions+=2;goto B639ba4;
case 0x639ba7:c.instructions+=1;goto B639ba7;
case 0x639ba9:goto L639ba9;
case 0x639bab:c.instructions+=4;goto B639bab;
case 0x639bb1:c.instructions+=3;goto B639bb1;
case 0x639bb3:c.instructions+=2;goto B639bb3;
case 0x639bb5:c.instructions+=1;goto B639bb5;
case 0x639bba:goto L639bba;
case 0x639bbc:c.instructions+=4;goto B639bbc;
case 0x639bbe:c.instructions+=3;goto B639bbe;
case 0x639bc0:c.instructions+=2;goto B639bc0;
case 0x639bc2:c.instructions+=1;goto B639bc2;
case 0x639bc7:goto L639bc7;
case 0x639bc9:c.instructions+=4;goto B639bc9;
case 0x639bcb:c.instructions+=3;goto B639bcb;
case 0x639bcd:c.instructions+=2;goto B639bcd;
case 0x639bd1:c.instructions+=1;goto B639bd1;
case 0x639bd6:goto L639bd6;
case 0x639bd8:c.instructions+=1;goto B639bd8;
case 0x639bda:goto L639bda;
case 0x639bde:c.instructions+=2;goto B639bde;
case 0x639be0:c.instructions+=1;goto B639be0;
case 0x639be2:goto L639be2;
case 0x639be4:c.instructions+=2;goto B639be4;
case 0x639be9:c.instructions+=1;goto B639be9;
case 0x639beb:goto L639beb;
case 0x639bf0:goto L639bf0;
case 0x639bf2:c.instructions+=3;goto B639bf2;
case 0x639bf4:c.instructions+=2;goto B639bf4;
case 0x639bf6:c.instructions+=1;goto B639bf6;
case 0x639bfb:goto L639bfb;
case 0x639bfd:c.instructions+=4;goto B639bfd;
case 0x639bff:c.instructions+=3;goto B639bff;
case 0x639c01:c.instructions+=2;goto B639c01;
case 0x639c03:c.instructions+=1;goto B639c03;
case 0x639c08:goto L639c08;
case 0x639c0a:c.instructions+=4;goto B639c0a;
case 0x639c0c:c.instructions+=3;goto B639c0c;
case 0x639c0e:c.instructions+=2;goto B639c0e;
case 0x639c12:c.instructions+=1;goto B639c12;
case 0x639c17:goto L639c17;
case 0x639c19:c.instructions+=1;goto B639c19;
case 0x639c1b:goto L639c1b;
case 0x639c1f:c.instructions+=2;goto B639c1f;
case 0x639c21:c.instructions+=1;goto B639c21;
case 0x639c23:goto L639c23;
case 0x639c25:c.instructions+=1;goto B639c25;
case 0x639c27:goto L639c27;
case 0x639c29:c.instructions+=4;goto B639c29;
case 0x639c2b:c.instructions+=3;goto B639c2b;
case 0x639c2d:c.instructions+=2;goto B639c2d;
case 0x639c2e:c.instructions+=1;goto B639c2e;
case 0x639c30:goto L639c30;
case 0x639c33:c.instructions+=1;goto B639c33;
case 0x639c39:goto L639c39;
case 0x639c3e:c.instructions+=1;goto B639c3e;
case 0x639c43:goto L639c43;
case 0x639c47:c.instructions+=2;goto B639c47;
case 0x639c49:c.instructions+=1;goto B639c49;
case 0x639c4b:goto L639c4b;
case 0x639c4d:c.instructions+=4;goto B639c4d;
case 0x639c4f:c.instructions+=3;goto B639c4f;
case 0x639c51:c.instructions+=2;goto B639c51;
case 0x639c52:c.instructions+=1;goto B639c52;
case 0x639c54:goto L639c54;
case 0x639c56:c.instructions+=3;goto B639c56;
case 0x639c58:c.instructions+=2;goto B639c58;
case 0x639c5a:c.instructions+=1;goto B639c5a;
case 0x639c5b:goto L639c5b;
case 0x639c60:goto L639c60;
case 0x639c63:c.instructions+=2;goto B639c63;
case 0x639c65:c.instructions+=1;goto B639c65;
case 0x639c67:goto L639c67;
case 0x639c69:c.instructions+=2;goto B639c69;
case 0x639c6f:c.instructions+=1;goto B639c6f;
case 0x639c74:goto L639c74;
case 0x639c76:c.instructions+=3;goto B639c76;
case 0x639c78:c.instructions+=2;goto B639c78;
case 0x639c7a:c.instructions+=1;goto B639c7a;
case 0x639c7f:goto L639c7f;
case 0x639c81:c.instructions+=1;goto B639c81;
case 0x639c83:goto L639c83;
case 0x639c88:c.instructions+=1;goto B639c88;
case 0x639c8a:goto L639c8a;
case 0x639c8c:c.instructions+=2;goto B639c8c;
case 0x639c8e:c.instructions+=1;goto B639c8e;
case 0x639c93:goto L639c93;
case 0x639c95:c.instructions+=1;goto B639c95;
case 0x639c97:goto L639c97;
case 0x639c9c:c.instructions+=1;goto B639c9c;
case 0x639c9e:goto L639c9e;
case 0x639ca0:c.instructions+=2;goto B639ca0;
case 0x639ca2:c.instructions+=1;goto B639ca2;
case 0x639ca7:goto L639ca7;
case 0x639ca9:c.instructions+=1;goto B639ca9;
case 0x639cab:goto L639cab;
case 0x639cb0:goto L639cb0;
case 0x639cb2:c.instructions+=4;goto B639cb2;
case 0x639cb3:c.instructions+=3;goto B639cb3;
case 0x639cb5:c.instructions+=2;goto B639cb5;
case 0x639cb6:c.instructions+=1;goto B639cb6;
case 0x639cbb:goto L639cbb;
case 0x639cbe:c.instructions+=2;goto B639cbe;
case 0x639cc0:c.instructions+=1;goto B639cc0;
case 0x639cc2:goto L639cc2;
case 0x639cc4:c.instructions+=2;goto B639cc4;
case 0x639cca:c.instructions+=1;goto B639cca;
case 0x639ccf:goto L639ccf;
case 0x639cd0:c.instructions+=4;goto B639cd0;
case 0x639cd1:c.instructions+=3;goto B639cd1;
case 0x639cd2:c.instructions+=2;goto B639cd2;
case 0x639cd5:c.instructions+=1;goto B639cd5;
case 0x639ce0:goto L639ce0;
case 0x639ce1:c.instructions+=3;goto B639ce1;
case 0x639ce3:c.instructions+=2;goto B639ce3;
case 0x639ce6:c.instructions+=1;goto B639ce6;
case 0x639ce8:goto L639ce8;
case 0x639cec:c.instructions+=5;goto B639cec;
case 0x639cee:c.instructions+=4;goto B639cee;
case 0x639cf1:c.instructions+=3;goto B639cf1;
case 0x639cf3:c.instructions+=2;goto B639cf3;
case 0x639cf4:c.instructions+=1;goto B639cf4;
case 0x639cf9:goto L639cf9;
case 0x639cfd:c.instructions+=7;goto B639cfd;
case 0x639d01:c.instructions+=6;goto B639d01;
case 0x639d05:c.instructions+=5;goto B639d05;
case 0x639d06:c.instructions+=4;goto B639d06;
case 0x639d07:c.instructions+=3;goto B639d07;
case 0x639d08:c.instructions+=2;goto B639d08;
case 0x639d0b:c.instructions+=1;goto B639d0b;
case 0x639d10:goto L639d10;
case 0x639d11:c.instructions+=1;goto B639d11;
case 0x639d20:goto L639d20;
case 0x639d26:c.instructions+=6;goto B639d26;
case 0x639d27:c.instructions+=5;goto B639d27;
case 0x639d2e:c.instructions+=4;goto B639d2e;
case 0x639d31:c.instructions+=3;goto B639d31;
case 0x639d33:c.instructions+=2;goto B639d33;
case 0x639d36:c.instructions+=1;goto B639d36;
case 0x639d38:goto L639d38;
case 0x639d3c:goto L639d3c;
case 0x639d3f:c.instructions+=2;goto B639d3f;
case 0x639d41:c.instructions+=1;goto B639d41;
case 0x639d43:goto L639d43;
case 0x639d47:goto L639d47;
case 0x639d4a:c.instructions+=2;goto B639d4a;
case 0x639d4c:c.instructions+=1;goto B639d4c;
case 0x639d4e:goto L639d4e;
case 0x639d52:goto L639d52;
case 0x639d55:c.instructions+=2;goto B639d55;
case 0x639d57:c.instructions+=1;goto B639d57;
case 0x639d59:goto L639d59;
case 0x639d5d:goto L639d5d;
case 0x639d5f:c.instructions+=5;goto B639d5f;
case 0x639d60:c.instructions+=4;goto B639d60;
case 0x639d65:c.instructions+=3;goto B639d65;
case 0x639d69:c.instructions+=2;goto B639d69;
case 0x639d6a:c.instructions+=1;goto B639d6a;
case 0x639d6f:goto L639d6f;
case 0x639d71:c.instructions+=1;goto B639d71;
case 0x639d73:goto L639d73;
case 0x639d74:c.instructions+=3;goto B639d74;
case 0x639d78:c.instructions+=2;goto B639d78;
case 0x639d79:c.instructions+=1;goto B639d79;
case 0x639d7e:goto L639d7e;
case 0x639d81:goto L639d81;
case 0x639d85:c.instructions+=1;goto B639d85;
case 0x639d87:goto L639d87;
case 0x639d89:c.instructions+=3;goto B639d89;
case 0x639d8c:c.instructions+=2;goto B639d8c;
case 0x639d8d:c.instructions+=1;goto B639d8d;
case 0x639d92:goto L639d92;
case 0x639d95:goto L639d95;
case 0x639d9a:c.instructions+=3;goto B639d9a;
case 0x639d9b:c.instructions+=2;goto B639d9b;
case 0x639da1:c.instructions+=1;goto B639da1;
case 0x639db0:goto L639db0;
case 0x639db6:c.instructions+=5;goto B639db6;
case 0x639db7:c.instructions+=4;goto B639db7;
case 0x639db9:c.instructions+=3;goto B639db9;
case 0x639dbc:c.instructions+=2;goto B639dbc;
case 0x639dbe:c.instructions+=1;goto B639dbe;
case 0x639dc0:goto L639dc0;
case 0x639dc3:c.instructions+=1;goto B639dc3;
case 0x639dc5:goto L639dc5;
case 0x639dc7:c.instructions+=2;goto B639dc7;
case 0x639dc9:c.instructions+=1;goto B639dc9;
case 0x639dcb:goto L639dcb;
case 0x639dcf:c.instructions+=1;goto B639dcf;
case 0x639dd1:goto L639dd1;
case 0x639dd5:goto L639dd5;
case 0x639dd8:c.instructions+=2;goto B639dd8;
case 0x639dd9:c.instructions+=1;goto B639dd9;
case 0x639ddb:goto L639ddb;
case 0x639dde:c.instructions+=2;goto B639dde;
case 0x639de0:c.instructions+=1;goto B639de0;
case 0x639de2:goto L639de2;
case 0x639de5:c.instructions+=1;goto B639de5;
case 0x639de7:goto L639de7;
case 0x639de9:c.instructions+=2;goto B639de9;
case 0x639deb:c.instructions+=1;goto B639deb;
case 0x639ded:goto L639ded;
case 0x639df1:goto L639df1;
case 0x639df4:c.instructions+=2;goto B639df4;
case 0x639df5:c.instructions+=1;goto B639df5;
case 0x639df7:goto L639df7;
case 0x639dfa:c.instructions+=8;goto B639dfa;
case 0x639dfb:c.instructions+=7;goto B639dfb;
case 0x639dfe:c.instructions+=6;goto B639dfe;
case 0x639dff:c.instructions+=5;goto B639dff;
case 0x639e04:c.instructions+=4;goto B639e04;
case 0x639e08:c.instructions+=3;goto B639e08;
case 0x639e09:c.instructions+=2;goto B639e09;
case 0x639e0b:c.instructions+=1;goto B639e0b;
case 0x639e10:goto L639e10;
case 0x639e12:c.instructions+=1;goto B639e12;
case 0x639e14:goto L639e14;
case 0x639e15:c.instructions+=3;goto B639e15;
case 0x639e19:c.instructions+=2;goto B639e19;
case 0x639e1a:c.instructions+=1;goto B639e1a;
case 0x639e1f:goto L639e1f;
case 0x639e22:goto L639e22;
case 0x639e24:c.instructions+=3;goto B639e24;
case 0x639e2b:c.instructions+=2;goto B639e2b;
case 0x639e32:c.instructions+=1;goto B639e32;
case 0x639e37:goto L639e37;
case 0x639e38:c.instructions+=2;goto B639e38;
case 0x639e3e:c.instructions+=1;goto B639e3e;
case 0x639e40:goto L639e40;
case 0x639e46:c.instructions+=6;goto B639e46;
case 0x639e47:c.instructions+=5;goto B639e47;
case 0x639e48:c.instructions+=4;goto B639e48;
case 0x639e4f:c.instructions+=3;goto B639e4f;
case 0x639e56:c.instructions+=2;goto B639e56;
case 0x639e58:c.instructions+=1;goto B639e58;
case 0x639e5a:goto L639e5a;
case 0x639e60:c.instructions+=2;goto B639e60;
case 0x639e62:c.instructions+=1;goto B639e62;
case 0x639e64:goto L639e64;
case 0x639e6b:c.instructions+=2;goto B639e6b;
case 0x639e6d:c.instructions+=1;goto B639e6d;
case 0x639e73:goto L639e73;
case 0x639e79:c.instructions+=4;goto B639e79;
case 0x639e7a:c.instructions+=3;goto B639e7a;
case 0x639e7c:c.instructions+=2;goto B639e7c;
case 0x639e7e:c.instructions+=1;goto B639e7e;
case 0x639e80:goto L639e80;
case 0x639e86:c.instructions+=1;goto B639e86;
case 0x639e88:goto L639e88;
case 0x639e8a:c.instructions+=2;goto B639e8a;
case 0x639e8c:c.instructions+=1;goto B639e8c;
case 0x639e8e:goto L639e8e;
case 0x639e92:goto L639e92;
case 0x639e95:c.instructions+=2;goto B639e95;
case 0x639e96:c.instructions+=1;goto B639e96;
case 0x639e98:goto L639e98;
case 0x639e9e:c.instructions+=8;goto B639e9e;
case 0x639e9f:c.instructions+=7;goto B639e9f;
case 0x639ea5:c.instructions+=6;goto B639ea5;
case 0x639ea6:c.instructions+=5;goto B639ea6;
case 0x639ea8:c.instructions+=4;goto B639ea8;
case 0x639eac:c.instructions+=3;goto B639eac;
case 0x639ead:c.instructions+=2;goto B639ead;
case 0x639eaf:c.instructions+=1;goto B639eaf;
case 0x639eb4:goto L639eb4;
case 0x639eb6:c.instructions+=2;goto B639eb6;
case 0x639ec0:c.instructions+=1;goto B639ec0;
case 0x639ec2:goto L639ec2;
case 0x639ec3:c.instructions+=3;goto B639ec3;
case 0x639ec7:c.instructions+=2;goto B639ec7;
case 0x639ec8:c.instructions+=1;goto B639ec8;
case 0x639ecd:goto L639ecd;
case 0x639ed0:c.instructions+=1;goto B639ed0;
case 0x639ed5:goto L639ed5;
case 0x639edb:c.instructions+=2;goto B639edb;
case 0x639edd:c.instructions+=1;goto B639edd;
case 0x639edf:goto L639edf;
case 0x639ee3:c.instructions+=4;goto B639ee3;
case 0x639ee9:c.instructions+=3;goto B639ee9;
case 0x639eea:c.instructions+=2;goto B639eea;
case 0x639eec:c.instructions+=1;goto B639eec;
case 0x639ef1:goto L639ef1;
case 0x639efb:c.instructions+=1;goto B639efb;
case 0x639efc:goto L639efc;
case 0x639efe:c.instructions+=5;goto B639efe;
case 0x639eff:c.instructions+=4;goto B639eff;
case 0x639f00:c.instructions+=3;goto B639f00;
case 0x639f01:c.instructions+=2;goto B639f01;
case 0x639f07:c.instructions+=1;goto B639f07;
case 0x639f0a:goto L639f0a;
case 0x639f0b:c.instructions+=4;goto B639f0b;
case 0x639f0d:c.instructions+=3;goto B639f0d;
case 0x639f0e:c.instructions+=2;goto B639f0e;
case 0x639f14:c.instructions+=1;goto B639f14;
case 0x639f20:goto L639f20;
case 0x639f26:c.instructions+=5;goto B639f26;
case 0x639f27:c.instructions+=4;goto B639f27;
case 0x639f2e:c.instructions+=3;goto B639f2e;
case 0x639f34:c.instructions+=2;goto B639f34;
case 0x639f36:c.instructions+=1;goto B639f36;
case 0x639f38:goto L639f38;
case 0x639f39:c.instructions+=2;goto B639f39;
case 0x639f3f:c.instructions+=1;goto B639f3f;
case 0x639f41:goto L639f41;
case 0x639f43:c.instructions+=2;goto B639f43;
case 0x639f45:c.instructions+=1;goto B639f45;
case 0x639f47:goto L639f47;
case 0x639f4b:goto L639f4b;
case 0x639f4e:c.instructions+=2;goto B639f4e;
case 0x639f4f:c.instructions+=1;goto B639f4f;
case 0x639f51:goto L639f51;
case 0x639f52:goto L639f52;
case 0x639f58:c.instructions+=7;goto B639f58;
case 0x639f59:c.instructions+=6;goto B639f59;
case 0x639f5f:c.instructions+=5;goto B639f5f;
case 0x639f60:c.instructions+=4;goto B639f60;
case 0x639f62:c.instructions+=3;goto B639f62;
case 0x639f66:c.instructions+=2;goto B639f66;
case 0x639f67:c.instructions+=1;goto B639f67;
case 0x639f6c:goto L639f6c;
case 0x639f6e:c.instructions+=1;goto B639f6e;
case 0x639f70:goto L639f70;
case 0x639f71:c.instructions+=3;goto B639f71;
case 0x639f75:c.instructions+=2;goto B639f75;
case 0x639f76:c.instructions+=1;goto B639f76;
case 0x639f7b:goto L639f7b;
case 0x639f7e:c.instructions+=5;goto B639f7e;
case 0x639f88:c.instructions+=4;goto B639f88;
case 0x639f8d:c.instructions+=3;goto B639f8d;
case 0x639f8e:c.instructions+=2;goto B639f8e;
case 0x639f94:c.instructions+=1;goto B639f94;
case 0x639f97:goto L639f97;
case 0x639f99:c.instructions+=3;goto B639f99;
case 0x639f9a:c.instructions+=2;goto B639f9a;
case 0x639fa0:c.instructions+=1;goto B639fa0;
case 0x639fb0:goto L639fb0;
case 0x639fb1:c.instructions+=6;goto B639fb1;
case 0x639fb5:c.instructions+=5;goto B639fb5;
case 0x639fb6:c.instructions+=4;goto B639fb6;
case 0x639fb8:c.instructions+=3;goto B639fb8;
case 0x639fb9:c.instructions+=2;goto B639fb9;
case 0x639fbb:c.instructions+=1;goto B639fbb;
case 0x639fc0:goto L639fc0;
case 0x639fc1:c.instructions+=2;goto B639fc1;
case 0x639fc3:c.instructions+=1;goto B639fc3;
case 0x639fc8:goto L639fc8;
case 0x639fce:c.instructions+=5;goto B639fce;
case 0x639fd2:c.instructions+=4;goto B639fd2;
case 0x639fd8:c.instructions+=3;goto B639fd8;
case 0x639fd9:c.instructions+=2;goto B639fd9;
case 0x639fdb:c.instructions+=1;goto B639fdb;
case 0x639fe0:goto L639fe0;
case 0x639fe1:c.instructions+=4;goto B639fe1;
case 0x639feb:c.instructions+=3;goto B639feb;
case 0x639ff0:c.instructions+=2;goto B639ff0;
case 0x639ff1:c.instructions+=1;goto B639ff1;
default:missing_instruction(c.pc);}
B639000:L639000:{c.instructions+=2;NFSU2_TR(0x639000);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B639002:{NFSU2_TR(0x639002);
{goto L639013;}
}
B639004:L639004:{c.instructions+=3;NFSU2_TR(0x639004);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B639008:{NFSU2_TR(0x639008);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B639009:{NFSU2_TR(0x639009);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x63900eull));
TAIL_STATIC(0x48f6a0u,48f);
}
B63900e:L63900e:{c.instructions+=2;NFSU2_TR(0x63900e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B639011:{NFSU2_TR(0x639011);
__builtin_memmove((R+12),(R+0),4);
}
B639013:L639013:{c.instructions+=3;NFSU2_TR(0x639013);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B639017:{NFSU2_TR(0x639017);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B639019:{NFSU2_TR(0x639019);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L63901f;}}
}
B63901b:L63901b:{c.instructions+=2;NFSU2_TR(0x63901b);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B63901d:{NFSU2_TR(0x63901d);
{goto L63902e;}
}
B63901f:L63901f:{c.instructions+=3;NFSU2_TR(0x63901f);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B639023:{NFSU2_TR(0x639023);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B639024:{NFSU2_TR(0x639024);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x639029ull));
TAIL_STATIC(0x48f6a0u,48f);
}
B639029:L639029:{c.instructions+=2;NFSU2_TR(0x639029);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B63902c:{NFSU2_TR(0x63902c);
__builtin_memmove((R+28),(R+0),4);
}
B63902e:L63902e:{c.instructions+=3;NFSU2_TR(0x63902e);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B639032:{NFSU2_TR(0x639032);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B639034:{NFSU2_TR(0x639034);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L63903e;}}
}
B639036:L639036:{c.instructions+=2;NFSU2_TR(0x639036);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x384ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B63903c:{NFSU2_TR(0x63903c);
{goto L63904b;}
}
B63903e:L63903e:{c.instructions+=3;NFSU2_TR(0x63903e);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B639042:{NFSU2_TR(0x639042);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B639043:{NFSU2_TR(0x639043);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x639048ull));
TAIL_STATIC(0x48f6a0u,48f);
}
B639048:L639048:{c.instructions+=1;NFSU2_TR(0x639048);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B63904b:L63904b:{c.instructions+=14;NFSU2_TR(0x63904b);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B63904f:{NFSU2_TR(0x63904f);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B639053:{NFSU2_TR(0x639053);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x390ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B639059:{NFSU2_TR(0x639059);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B63905d:{NFSU2_TR(0x63905d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x394ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B639063:{NFSU2_TR(0x639063);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B639067:{NFSU2_TR(0x639067);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x398ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B63906d:{NFSU2_TR(0x63906d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3a0ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B639073:{NFSU2_TR(0x639073);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3a4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B639079:{NFSU2_TR(0x639079);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3a8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B63907f:{NFSU2_TR(0x63907f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3acull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B639089:{NFSU2_TR(0x639089);
__builtin_memmove((R+4),(R+24),4);
}
B63908b:{NFSU2_TR(0x63908b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x39cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B639091:{NFSU2_TR(0x639091);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x639096ull));
TAIL_STATIC(0x61fe10u,61f);
}
B639096:L639096:{c.instructions+=4;NFSU2_TR(0x639096);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1b48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B63909c:{NFSU2_TR(0x63909c);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B63909e:{NFSU2_TR(0x63909e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1b68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6390a4:{NFSU2_TR(0x6390a4);
if(r1(R+518)){{goto L6390bf;}}
}
B6390a6:L6390a6:{c.instructions+=2;NFSU2_TR(0x6390a6);
u8 U[4];
w4(U+0,u32(0x7a8d14ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6390ab:{NFSU2_TR(0x6390ab);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6390b0ull));
TAIL_STATIC(0x43db50u,43d);
}
B6390b0:L6390b0:{c.instructions+=4;NFSU2_TR(0x6390b0);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6390b3:{NFSU2_TR(0x6390b3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6390b4:{NFSU2_TR(0x6390b4);
__builtin_memmove((R+4),(R+28),4);
}
B6390b6:{NFSU2_TR(0x6390b6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6390bbull));
TAIL_STATIC(0x48d8f0u,48d);
}
B6390bb:L6390bb:{c.instructions+=2;NFSU2_TR(0x6390bb);
__builtin_memmove((R+28),(R+0),4);
}
B6390bd:{NFSU2_TR(0x6390bd);
{goto L6390c1;}
}
B6390bf:L6390bf:{c.instructions+=1;NFSU2_TR(0x6390bf);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B6390c1:L6390c1:{c.instructions+=2;NFSU2_TR(0x6390c1);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6390c3:{NFSU2_TR(0x6390c3);
if(r1(R+518)){{goto L6390dc;}}
}
B6390c5:L6390c5:{c.instructions+=2;NFSU2_TR(0x6390c5);
u8 U[4];
w4(U+0,u32(0x7a8d14ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6390ca:{NFSU2_TR(0x6390ca);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6390cfull));
TAIL_STATIC(0x43db50u,43d);
}
B6390cf:L6390cf:{c.instructions+=4;NFSU2_TR(0x6390cf);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6390d2:{NFSU2_TR(0x6390d2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6390d3:{NFSU2_TR(0x6390d3);
__builtin_memmove((R+4),(R+12),4);
}
B6390d5:{NFSU2_TR(0x6390d5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6390daull));
TAIL_STATIC(0x48d8f0u,48d);
}
B6390da:L6390da:{c.instructions+=1;NFSU2_TR(0x6390da);
{goto L6390de;}
}
B6390dc:L6390dc:{c.instructions+=1;NFSU2_TR(0x6390dc);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6390de:L6390de:{c.instructions+=2;NFSU2_TR(0x6390de);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6390e0:{NFSU2_TR(0x6390e0);
if(r1(R+518)){{goto L6390e7;}}
}
B6390e2:L6390e2:{c.instructions+=2;NFSU2_TR(0x6390e2);
{u32 ea_=u32(r4(R+28)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6390e5:{NFSU2_TR(0x6390e5);
{goto L6390ed;}
}
B6390e7:L6390e7:{c.instructions+=1;NFSU2_TR(0x6390e7);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6390ed:L6390ed:{c.instructions+=3;NFSU2_TR(0x6390ed);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6390ef:{NFSU2_TR(0x6390ef);
{u32 ea_=u32(r4(R+24)+u32(1072u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6390f5:{NFSU2_TR(0x6390f5);
if(r1(R+518)){{goto L6390fc;}}
}
B6390f7:L6390f7:{c.instructions+=2;NFSU2_TR(0x6390f7);
{u32 ea_=u32(r4(R+0)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6390fa:{NFSU2_TR(0x6390fa);
{goto L639102;}
}
B6390fc:L6390fc:{c.instructions+=1;NFSU2_TR(0x6390fc);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B639102:L639102:{c.instructions+=4;NFSU2_TR(0x639102);
{u32 ea_=u32(r4(R+24)+u32(1076u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B639108:{NFSU2_TR(0x639108);
__builtin_memmove((R+0),gp(0x8a1c1c),4);
}
B63910d:{NFSU2_TR(0x63910d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63910e:{NFSU2_TR(0x63910e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x639113ull));
TAIL_STATIC(0x440e50u,440);
}
B639113:L639113:{c.instructions+=4;NFSU2_TR(0x639113);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B639115:{NFSU2_TR(0x639115);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B639118:{NFSU2_TR(0x639118);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B63911a:{NFSU2_TR(0x63911a);
if(r1(R+518)){{goto L639157;}}
}
B63911c:L63911c:{c.instructions+=20;NFSU2_TR(0x63911c);
__builtin_memmove((R+4),(R+12),4);
}
B63911e:{NFSU2_TR(0x63911e);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0xfffffffeull))));
}
B639121:{NFSU2_TR(0x639121);
__builtin_memmove((R+8),(R+4),4);
}
B639123:{NFSU2_TR(0x639123);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B639127:{NFSU2_TR(0x639127);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B63912b:{NFSU2_TR(0x63912b);
__builtin_memmove((R+4),(R+12),4);
}
B63912d:{NFSU2_TR(0x63912d);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0xfffffffeull))));
}
B639130:{NFSU2_TR(0x639130);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B639133:{NFSU2_TR(0x639133);
__builtin_memmove((R+8),(R+4),4);
}
B639135:{NFSU2_TR(0x639135);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B639139:{NFSU2_TR(0x639139);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B63913d:{NFSU2_TR(0x63913d);
__builtin_memmove((R+4),(R+12),4);
}
B63913f:{NFSU2_TR(0x63913f);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0xfffffffeull))));
}
B639142:{NFSU2_TR(0x639142);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B639145:{NFSU2_TR(0x639145);
__builtin_memmove((R+8),(R+4),4);
}
B639147:{NFSU2_TR(0x639147);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B63914b:{NFSU2_TR(0x63914b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B63914e:{NFSU2_TR(0x63914e);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B639152:{NFSU2_TR(0x639152);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B639155:{NFSU2_TR(0x639155);
{goto L639159;}
}
B639157:L639157:{c.instructions+=1;NFSU2_TR(0x639157);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B639159:L639159:{c.instructions+=9;NFSU2_TR(0x639159);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B63915f:{NFSU2_TR(0x63915f);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x548ull))));
__builtin_memmove((R+4),(U+0),4);
}
B639165:{NFSU2_TR(0x639165);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B639168:{NFSU2_TR(0x639168);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+8)),r4(U+0));
}
B63916a:{NFSU2_TR(0x63916a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B63916c:{NFSU2_TR(0x63916c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B63916f:{NFSU2_TR(0x63916f);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B639171:{NFSU2_TR(0x639171);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((R+4),(U+0),4);
}
B639174:{NFSU2_TR(0x639174);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x639179ull));
TAIL_STATIC(0x5b5350u,5b5);
}
B639179:L639179:{c.instructions+=4;NFSU2_TR(0x639179);
__builtin_memmove((R+28),(R+0),4);
}
B63917b:{NFSU2_TR(0x63917b);
__builtin_memmove((R+0),gp(0x8a1c1c),4);
}
B639180:{NFSU2_TR(0x639180);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B639181:{NFSU2_TR(0x639181);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x639186ull));
TAIL_STATIC(0x440e50u,440);
}
B639186:L639186:{c.instructions+=3;NFSU2_TR(0x639186);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B639189:{NFSU2_TR(0x639189);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B63918b:{NFSU2_TR(0x63918b);
if(r1(R+518)){{goto L6391f2;}}
}
B63918d:L63918d:{c.instructions+=29;NFSU2_TR(0x63918d);
{u32 ea_=u32(r4(R+28)+u32(72u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B639190:{NFSU2_TR(0x639190);
{u32 ea_=u32(r4(R+28)+u32(24u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B639193:{NFSU2_TR(0x639193);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B639199:{NFSU2_TR(0x639199);
{u32 ea_=u32(r4(R+28)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63919c:{NFSU2_TR(0x63919c);
{u32 ea_=u32(r4(R+28)+u32(20u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B63919f:{NFSU2_TR(0x63919f);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6391a5:{NFSU2_TR(0x6391a5);
{u32 ea_=u32(r4(R+28)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6391a8:{NFSU2_TR(0x6391a8);
{u32 ea_=u32(r4(R+28)+u32(64u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6391ab:{NFSU2_TR(0x6391ab);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6391ae:{NFSU2_TR(0x6391ae);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6391b4:{NFSU2_TR(0x6391b4);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6391b8:{NFSU2_TR(0x6391b8);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6391bc:{NFSU2_TR(0x6391bc);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0xfffffffeull))));
}
B6391bf:{NFSU2_TR(0x6391bf);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6391c3:{NFSU2_TR(0x6391c3);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6391c7:{NFSU2_TR(0x6391c7);
__builtin_memmove((R+8),(R+4),4);
}
B6391c9:{NFSU2_TR(0x6391c9);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6391cd:{NFSU2_TR(0x6391cd);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0xfffffffeull))));
}
B6391d0:{NFSU2_TR(0x6391d0);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6391d4:{NFSU2_TR(0x6391d4);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6391d8:{NFSU2_TR(0x6391d8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6391db:{NFSU2_TR(0x6391db);
__builtin_memmove((R+8),(R+4),4);
}
B6391dd:{NFSU2_TR(0x6391dd);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6391e1:{NFSU2_TR(0x6391e1);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0xfffffffeull))));
}
B6391e4:{NFSU2_TR(0x6391e4);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6391e7:{NFSU2_TR(0x6391e7);
__builtin_memmove((R+8),(R+4),4);
}
B6391e9:{NFSU2_TR(0x6391e9);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6391ed:{NFSU2_TR(0x6391ed);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6391f0:{NFSU2_TR(0x6391f0);
{goto L6391f4;}
}
B6391f2:L6391f2:{c.instructions+=1;NFSU2_TR(0x6391f2);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6391f4:L6391f4:{c.instructions+=8;NFSU2_TR(0x6391f4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x554ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6391fa:{NFSU2_TR(0x6391fa);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x550ull))));
__builtin_memmove((R+4),(U+0),4);
}
B639200:{NFSU2_TR(0x639200);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B639203:{NFSU2_TR(0x639203);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+8)),r4(U+0));
}
B639205:{NFSU2_TR(0x639205);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B639207:{NFSU2_TR(0x639207);
__builtin_memmove((R+0),gp(0x8a1c1c),4);
}
B63920c:{NFSU2_TR(0x63920c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63920d:{NFSU2_TR(0x63920d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x639212ull));
TAIL_STATIC(0x440e50u,440);
}
B639212:L639212:{c.instructions+=3;NFSU2_TR(0x639212);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B639215:{NFSU2_TR(0x639215);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B639217:{NFSU2_TR(0x639217);
if(r1(R+518)){{goto L639287;}}
}
B639219:L639219:{c.instructions+=29;NFSU2_TR(0x639219);
{u32 ea_=u32(r4(R+28)+u32(168u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63921f:{NFSU2_TR(0x63921f);
{u32 ea_=u32(r4(R+28)+u32(120u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B639222:{NFSU2_TR(0x639222);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B639228:{NFSU2_TR(0x639228);
{u32 ea_=u32(r4(R+28)+u32(164u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63922e:{NFSU2_TR(0x63922e);
{u32 ea_=u32(r4(R+28)+u32(116u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B639231:{NFSU2_TR(0x639231);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B639237:{NFSU2_TR(0x639237);
{u32 ea_=u32(r4(R+28)+u32(160u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63923d:{NFSU2_TR(0x63923d);
{u32 ea_=u32(r4(R+28)+u32(112u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B639240:{NFSU2_TR(0x639240);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B639243:{NFSU2_TR(0x639243);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B639249:{NFSU2_TR(0x639249);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63924d:{NFSU2_TR(0x63924d);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B639251:{NFSU2_TR(0x639251);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0xfffffffeull))));
}
B639254:{NFSU2_TR(0x639254);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B639258:{NFSU2_TR(0x639258);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63925c:{NFSU2_TR(0x63925c);
__builtin_memmove((R+8),(R+4),4);
}
B63925e:{NFSU2_TR(0x63925e);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B639262:{NFSU2_TR(0x639262);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0xfffffffeull))));
}
B639265:{NFSU2_TR(0x639265);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B639269:{NFSU2_TR(0x639269);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63926d:{NFSU2_TR(0x63926d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B639270:{NFSU2_TR(0x639270);
__builtin_memmove((R+8),(R+4),4);
}
B639272:{NFSU2_TR(0x639272);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B639276:{NFSU2_TR(0x639276);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0xfffffffeull))));
}
B639279:{NFSU2_TR(0x639279);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B63927c:{NFSU2_TR(0x63927c);
__builtin_memmove((R+8),(R+4),4);
}
B63927e:{NFSU2_TR(0x63927e);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B639282:{NFSU2_TR(0x639282);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B639285:{NFSU2_TR(0x639285);
{goto L639289;}
}
B639287:L639287:{c.instructions+=1;NFSU2_TR(0x639287);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B639289:L639289:{c.instructions+=8;NFSU2_TR(0x639289);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x55cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B63928f:{NFSU2_TR(0x63928f);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x558ull))));
__builtin_memmove((R+4),(U+0),4);
}
B639295:{NFSU2_TR(0x639295);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B639298:{NFSU2_TR(0x639298);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+8)),r4(U+0));
}
B63929a:{NFSU2_TR(0x63929a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B63929c:{NFSU2_TR(0x63929c);
__builtin_memmove((R+0),gp(0x8a1c1c),4);
}
B6392a1:{NFSU2_TR(0x6392a1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6392a2:{NFSU2_TR(0x6392a2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6392a7ull));
TAIL_STATIC(0x440e50u,440);
}
B6392a7:L6392a7:{c.instructions+=3;NFSU2_TR(0x6392a7);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6392aa:{NFSU2_TR(0x6392aa);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6392ac:{NFSU2_TR(0x6392ac);
if(r1(R+518)){{goto L63931c;}}
}
B6392ae:L6392ae:{c.instructions+=29;NFSU2_TR(0x6392ae);
{u32 ea_=u32(r4(R+28)+u32(168u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6392b4:{NFSU2_TR(0x6392b4);
{u32 ea_=u32(r4(R+28)+u32(24u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6392b7:{NFSU2_TR(0x6392b7);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6392bd:{NFSU2_TR(0x6392bd);
{u32 ea_=u32(r4(R+28)+u32(164u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6392c3:{NFSU2_TR(0x6392c3);
{u32 ea_=u32(r4(R+28)+u32(20u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6392c6:{NFSU2_TR(0x6392c6);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6392cc:{NFSU2_TR(0x6392cc);
{u32 ea_=u32(r4(R+28)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6392cf:{NFSU2_TR(0x6392cf);
{u32 ea_=u32(r4(R+28)+u32(160u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6392d5:{NFSU2_TR(0x6392d5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6392d8:{NFSU2_TR(0x6392d8);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6392de:{NFSU2_TR(0x6392de);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6392e2:{NFSU2_TR(0x6392e2);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6392e6:{NFSU2_TR(0x6392e6);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0xfffffffeull))));
}
B6392e9:{NFSU2_TR(0x6392e9);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6392ed:{NFSU2_TR(0x6392ed);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6392f1:{NFSU2_TR(0x6392f1);
__builtin_memmove((R+8),(R+4),4);
}
B6392f3:{NFSU2_TR(0x6392f3);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6392f7:{NFSU2_TR(0x6392f7);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0xfffffffeull))));
}
B6392fa:{NFSU2_TR(0x6392fa);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6392fe:{NFSU2_TR(0x6392fe);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B639302:{NFSU2_TR(0x639302);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B639305:{NFSU2_TR(0x639305);
__builtin_memmove((R+8),(R+4),4);
}
B639307:{NFSU2_TR(0x639307);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B63930b:{NFSU2_TR(0x63930b);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0xfffffffeull))));
}
B63930e:{NFSU2_TR(0x63930e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B639311:{NFSU2_TR(0x639311);
__builtin_memmove((R+8),(R+4),4);
}
B639313:{NFSU2_TR(0x639313);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B639317:{NFSU2_TR(0x639317);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B63931a:{NFSU2_TR(0x63931a);
{goto L63931e;}
}
B63931c:L63931c:{c.instructions+=1;NFSU2_TR(0x63931c);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B63931e:L63931e:{c.instructions+=8;NFSU2_TR(0x63931e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x564ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B639324:{NFSU2_TR(0x639324);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x560ull))));
__builtin_memmove((R+4),(U+0),4);
}
B63932a:{NFSU2_TR(0x63932a);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B63932d:{NFSU2_TR(0x63932d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+8)),r4(U+0));
}
B63932f:{NFSU2_TR(0x63932f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B639331:{NFSU2_TR(0x639331);
__builtin_memmove((R+0),gp(0x8a1c1c),4);
}
B639336:{NFSU2_TR(0x639336);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B639337:{NFSU2_TR(0x639337);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x63933cull));
TAIL_STATIC(0x440e50u,440);
}
B63933c:L63933c:{c.instructions+=3;NFSU2_TR(0x63933c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B63933f:{NFSU2_TR(0x63933f);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B639341:{NFSU2_TR(0x639341);
if(r1(R+518)){{goto L6393a8;}}
}
B639343:L639343:{c.instructions+=29;NFSU2_TR(0x639343);
{u32 ea_=u32(r4(R+28)+u32(120u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B639346:{NFSU2_TR(0x639346);
{u32 ea_=u32(r4(R+28)+u32(72u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B639349:{NFSU2_TR(0x639349);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63934f:{NFSU2_TR(0x63934f);
{u32 ea_=u32(r4(R+28)+u32(116u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B639352:{NFSU2_TR(0x639352);
{u32 ea_=u32(r4(R+28)+u32(68u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B639355:{NFSU2_TR(0x639355);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63935b:{NFSU2_TR(0x63935b);
{u32 ea_=u32(r4(R+28)+u32(112u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63935e:{NFSU2_TR(0x63935e);
{u32 ea_=u32(r4(R+28)+u32(64u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B639361:{NFSU2_TR(0x639361);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B639364:{NFSU2_TR(0x639364);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63936a:{NFSU2_TR(0x63936a);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63936e:{NFSU2_TR(0x63936e);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B639372:{NFSU2_TR(0x639372);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0xfffffffeull))));
}
B639375:{NFSU2_TR(0x639375);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B639379:{NFSU2_TR(0x639379);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63937d:{NFSU2_TR(0x63937d);
__builtin_memmove((R+8),(R+4),4);
}
B63937f:{NFSU2_TR(0x63937f);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B639383:{NFSU2_TR(0x639383);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0xfffffffeull))));
}
B639386:{NFSU2_TR(0x639386);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B63938a:{NFSU2_TR(0x63938a);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63938e:{NFSU2_TR(0x63938e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B639391:{NFSU2_TR(0x639391);
__builtin_memmove((R+8),(R+4),4);
}
B639393:{NFSU2_TR(0x639393);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B639397:{NFSU2_TR(0x639397);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0xfffffffeull))));
}
B63939a:{NFSU2_TR(0x63939a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B63939d:{NFSU2_TR(0x63939d);
__builtin_memmove((R+8),(R+4),4);
}
B63939f:{NFSU2_TR(0x63939f);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6393a3:{NFSU2_TR(0x6393a3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6393a6:{NFSU2_TR(0x6393a6);
{goto L6393aa;}
}
B6393a8:L6393a8:{c.instructions+=1;NFSU2_TR(0x6393a8);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6393aa:L6393aa:{c.instructions+=8;NFSU2_TR(0x6393aa);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x56cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6393b0:{NFSU2_TR(0x6393b0);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x568ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6393b6:{NFSU2_TR(0x6393b6);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6393b9:{NFSU2_TR(0x6393b9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+8)),r4(U+0));
}
B6393bb:{NFSU2_TR(0x6393bb);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B6393bd:{NFSU2_TR(0x6393bd);
__builtin_memmove((R+0),gp(0x8a1c1c),4);
}
B6393c2:{NFSU2_TR(0x6393c2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6393c3:{NFSU2_TR(0x6393c3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6393c8ull));
TAIL_STATIC(0x440e50u,440);
}
B6393c8:L6393c8:{c.instructions+=3;NFSU2_TR(0x6393c8);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6393cb:{NFSU2_TR(0x6393cb);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6393cd:{NFSU2_TR(0x6393cd);
if(r1(R+518)){{goto L639419;}}
}
B6393cf:L6393cf:{c.instructions+=23;NFSU2_TR(0x6393cf);
{u32 ea_=u32(r4(R+28)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6393d2:{NFSU2_TR(0x6393d2);
{u32 ea_=u32(r4(R+28)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6393d5:{NFSU2_TR(0x6393d5);
{u32 ea_=u32(r4(R+28)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6393d8:{NFSU2_TR(0x6393d8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6393db:{NFSU2_TR(0x6393db);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6393df:{NFSU2_TR(0x6393df);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6393e3:{NFSU2_TR(0x6393e3);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0xfffffffeull))));
}
B6393e6:{NFSU2_TR(0x6393e6);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6393ea:{NFSU2_TR(0x6393ea);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6393ee:{NFSU2_TR(0x6393ee);
__builtin_memmove((R+8),(R+4),4);
}
B6393f0:{NFSU2_TR(0x6393f0);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6393f4:{NFSU2_TR(0x6393f4);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0xfffffffeull))));
}
B6393f7:{NFSU2_TR(0x6393f7);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6393fb:{NFSU2_TR(0x6393fb);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6393ff:{NFSU2_TR(0x6393ff);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B639402:{NFSU2_TR(0x639402);
__builtin_memmove((R+8),(R+4),4);
}
B639404:{NFSU2_TR(0x639404);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B639408:{NFSU2_TR(0x639408);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0xfffffffeull))));
}
B63940b:{NFSU2_TR(0x63940b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B63940e:{NFSU2_TR(0x63940e);
__builtin_memmove((R+8),(R+4),4);
}
B639410:{NFSU2_TR(0x639410);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B639414:{NFSU2_TR(0x639414);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B639417:{NFSU2_TR(0x639417);
{goto L63941b;}
}
B639419:L639419:{c.instructions+=1;NFSU2_TR(0x639419);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B63941b:L63941b:{c.instructions+=8;NFSU2_TR(0x63941b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x574ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B639421:{NFSU2_TR(0x639421);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x570ull))));
__builtin_memmove((R+4),(U+0),4);
}
B639427:{NFSU2_TR(0x639427);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B63942a:{NFSU2_TR(0x63942a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+8)),r4(U+0));
}
B63942c:{NFSU2_TR(0x63942c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B63942e:{NFSU2_TR(0x63942e);
__builtin_memmove((R+0),gp(0x8a1c1c),4);
}
B639433:{NFSU2_TR(0x639433);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B639434:{NFSU2_TR(0x639434);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x639439ull));
TAIL_STATIC(0x440e50u,440);
}
B639439:L639439:{c.instructions+=3;NFSU2_TR(0x639439);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B63943c:{NFSU2_TR(0x63943c);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B63943e:{NFSU2_TR(0x63943e);
if(r1(R+518)){{goto L63948a;}}
}
B639440:L639440:{c.instructions+=23;NFSU2_TR(0x639440);
{u32 ea_=u32(r4(R+28)+u32(72u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B639443:{NFSU2_TR(0x639443);
{u32 ea_=u32(r4(R+28)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B639446:{NFSU2_TR(0x639446);
{u32 ea_=u32(r4(R+28)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B639449:{NFSU2_TR(0x639449);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B63944c:{NFSU2_TR(0x63944c);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B639450:{NFSU2_TR(0x639450);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B639454:{NFSU2_TR(0x639454);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0xfffffffeull))));
}
B639457:{NFSU2_TR(0x639457);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B63945b:{NFSU2_TR(0x63945b);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63945f:{NFSU2_TR(0x63945f);
__builtin_memmove((R+8),(R+4),4);
}
B639461:{NFSU2_TR(0x639461);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B639465:{NFSU2_TR(0x639465);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0xfffffffeull))));
}
B639468:{NFSU2_TR(0x639468);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B63946c:{NFSU2_TR(0x63946c);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B639470:{NFSU2_TR(0x639470);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B639473:{NFSU2_TR(0x639473);
__builtin_memmove((R+8),(R+4),4);
}
B639475:{NFSU2_TR(0x639475);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B639479:{NFSU2_TR(0x639479);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0xfffffffeull))));
}
B63947c:{NFSU2_TR(0x63947c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B63947f:{NFSU2_TR(0x63947f);
__builtin_memmove((R+8),(R+4),4);
}
B639481:{NFSU2_TR(0x639481);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B639485:{NFSU2_TR(0x639485);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B639488:{NFSU2_TR(0x639488);
{goto L63948c;}
}
B63948a:L63948a:{c.instructions+=1;NFSU2_TR(0x63948a);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B63948c:L63948c:{c.instructions+=8;NFSU2_TR(0x63948c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x57cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B639492:{NFSU2_TR(0x639492);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x578ull))));
__builtin_memmove((R+4),(U+0),4);
}
B639498:{NFSU2_TR(0x639498);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B63949b:{NFSU2_TR(0x63949b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+8)),r4(U+0));
}
B63949d:{NFSU2_TR(0x63949d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B63949f:{NFSU2_TR(0x63949f);
__builtin_memmove((R+0),gp(0x8a1c1c),4);
}
B6394a4:{NFSU2_TR(0x6394a4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6394a5:{NFSU2_TR(0x6394a5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6394aaull));
TAIL_STATIC(0x440e50u,440);
}
B6394aa:L6394aa:{c.instructions+=3;NFSU2_TR(0x6394aa);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6394ad:{NFSU2_TR(0x6394ad);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6394af:{NFSU2_TR(0x6394af);
if(r1(R+518)){{goto L6394fb;}}
}
B6394b1:L6394b1:{c.instructions+=23;NFSU2_TR(0x6394b1);
{u32 ea_=u32(r4(R+28)+u32(120u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6394b4:{NFSU2_TR(0x6394b4);
{u32 ea_=u32(r4(R+28)+u32(116u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6394b7:{NFSU2_TR(0x6394b7);
{u32 ea_=u32(r4(R+28)+u32(112u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6394ba:{NFSU2_TR(0x6394ba);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6394bd:{NFSU2_TR(0x6394bd);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6394c1:{NFSU2_TR(0x6394c1);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6394c5:{NFSU2_TR(0x6394c5);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0xfffffffeull))));
}
B6394c8:{NFSU2_TR(0x6394c8);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6394cc:{NFSU2_TR(0x6394cc);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6394d0:{NFSU2_TR(0x6394d0);
__builtin_memmove((R+8),(R+4),4);
}
B6394d2:{NFSU2_TR(0x6394d2);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6394d6:{NFSU2_TR(0x6394d6);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0xfffffffeull))));
}
B6394d9:{NFSU2_TR(0x6394d9);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6394dd:{NFSU2_TR(0x6394dd);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6394e1:{NFSU2_TR(0x6394e1);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6394e4:{NFSU2_TR(0x6394e4);
__builtin_memmove((R+8),(R+4),4);
}
B6394e6:{NFSU2_TR(0x6394e6);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6394ea:{NFSU2_TR(0x6394ea);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0xfffffffeull))));
}
B6394ed:{NFSU2_TR(0x6394ed);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6394f0:{NFSU2_TR(0x6394f0);
__builtin_memmove((R+8),(R+4),4);
}
B6394f2:{NFSU2_TR(0x6394f2);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6394f6:{NFSU2_TR(0x6394f6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6394f9:{NFSU2_TR(0x6394f9);
{goto L6394fd;}
}
B6394fb:L6394fb:{c.instructions+=1;NFSU2_TR(0x6394fb);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6394fd:L6394fd:{c.instructions+=8;NFSU2_TR(0x6394fd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x584ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B639503:{NFSU2_TR(0x639503);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x580ull))));
__builtin_memmove((R+4),(U+0),4);
}
B639509:{NFSU2_TR(0x639509);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B63950c:{NFSU2_TR(0x63950c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+8)),r4(U+0));
}
B63950e:{NFSU2_TR(0x63950e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B639510:{NFSU2_TR(0x639510);
__builtin_memmove((R+0),gp(0x8a1c1c),4);
}
B639515:{NFSU2_TR(0x639515);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B639516:{NFSU2_TR(0x639516);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x63951bull));
TAIL_STATIC(0x440e50u,440);
}
B63951b:L63951b:{c.instructions+=3;NFSU2_TR(0x63951b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B63951e:{NFSU2_TR(0x63951e);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B639520:{NFSU2_TR(0x639520);
if(r1(R+518)){{goto L639575;}}
}
B639522:L639522:{c.instructions+=23;NFSU2_TR(0x639522);
{u32 ea_=u32(r4(R+28)+u32(168u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B639528:{NFSU2_TR(0x639528);
{u32 ea_=u32(r4(R+28)+u32(164u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63952e:{NFSU2_TR(0x63952e);
{u32 ea_=u32(r4(R+28)+u32(160u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B639534:{NFSU2_TR(0x639534);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B639537:{NFSU2_TR(0x639537);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63953b:{NFSU2_TR(0x63953b);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B63953f:{NFSU2_TR(0x63953f);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0xfffffffeull))));
}
B639542:{NFSU2_TR(0x639542);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B639546:{NFSU2_TR(0x639546);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63954a:{NFSU2_TR(0x63954a);
__builtin_memmove((R+8),(R+4),4);
}
B63954c:{NFSU2_TR(0x63954c);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B639550:{NFSU2_TR(0x639550);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0xfffffffeull))));
}
B639553:{NFSU2_TR(0x639553);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B639557:{NFSU2_TR(0x639557);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63955b:{NFSU2_TR(0x63955b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B63955e:{NFSU2_TR(0x63955e);
__builtin_memmove((R+8),(R+4),4);
}
B639560:{NFSU2_TR(0x639560);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B639564:{NFSU2_TR(0x639564);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0xfffffffeull))));
}
B639567:{NFSU2_TR(0x639567);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B63956a:{NFSU2_TR(0x63956a);
__builtin_memmove((R+8),(R+4),4);
}
B63956c:{NFSU2_TR(0x63956c);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B639570:{NFSU2_TR(0x639570);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B639573:{NFSU2_TR(0x639573);
{goto L639577;}
}
B639575:L639575:{c.instructions+=1;NFSU2_TR(0x639575);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B639577:L639577:{c.instructions+=9;NFSU2_TR(0x639577);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B63957d:{NFSU2_TR(0x63957d);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x588ull))));
__builtin_memmove((R+4),(U+0),4);
}
B639583:{NFSU2_TR(0x639583);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B639586:{NFSU2_TR(0x639586);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+8)),r4(U+0));
}
B639588:{NFSU2_TR(0x639588);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B63958a:{NFSU2_TR(0x63958a);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x17a8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B639590:{NFSU2_TR(0x639590);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B639594:{NFSU2_TR(0x639594);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B639598:{NFSU2_TR(0x639598);
{goto L6395a0;}
}
B6395a0:L6395a0:{c.instructions+=5;NFSU2_TR(0x6395a0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6395a3:{NFSU2_TR(0x6395a3);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6395a7:{NFSU2_TR(0x6395a7);
u8 U[13];
w4(U+0,u32(u32(u32(0x838ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
__builtin_memmove((R+8),(U+12),1);
}
B6395ae:{NFSU2_TR(0x6395ae);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(r1(R+8))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6395b0:{NFSU2_TR(0x6395b0);
if(r1(R+518)){{goto L639932;}}
}
B6395b6:L6395b6:{c.instructions+=5;NFSU2_TR(0x6395b6);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6395ba:{NFSU2_TR(0x6395ba);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6395bc:{NFSU2_TR(0x6395bc);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6395be:{NFSU2_TR(0x6395be);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6395c2:{NFSU2_TR(0x6395c2);
if(r1(R+518)){{goto L639932;}}
}
B6395c8:L6395c8:{c.instructions+=3;NFSU2_TR(0x6395c8);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6395ca:{NFSU2_TR(0x6395ca);
__builtin_memmove((R+4),(R+0),4);
}
B6395cc:{NFSU2_TR(0x6395cc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6395d1ull));
TAIL_STATIC(0x48d8a0u,48d);
}
B6395d1:L6395d1:{c.instructions+=3;NFSU2_TR(0x6395d1);
__builtin_memmove((R+12),(R+0),4);
}
B6395d3:{NFSU2_TR(0x6395d3);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6395d5:{NFSU2_TR(0x6395d5);
if(r1(R+518)){{goto L639932;}}
}
B6395db:L6395db:{c.instructions+=1;NFSU2_TR(0x6395db);
{goto L6395e0;}
}
B6395e0:L6395e0:{c.instructions+=4;NFSU2_TR(0x6395e0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6395e2:{NFSU2_TR(0x6395e2);
u8 U[4];
w1(R+512,u8((r4(R+0))<(u32(0x9db90133ull))));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x9db90133ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6395e7:{NFSU2_TR(0x6395e7);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6395ef:{NFSU2_TR(0x6395ef);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L639716;}}
}
B6395f5:L6395f5:{c.instructions+=1;NFSU2_TR(0x6395f5);
if(r1(R+518)){{goto L639773;}}
}
B6395fb:L6395fb:{c.instructions+=2;NFSU2_TR(0x6395fb);
u8 U[4];
w1(R+512,u8((r4(R+0))<(u32(0x494ed280ull))));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x494ed280ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B639600:{NFSU2_TR(0x639600);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L63969a;}}
}
B639606:L639606:{c.instructions+=1;NFSU2_TR(0x639606);
if(r1(R+518)){{goto L6397f5;}}
}
B63960c:L63960c:{c.instructions+=2;NFSU2_TR(0x63960c);
u8 U[4];
w1(R+512,u8((r4(R+0))<(u32(0x1b0763a0ull))));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x1b0763a0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B639611:{NFSU2_TR(0x639611);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L639655;}}
}
B639613:L639613:{c.instructions+=1;NFSU2_TR(0x639613);
if(r1(R+518)){{goto L63968f;}}
}
B639615:L639615:{c.instructions+=2;NFSU2_TR(0x639615);
u8 U[4];
w1(R+512,u8((r4(R+0))<(u32(0xab88f5dull))));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xab88f5dull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B63961a:{NFSU2_TR(0x63961a);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L63963f;}}
}
B63961c:L63961c:{c.instructions+=1;NFSU2_TR(0x63961c);
if(r1(R+518)){{goto L639679;}}
}
B63961e:L63961e:{c.instructions+=2;NFSU2_TR(0x63961e);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x2b52399ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B639623:{NFSU2_TR(0x639623);
if(r1(R+518)){{goto L6397b4;}}
}
B639629:L639629:{c.instructions+=2;NFSU2_TR(0x639629);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x5f63788ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B63962e:{NFSU2_TR(0x63962e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L63991e;}}
}
B639634:L639634:{c.instructions+=2;NFSU2_TR(0x639634);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x608ull))));
__builtin_memmove((R+28),(U+0),4);
}
B63963a:{NFSU2_TR(0x63963a);
{goto L639849;}
}
B63963f:L63963f:{c.instructions+=2;NFSU2_TR(0x63963f);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xbea251bull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B639644:{NFSU2_TR(0x639644);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L63991e;}}
}
B63964a:L63964a:{c.instructions+=2;NFSU2_TR(0x63964a);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x610ull))));
__builtin_memmove((R+28),(U+0),4);
}
B639650:{NFSU2_TR(0x639650);
{goto L639849;}
}
B639655:L639655:{c.instructions+=2;NFSU2_TR(0x639655);
u8 U[4];
w1(R+512,u8((r4(R+0))<(u32(0x3df28f69ull))));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x3df28f69ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B63965a:{NFSU2_TR(0x63965a);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L639684;}}
}
B63965c:L63965c:{c.instructions+=1;NFSU2_TR(0x63965c);
if(r1(R+518)){{goto L639843;}}
}
B639662:L639662:{c.instructions+=2;NFSU2_TR(0x639662);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x2f96d0fdull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B639667:{NFSU2_TR(0x639667);
if(r1(R+518)){{goto L639679;}}
}
B639669:L639669:{c.instructions+=2;NFSU2_TR(0x639669);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x31a66786ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B63966e:{NFSU2_TR(0x63966e);
if(r1(R+518)){{goto L639808;}}
}
B639674:L639674:{c.instructions+=1;NFSU2_TR(0x639674);
{goto L63991e;}
}
B639679:L639679:{c.instructions+=2;NFSU2_TR(0x639679);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5d0ull))));
__builtin_memmove((R+28),(U+0),4);
}
B63967f:{NFSU2_TR(0x63967f);
{goto L639849;}
}
B639684:L639684:{c.instructions+=2;NFSU2_TR(0x639684);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x3f68f920ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B639689:{NFSU2_TR(0x639689);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L63991e;}}
}
B63968f:L63968f:{c.instructions+=2;NFSU2_TR(0x63968f);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5b0ull))));
__builtin_memmove((R+28),(U+0),4);
}
B639695:{NFSU2_TR(0x639695);
{goto L639849;}
}
B63969a:L63969a:{c.instructions+=2;NFSU2_TR(0x63969a);
u8 U[4];
w1(R+512,u8((r4(R+0))<(u32(0x68100815ull))));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x68100815ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B63969f:{NFSU2_TR(0x63969f);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L6396ee;}}
}
B6396a1:L6396a1:{c.instructions+=1;NFSU2_TR(0x6396a1);
if(r1(R+518)){{goto L6396e3;}}
}
B6396a3:L6396a3:{c.instructions+=2;NFSU2_TR(0x6396a3);
u8 U[4];
w1(R+512,u8((r4(R+0))<(u32(0x60f8b13cull))));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x60f8b13cull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6396a8:{NFSU2_TR(0x6396a8);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L6396cd;}}
}
B6396aa:L6396aa:{c.instructions+=1;NFSU2_TR(0x6396aa);
if(r1(R+518)){{goto L6396d8;}}
}
B6396ac:L6396ac:{c.instructions+=2;NFSU2_TR(0x6396ac);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x4cdebfcaull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6396b1:{NFSU2_TR(0x6396b1);
if(r1(R+518)){{goto L63983b;}}
}
B6396b7:L6396b7:{c.instructions+=2;NFSU2_TR(0x6396b7);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x59a55db5ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6396bc:{NFSU2_TR(0x6396bc);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L63991e;}}
}
B6396c2:L6396c2:{c.instructions+=2;NFSU2_TR(0x6396c2);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x590ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6396c8:{NFSU2_TR(0x6396c8);
{goto L639849;}
}
B6396cd:L6396cd:{c.instructions+=2;NFSU2_TR(0x6396cd);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x64b0bb1cull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6396d2:{NFSU2_TR(0x6396d2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L63991e;}}
}
B6396d8:L6396d8:{c.instructions+=2;NFSU2_TR(0x6396d8);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5c8ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6396de:{NFSU2_TR(0x6396de);
{goto L639849;}
}
B6396e3:L6396e3:{c.instructions+=2;NFSU2_TR(0x6396e3);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5a0ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6396e9:{NFSU2_TR(0x6396e9);
{goto L639849;}
}
B6396ee:L6396ee:{c.instructions+=2;NFSU2_TR(0x6396ee);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x6ec7e79full))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6396f3:{NFSU2_TR(0x6396f3);
if(r1(R+518)){{goto L63970b;}}
}
B6396f5:L6396f5:{c.instructions+=2;NFSU2_TR(0x6396f5);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x725758bfull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6396fa:{NFSU2_TR(0x6396fa);
if(r1(R+518)){{goto L639788;}}
}
B639700:L639700:{c.instructions+=2;NFSU2_TR(0x639700);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x7b220ddfull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B639705:{NFSU2_TR(0x639705);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L63991e;}}
}
B63970b:L63970b:{c.instructions+=2;NFSU2_TR(0x63970b);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5a8ull))));
__builtin_memmove((R+28),(U+0),4);
}
B639711:{NFSU2_TR(0x639711);
{goto L639849;}
}
B639716:L639716:{c.instructions+=2;NFSU2_TR(0x639716);
u8 U[4];
w1(R+512,u8((r4(R+0))<(u32(0xc4ec23c8ull))));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xc4ec23c8ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B63971b:{NFSU2_TR(0x63971b);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L6397c9;}}
}
B639721:L639721:{c.instructions+=1;NFSU2_TR(0x639721);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x639634u);}goto L639634;}}
}
B639727:L639727:{c.instructions+=2;NFSU2_TR(0x639727);
u8 U[4];
w1(R+512,u8((r4(R+0))<(u32(0xaa35c17full))));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xaa35c17full))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B63972c:{NFSU2_TR(0x63972c);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L639793;}}
}
B63972e:L63972e:{c.instructions+=1;NFSU2_TR(0x63972e);
if(r1(R+518)){{goto L639788;}}
}
B639730:L639730:{c.instructions+=2;NFSU2_TR(0x639730);
u8 U[4];
w1(R+512,u8((r4(R+0))<(u32(0xa5b28001ull))));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xa5b28001ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B639735:{NFSU2_TR(0x639735);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L639768;}}
}
B639737:L639737:{c.instructions+=1;NFSU2_TR(0x639737);
if(r1(R+518)){{goto L639833;}}
}
B63973d:L63973d:{c.instructions+=2;NFSU2_TR(0x63973d);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xa2799c2bull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B639742:{NFSU2_TR(0x639742);
if(r1(R+518)){{goto L639833;}}
}
B639748:L639748:{c.instructions+=2;NFSU2_TR(0x639748);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xa532fc46ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B63974d:{NFSU2_TR(0x63974d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L63991e;}}
}
B639753:L639753:{c.instructions+=4;NFSU2_TR(0x639753);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5f0ull))));
__builtin_memmove((R+8),(U+0),4);
}
B639759:{NFSU2_TR(0x639759);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5d8ull))));
__builtin_memmove((R+28),(U+0),4);
}
B63975f:{NFSU2_TR(0x63975f);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B639763:{NFSU2_TR(0x639763);
{goto L639849;}
}
B639768:L639768:{c.instructions+=2;NFSU2_TR(0x639768);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xa7e6ea53ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B63976d:{NFSU2_TR(0x63976d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L63991e;}}
}
B639773:L639773:{c.instructions+=4;NFSU2_TR(0x639773);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5e8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B639779:{NFSU2_TR(0x639779);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5d8ull))));
__builtin_memmove((R+28),(U+0),4);
}
B63977f:{NFSU2_TR(0x63977f);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B639783:{NFSU2_TR(0x639783);
{goto L639849;}
}
B639788:L639788:{c.instructions+=2;NFSU2_TR(0x639788);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x618ull))));
__builtin_memmove((R+28),(U+0),4);
}
B63978e:{NFSU2_TR(0x63978e);
{goto L639849;}
}
B639793:L639793:{c.instructions+=2;NFSU2_TR(0x639793);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xbcf8a18bull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B639798:{NFSU2_TR(0x639798);
if(r1(R+518)){{goto L639833;}}
}
B63979e:L63979e:{c.instructions+=2;NFSU2_TR(0x63979e);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xbd7cf15eull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6397a3:{NFSU2_TR(0x6397a3);
if(r1(R+518)){{goto L639833;}}
}
B6397a9:L6397a9:{c.instructions+=2;NFSU2_TR(0x6397a9);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xbf700a79ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6397ae:{NFSU2_TR(0x6397ae);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L63991e;}}
}
B6397b4:L6397b4:{c.instructions+=4;NFSU2_TR(0x6397b4);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x600ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6397ba:{NFSU2_TR(0x6397ba);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5e0ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6397c0:{NFSU2_TR(0x6397c0);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6397c4:{NFSU2_TR(0x6397c4);
{goto L639849;}
}
B6397c9:L6397c9:{c.instructions+=2;NFSU2_TR(0x6397c9);
u8 U[4];
w1(R+512,u8((r4(R+0))<(u32(0xdf066a41ull))));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xdf066a41ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6397ce:{NFSU2_TR(0x6397ce);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L63981a;}}
}
B6397d0:L6397d0:{c.instructions+=1;NFSU2_TR(0x6397d0);
if(r1(R+518)){{goto L639833;}}
}
B6397d2:L6397d2:{c.instructions+=2;NFSU2_TR(0x6397d2);
u8 U[4];
w1(R+512,u8((r4(R+0))<(u32(0xd09091c6ull))));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xd09091c6ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6397d7:{NFSU2_TR(0x6397d7);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L6397fd;}}
}
B6397d9:L6397d9:{c.instructions+=1;NFSU2_TR(0x6397d9);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x639753u);}goto L639753;}}
}
B6397df:L6397df:{c.instructions+=2;NFSU2_TR(0x6397df);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xc52bf01bull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6397e4:{NFSU2_TR(0x6397e4);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x63964au);}goto L63964a;}}
}
B6397ea:L6397ea:{c.instructions+=2;NFSU2_TR(0x6397ea);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xc805f7e0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6397ef:{NFSU2_TR(0x6397ef);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L63991e;}}
}
B6397f5:L6397f5:{c.instructions+=2;NFSU2_TR(0x6397f5);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x620ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6397fb:{NFSU2_TR(0x6397fb);
{goto L639849;}
}
B6397fd:L6397fd:{c.instructions+=2;NFSU2_TR(0x6397fd);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xd947f346ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B639802:{NFSU2_TR(0x639802);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L63991e;}}
}
B639808:L639808:{c.instructions+=4;NFSU2_TR(0x639808);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5f8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B63980e:{NFSU2_TR(0x63980e);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5e0ull))));
__builtin_memmove((R+28),(U+0),4);
}
B639814:{NFSU2_TR(0x639814);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B639818:{NFSU2_TR(0x639818);
{goto L639849;}
}
B63981a:L63981a:{c.instructions+=2;NFSU2_TR(0x63981a);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xe7e4ef49ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B63981f:{NFSU2_TR(0x63981f);
if(r1(R+518)){{goto L639843;}}
}
B639821:L639821:{c.instructions+=2;NFSU2_TR(0x639821);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xe898cfaaull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B639826:{NFSU2_TR(0x639826);
if(r1(R+518)){{goto L63983b;}}
}
B639828:L639828:{c.instructions+=2;NFSU2_TR(0x639828);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xf21be91eull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B63982d:{NFSU2_TR(0x63982d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L63991e;}}
}
B639833:L639833:{c.instructions+=2;NFSU2_TR(0x639833);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x598ull))));
__builtin_memmove((R+28),(U+0),4);
}
B639839:{NFSU2_TR(0x639839);
{goto L639849;}
}
B63983b:L63983b:{c.instructions+=2;NFSU2_TR(0x63983b);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5c0ull))));
__builtin_memmove((R+28),(U+0),4);
}
B639841:{NFSU2_TR(0x639841);
{goto L639849;}
}
B639843:L639843:{c.instructions+=1;NFSU2_TR(0x639843);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5b8ull))));
__builtin_memmove((R+28),(U+0),4);
}
B639849:L639849:{c.instructions+=2;NFSU2_TR(0x639849);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B63984b:{NFSU2_TR(0x63984b);
if(r1(R+518)){{goto L6398b0;}}
}
B63984d:L63984d:{c.instructions+=3;NFSU2_TR(0x63984d);
__builtin_memmove((R+4),gp(0x8a1c1c),4);
}
B639853:{NFSU2_TR(0x639853);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B639854:{NFSU2_TR(0x639854);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x639859ull));
TAIL_STATIC(0x440e50u,440);
}
B639859:L639859:{c.instructions+=3;NFSU2_TR(0x639859);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B63985c:{NFSU2_TR(0x63985c);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B63985e:{NFSU2_TR(0x63985e);
if(r1(R+518)){{goto L6398a4;}}
}
B639860:L639860:{c.instructions+=23;NFSU2_TR(0x639860);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B639863:{NFSU2_TR(0x639863);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B639866:{NFSU2_TR(0x639866);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B639869:{NFSU2_TR(0x639869);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B63986c:{NFSU2_TR(0x63986c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B63986f:{NFSU2_TR(0x63986f);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B639872:{NFSU2_TR(0x639872);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B639875:{NFSU2_TR(0x639875);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B639878:{NFSU2_TR(0x639878);
__builtin_memmove((R+8),(R+4),4);
}
B63987a:{NFSU2_TR(0x63987a);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0xfffffffeull))));
}
B63987d:{NFSU2_TR(0x63987d);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B639881:{NFSU2_TR(0x639881);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B639884:{NFSU2_TR(0x639884);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B639887:{NFSU2_TR(0x639887);
__builtin_memmove((R+8),(R+4),4);
}
B639889:{NFSU2_TR(0x639889);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0xfffffffeull))));
}
B63988c:{NFSU2_TR(0x63988c);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B639890:{NFSU2_TR(0x639890);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B639893:{NFSU2_TR(0x639893);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B639896:{NFSU2_TR(0x639896);
__builtin_memmove((R+8),(R+4),4);
}
B639898:{NFSU2_TR(0x639898);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0xfffffffeull))));
}
B63989b:{NFSU2_TR(0x63989b);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B63989f:{NFSU2_TR(0x63989f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6398a2:{NFSU2_TR(0x6398a2);
{goto L6398a6;}
}
B6398a4:L6398a4:{c.instructions+=1;NFSU2_TR(0x6398a4);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6398a6:L6398a6:{c.instructions+=4;NFSU2_TR(0x6398a6);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6398a9:{NFSU2_TR(0x6398a9);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6398ac:{NFSU2_TR(0x6398ac);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B6398ae:{NFSU2_TR(0x6398ae);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
s4(u32(r4(R+0)),r4(U+0));
}
B6398b0:L6398b0:{c.instructions+=3;NFSU2_TR(0x6398b0);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6398b4:{NFSU2_TR(0x6398b4);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6398b6:{NFSU2_TR(0x6398b6);
if(r1(R+518)){{goto L63991e;}}
}
B6398b8:L6398b8:{c.instructions+=3;NFSU2_TR(0x6398b8);
__builtin_memmove((R+0),gp(0x8a1c1c),4);
}
B6398bd:{NFSU2_TR(0x6398bd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6398be:{NFSU2_TR(0x6398be);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6398c3ull));
TAIL_STATIC(0x440e50u,440);
}
B6398c3:L6398c3:{c.instructions+=3;NFSU2_TR(0x6398c3);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6398c6:{NFSU2_TR(0x6398c6);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6398c8:{NFSU2_TR(0x6398c8);
if(r1(R+518)){{goto L63990e;}}
}
B6398ca:L6398ca:{c.instructions+=23;NFSU2_TR(0x6398ca);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6398cd:{NFSU2_TR(0x6398cd);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6398d0:{NFSU2_TR(0x6398d0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6398d3:{NFSU2_TR(0x6398d3);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6398d6:{NFSU2_TR(0x6398d6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6398d9:{NFSU2_TR(0x6398d9);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6398dc:{NFSU2_TR(0x6398dc);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6398df:{NFSU2_TR(0x6398df);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6398e2:{NFSU2_TR(0x6398e2);
__builtin_memmove((R+4),(R+8),4);
}
B6398e4:{NFSU2_TR(0x6398e4);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0xfffffffeull))));
}
B6398e7:{NFSU2_TR(0x6398e7);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6398eb:{NFSU2_TR(0x6398eb);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6398ee:{NFSU2_TR(0x6398ee);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6398f1:{NFSU2_TR(0x6398f1);
__builtin_memmove((R+4),(R+8),4);
}
B6398f3:{NFSU2_TR(0x6398f3);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0xfffffffeull))));
}
B6398f6:{NFSU2_TR(0x6398f6);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6398fa:{NFSU2_TR(0x6398fa);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6398fd:{NFSU2_TR(0x6398fd);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B639900:{NFSU2_TR(0x639900);
__builtin_memmove((R+4),(R+8),4);
}
B639902:{NFSU2_TR(0x639902);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0xfffffffeull))));
}
B639905:{NFSU2_TR(0x639905);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B639909:{NFSU2_TR(0x639909);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B63990c:{NFSU2_TR(0x63990c);
{goto L639910;}
}
B63990e:L63990e:{c.instructions+=1;NFSU2_TR(0x63990e);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B639910:L639910:{c.instructions+=5;NFSU2_TR(0x639910);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B639914:{NFSU2_TR(0x639914);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B639917:{NFSU2_TR(0x639917);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B63991a:{NFSU2_TR(0x63991a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B63991c:{NFSU2_TR(0x63991c);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+0)),r4(U+0));
}
B63991e:L63991e:{c.instructions+=3;NFSU2_TR(0x63991e);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B639922:{NFSU2_TR(0x639922);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B639923:{NFSU2_TR(0x639923);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x639928ull));
TAIL_STATIC(0x48d8a0u,48d);
}
B639928:L639928:{c.instructions+=3;NFSU2_TR(0x639928);
__builtin_memmove((R+12),(R+0),4);
}
B63992a:{NFSU2_TR(0x63992a);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B63992c:{NFSU2_TR(0x63992c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6395e0u);}goto L6395e0;}}
}
B639932:L639932:{c.instructions+=8;NFSU2_TR(0x639932);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B639936:{NFSU2_TR(0x639936);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B63993a:{NFSU2_TR(0x63993a);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B63993b:{NFSU2_TR(0x63993b);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x20ull))));
}
B63993e:{NFSU2_TR(0x63993e);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x3eull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3eull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B639941:{NFSU2_TR(0x639941);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B639945:{NFSU2_TR(0x639945);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B639949:{NFSU2_TR(0x639949);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6395a0u);}goto L6395a0;}}
}
B63994f:L63994f:{c.instructions+=3;NFSU2_TR(0x63994f);
u8 U[8];
w4(U+0,u32(u32(u32(0x6cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B639953:{NFSU2_TR(0x639953);
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
B639955:{NFSU2_TR(0x639955);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L639984;}}
}
B639957:L639957:{c.instructions+=2;NFSU2_TR(0x639957);
w4(R+28,u32(0x8027c4ull));
}
B63995c:{NFSU2_TR(0x63995c);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x458ull))));
__builtin_memmove((R+12),(U+0),4);
}
B639962:L639962:{c.instructions+=2;NFSU2_TR(0x639962);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x80282cull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B639968:{NFSU2_TR(0x639968);
if(r1(R+518)){{goto L639976;}}
}
B63996a:L63996a:{c.instructions+=4;NFSU2_TR(0x63996a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+8),(U+0),4);
}
B63996c:{NFSU2_TR(0x63996c);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63996d:{NFSU2_TR(0x63996d);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63996e:{NFSU2_TR(0x63996e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x639973ull));
TAIL_STATIC(0x48b8b0u,48b);
}
B639973:L639973:{c.instructions+=1;NFSU2_TR(0x639973);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B639976:L639976:{c.instructions+=4;NFSU2_TR(0x639976);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x8ull))));
}
B639979:{NFSU2_TR(0x639979);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x8ull))));
}
B63997c:{NFSU2_TR(0x63997c);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
w1(R+512,u8((r4(U+6))<(u32(0x8028b4ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x8028b4ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x8028b4ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B639982:{NFSU2_TR(0x639982);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x639962u);}goto L639962;}}
}
B639984:L639984:{c.instructions+=9;NFSU2_TR(0x639984);
u8 U[8];
w4(U+0,u32(u32(u32(0x2e4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B63998b:{NFSU2_TR(0x63998b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B63998c:{NFSU2_TR(0x63998c);
__builtin_memmove((R+0),(R+24),4);
}
B63998e:{NFSU2_TR(0x63998e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B63998f:{NFSU2_TR(0x63998f);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B639996:{NFSU2_TR(0x639996);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B639997:{NFSU2_TR(0x639997);
__builtin_memmove((R+16),(R+20),4);
}
B639999:{NFSU2_TR(0x639999);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B63999a:{NFSU2_TR(0x63999a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6399d0:L6399d0:{c.instructions+=8;NFSU2_TR(0x6399d0);
u8 U[5];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B6399d4:{NFSU2_TR(0x6399d4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x44ull))));
}
B6399d7:{NFSU2_TR(0x6399d7);
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
B6399d9:{NFSU2_TR(0x6399d9);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6399da:{NFSU2_TR(0x6399da);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6399db:{NFSU2_TR(0x6399db);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6399dc:{NFSU2_TR(0x6399dc);
__builtin_memmove((R+28),(R+4),4);
}
B6399de:{NFSU2_TR(0x6399de);
if(r1(R+518)){{goto L639a92;}}
}
B6399e4:L6399e4:{c.instructions+=4;NFSU2_TR(0x6399e4);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x2f0ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6399ea:{NFSU2_TR(0x6399ea);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6399ec:{NFSU2_TR(0x6399ec);
__builtin_memmove((R+4),(R+24),4);
}
B6399ee:{NFSU2_TR(0x6399ee);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6399f3ull));
TAIL_STATIC(0x599600u,599);
}
B6399f3:L6399f3:{c.instructions+=4;NFSU2_TR(0x6399f3);
{u32 ea_=u32(r4(R+16)+u32(84u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6399f7:{NFSU2_TR(0x6399f7);
u8 U[4];
w4(U+0,u32(0x5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6399f9:{NFSU2_TR(0x6399f9);
__builtin_memmove((R+4),(R+24),4);
}
B6399fb:{NFSU2_TR(0x6399fb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x639a00ull));
TAIL_STATIC(0x599600u,599);
}
B639a00:L639a00:{c.instructions+=5;NFSU2_TR(0x639a00);
{u32 ea_=u32(r4(R+16)+u32(84u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B639a04:{NFSU2_TR(0x639a04);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B639a06:{NFSU2_TR(0x639a06);
__builtin_memmove((R+4),(R+24),4);
}
B639a08:{NFSU2_TR(0x639a08);
{u32 ea_=u32(r4(R+16)+u32(88u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B639a0c:{NFSU2_TR(0x639a0c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x639a11ull));
TAIL_STATIC(0x599600u,599);
}
B639a11:L639a11:{c.instructions+=9;NFSU2_TR(0x639a11);
{u32 ea_=u32(r4(R+16)+u32(84u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B639a15:{NFSU2_TR(0x639a15);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
w4(U+4,u32(0x9ull));
s4(u32(r4(U+0)),r4(U+4));
}
B639a1d:{NFSU2_TR(0x639a1d);
{u32 ea_=u32(u32(7889736u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B639a23:{NFSU2_TR(0x639a23);
{u32 ea_=u32(r4(R+16)+u32(84u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B639a27:{NFSU2_TR(0x639a27);
{u32 ea_=u32(r4(R+16)+u32(84u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B639a2b:{NFSU2_TR(0x639a2b);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B639a31:{NFSU2_TR(0x639a31);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B639a33:{NFSU2_TR(0x639a33);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B639a36:{NFSU2_TR(0x639a36);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L639a59;}}
}
B639a38:L639a38:{c.instructions+=6;NFSU2_TR(0x639a38);
{u32 ea_=u32(r4(R+16)+u32(84u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B639a3c:{NFSU2_TR(0x639a3c);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B639a42:{NFSU2_TR(0x639a42);
{u32 ea_=u32(r4(R+16)+u32(84u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B639a46:{NFSU2_TR(0x639a46);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B639a48:{NFSU2_TR(0x639a48);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B639a4b:{NFSU2_TR(0x639a4b);
if(r1(R+514)){{goto L639a5f;}}
}
B639a4d:L639a4d:{c.instructions+=3;NFSU2_TR(0x639a4d);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B639a4f:{NFSU2_TR(0x639a4f);
u8 U[8];
w4(U+0,u32(u32(u32(0x54ull))+u32(r4(R+16))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B639a57:{NFSU2_TR(0x639a57);
{goto L639a63;}
}
B639a59:L639a59:{c.instructions+=1;NFSU2_TR(0x639a59);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B639a5f:L639a5f:{c.instructions+=1;NFSU2_TR(0x639a5f);
{u32 ea_=u32(r4(R+16)+u32(84u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B639a63:L639a63:{c.instructions+=7;NFSU2_TR(0x639a63);
u8 U[8];
w4(U+0,u32(u32(u32(0x54ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B639a67:{NFSU2_TR(0x639a67);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B639a69:{NFSU2_TR(0x639a69);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B639a6d:{NFSU2_TR(0x639a6d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B639a6e:{NFSU2_TR(0x639a6e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B639a6f:{NFSU2_TR(0x639a6f);
__builtin_memmove((R+4),(R+24),4);
}
B639a71:{NFSU2_TR(0x639a71);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x639a76ull));
TAIL_STATIC(0x5a6880u,5a6);
}
B639a76:L639a76:{c.instructions+=4;NFSU2_TR(0x639a76);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B639a78:{NFSU2_TR(0x639a78);
u8 U[5];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B639a7c:{NFSU2_TR(0x639a7c);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B639a7e:{NFSU2_TR(0x639a7e);
if(r1(R+518)){{goto L639ba9;}}
}
B639a84:L639a84:{c.instructions+=3;NFSU2_TR(0x639a84);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B639a86:{NFSU2_TR(0x639a86);
__builtin_memmove((R+4),(R+28),4);
}
B639a88:{NFSU2_TR(0x639a88);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x639a8dull));
TAIL_STATIC(0x6374b0u,637);
}
B639a8d:L639a8d:{c.instructions+=1;NFSU2_TR(0x639a8d);
{goto L639ba9;}
}
B639a92:L639a92:{c.instructions+=3;NFSU2_TR(0x639a92);
__builtin_memmove((R+0),gp(0x7fc290),1);
}
B639a97:{NFSU2_TR(0x639a97);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B639a99:{NFSU2_TR(0x639a99);
if(r1(R+518)){{goto L639ba9;}}
}
B639a9f:L639a9f:{c.instructions+=19;NFSU2_TR(0x639a9f);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x5a8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B639aa5:{NFSU2_TR(0x639aa5);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B639aa7:{NFSU2_TR(0x639aa7);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B639aaf:{NFSU2_TR(0x639aaf);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(0x2ull));
s4(u32(r4(U+0)),r4(U+4));
}
B639ab7:{NFSU2_TR(0x639ab7);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0xbull));
s4(u32(r4(U+0)),r4(U+4));
}
B639abf:{NFSU2_TR(0x639abf);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0xcull));
s4(u32(r4(U+0)),r4(U+4));
}
B639ac7:{NFSU2_TR(0x639ac7);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
w4(U+4,u32(0x38ull));
s4(u32(r4(U+0)),r4(U+4));
}
B639acf:{NFSU2_TR(0x639acf);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
w4(U+4,u32(0x39ull));
s4(u32(r4(U+0)),r4(U+4));
}
B639ad7:{NFSU2_TR(0x639ad7);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
w4(U+4,u32(0x3aull));
s4(u32(r4(U+0)),r4(U+4));
}
B639adf:{NFSU2_TR(0x639adf);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
w4(U+4,u32(0x3eull));
s4(u32(r4(U+0)),r4(U+4));
}
B639ae7:{NFSU2_TR(0x639ae7);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
w4(U+4,u32(0x3full));
s4(u32(r4(U+0)),r4(U+4));
}
B639aef:{NFSU2_TR(0x639aef);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
w4(U+4,u32(0x40ull));
s4(u32(r4(U+0)),r4(U+4));
}
B639af7:{NFSU2_TR(0x639af7);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
w4(U+4,u32(0x3bull));
s4(u32(r4(U+0)),r4(U+4));
}
B639aff:{NFSU2_TR(0x639aff);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
w4(U+4,u32(0x3cull));
s4(u32(r4(U+0)),r4(U+4));
}
B639b07:{NFSU2_TR(0x639b07);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
w4(U+4,u32(0x3dull));
s4(u32(r4(U+0)),r4(U+4));
}
B639b0f:{NFSU2_TR(0x639b0f);
u8 U[8];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
w4(U+4,u32(0x41ull));
s4(u32(r4(U+0)),r4(U+4));
}
B639b17:{NFSU2_TR(0x639b17);
u8 U[8];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
w4(U+4,u32(0x42ull));
s4(u32(r4(U+0)),r4(U+4));
}
B639b1f:{NFSU2_TR(0x639b1f);
u8 U[8];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(R+16))));
w4(U+4,u32(0x43ull));
s4(u32(r4(U+0)),r4(U+4));
}
B639b27:{NFSU2_TR(0x639b27);
if(r1(R+518)){{goto L639b44;}}
}
B639b29:L639b29:{c.instructions+=4;NFSU2_TR(0x639b29);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x5ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B639b2c:{NFSU2_TR(0x639b2c);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w1(R+8,shr<u8>(r1(R+8),u64(r4(U+0))));
}
B639b2f:{NFSU2_TR(0x639b2f);
u8 U[1];
w1(R+523,u8(0x0ull));
w1(U+0,u8(u32(r1(R+8))&u32(r1(R+8))));
w1(R+519,u8(s8(r1(U+0))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B639b31:{NFSU2_TR(0x639b31);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L639b44;}}
}
B639b33:L639b33:{c.instructions+=4;NFSU2_TR(0x639b33);
u8 U[4];
w4(U+0,u32(0x9ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B639b35:{NFSU2_TR(0x639b35);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B639b37:{NFSU2_TR(0x639b37);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x2f0ull))));
__builtin_memmove((R+4),(U+0),4);
}
B639b3d:{NFSU2_TR(0x639b3d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x639b42ull));
TAIL_STATIC(0x5a64a0u,5a6);
}
B639b42:L639b42:{c.instructions+=1;NFSU2_TR(0x639b42);
{goto L639ba9;}
}
B639b44:L639b44:{c.instructions+=3;NFSU2_TR(0x639b44);
u8 U[4];
w4(U+0,u32(0x9ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B639b46:{NFSU2_TR(0x639b46);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x2f0ull))));
__builtin_memmove((R+4),(U+0),4);
}
B639b4c:{NFSU2_TR(0x639b4c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x639b51ull));
TAIL_STATIC(0x5a6450u,5a6);
}
B639b51:L639b51:{c.instructions+=3;NFSU2_TR(0x639b51);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B639b53:{NFSU2_TR(0x639b53);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+12),(U+0),4);
}
B639b57:{NFSU2_TR(0x639b57);
{goto L639b60;}
}
B639b60:L639b60:{c.instructions+=4;NFSU2_TR(0x639b60);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+0),(U+0),4);
}
B639b62:{NFSU2_TR(0x639b62);
u8 U[16];
w4(U+0,u32(u32(u32(0x590ull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B639b69:{NFSU2_TR(0x639b69);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B639b6b:{NFSU2_TR(0x639b6b);
if(r1(R+518)){{goto L639b9e;}}
}
B639b6d:L639b6d:{c.instructions+=5;NFSU2_TR(0x639b6d);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x5ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B639b70:{NFSU2_TR(0x639b70);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w1(R+4,shr<u8>(r1(R+4),u64(r4(U+0))));
}
B639b73:{NFSU2_TR(0x639b73);
w4(R+0,u32(s32(s8(r1(R+4)))));
}
B639b76:{NFSU2_TR(0x639b76);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B639b78:{NFSU2_TR(0x639b78);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L639c30;}}
}
B639b7e:L639b7e:{c.instructions+=1;NFSU2_TR(0x639b7e);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B639b80:L639b80:{c.instructions+=2;NFSU2_TR(0x639b80);
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
B639b82:{NFSU2_TR(0x639b82);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L639b9e;}}
}
B639b84:L639b84:{c.instructions+=7;NFSU2_TR(0x639b84);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B639b86:{NFSU2_TR(0x639b86);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B639b89:{NFSU2_TR(0x639b89);
u8 U[16];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B639b8d:{NFSU2_TR(0x639b8d);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B639b8f:{NFSU2_TR(0x639b8f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B639b90:{NFSU2_TR(0x639b90);
__builtin_memmove((R+4),(R+28),4);
}
B639b92:{NFSU2_TR(0x639b92);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x639b97ull));
TAIL_STATIC(0x4017e0u,401);
}
B639b97:L639b97:{c.instructions+=2;NFSU2_TR(0x639b97);
__builtin_memmove((R+4),(R+0),4);
}
B639b99:{NFSU2_TR(0x639b99);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x639b9eull));
TAIL_STATIC(0x599680u,599);
}
B639b9e:L639b9e:{c.instructions+=4;NFSU2_TR(0x639b9e);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x3ull))));
}
B639ba1:{NFSU2_TR(0x639ba1);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x4ull))));
}
B639ba4:{NFSU2_TR(0x639ba4);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0xcull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xcull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B639ba7:{NFSU2_TR(0x639ba7);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x639b60u);}goto L639b60;}}
}
B639ba9:L639ba9:{c.instructions+=5;NFSU2_TR(0x639ba9);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B639bab:{NFSU2_TR(0x639bab);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x2f0ull))));
__builtin_memmove((R+24),(U+0),4);
}
B639bb1:{NFSU2_TR(0x639bb1);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B639bb3:{NFSU2_TR(0x639bb3);
__builtin_memmove((R+4),(R+24),4);
}
B639bb5:{NFSU2_TR(0x639bb5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x639bbaull));
TAIL_STATIC(0x599630u,599);
}
B639bba:L639bba:{c.instructions+=5;NFSU2_TR(0x639bba);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B639bbc:{NFSU2_TR(0x639bbc);
u8 U[4];
w4(U+0,u32(0x7ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B639bbe:{NFSU2_TR(0x639bbe);
__builtin_memmove((R+4),(R+24),4);
}
B639bc0:{NFSU2_TR(0x639bc0);
__builtin_memmove((R+12),(R+0),1);
}
B639bc2:{NFSU2_TR(0x639bc2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x639bc7ull));
TAIL_STATIC(0x599630u,599);
}
B639bc7:L639bc7:{c.instructions+=5;NFSU2_TR(0x639bc7);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B639bc9:{NFSU2_TR(0x639bc9);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B639bcb:{NFSU2_TR(0x639bcb);
__builtin_memmove((R+4),(R+24),4);
}
B639bcd:{NFSU2_TR(0x639bcd);
u8 U[5];
w4(U+0,u32(u32(u32(0x5cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B639bd1:{NFSU2_TR(0x639bd1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x639bd6ull));
TAIL_STATIC(0x599630u,599);
}
B639bd6:L639bd6:{c.instructions+=2;NFSU2_TR(0x639bd6);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(r1(R+12))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B639bd8:{NFSU2_TR(0x639bd8);
if(r1(R+518)){{goto L639beb;}}
}
B639bda:L639bda:{c.instructions+=3;NFSU2_TR(0x639bda);
u8 U[5];
w4(U+0,u32(u32(u32(0x54ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B639bde:{NFSU2_TR(0x639bde);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B639be0:{NFSU2_TR(0x639be0);
if(r1(R+518)){{goto L639beb;}}
}
B639be2:L639be2:{c.instructions+=3;NFSU2_TR(0x639be2);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B639be4:{NFSU2_TR(0x639be4);
u8 U[5];
w4(U+0,u32(u32(u32(0x54ull))+u32(r4(R+16))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B639be9:{NFSU2_TR(0x639be9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L639bf0;}}
}
B639beb:L639beb:{c.instructions+=1;NFSU2_TR(0x639beb);
u8 U[5];
w4(U+0,u32(u32(u32(0x54ull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B639bf0:L639bf0:{c.instructions+=4;NFSU2_TR(0x639bf0);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B639bf2:{NFSU2_TR(0x639bf2);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B639bf4:{NFSU2_TR(0x639bf4);
__builtin_memmove((R+4),(R+24),4);
}
B639bf6:{NFSU2_TR(0x639bf6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x639bfbull));
TAIL_STATIC(0x599630u,599);
}
B639bfb:L639bfb:{c.instructions+=5;NFSU2_TR(0x639bfb);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B639bfd:{NFSU2_TR(0x639bfd);
u8 U[4];
w4(U+0,u32(0x7ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B639bff:{NFSU2_TR(0x639bff);
__builtin_memmove((R+4),(R+24),4);
}
B639c01:{NFSU2_TR(0x639c01);
__builtin_memmove((R+12),(R+0),1);
}
B639c03:{NFSU2_TR(0x639c03);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x639c08ull));
TAIL_STATIC(0x599630u,599);
}
B639c08:L639c08:{c.instructions+=5;NFSU2_TR(0x639c08);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B639c0a:{NFSU2_TR(0x639c0a);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B639c0c:{NFSU2_TR(0x639c0c);
__builtin_memmove((R+4),(R+24),4);
}
B639c0e:{NFSU2_TR(0x639c0e);
u8 U[5];
w4(U+0,u32(u32(u32(0x60ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B639c12:{NFSU2_TR(0x639c12);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x639c17ull));
TAIL_STATIC(0x599630u,599);
}
B639c17:L639c17:{c.instructions+=2;NFSU2_TR(0x639c17);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(r1(R+12))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B639c19:{NFSU2_TR(0x639c19);
if(r1(R+518)){{goto L639c43;}}
}
B639c1b:L639c1b:{c.instructions+=3;NFSU2_TR(0x639c1b);
u8 U[5];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B639c1f:{NFSU2_TR(0x639c1f);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B639c21:{NFSU2_TR(0x639c21);
if(r1(R+518)){{goto L639c43;}}
}
B639c23:L639c23:{c.instructions+=2;NFSU2_TR(0x639c23);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B639c25:{NFSU2_TR(0x639c25);
if(r1(R+518)){{goto L639c43;}}
}
B639c27:L639c27:{c.instructions+=5;NFSU2_TR(0x639c27);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+4),(U+0),4);
}
B639c29:{NFSU2_TR(0x639c29);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B639c2b:{NFSU2_TR(0x639c2b);
u8 U[4];
w4(U+0,u32(0xdull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B639c2d:{NFSU2_TR(0x639c2d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B639c2e:{NFSU2_TR(0x639c2e);
{goto L639c5b;}
}
B639c30:L639c30:{c.instructions+=2;NFSU2_TR(0x639c30);
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
B639c33:{NFSU2_TR(0x639c33);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x639b80u);}goto L639b80;}}
}
B639c39:L639c39:{c.instructions+=2;NFSU2_TR(0x639c39);
w4(R+0,u32(0x3ull));
}
B639c3e:{NFSU2_TR(0x639c3e);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x639b84u);}goto L639b84;}
}
B639c43:L639c43:{c.instructions+=3;NFSU2_TR(0x639c43);
u8 U[5];
w4(U+0,u32(u32(u32(0x54ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B639c47:{NFSU2_TR(0x639c47);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B639c49:{NFSU2_TR(0x639c49);
if(r1(R+518)){{goto L639c54;}}
}
B639c4b:L639c4b:{c.instructions+=5;NFSU2_TR(0x639c4b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+8),(U+0),4);
}
B639c4d:{NFSU2_TR(0x639c4d);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B639c4f:{NFSU2_TR(0x639c4f);
u8 U[4];
w4(U+0,u32(0xdull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B639c51:{NFSU2_TR(0x639c51);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B639c52:{NFSU2_TR(0x639c52);
{goto L639c5b;}
}
B639c54:L639c54:{c.instructions+=4;NFSU2_TR(0x639c54);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B639c56:{NFSU2_TR(0x639c56);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B639c58:{NFSU2_TR(0x639c58);
u8 U[4];
w4(U+0,u32(0xdull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B639c5a:{NFSU2_TR(0x639c5a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B639c5b:L639c5b:{c.instructions+=1;NFSU2_TR(0x639c5b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x639c60ull));
TAIL_STATIC(0x61bc80u,61b);
}
B639c60:L639c60:{c.instructions+=3;NFSU2_TR(0x639c60);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B639c63:{NFSU2_TR(0x639c63);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B639c65:{NFSU2_TR(0x639c65);
if(r1(R+518)){{goto L639c74;}}
}
B639c67:L639c67:{c.instructions+=3;NFSU2_TR(0x639c67);
__builtin_memmove((R+4),(R+28),4);
}
B639c69:{NFSU2_TR(0x639c69);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x5c4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B639c6f:{NFSU2_TR(0x639c6f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x639c74ull));
TAIL_STATIC(0x61bcd0u,61b);
}
B639c74:L639c74:{c.instructions+=4;NFSU2_TR(0x639c74);
u8 U[4];
w4(U+0,u32(0x28ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B639c76:{NFSU2_TR(0x639c76);
__builtin_memmove((R+4),(R+24),4);
}
B639c78:{NFSU2_TR(0x639c78);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B639c7a:{NFSU2_TR(0x639c7a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x639c7full));
TAIL_STATIC(0x599610u,599);
}
B639c7f:L639c7f:{c.instructions+=2;NFSU2_TR(0x639c7f);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B639c81:{NFSU2_TR(0x639c81);
if(r1(R+518)){{goto L639c8a;}}
}
B639c83:L639c83:{c.instructions+=2;NFSU2_TR(0x639c83);
w4(R+12,u32(0x1ull));
}
B639c88:{NFSU2_TR(0x639c88);
{goto L639cb0;}
}
B639c8a:L639c8a:{c.instructions+=3;NFSU2_TR(0x639c8a);
u8 U[4];
w4(U+0,u32(0x29ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B639c8c:{NFSU2_TR(0x639c8c);
__builtin_memmove((R+4),(R+24),4);
}
B639c8e:{NFSU2_TR(0x639c8e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x639c93ull));
TAIL_STATIC(0x599610u,599);
}
B639c93:L639c93:{c.instructions+=2;NFSU2_TR(0x639c93);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B639c95:{NFSU2_TR(0x639c95);
if(r1(R+518)){{goto L639c9e;}}
}
B639c97:L639c97:{c.instructions+=2;NFSU2_TR(0x639c97);
w4(R+12,u32(0x2ull));
}
B639c9c:{NFSU2_TR(0x639c9c);
{goto L639cb0;}
}
B639c9e:L639c9e:{c.instructions+=3;NFSU2_TR(0x639c9e);
u8 U[4];
w4(U+0,u32(0x2bull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B639ca0:{NFSU2_TR(0x639ca0);
__builtin_memmove((R+4),(R+24),4);
}
B639ca2:{NFSU2_TR(0x639ca2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x639ca7ull));
TAIL_STATIC(0x599610u,599);
}
B639ca7:L639ca7:{c.instructions+=2;NFSU2_TR(0x639ca7);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B639ca9:{NFSU2_TR(0x639ca9);
if(r1(R+518)){{goto L639cb0;}}
}
B639cab:L639cab:{c.instructions+=1;NFSU2_TR(0x639cab);
w4(R+12,u32(0x3ull));
}
B639cb0:L639cb0:{c.instructions+=5;NFSU2_TR(0x639cb0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+4),(U+0),4);
}
B639cb2:{NFSU2_TR(0x639cb2);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B639cb3:{NFSU2_TR(0x639cb3);
u8 U[4];
w4(U+0,u32(0x1bull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B639cb5:{NFSU2_TR(0x639cb5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B639cb6:{NFSU2_TR(0x639cb6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x639cbbull));
TAIL_STATIC(0x61bc80u,61b);
}
B639cbb:L639cbb:{c.instructions+=3;NFSU2_TR(0x639cbb);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B639cbe:{NFSU2_TR(0x639cbe);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B639cc0:{NFSU2_TR(0x639cc0);
if(r1(R+518)){{goto L639ccf;}}
}
B639cc2:L639cc2:{c.instructions+=3;NFSU2_TR(0x639cc2);
__builtin_memmove((R+4),(R+28),4);
}
B639cc4:{NFSU2_TR(0x639cc4);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x5fcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B639cca:{NFSU2_TR(0x639cca);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x639ccfull));
TAIL_STATIC(0x61bcd0u,61b);
}
B639ccf:L639ccf:{c.instructions+=5;NFSU2_TR(0x639ccf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B639cd0:{NFSU2_TR(0x639cd0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B639cd1:{NFSU2_TR(0x639cd1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B639cd2:{NFSU2_TR(0x639cd2);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x44ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x44ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x44ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B639cd5:{NFSU2_TR(0x639cd5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B639ce0:L639ce0:{c.instructions+=4;NFSU2_TR(0x639ce0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B639ce1:{NFSU2_TR(0x639ce1);
__builtin_memmove((R+24),(R+4),4);
}
B639ce3:{NFSU2_TR(0x639ce3);
u8 U[18];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((U+10),(U+0),4);
w1(R+512,u8((r4(U+10))<(u32(0xffffffffull))));
w1(R+523,sborrow<u32>(r4(U+10),u32(0xffffffffull)));
w4(U+14,u32(u32(r4(U+10))-u32(u32(0xffffffffull))));
w1(R+519,u8(s32(r4(U+14))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+14))==(u32(0x0ull))));
w4(U+4,u32(u32(r4(U+14))&u32(u32(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r4(U+4)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B639ce6:{NFSU2_TR(0x639ce6);
if(r1(R+518)){{goto L639d10;}}
}
B639ce8:L639ce8:{c.instructions+=6;NFSU2_TR(0x639ce8);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B639cec:{NFSU2_TR(0x639cec);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B639cee:{NFSU2_TR(0x639cee);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+0),(U+0),1);
}
B639cf1:{NFSU2_TR(0x639cf1);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B639cf3:{NFSU2_TR(0x639cf3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B639cf4:{NFSU2_TR(0x639cf4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x639cf9ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6399d0u);}goto L6399d0;}
}
B639cf9:L639cf9:{c.instructions+=8;NFSU2_TR(0x639cf9);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B639cfd:{NFSU2_TR(0x639cfd);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B639d01:{NFSU2_TR(0x639d01);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B639d05:{NFSU2_TR(0x639d05);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B639d06:{NFSU2_TR(0x639d06);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B639d07:{NFSU2_TR(0x639d07);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B639d08:{NFSU2_TR(0x639d08);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((R+4),(U+0),4);
}
B639d0b:{NFSU2_TR(0x639d0b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x639d10ull));
TAIL_STATIC(0x5b4fc0u,5b4);
}
B639d10:L639d10:{c.instructions+=2;NFSU2_TR(0x639d10);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B639d11:{NFSU2_TR(0x639d11);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B639d20:L639d20:{c.instructions+=7;NFSU2_TR(0x639d20);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x200ull))));
}
B639d26:{NFSU2_TR(0x639d26);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B639d27:{NFSU2_TR(0x639d27);
u8 U[8];
w4(U+0,u32(u32(u32(0x208ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B639d2e:{NFSU2_TR(0x639d2e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B639d31:{NFSU2_TR(0x639d31);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B639d33:{NFSU2_TR(0x639d33);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((R+8),(U+0),4);
}
B639d36:{NFSU2_TR(0x639d36);
if(r1(R+518)){{goto L639d3c;}}
}
B639d38:L639d38:{c.instructions+=1;NFSU2_TR(0x639d38);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w2(U+4,u16(u32(r2(U+4))-u32(u16(0x1ull))));
s2(u32(r4(U+0)),r2(U+4));
}
B639d3c:L639d3c:{c.instructions+=3;NFSU2_TR(0x639d3c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B639d3f:{NFSU2_TR(0x639d3f);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B639d41:{NFSU2_TR(0x639d41);
if(r1(R+518)){{goto L639d47;}}
}
B639d43:L639d43:{c.instructions+=1;NFSU2_TR(0x639d43);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w2(U+4,u16(u32(r2(U+4))-u32(u16(0x1ull))));
s2(u32(r4(U+0)),r2(U+4));
}
B639d47:L639d47:{c.instructions+=3;NFSU2_TR(0x639d47);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B639d4a:{NFSU2_TR(0x639d4a);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B639d4c:{NFSU2_TR(0x639d4c);
if(r1(R+518)){{goto L639d52;}}
}
B639d4e:L639d4e:{c.instructions+=1;NFSU2_TR(0x639d4e);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w2(U+4,u16(u32(r2(U+4))-u32(u16(0x1ull))));
s2(u32(r4(U+0)),r2(U+4));
}
B639d52:L639d52:{c.instructions+=3;NFSU2_TR(0x639d52);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B639d55:{NFSU2_TR(0x639d55);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B639d57:{NFSU2_TR(0x639d57);
if(r1(R+518)){{goto L639d5d;}}
}
B639d59:L639d59:{c.instructions+=1;NFSU2_TR(0x639d59);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w2(U+4,u16(u32(r2(U+4))-u32(u16(0x1ull))));
s2(u32(r4(U+0)),r2(U+4));
}
B639d5d:L639d5d:{c.instructions+=6;NFSU2_TR(0x639d5d);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B639d5f:{NFSU2_TR(0x639d5f);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B639d60:{NFSU2_TR(0x639d60);
u8 U[4];
w4(U+0,u32(0x80ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B639d65:{NFSU2_TR(0x639d65);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B639d69:{NFSU2_TR(0x639d69);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B639d6a:{NFSU2_TR(0x639d6a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x639d6full));
TAIL_STATIC(0x637c10u,637);
}
B639d6f:L639d6f:{c.instructions+=2;NFSU2_TR(0x639d6f);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B639d71:{NFSU2_TR(0x639d71);
if(r1(R+518)){{goto L639d81;}}
}
B639d73:L639d73:{c.instructions+=4;NFSU2_TR(0x639d73);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B639d74:{NFSU2_TR(0x639d74);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B639d78:{NFSU2_TR(0x639d78);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B639d79:{NFSU2_TR(0x639d79);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x639d7eull));
TAIL_STATIC(0x490150u,490);
}
B639d7e:L639d7e:{c.instructions+=1;NFSU2_TR(0x639d7e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B639d81:L639d81:{c.instructions+=2;NFSU2_TR(0x639d81);
u8 U[7];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x2ull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B639d85:{NFSU2_TR(0x639d85);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L639d95;}}
}
B639d87:L639d87:{c.instructions+=4;NFSU2_TR(0x639d87);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B639d89:{NFSU2_TR(0x639d89);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x18ull))));
}
B639d8c:{NFSU2_TR(0x639d8c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B639d8d:{NFSU2_TR(0x639d8d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x639d92ull));
TAIL_STATIC(0x48d9b0u,48d);
}
B639d92:L639d92:{c.instructions+=1;NFSU2_TR(0x639d92);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B639d95:L639d95:{c.instructions+=4;NFSU2_TR(0x639d95);
w4(R+0,u32(0x1ull));
}
B639d9a:{NFSU2_TR(0x639d9a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B639d9b:{NFSU2_TR(0x639d9b);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x200ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x200ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x200ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B639da1:{NFSU2_TR(0x639da1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B639db0:L639db0:{c.instructions+=6;NFSU2_TR(0x639db0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x800ull))));
}
B639db6:{NFSU2_TR(0x639db6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B639db7:{NFSU2_TR(0x639db7);
__builtin_memmove((R+24),(R+4),4);
}
B639db9:{NFSU2_TR(0x639db9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x74ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B639dbc:{NFSU2_TR(0x639dbc);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B639dbe:{NFSU2_TR(0x639dbe);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L639ddb;}}
}
B639dc0:L639dc0:{c.instructions+=2;NFSU2_TR(0x639dc0);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x78ull))));
__builtin_memmove((R+4),(U+0),4);
}
B639dc3:{NFSU2_TR(0x639dc3);
__builtin_memmove((R+8),(R+0),4);
}
B639dc5:L639dc5:{c.instructions+=3;NFSU2_TR(0x639dc5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B639dc7:{NFSU2_TR(0x639dc7);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B639dc9:{NFSU2_TR(0x639dc9);
if(r1(R+518)){{goto L639dd5;}}
}
B639dcb:L639dcb:{c.instructions+=2;NFSU2_TR(0x639dcb);
u8 U[7];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xeull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x1ull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B639dcf:{NFSU2_TR(0x639dcf);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L639dd5;}}
}
B639dd1:L639dd1:{c.instructions+=1;NFSU2_TR(0x639dd1);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xeull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B639dd5:L639dd5:{c.instructions+=3;NFSU2_TR(0x639dd5);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4ull))));
}
B639dd8:{NFSU2_TR(0x639dd8);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
}
B639dd9:{NFSU2_TR(0x639dd9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x639dc5u);}goto L639dc5;}}
}
B639ddb:L639ddb:{c.instructions+=3;NFSU2_TR(0x639ddb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x74ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B639dde:{NFSU2_TR(0x639dde);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B639de0:{NFSU2_TR(0x639de0);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L639df7;}}
}
B639de2:L639de2:{c.instructions+=2;NFSU2_TR(0x639de2);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x78ull))));
__builtin_memmove((R+4),(U+0),4);
}
B639de5:{NFSU2_TR(0x639de5);
__builtin_memmove((R+8),(R+0),4);
}
B639de7:L639de7:{c.instructions+=3;NFSU2_TR(0x639de7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B639de9:{NFSU2_TR(0x639de9);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B639deb:{NFSU2_TR(0x639deb);
if(r1(R+518)){{goto L639df1;}}
}
B639ded:L639ded:{c.instructions+=1;NFSU2_TR(0x639ded);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w2(U+4,u16(u32(r2(U+4))-u32(u16(0x1ull))));
s2(u32(r4(U+0)),r2(U+4));
}
B639df1:L639df1:{c.instructions+=3;NFSU2_TR(0x639df1);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4ull))));
}
B639df4:{NFSU2_TR(0x639df4);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
}
B639df5:{NFSU2_TR(0x639df5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x639de7u);}goto L639de7;}}
}
B639df7:L639df7:{c.instructions+=9;NFSU2_TR(0x639df7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x74ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B639dfa:{NFSU2_TR(0x639dfa);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B639dfb:{NFSU2_TR(0x639dfb);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x78ull))));
__builtin_memmove((R+4),(U+0),4);
}
B639dfe:{NFSU2_TR(0x639dfe);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B639dff:{NFSU2_TR(0x639dff);
u8 U[4];
w4(U+0,u32(0x200ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B639e04:{NFSU2_TR(0x639e04);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B639e08:{NFSU2_TR(0x639e08);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B639e09:{NFSU2_TR(0x639e09);
__builtin_memmove((R+4),(R+24),4);
}
B639e0b:{NFSU2_TR(0x639e0b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x639e10ull));
TAIL_STATIC(0x637c10u,637);
}
B639e10:L639e10:{c.instructions+=2;NFSU2_TR(0x639e10);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B639e12:{NFSU2_TR(0x639e12);
if(r1(R+518)){{goto L639e22;}}
}
B639e14:L639e14:{c.instructions+=4;NFSU2_TR(0x639e14);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B639e15:{NFSU2_TR(0x639e15);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B639e19:{NFSU2_TR(0x639e19);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B639e1a:{NFSU2_TR(0x639e1a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x639e1full));
TAIL_STATIC(0x490150u,490);
}
B639e1f:L639e1f:{c.instructions+=1;NFSU2_TR(0x639e1f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B639e22:L639e22:{c.instructions+=4;NFSU2_TR(0x639e22);
__builtin_memmove((R+4),(R+24),4);
}
B639e24:{NFSU2_TR(0x639e24);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x74ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B639e2b:{NFSU2_TR(0x639e2b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B639e32:{NFSU2_TR(0x639e32);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x639e37ull));
TAIL_STATIC(0x63b160u,63b);
}
B639e37:L639e37:{c.instructions+=3;NFSU2_TR(0x639e37);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B639e38:{NFSU2_TR(0x639e38);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x800ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x800ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x800ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B639e3e:{NFSU2_TR(0x639e3e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B639e40:L639e40:{c.instructions+=7;NFSU2_TR(0x639e40);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x114ull))));
}
B639e46:{NFSU2_TR(0x639e46);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B639e47:{NFSU2_TR(0x639e47);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B639e48:{NFSU2_TR(0x639e48);
u8 U[8];
w4(U+0,u32(u32(u32(0x120ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B639e4f:{NFSU2_TR(0x639e4f);
u8 U[7];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x309ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x2ull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B639e56:{NFSU2_TR(0x639e56);
__builtin_memmove((R+20),(R+4),4);
}
B639e58:{NFSU2_TR(0x639e58);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L639e64;}}
}
B639e5a:L639e5a:{c.instructions+=3;NFSU2_TR(0x639e5a);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30aull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B639e60:{NFSU2_TR(0x639e60);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B639e62:{NFSU2_TR(0x639e62);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L639e73;}}
}
B639e64:L639e64:{c.instructions+=3;NFSU2_TR(0x639e64);
u8 U[8];
w4(U+0,u32(u32(u32(0x124ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B639e6b:{NFSU2_TR(0x639e6b);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B639e6d:{NFSU2_TR(0x639e6d);
if(r1(R+518)){{goto L639f0a;}}
}
B639e73:L639e73:{c.instructions+=5;NFSU2_TR(0x639e73);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x430ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B639e79:{NFSU2_TR(0x639e79);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B639e7a:{NFSU2_TR(0x639e7a);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B639e7c:{NFSU2_TR(0x639e7c);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B639e7e:{NFSU2_TR(0x639e7e);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L639e98;}}
}
B639e80:L639e80:{c.instructions+=2;NFSU2_TR(0x639e80);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x434ull))));
__builtin_memmove((R+4),(U+0),4);
}
B639e86:{NFSU2_TR(0x639e86);
__builtin_memmove((R+8),(R+0),4);
}
B639e88:L639e88:{c.instructions+=3;NFSU2_TR(0x639e88);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B639e8a:{NFSU2_TR(0x639e8a);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B639e8c:{NFSU2_TR(0x639e8c);
if(r1(R+518)){{goto L639e92;}}
}
B639e8e:L639e8e:{c.instructions+=1;NFSU2_TR(0x639e8e);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w2(U+4,u16(u32(r2(U+4))-u32(u16(0x1ull))));
s2(u32(r4(U+0)),r2(U+4));
}
B639e92:L639e92:{c.instructions+=3;NFSU2_TR(0x639e92);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4ull))));
}
B639e95:{NFSU2_TR(0x639e95);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
}
B639e96:{NFSU2_TR(0x639e96);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x639e88u);}goto L639e88;}}
}
B639e98:L639e98:{c.instructions+=9;NFSU2_TR(0x639e98);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x430ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B639e9e:{NFSU2_TR(0x639e9e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B639e9f:{NFSU2_TR(0x639e9f);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x434ull))));
__builtin_memmove((R+4),(U+0),4);
}
B639ea5:{NFSU2_TR(0x639ea5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B639ea6:{NFSU2_TR(0x639ea6);
u8 U[4];
w4(U+0,u32(0x45ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B639ea8:{NFSU2_TR(0x639ea8);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B639eac:{NFSU2_TR(0x639eac);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B639ead:{NFSU2_TR(0x639ead);
__builtin_memmove((R+4),(R+20),4);
}
B639eaf:{NFSU2_TR(0x639eaf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x639eb4ull));
TAIL_STATIC(0x637c10u,637);
}
B639eb4:L639eb4:{c.instructions+=3;NFSU2_TR(0x639eb4);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B639eb6:{NFSU2_TR(0x639eb6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x430ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B639ec0:{NFSU2_TR(0x639ec0);
if(r1(R+518)){{goto L639ed5;}}
}
B639ec2:L639ec2:{c.instructions+=4;NFSU2_TR(0x639ec2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B639ec3:{NFSU2_TR(0x639ec3);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B639ec7:{NFSU2_TR(0x639ec7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B639ec8:{NFSU2_TR(0x639ec8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x639ecdull));
TAIL_STATIC(0x490150u,490);
}
B639ecd:L639ecd:{c.instructions+=2;NFSU2_TR(0x639ecd);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B639ed0:{NFSU2_TR(0x639ed0);
w4(R+28,u32(0x1ull));
}
B639ed5:L639ed5:{c.instructions+=3;NFSU2_TR(0x639ed5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x314ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B639edb:{NFSU2_TR(0x639edb);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B639edd:{NFSU2_TR(0x639edd);
if(r1(R+518)){{goto L639efc;}}
}
B639edf:L639edf:{c.instructions+=5;NFSU2_TR(0x639edf);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w2(U+4,u16(u32(r2(U+4))-u32(u16(0x1ull))));
s2(u32(r4(U+0)),r2(U+4));
}
B639ee3:{NFSU2_TR(0x639ee3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x314ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B639ee9:{NFSU2_TR(0x639ee9);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B639eea:{NFSU2_TR(0x639eea);
__builtin_memmove((R+4),(R+20),4);
}
B639eec:{NFSU2_TR(0x639eec);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x639ef1ull));
TAIL_STATIC(0x637b50u,637);
}
B639ef1:L639ef1:{c.instructions+=2;NFSU2_TR(0x639ef1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x314ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B639efb:{NFSU2_TR(0x639efb);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B639efc:L639efc:{c.instructions+=6;NFSU2_TR(0x639efc);
__builtin_memmove((R+0),(R+28),4);
}
B639efe:{NFSU2_TR(0x639efe);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B639eff:{NFSU2_TR(0x639eff);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B639f00:{NFSU2_TR(0x639f00);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B639f01:{NFSU2_TR(0x639f01);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x114ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x114ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x114ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B639f07:{NFSU2_TR(0x639f07);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B639f0a:L639f0a:{c.instructions+=5;NFSU2_TR(0x639f0a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B639f0b:{NFSU2_TR(0x639f0b);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B639f0d:{NFSU2_TR(0x639f0d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B639f0e:{NFSU2_TR(0x639f0e);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x114ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x114ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x114ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B639f14:{NFSU2_TR(0x639f14);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B639f20:L639f20:{c.instructions+=6;NFSU2_TR(0x639f20);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x114ull))));
}
B639f26:{NFSU2_TR(0x639f26);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B639f27:{NFSU2_TR(0x639f27);
u8 U[8];
w4(U+0,u32(u32(u32(0x11cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B639f2e:{NFSU2_TR(0x639f2e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x318ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B639f34:{NFSU2_TR(0x639f34);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B639f36:{NFSU2_TR(0x639f36);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L639f52;}}
}
B639f38:L639f38:{c.instructions+=3;NFSU2_TR(0x639f38);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B639f39:{NFSU2_TR(0x639f39);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x31cull))));
__builtin_memmove((R+8),(U+0),4);
}
B639f3f:{NFSU2_TR(0x639f3f);
__builtin_memmove((R+28),(R+0),4);
}
B639f41:L639f41:{c.instructions+=3;NFSU2_TR(0x639f41);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+0),(U+0),4);
}
B639f43:{NFSU2_TR(0x639f43);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B639f45:{NFSU2_TR(0x639f45);
if(r1(R+518)){{goto L639f4b;}}
}
B639f47:L639f47:{c.instructions+=1;NFSU2_TR(0x639f47);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w2(U+4,u16(u32(r2(U+4))-u32(u16(0x1ull))));
s2(u32(r4(U+0)),r2(U+4));
}
B639f4b:L639f4b:{c.instructions+=3;NFSU2_TR(0x639f4b);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x4ull))));
}
B639f4e:{NFSU2_TR(0x639f4e);
w4(R+28,u32(u32(r4(R+28))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+28))==(u32(0x0ull))));
}
B639f4f:{NFSU2_TR(0x639f4f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x639f41u);}goto L639f41;}}
}
B639f51:L639f51:{c.instructions+=1;NFSU2_TR(0x639f51);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B639f52:L639f52:{c.instructions+=8;NFSU2_TR(0x639f52);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x318ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B639f58:{NFSU2_TR(0x639f58);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B639f59:{NFSU2_TR(0x639f59);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x31cull))));
__builtin_memmove((R+8),(U+0),4);
}
B639f5f:{NFSU2_TR(0x639f5f);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B639f60:{NFSU2_TR(0x639f60);
u8 U[4];
w4(U+0,u32(0x45ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B639f62:{NFSU2_TR(0x639f62);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B639f66:{NFSU2_TR(0x639f66);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B639f67:{NFSU2_TR(0x639f67);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x639f6cull));
TAIL_STATIC(0x637c10u,637);
}
B639f6c:L639f6c:{c.instructions+=2;NFSU2_TR(0x639f6c);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B639f6e:{NFSU2_TR(0x639f6e);
if(r1(R+518)){{goto L639f97;}}
}
B639f70:L639f70:{c.instructions+=4;NFSU2_TR(0x639f70);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B639f71:{NFSU2_TR(0x639f71);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B639f75:{NFSU2_TR(0x639f75);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B639f76:{NFSU2_TR(0x639f76);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x639f7bull));
TAIL_STATIC(0x490150u,490);
}
B639f7b:L639f7b:{c.instructions+=6;NFSU2_TR(0x639f7b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B639f7e:{NFSU2_TR(0x639f7e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x318ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B639f88:{NFSU2_TR(0x639f88);
w4(R+0,u32(0x1ull));
}
B639f8d:{NFSU2_TR(0x639f8d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B639f8e:{NFSU2_TR(0x639f8e);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x114ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x114ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x114ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B639f94:{NFSU2_TR(0x639f94);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B639f97:L639f97:{c.instructions+=4;NFSU2_TR(0x639f97);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B639f99:{NFSU2_TR(0x639f99);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B639f9a:{NFSU2_TR(0x639f9a);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x114ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x114ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x114ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B639fa0:{NFSU2_TR(0x639fa0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B639fb0:L639fb0:{c.instructions+=7;NFSU2_TR(0x639fb0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B639fb1:{NFSU2_TR(0x639fb1);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B639fb5:{NFSU2_TR(0x639fb5);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B639fb6:{NFSU2_TR(0x639fb6);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B639fb8:{NFSU2_TR(0x639fb8);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B639fb9:{NFSU2_TR(0x639fb9);
__builtin_memmove((R+28),(R+4),4);
}
B639fbb:{NFSU2_TR(0x639fbb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x639fc0ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x639e40u);}goto L639e40;}
}
B639fc0:L639fc0:{c.instructions+=3;NFSU2_TR(0x639fc0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B639fc1:{NFSU2_TR(0x639fc1);
__builtin_memmove((R+4),(R+28),4);
}
B639fc3:{NFSU2_TR(0x639fc3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x639fc8ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x639f20u);}goto L639f20;}
}
B639fc8:L639fc8:{c.instructions+=6;NFSU2_TR(0x639fc8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x310ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B639fce:{NFSU2_TR(0x639fce);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w2(U+4,u16(u32(r2(U+4))-u32(u16(0x1ull))));
s2(u32(r4(U+0)),r2(U+4));
}
B639fd2:{NFSU2_TR(0x639fd2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x310ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B639fd8:{NFSU2_TR(0x639fd8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B639fd9:{NFSU2_TR(0x639fd9);
__builtin_memmove((R+4),(R+28),4);
}
B639fdb:{NFSU2_TR(0x639fdb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x639fe0ull));
TAIL_STATIC(0x637b50u,637);
}
B639fe0:L639fe0:{c.instructions+=5;NFSU2_TR(0x639fe0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B639fe1:{NFSU2_TR(0x639fe1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x310ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B639feb:{NFSU2_TR(0x639feb);
w4(R+0,u32(0x1ull));
}
B639ff0:{NFSU2_TR(0x639ff0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B639ff1:{NFSU2_TR(0x639ff1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
XIT:NFSU2_TR_EXIT(0x639,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
