#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_413(u8* __restrict R,Cpu& c);
u32 body_495(u8* __restrict R,Cpu& c);
u32 body_4d8(u8* __restrict R,Cpu& c);
u32 body_503(u8* __restrict R,Cpu& c);
u32 body_505(u8* __restrict R,Cpu& c);
u32 body_50b(u8* __restrict R,Cpu& c);
u32 body_50f(u8* __restrict R,Cpu& c);
u32 body_515(u8* __restrict R,Cpu& c);
u32 body_517(u8* __restrict R,Cpu& c);
u32 body_51c(u8* __restrict R,Cpu& c);
u32 body_51d(u8* __restrict R,Cpu& c);
u32 body_520(u8* __restrict R,Cpu& c);
u32 body_521(u8* __restrict R,Cpu& c);
u32 body_522(u8* __restrict R,Cpu& c);
u32 body_526(u8* __restrict R,Cpu& c);
u32 body_529(u8* __restrict R,Cpu& c);
u32 body_52a(u8* __restrict R,Cpu& c);
u32 body_52d(u8* __restrict R,Cpu& c);
u32 body_531(u8* __restrict R,Cpu& c);
u32 body_575(u8* __restrict R,Cpu& c);
u32 body_58f(u8* __restrict R,Cpu& c);
u32 body_599(u8* __restrict R,Cpu& c);
u32 body_59b(u8* __restrict R,Cpu& c);
u32 body_5b0(u8* __restrict R,Cpu& c);
u32 body_5b2(u8* __restrict R,Cpu& c);
u32 body_5b3(u8* __restrict R,Cpu& c);
u32 body_5fe(u8* __restrict R,Cpu& c);
u32 body_610(u8* __restrict R,Cpu& c);
u32 body_61b(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x530,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x530,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_530(u8* __restrict R,Cpu& c);
u32 page_530(Cpu& c){return body_530(c.regs.data(),c);}
__attribute__((noinline)) u32 body_530(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x530000:goto L530000;
case 0x530001:c.instructions+=3;goto B530001;
case 0x530002:c.instructions+=2;goto B530002;
case 0x530004:c.instructions+=1;goto B530004;
case 0x530009:goto L530009;
case 0x53000c:c.instructions+=1;goto B53000c;
case 0x530011:goto L530011;
case 0x530014:c.instructions+=1;goto B530014;
case 0x53001a:goto L53001a;
case 0x530020:c.instructions+=3;goto B530020;
case 0x530023:c.instructions+=2;goto B530023;
case 0x530028:c.instructions+=1;goto B530028;
case 0x53002a:goto L53002a;
case 0x530031:goto L530031;
case 0x530037:c.instructions+=6;goto B530037;
case 0x530038:c.instructions+=5;goto B530038;
case 0x530039:c.instructions+=4;goto B530039;
case 0x53003e:c.instructions+=3;goto B53003e;
case 0x53003f:c.instructions+=2;goto B53003f;
case 0x530040:c.instructions+=1;goto B530040;
case 0x530045:goto L530045;
case 0x53004a:goto L53004a;
case 0x530050:c.instructions+=6;goto B530050;
case 0x530051:c.instructions+=5;goto B530051;
case 0x530052:c.instructions+=4;goto B530052;
case 0x530057:c.instructions+=3;goto B530057;
case 0x530058:c.instructions+=2;goto B530058;
case 0x530059:c.instructions+=1;goto B530059;
case 0x53005e:goto L53005e;
case 0x530060:goto L530060;
case 0x530066:c.instructions+=6;goto B530066;
case 0x530067:c.instructions+=5;goto B530067;
case 0x530068:c.instructions+=4;goto B530068;
case 0x53006d:c.instructions+=3;goto B53006d;
case 0x53006e:c.instructions+=2;goto B53006e;
case 0x53006f:c.instructions+=1;goto B53006f;
case 0x530074:goto L530074;
case 0x530076:goto L530076;
case 0x53007c:c.instructions+=6;goto B53007c;
case 0x53007d:c.instructions+=5;goto B53007d;
case 0x53007e:c.instructions+=4;goto B53007e;
case 0x530083:c.instructions+=3;goto B530083;
case 0x530084:c.instructions+=2;goto B530084;
case 0x530085:c.instructions+=1;goto B530085;
case 0x53008a:goto L53008a;
case 0x53008c:goto L53008c;
case 0x530092:c.instructions+=6;goto B530092;
case 0x530093:c.instructions+=5;goto B530093;
case 0x530094:c.instructions+=4;goto B530094;
case 0x530099:c.instructions+=3;goto B530099;
case 0x53009a:c.instructions+=2;goto B53009a;
case 0x53009b:c.instructions+=1;goto B53009b;
case 0x5300a0:goto L5300a0;
case 0x5300a2:goto L5300a2;
case 0x5300a7:goto L5300a7;
case 0x5300ad:c.instructions+=5;goto B5300ad;
case 0x5300ae:c.instructions+=4;goto B5300ae;
case 0x5300af:c.instructions+=3;goto B5300af;
case 0x5300b0:c.instructions+=2;goto B5300b0;
case 0x5300b1:c.instructions+=1;goto B5300b1;
case 0x5300b6:goto L5300b6;
case 0x5300b8:goto L5300b8;
case 0x5300be:c.instructions+=2;goto B5300be;
case 0x5300c0:c.instructions+=1;goto B5300c0;
case 0x5300c2:goto L5300c2;
case 0x5300c4:c.instructions+=1;goto B5300c4;
case 0x5300c6:goto L5300c6;
case 0x5300cc:c.instructions+=5;goto B5300cc;
case 0x5300cd:c.instructions+=4;goto B5300cd;
case 0x5300ce:c.instructions+=3;goto B5300ce;
case 0x5300cf:c.instructions+=2;goto B5300cf;
case 0x5300d1:c.instructions+=1;goto B5300d1;
case 0x5300d6:goto L5300d6;
case 0x5300d9:goto L5300d9;
case 0x5300db:goto L5300db;
case 0x5300dd:c.instructions+=1;goto B5300dd;
case 0x5300e2:goto L5300e2;
case 0x5300e5:c.instructions+=2;goto B5300e5;
case 0x5300e7:c.instructions+=1;goto B5300e7;
case 0x5300e9:goto L5300e9;
case 0x5300ec:c.instructions+=8;goto B5300ec;
case 0x5300ef:c.instructions+=7;goto B5300ef;
case 0x5300f0:c.instructions+=6;goto B5300f0;
case 0x5300f3:c.instructions+=5;goto B5300f3;
case 0x5300f4:c.instructions+=4;goto B5300f4;
case 0x5300f5:c.instructions+=3;goto B5300f5;
case 0x5300f6:c.instructions+=2;goto B5300f6;
case 0x5300f8:c.instructions+=1;goto B5300f8;
case 0x5300fd:goto L5300fd;
case 0x5300ff:goto L5300ff;
case 0x530101:goto L530101;
case 0x530103:c.instructions+=6;goto B530103;
case 0x530106:c.instructions+=5;goto B530106;
case 0x530109:c.instructions+=4;goto B530109;
case 0x53010c:c.instructions+=3;goto B53010c;
case 0x53010e:c.instructions+=2;goto B53010e;
case 0x53010f:c.instructions+=1;goto B53010f;
case 0x530112:goto L530112;
case 0x530113:c.instructions+=5;goto B530113;
case 0x530114:c.instructions+=4;goto B530114;
case 0x530115:c.instructions+=3;goto B530115;
case 0x530117:c.instructions+=2;goto B530117;
case 0x530118:c.instructions+=1;goto B530118;
case 0x530140:goto L530140;
case 0x530141:c.instructions+=4;goto B530141;
case 0x530147:c.instructions+=3;goto B530147;
case 0x530148:c.instructions+=2;goto B530148;
case 0x53014b:c.instructions+=1;goto B53014b;
case 0x530150:goto L530150;
case 0x530152:c.instructions+=3;goto B530152;
case 0x530154:c.instructions+=2;goto B530154;
case 0x530155:c.instructions+=1;goto B530155;
case 0x53015a:goto L53015a;
case 0x53015d:c.instructions+=2;goto B53015d;
case 0x53015e:c.instructions+=1;goto B53015e;
case 0x530160:goto L530160;
case 0x530161:c.instructions+=7;goto B530161;
case 0x530162:c.instructions+=6;goto B530162;
case 0x530164:c.instructions+=5;goto B530164;
case 0x530167:c.instructions+=4;goto B530167;
case 0x530168:c.instructions+=3;goto B530168;
case 0x53016b:c.instructions+=2;goto B53016b;
case 0x53016d:c.instructions+=1;goto B53016d;
case 0x530173:goto L530173;
case 0x530175:c.instructions+=1;goto B530175;
case 0x53017b:goto L53017b;
case 0x53017e:c.instructions+=2;goto B53017e;
case 0x530181:c.instructions+=1;goto B530181;
case 0x530183:goto L530183;
case 0x530188:c.instructions+=1;goto B530188;
case 0x53018a:goto L53018a;
case 0x53018d:c.instructions+=1;goto B53018d;
case 0x530193:goto L530193;
case 0x530196:c.instructions+=1;goto B530196;
case 0x530198:goto L530198;
case 0x530199:c.instructions+=2;goto B530199;
case 0x53019f:c.instructions+=1;goto B53019f;
case 0x5301a4:goto L5301a4;
case 0x5301a7:c.instructions+=2;goto B5301a7;
case 0x5301a9:c.instructions+=1;goto B5301a9;
case 0x5301ab:goto L5301ab;
case 0x5301ad:c.instructions+=1;goto B5301ad;
case 0x5301af:goto L5301af;
case 0x5301b2:c.instructions+=3;goto B5301b2;
case 0x5301b5:c.instructions+=2;goto B5301b5;
case 0x5301b8:c.instructions+=1;goto B5301b8;
case 0x5301ba:goto L5301ba;
case 0x5301c1:c.instructions+=1;goto B5301c1;
case 0x5301c8:goto L5301c8;
case 0x5301cd:c.instructions+=1;goto B5301cd;
case 0x5301cf:goto L5301cf;
case 0x5301d4:c.instructions+=1;goto B5301d4;
case 0x5301d6:goto L5301d6;
case 0x5301db:goto L5301db;
case 0x5301dd:c.instructions+=3;goto B5301dd;
case 0x5301df:c.instructions+=2;goto B5301df;
case 0x5301e1:c.instructions+=1;goto B5301e1;
case 0x5301e3:goto L5301e3;
case 0x5301e6:c.instructions+=1;goto B5301e6;
case 0x5301e8:goto L5301e8;
case 0x5301ea:c.instructions+=2;goto B5301ea;
case 0x5301ec:c.instructions+=1;goto B5301ec;
case 0x5301ee:goto L5301ee;
case 0x5301f0:goto L5301f0;
case 0x5301f2:goto L5301f2;
case 0x5301f4:c.instructions+=3;goto B5301f4;
case 0x5301f7:c.instructions+=2;goto B5301f7;
case 0x5301f9:c.instructions+=1;goto B5301f9;
case 0x5301fb:goto L5301fb;
case 0x5301fd:c.instructions+=5;goto B5301fd;
case 0x530200:c.instructions+=4;goto B530200;
case 0x530202:c.instructions+=3;goto B530202;
case 0x530203:c.instructions+=2;goto B530203;
case 0x530206:c.instructions+=1;goto B530206;
case 0x53020b:goto L53020b;
case 0x53020d:c.instructions+=2;goto B53020d;
case 0x530210:c.instructions+=1;goto B530210;
case 0x530212:goto L530212;
case 0x530214:goto L530214;
case 0x530216:c.instructions+=1;goto B530216;
case 0x53021c:goto L53021c;
case 0x53021d:c.instructions+=3;goto B53021d;
case 0x53021e:c.instructions+=2;goto B53021e;
case 0x53021f:c.instructions+=1;goto B53021f;
case 0x530240:goto L530240;
case 0x530241:c.instructions+=5;goto B530241;
case 0x530244:c.instructions+=4;goto B530244;
case 0x530245:c.instructions+=3;goto B530245;
case 0x530248:c.instructions+=2;goto B530248;
case 0x53024a:c.instructions+=1;goto B53024a;
case 0x53024c:goto L53024c;
case 0x530250:goto L530250;
case 0x530252:c.instructions+=1;goto B530252;
case 0x530254:goto L530254;
case 0x530257:c.instructions+=2;goto B530257;
case 0x53025a:c.instructions+=1;goto B53025a;
case 0x53025c:goto L53025c;
case 0x530261:c.instructions+=1;goto B530261;
case 0x530263:goto L530263;
case 0x530266:c.instructions+=1;goto B530266;
case 0x530268:goto L530268;
case 0x53026b:c.instructions+=1;goto B53026b;
case 0x53026d:goto L53026d;
case 0x53026f:c.instructions+=1;goto B53026f;
case 0x530271:goto L530271;
case 0x530273:c.instructions+=7;goto B530273;
case 0x530275:c.instructions+=6;goto B530275;
case 0x530278:c.instructions+=5;goto B530278;
case 0x53027a:c.instructions+=4;goto B53027a;
case 0x53027c:c.instructions+=3;goto B53027c;
case 0x53027d:c.instructions+=2;goto B53027d;
case 0x530280:c.instructions+=1;goto B530280;
case 0x530285:goto L530285;
case 0x530288:goto L530288;
case 0x53028a:c.instructions+=1;goto B53028a;
case 0x53028c:goto L53028c;
case 0x53028d:c.instructions+=2;goto B53028d;
case 0x53028e:c.instructions+=1;goto B53028e;
case 0x530290:goto L530290;
case 0x530291:c.instructions+=5;goto B530291;
case 0x530295:c.instructions+=4;goto B530295;
case 0x530298:c.instructions+=3;goto B530298;
case 0x530299:c.instructions+=2;goto B530299;
case 0x53029b:c.instructions+=1;goto B53029b;
case 0x5302a1:goto L5302a1;
case 0x5302a7:c.instructions+=1;goto B5302a7;
case 0x5302a9:goto L5302a9;
case 0x5302aa:c.instructions+=5;goto B5302aa;
case 0x5302ad:c.instructions+=4;goto B5302ad;
case 0x5302ae:c.instructions+=3;goto B5302ae;
case 0x5302b1:c.instructions+=2;goto B5302b1;
case 0x5302b3:c.instructions+=1;goto B5302b3;
case 0x5302b5:goto L5302b5;
case 0x5302b8:c.instructions+=1;goto B5302b8;
case 0x5302ba:goto L5302ba;
case 0x5302bc:c.instructions+=7;goto B5302bc;
case 0x5302be:c.instructions+=6;goto B5302be;
case 0x5302c1:c.instructions+=5;goto B5302c1;
case 0x5302c3:c.instructions+=4;goto B5302c3;
case 0x5302c5:c.instructions+=3;goto B5302c5;
case 0x5302c6:c.instructions+=2;goto B5302c6;
case 0x5302c9:c.instructions+=1;goto B5302c9;
case 0x5302ce:goto L5302ce;
case 0x5302d1:c.instructions+=1;goto B5302d1;
case 0x5302d3:goto L5302d3;
case 0x5302d5:goto L5302d5;
case 0x5302d7:c.instructions+=1;goto B5302d7;
case 0x5302d9:goto L5302d9;
case 0x5302da:c.instructions+=2;goto B5302da;
case 0x5302e0:c.instructions+=1;goto B5302e0;
case 0x5302e5:goto L5302e5;
case 0x5302e7:c.instructions+=1;goto B5302e7;
case 0x5302e9:goto L5302e9;
case 0x5302eb:c.instructions+=1;goto B5302eb;
case 0x5302f0:goto L5302f0;
case 0x5302f3:c.instructions+=2;goto B5302f3;
case 0x5302f5:c.instructions+=1;goto B5302f5;
case 0x5302f7:goto L5302f7;
case 0x5302fa:c.instructions+=11;goto B5302fa;
case 0x530301:c.instructions+=10;goto B530301;
case 0x530304:c.instructions+=9;goto B530304;
case 0x530306:c.instructions+=8;goto B530306;
case 0x530309:c.instructions+=7;goto B530309;
case 0x53030b:c.instructions+=6;goto B53030b;
case 0x53030c:c.instructions+=5;goto B53030c;
case 0x53030d:c.instructions+=4;goto B53030d;
case 0x53030e:c.instructions+=3;goto B53030e;
case 0x530311:c.instructions+=2;goto B530311;
case 0x530312:c.instructions+=1;goto B530312;
case 0x530315:goto L530315;
case 0x530318:c.instructions+=5;goto B530318;
case 0x53031a:c.instructions+=4;goto B53031a;
case 0x53031c:c.instructions+=3;goto B53031c;
case 0x53031f:c.instructions+=2;goto B53031f;
case 0x530322:c.instructions+=1;goto B530322;
case 0x530324:goto L530324;
case 0x530325:c.instructions+=1;goto B530325;
case 0x530326:goto L530326;
case 0x530327:c.instructions+=2;goto B530327;
case 0x530328:c.instructions+=1;goto B530328;
case 0x530330:goto L530330;
case 0x530333:c.instructions+=6;goto B530333;
case 0x530337:c.instructions+=5;goto B530337;
case 0x53033b:c.instructions+=4;goto B53033b;
case 0x53033c:c.instructions+=3;goto B53033c;
case 0x53033d:c.instructions+=2;goto B53033d;
case 0x53033e:c.instructions+=1;goto B53033e;
case 0x530343:goto L530343;
case 0x530344:c.instructions+=1;goto B530344;
case 0x530349:goto L530349;
case 0x53034c:c.instructions+=1;goto B53034c;
case 0x530350:goto L530350;
case 0x530351:c.instructions+=4;goto B530351;
case 0x530353:c.instructions+=3;goto B530353;
case 0x530356:c.instructions+=2;goto B530356;
case 0x530358:c.instructions+=1;goto B530358;
case 0x53035a:goto L53035a;
case 0x53035b:c.instructions+=8;goto B53035b;
case 0x53035c:c.instructions+=7;goto B53035c;
case 0x53035d:c.instructions+=6;goto B53035d;
case 0x53035f:c.instructions+=5;goto B53035f;
case 0x530364:c.instructions+=4;goto B530364;
case 0x530365:c.instructions+=3;goto B530365;
case 0x53036a:c.instructions+=2;goto B53036a;
case 0x53036c:c.instructions+=1;goto B53036c;
case 0x530371:goto L530371;
case 0x530373:c.instructions+=2;goto B530373;
case 0x530375:c.instructions+=1;goto B530375;
case 0x530377:goto L530377;
case 0x530379:c.instructions+=2;goto B530379;
case 0x53037f:c.instructions+=1;goto B53037f;
case 0x530381:goto L530381;
case 0x530382:c.instructions+=2;goto B530382;
case 0x530385:c.instructions+=1;goto B530385;
case 0x530386:goto L530386;
case 0x530388:c.instructions+=9;goto B530388;
case 0x530389:c.instructions+=8;goto B530389;
case 0x53038c:c.instructions+=7;goto B53038c;
case 0x53038e:c.instructions+=6;goto B53038e;
case 0x530393:c.instructions+=5;goto B530393;
case 0x530395:c.instructions+=4;goto B530395;
case 0x530398:c.instructions+=3;goto B530398;
case 0x5303a0:c.instructions+=2;goto B5303a0;
case 0x5303a2:c.instructions+=1;goto B5303a2;
case 0x5303a5:goto L5303a5;
case 0x5303a6:c.instructions+=4;goto B5303a6;
case 0x5303a7:c.instructions+=3;goto B5303a7;
case 0x5303a9:c.instructions+=2;goto B5303a9;
case 0x5303aa:c.instructions+=1;goto B5303aa;
case 0x5303ac:goto L5303ac;
case 0x5303ae:c.instructions+=2;goto B5303ae;
case 0x5303af:c.instructions+=1;goto B5303af;
case 0x5303b2:goto L5303b2;
case 0x5303b4:c.instructions+=2;goto B5303b4;
case 0x5303b5:c.instructions+=1;goto B5303b5;
case 0x5303c0:goto L5303c0;
case 0x5303c1:c.instructions+=10;goto B5303c1;
case 0x5303c2:c.instructions+=9;goto B5303c2;
case 0x5303c3:c.instructions+=8;goto B5303c3;
case 0x5303c7:c.instructions+=7;goto B5303c7;
case 0x5303ca:c.instructions+=6;goto B5303ca;
case 0x5303cc:c.instructions+=5;goto B5303cc;
case 0x5303ce:c.instructions+=4;goto B5303ce;
case 0x5303d0:c.instructions+=3;goto B5303d0;
case 0x5303d1:c.instructions+=2;goto B5303d1;
case 0x5303d3:c.instructions+=1;goto B5303d3;
case 0x5303d5:goto L5303d5;
case 0x5303d7:goto L5303d7;
case 0x5303da:c.instructions+=4;goto B5303da;
case 0x5303de:c.instructions+=3;goto B5303de;
case 0x5303df:c.instructions+=2;goto B5303df;
case 0x5303e1:c.instructions+=1;goto B5303e1;
case 0x5303e6:goto L5303e6;
case 0x5303e8:c.instructions+=1;goto B5303e8;
case 0x5303ea:goto L5303ea;
case 0x5303eb:goto L5303eb;
case 0x5303ee:c.instructions+=4;goto B5303ee;
case 0x5303f0:c.instructions+=3;goto B5303f0;
case 0x5303f3:c.instructions+=2;goto B5303f3;
case 0x5303f5:c.instructions+=1;goto B5303f5;
case 0x5303f7:goto L5303f7;
case 0x5303f8:c.instructions+=5;goto B5303f8;
case 0x5303f9:c.instructions+=4;goto B5303f9;
case 0x5303fb:c.instructions+=3;goto B5303fb;
case 0x5303fc:c.instructions+=2;goto B5303fc;
case 0x5303fd:c.instructions+=1;goto B5303fd;
case 0x530400:goto L530400;
case 0x530401:c.instructions+=11;goto B530401;
case 0x530403:c.instructions+=10;goto B530403;
case 0x530406:c.instructions+=9;goto B530406;
case 0x530407:c.instructions+=8;goto B530407;
case 0x530408:c.instructions+=7;goto B530408;
case 0x530409:c.instructions+=6;goto B530409;
case 0x53040c:c.instructions+=5;goto B53040c;
case 0x53040f:c.instructions+=4;goto B53040f;
case 0x530413:c.instructions+=3;goto B530413;
case 0x530418:c.instructions+=2;goto B530418;
case 0x53041a:c.instructions+=1;goto B53041a;
case 0x530420:goto L530420;
case 0x530426:c.instructions+=2;goto B530426;
case 0x53042b:c.instructions+=1;goto B53042b;
case 0x53042d:goto L53042d;
case 0x530433:c.instructions+=2;goto B530433;
case 0x530435:c.instructions+=1;goto B530435;
case 0x530437:goto L530437;
case 0x53043e:c.instructions+=1;goto B53043e;
case 0x530440:goto L530440;
case 0x530445:goto L530445;
case 0x530447:c.instructions+=1;goto B530447;
case 0x530449:goto L530449;
case 0x53044e:c.instructions+=4;goto B53044e;
case 0x53044f:c.instructions+=3;goto B53044f;
case 0x530450:c.instructions+=2;goto B530450;
case 0x530451:c.instructions+=1;goto B530451;
case 0x530456:goto L530456;
case 0x530457:c.instructions+=1;goto B530457;
case 0x53045c:goto L53045c;
case 0x53045f:c.instructions+=2;goto B53045f;
case 0x530461:c.instructions+=1;goto B530461;
case 0x530463:goto L530463;
case 0x530464:c.instructions+=1;goto B530464;
case 0x530466:goto L530466;
case 0x530469:goto L530469;
case 0x53046b:c.instructions+=1;goto B53046b;
case 0x530470:goto L530470;
case 0x530473:c.instructions+=2;goto B530473;
case 0x530475:c.instructions+=1;goto B530475;
case 0x530477:goto L530477;
case 0x53047a:c.instructions+=25;goto B53047a;
case 0x53047d:c.instructions+=24;goto B53047d;
case 0x530480:c.instructions+=23;goto B530480;
case 0x530485:c.instructions+=22;goto B530485;
case 0x530488:c.instructions+=21;goto B530488;
case 0x53048b:c.instructions+=20;goto B53048b;
case 0x53048e:c.instructions+=19;goto B53048e;
case 0x530491:c.instructions+=18;goto B530491;
case 0x530494:c.instructions+=17;goto B530494;
case 0x530497:c.instructions+=16;goto B530497;
case 0x53049a:c.instructions+=15;goto B53049a;
case 0x53049d:c.instructions+=14;goto B53049d;
case 0x5304a0:c.instructions+=13;goto B5304a0;
case 0x5304a3:c.instructions+=12;goto B5304a3;
case 0x5304a6:c.instructions+=11;goto B5304a6;
case 0x5304aa:c.instructions+=10;goto B5304aa;
case 0x5304ad:c.instructions+=9;goto B5304ad;
case 0x5304b0:c.instructions+=8;goto B5304b0;
case 0x5304b3:c.instructions+=7;goto B5304b3;
case 0x5304b7:c.instructions+=6;goto B5304b7;
case 0x5304bd:c.instructions+=5;goto B5304bd;
case 0x5304c1:c.instructions+=4;goto B5304c1;
case 0x5304c4:c.instructions+=3;goto B5304c4;
case 0x5304c6:c.instructions+=2;goto B5304c6;
case 0x5304c7:c.instructions+=1;goto B5304c7;
case 0x5304ca:goto L5304ca;
case 0x5304cb:c.instructions+=5;goto B5304cb;
case 0x5304cc:c.instructions+=4;goto B5304cc;
case 0x5304cd:c.instructions+=3;goto B5304cd;
case 0x5304cf:c.instructions+=2;goto B5304cf;
case 0x5304d0:c.instructions+=1;goto B5304d0;
case 0x5304d3:goto L5304d3;
case 0x5304d6:c.instructions+=4;goto B5304d6;
case 0x5304d8:c.instructions+=3;goto B5304d8;
case 0x5304da:c.instructions+=2;goto B5304da;
case 0x5304db:c.instructions+=1;goto B5304db;
case 0x5304de:goto L5304de;
case 0x5304df:c.instructions+=5;goto B5304df;
case 0x5304e0:c.instructions+=4;goto B5304e0;
case 0x5304e1:c.instructions+=3;goto B5304e1;
case 0x5304e3:c.instructions+=2;goto B5304e3;
case 0x5304e4:c.instructions+=1;goto B5304e4;
case 0x5304f0:goto L5304f0;
case 0x5304f1:c.instructions+=5;goto B5304f1;
case 0x5304f6:c.instructions+=4;goto B5304f6;
case 0x5304fb:c.instructions+=3;goto B5304fb;
case 0x5304fd:c.instructions+=2;goto B5304fd;
case 0x5304ff:c.instructions+=1;goto B5304ff;
case 0x530504:goto L530504;
case 0x530509:c.instructions+=4;goto B530509;
case 0x53050e:c.instructions+=3;goto B53050e;
case 0x530510:c.instructions+=2;goto B530510;
case 0x530512:c.instructions+=1;goto B530512;
case 0x530517:goto L530517;
case 0x53051c:c.instructions+=4;goto B53051c;
case 0x530521:c.instructions+=3;goto B530521;
case 0x530523:c.instructions+=2;goto B530523;
case 0x530525:c.instructions+=1;goto B530525;
case 0x53052a:goto L53052a;
case 0x53052f:c.instructions+=4;goto B53052f;
case 0x530534:c.instructions+=3;goto B530534;
case 0x530536:c.instructions+=2;goto B530536;
case 0x530538:c.instructions+=1;goto B530538;
case 0x53053d:goto L53053d;
case 0x530542:c.instructions+=4;goto B530542;
case 0x530547:c.instructions+=3;goto B530547;
case 0x530549:c.instructions+=2;goto B530549;
case 0x53054b:c.instructions+=1;goto B53054b;
case 0x530550:goto L530550;
case 0x530555:c.instructions+=4;goto B530555;
case 0x53055a:c.instructions+=3;goto B53055a;
case 0x53055c:c.instructions+=2;goto B53055c;
case 0x53055e:c.instructions+=1;goto B53055e;
case 0x530563:goto L530563;
case 0x530568:c.instructions+=4;goto B530568;
case 0x53056d:c.instructions+=3;goto B53056d;
case 0x53056f:c.instructions+=2;goto B53056f;
case 0x530571:c.instructions+=1;goto B530571;
case 0x530576:goto L530576;
case 0x53057b:c.instructions+=4;goto B53057b;
case 0x530580:c.instructions+=3;goto B530580;
case 0x530582:c.instructions+=2;goto B530582;
case 0x530584:c.instructions+=1;goto B530584;
case 0x530589:goto L530589;
case 0x53058e:c.instructions+=4;goto B53058e;
case 0x530593:c.instructions+=3;goto B530593;
case 0x530595:c.instructions+=2;goto B530595;
case 0x530597:c.instructions+=1;goto B530597;
case 0x53059c:goto L53059c;
case 0x5305a3:c.instructions+=1;goto B5305a3;
case 0x5305a5:goto L5305a5;
case 0x5305aa:c.instructions+=2;goto B5305aa;
case 0x5305ac:c.instructions+=1;goto B5305ac;
case 0x5305ae:goto L5305ae;
case 0x5305b0:c.instructions+=1;goto B5305b0;
case 0x5305b5:goto L5305b5;
case 0x5305b8:c.instructions+=2;goto B5305b8;
case 0x5305ba:c.instructions+=1;goto B5305ba;
case 0x5305bc:goto L5305bc;
case 0x5305be:c.instructions+=4;goto B5305be;
case 0x5305c3:c.instructions+=3;goto B5305c3;
case 0x5305c8:c.instructions+=2;goto B5305c8;
case 0x5305ca:c.instructions+=1;goto B5305ca;
case 0x5305cf:goto L5305cf;
case 0x5305d1:goto L5305d1;
case 0x5305d3:goto L5305d3;
case 0x5305d5:c.instructions+=3;goto B5305d5;
case 0x5305d6:c.instructions+=2;goto B5305d6;
case 0x5305d8:c.instructions+=1;goto B5305d8;
case 0x5305db:goto L5305db;
case 0x5305de:c.instructions+=2;goto B5305de;
case 0x5305df:c.instructions+=1;goto B5305df;
case 0x5305e4:goto L5305e4;
case 0x5305e5:c.instructions+=1;goto B5305e5;
case 0x5305ea:goto L5305ea;
case 0x5305ed:c.instructions+=2;goto B5305ed;
case 0x5305ef:c.instructions+=1;goto B5305ef;
case 0x5305f1:goto L5305f1;
case 0x5305f4:c.instructions+=1;goto B5305f4;
case 0x5305f6:goto L5305f6;
case 0x5305f8:goto L5305f8;
case 0x5305fb:c.instructions+=3;goto B5305fb;
case 0x5305fe:c.instructions+=2;goto B5305fe;
case 0x5305ff:c.instructions+=1;goto B5305ff;
case 0x530602:goto L530602;
case 0x530604:c.instructions+=3;goto B530604;
case 0x530606:c.instructions+=2;goto B530606;
case 0x530607:c.instructions+=1;goto B530607;
case 0x530610:goto L530610;
case 0x530617:c.instructions+=3;goto B530617;
case 0x530618:c.instructions+=2;goto B530618;
case 0x53061a:c.instructions+=1;goto B53061a;
case 0x53061c:goto L53061c;
case 0x53061f:c.instructions+=3;goto B53061f;
case 0x530620:c.instructions+=2;goto B530620;
case 0x530625:c.instructions+=1;goto B530625;
case 0x53062a:goto L53062a;
case 0x53062c:c.instructions+=1;goto B53062c;
case 0x53062e:goto L53062e;
case 0x530631:c.instructions+=4;goto B530631;
case 0x530633:c.instructions+=3;goto B530633;
case 0x530634:c.instructions+=2;goto B530634;
case 0x530639:c.instructions+=1;goto B530639;
case 0x53063e:goto L53063e;
case 0x530640:c.instructions+=1;goto B530640;
case 0x530642:goto L530642;
case 0x530645:c.instructions+=4;goto B530645;
case 0x530647:c.instructions+=3;goto B530647;
case 0x53064c:c.instructions+=2;goto B53064c;
case 0x53064d:c.instructions+=1;goto B53064d;
case 0x530652:goto L530652;
case 0x530655:c.instructions+=4;goto B530655;
case 0x530657:c.instructions+=3;goto B530657;
case 0x53065c:c.instructions+=2;goto B53065c;
case 0x53065d:c.instructions+=1;goto B53065d;
case 0x53065f:goto L53065f;
case 0x530662:c.instructions+=4;goto B530662;
case 0x530664:c.instructions+=3;goto B530664;
case 0x530669:c.instructions+=2;goto B530669;
case 0x53066a:c.instructions+=1;goto B53066a;
case 0x53066f:goto L53066f;
case 0x530672:c.instructions+=3;goto B530672;
case 0x530674:c.instructions+=2;goto B530674;
case 0x530679:c.instructions+=1;goto B530679;
case 0x53067a:goto L53067a;
case 0x53067f:goto L53067f;
case 0x530682:c.instructions+=3;goto B530682;
case 0x530685:c.instructions+=2;goto B530685;
case 0x530687:c.instructions+=1;goto B530687;
case 0x530689:goto L530689;
case 0x53068b:c.instructions+=3;goto B53068b;
case 0x530690:c.instructions+=2;goto B530690;
case 0x530691:c.instructions+=1;goto B530691;
case 0x530696:goto L530696;
case 0x530699:goto L530699;
case 0x53069a:c.instructions+=1;goto B53069a;
case 0x5306a0:goto L5306a0;
case 0x5306a3:c.instructions+=7;goto B5306a3;
case 0x5306a7:c.instructions+=6;goto B5306a7;
case 0x5306a8:c.instructions+=5;goto B5306a8;
case 0x5306ab:c.instructions+=4;goto B5306ab;
case 0x5306af:c.instructions+=3;goto B5306af;
case 0x5306b0:c.instructions+=2;goto B5306b0;
case 0x5306b1:c.instructions+=1;goto B5306b1;
case 0x5306b6:goto L5306b6;
case 0x5306ba:c.instructions+=2;goto B5306ba;
case 0x5306bd:c.instructions+=1;goto B5306bd;
case 0x5306c0:goto L5306c0;
case 0x5306c3:c.instructions+=7;goto B5306c3;
case 0x5306c7:c.instructions+=6;goto B5306c7;
case 0x5306c8:c.instructions+=5;goto B5306c8;
case 0x5306cb:c.instructions+=4;goto B5306cb;
case 0x5306cf:c.instructions+=3;goto B5306cf;
case 0x5306d0:c.instructions+=2;goto B5306d0;
case 0x5306d1:c.instructions+=1;goto B5306d1;
case 0x5306d6:goto L5306d6;
case 0x5306da:c.instructions+=2;goto B5306da;
case 0x5306dd:c.instructions+=1;goto B5306dd;
case 0x5306e0:goto L5306e0;
case 0x5306e1:c.instructions+=5;goto B5306e1;
case 0x5306e3:c.instructions+=4;goto B5306e3;
case 0x5306e4:c.instructions+=3;goto B5306e4;
case 0x5306e7:c.instructions+=2;goto B5306e7;
case 0x5306e9:c.instructions+=1;goto B5306e9;
case 0x5306eb:goto L5306eb;
case 0x5306ed:c.instructions+=3;goto B5306ed;
case 0x5306ee:c.instructions+=2;goto B5306ee;
case 0x5306ef:c.instructions+=1;goto B5306ef;
case 0x5306f2:goto L5306f2;
case 0x5306f7:c.instructions+=5;goto B5306f7;
case 0x5306f8:c.instructions+=4;goto B5306f8;
case 0x5306f9:c.instructions+=3;goto B5306f9;
case 0x5306fe:c.instructions+=2;goto B5306fe;
case 0x530700:c.instructions+=1;goto B530700;
case 0x530702:goto L530702;
case 0x530708:c.instructions+=6;goto B530708;
case 0x53070a:c.instructions+=5;goto B53070a;
case 0x53070c:c.instructions+=4;goto B53070c;
case 0x53070f:c.instructions+=3;goto B53070f;
case 0x530713:c.instructions+=2;goto B530713;
case 0x530715:c.instructions+=1;goto B530715;
case 0x530717:goto L530717;
case 0x53071a:c.instructions+=1;goto B53071a;
case 0x53071c:goto L53071c;
case 0x530721:c.instructions+=2;goto B530721;
case 0x530724:c.instructions+=1;goto B530724;
case 0x530726:goto L530726;
case 0x53072d:goto L53072d;
case 0x530732:c.instructions+=1;goto B530732;
case 0x530734:goto L530734;
case 0x530739:c.instructions+=1;goto B530739;
case 0x53073b:goto L53073b;
case 0x530740:c.instructions+=1;goto B530740;
case 0x530742:goto L530742;
case 0x530747:c.instructions+=1;goto B530747;
case 0x530749:goto L530749;
case 0x53074e:c.instructions+=1;goto B53074e;
case 0x530750:goto L530750;
case 0x530755:goto L530755;
case 0x530757:c.instructions+=4;goto B530757;
case 0x53075c:c.instructions+=3;goto B53075c;
case 0x53075e:c.instructions+=2;goto B53075e;
case 0x530763:c.instructions+=1;goto B530763;
case 0x530768:goto L530768;
case 0x53076d:c.instructions+=1;goto B53076d;
case 0x53076f:goto L53076f;
case 0x530771:goto L530771;
case 0x530776:c.instructions+=1;goto B530776;
case 0x530778:goto L530778;
case 0x53077a:goto L53077a;
case 0x53077f:c.instructions+=1;goto B53077f;
case 0x530781:goto L530781;
case 0x530786:c.instructions+=1;goto B530786;
case 0x530788:goto L530788;
case 0x53078d:c.instructions+=1;goto B53078d;
case 0x53078f:goto L53078f;
case 0x530794:c.instructions+=1;goto B530794;
case 0x530796:goto L530796;
case 0x53079b:c.instructions+=1;goto B53079b;
case 0x53079d:goto L53079d;
case 0x5307a2:c.instructions+=1;goto B5307a2;
case 0x5307a4:goto L5307a4;
case 0x5307a9:c.instructions+=1;goto B5307a9;
case 0x5307ab:goto L5307ab;
case 0x5307b0:c.instructions+=1;goto B5307b0;
case 0x5307b2:goto L5307b2;
case 0x5307b7:c.instructions+=1;goto B5307b7;
case 0x5307b9:goto L5307b9;
case 0x5307be:c.instructions+=1;goto B5307be;
case 0x5307c0:goto L5307c0;
case 0x5307c5:c.instructions+=1;goto B5307c5;
case 0x5307c7:goto L5307c7;
case 0x5307cc:c.instructions+=1;goto B5307cc;
case 0x5307ce:goto L5307ce;
case 0x5307d3:goto L5307d3;
case 0x5307d6:c.instructions+=7;goto B5307d6;
case 0x5307d9:c.instructions+=6;goto B5307d9;
case 0x5307dc:c.instructions+=5;goto B5307dc;
case 0x5307de:c.instructions+=4;goto B5307de;
case 0x5307df:c.instructions+=3;goto B5307df;
case 0x5307e0:c.instructions+=2;goto B5307e0;
case 0x5307e1:c.instructions+=1;goto B5307e1;
case 0x5307e6:goto L5307e6;
case 0x5307e9:c.instructions+=5;goto B5307e9;
case 0x5307ea:c.instructions+=4;goto B5307ea;
case 0x5307eb:c.instructions+=3;goto B5307eb;
case 0x5307ec:c.instructions+=2;goto B5307ec;
case 0x5307ed:c.instructions+=1;goto B5307ed;
case 0x5307f0:goto L5307f0;
case 0x5307f1:c.instructions+=5;goto B5307f1;
case 0x5307f2:c.instructions+=4;goto B5307f2;
case 0x5307f4:c.instructions+=3;goto B5307f4;
case 0x5307f5:c.instructions+=2;goto B5307f5;
case 0x5307f6:c.instructions+=1;goto B5307f6;
case 0x530820:goto L530820;
case 0x530821:c.instructions+=9;goto B530821;
case 0x530823:c.instructions+=8;goto B530823;
case 0x530824:c.instructions+=7;goto B530824;
case 0x530825:c.instructions+=6;goto B530825;
case 0x530826:c.instructions+=5;goto B530826;
case 0x530827:c.instructions+=4;goto B530827;
case 0x530829:c.instructions+=3;goto B530829;
case 0x53082f:c.instructions+=2;goto B53082f;
case 0x530831:c.instructions+=1;goto B530831;
case 0x530834:goto L530834;
case 0x530837:c.instructions+=7;goto B530837;
case 0x530839:c.instructions+=6;goto B530839;
case 0x53083b:c.instructions+=5;goto B53083b;
case 0x53083c:c.instructions+=4;goto B53083c;
case 0x53083d:c.instructions+=3;goto B53083d;
case 0x530842:c.instructions+=2;goto B530842;
case 0x530845:c.instructions+=1;goto B530845;
case 0x53084a:goto L53084a;
case 0x53084c:c.instructions+=2;goto B53084c;
case 0x53084e:c.instructions+=1;goto B53084e;
case 0x530850:goto L530850;
case 0x530853:c.instructions+=7;goto B530853;
case 0x530855:c.instructions+=6;goto B530855;
case 0x530857:c.instructions+=5;goto B530857;
case 0x530858:c.instructions+=4;goto B530858;
case 0x530859:c.instructions+=3;goto B530859;
case 0x53085a:c.instructions+=2;goto B53085a;
case 0x53085f:c.instructions+=1;goto B53085f;
case 0x530864:goto L530864;
case 0x530866:c.instructions+=3;goto B530866;
case 0x530867:c.instructions+=2;goto B530867;
case 0x530869:c.instructions+=1;goto B530869;
case 0x53086e:goto L53086e;
case 0x530870:c.instructions+=1;goto B530870;
case 0x530872:goto L530872;
case 0x530874:c.instructions+=3;goto B530874;
case 0x530879:c.instructions+=2;goto B530879;
case 0x53087b:c.instructions+=1;goto B53087b;
case 0x530880:goto L530880;
case 0x530881:c.instructions+=3;goto B530881;
case 0x530883:c.instructions+=2;goto B530883;
case 0x530885:c.instructions+=1;goto B530885;
case 0x53088a:goto L53088a;
case 0x53088c:c.instructions+=1;goto B53088c;
case 0x53088e:goto L53088e;
case 0x530890:c.instructions+=1;goto B530890;
case 0x530892:goto L530892;
case 0x530893:c.instructions+=6;goto B530893;
case 0x530894:c.instructions+=5;goto B530894;
case 0x530896:c.instructions+=4;goto B530896;
case 0x530897:c.instructions+=3;goto B530897;
case 0x530899:c.instructions+=2;goto B530899;
case 0x53089a:c.instructions+=1;goto B53089a;
case 0x53089d:goto L53089d;
case 0x53089e:c.instructions+=6;goto B53089e;
case 0x53089f:c.instructions+=5;goto B53089f;
case 0x5308a1:c.instructions+=4;goto B5308a1;
case 0x5308a2:c.instructions+=3;goto B5308a2;
case 0x5308a4:c.instructions+=2;goto B5308a4;
case 0x5308a5:c.instructions+=1;goto B5308a5;
case 0x5308b0:goto L5308b0;
case 0x5308b3:c.instructions+=6;goto B5308b3;
case 0x5308b4:c.instructions+=5;goto B5308b4;
case 0x5308ba:c.instructions+=4;goto B5308ba;
case 0x5308bb:c.instructions+=3;goto B5308bb;
case 0x5308c1:c.instructions+=2;goto B5308c1;
case 0x5308c3:c.instructions+=1;goto B5308c3;
case 0x5308c5:goto L5308c5;
case 0x5308c8:c.instructions+=2;goto B5308c8;
case 0x5308ca:c.instructions+=1;goto B5308ca;
case 0x5308cc:goto L5308cc;
case 0x5308d0:c.instructions+=3;goto B5308d0;
case 0x5308d1:c.instructions+=2;goto B5308d1;
case 0x5308d2:c.instructions+=1;goto B5308d2;
case 0x5308d7:goto L5308d7;
case 0x5308da:c.instructions+=2;goto B5308da;
case 0x5308dc:c.instructions+=1;goto B5308dc;
case 0x5308de:goto L5308de;
case 0x5308e2:c.instructions+=4;goto B5308e2;
case 0x5308e6:c.instructions+=3;goto B5308e6;
case 0x5308e8:c.instructions+=2;goto B5308e8;
case 0x5308eb:c.instructions+=1;goto B5308eb;
case 0x5308ed:goto L5308ed;
case 0x5308f1:c.instructions+=4;goto B5308f1;
case 0x5308f5:c.instructions+=3;goto B5308f5;
case 0x5308f7:c.instructions+=2;goto B5308f7;
case 0x5308fa:c.instructions+=1;goto B5308fa;
case 0x5308fc:goto L5308fc;
case 0x530900:c.instructions+=4;goto B530900;
case 0x530904:c.instructions+=3;goto B530904;
case 0x530906:c.instructions+=2;goto B530906;
case 0x530909:c.instructions+=1;goto B530909;
case 0x53090b:goto L53090b;
case 0x53090f:c.instructions+=4;goto B53090f;
case 0x530913:c.instructions+=3;goto B530913;
case 0x530915:c.instructions+=2;goto B530915;
case 0x530918:c.instructions+=1;goto B530918;
case 0x53091a:goto L53091a;
case 0x53091c:c.instructions+=2;goto B53091c;
case 0x53091e:c.instructions+=1;goto B53091e;
case 0x530920:goto L530920;
case 0x530921:c.instructions+=4;goto B530921;
case 0x530923:c.instructions+=3;goto B530923;
case 0x530924:c.instructions+=2;goto B530924;
case 0x530927:c.instructions+=1;goto B530927;
case 0x53092a:goto L53092a;
case 0x53092b:c.instructions+=4;goto B53092b;
case 0x53092d:c.instructions+=3;goto B53092d;
case 0x53092e:c.instructions+=2;goto B53092e;
case 0x530931:c.instructions+=1;goto B530931;
case 0x530940:goto L530940;
case 0x530944:c.instructions+=2;goto B530944;
case 0x530946:c.instructions+=1;goto B530946;
case 0x530948:goto L530948;
case 0x53094a:c.instructions+=1;goto B53094a;
case 0x53094d:goto L53094d;
case 0x530953:c.instructions+=3;goto B530953;
case 0x530958:c.instructions+=2;goto B530958;
case 0x53095a:c.instructions+=1;goto B53095a;
case 0x53095c:goto L53095c;
case 0x530961:c.instructions+=1;goto B530961;
case 0x530963:goto L530963;
case 0x530966:c.instructions+=1;goto B530966;
case 0x530968:goto L530968;
case 0x53096e:c.instructions+=2;goto B53096e;
case 0x530971:c.instructions+=1;goto B530971;
case 0x530973:goto L530973;
case 0x53097a:goto L53097a;
case 0x53097f:c.instructions+=1;goto B53097f;
case 0x530981:goto L530981;
case 0x530986:c.instructions+=1;goto B530986;
case 0x530988:goto L530988;
case 0x53098d:c.instructions+=1;goto B53098d;
case 0x53098f:goto L53098f;
case 0x530994:c.instructions+=1;goto B530994;
case 0x530996:goto L530996;
case 0x53099b:c.instructions+=1;goto B53099b;
case 0x53099d:goto L53099d;
case 0x5309a2:goto L5309a2;
case 0x5309a5:c.instructions+=7;goto B5309a5;
case 0x5309a8:c.instructions+=6;goto B5309a8;
case 0x5309ab:c.instructions+=5;goto B5309ab;
case 0x5309ad:c.instructions+=4;goto B5309ad;
case 0x5309ae:c.instructions+=3;goto B5309ae;
case 0x5309b0:c.instructions+=2;goto B5309b0;
case 0x5309b1:c.instructions+=1;goto B5309b1;
case 0x5309b6:goto L5309b6;
case 0x5309b9:c.instructions+=1;goto B5309b9;
case 0x5309e0:goto L5309e0;
case 0x5309e1:c.instructions+=4;goto B5309e1;
case 0x5309e3:c.instructions+=3;goto B5309e3;
case 0x5309e8:c.instructions+=2;goto B5309e8;
case 0x5309ea:c.instructions+=1;goto B5309ea;
case 0x5309ec:goto L5309ec;
case 0x5309f1:c.instructions+=5;goto B5309f1;
case 0x5309f3:c.instructions+=4;goto B5309f3;
case 0x5309fa:c.instructions+=3;goto B5309fa;
case 0x5309ff:c.instructions+=2;goto B5309ff;
case 0x530a09:c.instructions+=1;goto B530a09;
case 0x530a0e:goto L530a0e;
case 0x530a11:c.instructions+=3;goto B530a11;
case 0x530a13:c.instructions+=2;goto B530a13;
case 0x530a18:c.instructions+=1;goto B530a18;
case 0x530a1d:goto L530a1d;
case 0x530a20:c.instructions+=6;goto B530a20;
case 0x530a21:c.instructions+=5;goto B530a21;
case 0x530a22:c.instructions+=4;goto B530a22;
case 0x530a28:c.instructions+=3;goto B530a28;
case 0x530a29:c.instructions+=2;goto B530a29;
case 0x530a2e:c.instructions+=1;goto B530a2e;
case 0x530a33:goto L530a33;
case 0x530a36:c.instructions+=3;goto B530a36;
case 0x530a38:c.instructions+=2;goto B530a38;
case 0x530a42:c.instructions+=1;goto B530a42;
case 0x530a44:goto L530a44;
case 0x530a47:c.instructions+=1;goto B530a47;
case 0x530a49:goto L530a49;
case 0x530a4b:c.instructions+=3;goto B530a4b;
case 0x530a51:c.instructions+=2;goto B530a51;
case 0x530a57:c.instructions+=1;goto B530a57;
case 0x530a59:goto L530a59;
case 0x530a5b:goto L530a5b;
case 0x530a5e:c.instructions+=3;goto B530a5e;
case 0x530a5f:c.instructions+=2;goto B530a5f;
case 0x530a61:c.instructions+=1;goto B530a61;
case 0x530a66:goto L530a66;
case 0x530a68:c.instructions+=2;goto B530a68;
case 0x530a69:c.instructions+=1;goto B530a69;
case 0x530a6b:goto L530a6b;
case 0x530a70:goto L530a70;
case 0x530a72:goto L530a72;
case 0x530a77:goto L530a77;
case 0x530a79:c.instructions+=1;goto B530a79;
case 0x530a7b:goto L530a7b;
case 0x530a7c:c.instructions+=1;goto B530a7c;
case 0x530a81:goto L530a81;
case 0x530a83:goto L530a83;
case 0x530a84:c.instructions+=3;goto B530a84;
case 0x530a85:c.instructions+=2;goto B530a85;
case 0x530a8a:c.instructions+=1;goto B530a8a;
case 0x530a8f:goto L530a8f;
case 0x530a91:c.instructions+=1;goto B530a91;
case 0x530a96:goto L530a96;
case 0x530a99:c.instructions+=5;goto B530a99;
case 0x530a9a:c.instructions+=4;goto B530a9a;
case 0x530a9b:c.instructions+=3;goto B530a9b;
case 0x530a9c:c.instructions+=2;goto B530a9c;
case 0x530a9d:c.instructions+=1;goto B530a9d;
case 0x530aa0:goto L530aa0;
case 0x530aa3:c.instructions+=7;goto B530aa3;
case 0x530aa4:c.instructions+=6;goto B530aa4;
case 0x530aa5:c.instructions+=5;goto B530aa5;
case 0x530aa7:c.instructions+=4;goto B530aa7;
case 0x530aaa:c.instructions+=3;goto B530aaa;
case 0x530aac:c.instructions+=2;goto B530aac;
case 0x530aad:c.instructions+=1;goto B530aad;
case 0x530aaf:goto L530aaf;
case 0x530ab2:c.instructions+=2;goto B530ab2;
case 0x530ab4:c.instructions+=1;goto B530ab4;
case 0x530ab6:goto L530ab6;
case 0x530ab8:c.instructions+=1;goto B530ab8;
case 0x530aba:goto L530aba;
case 0x530abc:goto L530abc;
case 0x530abf:c.instructions+=6;goto B530abf;
case 0x530ac3:c.instructions+=5;goto B530ac3;
case 0x530ac4:c.instructions+=4;goto B530ac4;
case 0x530ac8:c.instructions+=3;goto B530ac8;
case 0x530ac9:c.instructions+=2;goto B530ac9;
case 0x530aca:c.instructions+=1;goto B530aca;
case 0x530acf:goto L530acf;
case 0x530ad2:c.instructions+=9;goto B530ad2;
case 0x530ad5:c.instructions+=8;goto B530ad5;
case 0x530ad8:c.instructions+=7;goto B530ad8;
case 0x530ade:c.instructions+=6;goto B530ade;
case 0x530ae1:c.instructions+=5;goto B530ae1;
case 0x530ae3:c.instructions+=4;goto B530ae3;
case 0x530ae7:c.instructions+=3;goto B530ae7;
case 0x530aeb:c.instructions+=2;goto B530aeb;
case 0x530aef:c.instructions+=1;goto B530aef;
case 0x530af1:goto L530af1;
case 0x530af9:c.instructions+=2;goto B530af9;
case 0x530b01:c.instructions+=1;goto B530b01;
case 0x530b03:goto L530b03;
case 0x530b0b:c.instructions+=1;goto B530b0b;
case 0x530b13:goto L530b13;
case 0x530b16:c.instructions+=9;goto B530b16;
case 0x530b19:c.instructions+=8;goto B530b19;
case 0x530b1f:c.instructions+=7;goto B530b1f;
case 0x530b22:c.instructions+=6;goto B530b22;
case 0x530b28:c.instructions+=5;goto B530b28;
case 0x530b2c:c.instructions+=4;goto B530b2c;
case 0x530b2f:c.instructions+=3;goto B530b2f;
case 0x530b32:c.instructions+=2;goto B530b32;
case 0x530b33:c.instructions+=1;goto B530b33;
case 0x530b38:goto L530b38;
case 0x530b3c:c.instructions+=11;goto B530b3c;
case 0x530b40:c.instructions+=10;goto B530b40;
case 0x530b44:c.instructions+=9;goto B530b44;
case 0x530b47:c.instructions+=8;goto B530b47;
case 0x530b49:c.instructions+=7;goto B530b49;
case 0x530b4d:c.instructions+=6;goto B530b4d;
case 0x530b51:c.instructions+=5;goto B530b51;
case 0x530b52:c.instructions+=4;goto B530b52;
case 0x530b53:c.instructions+=3;goto B530b53;
case 0x530b54:c.instructions+=2;goto B530b54;
case 0x530b58:c.instructions+=1;goto B530b58;
case 0x530b5d:goto L530b5d;
case 0x530b61:c.instructions+=9;goto B530b61;
case 0x530b65:c.instructions+=8;goto B530b65;
case 0x530b68:c.instructions+=7;goto B530b68;
case 0x530b6b:c.instructions+=6;goto B530b6b;
case 0x530b6c:c.instructions+=5;goto B530b6c;
case 0x530b70:c.instructions+=4;goto B530b70;
case 0x530b71:c.instructions+=3;goto B530b71;
case 0x530b74:c.instructions+=2;goto B530b74;
case 0x530b75:c.instructions+=1;goto B530b75;
case 0x530b7a:goto L530b7a;
case 0x530b7e:c.instructions+=15;goto B530b7e;
case 0x530b82:c.instructions+=14;goto B530b82;
case 0x530b85:c.instructions+=13;goto B530b85;
case 0x530b88:c.instructions+=12;goto B530b88;
case 0x530b8e:c.instructions+=11;goto B530b8e;
case 0x530b92:c.instructions+=10;goto B530b92;
case 0x530b96:c.instructions+=9;goto B530b96;
case 0x530b9a:c.instructions+=8;goto B530b9a;
case 0x530b9e:c.instructions+=7;goto B530b9e;
case 0x530ba2:c.instructions+=6;goto B530ba2;
case 0x530ba6:c.instructions+=5;goto B530ba6;
case 0x530ba8:c.instructions+=4;goto B530ba8;
case 0x530bac:c.instructions+=3;goto B530bac;
case 0x530baf:c.instructions+=2;goto B530baf;
case 0x530bb0:c.instructions+=1;goto B530bb0;
case 0x530bb5:goto L530bb5;
case 0x530bb9:c.instructions+=6;goto B530bb9;
case 0x530bbd:c.instructions+=5;goto B530bbd;
case 0x530bc0:c.instructions+=4;goto B530bc0;
case 0x530bc1:c.instructions+=3;goto B530bc1;
case 0x530bc2:c.instructions+=2;goto B530bc2;
case 0x530bc3:c.instructions+=1;goto B530bc3;
case 0x530bc8:goto L530bc8;
case 0x530bcb:c.instructions+=6;goto B530bcb;
case 0x530bcf:c.instructions+=5;goto B530bcf;
case 0x530bd0:c.instructions+=4;goto B530bd0;
case 0x530bd4:c.instructions+=3;goto B530bd4;
case 0x530bd5:c.instructions+=2;goto B530bd5;
case 0x530bd6:c.instructions+=1;goto B530bd6;
case 0x530bdb:goto L530bdb;
case 0x530bde:c.instructions+=6;goto B530bde;
case 0x530be2:c.instructions+=5;goto B530be2;
case 0x530be3:c.instructions+=4;goto B530be3;
case 0x530be7:c.instructions+=3;goto B530be7;
case 0x530be8:c.instructions+=2;goto B530be8;
case 0x530be9:c.instructions+=1;goto B530be9;
case 0x530bee:goto L530bee;
case 0x530bf1:c.instructions+=6;goto B530bf1;
case 0x530bf5:c.instructions+=5;goto B530bf5;
case 0x530bf6:c.instructions+=4;goto B530bf6;
case 0x530bfa:c.instructions+=3;goto B530bfa;
case 0x530bfb:c.instructions+=2;goto B530bfb;
case 0x530bfc:c.instructions+=1;goto B530bfc;
case 0x530c01:goto L530c01;
case 0x530c05:c.instructions+=6;goto B530c05;
case 0x530c08:c.instructions+=5;goto B530c08;
case 0x530c0c:c.instructions+=4;goto B530c0c;
case 0x530c0e:c.instructions+=3;goto B530c0e;
case 0x530c12:c.instructions+=2;goto B530c12;
case 0x530c16:c.instructions+=1;goto B530c16;
case 0x530c18:goto L530c18;
case 0x530c1c:c.instructions+=5;goto B530c1c;
case 0x530c1f:c.instructions+=4;goto B530c1f;
case 0x530c20:c.instructions+=3;goto B530c20;
case 0x530c21:c.instructions+=2;goto B530c21;
case 0x530c22:c.instructions+=1;goto B530c22;
case 0x530c27:goto L530c27;
case 0x530c2a:c.instructions+=6;goto B530c2a;
case 0x530c2e:c.instructions+=5;goto B530c2e;
case 0x530c2f:c.instructions+=4;goto B530c2f;
case 0x530c33:c.instructions+=3;goto B530c33;
case 0x530c34:c.instructions+=2;goto B530c34;
case 0x530c35:c.instructions+=1;goto B530c35;
case 0x530c3a:goto L530c3a;
case 0x530c3e:c.instructions+=5;goto B530c3e;
case 0x530c42:c.instructions+=4;goto B530c42;
case 0x530c43:c.instructions+=3;goto B530c43;
case 0x530c44:c.instructions+=2;goto B530c44;
case 0x530c45:c.instructions+=1;goto B530c45;
case 0x530c4a:goto L530c4a;
case 0x530c4d:c.instructions+=6;goto B530c4d;
case 0x530c51:c.instructions+=5;goto B530c51;
case 0x530c52:c.instructions+=4;goto B530c52;
case 0x530c56:c.instructions+=3;goto B530c56;
case 0x530c57:c.instructions+=2;goto B530c57;
case 0x530c58:c.instructions+=1;goto B530c58;
case 0x530c5d:goto L530c5d;
case 0x530c61:c.instructions+=4;goto B530c61;
case 0x530c62:c.instructions+=3;goto B530c62;
case 0x530c63:c.instructions+=2;goto B530c63;
case 0x530c64:c.instructions+=1;goto B530c64;
case 0x530c69:goto L530c69;
case 0x530c6c:goto L530c6c;
case 0x530c6f:c.instructions+=2;goto B530c6f;
case 0x530c71:c.instructions+=1;goto B530c71;
case 0x530c73:goto L530c73;
case 0x530c77:c.instructions+=5;goto B530c77;
case 0x530c78:c.instructions+=4;goto B530c78;
case 0x530c7c:c.instructions+=3;goto B530c7c;
case 0x530c7d:c.instructions+=2;goto B530c7d;
case 0x530c7e:c.instructions+=1;goto B530c7e;
case 0x530c83:goto L530c83;
case 0x530c87:c.instructions+=4;goto B530c87;
case 0x530c88:c.instructions+=3;goto B530c88;
case 0x530c89:c.instructions+=2;goto B530c89;
case 0x530c8a:c.instructions+=1;goto B530c8a;
case 0x530c8f:goto L530c8f;
case 0x530c92:c.instructions+=6;goto B530c92;
case 0x530c96:c.instructions+=5;goto B530c96;
case 0x530c97:c.instructions+=4;goto B530c97;
case 0x530c9b:c.instructions+=3;goto B530c9b;
case 0x530c9c:c.instructions+=2;goto B530c9c;
case 0x530c9d:c.instructions+=1;goto B530c9d;
case 0x530ca2:goto L530ca2;
case 0x530ca5:c.instructions+=6;goto B530ca5;
case 0x530ca9:c.instructions+=5;goto B530ca9;
case 0x530caa:c.instructions+=4;goto B530caa;
case 0x530cae:c.instructions+=3;goto B530cae;
case 0x530caf:c.instructions+=2;goto B530caf;
case 0x530cb0:c.instructions+=1;goto B530cb0;
case 0x530cb5:goto L530cb5;
case 0x530cb9:c.instructions+=5;goto B530cb9;
case 0x530cbd:c.instructions+=4;goto B530cbd;
case 0x530cbe:c.instructions+=3;goto B530cbe;
case 0x530cbf:c.instructions+=2;goto B530cbf;
case 0x530cc0:c.instructions+=1;goto B530cc0;
case 0x530cc5:goto L530cc5;
case 0x530cc8:goto L530cc8;
case 0x530ccc:c.instructions+=9;goto B530ccc;
case 0x530cd2:c.instructions+=8;goto B530cd2;
case 0x530cd8:c.instructions+=7;goto B530cd8;
case 0x530cdb:c.instructions+=6;goto B530cdb;
case 0x530cdf:c.instructions+=5;goto B530cdf;
case 0x530ce3:c.instructions+=4;goto B530ce3;
case 0x530ce9:c.instructions+=3;goto B530ce9;
case 0x530cec:c.instructions+=2;goto B530cec;
case 0x530ced:c.instructions+=1;goto B530ced;
case 0x530cf2:goto L530cf2;
case 0x530cf5:c.instructions+=6;goto B530cf5;
case 0x530cfb:c.instructions+=5;goto B530cfb;
case 0x530cfe:c.instructions+=4;goto B530cfe;
case 0x530d01:c.instructions+=3;goto B530d01;
case 0x530d04:c.instructions+=2;goto B530d04;
case 0x530d07:c.instructions+=1;goto B530d07;
case 0x530d0a:goto L530d0a;
case 0x530d0b:c.instructions+=4;goto B530d0b;
case 0x530d0c:c.instructions+=3;goto B530d0c;
case 0x530d0d:c.instructions+=2;goto B530d0d;
case 0x530d10:c.instructions+=1;goto B530d10;
case 0x530d20:goto L530d20;
case 0x530d24:c.instructions+=22;goto B530d24;
case 0x530d28:c.instructions+=21;goto B530d28;
case 0x530d29:c.instructions+=20;goto B530d29;
case 0x530d2b:c.instructions+=19;goto B530d2b;
case 0x530d2f:c.instructions+=18;goto B530d2f;
case 0x530d32:c.instructions+=17;goto B530d32;
case 0x530d36:c.instructions+=16;goto B530d36;
case 0x530d39:c.instructions+=15;goto B530d39;
case 0x530d3d:c.instructions+=14;goto B530d3d;
case 0x530d43:c.instructions+=13;goto B530d43;
case 0x530d47:c.instructions+=12;goto B530d47;
case 0x530d4d:c.instructions+=11;goto B530d4d;
case 0x530d53:c.instructions+=10;goto B530d53;
case 0x530d57:c.instructions+=9;goto B530d57;
case 0x530d5d:c.instructions+=8;goto B530d5d;
case 0x530d61:c.instructions+=7;goto B530d61;
case 0x530d62:c.instructions+=6;goto B530d62;
case 0x530d66:c.instructions+=5;goto B530d66;
case 0x530d6c:c.instructions+=4;goto B530d6c;
case 0x530d6f:c.instructions+=3;goto B530d6f;
case 0x530d70:c.instructions+=2;goto B530d70;
case 0x530d71:c.instructions+=1;goto B530d71;
case 0x530d76:goto L530d76;
case 0x530d7c:c.instructions+=6;goto B530d7c;
case 0x530d7e:c.instructions+=5;goto B530d7e;
case 0x530d81:c.instructions+=4;goto B530d81;
case 0x530d85:c.instructions+=3;goto B530d85;
case 0x530d8b:c.instructions+=2;goto B530d8b;
case 0x530d8c:c.instructions+=1;goto B530d8c;
case 0x530d90:goto L530d90;
case 0x530d93:c.instructions+=7;goto B530d93;
case 0x530d94:c.instructions+=6;goto B530d94;
case 0x530d96:c.instructions+=5;goto B530d96;
case 0x530d9c:c.instructions+=4;goto B530d9c;
case 0x530d9d:c.instructions+=3;goto B530d9d;
case 0x530da0:c.instructions+=2;goto B530da0;
case 0x530da1:c.instructions+=1;goto B530da1;
case 0x530da6:goto L530da6;
case 0x530da8:c.instructions+=1;goto B530da8;
case 0x530daa:goto L530daa;
case 0x530db0:c.instructions+=4;goto B530db0;
case 0x530db2:c.instructions+=3;goto B530db2;
case 0x530db4:c.instructions+=2;goto B530db4;
case 0x530db5:c.instructions+=1;goto B530db5;
case 0x530dba:goto L530dba;
case 0x530dbc:goto L530dbc;
case 0x530dc2:goto L530dc2;
case 0x530dc5:c.instructions+=4;goto B530dc5;
case 0x530dcb:c.instructions+=3;goto B530dcb;
case 0x530dd1:c.instructions+=2;goto B530dd1;
case 0x530dd2:c.instructions+=1;goto B530dd2;
case 0x530dd7:goto L530dd7;
case 0x530dd9:c.instructions+=1;goto B530dd9;
case 0x530ddb:goto L530ddb;
case 0x530de1:c.instructions+=4;goto B530de1;
case 0x530de3:c.instructions+=3;goto B530de3;
case 0x530de5:c.instructions+=2;goto B530de5;
case 0x530de6:c.instructions+=1;goto B530de6;
case 0x530deb:goto L530deb;
case 0x530df1:c.instructions+=3;goto B530df1;
case 0x530df3:c.instructions+=2;goto B530df3;
case 0x530df6:c.instructions+=1;goto B530df6;
case 0x530df8:goto L530df8;
case 0x530dfa:goto L530dfa;
case 0x530e00:goto L530e00;
case 0x530e03:c.instructions+=4;goto B530e03;
case 0x530e09:c.instructions+=3;goto B530e09;
case 0x530e0a:c.instructions+=2;goto B530e0a;
case 0x530e0f:c.instructions+=1;goto B530e0f;
case 0x530e14:goto L530e14;
case 0x530e17:c.instructions+=4;goto B530e17;
case 0x530e1d:c.instructions+=3;goto B530e1d;
case 0x530e23:c.instructions+=2;goto B530e23;
case 0x530e24:c.instructions+=1;goto B530e24;
case 0x530e29:goto L530e29;
case 0x530e2b:c.instructions+=1;goto B530e2b;
case 0x530e2d:goto L530e2d;
case 0x530e33:c.instructions+=4;goto B530e33;
case 0x530e35:c.instructions+=3;goto B530e35;
case 0x530e37:c.instructions+=2;goto B530e37;
case 0x530e38:c.instructions+=1;goto B530e38;
case 0x530e3d:goto L530e3d;
case 0x530e3f:goto L530e3f;
case 0x530e45:goto L530e45;
case 0x530e4b:c.instructions+=6;goto B530e4b;
case 0x530e51:c.instructions+=5;goto B530e51;
case 0x530e57:c.instructions+=4;goto B530e57;
case 0x530e5d:c.instructions+=3;goto B530e5d;
case 0x530e5f:c.instructions+=2;goto B530e5f;
case 0x530e62:c.instructions+=1;goto B530e62;
case 0x530e64:goto L530e64;
case 0x530e6a:c.instructions+=1;goto B530e6a;
case 0x530e70:goto L530e70;
case 0x530e76:c.instructions+=4;goto B530e76;
case 0x530e7c:c.instructions+=3;goto B530e7c;
case 0x530e7e:c.instructions+=2;goto B530e7e;
case 0x530e81:c.instructions+=1;goto B530e81;
case 0x530e83:goto L530e83;
case 0x530e89:c.instructions+=1;goto B530e89;
case 0x530e8f:goto L530e8f;
case 0x530e92:c.instructions+=3;goto B530e92;
case 0x530e98:c.instructions+=2;goto B530e98;
case 0x530e99:c.instructions+=1;goto B530e99;
case 0x530e9e:goto L530e9e;
case 0x530ea0:c.instructions+=1;goto B530ea0;
case 0x530ea2:goto L530ea2;
case 0x530ea8:c.instructions+=4;goto B530ea8;
case 0x530eaa:c.instructions+=3;goto B530eaa;
case 0x530eac:c.instructions+=2;goto B530eac;
case 0x530ead:c.instructions+=1;goto B530ead;
case 0x530eb2:goto L530eb2;
case 0x530eb8:c.instructions+=3;goto B530eb8;
case 0x530eba:c.instructions+=2;goto B530eba;
case 0x530ebd:c.instructions+=1;goto B530ebd;
case 0x530ebf:goto L530ebf;
case 0x530ec1:goto L530ec1;
case 0x530ec7:goto L530ec7;
case 0x530eca:c.instructions+=4;goto B530eca;
case 0x530ed0:c.instructions+=3;goto B530ed0;
case 0x530ed6:c.instructions+=2;goto B530ed6;
case 0x530ed7:c.instructions+=1;goto B530ed7;
case 0x530edc:goto L530edc;
case 0x530ede:c.instructions+=1;goto B530ede;
case 0x530ee0:goto L530ee0;
case 0x530ee6:c.instructions+=4;goto B530ee6;
case 0x530ee8:c.instructions+=3;goto B530ee8;
case 0x530eea:c.instructions+=2;goto B530eea;
case 0x530eeb:c.instructions+=1;goto B530eeb;
case 0x530ef0:goto L530ef0;
case 0x530ef2:goto L530ef2;
case 0x530ef8:goto L530ef8;
case 0x530efc:c.instructions+=7;goto B530efc;
case 0x530f02:c.instructions+=6;goto B530f02;
case 0x530f05:c.instructions+=5;goto B530f05;
case 0x530f06:c.instructions+=4;goto B530f06;
case 0x530f0a:c.instructions+=3;goto B530f0a;
case 0x530f0b:c.instructions+=2;goto B530f0b;
case 0x530f0c:c.instructions+=1;goto B530f0c;
case 0x530f11:goto L530f11;
case 0x530f17:c.instructions+=8;goto B530f17;
case 0x530f19:c.instructions+=7;goto B530f19;
case 0x530f1c:c.instructions+=6;goto B530f1c;
case 0x530f1d:c.instructions+=5;goto B530f1d;
case 0x530f21:c.instructions+=4;goto B530f21;
case 0x530f27:c.instructions+=3;goto B530f27;
case 0x530f28:c.instructions+=2;goto B530f28;
case 0x530f2b:c.instructions+=1;goto B530f2b;
case 0x530f30:goto L530f30;
case 0x530f34:c.instructions+=7;goto B530f34;
case 0x530f35:c.instructions+=6;goto B530f35;
case 0x530f36:c.instructions+=5;goto B530f36;
case 0x530f37:c.instructions+=4;goto B530f37;
case 0x530f38:c.instructions+=3;goto B530f38;
case 0x530f39:c.instructions+=2;goto B530f39;
case 0x530f3b:c.instructions+=1;goto B530f3b;
case 0x530f40:goto L530f40;
case 0x530f43:c.instructions+=2;goto B530f43;
case 0x530f46:c.instructions+=1;goto B530f46;
case 0x530f49:goto L530f49;
case 0x530f4c:c.instructions+=3;goto B530f4c;
case 0x530f4e:c.instructions+=2;goto B530f4e;
case 0x530f50:c.instructions+=1;goto B530f50;
case 0x530f52:goto L530f52;
case 0x530f55:c.instructions+=2;goto B530f55;
case 0x530f57:c.instructions+=1;goto B530f57;
case 0x530f59:goto L530f59;
case 0x530f60:goto L530f60;
case 0x530f65:c.instructions+=1;goto B530f65;
case 0x530f6a:goto L530f6a;
case 0x530f6d:c.instructions+=3;goto B530f6d;
case 0x530f70:c.instructions+=2;goto B530f70;
case 0x530f72:c.instructions+=1;goto B530f72;
case 0x530f74:goto L530f74;
case 0x530f77:c.instructions+=2;goto B530f77;
case 0x530f79:c.instructions+=1;goto B530f79;
case 0x530f7b:goto L530f7b;
case 0x530f7d:goto L530f7d;
case 0x530f7f:c.instructions+=1;goto B530f7f;
case 0x530f81:goto L530f81;
case 0x530f84:c.instructions+=1;goto B530f84;
case 0x530f86:goto L530f86;
case 0x530f88:c.instructions+=2;goto B530f88;
case 0x530f8b:c.instructions+=1;goto B530f8b;
case 0x530f90:goto L530f90;
case 0x530f93:c.instructions+=1;goto B530f93;
case 0x530f96:goto L530f96;
case 0x530f99:goto L530f99;
case 0x530f9c:c.instructions+=2;goto B530f9c;
case 0x530f9e:c.instructions+=1;goto B530f9e;
case 0x530fa0:goto L530fa0;
case 0x530fa3:c.instructions+=2;goto B530fa3;
case 0x530fa5:c.instructions+=1;goto B530fa5;
case 0x530fa7:goto L530fa7;
case 0x530fb0:goto L530fb0;
case 0x530fb5:c.instructions+=1;goto B530fb5;
case 0x530fba:goto L530fba;
case 0x530fbd:c.instructions+=3;goto B530fbd;
case 0x530fc0:c.instructions+=2;goto B530fc0;
case 0x530fc2:c.instructions+=1;goto B530fc2;
case 0x530fc4:goto L530fc4;
case 0x530fc7:c.instructions+=2;goto B530fc7;
case 0x530fc9:c.instructions+=1;goto B530fc9;
case 0x530fcb:goto L530fcb;
case 0x530fcd:goto L530fcd;
case 0x530fcf:c.instructions+=1;goto B530fcf;
case 0x530fd1:goto L530fd1;
case 0x530fd4:c.instructions+=1;goto B530fd4;
case 0x530fd6:goto L530fd6;
case 0x530fd8:c.instructions+=2;goto B530fd8;
case 0x530fdb:c.instructions+=1;goto B530fdb;
case 0x530fe0:goto L530fe0;
case 0x530fe3:c.instructions+=1;goto B530fe3;
case 0x530fe6:goto L530fe6;
case 0x530fe9:goto L530fe9;
case 0x530fec:c.instructions+=6;goto B530fec;
case 0x530fed:c.instructions+=5;goto B530fed;
case 0x530fee:c.instructions+=4;goto B530fee;
case 0x530ff0:c.instructions+=3;goto B530ff0;
case 0x530ff1:c.instructions+=2;goto B530ff1;
case 0x530ff2:c.instructions+=1;goto B530ff2;
case 0x530ff4:goto L530ff4;
case 0x530ff6:c.instructions+=3;goto B530ff6;
case 0x530ffb:c.instructions+=2;goto B530ffb;
case 0x530ffc:c.instructions+=1;goto B530ffc;
default:missing_instruction(c.pc);}
B530000:L530000:{c.instructions+=4;NFSU2_TR(0x530000);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B530001:{NFSU2_TR(0x530001);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B530002:{NFSU2_TR(0x530002);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B530004:{NFSU2_TR(0x530004);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x530009ull));
TAIL_STATIC(0x515500u,515);
}
B530009:L530009:{c.instructions+=2;NFSU2_TR(0x530009);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B53000c:{NFSU2_TR(0x53000c);
{goto L5300d9;}
}
B530011:L530011:{c.instructions+=2;NFSU2_TR(0x530011);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x8ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B530014:{NFSU2_TR(0x530014);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5300b8;}}
}
B53001a:L53001a:{c.instructions+=4;NFSU2_TR(0x53001a);
__builtin_memmove((R+8),gp(0x850088),4);
}
B530020:{NFSU2_TR(0x530020);
u8 U[14];
__builtin_memmove((U+6),(R+8),4);
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
B530023:{NFSU2_TR(0x530023);
w4(R+4,u32(0x20ull));
}
B530028:{NFSU2_TR(0x530028);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L5300a7;}}
}
B53002a:L53002a:{c.instructions+=1;NFSU2_TR(0x53002a);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x53011cull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B530031:L530031:{c.instructions+=7;NFSU2_TR(0x530031);
__builtin_memmove((R+8),gp(0x8389b0),4);
}
B530037:{NFSU2_TR(0x530037);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B530038:{NFSU2_TR(0x530038);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B530039:{NFSU2_TR(0x530039);
w4(R+4,u32(0x20ull));
}
B53003e:{NFSU2_TR(0x53003e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53003f:{NFSU2_TR(0x53003f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B530040:{NFSU2_TR(0x530040);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x530045ull));
TAIL_STATIC(0x52a010u,52a);
}
B530045:L530045:{c.instructions+=1;NFSU2_TR(0x530045);
{goto L5300d6;}
}
B53004a:L53004a:{c.instructions+=7;NFSU2_TR(0x53004a);
__builtin_memmove((R+8),gp(0x8389b0),4);
}
B530050:{NFSU2_TR(0x530050);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B530051:{NFSU2_TR(0x530051);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B530052:{NFSU2_TR(0x530052);
w4(R+4,u32(0x40ull));
}
B530057:{NFSU2_TR(0x530057);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B530058:{NFSU2_TR(0x530058);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B530059:{NFSU2_TR(0x530059);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53005eull));
TAIL_STATIC(0x52a010u,52a);
}
B53005e:L53005e:{c.instructions+=1;NFSU2_TR(0x53005e);
{goto L5300d6;}
}
B530060:L530060:{c.instructions+=7;NFSU2_TR(0x530060);
__builtin_memmove((R+8),gp(0x8389b0),4);
}
B530066:{NFSU2_TR(0x530066);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B530067:{NFSU2_TR(0x530067);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B530068:{NFSU2_TR(0x530068);
w4(R+4,u32(0x8ull));
}
B53006d:{NFSU2_TR(0x53006d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53006e:{NFSU2_TR(0x53006e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53006f:{NFSU2_TR(0x53006f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x530074ull));
TAIL_STATIC(0x52a010u,52a);
}
B530074:L530074:{c.instructions+=1;NFSU2_TR(0x530074);
{goto L5300d6;}
}
B530076:L530076:{c.instructions+=7;NFSU2_TR(0x530076);
__builtin_memmove((R+8),gp(0x8389b0),4);
}
B53007c:{NFSU2_TR(0x53007c);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53007d:{NFSU2_TR(0x53007d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53007e:{NFSU2_TR(0x53007e);
w4(R+4,u32(0x10ull));
}
B530083:{NFSU2_TR(0x530083);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B530084:{NFSU2_TR(0x530084);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B530085:{NFSU2_TR(0x530085);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53008aull));
TAIL_STATIC(0x52a010u,52a);
}
B53008a:L53008a:{c.instructions+=1;NFSU2_TR(0x53008a);
{goto L5300d6;}
}
B53008c:L53008c:{c.instructions+=7;NFSU2_TR(0x53008c);
__builtin_memmove((R+8),gp(0x8389b0),4);
}
B530092:{NFSU2_TR(0x530092);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B530093:{NFSU2_TR(0x530093);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B530094:{NFSU2_TR(0x530094);
w4(R+4,u32(0x100ull));
}
B530099:{NFSU2_TR(0x530099);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53009a:{NFSU2_TR(0x53009a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53009b:{NFSU2_TR(0x53009b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5300a0ull));
TAIL_STATIC(0x52a010u,52a);
}
B5300a0:L5300a0:{c.instructions+=1;NFSU2_TR(0x5300a0);
{goto L5300d6;}
}
B5300a2:L5300a2:{c.instructions+=1;NFSU2_TR(0x5300a2);
w4(R+4,u32(0x80ull));
}
B5300a7:L5300a7:{c.instructions+=6;NFSU2_TR(0x5300a7);
__builtin_memmove((R+8),gp(0x8389b0),4);
}
B5300ad:{NFSU2_TR(0x5300ad);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5300ae:{NFSU2_TR(0x5300ae);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5300af:{NFSU2_TR(0x5300af);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5300b0:{NFSU2_TR(0x5300b0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5300b1:{NFSU2_TR(0x5300b1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5300b6ull));
TAIL_STATIC(0x52a010u,52a);
}
B5300b6:L5300b6:{c.instructions+=1;NFSU2_TR(0x5300b6);
{goto L5300d6;}
}
B5300b8:L5300b8:{c.instructions+=3;NFSU2_TR(0x5300b8);
__builtin_memmove((R+4),gp(0x838464),1);
}
B5300be:{NFSU2_TR(0x5300be);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5300c0:{NFSU2_TR(0x5300c0);
if(r1(R+518)){{goto L5300c6;}}
}
B5300c2:L5300c2:{c.instructions+=2;NFSU2_TR(0x5300c2);
w1(R+12,u8(0x1ull));
}
B5300c4:{NFSU2_TR(0x5300c4);
{goto L5300db;}
}
B5300c6:L5300c6:{c.instructions+=6;NFSU2_TR(0x5300c6);
__builtin_memmove((R+4),gp(0x8389b0),4);
}
B5300cc:{NFSU2_TR(0x5300cc);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5300cd:{NFSU2_TR(0x5300cd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5300ce:{NFSU2_TR(0x5300ce);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5300cf:{NFSU2_TR(0x5300cf);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5300d1:{NFSU2_TR(0x5300d1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5300d6ull));
TAIL_STATIC(0x529d60u,529);
}
B5300d6:L5300d6:{c.instructions+=1;NFSU2_TR(0x5300d6);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B5300d9:L5300d9:{c.instructions+=1;NFSU2_TR(0x5300d9);
__builtin_memmove((R+12),(R+0),1);
}
B5300db:L5300db:{c.instructions+=2;NFSU2_TR(0x5300db);
u8 U[4];
w4(U+0,u32(0x54ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5300dd:{NFSU2_TR(0x5300dd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5300e2ull));
TAIL_STATIC(0x575620u,575);
}
B5300e2:L5300e2:{c.instructions+=3;NFSU2_TR(0x5300e2);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5300e5:{NFSU2_TR(0x5300e5);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5300e7:{NFSU2_TR(0x5300e7);
if(r1(R+518)){{goto L5300ff;}}
}
B5300e9:L5300e9:{c.instructions+=9;NFSU2_TR(0x5300e9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5300ec:{NFSU2_TR(0x5300ec);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5300ef:{NFSU2_TR(0x5300ef);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5300f0:{NFSU2_TR(0x5300f0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5300f3:{NFSU2_TR(0x5300f3);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5300f4:{NFSU2_TR(0x5300f4);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5300f5:{NFSU2_TR(0x5300f5);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5300f6:{NFSU2_TR(0x5300f6);
__builtin_memmove((R+4),(R+0),4);
}
B5300f8:{NFSU2_TR(0x5300f8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5300fdull));
TAIL_STATIC(0x520f90u,520);
}
B5300fd:L5300fd:{c.instructions+=1;NFSU2_TR(0x5300fd);
{goto L530101;}
}
B5300ff:L5300ff:{c.instructions+=1;NFSU2_TR(0x5300ff);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B530101:L530101:{c.instructions+=7;NFSU2_TR(0x530101);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+12))&u32(r1(R+12))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B530103:{NFSU2_TR(0x530103);
__builtin_memmove((R+4),(R+518),1);
}
B530106:{NFSU2_TR(0x530106);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x22ull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B530109:{NFSU2_TR(0x530109);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B53010c:{NFSU2_TR(0x53010c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B53010e:{NFSU2_TR(0x53010e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53010f:{NFSU2_TR(0x53010f);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x530112ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B530112:L530112:{c.instructions+=6;NFSU2_TR(0x530112);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B530113:{NFSU2_TR(0x530113);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B530114:{NFSU2_TR(0x530114);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B530115:{NFSU2_TR(0x530115);
__builtin_memmove((R+16),(R+20),4);
}
B530117:{NFSU2_TR(0x530117);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B530118:{NFSU2_TR(0x530118);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B530140:L530140:{c.instructions+=5;NFSU2_TR(0x530140);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B530141:{NFSU2_TR(0x530141);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x940ull))));
__builtin_memmove((R+24),(U+0),4);
}
B530147:{NFSU2_TR(0x530147);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B530148:{NFSU2_TR(0x530148);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x50ull))));
}
B53014b:{NFSU2_TR(0x53014b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x530150ull));
TAIL_STATIC(0x413440u,413);
}
B530150:L530150:{c.instructions+=4;NFSU2_TR(0x530150);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B530152:{NFSU2_TR(0x530152);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B530154:{NFSU2_TR(0x530154);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B530155:{NFSU2_TR(0x530155);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53015aull));
TAIL_STATIC(0x4d8ec0u,4d8);
}
B53015a:L53015a:{c.instructions+=3;NFSU2_TR(0x53015a);
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
B53015d:{NFSU2_TR(0x53015d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B53015e:{NFSU2_TR(0x53015e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B530160:L530160:{c.instructions+=8;NFSU2_TR(0x530160);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B530161:{NFSU2_TR(0x530161);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B530162:{NFSU2_TR(0x530162);
__builtin_memmove((R+12),(R+4),4);
}
B530164:{NFSU2_TR(0x530164);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B530167:{NFSU2_TR(0x530167);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B530168:{NFSU2_TR(0x530168);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x48ull))));
__builtin_memmove((R+28),(U+0),4);
}
B53016b:{NFSU2_TR(0x53016b);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
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
B53016d:{NFSU2_TR(0x53016d);
if(r1(R+518)){{goto L53021c;}}
}
B530173:L530173:{c.instructions+=2;NFSU2_TR(0x530173);
u8 U[18];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((U+10),(U+0),4);
w1(R+512,u8((r4(U+10))<(r4(R+28))));
w1(R+523,sborrow<u32>(r4(U+10),r4(R+28)));
w4(U+14,u32(u32(r4(U+10))-u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+14))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+14))==(u32(0x0ull))));
w4(U+4,u32(u32(r4(U+14))&u32(u32(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r4(U+4)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B530175:{NFSU2_TR(0x530175);
if(r1(R+518)){{goto L53021c;}}
}
B53017b:L53017b:{c.instructions+=3;NFSU2_TR(0x53017b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B53017e:{NFSU2_TR(0x53017e);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x61ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x61ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B530181:{NFSU2_TR(0x530181);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L53018a;}}
}
B530183:L530183:{c.instructions+=2;NFSU2_TR(0x530183);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0x98ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x98ull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0x98ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B530188:{NFSU2_TR(0x530188);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L530198;}}
}
B53018a:L53018a:{c.instructions+=2;NFSU2_TR(0x53018a);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x34ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x34ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B53018d:{NFSU2_TR(0x53018d);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L530212;}}
}
B530193:L530193:{c.instructions+=2;NFSU2_TR(0x530193);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0x3eull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x3eull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x3eull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B530196:{NFSU2_TR(0x530196);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L530212;}}
}
B530198:L530198:{c.instructions+=3;NFSU2_TR(0x530198);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B530199:{NFSU2_TR(0x530199);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x940ull))));
__builtin_memmove((R+4),(U+0),4);
}
B53019f:{NFSU2_TR(0x53019f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5301a4ull));
TAIL_STATIC(0x6102f0u,610);
}
B5301a4:L5301a4:{c.instructions+=3;NFSU2_TR(0x5301a4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5301a7:{NFSU2_TR(0x5301a7);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5301a9:{NFSU2_TR(0x5301a9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L530212;}}
}
B5301ab:L5301ab:{c.instructions+=2;NFSU2_TR(0x5301ab);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5301ad:{NFSU2_TR(0x5301ad);
if(r1(R+518)){{goto L5301fb;}}
}
B5301af:L5301af:{c.instructions+=4;NFSU2_TR(0x5301af);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5301b2:{NFSU2_TR(0x5301b2);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xffffffccull))));
}
B5301b5:{NFSU2_TR(0x5301b5);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0xaull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0xaull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0xaull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5301b8:{NFSU2_TR(0x5301b8);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L5301fb;}}
}
B5301ba:L5301ba:{c.instructions+=2;NFSU2_TR(0x5301ba);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x530230ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B5301c1:{NFSU2_TR(0x5301c1);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x530220ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5301c8:L5301c8:{c.instructions+=2;NFSU2_TR(0x5301c8);
w4(R+4,u32(0x61ull));
}
B5301cd:{NFSU2_TR(0x5301cd);
{goto L5301db;}
}
B5301cf:L5301cf:{c.instructions+=2;NFSU2_TR(0x5301cf);
w4(R+4,u32(0x89ull));
}
B5301d4:{NFSU2_TR(0x5301d4);
{goto L5301db;}
}
B5301d6:L5301d6:{c.instructions+=1;NFSU2_TR(0x5301d6);
w4(R+4,u32(0x91ull));
}
B5301db:L5301db:{c.instructions+=4;NFSU2_TR(0x5301db);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5301dd:{NFSU2_TR(0x5301dd);
w1(R+8,u8(u32(r1(R+8))^u32(r1(R+8))));
}
B5301df:{NFSU2_TR(0x5301df);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5301e1:{NFSU2_TR(0x5301e1);
if(r1(R+518)){{goto L5301f2;}}
}
B5301e3:L5301e3:{c.instructions+=2;NFSU2_TR(0x5301e3);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+4))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B5301e6:{NFSU2_TR(0x5301e6);
if(r1(R+518)){{goto L5301f0;}}
}
B5301e8:L5301e8:{c.instructions+=3;NFSU2_TR(0x5301e8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5301ea:{NFSU2_TR(0x5301ea);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5301ec:{NFSU2_TR(0x5301ec);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5301e3u);}goto L5301e3;}}
}
B5301ee:L5301ee:{c.instructions+=1;NFSU2_TR(0x5301ee);
{goto L5301f2;}
}
B5301f0:L5301f0:{c.instructions+=1;NFSU2_TR(0x5301f0);
w1(R+8,u8(0x1ull));
}
B5301f2:L5301f2:{c.instructions+=4;NFSU2_TR(0x5301f2);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(r1(R+8))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5301f4:{NFSU2_TR(0x5301f4);
__builtin_memmove((R+0),(R+518),1);
}
B5301f7:{NFSU2_TR(0x5301f7);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5301f9:{NFSU2_TR(0x5301f9);
if(r1(R+518)){{goto L530212;}}
}
B5301fb:L5301fb:{c.instructions+=6;NFSU2_TR(0x5301fb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5301fd:{NFSU2_TR(0x5301fd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B530200:{NFSU2_TR(0x530200);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B530202:{NFSU2_TR(0x530202);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B530203:{NFSU2_TR(0x530203);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B530206:{NFSU2_TR(0x530206);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53020bull));
TAIL_STATIC(0x575630u,575);
}
B53020b:L53020b:{c.instructions+=3;NFSU2_TR(0x53020b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+24),(U+0),4);
}
B53020d:{NFSU2_TR(0x53020d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B530210:{NFSU2_TR(0x530210);
{goto L530214;}
}
B530212:L530212:{c.instructions+=1;NFSU2_TR(0x530212);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+24),(U+0),4);
}
B530214:L530214:{c.instructions+=2;NFSU2_TR(0x530214);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
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
B530216:{NFSU2_TR(0x530216);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x530173u);}goto L530173;}}
}
B53021c:L53021c:{c.instructions+=4;NFSU2_TR(0x53021c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B53021d:{NFSU2_TR(0x53021d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B53021e:{NFSU2_TR(0x53021e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B53021f:{NFSU2_TR(0x53021f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B530240:L530240:{c.instructions+=6;NFSU2_TR(0x530240);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B530241:{NFSU2_TR(0x530241);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B530244:{NFSU2_TR(0x530244);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B530245:{NFSU2_TR(0x530245);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x48ull))));
__builtin_memmove((R+28),(U+0),4);
}
B530248:{NFSU2_TR(0x530248);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
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
B53024a:{NFSU2_TR(0x53024a);
if(r1(R+518)){{goto L53028c;}}
}
B53024c:L53024c:{c.instructions+=1;NFSU2_TR(0x53024c);
__builtin_memmove((R+16),(R+16),4);
}
B530250:L530250:{c.instructions+=2;NFSU2_TR(0x530250);
u8 U[18];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((U+10),(U+0),4);
w1(R+512,u8((r4(U+10))<(r4(R+28))));
w1(R+523,sborrow<u32>(r4(U+10),r4(R+28)));
w4(U+14,u32(u32(r4(U+10))-u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+14))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+14))==(u32(0x0ull))));
w4(U+4,u32(u32(r4(U+14))&u32(u32(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r4(U+4)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B530252:{NFSU2_TR(0x530252);
if(r1(R+518)){{goto L53028c;}}
}
B530254:L530254:{c.instructions+=3;NFSU2_TR(0x530254);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B530257:{NFSU2_TR(0x530257);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x61ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x61ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B53025a:{NFSU2_TR(0x53025a);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L530263;}}
}
B53025c:L53025c:{c.instructions+=2;NFSU2_TR(0x53025c);
u8 U[4];
w1(R+523,sborrow<u32>(r4(R+0),u32(0x98ull)));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x98ull))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B530261:{NFSU2_TR(0x530261);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L530271;}}
}
B530263:L530263:{c.instructions+=2;NFSU2_TR(0x530263);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x34ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x34ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B530266:{NFSU2_TR(0x530266);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L53026d;}}
}
B530268:L530268:{c.instructions+=2;NFSU2_TR(0x530268);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x3eull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3eull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B53026b:{NFSU2_TR(0x53026b);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L530271;}}
}
B53026d:L53026d:{c.instructions+=2;NFSU2_TR(0x53026d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+24),(U+0),4);
}
B53026f:{NFSU2_TR(0x53026f);
{goto L530288;}
}
B530271:L530271:{c.instructions+=8;NFSU2_TR(0x530271);
__builtin_memmove((R+0),(R+24),4);
}
B530273:{NFSU2_TR(0x530273);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B530275:{NFSU2_TR(0x530275);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B530278:{NFSU2_TR(0x530278);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+24),(U+0),4);
}
B53027a:{NFSU2_TR(0x53027a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+8)),r4(U+0));
}
B53027c:{NFSU2_TR(0x53027c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53027d:{NFSU2_TR(0x53027d);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B530280:{NFSU2_TR(0x530280);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x530285ull));
TAIL_STATIC(0x575630u,575);
}
B530285:L530285:{c.instructions+=1;NFSU2_TR(0x530285);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B530288:L530288:{c.instructions+=2;NFSU2_TR(0x530288);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
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
B53028a:{NFSU2_TR(0x53028a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x530250u);}goto L530250;}}
}
B53028c:L53028c:{c.instructions+=3;NFSU2_TR(0x53028c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B53028d:{NFSU2_TR(0x53028d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B53028e:{NFSU2_TR(0x53028e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B530290:L530290:{c.instructions+=6;NFSU2_TR(0x530290);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B530291:{NFSU2_TR(0x530291);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B530295:{NFSU2_TR(0x530295);
u8 U[14];
__builtin_memmove((U+6),(R+12),4);
w1(R+512,u8((r4(U+6))<(u32(0x61ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x61ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x61ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B530298:{NFSU2_TR(0x530298);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B530299:{NFSU2_TR(0x530299);
__builtin_memmove((R+20),(R+4),4);
}
B53029b:{NFSU2_TR(0x53029b);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L530326;}}
}
B5302a1:L5302a1:{c.instructions+=2;NFSU2_TR(0x5302a1);
u8 U[14];
__builtin_memmove((U+6),(R+12),4);
w1(R+512,u8((r4(U+6))<(u32(0x98ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x98ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x98ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5302a7:{NFSU2_TR(0x5302a7);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L530326;}}
}
B5302a9:L5302a9:{c.instructions+=6;NFSU2_TR(0x5302a9);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5302aa:{NFSU2_TR(0x5302aa);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5302ad:{NFSU2_TR(0x5302ad);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5302ae:{NFSU2_TR(0x5302ae);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x48ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5302b1:{NFSU2_TR(0x5302b1);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
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
B5302b3:{NFSU2_TR(0x5302b3);
if(r1(R+518)){{goto L5302d9;}}
}
B5302b5:L5302b5:{c.instructions+=2;NFSU2_TR(0x5302b5);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B5302b8:{NFSU2_TR(0x5302b8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5302d3;}}
}
B5302ba:L5302ba:{c.instructions+=8;NFSU2_TR(0x5302ba);
__builtin_memmove((R+0),(R+24),4);
}
B5302bc:{NFSU2_TR(0x5302bc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5302be:{NFSU2_TR(0x5302be);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5302c1:{NFSU2_TR(0x5302c1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+24),(U+0),4);
}
B5302c3:{NFSU2_TR(0x5302c3);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+8)),r4(U+0));
}
B5302c5:{NFSU2_TR(0x5302c5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5302c6:{NFSU2_TR(0x5302c6);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5302c9:{NFSU2_TR(0x5302c9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5302ceull));
TAIL_STATIC(0x575630u,575);
}
B5302ce:L5302ce:{c.instructions+=2;NFSU2_TR(0x5302ce);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5302d1:{NFSU2_TR(0x5302d1);
{goto L5302d5;}
}
B5302d3:L5302d3:{c.instructions+=1;NFSU2_TR(0x5302d3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+24),(U+0),4);
}
B5302d5:L5302d5:{c.instructions+=2;NFSU2_TR(0x5302d5);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
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
B5302d7:{NFSU2_TR(0x5302d7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5302b5u);}goto L5302b5;}}
}
B5302d9:L5302d9:{c.instructions+=3;NFSU2_TR(0x5302d9);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5302da:{NFSU2_TR(0x5302da);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x940ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5302e0:{NFSU2_TR(0x5302e0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5302e5ull));
TAIL_STATIC(0x6102f0u,610);
}
B5302e5:L5302e5:{c.instructions+=2;NFSU2_TR(0x5302e5);
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
B5302e7:{NFSU2_TR(0x5302e7);
if(r1(R+518)){{goto L530324;}}
}
B5302e9:L5302e9:{c.instructions+=2;NFSU2_TR(0x5302e9);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5302eb:{NFSU2_TR(0x5302eb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5302f0ull));
TAIL_STATIC(0x575620u,575);
}
B5302f0:L5302f0:{c.instructions+=3;NFSU2_TR(0x5302f0);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5302f3:{NFSU2_TR(0x5302f3);
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
B5302f5:{NFSU2_TR(0x5302f5);
if(r1(R+518)){{goto L530315;}}
}
B5302f7:L5302f7:{c.instructions+=12;NFSU2_TR(0x5302f7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5302fa:{NFSU2_TR(0x5302fa);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B530301:{NFSU2_TR(0x530301);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B530304:{NFSU2_TR(0x530304);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B530306:{NFSU2_TR(0x530306);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B530309:{NFSU2_TR(0x530309);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
s4(u32(r4(R+0)),r4(U+0));
}
B53030b:{NFSU2_TR(0x53030b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B53030c:{NFSU2_TR(0x53030c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B53030d:{NFSU2_TR(0x53030d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B53030e:{NFSU2_TR(0x53030e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B530311:{NFSU2_TR(0x530311);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B530312:{NFSU2_TR(0x530312);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B530315:L530315:{c.instructions+=6;NFSU2_TR(0x530315);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B530318:{NFSU2_TR(0x530318);
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
B53031a:{NFSU2_TR(0x53031a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B53031c:{NFSU2_TR(0x53031c);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53031f:{NFSU2_TR(0x53031f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B530322:{NFSU2_TR(0x530322);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
s4(u32(r4(R+0)),r4(U+0));
}
B530324:L530324:{c.instructions+=2;NFSU2_TR(0x530324);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B530325:{NFSU2_TR(0x530325);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B530326:L530326:{c.instructions+=3;NFSU2_TR(0x530326);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B530327:{NFSU2_TR(0x530327);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B530328:{NFSU2_TR(0x530328);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B530330:L530330:{c.instructions+=7;NFSU2_TR(0x530330);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B530333:{NFSU2_TR(0x530333);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B530337:{NFSU2_TR(0x530337);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B53033b:{NFSU2_TR(0x53033b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53033c:{NFSU2_TR(0x53033c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53033d:{NFSU2_TR(0x53033d);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53033e:{NFSU2_TR(0x53033e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x530343ull));
TAIL_STATIC(0x50f0d0u,50f);
}
B530343:L530343:{c.instructions+=2;NFSU2_TR(0x530343);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B530344:{NFSU2_TR(0x530344);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x530349ull));
TAIL_STATIC(0x52a010u,52a);
}
B530349:L530349:{c.instructions+=2;NFSU2_TR(0x530349);
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
B53034c:{NFSU2_TR(0x53034c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B530350:L530350:{c.instructions+=5;NFSU2_TR(0x530350);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B530351:{NFSU2_TR(0x530351);
__builtin_memmove((R+20),(R+16),4);
}
B530353:{NFSU2_TR(0x530353);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B530356:{NFSU2_TR(0x530356);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B530358:{NFSU2_TR(0x530358);
if(r1(R+518)){{goto L5303b2;}}
}
B53035a:L53035a:{c.instructions+=9;NFSU2_TR(0x53035a);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53035b:{NFSU2_TR(0x53035b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53035c:{NFSU2_TR(0x53035c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53035d:{NFSU2_TR(0x53035d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+28),(U+0),4);
}
B53035f:{NFSU2_TR(0x53035f);
__builtin_memmove((R+0),gp(0x863480),4);
}
B530364:{NFSU2_TR(0x530364);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B530365:{NFSU2_TR(0x530365);
w4(R+4,u32(0x83ad90ull));
}
B53036a:{NFSU2_TR(0x53036a);
w1(R+12,u8(u32(r1(R+12))^u32(r1(R+12))));
}
B53036c:{NFSU2_TR(0x53036c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x530371ull));
TAIL_STATIC(0x503680u,503);
}
B530371:L530371:{c.instructions+=3;NFSU2_TR(0x530371);
__builtin_memmove((R+24),(R+0),4);
}
B530373:{NFSU2_TR(0x530373);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B530375:{NFSU2_TR(0x530375);
if(r1(R+518)){{goto L5303a5;}}
}
B530377:L530377:{c.instructions+=3;NFSU2_TR(0x530377);
__builtin_memmove((R+4),(R+28),4);
}
B530379:{NFSU2_TR(0x530379);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x80000007ull))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
}
B53037f:{NFSU2_TR(0x53037f);
u8 U[1];
w1(U+0,u8(!(r1(R+519))));
if(r1(U+0)){{goto L530386;}}
}
B530381:L530381:{c.instructions+=3;NFSU2_TR(0x530381);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
}
B530382:{NFSU2_TR(0x530382);
w4(R+4,u32(u32(r4(R+4))|u32(u32(0xfffffff8ull))));
}
B530385:{NFSU2_TR(0x530385);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B530386:L530386:{c.instructions+=10;NFSU2_TR(0x530386);
__builtin_memmove((R+0),(R+28),4);
}
B530388:{NFSU2_TR(0x530388);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B530389:{NFSU2_TR(0x530389);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0x7ull))));
}
B53038c:{NFSU2_TR(0x53038c);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+8))));
}
B53038e:{NFSU2_TR(0x53038e);
w4(R+12,u32(0x1ull));
}
B530393:{NFSU2_TR(0x530393);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+12,shl<u32>(r4(R+12),u64(r1(U+0))));
}
B530395:{NFSU2_TR(0x530395);
u8 U[4];
w4(U+0,u32(u32(u32(0x3ull))&u32(u32(0x1full))));
w4(R+0,sar<u32>(r4(R+0),u64(r4(U+0))));
}
B530398:{NFSU2_TR(0x530398);
u8 U[13];
w4(U+0,u32(u32(u32(0x590ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
w4(R+4,u32(s32(s8(r1(U+12)))));
}
B5303a0:{NFSU2_TR(0x5303a0);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5303a2:{NFSU2_TR(0x5303a2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+12),(U+0),1);
}
B5303a5:L5303a5:{c.instructions+=5;NFSU2_TR(0x5303a5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5303a6:{NFSU2_TR(0x5303a6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5303a7:{NFSU2_TR(0x5303a7);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+12))&u32(r1(R+12))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5303a9:{NFSU2_TR(0x5303a9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5303aa:{NFSU2_TR(0x5303aa);
if(r1(R+518)){{goto L5303b2;}}
}
B5303ac:L5303ac:{c.instructions+=3;NFSU2_TR(0x5303ac);
w1(R+0,u8(0x1ull));
}
B5303ae:{NFSU2_TR(0x5303ae);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5303af:{NFSU2_TR(0x5303af);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5303b2:L5303b2:{c.instructions+=3;NFSU2_TR(0x5303b2);
u8 U[3];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(R+0,u8(u32(r1(R+0))^u32(r1(R+0))));
w1(R+519,u8(s8(r1(R+0))<s8(u8(0x0ull))));
w1(R+518,u8((r1(R+0))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(R+0))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5303b4:{NFSU2_TR(0x5303b4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5303b5:{NFSU2_TR(0x5303b5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5303c0:L5303c0:{c.instructions+=11;NFSU2_TR(0x5303c0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5303c1:{NFSU2_TR(0x5303c1);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5303c2:{NFSU2_TR(0x5303c2);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5303c3:{NFSU2_TR(0x5303c3);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5303c7:{NFSU2_TR(0x5303c7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5303ca:{NFSU2_TR(0x5303ca);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B5303cc:{NFSU2_TR(0x5303cc);
w1(R+12,u8(u32(r1(R+12))^u32(r1(R+12))));
}
B5303ce:{NFSU2_TR(0x5303ce);
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
B5303d0:{NFSU2_TR(0x5303d0);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5303d1:{NFSU2_TR(0x5303d1);
__builtin_memmove((R+28),(R+4),4);
}
B5303d3:{NFSU2_TR(0x5303d3);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L5303f7;}}
}
B5303d5:L5303d5:{c.instructions+=1;NFSU2_TR(0x5303d5);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5303d7:L5303d7:{c.instructions+=5;NFSU2_TR(0x5303d7);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x5cull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B5303da:{NFSU2_TR(0x5303da);
u8 U[12];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B5303de:{NFSU2_TR(0x5303de);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5303df:{NFSU2_TR(0x5303df);
__builtin_memmove((R+4),(R+28),4);
}
B5303e1:{NFSU2_TR(0x5303e1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5303e6ull));
TAIL_STATIC(0x521c10u,521);
}
B5303e6:L5303e6:{c.instructions+=2;NFSU2_TR(0x5303e6);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5303e8:{NFSU2_TR(0x5303e8);
if(r1(R+518)){{goto L5303eb;}}
}
B5303ea:L5303ea:{c.instructions+=1;NFSU2_TR(0x5303ea);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x1ull))));
}
B5303eb:L5303eb:{c.instructions+=5;NFSU2_TR(0x5303eb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5303ee:{NFSU2_TR(0x5303ee);
w1(R+12,u8(u32(r1(R+12))+u32(u8(0x1ull))));
}
B5303f0:{NFSU2_TR(0x5303f0);
w4(R+0,u32(r1(R+12)));
}
B5303f3:{NFSU2_TR(0x5303f3);
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
B5303f5:{NFSU2_TR(0x5303f5);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5303d7u);}goto L5303d7;}}
}
B5303f7:L5303f7:{c.instructions+=6;NFSU2_TR(0x5303f7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5303f8:{NFSU2_TR(0x5303f8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5303f9:{NFSU2_TR(0x5303f9);
__builtin_memmove((R+0),(R+20),4);
}
B5303fb:{NFSU2_TR(0x5303fb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5303fc:{NFSU2_TR(0x5303fc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5303fd:{NFSU2_TR(0x5303fd);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B530400:L530400:{c.instructions+=12;NFSU2_TR(0x530400);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B530401:{NFSU2_TR(0x530401);
__builtin_memmove((R+20),(R+16),4);
}
B530403:{NFSU2_TR(0x530403);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x8ull))));
}
B530406:{NFSU2_TR(0x530406);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B530407:{NFSU2_TR(0x530407);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B530408:{NFSU2_TR(0x530408);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B530409:{NFSU2_TR(0x530409);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B53040c:{NFSU2_TR(0x53040c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53040f:{NFSU2_TR(0x53040f);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffffull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B530413:{NFSU2_TR(0x530413);
w4(R+24,u32(0x1ull));
}
B530418:{NFSU2_TR(0x530418);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B53041a:{NFSU2_TR(0x53041a);
__builtin_memmove((R+12),(R+12),4);
}
B530420:L530420:{c.instructions+=3;NFSU2_TR(0x530420);
u8 U[8];
__builtin_memmove((U+0),gp(0x863444),4);
w4(U+4,u32(u32(r4(U+0))-u32(r4(R+12))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B530426:{NFSU2_TR(0x530426);
w4(R+0,u32(0x4ull));
}
B53042b:{NFSU2_TR(0x53042b);
if(r1(R+518)){{goto L530445;}}
}
B53042d:L53042d:{c.instructions+=3;NFSU2_TR(0x53042d);
__builtin_memmove((R+4),gp(0x86344c),4);
}
B530433:{NFSU2_TR(0x530433);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B530435:{NFSU2_TR(0x530435);
if(r1(R+518)){{goto L530445;}}
}
B530437:L530437:{c.instructions+=2;NFSU2_TR(0x530437);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x7fc8d0d0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B53043e:{NFSU2_TR(0x53043e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L530445;}}
}
B530440:L530440:{c.instructions+=1;NFSU2_TR(0x530440);
w4(R+0,u32(0x3ull));
}
B530445:L530445:{c.instructions+=2;NFSU2_TR(0x530445);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B530447:{NFSU2_TR(0x530447);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L530469;}}
}
B530449:L530449:{c.instructions+=5;NFSU2_TR(0x530449);
__builtin_memmove((R+0),gp(0x8389b0),4);
}
B53044e:{NFSU2_TR(0x53044e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53044f:{NFSU2_TR(0x53044f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B530450:{NFSU2_TR(0x530450);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B530451:{NFSU2_TR(0x530451);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x530456ull));
TAIL_STATIC(0x50f0d0u,50f);
}
B530456:L530456:{c.instructions+=2;NFSU2_TR(0x530456);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B530457:{NFSU2_TR(0x530457);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53045cull));
TAIL_STATIC(0x52a110u,52a);
}
B53045c:L53045c:{c.instructions+=3;NFSU2_TR(0x53045c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B53045f:{NFSU2_TR(0x53045f);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B530461:{NFSU2_TR(0x530461);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L530466;}}
}
B530463:L530463:{c.instructions+=2;NFSU2_TR(0x530463);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B530464:{NFSU2_TR(0x530464);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x530420u);}goto L530420;}
}
B530466:L530466:{c.instructions+=1;NFSU2_TR(0x530466);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffffull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B530469:L530469:{c.instructions+=2;NFSU2_TR(0x530469);
u8 U[4];
w4(U+0,u32(0x4cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53046b:{NFSU2_TR(0x53046b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x530470ull));
TAIL_STATIC(0x575620u,575);
}
B530470:L530470:{c.instructions+=3;NFSU2_TR(0x530470);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B530473:{NFSU2_TR(0x530473);
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
B530475:{NFSU2_TR(0x530475);
if(r1(R+518)){{goto L5304d3;}}
}
B530477:L530477:{c.instructions+=26;NFSU2_TR(0x530477);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B53047a:{NFSU2_TR(0x53047a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B53047d:{NFSU2_TR(0x53047d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B530480:{NFSU2_TR(0x530480);
w4(R+4,u32(0x3f800000ull));
}
B530485:{NFSU2_TR(0x530485);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x34ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B530488:{NFSU2_TR(0x530488);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53048b:{NFSU2_TR(0x53048b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53048e:{NFSU2_TR(0x53048e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x40ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B530491:{NFSU2_TR(0x530491);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffffull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B530494:{NFSU2_TR(0x530494);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x22ull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B530497:{NFSU2_TR(0x530497);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B53049a:{NFSU2_TR(0x53049a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53049d:{NFSU2_TR(0x53049d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5304a0:{NFSU2_TR(0x5304a0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5304a3:{NFSU2_TR(0x5304a3);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5304a6:{NFSU2_TR(0x5304a6);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x21ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5304aa:{NFSU2_TR(0x5304aa);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x23ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5304ad:{NFSU2_TR(0x5304ad);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5304b0:{NFSU2_TR(0x5304b0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5304b3:{NFSU2_TR(0x5304b3);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x44ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5304b7:{NFSU2_TR(0x5304b7);
u8 U[4];
w4(U+0,u32(0x79b5acull));
s4(u32(r4(R+0)),r4(U+0));
}
B5304bd:{NFSU2_TR(0x5304bd);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x45ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5304c1:{NFSU2_TR(0x5304c1);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x48ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5304c4:{NFSU2_TR(0x5304c4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5304c6:{NFSU2_TR(0x5304c6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5304c7:{NFSU2_TR(0x5304c7);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5304caull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5304ca:L5304ca:{c.instructions+=6;NFSU2_TR(0x5304ca);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5304cb:{NFSU2_TR(0x5304cb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5304cc:{NFSU2_TR(0x5304cc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5304cd:{NFSU2_TR(0x5304cd);
__builtin_memmove((R+16),(R+20),4);
}
B5304cf:{NFSU2_TR(0x5304cf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5304d0:{NFSU2_TR(0x5304d0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5304d3:L5304d3:{c.instructions+=5;NFSU2_TR(0x5304d3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5304d6:{NFSU2_TR(0x5304d6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5304d8:{NFSU2_TR(0x5304d8);
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
B5304da:{NFSU2_TR(0x5304da);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5304db:{NFSU2_TR(0x5304db);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5304deull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5304de:L5304de:{c.instructions+=6;NFSU2_TR(0x5304de);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5304df:{NFSU2_TR(0x5304df);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5304e0:{NFSU2_TR(0x5304e0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5304e1:{NFSU2_TR(0x5304e1);
__builtin_memmove((R+16),(R+20),4);
}
B5304e3:{NFSU2_TR(0x5304e3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5304e4:{NFSU2_TR(0x5304e4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5304f0:L5304f0:{c.instructions+=6;NFSU2_TR(0x5304f0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5304f1:{NFSU2_TR(0x5304f1);
u8 U[4];
w4(U+0,u32(0x26eea5eull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5304f6:{NFSU2_TR(0x5304f6);
u8 U[4];
w4(U+0,u32(0xc15c94e6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5304fb:{NFSU2_TR(0x5304fb);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5304fd:{NFSU2_TR(0x5304fd);
__builtin_memmove((R+24),(R+4),4);
}
B5304ff:{NFSU2_TR(0x5304ff);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x530504ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x530400u);}goto L530400;}
}
B530504:L530504:{c.instructions+=5;NFSU2_TR(0x530504);
u8 U[4];
w4(U+0,u32(0xa7884765ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B530509:{NFSU2_TR(0x530509);
u8 U[4];
w4(U+0,u32(0x502abeedull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53050e:{NFSU2_TR(0x53050e);
u8 U[4];
w4(U+0,u32(0x7ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B530510:{NFSU2_TR(0x530510);
__builtin_memmove((R+4),(R+24),4);
}
B530512:{NFSU2_TR(0x530512);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x530517ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x530400u);}goto L530400;}
}
B530517:L530517:{c.instructions+=5;NFSU2_TR(0x530517);
u8 U[4];
w4(U+0,u32(0x73ad2f72ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53051c:{NFSU2_TR(0x53051c);
u8 U[4];
w4(U+0,u32(0x1a29ffaull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B530521:{NFSU2_TR(0x530521);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B530523:{NFSU2_TR(0x530523);
__builtin_memmove((R+4),(R+24),4);
}
B530525:{NFSU2_TR(0x530525);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53052aull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x530400u);}goto L530400;}
}
B53052a:L53052a:{c.instructions+=5;NFSU2_TR(0x53052a);
u8 U[4];
w4(U+0,u32(0x9c34c75full));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53052f:{NFSU2_TR(0x53052f);
u8 U[4];
w4(U+0,u32(0x178475e7ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B530534:{NFSU2_TR(0x530534);
u8 U[4];
w4(U+0,u32(0x5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B530536:{NFSU2_TR(0x530536);
__builtin_memmove((R+4),(R+24),4);
}
B530538:{NFSU2_TR(0x530538);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53053dull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x530400u);}goto L530400;}
}
B53053d:L53053d:{c.instructions+=5;NFSU2_TR(0x53053d);
u8 U[4];
w4(U+0,u32(0xa7886f38ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B530542:{NFSU2_TR(0x530542);
u8 U[4];
w4(U+0,u32(0x9701bde4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B530547:{NFSU2_TR(0x530547);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B530549:{NFSU2_TR(0x530549);
__builtin_memmove((R+4),(R+24),4);
}
B53054b:{NFSU2_TR(0x53054b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x530550ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x530400u);}goto L530400;}
}
B530550:L530550:{c.instructions+=5;NFSU2_TR(0x530550);
u8 U[4];
w4(U+0,u32(0xabca6aefull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B530555:{NFSU2_TR(0x530555);
u8 U[4];
w4(U+0,u32(0x6e8e477ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53055a:{NFSU2_TR(0x53055a);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53055c:{NFSU2_TR(0x53055c);
__builtin_memmove((R+4),(R+24),4);
}
B53055e:{NFSU2_TR(0x53055e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x530563ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x530400u);}goto L530400;}
}
B530563:L530563:{c.instructions+=5;NFSU2_TR(0x530563);
u8 U[4];
w4(U+0,u32(0xaa8959adull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B530568:{NFSU2_TR(0x530568);
u8 U[4];
w4(U+0,u32(0xbaa23a28ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53056d:{NFSU2_TR(0x53056d);
u8 U[4];
w4(U+0,u32(0x6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53056f:{NFSU2_TR(0x53056f);
__builtin_memmove((R+4),(R+24),4);
}
B530571:{NFSU2_TR(0x530571);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x530576ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x530400u);}goto L530400;}
}
B530576:L530576:{c.instructions+=5;NFSU2_TR(0x530576);
u8 U[4];
w4(U+0,u32(0x758d5e3cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53057b:{NFSU2_TR(0x53057b);
u8 U[4];
w4(U+0,u32(0xea57d2c4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B530580:{NFSU2_TR(0x530580);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B530582:{NFSU2_TR(0x530582);
__builtin_memmove((R+4),(R+24),4);
}
B530584:{NFSU2_TR(0x530584);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x530589ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x530400u);}goto L530400;}
}
B530589:L530589:{c.instructions+=5;NFSU2_TR(0x530589);
u8 U[4];
w4(U+0,u32(0xabd0ff14ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53058e:{NFSU2_TR(0x53058e);
u8 U[4];
w4(U+0,u32(0x6ef789cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B530593:{NFSU2_TR(0x530593);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B530595:{NFSU2_TR(0x530595);
__builtin_memmove((R+4),(R+24),4);
}
B530597:{NFSU2_TR(0x530597);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53059cull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x530400u);}goto L530400;}
}
B53059c:L53059c:{c.instructions+=2;NFSU2_TR(0x53059c);
u8 U[8];
__builtin_memmove((U+0),gp(0x850078),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5305a3:{NFSU2_TR(0x5305a3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5305db;}}
}
B5305a5:L5305a5:{c.instructions+=3;NFSU2_TR(0x5305a5);
__builtin_memmove((R+0),gp(0x83898c),4);
}
B5305aa:{NFSU2_TR(0x5305aa);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5305ac:{NFSU2_TR(0x5305ac);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5305db;}}
}
B5305ae:L5305ae:{c.instructions+=2;NFSU2_TR(0x5305ae);
u8 U[4];
w4(U+0,u32(0x48ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5305b0:{NFSU2_TR(0x5305b0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5305b5ull));
TAIL_STATIC(0x575620u,575);
}
B5305b5:L5305b5:{c.instructions+=3;NFSU2_TR(0x5305b5);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5305b8:{NFSU2_TR(0x5305b8);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5305ba:{NFSU2_TR(0x5305ba);
if(r1(R+518)){{goto L5305d1;}}
}
B5305bc:L5305bc:{c.instructions+=5;NFSU2_TR(0x5305bc);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5305be:{NFSU2_TR(0x5305be);
u8 U[4];
w4(U+0,u32(0x8513f2c0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5305c3:{NFSU2_TR(0x5305c3);
u8 U[4];
w4(U+0,u32(0x7a9b397aull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5305c8:{NFSU2_TR(0x5305c8);
__builtin_memmove((R+4),(R+0),4);
}
B5305ca:{NFSU2_TR(0x5305ca);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5305cfull));
TAIL_STATIC(0x520d10u,520);
}
B5305cf:L5305cf:{c.instructions+=1;NFSU2_TR(0x5305cf);
{goto L5305d3;}
}
B5305d1:L5305d1:{c.instructions+=1;NFSU2_TR(0x5305d1);
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
B5305d3:L5305d3:{c.instructions+=4;NFSU2_TR(0x5305d3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5305d5:{NFSU2_TR(0x5305d5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5305d6:{NFSU2_TR(0x5305d6);
__builtin_memmove((R+4),(R+24),4);
}
B5305d8:{NFSU2_TR(0x5305d8);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5305dbull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5305db:L5305db:{c.instructions+=3;NFSU2_TR(0x5305db);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5305de:{NFSU2_TR(0x5305de);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5305df:{NFSU2_TR(0x5305df);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5305e4ull));
TAIL_STATIC(0x505450u,505);
}
B5305e4:L5305e4:{c.instructions+=2;NFSU2_TR(0x5305e4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5305e5:{NFSU2_TR(0x5305e5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5305eaull));
TAIL_STATIC(0x50b840u,50b);
}
B5305ea:L5305ea:{c.instructions+=3;NFSU2_TR(0x5305ea);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B5305ed:{NFSU2_TR(0x5305ed);
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
B5305ef:{NFSU2_TR(0x5305ef);
if(r1(R+518)){{goto L5305f6;}}
}
B5305f1:L5305f1:{c.instructions+=2;NFSU2_TR(0x5305f1);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5305f4:{NFSU2_TR(0x5305f4);
{goto L5305f8;}
}
B5305f6:L5305f6:{c.instructions+=1;NFSU2_TR(0x5305f6);
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
B5305f8:L5305f8:{c.instructions+=4;NFSU2_TR(0x5305f8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5305fb:{NFSU2_TR(0x5305fb);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((R+4),(U+0),4);
}
B5305fe:{NFSU2_TR(0x5305fe);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5305ff:{NFSU2_TR(0x5305ff);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x530602ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B530602:L530602:{c.instructions+=4;NFSU2_TR(0x530602);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B530604:{NFSU2_TR(0x530604);
__builtin_memmove((R+4),(R+24),4);
}
B530606:{NFSU2_TR(0x530606);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B530607:{NFSU2_TR(0x530607);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
{u32 t_=u32(r4(U+4));TAIL_DYNAMIC(t_);}
}
B530610:L530610:{c.instructions+=4;NFSU2_TR(0x530610);
u8 U[8];
__builtin_memmove((U+0),gp(0x850078),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B530617:{NFSU2_TR(0x530617);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B530618:{NFSU2_TR(0x530618);
__builtin_memmove((R+24),(R+4),4);
}
B53061a:{NFSU2_TR(0x53061a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L53062e;}}
}
B53061c:L53061c:{c.instructions+=4;NFSU2_TR(0x53061c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B53061f:{NFSU2_TR(0x53061f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B530620:{NFSU2_TR(0x530620);
w4(R+4,u32(0x838980ull));
}
B530625:{NFSU2_TR(0x530625);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53062aull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x530350u);}goto L530350;}
}
B53062a:L53062a:{c.instructions+=2;NFSU2_TR(0x53062a);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B53062c:{NFSU2_TR(0x53062c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L530642;}}
}
B53062e:L53062e:{c.instructions+=5;NFSU2_TR(0x53062e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B530631:{NFSU2_TR(0x530631);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B530633:{NFSU2_TR(0x530633);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B530634:{NFSU2_TR(0x530634);
w4(R+4,u32(0x8395b0ull));
}
B530639:{NFSU2_TR(0x530639);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53063eull));
TAIL_STATIC(0x599610u,599);
}
B53063e:L53063e:{c.instructions+=2;NFSU2_TR(0x53063e);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B530640:{NFSU2_TR(0x530640);
if(r1(R+518)){{goto L53065f;}}
}
B530642:L530642:{c.instructions+=5;NFSU2_TR(0x530642);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B530645:{NFSU2_TR(0x530645);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B530647:{NFSU2_TR(0x530647);
u8 U[4];
w4(U+0,u32(0x79b5f8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53064c:{NFSU2_TR(0x53064c);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53064d:{NFSU2_TR(0x53064d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x530652ull));
TAIL_STATIC(0x51cf70u,51c);
}
B530652:L530652:{c.instructions+=5;NFSU2_TR(0x530652);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B530655:{NFSU2_TR(0x530655);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B530657:{NFSU2_TR(0x530657);
u8 U[4];
w4(U+0,u32(0x79b5f8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53065c:{NFSU2_TR(0x53065c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53065d:{NFSU2_TR(0x53065d);
{goto L53067a;}
}
B53065f:L53065f:{c.instructions+=5;NFSU2_TR(0x53065f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B530662:{NFSU2_TR(0x530662);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B530664:{NFSU2_TR(0x530664);
u8 U[4];
w4(U+0,u32(0x78f21cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B530669:{NFSU2_TR(0x530669);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53066a:{NFSU2_TR(0x53066a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53066full));
TAIL_STATIC(0x51cf70u,51c);
}
B53066f:L53066f:{c.instructions+=4;NFSU2_TR(0x53066f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B530672:{NFSU2_TR(0x530672);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B530674:{NFSU2_TR(0x530674);
u8 U[4];
w4(U+0,u32(0x78f21cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B530679:{NFSU2_TR(0x530679);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53067a:L53067a:{c.instructions+=1;NFSU2_TR(0x53067a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53067full));
TAIL_STATIC(0x51cf70u,51c);
}
B53067f:L53067f:{c.instructions+=4;NFSU2_TR(0x53067f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B530682:{NFSU2_TR(0x530682);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B530685:{NFSU2_TR(0x530685);
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
B530687:{NFSU2_TR(0x530687);
if(r1(R+518)){{goto L530699;}}
}
B530689:L530689:{c.instructions+=4;NFSU2_TR(0x530689);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53068b:{NFSU2_TR(0x53068b);
u8 U[4];
w4(U+0,u32(0x78f21cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B530690:{NFSU2_TR(0x530690);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B530691:{NFSU2_TR(0x530691);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x530696ull));
TAIL_STATIC(0x51cf70u,51c);
}
B530696:L530696:{c.instructions+=1;NFSU2_TR(0x530696);
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
B530699:L530699:{c.instructions+=2;NFSU2_TR(0x530699);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B53069a:{NFSU2_TR(0x53069a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5306a0:L5306a0:{c.instructions+=8;NFSU2_TR(0x5306a0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x8ull))));
}
B5306a3:{NFSU2_TR(0x5306a3);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5306a7:{NFSU2_TR(0x5306a7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5306a8:{NFSU2_TR(0x5306a8);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5306ab:{NFSU2_TR(0x5306ab);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5306af:{NFSU2_TR(0x5306af);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5306b0:{NFSU2_TR(0x5306b0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5306b1:{NFSU2_TR(0x5306b1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5306b6ull));
TAIL_STATIC(0x51d620u,51d);
}
B5306b6:L5306b6:{c.instructions+=3;NFSU2_TR(0x5306b6);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5306ba:{NFSU2_TR(0x5306ba);
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
B5306bd:{NFSU2_TR(0x5306bd);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5306c0:L5306c0:{c.instructions+=8;NFSU2_TR(0x5306c0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x8ull))));
}
B5306c3:{NFSU2_TR(0x5306c3);
__builtin_memmove((R+0),(R+16),4);
}
B5306c7:{NFSU2_TR(0x5306c7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5306c8:{NFSU2_TR(0x5306c8);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5306cb:{NFSU2_TR(0x5306cb);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5306cf:{NFSU2_TR(0x5306cf);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5306d0:{NFSU2_TR(0x5306d0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5306d1:{NFSU2_TR(0x5306d1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5306d6ull));
TAIL_STATIC(0x51d620u,51d);
}
B5306d6:L5306d6:{c.instructions+=3;NFSU2_TR(0x5306d6);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5306da:{NFSU2_TR(0x5306da);
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
B5306dd:{NFSU2_TR(0x5306dd);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5306e0:L5306e0:{c.instructions+=6;NFSU2_TR(0x5306e0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5306e1:{NFSU2_TR(0x5306e1);
__builtin_memmove((R+20),(R+16),4);
}
B5306e3:{NFSU2_TR(0x5306e3);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5306e4:{NFSU2_TR(0x5306e4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B5306e7:{NFSU2_TR(0x5306e7);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5306e9:{NFSU2_TR(0x5306e9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5306f2;}}
}
B5306eb:L5306eb:{c.instructions+=4;NFSU2_TR(0x5306eb);
u8 U[3];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(R+0,u8(u32(r1(R+0))^u32(r1(R+0))));
w1(R+519,u8(s8(r1(R+0))<s8(u8(0x0ull))));
w1(R+518,u8((r1(R+0))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(R+0))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5306ed:{NFSU2_TR(0x5306ed);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5306ee:{NFSU2_TR(0x5306ee);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5306ef:{NFSU2_TR(0x5306ef);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5306f2:L5306f2:{c.instructions+=6;NFSU2_TR(0x5306f2);
__builtin_memmove((R+0),gp(0x850078),4);
}
B5306f7:{NFSU2_TR(0x5306f7);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5306f8:{NFSU2_TR(0x5306f8);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5306f9:{NFSU2_TR(0x5306f9);
w4(R+28,u32(0x1ull));
}
B5306fe:{NFSU2_TR(0x5306fe);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B530700:{NFSU2_TR(0x530700);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L530717;}}
}
B530702:L530702:{c.instructions+=7;NFSU2_TR(0x530702);
__builtin_memmove((R+4),gp(0x83898c),4);
}
B530708:{NFSU2_TR(0x530708);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B53070a:{NFSU2_TR(0x53070a);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B53070c:{NFSU2_TR(0x53070c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+0),(U+0),1);
}
B53070f:{NFSU2_TR(0x53070f);
u8 U[12];
w4(U+0,u32(u32(u32(0x2ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B530713:{NFSU2_TR(0x530713);
__builtin_memmove((R+28),(R+0),4);
}
B530715:{NFSU2_TR(0x530715);
{goto L530755;}
}
B530717:L530717:{c.instructions+=2;NFSU2_TR(0x530717);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x8ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B53071a:{NFSU2_TR(0x53071a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L530755;}}
}
B53071c:L53071c:{c.instructions+=3;NFSU2_TR(0x53071c);
__builtin_memmove((R+0),gp(0x850088),4);
}
B530721:{NFSU2_TR(0x530721);
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
B530724:{NFSU2_TR(0x530724);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L530755;}}
}
B530726:L530726:{c.instructions+=1;NFSU2_TR(0x530726);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x5307fcull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B53072d:L53072d:{c.instructions+=2;NFSU2_TR(0x53072d);
w4(R+28,u32(0x8ull));
}
B530732:{NFSU2_TR(0x530732);
{goto L530755;}
}
B530734:L530734:{c.instructions+=2;NFSU2_TR(0x530734);
w4(R+28,u32(0x10ull));
}
B530739:{NFSU2_TR(0x530739);
{goto L530755;}
}
B53073b:L53073b:{c.instructions+=2;NFSU2_TR(0x53073b);
w4(R+28,u32(0x20ull));
}
B530740:{NFSU2_TR(0x530740);
{goto L530755;}
}
B530742:L530742:{c.instructions+=2;NFSU2_TR(0x530742);
w4(R+28,u32(0x40ull));
}
B530747:{NFSU2_TR(0x530747);
{goto L530755;}
}
B530749:L530749:{c.instructions+=2;NFSU2_TR(0x530749);
w4(R+28,u32(0x80ull));
}
B53074e:{NFSU2_TR(0x53074e);
{goto L530755;}
}
B530750:L530750:{c.instructions+=1;NFSU2_TR(0x530750);
w4(R+28,u32(0x100ull));
}
B530755:L530755:{c.instructions+=5;NFSU2_TR(0x530755);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B530757:{NFSU2_TR(0x530757);
u8 U[4];
w4(U+0,u32(0xebb03e66ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53075c:{NFSU2_TR(0x53075c);
__builtin_memmove((R+4),(R+12),4);
}
B53075e:{NFSU2_TR(0x53075e);
w4(R+24,u32(0x25ull));
}
B530763:{NFSU2_TR(0x530763);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x530768ull));
TAIL_STATIC(0x61b500u,61b);
}
B530768:L530768:{c.instructions+=2;NFSU2_TR(0x530768);
u8 U[4];
w1(R+512,u8((r4(R+0))<(u32(0x3797533ull))));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x3797533ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B53076d:{NFSU2_TR(0x53076d);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L5307b2;}}
}
B53076f:L53076f:{c.instructions+=1;NFSU2_TR(0x53076f);
if(r1(R+518)){{goto L5307ab;}}
}
B530771:L530771:{c.instructions+=2;NFSU2_TR(0x530771);
u8 U[4];
w1(R+512,u8((r4(R+0))<(u32(0x2daab07ull))));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x2daab07ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B530776:{NFSU2_TR(0x530776);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L53079d;}}
}
B530778:L530778:{c.instructions+=1;NFSU2_TR(0x530778);
if(r1(R+518)){{goto L530796;}}
}
B53077a:L53077a:{c.instructions+=2;NFSU2_TR(0x53077a);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xda27ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B53077f:{NFSU2_TR(0x53077f);
if(r1(R+518)){{goto L53078f;}}
}
B530781:L530781:{c.instructions+=2;NFSU2_TR(0x530781);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x16bdceull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B530786:{NFSU2_TR(0x530786);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5307d3;}}
}
B530788:L530788:{c.instructions+=2;NFSU2_TR(0x530788);
w4(R+24,u32(0x28ull));
}
B53078d:{NFSU2_TR(0x53078d);
{goto L5307d3;}
}
B53078f:L53078f:{c.instructions+=2;NFSU2_TR(0x53078f);
w4(R+24,u32(0x4dull));
}
B530794:{NFSU2_TR(0x530794);
{goto L5307d3;}
}
B530796:L530796:{c.instructions+=2;NFSU2_TR(0x530796);
w4(R+24,u32(0x25ull));
}
B53079b:{NFSU2_TR(0x53079b);
{goto L5307d3;}
}
B53079d:L53079d:{c.instructions+=2;NFSU2_TR(0x53079d);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x3437a52ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5307a2:{NFSU2_TR(0x5307a2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5307d3;}}
}
B5307a4:L5307a4:{c.instructions+=2;NFSU2_TR(0x5307a4);
w4(R+24,u32(0x26ull));
}
B5307a9:{NFSU2_TR(0x5307a9);
{goto L5307d3;}
}
B5307ab:L5307ab:{c.instructions+=2;NFSU2_TR(0x5307ab);
w4(R+24,u32(0x27ull));
}
B5307b0:{NFSU2_TR(0x5307b0);
{goto L5307d3;}
}
B5307b2:L5307b2:{c.instructions+=2;NFSU2_TR(0x5307b2);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0x3e871f1ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x3e871f1ull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0x3e871f1ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5307b7:{NFSU2_TR(0x5307b7);
if(r1(R+518)){{goto L5307f0;}}
}
B5307b9:L5307b9:{c.instructions+=2;NFSU2_TR(0x5307b9);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x66350f0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5307be:{NFSU2_TR(0x5307be);
if(r1(R+518)){{goto L5307ce;}}
}
B5307c0:L5307c0:{c.instructions+=2;NFSU2_TR(0x5307c0);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xd6640dffull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5307c5:{NFSU2_TR(0x5307c5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5307d3;}}
}
B5307c7:L5307c7:{c.instructions+=2;NFSU2_TR(0x5307c7);
w4(R+24,u32(0x4full));
}
B5307cc:{NFSU2_TR(0x5307cc);
{goto L5307d3;}
}
B5307ce:L5307ce:{c.instructions+=1;NFSU2_TR(0x5307ce);
w4(R+24,u32(0x4eull));
}
B5307d3:L5307d3:{c.instructions+=8;NFSU2_TR(0x5307d3);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x5ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B5307d6:{NFSU2_TR(0x5307d6);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w1(R+4,shr<u8>(r1(R+4),u64(r4(U+0))));
}
B5307d9:{NFSU2_TR(0x5307d9);
w4(R+8,u32(s32(s8(r1(R+4)))));
}
B5307dc:{NFSU2_TR(0x5307dc);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5307de:{NFSU2_TR(0x5307de);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5307df:{NFSU2_TR(0x5307df);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5307e0:{NFSU2_TR(0x5307e0);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5307e1:{NFSU2_TR(0x5307e1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5307e6ull));
TAIL_STATIC(0x52a1a0u,52a);
}
B5307e6:L5307e6:{c.instructions+=6;NFSU2_TR(0x5307e6);
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
B5307e9:{NFSU2_TR(0x5307e9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5307ea:{NFSU2_TR(0x5307ea);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5307eb:{NFSU2_TR(0x5307eb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5307ec:{NFSU2_TR(0x5307ec);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5307ed:{NFSU2_TR(0x5307ed);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5307f0:L5307f0:{c.instructions+=6;NFSU2_TR(0x5307f0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5307f1:{NFSU2_TR(0x5307f1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5307f2:{NFSU2_TR(0x5307f2);
w1(R+0,u8(0x1ull));
}
B5307f4:{NFSU2_TR(0x5307f4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5307f5:{NFSU2_TR(0x5307f5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5307f6:{NFSU2_TR(0x5307f6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B530820:L530820:{c.instructions+=10;NFSU2_TR(0x530820);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B530821:{NFSU2_TR(0x530821);
__builtin_memmove((R+20),(R+16),4);
}
B530823:{NFSU2_TR(0x530823);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B530824:{NFSU2_TR(0x530824);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B530825:{NFSU2_TR(0x530825);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B530826:{NFSU2_TR(0x530826);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B530827:{NFSU2_TR(0x530827);
__builtin_memmove((R+28),(R+4),4);
}
B530829:{NFSU2_TR(0x530829);
__builtin_memmove((R+4),gp(0x8389ac),4);
}
B53082f:{NFSU2_TR(0x53082f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B530831:{NFSU2_TR(0x530831);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x530834ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B530834:L530834:{c.instructions+=8;NFSU2_TR(0x530834);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B530837:{NFSU2_TR(0x530837);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B530839:{NFSU2_TR(0x530839);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53083b:{NFSU2_TR(0x53083b);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53083c:{NFSU2_TR(0x53083c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53083d:{NFSU2_TR(0x53083d);
w4(R+4,u32(0x8a2b68ull));
}
B530842:{NFSU2_TR(0x530842);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B530845:{NFSU2_TR(0x530845);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53084aull));
TAIL_STATIC(0x61ba30u,61b);
}
B53084a:L53084a:{c.instructions+=3;NFSU2_TR(0x53084a);
__builtin_memmove((R+24),(R+0),4);
}
B53084c:{NFSU2_TR(0x53084c);
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
B53084e:{NFSU2_TR(0x53084e);
if(r1(R+518)){{goto L530892;}}
}
B530850:L530850:{c.instructions+=8;NFSU2_TR(0x530850);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B530853:{NFSU2_TR(0x530853);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B530855:{NFSU2_TR(0x530855);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B530857:{NFSU2_TR(0x530857);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B530858:{NFSU2_TR(0x530858);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B530859:{NFSU2_TR(0x530859);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53085a:{NFSU2_TR(0x53085a);
w4(R+4,u32(0x8a2b68ull));
}
B53085f:{NFSU2_TR(0x53085f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x530864ull));
TAIL_STATIC(0x61ba50u,61b);
}
B530864:L530864:{c.instructions+=4;NFSU2_TR(0x530864);
__builtin_memmove((R+24),(R+0),4);
}
B530866:{NFSU2_TR(0x530866);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B530867:{NFSU2_TR(0x530867);
__builtin_memmove((R+4),(R+28),4);
}
B530869:{NFSU2_TR(0x530869);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53086eull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5306e0u);}goto L5306e0;}
}
B53086e:L53086e:{c.instructions+=2;NFSU2_TR(0x53086e);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B530870:{NFSU2_TR(0x530870);
if(r1(R+518)){{goto L53088e;}}
}
B530872:L530872:{c.instructions+=4;NFSU2_TR(0x530872);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B530874:{NFSU2_TR(0x530874);
u8 U[4];
w4(U+0,u32(0xebb03e66ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B530879:{NFSU2_TR(0x530879);
__builtin_memmove((R+4),(R+24),4);
}
B53087b:{NFSU2_TR(0x53087b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x530880ull));
TAIL_STATIC(0x61b500u,61b);
}
B530880:L530880:{c.instructions+=4;NFSU2_TR(0x530880);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B530881:{NFSU2_TR(0x530881);
__builtin_memmove((R+4),(R+28),4);
}
B530883:{NFSU2_TR(0x530883);
__builtin_memmove((R+8),(R+0),4);
}
B530885:{NFSU2_TR(0x530885);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53088aull));
TAIL_STATIC(0x50f5b0u,50f);
}
B53088a:L53088a:{c.instructions+=2;NFSU2_TR(0x53088a);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B53088c:{NFSU2_TR(0x53088c);
if(r1(R+518)){{goto L53089d;}}
}
B53088e:L53088e:{c.instructions+=2;NFSU2_TR(0x53088e);
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
B530890:{NFSU2_TR(0x530890);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x530850u);}goto L530850;}}
}
B530892:L530892:{c.instructions+=7;NFSU2_TR(0x530892);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B530893:{NFSU2_TR(0x530893);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B530894:{NFSU2_TR(0x530894);
w1(R+0,u8(0x1ull));
}
B530896:{NFSU2_TR(0x530896);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B530897:{NFSU2_TR(0x530897);
__builtin_memmove((R+16),(R+20),4);
}
B530899:{NFSU2_TR(0x530899);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B53089a:{NFSU2_TR(0x53089a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B53089d:L53089d:{c.instructions+=7;NFSU2_TR(0x53089d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B53089e:{NFSU2_TR(0x53089e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B53089f:{NFSU2_TR(0x53089f);
u8 U[3];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(R+0,u8(u32(r1(R+0))^u32(r1(R+0))));
w1(R+519,u8(s8(r1(R+0))<s8(u8(0x0ull))));
w1(R+518,u8((r1(R+0))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(R+0))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5308a1:{NFSU2_TR(0x5308a1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5308a2:{NFSU2_TR(0x5308a2);
__builtin_memmove((R+16),(R+20),4);
}
B5308a4:{NFSU2_TR(0x5308a4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5308a5:{NFSU2_TR(0x5308a5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5308b0:L5308b0:{c.instructions+=7;NFSU2_TR(0x5308b0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x10ull))));
}
B5308b3:{NFSU2_TR(0x5308b3);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5308b4:{NFSU2_TR(0x5308b4);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x158ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5308ba:{NFSU2_TR(0x5308ba);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5308bb:{NFSU2_TR(0x5308bb);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x158ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5308c1:{NFSU2_TR(0x5308c1);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5308c3:{NFSU2_TR(0x5308c3);
if(r1(R+518)){{goto L530920;}}
}
B5308c5:L5308c5:{c.instructions+=3;NFSU2_TR(0x5308c5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5308c8:{NFSU2_TR(0x5308c8);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5308ca:{NFSU2_TR(0x5308ca);
if(r1(R+518)){{goto L53091a;}}
}
B5308cc:L5308cc:{c.instructions+=4;NFSU2_TR(0x5308cc);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5308d0:{NFSU2_TR(0x5308d0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5308d1:{NFSU2_TR(0x5308d1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5308d2:{NFSU2_TR(0x5308d2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5308d7ull));
TAIL_STATIC(0x51d9f0u,51d);
}
B5308d7:L5308d7:{c.instructions+=3;NFSU2_TR(0x5308d7);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B5308da:{NFSU2_TR(0x5308da);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5308dc:{NFSU2_TR(0x5308dc);
if(r1(R+518)){{goto L53091a;}}
}
B5308de:L5308de:{c.instructions+=5;NFSU2_TR(0x5308de);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5308e2:{NFSU2_TR(0x5308e2);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5308e6:{NFSU2_TR(0x5308e6);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5308e8:{NFSU2_TR(0x5308e8);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5308eb:{NFSU2_TR(0x5308eb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L53091a;}}
}
B5308ed:L5308ed:{c.instructions+=5;NFSU2_TR(0x5308ed);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5308f1:{NFSU2_TR(0x5308f1);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5308f5:{NFSU2_TR(0x5308f5);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5308f7:{NFSU2_TR(0x5308f7);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5308fa:{NFSU2_TR(0x5308fa);
if(r1(R+514)){{goto L53091a;}}
}
B5308fc:L5308fc:{c.instructions+=5;NFSU2_TR(0x5308fc);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B530900:{NFSU2_TR(0x530900);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B530904:{NFSU2_TR(0x530904);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B530906:{NFSU2_TR(0x530906);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B530909:{NFSU2_TR(0x530909);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L53091a;}}
}
B53090b:L53090b:{c.instructions+=5;NFSU2_TR(0x53090b);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B53090f:{NFSU2_TR(0x53090f);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B530913:{NFSU2_TR(0x530913);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B530915:{NFSU2_TR(0x530915);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B530918:{NFSU2_TR(0x530918);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L53092a;}}
}
B53091a:L53091a:{c.instructions+=3;NFSU2_TR(0x53091a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+24),(U+0),4);
}
B53091c:{NFSU2_TR(0x53091c);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B53091e:{NFSU2_TR(0x53091e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5308c5u);}goto L5308c5;}}
}
B530920:L530920:{c.instructions+=5;NFSU2_TR(0x530920);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B530921:{NFSU2_TR(0x530921);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B530923:{NFSU2_TR(0x530923);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B530924:{NFSU2_TR(0x530924);
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
B530927:{NFSU2_TR(0x530927);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B53092a:L53092a:{c.instructions+=5;NFSU2_TR(0x53092a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B53092b:{NFSU2_TR(0x53092b);
__builtin_memmove((R+0),(R+24),4);
}
B53092d:{NFSU2_TR(0x53092d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B53092e:{NFSU2_TR(0x53092e);
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
B530931:{NFSU2_TR(0x530931);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B530940:L530940:{c.instructions+=3;NFSU2_TR(0x530940);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B530944:{NFSU2_TR(0x530944);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B530946:{NFSU2_TR(0x530946);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L53094d;}}
}
B530948:L530948:{c.instructions+=2;NFSU2_TR(0x530948);
u8 U[3];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(R+0,u8(u32(r1(R+0))^u32(r1(R+0))));
w1(R+519,u8(s8(r1(R+0))<s8(u8(0x0ull))));
w1(R+518,u8((r1(R+0))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(R+0))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B53094a:{NFSU2_TR(0x53094a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B53094d:L53094d:{c.instructions+=4;NFSU2_TR(0x53094d);
__builtin_memmove((R+4),gp(0x850078),4);
}
B530953:{NFSU2_TR(0x530953);
w4(R+0,u32(0x1ull));
}
B530958:{NFSU2_TR(0x530958);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B53095a:{NFSU2_TR(0x53095a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L530963;}}
}
B53095c:L53095c:{c.instructions+=2;NFSU2_TR(0x53095c);
w4(R+0,u32(0x6ull));
}
B530961:{NFSU2_TR(0x530961);
{goto L5309a2;}
}
B530963:L530963:{c.instructions+=2;NFSU2_TR(0x530963);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x8ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B530966:{NFSU2_TR(0x530966);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5309a2;}}
}
B530968:L530968:{c.instructions+=3;NFSU2_TR(0x530968);
__builtin_memmove((R+4),gp(0x850088),4);
}
B53096e:{NFSU2_TR(0x53096e);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
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
B530971:{NFSU2_TR(0x530971);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L5309a2;}}
}
B530973:L530973:{c.instructions+=1;NFSU2_TR(0x530973);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x5309bcull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B53097a:L53097a:{c.instructions+=2;NFSU2_TR(0x53097a);
w4(R+0,u32(0x8ull));
}
B53097f:{NFSU2_TR(0x53097f);
{goto L5309a2;}
}
B530981:L530981:{c.instructions+=2;NFSU2_TR(0x530981);
w4(R+0,u32(0x10ull));
}
B530986:{NFSU2_TR(0x530986);
{goto L5309a2;}
}
B530988:L530988:{c.instructions+=2;NFSU2_TR(0x530988);
w4(R+0,u32(0x20ull));
}
B53098d:{NFSU2_TR(0x53098d);
{goto L5309a2;}
}
B53098f:L53098f:{c.instructions+=2;NFSU2_TR(0x53098f);
w4(R+0,u32(0x40ull));
}
B530994:{NFSU2_TR(0x530994);
{goto L5309a2;}
}
B530996:L530996:{c.instructions+=2;NFSU2_TR(0x530996);
w4(R+0,u32(0x80ull));
}
B53099b:{NFSU2_TR(0x53099b);
{goto L5309a2;}
}
B53099d:L53099d:{c.instructions+=1;NFSU2_TR(0x53099d);
w4(R+0,u32(0x100ull));
}
B5309a2:L5309a2:{c.instructions+=8;NFSU2_TR(0x5309a2);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x5ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B5309a5:{NFSU2_TR(0x5309a5);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w1(R+4,shr<u8>(r1(R+4),u64(r4(U+0))));
}
B5309a8:{NFSU2_TR(0x5309a8);
w4(R+8,u32(s32(s8(r1(R+4)))));
}
B5309ab:{NFSU2_TR(0x5309ab);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5309ad:{NFSU2_TR(0x5309ad);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5309ae:{NFSU2_TR(0x5309ae);
u8 U[4];
w4(U+0,u32(0x17ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5309b0:{NFSU2_TR(0x5309b0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5309b1:{NFSU2_TR(0x5309b1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5309b6ull));
TAIL_STATIC(0x52a1a0u,52a);
}
B5309b6:L5309b6:{c.instructions+=2;NFSU2_TR(0x5309b6);
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
B5309b9:{NFSU2_TR(0x5309b9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5309e0:L5309e0:{c.instructions+=5;NFSU2_TR(0x5309e0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5309e1:{NFSU2_TR(0x5309e1);
__builtin_memmove((R+20),(R+16),4);
}
B5309e3:{NFSU2_TR(0x5309e3);
__builtin_memmove((R+0),gp(0x89cf48),4);
}
B5309e8:{NFSU2_TR(0x5309e8);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5309ea:{NFSU2_TR(0x5309ea);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L530a1d;}}
}
B5309ec:L5309ec:{c.instructions+=6;NFSU2_TR(0x5309ec);
__builtin_memmove((R+0),gp(0x8500d0),4);
}
B5309f1:{NFSU2_TR(0x5309f1);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5309f3:{NFSU2_TR(0x5309f3);
s1(0x8500cc,u8(0x0ull));
}
B5309fa:{NFSU2_TR(0x5309fa);
__builtin_memmove(gp(0x8500d4),(R+0),4);
}
B5309ff:{NFSU2_TR(0x5309ff);
s4(0x8500d0,u32(0x3ull));
}
B530a09:{NFSU2_TR(0x530a09);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x530a0eull));
TAIL_STATIC(0x58fd50u,58f);
}
B530a0e:L530a0e:{c.instructions+=4;NFSU2_TR(0x530a0e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B530a11:{NFSU2_TR(0x530a11);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B530a13:{NFSU2_TR(0x530a13);
w4(R+4,u32(0x89cf48ull));
}
B530a18:{NFSU2_TR(0x530a18);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x530a1dull));
TAIL_STATIC(0x5fe2b0u,5fe);
}
B530a1d:L530a1d:{c.instructions+=7;NFSU2_TR(0x530a1d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B530a20:{NFSU2_TR(0x530a20);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B530a21:{NFSU2_TR(0x530a21);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B530a22:{NFSU2_TR(0x530a22);
__builtin_memmove(gp(0x83a640),(R+4),4);
}
B530a28:{NFSU2_TR(0x530a28);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B530a29:{NFSU2_TR(0x530a29);
w4(R+4,u32(0x839c40ull));
}
B530a2e:{NFSU2_TR(0x530a2e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x530a33ull));
TAIL_STATIC(0x50f9e0u,50f);
}
B530a33:L530a33:{c.instructions+=4;NFSU2_TR(0x530a33);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B530a36:{NFSU2_TR(0x530a36);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B530a38:{NFSU2_TR(0x530a38);
s4(0x83a644,u32(0x1ull));
}
B530a42:{NFSU2_TR(0x530a42);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L530a59;}}
}
B530a44:L530a44:{c.instructions+=2;NFSU2_TR(0x530a44);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x2ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B530a47:{NFSU2_TR(0x530a47);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L530a59;}}
}
B530a49:L530a49:{c.instructions+=4;NFSU2_TR(0x530a49);
__builtin_memmove((R+4),(R+12),4);
}
B530a4b:{NFSU2_TR(0x530a4b);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(u32(0xab4cull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B530a51:{NFSU2_TR(0x530a51);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x83ad90ull))));
}
B530a57:{NFSU2_TR(0x530a57);
{goto L530a5b;}
}
B530a59:L530a59:{c.instructions+=1;NFSU2_TR(0x530a59);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B530a5b:L530a5b:{c.instructions+=4;NFSU2_TR(0x530a5b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B530a5e:{NFSU2_TR(0x530a5e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B530a5f:{NFSU2_TR(0x530a5f);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B530a61:{NFSU2_TR(0x530a61);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x530a66ull));
TAIL_STATIC(0x503640u,503);
}
B530a66:L530a66:{c.instructions+=3;NFSU2_TR(0x530a66);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B530a68:{NFSU2_TR(0x530a68);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B530a69:{NFSU2_TR(0x530a69);
if(r1(R+518)){{goto L530a72;}}
}
B530a6b:L530a6b:{c.instructions+=1;NFSU2_TR(0x530a6b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x530a70ull));
TAIL_STATIC(0x503510u,503);
}
B530a70:L530a70:{c.instructions+=1;NFSU2_TR(0x530a70);
{goto L530a81;}
}
B530a72:L530a72:{c.instructions+=1;NFSU2_TR(0x530a72);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x530a77ull));
TAIL_STATIC(0x5035c0u,503);
}
B530a77:L530a77:{c.instructions+=2;NFSU2_TR(0x530a77);
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
B530a79:{NFSU2_TR(0x530a79);
if(r1(R+518)){{goto L530a83;}}
}
B530a7b:L530a7b:{c.instructions+=2;NFSU2_TR(0x530a7b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B530a7c:{NFSU2_TR(0x530a7c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x530a81ull));
TAIL_STATIC(0x5035c0u,503);
}
B530a81:L530a81:{c.instructions+=1;NFSU2_TR(0x530a81);
__builtin_memmove((R+24),(R+0),4);
}
B530a83:L530a83:{c.instructions+=4;NFSU2_TR(0x530a83);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B530a84:{NFSU2_TR(0x530a84);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B530a85:{NFSU2_TR(0x530a85);
w4(R+4,u32(0x839c40ull));
}
B530a8a:{NFSU2_TR(0x530a8a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x530a8full));
TAIL_STATIC(0x50f800u,50f);
}
B530a8f:L530a8f:{c.instructions+=2;NFSU2_TR(0x530a8f);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B530a91:{NFSU2_TR(0x530a91);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x530a96ull));
TAIL_STATIC(0x526970u,526);
}
B530a96:L530a96:{c.instructions+=6;NFSU2_TR(0x530a96);
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
B530a99:{NFSU2_TR(0x530a99);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B530a9a:{NFSU2_TR(0x530a9a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B530a9b:{NFSU2_TR(0x530a9b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B530a9c:{NFSU2_TR(0x530a9c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B530a9d:{NFSU2_TR(0x530a9d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B530aa0:L530aa0:{c.instructions+=8;NFSU2_TR(0x530aa0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x1cull))));
}
B530aa3:{NFSU2_TR(0x530aa3);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B530aa4:{NFSU2_TR(0x530aa4);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B530aa5:{NFSU2_TR(0x530aa5);
__builtin_memmove((R+24),(R+4),4);
}
B530aa7:{NFSU2_TR(0x530aa7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B530aaa:{NFSU2_TR(0x530aaa);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B530aac:{NFSU2_TR(0x530aac);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B530aad:{NFSU2_TR(0x530aad);
if(r1(R+518)){{goto L530aba;}}
}
B530aaf:L530aaf:{c.instructions+=3;NFSU2_TR(0x530aaf);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B530ab2:{NFSU2_TR(0x530ab2);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B530ab4:{NFSU2_TR(0x530ab4);
if(r1(R+518)){{goto L530aba;}}
}
B530ab6:L530ab6:{c.instructions+=2;NFSU2_TR(0x530ab6);
w1(R+12,u8(0x1ull));
}
B530ab8:{NFSU2_TR(0x530ab8);
{goto L530abc;}
}
B530aba:L530aba:{c.instructions+=1;NFSU2_TR(0x530aba);
w1(R+12,u8(u32(r1(R+12))^u32(r1(R+12))));
}
B530abc:L530abc:{c.instructions+=7;NFSU2_TR(0x530abc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B530abf:{NFSU2_TR(0x530abf);
u8 U[4];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B530ac3:{NFSU2_TR(0x530ac3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B530ac4:{NFSU2_TR(0x530ac4);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B530ac8:{NFSU2_TR(0x530ac8);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B530ac9:{NFSU2_TR(0x530ac9);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B530aca:{NFSU2_TR(0x530aca);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x530acfull));
TAIL_STATIC(0x51d730u,51d);
}
B530acf:L530acf:{c.instructions+=10;NFSU2_TR(0x530acf);
{u32 ea_=u32(r4(R+24)+u32(72u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B530ad2:{NFSU2_TR(0x530ad2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B530ad5:{NFSU2_TR(0x530ad5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B530ad8:{NFSU2_TR(0x530ad8);
{u32 ea_=u32(r4(R+24)+u32(188u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B530ade:{NFSU2_TR(0x530ade);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B530ae1:{NFSU2_TR(0x530ae1);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(r1(R+12))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B530ae3:{NFSU2_TR(0x530ae3);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B530ae7:{NFSU2_TR(0x530ae7);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B530aeb:{NFSU2_TR(0x530aeb);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B530aef:{NFSU2_TR(0x530aef);
if(r1(R+518)){{goto L530b03;}}
}
B530af1:L530af1:{c.instructions+=3;NFSU2_TR(0x530af1);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
w4(U+4,u32(0xc0c00000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B530af9:{NFSU2_TR(0x530af9);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(0xc0c00000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B530b01:{NFSU2_TR(0x530b01);
{goto L530b13;}
}
B530b03:L530b03:{c.instructions+=2;NFSU2_TR(0x530b03);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B530b0b:{NFSU2_TR(0x530b0b);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B530b13:L530b13:{c.instructions+=10;NFSU2_TR(0x530b13);
{u32 ea_=u32(r4(R+24)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B530b16:{NFSU2_TR(0x530b16);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B530b19:{NFSU2_TR(0x530b19);
{u32 ea_=u32(r4(R+24)+u32(188u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B530b1f:{NFSU2_TR(0x530b1f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x8ull))));
}
B530b22:{NFSU2_TR(0x530b22);
{u32 ea_=u32(u32(7895772u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B530b28:{NFSU2_TR(0x530b28);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B530b2c:{NFSU2_TR(0x530b2c);
{u32 ea_=u32(r4(R+24)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B530b2f:{NFSU2_TR(0x530b2f);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B530b32:{NFSU2_TR(0x530b32);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B530b33:{NFSU2_TR(0x530b33);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x530b38ull));
TAIL_STATIC(0x51d380u,51d);
}
B530b38:L530b38:{c.instructions+=12;NFSU2_TR(0x530b38);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B530b3c:{NFSU2_TR(0x530b3c);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B530b40:{NFSU2_TR(0x530b40);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B530b44:{NFSU2_TR(0x530b44);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B530b47:{NFSU2_TR(0x530b47);
__builtin_memmove((R+4),(R+0),4);
}
B530b49:{NFSU2_TR(0x530b49);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B530b4d:{NFSU2_TR(0x530b4d);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B530b51:{NFSU2_TR(0x530b51);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B530b52:{NFSU2_TR(0x530b52);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B530b53:{NFSU2_TR(0x530b53);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B530b54:{NFSU2_TR(0x530b54);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B530b58:{NFSU2_TR(0x530b58);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x530b5dull));
TAIL_STATIC(0x51d380u,51d);
}
B530b5d:L530b5d:{c.instructions+=10;NFSU2_TR(0x530b5d);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B530b61:{NFSU2_TR(0x530b61);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B530b65:{NFSU2_TR(0x530b65);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B530b68:{NFSU2_TR(0x530b68);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B530b6b:{NFSU2_TR(0x530b6b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B530b6c:{NFSU2_TR(0x530b6c);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B530b70:{NFSU2_TR(0x530b70);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B530b71:{NFSU2_TR(0x530b71);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B530b74:{NFSU2_TR(0x530b74);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B530b75:{NFSU2_TR(0x530b75);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x530b7aull));
TAIL_STATIC(0x51d380u,51d);
}
B530b7a:L530b7a:{c.instructions+=16;NFSU2_TR(0x530b7a);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B530b7e:{NFSU2_TR(0x530b7e);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B530b82:{NFSU2_TR(0x530b82);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B530b85:{NFSU2_TR(0x530b85);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B530b88:{NFSU2_TR(0x530b88);
{u32 ea_=u32(u32(7897616u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B530b8e:{NFSU2_TR(0x530b8e);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B530b92:{NFSU2_TR(0x530b92);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B530b96:{NFSU2_TR(0x530b96);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B530b9a:{NFSU2_TR(0x530b9a);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B530b9e:{NFSU2_TR(0x530b9e);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B530ba2:{NFSU2_TR(0x530ba2);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B530ba6:{NFSU2_TR(0x530ba6);
__asm__ volatile(".byte 0xdc,0xc0":::"memory");
}
B530ba8:{NFSU2_TR(0x530ba8);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B530bac:{NFSU2_TR(0x530bac);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B530baf:{NFSU2_TR(0x530baf);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B530bb0:{NFSU2_TR(0x530bb0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x530bb5ull));
TAIL_STATIC(0x495590u,495);
}
B530bb5:L530bb5:{c.instructions+=7;NFSU2_TR(0x530bb5);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B530bb9:{NFSU2_TR(0x530bb9);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B530bbd:{NFSU2_TR(0x530bbd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B530bc0:{NFSU2_TR(0x530bc0);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B530bc1:{NFSU2_TR(0x530bc1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B530bc2:{NFSU2_TR(0x530bc2);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B530bc3:{NFSU2_TR(0x530bc3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x530bc8ull));
TAIL_STATIC(0x51d380u,51d);
}
B530bc8:L530bc8:{c.instructions+=7;NFSU2_TR(0x530bc8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B530bcb:{NFSU2_TR(0x530bcb);
u8 U[4];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B530bcf:{NFSU2_TR(0x530bcf);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B530bd0:{NFSU2_TR(0x530bd0);
u8 U[4];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B530bd4:{NFSU2_TR(0x530bd4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B530bd5:{NFSU2_TR(0x530bd5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B530bd6:{NFSU2_TR(0x530bd6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x530bdbull));
TAIL_STATIC(0x51d070u,51d);
}
B530bdb:L530bdb:{c.instructions+=7;NFSU2_TR(0x530bdb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B530bde:{NFSU2_TR(0x530bde);
u8 U[4];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B530be2:{NFSU2_TR(0x530be2);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B530be3:{NFSU2_TR(0x530be3);
u8 U[4];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B530be7:{NFSU2_TR(0x530be7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B530be8:{NFSU2_TR(0x530be8);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B530be9:{NFSU2_TR(0x530be9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x530beeull));
TAIL_STATIC(0x51d170u,51d);
}
B530bee:L530bee:{c.instructions+=7;NFSU2_TR(0x530bee);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B530bf1:{NFSU2_TR(0x530bf1);
u8 U[4];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B530bf5:{NFSU2_TR(0x530bf5);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B530bf6:{NFSU2_TR(0x530bf6);
u8 U[4];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B530bfa:{NFSU2_TR(0x530bfa);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B530bfb:{NFSU2_TR(0x530bfb);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B530bfc:{NFSU2_TR(0x530bfc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x530c01ull));
TAIL_STATIC(0x51d730u,51d);
}
B530c01:L530c01:{c.instructions+=7;NFSU2_TR(0x530c01);
{u32 ea_=u32(r4(R+16)+u32(92u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B530c05:{NFSU2_TR(0x530c05);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x38ull))));
}
B530c08:{NFSU2_TR(0x530c08);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B530c0c:{NFSU2_TR(0x530c0c);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(r1(R+12))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B530c0e:{NFSU2_TR(0x530c0e);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B530c12:{NFSU2_TR(0x530c12);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B530c16:{NFSU2_TR(0x530c16);
if(r1(R+518)){{goto L530c6c;}}
}
B530c18:L530c18:{c.instructions+=6;NFSU2_TR(0x530c18);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B530c1c:{NFSU2_TR(0x530c1c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B530c1f:{NFSU2_TR(0x530c1f);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B530c20:{NFSU2_TR(0x530c20);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B530c21:{NFSU2_TR(0x530c21);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B530c22:{NFSU2_TR(0x530c22);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x530c27ull));
TAIL_STATIC(0x51d380u,51d);
}
B530c27:L530c27:{c.instructions+=7;NFSU2_TR(0x530c27);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B530c2a:{NFSU2_TR(0x530c2a);
u8 U[4];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B530c2e:{NFSU2_TR(0x530c2e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B530c2f:{NFSU2_TR(0x530c2f);
u8 U[4];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B530c33:{NFSU2_TR(0x530c33);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B530c34:{NFSU2_TR(0x530c34);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B530c35:{NFSU2_TR(0x530c35);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x530c3aull));
TAIL_STATIC(0x51d170u,51d);
}
B530c3a:L530c3a:{c.instructions+=6;NFSU2_TR(0x530c3a);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B530c3e:{NFSU2_TR(0x530c3e);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B530c42:{NFSU2_TR(0x530c42);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B530c43:{NFSU2_TR(0x530c43);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B530c44:{NFSU2_TR(0x530c44);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B530c45:{NFSU2_TR(0x530c45);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x530c4aull));
TAIL_STATIC(0x51d2d0u,51d);
}
B530c4a:L530c4a:{c.instructions+=7;NFSU2_TR(0x530c4a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B530c4d:{NFSU2_TR(0x530c4d);
u8 U[4];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B530c51:{NFSU2_TR(0x530c51);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B530c52:{NFSU2_TR(0x530c52);
u8 U[4];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B530c56:{NFSU2_TR(0x530c56);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B530c57:{NFSU2_TR(0x530c57);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B530c58:{NFSU2_TR(0x530c58);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x530c5dull));
TAIL_STATIC(0x51d070u,51d);
}
B530c5d:L530c5d:{c.instructions+=5;NFSU2_TR(0x530c5d);
u8 U[8];
w4(U+0,u32(u32(u32(0x54ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B530c61:{NFSU2_TR(0x530c61);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B530c62:{NFSU2_TR(0x530c62);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B530c63:{NFSU2_TR(0x530c63);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B530c64:{NFSU2_TR(0x530c64);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x530c69ull));
TAIL_STATIC(0x51d380u,51d);
}
B530c69:L530c69:{c.instructions+=1;NFSU2_TR(0x530c69);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x3cull))));
}
B530c6c:L530c6c:{c.instructions+=3;NFSU2_TR(0x530c6c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B530c6f:{NFSU2_TR(0x530c6f);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B530c71:{NFSU2_TR(0x530c71);
if(r1(R+518)){{goto L530cc8;}}
}
B530c73:L530c73:{c.instructions+=6;NFSU2_TR(0x530c73);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B530c77:{NFSU2_TR(0x530c77);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B530c78:{NFSU2_TR(0x530c78);
u8 U[4];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B530c7c:{NFSU2_TR(0x530c7c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B530c7d:{NFSU2_TR(0x530c7d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B530c7e:{NFSU2_TR(0x530c7e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x530c83ull));
TAIL_STATIC(0x51d070u,51d);
}
B530c83:L530c83:{c.instructions+=5;NFSU2_TR(0x530c83);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B530c87:{NFSU2_TR(0x530c87);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B530c88:{NFSU2_TR(0x530c88);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B530c89:{NFSU2_TR(0x530c89);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B530c8a:{NFSU2_TR(0x530c8a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x530c8full));
TAIL_STATIC(0x51d380u,51d);
}
B530c8f:L530c8f:{c.instructions+=7;NFSU2_TR(0x530c8f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B530c92:{NFSU2_TR(0x530c92);
u8 U[4];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B530c96:{NFSU2_TR(0x530c96);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B530c97:{NFSU2_TR(0x530c97);
u8 U[4];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B530c9b:{NFSU2_TR(0x530c9b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B530c9c:{NFSU2_TR(0x530c9c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B530c9d:{NFSU2_TR(0x530c9d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x530ca2ull));
TAIL_STATIC(0x51d620u,51d);
}
B530ca2:L530ca2:{c.instructions+=7;NFSU2_TR(0x530ca2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B530ca5:{NFSU2_TR(0x530ca5);
u8 U[4];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B530ca9:{NFSU2_TR(0x530ca9);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B530caa:{NFSU2_TR(0x530caa);
u8 U[4];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B530cae:{NFSU2_TR(0x530cae);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B530caf:{NFSU2_TR(0x530caf);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B530cb0:{NFSU2_TR(0x530cb0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x530cb5ull));
TAIL_STATIC(0x51d620u,51d);
}
B530cb5:L530cb5:{c.instructions+=6;NFSU2_TR(0x530cb5);
u8 U[8];
w4(U+0,u32(u32(u32(0x54ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B530cb9:{NFSU2_TR(0x530cb9);
u8 U[8];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B530cbd:{NFSU2_TR(0x530cbd);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B530cbe:{NFSU2_TR(0x530cbe);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B530cbf:{NFSU2_TR(0x530cbf);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B530cc0:{NFSU2_TR(0x530cc0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x530cc5ull));
TAIL_STATIC(0x51d4d0u,51d);
}
B530cc5:L530cc5:{c.instructions+=1;NFSU2_TR(0x530cc5);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x3cull))));
}
B530cc8:L530cc8:{c.instructions+=10;NFSU2_TR(0x530cc8);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B530ccc:{NFSU2_TR(0x530ccc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x80ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B530cd2:{NFSU2_TR(0x530cd2);
{u32 ea_=u32(u32(7895772u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B530cd8:{NFSU2_TR(0x530cd8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x8ull))));
}
B530cdb:{NFSU2_TR(0x530cdb);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B530cdf:{NFSU2_TR(0x530cdf);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B530ce3:{NFSU2_TR(0x530ce3);
{u32 ea_=u32(u32(7887744u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B530ce9:{NFSU2_TR(0x530ce9);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B530cec:{NFSU2_TR(0x530cec);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B530ced:{NFSU2_TR(0x530ced);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x530cf2ull));
TAIL_STATIC(0x51d380u,51d);
}
B530cf2:L530cf2:{c.instructions+=7;NFSU2_TR(0x530cf2);
{u32 ea_=u32(r4(R+24)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B530cf5:{NFSU2_TR(0x530cf5);
{u32 ea_=u32(r4(R+24)+u32(188u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B530cfb:{NFSU2_TR(0x530cfb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B530cfe:{NFSU2_TR(0x530cfe);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6cull))));
__builtin_memmove((R+4),(U+0),4);
}
B530d01:{NFSU2_TR(0x530d01);
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
B530d04:{NFSU2_TR(0x530d04);
{u32 ea_=u32(r4(R+24)+u32(32u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B530d07:{NFSU2_TR(0x530d07);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x530d0aull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B530d0a:L530d0a:{c.instructions+=5;NFSU2_TR(0x530d0a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B530d0b:{NFSU2_TR(0x530d0b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B530d0c:{NFSU2_TR(0x530d0c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B530d0d:{NFSU2_TR(0x530d0d);
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
B530d10:{NFSU2_TR(0x530d10);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B530d20:L530d20:{c.instructions+=23;NFSU2_TR(0x530d20);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B530d24:{NFSU2_TR(0x530d24);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B530d28:{NFSU2_TR(0x530d28);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B530d29:{NFSU2_TR(0x530d29);
__builtin_memmove((R+24),(R+4),4);
}
B530d2b:{NFSU2_TR(0x530d2b);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B530d2f:{NFSU2_TR(0x530d2f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B530d32:{NFSU2_TR(0x530d32);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B530d36:{NFSU2_TR(0x530d36);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x78ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B530d39:{NFSU2_TR(0x530d39);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B530d3d:{NFSU2_TR(0x530d3d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x80ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B530d43:{NFSU2_TR(0x530d43);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B530d47:{NFSU2_TR(0x530d47);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B530d4d:{NFSU2_TR(0x530d4d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x84ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B530d53:{NFSU2_TR(0x530d53);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B530d57:{NFSU2_TR(0x530d57);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x88ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B530d5d:{NFSU2_TR(0x530d5d);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B530d61:{NFSU2_TR(0x530d61);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B530d62:{NFSU2_TR(0x530d62);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B530d66:{NFSU2_TR(0x530d66);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B530d6c:{NFSU2_TR(0x530d6c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B530d6f:{NFSU2_TR(0x530d6f);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B530d70:{NFSU2_TR(0x530d70);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B530d71:{NFSU2_TR(0x530d71);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x530d76ull));
TAIL_STATIC(0x51d730u,51d);
}
B530d76:L530d76:{c.instructions+=7;NFSU2_TR(0x530d76);
{u32 ea_=u32(r4(R+24)+u32(172u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B530d7c:{NFSU2_TR(0x530d7c);
__asm__ volatile(".byte 0xdc,0xc0":::"memory");
}
B530d7e:{NFSU2_TR(0x530d7e);
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
B530d81:{NFSU2_TR(0x530d81);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B530d85:{NFSU2_TR(0x530d85);
{u32 ea_=u32(r4(R+24)+u32(168u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B530d8b:{NFSU2_TR(0x530d8b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B530d8c:{NFSU2_TR(0x530d8c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x1cull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B530d90:L530d90:{c.instructions+=8;NFSU2_TR(0x530d90);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x8ull))));
}
B530d93:{NFSU2_TR(0x530d93);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B530d94:{NFSU2_TR(0x530d94);
__builtin_memmove((R+24),(R+4),4);
}
B530d96:{NFSU2_TR(0x530d96);
__builtin_memmove((R+4),gp(0x83a540),4);
}
B530d9c:{NFSU2_TR(0x530d9c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B530d9d:{NFSU2_TR(0x530d9d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B530da0:{NFSU2_TR(0x530da0);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B530da1:{NFSU2_TR(0x530da1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x530da6ull));
TAIL_STATIC(0x59b080u,59b);
}
B530da6:L530da6:{c.instructions+=2;NFSU2_TR(0x530da6);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B530da8:{NFSU2_TR(0x530da8);
if(r1(R+518)){{goto L530dbc;}}
}
B530daa:L530daa:{c.instructions+=5;NFSU2_TR(0x530daa);
__builtin_memmove((R+4),gp(0x83a540),4);
}
B530db0:{NFSU2_TR(0x530db0);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B530db2:{NFSU2_TR(0x530db2);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B530db4:{NFSU2_TR(0x530db4);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B530db5:{NFSU2_TR(0x530db5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x530dbaull));
TAIL_STATIC(0x5b0bd0u,5b0);
}
B530dba:L530dba:{c.instructions+=1;NFSU2_TR(0x530dba);
{goto L530dc2;}
}
B530dbc:L530dbc:{c.instructions+=1;NFSU2_TR(0x530dbc);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B530dc2:L530dc2:{c.instructions+=5;NFSU2_TR(0x530dc2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B530dc5:{NFSU2_TR(0x530dc5);
{u32 ea_=u32(r4(R+24)+u32(148u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B530dcb:{NFSU2_TR(0x530dcb);
__builtin_memmove((R+4),gp(0x83a540),4);
}
B530dd1:{NFSU2_TR(0x530dd1);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B530dd2:{NFSU2_TR(0x530dd2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x530dd7ull));
TAIL_STATIC(0x59b080u,59b);
}
B530dd7:L530dd7:{c.instructions+=2;NFSU2_TR(0x530dd7);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B530dd9:{NFSU2_TR(0x530dd9);
if(r1(R+518)){{goto L530dfa;}}
}
B530ddb:L530ddb:{c.instructions+=5;NFSU2_TR(0x530ddb);
__builtin_memmove((R+4),gp(0x83a540),4);
}
B530de1:{NFSU2_TR(0x530de1);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B530de3:{NFSU2_TR(0x530de3);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B530de5:{NFSU2_TR(0x530de5);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B530de6:{NFSU2_TR(0x530de6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x530debull));
TAIL_STATIC(0x5b0c00u,5b0);
}
B530deb:L530deb:{c.instructions+=4;NFSU2_TR(0x530deb);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B530df1:{NFSU2_TR(0x530df1);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B530df3:{NFSU2_TR(0x530df3);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B530df6:{NFSU2_TR(0x530df6);
if(r1(R+514)){{goto L530e00;}}
}
B530df8:L530df8:{c.instructions+=1;NFSU2_TR(0x530df8);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B530dfa:L530dfa:{c.instructions+=1;NFSU2_TR(0x530dfa);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B530e00:L530e00:{c.instructions+=5;NFSU2_TR(0x530e00);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B530e03:{NFSU2_TR(0x530e03);
{u32 ea_=u32(r4(R+24)+u32(144u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B530e09:{NFSU2_TR(0x530e09);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B530e0a:{NFSU2_TR(0x530e0a);
w4(R+4,u32(0x839c40ull));
}
B530e0f:{NFSU2_TR(0x530e0f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x530e14ull));
TAIL_STATIC(0x522560u,522);
}
B530e14:L530e14:{c.instructions+=5;NFSU2_TR(0x530e14);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B530e17:{NFSU2_TR(0x530e17);
{u32 ea_=u32(r4(R+24)+u32(164u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B530e1d:{NFSU2_TR(0x530e1d);
__builtin_memmove((R+4),gp(0x83a540),4);
}
B530e23:{NFSU2_TR(0x530e23);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B530e24:{NFSU2_TR(0x530e24);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x530e29ull));
TAIL_STATIC(0x59b080u,59b);
}
B530e29:L530e29:{c.instructions+=2;NFSU2_TR(0x530e29);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B530e2b:{NFSU2_TR(0x530e2b);
if(r1(R+518)){{goto L530e3f;}}
}
B530e2d:L530e2d:{c.instructions+=5;NFSU2_TR(0x530e2d);
__builtin_memmove((R+4),gp(0x83a540),4);
}
B530e33:{NFSU2_TR(0x530e33);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B530e35:{NFSU2_TR(0x530e35);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B530e37:{NFSU2_TR(0x530e37);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B530e38:{NFSU2_TR(0x530e38);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x530e3dull));
TAIL_STATIC(0x5b3e40u,5b3);
}
B530e3d:L530e3d:{c.instructions+=1;NFSU2_TR(0x530e3d);
{goto L530e45;}
}
B530e3f:L530e3f:{c.instructions+=1;NFSU2_TR(0x530e3f);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B530e45:L530e45:{c.instructions+=7;NFSU2_TR(0x530e45);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x9cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B530e4b:{NFSU2_TR(0x530e4b);
{u32 ea_=u32(r4(R+24)+u32(156u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B530e51:{NFSU2_TR(0x530e51);
{u32 ea_=u32(r4(R+24)+u32(144u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B530e57:{NFSU2_TR(0x530e57);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x98ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B530e5d:{NFSU2_TR(0x530e5d);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B530e5f:{NFSU2_TR(0x530e5f);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B530e62:{NFSU2_TR(0x530e62);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L530e70;}}
}
B530e64:L530e64:{c.instructions+=2;NFSU2_TR(0x530e64);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x90ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B530e6a:{NFSU2_TR(0x530e6a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x9cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B530e70:L530e70:{c.instructions+=5;NFSU2_TR(0x530e70);
{u32 ea_=u32(r4(R+24)+u32(156u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B530e76:{NFSU2_TR(0x530e76);
{u32 ea_=u32(r4(R+24)+u32(148u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B530e7c:{NFSU2_TR(0x530e7c);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B530e7e:{NFSU2_TR(0x530e7e);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B530e81:{NFSU2_TR(0x530e81);
if(r1(R+514)){{goto L530e8f;}}
}
B530e83:L530e83:{c.instructions+=2;NFSU2_TR(0x530e83);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x94ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B530e89:{NFSU2_TR(0x530e89);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x9cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B530e8f:L530e8f:{c.instructions+=4;NFSU2_TR(0x530e8f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B530e92:{NFSU2_TR(0x530e92);
__builtin_memmove((R+4),gp(0x83a540),4);
}
B530e98:{NFSU2_TR(0x530e98);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B530e99:{NFSU2_TR(0x530e99);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x530e9eull));
TAIL_STATIC(0x59b080u,59b);
}
B530e9e:L530e9e:{c.instructions+=2;NFSU2_TR(0x530e9e);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B530ea0:{NFSU2_TR(0x530ea0);
if(r1(R+518)){{goto L530ec1;}}
}
B530ea2:L530ea2:{c.instructions+=5;NFSU2_TR(0x530ea2);
__builtin_memmove((R+4),gp(0x83a540),4);
}
B530ea8:{NFSU2_TR(0x530ea8);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B530eaa:{NFSU2_TR(0x530eaa);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B530eac:{NFSU2_TR(0x530eac);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B530ead:{NFSU2_TR(0x530ead);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x530eb2ull));
TAIL_STATIC(0x5b2bd0u,5b2);
}
B530eb2:L530eb2:{c.instructions+=4;NFSU2_TR(0x530eb2);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B530eb8:{NFSU2_TR(0x530eb8);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B530eba:{NFSU2_TR(0x530eba);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B530ebd:{NFSU2_TR(0x530ebd);
if(r1(R+514)){{goto L530ec7;}}
}
B530ebf:L530ebf:{c.instructions+=1;NFSU2_TR(0x530ebf);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B530ec1:L530ec1:{c.instructions+=1;NFSU2_TR(0x530ec1);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B530ec7:L530ec7:{c.instructions+=5;NFSU2_TR(0x530ec7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B530eca:{NFSU2_TR(0x530eca);
{u32 ea_=u32(r4(R+24)+u32(180u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B530ed0:{NFSU2_TR(0x530ed0);
__builtin_memmove((R+4),gp(0x83a540),4);
}
B530ed6:{NFSU2_TR(0x530ed6);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B530ed7:{NFSU2_TR(0x530ed7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x530edcull));
TAIL_STATIC(0x59b080u,59b);
}
B530edc:L530edc:{c.instructions+=2;NFSU2_TR(0x530edc);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B530ede:{NFSU2_TR(0x530ede);
if(r1(R+518)){{goto L530ef2;}}
}
B530ee0:L530ee0:{c.instructions+=5;NFSU2_TR(0x530ee0);
__builtin_memmove((R+4),gp(0x83a540),4);
}
B530ee6:{NFSU2_TR(0x530ee6);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B530ee8:{NFSU2_TR(0x530ee8);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B530eea:{NFSU2_TR(0x530eea);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B530eeb:{NFSU2_TR(0x530eeb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x530ef0ull));
TAIL_STATIC(0x5b2ba0u,5b2);
}
B530ef0:L530ef0:{c.instructions+=1;NFSU2_TR(0x530ef0);
{goto L530ef8;}
}
B530ef2:L530ef2:{c.instructions+=1;NFSU2_TR(0x530ef2);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B530ef8:L530ef8:{c.instructions+=8;NFSU2_TR(0x530ef8);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B530efc:{NFSU2_TR(0x530efc);
{u32 ea_=u32(r4(R+24)+u32(184u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B530f02:{NFSU2_TR(0x530f02);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B530f05:{NFSU2_TR(0x530f05);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B530f06:{NFSU2_TR(0x530f06);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B530f0a:{NFSU2_TR(0x530f0a);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B530f0b:{NFSU2_TR(0x530f0b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B530f0c:{NFSU2_TR(0x530f0c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x530f11ull));
TAIL_STATIC(0x51d730u,51d);
}
B530f11:L530f11:{c.instructions+=9;NFSU2_TR(0x530f11);
{u32 ea_=u32(r4(R+24)+u32(172u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B530f17:{NFSU2_TR(0x530f17);
__asm__ volatile(".byte 0xdc,0xc0":::"memory");
}
B530f19:{NFSU2_TR(0x530f19);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B530f1c:{NFSU2_TR(0x530f1c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B530f1d:{NFSU2_TR(0x530f1d);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B530f21:{NFSU2_TR(0x530f21);
{u32 ea_=u32(r4(R+24)+u32(168u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B530f27:{NFSU2_TR(0x530f27);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B530f28:{NFSU2_TR(0x530f28);
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
B530f2b:{NFSU2_TR(0x530f2b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B530f30:L530f30:{c.instructions+=8;NFSU2_TR(0x530f30);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B530f34:{NFSU2_TR(0x530f34);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B530f35:{NFSU2_TR(0x530f35);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B530f36:{NFSU2_TR(0x530f36);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B530f37:{NFSU2_TR(0x530f37);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B530f38:{NFSU2_TR(0x530f38);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B530f39:{NFSU2_TR(0x530f39);
__builtin_memmove((R+12),(R+4),4);
}
B530f3b:{NFSU2_TR(0x530f3b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x530f40ull));
TAIL_STATIC(0x52db40u,52d);
}
B530f40:L530f40:{c.instructions+=3;NFSU2_TR(0x530f40);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B530f43:{NFSU2_TR(0x530f43);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x6cull))));
__builtin_memmove((R+4),(U+0),4);
}
B530f46:{NFSU2_TR(0x530f46);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x530f49ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B530f49:L530f49:{c.instructions+=4;NFSU2_TR(0x530f49);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B530f4c:{NFSU2_TR(0x530f4c);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B530f4e:{NFSU2_TR(0x530f4e);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B530f50:{NFSU2_TR(0x530f50);
if(r1(R+518)){{goto L530f99;}}
}
B530f52:L530f52:{c.instructions+=3;NFSU2_TR(0x530f52);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B530f55:{NFSU2_TR(0x530f55);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B530f57:{NFSU2_TR(0x530f57);
if(r1(R+518)){{goto L530f99;}}
}
B530f59:L530f59:{c.instructions+=1;NFSU2_TR(0x530f59);
__builtin_memmove((R+16),(R+16),4);
}
B530f60:L530f60:{c.instructions+=2;NFSU2_TR(0x530f60);
u8 U[4];
w4(U+0,u32(0x78f228ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B530f65:{NFSU2_TR(0x530f65);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x530f6aull));
TAIL_STATIC(0x505450u,505);
}
B530f6a:L530f6a:{c.instructions+=4;NFSU2_TR(0x530f6a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B530f6d:{NFSU2_TR(0x530f6d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B530f70:{NFSU2_TR(0x530f70);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B530f72:{NFSU2_TR(0x530f72);
if(r1(R+518)){{goto L530f7d;}}
}
B530f74:L530f74:{c.instructions+=3;NFSU2_TR(0x530f74);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B530f77:{NFSU2_TR(0x530f77);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B530f79:{NFSU2_TR(0x530f79);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x530f60u);}goto L530f60;}}
}
B530f7b:L530f7b:{c.instructions+=1;NFSU2_TR(0x530f7b);
{goto L530f99;}
}
B530f7d:L530f7d:{c.instructions+=2;NFSU2_TR(0x530f7d);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B530f7f:{NFSU2_TR(0x530f7f);
if(r1(R+518)){{goto L530f99;}}
}
B530f81:L530f81:{c.instructions+=2;NFSU2_TR(0x530f81);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+24))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B530f84:{NFSU2_TR(0x530f84);
if(r1(R+518)){{goto L530f96;}}
}
B530f86:L530f86:{c.instructions+=3;NFSU2_TR(0x530f86);
__builtin_memmove((R+4),(R+28),4);
}
B530f88:{NFSU2_TR(0x530f88);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B530f8b:{NFSU2_TR(0x530f8b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x530f90ull));
TAIL_STATIC(0x517720u,517);
}
B530f90:L530f90:{c.instructions+=2;NFSU2_TR(0x530f90);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B530f93:{NFSU2_TR(0x530f93);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B530f96:L530f96:{c.instructions+=1;NFSU2_TR(0x530f96);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B530f99:L530f99:{c.instructions+=3;NFSU2_TR(0x530f99);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B530f9c:{NFSU2_TR(0x530f9c);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B530f9e:{NFSU2_TR(0x530f9e);
if(r1(R+518)){{goto L530fe9;}}
}
B530fa0:L530fa0:{c.instructions+=3;NFSU2_TR(0x530fa0);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B530fa3:{NFSU2_TR(0x530fa3);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B530fa5:{NFSU2_TR(0x530fa5);
if(r1(R+518)){{goto L530fe9;}}
}
B530fa7:L530fa7:{c.instructions+=1;NFSU2_TR(0x530fa7);
{goto L530fb0;}
}
B530fb0:L530fb0:{c.instructions+=2;NFSU2_TR(0x530fb0);
u8 U[4];
w4(U+0,u32(0x78f228ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B530fb5:{NFSU2_TR(0x530fb5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x530fbaull));
TAIL_STATIC(0x505450u,505);
}
B530fba:L530fba:{c.instructions+=4;NFSU2_TR(0x530fba);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B530fbd:{NFSU2_TR(0x530fbd);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B530fc0:{NFSU2_TR(0x530fc0);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B530fc2:{NFSU2_TR(0x530fc2);
if(r1(R+518)){{goto L530fcd;}}
}
B530fc4:L530fc4:{c.instructions+=3;NFSU2_TR(0x530fc4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B530fc7:{NFSU2_TR(0x530fc7);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B530fc9:{NFSU2_TR(0x530fc9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x530fb0u);}goto L530fb0;}}
}
B530fcb:L530fcb:{c.instructions+=1;NFSU2_TR(0x530fcb);
{goto L530fe9;}
}
B530fcd:L530fcd:{c.instructions+=2;NFSU2_TR(0x530fcd);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B530fcf:{NFSU2_TR(0x530fcf);
if(r1(R+518)){{goto L530fe9;}}
}
B530fd1:L530fd1:{c.instructions+=2;NFSU2_TR(0x530fd1);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+24))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B530fd4:{NFSU2_TR(0x530fd4);
if(r1(R+518)){{goto L530fe6;}}
}
B530fd6:L530fd6:{c.instructions+=3;NFSU2_TR(0x530fd6);
__builtin_memmove((R+4),(R+28),4);
}
B530fd8:{NFSU2_TR(0x530fd8);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B530fdb:{NFSU2_TR(0x530fdb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x530fe0ull));
TAIL_STATIC(0x517720u,517);
}
B530fe0:L530fe0:{c.instructions+=2;NFSU2_TR(0x530fe0);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B530fe3:{NFSU2_TR(0x530fe3);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B530fe6:L530fe6:{c.instructions+=1;NFSU2_TR(0x530fe6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B530fe9:L530fe9:{c.instructions+=7;NFSU2_TR(0x530fe9);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B530fec:{NFSU2_TR(0x530fec);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B530fed:{NFSU2_TR(0x530fed);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B530fee:{NFSU2_TR(0x530fee);
u8 U[14];
__builtin_memmove((U+6),(R+20),4);
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
B530ff0:{NFSU2_TR(0x530ff0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B530ff1:{NFSU2_TR(0x530ff1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B530ff2:{NFSU2_TR(0x530ff2);
if(r1(R+518)){TAIL_STATIC(0x531004u,531);}
}
B530ff4:L530ff4:{c.instructions+=4;NFSU2_TR(0x530ff4);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B530ff6:{NFSU2_TR(0x530ff6);
u8 U[4];
w4(U+0,u32(0x78f228ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B530ffb:{NFSU2_TR(0x530ffb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B530ffc:{NFSU2_TR(0x530ffc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x531001ull));
TAIL_STATIC(0x51cf70u,51c);
}
XIT:NFSU2_TR_EXIT(0x530,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
