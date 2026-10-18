#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_413(u8* __restrict R,Cpu& c);
u32 body_43c(u8* __restrict R,Cpu& c);
u32 body_43d(u8* __restrict R,Cpu& c);
u32 body_43e(u8* __restrict R,Cpu& c);
u32 body_440(u8* __restrict R,Cpu& c);
u32 body_4ac(u8* __restrict R,Cpu& c);
u32 body_4f9(u8* __restrict R,Cpu& c);
u32 body_4ff(u8* __restrict R,Cpu& c);
u32 body_500(u8* __restrict R,Cpu& c);
u32 body_502(u8* __restrict R,Cpu& c);
u32 body_505(u8* __restrict R,Cpu& c);
u32 body_50b(u8* __restrict R,Cpu& c);
u32 body_511(u8* __restrict R,Cpu& c);
u32 body_512(u8* __restrict R,Cpu& c);
u32 body_513(u8* __restrict R,Cpu& c);
u32 body_519(u8* __restrict R,Cpu& c);
u32 body_524(u8* __restrict R,Cpu& c);
u32 body_525(u8* __restrict R,Cpu& c);
u32 body_527(u8* __restrict R,Cpu& c);
u32 body_528(u8* __restrict R,Cpu& c);
u32 body_529(u8* __restrict R,Cpu& c);
u32 body_52b(u8* __restrict R,Cpu& c);
u32 body_530(u8* __restrict R,Cpu& c);
u32 body_532(u8* __restrict R,Cpu& c);
u32 body_533(u8* __restrict R,Cpu& c);
u32 body_534(u8* __restrict R,Cpu& c);
u32 body_535(u8* __restrict R,Cpu& c);
u32 body_540(u8* __restrict R,Cpu& c);
u32 body_542(u8* __restrict R,Cpu& c);
u32 body_575(u8* __restrict R,Cpu& c);
u32 body_599(u8* __restrict R,Cpu& c);
u32 body_5d3(u8* __restrict R,Cpu& c);
u32 body_75b(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x541,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x541,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_541(u8* __restrict R,Cpu& c);
u32 page_541(Cpu& c){return body_541(c.regs.data(),c);}
__attribute__((noinline)) u32 body_541(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x541000:goto L541000;
case 0x541005:goto L541005;
case 0x541007:c.instructions+=1;goto B541007;
case 0x541009:goto L541009;
case 0x54100a:c.instructions+=2;goto B54100a;
case 0x54100f:c.instructions+=1;goto B54100f;
case 0x541014:goto L541014;
case 0x541016:c.instructions+=1;goto B541016;
case 0x541018:goto L541018;
case 0x54101c:c.instructions+=3;goto B54101c;
case 0x54101f:c.instructions+=2;goto B54101f;
case 0x541021:c.instructions+=1;goto B541021;
case 0x541025:goto L541025;
case 0x541028:c.instructions+=4;goto B541028;
case 0x541029:c.instructions+=3;goto B541029;
case 0x54102c:c.instructions+=2;goto B54102c;
case 0x54102e:c.instructions+=1;goto B54102e;
case 0x541030:goto L541030;
case 0x541034:c.instructions+=5;goto B541034;
case 0x541035:c.instructions+=4;goto B541035;
case 0x541036:c.instructions+=3;goto B541036;
case 0x541037:c.instructions+=2;goto B541037;
case 0x541038:c.instructions+=1;goto B541038;
case 0x541040:goto L541040;
case 0x541041:c.instructions+=9;goto B541041;
case 0x541042:c.instructions+=8;goto B541042;
case 0x541044:c.instructions+=7;goto B541044;
case 0x541047:c.instructions+=6;goto B541047;
case 0x541048:c.instructions+=5;goto B541048;
case 0x54104a:c.instructions+=4;goto B54104a;
case 0x54104c:c.instructions+=3;goto B54104c;
case 0x54104e:c.instructions+=2;goto B54104e;
case 0x541052:c.instructions+=1;goto B541052;
case 0x541054:goto L541054;
case 0x541055:c.instructions+=1;goto B541055;
case 0x541058:goto L541058;
case 0x54105a:c.instructions+=3;goto B54105a;
case 0x54105b:c.instructions+=2;goto B54105b;
case 0x541060:c.instructions+=1;goto B541060;
case 0x541065:goto L541065;
case 0x541067:c.instructions+=1;goto B541067;
case 0x541069:goto L541069;
case 0x54106a:c.instructions+=2;goto B54106a;
case 0x54106f:c.instructions+=1;goto B54106f;
case 0x541074:goto L541074;
case 0x541076:c.instructions+=1;goto B541076;
case 0x541078:goto L541078;
case 0x54107c:goto L54107c;
case 0x54107f:c.instructions+=4;goto B54107f;
case 0x541080:c.instructions+=3;goto B541080;
case 0x541083:c.instructions+=2;goto B541083;
case 0x541085:c.instructions+=1;goto B541085;
case 0x541087:goto L541087;
case 0x54108b:c.instructions+=1;goto B54108b;
case 0x54108c:goto L54108c;
case 0x54108d:c.instructions+=3;goto B54108d;
case 0x54108e:c.instructions+=2;goto B54108e;
case 0x54108f:c.instructions+=1;goto B54108f;
case 0x541090:goto L541090;
case 0x541091:c.instructions+=5;goto B541091;
case 0x541092:c.instructions+=4;goto B541092;
case 0x541096:c.instructions+=3;goto B541096;
case 0x541098:c.instructions+=2;goto B541098;
case 0x54109e:c.instructions+=1;goto B54109e;
case 0x5410a0:goto L5410a0;
case 0x5410a2:c.instructions+=2;goto B5410a2;
case 0x5410a4:c.instructions+=1;goto B5410a4;
case 0x5410a6:goto L5410a6;
case 0x5410a9:c.instructions+=1;goto B5410a9;
case 0x5410ab:goto L5410ab;
case 0x5410ac:c.instructions+=3;goto B5410ac;
case 0x5410af:c.instructions+=2;goto B5410af;
case 0x5410b2:c.instructions+=1;goto B5410b2;
case 0x5410b4:goto L5410b4;
case 0x5410b9:goto L5410b9;
case 0x5410ba:c.instructions+=2;goto B5410ba;
case 0x5410bb:c.instructions+=1;goto B5410bb;
case 0x5410be:goto L5410be;
case 0x5410c1:c.instructions+=2;goto B5410c1;
case 0x5410c8:c.instructions+=1;goto B5410c8;
case 0x5410cd:goto L5410cd;
case 0x5410ce:c.instructions+=2;goto B5410ce;
case 0x5410cf:c.instructions+=1;goto B5410cf;
case 0x5410e0:goto L5410e0;
case 0x5410e1:c.instructions+=7;goto B5410e1;
case 0x5410e3:c.instructions+=6;goto B5410e3;
case 0x5410e4:c.instructions+=5;goto B5410e4;
case 0x5410e7:c.instructions+=4;goto B5410e7;
case 0x5410ed:c.instructions+=3;goto B5410ed;
case 0x5410f0:c.instructions+=2;goto B5410f0;
case 0x5410f1:c.instructions+=1;goto B5410f1;
case 0x5410f6:goto L5410f6;
case 0x5410f7:c.instructions+=3;goto B5410f7;
case 0x5410fd:c.instructions+=2;goto B5410fd;
case 0x541101:c.instructions+=1;goto B541101;
case 0x541106:goto L541106;
case 0x541107:c.instructions+=2;goto B541107;
case 0x54110c:c.instructions+=1;goto B54110c;
case 0x541111:goto L541111;
case 0x541112:c.instructions+=2;goto B541112;
case 0x541113:c.instructions+=1;goto B541113;
case 0x541120:goto L541120;
case 0x541121:c.instructions+=5;goto B541121;
case 0x541123:c.instructions+=4;goto B541123;
case 0x541124:c.instructions+=3;goto B541124;
case 0x541126:c.instructions+=2;goto B541126;
case 0x54112b:c.instructions+=1;goto B54112b;
case 0x541130:goto L541130;
case 0x541132:c.instructions+=9;goto B541132;
case 0x541137:c.instructions+=8;goto B541137;
case 0x54113c:c.instructions+=7;goto B54113c;
case 0x541141:c.instructions+=6;goto B541141;
case 0x541146:c.instructions+=5;goto B541146;
case 0x54114b:c.instructions+=4;goto B54114b;
case 0x54114e:c.instructions+=3;goto B54114e;
case 0x54114f:c.instructions+=2;goto B54114f;
case 0x541155:c.instructions+=1;goto B541155;
case 0x54115a:goto L54115a;
case 0x54115b:c.instructions+=2;goto B54115b;
case 0x54115c:c.instructions+=1;goto B54115c;
case 0x541160:goto L541160;
case 0x541161:c.instructions+=10;goto B541161;
case 0x541163:c.instructions+=9;goto B541163;
case 0x541164:c.instructions+=8;goto B541164;
case 0x541165:c.instructions+=7;goto B541165;
case 0x541167:c.instructions+=6;goto B541167;
case 0x54116d:c.instructions+=5;goto B54116d;
case 0x541170:c.instructions+=4;goto B541170;
case 0x541176:c.instructions+=3;goto B541176;
case 0x541179:c.instructions+=2;goto B541179;
case 0x54117a:c.instructions+=1;goto B54117a;
case 0x54117f:goto L54117f;
case 0x541183:c.instructions+=1;goto B541183;
case 0x541185:goto L541185;
case 0x541189:goto L541189;
case 0x54118a:c.instructions+=2;goto B54118a;
case 0x541190:c.instructions+=1;goto B541190;
case 0x541195:goto L541195;
case 0x541196:c.instructions+=2;goto B541196;
case 0x54119b:c.instructions+=1;goto B54119b;
case 0x5411a0:goto L5411a0;
case 0x5411a5:c.instructions+=1;goto B5411a5;
case 0x5411aa:goto L5411aa;
case 0x5411af:c.instructions+=8;goto B5411af;
case 0x5411b1:c.instructions+=7;goto B5411b1;
case 0x5411b3:c.instructions+=6;goto B5411b3;
case 0x5411b9:c.instructions+=5;goto B5411b9;
case 0x5411bf:c.instructions+=4;goto B5411bf;
case 0x5411c5:c.instructions+=3;goto B5411c5;
case 0x5411cb:c.instructions+=2;goto B5411cb;
case 0x5411d1:c.instructions+=1;goto B5411d1;
case 0x5411d3:goto L5411d3;
case 0x5411d6:c.instructions+=10;goto B5411d6;
case 0x5411dc:c.instructions+=9;goto B5411dc;
case 0x5411df:c.instructions+=8;goto B5411df;
case 0x5411e2:c.instructions+=7;goto B5411e2;
case 0x5411e5:c.instructions+=6;goto B5411e5;
case 0x5411e7:c.instructions+=5;goto B5411e7;
case 0x5411ed:c.instructions+=4;goto B5411ed;
case 0x5411f3:c.instructions+=3;goto B5411f3;
case 0x5411f9:c.instructions+=2;goto B5411f9;
case 0x541200:c.instructions+=1;goto B541200;
case 0x541207:goto L541207;
case 0x541208:c.instructions+=3;goto B541208;
case 0x541209:c.instructions+=2;goto B541209;
case 0x54120a:c.instructions+=1;goto B54120a;
case 0x541210:goto L541210;
case 0x541211:c.instructions+=5;goto B541211;
case 0x541215:c.instructions+=4;goto B541215;
case 0x541217:c.instructions+=3;goto B541217;
case 0x541218:c.instructions+=2;goto B541218;
case 0x54121a:c.instructions+=1;goto B54121a;
case 0x541220:goto L541220;
case 0x541221:c.instructions+=2;goto B541221;
case 0x541225:c.instructions+=1;goto B541225;
case 0x54122a:goto L54122a;
case 0x541230:c.instructions+=2;goto B541230;
case 0x541232:c.instructions+=1;goto B541232;
case 0x541234:goto L541234;
case 0x541237:c.instructions+=1;goto B541237;
case 0x541239:goto L541239;
case 0x54123f:c.instructions+=2;goto B54123f;
case 0x541246:c.instructions+=1;goto B541246;
case 0x541248:goto L541248;
case 0x54124a:goto L54124a;
case 0x541250:c.instructions+=2;goto B541250;
case 0x541252:c.instructions+=1;goto B541252;
case 0x541254:goto L541254;
case 0x541258:c.instructions+=2;goto B541258;
case 0x54125c:c.instructions+=1;goto B54125c;
case 0x54125e:goto L54125e;
case 0x541266:goto L541266;
case 0x54126a:c.instructions+=3;goto B54126a;
case 0x54126c:c.instructions+=2;goto B54126c;
case 0x541272:c.instructions+=1;goto B541272;
case 0x541277:goto L541277;
case 0x541279:c.instructions+=7;goto B541279;
case 0x54127f:c.instructions+=6;goto B54127f;
case 0x541282:c.instructions+=5;goto B541282;
case 0x541284:c.instructions+=4;goto B541284;
case 0x54128a:c.instructions+=3;goto B54128a;
case 0x541290:c.instructions+=2;goto B541290;
case 0x541292:c.instructions+=1;goto B541292;
case 0x541294:goto L541294;
case 0x541298:c.instructions+=5;goto B541298;
case 0x54129e:c.instructions+=4;goto B54129e;
case 0x54129f:c.instructions+=3;goto B54129f;
case 0x5412a0:c.instructions+=2;goto B5412a0;
case 0x5412a1:c.instructions+=1;goto B5412a1;
case 0x5412a6:goto L5412a6;
case 0x5412ac:c.instructions+=4;goto B5412ac;
case 0x5412b2:c.instructions+=3;goto B5412b2;
case 0x5412b3:c.instructions+=2;goto B5412b3;
case 0x5412ba:c.instructions+=1;goto B5412ba;
case 0x5412bf:goto L5412bf;
case 0x5412c0:goto L5412c0;
case 0x5412c1:c.instructions+=2;goto B5412c1;
case 0x5412c2:c.instructions+=1;goto B5412c2;
case 0x5412d0:goto L5412d0;
case 0x5412d1:c.instructions+=3;goto B5412d1;
case 0x5412d6:c.instructions+=2;goto B5412d6;
case 0x5412d8:c.instructions+=1;goto B5412d8;
case 0x5412dd:goto L5412dd;
case 0x5412e0:c.instructions+=3;goto B5412e0;
case 0x5412e1:c.instructions+=2;goto B5412e1;
case 0x5412e3:c.instructions+=1;goto B5412e3;
case 0x5412e8:goto L5412e8;
case 0x5412ed:goto L5412ed;
case 0x5412ef:c.instructions+=6;goto B5412ef;
case 0x5412f1:c.instructions+=5;goto B5412f1;
case 0x5412f7:c.instructions+=4;goto B5412f7;
case 0x5412fd:c.instructions+=3;goto B5412fd;
case 0x541303:c.instructions+=2;goto B541303;
case 0x541309:c.instructions+=1;goto B541309;
case 0x54130e:goto L54130e;
case 0x541310:c.instructions+=2;goto B541310;
case 0x541311:c.instructions+=1;goto B541311;
case 0x541320:goto L541320;
case 0x541325:c.instructions+=5;goto B541325;
case 0x541326:c.instructions+=4;goto B541326;
case 0x541328:c.instructions+=3;goto B541328;
case 0x54132d:c.instructions+=2;goto B54132d;
case 0x54132f:c.instructions+=1;goto B54132f;
case 0x541335:goto L541335;
case 0x54133b:c.instructions+=4;goto B54133b;
case 0x54133c:c.instructions+=3;goto B54133c;
case 0x541340:c.instructions+=2;goto B541340;
case 0x541342:c.instructions+=1;goto B541342;
case 0x541344:goto L541344;
case 0x541346:c.instructions+=1;goto B541346;
case 0x541348:goto L541348;
case 0x54134b:c.instructions+=1;goto B54134b;
case 0x54134d:goto L54134d;
case 0x541353:c.instructions+=2;goto B541353;
case 0x54135a:c.instructions+=1;goto B54135a;
case 0x54135c:goto L54135c;
case 0x54135e:goto L54135e;
case 0x541364:c.instructions+=2;goto B541364;
case 0x541366:c.instructions+=1;goto B541366;
case 0x541368:goto L541368;
case 0x54136c:c.instructions+=2;goto B54136c;
case 0x541372:c.instructions+=1;goto B541372;
case 0x541374:goto L541374;
case 0x54137a:c.instructions+=4;goto B54137a;
case 0x54137c:c.instructions+=3;goto B54137c;
case 0x54137e:c.instructions+=2;goto B54137e;
case 0x541384:c.instructions+=1;goto B541384;
case 0x541386:goto L541386;
case 0x541388:c.instructions+=1;goto B541388;
case 0x54138a:goto L54138a;
case 0x54138d:c.instructions+=1;goto B54138d;
case 0x54138f:goto L54138f;
case 0x541395:c.instructions+=2;goto B541395;
case 0x54139c:c.instructions+=1;goto B54139c;
case 0x54139e:goto L54139e;
case 0x5413a0:goto L5413a0;
case 0x5413a6:c.instructions+=2;goto B5413a6;
case 0x5413a8:c.instructions+=1;goto B5413a8;
case 0x5413aa:goto L5413aa;
case 0x5413ae:c.instructions+=1;goto B5413ae;
case 0x5413b0:goto L5413b0;
case 0x5413b2:goto L5413b2;
case 0x5413b8:c.instructions+=1;goto B5413b8;
case 0x5413ba:goto L5413ba;
case 0x5413c4:goto L5413c4;
case 0x5413ca:c.instructions+=5;goto B5413ca;
case 0x5413d0:c.instructions+=4;goto B5413d0;
case 0x5413d6:c.instructions+=3;goto B5413d6;
case 0x5413d8:c.instructions+=2;goto B5413d8;
case 0x5413df:c.instructions+=1;goto B5413df;
case 0x5413e1:goto L5413e1;
case 0x5413e3:c.instructions+=1;goto B5413e3;
case 0x5413e5:goto L5413e5;
case 0x5413eb:goto L5413eb;
case 0x5413ec:c.instructions+=2;goto B5413ec;
case 0x5413f2:c.instructions+=1;goto B5413f2;
case 0x5413f7:goto L5413f7;
case 0x5413f8:c.instructions+=2;goto B5413f8;
case 0x5413fe:c.instructions+=1;goto B5413fe;
case 0x541403:goto L541403;
case 0x541404:c.instructions+=2;goto B541404;
case 0x54140a:c.instructions+=1;goto B54140a;
case 0x54140f:goto L54140f;
case 0x541411:c.instructions+=1;goto B541411;
case 0x541416:goto L541416;
case 0x54141b:goto L54141b;
case 0x54141c:goto L54141c;
case 0x54141d:c.instructions+=1;goto B54141d;
case 0x541420:goto L541420;
case 0x541421:c.instructions+=9;goto B541421;
case 0x541422:c.instructions+=8;goto B541422;
case 0x541423:c.instructions+=7;goto B541423;
case 0x541425:c.instructions+=6;goto B541425;
case 0x54142b:c.instructions+=5;goto B54142b;
case 0x54142d:c.instructions+=4;goto B54142d;
case 0x541433:c.instructions+=3;goto B541433;
case 0x541434:c.instructions+=2;goto B541434;
case 0x541439:c.instructions+=1;goto B541439;
case 0x54143b:goto L54143b;
case 0x54143e:c.instructions+=2;goto B54143e;
case 0x541440:c.instructions+=1;goto B541440;
case 0x541442:goto L541442;
case 0x541447:goto L541447;
case 0x541448:c.instructions+=3;goto B541448;
case 0x54144c:c.instructions+=2;goto B54144c;
case 0x54144d:c.instructions+=1;goto B54144d;
case 0x541452:goto L541452;
case 0x541458:c.instructions+=5;goto B541458;
case 0x54145a:c.instructions+=4;goto B54145a;
case 0x54145d:c.instructions+=3;goto B54145d;
case 0x54145f:c.instructions+=2;goto B54145f;
case 0x541461:c.instructions+=1;goto B541461;
case 0x541463:goto L541463;
case 0x541469:c.instructions+=1;goto B541469;
case 0x541470:goto L541470;
case 0x541472:c.instructions+=1;goto B541472;
case 0x541474:goto L541474;
case 0x541475:c.instructions+=3;goto B541475;
case 0x541478:c.instructions+=2;goto B541478;
case 0x54147a:c.instructions+=1;goto B54147a;
case 0x54147c:goto L54147c;
case 0x54147e:goto L54147e;
case 0x541482:c.instructions+=4;goto B541482;
case 0x541486:c.instructions+=3;goto B541486;
case 0x541488:c.instructions+=2;goto B541488;
case 0x541489:c.instructions+=1;goto B541489;
case 0x54148b:goto L54148b;
case 0x541491:c.instructions+=2;goto B541491;
case 0x541493:c.instructions+=1;goto B541493;
case 0x541495:goto L541495;
case 0x541497:c.instructions+=1;goto B541497;
case 0x54149c:goto L54149c;
case 0x5414a2:c.instructions+=5;goto B5414a2;
case 0x5414a4:c.instructions+=4;goto B5414a4;
case 0x5414a5:c.instructions+=3;goto B5414a5;
case 0x5414a7:c.instructions+=2;goto B5414a7;
case 0x5414ad:c.instructions+=1;goto B5414ad;
case 0x5414b2:goto L5414b2;
case 0x5414b6:c.instructions+=5;goto B5414b6;
case 0x5414bc:c.instructions+=4;goto B5414bc;
case 0x5414bd:c.instructions+=3;goto B5414bd;
case 0x5414c4:c.instructions+=2;goto B5414c4;
case 0x5414c7:c.instructions+=1;goto B5414c7;
case 0x5414cc:goto L5414cc;
case 0x5414ce:goto L5414ce;
case 0x5414d5:c.instructions+=1;goto B5414d5;
case 0x5414d7:goto L5414d7;
case 0x5414da:c.instructions+=1;goto B5414da;
case 0x5414e0:goto L5414e0;
case 0x5414e1:c.instructions+=2;goto B5414e1;
case 0x5414e7:c.instructions+=1;goto B5414e7;
case 0x5414ec:goto L5414ec;
case 0x5414ed:c.instructions+=2;goto B5414ed;
case 0x5414f3:c.instructions+=1;goto B5414f3;
case 0x5414f8:goto L5414f8;
case 0x5414fc:c.instructions+=4;goto B5414fc;
case 0x541502:c.instructions+=3;goto B541502;
case 0x541509:c.instructions+=2;goto B541509;
case 0x54150a:c.instructions+=1;goto B54150a;
case 0x54150f:goto L54150f;
case 0x541514:goto L541514;
case 0x541516:c.instructions+=3;goto B541516;
case 0x541517:c.instructions+=2;goto B541517;
case 0x54151d:c.instructions+=1;goto B54151d;
case 0x541522:goto L541522;
case 0x541528:c.instructions+=1;goto B541528;
case 0x54152d:goto L54152d;
case 0x54152e:c.instructions+=4;goto B54152e;
case 0x54152f:c.instructions+=3;goto B54152f;
case 0x541530:c.instructions+=2;goto B541530;
case 0x541531:c.instructions+=1;goto B541531;
case 0x541540:goto L541540;
case 0x541541:c.instructions+=7;goto B541541;
case 0x541542:c.instructions+=6;goto B541542;
case 0x541546:c.instructions+=5;goto B541546;
case 0x541548:c.instructions+=4;goto B541548;
case 0x541549:c.instructions+=3;goto B541549;
case 0x54154e:c.instructions+=2;goto B54154e;
case 0x541555:c.instructions+=1;goto B541555;
case 0x54155a:goto L54155a;
case 0x54155d:c.instructions+=6;goto B54155d;
case 0x541563:c.instructions+=5;goto B541563;
case 0x541567:c.instructions+=4;goto B541567;
case 0x541568:c.instructions+=3;goto B541568;
case 0x541569:c.instructions+=2;goto B541569;
case 0x54156e:c.instructions+=1;goto B54156e;
case 0x541573:goto L541573;
case 0x541574:c.instructions+=2;goto B541574;
case 0x541575:c.instructions+=1;goto B541575;
case 0x541580:goto L541580;
case 0x541581:c.instructions+=4;goto B541581;
case 0x541583:c.instructions+=3;goto B541583;
case 0x541589:c.instructions+=2;goto B541589;
case 0x54158d:c.instructions+=1;goto B54158d;
case 0x54158f:goto L54158f;
case 0x541594:c.instructions+=3;goto B541594;
case 0x541597:c.instructions+=2;goto B541597;
case 0x54159e:c.instructions+=1;goto B54159e;
case 0x5415a3:goto L5415a3;
case 0x5415a9:c.instructions+=2;goto B5415a9;
case 0x5415ab:c.instructions+=1;goto B5415ab;
case 0x5415ad:goto L5415ad;
case 0x5415b3:c.instructions+=9;goto B5415b3;
case 0x5415b9:c.instructions+=8;goto B5415b9;
case 0x5415bf:c.instructions+=7;goto B5415bf;
case 0x5415c3:c.instructions+=6;goto B5415c3;
case 0x5415c5:c.instructions+=5;goto B5415c5;
case 0x5415c7:c.instructions+=4;goto B5415c7;
case 0x5415c9:c.instructions+=3;goto B5415c9;
case 0x5415cf:c.instructions+=2;goto B5415cf;
case 0x5415d0:c.instructions+=1;goto B5415d0;
case 0x5415d1:goto L5415d1;
case 0x5415d3:c.instructions+=3;goto B5415d3;
case 0x5415d9:c.instructions+=2;goto B5415d9;
case 0x5415da:c.instructions+=1;goto B5415da;
case 0x5415e0:goto L5415e0;
case 0x5415e1:c.instructions+=9;goto B5415e1;
case 0x5415e3:c.instructions+=8;goto B5415e3;
case 0x5415e6:c.instructions+=7;goto B5415e6;
case 0x5415e9:c.instructions+=6;goto B5415e9;
case 0x5415ea:c.instructions+=5;goto B5415ea;
case 0x5415eb:c.instructions+=4;goto B5415eb;
case 0x5415ec:c.instructions+=3;goto B5415ec;
case 0x5415ed:c.instructions+=2;goto B5415ed;
case 0x5415ee:c.instructions+=1;goto B5415ee;
case 0x5415f3:goto L5415f3;
case 0x5415f5:c.instructions+=3;goto B5415f5;
case 0x5415f8:c.instructions+=2;goto B5415f8;
case 0x5415fa:c.instructions+=1;goto B5415fa;
case 0x5415ff:goto L5415ff;
case 0x541602:c.instructions+=6;goto B541602;
case 0x541605:c.instructions+=5;goto B541605;
case 0x54160b:c.instructions+=4;goto B54160b;
case 0x54160d:c.instructions+=3;goto B54160d;
case 0x54160f:c.instructions+=2;goto B54160f;
case 0x541615:c.instructions+=1;goto B541615;
case 0x54161a:goto L54161a;
case 0x54161d:c.instructions+=1;goto B54161d;
case 0x54161f:goto L54161f;
case 0x541624:c.instructions+=2;goto B541624;
case 0x541626:c.instructions+=1;goto B541626;
case 0x541628:goto L541628;
case 0x54162e:c.instructions+=2;goto B54162e;
case 0x541630:c.instructions+=1;goto B541630;
case 0x541632:goto L541632;
case 0x541634:c.instructions+=4;goto B541634;
case 0x541636:c.instructions+=3;goto B541636;
case 0x541638:c.instructions+=2;goto B541638;
case 0x54163f:c.instructions+=1;goto B54163f;
case 0x541641:goto L541641;
case 0x541644:c.instructions+=1;goto B541644;
case 0x541647:goto L541647;
case 0x54164c:c.instructions+=14;goto B54164c;
case 0x54164e:c.instructions+=13;goto B54164e;
case 0x541651:c.instructions+=12;goto B541651;
case 0x541654:c.instructions+=11;goto B541654;
case 0x541656:c.instructions+=10;goto B541656;
case 0x541659:c.instructions+=9;goto B541659;
case 0x54165b:c.instructions+=8;goto B54165b;
case 0x54165d:c.instructions+=7;goto B54165d;
case 0x54165f:c.instructions+=6;goto B54165f;
case 0x541660:c.instructions+=5;goto B541660;
case 0x541662:c.instructions+=4;goto B541662;
case 0x541663:c.instructions+=3;goto B541663;
case 0x541664:c.instructions+=2;goto B541664;
case 0x541665:c.instructions+=1;goto B541665;
case 0x541668:goto L541668;
case 0x54166a:c.instructions+=2;goto B54166a;
case 0x54166d:c.instructions+=1;goto B54166d;
case 0x54166f:goto L54166f;
case 0x541671:c.instructions+=5;goto B541671;
case 0x541672:c.instructions+=4;goto B541672;
case 0x541673:c.instructions+=3;goto B541673;
case 0x541674:c.instructions+=2;goto B541674;
case 0x541675:c.instructions+=1;goto B541675;
case 0x541680:goto L541680;
case 0x541681:c.instructions+=5;goto B541681;
case 0x541683:c.instructions+=4;goto B541683;
case 0x541684:c.instructions+=3;goto B541684;
case 0x54168a:c.instructions+=2;goto B54168a;
case 0x54168c:c.instructions+=1;goto B54168c;
case 0x541691:goto L541691;
case 0x541693:c.instructions+=1;goto B541693;
case 0x541699:goto L541699;
case 0x54169b:c.instructions+=1;goto B54169b;
case 0x5416a0:goto L5416a0;
case 0x5416a1:c.instructions+=1;goto B5416a1;
case 0x5416a6:goto L5416a6;
case 0x5416a9:c.instructions+=2;goto B5416a9;
case 0x5416ab:c.instructions+=1;goto B5416ab;
case 0x5416ad:goto L5416ad;
case 0x5416b0:c.instructions+=1;goto B5416b0;
case 0x5416b2:goto L5416b2;
case 0x5416b9:c.instructions+=1;goto B5416b9;
case 0x5416bb:goto L5416bb;
case 0x5416bd:goto L5416bd;
case 0x5416be:c.instructions+=3;goto B5416be;
case 0x5416bf:c.instructions+=2;goto B5416bf;
case 0x5416c1:c.instructions+=1;goto B5416c1;
case 0x5416c6:goto L5416c6;
case 0x5416cd:c.instructions+=5;goto B5416cd;
case 0x5416d1:c.instructions+=4;goto B5416d1;
case 0x5416d7:c.instructions+=3;goto B5416d7;
case 0x5416d8:c.instructions+=2;goto B5416d8;
case 0x5416df:c.instructions+=1;goto B5416df;
case 0x5416e4:goto L5416e4;
case 0x5416e7:c.instructions+=3;goto B5416e7;
case 0x5416e8:c.instructions+=2;goto B5416e8;
case 0x5416ea:c.instructions+=1;goto B5416ea;
case 0x5416ef:goto L5416ef;
case 0x5416f5:c.instructions+=4;goto B5416f5;
case 0x5416fb:c.instructions+=3;goto B5416fb;
case 0x541702:c.instructions+=2;goto B541702;
case 0x541704:c.instructions+=1;goto B541704;
case 0x541709:goto L541709;
case 0x54170b:c.instructions+=1;goto B54170b;
case 0x541711:goto L541711;
case 0x541716:c.instructions+=3;goto B541716;
case 0x541718:c.instructions+=2;goto B541718;
case 0x54171a:c.instructions+=1;goto B54171a;
case 0x54171f:goto L54171f;
case 0x541721:c.instructions+=1;goto B541721;
case 0x541723:goto L541723;
case 0x541729:c.instructions+=3;goto B541729;
case 0x54172f:c.instructions+=2;goto B54172f;
case 0x541730:c.instructions+=1;goto B541730;
case 0x541737:goto L541737;
case 0x54173c:c.instructions+=3;goto B54173c;
case 0x54173e:c.instructions+=2;goto B54173e;
case 0x54173f:c.instructions+=1;goto B54173f;
case 0x541744:goto L541744;
case 0x541746:c.instructions+=1;goto B541746;
case 0x541748:goto L541748;
case 0x541749:goto L541749;
case 0x54174e:c.instructions+=2;goto B54174e;
case 0x541750:c.instructions+=1;goto B541750;
case 0x541755:goto L541755;
case 0x541756:c.instructions+=1;goto B541756;
case 0x54175b:goto L54175b;
case 0x541761:c.instructions+=5;goto B541761;
case 0x541767:c.instructions+=4;goto B541767;
case 0x54176a:c.instructions+=3;goto B54176a;
case 0x54176c:c.instructions+=2;goto B54176c;
case 0x54176f:c.instructions+=1;goto B54176f;
case 0x541771:goto L541771;
case 0x541777:c.instructions+=3;goto B541777;
case 0x54177b:c.instructions+=2;goto B54177b;
case 0x54177d:c.instructions+=1;goto B54177d;
case 0x54177f:goto L54177f;
case 0x541783:c.instructions+=1;goto B541783;
case 0x541785:goto L541785;
case 0x541787:goto L541787;
case 0x54178d:c.instructions+=2;goto B54178d;
case 0x54178f:c.instructions+=1;goto B54178f;
case 0x541791:goto L541791;
case 0x541797:c.instructions+=3;goto B541797;
case 0x541799:c.instructions+=2;goto B541799;
case 0x54179b:c.instructions+=1;goto B54179b;
case 0x54179d:goto L54179d;
case 0x5417a2:goto L5417a2;
case 0x5417a5:c.instructions+=1;goto B5417a5;
case 0x5417a7:goto L5417a7;
case 0x5417a8:c.instructions+=3;goto B5417a8;
case 0x5417ae:c.instructions+=2;goto B5417ae;
case 0x5417b0:c.instructions+=1;goto B5417b0;
case 0x5417b2:goto L5417b2;
case 0x5417b4:goto L5417b4;
case 0x5417ba:c.instructions+=1;goto B5417ba;
case 0x5417c1:goto L5417c1;
case 0x5417c5:c.instructions+=4;goto B5417c5;
case 0x5417cb:c.instructions+=3;goto B5417cb;
case 0x5417d1:c.instructions+=2;goto B5417d1;
case 0x5417d7:c.instructions+=1;goto B5417d7;
case 0x5417de:goto L5417de;
case 0x5417e0:c.instructions+=1;goto B5417e0;
case 0x5417e5:goto L5417e5;
case 0x5417e6:c.instructions+=3;goto B5417e6;
case 0x5417e7:c.instructions+=2;goto B5417e7;
case 0x5417e8:c.instructions+=1;goto B5417e8;
case 0x5417ed:goto L5417ed;
case 0x5417ee:c.instructions+=2;goto B5417ee;
case 0x5417ef:c.instructions+=1;goto B5417ef;
case 0x5417f0:goto L5417f0;
case 0x5417f5:c.instructions+=6;goto B5417f5;
case 0x5417f6:c.instructions+=5;goto B5417f6;
case 0x5417f8:c.instructions+=4;goto B5417f8;
case 0x5417fa:c.instructions+=3;goto B5417fa;
case 0x5417fb:c.instructions+=2;goto B5417fb;
case 0x5417fd:c.instructions+=1;goto B5417fd;
case 0x5417ff:goto L5417ff;
case 0x541804:goto L541804;
case 0x54180a:goto L54180a;
case 0x541810:c.instructions+=1;goto B541810;
case 0x541812:goto L541812;
case 0x541814:c.instructions+=1;goto B541814;
case 0x541819:goto L541819;
case 0x54181f:goto L54181f;
case 0x541825:c.instructions+=1;goto B541825;
case 0x54182b:goto L54182b;
case 0x54182c:c.instructions+=2;goto B54182c;
case 0x54182e:c.instructions+=1;goto B54182e;
case 0x541833:goto L541833;
case 0x541835:c.instructions+=1;goto B541835;
case 0x54183a:goto L54183a;
case 0x541840:c.instructions+=4;goto B541840;
case 0x541846:c.instructions+=3;goto B541846;
case 0x54184d:c.instructions+=2;goto B54184d;
case 0x54184f:c.instructions+=1;goto B54184f;
case 0x541854:goto L541854;
case 0x541856:c.instructions+=1;goto B541856;
case 0x54185c:goto L54185c;
case 0x54185d:c.instructions+=4;goto B54185d;
case 0x541862:c.instructions+=3;goto B541862;
case 0x541864:c.instructions+=2;goto B541864;
case 0x541866:c.instructions+=1;goto B541866;
case 0x54186b:goto L54186b;
case 0x54186d:c.instructions+=1;goto B54186d;
case 0x54186f:goto L54186f;
case 0x541870:goto L541870;
case 0x541875:c.instructions+=3;goto B541875;
case 0x541877:c.instructions+=2;goto B541877;
case 0x541878:c.instructions+=1;goto B541878;
case 0x54187d:goto L54187d;
case 0x54187f:c.instructions+=1;goto B54187f;
case 0x541881:goto L541881;
case 0x541886:c.instructions+=2;goto B541886;
case 0x541888:c.instructions+=1;goto B541888;
case 0x54188d:goto L54188d;
case 0x54188e:c.instructions+=1;goto B54188e;
case 0x541893:goto L541893;
case 0x541899:c.instructions+=6;goto B541899;
case 0x54189f:c.instructions+=5;goto B54189f;
case 0x5418a2:c.instructions+=4;goto B5418a2;
case 0x5418a4:c.instructions+=3;goto B5418a4;
case 0x5418a7:c.instructions+=2;goto B5418a7;
case 0x5418a8:c.instructions+=1;goto B5418a8;
case 0x5418aa:goto L5418aa;
case 0x5418b0:c.instructions+=3;goto B5418b0;
case 0x5418b4:c.instructions+=2;goto B5418b4;
case 0x5418b6:c.instructions+=1;goto B5418b6;
case 0x5418b8:goto L5418b8;
case 0x5418bc:c.instructions+=1;goto B5418bc;
case 0x5418be:goto L5418be;
case 0x5418c0:goto L5418c0;
case 0x5418c6:c.instructions+=1;goto B5418c6;
case 0x5418c8:goto L5418c8;
case 0x5418ce:c.instructions+=3;goto B5418ce;
case 0x5418d0:c.instructions+=2;goto B5418d0;
case 0x5418d2:c.instructions+=1;goto B5418d2;
case 0x5418d4:goto L5418d4;
case 0x5418d9:c.instructions+=1;goto B5418d9;
case 0x5418e0:goto L5418e0;
case 0x5418e2:c.instructions+=1;goto B5418e2;
case 0x5418e4:goto L5418e4;
case 0x5418e5:c.instructions+=3;goto B5418e5;
case 0x5418eb:c.instructions+=2;goto B5418eb;
case 0x5418ed:c.instructions+=1;goto B5418ed;
case 0x5418ef:goto L5418ef;
case 0x5418f1:goto L5418f1;
case 0x5418f7:c.instructions+=1;goto B5418f7;
case 0x5418fd:goto L5418fd;
case 0x541901:c.instructions+=4;goto B541901;
case 0x541907:c.instructions+=3;goto B541907;
case 0x54190d:c.instructions+=2;goto B54190d;
case 0x541913:c.instructions+=1;goto B541913;
case 0x54191a:goto L54191a;
case 0x54191c:c.instructions+=1;goto B54191c;
case 0x541921:goto L541921;
case 0x541927:c.instructions+=1;goto B541927;
case 0x541928:goto L541928;
case 0x541929:c.instructions+=2;goto B541929;
case 0x54192a:c.instructions+=1;goto B54192a;
case 0x541930:goto L541930;
case 0x541931:c.instructions+=5;goto B541931;
case 0x541933:c.instructions+=4;goto B541933;
case 0x541934:c.instructions+=3;goto B541934;
case 0x541937:c.instructions+=2;goto B541937;
case 0x541939:c.instructions+=1;goto B541939;
case 0x54193b:goto L54193b;
case 0x54193c:c.instructions+=2;goto B54193c;
case 0x541941:c.instructions+=1;goto B541941;
case 0x541946:goto L541946;
case 0x541949:c.instructions+=1;goto B541949;
case 0x54194e:goto L54194e;
case 0x54194f:c.instructions+=2;goto B54194f;
case 0x541950:c.instructions+=1;goto B541950;
case 0x541960:goto L541960;
case 0x541961:c.instructions+=3;goto B541961;
case 0x541963:c.instructions+=2;goto B541963;
case 0x54196a:c.instructions+=1;goto B54196a;
case 0x54196c:goto L54196c;
case 0x54196f:c.instructions+=6;goto B54196f;
case 0x541975:c.instructions+=5;goto B541975;
case 0x54197f:c.instructions+=4;goto B54197f;
case 0x541982:c.instructions+=3;goto B541982;
case 0x541984:c.instructions+=2;goto B541984;
case 0x541985:c.instructions+=1;goto B541985;
case 0x54198a:goto L54198a;
case 0x54198d:c.instructions+=3;goto B54198d;
case 0x54198e:c.instructions+=2;goto B54198e;
case 0x541993:c.instructions+=1;goto B541993;
case 0x541998:goto L541998;
case 0x54199c:c.instructions+=4;goto B54199c;
case 0x54199e:c.instructions+=3;goto B54199e;
case 0x5419a4:c.instructions+=2;goto B5419a4;
case 0x5419a7:c.instructions+=1;goto B5419a7;
case 0x5419ac:goto L5419ac;
case 0x5419b1:goto L5419b1;
case 0x5419b2:c.instructions+=1;goto B5419b2;
case 0x5419c0:goto L5419c0;
case 0x5419c6:c.instructions+=8;goto B5419c6;
case 0x5419c7:c.instructions+=7;goto B5419c7;
case 0x5419c9:c.instructions+=6;goto B5419c9;
case 0x5419cc:c.instructions+=5;goto B5419cc;
case 0x5419d6:c.instructions+=4;goto B5419d6;
case 0x5419d9:c.instructions+=3;goto B5419d9;
case 0x5419db:c.instructions+=2;goto B5419db;
case 0x5419dc:c.instructions+=1;goto B5419dc;
case 0x5419e1:goto L5419e1;
case 0x5419e4:c.instructions+=3;goto B5419e4;
case 0x5419e5:c.instructions+=2;goto B5419e5;
case 0x5419ea:c.instructions+=1;goto B5419ea;
case 0x5419ef:goto L5419ef;
case 0x5419f3:c.instructions+=4;goto B5419f3;
case 0x5419f5:c.instructions+=3;goto B5419f5;
case 0x5419fb:c.instructions+=2;goto B5419fb;
case 0x5419fe:c.instructions+=1;goto B5419fe;
case 0x541a03:goto L541a03;
case 0x541a04:c.instructions+=1;goto B541a04;
case 0x541a10:goto L541a10;
case 0x541a17:c.instructions+=2;goto B541a17;
case 0x541a21:c.instructions+=1;goto B541a21;
case 0x541a23:goto L541a23;
case 0x541a28:c.instructions+=2;goto B541a28;
case 0x541a2a:c.instructions+=1;goto B541a2a;
case 0x541a2c:goto L541a2c;
case 0x541a2e:c.instructions+=2;goto B541a2e;
case 0x541a33:c.instructions+=1;goto B541a33;
case 0x541a38:goto L541a38;
case 0x541a3d:c.instructions+=1;goto B541a3d;
case 0x541a44:goto L541a44;
case 0x541a50:goto L541a50;
case 0x541a51:c.instructions+=11;goto B541a51;
case 0x541a52:c.instructions+=10;goto B541a52;
case 0x541a54:c.instructions+=9;goto B541a54;
case 0x541a56:c.instructions+=8;goto B541a56;
case 0x541a58:c.instructions+=7;goto B541a58;
case 0x541a5b:c.instructions+=6;goto B541a5b;
case 0x541a5e:c.instructions+=5;goto B541a5e;
case 0x541a5f:c.instructions+=4;goto B541a5f;
case 0x541a61:c.instructions+=3;goto B541a61;
case 0x541a66:c.instructions+=2;goto B541a66;
case 0x541a67:c.instructions+=1;goto B541a67;
case 0x541a6c:goto L541a6c;
case 0x541a6e:c.instructions+=4;goto B541a6e;
case 0x541a71:c.instructions+=3;goto B541a71;
case 0x541a73:c.instructions+=2;goto B541a73;
case 0x541a78:c.instructions+=1;goto B541a78;
case 0x541a7a:goto L541a7a;
case 0x541a80:c.instructions+=2;goto B541a80;
case 0x541a82:c.instructions+=1;goto B541a82;
case 0x541a84:goto L541a84;
case 0x541a89:c.instructions+=1;goto B541a89;
case 0x541a8b:goto L541a8b;
case 0x541a8d:c.instructions+=1;goto B541a8d;
case 0x541a8f:goto L541a8f;
case 0x541a91:c.instructions+=1;goto B541a91;
case 0x541a93:goto L541a93;
case 0x541a95:c.instructions+=1;goto B541a95;
case 0x541a97:goto L541a97;
case 0x541a99:c.instructions+=1;goto B541a99;
case 0x541a9b:goto L541a9b;
case 0x541a9d:c.instructions+=1;goto B541a9d;
case 0x541a9f:goto L541a9f;
case 0x541aa4:c.instructions+=1;goto B541aa4;
case 0x541aa6:goto L541aa6;
case 0x541aa9:goto L541aa9;
case 0x541aaf:c.instructions+=5;goto B541aaf;
case 0x541ab5:c.instructions+=4;goto B541ab5;
case 0x541ab6:c.instructions+=3;goto B541ab6;
case 0x541ab9:c.instructions+=2;goto B541ab9;
case 0x541abf:c.instructions+=1;goto B541abf;
case 0x541ac1:goto L541ac1;
case 0x541ac4:c.instructions+=2;goto B541ac4;
case 0x541acb:c.instructions+=1;goto B541acb;
case 0x541ad2:goto L541ad2;
case 0x541ad4:c.instructions+=1;goto B541ad4;
case 0x541ad6:goto L541ad6;
case 0x541adc:c.instructions+=5;goto B541adc;
case 0x541ae2:c.instructions+=4;goto B541ae2;
case 0x541ae3:c.instructions+=3;goto B541ae3;
case 0x541ae6:c.instructions+=2;goto B541ae6;
case 0x541aec:c.instructions+=1;goto B541aec;
case 0x541aee:goto L541aee;
case 0x541af1:c.instructions+=4;goto B541af1;
case 0x541af8:c.instructions+=3;goto B541af8;
case 0x541aff:c.instructions+=2;goto B541aff;
case 0x541b00:c.instructions+=1;goto B541b00;
case 0x541b02:goto L541b02;
case 0x541b08:goto L541b08;
case 0x541b0e:c.instructions+=3;goto B541b0e;
case 0x541b0f:c.instructions+=2;goto B541b0f;
case 0x541b10:c.instructions+=1;goto B541b10;
case 0x541b12:goto L541b12;
case 0x541b18:c.instructions+=6;goto B541b18;
case 0x541b1e:c.instructions+=5;goto B541b1e;
case 0x541b24:c.instructions+=4;goto B541b24;
case 0x541b2a:c.instructions+=3;goto B541b2a;
case 0x541b2f:c.instructions+=2;goto B541b2f;
case 0x541b30:c.instructions+=1;goto B541b30;
case 0x541b35:goto L541b35;
case 0x541b36:c.instructions+=1;goto B541b36;
case 0x541b40:goto L541b40;
case 0x541b41:c.instructions+=25;goto B541b41;
case 0x541b43:c.instructions+=24;goto B541b43;
case 0x541b46:c.instructions+=23;goto B541b46;
case 0x541b48:c.instructions+=22;goto B541b48;
case 0x541b4d:c.instructions+=21;goto B541b4d;
case 0x541b53:c.instructions+=20;goto B541b53;
case 0x541b54:c.instructions+=19;goto B541b54;
case 0x541b5b:c.instructions+=18;goto B541b5b;
case 0x541b5e:c.instructions+=17;goto B541b5e;
case 0x541b5f:c.instructions+=16;goto B541b5f;
case 0x541b63:c.instructions+=15;goto B541b63;
case 0x541b67:c.instructions+=14;goto B541b67;
case 0x541b68:c.instructions+=13;goto B541b68;
case 0x541b6c:c.instructions+=12;goto B541b6c;
case 0x541b70:c.instructions+=11;goto B541b70;
case 0x541b76:c.instructions+=10;goto B541b76;
case 0x541b7c:c.instructions+=9;goto B541b7c;
case 0x541b81:c.instructions+=8;goto B541b81;
case 0x541b83:c.instructions+=7;goto B541b83;
case 0x541b89:c.instructions+=6;goto B541b89;
case 0x541b8b:c.instructions+=5;goto B541b8b;
case 0x541b8d:c.instructions+=4;goto B541b8d;
case 0x541b8f:c.instructions+=3;goto B541b8f;
case 0x541b91:c.instructions+=2;goto B541b91;
case 0x541b99:c.instructions+=1;goto B541b99;
case 0x541b9b:goto L541b9b;
case 0x541ba0:goto L541ba0;
case 0x541baa:c.instructions+=1;goto B541baa;
case 0x541baf:goto L541baf;
case 0x541bb1:c.instructions+=1;goto B541bb1;
case 0x541bb3:goto L541bb3;
case 0x541bb6:c.instructions+=1;goto B541bb6;
case 0x541bb8:goto L541bb8;
case 0x541bba:goto L541bba;
case 0x541bbe:c.instructions+=15;goto B541bbe;
case 0x541bc0:c.instructions+=14;goto B541bc0;
case 0x541bc4:c.instructions+=13;goto B541bc4;
case 0x541bc7:c.instructions+=12;goto B541bc7;
case 0x541bcb:c.instructions+=11;goto B541bcb;
case 0x541bcd:c.instructions+=10;goto B541bcd;
case 0x541bd2:c.instructions+=9;goto B541bd2;
case 0x541bd8:c.instructions+=8;goto B541bd8;
case 0x541bde:c.instructions+=7;goto B541bde;
case 0x541be0:c.instructions+=6;goto B541be0;
case 0x541be6:c.instructions+=5;goto B541be6;
case 0x541be7:c.instructions+=4;goto B541be7;
case 0x541be9:c.instructions+=3;goto B541be9;
case 0x541bef:c.instructions+=2;goto B541bef;
case 0x541bf1:c.instructions+=1;goto B541bf1;
case 0x541bf3:goto L541bf3;
case 0x541bf7:goto L541bf7;
case 0x541c01:goto L541c01;
case 0x541c07:c.instructions+=3;goto B541c07;
case 0x541c0a:c.instructions+=2;goto B541c0a;
case 0x541c0c:c.instructions+=1;goto B541c0c;
case 0x541c0e:goto L541c0e;
case 0x541c13:goto L541c13;
case 0x541c19:c.instructions+=1;goto B541c19;
case 0x541c1b:goto L541c1b;
case 0x541c20:c.instructions+=2;goto B541c20;
case 0x541c24:c.instructions+=1;goto B541c24;
case 0x541c29:goto L541c29;
case 0x541c2d:c.instructions+=3;goto B541c2d;
case 0x541c31:c.instructions+=2;goto B541c31;
case 0x541c36:c.instructions+=1;goto B541c36;
case 0x541c3b:goto L541c3b;
case 0x541c3d:c.instructions+=1;goto B541c3d;
case 0x541c3f:goto L541c3f;
case 0x541c40:goto L541c40;
case 0x541c43:c.instructions+=4;goto B541c43;
case 0x541c46:c.instructions+=3;goto B541c46;
case 0x541c4c:c.instructions+=2;goto B541c4c;
case 0x541c53:c.instructions+=1;goto B541c53;
case 0x541c55:goto L541c55;
case 0x541c5b:goto L541c5b;
case 0x541c5d:c.instructions+=3;goto B541c5d;
case 0x541c5e:c.instructions+=2;goto B541c5e;
case 0x541c60:c.instructions+=1;goto B541c60;
case 0x541c62:goto L541c62;
case 0x541c66:goto L541c66;
case 0x541c6c:c.instructions+=1;goto B541c6c;
case 0x541c6e:goto L541c6e;
case 0x541c73:c.instructions+=2;goto B541c73;
case 0x541c75:c.instructions+=1;goto B541c75;
case 0x541c77:goto L541c77;
case 0x541c7c:c.instructions+=2;goto B541c7c;
case 0x541c7e:c.instructions+=1;goto B541c7e;
case 0x541c84:goto L541c84;
case 0x541c8a:c.instructions+=7;goto B541c8a;
case 0x541c8f:c.instructions+=6;goto B541c8f;
case 0x541c91:c.instructions+=5;goto B541c91;
case 0x541c97:c.instructions+=4;goto B541c97;
case 0x541c9d:c.instructions+=3;goto B541c9d;
case 0x541c9f:c.instructions+=2;goto B541c9f;
case 0x541ca1:c.instructions+=1;goto B541ca1;
case 0x541ca3:goto L541ca3;
case 0x541ca8:c.instructions+=1;goto B541ca8;
case 0x541cb0:goto L541cb0;
case 0x541cb6:c.instructions+=3;goto B541cb6;
case 0x541cbb:c.instructions+=2;goto B541cbb;
case 0x541cbc:c.instructions+=1;goto B541cbc;
case 0x541cbe:goto L541cbe;
case 0x541cc8:goto L541cc8;
case 0x541ccb:c.instructions+=2;goto B541ccb;
case 0x541ccd:c.instructions+=1;goto B541ccd;
case 0x541ccf:goto L541ccf;
case 0x541cd4:goto L541cd4;
case 0x541cda:c.instructions+=1;goto B541cda;
case 0x541cdc:goto L541cdc;
case 0x541ce1:c.instructions+=2;goto B541ce1;
case 0x541ce5:c.instructions+=1;goto B541ce5;
case 0x541cea:goto L541cea;
case 0x541cee:c.instructions+=3;goto B541cee;
case 0x541cf2:c.instructions+=2;goto B541cf2;
case 0x541cf7:c.instructions+=1;goto B541cf7;
case 0x541cfc:goto L541cfc;
case 0x541cfe:c.instructions+=1;goto B541cfe;
case 0x541d00:goto L541d00;
case 0x541d03:c.instructions+=4;goto B541d03;
case 0x541d06:c.instructions+=3;goto B541d06;
case 0x541d0c:c.instructions+=2;goto B541d0c;
case 0x541d13:c.instructions+=1;goto B541d13;
case 0x541d15:goto L541d15;
case 0x541d1b:goto L541d1b;
case 0x541d1d:c.instructions+=3;goto B541d1d;
case 0x541d1e:c.instructions+=2;goto B541d1e;
case 0x541d20:c.instructions+=1;goto B541d20;
case 0x541d22:goto L541d22;
case 0x541d26:goto L541d26;
case 0x541d2b:c.instructions+=4;goto B541d2b;
case 0x541d31:c.instructions+=3;goto B541d31;
case 0x541d32:c.instructions+=2;goto B541d32;
case 0x541d37:c.instructions+=1;goto B541d37;
case 0x541d39:goto L541d39;
case 0x541d3d:c.instructions+=3;goto B541d3d;
case 0x541d3f:c.instructions+=2;goto B541d3f;
case 0x541d47:c.instructions+=1;goto B541d47;
case 0x541d49:goto L541d49;
case 0x541d50:goto L541d50;
case 0x541d52:c.instructions+=6;goto B541d52;
case 0x541d54:c.instructions+=5;goto B541d54;
case 0x541d57:c.instructions+=4;goto B541d57;
case 0x541d59:c.instructions+=3;goto B541d59;
case 0x541d5a:c.instructions+=2;goto B541d5a;
case 0x541d5d:c.instructions+=1;goto B541d5d;
case 0x541d62:goto L541d62;
case 0x541d66:c.instructions+=4;goto B541d66;
case 0x541d6a:c.instructions+=3;goto B541d6a;
case 0x541d6d:c.instructions+=2;goto B541d6d;
case 0x541d6f:c.instructions+=1;goto B541d6f;
case 0x541d71:goto L541d71;
case 0x541d75:c.instructions+=6;goto B541d75;
case 0x541d76:c.instructions+=5;goto B541d76;
case 0x541d7d:c.instructions+=4;goto B541d7d;
case 0x541d7e:c.instructions+=3;goto B541d7e;
case 0x541d80:c.instructions+=2;goto B541d80;
case 0x541d81:c.instructions+=1;goto B541d81;
case 0x541d90:goto L541d90;
case 0x541d91:c.instructions+=2;goto B541d91;
case 0x541d93:c.instructions+=1;goto B541d93;
case 0x541d98:goto L541d98;
case 0x541d9d:c.instructions+=1;goto B541d9d;
case 0x541d9f:goto L541d9f;
case 0x541da0:c.instructions+=1;goto B541da0;
case 0x541da5:goto L541da5;
case 0x541da8:goto L541da8;
case 0x541daa:c.instructions+=2;goto B541daa;
case 0x541dab:c.instructions+=1;goto B541dab;
case 0x541db0:goto L541db0;
case 0x541db3:c.instructions+=11;goto B541db3;
case 0x541db5:c.instructions+=10;goto B541db5;
case 0x541db9:c.instructions+=9;goto B541db9;
case 0x541dba:c.instructions+=8;goto B541dba;
case 0x541dbb:c.instructions+=7;goto B541dbb;
case 0x541dbe:c.instructions+=6;goto B541dbe;
case 0x541dbf:c.instructions+=5;goto B541dbf;
case 0x541dc0:c.instructions+=4;goto B541dc0;
case 0x541dc4:c.instructions+=3;goto B541dc4;
case 0x541dc7:c.instructions+=2;goto B541dc7;
case 0x541dca:c.instructions+=1;goto B541dca;
case 0x541dd0:goto L541dd0;
case 0x541dd2:c.instructions+=1;goto B541dd2;
case 0x541dd4:goto L541dd4;
case 0x541ddb:c.instructions+=1;goto B541ddb;
case 0x541ddd:goto L541ddd;
case 0x541de0:c.instructions+=2;goto B541de0;
case 0x541de2:c.instructions+=1;goto B541de2;
case 0x541de4:goto L541de4;
case 0x541de9:c.instructions+=8;goto B541de9;
case 0x541dec:c.instructions+=7;goto B541dec;
case 0x541ded:c.instructions+=6;goto B541ded;
case 0x541df2:c.instructions+=5;goto B541df2;
case 0x541df4:c.instructions+=4;goto B541df4;
case 0x541df5:c.instructions+=3;goto B541df5;
case 0x541df6:c.instructions+=2;goto B541df6;
case 0x541df9:c.instructions+=1;goto B541df9;
case 0x541dfe:goto L541dfe;
case 0x541e02:c.instructions+=2;goto B541e02;
case 0x541e05:c.instructions+=1;goto B541e05;
case 0x541e07:goto L541e07;
case 0x541e0a:c.instructions+=6;goto B541e0a;
case 0x541e0b:c.instructions+=5;goto B541e0b;
case 0x541e10:c.instructions+=4;goto B541e10;
case 0x541e11:c.instructions+=3;goto B541e11;
case 0x541e12:c.instructions+=2;goto B541e12;
case 0x541e15:c.instructions+=1;goto B541e15;
case 0x541e1a:goto L541e1a;
case 0x541e1e:c.instructions+=2;goto B541e1e;
case 0x541e21:c.instructions+=1;goto B541e21;
case 0x541e23:goto L541e23;
case 0x541e29:c.instructions+=4;goto B541e29;
case 0x541e2c:c.instructions+=3;goto B541e2c;
case 0x541e32:c.instructions+=2;goto B541e32;
case 0x541e34:c.instructions+=1;goto B541e34;
case 0x541e37:goto L541e37;
case 0x541e3a:c.instructions+=4;goto B541e3a;
case 0x541e3d:c.instructions+=3;goto B541e3d;
case 0x541e3f:c.instructions+=2;goto B541e3f;
case 0x541e47:c.instructions+=1;goto B541e47;
case 0x541e49:goto L541e49;
case 0x541e4c:c.instructions+=2;goto B541e4c;
case 0x541e4e:c.instructions+=1;goto B541e4e;
case 0x541e50:goto L541e50;
case 0x541e53:goto L541e53;
case 0x541e57:c.instructions+=2;goto B541e57;
case 0x541e5a:c.instructions+=1;goto B541e5a;
case 0x541e5c:goto L541e5c;
case 0x541e60:c.instructions+=1;goto B541e60;
case 0x541e64:goto L541e64;
case 0x541e68:c.instructions+=4;goto B541e68;
case 0x541e69:c.instructions+=3;goto B541e69;
case 0x541e6a:c.instructions+=2;goto B541e6a;
case 0x541e6b:c.instructions+=1;goto B541e6b;
case 0x541e70:goto L541e70;
case 0x541e73:c.instructions+=3;goto B541e73;
case 0x541e76:c.instructions+=2;goto B541e76;
case 0x541e77:c.instructions+=1;goto B541e77;
case 0x541e79:goto L541e79;
case 0x541e7d:c.instructions+=3;goto B541e7d;
case 0x541e7f:c.instructions+=2;goto B541e7f;
case 0x541e83:c.instructions+=1;goto B541e83;
case 0x541e85:goto L541e85;
case 0x541e8a:c.instructions+=5;goto B541e8a;
case 0x541e8d:c.instructions+=4;goto B541e8d;
case 0x541e92:c.instructions+=3;goto B541e92;
case 0x541e94:c.instructions+=2;goto B541e94;
case 0x541e97:c.instructions+=1;goto B541e97;
case 0x541e9c:goto L541e9c;
case 0x541ea0:c.instructions+=2;goto B541ea0;
case 0x541ea7:c.instructions+=1;goto B541ea7;
case 0x541eac:goto L541eac;
case 0x541eae:c.instructions+=1;goto B541eae;
case 0x541eb0:goto L541eb0;
case 0x541eb7:c.instructions+=1;goto B541eb7;
case 0x541eb9:goto L541eb9;
case 0x541ebd:c.instructions+=2;goto B541ebd;
case 0x541ec0:c.instructions+=1;goto B541ec0;
case 0x541ec2:goto L541ec2;
case 0x541ec3:c.instructions+=1;goto B541ec3;
case 0x541ec5:goto L541ec5;
case 0x541ec8:c.instructions+=1;goto B541ec8;
case 0x541eca:goto L541eca;
case 0x541ecb:c.instructions+=3;goto B541ecb;
case 0x541ecc:c.instructions+=2;goto B541ecc;
case 0x541ecd:c.instructions+=1;goto B541ecd;
case 0x541ed2:goto L541ed2;
case 0x541ed4:goto L541ed4;
case 0x541ed5:c.instructions+=3;goto B541ed5;
case 0x541ed6:c.instructions+=2;goto B541ed6;
case 0x541ed7:c.instructions+=1;goto B541ed7;
case 0x541edc:goto L541edc;
case 0x541ee0:c.instructions+=1;goto B541ee0;
case 0x541ee3:goto L541ee3;
case 0x541ee6:c.instructions+=3;goto B541ee6;
case 0x541ee9:c.instructions+=2;goto B541ee9;
case 0x541eeb:c.instructions+=1;goto B541eeb;
case 0x541eed:goto L541eed;
case 0x541ef0:c.instructions+=2;goto B541ef0;
case 0x541ef2:c.instructions+=1;goto B541ef2;
case 0x541ef4:goto L541ef4;
case 0x541ef7:c.instructions+=1;goto B541ef7;
case 0x541f00:goto L541f00;
case 0x541f04:c.instructions+=4;goto B541f04;
case 0x541f08:c.instructions+=3;goto B541f08;
case 0x541f0c:c.instructions+=2;goto B541f0c;
case 0x541f0f:c.instructions+=1;goto B541f0f;
case 0x541f11:goto L541f11;
case 0x541f12:c.instructions+=1;goto B541f12;
case 0x541f14:goto L541f14;
case 0x541f17:c.instructions+=1;goto B541f17;
case 0x541f19:goto L541f19;
case 0x541f1a:c.instructions+=3;goto B541f1a;
case 0x541f1b:c.instructions+=2;goto B541f1b;
case 0x541f1c:c.instructions+=1;goto B541f1c;
case 0x541f21:goto L541f21;
case 0x541f23:goto L541f23;
case 0x541f24:c.instructions+=3;goto B541f24;
case 0x541f25:c.instructions+=2;goto B541f25;
case 0x541f26:c.instructions+=1;goto B541f26;
case 0x541f2b:goto L541f2b;
case 0x541f2f:c.instructions+=1;goto B541f2f;
case 0x541f32:goto L541f32;
case 0x541f35:c.instructions+=2;goto B541f35;
case 0x541f36:c.instructions+=1;goto B541f36;
case 0x541f38:goto L541f38;
case 0x541f3b:c.instructions+=6;goto B541f3b;
case 0x541f40:c.instructions+=5;goto B541f40;
case 0x541f41:c.instructions+=4;goto B541f41;
case 0x541f42:c.instructions+=3;goto B541f42;
case 0x541f43:c.instructions+=2;goto B541f43;
case 0x541f44:c.instructions+=1;goto B541f44;
case 0x541f46:goto L541f46;
case 0x541f4b:c.instructions+=1;goto B541f4b;
case 0x541f4e:goto L541f4e;
case 0x541f60:goto L541f60;
case 0x541f65:c.instructions+=7;goto B541f65;
case 0x541f69:c.instructions+=6;goto B541f69;
case 0x541f6c:c.instructions+=5;goto B541f6c;
case 0x541f6f:c.instructions+=4;goto B541f6f;
case 0x541f72:c.instructions+=3;goto B541f72;
case 0x541f76:c.instructions+=2;goto B541f76;
case 0x541f79:c.instructions+=1;goto B541f79;
case 0x541f7b:goto L541f7b;
case 0x541f7c:c.instructions+=1;goto B541f7c;
case 0x541f7e:goto L541f7e;
case 0x541f81:c.instructions+=1;goto B541f81;
case 0x541f83:goto L541f83;
case 0x541f87:c.instructions+=8;goto B541f87;
case 0x541f8b:c.instructions+=7;goto B541f8b;
case 0x541f8e:c.instructions+=6;goto B541f8e;
case 0x541f91:c.instructions+=5;goto B541f91;
case 0x541f95:c.instructions+=4;goto B541f95;
case 0x541f96:c.instructions+=3;goto B541f96;
case 0x541f97:c.instructions+=2;goto B541f97;
case 0x541f98:c.instructions+=1;goto B541f98;
case 0x541f9d:goto L541f9d;
case 0x541fa0:c.instructions+=1;goto B541fa0;
case 0x541fa1:goto L541fa1;
case 0x541fa5:c.instructions+=8;goto B541fa5;
case 0x541fa9:c.instructions+=7;goto B541fa9;
case 0x541fac:c.instructions+=6;goto B541fac;
case 0x541faf:c.instructions+=5;goto B541faf;
case 0x541fb3:c.instructions+=4;goto B541fb3;
case 0x541fb4:c.instructions+=3;goto B541fb4;
case 0x541fb5:c.instructions+=2;goto B541fb5;
case 0x541fb6:c.instructions+=1;goto B541fb6;
case 0x541fbb:goto L541fbb;
case 0x541fbe:goto L541fbe;
case 0x541fc0:goto L541fc0;
case 0x541fc3:c.instructions+=8;goto B541fc3;
case 0x541fc4:c.instructions+=7;goto B541fc4;
case 0x541fc6:c.instructions+=6;goto B541fc6;
case 0x541fcc:c.instructions+=5;goto B541fcc;
case 0x541fcd:c.instructions+=4;goto B541fcd;
case 0x541fd0:c.instructions+=3;goto B541fd0;
case 0x541fd2:c.instructions+=2;goto B541fd2;
case 0x541fd6:c.instructions+=1;goto B541fd6;
case 0x541fdc:goto L541fdc;
case 0x541fdd:c.instructions+=1;goto B541fdd;
case 0x541fe2:goto L541fe2;
case 0x541fe4:c.instructions+=1;goto B541fe4;
case 0x541fea:goto L541fea;
case 0x541feb:c.instructions+=5;goto B541feb;
case 0x541fec:c.instructions+=4;goto B541fec;
case 0x541ff0:c.instructions+=3;goto B541ff0;
case 0x541ff6:c.instructions+=2;goto B541ff6;
case 0x541ff8:c.instructions+=1;goto B541ff8;
case 0x541ffa:goto L541ffa;
case 0x541ffd:c.instructions+=1;goto B541ffd;
default:missing_instruction(c.pc);}
B541000:L541000:{c.instructions+=1;NFSU2_TR(0x541000);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x541005ull));
TAIL_STATIC(0x599610u,599);
}
B541005:L541005:{c.instructions+=2;NFSU2_TR(0x541005);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B541007:{NFSU2_TR(0x541007);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L541025;}}
}
B541009:L541009:{c.instructions+=3;NFSU2_TR(0x541009);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54100a:{NFSU2_TR(0x54100a);
w4(R+4,u32(0x838980ull));
}
B54100f:{NFSU2_TR(0x54100f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x541014ull));
TAIL_STATIC(0x530350u,530);
}
B541014:L541014:{c.instructions+=2;NFSU2_TR(0x541014);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B541016:{NFSU2_TR(0x541016);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L541025;}}
}
B541018:L541018:{c.instructions+=4;NFSU2_TR(0x541018);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B54101c:{NFSU2_TR(0x54101c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B54101f:{NFSU2_TR(0x54101f);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+4))));
}
B541021:{NFSU2_TR(0x541021);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B541025:L541025:{c.instructions+=5;NFSU2_TR(0x541025);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B541028:{NFSU2_TR(0x541028);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B541029:{NFSU2_TR(0x541029);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x5cull))));
}
B54102c:{NFSU2_TR(0x54102c);
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
B54102e:{NFSU2_TR(0x54102e);
if(r1(R+512)){TAIL_STATIC(0x540ff8u,540);}
}
B541030:L541030:{c.instructions+=6;NFSU2_TR(0x541030);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B541034:{NFSU2_TR(0x541034);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B541035:{NFSU2_TR(0x541035);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B541036:{NFSU2_TR(0x541036);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B541037:{NFSU2_TR(0x541037);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B541038:{NFSU2_TR(0x541038);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B541040:L541040:{c.instructions+=10;NFSU2_TR(0x541040);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B541041:{NFSU2_TR(0x541041);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B541042:{NFSU2_TR(0x541042);
__builtin_memmove((R+12),(R+4),4);
}
B541044:{NFSU2_TR(0x541044);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B541047:{NFSU2_TR(0x541047);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B541048:{NFSU2_TR(0x541048);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B54104a:{NFSU2_TR(0x54104a);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B54104c:{NFSU2_TR(0x54104c);
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
B54104e:{NFSU2_TR(0x54104e);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B541052:{NFSU2_TR(0x541052);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L54108c;}}
}
B541054:L541054:{c.instructions+=2;NFSU2_TR(0x541054);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B541055:{NFSU2_TR(0x541055);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((R+24),(U+0),4);
}
B541058:L541058:{c.instructions+=4;NFSU2_TR(0x541058);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B54105a:{NFSU2_TR(0x54105a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54105b:{NFSU2_TR(0x54105b);
w4(R+4,u32(0x8395b0ull));
}
B541060:{NFSU2_TR(0x541060);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x541065ull));
TAIL_STATIC(0x599610u,599);
}
B541065:L541065:{c.instructions+=2;NFSU2_TR(0x541065);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B541067:{NFSU2_TR(0x541067);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L54107c;}}
}
B541069:L541069:{c.instructions+=3;NFSU2_TR(0x541069);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54106a:{NFSU2_TR(0x54106a);
w4(R+4,u32(0x838980ull));
}
B54106f:{NFSU2_TR(0x54106f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x541074ull));
TAIL_STATIC(0x530350u,530);
}
B541074:L541074:{c.instructions+=2;NFSU2_TR(0x541074);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B541076:{NFSU2_TR(0x541076);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L54107c;}}
}
B541078:L541078:{c.instructions+=1;NFSU2_TR(0x541078);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B54107c:L54107c:{c.instructions+=5;NFSU2_TR(0x54107c);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B54107f:{NFSU2_TR(0x54107f);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B541080:{NFSU2_TR(0x541080);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x5cull))));
}
B541083:{NFSU2_TR(0x541083);
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
B541085:{NFSU2_TR(0x541085);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x541058u);}goto L541058;}}
}
B541087:L541087:{c.instructions+=2;NFSU2_TR(0x541087);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B54108b:{NFSU2_TR(0x54108b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B54108c:L54108c:{c.instructions+=4;NFSU2_TR(0x54108c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B54108d:{NFSU2_TR(0x54108d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B54108e:{NFSU2_TR(0x54108e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B54108f:{NFSU2_TR(0x54108f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B541090:L541090:{c.instructions+=6;NFSU2_TR(0x541090);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B541091:{NFSU2_TR(0x541091);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B541092:{NFSU2_TR(0x541092);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B541096:{NFSU2_TR(0x541096);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B541098:{NFSU2_TR(0x541098);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xc4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B54109e:{NFSU2_TR(0x54109e);
__builtin_memmove((R+28),(R+28),4);
}
B5410a0:L5410a0:{c.instructions+=3;NFSU2_TR(0x5410a0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5410a2:{NFSU2_TR(0x5410a2);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5410a4:{NFSU2_TR(0x5410a4);
if(r1(R+518)){{goto L5410be;}}
}
B5410a6:L5410a6:{c.instructions+=2;NFSU2_TR(0x5410a6);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+8))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B5410a9:{NFSU2_TR(0x5410a9);
if(r1(R+518)){{goto L5410be;}}
}
B5410ab:L5410ab:{c.instructions+=4;NFSU2_TR(0x5410ab);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B5410ac:{NFSU2_TR(0x5410ac);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x4ull))));
}
B5410af:{NFSU2_TR(0x5410af);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x6ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x6ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5410b2:{NFSU2_TR(0x5410b2);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5410a0u);}goto L5410a0;}}
}
B5410b4:L5410b4:{c.instructions+=1;NFSU2_TR(0x5410b4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5410b9ull));
TAIL_STATIC(0x532c60u,532);
}
B5410b9:L5410b9:{c.instructions+=3;NFSU2_TR(0x5410b9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5410ba:{NFSU2_TR(0x5410ba);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5410bb:{NFSU2_TR(0x5410bb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5410be:L5410be:{c.instructions+=3;NFSU2_TR(0x5410be);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5410c1:{NFSU2_TR(0x5410c1);
u8 U[16];
w4(U+0,u32(u32(u32(0xc4ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+8),4);
s4(u32(r4(U+8)),r4(U+12));
}
B5410c8:{NFSU2_TR(0x5410c8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5410cdull));
TAIL_STATIC(0x532c60u,532);
}
B5410cd:L5410cd:{c.instructions+=3;NFSU2_TR(0x5410cd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5410ce:{NFSU2_TR(0x5410ce);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5410cf:{NFSU2_TR(0x5410cf);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5410e0:L5410e0:{c.instructions+=8;NFSU2_TR(0x5410e0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5410e1:{NFSU2_TR(0x5410e1);
__builtin_memmove((R+20),(R+16),4);
}
B5410e3:{NFSU2_TR(0x5410e3);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5410e4:{NFSU2_TR(0x5410e4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5410e7:{NFSU2_TR(0x5410e7);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8738ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5410ed:{NFSU2_TR(0x5410ed);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5410f0:{NFSU2_TR(0x5410f0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5410f1:{NFSU2_TR(0x5410f1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5410f6ull));
TAIL_STATIC(0x512f10u,512);
}
B5410f6:L5410f6:{c.instructions+=4;NFSU2_TR(0x5410f6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5410f7:{NFSU2_TR(0x5410f7);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0xd24ull))));
}
B5410fd:{NFSU2_TR(0x5410fd);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x6ull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B541101:{NFSU2_TR(0x541101);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x541106ull));
TAIL_STATIC(0x532ea0u,532);
}
B541106:L541106:{c.instructions+=3;NFSU2_TR(0x541106);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B541107:{NFSU2_TR(0x541107);
w4(R+4,u32(0x8635bcull));
}
B54110c:{NFSU2_TR(0x54110c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x541111ull));
TAIL_STATIC(0x524240u,524);
}
B541111:L541111:{c.instructions+=3;NFSU2_TR(0x541111);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B541112:{NFSU2_TR(0x541112);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B541113:{NFSU2_TR(0x541113);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B541120:L541120:{c.instructions+=6;NFSU2_TR(0x541120);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B541121:{NFSU2_TR(0x541121);
__builtin_memmove((R+20),(R+16),4);
}
B541123:{NFSU2_TR(0x541123);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B541124:{NFSU2_TR(0x541124);
__builtin_memmove((R+24),(R+4),4);
}
B541126:{NFSU2_TR(0x541126);
w4(R+4,u32(0x81cbc0ull));
}
B54112b:{NFSU2_TR(0x54112b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x541130ull));
TAIL_STATIC(0x4131f0u,413);
}
B541130:L541130:{c.instructions+=10;NFSU2_TR(0x541130);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B541132:{NFSU2_TR(0x541132);
__builtin_memmove(gp(0x8385b9),(R+0),1);
}
B541137:{NFSU2_TR(0x541137);
__builtin_memmove(gp(0x8385a0),(R+0),4);
}
B54113c:{NFSU2_TR(0x54113c);
__builtin_memmove(gp(0x8385a4),(R+0),4);
}
B541141:{NFSU2_TR(0x541141);
__builtin_memmove(gp(0x8385b8),(R+0),1);
}
B541146:{NFSU2_TR(0x541146);
__builtin_memmove(gp(0x838590),(R+0),4);
}
B54114b:{NFSU2_TR(0x54114b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B54114e:{NFSU2_TR(0x54114e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54114f:{NFSU2_TR(0x54114f);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc00ull))));
__builtin_memmove((R+4),(U+0),4);
}
B541155:{NFSU2_TR(0x541155);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54115aull));
TAIL_STATIC(0x533be0u,533);
}
B54115a:L54115a:{c.instructions+=3;NFSU2_TR(0x54115a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B54115b:{NFSU2_TR(0x54115b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B54115c:{NFSU2_TR(0x54115c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B541160:L541160:{c.instructions+=11;NFSU2_TR(0x541160);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B541161:{NFSU2_TR(0x541161);
__builtin_memmove((R+20),(R+16),4);
}
B541163:{NFSU2_TR(0x541163);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B541164:{NFSU2_TR(0x541164);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B541165:{NFSU2_TR(0x541165);
__builtin_memmove((R+24),(R+4),4);
}
B541167:{NFSU2_TR(0x541167);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x872cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B54116d:{NFSU2_TR(0x54116d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B541170:{NFSU2_TR(0x541170);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8730ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B541176:{NFSU2_TR(0x541176);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B541179:{NFSU2_TR(0x541179);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54117a:{NFSU2_TR(0x54117a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54117full));
TAIL_STATIC(0x512f10u,512);
}
B54117f:L54117f:{c.instructions+=2;NFSU2_TR(0x54117f);
u8 U[7];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x1ull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B541183:{NFSU2_TR(0x541183);
if(r1(R+518)){{goto L541189;}}
}
B541185:L541185:{c.instructions+=1;NFSU2_TR(0x541185);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x6ull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B541189:L541189:{c.instructions+=3;NFSU2_TR(0x541189);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54118a:{NFSU2_TR(0x54118a);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd24ull))));
__builtin_memmove((R+4),(U+0),4);
}
B541190:{NFSU2_TR(0x541190);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x541195ull));
TAIL_STATIC(0x532ea0u,532);
}
B541195:L541195:{c.instructions+=3;NFSU2_TR(0x541195);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B541196:{NFSU2_TR(0x541196);
w4(R+4,u32(0x8635bcull));
}
B54119b:{NFSU2_TR(0x54119b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5411a0ull));
TAIL_STATIC(0x524240u,524);
}
B5411a0:L5411a0:{c.instructions+=2;NFSU2_TR(0x5411a0);
w4(R+4,u32(0x81cbc0ull));
}
B5411a5:{NFSU2_TR(0x5411a5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5411aaull));
TAIL_STATIC(0x4131f0u,413);
}
B5411aa:L5411aa:{c.instructions+=9;NFSU2_TR(0x5411aa);
__builtin_memmove((R+0),gp(0x8900ac),4);
}
B5411af:{NFSU2_TR(0x5411af);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B5411b1:{NFSU2_TR(0x5411b1);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
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
B5411b3:{NFSU2_TR(0x5411b3);
__builtin_memmove(gp(0x8385b9),(R+4),1);
}
B5411b9:{NFSU2_TR(0x5411b9);
__builtin_memmove(gp(0x8385a0),(R+4),4);
}
B5411bf:{NFSU2_TR(0x5411bf);
__builtin_memmove(gp(0x8385a4),(R+4),4);
}
B5411c5:{NFSU2_TR(0x5411c5);
__builtin_memmove(gp(0x8385b8),(R+4),1);
}
B5411cb:{NFSU2_TR(0x5411cb);
__builtin_memmove(gp(0x838590),(R+4),4);
}
B5411d1:{NFSU2_TR(0x5411d1);
if(r1(R+518)){{goto L541207;}}
}
B5411d3:L5411d3:{c.instructions+=11;NFSU2_TR(0x5411d3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5411d6:{NFSU2_TR(0x5411d6);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8744ull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5411dc:{NFSU2_TR(0x5411dc);
{u32 ea_=u32(r4(R+0)+u32(100u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5411df:{NFSU2_TR(0x5411df);
{u32 ea_=u32(r4(R+0)+u32(104u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5411e2:{NFSU2_TR(0x5411e2);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5411e5:{NFSU2_TR(0x5411e5);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5411e7:{NFSU2_TR(0x5411e7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8750ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5411ed:{NFSU2_TR(0x5411ed);
{u32 ea_=u32(r4(R+24)+u32(34644u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5411f3:{NFSU2_TR(0x5411f3);
{u32 ea_=u32(r4(R+24)+u32(34648u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5411f9:{NFSU2_TR(0x5411f9);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x40cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+8),(U+4),2);
}
B541200:{NFSU2_TR(0x541200);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8760ull))));
__builtin_memmove((U+4),(R+8),2);
s2(u32(r4(U+0)),r2(U+4));
}
B541207:L541207:{c.instructions+=4;NFSU2_TR(0x541207);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B541208:{NFSU2_TR(0x541208);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B541209:{NFSU2_TR(0x541209);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B54120a:{NFSU2_TR(0x54120a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B541210:L541210:{c.instructions+=6;NFSU2_TR(0x541210);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B541211:{NFSU2_TR(0x541211);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B541215:{NFSU2_TR(0x541215);
u8 U[10];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(U+6,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B541217:{NFSU2_TR(0x541217);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B541218:{NFSU2_TR(0x541218);
__builtin_memmove((R+24),(R+4),4);
}
B54121a:{NFSU2_TR(0x54121a);
if(r1(R+518)){{goto L5412c0;}}
}
B541220:L541220:{c.instructions+=3;NFSU2_TR(0x541220);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B541221:{NFSU2_TR(0x541221);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x26ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+28,u32(s32(s16(r2(U+4)))));
}
B541225:{NFSU2_TR(0x541225);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54122aull));
TAIL_STATIC(0x528410u,528);
}
B54122a:L54122a:{c.instructions+=3;NFSU2_TR(0x54122a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7af8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B541230:{NFSU2_TR(0x541230);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B541232:{NFSU2_TR(0x541232);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L541248;}}
}
B541234:L541234:{c.instructions+=2;NFSU2_TR(0x541234);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x8ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x8ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B541237:{NFSU2_TR(0x541237);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L541248;}}
}
B541239:L541239:{c.instructions+=3;NFSU2_TR(0x541239);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x104ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B54123f:{NFSU2_TR(0x54123f);
u8 U[12];
w4(U+0,u32(u32(u32(0x72d8ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B541246:{NFSU2_TR(0x541246);
{goto L54124a;}
}
B541248:L541248:{c.instructions+=1;NFSU2_TR(0x541248);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B54124a:L54124a:{c.instructions+=3;NFSU2_TR(0x54124a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B541250:{NFSU2_TR(0x541250);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B541252:{NFSU2_TR(0x541252);
if(r1(R+518)){{goto L54125e;}}
}
B541254:L541254:{c.instructions+=3;NFSU2_TR(0x541254);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(s32(s16(r2(U+4)))));
}
B541258:{NFSU2_TR(0x541258);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54125c:{NFSU2_TR(0x54125c);
{goto L541266;}
}
B54125e:L54125e:{c.instructions+=1;NFSU2_TR(0x54125e);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B541266:L541266:{c.instructions+=4;NFSU2_TR(0x541266);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B54126a:{NFSU2_TR(0x54126a);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B54126c:{NFSU2_TR(0x54126c);
{u32 ea_=u32(u32(7978944u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B541272:{NFSU2_TR(0x541272);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x541277ull));
TAIL_STATIC(0x75bed4u,75b);
}
B541277:L541277:{c.instructions+=8;NFSU2_TR(0x541277);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B541279:{NFSU2_TR(0x541279);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7134ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B54127f:{NFSU2_TR(0x54127f);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B541282:{NFSU2_TR(0x541282);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+4))));
}
B541284:{NFSU2_TR(0x541284);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7134ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54128a:{NFSU2_TR(0x54128a);
__builtin_memmove((R+4),gp(0x8900ac),4);
}
B541290:{NFSU2_TR(0x541290);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B541292:{NFSU2_TR(0x541292);
if(r1(R+518)){{goto L5412a6;}}
}
B541294:L541294:{c.instructions+=6;NFSU2_TR(0x541294);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+8,u32(r1(U+4)));
}
B541298:{NFSU2_TR(0x541298);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x9a4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B54129e:{NFSU2_TR(0x54129e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54129f:{NFSU2_TR(0x54129f);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5412a0:{NFSU2_TR(0x5412a0);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5412a1:{NFSU2_TR(0x5412a1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5412a6ull));
TAIL_STATIC(0x4ac170u,4ac);
}
B5412a6:L5412a6:{c.instructions+=5;NFSU2_TR(0x5412a6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7af8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5412ac:{NFSU2_TR(0x5412ac);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x104ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B5412b2:{NFSU2_TR(0x5412b2);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5412b3:{NFSU2_TR(0x5412b3);
u8 U[12];
w4(U+0,u32(u32(u32(0x72d8ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B5412ba:{NFSU2_TR(0x5412ba);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5412bfull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x541090u);}goto L541090;}
}
B5412bf:L5412bf:{c.instructions+=1;NFSU2_TR(0x5412bf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5412c0:L5412c0:{c.instructions+=3;NFSU2_TR(0x5412c0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5412c1:{NFSU2_TR(0x5412c1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5412c2:{NFSU2_TR(0x5412c2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5412d0:L5412d0:{c.instructions+=4;NFSU2_TR(0x5412d0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5412d1:{NFSU2_TR(0x5412d1);
u8 U[4];
w4(U+0,u32(0x79afe0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5412d6:{NFSU2_TR(0x5412d6);
__builtin_memmove((R+24),(R+4),4);
}
B5412d8:{NFSU2_TR(0x5412d8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5412ddull));
TAIL_STATIC(0x43db50u,43d);
}
B5412dd:L5412dd:{c.instructions+=4;NFSU2_TR(0x5412dd);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5412e0:{NFSU2_TR(0x5412e0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5412e1:{NFSU2_TR(0x5412e1);
__builtin_memmove((R+4),(R+24),4);
}
B5412e3:{NFSU2_TR(0x5412e3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5412e8ull));
TAIL_STATIC(0x532d80u,532);
}
B5412e8:L5412e8:{c.instructions+=1;NFSU2_TR(0x5412e8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5412edull));
TAIL_STATIC(0x5001e0u,500);
}
B5412ed:L5412ed:{c.instructions+=7;NFSU2_TR(0x5412ed);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5412ef:{NFSU2_TR(0x5412ef);
__builtin_memmove((R+4),(R+24),4);
}
B5412f1:{NFSU2_TR(0x5412f1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8704ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5412f7:{NFSU2_TR(0x5412f7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8708ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5412fd:{NFSU2_TR(0x5412fd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x870cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B541303:{NFSU2_TR(0x541303);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8710ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B541309:{NFSU2_TR(0x541309);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54130eull));
TAIL_STATIC(0x5331c0u,533);
}
B54130e:L54130e:{c.instructions+=3;NFSU2_TR(0x54130e);
__builtin_memmove((R+4),(R+24),4);
}
B541310:{NFSU2_TR(0x541310);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B541311:{NFSU2_TR(0x541311);
TAIL_STATIC(0x533310u,533);
}
B541320:L541320:{c.instructions+=6;NFSU2_TR(0x541320);
__builtin_memmove((R+0),gp(0x850078),4);
}
B541325:{NFSU2_TR(0x541325);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B541326:{NFSU2_TR(0x541326);
__builtin_memmove((R+24),(R+4),4);
}
B541328:{NFSU2_TR(0x541328);
w4(R+4,u32(0x1ull));
}
B54132d:{NFSU2_TR(0x54132d);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
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
B54132f:{NFSU2_TR(0x54132f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L54141c;}}
}
B541335:L541335:{c.instructions+=5;NFSU2_TR(0x541335);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7af8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B54133b:{NFSU2_TR(0x54133b);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54133c:{NFSU2_TR(0x54133c);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B541340:{NFSU2_TR(0x541340);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(r1(R+12))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B541342:{NFSU2_TR(0x541342);
if(r1(R+518)){{goto L541386;}}
}
B541344:L541344:{c.instructions+=2;NFSU2_TR(0x541344);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B541346:{NFSU2_TR(0x541346);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L54135c;}}
}
B541348:L541348:{c.instructions+=2;NFSU2_TR(0x541348);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x8ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x8ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B54134b:{NFSU2_TR(0x54134b);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L54135c;}}
}
B54134d:L54134d:{c.instructions+=3;NFSU2_TR(0x54134d);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x104ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B541353:{NFSU2_TR(0x541353);
u8 U[12];
w4(U+0,u32(u32(u32(0x72d8ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B54135a:{NFSU2_TR(0x54135a);
{goto L54135e;}
}
B54135c:L54135c:{c.instructions+=1;NFSU2_TR(0x54135c);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B54135e:L54135e:{c.instructions+=3;NFSU2_TR(0x54135e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B541364:{NFSU2_TR(0x541364);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B541366:{NFSU2_TR(0x541366);
if(r1(R+518)){{goto L541374;}}
}
B541368:L541368:{c.instructions+=3;NFSU2_TR(0x541368);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(s32(s16(r2(U+4)))));
}
B54136c:{NFSU2_TR(0x54136c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7134ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+0))));
s4(u32(r4(U+0)),r4(U+4));
}
B541372:{NFSU2_TR(0x541372);
{goto L5413c4;}
}
B541374:L541374:{c.instructions+=5;NFSU2_TR(0x541374);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7134ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B54137a:{NFSU2_TR(0x54137a);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B54137c:{NFSU2_TR(0x54137c);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+0))));
}
B54137e:{NFSU2_TR(0x54137e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7134ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B541384:{NFSU2_TR(0x541384);
{goto L5413c4;}
}
B541386:L541386:{c.instructions+=2;NFSU2_TR(0x541386);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B541388:{NFSU2_TR(0x541388);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L54139e;}}
}
B54138a:L54138a:{c.instructions+=2;NFSU2_TR(0x54138a);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x8ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x8ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B54138d:{NFSU2_TR(0x54138d);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L54139e;}}
}
B54138f:L54138f:{c.instructions+=3;NFSU2_TR(0x54138f);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x104ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B541395:{NFSU2_TR(0x541395);
u8 U[12];
w4(U+0,u32(u32(u32(0x72d8ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B54139c:{NFSU2_TR(0x54139c);
{goto L5413a0;}
}
B54139e:L54139e:{c.instructions+=1;NFSU2_TR(0x54139e);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5413a0:L5413a0:{c.instructions+=3;NFSU2_TR(0x5413a0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5413a6:{NFSU2_TR(0x5413a6);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5413a8:{NFSU2_TR(0x5413a8);
if(r1(R+518)){{goto L5413b0;}}
}
B5413aa:L5413aa:{c.instructions+=2;NFSU2_TR(0x5413aa);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(s32(s16(r2(U+4)))));
}
B5413ae:{NFSU2_TR(0x5413ae);
{goto L5413b2;}
}
B5413b0:L5413b0:{c.instructions+=1;NFSU2_TR(0x5413b0);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5413b2:L5413b2:{c.instructions+=2;NFSU2_TR(0x5413b2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7134ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(r4(R+0))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5413b8:{NFSU2_TR(0x5413b8);
u8 U[1];
w1(U+0,u8(!(r1(R+519))));
if(r1(U+0)){{goto L5413c4;}}
}
B5413ba:L5413ba:{c.instructions+=1;NFSU2_TR(0x5413ba);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7134ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5413c4:L5413c4:{c.instructions+=6;NFSU2_TR(0x5413c4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7af8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5413ca:{NFSU2_TR(0x5413ca);
__builtin_memmove((R+8),gp(0x850078),4);
}
B5413d0:{NFSU2_TR(0x5413d0);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x104ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B5413d6:{NFSU2_TR(0x5413d6);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5413d8:{NFSU2_TR(0x5413d8);
u8 U[12];
w4(U+0,u32(u32(u32(0x72d8ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B5413df:{NFSU2_TR(0x5413df);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5413eb;}}
}
B5413e1:L5413e1:{c.instructions+=2;NFSU2_TR(0x5413e1);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(r1(R+12))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5413e3:{NFSU2_TR(0x5413e3);
if(r1(R+518)){{goto L5413eb;}}
}
B5413e5:L5413e5:{c.instructions+=1;NFSU2_TR(0x5413e5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B5413eb:L5413eb:{c.instructions+=3;NFSU2_TR(0x5413eb);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5413ec:{NFSU2_TR(0x5413ec);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5d20ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5413f2:{NFSU2_TR(0x5413f2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5413f7ull));
TAIL_STATIC(0x529bd0u,529);
}
B5413f7:L5413f7:{c.instructions+=3;NFSU2_TR(0x5413f7);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5413f8:{NFSU2_TR(0x5413f8);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc00ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5413fe:{NFSU2_TR(0x5413fe);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x541403ull));
TAIL_STATIC(0x533a90u,533);
}
B541403:L541403:{c.instructions+=3;NFSU2_TR(0x541403);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B541404:{NFSU2_TR(0x541404);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x887cull))));
__builtin_memmove((R+4),(U+0),4);
}
B54140a:{NFSU2_TR(0x54140a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54140full));
TAIL_STATIC(0x5110c0u,511);
}
B54140f:L54140f:{c.instructions+=2;NFSU2_TR(0x54140f);
__builtin_memmove((R+4),(R+24),4);
}
B541411:{NFSU2_TR(0x541411);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x541416ull));
TAIL_STATIC(0x533310u,533);
}
B541416:L541416:{c.instructions+=1;NFSU2_TR(0x541416);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54141bull));
TAIL_STATIC(0x4f92a0u,4f9);
}
B54141b:L54141b:{c.instructions+=1;NFSU2_TR(0x54141b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B54141c:L54141c:{c.instructions+=2;NFSU2_TR(0x54141c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B54141d:{NFSU2_TR(0x54141d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B541420:L541420:{c.instructions+=10;NFSU2_TR(0x541420);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B541421:{NFSU2_TR(0x541421);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B541422:{NFSU2_TR(0x541422);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B541423:{NFSU2_TR(0x541423);
__builtin_memmove((R+24),(R+4),4);
}
B541425:{NFSU2_TR(0x541425);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd26ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B54142b:{NFSU2_TR(0x54142b);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B54142d:{NFSU2_TR(0x54142d);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd24ull))));
__builtin_memmove((R+12),(U+0),4);
}
B541433:{NFSU2_TR(0x541433);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B541434:{NFSU2_TR(0x541434);
u8 U[5];
w4(U+0,u32(u32(u32(0xfull))+u32(r4(R+16))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B541439:{NFSU2_TR(0x541439);
if(r1(R+518)){{goto L541442;}}
}
B54143b:L54143b:{c.instructions+=3;NFSU2_TR(0x54143b);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x3ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B54143e:{NFSU2_TR(0x54143e);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B541440:{NFSU2_TR(0x541440);
if(r1(R+518)){{goto L541447;}}
}
B541442:L541442:{c.instructions+=1;NFSU2_TR(0x541442);
u8 U[5];
w4(U+0,u32(u32(u32(0xfull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B541447:L541447:{c.instructions+=4;NFSU2_TR(0x541447);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B541448:{NFSU2_TR(0x541448);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B54144c:{NFSU2_TR(0x54144c);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54144d:{NFSU2_TR(0x54144d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x541452ull));
TAIL_STATIC(0x4ffc90u,4ff);
}
B541452:L541452:{c.instructions+=6;NFSU2_TR(0x541452);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7afcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B541458:{NFSU2_TR(0x541458);
__builtin_memmove((R+28),(R+0),4);
}
B54145a:{NFSU2_TR(0x54145a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B54145d:{NFSU2_TR(0x54145d);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B54145f:{NFSU2_TR(0x54145f);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B541461:{NFSU2_TR(0x541461);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L54147c;}}
}
B541463:L541463:{c.instructions+=2;NFSU2_TR(0x541463);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7b00ull))));
__builtin_memmove((R+8),(U+0),4);
}
B541469:{NFSU2_TR(0x541469);
__builtin_memmove((R+16),(R+16),4);
}
B541470:L541470:{c.instructions+=2;NFSU2_TR(0x541470);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(r4(R+20))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B541472:{NFSU2_TR(0x541472);
if(r1(R+518)){{goto L5414ce;}}
}
B541474:L541474:{c.instructions+=4;NFSU2_TR(0x541474);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B541475:{NFSU2_TR(0x541475);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x8ull))));
}
B541478:{NFSU2_TR(0x541478);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B54147a:{NFSU2_TR(0x54147a);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x541470u);}goto L541470;}}
}
B54147c:L54147c:{c.instructions+=1;NFSU2_TR(0x54147c);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B54147e:L54147e:{c.instructions+=5;NFSU2_TR(0x54147e);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x6ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B541482:{NFSU2_TR(0x541482);
u8 U[5];
w4(U+0,u32(u32(u32(0x13ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B541486:{NFSU2_TR(0x541486);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B541488:{NFSU2_TR(0x541488);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B541489:{NFSU2_TR(0x541489);
if(r1(R+518)){{goto L5414e0;}}
}
B54148b:L54148b:{c.instructions+=3;NFSU2_TR(0x54148b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8730ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B541491:{NFSU2_TR(0x541491);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B541493:{NFSU2_TR(0x541493);
if(r1(R+518)){{goto L5414d7;}}
}
B541495:L541495:{c.instructions+=2;NFSU2_TR(0x541495);
__builtin_memmove((R+4),(R+24),4);
}
B541497:{NFSU2_TR(0x541497);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54149cull));
TAIL_STATIC(0x532e50u,532);
}
B54149c:L54149c:{c.instructions+=6;NFSU2_TR(0x54149c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7134ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5414a2:{NFSU2_TR(0x5414a2);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+0))));
}
B5414a4:{NFSU2_TR(0x5414a4);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5414a5:{NFSU2_TR(0x5414a5);
__builtin_memmove((R+4),(R+12),4);
}
B5414a7:{NFSU2_TR(0x5414a7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7134ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5414ad:{NFSU2_TR(0x5414ad);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5414b2ull));
TAIL_STATIC(0x513fe0u,513);
}
B5414b2:L5414b2:{c.instructions+=6;NFSU2_TR(0x5414b2);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x37ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(s32(s8(r1(U+4)))));
}
B5414b6:{NFSU2_TR(0x5414b6);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x104ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B5414bc:{NFSU2_TR(0x5414bc);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5414bd:{NFSU2_TR(0x5414bd);
u8 U[12];
w4(U+0,u32(u32(u32(0x72d8ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B5414c4:{NFSU2_TR(0x5414c4);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5414c7:{NFSU2_TR(0x5414c7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5414ccull));
TAIL_STATIC(0x513430u,513);
}
B5414cc:L5414cc:{c.instructions+=1;NFSU2_TR(0x5414cc);
{goto L5414e0;}
}
B5414ce:L5414ce:{c.instructions+=2;NFSU2_TR(0x5414ce);
u8 U[12];
w4(U+0,u32(u32(u32(0x7b00ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x8ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B5414d5:{NFSU2_TR(0x5414d5);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x54147eu);}goto L54147e;}
}
B5414d7:L5414d7:{c.instructions+=2;NFSU2_TR(0x5414d7);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5414da:{NFSU2_TR(0x5414da);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7134ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+4))));
s4(u32(r4(U+0)),r4(U+4));
}
B5414e0:L5414e0:{c.instructions+=3;NFSU2_TR(0x5414e0);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5414e1:{NFSU2_TR(0x5414e1);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4210ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5414e7:{NFSU2_TR(0x5414e7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5414ecull));
TAIL_STATIC(0x5337d0u,533);
}
B5414ec:L5414ec:{c.instructions+=3;NFSU2_TR(0x5414ec);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5414ed:{NFSU2_TR(0x5414ed);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5d20ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5414f3:{NFSU2_TR(0x5414f3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5414f8ull));
TAIL_STATIC(0x529920u,529);
}
B5414f8:L5414f8:{c.instructions+=5;NFSU2_TR(0x5414f8);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x37ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+8,u32(s32(s8(r1(U+4)))));
}
B5414fc:{NFSU2_TR(0x5414fc);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(u32(0x104ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B541502:{NFSU2_TR(0x541502);
u8 U[12];
w4(U+0,u32(u32(u32(0x72d8ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B541509:{NFSU2_TR(0x541509);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54150a:{NFSU2_TR(0x54150a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54150full));
TAIL_STATIC(0x513390u,513);
}
B54150f:L54150f:{c.instructions+=1;NFSU2_TR(0x54150f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x541514ull));
TAIL_STATIC(0x532c60u,532);
}
B541514:L541514:{c.instructions+=4;NFSU2_TR(0x541514);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B541516:{NFSU2_TR(0x541516);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B541517:{NFSU2_TR(0x541517);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x887cull))));
__builtin_memmove((R+4),(U+0),4);
}
B54151d:{NFSU2_TR(0x54151d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x541522ull));
TAIL_STATIC(0x5242c0u,524);
}
B541522:L541522:{c.instructions+=2;NFSU2_TR(0x541522);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc00ull))));
__builtin_memmove((R+4),(U+0),4);
}
B541528:{NFSU2_TR(0x541528);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54152dull));
TAIL_STATIC(0x533b40u,533);
}
B54152d:L54152d:{c.instructions+=5;NFSU2_TR(0x54152d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B54152e:{NFSU2_TR(0x54152e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B54152f:{NFSU2_TR(0x54152f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B541530:{NFSU2_TR(0x541530);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B541531:{NFSU2_TR(0x541531);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B541540:L541540:{c.instructions+=8;NFSU2_TR(0x541540);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B541541:{NFSU2_TR(0x541541);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B541542:{NFSU2_TR(0x541542);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B541546:{NFSU2_TR(0x541546);
__builtin_memmove((R+24),(R+4),4);
}
B541548:{NFSU2_TR(0x541548);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B541549:{NFSU2_TR(0x541549);
u8 U[4];
w4(U+0,u32(0x797e74ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54154e:{NFSU2_TR(0x54154e);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x873dull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B541555:{NFSU2_TR(0x541555);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54155aull));
TAIL_STATIC(0x50b990u,50b);
}
B54155a:L54155a:{c.instructions+=7;NFSU2_TR(0x54155a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B54155d:{NFSU2_TR(0x54155d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8740ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B541563:{NFSU2_TR(0x541563);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B541567:{NFSU2_TR(0x541567);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B541568:{NFSU2_TR(0x541568);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B541569:{NFSU2_TR(0x541569);
w4(R+4,u32(0x83ad90ull));
}
B54156e:{NFSU2_TR(0x54156e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x541573ull));
TAIL_STATIC(0x5348e0u,534);
}
B541573:L541573:{c.instructions+=3;NFSU2_TR(0x541573);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B541574:{NFSU2_TR(0x541574);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B541575:{NFSU2_TR(0x541575);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B541580:L541580:{c.instructions+=5;NFSU2_TR(0x541580);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B541581:{NFSU2_TR(0x541581);
__builtin_memmove((R+24),(R+4),4);
}
B541583:{NFSU2_TR(0x541583);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34e4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B541589:{NFSU2_TR(0x541589);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B54158d:{NFSU2_TR(0x54158d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5415a3;}}
}
B54158f:L54158f:{c.instructions+=4;NFSU2_TR(0x54158f);
u8 U[4];
w4(U+0,u32(0x85036cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B541594:{NFSU2_TR(0x541594);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((R+4),(U+0),4);
}
B541597:{NFSU2_TR(0x541597);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
w4(U+4,u32(0x4ull));
s4(u32(r4(U+0)),r4(U+4));
}
B54159e:{NFSU2_TR(0x54159e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5415a3ull));
TAIL_STATIC(0x525d10u,525);
}
B5415a3:L5415a3:{c.instructions+=3;NFSU2_TR(0x5415a3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34e4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5415a9:{NFSU2_TR(0x5415a9);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5415ab:{NFSU2_TR(0x5415ab);
if(r1(R+518)){{goto L5415d1;}}
}
B5415ad:L5415ad:{c.instructions+=10;NFSU2_TR(0x5415ad);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xd24ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5415b3:{NFSU2_TR(0x5415b3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34e8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5415b9:{NFSU2_TR(0x5415b9);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0xd24ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B5415bf:{NFSU2_TR(0x5415bf);
u8 U[12];
w4(U+0,u32(u32(u32(0x54ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+8),(U+8),4);
}
B5415c3:{NFSU2_TR(0x5415c3);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w1(R+512,u8((r4(R+4))<(r4(U+0))));
}
B5415c5:{NFSU2_TR(0x5415c5);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(R+0))));
w4(R+0,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B5415c7:{NFSU2_TR(0x5415c7);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))&u32(r4(R+4))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5415c9:{NFSU2_TR(0x5415c9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34e4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5415cf:{NFSU2_TR(0x5415cf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5415d0:{NFSU2_TR(0x5415d0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5415d1:L5415d1:{c.instructions+=4;NFSU2_TR(0x5415d1);
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
B5415d3:{NFSU2_TR(0x5415d3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34e4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5415d9:{NFSU2_TR(0x5415d9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5415da:{NFSU2_TR(0x5415da);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5415e0:L5415e0:{c.instructions+=10;NFSU2_TR(0x5415e0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5415e1:{NFSU2_TR(0x5415e1);
__builtin_memmove((R+20),(R+16),4);
}
B5415e3:{NFSU2_TR(0x5415e3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5415e6:{NFSU2_TR(0x5415e6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5415e9:{NFSU2_TR(0x5415e9);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5415ea:{NFSU2_TR(0x5415ea);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5415eb:{NFSU2_TR(0x5415eb);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5415ec:{NFSU2_TR(0x5415ec);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5415ed:{NFSU2_TR(0x5415ed);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5415ee:{NFSU2_TR(0x5415ee);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5415f3ull));
TAIL_STATIC(0x500100u,500);
}
B5415f3:L5415f3:{c.instructions+=4;NFSU2_TR(0x5415f3);
__builtin_memmove((R+12),(R+0),4);
}
B5415f5:{NFSU2_TR(0x5415f5);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B5415f8:{NFSU2_TR(0x5415f8);
__builtin_memmove((R+4),(R+12),4);
}
B5415fa:{NFSU2_TR(0x5415fa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5415ffull));
TAIL_STATIC(0x540fe0u,540);
}
B5415ff:L5415ff:{c.instructions+=7;NFSU2_TR(0x5415ff);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B541602:{NFSU2_TR(0x541602);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B541605:{NFSU2_TR(0x541605);
u8 U[4];
w4(U+0,u32(0x0ull));
s4(u32(r4(R+28)),r4(U+0));
}
B54160b:{NFSU2_TR(0x54160b);
__builtin_memmove((R+4),(R+12),4);
}
B54160d:{NFSU2_TR(0x54160d);
__builtin_memmove((R+24),(R+0),4);
}
B54160f:{NFSU2_TR(0x54160f);
u8 U[4];
w4(U+0,u32(0x0ull));
s4(u32(r4(R+8)),r4(U+0));
}
B541615:{NFSU2_TR(0x541615);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54161aull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x541040u);}goto L541040;}
}
B54161a:L54161a:{c.instructions+=2;NFSU2_TR(0x54161a);
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
B54161d:{NFSU2_TR(0x54161d);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L54166f;}}
}
B54161f:L54161f:{c.instructions+=3;NFSU2_TR(0x54161f);
__builtin_memmove((R+0),gp(0x863444),4);
}
B541624:{NFSU2_TR(0x541624);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B541626:{NFSU2_TR(0x541626);
if(r1(R+518)){{goto L541668;}}
}
B541628:L541628:{c.instructions+=3;NFSU2_TR(0x541628);
__builtin_memmove((R+4),gp(0x86344c),4);
}
B54162e:{NFSU2_TR(0x54162e);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B541630:{NFSU2_TR(0x541630);
if(r1(R+518)){{goto L541668;}}
}
B541632:L541632:{c.instructions+=5;NFSU2_TR(0x541632);
w1(R+512,u8((r4(R+0))!=(u32(0x0ull))));
w4(R+0,u32(0-u32(r4(R+0))));
}
B541634:{NFSU2_TR(0x541634);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(R+0))));
w4(R+0,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B541636:{NFSU2_TR(0x541636);
w4(R+0,u32(u32(r4(R+0))&u32(r4(R+4))));
}
B541638:{NFSU2_TR(0x541638);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x7fc8d0d0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B54163f:{NFSU2_TR(0x54163f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L541668;}}
}
B541641:L541641:{c.instructions+=2;NFSU2_TR(0x541641);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B541644:{NFSU2_TR(0x541644);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B541647:L541647:{c.instructions+=15;NFSU2_TR(0x541647);
w4(R+0,u32(0x51eb851full));
}
B54164c:{NFSU2_TR(0x54164c);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(r4(R+4)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(u64(r8(U+16))>>32));
w4(R+0,u32(r8(U+16)));
}
B54164e:{NFSU2_TR(0x54164e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B541651:{NFSU2_TR(0x541651);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w4(R+8,sar<u32>(r4(R+8),u64(r4(U+0))));
}
B541654:{NFSU2_TR(0x541654);
__builtin_memmove((R+0),(R+8),4);
}
B541656:{NFSU2_TR(0x541656);
u8 U[4];
w4(U+0,u32(u32(u32(0x1full))&u32(u32(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+0))));
}
B541659:{NFSU2_TR(0x541659);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+0))));
}
B54165b:{NFSU2_TR(0x54165b);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+28)),r4(U+0));
}
B54165d:{NFSU2_TR(0x54165d);
u8 U[6];
w1(R+512,u8((r4(R+24))<(r4(R+8))));
w1(R+523,sborrow<u32>(r4(R+24),r4(R+8)));
w4(R+24,u32(u32(r4(R+24))-u32(r4(R+8))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B54165f:{NFSU2_TR(0x54165f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B541660:{NFSU2_TR(0x541660);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+4)),r4(U+0));
}
B541662:{NFSU2_TR(0x541662);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B541663:{NFSU2_TR(0x541663);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B541664:{NFSU2_TR(0x541664);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B541665:{NFSU2_TR(0x541665);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B541668:L541668:{c.instructions+=3;NFSU2_TR(0x541668);
__builtin_memmove((R+4),(R+24),4);
}
B54166a:{NFSU2_TR(0x54166a);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(u32(0x5aull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B54166d:{NFSU2_TR(0x54166d);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x541647u);}goto L541647;}
}
B54166f:L54166f:{c.instructions+=6;NFSU2_TR(0x54166f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+28)),r4(U+0));
}
B541671:{NFSU2_TR(0x541671);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B541672:{NFSU2_TR(0x541672);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B541673:{NFSU2_TR(0x541673);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B541674:{NFSU2_TR(0x541674);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B541675:{NFSU2_TR(0x541675);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B541680:L541680:{c.instructions+=6;NFSU2_TR(0x541680);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B541681:{NFSU2_TR(0x541681);
__builtin_memmove((R+24),(R+4),4);
}
B541683:{NFSU2_TR(0x541683);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B541684:{NFSU2_TR(0x541684);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7148ull))));
__builtin_memmove((R+28),(U+0),4);
}
B54168a:{NFSU2_TR(0x54168a);
__builtin_memmove((R+4),(R+28),4);
}
B54168c:{NFSU2_TR(0x54168c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x541691ull));
TAIL_STATIC(0x500820u,500);
}
B541691:L541691:{c.instructions+=2;NFSU2_TR(0x541691);
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
B541693:{NFSU2_TR(0x541693);
if(r1(R+518)){{goto L5417ed;}}
}
B541699:L541699:{c.instructions+=2;NFSU2_TR(0x541699);
__builtin_memmove((R+4),(R+28),4);
}
B54169b:{NFSU2_TR(0x54169b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5416a0ull));
TAIL_STATIC(0x500820u,500);
}
B5416a0:L5416a0:{c.instructions+=2;NFSU2_TR(0x5416a0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5416a1:{NFSU2_TR(0x5416a1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5416a6ull));
TAIL_STATIC(0x43c1c0u,43c);
}
B5416a6:L5416a6:{c.instructions+=3;NFSU2_TR(0x5416a6);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5416a9:{NFSU2_TR(0x5416a9);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B5416ab:{NFSU2_TR(0x5416ab);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L5416bb;}}
}
B5416ad:L5416ad:{c.instructions+=2;NFSU2_TR(0x5416ad);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x40ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x40ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5416b0:{NFSU2_TR(0x5416b0);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L5416bb;}}
}
B5416b2:L5416b2:{c.instructions+=2;NFSU2_TR(0x5416b2);
u8 U[16];
w4(U+0,u32(u32(u32(0x71c8ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+28),(U+12),4);
}
B5416b9:{NFSU2_TR(0x5416b9);
{goto L5416bd;}
}
B5416bb:L5416bb:{c.instructions+=1;NFSU2_TR(0x5416bb);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B5416bd:L5416bd:{c.instructions+=4;NFSU2_TR(0x5416bd);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5416be:{NFSU2_TR(0x5416be);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5416bf:{NFSU2_TR(0x5416bf);
__builtin_memmove((R+4),(R+24),4);
}
B5416c1:{NFSU2_TR(0x5416c1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5416c6ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x541160u);}goto L541160;}
}
B5416c6:L5416c6:{c.instructions+=6;NFSU2_TR(0x5416c6);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd24ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5416cd:{NFSU2_TR(0x5416cd);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x37ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(s32(s8(r1(U+4)))));
}
B5416d1:{NFSU2_TR(0x5416d1);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x104ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B5416d7:{NFSU2_TR(0x5416d7);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5416d8:{NFSU2_TR(0x5416d8);
u8 U[12];
w4(U+0,u32(u32(u32(0x72d8ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B5416df:{NFSU2_TR(0x5416df);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5416e4ull));
TAIL_STATIC(0x513390u,513);
}
B5416e4:L5416e4:{c.instructions+=4;NFSU2_TR(0x5416e4);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5416e7:{NFSU2_TR(0x5416e7);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5416e8:{NFSU2_TR(0x5416e8);
__builtin_memmove((R+4),(R+24),4);
}
B5416ea:{NFSU2_TR(0x5416ea);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5416efull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x541420u);}goto L541420;}
}
B5416ef:L5416ef:{c.instructions+=5;NFSU2_TR(0x5416ef);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7af8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5416f5:{NFSU2_TR(0x5416f5);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(u32(0x104ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B5416fb:{NFSU2_TR(0x5416fb);
u8 U[12];
w4(U+0,u32(u32(u32(0x72d8ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+12),(U+8),4);
}
B541702:{NFSU2_TR(0x541702);
__builtin_memmove((R+4),(R+12),4);
}
B541704:{NFSU2_TR(0x541704);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x541709ull));
TAIL_STATIC(0x500610u,500);
}
B541709:L541709:{c.instructions+=2;NFSU2_TR(0x541709);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B54170b:{NFSU2_TR(0x54170b);
if(r1(R+518)){{goto L5417de;}}
}
B541711:L541711:{c.instructions+=4;NFSU2_TR(0x541711);
u8 U[4];
w4(U+0,u32(0x4e6e6b28ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B541716:{NFSU2_TR(0x541716);
__builtin_memmove((R+4),(R+12),4);
}
B541718:{NFSU2_TR(0x541718);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B54171a:{NFSU2_TR(0x54171a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54171full));
TAIL_STATIC(0x500670u,500);
}
B54171f:L54171f:{c.instructions+=2;NFSU2_TR(0x54171f);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B541721:{NFSU2_TR(0x541721);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L541749;}}
}
B541723:L541723:{c.instructions+=4;NFSU2_TR(0x541723);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7af8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B541729:{NFSU2_TR(0x541729);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x104ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B54172f:{NFSU2_TR(0x54172f);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B541730:{NFSU2_TR(0x541730);
u8 U[12];
w4(U+0,u32(u32(u32(0x72d8ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+20),(U+8),4);
}
B541737:L541737:{c.instructions+=4;NFSU2_TR(0x541737);
u8 U[4];
w4(U+0,u32(0x4e6e6b28ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54173c:{NFSU2_TR(0x54173c);
__builtin_memmove((R+4),(R+20),4);
}
B54173e:{NFSU2_TR(0x54173e);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B54173f:{NFSU2_TR(0x54173f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x541744ull));
TAIL_STATIC(0x500670u,500);
}
B541744:L541744:{c.instructions+=2;NFSU2_TR(0x541744);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+0)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B541746:{NFSU2_TR(0x541746);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x541737u);}goto L541737;}}
}
B541748:L541748:{c.instructions+=1;NFSU2_TR(0x541748);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B541749:L541749:{c.instructions+=3;NFSU2_TR(0x541749);
u8 U[4];
w4(U+0,u32(0x4e6e6b28ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54174e:{NFSU2_TR(0x54174e);
__builtin_memmove((R+4),(R+12),4);
}
B541750:{NFSU2_TR(0x541750);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x541755ull));
TAIL_STATIC(0x500670u,500);
}
B541755:L541755:{c.instructions+=2;NFSU2_TR(0x541755);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B541756:{NFSU2_TR(0x541756);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54175bull));
TAIL_STATIC(0x43c1c0u,43c);
}
B54175b:L54175b:{c.instructions+=6;NFSU2_TR(0x54175b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7af8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B541761:{NFSU2_TR(0x541761);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(u32(0x104ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B541767:{NFSU2_TR(0x541767);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B54176a:{NFSU2_TR(0x54176a);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B54176c:{NFSU2_TR(0x54176c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B54176f:{NFSU2_TR(0x54176f);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L541785;}}
}
B541771:L541771:{c.instructions+=4;NFSU2_TR(0x541771);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x73d8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B541777:{NFSU2_TR(0x541777);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+28,u32(s32(s8(r1(U+4)))));
}
B54177b:{NFSU2_TR(0x54177b);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B54177d:{NFSU2_TR(0x54177d);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L541785;}}
}
B54177f:L54177f:{c.instructions+=2;NFSU2_TR(0x54177f);
u8 U[16];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+28),(U+12),4);
}
B541783:{NFSU2_TR(0x541783);
{goto L541787;}
}
B541785:L541785:{c.instructions+=1;NFSU2_TR(0x541785);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B541787:L541787:{c.instructions+=3;NFSU2_TR(0x541787);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x73c0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B54178d:{NFSU2_TR(0x54178d);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B54178f:{NFSU2_TR(0x54178f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5417de;}}
}
B541791:L541791:{c.instructions+=4;NFSU2_TR(0x541791);
__builtin_memmove((R+8),gp(0x842ebc),4);
}
B541797:{NFSU2_TR(0x541797);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B541799:{NFSU2_TR(0x541799);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B54179b:{NFSU2_TR(0x54179b);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5417c1;}}
}
B54179d:L54179d:{c.instructions+=1;NFSU2_TR(0x54179d);
w4(R+4,u32(0x840ed8ull));
}
B5417a2:L5417a2:{c.instructions+=2;NFSU2_TR(0x5417a2);
u8 U[3];
__builtin_memmove((U+0),gp(u32(r4(R+4))),1);
__builtin_memmove((U+1),(U+0),1);
w1(U+2,u8(u32(r1(U+1))-u32(u8(0x0ull))));
w1(R+518,u8((r1(U+2))==(u8(0x0ull))));
}
B5417a5:{NFSU2_TR(0x5417a5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5417b4;}}
}
B5417a7:L5417a7:{c.instructions+=4;NFSU2_TR(0x5417a7);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B5417a8:{NFSU2_TR(0x5417a8);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x7f8ull))));
}
B5417ae:{NFSU2_TR(0x5417ae);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5417b0:{NFSU2_TR(0x5417b0);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5417a2u);}goto L5417a2;}}
}
B5417b2:L5417b2:{c.instructions+=1;NFSU2_TR(0x5417b2);
{goto L5417c1;}
}
B5417b4:L5417b4:{c.instructions+=2;NFSU2_TR(0x5417b4);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x7f8ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B5417ba:{NFSU2_TR(0x5417ba);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x840ed8ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5417c1:L5417c1:{c.instructions+=5;NFSU2_TR(0x5417c1);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(s32(s16(r2(U+4)))));
}
B5417c5:{NFSU2_TR(0x5417c5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7134ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+8))));
s4(u32(r4(U+0)),r4(U+4));
}
B5417cb:{NFSU2_TR(0x5417cb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7af8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5417d1:{NFSU2_TR(0x5417d1);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x104ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B5417d7:{NFSU2_TR(0x5417d7);
u8 U[16];
w4(U+0,u32(u32(u32(0x73c0ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+28),4);
s4(u32(r4(U+8)),r4(U+12));
}
B5417de:L5417de:{c.instructions+=2;NFSU2_TR(0x5417de);
__builtin_memmove((R+4),(R+24),4);
}
B5417e0:{NFSU2_TR(0x5417e0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5417e5ull));
TAIL_STATIC(0x527d30u,527);
}
B5417e5:L5417e5:{c.instructions+=4;NFSU2_TR(0x5417e5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5417e6:{NFSU2_TR(0x5417e6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5417e7:{NFSU2_TR(0x5417e7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5417e8:{NFSU2_TR(0x5417e8);
TAIL_STATIC(0x4f92a0u,4f9);
}
B5417ed:L5417ed:{c.instructions+=3;NFSU2_TR(0x5417ed);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5417ee:{NFSU2_TR(0x5417ee);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5417ef:{NFSU2_TR(0x5417ef);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5417f0:L5417f0:{c.instructions+=7;NFSU2_TR(0x5417f0);
__builtin_memmove((R+0),gp(0x838444),4);
}
B5417f5:{NFSU2_TR(0x5417f5);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5417f6:{NFSU2_TR(0x5417f6);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B5417f8:{NFSU2_TR(0x5417f8);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5417fa:{NFSU2_TR(0x5417fa);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5417fb:{NFSU2_TR(0x5417fb);
__builtin_memmove((R+20),(R+4),4);
}
B5417fd:{NFSU2_TR(0x5417fd);
if(r1(R+518)){{goto L54180a;}}
}
B5417ff:L5417ff:{c.instructions+=1;NFSU2_TR(0x5417ff);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x541804ull));
TAIL_STATIC(0x5291e0u,529);
}
B541804:L541804:{c.instructions+=1;NFSU2_TR(0x541804);
__builtin_memmove(gp(0x838444),(R+12),4);
}
B54180a:L54180a:{c.instructions+=2;NFSU2_TR(0x54180a);
u8 U[8];
__builtin_memmove((U+0),gp(0x838448),4);
w4(U+4,u32(u32(r4(U+0))-u32(r4(R+12))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B541810:{NFSU2_TR(0x541810);
if(r1(R+518)){{goto L54181f;}}
}
B541812:L541812:{c.instructions+=2;NFSU2_TR(0x541812);
__builtin_memmove((R+4),(R+20),4);
}
B541814:{NFSU2_TR(0x541814);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x541819ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x541680u);}goto L541680;}
}
B541819:L541819:{c.instructions+=1;NFSU2_TR(0x541819);
__builtin_memmove(gp(0x838448),(R+12),4);
}
B54181f:L54181f:{c.instructions+=2;NFSU2_TR(0x54181f);
u8 U[14];
__builtin_memmove((U+6),gp(0x83844c),4);
w1(R+512,u8((r4(U+6))<(r4(R+12))));
w1(R+523,sborrow<u32>(r4(U+6),r4(R+12)));
w4(U+10,u32(u32(r4(U+6))-u32(r4(R+12))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B541825:{NFSU2_TR(0x541825);
if(r1(R+518)){{goto L541928;}}
}
B54182b:L54182b:{c.instructions+=3;NFSU2_TR(0x54182b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54182c:{NFSU2_TR(0x54182c);
__builtin_memmove((R+4),(R+20),4);
}
B54182e:{NFSU2_TR(0x54182e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x541833ull));
TAIL_STATIC(0x5291e0u,529);
}
B541833:L541833:{c.instructions+=2;NFSU2_TR(0x541833);
__builtin_memmove((R+4),(R+20),4);
}
B541835:{NFSU2_TR(0x541835);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54183aull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x541680u);}goto L541680;}
}
B54183a:L54183a:{c.instructions+=5;NFSU2_TR(0x54183a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x7af8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B541840:{NFSU2_TR(0x541840);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x104ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B541846:{NFSU2_TR(0x541846);
u8 U[12];
w4(U+0,u32(u32(u32(0x72d8ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+20))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+24),(U+8),4);
}
B54184d:{NFSU2_TR(0x54184d);
__builtin_memmove((R+4),(R+24),4);
}
B54184f:{NFSU2_TR(0x54184f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x541854ull));
TAIL_STATIC(0x500610u,500);
}
B541854:L541854:{c.instructions+=2;NFSU2_TR(0x541854);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B541856:{NFSU2_TR(0x541856);
if(r1(R+518)){{goto L54191a;}}
}
B54185c:L54185c:{c.instructions+=5;NFSU2_TR(0x54185c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54185d:{NFSU2_TR(0x54185d);
u8 U[4];
w4(U+0,u32(0x4e6e6b28ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B541862:{NFSU2_TR(0x541862);
__builtin_memmove((R+4),(R+24),4);
}
B541864:{NFSU2_TR(0x541864);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B541866:{NFSU2_TR(0x541866);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54186bull));
TAIL_STATIC(0x500670u,500);
}
B54186b:L54186b:{c.instructions+=2;NFSU2_TR(0x54186b);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B54186d:{NFSU2_TR(0x54186d);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L541881;}}
}
B54186f:L54186f:{c.instructions+=1;NFSU2_TR(0x54186f);
}
B541870:L541870:{c.instructions+=4;NFSU2_TR(0x541870);
u8 U[4];
w4(U+0,u32(0x4e6e6b28ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B541875:{NFSU2_TR(0x541875);
__builtin_memmove((R+4),(R+24),4);
}
B541877:{NFSU2_TR(0x541877);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B541878:{NFSU2_TR(0x541878);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54187dull));
TAIL_STATIC(0x500670u,500);
}
B54187d:L54187d:{c.instructions+=2;NFSU2_TR(0x54187d);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+0)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B54187f:{NFSU2_TR(0x54187f);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x541870u);}goto L541870;}}
}
B541881:L541881:{c.instructions+=3;NFSU2_TR(0x541881);
u8 U[4];
w4(U+0,u32(0x4e6e6b28ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B541886:{NFSU2_TR(0x541886);
__builtin_memmove((R+4),(R+24),4);
}
B541888:{NFSU2_TR(0x541888);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54188dull));
TAIL_STATIC(0x500670u,500);
}
B54188d:L54188d:{c.instructions+=2;NFSU2_TR(0x54188d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54188e:{NFSU2_TR(0x54188e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x541893ull));
TAIL_STATIC(0x43c1c0u,43c);
}
B541893:L541893:{c.instructions+=7;NFSU2_TR(0x541893);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x7af8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B541899:{NFSU2_TR(0x541899);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(u32(0x104ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B54189f:{NFSU2_TR(0x54189f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5418a2:{NFSU2_TR(0x5418a2);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5418a4:{NFSU2_TR(0x5418a4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B5418a7:{NFSU2_TR(0x5418a7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5418a8:{NFSU2_TR(0x5418a8);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L5418be;}}
}
B5418aa:L5418aa:{c.instructions+=4;NFSU2_TR(0x5418aa);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x73d8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5418b0:{NFSU2_TR(0x5418b0);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+24,u32(s32(s8(r1(U+4)))));
}
B5418b4:{NFSU2_TR(0x5418b4);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5418b6:{NFSU2_TR(0x5418b6);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L5418be;}}
}
B5418b8:L5418b8:{c.instructions+=2;NFSU2_TR(0x5418b8);
u8 U[16];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+24),(U+12),4);
}
B5418bc:{NFSU2_TR(0x5418bc);
{goto L5418c0;}
}
B5418be:L5418be:{c.instructions+=1;NFSU2_TR(0x5418be);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B5418c0:L5418c0:{c.instructions+=2;NFSU2_TR(0x5418c0);
u8 U[16];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x73c0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B5418c6:{NFSU2_TR(0x5418c6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L54191a;}}
}
B5418c8:L5418c8:{c.instructions+=4;NFSU2_TR(0x5418c8);
__builtin_memmove((R+8),gp(0x842ebc),4);
}
B5418ce:{NFSU2_TR(0x5418ce);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5418d0:{NFSU2_TR(0x5418d0);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+8),r4(U+0)));
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5418d2:{NFSU2_TR(0x5418d2);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5418fd;}}
}
B5418d4:L5418d4:{c.instructions+=2;NFSU2_TR(0x5418d4);
w4(R+4,u32(0x840ed8ull));
}
B5418d9:{NFSU2_TR(0x5418d9);
__builtin_memmove((R+16),(R+16),4);
}
B5418e0:L5418e0:{c.instructions+=2;NFSU2_TR(0x5418e0);
u8 U[3];
__builtin_memmove((U+0),gp(u32(r4(R+4))),1);
__builtin_memmove((U+1),(U+0),1);
w1(U+2,u8(u32(r1(U+1))-u32(r1(R+12))));
w1(R+518,u8((r1(U+2))==(u8(0x0ull))));
}
B5418e2:{NFSU2_TR(0x5418e2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5418f1;}}
}
B5418e4:L5418e4:{c.instructions+=4;NFSU2_TR(0x5418e4);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B5418e5:{NFSU2_TR(0x5418e5);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x7f8ull))));
}
B5418eb:{NFSU2_TR(0x5418eb);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5418ed:{NFSU2_TR(0x5418ed);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5418e0u);}goto L5418e0;}}
}
B5418ef:L5418ef:{c.instructions+=1;NFSU2_TR(0x5418ef);
{goto L5418fd;}
}
B5418f1:L5418f1:{c.instructions+=2;NFSU2_TR(0x5418f1);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x7f8ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B5418f7:{NFSU2_TR(0x5418f7);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x840ed8ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5418fd:L5418fd:{c.instructions+=5;NFSU2_TR(0x5418fd);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(s32(s16(r2(U+4)))));
}
B541901:{NFSU2_TR(0x541901);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x7134ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+8))));
s4(u32(r4(U+0)),r4(U+4));
}
B541907:{NFSU2_TR(0x541907);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x7af8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B54190d:{NFSU2_TR(0x54190d);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x104ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B541913:{NFSU2_TR(0x541913);
u8 U[16];
w4(U+0,u32(u32(u32(0x73c0ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+20))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+24),4);
s4(u32(r4(U+8)),r4(U+12));
}
B54191a:L54191a:{c.instructions+=2;NFSU2_TR(0x54191a);
__builtin_memmove((R+4),(R+20),4);
}
B54191c:{NFSU2_TR(0x54191c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x541921ull));
TAIL_STATIC(0x5291e0u,529);
}
B541921:L541921:{c.instructions+=2;NFSU2_TR(0x541921);
__builtin_memmove(gp(0x83844c),(R+12),4);
}
B541927:{NFSU2_TR(0x541927);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B541928:L541928:{c.instructions+=3;NFSU2_TR(0x541928);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B541929:{NFSU2_TR(0x541929);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B54192a:{NFSU2_TR(0x54192a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B541930:L541930:{c.instructions+=6;NFSU2_TR(0x541930);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B541931:{NFSU2_TR(0x541931);
__builtin_memmove((R+20),(R+16),4);
}
B541933:{NFSU2_TR(0x541933);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B541934:{NFSU2_TR(0x541934);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B541937:{NFSU2_TR(0x541937);
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
B541939:{NFSU2_TR(0x541939);
if(r1(R+518)){{goto L54194e;}}
}
B54193b:L54193b:{c.instructions+=3;NFSU2_TR(0x54193b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54193c:{NFSU2_TR(0x54193c);
w4(R+4,u32(0x85ad40ull));
}
B541941:{NFSU2_TR(0x541941);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x541946ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x541210u);}goto L541210;}
}
B541946:L541946:{c.instructions+=2;NFSU2_TR(0x541946);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B541949:{NFSU2_TR(0x541949);
__builtin_memmove(gp(0x837fd8),(R+0),4);
}
B54194e:L54194e:{c.instructions+=3;NFSU2_TR(0x54194e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B54194f:{NFSU2_TR(0x54194f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B541950:{NFSU2_TR(0x541950);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B541960:L541960:{c.instructions+=4;NFSU2_TR(0x541960);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B541961:{NFSU2_TR(0x541961);
__builtin_memmove((R+24),(R+4),4);
}
B541963:{NFSU2_TR(0x541963);
u8 U[22];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x11cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0x3ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0x3ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0x3ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B54196a:{NFSU2_TR(0x54196a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5419b1;}}
}
B54196c:L54196c:{c.instructions+=7;NFSU2_TR(0x54196c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B54196f:{NFSU2_TR(0x54196f);
__builtin_memmove((R+8),gp(0x838428),4);
}
B541975:{NFSU2_TR(0x541975);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x11cull))));
w4(U+4,u32(0x5ull));
s4(u32(r4(U+0)),r4(U+4));
}
B54197f:{NFSU2_TR(0x54197f);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+0))),2);
w4(R+0,u32(r2(U+0)));
}
B541982:{NFSU2_TR(0x541982);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+8))));
}
B541984:{NFSU2_TR(0x541984);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B541985:{NFSU2_TR(0x541985);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54198aull));
TAIL_STATIC(0x43db50u,43d);
}
B54198a:L54198a:{c.instructions+=4;NFSU2_TR(0x54198a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B54198d:{NFSU2_TR(0x54198d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54198e:{NFSU2_TR(0x54198e);
w4(R+4,u32(0x85ad40ull));
}
B541993:{NFSU2_TR(0x541993);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x541998ull));
TAIL_STATIC(0x512f10u,512);
}
B541998:L541998:{c.instructions+=5;NFSU2_TR(0x541998);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x6ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B54199c:{NFSU2_TR(0x54199c);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B54199e:{NFSU2_TR(0x54199e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x11cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5419a4:{NFSU2_TR(0x5419a4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5419a7:{NFSU2_TR(0x5419a7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5419acull));
TAIL_STATIC(0x533310u,533);
}
B5419ac:L5419ac:{c.instructions+=1;NFSU2_TR(0x5419ac);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5419b1ull));
TAIL_STATIC(0x4f92a0u,4f9);
}
B5419b1:L5419b1:{c.instructions+=2;NFSU2_TR(0x5419b1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5419b2:{NFSU2_TR(0x5419b2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5419c0:L5419c0:{c.instructions+=9;NFSU2_TR(0x5419c0);
__builtin_memmove((R+8),gp(0x838428),4);
}
B5419c6:{NFSU2_TR(0x5419c6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5419c7:{NFSU2_TR(0x5419c7);
__builtin_memmove((R+24),(R+4),4);
}
B5419c9:{NFSU2_TR(0x5419c9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5419cc:{NFSU2_TR(0x5419cc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x11cull))));
w4(U+4,u32(0x5ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5419d6:{NFSU2_TR(0x5419d6);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+0))),2);
w4(R+0,u32(r2(U+0)));
}
B5419d9:{NFSU2_TR(0x5419d9);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+8))));
}
B5419db:{NFSU2_TR(0x5419db);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5419dc:{NFSU2_TR(0x5419dc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5419e1ull));
TAIL_STATIC(0x43db50u,43d);
}
B5419e1:L5419e1:{c.instructions+=4;NFSU2_TR(0x5419e1);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5419e4:{NFSU2_TR(0x5419e4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5419e5:{NFSU2_TR(0x5419e5);
w4(R+4,u32(0x85ad40ull));
}
B5419ea:{NFSU2_TR(0x5419ea);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5419efull));
TAIL_STATIC(0x512f10u,512);
}
B5419ef:L5419ef:{c.instructions+=5;NFSU2_TR(0x5419ef);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x6ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5419f3:{NFSU2_TR(0x5419f3);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5419f5:{NFSU2_TR(0x5419f5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x11cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5419fb:{NFSU2_TR(0x5419fb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5419fe:{NFSU2_TR(0x5419fe);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x541a03ull));
TAIL_STATIC(0x533310u,533);
}
B541a03:L541a03:{c.instructions+=2;NFSU2_TR(0x541a03);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B541a04:{NFSU2_TR(0x541a04);
TAIL_STATIC(0x4f92a0u,4f9);
}
B541a10:L541a10:{c.instructions+=3;NFSU2_TR(0x541a10);
u8 U[22];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x156a8ull))));
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
B541a17:{NFSU2_TR(0x541a17);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x16774ull))));
w4(U+4,u32(0x2ull));
s4(u32(r4(U+0)),r4(U+4));
}
B541a21:{NFSU2_TR(0x541a21);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L541a44;}}
}
B541a23:L541a23:{c.instructions+=3;NFSU2_TR(0x541a23);
__builtin_memmove((R+0),gp(0x85ba65),1);
}
B541a28:{NFSU2_TR(0x541a28);
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
B541a2a:{NFSU2_TR(0x541a2a);
if(r1(R+518)){{goto L541a44;}}
}
B541a2c:L541a2c:{c.instructions+=3;NFSU2_TR(0x541a2c);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B541a2e:{NFSU2_TR(0x541a2e);
w4(R+4,u32(0x85ba64ull));
}
B541a33:{NFSU2_TR(0x541a33);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x541a38ull));
TAIL_STATIC(0x5287a0u,528);
}
B541a38:L541a38:{c.instructions+=2;NFSU2_TR(0x541a38);
__builtin_memmove((R+0),gp(0x85ef48),4);
}
B541a3d:{NFSU2_TR(0x541a3d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
w4(U+4,u32(0x2ull));
s4(u32(r4(U+0)),r4(U+4));
}
B541a44:L541a44:{c.instructions+=1;NFSU2_TR(0x541a44);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B541a50:L541a50:{c.instructions+=12;NFSU2_TR(0x541a50);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B541a51:{NFSU2_TR(0x541a51);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B541a52:{NFSU2_TR(0x541a52);
__builtin_memmove((R+24),(R+4),4);
}
B541a54:{NFSU2_TR(0x541a54);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B541a56:{NFSU2_TR(0x541a56);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B541a58:{NFSU2_TR(0x541a58);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B541a5b:{NFSU2_TR(0x541a5b);
__builtin_memmove((R+0),(R+518),1);
}
B541a5e:{NFSU2_TR(0x541a5e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B541a5f:{NFSU2_TR(0x541a5f);
__builtin_memmove((R+28),(R+0),4);
}
B541a61:{NFSU2_TR(0x541a61);
__builtin_memmove((R+0),gp(0x89e7a0),4);
}
B541a66:{NFSU2_TR(0x541a66);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B541a67:{NFSU2_TR(0x541a67);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x541a6cull));
TAIL_STATIC(0x5d3e40u,5d3);
}
B541a6c:L541a6c:{c.instructions+=5;NFSU2_TR(0x541a6c);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B541a6e:{NFSU2_TR(0x541a6e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B541a71:{NFSU2_TR(0x541a71);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B541a73:{NFSU2_TR(0x541a73);
w4(R+8,u32(0x1ull));
}
B541a78:{NFSU2_TR(0x541a78);
if(r1(R+518)){{goto L541aa6;}}
}
B541a7a:L541a7a:{c.instructions+=3;NFSU2_TR(0x541a7a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x94ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B541a80:{NFSU2_TR(0x541a80);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B541a82:{NFSU2_TR(0x541a82);
if(r1(R+518)){{goto L541a8b;}}
}
B541a84:L541a84:{c.instructions+=2;NFSU2_TR(0x541a84);
w4(R+0,u32(0x3ull));
}
B541a89:{NFSU2_TR(0x541a89);
{goto L541aa9;}
}
B541a8b:L541a8b:{c.instructions+=2;NFSU2_TR(0x541a8b);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(u8(0x2ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B541a8d:{NFSU2_TR(0x541a8d);
if(r1(R+518)){{goto L541a93;}}
}
B541a8f:L541a8f:{c.instructions+=2;NFSU2_TR(0x541a8f);
__builtin_memmove((R+0),(R+8),4);
}
B541a91:{NFSU2_TR(0x541a91);
{goto L541aa9;}
}
B541a93:L541a93:{c.instructions+=2;NFSU2_TR(0x541a93);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(u8(0x4ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B541a95:{NFSU2_TR(0x541a95);
if(r1(R+518)){{goto L541a9b;}}
}
B541a97:L541a97:{c.instructions+=2;NFSU2_TR(0x541a97);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B541a99:{NFSU2_TR(0x541a99);
{goto L541aa9;}
}
B541a9b:L541a9b:{c.instructions+=2;NFSU2_TR(0x541a9b);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(u8(0x8ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B541a9d:{NFSU2_TR(0x541a9d);
if(r1(R+518)){{goto L541aa6;}}
}
B541a9f:L541a9f:{c.instructions+=2;NFSU2_TR(0x541a9f);
w4(R+0,u32(0x2ull));
}
B541aa4:{NFSU2_TR(0x541aa4);
{goto L541aa9;}
}
B541aa6:L541aa6:{c.instructions+=1;NFSU2_TR(0x541aa6);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0xffffffffull))));
}
B541aa9:L541aa9:{c.instructions+=6;NFSU2_TR(0x541aa9);
}
B541aaf:{NFSU2_TR(0x541aaf);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xab10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B541ab5:{NFSU2_TR(0x541ab5);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B541ab6:{NFSU2_TR(0x541ab6);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B541ab9:{NFSU2_TR(0x541ab9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xab10ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B541abf:{NFSU2_TR(0x541abf);
if(r1(R+518)){{goto L541ad2;}}
}
B541ac1:L541ac1:{c.instructions+=3;NFSU2_TR(0x541ac1);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B541ac4:{NFSU2_TR(0x541ac4);
u8 U[16];
w4(U+0,u32(u32(u32(0xab1cull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
w4(U+12,u32(u32(r4(U+12))+u32(u32(0x1ull))));
s4(u32(r4(U+8)),r4(U+12));
}
B541acb:{NFSU2_TR(0x541acb);
u8 U[12];
w4(U+0,u32(u32(u32(0xab1cull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B541ad2:L541ad2:{c.instructions+=2;NFSU2_TR(0x541ad2);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B541ad4:{NFSU2_TR(0x541ad4);
if(r1(R+518)){{goto L541b08;}}
}
B541ad6:L541ad6:{c.instructions+=6;NFSU2_TR(0x541ad6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xab4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B541adc:{NFSU2_TR(0x541adc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1565cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B541ae2:{NFSU2_TR(0x541ae2);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B541ae3:{NFSU2_TR(0x541ae3);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B541ae6:{NFSU2_TR(0x541ae6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1565cull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B541aec:{NFSU2_TR(0x541aec);
if(r1(R+518)){{goto L541b02;}}
}
B541aee:L541aee:{c.instructions+=5;NFSU2_TR(0x541aee);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B541af1:{NFSU2_TR(0x541af1);
u8 U[16];
w4(U+0,u32(u32(u32(0x15668ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+4),(U+12),4);
}
B541af8:{NFSU2_TR(0x541af8);
u8 U[12];
w4(U+0,u32(u32(u32(0x15668ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B541aff:{NFSU2_TR(0x541aff);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B541b00:{NFSU2_TR(0x541b00);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B541b02:L541b02:{c.instructions+=1;NFSU2_TR(0x541b02);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x15698ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B541b08:L541b08:{c.instructions+=4;NFSU2_TR(0x541b08);
u8 U[22];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x156a8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(r4(R+8))));
w1(R+523,sborrow<u32>(r4(U+14),r4(R+8)));
w4(U+18,u32(u32(r4(U+14))-u32(r4(R+8))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B541b0e:{NFSU2_TR(0x541b0e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B541b0f:{NFSU2_TR(0x541b0f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B541b10:{NFSU2_TR(0x541b10);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L541b35;}}
}
B541b12:L541b12:{c.instructions+=7;NFSU2_TR(0x541b12);
__builtin_memmove(gp(0x863444),(R+12),4);
}
B541b18:{NFSU2_TR(0x541b18);
__builtin_memmove(gp(0x863448),(R+12),4);
}
B541b1e:{NFSU2_TR(0x541b1e);
__builtin_memmove(gp(0x86344c),(R+12),4);
}
B541b24:{NFSU2_TR(0x541b24);
__builtin_memmove(gp(0x863450),(R+12),4);
}
B541b2a:{NFSU2_TR(0x541b2a);
w4(R+4,u32(0x85ad40ull));
}
B541b2f:{NFSU2_TR(0x541b2f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B541b30:{NFSU2_TR(0x541b30);
TAIL_STATIC(0x533310u,533);
}
B541b35:L541b35:{c.instructions+=2;NFSU2_TR(0x541b35);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B541b36:{NFSU2_TR(0x541b36);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B541b40:L541b40:{c.instructions+=26;NFSU2_TR(0x541b40);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B541b41:{NFSU2_TR(0x541b41);
__builtin_memmove((R+20),(R+16),4);
}
B541b43:{NFSU2_TR(0x541b43);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff8ull))));
}
B541b46:{NFSU2_TR(0x541b46);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B541b48:{NFSU2_TR(0x541b48);
u8 U[4];
w4(U+0,u32(0x777978ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B541b4d:{NFSU2_TR(0x541b4d);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B541b53:{NFSU2_TR(0x541b53);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B541b54:{NFSU2_TR(0x541b54);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B541b5b:{NFSU2_TR(0x541b5b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xcull))));
}
B541b5e:{NFSU2_TR(0x541b5e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B541b5f:{NFSU2_TR(0x541b5f);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((R+24),(U+0),4);
}
B541b63:{NFSU2_TR(0x541b63);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B541b67:{NFSU2_TR(0x541b67);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B541b68:{NFSU2_TR(0x541b68);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B541b6c:{NFSU2_TR(0x541b6c);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B541b70:{NFSU2_TR(0x541b70);
__builtin_memmove((R+4),gp(0x89e7cc),4);
}
B541b76:{NFSU2_TR(0x541b76);
__builtin_memmove((R+8),gp(0x89e7c8),4);
}
B541b7c:{NFSU2_TR(0x541b7c);
__builtin_memmove((R+0),gp(0x89e7c4),4);
}
B541b81:{NFSU2_TR(0x541b81);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+4))));
}
B541b83:{NFSU2_TR(0x541b83);
__builtin_memmove((R+4),gp(0x89e7c0),4);
}
B541b89:{NFSU2_TR(0x541b89);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+0))));
}
B541b8b:{NFSU2_TR(0x541b8b);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+4))));
}
B541b8d:{NFSU2_TR(0x541b8d);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B541b8f:{NFSU2_TR(0x541b8f);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B541b91:{NFSU2_TR(0x541b91);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B541b99:{NFSU2_TR(0x541b99);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L541bf7;}}
}
B541b9b:L541b9b:{c.instructions+=1;NFSU2_TR(0x541b9b);
w4(R+24,u32(0x85036cull));
}
B541ba0:L541ba0:{c.instructions+=2;NFSU2_TR(0x541ba0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xf4ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B541baa:{NFSU2_TR(0x541baa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x541bafull));
TAIL_STATIC(0x440ec0u,440);
}
B541baf:L541baf:{c.instructions+=2;NFSU2_TR(0x541baf);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B541bb1:{NFSU2_TR(0x541bb1);
if(r1(R+518)){{goto L541bb8;}}
}
B541bb3:L541bb3:{c.instructions+=2;NFSU2_TR(0x541bb3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B541bb6:{NFSU2_TR(0x541bb6);
{goto L541bba;}
}
B541bb8:L541bb8:{c.instructions+=1;NFSU2_TR(0x541bb8);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B541bba:L541bba:{c.instructions+=16;NFSU2_TR(0x541bba);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B541bbe:{NFSU2_TR(0x541bbe);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B541bc0:{NFSU2_TR(0x541bc0);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B541bc4:{NFSU2_TR(0x541bc4);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B541bc7:{NFSU2_TR(0x541bc7);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B541bcb:{NFSU2_TR(0x541bcb);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B541bcd:{NFSU2_TR(0x541bcd);
__builtin_memmove((R+0),gp(0x89e7cc),4);
}
B541bd2:{NFSU2_TR(0x541bd2);
__builtin_memmove((R+8),gp(0x89e7c8),4);
}
B541bd8:{NFSU2_TR(0x541bd8);
__builtin_memmove((R+4),gp(0x89e7c0),4);
}
B541bde:{NFSU2_TR(0x541bde);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+0))));
}
B541be0:{NFSU2_TR(0x541be0);
w4(R+8,u32(u32(r4(R+8))+u32(m4(0x89e7c4))));
}
B541be6:{NFSU2_TR(0x541be6);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B541be7:{NFSU2_TR(0x541be7);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+4))));
}
B541be9:{NFSU2_TR(0x541be9);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x224ull))));
}
B541bef:{NFSU2_TR(0x541bef);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+0)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B541bf1:{NFSU2_TR(0x541bf1);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x541ba0u);}goto L541ba0;}}
}
B541bf3:L541bf3:{c.instructions+=1;NFSU2_TR(0x541bf3);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B541bf7:L541bf7:{c.instructions+=1;NFSU2_TR(0x541bf7);
s4(0x83846c,u32(0x1ull));
}
B541c01:L541c01:{c.instructions+=4;NFSU2_TR(0x541c01);
__builtin_memmove((R+8),gp(0x89e7bc),4);
}
B541c07:{NFSU2_TR(0x541c07);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x15ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x15ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B541c0a:{NFSU2_TR(0x541c0a);
__builtin_memmove((R+0),(R+8),4);
}
B541c0c:{NFSU2_TR(0x541c0c);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L541c13;}}
}
B541c0e:L541c0e:{c.instructions+=1;NFSU2_TR(0x541c0e);
w4(R+0,u32(0x15ull));
}
B541c13:L541c13:{c.instructions+=2;NFSU2_TR(0x541c13);
u8 U[8];
__builtin_memmove((U+0),gp(0x83846c),4);
w1(R+523,sborrow<u32>(r4(U+0),r4(R+0)));
w4(U+4,u32(u32(r4(U+0))-u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B541c19:{NFSU2_TR(0x541c19);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L541c6e;}}
}
B541c1b:L541c1b:{c.instructions+=3;NFSU2_TR(0x541c1b);
u8 U[4];
w4(U+0,u32(0x503360ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B541c20:{NFSU2_TR(0x541c20);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B541c24:{NFSU2_TR(0x541c24);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x541c29ull));
TAIL_STATIC(0x43e650u,43e);
}
B541c29:L541c29:{c.instructions+=4;NFSU2_TR(0x541c29);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B541c2d:{NFSU2_TR(0x541c2d);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B541c31:{NFSU2_TR(0x541c31);
w4(R+28,u32(0x1ull));
}
B541c36:{NFSU2_TR(0x541c36);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x541c3bull));
TAIL_STATIC(0x502fd0u,502);
}
B541c3b:L541c3b:{c.instructions+=2;NFSU2_TR(0x541c3b);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B541c3d:{NFSU2_TR(0x541c3d);
if(r1(R+518)){{goto L541c66;}}
}
B541c3f:L541c3f:{c.instructions+=1;NFSU2_TR(0x541c3f);
}
B541c40:L541c40:{c.instructions+=5;NFSU2_TR(0x541c40);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B541c43:{NFSU2_TR(0x541c43);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B541c46:{NFSU2_TR(0x541c46);
__builtin_memmove((R+8),gp(0x83846c),4);
}
B541c4c:{NFSU2_TR(0x541c4c);
u8 U[16];
w4(U+0,u32(u32(u32(0xc8ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+28),4);
s4(u32(r4(U+8)),r4(U+12));
}
B541c53:{NFSU2_TR(0x541c53);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L541c5b;}}
}
B541c55:L541c55:{c.instructions+=1;NFSU2_TR(0x541c55);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xf4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B541c5b:L541c5b:{c.instructions+=4;NFSU2_TR(0x541c5b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+24),(U+0),4);
}
B541c5d:{NFSU2_TR(0x541c5d);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B541c5e:{NFSU2_TR(0x541c5e);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B541c60:{NFSU2_TR(0x541c60);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x541c40u);}goto L541c40;}}
}
B541c62:L541c62:{c.instructions+=1;NFSU2_TR(0x541c62);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B541c66:L541c66:{c.instructions+=2;NFSU2_TR(0x541c66);
s4(0x83846c,u32(u32(m4(0x83846c))+u32(u32(0x1ull))));
}
B541c6c:{NFSU2_TR(0x541c6c);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x541c01u);}goto L541c01;}
}
B541c6e:L541c6e:{c.instructions+=3;NFSU2_TR(0x541c6e);
__builtin_memmove((R+0),gp(0x89e7d9),1);
}
B541c73:{NFSU2_TR(0x541c73);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B541c75:{NFSU2_TR(0x541c75);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L541c84;}}
}
B541c77:L541c77:{c.instructions+=3;NFSU2_TR(0x541c77);
__builtin_memmove((R+0),gp(0x890104),4);
}
B541c7c:{NFSU2_TR(0x541c7c);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B541c7e:{NFSU2_TR(0x541c7e);
if(r1(R+518)){{goto L541d39;}}
}
B541c84:L541c84:{c.instructions+=8;NFSU2_TR(0x541c84);
__builtin_memmove((R+4),gp(0x89e7cc),4);
}
B541c8a:{NFSU2_TR(0x541c8a);
__builtin_memmove((R+0),gp(0x89e7c8),4);
}
B541c8f:{NFSU2_TR(0x541c8f);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+4))));
}
B541c91:{NFSU2_TR(0x541c91);
w4(R+0,u32(u32(r4(R+0))+u32(m4(0x89e7c4))));
}
B541c97:{NFSU2_TR(0x541c97);
__builtin_memmove((R+4),gp(0x89e7c0),4);
}
B541c9d:{NFSU2_TR(0x541c9d);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+0))));
}
B541c9f:{NFSU2_TR(0x541c9f);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B541ca1:{NFSU2_TR(0x541ca1);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L541cbe;}}
}
B541ca3:L541ca3:{c.instructions+=2;NFSU2_TR(0x541ca3);
w4(R+0,u32(0x850460ull));
}
B541ca8:{NFSU2_TR(0x541ca8);
{goto L541cb0;}
}
B541cb0:L541cb0:{c.instructions+=4;NFSU2_TR(0x541cb0);
u8 U[4];
w4(U+0,u32(0x0ull));
s4(u32(r4(R+0)),r4(U+0));
}
B541cb6:{NFSU2_TR(0x541cb6);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x224ull))));
}
B541cbb:{NFSU2_TR(0x541cbb);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B541cbc:{NFSU2_TR(0x541cbc);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x541cb0u);}goto L541cb0;}}
}
B541cbe:L541cbe:{c.instructions+=1;NFSU2_TR(0x541cbe);
s4(0x83846c,u32(0x1ull));
}
B541cc8:L541cc8:{c.instructions+=3;NFSU2_TR(0x541cc8);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x15ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x15ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B541ccb:{NFSU2_TR(0x541ccb);
__builtin_memmove((R+0),(R+8),4);
}
B541ccd:{NFSU2_TR(0x541ccd);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L541cd4;}}
}
B541ccf:L541ccf:{c.instructions+=1;NFSU2_TR(0x541ccf);
w4(R+0,u32(0x15ull));
}
B541cd4:L541cd4:{c.instructions+=2;NFSU2_TR(0x541cd4);
u8 U[8];
__builtin_memmove((U+0),gp(0x83846c),4);
w1(R+523,sborrow<u32>(r4(U+0),r4(R+0)));
w4(U+4,u32(u32(r4(U+0))-u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B541cda:{NFSU2_TR(0x541cda);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L541d39;}}
}
B541cdc:L541cdc:{c.instructions+=3;NFSU2_TR(0x541cdc);
u8 U[4];
w4(U+0,u32(0x5033f0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B541ce1:{NFSU2_TR(0x541ce1);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B541ce5:{NFSU2_TR(0x541ce5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x541ceaull));
TAIL_STATIC(0x43e650u,43e);
}
B541cea:L541cea:{c.instructions+=4;NFSU2_TR(0x541cea);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B541cee:{NFSU2_TR(0x541cee);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B541cf2:{NFSU2_TR(0x541cf2);
w4(R+28,u32(0x1ull));
}
B541cf7:{NFSU2_TR(0x541cf7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x541cfcull));
TAIL_STATIC(0x502fd0u,502);
}
B541cfc:L541cfc:{c.instructions+=2;NFSU2_TR(0x541cfc);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B541cfe:{NFSU2_TR(0x541cfe);
if(r1(R+518)){{goto L541d26;}}
}
B541d00:L541d00:{c.instructions+=5;NFSU2_TR(0x541d00);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B541d03:{NFSU2_TR(0x541d03);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B541d06:{NFSU2_TR(0x541d06);
__builtin_memmove((R+8),gp(0x83846c),4);
}
B541d0c:{NFSU2_TR(0x541d0c);
u8 U[16];
w4(U+0,u32(u32(u32(0x1e8ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+28),4);
s4(u32(r4(U+8)),r4(U+12));
}
B541d13:{NFSU2_TR(0x541d13);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L541d1b;}}
}
B541d15:L541d15:{c.instructions+=1;NFSU2_TR(0x541d15);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xf4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B541d1b:L541d1b:{c.instructions+=4;NFSU2_TR(0x541d1b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+24),(U+0),4);
}
B541d1d:{NFSU2_TR(0x541d1d);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B541d1e:{NFSU2_TR(0x541d1e);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B541d20:{NFSU2_TR(0x541d20);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x541d00u);}goto L541d00;}}
}
B541d22:L541d22:{c.instructions+=1;NFSU2_TR(0x541d22);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B541d26:L541d26:{c.instructions+=5;NFSU2_TR(0x541d26);
__builtin_memmove((R+0),gp(0x83846c),4);
}
B541d2b:{NFSU2_TR(0x541d2b);
__builtin_memmove((R+8),gp(0x89e7bc),4);
}
B541d31:{NFSU2_TR(0x541d31);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B541d32:{NFSU2_TR(0x541d32);
__builtin_memmove(gp(0x83846c),(R+0),4);
}
B541d37:{NFSU2_TR(0x541d37);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x541cc8u);}goto L541cc8;}
}
B541d39:L541d39:{c.instructions+=4;NFSU2_TR(0x541d39);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B541d3d:{NFSU2_TR(0x541d3d);
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
B541d3f:{NFSU2_TR(0x541d3f);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B541d47:{NFSU2_TR(0x541d47);
if(r1(R+518)){{goto L541d71;}}
}
B541d49:L541d49:{c.instructions+=1;NFSU2_TR(0x541d49);
__builtin_memmove((R+16),(R+16),4);
}
B541d50:L541d50:{c.instructions+=7;NFSU2_TR(0x541d50);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B541d52:{NFSU2_TR(0x541d52);
__builtin_memmove((R+4),(R+24),4);
}
B541d54:{NFSU2_TR(0x541d54);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B541d57:{NFSU2_TR(0x541d57);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+24)),r4(U+0));
}
B541d59:{NFSU2_TR(0x541d59);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B541d5a:{NFSU2_TR(0x541d5a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B541d5d:{NFSU2_TR(0x541d5d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x541d62ull));
TAIL_STATIC(0x440ef0u,440);
}
B541d62:L541d62:{c.instructions+=5;NFSU2_TR(0x541d62);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B541d66:{NFSU2_TR(0x541d66);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B541d6a:{NFSU2_TR(0x541d6a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B541d6d:{NFSU2_TR(0x541d6d);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
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
B541d6f:{NFSU2_TR(0x541d6f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x541d50u);}goto L541d50;}}
}
B541d71:L541d71:{c.instructions+=7;NFSU2_TR(0x541d71);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B541d75:{NFSU2_TR(0x541d75);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B541d76:{NFSU2_TR(0x541d76);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B541d7d:{NFSU2_TR(0x541d7d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B541d7e:{NFSU2_TR(0x541d7e);
__builtin_memmove((R+16),(R+20),4);
}
B541d80:{NFSU2_TR(0x541d80);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B541d81:{NFSU2_TR(0x541d81);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B541d90:L541d90:{c.instructions+=3;NFSU2_TR(0x541d90);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B541d91:{NFSU2_TR(0x541d91);
__builtin_memmove((R+24),(R+4),4);
}
B541d93:{NFSU2_TR(0x541d93);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x541d98ull));
TAIL_STATIC(0x534a50u,534);
}
B541d98:L541d98:{c.instructions+=2;NFSU2_TR(0x541d98);
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
B541d9d:{NFSU2_TR(0x541d9d);
if(r1(R+518)){{goto L541da8;}}
}
B541d9f:L541d9f:{c.instructions+=2;NFSU2_TR(0x541d9f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B541da0:{NFSU2_TR(0x541da0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x541da5ull));
TAIL_STATIC(0x575630u,575);
}
B541da5:L541da5:{c.instructions+=1;NFSU2_TR(0x541da5);
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
B541da8:L541da8:{c.instructions+=3;NFSU2_TR(0x541da8);
__builtin_memmove((R+0),(R+24),4);
}
B541daa:{NFSU2_TR(0x541daa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B541dab:{NFSU2_TR(0x541dab);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B541db0:L541db0:{c.instructions+=12;NFSU2_TR(0x541db0);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B541db3:{NFSU2_TR(0x541db3);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B541db5:{NFSU2_TR(0x541db5);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B541db9:{NFSU2_TR(0x541db9);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B541dba:{NFSU2_TR(0x541dba);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B541dbb:{NFSU2_TR(0x541dbb);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B541dbe:{NFSU2_TR(0x541dbe);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B541dbf:{NFSU2_TR(0x541dbf);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B541dc0:{NFSU2_TR(0x541dc0);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B541dc4:{NFSU2_TR(0x541dc4);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B541dc7:{NFSU2_TR(0x541dc7);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B541dca:{NFSU2_TR(0x541dca);
if(r1(R+518)){{goto L541eac;}}
}
B541dd0:L541dd0:{c.instructions+=2;NFSU2_TR(0x541dd0);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B541dd2:{NFSU2_TR(0x541dd2);
if(r1(R+518)){{goto L541e23;}}
}
B541dd4:L541dd4:{c.instructions+=2;NFSU2_TR(0x541dd4);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+8,u32(u32(r4(U+4))&u32(u32(0xff000000ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B541ddb:{NFSU2_TR(0x541ddb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L541e23;}}
}
B541ddd:L541ddd:{c.instructions+=3;NFSU2_TR(0x541ddd);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B541de0:{NFSU2_TR(0x541de0);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+519,u8(s8(r1(U+0))<s8(u8(0x0ull))));
}
B541de2:{NFSU2_TR(0x541de2);
u8 U[1];
w1(U+0,u8(!(r1(R+519))));
if(r1(U+0)){{goto L541e07;}}
}
B541de4:L541de4:{c.instructions+=9;NFSU2_TR(0x541de4);
__builtin_memmove((R+0),gp(0x7f7c8c),4);
}
B541de9:{NFSU2_TR(0x541de9);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B541dec:{NFSU2_TR(0x541dec);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B541ded:{NFSU2_TR(0x541ded);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0xff7fffffull))));
}
B541df2:{NFSU2_TR(0x541df2);
w4(R+4,u32(u32(r4(R+4))&u32(r4(R+0))));
}
B541df4:{NFSU2_TR(0x541df4);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B541df5:{NFSU2_TR(0x541df5);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B541df6:{NFSU2_TR(0x541df6);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B541df9:{NFSU2_TR(0x541df9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x541dfeull));
TAIL_STATIC(0x5354f0u,535);
}
B541dfe:L541dfe:{c.instructions+=3;NFSU2_TR(0x541dfe);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B541e02:{NFSU2_TR(0x541e02);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B541e05:{NFSU2_TR(0x541e05);
{goto L541e37;}
}
B541e07:L541e07:{c.instructions+=7;NFSU2_TR(0x541e07);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B541e0a:{NFSU2_TR(0x541e0a);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B541e0b:{NFSU2_TR(0x541e0b);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0x800000ull))));
}
B541e10:{NFSU2_TR(0x541e10);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B541e11:{NFSU2_TR(0x541e11);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B541e12:{NFSU2_TR(0x541e12);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B541e15:{NFSU2_TR(0x541e15);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x541e1aull));
TAIL_STATIC(0x5354f0u,535);
}
B541e1a:L541e1a:{c.instructions+=3;NFSU2_TR(0x541e1a);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B541e1e:{NFSU2_TR(0x541e1e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B541e21:{NFSU2_TR(0x541e21);
{goto L541e37;}
}
B541e23:L541e23:{c.instructions+=5;NFSU2_TR(0x541e23);
__builtin_memmove((R+4),gp(0x7f7c8c),4);
}
B541e29:{NFSU2_TR(0x541e29);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B541e2c:{NFSU2_TR(0x541e2c);
w4(R+4,u32(u32(r4(R+4))|u32(u32(0xff7fffffull))));
}
B541e32:{NFSU2_TR(0x541e32);
w4(R+0,u32(u32(r4(R+0))&u32(r4(R+4))));
}
B541e34:{NFSU2_TR(0x541e34);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B541e37:L541e37:{c.instructions+=5;NFSU2_TR(0x541e37);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B541e3a:{NFSU2_TR(0x541e3a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B541e3d:{NFSU2_TR(0x541e3d);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B541e3f:{NFSU2_TR(0x541e3f);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0x80ull));
s4(u32(r4(U+0)),r4(U+4));
}
B541e47:{NFSU2_TR(0x541e47);
if(r1(R+518)){{goto L541e85;}}
}
B541e49:L541e49:{c.instructions+=3;NFSU2_TR(0x541e49);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B541e4c:{NFSU2_TR(0x541e4c);
u8 U[1];
w1(R+512,u8(0x0ull));
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B541e4e:{NFSU2_TR(0x541e4e);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L541e85;}}
}
B541e50:L541e50:{c.instructions+=1;NFSU2_TR(0x541e50);
w4(R+28,u32(r1(R+0)));
}
B541e53:L541e53:{c.instructions+=3;NFSU2_TR(0x541e53);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(s32(s8(r1(U+4)))));
}
B541e57:{NFSU2_TR(0x541e57);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x10ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x10ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B541e5a:{NFSU2_TR(0x541e5a);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L541e64;}}
}
B541e5c:L541e5c:{c.instructions+=2;NFSU2_TR(0x541e5c);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(r1(U+4)));
}
B541e60:{NFSU2_TR(0x541e60);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(r4(R+4))));
s4(u32(r4(U+0)),r4(U+4));
}
B541e64:L541e64:{c.instructions+=5;NFSU2_TR(0x541e64);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+20))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B541e68:{NFSU2_TR(0x541e68);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B541e69:{NFSU2_TR(0x541e69);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B541e6a:{NFSU2_TR(0x541e6a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B541e6b:{NFSU2_TR(0x541e6b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x541e70ull));
TAIL_STATIC(0x5354f0u,535);
}
B541e70:L541e70:{c.instructions+=4;NFSU2_TR(0x541e70);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B541e73:{NFSU2_TR(0x541e73);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x38ull))));
}
B541e76:{NFSU2_TR(0x541e76);
w4(R+28,u32(u32(r4(R+28))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+28))==(u32(0x0ull))));
}
B541e77:{NFSU2_TR(0x541e77);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x541e53u);}goto L541e53;}}
}
B541e79:L541e79:{c.instructions+=4;NFSU2_TR(0x541e79);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B541e7d:{NFSU2_TR(0x541e7d);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B541e7f:{NFSU2_TR(0x541e7f);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B541e83:{NFSU2_TR(0x541e83);
if(r1(R+518)){{goto L541e9c;}}
}
B541e85:L541e85:{c.instructions+=6;NFSU2_TR(0x541e85);
__builtin_memmove((R+0),gp(0x7f7c8c),4);
}
B541e8a:{NFSU2_TR(0x541e8a);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B541e8d:{NFSU2_TR(0x541e8d);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0xfeffffffull))));
}
B541e92:{NFSU2_TR(0x541e92);
w4(R+4,u32(u32(r4(R+4))&u32(r4(R+0))));
}
B541e94:{NFSU2_TR(0x541e94);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B541e97:{NFSU2_TR(0x541e97);
{goto L541f38;}
}
B541e9c:L541e9c:{c.instructions+=3;NFSU2_TR(0x541e9c);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B541ea0:{NFSU2_TR(0x541ea0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0x1000000ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B541ea7:{NFSU2_TR(0x541ea7);
{goto L541f38;}
}
B541eac:L541eac:{c.instructions+=2;NFSU2_TR(0x541eac);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B541eae:{NFSU2_TR(0x541eae);
if(r1(R+518)){{goto L541ee3;}}
}
B541eb0:L541eb0:{c.instructions+=2;NFSU2_TR(0x541eb0);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+8,u32(u32(r4(U+4))&u32(u32(0xff000000ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B541eb7:{NFSU2_TR(0x541eb7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L541ee3;}}
}
B541eb9:L541eb9:{c.instructions+=3;NFSU2_TR(0x541eb9);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B541ebd:{NFSU2_TR(0x541ebd);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B541ec0:{NFSU2_TR(0x541ec0);
if(r1(R+518)){{goto L541ed4;}}
}
B541ec2:L541ec2:{c.instructions+=2;NFSU2_TR(0x541ec2);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B541ec3:{NFSU2_TR(0x541ec3);
if(r1(R+518)){{goto L541eca;}}
}
B541ec5:L541ec5:{c.instructions+=2;NFSU2_TR(0x541ec5);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x2ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B541ec8:{NFSU2_TR(0x541ec8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L541ee3;}}
}
B541eca:L541eca:{c.instructions+=4;NFSU2_TR(0x541eca);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B541ecb:{NFSU2_TR(0x541ecb);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B541ecc:{NFSU2_TR(0x541ecc);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B541ecd:{NFSU2_TR(0x541ecd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x541ed2ull));
TAIL_STATIC(0x52bdc0u,52b);
}
B541ed2:L541ed2:{c.instructions+=1;NFSU2_TR(0x541ed2);
{goto L541edc;}
}
B541ed4:L541ed4:{c.instructions+=4;NFSU2_TR(0x541ed4);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B541ed5:{NFSU2_TR(0x541ed5);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B541ed6:{NFSU2_TR(0x541ed6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B541ed7:{NFSU2_TR(0x541ed7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x541edcull));
TAIL_STATIC(0x519d40u,519);
}
B541edc:L541edc:{c.instructions+=2;NFSU2_TR(0x541edc);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B541ee0:{NFSU2_TR(0x541ee0);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B541ee3:L541ee3:{c.instructions+=4;NFSU2_TR(0x541ee3);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B541ee6:{NFSU2_TR(0x541ee6);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B541ee9:{NFSU2_TR(0x541ee9);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B541eeb:{NFSU2_TR(0x541eeb);
if(r1(R+518)){{goto L541f38;}}
}
B541eed:L541eed:{c.instructions+=3;NFSU2_TR(0x541eed);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B541ef0:{NFSU2_TR(0x541ef0);
u8 U[1];
w1(R+512,u8(0x0ull));
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B541ef2:{NFSU2_TR(0x541ef2);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L541f38;}}
}
B541ef4:L541ef4:{c.instructions+=2;NFSU2_TR(0x541ef4);
w4(R+28,u32(r1(R+0)));
}
B541ef7:{NFSU2_TR(0x541ef7);
{goto L541f00;}
}
B541f00:L541f00:{c.instructions+=5;NFSU2_TR(0x541f00);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(s32(s8(r1(U+4)))));
}
B541f04:{NFSU2_TR(0x541f04);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+20))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B541f08:{NFSU2_TR(0x541f08);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B541f0c:{NFSU2_TR(0x541f0c);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B541f0f:{NFSU2_TR(0x541f0f);
if(r1(R+518)){{goto L541f23;}}
}
B541f11:L541f11:{c.instructions+=2;NFSU2_TR(0x541f11);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B541f12:{NFSU2_TR(0x541f12);
if(r1(R+518)){{goto L541f19;}}
}
B541f14:L541f14:{c.instructions+=2;NFSU2_TR(0x541f14);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x2ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B541f17:{NFSU2_TR(0x541f17);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L541f32;}}
}
B541f19:L541f19:{c.instructions+=4;NFSU2_TR(0x541f19);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B541f1a:{NFSU2_TR(0x541f1a);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B541f1b:{NFSU2_TR(0x541f1b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B541f1c:{NFSU2_TR(0x541f1c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x541f21ull));
TAIL_STATIC(0x52bdc0u,52b);
}
B541f21:L541f21:{c.instructions+=1;NFSU2_TR(0x541f21);
{goto L541f2b;}
}
B541f23:L541f23:{c.instructions+=4;NFSU2_TR(0x541f23);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B541f24:{NFSU2_TR(0x541f24);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B541f25:{NFSU2_TR(0x541f25);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B541f26:{NFSU2_TR(0x541f26);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x541f2bull));
TAIL_STATIC(0x519d40u,519);
}
B541f2b:L541f2b:{c.instructions+=2;NFSU2_TR(0x541f2b);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B541f2f:{NFSU2_TR(0x541f2f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B541f32:L541f32:{c.instructions+=3;NFSU2_TR(0x541f32);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x38ull))));
}
B541f35:{NFSU2_TR(0x541f35);
w4(R+28,u32(u32(r4(R+28))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+28))==(u32(0x0ull))));
}
B541f36:{NFSU2_TR(0x541f36);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x541f00u);}goto L541f00;}}
}
B541f38:L541f38:{c.instructions+=7;NFSU2_TR(0x541f38);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B541f3b:{NFSU2_TR(0x541f3b);
u8 U[10];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(U+6,u32(u32(r4(R+0))&u32(u32(0x1c00000ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B541f40:{NFSU2_TR(0x541f40);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B541f41:{NFSU2_TR(0x541f41);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B541f42:{NFSU2_TR(0x541f42);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B541f43:{NFSU2_TR(0x541f43);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B541f44:{NFSU2_TR(0x541f44);
if(r1(R+518)){{goto L541f4e;}}
}
B541f46:L541f46:{c.instructions+=2;NFSU2_TR(0x541f46);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))|u32(u32(0x2000000ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B541f4b:{NFSU2_TR(0x541f4b);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B541f4e:L541f4e:{c.instructions+=1;NFSU2_TR(0x541f4e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B541f60:L541f60:{c.instructions+=8;NFSU2_TR(0x541f60);
u8 U[5];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B541f65:{NFSU2_TR(0x541f65);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B541f69:{NFSU2_TR(0x541f69);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x38ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B541f6c:{NFSU2_TR(0x541f6c);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B541f6f:{NFSU2_TR(0x541f6f);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B541f72:{NFSU2_TR(0x541f72);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B541f76:{NFSU2_TR(0x541f76);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B541f79:{NFSU2_TR(0x541f79);
if(r1(R+518)){{goto L541fa1;}}
}
B541f7b:L541f7b:{c.instructions+=2;NFSU2_TR(0x541f7b);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B541f7c:{NFSU2_TR(0x541f7c);
if(r1(R+518)){{goto L541f83;}}
}
B541f7e:L541f7e:{c.instructions+=2;NFSU2_TR(0x541f7e);
u8 U[6];
w1(R+512,u8((r4(R+0))<(u32(0x2ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x2ull)));
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x2ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B541f81:{NFSU2_TR(0x541f81);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L541fbe;}}
}
B541f83:L541f83:{c.instructions+=9;NFSU2_TR(0x541f83);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x7ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(s32(s8(r1(U+4)))));
}
B541f87:{NFSU2_TR(0x541f87);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B541f8b:{NFSU2_TR(0x541f8b);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B541f8e:{NFSU2_TR(0x541f8e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B541f91:{NFSU2_TR(0x541f91);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B541f95:{NFSU2_TR(0x541f95);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B541f96:{NFSU2_TR(0x541f96);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B541f97:{NFSU2_TR(0x541f97);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B541f98:{NFSU2_TR(0x541f98);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x541f9dull));
TAIL_STATIC(0x52bdc0u,52b);
}
B541f9d:L541f9d:{c.instructions+=2;NFSU2_TR(0x541f9d);
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
B541fa0:{NFSU2_TR(0x541fa0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B541fa1:L541fa1:{c.instructions+=9;NFSU2_TR(0x541fa1);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x7ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(s32(s8(r1(U+4)))));
}
B541fa5:{NFSU2_TR(0x541fa5);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B541fa9:{NFSU2_TR(0x541fa9);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B541fac:{NFSU2_TR(0x541fac);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B541faf:{NFSU2_TR(0x541faf);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B541fb3:{NFSU2_TR(0x541fb3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B541fb4:{NFSU2_TR(0x541fb4);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B541fb5:{NFSU2_TR(0x541fb5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B541fb6:{NFSU2_TR(0x541fb6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x541fbbull));
TAIL_STATIC(0x519d40u,519);
}
B541fbb:L541fbb:{c.instructions+=1;NFSU2_TR(0x541fbb);
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
B541fbe:L541fbe:{c.instructions+=1;NFSU2_TR(0x541fbe);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B541fc0:L541fc0:{c.instructions+=9;NFSU2_TR(0x541fc0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xcull))));
}
B541fc3:{NFSU2_TR(0x541fc3);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B541fc4:{NFSU2_TR(0x541fc4);
__builtin_memmove((R+12),(R+4),4);
}
B541fc6:{NFSU2_TR(0x541fc6);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4114ull))));
__builtin_memmove((R+4),(U+0),4);
}
B541fcc:{NFSU2_TR(0x541fcc);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B541fcd:{NFSU2_TR(0x541fcd);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B541fd0:{NFSU2_TR(0x541fd0);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B541fd2:{NFSU2_TR(0x541fd2);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B541fd6:{NFSU2_TR(0x541fd6);
if(r1(R+518)){TAIL_STATIC(0x542331u,542);}
}
B541fdc:L541fdc:{c.instructions+=2;NFSU2_TR(0x541fdc);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B541fdd:{NFSU2_TR(0x541fdd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x541fe2ull));
TAIL_STATIC(0x505400u,505);
}
B541fe2:L541fe2:{c.instructions+=2;NFSU2_TR(0x541fe2);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B541fe4:{NFSU2_TR(0x541fe4);
if(r1(R+518)){TAIL_STATIC(0x542331u,542);}
}
B541fea:L541fea:{c.instructions+=6;NFSU2_TR(0x541fea);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B541feb:{NFSU2_TR(0x541feb);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B541fec:{NFSU2_TR(0x541fec);
__builtin_memmove((R+16),(R+16),4);
}
B541ff0:{NFSU2_TR(0x541ff0);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x5251ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B541ff6:{NFSU2_TR(0x541ff6);
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
B541ff8:{NFSU2_TR(0x541ff8);
if(r1(R+518)){TAIL_STATIC(0x542019u,542);}
}
B541ffa:L541ffa:{c.instructions+=2;NFSU2_TR(0x541ffa);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B541ffd:{NFSU2_TR(0x541ffd);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
TAIL_STATIC(0x542003u,542);
}
XIT:NFSU2_TR_EXIT(0x541,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
