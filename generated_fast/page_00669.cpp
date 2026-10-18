#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_65a(u8* __restrict R,Cpu& c);
u32 body_660(u8* __restrict R,Cpu& c);
u32 body_662(u8* __restrict R,Cpu& c);
u32 body_663(u8* __restrict R,Cpu& c);
u32 body_664(u8* __restrict R,Cpu& c);
u32 body_666(u8* __restrict R,Cpu& c);
u32 body_667(u8* __restrict R,Cpu& c);
u32 body_668(u8* __restrict R,Cpu& c);
u32 body_66a(u8* __restrict R,Cpu& c);
u32 body_75d(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x669,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x669,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_669(u8* __restrict R,Cpu& c);
u32 page_669(Cpu& c){return body_669(c.regs.data(),c);}
__attribute__((noinline)) u32 body_669(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x669000:goto L669000;
case 0x669002:c.instructions+=1;goto B669002;
case 0x669007:goto L669007;
case 0x66900a:c.instructions+=4;goto B66900a;
case 0x66900d:c.instructions+=3;goto B66900d;
case 0x66900f:c.instructions+=2;goto B66900f;
case 0x669012:c.instructions+=1;goto B669012;
case 0x669014:goto L669014;
case 0x669018:c.instructions+=10;goto B669018;
case 0x66901b:c.instructions+=9;goto B66901b;
case 0x66901d:c.instructions+=8;goto B66901d;
case 0x669021:c.instructions+=7;goto B669021;
case 0x669024:c.instructions+=6;goto B669024;
case 0x669026:c.instructions+=5;goto B669026;
case 0x669027:c.instructions+=4;goto B669027;
case 0x669028:c.instructions+=3;goto B669028;
case 0x66902a:c.instructions+=2;goto B66902a;
case 0x66902d:c.instructions+=1;goto B66902d;
case 0x66902f:goto L66902f;
case 0x669035:goto L669035;
case 0x669037:goto L669037;
case 0x66903d:goto L66903d;
case 0x66903f:c.instructions+=1;goto B66903f;
case 0x669045:goto L669045;
case 0x669049:c.instructions+=2;goto B669049;
case 0x66904d:c.instructions+=1;goto B66904d;
case 0x66904f:goto L66904f;
case 0x669051:c.instructions+=1;goto B669051;
case 0x669056:goto L669056;
case 0x66905a:c.instructions+=5;goto B66905a;
case 0x66905d:c.instructions+=4;goto B66905d;
case 0x669060:c.instructions+=3;goto B669060;
case 0x669062:c.instructions+=2;goto B669062;
case 0x669065:c.instructions+=1;goto B669065;
case 0x669067:goto L669067;
case 0x66906a:c.instructions+=1;goto B66906a;
case 0x66906c:goto L66906c;
case 0x66906f:c.instructions+=19;goto B66906f;
case 0x669071:c.instructions+=18;goto B669071;
case 0x669077:c.instructions+=17;goto B669077;
case 0x66907a:c.instructions+=16;goto B66907a;
case 0x66907d:c.instructions+=15;goto B66907d;
case 0x669080:c.instructions+=14;goto B669080;
case 0x669083:c.instructions+=13;goto B669083;
case 0x669084:c.instructions+=12;goto B669084;
case 0x669087:c.instructions+=11;goto B669087;
case 0x66908a:c.instructions+=10;goto B66908a;
case 0x66908e:c.instructions+=9;goto B66908e;
case 0x669091:c.instructions+=8;goto B669091;
case 0x669093:c.instructions+=7;goto B669093;
case 0x669094:c.instructions+=6;goto B669094;
case 0x669097:c.instructions+=5;goto B669097;
case 0x669099:c.instructions+=4;goto B669099;
case 0x66909a:c.instructions+=3;goto B66909a;
case 0x66909d:c.instructions+=2;goto B66909d;
case 0x66909e:c.instructions+=1;goto B66909e;
case 0x6690a3:goto L6690a3;
case 0x6690a6:goto L6690a6;
case 0x6690a9:c.instructions+=2;goto B6690a9;
case 0x6690ab:c.instructions+=1;goto B6690ab;
case 0x6690ad:goto L6690ad;
case 0x6690b1:c.instructions+=10;goto B6690b1;
case 0x6690b4:c.instructions+=9;goto B6690b4;
case 0x6690b6:c.instructions+=8;goto B6690b6;
case 0x6690ba:c.instructions+=7;goto B6690ba;
case 0x6690bd:c.instructions+=6;goto B6690bd;
case 0x6690bf:c.instructions+=5;goto B6690bf;
case 0x6690c0:c.instructions+=4;goto B6690c0;
case 0x6690c1:c.instructions+=3;goto B6690c1;
case 0x6690c3:c.instructions+=2;goto B6690c3;
case 0x6690c6:c.instructions+=1;goto B6690c6;
case 0x6690c8:goto L6690c8;
case 0x6690ce:goto L6690ce;
case 0x6690d0:goto L6690d0;
case 0x6690d6:goto L6690d6;
case 0x6690d8:c.instructions+=1;goto B6690d8;
case 0x6690de:goto L6690de;
case 0x6690e2:c.instructions+=5;goto B6690e2;
case 0x6690e5:c.instructions+=4;goto B6690e5;
case 0x6690e8:c.instructions+=3;goto B6690e8;
case 0x6690ea:c.instructions+=2;goto B6690ea;
case 0x6690ed:c.instructions+=1;goto B6690ed;
case 0x6690ef:goto L6690ef;
case 0x6690f2:c.instructions+=1;goto B6690f2;
case 0x6690f4:goto L6690f4;
case 0x6690f7:c.instructions+=19;goto B6690f7;
case 0x6690f9:c.instructions+=18;goto B6690f9;
case 0x6690ff:c.instructions+=17;goto B6690ff;
case 0x669102:c.instructions+=16;goto B669102;
case 0x669105:c.instructions+=15;goto B669105;
case 0x669108:c.instructions+=14;goto B669108;
case 0x66910b:c.instructions+=13;goto B66910b;
case 0x66910c:c.instructions+=12;goto B66910c;
case 0x66910f:c.instructions+=11;goto B66910f;
case 0x669112:c.instructions+=10;goto B669112;
case 0x669116:c.instructions+=9;goto B669116;
case 0x669119:c.instructions+=8;goto B669119;
case 0x66911b:c.instructions+=7;goto B66911b;
case 0x66911c:c.instructions+=6;goto B66911c;
case 0x66911f:c.instructions+=5;goto B66911f;
case 0x669121:c.instructions+=4;goto B669121;
case 0x669122:c.instructions+=3;goto B669122;
case 0x669125:c.instructions+=2;goto B669125;
case 0x669126:c.instructions+=1;goto B669126;
case 0x66912b:goto L66912b;
case 0x66912e:goto L66912e;
case 0x669131:c.instructions+=2;goto B669131;
case 0x669133:c.instructions+=1;goto B669133;
case 0x669135:goto L669135;
case 0x669139:c.instructions+=10;goto B669139;
case 0x66913c:c.instructions+=9;goto B66913c;
case 0x66913e:c.instructions+=8;goto B66913e;
case 0x669142:c.instructions+=7;goto B669142;
case 0x669145:c.instructions+=6;goto B669145;
case 0x669147:c.instructions+=5;goto B669147;
case 0x669148:c.instructions+=4;goto B669148;
case 0x669149:c.instructions+=3;goto B669149;
case 0x66914b:c.instructions+=2;goto B66914b;
case 0x66914e:c.instructions+=1;goto B66914e;
case 0x669150:goto L669150;
case 0x669156:goto L669156;
case 0x669158:goto L669158;
case 0x66915e:goto L66915e;
case 0x669160:c.instructions+=1;goto B669160;
case 0x669162:goto L669162;
case 0x669166:c.instructions+=4;goto B669166;
case 0x669169:c.instructions+=3;goto B669169;
case 0x66916c:c.instructions+=2;goto B66916c;
case 0x66916e:c.instructions+=1;goto B66916e;
case 0x669174:goto L669174;
case 0x669175:c.instructions+=4;goto B669175;
case 0x669176:c.instructions+=3;goto B669176;
case 0x669177:c.instructions+=2;goto B669177;
case 0x669179:c.instructions+=1;goto B669179;
case 0x66917e:goto L66917e;
case 0x669180:goto L669180;
case 0x669185:c.instructions+=10;goto B669185;
case 0x669187:c.instructions+=9;goto B669187;
case 0x669189:c.instructions+=8;goto B669189;
case 0x66918c:c.instructions+=7;goto B66918c;
case 0x66918e:c.instructions+=6;goto B66918e;
case 0x66918f:c.instructions+=5;goto B66918f;
case 0x669190:c.instructions+=4;goto B669190;
case 0x669192:c.instructions+=3;goto B669192;
case 0x669194:c.instructions+=2;goto B669194;
case 0x669195:c.instructions+=1;goto B669195;
case 0x66919a:goto L66919a;
case 0x66919b:c.instructions+=4;goto B66919b;
case 0x66919c:c.instructions+=3;goto B66919c;
case 0x66919d:c.instructions+=2;goto B66919d;
case 0x66919e:c.instructions+=1;goto B66919e;
case 0x6691a1:goto L6691a1;
case 0x6691a3:c.instructions+=12;goto B6691a3;
case 0x6691a4:c.instructions+=11;goto B6691a4;
case 0x6691a6:c.instructions+=10;goto B6691a6;
case 0x6691a7:c.instructions+=9;goto B6691a7;
case 0x6691ab:c.instructions+=8;goto B6691ab;
case 0x6691ac:c.instructions+=7;goto B6691ac;
case 0x6691ae:c.instructions+=6;goto B6691ae;
case 0x6691b1:c.instructions+=5;goto B6691b1;
case 0x6691b2:c.instructions+=4;goto B6691b2;
case 0x6691b4:c.instructions+=3;goto B6691b4;
case 0x6691b7:c.instructions+=2;goto B6691b7;
case 0x6691be:c.instructions+=1;goto B6691be;
case 0x6691c0:goto L6691c0;
case 0x6691c3:c.instructions+=6;goto B6691c3;
case 0x6691c4:c.instructions+=5;goto B6691c4;
case 0x6691c6:c.instructions+=4;goto B6691c6;
case 0x6691cc:c.instructions+=3;goto B6691cc;
case 0x6691cf:c.instructions+=2;goto B6691cf;
case 0x6691d0:c.instructions+=1;goto B6691d0;
case 0x6691d5:goto L6691d5;
case 0x6691d7:c.instructions+=1;goto B6691d7;
case 0x6691dd:goto L6691dd;
case 0x6691e0:c.instructions+=7;goto B6691e0;
case 0x6691e1:c.instructions+=6;goto B6691e1;
case 0x6691e3:c.instructions+=5;goto B6691e3;
case 0x6691e9:c.instructions+=4;goto B6691e9;
case 0x6691eb:c.instructions+=3;goto B6691eb;
case 0x6691ee:c.instructions+=2;goto B6691ee;
case 0x6691ef:c.instructions+=1;goto B6691ef;
case 0x6691f4:goto L6691f4;
case 0x6691f6:c.instructions+=1;goto B6691f6;
case 0x6691fc:goto L6691fc;
case 0x669200:c.instructions+=1;goto B669200;
case 0x669202:goto L669202;
case 0x669208:c.instructions+=3;goto B669208;
case 0x66920a:c.instructions+=2;goto B66920a;
case 0x66920b:c.instructions+=1;goto B66920b;
case 0x66920d:goto L66920d;
case 0x669212:goto L669212;
case 0x669214:c.instructions+=1;goto B669214;
case 0x669216:goto L669216;
case 0x66921a:c.instructions+=1;goto B66921a;
case 0x66921c:goto L66921c;
case 0x669220:c.instructions+=1;goto B669220;
case 0x669222:goto L669222;
case 0x669223:c.instructions+=2;goto B669223;
case 0x669225:c.instructions+=1;goto B669225;
case 0x66922a:goto L66922a;
case 0x66922c:goto L66922c;
case 0x669231:goto L669231;
case 0x669233:goto L669233;
case 0x669235:c.instructions+=2;goto B669235;
case 0x669239:c.instructions+=1;goto B669239;
case 0x66923b:goto L66923b;
case 0x66923e:c.instructions+=4;goto B66923e;
case 0x669240:c.instructions+=3;goto B669240;
case 0x669241:c.instructions+=2;goto B669241;
case 0x669244:c.instructions+=1;goto B669244;
case 0x669249:goto L669249;
case 0x66924b:c.instructions+=1;goto B66924b;
case 0x66924d:goto L66924d;
case 0x66924e:c.instructions+=2;goto B66924e;
case 0x669252:c.instructions+=1;goto B669252;
case 0x669254:goto L669254;
case 0x669256:goto L669256;
case 0x669258:c.instructions+=2;goto B669258;
case 0x66925c:c.instructions+=1;goto B66925c;
case 0x66925e:goto L66925e;
case 0x669261:c.instructions+=4;goto B669261;
case 0x669263:c.instructions+=3;goto B669263;
case 0x669264:c.instructions+=2;goto B669264;
case 0x669267:c.instructions+=1;goto B669267;
case 0x66926c:goto L66926c;
case 0x66926e:c.instructions+=1;goto B66926e;
case 0x669270:goto L669270;
case 0x669274:c.instructions+=1;goto B669274;
case 0x669276:goto L669276;
case 0x669277:c.instructions+=2;goto B669277;
case 0x66927b:c.instructions+=1;goto B66927b;
case 0x66927d:goto L66927d;
case 0x66927f:goto L66927f;
case 0x669280:c.instructions+=4;goto B669280;
case 0x669281:c.instructions+=3;goto B669281;
case 0x669282:c.instructions+=2;goto B669282;
case 0x669283:c.instructions+=1;goto B669283;
case 0x669286:goto L669286;
case 0x669288:c.instructions+=18;goto B669288;
case 0x669289:c.instructions+=17;goto B669289;
case 0x66928b:c.instructions+=16;goto B66928b;
case 0x669291:c.instructions+=15;goto B669291;
case 0x669295:c.instructions+=14;goto B669295;
case 0x669299:c.instructions+=13;goto B669299;
case 0x66929c:c.instructions+=12;goto B66929c;
case 0x66929d:c.instructions+=11;goto B66929d;
case 0x66929e:c.instructions+=10;goto B66929e;
case 0x66929f:c.instructions+=9;goto B66929f;
case 0x6692a3:c.instructions+=8;goto B6692a3;
case 0x6692a6:c.instructions+=7;goto B6692a6;
case 0x6692a9:c.instructions+=6;goto B6692a9;
case 0x6692ab:c.instructions+=5;goto B6692ab;
case 0x6692ae:c.instructions+=4;goto B6692ae;
case 0x6692b1:c.instructions+=3;goto B6692b1;
case 0x6692b7:c.instructions+=2;goto B6692b7;
case 0x6692ba:c.instructions+=1;goto B6692ba;
case 0x6692bc:goto L6692bc;
case 0x6692c0:c.instructions+=1;goto B6692c0;
case 0x6692c4:goto L6692c4;
case 0x6692c7:c.instructions+=5;goto B6692c7;
case 0x6692c9:c.instructions+=4;goto B6692c9;
case 0x6692cc:c.instructions+=3;goto B6692cc;
case 0x6692cf:c.instructions+=2;goto B6692cf;
case 0x6692d2:c.instructions+=1;goto B6692d2;
case 0x6692d8:goto L6692d8;
case 0x6692db:c.instructions+=4;goto B6692db;
case 0x6692de:c.instructions+=3;goto B6692de;
case 0x6692e1:c.instructions+=2;goto B6692e1;
case 0x6692e3:c.instructions+=1;goto B6692e3;
case 0x6692e9:goto L6692e9;
case 0x6692ec:c.instructions+=1;goto B6692ec;
case 0x6692f2:goto L6692f2;
case 0x6692f5:c.instructions+=1;goto B6692f5;
case 0x6692fb:goto L6692fb;
case 0x6692fe:c.instructions+=1;goto B6692fe;
case 0x669304:goto L669304;
case 0x669305:c.instructions+=1;goto B669305;
case 0x66930b:goto L66930b;
case 0x66930c:c.instructions+=1;goto B66930c;
case 0x669312:goto L669312;
case 0x669315:c.instructions+=7;goto B669315;
case 0x66931b:c.instructions+=6;goto B66931b;
case 0x66931e:c.instructions+=5;goto B66931e;
case 0x669321:c.instructions+=4;goto B669321;
case 0x669323:c.instructions+=3;goto B669323;
case 0x669326:c.instructions+=2;goto B669326;
case 0x669328:c.instructions+=1;goto B669328;
case 0x66932a:goto L66932a;
case 0x66932d:c.instructions+=1;goto B66932d;
case 0x669330:goto L669330;
case 0x669333:c.instructions+=3;goto B669333;
case 0x669336:c.instructions+=2;goto B669336;
case 0x66933b:c.instructions+=1;goto B66933b;
case 0x669341:goto L669341;
case 0x669345:c.instructions+=9;goto B669345;
case 0x669347:c.instructions+=8;goto B669347;
case 0x66934b:c.instructions+=7;goto B66934b;
case 0x66934e:c.instructions+=6;goto B66934e;
case 0x66934f:c.instructions+=5;goto B66934f;
case 0x669350:c.instructions+=4;goto B669350;
case 0x669352:c.instructions+=3;goto B669352;
case 0x669355:c.instructions+=2;goto B669355;
case 0x669357:c.instructions+=1;goto B669357;
case 0x66935c:goto L66935c;
case 0x66935e:c.instructions+=2;goto B66935e;
case 0x669361:c.instructions+=1;goto B669361;
case 0x669367:goto L669367;
case 0x66936a:c.instructions+=2;goto B66936a;
case 0x66936c:c.instructions+=1;goto B66936c;
case 0x669371:goto L669371;
case 0x669373:c.instructions+=2;goto B669373;
case 0x669376:c.instructions+=1;goto B669376;
case 0x66937c:goto L66937c;
case 0x669380:c.instructions+=9;goto B669380;
case 0x669384:c.instructions+=8;goto B669384;
case 0x669386:c.instructions+=7;goto B669386;
case 0x669389:c.instructions+=6;goto B669389;
case 0x66938b:c.instructions+=5;goto B66938b;
case 0x66938c:c.instructions+=4;goto B66938c;
case 0x66938d:c.instructions+=3;goto B66938d;
case 0x66938f:c.instructions+=2;goto B66938f;
case 0x669392:c.instructions+=1;goto B669392;
case 0x669397:goto L669397;
case 0x669399:c.instructions+=2;goto B669399;
case 0x66939c:c.instructions+=1;goto B66939c;
case 0x6693a2:goto L6693a2;
case 0x6693a7:c.instructions+=1;goto B6693a7;
case 0x6693aa:goto L6693aa;
case 0x6693ac:c.instructions+=1;goto B6693ac;
case 0x6693b1:goto L6693b1;
case 0x6693b6:goto L6693b6;
case 0x6693b9:c.instructions+=7;goto B6693b9;
case 0x6693bf:c.instructions+=6;goto B6693bf;
case 0x6693c2:c.instructions+=5;goto B6693c2;
case 0x6693c5:c.instructions+=4;goto B6693c5;
case 0x6693c7:c.instructions+=3;goto B6693c7;
case 0x6693ca:c.instructions+=2;goto B6693ca;
case 0x6693cc:c.instructions+=1;goto B6693cc;
case 0x6693ce:goto L6693ce;
case 0x6693d1:c.instructions+=1;goto B6693d1;
case 0x6693d4:goto L6693d4;
case 0x6693d7:c.instructions+=3;goto B6693d7;
case 0x6693da:c.instructions+=2;goto B6693da;
case 0x6693df:c.instructions+=1;goto B6693df;
case 0x6693e5:goto L6693e5;
case 0x6693e9:c.instructions+=9;goto B6693e9;
case 0x6693eb:c.instructions+=8;goto B6693eb;
case 0x6693ef:c.instructions+=7;goto B6693ef;
case 0x6693f2:c.instructions+=6;goto B6693f2;
case 0x6693f3:c.instructions+=5;goto B6693f3;
case 0x6693f4:c.instructions+=4;goto B6693f4;
case 0x6693f6:c.instructions+=3;goto B6693f6;
case 0x6693f9:c.instructions+=2;goto B6693f9;
case 0x6693fb:c.instructions+=1;goto B6693fb;
case 0x669400:goto L669400;
case 0x669402:c.instructions+=2;goto B669402;
case 0x669405:c.instructions+=1;goto B669405;
case 0x66940b:goto L66940b;
case 0x66940e:c.instructions+=2;goto B66940e;
case 0x669410:c.instructions+=1;goto B669410;
case 0x669415:goto L669415;
case 0x66941a:goto L66941a;
case 0x66941e:c.instructions+=1;goto B66941e;
case 0x669424:goto L669424;
case 0x66942a:c.instructions+=1;goto B66942a;
case 0x669430:goto L669430;
case 0x669434:c.instructions+=5;goto B669434;
case 0x66943a:c.instructions+=4;goto B66943a;
case 0x66943d:c.instructions+=3;goto B66943d;
case 0x669440:c.instructions+=2;goto B669440;
case 0x669442:c.instructions+=1;goto B669442;
case 0x669448:goto L669448;
case 0x66944b:goto L66944b;
case 0x66944e:c.instructions+=11;goto B66944e;
case 0x669452:c.instructions+=10;goto B669452;
case 0x669456:c.instructions+=9;goto B669456;
case 0x669459:c.instructions+=8;goto B669459;
case 0x66945c:c.instructions+=7;goto B66945c;
case 0x66945f:c.instructions+=6;goto B66945f;
case 0x669462:c.instructions+=5;goto B669462;
case 0x669465:c.instructions+=4;goto B669465;
case 0x669468:c.instructions+=3;goto B669468;
case 0x66946a:c.instructions+=2;goto B66946a;
case 0x66946f:c.instructions+=1;goto B66946f;
case 0x669475:goto L669475;
case 0x669479:c.instructions+=6;goto B669479;
case 0x66947c:c.instructions+=5;goto B66947c;
case 0x66947f:c.instructions+=4;goto B66947f;
case 0x669483:c.instructions+=3;goto B669483;
case 0x669486:c.instructions+=2;goto B669486;
case 0x669489:c.instructions+=1;goto B669489;
case 0x66948b:goto L66948b;
case 0x66948f:c.instructions+=5;goto B66948f;
case 0x669491:c.instructions+=4;goto B669491;
case 0x669494:c.instructions+=3;goto B669494;
case 0x669498:c.instructions+=2;goto B669498;
case 0x66949b:c.instructions+=1;goto B66949b;
case 0x66949d:goto L66949d;
case 0x6694a0:c.instructions+=8;goto B6694a0;
case 0x6694a3:c.instructions+=7;goto B6694a3;
case 0x6694a9:c.instructions+=6;goto B6694a9;
case 0x6694ac:c.instructions+=5;goto B6694ac;
case 0x6694af:c.instructions+=4;goto B6694af;
case 0x6694b1:c.instructions+=3;goto B6694b1;
case 0x6694b4:c.instructions+=2;goto B6694b4;
case 0x6694b6:c.instructions+=1;goto B6694b6;
case 0x6694b8:goto L6694b8;
case 0x6694bb:c.instructions+=1;goto B6694bb;
case 0x6694be:goto L6694be;
case 0x6694c1:c.instructions+=12;goto B6694c1;
case 0x6694c4:c.instructions+=11;goto B6694c4;
case 0x6694c6:c.instructions+=10;goto B6694c6;
case 0x6694c9:c.instructions+=9;goto B6694c9;
case 0x6694cd:c.instructions+=8;goto B6694cd;
case 0x6694d1:c.instructions+=7;goto B6694d1;
case 0x6694d4:c.instructions+=6;goto B6694d4;
case 0x6694d7:c.instructions+=5;goto B6694d7;
case 0x6694da:c.instructions+=4;goto B6694da;
case 0x6694de:c.instructions+=3;goto B6694de;
case 0x6694df:c.instructions+=2;goto B6694df;
case 0x6694e2:c.instructions+=1;goto B6694e2;
case 0x6694e8:goto L6694e8;
case 0x6694ea:c.instructions+=2;goto B6694ea;
case 0x6694ed:c.instructions+=1;goto B6694ed;
case 0x6694f3:goto L6694f3;
case 0x6694f6:goto L6694f6;
case 0x6694fa:c.instructions+=5;goto B6694fa;
case 0x669500:c.instructions+=4;goto B669500;
case 0x669503:c.instructions+=3;goto B669503;
case 0x669506:c.instructions+=2;goto B669506;
case 0x669509:c.instructions+=1;goto B669509;
case 0x66950f:goto L66950f;
case 0x669514:goto L669514;
case 0x669518:c.instructions+=4;goto B669518;
case 0x669519:c.instructions+=3;goto B669519;
case 0x66951c:c.instructions+=2;goto B66951c;
case 0x66951e:c.instructions+=1;goto B66951e;
case 0x669523:goto L669523;
case 0x669525:c.instructions+=2;goto B669525;
case 0x669528:c.instructions+=1;goto B669528;
case 0x66952e:goto L66952e;
case 0x669532:c.instructions+=1;goto B669532;
case 0x669538:goto L669538;
case 0x66953e:c.instructions+=1;goto B66953e;
case 0x669544:goto L669544;
case 0x669548:c.instructions+=5;goto B669548;
case 0x66954e:c.instructions+=4;goto B66954e;
case 0x669551:c.instructions+=3;goto B669551;
case 0x669554:c.instructions+=2;goto B669554;
case 0x669556:c.instructions+=1;goto B669556;
case 0x66955c:goto L66955c;
case 0x66955f:goto L66955f;
case 0x669562:c.instructions+=11;goto B669562;
case 0x669566:c.instructions+=10;goto B669566;
case 0x669569:c.instructions+=9;goto B669569;
case 0x66956c:c.instructions+=8;goto B66956c;
case 0x669570:c.instructions+=7;goto B669570;
case 0x669573:c.instructions+=6;goto B669573;
case 0x669576:c.instructions+=5;goto B669576;
case 0x669579:c.instructions+=4;goto B669579;
case 0x66957c:c.instructions+=3;goto B66957c;
case 0x66957e:c.instructions+=2;goto B66957e;
case 0x669583:c.instructions+=1;goto B669583;
case 0x669585:goto L669585;
case 0x669589:c.instructions+=6;goto B669589;
case 0x66958c:c.instructions+=5;goto B66958c;
case 0x66958f:c.instructions+=4;goto B66958f;
case 0x669593:c.instructions+=3;goto B669593;
case 0x669596:c.instructions+=2;goto B669596;
case 0x669599:c.instructions+=1;goto B669599;
case 0x66959b:goto L66959b;
case 0x66959f:c.instructions+=5;goto B66959f;
case 0x6695a1:c.instructions+=4;goto B6695a1;
case 0x6695a4:c.instructions+=3;goto B6695a4;
case 0x6695a8:c.instructions+=2;goto B6695a8;
case 0x6695ab:c.instructions+=1;goto B6695ab;
case 0x6695ad:goto L6695ad;
case 0x6695b1:c.instructions+=13;goto B6695b1;
case 0x6695b3:c.instructions+=12;goto B6695b3;
case 0x6695b6:c.instructions+=11;goto B6695b6;
case 0x6695b9:c.instructions+=10;goto B6695b9;
case 0x6695bc:c.instructions+=9;goto B6695bc;
case 0x6695bf:c.instructions+=8;goto B6695bf;
case 0x6695c1:c.instructions+=7;goto B6695c1;
case 0x6695c7:c.instructions+=6;goto B6695c7;
case 0x6695c8:c.instructions+=5;goto B6695c8;
case 0x6695cb:c.instructions+=4;goto B6695cb;
case 0x6695cf:c.instructions+=3;goto B6695cf;
case 0x6695d0:c.instructions+=2;goto B6695d0;
case 0x6695d3:c.instructions+=1;goto B6695d3;
case 0x6695d9:goto L6695d9;
case 0x6695db:c.instructions+=2;goto B6695db;
case 0x6695de:c.instructions+=1;goto B6695de;
case 0x6695e4:goto L6695e4;
case 0x6695e8:c.instructions+=6;goto B6695e8;
case 0x6695ee:c.instructions+=5;goto B6695ee;
case 0x6695f1:c.instructions+=4;goto B6695f1;
case 0x6695f4:c.instructions+=3;goto B6695f4;
case 0x6695f7:c.instructions+=2;goto B6695f7;
case 0x6695fa:c.instructions+=1;goto B6695fa;
case 0x669600:goto L669600;
case 0x669605:goto L669605;
case 0x669609:c.instructions+=5;goto B669609;
case 0x66960b:c.instructions+=4;goto B66960b;
case 0x66960e:c.instructions+=3;goto B66960e;
case 0x669611:c.instructions+=2;goto B669611;
case 0x669614:c.instructions+=1;goto B669614;
case 0x66961a:goto L66961a;
case 0x66961e:c.instructions+=4;goto B66961e;
case 0x66961f:c.instructions+=3;goto B66961f;
case 0x669622:c.instructions+=2;goto B669622;
case 0x669624:c.instructions+=1;goto B669624;
case 0x669629:goto L669629;
case 0x66962b:c.instructions+=2;goto B66962b;
case 0x66962e:c.instructions+=1;goto B66962e;
case 0x669634:goto L669634;
case 0x669638:c.instructions+=4;goto B669638;
case 0x669639:c.instructions+=3;goto B669639;
case 0x66963c:c.instructions+=2;goto B66963c;
case 0x66963e:c.instructions+=1;goto B66963e;
case 0x669643:goto L669643;
case 0x669645:c.instructions+=2;goto B669645;
case 0x669648:c.instructions+=1;goto B669648;
case 0x66964e:goto L66964e;
case 0x669651:goto L669651;
case 0x669654:c.instructions+=2;goto B669654;
case 0x66965a:c.instructions+=1;goto B66965a;
case 0x669660:goto L669660;
case 0x669666:c.instructions+=1;goto B669666;
case 0x669668:goto L669668;
case 0x66966e:c.instructions+=1;goto B66966e;
case 0x669670:goto L669670;
case 0x669676:c.instructions+=1;goto B669676;
case 0x66967c:goto L66967c;
case 0x669682:c.instructions+=1;goto B669682;
case 0x669684:goto L669684;
case 0x66968a:c.instructions+=1;goto B66968a;
case 0x669690:goto L669690;
case 0x669693:c.instructions+=11;goto B669693;
case 0x669696:c.instructions+=10;goto B669696;
case 0x669697:c.instructions+=9;goto B669697;
case 0x66969a:c.instructions+=8;goto B66969a;
case 0x66969e:c.instructions+=7;goto B66969e;
case 0x6696a1:c.instructions+=6;goto B6696a1;
case 0x6696a4:c.instructions+=5;goto B6696a4;
case 0x6696a5:c.instructions+=4;goto B6696a5;
case 0x6696a6:c.instructions+=3;goto B6696a6;
case 0x6696a7:c.instructions+=2;goto B6696a7;
case 0x6696a9:c.instructions+=1;goto B6696a9;
case 0x6696ae:goto L6696ae;
case 0x6696b3:goto L6696b3;
case 0x6696b6:c.instructions+=2;goto B6696b6;
case 0x6696b8:c.instructions+=1;goto B6696b8;
case 0x6696ba:goto L6696ba;
case 0x6696c0:c.instructions+=9;goto B6696c0;
case 0x6696c3:c.instructions+=8;goto B6696c3;
case 0x6696c6:c.instructions+=7;goto B6696c6;
case 0x6696c9:c.instructions+=6;goto B6696c9;
case 0x6696cc:c.instructions+=5;goto B6696cc;
case 0x6696cf:c.instructions+=4;goto B6696cf;
case 0x6696d2:c.instructions+=3;goto B6696d2;
case 0x6696d5:c.instructions+=2;goto B6696d5;
case 0x6696d8:c.instructions+=1;goto B6696d8;
case 0x6696dd:goto L6696dd;
case 0x6696e0:c.instructions+=11;goto B6696e0;
case 0x6696e3:c.instructions+=10;goto B6696e3;
case 0x6696e4:c.instructions+=9;goto B6696e4;
case 0x6696e7:c.instructions+=8;goto B6696e7;
case 0x6696eb:c.instructions+=7;goto B6696eb;
case 0x6696ee:c.instructions+=6;goto B6696ee;
case 0x6696f1:c.instructions+=5;goto B6696f1;
case 0x6696f2:c.instructions+=4;goto B6696f2;
case 0x6696f3:c.instructions+=3;goto B6696f3;
case 0x6696f4:c.instructions+=2;goto B6696f4;
case 0x6696f6:c.instructions+=1;goto B6696f6;
case 0x6696fb:goto L6696fb;
case 0x669700:goto L669700;
case 0x669703:c.instructions+=11;goto B669703;
case 0x669706:c.instructions+=10;goto B669706;
case 0x669707:c.instructions+=9;goto B669707;
case 0x66970a:c.instructions+=8;goto B66970a;
case 0x66970e:c.instructions+=7;goto B66970e;
case 0x669711:c.instructions+=6;goto B669711;
case 0x669714:c.instructions+=5;goto B669714;
case 0x669715:c.instructions+=4;goto B669715;
case 0x669716:c.instructions+=3;goto B669716;
case 0x669717:c.instructions+=2;goto B669717;
case 0x669719:c.instructions+=1;goto B669719;
case 0x66971e:goto L66971e;
case 0x669723:goto L669723;
case 0x669726:c.instructions+=1;goto B669726;
case 0x66972c:goto L66972c;
case 0x66972f:c.instructions+=1;goto B66972f;
case 0x669731:goto L669731;
case 0x669734:c.instructions+=1;goto B669734;
case 0x669736:goto L669736;
case 0x669739:c.instructions+=1;goto B669739;
case 0x66973f:goto L66973f;
case 0x669743:c.instructions+=4;goto B669743;
case 0x669744:c.instructions+=3;goto B669744;
case 0x669747:c.instructions+=2;goto B669747;
case 0x669749:c.instructions+=1;goto B669749;
case 0x66974e:goto L66974e;
case 0x669753:goto L669753;
case 0x669757:c.instructions+=1;goto B669757;
case 0x66975d:goto L66975d;
case 0x669761:c.instructions+=4;goto B669761;
case 0x669762:c.instructions+=3;goto B669762;
case 0x669765:c.instructions+=2;goto B669765;
case 0x669767:c.instructions+=1;goto B669767;
case 0x66976c:goto L66976c;
case 0x66976e:c.instructions+=2;goto B66976e;
case 0x669771:c.instructions+=1;goto B669771;
case 0x669777:goto L669777;
case 0x66977a:c.instructions+=4;goto B66977a;
case 0x66977d:c.instructions+=3;goto B66977d;
case 0x66977f:c.instructions+=2;goto B66977f;
case 0x669780:c.instructions+=1;goto B669780;
case 0x669783:goto L669783;
case 0x669786:c.instructions+=4;goto B669786;
case 0x669788:c.instructions+=3;goto B669788;
case 0x66978b:c.instructions+=2;goto B66978b;
case 0x669791:c.instructions+=1;goto B669791;
case 0x669796:goto L669796;
case 0x66979a:c.instructions+=3;goto B66979a;
case 0x66979d:c.instructions+=2;goto B66979d;
case 0x6697a0:c.instructions+=1;goto B6697a0;
case 0x6697a6:goto L6697a6;
case 0x6697a9:c.instructions+=5;goto B6697a9;
case 0x6697ac:c.instructions+=4;goto B6697ac;
case 0x6697af:c.instructions+=3;goto B6697af;
case 0x6697b2:c.instructions+=2;goto B6697b2;
case 0x6697b5:c.instructions+=1;goto B6697b5;
case 0x6697bb:goto L6697bb;
case 0x6697bf:c.instructions+=2;goto B6697bf;
case 0x6697c3:c.instructions+=1;goto B6697c3;
case 0x6697c5:goto L6697c5;
case 0x6697c8:c.instructions+=3;goto B6697c8;
case 0x6697cc:c.instructions+=2;goto B6697cc;
case 0x6697ce:c.instructions+=1;goto B6697ce;
case 0x6697d0:goto L6697d0;
case 0x6697d2:goto L6697d2;
case 0x6697d3:c.instructions+=10;goto B6697d3;
case 0x6697d6:c.instructions+=9;goto B6697d6;
case 0x6697da:c.instructions+=8;goto B6697da;
case 0x6697dd:c.instructions+=7;goto B6697dd;
case 0x6697de:c.instructions+=6;goto B6697de;
case 0x6697e1:c.instructions+=5;goto B6697e1;
case 0x6697e4:c.instructions+=4;goto B6697e4;
case 0x6697e8:c.instructions+=3;goto B6697e8;
case 0x6697e9:c.instructions+=2;goto B6697e9;
case 0x6697eb:c.instructions+=1;goto B6697eb;
case 0x6697f0:goto L6697f0;
case 0x6697f2:c.instructions+=2;goto B6697f2;
case 0x6697f5:c.instructions+=1;goto B6697f5;
case 0x6697fb:goto L6697fb;
case 0x6697ff:c.instructions+=4;goto B6697ff;
case 0x669803:c.instructions+=3;goto B669803;
case 0x669807:c.instructions+=2;goto B669807;
case 0x66980b:c.instructions+=1;goto B66980b;
case 0x66980d:goto L66980d;
case 0x669810:c.instructions+=2;goto B669810;
case 0x669814:c.instructions+=1;goto B669814;
case 0x669816:goto L669816;
case 0x669818:goto L669818;
case 0x66981b:c.instructions+=9;goto B66981b;
case 0x66981c:c.instructions+=8;goto B66981c;
case 0x66981f:c.instructions+=7;goto B66981f;
case 0x669823:c.instructions+=6;goto B669823;
case 0x669824:c.instructions+=5;goto B669824;
case 0x669827:c.instructions+=4;goto B669827;
case 0x66982b:c.instructions+=3;goto B66982b;
case 0x66982c:c.instructions+=2;goto B66982c;
case 0x66982e:c.instructions+=1;goto B66982e;
case 0x669833:goto L669833;
case 0x669835:goto L669835;
case 0x66983c:c.instructions+=1;goto B66983c;
case 0x669842:goto L669842;
case 0x669844:goto L669844;
case 0x669848:c.instructions+=4;goto B669848;
case 0x669849:c.instructions+=3;goto B669849;
case 0x66984c:c.instructions+=2;goto B66984c;
case 0x66984e:c.instructions+=1;goto B66984e;
case 0x669853:goto L669853;
case 0x669855:c.instructions+=2;goto B669855;
case 0x669858:c.instructions+=1;goto B669858;
case 0x66985e:goto L66985e;
case 0x669861:c.instructions+=5;goto B669861;
case 0x669863:c.instructions+=4;goto B669863;
case 0x669866:c.instructions+=3;goto B669866;
case 0x669867:c.instructions+=2;goto B669867;
case 0x66986a:c.instructions+=1;goto B66986a;
case 0x669870:goto L669870;
case 0x669877:goto L669877;
case 0x669879:c.instructions+=7;goto B669879;
case 0x66987c:c.instructions+=6;goto B66987c;
case 0x66987f:c.instructions+=5;goto B66987f;
case 0x669881:c.instructions+=4;goto B669881;
case 0x669886:c.instructions+=3;goto B669886;
case 0x669887:c.instructions+=2;goto B669887;
case 0x669888:c.instructions+=1;goto B669888;
case 0x66988e:goto L66988e;
case 0x669893:goto L669893;
case 0x669895:c.instructions+=9;goto B669895;
case 0x669898:c.instructions+=8;goto B669898;
case 0x66989b:c.instructions+=7;goto B66989b;
case 0x66989d:c.instructions+=6;goto B66989d;
case 0x6698a2:c.instructions+=5;goto B6698a2;
case 0x6698a3:c.instructions+=4;goto B6698a3;
case 0x6698a7:c.instructions+=3;goto B6698a7;
case 0x6698a8:c.instructions+=2;goto B6698a8;
case 0x6698a9:c.instructions+=1;goto B6698a9;
case 0x6698af:goto L6698af;
case 0x6698b4:goto L6698b4;
case 0x6698b8:c.instructions+=1;goto B6698b8;
case 0x6698be:goto L6698be;
case 0x6698c0:c.instructions+=9;goto B6698c0;
case 0x6698c3:c.instructions+=8;goto B6698c3;
case 0x6698c6:c.instructions+=7;goto B6698c6;
case 0x6698c8:c.instructions+=6;goto B6698c8;
case 0x6698cd:c.instructions+=5;goto B6698cd;
case 0x6698ce:c.instructions+=4;goto B6698ce;
case 0x6698d2:c.instructions+=3;goto B6698d2;
case 0x6698d3:c.instructions+=2;goto B6698d3;
case 0x6698d4:c.instructions+=1;goto B6698d4;
case 0x6698da:goto L6698da;
case 0x6698df:goto L6698df;
case 0x6698e2:c.instructions+=6;goto B6698e2;
case 0x6698e4:c.instructions+=5;goto B6698e4;
case 0x6698e6:c.instructions+=4;goto B6698e6;
case 0x6698e7:c.instructions+=3;goto B6698e7;
case 0x6698ea:c.instructions+=2;goto B6698ea;
case 0x6698eb:c.instructions+=1;goto B6698eb;
case 0x6698f1:goto L6698f1;
case 0x6698f6:goto L6698f6;
case 0x6698fa:c.instructions+=1;goto B6698fa;
case 0x6698fc:goto L6698fc;
case 0x6698fe:c.instructions+=2;goto B6698fe;
case 0x6698ff:c.instructions+=1;goto B6698ff;
case 0x669901:goto L669901;
case 0x669903:goto L669903;
case 0x669906:c.instructions+=4;goto B669906;
case 0x669908:c.instructions+=3;goto B669908;
case 0x669909:c.instructions+=2;goto B669909;
case 0x66990a:c.instructions+=1;goto B66990a;
case 0x669910:goto L669910;
case 0x669915:goto L669915;
case 0x66991b:c.instructions+=1;goto B66991b;
case 0x66991d:goto L66991d;
case 0x66991e:c.instructions+=1;goto B66991e;
case 0x669920:goto L669920;
case 0x669921:c.instructions+=1;goto B669921;
case 0x669923:goto L669923;
case 0x669924:c.instructions+=1;goto B669924;
case 0x66992a:goto L66992a;
case 0x66992e:c.instructions+=2;goto B66992e;
case 0x669931:c.instructions+=1;goto B669931;
case 0x669933:goto L669933;
case 0x669937:c.instructions+=1;goto B669937;
case 0x66993d:goto L66993d;
case 0x66993e:c.instructions+=2;goto B66993e;
case 0x66993f:c.instructions+=1;goto B66993f;
case 0x669941:goto L669941;
case 0x669942:c.instructions+=2;goto B669942;
case 0x669944:c.instructions+=1;goto B669944;
case 0x669946:goto L669946;
case 0x669947:c.instructions+=1;goto B669947;
case 0x669949:goto L669949;
case 0x66994c:c.instructions+=3;goto B66994c;
case 0x66994e:c.instructions+=2;goto B66994e;
case 0x66994f:c.instructions+=1;goto B66994f;
case 0x669955:goto L669955;
case 0x66995a:goto L66995a;
case 0x66995e:c.instructions+=5;goto B66995e;
case 0x669964:c.instructions+=4;goto B669964;
case 0x66996a:c.instructions+=3;goto B66996a;
case 0x669970:c.instructions+=2;goto B669970;
case 0x669974:c.instructions+=1;goto B669974;
case 0x669976:goto L669976;
case 0x669977:c.instructions+=1;goto B669977;
case 0x669979:goto L669979;
case 0x66997a:c.instructions+=1;goto B66997a;
case 0x66997c:goto L66997c;
case 0x66997d:c.instructions+=1;goto B66997d;
case 0x66997f:goto L66997f;
case 0x669980:c.instructions+=1;goto B669980;
case 0x669982:goto L669982;
case 0x669984:c.instructions+=2;goto B669984;
case 0x669987:c.instructions+=1;goto B669987;
case 0x669989:goto L669989;
case 0x66998c:c.instructions+=1;goto B66998c;
case 0x66998e:goto L66998e;
case 0x669991:c.instructions+=1;goto B669991;
case 0x669993:goto L669993;
case 0x669996:c.instructions+=1;goto B669996;
case 0x669998:goto L669998;
case 0x66999a:goto L66999a;
case 0x66999c:c.instructions+=12;goto B66999c;
case 0x66999f:c.instructions+=11;goto B66999f;
case 0x6699a2:c.instructions+=10;goto B6699a2;
case 0x6699a5:c.instructions+=9;goto B6699a5;
case 0x6699a8:c.instructions+=8;goto B6699a8;
case 0x6699ab:c.instructions+=7;goto B6699ab;
case 0x6699ae:c.instructions+=6;goto B6699ae;
case 0x6699b1:c.instructions+=5;goto B6699b1;
case 0x6699b4:c.instructions+=4;goto B6699b4;
case 0x6699b5:c.instructions+=3;goto B6699b5;
case 0x6699b6:c.instructions+=2;goto B6699b6;
case 0x6699b7:c.instructions+=1;goto B6699b7;
case 0x6699b8:goto L6699b8;
case 0x6699bb:c.instructions+=2;goto B6699bb;
case 0x6699bf:c.instructions+=1;goto B6699bf;
case 0x6699c1:goto L6699c1;
case 0x6699c8:c.instructions+=1;goto B6699c8;
case 0x6699ce:goto L6699ce;
case 0x6699d1:c.instructions+=4;goto B6699d1;
case 0x6699d3:c.instructions+=3;goto B6699d3;
case 0x6699d4:c.instructions+=2;goto B6699d4;
case 0x6699d5:c.instructions+=1;goto B6699d5;
case 0x6699db:goto L6699db;
case 0x6699e0:goto L6699e0;
case 0x6699e6:c.instructions+=1;goto B6699e6;
case 0x6699ec:goto L6699ec;
case 0x6699ef:c.instructions+=9;goto B6699ef;
case 0x6699f3:c.instructions+=8;goto B6699f3;
case 0x6699f7:c.instructions+=7;goto B6699f7;
case 0x6699fa:c.instructions+=6;goto B6699fa;
case 0x669a00:c.instructions+=5;goto B669a00;
case 0x669a06:c.instructions+=4;goto B669a06;
case 0x669a0a:c.instructions+=3;goto B669a0a;
case 0x669a10:c.instructions+=2;goto B669a10;
case 0x669a13:c.instructions+=1;goto B669a13;
case 0x669a19:goto L669a19;
case 0x669a20:goto L669a20;
case 0x669a22:c.instructions+=2;goto B669a22;
case 0x669a24:c.instructions+=1;goto B669a24;
case 0x669a26:goto L669a26;
case 0x669a29:goto L669a29;
case 0x669a2b:c.instructions+=10;goto B669a2b;
case 0x669a2e:c.instructions+=9;goto B669a2e;
case 0x669a31:c.instructions+=8;goto B669a31;
case 0x669a34:c.instructions+=7;goto B669a34;
case 0x669a37:c.instructions+=6;goto B669a37;
case 0x669a3a:c.instructions+=5;goto B669a3a;
case 0x669a3d:c.instructions+=4;goto B669a3d;
case 0x669a40:c.instructions+=3;goto B669a40;
case 0x669a43:c.instructions+=2;goto B669a43;
case 0x669a44:c.instructions+=1;goto B669a44;
case 0x669a46:goto L669a46;
case 0x669a49:c.instructions+=1;goto B669a49;
case 0x669a4b:goto L669a4b;
case 0x669a4e:c.instructions+=1;goto B669a4e;
case 0x669a50:goto L669a50;
case 0x669a53:c.instructions+=1;goto B669a53;
case 0x669a55:goto L669a55;
case 0x669a58:goto L669a58;
case 0x669a5a:c.instructions+=6;goto B669a5a;
case 0x669a5d:c.instructions+=5;goto B669a5d;
case 0x669a60:c.instructions+=4;goto B669a60;
case 0x669a63:c.instructions+=3;goto B669a63;
case 0x669a66:c.instructions+=2;goto B669a66;
case 0x669a69:c.instructions+=1;goto B669a69;
case 0x669a6c:goto L669a6c;
case 0x669a6d:c.instructions+=3;goto B669a6d;
case 0x669a6e:c.instructions+=2;goto B669a6e;
case 0x669a6f:c.instructions+=1;goto B669a6f;
case 0x669a71:goto L669a71;
case 0x669a73:c.instructions+=2;goto B669a73;
case 0x669a76:c.instructions+=1;goto B669a76;
case 0x669a78:goto L669a78;
case 0x669a7a:c.instructions+=2;goto B669a7a;
case 0x669a7d:c.instructions+=1;goto B669a7d;
case 0x669a7f:goto L669a7f;
case 0x669a81:c.instructions+=2;goto B669a81;
case 0x669a84:c.instructions+=1;goto B669a84;
case 0x669a86:goto L669a86;
case 0x669a88:c.instructions+=2;goto B669a88;
case 0x669a8b:c.instructions+=1;goto B669a8b;
case 0x669a8d:goto L669a8d;
case 0x669a8f:c.instructions+=2;goto B669a8f;
case 0x669a92:c.instructions+=1;goto B669a92;
case 0x669a94:goto L669a94;
case 0x669a96:c.instructions+=2;goto B669a96;
case 0x669a99:c.instructions+=1;goto B669a99;
case 0x669a9b:goto L669a9b;
case 0x669a9d:c.instructions+=1;goto B669a9d;
case 0x669aa0:goto L669aa0;
case 0x669aa3:c.instructions+=2;goto B669aa3;
case 0x669aa7:c.instructions+=1;goto B669aa7;
case 0x669aa9:goto L669aa9;
case 0x669ab0:c.instructions+=1;goto B669ab0;
case 0x669ab6:goto L669ab6;
case 0x669aba:c.instructions+=1;goto B669aba;
case 0x669abc:goto L669abc;
case 0x669abe:c.instructions+=11;goto B669abe;
case 0x669ac1:c.instructions+=10;goto B669ac1;
case 0x669ac4:c.instructions+=9;goto B669ac4;
case 0x669ac7:c.instructions+=8;goto B669ac7;
case 0x669ac9:c.instructions+=7;goto B669ac9;
case 0x669acf:c.instructions+=6;goto B669acf;
case 0x669ad2:c.instructions+=5;goto B669ad2;
case 0x669ad4:c.instructions+=4;goto B669ad4;
case 0x669ad7:c.instructions+=3;goto B669ad7;
case 0x669ad8:c.instructions+=2;goto B669ad8;
case 0x669ad9:c.instructions+=1;goto B669ad9;
case 0x669ada:goto L669ada;
case 0x669add:c.instructions+=6;goto B669add;
case 0x669adf:c.instructions+=5;goto B669adf;
case 0x669ae0:c.instructions+=4;goto B669ae0;
case 0x669ae4:c.instructions+=3;goto B669ae4;
case 0x669ae5:c.instructions+=2;goto B669ae5;
case 0x669ae6:c.instructions+=1;goto B669ae6;
case 0x669aec:goto L669aec;
case 0x669af1:goto L669af1;
case 0x669af3:c.instructions+=6;goto B669af3;
case 0x669af7:c.instructions+=5;goto B669af7;
case 0x669afa:c.instructions+=4;goto B669afa;
case 0x669afc:c.instructions+=3;goto B669afc;
case 0x669afd:c.instructions+=2;goto B669afd;
case 0x669afe:c.instructions+=1;goto B669afe;
case 0x669b04:goto L669b04;
case 0x669b09:goto L669b09;
case 0x669b0d:c.instructions+=1;goto B669b0d;
case 0x669b0f:goto L669b0f;
case 0x669b12:c.instructions+=5;goto B669b12;
case 0x669b14:c.instructions+=4;goto B669b14;
case 0x669b1a:c.instructions+=3;goto B669b1a;
case 0x669b1b:c.instructions+=2;goto B669b1b;
case 0x669b1c:c.instructions+=1;goto B669b1c;
case 0x669b1f:goto L669b1f;
case 0x669b21:c.instructions+=2;goto B669b21;
case 0x669b24:c.instructions+=1;goto B669b24;
case 0x669b2a:goto L669b2a;
case 0x669b2d:c.instructions+=4;goto B669b2d;
case 0x669b30:c.instructions+=3;goto B669b30;
case 0x669b32:c.instructions+=2;goto B669b32;
case 0x669b35:c.instructions+=1;goto B669b35;
case 0x669b37:goto L669b37;
case 0x669b38:c.instructions+=1;goto B669b38;
case 0x669b3a:goto L669b3a;
case 0x669b41:c.instructions+=1;goto B669b41;
case 0x669b43:goto L669b43;
case 0x669b4a:goto L669b4a;
case 0x669b4c:goto L669b4c;
case 0x669b51:goto L669b51;
case 0x669b54:goto L669b54;
case 0x669b57:c.instructions+=7;goto B669b57;
case 0x669b5d:c.instructions+=6;goto B669b5d;
case 0x669b60:c.instructions+=5;goto B669b60;
case 0x669b63:c.instructions+=4;goto B669b63;
case 0x669b65:c.instructions+=3;goto B669b65;
case 0x669b68:c.instructions+=2;goto B669b68;
case 0x669b6a:c.instructions+=1;goto B669b6a;
case 0x669b6c:goto L669b6c;
case 0x669b6f:c.instructions+=1;goto B669b6f;
case 0x669b72:goto L669b72;
case 0x669b75:c.instructions+=8;goto B669b75;
case 0x669b78:c.instructions+=7;goto B669b78;
case 0x669b7a:c.instructions+=6;goto B669b7a;
case 0x669b7d:c.instructions+=5;goto B669b7d;
case 0x669b81:c.instructions+=4;goto B669b81;
case 0x669b85:c.instructions+=3;goto B669b85;
case 0x669b86:c.instructions+=2;goto B669b86;
case 0x669b87:c.instructions+=1;goto B669b87;
case 0x669b8d:goto L669b8d;
case 0x669b92:goto L669b92;
case 0x669b95:c.instructions+=2;goto B669b95;
case 0x669b98:c.instructions+=1;goto B669b98;
case 0x669b9e:goto L669b9e;
case 0x669ba1:c.instructions+=1;goto B669ba1;
case 0x669ba7:goto L669ba7;
case 0x669baa:c.instructions+=8;goto B669baa;
case 0x669bad:c.instructions+=7;goto B669bad;
case 0x669bb3:c.instructions+=6;goto B669bb3;
case 0x669bb6:c.instructions+=5;goto B669bb6;
case 0x669bb9:c.instructions+=4;goto B669bb9;
case 0x669bbb:c.instructions+=3;goto B669bbb;
case 0x669bbe:c.instructions+=2;goto B669bbe;
case 0x669bc0:c.instructions+=1;goto B669bc0;
case 0x669bc2:goto L669bc2;
case 0x669bc4:c.instructions+=1;goto B669bc4;
case 0x669bc6:goto L669bc6;
case 0x669bc9:c.instructions+=1;goto B669bc9;
case 0x669bcc:goto L669bcc;
case 0x669bcf:c.instructions+=3;goto B669bcf;
case 0x669bd2:c.instructions+=2;goto B669bd2;
case 0x669bd7:c.instructions+=1;goto B669bd7;
case 0x669bdd:goto L669bdd;
case 0x669bdf:c.instructions+=1;goto B669bdf;
case 0x669be1:goto L669be1;
case 0x669be3:c.instructions+=1;goto B669be3;
case 0x669be5:goto L669be5;
case 0x669be8:c.instructions+=1;goto B669be8;
case 0x669beb:goto L669beb;
case 0x669bee:c.instructions+=2;goto B669bee;
case 0x669bf3:c.instructions+=1;goto B669bf3;
case 0x669bf5:goto L669bf5;
case 0x669bf7:c.instructions+=1;goto B669bf7;
case 0x669bf9:goto L669bf9;
case 0x669bfb:c.instructions+=1;goto B669bfb;
case 0x669bfd:goto L669bfd;
case 0x669c00:c.instructions+=1;goto B669c00;
case 0x669c03:goto L669c03;
case 0x669c06:c.instructions+=2;goto B669c06;
case 0x669c0b:c.instructions+=1;goto B669c0b;
case 0x669c0d:goto L669c0d;
case 0x669c0f:c.instructions+=1;goto B669c0f;
case 0x669c11:goto L669c11;
case 0x669c14:c.instructions+=1;goto B669c14;
case 0x669c17:goto L669c17;
case 0x669c1a:c.instructions+=5;goto B669c1a;
case 0x669c1d:c.instructions+=4;goto B669c1d;
case 0x669c21:c.instructions+=3;goto B669c21;
case 0x669c23:c.instructions+=2;goto B669c23;
case 0x669c24:c.instructions+=1;goto B669c24;
case 0x669c27:goto L669c27;
case 0x669c29:goto L669c29;
case 0x669c2b:goto L669c2b;
case 0x669c2c:c.instructions+=2;goto B669c2c;
case 0x669c2e:c.instructions+=1;goto B669c2e;
case 0x669c33:goto L669c33;
case 0x669c35:c.instructions+=2;goto B669c35;
case 0x669c38:c.instructions+=1;goto B669c38;
case 0x669c3e:goto L669c3e;
case 0x669c41:c.instructions+=6;goto B669c41;
case 0x669c44:c.instructions+=5;goto B669c44;
case 0x669c4a:c.instructions+=4;goto B669c4a;
case 0x669c4d:c.instructions+=3;goto B669c4d;
case 0x669c50:c.instructions+=2;goto B669c50;
case 0x669c52:c.instructions+=1;goto B669c52;
case 0x669c54:goto L669c54;
case 0x669c57:c.instructions+=2;goto B669c57;
case 0x669c59:c.instructions+=1;goto B669c59;
case 0x669c5b:goto L669c5b;
case 0x669c5e:c.instructions+=3;goto B669c5e;
case 0x669c60:c.instructions+=2;goto B669c60;
case 0x669c63:c.instructions+=1;goto B669c63;
case 0x669c66:goto L669c66;
case 0x669c69:c.instructions+=6;goto B669c69;
case 0x669c6c:c.instructions+=5;goto B669c6c;
case 0x669c6e:c.instructions+=4;goto B669c6e;
case 0x669c71:c.instructions+=3;goto B669c71;
case 0x669c75:c.instructions+=2;goto B669c75;
case 0x669c76:c.instructions+=1;goto B669c76;
case 0x669c7c:goto L669c7c;
case 0x669c81:goto L669c81;
case 0x669c84:c.instructions+=2;goto B669c84;
case 0x669c87:c.instructions+=1;goto B669c87;
case 0x669c8d:goto L669c8d;
case 0x669c90:c.instructions+=2;goto B669c90;
case 0x669c93:c.instructions+=1;goto B669c93;
case 0x669c95:goto L669c95;
case 0x669c98:c.instructions+=5;goto B669c98;
case 0x669c9e:c.instructions+=4;goto B669c9e;
case 0x669ca1:c.instructions+=3;goto B669ca1;
case 0x669ca4:c.instructions+=2;goto B669ca4;
case 0x669ca6:c.instructions+=1;goto B669ca6;
case 0x669ca8:goto L669ca8;
case 0x669cab:c.instructions+=2;goto B669cab;
case 0x669cad:c.instructions+=1;goto B669cad;
case 0x669caf:goto L669caf;
case 0x669cb2:c.instructions+=3;goto B669cb2;
case 0x669cb4:c.instructions+=2;goto B669cb4;
case 0x669cb7:c.instructions+=1;goto B669cb7;
case 0x669cba:goto L669cba;
case 0x669cbd:c.instructions+=3;goto B669cbd;
case 0x669cc0:c.instructions+=2;goto B669cc0;
case 0x669cc5:c.instructions+=1;goto B669cc5;
case 0x669cc7:goto L669cc7;
case 0x669cce:c.instructions+=1;goto B669cce;
case 0x669cd3:goto L669cd3;
case 0x669cd6:c.instructions+=7;goto B669cd6;
case 0x669cdc:c.instructions+=6;goto B669cdc;
case 0x669cdf:c.instructions+=5;goto B669cdf;
case 0x669ce2:c.instructions+=4;goto B669ce2;
case 0x669ce4:c.instructions+=3;goto B669ce4;
case 0x669ce7:c.instructions+=2;goto B669ce7;
case 0x669ce9:c.instructions+=1;goto B669ce9;
case 0x669ceb:goto L669ceb;
case 0x669cee:c.instructions+=1;goto B669cee;
case 0x669cf1:goto L669cf1;
case 0x669cf4:c.instructions+=6;goto B669cf4;
case 0x669cf7:c.instructions+=5;goto B669cf7;
case 0x669cf9:c.instructions+=4;goto B669cf9;
case 0x669cfc:c.instructions+=3;goto B669cfc;
case 0x669d00:c.instructions+=2;goto B669d00;
case 0x669d01:c.instructions+=1;goto B669d01;
case 0x669d07:goto L669d07;
case 0x669d0c:goto L669d0c;
case 0x669d10:c.instructions+=1;goto B669d10;
case 0x669d16:goto L669d16;
case 0x669d1c:c.instructions+=3;goto B669d1c;
case 0x669d1f:c.instructions+=2;goto B669d1f;
case 0x669d22:c.instructions+=1;goto B669d22;
case 0x669d24:goto L669d24;
case 0x669d27:c.instructions+=2;goto B669d27;
case 0x669d2b:c.instructions+=1;goto B669d2b;
case 0x669d31:goto L669d31;
case 0x669d37:c.instructions+=1;goto B669d37;
case 0x669d3d:goto L669d3d;
case 0x669d43:c.instructions+=1;goto B669d43;
case 0x669d45:goto L669d45;
case 0x669d4b:c.instructions+=1;goto B669d4b;
case 0x669d51:goto L669d51;
case 0x669d55:c.instructions+=1;goto B669d55;
case 0x669d57:goto L669d57;
case 0x669d59:c.instructions+=1;goto B669d59;
case 0x669d5b:goto L669d5b;
case 0x669d5e:c.instructions+=2;goto B669d5e;
case 0x669d62:c.instructions+=1;goto B669d62;
case 0x669d64:goto L669d64;
case 0x669d68:c.instructions+=7;goto B669d68;
case 0x669d6c:c.instructions+=6;goto B669d6c;
case 0x669d6f:c.instructions+=5;goto B669d6f;
case 0x669d70:c.instructions+=4;goto B669d70;
case 0x669d72:c.instructions+=3;goto B669d72;
case 0x669d73:c.instructions+=2;goto B669d73;
case 0x669d75:c.instructions+=1;goto B669d75;
case 0x669d77:goto L669d77;
case 0x669d7a:goto L669d7a;
case 0x669d7e:c.instructions+=4;goto B669d7e;
case 0x669d7f:c.instructions+=3;goto B669d7f;
case 0x669d83:c.instructions+=2;goto B669d83;
case 0x669d84:c.instructions+=1;goto B669d84;
case 0x669d85:goto L669d85;
case 0x669d88:c.instructions+=3;goto B669d88;
case 0x669d8a:c.instructions+=2;goto B669d8a;
case 0x669d8b:c.instructions+=1;goto B669d8b;
case 0x669d91:goto L669d91;
case 0x669d96:goto L669d96;
case 0x669d9a:c.instructions+=1;goto B669d9a;
case 0x669d9c:goto L669d9c;
case 0x669d9e:c.instructions+=1;goto B669d9e;
case 0x669da0:goto L669da0;
case 0x669da3:c.instructions+=2;goto B669da3;
case 0x669da7:c.instructions+=1;goto B669da7;
case 0x669da9:goto L669da9;
case 0x669dad:c.instructions+=7;goto B669dad;
case 0x669db1:c.instructions+=6;goto B669db1;
case 0x669db4:c.instructions+=5;goto B669db4;
case 0x669db5:c.instructions+=4;goto B669db5;
case 0x669db7:c.instructions+=3;goto B669db7;
case 0x669db8:c.instructions+=2;goto B669db8;
case 0x669dba:c.instructions+=1;goto B669dba;
case 0x669dbc:goto L669dbc;
case 0x669dbf:goto L669dbf;
case 0x669dc3:c.instructions+=4;goto B669dc3;
case 0x669dc4:c.instructions+=3;goto B669dc4;
case 0x669dc8:c.instructions+=2;goto B669dc8;
case 0x669dc9:c.instructions+=1;goto B669dc9;
case 0x669dca:goto L669dca;
case 0x669dcd:c.instructions+=1;goto B669dcd;
case 0x669dd2:goto L669dd2;
case 0x669dd7:goto L669dd7;
case 0x669ddb:c.instructions+=1;goto B669ddb;
case 0x669ddd:goto L669ddd;
case 0x669ddf:c.instructions+=1;goto B669ddf;
case 0x669de1:goto L669de1;
case 0x669de4:c.instructions+=2;goto B669de4;
case 0x669de8:c.instructions+=1;goto B669de8;
case 0x669dea:goto L669dea;
case 0x669dee:c.instructions+=7;goto B669dee;
case 0x669df2:c.instructions+=6;goto B669df2;
case 0x669df5:c.instructions+=5;goto B669df5;
case 0x669df6:c.instructions+=4;goto B669df6;
case 0x669df8:c.instructions+=3;goto B669df8;
case 0x669df9:c.instructions+=2;goto B669df9;
case 0x669dfb:c.instructions+=1;goto B669dfb;
case 0x669dfd:goto L669dfd;
case 0x669e00:goto L669e00;
case 0x669e04:c.instructions+=4;goto B669e04;
case 0x669e05:c.instructions+=3;goto B669e05;
case 0x669e09:c.instructions+=2;goto B669e09;
case 0x669e0a:c.instructions+=1;goto B669e0a;
case 0x669e0b:goto L669e0b;
case 0x669e0e:c.instructions+=3;goto B669e0e;
case 0x669e10:c.instructions+=2;goto B669e10;
case 0x669e11:c.instructions+=1;goto B669e11;
case 0x669e17:goto L669e17;
case 0x669e1c:goto L669e1c;
case 0x669e20:c.instructions+=1;goto B669e20;
case 0x669e26:goto L669e26;
case 0x669e2c:c.instructions+=3;goto B669e2c;
case 0x669e2f:c.instructions+=2;goto B669e2f;
case 0x669e32:c.instructions+=1;goto B669e32;
case 0x669e34:goto L669e34;
case 0x669e37:c.instructions+=2;goto B669e37;
case 0x669e3b:c.instructions+=1;goto B669e3b;
case 0x669e41:goto L669e41;
case 0x669e47:c.instructions+=1;goto B669e47;
case 0x669e4d:goto L669e4d;
case 0x669e53:c.instructions+=1;goto B669e53;
case 0x669e55:goto L669e55;
case 0x669e5b:c.instructions+=1;goto B669e5b;
case 0x669e61:goto L669e61;
case 0x669e65:c.instructions+=1;goto B669e65;
case 0x669e67:goto L669e67;
case 0x669e69:c.instructions+=1;goto B669e69;
case 0x669e6b:goto L669e6b;
case 0x669e6e:c.instructions+=2;goto B669e6e;
case 0x669e72:c.instructions+=1;goto B669e72;
case 0x669e74:goto L669e74;
case 0x669e78:c.instructions+=7;goto B669e78;
case 0x669e7c:c.instructions+=6;goto B669e7c;
case 0x669e7f:c.instructions+=5;goto B669e7f;
case 0x669e80:c.instructions+=4;goto B669e80;
case 0x669e82:c.instructions+=3;goto B669e82;
case 0x669e83:c.instructions+=2;goto B669e83;
case 0x669e85:c.instructions+=1;goto B669e85;
case 0x669e87:goto L669e87;
case 0x669e8a:goto L669e8a;
case 0x669e8e:c.instructions+=4;goto B669e8e;
case 0x669e8f:c.instructions+=3;goto B669e8f;
case 0x669e93:c.instructions+=2;goto B669e93;
case 0x669e94:c.instructions+=1;goto B669e94;
case 0x669e95:goto L669e95;
case 0x669e98:c.instructions+=3;goto B669e98;
case 0x669e9a:c.instructions+=2;goto B669e9a;
case 0x669e9b:c.instructions+=1;goto B669e9b;
case 0x669ea1:goto L669ea1;
case 0x669ea6:goto L669ea6;
case 0x669eaa:c.instructions+=1;goto B669eaa;
case 0x669eac:goto L669eac;
case 0x669eae:c.instructions+=1;goto B669eae;
case 0x669eb0:goto L669eb0;
case 0x669eb3:c.instructions+=2;goto B669eb3;
case 0x669eb7:c.instructions+=1;goto B669eb7;
case 0x669eb9:goto L669eb9;
case 0x669ebd:c.instructions+=7;goto B669ebd;
case 0x669ec1:c.instructions+=6;goto B669ec1;
case 0x669ec4:c.instructions+=5;goto B669ec4;
case 0x669ec5:c.instructions+=4;goto B669ec5;
case 0x669ec7:c.instructions+=3;goto B669ec7;
case 0x669ec8:c.instructions+=2;goto B669ec8;
case 0x669eca:c.instructions+=1;goto B669eca;
case 0x669ecc:goto L669ecc;
case 0x669ecf:goto L669ecf;
case 0x669ed3:c.instructions+=4;goto B669ed3;
case 0x669ed4:c.instructions+=3;goto B669ed4;
case 0x669ed8:c.instructions+=2;goto B669ed8;
case 0x669ed9:c.instructions+=1;goto B669ed9;
case 0x669eda:goto L669eda;
case 0x669edd:c.instructions+=3;goto B669edd;
case 0x669edf:c.instructions+=2;goto B669edf;
case 0x669ee0:c.instructions+=1;goto B669ee0;
case 0x669ee6:goto L669ee6;
case 0x669eeb:goto L669eeb;
case 0x669eef:c.instructions+=1;goto B669eef;
case 0x669ef1:goto L669ef1;
case 0x669ef3:c.instructions+=1;goto B669ef3;
case 0x669ef5:goto L669ef5;
case 0x669ef8:c.instructions+=2;goto B669ef8;
case 0x669efc:c.instructions+=1;goto B669efc;
case 0x669efe:goto L669efe;
case 0x669f02:c.instructions+=7;goto B669f02;
case 0x669f06:c.instructions+=6;goto B669f06;
case 0x669f09:c.instructions+=5;goto B669f09;
case 0x669f0a:c.instructions+=4;goto B669f0a;
case 0x669f0c:c.instructions+=3;goto B669f0c;
case 0x669f0d:c.instructions+=2;goto B669f0d;
case 0x669f0f:c.instructions+=1;goto B669f0f;
case 0x669f11:goto L669f11;
case 0x669f14:goto L669f14;
case 0x669f18:c.instructions+=4;goto B669f18;
case 0x669f19:c.instructions+=3;goto B669f19;
case 0x669f1d:c.instructions+=2;goto B669f1d;
case 0x669f1e:c.instructions+=1;goto B669f1e;
case 0x669f1f:goto L669f1f;
case 0x669f22:c.instructions+=3;goto B669f22;
case 0x669f24:c.instructions+=2;goto B669f24;
case 0x669f25:c.instructions+=1;goto B669f25;
case 0x669f2b:goto L669f2b;
case 0x669f30:goto L669f30;
case 0x669f33:c.instructions+=2;goto B669f33;
case 0x669f36:c.instructions+=1;goto B669f36;
case 0x669f3c:goto L669f3c;
case 0x669f40:c.instructions+=1;goto B669f40;
case 0x669f42:goto L669f42;
case 0x669f46:c.instructions+=7;goto B669f46;
case 0x669f49:c.instructions+=6;goto B669f49;
case 0x669f4d:c.instructions+=5;goto B669f4d;
case 0x669f4f:c.instructions+=4;goto B669f4f;
case 0x669f52:c.instructions+=3;goto B669f52;
case 0x669f55:c.instructions+=2;goto B669f55;
case 0x669f59:c.instructions+=1;goto B669f59;
case 0x669f5b:goto L669f5b;
case 0x669f5c:c.instructions+=2;goto B669f5c;
case 0x669f5e:c.instructions+=1;goto B669f5e;
case 0x669f63:goto L669f63;
case 0x669f68:goto L669f68;
case 0x669f6d:c.instructions+=3;goto B669f6d;
case 0x669f6e:c.instructions+=2;goto B669f6e;
case 0x669f70:c.instructions+=1;goto B669f70;
case 0x669f75:goto L669f75;
case 0x669f7a:goto L669f7a;
case 0x669f7c:goto L669f7c;
case 0x669f7e:c.instructions+=8;goto B669f7e;
case 0x669f82:c.instructions+=7;goto B669f82;
case 0x669f85:c.instructions+=6;goto B669f85;
case 0x669f88:c.instructions+=5;goto B669f88;
case 0x669f8d:c.instructions+=4;goto B669f8d;
case 0x669f8f:c.instructions+=3;goto B669f8f;
case 0x669f90:c.instructions+=2;goto B669f90;
case 0x669f91:c.instructions+=1;goto B669f91;
case 0x669f96:goto L669f96;
case 0x669f98:c.instructions+=2;goto B669f98;
case 0x669f9b:c.instructions+=1;goto B669f9b;
case 0x669f9d:goto L669f9d;
case 0x669fa1:c.instructions+=1;goto B669fa1;
case 0x669fa7:goto L669fa7;
case 0x669fa8:c.instructions+=2;goto B669fa8;
case 0x669fac:c.instructions+=1;goto B669fac;
case 0x669fae:goto L669fae;
case 0x669fb3:goto L669fb3;
case 0x669fb6:c.instructions+=2;goto B669fb6;
case 0x669fb9:c.instructions+=1;goto B669fb9;
case 0x669fbf:goto L669fbf;
case 0x669fc3:c.instructions+=1;goto B669fc3;
case 0x669fc5:goto L669fc5;
case 0x669fc8:c.instructions+=6;goto B669fc8;
case 0x669fcb:c.instructions+=5;goto B669fcb;
case 0x669fcc:c.instructions+=4;goto B669fcc;
case 0x669fcd:c.instructions+=3;goto B669fcd;
case 0x669fce:c.instructions+=2;goto B669fce;
case 0x669fd0:c.instructions+=1;goto B669fd0;
case 0x669fd5:goto L669fd5;
case 0x669fd8:c.instructions+=1;goto B669fd8;
case 0x669fdd:goto L669fdd;
case 0x669fe0:c.instructions+=6;goto B669fe0;
case 0x669fe2:c.instructions+=5;goto B669fe2;
case 0x669fe6:c.instructions+=4;goto B669fe6;
case 0x669fe9:c.instructions+=3;goto B669fe9;
case 0x669fea:c.instructions+=2;goto B669fea;
case 0x669feb:c.instructions+=1;goto B669feb;
case 0x669ff0:goto L669ff0;
case 0x669ff3:c.instructions+=4;goto B669ff3;
case 0x669ff6:c.instructions+=3;goto B669ff6;
case 0x669ff8:c.instructions+=2;goto B669ff8;
case 0x669ff9:c.instructions+=1;goto B669ff9;
case 0x669ffc:goto L669ffc;
case 0x669ffe:c.instructions+=1;goto B669ffe;
default:missing_instruction(c.pc);}
B669000:L669000:{c.instructions+=2;NFSU2_TR(0x669000);
__builtin_memmove((R+4),(R+28),4);
}
B669002:{NFSU2_TR(0x669002);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x669007ull));
TAIL_STATIC(0x6623dau,662);
}
B669007:L669007:{c.instructions+=5;NFSU2_TR(0x669007);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B66900a:{NFSU2_TR(0x66900a);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x64ull))));
}
B66900d:{NFSU2_TR(0x66900d);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w1(R+512,u8((r4(R+24))<(r4(U+0))));
}
B66900f:{NFSU2_TR(0x66900f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B669012:{NFSU2_TR(0x669012);
if(r1(R+512)){TAIL_STATIC(0x668fa7u,668);}
}
B669014:L669014:{c.instructions+=11;NFSU2_TR(0x669014);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(r2(U+4)));
}
B669018:{NFSU2_TR(0x669018);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B66901b:{NFSU2_TR(0x66901b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
w4(R+0,u32(u32(r4(R+0))+u32(r4(U+0))));
}
B66901d:{NFSU2_TR(0x66901d);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
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
B669021:{NFSU2_TR(0x669021);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B669024:{NFSU2_TR(0x669024);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+4),(U+0),4);
}
B669026:{NFSU2_TR(0x669026);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B669027:{NFSU2_TR(0x669027);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B669028:{NFSU2_TR(0x669028);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66902a:{NFSU2_TR(0x66902a);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B66902d:{NFSU2_TR(0x66902d);
if(r1(R+518)){{goto L669037;}}
}
B66902f:L66902f:{c.instructions+=1;NFSU2_TR(0x66902f);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x178ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x669035ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B669035:L669035:{c.instructions+=1;NFSU2_TR(0x669035);
{goto L66903d;}
}
B669037:L669037:{c.instructions+=1;NFSU2_TR(0x669037);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1b4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x66903dull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B66903d:L66903d:{c.instructions+=2;NFSU2_TR(0x66903d);
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
B66903f:{NFSU2_TR(0x66903f);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L66919a;}}
}
B669045:L669045:{c.instructions+=3;NFSU2_TR(0x669045);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4eull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+0),(U+4),2);
}
B669049:{NFSU2_TR(0x669049);
u8 U[10];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x36ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((U+6),(U+4),2);
w2(U+8,u16(u32(r2(R+0))-u32(r2(U+6))));
w1(R+518,u8((r2(U+8))==(u16(0x0ull))));
}
B66904d:{NFSU2_TR(0x66904d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L669056;}}
}
B66904f:L66904f:{c.instructions+=2;NFSU2_TR(0x66904f);
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
B669051:{NFSU2_TR(0x669051);
{goto L66919a;}
}
B669056:L669056:{c.instructions+=6;NFSU2_TR(0x669056);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B66905a:{NFSU2_TR(0x66905a);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x64ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B66905d:{NFSU2_TR(0x66905d);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))+u32(r4(U+4))));
}
B669060:{NFSU2_TR(0x669060);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(R+24))<(r4(U+0))));
}
B669062:{NFSU2_TR(0x669062);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B669065:{NFSU2_TR(0x669065);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L6690de;}}
}
B669067:L669067:{c.instructions+=2;NFSU2_TR(0x669067);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B66906a:{NFSU2_TR(0x66906a);
if(r1(R+518)){{goto L6690a6;}}
}
B66906c:L66906c:{c.instructions+=20;NFSU2_TR(0x66906c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B66906f:{NFSU2_TR(0x66906f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+24)),r4(U+0));
}
B669071:{NFSU2_TR(0x669071);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B669077:{NFSU2_TR(0x669077);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B66907a:{NFSU2_TR(0x66907a);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B66907d:{NFSU2_TR(0x66907d);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B669080:{NFSU2_TR(0x669080);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B669083:{NFSU2_TR(0x669083);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B669084:{NFSU2_TR(0x669084);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B669087:{NFSU2_TR(0x669087);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B66908a:{NFSU2_TR(0x66908a);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x56ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B66908e:{NFSU2_TR(0x66908e);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B669091:{NFSU2_TR(0x669091);
__builtin_memmove((R+4),(R+28),4);
}
B669093:{NFSU2_TR(0x669093);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B669094:{NFSU2_TR(0x669094);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B669097:{NFSU2_TR(0x669097);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
w4(R+0,u32(u32(r4(R+0))+u32(r4(U+0))));
}
B669099:{NFSU2_TR(0x669099);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66909a:{NFSU2_TR(0x66909a);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B66909d:{NFSU2_TR(0x66909d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66909e:{NFSU2_TR(0x66909e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6690a3ull));
TAIL_STATIC(0x662795u,662);
}
B6690a3:L6690a3:{c.instructions+=1;NFSU2_TR(0x6690a3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6690a6:L6690a6:{c.instructions+=3;NFSU2_TR(0x6690a6);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x64ull))));
}
B6690a9:{NFSU2_TR(0x6690a9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(R+24))<(r4(U+0))));
}
B6690ab:{NFSU2_TR(0x6690ab);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x669067u);}goto L669067;}}
}
B6690ad:L6690ad:{c.instructions+=11;NFSU2_TR(0x6690ad);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x56ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(r2(U+4)));
}
B6690b1:{NFSU2_TR(0x6690b1);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6690b4:{NFSU2_TR(0x6690b4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
w4(R+0,u32(u32(r4(R+0))+u32(r4(U+0))));
}
B6690b6:{NFSU2_TR(0x6690b6);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
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
B6690ba:{NFSU2_TR(0x6690ba);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6690bd:{NFSU2_TR(0x6690bd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6690bf:{NFSU2_TR(0x6690bf);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6690c0:{NFSU2_TR(0x6690c0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6690c1:{NFSU2_TR(0x6690c1);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6690c3:{NFSU2_TR(0x6690c3);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6690c6:{NFSU2_TR(0x6690c6);
if(r1(R+518)){{goto L6690d0;}}
}
B6690c8:L6690c8:{c.instructions+=1;NFSU2_TR(0x6690c8);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x180ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6690ceull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6690ce:L6690ce:{c.instructions+=1;NFSU2_TR(0x6690ce);
{goto L6690d6;}
}
B6690d0:L6690d0:{c.instructions+=1;NFSU2_TR(0x6690d0);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1bcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6690d6ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6690d6:L6690d6:{c.instructions+=2;NFSU2_TR(0x6690d6);
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
B6690d8:{NFSU2_TR(0x6690d8);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L66919a;}}
}
B6690de:L6690de:{c.instructions+=6;NFSU2_TR(0x6690de);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x5aull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B6690e2:{NFSU2_TR(0x6690e2);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x64ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B6690e5:{NFSU2_TR(0x6690e5);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))+u32(r4(U+4))));
}
B6690e8:{NFSU2_TR(0x6690e8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(R+24))<(r4(U+0))));
}
B6690ea:{NFSU2_TR(0x6690ea);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6690ed:{NFSU2_TR(0x6690ed);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L669162;}}
}
B6690ef:L6690ef:{c.instructions+=2;NFSU2_TR(0x6690ef);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B6690f2:{NFSU2_TR(0x6690f2);
if(r1(R+518)){{goto L66912e;}}
}
B6690f4:L6690f4:{c.instructions+=20;NFSU2_TR(0x6690f4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6690f7:{NFSU2_TR(0x6690f7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+24)),r4(U+0));
}
B6690f9:{NFSU2_TR(0x6690f9);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6690ff:{NFSU2_TR(0x6690ff);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B669102:{NFSU2_TR(0x669102);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B669105:{NFSU2_TR(0x669105);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B669108:{NFSU2_TR(0x669108);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B66910b:{NFSU2_TR(0x66910b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66910c:{NFSU2_TR(0x66910c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B66910f:{NFSU2_TR(0x66910f);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B669112:{NFSU2_TR(0x669112);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x56ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B669116:{NFSU2_TR(0x669116);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B669119:{NFSU2_TR(0x669119);
__builtin_memmove((R+4),(R+28),4);
}
B66911b:{NFSU2_TR(0x66911b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66911c:{NFSU2_TR(0x66911c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B66911f:{NFSU2_TR(0x66911f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
w4(R+0,u32(u32(r4(R+0))+u32(r4(U+0))));
}
B669121:{NFSU2_TR(0x669121);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B669122:{NFSU2_TR(0x669122);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B669125:{NFSU2_TR(0x669125);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B669126:{NFSU2_TR(0x669126);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x66912bull));
TAIL_STATIC(0x662b9bu,662);
}
B66912b:L66912b:{c.instructions+=1;NFSU2_TR(0x66912b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B66912e:L66912e:{c.instructions+=3;NFSU2_TR(0x66912e);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x64ull))));
}
B669131:{NFSU2_TR(0x669131);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(R+24))<(r4(U+0))));
}
B669133:{NFSU2_TR(0x669133);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6690efu);}goto L6690ef;}}
}
B669135:L669135:{c.instructions+=11;NFSU2_TR(0x669135);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(r2(U+4)));
}
B669139:{NFSU2_TR(0x669139);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B66913c:{NFSU2_TR(0x66913c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
w4(R+0,u32(u32(r4(R+0))+u32(r4(U+0))));
}
B66913e:{NFSU2_TR(0x66913e);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
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
B669142:{NFSU2_TR(0x669142);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B669145:{NFSU2_TR(0x669145);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+4),(U+0),4);
}
B669147:{NFSU2_TR(0x669147);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B669148:{NFSU2_TR(0x669148);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B669149:{NFSU2_TR(0x669149);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66914b:{NFSU2_TR(0x66914b);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B66914e:{NFSU2_TR(0x66914e);
if(r1(R+518)){{goto L669158;}}
}
B669150:L669150:{c.instructions+=1;NFSU2_TR(0x669150);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x188ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x669156ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B669156:L669156:{c.instructions+=1;NFSU2_TR(0x669156);
{goto L66915e;}
}
B669158:L669158:{c.instructions+=1;NFSU2_TR(0x669158);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1c4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x66915eull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B66915e:L66915e:{c.instructions+=2;NFSU2_TR(0x66915e);
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
B669160:{NFSU2_TR(0x669160);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L66919a;}}
}
B669162:L669162:{c.instructions+=5;NFSU2_TR(0x669162);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B669166:{NFSU2_TR(0x669166);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x64ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B669169:{NFSU2_TR(0x669169);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))+u32(r4(U+4))));
}
B66916c:{NFSU2_TR(0x66916c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(R+24))<(r4(U+0))));
}
B66916e:{NFSU2_TR(0x66916e);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x66904fu);}goto L66904f;}}
}
B669174:L669174:{c.instructions+=5;NFSU2_TR(0x669174);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B669175:{NFSU2_TR(0x669175);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B669176:{NFSU2_TR(0x669176);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B669177:{NFSU2_TR(0x669177);
__builtin_memmove((R+4),(R+28),4);
}
B669179:{NFSU2_TR(0x669179);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x66917eull));
TAIL_STATIC(0x668cc0u,668);
}
B66917e:L66917e:{c.instructions+=1;NFSU2_TR(0x66917e);
{goto L66919a;}
}
B669180:L669180:{c.instructions+=11;NFSU2_TR(0x669180);
u8 U[4];
w4(U+0,u32(0xffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B669185:{NFSU2_TR(0x669185);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B669187:{NFSU2_TR(0x669187);
__builtin_memmove((R+0),(R+12),4);
}
B669189:{NFSU2_TR(0x669189);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))-u32(r4(U+4))));
}
B66918c:{NFSU2_TR(0x66918c);
u8 U[4];
w4(U+0,u32(0x64ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66918e:{NFSU2_TR(0x66918e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B66918f:{NFSU2_TR(0x66918f);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B669190:{NFSU2_TR(0x669190);
u8 U[56];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x669190);w8(U+40,u64(x_/y_));}
w4(R+0,u32(r8(U+40)));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x669190);w8(U+48,u64(x_%y_));}
w4(R+8,u32(r8(U+48)));
}
B669192:{NFSU2_TR(0x669192);
__builtin_memmove((R+4),(R+28),4);
}
B669194:{NFSU2_TR(0x669194);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B669195:{NFSU2_TR(0x669195);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x66919aull));
{goto L669286;}
}
B66919a:L66919a:{c.instructions+=5;NFSU2_TR(0x66919a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B66919b:{NFSU2_TR(0x66919b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B66919c:{NFSU2_TR(0x66919c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B66919d:{NFSU2_TR(0x66919d);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B66919e:{NFSU2_TR(0x66919e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6691a1:L6691a1:{c.instructions+=13;NFSU2_TR(0x6691a1);
__builtin_memmove((R+28),(R+28),4);
}
B6691a3:{NFSU2_TR(0x6691a3);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6691a4:{NFSU2_TR(0x6691a4);
__builtin_memmove((R+20),(R+16),4);
}
B6691a6:{NFSU2_TR(0x6691a6);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6691a7:{NFSU2_TR(0x6691a7);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+12,u32(r2(U+4)));
}
B6691ab:{NFSU2_TR(0x6691ab);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6691ac:{NFSU2_TR(0x6691ac);
__builtin_memmove((R+24),(R+12),4);
}
B6691ae:{NFSU2_TR(0x6691ae);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+24)))));
w8(U+8,u64(s64(s32(u32(0x64ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+24,u32(r8(U+16)));
}
B6691b1:{NFSU2_TR(0x6691b1);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6691b2:{NFSU2_TR(0x6691b2);
__builtin_memmove((R+28),(R+4),4);
}
B6691b4:{NFSU2_TR(0x6691b4);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+24,u32(u32(r4(R+24))+u32(r4(U+4))));
}
B6691b7:{NFSU2_TR(0x6691b7);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x118ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x8ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B6691be:{NFSU2_TR(0x6691be);
if(r1(R+518)){{goto L6691fc;}}
}
B6691c0:L6691c0:{c.instructions+=7;NFSU2_TR(0x6691c0);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((R+0),(U+0),4);
}
B6691c3:{NFSU2_TR(0x6691c3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6691c4:{NFSU2_TR(0x6691c4);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6691c6:{NFSU2_TR(0x6691c6);
u8 U[10];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((U+6),(U+4),2);
w2(U+8,u16(u32(r2(U+6))-u32(u16(0xffffull))));
w1(R+518,u8((r2(U+8))==(u16(0x0ull))));
}
B6691cc:{NFSU2_TR(0x6691cc);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+0),(U+0),1);
}
B6691cf:{NFSU2_TR(0x6691cf);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6691d0:{NFSU2_TR(0x6691d0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6691d5ull));
TAIL_STATIC(0x66403cu,664);
}
B6691d5:L6691d5:{c.instructions+=2;NFSU2_TR(0x6691d5);
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
B6691d7:{NFSU2_TR(0x6691d7);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L66927f;}}
}
B6691dd:L6691dd:{c.instructions+=8;NFSU2_TR(0x6691dd);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6691e0:{NFSU2_TR(0x6691e0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6691e1:{NFSU2_TR(0x6691e1);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6691e3:{NFSU2_TR(0x6691e3);
u8 U[10];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1aull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((U+6),(U+4),2);
w2(U+8,u16(u32(r2(U+6))-u32(u16(0xffffull))));
w1(R+518,u8((r2(U+8))==(u16(0x0ull))));
}
B6691e9:{NFSU2_TR(0x6691e9);
__builtin_memmove((R+4),(R+28),4);
}
B6691eb:{NFSU2_TR(0x6691eb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+0),(U+0),1);
}
B6691ee:{NFSU2_TR(0x6691ee);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6691ef:{NFSU2_TR(0x6691ef);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6691f4ull));
TAIL_STATIC(0x664197u,664);
}
B6691f4:L6691f4:{c.instructions+=2;NFSU2_TR(0x6691f4);
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
B6691f6:{NFSU2_TR(0x6691f6);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L66927f;}}
}
B6691fc:L6691fc:{c.instructions+=2;NFSU2_TR(0x6691fc);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x8ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B669200:{NFSU2_TR(0x669200);
if(r1(R+518)){{goto L669216;}}
}
B669202:L669202:{c.instructions+=4;NFSU2_TR(0x669202);
u8 U[10];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((U+6),(U+4),2);
w2(U+8,u16(u32(r2(U+6))-u32(u16(0xffffull))));
w1(R+518,u8((r2(U+8))==(u16(0x0ull))));
}
B669208:{NFSU2_TR(0x669208);
__builtin_memmove((R+4),(R+28),4);
}
B66920a:{NFSU2_TR(0x66920a);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66920b:{NFSU2_TR(0x66920b);
if(r1(R+518)){{goto L66922c;}}
}
B66920d:L66920d:{c.instructions+=1;NFSU2_TR(0x66920d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x669212ull));
TAIL_STATIC(0x666df7u,666);
}
B669212:L669212:{c.instructions+=2;NFSU2_TR(0x669212);
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
B669214:{NFSU2_TR(0x669214);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L66927f;}}
}
B669216:L669216:{c.instructions+=2;NFSU2_TR(0x669216);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B66921a:{NFSU2_TR(0x66921a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L669256;}}
}
B66921c:L66921c:{c.instructions+=2;NFSU2_TR(0x66921c);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B669220:{NFSU2_TR(0x669220);
if(r1(R+518)){{goto L669233;}}
}
B669222:L669222:{c.instructions+=3;NFSU2_TR(0x669222);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B669223:{NFSU2_TR(0x669223);
__builtin_memmove((R+4),(R+28),4);
}
B669225:{NFSU2_TR(0x669225);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x66922aull));
TAIL_STATIC(0x668dfdu,668);
}
B66922a:L66922a:{c.instructions+=1;NFSU2_TR(0x66922a);
{goto L66927f;}
}
B66922c:L66922c:{c.instructions+=1;NFSU2_TR(0x66922c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x669231ull));
TAIL_STATIC(0x667d51u,667);
}
B669231:L669231:{c.instructions+=1;NFSU2_TR(0x669231);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x669212u);}goto L669212;}
}
B669233:L669233:{c.instructions+=3;NFSU2_TR(0x669233);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B669235:{NFSU2_TR(0x669235);
u8 U[10];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x36ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((U+6),(U+4),2);
w1(R+512,u8((r2(U+6))<(r2(R+12))));
w2(U+8,u16(u32(r2(U+6))-u32(r2(R+12))));
w1(R+518,u8((r2(U+8))==(u16(0x0ull))));
}
B669239:{NFSU2_TR(0x669239);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L66927d;}}
}
B66923b:L66923b:{c.instructions+=5;NFSU2_TR(0x66923b);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B66923e:{NFSU2_TR(0x66923e);
__builtin_memmove((R+4),(R+28),4);
}
B669240:{NFSU2_TR(0x669240);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B669241:{NFSU2_TR(0x669241);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B669244:{NFSU2_TR(0x669244);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x669249ull));
{goto L669286;}
}
B669249:L669249:{c.instructions+=2;NFSU2_TR(0x669249);
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
B66924b:{NFSU2_TR(0x66924b);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L66927f;}}
}
B66924d:L66924d:{c.instructions+=3;NFSU2_TR(0x66924d);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B66924e:{NFSU2_TR(0x66924e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x36ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((U+6),(U+4),2);
w1(R+512,u8((r2(R+12))<(r2(U+6))));
}
B669252:{NFSU2_TR(0x669252);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x66923bu);}goto L66923b;}}
}
B669254:L669254:{c.instructions+=1;NFSU2_TR(0x669254);
{goto L66927d;}
}
B669256:L669256:{c.instructions+=3;NFSU2_TR(0x669256);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B669258:{NFSU2_TR(0x669258);
u8 U[10];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x36ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((U+6),(U+4),2);
w1(R+512,u8((r2(U+6))<(r2(R+12))));
w2(U+8,u16(u32(r2(U+6))-u32(r2(R+12))));
w1(R+518,u8((r2(U+8))==(u16(0x0ull))));
}
B66925c:{NFSU2_TR(0x66925c);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L66927d;}}
}
B66925e:L66925e:{c.instructions+=5;NFSU2_TR(0x66925e);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B669261:{NFSU2_TR(0x669261);
__builtin_memmove((R+4),(R+28),4);
}
B669263:{NFSU2_TR(0x669263);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B669264:{NFSU2_TR(0x669264);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B669267:{NFSU2_TR(0x669267);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x66926cull));
{goto L669286;}
}
B66926c:L66926c:{c.instructions+=2;NFSU2_TR(0x66926c);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B66926e:{NFSU2_TR(0x66926e);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L669276;}}
}
B669270:L669270:{c.instructions+=2;NFSU2_TR(0x669270);
u8 U[22];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x3cull))));
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
B669274:{NFSU2_TR(0x669274);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L66927f;}}
}
B669276:L669276:{c.instructions+=3;NFSU2_TR(0x669276);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B669277:{NFSU2_TR(0x669277);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x36ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((U+6),(U+4),2);
w1(R+512,u8((r2(R+12))<(r2(U+6))));
}
B66927b:{NFSU2_TR(0x66927b);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x66925eu);}goto L66925e;}}
}
B66927d:L66927d:{c.instructions+=1;NFSU2_TR(0x66927d);
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
B66927f:L66927f:{c.instructions+=5;NFSU2_TR(0x66927f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B669280:{NFSU2_TR(0x669280);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B669281:{NFSU2_TR(0x669281);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B669282:{NFSU2_TR(0x669282);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B669283:{NFSU2_TR(0x669283);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B669286:L669286:{c.instructions+=19;NFSU2_TR(0x669286);
__builtin_memmove((R+28),(R+28),4);
}
B669288:{NFSU2_TR(0x669288);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B669289:{NFSU2_TR(0x669289);
__builtin_memmove((R+20),(R+16),4);
}
B66928b:{NFSU2_TR(0x66928b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x158ull))));
}
B669291:{NFSU2_TR(0x669291);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B669295:{NFSU2_TR(0x669295);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B669299:{NFSU2_TR(0x669299);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x64ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B66929c:{NFSU2_TR(0x66929c);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66929d:{NFSU2_TR(0x66929d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66929e:{NFSU2_TR(0x66929e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66929f:{NFSU2_TR(0x66929f);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+28,u32(r2(U+4)));
}
B6692a3:{NFSU2_TR(0x6692a3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6692a6:{NFSU2_TR(0x6692a6);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+28)))));
w8(U+8,u64(s64(s32(u32(0x64ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+28,u32(r8(U+16)));
}
B6692a9:{NFSU2_TR(0x6692a9);
__builtin_memmove((R+12),(R+4),4);
}
B6692ab:{NFSU2_TR(0x6692ab);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+28,u32(u32(r4(R+28))+u32(r4(U+4))));
}
B6692ae:{NFSU2_TR(0x6692ae);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))+u32(r4(U+4))));
}
B6692b1:{NFSU2_TR(0x6692b1);
u8 U[10];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((U+6),(U+4),2);
w2(U+8,u16(u32(r2(U+6))-u32(u16(0xffffull))));
w1(R+518,u8((r2(U+8))==(u16(0x0ull))));
}
B6692b7:{NFSU2_TR(0x6692b7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6692ba:{NFSU2_TR(0x6692ba);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6692c4;}}
}
B6692bc:L6692bc:{c.instructions+=2;NFSU2_TR(0x6692bc);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+4),(U+4),2);
}
B6692c0:{NFSU2_TR(0x6692c0);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4),2);
s2(u32(r4(U+0)),r2(U+4));
}
B6692c4:L6692c4:{c.instructions+=6;NFSU2_TR(0x6692c4);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6692c7:{NFSU2_TR(0x6692c7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
w4(R+24,u32(u32(r4(R+24))+u32(r4(U+0))));
}
B6692c9:{NFSU2_TR(0x6692c9);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B6692cc:{NFSU2_TR(0x6692cc);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6692cf:{NFSU2_TR(0x6692cf);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6692d2:{NFSU2_TR(0x6692d2);
if(r1(R+518)){{goto L66985e;}}
}
B6692d8:L6692d8:{c.instructions+=5;NFSU2_TR(0x6692d8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6692db:{NFSU2_TR(0x6692db);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B6692de:{NFSU2_TR(0x6692de);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(U+0))<(u32(0xdull))));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xdull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6692e1:{NFSU2_TR(0x6692e1);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+0)),r4(U+0));
}
B6692e3:{NFSU2_TR(0x6692e3);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L669723;}}
}
B6692e9:L6692e9:{c.instructions+=2;NFSU2_TR(0x6692e9);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(U+0))<(u32(0xcull))));
}
B6692ec:{NFSU2_TR(0x6692ec);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L669605;}}
}
B6692f2:L6692f2:{c.instructions+=2;NFSU2_TR(0x6692f2);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x3ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B6692f5:{NFSU2_TR(0x6692f5);
if(r1(R+518)){{goto L669514;}}
}
B6692fb:L6692fb:{c.instructions+=2;NFSU2_TR(0x6692fb);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x6ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B6692fe:{NFSU2_TR(0x6692fe);
if(r1(R+518)){{goto L66941a;}}
}
B669304:L669304:{c.instructions+=2;NFSU2_TR(0x669304);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B669305:{NFSU2_TR(0x669305);
if(r1(R+518)){{goto L6693b6;}}
}
B66930b:L66930b:{c.instructions+=2;NFSU2_TR(0x66930b);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B66930c:{NFSU2_TR(0x66930c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L669844;}}
}
B669312:L669312:{c.instructions+=8;NFSU2_TR(0x669312);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B669315:{NFSU2_TR(0x669315);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B66931b:{NFSU2_TR(0x66931b);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B66931e:{NFSU2_TR(0x66931e);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B669321:{NFSU2_TR(0x669321);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B669323:{NFSU2_TR(0x669323);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B669326:{NFSU2_TR(0x669326);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B669328:{NFSU2_TR(0x669328);
if(r1(R+518)){{goto L669330;}}
}
B66932a:L66932a:{c.instructions+=2;NFSU2_TR(0x66932a);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B66932d:{NFSU2_TR(0x66932d);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B669330:L669330:{c.instructions+=4;NFSU2_TR(0x669330);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B669333:{NFSU2_TR(0x669333);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B669336:{NFSU2_TR(0x669336);
u8 U[24];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x8ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((U+16),(U+12),4);
w4(U+20,u32(u32(r4(U+16))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+20))==(u32(0x0ull))));
}
B66933b:{NFSU2_TR(0x66933b);
if(r1(R+518)){{goto L66985e;}}
}
B669341:L669341:{c.instructions+=10;NFSU2_TR(0x669341);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x42ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+0),(U+4),2);
}
B669345:{NFSU2_TR(0x669345);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B669347:{NFSU2_TR(0x669347);
u8 U[10];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((U+6),(U+4),2);
w2(U+8,u16(u32(r2(R+0))-u32(r2(U+6))));
w1(R+518,u8((r2(U+8))==(u16(0x0ull))));
}
B66934b:{NFSU2_TR(0x66934b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+4),(U+0),1);
}
B66934e:{NFSU2_TR(0x66934e);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
}
B66934f:{NFSU2_TR(0x66934f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B669350:{NFSU2_TR(0x669350);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B669352:{NFSU2_TR(0x669352);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B669355:{NFSU2_TR(0x669355);
__builtin_memmove((R+4),(R+12),4);
}
B669357:{NFSU2_TR(0x669357);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x66935cull));
TAIL_STATIC(0x65ae25u,65a);
}
B66935c:L66935c:{c.instructions+=3;NFSU2_TR(0x66935c);
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
B66935e:{NFSU2_TR(0x66935e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B669361:{NFSU2_TR(0x669361);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x66a1ddu,66a);}
}
B669367:L669367:{c.instructions+=3;NFSU2_TR(0x669367);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B66936a:{NFSU2_TR(0x66936a);
__builtin_memmove((R+4),(R+12),4);
}
B66936c:{NFSU2_TR(0x66936c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x669371ull));
TAIL_STATIC(0x667d51u,667);
}
B669371:L669371:{c.instructions+=3;NFSU2_TR(0x669371);
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
B669373:{NFSU2_TR(0x669373);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B669376:{NFSU2_TR(0x669376);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x66a1ddu,66a);}
}
B66937c:L66937c:{c.instructions+=10;NFSU2_TR(0x66937c);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x42ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+0),(U+4),2);
}
B669380:{NFSU2_TR(0x669380);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w2(R+0,u16(u32(r2(R+0))-u32(r2(U+4))));
}
B669384:{NFSU2_TR(0x669384);
__builtin_memmove((R+4),(R+12),4);
}
B669386:{NFSU2_TR(0x669386);
w1(R+512,u8((r2(R+0))!=(u16(0x0ull))));
w2(R+0,u16(0-u32(r2(R+0))));
}
B669389:{NFSU2_TR(0x669389);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(R+0))));
w4(R+0,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B66938b:{NFSU2_TR(0x66938b);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B66938c:{NFSU2_TR(0x66938c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66938d:{NFSU2_TR(0x66938d);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66938f:{NFSU2_TR(0x66938f);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B669392:{NFSU2_TR(0x669392);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x669397ull));
TAIL_STATIC(0x65ae25u,65a);
}
B669397:L669397:{c.instructions+=3;NFSU2_TR(0x669397);
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
B669399:{NFSU2_TR(0x669399);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66939c:{NFSU2_TR(0x66939c);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x66a1ddu,66a);}
}
B6693a2:L6693a2:{c.instructions+=2;NFSU2_TR(0x6693a2);
u8 U[4];
w4(U+0,u32(0xffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6693a7:{NFSU2_TR(0x6693a7);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6693aa:L6693aa:{c.instructions+=2;NFSU2_TR(0x6693aa);
__builtin_memmove((R+4),(R+12),4);
}
B6693ac:{NFSU2_TR(0x6693ac);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6693b1ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6691a1u);}goto L6691a1;}
}
B6693b1:L6693b1:{c.instructions+=1;NFSU2_TR(0x6693b1);
{goto L669fd5;}
}
B6693b6:L6693b6:{c.instructions+=8;NFSU2_TR(0x6693b6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6693b9:{NFSU2_TR(0x6693b9);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6693bf:{NFSU2_TR(0x6693bf);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6693c2:{NFSU2_TR(0x6693c2);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6693c5:{NFSU2_TR(0x6693c5);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6693c7:{NFSU2_TR(0x6693c7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6693ca:{NFSU2_TR(0x6693ca);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6693cc:{NFSU2_TR(0x6693cc);
if(r1(R+518)){{goto L6693d4;}}
}
B6693ce:L6693ce:{c.instructions+=2;NFSU2_TR(0x6693ce);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6693d1:{NFSU2_TR(0x6693d1);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6693d4:L6693d4:{c.instructions+=4;NFSU2_TR(0x6693d4);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6693d7:{NFSU2_TR(0x6693d7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B6693da:{NFSU2_TR(0x6693da);
u8 U[24];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x8ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((U+16),(U+12),4);
w4(U+20,u32(u32(r4(U+16))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+20))==(u32(0x0ull))));
}
B6693df:{NFSU2_TR(0x6693df);
if(r1(R+518)){{goto L66985e;}}
}
B6693e5:L6693e5:{c.instructions+=10;NFSU2_TR(0x6693e5);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x42ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+0),(U+4),2);
}
B6693e9:{NFSU2_TR(0x6693e9);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B6693eb:{NFSU2_TR(0x6693eb);
u8 U[10];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((U+6),(U+4),2);
w2(U+8,u16(u32(r2(R+0))-u32(r2(U+6))));
w1(R+518,u8((r2(U+8))==(u16(0x0ull))));
}
B6693ef:{NFSU2_TR(0x6693ef);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+4),(U+0),1);
}
B6693f2:{NFSU2_TR(0x6693f2);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
}
B6693f3:{NFSU2_TR(0x6693f3);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6693f4:{NFSU2_TR(0x6693f4);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6693f6:{NFSU2_TR(0x6693f6);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6693f9:{NFSU2_TR(0x6693f9);
__builtin_memmove((R+4),(R+12),4);
}
B6693fb:{NFSU2_TR(0x6693fb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x669400ull));
TAIL_STATIC(0x65ae25u,65a);
}
B669400:L669400:{c.instructions+=3;NFSU2_TR(0x669400);
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
B669402:{NFSU2_TR(0x669402);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B669405:{NFSU2_TR(0x669405);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x66a1ddu,66a);}
}
B66940b:L66940b:{c.instructions+=3;NFSU2_TR(0x66940b);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B66940e:{NFSU2_TR(0x66940e);
__builtin_memmove((R+4),(R+12),4);
}
B669410:{NFSU2_TR(0x669410);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x669415ull));
TAIL_STATIC(0x666df7u,666);
}
B669415:L669415:{c.instructions+=1;NFSU2_TR(0x669415);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x669371u);}goto L669371;}
}
B66941a:L66941a:{c.instructions+=2;NFSU2_TR(0x66941a);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B66941e:{NFSU2_TR(0x66941e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L66985e;}}
}
B669424:L669424:{c.instructions+=2;NFSU2_TR(0x669424);
u8 U[10];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((U+6),(U+4),2);
w2(U+8,u16(u32(r2(U+6))-u32(u16(0xffffull))));
w1(R+518,u8((r2(U+8))==(u16(0x0ull))));
}
B66942a:{NFSU2_TR(0x66942a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L66985e;}}
}
B669430:L669430:{c.instructions+=6;NFSU2_TR(0x669430);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x3eull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(r2(U+4)));
}
B669434:{NFSU2_TR(0x669434);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B66943a:{NFSU2_TR(0x66943a);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B66943d:{NFSU2_TR(0x66943d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B669440:{NFSU2_TR(0x669440);
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
B669442:{NFSU2_TR(0x669442);
if(r1(R+518)){TAIL_STATIC(0x66a1ddu,66a);}
}
B669448:L669448:{c.instructions+=1;NFSU2_TR(0x669448);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B66944b:L66944b:{c.instructions+=12;NFSU2_TR(0x66944b);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B66944e:{NFSU2_TR(0x66944e);
u8 U[6];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B669452:{NFSU2_TR(0x669452);
u8 U[6];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x16ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(r2(U+4)));
}
B669456:{NFSU2_TR(0x669456);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x64ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B669459:{NFSU2_TR(0x669459);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))+u32(r4(U+4))));
}
B66945c:{NFSU2_TR(0x66945c);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(u32(0x64ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B66945f:{NFSU2_TR(0x66945f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+4,u32(u32(r4(R+4))+u32(r4(U+4))));
}
B669462:{NFSU2_TR(0x669462);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B669465:{NFSU2_TR(0x669465);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B669468:{NFSU2_TR(0x669468);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
w4(R+24,u32(u32(r4(R+24))+u32(r4(U+0))));
}
B66946a:{NFSU2_TR(0x66946a);
u8 U[10];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((U+6),(U+4),2);
w2(U+8,u16(u32(r2(U+6))-u32(u16(0x0ull))));
w1(R+518,u8((r2(U+8))==(u16(0x0ull))));
}
B66946f:{NFSU2_TR(0x66946f);
if(r1(R+518)){{goto L6694f6;}}
}
B669475:L669475:{c.instructions+=7;NFSU2_TR(0x669475);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B669479:{NFSU2_TR(0x669479);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+24))),2);
w4(R+24,u32(r2(U+0)));
}
B66947c:{NFSU2_TR(0x66947c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66947f:{NFSU2_TR(0x66947f);
u8 U[12];
w4(U+0,u32(u32(u32(0xffffffffull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B669483:{NFSU2_TR(0x669483);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+8)));
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B669486:{NFSU2_TR(0x669486);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B669489:{NFSU2_TR(0x669489);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L6694f6;}}
}
B66948b:L66948b:{c.instructions+=6;NFSU2_TR(0x66948b);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x56ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B66948f:{NFSU2_TR(0x66948f);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+24))));
}
B669491:{NFSU2_TR(0x669491);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B669494:{NFSU2_TR(0x669494);
u8 U[12];
w4(U+0,u32(u32(u32(0xffffffffull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B669498:{NFSU2_TR(0x669498);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(U+8),r4(R+0)));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B66949b:{NFSU2_TR(0x66949b);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L6694f6;}}
}
B66949d:L66949d:{c.instructions+=9;NFSU2_TR(0x66949d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6694a0:{NFSU2_TR(0x6694a0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6694a3:{NFSU2_TR(0x6694a3);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6694a9:{NFSU2_TR(0x6694a9);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B6694ac:{NFSU2_TR(0x6694ac);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6694af:{NFSU2_TR(0x6694af);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6694b1:{NFSU2_TR(0x6694b1);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6694b4:{NFSU2_TR(0x6694b4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6694b6:{NFSU2_TR(0x6694b6);
if(r1(R+518)){{goto L6694be;}}
}
B6694b8:L6694b8:{c.instructions+=2;NFSU2_TR(0x6694b8);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6694bb:{NFSU2_TR(0x6694bb);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6694be:L6694be:{c.instructions+=13;NFSU2_TR(0x6694be);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6694c1:{NFSU2_TR(0x6694c1);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6694c4:{NFSU2_TR(0x6694c4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6694c6:{NFSU2_TR(0x6694c6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B6694c9:{NFSU2_TR(0x6694c9);
u8 U[20];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x8ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((U+16),(U+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+16));
}
B6694cd:{NFSU2_TR(0x6694cd);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B6694d1:{NFSU2_TR(0x6694d1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))-u32(r4(U+4))));
}
B6694d4:{NFSU2_TR(0x6694d4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6694d7:{NFSU2_TR(0x6694d7);
u8 U[14];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+512,u8((r4(R+0))<(r4(U+4))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+4)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))-u32(r4(U+4))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B6694da:{NFSU2_TR(0x6694da);
u8 U[12];
w4(U+0,u32(u32(u32(0x1ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B6694de:{NFSU2_TR(0x6694de);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6694df:{NFSU2_TR(0x6694df);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6694e2:{NFSU2_TR(0x6694e2);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x104ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6694e8ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6694e8:L6694e8:{c.instructions+=3;NFSU2_TR(0x6694e8);
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
B6694ea:{NFSU2_TR(0x6694ea);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6694ed:{NFSU2_TR(0x6694ed);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x66a1ddu,66a);}
}
B6694f3:L6694f3:{c.instructions+=1;NFSU2_TR(0x6694f3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6694f6:L6694f6:{c.instructions+=6;NFSU2_TR(0x6694f6);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x3eull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(r2(U+4)));
}
B6694fa:{NFSU2_TR(0x6694fa);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B669500:{NFSU2_TR(0x669500);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B669503:{NFSU2_TR(0x669503);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B669506:{NFSU2_TR(0x669506);
u8 U[22];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x34ull))));
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
B669509:{NFSU2_TR(0x669509);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x66944bu);}goto L66944b;}}
}
B66950f:L66950f:{c.instructions+=1;NFSU2_TR(0x66950f);
TAIL_STATIC(0x66a1ddu,66a);
}
B669514:L669514:{c.instructions+=5;NFSU2_TR(0x669514);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B669518:{NFSU2_TR(0x669518);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B669519:{NFSU2_TR(0x669519);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B66951c:{NFSU2_TR(0x66951c);
__builtin_memmove((R+4),(R+12),4);
}
B66951e:{NFSU2_TR(0x66951e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x669523ull));
TAIL_STATIC(0x664a1fu,664);
}
B669523:L669523:{c.instructions+=3;NFSU2_TR(0x669523);
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
B669525:{NFSU2_TR(0x669525);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B669528:{NFSU2_TR(0x669528);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x66a1ddu,66a);}
}
B66952e:L66952e:{c.instructions+=2;NFSU2_TR(0x66952e);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B669532:{NFSU2_TR(0x669532);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L66985e;}}
}
B669538:L669538:{c.instructions+=2;NFSU2_TR(0x669538);
u8 U[10];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((U+6),(U+4),2);
w2(U+8,u16(u32(r2(U+6))-u32(u16(0xffffull))));
w1(R+518,u8((r2(U+8))==(u16(0x0ull))));
}
B66953e:{NFSU2_TR(0x66953e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L66985e;}}
}
B669544:L669544:{c.instructions+=6;NFSU2_TR(0x669544);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x3eull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B669548:{NFSU2_TR(0x669548);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B66954e:{NFSU2_TR(0x66954e);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B669551:{NFSU2_TR(0x669551);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B669554:{NFSU2_TR(0x669554);
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
B669556:{NFSU2_TR(0x669556);
if(r1(R+518)){TAIL_STATIC(0x66a1ddu,66a);}
}
B66955c:L66955c:{c.instructions+=1;NFSU2_TR(0x66955c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B66955f:L66955f:{c.instructions+=12;NFSU2_TR(0x66955f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B669562:{NFSU2_TR(0x669562);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(r2(U+4)));
}
B669566:{NFSU2_TR(0x669566);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B669569:{NFSU2_TR(0x669569);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(u32(0x64ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B66956c:{NFSU2_TR(0x66956c);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x16ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B669570:{NFSU2_TR(0x669570);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+4,u32(u32(r4(R+4))+u32(r4(U+4))));
}
B669573:{NFSU2_TR(0x669573);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x64ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B669576:{NFSU2_TR(0x669576);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))+u32(r4(U+4))));
}
B669579:{NFSU2_TR(0x669579);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B66957c:{NFSU2_TR(0x66957c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
w4(R+8,u32(u32(r4(R+8))+u32(r4(U+0))));
}
B66957e:{NFSU2_TR(0x66957e);
u8 U[10];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((U+6),(U+4),2);
w2(U+8,u16(u32(r2(U+6))-u32(u16(0x0ull))));
w1(R+518,u8((r2(U+8))==(u16(0x0ull))));
}
B669583:{NFSU2_TR(0x669583);
if(r1(R+518)){{goto L6695e4;}}
}
B669585:L669585:{c.instructions+=7;NFSU2_TR(0x669585);
u8 U[6];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(r2(U+4)));
}
B669589:{NFSU2_TR(0x669589);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+8))),2);
w4(R+8,u32(r2(U+0)));
}
B66958c:{NFSU2_TR(0x66958c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66958f:{NFSU2_TR(0x66958f);
u8 U[12];
w4(U+0,u32(u32(u32(0xffffffffull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B669593:{NFSU2_TR(0x669593);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+8)));
w4(U+12,u32(u32(r4(R+4))-u32(r4(U+8))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B669596:{NFSU2_TR(0x669596);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B669599:{NFSU2_TR(0x669599);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L6695e4;}}
}
B66959b:L66959b:{c.instructions+=6;NFSU2_TR(0x66959b);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x56ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(r2(U+4)));
}
B66959f:{NFSU2_TR(0x66959f);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+8))));
}
B6695a1:{NFSU2_TR(0x6695a1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6695a4:{NFSU2_TR(0x6695a4);
u8 U[12];
w4(U+0,u32(u32(u32(0xffffffffull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B6695a8:{NFSU2_TR(0x6695a8);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(U+8),r4(R+4)));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B6695ab:{NFSU2_TR(0x6695ab);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L6695e4;}}
}
B6695ad:L6695ad:{c.instructions+=14;NFSU2_TR(0x6695ad);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B6695b1:{NFSU2_TR(0x6695b1);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+4));
}
B6695b3:{NFSU2_TR(0x6695b3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))-u32(r4(U+4))));
}
B6695b6:{NFSU2_TR(0x6695b6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6695b9:{NFSU2_TR(0x6695b9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))-u32(r4(U+4))));
}
B6695bc:{NFSU2_TR(0x6695bc);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6695bf:{NFSU2_TR(0x6695bf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6695c1:{NFSU2_TR(0x6695c1);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+8,u32(u32(r4(R+8))&u32(u32(0xffffffull))));
w1(R+519,u8(s32(r4(R+8))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+8))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6695c7:{NFSU2_TR(0x6695c7);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6695c8:{NFSU2_TR(0x6695c8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6695cb:{NFSU2_TR(0x6695cb);
u8 U[12];
w4(U+0,u32(u32(u32(0x1ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B6695cf:{NFSU2_TR(0x6695cf);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6695d0:{NFSU2_TR(0x6695d0);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6695d3:{NFSU2_TR(0x6695d3);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x114ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6695d9ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6695d9:L6695d9:{c.instructions+=3;NFSU2_TR(0x6695d9);
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
B6695db:{NFSU2_TR(0x6695db);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6695de:{NFSU2_TR(0x6695de);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x66a1ddu,66a);}
}
B6695e4:L6695e4:{c.instructions+=7;NFSU2_TR(0x6695e4);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x3eull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(r2(U+4)));
}
B6695e8:{NFSU2_TR(0x6695e8);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6695ee:{NFSU2_TR(0x6695ee);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6695f1:{NFSU2_TR(0x6695f1);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6695f4:{NFSU2_TR(0x6695f4);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6695f7:{NFSU2_TR(0x6695f7);
u8 U[22];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x34ull))));
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
B6695fa:{NFSU2_TR(0x6695fa);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x66955fu);}goto L66955f;}}
}
B669600:L669600:{c.instructions+=1;NFSU2_TR(0x669600);
TAIL_STATIC(0x66a1ddu,66a);
}
B669605:L669605:{c.instructions+=6;NFSU2_TR(0x669605);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0xffffffffull))));
s4(u32(r4(U+0)),r4(U+4));
}
B669609:{NFSU2_TR(0x669609);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B66960b:{NFSU2_TR(0x66960b);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B66960e:{NFSU2_TR(0x66960e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B669611:{NFSU2_TR(0x669611);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B669614:{NFSU2_TR(0x669614);
if(r1(R+518)){{goto L6696b3;}}
}
B66961a:L66961a:{c.instructions+=5;NFSU2_TR(0x66961a);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B66961e:{NFSU2_TR(0x66961e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66961f:{NFSU2_TR(0x66961f);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B669622:{NFSU2_TR(0x669622);
__builtin_memmove((R+4),(R+12),4);
}
B669624:{NFSU2_TR(0x669624);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x669629ull));
TAIL_STATIC(0x663a32u,663);
}
B669629:L669629:{c.instructions+=3;NFSU2_TR(0x669629);
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
B66962b:{NFSU2_TR(0x66962b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66962e:{NFSU2_TR(0x66962e);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x66a1ddu,66a);}
}
B669634:L669634:{c.instructions+=5;NFSU2_TR(0x669634);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B669638:{NFSU2_TR(0x669638);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B669639:{NFSU2_TR(0x669639);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B66963c:{NFSU2_TR(0x66963c);
__builtin_memmove((R+4),(R+12),4);
}
B66963e:{NFSU2_TR(0x66963e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x669643ull));
TAIL_STATIC(0x660a42u,660);
}
B669643:L669643:{c.instructions+=3;NFSU2_TR(0x669643);
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
B669645:{NFSU2_TR(0x669645);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B669648:{NFSU2_TR(0x669648);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x66a1ddu,66a);}
}
B66964e:L66964e:{c.instructions+=1;NFSU2_TR(0x66964e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B669651:L669651:{c.instructions+=3;NFSU2_TR(0x669651);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B669654:{NFSU2_TR(0x669654);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xc000000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B66965a:{NFSU2_TR(0x66965a);
if(r1(R+518)){{goto L669700;}}
}
B669660:L669660:{c.instructions+=2;NFSU2_TR(0x669660);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xc010000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B669666:{NFSU2_TR(0x669666);
if(r1(R+518)){{goto L6696dd;}}
}
B669668:L669668:{c.instructions+=2;NFSU2_TR(0x669668);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xc020000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B66966e:{NFSU2_TR(0x66966e);
if(r1(R+518)){{goto L669690;}}
}
B669670:L669670:{c.instructions+=2;NFSU2_TR(0x669670);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xd000000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B669676:{NFSU2_TR(0x669676);
if(r1(R+518)){{goto L669700;}}
}
B66967c:L66967c:{c.instructions+=2;NFSU2_TR(0x66967c);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xd010000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B669682:{NFSU2_TR(0x669682);
if(r1(R+518)){{goto L6696dd;}}
}
B669684:L669684:{c.instructions+=2;NFSU2_TR(0x669684);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xd020000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B66968a:{NFSU2_TR(0x66968a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L66985e;}}
}
B669690:L669690:{c.instructions+=12;NFSU2_TR(0x669690);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B669693:{NFSU2_TR(0x669693);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((R+4),(U+0),4);
}
B669696:{NFSU2_TR(0x669696);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B669697:{NFSU2_TR(0x669697);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B66969a:{NFSU2_TR(0x66969a);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x56ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(r2(U+4)));
}
B66969e:{NFSU2_TR(0x66969e);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6696a1:{NFSU2_TR(0x6696a1);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
}
B6696a4:{NFSU2_TR(0x6696a4);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6696a5:{NFSU2_TR(0x6696a5);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6696a6:{NFSU2_TR(0x6696a6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6696a7:{NFSU2_TR(0x6696a7);
__builtin_memmove((R+4),(R+12),4);
}
B6696a9:{NFSU2_TR(0x6696a9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6696aeull));
TAIL_STATIC(0x662795u,662);
}
B6696ae:L6696ae:{c.instructions+=1;NFSU2_TR(0x6696ae);
{goto L66985e;}
}
B6696b3:L6696b3:{c.instructions+=3;NFSU2_TR(0x6696b3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6696b6:{NFSU2_TR(0x6696b6);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6696b8:{NFSU2_TR(0x6696b8);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x669651u);}goto L669651;}}
}
B6696ba:L6696ba:{c.instructions+=10;NFSU2_TR(0x6696ba);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6696c0:{NFSU2_TR(0x6696c0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6696c3:{NFSU2_TR(0x6696c3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6696c6:{NFSU2_TR(0x6696c6);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6696c9:{NFSU2_TR(0x6696c9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6696cc:{NFSU2_TR(0x6696cc);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6696cf:{NFSU2_TR(0x6696cf);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6696d2:{NFSU2_TR(0x6696d2);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6696d5:{NFSU2_TR(0x6696d5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6696d8:{NFSU2_TR(0x6696d8);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x669651u);}goto L669651;}
}
B6696dd:L6696dd:{c.instructions+=12;NFSU2_TR(0x6696dd);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6696e0:{NFSU2_TR(0x6696e0);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((R+4),(U+0),4);
}
B6696e3:{NFSU2_TR(0x6696e3);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6696e4:{NFSU2_TR(0x6696e4);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6696e7:{NFSU2_TR(0x6696e7);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x56ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(r2(U+4)));
}
B6696eb:{NFSU2_TR(0x6696eb);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6696ee:{NFSU2_TR(0x6696ee);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
}
B6696f1:{NFSU2_TR(0x6696f1);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6696f2:{NFSU2_TR(0x6696f2);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6696f3:{NFSU2_TR(0x6696f3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6696f4:{NFSU2_TR(0x6696f4);
__builtin_memmove((R+4),(R+12),4);
}
B6696f6:{NFSU2_TR(0x6696f6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6696fbull));
TAIL_STATIC(0x662b9bu,662);
}
B6696fb:L6696fb:{c.instructions+=1;NFSU2_TR(0x6696fb);
{goto L66985e;}
}
B669700:L669700:{c.instructions+=12;NFSU2_TR(0x669700);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B669703:{NFSU2_TR(0x669703);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((R+4),(U+0),4);
}
B669706:{NFSU2_TR(0x669706);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B669707:{NFSU2_TR(0x669707);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B66970a:{NFSU2_TR(0x66970a);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x56ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(r2(U+4)));
}
B66970e:{NFSU2_TR(0x66970e);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B669711:{NFSU2_TR(0x669711);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
}
B669714:{NFSU2_TR(0x669714);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B669715:{NFSU2_TR(0x669715);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B669716:{NFSU2_TR(0x669716);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B669717:{NFSU2_TR(0x669717);
__builtin_memmove((R+4),(R+12),4);
}
B669719:{NFSU2_TR(0x669719);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x66971eull));
TAIL_STATIC(0x6623dau,662);
}
B66971e:L66971e:{c.instructions+=1;NFSU2_TR(0x66971e);
{goto L66985e;}
}
B669723:L669723:{c.instructions+=2;NFSU2_TR(0x669723);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(U+0))<(u32(0xeull))));
}
B669726:{NFSU2_TR(0x669726);
if(r1(R+512)){{goto L669844;}}
}
B66972c:L66972c:{c.instructions+=2;NFSU2_TR(0x66972c);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(U+0))<(u32(0xfull))));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xfull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B66972f:{NFSU2_TR(0x66972f);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L669753;}}
}
B669731:L669731:{c.instructions+=2;NFSU2_TR(0x669731);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x10ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B669734:{NFSU2_TR(0x669734);
if(r1(R+518)){{goto L66973f;}}
}
B669736:L669736:{c.instructions+=2;NFSU2_TR(0x669736);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x11ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B669739:{NFSU2_TR(0x669739);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L669844;}}
}
B66973f:L66973f:{c.instructions+=5;NFSU2_TR(0x66973f);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B669743:{NFSU2_TR(0x669743);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B669744:{NFSU2_TR(0x669744);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B669747:{NFSU2_TR(0x669747);
__builtin_memmove((R+4),(R+12),4);
}
B669749:{NFSU2_TR(0x669749);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x66974eull));
TAIL_STATIC(0x663bb1u,663);
}
B66974e:L66974e:{c.instructions+=1;NFSU2_TR(0x66974e);
{goto L669853;}
}
B669753:L669753:{c.instructions+=2;NFSU2_TR(0x669753);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B669757:{NFSU2_TR(0x669757);
if(r1(R+518)){{goto L66985e;}}
}
B66975d:L66975d:{c.instructions+=5;NFSU2_TR(0x66975d);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B669761:{NFSU2_TR(0x669761);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B669762:{NFSU2_TR(0x669762);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B669765:{NFSU2_TR(0x669765);
__builtin_memmove((R+4),(R+12),4);
}
B669767:{NFSU2_TR(0x669767);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x66976cull));
TAIL_STATIC(0x663a32u,663);
}
B66976c:L66976c:{c.instructions+=3;NFSU2_TR(0x66976c);
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
B66976e:{NFSU2_TR(0x66976e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B669771:{NFSU2_TR(0x669771);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x66a1ddu,66a);}
}
B669777:L669777:{c.instructions+=5;NFSU2_TR(0x669777);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B66977a:{NFSU2_TR(0x66977a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B66977d:{NFSU2_TR(0x66977d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B66977f:{NFSU2_TR(0x66977f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B669780:{NFSU2_TR(0x669780);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x669783ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B669783:L669783:{c.instructions+=5;NFSU2_TR(0x669783);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B669786:{NFSU2_TR(0x669786);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+4),(U+0),4);
}
B669788:{NFSU2_TR(0x669788);
{u32 ea_=u32(r4(R+4)+r4(R+0));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B66978b:{NFSU2_TR(0x66978b);
{u32 ea_=u32(u32(8003160u));__asm__ volatile(".byte 0xdc,0x00"::"a"(ea_):"memory");}
}
B669791:{NFSU2_TR(0x669791);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x669796ull));
TAIL_STATIC(0x75dd28u,75d);
}
B669796:L669796:{c.instructions+=4;NFSU2_TR(0x669796);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+4),(U+4),2);
}
B66979a:{NFSU2_TR(0x66979a);
u8 U[4];
__builtin_memmove((U+0),(R+0),2);
w2(U+2,u16(u32(r2(R+4))-u32(r2(U+0))));
w1(R+518,u8((r2(U+2))==(u16(0x0ull))));
}
B66979d:{NFSU2_TR(0x66979d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6697a0:{NFSU2_TR(0x6697a0);
if(r1(R+518)){{goto L669835;}}
}
B6697a6:L6697a6:{c.instructions+=6;NFSU2_TR(0x6697a6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6697a9:{NFSU2_TR(0x6697a9);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6697ac:{NFSU2_TR(0x6697ac);
w4(R+0,u32(r2(R+0)));
}
B6697af:{NFSU2_TR(0x6697af);
u8 U[22];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(r4(R+0))));
w1(R+523,sborrow<u32>(r4(U+14),r4(R+0)));
w4(U+18,u32(u32(r4(U+14))-u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B6697b2:{NFSU2_TR(0x6697b2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6697b5:{NFSU2_TR(0x6697b5);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L669cc7;}}
}
B6697bb:L6697bb:{c.instructions+=3;NFSU2_TR(0x6697bb);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x42ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+0),(U+4),2);
}
B6697bf:{NFSU2_TR(0x6697bf);
u8 U[10];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((U+6),(U+4),2);
w2(U+8,u16(u32(r2(R+0))-u32(r2(U+6))));
w1(R+518,u8((r2(U+8))==(u16(0x0ull))));
}
B6697c3:{NFSU2_TR(0x6697c3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6697d0;}}
}
B6697c5:L6697c5:{c.instructions+=4;NFSU2_TR(0x6697c5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6697c8:{NFSU2_TR(0x6697c8);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x56ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B6697cc:{NFSU2_TR(0x6697cc);
w4(R+0,u32(0-u32(r4(R+0))));
}
B6697ce:{NFSU2_TR(0x6697ce);
{goto L6697d2;}
}
B6697d0:L6697d0:{c.instructions+=1;NFSU2_TR(0x6697d0);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6697d2:L6697d2:{c.instructions+=11;NFSU2_TR(0x6697d2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6697d3:{NFSU2_TR(0x6697d3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6697d6:{NFSU2_TR(0x6697d6);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x56ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(s32(s16(r2(U+4)))));
}
B6697da:{NFSU2_TR(0x6697da);
w2(R+0,u16(0-u32(r2(R+0))));
}
B6697dd:{NFSU2_TR(0x6697dd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6697de:{NFSU2_TR(0x6697de);
w4(R+0,u32(r2(R+4)));
}
B6697e1:{NFSU2_TR(0x6697e1);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+24))),2);
w4(R+4,u32(r2(U+0)));
}
B6697e4:{NFSU2_TR(0x6697e4);
u8 U[12];
w4(U+0,u32(u32(u32(0xffffffffull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B6697e8:{NFSU2_TR(0x6697e8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6697e9:{NFSU2_TR(0x6697e9);
__builtin_memmove((R+4),(R+12),4);
}
B6697eb:{NFSU2_TR(0x6697eb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6697f0ull));
TAIL_STATIC(0x65ae25u,65a);
}
B6697f0:L6697f0:{c.instructions+=3;NFSU2_TR(0x6697f0);
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
B6697f2:{NFSU2_TR(0x6697f2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6697f5:{NFSU2_TR(0x6697f5);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x66a1ddu,66a);}
}
B6697fb:L6697fb:{c.instructions+=5;NFSU2_TR(0x6697fb);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+0),(U+4),2);
}
B6697ff:{NFSU2_TR(0x6697ff);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2ull))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B669803:{NFSU2_TR(0x669803);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x42ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+0),(U+4),2);
}
B669807:{NFSU2_TR(0x669807);
u8 U[10];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((U+6),(U+4),2);
w2(U+8,u16(u32(r2(R+0))-u32(r2(U+6))));
w1(R+518,u8((r2(U+8))==(u16(0x0ull))));
}
B66980b:{NFSU2_TR(0x66980b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L669816;}}
}
B66980d:L66980d:{c.instructions+=3;NFSU2_TR(0x66980d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B669810:{NFSU2_TR(0x669810);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x56ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B669814:{NFSU2_TR(0x669814);
{goto L669818;}
}
B669816:L669816:{c.instructions+=1;NFSU2_TR(0x669816);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B669818:L669818:{c.instructions+=10;NFSU2_TR(0x669818);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B66981b:{NFSU2_TR(0x66981b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66981c:{NFSU2_TR(0x66981c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B66981f:{NFSU2_TR(0x66981f);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x56ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(s32(s16(r2(U+4)))));
}
B669823:{NFSU2_TR(0x669823);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B669824:{NFSU2_TR(0x669824);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+24))),2);
w4(R+0,u32(r2(U+0)));
}
B669827:{NFSU2_TR(0x669827);
u8 U[12];
w4(U+0,u32(u32(u32(0xffffffffull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B66982b:{NFSU2_TR(0x66982b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66982c:{NFSU2_TR(0x66982c);
__builtin_memmove((R+4),(R+12),4);
}
B66982e:{NFSU2_TR(0x66982e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x669833ull));
TAIL_STATIC(0x65ae25u,65a);
}
B669833:L669833:{c.instructions+=1;NFSU2_TR(0x669833);
{goto L669853;}
}
B669835:L669835:{c.instructions+=2;NFSU2_TR(0x669835);
u8 U[9];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x118ull))));
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+8,u8(u32(r1(U+4))&u32(u8(0x4ull))));
w1(R+519,u8(s8(r1(U+8))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+8))==(u8(0x0ull))));
w1(U+5,u8(u32(r1(U+8))&u32(u8(0xffull))));
w1(U+6,u8(__builtin_popcountll(u64(r1(U+5)))));
w1(U+7,u8(u32(r1(U+6))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+7))==(u8(0x0ull))));
}
B66983c:{NFSU2_TR(0x66983c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x66a1ddu,66a);}
}
B669842:L669842:{c.instructions+=1;NFSU2_TR(0x669842);
{goto L66985e;}
}
B669844:L669844:{c.instructions+=5;NFSU2_TR(0x669844);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B669848:{NFSU2_TR(0x669848);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B669849:{NFSU2_TR(0x669849);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B66984c:{NFSU2_TR(0x66984c);
__builtin_memmove((R+4),(R+12),4);
}
B66984e:{NFSU2_TR(0x66984e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x669853ull));
TAIL_STATIC(0x664a1fu,664);
}
B669853:L669853:{c.instructions+=3;NFSU2_TR(0x669853);
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
B669855:{NFSU2_TR(0x669855);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B669858:{NFSU2_TR(0x669858);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x66a1ddu,66a);}
}
B66985e:L66985e:{c.instructions+=6;NFSU2_TR(0x66985e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B669861:{NFSU2_TR(0x669861);
__builtin_memmove((R+0),(R+4),4);
}
B669863:{NFSU2_TR(0x669863);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))&u32(u32(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+0))));
}
B669866:{NFSU2_TR(0x669866);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B669867:{NFSU2_TR(0x669867);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0x10ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x10ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x10ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B66986a:{NFSU2_TR(0x66986a);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){TAIL_STATIC(0x66a1ddu,66a);}
}
B669870:L669870:{c.instructions+=1;NFSU2_TR(0x669870);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x66a1e7ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B669877:L669877:{c.instructions+=8;NFSU2_TR(0x669877);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+4));
}
B669879:{NFSU2_TR(0x669879);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B66987c:{NFSU2_TR(0x66987c);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B66987f:{NFSU2_TR(0x66987f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+4),(U+0),4);
}
B669881:{NFSU2_TR(0x669881);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xffffffull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B669886:{NFSU2_TR(0x669886);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B669887:{NFSU2_TR(0x669887);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B669888:{NFSU2_TR(0x669888);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x66988eull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B66988e:L66988e:{c.instructions+=1;NFSU2_TR(0x66988e);
{goto L669fd5;}
}
B669893:L669893:{c.instructions+=10;NFSU2_TR(0x669893);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+4));
}
B669895:{NFSU2_TR(0x669895);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B669898:{NFSU2_TR(0x669898);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B66989b:{NFSU2_TR(0x66989b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+4),(U+0),4);
}
B66989d:{NFSU2_TR(0x66989d);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xffffffull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6698a2:{NFSU2_TR(0x6698a2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6698a3:{NFSU2_TR(0x6698a3);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B6698a7:{NFSU2_TR(0x6698a7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6698a8:{NFSU2_TR(0x6698a8);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6698a9:{NFSU2_TR(0x6698a9);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6698afull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6698af:L6698af:{c.instructions+=1;NFSU2_TR(0x6698af);
{goto L669fd5;}
}
B6698b4:L6698b4:{c.instructions+=2;NFSU2_TR(0x6698b4);
u8 U[22];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x3cull))));
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
B6698b8:{NFSU2_TR(0x6698b8);
if(r1(R+518)){TAIL_STATIC(0x66a1ddu,66a);}
}
B6698be:L6698be:{c.instructions+=10;NFSU2_TR(0x6698be);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+4));
}
B6698c0:{NFSU2_TR(0x6698c0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6698c3:{NFSU2_TR(0x6698c3);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6698c6:{NFSU2_TR(0x6698c6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6698c8:{NFSU2_TR(0x6698c8);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xffffffull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6698cd:{NFSU2_TR(0x6698cd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6698ce:{NFSU2_TR(0x6698ce);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B6698d2:{NFSU2_TR(0x6698d2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6698d3:{NFSU2_TR(0x6698d3);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6698d4:{NFSU2_TR(0x6698d4);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x114ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6698daull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6698da:L6698da:{c.instructions+=1;NFSU2_TR(0x6698da);
{goto L669fd5;}
}
B6698df:L6698df:{c.instructions+=7;NFSU2_TR(0x6698df);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6698e2:{NFSU2_TR(0x6698e2);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6698e4:{NFSU2_TR(0x6698e4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6698e6:{NFSU2_TR(0x6698e6);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6698e7:{NFSU2_TR(0x6698e7);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6698ea:{NFSU2_TR(0x6698ea);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6698eb:{NFSU2_TR(0x6698eb);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x13cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6698f1ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6698f1:L6698f1:{c.instructions+=1;NFSU2_TR(0x6698f1);
{goto L669fd5;}
}
B6698f6:L6698f6:{c.instructions+=2;NFSU2_TR(0x6698f6);
u8 U[22];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x3cull))));
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
B6698fa:{NFSU2_TR(0x6698fa);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L669901;}}
}
B6698fc:L6698fc:{c.instructions+=3;NFSU2_TR(0x6698fc);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6698fe:{NFSU2_TR(0x6698fe);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6698ff:{NFSU2_TR(0x6698ff);
{goto L669903;}
}
B669901:L669901:{c.instructions+=1;NFSU2_TR(0x669901);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+24),(U+0),4);
}
B669903:L669903:{c.instructions+=5;NFSU2_TR(0x669903);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B669906:{NFSU2_TR(0x669906);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+0),(U+0),4);
}
B669908:{NFSU2_TR(0x669908);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B669909:{NFSU2_TR(0x669909);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66990a:{NFSU2_TR(0x66990a);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x164ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x669910ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B669910:L669910:{c.instructions+=1;NFSU2_TR(0x669910);
{goto L669fd5;}
}
B669915:L669915:{c.instructions+=2;NFSU2_TR(0x669915);
u8 U[6];
w1(R+512,u8((r4(R+4))<(u32(0x6000000ull))));
w1(R+523,sborrow<u32>(r4(R+4),u32(0x6000000ull)));
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x6000000ull))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B66991b:{NFSU2_TR(0x66991b);
if(r1(R+518)){{goto L669946;}}
}
B66991d:L66991d:{c.instructions+=2;NFSU2_TR(0x66991d);
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
B66991e:{NFSU2_TR(0x66991e);
if(r1(R+518)){{goto L669941;}}
}
B669920:L669920:{c.instructions+=2;NFSU2_TR(0x669920);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B669921:{NFSU2_TR(0x669921);
if(r1(R+518)){{goto L669933;}}
}
B669923:L669923:{c.instructions+=2;NFSU2_TR(0x669923);
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
B669924:{NFSU2_TR(0x669924);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x66a1ddu,66a);}
}
B66992a:L66992a:{c.instructions+=3;NFSU2_TR(0x66992a);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(r2(U+4)));
}
B66992e:{NFSU2_TR(0x66992e);
u8 U[6];
w1(R+512,carry<u32>(r4(R+4),u32(0x10ull)));
w1(R+523,scarry<u32>(r4(R+4),u32(0x10ull)));
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x10ull))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B669931:{NFSU2_TR(0x669931);
{goto L66993d;}
}
B669933:L669933:{c.instructions+=2;NFSU2_TR(0x669933);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(r2(U+4)));
}
B669937:{NFSU2_TR(0x669937);
u8 U[6];
w1(R+512,carry<u32>(r4(R+4),u32(0x100ull)));
w1(R+523,scarry<u32>(r4(R+4),u32(0x100ull)));
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x100ull))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B66993d:L66993d:{c.instructions+=3;NFSU2_TR(0x66993d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66993e:{NFSU2_TR(0x66993e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66993f:{NFSU2_TR(0x66993f);
{goto L669949;}
}
B669941:L669941:{c.instructions+=3;NFSU2_TR(0x669941);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B669942:{NFSU2_TR(0x669942);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B669944:{NFSU2_TR(0x669944);
{goto L669949;}
}
B669946:L669946:{c.instructions+=2;NFSU2_TR(0x669946);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B669947:{NFSU2_TR(0x669947);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B669949:L669949:{c.instructions+=4;NFSU2_TR(0x669949);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B66994c:{NFSU2_TR(0x66994c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+0),(U+0),4);
}
B66994e:{NFSU2_TR(0x66994e);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66994f:{NFSU2_TR(0x66994f);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x669955ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B669955:L669955:{c.instructions+=1;NFSU2_TR(0x669955);
{goto L669fd5;}
}
B66995a:L66995a:{c.instructions+=6;NFSU2_TR(0x66995a);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x42ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B66995e:{NFSU2_TR(0x66995e);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xa4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B669964:{NFSU2_TR(0x669964);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0xb4ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B66996a:{NFSU2_TR(0x66996a);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x7000000ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B669970:{NFSU2_TR(0x669970);
u8 U[12];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B669974:{NFSU2_TR(0x669974);
if(r1(R+518)){{goto L669998;}}
}
B669976:L669976:{c.instructions+=2;NFSU2_TR(0x669976);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B669977:{NFSU2_TR(0x669977);
if(r1(R+518)){{goto L669993;}}
}
B669979:L669979:{c.instructions+=2;NFSU2_TR(0x669979);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B66997a:{NFSU2_TR(0x66997a);
if(r1(R+518)){{goto L66998e;}}
}
B66997c:L66997c:{c.instructions+=2;NFSU2_TR(0x66997c);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B66997d:{NFSU2_TR(0x66997d);
if(r1(R+518)){{goto L669989;}}
}
B66997f:L66997f:{c.instructions+=2;NFSU2_TR(0x66997f);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B669980:{NFSU2_TR(0x669980);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6699b8;}}
}
B669982:L669982:{c.instructions+=3;NFSU2_TR(0x669982);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B669984:{NFSU2_TR(0x669984);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x40ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B669987:{NFSU2_TR(0x669987);
{goto L6699b8;}
}
B669989:L669989:{c.instructions+=2;NFSU2_TR(0x669989);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((R+28),(U+0),4);
}
B66998c:{NFSU2_TR(0x66998c);
{goto L66999a;}
}
B66998e:L66998e:{c.instructions+=2;NFSU2_TR(0x66998e);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((R+28),(U+0),4);
}
B669991:{NFSU2_TR(0x669991);
{goto L66999a;}
}
B669993:L669993:{c.instructions+=2;NFSU2_TR(0x669993);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((R+28),(U+0),4);
}
B669996:{NFSU2_TR(0x669996);
{goto L66999a;}
}
B669998:L669998:{c.instructions+=1;NFSU2_TR(0x669998);
__builtin_memmove((R+28),(R+0),4);
}
B66999a:L66999a:{c.instructions+=13;NFSU2_TR(0x66999a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B66999c:{NFSU2_TR(0x66999c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66999f:{NFSU2_TR(0x66999f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6699a2:{NFSU2_TR(0x6699a2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6699a5:{NFSU2_TR(0x6699a5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6699a8:{NFSU2_TR(0x6699a8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6699ab:{NFSU2_TR(0x6699ab);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6699ae:{NFSU2_TR(0x6699ae);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6699b1:{NFSU2_TR(0x6699b1);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6699b4:{NFSU2_TR(0x6699b4);
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
B6699b5:{NFSU2_TR(0x6699b5);
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
B6699b6:{NFSU2_TR(0x6699b6);
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
B6699b7:{NFSU2_TR(0x6699b7);
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
B6699b8:L6699b8:{c.instructions+=3;NFSU2_TR(0x6699b8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6699bb:{NFSU2_TR(0x6699bb);
u8 U[9];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x30ull))));
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
B6699bf:{NFSU2_TR(0x6699bf);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6699ce;}}
}
B6699c1:L6699c1:{c.instructions+=2;NFSU2_TR(0x6699c1);
u8 U[9];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x118ull))));
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+8,u8(u32(r1(U+4))&u32(u8(0x4ull))));
w1(R+519,u8(s8(r1(U+8))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+8))==(u8(0x0ull))));
w1(U+5,u8(u32(r1(U+8))&u32(u8(0xffull))));
w1(U+6,u8(__builtin_popcountll(u64(r1(U+5)))));
w1(U+7,u8(u32(r1(U+6))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+7))==(u8(0x0ull))));
}
B6699c8:{NFSU2_TR(0x6699c8);
if(r1(R+518)){TAIL_STATIC(0x66a1ddu,66a);}
}
B6699ce:L6699ce:{c.instructions+=5;NFSU2_TR(0x6699ce);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6699d1:{NFSU2_TR(0x6699d1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6699d3:{NFSU2_TR(0x6699d3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6699d4:{NFSU2_TR(0x6699d4);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6699d5:{NFSU2_TR(0x6699d5);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xc4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6699dbull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6699db:L6699db:{c.instructions+=1;NFSU2_TR(0x6699db);
{goto L669fd5;}
}
B6699e0:L6699e0:{c.instructions+=2;NFSU2_TR(0x6699e0);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
w1(R+512,u8((r4(U+6))<(u32(0x800000dull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x800000dull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x800000dull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6699e6:{NFSU2_TR(0x6699e6);
if(r1(R+518)){{goto L669af1;}}
}
B6699ec:L6699ec:{c.instructions+=10;NFSU2_TR(0x6699ec);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6699ef:{NFSU2_TR(0x6699ef);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B6699f3:{NFSU2_TR(0x6699f3);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x42ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(r2(U+4)));
}
B6699f7:{NFSU2_TR(0x6699f7);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x68ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B6699fa:{NFSU2_TR(0x6699fa);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xa4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B669a00:{NFSU2_TR(0x669a00);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(u32(0xb4ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B669a06:{NFSU2_TR(0x669a06);
u8 U[16];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
w4(R+0,u32(u32(r4(R+0))+u32(r4(U+12))));
}
B669a0a:{NFSU2_TR(0x669a0a);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0xf8000000ull))));
}
B669a10:{NFSU2_TR(0x669a10);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
w1(R+512,u8((r4(U+6))<(u32(0xcull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0xcull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0xcull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B669a13:{NFSU2_TR(0x669a13);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L669aa0;}}
}
B669a19:L669a19:{c.instructions+=1;NFSU2_TR(0x669a19);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x66a22bull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B669a20:L669a20:{c.instructions+=3;NFSU2_TR(0x669a20);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B669a22:{NFSU2_TR(0x669a22);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B669a24:{NFSU2_TR(0x669a24);
{goto L669aa0;}
}
B669a26:L669a26:{c.instructions+=1;NFSU2_TR(0x669a26);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B669a29:L669a29:{c.instructions+=11;NFSU2_TR(0x669a29);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B669a2b:{NFSU2_TR(0x669a2b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B669a2e:{NFSU2_TR(0x669a2e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B669a31:{NFSU2_TR(0x669a31);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B669a34:{NFSU2_TR(0x669a34);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B669a37:{NFSU2_TR(0x669a37);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B669a3a:{NFSU2_TR(0x669a3a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B669a3d:{NFSU2_TR(0x669a3d);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B669a40:{NFSU2_TR(0x669a40);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B669a43:{NFSU2_TR(0x669a43);
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
B669a44:{NFSU2_TR(0x669a44);
{goto L669a6c;}
}
B669a46:L669a46:{c.instructions+=2;NFSU2_TR(0x669a46);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((R+28),(U+0),4);
}
B669a49:{NFSU2_TR(0x669a49);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x669a29u);}goto L669a29;}
}
B669a4b:L669a4b:{c.instructions+=2;NFSU2_TR(0x669a4b);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
__builtin_memmove((R+28),(U+0),4);
}
B669a4e:{NFSU2_TR(0x669a4e);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x669a29u);}goto L669a29;}
}
B669a50:L669a50:{c.instructions+=2;NFSU2_TR(0x669a50);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x34ull))));
__builtin_memmove((R+28),(U+0),4);
}
B669a53:{NFSU2_TR(0x669a53);
{goto L669a58;}
}
B669a55:L669a55:{c.instructions+=1;NFSU2_TR(0x669a55);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x40ull))));
__builtin_memmove((R+28),(U+0),4);
}
B669a58:L669a58:{c.instructions+=7;NFSU2_TR(0x669a58);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B669a5a:{NFSU2_TR(0x669a5a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B669a5d:{NFSU2_TR(0x669a5d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B669a60:{NFSU2_TR(0x669a60);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B669a63:{NFSU2_TR(0x669a63);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B669a66:{NFSU2_TR(0x669a66);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B669a69:{NFSU2_TR(0x669a69);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((R+24),(U+0),4);
}
B669a6c:L669a6c:{c.instructions+=4;NFSU2_TR(0x669a6c);
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
B669a6d:{NFSU2_TR(0x669a6d);
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
B669a6e:{NFSU2_TR(0x669a6e);
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
B669a6f:{NFSU2_TR(0x669a6f);
{goto L669aa0;}
}
B669a71:L669a71:{c.instructions+=3;NFSU2_TR(0x669a71);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B669a73:{NFSU2_TR(0x669a73);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x64ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B669a76:{NFSU2_TR(0x669a76);
{goto L669aa0;}
}
B669a78:L669a78:{c.instructions+=3;NFSU2_TR(0x669a78);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B669a7a:{NFSU2_TR(0x669a7a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x60ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B669a7d:{NFSU2_TR(0x669a7d);
{goto L669aa0;}
}
B669a7f:L669a7f:{c.instructions+=3;NFSU2_TR(0x669a7f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B669a81:{NFSU2_TR(0x669a81);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B669a84:{NFSU2_TR(0x669a84);
{goto L669aa0;}
}
B669a86:L669a86:{c.instructions+=3;NFSU2_TR(0x669a86);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B669a88:{NFSU2_TR(0x669a88);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x50ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B669a8b:{NFSU2_TR(0x669a8b);
{goto L669aa0;}
}
B669a8d:L669a8d:{c.instructions+=3;NFSU2_TR(0x669a8d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B669a8f:{NFSU2_TR(0x669a8f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B669a92:{NFSU2_TR(0x669a92);
{goto L669aa0;}
}
B669a94:L669a94:{c.instructions+=3;NFSU2_TR(0x669a94);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B669a96:{NFSU2_TR(0x669a96);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x58ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B669a99:{NFSU2_TR(0x669a99);
{goto L669aa0;}
}
B669a9b:L669a9b:{c.instructions+=2;NFSU2_TR(0x669a9b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B669a9d:{NFSU2_TR(0x669a9d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x5cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B669aa0:L669aa0:{c.instructions+=3;NFSU2_TR(0x669aa0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B669aa3:{NFSU2_TR(0x669aa3);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B669aa7:{NFSU2_TR(0x669aa7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L669ab6;}}
}
B669aa9:L669aa9:{c.instructions+=2;NFSU2_TR(0x669aa9);
u8 U[9];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x118ull))));
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+8,u8(u32(r1(U+4))&u32(u8(0x4ull))));
w1(R+519,u8(s8(r1(U+8))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+8))==(u8(0x0ull))));
w1(U+5,u8(u32(r1(U+8))&u32(u8(0xffull))));
w1(U+6,u8(__builtin_popcountll(u64(r1(U+5)))));
w1(U+7,u8(u32(r1(U+6))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+7))==(u8(0x0ull))));
}
B669ab0:{NFSU2_TR(0x669ab0);
if(r1(R+518)){TAIL_STATIC(0x66a1ddu,66a);}
}
B669ab6:L669ab6:{c.instructions+=2;NFSU2_TR(0x669ab6);
u8 U[22];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x3cull))));
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
B669aba:{NFSU2_TR(0x669aba);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L669ada;}}
}
B669abc:L669abc:{c.instructions+=12;NFSU2_TR(0x669abc);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B669abe:{NFSU2_TR(0x669abe);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x40ull))));
__builtin_memmove((R+28),(U+0),4);
}
B669ac1:{NFSU2_TR(0x669ac1);
{u32 ea_=u32(r4(R+20)+u32(4294967272u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B669ac4:{NFSU2_TR(0x669ac4);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((R+24),(U+0),4);
}
B669ac7:{NFSU2_TR(0x669ac7);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B669ac9:{NFSU2_TR(0x669ac9);
u8 U[4];
w4(U+0,u32(0x3ull));
s4(u32(r4(R+0)),r4(U+0));
}
B669acf:{NFSU2_TR(0x669acf);
{u32 ea_=u32(r4(R+20)+u32(4294967276u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B669ad2:{NFSU2_TR(0x669ad2);
__asm__ volatile(".byte 0xd9,0xe8":::"memory");
}
B669ad4:{NFSU2_TR(0x669ad4);
{u32 ea_=u32(r4(R+20)+u32(4294967280u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B669ad7:{NFSU2_TR(0x669ad7);
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
B669ad8:{NFSU2_TR(0x669ad8);
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
B669ad9:{NFSU2_TR(0x669ad9);
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
B669ada:L669ada:{c.instructions+=7;NFSU2_TR(0x669ada);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B669add:{NFSU2_TR(0x669add);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+4),(U+0),4);
}
B669adf:{NFSU2_TR(0x669adf);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B669ae0:{NFSU2_TR(0x669ae0);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B669ae4:{NFSU2_TR(0x669ae4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B669ae5:{NFSU2_TR(0x669ae5);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B669ae6:{NFSU2_TR(0x669ae6);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x669aecull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B669aec:L669aec:{c.instructions+=1;NFSU2_TR(0x669aec);
{goto L669fd5;}
}
B669af1:L669af1:{c.instructions+=7;NFSU2_TR(0x669af1);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+4));
}
B669af3:{NFSU2_TR(0x669af3);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(r2(U+4)));
}
B669af7:{NFSU2_TR(0x669af7);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B669afa:{NFSU2_TR(0x669afa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+0),(U+0),4);
}
B669afc:{NFSU2_TR(0x669afc);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B669afd:{NFSU2_TR(0x669afd);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B669afe:{NFSU2_TR(0x669afe);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x669b04ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B669b04:L669b04:{c.instructions+=1;NFSU2_TR(0x669b04);
{goto L669fd5;}
}
B669b09:L669b09:{c.instructions+=2;NFSU2_TR(0x669b09);
u8 U[22];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0x2ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0x2ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0x2ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B669b0d:{NFSU2_TR(0x669b0d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L669b51;}}
}
B669b0f:L669b0f:{c.instructions+=6;NFSU2_TR(0x669b0f);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B669b12:{NFSU2_TR(0x669b12);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B669b14:{NFSU2_TR(0x669b14);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffea8ull))));
__builtin_memmove((R+8),(U+0),4);
}
B669b1a:{NFSU2_TR(0x669b1a);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B669b1b:{NFSU2_TR(0x669b1b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B669b1c:{NFSU2_TR(0x669b1c);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x669b1full));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B669b1f:L669b1f:{c.instructions+=3;NFSU2_TR(0x669b1f);
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
B669b21:{NFSU2_TR(0x669b21);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B669b24:{NFSU2_TR(0x669b24);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x66a1ddu,66a);}
}
B669b2a:L669b2a:{c.instructions+=5;NFSU2_TR(0x669b2a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B669b2d:{NFSU2_TR(0x669b2d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B669b30:{NFSU2_TR(0x669b30);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+4),(U+0),4);
}
B669b32:{NFSU2_TR(0x669b32);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x8ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B669b35:{NFSU2_TR(0x669b35);
if(r1(R+518)){{goto L669b43;}}
}
B669b37:L669b37:{c.instructions+=2;NFSU2_TR(0x669b37);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B669b38:{NFSU2_TR(0x669b38);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L669b54;}}
}
B669b3a:L669b3a:{c.instructions+=2;NFSU2_TR(0x669b3a);
u8 U[9];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffee5ull))));
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+8,u8(u32(r1(U+4))&u32(u8(0x8ull))));
w1(R+519,u8(s8(r1(U+8))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+8))==(u8(0x0ull))));
w1(U+5,u8(u32(r1(U+8))&u32(u8(0xffull))));
w1(U+6,u8(__builtin_popcountll(u64(r1(U+5)))));
w1(U+7,u8(u32(r1(U+6))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+7))==(u8(0x0ull))));
}
B669b41:{NFSU2_TR(0x669b41);
{goto L669b4a;}
}
B669b43:L669b43:{c.instructions+=1;NFSU2_TR(0x669b43);
u8 U[9];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffee5ull))));
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+8,u8(u32(r1(U+4))&u32(u8(0x20ull))));
w1(R+519,u8(s8(r1(U+8))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+8))==(u8(0x0ull))));
w1(U+5,u8(u32(r1(U+8))&u32(u8(0xffull))));
w1(U+6,u8(__builtin_popcountll(u64(r1(U+5)))));
w1(U+7,u8(u32(r1(U+6))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+7))==(u8(0x0ull))));
}
B669b4a:L669b4a:{c.instructions+=1;NFSU2_TR(0x669b4a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L669b54;}}
}
B669b4c:L669b4c:{c.instructions+=1;NFSU2_TR(0x669b4c);
{goto L669cc7;}
}
B669b51:L669b51:{c.instructions+=1;NFSU2_TR(0x669b51);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B669b54:L669b54:{c.instructions+=8;NFSU2_TR(0x669b54);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B669b57:{NFSU2_TR(0x669b57);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B669b5d:{NFSU2_TR(0x669b5d);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B669b60:{NFSU2_TR(0x669b60);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B669b63:{NFSU2_TR(0x669b63);
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
B669b65:{NFSU2_TR(0x669b65);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B669b68:{NFSU2_TR(0x669b68);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B669b6a:{NFSU2_TR(0x669b6a);
if(r1(R+518)){{goto L669b72;}}
}
B669b6c:L669b6c:{c.instructions+=2;NFSU2_TR(0x669b6c);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B669b6f:{NFSU2_TR(0x669b6f);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B669b72:L669b72:{c.instructions+=9;NFSU2_TR(0x669b72);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B669b75:{NFSU2_TR(0x669b75);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B669b78:{NFSU2_TR(0x669b78);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B669b7a:{NFSU2_TR(0x669b7a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B669b7d:{NFSU2_TR(0x669b7d);
u8 U[20];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x8ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((U+16),(U+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+16));
}
B669b81:{NFSU2_TR(0x669b81);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B669b85:{NFSU2_TR(0x669b85);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B669b86:{NFSU2_TR(0x669b86);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B669b87:{NFSU2_TR(0x669b87);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x104ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x669b8dull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B669b8d:L669b8d:{c.instructions+=1;NFSU2_TR(0x669b8d);
{goto L669fd5;}
}
B669b92:L669b92:{c.instructions+=3;NFSU2_TR(0x669b92);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B669b95:{NFSU2_TR(0x669b95);
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
B669b98:{NFSU2_TR(0x669b98);
if(r1(R+518)){TAIL_STATIC(0x66a1ddu,66a);}
}
B669b9e:L669b9e:{c.instructions+=2;NFSU2_TR(0x669b9e);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B669ba1:{NFSU2_TR(0x669ba1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L669c3e;}}
}
B669ba7:L669ba7:{c.instructions+=9;NFSU2_TR(0x669ba7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B669baa:{NFSU2_TR(0x669baa);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B669bad:{NFSU2_TR(0x669bad);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B669bb3:{NFSU2_TR(0x669bb3);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B669bb6:{NFSU2_TR(0x669bb6);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B669bb9:{NFSU2_TR(0x669bb9);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B669bbb:{NFSU2_TR(0x669bbb);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B669bbe:{NFSU2_TR(0x669bbe);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B669bc0:{NFSU2_TR(0x669bc0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L669bc6;}}
}
B669bc2:L669bc2:{c.instructions+=2;NFSU2_TR(0x669bc2);
__builtin_memmove((R+8),(R+0),4);
}
B669bc4:{NFSU2_TR(0x669bc4);
{goto L669bcc;}
}
B669bc6:L669bc6:{c.instructions+=2;NFSU2_TR(0x669bc6);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B669bc9:{NFSU2_TR(0x669bc9);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B669bcc:L669bcc:{c.instructions+=4;NFSU2_TR(0x669bcc);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B669bcf:{NFSU2_TR(0x669bcf);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B669bd2:{NFSU2_TR(0x669bd2);
u8 U[17];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x8ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
w1(U+16,u8(u32(r1(U+12))&u32(u8(0x2ull))));
w1(R+519,u8(s8(r1(U+16))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+16))==(u8(0x0ull))));
w1(U+13,u8(u32(r1(U+16))&u32(u8(0xffull))));
w1(U+14,u8(__builtin_popcountll(u64(r1(U+13)))));
w1(U+15,u8(u32(r1(U+14))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+15))==(u8(0x0ull))));
}
B669bd7:{NFSU2_TR(0x669bd7);
if(r1(R+518)){{goto L669cc7;}}
}
B669bdd:L669bdd:{c.instructions+=2;NFSU2_TR(0x669bdd);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B669bdf:{NFSU2_TR(0x669bdf);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L669be5;}}
}
B669be1:L669be1:{c.instructions+=2;NFSU2_TR(0x669be1);
__builtin_memmove((R+8),(R+0),4);
}
B669be3:{NFSU2_TR(0x669be3);
{goto L669beb;}
}
B669be5:L669be5:{c.instructions+=2;NFSU2_TR(0x669be5);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B669be8:{NFSU2_TR(0x669be8);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B669beb:L669beb:{c.instructions+=3;NFSU2_TR(0x669beb);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B669bee:{NFSU2_TR(0x669bee);
u8 U[24];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x8ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((U+16),(U+12),4);
w4(U+20,u32(u32(r4(U+16))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+20))==(u32(0x0ull))));
}
B669bf3:{NFSU2_TR(0x669bf3);
if(r1(R+518)){{goto L669c29;}}
}
B669bf5:L669bf5:{c.instructions+=2;NFSU2_TR(0x669bf5);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B669bf7:{NFSU2_TR(0x669bf7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L669bfd;}}
}
B669bf9:L669bf9:{c.instructions+=2;NFSU2_TR(0x669bf9);
__builtin_memmove((R+8),(R+0),4);
}
B669bfb:{NFSU2_TR(0x669bfb);
{goto L669c03;}
}
B669bfd:L669bfd:{c.instructions+=2;NFSU2_TR(0x669bfd);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B669c00:{NFSU2_TR(0x669c00);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B669c03:L669c03:{c.instructions+=3;NFSU2_TR(0x669c03);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B669c06:{NFSU2_TR(0x669c06);
u8 U[24];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x8ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((U+16),(U+12),4);
w4(U+20,u32(u32(r4(U+16))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+20))==(u32(0x0ull))));
}
B669c0b:{NFSU2_TR(0x669c0b);
if(r1(R+518)){{goto L669c29;}}
}
B669c0d:L669c0d:{c.instructions+=2;NFSU2_TR(0x669c0d);
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
B669c0f:{NFSU2_TR(0x669c0f);
if(r1(R+518)){{goto L669c17;}}
}
B669c11:L669c11:{c.instructions+=2;NFSU2_TR(0x669c11);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B669c14:{NFSU2_TR(0x669c14);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B669c17:L669c17:{c.instructions+=6;NFSU2_TR(0x669c17);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B669c1a:{NFSU2_TR(0x669c1a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B669c1d:{NFSU2_TR(0x669c1d);
u8 U[16];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x8ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B669c21:{NFSU2_TR(0x669c21);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B669c23:{NFSU2_TR(0x669c23);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B669c24:{NFSU2_TR(0x669c24);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x669c27ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B669c27:L669c27:{c.instructions+=1;NFSU2_TR(0x669c27);
{goto L669c2b;}
}
B669c29:L669c29:{c.instructions+=1;NFSU2_TR(0x669c29);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B669c2b:L669c2b:{c.instructions+=3;NFSU2_TR(0x669c2b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B669c2c:{NFSU2_TR(0x669c2c);
__builtin_memmove((R+4),(R+12),4);
}
B669c2e:{NFSU2_TR(0x669c2e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x669c33ull));
TAIL_STATIC(0x65af11u,65a);
}
B669c33:L669c33:{c.instructions+=3;NFSU2_TR(0x669c33);
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
B669c35:{NFSU2_TR(0x669c35);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B669c38:{NFSU2_TR(0x669c38);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x66a1ddu,66a);}
}
B669c3e:L669c3e:{c.instructions+=7;NFSU2_TR(0x669c3e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B669c41:{NFSU2_TR(0x669c41);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B669c44:{NFSU2_TR(0x669c44);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B669c4a:{NFSU2_TR(0x669c4a);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B669c4d:{NFSU2_TR(0x669c4d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B669c50:{NFSU2_TR(0x669c50);
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
B669c52:{NFSU2_TR(0x669c52);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L669c5b;}}
}
B669c54:L669c54:{c.instructions+=3;NFSU2_TR(0x669c54);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B669c57:{NFSU2_TR(0x669c57);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B669c59:{NFSU2_TR(0x669c59);
{goto L669c66;}
}
B669c5b:L669c5b:{c.instructions+=4;NFSU2_TR(0x669c5b);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B669c5e:{NFSU2_TR(0x669c5e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+4),(U+0),4);
}
B669c60:{NFSU2_TR(0x669c60);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B669c63:{NFSU2_TR(0x669c63);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B669c66:L669c66:{c.instructions+=7;NFSU2_TR(0x669c66);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B669c69:{NFSU2_TR(0x669c69);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B669c6c:{NFSU2_TR(0x669c6c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B669c6e:{NFSU2_TR(0x669c6e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B669c71:{NFSU2_TR(0x669c71);
u8 U[20];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x8ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((U+16),(U+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+16));
}
B669c75:{NFSU2_TR(0x669c75);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B669c76:{NFSU2_TR(0x669c76);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x170ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x669c7cull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B669c7c:L669c7c:{c.instructions+=1;NFSU2_TR(0x669c7c);
{goto L669fd5;}
}
B669c81:L669c81:{c.instructions+=3;NFSU2_TR(0x669c81);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B669c84:{NFSU2_TR(0x669c84);
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
B669c87:{NFSU2_TR(0x669c87);
if(r1(R+518)){TAIL_STATIC(0x66a1ddu,66a);}
}
B669c8d:L669c8d:{c.instructions+=3;NFSU2_TR(0x669c8d);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B669c90:{NFSU2_TR(0x669c90);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B669c93:{NFSU2_TR(0x669c93);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L669cd3;}}
}
B669c95:L669c95:{c.instructions+=6;NFSU2_TR(0x669c95);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B669c98:{NFSU2_TR(0x669c98);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B669c9e:{NFSU2_TR(0x669c9e);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B669ca1:{NFSU2_TR(0x669ca1);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B669ca4:{NFSU2_TR(0x669ca4);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B669ca6:{NFSU2_TR(0x669ca6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L669caf;}}
}
B669ca8:L669ca8:{c.instructions+=3;NFSU2_TR(0x669ca8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B669cab:{NFSU2_TR(0x669cab);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+4),(U+0),4);
}
B669cad:{NFSU2_TR(0x669cad);
{goto L669cba;}
}
B669caf:L669caf:{c.instructions+=4;NFSU2_TR(0x669caf);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B669cb2:{NFSU2_TR(0x669cb2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+8),(U+0),4);
}
B669cb4:{NFSU2_TR(0x669cb4);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B669cb7:{NFSU2_TR(0x669cb7);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B669cba:L669cba:{c.instructions+=4;NFSU2_TR(0x669cba);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B669cbd:{NFSU2_TR(0x669cbd);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B669cc0:{NFSU2_TR(0x669cc0);
u8 U[17];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x8ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
w1(U+16,u8(u32(r1(U+12))&u32(u8(0x2ull))));
w1(R+519,u8(s8(r1(U+16))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+16))==(u8(0x0ull))));
w1(U+13,u8(u32(r1(U+16))&u32(u8(0xffull))));
w1(U+14,u8(__builtin_popcountll(u64(r1(U+13)))));
w1(U+15,u8(u32(r1(U+14))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+15))==(u8(0x0ull))));
}
B669cc5:{NFSU2_TR(0x669cc5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L669cd3;}}
}
B669cc7:L669cc7:{c.instructions+=2;NFSU2_TR(0x669cc7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w4(U+4,u32(0x80004005ull));
s4(u32(r4(U+0)),r4(U+4));
}
B669cce:{NFSU2_TR(0x669cce);
TAIL_STATIC(0x66a1ddu,66a);
}
B669cd3:L669cd3:{c.instructions+=8;NFSU2_TR(0x669cd3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B669cd6:{NFSU2_TR(0x669cd6);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B669cdc:{NFSU2_TR(0x669cdc);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B669cdf:{NFSU2_TR(0x669cdf);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B669ce2:{NFSU2_TR(0x669ce2);
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
B669ce4:{NFSU2_TR(0x669ce4);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B669ce7:{NFSU2_TR(0x669ce7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B669ce9:{NFSU2_TR(0x669ce9);
if(r1(R+518)){{goto L669cf1;}}
}
B669ceb:L669ceb:{c.instructions+=2;NFSU2_TR(0x669ceb);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B669cee:{NFSU2_TR(0x669cee);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B669cf1:L669cf1:{c.instructions+=7;NFSU2_TR(0x669cf1);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B669cf4:{NFSU2_TR(0x669cf4);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B669cf7:{NFSU2_TR(0x669cf7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B669cf9:{NFSU2_TR(0x669cf9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B669cfc:{NFSU2_TR(0x669cfc);
u8 U[20];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x8ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((U+16),(U+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+16));
}
B669d00:{NFSU2_TR(0x669d00);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B669d01:{NFSU2_TR(0x669d01);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x1acull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x669d07ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B669d07:L669d07:{c.instructions+=1;NFSU2_TR(0x669d07);
{goto L669fd5;}
}
B669d0c:L669d0c:{c.instructions+=2;NFSU2_TR(0x669d0c);
u8 U[22];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x3cull))));
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
B669d10:{NFSU2_TR(0x669d10);
if(r1(R+518)){TAIL_STATIC(0x66a1ddu,66a);}
}
B669d16:L669d16:{c.instructions+=4;NFSU2_TR(0x669d16);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x118ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B669d1c:{NFSU2_TR(0x669d1c);
u8 U[9];
w4(U+5,u32(u32(u32(0x1dull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+5))));
w1(U+0,u8((r4(U+5))!=(u32(0x0ull))));
w1(U+1,u8((r4(R+0))==(u32(0x0ull))));
w1(U+2,u8(!(r1(U+0))));
w1(U+3,u8(u32(r1(U+2))&u32(r1(R+518))));
w1(U+4,u8(u32(r1(U+0))&u32(r1(U+1))));
w1(R+518,u8(u32(r1(U+3))|u32(r1(U+4))));
}
B669d1f:{NFSU2_TR(0x669d1f);
u8 U[9];
w4(U+5,u32(u32(u32(0x1full))&u32(u32(0x1full))));
w4(R+0,sar<u32>(r4(R+0),u64(r4(U+5))));
w1(U+0,u8((r4(U+5))!=(u32(0x0ull))));
w1(U+1,u8((r4(R+0))==(u32(0x0ull))));
w1(U+2,u8(!(r1(U+0))));
w1(U+3,u8(u32(r1(U+2))&u32(r1(R+518))));
w1(U+4,u8(u32(r1(U+0))&u32(r1(U+1))));
w1(R+518,u8(u32(r1(U+3))|u32(r1(U+4))));
}
B669d22:{NFSU2_TR(0x669d22);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L669d31;}}
}
B669d24:L669d24:{c.instructions+=3;NFSU2_TR(0x669d24);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B669d27:{NFSU2_TR(0x669d27);
u8 U[9];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x30ull))));
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
B669d2b:{NFSU2_TR(0x669d2b);
if(r1(R+518)){TAIL_STATIC(0x66a1ddu,66a);}
}
B669d31:L669d31:{c.instructions+=2;NFSU2_TR(0x669d31);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xc000000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B669d37:{NFSU2_TR(0x669d37);
if(r1(R+518)){{goto L669dd7;}}
}
B669d3d:L669d3d:{c.instructions+=2;NFSU2_TR(0x669d3d);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xc010000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B669d43:{NFSU2_TR(0x669d43);
if(r1(R+518)){{goto L669d96;}}
}
B669d45:L669d45:{c.instructions+=2;NFSU2_TR(0x669d45);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
w1(R+512,u8((r4(U+6))<(u32(0xc020000ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0xc020000ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0xc020000ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B669d4b:{NFSU2_TR(0x669d4b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x66a1ddu,66a);}
}
B669d51:L669d51:{c.instructions+=2;NFSU2_TR(0x669d51);
u8 U[10];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x2eull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+8),(U+4),1);
w1(R+512,u8((r1(U+8))<(u8(0x0ull))));
w1(R+523,sborrow<u8>(r1(U+8),u8(0x0ull)));
w1(U+9,u8(u32(r1(U+8))-u32(u8(0x0ull))));
w1(R+519,u8(s8(r1(U+9))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+9))==(u8(0x0ull))));
w1(U+5,u8(u32(r1(U+9))&u32(u8(0xffull))));
w1(U+6,u8(__builtin_popcountll(u64(r1(U+5)))));
w1(U+7,u8(u32(r1(U+6))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+7))==(u8(0x0ull))));
}
B669d55:{NFSU2_TR(0x669d55);
if(r1(R+518)){{goto L669d77;}}
}
B669d57:L669d57:{c.instructions+=2;NFSU2_TR(0x669d57);
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
B669d59:{NFSU2_TR(0x669d59);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L669d77;}}
}
B669d5b:L669d5b:{c.instructions+=3;NFSU2_TR(0x669d5b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B669d5e:{NFSU2_TR(0x669d5e);
u8 U[9];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
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
B669d62:{NFSU2_TR(0x669d62);
if(r1(R+518)){{goto L669d7a;}}
}
B669d64:L669d64:{c.instructions+=8;NFSU2_TR(0x669d64);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B669d68:{NFSU2_TR(0x669d68);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(r2(U+4)));
}
B669d6c:{NFSU2_TR(0x669d6c);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B669d6f:{NFSU2_TR(0x669d6f);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B669d70:{NFSU2_TR(0x669d70);
u8 U[6];
w1(R+512,u8((r4(R+24))<(r4(R+0))));
w1(R+523,sborrow<u32>(r4(R+24),r4(R+0)));
w4(R+24,u32(u32(r4(R+24))-u32(r4(R+0))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B669d72:{NFSU2_TR(0x669d72);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B669d73:{NFSU2_TR(0x669d73);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B669d75:{NFSU2_TR(0x669d75);
{goto L669d85;}
}
B669d77:L669d77:{c.instructions+=1;NFSU2_TR(0x669d77);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B669d7a:L669d7a:{c.instructions+=5;NFSU2_TR(0x669d7a);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x56ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B669d7e:{NFSU2_TR(0x669d7e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B669d7f:{NFSU2_TR(0x669d7f);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B669d83:{NFSU2_TR(0x669d83);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B669d84:{NFSU2_TR(0x669d84);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B669d85:L669d85:{c.instructions+=4;NFSU2_TR(0x669d85);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B669d88:{NFSU2_TR(0x669d88);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+4),(U+0),4);
}
B669d8a:{NFSU2_TR(0x669d8a);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B669d8b:{NFSU2_TR(0x669d8b);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x180ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x669d91ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B669d91:L669d91:{c.instructions+=1;NFSU2_TR(0x669d91);
{goto L669fd5;}
}
B669d96:L669d96:{c.instructions+=2;NFSU2_TR(0x669d96);
u8 U[7];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x2dull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x0ull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B669d9a:{NFSU2_TR(0x669d9a);
if(r1(R+518)){{goto L669dbc;}}
}
B669d9c:L669d9c:{c.instructions+=2;NFSU2_TR(0x669d9c);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B669d9e:{NFSU2_TR(0x669d9e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L669dbc;}}
}
B669da0:L669da0:{c.instructions+=3;NFSU2_TR(0x669da0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B669da3:{NFSU2_TR(0x669da3);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B669da7:{NFSU2_TR(0x669da7);
if(r1(R+518)){{goto L669dbf;}}
}
B669da9:L669da9:{c.instructions+=8;NFSU2_TR(0x669da9);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B669dad:{NFSU2_TR(0x669dad);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1eull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(r2(U+4)));
}
B669db1:{NFSU2_TR(0x669db1);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B669db4:{NFSU2_TR(0x669db4);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B669db5:{NFSU2_TR(0x669db5);
w4(R+24,u32(u32(r4(R+24))-u32(r4(R+0))));
}
B669db7:{NFSU2_TR(0x669db7);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B669db8:{NFSU2_TR(0x669db8);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B669dba:{NFSU2_TR(0x669dba);
{goto L669dca;}
}
B669dbc:L669dbc:{c.instructions+=1;NFSU2_TR(0x669dbc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B669dbf:L669dbf:{c.instructions+=5;NFSU2_TR(0x669dbf);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x56ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B669dc3:{NFSU2_TR(0x669dc3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B669dc4:{NFSU2_TR(0x669dc4);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B669dc8:{NFSU2_TR(0x669dc8);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B669dc9:{NFSU2_TR(0x669dc9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B669dca:L669dca:{c.instructions+=2;NFSU2_TR(0x669dca);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B669dcd:{NFSU2_TR(0x669dcd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x669dd2ull));
TAIL_STATIC(0x65aa5du,65a);
}
B669dd2:L669dd2:{c.instructions+=1;NFSU2_TR(0x669dd2);
{goto L669fd5;}
}
B669dd7:L669dd7:{c.instructions+=2;NFSU2_TR(0x669dd7);
u8 U[10];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+8),(U+4),1);
w1(R+512,u8((r1(U+8))<(u8(0x0ull))));
w1(R+523,sborrow<u8>(r1(U+8),u8(0x0ull)));
w1(U+9,u8(u32(r1(U+8))-u32(u8(0x0ull))));
w1(R+519,u8(s8(r1(U+9))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+9))==(u8(0x0ull))));
w1(U+5,u8(u32(r1(U+9))&u32(u8(0xffull))));
w1(U+6,u8(__builtin_popcountll(u64(r1(U+5)))));
w1(U+7,u8(u32(r1(U+6))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+7))==(u8(0x0ull))));
}
B669ddb:{NFSU2_TR(0x669ddb);
if(r1(R+518)){{goto L669dfd;}}
}
B669ddd:L669ddd:{c.instructions+=2;NFSU2_TR(0x669ddd);
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
B669ddf:{NFSU2_TR(0x669ddf);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L669dfd;}}
}
B669de1:L669de1:{c.instructions+=3;NFSU2_TR(0x669de1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B669de4:{NFSU2_TR(0x669de4);
u8 U[9];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
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
B669de8:{NFSU2_TR(0x669de8);
if(r1(R+518)){{goto L669e00;}}
}
B669dea:L669dea:{c.instructions+=8;NFSU2_TR(0x669dea);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B669dee:{NFSU2_TR(0x669dee);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(r2(U+4)));
}
B669df2:{NFSU2_TR(0x669df2);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B669df5:{NFSU2_TR(0x669df5);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B669df6:{NFSU2_TR(0x669df6);
u8 U[6];
w1(R+512,u8((r4(R+24))<(r4(R+0))));
w1(R+523,sborrow<u32>(r4(R+24),r4(R+0)));
w4(R+24,u32(u32(r4(R+24))-u32(r4(R+0))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B669df8:{NFSU2_TR(0x669df8);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B669df9:{NFSU2_TR(0x669df9);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B669dfb:{NFSU2_TR(0x669dfb);
{goto L669e0b;}
}
B669dfd:L669dfd:{c.instructions+=1;NFSU2_TR(0x669dfd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B669e00:L669e00:{c.instructions+=5;NFSU2_TR(0x669e00);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x56ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B669e04:{NFSU2_TR(0x669e04);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B669e05:{NFSU2_TR(0x669e05);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B669e09:{NFSU2_TR(0x669e09);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B669e0a:{NFSU2_TR(0x669e0a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B669e0b:L669e0b:{c.instructions+=4;NFSU2_TR(0x669e0b);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B669e0e:{NFSU2_TR(0x669e0e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+4),(U+0),4);
}
B669e10:{NFSU2_TR(0x669e10);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B669e11:{NFSU2_TR(0x669e11);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x178ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x669e17ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B669e17:L669e17:{c.instructions+=1;NFSU2_TR(0x669e17);
{goto L669fd5;}
}
B669e1c:L669e1c:{c.instructions+=2;NFSU2_TR(0x669e1c);
u8 U[22];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x3cull))));
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
B669e20:{NFSU2_TR(0x669e20);
if(r1(R+518)){TAIL_STATIC(0x66a1ddu,66a);}
}
B669e26:L669e26:{c.instructions+=4;NFSU2_TR(0x669e26);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x118ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B669e2c:{NFSU2_TR(0x669e2c);
u8 U[9];
w4(U+5,u32(u32(u32(0x1dull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+5))));
w1(U+0,u8((r4(U+5))!=(u32(0x0ull))));
w1(U+1,u8((r4(R+0))==(u32(0x0ull))));
w1(U+2,u8(!(r1(U+0))));
w1(U+3,u8(u32(r1(U+2))&u32(r1(R+518))));
w1(U+4,u8(u32(r1(U+0))&u32(r1(U+1))));
w1(R+518,u8(u32(r1(U+3))|u32(r1(U+4))));
}
B669e2f:{NFSU2_TR(0x669e2f);
u8 U[9];
w4(U+5,u32(u32(u32(0x1full))&u32(u32(0x1full))));
w4(R+0,sar<u32>(r4(R+0),u64(r4(U+5))));
w1(U+0,u8((r4(U+5))!=(u32(0x0ull))));
w1(U+1,u8((r4(R+0))==(u32(0x0ull))));
w1(U+2,u8(!(r1(U+0))));
w1(U+3,u8(u32(r1(U+2))&u32(r1(R+518))));
w1(U+4,u8(u32(r1(U+0))&u32(r1(U+1))));
w1(R+518,u8(u32(r1(U+3))|u32(r1(U+4))));
}
B669e32:{NFSU2_TR(0x669e32);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L669e41;}}
}
B669e34:L669e34:{c.instructions+=3;NFSU2_TR(0x669e34);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B669e37:{NFSU2_TR(0x669e37);
u8 U[9];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x30ull))));
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
B669e3b:{NFSU2_TR(0x669e3b);
if(r1(R+518)){TAIL_STATIC(0x66a1ddu,66a);}
}
B669e41:L669e41:{c.instructions+=2;NFSU2_TR(0x669e41);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xd000000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B669e47:{NFSU2_TR(0x669e47);
if(r1(R+518)){{goto L669eeb;}}
}
B669e4d:L669e4d:{c.instructions+=2;NFSU2_TR(0x669e4d);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xd010000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B669e53:{NFSU2_TR(0x669e53);
if(r1(R+518)){{goto L669ea6;}}
}
B669e55:L669e55:{c.instructions+=2;NFSU2_TR(0x669e55);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
w1(R+512,u8((r4(U+6))<(u32(0xd020000ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0xd020000ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0xd020000ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B669e5b:{NFSU2_TR(0x669e5b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x66a1ddu,66a);}
}
B669e61:L669e61:{c.instructions+=2;NFSU2_TR(0x669e61);
u8 U[10];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x32ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+8),(U+4),1);
w1(R+512,u8((r1(U+8))<(u8(0x0ull))));
w1(R+523,sborrow<u8>(r1(U+8),u8(0x0ull)));
w1(U+9,u8(u32(r1(U+8))-u32(u8(0x0ull))));
w1(R+519,u8(s8(r1(U+9))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+9))==(u8(0x0ull))));
w1(U+5,u8(u32(r1(U+9))&u32(u8(0xffull))));
w1(U+6,u8(__builtin_popcountll(u64(r1(U+5)))));
w1(U+7,u8(u32(r1(U+6))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+7))==(u8(0x0ull))));
}
B669e65:{NFSU2_TR(0x669e65);
if(r1(R+518)){{goto L669e87;}}
}
B669e67:L669e67:{c.instructions+=2;NFSU2_TR(0x669e67);
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
B669e69:{NFSU2_TR(0x669e69);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L669e87;}}
}
B669e6b:L669e6b:{c.instructions+=3;NFSU2_TR(0x669e6b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B669e6e:{NFSU2_TR(0x669e6e);
u8 U[9];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
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
B669e72:{NFSU2_TR(0x669e72);
if(r1(R+518)){{goto L669e8a;}}
}
B669e74:L669e74:{c.instructions+=8;NFSU2_TR(0x669e74);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B669e78:{NFSU2_TR(0x669e78);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(r2(U+4)));
}
B669e7c:{NFSU2_TR(0x669e7c);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B669e7f:{NFSU2_TR(0x669e7f);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B669e80:{NFSU2_TR(0x669e80);
u8 U[6];
w1(R+512,u8((r4(R+24))<(r4(R+0))));
w1(R+523,sborrow<u32>(r4(R+24),r4(R+0)));
w4(R+24,u32(u32(r4(R+24))-u32(r4(R+0))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B669e82:{NFSU2_TR(0x669e82);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B669e83:{NFSU2_TR(0x669e83);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B669e85:{NFSU2_TR(0x669e85);
{goto L669e95;}
}
B669e87:L669e87:{c.instructions+=1;NFSU2_TR(0x669e87);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B669e8a:L669e8a:{c.instructions+=5;NFSU2_TR(0x669e8a);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x56ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B669e8e:{NFSU2_TR(0x669e8e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B669e8f:{NFSU2_TR(0x669e8f);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B669e93:{NFSU2_TR(0x669e93);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B669e94:{NFSU2_TR(0x669e94);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B669e95:L669e95:{c.instructions+=4;NFSU2_TR(0x669e95);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B669e98:{NFSU2_TR(0x669e98);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+4),(U+0),4);
}
B669e9a:{NFSU2_TR(0x669e9a);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B669e9b:{NFSU2_TR(0x669e9b);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1bcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x669ea1ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B669ea1:L669ea1:{c.instructions+=1;NFSU2_TR(0x669ea1);
{goto L669fd5;}
}
B669ea6:L669ea6:{c.instructions+=2;NFSU2_TR(0x669ea6);
u8 U[10];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x31ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+8),(U+4),1);
w1(R+512,u8((r1(U+8))<(u8(0x0ull))));
w1(R+523,sborrow<u8>(r1(U+8),u8(0x0ull)));
w1(U+9,u8(u32(r1(U+8))-u32(u8(0x0ull))));
w1(R+519,u8(s8(r1(U+9))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+9))==(u8(0x0ull))));
w1(U+5,u8(u32(r1(U+9))&u32(u8(0xffull))));
w1(U+6,u8(__builtin_popcountll(u64(r1(U+5)))));
w1(U+7,u8(u32(r1(U+6))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+7))==(u8(0x0ull))));
}
B669eaa:{NFSU2_TR(0x669eaa);
if(r1(R+518)){{goto L669ecc;}}
}
B669eac:L669eac:{c.instructions+=2;NFSU2_TR(0x669eac);
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
B669eae:{NFSU2_TR(0x669eae);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L669ecc;}}
}
B669eb0:L669eb0:{c.instructions+=3;NFSU2_TR(0x669eb0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B669eb3:{NFSU2_TR(0x669eb3);
u8 U[9];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
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
B669eb7:{NFSU2_TR(0x669eb7);
if(r1(R+518)){{goto L669ecf;}}
}
B669eb9:L669eb9:{c.instructions+=8;NFSU2_TR(0x669eb9);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B669ebd:{NFSU2_TR(0x669ebd);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x26ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(r2(U+4)));
}
B669ec1:{NFSU2_TR(0x669ec1);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B669ec4:{NFSU2_TR(0x669ec4);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B669ec5:{NFSU2_TR(0x669ec5);
u8 U[6];
w1(R+512,u8((r4(R+24))<(r4(R+0))));
w1(R+523,sborrow<u32>(r4(R+24),r4(R+0)));
w4(R+24,u32(u32(r4(R+24))-u32(r4(R+0))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B669ec7:{NFSU2_TR(0x669ec7);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B669ec8:{NFSU2_TR(0x669ec8);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B669eca:{NFSU2_TR(0x669eca);
{goto L669eda;}
}
B669ecc:L669ecc:{c.instructions+=1;NFSU2_TR(0x669ecc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B669ecf:L669ecf:{c.instructions+=5;NFSU2_TR(0x669ecf);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x56ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B669ed3:{NFSU2_TR(0x669ed3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B669ed4:{NFSU2_TR(0x669ed4);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B669ed8:{NFSU2_TR(0x669ed8);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B669ed9:{NFSU2_TR(0x669ed9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B669eda:L669eda:{c.instructions+=4;NFSU2_TR(0x669eda);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B669edd:{NFSU2_TR(0x669edd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+4),(U+0),4);
}
B669edf:{NFSU2_TR(0x669edf);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B669ee0:{NFSU2_TR(0x669ee0);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1c4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x669ee6ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B669ee6:L669ee6:{c.instructions+=1;NFSU2_TR(0x669ee6);
{goto L669fd5;}
}
B669eeb:L669eeb:{c.instructions+=2;NFSU2_TR(0x669eeb);
u8 U[10];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+8),(U+4),1);
w1(R+512,u8((r1(U+8))<(u8(0x0ull))));
w1(R+523,sborrow<u8>(r1(U+8),u8(0x0ull)));
w1(U+9,u8(u32(r1(U+8))-u32(u8(0x0ull))));
w1(R+519,u8(s8(r1(U+9))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+9))==(u8(0x0ull))));
w1(U+5,u8(u32(r1(U+9))&u32(u8(0xffull))));
w1(U+6,u8(__builtin_popcountll(u64(r1(U+5)))));
w1(U+7,u8(u32(r1(U+6))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+7))==(u8(0x0ull))));
}
B669eef:{NFSU2_TR(0x669eef);
if(r1(R+518)){{goto L669f11;}}
}
B669ef1:L669ef1:{c.instructions+=2;NFSU2_TR(0x669ef1);
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
B669ef3:{NFSU2_TR(0x669ef3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L669f11;}}
}
B669ef5:L669ef5:{c.instructions+=3;NFSU2_TR(0x669ef5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B669ef8:{NFSU2_TR(0x669ef8);
u8 U[9];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
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
B669efc:{NFSU2_TR(0x669efc);
if(r1(R+518)){{goto L669f14;}}
}
B669efe:L669efe:{c.instructions+=8;NFSU2_TR(0x669efe);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B669f02:{NFSU2_TR(0x669f02);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(r2(U+4)));
}
B669f06:{NFSU2_TR(0x669f06);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B669f09:{NFSU2_TR(0x669f09);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B669f0a:{NFSU2_TR(0x669f0a);
u8 U[6];
w1(R+512,u8((r4(R+24))<(r4(R+0))));
w1(R+523,sborrow<u32>(r4(R+24),r4(R+0)));
w4(R+24,u32(u32(r4(R+24))-u32(r4(R+0))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B669f0c:{NFSU2_TR(0x669f0c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B669f0d:{NFSU2_TR(0x669f0d);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B669f0f:{NFSU2_TR(0x669f0f);
{goto L669f1f;}
}
B669f11:L669f11:{c.instructions+=1;NFSU2_TR(0x669f11);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B669f14:L669f14:{c.instructions+=5;NFSU2_TR(0x669f14);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x56ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B669f18:{NFSU2_TR(0x669f18);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B669f19:{NFSU2_TR(0x669f19);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B669f1d:{NFSU2_TR(0x669f1d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B669f1e:{NFSU2_TR(0x669f1e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B669f1f:L669f1f:{c.instructions+=4;NFSU2_TR(0x669f1f);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B669f22:{NFSU2_TR(0x669f22);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+4),(U+0),4);
}
B669f24:{NFSU2_TR(0x669f24);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B669f25:{NFSU2_TR(0x669f25);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1b4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x669f2bull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B669f2b:L669f2b:{c.instructions+=1;NFSU2_TR(0x669f2b);
{goto L669fd5;}
}
B669f30:L669f30:{c.instructions+=3;NFSU2_TR(0x669f30);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+24))),2);
__builtin_memmove((R+0),(U+0),2);
}
B669f33:{NFSU2_TR(0x669f33);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w2(U+4,u16(u32(r2(R+0))&u32(r2(R+0))));
w1(R+519,u8(s16(r2(U+4))<s16(u16(0x0ull))));
w1(R+518,u8((r2(U+4))==(u16(0x0ull))));
w2(U+0,u16(u32(r2(U+4))&u32(u16(0xffull))));
w1(U+2,u8(__builtin_popcountll(u64(r2(U+0)))));
w1(U+3,u8(u32(r1(U+2))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+3))==(u8(0x0ull))));
}
B669f36:{NFSU2_TR(0x669f36);
if(r1(R+518)){TAIL_STATIC(0x66a1ddu,66a);}
}
B669f3c:L669f3c:{c.instructions+=2;NFSU2_TR(0x669f3c);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B669f40:{NFSU2_TR(0x669f40);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L669f7a;}}
}
B669f42:L669f42:{c.instructions+=8;NFSU2_TR(0x669f42);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(r2(U+4)));
}
B669f46:{NFSU2_TR(0x669f46);
w4(R+0,u32(r2(R+0)));
}
B669f49:{NFSU2_TR(0x669f49);
u8 U[12];
w4(U+0,u32(u32(u32(0xffffffffull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B669f4d:{NFSU2_TR(0x669f4d);
__builtin_memmove((R+0),(R+4),4);
}
B669f4f:{NFSU2_TR(0x669f4f);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x64ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B669f52:{NFSU2_TR(0x669f52);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))+u32(r4(U+4))));
}
B669f55:{NFSU2_TR(0x669f55);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B669f59:{NFSU2_TR(0x669f59);
if(r1(R+518)){{goto L669f68;}}
}
B669f5b:L669f5b:{c.instructions+=3;NFSU2_TR(0x669f5b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B669f5c:{NFSU2_TR(0x669f5c);
__builtin_memmove((R+4),(R+12),4);
}
B669f5e:{NFSU2_TR(0x669f5e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x669f63ull));
TAIL_STATIC(0x668dfdu,668);
}
B669f63:L669f63:{c.instructions+=1;NFSU2_TR(0x669f63);
TAIL_STATIC(0x66a1ddu,66a);
}
B669f68:L669f68:{c.instructions+=4;NFSU2_TR(0x669f68);
u8 U[4];
w4(U+0,u32(0xffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B669f6d:{NFSU2_TR(0x669f6d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B669f6e:{NFSU2_TR(0x669f6e);
__builtin_memmove((R+4),(R+12),4);
}
B669f70:{NFSU2_TR(0x669f70);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x669f75ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6691a1u);}goto L6691a1;}
}
B669f75:L669f75:{c.instructions+=1;NFSU2_TR(0x669f75);
TAIL_STATIC(0x66a1ddu,66a);
}
B669f7a:L669f7a:{c.instructions+=1;NFSU2_TR(0x669f7a);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B669f7c:L669f7c:{c.instructions+=9;NFSU2_TR(0x669f7c);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B669f7e:{NFSU2_TR(0x669f7e);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+0),(U+4),2);
}
B669f82:{NFSU2_TR(0x669f82);
w2(R+0,u16(u32(r2(R+0))+u32(r2(R+28))));
}
B669f85:{NFSU2_TR(0x669f85);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+24))),2);
w2(R+0,u16(u32(r2(R+0))+u32(r2(U+0))));
}
B669f88:{NFSU2_TR(0x669f88);
u8 U[4];
w4(U+0,u32(0xffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B669f8d:{NFSU2_TR(0x669f8d);
__builtin_memmove((R+4),(R+12),4);
}
B669f8f:{NFSU2_TR(0x669f8f);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B669f90:{NFSU2_TR(0x669f90);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B669f91:{NFSU2_TR(0x669f91);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x669f96ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6691a1u);}goto L6691a1;}
}
B669f96:L669f96:{c.instructions+=3;NFSU2_TR(0x669f96);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B669f98:{NFSU2_TR(0x669f98);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B669f9b:{NFSU2_TR(0x669f9b);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L669fa7;}}
}
B669f9d:L669f9d:{c.instructions+=2;NFSU2_TR(0x669f9d);
u8 U[22];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x3cull))));
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
B669fa1:{NFSU2_TR(0x669fa1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x66a1ddu,66a);}
}
B669fa7:L669fa7:{c.instructions+=3;NFSU2_TR(0x669fa7);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B669fa8:{NFSU2_TR(0x669fa8);
u8 U[8];
__builtin_memmove((U+4),(R+28),2);
w1(R+512,u8((r2(U+4))<(u16(0x1ull))));
w1(R+523,sborrow<u16>(r2(U+4),u16(0x1ull)));
w2(U+6,u16(u32(r2(U+4))-u32(u16(0x1ull))));
w1(R+519,u8(s16(r2(U+6))<s16(u16(0x0ull))));
w1(R+518,u8((r2(U+6))==(u16(0x0ull))));
w2(U+0,u16(u32(r2(U+6))&u32(u16(0xffull))));
w1(U+2,u8(__builtin_popcountll(u64(r2(U+0)))));
w1(U+3,u8(u32(r1(U+2))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+3))==(u8(0x0ull))));
}
B669fac:{NFSU2_TR(0x669fac);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x669f7cu);}goto L669f7c;}}
}
B669fae:L669fae:{c.instructions+=1;NFSU2_TR(0x669fae);
TAIL_STATIC(0x66a1ddu,66a);
}
B669fb3:L669fb3:{c.instructions+=3;NFSU2_TR(0x669fb3);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+24))),2);
__builtin_memmove((R+0),(U+0),2);
}
B669fb6:{NFSU2_TR(0x669fb6);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w2(U+4,u16(u32(r2(R+0))&u32(r2(R+0))));
w1(R+519,u8(s16(r2(U+4))<s16(u16(0x0ull))));
w1(R+518,u8((r2(U+4))==(u16(0x0ull))));
w2(U+0,u16(u32(r2(U+4))&u32(u16(0xffull))));
w1(U+2,u8(__builtin_popcountll(u64(r2(U+0)))));
w1(U+3,u8(u32(r1(U+2))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+3))==(u8(0x0ull))));
}
B669fb9:{NFSU2_TR(0x669fb9);
if(r1(R+518)){TAIL_STATIC(0x66a1ddu,66a);}
}
B669fbf:L669fbf:{c.instructions+=2;NFSU2_TR(0x669fbf);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B669fc3:{NFSU2_TR(0x669fc3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L669fdd;}}
}
B669fc5:L669fc5:{c.instructions+=7;NFSU2_TR(0x669fc5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B669fc8:{NFSU2_TR(0x669fc8);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x64ull))));
__builtin_memmove((R+4),(U+0),4);
}
B669fcb:{NFSU2_TR(0x669fcb);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B669fcc:{NFSU2_TR(0x669fcc);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B669fcd:{NFSU2_TR(0x669fcd);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B669fce:{NFSU2_TR(0x669fce);
__builtin_memmove((R+4),(R+12),4);
}
B669fd0:{NFSU2_TR(0x669fd0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x669fd5ull));
TAIL_STATIC(0x668cc0u,668);
}
B669fd5:L669fd5:{c.instructions+=2;NFSU2_TR(0x669fd5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B669fd8:{NFSU2_TR(0x669fd8);
TAIL_STATIC(0x66a1ddu,66a);
}
B669fdd:L669fdd:{c.instructions+=7;NFSU2_TR(0x669fdd);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B669fe0:{NFSU2_TR(0x669fe0);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B669fe2:{NFSU2_TR(0x669fe2);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+4),(U+4),2);
}
B669fe6:{NFSU2_TR(0x669fe6);
w2(R+4,u16(u32(r2(R+4))+u32(r2(R+0))));
}
B669fe9:{NFSU2_TR(0x669fe9);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
}
B669fea:{NFSU2_TR(0x669fea);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B669feb:{NFSU2_TR(0x669feb);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6693aau);}goto L6693aa;}
}
B669ff0:L669ff0:{c.instructions+=5;NFSU2_TR(0x669ff0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B669ff3:{NFSU2_TR(0x669ff3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B669ff6:{NFSU2_TR(0x669ff6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B669ff8:{NFSU2_TR(0x669ff8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B669ff9:{NFSU2_TR(0x669ff9);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x669ffcull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B669ffc:L669ffc:{c.instructions+=2;NFSU2_TR(0x669ffc);
__builtin_memmove((R+24),(R+0),4);
}
B669ffe:{NFSU2_TR(0x669ffe);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
TAIL_STATIC(0x66a002u,66a);
}
XIT:NFSU2_TR_EXIT(0x669,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
