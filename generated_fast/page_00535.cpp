#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_43b(u8* __restrict R,Cpu& c);
u32 body_4fe(u8* __restrict R,Cpu& c);
u32 body_505(u8* __restrict R,Cpu& c);
u32 body_511(u8* __restrict R,Cpu& c);
u32 body_518(u8* __restrict R,Cpu& c);
u32 body_519(u8* __restrict R,Cpu& c);
u32 body_51d(u8* __restrict R,Cpu& c);
u32 body_52b(u8* __restrict R,Cpu& c);
u32 body_52d(u8* __restrict R,Cpu& c);
u32 body_536(u8* __restrict R,Cpu& c);
u32 body_575(u8* __restrict R,Cpu& c);
u32 body_75c(u8* __restrict R,Cpu& c);
u32 body_75d(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x535,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x535,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_535(u8* __restrict R,Cpu& c);
u32 page_535(Cpu& c){return body_535(c.regs.data(),c);}
__attribute__((noinline)) u32 body_535(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x535000:goto L535000;
case 0x535002:goto L535002;
case 0x535005:c.instructions+=3;goto B535005;
case 0x535006:c.instructions+=2;goto B535006;
case 0x53500a:c.instructions+=1;goto B53500a;
case 0x53500f:goto L53500f;
case 0x535012:c.instructions+=3;goto B535012;
case 0x535013:c.instructions+=2;goto B535013;
case 0x535017:c.instructions+=1;goto B535017;
case 0x53501c:goto L53501c;
case 0x53501f:c.instructions+=3;goto B53501f;
case 0x535022:c.instructions+=2;goto B535022;
case 0x535023:c.instructions+=1;goto B535023;
case 0x535026:goto L535026;
case 0x53502b:c.instructions+=1;goto B53502b;
case 0x53502d:goto L53502d;
case 0x535032:c.instructions+=1;goto B535032;
case 0x535034:goto L535034;
case 0x535039:c.instructions+=1;goto B535039;
case 0x53503b:goto L53503b;
case 0x53503e:c.instructions+=3;goto B53503e;
case 0x535041:c.instructions+=2;goto B535041;
case 0x535042:c.instructions+=1;goto B535042;
case 0x535045:goto L535045;
case 0x535048:c.instructions+=4;goto B535048;
case 0x535049:c.instructions+=3;goto B535049;
case 0x53504d:c.instructions+=2;goto B53504d;
case 0x535050:c.instructions+=1;goto B535050;
case 0x535055:goto L535055;
case 0x535058:c.instructions+=1;goto B535058;
case 0x53505b:goto L53505b;
case 0x53505c:c.instructions+=1;goto B53505c;
case 0x535060:goto L535060;
case 0x535064:c.instructions+=5;goto B535064;
case 0x535067:c.instructions+=4;goto B535067;
case 0x53506a:c.instructions+=3;goto B53506a;
case 0x53506d:c.instructions+=2;goto B53506d;
case 0x535073:c.instructions+=1;goto B535073;
case 0x535075:goto L535075;
case 0x535077:goto L535077;
case 0x53507d:c.instructions+=1;goto B53507d;
case 0x53507f:goto L53507f;
case 0x535085:c.instructions+=1;goto B535085;
case 0x535087:goto L535087;
case 0x53508d:c.instructions+=1;goto B53508d;
case 0x535093:goto L535093;
case 0x535096:c.instructions+=8;goto B535096;
case 0x535099:c.instructions+=7;goto B535099;
case 0x53509a:c.instructions+=6;goto B53509a;
case 0x53509d:c.instructions+=5;goto B53509d;
case 0x53509e:c.instructions+=4;goto B53509e;
case 0x53509f:c.instructions+=3;goto B53509f;
case 0x5350a1:c.instructions+=2;goto B5350a1;
case 0x5350a3:c.instructions+=1;goto B5350a3;
case 0x5350a8:goto L5350a8;
case 0x5350ab:c.instructions+=1;goto B5350ab;
case 0x5350ae:goto L5350ae;
case 0x5350b1:c.instructions+=4;goto B5350b1;
case 0x5350b4:c.instructions+=3;goto B5350b4;
case 0x5350b5:c.instructions+=2;goto B5350b5;
case 0x5350b6:c.instructions+=1;goto B5350b6;
case 0x5350bb:goto L5350bb;
case 0x5350be:c.instructions+=1;goto B5350be;
case 0x5350c1:goto L5350c1;
case 0x5350c4:c.instructions+=4;goto B5350c4;
case 0x5350c7:c.instructions+=3;goto B5350c7;
case 0x5350c8:c.instructions+=2;goto B5350c8;
case 0x5350c9:c.instructions+=1;goto B5350c9;
case 0x5350ce:goto L5350ce;
case 0x5350d1:c.instructions+=1;goto B5350d1;
case 0x5350d4:goto L5350d4;
case 0x5350d7:c.instructions+=8;goto B5350d7;
case 0x5350da:c.instructions+=7;goto B5350da;
case 0x5350db:c.instructions+=6;goto B5350db;
case 0x5350de:c.instructions+=5;goto B5350de;
case 0x5350df:c.instructions+=4;goto B5350df;
case 0x5350e0:c.instructions+=3;goto B5350e0;
case 0x5350e2:c.instructions+=2;goto B5350e2;
case 0x5350e4:c.instructions+=1;goto B5350e4;
case 0x5350e9:goto L5350e9;
case 0x5350ec:c.instructions+=1;goto B5350ec;
case 0x5350ef:goto L5350ef;
case 0x5350f5:c.instructions+=1;goto B5350f5;
case 0x5350f7:goto L5350f7;
case 0x5350fd:c.instructions+=1;goto B5350fd;
case 0x5350ff:goto L5350ff;
case 0x535105:c.instructions+=1;goto B535105;
case 0x535107:goto L535107;
case 0x53510a:c.instructions+=5;goto B53510a;
case 0x53510d:c.instructions+=4;goto B53510d;
case 0x535113:c.instructions+=3;goto B535113;
case 0x535119:c.instructions+=2;goto B535119;
case 0x53511c:c.instructions+=1;goto B53511c;
case 0x53511f:goto L53511f;
case 0x535122:c.instructions+=8;goto B535122;
case 0x535125:c.instructions+=7;goto B535125;
case 0x535128:c.instructions+=6;goto B535128;
case 0x53512b:c.instructions+=5;goto B53512b;
case 0x53512e:c.instructions+=4;goto B53512e;
case 0x535130:c.instructions+=3;goto B535130;
case 0x535133:c.instructions+=2;goto B535133;
case 0x535136:c.instructions+=1;goto B535136;
case 0x535139:goto L535139;
case 0x53513c:c.instructions+=12;goto B53513c;
case 0x53513f:c.instructions+=11;goto B53513f;
case 0x535143:c.instructions+=10;goto B535143;
case 0x535146:c.instructions+=9;goto B535146;
case 0x535147:c.instructions+=8;goto B535147;
case 0x53514b:c.instructions+=7;goto B53514b;
case 0x53514e:c.instructions+=6;goto B53514e;
case 0x53514f:c.instructions+=5;goto B53514f;
case 0x535153:c.instructions+=4;goto B535153;
case 0x535154:c.instructions+=3;goto B535154;
case 0x535156:c.instructions+=2;goto B535156;
case 0x535158:c.instructions+=1;goto B535158;
case 0x53515d:goto L53515d;
case 0x535160:c.instructions+=1;goto B535160;
case 0x535170:goto L535170;
case 0x535172:c.instructions+=15;goto B535172;
case 0x535177:c.instructions+=14;goto B535177;
case 0x53517d:c.instructions+=13;goto B53517d;
case 0x53517e:c.instructions+=12;goto B53517e;
case 0x535185:c.instructions+=11;goto B535185;
case 0x535186:c.instructions+=10;goto B535186;
case 0x535187:c.instructions+=9;goto B535187;
case 0x535188:c.instructions+=8;goto B535188;
case 0x53518a:c.instructions+=7;goto B53518a;
case 0x53518e:c.instructions+=6;goto B53518e;
case 0x535194:c.instructions+=5;goto B535194;
case 0x535197:c.instructions+=4;goto B535197;
case 0x535199:c.instructions+=3;goto B535199;
case 0x53519b:c.instructions+=2;goto B53519b;
case 0x5351a3:c.instructions+=1;goto B5351a3;
case 0x5351a5:goto L5351a5;
case 0x5351a8:c.instructions+=7;goto B5351a8;
case 0x5351a9:c.instructions+=6;goto B5351a9;
case 0x5351ac:c.instructions+=5;goto B5351ac;
case 0x5351b1:c.instructions+=4;goto B5351b1;
case 0x5351b2:c.instructions+=3;goto B5351b2;
case 0x5351b4:c.instructions+=2;goto B5351b4;
case 0x5351b5:c.instructions+=1;goto B5351b5;
case 0x5351ba:goto L5351ba;
case 0x5351bb:c.instructions+=1;goto B5351bb;
case 0x5351c0:goto L5351c0;
case 0x5351c3:c.instructions+=1;goto B5351c3;
case 0x5351c4:goto L5351c4;
case 0x5351c7:c.instructions+=3;goto B5351c7;
case 0x5351c9:c.instructions+=2;goto B5351c9;
case 0x5351cc:c.instructions+=1;goto B5351cc;
case 0x5351ce:goto L5351ce;
case 0x5351cf:c.instructions+=1;goto B5351cf;
case 0x5351d4:goto L5351d4;
case 0x5351d7:goto L5351d7;
case 0x5351da:c.instructions+=4;goto B5351da;
case 0x5351dd:c.instructions+=3;goto B5351dd;
case 0x5351de:c.instructions+=2;goto B5351de;
case 0x5351e2:c.instructions+=1;goto B5351e2;
case 0x5351e7:goto L5351e7;
case 0x5351eb:c.instructions+=8;goto B5351eb;
case 0x5351ee:c.instructions+=7;goto B5351ee;
case 0x5351f1:c.instructions+=6;goto B5351f1;
case 0x5351f7:c.instructions+=5;goto B5351f7;
case 0x5351f8:c.instructions+=4;goto B5351f8;
case 0x5351f9:c.instructions+=3;goto B5351f9;
case 0x535200:c.instructions+=2;goto B535200;
case 0x535203:c.instructions+=1;goto B535203;
case 0x535210:goto L535210;
case 0x535216:c.instructions+=12;goto B535216;
case 0x535218:c.instructions+=11;goto B535218;
case 0x53521d:c.instructions+=10;goto B53521d;
case 0x53521e:c.instructions+=9;goto B53521e;
case 0x535225:c.instructions+=8;goto B535225;
case 0x535226:c.instructions+=7;goto B535226;
case 0x535227:c.instructions+=6;goto B535227;
case 0x535229:c.instructions+=5;goto B535229;
case 0x53522c:c.instructions+=4;goto B53522c;
case 0x53522d:c.instructions+=3;goto B53522d;
case 0x53522f:c.instructions+=2;goto B53522f;
case 0x535231:c.instructions+=1;goto B535231;
case 0x535233:goto L535233;
case 0x535236:c.instructions+=6;goto B535236;
case 0x535239:c.instructions+=5;goto B535239;
case 0x53523e:c.instructions+=4;goto B53523e;
case 0x53523f:c.instructions+=3;goto B53523f;
case 0x535241:c.instructions+=2;goto B535241;
case 0x535242:c.instructions+=1;goto B535242;
case 0x535247:goto L535247;
case 0x535248:c.instructions+=1;goto B535248;
case 0x53524d:goto L53524d;
case 0x535250:goto L535250;
case 0x535254:c.instructions+=4;goto B535254;
case 0x535256:c.instructions+=3;goto B535256;
case 0x535259:c.instructions+=2;goto B535259;
case 0x53525c:c.instructions+=1;goto B53525c;
case 0x53525e:goto L53525e;
case 0x535260:c.instructions+=4;goto B535260;
case 0x535263:c.instructions+=3;goto B535263;
case 0x535266:c.instructions+=2;goto B535266;
case 0x535267:c.instructions+=1;goto B535267;
case 0x53526c:goto L53526c;
case 0x53526f:c.instructions+=4;goto B53526f;
case 0x535273:c.instructions+=3;goto B535273;
case 0x535275:c.instructions+=2;goto B535275;
case 0x535279:c.instructions+=1;goto B535279;
case 0x53527b:goto L53527b;
case 0x535280:c.instructions+=7;goto B535280;
case 0x535285:c.instructions+=6;goto B535285;
case 0x535286:c.instructions+=5;goto B535286;
case 0x535289:c.instructions+=4;goto B535289;
case 0x53528b:c.instructions+=3;goto B53528b;
case 0x53528c:c.instructions+=2;goto B53528c;
case 0x53528e:c.instructions+=1;goto B53528e;
case 0x535293:goto L535293;
case 0x535296:goto L535296;
case 0x53529a:c.instructions+=6;goto B53529a;
case 0x53529b:c.instructions+=5;goto B53529b;
case 0x53529c:c.instructions+=4;goto B53529c;
case 0x5352a3:c.instructions+=3;goto B5352a3;
case 0x5352a4:c.instructions+=2;goto B5352a4;
case 0x5352a7:c.instructions+=1;goto B5352a7;
case 0x5352b0:goto L5352b0;
case 0x5352b1:c.instructions+=2;goto B5352b1;
case 0x5352b3:c.instructions+=1;goto B5352b3;
case 0x5352b8:goto L5352b8;
case 0x5352bd:c.instructions+=1;goto B5352bd;
case 0x5352bf:goto L5352bf;
case 0x5352c0:c.instructions+=1;goto B5352c0;
case 0x5352c5:goto L5352c5;
case 0x5352c8:goto L5352c8;
case 0x5352ca:c.instructions+=2;goto B5352ca;
case 0x5352cb:c.instructions+=1;goto B5352cb;
case 0x5352d0:goto L5352d0;
case 0x5352d1:c.instructions+=24;goto B5352d1;
case 0x5352d2:c.instructions+=23;goto B5352d2;
case 0x5352d3:c.instructions+=22;goto B5352d3;
case 0x5352d5:c.instructions+=21;goto B5352d5;
case 0x5352d8:c.instructions+=20;goto B5352d8;
case 0x5352d9:c.instructions+=19;goto B5352d9;
case 0x5352dd:c.instructions+=18;goto B5352dd;
case 0x5352e0:c.instructions+=17;goto B5352e0;
case 0x5352e3:c.instructions+=16;goto B5352e3;
case 0x5352e5:c.instructions+=15;goto B5352e5;
case 0x5352e8:c.instructions+=14;goto B5352e8;
case 0x5352ee:c.instructions+=13;goto B5352ee;
case 0x5352f4:c.instructions+=12;goto B5352f4;
case 0x5352fa:c.instructions+=11;goto B5352fa;
case 0x535300:c.instructions+=10;goto B535300;
case 0x535303:c.instructions+=9;goto B535303;
case 0x535306:c.instructions+=8;goto B535306;
case 0x535309:c.instructions+=7;goto B535309;
case 0x53530c:c.instructions+=6;goto B53530c;
case 0x53530f:c.instructions+=5;goto B53530f;
case 0x535312:c.instructions+=4;goto B535312;
case 0x535313:c.instructions+=3;goto B535313;
case 0x535314:c.instructions+=2;goto B535314;
case 0x535316:c.instructions+=1;goto B535316;
case 0x53531b:goto L53531b;
case 0x535321:c.instructions+=3;goto B535321;
case 0x535323:c.instructions+=2;goto B535323;
case 0x535325:c.instructions+=1;goto B535325;
case 0x535327:goto L535327;
case 0x535328:c.instructions+=1;goto B535328;
case 0x53532d:goto L53532d;
case 0x535330:c.instructions+=1;goto B535330;
case 0x535336:goto L535336;
case 0x53533c:c.instructions+=2;goto B53533c;
case 0x53533e:c.instructions+=1;goto B53533e;
case 0x535340:goto L535340;
case 0x535341:c.instructions+=1;goto B535341;
case 0x535346:goto L535346;
case 0x535349:c.instructions+=1;goto B535349;
case 0x53534f:goto L53534f;
case 0x535355:c.instructions+=8;goto B535355;
case 0x53535b:c.instructions+=7;goto B53535b;
case 0x535361:c.instructions+=6;goto B535361;
case 0x535367:c.instructions+=5;goto B535367;
case 0x53536d:c.instructions+=4;goto B53536d;
case 0x53536e:c.instructions+=3;goto B53536e;
case 0x53536f:c.instructions+=2;goto B53536f;
case 0x535371:c.instructions+=1;goto B535371;
case 0x535376:goto L535376;
case 0x535379:c.instructions+=5;goto B535379;
case 0x53537d:c.instructions+=4;goto B53537d;
case 0x53537f:c.instructions+=3;goto B53537f;
case 0x535383:c.instructions+=2;goto B535383;
case 0x535387:c.instructions+=1;goto B535387;
case 0x53538d:goto L53538d;
case 0x53538f:c.instructions+=1;goto B53538f;
case 0x535390:goto L535390;
case 0x535396:c.instructions+=34;goto B535396;
case 0x535399:c.instructions+=33;goto B535399;
case 0x53539f:c.instructions+=32;goto B53539f;
case 0x5353a2:c.instructions+=31;goto B5353a2;
case 0x5353a8:c.instructions+=30;goto B5353a8;
case 0x5353ac:c.instructions+=29;goto B5353ac;
case 0x5353b2:c.instructions+=28;goto B5353b2;
case 0x5353b6:c.instructions+=27;goto B5353b6;
case 0x5353bc:c.instructions+=26;goto B5353bc;
case 0x5353c0:c.instructions+=25;goto B5353c0;
case 0x5353c6:c.instructions+=24;goto B5353c6;
case 0x5353ca:c.instructions+=23;goto B5353ca;
case 0x5353ce:c.instructions+=22;goto B5353ce;
case 0x5353d1:c.instructions+=21;goto B5353d1;
case 0x5353d5:c.instructions+=20;goto B5353d5;
case 0x5353db:c.instructions+=19;goto B5353db;
case 0x5353df:c.instructions+=18;goto B5353df;
case 0x5353e5:c.instructions+=17;goto B5353e5;
case 0x5353e9:c.instructions+=16;goto B5353e9;
case 0x5353ed:c.instructions+=15;goto B5353ed;
case 0x5353f3:c.instructions+=14;goto B5353f3;
case 0x5353f7:c.instructions+=13;goto B5353f7;
case 0x5353fd:c.instructions+=12;goto B5353fd;
case 0x535401:c.instructions+=11;goto B535401;
case 0x535407:c.instructions+=10;goto B535407;
case 0x53540b:c.instructions+=9;goto B53540b;
case 0x535411:c.instructions+=8;goto B535411;
case 0x535415:c.instructions+=7;goto B535415;
case 0x53541b:c.instructions+=6;goto B53541b;
case 0x535421:c.instructions+=5;goto B535421;
case 0x535425:c.instructions+=4;goto B535425;
case 0x535429:c.instructions+=3;goto B535429;
case 0x53542f:c.instructions+=2;goto B53542f;
case 0x535434:c.instructions+=1;goto B535434;
case 0x535436:goto L535436;
case 0x53543c:c.instructions+=3;goto B53543c;
case 0x535440:c.instructions+=2;goto B535440;
case 0x535442:c.instructions+=1;goto B535442;
case 0x535448:goto L535448;
case 0x53544e:c.instructions+=11;goto B53544e;
case 0x535454:c.instructions+=10;goto B535454;
case 0x535457:c.instructions+=9;goto B535457;
case 0x535458:c.instructions+=8;goto B535458;
case 0x53545e:c.instructions+=7;goto B53545e;
case 0x535461:c.instructions+=6;goto B535461;
case 0x535467:c.instructions+=5;goto B535467;
case 0x53546b:c.instructions+=4;goto B53546b;
case 0x535471:c.instructions+=3;goto B535471;
case 0x535475:c.instructions+=2;goto B535475;
case 0x535477:c.instructions+=1;goto B535477;
case 0x535479:goto L535479;
case 0x53547b:c.instructions+=3;goto B53547b;
case 0x53547e:c.instructions+=2;goto B53547e;
case 0x535481:c.instructions+=1;goto B535481;
case 0x535483:goto L535483;
case 0x535486:c.instructions+=6;goto B535486;
case 0x535489:c.instructions+=5;goto B535489;
case 0x53548b:c.instructions+=4;goto B53548b;
case 0x53548e:c.instructions+=3;goto B53548e;
case 0x535491:c.instructions+=2;goto B535491;
case 0x535494:c.instructions+=1;goto B535494;
case 0x535496:goto L535496;
case 0x535499:goto L535499;
case 0x53549f:c.instructions+=4;goto B53549f;
case 0x5354a3:c.instructions+=3;goto B5354a3;
case 0x5354a5:c.instructions+=2;goto B5354a5;
case 0x5354a8:c.instructions+=1;goto B5354a8;
case 0x5354aa:goto L5354aa;
case 0x5354b0:c.instructions+=9;goto B5354b0;
case 0x5354b4:c.instructions+=8;goto B5354b4;
case 0x5354b8:c.instructions+=7;goto B5354b8;
case 0x5354bb:c.instructions+=6;goto B5354bb;
case 0x5354be:c.instructions+=5;goto B5354be;
case 0x5354c1:c.instructions+=4;goto B5354c1;
case 0x5354c4:c.instructions+=3;goto B5354c4;
case 0x5354c7:c.instructions+=2;goto B5354c7;
case 0x5354ca:c.instructions+=1;goto B5354ca;
case 0x5354cd:goto L5354cd;
case 0x5354d1:c.instructions+=6;goto B5354d1;
case 0x5354d5:c.instructions+=5;goto B5354d5;
case 0x5354d6:c.instructions+=4;goto B5354d6;
case 0x5354d9:c.instructions+=3;goto B5354d9;
case 0x5354db:c.instructions+=2;goto B5354db;
case 0x5354df:c.instructions+=1;goto B5354df;
case 0x5354e5:goto L5354e5;
case 0x5354e6:goto L5354e6;
case 0x5354e7:c.instructions+=4;goto B5354e7;
case 0x5354e8:c.instructions+=3;goto B5354e8;
case 0x5354e9:c.instructions+=2;goto B5354e9;
case 0x5354ea:c.instructions+=1;goto B5354ea;
case 0x5354f0:goto L5354f0;
case 0x5354f1:c.instructions+=4;goto B5354f1;
case 0x5354f5:c.instructions+=3;goto B5354f5;
case 0x5354f8:c.instructions+=2;goto B5354f8;
case 0x5354fa:c.instructions+=1;goto B5354fa;
case 0x5354fc:goto L5354fc;
case 0x535500:c.instructions+=2;goto B535500;
case 0x535503:c.instructions+=1;goto B535503;
case 0x535505:goto L535505;
case 0x535506:c.instructions+=1;goto B535506;
case 0x535508:goto L535508;
case 0x53550b:c.instructions+=1;goto B53550b;
case 0x53550d:goto L53550d;
case 0x535511:c.instructions+=5;goto B535511;
case 0x535515:c.instructions+=4;goto B535515;
case 0x535516:c.instructions+=3;goto B535516;
case 0x535517:c.instructions+=2;goto B535517;
case 0x535518:c.instructions+=1;goto B535518;
case 0x53551d:goto L53551d;
case 0x53551f:goto L53551f;
case 0x535523:c.instructions+=5;goto B535523;
case 0x535527:c.instructions+=4;goto B535527;
case 0x535528:c.instructions+=3;goto B535528;
case 0x535529:c.instructions+=2;goto B535529;
case 0x53552a:c.instructions+=1;goto B53552a;
case 0x53552f:goto L53552f;
case 0x535532:goto L535532;
case 0x535535:c.instructions+=4;goto B535535;
case 0x535536:c.instructions+=3;goto B535536;
case 0x535538:c.instructions+=2;goto B535538;
case 0x53553a:c.instructions+=1;goto B53553a;
case 0x53553c:goto L53553c;
case 0x53553f:c.instructions+=1;goto B53553f;
case 0x535544:goto L535544;
case 0x535546:goto L535546;
case 0x535549:goto L535549;
case 0x53554b:c.instructions+=1;goto B53554b;
case 0x53554d:goto L53554d;
case 0x535550:goto L535550;
case 0x535553:c.instructions+=3;goto B535553;
case 0x535554:c.instructions+=2;goto B535554;
case 0x535556:c.instructions+=1;goto B535556;
case 0x535558:goto L535558;
case 0x53555a:c.instructions+=1;goto B53555a;
case 0x53555c:goto L53555c;
case 0x535560:goto L535560;
case 0x535561:goto L535561;
case 0x535562:c.instructions+=1;goto B535562;
case 0x535570:goto L535570;
case 0x535573:c.instructions+=7;goto B535573;
case 0x535574:c.instructions+=6;goto B535574;
case 0x535575:c.instructions+=5;goto B535575;
case 0x535577:c.instructions+=4;goto B535577;
case 0x53557b:c.instructions+=3;goto B53557b;
case 0x53557e:c.instructions+=2;goto B53557e;
case 0x53557f:c.instructions+=1;goto B53557f;
case 0x535581:goto L535581;
case 0x535582:c.instructions+=1;goto B535582;
case 0x535584:goto L535584;
case 0x535587:c.instructions+=1;goto B535587;
case 0x535589:goto L535589;
case 0x53558d:c.instructions+=5;goto B53558d;
case 0x535591:c.instructions+=4;goto B535591;
case 0x535592:c.instructions+=3;goto B535592;
case 0x535593:c.instructions+=2;goto B535593;
case 0x535594:c.instructions+=1;goto B535594;
case 0x535599:goto L535599;
case 0x53559b:goto L53559b;
case 0x53559f:c.instructions+=5;goto B53559f;
case 0x5355a3:c.instructions+=4;goto B5355a3;
case 0x5355a4:c.instructions+=3;goto B5355a4;
case 0x5355a5:c.instructions+=2;goto B5355a5;
case 0x5355a6:c.instructions+=1;goto B5355a6;
case 0x5355ab:goto L5355ab;
case 0x5355ae:goto L5355ae;
case 0x5355b2:c.instructions+=31;goto B5355b2;
case 0x5355b5:c.instructions+=30;goto B5355b5;
case 0x5355b8:c.instructions+=29;goto B5355b8;
case 0x5355bc:c.instructions+=28;goto B5355bc;
case 0x5355c0:c.instructions+=27;goto B5355c0;
case 0x5355c2:c.instructions+=26;goto B5355c2;
case 0x5355c6:c.instructions+=25;goto B5355c6;
case 0x5355c8:c.instructions+=24;goto B5355c8;
case 0x5355ca:c.instructions+=23;goto B5355ca;
case 0x5355cd:c.instructions+=22;goto B5355cd;
case 0x5355cf:c.instructions+=21;goto B5355cf;
case 0x5355d3:c.instructions+=20;goto B5355d3;
case 0x5355d6:c.instructions+=19;goto B5355d6;
case 0x5355d8:c.instructions+=18;goto B5355d8;
case 0x5355db:c.instructions+=17;goto B5355db;
case 0x5355dd:c.instructions+=16;goto B5355dd;
case 0x5355e0:c.instructions+=15;goto B5355e0;
case 0x5355e3:c.instructions+=14;goto B5355e3;
case 0x5355e6:c.instructions+=13;goto B5355e6;
case 0x5355e8:c.instructions+=12;goto B5355e8;
case 0x5355ea:c.instructions+=11;goto B5355ea;
case 0x5355ed:c.instructions+=10;goto B5355ed;
case 0x5355f0:c.instructions+=9;goto B5355f0;
case 0x5355f3:c.instructions+=8;goto B5355f3;
case 0x5355f6:c.instructions+=7;goto B5355f6;
case 0x5355f8:c.instructions+=6;goto B5355f8;
case 0x5355f9:c.instructions+=5;goto B5355f9;
case 0x5355fc:c.instructions+=4;goto B5355fc;
case 0x5355fd:c.instructions+=3;goto B5355fd;
case 0x5355fe:c.instructions+=2;goto B5355fe;
case 0x535601:c.instructions+=1;goto B535601;
case 0x535610:goto L535610;
case 0x535613:c.instructions+=6;goto B535613;
case 0x535614:c.instructions+=5;goto B535614;
case 0x535615:c.instructions+=4;goto B535615;
case 0x535616:c.instructions+=3;goto B535616;
case 0x535617:c.instructions+=2;goto B535617;
case 0x535619:c.instructions+=1;goto B535619;
case 0x53561e:goto L53561e;
case 0x535620:c.instructions+=3;goto B535620;
case 0x535623:c.instructions+=2;goto B535623;
case 0x535625:c.instructions+=1;goto B535625;
case 0x535627:goto L535627;
case 0x53562c:c.instructions+=11;goto B53562c;
case 0x53562f:c.instructions+=10;goto B53562f;
case 0x535632:c.instructions+=9;goto B535632;
case 0x535635:c.instructions+=8;goto B535635;
case 0x535638:c.instructions+=7;goto B535638;
case 0x53563e:c.instructions+=6;goto B53563e;
case 0x535645:c.instructions+=5;goto B535645;
case 0x535648:c.instructions+=4;goto B535648;
case 0x53564b:c.instructions+=3;goto B53564b;
case 0x53564e:c.instructions+=2;goto B53564e;
case 0x535650:c.instructions+=1;goto B535650;
case 0x535652:goto L535652;
case 0x535654:goto L535654;
case 0x535658:c.instructions+=3;goto B535658;
case 0x535659:c.instructions+=2;goto B535659;
case 0x53565b:c.instructions+=1;goto B53565b;
case 0x535660:goto L535660;
case 0x535662:c.instructions+=3;goto B535662;
case 0x535667:c.instructions+=2;goto B535667;
case 0x535669:c.instructions+=1;goto B535669;
case 0x53566e:goto L53566e;
case 0x535670:c.instructions+=3;goto B535670;
case 0x535675:c.instructions+=2;goto B535675;
case 0x535677:c.instructions+=1;goto B535677;
case 0x53567c:goto L53567c;
case 0x53567e:c.instructions+=3;goto B53567e;
case 0x535683:c.instructions+=2;goto B535683;
case 0x535685:c.instructions+=1;goto B535685;
case 0x53568a:goto L53568a;
case 0x53568c:c.instructions+=3;goto B53568c;
case 0x535691:c.instructions+=2;goto B535691;
case 0x535693:c.instructions+=1;goto B535693;
case 0x535698:goto L535698;
case 0x53569a:c.instructions+=3;goto B53569a;
case 0x53569f:c.instructions+=2;goto B53569f;
case 0x5356a1:c.instructions+=1;goto B5356a1;
case 0x5356a6:goto L5356a6;
case 0x5356a9:c.instructions+=18;goto B5356a9;
case 0x5356ac:c.instructions+=17;goto B5356ac;
case 0x5356b1:c.instructions+=16;goto B5356b1;
case 0x5356b2:c.instructions+=15;goto B5356b2;
case 0x5356ba:c.instructions+=14;goto B5356ba;
case 0x5356c2:c.instructions+=13;goto B5356c2;
case 0x5356ca:c.instructions+=12;goto B5356ca;
case 0x5356d2:c.instructions+=11;goto B5356d2;
case 0x5356da:c.instructions+=10;goto B5356da;
case 0x5356e2:c.instructions+=9;goto B5356e2;
case 0x5356ea:c.instructions+=8;goto B5356ea;
case 0x5356f2:c.instructions+=7;goto B5356f2;
case 0x5356fa:c.instructions+=6;goto B5356fa;
case 0x535702:c.instructions+=5;goto B535702;
case 0x535706:c.instructions+=4;goto B535706;
case 0x53570a:c.instructions+=3;goto B53570a;
case 0x53570e:c.instructions+=2;goto B53570e;
case 0x535712:c.instructions+=1;goto B535712;
case 0x535717:goto L535717;
case 0x53571a:c.instructions+=4;goto B53571a;
case 0x53571d:c.instructions+=3;goto B53571d;
case 0x53571f:c.instructions+=2;goto B53571f;
case 0x535722:c.instructions+=1;goto B535722;
case 0x535724:goto L535724;
case 0x535725:c.instructions+=1;goto B535725;
case 0x53572a:goto L53572a;
case 0x53572d:c.instructions+=5;goto B53572d;
case 0x53572f:c.instructions+=4;goto B53572f;
case 0x535732:c.instructions+=3;goto B535732;
case 0x535735:c.instructions+=2;goto B535735;
case 0x535739:c.instructions+=1;goto B535739;
case 0x53573b:goto L53573b;
case 0x53573d:goto L53573d;
case 0x53573f:c.instructions+=2;goto B53573f;
case 0x535742:c.instructions+=1;goto B535742;
case 0x535745:goto L535745;
case 0x535747:goto L535747;
case 0x535749:goto L535749;
case 0x53574c:c.instructions+=3;goto B53574c;
case 0x53574f:c.instructions+=2;goto B53574f;
case 0x535750:c.instructions+=1;goto B535750;
case 0x535755:goto L535755;
case 0x535758:c.instructions+=4;goto B535758;
case 0x53575b:c.instructions+=3;goto B53575b;
case 0x53575d:c.instructions+=2;goto B53575d;
case 0x535760:c.instructions+=1;goto B535760;
case 0x535762:goto L535762;
case 0x535763:c.instructions+=1;goto B535763;
case 0x535768:goto L535768;
case 0x53576b:c.instructions+=5;goto B53576b;
case 0x53576d:c.instructions+=4;goto B53576d;
case 0x535770:c.instructions+=3;goto B535770;
case 0x535773:c.instructions+=2;goto B535773;
case 0x535777:c.instructions+=1;goto B535777;
case 0x535779:goto L535779;
case 0x53577b:goto L53577b;
case 0x53577d:c.instructions+=2;goto B53577d;
case 0x535780:c.instructions+=1;goto B535780;
case 0x535783:goto L535783;
case 0x535785:goto L535785;
case 0x535787:goto L535787;
case 0x53578a:c.instructions+=3;goto B53578a;
case 0x53578d:c.instructions+=2;goto B53578d;
case 0x53578e:c.instructions+=1;goto B53578e;
case 0x535793:goto L535793;
case 0x535796:c.instructions+=4;goto B535796;
case 0x535799:c.instructions+=3;goto B535799;
case 0x53579b:c.instructions+=2;goto B53579b;
case 0x53579e:c.instructions+=1;goto B53579e;
case 0x5357a0:goto L5357a0;
case 0x5357a1:c.instructions+=1;goto B5357a1;
case 0x5357a6:goto L5357a6;
case 0x5357a9:c.instructions+=5;goto B5357a9;
case 0x5357ab:c.instructions+=4;goto B5357ab;
case 0x5357ae:c.instructions+=3;goto B5357ae;
case 0x5357b1:c.instructions+=2;goto B5357b1;
case 0x5357b5:c.instructions+=1;goto B5357b5;
case 0x5357b7:goto L5357b7;
case 0x5357b9:goto L5357b9;
case 0x5357bb:c.instructions+=2;goto B5357bb;
case 0x5357be:c.instructions+=1;goto B5357be;
case 0x5357c1:goto L5357c1;
case 0x5357c3:goto L5357c3;
case 0x5357c5:goto L5357c5;
case 0x5357c8:c.instructions+=3;goto B5357c8;
case 0x5357cb:c.instructions+=2;goto B5357cb;
case 0x5357cc:c.instructions+=1;goto B5357cc;
case 0x5357d1:goto L5357d1;
case 0x5357d4:c.instructions+=4;goto B5357d4;
case 0x5357d7:c.instructions+=3;goto B5357d7;
case 0x5357d9:c.instructions+=2;goto B5357d9;
case 0x5357dc:c.instructions+=1;goto B5357dc;
case 0x5357de:goto L5357de;
case 0x5357df:c.instructions+=1;goto B5357df;
case 0x5357e4:goto L5357e4;
case 0x5357e7:c.instructions+=5;goto B5357e7;
case 0x5357e9:c.instructions+=4;goto B5357e9;
case 0x5357ec:c.instructions+=3;goto B5357ec;
case 0x5357ef:c.instructions+=2;goto B5357ef;
case 0x5357f3:c.instructions+=1;goto B5357f3;
case 0x5357f5:goto L5357f5;
case 0x5357f7:goto L5357f7;
case 0x5357f9:c.instructions+=2;goto B5357f9;
case 0x5357fc:c.instructions+=1;goto B5357fc;
case 0x5357ff:goto L5357ff;
case 0x535801:goto L535801;
case 0x535803:goto L535803;
case 0x535806:c.instructions+=3;goto B535806;
case 0x535809:c.instructions+=2;goto B535809;
case 0x53580a:c.instructions+=1;goto B53580a;
case 0x53580f:goto L53580f;
case 0x535812:c.instructions+=4;goto B535812;
case 0x535815:c.instructions+=3;goto B535815;
case 0x535817:c.instructions+=2;goto B535817;
case 0x53581a:c.instructions+=1;goto B53581a;
case 0x53581c:goto L53581c;
case 0x53581d:c.instructions+=1;goto B53581d;
case 0x535822:goto L535822;
case 0x535825:c.instructions+=5;goto B535825;
case 0x535827:c.instructions+=4;goto B535827;
case 0x53582a:c.instructions+=3;goto B53582a;
case 0x53582d:c.instructions+=2;goto B53582d;
case 0x535831:c.instructions+=1;goto B535831;
case 0x535833:goto L535833;
case 0x535835:goto L535835;
case 0x535837:c.instructions+=2;goto B535837;
case 0x53583a:c.instructions+=1;goto B53583a;
case 0x53583d:goto L53583d;
case 0x53583f:goto L53583f;
case 0x535840:c.instructions+=6;goto B535840;
case 0x535841:c.instructions+=5;goto B535841;
case 0x535842:c.instructions+=4;goto B535842;
case 0x535844:c.instructions+=3;goto B535844;
case 0x535845:c.instructions+=2;goto B535845;
case 0x535848:c.instructions+=1;goto B535848;
case 0x535850:goto L535850;
case 0x535851:c.instructions+=2;goto B535851;
case 0x535853:c.instructions+=1;goto B535853;
case 0x535858:goto L535858;
case 0x53585d:c.instructions+=1;goto B53585d;
case 0x53585f:goto L53585f;
case 0x535860:c.instructions+=1;goto B535860;
case 0x535865:goto L535865;
case 0x535868:goto L535868;
case 0x53586a:c.instructions+=2;goto B53586a;
case 0x53586b:c.instructions+=1;goto B53586b;
case 0x535870:goto L535870;
case 0x535872:c.instructions+=12;goto B535872;
case 0x535877:c.instructions+=11;goto B535877;
case 0x53587d:c.instructions+=10;goto B53587d;
case 0x53587e:c.instructions+=9;goto B53587e;
case 0x535885:c.instructions+=8;goto B535885;
case 0x535886:c.instructions+=7;goto B535886;
case 0x535887:c.instructions+=6;goto B535887;
case 0x535889:c.instructions+=5;goto B535889;
case 0x53588d:c.instructions+=4;goto B53588d;
case 0x535890:c.instructions+=3;goto B535890;
case 0x535898:c.instructions+=2;goto B535898;
case 0x53589e:c.instructions+=1;goto B53589e;
case 0x5358a3:goto L5358a3;
case 0x5358a5:c.instructions+=2;goto B5358a5;
case 0x5358ad:c.instructions+=1;goto B5358ad;
case 0x5358b2:goto L5358b2;
case 0x5358b6:c.instructions+=4;goto B5358b6;
case 0x5358b7:c.instructions+=3;goto B5358b7;
case 0x5358be:c.instructions+=2;goto B5358be;
case 0x5358c1:c.instructions+=1;goto B5358c1;
case 0x5358d0:goto L5358d0;
case 0x5358d3:c.instructions+=7;goto B5358d3;
case 0x5358d7:c.instructions+=6;goto B5358d7;
case 0x5358d8:c.instructions+=5;goto B5358d8;
case 0x5358d9:c.instructions+=4;goto B5358d9;
case 0x5358da:c.instructions+=3;goto B5358da;
case 0x5358db:c.instructions+=2;goto B5358db;
case 0x5358dc:c.instructions+=1;goto B5358dc;
case 0x5358e1:goto L5358e1;
case 0x5358e3:c.instructions+=4;goto B5358e3;
case 0x5358e5:c.instructions+=3;goto B5358e5;
case 0x5358ea:c.instructions+=2;goto B5358ea;
case 0x5358ec:c.instructions+=1;goto B5358ec;
case 0x5358f1:goto L5358f1;
case 0x5358f3:c.instructions+=3;goto B5358f3;
case 0x5358f8:c.instructions+=2;goto B5358f8;
case 0x5358fa:c.instructions+=1;goto B5358fa;
case 0x5358ff:goto L5358ff;
case 0x535902:c.instructions+=4;goto B535902;
case 0x535904:c.instructions+=3;goto B535904;
case 0x53590c:c.instructions+=2;goto B53590c;
case 0x535914:c.instructions+=1;goto B535914;
case 0x535916:goto L535916;
case 0x535919:c.instructions+=3;goto B535919;
case 0x53591e:c.instructions+=2;goto B53591e;
case 0x53591f:c.instructions+=1;goto B53591f;
case 0x535924:goto L535924;
case 0x535927:c.instructions+=2;goto B535927;
case 0x535929:c.instructions+=1;goto B535929;
case 0x53592b:goto L53592b;
case 0x53592e:c.instructions+=2;goto B53592e;
case 0x535930:c.instructions+=1;goto B535930;
case 0x535932:goto L535932;
case 0x535935:c.instructions+=2;goto B535935;
case 0x535936:c.instructions+=1;goto B535936;
case 0x53593b:goto L53593b;
case 0x53593e:c.instructions+=4;goto B53593e;
case 0x535941:c.instructions+=3;goto B535941;
case 0x535943:c.instructions+=2;goto B535943;
case 0x53594a:c.instructions+=1;goto B53594a;
case 0x53594c:goto L53594c;
case 0x53594d:c.instructions+=1;goto B53594d;
case 0x535952:goto L535952;
case 0x535955:c.instructions+=5;goto B535955;
case 0x535957:c.instructions+=4;goto B535957;
case 0x53595a:c.instructions+=3;goto B53595a;
case 0x53595d:c.instructions+=2;goto B53595d;
case 0x535961:c.instructions+=1;goto B535961;
case 0x535963:goto L535963;
case 0x535965:goto L535965;
case 0x535967:c.instructions+=2;goto B535967;
case 0x53596a:c.instructions+=1;goto B53596a;
case 0x53596d:goto L53596d;
case 0x53596f:goto L53596f;
case 0x535972:c.instructions+=5;goto B535972;
case 0x535975:c.instructions+=4;goto B535975;
case 0x535976:c.instructions+=3;goto B535976;
case 0x53597e:c.instructions+=2;goto B53597e;
case 0x535986:c.instructions+=1;goto B535986;
case 0x53598b:goto L53598b;
case 0x53598e:c.instructions+=4;goto B53598e;
case 0x535991:c.instructions+=3;goto B535991;
case 0x535993:c.instructions+=2;goto B535993;
case 0x53599a:c.instructions+=1;goto B53599a;
case 0x53599c:goto L53599c;
case 0x53599d:c.instructions+=1;goto B53599d;
case 0x5359a2:goto L5359a2;
case 0x5359a5:c.instructions+=5;goto B5359a5;
case 0x5359a7:c.instructions+=4;goto B5359a7;
case 0x5359aa:c.instructions+=3;goto B5359aa;
case 0x5359ad:c.instructions+=2;goto B5359ad;
case 0x5359b1:c.instructions+=1;goto B5359b1;
case 0x5359b3:goto L5359b3;
case 0x5359b5:goto L5359b5;
case 0x5359b7:c.instructions+=2;goto B5359b7;
case 0x5359ba:c.instructions+=1;goto B5359ba;
case 0x5359bd:goto L5359bd;
case 0x5359bf:goto L5359bf;
case 0x5359c0:c.instructions+=6;goto B5359c0;
case 0x5359c1:c.instructions+=5;goto B5359c1;
case 0x5359c3:c.instructions+=4;goto B5359c3;
case 0x5359c4:c.instructions+=3;goto B5359c4;
case 0x5359c5:c.instructions+=2;goto B5359c5;
case 0x5359c8:c.instructions+=1;goto B5359c8;
case 0x5359d0:goto L5359d0;
case 0x5359d3:c.instructions+=5;goto B5359d3;
case 0x5359d4:c.instructions+=4;goto B5359d4;
case 0x5359d5:c.instructions+=3;goto B5359d5;
case 0x5359da:c.instructions+=2;goto B5359da;
case 0x5359dc:c.instructions+=1;goto B5359dc;
case 0x5359e1:goto L5359e1;
case 0x5359e8:c.instructions+=4;goto B5359e8;
case 0x5359eb:c.instructions+=3;goto B5359eb;
case 0x5359ed:c.instructions+=2;goto B5359ed;
case 0x5359ef:c.instructions+=1;goto B5359ef;
case 0x5359f1:goto L5359f1;
case 0x5359f4:c.instructions+=3;goto B5359f4;
case 0x5359f6:c.instructions+=2;goto B5359f6;
case 0x5359f9:c.instructions+=1;goto B5359f9;
case 0x5359fb:goto L5359fb;
case 0x5359fe:goto L5359fe;
case 0x535a01:c.instructions+=2;goto B535a01;
case 0x535a04:c.instructions+=1;goto B535a04;
case 0x535a06:goto L535a06;
case 0x535a09:c.instructions+=3;goto B535a09;
case 0x535a0b:c.instructions+=2;goto B535a0b;
case 0x535a0e:c.instructions+=1;goto B535a0e;
case 0x535a10:goto L535a10;
case 0x535a13:goto L535a13;
case 0x535a16:c.instructions+=1;goto B535a16;
case 0x535a19:goto L535a19;
case 0x535a1c:c.instructions+=1;goto B535a1c;
case 0x535a1e:goto L535a1e;
case 0x535a21:goto L535a21;
case 0x535a22:c.instructions+=7;goto B535a22;
case 0x535a25:c.instructions+=6;goto B535a25;
case 0x535a26:c.instructions+=5;goto B535a26;
case 0x535a27:c.instructions+=4;goto B535a27;
case 0x535a2c:c.instructions+=3;goto B535a2c;
case 0x535a2e:c.instructions+=2;goto B535a2e;
case 0x535a31:c.instructions+=1;goto B535a31;
case 0x535a36:goto L535a36;
case 0x535a38:c.instructions+=5;goto B535a38;
case 0x535a3d:c.instructions+=4;goto B535a3d;
case 0x535a3f:c.instructions+=3;goto B535a3f;
case 0x535a40:c.instructions+=2;goto B535a40;
case 0x535a42:c.instructions+=1;goto B535a42;
case 0x535a47:goto L535a47;
case 0x535a4d:c.instructions+=4;goto B535a4d;
case 0x535a4f:c.instructions+=3;goto B535a4f;
case 0x535a50:c.instructions+=2;goto B535a50;
case 0x535a52:c.instructions+=1;goto B535a52;
case 0x535a57:goto L535a57;
case 0x535a5d:c.instructions+=4;goto B535a5d;
case 0x535a5f:c.instructions+=3;goto B535a5f;
case 0x535a60:c.instructions+=2;goto B535a60;
case 0x535a62:c.instructions+=1;goto B535a62;
case 0x535a67:goto L535a67;
case 0x535a6c:c.instructions+=4;goto B535a6c;
case 0x535a6e:c.instructions+=3;goto B535a6e;
case 0x535a6f:c.instructions+=2;goto B535a6f;
case 0x535a71:c.instructions+=1;goto B535a71;
case 0x535a76:goto L535a76;
case 0x535a7c:c.instructions+=8;goto B535a7c;
case 0x535a81:c.instructions+=7;goto B535a81;
case 0x535a82:c.instructions+=6;goto B535a82;
case 0x535a84:c.instructions+=5;goto B535a84;
case 0x535a88:c.instructions+=4;goto B535a88;
case 0x535a8c:c.instructions+=3;goto B535a8c;
case 0x535a90:c.instructions+=2;goto B535a90;
case 0x535a94:c.instructions+=1;goto B535a94;
case 0x535a99:goto L535a99;
case 0x535a9b:c.instructions+=3;goto B535a9b;
case 0x535a9e:c.instructions+=2;goto B535a9e;
case 0x535a9f:c.instructions+=1;goto B535a9f;
case 0x535aa4:goto L535aa4;
case 0x535aa7:c.instructions+=4;goto B535aa7;
case 0x535aaa:c.instructions+=3;goto B535aaa;
case 0x535aac:c.instructions+=2;goto B535aac;
case 0x535aaf:c.instructions+=1;goto B535aaf;
case 0x535ab1:goto L535ab1;
case 0x535ab2:c.instructions+=1;goto B535ab2;
case 0x535ab7:goto L535ab7;
case 0x535aba:c.instructions+=5;goto B535aba;
case 0x535abd:c.instructions+=4;goto B535abd;
case 0x535abf:c.instructions+=3;goto B535abf;
case 0x535ac1:c.instructions+=2;goto B535ac1;
case 0x535ac4:c.instructions+=1;goto B535ac4;
case 0x535ac8:goto L535ac8;
case 0x535aca:goto L535aca;
case 0x535acc:c.instructions+=2;goto B535acc;
case 0x535acf:c.instructions+=1;goto B535acf;
case 0x535ad2:goto L535ad2;
case 0x535ad4:goto L535ad4;
case 0x535ad6:goto L535ad6;
case 0x535adc:c.instructions+=3;goto B535adc;
case 0x535add:c.instructions+=2;goto B535add;
case 0x535adf:c.instructions+=1;goto B535adf;
case 0x535ae4:goto L535ae4;
case 0x535ae6:c.instructions+=3;goto B535ae6;
case 0x535ae9:c.instructions+=2;goto B535ae9;
case 0x535aea:c.instructions+=1;goto B535aea;
case 0x535aef:goto L535aef;
case 0x535af2:c.instructions+=4;goto B535af2;
case 0x535af5:c.instructions+=3;goto B535af5;
case 0x535af7:c.instructions+=2;goto B535af7;
case 0x535afa:c.instructions+=1;goto B535afa;
case 0x535afc:goto L535afc;
case 0x535afd:c.instructions+=1;goto B535afd;
case 0x535b02:goto L535b02;
case 0x535b05:c.instructions+=5;goto B535b05;
case 0x535b08:c.instructions+=4;goto B535b08;
case 0x535b0a:c.instructions+=3;goto B535b0a;
case 0x535b0c:c.instructions+=2;goto B535b0c;
case 0x535b0f:c.instructions+=1;goto B535b0f;
case 0x535b13:goto L535b13;
case 0x535b15:goto L535b15;
case 0x535b17:c.instructions+=2;goto B535b17;
case 0x535b1a:c.instructions+=1;goto B535b1a;
case 0x535b1d:goto L535b1d;
case 0x535b1f:goto L535b1f;
case 0x535b21:goto L535b21;
case 0x535b27:c.instructions+=3;goto B535b27;
case 0x535b28:c.instructions+=2;goto B535b28;
case 0x535b2a:c.instructions+=1;goto B535b2a;
case 0x535b2f:goto L535b2f;
case 0x535b31:c.instructions+=3;goto B535b31;
case 0x535b34:c.instructions+=2;goto B535b34;
case 0x535b35:c.instructions+=1;goto B535b35;
case 0x535b3a:goto L535b3a;
case 0x535b3d:c.instructions+=4;goto B535b3d;
case 0x535b40:c.instructions+=3;goto B535b40;
case 0x535b42:c.instructions+=2;goto B535b42;
case 0x535b45:c.instructions+=1;goto B535b45;
case 0x535b47:goto L535b47;
case 0x535b48:c.instructions+=1;goto B535b48;
case 0x535b4d:goto L535b4d;
case 0x535b50:c.instructions+=5;goto B535b50;
case 0x535b53:c.instructions+=4;goto B535b53;
case 0x535b55:c.instructions+=3;goto B535b55;
case 0x535b57:c.instructions+=2;goto B535b57;
case 0x535b5a:c.instructions+=1;goto B535b5a;
case 0x535b5e:goto L535b5e;
case 0x535b60:goto L535b60;
case 0x535b62:c.instructions+=2;goto B535b62;
case 0x535b65:c.instructions+=1;goto B535b65;
case 0x535b68:goto L535b68;
case 0x535b6a:goto L535b6a;
case 0x535b6c:goto L535b6c;
case 0x535b72:c.instructions+=3;goto B535b72;
case 0x535b73:c.instructions+=2;goto B535b73;
case 0x535b75:c.instructions+=1;goto B535b75;
case 0x535b7a:goto L535b7a;
case 0x535b7c:c.instructions+=3;goto B535b7c;
case 0x535b7f:c.instructions+=2;goto B535b7f;
case 0x535b80:c.instructions+=1;goto B535b80;
case 0x535b85:goto L535b85;
case 0x535b88:c.instructions+=4;goto B535b88;
case 0x535b8b:c.instructions+=3;goto B535b8b;
case 0x535b8d:c.instructions+=2;goto B535b8d;
case 0x535b90:c.instructions+=1;goto B535b90;
case 0x535b92:goto L535b92;
case 0x535b93:c.instructions+=1;goto B535b93;
case 0x535b98:goto L535b98;
case 0x535b9b:c.instructions+=5;goto B535b9b;
case 0x535b9e:c.instructions+=4;goto B535b9e;
case 0x535ba0:c.instructions+=3;goto B535ba0;
case 0x535ba2:c.instructions+=2;goto B535ba2;
case 0x535ba5:c.instructions+=1;goto B535ba5;
case 0x535ba9:goto L535ba9;
case 0x535bab:goto L535bab;
case 0x535bad:c.instructions+=2;goto B535bad;
case 0x535bb0:c.instructions+=1;goto B535bb0;
case 0x535bb3:goto L535bb3;
case 0x535bb5:goto L535bb5;
case 0x535bb7:goto L535bb7;
case 0x535bbe:c.instructions+=3;goto B535bbe;
case 0x535bc1:c.instructions+=2;goto B535bc1;
case 0x535bc3:c.instructions+=1;goto B535bc3;
case 0x535bc5:goto L535bc5;
case 0x535bc8:c.instructions+=3;goto B535bc8;
case 0x535bca:c.instructions+=2;goto B535bca;
case 0x535bcd:c.instructions+=1;goto B535bcd;
case 0x535bcf:goto L535bcf;
case 0x535bd2:goto L535bd2;
case 0x535bd5:c.instructions+=2;goto B535bd5;
case 0x535bd8:c.instructions+=1;goto B535bd8;
case 0x535bda:goto L535bda;
case 0x535bdd:c.instructions+=3;goto B535bdd;
case 0x535bdf:c.instructions+=2;goto B535bdf;
case 0x535be2:c.instructions+=1;goto B535be2;
case 0x535be4:goto L535be4;
case 0x535be7:goto L535be7;
case 0x535bea:c.instructions+=1;goto B535bea;
case 0x535bed:goto L535bed;
case 0x535bf0:c.instructions+=1;goto B535bf0;
case 0x535bf2:goto L535bf2;
case 0x535bf5:goto L535bf5;
case 0x535bf8:c.instructions+=5;goto B535bf8;
case 0x535bf9:c.instructions+=4;goto B535bf9;
case 0x535bfe:c.instructions+=3;goto B535bfe;
case 0x535c00:c.instructions+=2;goto B535c00;
case 0x535c03:c.instructions+=1;goto B535c03;
case 0x535c08:goto L535c08;
case 0x535c0e:c.instructions+=5;goto B535c0e;
case 0x535c10:c.instructions+=4;goto B535c10;
case 0x535c12:c.instructions+=3;goto B535c12;
case 0x535c13:c.instructions+=2;goto B535c13;
case 0x535c15:c.instructions+=1;goto B535c15;
case 0x535c1a:goto L535c1a;
case 0x535c20:c.instructions+=4;goto B535c20;
case 0x535c21:c.instructions+=3;goto B535c21;
case 0x535c23:c.instructions+=2;goto B535c23;
case 0x535c27:c.instructions+=1;goto B535c27;
case 0x535c2c:goto L535c2c;
case 0x535c2e:c.instructions+=3;goto B535c2e;
case 0x535c31:c.instructions+=2;goto B535c31;
case 0x535c32:c.instructions+=1;goto B535c32;
case 0x535c37:goto L535c37;
case 0x535c3a:c.instructions+=4;goto B535c3a;
case 0x535c3d:c.instructions+=3;goto B535c3d;
case 0x535c3f:c.instructions+=2;goto B535c3f;
case 0x535c42:c.instructions+=1;goto B535c42;
case 0x535c44:goto L535c44;
case 0x535c45:c.instructions+=1;goto B535c45;
case 0x535c4a:goto L535c4a;
case 0x535c4d:c.instructions+=5;goto B535c4d;
case 0x535c4f:c.instructions+=4;goto B535c4f;
case 0x535c52:c.instructions+=3;goto B535c52;
case 0x535c55:c.instructions+=2;goto B535c55;
case 0x535c59:c.instructions+=1;goto B535c59;
case 0x535c5b:goto L535c5b;
case 0x535c5d:goto L535c5d;
case 0x535c5f:c.instructions+=2;goto B535c5f;
case 0x535c62:c.instructions+=1;goto B535c62;
case 0x535c65:goto L535c65;
case 0x535c67:goto L535c67;
case 0x535c69:goto L535c69;
case 0x535c70:c.instructions+=3;goto B535c70;
case 0x535c73:c.instructions+=2;goto B535c73;
case 0x535c75:c.instructions+=1;goto B535c75;
case 0x535c77:goto L535c77;
case 0x535c7a:c.instructions+=3;goto B535c7a;
case 0x535c7c:c.instructions+=2;goto B535c7c;
case 0x535c7f:c.instructions+=1;goto B535c7f;
case 0x535c81:goto L535c81;
case 0x535c84:goto L535c84;
case 0x535c87:c.instructions+=2;goto B535c87;
case 0x535c8a:c.instructions+=1;goto B535c8a;
case 0x535c8c:goto L535c8c;
case 0x535c8f:c.instructions+=3;goto B535c8f;
case 0x535c91:c.instructions+=2;goto B535c91;
case 0x535c94:c.instructions+=1;goto B535c94;
case 0x535c96:goto L535c96;
case 0x535c99:goto L535c99;
case 0x535c9c:c.instructions+=1;goto B535c9c;
case 0x535c9f:goto L535c9f;
case 0x535ca2:c.instructions+=1;goto B535ca2;
case 0x535ca4:goto L535ca4;
case 0x535ca7:goto L535ca7;
case 0x535caa:c.instructions+=5;goto B535caa;
case 0x535cab:c.instructions+=4;goto B535cab;
case 0x535cb0:c.instructions+=3;goto B535cb0;
case 0x535cb2:c.instructions+=2;goto B535cb2;
case 0x535cb5:c.instructions+=1;goto B535cb5;
case 0x535cba:goto L535cba;
case 0x535cc1:c.instructions+=3;goto B535cc1;
case 0x535cc4:c.instructions+=2;goto B535cc4;
case 0x535cc6:c.instructions+=1;goto B535cc6;
case 0x535cc8:goto L535cc8;
case 0x535ccb:c.instructions+=3;goto B535ccb;
case 0x535ccd:c.instructions+=2;goto B535ccd;
case 0x535cd0:c.instructions+=1;goto B535cd0;
case 0x535cd2:goto L535cd2;
case 0x535cd5:goto L535cd5;
case 0x535cd8:c.instructions+=2;goto B535cd8;
case 0x535cdb:c.instructions+=1;goto B535cdb;
case 0x535cdd:goto L535cdd;
case 0x535ce0:c.instructions+=3;goto B535ce0;
case 0x535ce2:c.instructions+=2;goto B535ce2;
case 0x535ce5:c.instructions+=1;goto B535ce5;
case 0x535ce7:goto L535ce7;
case 0x535cea:goto L535cea;
case 0x535ced:c.instructions+=1;goto B535ced;
case 0x535cf0:goto L535cf0;
case 0x535cf3:c.instructions+=1;goto B535cf3;
case 0x535cf5:goto L535cf5;
case 0x535cf8:goto L535cf8;
case 0x535cfb:c.instructions+=5;goto B535cfb;
case 0x535cfc:c.instructions+=4;goto B535cfc;
case 0x535d01:c.instructions+=3;goto B535d01;
case 0x535d03:c.instructions+=2;goto B535d03;
case 0x535d06:c.instructions+=1;goto B535d06;
case 0x535d0b:goto L535d0b;
case 0x535d12:c.instructions+=3;goto B535d12;
case 0x535d15:c.instructions+=2;goto B535d15;
case 0x535d17:c.instructions+=1;goto B535d17;
case 0x535d19:goto L535d19;
case 0x535d1c:c.instructions+=3;goto B535d1c;
case 0x535d1e:c.instructions+=2;goto B535d1e;
case 0x535d21:c.instructions+=1;goto B535d21;
case 0x535d23:goto L535d23;
case 0x535d26:goto L535d26;
case 0x535d29:c.instructions+=2;goto B535d29;
case 0x535d2c:c.instructions+=1;goto B535d2c;
case 0x535d2e:goto L535d2e;
case 0x535d31:c.instructions+=3;goto B535d31;
case 0x535d33:c.instructions+=2;goto B535d33;
case 0x535d36:c.instructions+=1;goto B535d36;
case 0x535d38:goto L535d38;
case 0x535d3b:goto L535d3b;
case 0x535d3e:c.instructions+=1;goto B535d3e;
case 0x535d41:goto L535d41;
case 0x535d44:c.instructions+=1;goto B535d44;
case 0x535d46:goto L535d46;
case 0x535d49:goto L535d49;
case 0x535d4c:c.instructions+=5;goto B535d4c;
case 0x535d4d:c.instructions+=4;goto B535d4d;
case 0x535d52:c.instructions+=3;goto B535d52;
case 0x535d54:c.instructions+=2;goto B535d54;
case 0x535d57:c.instructions+=1;goto B535d57;
case 0x535d5c:goto L535d5c;
case 0x535d63:c.instructions+=3;goto B535d63;
case 0x535d66:c.instructions+=2;goto B535d66;
case 0x535d68:c.instructions+=1;goto B535d68;
case 0x535d6a:goto L535d6a;
case 0x535d6d:c.instructions+=3;goto B535d6d;
case 0x535d6f:c.instructions+=2;goto B535d6f;
case 0x535d72:c.instructions+=1;goto B535d72;
case 0x535d74:goto L535d74;
case 0x535d77:goto L535d77;
case 0x535d7a:c.instructions+=2;goto B535d7a;
case 0x535d7d:c.instructions+=1;goto B535d7d;
case 0x535d7f:goto L535d7f;
case 0x535d82:c.instructions+=3;goto B535d82;
case 0x535d84:c.instructions+=2;goto B535d84;
case 0x535d87:c.instructions+=1;goto B535d87;
case 0x535d89:goto L535d89;
case 0x535d8c:goto L535d8c;
case 0x535d8f:c.instructions+=1;goto B535d8f;
case 0x535d92:goto L535d92;
case 0x535d95:c.instructions+=1;goto B535d95;
case 0x535d97:goto L535d97;
case 0x535d9a:goto L535d9a;
case 0x535d9d:c.instructions+=5;goto B535d9d;
case 0x535d9e:c.instructions+=4;goto B535d9e;
case 0x535da3:c.instructions+=3;goto B535da3;
case 0x535da5:c.instructions+=2;goto B535da5;
case 0x535da8:c.instructions+=1;goto B535da8;
case 0x535dad:goto L535dad;
case 0x535db4:c.instructions+=3;goto B535db4;
case 0x535db7:c.instructions+=2;goto B535db7;
case 0x535db9:c.instructions+=1;goto B535db9;
case 0x535dbb:goto L535dbb;
case 0x535dbe:c.instructions+=3;goto B535dbe;
case 0x535dc0:c.instructions+=2;goto B535dc0;
case 0x535dc3:c.instructions+=1;goto B535dc3;
case 0x535dc5:goto L535dc5;
case 0x535dc8:goto L535dc8;
case 0x535dcb:c.instructions+=2;goto B535dcb;
case 0x535dce:c.instructions+=1;goto B535dce;
case 0x535dd0:goto L535dd0;
case 0x535dd3:c.instructions+=3;goto B535dd3;
case 0x535dd5:c.instructions+=2;goto B535dd5;
case 0x535dd8:c.instructions+=1;goto B535dd8;
case 0x535dda:goto L535dda;
case 0x535ddd:goto L535ddd;
case 0x535de0:c.instructions+=1;goto B535de0;
case 0x535de3:goto L535de3;
case 0x535de6:c.instructions+=1;goto B535de6;
case 0x535de8:goto L535de8;
case 0x535deb:goto L535deb;
case 0x535dee:c.instructions+=5;goto B535dee;
case 0x535def:c.instructions+=4;goto B535def;
case 0x535df4:c.instructions+=3;goto B535df4;
case 0x535df6:c.instructions+=2;goto B535df6;
case 0x535df9:c.instructions+=1;goto B535df9;
case 0x535dfe:goto L535dfe;
case 0x535e05:c.instructions+=3;goto B535e05;
case 0x535e08:c.instructions+=2;goto B535e08;
case 0x535e0a:c.instructions+=1;goto B535e0a;
case 0x535e0c:goto L535e0c;
case 0x535e0f:c.instructions+=3;goto B535e0f;
case 0x535e11:c.instructions+=2;goto B535e11;
case 0x535e14:c.instructions+=1;goto B535e14;
case 0x535e16:goto L535e16;
case 0x535e19:goto L535e19;
case 0x535e1c:c.instructions+=2;goto B535e1c;
case 0x535e1f:c.instructions+=1;goto B535e1f;
case 0x535e21:goto L535e21;
case 0x535e24:c.instructions+=3;goto B535e24;
case 0x535e26:c.instructions+=2;goto B535e26;
case 0x535e29:c.instructions+=1;goto B535e29;
case 0x535e2b:goto L535e2b;
case 0x535e2e:goto L535e2e;
case 0x535e31:c.instructions+=1;goto B535e31;
case 0x535e34:goto L535e34;
case 0x535e37:c.instructions+=1;goto B535e37;
case 0x535e39:goto L535e39;
case 0x535e3c:goto L535e3c;
case 0x535e3f:c.instructions+=5;goto B535e3f;
case 0x535e40:c.instructions+=4;goto B535e40;
case 0x535e45:c.instructions+=3;goto B535e45;
case 0x535e47:c.instructions+=2;goto B535e47;
case 0x535e4a:c.instructions+=1;goto B535e4a;
case 0x535e4f:goto L535e4f;
case 0x535e56:c.instructions+=3;goto B535e56;
case 0x535e59:c.instructions+=2;goto B535e59;
case 0x535e5b:c.instructions+=1;goto B535e5b;
case 0x535e5d:goto L535e5d;
case 0x535e60:c.instructions+=3;goto B535e60;
case 0x535e62:c.instructions+=2;goto B535e62;
case 0x535e65:c.instructions+=1;goto B535e65;
case 0x535e67:goto L535e67;
case 0x535e6a:goto L535e6a;
case 0x535e6d:c.instructions+=2;goto B535e6d;
case 0x535e70:c.instructions+=1;goto B535e70;
case 0x535e72:goto L535e72;
case 0x535e75:c.instructions+=3;goto B535e75;
case 0x535e77:c.instructions+=2;goto B535e77;
case 0x535e7a:c.instructions+=1;goto B535e7a;
case 0x535e7c:goto L535e7c;
case 0x535e7f:goto L535e7f;
case 0x535e82:c.instructions+=1;goto B535e82;
case 0x535e85:goto L535e85;
case 0x535e88:c.instructions+=1;goto B535e88;
case 0x535e8a:goto L535e8a;
case 0x535e8d:goto L535e8d;
case 0x535e90:c.instructions+=5;goto B535e90;
case 0x535e91:c.instructions+=4;goto B535e91;
case 0x535e96:c.instructions+=3;goto B535e96;
case 0x535e98:c.instructions+=2;goto B535e98;
case 0x535e9b:c.instructions+=1;goto B535e9b;
case 0x535ea0:goto L535ea0;
case 0x535ea7:c.instructions+=3;goto B535ea7;
case 0x535eaa:c.instructions+=2;goto B535eaa;
case 0x535eac:c.instructions+=1;goto B535eac;
case 0x535eae:goto L535eae;
case 0x535eb1:c.instructions+=3;goto B535eb1;
case 0x535eb3:c.instructions+=2;goto B535eb3;
case 0x535eb6:c.instructions+=1;goto B535eb6;
case 0x535eb8:goto L535eb8;
case 0x535ebb:goto L535ebb;
case 0x535ebe:c.instructions+=2;goto B535ebe;
case 0x535ec1:c.instructions+=1;goto B535ec1;
case 0x535ec3:goto L535ec3;
case 0x535ec6:c.instructions+=3;goto B535ec6;
case 0x535ec8:c.instructions+=2;goto B535ec8;
case 0x535ecb:c.instructions+=1;goto B535ecb;
case 0x535ecd:goto L535ecd;
case 0x535ed0:goto L535ed0;
case 0x535ed3:c.instructions+=1;goto B535ed3;
case 0x535ed6:goto L535ed6;
case 0x535ed9:c.instructions+=1;goto B535ed9;
case 0x535edb:goto L535edb;
case 0x535ede:goto L535ede;
case 0x535ee1:c.instructions+=5;goto B535ee1;
case 0x535ee2:c.instructions+=4;goto B535ee2;
case 0x535ee7:c.instructions+=3;goto B535ee7;
case 0x535ee9:c.instructions+=2;goto B535ee9;
case 0x535eec:c.instructions+=1;goto B535eec;
case 0x535ef1:goto L535ef1;
case 0x535ef8:c.instructions+=5;goto B535ef8;
case 0x535efb:c.instructions+=4;goto B535efb;
case 0x535efd:c.instructions+=3;goto B535efd;
case 0x535efe:c.instructions+=2;goto B535efe;
case 0x535eff:c.instructions+=1;goto B535eff;
case 0x535f01:goto L535f01;
case 0x535f04:c.instructions+=3;goto B535f04;
case 0x535f06:c.instructions+=2;goto B535f06;
case 0x535f09:c.instructions+=1;goto B535f09;
case 0x535f0b:goto L535f0b;
case 0x535f0e:goto L535f0e;
case 0x535f11:c.instructions+=2;goto B535f11;
case 0x535f14:c.instructions+=1;goto B535f14;
case 0x535f16:goto L535f16;
case 0x535f19:c.instructions+=3;goto B535f19;
case 0x535f1b:c.instructions+=2;goto B535f1b;
case 0x535f1e:c.instructions+=1;goto B535f1e;
case 0x535f20:goto L535f20;
case 0x535f23:goto L535f23;
case 0x535f26:c.instructions+=1;goto B535f26;
case 0x535f29:goto L535f29;
case 0x535f2c:c.instructions+=1;goto B535f2c;
case 0x535f2e:goto L535f2e;
case 0x535f31:goto L535f31;
case 0x535f34:c.instructions+=5;goto B535f34;
case 0x535f35:c.instructions+=4;goto B535f35;
case 0x535f37:c.instructions+=3;goto B535f37;
case 0x535f38:c.instructions+=2;goto B535f38;
case 0x535f3b:c.instructions+=1;goto B535f3b;
case 0x535f40:goto L535f40;
case 0x535f41:c.instructions+=7;goto B535f41;
case 0x535f42:c.instructions+=6;goto B535f42;
case 0x535f44:c.instructions+=5;goto B535f44;
case 0x535f47:c.instructions+=4;goto B535f47;
case 0x535f49:c.instructions+=3;goto B535f49;
case 0x535f4a:c.instructions+=2;goto B535f4a;
case 0x535f4d:c.instructions+=1;goto B535f4d;
case 0x535f4f:goto L535f4f;
case 0x535f51:c.instructions+=1;goto B535f51;
case 0x535f53:goto L535f53;
case 0x535f56:c.instructions+=5;goto B535f56;
case 0x535f58:c.instructions+=4;goto B535f58;
case 0x535f5a:c.instructions+=3;goto B535f5a;
case 0x535f5b:c.instructions+=2;goto B535f5b;
case 0x535f5c:c.instructions+=1;goto B535f5c;
case 0x535f61:goto L535f61;
case 0x535f64:c.instructions+=1;goto B535f64;
case 0x535f66:goto L535f66;
case 0x535f67:c.instructions+=3;goto B535f67;
case 0x535f6b:c.instructions+=2;goto B535f6b;
case 0x535f6d:c.instructions+=1;goto B535f6d;
case 0x535f6f:goto L535f6f;
case 0x535f71:c.instructions+=2;goto B535f71;
case 0x535f74:c.instructions+=1;goto B535f74;
case 0x535f76:goto L535f76;
case 0x535f77:c.instructions+=2;goto B535f77;
case 0x535f7c:c.instructions+=1;goto B535f7c;
case 0x535f7e:goto L535f7e;
case 0x535f81:c.instructions+=3;goto B535f81;
case 0x535f82:c.instructions+=2;goto B535f82;
case 0x535f84:c.instructions+=1;goto B535f84;
case 0x535f86:goto L535f86;
case 0x535f87:c.instructions+=2;goto B535f87;
case 0x535f89:c.instructions+=1;goto B535f89;
case 0x535f8e:goto L535f8e;
case 0x535f90:c.instructions+=3;goto B535f90;
case 0x535f91:c.instructions+=2;goto B535f91;
case 0x535f92:c.instructions+=1;goto B535f92;
case 0x535f97:goto L535f97;
case 0x535f9a:goto L535f9a;
case 0x535f9f:c.instructions+=3;goto B535f9f;
case 0x535fa1:c.instructions+=2;goto B535fa1;
case 0x535fa2:c.instructions+=1;goto B535fa2;
case 0x535fa4:goto L535fa4;
case 0x535fa6:c.instructions+=2;goto B535fa6;
case 0x535fa8:c.instructions+=1;goto B535fa8;
case 0x535faa:goto L535faa;
case 0x535fad:c.instructions+=5;goto B535fad;
case 0x535faf:c.instructions+=4;goto B535faf;
case 0x535fb1:c.instructions+=3;goto B535fb1;
case 0x535fb2:c.instructions+=2;goto B535fb2;
case 0x535fb3:c.instructions+=1;goto B535fb3;
case 0x535fb8:goto L535fb8;
case 0x535fbb:goto L535fbb;
case 0x535fbd:c.instructions+=1;goto B535fbd;
case 0x535fbf:goto L535fbf;
case 0x535fc3:c.instructions+=1;goto B535fc3;
case 0x535fc5:goto L535fc5;
case 0x535fcc:goto L535fcc;
case 0x535fcd:c.instructions+=3;goto B535fcd;
case 0x535fce:c.instructions+=2;goto B535fce;
case 0x535fcf:c.instructions+=1;goto B535fcf;
case 0x535fe0:goto L535fe0;
case 0x535fe1:c.instructions+=7;goto B535fe1;
case 0x535fe2:c.instructions+=6;goto B535fe2;
case 0x535fe3:c.instructions+=5;goto B535fe3;
case 0x535fe5:c.instructions+=4;goto B535fe5;
case 0x535fe8:c.instructions+=3;goto B535fe8;
case 0x535fea:c.instructions+=2;goto B535fea;
case 0x535fed:c.instructions+=1;goto B535fed;
case 0x535fef:goto L535fef;
case 0x535ff1:c.instructions+=1;goto B535ff1;
case 0x535ff3:goto L535ff3;
case 0x535ff6:c.instructions+=5;goto B535ff6;
case 0x535ff8:c.instructions+=4;goto B535ff8;
case 0x535ffa:c.instructions+=3;goto B535ffa;
case 0x535ffb:c.instructions+=2;goto B535ffb;
case 0x535ffc:c.instructions+=1;goto B535ffc;
default:missing_instruction(c.pc);}
B535000:L535000:{c.instructions+=1;NFSU2_TR(0x535000);
if(r1(R+518)){{goto L53505b;}}
}
B535002:L535002:{c.instructions+=4;NFSU2_TR(0x535002);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x4ull))));
}
B535005:{NFSU2_TR(0x535005);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B535006:{NFSU2_TR(0x535006);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53500a:{NFSU2_TR(0x53500a);
TAIL_STATIC(0x519f40u,519);
}
B53500f:L53500f:{c.instructions+=4;NFSU2_TR(0x53500f);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B535012:{NFSU2_TR(0x535012);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B535013:{NFSU2_TR(0x535013);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B535017:{NFSU2_TR(0x535017);
TAIL_STATIC(0x4fe940u,4fe);
}
B53501c:L53501c:{c.instructions+=4;NFSU2_TR(0x53501c);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B53501f:{NFSU2_TR(0x53501f);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x6cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B535022:{NFSU2_TR(0x535022);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B535023:{NFSU2_TR(0x535023);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B535026:L535026:{c.instructions+=2;NFSU2_TR(0x535026);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0x6c53ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x6c53ull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0x6c53ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B53502b:{NFSU2_TR(0x53502b);
if(r1(R+518)){{goto L535055;}}
}
B53502d:L53502d:{c.instructions+=2;NFSU2_TR(0x53502d);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x7453ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B535032:{NFSU2_TR(0x535032);
if(r1(R+518)){{goto L535045;}}
}
B535034:L535034:{c.instructions+=2;NFSU2_TR(0x535034);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0x7753ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x7753ull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0x7753ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B535039:{NFSU2_TR(0x535039);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L53505b;}}
}
B53503b:L53503b:{c.instructions+=4;NFSU2_TR(0x53503b);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B53503e:{NFSU2_TR(0x53503e);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x74ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B535041:{NFSU2_TR(0x535041);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B535042:{NFSU2_TR(0x535042);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B535045:L535045:{c.instructions+=5;NFSU2_TR(0x535045);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x4ull))));
}
B535048:{NFSU2_TR(0x535048);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B535049:{NFSU2_TR(0x535049);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53504d:{NFSU2_TR(0x53504d);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x64ull))));
}
B535050:{NFSU2_TR(0x535050);
TAIL_STATIC(0x52d610u,52d);
}
B535055:L535055:{c.instructions+=2;NFSU2_TR(0x535055);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B535058:{NFSU2_TR(0x535058);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x70ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53505b:L53505b:{c.instructions+=2;NFSU2_TR(0x53505b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B53505c:{NFSU2_TR(0x53505c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B535060:L535060:{c.instructions+=6;NFSU2_TR(0x535060);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B535064:{NFSU2_TR(0x535064);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+0))),2);
w4(R+8,u32(r2(U+0)));
}
B535067:{NFSU2_TR(0x535067);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B53506a:{NFSU2_TR(0x53506a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x8ull))));
}
B53506d:{NFSU2_TR(0x53506d);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x6a4cull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x6a4cull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B535073:{NFSU2_TR(0x535073);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L5350ef;}}
}
B535075:L535075:{c.instructions+=1;NFSU2_TR(0x535075);
if(r1(R+518)){{goto L5350d4;}}
}
B535077:L535077:{c.instructions+=2;NFSU2_TR(0x535077);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x444cull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B53507d:{NFSU2_TR(0x53507d);
if(r1(R+518)){{goto L5350c1;}}
}
B53507f:L53507f:{c.instructions+=2;NFSU2_TR(0x53507f);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4953ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B535085:{NFSU2_TR(0x535085);
if(r1(R+518)){{goto L5350ae;}}
}
B535087:L535087:{c.instructions+=2;NFSU2_TR(0x535087);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x6343ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B53508d:{NFSU2_TR(0x53508d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L53515d;}}
}
B535093:L535093:{c.instructions+=9;NFSU2_TR(0x535093);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B535096:{NFSU2_TR(0x535096);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B535099:{NFSU2_TR(0x535099);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53509a:{NFSU2_TR(0x53509a);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B53509d:{NFSU2_TR(0x53509d);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53509e:{NFSU2_TR(0x53509e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53509f:{NFSU2_TR(0x53509f);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5350a1:{NFSU2_TR(0x5350a1);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5350a3:{NFSU2_TR(0x5350a3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5350a8ull));
TAIL_STATIC(0x5196b0u,519);
}
B5350a8:L5350a8:{c.instructions+=2;NFSU2_TR(0x5350a8);
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
B5350ab:{NFSU2_TR(0x5350ab);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5350ae:L5350ae:{c.instructions+=5;NFSU2_TR(0x5350ae);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5350b1:{NFSU2_TR(0x5350b1);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5350b4:{NFSU2_TR(0x5350b4);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5350b5:{NFSU2_TR(0x5350b5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5350b6:{NFSU2_TR(0x5350b6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5350bbull));
TAIL_STATIC(0x518c60u,518);
}
B5350bb:L5350bb:{c.instructions+=2;NFSU2_TR(0x5350bb);
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
B5350be:{NFSU2_TR(0x5350be);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5350c1:L5350c1:{c.instructions+=5;NFSU2_TR(0x5350c1);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5350c4:{NFSU2_TR(0x5350c4);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5350c7:{NFSU2_TR(0x5350c7);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5350c8:{NFSU2_TR(0x5350c8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5350c9:{NFSU2_TR(0x5350c9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5350ceull));
TAIL_STATIC(0x52bb30u,52b);
}
B5350ce:L5350ce:{c.instructions+=2;NFSU2_TR(0x5350ce);
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
B5350d1:{NFSU2_TR(0x5350d1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5350d4:L5350d4:{c.instructions+=9;NFSU2_TR(0x5350d4);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5350d7:{NFSU2_TR(0x5350d7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5350da:{NFSU2_TR(0x5350da);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5350db:{NFSU2_TR(0x5350db);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5350de:{NFSU2_TR(0x5350de);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5350df:{NFSU2_TR(0x5350df);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5350e0:{NFSU2_TR(0x5350e0);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5350e2:{NFSU2_TR(0x5350e2);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5350e4:{NFSU2_TR(0x5350e4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5350e9ull));
TAIL_STATIC(0x5198f0u,519);
}
B5350e9:L5350e9:{c.instructions+=2;NFSU2_TR(0x5350e9);
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
B5350ec:{NFSU2_TR(0x5350ec);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5350ef:L5350ef:{c.instructions+=2;NFSU2_TR(0x5350ef);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x7343ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5350f5:{NFSU2_TR(0x5350f5);
if(r1(R+518)){{goto L535139;}}
}
B5350f7:L5350f7:{c.instructions+=2;NFSU2_TR(0x5350f7);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x744cull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5350fd:{NFSU2_TR(0x5350fd);
if(r1(R+518)){{goto L53511f;}}
}
B5350ff:L5350ff:{c.instructions+=2;NFSU2_TR(0x5350ff);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x764cull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B535105:{NFSU2_TR(0x535105);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L53515d;}}
}
B535107:L535107:{c.instructions+=6;NFSU2_TR(0x535107);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B53510a:{NFSU2_TR(0x53510a);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B53510d:{NFSU2_TR(0x53510d);
{u32 ea_=u32(r4(R+4)+u32(132u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B535113:{NFSU2_TR(0x535113);
{u32 ea_=u32(r4(R+4)+u32(136u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B535119:{NFSU2_TR(0x535119);
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
B53511c:{NFSU2_TR(0x53511c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B53511f:L53511f:{c.instructions+=9;NFSU2_TR(0x53511f);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B535122:{NFSU2_TR(0x535122);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0x1ull))));
}
B535125:{NFSU2_TR(0x535125);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x68ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B535128:{NFSU2_TR(0x535128);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B53512b:{NFSU2_TR(0x53512b);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfffffffeull))));
}
B53512e:{NFSU2_TR(0x53512e);
w4(R+0,u32(u32(r4(R+0))|u32(r4(R+8))));
}
B535130:{NFSU2_TR(0x535130);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x68ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B535133:{NFSU2_TR(0x535133);
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
B535136:{NFSU2_TR(0x535136);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B535139:L535139:{c.instructions+=13;NFSU2_TR(0x535139);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B53513c:{NFSU2_TR(0x53513c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B53513f:{NFSU2_TR(0x53513f);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+16)),r4(U+0));
}
B535143:{NFSU2_TR(0x535143);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B535146:{NFSU2_TR(0x535146);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B535147:{NFSU2_TR(0x535147);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53514b:{NFSU2_TR(0x53514b);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B53514e:{NFSU2_TR(0x53514e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53514f:{NFSU2_TR(0x53514f);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B535153:{NFSU2_TR(0x535153);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B535154:{NFSU2_TR(0x535154);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B535156:{NFSU2_TR(0x535156);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B535158:{NFSU2_TR(0x535158);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53515dull));
TAIL_STATIC(0x5197d0u,519);
}
B53515d:L53515d:{c.instructions+=2;NFSU2_TR(0x53515d);
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
B535160:{NFSU2_TR(0x535160);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B535170:L535170:{c.instructions+=16;NFSU2_TR(0x535170);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B535172:{NFSU2_TR(0x535172);
u8 U[4];
w4(U+0,u32(0x777bd3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B535177:{NFSU2_TR(0x535177);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B53517d:{NFSU2_TR(0x53517d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53517e:{NFSU2_TR(0x53517e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B535185:{NFSU2_TR(0x535185);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B535186:{NFSU2_TR(0x535186);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B535187:{NFSU2_TR(0x535187);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B535188:{NFSU2_TR(0x535188);
__builtin_memmove((R+24),(R+4),4);
}
B53518a:{NFSU2_TR(0x53518a);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53518e:{NFSU2_TR(0x53518e);
u8 U[4];
w4(U+0,u32(0x79ad28ull));
s4(u32(r4(R+24)),r4(U+0));
}
B535194:{NFSU2_TR(0x535194);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B535197:{NFSU2_TR(0x535197);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B535199:{NFSU2_TR(0x535199);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B53519b:{NFSU2_TR(0x53519b);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5351a3:{NFSU2_TR(0x5351a3);
if(r1(R+518)){{goto L5351c4;}}
}
B5351a5:L5351a5:{c.instructions+=8;NFSU2_TR(0x5351a5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5351a8:{NFSU2_TR(0x5351a8);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5351a9:{NFSU2_TR(0x5351a9);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+28),(U+0),4);
}
B5351ac:{NFSU2_TR(0x5351ac);
u8 U[4];
w4(U+0,u32(0x52b960ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5351b1:{NFSU2_TR(0x5351b1);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5351b2:{NFSU2_TR(0x5351b2);
u8 U[4];
w4(U+0,u32(0x38ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5351b4:{NFSU2_TR(0x5351b4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5351b5:{NFSU2_TR(0x5351b5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5351baull));
TAIL_STATIC(0x75c401u,75c);
}
B5351ba:L5351ba:{c.instructions+=2;NFSU2_TR(0x5351ba);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5351bb:{NFSU2_TR(0x5351bb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5351c0ull));
TAIL_STATIC(0x575630u,575);
}
B5351c0:L5351c0:{c.instructions+=2;NFSU2_TR(0x5351c0);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5351c3:{NFSU2_TR(0x5351c3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5351c4:L5351c4:{c.instructions+=4;NFSU2_TR(0x5351c4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5351c7:{NFSU2_TR(0x5351c7);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5351c9:{NFSU2_TR(0x5351c9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5351cc:{NFSU2_TR(0x5351cc);
if(r1(R+518)){{goto L5351d7;}}
}
B5351ce:L5351ce:{c.instructions+=2;NFSU2_TR(0x5351ce);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5351cf:{NFSU2_TR(0x5351cf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5351d4ull));
TAIL_STATIC(0x575630u,575);
}
B5351d4:L5351d4:{c.instructions+=1;NFSU2_TR(0x5351d4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5351d7:L5351d7:{c.instructions+=5;NFSU2_TR(0x5351d7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5351da:{NFSU2_TR(0x5351da);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5351dd:{NFSU2_TR(0x5351dd);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5351de:{NFSU2_TR(0x5351de);
u8 U[5];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5351e2:{NFSU2_TR(0x5351e2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5351e7ull));
TAIL_STATIC(0x575630u,575);
}
B5351e7:L5351e7:{c.instructions+=9;NFSU2_TR(0x5351e7);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5351eb:{NFSU2_TR(0x5351eb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5351ee:{NFSU2_TR(0x5351ee);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5351f1:{NFSU2_TR(0x5351f1);
u8 U[4];
w4(U+0,u32(0x79a9e8ull));
s4(u32(r4(R+24)),r4(U+0));
}
B5351f7:{NFSU2_TR(0x5351f7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5351f8:{NFSU2_TR(0x5351f8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5351f9:{NFSU2_TR(0x5351f9);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B535200:{NFSU2_TR(0x535200);
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
B535203:{NFSU2_TR(0x535203);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B535210:L535210:{c.instructions+=13;NFSU2_TR(0x535210);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B535216:{NFSU2_TR(0x535216);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B535218:{NFSU2_TR(0x535218);
u8 U[4];
w4(U+0,u32(0x77708bull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53521d:{NFSU2_TR(0x53521d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53521e:{NFSU2_TR(0x53521e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B535225:{NFSU2_TR(0x535225);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B535226:{NFSU2_TR(0x535226);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B535227:{NFSU2_TR(0x535227);
__builtin_memmove((R+12),(R+4),4);
}
B535229:{NFSU2_TR(0x535229);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B53522c:{NFSU2_TR(0x53522c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53522d:{NFSU2_TR(0x53522d);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B53522f:{NFSU2_TR(0x53522f);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B535231:{NFSU2_TR(0x535231);
if(r1(R+518)){{goto L535250;}}
}
B535233:L535233:{c.instructions+=7;NFSU2_TR(0x535233);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B535236:{NFSU2_TR(0x535236);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+24),(U+0),4);
}
B535239:{NFSU2_TR(0x535239);
u8 U[4];
w4(U+0,u32(0x52b960ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53523e:{NFSU2_TR(0x53523e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53523f:{NFSU2_TR(0x53523f);
u8 U[4];
w4(U+0,u32(0x38ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B535241:{NFSU2_TR(0x535241);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B535242:{NFSU2_TR(0x535242);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x535247ull));
TAIL_STATIC(0x75c401u,75c);
}
B535247:L535247:{c.instructions+=2;NFSU2_TR(0x535247);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B535248:{NFSU2_TR(0x535248);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53524dull));
TAIL_STATIC(0x575630u,575);
}
B53524d:L53524d:{c.instructions+=1;NFSU2_TR(0x53524d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B535250:L535250:{c.instructions+=5;NFSU2_TR(0x535250);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B535254:{NFSU2_TR(0x535254);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B535256:{NFSU2_TR(0x535256);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B535259:{NFSU2_TR(0x535259);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53525c:{NFSU2_TR(0x53525c);
if(r1(R+518)){{goto L535296;}}
}
B53525e:L53525e:{c.instructions+=5;NFSU2_TR(0x53525e);
__builtin_memmove((R+8),(R+24),4);
}
B535260:{NFSU2_TR(0x535260);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(u32(0x38ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B535263:{NFSU2_TR(0x535263);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x4ull))));
}
B535266:{NFSU2_TR(0x535266);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B535267:{NFSU2_TR(0x535267);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53526cull));
TAIL_STATIC(0x575620u,575);
}
B53526c:L53526c:{c.instructions+=5;NFSU2_TR(0x53526c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B53526f:{NFSU2_TR(0x53526f);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B535273:{NFSU2_TR(0x535273);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B535275:{NFSU2_TR(0x535275);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B535279:{NFSU2_TR(0x535279);
if(r1(R+518)){{goto L535293;}}
}
B53527b:L53527b:{c.instructions+=8;NFSU2_TR(0x53527b);
u8 U[4];
w4(U+0,u32(0x52b960ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B535280:{NFSU2_TR(0x535280);
u8 U[4];
w4(U+0,u32(0x525e80ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B535285:{NFSU2_TR(0x535285);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B535286:{NFSU2_TR(0x535286);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B535289:{NFSU2_TR(0x535289);
u8 U[4];
w4(U+0,u32(0x38ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53528b:{NFSU2_TR(0x53528b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53528c:{NFSU2_TR(0x53528c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+0)),r4(U+0));
}
B53528e:{NFSU2_TR(0x53528e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x535293ull));
TAIL_STATIC(0x75c461u,75c);
}
B535293:L535293:{c.instructions+=1;NFSU2_TR(0x535293);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B535296:L535296:{c.instructions+=7;NFSU2_TR(0x535296);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B53529a:{NFSU2_TR(0x53529a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B53529b:{NFSU2_TR(0x53529b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B53529c:{NFSU2_TR(0x53529c);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5352a3:{NFSU2_TR(0x5352a3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5352a4:{NFSU2_TR(0x5352a4);
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
B5352a7:{NFSU2_TR(0x5352a7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5352b0:L5352b0:{c.instructions+=3;NFSU2_TR(0x5352b0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5352b1:{NFSU2_TR(0x5352b1);
__builtin_memmove((R+24),(R+4),4);
}
B5352b3:{NFSU2_TR(0x5352b3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5352b8ull));
TAIL_STATIC(0x52baa0u,52b);
}
B5352b8:L5352b8:{c.instructions+=2;NFSU2_TR(0x5352b8);
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
B5352bd:{NFSU2_TR(0x5352bd);
if(r1(R+518)){{goto L5352c8;}}
}
B5352bf:L5352bf:{c.instructions+=2;NFSU2_TR(0x5352bf);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5352c0:{NFSU2_TR(0x5352c0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5352c5ull));
TAIL_STATIC(0x575630u,575);
}
B5352c5:L5352c5:{c.instructions+=1;NFSU2_TR(0x5352c5);
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
B5352c8:L5352c8:{c.instructions+=3;NFSU2_TR(0x5352c8);
__builtin_memmove((R+0),(R+24),4);
}
B5352ca:{NFSU2_TR(0x5352ca);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5352cb:{NFSU2_TR(0x5352cb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5352d0:L5352d0:{c.instructions+=25;NFSU2_TR(0x5352d0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5352d1:{NFSU2_TR(0x5352d1);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5352d2:{NFSU2_TR(0x5352d2);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5352d3:{NFSU2_TR(0x5352d3);
__builtin_memmove((R+24),(R+4),4);
}
B5352d5:{NFSU2_TR(0x5352d5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B5352d8:{NFSU2_TR(0x5352d8);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5352d9:{NFSU2_TR(0x5352d9);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5352dd:{NFSU2_TR(0x5352dd);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5352e0:{NFSU2_TR(0x5352e0);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xeull))));
}
B5352e3:{NFSU2_TR(0x5352e3);
w4(R+20,u32(u32(r4(R+20))|u32(r4(R+0))));
}
B5352e5:{NFSU2_TR(0x5352e5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x68ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5352e8:{NFSU2_TR(0x5352e8);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x84ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5352ee:{NFSU2_TR(0x5352ee);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x84ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5352f4:{NFSU2_TR(0x5352f4);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x88ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5352fa:{NFSU2_TR(0x5352fa);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x88ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B535300:{NFSU2_TR(0x535300);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B535303:{NFSU2_TR(0x535303);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B535306:{NFSU2_TR(0x535306);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B535309:{NFSU2_TR(0x535309);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x70ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53530c:{NFSU2_TR(0x53530c);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B53530f:{NFSU2_TR(0x53530f);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B535312:{NFSU2_TR(0x535312);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B535313:{NFSU2_TR(0x535313);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B535314:{NFSU2_TR(0x535314);
__builtin_memmove((R+4),(R+24),4);
}
B535316:{NFSU2_TR(0x535316);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53531bull));
TAIL_STATIC(0x52bb30u,52b);
}
B53531b:L53531b:{c.instructions+=4;NFSU2_TR(0x53531b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B535321:{NFSU2_TR(0x535321);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B535323:{NFSU2_TR(0x535323);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B535325:{NFSU2_TR(0x535325);
if(r1(R+518)){{goto L535336;}}
}
B535327:L535327:{c.instructions+=2;NFSU2_TR(0x535327);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B535328:{NFSU2_TR(0x535328);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53532dull));
TAIL_STATIC(0x575630u,575);
}
B53532d:L53532d:{c.instructions+=2;NFSU2_TR(0x53532d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B535330:{NFSU2_TR(0x535330);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa0ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B535336:L535336:{c.instructions+=3;NFSU2_TR(0x535336);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x9cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B53533c:{NFSU2_TR(0x53533c);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B53533e:{NFSU2_TR(0x53533e);
if(r1(R+518)){{goto L53534f;}}
}
B535340:L535340:{c.instructions+=2;NFSU2_TR(0x535340);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B535341:{NFSU2_TR(0x535341);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x535346ull));
TAIL_STATIC(0x575630u,575);
}
B535346:L535346:{c.instructions+=2;NFSU2_TR(0x535346);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B535349:{NFSU2_TR(0x535349);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x9cull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53534f:L53534f:{c.instructions+=9;NFSU2_TR(0x53534f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x90ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B535355:{NFSU2_TR(0x535355);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x98ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53535b:{NFSU2_TR(0x53535b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x94ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B535361:{NFSU2_TR(0x535361);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x94ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B535367:{NFSU2_TR(0x535367);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x90ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B53536d:{NFSU2_TR(0x53536d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53536e:{NFSU2_TR(0x53536e);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53536f:{NFSU2_TR(0x53536f);
__builtin_memmove((R+4),(R+24),4);
}
B535371:{NFSU2_TR(0x535371);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x535376ull));
TAIL_STATIC(0x518c60u,518);
}
B535376:L535376:{c.instructions+=6;NFSU2_TR(0x535376);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B535379:{NFSU2_TR(0x535379);
u8 U[32];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
w8(U+8,u64(s64(s32(r4(R+0)))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+16,u64(s64(s32(r4(U+4)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+0,u32(r8(U+24)));
}
B53537d:{NFSU2_TR(0x53537d);
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
B53537f:{NFSU2_TR(0x53537f);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B535383:{NFSU2_TR(0x535383);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B535387:{NFSU2_TR(0x535387);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L5354e6;}}
}
B53538d:L53538d:{c.instructions+=2;NFSU2_TR(0x53538d);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B53538f:{NFSU2_TR(0x53538f);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B535390:L535390:{c.instructions+=35;NFSU2_TR(0x535390);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B535396:{NFSU2_TR(0x535396);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B535399:{NFSU2_TR(0x535399);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B53539f:{NFSU2_TR(0x53539f);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4),4);
s4(u32(r4(U+4)),r4(U+8));
}
B5353a2:{NFSU2_TR(0x5353a2);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5353a8:{NFSU2_TR(0x5353a8);
u8 U[16];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+8),(U+12),4);
}
B5353ac:{NFSU2_TR(0x5353ac);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5353b2:{NFSU2_TR(0x5353b2);
u8 U[16];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+8),4);
s4(u32(r4(U+8)),r4(U+12));
}
B5353b6:{NFSU2_TR(0x5353b6);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5353bc:{NFSU2_TR(0x5353bc);
u8 U[16];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+12),(U+12),4);
}
B5353c0:{NFSU2_TR(0x5353c0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5353c6:{NFSU2_TR(0x5353c6);
u8 U[16];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+12),4);
s4(u32(r4(U+8)),r4(U+12));
}
B5353ca:{NFSU2_TR(0x5353ca);
u8 U[12];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B5353ce:{NFSU2_TR(0x5353ce);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5353d1:{NFSU2_TR(0x5353d1);
u8 U[16];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+4),4);
s4(u32(r4(U+8)),r4(U+12));
}
B5353d5:{NFSU2_TR(0x5353d5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5353db:{NFSU2_TR(0x5353db);
u8 U[12];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+8),(U+8),4);
}
B5353df:{NFSU2_TR(0x5353df);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5353e5:{NFSU2_TR(0x5353e5);
u8 U[16];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+8),(U+12),4);
}
B5353e9:{NFSU2_TR(0x5353e9);
u8 U[16];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+8),4);
s4(u32(r4(U+8)),r4(U+12));
}
B5353ed:{NFSU2_TR(0x5353ed);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5353f3:{NFSU2_TR(0x5353f3);
u8 U[16];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+4),(U+12),4);
}
B5353f7:{NFSU2_TR(0x5353f7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5353fd:{NFSU2_TR(0x5353fd);
u8 U[16];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+4),4);
s4(u32(r4(U+8)),r4(U+12));
}
B535401:{NFSU2_TR(0x535401);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B535407:{NFSU2_TR(0x535407);
u8 U[16];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+8),(U+12),4);
}
B53540b:{NFSU2_TR(0x53540b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B535411:{NFSU2_TR(0x535411);
u8 U[16];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+8),4);
s4(u32(r4(U+8)),r4(U+12));
}
B535415:{NFSU2_TR(0x535415);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B53541b:{NFSU2_TR(0x53541b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B535421:{NFSU2_TR(0x535421);
u8 U[16];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+4),(U+12),4);
}
B535425:{NFSU2_TR(0x535425);
u8 U[16];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+4),4);
s4(u32(r4(U+8)),r4(U+12));
}
B535429:{NFSU2_TR(0x535429);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B53542f:{NFSU2_TR(0x53542f);
u8 U[24];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((U+16),(U+12),4);
w4(U+20,u32(u32(r4(U+16))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+20))==(u32(0x0ull))));
}
B535434:{NFSU2_TR(0x535434);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L535499;}}
}
B535436:L535436:{c.instructions+=4;NFSU2_TR(0x535436);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B53543c:{NFSU2_TR(0x53543c);
u8 U[16];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+12),(U+12),4);
}
B535440:{NFSU2_TR(0x535440);
u8 U[14];
__builtin_memmove((U+6),(R+20),4);
w1(R+512,u8((r4(R+12))<(r4(U+6))));
w1(R+523,sborrow<u32>(r4(R+12),r4(U+6)));
w4(U+10,u32(u32(r4(R+12))-u32(r4(U+6))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B535442:{NFSU2_TR(0x535442);
if(r1(R+518)){{goto L5354e5;}}
}
B535448:L535448:{c.instructions+=12;NFSU2_TR(0x535448);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x98ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B53544e:{NFSU2_TR(0x53544e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x9cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B535454:{NFSU2_TR(0x535454);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B535457:{NFSU2_TR(0x535457);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B535458:{NFSU2_TR(0x535458);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x98ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53545e:{NFSU2_TR(0x53545e);
u8 U[2];
__builtin_memmove((U+0),(R+20),2);
s2(u32(r4(R+8)),r2(U+0));
}
B535461:{NFSU2_TR(0x535461);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B535467:{NFSU2_TR(0x535467);
u8 U[16];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+8),4);
s4(u32(r4(U+8)),r4(U+12));
}
B53546b:{NFSU2_TR(0x53546b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B535471:{NFSU2_TR(0x535471);
u8 U[16];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+4),(U+12),4);
}
B535475:{NFSU2_TR(0x535475);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B535477:{NFSU2_TR(0x535477);
if(r1(R+518)){{goto L535499;}}
}
B535479:L535479:{c.instructions+=4;NFSU2_TR(0x535479);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B53547b:{NFSU2_TR(0x53547b);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+12))),2);
__builtin_memmove((R+8),(U+0),2);
}
B53547e:{NFSU2_TR(0x53547e);
u8 U[4];
__builtin_memmove((U+0),(R+20),2);
w2(U+2,u16(u32(r2(R+8))-u32(r2(U+0))));
w1(R+518,u8((r2(U+2))==(u16(0x0ull))));
}
B535481:{NFSU2_TR(0x535481);
if(r1(R+518)){{goto L535496;}}
}
B535483:L535483:{c.instructions+=7;NFSU2_TR(0x535483);
u8 U[2];
__builtin_memmove((U+0),(R+8),2);
s2(u32(r4(R+4)),r2(U+0));
}
B535486:{NFSU2_TR(0x535486);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x2ull))));
}
B535489:{NFSU2_TR(0x535489);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B53548b:{NFSU2_TR(0x53548b);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+12))),2);
__builtin_memmove((R+8),(U+0),2);
}
B53548e:{NFSU2_TR(0x53548e);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x2ull))));
}
B535491:{NFSU2_TR(0x535491);
u8 U[4];
__builtin_memmove((U+0),(R+20),2);
w2(U+2,u16(u32(r2(R+8))-u32(r2(U+0))));
w1(R+518,u8((r2(U+2))==(u16(0x0ull))));
}
B535494:{NFSU2_TR(0x535494);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x535483u);}goto L535483;}}
}
B535496:L535496:{c.instructions+=1;NFSU2_TR(0x535496);
u8 U[2];
__builtin_memmove((U+0),(R+20),2);
s2(u32(r4(R+4)),r2(U+0));
}
B535499:L535499:{c.instructions+=5;NFSU2_TR(0x535499);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B53549f:{NFSU2_TR(0x53549f);
u8 U[16];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+8),(U+12),4);
}
B5354a3:{NFSU2_TR(0x5354a3);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+0))));
}
B5354a5:{NFSU2_TR(0x5354a5);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5354a8:{NFSU2_TR(0x5354a8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5354cd;}}
}
B5354aa:L5354aa:{c.instructions+=10;NFSU2_TR(0x5354aa);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5354b0:{NFSU2_TR(0x5354b0);
u8 U[16];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+12),(U+12),4);
}
B5354b4:{NFSU2_TR(0x5354b4);
u8 U[12];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+8),(U+8),4);
}
B5354b8:{NFSU2_TR(0x5354b8);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5354bb:{NFSU2_TR(0x5354bb);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B5354be:{NFSU2_TR(0x5354be);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5354c1:{NFSU2_TR(0x5354c1);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B5354c4:{NFSU2_TR(0x5354c4);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5354c7:{NFSU2_TR(0x5354c7);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5354ca:{NFSU2_TR(0x5354ca);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5354cd:L5354cd:{c.instructions+=7;NFSU2_TR(0x5354cd);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5354d1:{NFSU2_TR(0x5354d1);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5354d5:{NFSU2_TR(0x5354d5);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B5354d6:{NFSU2_TR(0x5354d6);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
}
B5354d9:{NFSU2_TR(0x5354d9);
u8 U[14];
__builtin_memmove((U+6),(R+8),4);
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
B5354db:{NFSU2_TR(0x5354db);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5354df:{NFSU2_TR(0x5354df);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x535390u);}goto L535390;}}
}
B5354e5:L5354e5:{c.instructions+=1;NFSU2_TR(0x5354e5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5354e6:L5354e6:{c.instructions+=5;NFSU2_TR(0x5354e6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5354e7:{NFSU2_TR(0x5354e7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5354e8:{NFSU2_TR(0x5354e8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5354e9:{NFSU2_TR(0x5354e9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5354ea:{NFSU2_TR(0x5354ea);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5354f0:L5354f0:{c.instructions+=5;NFSU2_TR(0x5354f0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5354f1:{NFSU2_TR(0x5354f1);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5354f5:{NFSU2_TR(0x5354f5);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5354f8:{NFSU2_TR(0x5354f8);
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
B5354fa:{NFSU2_TR(0x5354fa);
if(r1(R+519)){{goto L535561;}}
}
B5354fc:L5354fc:{c.instructions+=3;NFSU2_TR(0x5354fc);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B535500:{NFSU2_TR(0x535500);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B535503:{NFSU2_TR(0x535503);
if(r1(R+518)){{goto L53551f;}}
}
B535505:L535505:{c.instructions+=2;NFSU2_TR(0x535505);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B535506:{NFSU2_TR(0x535506);
if(r1(R+518)){{goto L53550d;}}
}
B535508:L535508:{c.instructions+=2;NFSU2_TR(0x535508);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x2ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B53550b:{NFSU2_TR(0x53550b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L535532;}}
}
B53550d:L53550d:{c.instructions+=6;NFSU2_TR(0x53550d);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B535511:{NFSU2_TR(0x535511);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B535515:{NFSU2_TR(0x535515);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B535516:{NFSU2_TR(0x535516);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B535517:{NFSU2_TR(0x535517);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B535518:{NFSU2_TR(0x535518);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53551dull));
TAIL_STATIC(0x52bdc0u,52b);
}
B53551d:L53551d:{c.instructions+=1;NFSU2_TR(0x53551d);
{goto L53552f;}
}
B53551f:L53551f:{c.instructions+=6;NFSU2_TR(0x53551f);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B535523:{NFSU2_TR(0x535523);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B535527:{NFSU2_TR(0x535527);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B535528:{NFSU2_TR(0x535528);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B535529:{NFSU2_TR(0x535529);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53552a:{NFSU2_TR(0x53552a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53552full));
TAIL_STATIC(0x519d40u,519);
}
B53552f:L53552f:{c.instructions+=1;NFSU2_TR(0x53552f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B535532:L535532:{c.instructions+=5;NFSU2_TR(0x535532);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B535535:{NFSU2_TR(0x535535);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B535536:{NFSU2_TR(0x535536);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B535538:{NFSU2_TR(0x535538);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B53553a:{NFSU2_TR(0x53553a);
if(r1(R+518)){{goto L535546;}}
}
B53553c:L53553c:{c.instructions+=2;NFSU2_TR(0x53553c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B53553f:{NFSU2_TR(0x53553f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x535544ull));
TAIL_STATIC(0x4fe890u,4fe);
}
B535544:L535544:{c.instructions+=1;NFSU2_TR(0x535544);
{goto L535549;}
}
B535546:L535546:{c.instructions+=1;NFSU2_TR(0x535546);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B535549:L535549:{c.instructions+=2;NFSU2_TR(0x535549);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B53554b:{NFSU2_TR(0x53554b);
if(r1(R+518)){{goto L53555c;}}
}
B53554d:L53554d:{c.instructions+=1;NFSU2_TR(0x53554d);
__builtin_memmove((R+4),(R+4),4);
}
B535550:L535550:{c.instructions+=4;NFSU2_TR(0x535550);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B535553:{NFSU2_TR(0x535553);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B535554:{NFSU2_TR(0x535554);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B535556:{NFSU2_TR(0x535556);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x535550u);}goto L535550;}}
}
B535558:L535558:{c.instructions+=2;NFSU2_TR(0x535558);
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
B53555a:{NFSU2_TR(0x53555a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L535560;}}
}
B53555c:L53555c:{c.instructions+=1;NFSU2_TR(0x53555c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3ull))));
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+4,u8(u32(r1(U+4))|u32(u8(0x80ull))));
s1(u32(r4(U+0)),r1(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(R+519,u8(s8(r1(U+4))<s8(u8(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(R+518,u8((r1(U+4))==(u8(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0xffull))));
w1(U+6,u8(__builtin_popcountll(u64(r1(U+5)))));
w1(U+7,u8(u32(r1(U+6))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+7))==(u8(0x0ull))));
}
B535560:L535560:{c.instructions+=1;NFSU2_TR(0x535560);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B535561:L535561:{c.instructions+=2;NFSU2_TR(0x535561);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B535562:{NFSU2_TR(0x535562);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B535570:L535570:{c.instructions+=8;NFSU2_TR(0x535570);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x10ull))));
}
B535573:{NFSU2_TR(0x535573);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B535574:{NFSU2_TR(0x535574);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B535575:{NFSU2_TR(0x535575);
__builtin_memmove((R+24),(R+4),4);
}
B535577:{NFSU2_TR(0x535577);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B53557b:{NFSU2_TR(0x53557b);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B53557e:{NFSU2_TR(0x53557e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53557f:{NFSU2_TR(0x53557f);
if(r1(R+518)){{goto L53559b;}}
}
B535581:L535581:{c.instructions+=2;NFSU2_TR(0x535581);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B535582:{NFSU2_TR(0x535582);
if(r1(R+518)){{goto L535589;}}
}
B535584:L535584:{c.instructions+=2;NFSU2_TR(0x535584);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x2ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B535587:{NFSU2_TR(0x535587);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5355ae;}}
}
B535589:L535589:{c.instructions+=6;NFSU2_TR(0x535589);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B53558d:{NFSU2_TR(0x53558d);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B535591:{NFSU2_TR(0x535591);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B535592:{NFSU2_TR(0x535592);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B535593:{NFSU2_TR(0x535593);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B535594:{NFSU2_TR(0x535594);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x535599ull));
TAIL_STATIC(0x52bdc0u,52b);
}
B535599:L535599:{c.instructions+=1;NFSU2_TR(0x535599);
{goto L5355ab;}
}
B53559b:L53559b:{c.instructions+=6;NFSU2_TR(0x53559b);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B53559f:{NFSU2_TR(0x53559f);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5355a3:{NFSU2_TR(0x5355a3);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5355a4:{NFSU2_TR(0x5355a4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5355a5:{NFSU2_TR(0x5355a5);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5355a6:{NFSU2_TR(0x5355a6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5355abull));
TAIL_STATIC(0x519d40u,519);
}
B5355ab:L5355ab:{c.instructions+=1;NFSU2_TR(0x5355ab);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B5355ae:L5355ae:{c.instructions+=32;NFSU2_TR(0x5355ae);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5355b2:{NFSU2_TR(0x5355b2);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5355b5:{NFSU2_TR(0x5355b5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5355b8:{NFSU2_TR(0x5355b8);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B5355bc:{NFSU2_TR(0x5355bc);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5355c0:{NFSU2_TR(0x5355c0);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+12))));
}
B5355c2:{NFSU2_TR(0x5355c2);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B5355c6:{NFSU2_TR(0x5355c6);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+28))));
}
B5355c8:{NFSU2_TR(0x5355c8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+28),(U+0),4);
}
B5355ca:{NFSU2_TR(0x5355ca);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5355cd:{NFSU2_TR(0x5355cd);
w4(R+28,u32(u32(r4(R+28))-u32(r4(R+12))));
}
B5355cf:{NFSU2_TR(0x5355cf);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))-u32(r4(U+4))));
}
B5355d3:{NFSU2_TR(0x5355d3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B5355d6:{NFSU2_TR(0x5355d6);
w4(R+12,u32(u32(r4(R+12))+u32(r4(R+4))));
}
B5355d8:{NFSU2_TR(0x5355d8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5355db:{NFSU2_TR(0x5355db);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+8))));
}
B5355dd:{NFSU2_TR(0x5355dd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5355e0:{NFSU2_TR(0x5355e0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5355e3:{NFSU2_TR(0x5355e3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5355e6:{NFSU2_TR(0x5355e6);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+28))));
}
B5355e8:{NFSU2_TR(0x5355e8);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+0))));
}
B5355ea:{NFSU2_TR(0x5355ea);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5355ed:{NFSU2_TR(0x5355ed);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5355f0:{NFSU2_TR(0x5355f0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5355f3:{NFSU2_TR(0x5355f3);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5355f6:{NFSU2_TR(0x5355f6);
w1(R+0,u8(u32(r1(R+0))&u32(u8(0x7full))));
}
B5355f8:{NFSU2_TR(0x5355f8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5355f9:{NFSU2_TR(0x5355f9);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5355fc:{NFSU2_TR(0x5355fc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5355fd:{NFSU2_TR(0x5355fd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5355fe:{NFSU2_TR(0x5355fe);
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
B535601:{NFSU2_TR(0x535601);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B535610:L535610:{c.instructions+=7;NFSU2_TR(0x535610);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x38ull))));
}
B535613:{NFSU2_TR(0x535613);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B535614:{NFSU2_TR(0x535614);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B535615:{NFSU2_TR(0x535615);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B535616:{NFSU2_TR(0x535616);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B535617:{NFSU2_TR(0x535617);
u8 U[4];
w4(U+0,u32(0x28ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B535619:{NFSU2_TR(0x535619);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53561eull));
TAIL_STATIC(0x575620u,575);
}
B53561e:L53561e:{c.instructions+=4;NFSU2_TR(0x53561e);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B535620:{NFSU2_TR(0x535620);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B535623:{NFSU2_TR(0x535623);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B535625:{NFSU2_TR(0x535625);
if(r1(R+518)){{goto L535652;}}
}
B535627:L535627:{c.instructions+=12;NFSU2_TR(0x535627);
w4(R+4,u32(0xabadcafeull));
}
B53562c:{NFSU2_TR(0x53562c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53562f:{NFSU2_TR(0x53562f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B535632:{NFSU2_TR(0x535632);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B535635:{NFSU2_TR(0x535635);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B535638:{NFSU2_TR(0x535638);
u8 U[4];
w4(U+0,u32(0x79b90cull));
s4(u32(r4(R+0)),r4(U+0));
}
B53563e:{NFSU2_TR(0x53563e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
w4(U+4,u32(0x79a9ecull));
s4(u32(r4(U+0)),r4(U+4));
}
B535645:{NFSU2_TR(0x535645);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B535648:{NFSU2_TR(0x535648);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53564b:{NFSU2_TR(0x53564b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53564e:{NFSU2_TR(0x53564e);
__builtin_memmove((R+12),(R+0),4);
}
B535650:{NFSU2_TR(0x535650);
{goto L535654;}
}
B535652:L535652:{c.instructions+=1;NFSU2_TR(0x535652);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B535654:L535654:{c.instructions+=4;NFSU2_TR(0x535654);
u8 U[8];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B535658:{NFSU2_TR(0x535658);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B535659:{NFSU2_TR(0x535659);
__builtin_memmove((R+4),(R+12),4);
}
B53565b:{NFSU2_TR(0x53565b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x535660ull));
TAIL_STATIC(0x519de0u,519);
}
B535660:L535660:{c.instructions+=4;NFSU2_TR(0x535660);
u8 U[4];
w4(U+0,u32(0x6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B535662:{NFSU2_TR(0x535662);
u8 U[4];
w4(U+0,u32(0x79bb24ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B535667:{NFSU2_TR(0x535667);
__builtin_memmove((R+4),(R+12),4);
}
B535669:{NFSU2_TR(0x535669);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53566eull));
TAIL_STATIC(0x519eb0u,519);
}
B53566e:L53566e:{c.instructions+=4;NFSU2_TR(0x53566e);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B535670:{NFSU2_TR(0x535670);
u8 U[4];
w4(U+0,u32(0x79bb1cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B535675:{NFSU2_TR(0x535675);
__builtin_memmove((R+4),(R+12),4);
}
B535677:{NFSU2_TR(0x535677);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53567cull));
TAIL_STATIC(0x519eb0u,519);
}
B53567c:L53567c:{c.instructions+=4;NFSU2_TR(0x53567c);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53567e:{NFSU2_TR(0x53567e);
u8 U[4];
w4(U+0,u32(0x79bb10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B535683:{NFSU2_TR(0x535683);
__builtin_memmove((R+4),(R+12),4);
}
B535685:{NFSU2_TR(0x535685);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53568aull));
TAIL_STATIC(0x519eb0u,519);
}
B53568a:L53568a:{c.instructions+=4;NFSU2_TR(0x53568a);
u8 U[4];
w4(U+0,u32(0x5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53568c:{NFSU2_TR(0x53568c);
u8 U[4];
w4(U+0,u32(0x79bb04ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B535691:{NFSU2_TR(0x535691);
__builtin_memmove((R+4),(R+12),4);
}
B535693:{NFSU2_TR(0x535693);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x535698ull));
TAIL_STATIC(0x519eb0u,519);
}
B535698:L535698:{c.instructions+=4;NFSU2_TR(0x535698);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53569a:{NFSU2_TR(0x53569a);
u8 U[4];
w4(U+0,u32(0x79bafcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53569f:{NFSU2_TR(0x53569f);
__builtin_memmove((R+4),(R+12),4);
}
B5356a1:{NFSU2_TR(0x5356a1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5356a6ull));
TAIL_STATIC(0x519eb0u,519);
}
B5356a6:L5356a6:{c.instructions+=19;NFSU2_TR(0x5356a6);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B5356a9:{NFSU2_TR(0x5356a9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5356ac:{NFSU2_TR(0x5356ac);
w4(R+0,u32(0xffull));
}
B5356b1:{NFSU2_TR(0x5356b1);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5356b2:{NFSU2_TR(0x5356b2);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5356ba:{NFSU2_TR(0x5356ba);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5356c2:{NFSU2_TR(0x5356c2);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5356ca:{NFSU2_TR(0x5356ca);
u8 U[8];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5356d2:{NFSU2_TR(0x5356d2);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5356da:{NFSU2_TR(0x5356da);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5356e2:{NFSU2_TR(0x5356e2);
u8 U[8];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5356ea:{NFSU2_TR(0x5356ea);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5356f2:{NFSU2_TR(0x5356f2);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5356fa:{NFSU2_TR(0x5356fa);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B535702:{NFSU2_TR(0x535702);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B535706:{NFSU2_TR(0x535706);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53570a:{NFSU2_TR(0x53570a);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53570e:{NFSU2_TR(0x53570e);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B535712:{NFSU2_TR(0x535712);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x535717ull));
TAIL_STATIC(0x575630u,575);
}
B535717:L535717:{c.instructions+=5;NFSU2_TR(0x535717);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B53571a:{NFSU2_TR(0x53571a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B53571d:{NFSU2_TR(0x53571d);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B53571f:{NFSU2_TR(0x53571f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B535722:{NFSU2_TR(0x535722);
if(r1(R+518)){{goto L535749;}}
}
B535724:L535724:{c.instructions+=2;NFSU2_TR(0x535724);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B535725:{NFSU2_TR(0x535725);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53572aull));
TAIL_STATIC(0x575620u,575);
}
B53572a:L53572a:{c.instructions+=6;NFSU2_TR(0x53572a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B53572d:{NFSU2_TR(0x53572d);
__builtin_memmove((R+8),(R+4),4);
}
B53572f:{NFSU2_TR(0x53572f);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B535732:{NFSU2_TR(0x535732);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B535735:{NFSU2_TR(0x535735);
u8 U[4];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((R+24),(U+0),4);
}
B535739:{NFSU2_TR(0x535739);
__builtin_memmove((R+28),(R+0),4);
}
B53573b:L53573b:{c.instructions+=1;NFSU2_TR(0x53573b);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L53573d;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x53573bu);}goto L53573b;}
}
B53573d:L53573d:{c.instructions+=3;NFSU2_TR(0x53573d);
__builtin_memmove((R+4),(R+8),4);
}
B53573f:{NFSU2_TR(0x53573f);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B535742:{NFSU2_TR(0x535742);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B535745:L535745:{c.instructions+=1;NFSU2_TR(0x535745);
u8 U[35];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L535747;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+17),(R+28),4);
w4(U+21,u32(u32(r4(R+28))+u32(u32(0x1ull))));
w4(U+25,u32(r1(R+522)));
w4(U+29,u32(u32(u32(0x2ull))*u32(r4(U+25))));
w4(R+28,u32(u32(r4(U+21))-u32(r4(U+29))));
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+24))+u32(u32(0x1ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x2ull))*u32(r4(U+8))));
w4(R+24,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),gp(u32(r4(U+0))),1);
__builtin_memmove((U+33),(U+16),1);
s1(u32(r4(U+17)),r1(U+33));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x535745u);}goto L535745;}
}
B535747:L535747:{c.instructions+=1;NFSU2_TR(0x535747);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B535749:L535749:{c.instructions+=4;NFSU2_TR(0x535749);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B53574c:{NFSU2_TR(0x53574c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B53574f:{NFSU2_TR(0x53574f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B535750:{NFSU2_TR(0x535750);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x535755ull));
TAIL_STATIC(0x575630u,575);
}
B535755:L535755:{c.instructions+=5;NFSU2_TR(0x535755);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B535758:{NFSU2_TR(0x535758);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B53575b:{NFSU2_TR(0x53575b);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B53575d:{NFSU2_TR(0x53575d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B535760:{NFSU2_TR(0x535760);
if(r1(R+518)){{goto L535787;}}
}
B535762:L535762:{c.instructions+=2;NFSU2_TR(0x535762);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B535763:{NFSU2_TR(0x535763);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x535768ull));
TAIL_STATIC(0x575620u,575);
}
B535768:L535768:{c.instructions+=6;NFSU2_TR(0x535768);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B53576b:{NFSU2_TR(0x53576b);
__builtin_memmove((R+8),(R+4),4);
}
B53576d:{NFSU2_TR(0x53576d);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B535770:{NFSU2_TR(0x535770);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B535773:{NFSU2_TR(0x535773);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+24),(U+0),4);
}
B535777:{NFSU2_TR(0x535777);
__builtin_memmove((R+28),(R+0),4);
}
B535779:L535779:{c.instructions+=1;NFSU2_TR(0x535779);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L53577b;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x535779u);}goto L535779;}
}
B53577b:L53577b:{c.instructions+=3;NFSU2_TR(0x53577b);
__builtin_memmove((R+4),(R+8),4);
}
B53577d:{NFSU2_TR(0x53577d);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B535780:{NFSU2_TR(0x535780);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B535783:L535783:{c.instructions+=1;NFSU2_TR(0x535783);
u8 U[35];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L535785;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+17),(R+28),4);
w4(U+21,u32(u32(r4(R+28))+u32(u32(0x1ull))));
w4(U+25,u32(r1(R+522)));
w4(U+29,u32(u32(u32(0x2ull))*u32(r4(U+25))));
w4(R+28,u32(u32(r4(U+21))-u32(r4(U+29))));
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+24))+u32(u32(0x1ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x2ull))*u32(r4(U+8))));
w4(R+24,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),gp(u32(r4(U+0))),1);
__builtin_memmove((U+33),(U+16),1);
s1(u32(r4(U+17)),r1(U+33));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x535783u);}goto L535783;}
}
B535785:L535785:{c.instructions+=1;NFSU2_TR(0x535785);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B535787:L535787:{c.instructions+=4;NFSU2_TR(0x535787);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B53578a:{NFSU2_TR(0x53578a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B53578d:{NFSU2_TR(0x53578d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53578e:{NFSU2_TR(0x53578e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x535793ull));
TAIL_STATIC(0x575630u,575);
}
B535793:L535793:{c.instructions+=5;NFSU2_TR(0x535793);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B535796:{NFSU2_TR(0x535796);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B535799:{NFSU2_TR(0x535799);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B53579b:{NFSU2_TR(0x53579b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53579e:{NFSU2_TR(0x53579e);
if(r1(R+518)){{goto L5357c5;}}
}
B5357a0:L5357a0:{c.instructions+=2;NFSU2_TR(0x5357a0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5357a1:{NFSU2_TR(0x5357a1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5357a6ull));
TAIL_STATIC(0x575620u,575);
}
B5357a6:L5357a6:{c.instructions+=6;NFSU2_TR(0x5357a6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5357a9:{NFSU2_TR(0x5357a9);
__builtin_memmove((R+8),(R+4),4);
}
B5357ab:{NFSU2_TR(0x5357ab);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B5357ae:{NFSU2_TR(0x5357ae);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5357b1:{NFSU2_TR(0x5357b1);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+24),(U+0),4);
}
B5357b5:{NFSU2_TR(0x5357b5);
__builtin_memmove((R+28),(R+0),4);
}
B5357b7:L5357b7:{c.instructions+=1;NFSU2_TR(0x5357b7);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L5357b9;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5357b7u);}goto L5357b7;}
}
B5357b9:L5357b9:{c.instructions+=3;NFSU2_TR(0x5357b9);
__builtin_memmove((R+4),(R+8),4);
}
B5357bb:{NFSU2_TR(0x5357bb);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B5357be:{NFSU2_TR(0x5357be);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5357c1:L5357c1:{c.instructions+=1;NFSU2_TR(0x5357c1);
u8 U[35];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L5357c3;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+17),(R+28),4);
w4(U+21,u32(u32(r4(R+28))+u32(u32(0x1ull))));
w4(U+25,u32(r1(R+522)));
w4(U+29,u32(u32(u32(0x2ull))*u32(r4(U+25))));
w4(R+28,u32(u32(r4(U+21))-u32(r4(U+29))));
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+24))+u32(u32(0x1ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x2ull))*u32(r4(U+8))));
w4(R+24,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),gp(u32(r4(U+0))),1);
__builtin_memmove((U+33),(U+16),1);
s1(u32(r4(U+17)),r1(U+33));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5357c1u);}goto L5357c1;}
}
B5357c3:L5357c3:{c.instructions+=1;NFSU2_TR(0x5357c3);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B5357c5:L5357c5:{c.instructions+=4;NFSU2_TR(0x5357c5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B5357c8:{NFSU2_TR(0x5357c8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5357cb:{NFSU2_TR(0x5357cb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5357cc:{NFSU2_TR(0x5357cc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5357d1ull));
TAIL_STATIC(0x575630u,575);
}
B5357d1:L5357d1:{c.instructions+=5;NFSU2_TR(0x5357d1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5357d4:{NFSU2_TR(0x5357d4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5357d7:{NFSU2_TR(0x5357d7);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5357d9:{NFSU2_TR(0x5357d9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5357dc:{NFSU2_TR(0x5357dc);
if(r1(R+518)){{goto L535803;}}
}
B5357de:L5357de:{c.instructions+=2;NFSU2_TR(0x5357de);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5357df:{NFSU2_TR(0x5357df);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5357e4ull));
TAIL_STATIC(0x575620u,575);
}
B5357e4:L5357e4:{c.instructions+=6;NFSU2_TR(0x5357e4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5357e7:{NFSU2_TR(0x5357e7);
__builtin_memmove((R+8),(R+4),4);
}
B5357e9:{NFSU2_TR(0x5357e9);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B5357ec:{NFSU2_TR(0x5357ec);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5357ef:{NFSU2_TR(0x5357ef);
u8 U[4];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((R+24),(U+0),4);
}
B5357f3:{NFSU2_TR(0x5357f3);
__builtin_memmove((R+28),(R+0),4);
}
B5357f5:L5357f5:{c.instructions+=1;NFSU2_TR(0x5357f5);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L5357f7;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5357f5u);}goto L5357f5;}
}
B5357f7:L5357f7:{c.instructions+=3;NFSU2_TR(0x5357f7);
__builtin_memmove((R+4),(R+8),4);
}
B5357f9:{NFSU2_TR(0x5357f9);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B5357fc:{NFSU2_TR(0x5357fc);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5357ff:L5357ff:{c.instructions+=1;NFSU2_TR(0x5357ff);
u8 U[35];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L535801;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+17),(R+28),4);
w4(U+21,u32(u32(r4(R+28))+u32(u32(0x1ull))));
w4(U+25,u32(r1(R+522)));
w4(U+29,u32(u32(u32(0x2ull))*u32(r4(U+25))));
w4(R+28,u32(u32(r4(U+21))-u32(r4(U+29))));
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+24))+u32(u32(0x1ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x2ull))*u32(r4(U+8))));
w4(R+24,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),gp(u32(r4(U+0))),1);
__builtin_memmove((U+33),(U+16),1);
s1(u32(r4(U+17)),r1(U+33));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5357ffu);}goto L5357ff;}
}
B535801:L535801:{c.instructions+=1;NFSU2_TR(0x535801);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B535803:L535803:{c.instructions+=4;NFSU2_TR(0x535803);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B535806:{NFSU2_TR(0x535806);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B535809:{NFSU2_TR(0x535809);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53580a:{NFSU2_TR(0x53580a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53580full));
TAIL_STATIC(0x575630u,575);
}
B53580f:L53580f:{c.instructions+=5;NFSU2_TR(0x53580f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B535812:{NFSU2_TR(0x535812);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B535815:{NFSU2_TR(0x535815);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B535817:{NFSU2_TR(0x535817);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53581a:{NFSU2_TR(0x53581a);
if(r1(R+518)){{goto L53583f;}}
}
B53581c:L53581c:{c.instructions+=2;NFSU2_TR(0x53581c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53581d:{NFSU2_TR(0x53581d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x535822ull));
TAIL_STATIC(0x575620u,575);
}
B535822:L535822:{c.instructions+=6;NFSU2_TR(0x535822);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B535825:{NFSU2_TR(0x535825);
__builtin_memmove((R+8),(R+4),4);
}
B535827:{NFSU2_TR(0x535827);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B53582a:{NFSU2_TR(0x53582a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53582d:{NFSU2_TR(0x53582d);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+24),(U+0),4);
}
B535831:{NFSU2_TR(0x535831);
__builtin_memmove((R+28),(R+0),4);
}
B535833:L535833:{c.instructions+=1;NFSU2_TR(0x535833);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L535835;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x535833u);}goto L535833;}
}
B535835:L535835:{c.instructions+=3;NFSU2_TR(0x535835);
__builtin_memmove((R+4),(R+8),4);
}
B535837:{NFSU2_TR(0x535837);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B53583a:{NFSU2_TR(0x53583a);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B53583d:L53583d:{c.instructions+=1;NFSU2_TR(0x53583d);
u8 U[35];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L53583f;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+17),(R+28),4);
w4(U+21,u32(u32(r4(R+28))+u32(u32(0x1ull))));
w4(U+25,u32(r1(R+522)));
w4(U+29,u32(u32(u32(0x2ull))*u32(r4(U+25))));
w4(R+28,u32(u32(r4(U+21))-u32(r4(U+29))));
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+24))+u32(u32(0x1ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x2ull))*u32(r4(U+8))));
w4(R+24,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),gp(u32(r4(U+0))),1);
__builtin_memmove((U+33),(U+16),1);
s1(u32(r4(U+17)),r1(U+33));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x53583du);}goto L53583d;}
}
B53583f:L53583f:{c.instructions+=7;NFSU2_TR(0x53583f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B535840:{NFSU2_TR(0x535840);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B535841:{NFSU2_TR(0x535841);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B535842:{NFSU2_TR(0x535842);
__builtin_memmove((R+0),(R+12),4);
}
B535844:{NFSU2_TR(0x535844);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B535845:{NFSU2_TR(0x535845);
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
B535848:{NFSU2_TR(0x535848);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B535850:L535850:{c.instructions+=3;NFSU2_TR(0x535850);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B535851:{NFSU2_TR(0x535851);
__builtin_memmove((R+24),(R+4),4);
}
B535853:{NFSU2_TR(0x535853);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x535858ull));
{goto L535870;}
}
B535858:L535858:{c.instructions+=2;NFSU2_TR(0x535858);
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
B53585d:{NFSU2_TR(0x53585d);
if(r1(R+518)){{goto L535868;}}
}
B53585f:L53585f:{c.instructions+=2;NFSU2_TR(0x53585f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B535860:{NFSU2_TR(0x535860);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x535865ull));
TAIL_STATIC(0x575630u,575);
}
B535865:L535865:{c.instructions+=1;NFSU2_TR(0x535865);
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
B535868:L535868:{c.instructions+=3;NFSU2_TR(0x535868);
__builtin_memmove((R+0),(R+24),4);
}
B53586a:{NFSU2_TR(0x53586a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B53586b:{NFSU2_TR(0x53586b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B535870:L535870:{c.instructions+=13;NFSU2_TR(0x535870);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B535872:{NFSU2_TR(0x535872);
u8 U[4];
w4(U+0,u32(0x777028ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B535877:{NFSU2_TR(0x535877);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B53587d:{NFSU2_TR(0x53587d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53587e:{NFSU2_TR(0x53587e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B535885:{NFSU2_TR(0x535885);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B535886:{NFSU2_TR(0x535886);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B535887:{NFSU2_TR(0x535887);
__builtin_memmove((R+24),(R+4),4);
}
B535889:{NFSU2_TR(0x535889);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53588d:{NFSU2_TR(0x53588d);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((R+4),(U+0),4);
}
B535890:{NFSU2_TR(0x535890);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B535898:{NFSU2_TR(0x535898);
u8 U[4];
w4(U+0,u32(0x79a9ecull));
s4(u32(r4(R+4)),r4(U+0));
}
B53589e:{NFSU2_TR(0x53589e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5358a3ull));
TAIL_STATIC(0x511670u,511);
}
B5358a3:L5358a3:{c.instructions+=3;NFSU2_TR(0x5358a3);
__builtin_memmove((R+4),(R+24),4);
}
B5358a5:{NFSU2_TR(0x5358a5);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B5358ad:{NFSU2_TR(0x5358ad);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5358b2ull));
TAIL_STATIC(0x505350u,505);
}
B5358b2:L5358b2:{c.instructions+=5;NFSU2_TR(0x5358b2);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5358b6:{NFSU2_TR(0x5358b6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5358b7:{NFSU2_TR(0x5358b7);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5358be:{NFSU2_TR(0x5358be);
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
B5358c1:{NFSU2_TR(0x5358c1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5358d0:L5358d0:{c.instructions+=8;NFSU2_TR(0x5358d0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x8ull))));
}
B5358d3:{NFSU2_TR(0x5358d3);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5358d7:{NFSU2_TR(0x5358d7);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5358d8:{NFSU2_TR(0x5358d8);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5358d9:{NFSU2_TR(0x5358d9);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5358da:{NFSU2_TR(0x5358da);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5358db:{NFSU2_TR(0x5358db);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5358dc:{NFSU2_TR(0x5358dc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5358e1ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x535610u);}goto L535610;}
}
B5358e1:L5358e1:{c.instructions+=5;NFSU2_TR(0x5358e1);
__builtin_memmove((R+20),(R+0),4);
}
B5358e3:{NFSU2_TR(0x5358e3);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5358e5:{NFSU2_TR(0x5358e5);
u8 U[4];
w4(U+0,u32(0x79bb38ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5358ea:{NFSU2_TR(0x5358ea);
__builtin_memmove((R+4),(R+20),4);
}
B5358ec:{NFSU2_TR(0x5358ec);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5358f1ull));
TAIL_STATIC(0x519eb0u,519);
}
B5358f1:L5358f1:{c.instructions+=4;NFSU2_TR(0x5358f1);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5358f3:{NFSU2_TR(0x5358f3);
u8 U[4];
w4(U+0,u32(0x79bb2cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5358f8:{NFSU2_TR(0x5358f8);
__builtin_memmove((R+4),(R+20),4);
}
B5358fa:{NFSU2_TR(0x5358fa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5358ffull));
TAIL_STATIC(0x519eb0u,519);
}
B5358ff:L5358ff:{c.instructions+=5;NFSU2_TR(0x5358ff);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B535902:{NFSU2_TR(0x535902);
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
B535904:{NFSU2_TR(0x535904);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B53590c:{NFSU2_TR(0x53590c);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B535914:{NFSU2_TR(0x535914);
if(r1(R+518)){{goto L535932;}}
}
B535916:L535916:{c.instructions+=4;NFSU2_TR(0x535916);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B535919:{NFSU2_TR(0x535919);
u8 U[4];
w4(U+0,u32(0x79bb38ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53591e:{NFSU2_TR(0x53591e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53591f:{NFSU2_TR(0x53591f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x535924ull));
TAIL_STATIC(0x75dd6fu,75d);
}
B535924:L535924:{c.instructions+=3;NFSU2_TR(0x535924);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B535927:{NFSU2_TR(0x535927);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B535929:{NFSU2_TR(0x535929);
if(r1(R+518)){{goto L535932;}}
}
B53592b:L53592b:{c.instructions+=3;NFSU2_TR(0x53592b);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B53592e:{NFSU2_TR(0x53592e);
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
B535930:{NFSU2_TR(0x535930);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x535916u);}goto L535916;}}
}
B535932:L535932:{c.instructions+=3;NFSU2_TR(0x535932);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B535935:{NFSU2_TR(0x535935);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B535936:{NFSU2_TR(0x535936);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53593bull));
TAIL_STATIC(0x575630u,575);
}
B53593b:L53593b:{c.instructions+=5;NFSU2_TR(0x53593b);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B53593e:{NFSU2_TR(0x53593e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B535941:{NFSU2_TR(0x535941);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B535943:{NFSU2_TR(0x535943);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x20ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B53594a:{NFSU2_TR(0x53594a);
if(r1(R+518)){{goto L53596f;}}
}
B53594c:L53594c:{c.instructions+=2;NFSU2_TR(0x53594c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53594d:{NFSU2_TR(0x53594d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x535952ull));
TAIL_STATIC(0x575620u,575);
}
B535952:L535952:{c.instructions+=6;NFSU2_TR(0x535952);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B535955:{NFSU2_TR(0x535955);
__builtin_memmove((R+8),(R+4),4);
}
B535957:{NFSU2_TR(0x535957);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B53595a:{NFSU2_TR(0x53595a);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53595d:{NFSU2_TR(0x53595d);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+24),(U+0),4);
}
B535961:{NFSU2_TR(0x535961);
__builtin_memmove((R+28),(R+0),4);
}
B535963:L535963:{c.instructions+=1;NFSU2_TR(0x535963);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L535965;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x535963u);}goto L535963;}
}
B535965:L535965:{c.instructions+=3;NFSU2_TR(0x535965);
__builtin_memmove((R+4),(R+8),4);
}
B535967:{NFSU2_TR(0x535967);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B53596a:{NFSU2_TR(0x53596a);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B53596d:L53596d:{c.instructions+=1;NFSU2_TR(0x53596d);
u8 U[35];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L53596f;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+17),(R+28),4);
w4(U+21,u32(u32(r4(R+28))+u32(u32(0x1ull))));
w4(U+25,u32(r1(R+522)));
w4(U+29,u32(u32(u32(0x2ull))*u32(r4(U+25))));
w4(R+28,u32(u32(r4(U+21))-u32(r4(U+29))));
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+24))+u32(u32(0x1ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x2ull))*u32(r4(U+8))));
w4(R+24,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),gp(u32(r4(U+0))),1);
__builtin_memmove((U+33),(U+16),1);
s1(u32(r4(U+17)),r1(U+33));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x53596du);}goto L53596d;}
}
B53596f:L53596f:{c.instructions+=6;NFSU2_TR(0x53596f);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B535972:{NFSU2_TR(0x535972);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B535975:{NFSU2_TR(0x535975);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B535976:{NFSU2_TR(0x535976);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B53597e:{NFSU2_TR(0x53597e);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B535986:{NFSU2_TR(0x535986);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53598bull));
TAIL_STATIC(0x575630u,575);
}
B53598b:L53598b:{c.instructions+=5;NFSU2_TR(0x53598b);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B53598e:{NFSU2_TR(0x53598e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B535991:{NFSU2_TR(0x535991);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B535993:{NFSU2_TR(0x535993);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x20ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B53599a:{NFSU2_TR(0x53599a);
if(r1(R+518)){{goto L5359bf;}}
}
B53599c:L53599c:{c.instructions+=2;NFSU2_TR(0x53599c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53599d:{NFSU2_TR(0x53599d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5359a2ull));
TAIL_STATIC(0x575620u,575);
}
B5359a2:L5359a2:{c.instructions+=6;NFSU2_TR(0x5359a2);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5359a5:{NFSU2_TR(0x5359a5);
__builtin_memmove((R+8),(R+4),4);
}
B5359a7:{NFSU2_TR(0x5359a7);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B5359aa:{NFSU2_TR(0x5359aa);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5359ad:{NFSU2_TR(0x5359ad);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+24),(U+0),4);
}
B5359b1:{NFSU2_TR(0x5359b1);
__builtin_memmove((R+28),(R+0),4);
}
B5359b3:L5359b3:{c.instructions+=1;NFSU2_TR(0x5359b3);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L5359b5;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5359b3u);}goto L5359b3;}
}
B5359b5:L5359b5:{c.instructions+=3;NFSU2_TR(0x5359b5);
__builtin_memmove((R+4),(R+8),4);
}
B5359b7:{NFSU2_TR(0x5359b7);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5359ba:{NFSU2_TR(0x5359ba);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B5359bd:L5359bd:{c.instructions+=1;NFSU2_TR(0x5359bd);
u8 U[35];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L5359bf;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+17),(R+28),4);
w4(U+21,u32(u32(r4(R+28))+u32(u32(0x1ull))));
w4(U+25,u32(r1(R+522)));
w4(U+29,u32(u32(u32(0x2ull))*u32(r4(U+25))));
w4(R+28,u32(u32(r4(U+21))-u32(r4(U+29))));
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+24))+u32(u32(0x1ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x2ull))*u32(r4(U+8))));
w4(R+24,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),gp(u32(r4(U+0))),1);
__builtin_memmove((U+33),(U+16),1);
s1(u32(r4(U+17)),r1(U+33));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5359bdu);}goto L5359bd;}
}
B5359bf:L5359bf:{c.instructions+=7;NFSU2_TR(0x5359bf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5359c0:{NFSU2_TR(0x5359c0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5359c1:{NFSU2_TR(0x5359c1);
__builtin_memmove((R+0),(R+20),4);
}
B5359c3:{NFSU2_TR(0x5359c3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5359c4:{NFSU2_TR(0x5359c4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5359c5:{NFSU2_TR(0x5359c5);
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
B5359c8:{NFSU2_TR(0x5359c8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5359d0:L5359d0:{c.instructions+=6;NFSU2_TR(0x5359d0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x14ull))));
}
B5359d3:{NFSU2_TR(0x5359d3);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5359d4:{NFSU2_TR(0x5359d4);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5359d5:{NFSU2_TR(0x5359d5);
u8 U[4];
w4(U+0,u32(0x796550ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5359da:{NFSU2_TR(0x5359da);
__builtin_memmove((R+12),(R+4),4);
}
B5359dc:{NFSU2_TR(0x5359dc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5359e1ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5358d0u);}goto L5358d0;}
}
B5359e1:L5359e1:{c.instructions+=5;NFSU2_TR(0x5359e1);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5359e8:{NFSU2_TR(0x5359e8);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5359eb:{NFSU2_TR(0x5359eb);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B5359ed:{NFSU2_TR(0x5359ed);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5359ef:{NFSU2_TR(0x5359ef);
if(r1(R+518)){{goto L535a06;}}
}
B5359f1:L5359f1:{c.instructions+=4;NFSU2_TR(0x5359f1);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5359f4:{NFSU2_TR(0x5359f4);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5359f6:{NFSU2_TR(0x5359f6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5359f9:{NFSU2_TR(0x5359f9);
if(r1(R+518)){{goto L5359fe;}}
}
B5359fb:L5359fb:{c.instructions+=1;NFSU2_TR(0x5359fb);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5359fe:L5359fe:{c.instructions+=3;NFSU2_TR(0x5359fe);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B535a01:{NFSU2_TR(0x535a01);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B535a04:{NFSU2_TR(0x535a04);
{goto L535a19;}
}
B535a06:L535a06:{c.instructions+=4;NFSU2_TR(0x535a06);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B535a09:{NFSU2_TR(0x535a09);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B535a0b:{NFSU2_TR(0x535a0b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B535a0e:{NFSU2_TR(0x535a0e);
if(r1(R+518)){{goto L535a13;}}
}
B535a10:L535a10:{c.instructions+=1;NFSU2_TR(0x535a10);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B535a13:L535a13:{c.instructions+=2;NFSU2_TR(0x535a13);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B535a16:{NFSU2_TR(0x535a16);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B535a19:L535a19:{c.instructions+=2;NFSU2_TR(0x535a19);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+4))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B535a1c:{NFSU2_TR(0x535a1c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L535a21;}}
}
B535a1e:L535a1e:{c.instructions+=1;NFSU2_TR(0x535a1e);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B535a21:L535a21:{c.instructions+=8;NFSU2_TR(0x535a21);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B535a22:{NFSU2_TR(0x535a22);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B535a25:{NFSU2_TR(0x535a25);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B535a26:{NFSU2_TR(0x535a26);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x1ull))));
}
B535a27:{NFSU2_TR(0x535a27);
u8 U[4];
w4(U+0,u32(0x79bb94ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B535a2c:{NFSU2_TR(0x535a2c);
__builtin_memmove((R+4),(R+12),4);
}
B535a2e:{NFSU2_TR(0x535a2e);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B535a31:{NFSU2_TR(0x535a31);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x535a36ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5358d0u);}goto L5358d0;}
}
B535a36:L535a36:{c.instructions+=6;NFSU2_TR(0x535a36);
__builtin_memmove((R+20),(R+0),4);
}
B535a38:{NFSU2_TR(0x535a38);
__builtin_memmove((R+0),gp(0x7f7ce4),4);
}
B535a3d:{NFSU2_TR(0x535a3d);
u8 U[4];
w4(U+0,u32(0x6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B535a3f:{NFSU2_TR(0x535a3f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B535a40:{NFSU2_TR(0x535a40);
__builtin_memmove((R+4),(R+20),4);
}
B535a42:{NFSU2_TR(0x535a42);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x535a47ull));
TAIL_STATIC(0x519eb0u,519);
}
B535a47:L535a47:{c.instructions+=5;NFSU2_TR(0x535a47);
__builtin_memmove((R+4),gp(0x7f7ce8),4);
}
B535a4d:{NFSU2_TR(0x535a4d);
u8 U[4];
w4(U+0,u32(0x6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B535a4f:{NFSU2_TR(0x535a4f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B535a50:{NFSU2_TR(0x535a50);
__builtin_memmove((R+4),(R+20),4);
}
B535a52:{NFSU2_TR(0x535a52);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x535a57ull));
TAIL_STATIC(0x519eb0u,519);
}
B535a57:L535a57:{c.instructions+=5;NFSU2_TR(0x535a57);
__builtin_memmove((R+8),gp(0x7f7cec),4);
}
B535a5d:{NFSU2_TR(0x535a5d);
u8 U[4];
w4(U+0,u32(0x6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B535a5f:{NFSU2_TR(0x535a5f);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B535a60:{NFSU2_TR(0x535a60);
__builtin_memmove((R+4),(R+20),4);
}
B535a62:{NFSU2_TR(0x535a62);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x535a67ull));
TAIL_STATIC(0x519eb0u,519);
}
B535a67:L535a67:{c.instructions+=5;NFSU2_TR(0x535a67);
__builtin_memmove((R+0),gp(0x7f7cf0),4);
}
B535a6c:{NFSU2_TR(0x535a6c);
u8 U[4];
w4(U+0,u32(0x6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B535a6e:{NFSU2_TR(0x535a6e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B535a6f:{NFSU2_TR(0x535a6f);
__builtin_memmove((R+4),(R+20),4);
}
B535a71:{NFSU2_TR(0x535a71);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x535a76ull));
TAIL_STATIC(0x519eb0u,519);
}
B535a76:L535a76:{c.instructions+=9;NFSU2_TR(0x535a76);
__builtin_memmove((R+4),gp(0x7f7ce4),4);
}
B535a7c:{NFSU2_TR(0x535a7c);
w4(R+0,u32(0xffull));
}
B535a81:{NFSU2_TR(0x535a81);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B535a82:{NFSU2_TR(0x535a82);
__builtin_memmove((R+4),(R+20),4);
}
B535a84:{NFSU2_TR(0x535a84);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B535a88:{NFSU2_TR(0x535a88);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B535a8c:{NFSU2_TR(0x535a8c);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B535a90:{NFSU2_TR(0x535a90);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B535a94:{NFSU2_TR(0x535a94);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x535a99ull));
TAIL_STATIC(0x519f10u,519);
}
B535a99:L535a99:{c.instructions+=4;NFSU2_TR(0x535a99);
__builtin_memmove((R+24),(R+0),4);
}
B535a9b:{NFSU2_TR(0x535a9b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B535a9e:{NFSU2_TR(0x535a9e);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B535a9f:{NFSU2_TR(0x535a9f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x535aa4ull));
TAIL_STATIC(0x575630u,575);
}
B535aa4:L535aa4:{c.instructions+=5;NFSU2_TR(0x535aa4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B535aa7:{NFSU2_TR(0x535aa7);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B535aaa:{NFSU2_TR(0x535aaa);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B535aac:{NFSU2_TR(0x535aac);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B535aaf:{NFSU2_TR(0x535aaf);
if(r1(R+518)){{goto L535ad6;}}
}
B535ab1:L535ab1:{c.instructions+=2;NFSU2_TR(0x535ab1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B535ab2:{NFSU2_TR(0x535ab2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x535ab7ull));
TAIL_STATIC(0x575620u,575);
}
B535ab7:L535ab7:{c.instructions+=6;NFSU2_TR(0x535ab7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B535aba:{NFSU2_TR(0x535aba);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B535abd:{NFSU2_TR(0x535abd);
__builtin_memmove((R+28),(R+0),4);
}
B535abf:{NFSU2_TR(0x535abf);
__builtin_memmove((R+0),(R+4),4);
}
B535ac1:{NFSU2_TR(0x535ac1);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B535ac4:{NFSU2_TR(0x535ac4);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+24),(U+0),4);
}
B535ac8:L535ac8:{c.instructions+=1;NFSU2_TR(0x535ac8);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L535aca;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x535ac8u);}goto L535ac8;}
}
B535aca:L535aca:{c.instructions+=3;NFSU2_TR(0x535aca);
__builtin_memmove((R+4),(R+0),4);
}
B535acc:{NFSU2_TR(0x535acc);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B535acf:{NFSU2_TR(0x535acf);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B535ad2:L535ad2:{c.instructions+=1;NFSU2_TR(0x535ad2);
u8 U[35];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L535ad4;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+17),(R+28),4);
w4(U+21,u32(u32(r4(R+28))+u32(u32(0x1ull))));
w4(U+25,u32(r1(R+522)));
w4(U+29,u32(u32(u32(0x2ull))*u32(r4(U+25))));
w4(R+28,u32(u32(r4(U+21))-u32(r4(U+29))));
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+24))+u32(u32(0x1ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x2ull))*u32(r4(U+8))));
w4(R+24,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),gp(u32(r4(U+0))),1);
__builtin_memmove((U+33),(U+16),1);
s1(u32(r4(U+17)),r1(U+33));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x535ad2u);}goto L535ad2;}
}
B535ad4:L535ad4:{c.instructions+=1;NFSU2_TR(0x535ad4);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B535ad6:L535ad6:{c.instructions+=4;NFSU2_TR(0x535ad6);
__builtin_memmove((R+4),gp(0x7f7ce8),4);
}
B535adc:{NFSU2_TR(0x535adc);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B535add:{NFSU2_TR(0x535add);
__builtin_memmove((R+4),(R+20),4);
}
B535adf:{NFSU2_TR(0x535adf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x535ae4ull));
TAIL_STATIC(0x519f10u,519);
}
B535ae4:L535ae4:{c.instructions+=4;NFSU2_TR(0x535ae4);
__builtin_memmove((R+24),(R+0),4);
}
B535ae6:{NFSU2_TR(0x535ae6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B535ae9:{NFSU2_TR(0x535ae9);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B535aea:{NFSU2_TR(0x535aea);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x535aefull));
TAIL_STATIC(0x575630u,575);
}
B535aef:L535aef:{c.instructions+=5;NFSU2_TR(0x535aef);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B535af2:{NFSU2_TR(0x535af2);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B535af5:{NFSU2_TR(0x535af5);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B535af7:{NFSU2_TR(0x535af7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B535afa:{NFSU2_TR(0x535afa);
if(r1(R+518)){{goto L535b21;}}
}
B535afc:L535afc:{c.instructions+=2;NFSU2_TR(0x535afc);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B535afd:{NFSU2_TR(0x535afd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x535b02ull));
TAIL_STATIC(0x575620u,575);
}
B535b02:L535b02:{c.instructions+=6;NFSU2_TR(0x535b02);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B535b05:{NFSU2_TR(0x535b05);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B535b08:{NFSU2_TR(0x535b08);
__builtin_memmove((R+28),(R+0),4);
}
B535b0a:{NFSU2_TR(0x535b0a);
__builtin_memmove((R+0),(R+4),4);
}
B535b0c:{NFSU2_TR(0x535b0c);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B535b0f:{NFSU2_TR(0x535b0f);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+24),(U+0),4);
}
B535b13:L535b13:{c.instructions+=1;NFSU2_TR(0x535b13);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L535b15;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x535b13u);}goto L535b13;}
}
B535b15:L535b15:{c.instructions+=3;NFSU2_TR(0x535b15);
__builtin_memmove((R+4),(R+0),4);
}
B535b17:{NFSU2_TR(0x535b17);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B535b1a:{NFSU2_TR(0x535b1a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B535b1d:L535b1d:{c.instructions+=1;NFSU2_TR(0x535b1d);
u8 U[35];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L535b1f;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+17),(R+28),4);
w4(U+21,u32(u32(r4(R+28))+u32(u32(0x1ull))));
w4(U+25,u32(r1(R+522)));
w4(U+29,u32(u32(u32(0x2ull))*u32(r4(U+25))));
w4(R+28,u32(u32(r4(U+21))-u32(r4(U+29))));
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+24))+u32(u32(0x1ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x2ull))*u32(r4(U+8))));
w4(R+24,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),gp(u32(r4(U+0))),1);
__builtin_memmove((U+33),(U+16),1);
s1(u32(r4(U+17)),r1(U+33));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x535b1du);}goto L535b1d;}
}
B535b1f:L535b1f:{c.instructions+=1;NFSU2_TR(0x535b1f);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B535b21:L535b21:{c.instructions+=4;NFSU2_TR(0x535b21);
__builtin_memmove((R+4),gp(0x7f7cec),4);
}
B535b27:{NFSU2_TR(0x535b27);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B535b28:{NFSU2_TR(0x535b28);
__builtin_memmove((R+4),(R+20),4);
}
B535b2a:{NFSU2_TR(0x535b2a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x535b2full));
TAIL_STATIC(0x519f10u,519);
}
B535b2f:L535b2f:{c.instructions+=4;NFSU2_TR(0x535b2f);
__builtin_memmove((R+24),(R+0),4);
}
B535b31:{NFSU2_TR(0x535b31);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B535b34:{NFSU2_TR(0x535b34);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B535b35:{NFSU2_TR(0x535b35);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x535b3aull));
TAIL_STATIC(0x575630u,575);
}
B535b3a:L535b3a:{c.instructions+=5;NFSU2_TR(0x535b3a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B535b3d:{NFSU2_TR(0x535b3d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B535b40:{NFSU2_TR(0x535b40);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B535b42:{NFSU2_TR(0x535b42);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B535b45:{NFSU2_TR(0x535b45);
if(r1(R+518)){{goto L535b6c;}}
}
B535b47:L535b47:{c.instructions+=2;NFSU2_TR(0x535b47);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B535b48:{NFSU2_TR(0x535b48);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x535b4dull));
TAIL_STATIC(0x575620u,575);
}
B535b4d:L535b4d:{c.instructions+=6;NFSU2_TR(0x535b4d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B535b50:{NFSU2_TR(0x535b50);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B535b53:{NFSU2_TR(0x535b53);
__builtin_memmove((R+28),(R+0),4);
}
B535b55:{NFSU2_TR(0x535b55);
__builtin_memmove((R+0),(R+4),4);
}
B535b57:{NFSU2_TR(0x535b57);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B535b5a:{NFSU2_TR(0x535b5a);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+24),(U+0),4);
}
B535b5e:L535b5e:{c.instructions+=1;NFSU2_TR(0x535b5e);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L535b60;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x535b5eu);}goto L535b5e;}
}
B535b60:L535b60:{c.instructions+=3;NFSU2_TR(0x535b60);
__builtin_memmove((R+4),(R+0),4);
}
B535b62:{NFSU2_TR(0x535b62);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B535b65:{NFSU2_TR(0x535b65);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B535b68:L535b68:{c.instructions+=1;NFSU2_TR(0x535b68);
u8 U[35];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L535b6a;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+17),(R+28),4);
w4(U+21,u32(u32(r4(R+28))+u32(u32(0x1ull))));
w4(U+25,u32(r1(R+522)));
w4(U+29,u32(u32(u32(0x2ull))*u32(r4(U+25))));
w4(R+28,u32(u32(r4(U+21))-u32(r4(U+29))));
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+24))+u32(u32(0x1ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x2ull))*u32(r4(U+8))));
w4(R+24,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),gp(u32(r4(U+0))),1);
__builtin_memmove((U+33),(U+16),1);
s1(u32(r4(U+17)),r1(U+33));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x535b68u);}goto L535b68;}
}
B535b6a:L535b6a:{c.instructions+=1;NFSU2_TR(0x535b6a);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B535b6c:L535b6c:{c.instructions+=4;NFSU2_TR(0x535b6c);
__builtin_memmove((R+4),gp(0x7f7cf0),4);
}
B535b72:{NFSU2_TR(0x535b72);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B535b73:{NFSU2_TR(0x535b73);
__builtin_memmove((R+4),(R+20),4);
}
B535b75:{NFSU2_TR(0x535b75);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x535b7aull));
TAIL_STATIC(0x519f10u,519);
}
B535b7a:L535b7a:{c.instructions+=4;NFSU2_TR(0x535b7a);
__builtin_memmove((R+24),(R+0),4);
}
B535b7c:{NFSU2_TR(0x535b7c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B535b7f:{NFSU2_TR(0x535b7f);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B535b80:{NFSU2_TR(0x535b80);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x535b85ull));
TAIL_STATIC(0x575630u,575);
}
B535b85:L535b85:{c.instructions+=5;NFSU2_TR(0x535b85);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B535b88:{NFSU2_TR(0x535b88);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B535b8b:{NFSU2_TR(0x535b8b);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B535b8d:{NFSU2_TR(0x535b8d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B535b90:{NFSU2_TR(0x535b90);
if(r1(R+518)){{goto L535bb7;}}
}
B535b92:L535b92:{c.instructions+=2;NFSU2_TR(0x535b92);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B535b93:{NFSU2_TR(0x535b93);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x535b98ull));
TAIL_STATIC(0x575620u,575);
}
B535b98:L535b98:{c.instructions+=6;NFSU2_TR(0x535b98);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B535b9b:{NFSU2_TR(0x535b9b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B535b9e:{NFSU2_TR(0x535b9e);
__builtin_memmove((R+28),(R+0),4);
}
B535ba0:{NFSU2_TR(0x535ba0);
__builtin_memmove((R+0),(R+4),4);
}
B535ba2:{NFSU2_TR(0x535ba2);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B535ba5:{NFSU2_TR(0x535ba5);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+24),(U+0),4);
}
B535ba9:L535ba9:{c.instructions+=1;NFSU2_TR(0x535ba9);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L535bab;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x535ba9u);}goto L535ba9;}
}
B535bab:L535bab:{c.instructions+=3;NFSU2_TR(0x535bab);
__builtin_memmove((R+4),(R+0),4);
}
B535bad:{NFSU2_TR(0x535bad);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B535bb0:{NFSU2_TR(0x535bb0);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B535bb3:L535bb3:{c.instructions+=1;NFSU2_TR(0x535bb3);
u8 U[35];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L535bb5;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+17),(R+28),4);
w4(U+21,u32(u32(r4(R+28))+u32(u32(0x1ull))));
w4(U+25,u32(r1(R+522)));
w4(U+29,u32(u32(u32(0x2ull))*u32(r4(U+25))));
w4(R+28,u32(u32(r4(U+21))-u32(r4(U+29))));
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+24))+u32(u32(0x1ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x2ull))*u32(r4(U+8))));
w4(R+24,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),gp(u32(r4(U+0))),1);
__builtin_memmove((U+33),(U+16),1);
s1(u32(r4(U+17)),r1(U+33));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x535bb3u);}goto L535bb3;}
}
B535bb5:L535bb5:{c.instructions+=1;NFSU2_TR(0x535bb5);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B535bb7:L535bb7:{c.instructions+=4;NFSU2_TR(0x535bb7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x24ull))));
w4(U+4,u32(0x9ull));
s4(u32(r4(U+0)),r4(U+4));
}
B535bbe:{NFSU2_TR(0x535bbe);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B535bc1:{NFSU2_TR(0x535bc1);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B535bc3:{NFSU2_TR(0x535bc3);
if(r1(R+518)){{goto L535bda;}}
}
B535bc5:L535bc5:{c.instructions+=4;NFSU2_TR(0x535bc5);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B535bc8:{NFSU2_TR(0x535bc8);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B535bca:{NFSU2_TR(0x535bca);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B535bcd:{NFSU2_TR(0x535bcd);
if(r1(R+518)){{goto L535bd2;}}
}
B535bcf:L535bcf:{c.instructions+=1;NFSU2_TR(0x535bcf);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B535bd2:L535bd2:{c.instructions+=3;NFSU2_TR(0x535bd2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B535bd5:{NFSU2_TR(0x535bd5);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B535bd8:{NFSU2_TR(0x535bd8);
{goto L535bed;}
}
B535bda:L535bda:{c.instructions+=4;NFSU2_TR(0x535bda);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B535bdd:{NFSU2_TR(0x535bdd);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B535bdf:{NFSU2_TR(0x535bdf);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B535be2:{NFSU2_TR(0x535be2);
if(r1(R+518)){{goto L535be7;}}
}
B535be4:L535be4:{c.instructions+=1;NFSU2_TR(0x535be4);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B535be7:L535be7:{c.instructions+=2;NFSU2_TR(0x535be7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B535bea:{NFSU2_TR(0x535bea);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B535bed:L535bed:{c.instructions+=2;NFSU2_TR(0x535bed);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+4))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B535bf0:{NFSU2_TR(0x535bf0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L535bf5;}}
}
B535bf2:L535bf2:{c.instructions+=1;NFSU2_TR(0x535bf2);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B535bf5:L535bf5:{c.instructions+=6;NFSU2_TR(0x535bf5);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B535bf8:{NFSU2_TR(0x535bf8);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B535bf9:{NFSU2_TR(0x535bf9);
u8 U[4];
w4(U+0,u32(0x79bb88ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B535bfe:{NFSU2_TR(0x535bfe);
__builtin_memmove((R+4),(R+12),4);
}
B535c00:{NFSU2_TR(0x535c00);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B535c03:{NFSU2_TR(0x535c03);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x535c08ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5358d0u);}goto L5358d0;}
}
B535c08:L535c08:{c.instructions+=6;NFSU2_TR(0x535c08);
__builtin_memmove((R+4),gp(0x7f7cf4),4);
}
B535c0e:{NFSU2_TR(0x535c0e);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B535c10:{NFSU2_TR(0x535c10);
__builtin_memmove((R+20),(R+0),4);
}
B535c12:{NFSU2_TR(0x535c12);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B535c13:{NFSU2_TR(0x535c13);
__builtin_memmove((R+4),(R+20),4);
}
B535c15:{NFSU2_TR(0x535c15);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x535c1aull));
TAIL_STATIC(0x519eb0u,519);
}
B535c1a:L535c1a:{c.instructions+=5;NFSU2_TR(0x535c1a);
__builtin_memmove((R+8),gp(0x7f7cf4),4);
}
B535c20:{NFSU2_TR(0x535c20);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B535c21:{NFSU2_TR(0x535c21);
__builtin_memmove((R+4),(R+20),4);
}
B535c23:{NFSU2_TR(0x535c23);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B535c27:{NFSU2_TR(0x535c27);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x535c2cull));
TAIL_STATIC(0x519f10u,519);
}
B535c2c:L535c2c:{c.instructions+=4;NFSU2_TR(0x535c2c);
__builtin_memmove((R+24),(R+0),4);
}
B535c2e:{NFSU2_TR(0x535c2e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B535c31:{NFSU2_TR(0x535c31);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B535c32:{NFSU2_TR(0x535c32);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x535c37ull));
TAIL_STATIC(0x575630u,575);
}
B535c37:L535c37:{c.instructions+=5;NFSU2_TR(0x535c37);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B535c3a:{NFSU2_TR(0x535c3a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B535c3d:{NFSU2_TR(0x535c3d);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B535c3f:{NFSU2_TR(0x535c3f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B535c42:{NFSU2_TR(0x535c42);
if(r1(R+518)){{goto L535c69;}}
}
B535c44:L535c44:{c.instructions+=2;NFSU2_TR(0x535c44);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B535c45:{NFSU2_TR(0x535c45);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x535c4aull));
TAIL_STATIC(0x575620u,575);
}
B535c4a:L535c4a:{c.instructions+=6;NFSU2_TR(0x535c4a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B535c4d:{NFSU2_TR(0x535c4d);
__builtin_memmove((R+8),(R+4),4);
}
B535c4f:{NFSU2_TR(0x535c4f);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B535c52:{NFSU2_TR(0x535c52);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B535c55:{NFSU2_TR(0x535c55);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+24),(U+0),4);
}
B535c59:{NFSU2_TR(0x535c59);
__builtin_memmove((R+28),(R+0),4);
}
B535c5b:L535c5b:{c.instructions+=1;NFSU2_TR(0x535c5b);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L535c5d;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x535c5bu);}goto L535c5b;}
}
B535c5d:L535c5d:{c.instructions+=3;NFSU2_TR(0x535c5d);
__builtin_memmove((R+4),(R+8),4);
}
B535c5f:{NFSU2_TR(0x535c5f);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B535c62:{NFSU2_TR(0x535c62);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B535c65:L535c65:{c.instructions+=1;NFSU2_TR(0x535c65);
u8 U[35];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L535c67;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+17),(R+28),4);
w4(U+21,u32(u32(r4(R+28))+u32(u32(0x1ull))));
w4(U+25,u32(r1(R+522)));
w4(U+29,u32(u32(u32(0x2ull))*u32(r4(U+25))));
w4(R+28,u32(u32(r4(U+21))-u32(r4(U+29))));
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+24))+u32(u32(0x1ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x2ull))*u32(r4(U+8))));
w4(R+24,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),gp(u32(r4(U+0))),1);
__builtin_memmove((U+33),(U+16),1);
s1(u32(r4(U+17)),r1(U+33));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x535c65u);}goto L535c65;}
}
B535c67:L535c67:{c.instructions+=1;NFSU2_TR(0x535c67);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B535c69:L535c69:{c.instructions+=4;NFSU2_TR(0x535c69);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x24ull))));
w4(U+4,u32(0xaull));
s4(u32(r4(U+0)),r4(U+4));
}
B535c70:{NFSU2_TR(0x535c70);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B535c73:{NFSU2_TR(0x535c73);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B535c75:{NFSU2_TR(0x535c75);
if(r1(R+518)){{goto L535c8c;}}
}
B535c77:L535c77:{c.instructions+=4;NFSU2_TR(0x535c77);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B535c7a:{NFSU2_TR(0x535c7a);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B535c7c:{NFSU2_TR(0x535c7c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B535c7f:{NFSU2_TR(0x535c7f);
if(r1(R+518)){{goto L535c84;}}
}
B535c81:L535c81:{c.instructions+=1;NFSU2_TR(0x535c81);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B535c84:L535c84:{c.instructions+=3;NFSU2_TR(0x535c84);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B535c87:{NFSU2_TR(0x535c87);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B535c8a:{NFSU2_TR(0x535c8a);
{goto L535c9f;}
}
B535c8c:L535c8c:{c.instructions+=4;NFSU2_TR(0x535c8c);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B535c8f:{NFSU2_TR(0x535c8f);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B535c91:{NFSU2_TR(0x535c91);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B535c94:{NFSU2_TR(0x535c94);
if(r1(R+518)){{goto L535c99;}}
}
B535c96:L535c96:{c.instructions+=1;NFSU2_TR(0x535c96);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B535c99:L535c99:{c.instructions+=2;NFSU2_TR(0x535c99);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B535c9c:{NFSU2_TR(0x535c9c);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B535c9f:L535c9f:{c.instructions+=2;NFSU2_TR(0x535c9f);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+4))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B535ca2:{NFSU2_TR(0x535ca2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L535ca7;}}
}
B535ca4:L535ca4:{c.instructions+=1;NFSU2_TR(0x535ca4);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B535ca7:L535ca7:{c.instructions+=6;NFSU2_TR(0x535ca7);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B535caa:{NFSU2_TR(0x535caa);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B535cab:{NFSU2_TR(0x535cab);
u8 U[4];
w4(U+0,u32(0x79bb78ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B535cb0:{NFSU2_TR(0x535cb0);
__builtin_memmove((R+4),(R+12),4);
}
B535cb2:{NFSU2_TR(0x535cb2);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B535cb5:{NFSU2_TR(0x535cb5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x535cbaull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x535610u);}goto L535610;}
}
B535cba:L535cba:{c.instructions+=4;NFSU2_TR(0x535cba);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
w4(U+4,u32(0xbull));
s4(u32(r4(U+0)),r4(U+4));
}
B535cc1:{NFSU2_TR(0x535cc1);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B535cc4:{NFSU2_TR(0x535cc4);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B535cc6:{NFSU2_TR(0x535cc6);
if(r1(R+518)){{goto L535cdd;}}
}
B535cc8:L535cc8:{c.instructions+=4;NFSU2_TR(0x535cc8);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B535ccb:{NFSU2_TR(0x535ccb);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B535ccd:{NFSU2_TR(0x535ccd);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B535cd0:{NFSU2_TR(0x535cd0);
if(r1(R+518)){{goto L535cd5;}}
}
B535cd2:L535cd2:{c.instructions+=1;NFSU2_TR(0x535cd2);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B535cd5:L535cd5:{c.instructions+=3;NFSU2_TR(0x535cd5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B535cd8:{NFSU2_TR(0x535cd8);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B535cdb:{NFSU2_TR(0x535cdb);
{goto L535cf0;}
}
B535cdd:L535cdd:{c.instructions+=4;NFSU2_TR(0x535cdd);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B535ce0:{NFSU2_TR(0x535ce0);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B535ce2:{NFSU2_TR(0x535ce2);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B535ce5:{NFSU2_TR(0x535ce5);
if(r1(R+518)){{goto L535cea;}}
}
B535ce7:L535ce7:{c.instructions+=1;NFSU2_TR(0x535ce7);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B535cea:L535cea:{c.instructions+=2;NFSU2_TR(0x535cea);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B535ced:{NFSU2_TR(0x535ced);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B535cf0:L535cf0:{c.instructions+=2;NFSU2_TR(0x535cf0);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B535cf3:{NFSU2_TR(0x535cf3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L535cf8;}}
}
B535cf5:L535cf5:{c.instructions+=1;NFSU2_TR(0x535cf5);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B535cf8:L535cf8:{c.instructions+=6;NFSU2_TR(0x535cf8);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B535cfb:{NFSU2_TR(0x535cfb);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B535cfc:{NFSU2_TR(0x535cfc);
u8 U[4];
w4(U+0,u32(0x79bb70ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B535d01:{NFSU2_TR(0x535d01);
__builtin_memmove((R+4),(R+12),4);
}
B535d03:{NFSU2_TR(0x535d03);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B535d06:{NFSU2_TR(0x535d06);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x535d0bull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x535610u);}goto L535610;}
}
B535d0b:L535d0b:{c.instructions+=4;NFSU2_TR(0x535d0b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
w4(U+4,u32(0x2ull));
s4(u32(r4(U+0)),r4(U+4));
}
B535d12:{NFSU2_TR(0x535d12);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B535d15:{NFSU2_TR(0x535d15);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B535d17:{NFSU2_TR(0x535d17);
if(r1(R+518)){{goto L535d2e;}}
}
B535d19:L535d19:{c.instructions+=4;NFSU2_TR(0x535d19);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B535d1c:{NFSU2_TR(0x535d1c);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B535d1e:{NFSU2_TR(0x535d1e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B535d21:{NFSU2_TR(0x535d21);
if(r1(R+518)){{goto L535d26;}}
}
B535d23:L535d23:{c.instructions+=1;NFSU2_TR(0x535d23);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B535d26:L535d26:{c.instructions+=3;NFSU2_TR(0x535d26);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B535d29:{NFSU2_TR(0x535d29);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B535d2c:{NFSU2_TR(0x535d2c);
{goto L535d41;}
}
B535d2e:L535d2e:{c.instructions+=4;NFSU2_TR(0x535d2e);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B535d31:{NFSU2_TR(0x535d31);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B535d33:{NFSU2_TR(0x535d33);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B535d36:{NFSU2_TR(0x535d36);
if(r1(R+518)){{goto L535d3b;}}
}
B535d38:L535d38:{c.instructions+=1;NFSU2_TR(0x535d38);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B535d3b:L535d3b:{c.instructions+=2;NFSU2_TR(0x535d3b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B535d3e:{NFSU2_TR(0x535d3e);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B535d41:L535d41:{c.instructions+=2;NFSU2_TR(0x535d41);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B535d44:{NFSU2_TR(0x535d44);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L535d49;}}
}
B535d46:L535d46:{c.instructions+=1;NFSU2_TR(0x535d46);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B535d49:L535d49:{c.instructions+=6;NFSU2_TR(0x535d49);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B535d4c:{NFSU2_TR(0x535d4c);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x1ull))));
}
B535d4d:{NFSU2_TR(0x535d4d);
u8 U[4];
w4(U+0,u32(0x79bb68ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B535d52:{NFSU2_TR(0x535d52);
__builtin_memmove((R+4),(R+12),4);
}
B535d54:{NFSU2_TR(0x535d54);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B535d57:{NFSU2_TR(0x535d57);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x535d5cull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x535610u);}goto L535610;}
}
B535d5c:L535d5c:{c.instructions+=4;NFSU2_TR(0x535d5c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
w4(U+4,u32(0x3ull));
s4(u32(r4(U+0)),r4(U+4));
}
B535d63:{NFSU2_TR(0x535d63);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B535d66:{NFSU2_TR(0x535d66);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B535d68:{NFSU2_TR(0x535d68);
if(r1(R+518)){{goto L535d7f;}}
}
B535d6a:L535d6a:{c.instructions+=4;NFSU2_TR(0x535d6a);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B535d6d:{NFSU2_TR(0x535d6d);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B535d6f:{NFSU2_TR(0x535d6f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B535d72:{NFSU2_TR(0x535d72);
if(r1(R+518)){{goto L535d77;}}
}
B535d74:L535d74:{c.instructions+=1;NFSU2_TR(0x535d74);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B535d77:L535d77:{c.instructions+=3;NFSU2_TR(0x535d77);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B535d7a:{NFSU2_TR(0x535d7a);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B535d7d:{NFSU2_TR(0x535d7d);
{goto L535d92;}
}
B535d7f:L535d7f:{c.instructions+=4;NFSU2_TR(0x535d7f);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B535d82:{NFSU2_TR(0x535d82);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B535d84:{NFSU2_TR(0x535d84);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B535d87:{NFSU2_TR(0x535d87);
if(r1(R+518)){{goto L535d8c;}}
}
B535d89:L535d89:{c.instructions+=1;NFSU2_TR(0x535d89);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B535d8c:L535d8c:{c.instructions+=2;NFSU2_TR(0x535d8c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B535d8f:{NFSU2_TR(0x535d8f);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B535d92:L535d92:{c.instructions+=2;NFSU2_TR(0x535d92);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+4))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B535d95:{NFSU2_TR(0x535d95);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L535d9a;}}
}
B535d97:L535d97:{c.instructions+=1;NFSU2_TR(0x535d97);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B535d9a:L535d9a:{c.instructions+=6;NFSU2_TR(0x535d9a);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B535d9d:{NFSU2_TR(0x535d9d);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B535d9e:{NFSU2_TR(0x535d9e);
u8 U[4];
w4(U+0,u32(0x79bb60ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B535da3:{NFSU2_TR(0x535da3);
__builtin_memmove((R+4),(R+12),4);
}
B535da5:{NFSU2_TR(0x535da5);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B535da8:{NFSU2_TR(0x535da8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x535dadull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x535610u);}goto L535610;}
}
B535dad:L535dad:{c.instructions+=4;NFSU2_TR(0x535dad);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
w4(U+4,u32(0x7ull));
s4(u32(r4(U+0)),r4(U+4));
}
B535db4:{NFSU2_TR(0x535db4);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B535db7:{NFSU2_TR(0x535db7);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B535db9:{NFSU2_TR(0x535db9);
if(r1(R+518)){{goto L535dd0;}}
}
B535dbb:L535dbb:{c.instructions+=4;NFSU2_TR(0x535dbb);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B535dbe:{NFSU2_TR(0x535dbe);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B535dc0:{NFSU2_TR(0x535dc0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B535dc3:{NFSU2_TR(0x535dc3);
if(r1(R+518)){{goto L535dc8;}}
}
B535dc5:L535dc5:{c.instructions+=1;NFSU2_TR(0x535dc5);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B535dc8:L535dc8:{c.instructions+=3;NFSU2_TR(0x535dc8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B535dcb:{NFSU2_TR(0x535dcb);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B535dce:{NFSU2_TR(0x535dce);
{goto L535de3;}
}
B535dd0:L535dd0:{c.instructions+=4;NFSU2_TR(0x535dd0);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B535dd3:{NFSU2_TR(0x535dd3);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B535dd5:{NFSU2_TR(0x535dd5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B535dd8:{NFSU2_TR(0x535dd8);
if(r1(R+518)){{goto L535ddd;}}
}
B535dda:L535dda:{c.instructions+=1;NFSU2_TR(0x535dda);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B535ddd:L535ddd:{c.instructions+=2;NFSU2_TR(0x535ddd);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B535de0:{NFSU2_TR(0x535de0);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B535de3:L535de3:{c.instructions+=2;NFSU2_TR(0x535de3);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B535de6:{NFSU2_TR(0x535de6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L535deb;}}
}
B535de8:L535de8:{c.instructions+=1;NFSU2_TR(0x535de8);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B535deb:L535deb:{c.instructions+=6;NFSU2_TR(0x535deb);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B535dee:{NFSU2_TR(0x535dee);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B535def:{NFSU2_TR(0x535def);
u8 U[4];
w4(U+0,u32(0x79bb58ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B535df4:{NFSU2_TR(0x535df4);
__builtin_memmove((R+4),(R+12),4);
}
B535df6:{NFSU2_TR(0x535df6);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B535df9:{NFSU2_TR(0x535df9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x535dfeull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x535610u);}goto L535610;}
}
B535dfe:L535dfe:{c.instructions+=4;NFSU2_TR(0x535dfe);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
w4(U+4,u32(0x8ull));
s4(u32(r4(U+0)),r4(U+4));
}
B535e05:{NFSU2_TR(0x535e05);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B535e08:{NFSU2_TR(0x535e08);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B535e0a:{NFSU2_TR(0x535e0a);
if(r1(R+518)){{goto L535e21;}}
}
B535e0c:L535e0c:{c.instructions+=4;NFSU2_TR(0x535e0c);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B535e0f:{NFSU2_TR(0x535e0f);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B535e11:{NFSU2_TR(0x535e11);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B535e14:{NFSU2_TR(0x535e14);
if(r1(R+518)){{goto L535e19;}}
}
B535e16:L535e16:{c.instructions+=1;NFSU2_TR(0x535e16);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B535e19:L535e19:{c.instructions+=3;NFSU2_TR(0x535e19);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B535e1c:{NFSU2_TR(0x535e1c);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B535e1f:{NFSU2_TR(0x535e1f);
{goto L535e34;}
}
B535e21:L535e21:{c.instructions+=4;NFSU2_TR(0x535e21);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B535e24:{NFSU2_TR(0x535e24);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B535e26:{NFSU2_TR(0x535e26);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B535e29:{NFSU2_TR(0x535e29);
if(r1(R+518)){{goto L535e2e;}}
}
B535e2b:L535e2b:{c.instructions+=1;NFSU2_TR(0x535e2b);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B535e2e:L535e2e:{c.instructions+=2;NFSU2_TR(0x535e2e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B535e31:{NFSU2_TR(0x535e31);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B535e34:L535e34:{c.instructions+=2;NFSU2_TR(0x535e34);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B535e37:{NFSU2_TR(0x535e37);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L535e3c;}}
}
B535e39:L535e39:{c.instructions+=1;NFSU2_TR(0x535e39);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B535e3c:L535e3c:{c.instructions+=6;NFSU2_TR(0x535e3c);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B535e3f:{NFSU2_TR(0x535e3f);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B535e40:{NFSU2_TR(0x535e40);
u8 U[4];
w4(U+0,u32(0x79bb50ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B535e45:{NFSU2_TR(0x535e45);
__builtin_memmove((R+4),(R+12),4);
}
B535e47:{NFSU2_TR(0x535e47);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B535e4a:{NFSU2_TR(0x535e4a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x535e4full));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x535610u);}goto L535610;}
}
B535e4f:L535e4f:{c.instructions+=4;NFSU2_TR(0x535e4f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
w4(U+4,u32(0x4ull));
s4(u32(r4(U+0)),r4(U+4));
}
B535e56:{NFSU2_TR(0x535e56);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B535e59:{NFSU2_TR(0x535e59);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B535e5b:{NFSU2_TR(0x535e5b);
if(r1(R+518)){{goto L535e72;}}
}
B535e5d:L535e5d:{c.instructions+=4;NFSU2_TR(0x535e5d);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B535e60:{NFSU2_TR(0x535e60);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B535e62:{NFSU2_TR(0x535e62);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B535e65:{NFSU2_TR(0x535e65);
if(r1(R+518)){{goto L535e6a;}}
}
B535e67:L535e67:{c.instructions+=1;NFSU2_TR(0x535e67);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B535e6a:L535e6a:{c.instructions+=3;NFSU2_TR(0x535e6a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B535e6d:{NFSU2_TR(0x535e6d);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B535e70:{NFSU2_TR(0x535e70);
{goto L535e85;}
}
B535e72:L535e72:{c.instructions+=4;NFSU2_TR(0x535e72);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B535e75:{NFSU2_TR(0x535e75);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B535e77:{NFSU2_TR(0x535e77);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B535e7a:{NFSU2_TR(0x535e7a);
if(r1(R+518)){{goto L535e7f;}}
}
B535e7c:L535e7c:{c.instructions+=1;NFSU2_TR(0x535e7c);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B535e7f:L535e7f:{c.instructions+=2;NFSU2_TR(0x535e7f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B535e82:{NFSU2_TR(0x535e82);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B535e85:L535e85:{c.instructions+=2;NFSU2_TR(0x535e85);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B535e88:{NFSU2_TR(0x535e88);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L535e8d;}}
}
B535e8a:L535e8a:{c.instructions+=1;NFSU2_TR(0x535e8a);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B535e8d:L535e8d:{c.instructions+=6;NFSU2_TR(0x535e8d);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B535e90:{NFSU2_TR(0x535e90);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B535e91:{NFSU2_TR(0x535e91);
u8 U[4];
w4(U+0,u32(0x7903f8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B535e96:{NFSU2_TR(0x535e96);
__builtin_memmove((R+4),(R+12),4);
}
B535e98:{NFSU2_TR(0x535e98);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B535e9b:{NFSU2_TR(0x535e9b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x535ea0ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x535610u);}goto L535610;}
}
B535ea0:L535ea0:{c.instructions+=4;NFSU2_TR(0x535ea0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
w4(U+4,u32(0x5ull));
s4(u32(r4(U+0)),r4(U+4));
}
B535ea7:{NFSU2_TR(0x535ea7);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B535eaa:{NFSU2_TR(0x535eaa);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B535eac:{NFSU2_TR(0x535eac);
if(r1(R+518)){{goto L535ec3;}}
}
B535eae:L535eae:{c.instructions+=4;NFSU2_TR(0x535eae);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B535eb1:{NFSU2_TR(0x535eb1);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B535eb3:{NFSU2_TR(0x535eb3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B535eb6:{NFSU2_TR(0x535eb6);
if(r1(R+518)){{goto L535ebb;}}
}
B535eb8:L535eb8:{c.instructions+=1;NFSU2_TR(0x535eb8);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B535ebb:L535ebb:{c.instructions+=3;NFSU2_TR(0x535ebb);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B535ebe:{NFSU2_TR(0x535ebe);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B535ec1:{NFSU2_TR(0x535ec1);
{goto L535ed6;}
}
B535ec3:L535ec3:{c.instructions+=4;NFSU2_TR(0x535ec3);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B535ec6:{NFSU2_TR(0x535ec6);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B535ec8:{NFSU2_TR(0x535ec8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B535ecb:{NFSU2_TR(0x535ecb);
if(r1(R+518)){{goto L535ed0;}}
}
B535ecd:L535ecd:{c.instructions+=1;NFSU2_TR(0x535ecd);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B535ed0:L535ed0:{c.instructions+=2;NFSU2_TR(0x535ed0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B535ed3:{NFSU2_TR(0x535ed3);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B535ed6:L535ed6:{c.instructions+=2;NFSU2_TR(0x535ed6);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B535ed9:{NFSU2_TR(0x535ed9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L535ede;}}
}
B535edb:L535edb:{c.instructions+=1;NFSU2_TR(0x535edb);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B535ede:L535ede:{c.instructions+=6;NFSU2_TR(0x535ede);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B535ee1:{NFSU2_TR(0x535ee1);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x1ull))));
}
B535ee2:{NFSU2_TR(0x535ee2);
u8 U[4];
w4(U+0,u32(0x79bb44ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B535ee7:{NFSU2_TR(0x535ee7);
__builtin_memmove((R+4),(R+12),4);
}
B535ee9:{NFSU2_TR(0x535ee9);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B535eec:{NFSU2_TR(0x535eec);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x535ef1ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x535610u);}goto L535610;}
}
B535ef1:L535ef1:{c.instructions+=6;NFSU2_TR(0x535ef1);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
w4(U+4,u32(0x6ull));
s4(u32(r4(U+0)),r4(U+4));
}
B535ef8:{NFSU2_TR(0x535ef8);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B535efb:{NFSU2_TR(0x535efb);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B535efd:{NFSU2_TR(0x535efd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B535efe:{NFSU2_TR(0x535efe);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B535eff:{NFSU2_TR(0x535eff);
if(r1(R+518)){{goto L535f16;}}
}
B535f01:L535f01:{c.instructions+=4;NFSU2_TR(0x535f01);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B535f04:{NFSU2_TR(0x535f04);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B535f06:{NFSU2_TR(0x535f06);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B535f09:{NFSU2_TR(0x535f09);
if(r1(R+518)){{goto L535f0e;}}
}
B535f0b:L535f0b:{c.instructions+=1;NFSU2_TR(0x535f0b);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B535f0e:L535f0e:{c.instructions+=3;NFSU2_TR(0x535f0e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B535f11:{NFSU2_TR(0x535f11);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B535f14:{NFSU2_TR(0x535f14);
{goto L535f29;}
}
B535f16:L535f16:{c.instructions+=4;NFSU2_TR(0x535f16);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B535f19:{NFSU2_TR(0x535f19);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B535f1b:{NFSU2_TR(0x535f1b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B535f1e:{NFSU2_TR(0x535f1e);
if(r1(R+518)){{goto L535f23;}}
}
B535f20:L535f20:{c.instructions+=1;NFSU2_TR(0x535f20);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B535f23:L535f23:{c.instructions+=2;NFSU2_TR(0x535f23);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B535f26:{NFSU2_TR(0x535f26);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B535f29:L535f29:{c.instructions+=2;NFSU2_TR(0x535f29);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+4))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B535f2c:{NFSU2_TR(0x535f2c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L535f31;}}
}
B535f2e:L535f2e:{c.instructions+=1;NFSU2_TR(0x535f2e);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B535f31:L535f31:{c.instructions+=6;NFSU2_TR(0x535f31);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B535f34:{NFSU2_TR(0x535f34);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B535f35:{NFSU2_TR(0x535f35);
w1(R+0,u8(0x1ull));
}
B535f37:{NFSU2_TR(0x535f37);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B535f38:{NFSU2_TR(0x535f38);
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
B535f3b:{NFSU2_TR(0x535f3b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B535f40:L535f40:{c.instructions+=8;NFSU2_TR(0x535f40);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B535f41:{NFSU2_TR(0x535f41);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B535f42:{NFSU2_TR(0x535f42);
__builtin_memmove((R+12),(R+4),4);
}
B535f44:{NFSU2_TR(0x535f44);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B535f47:{NFSU2_TR(0x535f47);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B535f49:{NFSU2_TR(0x535f49);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B535f4a:{NFSU2_TR(0x535f4a);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x64ull))));
__builtin_memmove((R+24),(U+0),4);
}
B535f4d:{NFSU2_TR(0x535f4d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L535f53;}}
}
B535f4f:L535f4f:{c.instructions+=2;NFSU2_TR(0x535f4f);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B535f51:{NFSU2_TR(0x535f51);
{goto L535f66;}
}
B535f53:L535f53:{c.instructions+=6;NFSU2_TR(0x535f53);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B535f56:{NFSU2_TR(0x535f56);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B535f58:{NFSU2_TR(0x535f58);
w4(R+4,shl<u32>(r4(R+4),u64(u32(0x1ull))));
}
B535f5a:{NFSU2_TR(0x535f5a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B535f5b:{NFSU2_TR(0x535f5b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B535f5c:{NFSU2_TR(0x535f5c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x535f61ull));
TAIL_STATIC(0x43bcd0u,43b);
}
B535f61:L535f61:{c.instructions+=2;NFSU2_TR(0x535f61);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B535f64:{NFSU2_TR(0x535f64);
__builtin_memmove((R+20),(R+0),4);
}
B535f66:L535f66:{c.instructions+=4;NFSU2_TR(0x535f66);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B535f67:{NFSU2_TR(0x535f67);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B535f6b:{NFSU2_TR(0x535f6b);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B535f6d:{NFSU2_TR(0x535f6d);
if(r1(R+518)){{goto L535f9a;}}
}
B535f6f:L535f6f:{c.instructions+=3;NFSU2_TR(0x535f6f);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B535f71:{NFSU2_TR(0x535f71);
u8 U[6];
__builtin_memmove((U+0),gp(u32(r4(R+28))),2);
__builtin_memmove((U+2),(U+0),2);
w2(U+4,u16(u32(r2(U+2))-u32(r2(R+0))));
w1(R+518,u8((r2(U+4))==(u16(0x0ull))));
}
B535f74:{NFSU2_TR(0x535f74);
if(r1(R+518)){{goto L535f7e;}}
}
B535f76:L535f76:{c.instructions+=3;NFSU2_TR(0x535f76);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B535f77:{NFSU2_TR(0x535f77);
u8 U[14];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),2);
__builtin_memmove((U+10),(U+8),2);
w2(U+12,u16(u32(r2(U+10))-u32(u16(0x0ull))));
w1(R+518,u8((r2(U+12))==(u16(0x0ull))));
}
B535f7c:{NFSU2_TR(0x535f7c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x535f76u);}goto L535f76;}}
}
B535f7e:L535f7e:{c.instructions+=4;NFSU2_TR(0x535f7e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B535f81:{NFSU2_TR(0x535f81);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B535f82:{NFSU2_TR(0x535f82);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B535f84:{NFSU2_TR(0x535f84);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L535f8e;}}
}
B535f86:L535f86:{c.instructions+=3;NFSU2_TR(0x535f86);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B535f87:{NFSU2_TR(0x535f87);
__builtin_memmove((R+4),(R+24),4);
}
B535f89:{NFSU2_TR(0x535f89);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x535f8eull));
TAIL_STATIC(0x51de90u,51d);
}
B535f8e:L535f8e:{c.instructions+=4;NFSU2_TR(0x535f8e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B535f90:{NFSU2_TR(0x535f90);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B535f91:{NFSU2_TR(0x535f91);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B535f92:{NFSU2_TR(0x535f92);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x535f97ull));
TAIL_STATIC(0x511630u,511);
}
B535f97:L535f97:{c.instructions+=1;NFSU2_TR(0x535f97);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B535f9a:L535f9a:{c.instructions+=4;NFSU2_TR(0x535f9a);
__builtin_memmove((R+0),gp(0x8384d4),4);
}
B535f9f:{NFSU2_TR(0x535f9f);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B535fa1:{NFSU2_TR(0x535fa1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B535fa2:{NFSU2_TR(0x535fa2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L535fc5;}}
}
B535fa4:L535fa4:{c.instructions+=3;NFSU2_TR(0x535fa4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B535fa6:{NFSU2_TR(0x535fa6);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B535fa8:{NFSU2_TR(0x535fa8);
if(r1(R+518)){{goto L535fbb;}}
}
B535faa:L535faa:{c.instructions+=6;NFSU2_TR(0x535faa);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B535fad:{NFSU2_TR(0x535fad);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B535faf:{NFSU2_TR(0x535faf);
w4(R+4,shl<u32>(r4(R+4),u64(u32(0x1ull))));
}
B535fb1:{NFSU2_TR(0x535fb1);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B535fb2:{NFSU2_TR(0x535fb2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B535fb3:{NFSU2_TR(0x535fb3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x535fb8ull));
TAIL_STATIC(0x43bcd0u,43b);
}
B535fb8:L535fb8:{c.instructions+=1;NFSU2_TR(0x535fb8);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B535fbb:L535fbb:{c.instructions+=2;NFSU2_TR(0x535fbb);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B535fbd:{NFSU2_TR(0x535fbd);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L535fc5;}}
}
B535fbf:L535fbf:{c.instructions+=2;NFSU2_TR(0x535fbf);
u8 U[9];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1cull))));
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+8,u8(u32(r1(U+4))&u32(u8(0x2ull))));
w1(R+519,u8(s8(r1(U+8))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+8))==(u8(0x0ull))));
w1(U+5,u8(u32(r1(U+8))&u32(u8(0xffull))));
w1(U+6,u8(__builtin_popcountll(u64(r1(U+5)))));
w1(U+7,u8(u32(r1(U+6))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+7))==(u8(0x0ull))));
}
B535fc3:{NFSU2_TR(0x535fc3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L535fcc;}}
}
B535fc5:L535fc5:{c.instructions+=1;NFSU2_TR(0x535fc5);
u8 U[14];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1cull))));
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0x400000ull))));
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
B535fcc:L535fcc:{c.instructions+=4;NFSU2_TR(0x535fcc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B535fcd:{NFSU2_TR(0x535fcd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B535fce:{NFSU2_TR(0x535fce);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B535fcf:{NFSU2_TR(0x535fcf);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B535fe0:L535fe0:{c.instructions+=8;NFSU2_TR(0x535fe0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B535fe1:{NFSU2_TR(0x535fe1);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B535fe2:{NFSU2_TR(0x535fe2);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B535fe3:{NFSU2_TR(0x535fe3);
__builtin_memmove((R+28),(R+4),4);
}
B535fe5:{NFSU2_TR(0x535fe5);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B535fe8:{NFSU2_TR(0x535fe8);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B535fea:{NFSU2_TR(0x535fea);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x64ull))));
__builtin_memmove((R+24),(U+0),4);
}
B535fed:{NFSU2_TR(0x535fed);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L535ff3;}}
}
B535fef:L535fef:{c.instructions+=2;NFSU2_TR(0x535fef);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B535ff1:{NFSU2_TR(0x535ff1);
TAIL_STATIC(0x536006u,536);
}
B535ff3:L535ff3:{c.instructions+=6;NFSU2_TR(0x535ff3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B535ff6:{NFSU2_TR(0x535ff6);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B535ff8:{NFSU2_TR(0x535ff8);
w4(R+4,shl<u32>(r4(R+4),u64(u32(0x1ull))));
}
B535ffa:{NFSU2_TR(0x535ffa);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B535ffb:{NFSU2_TR(0x535ffb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B535ffc:{NFSU2_TR(0x535ffc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x536001ull));
TAIL_STATIC(0x43bcd0u,43b);
}
XIT:NFSU2_TR_EXIT(0x535,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
