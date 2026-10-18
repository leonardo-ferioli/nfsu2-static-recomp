#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_43b(u8* __restrict R,Cpu& c);
u32 body_43c(u8* __restrict R,Cpu& c);
u32 body_488(u8* __restrict R,Cpu& c);
u32 body_48a(u8* __restrict R,Cpu& c);
u32 body_50d(u8* __restrict R,Cpu& c);
u32 body_575(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x489,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x489,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_489(u8* __restrict R,Cpu& c);
u32 page_489(Cpu& c){return body_489(c.regs.data(),c);}
__attribute__((noinline)) u32 body_489(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x489004:goto L489004;
case 0x489006:c.instructions+=4;goto B489006;
case 0x489007:c.instructions+=3;goto B489007;
case 0x489008:c.instructions+=2;goto B489008;
case 0x48900c:c.instructions+=1;goto B48900c;
case 0x489012:goto L489012;
case 0x489015:c.instructions+=2;goto B489015;
case 0x489017:c.instructions+=1;goto B489017;
case 0x48901d:goto L48901d;
case 0x489020:c.instructions+=2;goto B489020;
case 0x489022:c.instructions+=1;goto B489022;
case 0x489028:goto L489028;
case 0x48902c:c.instructions+=2;goto B48902c;
case 0x48902e:c.instructions+=1;goto B48902e;
case 0x489034:goto L489034;
case 0x48903c:c.instructions+=2;goto B48903c;
case 0x489040:c.instructions+=1;goto B489040;
case 0x489042:goto L489042;
case 0x489046:c.instructions+=1;goto B489046;
case 0x489050:goto L489050;
case 0x489053:c.instructions+=16;goto B489053;
case 0x489057:c.instructions+=15;goto B489057;
case 0x48905b:c.instructions+=14;goto B48905b;
case 0x48905d:c.instructions+=13;goto B48905d;
case 0x48905f:c.instructions+=12;goto B48905f;
case 0x489063:c.instructions+=11;goto B489063;
case 0x489066:c.instructions+=10;goto B489066;
case 0x489069:c.instructions+=9;goto B489069;
case 0x48906b:c.instructions+=8;goto B48906b;
case 0x48906c:c.instructions+=7;goto B48906c;
case 0x48906e:c.instructions+=6;goto B48906e;
case 0x489072:c.instructions+=5;goto B489072;
case 0x489076:c.instructions+=4;goto B489076;
case 0x48907e:c.instructions+=3;goto B48907e;
case 0x489086:c.instructions+=2;goto B489086;
case 0x48908e:c.instructions+=1;goto B48908e;
case 0x489094:goto L489094;
case 0x489096:goto L489096;
case 0x48909a:c.instructions+=1;goto B48909a;
case 0x4890a0:goto L4890a0;
case 0x4890a3:c.instructions+=1;goto B4890a3;
case 0x4890a5:goto L4890a5;
case 0x4890a9:c.instructions+=9;goto B4890a9;
case 0x4890ac:c.instructions+=8;goto B4890ac;
case 0x4890ad:c.instructions+=7;goto B4890ad;
case 0x4890af:c.instructions+=6;goto B4890af;
case 0x4890b2:c.instructions+=5;goto B4890b2;
case 0x4890b4:c.instructions+=4;goto B4890b4;
case 0x4890b7:c.instructions+=3;goto B4890b7;
case 0x4890b9:c.instructions+=2;goto B4890b9;
case 0x4890bb:c.instructions+=1;goto B4890bb;
case 0x4890bd:goto L4890bd;
case 0x4890c0:c.instructions+=1;goto B4890c0;
case 0x4890c2:goto L4890c2;
case 0x4890c4:goto L4890c4;
case 0x4890c7:c.instructions+=1;goto B4890c7;
case 0x4890c9:goto L4890c9;
case 0x4890cb:goto L4890cb;
case 0x4890cd:c.instructions+=1;goto B4890cd;
case 0x4890cf:goto L4890cf;
case 0x4890d2:c.instructions+=1;goto B4890d2;
case 0x4890d8:goto L4890d8;
case 0x4890dc:goto L4890dc;
case 0x4890de:c.instructions+=1;goto B4890de;
case 0x4890e0:goto L4890e0;
case 0x4890e3:c.instructions+=1;goto B4890e3;
case 0x4890e7:goto L4890e7;
case 0x4890e9:c.instructions+=3;goto B4890e9;
case 0x4890ed:c.instructions+=2;goto B4890ed;
case 0x4890ef:c.instructions+=1;goto B4890ef;
case 0x4890f1:goto L4890f1;
case 0x4890f2:c.instructions+=3;goto B4890f2;
case 0x4890f5:c.instructions+=2;goto B4890f5;
case 0x4890f7:c.instructions+=1;goto B4890f7;
case 0x4890f9:goto L4890f9;
case 0x4890fc:c.instructions+=1;goto B4890fc;
case 0x489102:goto L489102;
case 0x489105:c.instructions+=4;goto B489105;
case 0x489108:c.instructions+=3;goto B489108;
case 0x48910c:c.instructions+=2;goto B48910c;
case 0x48910e:c.instructions+=1;goto B48910e;
case 0x489114:goto L489114;
case 0x489117:c.instructions+=5;goto B489117;
case 0x48911c:c.instructions+=4;goto B48911c;
case 0x48911e:c.instructions+=3;goto B48911e;
case 0x489122:c.instructions+=2;goto B489122;
case 0x489124:c.instructions+=1;goto B489124;
case 0x48912a:goto L48912a;
case 0x48912e:c.instructions+=19;goto B48912e;
case 0x489132:c.instructions+=18;goto B489132;
case 0x489136:c.instructions+=17;goto B489136;
case 0x48913a:c.instructions+=16;goto B48913a;
case 0x48913e:c.instructions+=15;goto B48913e;
case 0x489142:c.instructions+=14;goto B489142;
case 0x489148:c.instructions+=13;goto B489148;
case 0x48914c:c.instructions+=12;goto B48914c;
case 0x48914d:c.instructions+=11;goto B48914d;
case 0x489151:c.instructions+=10;goto B489151;
case 0x489155:c.instructions+=9;goto B489155;
case 0x489156:c.instructions+=8;goto B489156;
case 0x48915a:c.instructions+=7;goto B48915a;
case 0x48915e:c.instructions+=6;goto B48915e;
case 0x489164:c.instructions+=5;goto B489164;
case 0x489168:c.instructions+=4;goto B489168;
case 0x48916c:c.instructions+=3;goto B48916c;
case 0x489172:c.instructions+=2;goto B489172;
case 0x489176:c.instructions+=1;goto B489176;
case 0x48917b:goto L48917b;
case 0x48917f:c.instructions+=9;goto B48917f;
case 0x489182:c.instructions+=8;goto B489182;
case 0x489186:c.instructions+=7;goto B489186;
case 0x48918a:c.instructions+=6;goto B48918a;
case 0x48918e:c.instructions+=5;goto B48918e;
case 0x489192:c.instructions+=4;goto B489192;
case 0x489196:c.instructions+=3;goto B489196;
case 0x48919a:c.instructions+=2;goto B48919a;
case 0x48919e:c.instructions+=1;goto B48919e;
case 0x4891a2:goto L4891a2;
case 0x4891a5:c.instructions+=3;goto B4891a5;
case 0x4891a6:c.instructions+=2;goto B4891a6;
case 0x4891a8:c.instructions+=1;goto B4891a8;
case 0x4891ae:goto L4891ae;
case 0x4891b2:c.instructions+=4;goto B4891b2;
case 0x4891b3:c.instructions+=3;goto B4891b3;
case 0x4891b7:c.instructions+=2;goto B4891b7;
case 0x4891b8:c.instructions+=1;goto B4891b8;
case 0x4891bd:goto L4891bd;
case 0x4891c1:c.instructions+=10;goto B4891c1;
case 0x4891c5:c.instructions+=9;goto B4891c5;
case 0x4891c9:c.instructions+=8;goto B4891c9;
case 0x4891cc:c.instructions+=7;goto B4891cc;
case 0x4891cd:c.instructions+=6;goto B4891cd;
case 0x4891d0:c.instructions+=5;goto B4891d0;
case 0x4891d1:c.instructions+=4;goto B4891d1;
case 0x4891d2:c.instructions+=3;goto B4891d2;
case 0x4891d3:c.instructions+=2;goto B4891d3;
case 0x4891d7:c.instructions+=1;goto B4891d7;
case 0x4891dc:goto L4891dc;
case 0x4891e0:c.instructions+=6;goto B4891e0;
case 0x4891e4:c.instructions+=5;goto B4891e4;
case 0x4891e7:c.instructions+=4;goto B4891e7;
case 0x4891e8:c.instructions+=3;goto B4891e8;
case 0x4891ec:c.instructions+=2;goto B4891ec;
case 0x4891f0:c.instructions+=1;goto B4891f0;
case 0x4891f6:goto L4891f6;
case 0x4891f7:c.instructions+=5;goto B4891f7;
case 0x4891f8:c.instructions+=4;goto B4891f8;
case 0x4891f9:c.instructions+=3;goto B4891f9;
case 0x4891fb:c.instructions+=2;goto B4891fb;
case 0x4891fc:c.instructions+=1;goto B4891fc;
case 0x489200:goto L489200;
case 0x489203:c.instructions+=5;goto B489203;
case 0x489204:c.instructions+=4;goto B489204;
case 0x489205:c.instructions+=3;goto B489205;
case 0x489209:c.instructions+=2;goto B489209;
case 0x48920b:c.instructions+=1;goto B48920b;
case 0x489211:goto L489211;
case 0x489215:c.instructions+=2;goto B489215;
case 0x489217:c.instructions+=1;goto B489217;
case 0x48921d:goto L48921d;
case 0x48921f:goto L48921f;
case 0x489220:c.instructions+=4;goto B489220;
case 0x489225:c.instructions+=3;goto B489225;
case 0x489226:c.instructions+=2;goto B489226;
case 0x489229:c.instructions+=1;goto B489229;
case 0x48922a:goto L48922a;
case 0x48922b:c.instructions+=4;goto B48922b;
case 0x489232:c.instructions+=3;goto B489232;
case 0x489233:c.instructions+=2;goto B489233;
case 0x489234:c.instructions+=1;goto B489234;
case 0x489239:goto L489239;
case 0x48923c:c.instructions+=5;goto B48923c;
case 0x48923e:c.instructions+=4;goto B48923e;
case 0x489240:c.instructions+=3;goto B489240;
case 0x489242:c.instructions+=2;goto B489242;
case 0x489246:c.instructions+=1;goto B489246;
case 0x489248:goto L489248;
case 0x48924a:c.instructions+=3;goto B48924a;
case 0x48924c:c.instructions+=2;goto B48924c;
case 0x48924e:c.instructions+=1;goto B48924e;
case 0x489250:goto L489250;
case 0x489252:c.instructions+=2;goto B489252;
case 0x489254:c.instructions+=1;goto B489254;
case 0x489256:goto L489256;
case 0x48925c:c.instructions+=2;goto B48925c;
case 0x48925e:c.instructions+=1;goto B48925e;
case 0x489260:goto L489260;
case 0x489264:c.instructions+=2;goto B489264;
case 0x489266:c.instructions+=1;goto B489266;
case 0x489268:goto L489268;
case 0x48926e:goto L48926e;
case 0x489275:c.instructions+=3;goto B489275;
case 0x489278:c.instructions+=2;goto B489278;
case 0x489279:c.instructions+=1;goto B489279;
case 0x48927b:goto L48927b;
case 0x489280:goto L489280;
case 0x489287:c.instructions+=2;goto B489287;
case 0x489288:c.instructions+=1;goto B489288;
case 0x48928d:goto L48928d;
case 0x489290:c.instructions+=5;goto B489290;
case 0x489292:c.instructions+=4;goto B489292;
case 0x489294:c.instructions+=3;goto B489294;
case 0x489298:c.instructions+=2;goto B489298;
case 0x4892a0:c.instructions+=1;goto B4892a0;
case 0x4892a6:goto L4892a6;
case 0x4892aa:c.instructions+=1;goto B4892aa;
case 0x4892b0:goto L4892b0;
case 0x4892b2:c.instructions+=4;goto B4892b2;
case 0x4892b4:c.instructions+=3;goto B4892b4;
case 0x4892b6:c.instructions+=2;goto B4892b6;
case 0x4892b8:c.instructions+=1;goto B4892b8;
case 0x4892ba:goto L4892ba;
case 0x4892be:c.instructions+=4;goto B4892be;
case 0x4892c2:c.instructions+=3;goto B4892c2;
case 0x4892c4:c.instructions+=2;goto B4892c4;
case 0x4892c8:c.instructions+=1;goto B4892c8;
case 0x4892ca:goto L4892ca;
case 0x4892ce:c.instructions+=1;goto B4892ce;
case 0x4892d0:goto L4892d0;
case 0x4892d2:c.instructions+=2;goto B4892d2;
case 0x4892d4:c.instructions+=1;goto B4892d4;
case 0x4892d6:goto L4892d6;
case 0x4892dc:c.instructions+=4;goto B4892dc;
case 0x4892e0:c.instructions+=3;goto B4892e0;
case 0x4892e3:c.instructions+=2;goto B4892e3;
case 0x4892e5:c.instructions+=1;goto B4892e5;
case 0x4892e7:goto L4892e7;
case 0x4892e9:c.instructions+=3;goto B4892e9;
case 0x4892eb:c.instructions+=2;goto B4892eb;
case 0x4892ee:c.instructions+=1;goto B4892ee;
case 0x4892f0:goto L4892f0;
case 0x4892f2:c.instructions+=2;goto B4892f2;
case 0x4892f4:c.instructions+=1;goto B4892f4;
case 0x4892f6:goto L4892f6;
case 0x4892f8:c.instructions+=1;goto B4892f8;
case 0x4892fa:goto L4892fa;
case 0x4892fe:goto L4892fe;
case 0x4892ff:c.instructions+=3;goto B4892ff;
case 0x489302:c.instructions+=2;goto B489302;
case 0x489304:c.instructions+=1;goto B489304;
case 0x489306:goto L489306;
case 0x489308:c.instructions+=1;goto B489308;
case 0x48930a:goto L48930a;
case 0x48930e:c.instructions+=6;goto B48930e;
case 0x489312:c.instructions+=5;goto B489312;
case 0x489315:c.instructions+=4;goto B489315;
case 0x489316:c.instructions+=3;goto B489316;
case 0x48931a:c.instructions+=2;goto B48931a;
case 0x48931e:c.instructions+=1;goto B48931e;
case 0x489321:goto L489321;
case 0x489325:c.instructions+=1;goto B489325;
case 0x489327:goto L489327;
case 0x48932b:goto L48932b;
case 0x48932d:c.instructions+=2;goto B48932d;
case 0x48932f:c.instructions+=1;goto B48932f;
case 0x489331:goto L489331;
case 0x489335:c.instructions+=3;goto B489335;
case 0x489338:c.instructions+=2;goto B489338;
case 0x48933a:c.instructions+=1;goto B48933a;
case 0x48933c:goto L48933c;
case 0x489340:c.instructions+=3;goto B489340;
case 0x489341:c.instructions+=2;goto B489341;
case 0x489342:c.instructions+=1;goto B489342;
case 0x489347:goto L489347;
case 0x489348:c.instructions+=2;goto B489348;
case 0x48934a:c.instructions+=1;goto B48934a;
case 0x48934c:goto L48934c;
case 0x489350:c.instructions+=2;goto B489350;
case 0x489351:c.instructions+=1;goto B489351;
case 0x489356:goto L489356;
case 0x489357:c.instructions+=1;goto B489357;
case 0x48935c:goto L48935c;
case 0x48935f:c.instructions+=7;goto B48935f;
case 0x489360:c.instructions+=6;goto B489360;
case 0x489361:c.instructions+=5;goto B489361;
case 0x489362:c.instructions+=4;goto B489362;
case 0x489367:c.instructions+=3;goto B489367;
case 0x489368:c.instructions+=2;goto B489368;
case 0x48936b:c.instructions+=1;goto B48936b;
case 0x48936c:goto L48936c;
case 0x48936d:c.instructions+=4;goto B48936d;
case 0x48936f:c.instructions+=3;goto B48936f;
case 0x489370:c.instructions+=2;goto B489370;
case 0x489373:c.instructions+=1;goto B489373;
case 0x489380:goto L489380;
case 0x489384:c.instructions+=5;goto B489384;
case 0x489388:c.instructions+=4;goto B489388;
case 0x48938a:c.instructions+=3;goto B48938a;
case 0x48938c:c.instructions+=2;goto B48938c;
case 0x48938e:c.instructions+=1;goto B48938e;
case 0x489390:goto L489390;
case 0x489393:c.instructions+=1;goto B489393;
case 0x489394:goto L489394;
case 0x489396:c.instructions+=2;goto B489396;
case 0x489398:c.instructions+=1;goto B489398;
case 0x4893a0:goto L4893a0;
case 0x4893a4:c.instructions+=4;goto B4893a4;
case 0x4893a7:c.instructions+=3;goto B4893a7;
case 0x4893aa:c.instructions+=2;goto B4893aa;
case 0x4893ac:c.instructions+=1;goto B4893ac;
case 0x4893b2:goto L4893b2;
case 0x4893b5:c.instructions+=32;goto B4893b5;
case 0x4893b6:c.instructions+=31;goto B4893b6;
case 0x4893ba:c.instructions+=30;goto B4893ba;
case 0x4893be:c.instructions+=29;goto B4893be;
case 0x4893c0:c.instructions+=28;goto B4893c0;
case 0x4893c3:c.instructions+=27;goto B4893c3;
case 0x4893c7:c.instructions+=26;goto B4893c7;
case 0x4893c9:c.instructions+=25;goto B4893c9;
case 0x4893cc:c.instructions+=24;goto B4893cc;
case 0x4893d0:c.instructions+=23;goto B4893d0;
case 0x4893d2:c.instructions+=22;goto B4893d2;
case 0x4893d5:c.instructions+=21;goto B4893d5;
case 0x4893d7:c.instructions+=20;goto B4893d7;
case 0x4893d9:c.instructions+=19;goto B4893d9;
case 0x4893dd:c.instructions+=18;goto B4893dd;
case 0x4893df:c.instructions+=17;goto B4893df;
case 0x4893e1:c.instructions+=16;goto B4893e1;
case 0x4893e3:c.instructions+=15;goto B4893e3;
case 0x4893e5:c.instructions+=14;goto B4893e5;
case 0x4893e7:c.instructions+=13;goto B4893e7;
case 0x4893e9:c.instructions+=12;goto B4893e9;
case 0x4893eb:c.instructions+=11;goto B4893eb;
case 0x4893ed:c.instructions+=10;goto B4893ed;
case 0x4893ef:c.instructions+=9;goto B4893ef;
case 0x4893f3:c.instructions+=8;goto B4893f3;
case 0x4893f5:c.instructions+=7;goto B4893f5;
case 0x4893f7:c.instructions+=6;goto B4893f7;
case 0x4893f9:c.instructions+=5;goto B4893f9;
case 0x4893fd:c.instructions+=4;goto B4893fd;
case 0x489401:c.instructions+=3;goto B489401;
case 0x489403:c.instructions+=2;goto B489403;
case 0x489406:c.instructions+=1;goto B489406;
case 0x48940c:goto L48940c;
case 0x48940f:c.instructions+=9;goto B48940f;
case 0x489413:c.instructions+=8;goto B489413;
case 0x48941b:c.instructions+=7;goto B48941b;
case 0x48941d:c.instructions+=6;goto B48941d;
case 0x48941f:c.instructions+=5;goto B48941f;
case 0x489423:c.instructions+=4;goto B489423;
case 0x489425:c.instructions+=3;goto B489425;
case 0x489427:c.instructions+=2;goto B489427;
case 0x48942a:c.instructions+=1;goto B48942a;
case 0x48942c:goto L48942c;
case 0x489430:c.instructions+=6;goto B489430;
case 0x489432:c.instructions+=5;goto B489432;
case 0x489436:c.instructions+=4;goto B489436;
case 0x489438:c.instructions+=3;goto B489438;
case 0x48943a:c.instructions+=2;goto B48943a;
case 0x489440:c.instructions+=1;goto B489440;
case 0x489444:goto L489444;
case 0x489446:c.instructions+=2;goto B489446;
case 0x489448:c.instructions+=1;goto B489448;
case 0x48944e:goto L48944e;
case 0x489451:c.instructions+=6;goto B489451;
case 0x489453:c.instructions+=5;goto B489453;
case 0x489459:c.instructions+=4;goto B489459;
case 0x48945b:c.instructions+=3;goto B48945b;
case 0x48945f:c.instructions+=2;goto B48945f;
case 0x489463:c.instructions+=1;goto B489463;
case 0x489465:goto L489465;
case 0x48946b:goto L48946b;
case 0x48946d:c.instructions+=6;goto B48946d;
case 0x489470:c.instructions+=5;goto B489470;
case 0x489476:c.instructions+=4;goto B489476;
case 0x489478:c.instructions+=3;goto B489478;
case 0x48947c:c.instructions+=2;goto B48947c;
case 0x489480:c.instructions+=1;goto B489480;
case 0x489482:goto L489482;
case 0x489488:goto L489488;
case 0x48948b:c.instructions+=6;goto B48948b;
case 0x48948f:c.instructions+=5;goto B48948f;
case 0x489494:c.instructions+=4;goto B489494;
case 0x489496:c.instructions+=3;goto B489496;
case 0x48949a:c.instructions+=2;goto B48949a;
case 0x48949e:c.instructions+=1;goto B48949e;
case 0x4894a0:goto L4894a0;
case 0x4894a6:goto L4894a6;
case 0x4894a9:c.instructions+=5;goto B4894a9;
case 0x4894ad:c.instructions+=4;goto B4894ad;
case 0x4894b0:c.instructions+=3;goto B4894b0;
case 0x4894b4:c.instructions+=2;goto B4894b4;
case 0x4894b8:c.instructions+=1;goto B4894b8;
case 0x4894be:goto L4894be;
case 0x4894c4:c.instructions+=2;goto B4894c4;
case 0x4894ca:c.instructions+=1;goto B4894ca;
case 0x4894d0:goto L4894d0;
case 0x4894d4:c.instructions+=18;goto B4894d4;
case 0x4894d6:c.instructions+=17;goto B4894d6;
case 0x4894dc:c.instructions+=16;goto B4894dc;
case 0x4894e0:c.instructions+=15;goto B4894e0;
case 0x4894e4:c.instructions+=14;goto B4894e4;
case 0x4894e7:c.instructions+=13;goto B4894e7;
case 0x4894ed:c.instructions+=12;goto B4894ed;
case 0x4894f1:c.instructions+=11;goto B4894f1;
case 0x4894f5:c.instructions+=10;goto B4894f5;
case 0x4894f8:c.instructions+=9;goto B4894f8;
case 0x4894fe:c.instructions+=8;goto B4894fe;
case 0x489502:c.instructions+=7;goto B489502;
case 0x489506:c.instructions+=6;goto B489506;
case 0x489509:c.instructions+=5;goto B489509;
case 0x48950d:c.instructions+=4;goto B48950d;
case 0x489513:c.instructions+=3;goto B489513;
case 0x489515:c.instructions+=2;goto B489515;
case 0x489518:c.instructions+=1;goto B489518;
case 0x48951e:goto L48951e;
case 0x489522:c.instructions+=8;goto B489522;
case 0x489528:c.instructions+=7;goto B489528;
case 0x48952e:c.instructions+=6;goto B48952e;
case 0x489531:c.instructions+=5;goto B489531;
case 0x489537:c.instructions+=4;goto B489537;
case 0x489538:c.instructions+=3;goto B489538;
case 0x48953e:c.instructions+=2;goto B48953e;
case 0x489541:c.instructions+=1;goto B489541;
case 0x489542:goto L489542;
case 0x489546:c.instructions+=4;goto B489546;
case 0x48954c:c.instructions+=3;goto B48954c;
case 0x48954e:c.instructions+=2;goto B48954e;
case 0x489551:c.instructions+=1;goto B489551;
case 0x489553:goto L489553;
case 0x489559:c.instructions+=15;goto B489559;
case 0x48955b:c.instructions+=14;goto B48955b;
case 0x489561:c.instructions+=13;goto B489561;
case 0x489565:c.instructions+=12;goto B489565;
case 0x489568:c.instructions+=11;goto B489568;
case 0x48956e:c.instructions+=10;goto B48956e;
case 0x489572:c.instructions+=9;goto B489572;
case 0x489575:c.instructions+=8;goto B489575;
case 0x48957b:c.instructions+=7;goto B48957b;
case 0x48957f:c.instructions+=6;goto B48957f;
case 0x489582:c.instructions+=5;goto B489582;
case 0x489586:c.instructions+=4;goto B489586;
case 0x48958c:c.instructions+=3;goto B48958c;
case 0x48958d:c.instructions+=2;goto B48958d;
case 0x489590:c.instructions+=1;goto B489590;
case 0x489591:goto L489591;
case 0x489594:c.instructions+=1;goto B489594;
case 0x489596:goto L489596;
case 0x489599:c.instructions+=1;goto B489599;
case 0x48959b:goto L48959b;
case 0x48959f:c.instructions+=3;goto B48959f;
case 0x4895a5:c.instructions+=2;goto B4895a5;
case 0x4895a8:c.instructions+=1;goto B4895a8;
case 0x4895aa:goto L4895aa;
case 0x4895ae:c.instructions+=10;goto B4895ae;
case 0x4895b2:c.instructions+=9;goto B4895b2;
case 0x4895b5:c.instructions+=8;goto B4895b5;
case 0x4895bb:c.instructions+=7;goto B4895bb;
case 0x4895bf:c.instructions+=6;goto B4895bf;
case 0x4895c5:c.instructions+=5;goto B4895c5;
case 0x4895c6:c.instructions+=4;goto B4895c6;
case 0x4895cc:c.instructions+=3;goto B4895cc;
case 0x4895cd:c.instructions+=2;goto B4895cd;
case 0x4895d0:c.instructions+=1;goto B4895d0;
case 0x4895d1:goto L4895d1;
case 0x4895d3:goto L4895d3;
case 0x4895d4:goto L4895d4;
case 0x4895d7:c.instructions+=1;goto B4895d7;
case 0x4895e0:goto L4895e0;
case 0x4895e3:c.instructions+=331;goto B4895e3;
case 0x4895e7:c.instructions+=330;goto B4895e7;
case 0x4895e9:c.instructions+=329;goto B4895e9;
case 0x4895ec:c.instructions+=328;goto B4895ec;
case 0x4895ef:c.instructions+=327;goto B4895ef;
case 0x4895f2:c.instructions+=326;goto B4895f2;
case 0x4895f6:c.instructions+=325;goto B4895f6;
case 0x4895fa:c.instructions+=324;goto B4895fa;
case 0x4895fe:c.instructions+=323;goto B4895fe;
case 0x489602:c.instructions+=322;goto B489602;
case 0x489608:c.instructions+=321;goto B489608;
case 0x48960e:c.instructions+=320;goto B48960e;
case 0x489612:c.instructions+=319;goto B489612;
case 0x489616:c.instructions+=318;goto B489616;
case 0x48961a:c.instructions+=317;goto B48961a;
case 0x48961e:c.instructions+=316;goto B48961e;
case 0x489622:c.instructions+=315;goto B489622;
case 0x489624:c.instructions+=314;goto B489624;
case 0x489628:c.instructions+=313;goto B489628;
case 0x48962a:c.instructions+=312;goto B48962a;
case 0x48962e:c.instructions+=311;goto B48962e;
case 0x489634:c.instructions+=310;goto B489634;
case 0x489636:c.instructions+=309;goto B489636;
case 0x489638:c.instructions+=308;goto B489638;
case 0x48963e:c.instructions+=307;goto B48963e;
case 0x489642:c.instructions+=306;goto B489642;
case 0x489644:c.instructions+=305;goto B489644;
case 0x489648:c.instructions+=304;goto B489648;
case 0x48964c:c.instructions+=303;goto B48964c;
case 0x48964e:c.instructions+=302;goto B48964e;
case 0x489652:c.instructions+=301;goto B489652;
case 0x489656:c.instructions+=300;goto B489656;
case 0x48965a:c.instructions+=299;goto B48965a;
case 0x48965c:c.instructions+=298;goto B48965c;
case 0x489662:c.instructions+=297;goto B489662;
case 0x489666:c.instructions+=296;goto B489666;
case 0x489668:c.instructions+=295;goto B489668;
case 0x48966c:c.instructions+=294;goto B48966c;
case 0x48966e:c.instructions+=293;goto B48966e;
case 0x489672:c.instructions+=292;goto B489672;
case 0x489674:c.instructions+=291;goto B489674;
case 0x489678:c.instructions+=290;goto B489678;
case 0x48967c:c.instructions+=289;goto B48967c;
case 0x489680:c.instructions+=288;goto B489680;
case 0x489684:c.instructions+=287;goto B489684;
case 0x489688:c.instructions+=286;goto B489688;
case 0x48968a:c.instructions+=285;goto B48968a;
case 0x489690:c.instructions+=284;goto B489690;
case 0x489694:c.instructions+=283;goto B489694;
case 0x489698:c.instructions+=282;goto B489698;
case 0x48969a:c.instructions+=281;goto B48969a;
case 0x4896a0:c.instructions+=280;goto B4896a0;
case 0x4896a4:c.instructions+=279;goto B4896a4;
case 0x4896a8:c.instructions+=278;goto B4896a8;
case 0x4896ae:c.instructions+=277;goto B4896ae;
case 0x4896b2:c.instructions+=276;goto B4896b2;
case 0x4896b8:c.instructions+=275;goto B4896b8;
case 0x4896ba:c.instructions+=274;goto B4896ba;
case 0x4896bc:c.instructions+=273;goto B4896bc;
case 0x4896be:c.instructions+=272;goto B4896be;
case 0x4896c2:c.instructions+=271;goto B4896c2;
case 0x4896c8:c.instructions+=270;goto B4896c8;
case 0x4896ca:c.instructions+=269;goto B4896ca;
case 0x4896cd:c.instructions+=268;goto B4896cd;
case 0x4896d0:c.instructions+=267;goto B4896d0;
case 0x4896d3:c.instructions+=266;goto B4896d3;
case 0x4896d5:c.instructions+=265;goto B4896d5;
case 0x4896d8:c.instructions+=264;goto B4896d8;
case 0x4896da:c.instructions+=263;goto B4896da;
case 0x4896de:c.instructions+=262;goto B4896de;
case 0x4896e4:c.instructions+=261;goto B4896e4;
case 0x4896e7:c.instructions+=260;goto B4896e7;
case 0x4896ea:c.instructions+=259;goto B4896ea;
case 0x4896ee:c.instructions+=258;goto B4896ee;
case 0x4896f4:c.instructions+=257;goto B4896f4;
case 0x4896f7:c.instructions+=256;goto B4896f7;
case 0x4896fa:c.instructions+=255;goto B4896fa;
case 0x4896fe:c.instructions+=254;goto B4896fe;
case 0x489704:c.instructions+=253;goto B489704;
case 0x489707:c.instructions+=252;goto B489707;
case 0x48970a:c.instructions+=251;goto B48970a;
case 0x48970e:c.instructions+=250;goto B48970e;
case 0x489714:c.instructions+=249;goto B489714;
case 0x489717:c.instructions+=248;goto B489717;
case 0x48971a:c.instructions+=247;goto B48971a;
case 0x48971e:c.instructions+=246;goto B48971e;
case 0x489724:c.instructions+=245;goto B489724;
case 0x489727:c.instructions+=244;goto B489727;
case 0x48972a:c.instructions+=243;goto B48972a;
case 0x48972e:c.instructions+=242;goto B48972e;
case 0x489734:c.instructions+=241;goto B489734;
case 0x48973a:c.instructions+=240;goto B48973a;
case 0x489740:c.instructions+=239;goto B489740;
case 0x489744:c.instructions+=238;goto B489744;
case 0x48974a:c.instructions+=237;goto B48974a;
case 0x489750:c.instructions+=236;goto B489750;
case 0x489756:c.instructions+=235;goto B489756;
case 0x48975a:c.instructions+=234;goto B48975a;
case 0x489760:c.instructions+=233;goto B489760;
case 0x489762:c.instructions+=232;goto B489762;
case 0x489764:c.instructions+=231;goto B489764;
case 0x48976a:c.instructions+=230;goto B48976a;
case 0x48976e:c.instructions+=229;goto B48976e;
case 0x489770:c.instructions+=228;goto B489770;
case 0x489774:c.instructions+=227;goto B489774;
case 0x489778:c.instructions+=226;goto B489778;
case 0x48977a:c.instructions+=225;goto B48977a;
case 0x48977e:c.instructions+=224;goto B48977e;
case 0x489782:c.instructions+=223;goto B489782;
case 0x489786:c.instructions+=222;goto B489786;
case 0x489788:c.instructions+=221;goto B489788;
case 0x48978e:c.instructions+=220;goto B48978e;
case 0x489792:c.instructions+=219;goto B489792;
case 0x489794:c.instructions+=218;goto B489794;
case 0x489798:c.instructions+=217;goto B489798;
case 0x48979a:c.instructions+=216;goto B48979a;
case 0x48979e:c.instructions+=215;goto B48979e;
case 0x4897a0:c.instructions+=214;goto B4897a0;
case 0x4897a4:c.instructions+=213;goto B4897a4;
case 0x4897a8:c.instructions+=212;goto B4897a8;
case 0x4897ac:c.instructions+=211;goto B4897ac;
case 0x4897b0:c.instructions+=210;goto B4897b0;
case 0x4897b4:c.instructions+=209;goto B4897b4;
case 0x4897b6:c.instructions+=208;goto B4897b6;
case 0x4897bc:c.instructions+=207;goto B4897bc;
case 0x4897c0:c.instructions+=206;goto B4897c0;
case 0x4897c4:c.instructions+=205;goto B4897c4;
case 0x4897c6:c.instructions+=204;goto B4897c6;
case 0x4897cc:c.instructions+=203;goto B4897cc;
case 0x4897d0:c.instructions+=202;goto B4897d0;
case 0x4897d4:c.instructions+=201;goto B4897d4;
case 0x4897da:c.instructions+=200;goto B4897da;
case 0x4897de:c.instructions+=199;goto B4897de;
case 0x4897e4:c.instructions+=198;goto B4897e4;
case 0x4897e6:c.instructions+=197;goto B4897e6;
case 0x4897e9:c.instructions+=196;goto B4897e9;
case 0x4897ec:c.instructions+=195;goto B4897ec;
case 0x4897f0:c.instructions+=194;goto B4897f0;
case 0x4897f6:c.instructions+=193;goto B4897f6;
case 0x4897f8:c.instructions+=192;goto B4897f8;
case 0x4897fb:c.instructions+=191;goto B4897fb;
case 0x4897fe:c.instructions+=190;goto B4897fe;
case 0x489801:c.instructions+=189;goto B489801;
case 0x489803:c.instructions+=188;goto B489803;
case 0x489806:c.instructions+=187;goto B489806;
case 0x489808:c.instructions+=186;goto B489808;
case 0x48980c:c.instructions+=185;goto B48980c;
case 0x489812:c.instructions+=184;goto B489812;
case 0x489815:c.instructions+=183;goto B489815;
case 0x489818:c.instructions+=182;goto B489818;
case 0x48981c:c.instructions+=181;goto B48981c;
case 0x489822:c.instructions+=180;goto B489822;
case 0x489825:c.instructions+=179;goto B489825;
case 0x489828:c.instructions+=178;goto B489828;
case 0x48982c:c.instructions+=177;goto B48982c;
case 0x489832:c.instructions+=176;goto B489832;
case 0x489835:c.instructions+=175;goto B489835;
case 0x489838:c.instructions+=174;goto B489838;
case 0x48983c:c.instructions+=173;goto B48983c;
case 0x489842:c.instructions+=172;goto B489842;
case 0x489845:c.instructions+=171;goto B489845;
case 0x489848:c.instructions+=170;goto B489848;
case 0x48984c:c.instructions+=169;goto B48984c;
case 0x489852:c.instructions+=168;goto B489852;
case 0x489855:c.instructions+=167;goto B489855;
case 0x489858:c.instructions+=166;goto B489858;
case 0x48985c:c.instructions+=165;goto B48985c;
case 0x489862:c.instructions+=164;goto B489862;
case 0x489868:c.instructions+=163;goto B489868;
case 0x48986e:c.instructions+=162;goto B48986e;
case 0x489872:c.instructions+=161;goto B489872;
case 0x489878:c.instructions+=160;goto B489878;
case 0x48987e:c.instructions+=159;goto B48987e;
case 0x489884:c.instructions+=158;goto B489884;
case 0x489888:c.instructions+=157;goto B489888;
case 0x48988c:c.instructions+=156;goto B48988c;
case 0x489892:c.instructions+=155;goto B489892;
case 0x489894:c.instructions+=154;goto B489894;
case 0x489896:c.instructions+=153;goto B489896;
case 0x48989c:c.instructions+=152;goto B48989c;
case 0x4898a0:c.instructions+=151;goto B4898a0;
case 0x4898a2:c.instructions+=150;goto B4898a2;
case 0x4898a6:c.instructions+=149;goto B4898a6;
case 0x4898aa:c.instructions+=148;goto B4898aa;
case 0x4898ac:c.instructions+=147;goto B4898ac;
case 0x4898b0:c.instructions+=146;goto B4898b0;
case 0x4898b4:c.instructions+=145;goto B4898b4;
case 0x4898b8:c.instructions+=144;goto B4898b8;
case 0x4898ba:c.instructions+=143;goto B4898ba;
case 0x4898c0:c.instructions+=142;goto B4898c0;
case 0x4898c4:c.instructions+=141;goto B4898c4;
case 0x4898c6:c.instructions+=140;goto B4898c6;
case 0x4898ca:c.instructions+=139;goto B4898ca;
case 0x4898cc:c.instructions+=138;goto B4898cc;
case 0x4898d0:c.instructions+=137;goto B4898d0;
case 0x4898d2:c.instructions+=136;goto B4898d2;
case 0x4898d6:c.instructions+=135;goto B4898d6;
case 0x4898da:c.instructions+=134;goto B4898da;
case 0x4898de:c.instructions+=133;goto B4898de;
case 0x4898e2:c.instructions+=132;goto B4898e2;
case 0x4898e6:c.instructions+=131;goto B4898e6;
case 0x4898e8:c.instructions+=130;goto B4898e8;
case 0x4898ee:c.instructions+=129;goto B4898ee;
case 0x4898f2:c.instructions+=128;goto B4898f2;
case 0x4898f6:c.instructions+=127;goto B4898f6;
case 0x4898f8:c.instructions+=126;goto B4898f8;
case 0x4898fe:c.instructions+=125;goto B4898fe;
case 0x489902:c.instructions+=124;goto B489902;
case 0x489906:c.instructions+=123;goto B489906;
case 0x48990c:c.instructions+=122;goto B48990c;
case 0x489910:c.instructions+=121;goto B489910;
case 0x489916:c.instructions+=120;goto B489916;
case 0x489918:c.instructions+=119;goto B489918;
case 0x48991b:c.instructions+=118;goto B48991b;
case 0x48991e:c.instructions+=117;goto B48991e;
case 0x489922:c.instructions+=116;goto B489922;
case 0x489928:c.instructions+=115;goto B489928;
case 0x48992a:c.instructions+=114;goto B48992a;
case 0x48992d:c.instructions+=113;goto B48992d;
case 0x489930:c.instructions+=112;goto B489930;
case 0x489933:c.instructions+=111;goto B489933;
case 0x489935:c.instructions+=110;goto B489935;
case 0x489938:c.instructions+=109;goto B489938;
case 0x48993a:c.instructions+=108;goto B48993a;
case 0x48993e:c.instructions+=107;goto B48993e;
case 0x489944:c.instructions+=106;goto B489944;
case 0x489947:c.instructions+=105;goto B489947;
case 0x48994a:c.instructions+=104;goto B48994a;
case 0x48994e:c.instructions+=103;goto B48994e;
case 0x489954:c.instructions+=102;goto B489954;
case 0x489957:c.instructions+=101;goto B489957;
case 0x48995a:c.instructions+=100;goto B48995a;
case 0x48995e:c.instructions+=99;goto B48995e;
case 0x489964:c.instructions+=98;goto B489964;
case 0x489967:c.instructions+=97;goto B489967;
case 0x48996a:c.instructions+=96;goto B48996a;
case 0x48996e:c.instructions+=95;goto B48996e;
case 0x489974:c.instructions+=94;goto B489974;
case 0x489977:c.instructions+=93;goto B489977;
case 0x48997a:c.instructions+=92;goto B48997a;
case 0x48997e:c.instructions+=91;goto B48997e;
case 0x489984:c.instructions+=90;goto B489984;
case 0x489987:c.instructions+=89;goto B489987;
case 0x48998a:c.instructions+=88;goto B48998a;
case 0x48998e:c.instructions+=87;goto B48998e;
case 0x489994:c.instructions+=86;goto B489994;
case 0x48999a:c.instructions+=85;goto B48999a;
case 0x4899a0:c.instructions+=84;goto B4899a0;
case 0x4899a4:c.instructions+=83;goto B4899a4;
case 0x4899aa:c.instructions+=82;goto B4899aa;
case 0x4899b0:c.instructions+=81;goto B4899b0;
case 0x4899b6:c.instructions+=80;goto B4899b6;
case 0x4899ba:c.instructions+=79;goto B4899ba;
case 0x4899be:c.instructions+=78;goto B4899be;
case 0x4899c4:c.instructions+=77;goto B4899c4;
case 0x4899c6:c.instructions+=76;goto B4899c6;
case 0x4899c8:c.instructions+=75;goto B4899c8;
case 0x4899ce:c.instructions+=74;goto B4899ce;
case 0x4899d2:c.instructions+=73;goto B4899d2;
case 0x4899d4:c.instructions+=72;goto B4899d4;
case 0x4899d8:c.instructions+=71;goto B4899d8;
case 0x4899dc:c.instructions+=70;goto B4899dc;
case 0x4899de:c.instructions+=69;goto B4899de;
case 0x4899e2:c.instructions+=68;goto B4899e2;
case 0x4899e6:c.instructions+=67;goto B4899e6;
case 0x4899ea:c.instructions+=66;goto B4899ea;
case 0x4899ec:c.instructions+=65;goto B4899ec;
case 0x4899f2:c.instructions+=64;goto B4899f2;
case 0x4899f6:c.instructions+=63;goto B4899f6;
case 0x4899f8:c.instructions+=62;goto B4899f8;
case 0x4899fc:c.instructions+=61;goto B4899fc;
case 0x4899fe:c.instructions+=60;goto B4899fe;
case 0x489a02:c.instructions+=59;goto B489a02;
case 0x489a04:c.instructions+=58;goto B489a04;
case 0x489a08:c.instructions+=57;goto B489a08;
case 0x489a0c:c.instructions+=56;goto B489a0c;
case 0x489a10:c.instructions+=55;goto B489a10;
case 0x489a14:c.instructions+=54;goto B489a14;
case 0x489a18:c.instructions+=53;goto B489a18;
case 0x489a1a:c.instructions+=52;goto B489a1a;
case 0x489a20:c.instructions+=51;goto B489a20;
case 0x489a24:c.instructions+=50;goto B489a24;
case 0x489a28:c.instructions+=49;goto B489a28;
case 0x489a2a:c.instructions+=48;goto B489a2a;
case 0x489a30:c.instructions+=47;goto B489a30;
case 0x489a34:c.instructions+=46;goto B489a34;
case 0x489a38:c.instructions+=45;goto B489a38;
case 0x489a3e:c.instructions+=44;goto B489a3e;
case 0x489a42:c.instructions+=43;goto B489a42;
case 0x489a48:c.instructions+=42;goto B489a48;
case 0x489a4a:c.instructions+=41;goto B489a4a;
case 0x489a4d:c.instructions+=40;goto B489a4d;
case 0x489a50:c.instructions+=39;goto B489a50;
case 0x489a54:c.instructions+=38;goto B489a54;
case 0x489a5a:c.instructions+=37;goto B489a5a;
case 0x489a5c:c.instructions+=36;goto B489a5c;
case 0x489a5f:c.instructions+=35;goto B489a5f;
case 0x489a62:c.instructions+=34;goto B489a62;
case 0x489a65:c.instructions+=33;goto B489a65;
case 0x489a67:c.instructions+=32;goto B489a67;
case 0x489a6a:c.instructions+=31;goto B489a6a;
case 0x489a6c:c.instructions+=30;goto B489a6c;
case 0x489a70:c.instructions+=29;goto B489a70;
case 0x489a76:c.instructions+=28;goto B489a76;
case 0x489a79:c.instructions+=27;goto B489a79;
case 0x489a7c:c.instructions+=26;goto B489a7c;
case 0x489a80:c.instructions+=25;goto B489a80;
case 0x489a86:c.instructions+=24;goto B489a86;
case 0x489a89:c.instructions+=23;goto B489a89;
case 0x489a8c:c.instructions+=22;goto B489a8c;
case 0x489a90:c.instructions+=21;goto B489a90;
case 0x489a96:c.instructions+=20;goto B489a96;
case 0x489a99:c.instructions+=19;goto B489a99;
case 0x489a9c:c.instructions+=18;goto B489a9c;
case 0x489aa0:c.instructions+=17;goto B489aa0;
case 0x489aa6:c.instructions+=16;goto B489aa6;
case 0x489aa9:c.instructions+=15;goto B489aa9;
case 0x489aac:c.instructions+=14;goto B489aac;
case 0x489ab0:c.instructions+=13;goto B489ab0;
case 0x489ab6:c.instructions+=12;goto B489ab6;
case 0x489ab9:c.instructions+=11;goto B489ab9;
case 0x489abc:c.instructions+=10;goto B489abc;
case 0x489ac0:c.instructions+=9;goto B489ac0;
case 0x489ac6:c.instructions+=8;goto B489ac6;
case 0x489acc:c.instructions+=7;goto B489acc;
case 0x489ad2:c.instructions+=6;goto B489ad2;
case 0x489ad6:c.instructions+=5;goto B489ad6;
case 0x489adc:c.instructions+=4;goto B489adc;
case 0x489ae2:c.instructions+=3;goto B489ae2;
case 0x489ae8:c.instructions+=2;goto B489ae8;
case 0x489aeb:c.instructions+=1;goto B489aeb;
case 0x489af0:goto L489af0;
case 0x489af1:c.instructions+=23;goto B489af1;
case 0x489af3:c.instructions+=22;goto B489af3;
case 0x489af6:c.instructions+=21;goto B489af6;
case 0x489af9:c.instructions+=20;goto B489af9;
case 0x489afc:c.instructions+=19;goto B489afc;
case 0x489afe:c.instructions+=18;goto B489afe;
case 0x489aff:c.instructions+=17;goto B489aff;
case 0x489b02:c.instructions+=16;goto B489b02;
case 0x489b06:c.instructions+=15;goto B489b06;
case 0x489b09:c.instructions+=14;goto B489b09;
case 0x489b0c:c.instructions+=13;goto B489b0c;
case 0x489b0d:c.instructions+=12;goto B489b0d;
case 0x489b13:c.instructions+=11;goto B489b13;
case 0x489b17:c.instructions+=10;goto B489b17;
case 0x489b19:c.instructions+=9;goto B489b19;
case 0x489b1a:c.instructions+=8;goto B489b1a;
case 0x489b1e:c.instructions+=7;goto B489b1e;
case 0x489b22:c.instructions+=6;goto B489b22;
case 0x489b26:c.instructions+=5;goto B489b26;
case 0x489b27:c.instructions+=4;goto B489b27;
case 0x489b28:c.instructions+=3;goto B489b28;
case 0x489b29:c.instructions+=2;goto B489b29;
case 0x489b2a:c.instructions+=1;goto B489b2a;
case 0x489b2f:goto L489b2f;
case 0x489b31:c.instructions+=25;goto B489b31;
case 0x489b37:c.instructions+=24;goto B489b37;
case 0x489b3a:c.instructions+=23;goto B489b3a;
case 0x489b3e:c.instructions+=22;goto B489b3e;
case 0x489b42:c.instructions+=21;goto B489b42;
case 0x489b45:c.instructions+=20;goto B489b45;
case 0x489b4b:c.instructions+=19;goto B489b4b;
case 0x489b4f:c.instructions+=18;goto B489b4f;
case 0x489b52:c.instructions+=17;goto B489b52;
case 0x489b58:c.instructions+=16;goto B489b58;
case 0x489b5c:c.instructions+=15;goto B489b5c;
case 0x489b5f:c.instructions+=14;goto B489b5f;
case 0x489b65:c.instructions+=13;goto B489b65;
case 0x489b69:c.instructions+=12;goto B489b69;
case 0x489b6d:c.instructions+=11;goto B489b6d;
case 0x489b6f:c.instructions+=10;goto B489b6f;
case 0x489b73:c.instructions+=9;goto B489b73;
case 0x489b77:c.instructions+=8;goto B489b77;
case 0x489b79:c.instructions+=7;goto B489b79;
case 0x489b7d:c.instructions+=6;goto B489b7d;
case 0x489b81:c.instructions+=5;goto B489b81;
case 0x489b83:c.instructions+=4;goto B489b83;
case 0x489b86:c.instructions+=3;goto B489b86;
case 0x489b87:c.instructions+=2;goto B489b87;
case 0x489b88:c.instructions+=1;goto B489b88;
case 0x489b8d:goto L489b8d;
case 0x489b8e:c.instructions+=4;goto B489b8e;
case 0x489b8f:c.instructions+=3;goto B489b8f;
case 0x489b91:c.instructions+=2;goto B489b91;
case 0x489b92:c.instructions+=1;goto B489b92;
case 0x489ba0:goto L489ba0;
case 0x489ba3:c.instructions+=22;goto B489ba3;
case 0x489ba7:c.instructions+=21;goto B489ba7;
case 0x489ba9:c.instructions+=20;goto B489ba9;
case 0x489bad:c.instructions+=19;goto B489bad;
case 0x489bb0:c.instructions+=18;goto B489bb0;
case 0x489bb4:c.instructions+=17;goto B489bb4;
case 0x489bb7:c.instructions+=16;goto B489bb7;
case 0x489bbb:c.instructions+=15;goto B489bbb;
case 0x489bbe:c.instructions+=14;goto B489bbe;
case 0x489bc2:c.instructions+=13;goto B489bc2;
case 0x489bc5:c.instructions+=12;goto B489bc5;
case 0x489bc9:c.instructions+=11;goto B489bc9;
case 0x489bcc:c.instructions+=10;goto B489bcc;
case 0x489bd0:c.instructions+=9;goto B489bd0;
case 0x489bd3:c.instructions+=8;goto B489bd3;
case 0x489bd7:c.instructions+=7;goto B489bd7;
case 0x489bda:c.instructions+=6;goto B489bda;
case 0x489bdd:c.instructions+=5;goto B489bdd;
case 0x489be1:c.instructions+=4;goto B489be1;
case 0x489be4:c.instructions+=3;goto B489be4;
case 0x489be8:c.instructions+=2;goto B489be8;
case 0x489bed:c.instructions+=1;goto B489bed;
case 0x489bf0:goto L489bf0;
case 0x489bf3:c.instructions+=219;goto B489bf3;
case 0x489bf6:c.instructions+=218;goto B489bf6;
case 0x489bf8:c.instructions+=217;goto B489bf8;
case 0x489bfc:c.instructions+=216;goto B489bfc;
case 0x489bff:c.instructions+=215;goto B489bff;
case 0x489c02:c.instructions+=214;goto B489c02;
case 0x489c06:c.instructions+=213;goto B489c06;
case 0x489c09:c.instructions+=212;goto B489c09;
case 0x489c0d:c.instructions+=211;goto B489c0d;
case 0x489c11:c.instructions+=210;goto B489c11;
case 0x489c14:c.instructions+=209;goto B489c14;
case 0x489c18:c.instructions+=208;goto B489c18;
case 0x489c1c:c.instructions+=207;goto B489c1c;
case 0x489c1e:c.instructions+=206;goto B489c1e;
case 0x489c21:c.instructions+=205;goto B489c21;
case 0x489c25:c.instructions+=204;goto B489c25;
case 0x489c29:c.instructions+=203;goto B489c29;
case 0x489c2c:c.instructions+=202;goto B489c2c;
case 0x489c30:c.instructions+=201;goto B489c30;
case 0x489c32:c.instructions+=200;goto B489c32;
case 0x489c35:c.instructions+=199;goto B489c35;
case 0x489c39:c.instructions+=198;goto B489c39;
case 0x489c3c:c.instructions+=197;goto B489c3c;
case 0x489c40:c.instructions+=196;goto B489c40;
case 0x489c42:c.instructions+=195;goto B489c42;
case 0x489c46:c.instructions+=194;goto B489c46;
case 0x489c48:c.instructions+=193;goto B489c48;
case 0x489c4c:c.instructions+=192;goto B489c4c;
case 0x489c50:c.instructions+=191;goto B489c50;
case 0x489c54:c.instructions+=190;goto B489c54;
case 0x489c56:c.instructions+=189;goto B489c56;
case 0x489c5a:c.instructions+=188;goto B489c5a;
case 0x489c5c:c.instructions+=187;goto B489c5c;
case 0x489c5e:c.instructions+=186;goto B489c5e;
case 0x489c62:c.instructions+=185;goto B489c62;
case 0x489c66:c.instructions+=184;goto B489c66;
case 0x489c68:c.instructions+=183;goto B489c68;
case 0x489c6b:c.instructions+=182;goto B489c6b;
case 0x489c6f:c.instructions+=181;goto B489c6f;
case 0x489c73:c.instructions+=180;goto B489c73;
case 0x489c77:c.instructions+=179;goto B489c77;
case 0x489c7b:c.instructions+=178;goto B489c7b;
case 0x489c7d:c.instructions+=177;goto B489c7d;
case 0x489c81:c.instructions+=176;goto B489c81;
case 0x489c85:c.instructions+=175;goto B489c85;
case 0x489c89:c.instructions+=174;goto B489c89;
case 0x489c8d:c.instructions+=173;goto B489c8d;
case 0x489c8f:c.instructions+=172;goto B489c8f;
case 0x489c93:c.instructions+=171;goto B489c93;
case 0x489c97:c.instructions+=170;goto B489c97;
case 0x489c9b:c.instructions+=169;goto B489c9b;
case 0x489c9f:c.instructions+=168;goto B489c9f;
case 0x489ca3:c.instructions+=167;goto B489ca3;
case 0x489ca5:c.instructions+=166;goto B489ca5;
case 0x489ca9:c.instructions+=165;goto B489ca9;
case 0x489cad:c.instructions+=164;goto B489cad;
case 0x489cb1:c.instructions+=163;goto B489cb1;
case 0x489cb5:c.instructions+=162;goto B489cb5;
case 0x489cb9:c.instructions+=161;goto B489cb9;
case 0x489cbd:c.instructions+=160;goto B489cbd;
case 0x489cc1:c.instructions+=159;goto B489cc1;
case 0x489cc5:c.instructions+=158;goto B489cc5;
case 0x489cc9:c.instructions+=157;goto B489cc9;
case 0x489ccb:c.instructions+=156;goto B489ccb;
case 0x489ccf:c.instructions+=155;goto B489ccf;
case 0x489cd3:c.instructions+=154;goto B489cd3;
case 0x489cd5:c.instructions+=153;goto B489cd5;
case 0x489cd7:c.instructions+=152;goto B489cd7;
case 0x489cdb:c.instructions+=151;goto B489cdb;
case 0x489cdf:c.instructions+=150;goto B489cdf;
case 0x489ce3:c.instructions+=149;goto B489ce3;
case 0x489ce7:c.instructions+=148;goto B489ce7;
case 0x489ceb:c.instructions+=147;goto B489ceb;
case 0x489cef:c.instructions+=146;goto B489cef;
case 0x489cf3:c.instructions+=145;goto B489cf3;
case 0x489cf7:c.instructions+=144;goto B489cf7;
case 0x489cfb:c.instructions+=143;goto B489cfb;
case 0x489cff:c.instructions+=142;goto B489cff;
case 0x489d03:c.instructions+=141;goto B489d03;
case 0x489d05:c.instructions+=140;goto B489d05;
case 0x489d09:c.instructions+=139;goto B489d09;
case 0x489d0d:c.instructions+=138;goto B489d0d;
case 0x489d11:c.instructions+=137;goto B489d11;
case 0x489d15:c.instructions+=136;goto B489d15;
case 0x489d19:c.instructions+=135;goto B489d19;
case 0x489d1b:c.instructions+=134;goto B489d1b;
case 0x489d1d:c.instructions+=133;goto B489d1d;
case 0x489d21:c.instructions+=132;goto B489d21;
case 0x489d23:c.instructions+=131;goto B489d23;
case 0x489d25:c.instructions+=130;goto B489d25;
case 0x489d29:c.instructions+=129;goto B489d29;
case 0x489d2b:c.instructions+=128;goto B489d2b;
case 0x489d2e:c.instructions+=127;goto B489d2e;
case 0x489d32:c.instructions+=126;goto B489d32;
case 0x489d36:c.instructions+=125;goto B489d36;
case 0x489d3a:c.instructions+=124;goto B489d3a;
case 0x489d3e:c.instructions+=123;goto B489d3e;
case 0x489d42:c.instructions+=122;goto B489d42;
case 0x489d46:c.instructions+=121;goto B489d46;
case 0x489d48:c.instructions+=120;goto B489d48;
case 0x489d4c:c.instructions+=119;goto B489d4c;
case 0x489d50:c.instructions+=118;goto B489d50;
case 0x489d54:c.instructions+=117;goto B489d54;
case 0x489d56:c.instructions+=116;goto B489d56;
case 0x489d5a:c.instructions+=115;goto B489d5a;
case 0x489d5e:c.instructions+=114;goto B489d5e;
case 0x489d60:c.instructions+=113;goto B489d60;
case 0x489d62:c.instructions+=112;goto B489d62;
case 0x489d66:c.instructions+=111;goto B489d66;
case 0x489d6a:c.instructions+=110;goto B489d6a;
case 0x489d6c:c.instructions+=109;goto B489d6c;
case 0x489d70:c.instructions+=108;goto B489d70;
case 0x489d74:c.instructions+=107;goto B489d74;
case 0x489d76:c.instructions+=106;goto B489d76;
case 0x489d78:c.instructions+=105;goto B489d78;
case 0x489d7c:c.instructions+=104;goto B489d7c;
case 0x489d80:c.instructions+=103;goto B489d80;
case 0x489d82:c.instructions+=102;goto B489d82;
case 0x489d86:c.instructions+=101;goto B489d86;
case 0x489d8a:c.instructions+=100;goto B489d8a;
case 0x489d8c:c.instructions+=99;goto B489d8c;
case 0x489d8e:c.instructions+=98;goto B489d8e;
case 0x489d92:c.instructions+=97;goto B489d92;
case 0x489d96:c.instructions+=96;goto B489d96;
case 0x489d98:c.instructions+=95;goto B489d98;
case 0x489d9b:c.instructions+=94;goto B489d9b;
case 0x489d9f:c.instructions+=93;goto B489d9f;
case 0x489da3:c.instructions+=92;goto B489da3;
case 0x489da7:c.instructions+=91;goto B489da7;
case 0x489dab:c.instructions+=90;goto B489dab;
case 0x489daf:c.instructions+=89;goto B489daf;
case 0x489db3:c.instructions+=88;goto B489db3;
case 0x489db7:c.instructions+=87;goto B489db7;
case 0x489db9:c.instructions+=86;goto B489db9;
case 0x489dbd:c.instructions+=85;goto B489dbd;
case 0x489dbf:c.instructions+=84;goto B489dbf;
case 0x489dc3:c.instructions+=83;goto B489dc3;
case 0x489dc5:c.instructions+=82;goto B489dc5;
case 0x489dc7:c.instructions+=81;goto B489dc7;
case 0x489dcb:c.instructions+=80;goto B489dcb;
case 0x489dcd:c.instructions+=79;goto B489dcd;
case 0x489dcf:c.instructions+=78;goto B489dcf;
case 0x489dd1:c.instructions+=77;goto B489dd1;
case 0x489dd5:c.instructions+=76;goto B489dd5;
case 0x489dd7:c.instructions+=75;goto B489dd7;
case 0x489dd9:c.instructions+=74;goto B489dd9;
case 0x489ddd:c.instructions+=73;goto B489ddd;
case 0x489ddf:c.instructions+=72;goto B489ddf;
case 0x489de1:c.instructions+=71;goto B489de1;
case 0x489de5:c.instructions+=70;goto B489de5;
case 0x489de9:c.instructions+=69;goto B489de9;
case 0x489deb:c.instructions+=68;goto B489deb;
case 0x489def:c.instructions+=67;goto B489def;
case 0x489df3:c.instructions+=66;goto B489df3;
case 0x489df5:c.instructions+=65;goto B489df5;
case 0x489df7:c.instructions+=64;goto B489df7;
case 0x489dfb:c.instructions+=63;goto B489dfb;
case 0x489dff:c.instructions+=62;goto B489dff;
case 0x489e01:c.instructions+=61;goto B489e01;
case 0x489e04:c.instructions+=60;goto B489e04;
case 0x489e05:c.instructions+=59;goto B489e05;
case 0x489e08:c.instructions+=58;goto B489e08;
case 0x489e0c:c.instructions+=57;goto B489e0c;
case 0x489e0e:c.instructions+=56;goto B489e0e;
case 0x489e12:c.instructions+=55;goto B489e12;
case 0x489e14:c.instructions+=54;goto B489e14;
case 0x489e18:c.instructions+=53;goto B489e18;
case 0x489e1a:c.instructions+=52;goto B489e1a;
case 0x489e1c:c.instructions+=51;goto B489e1c;
case 0x489e20:c.instructions+=50;goto B489e20;
case 0x489e22:c.instructions+=49;goto B489e22;
case 0x489e24:c.instructions+=48;goto B489e24;
case 0x489e26:c.instructions+=47;goto B489e26;
case 0x489e2a:c.instructions+=46;goto B489e2a;
case 0x489e2c:c.instructions+=45;goto B489e2c;
case 0x489e2e:c.instructions+=44;goto B489e2e;
case 0x489e32:c.instructions+=43;goto B489e32;
case 0x489e34:c.instructions+=42;goto B489e34;
case 0x489e36:c.instructions+=41;goto B489e36;
case 0x489e3a:c.instructions+=40;goto B489e3a;
case 0x489e3e:c.instructions+=39;goto B489e3e;
case 0x489e40:c.instructions+=38;goto B489e40;
case 0x489e44:c.instructions+=37;goto B489e44;
case 0x489e48:c.instructions+=36;goto B489e48;
case 0x489e4a:c.instructions+=35;goto B489e4a;
case 0x489e4c:c.instructions+=34;goto B489e4c;
case 0x489e50:c.instructions+=33;goto B489e50;
case 0x489e54:c.instructions+=32;goto B489e54;
case 0x489e56:c.instructions+=31;goto B489e56;
case 0x489e58:c.instructions+=30;goto B489e58;
case 0x489e5b:c.instructions+=29;goto B489e5b;
case 0x489e5d:c.instructions+=28;goto B489e5d;
case 0x489e61:c.instructions+=27;goto B489e61;
case 0x489e65:c.instructions+=26;goto B489e65;
case 0x489e69:c.instructions+=25;goto B489e69;
case 0x489e6d:c.instructions+=24;goto B489e6d;
case 0x489e6f:c.instructions+=23;goto B489e6f;
case 0x489e73:c.instructions+=22;goto B489e73;
case 0x489e77:c.instructions+=21;goto B489e77;
case 0x489e79:c.instructions+=20;goto B489e79;
case 0x489e7c:c.instructions+=19;goto B489e7c;
case 0x489e80:c.instructions+=18;goto B489e80;
case 0x489e84:c.instructions+=17;goto B489e84;
case 0x489e88:c.instructions+=16;goto B489e88;
case 0x489e8c:c.instructions+=15;goto B489e8c;
case 0x489e8e:c.instructions+=14;goto B489e8e;
case 0x489e92:c.instructions+=13;goto B489e92;
case 0x489e96:c.instructions+=12;goto B489e96;
case 0x489e98:c.instructions+=11;goto B489e98;
case 0x489e9b:c.instructions+=10;goto B489e9b;
case 0x489e9f:c.instructions+=9;goto B489e9f;
case 0x489ea3:c.instructions+=8;goto B489ea3;
case 0x489ea7:c.instructions+=7;goto B489ea7;
case 0x489eab:c.instructions+=6;goto B489eab;
case 0x489ead:c.instructions+=5;goto B489ead;
case 0x489eb1:c.instructions+=4;goto B489eb1;
case 0x489eb5:c.instructions+=3;goto B489eb5;
case 0x489eb7:c.instructions+=2;goto B489eb7;
case 0x489eba:c.instructions+=1;goto B489eba;
case 0x489ec0:goto L489ec0;
case 0x489ec3:c.instructions+=1;goto B489ec3;
case 0x489ed0:goto L489ed0;
case 0x489ed4:c.instructions+=3;goto B489ed4;
case 0x489ed7:c.instructions+=2;goto B489ed7;
case 0x489ed9:c.instructions+=1;goto B489ed9;
case 0x489edf:goto L489edf;
case 0x489ee2:c.instructions+=56;goto B489ee2;
case 0x489ee8:c.instructions+=55;goto B489ee8;
case 0x489eeb:c.instructions+=54;goto B489eeb;
case 0x489ef1:c.instructions+=53;goto B489ef1;
case 0x489ef7:c.instructions+=52;goto B489ef7;
case 0x489efb:c.instructions+=51;goto B489efb;
case 0x489efe:c.instructions+=50;goto B489efe;
case 0x489f01:c.instructions+=49;goto B489f01;
case 0x489f04:c.instructions+=48;goto B489f04;
case 0x489f08:c.instructions+=47;goto B489f08;
case 0x489f0b:c.instructions+=46;goto B489f0b;
case 0x489f0f:c.instructions+=45;goto B489f0f;
case 0x489f13:c.instructions+=44;goto B489f13;
case 0x489f16:c.instructions+=43;goto B489f16;
case 0x489f1a:c.instructions+=42;goto B489f1a;
case 0x489f1d:c.instructions+=41;goto B489f1d;
case 0x489f21:c.instructions+=40;goto B489f21;
case 0x489f25:c.instructions+=39;goto B489f25;
case 0x489f29:c.instructions+=38;goto B489f29;
case 0x489f2b:c.instructions+=37;goto B489f2b;
case 0x489f2f:c.instructions+=36;goto B489f2f;
case 0x489f31:c.instructions+=35;goto B489f31;
case 0x489f35:c.instructions+=34;goto B489f35;
case 0x489f39:c.instructions+=33;goto B489f39;
case 0x489f3b:c.instructions+=32;goto B489f3b;
case 0x489f3d:c.instructions+=31;goto B489f3d;
case 0x489f3f:c.instructions+=30;goto B489f3f;
case 0x489f41:c.instructions+=29;goto B489f41;
case 0x489f43:c.instructions+=28;goto B489f43;
case 0x489f45:c.instructions+=27;goto B489f45;
case 0x489f47:c.instructions+=26;goto B489f47;
case 0x489f49:c.instructions+=25;goto B489f49;
case 0x489f4b:c.instructions+=24;goto B489f4b;
case 0x489f4d:c.instructions+=23;goto B489f4d;
case 0x489f4f:c.instructions+=22;goto B489f4f;
case 0x489f51:c.instructions+=21;goto B489f51;
case 0x489f53:c.instructions+=20;goto B489f53;
case 0x489f57:c.instructions+=19;goto B489f57;
case 0x489f5b:c.instructions+=18;goto B489f5b;
case 0x489f5d:c.instructions+=17;goto B489f5d;
case 0x489f5f:c.instructions+=16;goto B489f5f;
case 0x489f61:c.instructions+=15;goto B489f61;
case 0x489f63:c.instructions+=14;goto B489f63;
case 0x489f67:c.instructions+=13;goto B489f67;
case 0x489f6b:c.instructions+=12;goto B489f6b;
case 0x489f6d:c.instructions+=11;goto B489f6d;
case 0x489f71:c.instructions+=10;goto B489f71;
case 0x489f73:c.instructions+=9;goto B489f73;
case 0x489f75:c.instructions+=8;goto B489f75;
case 0x489f77:c.instructions+=7;goto B489f77;
case 0x489f79:c.instructions+=6;goto B489f79;
case 0x489f7b:c.instructions+=5;goto B489f7b;
case 0x489f7f:c.instructions+=4;goto B489f7f;
case 0x489f85:c.instructions+=3;goto B489f85;
case 0x489f87:c.instructions+=2;goto B489f87;
case 0x489f8a:c.instructions+=1;goto B489f8a;
case 0x489f8c:goto L489f8c;
case 0x489f8e:c.instructions+=1;goto B489f8e;
case 0x489f92:goto L489f92;
case 0x489f95:c.instructions+=31;goto B489f95;
case 0x489f9b:c.instructions+=30;goto B489f9b;
case 0x489fa1:c.instructions+=29;goto B489fa1;
case 0x489fa5:c.instructions+=28;goto B489fa5;
case 0x489fa8:c.instructions+=27;goto B489fa8;
case 0x489fab:c.instructions+=26;goto B489fab;
case 0x489fae:c.instructions+=25;goto B489fae;
case 0x489fb2:c.instructions+=24;goto B489fb2;
case 0x489fb5:c.instructions+=23;goto B489fb5;
case 0x489fb8:c.instructions+=22;goto B489fb8;
case 0x489fbc:c.instructions+=21;goto B489fbc;
case 0x489fbf:c.instructions+=20;goto B489fbf;
case 0x489fc3:c.instructions+=19;goto B489fc3;
case 0x489fc6:c.instructions+=18;goto B489fc6;
case 0x489fca:c.instructions+=17;goto B489fca;
case 0x489fce:c.instructions+=16;goto B489fce;
case 0x489fd2:c.instructions+=15;goto B489fd2;
case 0x489fd6:c.instructions+=14;goto B489fd6;
case 0x489fda:c.instructions+=13;goto B489fda;
case 0x489fdc:c.instructions+=12;goto B489fdc;
case 0x489fe0:c.instructions+=11;goto B489fe0;
case 0x489fe4:c.instructions+=10;goto B489fe4;
case 0x489fe6:c.instructions+=9;goto B489fe6;
case 0x489fea:c.instructions+=8;goto B489fea;
case 0x489fee:c.instructions+=7;goto B489fee;
case 0x489ff0:c.instructions+=6;goto B489ff0;
case 0x489ff4:c.instructions+=5;goto B489ff4;
case 0x489ff8:c.instructions+=4;goto B489ff8;
case 0x489ffa:c.instructions+=3;goto B489ffa;
case 0x489ffc:c.instructions+=2;goto B489ffc;
case 0x489ffe:c.instructions+=1;goto B489ffe;
default:missing_instruction(c.pc);}
B489004:L489004:{c.instructions+=5;NFSU2_TR(0x489004);
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
B489006:{NFSU2_TR(0x489006);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B489007:{NFSU2_TR(0x489007);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B489008:{NFSU2_TR(0x489008);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48900c:{NFSU2_TR(0x48900c);
if(r1(R+518)){{goto L4891f6;}}
}
B489012:L489012:{c.instructions+=3;NFSU2_TR(0x489012);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B489015:{NFSU2_TR(0x489015);
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
B489017:{NFSU2_TR(0x489017);
if(r1(R+518)){{goto L4891f6;}}
}
B48901d:L48901d:{c.instructions+=3;NFSU2_TR(0x48901d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B489020:{NFSU2_TR(0x489020);
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
B489022:{NFSU2_TR(0x489022);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L4891f6;}}
}
B489028:L489028:{c.instructions+=3;NFSU2_TR(0x489028);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xaull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(s32(s16(r2(U+4)))));
}
B48902c:{NFSU2_TR(0x48902c);
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
B48902e:{NFSU2_TR(0x48902e);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L4891f6;}}
}
B489034:L489034:{c.instructions+=3;NFSU2_TR(0x489034);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B48903c:{NFSU2_TR(0x48903c);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B489040:{NFSU2_TR(0x489040);
{goto L489050;}
}
B489042:L489042:{c.instructions+=2;NFSU2_TR(0x489042);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B489046:{NFSU2_TR(0x489046);
{goto L489050;}
}
B489050:L489050:{c.instructions+=17;NFSU2_TR(0x489050);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B489053:{NFSU2_TR(0x489053);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B489057:{NFSU2_TR(0x489057);
u8 U[16];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+12))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B48905b:{NFSU2_TR(0x48905b);
w4(R+12,u32(u32(r4(R+12))+u32(r4(R+4))));
}
B48905d:{NFSU2_TR(0x48905d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+4),(U+0),4);
}
B48905f:{NFSU2_TR(0x48905f);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B489063:{NFSU2_TR(0x489063);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B489066:{NFSU2_TR(0x489066);
w4(R+24,u32(u32(r4(R+24))|u32(u32(0xffffffffull))));
}
B489069:{NFSU2_TR(0x489069);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B48906b:{NFSU2_TR(0x48906b);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
}
B48906c:{NFSU2_TR(0x48906c);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B48906e:{NFSU2_TR(0x48906e);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B489072:{NFSU2_TR(0x489072);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B489076:{NFSU2_TR(0x489076);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B48907e:{NFSU2_TR(0x48907e);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B489086:{NFSU2_TR(0x489086);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B48908e:{NFSU2_TR(0x48908e);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L4891dc;}}
}
B489094:L489094:{c.instructions+=1;NFSU2_TR(0x489094);
{goto L4890a0;}
}
B489096:L489096:{c.instructions+=2;NFSU2_TR(0x489096);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B48909a:{NFSU2_TR(0x48909a);
__builtin_memmove((R+12),(R+12),4);
}
B4890a0:L4890a0:{c.instructions+=2;NFSU2_TR(0x4890a0);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4890a3:{NFSU2_TR(0x4890a3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4890dc;}}
}
B4890a5:L4890a5:{c.instructions+=10;NFSU2_TR(0x4890a5);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B4890a9:{NFSU2_TR(0x4890a9);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B4890ac:{NFSU2_TR(0x4890ac);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B4890ad:{NFSU2_TR(0x4890ad);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+8))));
}
B4890af:{NFSU2_TR(0x4890af);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4890b2:{NFSU2_TR(0x4890b2);
w4(R+0,sar<u32>(r4(R+0),u64(u32(0x1ull))));
}
B4890b4:{NFSU2_TR(0x4890b4);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B4890b7:{NFSU2_TR(0x4890b7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+8),(U+0),4);
}
B4890b9:{NFSU2_TR(0x4890b9);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+512,u8((r4(R+12))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4890bb:{NFSU2_TR(0x4890bb);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L4890c2;}}
}
B4890bd:L4890bd:{c.instructions+=2;NFSU2_TR(0x4890bd);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xffffffffull))));
__builtin_memmove((R+4),(U+0),4);
}
B4890c0:{NFSU2_TR(0x4890c0);
{goto L4890cb;}
}
B4890c2:L4890c2:{c.instructions+=1;NFSU2_TR(0x4890c2);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L4890c9;}}
}
B4890c4:L4890c4:{c.instructions+=2;NFSU2_TR(0x4890c4);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4890c7:{NFSU2_TR(0x4890c7);
{goto L4890cb;}
}
B4890c9:L4890c9:{c.instructions+=1;NFSU2_TR(0x4890c9);
__builtin_memmove((R+24),(R+0),4);
}
B4890cb:L4890cb:{c.instructions+=2;NFSU2_TR(0x4890cb);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+0)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4890cd:{NFSU2_TR(0x4890cd);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x489096u);}goto L489096;}}
}
B4890cf:L4890cf:{c.instructions+=2;NFSU2_TR(0x4890cf);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4890d2:{NFSU2_TR(0x4890d2);
if(r1(R+518)){{goto L4891dc;}}
}
B4890d8:L4890d8:{c.instructions+=1;NFSU2_TR(0x4890d8);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B4890dc:L4890dc:{c.instructions+=2;NFSU2_TR(0x4890dc);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4890de:{NFSU2_TR(0x4890de);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L4890f9;}}
}
B4890e0:L4890e0:{c.instructions+=2;NFSU2_TR(0x4890e0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4890e3:{NFSU2_TR(0x4890e3);
u8 U[12];
w4(U+0,u32(u32(u32(0xfffffffcull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B4890e7:L4890e7:{c.instructions+=4;NFSU2_TR(0x4890e7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B4890e9:{NFSU2_TR(0x4890e9);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4890ed:{NFSU2_TR(0x4890ed);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(r4(R+8))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B4890ef:{NFSU2_TR(0x4890ef);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4890f9;}}
}
B4890f1:L4890f1:{c.instructions+=4;NFSU2_TR(0x4890f1);
w4(R+24,u32(u32(r4(R+24))-u32(u32(0x1ull))));
}
B4890f2:{NFSU2_TR(0x4890f2);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x4ull))));
}
B4890f5:{NFSU2_TR(0x4890f5);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4890f7:{NFSU2_TR(0x4890f7);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4890e7u);}goto L4890e7;}}
}
B4890f9:L4890f9:{c.instructions+=2;NFSU2_TR(0x4890f9);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+8)));
w4(U+12,u32(u32(r4(R+24))-u32(r4(U+8))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B4890fc:{NFSU2_TR(0x4890fc);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L4891ae;}}
}
B489102:L489102:{c.instructions+=5;NFSU2_TR(0x489102);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B489105:{NFSU2_TR(0x489105);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B489108:{NFSU2_TR(0x489108);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B48910c:{NFSU2_TR(0x48910c);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(r4(R+4))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B48910e:{NFSU2_TR(0x48910e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4891ae;}}
}
B489114:L489114:{c.instructions+=6;NFSU2_TR(0x489114);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B489117:{NFSU2_TR(0x489117);
w4(R+8,u32(0x1ull));
}
B48911c:{NFSU2_TR(0x48911c);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r1(U+0))));
}
B48911e:{NFSU2_TR(0x48911e);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B489122:{NFSU2_TR(0x489122);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B489124:{NFSU2_TR(0x489124);
if(r1(R+518)){{goto L4891a2;}}
}
B48912a:L48912a:{c.instructions+=20;NFSU2_TR(0x48912a);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x5ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+8,u32(s32(s8(r1(U+4)))));
}
B48912e:{NFSU2_TR(0x48912e);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(s32(s8(r1(U+4)))));
}
B489132:{NFSU2_TR(0x489132);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B489136:{NFSU2_TR(0x489136);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x7ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+8,u32(s32(s8(r1(U+4)))));
}
B48913a:{NFSU2_TR(0x48913a);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B48913e:{NFSU2_TR(0x48913e);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B489142:{NFSU2_TR(0x489142);
{u32 ea_=u32(u32(7907660u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B489148:{NFSU2_TR(0x489148);
u8 U[4];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B48914c:{NFSU2_TR(0x48914c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48914d:{NFSU2_TR(0x48914d);
u8 U[4];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B489151:{NFSU2_TR(0x489151);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B489155:{NFSU2_TR(0x489155);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B489156:{NFSU2_TR(0x489156);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B48915a:{NFSU2_TR(0x48915a);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48915e:{NFSU2_TR(0x48915e);
{u32 ea_=u32(u32(7907660u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B489164:{NFSU2_TR(0x489164);
{u32 ea_=u32(r4(R+16)+u32(76u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B489168:{NFSU2_TR(0x489168);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B48916c:{NFSU2_TR(0x48916c);
{u32 ea_=u32(u32(7907660u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B489172:{NFSU2_TR(0x489172);
{u32 ea_=u32(r4(R+16)+u32(80u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B489176:{NFSU2_TR(0x489176);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x48917bull));
TAIL_STATIC(0x43cf10u,43c);
}
B48917b:L48917b:{c.instructions+=10;NFSU2_TR(0x48917b);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48917f:{NFSU2_TR(0x48917f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B489182:{NFSU2_TR(0x489182);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B489186:{NFSU2_TR(0x489186);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B48918a:{NFSU2_TR(0x48918a);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48918e:{NFSU2_TR(0x48918e);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B489192:{NFSU2_TR(0x489192);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B489196:{NFSU2_TR(0x489196);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48919a:{NFSU2_TR(0x48919a);
{u32 ea_=u32(r4(R+16)+u32(72u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B48919e:{NFSU2_TR(0x48919e);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4891a2:L4891a2:{c.instructions+=4;NFSU2_TR(0x4891a2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4891a5:{NFSU2_TR(0x4891a5);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B4891a6:{NFSU2_TR(0x4891a6);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B4891a8:{NFSU2_TR(0x4891a8);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x489102u);}goto L489102;}}
}
B4891ae:L4891ae:{c.instructions+=5;NFSU2_TR(0x4891ae);
u8 U[4];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B4891b2:{NFSU2_TR(0x4891b2);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4891b3:{NFSU2_TR(0x4891b3);
u8 U[4];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B4891b7:{NFSU2_TR(0x4891b7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4891b8:{NFSU2_TR(0x4891b8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4891bdull));
TAIL_STATIC(0x43cf10u,43c);
}
B4891bd:L4891bd:{c.instructions+=11;NFSU2_TR(0x4891bd);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4891c1:{NFSU2_TR(0x4891c1);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4891c5:{NFSU2_TR(0x4891c5);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4891c9:{NFSU2_TR(0x4891c9);
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
B4891cc:{NFSU2_TR(0x4891cc);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4891cd:{NFSU2_TR(0x4891cd);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4891d0:{NFSU2_TR(0x4891d0);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4891d1:{NFSU2_TR(0x4891d1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4891d2:{NFSU2_TR(0x4891d2);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4891d3:{NFSU2_TR(0x4891d3);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4891d7:{NFSU2_TR(0x4891d7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4891dcull));
TAIL_STATIC(0x50d290u,50d);
}
B4891dc:L4891dc:{c.instructions+=7;NFSU2_TR(0x4891dc);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4891e0:{NFSU2_TR(0x4891e0);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4891e4:{NFSU2_TR(0x4891e4);
w1(R+512,carry<u32>(r4(R+4),u32(0xcull)));
w4(R+4,u32(u32(r4(R+4))+u32(u32(0xcull))));
}
B4891e7:{NFSU2_TR(0x4891e7);
u8 U[6];
w1(R+523,sborrow<u32>(r4(R+0),u32(0x1ull)));
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4891e8:{NFSU2_TR(0x4891e8);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4891ec:{NFSU2_TR(0x4891ec);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4891f0:{NFSU2_TR(0x4891f0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x489042u);}goto L489042;}}
}
B4891f6:L4891f6:{c.instructions+=6;NFSU2_TR(0x4891f6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4891f7:{NFSU2_TR(0x4891f7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4891f8:{NFSU2_TR(0x4891f8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4891f9:{NFSU2_TR(0x4891f9);
__builtin_memmove((R+16),(R+20),4);
}
B4891fb:{NFSU2_TR(0x4891fb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4891fc:{NFSU2_TR(0x4891fc);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B489200:L489200:{c.instructions+=6;NFSU2_TR(0x489200);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x14ull))));
}
B489203:{NFSU2_TR(0x489203);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B489204:{NFSU2_TR(0x489204);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B489205:{NFSU2_TR(0x489205);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B489209:{NFSU2_TR(0x489209);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B48920b:{NFSU2_TR(0x48920b);
if(r1(R+518)){{goto L48936c;}}
}
B489211:L489211:{c.instructions+=3;NFSU2_TR(0x489211);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B489215:{NFSU2_TR(0x489215);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+20))&u32(r4(R+20))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B489217:{NFSU2_TR(0x489217);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L48936c;}}
}
B48921d:L48921d:{c.instructions+=1;NFSU2_TR(0x48921d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L48922a;}}
}
B48921f:L48921f:{c.instructions+=5;NFSU2_TR(0x48921f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B489220:{NFSU2_TR(0x489220);
w4(R+0,u32(0x1ull));
}
B489225:{NFSU2_TR(0x489225);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B489226:{NFSU2_TR(0x489226);
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
B489229:{NFSU2_TR(0x489229);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B48922a:L48922a:{c.instructions+=5;NFSU2_TR(0x48922a);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48922b:{NFSU2_TR(0x48922b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x0ull))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B489232:{NFSU2_TR(0x489232);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B489233:{NFSU2_TR(0x489233);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B489234:{NFSU2_TR(0x489234);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x489239ull));
TAIL_STATIC(0x575620u,575);
}
B489239:L489239:{c.instructions+=6;NFSU2_TR(0x489239);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B48923c:{NFSU2_TR(0x48923c);
__builtin_memmove((R+8),(R+0),4);
}
B48923e:{NFSU2_TR(0x48923e);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B489240:{NFSU2_TR(0x489240);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+20))&u32(r4(R+20))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B489242:{NFSU2_TR(0x489242);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B489246:{NFSU2_TR(0x489246);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L48927b;}}
}
B489248:L489248:{c.instructions+=4;NFSU2_TR(0x489248);
__builtin_memmove((R+0),(R+24),4);
}
B48924a:{NFSU2_TR(0x48924a);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+24))));
}
B48924c:{NFSU2_TR(0x48924c);
__builtin_memmove((R+24),(R+20),4);
}
B48924e:{NFSU2_TR(0x48924e);
__builtin_memmove((R+28),(R+28),4);
}
B489250:L489250:{c.instructions+=3;NFSU2_TR(0x489250);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B489252:{NFSU2_TR(0x489252);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B489254:{NFSU2_TR(0x489254);
if(r1(R+518)){{goto L489268;}}
}
B489256:L489256:{c.instructions+=3;NFSU2_TR(0x489256);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x84ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B48925c:{NFSU2_TR(0x48925c);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B48925e:{NFSU2_TR(0x48925e);
if(r1(R+518)){{goto L489268;}}
}
B489260:L489260:{c.instructions+=3;NFSU2_TR(0x489260);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(s32(s16(r2(U+4)))));
}
B489264:{NFSU2_TR(0x489264);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+4))));
}
B489266:{NFSU2_TR(0x489266);
{goto L48926e;}
}
B489268:L489268:{c.instructions+=1;NFSU2_TR(0x489268);
u8 U[4];
w4(U+0,u32(0x0ull));
s4(u32(r4(R+0)),r4(U+0));
}
B48926e:L48926e:{c.instructions+=4;NFSU2_TR(0x48926e);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
w4(U+8,u32(0x0ull));
s4(u32(r4(U+4)),r4(U+8));
}
B489275:{NFSU2_TR(0x489275);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B489278:{NFSU2_TR(0x489278);
w4(R+24,u32(u32(r4(R+24))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
}
B489279:{NFSU2_TR(0x489279);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x489250u);}goto L489250;}}
}
B48927b:L48927b:{c.instructions+=1;NFSU2_TR(0x48927b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x489280ull));
TAIL_STATIC(0x43bdf0u,43b);
}
B489280:L489280:{c.instructions+=3;NFSU2_TR(0x489280);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x0ull))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B489287:{NFSU2_TR(0x489287);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B489288:{NFSU2_TR(0x489288);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x48928dull));
TAIL_STATIC(0x575620u,575);
}
B48928d:L48928d:{c.instructions+=6;NFSU2_TR(0x48928d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B489290:{NFSU2_TR(0x489290);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B489292:{NFSU2_TR(0x489292);
__builtin_memmove((R+12),(R+0),4);
}
B489294:{NFSU2_TR(0x489294);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B489298:{NFSU2_TR(0x489298);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4892a0:{NFSU2_TR(0x4892a0);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L48932b;}}
}
B4892a6:L4892a6:{c.instructions+=2;NFSU2_TR(0x4892a6);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4892aa:{NFSU2_TR(0x4892aa);
__builtin_memmove((R+12),(R+12),4);
}
B4892b0:L4892b0:{c.instructions+=5;NFSU2_TR(0x4892b0);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B4892b2:{NFSU2_TR(0x4892b2);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B4892b4:{NFSU2_TR(0x4892b4);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B4892b6:{NFSU2_TR(0x4892b6);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+20))&u32(r4(R+20))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4892b8:{NFSU2_TR(0x4892b8);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L489321;}}
}
B4892ba:L4892ba:{c.instructions+=5;NFSU2_TR(0x4892ba);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B4892be:{NFSU2_TR(0x4892be);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4892c2:{NFSU2_TR(0x4892c2);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+24))));
}
B4892c4:{NFSU2_TR(0x4892c4);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4892c8:{NFSU2_TR(0x4892c8);
{goto L4892d0;}
}
B4892ca:L4892ca:{c.instructions+=2;NFSU2_TR(0x4892ca);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4892ce:{NFSU2_TR(0x4892ce);
__builtin_memmove((R+28),(R+28),4);
}
B4892d0:L4892d0:{c.instructions+=3;NFSU2_TR(0x4892d0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4892d2:{NFSU2_TR(0x4892d2);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4892d4:{NFSU2_TR(0x4892d4);
if(r1(R+518)){{goto L4892fe;}}
}
B4892d6:L4892d6:{c.instructions+=5;NFSU2_TR(0x4892d6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x84ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4892dc:{NFSU2_TR(0x4892dc);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+20,u32(s32(s16(r2(U+4)))));
}
B4892e0:{NFSU2_TR(0x4892e0);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B4892e3:{NFSU2_TR(0x4892e3);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B4892e5:{NFSU2_TR(0x4892e5);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L4892fa;}}
}
B4892e7:L4892e7:{c.instructions+=4;NFSU2_TR(0x4892e7);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4892e9:{NFSU2_TR(0x4892e9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4892eb:{NFSU2_TR(0x4892eb);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x8ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B4892ee:{NFSU2_TR(0x4892ee);
if(r1(R+518)){{goto L4892f6;}}
}
B4892f0:L4892f0:{c.instructions+=3;NFSU2_TR(0x4892f0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B4892f2:{NFSU2_TR(0x4892f2);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((U+4),(U+0),4);
w1(R+512,u8((r4(R+4))<(r4(U+4))));
}
B4892f4:{NFSU2_TR(0x4892f4);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L4892fa;}}
}
B4892f6:L4892f6:{c.instructions+=2;NFSU2_TR(0x4892f6);
__builtin_memmove((R+8),(R+0),4);
}
B4892f8:{NFSU2_TR(0x4892f8);
__builtin_memmove((R+12),(R+28),4);
}
B4892fa:L4892fa:{c.instructions+=1;NFSU2_TR(0x4892fa);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B4892fe:L4892fe:{c.instructions+=4;NFSU2_TR(0x4892fe);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B4892ff:{NFSU2_TR(0x4892ff);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x4ull))));
}
B489302:{NFSU2_TR(0x489302);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+0)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B489304:{NFSU2_TR(0x489304);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4892cau);}goto L4892ca;}}
}
B489306:L489306:{c.instructions+=2;NFSU2_TR(0x489306);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B489308:{NFSU2_TR(0x489308);
if(r1(R+518)){{goto L489321;}}
}
B48930a:L48930a:{c.instructions+=7;NFSU2_TR(0x48930a);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B48930e:{NFSU2_TR(0x48930e);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B489312:{NFSU2_TR(0x489312);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+8),4);
s4(u32(r4(U+4)),r4(U+8));
}
B489315:{NFSU2_TR(0x489315);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B489316:{NFSU2_TR(0x489316);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48931a:{NFSU2_TR(0x48931a);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B48931e:{NFSU2_TR(0x48931e);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
w4(U+8,u32(u32(r4(U+8))+u32(u32(0x1ull))));
s4(u32(r4(U+4)),r4(U+8));
}
B489321:L489321:{c.instructions+=2;NFSU2_TR(0x489321);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B489325:{NFSU2_TR(0x489325);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4892b0u);}goto L4892b0;}}
}
B489327:L489327:{c.instructions+=1;NFSU2_TR(0x489327);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B48932b:L48932b:{c.instructions+=3;NFSU2_TR(0x48932b);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B48932d:{NFSU2_TR(0x48932d);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+20))&u32(r4(R+20))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B48932f:{NFSU2_TR(0x48932f);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L48934c;}}
}
B489331:L489331:{c.instructions+=4;NFSU2_TR(0x489331);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B489335:{NFSU2_TR(0x489335);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B489338:{NFSU2_TR(0x489338);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B48933a:{NFSU2_TR(0x48933a);
if(r1(R+518)){{goto L489347;}}
}
B48933c:L48933c:{c.instructions+=4;NFSU2_TR(0x48933c);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B489340:{NFSU2_TR(0x489340);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B489341:{NFSU2_TR(0x489341);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B489342:{NFSU2_TR(0x489342);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x489347ull));
TAIL_STATIC(0x488ff0u,488);
}
B489347:L489347:{c.instructions+=3;NFSU2_TR(0x489347);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B489348:{NFSU2_TR(0x489348);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B48934a:{NFSU2_TR(0x48934a);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x489331u);}goto L489331;}}
}
B48934c:L48934c:{c.instructions+=3;NFSU2_TR(0x48934c);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B489350:{NFSU2_TR(0x489350);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B489351:{NFSU2_TR(0x489351);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x489356ull));
TAIL_STATIC(0x575630u,575);
}
B489356:L489356:{c.instructions+=2;NFSU2_TR(0x489356);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B489357:{NFSU2_TR(0x489357);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x48935cull));
TAIL_STATIC(0x575630u,575);
}
B48935c:L48935c:{c.instructions+=8;NFSU2_TR(0x48935c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B48935f:{NFSU2_TR(0x48935f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B489360:{NFSU2_TR(0x489360);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B489361:{NFSU2_TR(0x489361);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B489362:{NFSU2_TR(0x489362);
w4(R+0,u32(0x1ull));
}
B489367:{NFSU2_TR(0x489367);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B489368:{NFSU2_TR(0x489368);
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
B48936b:{NFSU2_TR(0x48936b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B48936c:L48936c:{c.instructions+=5;NFSU2_TR(0x48936c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B48936d:{NFSU2_TR(0x48936d);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B48936f:{NFSU2_TR(0x48936f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B489370:{NFSU2_TR(0x489370);
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
B489373:{NFSU2_TR(0x489373);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B489380:L489380:{c.instructions+=6;NFSU2_TR(0x489380);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B489384:{NFSU2_TR(0x489384);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B489388:{NFSU2_TR(0x489388);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B48938a:{NFSU2_TR(0x48938a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+4),(U+0),4);
}
B48938c:{NFSU2_TR(0x48938c);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(R+4))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B48938e:{NFSU2_TR(0x48938e);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L489394;}}
}
B489390:L489390:{c.instructions+=2;NFSU2_TR(0x489390);
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
B489393:{NFSU2_TR(0x489393);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B489394:L489394:{c.instructions+=3;NFSU2_TR(0x489394);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(R+0))));
w4(R+0,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B489396:{NFSU2_TR(0x489396);
u8 U[6];
w1(R+512,u8((r4(R+0))!=(u32(0x0ull))));
w1(R+523,sborrow<u32>(u32(0x0ull),r4(R+0)));
w4(R+0,u32(0-u32(r4(R+0))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B489398:{NFSU2_TR(0x489398);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4893a0:L4893a0:{c.instructions+=5;NFSU2_TR(0x4893a0);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4893a4:{NFSU2_TR(0x4893a4);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x7ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B4893a7:{NFSU2_TR(0x4893a7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x10ull))));
}
B4893aa:{NFSU2_TR(0x4893aa);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4893ac:{NFSU2_TR(0x4893ac);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4895d4;}}
}
B4893b2:L4893b2:{c.instructions+=33;NFSU2_TR(0x4893b2);
{u32 ea_=u32(r4(R+4)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4893b5:{NFSU2_TR(0x4893b5);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4893b6:{NFSU2_TR(0x4893b6);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B4893ba:{NFSU2_TR(0x4893ba);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+24,u32(r1(U+4)));
}
B4893be:{NFSU2_TR(0x4893be);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B4893c0:{NFSU2_TR(0x4893c0);
{u32 ea_=u32(r4(R+4)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4893c3:{NFSU2_TR(0x4893c3);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B4893c7:{NFSU2_TR(0x4893c7);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B4893c9:{NFSU2_TR(0x4893c9);
{u32 ea_=u32(r4(R+4)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4893cc:{NFSU2_TR(0x4893cc);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B4893d0:{NFSU2_TR(0x4893d0);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B4893d2:{NFSU2_TR(0x4893d2);
{u32 ea_=u32(r4(R+4)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4893d5:{NFSU2_TR(0x4893d5);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B4893d7:{NFSU2_TR(0x4893d7);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B4893d9:{NFSU2_TR(0x4893d9);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4893dd:{NFSU2_TR(0x4893dd);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B4893df:{NFSU2_TR(0x4893df);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B4893e1:{NFSU2_TR(0x4893e1);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B4893e3:{NFSU2_TR(0x4893e3);
__asm__ volatile(".byte 0xd9,0xc2":::"memory");
}
B4893e5:{NFSU2_TR(0x4893e5);
__asm__ volatile(".byte 0xd8,0xcb":::"memory");
}
B4893e7:{NFSU2_TR(0x4893e7);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B4893e9:{NFSU2_TR(0x4893e9);
__asm__ volatile(".byte 0xd9,0xc3":::"memory");
}
B4893eb:{NFSU2_TR(0x4893eb);
__asm__ volatile(".byte 0xd8,0xcc":::"memory");
}
B4893ed:{NFSU2_TR(0x4893ed);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B4893ef:{NFSU2_TR(0x4893ef);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4893f3:{NFSU2_TR(0x4893f3);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B4893f5:{NFSU2_TR(0x4893f5);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B4893f7:{NFSU2_TR(0x4893f7);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B4893f9:{NFSU2_TR(0x4893f9);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4893fd:{NFSU2_TR(0x4893fd);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B489401:{NFSU2_TR(0x489401);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B489403:{NFSU2_TR(0x489403);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B489406:{NFSU2_TR(0x489406);
if(r1(R+514)){{goto L4895d3;}}
}
B48940c:L48940c:{c.instructions+=10;NFSU2_TR(0x48940c);
{u32 ea_=u32(r4(R+4)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48940f:{NFSU2_TR(0x48940f);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x5ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+8,u32(r1(U+4)));
}
B489413:{NFSU2_TR(0x489413);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B48941b:{NFSU2_TR(0x48941b);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B48941d:{NFSU2_TR(0x48941d);
__asm__ volatile(".byte 0xde,0xc9":::"memory");
}
B48941f:{NFSU2_TR(0x48941f);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B489423:{NFSU2_TR(0x489423);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B489425:{NFSU2_TR(0x489425);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B489427:{NFSU2_TR(0x489427);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B48942a:{NFSU2_TR(0x48942a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L489444;}}
}
B48942c:L48942c:{c.instructions+=7;NFSU2_TR(0x48942c);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B489430:{NFSU2_TR(0x489430);
__asm__ volatile(".byte 0xd8,0xe1":::"memory");
}
B489432:{NFSU2_TR(0x489432);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B489436:{NFSU2_TR(0x489436);
__asm__ volatile(".byte 0xd8,0xe2":::"memory");
}
B489438:{NFSU2_TR(0x489438);
__asm__ volatile(".byte 0xde,0xf9":::"memory");
}
B48943a:{NFSU2_TR(0x48943a);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B489440:{NFSU2_TR(0x489440);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B489444:L489444:{c.instructions+=3;NFSU2_TR(0x489444);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B489446:{NFSU2_TR(0x489446);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B489448:{NFSU2_TR(0x489448);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L489591;}}
}
B48944e:L48944e:{c.instructions+=7;NFSU2_TR(0x48944e);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B489451:{NFSU2_TR(0x489451);
__builtin_memmove((R+24),(R+0),4);
}
B489453:{NFSU2_TR(0x489453);
w4(R+24,u32(u32(r4(R+24))&u32(u32(0xffull))));
}
B489459:{NFSU2_TR(0x489459);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B48945b:{NFSU2_TR(0x48945b);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48945f:{NFSU2_TR(0x48945f);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B489463:{NFSU2_TR(0x489463);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L48946b;}}
}
B489465:L489465:{c.instructions+=1;NFSU2_TR(0x489465);
{u32 ea_=u32(u32(7882060u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B48946b:L48946b:{c.instructions+=7;NFSU2_TR(0x48946b);
__builtin_memmove((R+24),(R+0),4);
}
B48946d:{NFSU2_TR(0x48946d);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+24,shr<u32>(r4(R+24),u64(r4(U+0))));
}
B489470:{NFSU2_TR(0x489470);
w4(R+24,u32(u32(r4(R+24))&u32(u32(0xffull))));
}
B489476:{NFSU2_TR(0x489476);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B489478:{NFSU2_TR(0x489478);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48947c:{NFSU2_TR(0x48947c);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B489480:{NFSU2_TR(0x489480);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L489488;}}
}
B489482:L489482:{c.instructions+=1;NFSU2_TR(0x489482);
{u32 ea_=u32(u32(7882060u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B489488:L489488:{c.instructions+=7;NFSU2_TR(0x489488);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))&u32(u32(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+0))));
}
B48948b:{NFSU2_TR(0x48948b);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B48948f:{NFSU2_TR(0x48948f);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
}
B489494:{NFSU2_TR(0x489494);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B489496:{NFSU2_TR(0x489496);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48949a:{NFSU2_TR(0x48949a);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B48949e:{NFSU2_TR(0x48949e);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L4894a6;}}
}
B4894a0:L4894a0:{c.instructions+=1;NFSU2_TR(0x4894a0);
{u32 ea_=u32(u32(7882060u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B4894a6:L4894a6:{c.instructions+=6;NFSU2_TR(0x4894a6);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4894a9:{NFSU2_TR(0x4894a9);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4894ad:{NFSU2_TR(0x4894ad);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4894b0:{NFSU2_TR(0x4894b0);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4894b4:{NFSU2_TR(0x4894b4);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4894b8:{NFSU2_TR(0x4894b8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L489542;}}
}
B4894be:L4894be:{c.instructions+=3;NFSU2_TR(0x4894be);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xb4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4894c4:{NFSU2_TR(0x4894c4);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xb8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B4894ca:{NFSU2_TR(0x4894ca);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L4895d1;}}
}
B4894d0:L4894d0:{c.instructions+=19;NFSU2_TR(0x4894d0);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4894d4:{NFSU2_TR(0x4894d4);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4894d6:{NFSU2_TR(0x4894d6);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xb4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4894dc:{NFSU2_TR(0x4894dc);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4894e0:{NFSU2_TR(0x4894e0);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4894e4:{NFSU2_TR(0x4894e4);
{u32 ea_=u32(r4(R+8)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4894e7:{NFSU2_TR(0x4894e7);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xb4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4894ed:{NFSU2_TR(0x4894ed);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4894f1:{NFSU2_TR(0x4894f1);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4894f5:{NFSU2_TR(0x4894f5);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4894f8:{NFSU2_TR(0x4894f8);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xb4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4894fe:{NFSU2_TR(0x4894fe);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B489502:{NFSU2_TR(0x489502);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B489506:{NFSU2_TR(0x489506);
{u32 ea_=u32(r4(R+8)+u32(12u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B489509:{NFSU2_TR(0x489509);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48950d:{NFSU2_TR(0x48950d);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B489513:{NFSU2_TR(0x489513);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B489515:{NFSU2_TR(0x489515);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B489518:{NFSU2_TR(0x489518);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4895d3;}}
}
B48951e:L48951e:{c.instructions+=9;NFSU2_TR(0x48951e);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B489522:{NFSU2_TR(0x489522);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xb4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B489528:{NFSU2_TR(0x489528);
{u32 ea_=u32(r4(R+4)+u32(188u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B48952e:{NFSU2_TR(0x48952e);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
}
B489531:{NFSU2_TR(0x489531);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xb4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B489537:{NFSU2_TR(0x489537);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B489538:{NFSU2_TR(0x489538);
{u32 ea_=u32(r4(R+4)+u32(188u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B48953e:{NFSU2_TR(0x48953e);
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
B489541:{NFSU2_TR(0x489541);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B489542:L489542:{c.instructions+=5;NFSU2_TR(0x489542);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B489546:{NFSU2_TR(0x489546);
{u32 ea_=u32(r4(R+4)+u32(192u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B48954c:{NFSU2_TR(0x48954c);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B48954e:{NFSU2_TR(0x48954e);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B489551:{NFSU2_TR(0x489551);
if(r1(R+514)){{goto L4895d1;}}
}
B489553:L489553:{c.instructions+=16;NFSU2_TR(0x489553);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B489559:{NFSU2_TR(0x489559);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B48955b:{NFSU2_TR(0x48955b);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B489561:{NFSU2_TR(0x489561);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B489565:{NFSU2_TR(0x489565);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B489568:{NFSU2_TR(0x489568);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B48956e:{NFSU2_TR(0x48956e);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B489572:{NFSU2_TR(0x489572);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B489575:{NFSU2_TR(0x489575);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B48957b:{NFSU2_TR(0x48957b);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B48957f:{NFSU2_TR(0x48957f);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B489582:{NFSU2_TR(0x489582);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B489586:{NFSU2_TR(0x489586);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xc0ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48958c:{NFSU2_TR(0x48958c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B48958d:{NFSU2_TR(0x48958d);
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
B489590:{NFSU2_TR(0x489590);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B489591:L489591:{c.instructions+=2;NFSU2_TR(0x489591);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B489594:{NFSU2_TR(0x489594);
if(r1(R+518)){{goto L48959b;}}
}
B489596:L489596:{c.instructions+=2;NFSU2_TR(0x489596);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B489599:{NFSU2_TR(0x489599);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4895d3;}}
}
B48959b:L48959b:{c.instructions+=4;NFSU2_TR(0x48959b);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B48959f:{NFSU2_TR(0x48959f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B4895a5:{NFSU2_TR(0x4895a5);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x18ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x18ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B4895a8:{NFSU2_TR(0x4895a8);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L4895d3;}}
}
B4895aa:L4895aa:{c.instructions+=11;NFSU2_TR(0x4895aa);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4895ae:{NFSU2_TR(0x4895ae);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4895b2:{NFSU2_TR(0x4895b2);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4),4);
s4(u32(r4(U+4)),r4(U+8));
}
B4895b5:{NFSU2_TR(0x4895b5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4895bb:{NFSU2_TR(0x4895bb);
{u32 ea_=u32((r4(R+4)*4u)+r4(R+8)+u32(96u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4895bf:{NFSU2_TR(0x4895bf);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4895c5:{NFSU2_TR(0x4895c5);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B4895c6:{NFSU2_TR(0x4895c6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xc8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4895cc:{NFSU2_TR(0x4895cc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4895cd:{NFSU2_TR(0x4895cd);
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
B4895d0:{NFSU2_TR(0x4895d0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4895d1:L4895d1:{c.instructions+=1;NFSU2_TR(0x4895d1);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B4895d3:L4895d3:{c.instructions+=1;NFSU2_TR(0x4895d3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4895d4:L4895d4:{c.instructions+=2;NFSU2_TR(0x4895d4);
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
B4895d7:{NFSU2_TR(0x4895d7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4895e0:L4895e0:{c.instructions+=332;NFSU2_TR(0x4895e0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x38ull))));
}
B4895e3:{NFSU2_TR(0x4895e3);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4895e7:{NFSU2_TR(0x4895e7);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4895e9:{NFSU2_TR(0x4895e9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4895ec:{NFSU2_TR(0x4895ec);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4895ef:{NFSU2_TR(0x4895ef);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4895f2:{NFSU2_TR(0x4895f2);
{u32 ea_=u32(r4(R+16)+u32(76u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4895f6:{NFSU2_TR(0x4895f6);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4895fa:{NFSU2_TR(0x4895fa);
{u32 ea_=u32(r4(R+16)+u32(76u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4895fe:{NFSU2_TR(0x4895fe);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B489602:{NFSU2_TR(0x489602);
{u32 ea_=u32(u32(7895772u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B489608:{NFSU2_TR(0x489608);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B48960e:{NFSU2_TR(0x48960e);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B489612:{NFSU2_TR(0x489612);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B489616:{NFSU2_TR(0x489616);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B48961a:{NFSU2_TR(0x48961a);
{u32 ea_=u32(r4(R+16)+u32(72u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48961e:{NFSU2_TR(0x48961e);
{u32 ea_=u32(r4(R+16)+u32(72u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B489622:{NFSU2_TR(0x489622);
__asm__ volatile(".byte 0xde,0xe9":::"memory");
}
B489624:{NFSU2_TR(0x489624);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B489628:{NFSU2_TR(0x489628);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B48962a:{NFSU2_TR(0x48962a);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B48962e:{NFSU2_TR(0x48962e);
{u32 ea_=u32(u32(7919940u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B489634:{NFSU2_TR(0x489634);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B489636:{NFSU2_TR(0x489636);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B489638:{NFSU2_TR(0x489638);
{u32 ea_=u32(u32(7919936u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B48963e:{NFSU2_TR(0x48963e);
{u32 ea_=u32(r4(R+16)+u32(72u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B489642:{NFSU2_TR(0x489642);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B489644:{NFSU2_TR(0x489644);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B489648:{NFSU2_TR(0x489648);
{u32 ea_=u32(r4(R+16)+u32(76u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48964c:{NFSU2_TR(0x48964c);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B48964e:{NFSU2_TR(0x48964e);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B489652:{NFSU2_TR(0x489652);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B489656:{NFSU2_TR(0x489656);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B48965a:{NFSU2_TR(0x48965a);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B48965c:{NFSU2_TR(0x48965c);
{u32 ea_=u32(u32(7919932u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B489662:{NFSU2_TR(0x489662);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B489666:{NFSU2_TR(0x489666);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B489668:{NFSU2_TR(0x489668);
{u32 ea_=u32(r4(R+16)+u32(72u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48966c:{NFSU2_TR(0x48966c);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B48966e:{NFSU2_TR(0x48966e);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B489672:{NFSU2_TR(0x489672);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B489674:{NFSU2_TR(0x489674);
{u32 ea_=u32(r4(R+16)+u32(72u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B489678:{NFSU2_TR(0x489678);
{u32 ea_=u32(r4(R+16)+u32(76u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B48967c:{NFSU2_TR(0x48967c);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B489680:{NFSU2_TR(0x489680);
{u32 ea_=u32(r4(R+16)+u32(76u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B489684:{NFSU2_TR(0x489684);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B489688:{NFSU2_TR(0x489688);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B48968a:{NFSU2_TR(0x48968a);
{u32 ea_=u32(u32(7919928u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B489690:{NFSU2_TR(0x489690);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B489694:{NFSU2_TR(0x489694);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B489698:{NFSU2_TR(0x489698);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B48969a:{NFSU2_TR(0x48969a);
{u32 ea_=u32(u32(7919924u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4896a0:{NFSU2_TR(0x4896a0);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4896a4:{NFSU2_TR(0x4896a4);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4896a8:{NFSU2_TR(0x4896a8);
{u32 ea_=u32(u32(7919920u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4896ae:{NFSU2_TR(0x4896ae);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4896b2:{NFSU2_TR(0x4896b2);
{u32 ea_=u32(u32(7919916u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4896b8:{NFSU2_TR(0x4896b8);
__asm__ volatile(".byte 0xde,0xe9":::"memory");
}
B4896ba:{NFSU2_TR(0x4896ba);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B4896bc:{NFSU2_TR(0x4896bc);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4896be:{NFSU2_TR(0x4896be);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4896c2:{NFSU2_TR(0x4896c2);
{u32 ea_=u32(u32(7919912u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4896c8:{NFSU2_TR(0x4896c8);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B4896ca:{NFSU2_TR(0x4896ca);
{u32 ea_=u32(r4(R+4)+u32(16u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B4896cd:{NFSU2_TR(0x4896cd);
{u32 ea_=u32(r4(R+4)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4896d0:{NFSU2_TR(0x4896d0);
{u32 ea_=u32(r4(R+4)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4896d3:{NFSU2_TR(0x4896d3);
__asm__ volatile(".byte 0xd8,0xe1":::"memory");
}
B4896d5:{NFSU2_TR(0x4896d5);
{u32 ea_=u32(r4(R+4)+u32(32u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4896d8:{NFSU2_TR(0x4896d8);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B4896da:{NFSU2_TR(0x4896da);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4896de:{NFSU2_TR(0x4896de);
{u32 ea_=u32(u32(7919908u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4896e4:{NFSU2_TR(0x4896e4);
{u32 ea_=u32(r4(R+4)+u32(48u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B4896e7:{NFSU2_TR(0x4896e7);
{u32 ea_=u32(r4(R+4)+u32(48u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4896ea:{NFSU2_TR(0x4896ea);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4896ee:{NFSU2_TR(0x4896ee);
{u32 ea_=u32(u32(7919904u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4896f4:{NFSU2_TR(0x4896f4);
{u32 ea_=u32(r4(R+4)+u32(64u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B4896f7:{NFSU2_TR(0x4896f7);
{u32 ea_=u32(r4(R+4)+u32(64u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4896fa:{NFSU2_TR(0x4896fa);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4896fe:{NFSU2_TR(0x4896fe);
{u32 ea_=u32(u32(7919904u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B489704:{NFSU2_TR(0x489704);
{u32 ea_=u32(r4(R+4)+u32(80u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B489707:{NFSU2_TR(0x489707);
{u32 ea_=u32(r4(R+4)+u32(80u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B48970a:{NFSU2_TR(0x48970a);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48970e:{NFSU2_TR(0x48970e);
{u32 ea_=u32(u32(7919912u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B489714:{NFSU2_TR(0x489714);
{u32 ea_=u32(r4(R+4)+u32(96u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B489717:{NFSU2_TR(0x489717);
{u32 ea_=u32(r4(R+4)+u32(96u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B48971a:{NFSU2_TR(0x48971a);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48971e:{NFSU2_TR(0x48971e);
{u32 ea_=u32(u32(7919900u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B489724:{NFSU2_TR(0x489724);
{u32 ea_=u32(r4(R+4)+u32(112u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B489727:{NFSU2_TR(0x489727);
{u32 ea_=u32(r4(R+4)+u32(112u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B48972a:{NFSU2_TR(0x48972a);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48972e:{NFSU2_TR(0x48972e);
{u32 ea_=u32(u32(7919900u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B489734:{NFSU2_TR(0x489734);
{u32 ea_=u32(r4(R+4)+u32(128u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B48973a:{NFSU2_TR(0x48973a);
{u32 ea_=u32(r4(R+4)+u32(128u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B489740:{NFSU2_TR(0x489740);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B489744:{NFSU2_TR(0x489744);
{u32 ea_=u32(u32(7919900u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B48974a:{NFSU2_TR(0x48974a);
{u32 ea_=u32(r4(R+4)+u32(144u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B489750:{NFSU2_TR(0x489750);
{u32 ea_=u32(r4(R+4)+u32(144u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B489756:{NFSU2_TR(0x489756);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B48975a:{NFSU2_TR(0x48975a);
{u32 ea_=u32(u32(7919940u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B489760:{NFSU2_TR(0x489760);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B489762:{NFSU2_TR(0x489762);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B489764:{NFSU2_TR(0x489764);
{u32 ea_=u32(u32(7919936u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B48976a:{NFSU2_TR(0x48976a);
{u32 ea_=u32(r4(R+16)+u32(72u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48976e:{NFSU2_TR(0x48976e);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B489770:{NFSU2_TR(0x489770);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B489774:{NFSU2_TR(0x489774);
{u32 ea_=u32(r4(R+16)+u32(76u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B489778:{NFSU2_TR(0x489778);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B48977a:{NFSU2_TR(0x48977a);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B48977e:{NFSU2_TR(0x48977e);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B489782:{NFSU2_TR(0x489782);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B489786:{NFSU2_TR(0x489786);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B489788:{NFSU2_TR(0x489788);
{u32 ea_=u32(u32(7919932u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B48978e:{NFSU2_TR(0x48978e);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B489792:{NFSU2_TR(0x489792);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B489794:{NFSU2_TR(0x489794);
{u32 ea_=u32(r4(R+16)+u32(72u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B489798:{NFSU2_TR(0x489798);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B48979a:{NFSU2_TR(0x48979a);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B48979e:{NFSU2_TR(0x48979e);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B4897a0:{NFSU2_TR(0x4897a0);
{u32 ea_=u32(r4(R+16)+u32(72u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4897a4:{NFSU2_TR(0x4897a4);
{u32 ea_=u32(r4(R+16)+u32(76u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4897a8:{NFSU2_TR(0x4897a8);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4897ac:{NFSU2_TR(0x4897ac);
{u32 ea_=u32(r4(R+16)+u32(76u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4897b0:{NFSU2_TR(0x4897b0);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4897b4:{NFSU2_TR(0x4897b4);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B4897b6:{NFSU2_TR(0x4897b6);
{u32 ea_=u32(u32(7919928u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4897bc:{NFSU2_TR(0x4897bc);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4897c0:{NFSU2_TR(0x4897c0);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4897c4:{NFSU2_TR(0x4897c4);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B4897c6:{NFSU2_TR(0x4897c6);
{u32 ea_=u32(u32(7919924u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4897cc:{NFSU2_TR(0x4897cc);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4897d0:{NFSU2_TR(0x4897d0);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4897d4:{NFSU2_TR(0x4897d4);
{u32 ea_=u32(u32(7919920u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4897da:{NFSU2_TR(0x4897da);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4897de:{NFSU2_TR(0x4897de);
{u32 ea_=u32(u32(7919916u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4897e4:{NFSU2_TR(0x4897e4);
__asm__ volatile(".byte 0xde,0xe9":::"memory");
}
B4897e6:{NFSU2_TR(0x4897e6);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B4897e9:{NFSU2_TR(0x4897e9);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4897ec:{NFSU2_TR(0x4897ec);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4897f0:{NFSU2_TR(0x4897f0);
{u32 ea_=u32(u32(7919912u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4897f6:{NFSU2_TR(0x4897f6);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B4897f8:{NFSU2_TR(0x4897f8);
{u32 ea_=u32(r4(R+4)+u32(20u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B4897fb:{NFSU2_TR(0x4897fb);
{u32 ea_=u32(r4(R+4)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4897fe:{NFSU2_TR(0x4897fe);
{u32 ea_=u32(r4(R+4)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B489801:{NFSU2_TR(0x489801);
__asm__ volatile(".byte 0xd8,0xe1":::"memory");
}
B489803:{NFSU2_TR(0x489803);
{u32 ea_=u32(r4(R+4)+u32(36u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B489806:{NFSU2_TR(0x489806);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B489808:{NFSU2_TR(0x489808);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48980c:{NFSU2_TR(0x48980c);
{u32 ea_=u32(u32(7919908u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B489812:{NFSU2_TR(0x489812);
{u32 ea_=u32(r4(R+4)+u32(52u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B489815:{NFSU2_TR(0x489815);
{u32 ea_=u32(r4(R+4)+u32(52u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B489818:{NFSU2_TR(0x489818);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48981c:{NFSU2_TR(0x48981c);
{u32 ea_=u32(u32(7919904u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B489822:{NFSU2_TR(0x489822);
{u32 ea_=u32(r4(R+4)+u32(68u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B489825:{NFSU2_TR(0x489825);
{u32 ea_=u32(r4(R+4)+u32(68u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B489828:{NFSU2_TR(0x489828);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48982c:{NFSU2_TR(0x48982c);
{u32 ea_=u32(u32(7919904u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B489832:{NFSU2_TR(0x489832);
{u32 ea_=u32(r4(R+4)+u32(84u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B489835:{NFSU2_TR(0x489835);
{u32 ea_=u32(r4(R+4)+u32(84u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B489838:{NFSU2_TR(0x489838);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48983c:{NFSU2_TR(0x48983c);
{u32 ea_=u32(u32(7919912u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B489842:{NFSU2_TR(0x489842);
{u32 ea_=u32(r4(R+4)+u32(100u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B489845:{NFSU2_TR(0x489845);
{u32 ea_=u32(r4(R+4)+u32(100u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B489848:{NFSU2_TR(0x489848);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48984c:{NFSU2_TR(0x48984c);
{u32 ea_=u32(u32(7919900u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B489852:{NFSU2_TR(0x489852);
{u32 ea_=u32(r4(R+4)+u32(116u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B489855:{NFSU2_TR(0x489855);
{u32 ea_=u32(r4(R+4)+u32(116u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B489858:{NFSU2_TR(0x489858);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48985c:{NFSU2_TR(0x48985c);
{u32 ea_=u32(u32(7919900u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B489862:{NFSU2_TR(0x489862);
{u32 ea_=u32(r4(R+4)+u32(132u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B489868:{NFSU2_TR(0x489868);
{u32 ea_=u32(r4(R+4)+u32(132u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B48986e:{NFSU2_TR(0x48986e);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B489872:{NFSU2_TR(0x489872);
{u32 ea_=u32(u32(7919900u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B489878:{NFSU2_TR(0x489878);
{u32 ea_=u32(r4(R+4)+u32(148u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B48987e:{NFSU2_TR(0x48987e);
{u32 ea_=u32(r4(R+4)+u32(148u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B489884:{NFSU2_TR(0x489884);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B489888:{NFSU2_TR(0x489888);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B48988c:{NFSU2_TR(0x48988c);
{u32 ea_=u32(u32(7919940u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B489892:{NFSU2_TR(0x489892);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B489894:{NFSU2_TR(0x489894);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B489896:{NFSU2_TR(0x489896);
{u32 ea_=u32(u32(7919936u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B48989c:{NFSU2_TR(0x48989c);
{u32 ea_=u32(r4(R+16)+u32(72u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4898a0:{NFSU2_TR(0x4898a0);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B4898a2:{NFSU2_TR(0x4898a2);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4898a6:{NFSU2_TR(0x4898a6);
{u32 ea_=u32(r4(R+16)+u32(76u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4898aa:{NFSU2_TR(0x4898aa);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B4898ac:{NFSU2_TR(0x4898ac);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4898b0:{NFSU2_TR(0x4898b0);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4898b4:{NFSU2_TR(0x4898b4);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4898b8:{NFSU2_TR(0x4898b8);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B4898ba:{NFSU2_TR(0x4898ba);
{u32 ea_=u32(u32(7919932u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4898c0:{NFSU2_TR(0x4898c0);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4898c4:{NFSU2_TR(0x4898c4);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B4898c6:{NFSU2_TR(0x4898c6);
{u32 ea_=u32(r4(R+16)+u32(72u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4898ca:{NFSU2_TR(0x4898ca);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B4898cc:{NFSU2_TR(0x4898cc);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4898d0:{NFSU2_TR(0x4898d0);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B4898d2:{NFSU2_TR(0x4898d2);
{u32 ea_=u32(r4(R+16)+u32(72u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4898d6:{NFSU2_TR(0x4898d6);
{u32 ea_=u32(r4(R+16)+u32(76u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4898da:{NFSU2_TR(0x4898da);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4898de:{NFSU2_TR(0x4898de);
{u32 ea_=u32(r4(R+16)+u32(76u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4898e2:{NFSU2_TR(0x4898e2);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4898e6:{NFSU2_TR(0x4898e6);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B4898e8:{NFSU2_TR(0x4898e8);
{u32 ea_=u32(u32(7919928u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4898ee:{NFSU2_TR(0x4898ee);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4898f2:{NFSU2_TR(0x4898f2);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4898f6:{NFSU2_TR(0x4898f6);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B4898f8:{NFSU2_TR(0x4898f8);
{u32 ea_=u32(u32(7919924u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4898fe:{NFSU2_TR(0x4898fe);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B489902:{NFSU2_TR(0x489902);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B489906:{NFSU2_TR(0x489906);
{u32 ea_=u32(u32(7919920u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B48990c:{NFSU2_TR(0x48990c);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B489910:{NFSU2_TR(0x489910);
{u32 ea_=u32(u32(7919916u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B489916:{NFSU2_TR(0x489916);
__asm__ volatile(".byte 0xde,0xe9":::"memory");
}
B489918:{NFSU2_TR(0x489918);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B48991b:{NFSU2_TR(0x48991b);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B48991e:{NFSU2_TR(0x48991e);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B489922:{NFSU2_TR(0x489922);
{u32 ea_=u32(u32(7919912u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B489928:{NFSU2_TR(0x489928);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B48992a:{NFSU2_TR(0x48992a);
{u32 ea_=u32(r4(R+4)+u32(24u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B48992d:{NFSU2_TR(0x48992d);
{u32 ea_=u32(r4(R+4)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B489930:{NFSU2_TR(0x489930);
{u32 ea_=u32(r4(R+4)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B489933:{NFSU2_TR(0x489933);
__asm__ volatile(".byte 0xd8,0xe1":::"memory");
}
B489935:{NFSU2_TR(0x489935);
{u32 ea_=u32(r4(R+4)+u32(40u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B489938:{NFSU2_TR(0x489938);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B48993a:{NFSU2_TR(0x48993a);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48993e:{NFSU2_TR(0x48993e);
{u32 ea_=u32(u32(7919908u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B489944:{NFSU2_TR(0x489944);
{u32 ea_=u32(r4(R+4)+u32(56u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B489947:{NFSU2_TR(0x489947);
{u32 ea_=u32(r4(R+4)+u32(56u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B48994a:{NFSU2_TR(0x48994a);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48994e:{NFSU2_TR(0x48994e);
{u32 ea_=u32(u32(7919904u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B489954:{NFSU2_TR(0x489954);
{u32 ea_=u32(r4(R+4)+u32(72u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B489957:{NFSU2_TR(0x489957);
{u32 ea_=u32(r4(R+4)+u32(72u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B48995a:{NFSU2_TR(0x48995a);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48995e:{NFSU2_TR(0x48995e);
{u32 ea_=u32(u32(7919904u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B489964:{NFSU2_TR(0x489964);
{u32 ea_=u32(r4(R+4)+u32(88u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B489967:{NFSU2_TR(0x489967);
{u32 ea_=u32(r4(R+4)+u32(88u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B48996a:{NFSU2_TR(0x48996a);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48996e:{NFSU2_TR(0x48996e);
{u32 ea_=u32(u32(7919912u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B489974:{NFSU2_TR(0x489974);
{u32 ea_=u32(r4(R+4)+u32(104u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B489977:{NFSU2_TR(0x489977);
{u32 ea_=u32(r4(R+4)+u32(104u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B48997a:{NFSU2_TR(0x48997a);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48997e:{NFSU2_TR(0x48997e);
{u32 ea_=u32(u32(7919900u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B489984:{NFSU2_TR(0x489984);
{u32 ea_=u32(r4(R+4)+u32(120u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B489987:{NFSU2_TR(0x489987);
{u32 ea_=u32(r4(R+4)+u32(120u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B48998a:{NFSU2_TR(0x48998a);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48998e:{NFSU2_TR(0x48998e);
{u32 ea_=u32(u32(7919900u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B489994:{NFSU2_TR(0x489994);
{u32 ea_=u32(r4(R+4)+u32(136u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B48999a:{NFSU2_TR(0x48999a);
{u32 ea_=u32(r4(R+4)+u32(136u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4899a0:{NFSU2_TR(0x4899a0);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4899a4:{NFSU2_TR(0x4899a4);
{u32 ea_=u32(u32(7919900u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4899aa:{NFSU2_TR(0x4899aa);
{u32 ea_=u32(r4(R+4)+u32(152u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B4899b0:{NFSU2_TR(0x4899b0);
{u32 ea_=u32(r4(R+4)+u32(152u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4899b6:{NFSU2_TR(0x4899b6);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4899ba:{NFSU2_TR(0x4899ba);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4899be:{NFSU2_TR(0x4899be);
{u32 ea_=u32(u32(7919940u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4899c4:{NFSU2_TR(0x4899c4);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B4899c6:{NFSU2_TR(0x4899c6);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B4899c8:{NFSU2_TR(0x4899c8);
{u32 ea_=u32(u32(7919936u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4899ce:{NFSU2_TR(0x4899ce);
{u32 ea_=u32(r4(R+16)+u32(72u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4899d2:{NFSU2_TR(0x4899d2);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B4899d4:{NFSU2_TR(0x4899d4);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4899d8:{NFSU2_TR(0x4899d8);
{u32 ea_=u32(r4(R+16)+u32(76u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4899dc:{NFSU2_TR(0x4899dc);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B4899de:{NFSU2_TR(0x4899de);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4899e2:{NFSU2_TR(0x4899e2);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4899e6:{NFSU2_TR(0x4899e6);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4899ea:{NFSU2_TR(0x4899ea);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B4899ec:{NFSU2_TR(0x4899ec);
{u32 ea_=u32(u32(7919932u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4899f2:{NFSU2_TR(0x4899f2);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4899f6:{NFSU2_TR(0x4899f6);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B4899f8:{NFSU2_TR(0x4899f8);
{u32 ea_=u32(r4(R+16)+u32(72u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4899fc:{NFSU2_TR(0x4899fc);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B4899fe:{NFSU2_TR(0x4899fe);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B489a02:{NFSU2_TR(0x489a02);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B489a04:{NFSU2_TR(0x489a04);
{u32 ea_=u32(r4(R+16)+u32(72u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B489a08:{NFSU2_TR(0x489a08);
{u32 ea_=u32(r4(R+16)+u32(76u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B489a0c:{NFSU2_TR(0x489a0c);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B489a10:{NFSU2_TR(0x489a10);
{u32 ea_=u32(r4(R+16)+u32(76u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B489a14:{NFSU2_TR(0x489a14);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B489a18:{NFSU2_TR(0x489a18);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B489a1a:{NFSU2_TR(0x489a1a);
{u32 ea_=u32(u32(7919928u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B489a20:{NFSU2_TR(0x489a20);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B489a24:{NFSU2_TR(0x489a24);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B489a28:{NFSU2_TR(0x489a28);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B489a2a:{NFSU2_TR(0x489a2a);
{u32 ea_=u32(u32(7919924u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B489a30:{NFSU2_TR(0x489a30);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B489a34:{NFSU2_TR(0x489a34);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B489a38:{NFSU2_TR(0x489a38);
{u32 ea_=u32(u32(7919920u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B489a3e:{NFSU2_TR(0x489a3e);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B489a42:{NFSU2_TR(0x489a42);
{u32 ea_=u32(u32(7919916u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B489a48:{NFSU2_TR(0x489a48);
__asm__ volatile(".byte 0xde,0xe9":::"memory");
}
B489a4a:{NFSU2_TR(0x489a4a);
{u32 ea_=u32(r4(R+4)+u32(12u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B489a4d:{NFSU2_TR(0x489a4d);
{u32 ea_=u32(r4(R+4)+u32(12u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B489a50:{NFSU2_TR(0x489a50);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B489a54:{NFSU2_TR(0x489a54);
{u32 ea_=u32(u32(7919912u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B489a5a:{NFSU2_TR(0x489a5a);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B489a5c:{NFSU2_TR(0x489a5c);
{u32 ea_=u32(r4(R+4)+u32(28u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B489a5f:{NFSU2_TR(0x489a5f);
{u32 ea_=u32(r4(R+4)+u32(28u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B489a62:{NFSU2_TR(0x489a62);
{u32 ea_=u32(r4(R+4)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B489a65:{NFSU2_TR(0x489a65);
__asm__ volatile(".byte 0xd8,0xe1":::"memory");
}
B489a67:{NFSU2_TR(0x489a67);
{u32 ea_=u32(r4(R+4)+u32(44u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B489a6a:{NFSU2_TR(0x489a6a);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B489a6c:{NFSU2_TR(0x489a6c);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B489a70:{NFSU2_TR(0x489a70);
{u32 ea_=u32(u32(7919908u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B489a76:{NFSU2_TR(0x489a76);
{u32 ea_=u32(r4(R+4)+u32(60u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B489a79:{NFSU2_TR(0x489a79);
{u32 ea_=u32(r4(R+4)+u32(60u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B489a7c:{NFSU2_TR(0x489a7c);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B489a80:{NFSU2_TR(0x489a80);
{u32 ea_=u32(u32(7919904u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B489a86:{NFSU2_TR(0x489a86);
{u32 ea_=u32(r4(R+4)+u32(76u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B489a89:{NFSU2_TR(0x489a89);
{u32 ea_=u32(r4(R+4)+u32(76u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B489a8c:{NFSU2_TR(0x489a8c);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B489a90:{NFSU2_TR(0x489a90);
{u32 ea_=u32(u32(7919904u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B489a96:{NFSU2_TR(0x489a96);
{u32 ea_=u32(r4(R+4)+u32(92u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B489a99:{NFSU2_TR(0x489a99);
{u32 ea_=u32(r4(R+4)+u32(92u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B489a9c:{NFSU2_TR(0x489a9c);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B489aa0:{NFSU2_TR(0x489aa0);
{u32 ea_=u32(u32(7919912u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B489aa6:{NFSU2_TR(0x489aa6);
{u32 ea_=u32(r4(R+4)+u32(108u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B489aa9:{NFSU2_TR(0x489aa9);
{u32 ea_=u32(r4(R+4)+u32(108u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B489aac:{NFSU2_TR(0x489aac);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B489ab0:{NFSU2_TR(0x489ab0);
{u32 ea_=u32(u32(7919900u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B489ab6:{NFSU2_TR(0x489ab6);
{u32 ea_=u32(r4(R+4)+u32(124u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B489ab9:{NFSU2_TR(0x489ab9);
{u32 ea_=u32(r4(R+4)+u32(124u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B489abc:{NFSU2_TR(0x489abc);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B489ac0:{NFSU2_TR(0x489ac0);
{u32 ea_=u32(u32(7919900u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B489ac6:{NFSU2_TR(0x489ac6);
{u32 ea_=u32(r4(R+4)+u32(140u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B489acc:{NFSU2_TR(0x489acc);
{u32 ea_=u32(r4(R+4)+u32(140u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B489ad2:{NFSU2_TR(0x489ad2);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B489ad6:{NFSU2_TR(0x489ad6);
{u32 ea_=u32(u32(7919900u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B489adc:{NFSU2_TR(0x489adc);
{u32 ea_=u32(r4(R+4)+u32(156u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B489ae2:{NFSU2_TR(0x489ae2);
{u32 ea_=u32(r4(R+4)+u32(156u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B489ae8:{NFSU2_TR(0x489ae8);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x38ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x38ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x38ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B489aeb:{NFSU2_TR(0x489aeb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B489af0:L489af0:{c.instructions+=24;NFSU2_TR(0x489af0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B489af1:{NFSU2_TR(0x489af1);
__builtin_memmove((R+20),(R+16),4);
}
B489af3:{NFSU2_TR(0x489af3);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B489af6:{NFSU2_TR(0x489af6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x28ull))));
}
B489af9:{NFSU2_TR(0x489af9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B489afc:{NFSU2_TR(0x489afc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B489afe:{NFSU2_TR(0x489afe);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B489aff:{NFSU2_TR(0x489aff);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B489b02:{NFSU2_TR(0x489b02);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B489b06:{NFSU2_TR(0x489b06);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B489b09:{NFSU2_TR(0x489b09);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B489b0c:{NFSU2_TR(0x489b0c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B489b0d:{NFSU2_TR(0x489b0d);
__builtin_memmove((R+28),gp(0x78d784),4);
}
B489b13:{NFSU2_TR(0x489b13);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B489b17:{NFSU2_TR(0x489b17);
__builtin_memmove((R+8),(R+0),4);
}
B489b19:{NFSU2_TR(0x489b19);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B489b1a:{NFSU2_TR(0x489b1a);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B489b1e:{NFSU2_TR(0x489b1e);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B489b22:{NFSU2_TR(0x489b22);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B489b26:{NFSU2_TR(0x489b26);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B489b27:{NFSU2_TR(0x489b27);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B489b28:{NFSU2_TR(0x489b28);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B489b29:{NFSU2_TR(0x489b29);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B489b2a:{NFSU2_TR(0x489b2a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x489b2full));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4895e0u);}goto L4895e0;}
}
B489b2f:L489b2f:{c.instructions+=26;NFSU2_TR(0x489b2f);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B489b31:{NFSU2_TR(0x489b31);
{u32 ea_=u32(u32(7919944u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B489b37:{NFSU2_TR(0x489b37);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xcull))));
}
B489b3a:{NFSU2_TR(0x489b3a);
u8 U[4];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B489b3e:{NFSU2_TR(0x489b3e);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B489b42:{NFSU2_TR(0x489b42);
{u32 ea_=u32(r4(R+24)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B489b45:{NFSU2_TR(0x489b45);
{u32 ea_=u32(u32(7919944u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B489b4b:{NFSU2_TR(0x489b4b);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B489b4f:{NFSU2_TR(0x489b4f);
{u32 ea_=u32(r4(R+24)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B489b52:{NFSU2_TR(0x489b52);
{u32 ea_=u32(u32(7919944u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B489b58:{NFSU2_TR(0x489b58);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B489b5c:{NFSU2_TR(0x489b5c);
{u32 ea_=u32(r4(R+24)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B489b5f:{NFSU2_TR(0x489b5f);
{u32 ea_=u32(u32(7919944u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B489b65:{NFSU2_TR(0x489b65);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B489b69:{NFSU2_TR(0x489b69);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B489b6d:{NFSU2_TR(0x489b6d);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B489b6f:{NFSU2_TR(0x489b6f);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B489b73:{NFSU2_TR(0x489b73);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B489b77:{NFSU2_TR(0x489b77);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B489b79:{NFSU2_TR(0x489b79);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B489b7d:{NFSU2_TR(0x489b7d);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B489b81:{NFSU2_TR(0x489b81);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B489b83:{NFSU2_TR(0x489b83);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B489b86:{NFSU2_TR(0x489b86);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B489b87:{NFSU2_TR(0x489b87);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B489b88:{NFSU2_TR(0x489b88);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x489b8dull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4895e0u);}goto L4895e0;}
}
B489b8d:L489b8d:{c.instructions+=5;NFSU2_TR(0x489b8d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B489b8e:{NFSU2_TR(0x489b8e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B489b8f:{NFSU2_TR(0x489b8f);
__builtin_memmove((R+16),(R+20),4);
}
B489b91:{NFSU2_TR(0x489b91);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B489b92:{NFSU2_TR(0x489b92);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B489ba0:L489ba0:{c.instructions+=23;NFSU2_TR(0x489ba0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x5cull))));
}
B489ba3:{NFSU2_TR(0x489ba3);
u8 U[8];
w4(U+0,u32(u32(u32(0x60ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B489ba7:{NFSU2_TR(0x489ba7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B489ba9:{NFSU2_TR(0x489ba9);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+16)),r4(U+0));
}
B489bad:{NFSU2_TR(0x489bad);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B489bb0:{NFSU2_TR(0x489bb0);
u8 U[8];
w4(U+0,u32(u32(u32(0x60ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B489bb4:{NFSU2_TR(0x489bb4);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B489bb7:{NFSU2_TR(0x489bb7);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B489bbb:{NFSU2_TR(0x489bbb);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B489bbe:{NFSU2_TR(0x489bbe);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B489bc2:{NFSU2_TR(0x489bc2);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B489bc5:{NFSU2_TR(0x489bc5);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B489bc9:{NFSU2_TR(0x489bc9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B489bcc:{NFSU2_TR(0x489bcc);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B489bd0:{NFSU2_TR(0x489bd0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B489bd3:{NFSU2_TR(0x489bd3);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B489bd7:{NFSU2_TR(0x489bd7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B489bda:{NFSU2_TR(0x489bda);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B489bdd:{NFSU2_TR(0x489bdd);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B489be1:{NFSU2_TR(0x489be1);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x20ull))));
__builtin_memmove((R+0),(U+0),4);
}
B489be4:{NFSU2_TR(0x489be4);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B489be8:{NFSU2_TR(0x489be8);
w4(R+4,u32(0x4ull));
}
B489bed:{NFSU2_TR(0x489bed);
__builtin_memmove((R+4),(R+4),4);
}
B489bf0:L489bf0:{c.instructions+=220;NFSU2_TR(0x489bf0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B489bf3:{NFSU2_TR(0x489bf3);
{u32 ea_=u32(r4(R+0)+u32(4294967280u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B489bf6:{NFSU2_TR(0x489bf6);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B489bf8:{NFSU2_TR(0x489bf8);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B489bfc:{NFSU2_TR(0x489bfc);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B489bff:{NFSU2_TR(0x489bff);
{u32 ea_=u32(r4(R+0)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B489c02:{NFSU2_TR(0x489c02);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B489c06:{NFSU2_TR(0x489c06);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B489c09:{NFSU2_TR(0x489c09);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B489c0d:{NFSU2_TR(0x489c0d);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B489c11:{NFSU2_TR(0x489c11);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B489c14:{NFSU2_TR(0x489c14);
{u32 ea_=u32(r4(R+16)+u32(96u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B489c18:{NFSU2_TR(0x489c18);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B489c1c:{NFSU2_TR(0x489c1c);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B489c1e:{NFSU2_TR(0x489c1e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B489c21:{NFSU2_TR(0x489c21);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B489c25:{NFSU2_TR(0x489c25);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B489c29:{NFSU2_TR(0x489c29);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B489c2c:{NFSU2_TR(0x489c2c);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B489c30:{NFSU2_TR(0x489c30);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B489c32:{NFSU2_TR(0x489c32);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B489c35:{NFSU2_TR(0x489c35);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B489c39:{NFSU2_TR(0x489c39);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B489c3c:{NFSU2_TR(0x489c3c);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B489c40:{NFSU2_TR(0x489c40);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B489c42:{NFSU2_TR(0x489c42);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B489c46:{NFSU2_TR(0x489c46);
__asm__ volatile(".byte 0xd9,0xc2":::"memory");
}
B489c48:{NFSU2_TR(0x489c48);
{u32 ea_=u32(r4(R+16)+u32(96u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B489c4c:{NFSU2_TR(0x489c4c);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B489c50:{NFSU2_TR(0x489c50);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B489c54:{NFSU2_TR(0x489c54);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B489c56:{NFSU2_TR(0x489c56);
{u32 ea_=u32(r4(R+16)+u32(96u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B489c5a:{NFSU2_TR(0x489c5a);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B489c5c:{NFSU2_TR(0x489c5c);
__asm__ volatile(".byte 0xd9,0xc3":::"memory");
}
B489c5e:{NFSU2_TR(0x489c5e);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B489c62:{NFSU2_TR(0x489c62);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B489c66:{NFSU2_TR(0x489c66);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B489c68:{NFSU2_TR(0x489c68);
{u32 ea_=u32(r4(R+0)+u32(4294967280u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B489c6b:{NFSU2_TR(0x489c6b);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B489c6f:{NFSU2_TR(0x489c6f);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B489c73:{NFSU2_TR(0x489c73);
{u32 ea_=u32(r4(R+16)+u32(88u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B489c77:{NFSU2_TR(0x489c77);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B489c7b:{NFSU2_TR(0x489c7b);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B489c7d:{NFSU2_TR(0x489c7d);
{u32 ea_=u32(r4(R+16)+u32(84u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B489c81:{NFSU2_TR(0x489c81);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B489c85:{NFSU2_TR(0x489c85);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B489c89:{NFSU2_TR(0x489c89);
{u32 ea_=u32(r4(R+16)+u32(80u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B489c8d:{NFSU2_TR(0x489c8d);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B489c8f:{NFSU2_TR(0x489c8f);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B489c93:{NFSU2_TR(0x489c93);
{u32 ea_=u32(r4(R+16)+u32(76u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B489c97:{NFSU2_TR(0x489c97);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B489c9b:{NFSU2_TR(0x489c9b);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B489c9f:{NFSU2_TR(0x489c9f);
{u32 ea_=u32(r4(R+16)+u32(72u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B489ca3:{NFSU2_TR(0x489ca3);
__asm__ volatile(".byte 0xd9,0xc2":::"memory");
}
B489ca5:{NFSU2_TR(0x489ca5);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B489ca9:{NFSU2_TR(0x489ca9);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B489cad:{NFSU2_TR(0x489cad);
{u32 ea_=u32(r4(R+16)+u32(80u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B489cb1:{NFSU2_TR(0x489cb1);
{u32 ea_=u32(r4(R+16)+u32(84u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B489cb5:{NFSU2_TR(0x489cb5);
{u32 ea_=u32(r4(R+16)+u32(88u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B489cb9:{NFSU2_TR(0x489cb9);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B489cbd:{NFSU2_TR(0x489cbd);
{u32 ea_=u32(r4(R+16)+u32(72u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B489cc1:{NFSU2_TR(0x489cc1);
{u32 ea_=u32(r4(R+16)+u32(76u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B489cc5:{NFSU2_TR(0x489cc5);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B489cc9:{NFSU2_TR(0x489cc9);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B489ccb:{NFSU2_TR(0x489ccb);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B489ccf:{NFSU2_TR(0x489ccf);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B489cd3:{NFSU2_TR(0x489cd3);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B489cd5:{NFSU2_TR(0x489cd5);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B489cd7:{NFSU2_TR(0x489cd7);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B489cdb:{NFSU2_TR(0x489cdb);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B489cdf:{NFSU2_TR(0x489cdf);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B489ce3:{NFSU2_TR(0x489ce3);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B489ce7:{NFSU2_TR(0x489ce7);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B489ceb:{NFSU2_TR(0x489ceb);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B489cef:{NFSU2_TR(0x489cef);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B489cf3:{NFSU2_TR(0x489cf3);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B489cf7:{NFSU2_TR(0x489cf7);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B489cfb:{NFSU2_TR(0x489cfb);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B489cff:{NFSU2_TR(0x489cff);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B489d03:{NFSU2_TR(0x489d03);
__asm__ volatile(".byte 0xd9,0xca":::"memory");
}
B489d05:{NFSU2_TR(0x489d05);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B489d09:{NFSU2_TR(0x489d09);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B489d0d:{NFSU2_TR(0x489d0d);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B489d11:{NFSU2_TR(0x489d11);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B489d15:{NFSU2_TR(0x489d15);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B489d19:{NFSU2_TR(0x489d19);
__asm__ volatile(".byte 0xd9,0xc3":::"memory");
}
B489d1b:{NFSU2_TR(0x489d1b);
__asm__ volatile(".byte 0xd8,0xc3":::"memory");
}
B489d1d:{NFSU2_TR(0x489d1d);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B489d21:{NFSU2_TR(0x489d21);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B489d23:{NFSU2_TR(0x489d23);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B489d25:{NFSU2_TR(0x489d25);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B489d29:{NFSU2_TR(0x489d29);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B489d2b:{NFSU2_TR(0x489d2b);
{u32 ea_=u32(r4(R+0)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B489d2e:{NFSU2_TR(0x489d2e);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B489d32:{NFSU2_TR(0x489d32);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B489d36:{NFSU2_TR(0x489d36);
{u32 ea_=u32(r4(R+16)+u32(96u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B489d3a:{NFSU2_TR(0x489d3a);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B489d3e:{NFSU2_TR(0x489d3e);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B489d42:{NFSU2_TR(0x489d42);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B489d46:{NFSU2_TR(0x489d46);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B489d48:{NFSU2_TR(0x489d48);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B489d4c:{NFSU2_TR(0x489d4c);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B489d50:{NFSU2_TR(0x489d50);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B489d54:{NFSU2_TR(0x489d54);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B489d56:{NFSU2_TR(0x489d56);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B489d5a:{NFSU2_TR(0x489d5a);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B489d5e:{NFSU2_TR(0x489d5e);
__asm__ volatile(".byte 0xdc,0xc0":::"memory");
}
B489d60:{NFSU2_TR(0x489d60);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B489d62:{NFSU2_TR(0x489d62);
{u32 ea_=u32(r4(R+16)+u32(72u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B489d66:{NFSU2_TR(0x489d66);
{u32 ea_=u32(r4(R+16)+u32(96u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B489d6a:{NFSU2_TR(0x489d6a);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B489d6c:{NFSU2_TR(0x489d6c);
{u32 ea_=u32(r4(R+16)+u32(76u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B489d70:{NFSU2_TR(0x489d70);
{u32 ea_=u32(r4(R+16)+u32(96u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B489d74:{NFSU2_TR(0x489d74);
__asm__ volatile(".byte 0xdc,0xc0":::"memory");
}
B489d76:{NFSU2_TR(0x489d76);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B489d78:{NFSU2_TR(0x489d78);
{u32 ea_=u32(r4(R+16)+u32(80u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B489d7c:{NFSU2_TR(0x489d7c);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B489d80:{NFSU2_TR(0x489d80);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B489d82:{NFSU2_TR(0x489d82);
{u32 ea_=u32(r4(R+16)+u32(84u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B489d86:{NFSU2_TR(0x489d86);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B489d8a:{NFSU2_TR(0x489d8a);
__asm__ volatile(".byte 0xdc,0xc0":::"memory");
}
B489d8c:{NFSU2_TR(0x489d8c);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B489d8e:{NFSU2_TR(0x489d8e);
{u32 ea_=u32(r4(R+16)+u32(88u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B489d92:{NFSU2_TR(0x489d92);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B489d96:{NFSU2_TR(0x489d96);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B489d98:{NFSU2_TR(0x489d98);
{u32 ea_=u32(r4(R+0)+u32(32u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B489d9b:{NFSU2_TR(0x489d9b);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B489d9f:{NFSU2_TR(0x489d9f);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B489da3:{NFSU2_TR(0x489da3);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B489da7:{NFSU2_TR(0x489da7);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B489dab:{NFSU2_TR(0x489dab);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B489daf:{NFSU2_TR(0x489daf);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B489db3:{NFSU2_TR(0x489db3);
{u32 ea_=u32(r4(R+16)+u32(88u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B489db7:{NFSU2_TR(0x489db7);
__asm__ volatile(".byte 0xd8,0xc1":::"memory");
}
B489db9:{NFSU2_TR(0x489db9);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B489dbd:{NFSU2_TR(0x489dbd);
__asm__ volatile(".byte 0xd9,0xc2":::"memory");
}
B489dbf:{NFSU2_TR(0x489dbf);
{u32 ea_=u32(r4(R+16)+u32(96u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B489dc3:{NFSU2_TR(0x489dc3);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B489dc5:{NFSU2_TR(0x489dc5);
__asm__ volatile(".byte 0xd9,0xc3":::"memory");
}
B489dc7:{NFSU2_TR(0x489dc7);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B489dcb:{NFSU2_TR(0x489dcb);
__asm__ volatile(".byte 0xdc,0xc0":::"memory");
}
B489dcd:{NFSU2_TR(0x489dcd);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B489dcf:{NFSU2_TR(0x489dcf);
__asm__ volatile(".byte 0xd9,0xc5":::"memory");
}
B489dd1:{NFSU2_TR(0x489dd1);
{u32 ea_=u32(r4(R+16)+u32(96u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B489dd5:{NFSU2_TR(0x489dd5);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B489dd7:{NFSU2_TR(0x489dd7);
__asm__ volatile(".byte 0xd9,0xc4":::"memory");
}
B489dd9:{NFSU2_TR(0x489dd9);
{u32 ea_=u32(r4(R+16)+u32(96u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B489ddd:{NFSU2_TR(0x489ddd);
__asm__ volatile(".byte 0xdc,0xc0":::"memory");
}
B489ddf:{NFSU2_TR(0x489ddf);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B489de1:{NFSU2_TR(0x489de1);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B489de5:{NFSU2_TR(0x489de5);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B489de9:{NFSU2_TR(0x489de9);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B489deb:{NFSU2_TR(0x489deb);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B489def:{NFSU2_TR(0x489def);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B489df3:{NFSU2_TR(0x489df3);
__asm__ volatile(".byte 0xdc,0xc0":::"memory");
}
B489df5:{NFSU2_TR(0x489df5);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B489df7:{NFSU2_TR(0x489df7);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B489dfb:{NFSU2_TR(0x489dfb);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B489dff:{NFSU2_TR(0x489dff);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B489e01:{NFSU2_TR(0x489e01);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B489e04:{NFSU2_TR(0x489e04);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B489e05:{NFSU2_TR(0x489e05);
{u32 ea_=u32(r4(R+0)+u32(44u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B489e08:{NFSU2_TR(0x489e08);
{u32 ea_=u32(r4(R+16)+u32(88u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B489e0c:{NFSU2_TR(0x489e0c);
__asm__ volatile(".byte 0xd8,0xc1":::"memory");
}
B489e0e:{NFSU2_TR(0x489e0e);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B489e12:{NFSU2_TR(0x489e12);
__asm__ volatile(".byte 0xd9,0xca":::"memory");
}
B489e14:{NFSU2_TR(0x489e14);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B489e18:{NFSU2_TR(0x489e18);
__asm__ volatile(".byte 0xde,0xc2":::"memory");
}
B489e1a:{NFSU2_TR(0x489e1a);
__asm__ volatile(".byte 0xd9,0xca":::"memory");
}
B489e1c:{NFSU2_TR(0x489e1c);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B489e20:{NFSU2_TR(0x489e20);
__asm__ volatile(".byte 0xdc,0xc0":::"memory");
}
B489e22:{NFSU2_TR(0x489e22);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B489e24:{NFSU2_TR(0x489e24);
__asm__ volatile(".byte 0xd9,0xcb":::"memory");
}
B489e26:{NFSU2_TR(0x489e26);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B489e2a:{NFSU2_TR(0x489e2a);
__asm__ volatile(".byte 0xde,0xc3":::"memory");
}
B489e2c:{NFSU2_TR(0x489e2c);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B489e2e:{NFSU2_TR(0x489e2e);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B489e32:{NFSU2_TR(0x489e32);
__asm__ volatile(".byte 0xdc,0xc0":::"memory");
}
B489e34:{NFSU2_TR(0x489e34);
__asm__ volatile(".byte 0xde,0xc2":::"memory");
}
B489e36:{NFSU2_TR(0x489e36);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B489e3a:{NFSU2_TR(0x489e3a);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B489e3e:{NFSU2_TR(0x489e3e);
__asm__ volatile(".byte 0xde,0xc2":::"memory");
}
B489e40:{NFSU2_TR(0x489e40);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B489e44:{NFSU2_TR(0x489e44);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B489e48:{NFSU2_TR(0x489e48);
__asm__ volatile(".byte 0xdc,0xc0":::"memory");
}
B489e4a:{NFSU2_TR(0x489e4a);
__asm__ volatile(".byte 0xde,0xc2":::"memory");
}
B489e4c:{NFSU2_TR(0x489e4c);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B489e50:{NFSU2_TR(0x489e50);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B489e54:{NFSU2_TR(0x489e54);
__asm__ volatile(".byte 0xde,0xc2":::"memory");
}
B489e56:{NFSU2_TR(0x489e56);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B489e58:{NFSU2_TR(0x489e58);
{u32 ea_=u32(r4(R+0)+u32(60u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B489e5b:{NFSU2_TR(0x489e5b);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B489e5d:{NFSU2_TR(0x489e5d);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B489e61:{NFSU2_TR(0x489e61);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B489e65:{NFSU2_TR(0x489e65);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B489e69:{NFSU2_TR(0x489e69);
{u32 ea_=u32(r4(R+16)+u32(96u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B489e6d:{NFSU2_TR(0x489e6d);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B489e6f:{NFSU2_TR(0x489e6f);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B489e73:{NFSU2_TR(0x489e73);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B489e77:{NFSU2_TR(0x489e77);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B489e79:{NFSU2_TR(0x489e79);
{u32 ea_=u32(r4(R+0)+u32(76u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B489e7c:{NFSU2_TR(0x489e7c);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B489e80:{NFSU2_TR(0x489e80);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B489e84:{NFSU2_TR(0x489e84);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B489e88:{NFSU2_TR(0x489e88);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B489e8c:{NFSU2_TR(0x489e8c);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B489e8e:{NFSU2_TR(0x489e8e);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B489e92:{NFSU2_TR(0x489e92);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B489e96:{NFSU2_TR(0x489e96);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B489e98:{NFSU2_TR(0x489e98);
{u32 ea_=u32(r4(R+0)+u32(92u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B489e9b:{NFSU2_TR(0x489e9b);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B489e9f:{NFSU2_TR(0x489e9f);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B489ea3:{NFSU2_TR(0x489ea3);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B489ea7:{NFSU2_TR(0x489ea7);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B489eab:{NFSU2_TR(0x489eab);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B489ead:{NFSU2_TR(0x489ead);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B489eb1:{NFSU2_TR(0x489eb1);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B489eb5:{NFSU2_TR(0x489eb5);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B489eb7:{NFSU2_TR(0x489eb7);
{u32 ea_=u32(r4(R+0)+u32(108u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B489eba:{NFSU2_TR(0x489eba);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x489bf0u);}goto L489bf0;}}
}
B489ec0:L489ec0:{c.instructions+=2;NFSU2_TR(0x489ec0);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x5cull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x5cull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x5cull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B489ec3:{NFSU2_TR(0x489ec3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B489ed0:L489ed0:{c.instructions+=4;NFSU2_TR(0x489ed0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B489ed4:{NFSU2_TR(0x489ed4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x10ull))));
}
B489ed7:{NFSU2_TR(0x489ed7);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B489ed9:{NFSU2_TR(0x489ed9);
if(r1(R+518)){TAIL_STATIC(0x48a158u,48a);}
}
B489edf:L489edf:{c.instructions+=57;NFSU2_TR(0x489edf);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B489ee2:{NFSU2_TR(0x489ee2);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B489ee8:{NFSU2_TR(0x489ee8);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B489eeb:{NFSU2_TR(0x489eeb);
{u32 ea_=u32(r4(R+4)+u32(144u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B489ef1:{NFSU2_TR(0x489ef1);
{u32 ea_=u32(r4(R+4)+u32(128u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B489ef7:{NFSU2_TR(0x489ef7);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B489efb:{NFSU2_TR(0x489efb);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B489efe:{NFSU2_TR(0x489efe);
{u32 ea_=u32(r4(R+4)+u32(112u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B489f01:{NFSU2_TR(0x489f01);
{u32 ea_=u32(r4(R+4)+u32(96u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B489f04:{NFSU2_TR(0x489f04);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+16)),r4(U+0));
}
B489f08:{NFSU2_TR(0x489f08);
{u32 ea_=u32(r4(R+4)+u32(80u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B489f0b:{NFSU2_TR(0x489f0b);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B489f0f:{NFSU2_TR(0x489f0f);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B489f13:{NFSU2_TR(0x489f13);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x20ull))));
__builtin_memmove((R+8),(U+0),4);
}
B489f16:{NFSU2_TR(0x489f16);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B489f1a:{NFSU2_TR(0x489f1a);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B489f1d:{NFSU2_TR(0x489f1d);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B489f21:{NFSU2_TR(0x489f21);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B489f25:{NFSU2_TR(0x489f25);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B489f29:{NFSU2_TR(0x489f29);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B489f2b:{NFSU2_TR(0x489f2b);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B489f2f:{NFSU2_TR(0x489f2f);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B489f31:{NFSU2_TR(0x489f31);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B489f35:{NFSU2_TR(0x489f35);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B489f39:{NFSU2_TR(0x489f39);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B489f3b:{NFSU2_TR(0x489f3b);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B489f3d:{NFSU2_TR(0x489f3d);
__asm__ volatile(".byte 0xd8,0xca":::"memory");
}
B489f3f:{NFSU2_TR(0x489f3f);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B489f41:{NFSU2_TR(0x489f41);
__asm__ volatile(".byte 0xd9,0xc2":::"memory");
}
B489f43:{NFSU2_TR(0x489f43);
__asm__ volatile(".byte 0xd8,0xcb":::"memory");
}
B489f45:{NFSU2_TR(0x489f45);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B489f47:{NFSU2_TR(0x489f47);
__asm__ volatile(".byte 0xd9,0xc3":::"memory");
}
B489f49:{NFSU2_TR(0x489f49);
__asm__ volatile(".byte 0xd8,0xcc":::"memory");
}
B489f4b:{NFSU2_TR(0x489f4b);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B489f4d:{NFSU2_TR(0x489f4d);
__asm__ volatile(".byte 0xd9,0xc4":::"memory");
}
B489f4f:{NFSU2_TR(0x489f4f);
__asm__ volatile(".byte 0xd8,0xcd":::"memory");
}
B489f51:{NFSU2_TR(0x489f51);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B489f53:{NFSU2_TR(0x489f53);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B489f57:{NFSU2_TR(0x489f57);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B489f5b:{NFSU2_TR(0x489f5b);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B489f5d:{NFSU2_TR(0x489f5d);
__asm__ volatile(".byte 0xd9,0xc5":::"memory");
}
B489f5f:{NFSU2_TR(0x489f5f);
__asm__ volatile(".byte 0xd8,0xce":::"memory");
}
B489f61:{NFSU2_TR(0x489f61);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B489f63:{NFSU2_TR(0x489f63);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B489f67:{NFSU2_TR(0x489f67);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B489f6b:{NFSU2_TR(0x489f6b);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B489f6d:{NFSU2_TR(0x489f6d);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B489f71:{NFSU2_TR(0x489f71);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B489f73:{NFSU2_TR(0x489f73);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B489f75:{NFSU2_TR(0x489f75);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B489f77:{NFSU2_TR(0x489f77);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B489f79:{NFSU2_TR(0x489f79);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B489f7b:{NFSU2_TR(0x489f7b);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B489f7f:{NFSU2_TR(0x489f7f);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B489f85:{NFSU2_TR(0x489f85);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B489f87:{NFSU2_TR(0x489f87);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B489f8a:{NFSU2_TR(0x489f8a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L489f92;}}
}
B489f8c:L489f8c:{c.instructions+=2;NFSU2_TR(0x489f8c);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B489f8e:{NFSU2_TR(0x489f8e);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B489f92:L489f92:{c.instructions+=32;NFSU2_TR(0x489f92);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B489f95:{NFSU2_TR(0x489f95);
{u32 ea_=u32(r4(R+4)+u32(148u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B489f9b:{NFSU2_TR(0x489f9b);
{u32 ea_=u32(r4(R+4)+u32(132u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B489fa1:{NFSU2_TR(0x489fa1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+16)),r4(U+0));
}
B489fa5:{NFSU2_TR(0x489fa5);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B489fa8:{NFSU2_TR(0x489fa8);
{u32 ea_=u32(r4(R+4)+u32(116u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B489fab:{NFSU2_TR(0x489fab);
{u32 ea_=u32(r4(R+4)+u32(100u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B489fae:{NFSU2_TR(0x489fae);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B489fb2:{NFSU2_TR(0x489fb2);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B489fb5:{NFSU2_TR(0x489fb5);
{u32 ea_=u32(r4(R+4)+u32(84u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B489fb8:{NFSU2_TR(0x489fb8);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B489fbc:{NFSU2_TR(0x489fbc);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B489fbf:{NFSU2_TR(0x489fbf);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B489fc3:{NFSU2_TR(0x489fc3);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B489fc6:{NFSU2_TR(0x489fc6);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B489fca:{NFSU2_TR(0x489fca);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B489fce:{NFSU2_TR(0x489fce);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B489fd2:{NFSU2_TR(0x489fd2);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B489fd6:{NFSU2_TR(0x489fd6);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B489fda:{NFSU2_TR(0x489fda);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B489fdc:{NFSU2_TR(0x489fdc);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B489fe0:{NFSU2_TR(0x489fe0);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B489fe4:{NFSU2_TR(0x489fe4);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B489fe6:{NFSU2_TR(0x489fe6);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B489fea:{NFSU2_TR(0x489fea);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B489fee:{NFSU2_TR(0x489fee);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B489ff0:{NFSU2_TR(0x489ff0);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B489ff4:{NFSU2_TR(0x489ff4);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B489ff8:{NFSU2_TR(0x489ff8);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B489ffa:{NFSU2_TR(0x489ffa);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B489ffc:{NFSU2_TR(0x489ffc);
__asm__ volatile(".byte 0xd8,0xca":::"memory");
}
B489ffe:{NFSU2_TR(0x489ffe);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
TAIL_STATIC(0x48a000u,48a);
}
XIT:NFSU2_TR_EXIT(0x489,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
