#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_413(u8* __restrict R,Cpu& c);
u32 body_4a3(u8* __restrict R,Cpu& c);
u32 body_4d8(u8* __restrict R,Cpu& c);
u32 body_505(u8* __restrict R,Cpu& c);
u32 body_50b(u8* __restrict R,Cpu& c);
u32 body_50d(u8* __restrict R,Cpu& c);
u32 body_50f(u8* __restrict R,Cpu& c);
u32 body_510(u8* __restrict R,Cpu& c);
u32 body_514(u8* __restrict R,Cpu& c);
u32 body_51b(u8* __restrict R,Cpu& c);
u32 body_52c(u8* __restrict R,Cpu& c);
u32 body_52d(u8* __restrict R,Cpu& c);
u32 body_52e(u8* __restrict R,Cpu& c);
u32 body_530(u8* __restrict R,Cpu& c);
u32 body_537(u8* __restrict R,Cpu& c);
u32 body_538(u8* __restrict R,Cpu& c);
u32 body_53c(u8* __restrict R,Cpu& c);
u32 body_542(u8* __restrict R,Cpu& c);
u32 body_543(u8* __restrict R,Cpu& c);
u32 body_548(u8* __restrict R,Cpu& c);
u32 body_549(u8* __restrict R,Cpu& c);
u32 body_54e(u8* __restrict R,Cpu& c);
u32 body_550(u8* __restrict R,Cpu& c);
u32 body_555(u8* __restrict R,Cpu& c);
u32 body_558(u8* __restrict R,Cpu& c);
u32 body_55b(u8* __restrict R,Cpu& c);
u32 body_55d(u8* __restrict R,Cpu& c);
u32 body_560(u8* __restrict R,Cpu& c);
u32 body_563(u8* __restrict R,Cpu& c);
u32 body_565(u8* __restrict R,Cpu& c);
u32 body_59b(u8* __restrict R,Cpu& c);
u32 body_5b3(u8* __restrict R,Cpu& c);
u32 body_5b4(u8* __restrict R,Cpu& c);
u32 body_5ea(u8* __restrict R,Cpu& c);
u32 body_5f4(u8* __restrict R,Cpu& c);
u32 body_61b(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x564,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x564,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_564(u8* __restrict R,Cpu& c);
u32 page_564(Cpu& c){return body_564(c.regs.data(),c);}
__attribute__((noinline)) u32 body_564(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x564003:goto L564003;
case 0x564009:goto L564009;
case 0x56400a:c.instructions+=2;goto B56400a;
case 0x56400c:c.instructions+=1;goto B56400c;
case 0x564011:goto L564011;
case 0x564012:c.instructions+=4;goto B564012;
case 0x564013:c.instructions+=3;goto B564013;
case 0x564014:c.instructions+=2;goto B564014;
case 0x564015:c.instructions+=1;goto B564015;
case 0x564018:goto L564018;
case 0x56401b:c.instructions+=4;goto B56401b;
case 0x564020:c.instructions+=3;goto B564020;
case 0x564025:c.instructions+=2;goto B564025;
case 0x564026:c.instructions+=1;goto B564026;
case 0x56402b:goto L56402b;
case 0x56402e:c.instructions+=2;goto B56402e;
case 0x564030:c.instructions+=1;goto B564030;
case 0x564036:goto L564036;
case 0x56403b:c.instructions+=2;goto B56403b;
case 0x564042:c.instructions+=1;goto B564042;
case 0x564047:goto L564047;
case 0x56404a:c.instructions+=4;goto B56404a;
case 0x56404d:c.instructions+=3;goto B56404d;
case 0x56404f:c.instructions+=2;goto B56404f;
case 0x564053:c.instructions+=1;goto B564053;
case 0x564058:goto L564058;
case 0x56405b:c.instructions+=5;goto B56405b;
case 0x56405c:c.instructions+=4;goto B56405c;
case 0x564061:c.instructions+=3;goto B564061;
case 0x564066:c.instructions+=2;goto B564066;
case 0x564067:c.instructions+=1;goto B564067;
case 0x56406c:goto L56406c;
case 0x56406f:c.instructions+=5;goto B56406f;
case 0x564070:c.instructions+=4;goto B564070;
case 0x564071:c.instructions+=3;goto B564071;
case 0x564072:c.instructions+=2;goto B564072;
case 0x564073:c.instructions+=1;goto B564073;
case 0x564076:goto L564076;
case 0x564078:c.instructions+=2;goto B564078;
case 0x56407a:c.instructions+=1;goto B56407a;
case 0x56407f:goto L56407f;
case 0x564080:c.instructions+=4;goto B564080;
case 0x564081:c.instructions+=3;goto B564081;
case 0x564082:c.instructions+=2;goto B564082;
case 0x564083:c.instructions+=1;goto B564083;
case 0x564086:goto L564086;
case 0x56408b:c.instructions+=1;goto B56408b;
case 0x564091:goto L564091;
case 0x564097:goto L564097;
case 0x56409c:c.instructions+=1;goto B56409c;
case 0x5640a2:goto L5640a2;
case 0x5640a7:c.instructions+=1;goto B5640a7;
case 0x5640ad:goto L5640ad;
case 0x5640b2:c.instructions+=1;goto B5640b2;
case 0x5640b8:goto L5640b8;
case 0x5640b9:c.instructions+=4;goto B5640b9;
case 0x5640be:c.instructions+=3;goto B5640be;
case 0x5640c3:c.instructions+=2;goto B5640c3;
case 0x5640c8:c.instructions+=1;goto B5640c8;
case 0x5640cd:goto L5640cd;
case 0x5640d0:c.instructions+=5;goto B5640d0;
case 0x5640d1:c.instructions+=4;goto B5640d1;
case 0x5640d6:c.instructions+=3;goto B5640d6;
case 0x5640db:c.instructions+=2;goto B5640db;
case 0x5640dc:c.instructions+=1;goto B5640dc;
case 0x5640e1:goto L5640e1;
case 0x5640e2:c.instructions+=4;goto B5640e2;
case 0x5640e7:c.instructions+=3;goto B5640e7;
case 0x5640ec:c.instructions+=2;goto B5640ec;
case 0x5640f1:c.instructions+=1;goto B5640f1;
case 0x5640f6:goto L5640f6;
case 0x5640fb:c.instructions+=3;goto B5640fb;
case 0x5640fe:c.instructions+=2;goto B5640fe;
case 0x564100:c.instructions+=1;goto B564100;
case 0x564106:goto L564106;
case 0x564108:c.instructions+=2;goto B564108;
case 0x56410d:c.instructions+=1;goto B56410d;
case 0x564112:goto L564112;
case 0x564117:c.instructions+=2;goto B564117;
case 0x56411c:c.instructions+=1;goto B56411c;
case 0x564121:goto L564121;
case 0x564124:c.instructions+=6;goto B564124;
case 0x564125:c.instructions+=5;goto B564125;
case 0x564126:c.instructions+=4;goto B564126;
case 0x564130:c.instructions+=3;goto B564130;
case 0x564131:c.instructions+=2;goto B564131;
case 0x564132:c.instructions+=1;goto B564132;
case 0x564135:goto L564135;
case 0x564138:c.instructions+=4;goto B564138;
case 0x56413b:c.instructions+=3;goto B56413b;
case 0x56413d:c.instructions+=2;goto B56413d;
case 0x564142:c.instructions+=1;goto B564142;
case 0x564147:goto L564147;
case 0x564149:c.instructions+=3;goto B564149;
case 0x56414e:c.instructions+=2;goto B56414e;
case 0x564150:c.instructions+=1;goto B564150;
case 0x564152:goto L564152;
case 0x564154:c.instructions+=1;goto B564154;
case 0x564156:goto L564156;
case 0x56415c:c.instructions+=2;goto B56415c;
case 0x56415e:c.instructions+=1;goto B56415e;
case 0x564160:goto L564160;
case 0x564165:c.instructions+=2;goto B564165;
case 0x56416a:c.instructions+=1;goto B56416a;
case 0x56416f:goto L56416f;
case 0x564172:c.instructions+=6;goto B564172;
case 0x564173:c.instructions+=5;goto B564173;
case 0x56417a:c.instructions+=4;goto B56417a;
case 0x56417b:c.instructions+=3;goto B56417b;
case 0x56417c:c.instructions+=2;goto B56417c;
case 0x56417d:c.instructions+=1;goto B56417d;
case 0x564180:goto L564180;
case 0x564182:goto L564182;
case 0x564188:goto L564188;
case 0x56418b:c.instructions+=8;goto B56418b;
case 0x564191:c.instructions+=7;goto B564191;
case 0x564194:c.instructions+=6;goto B564194;
case 0x564197:c.instructions+=5;goto B564197;
case 0x564198:c.instructions+=4;goto B564198;
case 0x564199:c.instructions+=3;goto B564199;
case 0x56419e:c.instructions+=2;goto B56419e;
case 0x5641a1:c.instructions+=1;goto B5641a1;
case 0x5641a6:goto L5641a6;
case 0x5641a8:c.instructions+=1;goto B5641a8;
case 0x5641aa:goto L5641aa;
case 0x5641ac:c.instructions+=1;goto B5641ac;
case 0x5641ae:goto L5641ae;
case 0x5641b1:c.instructions+=7;goto B5641b1;
case 0x5641b6:c.instructions+=6;goto B5641b6;
case 0x5641bb:c.instructions+=5;goto B5641bb;
case 0x5641c0:c.instructions+=4;goto B5641c0;
case 0x5641c5:c.instructions+=3;goto B5641c5;
case 0x5641ca:c.instructions+=2;goto B5641ca;
case 0x5641cb:c.instructions+=1;goto B5641cb;
case 0x5641d0:goto L5641d0;
case 0x5641d3:c.instructions+=3;goto B5641d3;
case 0x5641d5:c.instructions+=2;goto B5641d5;
case 0x5641df:c.instructions+=1;goto B5641df;
case 0x5641e4:goto L5641e4;
case 0x5641e5:c.instructions+=4;goto B5641e5;
case 0x5641e6:c.instructions+=3;goto B5641e6;
case 0x5641e7:c.instructions+=2;goto B5641e7;
case 0x5641e8:c.instructions+=1;goto B5641e8;
case 0x5641eb:goto L5641eb;
case 0x5641f2:c.instructions+=1;goto B5641f2;
case 0x5641f4:goto L5641f4;
case 0x5641f6:c.instructions+=1;goto B5641f6;
case 0x5641f8:goto L5641f8;
case 0x5641fb:c.instructions+=5;goto B5641fb;
case 0x564201:c.instructions+=4;goto B564201;
case 0x564202:c.instructions+=3;goto B564202;
case 0x564203:c.instructions+=2;goto B564203;
case 0x564208:c.instructions+=1;goto B564208;
case 0x56420d:goto L56420d;
case 0x56420f:c.instructions+=1;goto B56420f;
case 0x564211:goto L564211;
case 0x564214:c.instructions+=7;goto B564214;
case 0x564219:c.instructions+=6;goto B564219;
case 0x56421e:c.instructions+=5;goto B56421e;
case 0x564223:c.instructions+=4;goto B564223;
case 0x564228:c.instructions+=3;goto B564228;
case 0x56422d:c.instructions+=2;goto B56422d;
case 0x56422e:c.instructions+=1;goto B56422e;
case 0x564233:goto L564233;
case 0x564236:c.instructions+=1;goto B564236;
case 0x564238:goto L564238;
case 0x56423b:c.instructions+=10;goto B56423b;
case 0x564240:c.instructions+=9;goto B564240;
case 0x564242:c.instructions+=8;goto B564242;
case 0x564247:c.instructions+=7;goto B564247;
case 0x56424c:c.instructions+=6;goto B56424c;
case 0x564251:c.instructions+=5;goto B564251;
case 0x564256:c.instructions+=4;goto B564256;
case 0x56425b:c.instructions+=3;goto B56425b;
case 0x564260:c.instructions+=2;goto B564260;
case 0x564261:c.instructions+=1;goto B564261;
case 0x564263:goto L564263;
case 0x564266:c.instructions+=9;goto B564266;
case 0x56426b:c.instructions+=8;goto B56426b;
case 0x56426d:c.instructions+=7;goto B56426d;
case 0x564272:c.instructions+=6;goto B564272;
case 0x564277:c.instructions+=5;goto B564277;
case 0x56427c:c.instructions+=4;goto B56427c;
case 0x564281:c.instructions+=3;goto B564281;
case 0x564286:c.instructions+=2;goto B564286;
case 0x56428b:c.instructions+=1;goto B56428b;
case 0x56428c:goto L56428c;
case 0x564291:goto L564291;
case 0x564294:goto L564294;
case 0x564296:c.instructions+=2;goto B564296;
case 0x5642a0:c.instructions+=1;goto B5642a0;
case 0x5642a5:goto L5642a5;
case 0x5642a6:c.instructions+=4;goto B5642a6;
case 0x5642a7:c.instructions+=3;goto B5642a7;
case 0x5642a8:c.instructions+=2;goto B5642a8;
case 0x5642a9:c.instructions+=1;goto B5642a9;
case 0x5642ac:goto L5642ac;
case 0x5642b2:c.instructions+=1;goto B5642b2;
case 0x5642b7:goto L5642b7;
case 0x5642bd:c.instructions+=2;goto B5642bd;
case 0x5642c0:c.instructions+=1;goto B5642c0;
case 0x5642c2:goto L5642c2;
case 0x5642c4:c.instructions+=1;goto B5642c4;
case 0x5642c6:goto L5642c6;
case 0x5642cc:c.instructions+=4;goto B5642cc;
case 0x5642d2:c.instructions+=3;goto B5642d2;
case 0x5642d4:c.instructions+=2;goto B5642d4;
case 0x5642d7:c.instructions+=1;goto B5642d7;
case 0x5642d9:goto L5642d9;
case 0x5642db:c.instructions+=2;goto B5642db;
case 0x5642dd:c.instructions+=1;goto B5642dd;
case 0x5642df:goto L5642df;
case 0x5642e5:c.instructions+=3;goto B5642e5;
case 0x5642e7:c.instructions+=2;goto B5642e7;
case 0x5642ea:c.instructions+=1;goto B5642ea;
case 0x5642ec:goto L5642ec;
case 0x5642f1:goto L5642f1;
case 0x5642f3:c.instructions+=2;goto B5642f3;
case 0x5642f4:c.instructions+=1;goto B5642f4;
case 0x5642f9:goto L5642f9;
case 0x5642ff:c.instructions+=2;goto B5642ff;
case 0x564300:c.instructions+=1;goto B564300;
case 0x564305:goto L564305;
case 0x564308:c.instructions+=2;goto B564308;
case 0x56430a:c.instructions+=1;goto B56430a;
case 0x564310:goto L564310;
case 0x564313:c.instructions+=3;goto B564313;
case 0x564314:c.instructions+=2;goto B564314;
case 0x564319:c.instructions+=1;goto B564319;
case 0x56431e:goto L56431e;
case 0x564321:c.instructions+=5;goto B564321;
case 0x564322:c.instructions+=4;goto B564322;
case 0x564323:c.instructions+=3;goto B564323;
case 0x564324:c.instructions+=2;goto B564324;
case 0x564325:c.instructions+=1;goto B564325;
case 0x564328:goto L564328;
case 0x564329:c.instructions+=4;goto B564329;
case 0x56432e:c.instructions+=3;goto B56432e;
case 0x564333:c.instructions+=2;goto B564333;
case 0x564338:c.instructions+=1;goto B564338;
case 0x56433d:goto L56433d;
case 0x564340:c.instructions+=5;goto B564340;
case 0x564341:c.instructions+=4;goto B564341;
case 0x564346:c.instructions+=3;goto B564346;
case 0x56434b:c.instructions+=2;goto B56434b;
case 0x56434c:c.instructions+=1;goto B56434c;
case 0x564351:goto L564351;
case 0x564352:c.instructions+=4;goto B564352;
case 0x564357:c.instructions+=3;goto B564357;
case 0x56435c:c.instructions+=2;goto B56435c;
case 0x564361:c.instructions+=1;goto B564361;
case 0x564366:goto L564366;
case 0x56436b:c.instructions+=1;goto B56436b;
case 0x564370:goto L564370;
case 0x564373:c.instructions+=2;goto B564373;
case 0x564375:c.instructions+=1;goto B564375;
case 0x56437b:goto L56437b;
case 0x564380:c.instructions+=9;goto B564380;
case 0x564383:c.instructions+=8;goto B564383;
case 0x564386:c.instructions+=7;goto B564386;
case 0x564389:c.instructions+=6;goto B564389;
case 0x56438c:c.instructions+=5;goto B56438c;
case 0x56438d:c.instructions+=4;goto B56438d;
case 0x56438e:c.instructions+=3;goto B56438e;
case 0x56438f:c.instructions+=2;goto B56438f;
case 0x564390:c.instructions+=1;goto B564390;
case 0x564393:goto L564393;
case 0x564398:c.instructions+=1;goto B564398;
case 0x56439e:goto L56439e;
case 0x5643a3:c.instructions+=1;goto B5643a3;
case 0x5643a5:goto L5643a5;
case 0x5643aa:c.instructions+=1;goto B5643aa;
case 0x5643b0:goto L5643b0;
case 0x5643b5:c.instructions+=2;goto B5643b5;
case 0x5643bc:c.instructions+=1;goto B5643bc;
case 0x5643c1:goto L5643c1;
case 0x5643c2:c.instructions+=4;goto B5643c2;
case 0x5643c3:c.instructions+=3;goto B5643c3;
case 0x5643c4:c.instructions+=2;goto B5643c4;
case 0x5643c5:c.instructions+=1;goto B5643c5;
case 0x5643c8:goto L5643c8;
case 0x5643ce:c.instructions+=3;goto B5643ce;
case 0x5643d0:c.instructions+=2;goto B5643d0;
case 0x5643d5:c.instructions+=1;goto B5643d5;
case 0x5643d7:goto L5643d7;
case 0x5643d9:c.instructions+=3;goto B5643d9;
case 0x5643de:c.instructions+=2;goto B5643de;
case 0x5643e8:c.instructions+=1;goto B5643e8;
case 0x5643ed:goto L5643ed;
case 0x5643f0:c.instructions+=3;goto B5643f0;
case 0x5643f2:c.instructions+=2;goto B5643f2;
case 0x5643f3:c.instructions+=1;goto B5643f3;
case 0x5643f8:goto L5643f8;
case 0x5643f9:c.instructions+=2;goto B5643f9;
case 0x5643fe:c.instructions+=1;goto B5643fe;
case 0x564403:goto L564403;
case 0x564406:c.instructions+=1;goto B564406;
case 0x56440d:goto L56440d;
case 0x564413:c.instructions+=2;goto B564413;
case 0x564415:c.instructions+=1;goto B564415;
case 0x56441b:goto L56441b;
case 0x564421:c.instructions+=2;goto B564421;
case 0x564423:c.instructions+=1;goto B564423;
case 0x564425:goto L564425;
case 0x56442a:c.instructions+=3;goto B56442a;
case 0x56442b:c.instructions+=2;goto B56442b;
case 0x564430:c.instructions+=1;goto B564430;
case 0x564432:goto L564432;
case 0x564438:c.instructions+=2;goto B564438;
case 0x564439:c.instructions+=1;goto B564439;
case 0x56443e:goto L56443e;
case 0x564443:goto L564443;
case 0x564446:c.instructions+=3;goto B564446;
case 0x56444b:c.instructions+=2;goto B56444b;
case 0x564452:c.instructions+=1;goto B564452;
case 0x564457:goto L564457;
case 0x56445a:c.instructions+=2;goto B56445a;
case 0x56445c:c.instructions+=1;goto B56445c;
case 0x56445e:goto L56445e;
case 0x564463:c.instructions+=1;goto B564463;
case 0x564468:goto L564468;
case 0x56446b:goto L56446b;
case 0x56446e:c.instructions+=2;goto B56446e;
case 0x56446f:c.instructions+=1;goto B56446f;
case 0x564474:goto L564474;
case 0x564479:c.instructions+=3;goto B564479;
case 0x56447a:c.instructions+=2;goto B56447a;
case 0x56447b:c.instructions+=1;goto B56447b;
case 0x564480:goto L564480;
case 0x564486:c.instructions+=3;goto B564486;
case 0x564487:c.instructions+=2;goto B564487;
case 0x56448c:c.instructions+=1;goto B56448c;
case 0x564491:goto L564491;
case 0x564494:c.instructions+=5;goto B564494;
case 0x564495:c.instructions+=4;goto B564495;
case 0x564496:c.instructions+=3;goto B564496;
case 0x564497:c.instructions+=2;goto B564497;
case 0x564498:c.instructions+=1;goto B564498;
case 0x56449b:goto L56449b;
case 0x56449e:c.instructions+=1;goto B56449e;
case 0x5644a3:goto L5644a3;
case 0x5644a4:c.instructions+=4;goto B5644a4;
case 0x5644a5:c.instructions+=3;goto B5644a5;
case 0x5644a6:c.instructions+=2;goto B5644a6;
case 0x5644a7:c.instructions+=1;goto B5644a7;
case 0x5644aa:goto L5644aa;
case 0x5644af:c.instructions+=2;goto B5644af;
case 0x5644b4:c.instructions+=1;goto B5644b4;
case 0x5644b9:goto L5644b9;
case 0x5644bb:c.instructions+=3;goto B5644bb;
case 0x5644bc:c.instructions+=2;goto B5644bc;
case 0x5644c1:c.instructions+=1;goto B5644c1;
case 0x5644c6:goto L5644c6;
case 0x5644c9:goto L5644c9;
case 0x5644ca:c.instructions+=4;goto B5644ca;
case 0x5644cb:c.instructions+=3;goto B5644cb;
case 0x5644cc:c.instructions+=2;goto B5644cc;
case 0x5644cd:c.instructions+=1;goto B5644cd;
case 0x5644d0:goto L5644d0;
case 0x5644d4:c.instructions+=5;goto B5644d4;
case 0x5644d9:c.instructions+=4;goto B5644d9;
case 0x5644da:c.instructions+=3;goto B5644da;
case 0x5644db:c.instructions+=2;goto B5644db;
case 0x5644dd:c.instructions+=1;goto B5644dd;
case 0x5644e3:goto L5644e3;
case 0x5644e9:goto L5644e9;
case 0x5644ee:c.instructions+=1;goto B5644ee;
case 0x5644f4:goto L5644f4;
case 0x5644fa:goto L5644fa;
case 0x5644ff:c.instructions+=1;goto B5644ff;
case 0x564505:goto L564505;
case 0x56450a:c.instructions+=1;goto B56450a;
case 0x564510:goto L564510;
case 0x564515:c.instructions+=3;goto B564515;
case 0x564516:c.instructions+=2;goto B564516;
case 0x564519:c.instructions+=1;goto B564519;
case 0x56451b:goto L56451b;
case 0x564522:goto L564522;
case 0x564524:c.instructions+=3;goto B564524;
case 0x564526:c.instructions+=2;goto B564526;
case 0x564530:c.instructions+=1;goto B564530;
case 0x564535:goto L564535;
case 0x564537:goto L564537;
case 0x564539:c.instructions+=3;goto B564539;
case 0x56453b:c.instructions+=2;goto B56453b;
case 0x564545:c.instructions+=1;goto B564545;
case 0x56454a:goto L56454a;
case 0x56454c:goto L56454c;
case 0x564556:c.instructions+=1;goto B564556;
case 0x564558:goto L564558;
case 0x56455d:c.instructions+=2;goto B56455d;
case 0x564562:c.instructions+=1;goto B564562;
case 0x564567:goto L564567;
case 0x56456a:goto L56456a;
case 0x56456c:c.instructions+=1;goto B56456c;
case 0x564571:goto L564571;
case 0x564576:c.instructions+=2;goto B564576;
case 0x564578:c.instructions+=1;goto B564578;
case 0x56457e:goto L56457e;
case 0x564580:c.instructions+=1;goto B564580;
case 0x564585:goto L564585;
case 0x564587:c.instructions+=2;goto B564587;
case 0x56458c:c.instructions+=1;goto B56458c;
case 0x564591:goto L564591;
case 0x564596:c.instructions+=2;goto B564596;
case 0x56459b:c.instructions+=1;goto B56459b;
case 0x5645a0:goto L5645a0;
case 0x5645a2:c.instructions+=2;goto B5645a2;
case 0x5645a7:c.instructions+=1;goto B5645a7;
case 0x5645ac:goto L5645ac;
case 0x5645b1:c.instructions+=3;goto B5645b1;
case 0x5645b6:c.instructions+=2;goto B5645b6;
case 0x5645bd:c.instructions+=1;goto B5645bd;
case 0x5645c2:goto L5645c2;
case 0x5645c5:c.instructions+=3;goto B5645c5;
case 0x5645c6:c.instructions+=2;goto B5645c6;
case 0x5645c7:c.instructions+=1;goto B5645c7;
case 0x5645ca:goto L5645ca;
case 0x5645cf:c.instructions+=3;goto B5645cf;
case 0x5645d4:c.instructions+=2;goto B5645d4;
case 0x5645d6:c.instructions+=1;goto B5645d6;
case 0x5645dc:goto L5645dc;
case 0x5645de:c.instructions+=1;goto B5645de;
case 0x5645e3:goto L5645e3;
case 0x5645e9:c.instructions+=3;goto B5645e9;
case 0x5645ea:c.instructions+=2;goto B5645ea;
case 0x5645eb:c.instructions+=1;goto B5645eb;
case 0x5645ee:goto L5645ee;
case 0x5645f3:c.instructions+=2;goto B5645f3;
case 0x5645f6:c.instructions+=1;goto B5645f6;
case 0x5645f8:goto L5645f8;
case 0x5645fd:c.instructions+=2;goto B5645fd;
case 0x564602:c.instructions+=1;goto B564602;
case 0x564607:goto L564607;
case 0x56460c:c.instructions+=2;goto B56460c;
case 0x564611:c.instructions+=1;goto B564611;
case 0x564616:goto L564616;
case 0x56461b:c.instructions+=2;goto B56461b;
case 0x564620:c.instructions+=1;goto B564620;
case 0x564625:goto L564625;
case 0x564628:c.instructions+=2;goto B564628;
case 0x56462a:c.instructions+=1;goto B56462a;
case 0x56462f:goto L56462f;
case 0x564631:c.instructions+=4;goto B564631;
case 0x564634:c.instructions+=3;goto B564634;
case 0x564636:c.instructions+=2;goto B564636;
case 0x564638:c.instructions+=1;goto B564638;
case 0x56463d:goto L56463d;
case 0x564642:c.instructions+=3;goto B564642;
case 0x564643:c.instructions+=2;goto B564643;
case 0x564645:c.instructions+=1;goto B564645;
case 0x56464a:goto L56464a;
case 0x56464f:c.instructions+=6;goto B56464f;
case 0x564652:c.instructions+=5;goto B564652;
case 0x564658:c.instructions+=4;goto B564658;
case 0x56465f:c.instructions+=3;goto B56465f;
case 0x564660:c.instructions+=2;goto B564660;
case 0x564661:c.instructions+=1;goto B564661;
case 0x564664:goto L564664;
case 0x564669:c.instructions+=2;goto B564669;
case 0x56466b:c.instructions+=1;goto B56466b;
case 0x56466d:goto L56466d;
case 0x564672:c.instructions+=2;goto B564672;
case 0x564677:c.instructions+=1;goto B564677;
case 0x56467c:goto L56467c;
case 0x56467f:c.instructions+=3;goto B56467f;
case 0x564680:c.instructions+=2;goto B564680;
case 0x564681:c.instructions+=1;goto B564681;
case 0x564684:goto L564684;
case 0x564687:c.instructions+=1;goto B564687;
case 0x564689:goto L564689;
case 0x56468a:c.instructions+=1;goto B56468a;
case 0x56468c:goto L56468c;
case 0x56468e:c.instructions+=4;goto B56468e;
case 0x564691:c.instructions+=3;goto B564691;
case 0x564693:c.instructions+=2;goto B564693;
case 0x564695:c.instructions+=1;goto B564695;
case 0x56469a:goto L56469a;
case 0x5646a0:c.instructions+=3;goto B5646a0;
case 0x5646a1:c.instructions+=2;goto B5646a1;
case 0x5646a3:c.instructions+=1;goto B5646a3;
case 0x5646a8:goto L5646a8;
case 0x5646ae:c.instructions+=4;goto B5646ae;
case 0x5646af:c.instructions+=3;goto B5646af;
case 0x5646b1:c.instructions+=2;goto B5646b1;
case 0x5646bb:c.instructions+=1;goto B5646bb;
case 0x5646c0:goto L5646c0;
case 0x5646c2:c.instructions+=1;goto B5646c2;
case 0x5646c7:goto L5646c7;
case 0x5646c8:c.instructions+=2;goto B5646c8;
case 0x5646c9:c.instructions+=1;goto B5646c9;
case 0x5646cc:goto L5646cc;
case 0x5646ce:c.instructions+=4;goto B5646ce;
case 0x5646d1:c.instructions+=3;goto B5646d1;
case 0x5646d3:c.instructions+=2;goto B5646d3;
case 0x5646d5:c.instructions+=1;goto B5646d5;
case 0x5646da:goto L5646da;
case 0x5646e0:c.instructions+=3;goto B5646e0;
case 0x5646e1:c.instructions+=2;goto B5646e1;
case 0x5646e3:c.instructions+=1;goto B5646e3;
case 0x5646e8:goto L5646e8;
case 0x5646ee:c.instructions+=4;goto B5646ee;
case 0x5646f0:c.instructions+=3;goto B5646f0;
case 0x5646f2:c.instructions+=2;goto B5646f2;
case 0x5646fc:c.instructions+=1;goto B5646fc;
case 0x564701:goto L564701;
case 0x564703:c.instructions+=1;goto B564703;
case 0x564708:goto L564708;
case 0x564709:c.instructions+=2;goto B564709;
case 0x56470a:c.instructions+=1;goto B56470a;
case 0x56470d:goto L56470d;
case 0x564712:c.instructions+=1;goto B564712;
case 0x564714:goto L564714;
case 0x564716:c.instructions+=2;goto B564716;
case 0x564718:c.instructions+=1;goto B564718;
case 0x56471d:goto L56471d;
case 0x56471e:c.instructions+=2;goto B56471e;
case 0x56471f:c.instructions+=1;goto B56471f;
case 0x564722:goto L564722;
case 0x564728:c.instructions+=2;goto B564728;
case 0x564729:c.instructions+=1;goto B564729;
case 0x56472e:goto L56472e;
case 0x564731:c.instructions+=2;goto B564731;
case 0x564733:c.instructions+=1;goto B564733;
case 0x564735:goto L564735;
case 0x56473b:c.instructions+=2;goto B56473b;
case 0x56473c:c.instructions+=1;goto B56473c;
case 0x564741:goto L564741;
case 0x564744:c.instructions+=2;goto B564744;
case 0x564746:c.instructions+=1;goto B564746;
case 0x564748:goto L564748;
case 0x56474a:c.instructions+=2;goto B56474a;
case 0x56474c:c.instructions+=1;goto B56474c;
case 0x564751:goto L564751;
case 0x564752:c.instructions+=2;goto B564752;
case 0x564753:c.instructions+=1;goto B564753;
case 0x564756:goto L564756;
case 0x56475b:c.instructions+=1;goto B56475b;
case 0x56475d:goto L56475d;
case 0x564762:c.instructions+=1;goto B564762;
case 0x564764:goto L564764;
case 0x564769:c.instructions+=1;goto B564769;
case 0x56476b:goto L56476b;
case 0x56476d:c.instructions+=1;goto B56476d;
case 0x564772:goto L564772;
case 0x564774:c.instructions+=1;goto B564774;
case 0x564779:goto L564779;
case 0x56477b:c.instructions+=2;goto B56477b;
case 0x56477d:c.instructions+=1;goto B56477d;
case 0x564782:goto L564782;
case 0x564789:c.instructions+=3;goto B564789;
case 0x56478a:c.instructions+=2;goto B56478a;
case 0x56478b:c.instructions+=1;goto B56478b;
case 0x56478e:goto L56478e;
case 0x564791:c.instructions+=2;goto B564791;
case 0x564793:c.instructions+=1;goto B564793;
case 0x564795:goto L564795;
case 0x56479a:c.instructions+=2;goto B56479a;
case 0x56479d:c.instructions+=1;goto B56479d;
case 0x56479f:goto L56479f;
case 0x5647a1:c.instructions+=4;goto B5647a1;
case 0x5647a2:c.instructions+=3;goto B5647a2;
case 0x5647a4:c.instructions+=2;goto B5647a4;
case 0x5647a7:c.instructions+=1;goto B5647a7;
case 0x5647ac:goto L5647ac;
case 0x5647af:c.instructions+=5;goto B5647af;
case 0x5647b1:c.instructions+=4;goto B5647b1;
case 0x5647b6:c.instructions+=3;goto B5647b6;
case 0x5647bb:c.instructions+=2;goto B5647bb;
case 0x5647bc:c.instructions+=1;goto B5647bc;
case 0x5647c1:goto L5647c1;
case 0x5647c4:c.instructions+=3;goto B5647c4;
case 0x5647c5:c.instructions+=2;goto B5647c5;
case 0x5647c6:c.instructions+=1;goto B5647c6;
case 0x5647e0:goto L5647e0;
case 0x5647e1:c.instructions+=8;goto B5647e1;
case 0x5647e3:c.instructions+=7;goto B5647e3;
case 0x5647e8:c.instructions+=6;goto B5647e8;
case 0x5647ea:c.instructions+=5;goto B5647ea;
case 0x5647eb:c.instructions+=4;goto B5647eb;
case 0x5647ee:c.instructions+=3;goto B5647ee;
case 0x5647ef:c.instructions+=2;goto B5647ef;
case 0x5647f1:c.instructions+=1;goto B5647f1;
case 0x5647f3:goto L5647f3;
case 0x5647f9:c.instructions+=1;goto B5647f9;
case 0x5647ff:goto L5647ff;
case 0x564805:c.instructions+=4;goto B564805;
case 0x56480b:c.instructions+=3;goto B56480b;
case 0x56480c:c.instructions+=2;goto B56480c;
case 0x56480f:c.instructions+=1;goto B56480f;
case 0x564811:goto L564811;
case 0x564814:c.instructions+=7;goto B564814;
case 0x564817:c.instructions+=6;goto B564817;
case 0x564818:c.instructions+=5;goto B564818;
case 0x564819:c.instructions+=4;goto B564819;
case 0x56481a:c.instructions+=3;goto B56481a;
case 0x56481b:c.instructions+=2;goto B56481b;
case 0x56481d:c.instructions+=1;goto B56481d;
case 0x564822:goto L564822;
case 0x564828:c.instructions+=1;goto B564828;
case 0x56482e:goto L56482e;
case 0x564834:goto L564834;
case 0x56483a:c.instructions+=1;goto B56483a;
case 0x564840:goto L564840;
case 0x564846:goto L564846;
case 0x56484c:c.instructions+=1;goto B56484c;
case 0x56484e:goto L56484e;
case 0x564850:goto L564850;
case 0x564856:c.instructions+=1;goto B564856;
case 0x56485c:goto L56485c;
case 0x564862:c.instructions+=1;goto B564862;
case 0x564868:goto L564868;
case 0x56486d:c.instructions+=3;goto B56486d;
case 0x56486e:c.instructions+=2;goto B56486e;
case 0x564873:c.instructions+=1;goto B564873;
case 0x564878:goto L564878;
case 0x56487a:c.instructions+=1;goto B56487a;
case 0x56487f:goto L56487f;
case 0x564880:c.instructions+=4;goto B564880;
case 0x564881:c.instructions+=3;goto B564881;
case 0x564882:c.instructions+=2;goto B564882;
case 0x564883:c.instructions+=1;goto B564883;
case 0x564886:goto L564886;
case 0x56488c:c.instructions+=3;goto B56488c;
case 0x56488d:c.instructions+=2;goto B56488d;
case 0x564892:c.instructions+=1;goto B564892;
case 0x564897:goto L564897;
case 0x564899:c.instructions+=1;goto B564899;
case 0x56489e:goto L56489e;
case 0x56489f:c.instructions+=4;goto B56489f;
case 0x5648a0:c.instructions+=3;goto B5648a0;
case 0x5648a1:c.instructions+=2;goto B5648a1;
case 0x5648a2:c.instructions+=1;goto B5648a2;
case 0x5648a5:goto L5648a5;
case 0x5648ab:c.instructions+=1;goto B5648ab;
case 0x5648b1:goto L5648b1;
case 0x5648b7:c.instructions+=3;goto B5648b7;
case 0x5648b8:c.instructions+=2;goto B5648b8;
case 0x5648bd:c.instructions+=1;goto B5648bd;
case 0x5648c2:goto L5648c2;
case 0x5648c4:c.instructions+=9;goto B5648c4;
case 0x5648c6:c.instructions+=8;goto B5648c6;
case 0x5648c8:c.instructions+=7;goto B5648c8;
case 0x5648ca:c.instructions+=6;goto B5648ca;
case 0x5648d1:c.instructions+=5;goto B5648d1;
case 0x5648d4:c.instructions+=4;goto B5648d4;
case 0x5648d9:c.instructions+=3;goto B5648d9;
case 0x5648da:c.instructions+=2;goto B5648da;
case 0x5648db:c.instructions+=1;goto B5648db;
case 0x5648e0:goto L5648e0;
case 0x5648e3:c.instructions+=5;goto B5648e3;
case 0x5648e4:c.instructions+=4;goto B5648e4;
case 0x5648e5:c.instructions+=3;goto B5648e5;
case 0x5648e6:c.instructions+=2;goto B5648e6;
case 0x5648e7:c.instructions+=1;goto B5648e7;
case 0x5648ea:goto L5648ea;
case 0x5648ef:c.instructions+=3;goto B5648ef;
case 0x5648f0:c.instructions+=2;goto B5648f0;
case 0x5648f5:c.instructions+=1;goto B5648f5;
case 0x5648fa:goto L5648fa;
case 0x564900:c.instructions+=5;goto B564900;
case 0x564903:c.instructions+=4;goto B564903;
case 0x564905:c.instructions+=3;goto B564905;
case 0x564906:c.instructions+=2;goto B564906;
case 0x564907:c.instructions+=1;goto B564907;
case 0x56490c:goto L56490c;
case 0x56490f:c.instructions+=5;goto B56490f;
case 0x564910:c.instructions+=4;goto B564910;
case 0x564911:c.instructions+=3;goto B564911;
case 0x564912:c.instructions+=2;goto B564912;
case 0x564913:c.instructions+=1;goto B564913;
case 0x564916:goto L564916;
case 0x56491c:c.instructions+=1;goto B56491c;
case 0x564922:goto L564922;
case 0x564928:goto L564928;
case 0x56492e:c.instructions+=1;goto B56492e;
case 0x564930:goto L564930;
case 0x564936:c.instructions+=1;goto B564936;
case 0x56493c:goto L56493c;
case 0x56493e:c.instructions+=1;goto B56493e;
case 0x564943:goto L564943;
case 0x564944:c.instructions+=4;goto B564944;
case 0x564945:c.instructions+=3;goto B564945;
case 0x564946:c.instructions+=2;goto B564946;
case 0x564947:c.instructions+=1;goto B564947;
case 0x56494a:goto L56494a;
case 0x56494f:c.instructions+=1;goto B56494f;
case 0x564954:goto L564954;
case 0x564956:c.instructions+=1;goto B564956;
case 0x56495c:goto L56495c;
case 0x564961:c.instructions+=2;goto B564961;
case 0x564963:c.instructions+=1;goto B564963;
case 0x564969:goto L564969;
case 0x56496c:c.instructions+=10;goto B56496c;
case 0x564971:c.instructions+=9;goto B564971;
case 0x564973:c.instructions+=8;goto B564973;
case 0x564978:c.instructions+=7;goto B564978;
case 0x56497d:c.instructions+=6;goto B56497d;
case 0x564982:c.instructions+=5;goto B564982;
case 0x564987:c.instructions+=4;goto B564987;
case 0x56498c:c.instructions+=3;goto B56498c;
case 0x564991:c.instructions+=2;goto B564991;
case 0x564992:c.instructions+=1;goto B564992;
case 0x564997:goto L564997;
case 0x56499a:c.instructions+=2;goto B56499a;
case 0x56499c:c.instructions+=1;goto B56499c;
case 0x5649a1:goto L5649a1;
case 0x5649a2:c.instructions+=4;goto B5649a2;
case 0x5649a3:c.instructions+=3;goto B5649a3;
case 0x5649a4:c.instructions+=2;goto B5649a4;
case 0x5649a5:c.instructions+=1;goto B5649a5;
case 0x5649a8:goto L5649a8;
case 0x5649ae:c.instructions+=1;goto B5649ae;
case 0x5649b3:goto L5649b3;
case 0x5649b4:c.instructions+=4;goto B5649b4;
case 0x5649b5:c.instructions+=3;goto B5649b5;
case 0x5649b6:c.instructions+=2;goto B5649b6;
case 0x5649b7:c.instructions+=1;goto B5649b7;
case 0x5649ba:goto L5649ba;
case 0x5649c0:c.instructions+=1;goto B5649c0;
case 0x5649c2:goto L5649c2;
case 0x5649c5:c.instructions+=8;goto B5649c5;
case 0x5649c7:c.instructions+=7;goto B5649c7;
case 0x5649c9:c.instructions+=6;goto B5649c9;
case 0x5649cb:c.instructions+=5;goto B5649cb;
case 0x5649cd:c.instructions+=4;goto B5649cd;
case 0x5649cf:c.instructions+=3;goto B5649cf;
case 0x5649d0:c.instructions+=2;goto B5649d0;
case 0x5649d1:c.instructions+=1;goto B5649d1;
case 0x5649d6:goto L5649d6;
case 0x5649d9:c.instructions+=5;goto B5649d9;
case 0x5649da:c.instructions+=4;goto B5649da;
case 0x5649db:c.instructions+=3;goto B5649db;
case 0x5649dc:c.instructions+=2;goto B5649dc;
case 0x5649dd:c.instructions+=1;goto B5649dd;
case 0x5649e0:goto L5649e0;
case 0x5649e6:c.instructions+=1;goto B5649e6;
case 0x5649ec:goto L5649ec;
case 0x5649f2:goto L5649f2;
case 0x5649f8:c.instructions+=1;goto B5649f8;
case 0x5649fe:goto L5649fe;
case 0x564a04:goto L564a04;
case 0x564a0a:c.instructions+=1;goto B564a0a;
case 0x564a0c:goto L564a0c;
case 0x564a12:goto L564a12;
case 0x564a18:goto L564a18;
case 0x564a1a:c.instructions+=1;goto B564a1a;
case 0x564a1f:goto L564a1f;
case 0x564a20:c.instructions+=4;goto B564a20;
case 0x564a21:c.instructions+=3;goto B564a21;
case 0x564a22:c.instructions+=2;goto B564a22;
case 0x564a23:c.instructions+=1;goto B564a23;
case 0x564a26:goto L564a26;
case 0x564a2b:c.instructions+=1;goto B564a2b;
case 0x564a30:goto L564a30;
case 0x564a33:c.instructions+=2;goto B564a33;
case 0x564a35:c.instructions+=1;goto B564a35;
case 0x564a37:goto L564a37;
case 0x564a3c:c.instructions+=1;goto B564a3c;
case 0x564a41:goto L564a41;
case 0x564a44:goto L564a44;
case 0x564a49:c.instructions+=1;goto B564a49;
case 0x564a4e:goto L564a4e;
case 0x564a50:c.instructions+=3;goto B564a50;
case 0x564a55:c.instructions+=2;goto B564a55;
case 0x564a5c:c.instructions+=1;goto B564a5c;
case 0x564a61:goto L564a61;
case 0x564a67:c.instructions+=3;goto B564a67;
case 0x564a69:c.instructions+=2;goto B564a69;
case 0x564a73:c.instructions+=1;goto B564a73;
case 0x564a78:goto L564a78;
case 0x564a7e:c.instructions+=3;goto B564a7e;
case 0x564a85:c.instructions+=2;goto B564a85;
case 0x564a8b:c.instructions+=1;goto B564a8b;
case 0x564a90:goto L564a90;
case 0x564a92:c.instructions+=8;goto B564a92;
case 0x564a93:c.instructions+=7;goto B564a93;
case 0x564a94:c.instructions+=6;goto B564a94;
case 0x564a96:c.instructions+=5;goto B564a96;
case 0x564a98:c.instructions+=4;goto B564a98;
case 0x564a9b:c.instructions+=3;goto B564a9b;
case 0x564a9c:c.instructions+=2;goto B564a9c;
case 0x564a9d:c.instructions+=1;goto B564a9d;
case 0x564aa0:goto L564aa0;
case 0x564aa6:c.instructions+=3;goto B564aa6;
case 0x564aa7:c.instructions+=2;goto B564aa7;
case 0x564aac:c.instructions+=1;goto B564aac;
case 0x564ab1:goto L564ab1;
case 0x564ab3:c.instructions+=1;goto B564ab3;
case 0x564ab8:goto L564ab8;
case 0x564ab9:c.instructions+=4;goto B564ab9;
case 0x564aba:c.instructions+=3;goto B564aba;
case 0x564abb:c.instructions+=2;goto B564abb;
case 0x564abc:c.instructions+=1;goto B564abc;
case 0x564abf:goto L564abf;
case 0x564ac5:c.instructions+=1;goto B564ac5;
case 0x564acb:goto L564acb;
case 0x564ad0:goto L564ad0;
case 0x564ad3:c.instructions+=3;goto B564ad3;
case 0x564ad4:c.instructions+=2;goto B564ad4;
case 0x564ad9:c.instructions+=1;goto B564ad9;
case 0x564ade:goto L564ade;
case 0x564ae3:c.instructions+=1;goto B564ae3;
case 0x564ae8:goto L564ae8;
case 0x564aeb:c.instructions+=2;goto B564aeb;
case 0x564aed:c.instructions+=1;goto B564aed;
case 0x564aef:goto L564aef;
case 0x564af2:c.instructions+=5;goto B564af2;
case 0x564af4:c.instructions+=4;goto B564af4;
case 0x564af9:c.instructions+=3;goto B564af9;
case 0x564afa:c.instructions+=2;goto B564afa;
case 0x564aff:c.instructions+=1;goto B564aff;
case 0x564b04:goto L564b04;
case 0x564b07:goto L564b07;
case 0x564b0a:c.instructions+=5;goto B564b0a;
case 0x564b0d:c.instructions+=4;goto B564b0d;
case 0x564b13:c.instructions+=3;goto B564b13;
case 0x564b14:c.instructions+=2;goto B564b14;
case 0x564b15:c.instructions+=1;goto B564b15;
case 0x564b1a:goto L564b1a;
case 0x564b1b:c.instructions+=4;goto B564b1b;
case 0x564b1c:c.instructions+=3;goto B564b1c;
case 0x564b1d:c.instructions+=2;goto B564b1d;
case 0x564b1e:c.instructions+=1;goto B564b1e;
case 0x564b21:goto L564b21;
case 0x564b27:c.instructions+=1;goto B564b27;
case 0x564b2d:goto L564b2d;
case 0x564b33:goto L564b33;
case 0x564b39:c.instructions+=1;goto B564b39;
case 0x564b3f:goto L564b3f;
case 0x564b45:c.instructions+=1;goto B564b45;
case 0x564b4b:goto L564b4b;
case 0x564b50:c.instructions+=2;goto B564b50;
case 0x564b52:c.instructions+=1;goto B564b52;
case 0x564b58:goto L564b58;
case 0x564b5b:c.instructions+=7;goto B564b5b;
case 0x564b5e:c.instructions+=6;goto B564b5e;
case 0x564b5f:c.instructions+=5;goto B564b5f;
case 0x564b60:c.instructions+=4;goto B564b60;
case 0x564b61:c.instructions+=3;goto B564b61;
case 0x564b62:c.instructions+=2;goto B564b62;
case 0x564b64:c.instructions+=1;goto B564b64;
case 0x564b69:goto L564b69;
case 0x564b6b:c.instructions+=1;goto B564b6b;
case 0x564b70:goto L564b70;
case 0x564b72:c.instructions+=1;goto B564b72;
case 0x564b78:goto L564b78;
case 0x564b7b:c.instructions+=4;goto B564b7b;
case 0x564b80:c.instructions+=3;goto B564b80;
case 0x564b85:c.instructions+=2;goto B564b85;
case 0x564b86:c.instructions+=1;goto B564b86;
case 0x564b8b:goto L564b8b;
case 0x564b8e:c.instructions+=2;goto B564b8e;
case 0x564b90:c.instructions+=1;goto B564b90;
case 0x564b96:goto L564b96;
case 0x564b99:c.instructions+=5;goto B564b99;
case 0x564b9b:c.instructions+=4;goto B564b9b;
case 0x564ba0:c.instructions+=3;goto B564ba0;
case 0x564ba5:c.instructions+=2;goto B564ba5;
case 0x564ba6:c.instructions+=1;goto B564ba6;
case 0x564bab:goto L564bab;
case 0x564bb0:c.instructions+=1;goto B564bb0;
case 0x564bb5:goto L564bb5;
case 0x564bb8:c.instructions+=1;goto B564bb8;
case 0x564bbd:goto L564bbd;
case 0x564bc2:c.instructions+=1;goto B564bc2;
case 0x564bc7:goto L564bc7;
case 0x564bca:c.instructions+=2;goto B564bca;
case 0x564bcc:c.instructions+=1;goto B564bcc;
case 0x564bce:goto L564bce;
case 0x564bd3:c.instructions+=1;goto B564bd3;
case 0x564bd8:goto L564bd8;
case 0x564bdb:goto L564bdb;
case 0x564be0:c.instructions+=1;goto B564be0;
case 0x564be5:goto L564be5;
case 0x564beb:c.instructions+=2;goto B564beb;
case 0x564bed:c.instructions+=1;goto B564bed;
case 0x564bf2:goto L564bf2;
case 0x564bf5:c.instructions+=3;goto B564bf5;
case 0x564bf7:c.instructions+=2;goto B564bf7;
case 0x564bf8:c.instructions+=1;goto B564bf8;
case 0x564bfd:goto L564bfd;
case 0x564c00:c.instructions+=5;goto B564c00;
case 0x564c01:c.instructions+=4;goto B564c01;
case 0x564c02:c.instructions+=3;goto B564c02;
case 0x564c03:c.instructions+=2;goto B564c03;
case 0x564c04:c.instructions+=1;goto B564c04;
case 0x564c07:goto L564c07;
case 0x564c0d:c.instructions+=1;goto B564c0d;
case 0x564c0f:goto L564c0f;
case 0x564c15:c.instructions+=2;goto B564c15;
case 0x564c1a:c.instructions+=1;goto B564c1a;
case 0x564c1c:goto L564c1c;
case 0x564c21:c.instructions+=1;goto B564c21;
case 0x564c23:goto L564c23;
case 0x564c28:c.instructions+=1;goto B564c28;
case 0x564c2d:goto L564c2d;
case 0x564c30:c.instructions+=2;goto B564c30;
case 0x564c32:c.instructions+=1;goto B564c32;
case 0x564c34:goto L564c34;
case 0x564c39:c.instructions+=1;goto B564c39;
case 0x564c3e:goto L564c3e;
case 0x564c41:goto L564c41;
case 0x564c47:c.instructions+=2;goto B564c47;
case 0x564c49:c.instructions+=1;goto B564c49;
case 0x564c4e:goto L564c4e;
case 0x564c51:c.instructions+=3;goto B564c51;
case 0x564c53:c.instructions+=2;goto B564c53;
case 0x564c54:c.instructions+=1;goto B564c54;
case 0x564c59:goto L564c59;
case 0x564c5e:c.instructions+=1;goto B564c5e;
case 0x564c63:goto L564c63;
case 0x564c66:goto L564c66;
case 0x564c68:c.instructions+=1;goto B564c68;
case 0x564c6a:goto L564c6a;
case 0x564c6f:c.instructions+=1;goto B564c6f;
case 0x564c74:goto L564c74;
case 0x564c77:goto L564c77;
case 0x564c78:goto L564c78;
case 0x564c79:c.instructions+=3;goto B564c79;
case 0x564c7a:c.instructions+=2;goto B564c7a;
case 0x564c7b:c.instructions+=1;goto B564c7b;
case 0x564c80:goto L564c80;
case 0x564c88:c.instructions+=1;goto B564c88;
case 0x564c8a:goto L564c8a;
case 0x564c8b:c.instructions+=11;goto B564c8b;
case 0x564c8f:c.instructions+=10;goto B564c8f;
case 0x564c94:c.instructions+=9;goto B564c94;
case 0x564c96:c.instructions+=8;goto B564c96;
case 0x564c9b:c.instructions+=7;goto B564c9b;
case 0x564ca0:c.instructions+=6;goto B564ca0;
case 0x564ca5:c.instructions+=5;goto B564ca5;
case 0x564caa:c.instructions+=4;goto B564caa;
case 0x564caf:c.instructions+=3;goto B564caf;
case 0x564cb4:c.instructions+=2;goto B564cb4;
case 0x564cb5:c.instructions+=1;goto B564cb5;
case 0x564cba:goto L564cba;
case 0x564cbd:c.instructions+=3;goto B564cbd;
case 0x564cbe:c.instructions+=2;goto B564cbe;
case 0x564cc3:c.instructions+=1;goto B564cc3;
case 0x564cc8:goto L564cc8;
case 0x564cca:c.instructions+=2;goto B564cca;
case 0x564ccb:c.instructions+=1;goto B564ccb;
case 0x564ccd:goto L564ccd;
case 0x564cd0:c.instructions+=2;goto B564cd0;
case 0x564cd2:c.instructions+=1;goto B564cd2;
case 0x564cd4:goto L564cd4;
case 0x564cd7:c.instructions+=2;goto B564cd7;
case 0x564cd9:c.instructions+=1;goto B564cd9;
case 0x564cdb:goto L564cdb;
case 0x564cdc:c.instructions+=5;goto B564cdc;
case 0x564cde:c.instructions+=4;goto B564cde;
case 0x564ce0:c.instructions+=3;goto B564ce0;
case 0x564ce5:c.instructions+=2;goto B564ce5;
case 0x564ce7:c.instructions+=1;goto B564ce7;
case 0x564cec:goto L564cec;
case 0x564cf0:goto L564cf0;
case 0x564cf8:c.instructions+=1;goto B564cf8;
case 0x564cfa:goto L564cfa;
case 0x564cfb:c.instructions+=11;goto B564cfb;
case 0x564cff:c.instructions+=10;goto B564cff;
case 0x564d04:c.instructions+=9;goto B564d04;
case 0x564d06:c.instructions+=8;goto B564d06;
case 0x564d0b:c.instructions+=7;goto B564d0b;
case 0x564d10:c.instructions+=6;goto B564d10;
case 0x564d15:c.instructions+=5;goto B564d15;
case 0x564d1a:c.instructions+=4;goto B564d1a;
case 0x564d1f:c.instructions+=3;goto B564d1f;
case 0x564d24:c.instructions+=2;goto B564d24;
case 0x564d25:c.instructions+=1;goto B564d25;
case 0x564d2a:goto L564d2a;
case 0x564d2d:c.instructions+=3;goto B564d2d;
case 0x564d2e:c.instructions+=2;goto B564d2e;
case 0x564d33:c.instructions+=1;goto B564d33;
case 0x564d38:goto L564d38;
case 0x564d3a:c.instructions+=2;goto B564d3a;
case 0x564d3b:c.instructions+=1;goto B564d3b;
case 0x564d3d:goto L564d3d;
case 0x564d40:c.instructions+=2;goto B564d40;
case 0x564d42:c.instructions+=1;goto B564d42;
case 0x564d44:goto L564d44;
case 0x564d47:c.instructions+=2;goto B564d47;
case 0x564d49:c.instructions+=1;goto B564d49;
case 0x564d4b:goto L564d4b;
case 0x564d4c:c.instructions+=5;goto B564d4c;
case 0x564d4e:c.instructions+=4;goto B564d4e;
case 0x564d50:c.instructions+=3;goto B564d50;
case 0x564d55:c.instructions+=2;goto B564d55;
case 0x564d57:c.instructions+=1;goto B564d57;
case 0x564d5c:goto L564d5c;
case 0x564d60:goto L564d60;
case 0x564d68:c.instructions+=1;goto B564d68;
case 0x564d6a:goto L564d6a;
case 0x564d6b:c.instructions+=11;goto B564d6b;
case 0x564d6f:c.instructions+=10;goto B564d6f;
case 0x564d74:c.instructions+=9;goto B564d74;
case 0x564d76:c.instructions+=8;goto B564d76;
case 0x564d7b:c.instructions+=7;goto B564d7b;
case 0x564d80:c.instructions+=6;goto B564d80;
case 0x564d85:c.instructions+=5;goto B564d85;
case 0x564d8a:c.instructions+=4;goto B564d8a;
case 0x564d8f:c.instructions+=3;goto B564d8f;
case 0x564d94:c.instructions+=2;goto B564d94;
case 0x564d95:c.instructions+=1;goto B564d95;
case 0x564d9a:goto L564d9a;
case 0x564d9d:c.instructions+=3;goto B564d9d;
case 0x564d9e:c.instructions+=2;goto B564d9e;
case 0x564da3:c.instructions+=1;goto B564da3;
case 0x564da8:goto L564da8;
case 0x564daa:c.instructions+=2;goto B564daa;
case 0x564dab:c.instructions+=1;goto B564dab;
case 0x564dad:goto L564dad;
case 0x564db0:c.instructions+=2;goto B564db0;
case 0x564db2:c.instructions+=1;goto B564db2;
case 0x564db4:goto L564db4;
case 0x564db7:c.instructions+=2;goto B564db7;
case 0x564db9:c.instructions+=1;goto B564db9;
case 0x564dbb:goto L564dbb;
case 0x564dbc:c.instructions+=5;goto B564dbc;
case 0x564dbe:c.instructions+=4;goto B564dbe;
case 0x564dc0:c.instructions+=3;goto B564dc0;
case 0x564dc5:c.instructions+=2;goto B564dc5;
case 0x564dc7:c.instructions+=1;goto B564dc7;
case 0x564dcc:goto L564dcc;
case 0x564dd0:goto L564dd0;
case 0x564dd1:c.instructions+=3;goto B564dd1;
case 0x564dd3:c.instructions+=2;goto B564dd3;
case 0x564dda:c.instructions+=1;goto B564dda;
case 0x564de0:goto L564de0;
case 0x564de6:c.instructions+=7;goto B564de6;
case 0x564deb:c.instructions+=6;goto B564deb;
case 0x564df2:c.instructions+=5;goto B564df2;
case 0x564df8:c.instructions+=4;goto B564df8;
case 0x564dfd:c.instructions+=3;goto B564dfd;
case 0x564e00:c.instructions+=2;goto B564e00;
case 0x564e01:c.instructions+=1;goto B564e01;
case 0x564e06:goto L564e06;
case 0x564e0c:c.instructions+=3;goto B564e0c;
case 0x564e12:c.instructions+=2;goto B564e12;
case 0x564e17:c.instructions+=1;goto B564e17;
case 0x564e19:goto L564e19;
case 0x564e1e:c.instructions+=1;goto B564e1e;
case 0x564e20:goto L564e20;
case 0x564e23:c.instructions+=1;goto B564e23;
case 0x564e25:goto L564e25;
case 0x564e2a:c.instructions+=4;goto B564e2a;
case 0x564e2c:c.instructions+=3;goto B564e2c;
case 0x564e2e:c.instructions+=2;goto B564e2e;
case 0x564e33:c.instructions+=1;goto B564e33;
case 0x564e38:goto L564e38;
case 0x564e39:c.instructions+=11;goto B564e39;
case 0x564e3c:c.instructions+=10;goto B564e3c;
case 0x564e3d:c.instructions+=9;goto B564e3d;
case 0x564e3f:c.instructions+=8;goto B564e3f;
case 0x564e44:c.instructions+=7;goto B564e44;
case 0x564e49:c.instructions+=6;goto B564e49;
case 0x564e4e:c.instructions+=5;goto B564e4e;
case 0x564e53:c.instructions+=4;goto B564e53;
case 0x564e58:c.instructions+=3;goto B564e58;
case 0x564e5d:c.instructions+=2;goto B564e5d;
case 0x564e5e:c.instructions+=1;goto B564e5e;
case 0x564e63:goto L564e63;
case 0x564e66:c.instructions+=3;goto B564e66;
case 0x564e67:c.instructions+=2;goto B564e67;
case 0x564e6c:c.instructions+=1;goto B564e6c;
case 0x564e71:goto L564e71;
case 0x564e73:c.instructions+=2;goto B564e73;
case 0x564e74:c.instructions+=1;goto B564e74;
case 0x564e76:goto L564e76;
case 0x564e79:c.instructions+=2;goto B564e79;
case 0x564e7b:c.instructions+=1;goto B564e7b;
case 0x564e7d:goto L564e7d;
case 0x564e80:c.instructions+=2;goto B564e80;
case 0x564e82:c.instructions+=1;goto B564e82;
case 0x564e84:goto L564e84;
case 0x564e85:c.instructions+=5;goto B564e85;
case 0x564e87:c.instructions+=4;goto B564e87;
case 0x564e89:c.instructions+=3;goto B564e89;
case 0x564e8e:c.instructions+=2;goto B564e8e;
case 0x564e90:c.instructions+=1;goto B564e90;
case 0x564e95:goto L564e95;
case 0x564e96:c.instructions+=1;goto B564e96;
case 0x564ea0:goto L564ea0;
case 0x564ea1:c.instructions+=11;goto B564ea1;
case 0x564ea5:c.instructions+=10;goto B564ea5;
case 0x564eaa:c.instructions+=9;goto B564eaa;
case 0x564eac:c.instructions+=8;goto B564eac;
case 0x564eb1:c.instructions+=7;goto B564eb1;
case 0x564eb6:c.instructions+=6;goto B564eb6;
case 0x564ebb:c.instructions+=5;goto B564ebb;
case 0x564ec0:c.instructions+=4;goto B564ec0;
case 0x564ec5:c.instructions+=3;goto B564ec5;
case 0x564eca:c.instructions+=2;goto B564eca;
case 0x564ecb:c.instructions+=1;goto B564ecb;
case 0x564ed0:goto L564ed0;
case 0x564ed3:c.instructions+=3;goto B564ed3;
case 0x564ed4:c.instructions+=2;goto B564ed4;
case 0x564ed9:c.instructions+=1;goto B564ed9;
case 0x564ede:goto L564ede;
case 0x564ee0:c.instructions+=2;goto B564ee0;
case 0x564ee1:c.instructions+=1;goto B564ee1;
case 0x564ee3:goto L564ee3;
case 0x564ee6:c.instructions+=2;goto B564ee6;
case 0x564ee8:c.instructions+=1;goto B564ee8;
case 0x564eea:goto L564eea;
case 0x564eed:c.instructions+=2;goto B564eed;
case 0x564eef:c.instructions+=1;goto B564eef;
case 0x564ef1:goto L564ef1;
case 0x564ef2:c.instructions+=5;goto B564ef2;
case 0x564ef4:c.instructions+=4;goto B564ef4;
case 0x564ef6:c.instructions+=3;goto B564ef6;
case 0x564efb:c.instructions+=2;goto B564efb;
case 0x564efd:c.instructions+=1;goto B564efd;
case 0x564f02:goto L564f02;
case 0x564f10:goto L564f10;
case 0x564f11:c.instructions+=8;goto B564f11;
case 0x564f13:c.instructions+=7;goto B564f13;
case 0x564f14:c.instructions+=6;goto B564f14;
case 0x564f15:c.instructions+=5;goto B564f15;
case 0x564f16:c.instructions+=4;goto B564f16;
case 0x564f19:c.instructions+=3;goto B564f19;
case 0x564f1f:c.instructions+=2;goto B564f1f;
case 0x564f21:c.instructions+=1;goto B564f21;
case 0x564f23:goto L564f23;
case 0x564f29:c.instructions+=1;goto B564f29;
case 0x564f2f:goto L564f2f;
case 0x564f32:c.instructions+=5;goto B564f32;
case 0x564f33:c.instructions+=4;goto B564f33;
case 0x564f36:c.instructions+=3;goto B564f36;
case 0x564f37:c.instructions+=2;goto B564f37;
case 0x564f39:c.instructions+=1;goto B564f39;
case 0x564f3c:goto L564f3c;
case 0x564f42:c.instructions+=5;goto B564f42;
case 0x564f45:c.instructions+=4;goto B564f45;
case 0x564f48:c.instructions+=3;goto B564f48;
case 0x564f4e:c.instructions+=2;goto B564f4e;
case 0x564f4f:c.instructions+=1;goto B564f4f;
case 0x564f54:goto L564f54;
case 0x564f56:c.instructions+=1;goto B564f56;
case 0x564f58:goto L564f58;
case 0x564f5b:c.instructions+=6;goto B564f5b;
case 0x564f61:c.instructions+=5;goto B564f61;
case 0x564f63:c.instructions+=4;goto B564f63;
case 0x564f65:c.instructions+=3;goto B564f65;
case 0x564f66:c.instructions+=2;goto B564f66;
case 0x564f67:c.instructions+=1;goto B564f67;
case 0x564f6c:goto L564f6c;
case 0x564f6f:c.instructions+=3;goto B564f6f;
case 0x564f75:c.instructions+=2;goto B564f75;
case 0x564f76:c.instructions+=1;goto B564f76;
case 0x564f7b:goto L564f7b;
case 0x564f7d:c.instructions+=1;goto B564f7d;
case 0x564f7f:goto L564f7f;
case 0x564f85:c.instructions+=4;goto B564f85;
case 0x564f87:c.instructions+=3;goto B564f87;
case 0x564f89:c.instructions+=2;goto B564f89;
case 0x564f8a:c.instructions+=1;goto B564f8a;
case 0x564f8f:goto L564f8f;
case 0x564f91:goto L564f91;
case 0x564f97:goto L564f97;
case 0x564f9a:c.instructions+=6;goto B564f9a;
case 0x564f9d:c.instructions+=5;goto B564f9d;
case 0x564fa0:c.instructions+=4;goto B564fa0;
case 0x564fa3:c.instructions+=3;goto B564fa3;
case 0x564fa5:c.instructions+=2;goto B564fa5;
case 0x564fa8:c.instructions+=1;goto B564fa8;
case 0x564faa:goto L564faa;
case 0x564fad:c.instructions+=1;goto B564fad;
case 0x564fb0:goto L564fb0;
case 0x564fb3:c.instructions+=5;goto B564fb3;
case 0x564fb6:c.instructions+=4;goto B564fb6;
case 0x564fb9:c.instructions+=3;goto B564fb9;
case 0x564fbb:c.instructions+=2;goto B564fbb;
case 0x564fbe:c.instructions+=1;goto B564fbe;
case 0x564fc0:goto L564fc0;
case 0x564fc3:c.instructions+=1;goto B564fc3;
case 0x564fc6:goto L564fc6;
case 0x564fc7:goto L564fc7;
case 0x564fca:c.instructions+=2;goto B564fca;
case 0x564fcd:c.instructions+=1;goto B564fcd;
case 0x564fcf:goto L564fcf;
case 0x564fd2:c.instructions+=1;goto B564fd2;
case 0x564fd4:goto L564fd4;
case 0x564fd7:c.instructions+=3;goto B564fd7;
case 0x564fd8:c.instructions+=2;goto B564fd8;
case 0x564fdd:c.instructions+=1;goto B564fdd;
case 0x564fe2:goto L564fe2;
case 0x564fe4:c.instructions+=1;goto B564fe4;
case 0x564fe6:goto L564fe6;
case 0x564fe9:c.instructions+=2;goto B564fe9;
case 0x564feb:c.instructions+=1;goto B564feb;
case 0x564fed:goto L564fed;
case 0x564ff0:c.instructions+=2;goto B564ff0;
case 0x564ff2:c.instructions+=1;goto B564ff2;
case 0x564ff4:goto L564ff4;
case 0x564ff5:c.instructions+=4;goto B564ff5;
case 0x564ff7:c.instructions+=3;goto B564ff7;
case 0x564ff9:c.instructions+=2;goto B564ff9;
case 0x564ffe:c.instructions+=1;goto B564ffe;
default:missing_instruction(c.pc);}
B564003:L564003:{c.instructions+=1;NFSU2_TR(0x564003);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5644c9;}}
}
B564009:L564009:{c.instructions+=3;NFSU2_TR(0x564009);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56400a:{NFSU2_TR(0x56400a);
__builtin_memmove((R+4),(R+24),4);
}
B56400c:{NFSU2_TR(0x56400c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x564011ull));
TAIL_STATIC(0x55d660u,55d);
}
B564011:L564011:{c.instructions+=5;NFSU2_TR(0x564011);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B564012:{NFSU2_TR(0x564012);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B564013:{NFSU2_TR(0x564013);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B564014:{NFSU2_TR(0x564014);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B564015:{NFSU2_TR(0x564015);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B564018:L564018:{c.instructions+=5;NFSU2_TR(0x564018);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B56401b:{NFSU2_TR(0x56401b);
u8 U[4];
w4(U+0,u32(0xde6eff34ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B564020:{NFSU2_TR(0x564020);
u8 U[4];
w4(U+0,u32(0x47ff4e7cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B564025:{NFSU2_TR(0x564025);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B564026:{NFSU2_TR(0x564026);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56402bull));
TAIL_STATIC(0x537d40u,537);
}
B56402b:L56402b:{c.instructions+=3;NFSU2_TR(0x56402b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B56402e:{NFSU2_TR(0x56402e);
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
B564030:{NFSU2_TR(0x564030);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5644c9;}}
}
B564036:L564036:{c.instructions+=3;NFSU2_TR(0x564036);
u8 U[4];
w4(U+0,u32(0x799c18ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56403b:{NFSU2_TR(0x56403b);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x12aull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B564042:{NFSU2_TR(0x564042);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x564047ull));
TAIL_STATIC(0x5379a0u,537);
}
B564047:L564047:{c.instructions+=5;NFSU2_TR(0x564047);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B56404a:{NFSU2_TR(0x56404a);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((R+4),(U+0),4);
}
B56404d:{NFSU2_TR(0x56404d);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56404f:{NFSU2_TR(0x56404f);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2full))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B564053:{NFSU2_TR(0x564053);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x564058ull));
TAIL_STATIC(0x52eb90u,52e);
}
B564058:L564058:{c.instructions+=6;NFSU2_TR(0x564058);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B56405b:{NFSU2_TR(0x56405b);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56405c:{NFSU2_TR(0x56405c);
u8 U[4];
w4(U+0,u32(0xde6eff34ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B564061:{NFSU2_TR(0x564061);
u8 U[4];
w4(U+0,u32(0x47ff4e7cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B564066:{NFSU2_TR(0x564066);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B564067:{NFSU2_TR(0x564067);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56406cull));
TAIL_STATIC(0x537c60u,537);
}
B56406c:L56406c:{c.instructions+=6;NFSU2_TR(0x56406c);
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
B56406f:{NFSU2_TR(0x56406f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B564070:{NFSU2_TR(0x564070);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B564071:{NFSU2_TR(0x564071);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B564072:{NFSU2_TR(0x564072);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B564073:{NFSU2_TR(0x564073);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B564076:L564076:{c.instructions+=3;NFSU2_TR(0x564076);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B564078:{NFSU2_TR(0x564078);
__builtin_memmove((R+4),(R+24),4);
}
B56407a:{NFSU2_TR(0x56407a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56407full));
TAIL_STATIC(0x55d660u,55d);
}
B56407f:L56407f:{c.instructions+=5;NFSU2_TR(0x56407f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B564080:{NFSU2_TR(0x564080);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B564081:{NFSU2_TR(0x564081);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B564082:{NFSU2_TR(0x564082);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B564083:{NFSU2_TR(0x564083);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B564086:L564086:{c.instructions+=2;NFSU2_TR(0x564086);
u8 U[4];
w1(R+512,u8((r4(R+0))<(u32(0xb4edeb6dull))));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xb4edeb6dull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B56408b:{NFSU2_TR(0x56408b);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L564393;}}
}
B564091:L564091:{c.instructions+=1;NFSU2_TR(0x564091);
if(r1(R+518)){{goto L564328;}}
}
B564097:L564097:{c.instructions+=2;NFSU2_TR(0x564097);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x9803f6e2ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B56409c:{NFSU2_TR(0x56409c);
if(r1(R+518)){{goto L5642ac;}}
}
B5640a2:L5640a2:{c.instructions+=2;NFSU2_TR(0x5640a2);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x9e382ecdull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5640a7:{NFSU2_TR(0x5640a7);
if(r1(R+518)){TAIL_STATIC(0x563d5cu,563);}
}
B5640ad:L5640ad:{c.instructions+=2;NFSU2_TR(0x5640ad);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0xb4623f67ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0xb4623f67ull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0xb4623f67ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5640b2:{NFSU2_TR(0x5640b2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5644c9;}}
}
B5640b8:L5640b8:{c.instructions+=5;NFSU2_TR(0x5640b8);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5640b9:{NFSU2_TR(0x5640b9);
u8 U[4];
w4(U+0,u32(0x79031cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5640be:{NFSU2_TR(0x5640be);
u8 U[4];
w4(U+0,u32(0x47ff4e7cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5640c3:{NFSU2_TR(0x5640c3);
u8 U[4];
w4(U+0,u32(0x799ab8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5640c8:{NFSU2_TR(0x5640c8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5640cdull));
TAIL_STATIC(0x537c00u,537);
}
B5640cd:L5640cd:{c.instructions+=6;NFSU2_TR(0x5640cd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5640d0:{NFSU2_TR(0x5640d0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5640d1:{NFSU2_TR(0x5640d1);
u8 U[4];
w4(U+0,u32(0x79031cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5640d6:{NFSU2_TR(0x5640d6);
u8 U[4];
w4(U+0,u32(0x47ff4e7cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5640db:{NFSU2_TR(0x5640db);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5640dc:{NFSU2_TR(0x5640dc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5640e1ull));
TAIL_STATIC(0x537c00u,537);
}
B5640e1:L5640e1:{c.instructions+=5;NFSU2_TR(0x5640e1);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5640e2:{NFSU2_TR(0x5640e2);
u8 U[4];
w4(U+0,u32(0x79031cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5640e7:{NFSU2_TR(0x5640e7);
u8 U[4];
w4(U+0,u32(0x47ff4e7cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5640ec:{NFSU2_TR(0x5640ec);
u8 U[4];
w4(U+0,u32(0x79d818ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5640f1:{NFSU2_TR(0x5640f1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5640f6ull));
TAIL_STATIC(0x537c00u,537);
}
B5640f6:L5640f6:{c.instructions+=4;NFSU2_TR(0x5640f6);
__builtin_memmove((R+0),gp(0x838560),4);
}
B5640fb:{NFSU2_TR(0x5640fb);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x30ull))));
}
B5640fe:{NFSU2_TR(0x5640fe);
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
B564100:{NFSU2_TR(0x564100);
if(r1(R+518)){{goto L5644c9;}}
}
B564106:L564106:{c.instructions+=3;NFSU2_TR(0x564106);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B564108:{NFSU2_TR(0x564108);
u8 U[4];
w4(U+0,u32(0x799a58ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56410d:{NFSU2_TR(0x56410d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x564112ull));
TAIL_STATIC(0x537950u,537);
}
B564112:L564112:{c.instructions+=3;NFSU2_TR(0x564112);
u8 U[4];
w4(U+0,u32(0xffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B564117:{NFSU2_TR(0x564117);
u8 U[4];
w4(U+0,u32(0x799c18ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56411c:{NFSU2_TR(0x56411c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x564121ull));
TAIL_STATIC(0x537950u,537);
}
B564121:L564121:{c.instructions+=7;NFSU2_TR(0x564121);
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
B564124:{NFSU2_TR(0x564124);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B564125:{NFSU2_TR(0x564125);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B564126:{NFSU2_TR(0x564126);
s4(0x838560,u32(0x4ull));
}
B564130:{NFSU2_TR(0x564130);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B564131:{NFSU2_TR(0x564131);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B564132:{NFSU2_TR(0x564132);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B564135:L564135:{c.instructions+=5;NFSU2_TR(0x564135);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B564138:{NFSU2_TR(0x564138);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B56413b:{NFSU2_TR(0x56413b);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56413d:{NFSU2_TR(0x56413d);
u8 U[4];
w4(U+0,u32(0x311151f8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B564142:{NFSU2_TR(0x564142);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x564147ull));
TAIL_STATIC(0x61b500u,61b);
}
B564147:L564147:{c.instructions+=4;NFSU2_TR(0x564147);
__builtin_memmove((R+28),(R+0),4);
}
B564149:{NFSU2_TR(0x564149);
__builtin_memmove((R+0),gp(0x838560),4);
}
B56414e:{NFSU2_TR(0x56414e);
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
B564150:{NFSU2_TR(0x564150);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L564182;}}
}
B564152:L564152:{c.instructions+=2;NFSU2_TR(0x564152);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B564154:{NFSU2_TR(0x564154);
if(r1(R+518)){{goto L564180;}}
}
B564156:L564156:{c.instructions+=3;NFSU2_TR(0x564156);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x128ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B56415c:{NFSU2_TR(0x56415c);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B56415e:{NFSU2_TR(0x56415e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L564180;}}
}
B564160:L564160:{c.instructions+=3;NFSU2_TR(0x564160);
u8 U[4];
w4(U+0,u32(0x799c18ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B564165:{NFSU2_TR(0x564165);
u8 U[4];
w4(U+0,u32(0xfd7c68d8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56416a:{NFSU2_TR(0x56416a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56416full));
TAIL_STATIC(0x55dda0u,55d);
}
B56416f:L56416f:{c.instructions+=7;NFSU2_TR(0x56416f);
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
B564172:{NFSU2_TR(0x564172);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B564173:{NFSU2_TR(0x564173);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x128ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B56417a:{NFSU2_TR(0x56417a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B56417b:{NFSU2_TR(0x56417b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B56417c:{NFSU2_TR(0x56417c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B56417d:{NFSU2_TR(0x56417d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B564180:L564180:{c.instructions+=1;NFSU2_TR(0x564180);
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
B564182:L564182:{c.instructions+=1;NFSU2_TR(0x564182);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5644c9;}}
}
B564188:L564188:{c.instructions+=9;NFSU2_TR(0x564188);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B56418b:{NFSU2_TR(0x56418b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x110ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B564191:{NFSU2_TR(0x564191);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B564194:{NFSU2_TR(0x564194);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B564197:{NFSU2_TR(0x564197);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B564198:{NFSU2_TR(0x564198);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B564199:{NFSU2_TR(0x564199);
w4(R+4,u32(0x838980ull));
}
B56419e:{NFSU2_TR(0x56419e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5641a1:{NFSU2_TR(0x5641a1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5641a6ull));
TAIL_STATIC(0x50f1b0u,50f);
}
B5641a6:L5641a6:{c.instructions+=2;NFSU2_TR(0x5641a6);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5641a8:{NFSU2_TR(0x5641a8);
if(r1(R+518)){{goto L5641eb;}}
}
B5641aa:L5641aa:{c.instructions+=2;NFSU2_TR(0x5641aa);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5641ac:{NFSU2_TR(0x5641ac);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5641eb;}}
}
B5641ae:L5641ae:{c.instructions+=8;NFSU2_TR(0x5641ae);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5641b1:{NFSU2_TR(0x5641b1);
u8 U[4];
w4(U+0,u32(0xda15d7e5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5641b6:{NFSU2_TR(0x5641b6);
u8 U[4];
w4(U+0,u32(0xb4edeb6dull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5641bb:{NFSU2_TR(0x5641bb);
u8 U[4];
w4(U+0,u32(0xb4edeb6dull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5641c0:{NFSU2_TR(0x5641c0);
u8 U[4];
w4(U+0,u32(0x639ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5641c5:{NFSU2_TR(0x5641c5);
u8 U[4];
w4(U+0,u32(0x78fa24ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5641ca:{NFSU2_TR(0x5641ca);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5641cb:{NFSU2_TR(0x5641cb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5641d0ull));
TAIL_STATIC(0x558570u,558);
}
B5641d0:L5641d0:{c.instructions+=4;NFSU2_TR(0x5641d0);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B5641d3:{NFSU2_TR(0x5641d3);
__builtin_memmove((R+4),(R+24),4);
}
B5641d5:{NFSU2_TR(0x5641d5);
s4(0x838970,u32(0xb4edeb6dull));
}
B5641df:{NFSU2_TR(0x5641df);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5641e4ull));
TAIL_STATIC(0x560b60u,560);
}
B5641e4:L5641e4:{c.instructions+=5;NFSU2_TR(0x5641e4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5641e5:{NFSU2_TR(0x5641e5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5641e6:{NFSU2_TR(0x5641e6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5641e7:{NFSU2_TR(0x5641e7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5641e8:{NFSU2_TR(0x5641e8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5641eb:L5641eb:{c.instructions+=2;NFSU2_TR(0x5641eb);
u8 U[8];
__builtin_memmove((U+0),gp(0x850078),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5641f2:{NFSU2_TR(0x5641f2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L564263;}}
}
B5641f4:L5641f4:{c.instructions+=2;NFSU2_TR(0x5641f4);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5641f6:{NFSU2_TR(0x5641f6);
if(r1(R+518)){{goto L564263;}}
}
B5641f8:L5641f8:{c.instructions+=6;NFSU2_TR(0x5641f8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5641fb:{NFSU2_TR(0x5641fb);
__builtin_memmove((R+28),gp(0x861e74),4);
}
B564201:{NFSU2_TR(0x564201);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B564202:{NFSU2_TR(0x564202);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B564203:{NFSU2_TR(0x564203);
w4(R+4,u32(0x85ad40ull));
}
B564208:{NFSU2_TR(0x564208);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56420dull));
TAIL_STATIC(0x514280u,514);
}
B56420d:L56420d:{c.instructions+=2;NFSU2_TR(0x56420d);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+0)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B56420f:{NFSU2_TR(0x56420f);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L564238;}}
}
B564211:L564211:{c.instructions+=8;NFSU2_TR(0x564211);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B564214:{NFSU2_TR(0x564214);
u8 U[4];
w4(U+0,u32(0xd1ac60beull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B564219:{NFSU2_TR(0x564219);
u8 U[4];
w4(U+0,u32(0xb4623f67ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56421e:{NFSU2_TR(0x56421e);
u8 U[4];
w4(U+0,u32(0xb4623f67ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B564223:{NFSU2_TR(0x564223);
u8 U[4];
w4(U+0,u32(0x639ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B564228:{NFSU2_TR(0x564228);
u8 U[4];
w4(U+0,u32(0x78fa24ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56422d:{NFSU2_TR(0x56422d);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56422e:{NFSU2_TR(0x56422e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x564233ull));
TAIL_STATIC(0x558570u,558);
}
B564233:L564233:{c.instructions+=2;NFSU2_TR(0x564233);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B564236:{NFSU2_TR(0x564236);
{goto L564294;}
}
B564238:L564238:{c.instructions+=11;NFSU2_TR(0x564238);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B56423b:{NFSU2_TR(0x56423b);
u8 U[4];
w4(U+0,u32(0x44b7167full));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B564240:{NFSU2_TR(0x564240);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B564242:{NFSU2_TR(0x564242);
u8 U[4];
w4(U+0,u32(0xb4623f67ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B564247:{NFSU2_TR(0x564247);
u8 U[4];
w4(U+0,u32(0xb4623f67ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56424c:{NFSU2_TR(0x56424c);
u8 U[4];
w4(U+0,u32(0x9f00f07ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B564251:{NFSU2_TR(0x564251);
u8 U[4];
w4(U+0,u32(0x61cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B564256:{NFSU2_TR(0x564256);
u8 U[4];
w4(U+0,u32(0xf770ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56425b:{NFSU2_TR(0x56425b);
u8 U[4];
w4(U+0,u32(0x78fa24ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B564260:{NFSU2_TR(0x564260);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B564261:{NFSU2_TR(0x564261);
{goto L56428c;}
}
B564263:L564263:{c.instructions+=10;NFSU2_TR(0x564263);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B564266:{NFSU2_TR(0x564266);
u8 U[4];
w4(U+0,u32(0xf5ac2b2aull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56426b:{NFSU2_TR(0x56426b);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56426d:{NFSU2_TR(0x56426d);
u8 U[4];
w4(U+0,u32(0xb4623f67ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B564272:{NFSU2_TR(0x564272);
u8 U[4];
w4(U+0,u32(0xb4623f67ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B564277:{NFSU2_TR(0x564277);
u8 U[4];
w4(U+0,u32(0x51123592ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56427c:{NFSU2_TR(0x56427c);
u8 U[4];
w4(U+0,u32(0x61cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B564281:{NFSU2_TR(0x564281);
u8 U[4];
w4(U+0,u32(0xf770ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B564286:{NFSU2_TR(0x564286);
u8 U[4];
w4(U+0,u32(0x78fa24ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56428b:{NFSU2_TR(0x56428b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56428c:L56428c:{c.instructions+=1;NFSU2_TR(0x56428c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x564291ull));
TAIL_STATIC(0x558790u,558);
}
B564291:L564291:{c.instructions+=1;NFSU2_TR(0x564291);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x24ull))));
}
B564294:L564294:{c.instructions+=3;NFSU2_TR(0x564294);
__builtin_memmove((R+4),(R+24),4);
}
B564296:{NFSU2_TR(0x564296);
s4(0x838970,u32(0xb4623f67ull));
}
B5642a0:{NFSU2_TR(0x5642a0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5642a5ull));
TAIL_STATIC(0x560b60u,560);
}
B5642a5:L5642a5:{c.instructions+=5;NFSU2_TR(0x5642a5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5642a6:{NFSU2_TR(0x5642a6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5642a7:{NFSU2_TR(0x5642a7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5642a8:{NFSU2_TR(0x5642a8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5642a9:{NFSU2_TR(0x5642a9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5642ac:L5642ac:{c.instructions+=2;NFSU2_TR(0x5642ac);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5642b2:{NFSU2_TR(0x5642b2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5642b7ull));
TAIL_STATIC(0x538130u,538);
}
B5642b7:L5642b7:{c.instructions+=3;NFSU2_TR(0x5642b7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xf0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5642bd:{NFSU2_TR(0x5642bd);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5642c0:{NFSU2_TR(0x5642c0);
if(r1(R+518)){{goto L5642f1;}}
}
B5642c2:L5642c2:{c.instructions+=2;NFSU2_TR(0x5642c2);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5642c4:{NFSU2_TR(0x5642c4);
if(r1(R+518)){{goto L5642f1;}}
}
B5642c6:L5642c6:{c.instructions+=5;NFSU2_TR(0x5642c6);
{u32 ea_=u32(u32(8872940u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B5642cc:{NFSU2_TR(0x5642cc);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B5642d2:{NFSU2_TR(0x5642d2);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5642d4:{NFSU2_TR(0x5642d4);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5642d7:{NFSU2_TR(0x5642d7);
if(r1(R+514)){{goto L5642df;}}
}
B5642d9:L5642d9:{c.instructions+=3;NFSU2_TR(0x5642d9);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5642db:{NFSU2_TR(0x5642db);
__builtin_memmove((R+0),(R+12),4);
}
B5642dd:{NFSU2_TR(0x5642dd);
{goto L5642f1;}
}
B5642df:L5642df:{c.instructions+=4;NFSU2_TR(0x5642df);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5642e5:{NFSU2_TR(0x5642e5);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5642e7:{NFSU2_TR(0x5642e7);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5642ea:{NFSU2_TR(0x5642ea);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5642f9;}}
}
B5642ec:L5642ec:{c.instructions+=1;NFSU2_TR(0x5642ec);
w4(R+0,u32(0xffffffffull));
}
B5642f1:L5642f1:{c.instructions+=3;NFSU2_TR(0x5642f1);
__builtin_memmove((R+4),(R+24),4);
}
B5642f3:{NFSU2_TR(0x5642f3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5642f4:{NFSU2_TR(0x5642f4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5642f9ull));
TAIL_STATIC(0x55d660u,55d);
}
B5642f9:L5642f9:{c.instructions+=3;NFSU2_TR(0x5642f9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x124ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5642ff:{NFSU2_TR(0x5642ff);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B564300:{NFSU2_TR(0x564300);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x564305ull));
TAIL_STATIC(0x52d090u,52d);
}
B564305:L564305:{c.instructions+=3;NFSU2_TR(0x564305);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B564308:{NFSU2_TR(0x564308);
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
B56430a:{NFSU2_TR(0x56430a);
if(r1(R+518)){{goto L5644c9;}}
}
B564310:L564310:{c.instructions+=4;NFSU2_TR(0x564310);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B564313:{NFSU2_TR(0x564313);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B564314:{NFSU2_TR(0x564314);
u8 U[4];
w4(U+0,u32(0x406415e3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B564319:{NFSU2_TR(0x564319);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56431eull));
TAIL_STATIC(0x55dda0u,55d);
}
B56431e:L56431e:{c.instructions+=6;NFSU2_TR(0x56431e);
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
B564321:{NFSU2_TR(0x564321);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B564322:{NFSU2_TR(0x564322);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B564323:{NFSU2_TR(0x564323);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B564324:{NFSU2_TR(0x564324);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B564325:{NFSU2_TR(0x564325);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B564328:L564328:{c.instructions+=5;NFSU2_TR(0x564328);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B564329:{NFSU2_TR(0x564329);
u8 U[4];
w4(U+0,u32(0x79031cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56432e:{NFSU2_TR(0x56432e);
u8 U[4];
w4(U+0,u32(0x47ff4e7cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B564333:{NFSU2_TR(0x564333);
u8 U[4];
w4(U+0,u32(0x799ab8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B564338:{NFSU2_TR(0x564338);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56433dull));
TAIL_STATIC(0x537c00u,537);
}
B56433d:L56433d:{c.instructions+=6;NFSU2_TR(0x56433d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B564340:{NFSU2_TR(0x564340);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B564341:{NFSU2_TR(0x564341);
u8 U[4];
w4(U+0,u32(0x79031cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B564346:{NFSU2_TR(0x564346);
u8 U[4];
w4(U+0,u32(0x47ff4e7cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56434b:{NFSU2_TR(0x56434b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56434c:{NFSU2_TR(0x56434c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x564351ull));
TAIL_STATIC(0x537c00u,537);
}
B564351:L564351:{c.instructions+=5;NFSU2_TR(0x564351);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B564352:{NFSU2_TR(0x564352);
u8 U[4];
w4(U+0,u32(0x79031cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B564357:{NFSU2_TR(0x564357);
u8 U[4];
w4(U+0,u32(0x47ff4e7cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56435c:{NFSU2_TR(0x56435c);
u8 U[4];
w4(U+0,u32(0x79d818ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B564361:{NFSU2_TR(0x564361);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x564366ull));
TAIL_STATIC(0x537c00u,537);
}
B564366:L564366:{c.instructions+=2;NFSU2_TR(0x564366);
u8 U[4];
w4(U+0,u32(0x799ab8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56436b:{NFSU2_TR(0x56436b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x564370ull));
TAIL_STATIC(0x52cef0u,52c);
}
B564370:L564370:{c.instructions+=3;NFSU2_TR(0x564370);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x34ull))));
}
B564373:{NFSU2_TR(0x564373);
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
B564375:{NFSU2_TR(0x564375);
if(r1(R+518)){{goto L5644c9;}}
}
B56437b:L56437b:{c.instructions+=10;NFSU2_TR(0x56437b);
w4(R+28,u32(0xffull));
}
B564380:{NFSU2_TR(0x564380);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B564383:{NFSU2_TR(0x564383);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B564386:{NFSU2_TR(0x564386);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B564389:{NFSU2_TR(0x564389);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B56438c:{NFSU2_TR(0x56438c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B56438d:{NFSU2_TR(0x56438d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B56438e:{NFSU2_TR(0x56438e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B56438f:{NFSU2_TR(0x56438f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B564390:{NFSU2_TR(0x564390);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B564393:L564393:{c.instructions+=2;NFSU2_TR(0x564393);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xb5971bf1ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B564398:{NFSU2_TR(0x564398);
if(r1(R+518)){{goto L5644aa;}}
}
B56439e:L56439e:{c.instructions+=2;NFSU2_TR(0x56439e);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xc98356baull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5643a3:{NFSU2_TR(0x5643a3);
if(r1(R+518)){{goto L5643c8;}}
}
B5643a5:L5643a5:{c.instructions+=2;NFSU2_TR(0x5643a5);
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
B5643aa:{NFSU2_TR(0x5643aa);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5644c9;}}
}
B5643b0:L5643b0:{c.instructions+=3;NFSU2_TR(0x5643b0);
w4(R+4,u32(0x838980ull));
}
B5643b5:{NFSU2_TR(0x5643b5);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x114ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5643bc:{NFSU2_TR(0x5643bc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5643c1ull));
TAIL_STATIC(0x530140u,530);
}
B5643c1:L5643c1:{c.instructions+=5;NFSU2_TR(0x5643c1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5643c2:{NFSU2_TR(0x5643c2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5643c3:{NFSU2_TR(0x5643c3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5643c4:{NFSU2_TR(0x5643c4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5643c5:{NFSU2_TR(0x5643c5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5643c8:L5643c8:{c.instructions+=4;NFSU2_TR(0x5643c8);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x128ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5643ce:{NFSU2_TR(0x5643ce);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5643d0:{NFSU2_TR(0x5643d0);
w4(R+28,u32(0xffull));
}
B5643d5:{NFSU2_TR(0x5643d5);
if(r1(R+518)){{goto L56440d;}}
}
B5643d7:L5643d7:{c.instructions+=4;NFSU2_TR(0x5643d7);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5643d9:{NFSU2_TR(0x5643d9);
u8 U[4];
w4(U+0,u32(0x799ab8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5643de:{NFSU2_TR(0x5643de);
s4(0x838560,u32(0x2ull));
}
B5643e8:{NFSU2_TR(0x5643e8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5643edull));
TAIL_STATIC(0x537950u,537);
}
B5643ed:L5643ed:{c.instructions+=4;NFSU2_TR(0x5643ed);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5643f0:{NFSU2_TR(0x5643f0);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5643f2:{NFSU2_TR(0x5643f2);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5643f3:{NFSU2_TR(0x5643f3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5643f8ull));
TAIL_STATIC(0x537950u,537);
}
B5643f8:L5643f8:{c.instructions+=3;NFSU2_TR(0x5643f8);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5643f9:{NFSU2_TR(0x5643f9);
u8 U[4];
w4(U+0,u32(0x799c18ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5643fe:{NFSU2_TR(0x5643fe);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x564403ull));
TAIL_STATIC(0x537950u,537);
}
B564403:L564403:{c.instructions+=2;NFSU2_TR(0x564403);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B564406:{NFSU2_TR(0x564406);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x128ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B56440d:L56440d:{c.instructions+=3;NFSU2_TR(0x56440d);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x114ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B564413:{NFSU2_TR(0x564413);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B564415:{NFSU2_TR(0x564415);
if(r1(R+518)){{goto L56449b;}}
}
B56441b:L56441b:{c.instructions+=3;NFSU2_TR(0x56441b);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x115ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B564421:{NFSU2_TR(0x564421);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B564423:{NFSU2_TR(0x564423);
if(r1(R+518)){{goto L564432;}}
}
B564425:L564425:{c.instructions+=4;NFSU2_TR(0x564425);
__builtin_memmove((R+0),gp(0x7fa1c0),4);
}
B56442a:{NFSU2_TR(0x56442a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56442b:{NFSU2_TR(0x56442b);
u8 U[4];
w4(U+0,u32(0x8acaa8dfull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B564430:{NFSU2_TR(0x564430);
{goto L56443e;}
}
B564432:L564432:{c.instructions+=3;NFSU2_TR(0x564432);
__builtin_memmove((R+4),gp(0x7fa1c0),4);
}
B564438:{NFSU2_TR(0x564438);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B564439:{NFSU2_TR(0x564439);
u8 U[4];
w4(U+0,u32(0x9fbbd1d4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56443e:L56443e:{c.instructions+=1;NFSU2_TR(0x56443e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x564443ull));
TAIL_STATIC(0x55dda0u,55d);
}
B564443:L564443:{c.instructions+=4;NFSU2_TR(0x564443);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B564446:{NFSU2_TR(0x564446);
u8 U[4];
w4(U+0,u32(0x799c18ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56444b:{NFSU2_TR(0x56444b);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x114ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B564452:{NFSU2_TR(0x564452);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x564457ull));
TAIL_STATIC(0x52cf60u,52c);
}
B564457:L564457:{c.instructions+=3;NFSU2_TR(0x564457);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B56445a:{NFSU2_TR(0x56445a);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B56445c:{NFSU2_TR(0x56445c);
if(r1(R+518)){{goto L56446b;}}
}
B56445e:L56445e:{c.instructions+=2;NFSU2_TR(0x56445e);
u8 U[4];
w4(U+0,u32(0x799c18ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B564463:{NFSU2_TR(0x564463);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x564468ull));
TAIL_STATIC(0x5379a0u,537);
}
B564468:L564468:{c.instructions+=1;NFSU2_TR(0x564468);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B56446b:L56446b:{c.instructions+=3;NFSU2_TR(0x56446b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B56446e:{NFSU2_TR(0x56446e);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56446f:{NFSU2_TR(0x56446f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x564474ull));
TAIL_STATIC(0x5379a0u,537);
}
B564474:L564474:{c.instructions+=4;NFSU2_TR(0x564474);
__builtin_memmove((R+0),gp(0x7fa200),4);
}
B564479:{NFSU2_TR(0x564479);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56447a:{NFSU2_TR(0x56447a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56447b:{NFSU2_TR(0x56447b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x564480ull));
TAIL_STATIC(0x537950u,537);
}
B564480:L564480:{c.instructions+=4;NFSU2_TR(0x564480);
__builtin_memmove((R+4),gp(0x7fa200),4);
}
B564486:{NFSU2_TR(0x564486);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B564487:{NFSU2_TR(0x564487);
u8 U[4];
w4(U+0,u32(0x251bf83eull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56448c:{NFSU2_TR(0x56448c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x564491ull));
TAIL_STATIC(0x55dda0u,55d);
}
B564491:L564491:{c.instructions+=6;NFSU2_TR(0x564491);
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
B564494:{NFSU2_TR(0x564494);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B564495:{NFSU2_TR(0x564495);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B564496:{NFSU2_TR(0x564496);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B564497:{NFSU2_TR(0x564497);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B564498:{NFSU2_TR(0x564498);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B56449b:L56449b:{c.instructions+=2;NFSU2_TR(0x56449b);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((R+4),(U+0),4);
}
B56449e:{NFSU2_TR(0x56449e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5644a3ull));
TAIL_STATIC(0x538760u,538);
}
B5644a3:L5644a3:{c.instructions+=5;NFSU2_TR(0x5644a3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5644a4:{NFSU2_TR(0x5644a4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5644a5:{NFSU2_TR(0x5644a5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5644a6:{NFSU2_TR(0x5644a6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5644a7:{NFSU2_TR(0x5644a7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5644aa:L5644aa:{c.instructions+=3;NFSU2_TR(0x5644aa);
u8 U[4];
w4(U+0,u32(0x8392c0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5644af:{NFSU2_TR(0x5644af);
w4(R+4,u32(0x8389d0ull));
}
B5644b4:{NFSU2_TR(0x5644b4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5644b9ull));
TAIL_STATIC(0x413440u,413);
}
B5644b9:L5644b9:{c.instructions+=4;NFSU2_TR(0x5644b9);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5644bb:{NFSU2_TR(0x5644bb);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5644bc:{NFSU2_TR(0x5644bc);
u8 U[4];
w4(U+0,u32(0x8392c0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5644c1:{NFSU2_TR(0x5644c1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5644c6ull));
TAIL_STATIC(0x4d8ec0u,4d8);
}
B5644c6:L5644c6:{c.instructions+=1;NFSU2_TR(0x5644c6);
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
B5644c9:L5644c9:{c.instructions+=5;NFSU2_TR(0x5644c9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5644ca:{NFSU2_TR(0x5644ca);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5644cb:{NFSU2_TR(0x5644cb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5644cc:{NFSU2_TR(0x5644cc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5644cd:{NFSU2_TR(0x5644cd);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5644d0:L5644d0:{c.instructions+=6;NFSU2_TR(0x5644d0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5644d4:{NFSU2_TR(0x5644d4);
u8 U[4];
w1(R+512,u8((r4(R+0))<(u32(0x9803f6e2ull))));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x9803f6e2ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5644d9:{NFSU2_TR(0x5644d9);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5644da:{NFSU2_TR(0x5644da);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5644db:{NFSU2_TR(0x5644db);
__builtin_memmove((R+24),(R+4),4);
}
B5644dd:{NFSU2_TR(0x5644dd);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L564756;}}
}
B5644e3:L5644e3:{c.instructions+=1;NFSU2_TR(0x5644e3);
if(r1(R+518)){{goto L564722;}}
}
B5644e9:L5644e9:{c.instructions+=2;NFSU2_TR(0x5644e9);
u8 U[4];
w1(R+512,u8((r4(R+0))<(u32(0x911ab364ull))));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x911ab364ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5644ee:{NFSU2_TR(0x5644ee);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L56470d;}}
}
B5644f4:L5644f4:{c.instructions+=1;NFSU2_TR(0x5644f4);
if(r1(R+518)){{goto L5645ee;}}
}
B5644fa:L5644fa:{c.instructions+=2;NFSU2_TR(0x5644fa);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x153e234ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5644ff:{NFSU2_TR(0x5644ff);
if(r1(R+518)){{goto L5645ca;}}
}
B564505:L564505:{c.instructions+=2;NFSU2_TR(0x564505);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0x406415e3ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x406415e3ull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0x406415e3ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B56450a:{NFSU2_TR(0x56450a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L564751;}}
}
B564510:L564510:{c.instructions+=4;NFSU2_TR(0x564510);
__builtin_memmove((R+0),gp(0x838560),4);
}
B564515:{NFSU2_TR(0x564515);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B564516:{NFSU2_TR(0x564516);
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
B564519:{NFSU2_TR(0x564519);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L56456a;}}
}
B56451b:L56451b:{c.instructions+=1;NFSU2_TR(0x56451b);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x5647ccull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B564522:L564522:{c.instructions+=4;NFSU2_TR(0x564522);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B564524:{NFSU2_TR(0x564524);
__builtin_memmove((R+4),(R+24),4);
}
B564526:{NFSU2_TR(0x564526);
s4(0x838560,u32(0x3ull));
}
B564530:{NFSU2_TR(0x564530);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x564535ull));
TAIL_STATIC(0x549280u,549);
}
B564535:L564535:{c.instructions+=1;NFSU2_TR(0x564535);
{goto L56456a;}
}
B564537:L564537:{c.instructions+=4;NFSU2_TR(0x564537);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B564539:{NFSU2_TR(0x564539);
__builtin_memmove((R+4),(R+24),4);
}
B56453b:{NFSU2_TR(0x56453b);
s4(0x838560,u32(0x4ull));
}
B564545:{NFSU2_TR(0x564545);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56454aull));
TAIL_STATIC(0x549280u,549);
}
B56454a:L56454a:{c.instructions+=1;NFSU2_TR(0x56454a);
{goto L56456a;}
}
B56454c:L56454c:{c.instructions+=2;NFSU2_TR(0x56454c);
s4(0x838560,u32(0x0ull));
}
B564556:{NFSU2_TR(0x564556);
{goto L56456a;}
}
B564558:L564558:{c.instructions+=3;NFSU2_TR(0x564558);
u8 U[4];
w4(U+0,u32(0x799a58ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56455d:{NFSU2_TR(0x56455d);
u8 U[4];
w4(U+0,u32(0x406415e3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B564562:{NFSU2_TR(0x564562);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x564567ull));
TAIL_STATIC(0x55dda0u,55d);
}
B564567:L564567:{c.instructions+=1;NFSU2_TR(0x564567);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B56456a:L56456a:{c.instructions+=2;NFSU2_TR(0x56456a);
__builtin_memmove((R+4),(R+24),4);
}
B56456c:{NFSU2_TR(0x56456c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x564571ull));
TAIL_STATIC(0x5504d0u,550);
}
B564571:L564571:{c.instructions+=3;NFSU2_TR(0x564571);
__builtin_memmove((R+0),gp(0x838560),4);
}
B564576:{NFSU2_TR(0x564576);
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
B564578:{NFSU2_TR(0x564578);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L564751;}}
}
B56457e:L56457e:{c.instructions+=2;NFSU2_TR(0x56457e);
__builtin_memmove((R+4),(R+24),4);
}
B564580:{NFSU2_TR(0x564580);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x564585ull));
TAIL_STATIC(0x53c560u,53c);
}
B564585:L564585:{c.instructions+=3;NFSU2_TR(0x564585);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B564587:{NFSU2_TR(0x564587);
u8 U[4];
w4(U+0,u32(0x799ab8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56458c:{NFSU2_TR(0x56458c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x564591ull));
TAIL_STATIC(0x537950u,537);
}
B564591:L564591:{c.instructions+=3;NFSU2_TR(0x564591);
u8 U[4];
w4(U+0,u32(0xffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B564596:{NFSU2_TR(0x564596);
u8 U[4];
w4(U+0,u32(0x799a58ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56459b:{NFSU2_TR(0x56459b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5645a0ull));
TAIL_STATIC(0x537950u,537);
}
B5645a0:L5645a0:{c.instructions+=3;NFSU2_TR(0x5645a0);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5645a2:{NFSU2_TR(0x5645a2);
u8 U[4];
w4(U+0,u32(0x799c18ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5645a7:{NFSU2_TR(0x5645a7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5645acull));
TAIL_STATIC(0x537950u,537);
}
B5645ac:L5645ac:{c.instructions+=4;NFSU2_TR(0x5645ac);
u8 U[4];
w4(U+0,u32(0x799a58ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5645b1:{NFSU2_TR(0x5645b1);
u8 U[4];
w4(U+0,u32(0x9e382ecdull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5645b6:{NFSU2_TR(0x5645b6);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa8ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5645bd:{NFSU2_TR(0x5645bd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5645c2ull));
TAIL_STATIC(0x55dda0u,55d);
}
B5645c2:L5645c2:{c.instructions+=4;NFSU2_TR(0x5645c2);
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
B5645c5:{NFSU2_TR(0x5645c5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5645c6:{NFSU2_TR(0x5645c6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5645c7:{NFSU2_TR(0x5645c7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5645ca:L5645ca:{c.instructions+=4;NFSU2_TR(0x5645ca);
__builtin_memmove((R+0),gp(0x838560),4);
}
B5645cf:{NFSU2_TR(0x5645cf);
w4(R+28,u32(0x4ull));
}
B5645d4:{NFSU2_TR(0x5645d4);
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
B5645d6:{NFSU2_TR(0x5645d6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L564751;}}
}
B5645dc:L5645dc:{c.instructions+=2;NFSU2_TR(0x5645dc);
__builtin_memmove((R+4),(R+24),4);
}
B5645de:{NFSU2_TR(0x5645de);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5645e3ull));
TAIL_STATIC(0x53c4a0u,53c);
}
B5645e3:L5645e3:{c.instructions+=4;NFSU2_TR(0x5645e3);
__builtin_memmove(gp(0x838560),(R+28),4);
}
B5645e9:{NFSU2_TR(0x5645e9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5645ea:{NFSU2_TR(0x5645ea);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5645eb:{NFSU2_TR(0x5645eb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5645ee:L5645ee:{c.instructions+=3;NFSU2_TR(0x5645ee);
__builtin_memmove((R+0),gp(0x838560),4);
}
B5645f3:{NFSU2_TR(0x5645f3);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5645f6:{NFSU2_TR(0x5645f6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L564664;}}
}
B5645f8:L5645f8:{c.instructions+=3;NFSU2_TR(0x5645f8);
u8 U[4];
w4(U+0,u32(0xffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5645fd:{NFSU2_TR(0x5645fd);
u8 U[4];
w4(U+0,u32(0x799ab8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B564602:{NFSU2_TR(0x564602);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x564607ull));
TAIL_STATIC(0x537950u,537);
}
B564607:L564607:{c.instructions+=3;NFSU2_TR(0x564607);
u8 U[4];
w4(U+0,u32(0xffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56460c:{NFSU2_TR(0x56460c);
u8 U[4];
w4(U+0,u32(0x799a58ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B564611:{NFSU2_TR(0x564611);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x564616ull));
TAIL_STATIC(0x537950u,537);
}
B564616:L564616:{c.instructions+=3;NFSU2_TR(0x564616);
u8 U[4];
w4(U+0,u32(0xffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56461b:{NFSU2_TR(0x56461b);
u8 U[4];
w4(U+0,u32(0x799c18ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B564620:{NFSU2_TR(0x564620);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x564625ull));
TAIL_STATIC(0x537950u,537);
}
B564625:L564625:{c.instructions+=3;NFSU2_TR(0x564625);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B564628:{NFSU2_TR(0x564628);
__builtin_memmove((R+4),(R+24),4);
}
B56462a:{NFSU2_TR(0x56462a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56462full));
TAIL_STATIC(0x53c560u,53c);
}
B56462f:L56462f:{c.instructions+=5;NFSU2_TR(0x56462f);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B564631:{NFSU2_TR(0x564631);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x10ull))));
}
B564634:{NFSU2_TR(0x564634);
__builtin_memmove((R+4),(R+16),4);
}
B564636:{NFSU2_TR(0x564636);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B564638:{NFSU2_TR(0x564638);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56463dull));
TAIL_STATIC(0x5054a0u,505);
}
B56463d:L56463d:{c.instructions+=4;NFSU2_TR(0x56463d);
__builtin_memmove((R+0),gp(0x838560),4);
}
B564642:{NFSU2_TR(0x564642);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B564643:{NFSU2_TR(0x564643);
__builtin_memmove((R+4),(R+24),4);
}
B564645:{NFSU2_TR(0x564645);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56464aull));
TAIL_STATIC(0x53c620u,53c);
}
B56464a:L56464a:{c.instructions+=7;NFSU2_TR(0x56464a);
w4(R+28,u32(0x1ull));
}
B56464f:{NFSU2_TR(0x56464f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x74ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B564652:{NFSU2_TR(0x564652);
__builtin_memmove(gp(0x838560),(R+28),4);
}
B564658:{NFSU2_TR(0x564658);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa8ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B56465f:{NFSU2_TR(0x56465f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B564660:{NFSU2_TR(0x564660);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B564661:{NFSU2_TR(0x564661);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B564664:L564664:{c.instructions+=3;NFSU2_TR(0x564664);
w4(R+28,u32(0x1ull));
}
B564669:{NFSU2_TR(0x564669);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B56466b:{NFSU2_TR(0x56466b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L564684;}}
}
B56466d:L56466d:{c.instructions+=3;NFSU2_TR(0x56466d);
u8 U[4];
w4(U+0,u32(0x799ab8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B564672:{NFSU2_TR(0x564672);
u8 U[4];
w4(U+0,u32(0x911ab364ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B564677:{NFSU2_TR(0x564677);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56467cull));
TAIL_STATIC(0x55dda0u,55d);
}
B56467c:L56467c:{c.instructions+=4;NFSU2_TR(0x56467c);
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
B56467f:{NFSU2_TR(0x56467f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B564680:{NFSU2_TR(0x564680);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B564681:{NFSU2_TR(0x564681);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B564684:L564684:{c.instructions+=2;NFSU2_TR(0x564684);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x3ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B564687:{NFSU2_TR(0x564687);
if(r1(R+518)){{goto L5646cc;}}
}
B564689:L564689:{c.instructions+=2;NFSU2_TR(0x564689);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B56468a:{NFSU2_TR(0x56468a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L564701;}}
}
B56468c:L56468c:{c.instructions+=5;NFSU2_TR(0x56468c);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56468e:{NFSU2_TR(0x56468e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x10ull))));
}
B564691:{NFSU2_TR(0x564691);
__builtin_memmove((R+4),(R+16),4);
}
B564693:{NFSU2_TR(0x564693);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B564695:{NFSU2_TR(0x564695);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56469aull));
TAIL_STATIC(0x5054a0u,505);
}
B56469a:L56469a:{c.instructions+=4;NFSU2_TR(0x56469a);
__builtin_memmove((R+4),gp(0x838560),4);
}
B5646a0:{NFSU2_TR(0x5646a0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5646a1:{NFSU2_TR(0x5646a1);
__builtin_memmove((R+4),(R+24),4);
}
B5646a3:{NFSU2_TR(0x5646a3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5646a8ull));
TAIL_STATIC(0x53c620u,53c);
}
B5646a8:L5646a8:{c.instructions+=5;NFSU2_TR(0x5646a8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x9cull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5646ae:{NFSU2_TR(0x5646ae);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5646af:{NFSU2_TR(0x5646af);
__builtin_memmove((R+4),(R+24),4);
}
B5646b1:{NFSU2_TR(0x5646b1);
s4(0x838560,u32(0x3ull));
}
B5646bb:{NFSU2_TR(0x5646bb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5646c0ull));
TAIL_STATIC(0x549280u,549);
}
B5646c0:L5646c0:{c.instructions+=2;NFSU2_TR(0x5646c0);
__builtin_memmove((R+4),(R+24),4);
}
B5646c2:{NFSU2_TR(0x5646c2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5646c7ull));
TAIL_STATIC(0x5504d0u,550);
}
B5646c7:L5646c7:{c.instructions+=3;NFSU2_TR(0x5646c7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5646c8:{NFSU2_TR(0x5646c8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5646c9:{NFSU2_TR(0x5646c9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5646cc:L5646cc:{c.instructions+=5;NFSU2_TR(0x5646cc);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5646ce:{NFSU2_TR(0x5646ce);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x10ull))));
}
B5646d1:{NFSU2_TR(0x5646d1);
__builtin_memmove((R+4),(R+16),4);
}
B5646d3:{NFSU2_TR(0x5646d3);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5646d5:{NFSU2_TR(0x5646d5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5646daull));
TAIL_STATIC(0x5054a0u,505);
}
B5646da:L5646da:{c.instructions+=4;NFSU2_TR(0x5646da);
__builtin_memmove((R+8),gp(0x838560),4);
}
B5646e0:{NFSU2_TR(0x5646e0);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5646e1:{NFSU2_TR(0x5646e1);
__builtin_memmove((R+4),(R+24),4);
}
B5646e3:{NFSU2_TR(0x5646e3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5646e8ull));
TAIL_STATIC(0x53c620u,53c);
}
B5646e8:L5646e8:{c.instructions+=5;NFSU2_TR(0x5646e8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x88ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5646ee:{NFSU2_TR(0x5646ee);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5646f0:{NFSU2_TR(0x5646f0);
__builtin_memmove((R+4),(R+24),4);
}
B5646f2:{NFSU2_TR(0x5646f2);
s4(0x838560,u32(0x2ull));
}
B5646fc:{NFSU2_TR(0x5646fc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x564701ull));
TAIL_STATIC(0x549280u,549);
}
B564701:L564701:{c.instructions+=2;NFSU2_TR(0x564701);
__builtin_memmove((R+4),(R+24),4);
}
B564703:{NFSU2_TR(0x564703);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x564708ull));
TAIL_STATIC(0x5504d0u,550);
}
B564708:L564708:{c.instructions+=3;NFSU2_TR(0x564708);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B564709:{NFSU2_TR(0x564709);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B56470a:{NFSU2_TR(0x56470a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B56470d:L56470d:{c.instructions+=2;NFSU2_TR(0x56470d);
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
B564712:{NFSU2_TR(0x564712);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L564751;}}
}
B564714:L564714:{c.instructions+=3;NFSU2_TR(0x564714);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B564716:{NFSU2_TR(0x564716);
__builtin_memmove((R+4),(R+24),4);
}
B564718:{NFSU2_TR(0x564718);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56471dull));
TAIL_STATIC(0x548e40u,548);
}
B56471d:L56471d:{c.instructions+=3;NFSU2_TR(0x56471d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B56471e:{NFSU2_TR(0x56471e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B56471f:{NFSU2_TR(0x56471f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B564722:L564722:{c.instructions+=3;NFSU2_TR(0x564722);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xacull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B564728:{NFSU2_TR(0x564728);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B564729:{NFSU2_TR(0x564729);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56472eull));
TAIL_STATIC(0x52d100u,52d);
}
B56472e:L56472e:{c.instructions+=3;NFSU2_TR(0x56472e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B564731:{NFSU2_TR(0x564731);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B564733:{NFSU2_TR(0x564733);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x564714u);}goto L564714;}}
}
B564735:L564735:{c.instructions+=3;NFSU2_TR(0x564735);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B56473b:{NFSU2_TR(0x56473b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56473c:{NFSU2_TR(0x56473c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x564741ull));
TAIL_STATIC(0x52d100u,52d);
}
B564741:L564741:{c.instructions+=3;NFSU2_TR(0x564741);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B564744:{NFSU2_TR(0x564744);
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
B564746:{NFSU2_TR(0x564746);
if(r1(R+518)){{goto L564751;}}
}
B564748:L564748:{c.instructions+=3;NFSU2_TR(0x564748);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56474a:{NFSU2_TR(0x56474a);
__builtin_memmove((R+4),(R+24),4);
}
B56474c:{NFSU2_TR(0x56474c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x564751ull));
TAIL_STATIC(0x548e40u,548);
}
B564751:L564751:{c.instructions+=3;NFSU2_TR(0x564751);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B564752:{NFSU2_TR(0x564752);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B564753:{NFSU2_TR(0x564753);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B564756:L564756:{c.instructions+=2;NFSU2_TR(0x564756);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xb5971bf1ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B56475b:{NFSU2_TR(0x56475b);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x564748u);}goto L564748;}}
}
B56475d:L56475d:{c.instructions+=2;NFSU2_TR(0x56475d);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xc98356baull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B564762:{NFSU2_TR(0x564762);
if(r1(R+518)){{goto L56478e;}}
}
B564764:L564764:{c.instructions+=2;NFSU2_TR(0x564764);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0xfd7c68d8ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0xfd7c68d8ull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0xfd7c68d8ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B564769:{NFSU2_TR(0x564769);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x564751u);}goto L564751;}}
}
B56476b:L56476b:{c.instructions+=2;NFSU2_TR(0x56476b);
__builtin_memmove((R+4),(R+24),4);
}
B56476d:{NFSU2_TR(0x56476d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x564772ull));
TAIL_STATIC(0x53c4a0u,53c);
}
B564772:L564772:{c.instructions+=2;NFSU2_TR(0x564772);
__builtin_memmove((R+4),(R+24),4);
}
B564774:{NFSU2_TR(0x564774);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x564779ull));
TAIL_STATIC(0x5504d0u,550);
}
B564779:L564779:{c.instructions+=3;NFSU2_TR(0x564779);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56477b:{NFSU2_TR(0x56477b);
__builtin_memmove((R+4),(R+24),4);
}
B56477d:{NFSU2_TR(0x56477d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x564782ull));
TAIL_STATIC(0x549280u,549);
}
B564782:L564782:{c.instructions+=4;NFSU2_TR(0x564782);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa8ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B564789:{NFSU2_TR(0x564789);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B56478a:{NFSU2_TR(0x56478a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B56478b:{NFSU2_TR(0x56478b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B56478e:L56478e:{c.instructions+=3;NFSU2_TR(0x56478e);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B564791:{NFSU2_TR(0x564791);
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
B564793:{NFSU2_TR(0x564793);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x564751u);}goto L564751;}}
}
B564795:L564795:{c.instructions+=3;NFSU2_TR(0x564795);
__builtin_memmove((R+0),gp(0x839bf0),4);
}
B56479a:{NFSU2_TR(0x56479a);
u8 U[22];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
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
B56479d:{NFSU2_TR(0x56479d);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x564751u);}goto L564751;}}
}
B56479f:L56479f:{c.instructions+=5;NFSU2_TR(0x56479f);
__builtin_memmove((R+8),(R+0),4);
}
B5647a1:{NFSU2_TR(0x5647a1);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5647a2:{NFSU2_TR(0x5647a2);
__builtin_memmove((R+4),(R+24),4);
}
B5647a4:{NFSU2_TR(0x5647a4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5647a7:{NFSU2_TR(0x5647a7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5647acull));
TAIL_STATIC(0x549000u,549);
}
B5647ac:L5647ac:{c.instructions+=6;NFSU2_TR(0x5647ac);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5647af:{NFSU2_TR(0x5647af);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5647b1:{NFSU2_TR(0x5647b1);
u8 U[4];
w4(U+0,u32(0x78ffd0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5647b6:{NFSU2_TR(0x5647b6);
u8 U[4];
w4(U+0,u32(0x79cb18ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5647bb:{NFSU2_TR(0x5647bb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5647bc:{NFSU2_TR(0x5647bc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5647c1ull));
TAIL_STATIC(0x5426c0u,542);
}
B5647c1:L5647c1:{c.instructions+=4;NFSU2_TR(0x5647c1);
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
B5647c4:{NFSU2_TR(0x5647c4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5647c5:{NFSU2_TR(0x5647c5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5647c6:{NFSU2_TR(0x5647c6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5647e0:L5647e0:{c.instructions+=9;NFSU2_TR(0x5647e0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5647e1:{NFSU2_TR(0x5647e1);
__builtin_memmove((R+20),(R+16),4);
}
B5647e3:{NFSU2_TR(0x5647e3);
__builtin_memmove((R+0),gp(0x83a7a4),1);
}
B5647e8:{NFSU2_TR(0x5647e8);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5647ea:{NFSU2_TR(0x5647ea);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5647eb:{NFSU2_TR(0x5647eb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5647ee:{NFSU2_TR(0x5647ee);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5647ef:{NFSU2_TR(0x5647ef);
__builtin_memmove((R+28),(R+4),4);
}
B5647f1:{NFSU2_TR(0x5647f1);
if(r1(R+518)){{goto L5647ff;}}
}
B5647f3:L5647f3:{c.instructions+=2;NFSU2_TR(0x5647f3);
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
B5647f9:{NFSU2_TR(0x5647f9);
if(r1(R+518)){{goto L564c78;}}
}
B5647ff:L5647ff:{c.instructions+=5;NFSU2_TR(0x5647ff);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x150ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B564805:{NFSU2_TR(0x564805);
u8 U[8];
__builtin_memmove((U+0),gp(0x8651ac),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B56480b:{NFSU2_TR(0x56480b);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56480c:{NFSU2_TR(0x56480c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B56480f:{NFSU2_TR(0x56480f);
if(r1(R+518)){{goto L564822;}}
}
B564811:L564811:{c.instructions+=8;NFSU2_TR(0x564811);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B564814:{NFSU2_TR(0x564814);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B564817:{NFSU2_TR(0x564817);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B564818:{NFSU2_TR(0x564818);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B564819:{NFSU2_TR(0x564819);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56481a:{NFSU2_TR(0x56481a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56481b:{NFSU2_TR(0x56481b);
__builtin_memmove((R+4),(R+28),4);
}
B56481d:{NFSU2_TR(0x56481d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x564822ull));
TAIL_STATIC(0x543d40u,543);
}
B564822:L564822:{c.instructions+=2;NFSU2_TR(0x564822);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+512,u8((r4(U+0))<(u32(0x51123592ull))));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x51123592ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B564828:{NFSU2_TR(0x564828);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L5649e0;}}
}
B56482e:L56482e:{c.instructions+=1;NFSU2_TR(0x56482e);
if(r1(R+518)){{goto L5649c2;}}
}
B564834:L564834:{c.instructions+=2;NFSU2_TR(0x564834);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+512,u8((r4(U+0))<(u32(0x2b5dfef6ull))));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2b5dfef6ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B56483a:{NFSU2_TR(0x56483a);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L564916;}}
}
B564840:L564840:{c.instructions+=1;NFSU2_TR(0x564840);
if(r1(R+518)){{goto L5648ea;}}
}
B564846:L564846:{c.instructions+=2;NFSU2_TR(0x564846);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+512,u8((r4(U+0))<(u32(0x1fab5998ull))));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1fab5998ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B56484c:{NFSU2_TR(0x56484c);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L5648a5;}}
}
B56484e:L56484e:{c.instructions+=1;NFSU2_TR(0x56484e);
if(r1(R+518)){{goto L564886;}}
}
B564850:L564850:{c.instructions+=2;NFSU2_TR(0x564850);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xc407210ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B564856:{NFSU2_TR(0x564856);
if(r1(R+518)){{goto L564b69;}}
}
B56485c:L56485c:{c.instructions+=2;NFSU2_TR(0x56485c);
u8 U[14];
__builtin_memmove((U+6),(R+24),4);
w1(R+512,u8((r4(U+6))<(u32(0x159c894dull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x159c894dull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x159c894dull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B564862:{NFSU2_TR(0x564862);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L564c77;}}
}
B564868:L564868:{c.instructions+=4;NFSU2_TR(0x564868);
__builtin_memmove((R+0),gp(0x83a63c),4);
}
B56486d:{NFSU2_TR(0x56486d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56486e:{NFSU2_TR(0x56486e);
w4(R+4,u32(0x839c40ull));
}
B564873:{NFSU2_TR(0x564873);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x564878ull));
TAIL_STATIC(0x50fc60u,50f);
}
B564878:L564878:{c.instructions+=2;NFSU2_TR(0x564878);
__builtin_memmove((R+4),(R+28),4);
}
B56487a:{NFSU2_TR(0x56487a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56487full));
TAIL_STATIC(0x538ca0u,538);
}
B56487f:L56487f:{c.instructions+=5;NFSU2_TR(0x56487f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B564880:{NFSU2_TR(0x564880);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B564881:{NFSU2_TR(0x564881);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B564882:{NFSU2_TR(0x564882);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B564883:{NFSU2_TR(0x564883);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B564886:L564886:{c.instructions+=4;NFSU2_TR(0x564886);
__builtin_memmove((R+4),gp(0x83a63c),4);
}
B56488c:{NFSU2_TR(0x56488c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56488d:{NFSU2_TR(0x56488d);
w4(R+4,u32(0x839c40ull));
}
B564892:{NFSU2_TR(0x564892);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x564897ull));
TAIL_STATIC(0x50fae0u,50f);
}
B564897:L564897:{c.instructions+=2;NFSU2_TR(0x564897);
__builtin_memmove((R+4),(R+28),4);
}
B564899:{NFSU2_TR(0x564899);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56489eull));
TAIL_STATIC(0x53cc70u,53c);
}
B56489e:L56489e:{c.instructions+=5;NFSU2_TR(0x56489e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B56489f:{NFSU2_TR(0x56489f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5648a0:{NFSU2_TR(0x5648a0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5648a1:{NFSU2_TR(0x5648a1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5648a2:{NFSU2_TR(0x5648a2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5648a5:L5648a5:{c.instructions+=2;NFSU2_TR(0x5648a5);
u8 U[14];
__builtin_memmove((U+6),(R+24),4);
w1(R+512,u8((r4(U+6))<(u32(0x24dd40cfull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x24dd40cfull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x24dd40cfull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5648ab:{NFSU2_TR(0x5648ab);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L564c77;}}
}
B5648b1:L5648b1:{c.instructions+=4;NFSU2_TR(0x5648b1);
__builtin_memmove((R+8),gp(0x83a63c),4);
}
B5648b7:{NFSU2_TR(0x5648b7);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5648b8:{NFSU2_TR(0x5648b8);
w4(R+4,u32(0x839c40ull));
}
B5648bd:{NFSU2_TR(0x5648bd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5648c2ull));
TAIL_STATIC(0x50fae0u,50f);
}
B5648c2:L5648c2:{c.instructions+=10;NFSU2_TR(0x5648c2);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5648c4:{NFSU2_TR(0x5648c4);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5648c6:{NFSU2_TR(0x5648c6);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5648c8:{NFSU2_TR(0x5648c8);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5648ca:{NFSU2_TR(0x5648ca);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x154ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5648d1:{NFSU2_TR(0x5648d1);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5648d4:{NFSU2_TR(0x5648d4);
u8 U[4];
w4(U+0,u32(0x151ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5648d9:{NFSU2_TR(0x5648d9);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5648da:{NFSU2_TR(0x5648da);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5648db:{NFSU2_TR(0x5648db);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5648e0ull));
TAIL_STATIC(0x4a3100u,4a3);
}
B5648e0:L5648e0:{c.instructions+=6;NFSU2_TR(0x5648e0);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x1cull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x1cull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x1cull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5648e3:{NFSU2_TR(0x5648e3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5648e4:{NFSU2_TR(0x5648e4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5648e5:{NFSU2_TR(0x5648e5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5648e6:{NFSU2_TR(0x5648e6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5648e7:{NFSU2_TR(0x5648e7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5648ea:L5648ea:{c.instructions+=4;NFSU2_TR(0x5648ea);
__builtin_memmove((R+0),gp(0x83a63c),4);
}
B5648ef:{NFSU2_TR(0x5648ef);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5648f0:{NFSU2_TR(0x5648f0);
w4(R+4,u32(0x839c40ull));
}
B5648f5:{NFSU2_TR(0x5648f5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5648faull));
TAIL_STATIC(0x50fc20u,50f);
}
B5648fa:L5648fa:{c.instructions+=6;NFSU2_TR(0x5648fa);
__builtin_memmove((R+4),gp(0x7fa218),4);
}
B564900:{NFSU2_TR(0x564900);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B564903:{NFSU2_TR(0x564903);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B564905:{NFSU2_TR(0x564905);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B564906:{NFSU2_TR(0x564906);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B564907:{NFSU2_TR(0x564907);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56490cull));
TAIL_STATIC(0x537980u,537);
}
B56490c:L56490c:{c.instructions+=6;NFSU2_TR(0x56490c);
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
B56490f:{NFSU2_TR(0x56490f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B564910:{NFSU2_TR(0x564910);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B564911:{NFSU2_TR(0x564911);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B564912:{NFSU2_TR(0x564912);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B564913:{NFSU2_TR(0x564913);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B564916:L564916:{c.instructions+=2;NFSU2_TR(0x564916);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+512,u8((r4(U+0))<(u32(0x35f8620bull))));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x35f8620bull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B56491c:{NFSU2_TR(0x56491c);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L5649ba;}}
}
B564922:L564922:{c.instructions+=1;NFSU2_TR(0x564922);
if(r1(R+518)){{goto L5649a8;}}
}
B564928:L564928:{c.instructions+=2;NFSU2_TR(0x564928);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x30ed2368ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B56492e:{NFSU2_TR(0x56492e);
if(r1(R+518)){{goto L56494a;}}
}
B564930:L564930:{c.instructions+=2;NFSU2_TR(0x564930);
u8 U[14];
__builtin_memmove((U+6),(R+24),4);
w1(R+512,u8((r4(U+6))<(u32(0x34dc1bcfull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x34dc1bcfull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x34dc1bcfull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B564936:{NFSU2_TR(0x564936);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L564c77;}}
}
B56493c:L56493c:{c.instructions+=2;NFSU2_TR(0x56493c);
__builtin_memmove((R+4),(R+28),4);
}
B56493e:{NFSU2_TR(0x56493e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x564943ull));
TAIL_STATIC(0x538ca0u,538);
}
B564943:L564943:{c.instructions+=5;NFSU2_TR(0x564943);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B564944:{NFSU2_TR(0x564944);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B564945:{NFSU2_TR(0x564945);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B564946:{NFSU2_TR(0x564946);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B564947:{NFSU2_TR(0x564947);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B56494a:L56494a:{c.instructions+=2;NFSU2_TR(0x56494a);
w4(R+4,u32(0x839c40ull));
}
B56494f:{NFSU2_TR(0x56494f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x564954ull));
TAIL_STATIC(0x50fd10u,50f);
}
B564954:L564954:{c.instructions+=2;NFSU2_TR(0x564954);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B564956:{NFSU2_TR(0x564956);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x564897u);}goto L564897;}}
}
B56495c:L56495c:{c.instructions+=3;NFSU2_TR(0x56495c);
__builtin_memmove((R+0),gp(0x844ad8),1);
}
B564961:{NFSU2_TR(0x564961);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B564963:{NFSU2_TR(0x564963);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x564897u);}goto L564897;}}
}
B564969:L564969:{c.instructions+=11;NFSU2_TR(0x564969);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B56496c:{NFSU2_TR(0x56496c);
u8 U[4];
w4(U+0,u32(0x71851654ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B564971:{NFSU2_TR(0x564971);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B564973:{NFSU2_TR(0x564973);
u8 U[4];
w4(U+0,u32(0x34dc1bcfull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B564978:{NFSU2_TR(0x564978);
u8 U[4];
w4(U+0,u32(0x1fab5998ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56497d:{NFSU2_TR(0x56497d);
u8 U[4];
w4(U+0,u32(0x24dd40cfull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B564982:{NFSU2_TR(0x564982);
u8 U[4];
w4(U+0,u32(0x61cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B564987:{NFSU2_TR(0x564987);
u8 U[4];
w4(U+0,u32(0xf770ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56498c:{NFSU2_TR(0x56498c);
u8 U[4];
w4(U+0,u32(0x783fe5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B564991:{NFSU2_TR(0x564991);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B564992:{NFSU2_TR(0x564992);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x564997ull));
TAIL_STATIC(0x558790u,558);
}
B564997:L564997:{c.instructions+=3;NFSU2_TR(0x564997);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x24ull))));
}
B56499a:{NFSU2_TR(0x56499a);
__builtin_memmove((R+4),(R+28),4);
}
B56499c:{NFSU2_TR(0x56499c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5649a1ull));
TAIL_STATIC(0x538c00u,538);
}
B5649a1:L5649a1:{c.instructions+=5;NFSU2_TR(0x5649a1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5649a2:{NFSU2_TR(0x5649a2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5649a3:{NFSU2_TR(0x5649a3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5649a4:{NFSU2_TR(0x5649a4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5649a5:{NFSU2_TR(0x5649a5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5649a8:L5649a8:{c.instructions+=2;NFSU2_TR(0x5649a8);
__builtin_memmove((R+4),gp(0x8384c4),4);
}
B5649ae:{NFSU2_TR(0x5649ae);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5649b3ull));
TAIL_STATIC(0x52cdd0u,52c);
}
B5649b3:L5649b3:{c.instructions+=5;NFSU2_TR(0x5649b3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5649b4:{NFSU2_TR(0x5649b4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5649b5:{NFSU2_TR(0x5649b5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5649b6:{NFSU2_TR(0x5649b6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5649b7:{NFSU2_TR(0x5649b7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5649ba:L5649ba:{c.instructions+=2;NFSU2_TR(0x5649ba);
u8 U[14];
__builtin_memmove((U+6),(R+24),4);
w1(R+512,u8((r4(U+6))<(u32(0x461a18eeull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x461a18eeull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x461a18eeull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5649c0:{NFSU2_TR(0x5649c0);
{goto L564a12;}
}
B5649c2:L5649c2:{c.instructions+=9;NFSU2_TR(0x5649c2);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5649c5:{NFSU2_TR(0x5649c5);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5649c7:{NFSU2_TR(0x5649c7);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5649c9:{NFSU2_TR(0x5649c9);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5649cb:{NFSU2_TR(0x5649cb);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5649cd:{NFSU2_TR(0x5649cd);
u8 U[4];
w4(U+0,u32(0x51ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5649cf:{NFSU2_TR(0x5649cf);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5649d0:{NFSU2_TR(0x5649d0);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5649d1:{NFSU2_TR(0x5649d1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5649d6ull));
TAIL_STATIC(0x4a3100u,4a3);
}
B5649d6:L5649d6:{c.instructions+=6;NFSU2_TR(0x5649d6);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x1cull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x1cull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x1cull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5649d9:{NFSU2_TR(0x5649d9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5649da:{NFSU2_TR(0x5649da);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5649db:{NFSU2_TR(0x5649db);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5649dc:{NFSU2_TR(0x5649dc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5649dd:{NFSU2_TR(0x5649dd);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5649e0:L5649e0:{c.instructions+=2;NFSU2_TR(0x5649e0);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+512,u8((r4(U+0))<(u32(0xb4623f67ull))));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xb4623f67ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5649e6:{NFSU2_TR(0x5649e6);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L564b21;}}
}
B5649ec:L5649ec:{c.instructions+=1;NFSU2_TR(0x5649ec);
if(r1(R+518)){{goto L564ad0;}}
}
B5649f2:L5649f2:{c.instructions+=2;NFSU2_TR(0x5649f2);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+512,u8((r4(U+0))<(u32(0x8fb8a616ull))));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x8fb8a616ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5649f8:{NFSU2_TR(0x5649f8);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L564abf;}}
}
B5649fe:L5649fe:{c.instructions+=1;NFSU2_TR(0x5649fe);
if(r1(R+518)){{goto L564aa0;}}
}
B564a04:L564a04:{c.instructions+=2;NFSU2_TR(0x564a04);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x526adefcull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B564a0a:{NFSU2_TR(0x564a0a);
if(r1(R+518)){{goto L564a26;}}
}
B564a0c:L564a0c:{c.instructions+=1;NFSU2_TR(0x564a0c);
u8 U[14];
__builtin_memmove((U+6),(R+24),4);
w1(R+512,u8((r4(U+6))<(u32(0x8867412dull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x8867412dull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x8867412dull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B564a12:L564a12:{c.instructions+=1;NFSU2_TR(0x564a12);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L564c77;}}
}
B564a18:L564a18:{c.instructions+=2;NFSU2_TR(0x564a18);
__builtin_memmove((R+4),(R+28),4);
}
B564a1a:{NFSU2_TR(0x564a1a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x564a1full));
TAIL_STATIC(0x53cc70u,53c);
}
B564a1f:L564a1f:{c.instructions+=5;NFSU2_TR(0x564a1f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B564a20:{NFSU2_TR(0x564a20);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B564a21:{NFSU2_TR(0x564a21);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B564a22:{NFSU2_TR(0x564a22);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B564a23:{NFSU2_TR(0x564a23);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B564a26:L564a26:{c.instructions+=2;NFSU2_TR(0x564a26);
u8 U[4];
w4(U+0,u32(0x790000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B564a2b:{NFSU2_TR(0x564a2b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x564a30ull));
TAIL_STATIC(0x52cf60u,52c);
}
B564a30:L564a30:{c.instructions+=3;NFSU2_TR(0x564a30);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B564a33:{NFSU2_TR(0x564a33);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B564a35:{NFSU2_TR(0x564a35);
if(r1(R+518)){{goto L564a44;}}
}
B564a37:L564a37:{c.instructions+=2;NFSU2_TR(0x564a37);
u8 U[4];
w4(U+0,u32(0x790000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B564a3c:{NFSU2_TR(0x564a3c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x564a41ull));
TAIL_STATIC(0x5379a0u,537);
}
B564a41:L564a41:{c.instructions+=1;NFSU2_TR(0x564a41);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B564a44:L564a44:{c.instructions+=2;NFSU2_TR(0x564a44);
w4(R+4,u32(0x839c40ull));
}
B564a49:{NFSU2_TR(0x564a49);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x564a4eull));
TAIL_STATIC(0x50fdf0u,50f);
}
B564a4e:L564a4e:{c.instructions+=4;NFSU2_TR(0x564a4e);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B564a50:{NFSU2_TR(0x564a50);
w4(R+4,u32(0x839c40ull));
}
B564a55:{NFSU2_TR(0x564a55);
s1(0x83a655,u8(0x0ull));
}
B564a5c:{NFSU2_TR(0x564a5c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x564a61ull));
TAIL_STATIC(0x50f7e0u,50f);
}
B564a61:L564a61:{c.instructions+=4;NFSU2_TR(0x564a61);
__builtin_memmove((R+4),gp(0x8900d8),4);
}
B564a67:{NFSU2_TR(0x564a67);
u8 U[4];
w4(U+0,u32(0xaull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B564a69:{NFSU2_TR(0x564a69);
s4(0x83a644,u32(0x1ull));
}
B564a73:{NFSU2_TR(0x564a73);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x564a78ull));
TAIL_STATIC(0x5f4240u,5f4);
}
B564a78:L564a78:{c.instructions+=4;NFSU2_TR(0x564a78);
__builtin_memmove((R+4),gp(0x83a64c),4);
}
B564a7e:{NFSU2_TR(0x564a7e);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x8900acull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B564a85:{NFSU2_TR(0x564a85);
__builtin_memmove((R+24),gp(0x83a540),4);
}
B564a8b:{NFSU2_TR(0x564a8b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x564a90ull));
TAIL_STATIC(0x5ea8b0u,5ea);
}
B564a90:L564a90:{c.instructions+=9;NFSU2_TR(0x564a90);
w1(R+512,u8((r1(R+0))!=(u8(0x0ull))));
w1(R+0,u8(0-u32(r1(R+0))));
}
B564a92:{NFSU2_TR(0x564a92);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B564a93:{NFSU2_TR(0x564a93);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B564a94:{NFSU2_TR(0x564a94);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(R+0))));
w4(R+0,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B564a96:{NFSU2_TR(0x564a96);
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
B564a98:{NFSU2_TR(0x564a98);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B564a9b:{NFSU2_TR(0x564a9b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B564a9c:{NFSU2_TR(0x564a9c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B564a9d:{NFSU2_TR(0x564a9d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B564aa0:L564aa0:{c.instructions+=4;NFSU2_TR(0x564aa0);
__builtin_memmove((R+8),gp(0x83a63c),4);
}
B564aa6:{NFSU2_TR(0x564aa6);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B564aa7:{NFSU2_TR(0x564aa7);
w4(R+4,u32(0x839c40ull));
}
B564aac:{NFSU2_TR(0x564aac);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x564ab1ull));
TAIL_STATIC(0x50fc20u,50f);
}
B564ab1:L564ab1:{c.instructions+=2;NFSU2_TR(0x564ab1);
__builtin_memmove((R+4),(R+28),4);
}
B564ab3:{NFSU2_TR(0x564ab3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x564ab8ull));
TAIL_STATIC(0x538ca0u,538);
}
B564ab8:L564ab8:{c.instructions+=5;NFSU2_TR(0x564ab8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B564ab9:{NFSU2_TR(0x564ab9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B564aba:{NFSU2_TR(0x564aba);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B564abb:{NFSU2_TR(0x564abb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B564abc:{NFSU2_TR(0x564abc);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B564abf:L564abf:{c.instructions+=2;NFSU2_TR(0x564abf);
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
B564ac5:{NFSU2_TR(0x564ac5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L564c77;}}
}
B564acb:L564acb:{c.instructions+=1;NFSU2_TR(0x564acb);
{goto L564b69;}
}
B564ad0:L564ad0:{c.instructions+=4;NFSU2_TR(0x564ad0);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B564ad3:{NFSU2_TR(0x564ad3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B564ad4:{NFSU2_TR(0x564ad4);
u8 U[4];
w4(U+0,u32(0x251bf83eull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B564ad9:{NFSU2_TR(0x564ad9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x564adeull));
TAIL_STATIC(0x55dda0u,55d);
}
B564ade:L564ade:{c.instructions+=2;NFSU2_TR(0x564ade);
u8 U[4];
w4(U+0,u32(0x790000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B564ae3:{NFSU2_TR(0x564ae3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x564ae8ull));
TAIL_STATIC(0x52cf60u,52c);
}
B564ae8:L564ae8:{c.instructions+=3;NFSU2_TR(0x564ae8);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B564aeb:{NFSU2_TR(0x564aeb);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B564aed:{NFSU2_TR(0x564aed);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L564b07;}}
}
B564aef:L564aef:{c.instructions+=6;NFSU2_TR(0x564aef);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B564af2:{NFSU2_TR(0x564af2);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B564af4:{NFSU2_TR(0x564af4);
u8 U[4];
w4(U+0,u32(0xffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B564af9:{NFSU2_TR(0x564af9);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B564afa:{NFSU2_TR(0x564afa);
u8 U[4];
w4(U+0,u32(0x790000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B564aff:{NFSU2_TR(0x564aff);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x564b04ull));
TAIL_STATIC(0x555f10u,555);
}
B564b04:L564b04:{c.instructions+=1;NFSU2_TR(0x564b04);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B564b07:L564b07:{c.instructions+=6;NFSU2_TR(0x564b07);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B564b0a:{NFSU2_TR(0x564b0a);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B564b0d:{NFSU2_TR(0x564b0d);
__builtin_memmove((R+4),gp(0x8384d8),4);
}
B564b13:{NFSU2_TR(0x564b13);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B564b14:{NFSU2_TR(0x564b14);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B564b15:{NFSU2_TR(0x564b15);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x564b1aull));
TAIL_STATIC(0x54e6e0u,54e);
}
B564b1a:L564b1a:{c.instructions+=5;NFSU2_TR(0x564b1a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B564b1b:{NFSU2_TR(0x564b1b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B564b1c:{NFSU2_TR(0x564b1c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B564b1d:{NFSU2_TR(0x564b1d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B564b1e:{NFSU2_TR(0x564b1e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B564b21:L564b21:{c.instructions+=2;NFSU2_TR(0x564b21);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+512,u8((r4(U+0))<(u32(0xe1a57d51ull))));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xe1a57d51ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B564b27:{NFSU2_TR(0x564b27);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L564c07;}}
}
B564b2d:L564b2d:{c.instructions+=1;NFSU2_TR(0x564b2d);
if(r1(R+518)){{goto L564bbd;}}
}
B564b33:L564b33:{c.instructions+=2;NFSU2_TR(0x564b33);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xb4edeb6dull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B564b39:{NFSU2_TR(0x564b39);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5648fau);}goto L5648fa;}}
}
B564b3f:L564b3f:{c.instructions+=2;NFSU2_TR(0x564b3f);
u8 U[14];
__builtin_memmove((U+6),(R+24),4);
w1(R+512,u8((r4(U+6))<(u32(0xb5af2461ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0xb5af2461ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0xb5af2461ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B564b45:{NFSU2_TR(0x564b45);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L564c77;}}
}
B564b4b:L564b4b:{c.instructions+=3;NFSU2_TR(0x564b4b);
__builtin_memmove((R+0),gp(0x83a7a4),1);
}
B564b50:{NFSU2_TR(0x564b50);
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
B564b52:{NFSU2_TR(0x564b52);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L564c77;}}
}
B564b58:L564b58:{c.instructions+=8;NFSU2_TR(0x564b58);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B564b5b:{NFSU2_TR(0x564b5b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B564b5e:{NFSU2_TR(0x564b5e);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B564b5f:{NFSU2_TR(0x564b5f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B564b60:{NFSU2_TR(0x564b60);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B564b61:{NFSU2_TR(0x564b61);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B564b62:{NFSU2_TR(0x564b62);
__builtin_memmove((R+4),(R+28),4);
}
B564b64:{NFSU2_TR(0x564b64);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x564b69ull));
TAIL_STATIC(0x50da20u,50d);
}
B564b69:L564b69:{c.instructions+=2;NFSU2_TR(0x564b69);
__builtin_memmove((R+4),(R+28),4);
}
B564b6b:{NFSU2_TR(0x564b6b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x564b70ull));
TAIL_STATIC(0x5100e0u,510);
}
B564b70:L564b70:{c.instructions+=2;NFSU2_TR(0x564b70);
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
B564b72:{NFSU2_TR(0x564b72);
if(r1(R+518)){{goto L564c77;}}
}
B564b78:L564b78:{c.instructions+=5;NFSU2_TR(0x564b78);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B564b7b:{NFSU2_TR(0x564b7b);
u8 U[4];
w4(U+0,u32(0xde6eff34ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B564b80:{NFSU2_TR(0x564b80);
u8 U[4];
w4(U+0,u32(0x47ff4e7cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B564b85:{NFSU2_TR(0x564b85);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B564b86:{NFSU2_TR(0x564b86);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x564b8bull));
TAIL_STATIC(0x537d40u,537);
}
B564b8b:L564b8b:{c.instructions+=3;NFSU2_TR(0x564b8b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B564b8e:{NFSU2_TR(0x564b8e);
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
B564b90:{NFSU2_TR(0x564b90);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L564c77;}}
}
B564b96:L564b96:{c.instructions+=6;NFSU2_TR(0x564b96);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B564b99:{NFSU2_TR(0x564b99);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B564b9b:{NFSU2_TR(0x564b9b);
u8 U[4];
w4(U+0,u32(0xde6eff34ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B564ba0:{NFSU2_TR(0x564ba0);
u8 U[4];
w4(U+0,u32(0x47ff4e7cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B564ba5:{NFSU2_TR(0x564ba5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B564ba6:{NFSU2_TR(0x564ba6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x564babull));
TAIL_STATIC(0x537c60u,537);
}
B564bab:L564bab:{c.instructions+=2;NFSU2_TR(0x564bab);
u8 U[4];
w4(U+0,u32(0x790000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B564bb0:{NFSU2_TR(0x564bb0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x564bb5ull));
TAIL_STATIC(0x52cf60u,52c);
}
B564bb5:L564bb5:{c.instructions+=2;NFSU2_TR(0x564bb5);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B564bb8:{NFSU2_TR(0x564bb8);
{goto L564c66;}
}
B564bbd:L564bbd:{c.instructions+=2;NFSU2_TR(0x564bbd);
u8 U[4];
w4(U+0,u32(0x790000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B564bc2:{NFSU2_TR(0x564bc2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x564bc7ull));
TAIL_STATIC(0x52cf60u,52c);
}
B564bc7:L564bc7:{c.instructions+=3;NFSU2_TR(0x564bc7);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B564bca:{NFSU2_TR(0x564bca);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B564bcc:{NFSU2_TR(0x564bcc);
if(r1(R+518)){{goto L564bdb;}}
}
B564bce:L564bce:{c.instructions+=2;NFSU2_TR(0x564bce);
u8 U[4];
w4(U+0,u32(0x790000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B564bd3:{NFSU2_TR(0x564bd3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x564bd8ull));
TAIL_STATIC(0x5379a0u,537);
}
B564bd8:L564bd8:{c.instructions+=1;NFSU2_TR(0x564bd8);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B564bdb:L564bdb:{c.instructions+=2;NFSU2_TR(0x564bdb);
w4(R+4,u32(0x839c40ull));
}
B564be0:{NFSU2_TR(0x564be0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x564be5ull));
TAIL_STATIC(0x50fdf0u,50f);
}
B564be5:L564be5:{c.instructions+=3;NFSU2_TR(0x564be5);
__builtin_memmove((R+4),gp(0x8900d8),4);
}
B564beb:{NFSU2_TR(0x564beb);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B564bed:{NFSU2_TR(0x564bed);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x564bf2ull));
TAIL_STATIC(0x5f4240u,5f4);
}
B564bf2:L564bf2:{c.instructions+=4;NFSU2_TR(0x564bf2);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B564bf5:{NFSU2_TR(0x564bf5);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B564bf7:{NFSU2_TR(0x564bf7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B564bf8:{NFSU2_TR(0x564bf8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x564bfdull));
TAIL_STATIC(0x50b8c0u,50b);
}
B564bfd:L564bfd:{c.instructions+=6;NFSU2_TR(0x564bfd);
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
B564c00:{NFSU2_TR(0x564c00);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B564c01:{NFSU2_TR(0x564c01);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B564c02:{NFSU2_TR(0x564c02);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B564c03:{NFSU2_TR(0x564c03);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B564c04:{NFSU2_TR(0x564c04);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B564c07:L564c07:{c.instructions+=2;NFSU2_TR(0x564c07);
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
B564c0d:{NFSU2_TR(0x564c0d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L564c77;}}
}
B564c0f:L564c0f:{c.instructions+=3;NFSU2_TR(0x564c0f);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x13cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B564c15:{NFSU2_TR(0x564c15);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x911ab364ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B564c1a:{NFSU2_TR(0x564c1a);
if(r1(R+518)){{goto L564c23;}}
}
B564c1c:L564c1c:{c.instructions+=2;NFSU2_TR(0x564c1c);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0xb5af2461ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0xb5af2461ull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0xb5af2461ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B564c21:{NFSU2_TR(0x564c21);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L564c77;}}
}
B564c23:L564c23:{c.instructions+=2;NFSU2_TR(0x564c23);
u8 U[4];
w4(U+0,u32(0x790000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B564c28:{NFSU2_TR(0x564c28);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x564c2dull));
TAIL_STATIC(0x52cf60u,52c);
}
B564c2d:L564c2d:{c.instructions+=3;NFSU2_TR(0x564c2d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B564c30:{NFSU2_TR(0x564c30);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B564c32:{NFSU2_TR(0x564c32);
if(r1(R+518)){{goto L564c41;}}
}
B564c34:L564c34:{c.instructions+=2;NFSU2_TR(0x564c34);
u8 U[4];
w4(U+0,u32(0x790000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B564c39:{NFSU2_TR(0x564c39);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x564c3eull));
TAIL_STATIC(0x5379a0u,537);
}
B564c3e:L564c3e:{c.instructions+=1;NFSU2_TR(0x564c3e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B564c41:L564c41:{c.instructions+=3;NFSU2_TR(0x564c41);
__builtin_memmove((R+4),gp(0x8900d8),4);
}
B564c47:{NFSU2_TR(0x564c47);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B564c49:{NFSU2_TR(0x564c49);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x564c4eull));
TAIL_STATIC(0x5f4240u,5f4);
}
B564c4e:L564c4e:{c.instructions+=4;NFSU2_TR(0x564c4e);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B564c51:{NFSU2_TR(0x564c51);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B564c53:{NFSU2_TR(0x564c53);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B564c54:{NFSU2_TR(0x564c54);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x564c59ull));
TAIL_STATIC(0x50b8c0u,50b);
}
B564c59:L564c59:{c.instructions+=2;NFSU2_TR(0x564c59);
u8 U[4];
w4(U+0,u32(0x790000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B564c5e:{NFSU2_TR(0x564c5e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x564c63ull));
TAIL_STATIC(0x52cf60u,52c);
}
B564c63:L564c63:{c.instructions+=1;NFSU2_TR(0x564c63);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B564c66:L564c66:{c.instructions+=2;NFSU2_TR(0x564c66);
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
B564c68:{NFSU2_TR(0x564c68);
if(r1(R+518)){{goto L564c77;}}
}
B564c6a:L564c6a:{c.instructions+=2;NFSU2_TR(0x564c6a);
u8 U[4];
w4(U+0,u32(0x790000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B564c6f:{NFSU2_TR(0x564c6f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x564c74ull));
TAIL_STATIC(0x5379a0u,537);
}
B564c74:L564c74:{c.instructions+=1;NFSU2_TR(0x564c74);
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
B564c77:L564c77:{c.instructions+=1;NFSU2_TR(0x564c77);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B564c78:L564c78:{c.instructions+=4;NFSU2_TR(0x564c78);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B564c79:{NFSU2_TR(0x564c79);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B564c7a:{NFSU2_TR(0x564c7a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B564c7b:{NFSU2_TR(0x564c7b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B564c80:L564c80:{c.instructions+=2;NFSU2_TR(0x564c80);
u8 U[22];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0xc407210ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0xc407210ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0xc407210ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B564c88:{NFSU2_TR(0x564c88);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L564cec;}}
}
B564c8a:L564c8a:{c.instructions+=12;NFSU2_TR(0x564c8a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B564c8b:{NFSU2_TR(0x564c8b);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B564c8f:{NFSU2_TR(0x564c8f);
u8 U[4];
w4(U+0,u32(0x972a44bull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B564c94:{NFSU2_TR(0x564c94);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B564c96:{NFSU2_TR(0x564c96);
u8 U[4];
w4(U+0,u32(0x34dc1bcfull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B564c9b:{NFSU2_TR(0x564c9b);
u8 U[4];
w4(U+0,u32(0x34dc1bcfull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B564ca0:{NFSU2_TR(0x564ca0);
u8 U[4];
w4(U+0,u32(0xe1a57d51ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B564ca5:{NFSU2_TR(0x564ca5);
u8 U[4];
w4(U+0,u32(0x541389e5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B564caa:{NFSU2_TR(0x564caa);
u8 U[4];
w4(U+0,u32(0x639ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B564caf:{NFSU2_TR(0x564caf);
u8 U[4];
w4(U+0,u32(0x795000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B564cb4:{NFSU2_TR(0x564cb4);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B564cb5:{NFSU2_TR(0x564cb5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x564cbaull));
TAIL_STATIC(0x558790u,558);
}
B564cba:L564cba:{c.instructions+=4;NFSU2_TR(0x564cba);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x24ull))));
}
B564cbd:{NFSU2_TR(0x564cbd);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B564cbe:{NFSU2_TR(0x564cbe);
w4(R+4,u32(0x8637b0ull));
}
B564cc3:{NFSU2_TR(0x564cc3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x564cc8ull));
TAIL_STATIC(0x51bb70u,51b);
}
B564cc8:L564cc8:{c.instructions+=3;NFSU2_TR(0x564cc8);
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
B564cca:{NFSU2_TR(0x564cca);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B564ccb:{NFSU2_TR(0x564ccb);
if(r1(R+518)){{goto L564cec;}}
}
B564ccd:L564ccd:{c.instructions+=3;NFSU2_TR(0x564ccd);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B564cd0:{NFSU2_TR(0x564cd0);
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
B564cd2:{NFSU2_TR(0x564cd2);
if(r1(R+518)){{goto L564cec;}}
}
B564cd4:L564cd4:{c.instructions+=3;NFSU2_TR(0x564cd4);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B564cd7:{NFSU2_TR(0x564cd7);
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
B564cd9:{NFSU2_TR(0x564cd9);
if(r1(R+518)){{goto L564cec;}}
}
B564cdb:L564cdb:{c.instructions+=6;NFSU2_TR(0x564cdb);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B564cdc:{NFSU2_TR(0x564cdc);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B564cde:{NFSU2_TR(0x564cde);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B564ce0:{NFSU2_TR(0x564ce0);
u8 U[4];
w4(U+0,u32(0x96dda9e6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B564ce5:{NFSU2_TR(0x564ce5);
__builtin_memmove((R+4),(R+0),4);
}
B564ce7:{NFSU2_TR(0x564ce7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x564cecull));
TAIL_STATIC(0x55b5c0u,55b);
}
B564cec:L564cec:{c.instructions+=1;NFSU2_TR(0x564cec);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B564cf0:L564cf0:{c.instructions+=2;NFSU2_TR(0x564cf0);
u8 U[22];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0xc407210ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0xc407210ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0xc407210ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B564cf8:{NFSU2_TR(0x564cf8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L564d5c;}}
}
B564cfa:L564cfa:{c.instructions+=12;NFSU2_TR(0x564cfa);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B564cfb:{NFSU2_TR(0x564cfb);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B564cff:{NFSU2_TR(0x564cff);
u8 U[4];
w4(U+0,u32(0x455c3f80ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B564d04:{NFSU2_TR(0x564d04);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B564d06:{NFSU2_TR(0x564d06);
u8 U[4];
w4(U+0,u32(0x34dc1bcfull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B564d0b:{NFSU2_TR(0x564d0b);
u8 U[4];
w4(U+0,u32(0x34dc1bcfull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B564d10:{NFSU2_TR(0x564d10);
u8 U[4];
w4(U+0,u32(0x526adefcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B564d15:{NFSU2_TR(0x564d15);
u8 U[4];
w4(U+0,u32(0x61cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B564d1a:{NFSU2_TR(0x564d1a);
u8 U[4];
w4(U+0,u32(0xf770ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B564d1f:{NFSU2_TR(0x564d1f);
u8 U[4];
w4(U+0,u32(0x783fe5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B564d24:{NFSU2_TR(0x564d24);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B564d25:{NFSU2_TR(0x564d25);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x564d2aull));
TAIL_STATIC(0x558790u,558);
}
B564d2a:L564d2a:{c.instructions+=4;NFSU2_TR(0x564d2a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x24ull))));
}
B564d2d:{NFSU2_TR(0x564d2d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B564d2e:{NFSU2_TR(0x564d2e);
w4(R+4,u32(0x8637b0ull));
}
B564d33:{NFSU2_TR(0x564d33);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x564d38ull));
TAIL_STATIC(0x51bb70u,51b);
}
B564d38:L564d38:{c.instructions+=3;NFSU2_TR(0x564d38);
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
B564d3a:{NFSU2_TR(0x564d3a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B564d3b:{NFSU2_TR(0x564d3b);
if(r1(R+518)){{goto L564d5c;}}
}
B564d3d:L564d3d:{c.instructions+=3;NFSU2_TR(0x564d3d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B564d40:{NFSU2_TR(0x564d40);
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
B564d42:{NFSU2_TR(0x564d42);
if(r1(R+518)){{goto L564d5c;}}
}
B564d44:L564d44:{c.instructions+=3;NFSU2_TR(0x564d44);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B564d47:{NFSU2_TR(0x564d47);
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
B564d49:{NFSU2_TR(0x564d49);
if(r1(R+518)){{goto L564d5c;}}
}
B564d4b:L564d4b:{c.instructions+=6;NFSU2_TR(0x564d4b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B564d4c:{NFSU2_TR(0x564d4c);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B564d4e:{NFSU2_TR(0x564d4e);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B564d50:{NFSU2_TR(0x564d50);
u8 U[4];
w4(U+0,u32(0x96dda9e6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B564d55:{NFSU2_TR(0x564d55);
__builtin_memmove((R+4),(R+0),4);
}
B564d57:{NFSU2_TR(0x564d57);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x564d5cull));
TAIL_STATIC(0x55b5c0u,55b);
}
B564d5c:L564d5c:{c.instructions+=1;NFSU2_TR(0x564d5c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B564d60:L564d60:{c.instructions+=2;NFSU2_TR(0x564d60);
u8 U[22];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0xc407210ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0xc407210ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0xc407210ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B564d68:{NFSU2_TR(0x564d68);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L564dcc;}}
}
B564d6a:L564d6a:{c.instructions+=12;NFSU2_TR(0x564d6a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B564d6b:{NFSU2_TR(0x564d6b);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B564d6f:{NFSU2_TR(0x564d6f);
u8 U[4];
w4(U+0,u32(0xd7de8abull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B564d74:{NFSU2_TR(0x564d74);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B564d76:{NFSU2_TR(0x564d76);
u8 U[4];
w4(U+0,u32(0x34dc1bcfull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B564d7b:{NFSU2_TR(0x564d7b);
u8 U[4];
w4(U+0,u32(0x34dc1bcfull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B564d80:{NFSU2_TR(0x564d80);
u8 U[4];
w4(U+0,u32(0x51123592ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B564d85:{NFSU2_TR(0x564d85);
u8 U[4];
w4(U+0,u32(0x61cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B564d8a:{NFSU2_TR(0x564d8a);
u8 U[4];
w4(U+0,u32(0xf770ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B564d8f:{NFSU2_TR(0x564d8f);
u8 U[4];
w4(U+0,u32(0x783fe5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B564d94:{NFSU2_TR(0x564d94);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B564d95:{NFSU2_TR(0x564d95);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x564d9aull));
TAIL_STATIC(0x558790u,558);
}
B564d9a:L564d9a:{c.instructions+=4;NFSU2_TR(0x564d9a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x24ull))));
}
B564d9d:{NFSU2_TR(0x564d9d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B564d9e:{NFSU2_TR(0x564d9e);
w4(R+4,u32(0x8637b0ull));
}
B564da3:{NFSU2_TR(0x564da3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x564da8ull));
TAIL_STATIC(0x51bb70u,51b);
}
B564da8:L564da8:{c.instructions+=3;NFSU2_TR(0x564da8);
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
B564daa:{NFSU2_TR(0x564daa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B564dab:{NFSU2_TR(0x564dab);
if(r1(R+518)){{goto L564dcc;}}
}
B564dad:L564dad:{c.instructions+=3;NFSU2_TR(0x564dad);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B564db0:{NFSU2_TR(0x564db0);
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
B564db2:{NFSU2_TR(0x564db2);
if(r1(R+518)){{goto L564dcc;}}
}
B564db4:L564db4:{c.instructions+=3;NFSU2_TR(0x564db4);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B564db7:{NFSU2_TR(0x564db7);
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
B564db9:{NFSU2_TR(0x564db9);
if(r1(R+518)){{goto L564dcc;}}
}
B564dbb:L564dbb:{c.instructions+=6;NFSU2_TR(0x564dbb);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B564dbc:{NFSU2_TR(0x564dbc);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B564dbe:{NFSU2_TR(0x564dbe);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B564dc0:{NFSU2_TR(0x564dc0);
u8 U[4];
w4(U+0,u32(0x96dda9e6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B564dc5:{NFSU2_TR(0x564dc5);
__builtin_memmove((R+4),(R+0),4);
}
B564dc7:{NFSU2_TR(0x564dc7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x564dccull));
TAIL_STATIC(0x55b5c0u,55b);
}
B564dcc:L564dcc:{c.instructions+=1;NFSU2_TR(0x564dcc);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B564dd0:L564dd0:{c.instructions+=4;NFSU2_TR(0x564dd0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B564dd1:{NFSU2_TR(0x564dd1);
__builtin_memmove((R+20),(R+16),4);
}
B564dd3:{NFSU2_TR(0x564dd3);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0xc407210ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0xc407210ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0xc407210ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B564dda:{NFSU2_TR(0x564dda);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L564e95;}}
}
B564de0:L564de0:{c.instructions+=8;NFSU2_TR(0x564de0);
__builtin_memmove((R+4),gp(0x83a64c),4);
}
B564de6:{NFSU2_TR(0x564de6);
__builtin_memmove((R+0),gp(0x7fa21c),4);
}
B564deb:{NFSU2_TR(0x564deb);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x8900acull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B564df2:{NFSU2_TR(0x564df2);
__builtin_memmove((R+4),gp(0x8900d8),4);
}
B564df8:{NFSU2_TR(0x564df8);
__builtin_memmove(gp(0x83a650),(R+0),4);
}
B564dfd:{NFSU2_TR(0x564dfd);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B564e00:{NFSU2_TR(0x564e00);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B564e01:{NFSU2_TR(0x564e01);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x564e06ull));
TAIL_STATIC(0x5f4230u,5f4);
}
B564e06:L564e06:{c.instructions+=4;NFSU2_TR(0x564e06);
__builtin_memmove((R+4),gp(0x850078),4);
}
B564e0c:{NFSU2_TR(0x564e0c);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x100ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B564e12:{NFSU2_TR(0x564e12);
w4(R+0,u32(0x40813f63ull));
}
B564e17:{NFSU2_TR(0x564e17);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L564e20;}}
}
B564e19:L564e19:{c.instructions+=2;NFSU2_TR(0x564e19);
w4(R+0,u32(0xfc820867ull));
}
B564e1e:{NFSU2_TR(0x564e1e);
{goto L564e38;}
}
B564e20:L564e20:{c.instructions+=2;NFSU2_TR(0x564e20);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B564e23:{NFSU2_TR(0x564e23);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L564e38;}}
}
B564e25:L564e25:{c.instructions+=5;NFSU2_TR(0x564e25);
__builtin_memmove((R+0),gp(0x83a640),4);
}
B564e2a:{NFSU2_TR(0x564e2a);
w1(R+512,u8((r4(R+0))!=(u32(0x0ull))));
w4(R+0,u32(0-u32(r4(R+0))));
}
B564e2c:{NFSU2_TR(0x564e2c);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(R+0))));
w4(R+0,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B564e2e:{NFSU2_TR(0x564e2e);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xce5a854bull))));
}
B564e33:{NFSU2_TR(0x564e33);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xe5a0d45eull))));
}
B564e38:L564e38:{c.instructions+=12;NFSU2_TR(0x564e38);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B564e39:{NFSU2_TR(0x564e39);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B564e3c:{NFSU2_TR(0x564e3c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B564e3d:{NFSU2_TR(0x564e3d);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B564e3f:{NFSU2_TR(0x564e3f);
u8 U[4];
w4(U+0,u32(0x34dc1bcfull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B564e44:{NFSU2_TR(0x564e44);
u8 U[4];
w4(U+0,u32(0x34dc1bcfull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B564e49:{NFSU2_TR(0x564e49);
u8 U[4];
w4(U+0,u32(0x30ed2368ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B564e4e:{NFSU2_TR(0x564e4e);
u8 U[4];
w4(U+0,u32(0x61cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B564e53:{NFSU2_TR(0x564e53);
u8 U[4];
w4(U+0,u32(0xf770ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B564e58:{NFSU2_TR(0x564e58);
u8 U[4];
w4(U+0,u32(0x783fe5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B564e5d:{NFSU2_TR(0x564e5d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B564e5e:{NFSU2_TR(0x564e5e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x564e63ull));
TAIL_STATIC(0x558790u,558);
}
B564e63:L564e63:{c.instructions+=4;NFSU2_TR(0x564e63);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x24ull))));
}
B564e66:{NFSU2_TR(0x564e66);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B564e67:{NFSU2_TR(0x564e67);
w4(R+4,u32(0x8637b0ull));
}
B564e6c:{NFSU2_TR(0x564e6c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x564e71ull));
TAIL_STATIC(0x51bb70u,51b);
}
B564e71:L564e71:{c.instructions+=3;NFSU2_TR(0x564e71);
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
B564e73:{NFSU2_TR(0x564e73);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B564e74:{NFSU2_TR(0x564e74);
if(r1(R+518)){{goto L564e95;}}
}
B564e76:L564e76:{c.instructions+=3;NFSU2_TR(0x564e76);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B564e79:{NFSU2_TR(0x564e79);
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
B564e7b:{NFSU2_TR(0x564e7b);
if(r1(R+518)){{goto L564e95;}}
}
B564e7d:L564e7d:{c.instructions+=3;NFSU2_TR(0x564e7d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B564e80:{NFSU2_TR(0x564e80);
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
B564e82:{NFSU2_TR(0x564e82);
if(r1(R+518)){{goto L564e95;}}
}
B564e84:L564e84:{c.instructions+=6;NFSU2_TR(0x564e84);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B564e85:{NFSU2_TR(0x564e85);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B564e87:{NFSU2_TR(0x564e87);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B564e89:{NFSU2_TR(0x564e89);
u8 U[4];
w4(U+0,u32(0x96dda9e6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B564e8e:{NFSU2_TR(0x564e8e);
__builtin_memmove((R+4),(R+0),4);
}
B564e90:{NFSU2_TR(0x564e90);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x564e95ull));
TAIL_STATIC(0x55b5c0u,55b);
}
B564e95:L564e95:{c.instructions+=2;NFSU2_TR(0x564e95);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B564e96:{NFSU2_TR(0x564e96);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B564ea0:L564ea0:{c.instructions+=12;NFSU2_TR(0x564ea0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B564ea1:{NFSU2_TR(0x564ea1);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B564ea5:{NFSU2_TR(0x564ea5);
u8 U[4];
w4(U+0,u32(0x6bb7037eull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B564eaa:{NFSU2_TR(0x564eaa);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B564eac:{NFSU2_TR(0x564eac);
u8 U[4];
w4(U+0,u32(0x34dc1bcfull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B564eb1:{NFSU2_TR(0x564eb1);
u8 U[4];
w4(U+0,u32(0x34dc1bcfull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B564eb6:{NFSU2_TR(0x564eb6);
u8 U[4];
w4(U+0,u32(0xd05fc3a3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B564ebb:{NFSU2_TR(0x564ebb);
u8 U[4];
w4(U+0,u32(0x61cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B564ec0:{NFSU2_TR(0x564ec0);
u8 U[4];
w4(U+0,u32(0xf770ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B564ec5:{NFSU2_TR(0x564ec5);
u8 U[4];
w4(U+0,u32(0x783fe5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B564eca:{NFSU2_TR(0x564eca);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B564ecb:{NFSU2_TR(0x564ecb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x564ed0ull));
TAIL_STATIC(0x558790u,558);
}
B564ed0:L564ed0:{c.instructions+=4;NFSU2_TR(0x564ed0);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x24ull))));
}
B564ed3:{NFSU2_TR(0x564ed3);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B564ed4:{NFSU2_TR(0x564ed4);
w4(R+4,u32(0x8637b0ull));
}
B564ed9:{NFSU2_TR(0x564ed9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x564edeull));
TAIL_STATIC(0x51bb70u,51b);
}
B564ede:L564ede:{c.instructions+=3;NFSU2_TR(0x564ede);
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
B564ee0:{NFSU2_TR(0x564ee0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B564ee1:{NFSU2_TR(0x564ee1);
if(r1(R+518)){{goto L564f02;}}
}
B564ee3:L564ee3:{c.instructions+=3;NFSU2_TR(0x564ee3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B564ee6:{NFSU2_TR(0x564ee6);
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
B564ee8:{NFSU2_TR(0x564ee8);
if(r1(R+518)){{goto L564f02;}}
}
B564eea:L564eea:{c.instructions+=3;NFSU2_TR(0x564eea);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B564eed:{NFSU2_TR(0x564eed);
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
B564eef:{NFSU2_TR(0x564eef);
if(r1(R+518)){{goto L564f02;}}
}
B564ef1:L564ef1:{c.instructions+=6;NFSU2_TR(0x564ef1);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B564ef2:{NFSU2_TR(0x564ef2);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B564ef4:{NFSU2_TR(0x564ef4);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B564ef6:{NFSU2_TR(0x564ef6);
u8 U[4];
w4(U+0,u32(0x96dda9e6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B564efb:{NFSU2_TR(0x564efb);
__builtin_memmove((R+4),(R+0),4);
}
B564efd:{NFSU2_TR(0x564efd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x564f02ull));
TAIL_STATIC(0x55b5c0u,55b);
}
B564f02:L564f02:{c.instructions+=1;NFSU2_TR(0x564f02);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B564f10:L564f10:{c.instructions+=9;NFSU2_TR(0x564f10);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B564f11:{NFSU2_TR(0x564f11);
__builtin_memmove((R+20),(R+16),4);
}
B564f13:{NFSU2_TR(0x564f13);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B564f14:{NFSU2_TR(0x564f14);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B564f15:{NFSU2_TR(0x564f15);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B564f16:{NFSU2_TR(0x564f16);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B564f19:{NFSU2_TR(0x564f19);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
w1(R+512,u8((r4(U+6))<(u32(0x9120409eull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x9120409eull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x9120409eull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B564f1f:{NFSU2_TR(0x564f1f);
__builtin_memmove((R+12),(R+4),4);
}
B564f21:{NFSU2_TR(0x564f21);
if(r1(R+518)){{goto L564f2f;}}
}
B564f23:L564f23:{c.instructions+=2;NFSU2_TR(0x564f23);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
w1(R+512,u8((r4(U+6))<(u32(0xb5971bf1ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0xb5971bf1ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0xb5971bf1ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B564f29:{NFSU2_TR(0x564f29);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L564fc7;}}
}
B564f2f:L564f2f:{c.instructions+=6;NFSU2_TR(0x564f2f);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B564f32:{NFSU2_TR(0x564f32);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B564f33:{NFSU2_TR(0x564f33);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x6cull))));
__builtin_memmove((R+24),(U+0),4);
}
B564f36:{NFSU2_TR(0x564f36);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B564f37:{NFSU2_TR(0x564f37);
__builtin_memmove((R+4),(R+24),4);
}
B564f39:{NFSU2_TR(0x564f39);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x564f3cull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B564f3c:L564f3c:{c.instructions+=6;NFSU2_TR(0x564f3c);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x9cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B564f42:{NFSU2_TR(0x564f42);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B564f45:{NFSU2_TR(0x564f45);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B564f48:{NFSU2_TR(0x564f48);
__builtin_memmove((R+4),gp(0x83a540),4);
}
B564f4e:{NFSU2_TR(0x564f4e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B564f4f:{NFSU2_TR(0x564f4f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x564f54ull));
TAIL_STATIC(0x59b080u,59b);
}
B564f54:L564f54:{c.instructions+=2;NFSU2_TR(0x564f54);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B564f56:{NFSU2_TR(0x564f56);
if(r1(R+518)){{goto L564f6c;}}
}
B564f58:L564f58:{c.instructions+=7;NFSU2_TR(0x564f58);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B564f5b:{NFSU2_TR(0x564f5b);
__builtin_memmove((R+4),gp(0x83a540),4);
}
B564f61:{NFSU2_TR(0x564f61);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B564f63:{NFSU2_TR(0x564f63);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B564f65:{NFSU2_TR(0x564f65);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B564f66:{NFSU2_TR(0x564f66);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B564f67:{NFSU2_TR(0x564f67);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x564f6cull));
TAIL_STATIC(0x5b4670u,5b4);
}
B564f6c:L564f6c:{c.instructions+=4;NFSU2_TR(0x564f6c);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B564f6f:{NFSU2_TR(0x564f6f);
__builtin_memmove((R+4),gp(0x83a540),4);
}
B564f75:{NFSU2_TR(0x564f75);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B564f76:{NFSU2_TR(0x564f76);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x564f7bull));
TAIL_STATIC(0x59b080u,59b);
}
B564f7b:L564f7b:{c.instructions+=2;NFSU2_TR(0x564f7b);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B564f7d:{NFSU2_TR(0x564f7d);
if(r1(R+518)){{goto L564f91;}}
}
B564f7f:L564f7f:{c.instructions+=5;NFSU2_TR(0x564f7f);
__builtin_memmove((R+4),gp(0x83a540),4);
}
B564f85:{NFSU2_TR(0x564f85);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B564f87:{NFSU2_TR(0x564f87);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B564f89:{NFSU2_TR(0x564f89);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B564f8a:{NFSU2_TR(0x564f8a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x564f8full));
TAIL_STATIC(0x5b3e40u,5b3);
}
B564f8f:L564f8f:{c.instructions+=1;NFSU2_TR(0x564f8f);
{goto L564f97;}
}
B564f91:L564f91:{c.instructions+=1;NFSU2_TR(0x564f91);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B564f97:L564f97:{c.instructions+=7;NFSU2_TR(0x564f97);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B564f9a:{NFSU2_TR(0x564f9a);
{u32 ea_=u32(r4(R+24)+u32(48u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B564f9d:{NFSU2_TR(0x564f9d);
{u32 ea_=u32(r4(R+24)+u32(36u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B564fa0:{NFSU2_TR(0x564fa0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B564fa3:{NFSU2_TR(0x564fa3);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B564fa5:{NFSU2_TR(0x564fa5);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B564fa8:{NFSU2_TR(0x564fa8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L564fb0;}}
}
B564faa:L564faa:{c.instructions+=2;NFSU2_TR(0x564faa);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B564fad:{NFSU2_TR(0x564fad);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B564fb0:L564fb0:{c.instructions+=6;NFSU2_TR(0x564fb0);
{u32 ea_=u32(r4(R+24)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B564fb3:{NFSU2_TR(0x564fb3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B564fb6:{NFSU2_TR(0x564fb6);
{u32 ea_=u32(r4(R+24)+u32(40u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B564fb9:{NFSU2_TR(0x564fb9);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B564fbb:{NFSU2_TR(0x564fbb);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B564fbe:{NFSU2_TR(0x564fbe);
if(r1(R+514)){{goto L564fc6;}}
}
B564fc0:L564fc0:{c.instructions+=2;NFSU2_TR(0x564fc0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B564fc3:{NFSU2_TR(0x564fc3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B564fc6:L564fc6:{c.instructions+=1;NFSU2_TR(0x564fc6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B564fc7:L564fc7:{c.instructions+=3;NFSU2_TR(0x564fc7);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B564fca:{NFSU2_TR(0x564fca);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x9ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x9ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B564fcd:{NFSU2_TR(0x564fcd);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x565005u,565);}
}
B564fcf:L564fcf:{c.instructions+=2;NFSU2_TR(0x564fcf);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0xfull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xfull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B564fd2:{NFSU2_TR(0x564fd2);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){TAIL_STATIC(0x565005u,565);}
}
B564fd4:L564fd4:{c.instructions+=4;NFSU2_TR(0x564fd4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B564fd7:{NFSU2_TR(0x564fd7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B564fd8:{NFSU2_TR(0x564fd8);
w4(R+4,u32(0x8637b0ull));
}
B564fdd:{NFSU2_TR(0x564fdd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x564fe2ull));
TAIL_STATIC(0x51bb70u,51b);
}
B564fe2:L564fe2:{c.instructions+=2;NFSU2_TR(0x564fe2);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B564fe4:{NFSU2_TR(0x564fe4);
if(r1(R+518)){TAIL_STATIC(0x565005u,565);}
}
B564fe6:L564fe6:{c.instructions+=3;NFSU2_TR(0x564fe6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B564fe9:{NFSU2_TR(0x564fe9);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B564feb:{NFSU2_TR(0x564feb);
if(r1(R+518)){TAIL_STATIC(0x565005u,565);}
}
B564fed:L564fed:{c.instructions+=3;NFSU2_TR(0x564fed);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B564ff0:{NFSU2_TR(0x564ff0);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B564ff2:{NFSU2_TR(0x564ff2);
if(r1(R+518)){TAIL_STATIC(0x565005u,565);}
}
B564ff4:L564ff4:{c.instructions+=5;NFSU2_TR(0x564ff4);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B564ff5:{NFSU2_TR(0x564ff5);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B564ff7:{NFSU2_TR(0x564ff7);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B564ff9:{NFSU2_TR(0x564ff9);
u8 U[4];
w4(U+0,u32(0x5fe4bae4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B564ffe:{NFSU2_TR(0x564ffe);
__builtin_memmove((R+4),(R+0),4);
TAIL_STATIC(0x565000u,565);
}
XIT:NFSU2_TR_EXIT(0x564,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
