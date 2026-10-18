#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_413(u8* __restrict R,Cpu& c);
u32 body_43d(u8* __restrict R,Cpu& c);
u32 body_495(u8* __restrict R,Cpu& c);
u32 body_4a5(u8* __restrict R,Cpu& c);
u32 body_4c1(u8* __restrict R,Cpu& c);
u32 body_4d8(u8* __restrict R,Cpu& c);
u32 body_503(u8* __restrict R,Cpu& c);
u32 body_505(u8* __restrict R,Cpu& c);
u32 body_50b(u8* __restrict R,Cpu& c);
u32 body_50c(u8* __restrict R,Cpu& c);
u32 body_50d(u8* __restrict R,Cpu& c);
u32 body_50e(u8* __restrict R,Cpu& c);
u32 body_50f(u8* __restrict R,Cpu& c);
u32 body_514(u8* __restrict R,Cpu& c);
u32 body_51b(u8* __restrict R,Cpu& c);
u32 body_51c(u8* __restrict R,Cpu& c);
u32 body_51d(u8* __restrict R,Cpu& c);
u32 body_51f(u8* __restrict R,Cpu& c);
u32 body_521(u8* __restrict R,Cpu& c);
u32 body_524(u8* __restrict R,Cpu& c);
u32 body_528(u8* __restrict R,Cpu& c);
u32 body_52f(u8* __restrict R,Cpu& c);
u32 body_537(u8* __restrict R,Cpu& c);
u32 body_538(u8* __restrict R,Cpu& c);
u32 body_53b(u8* __restrict R,Cpu& c);
u32 body_53c(u8* __restrict R,Cpu& c);
u32 body_542(u8* __restrict R,Cpu& c);
u32 body_543(u8* __restrict R,Cpu& c);
u32 body_545(u8* __restrict R,Cpu& c);
u32 body_547(u8* __restrict R,Cpu& c);
u32 body_548(u8* __restrict R,Cpu& c);
u32 body_54f(u8* __restrict R,Cpu& c);
u32 body_552(u8* __restrict R,Cpu& c);
u32 body_558(u8* __restrict R,Cpu& c);
u32 body_55b(u8* __restrict R,Cpu& c);
u32 body_55c(u8* __restrict R,Cpu& c);
u32 body_55d(u8* __restrict R,Cpu& c);
u32 body_561(u8* __restrict R,Cpu& c);
u32 body_562(u8* __restrict R,Cpu& c);
u32 body_564(u8* __restrict R,Cpu& c);
u32 body_610(u8* __restrict R,Cpu& c);
u32 body_61b(u8* __restrict R,Cpu& c);
u32 body_631(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x563,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x563,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_563(u8* __restrict R,Cpu& c);
u32 page_563(Cpu& c){return body_563(c.regs.data(),c);}
__attribute__((noinline)) u32 body_563(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x563004:goto L563004;
case 0x563009:goto L563009;
case 0x56300a:c.instructions+=4;goto B56300a;
case 0x56300f:c.instructions+=3;goto B56300f;
case 0x563014:c.instructions+=2;goto B563014;
case 0x563015:c.instructions+=1;goto B563015;
case 0x56301a:goto L56301a;
case 0x563020:c.instructions+=6;goto B563020;
case 0x563023:c.instructions+=5;goto B563023;
case 0x563024:c.instructions+=4;goto B563024;
case 0x563029:c.instructions+=3;goto B563029;
case 0x56302e:c.instructions+=2;goto B56302e;
case 0x56302f:c.instructions+=1;goto B56302f;
case 0x563034:goto L563034;
case 0x563037:c.instructions+=5;goto B563037;
case 0x563038:c.instructions+=4;goto B563038;
case 0x563039:c.instructions+=3;goto B563039;
case 0x56303a:c.instructions+=2;goto B56303a;
case 0x56303b:c.instructions+=1;goto B56303b;
case 0x56303e:goto L56303e;
case 0x563044:c.instructions+=1;goto B563044;
case 0x563046:goto L563046;
case 0x56304c:c.instructions+=1;goto B56304c;
case 0x563052:goto L563052;
case 0x563054:c.instructions+=1;goto B563054;
case 0x563059:goto L563059;
case 0x56305c:c.instructions+=3;goto B56305c;
case 0x56305f:c.instructions+=2;goto B56305f;
case 0x563061:c.instructions+=1;goto B563061;
case 0x563067:goto L563067;
case 0x56306a:c.instructions+=4;goto B56306a;
case 0x56306d:c.instructions+=3;goto B56306d;
case 0x56306e:c.instructions+=2;goto B56306e;
case 0x563073:c.instructions+=1;goto B563073;
case 0x563078:goto L563078;
case 0x563079:c.instructions+=4;goto B563079;
case 0x56307a:c.instructions+=3;goto B56307a;
case 0x56307b:c.instructions+=2;goto B56307b;
case 0x56307c:c.instructions+=1;goto B56307c;
case 0x56307f:goto L56307f;
case 0x563085:c.instructions+=2;goto B563085;
case 0x56308a:c.instructions+=1;goto B56308a;
case 0x56308c:goto L56308c;
case 0x563091:c.instructions+=1;goto B563091;
case 0x563093:goto L563093;
case 0x563098:c.instructions+=1;goto B563098;
case 0x56309d:goto L56309d;
case 0x5630a4:c.instructions+=4;goto B5630a4;
case 0x5630a7:c.instructions+=3;goto B5630a7;
case 0x5630a9:c.instructions+=2;goto B5630a9;
case 0x5630aa:c.instructions+=1;goto B5630aa;
case 0x5630af:goto L5630af;
case 0x5630b4:c.instructions+=3;goto B5630b4;
case 0x5630b7:c.instructions+=2;goto B5630b7;
case 0x5630b9:c.instructions+=1;goto B5630b9;
case 0x5630bf:goto L5630bf;
case 0x5630c2:c.instructions+=2;goto B5630c2;
case 0x5630c3:c.instructions+=1;goto B5630c3;
case 0x5630c8:goto L5630c8;
case 0x5630cb:c.instructions+=5;goto B5630cb;
case 0x5630cc:c.instructions+=4;goto B5630cc;
case 0x5630cd:c.instructions+=3;goto B5630cd;
case 0x5630ce:c.instructions+=2;goto B5630ce;
case 0x5630cf:c.instructions+=1;goto B5630cf;
case 0x5630d2:goto L5630d2;
case 0x5630d5:c.instructions+=3;goto B5630d5;
case 0x5630d8:c.instructions+=2;goto B5630d8;
case 0x5630da:c.instructions+=1;goto B5630da;
case 0x5630dc:goto L5630dc;
case 0x5630df:c.instructions+=3;goto B5630df;
case 0x5630e2:c.instructions+=2;goto B5630e2;
case 0x5630e4:c.instructions+=1;goto B5630e4;
case 0x5630e6:goto L5630e6;
case 0x5630eb:goto L5630eb;
case 0x5630ed:c.instructions+=1;goto B5630ed;
case 0x5630f2:goto L5630f2;
case 0x5630f3:c.instructions+=4;goto B5630f3;
case 0x5630f4:c.instructions+=3;goto B5630f4;
case 0x5630f5:c.instructions+=2;goto B5630f5;
case 0x5630f6:c.instructions+=1;goto B5630f6;
case 0x563100:goto L563100;
case 0x563101:c.instructions+=5;goto B563101;
case 0x563103:c.instructions+=4;goto B563103;
case 0x56310a:c.instructions+=3;goto B56310a;
case 0x56310b:c.instructions+=2;goto B56310b;
case 0x56310d:c.instructions+=1;goto B56310d;
case 0x563113:goto L563113;
case 0x563116:c.instructions+=3;goto B563116;
case 0x563117:c.instructions+=2;goto B563117;
case 0x56311c:c.instructions+=1;goto B56311c;
case 0x563121:goto L563121;
case 0x563122:c.instructions+=2;goto B563122;
case 0x563127:c.instructions+=1;goto B563127;
case 0x56312c:goto L56312c;
case 0x56312e:c.instructions+=1;goto B56312e;
case 0x563130:goto L563130;
case 0x563132:c.instructions+=3;goto B563132;
case 0x563137:c.instructions+=2;goto B563137;
case 0x563139:c.instructions+=1;goto B563139;
case 0x56313e:goto L56313e;
case 0x563141:c.instructions+=1;goto B563141;
case 0x563143:goto L563143;
case 0x563144:c.instructions+=2;goto B563144;
case 0x563147:c.instructions+=1;goto B563147;
case 0x563149:goto L563149;
case 0x56314b:goto L56314b;
case 0x563150:c.instructions+=1;goto B563150;
case 0x563155:goto L563155;
case 0x563157:c.instructions+=1;goto B563157;
case 0x563159:goto L563159;
case 0x56315e:c.instructions+=1;goto B56315e;
case 0x563163:goto L563163;
case 0x563165:c.instructions+=1;goto B563165;
case 0x563167:goto L563167;
case 0x56316a:c.instructions+=10;goto B56316a;
case 0x56316f:c.instructions+=9;goto B56316f;
case 0x563171:c.instructions+=8;goto B563171;
case 0x563176:c.instructions+=7;goto B563176;
case 0x56317b:c.instructions+=6;goto B56317b;
case 0x563180:c.instructions+=5;goto B563180;
case 0x563185:c.instructions+=4;goto B563185;
case 0x56318a:c.instructions+=3;goto B56318a;
case 0x56318f:c.instructions+=2;goto B56318f;
case 0x563190:c.instructions+=1;goto B563190;
case 0x563195:goto L563195;
case 0x563198:c.instructions+=4;goto B563198;
case 0x563199:c.instructions+=3;goto B563199;
case 0x56319e:c.instructions+=2;goto B56319e;
case 0x5631a8:c.instructions+=1;goto B5631a8;
case 0x5631ad:goto L5631ad;
case 0x5631af:c.instructions+=1;goto B5631af;
case 0x5631b5:goto L5631b5;
case 0x5631b8:c.instructions+=2;goto B5631b8;
case 0x5631ba:c.instructions+=1;goto B5631ba;
case 0x5631c0:goto L5631c0;
case 0x5631c3:c.instructions+=2;goto B5631c3;
case 0x5631c5:c.instructions+=1;goto B5631c5;
case 0x5631cb:goto L5631cb;
case 0x5631cc:c.instructions+=5;goto B5631cc;
case 0x5631ce:c.instructions+=4;goto B5631ce;
case 0x5631d0:c.instructions+=3;goto B5631d0;
case 0x5631d5:c.instructions+=2;goto B5631d5;
case 0x5631d7:c.instructions+=1;goto B5631d7;
case 0x5631dc:goto L5631dc;
case 0x5631dd:c.instructions+=3;goto B5631dd;
case 0x5631de:c.instructions+=2;goto B5631de;
case 0x5631df:c.instructions+=1;goto B5631df;
case 0x5631e2:goto L5631e2;
case 0x5631e5:c.instructions+=2;goto B5631e5;
case 0x5631e8:c.instructions+=1;goto B5631e8;
case 0x5631ea:goto L5631ea;
case 0x5631ed:c.instructions+=1;goto B5631ed;
case 0x5631ef:goto L5631ef;
case 0x5631f0:c.instructions+=2;goto B5631f0;
case 0x5631f5:c.instructions+=1;goto B5631f5;
case 0x5631fa:goto L5631fa;
case 0x5631fc:c.instructions+=1;goto B5631fc;
case 0x5631fe:goto L5631fe;
case 0x563201:c.instructions+=4;goto B563201;
case 0x563203:c.instructions+=3;goto B563203;
case 0x563204:c.instructions+=2;goto B563204;
case 0x563209:c.instructions+=1;goto B563209;
case 0x56320e:goto L56320e;
case 0x563210:c.instructions+=1;goto B563210;
case 0x563212:goto L563212;
case 0x563215:c.instructions+=4;goto B563215;
case 0x563217:c.instructions+=3;goto B563217;
case 0x563218:c.instructions+=2;goto B563218;
case 0x56321d:c.instructions+=1;goto B56321d;
case 0x563222:goto L563222;
case 0x563224:c.instructions+=1;goto B563224;
case 0x563226:goto L563226;
case 0x563229:c.instructions+=10;goto B563229;
case 0x56322e:c.instructions+=9;goto B56322e;
case 0x563230:c.instructions+=8;goto B563230;
case 0x563235:c.instructions+=7;goto B563235;
case 0x56323a:c.instructions+=6;goto B56323a;
case 0x56323f:c.instructions+=5;goto B56323f;
case 0x563244:c.instructions+=4;goto B563244;
case 0x563249:c.instructions+=3;goto B563249;
case 0x56324e:c.instructions+=2;goto B56324e;
case 0x56324f:c.instructions+=1;goto B56324f;
case 0x563254:goto L563254;
case 0x563255:c.instructions+=3;goto B563255;
case 0x56325a:c.instructions+=2;goto B56325a;
case 0x563264:c.instructions+=1;goto B563264;
case 0x563269:goto L563269;
case 0x56326c:c.instructions+=4;goto B56326c;
case 0x56326d:c.instructions+=3;goto B56326d;
case 0x56326e:c.instructions+=2;goto B56326e;
case 0x56326f:c.instructions+=1;goto B56326f;
case 0x563272:goto L563272;
case 0x563275:c.instructions+=5;goto B563275;
case 0x563277:c.instructions+=4;goto B563277;
case 0x56327c:c.instructions+=3;goto B56327c;
case 0x563281:c.instructions+=2;goto B563281;
case 0x563282:c.instructions+=1;goto B563282;
case 0x563287:goto L563287;
case 0x56328a:goto L56328a;
case 0x56328b:goto L56328b;
case 0x56328c:c.instructions+=2;goto B56328c;
case 0x56328d:c.instructions+=1;goto B56328d;
case 0x563290:goto L563290;
case 0x563291:c.instructions+=6;goto B563291;
case 0x563293:c.instructions+=5;goto B563293;
case 0x563294:c.instructions+=4;goto B563294;
case 0x563295:c.instructions+=3;goto B563295;
case 0x563297:c.instructions+=2;goto B563297;
case 0x56329c:c.instructions+=1;goto B56329c;
case 0x5632a0:goto L5632a0;
case 0x5632a1:c.instructions+=2;goto B5632a1;
case 0x5632a6:c.instructions+=1;goto B5632a6;
case 0x5632ab:goto L5632ab;
case 0x5632ad:c.instructions+=1;goto B5632ad;
case 0x5632af:goto L5632af;
case 0x5632b1:c.instructions+=3;goto B5632b1;
case 0x5632b6:c.instructions+=2;goto B5632b6;
case 0x5632b8:c.instructions+=1;goto B5632b8;
case 0x5632bd:goto L5632bd;
case 0x5632c0:c.instructions+=1;goto B5632c0;
case 0x5632c6:goto L5632c6;
case 0x5632c7:c.instructions+=2;goto B5632c7;
case 0x5632ca:c.instructions+=1;goto B5632ca;
case 0x5632cc:goto L5632cc;
case 0x5632d1:c.instructions+=1;goto B5632d1;
case 0x5632d6:goto L5632d6;
case 0x5632d8:c.instructions+=1;goto B5632d8;
case 0x5632de:goto L5632de;
case 0x5632e1:c.instructions+=5;goto B5632e1;
case 0x5632e4:c.instructions+=4;goto B5632e4;
case 0x5632e5:c.instructions+=3;goto B5632e5;
case 0x5632e8:c.instructions+=2;goto B5632e8;
case 0x5632ee:c.instructions+=1;goto B5632ee;
case 0x5632f0:goto L5632f0;
case 0x5632f3:c.instructions+=1;goto B5632f3;
case 0x5632f9:goto L5632f9;
case 0x5632fa:c.instructions+=2;goto B5632fa;
case 0x5632ff:c.instructions+=1;goto B5632ff;
case 0x563304:goto L563304;
case 0x563306:c.instructions+=1;goto B563306;
case 0x563308:goto L563308;
case 0x56330a:c.instructions+=3;goto B56330a;
case 0x56330b:c.instructions+=2;goto B56330b;
case 0x563310:c.instructions+=1;goto B563310;
case 0x563315:goto L563315;
case 0x563317:c.instructions+=1;goto B563317;
case 0x56331d:goto L56331d;
case 0x563320:c.instructions+=2;goto B563320;
case 0x563321:c.instructions+=1;goto B563321;
case 0x563323:goto L563323;
case 0x563329:c.instructions+=1;goto B563329;
case 0x56332f:goto L56332f;
case 0x563332:c.instructions+=1;goto B563332;
case 0x563338:goto L563338;
case 0x563339:c.instructions+=2;goto B563339;
case 0x56333e:c.instructions+=1;goto B56333e;
case 0x563343:goto L563343;
case 0x563345:c.instructions+=1;goto B563345;
case 0x563347:goto L563347;
case 0x563349:c.instructions+=3;goto B563349;
case 0x56334a:c.instructions+=2;goto B56334a;
case 0x56334f:c.instructions+=1;goto B56334f;
case 0x563354:goto L563354;
case 0x563356:c.instructions+=1;goto B563356;
case 0x56335c:goto L56335c;
case 0x56335f:c.instructions+=1;goto B56335f;
case 0x563360:goto L563360;
case 0x563365:c.instructions+=2;goto B563365;
case 0x563366:c.instructions+=1;goto B563366;
case 0x56336b:goto L56336b;
case 0x56336e:c.instructions+=2;goto B56336e;
case 0x563370:c.instructions+=1;goto B563370;
case 0x563375:goto L563375;
case 0x563377:c.instructions+=2;goto B563377;
case 0x563379:c.instructions+=1;goto B563379;
case 0x56337c:goto L56337c;
case 0x56337f:c.instructions+=2;goto B56337f;
case 0x563380:c.instructions+=1;goto B563380;
case 0x563385:goto L563385;
case 0x563386:c.instructions+=1;goto B563386;
case 0x56338b:goto L56338b;
case 0x56338e:c.instructions+=2;goto B56338e;
case 0x563390:c.instructions+=1;goto B563390;
case 0x563392:goto L563392;
case 0x563395:c.instructions+=1;goto B563395;
case 0x563397:goto L563397;
case 0x563399:goto L563399;
case 0x56339b:c.instructions+=3;goto B56339b;
case 0x56339c:c.instructions+=2;goto B56339c;
case 0x56339e:c.instructions+=1;goto B56339e;
case 0x5633a1:goto L5633a1;
case 0x5633a7:c.instructions+=3;goto B5633a7;
case 0x5633aa:c.instructions+=2;goto B5633aa;
case 0x5633ac:c.instructions+=1;goto B5633ac;
case 0x5633ae:goto L5633ae;
case 0x5633b0:c.instructions+=2;goto B5633b0;
case 0x5633b2:c.instructions+=1;goto B5633b2;
case 0x5633b4:goto L5633b4;
case 0x5633b9:goto L5633b9;
case 0x5633bc:c.instructions+=2;goto B5633bc;
case 0x5633bd:c.instructions+=1;goto B5633bd;
case 0x5633c2:goto L5633c2;
case 0x5633c3:c.instructions+=1;goto B5633c3;
case 0x5633c5:goto L5633c5;
case 0x5633ca:goto L5633ca;
case 0x5633cd:c.instructions+=2;goto B5633cd;
case 0x5633ce:c.instructions+=1;goto B5633ce;
case 0x5633d3:goto L5633d3;
case 0x5633d4:c.instructions+=1;goto B5633d4;
case 0x5633d6:goto L5633d6;
case 0x5633d8:c.instructions+=2;goto B5633d8;
case 0x5633da:c.instructions+=1;goto B5633da;
case 0x5633dc:goto L5633dc;
case 0x5633e1:goto L5633e1;
case 0x5633e3:goto L5633e3;
case 0x5633e8:goto L5633e8;
case 0x5633eb:c.instructions+=2;goto B5633eb;
case 0x5633ec:c.instructions+=1;goto B5633ec;
case 0x5633f1:goto L5633f1;
case 0x5633f2:goto L5633f2;
case 0x5633f3:c.instructions+=2;goto B5633f3;
case 0x5633f4:c.instructions+=1;goto B5633f4;
case 0x5633f9:goto L5633f9;
case 0x5633fb:c.instructions+=3;goto B5633fb;
case 0x5633fe:c.instructions+=2;goto B5633fe;
case 0x563400:c.instructions+=1;goto B563400;
case 0x563403:goto L563403;
case 0x563404:goto L563404;
case 0x563405:c.instructions+=3;goto B563405;
case 0x563406:c.instructions+=2;goto B563406;
case 0x563407:c.instructions+=1;goto B563407;
case 0x563410:goto L563410;
case 0x563411:c.instructions+=9;goto B563411;
case 0x563413:c.instructions+=8;goto B563413;
case 0x563414:c.instructions+=7;goto B563414;
case 0x563415:c.instructions+=6;goto B563415;
case 0x563417:c.instructions+=5;goto B563417;
case 0x56341d:c.instructions+=4;goto B56341d;
case 0x56341f:c.instructions+=3;goto B56341f;
case 0x563420:c.instructions+=2;goto B563420;
case 0x563423:c.instructions+=1;goto B563423;
case 0x563425:goto L563425;
case 0x56342b:c.instructions+=2;goto B56342b;
case 0x56342d:c.instructions+=1;goto B56342d;
case 0x56342f:goto L56342f;
case 0x563432:c.instructions+=8;goto B563432;
case 0x563435:c.instructions+=7;goto B563435;
case 0x563438:c.instructions+=6;goto B563438;
case 0x563439:c.instructions+=5;goto B563439;
case 0x56343a:c.instructions+=4;goto B56343a;
case 0x56343b:c.instructions+=3;goto B56343b;
case 0x56343c:c.instructions+=2;goto B56343c;
case 0x56343e:c.instructions+=1;goto B56343e;
case 0x563443:goto L563443;
case 0x563446:c.instructions+=4;goto B563446;
case 0x563449:c.instructions+=3;goto B563449;
case 0x56344a:c.instructions+=2;goto B56344a;
case 0x56344c:c.instructions+=1;goto B56344c;
case 0x563451:goto L563451;
case 0x563457:goto L563457;
case 0x56345d:c.instructions+=1;goto B56345d;
case 0x563463:goto L563463;
case 0x563469:goto L563469;
case 0x56346f:c.instructions+=1;goto B56346f;
case 0x563475:goto L563475;
case 0x563477:goto L563477;
case 0x56347d:c.instructions+=1;goto B56347d;
case 0x56347f:goto L56347f;
case 0x563485:goto L563485;
case 0x56348b:c.instructions+=1;goto B56348b;
case 0x563491:goto L563491;
case 0x563497:c.instructions+=1;goto B563497;
case 0x56349d:goto L56349d;
case 0x56349f:c.instructions+=1;goto B56349f;
case 0x5634a4:goto L5634a4;
case 0x5634aa:c.instructions+=2;goto B5634aa;
case 0x5634ac:c.instructions+=1;goto B5634ac;
case 0x5634b2:goto L5634b2;
case 0x5634b5:c.instructions+=5;goto B5634b5;
case 0x5634b7:c.instructions+=4;goto B5634b7;
case 0x5634bc:c.instructions+=3;goto B5634bc;
case 0x5634c1:c.instructions+=2;goto B5634c1;
case 0x5634c2:c.instructions+=1;goto B5634c2;
case 0x5634c7:goto L5634c7;
case 0x5634ca:c.instructions+=5;goto B5634ca;
case 0x5634cb:c.instructions+=4;goto B5634cb;
case 0x5634cc:c.instructions+=3;goto B5634cc;
case 0x5634cd:c.instructions+=2;goto B5634cd;
case 0x5634ce:c.instructions+=1;goto B5634ce;
case 0x5634d1:goto L5634d1;
case 0x5634d7:c.instructions+=1;goto B5634d7;
case 0x5634dd:goto L5634dd;
case 0x5634de:c.instructions+=4;goto B5634de;
case 0x5634df:c.instructions+=3;goto B5634df;
case 0x5634e0:c.instructions+=2;goto B5634e0;
case 0x5634e1:c.instructions+=1;goto B5634e1;
case 0x5634e4:goto L5634e4;
case 0x5634e7:c.instructions+=4;goto B5634e7;
case 0x5634ec:c.instructions+=3;goto B5634ec;
case 0x5634ed:c.instructions+=2;goto B5634ed;
case 0x5634f4:c.instructions+=1;goto B5634f4;
case 0x5634f9:goto L5634f9;
case 0x5634fe:c.instructions+=3;goto B5634fe;
case 0x563501:c.instructions+=2;goto B563501;
case 0x563504:c.instructions+=1;goto B563504;
case 0x56350a:goto L56350a;
case 0x56350c:c.instructions+=2;goto B56350c;
case 0x563511:c.instructions+=1;goto B563511;
case 0x563516:goto L563516;
case 0x563517:c.instructions+=4;goto B563517;
case 0x563518:c.instructions+=3;goto B563518;
case 0x563519:c.instructions+=2;goto B563519;
case 0x56351a:c.instructions+=1;goto B56351a;
case 0x56351d:goto L56351d;
case 0x563523:c.instructions+=1;goto B563523;
case 0x563529:goto L563529;
case 0x56352f:goto L56352f;
case 0x563535:c.instructions+=1;goto B563535;
case 0x563537:goto L563537;
case 0x56353d:c.instructions+=1;goto B56353d;
case 0x563543:goto L563543;
case 0x563548:c.instructions+=1;goto B563548;
case 0x56354d:goto L56354d;
case 0x563550:c.instructions+=3;goto B563550;
case 0x563553:c.instructions+=2;goto B563553;
case 0x563555:c.instructions+=1;goto B563555;
case 0x563557:goto L563557;
case 0x56355a:c.instructions+=3;goto B56355a;
case 0x56355c:c.instructions+=2;goto B56355c;
case 0x56355d:c.instructions+=1;goto B56355d;
case 0x563562:goto L563562;
case 0x563565:goto L563565;
case 0x56356b:c.instructions+=2;goto B56356b;
case 0x56356d:c.instructions+=1;goto B56356d;
case 0x563573:goto L563573;
case 0x563576:c.instructions+=3;goto B563576;
case 0x563579:c.instructions+=2;goto B563579;
case 0x56357b:c.instructions+=1;goto B56357b;
case 0x563581:goto L563581;
case 0x563588:c.instructions+=2;goto B563588;
case 0x56358f:c.instructions+=1;goto B56358f;
case 0x563591:goto L563591;
case 0x563597:c.instructions+=2;goto B563597;
case 0x563599:c.instructions+=1;goto B563599;
case 0x56359b:goto L56359b;
case 0x56359d:c.instructions+=2;goto B56359d;
case 0x5635a2:c.instructions+=1;goto B5635a2;
case 0x5635a7:goto L5635a7;
case 0x5635aa:c.instructions+=3;goto B5635aa;
case 0x5635ab:c.instructions+=2;goto B5635ab;
case 0x5635ad:c.instructions+=1;goto B5635ad;
case 0x5635b2:goto L5635b2;
case 0x5635b5:goto L5635b5;
case 0x5635bb:c.instructions+=2;goto B5635bb;
case 0x5635bd:c.instructions+=1;goto B5635bd;
case 0x5635c3:goto L5635c3;
case 0x5635c5:c.instructions+=1;goto B5635c5;
case 0x5635ca:goto L5635ca;
case 0x5635cc:c.instructions+=1;goto B5635cc;
case 0x5635ce:goto L5635ce;
case 0x5635d0:c.instructions+=1;goto B5635d0;
case 0x5635d5:goto L5635d5;
case 0x5635d6:c.instructions+=4;goto B5635d6;
case 0x5635d7:c.instructions+=3;goto B5635d7;
case 0x5635d8:c.instructions+=2;goto B5635d8;
case 0x5635d9:c.instructions+=1;goto B5635d9;
case 0x5635dc:goto L5635dc;
case 0x5635df:c.instructions+=3;goto B5635df;
case 0x5635e1:c.instructions+=2;goto B5635e1;
case 0x5635e6:c.instructions+=1;goto B5635e6;
case 0x5635ec:goto L5635ec;
case 0x5635ef:c.instructions+=3;goto B5635ef;
case 0x5635f2:c.instructions+=2;goto B5635f2;
case 0x5635f5:c.instructions+=1;goto B5635f5;
case 0x5635fb:goto L5635fb;
case 0x563602:goto L563602;
case 0x563607:c.instructions+=1;goto B563607;
case 0x56360c:goto L56360c;
case 0x56360e:c.instructions+=2;goto B56360e;
case 0x563613:c.instructions+=1;goto B563613;
case 0x563618:goto L563618;
case 0x56361a:c.instructions+=2;goto B56361a;
case 0x56361c:c.instructions+=1;goto B56361c;
case 0x563622:goto L563622;
case 0x563624:c.instructions+=3;goto B563624;
case 0x563629:c.instructions+=2;goto B563629;
case 0x56362b:c.instructions+=1;goto B56362b;
case 0x563630:goto L563630;
case 0x563632:c.instructions+=1;goto B563632;
case 0x563634:goto L563634;
case 0x563635:c.instructions+=3;goto B563635;
case 0x56363a:c.instructions+=2;goto B56363a;
case 0x56363c:c.instructions+=1;goto B56363c;
case 0x563641:goto L563641;
case 0x563643:c.instructions+=1;goto B563643;
case 0x563649:goto L563649;
case 0x56364e:c.instructions+=1;goto B56364e;
case 0x563650:goto L563650;
case 0x563652:c.instructions+=2;goto B563652;
case 0x563657:c.instructions+=1;goto B563657;
case 0x56365c:goto L56365c;
case 0x56365e:c.instructions+=2;goto B56365e;
case 0x563660:c.instructions+=1;goto B563660;
case 0x563662:goto L563662;
case 0x563664:c.instructions+=3;goto B563664;
case 0x563669:c.instructions+=2;goto B563669;
case 0x56366b:c.instructions+=1;goto B56366b;
case 0x563670:goto L563670;
case 0x563672:c.instructions+=1;goto B563672;
case 0x563674:goto L563674;
case 0x563675:c.instructions+=3;goto B563675;
case 0x56367a:c.instructions+=2;goto B56367a;
case 0x56367c:c.instructions+=1;goto B56367c;
case 0x563681:goto L563681;
case 0x563683:c.instructions+=1;goto B563683;
case 0x563685:goto L563685;
case 0x56368a:c.instructions+=1;goto B56368a;
case 0x56368c:goto L56368c;
case 0x56368e:c.instructions+=2;goto B56368e;
case 0x563693:c.instructions+=1;goto B563693;
case 0x563698:goto L563698;
case 0x56369a:c.instructions+=2;goto B56369a;
case 0x56369c:c.instructions+=1;goto B56369c;
case 0x56369e:goto L56369e;
case 0x5636a0:c.instructions+=3;goto B5636a0;
case 0x5636a5:c.instructions+=2;goto B5636a5;
case 0x5636a7:c.instructions+=1;goto B5636a7;
case 0x5636ac:goto L5636ac;
case 0x5636ae:c.instructions+=1;goto B5636ae;
case 0x5636b0:goto L5636b0;
case 0x5636b1:c.instructions+=3;goto B5636b1;
case 0x5636b6:c.instructions+=2;goto B5636b6;
case 0x5636b8:c.instructions+=1;goto B5636b8;
case 0x5636bd:goto L5636bd;
case 0x5636bf:c.instructions+=1;goto B5636bf;
case 0x5636c1:goto L5636c1;
case 0x5636c6:c.instructions+=1;goto B5636c6;
case 0x5636c8:goto L5636c8;
case 0x5636cd:goto L5636cd;
case 0x5636d0:c.instructions+=4;goto B5636d0;
case 0x5636d1:c.instructions+=3;goto B5636d1;
case 0x5636d6:c.instructions+=2;goto B5636d6;
case 0x5636d7:c.instructions+=1;goto B5636d7;
case 0x5636dc:goto L5636dc;
case 0x5636df:c.instructions+=3;goto B5636df;
case 0x5636e1:c.instructions+=2;goto B5636e1;
case 0x5636eb:c.instructions+=1;goto B5636eb;
case 0x5636f0:goto L5636f0;
case 0x5636f1:c.instructions+=4;goto B5636f1;
case 0x5636f2:c.instructions+=3;goto B5636f2;
case 0x5636f3:c.instructions+=2;goto B5636f3;
case 0x5636f4:c.instructions+=1;goto B5636f4;
case 0x5636f7:goto L5636f7;
case 0x5636fd:c.instructions+=3;goto B5636fd;
case 0x563703:c.instructions+=2;goto B563703;
case 0x563705:c.instructions+=1;goto B563705;
case 0x56370b:goto L56370b;
case 0x56370e:c.instructions+=5;goto B56370e;
case 0x563711:c.instructions+=4;goto B563711;
case 0x563712:c.instructions+=3;goto B563712;
case 0x563714:c.instructions+=2;goto B563714;
case 0x563715:c.instructions+=1;goto B563715;
case 0x56371a:goto L56371a;
case 0x563720:c.instructions+=6;goto B563720;
case 0x563725:c.instructions+=5;goto B563725;
case 0x563728:c.instructions+=4;goto B563728;
case 0x56372a:c.instructions+=3;goto B56372a;
case 0x56372c:c.instructions+=2;goto B56372c;
case 0x563731:c.instructions+=1;goto B563731;
case 0x563733:goto L563733;
case 0x563736:c.instructions+=1;goto B563736;
case 0x563738:goto L563738;
case 0x56373d:c.instructions+=1;goto B56373d;
case 0x56373f:goto L56373f;
case 0x563744:c.instructions+=4;goto B563744;
case 0x563746:c.instructions+=3;goto B563746;
case 0x563748:c.instructions+=2;goto B563748;
case 0x56374d:c.instructions+=1;goto B56374d;
case 0x56374f:goto L56374f;
case 0x563750:c.instructions+=2;goto B563750;
case 0x563752:c.instructions+=1;goto B563752;
case 0x563754:goto L563754;
case 0x56375a:c.instructions+=3;goto B56375a;
case 0x56375c:c.instructions+=2;goto B56375c;
case 0x56375e:c.instructions+=1;goto B56375e;
case 0x563760:goto L563760;
case 0x563763:c.instructions+=3;goto B563763;
case 0x563766:c.instructions+=2;goto B563766;
case 0x563767:c.instructions+=1;goto B563767;
case 0x563768:goto L563768;
case 0x56376d:c.instructions+=1;goto B56376d;
case 0x563772:goto L563772;
case 0x563777:c.instructions+=2;goto B563777;
case 0x563779:c.instructions+=1;goto B563779;
case 0x56377e:goto L56377e;
case 0x563780:goto L563780;
case 0x563786:c.instructions+=1;goto B563786;
case 0x563789:goto L563789;
case 0x563790:c.instructions+=1;goto B563790;
case 0x563792:goto L563792;
case 0x563794:c.instructions+=1;goto B563794;
case 0x563796:goto L563796;
case 0x563799:c.instructions+=4;goto B563799;
case 0x56379e:c.instructions+=3;goto B56379e;
case 0x5637a3:c.instructions+=2;goto B5637a3;
case 0x5637a4:c.instructions+=1;goto B5637a4;
case 0x5637a9:goto L5637a9;
case 0x5637ac:c.instructions+=3;goto B5637ac;
case 0x5637ae:c.instructions+=2;goto B5637ae;
case 0x5637b8:c.instructions+=1;goto B5637b8;
case 0x5637bd:goto L5637bd;
case 0x5637be:c.instructions+=4;goto B5637be;
case 0x5637bf:c.instructions+=3;goto B5637bf;
case 0x5637c0:c.instructions+=2;goto B5637c0;
case 0x5637c1:c.instructions+=1;goto B5637c1;
case 0x5637c4:goto L5637c4;
case 0x5637c7:c.instructions+=10;goto B5637c7;
case 0x5637c8:c.instructions+=9;goto B5637c8;
case 0x5637ca:c.instructions+=8;goto B5637ca;
case 0x5637cf:c.instructions+=7;goto B5637cf;
case 0x5637d4:c.instructions+=6;goto B5637d4;
case 0x5637d9:c.instructions+=5;goto B5637d9;
case 0x5637de:c.instructions+=4;goto B5637de;
case 0x5637e3:c.instructions+=3;goto B5637e3;
case 0x5637e8:c.instructions+=2;goto B5637e8;
case 0x5637e9:c.instructions+=1;goto B5637e9;
case 0x5637ee:goto L5637ee;
case 0x5637f1:c.instructions+=3;goto B5637f1;
case 0x5637f3:c.instructions+=2;goto B5637f3;
case 0x5637fd:c.instructions+=1;goto B5637fd;
case 0x563802:goto L563802;
case 0x563803:c.instructions+=4;goto B563803;
case 0x563804:c.instructions+=3;goto B563804;
case 0x563805:c.instructions+=2;goto B563805;
case 0x563806:c.instructions+=1;goto B563806;
case 0x563809:goto L563809;
case 0x56380e:c.instructions+=2;goto B56380e;
case 0x563810:c.instructions+=1;goto B563810;
case 0x563812:goto L563812;
case 0x563817:c.instructions+=5;goto B563817;
case 0x56381d:c.instructions+=4;goto B56381d;
case 0x56381e:c.instructions+=3;goto B56381e;
case 0x56381f:c.instructions+=2;goto B56381f;
case 0x563824:c.instructions+=1;goto B563824;
case 0x563829:goto L563829;
case 0x56382f:c.instructions+=3;goto B56382f;
case 0x563831:c.instructions+=2;goto B563831;
case 0x563833:c.instructions+=1;goto B563833;
case 0x563835:goto L563835;
case 0x563838:c.instructions+=5;goto B563838;
case 0x56383b:c.instructions+=4;goto B56383b;
case 0x56383c:c.instructions+=3;goto B56383c;
case 0x56383d:c.instructions+=2;goto B56383d;
case 0x563842:c.instructions+=1;goto B563842;
case 0x563847:goto L563847;
case 0x563849:c.instructions+=2;goto B563849;
case 0x56384b:c.instructions+=1;goto B56384b;
case 0x56384d:goto L56384d;
case 0x563852:goto L563852;
case 0x563854:c.instructions+=1;goto B563854;
case 0x563859:goto L563859;
case 0x56385a:c.instructions+=4;goto B56385a;
case 0x56385b:c.instructions+=3;goto B56385b;
case 0x56385c:c.instructions+=2;goto B56385c;
case 0x56385d:c.instructions+=1;goto B56385d;
case 0x563860:goto L563860;
case 0x563866:c.instructions+=1;goto B563866;
case 0x56386c:goto L56386c;
case 0x563871:c.instructions+=1;goto B563871;
case 0x563876:goto L563876;
case 0x56387c:c.instructions+=2;goto B56387c;
case 0x56387e:c.instructions+=1;goto B56387e;
case 0x563884:goto L563884;
case 0x56388b:c.instructions+=4;goto B56388b;
case 0x56388e:c.instructions+=3;goto B56388e;
case 0x563890:c.instructions+=2;goto B563890;
case 0x563892:c.instructions+=1;goto B563892;
case 0x563894:goto L563894;
case 0x56389a:c.instructions+=3;goto B56389a;
case 0x56389c:c.instructions+=2;goto B56389c;
case 0x5638a1:c.instructions+=1;goto B5638a1;
case 0x5638a6:goto L5638a6;
case 0x5638a9:c.instructions+=3;goto B5638a9;
case 0x5638aa:c.instructions+=2;goto B5638aa;
case 0x5638ac:c.instructions+=1;goto B5638ac;
case 0x5638b1:goto L5638b1;
case 0x5638b4:c.instructions+=1;goto B5638b4;
case 0x5638b7:goto L5638b7;
case 0x5638bd:c.instructions+=2;goto B5638bd;
case 0x5638bf:c.instructions+=1;goto B5638bf;
case 0x5638c1:goto L5638c1;
case 0x5638c3:c.instructions+=1;goto B5638c3;
case 0x5638c5:goto L5638c5;
case 0x5638c7:c.instructions+=1;goto B5638c7;
case 0x5638c9:goto L5638c9;
case 0x5638cb:c.instructions+=1;goto B5638cb;
case 0x5638cd:goto L5638cd;
case 0x5638cf:c.instructions+=1;goto B5638cf;
case 0x5638d1:goto L5638d1;
case 0x5638d3:c.instructions+=2;goto B5638d3;
case 0x5638d5:c.instructions+=1;goto B5638d5;
case 0x5638da:goto L5638da;
case 0x5638db:c.instructions+=4;goto B5638db;
case 0x5638dc:c.instructions+=3;goto B5638dc;
case 0x5638dd:c.instructions+=2;goto B5638dd;
case 0x5638de:c.instructions+=1;goto B5638de;
case 0x5638e1:goto L5638e1;
case 0x5638e7:c.instructions+=4;goto B5638e7;
case 0x5638ee:c.instructions+=3;goto B5638ee;
case 0x5638f0:c.instructions+=2;goto B5638f0;
case 0x5638f2:c.instructions+=1;goto B5638f2;
case 0x5638f4:goto L5638f4;
case 0x5638f7:c.instructions+=5;goto B5638f7;
case 0x5638fa:c.instructions+=4;goto B5638fa;
case 0x5638fb:c.instructions+=3;goto B5638fb;
case 0x5638fc:c.instructions+=2;goto B5638fc;
case 0x563901:c.instructions+=1;goto B563901;
case 0x563906:goto L563906;
case 0x563908:c.instructions+=2;goto B563908;
case 0x56390a:c.instructions+=1;goto B56390a;
case 0x56390c:goto L56390c;
case 0x563911:goto L563911;
case 0x563913:c.instructions+=1;goto B563913;
case 0x563918:goto L563918;
case 0x563919:c.instructions+=4;goto B563919;
case 0x56391a:c.instructions+=3;goto B56391a;
case 0x56391b:c.instructions+=2;goto B56391b;
case 0x56391c:c.instructions+=1;goto B56391c;
case 0x56391f:goto L56391f;
case 0x563925:c.instructions+=1;goto B563925;
case 0x56392b:goto L56392b;
case 0x563931:goto L563931;
case 0x563937:c.instructions+=1;goto B563937;
case 0x563939:goto L563939;
case 0x56393b:goto L56393b;
case 0x563941:c.instructions+=1;goto B563941;
case 0x563943:goto L563943;
case 0x563949:c.instructions+=1;goto B563949;
case 0x56394f:goto L56394f;
case 0x563954:c.instructions+=1;goto B563954;
case 0x563959:goto L563959;
case 0x56395e:goto L56395e;
case 0x563964:c.instructions+=2;goto B563964;
case 0x563966:c.instructions+=1;goto B563966;
case 0x56396c:goto L56396c;
case 0x56396f:c.instructions+=2;goto B56396f;
case 0x563970:c.instructions+=1;goto B563970;
case 0x563972:goto L563972;
case 0x563978:c.instructions+=2;goto B563978;
case 0x56397a:c.instructions+=1;goto B56397a;
case 0x563980:goto L563980;
case 0x563982:c.instructions+=1;goto B563982;
case 0x563987:goto L563987;
case 0x563988:c.instructions+=4;goto B563988;
case 0x563989:c.instructions+=3;goto B563989;
case 0x56398a:c.instructions+=2;goto B56398a;
case 0x56398b:c.instructions+=1;goto B56398b;
case 0x56398e:goto L56398e;
case 0x563994:c.instructions+=1;goto B563994;
case 0x56399a:goto L56399a;
case 0x56399c:c.instructions+=1;goto B56399c;
case 0x5639a1:goto L5639a1;
case 0x5639a7:c.instructions+=2;goto B5639a7;
case 0x5639a9:c.instructions+=1;goto B5639a9;
case 0x5639ab:goto L5639ab;
case 0x5639ae:c.instructions+=5;goto B5639ae;
case 0x5639b0:c.instructions+=4;goto B5639b0;
case 0x5639b5:c.instructions+=3;goto B5639b5;
case 0x5639ba:c.instructions+=2;goto B5639ba;
case 0x5639bb:c.instructions+=1;goto B5639bb;
case 0x5639c0:goto L5639c0;
case 0x5639c3:goto L5639c3;
case 0x5639c9:c.instructions+=4;goto B5639c9;
case 0x5639cb:c.instructions+=3;goto B5639cb;
case 0x5639d0:c.instructions+=2;goto B5639d0;
case 0x5639d1:c.instructions+=1;goto B5639d1;
case 0x5639d6:goto L5639d6;
case 0x5639d9:c.instructions+=5;goto B5639d9;
case 0x5639da:c.instructions+=4;goto B5639da;
case 0x5639db:c.instructions+=3;goto B5639db;
case 0x5639dc:c.instructions+=2;goto B5639dc;
case 0x5639dd:c.instructions+=1;goto B5639dd;
case 0x5639e0:goto L5639e0;
case 0x5639e5:goto L5639e5;
case 0x5639eb:c.instructions+=2;goto B5639eb;
case 0x5639ed:c.instructions+=1;goto B5639ed;
case 0x5639ef:goto L5639ef;
case 0x5639f1:goto L5639f1;
case 0x5639f4:c.instructions+=3;goto B5639f4;
case 0x5639f5:c.instructions+=2;goto B5639f5;
case 0x5639f6:c.instructions+=1;goto B5639f6;
case 0x5639fb:goto L5639fb;
case 0x5639fe:c.instructions+=3;goto B5639fe;
case 0x5639ff:c.instructions+=2;goto B5639ff;
case 0x563a01:c.instructions+=1;goto B563a01;
case 0x563a06:goto L563a06;
case 0x563a07:c.instructions+=4;goto B563a07;
case 0x563a08:c.instructions+=3;goto B563a08;
case 0x563a09:c.instructions+=2;goto B563a09;
case 0x563a0a:c.instructions+=1;goto B563a0a;
case 0x563a0d:goto L563a0d;
case 0x563a10:c.instructions+=2;goto B563a10;
case 0x563a12:c.instructions+=1;goto B563a12;
case 0x563a18:goto L563a18;
case 0x563a1b:c.instructions+=3;goto B563a1b;
case 0x563a1c:c.instructions+=2;goto B563a1c;
case 0x563a1e:c.instructions+=1;goto B563a1e;
case 0x563a23:goto L563a23;
case 0x563a25:c.instructions+=2;goto B563a25;
case 0x563a2b:c.instructions+=1;goto B563a2b;
case 0x563a2e:goto L563a2e;
case 0x563a2f:c.instructions+=4;goto B563a2f;
case 0x563a30:c.instructions+=3;goto B563a30;
case 0x563a31:c.instructions+=2;goto B563a31;
case 0x563a32:c.instructions+=1;goto B563a32;
case 0x563a35:goto L563a35;
case 0x563a3b:c.instructions+=1;goto B563a3b;
case 0x563a41:goto L563a41;
case 0x563a47:c.instructions+=1;goto B563a47;
case 0x563a49:goto L563a49;
case 0x563a4f:c.instructions+=1;goto B563a4f;
case 0x563a55:goto L563a55;
case 0x563a5a:goto L563a5a;
case 0x563a60:c.instructions+=2;goto B563a60;
case 0x563a62:c.instructions+=1;goto B563a62;
case 0x563a68:goto L563a68;
case 0x563a6e:c.instructions+=2;goto B563a6e;
case 0x563a73:c.instructions+=1;goto B563a73;
case 0x563a75:goto L563a75;
case 0x563a7a:c.instructions+=1;goto B563a7a;
case 0x563a7c:goto L563a7c;
case 0x563a81:c.instructions+=1;goto B563a81;
case 0x563a87:goto L563a87;
case 0x563a88:c.instructions+=2;goto B563a88;
case 0x563a8a:c.instructions+=1;goto B563a8a;
case 0x563a8f:goto L563a8f;
case 0x563a92:c.instructions+=4;goto B563a92;
case 0x563a94:c.instructions+=3;goto B563a94;
case 0x563a95:c.instructions+=2;goto B563a95;
case 0x563a96:c.instructions+=1;goto B563a96;
case 0x563a9b:goto L563a9b;
case 0x563a9e:c.instructions+=5;goto B563a9e;
case 0x563a9f:c.instructions+=4;goto B563a9f;
case 0x563aa0:c.instructions+=3;goto B563aa0;
case 0x563aa1:c.instructions+=2;goto B563aa1;
case 0x563aa2:c.instructions+=1;goto B563aa2;
case 0x563aa5:goto L563aa5;
case 0x563aac:c.instructions+=1;goto B563aac;
case 0x563ab2:goto L563ab2;
case 0x563ab8:c.instructions+=3;goto B563ab8;
case 0x563aba:c.instructions+=2;goto B563aba;
case 0x563abf:c.instructions+=1;goto B563abf;
case 0x563ac4:goto L563ac4;
case 0x563ac7:c.instructions+=3;goto B563ac7;
case 0x563ac8:c.instructions+=2;goto B563ac8;
case 0x563aca:c.instructions+=1;goto B563aca;
case 0x563acf:goto L563acf;
case 0x563ad2:c.instructions+=1;goto B563ad2;
case 0x563ad4:goto L563ad4;
case 0x563ada:c.instructions+=3;goto B563ada;
case 0x563adb:c.instructions+=2;goto B563adb;
case 0x563add:c.instructions+=1;goto B563add;
case 0x563ae2:goto L563ae2;
case 0x563ae4:c.instructions+=2;goto B563ae4;
case 0x563ae6:c.instructions+=1;goto B563ae6;
case 0x563aeb:goto L563aeb;
case 0x563af1:c.instructions+=2;goto B563af1;
case 0x563af2:c.instructions+=1;goto B563af2;
case 0x563af7:goto L563af7;
case 0x563afd:c.instructions+=2;goto B563afd;
case 0x563afe:c.instructions+=1;goto B563afe;
case 0x563b03:goto L563b03;
case 0x563b06:c.instructions+=2;goto B563b06;
case 0x563b08:c.instructions+=1;goto B563b08;
case 0x563b0d:goto L563b0d;
case 0x563b0e:c.instructions+=4;goto B563b0e;
case 0x563b0f:c.instructions+=3;goto B563b0f;
case 0x563b10:c.instructions+=2;goto B563b10;
case 0x563b11:c.instructions+=1;goto B563b11;
case 0x563b14:goto L563b14;
case 0x563b1a:c.instructions+=2;goto B563b1a;
case 0x563b1c:c.instructions+=1;goto B563b1c;
case 0x563b22:goto L563b22;
case 0x563b28:c.instructions+=5;goto B563b28;
case 0x563b2e:c.instructions+=4;goto B563b2e;
case 0x563b2f:c.instructions+=3;goto B563b2f;
case 0x563b30:c.instructions+=2;goto B563b30;
case 0x563b35:c.instructions+=1;goto B563b35;
case 0x563b3a:goto L563b3a;
case 0x563b40:c.instructions+=6;goto B563b40;
case 0x563b43:c.instructions+=5;goto B563b43;
case 0x563b46:c.instructions+=4;goto B563b46;
case 0x563b47:c.instructions+=3;goto B563b47;
case 0x563b48:c.instructions+=2;goto B563b48;
case 0x563b4d:c.instructions+=1;goto B563b4d;
case 0x563b52:goto L563b52;
case 0x563b57:goto L563b57;
case 0x563b59:c.instructions+=1;goto B563b59;
case 0x563b5e:goto L563b5e;
case 0x563b5f:c.instructions+=4;goto B563b5f;
case 0x563b60:c.instructions+=3;goto B563b60;
case 0x563b61:c.instructions+=2;goto B563b61;
case 0x563b62:c.instructions+=1;goto B563b62;
case 0x563b65:goto L563b65;
case 0x563b6c:c.instructions+=4;goto B563b6c;
case 0x563b72:c.instructions+=3;goto B563b72;
case 0x563b73:c.instructions+=2;goto B563b73;
case 0x563b78:c.instructions+=1;goto B563b78;
case 0x563b7d:goto L563b7d;
case 0x563b7f:c.instructions+=2;goto B563b7f;
case 0x563b81:c.instructions+=1;goto B563b81;
case 0x563b86:goto L563b86;
case 0x563b8c:c.instructions+=2;goto B563b8c;
case 0x563b8d:c.instructions+=1;goto B563b8d;
case 0x563b92:goto L563b92;
case 0x563b98:c.instructions+=2;goto B563b98;
case 0x563b99:c.instructions+=1;goto B563b99;
case 0x563b9e:goto L563b9e;
case 0x563ba1:c.instructions+=2;goto B563ba1;
case 0x563ba3:c.instructions+=1;goto B563ba3;
case 0x563ba8:goto L563ba8;
case 0x563baa:c.instructions+=1;goto B563baa;
case 0x563baf:goto L563baf;
case 0x563bb0:c.instructions+=4;goto B563bb0;
case 0x563bb1:c.instructions+=3;goto B563bb1;
case 0x563bb2:c.instructions+=2;goto B563bb2;
case 0x563bb3:c.instructions+=1;goto B563bb3;
case 0x563bb6:goto L563bb6;
case 0x563bbc:c.instructions+=2;goto B563bbc;
case 0x563bbe:c.instructions+=1;goto B563bbe;
case 0x563bc0:goto L563bc0;
case 0x563bc3:c.instructions+=2;goto B563bc3;
case 0x563bc6:c.instructions+=1;goto B563bc6;
case 0x563bc9:goto L563bc9;
case 0x563bcf:c.instructions+=2;goto B563bcf;
case 0x563bd1:c.instructions+=1;goto B563bd1;
case 0x563bd3:goto L563bd3;
case 0x563bd9:c.instructions+=2;goto B563bd9;
case 0x563bdb:c.instructions+=1;goto B563bdb;
case 0x563bde:goto L563bde;
case 0x563bdf:c.instructions+=1;goto B563bdf;
case 0x563be4:goto L563be4;
case 0x563be7:c.instructions+=2;goto B563be7;
case 0x563be9:c.instructions+=1;goto B563be9;
case 0x563beb:goto L563beb;
case 0x563bf0:c.instructions+=2;goto B563bf0;
case 0x563bf2:c.instructions+=1;goto B563bf2;
case 0x563bf4:goto L563bf4;
case 0x563bfa:c.instructions+=2;goto B563bfa;
case 0x563bfc:c.instructions+=1;goto B563bfc;
case 0x563bfe:goto L563bfe;
case 0x563c04:c.instructions+=2;goto B563c04;
case 0x563c06:c.instructions+=1;goto B563c06;
case 0x563c09:goto L563c09;
case 0x563c0a:c.instructions+=1;goto B563c0a;
case 0x563c0f:goto L563c0f;
case 0x563c12:c.instructions+=2;goto B563c12;
case 0x563c14:c.instructions+=1;goto B563c14;
case 0x563c16:goto L563c16;
case 0x563c1b:c.instructions+=1;goto B563c1b;
case 0x563c1d:goto L563c1d;
case 0x563c1f:c.instructions+=3;goto B563c1f;
case 0x563c26:c.instructions+=2;goto B563c26;
case 0x563c2d:c.instructions+=1;goto B563c2d;
case 0x563c32:goto L563c32;
case 0x563c35:goto L563c35;
case 0x563c36:c.instructions+=4;goto B563c36;
case 0x563c37:c.instructions+=3;goto B563c37;
case 0x563c38:c.instructions+=2;goto B563c38;
case 0x563c39:c.instructions+=1;goto B563c39;
case 0x563c60:goto L563c60;
case 0x563c61:c.instructions+=3;goto B563c61;
case 0x563c62:c.instructions+=2;goto B563c62;
case 0x563c64:c.instructions+=1;goto B563c64;
case 0x563c69:goto L563c69;
case 0x563c70:c.instructions+=2;goto B563c70;
case 0x563c76:c.instructions+=1;goto B563c76;
case 0x563c78:goto L563c78;
case 0x563c7a:c.instructions+=1;goto B563c7a;
case 0x563c7c:goto L563c7c;
case 0x563c7e:c.instructions+=2;goto B563c7e;
case 0x563c83:c.instructions+=1;goto B563c83;
case 0x563c88:goto L563c88;
case 0x563c8b:c.instructions+=3;goto B563c8b;
case 0x563c8c:c.instructions+=2;goto B563c8c;
case 0x563c8e:c.instructions+=1;goto B563c8e;
case 0x563c93:goto L563c93;
case 0x563c96:c.instructions+=1;goto B563c96;
case 0x563c98:goto L563c98;
case 0x563c9a:c.instructions+=1;goto B563c9a;
case 0x563c9f:goto L563c9f;
case 0x563ca1:c.instructions+=1;goto B563ca1;
case 0x563ca6:goto L563ca6;
case 0x563ca8:c.instructions+=2;goto B563ca8;
case 0x563caa:c.instructions+=1;goto B563caa;
case 0x563cad:goto L563cad;
case 0x563cb4:c.instructions+=2;goto B563cb4;
case 0x563cb6:c.instructions+=1;goto B563cb6;
case 0x563cb8:goto L563cb8;
case 0x563cbd:goto L563cbd;
case 0x563cc0:c.instructions+=2;goto B563cc0;
case 0x563cc5:c.instructions+=1;goto B563cc5;
case 0x563cca:goto L563cca;
case 0x563ccb:c.instructions+=4;goto B563ccb;
case 0x563cd0:c.instructions+=3;goto B563cd0;
case 0x563cd5:c.instructions+=2;goto B563cd5;
case 0x563cd6:c.instructions+=1;goto B563cd6;
case 0x563cdb:goto L563cdb;
case 0x563cde:c.instructions+=3;goto B563cde;
case 0x563cdf:c.instructions+=2;goto B563cdf;
case 0x563ce0:c.instructions+=1;goto B563ce0;
case 0x563ce1:goto L563ce1;
case 0x563ce2:c.instructions+=2;goto B563ce2;
case 0x563ce3:c.instructions+=1;goto B563ce3;
case 0x563cf0:goto L563cf0;
case 0x563cf1:c.instructions+=8;goto B563cf1;
case 0x563cf3:c.instructions+=7;goto B563cf3;
case 0x563cf8:c.instructions+=6;goto B563cf8;
case 0x563cf9:c.instructions+=5;goto B563cf9;
case 0x563cfe:c.instructions+=4;goto B563cfe;
case 0x563d00:c.instructions+=3;goto B563d00;
case 0x563d01:c.instructions+=2;goto B563d01;
case 0x563d03:c.instructions+=1;goto B563d03;
case 0x563d05:goto L563d05;
case 0x563d0c:c.instructions+=4;goto B563d0c;
case 0x563d0d:c.instructions+=3;goto B563d0d;
case 0x563d0e:c.instructions+=2;goto B563d0e;
case 0x563d0f:c.instructions+=1;goto B563d0f;
case 0x563d12:goto L563d12;
case 0x563d15:c.instructions+=4;goto B563d15;
case 0x563d1a:c.instructions+=3;goto B563d1a;
case 0x563d1b:c.instructions+=2;goto B563d1b;
case 0x563d22:c.instructions+=1;goto B563d22;
case 0x563d28:goto L563d28;
case 0x563d2e:goto L563d2e;
case 0x563d33:c.instructions+=1;goto B563d33;
case 0x563d39:goto L563d39;
case 0x563d3f:goto L563d3f;
case 0x563d44:c.instructions+=1;goto B563d44;
case 0x563d46:goto L563d46;
case 0x563d4b:c.instructions+=1;goto B563d4b;
case 0x563d51:goto L563d51;
case 0x563d56:c.instructions+=1;goto B563d56;
case 0x563d5c:goto L563d5c;
case 0x563d5f:c.instructions+=3;goto B563d5f;
case 0x563d62:c.instructions+=2;goto B563d62;
case 0x563d64:c.instructions+=1;goto B563d64;
case 0x563d6a:goto L563d6a;
case 0x563d70:c.instructions+=2;goto B563d70;
case 0x563d72:c.instructions+=1;goto B563d72;
case 0x563d78:goto L563d78;
case 0x563d7e:c.instructions+=2;goto B563d7e;
case 0x563d80:c.instructions+=1;goto B563d80;
case 0x563d86:goto L563d86;
case 0x563d87:c.instructions+=5;goto B563d87;
case 0x563d8e:c.instructions+=4;goto B563d8e;
case 0x563d8f:c.instructions+=3;goto B563d8f;
case 0x563d90:c.instructions+=2;goto B563d90;
case 0x563d91:c.instructions+=1;goto B563d91;
case 0x563d94:goto L563d94;
case 0x563d97:c.instructions+=7;goto B563d97;
case 0x563d9a:c.instructions+=6;goto B563d9a;
case 0x563da0:c.instructions+=5;goto B563da0;
case 0x563da3:c.instructions+=4;goto B563da3;
case 0x563da4:c.instructions+=3;goto B563da4;
case 0x563da5:c.instructions+=2;goto B563da5;
case 0x563daa:c.instructions+=1;goto B563daa;
case 0x563daf:goto L563daf;
case 0x563db0:c.instructions+=3;goto B563db0;
case 0x563db1:c.instructions+=2;goto B563db1;
case 0x563db6:c.instructions+=1;goto B563db6;
case 0x563dbb:goto L563dbb;
case 0x563dc1:c.instructions+=4;goto B563dc1;
case 0x563dc2:c.instructions+=3;goto B563dc2;
case 0x563dc7:c.instructions+=2;goto B563dc7;
case 0x563dcc:c.instructions+=1;goto B563dcc;
case 0x563dd1:goto L563dd1;
case 0x563dd6:c.instructions+=2;goto B563dd6;
case 0x563ddb:c.instructions+=1;goto B563ddb;
case 0x563de0:goto L563de0;
case 0x563de2:c.instructions+=3;goto B563de2;
case 0x563de4:c.instructions+=2;goto B563de4;
case 0x563de9:c.instructions+=1;goto B563de9;
case 0x563dee:goto L563dee;
case 0x563df4:c.instructions+=4;goto B563df4;
case 0x563df7:c.instructions+=3;goto B563df7;
case 0x563dfc:c.instructions+=2;goto B563dfc;
case 0x563dff:c.instructions+=1;goto B563dff;
case 0x563e04:goto L563e04;
case 0x563e09:c.instructions+=3;goto B563e09;
case 0x563e0e:c.instructions+=2;goto B563e0e;
case 0x563e13:c.instructions+=1;goto B563e13;
case 0x563e18:goto L563e18;
case 0x563e1d:c.instructions+=4;goto B563e1d;
case 0x563e1e:c.instructions+=3;goto B563e1e;
case 0x563e23:c.instructions+=2;goto B563e23;
case 0x563e28:c.instructions+=1;goto B563e28;
case 0x563e2d:goto L563e2d;
case 0x563e32:c.instructions+=2;goto B563e32;
case 0x563e37:c.instructions+=1;goto B563e37;
case 0x563e3c:goto L563e3c;
case 0x563e3e:c.instructions+=3;goto B563e3e;
case 0x563e40:c.instructions+=2;goto B563e40;
case 0x563e45:c.instructions+=1;goto B563e45;
case 0x563e4a:goto L563e4a;
case 0x563e50:c.instructions+=4;goto B563e50;
case 0x563e53:c.instructions+=3;goto B563e53;
case 0x563e58:c.instructions+=2;goto B563e58;
case 0x563e5b:c.instructions+=1;goto B563e5b;
case 0x563e60:goto L563e60;
case 0x563e65:c.instructions+=3;goto B563e65;
case 0x563e6a:c.instructions+=2;goto B563e6a;
case 0x563e6f:c.instructions+=1;goto B563e6f;
case 0x563e74:goto L563e74;
case 0x563e7a:c.instructions+=4;goto B563e7a;
case 0x563e7b:c.instructions+=3;goto B563e7b;
case 0x563e80:c.instructions+=2;goto B563e80;
case 0x563e85:c.instructions+=1;goto B563e85;
case 0x563e8a:goto L563e8a;
case 0x563e8f:c.instructions+=2;goto B563e8f;
case 0x563e94:c.instructions+=1;goto B563e94;
case 0x563e99:goto L563e99;
case 0x563e9b:c.instructions+=1;goto B563e9b;
case 0x563e9d:goto L563e9d;
case 0x563ea2:c.instructions+=1;goto B563ea2;
case 0x563ea7:goto L563ea7;
case 0x563ead:c.instructions+=4;goto B563ead;
case 0x563eb0:c.instructions+=3;goto B563eb0;
case 0x563eb5:c.instructions+=2;goto B563eb5;
case 0x563eb8:c.instructions+=1;goto B563eb8;
case 0x563ebd:goto L563ebd;
case 0x563ec2:c.instructions+=3;goto B563ec2;
case 0x563ec7:c.instructions+=2;goto B563ec7;
case 0x563ecc:c.instructions+=1;goto B563ecc;
case 0x563ed1:goto L563ed1;
case 0x563ed2:c.instructions+=2;goto B563ed2;
case 0x563ed7:c.instructions+=1;goto B563ed7;
case 0x563edc:goto L563edc;
case 0x563edd:c.instructions+=6;goto B563edd;
case 0x563ee4:c.instructions+=5;goto B563ee4;
case 0x563eeb:c.instructions+=4;goto B563eeb;
case 0x563eec:c.instructions+=3;goto B563eec;
case 0x563eed:c.instructions+=2;goto B563eed;
case 0x563eee:c.instructions+=1;goto B563eee;
case 0x563ef1:goto L563ef1;
case 0x563ef4:c.instructions+=7;goto B563ef4;
case 0x563ef7:c.instructions+=6;goto B563ef7;
case 0x563efd:c.instructions+=5;goto B563efd;
case 0x563f00:c.instructions+=4;goto B563f00;
case 0x563f01:c.instructions+=3;goto B563f01;
case 0x563f02:c.instructions+=2;goto B563f02;
case 0x563f07:c.instructions+=1;goto B563f07;
case 0x563f0c:goto L563f0c;
case 0x563f12:c.instructions+=4;goto B563f12;
case 0x563f13:c.instructions+=3;goto B563f13;
case 0x563f18:c.instructions+=2;goto B563f18;
case 0x563f1d:c.instructions+=1;goto B563f1d;
case 0x563f22:goto L563f22;
case 0x563f27:c.instructions+=2;goto B563f27;
case 0x563f2c:c.instructions+=1;goto B563f2c;
case 0x563f31:goto L563f31;
case 0x563f33:c.instructions+=3;goto B563f33;
case 0x563f34:c.instructions+=2;goto B563f34;
case 0x563f39:c.instructions+=1;goto B563f39;
case 0x563f3e:goto L563f3e;
case 0x563f44:c.instructions+=4;goto B563f44;
case 0x563f47:c.instructions+=3;goto B563f47;
case 0x563f4c:c.instructions+=2;goto B563f4c;
case 0x563f4f:c.instructions+=1;goto B563f4f;
case 0x563f54:goto L563f54;
case 0x563f59:c.instructions+=3;goto B563f59;
case 0x563f5e:c.instructions+=2;goto B563f5e;
case 0x563f63:c.instructions+=1;goto B563f63;
case 0x563f68:goto L563f68;
case 0x563f6d:c.instructions+=4;goto B563f6d;
case 0x563f6e:c.instructions+=3;goto B563f6e;
case 0x563f73:c.instructions+=2;goto B563f73;
case 0x563f78:c.instructions+=1;goto B563f78;
case 0x563f7d:goto L563f7d;
case 0x563f82:c.instructions+=2;goto B563f82;
case 0x563f87:c.instructions+=1;goto B563f87;
case 0x563f8c:goto L563f8c;
case 0x563f8e:c.instructions+=3;goto B563f8e;
case 0x563f8f:c.instructions+=2;goto B563f8f;
case 0x563f94:c.instructions+=1;goto B563f94;
case 0x563f99:goto L563f99;
case 0x563f9f:c.instructions+=4;goto B563f9f;
case 0x563fa2:c.instructions+=3;goto B563fa2;
case 0x563fa7:c.instructions+=2;goto B563fa7;
case 0x563faa:c.instructions+=1;goto B563faa;
case 0x563faf:goto L563faf;
case 0x563fb4:c.instructions+=3;goto B563fb4;
case 0x563fb9:c.instructions+=2;goto B563fb9;
case 0x563fbe:c.instructions+=1;goto B563fbe;
case 0x563fc3:goto L563fc3;
case 0x563fc9:c.instructions+=4;goto B563fc9;
case 0x563fca:c.instructions+=3;goto B563fca;
case 0x563fcf:c.instructions+=2;goto B563fcf;
case 0x563fd4:c.instructions+=1;goto B563fd4;
case 0x563fd9:goto L563fd9;
case 0x563fde:c.instructions+=2;goto B563fde;
case 0x563fe3:c.instructions+=1;goto B563fe3;
case 0x563fe8:goto L563fe8;
case 0x563fea:c.instructions+=2;goto B563fea;
case 0x563feb:c.instructions+=1;goto B563feb;
case 0x563ff0:goto L563ff0;
case 0x563ff5:c.instructions+=1;goto B563ff5;
case 0x563ff7:goto L563ff7;
case 0x563ffc:c.instructions+=1;goto B563ffc;
case 0x563ffe:goto L563ffe;
default:missing_instruction(c.pc);}
B563004:L563004:{c.instructions+=1;NFSU2_TR(0x563004);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x563009ull));
TAIL_STATIC(0x521530u,521);
}
B563009:L563009:{c.instructions+=5;NFSU2_TR(0x563009);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56300a:{NFSU2_TR(0x56300a);
u8 U[4];
w4(U+0,u32(0x78f744ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56300f:{NFSU2_TR(0x56300f);
u8 U[4];
w4(U+0,u32(0x2f5e7da3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B563014:{NFSU2_TR(0x563014);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B563015:{NFSU2_TR(0x563015);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56301aull));
TAIL_STATIC(0x537b80u,537);
}
B56301a:L56301a:{c.instructions+=7;NFSU2_TR(0x56301a);
__builtin_memmove((R+4),gp(0x861e74),4);
}
B563020:{NFSU2_TR(0x563020);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B563023:{NFSU2_TR(0x563023);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B563024:{NFSU2_TR(0x563024);
u8 U[4];
w4(U+0,u32(0x78f744ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B563029:{NFSU2_TR(0x563029);
u8 U[4];
w4(U+0,u32(0x79d80cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56302e:{NFSU2_TR(0x56302e);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56302f:{NFSU2_TR(0x56302f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x563034ull));
TAIL_STATIC(0x542600u,542);
}
B563034:L563034:{c.instructions+=6;NFSU2_TR(0x563034);
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
B563037:{NFSU2_TR(0x563037);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B563038:{NFSU2_TR(0x563038);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B563039:{NFSU2_TR(0x563039);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B56303a:{NFSU2_TR(0x56303a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B56303b:{NFSU2_TR(0x56303b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B56303e:L56303e:{c.instructions+=2;NFSU2_TR(0x56303e);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xe1fde1d1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B563044:{NFSU2_TR(0x563044);
if(r1(R+518)){{goto L56307f;}}
}
B563046:L563046:{c.instructions+=2;NFSU2_TR(0x563046);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
w1(R+512,u8((r4(U+6))<(u32(0xe75749d4ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0xe75749d4ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0xe75749d4ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B56304c:{NFSU2_TR(0x56304c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5630f2;}}
}
B563052:L563052:{c.instructions+=2;NFSU2_TR(0x563052);
__builtin_memmove((R+4),(R+24),4);
}
B563054:{NFSU2_TR(0x563054);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x563059ull));
TAIL_STATIC(0x538ca0u,538);
}
B563059:L563059:{c.instructions+=4;NFSU2_TR(0x563059);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B56305c:{NFSU2_TR(0x56305c);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((R+0),(U+0),4);
}
B56305f:{NFSU2_TR(0x56305f);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
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
B563061:{NFSU2_TR(0x563061);
if(r1(R+518)){{goto L5630f2;}}
}
B563067:L563067:{c.instructions+=5;NFSU2_TR(0x563067);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B56306a:{NFSU2_TR(0x56306a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B56306d:{NFSU2_TR(0x56306d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56306e:{NFSU2_TR(0x56306e);
w4(R+4,u32(0x838980ull));
}
B563073:{NFSU2_TR(0x563073);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x563078ull));
TAIL_STATIC(0x561a40u,561);
}
B563078:L563078:{c.instructions+=5;NFSU2_TR(0x563078);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B563079:{NFSU2_TR(0x563079);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B56307a:{NFSU2_TR(0x56307a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B56307b:{NFSU2_TR(0x56307b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B56307c:{NFSU2_TR(0x56307c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B56307f:L56307f:{c.instructions+=3;NFSU2_TR(0x56307f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x13cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B563085:{NFSU2_TR(0x563085);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xc407210ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B56308a:{NFSU2_TR(0x56308a);
if(r1(R+518)){{goto L5630d2;}}
}
B56308c:L56308c:{c.instructions+=2;NFSU2_TR(0x56308c);
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
B563091:{NFSU2_TR(0x563091);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5630f2;}}
}
B563093:L563093:{c.instructions+=2;NFSU2_TR(0x563093);
w4(R+4,u32(0x838980ull));
}
B563098:{NFSU2_TR(0x563098);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56309dull));
TAIL_STATIC(0x53b3f0u,53b);
}
B56309d:L56309d:{c.instructions+=5;NFSU2_TR(0x56309d);
s1(0x838982,u8(0x0ull));
}
B5630a4:{NFSU2_TR(0x5630a4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5630a7:{NFSU2_TR(0x5630a7);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5630a9:{NFSU2_TR(0x5630a9);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5630aa:{NFSU2_TR(0x5630aa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5630afull));
TAIL_STATIC(0x50b8c0u,50b);
}
B5630af:L5630af:{c.instructions+=4;NFSU2_TR(0x5630af);
__builtin_memmove((R+0),gp(0x83898c),4);
}
B5630b4:{NFSU2_TR(0x5630b4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B5630b7:{NFSU2_TR(0x5630b7);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5630b9:{NFSU2_TR(0x5630b9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x562d7au,562);}
}
B5630bf:L5630bf:{c.instructions+=3;NFSU2_TR(0x5630bf);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5630c2:{NFSU2_TR(0x5630c2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5630c3:{NFSU2_TR(0x5630c3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5630c8ull));
TAIL_STATIC(0x552c80u,552);
}
B5630c8:L5630c8:{c.instructions+=6;NFSU2_TR(0x5630c8);
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
B5630cb:{NFSU2_TR(0x5630cb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5630cc:{NFSU2_TR(0x5630cc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5630cd:{NFSU2_TR(0x5630cd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5630ce:{NFSU2_TR(0x5630ce);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5630cf:{NFSU2_TR(0x5630cf);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5630d2:L5630d2:{c.instructions+=4;NFSU2_TR(0x5630d2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5630d5:{NFSU2_TR(0x5630d5);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((R+0),(U+0),4);
}
B5630d8:{NFSU2_TR(0x5630d8);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
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
B5630da:{NFSU2_TR(0x5630da);
if(r1(R+518)){{goto L5630f2;}}
}
B5630dc:L5630dc:{c.instructions+=4;NFSU2_TR(0x5630dc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5630df:{NFSU2_TR(0x5630df);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x45ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5630e2:{NFSU2_TR(0x5630e2);
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
B5630e4:{NFSU2_TR(0x5630e4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5630f2;}}
}
B5630e6:L5630e6:{c.instructions+=1;NFSU2_TR(0x5630e6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5630ebull));
TAIL_STATIC(0x54f980u,54f);
}
B5630eb:L5630eb:{c.instructions+=2;NFSU2_TR(0x5630eb);
__builtin_memmove((R+4),(R+0),4);
}
B5630ed:{NFSU2_TR(0x5630ed);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5630f2ull));
TAIL_STATIC(0x55bd60u,55b);
}
B5630f2:L5630f2:{c.instructions+=5;NFSU2_TR(0x5630f2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5630f3:{NFSU2_TR(0x5630f3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5630f4:{NFSU2_TR(0x5630f4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5630f5:{NFSU2_TR(0x5630f5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5630f6:{NFSU2_TR(0x5630f6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B563100:L563100:{c.instructions+=6;NFSU2_TR(0x563100);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B563101:{NFSU2_TR(0x563101);
__builtin_memmove((R+20),(R+16),4);
}
B563103:{NFSU2_TR(0x563103);
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
B56310a:{NFSU2_TR(0x56310a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56310b:{NFSU2_TR(0x56310b);
__builtin_memmove((R+28),(R+4),4);
}
B56310d:{NFSU2_TR(0x56310d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L56328b;}}
}
B563113:L563113:{c.instructions+=4;NFSU2_TR(0x563113);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B563116:{NFSU2_TR(0x563116);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B563117:{NFSU2_TR(0x563117);
__builtin_memmove(gp(0x8389a8),(R+0),4);
}
B56311c:{NFSU2_TR(0x56311c);
w4(R+24,u32(0x40ull));
}
B563121:L563121:{c.instructions+=3;NFSU2_TR(0x563121);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B563122:{NFSU2_TR(0x563122);
w4(R+4,u32(0x8392c0ull));
}
B563127:{NFSU2_TR(0x563127);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56312cull));
TAIL_STATIC(0x6102f0u,610);
}
B56312c:L56312c:{c.instructions+=2;NFSU2_TR(0x56312c);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B56312e:{NFSU2_TR(0x56312e);
if(r1(R+518)){{goto L563143;}}
}
B563130:L563130:{c.instructions+=4;NFSU2_TR(0x563130);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B563132:{NFSU2_TR(0x563132);
u8 U[4];
w4(U+0,u32(0x564b8cb6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B563137:{NFSU2_TR(0x563137);
__builtin_memmove((R+4),(R+0),4);
}
B563139:{NFSU2_TR(0x563139);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56313eull));
TAIL_STATIC(0x61b500u,61b);
}
B56313e:L56313e:{c.instructions+=2;NFSU2_TR(0x56313e);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0x40ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x40ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x40ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B563141:{NFSU2_TR(0x563141);
if(r1(R+518)){{goto L56314b;}}
}
B563143:L563143:{c.instructions+=3;NFSU2_TR(0x563143);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B563144:{NFSU2_TR(0x563144);
u8 U[14];
__builtin_memmove((U+6),(R+24),4);
w1(R+512,u8((r4(U+6))<(u32(0x43ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x43ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x43ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B563147:{NFSU2_TR(0x563147);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x563121u);}goto L563121;}}
}
B563149:L563149:{c.instructions+=1;NFSU2_TR(0x563149);
{goto L563159;}
}
B56314b:L56314b:{c.instructions+=2;NFSU2_TR(0x56314b);
w4(R+4,u32(0x838980ull));
}
B563150:{NFSU2_TR(0x563150);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x563155ull));
TAIL_STATIC(0x50ef10u,50e);
}
B563155:L563155:{c.instructions+=2;NFSU2_TR(0x563155);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B563157:{NFSU2_TR(0x563157);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L563167;}}
}
B563159:L563159:{c.instructions+=2;NFSU2_TR(0x563159);
w4(R+4,u32(0x838980ull));
}
B56315e:{NFSU2_TR(0x56315e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x563163ull));
TAIL_STATIC(0x521580u,521);
}
B563163:L563163:{c.instructions+=2;NFSU2_TR(0x563163);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B563165:{NFSU2_TR(0x563165);
if(r1(R+518)){{goto L5631e2;}}
}
B563167:L563167:{c.instructions+=11;NFSU2_TR(0x563167);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B56316a:{NFSU2_TR(0x56316a);
u8 U[4];
w4(U+0,u32(0x80c151d5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56316f:{NFSU2_TR(0x56316f);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B563171:{NFSU2_TR(0x563171);
u8 U[4];
w4(U+0,u32(0x1fab5998ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B563176:{NFSU2_TR(0x563176);
u8 U[4];
w4(U+0,u32(0xe75749d4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56317b:{NFSU2_TR(0x56317b);
u8 U[4];
w4(U+0,u32(0x51123592ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B563180:{NFSU2_TR(0x563180);
u8 U[4];
w4(U+0,u32(0x7758f62dull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B563185:{NFSU2_TR(0x563185);
u8 U[4];
w4(U+0,u32(0x548b4385ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56318a:{NFSU2_TR(0x56318a);
u8 U[4];
w4(U+0,u32(0x783fe5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56318f:{NFSU2_TR(0x56318f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B563190:{NFSU2_TR(0x563190);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x563195ull));
TAIL_STATIC(0x558790u,558);
}
B563195:L563195:{c.instructions+=5;NFSU2_TR(0x563195);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x24ull))));
}
B563198:{NFSU2_TR(0x563198);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B563199:{NFSU2_TR(0x563199);
w4(R+4,u32(0x8637b0ull));
}
B56319e:{NFSU2_TR(0x56319e);
s4(0x838970,u32(0x1fab5998ull));
}
B5631a8:{NFSU2_TR(0x5631a8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5631adull));
TAIL_STATIC(0x51bb70u,51b);
}
B5631ad:L5631ad:{c.instructions+=2;NFSU2_TR(0x5631ad);
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
B5631af:{NFSU2_TR(0x5631af);
if(r1(R+518)){{goto L56328a;}}
}
B5631b5:L5631b5:{c.instructions+=3;NFSU2_TR(0x5631b5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5631b8:{NFSU2_TR(0x5631b8);
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
B5631ba:{NFSU2_TR(0x5631ba);
if(r1(R+518)){{goto L56328a;}}
}
B5631c0:L5631c0:{c.instructions+=3;NFSU2_TR(0x5631c0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5631c3:{NFSU2_TR(0x5631c3);
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
B5631c5:{NFSU2_TR(0x5631c5);
if(r1(R+518)){{goto L56328a;}}
}
B5631cb:L5631cb:{c.instructions+=6;NFSU2_TR(0x5631cb);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5631cc:{NFSU2_TR(0x5631cc);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5631ce:{NFSU2_TR(0x5631ce);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5631d0:{NFSU2_TR(0x5631d0);
u8 U[4];
w4(U+0,u32(0x9e99ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5631d5:{NFSU2_TR(0x5631d5);
__builtin_memmove((R+4),(R+0),4);
}
B5631d7:{NFSU2_TR(0x5631d7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5631dcull));
TAIL_STATIC(0x55b5c0u,55b);
}
B5631dc:L5631dc:{c.instructions+=4;NFSU2_TR(0x5631dc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5631dd:{NFSU2_TR(0x5631dd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5631de:{NFSU2_TR(0x5631de);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5631df:{NFSU2_TR(0x5631df);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5631e2:L5631e2:{c.instructions+=3;NFSU2_TR(0x5631e2);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5631e5:{NFSU2_TR(0x5631e5);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x40ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x40ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5631e8:{NFSU2_TR(0x5631e8);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L563212;}}
}
B5631ea:L5631ea:{c.instructions+=2;NFSU2_TR(0x5631ea);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0x43ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x43ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x43ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5631ed:{NFSU2_TR(0x5631ed);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L563212;}}
}
B5631ef:L5631ef:{c.instructions+=3;NFSU2_TR(0x5631ef);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5631f0:{NFSU2_TR(0x5631f0);
w4(R+4,u32(0x8392c0ull));
}
B5631f5:{NFSU2_TR(0x5631f5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5631faull));
TAIL_STATIC(0x6102f0u,610);
}
B5631fa:L5631fa:{c.instructions+=2;NFSU2_TR(0x5631fa);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5631fc:{NFSU2_TR(0x5631fc);
if(r1(R+518)){{goto L563212;}}
}
B5631fe:L5631fe:{c.instructions+=5;NFSU2_TR(0x5631fe);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B563201:{NFSU2_TR(0x563201);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B563203:{NFSU2_TR(0x563203);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B563204:{NFSU2_TR(0x563204);
w4(R+4,u32(0x838980ull));
}
B563209:{NFSU2_TR(0x563209);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56320eull));
TAIL_STATIC(0x521670u,521);
}
B56320e:L56320e:{c.instructions+=2;NFSU2_TR(0x56320e);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B563210:{NFSU2_TR(0x563210);
if(r1(R+518)){{goto L563226;}}
}
B563212:L563212:{c.instructions+=5;NFSU2_TR(0x563212);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B563215:{NFSU2_TR(0x563215);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B563217:{NFSU2_TR(0x563217);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B563218:{NFSU2_TR(0x563218);
w4(R+4,u32(0x838980ull));
}
B56321d:{NFSU2_TR(0x56321d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x563222ull));
TAIL_STATIC(0x521670u,521);
}
B563222:L563222:{c.instructions+=2;NFSU2_TR(0x563222);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B563224:{NFSU2_TR(0x563224);
if(r1(R+518)){{goto L563272;}}
}
B563226:L563226:{c.instructions+=11;NFSU2_TR(0x563226);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B563229:{NFSU2_TR(0x563229);
u8 U[4];
w4(U+0,u32(0x6d7902cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56322e:{NFSU2_TR(0x56322e);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B563230:{NFSU2_TR(0x563230);
u8 U[4];
w4(U+0,u32(0x1fab5998ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B563235:{NFSU2_TR(0x563235);
u8 U[4];
w4(U+0,u32(0xe75749d4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56323a:{NFSU2_TR(0x56323a);
u8 U[4];
w4(U+0,u32(0x51123592ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56323f:{NFSU2_TR(0x56323f);
u8 U[4];
w4(U+0,u32(0x7758f62dull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B563244:{NFSU2_TR(0x563244);
u8 U[4];
w4(U+0,u32(0x548b4385ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B563249:{NFSU2_TR(0x563249);
u8 U[4];
w4(U+0,u32(0x783fe5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56324e:{NFSU2_TR(0x56324e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56324f:{NFSU2_TR(0x56324f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x563254ull));
TAIL_STATIC(0x558790u,558);
}
B563254:L563254:{c.instructions+=4;NFSU2_TR(0x563254);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B563255:{NFSU2_TR(0x563255);
u8 U[4];
w4(U+0,u32(0x9e99ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56325a:{NFSU2_TR(0x56325a);
s4(0x838970,u32(0x1fab5998ull));
}
B563264:{NFSU2_TR(0x563264);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x563269ull));
TAIL_STATIC(0x55dda0u,55d);
}
B563269:L563269:{c.instructions+=5;NFSU2_TR(0x563269);
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
B56326c:{NFSU2_TR(0x56326c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B56326d:{NFSU2_TR(0x56326d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B56326e:{NFSU2_TR(0x56326e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B56326f:{NFSU2_TR(0x56326f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B563272:L563272:{c.instructions+=6;NFSU2_TR(0x563272);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B563275:{NFSU2_TR(0x563275);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B563277:{NFSU2_TR(0x563277);
u8 U[4];
w4(U+0,u32(0xde6eff34ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56327c:{NFSU2_TR(0x56327c);
u8 U[4];
w4(U+0,u32(0x47ff4e7cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B563281:{NFSU2_TR(0x563281);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B563282:{NFSU2_TR(0x563282);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x563287ull));
TAIL_STATIC(0x537c60u,537);
}
B563287:L563287:{c.instructions+=1;NFSU2_TR(0x563287);
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
B56328a:L56328a:{c.instructions+=1;NFSU2_TR(0x56328a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B56328b:L56328b:{c.instructions+=3;NFSU2_TR(0x56328b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B56328c:{NFSU2_TR(0x56328c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B56328d:{NFSU2_TR(0x56328d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B563290:L563290:{c.instructions+=7;NFSU2_TR(0x563290);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B563291:{NFSU2_TR(0x563291);
__builtin_memmove((R+20),(R+16),4);
}
B563293:{NFSU2_TR(0x563293);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B563294:{NFSU2_TR(0x563294);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B563295:{NFSU2_TR(0x563295);
__builtin_memmove((R+28),(R+4),4);
}
B563297:{NFSU2_TR(0x563297);
w4(R+24,u32(0x40ull));
}
B56329c:{NFSU2_TR(0x56329c);
__builtin_memmove((R+16),(R+16),4);
}
B5632a0:L5632a0:{c.instructions+=3;NFSU2_TR(0x5632a0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5632a1:{NFSU2_TR(0x5632a1);
w4(R+4,u32(0x8392c0ull));
}
B5632a6:{NFSU2_TR(0x5632a6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5632abull));
TAIL_STATIC(0x6102f0u,610);
}
B5632ab:L5632ab:{c.instructions+=2;NFSU2_TR(0x5632ab);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5632ad:{NFSU2_TR(0x5632ad);
if(r1(R+518)){{goto L5632c6;}}
}
B5632af:L5632af:{c.instructions+=4;NFSU2_TR(0x5632af);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5632b1:{NFSU2_TR(0x5632b1);
u8 U[4];
w4(U+0,u32(0x564b8cb6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5632b6:{NFSU2_TR(0x5632b6);
__builtin_memmove((R+4),(R+0),4);
}
B5632b8:{NFSU2_TR(0x5632b8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5632bdull));
TAIL_STATIC(0x61b500u,61b);
}
B5632bd:L5632bd:{c.instructions+=2;NFSU2_TR(0x5632bd);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0x40ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x40ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x40ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5632c0:{NFSU2_TR(0x5632c0);
if(r1(R+518)){{goto L563404;}}
}
B5632c6:L5632c6:{c.instructions+=3;NFSU2_TR(0x5632c6);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B5632c7:{NFSU2_TR(0x5632c7);
u8 U[14];
__builtin_memmove((U+6),(R+24),4);
w1(R+512,u8((r4(U+6))<(u32(0x43ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x43ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x43ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5632ca:{NFSU2_TR(0x5632ca);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5632a0u);}goto L5632a0;}}
}
B5632cc:L5632cc:{c.instructions+=2;NFSU2_TR(0x5632cc);
w4(R+4,u32(0x838980ull));
}
B5632d1:{NFSU2_TR(0x5632d1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5632d6ull));
TAIL_STATIC(0x521580u,521);
}
B5632d6:L5632d6:{c.instructions+=2;NFSU2_TR(0x5632d6);
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
B5632d8:{NFSU2_TR(0x5632d8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L563404;}}
}
B5632de:L5632de:{c.instructions+=6;NFSU2_TR(0x5632de);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5632e1:{NFSU2_TR(0x5632e1);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5632e4:{NFSU2_TR(0x5632e4);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5632e5:{NFSU2_TR(0x5632e5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B5632e8:{NFSU2_TR(0x5632e8);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x5073ef13ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5632ee:{NFSU2_TR(0x5632ee);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L563323;}}
}
B5632f0:L5632f0:{c.instructions+=2;NFSU2_TR(0x5632f0);
u8 U[14];
__builtin_memmove((U+6),(R+24),4);
w1(R+512,u8((r4(U+6))<(u32(0x40ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x40ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x40ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5632f3:{NFSU2_TR(0x5632f3);
if(r1(R+518)){{goto L563403;}}
}
B5632f9:L5632f9:{c.instructions+=3;NFSU2_TR(0x5632f9);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5632fa:{NFSU2_TR(0x5632fa);
w4(R+4,u32(0x838980ull));
}
B5632ff:{NFSU2_TR(0x5632ff);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x563304ull));
TAIL_STATIC(0x50ee60u,50e);
}
B563304:L563304:{c.instructions+=2;NFSU2_TR(0x563304);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B563306:{NFSU2_TR(0x563306);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L56331d;}}
}
B563308:L563308:{c.instructions+=4;NFSU2_TR(0x563308);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56330a:{NFSU2_TR(0x56330a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56330b:{NFSU2_TR(0x56330b);
w4(R+4,u32(0x838980ull));
}
B563310:{NFSU2_TR(0x563310);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x563315ull));
TAIL_STATIC(0x521670u,521);
}
B563315:L563315:{c.instructions+=2;NFSU2_TR(0x563315);
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
B563317:{NFSU2_TR(0x563317);
if(r1(R+518)){{goto L563403;}}
}
B56331d:L56331d:{c.instructions+=3;NFSU2_TR(0x56331d);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xffffffffull))));
__builtin_memmove((R+4),(U+0),4);
}
B563320:{NFSU2_TR(0x563320);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B563321:{NFSU2_TR(0x563321);
{goto L563360;}
}
B563323:L563323:{c.instructions+=2;NFSU2_TR(0x563323);
u8 U[14];
__builtin_memmove((U+6),(R+12),4);
w1(R+512,u8((r4(U+6))<(u32(0xd9feec59ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0xd9feec59ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0xd9feec59ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B563329:{NFSU2_TR(0x563329);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L563403;}}
}
B56332f:L56332f:{c.instructions+=2;NFSU2_TR(0x56332f);
u8 U[14];
__builtin_memmove((U+6),(R+24),4);
w1(R+512,u8((r4(U+6))<(u32(0x43ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x43ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x43ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B563332:{NFSU2_TR(0x563332);
if(r1(R+518)){{goto L563403;}}
}
B563338:L563338:{c.instructions+=3;NFSU2_TR(0x563338);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B563339:{NFSU2_TR(0x563339);
w4(R+4,u32(0x838980ull));
}
B56333e:{NFSU2_TR(0x56333e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x563343ull));
TAIL_STATIC(0x50ee60u,50e);
}
B563343:L563343:{c.instructions+=2;NFSU2_TR(0x563343);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B563345:{NFSU2_TR(0x563345);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L56335c;}}
}
B563347:L563347:{c.instructions+=4;NFSU2_TR(0x563347);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B563349:{NFSU2_TR(0x563349);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56334a:{NFSU2_TR(0x56334a);
w4(R+4,u32(0x838980ull));
}
B56334f:{NFSU2_TR(0x56334f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x563354ull));
TAIL_STATIC(0x521670u,521);
}
B563354:L563354:{c.instructions+=2;NFSU2_TR(0x563354);
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
B563356:{NFSU2_TR(0x563356);
if(r1(R+518)){{goto L563403;}}
}
B56335c:L56335c:{c.instructions+=2;NFSU2_TR(0x56335c);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1ull))));
__builtin_memmove((R+8),(U+0),4);
}
B56335f:{NFSU2_TR(0x56335f);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B563360:L563360:{c.instructions+=3;NFSU2_TR(0x563360);
w4(R+4,u32(0x838980ull));
}
B563365:{NFSU2_TR(0x563365);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B563366:{NFSU2_TR(0x563366);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56336bull));
TAIL_STATIC(0x561ad0u,561);
}
B56336b:L56336b:{c.instructions+=3;NFSU2_TR(0x56336b);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4cull))));
__builtin_memmove((R+24),(U+0),4);
}
B56336e:{NFSU2_TR(0x56336e);
__builtin_memmove((R+4),(R+24),4);
}
B563370:{NFSU2_TR(0x563370);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x563375ull));
TAIL_STATIC(0x52f390u,52f);
}
B563375:L563375:{c.instructions+=3;NFSU2_TR(0x563375);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B563377:{NFSU2_TR(0x563377);
__builtin_memmove((R+4),(R+28),4);
}
B563379:{NFSU2_TR(0x563379);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56337cull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B56337c:L56337c:{c.instructions+=3;NFSU2_TR(0x56337c);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B56337f:{NFSU2_TR(0x56337f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B563380:{NFSU2_TR(0x563380);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x563385ull));
TAIL_STATIC(0x505450u,505);
}
B563385:L563385:{c.instructions+=2;NFSU2_TR(0x563385);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B563386:{NFSU2_TR(0x563386);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56338bull));
TAIL_STATIC(0x50b840u,50b);
}
B56338b:L56338b:{c.instructions+=3;NFSU2_TR(0x56338b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B56338e:{NFSU2_TR(0x56338e);
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
B563390:{NFSU2_TR(0x563390);
if(r1(R+518)){{goto L563397;}}
}
B563392:L563392:{c.instructions+=2;NFSU2_TR(0x563392);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B563395:{NFSU2_TR(0x563395);
{goto L563399;}
}
B563397:L563397:{c.instructions+=1;NFSU2_TR(0x563397);
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
B563399:L563399:{c.instructions+=4;NFSU2_TR(0x563399);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B56339b:{NFSU2_TR(0x56339b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56339c:{NFSU2_TR(0x56339c);
__builtin_memmove((R+4),(R+24),4);
}
B56339e:{NFSU2_TR(0x56339e);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5633a1ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5633a1:L5633a1:{c.instructions+=4;NFSU2_TR(0x5633a1);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x5073ef13ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5633a7:{NFSU2_TR(0x5633a7);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5633aa:{NFSU2_TR(0x5633aa);
__builtin_memmove((R+4),(R+24),4);
}
B5633ac:{NFSU2_TR(0x5633ac);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5633d6;}}
}
B5633ae:L5633ae:{c.instructions+=3;NFSU2_TR(0x5633ae);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5633b0:{NFSU2_TR(0x5633b0);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5633b2:{NFSU2_TR(0x5633b2);
if(r1(R+518)){{goto L5633c5;}}
}
B5633b4:L5633b4:{c.instructions+=1;NFSU2_TR(0x5633b4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5633b9ull));
TAIL_STATIC(0x51fac0u,51f);
}
B5633b9:L5633b9:{c.instructions+=3;NFSU2_TR(0x5633b9);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5633bc:{NFSU2_TR(0x5633bc);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5633bd:{NFSU2_TR(0x5633bd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5633c2ull));
TAIL_STATIC(0x50b8a0u,50b);
}
B5633c2:L5633c2:{c.instructions+=2;NFSU2_TR(0x5633c2);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B5633c3:{NFSU2_TR(0x5633c3);
{goto L5633f2;}
}
B5633c5:L5633c5:{c.instructions+=1;NFSU2_TR(0x5633c5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5633caull));
TAIL_STATIC(0x51f9f0u,51f);
}
B5633ca:L5633ca:{c.instructions+=3;NFSU2_TR(0x5633ca);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5633cd:{NFSU2_TR(0x5633cd);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5633ce:{NFSU2_TR(0x5633ce);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5633d3ull));
TAIL_STATIC(0x50b8a0u,50b);
}
B5633d3:L5633d3:{c.instructions+=2;NFSU2_TR(0x5633d3);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B5633d4:{NFSU2_TR(0x5633d4);
{goto L5633f2;}
}
B5633d6:L5633d6:{c.instructions+=3;NFSU2_TR(0x5633d6);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5633d8:{NFSU2_TR(0x5633d8);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5633da:{NFSU2_TR(0x5633da);
if(r1(R+518)){{goto L5633e3;}}
}
B5633dc:L5633dc:{c.instructions+=1;NFSU2_TR(0x5633dc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5633e1ull));
TAIL_STATIC(0x51fac0u,51f);
}
B5633e1:L5633e1:{c.instructions+=1;NFSU2_TR(0x5633e1);
{goto L5633e8;}
}
B5633e3:L5633e3:{c.instructions+=1;NFSU2_TR(0x5633e3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5633e8ull));
TAIL_STATIC(0x51f9f0u,51f);
}
B5633e8:L5633e8:{c.instructions+=3;NFSU2_TR(0x5633e8);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5633eb:{NFSU2_TR(0x5633eb);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5633ec:{NFSU2_TR(0x5633ec);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5633f1ull));
TAIL_STATIC(0x50b8a0u,50b);
}
B5633f1:L5633f1:{c.instructions+=1;NFSU2_TR(0x5633f1);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B5633f2:L5633f2:{c.instructions+=3;NFSU2_TR(0x5633f2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5633f3:{NFSU2_TR(0x5633f3);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5633f4:{NFSU2_TR(0x5633f4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5633f9ull));
TAIL_STATIC(0x50b8c0u,50b);
}
B5633f9:L5633f9:{c.instructions+=4;NFSU2_TR(0x5633f9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5633fb:{NFSU2_TR(0x5633fb);
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
B5633fe:{NFSU2_TR(0x5633fe);
__builtin_memmove((R+4),(R+28),4);
}
B563400:{NFSU2_TR(0x563400);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x563403ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B563403:L563403:{c.instructions+=1;NFSU2_TR(0x563403);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B563404:L563404:{c.instructions+=4;NFSU2_TR(0x563404);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B563405:{NFSU2_TR(0x563405);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B563406:{NFSU2_TR(0x563406);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B563407:{NFSU2_TR(0x563407);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B563410:L563410:{c.instructions+=10;NFSU2_TR(0x563410);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B563411:{NFSU2_TR(0x563411);
__builtin_memmove((R+20),(R+16),4);
}
B563413:{NFSU2_TR(0x563413);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B563414:{NFSU2_TR(0x563414);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B563415:{NFSU2_TR(0x563415);
__builtin_memmove((R+24),(R+4),4);
}
B563417:{NFSU2_TR(0x563417);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x188ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B56341d:{NFSU2_TR(0x56341d);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B56341f:{NFSU2_TR(0x56341f);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B563420:{NFSU2_TR(0x563420);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B563423:{NFSU2_TR(0x563423);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L563457;}}
}
B563425:L563425:{c.instructions+=3;NFSU2_TR(0x563425);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x189ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B56342b:{NFSU2_TR(0x56342b);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B56342d:{NFSU2_TR(0x56342d);
if(r1(R+518)){{goto L563457;}}
}
B56342f:L56342f:{c.instructions+=9;NFSU2_TR(0x56342f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B563432:{NFSU2_TR(0x563432);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B563435:{NFSU2_TR(0x563435);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B563438:{NFSU2_TR(0x563438);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B563439:{NFSU2_TR(0x563439);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56343a:{NFSU2_TR(0x56343a);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56343b:{NFSU2_TR(0x56343b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56343c:{NFSU2_TR(0x56343c);
__builtin_memmove((R+4),(R+24),4);
}
B56343e:{NFSU2_TR(0x56343e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x563443ull));
TAIL_STATIC(0x543d40u,543);
}
B563443:L563443:{c.instructions+=5;NFSU2_TR(0x563443);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B563446:{NFSU2_TR(0x563446);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B563449:{NFSU2_TR(0x563449);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56344a:{NFSU2_TR(0x56344a);
__builtin_memmove((R+4),(R+24),4);
}
B56344c:{NFSU2_TR(0x56344c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x563451ull));
TAIL_STATIC(0x50f5b0u,50f);
}
B563451:L563451:{c.instructions+=1;NFSU2_TR(0x563451);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x174ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B563457:L563457:{c.instructions+=2;NFSU2_TR(0x563457);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+512,u8((r4(U+0))<(u32(0x911ab364ull))));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x911ab364ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B56345d:{NFSU2_TR(0x56345d);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L56391f;}}
}
B563463:L563463:{c.instructions+=1;NFSU2_TR(0x563463);
if(r1(R+518)){{goto L563876;}}
}
B563469:L563469:{c.instructions+=2;NFSU2_TR(0x563469);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+512,u8((r4(U+0))<(u32(0x35f8620bull))));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x35f8620bull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B56346f:{NFSU2_TR(0x56346f);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L56351d;}}
}
B563475:L563475:{c.instructions+=1;NFSU2_TR(0x563475);
if(r1(R+518)){{goto L5634e4;}}
}
B563477:L563477:{c.instructions+=2;NFSU2_TR(0x563477);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+512,u8((r4(U+0))<(u32(0x34dc1bcfull))));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x34dc1bcfull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B56347d:{NFSU2_TR(0x56347d);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L5634d1;}}
}
B56347f:L56347f:{c.instructions+=1;NFSU2_TR(0x56347f);
if(r1(R+518)){{goto L56399a;}}
}
B563485:L563485:{c.instructions+=2;NFSU2_TR(0x563485);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1fab5998ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B56348b:{NFSU2_TR(0x56348b);
if(r1(R+518)){{goto L56399a;}}
}
B563491:L563491:{c.instructions+=2;NFSU2_TR(0x563491);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
w1(R+512,u8((r4(U+6))<(u32(0x2101dcc5ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x2101dcc5ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x2101dcc5ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B563497:{NFSU2_TR(0x563497);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L563c35;}}
}
B56349d:L56349d:{c.instructions+=2;NFSU2_TR(0x56349d);
__builtin_memmove((R+4),(R+24),4);
}
B56349f:{NFSU2_TR(0x56349f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5634a4ull));
TAIL_STATIC(0x538ca0u,538);
}
B5634a4:L5634a4:{c.instructions+=3;NFSU2_TR(0x5634a4);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x188ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5634aa:{NFSU2_TR(0x5634aa);
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
B5634ac:{NFSU2_TR(0x5634ac);
if(r1(R+518)){{goto L563c35;}}
}
B5634b2:L5634b2:{c.instructions+=6;NFSU2_TR(0x5634b2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5634b5:{NFSU2_TR(0x5634b5);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5634b7:{NFSU2_TR(0x5634b7);
u8 U[4];
w4(U+0,u32(0x790cecull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5634bc:{NFSU2_TR(0x5634bc);
u8 U[4];
w4(U+0,u32(0xdb285767ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5634c1:{NFSU2_TR(0x5634c1);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5634c2:{NFSU2_TR(0x5634c2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5634c7ull));
TAIL_STATIC(0x537c00u,537);
}
B5634c7:L5634c7:{c.instructions+=6;NFSU2_TR(0x5634c7);
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
B5634ca:{NFSU2_TR(0x5634ca);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5634cb:{NFSU2_TR(0x5634cb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5634cc:{NFSU2_TR(0x5634cc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5634cd:{NFSU2_TR(0x5634cd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5634ce:{NFSU2_TR(0x5634ce);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5634d1:L5634d1:{c.instructions+=2;NFSU2_TR(0x5634d1);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
w1(R+512,u8((r4(U+6))<(u32(0x34dc1becull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x34dc1becull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x34dc1becull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5634d7:{NFSU2_TR(0x5634d7);
if(r1(R+518)){{goto L56399a;}}
}
B5634dd:L5634dd:{c.instructions+=5;NFSU2_TR(0x5634dd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5634de:{NFSU2_TR(0x5634de);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5634df:{NFSU2_TR(0x5634df);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5634e0:{NFSU2_TR(0x5634e0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5634e1:{NFSU2_TR(0x5634e1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5634e4:L5634e4:{c.instructions+=5;NFSU2_TR(0x5634e4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5634e7:{NFSU2_TR(0x5634e7);
u8 U[4];
w4(U+0,u32(0x79d6acull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5634ec:{NFSU2_TR(0x5634ec);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5634ed:{NFSU2_TR(0x5634ed);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x189ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5634f4:{NFSU2_TR(0x5634f4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5634f9ull));
TAIL_STATIC(0x4954c0u,495);
}
B5634f9:L5634f9:{c.instructions+=4;NFSU2_TR(0x5634f9);
__builtin_memmove((R+0),gp(0x83899c),4);
}
B5634fe:{NFSU2_TR(0x5634fe);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B563501:{NFSU2_TR(0x563501);
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
B563504:{NFSU2_TR(0x563504);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L563c35;}}
}
B56350a:L56350a:{c.instructions+=3;NFSU2_TR(0x56350a);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56350c:{NFSU2_TR(0x56350c);
w4(R+4,u32(0x8635bcull));
}
B563511:{NFSU2_TR(0x563511);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x563516ull));
TAIL_STATIC(0x5243d0u,524);
}
B563516:L563516:{c.instructions+=5;NFSU2_TR(0x563516);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B563517:{NFSU2_TR(0x563517);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B563518:{NFSU2_TR(0x563518);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B563519:{NFSU2_TR(0x563519);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B56351a:{NFSU2_TR(0x56351a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B56351d:L56351d:{c.instructions+=2;NFSU2_TR(0x56351d);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+512,u8((r4(U+0))<(u32(0x51123592ull))));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x51123592ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B563523:{NFSU2_TR(0x563523);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L563860;}}
}
B563529:L563529:{c.instructions+=1;NFSU2_TR(0x563529);
if(r1(R+518)){{goto L563809;}}
}
B56352f:L56352f:{c.instructions+=2;NFSU2_TR(0x56352f);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x406415e3ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B563535:{NFSU2_TR(0x563535);
if(r1(R+518)){{goto L56354d;}}
}
B563537:L563537:{c.instructions+=2;NFSU2_TR(0x563537);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
w1(R+512,u8((r4(U+6))<(u32(0x5073ef13ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x5073ef13ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x5073ef13ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B56353d:{NFSU2_TR(0x56353d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L563c35;}}
}
B563543:L563543:{c.instructions+=2;NFSU2_TR(0x563543);
w4(R+12,u32(0x4ull));
}
B563548:{NFSU2_TR(0x563548);
{goto L563a5a;}
}
B56354d:L56354d:{c.instructions+=4;NFSU2_TR(0x56354d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B563550:{NFSU2_TR(0x563550);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x22ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B563553:{NFSU2_TR(0x563553);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B563555:{NFSU2_TR(0x563555);
if(r1(R+518)){{goto L563565;}}
}
B563557:L563557:{c.instructions+=4;NFSU2_TR(0x563557);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B56355a:{NFSU2_TR(0x56355a);
u8 U[4];
w4(U+0,u32(0x13ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56355c:{NFSU2_TR(0x56355c);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56355d:{NFSU2_TR(0x56355d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x563562ull));
TAIL_STATIC(0x51de60u,51d);
}
B563562:L563562:{c.instructions+=1;NFSU2_TR(0x563562);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B563565:L563565:{c.instructions+=3;NFSU2_TR(0x563565);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x189ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B56356b:{NFSU2_TR(0x56356b);
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
B56356d:{NFSU2_TR(0x56356d);
if(r1(R+518)){{goto L563c35;}}
}
B563573:L563573:{c.instructions+=4;NFSU2_TR(0x563573);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B563576:{NFSU2_TR(0x563576);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x22ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B563579:{NFSU2_TR(0x563579);
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
B56357b:{NFSU2_TR(0x56357b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L563c35;}}
}
B563581:L563581:{c.instructions+=3;NFSU2_TR(0x563581);
u8 U[8];
__builtin_memmove((U+0),gp(0x8389a0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B563588:{NFSU2_TR(0x563588);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B56358f:{NFSU2_TR(0x56358f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5635b5;}}
}
B563591:L563591:{c.instructions+=3;NFSU2_TR(0x563591);
__builtin_memmove((R+28),gp(0x839bb8),4);
}
B563597:{NFSU2_TR(0x563597);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B563599:{NFSU2_TR(0x563599);
if(r1(R+518)){{goto L5635b5;}}
}
B56359b:L56359b:{c.instructions+=3;NFSU2_TR(0x56359b);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56359d:{NFSU2_TR(0x56359d);
u8 U[4];
w4(U+0,u32(0x79be90ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5635a2:{NFSU2_TR(0x5635a2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5635a7ull));
TAIL_STATIC(0x43db50u,43d);
}
B5635a7:L5635a7:{c.instructions+=4;NFSU2_TR(0x5635a7);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5635aa:{NFSU2_TR(0x5635aa);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5635ab:{NFSU2_TR(0x5635ab);
__builtin_memmove((R+4),(R+28),4);
}
B5635ad:{NFSU2_TR(0x5635ad);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5635b2ull));
TAIL_STATIC(0x61b500u,61b);
}
B5635b2:L5635b2:{c.instructions+=1;NFSU2_TR(0x5635b2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5635b5:L5635b5:{c.instructions+=3;NFSU2_TR(0x5635b5);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x188ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5635bb:{NFSU2_TR(0x5635bb);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5635bd:{NFSU2_TR(0x5635bd);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5636f7;}}
}
B5635c3:L5635c3:{c.instructions+=2;NFSU2_TR(0x5635c3);
__builtin_memmove((R+4),(R+24),4);
}
B5635c5:{NFSU2_TR(0x5635c5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5635caull));
TAIL_STATIC(0x50f310u,50f);
}
B5635ca:L5635ca:{c.instructions+=2;NFSU2_TR(0x5635ca);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5635cc:{NFSU2_TR(0x5635cc);
if(r1(R+518)){{goto L5635dc;}}
}
B5635ce:L5635ce:{c.instructions+=2;NFSU2_TR(0x5635ce);
__builtin_memmove((R+4),(R+24),4);
}
B5635d0:{NFSU2_TR(0x5635d0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5635d5ull));
TAIL_STATIC(0x55cc50u,55c);
}
B5635d5:L5635d5:{c.instructions+=5;NFSU2_TR(0x5635d5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5635d6:{NFSU2_TR(0x5635d6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5635d7:{NFSU2_TR(0x5635d7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5635d8:{NFSU2_TR(0x5635d8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5635d9:{NFSU2_TR(0x5635d9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5635dc:L5635dc:{c.instructions+=4;NFSU2_TR(0x5635dc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5635df:{NFSU2_TR(0x5635df);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5635e1:{NFSU2_TR(0x5635e1);
w4(R+12,u32(0x73bc702eull));
}
B5635e6:{NFSU2_TR(0x5635e6);
if(r1(R+518)){{goto L5636cd;}}
}
B5635ec:L5635ec:{c.instructions+=4;NFSU2_TR(0x5635ec);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5635ef:{NFSU2_TR(0x5635ef);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xffffffbcull))));
}
B5635f2:{NFSU2_TR(0x5635f2);
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
B5635f5:{NFSU2_TR(0x5635f5);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L5636cd;}}
}
B5635fb:L5635fb:{c.instructions+=1;NFSU2_TR(0x5635fb);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x563c3cull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B563602:L563602:{c.instructions+=2;NFSU2_TR(0x563602);
w4(R+12,u32(0xd286be3aull));
}
B563607:{NFSU2_TR(0x563607);
{goto L5636cd;}
}
B56360c:L56360c:{c.instructions+=3;NFSU2_TR(0x56360c);
u8 U[4];
w4(U+0,u32(0xcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56360e:{NFSU2_TR(0x56360e);
w4(R+4,u32(0x8392c0ull));
}
B563613:{NFSU2_TR(0x563613);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x563618ull));
TAIL_STATIC(0x6102f0u,610);
}
B563618:L563618:{c.instructions+=3;NFSU2_TR(0x563618);
__builtin_memmove((R+28),(R+0),4);
}
B56361a:{NFSU2_TR(0x56361a);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B56361c:{NFSU2_TR(0x56361c);
if(r1(R+518)){{goto L5636cd;}}
}
B563622:L563622:{c.instructions+=4;NFSU2_TR(0x563622);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B563624:{NFSU2_TR(0x563624);
u8 U[4];
w4(U+0,u32(0x721aff7cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B563629:{NFSU2_TR(0x563629);
__builtin_memmove((R+4),(R+28),4);
}
B56362b:{NFSU2_TR(0x56362b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x563630ull));
TAIL_STATIC(0x61b500u,61b);
}
B563630:L563630:{c.instructions+=2;NFSU2_TR(0x563630);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B563632:{NFSU2_TR(0x563632);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L563649;}}
}
B563634:L563634:{c.instructions+=4;NFSU2_TR(0x563634);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B563635:{NFSU2_TR(0x563635);
u8 U[4];
w4(U+0,u32(0x6509ec92ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56363a:{NFSU2_TR(0x56363a);
__builtin_memmove((R+4),(R+28),4);
}
B56363c:{NFSU2_TR(0x56363c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x563641ull));
TAIL_STATIC(0x61b500u,61b);
}
B563641:L563641:{c.instructions+=2;NFSU2_TR(0x563641);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B563643:{NFSU2_TR(0x563643);
if(r1(R+518)){{goto L5636cd;}}
}
B563649:L563649:{c.instructions+=2;NFSU2_TR(0x563649);
w4(R+12,u32(0xe7337e9dull));
}
B56364e:{NFSU2_TR(0x56364e);
{goto L5636cd;}
}
B563650:L563650:{c.instructions+=3;NFSU2_TR(0x563650);
u8 U[4];
w4(U+0,u32(0x20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B563652:{NFSU2_TR(0x563652);
w4(R+4,u32(0x8392c0ull));
}
B563657:{NFSU2_TR(0x563657);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56365cull));
TAIL_STATIC(0x6102f0u,610);
}
B56365c:L56365c:{c.instructions+=3;NFSU2_TR(0x56365c);
__builtin_memmove((R+28),(R+0),4);
}
B56365e:{NFSU2_TR(0x56365e);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B563660:{NFSU2_TR(0x563660);
if(r1(R+518)){{goto L5636cd;}}
}
B563662:L563662:{c.instructions+=4;NFSU2_TR(0x563662);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B563664:{NFSU2_TR(0x563664);
u8 U[4];
w4(U+0,u32(0x721aff7cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B563669:{NFSU2_TR(0x563669);
__builtin_memmove((R+4),(R+28),4);
}
B56366b:{NFSU2_TR(0x56366b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x563670ull));
TAIL_STATIC(0x61b500u,61b);
}
B563670:L563670:{c.instructions+=2;NFSU2_TR(0x563670);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B563672:{NFSU2_TR(0x563672);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L563685;}}
}
B563674:L563674:{c.instructions+=4;NFSU2_TR(0x563674);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B563675:{NFSU2_TR(0x563675);
u8 U[4];
w4(U+0,u32(0x6509ec92ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56367a:{NFSU2_TR(0x56367a);
__builtin_memmove((R+4),(R+28),4);
}
B56367c:{NFSU2_TR(0x56367c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x563681ull));
TAIL_STATIC(0x61b500u,61b);
}
B563681:L563681:{c.instructions+=2;NFSU2_TR(0x563681);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B563683:{NFSU2_TR(0x563683);
if(r1(R+518)){{goto L5636cd;}}
}
B563685:L563685:{c.instructions+=2;NFSU2_TR(0x563685);
w4(R+12,u32(0xf152befaull));
}
B56368a:{NFSU2_TR(0x56368a);
{goto L5636cd;}
}
B56368c:L56368c:{c.instructions+=3;NFSU2_TR(0x56368c);
u8 U[4];
w4(U+0,u32(0x7ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56368e:{NFSU2_TR(0x56368e);
w4(R+4,u32(0x8392c0ull));
}
B563693:{NFSU2_TR(0x563693);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x563698ull));
TAIL_STATIC(0x6102f0u,610);
}
B563698:L563698:{c.instructions+=3;NFSU2_TR(0x563698);
__builtin_memmove((R+28),(R+0),4);
}
B56369a:{NFSU2_TR(0x56369a);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B56369c:{NFSU2_TR(0x56369c);
if(r1(R+518)){{goto L5636cd;}}
}
B56369e:L56369e:{c.instructions+=4;NFSU2_TR(0x56369e);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5636a0:{NFSU2_TR(0x5636a0);
u8 U[4];
w4(U+0,u32(0x721aff7cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5636a5:{NFSU2_TR(0x5636a5);
__builtin_memmove((R+4),(R+28),4);
}
B5636a7:{NFSU2_TR(0x5636a7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5636acull));
TAIL_STATIC(0x61b500u,61b);
}
B5636ac:L5636ac:{c.instructions+=2;NFSU2_TR(0x5636ac);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5636ae:{NFSU2_TR(0x5636ae);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5636c1;}}
}
B5636b0:L5636b0:{c.instructions+=4;NFSU2_TR(0x5636b0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5636b1:{NFSU2_TR(0x5636b1);
u8 U[4];
w4(U+0,u32(0x6509ec92ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5636b6:{NFSU2_TR(0x5636b6);
__builtin_memmove((R+4),(R+28),4);
}
B5636b8:{NFSU2_TR(0x5636b8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5636bdull));
TAIL_STATIC(0x61b500u,61b);
}
B5636bd:L5636bd:{c.instructions+=2;NFSU2_TR(0x5636bd);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5636bf:{NFSU2_TR(0x5636bf);
if(r1(R+518)){{goto L5636cd;}}
}
B5636c1:L5636c1:{c.instructions+=2;NFSU2_TR(0x5636c1);
w4(R+12,u32(0xad460262ull));
}
B5636c6:{NFSU2_TR(0x5636c6);
{goto L5636cd;}
}
B5636c8:L5636c8:{c.instructions+=1;NFSU2_TR(0x5636c8);
w4(R+12,u32(0x6bcbceeaull));
}
B5636cd:L5636cd:{c.instructions+=5;NFSU2_TR(0x5636cd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5636d0:{NFSU2_TR(0x5636d0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5636d1:{NFSU2_TR(0x5636d1);
u8 U[4];
w4(U+0,u32(0x783fe5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5636d6:{NFSU2_TR(0x5636d6);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5636d7:{NFSU2_TR(0x5636d7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5636dcull));
TAIL_STATIC(0x558430u,558);
}
B5636dc:L5636dc:{c.instructions+=4;NFSU2_TR(0x5636dc);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B5636df:{NFSU2_TR(0x5636df);
__builtin_memmove((R+4),(R+24),4);
}
B5636e1:{NFSU2_TR(0x5636e1);
s4(0x838970,u32(0x34dc1becull));
}
B5636eb:{NFSU2_TR(0x5636eb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5636f0ull));
TAIL_STATIC(0x53bd20u,53b);
}
B5636f0:L5636f0:{c.instructions+=5;NFSU2_TR(0x5636f0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5636f1:{NFSU2_TR(0x5636f1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5636f2:{NFSU2_TR(0x5636f2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5636f3:{NFSU2_TR(0x5636f3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5636f4:{NFSU2_TR(0x5636f4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5636f7:L5636f7:{c.instructions+=4;NFSU2_TR(0x5636f7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x158ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5636fd:{NFSU2_TR(0x5636fd);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x158ull))));
__builtin_memmove((R+0),(U+0),4);
}
B563703:{NFSU2_TR(0x563703);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
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
B563705:{NFSU2_TR(0x563705);
if(r1(R+518)){{goto L563c35;}}
}
B56370b:L56370b:{c.instructions+=6;NFSU2_TR(0x56370b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B56370e:{NFSU2_TR(0x56370e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B563711:{NFSU2_TR(0x563711);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B563712:{NFSU2_TR(0x563712);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B563714:{NFSU2_TR(0x563714);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B563715:{NFSU2_TR(0x563715);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56371aull));
TAIL_STATIC(0x50d150u,50d);
}
B56371a:L56371a:{c.instructions+=7;NFSU2_TR(0x56371a);
__builtin_memmove((R+8),gp(0x8389a0),4);
}
B563720:{NFSU2_TR(0x563720);
w4(R+4,u32(0x1ull));
}
B563725:{NFSU2_TR(0x563725);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B563728:{NFSU2_TR(0x563728);
w1(R+0,u8(u32(r1(R+0))^u32(r1(R+0))));
}
B56372a:{NFSU2_TR(0x56372a);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B56372c:{NFSU2_TR(0x56372c);
w4(R+12,u32(0xc4c5d271ull));
}
B563731:{NFSU2_TR(0x563731);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L563754;}}
}
B563733:L563733:{c.instructions+=2;NFSU2_TR(0x563733);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(U+8),r4(R+4)));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B563736:{NFSU2_TR(0x563736);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L56373f;}}
}
B563738:L563738:{c.instructions+=2;NFSU2_TR(0x563738);
w4(R+12,u32(0x2a2c6aefull));
}
B56373d:{NFSU2_TR(0x56373d);
{goto L563789;}
}
B56373f:L56373f:{c.instructions+=5;NFSU2_TR(0x56373f);
__builtin_memmove((R+0),gp(0x839bb8),4);
}
B563744:{NFSU2_TR(0x563744);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B563746:{NFSU2_TR(0x563746);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B563748:{NFSU2_TR(0x563748);
w4(R+12,u32(0x31fbc167ull));
}
B56374d:{NFSU2_TR(0x56374d);
if(r1(R+518)){{goto L563780;}}
}
B56374f:L56374f:{c.instructions+=3;NFSU2_TR(0x56374f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B563750:{NFSU2_TR(0x563750);
u8 U[4];
w4(U+0,u32(0x40ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B563752:{NFSU2_TR(0x563752);
{goto L563768;}
}
B563754:L563754:{c.instructions+=4;NFSU2_TR(0x563754);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x168ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B56375a:{NFSU2_TR(0x56375a);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B56375c:{NFSU2_TR(0x56375c);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B56375e:{NFSU2_TR(0x56375e);
if(r1(R+518)){{goto L563780;}}
}
B563760:L563760:{c.instructions+=4;NFSU2_TR(0x563760);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B563763:{NFSU2_TR(0x563763);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B563766:{NFSU2_TR(0x563766);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B563767:{NFSU2_TR(0x563767);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B563768:L563768:{c.instructions+=2;NFSU2_TR(0x563768);
w4(R+4,u32(0x85ad40ull));
}
B56376d:{NFSU2_TR(0x56376d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x563772ull));
TAIL_STATIC(0x514280u,514);
}
B563772:L563772:{c.instructions+=3;NFSU2_TR(0x563772);
w4(R+4,u32(0x838980ull));
}
B563777:{NFSU2_TR(0x563777);
__builtin_memmove((R+28),(R+0),4);
}
B563779:{NFSU2_TR(0x563779);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56377eull));
TAIL_STATIC(0x521530u,521);
}
B56377e:L56377e:{c.instructions+=1;NFSU2_TR(0x56377e);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+0))));
}
B563780:L563780:{c.instructions+=2;NFSU2_TR(0x563780);
u8 U[8];
__builtin_memmove((U+0),gp(0x861e74),4);
w1(R+523,sborrow<u32>(r4(U+0),r4(R+28)));
w4(U+4,u32(u32(r4(U+0))-u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B563786:{NFSU2_TR(0x563786);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
__builtin_memmove((R+0),(U+0),1);
}
B563789:L563789:{c.instructions+=2;NFSU2_TR(0x563789);
u8 U[8];
__builtin_memmove((U+0),gp(0x850078),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B563790:{NFSU2_TR(0x563790);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5637c4;}}
}
B563792:L563792:{c.instructions+=2;NFSU2_TR(0x563792);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B563794:{NFSU2_TR(0x563794);
if(r1(R+518)){{goto L5637c4;}}
}
B563796:L563796:{c.instructions+=5;NFSU2_TR(0x563796);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B563799:{NFSU2_TR(0x563799);
u8 U[4];
w4(U+0,u32(0xd1ac60beull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56379e:{NFSU2_TR(0x56379e);
u8 U[4];
w4(U+0,u32(0x78fa24ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5637a3:{NFSU2_TR(0x5637a3);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5637a4:{NFSU2_TR(0x5637a4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5637a9ull));
TAIL_STATIC(0x558430u,558);
}
B5637a9:L5637a9:{c.instructions+=4;NFSU2_TR(0x5637a9);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B5637ac:{NFSU2_TR(0x5637ac);
__builtin_memmove((R+4),(R+24),4);
}
B5637ae:{NFSU2_TR(0x5637ae);
s4(0x838970,u32(0x34dc1becull));
}
B5637b8:{NFSU2_TR(0x5637b8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5637bdull));
TAIL_STATIC(0x53bd20u,53b);
}
B5637bd:L5637bd:{c.instructions+=5;NFSU2_TR(0x5637bd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5637be:{NFSU2_TR(0x5637be);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5637bf:{NFSU2_TR(0x5637bf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5637c0:{NFSU2_TR(0x5637c0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5637c1:{NFSU2_TR(0x5637c1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5637c4:L5637c4:{c.instructions+=11;NFSU2_TR(0x5637c4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5637c7:{NFSU2_TR(0x5637c7);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5637c8:{NFSU2_TR(0x5637c8);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5637ca:{NFSU2_TR(0x5637ca);
u8 U[4];
w4(U+0,u32(0x34dc1bcfull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5637cf:{NFSU2_TR(0x5637cf);
u8 U[4];
w4(U+0,u32(0x34dc1bcfull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5637d4:{NFSU2_TR(0x5637d4);
u8 U[4];
w4(U+0,u32(0xd05fc3a3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5637d9:{NFSU2_TR(0x5637d9);
u8 U[4];
w4(U+0,u32(0x61cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5637de:{NFSU2_TR(0x5637de);
u8 U[4];
w4(U+0,u32(0xf770ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5637e3:{NFSU2_TR(0x5637e3);
u8 U[4];
w4(U+0,u32(0x78fa24ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5637e8:{NFSU2_TR(0x5637e8);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5637e9:{NFSU2_TR(0x5637e9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5637eeull));
TAIL_STATIC(0x558790u,558);
}
B5637ee:L5637ee:{c.instructions+=4;NFSU2_TR(0x5637ee);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x24ull))));
}
B5637f1:{NFSU2_TR(0x5637f1);
__builtin_memmove((R+4),(R+24),4);
}
B5637f3:{NFSU2_TR(0x5637f3);
s4(0x838970,u32(0x34dc1bcfull));
}
B5637fd:{NFSU2_TR(0x5637fd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x563802ull));
TAIL_STATIC(0x53bd20u,53b);
}
B563802:L563802:{c.instructions+=5;NFSU2_TR(0x563802);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B563803:{NFSU2_TR(0x563803);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B563804:{NFSU2_TR(0x563804);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B563805:{NFSU2_TR(0x563805);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B563806:{NFSU2_TR(0x563806);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B563809:L563809:{c.instructions+=3;NFSU2_TR(0x563809);
__builtin_memmove((R+0),gp(0x838983),1);
}
B56380e:{NFSU2_TR(0x56380e);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B563810:{NFSU2_TR(0x563810);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L563829;}}
}
B563812:L563812:{c.instructions+=6;NFSU2_TR(0x563812);
__builtin_memmove((R+0),gp(0x839bb8),4);
}
B563817:{NFSU2_TR(0x563817);
__builtin_memmove((R+4),gp(0x8389a8),4);
}
B56381d:{NFSU2_TR(0x56381d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56381e:{NFSU2_TR(0x56381e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56381f:{NFSU2_TR(0x56381f);
w4(R+4,u32(0x838980ull));
}
B563824:{NFSU2_TR(0x563824);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x563829ull));
TAIL_STATIC(0x54fdb0u,54f);
}
B563829:L563829:{c.instructions+=4;NFSU2_TR(0x563829);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x160ull))));
__builtin_memmove((R+28),(U+0),4);
}
B56382f:{NFSU2_TR(0x56382f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+24),(U+0),4);
}
B563831:{NFSU2_TR(0x563831);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B563833:{NFSU2_TR(0x563833);
if(r1(R+518)){{goto L56384d;}}
}
B563835:L563835:{c.instructions+=6;NFSU2_TR(0x563835);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B563838:{NFSU2_TR(0x563838);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B56383b:{NFSU2_TR(0x56383b);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56383c:{NFSU2_TR(0x56383c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56383d:{NFSU2_TR(0x56383d);
w4(R+4,u32(0x838980ull));
}
B563842:{NFSU2_TR(0x563842);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x563847ull));
TAIL_STATIC(0x5474d0u,547);
}
B563847:L563847:{c.instructions+=3;NFSU2_TR(0x563847);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+24),(U+0),4);
}
B563849:{NFSU2_TR(0x563849);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B56384b:{NFSU2_TR(0x56384b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x563835u);}goto L563835;}}
}
B56384d:L56384d:{c.instructions+=1;NFSU2_TR(0x56384d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x563852ull));
TAIL_STATIC(0x54f980u,54f);
}
B563852:L563852:{c.instructions+=2;NFSU2_TR(0x563852);
__builtin_memmove((R+4),(R+0),4);
}
B563854:{NFSU2_TR(0x563854);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x563859ull));
TAIL_STATIC(0x55bd60u,55b);
}
B563859:L563859:{c.instructions+=5;NFSU2_TR(0x563859);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B56385a:{NFSU2_TR(0x56385a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B56385b:{NFSU2_TR(0x56385b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B56385c:{NFSU2_TR(0x56385c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B56385d:{NFSU2_TR(0x56385d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B563860:L563860:{c.instructions+=2;NFSU2_TR(0x563860);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
w1(R+512,u8((r4(U+6))<(u32(0x72619778ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x72619778ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x72619778ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B563866:{NFSU2_TR(0x563866);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L563c35;}}
}
B56386c:L56386c:{c.instructions+=2;NFSU2_TR(0x56386c);
w4(R+0,u32(0x6ull));
}
B563871:{NFSU2_TR(0x563871);
{goto L56395e;}
}
B563876:L563876:{c.instructions+=3;NFSU2_TR(0x563876);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x189ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B56387c:{NFSU2_TR(0x56387c);
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
B56387e:{NFSU2_TR(0x56387e);
if(r1(R+518)){{goto L563c35;}}
}
B563884:L563884:{c.instructions+=5;NFSU2_TR(0x563884);
u8 U[8];
__builtin_memmove((U+0),gp(0x8389a0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B56388b:{NFSU2_TR(0x56388b);
__builtin_memmove((R+12),(R+518),1);
}
B56388e:{NFSU2_TR(0x56388e);
w1(R+4,u8(u32(r1(R+4))^u32(r1(R+4))));
}
B563890:{NFSU2_TR(0x563890);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(r1(R+12))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B563892:{NFSU2_TR(0x563892);
if(r1(R+518)){{goto L5638b7;}}
}
B563894:L563894:{c.instructions+=4;NFSU2_TR(0x563894);
__builtin_memmove((R+28),gp(0x839bb8),4);
}
B56389a:{NFSU2_TR(0x56389a);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56389c:{NFSU2_TR(0x56389c);
u8 U[4];
w4(U+0,u32(0x79be90ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5638a1:{NFSU2_TR(0x5638a1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5638a6ull));
TAIL_STATIC(0x43db50u,43d);
}
B5638a6:L5638a6:{c.instructions+=4;NFSU2_TR(0x5638a6);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5638a9:{NFSU2_TR(0x5638a9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5638aa:{NFSU2_TR(0x5638aa);
__builtin_memmove((R+4),(R+28),4);
}
B5638ac:{NFSU2_TR(0x5638ac);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5638b1ull));
TAIL_STATIC(0x61b500u,61b);
}
B5638b1:L5638b1:{c.instructions+=2;NFSU2_TR(0x5638b1);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x1ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5638b4:{NFSU2_TR(0x5638b4);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
__builtin_memmove((R+4),(U+2),1);
}
B5638b7:L5638b7:{c.instructions+=3;NFSU2_TR(0x5638b7);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x188ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5638bd:{NFSU2_TR(0x5638bd);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5638bf:{NFSU2_TR(0x5638bf);
if(r1(R+518)){{goto L5638e1;}}
}
B5638c1:L5638c1:{c.instructions+=2;NFSU2_TR(0x5638c1);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(r1(R+12))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5638c3:{NFSU2_TR(0x5638c3);
if(r1(R+518)){{goto L5638d1;}}
}
B5638c5:L5638c5:{c.instructions+=2;NFSU2_TR(0x5638c5);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5638c7:{NFSU2_TR(0x5638c7);
if(r1(R+518)){{goto L5638e1;}}
}
B5638c9:L5638c9:{c.instructions+=2;NFSU2_TR(0x5638c9);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(r1(R+12))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5638cb:{NFSU2_TR(0x5638cb);
if(r1(R+518)){{goto L5638e1;}}
}
B5638cd:L5638cd:{c.instructions+=2;NFSU2_TR(0x5638cd);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5638cf:{NFSU2_TR(0x5638cf);
if(r1(R+518)){{goto L5638e1;}}
}
B5638d1:L5638d1:{c.instructions+=3;NFSU2_TR(0x5638d1);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5638d3:{NFSU2_TR(0x5638d3);
__builtin_memmove((R+4),(R+24),4);
}
B5638d5:{NFSU2_TR(0x5638d5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5638daull));
TAIL_STATIC(0x55ce90u,55c);
}
B5638da:L5638da:{c.instructions+=5;NFSU2_TR(0x5638da);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5638db:{NFSU2_TR(0x5638db);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5638dc:{NFSU2_TR(0x5638dc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5638dd:{NFSU2_TR(0x5638dd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5638de:{NFSU2_TR(0x5638de);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5638e1:L5638e1:{c.instructions+=5;NFSU2_TR(0x5638e1);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x160ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5638e7:{NFSU2_TR(0x5638e7);
s1(0x838983,u8(0x0ull));
}
B5638ee:{NFSU2_TR(0x5638ee);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+24),(U+0),4);
}
B5638f0:{NFSU2_TR(0x5638f0);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5638f2:{NFSU2_TR(0x5638f2);
if(r1(R+518)){{goto L56390c;}}
}
B5638f4:L5638f4:{c.instructions+=6;NFSU2_TR(0x5638f4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5638f7:{NFSU2_TR(0x5638f7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5638fa:{NFSU2_TR(0x5638fa);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5638fb:{NFSU2_TR(0x5638fb);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5638fc:{NFSU2_TR(0x5638fc);
w4(R+4,u32(0x838980ull));
}
B563901:{NFSU2_TR(0x563901);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x563906ull));
TAIL_STATIC(0x5474d0u,547);
}
B563906:L563906:{c.instructions+=3;NFSU2_TR(0x563906);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+24),(U+0),4);
}
B563908:{NFSU2_TR(0x563908);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B56390a:{NFSU2_TR(0x56390a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5638f4u);}goto L5638f4;}}
}
B56390c:L56390c:{c.instructions+=1;NFSU2_TR(0x56390c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x563911ull));
TAIL_STATIC(0x54f980u,54f);
}
B563911:L563911:{c.instructions+=2;NFSU2_TR(0x563911);
__builtin_memmove((R+4),(R+0),4);
}
B563913:{NFSU2_TR(0x563913);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x563918ull));
TAIL_STATIC(0x55bdf0u,55b);
}
B563918:L563918:{c.instructions+=5;NFSU2_TR(0x563918);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B563919:{NFSU2_TR(0x563919);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B56391a:{NFSU2_TR(0x56391a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B56391b:{NFSU2_TR(0x56391b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B56391c:{NFSU2_TR(0x56391c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B56391f:L56391f:{c.instructions+=2;NFSU2_TR(0x56391f);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+512,u8((r4(U+0))<(u32(0xb5971bf1ull))));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xb5971bf1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B563925:{NFSU2_TR(0x563925);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L563a35;}}
}
B56392b:L56392b:{c.instructions+=1;NFSU2_TR(0x56392b);
if(r1(R+518)){{goto L5639e0;}}
}
B563931:L563931:{c.instructions+=2;NFSU2_TR(0x563931);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+512,u8((r4(U+0))<(u32(0x9803f6e2ull))));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x9803f6e2ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B563937:{NFSU2_TR(0x563937);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L56398e;}}
}
B563939:L563939:{c.instructions+=1;NFSU2_TR(0x563939);
if(r1(R+518)){{goto L563972;}}
}
B56393b:L56393b:{c.instructions+=2;NFSU2_TR(0x56393b);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x911c0a4bull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B563941:{NFSU2_TR(0x563941);
if(r1(R+518)){{goto L563959;}}
}
B563943:L563943:{c.instructions+=2;NFSU2_TR(0x563943);
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
B563949:{NFSU2_TR(0x563949);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L563c35;}}
}
B56394f:L56394f:{c.instructions+=2;NFSU2_TR(0x56394f);
w4(R+0,u32(0x4ull));
}
B563954:{NFSU2_TR(0x563954);
{goto L5639e5;}
}
B563959:L563959:{c.instructions+=1;NFSU2_TR(0x563959);
w4(R+0,u32(0x7ull));
}
B56395e:L56395e:{c.instructions+=3;NFSU2_TR(0x56395e);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x188ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B563964:{NFSU2_TR(0x563964);
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
B563966:{NFSU2_TR(0x563966);
if(r1(R+518)){{goto L563c35;}}
}
B56396c:L56396c:{c.instructions+=3;NFSU2_TR(0x56396c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B56396f:{NFSU2_TR(0x56396f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B563970:{NFSU2_TR(0x563970);
{goto L5639f1;}
}
B563972:L563972:{c.instructions+=3;NFSU2_TR(0x563972);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x188ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B563978:{NFSU2_TR(0x563978);
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
B56397a:{NFSU2_TR(0x56397a);
if(r1(R+518)){{goto L563c35;}}
}
B563980:L563980:{c.instructions+=2;NFSU2_TR(0x563980);
__builtin_memmove((R+4),(R+24),4);
}
B563982:{NFSU2_TR(0x563982);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x563987ull));
TAIL_STATIC(0x55d410u,55d);
}
B563987:L563987:{c.instructions+=5;NFSU2_TR(0x563987);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B563988:{NFSU2_TR(0x563988);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B563989:{NFSU2_TR(0x563989);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B56398a:{NFSU2_TR(0x56398a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B56398b:{NFSU2_TR(0x56398b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B56398e:L56398e:{c.instructions+=2;NFSU2_TR(0x56398e);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
w1(R+512,u8((r4(U+6))<(u32(0xb4edeb6dull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0xb4edeb6dull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0xb4edeb6dull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B563994:{NFSU2_TR(0x563994);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L563c35;}}
}
B56399a:L56399a:{c.instructions+=2;NFSU2_TR(0x56399a);
__builtin_memmove((R+4),(R+24),4);
}
B56399c:{NFSU2_TR(0x56399c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5639a1ull));
TAIL_STATIC(0x538ca0u,538);
}
B5639a1:L5639a1:{c.instructions+=3;NFSU2_TR(0x5639a1);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x188ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5639a7:{NFSU2_TR(0x5639a7);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5639a9:{NFSU2_TR(0x5639a9);
if(r1(R+518)){{goto L5639c3;}}
}
B5639ab:L5639ab:{c.instructions+=6;NFSU2_TR(0x5639ab);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5639ae:{NFSU2_TR(0x5639ae);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5639b0:{NFSU2_TR(0x5639b0);
u8 U[4];
w4(U+0,u32(0x790cecull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5639b5:{NFSU2_TR(0x5639b5);
u8 U[4];
w4(U+0,u32(0xdb285767ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5639ba:{NFSU2_TR(0x5639ba);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5639bb:{NFSU2_TR(0x5639bb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5639c0ull));
TAIL_STATIC(0x537c00u,537);
}
B5639c0:L5639c0:{c.instructions+=1;NFSU2_TR(0x5639c0);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B5639c3:L5639c3:{c.instructions+=5;NFSU2_TR(0x5639c3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x170ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5639c9:{NFSU2_TR(0x5639c9);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5639cb:{NFSU2_TR(0x5639cb);
u8 U[4];
w4(U+0,u32(0x78f568ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5639d0:{NFSU2_TR(0x5639d0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5639d1:{NFSU2_TR(0x5639d1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5639d6ull));
TAIL_STATIC(0x51cf70u,51c);
}
B5639d6:L5639d6:{c.instructions+=6;NFSU2_TR(0x5639d6);
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
B5639d9:{NFSU2_TR(0x5639d9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5639da:{NFSU2_TR(0x5639da);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5639db:{NFSU2_TR(0x5639db);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5639dc:{NFSU2_TR(0x5639dc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5639dd:{NFSU2_TR(0x5639dd);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5639e0:L5639e0:{c.instructions+=1;NFSU2_TR(0x5639e0);
w4(R+0,u32(0x5ull));
}
B5639e5:L5639e5:{c.instructions+=3;NFSU2_TR(0x5639e5);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x188ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B5639eb:{NFSU2_TR(0x5639eb);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5639ed:{NFSU2_TR(0x5639ed);
if(r1(R+518)){{goto L563a0d;}}
}
B5639ef:L5639ef:{c.instructions+=1;NFSU2_TR(0x5639ef);
u8 U[4];
w4(U+0,u32(0xbull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5639f1:L5639f1:{c.instructions+=4;NFSU2_TR(0x5639f1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5639f4:{NFSU2_TR(0x5639f4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5639f5:{NFSU2_TR(0x5639f5);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5639f6:{NFSU2_TR(0x5639f6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5639fbull));
TAIL_STATIC(0x50d150u,50d);
}
B5639fb:L5639fb:{c.instructions+=4;NFSU2_TR(0x5639fb);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B5639fe:{NFSU2_TR(0x5639fe);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5639ff:{NFSU2_TR(0x5639ff);
__builtin_memmove((R+4),(R+24),4);
}
B563a01:{NFSU2_TR(0x563a01);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x563a06ull));
TAIL_STATIC(0x55d2d0u,55d);
}
B563a06:L563a06:{c.instructions+=5;NFSU2_TR(0x563a06);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B563a07:{NFSU2_TR(0x563a07);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B563a08:{NFSU2_TR(0x563a08);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B563a09:{NFSU2_TR(0x563a09);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B563a0a:{NFSU2_TR(0x563a0a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B563a0d:L563a0d:{c.instructions+=3;NFSU2_TR(0x563a0d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B563a10:{NFSU2_TR(0x563a10);
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
B563a12:{NFSU2_TR(0x563a12);
if(r1(R+518)){{goto L563c35;}}
}
B563a18:L563a18:{c.instructions+=4;NFSU2_TR(0x563a18);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B563a1b:{NFSU2_TR(0x563a1b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B563a1c:{NFSU2_TR(0x563a1c);
__builtin_memmove((R+4),(R+24),4);
}
B563a1e:{NFSU2_TR(0x563a1e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x563a23ull));
TAIL_STATIC(0x50f5b0u,50f);
}
B563a23:L563a23:{c.instructions+=3;NFSU2_TR(0x563a23);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B563a25:{NFSU2_TR(0x563a25);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x174ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B563a2b:{NFSU2_TR(0x563a2b);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x563a2eull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B563a2e:L563a2e:{c.instructions+=5;NFSU2_TR(0x563a2e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B563a2f:{NFSU2_TR(0x563a2f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B563a30:{NFSU2_TR(0x563a30);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B563a31:{NFSU2_TR(0x563a31);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B563a32:{NFSU2_TR(0x563a32);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B563a35:L563a35:{c.instructions+=2;NFSU2_TR(0x563a35);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xc98356baull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B563a3b:{NFSU2_TR(0x563a3b);
if(r1(R+518)){{goto L563bb6;}}
}
B563a41:L563a41:{c.instructions+=2;NFSU2_TR(0x563a41);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xd05fc3a3ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B563a47:{NFSU2_TR(0x563a47);
if(r1(R+518)){{goto L563aa5;}}
}
B563a49:L563a49:{c.instructions+=2;NFSU2_TR(0x563a49);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
w1(R+512,u8((r4(U+6))<(u32(0xd9feec59ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0xd9feec59ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0xd9feec59ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B563a4f:{NFSU2_TR(0x563a4f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L563c35;}}
}
B563a55:L563a55:{c.instructions+=1;NFSU2_TR(0x563a55);
w4(R+12,u32(0x5ull));
}
B563a5a:L563a5a:{c.instructions+=3;NFSU2_TR(0x563a5a);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x188ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B563a60:{NFSU2_TR(0x563a60);
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
B563a62:{NFSU2_TR(0x563a62);
if(r1(R+518)){{goto L563c35;}}
}
B563a68:L563a68:{c.instructions+=3;NFSU2_TR(0x563a68);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x174ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B563a6e:{NFSU2_TR(0x563a6e);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x2daab07ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B563a73:{NFSU2_TR(0x563a73);
if(r1(R+518)){{goto L563a87;}}
}
B563a75:L563a75:{c.instructions+=2;NFSU2_TR(0x563a75);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x3437a52ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B563a7a:{NFSU2_TR(0x563a7a);
if(r1(R+518)){{goto L563a87;}}
}
B563a7c:L563a7c:{c.instructions+=2;NFSU2_TR(0x563a7c);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0x3797533ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x3797533ull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0x3797533ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B563a81:{NFSU2_TR(0x563a81);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L563c35;}}
}
B563a87:L563a87:{c.instructions+=3;NFSU2_TR(0x563a87);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B563a88:{NFSU2_TR(0x563a88);
__builtin_memmove((R+4),(R+24),4);
}
B563a8a:{NFSU2_TR(0x563a8a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x563a8full));
TAIL_STATIC(0x55d0d0u,55d);
}
B563a8f:L563a8f:{c.instructions+=5;NFSU2_TR(0x563a8f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B563a92:{NFSU2_TR(0x563a92);
u8 U[4];
w4(U+0,u32(0xbull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B563a94:{NFSU2_TR(0x563a94);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B563a95:{NFSU2_TR(0x563a95);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B563a96:{NFSU2_TR(0x563a96);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x563a9bull));
TAIL_STATIC(0x50d150u,50d);
}
B563a9b:L563a9b:{c.instructions+=6;NFSU2_TR(0x563a9b);
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
B563a9e:{NFSU2_TR(0x563a9e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B563a9f:{NFSU2_TR(0x563a9f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B563aa0:{NFSU2_TR(0x563aa0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B563aa1:{NFSU2_TR(0x563aa1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B563aa2:{NFSU2_TR(0x563aa2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B563aa5:L563aa5:{c.instructions+=2;NFSU2_TR(0x563aa5);
u8 U[8];
__builtin_memmove((U+0),gp(0x8389a0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B563aac:{NFSU2_TR(0x563aac);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L563b65;}}
}
B563ab2:L563ab2:{c.instructions+=4;NFSU2_TR(0x563ab2);
__builtin_memmove((R+28),gp(0x839bb8),4);
}
B563ab8:{NFSU2_TR(0x563ab8);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B563aba:{NFSU2_TR(0x563aba);
u8 U[4];
w4(U+0,u32(0x79be90ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B563abf:{NFSU2_TR(0x563abf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x563ac4ull));
TAIL_STATIC(0x43db50u,43d);
}
B563ac4:L563ac4:{c.instructions+=4;NFSU2_TR(0x563ac4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B563ac7:{NFSU2_TR(0x563ac7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B563ac8:{NFSU2_TR(0x563ac8);
__builtin_memmove((R+4),(R+28),4);
}
B563aca:{NFSU2_TR(0x563aca);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x563acfull));
TAIL_STATIC(0x61b500u,61b);
}
B563acf:L563acf:{c.instructions+=2;NFSU2_TR(0x563acf);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x1ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B563ad2:{NFSU2_TR(0x563ad2);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L563b14;}}
}
B563ad4:L563ad4:{c.instructions+=4;NFSU2_TR(0x563ad4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x168ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B563ada:{NFSU2_TR(0x563ada);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B563adb:{NFSU2_TR(0x563adb);
__builtin_memmove((R+4),(R+24),4);
}
B563add:{NFSU2_TR(0x563add);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x563ae2ull));
TAIL_STATIC(0x53c160u,53c);
}
B563ae2:L563ae2:{c.instructions+=3;NFSU2_TR(0x563ae2);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B563ae4:{NFSU2_TR(0x563ae4);
__builtin_memmove((R+4),(R+24),4);
}
B563ae6:{NFSU2_TR(0x563ae6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x563aebull));
TAIL_STATIC(0x55ce90u,55c);
}
B563aeb:L563aeb:{c.instructions+=3;NFSU2_TR(0x563aeb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x150ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B563af1:{NFSU2_TR(0x563af1);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B563af2:{NFSU2_TR(0x563af2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x563af7ull));
TAIL_STATIC(0x50ca00u,50c);
}
B563af7:L563af7:{c.instructions+=3;NFSU2_TR(0x563af7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x154ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B563afd:{NFSU2_TR(0x563afd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B563afe:{NFSU2_TR(0x563afe);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x563b03ull));
TAIL_STATIC(0x50ca00u,50c);
}
B563b03:L563b03:{c.instructions+=3;NFSU2_TR(0x563b03);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B563b06:{NFSU2_TR(0x563b06);
__builtin_memmove((R+4),(R+24),4);
}
B563b08:{NFSU2_TR(0x563b08);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x563b0dull));
TAIL_STATIC(0x538ca0u,538);
}
B563b0d:L563b0d:{c.instructions+=5;NFSU2_TR(0x563b0d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B563b0e:{NFSU2_TR(0x563b0e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B563b0f:{NFSU2_TR(0x563b0f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B563b10:{NFSU2_TR(0x563b10);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B563b11:{NFSU2_TR(0x563b11);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B563b14:L563b14:{c.instructions+=3;NFSU2_TR(0x563b14);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x168ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B563b1a:{NFSU2_TR(0x563b1a);
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
B563b1c:{NFSU2_TR(0x563b1c);
if(r1(R+518)){{goto L563c35;}}
}
B563b22:L563b22:{c.instructions+=6;NFSU2_TR(0x563b22);
__builtin_memmove((R+4),gp(0x839bb8),4);
}
B563b28:{NFSU2_TR(0x563b28);
__builtin_memmove((R+8),gp(0x8389a8),4);
}
B563b2e:{NFSU2_TR(0x563b2e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B563b2f:{NFSU2_TR(0x563b2f);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B563b30:{NFSU2_TR(0x563b30);
w4(R+4,u32(0x838980ull));
}
B563b35:{NFSU2_TR(0x563b35);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x563b3aull));
TAIL_STATIC(0x54fdb0u,54f);
}
B563b3a:L563b3a:{c.instructions+=7;NFSU2_TR(0x563b3a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x168ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B563b40:{NFSU2_TR(0x563b40);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B563b43:{NFSU2_TR(0x563b43);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B563b46:{NFSU2_TR(0x563b46);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B563b47:{NFSU2_TR(0x563b47);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B563b48:{NFSU2_TR(0x563b48);
w4(R+4,u32(0x838980ull));
}
B563b4d:{NFSU2_TR(0x563b4d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x563b52ull));
TAIL_STATIC(0x5474d0u,547);
}
B563b52:L563b52:{c.instructions+=1;NFSU2_TR(0x563b52);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x563b57ull));
TAIL_STATIC(0x54f980u,54f);
}
B563b57:L563b57:{c.instructions+=2;NFSU2_TR(0x563b57);
__builtin_memmove((R+4),(R+0),4);
}
B563b59:{NFSU2_TR(0x563b59);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x563b5eull));
TAIL_STATIC(0x55bd60u,55b);
}
B563b5e:L563b5e:{c.instructions+=5;NFSU2_TR(0x563b5e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B563b5f:{NFSU2_TR(0x563b5f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B563b60:{NFSU2_TR(0x563b60);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B563b61:{NFSU2_TR(0x563b61);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B563b62:{NFSU2_TR(0x563b62);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B563b65:L563b65:{c.instructions+=5;NFSU2_TR(0x563b65);
s1(0x838982,u8(0x1ull));
}
B563b6c:{NFSU2_TR(0x563b6c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x168ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B563b72:{NFSU2_TR(0x563b72);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B563b73:{NFSU2_TR(0x563b73);
w4(R+4,u32(0x838980ull));
}
B563b78:{NFSU2_TR(0x563b78);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x563b7dull));
TAIL_STATIC(0x53b0c0u,53b);
}
B563b7d:L563b7d:{c.instructions+=3;NFSU2_TR(0x563b7d);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B563b7f:{NFSU2_TR(0x563b7f);
__builtin_memmove((R+4),(R+24),4);
}
B563b81:{NFSU2_TR(0x563b81);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x563b86ull));
TAIL_STATIC(0x55ce90u,55c);
}
B563b86:L563b86:{c.instructions+=3;NFSU2_TR(0x563b86);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x150ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B563b8c:{NFSU2_TR(0x563b8c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B563b8d:{NFSU2_TR(0x563b8d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x563b92ull));
TAIL_STATIC(0x50ca00u,50c);
}
B563b92:L563b92:{c.instructions+=3;NFSU2_TR(0x563b92);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x154ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B563b98:{NFSU2_TR(0x563b98);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B563b99:{NFSU2_TR(0x563b99);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x563b9eull));
TAIL_STATIC(0x50ca00u,50c);
}
B563b9e:L563b9e:{c.instructions+=3;NFSU2_TR(0x563b9e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B563ba1:{NFSU2_TR(0x563ba1);
__builtin_memmove((R+4),(R+24),4);
}
B563ba3:{NFSU2_TR(0x563ba3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x563ba8ull));
TAIL_STATIC(0x538ca0u,538);
}
B563ba8:L563ba8:{c.instructions+=2;NFSU2_TR(0x563ba8);
__builtin_memmove((R+4),(R+24),4);
}
B563baa:{NFSU2_TR(0x563baa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x563bafull));
TAIL_STATIC(0x53bcf0u,53b);
}
B563baf:L563baf:{c.instructions+=5;NFSU2_TR(0x563baf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B563bb0:{NFSU2_TR(0x563bb0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B563bb1:{NFSU2_TR(0x563bb1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B563bb2:{NFSU2_TR(0x563bb2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B563bb3:{NFSU2_TR(0x563bb3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B563bb6:L563bb6:{c.instructions+=3;NFSU2_TR(0x563bb6);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x188ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B563bbc:{NFSU2_TR(0x563bbc);
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
B563bbe:{NFSU2_TR(0x563bbe);
if(r1(R+518)){{goto L563bc9;}}
}
B563bc0:L563bc0:{c.instructions+=3;NFSU2_TR(0x563bc0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B563bc3:{NFSU2_TR(0x563bc3);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((R+4),(U+0),4);
}
B563bc6:{NFSU2_TR(0x563bc6);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x563bc9ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B563bc9:L563bc9:{c.instructions+=3;NFSU2_TR(0x563bc9);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18bull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B563bcf:{NFSU2_TR(0x563bcf);
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
B563bd1:{NFSU2_TR(0x563bd1);
if(r1(R+518)){{goto L563bf4;}}
}
B563bd3:L563bd3:{c.instructions+=3;NFSU2_TR(0x563bd3);
__builtin_memmove((R+4),gp(0x8389ac),4);
}
B563bd9:{NFSU2_TR(0x563bd9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B563bdb:{NFSU2_TR(0x563bdb);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x563bdeull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B563bde:L563bde:{c.instructions+=2;NFSU2_TR(0x563bde);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B563bdf:{NFSU2_TR(0x563bdf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x563be4ull));
TAIL_STATIC(0x4a5b10u,4a5);
}
B563be4:L563be4:{c.instructions+=3;NFSU2_TR(0x563be4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B563be7:{NFSU2_TR(0x563be7);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B563be9:{NFSU2_TR(0x563be9);
if(r1(R+518)){{goto L563bf4;}}
}
B563beb:L563beb:{c.instructions+=3;NFSU2_TR(0x563beb);
u8 U[4];
w4(U+0,u32(0x3f800000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B563bf0:{NFSU2_TR(0x563bf0);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B563bf2:{NFSU2_TR(0x563bf2);
{goto L563c1d;}
}
B563bf4:L563bf4:{c.instructions+=3;NFSU2_TR(0x563bf4);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18aull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B563bfa:{NFSU2_TR(0x563bfa);
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
B563bfc:{NFSU2_TR(0x563bfc);
if(r1(R+518)){{goto L563c35;}}
}
B563bfe:L563bfe:{c.instructions+=3;NFSU2_TR(0x563bfe);
__builtin_memmove((R+4),gp(0x8389ac),4);
}
B563c04:{NFSU2_TR(0x563c04);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B563c06:{NFSU2_TR(0x563c06);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x563c09ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B563c09:L563c09:{c.instructions+=2;NFSU2_TR(0x563c09);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B563c0a:{NFSU2_TR(0x563c0a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x563c0full));
TAIL_STATIC(0x4a5b10u,4a5);
}
B563c0f:L563c0f:{c.instructions+=3;NFSU2_TR(0x563c0f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B563c12:{NFSU2_TR(0x563c12);
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
B563c14:{NFSU2_TR(0x563c14);
if(r1(R+518)){{goto L563c35;}}
}
B563c16:L563c16:{c.instructions+=2;NFSU2_TR(0x563c16);
u8 U[4];
w4(U+0,u32(0x3f800000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B563c1b:{NFSU2_TR(0x563c1b);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B563c1d:L563c1d:{c.instructions+=4;NFSU2_TR(0x563c1d);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B563c1f:{NFSU2_TR(0x563c1f);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18bull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B563c26:{NFSU2_TR(0x563c26);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18aull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B563c2d:{NFSU2_TR(0x563c2d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x563c32ull));
TAIL_STATIC(0x4c1860u,4c1);
}
B563c32:L563c32:{c.instructions+=1;NFSU2_TR(0x563c32);
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
B563c35:L563c35:{c.instructions+=5;NFSU2_TR(0x563c35);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B563c36:{NFSU2_TR(0x563c36);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B563c37:{NFSU2_TR(0x563c37);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B563c38:{NFSU2_TR(0x563c38);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B563c39:{NFSU2_TR(0x563c39);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B563c60:L563c60:{c.instructions+=4;NFSU2_TR(0x563c60);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B563c61:{NFSU2_TR(0x563c61);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B563c62:{NFSU2_TR(0x563c62);
__builtin_memmove((R+24),(R+4),4);
}
B563c64:{NFSU2_TR(0x563c64);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x563c69ull));
TAIL_STATIC(0x53bd50u,53b);
}
B563c69:L563c69:{c.instructions+=3;NFSU2_TR(0x563c69);
u8 U[14];
__builtin_memmove((U+6),gp(0x8389a0),4);
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
B563c70:{NFSU2_TR(0x563c70);
__builtin_memmove((R+28),gp(0x839bb8),4);
}
B563c76:{NFSU2_TR(0x563c76);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L563ca6;}}
}
B563c78:L563c78:{c.instructions+=2;NFSU2_TR(0x563c78);
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
B563c7a:{NFSU2_TR(0x563c7a);
if(r1(R+518)){{goto L563ca6;}}
}
B563c7c:L563c7c:{c.instructions+=3;NFSU2_TR(0x563c7c);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B563c7e:{NFSU2_TR(0x563c7e);
u8 U[4];
w4(U+0,u32(0x79be90ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B563c83:{NFSU2_TR(0x563c83);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x563c88ull));
TAIL_STATIC(0x43db50u,43d);
}
B563c88:L563c88:{c.instructions+=4;NFSU2_TR(0x563c88);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B563c8b:{NFSU2_TR(0x563c8b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B563c8c:{NFSU2_TR(0x563c8c);
__builtin_memmove((R+4),(R+28),4);
}
B563c8e:{NFSU2_TR(0x563c8e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x563c93ull));
TAIL_STATIC(0x61b500u,61b);
}
B563c93:L563c93:{c.instructions+=2;NFSU2_TR(0x563c93);
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
B563c96:{NFSU2_TR(0x563c96);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L563ca6;}}
}
B563c98:L563c98:{c.instructions+=2;NFSU2_TR(0x563c98);
__builtin_memmove((R+4),(R+24),4);
}
B563c9a:{NFSU2_TR(0x563c9a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x563c9full));
TAIL_STATIC(0x548630u,548);
}
B563c9f:L563c9f:{c.instructions+=2;NFSU2_TR(0x563c9f);
__builtin_memmove((R+4),(R+24),4);
}
B563ca1:{NFSU2_TR(0x563ca1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x563ca6ull));
TAIL_STATIC(0x55cc50u,55c);
}
B563ca6:L563ca6:{c.instructions+=3;NFSU2_TR(0x563ca6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B563ca8:{NFSU2_TR(0x563ca8);
__builtin_memmove((R+4),(R+24),4);
}
B563caa:{NFSU2_TR(0x563caa);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x563cadull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B563cad:L563cad:{c.instructions+=3;NFSU2_TR(0x563cad);
u8 U[8];
__builtin_memmove((U+0),gp(0x850078),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B563cb4:{NFSU2_TR(0x563cb4);
__builtin_memmove((R+4),(R+24),4);
}
B563cb6:{NFSU2_TR(0x563cb6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L563ce1;}}
}
B563cb8:L563cb8:{c.instructions+=1;NFSU2_TR(0x563cb8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x563cbdull));
TAIL_STATIC(0x5453b0u,545);
}
B563cbd:L563cbd:{c.instructions+=3;NFSU2_TR(0x563cbd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B563cc0:{NFSU2_TR(0x563cc0);
w4(R+4,u32(0x838980ull));
}
B563cc5:{NFSU2_TR(0x563cc5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x563ccaull));
TAIL_STATIC(0x521530u,521);
}
B563cca:L563cca:{c.instructions+=5;NFSU2_TR(0x563cca);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B563ccb:{NFSU2_TR(0x563ccb);
u8 U[4];
w4(U+0,u32(0x78f744ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B563cd0:{NFSU2_TR(0x563cd0);
u8 U[4];
w4(U+0,u32(0x2f5e7da3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B563cd5:{NFSU2_TR(0x563cd5);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B563cd6:{NFSU2_TR(0x563cd6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x563cdbull));
TAIL_STATIC(0x537b80u,537);
}
B563cdb:L563cdb:{c.instructions+=4;NFSU2_TR(0x563cdb);
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
B563cde:{NFSU2_TR(0x563cde);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B563cdf:{NFSU2_TR(0x563cdf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B563ce0:{NFSU2_TR(0x563ce0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B563ce1:L563ce1:{c.instructions+=3;NFSU2_TR(0x563ce1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B563ce2:{NFSU2_TR(0x563ce2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B563ce3:{NFSU2_TR(0x563ce3);
TAIL_STATIC(0x545460u,545);
}
B563cf0:L563cf0:{c.instructions+=9;NFSU2_TR(0x563cf0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B563cf1:{NFSU2_TR(0x563cf1);
__builtin_memmove((R+20),(R+16),4);
}
B563cf3:{NFSU2_TR(0x563cf3);
__builtin_memmove((R+0),gp(0x838560),4);
}
B563cf8:{NFSU2_TR(0x563cf8);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B563cf9:{NFSU2_TR(0x563cf9);
w4(R+12,u32(0x1ull));
}
B563cfe:{NFSU2_TR(0x563cfe);
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
B563d00:{NFSU2_TR(0x563d00);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B563d01:{NFSU2_TR(0x563d01);
__builtin_memmove((R+24),(R+4),4);
}
B563d03:{NFSU2_TR(0x563d03);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L563d12;}}
}
B563d05:L563d05:{c.instructions+=5;NFSU2_TR(0x563d05);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
w4(U+4,u32(0xada7304bull));
s4(u32(r4(U+0)),r4(U+4));
}
B563d0c:{NFSU2_TR(0x563d0c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B563d0d:{NFSU2_TR(0x563d0d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B563d0e:{NFSU2_TR(0x563d0e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B563d0f:{NFSU2_TR(0x563d0f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B563d12:L563d12:{c.instructions+=5;NFSU2_TR(0x563d12);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B563d15:{NFSU2_TR(0x563d15);
u8 U[4];
w1(R+512,u8((r4(R+0))<(u32(0x9120409eull))));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x9120409eull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B563d1a:{NFSU2_TR(0x563d1a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B563d1b:{NFSU2_TR(0x563d1b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
w4(U+4,u32(0x1b2794c7ull));
s4(u32(r4(U+0)),r4(U+4));
}
B563d22:{NFSU2_TR(0x563d22);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){TAIL_STATIC(0x564086u,564);}
}
B563d28:L563d28:{c.instructions+=1;NFSU2_TR(0x563d28);
if(r1(R+518)){TAIL_STATIC(0x5644aau,564);}
}
B563d2e:L563d2e:{c.instructions+=2;NFSU2_TR(0x563d2e);
u8 U[4];
w1(R+512,u8((r4(R+0))<(u32(0x51123592ull))));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x51123592ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B563d33:{NFSU2_TR(0x563d33);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L563ff0;}}
}
B563d39:L563d39:{c.instructions+=1;NFSU2_TR(0x563d39);
if(r1(R+518)){{goto L563ef1;}}
}
B563d3f:L563d3f:{c.instructions+=2;NFSU2_TR(0x563d3f);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x9f00f07ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B563d44:{NFSU2_TR(0x563d44);
if(r1(R+518)){{goto L563d94;}}
}
B563d46:L563d46:{c.instructions+=2;NFSU2_TR(0x563d46);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0x34dc1becull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x34dc1becull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0x34dc1becull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B563d4b:{NFSU2_TR(0x563d4b);
if(r1(R+518)){{goto L563edc;}}
}
B563d51:L563d51:{c.instructions+=2;NFSU2_TR(0x563d51);
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
B563d56:{NFSU2_TR(0x563d56);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x5644c9u,564);}
}
B563d5c:L563d5c:{c.instructions+=4;NFSU2_TR(0x563d5c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B563d5f:{NFSU2_TR(0x563d5f);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((R+0),(U+0),4);
}
B563d62:{NFSU2_TR(0x563d62);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
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
B563d64:{NFSU2_TR(0x563d64);
if(r1(R+518)){TAIL_STATIC(0x5644c9u,564);}
}
B563d6a:L563d6a:{c.instructions+=3;NFSU2_TR(0x563d6a);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x12aull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B563d70:{NFSU2_TR(0x563d70);
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
B563d72:{NFSU2_TR(0x563d72);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x5644c9u,564);}
}
B563d78:L563d78:{c.instructions+=3;NFSU2_TR(0x563d78);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x129ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B563d7e:{NFSU2_TR(0x563d7e);
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
B563d80:{NFSU2_TR(0x563d80);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x564135u,564);}
}
B563d86:L563d86:{c.instructions+=6;NFSU2_TR(0x563d86);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B563d87:{NFSU2_TR(0x563d87);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x129ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B563d8e:{NFSU2_TR(0x563d8e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B563d8f:{NFSU2_TR(0x563d8f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B563d90:{NFSU2_TR(0x563d90);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B563d91:{NFSU2_TR(0x563d91);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B563d94:L563d94:{c.instructions+=8;NFSU2_TR(0x563d94);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B563d97:{NFSU2_TR(0x563d97);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B563d9a:{NFSU2_TR(0x563d9a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x110ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B563da0:{NFSU2_TR(0x563da0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B563da3:{NFSU2_TR(0x563da3);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B563da4:{NFSU2_TR(0x563da4);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B563da5:{NFSU2_TR(0x563da5);
w4(R+4,u32(0x85ad40ull));
}
B563daa:{NFSU2_TR(0x563daa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x563dafull));
TAIL_STATIC(0x5289f0u,528);
}
B563daf:L563daf:{c.instructions+=4;NFSU2_TR(0x563daf);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B563db0:{NFSU2_TR(0x563db0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B563db1:{NFSU2_TR(0x563db1);
w4(R+4,u32(0x838980ull));
}
B563db6:{NFSU2_TR(0x563db6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x563dbbull));
TAIL_STATIC(0x55c230u,55c);
}
B563dbb:L563dbb:{c.instructions+=5;NFSU2_TR(0x563dbb);
__builtin_memmove((R+8),gp(0x839c24),4);
}
B563dc1:{NFSU2_TR(0x563dc1);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B563dc2:{NFSU2_TR(0x563dc2);
u8 U[4];
w4(U+0,u32(0xa4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B563dc7:{NFSU2_TR(0x563dc7);
w4(R+4,u32(0x8392c0ull));
}
B563dcc:{NFSU2_TR(0x563dcc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x563dd1ull));
TAIL_STATIC(0x631d20u,631);
}
B563dd1:L563dd1:{c.instructions+=3;NFSU2_TR(0x563dd1);
u8 U[4];
w4(U+0,u32(0x8392c0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B563dd6:{NFSU2_TR(0x563dd6);
w4(R+4,u32(0x8389d0ull));
}
B563ddb:{NFSU2_TR(0x563ddb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x563de0ull));
TAIL_STATIC(0x413440u,413);
}
B563de0:L563de0:{c.instructions+=4;NFSU2_TR(0x563de0);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B563de2:{NFSU2_TR(0x563de2);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B563de4:{NFSU2_TR(0x563de4);
u8 U[4];
w4(U+0,u32(0x8392c0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B563de9:{NFSU2_TR(0x563de9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x563deeull));
TAIL_STATIC(0x4d8ec0u,4d8);
}
B563dee:L563dee:{c.instructions+=5;NFSU2_TR(0x563dee);
__builtin_memmove((R+4),gp(0x8389ac),4);
}
B563df4:{NFSU2_TR(0x563df4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B563df7:{NFSU2_TR(0x563df7);
u8 U[4];
w4(U+0,u32(0x8392c0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B563dfc:{NFSU2_TR(0x563dfc);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x18ull))));
}
B563dff:{NFSU2_TR(0x563dff);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x563e04ull));
TAIL_STATIC(0x503950u,503);
}
B563e04:L563e04:{c.instructions+=4;NFSU2_TR(0x563e04);
u8 U[4];
w4(U+0,u32(0x8389d0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B563e09:{NFSU2_TR(0x563e09);
u8 U[4];
w4(U+0,u32(0x8392c0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B563e0e:{NFSU2_TR(0x563e0e);
w4(R+4,u32(0x8637d0ull));
}
B563e13:{NFSU2_TR(0x563e13);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x563e18ull));
TAIL_STATIC(0x55b1a0u,55b);
}
B563e18:L563e18:{c.instructions+=5;NFSU2_TR(0x563e18);
__builtin_memmove((R+0),gp(0x839c28),4);
}
B563e1d:{NFSU2_TR(0x563e1d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B563e1e:{NFSU2_TR(0x563e1e);
u8 U[4];
w4(U+0,u32(0xa6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B563e23:{NFSU2_TR(0x563e23);
w4(R+4,u32(0x8392c0ull));
}
B563e28:{NFSU2_TR(0x563e28);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x563e2dull));
TAIL_STATIC(0x631d20u,631);
}
B563e2d:L563e2d:{c.instructions+=3;NFSU2_TR(0x563e2d);
u8 U[4];
w4(U+0,u32(0x8392c0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B563e32:{NFSU2_TR(0x563e32);
w4(R+4,u32(0x8389d0ull));
}
B563e37:{NFSU2_TR(0x563e37);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x563e3cull));
TAIL_STATIC(0x413440u,413);
}
B563e3c:L563e3c:{c.instructions+=4;NFSU2_TR(0x563e3c);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B563e3e:{NFSU2_TR(0x563e3e);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B563e40:{NFSU2_TR(0x563e40);
u8 U[4];
w4(U+0,u32(0x8392c0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B563e45:{NFSU2_TR(0x563e45);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x563e4aull));
TAIL_STATIC(0x4d8ec0u,4d8);
}
B563e4a:L563e4a:{c.instructions+=5;NFSU2_TR(0x563e4a);
__builtin_memmove((R+4),gp(0x8389ac),4);
}
B563e50:{NFSU2_TR(0x563e50);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B563e53:{NFSU2_TR(0x563e53);
u8 U[4];
w4(U+0,u32(0x8392c0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B563e58:{NFSU2_TR(0x563e58);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x18ull))));
}
B563e5b:{NFSU2_TR(0x563e5b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x563e60ull));
TAIL_STATIC(0x503950u,503);
}
B563e60:L563e60:{c.instructions+=4;NFSU2_TR(0x563e60);
u8 U[4];
w4(U+0,u32(0x8389d0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B563e65:{NFSU2_TR(0x563e65);
u8 U[4];
w4(U+0,u32(0x8392c0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B563e6a:{NFSU2_TR(0x563e6a);
w4(R+4,u32(0x8637d0ull));
}
B563e6f:{NFSU2_TR(0x563e6f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x563e74ull));
TAIL_STATIC(0x55b1a0u,55b);
}
B563e74:L563e74:{c.instructions+=5;NFSU2_TR(0x563e74);
__builtin_memmove((R+4),gp(0x839c2c),4);
}
B563e7a:{NFSU2_TR(0x563e7a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B563e7b:{NFSU2_TR(0x563e7b);
u8 U[4];
w4(U+0,u32(0xa5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B563e80:{NFSU2_TR(0x563e80);
w4(R+4,u32(0x8392c0ull));
}
B563e85:{NFSU2_TR(0x563e85);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x563e8aull));
TAIL_STATIC(0x631d20u,631);
}
B563e8a:L563e8a:{c.instructions+=3;NFSU2_TR(0x563e8a);
u8 U[4];
w4(U+0,u32(0x8392c0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B563e8f:{NFSU2_TR(0x563e8f);
w4(R+4,u32(0x8389d0ull));
}
B563e94:{NFSU2_TR(0x563e94);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x563e99ull));
TAIL_STATIC(0x413440u,413);
}
B563e99:L563e99:{c.instructions+=2;NFSU2_TR(0x563e99);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B563e9b:{NFSU2_TR(0x563e9b);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B563e9d:L563e9d:{c.instructions+=2;NFSU2_TR(0x563e9d);
u8 U[4];
w4(U+0,u32(0x8392c0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B563ea2:{NFSU2_TR(0x563ea2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x563ea7ull));
TAIL_STATIC(0x4d8ec0u,4d8);
}
B563ea7:L563ea7:{c.instructions+=5;NFSU2_TR(0x563ea7);
__builtin_memmove((R+4),gp(0x8389ac),4);
}
B563ead:{NFSU2_TR(0x563ead);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B563eb0:{NFSU2_TR(0x563eb0);
u8 U[4];
w4(U+0,u32(0x8392c0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B563eb5:{NFSU2_TR(0x563eb5);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x18ull))));
}
B563eb8:{NFSU2_TR(0x563eb8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x563ebdull));
TAIL_STATIC(0x503950u,503);
}
B563ebd:L563ebd:{c.instructions+=4;NFSU2_TR(0x563ebd);
u8 U[4];
w4(U+0,u32(0x8389d0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B563ec2:{NFSU2_TR(0x563ec2);
u8 U[4];
w4(U+0,u32(0x8392c0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B563ec7:{NFSU2_TR(0x563ec7);
w4(R+4,u32(0x8637d0ull));
}
B563ecc:{NFSU2_TR(0x563ecc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x563ed1ull));
TAIL_STATIC(0x55b1a0u,55b);
}
B563ed1:L563ed1:{c.instructions+=3;NFSU2_TR(0x563ed1);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B563ed2:{NFSU2_TR(0x563ed2);
w4(R+4,u32(0x838980ull));
}
B563ed7:{NFSU2_TR(0x563ed7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x563edcull));
TAIL_STATIC(0x521280u,521);
}
B563edc:L563edc:{c.instructions+=7;NFSU2_TR(0x563edc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B563edd:{NFSU2_TR(0x563edd);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x114ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B563ee4:{NFSU2_TR(0x563ee4);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x115ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B563eeb:{NFSU2_TR(0x563eeb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B563eec:{NFSU2_TR(0x563eec);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B563eed:{NFSU2_TR(0x563eed);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B563eee:{NFSU2_TR(0x563eee);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B563ef1:L563ef1:{c.instructions+=8;NFSU2_TR(0x563ef1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B563ef4:{NFSU2_TR(0x563ef4);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B563ef7:{NFSU2_TR(0x563ef7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x110ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B563efd:{NFSU2_TR(0x563efd);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B563f00:{NFSU2_TR(0x563f00);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B563f01:{NFSU2_TR(0x563f01);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B563f02:{NFSU2_TR(0x563f02);
w4(R+4,u32(0x838980ull));
}
B563f07:{NFSU2_TR(0x563f07);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x563f0cull));
TAIL_STATIC(0x55c230u,55c);
}
B563f0c:L563f0c:{c.instructions+=5;NFSU2_TR(0x563f0c);
__builtin_memmove((R+8),gp(0x839c24),4);
}
B563f12:{NFSU2_TR(0x563f12);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B563f13:{NFSU2_TR(0x563f13);
u8 U[4];
w4(U+0,u32(0xa4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B563f18:{NFSU2_TR(0x563f18);
w4(R+4,u32(0x8392c0ull));
}
B563f1d:{NFSU2_TR(0x563f1d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x563f22ull));
TAIL_STATIC(0x631d20u,631);
}
B563f22:L563f22:{c.instructions+=3;NFSU2_TR(0x563f22);
u8 U[4];
w4(U+0,u32(0x8392c0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B563f27:{NFSU2_TR(0x563f27);
w4(R+4,u32(0x8389d0ull));
}
B563f2c:{NFSU2_TR(0x563f2c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x563f31ull));
TAIL_STATIC(0x413440u,413);
}
B563f31:L563f31:{c.instructions+=4;NFSU2_TR(0x563f31);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B563f33:{NFSU2_TR(0x563f33);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B563f34:{NFSU2_TR(0x563f34);
u8 U[4];
w4(U+0,u32(0x8392c0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B563f39:{NFSU2_TR(0x563f39);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x563f3eull));
TAIL_STATIC(0x4d8ec0u,4d8);
}
B563f3e:L563f3e:{c.instructions+=5;NFSU2_TR(0x563f3e);
__builtin_memmove((R+4),gp(0x8389ac),4);
}
B563f44:{NFSU2_TR(0x563f44);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B563f47:{NFSU2_TR(0x563f47);
u8 U[4];
w4(U+0,u32(0x8392c0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B563f4c:{NFSU2_TR(0x563f4c);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x18ull))));
}
B563f4f:{NFSU2_TR(0x563f4f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x563f54ull));
TAIL_STATIC(0x503950u,503);
}
B563f54:L563f54:{c.instructions+=4;NFSU2_TR(0x563f54);
u8 U[4];
w4(U+0,u32(0x8389d0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B563f59:{NFSU2_TR(0x563f59);
u8 U[4];
w4(U+0,u32(0x8392c0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B563f5e:{NFSU2_TR(0x563f5e);
w4(R+4,u32(0x8637d0ull));
}
B563f63:{NFSU2_TR(0x563f63);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x563f68ull));
TAIL_STATIC(0x55b1a0u,55b);
}
B563f68:L563f68:{c.instructions+=5;NFSU2_TR(0x563f68);
__builtin_memmove((R+0),gp(0x839c28),4);
}
B563f6d:{NFSU2_TR(0x563f6d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B563f6e:{NFSU2_TR(0x563f6e);
u8 U[4];
w4(U+0,u32(0xa6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B563f73:{NFSU2_TR(0x563f73);
w4(R+4,u32(0x8392c0ull));
}
B563f78:{NFSU2_TR(0x563f78);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x563f7dull));
TAIL_STATIC(0x631d20u,631);
}
B563f7d:L563f7d:{c.instructions+=3;NFSU2_TR(0x563f7d);
u8 U[4];
w4(U+0,u32(0x8392c0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B563f82:{NFSU2_TR(0x563f82);
w4(R+4,u32(0x8389d0ull));
}
B563f87:{NFSU2_TR(0x563f87);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x563f8cull));
TAIL_STATIC(0x413440u,413);
}
B563f8c:L563f8c:{c.instructions+=4;NFSU2_TR(0x563f8c);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B563f8e:{NFSU2_TR(0x563f8e);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B563f8f:{NFSU2_TR(0x563f8f);
u8 U[4];
w4(U+0,u32(0x8392c0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B563f94:{NFSU2_TR(0x563f94);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x563f99ull));
TAIL_STATIC(0x4d8ec0u,4d8);
}
B563f99:L563f99:{c.instructions+=5;NFSU2_TR(0x563f99);
__builtin_memmove((R+4),gp(0x8389ac),4);
}
B563f9f:{NFSU2_TR(0x563f9f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B563fa2:{NFSU2_TR(0x563fa2);
u8 U[4];
w4(U+0,u32(0x8392c0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B563fa7:{NFSU2_TR(0x563fa7);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x18ull))));
}
B563faa:{NFSU2_TR(0x563faa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x563fafull));
TAIL_STATIC(0x503950u,503);
}
B563faf:L563faf:{c.instructions+=4;NFSU2_TR(0x563faf);
u8 U[4];
w4(U+0,u32(0x8389d0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B563fb4:{NFSU2_TR(0x563fb4);
u8 U[4];
w4(U+0,u32(0x8392c0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B563fb9:{NFSU2_TR(0x563fb9);
w4(R+4,u32(0x8637d0ull));
}
B563fbe:{NFSU2_TR(0x563fbe);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x563fc3ull));
TAIL_STATIC(0x55b1a0u,55b);
}
B563fc3:L563fc3:{c.instructions+=5;NFSU2_TR(0x563fc3);
__builtin_memmove((R+4),gp(0x839c2c),4);
}
B563fc9:{NFSU2_TR(0x563fc9);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B563fca:{NFSU2_TR(0x563fca);
u8 U[4];
w4(U+0,u32(0xa5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B563fcf:{NFSU2_TR(0x563fcf);
w4(R+4,u32(0x8392c0ull));
}
B563fd4:{NFSU2_TR(0x563fd4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x563fd9ull));
TAIL_STATIC(0x631d20u,631);
}
B563fd9:L563fd9:{c.instructions+=3;NFSU2_TR(0x563fd9);
u8 U[4];
w4(U+0,u32(0x8392c0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B563fde:{NFSU2_TR(0x563fde);
w4(R+4,u32(0x8389d0ull));
}
B563fe3:{NFSU2_TR(0x563fe3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x563fe8ull));
TAIL_STATIC(0x413440u,413);
}
B563fe8:L563fe8:{c.instructions+=3;NFSU2_TR(0x563fe8);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B563fea:{NFSU2_TR(0x563fea);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B563feb:{NFSU2_TR(0x563feb);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x563e9du);}goto L563e9d;}
}
B563ff0:L563ff0:{c.instructions+=2;NFSU2_TR(0x563ff0);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x72619778ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B563ff5:{NFSU2_TR(0x563ff5);
if(r1(R+518)){TAIL_STATIC(0x564076u,564);}
}
B563ff7:L563ff7:{c.instructions+=2;NFSU2_TR(0x563ff7);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x81f0b71aull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B563ffc:{NFSU2_TR(0x563ffc);
if(r1(R+518)){TAIL_STATIC(0x564018u,564);}
}
B563ffe:L563ffe:{c.instructions+=1;NFSU2_TR(0x563ffe);
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
TAIL_STATIC(0x564003u,564);
}
XIT:NFSU2_TR_EXIT(0x563,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
