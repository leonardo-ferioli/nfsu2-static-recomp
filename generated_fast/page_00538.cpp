#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_43b(u8* __restrict R,Cpu& c);
u32 body_50c(u8* __restrict R,Cpu& c);
u32 body_50d(u8* __restrict R,Cpu& c);
u32 body_511(u8* __restrict R,Cpu& c);
u32 body_517(u8* __restrict R,Cpu& c);
u32 body_51c(u8* __restrict R,Cpu& c);
u32 body_51d(u8* __restrict R,Cpu& c);
u32 body_51e(u8* __restrict R,Cpu& c);
u32 body_51f(u8* __restrict R,Cpu& c);
u32 body_52c(u8* __restrict R,Cpu& c);
u32 body_52d(u8* __restrict R,Cpu& c);
u32 body_52e(u8* __restrict R,Cpu& c);
u32 body_52f(u8* __restrict R,Cpu& c);
u32 body_537(u8* __restrict R,Cpu& c);
u32 body_539(u8* __restrict R,Cpu& c);
u32 body_574(u8* __restrict R,Cpu& c);
u32 body_575(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x538,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x538,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_538(u8* __restrict R,Cpu& c);
u32 page_538(Cpu& c){return body_538(c.regs.data(),c);}
__attribute__((noinline)) u32 body_538(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x538005:goto L538005;
case 0x538007:c.instructions+=2;goto B538007;
case 0x538009:c.instructions+=1;goto B538009;
case 0x53800b:goto L53800b;
case 0x53800d:c.instructions+=2;goto B53800d;
case 0x538010:c.instructions+=1;goto B538010;
case 0x538012:goto L538012;
case 0x538013:c.instructions+=2;goto B538013;
case 0x538018:c.instructions+=1;goto B538018;
case 0x53801a:goto L53801a;
case 0x53801b:c.instructions+=2;goto B53801b;
case 0x53801d:c.instructions+=1;goto B53801d;
case 0x53801f:goto L53801f;
case 0x538020:c.instructions+=2;goto B538020;
case 0x538022:c.instructions+=1;goto B538022;
case 0x538027:goto L538027;
case 0x538029:c.instructions+=4;goto B538029;
case 0x53802b:c.instructions+=3;goto B53802b;
case 0x53802c:c.instructions+=2;goto B53802c;
case 0x53802d:c.instructions+=1;goto B53802d;
case 0x538032:goto L538032;
case 0x538035:goto L538035;
case 0x538037:c.instructions+=3;goto B538037;
case 0x538039:c.instructions+=2;goto B538039;
case 0x53803b:c.instructions+=1;goto B53803b;
case 0x53803d:goto L53803d;
case 0x538040:c.instructions+=1;goto B538040;
case 0x538042:goto L538042;
case 0x538043:c.instructions+=2;goto B538043;
case 0x538048:c.instructions+=1;goto B538048;
case 0x53804a:goto L53804a;
case 0x53804d:c.instructions+=4;goto B53804d;
case 0x53804e:c.instructions+=3;goto B53804e;
case 0x538050:c.instructions+=2;goto B538050;
case 0x538051:c.instructions+=1;goto B538051;
case 0x538060:goto L538060;
case 0x538063:c.instructions+=9;goto B538063;
case 0x538066:c.instructions+=8;goto B538066;
case 0x538067:c.instructions+=7;goto B538067;
case 0x53806a:c.instructions+=6;goto B53806a;
case 0x53806d:c.instructions+=5;goto B53806d;
case 0x53806e:c.instructions+=4;goto B53806e;
case 0x53806f:c.instructions+=3;goto B53806f;
case 0x538074:c.instructions+=2;goto B538074;
case 0x538075:c.instructions+=1;goto B538075;
case 0x53807a:goto L53807a;
case 0x53807d:c.instructions+=1;goto B53807d;
case 0x538080:goto L538080;
case 0x538081:c.instructions+=7;goto B538081;
case 0x538085:c.instructions+=6;goto B538085;
case 0x538086:c.instructions+=5;goto B538086;
case 0x53808a:c.instructions+=4;goto B53808a;
case 0x53808c:c.instructions+=3;goto B53808c;
case 0x53808d:c.instructions+=2;goto B53808d;
case 0x53808f:c.instructions+=1;goto B53808f;
case 0x538091:goto L538091;
case 0x538093:c.instructions+=1;goto B538093;
case 0x538095:goto L538095;
case 0x538098:c.instructions+=2;goto B538098;
case 0x538099:c.instructions+=1;goto B538099;
case 0x53809e:goto L53809e;
case 0x5380a2:c.instructions+=3;goto B5380a2;
case 0x5380a5:c.instructions+=2;goto B5380a5;
case 0x5380a7:c.instructions+=1;goto B5380a7;
case 0x5380a9:goto L5380a9;
case 0x5380ac:c.instructions+=2;goto B5380ac;
case 0x5380ad:c.instructions+=1;goto B5380ad;
case 0x5380b2:goto L5380b2;
case 0x5380b4:goto L5380b4;
case 0x5380b7:c.instructions+=2;goto B5380b7;
case 0x5380b8:c.instructions+=1;goto B5380b8;
case 0x5380bd:goto L5380bd;
case 0x5380c0:c.instructions+=3;goto B5380c0;
case 0x5380c3:c.instructions+=2;goto B5380c3;
case 0x5380c4:c.instructions+=1;goto B5380c4;
case 0x5380c9:goto L5380c9;
case 0x5380cc:c.instructions+=2;goto B5380cc;
case 0x5380cd:c.instructions+=1;goto B5380cd;
case 0x5380d2:goto L5380d2;
case 0x5380d5:c.instructions+=2;goto B5380d5;
case 0x5380d6:c.instructions+=1;goto B5380d6;
case 0x5380db:goto L5380db;
case 0x5380de:c.instructions+=2;goto B5380de;
case 0x5380df:c.instructions+=1;goto B5380df;
case 0x5380e4:goto L5380e4;
case 0x5380e7:c.instructions+=7;goto B5380e7;
case 0x5380ea:c.instructions+=6;goto B5380ea;
case 0x5380ec:c.instructions+=5;goto B5380ec;
case 0x5380ed:c.instructions+=4;goto B5380ed;
case 0x5380ee:c.instructions+=3;goto B5380ee;
case 0x5380f0:c.instructions+=2;goto B5380f0;
case 0x5380f1:c.instructions+=1;goto B5380f1;
case 0x5380f3:goto L5380f3;
case 0x5380f8:goto L5380f8;
case 0x5380f9:c.instructions+=3;goto B5380f9;
case 0x5380fa:c.instructions+=2;goto B5380fa;
case 0x5380fb:c.instructions+=1;goto B5380fb;
case 0x5380fe:goto L5380fe;
case 0x538103:goto L538103;
case 0x538104:c.instructions+=3;goto B538104;
case 0x538105:c.instructions+=2;goto B538105;
case 0x538106:c.instructions+=1;goto B538106;
case 0x538109:goto L538109;
case 0x53810c:c.instructions+=2;goto B53810c;
case 0x53810d:c.instructions+=1;goto B53810d;
case 0x538112:goto L538112;
case 0x538115:c.instructions+=2;goto B538115;
case 0x538116:c.instructions+=1;goto B538116;
case 0x53811b:goto L53811b;
case 0x53811e:c.instructions+=2;goto B53811e;
case 0x53811f:c.instructions+=1;goto B53811f;
case 0x538124:goto L538124;
case 0x538127:c.instructions+=4;goto B538127;
case 0x538128:c.instructions+=3;goto B538128;
case 0x538129:c.instructions+=2;goto B538129;
case 0x53812a:c.instructions+=1;goto B53812a;
case 0x538130:goto L538130;
case 0x538133:c.instructions+=6;goto B538133;
case 0x538134:c.instructions+=5;goto B538134;
case 0x538136:c.instructions+=4;goto B538136;
case 0x538139:c.instructions+=3;goto B538139;
case 0x53813b:c.instructions+=2;goto B53813b;
case 0x538142:c.instructions+=1;goto B538142;
case 0x538148:goto L538148;
case 0x53814b:c.instructions+=2;goto B53814b;
case 0x53814c:c.instructions+=1;goto B53814c;
case 0x538151:goto L538151;
case 0x538154:c.instructions+=2;goto B538154;
case 0x538156:c.instructions+=1;goto B538156;
case 0x538158:goto L538158;
case 0x53815b:c.instructions+=13;goto B53815b;
case 0x53815f:c.instructions+=12;goto B53815f;
case 0x538165:c.instructions+=11;goto B538165;
case 0x538169:c.instructions+=10;goto B538169;
case 0x53816a:c.instructions+=9;goto B53816a;
case 0x538170:c.instructions+=8;goto B538170;
case 0x538174:c.instructions+=7;goto B538174;
case 0x538175:c.instructions+=6;goto B538175;
case 0x538176:c.instructions+=5;goto B538176;
case 0x538179:c.instructions+=4;goto B538179;
case 0x53817f:c.instructions+=3;goto B53817f;
case 0x538185:c.instructions+=2;goto B538185;
case 0x538188:c.instructions+=1;goto B538188;
case 0x53818d:goto L53818d;
case 0x538191:c.instructions+=10;goto B538191;
case 0x538194:c.instructions+=9;goto B538194;
case 0x538197:c.instructions+=8;goto B538197;
case 0x53819b:c.instructions+=7;goto B53819b;
case 0x53819c:c.instructions+=6;goto B53819c;
case 0x5381a0:c.instructions+=5;goto B5381a0;
case 0x5381a2:c.instructions+=4;goto B5381a2;
case 0x5381a3:c.instructions+=3;goto B5381a3;
case 0x5381a6:c.instructions+=2;goto B5381a6;
case 0x5381a7:c.instructions+=1;goto B5381a7;
case 0x5381ac:goto L5381ac;
case 0x5381b0:c.instructions+=5;goto B5381b0;
case 0x5381b3:c.instructions+=4;goto B5381b3;
case 0x5381b6:c.instructions+=3;goto B5381b6;
case 0x5381b8:c.instructions+=2;goto B5381b8;
case 0x5381bb:c.instructions+=1;goto B5381bb;
case 0x5381bd:goto L5381bd;
case 0x5381c0:c.instructions+=2;goto B5381c0;
case 0x5381c1:c.instructions+=1;goto B5381c1;
case 0x5381c6:goto L5381c6;
case 0x5381c9:c.instructions+=2;goto B5381c9;
case 0x5381cb:c.instructions+=1;goto B5381cb;
case 0x5381cd:goto L5381cd;
case 0x5381cf:c.instructions+=1;goto B5381cf;
case 0x5381d4:goto L5381d4;
case 0x5381d9:c.instructions+=3;goto B5381d9;
case 0x5381db:c.instructions+=2;goto B5381db;
case 0x5381e2:c.instructions+=1;goto B5381e2;
case 0x5381e4:goto L5381e4;
case 0x5381eb:goto L5381eb;
case 0x5381ed:c.instructions+=1;goto B5381ed;
case 0x5381ef:goto L5381ef;
case 0x5381f3:goto L5381f3;
case 0x5381f6:c.instructions+=2;goto B5381f6;
case 0x5381f8:c.instructions+=1;goto B5381f8;
case 0x5381fa:goto L5381fa;
case 0x5381fc:c.instructions+=1;goto B5381fc;
case 0x538201:goto L538201;
case 0x538202:c.instructions+=2;goto B538202;
case 0x538205:c.instructions+=1;goto B538205;
case 0x538206:goto L538206;
case 0x538209:c.instructions+=9;goto B538209;
case 0x53820f:c.instructions+=8;goto B53820f;
case 0x538211:c.instructions+=7;goto B538211;
case 0x538215:c.instructions+=6;goto B538215;
case 0x538219:c.instructions+=5;goto B538219;
case 0x53821f:c.instructions+=4;goto B53821f;
case 0x538225:c.instructions+=3;goto B538225;
case 0x538227:c.instructions+=2;goto B538227;
case 0x53822a:c.instructions+=1;goto B53822a;
case 0x53822c:goto L53822c;
case 0x53822e:c.instructions+=1;goto B53822e;
case 0x538233:goto L538233;
case 0x538234:c.instructions+=2;goto B538234;
case 0x538237:c.instructions+=1;goto B538237;
case 0x538240:goto L538240;
case 0x538241:c.instructions+=5;goto B538241;
case 0x538243:c.instructions+=4;goto B538243;
case 0x538246:c.instructions+=3;goto B538246;
case 0x538249:c.instructions+=2;goto B538249;
case 0x53824b:c.instructions+=1;goto B53824b;
case 0x538251:goto L538251;
case 0x538254:c.instructions+=5;goto B538254;
case 0x538255:c.instructions+=4;goto B538255;
case 0x538258:c.instructions+=3;goto B538258;
case 0x53825a:c.instructions+=2;goto B53825a;
case 0x53825b:c.instructions+=1;goto B53825b;
case 0x538261:goto L538261;
case 0x538264:c.instructions+=3;goto B538264;
case 0x538267:c.instructions+=2;goto B538267;
case 0x538269:c.instructions+=1;goto B538269;
case 0x53826b:goto L53826b;
case 0x53826c:c.instructions+=5;goto B53826c;
case 0x53826f:c.instructions+=4;goto B53826f;
case 0x538270:c.instructions+=3;goto B538270;
case 0x538272:c.instructions+=2;goto B538272;
case 0x538274:c.instructions+=1;goto B538274;
case 0x538279:goto L538279;
case 0x53827c:c.instructions+=2;goto B53827c;
case 0x53827e:c.instructions+=1;goto B53827e;
case 0x538280:goto L538280;
case 0x538283:c.instructions+=3;goto B538283;
case 0x538285:c.instructions+=2;goto B538285;
case 0x538288:c.instructions+=1;goto B538288;
case 0x53828a:goto L53828a;
case 0x53828d:c.instructions+=1;goto B53828d;
case 0x53828f:goto L53828f;
case 0x538291:c.instructions+=1;goto B538291;
case 0x538293:goto L538293;
case 0x538294:c.instructions+=2;goto B538294;
case 0x538297:c.instructions+=1;goto B538297;
case 0x53829c:goto L53829c;
case 0x53829e:c.instructions+=1;goto B53829e;
case 0x5382a0:goto L5382a0;
case 0x5382a3:c.instructions+=1;goto B5382a3;
case 0x5382a5:goto L5382a5;
case 0x5382a7:goto L5382a7;
case 0x5382aa:c.instructions+=4;goto B5382aa;
case 0x5382ab:c.instructions+=3;goto B5382ab;
case 0x5382ad:c.instructions+=2;goto B5382ad;
case 0x5382b0:c.instructions+=1;goto B5382b0;
case 0x5382b5:goto L5382b5;
case 0x5382b7:c.instructions+=3;goto B5382b7;
case 0x5382ba:c.instructions+=2;goto B5382ba;
case 0x5382c1:c.instructions+=1;goto B5382c1;
case 0x5382c6:goto L5382c6;
case 0x5382c9:c.instructions+=3;goto B5382c9;
case 0x5382cb:c.instructions+=2;goto B5382cb;
case 0x5382cc:c.instructions+=1;goto B5382cc;
case 0x5382ce:goto L5382ce;
case 0x5382d1:c.instructions+=3;goto B5382d1;
case 0x5382d6:c.instructions+=2;goto B5382d6;
case 0x5382d7:c.instructions+=1;goto B5382d7;
case 0x5382dc:goto L5382dc;
case 0x5382dd:c.instructions+=4;goto B5382dd;
case 0x5382de:c.instructions+=3;goto B5382de;
case 0x5382e0:c.instructions+=2;goto B5382e0;
case 0x5382e1:c.instructions+=1;goto B5382e1;
case 0x5382e6:goto L5382e6;
case 0x5382e7:c.instructions+=1;goto B5382e7;
case 0x5382e8:goto L5382e8;
case 0x5382e9:c.instructions+=1;goto B5382e9;
case 0x5382f0:goto L5382f0;
case 0x5382f3:c.instructions+=12;goto B5382f3;
case 0x5382f4:c.instructions+=11;goto B5382f4;
case 0x5382f5:c.instructions+=10;goto B5382f5;
case 0x5382f6:c.instructions+=9;goto B5382f6;
case 0x5382f7:c.instructions+=8;goto B5382f7;
case 0x5382f9:c.instructions+=7;goto B5382f9;
case 0x5382fc:c.instructions+=6;goto B5382fc;
case 0x5382ff:c.instructions+=5;goto B5382ff;
case 0x538301:c.instructions+=4;goto B538301;
case 0x538303:c.instructions+=3;goto B538303;
case 0x538307:c.instructions+=2;goto B538307;
case 0x53830b:c.instructions+=1;goto B53830b;
case 0x53830d:goto L53830d;
case 0x538310:c.instructions+=2;goto B538310;
case 0x538314:c.instructions+=1;goto B538314;
case 0x538316:goto L538316;
case 0x53831a:goto L53831a;
case 0x53831e:c.instructions+=1;goto B53831e;
case 0x538320:goto L538320;
case 0x538323:c.instructions+=2;goto B538323;
case 0x538325:c.instructions+=1;goto B538325;
case 0x538327:goto L538327;
case 0x53832a:c.instructions+=1;goto B53832a;
case 0x53832c:goto L53832c;
case 0x53832e:goto L53832e;
case 0x538330:c.instructions+=1;goto B538330;
case 0x538336:goto L538336;
case 0x538338:c.instructions+=1;goto B538338;
case 0x53833e:goto L53833e;
case 0x538341:c.instructions+=2;goto B538341;
case 0x538343:c.instructions+=1;goto B538343;
case 0x538345:goto L538345;
case 0x538348:c.instructions+=1;goto B538348;
case 0x53834a:goto L53834a;
case 0x53834c:goto L53834c;
case 0x53834e:c.instructions+=1;goto B53834e;
case 0x538354:goto L538354;
case 0x538357:c.instructions+=2;goto B538357;
case 0x538359:c.instructions+=1;goto B538359;
case 0x53835b:goto L53835b;
case 0x53835e:goto L53835e;
case 0x538360:c.instructions+=1;goto B538360;
case 0x538365:goto L538365;
case 0x538368:goto L538368;
case 0x53836a:c.instructions+=1;goto B53836a;
case 0x53836c:goto L53836c;
case 0x53836f:c.instructions+=1;goto B53836f;
case 0x538371:goto L538371;
case 0x538373:goto L538373;
case 0x538376:c.instructions+=2;goto B538376;
case 0x538378:c.instructions+=1;goto B538378;
case 0x53837a:goto L53837a;
case 0x53837d:c.instructions+=1;goto B53837d;
case 0x53837f:goto L53837f;
case 0x538381:goto L538381;
case 0x538383:c.instructions+=1;goto B538383;
case 0x538389:goto L538389;
case 0x53838f:c.instructions+=2;goto B53838f;
case 0x538391:c.instructions+=1;goto B538391;
case 0x538393:goto L538393;
case 0x538396:c.instructions+=2;goto B538396;
case 0x538398:c.instructions+=1;goto B538398;
case 0x53839a:goto L53839a;
case 0x53839d:c.instructions+=3;goto B53839d;
case 0x53839f:c.instructions+=2;goto B53839f;
case 0x5383a1:c.instructions+=1;goto B5383a1;
case 0x5383a3:goto L5383a3;
case 0x5383a5:goto L5383a5;
case 0x5383a8:c.instructions+=1;goto B5383a8;
case 0x5383aa:goto L5383aa;
case 0x5383af:c.instructions+=2;goto B5383af;
case 0x5383b2:c.instructions+=1;goto B5383b2;
case 0x5383b5:goto L5383b5;
case 0x5383bb:c.instructions+=2;goto B5383bb;
case 0x5383bd:c.instructions+=1;goto B5383bd;
case 0x5383bf:goto L5383bf;
case 0x5383c1:c.instructions+=2;goto B5383c1;
case 0x5383c2:c.instructions+=1;goto B5383c2;
case 0x5383c4:goto L5383c4;
case 0x5383c7:c.instructions+=6;goto B5383c7;
case 0x5383ca:c.instructions+=5;goto B5383ca;
case 0x5383cc:c.instructions+=4;goto B5383cc;
case 0x5383d0:c.instructions+=3;goto B5383d0;
case 0x5383d3:c.instructions+=2;goto B5383d3;
case 0x5383d5:c.instructions+=1;goto B5383d5;
case 0x5383d7:goto L5383d7;
case 0x5383dc:c.instructions+=2;goto B5383dc;
case 0x5383df:c.instructions+=1;goto B5383df;
case 0x5383e1:goto L5383e1;
case 0x5383e4:c.instructions+=5;goto B5383e4;
case 0x5383e7:c.instructions+=4;goto B5383e7;
case 0x5383e8:c.instructions+=3;goto B5383e8;
case 0x5383ed:c.instructions+=2;goto B5383ed;
case 0x5383ee:c.instructions+=1;goto B5383ee;
case 0x5383f3:goto L5383f3;
case 0x5383f6:goto L5383f6;
case 0x5383f9:c.instructions+=2;goto B5383f9;
case 0x5383fb:c.instructions+=1;goto B5383fb;
case 0x5383fd:goto L5383fd;
case 0x538400:c.instructions+=1;goto B538400;
case 0x538402:goto L538402;
case 0x538404:goto L538404;
case 0x538408:c.instructions+=3;goto B538408;
case 0x53840b:c.instructions+=2;goto B53840b;
case 0x53840d:c.instructions+=1;goto B53840d;
case 0x53840f:goto L53840f;
case 0x538412:c.instructions+=1;goto B538412;
case 0x538414:goto L538414;
case 0x538416:goto L538416;
case 0x538418:c.instructions+=1;goto B538418;
case 0x53841a:goto L53841a;
case 0x53841d:c.instructions+=2;goto B53841d;
case 0x53841f:c.instructions+=1;goto B53841f;
case 0x538421:goto L538421;
case 0x538424:c.instructions+=1;goto B538424;
case 0x538426:goto L538426;
case 0x538428:goto L538428;
case 0x53842b:c.instructions+=2;goto B53842b;
case 0x53842d:c.instructions+=1;goto B53842d;
case 0x53842f:goto L53842f;
case 0x538432:c.instructions+=1;goto B538432;
case 0x538434:goto L538434;
case 0x538436:goto L538436;
case 0x538438:c.instructions+=1;goto B538438;
case 0x53843a:goto L53843a;
case 0x53843d:c.instructions+=1;goto B53843d;
case 0x538442:goto L538442;
case 0x538445:c.instructions+=3;goto B538445;
case 0x538447:c.instructions+=2;goto B538447;
case 0x53844b:c.instructions+=1;goto B53844b;
case 0x53844d:goto L53844d;
case 0x538450:c.instructions+=2;goto B538450;
case 0x538454:c.instructions+=1;goto B538454;
case 0x538456:goto L538456;
case 0x53845e:c.instructions+=1;goto B53845e;
case 0x538460:goto L538460;
case 0x538462:c.instructions+=1;goto B538462;
case 0x538467:goto L538467;
case 0x53846a:c.instructions+=4;goto B53846a;
case 0x53846e:c.instructions+=3;goto B53846e;
case 0x538470:c.instructions+=2;goto B538470;
case 0x538472:c.instructions+=1;goto B538472;
case 0x538478:goto L538478;
case 0x53847b:c.instructions+=2;goto B53847b;
case 0x53847f:c.instructions+=1;goto B53847f;
case 0x538484:goto L538484;
case 0x538485:c.instructions+=5;goto B538485;
case 0x538486:c.instructions+=4;goto B538486;
case 0x538487:c.instructions+=3;goto B538487;
case 0x538488:c.instructions+=2;goto B538488;
case 0x53848b:c.instructions+=1;goto B53848b;
case 0x538490:goto L538490;
case 0x538491:c.instructions+=6;goto B538491;
case 0x538493:c.instructions+=5;goto B538493;
case 0x538499:c.instructions+=4;goto B538499;
case 0x53849b:c.instructions+=3;goto B53849b;
case 0x53849c:c.instructions+=2;goto B53849c;
case 0x53849f:c.instructions+=1;goto B53849f;
case 0x5384a1:goto L5384a1;
case 0x5384a4:c.instructions+=2;goto B5384a4;
case 0x5384a5:c.instructions+=1;goto B5384a5;
case 0x5384aa:goto L5384aa;
case 0x5384ad:c.instructions+=4;goto B5384ad;
case 0x5384ae:c.instructions+=3;goto B5384ae;
case 0x5384af:c.instructions+=2;goto B5384af;
case 0x5384b1:c.instructions+=1;goto B5384b1;
case 0x5384b3:goto L5384b3;
case 0x5384b6:c.instructions+=5;goto B5384b6;
case 0x5384b9:c.instructions+=4;goto B5384b9;
case 0x5384bc:c.instructions+=3;goto B5384bc;
case 0x5384bd:c.instructions+=2;goto B5384bd;
case 0x5384be:c.instructions+=1;goto B5384be;
case 0x5384bf:goto L5384bf;
case 0x5384c1:c.instructions+=1;goto B5384c1;
case 0x5384c6:goto L5384c6;
case 0x5384cc:c.instructions+=2;goto B5384cc;
case 0x5384ce:c.instructions+=1;goto B5384ce;
case 0x5384d0:goto L5384d0;
case 0x5384d3:c.instructions+=2;goto B5384d3;
case 0x5384d4:c.instructions+=1;goto B5384d4;
case 0x5384d9:goto L5384d9;
case 0x5384dc:c.instructions+=2;goto B5384dc;
case 0x5384dd:c.instructions+=1;goto B5384dd;
case 0x5384e2:goto L5384e2;
case 0x5384e5:c.instructions+=2;goto B5384e5;
case 0x5384e6:c.instructions+=1;goto B5384e6;
case 0x5384eb:goto L5384eb;
case 0x5384ee:goto L5384ee;
case 0x5384ef:c.instructions+=2;goto B5384ef;
case 0x5384f0:c.instructions+=1;goto B5384f0;
case 0x538500:goto L538500;
case 0x538504:c.instructions+=4;goto B538504;
case 0x538506:c.instructions+=3;goto B538506;
case 0x538507:c.instructions+=2;goto B538507;
case 0x538509:c.instructions+=1;goto B538509;
case 0x53850b:goto L53850b;
case 0x53850d:c.instructions+=1;goto B53850d;
case 0x538510:goto L538510;
case 0x538516:c.instructions+=2;goto B538516;
case 0x538518:c.instructions+=1;goto B538518;
case 0x53851a:goto L53851a;
case 0x53851c:c.instructions+=1;goto B53851c;
case 0x538521:goto L538521;
case 0x538522:c.instructions+=1;goto B538522;
case 0x538530:goto L538530;
case 0x538531:c.instructions+=5;goto B538531;
case 0x538532:c.instructions+=4;goto B538532;
case 0x538536:c.instructions+=3;goto B538536;
case 0x538538:c.instructions+=2;goto B538538;
case 0x53853a:c.instructions+=1;goto B53853a;
case 0x53853c:goto L53853c;
case 0x53853f:c.instructions+=2;goto B53853f;
case 0x538541:c.instructions+=1;goto B538541;
case 0x538543:goto L538543;
case 0x538544:c.instructions+=2;goto B538544;
case 0x538545:c.instructions+=1;goto B538545;
case 0x53854a:goto L53854a;
case 0x53854c:c.instructions+=2;goto B53854c;
case 0x53854e:c.instructions+=1;goto B53854e;
case 0x538550:goto L538550;
case 0x538553:c.instructions+=2;goto B538553;
case 0x538555:c.instructions+=1;goto B538555;
case 0x538557:goto L538557;
case 0x53855a:c.instructions+=3;goto B53855a;
case 0x53855f:c.instructions+=2;goto B53855f;
case 0x538560:c.instructions+=1;goto B538560;
case 0x538565:goto L538565;
case 0x538568:c.instructions+=6;goto B538568;
case 0x53856b:c.instructions+=5;goto B53856b;
case 0x53856e:c.instructions+=4;goto B53856e;
case 0x538573:c.instructions+=3;goto B538573;
case 0x538574:c.instructions+=2;goto B538574;
case 0x538576:c.instructions+=1;goto B538576;
case 0x53857b:goto L53857b;
case 0x53857d:c.instructions+=2;goto B53857d;
case 0x53857f:c.instructions+=1;goto B53857f;
case 0x538582:goto L538582;
case 0x538588:c.instructions+=2;goto B538588;
case 0x53858a:c.instructions+=1;goto B53858a;
case 0x53858c:goto L53858c;
case 0x53858e:c.instructions+=1;goto B53858e;
case 0x538593:goto L538593;
case 0x53859a:goto L53859a;
case 0x53859b:goto L53859b;
case 0x53859c:c.instructions+=2;goto B53859c;
case 0x53859d:c.instructions+=1;goto B53859d;
case 0x5385a0:goto L5385a0;
case 0x5385a1:c.instructions+=2;goto B5385a1;
case 0x5385a3:c.instructions+=1;goto B5385a3;
case 0x5385a8:goto L5385a8;
case 0x5385ad:c.instructions+=1;goto B5385ad;
case 0x5385af:goto L5385af;
case 0x5385b0:c.instructions+=1;goto B5385b0;
case 0x5385b5:goto L5385b5;
case 0x5385b8:goto L5385b8;
case 0x5385ba:c.instructions+=2;goto B5385ba;
case 0x5385bb:c.instructions+=1;goto B5385bb;
case 0x5385c0:goto L5385c0;
case 0x5385c1:c.instructions+=7;goto B5385c1;
case 0x5385c2:c.instructions+=6;goto B5385c2;
case 0x5385c4:c.instructions+=5;goto B5385c4;
case 0x5385c7:c.instructions+=4;goto B5385c7;
case 0x5385ca:c.instructions+=3;goto B5385ca;
case 0x5385cc:c.instructions+=2;goto B5385cc;
case 0x5385cf:c.instructions+=1;goto B5385cf;
case 0x5385d1:goto L5385d1;
case 0x5385d4:c.instructions+=3;goto B5385d4;
case 0x5385d5:c.instructions+=2;goto B5385d5;
case 0x5385d8:c.instructions+=1;goto B5385d8;
case 0x5385da:goto L5385da;
case 0x5385dd:c.instructions+=1;goto B5385dd;
case 0x5385df:goto L5385df;
case 0x5385e2:c.instructions+=1;goto B5385e2;
case 0x5385e4:goto L5385e4;
case 0x5385e7:c.instructions+=2;goto B5385e7;
case 0x5385e9:c.instructions+=1;goto B5385e9;
case 0x5385ec:goto L5385ec;
case 0x5385ef:c.instructions+=5;goto B5385ef;
case 0x5385f2:c.instructions+=4;goto B5385f2;
case 0x5385f5:c.instructions+=3;goto B5385f5;
case 0x5385fb:c.instructions+=2;goto B5385fb;
case 0x5385fe:c.instructions+=1;goto B5385fe;
case 0x538600:goto L538600;
case 0x538602:c.instructions+=1;goto B538602;
case 0x538604:goto L538604;
case 0x538606:c.instructions+=1;goto B538606;
case 0x53860b:goto L53860b;
case 0x53860d:c.instructions+=2;goto B53860d;
case 0x53860f:c.instructions+=1;goto B53860f;
case 0x538614:goto L538614;
case 0x538616:c.instructions+=1;goto B538616;
case 0x53861b:goto L53861b;
case 0x53861e:c.instructions+=4;goto B53861e;
case 0x538625:c.instructions+=3;goto B538625;
case 0x53862c:c.instructions+=2;goto B53862c;
case 0x53862e:c.instructions+=1;goto B53862e;
case 0x538630:goto L538630;
case 0x538631:goto L538631;
case 0x538633:c.instructions+=10;goto B538633;
case 0x538635:c.instructions+=9;goto B538635;
case 0x538638:c.instructions+=8;goto B538638;
case 0x53863a:c.instructions+=7;goto B53863a;
case 0x53863d:c.instructions+=6;goto B53863d;
case 0x538640:c.instructions+=5;goto B538640;
case 0x538643:c.instructions+=4;goto B538643;
case 0x538646:c.instructions+=3;goto B538646;
case 0x538649:c.instructions+=2;goto B538649;
case 0x53864b:c.instructions+=1;goto B53864b;
case 0x53864d:goto L53864d;
case 0x538650:c.instructions+=3;goto B538650;
case 0x538651:c.instructions+=2;goto B538651;
case 0x538654:c.instructions+=1;goto B538654;
case 0x538656:goto L538656;
case 0x538659:c.instructions+=1;goto B538659;
case 0x53865b:goto L53865b;
case 0x53865e:c.instructions+=1;goto B53865e;
case 0x538660:goto L538660;
case 0x538663:c.instructions+=2;goto B538663;
case 0x538665:c.instructions+=1;goto B538665;
case 0x538668:goto L538668;
case 0x53866b:c.instructions+=5;goto B53866b;
case 0x53866e:c.instructions+=4;goto B53866e;
case 0x538671:c.instructions+=3;goto B538671;
case 0x538677:c.instructions+=2;goto B538677;
case 0x53867a:c.instructions+=1;goto B53867a;
case 0x53867c:goto L53867c;
case 0x53867e:c.instructions+=1;goto B53867e;
case 0x538680:goto L538680;
case 0x538682:c.instructions+=2;goto B538682;
case 0x538684:c.instructions+=1;goto B538684;
case 0x538686:goto L538686;
case 0x538688:c.instructions+=1;goto B538688;
case 0x53868a:goto L53868a;
case 0x53868b:goto L53868b;
case 0x53868d:c.instructions+=2;goto B53868d;
case 0x53868f:c.instructions+=1;goto B53868f;
case 0x538694:goto L538694;
case 0x538697:c.instructions+=3;goto B538697;
case 0x538698:c.instructions+=2;goto B538698;
case 0x538699:c.instructions+=1;goto B538699;
case 0x5386a0:goto L5386a0;
case 0x5386a4:c.instructions+=2;goto B5386a4;
case 0x5386a7:c.instructions+=1;goto B5386a7;
case 0x5386a9:goto L5386a9;
case 0x5386ac:c.instructions+=4;goto B5386ac;
case 0x5386ae:c.instructions+=3;goto B5386ae;
case 0x5386b1:c.instructions+=2;goto B5386b1;
case 0x5386b4:c.instructions+=1;goto B5386b4;
case 0x5386b6:goto L5386b6;
case 0x5386b9:c.instructions+=1;goto B5386b9;
case 0x5386bb:goto L5386bb;
case 0x5386be:goto L5386be;
case 0x5386c0:c.instructions+=5;goto B5386c0;
case 0x5386c3:c.instructions+=4;goto B5386c3;
case 0x5386c5:c.instructions+=3;goto B5386c5;
case 0x5386c7:c.instructions+=2;goto B5386c7;
case 0x5386ca:c.instructions+=1;goto B5386ca;
case 0x5386cc:goto L5386cc;
case 0x5386d2:goto L5386d2;
case 0x5386d5:c.instructions+=9;goto B5386d5;
case 0x5386d8:c.instructions+=8;goto B5386d8;
case 0x5386da:c.instructions+=7;goto B5386da;
case 0x5386dd:c.instructions+=6;goto B5386dd;
case 0x5386e0:c.instructions+=5;goto B5386e0;
case 0x5386e6:c.instructions+=4;goto B5386e6;
case 0x5386e9:c.instructions+=3;goto B5386e9;
case 0x5386eb:c.instructions+=2;goto B5386eb;
case 0x5386ef:c.instructions+=1;goto B5386ef;
case 0x5386f4:goto L5386f4;
case 0x538700:goto L538700;
case 0x538704:c.instructions+=4;goto B538704;
case 0x538705:c.instructions+=3;goto B538705;
case 0x538706:c.instructions+=2;goto B538706;
case 0x538708:c.instructions+=1;goto B538708;
case 0x53870d:goto L53870d;
case 0x53870f:c.instructions+=1;goto B53870f;
case 0x538711:goto L538711;
case 0x538714:c.instructions+=2;goto B538714;
case 0x538716:c.instructions+=1;goto B538716;
case 0x538718:goto L538718;
case 0x53871b:c.instructions+=1;goto B53871b;
case 0x53871d:goto L53871d;
case 0x53871f:goto L53871f;
case 0x538720:c.instructions+=2;goto B538720;
case 0x538722:c.instructions+=1;goto B538722;
case 0x538727:goto L538727;
case 0x538729:c.instructions+=2;goto B538729;
case 0x53872c:c.instructions+=1;goto B53872c;
case 0x538731:goto L538731;
case 0x538732:c.instructions+=1;goto B538732;
case 0x538740:goto L538740;
case 0x538743:c.instructions+=2;goto B538743;
case 0x538745:c.instructions+=1;goto B538745;
case 0x538747:goto L538747;
case 0x53874a:c.instructions+=2;goto B53874a;
case 0x53874b:c.instructions+=1;goto B53874b;
case 0x538750:goto L538750;
case 0x538751:goto L538751;
case 0x538753:c.instructions+=2;goto B538753;
case 0x538754:c.instructions+=1;goto B538754;
case 0x538759:goto L538759;
case 0x538760:goto L538760;
case 0x538763:c.instructions+=7;goto B538763;
case 0x538764:c.instructions+=6;goto B538764;
case 0x538766:c.instructions+=5;goto B538766;
case 0x538769:c.instructions+=4;goto B538769;
case 0x53876a:c.instructions+=3;goto B53876a;
case 0x53876d:c.instructions+=2;goto B53876d;
case 0x53876f:c.instructions+=1;goto B53876f;
case 0x538775:goto L538775;
case 0x538778:c.instructions+=2;goto B538778;
case 0x53877a:c.instructions+=1;goto B53877a;
case 0x538780:goto L538780;
case 0x538783:c.instructions+=4;goto B538783;
case 0x538785:c.instructions+=3;goto B538785;
case 0x538786:c.instructions+=2;goto B538786;
case 0x538788:c.instructions+=1;goto B538788;
case 0x53878d:goto L53878d;
case 0x538793:c.instructions+=6;goto B538793;
case 0x538796:c.instructions+=5;goto B538796;
case 0x538798:c.instructions+=4;goto B538798;
case 0x53879a:c.instructions+=3;goto B53879a;
case 0x53879b:c.instructions+=2;goto B53879b;
case 0x53879c:c.instructions+=1;goto B53879c;
case 0x5387a1:goto L5387a1;
case 0x5387a4:c.instructions+=5;goto B5387a4;
case 0x5387aa:c.instructions+=4;goto B5387aa;
case 0x5387ad:c.instructions+=3;goto B5387ad;
case 0x5387af:c.instructions+=2;goto B5387af;
case 0x5387b2:c.instructions+=1;goto B5387b2;
case 0x5387b4:goto L5387b4;
case 0x5387bb:goto L5387bb;
case 0x5387be:c.instructions+=9;goto B5387be;
case 0x5387c2:c.instructions+=8;goto B5387c2;
case 0x5387c6:c.instructions+=7;goto B5387c6;
case 0x5387c9:c.instructions+=6;goto B5387c9;
case 0x5387cd:c.instructions+=5;goto B5387cd;
case 0x5387cf:c.instructions+=4;goto B5387cf;
case 0x5387d3:c.instructions+=3;goto B5387d3;
case 0x5387d7:c.instructions+=2;goto B5387d7;
case 0x5387db:c.instructions+=1;goto B5387db;
case 0x5387dd:goto L5387dd;
case 0x5387de:c.instructions+=4;goto B5387de;
case 0x5387e1:c.instructions+=3;goto B5387e1;
case 0x5387e2:c.instructions+=2;goto B5387e2;
case 0x5387e3:c.instructions+=1;goto B5387e3;
case 0x5387e5:goto L5387e5;
case 0x5387e8:c.instructions+=3;goto B5387e8;
case 0x5387e9:c.instructions+=2;goto B5387e9;
case 0x5387ea:c.instructions+=1;goto B5387ea;
case 0x5387eb:goto L5387eb;
case 0x5387f0:goto L5387f0;
case 0x5387f4:c.instructions+=5;goto B5387f4;
case 0x5387fa:c.instructions+=4;goto B5387fa;
case 0x5387fd:c.instructions+=3;goto B5387fd;
case 0x5387ff:c.instructions+=2;goto B5387ff;
case 0x538802:c.instructions+=1;goto B538802;
case 0x538808:goto L538808;
case 0x53880e:c.instructions+=3;goto B53880e;
case 0x538810:c.instructions+=2;goto B538810;
case 0x538813:c.instructions+=1;goto B538813;
case 0x538819:goto L538819;
case 0x53881c:c.instructions+=4;goto B53881c;
case 0x538822:c.instructions+=3;goto B538822;
case 0x538824:c.instructions+=2;goto B538824;
case 0x538827:c.instructions+=1;goto B538827;
case 0x538829:goto L538829;
case 0x538830:goto L538830;
case 0x538833:c.instructions+=4;goto B538833;
case 0x538839:c.instructions+=3;goto B538839;
case 0x53883b:c.instructions+=2;goto B53883b;
case 0x53883e:c.instructions+=1;goto B53883e;
case 0x538840:goto L538840;
case 0x538846:c.instructions+=2;goto B538846;
case 0x538849:c.instructions+=1;goto B538849;
case 0x53884b:goto L53884b;
case 0x53884e:goto L53884e;
case 0x538852:c.instructions+=6;goto B538852;
case 0x538858:c.instructions+=5;goto B538858;
case 0x53885e:c.instructions+=4;goto B53885e;
case 0x538864:c.instructions+=3;goto B538864;
case 0x538866:c.instructions+=2;goto B538866;
case 0x538869:c.instructions+=1;goto B538869;
case 0x53886b:goto L53886b;
case 0x53886d:c.instructions+=1;goto B53886d;
case 0x538873:goto L538873;
case 0x538879:c.instructions+=5;goto B538879;
case 0x53887c:c.instructions+=4;goto B53887c;
case 0x53887f:c.instructions+=3;goto B53887f;
case 0x538881:c.instructions+=2;goto B538881;
case 0x538887:c.instructions+=1;goto B538887;
case 0x538889:goto L538889;
case 0x53888c:c.instructions+=8;goto B53888c;
case 0x53888e:c.instructions+=7;goto B53888e;
case 0x538891:c.instructions+=6;goto B538891;
case 0x538894:c.instructions+=5;goto B538894;
case 0x538898:c.instructions+=4;goto B538898;
case 0x53889b:c.instructions+=3;goto B53889b;
case 0x53889e:c.instructions+=2;goto B53889e;
case 0x53889f:c.instructions+=1;goto B53889f;
case 0x5388a4:goto L5388a4;
case 0x5388a7:c.instructions+=4;goto B5388a7;
case 0x5388ad:c.instructions+=3;goto B5388ad;
case 0x5388b0:c.instructions+=2;goto B5388b0;
case 0x5388b3:c.instructions+=1;goto B5388b3;
case 0x5388b5:goto L5388b5;
case 0x5388b7:c.instructions+=4;goto B5388b7;
case 0x5388ba:c.instructions+=3;goto B5388ba;
case 0x5388c0:c.instructions+=2;goto B5388c0;
case 0x5388c3:c.instructions+=1;goto B5388c3;
case 0x5388c5:goto L5388c5;
case 0x5388c7:goto L5388c7;
case 0x5388c9:c.instructions+=2;goto B5388c9;
case 0x5388cb:c.instructions+=1;goto B5388cb;
case 0x5388d0:goto L5388d0;
case 0x5388d3:c.instructions+=6;goto B5388d3;
case 0x5388d6:c.instructions+=5;goto B5388d6;
case 0x5388d9:c.instructions+=4;goto B5388d9;
case 0x5388da:c.instructions+=3;goto B5388da;
case 0x5388db:c.instructions+=2;goto B5388db;
case 0x5388dc:c.instructions+=1;goto B5388dc;
case 0x5388e1:goto L5388e1;
case 0x5388e4:goto L5388e4;
case 0x5388e5:c.instructions+=3;goto B5388e5;
case 0x5388e6:c.instructions+=2;goto B5388e6;
case 0x5388e9:c.instructions+=1;goto B5388e9;
case 0x5388f0:goto L5388f0;
case 0x5388f2:c.instructions+=2;goto B5388f2;
case 0x5388f6:c.instructions+=1;goto B5388f6;
case 0x5388fb:goto L5388fb;
case 0x538900:goto L538900;
case 0x538902:c.instructions+=2;goto B538902;
case 0x538906:c.instructions+=1;goto B538906;
case 0x53890b:goto L53890b;
case 0x538910:goto L538910;
case 0x538913:c.instructions+=7;goto B538913;
case 0x538917:c.instructions+=6;goto B538917;
case 0x538918:c.instructions+=5;goto B538918;
case 0x53891c:c.instructions+=4;goto B53891c;
case 0x53891d:c.instructions+=3;goto B53891d;
case 0x538925:c.instructions+=2;goto B538925;
case 0x53892d:c.instructions+=1;goto B53892d;
case 0x538932:goto L538932;
case 0x538935:c.instructions+=1;goto B538935;
case 0x538940:goto L538940;
case 0x538941:c.instructions+=6;goto B538941;
case 0x538942:c.instructions+=5;goto B538942;
case 0x538944:c.instructions+=4;goto B538944;
case 0x538947:c.instructions+=3;goto B538947;
case 0x53894a:c.instructions+=2;goto B53894a;
case 0x53894c:c.instructions+=1;goto B53894c;
case 0x538952:goto L538952;
case 0x538955:c.instructions+=2;goto B538955;
case 0x538957:c.instructions+=1;goto B538957;
case 0x53895d:goto L53895d;
case 0x538960:c.instructions+=2;goto B538960;
case 0x538962:c.instructions+=1;goto B538962;
case 0x538964:goto L538964;
case 0x538968:c.instructions+=10;goto B538968;
case 0x53896d:c.instructions+=9;goto B53896d;
case 0x538972:c.instructions+=8;goto B538972;
case 0x538978:c.instructions+=7;goto B538978;
case 0x53897b:c.instructions+=6;goto B53897b;
case 0x53897c:c.instructions+=5;goto B53897c;
case 0x53897d:c.instructions+=4;goto B53897d;
case 0x53897e:c.instructions+=3;goto B53897e;
case 0x538980:c.instructions+=2;goto B538980;
case 0x538983:c.instructions+=1;goto B538983;
case 0x538988:goto L538988;
case 0x53898b:c.instructions+=7;goto B53898b;
case 0x53898e:c.instructions+=6;goto B53898e;
case 0x538990:c.instructions+=5;goto B538990;
case 0x538996:c.instructions+=4;goto B538996;
case 0x53899c:c.instructions+=3;goto B53899c;
case 0x53899e:c.instructions+=2;goto B53899e;
case 0x5389a1:c.instructions+=1;goto B5389a1;
case 0x5389a3:goto L5389a3;
case 0x5389ac:goto L5389ac;
case 0x5389af:c.instructions+=3;goto B5389af;
case 0x5389b0:c.instructions+=2;goto B5389b0;
case 0x5389b2:c.instructions+=1;goto B5389b2;
case 0x5389b7:goto L5389b7;
case 0x5389be:goto L5389be;
case 0x5389c1:c.instructions+=7;goto B5389c1;
case 0x5389c4:c.instructions+=6;goto B5389c4;
case 0x5389c7:c.instructions+=5;goto B5389c7;
case 0x5389c8:c.instructions+=4;goto B5389c8;
case 0x5389c9:c.instructions+=3;goto B5389c9;
case 0x5389ca:c.instructions+=2;goto B5389ca;
case 0x5389cb:c.instructions+=1;goto B5389cb;
case 0x5389d0:goto L5389d0;
case 0x5389d2:c.instructions+=3;goto B5389d2;
case 0x5389d5:c.instructions+=2;goto B5389d5;
case 0x5389d7:c.instructions+=1;goto B5389d7;
case 0x5389d9:goto L5389d9;
case 0x5389dc:c.instructions+=1;goto B5389dc;
case 0x5389de:goto L5389de;
case 0x5389e0:goto L5389e0;
case 0x5389e2:c.instructions+=1;goto B5389e2;
case 0x5389e4:goto L5389e4;
case 0x5389e7:c.instructions+=1;goto B5389e7;
case 0x5389e9:goto L5389e9;
case 0x5389eb:goto L5389eb;
case 0x5389ed:c.instructions+=1;goto B5389ed;
case 0x5389ef:goto L5389ef;
case 0x5389f0:c.instructions+=2;goto B5389f0;
case 0x5389f2:c.instructions+=1;goto B5389f2;
case 0x5389f7:goto L5389f7;
case 0x5389fa:c.instructions+=2;goto B5389fa;
case 0x5389fc:c.instructions+=1;goto B5389fc;
case 0x5389fe:goto L5389fe;
case 0x538a01:c.instructions+=1;goto B538a01;
case 0x538a03:goto L538a03;
case 0x538a09:c.instructions+=6;goto B538a09;
case 0x538a0b:c.instructions+=5;goto B538a0b;
case 0x538a0d:c.instructions+=4;goto B538a0d;
case 0x538a0e:c.instructions+=3;goto B538a0e;
case 0x538a14:c.instructions+=2;goto B538a14;
case 0x538a15:c.instructions+=1;goto B538a15;
case 0x538a1a:goto L538a1a;
case 0x538a1d:c.instructions+=1;goto B538a1d;
case 0x538a1e:goto L538a1e;
case 0x538a1f:c.instructions+=2;goto B538a1f;
case 0x538a20:c.instructions+=1;goto B538a20;
case 0x538a30:goto L538a30;
case 0x538a31:c.instructions+=9;goto B538a31;
case 0x538a32:c.instructions+=8;goto B538a32;
case 0x538a33:c.instructions+=7;goto B538a33;
case 0x538a35:c.instructions+=6;goto B538a35;
case 0x538a38:c.instructions+=5;goto B538a38;
case 0x538a3b:c.instructions+=4;goto B538a3b;
case 0x538a3c:c.instructions+=3;goto B538a3c;
case 0x538a3e:c.instructions+=2;goto B538a3e;
case 0x538a40:c.instructions+=1;goto B538a40;
case 0x538a42:goto L538a42;
case 0x538a45:c.instructions+=1;goto B538a45;
case 0x538a47:goto L538a47;
case 0x538a49:goto L538a49;
case 0x538a4d:c.instructions+=2;goto B538a4d;
case 0x538a4f:c.instructions+=1;goto B538a4f;
case 0x538a51:goto L538a51;
case 0x538a52:c.instructions+=3;goto B538a52;
case 0x538a53:c.instructions+=2;goto B538a53;
case 0x538a55:c.instructions+=1;goto B538a55;
case 0x538a5a:goto L538a5a;
case 0x538a5c:c.instructions+=1;goto B538a5c;
case 0x538a5e:goto L538a5e;
case 0x538a61:c.instructions+=1;goto B538a61;
case 0x538a63:goto L538a63;
case 0x538a65:goto L538a65;
case 0x538a68:c.instructions+=2;goto B538a68;
case 0x538a6a:c.instructions+=1;goto B538a6a;
case 0x538a6c:goto L538a6c;
case 0x538a6f:c.instructions+=1;goto B538a6f;
case 0x538a71:goto L538a71;
case 0x538a74:goto L538a74;
case 0x538a76:c.instructions+=5;goto B538a76;
case 0x538a7c:c.instructions+=4;goto B538a7c;
case 0x538a82:c.instructions+=3;goto B538a82;
case 0x538a84:c.instructions+=2;goto B538a84;
case 0x538a87:c.instructions+=1;goto B538a87;
case 0x538a89:goto L538a89;
case 0x538a92:goto L538a92;
case 0x538a98:c.instructions+=7;goto B538a98;
case 0x538a9e:c.instructions+=6;goto B538a9e;
case 0x538aa4:c.instructions+=5;goto B538aa4;
case 0x538aaa:c.instructions+=4;goto B538aaa;
case 0x538ab1:c.instructions+=3;goto B538ab1;
case 0x538ab3:c.instructions+=2;goto B538ab3;
case 0x538ab5:c.instructions+=1;goto B538ab5;
case 0x538ab7:goto L538ab7;
case 0x538aba:c.instructions+=1;goto B538aba;
case 0x538ac0:goto L538ac0;
case 0x538ac2:c.instructions+=1;goto B538ac2;
case 0x538ac4:goto L538ac4;
case 0x538ac7:c.instructions+=1;goto B538ac7;
case 0x538ac9:goto L538ac9;
case 0x538acb:goto L538acb;
case 0x538acd:c.instructions+=1;goto B538acd;
case 0x538acf:goto L538acf;
case 0x538ad0:c.instructions+=2;goto B538ad0;
case 0x538ad2:c.instructions+=1;goto B538ad2;
case 0x538ad7:goto L538ad7;
case 0x538ada:c.instructions+=2;goto B538ada;
case 0x538adc:c.instructions+=1;goto B538adc;
case 0x538ade:goto L538ade;
case 0x538ae1:c.instructions+=1;goto B538ae1;
case 0x538ae3:goto L538ae3;
case 0x538ae5:c.instructions+=1;goto B538ae5;
case 0x538ae7:goto L538ae7;
case 0x538aeb:c.instructions+=2;goto B538aeb;
case 0x538aed:c.instructions+=1;goto B538aed;
case 0x538aef:goto L538aef;
case 0x538af0:c.instructions+=1;goto B538af0;
case 0x538af2:goto L538af2;
case 0x538af4:c.instructions+=2;goto B538af4;
case 0x538af6:c.instructions+=1;goto B538af6;
case 0x538af8:goto L538af8;
case 0x538afb:c.instructions+=1;goto B538afb;
case 0x538afd:goto L538afd;
case 0x538aff:goto L538aff;
case 0x538b00:goto L538b00;
case 0x538b02:c.instructions+=2;goto B538b02;
case 0x538b04:c.instructions+=1;goto B538b04;
case 0x538b07:goto L538b07;
case 0x538b0d:c.instructions+=7;goto B538b0d;
case 0x538b10:c.instructions+=6;goto B538b10;
case 0x538b11:c.instructions+=5;goto B538b11;
case 0x538b12:c.instructions+=4;goto B538b12;
case 0x538b13:c.instructions+=3;goto B538b13;
case 0x538b15:c.instructions+=2;goto B538b15;
case 0x538b18:c.instructions+=1;goto B538b18;
case 0x538b1d:goto L538b1d;
case 0x538b1e:c.instructions+=4;goto B538b1e;
case 0x538b1f:c.instructions+=3;goto B538b1f;
case 0x538b20:c.instructions+=2;goto B538b20;
case 0x538b21:c.instructions+=1;goto B538b21;
case 0x538b30:goto L538b30;
case 0x538b31:c.instructions+=8;goto B538b31;
case 0x538b32:c.instructions+=7;goto B538b32;
case 0x538b33:c.instructions+=6;goto B538b33;
case 0x538b35:c.instructions+=5;goto B538b35;
case 0x538b38:c.instructions+=4;goto B538b38;
case 0x538b3a:c.instructions+=3;goto B538b3a;
case 0x538b3d:c.instructions+=2;goto B538b3d;
case 0x538b44:c.instructions+=1;goto B538b44;
case 0x538b46:goto L538b46;
case 0x538b49:c.instructions+=1;goto B538b49;
case 0x538b4b:goto L538b4b;
case 0x538b4d:c.instructions+=1;goto B538b4d;
case 0x538b50:goto L538b50;
case 0x538b52:c.instructions+=1;goto B538b52;
case 0x538b54:goto L538b54;
case 0x538b57:c.instructions+=1;goto B538b57;
case 0x538b59:goto L538b59;
case 0x538b5b:goto L538b5b;
case 0x538b5d:c.instructions+=1;goto B538b5d;
case 0x538b5f:goto L538b5f;
case 0x538b60:c.instructions+=2;goto B538b60;
case 0x538b62:c.instructions+=1;goto B538b62;
case 0x538b67:goto L538b67;
case 0x538b6a:c.instructions+=2;goto B538b6a;
case 0x538b6c:c.instructions+=1;goto B538b6c;
case 0x538b6e:goto L538b6e;
case 0x538b71:c.instructions+=1;goto B538b71;
case 0x538b73:goto L538b73;
case 0x538b74:c.instructions+=3;goto B538b74;
case 0x538b75:c.instructions+=2;goto B538b75;
case 0x538b76:c.instructions+=1;goto B538b76;
case 0x538b80:goto L538b80;
case 0x538b81:c.instructions+=3;goto B538b81;
case 0x538b83:c.instructions+=2;goto B538b83;
case 0x538b86:c.instructions+=1;goto B538b86;
case 0x538b8b:goto L538b8b;
case 0x538b8e:c.instructions+=3;goto B538b8e;
case 0x538b91:c.instructions+=2;goto B538b91;
case 0x538b94:c.instructions+=1;goto B538b94;
case 0x538b96:goto L538b96;
case 0x538b9d:c.instructions+=1;goto B538b9d;
case 0x538ba4:goto L538ba4;
case 0x538ba7:c.instructions+=4;goto B538ba7;
case 0x538ba9:c.instructions+=3;goto B538ba9;
case 0x538bab:c.instructions+=2;goto B538bab;
case 0x538bad:c.instructions+=1;goto B538bad;
case 0x538baf:goto L538baf;
case 0x538bb4:goto L538bb4;
case 0x538bb6:c.instructions+=2;goto B538bb6;
case 0x538bb7:c.instructions+=1;goto B538bb7;
case 0x538bb8:goto L538bb8;
case 0x538bbb:c.instructions+=4;goto B538bbb;
case 0x538bbd:c.instructions+=3;goto B538bbd;
case 0x538bbf:c.instructions+=2;goto B538bbf;
case 0x538bc1:c.instructions+=1;goto B538bc1;
case 0x538bc3:goto L538bc3;
case 0x538bc8:goto L538bc8;
case 0x538bca:c.instructions+=2;goto B538bca;
case 0x538bcb:c.instructions+=1;goto B538bcb;
case 0x538bcc:goto L538bcc;
case 0x538bd1:goto L538bd1;
case 0x538bd3:c.instructions+=2;goto B538bd3;
case 0x538bd4:c.instructions+=1;goto B538bd4;
case 0x538bd5:goto L538bd5;
case 0x538bd7:c.instructions+=2;goto B538bd7;
case 0x538bd8:c.instructions+=1;goto B538bd8;
case 0x538c00:goto L538c00;
case 0x538c01:c.instructions+=4;goto B538c01;
case 0x538c02:c.instructions+=3;goto B538c02;
case 0x538c07:c.instructions+=2;goto B538c07;
case 0x538c09:c.instructions+=1;goto B538c09;
case 0x538c0e:goto L538c0e;
case 0x538c11:c.instructions+=2;goto B538c11;
case 0x538c14:c.instructions+=1;goto B538c14;
case 0x538c19:goto L538c19;
case 0x538c1c:c.instructions+=2;goto B538c1c;
case 0x538c1e:c.instructions+=1;goto B538c1e;
case 0x538c20:goto L538c20;
case 0x538c21:c.instructions+=1;goto B538c21;
case 0x538c26:goto L538c26;
case 0x538c29:c.instructions+=2;goto B538c29;
case 0x538c2b:c.instructions+=1;goto B538c2b;
case 0x538c2d:goto L538c2d;
case 0x538c32:c.instructions+=2;goto B538c32;
case 0x538c34:c.instructions+=1;goto B538c34;
case 0x538c39:goto L538c39;
case 0x538c3b:c.instructions+=1;goto B538c3b;
case 0x538c3d:goto L538c3d;
case 0x538c42:c.instructions+=2;goto B538c42;
case 0x538c44:c.instructions+=1;goto B538c44;
case 0x538c46:goto L538c46;
case 0x538c49:c.instructions+=3;goto B538c49;
case 0x538c4a:c.instructions+=2;goto B538c4a;
case 0x538c4f:c.instructions+=1;goto B538c4f;
case 0x538c54:goto L538c54;
case 0x538c56:c.instructions+=2;goto B538c56;
case 0x538c58:c.instructions+=1;goto B538c58;
case 0x538c5a:goto L538c5a;
case 0x538c5d:c.instructions+=2;goto B538c5d;
case 0x538c5f:c.instructions+=1;goto B538c5f;
case 0x538c61:goto L538c61;
case 0x538c66:goto L538c66;
case 0x538c69:c.instructions+=1;goto B538c69;
case 0x538c6b:goto L538c6b;
case 0x538c6e:c.instructions+=2;goto B538c6e;
case 0x538c70:c.instructions+=1;goto B538c70;
case 0x538c72:goto L538c72;
case 0x538c73:c.instructions+=2;goto B538c73;
case 0x538c74:c.instructions+=1;goto B538c74;
case 0x538c75:goto L538c75;
case 0x538c77:c.instructions+=1;goto B538c77;
case 0x538c79:goto L538c79;
case 0x538c7c:c.instructions+=1;goto B538c7c;
case 0x538c7e:goto L538c7e;
case 0x538c80:c.instructions+=2;goto B538c80;
case 0x538c83:c.instructions+=1;goto B538c83;
case 0x538c88:goto L538c88;
case 0x538c8b:c.instructions+=1;goto B538c8b;
case 0x538c92:goto L538c92;
case 0x538c99:goto L538c99;
case 0x538c9a:c.instructions+=2;goto B538c9a;
case 0x538c9b:c.instructions+=1;goto B538c9b;
case 0x538ca0:goto L538ca0;
case 0x538ca1:c.instructions+=4;goto B538ca1;
case 0x538ca2:c.instructions+=3;goto B538ca2;
case 0x538ca7:c.instructions+=2;goto B538ca7;
case 0x538ca9:c.instructions+=1;goto B538ca9;
case 0x538cae:goto L538cae;
case 0x538cb4:c.instructions+=3;goto B538cb4;
case 0x538cb7:c.instructions+=2;goto B538cb7;
case 0x538cb9:c.instructions+=1;goto B538cb9;
case 0x538cbb:goto L538cbb;
case 0x538cbe:c.instructions+=3;goto B538cbe;
case 0x538cbf:c.instructions+=2;goto B538cbf;
case 0x538cc3:c.instructions+=1;goto B538cc3;
case 0x538cc8:goto L538cc8;
case 0x538ccb:c.instructions+=10;goto B538ccb;
case 0x538cce:c.instructions+=9;goto B538cce;
case 0x538ccf:c.instructions+=8;goto B538ccf;
case 0x538cd0:c.instructions+=7;goto B538cd0;
case 0x538cd1:c.instructions+=6;goto B538cd1;
case 0x538cd4:c.instructions+=5;goto B538cd4;
case 0x538cd7:c.instructions+=4;goto B538cd7;
case 0x538cda:c.instructions+=3;goto B538cda;
case 0x538cdb:c.instructions+=2;goto B538cdb;
case 0x538ce0:c.instructions+=1;goto B538ce0;
case 0x538ce5:goto L538ce5;
case 0x538ce8:c.instructions+=1;goto B538ce8;
case 0x538cef:goto L538cef;
case 0x538cf2:c.instructions+=1;goto B538cf2;
case 0x538cf7:goto L538cf7;
case 0x538cfa:c.instructions+=2;goto B538cfa;
case 0x538cfc:c.instructions+=1;goto B538cfc;
case 0x538cfe:goto L538cfe;
case 0x538cff:c.instructions+=1;goto B538cff;
case 0x538d04:goto L538d04;
case 0x538d07:c.instructions+=2;goto B538d07;
case 0x538d09:c.instructions+=1;goto B538d09;
case 0x538d0b:goto L538d0b;
case 0x538d10:c.instructions+=2;goto B538d10;
case 0x538d12:c.instructions+=1;goto B538d12;
case 0x538d17:goto L538d17;
case 0x538d19:c.instructions+=1;goto B538d19;
case 0x538d1b:goto L538d1b;
case 0x538d20:c.instructions+=2;goto B538d20;
case 0x538d22:c.instructions+=1;goto B538d22;
case 0x538d24:goto L538d24;
case 0x538d27:c.instructions+=3;goto B538d27;
case 0x538d28:c.instructions+=2;goto B538d28;
case 0x538d2d:c.instructions+=1;goto B538d2d;
case 0x538d32:goto L538d32;
case 0x538d34:c.instructions+=2;goto B538d34;
case 0x538d36:c.instructions+=1;goto B538d36;
case 0x538d38:goto L538d38;
case 0x538d3b:c.instructions+=2;goto B538d3b;
case 0x538d3d:c.instructions+=1;goto B538d3d;
case 0x538d3f:goto L538d3f;
case 0x538d44:goto L538d44;
case 0x538d47:c.instructions+=1;goto B538d47;
case 0x538d49:goto L538d49;
case 0x538d4c:c.instructions+=2;goto B538d4c;
case 0x538d4e:c.instructions+=1;goto B538d4e;
case 0x538d50:goto L538d50;
case 0x538d51:c.instructions+=2;goto B538d51;
case 0x538d52:c.instructions+=1;goto B538d52;
case 0x538d53:goto L538d53;
case 0x538d55:c.instructions+=1;goto B538d55;
case 0x538d57:goto L538d57;
case 0x538d5a:c.instructions+=1;goto B538d5a;
case 0x538d5c:goto L538d5c;
case 0x538d5e:c.instructions+=2;goto B538d5e;
case 0x538d61:c.instructions+=1;goto B538d61;
case 0x538d66:goto L538d66;
case 0x538d69:c.instructions+=1;goto B538d69;
case 0x538d70:goto L538d70;
case 0x538d77:goto L538d77;
case 0x538d78:c.instructions+=2;goto B538d78;
case 0x538d79:c.instructions+=1;goto B538d79;
case 0x538d80:goto L538d80;
case 0x538d81:c.instructions+=5;goto B538d81;
case 0x538d83:c.instructions+=4;goto B538d83;
case 0x538d86:c.instructions+=3;goto B538d86;
case 0x538d89:c.instructions+=2;goto B538d89;
case 0x538d8c:c.instructions+=1;goto B538d8c;
case 0x538d8e:goto L538d8e;
case 0x538d95:c.instructions+=1;goto B538d95;
case 0x538d9c:goto L538d9c;
case 0x538d9f:c.instructions+=3;goto B538d9f;
case 0x538da4:c.instructions+=2;goto B538da4;
case 0x538da6:c.instructions+=1;goto B538da6;
case 0x538da8:goto L538da8;
case 0x538dab:c.instructions+=1;goto B538dab;
case 0x538dad:goto L538dad;
case 0x538db1:c.instructions+=1;goto B538db1;
case 0x538db3:goto L538db3;
case 0x538db7:c.instructions+=3;goto B538db7;
case 0x538db9:c.instructions+=2;goto B538db9;
case 0x538dbf:c.instructions+=1;goto B538dbf;
case 0x538dc1:goto L538dc1;
case 0x538dc2:c.instructions+=2;goto B538dc2;
case 0x538dc5:c.instructions+=1;goto B538dc5;
case 0x538dc6:goto L538dc6;
case 0x538dc8:goto L538dc8;
case 0x538dca:c.instructions+=7;goto B538dca;
case 0x538dcb:c.instructions+=6;goto B538dcb;
case 0x538dcc:c.instructions+=5;goto B538dcc;
case 0x538dd1:c.instructions+=4;goto B538dd1;
case 0x538dd3:c.instructions+=3;goto B538dd3;
case 0x538dd4:c.instructions+=2;goto B538dd4;
case 0x538dd6:c.instructions+=1;goto B538dd6;
case 0x538dd8:goto L538dd8;
case 0x538dda:c.instructions+=5;goto B538dda;
case 0x538ddb:c.instructions+=4;goto B538ddb;
case 0x538de0:c.instructions+=3;goto B538de0;
case 0x538de2:c.instructions+=2;goto B538de2;
case 0x538de4:c.instructions+=1;goto B538de4;
case 0x538de6:goto L538de6;
case 0x538ded:c.instructions+=1;goto B538ded;
case 0x538def:goto L538def;
case 0x538df6:goto L538df6;
case 0x538df9:c.instructions+=5;goto B538df9;
case 0x538dfc:c.instructions+=4;goto B538dfc;
case 0x538dfd:c.instructions+=3;goto B538dfd;
case 0x538e02:c.instructions+=2;goto B538e02;
case 0x538e03:c.instructions+=1;goto B538e03;
case 0x538e08:goto L538e08;
case 0x538e0b:c.instructions+=5;goto B538e0b;
case 0x538e0e:c.instructions+=4;goto B538e0e;
case 0x538e0f:c.instructions+=3;goto B538e0f;
case 0x538e14:c.instructions+=2;goto B538e14;
case 0x538e15:c.instructions+=1;goto B538e15;
case 0x538e1a:goto L538e1a;
case 0x538e1e:c.instructions+=5;goto B538e1e;
case 0x538e21:c.instructions+=4;goto B538e21;
case 0x538e22:c.instructions+=3;goto B538e22;
case 0x538e27:c.instructions+=2;goto B538e27;
case 0x538e28:c.instructions+=1;goto B538e28;
case 0x538e2d:goto L538e2d;
case 0x538e31:c.instructions+=3;goto B538e31;
case 0x538e34:c.instructions+=2;goto B538e34;
case 0x538e36:c.instructions+=1;goto B538e36;
case 0x538e38:goto L538e38;
case 0x538e3b:c.instructions+=1;goto B538e3b;
case 0x538e3d:goto L538e3d;
case 0x538e41:c.instructions+=4;goto B538e41;
case 0x538e43:c.instructions+=3;goto B538e43;
case 0x538e48:c.instructions+=2;goto B538e48;
case 0x538e49:c.instructions+=1;goto B538e49;
case 0x538e4e:goto L538e4e;
case 0x538e51:goto L538e51;
case 0x538e52:c.instructions+=1;goto B538e52;
case 0x538e70:goto L538e70;
case 0x538e74:c.instructions+=6;goto B538e74;
case 0x538e75:c.instructions+=5;goto B538e75;
case 0x538e7a:c.instructions+=4;goto B538e7a;
case 0x538e7c:c.instructions+=3;goto B538e7c;
case 0x538e7d:c.instructions+=2;goto B538e7d;
case 0x538e7e:c.instructions+=1;goto B538e7e;
case 0x538e84:goto L538e84;
case 0x538e87:c.instructions+=4;goto B538e87;
case 0x538e8b:c.instructions+=3;goto B538e8b;
case 0x538e8e:c.instructions+=2;goto B538e8e;
case 0x538e8f:c.instructions+=1;goto B538e8f;
case 0x538e91:goto L538e91;
case 0x538e94:c.instructions+=5;goto B538e94;
case 0x538e95:c.instructions+=4;goto B538e95;
case 0x538e97:c.instructions+=3;goto B538e97;
case 0x538e9a:c.instructions+=2;goto B538e9a;
case 0x538e9d:c.instructions+=1;goto B538e9d;
case 0x538ea3:goto L538ea3;
case 0x538ea4:c.instructions+=7;goto B538ea4;
case 0x538ea7:c.instructions+=6;goto B538ea7;
case 0x538ea8:c.instructions+=5;goto B538ea8;
case 0x538ea9:c.instructions+=4;goto B538ea9;
case 0x538eac:c.instructions+=3;goto B538eac;
case 0x538ead:c.instructions+=2;goto B538ead;
case 0x538eb1:c.instructions+=1;goto B538eb1;
case 0x538eb6:goto L538eb6;
case 0x538eb9:c.instructions+=1;goto B538eb9;
case 0x538ebf:goto L538ebf;
case 0x538ec2:c.instructions+=7;goto B538ec2;
case 0x538ec5:c.instructions+=6;goto B538ec5;
case 0x538ec6:c.instructions+=5;goto B538ec6;
case 0x538ec7:c.instructions+=4;goto B538ec7;
case 0x538eca:c.instructions+=3;goto B538eca;
case 0x538ecd:c.instructions+=2;goto B538ecd;
case 0x538ecf:c.instructions+=1;goto B538ecf;
case 0x538ed5:goto L538ed5;
case 0x538edc:c.instructions+=1;goto B538edc;
case 0x538ee3:goto L538ee3;
case 0x538ee6:c.instructions+=1;goto B538ee6;
case 0x538eec:goto L538eec;
case 0x538eed:c.instructions+=7;goto B538eed;
case 0x538ef0:c.instructions+=6;goto B538ef0;
case 0x538ef1:c.instructions+=5;goto B538ef1;
case 0x538ef2:c.instructions+=4;goto B538ef2;
case 0x538ef5:c.instructions+=3;goto B538ef5;
case 0x538ef6:c.instructions+=2;goto B538ef6;
case 0x538efa:c.instructions+=1;goto B538efa;
case 0x538eff:goto L538eff;
case 0x538f02:goto L538f02;
case 0x538f04:goto L538f04;
case 0x538f05:c.instructions+=7;goto B538f05;
case 0x538f08:c.instructions+=6;goto B538f08;
case 0x538f09:c.instructions+=5;goto B538f09;
case 0x538f0a:c.instructions+=4;goto B538f0a;
case 0x538f0d:c.instructions+=3;goto B538f0d;
case 0x538f0e:c.instructions+=2;goto B538f0e;
case 0x538f12:c.instructions+=1;goto B538f12;
case 0x538f17:goto L538f17;
case 0x538f1a:c.instructions+=1;goto B538f1a;
case 0x538f1c:goto L538f1c;
case 0x538f20:c.instructions+=3;goto B538f20;
case 0x538f22:c.instructions+=2;goto B538f22;
case 0x538f27:c.instructions+=1;goto B538f27;
case 0x538f29:goto L538f29;
case 0x538f2a:c.instructions+=2;goto B538f2a;
case 0x538f2d:c.instructions+=1;goto B538f2d;
case 0x538f2e:goto L538f2e;
case 0x538f30:goto L538f30;
case 0x538f32:c.instructions+=5;goto B538f32;
case 0x538f33:c.instructions+=4;goto B538f33;
case 0x538f38:c.instructions+=3;goto B538f38;
case 0x538f3a:c.instructions+=2;goto B538f3a;
case 0x538f3c:c.instructions+=1;goto B538f3c;
case 0x538f3e:goto L538f3e;
case 0x538f40:c.instructions+=5;goto B538f40;
case 0x538f41:c.instructions+=4;goto B538f41;
case 0x538f46:c.instructions+=3;goto B538f46;
case 0x538f48:c.instructions+=2;goto B538f48;
case 0x538f4a:c.instructions+=1;goto B538f4a;
case 0x538f4c:goto L538f4c;
case 0x538f4d:c.instructions+=7;goto B538f4d;
case 0x538f50:c.instructions+=6;goto B538f50;
case 0x538f51:c.instructions+=5;goto B538f51;
case 0x538f52:c.instructions+=4;goto B538f52;
case 0x538f55:c.instructions+=3;goto B538f55;
case 0x538f56:c.instructions+=2;goto B538f56;
case 0x538f5a:c.instructions+=1;goto B538f5a;
case 0x538f5f:goto L538f5f;
case 0x538f63:c.instructions+=3;goto B538f63;
case 0x538f67:c.instructions+=2;goto B538f67;
case 0x538f6b:c.instructions+=1;goto B538f6b;
case 0x538f6d:goto L538f6d;
case 0x538f73:goto L538f73;
case 0x538f74:c.instructions+=6;goto B538f74;
case 0x538f77:c.instructions+=5;goto B538f77;
case 0x538f78:c.instructions+=4;goto B538f78;
case 0x538f79:c.instructions+=3;goto B538f79;
case 0x538f7a:c.instructions+=2;goto B538f7a;
case 0x538f7e:c.instructions+=1;goto B538f7e;
case 0x538f83:goto L538f83;
case 0x538f86:c.instructions+=1;goto B538f86;
case 0x538f8c:goto L538f8c;
case 0x538f8f:c.instructions+=3;goto B538f8f;
case 0x538f93:c.instructions+=2;goto B538f93;
case 0x538f96:c.instructions+=1;goto B538f96;
case 0x538f98:goto L538f98;
case 0x538f9b:c.instructions+=5;goto B538f9b;
case 0x538f9c:c.instructions+=4;goto B538f9c;
case 0x538f9e:c.instructions+=3;goto B538f9e;
case 0x538fa0:c.instructions+=2;goto B538fa0;
case 0x538fa3:c.instructions+=1;goto B538fa3;
case 0x538fa9:goto L538fa9;
case 0x538fad:c.instructions+=6;goto B538fad;
case 0x538fae:c.instructions+=5;goto B538fae;
case 0x538faf:c.instructions+=4;goto B538faf;
case 0x538fb6:c.instructions+=3;goto B538fb6;
case 0x538fb7:c.instructions+=2;goto B538fb7;
case 0x538fbb:c.instructions+=1;goto B538fbb;
case 0x538fc0:goto L538fc0;
case 0x538fc3:c.instructions+=1;goto B538fc3;
case 0x538fc9:goto L538fc9;
case 0x538fcc:c.instructions+=5;goto B538fcc;
case 0x538fcd:c.instructions+=4;goto B538fcd;
case 0x538fcf:c.instructions+=3;goto B538fcf;
case 0x538fd1:c.instructions+=2;goto B538fd1;
case 0x538fd4:c.instructions+=1;goto B538fd4;
case 0x538fda:goto L538fda;
case 0x538fdd:c.instructions+=3;goto B538fdd;
case 0x538fde:c.instructions+=2;goto B538fde;
case 0x538fe1:c.instructions+=1;goto B538fe1;
case 0x538fe7:goto L538fe7;
case 0x538fee:c.instructions+=1;goto B538fee;
case 0x538ff5:goto L538ff5;
case 0x538ff9:c.instructions+=3;goto B538ff9;
case 0x538ffa:c.instructions+=2;goto B538ffa;
case 0x538ffb:c.instructions+=1;goto B538ffb;
default:missing_instruction(c.pc);}
B538005:L538005:{c.instructions+=3;NFSU2_TR(0x538005);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+4),(U+0),4);
}
B538007:{NFSU2_TR(0x538007);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B538009:{NFSU2_TR(0x538009);
if(r1(R+518)){{goto L538035;}}
}
B53800b:L53800b:{c.instructions+=3;NFSU2_TR(0x53800b);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B53800d:{NFSU2_TR(0x53800d);
u8 U[6];
__builtin_memmove((U+0),gp(u32(r4(R+4))),2);
__builtin_memmove((U+2),(U+0),2);
w2(U+4,u16(u32(r2(U+2))-u32(r2(R+0))));
w1(R+518,u8((r2(U+4))==(u16(0x0ull))));
}
B538010:{NFSU2_TR(0x538010);
if(r1(R+518)){{goto L53801a;}}
}
B538012:L538012:{c.instructions+=3;NFSU2_TR(0x538012);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B538013:{NFSU2_TR(0x538013);
u8 U[14];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),2);
__builtin_memmove((U+10),(U+8),2);
w2(U+12,u16(u32(r2(U+10))-u32(u16(0x0ull))));
w1(R+518,u8((r2(U+12))==(u16(0x0ull))));
}
B538018:{NFSU2_TR(0x538018);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x538012u);}goto L538012;}}
}
B53801a:L53801a:{c.instructions+=3;NFSU2_TR(0x53801a);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B53801b:{NFSU2_TR(0x53801b);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B53801d:{NFSU2_TR(0x53801d);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L538027;}}
}
B53801f:L53801f:{c.instructions+=3;NFSU2_TR(0x53801f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B538020:{NFSU2_TR(0x538020);
__builtin_memmove((R+4),(R+24),4);
}
B538022:{NFSU2_TR(0x538022);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x538027ull));
TAIL_STATIC(0x51de90u,51d);
}
B538027:L538027:{c.instructions+=5;NFSU2_TR(0x538027);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B538029:{NFSU2_TR(0x538029);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B53802b:{NFSU2_TR(0x53802b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53802c:{NFSU2_TR(0x53802c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53802d:{NFSU2_TR(0x53802d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x538032ull));
TAIL_STATIC(0x511630u,511);
}
B538032:L538032:{c.instructions+=1;NFSU2_TR(0x538032);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B538035:L538035:{c.instructions+=4;NFSU2_TR(0x538035);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B538037:{NFSU2_TR(0x538037);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B538039:{NFSU2_TR(0x538039);
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
B53803b:{NFSU2_TR(0x53803b);
if(r1(R+518)){{goto L53804a;}}
}
B53803d:L53803d:{c.instructions+=2;NFSU2_TR(0x53803d);
u8 U[10];
__builtin_memmove((U+0),gp(u32(r4(R+4))),2);
__builtin_memmove((U+6),(U+0),2);
w1(R+512,u8((r2(U+6))<(r2(R+0))));
w1(R+523,sborrow<u16>(r2(U+6),r2(R+0)));
w2(U+8,u16(u32(r2(U+6))-u32(r2(R+0))));
w1(R+519,u8(s16(r2(U+8))<s16(u16(0x0ull))));
w1(R+518,u8((r2(U+8))==(u16(0x0ull))));
w2(U+2,u16(u32(r2(U+8))&u32(u16(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r2(U+2)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B538040:{NFSU2_TR(0x538040);
if(r1(R+518)){{goto L53804a;}}
}
B538042:L538042:{c.instructions+=3;NFSU2_TR(0x538042);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B538043:{NFSU2_TR(0x538043);
u8 U[18];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),2);
__builtin_memmove((U+14),(U+8),2);
w1(R+512,u8((r2(U+14))<(u16(0x0ull))));
w1(R+523,sborrow<u16>(r2(U+14),u16(0x0ull)));
w2(U+16,u16(u32(r2(U+14))-u32(u16(0x0ull))));
w1(R+519,u8(s16(r2(U+16))<s16(u16(0x0ull))));
w1(R+518,u8((r2(U+16))==(u16(0x0ull))));
w2(U+10,u16(u32(r2(U+16))&u32(u16(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r2(U+10)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B538048:{NFSU2_TR(0x538048);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x538042u);}goto L538042;}}
}
B53804a:L53804a:{c.instructions+=5;NFSU2_TR(0x53804a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53804d:{NFSU2_TR(0x53804d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B53804e:{NFSU2_TR(0x53804e);
__builtin_memmove((R+0),(R+24),4);
}
B538050:{NFSU2_TR(0x538050);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B538051:{NFSU2_TR(0x538051);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B538060:L538060:{c.instructions+=10;NFSU2_TR(0x538060);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B538063:{NFSU2_TR(0x538063);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B538066:{NFSU2_TR(0x538066);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B538067:{NFSU2_TR(0x538067);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B53806a:{NFSU2_TR(0x53806a);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B53806d:{NFSU2_TR(0x53806d);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53806e:{NFSU2_TR(0x53806e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53806f:{NFSU2_TR(0x53806f);
u8 U[4];
w4(U+0,u32(0x7949b4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B538074:{NFSU2_TR(0x538074);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B538075:{NFSU2_TR(0x538075);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53807aull));
TAIL_STATIC(0x537be0u,537);
}
B53807a:L53807a:{c.instructions+=2;NFSU2_TR(0x53807a);
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
B53807d:{NFSU2_TR(0x53807d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B538080:L538080:{c.instructions+=8;NFSU2_TR(0x538080);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B538081:{NFSU2_TR(0x538081);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B538085:{NFSU2_TR(0x538085);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B538086:{NFSU2_TR(0x538086);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B53808a:{NFSU2_TR(0x53808a);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B53808c:{NFSU2_TR(0x53808c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53808d:{NFSU2_TR(0x53808d);
__builtin_memmove((R+8),(R+4),4);
}
B53808f:{NFSU2_TR(0x53808f);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L538109;}}
}
B538091:L538091:{c.instructions+=2;NFSU2_TR(0x538091);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B538093:{NFSU2_TR(0x538093);
if(r1(R+518)){{goto L538109;}}
}
B538095:L538095:{c.instructions+=3;NFSU2_TR(0x538095);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B538098:{NFSU2_TR(0x538098);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B538099:{NFSU2_TR(0x538099);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53809eull));
TAIL_STATIC(0x50ca50u,50c);
}
B53809e:L53809e:{c.instructions+=4;NFSU2_TR(0x53809e);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5380a2:{NFSU2_TR(0x5380a2);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5380a5:{NFSU2_TR(0x5380a5);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5380a7:{NFSU2_TR(0x5380a7);
if(r1(R+518)){{goto L5380b4;}}
}
B5380a9:L5380a9:{c.instructions+=3;NFSU2_TR(0x5380a9);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5380ac:{NFSU2_TR(0x5380ac);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5380ad:{NFSU2_TR(0x5380ad);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5380b2ull));
TAIL_STATIC(0x50ca50u,50c);
}
B5380b2:L5380b2:{c.instructions+=1;NFSU2_TR(0x5380b2);
{goto L5380bd;}
}
B5380b4:L5380b4:{c.instructions+=3;NFSU2_TR(0x5380b4);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5380b7:{NFSU2_TR(0x5380b7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5380b8:{NFSU2_TR(0x5380b8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5380bdull));
TAIL_STATIC(0x50ca00u,50c);
}
B5380bd:L5380bd:{c.instructions+=4;NFSU2_TR(0x5380bd);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5380c0:{NFSU2_TR(0x5380c0);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5380c3:{NFSU2_TR(0x5380c3);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5380c4:{NFSU2_TR(0x5380c4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5380c9ull));
TAIL_STATIC(0x50ca50u,50c);
}
B5380c9:L5380c9:{c.instructions+=3;NFSU2_TR(0x5380c9);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5380cc:{NFSU2_TR(0x5380cc);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5380cd:{NFSU2_TR(0x5380cd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5380d2ull));
TAIL_STATIC(0x50ca50u,50c);
}
B5380d2:L5380d2:{c.instructions+=3;NFSU2_TR(0x5380d2);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5380d5:{NFSU2_TR(0x5380d5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5380d6:{NFSU2_TR(0x5380d6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5380dbull));
TAIL_STATIC(0x50ca50u,50c);
}
B5380db:L5380db:{c.instructions+=3;NFSU2_TR(0x5380db);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5380de:{NFSU2_TR(0x5380de);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5380df:{NFSU2_TR(0x5380df);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5380e4ull));
TAIL_STATIC(0x50ca50u,50c);
}
B5380e4:L5380e4:{c.instructions+=8;NFSU2_TR(0x5380e4);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5380e7:{NFSU2_TR(0x5380e7);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B5380ea:{NFSU2_TR(0x5380ea);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5380ec:{NFSU2_TR(0x5380ec);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5380ed:{NFSU2_TR(0x5380ed);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5380ee:{NFSU2_TR(0x5380ee);
__builtin_memmove((R+4),(R+8),4);
}
B5380f0:{NFSU2_TR(0x5380f0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5380f1:{NFSU2_TR(0x5380f1);
if(r1(R+518)){{goto L5380fe;}}
}
B5380f3:L5380f3:{c.instructions+=1;NFSU2_TR(0x5380f3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5380f8ull));
TAIL_STATIC(0x52e200u,52e);
}
B5380f8:L5380f8:{c.instructions+=4;NFSU2_TR(0x5380f8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5380f9:{NFSU2_TR(0x5380f9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5380fa:{NFSU2_TR(0x5380fa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5380fb:{NFSU2_TR(0x5380fb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5380fe:L5380fe:{c.instructions+=1;NFSU2_TR(0x5380fe);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x538103ull));
TAIL_STATIC(0x52e320u,52e);
}
B538103:L538103:{c.instructions+=4;NFSU2_TR(0x538103);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B538104:{NFSU2_TR(0x538104);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B538105:{NFSU2_TR(0x538105);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B538106:{NFSU2_TR(0x538106);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B538109:L538109:{c.instructions+=3;NFSU2_TR(0x538109);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B53810c:{NFSU2_TR(0x53810c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53810d:{NFSU2_TR(0x53810d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x538112ull));
TAIL_STATIC(0x50ca00u,50c);
}
B538112:L538112:{c.instructions+=3;NFSU2_TR(0x538112);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B538115:{NFSU2_TR(0x538115);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B538116:{NFSU2_TR(0x538116);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53811bull));
TAIL_STATIC(0x50ca00u,50c);
}
B53811b:L53811b:{c.instructions+=3;NFSU2_TR(0x53811b);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B53811e:{NFSU2_TR(0x53811e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53811f:{NFSU2_TR(0x53811f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x538124ull));
TAIL_STATIC(0x50ca00u,50c);
}
B538124:L538124:{c.instructions+=5;NFSU2_TR(0x538124);
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
B538127:{NFSU2_TR(0x538127);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B538128:{NFSU2_TR(0x538128);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B538129:{NFSU2_TR(0x538129);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B53812a:{NFSU2_TR(0x53812a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B538130:L538130:{c.instructions+=7;NFSU2_TR(0x538130);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x8ull))));
}
B538133:{NFSU2_TR(0x538133);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B538134:{NFSU2_TR(0x538134);
__builtin_memmove((R+24),(R+4),4);
}
B538136:{NFSU2_TR(0x538136);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B538139:{NFSU2_TR(0x538139);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B53813b:{NFSU2_TR(0x53813b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3cull))));
w4(U+4,u32(0xfffffff7ull));
s4(u32(r4(U+0)),r4(U+4));
}
B538142:{NFSU2_TR(0x538142);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5381f3;}}
}
B538148:L538148:{c.instructions+=3;NFSU2_TR(0x538148);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B53814b:{NFSU2_TR(0x53814b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53814c:{NFSU2_TR(0x53814c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x538151ull));
TAIL_STATIC(0x52d100u,52d);
}
B538151:L538151:{c.instructions+=3;NFSU2_TR(0x538151);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B538154:{NFSU2_TR(0x538154);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B538156:{NFSU2_TR(0x538156);
if(r1(R+518)){{goto L5381bd;}}
}
B538158:L538158:{c.instructions+=14;NFSU2_TR(0x538158);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B53815b:{NFSU2_TR(0x53815b);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B53815f:{NFSU2_TR(0x53815f);
{u32 ea_=u32(u32(8872916u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B538165:{NFSU2_TR(0x538165);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B538169:{NFSU2_TR(0x538169);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53816a:{NFSU2_TR(0x53816a);
{u32 ea_=u32(u32(7961936u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B538170:{NFSU2_TR(0x538170);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B538174:{NFSU2_TR(0x538174);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B538175:{NFSU2_TR(0x538175);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B538176:{NFSU2_TR(0x538176);
{u32 ea_=u32(r4(R+24)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B538179:{NFSU2_TR(0x538179);
{u32 ea_=u32(u32(8872920u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B53817f:{NFSU2_TR(0x53817f);
{u32 ea_=u32(u32(7920176u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B538185:{NFSU2_TR(0x538185);
{u32 ea_=u32(r4(R+24)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B538188:{NFSU2_TR(0x538188);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53818dull));
TAIL_STATIC(0x51d070u,51d);
}
B53818d:L53818d:{c.instructions+=11;NFSU2_TR(0x53818d);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B538191:{NFSU2_TR(0x538191);
{u32 ea_=u32(r4(R+24)+u32(4u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B538194:{NFSU2_TR(0x538194);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B538197:{NFSU2_TR(0x538197);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B53819b:{NFSU2_TR(0x53819b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53819c:{NFSU2_TR(0x53819c);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5381a0:{NFSU2_TR(0x5381a0);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B5381a2:{NFSU2_TR(0x5381a2);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5381a3:{NFSU2_TR(0x5381a3);
{u32 ea_=u32(r4(R+24)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5381a6:{NFSU2_TR(0x5381a6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5381a7:{NFSU2_TR(0x5381a7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5381acull));
TAIL_STATIC(0x51d070u,51d);
}
B5381ac:L5381ac:{c.instructions+=6;NFSU2_TR(0x5381ac);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5381b0:{NFSU2_TR(0x5381b0);
{u32 ea_=u32(r4(R+24)+u32(8u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5381b3:{NFSU2_TR(0x5381b3);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B5381b6:{NFSU2_TR(0x5381b6);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B5381b8:{NFSU2_TR(0x5381b8);
{u32 ea_=u32(r4(R+24)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5381bb:{NFSU2_TR(0x5381bb);
{goto L5381d4;}
}
B5381bd:L5381bd:{c.instructions+=3;NFSU2_TR(0x5381bd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5381c0:{NFSU2_TR(0x5381c0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5381c1:{NFSU2_TR(0x5381c1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5381c6ull));
TAIL_STATIC(0x52d100u,52d);
}
B5381c6:L5381c6:{c.instructions+=3;NFSU2_TR(0x5381c6);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5381c9:{NFSU2_TR(0x5381c9);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5381cb:{NFSU2_TR(0x5381cb);
if(r1(R+518)){{goto L5381d4;}}
}
B5381cd:L5381cd:{c.instructions+=2;NFSU2_TR(0x5381cd);
__builtin_memmove((R+4),(R+24),4);
}
B5381cf:{NFSU2_TR(0x5381cf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5381d4ull));
TAIL_STATIC(0x52e670u,52e);
}
B5381d4:L5381d4:{c.instructions+=4;NFSU2_TR(0x5381d4);
__builtin_memmove((R+0),gp(0x8763f0),1);
}
B5381d9:{NFSU2_TR(0x5381d9);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5381db:{NFSU2_TR(0x5381db);
w4(R+0,u32(m1(0x8763f3)));
}
B5381e2:{NFSU2_TR(0x5381e2);
if(r1(R+518)){{goto L5381eb;}}
}
B5381e4:L5381e4:{c.instructions+=1;NFSU2_TR(0x5381e4);
w4(R+0,u32(m1(0x8763f6)));
}
B5381eb:L5381eb:{c.instructions+=2;NFSU2_TR(0x5381eb);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5381ed:{NFSU2_TR(0x5381ed);
if(r1(R+518)){{goto L5381f3;}}
}
B5381ef:L5381ef:{c.instructions+=1;NFSU2_TR(0x5381ef);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5381f3:L5381f3:{c.instructions+=3;NFSU2_TR(0x5381f3);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5381f6:{NFSU2_TR(0x5381f6);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5381f8:{NFSU2_TR(0x5381f8);
if(r1(R+518)){{goto L538206;}}
}
B5381fa:L5381fa:{c.instructions+=2;NFSU2_TR(0x5381fa);
__builtin_memmove((R+4),(R+24),4);
}
B5381fc:{NFSU2_TR(0x5381fc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x538201ull));
TAIL_STATIC(0x52e4e0u,52e);
}
B538201:L538201:{c.instructions+=3;NFSU2_TR(0x538201);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B538202:{NFSU2_TR(0x538202);
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
B538205:{NFSU2_TR(0x538205);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B538206:L538206:{c.instructions+=10;NFSU2_TR(0x538206);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B538209:{NFSU2_TR(0x538209);
__builtin_memmove((R+8),gp(0x8651ac),4);
}
B53820f:{NFSU2_TR(0x53820f);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+0))));
}
B538211:{NFSU2_TR(0x538211);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B538215:{NFSU2_TR(0x538215);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B538219:{NFSU2_TR(0x538219);
{u32 ea_=u32(u32(7881320u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B53821f:{NFSU2_TR(0x53821f);
{u32 ea_=u32(u32(7978396u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B538225:{NFSU2_TR(0x538225);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B538227:{NFSU2_TR(0x538227);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B53822a:{NFSU2_TR(0x53822a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L538233;}}
}
B53822c:L53822c:{c.instructions+=2;NFSU2_TR(0x53822c);
__builtin_memmove((R+4),(R+24),4);
}
B53822e:{NFSU2_TR(0x53822e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x538233ull));
TAIL_STATIC(0x52e470u,52e);
}
B538233:L538233:{c.instructions+=3;NFSU2_TR(0x538233);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B538234:{NFSU2_TR(0x538234);
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
B538237:{NFSU2_TR(0x538237);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B538240:L538240:{c.instructions+=6;NFSU2_TR(0x538240);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B538241:{NFSU2_TR(0x538241);
__builtin_memmove((R+24),(R+4),4);
}
B538243:{NFSU2_TR(0x538243);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B538246:{NFSU2_TR(0x538246);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((R+0),(U+0),4);
}
B538249:{NFSU2_TR(0x538249);
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
B53824b:{NFSU2_TR(0x53824b);
if(r1(R+518)){{goto L5382e8;}}
}
B538251:L538251:{c.instructions+=6;NFSU2_TR(0x538251);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B538254:{NFSU2_TR(0x538254);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B538255:{NFSU2_TR(0x538255);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((R+20),(U+0),4);
}
B538258:{NFSU2_TR(0x538258);
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
B53825a:{NFSU2_TR(0x53825a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53825b:{NFSU2_TR(0x53825b);
if(r1(R+518)){{goto L5382e6;}}
}
B538261:L538261:{c.instructions+=4;NFSU2_TR(0x538261);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B538264:{NFSU2_TR(0x538264);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B538267:{NFSU2_TR(0x538267);
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
B538269:{NFSU2_TR(0x538269);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L5382e6;}}
}
B53826b:L53826b:{c.instructions+=6;NFSU2_TR(0x53826b);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53826c:{NFSU2_TR(0x53826c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B53826f:{NFSU2_TR(0x53826f);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B538270:{NFSU2_TR(0x538270);
__builtin_memmove((R+4),(R+24),4);
}
B538272:{NFSU2_TR(0x538272);
w4(R+28,u32(u32(r4(R+28))-u32(r4(R+0))));
}
B538274:{NFSU2_TR(0x538274);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x538279ull));
TAIL_STATIC(0x51f440u,51f);
}
B538279:L538279:{c.instructions+=3;NFSU2_TR(0x538279);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1ull))));
__builtin_memmove((R+4),(U+0),4);
}
B53827c:{NFSU2_TR(0x53827c);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B53827e:{NFSU2_TR(0x53827e);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L538293;}}
}
B538280:L538280:{c.instructions+=4;NFSU2_TR(0x538280);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+20))),4);
__builtin_memmove((R+0),(U+0),4);
}
B538283:{NFSU2_TR(0x538283);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B538285:{NFSU2_TR(0x538285);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B538288:{NFSU2_TR(0x538288);
if(r1(R+518)){{goto L53828f;}}
}
B53828a:L53828a:{c.instructions+=2;NFSU2_TR(0x53828a);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
}
B53828d:{NFSU2_TR(0x53828d);
{goto L5382b5;}
}
B53828f:L53828f:{c.instructions+=2;NFSU2_TR(0x53828f);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B538291:{NFSU2_TR(0x538291);
{goto L5382b5;}
}
B538293:L538293:{c.instructions+=3;NFSU2_TR(0x538293);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B538294:{NFSU2_TR(0x538294);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((R+4),(U+0),4);
}
B538297:{NFSU2_TR(0x538297);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53829cull));
TAIL_STATIC(0x43be60u,43b);
}
B53829c:L53829c:{c.instructions+=2;NFSU2_TR(0x53829c);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B53829e:{NFSU2_TR(0x53829e);
if(r1(R+518)){{goto L5382a5;}}
}
B5382a0:L5382a0:{c.instructions+=2;NFSU2_TR(0x5382a0);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
}
B5382a3:{NFSU2_TR(0x5382a3);
{goto L5382a7;}
}
B5382a5:L5382a5:{c.instructions+=1;NFSU2_TR(0x5382a5);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5382a7:L5382a7:{c.instructions+=5;NFSU2_TR(0x5382a7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5382aa:{NFSU2_TR(0x5382aa);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5382ab:{NFSU2_TR(0x5382ab);
__builtin_memmove((R+4),(R+24),4);
}
B5382ad:{NFSU2_TR(0x5382ad);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5382b0:{NFSU2_TR(0x5382b0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5382b5ull));
TAIL_STATIC(0x52e850u,52e);
}
B5382b5:L5382b5:{c.instructions+=4;NFSU2_TR(0x5382b5);
__builtin_memmove((R+4),(R+24),4);
}
B5382b7:{NFSU2_TR(0x5382b7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5382ba:{NFSU2_TR(0x5382ba);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x9dull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5382c1:{NFSU2_TR(0x5382c1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5382c6ull));
TAIL_STATIC(0x52e9c0u,52e);
}
B5382c6:L5382c6:{c.instructions+=4;NFSU2_TR(0x5382c6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5382c9:{NFSU2_TR(0x5382c9);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5382cb:{NFSU2_TR(0x5382cb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5382cc:{NFSU2_TR(0x5382cc);
if(r1(R+518)){{goto L5382dc;}}
}
B5382ce:L5382ce:{c.instructions+=4;NFSU2_TR(0x5382ce);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5382d1:{NFSU2_TR(0x5382d1);
u8 U[4];
w4(U+0,u32(0x78f228ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5382d6:{NFSU2_TR(0x5382d6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5382d7:{NFSU2_TR(0x5382d7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5382dcull));
TAIL_STATIC(0x51ee80u,51e);
}
B5382dc:L5382dc:{c.instructions+=5;NFSU2_TR(0x5382dc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5382dd:{NFSU2_TR(0x5382dd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5382de:{NFSU2_TR(0x5382de);
__builtin_memmove((R+4),(R+24),4);
}
B5382e0:{NFSU2_TR(0x5382e0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5382e1:{NFSU2_TR(0x5382e1);
TAIL_STATIC(0x51f3b0u,51f);
}
B5382e6:L5382e6:{c.instructions+=2;NFSU2_TR(0x5382e6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5382e7:{NFSU2_TR(0x5382e7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5382e8:L5382e8:{c.instructions+=2;NFSU2_TR(0x5382e8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5382e9:{NFSU2_TR(0x5382e9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5382f0:L5382f0:{c.instructions+=13;NFSU2_TR(0x5382f0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xcull))));
}
B5382f3:{NFSU2_TR(0x5382f3);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5382f4:{NFSU2_TR(0x5382f4);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5382f5:{NFSU2_TR(0x5382f5);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5382f6:{NFSU2_TR(0x5382f6);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5382f7:{NFSU2_TR(0x5382f7);
__builtin_memmove((R+28),(R+4),4);
}
B5382f9:{NFSU2_TR(0x5382f9);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5382fc:{NFSU2_TR(0x5382fc);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5382ff:{NFSU2_TR(0x5382ff);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B538301:{NFSU2_TR(0x538301);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B538303:{NFSU2_TR(0x538303);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B538307:{NFSU2_TR(0x538307);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53830b:{NFSU2_TR(0x53830b);
if(r1(R+518)){{goto L538316;}}
}
B53830d:L53830d:{c.instructions+=3;NFSU2_TR(0x53830d);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+12),(U+0),4);
}
B538310:{NFSU2_TR(0x538310);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B538314:{NFSU2_TR(0x538314);
{goto L538320;}
}
B538316:L538316:{c.instructions+=1;NFSU2_TR(0x538316);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53831a:L53831a:{c.instructions+=2;NFSU2_TR(0x53831a);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B53831e:{NFSU2_TR(0x53831e);
__builtin_memmove((R+28),(R+28),4);
}
B538320:L538320:{c.instructions+=3;NFSU2_TR(0x538320);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B538323:{NFSU2_TR(0x538323);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B538325:{NFSU2_TR(0x538325);
if(r1(R+518)){{goto L53832c;}}
}
B538327:L538327:{c.instructions+=2;NFSU2_TR(0x538327);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
}
B53832a:{NFSU2_TR(0x53832a);
{goto L53832e;}
}
B53832c:L53832c:{c.instructions+=1;NFSU2_TR(0x53832c);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B53832e:L53832e:{c.instructions+=2;NFSU2_TR(0x53832e);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B538330:{NFSU2_TR(0x538330);
if(r1(R+518)){{goto L538484;}}
}
B538336:L538336:{c.instructions+=2;NFSU2_TR(0x538336);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B538338:{NFSU2_TR(0x538338);
if(r1(R+518)){{goto L538460;}}
}
B53833e:L53833e:{c.instructions+=3;NFSU2_TR(0x53833e);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((R+0),(U+0),4);
}
B538341:{NFSU2_TR(0x538341);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B538343:{NFSU2_TR(0x538343);
if(r1(R+518)){{goto L53834a;}}
}
B538345:L538345:{c.instructions+=2;NFSU2_TR(0x538345);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
}
B538348:{NFSU2_TR(0x538348);
{goto L53834c;}
}
B53834a:L53834a:{c.instructions+=1;NFSU2_TR(0x53834a);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B53834c:L53834c:{c.instructions+=2;NFSU2_TR(0x53834c);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B53834e:{NFSU2_TR(0x53834e);
if(r1(R+518)){{goto L538460;}}
}
B538354:L538354:{c.instructions+=3;NFSU2_TR(0x538354);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B538357:{NFSU2_TR(0x538357);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B538359:{NFSU2_TR(0x538359);
if(r1(R+518)){{goto L53835e;}}
}
B53835b:L53835b:{c.instructions+=1;NFSU2_TR(0x53835b);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+20),(U+0),4);
}
B53835e:L53835e:{c.instructions+=2;NFSU2_TR(0x53835e);
__builtin_memmove((R+4),(R+12),4);
}
B538360:{NFSU2_TR(0x538360);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x538365ull));
TAIL_STATIC(0x51f1c0u,51f);
}
B538365:L538365:{c.instructions+=1;NFSU2_TR(0x538365);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B538368:L538368:{c.instructions+=2;NFSU2_TR(0x538368);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B53836a:{NFSU2_TR(0x53836a);
if(r1(R+518)){{goto L538371;}}
}
B53836c:L53836c:{c.instructions+=2;NFSU2_TR(0x53836c);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+28),(U+0),4);
}
B53836f:{NFSU2_TR(0x53836f);
{goto L538373;}
}
B538371:L538371:{c.instructions+=1;NFSU2_TR(0x538371);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B538373:L538373:{c.instructions+=3;NFSU2_TR(0x538373);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((R+0),(U+0),4);
}
B538376:{NFSU2_TR(0x538376);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B538378:{NFSU2_TR(0x538378);
if(r1(R+518)){{goto L53837f;}}
}
B53837a:L53837a:{c.instructions+=2;NFSU2_TR(0x53837a);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
}
B53837d:{NFSU2_TR(0x53837d);
{goto L538381;}
}
B53837f:L53837f:{c.instructions+=1;NFSU2_TR(0x53837f);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B538381:L538381:{c.instructions+=2;NFSU2_TR(0x538381);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B538383:{NFSU2_TR(0x538383);
if(r1(R+518)){{goto L538442;}}
}
B538389:L538389:{c.instructions+=3;NFSU2_TR(0x538389);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B53838f:{NFSU2_TR(0x53838f);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B538391:{NFSU2_TR(0x538391);
if(r1(R+518)){{goto L5383e1;}}
}
B538393:L538393:{c.instructions+=3;NFSU2_TR(0x538393);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B538396:{NFSU2_TR(0x538396);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B538398:{NFSU2_TR(0x538398);
if(r1(R+518)){{goto L5383f6;}}
}
B53839a:L53839a:{c.instructions+=4;NFSU2_TR(0x53839a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B53839d:{NFSU2_TR(0x53839d);
w1(R+12,u8(u32(r1(R+12))^u32(r1(R+12))));
}
B53839f:{NFSU2_TR(0x53839f);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(u8(0x2ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5383a1:{NFSU2_TR(0x5383a1);
if(r1(R+518)){{goto L5383a5;}}
}
B5383a3:L5383a3:{c.instructions+=1;NFSU2_TR(0x5383a3);
w1(R+12,u8(0x1ull));
}
B5383a5:L5383a5:{c.instructions+=2;NFSU2_TR(0x5383a5);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+4))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B5383a8:{NFSU2_TR(0x5383a8);
if(r1(R+518)){{goto L5383b5;}}
}
B5383aa:L5383aa:{c.instructions+=3;NFSU2_TR(0x5383aa);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0x400000ull))));
}
B5383af:{NFSU2_TR(0x5383af);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5383b2:{NFSU2_TR(0x5383b2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5383b5:L5383b5:{c.instructions+=3;NFSU2_TR(0x5383b5);
__builtin_memmove((R+4),gp(0x838478),4);
}
B5383bb:{NFSU2_TR(0x5383bb);
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
B5383bd:{NFSU2_TR(0x5383bd);
if(r1(R+518)){{goto L5383c4;}}
}
B5383bf:L5383bf:{c.instructions+=3;NFSU2_TR(0x5383bf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5383c1:{NFSU2_TR(0x5383c1);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5383c2:{NFSU2_TR(0x5383c2);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5383c4ull));
{u32 t_=u32(r4(U+4));TAIL_DYNAMIC(t_);}
}
B5383c4:L5383c4:{c.instructions+=7;NFSU2_TR(0x5383c4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5383c7:{NFSU2_TR(0x5383c7);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0xfffffffdull))));
}
B5383ca:{NFSU2_TR(0x5383ca);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(r1(R+12))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5383cc:{NFSU2_TR(0x5383cc);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B5383d0:{NFSU2_TR(0x5383d0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5383d3:{NFSU2_TR(0x5383d3);
__builtin_memmove((R+0),(R+8),4);
}
B5383d5:{NFSU2_TR(0x5383d5);
if(r1(R+518)){{goto L5383f6;}}
}
B5383d7:L5383d7:{c.instructions+=3;NFSU2_TR(0x5383d7);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0x400000ull))));
}
B5383dc:{NFSU2_TR(0x5383dc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5383df:{NFSU2_TR(0x5383df);
{goto L5383f6;}
}
B5383e1:L5383e1:{c.instructions+=6;NFSU2_TR(0x5383e1);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5383e4:{NFSU2_TR(0x5383e4);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((R+4),(U+0),4);
}
B5383e7:{NFSU2_TR(0x5383e7);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5383e8:{NFSU2_TR(0x5383e8);
u8 U[4];
w4(U+0,u32(0x786e70ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5383ed:{NFSU2_TR(0x5383ed);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5383ee:{NFSU2_TR(0x5383ee);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5383f3ull));
TAIL_STATIC(0x537be0u,537);
}
B5383f3:L5383f3:{c.instructions+=1;NFSU2_TR(0x5383f3);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B5383f6:L5383f6:{c.instructions+=3;NFSU2_TR(0x5383f6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5383f9:{NFSU2_TR(0x5383f9);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5383fb:{NFSU2_TR(0x5383fb);
if(r1(R+518)){{goto L538402;}}
}
B5383fd:L5383fd:{c.instructions+=2;NFSU2_TR(0x5383fd);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+20),(U+0),4);
}
B538400:{NFSU2_TR(0x538400);
{goto L538404;}
}
B538402:L538402:{c.instructions+=1;NFSU2_TR(0x538402);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B538404:L538404:{c.instructions+=4;NFSU2_TR(0x538404);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B538408:{NFSU2_TR(0x538408);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((R+0),(U+0),4);
}
B53840b:{NFSU2_TR(0x53840b);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B53840d:{NFSU2_TR(0x53840d);
if(r1(R+518)){{goto L538414;}}
}
B53840f:L53840f:{c.instructions+=2;NFSU2_TR(0x53840f);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
}
B538412:{NFSU2_TR(0x538412);
{goto L538416;}
}
B538414:L538414:{c.instructions+=1;NFSU2_TR(0x538414);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B538416:L538416:{c.instructions+=2;NFSU2_TR(0x538416);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+20))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B538418:{NFSU2_TR(0x538418);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L53843a;}}
}
B53841a:L53841a:{c.instructions+=3;NFSU2_TR(0x53841a);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B53841d:{NFSU2_TR(0x53841d);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B53841f:{NFSU2_TR(0x53841f);
if(r1(R+518)){{goto L538426;}}
}
B538421:L538421:{c.instructions+=2;NFSU2_TR(0x538421);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
}
B538424:{NFSU2_TR(0x538424);
{goto L538428;}
}
B538426:L538426:{c.instructions+=1;NFSU2_TR(0x538426);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B538428:L538428:{c.instructions+=3;NFSU2_TR(0x538428);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((R+4),(U+0),4);
}
B53842b:{NFSU2_TR(0x53842b);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B53842d:{NFSU2_TR(0x53842d);
if(r1(R+518)){{goto L538434;}}
}
B53842f:L53842f:{c.instructions+=2;NFSU2_TR(0x53842f);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0xfffffffcull))));
}
B538432:{NFSU2_TR(0x538432);
{goto L538436;}
}
B538434:L538434:{c.instructions+=1;NFSU2_TR(0x538434);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B538436:L538436:{c.instructions+=2;NFSU2_TR(0x538436);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B538438:{NFSU2_TR(0x538438);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L538442;}}
}
B53843a:L53843a:{c.instructions+=2;NFSU2_TR(0x53843a);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B53843d:{NFSU2_TR(0x53843d);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x538368u);}goto L538368;}
}
B538442:L538442:{c.instructions+=4;NFSU2_TR(0x538442);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B538445:{NFSU2_TR(0x538445);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B538447:{NFSU2_TR(0x538447);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B53844b:{NFSU2_TR(0x53844b);
if(r1(R+518)){{goto L538456;}}
}
B53844d:L53844d:{c.instructions+=3;NFSU2_TR(0x53844d);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
}
B538450:{NFSU2_TR(0x538450);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B538454:{NFSU2_TR(0x538454);
{goto L538467;}
}
B538456:L538456:{c.instructions+=2;NFSU2_TR(0x538456);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B53845e:{NFSU2_TR(0x53845e);
{goto L538467;}
}
B538460:L538460:{c.instructions+=2;NFSU2_TR(0x538460);
__builtin_memmove((R+4),(R+12),4);
}
B538462:{NFSU2_TR(0x538462);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x538467ull));
TAIL_STATIC(0x51f220u,51f);
}
B538467:L538467:{c.instructions+=5;NFSU2_TR(0x538467);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B53846a:{NFSU2_TR(0x53846a);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B53846e:{NFSU2_TR(0x53846e);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B538470:{NFSU2_TR(0x538470);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B538472:{NFSU2_TR(0x538472);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x538316u);}goto L538316;}}
}
B538478:L538478:{c.instructions+=3;NFSU2_TR(0x538478);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
}
B53847b:{NFSU2_TR(0x53847b);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53847f:{NFSU2_TR(0x53847f);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x53831au);}goto L53831a;}
}
B538484:L538484:{c.instructions+=6;NFSU2_TR(0x538484);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B538485:{NFSU2_TR(0x538485);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B538486:{NFSU2_TR(0x538486);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B538487:{NFSU2_TR(0x538487);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B538488:{NFSU2_TR(0x538488);
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
B53848b:{NFSU2_TR(0x53848b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B538490:L538490:{c.instructions+=7;NFSU2_TR(0x538490);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B538491:{NFSU2_TR(0x538491);
__builtin_memmove((R+24),(R+4),4);
}
B538493:{NFSU2_TR(0x538493);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B538499:{NFSU2_TR(0x538499);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B53849b:{NFSU2_TR(0x53849b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53849c:{NFSU2_TR(0x53849c);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((R+28),(U+0),4);
}
B53849f:{NFSU2_TR(0x53849f);
if(r1(R+518)){{goto L5384b3;}}
}
B5384a1:L5384a1:{c.instructions+=3;NFSU2_TR(0x5384a1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5384a4:{NFSU2_TR(0x5384a4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5384a5:{NFSU2_TR(0x5384a5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5384aaull));
TAIL_STATIC(0x51f440u,51f);
}
B5384aa:L5384aa:{c.instructions+=5;NFSU2_TR(0x5384aa);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5384ad:{NFSU2_TR(0x5384ad);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5384ae:{NFSU2_TR(0x5384ae);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5384af:{NFSU2_TR(0x5384af);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5384b1:{NFSU2_TR(0x5384b1);
{goto L5384bf;}
}
B5384b3:L5384b3:{c.instructions+=6;NFSU2_TR(0x5384b3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5384b6:{NFSU2_TR(0x5384b6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5384b9:{NFSU2_TR(0x5384b9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5384bc:{NFSU2_TR(0x5384bc);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5384bd:{NFSU2_TR(0x5384bd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5384be:{NFSU2_TR(0x5384be);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5384bf:L5384bf:{c.instructions+=2;NFSU2_TR(0x5384bf);
__builtin_memmove((R+4),(R+28),4);
}
B5384c1:{NFSU2_TR(0x5384c1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5384c6ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x538080u);}goto L538080;}
}
B5384c6:L5384c6:{c.instructions+=3;NFSU2_TR(0x5384c6);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x9full))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5384cc:{NFSU2_TR(0x5384cc);
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
B5384ce:{NFSU2_TR(0x5384ce);
if(r1(R+518)){{goto L5384ee;}}
}
B5384d0:L5384d0:{c.instructions+=3;NFSU2_TR(0x5384d0);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5384d3:{NFSU2_TR(0x5384d3);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5384d4:{NFSU2_TR(0x5384d4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5384d9ull));
TAIL_STATIC(0x50ca50u,50c);
}
B5384d9:L5384d9:{c.instructions+=3;NFSU2_TR(0x5384d9);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5384dc:{NFSU2_TR(0x5384dc);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5384dd:{NFSU2_TR(0x5384dd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5384e2ull));
TAIL_STATIC(0x50ca50u,50c);
}
B5384e2:L5384e2:{c.instructions+=3;NFSU2_TR(0x5384e2);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5384e5:{NFSU2_TR(0x5384e5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5384e6:{NFSU2_TR(0x5384e6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5384ebull));
TAIL_STATIC(0x50ca50u,50c);
}
B5384eb:L5384eb:{c.instructions+=1;NFSU2_TR(0x5384eb);
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
B5384ee:L5384ee:{c.instructions+=3;NFSU2_TR(0x5384ee);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5384ef:{NFSU2_TR(0x5384ef);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5384f0:{NFSU2_TR(0x5384f0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B538500:L538500:{c.instructions+=5;NFSU2_TR(0x538500);
u8 U[5];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B538504:{NFSU2_TR(0x538504);
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
B538506:{NFSU2_TR(0x538506);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B538507:{NFSU2_TR(0x538507);
__builtin_memmove((R+24),(R+4),4);
}
B538509:{NFSU2_TR(0x538509);
if(r1(R+518)){{goto L538510;}}
}
B53850b:L53850b:{c.instructions+=2;NFSU2_TR(0x53850b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B53850d:{NFSU2_TR(0x53850d);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x538510ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B538510:L538510:{c.instructions+=3;NFSU2_TR(0x538510);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x9cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B538516:{NFSU2_TR(0x538516);
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
B538518:{NFSU2_TR(0x538518);
if(r1(R+518)){{goto L538521;}}
}
B53851a:L53851a:{c.instructions+=2;NFSU2_TR(0x53851a);
__builtin_memmove((R+4),(R+24),4);
}
B53851c:{NFSU2_TR(0x53851c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x538521ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x538490u);}goto L538490;}
}
B538521:L538521:{c.instructions+=2;NFSU2_TR(0x538521);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B538522:{NFSU2_TR(0x538522);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B538530:L538530:{c.instructions+=6;NFSU2_TR(0x538530);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B538531:{NFSU2_TR(0x538531);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B538532:{NFSU2_TR(0x538532);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B538536:{NFSU2_TR(0x538536);
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
B538538:{NFSU2_TR(0x538538);
__builtin_memmove((R+24),(R+4),4);
}
B53853a:{NFSU2_TR(0x53853a);
if(r1(R+518)){{goto L53859b;}}
}
B53853c:L53853c:{c.instructions+=3;NFSU2_TR(0x53853c);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B53853f:{NFSU2_TR(0x53853f);
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
B538541:{NFSU2_TR(0x538541);
if(r1(R+518)){{goto L53859b;}}
}
B538543:L538543:{c.instructions+=3;NFSU2_TR(0x538543);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B538544:{NFSU2_TR(0x538544);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B538545:{NFSU2_TR(0x538545);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53854aull));
TAIL_STATIC(0x52e7d0u,52e);
}
B53854a:L53854a:{c.instructions+=3;NFSU2_TR(0x53854a);
__builtin_memmove((R+12),(R+0),4);
}
B53854c:{NFSU2_TR(0x53854c);
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
B53854e:{NFSU2_TR(0x53854e);
if(r1(R+518)){{goto L53859a;}}
}
B538550:L538550:{c.instructions+=3;NFSU2_TR(0x538550);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B538553:{NFSU2_TR(0x538553);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B538555:{NFSU2_TR(0x538555);
if(r1(R+518)){{goto L538565;}}
}
B538557:L538557:{c.instructions+=4;NFSU2_TR(0x538557);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B53855a:{NFSU2_TR(0x53855a);
u8 U[4];
w4(U+0,u32(0x78f21cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53855f:{NFSU2_TR(0x53855f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B538560:{NFSU2_TR(0x538560);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x538565ull));
TAIL_STATIC(0x51ee80u,51e);
}
B538565:L538565:{c.instructions+=7;NFSU2_TR(0x538565);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B538568:{NFSU2_TR(0x538568);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53856b:{NFSU2_TR(0x53856b);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B53856e:{NFSU2_TR(0x53856e);
u8 U[4];
w4(U+0,u32(0x78f228ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B538573:{NFSU2_TR(0x538573);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B538574:{NFSU2_TR(0x538574);
__builtin_memmove((R+4),(R+28),4);
}
B538576:{NFSU2_TR(0x538576);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53857bull));
TAIL_STATIC(0x51ee80u,51e);
}
B53857b:L53857b:{c.instructions+=3;NFSU2_TR(0x53857b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B53857d:{NFSU2_TR(0x53857d);
__builtin_memmove((R+4),(R+24),4);
}
B53857f:{NFSU2_TR(0x53857f);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x538582ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B538582:L538582:{c.instructions+=3;NFSU2_TR(0x538582);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x9cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B538588:{NFSU2_TR(0x538588);
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
B53858a:{NFSU2_TR(0x53858a);
if(r1(R+518)){{goto L538593;}}
}
B53858c:L53858c:{c.instructions+=2;NFSU2_TR(0x53858c);
__builtin_memmove((R+4),(R+24),4);
}
B53858e:{NFSU2_TR(0x53858e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x538593ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x538490u);}goto L538490;}
}
B538593:L538593:{c.instructions+=1;NFSU2_TR(0x538593);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x9dull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B53859a:L53859a:{c.instructions+=1;NFSU2_TR(0x53859a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B53859b:L53859b:{c.instructions+=3;NFSU2_TR(0x53859b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B53859c:{NFSU2_TR(0x53859c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B53859d:{NFSU2_TR(0x53859d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5385a0:L5385a0:{c.instructions+=3;NFSU2_TR(0x5385a0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5385a1:{NFSU2_TR(0x5385a1);
__builtin_memmove((R+24),(R+4),4);
}
B5385a3:{NFSU2_TR(0x5385a3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5385a8ull));
TAIL_STATIC(0x52ea90u,52e);
}
B5385a8:L5385a8:{c.instructions+=2;NFSU2_TR(0x5385a8);
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
B5385ad:{NFSU2_TR(0x5385ad);
if(r1(R+518)){{goto L5385b8;}}
}
B5385af:L5385af:{c.instructions+=2;NFSU2_TR(0x5385af);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5385b0:{NFSU2_TR(0x5385b0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5385b5ull));
TAIL_STATIC(0x575630u,575);
}
B5385b5:L5385b5:{c.instructions+=1;NFSU2_TR(0x5385b5);
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
B5385b8:L5385b8:{c.instructions+=3;NFSU2_TR(0x5385b8);
__builtin_memmove((R+0),(R+24),4);
}
B5385ba:{NFSU2_TR(0x5385ba);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5385bb:{NFSU2_TR(0x5385bb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5385c0:L5385c0:{c.instructions+=8;NFSU2_TR(0x5385c0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5385c1:{NFSU2_TR(0x5385c1);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5385c2:{NFSU2_TR(0x5385c2);
__builtin_memmove((R+28),(R+4),4);
}
B5385c4:{NFSU2_TR(0x5385c4);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5385c7:{NFSU2_TR(0x5385c7);
{u32 ea_=u32(r4(R+28)+u32(76u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5385ca:{NFSU2_TR(0x5385ca);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5385cc:{NFSU2_TR(0x5385cc);
{u32 ea_=u32(r4(R+28)+u32(72u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5385cf:{NFSU2_TR(0x5385cf);
if(r1(R+518)){{goto L538600;}}
}
B5385d1:L5385d1:{c.instructions+=4;NFSU2_TR(0x5385d1);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5385d4:{NFSU2_TR(0x5385d4);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B5385d5:{NFSU2_TR(0x5385d5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5385d8:{NFSU2_TR(0x5385d8);
if(r1(R+518)){{goto L5385e4;}}
}
B5385da:L5385da:{c.instructions+=2;NFSU2_TR(0x5385da);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x6ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B5385dd:{NFSU2_TR(0x5385dd);
if(r1(R+518)){{goto L5385e4;}}
}
B5385df:L5385df:{c.instructions+=2;NFSU2_TR(0x5385df);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x2ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B5385e2:{NFSU2_TR(0x5385e2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5385ec;}}
}
B5385e4:L5385e4:{c.instructions+=3;NFSU2_TR(0x5385e4);
{u32 ea_=u32(r4(R+8)+u32(56u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B5385e7:{NFSU2_TR(0x5385e7);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B5385e9:{NFSU2_TR(0x5385e9);
{u32 ea_=u32(r4(R+8)+u32(60u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5385ec:L5385ec:{c.instructions+=6;NFSU2_TR(0x5385ec);
{u32 ea_=u32(r4(R+8)+u32(56u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5385ef:{NFSU2_TR(0x5385ef);
{u32 ea_=u32(r4(R+8)+u32(60u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5385f2:{NFSU2_TR(0x5385f2);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5385f5:{NFSU2_TR(0x5385f5);
w4(R+4,u32(u32(r4(R+4))|u32(u32(0x400000ull))));
}
B5385fb:{NFSU2_TR(0x5385fb);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5385fe:{NFSU2_TR(0x5385fe);
{goto L538604;}
}
B538600:L538600:{c.instructions+=2;NFSU2_TR(0x538600);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B538602:{NFSU2_TR(0x538602);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B538604:L538604:{c.instructions+=2;NFSU2_TR(0x538604);
__builtin_memmove((R+4),(R+28),4);
}
B538606:{NFSU2_TR(0x538606);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53860bull));
TAIL_STATIC(0x51f6c0u,51f);
}
B53860b:L53860b:{c.instructions+=3;NFSU2_TR(0x53860b);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53860d:{NFSU2_TR(0x53860d);
__builtin_memmove((R+4),(R+28),4);
}
B53860f:{NFSU2_TR(0x53860f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x538614ull));
TAIL_STATIC(0x52eb90u,52e);
}
B538614:L538614:{c.instructions+=2;NFSU2_TR(0x538614);
__builtin_memmove((R+4),(R+28),4);
}
B538616:{NFSU2_TR(0x538616);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53861bull));
TAIL_STATIC(0x51f750u,51f);
}
B53861b:L53861b:{c.instructions+=5;NFSU2_TR(0x53861b);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B53861e:{NFSU2_TR(0x53861e);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x38ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B538625:{NFSU2_TR(0x538625);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B53862c:{NFSU2_TR(0x53862c);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(r4(R+24))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B53862e:{NFSU2_TR(0x53862e);
if(r1(R+518)){{goto L53868b;}}
}
B538630:L538630:{c.instructions+=1;NFSU2_TR(0x538630);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B538631:L538631:{c.instructions+=11;NFSU2_TR(0x538631);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B538633:{NFSU2_TR(0x538633);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B538635:{NFSU2_TR(0x538635);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B538638:{NFSU2_TR(0x538638);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+8)),r4(U+0));
}
B53863a:{NFSU2_TR(0x53863a);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53863d:{NFSU2_TR(0x53863d);
{u32 ea_=u32(r4(R+0)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B538640:{NFSU2_TR(0x538640);
{u32 ea_=u32(r4(R+0)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B538643:{NFSU2_TR(0x538643);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+4),(U+0),4);
}
B538646:{NFSU2_TR(0x538646);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B538649:{NFSU2_TR(0x538649);
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
B53864b:{NFSU2_TR(0x53864b);
if(r1(R+518)){{goto L53867c;}}
}
B53864d:L53864d:{c.instructions+=4;NFSU2_TR(0x53864d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B538650:{NFSU2_TR(0x538650);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
}
B538651:{NFSU2_TR(0x538651);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B538654:{NFSU2_TR(0x538654);
if(r1(R+518)){{goto L538660;}}
}
B538656:L538656:{c.instructions+=2;NFSU2_TR(0x538656);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x6ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
}
B538659:{NFSU2_TR(0x538659);
if(r1(R+518)){{goto L538660;}}
}
B53865b:L53865b:{c.instructions+=2;NFSU2_TR(0x53865b);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x2ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
}
B53865e:{NFSU2_TR(0x53865e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L538668;}}
}
B538660:L538660:{c.instructions+=3;NFSU2_TR(0x538660);
{u32 ea_=u32(r4(R+12)+u32(56u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B538663:{NFSU2_TR(0x538663);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B538665:{NFSU2_TR(0x538665);
{u32 ea_=u32(r4(R+12)+u32(60u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B538668:L538668:{c.instructions+=6;NFSU2_TR(0x538668);
{u32 ea_=u32(r4(R+12)+u32(56u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B53866b:{NFSU2_TR(0x53866b);
{u32 ea_=u32(r4(R+12)+u32(60u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B53866e:{NFSU2_TR(0x53866e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B538671:{NFSU2_TR(0x538671);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+8,u32(u32(r4(R+8))|u32(u32(0x400000ull))));
w1(R+519,u8(s32(r4(R+8))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+8))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B538677:{NFSU2_TR(0x538677);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53867a:{NFSU2_TR(0x53867a);
{goto L538680;}
}
B53867c:L53867c:{c.instructions+=2;NFSU2_TR(0x53867c);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B53867e:{NFSU2_TR(0x53867e);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B538680:L538680:{c.instructions+=3;NFSU2_TR(0x538680);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B538682:{NFSU2_TR(0x538682);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B538684:{NFSU2_TR(0x538684);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x538686ull));
{u32 t_=u32(r4(U+4));TAIL_DYNAMIC(t_);}
}
B538686:L538686:{c.instructions+=2;NFSU2_TR(0x538686);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(r4(R+24))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B538688:{NFSU2_TR(0x538688);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x538631u);}goto L538631;}}
}
B53868a:L53868a:{c.instructions+=1;NFSU2_TR(0x53868a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B53868b:L53868b:{c.instructions+=3;NFSU2_TR(0x53868b);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53868d:{NFSU2_TR(0x53868d);
__builtin_memmove((R+4),(R+28),4);
}
B53868f:{NFSU2_TR(0x53868f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x538694ull));
TAIL_STATIC(0x52ec20u,52e);
}
B538694:L538694:{c.instructions+=4;NFSU2_TR(0x538694);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B538697:{NFSU2_TR(0x538697);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B538698:{NFSU2_TR(0x538698);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B538699:{NFSU2_TR(0x538699);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5386a0:L5386a0:{c.instructions+=3;NFSU2_TR(0x5386a0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5386a4:{NFSU2_TR(0x5386a4);
u8 U[22];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
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
B5386a7:{NFSU2_TR(0x5386a7);
if(r1(R+518)){{goto L5386f4;}}
}
B5386a9:L5386a9:{c.instructions+=5;NFSU2_TR(0x5386a9);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B5386ac:{NFSU2_TR(0x5386ac);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(r1(R+8))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5386ae:{NFSU2_TR(0x5386ae);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5386b1:{NFSU2_TR(0x5386b1);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5386b4:{NFSU2_TR(0x5386b4);
if(r1(R+518)){{goto L5386bb;}}
}
B5386b6:L5386b6:{c.instructions+=2;NFSU2_TR(0x5386b6);
{u32 ea_=u32(r4(R+0)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5386b9:{NFSU2_TR(0x5386b9);
{goto L5386be;}
}
B5386bb:L5386bb:{c.instructions+=1;NFSU2_TR(0x5386bb);
{u32 ea_=u32(r4(R+0)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5386be:L5386be:{c.instructions+=6;NFSU2_TR(0x5386be);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B5386c0:{NFSU2_TR(0x5386c0);
{u32 ea_=u32(r4(R+8)+u32(8u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B5386c3:{NFSU2_TR(0x5386c3);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5386c5:{NFSU2_TR(0x5386c5);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5386c7:{NFSU2_TR(0x5386c7);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5386ca:{NFSU2_TR(0x5386ca);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L5386d2;}}
}
B5386cc:L5386cc:{c.instructions+=1;NFSU2_TR(0x5386cc);
u8 U[6];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x2cull))));
w2(U+4,u16(0x2ull));
s2(u32(r4(U+0)),r2(U+4));
}
B5386d2:L5386d2:{c.instructions+=10;NFSU2_TR(0x5386d2);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5386d5:{NFSU2_TR(0x5386d5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5386d8:{NFSU2_TR(0x5386d8);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+0)),r4(U+0));
}
B5386da:{NFSU2_TR(0x5386da);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5386dd:{NFSU2_TR(0x5386dd);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5386e0:{NFSU2_TR(0x5386e0);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
w2(U+4,u16(0x0ull));
s2(u32(r4(U+0)),r2(U+4));
}
B5386e6:{NFSU2_TR(0x5386e6);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5386e9:{NFSU2_TR(0x5386e9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5386eb:{NFSU2_TR(0x5386eb);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5386ef:{NFSU2_TR(0x5386ef);
TAIL_STATIC(0x52eea0u,52e);
}
B5386f4:L5386f4:{c.instructions+=1;NFSU2_TR(0x5386f4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B538700:L538700:{c.instructions+=5;NFSU2_TR(0x538700);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B538704:{NFSU2_TR(0x538704);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B538705:{NFSU2_TR(0x538705);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B538706:{NFSU2_TR(0x538706);
__builtin_memmove((R+24),(R+4),4);
}
B538708:{NFSU2_TR(0x538708);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53870dull));
TAIL_STATIC(0x51f7a0u,51f);
}
B53870d:L53870d:{c.instructions+=2;NFSU2_TR(0x53870d);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B53870f:{NFSU2_TR(0x53870f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L53871f;}}
}
B538711:L538711:{c.instructions+=3;NFSU2_TR(0x538711);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B538714:{NFSU2_TR(0x538714);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B538716:{NFSU2_TR(0x538716);
if(r1(R+518)){{goto L53871d;}}
}
B538718:L538718:{c.instructions+=2;NFSU2_TR(0x538718);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
}
B53871b:{NFSU2_TR(0x53871b);
{goto L53871f;}
}
B53871d:L53871d:{c.instructions+=1;NFSU2_TR(0x53871d);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B53871f:L53871f:{c.instructions+=3;NFSU2_TR(0x53871f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B538720:{NFSU2_TR(0x538720);
__builtin_memmove((R+4),(R+24),4);
}
B538722:{NFSU2_TR(0x538722);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x538727ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5386a0u);}goto L5386a0;}
}
B538727:L538727:{c.instructions+=3;NFSU2_TR(0x538727);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B538729:{NFSU2_TR(0x538729);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B53872c:{NFSU2_TR(0x53872c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x538731ull));
TAIL_STATIC(0x43be80u,43b);
}
B538731:L538731:{c.instructions+=2;NFSU2_TR(0x538731);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B538732:{NFSU2_TR(0x538732);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B538740:L538740:{c.instructions+=3;NFSU2_TR(0x538740);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B538743:{NFSU2_TR(0x538743);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B538745:{NFSU2_TR(0x538745);
if(r1(R+518)){{goto L538751;}}
}
B538747:L538747:{c.instructions+=3;NFSU2_TR(0x538747);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
}
B53874a:{NFSU2_TR(0x53874a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53874b:{NFSU2_TR(0x53874b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x538750ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5386a0u);}goto L5386a0;}
}
B538750:L538750:{c.instructions+=1;NFSU2_TR(0x538750);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B538751:L538751:{c.instructions+=3;NFSU2_TR(0x538751);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B538753:{NFSU2_TR(0x538753);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B538754:{NFSU2_TR(0x538754);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x538759ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5386a0u);}goto L5386a0;}
}
B538759:L538759:{c.instructions+=1;NFSU2_TR(0x538759);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B538760:L538760:{c.instructions+=8;NFSU2_TR(0x538760);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xcull))));
}
B538763:{NFSU2_TR(0x538763);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B538764:{NFSU2_TR(0x538764);
__builtin_memmove((R+24),(R+4),4);
}
B538766:{NFSU2_TR(0x538766);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B538769:{NFSU2_TR(0x538769);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53876a:{NFSU2_TR(0x53876a);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B53876d:{NFSU2_TR(0x53876d);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B53876f:{NFSU2_TR(0x53876f);
if(r1(R+518)){{goto L5388e4;}}
}
B538775:L538775:{c.instructions+=3;NFSU2_TR(0x538775);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B538778:{NFSU2_TR(0x538778);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B53877a:{NFSU2_TR(0x53877a);
if(r1(R+518)){{goto L5388e4;}}
}
B538780:L538780:{c.instructions+=5;NFSU2_TR(0x538780);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B538783:{NFSU2_TR(0x538783);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B538785:{NFSU2_TR(0x538785);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B538786:{NFSU2_TR(0x538786);
__builtin_memmove((R+4),(R+24),4);
}
B538788:{NFSU2_TR(0x538788);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53878dull));
TAIL_STATIC(0x52eea0u,52e);
}
B53878d:L53878d:{c.instructions+=7;NFSU2_TR(0x53878d);
__builtin_memmove((R+8),gp(0x865198),4);
}
B538793:{NFSU2_TR(0x538793);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B538796:{NFSU2_TR(0x538796);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B538798:{NFSU2_TR(0x538798);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53879a:{NFSU2_TR(0x53879a);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53879b:{NFSU2_TR(0x53879b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53879c:{NFSU2_TR(0x53879c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5387a1ull));
TAIL_STATIC(0x574e30u,574);
}
B5387a1:L5387a1:{c.instructions+=6;NFSU2_TR(0x5387a1);
{u32 ea_=u32(r4(R+24)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5387a4:{NFSU2_TR(0x5387a4);
{u32 ea_=u32(u32(7881920u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5387aa:{NFSU2_TR(0x5387aa);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B5387ad:{NFSU2_TR(0x5387ad);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5387af:{NFSU2_TR(0x5387af);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5387b2:{NFSU2_TR(0x5387b2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5387bb;}}
}
B5387b4:L5387b4:{c.instructions+=1;NFSU2_TR(0x5387b4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3cull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5387bb:L5387bb:{c.instructions+=10;NFSU2_TR(0x5387bb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5387be:{NFSU2_TR(0x5387be);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1full))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(r1(U+4)));
}
B5387c2:{NFSU2_TR(0x5387c2);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5387c6:{NFSU2_TR(0x5387c6);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B5387c9:{NFSU2_TR(0x5387c9);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B5387cd:{NFSU2_TR(0x5387cd);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5387cf:{NFSU2_TR(0x5387cf);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5387d3:{NFSU2_TR(0x5387d3);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5387d7:{NFSU2_TR(0x5387d7);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5387db:{NFSU2_TR(0x5387db);
if(r1(R+518)){{goto L5387e5;}}
}
B5387dd:L5387dd:{c.instructions+=5;NFSU2_TR(0x5387dd);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5387de:{NFSU2_TR(0x5387de);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5387e1:{NFSU2_TR(0x5387e1);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5387e2:{NFSU2_TR(0x5387e2);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5387e3:{NFSU2_TR(0x5387e3);
{goto L5387eb;}
}
B5387e5:L5387e5:{c.instructions+=4;NFSU2_TR(0x5387e5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5387e8:{NFSU2_TR(0x5387e8);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5387e9:{NFSU2_TR(0x5387e9);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5387ea:{NFSU2_TR(0x5387ea);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5387eb:L5387eb:{c.instructions+=1;NFSU2_TR(0x5387eb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5387f0ull));
TAIL_STATIC(0x51d620u,51d);
}
B5387f0:L5387f0:{c.instructions+=6;NFSU2_TR(0x5387f0);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5387f4:{NFSU2_TR(0x5387f4);
{u32 ea_=u32(u32(7912188u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B5387fa:{NFSU2_TR(0x5387fa);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B5387fd:{NFSU2_TR(0x5387fd);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5387ff:{NFSU2_TR(0x5387ff);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B538802:{NFSU2_TR(0x538802);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5388c5;}}
}
B538808:L538808:{c.instructions+=4;NFSU2_TR(0x538808);
{u32 ea_=u32(u32(7895772u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B53880e:{NFSU2_TR(0x53880e);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B538810:{NFSU2_TR(0x538810);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B538813:{NFSU2_TR(0x538813);
if(r1(R+514)){{goto L5388c7;}}
}
B538819:L538819:{c.instructions+=5;NFSU2_TR(0x538819);
{u32 ea_=u32(r4(R+24)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B53881c:{NFSU2_TR(0x53881c);
{u32 ea_=u32(u32(7881920u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B538822:{NFSU2_TR(0x538822);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B538824:{NFSU2_TR(0x538824);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B538827:{NFSU2_TR(0x538827);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L538830;}}
}
B538829:L538829:{c.instructions+=1;NFSU2_TR(0x538829);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3cull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B538830:L538830:{c.instructions+=5;NFSU2_TR(0x538830);
{u32 ea_=u32(r4(R+24)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B538833:{NFSU2_TR(0x538833);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B538839:{NFSU2_TR(0x538839);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B53883b:{NFSU2_TR(0x53883b);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B53883e:{NFSU2_TR(0x53883e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L53884b;}}
}
B538840:L538840:{c.instructions+=3;NFSU2_TR(0x538840);
{u32 ea_=u32(u32(7881920u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B538846:{NFSU2_TR(0x538846);
{u32 ea_=u32(r4(R+24)+u32(60u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B538849:{NFSU2_TR(0x538849);
{goto L53884e;}
}
B53884b:L53884b:{c.instructions+=1;NFSU2_TR(0x53884b);
{u32 ea_=u32(r4(R+24)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B53884e:L53884e:{c.instructions+=7;NFSU2_TR(0x53884e);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B538852:{NFSU2_TR(0x538852);
{u32 ea_=u32(u32(7894424u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B538858:{NFSU2_TR(0x538858);
{u32 ea_=u32(u32(7977300u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B53885e:{NFSU2_TR(0x53885e);
{u32 ea_=u32(u32(7882052u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B538864:{NFSU2_TR(0x538864);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B538866:{NFSU2_TR(0x538866);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B538869:{NFSU2_TR(0x538869);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L538873;}}
}
B53886b:L53886b:{c.instructions+=2;NFSU2_TR(0x53886b);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B53886d:{NFSU2_TR(0x53886d);
{u32 ea_=u32(u32(7882052u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B538873:L538873:{c.instructions+=6;NFSU2_TR(0x538873);
{u32 ea_=u32(u32(7977296u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B538879:{NFSU2_TR(0x538879);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B53887c:{NFSU2_TR(0x53887c);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x21ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B53887f:{NFSU2_TR(0x53887f);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B538881:{NFSU2_TR(0x538881);
{u32 ea_=u32(u32(7977292u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B538887:{NFSU2_TR(0x538887);
if(r1(R+518)){{goto L5388b5;}}
}
B538889:L538889:{c.instructions+=9;NFSU2_TR(0x538889);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B53888c:{NFSU2_TR(0x53888c);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B53888e:{NFSU2_TR(0x53888e);
{u32 ea_=u32(r4(R+0)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B538891:{NFSU2_TR(0x538891);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x8ull))));
}
B538894:{NFSU2_TR(0x538894);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B538898:{NFSU2_TR(0x538898);
{u32 ea_=u32(r4(R+0)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B53889b:{NFSU2_TR(0x53889b);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B53889e:{NFSU2_TR(0x53889e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53889f:{NFSU2_TR(0x53889f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5388a4ull));
TAIL_STATIC(0x50cb00u,50c);
}
B5388a4:L5388a4:{c.instructions+=5;NFSU2_TR(0x5388a4);
{u32 ea_=u32(r4(R+24)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5388a7:{NFSU2_TR(0x5388a7);
{u32 ea_=u32(u32(7897424u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5388ad:{NFSU2_TR(0x5388ad);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B5388b0:{NFSU2_TR(0x5388b0);
{u32 ea_=u32(r4(R+24)+u32(60u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5388b3:{NFSU2_TR(0x5388b3);
{goto L5388c7;}
}
B5388b5:L5388b5:{c.instructions+=5;NFSU2_TR(0x5388b5);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5388b7:{NFSU2_TR(0x5388b7);
{u32 ea_=u32(r4(R+24)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5388ba:{NFSU2_TR(0x5388ba);
{u32 ea_=u32(u32(7897424u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5388c0:{NFSU2_TR(0x5388c0);
{u32 ea_=u32(r4(R+24)+u32(60u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5388c3:{NFSU2_TR(0x5388c3);
{goto L5388c7;}
}
B5388c5:L5388c5:{c.instructions+=1;NFSU2_TR(0x5388c5);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5388c7:L5388c7:{c.instructions+=3;NFSU2_TR(0x5388c7);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5388c9:{NFSU2_TR(0x5388c9);
__builtin_memmove((R+4),(R+28),4);
}
B5388cb:{NFSU2_TR(0x5388cb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5388d0ull));
TAIL_STATIC(0x43be80u,43b);
}
B5388d0:L5388d0:{c.instructions+=7;NFSU2_TR(0x5388d0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5388d3:{NFSU2_TR(0x5388d3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5388d6:{NFSU2_TR(0x5388d6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5388d9:{NFSU2_TR(0x5388d9);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5388da:{NFSU2_TR(0x5388da);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5388db:{NFSU2_TR(0x5388db);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5388dc:{NFSU2_TR(0x5388dc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5388e1ull));
TAIL_STATIC(0x51df00u,51d);
}
B5388e1:L5388e1:{c.instructions+=1;NFSU2_TR(0x5388e1);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B5388e4:L5388e4:{c.instructions+=4;NFSU2_TR(0x5388e4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5388e5:{NFSU2_TR(0x5388e5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5388e6:{NFSU2_TR(0x5388e6);
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
B5388e9:{NFSU2_TR(0x5388e9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5388f0:L5388f0:{c.instructions+=3;NFSU2_TR(0x5388f0);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5388f2:{NFSU2_TR(0x5388f2);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2full))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5388f6:{NFSU2_TR(0x5388f6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5388fbull));
TAIL_STATIC(0x52eb90u,52e);
}
B5388fb:L5388fb:{c.instructions+=1;NFSU2_TR(0x5388fb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B538900:L538900:{c.instructions+=3;NFSU2_TR(0x538900);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B538902:{NFSU2_TR(0x538902);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2full))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B538906:{NFSU2_TR(0x538906);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53890bull));
TAIL_STATIC(0x52eb90u,52e);
}
B53890b:L53890b:{c.instructions+=1;NFSU2_TR(0x53890b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B538910:L538910:{c.instructions+=8;NFSU2_TR(0x538910);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x8ull))));
}
B538913:{NFSU2_TR(0x538913);
__builtin_memmove((R+0),(R+16),4);
}
B538917:{NFSU2_TR(0x538917);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B538918:{NFSU2_TR(0x538918);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B53891c:{NFSU2_TR(0x53891c);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53891d:{NFSU2_TR(0x53891d);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B538925:{NFSU2_TR(0x538925);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B53892d:{NFSU2_TR(0x53892d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x538932ull));
TAIL_STATIC(0x51fb70u,51f);
}
B538932:L538932:{c.instructions+=2;NFSU2_TR(0x538932);
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
B538935:{NFSU2_TR(0x538935);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B538940:L538940:{c.instructions+=7;NFSU2_TR(0x538940);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B538941:{NFSU2_TR(0x538941);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B538942:{NFSU2_TR(0x538942);
__builtin_memmove((R+24),(R+4),4);
}
B538944:{NFSU2_TR(0x538944);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B538947:{NFSU2_TR(0x538947);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B53894a:{NFSU2_TR(0x53894a);
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
B53894c:{NFSU2_TR(0x53894c);
if(r1(R+518)){{goto L538a1e;}}
}
B538952:L538952:{c.instructions+=3;NFSU2_TR(0x538952);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B538955:{NFSU2_TR(0x538955);
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
B538957:{NFSU2_TR(0x538957);
if(r1(R+518)){{goto L538a1e;}}
}
B53895d:L53895d:{c.instructions+=3;NFSU2_TR(0x53895d);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2eull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B538960:{NFSU2_TR(0x538960);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B538962:{NFSU2_TR(0x538962);
if(r1(R+518)){{goto L5389be;}}
}
B538964:L538964:{c.instructions+=11;NFSU2_TR(0x538964);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2eull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B538968:{NFSU2_TR(0x538968);
__builtin_memmove((R+0),gp(0x8651ac),4);
}
B53896d:{NFSU2_TR(0x53896d);
__builtin_memmove(gp(0x8641a0),(R+0),4);
}
B538972:{NFSU2_TR(0x538972);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B538978:{NFSU2_TR(0x538978);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B53897b:{NFSU2_TR(0x53897b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53897c:{NFSU2_TR(0x53897c);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
}
B53897d:{NFSU2_TR(0x53897d);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53897e:{NFSU2_TR(0x53897e);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B538980:{NFSU2_TR(0x538980);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((R+4),(U+0),4);
}
B538983:{NFSU2_TR(0x538983);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x538988ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x538080u);}goto L538080;}
}
B538988:L538988:{c.instructions+=8;NFSU2_TR(0x538988);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B53898b:{NFSU2_TR(0x53898b);
{u32 ea_=u32(r4(R+0)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B53898e:{NFSU2_TR(0x53898e);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B538990:{NFSU2_TR(0x538990);
{u32 ea_=u32(r4(R+24)+u32(152u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B538996:{NFSU2_TR(0x538996);
{u32 ea_=u32(r4(R+24)+u32(144u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B53899c:{NFSU2_TR(0x53899c);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B53899e:{NFSU2_TR(0x53899e);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5389a1:{NFSU2_TR(0x5389a1);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L5389ac;}}
}
B5389a3:L5389a3:{c.instructions+=1;NFSU2_TR(0x5389a3);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xbcull))));
w2(U+4,u16(0x2ull));
s2(u32(r4(U+0)),r2(U+4));
}
B5389ac:L5389ac:{c.instructions+=4;NFSU2_TR(0x5389ac);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5389af:{NFSU2_TR(0x5389af);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5389b0:{NFSU2_TR(0x5389b0);
__builtin_memmove((R+4),(R+24),4);
}
B5389b2:{NFSU2_TR(0x5389b2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5389b7ull));
TAIL_STATIC(0x52fa70u,52f);
}
B5389b7:L5389b7:{c.instructions+=1;NFSU2_TR(0x5389b7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
w4(U+4,u32(0xfffffff7ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5389be:L5389be:{c.instructions+=8;NFSU2_TR(0x5389be);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5389c1:{NFSU2_TR(0x5389c1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5389c4:{NFSU2_TR(0x5389c4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5389c7:{NFSU2_TR(0x5389c7);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5389c8:{NFSU2_TR(0x5389c8);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5389c9:{NFSU2_TR(0x5389c9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5389ca:{NFSU2_TR(0x5389ca);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5389cb:{NFSU2_TR(0x5389cb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5389d0ull));
TAIL_STATIC(0x51df00u,51d);
}
B5389d0:L5389d0:{c.instructions+=4;NFSU2_TR(0x5389d0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5389d2:{NFSU2_TR(0x5389d2);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B5389d5:{NFSU2_TR(0x5389d5);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5389d7:{NFSU2_TR(0x5389d7);
if(r1(R+518)){{goto L5389de;}}
}
B5389d9:L5389d9:{c.instructions+=2;NFSU2_TR(0x5389d9);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+28),(U+0),4);
}
B5389dc:{NFSU2_TR(0x5389dc);
{goto L5389e0;}
}
B5389de:L5389de:{c.instructions+=1;NFSU2_TR(0x5389de);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B5389e0:L5389e0:{c.instructions+=2;NFSU2_TR(0x5389e0);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5389e2:{NFSU2_TR(0x5389e2);
if(r1(R+518)){{goto L5389e9;}}
}
B5389e4:L5389e4:{c.instructions+=2;NFSU2_TR(0x5389e4);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+0),(U+0),4);
}
B5389e7:{NFSU2_TR(0x5389e7);
{goto L5389eb;}
}
B5389e9:L5389e9:{c.instructions+=1;NFSU2_TR(0x5389e9);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5389eb:L5389eb:{c.instructions+=2;NFSU2_TR(0x5389eb);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5389ed:{NFSU2_TR(0x5389ed);
if(r1(R+518)){{goto L538a03;}}
}
B5389ef:L5389ef:{c.instructions+=3;NFSU2_TR(0x5389ef);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5389f0:{NFSU2_TR(0x5389f0);
__builtin_memmove((R+4),(R+24),4);
}
B5389f2:{NFSU2_TR(0x5389f2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5389f7ull));
TAIL_STATIC(0x52f8c0u,52f);
}
B5389f7:L5389f7:{c.instructions+=3;NFSU2_TR(0x5389f7);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5389fa:{NFSU2_TR(0x5389fa);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5389fc:{NFSU2_TR(0x5389fc);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5389deu);}goto L5389de;}}
}
B5389fe:L5389fe:{c.instructions+=2;NFSU2_TR(0x5389fe);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0xfffffffcull))));
}
B538a01:{NFSU2_TR(0x538a01);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5389e0u);}goto L5389e0;}
}
B538a03:L538a03:{c.instructions+=7;NFSU2_TR(0x538a03);
__builtin_memmove((R+8),gp(0x865198),4);
}
B538a09:{NFSU2_TR(0x538a09);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B538a0b:{NFSU2_TR(0x538a0b);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B538a0d:{NFSU2_TR(0x538a0d);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B538a0e:{NFSU2_TR(0x538a0e);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x90ull))));
}
B538a14:{NFSU2_TR(0x538a14);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B538a15:{NFSU2_TR(0x538a15);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x538a1aull));
TAIL_STATIC(0x574e30u,574);
}
B538a1a:L538a1a:{c.instructions+=2;NFSU2_TR(0x538a1a);
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
B538a1d:{NFSU2_TR(0x538a1d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B538a1e:L538a1e:{c.instructions+=3;NFSU2_TR(0x538a1e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B538a1f:{NFSU2_TR(0x538a1f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B538a20:{NFSU2_TR(0x538a20);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B538a30:L538a30:{c.instructions+=10;NFSU2_TR(0x538a30);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B538a31:{NFSU2_TR(0x538a31);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B538a32:{NFSU2_TR(0x538a32);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B538a33:{NFSU2_TR(0x538a33);
__builtin_memmove((R+24),(R+4),4);
}
B538a35:{NFSU2_TR(0x538a35);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B538a38:{NFSU2_TR(0x538a38);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B538a3b:{NFSU2_TR(0x538a3b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B538a3c:{NFSU2_TR(0x538a3c);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B538a3e:{NFSU2_TR(0x538a3e);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B538a40:{NFSU2_TR(0x538a40);
if(r1(R+518)){{goto L538a47;}}
}
B538a42:L538a42:{c.instructions+=2;NFSU2_TR(0x538a42);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+20),(U+0),4);
}
B538a45:{NFSU2_TR(0x538a45);
{goto L538a49;}
}
B538a47:L538a47:{c.instructions+=1;NFSU2_TR(0x538a47);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B538a49:L538a49:{c.instructions+=3;NFSU2_TR(0x538a49);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B538a4d:{NFSU2_TR(0x538a4d);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B538a4f:{NFSU2_TR(0x538a4f);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L538a65;}}
}
B538a51:L538a51:{c.instructions+=4;NFSU2_TR(0x538a51);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B538a52:{NFSU2_TR(0x538a52);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B538a53:{NFSU2_TR(0x538a53);
__builtin_memmove((R+4),(R+12),4);
}
B538a55:{NFSU2_TR(0x538a55);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x538a5aull));
TAIL_STATIC(0x43be60u,43b);
}
B538a5a:L538a5a:{c.instructions+=2;NFSU2_TR(0x538a5a);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B538a5c:{NFSU2_TR(0x538a5c);
if(r1(R+518)){{goto L538a63;}}
}
B538a5e:L538a5e:{c.instructions+=2;NFSU2_TR(0x538a5e);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+20),(U+0),4);
}
B538a61:{NFSU2_TR(0x538a61);
{goto L538a65;}
}
B538a63:L538a63:{c.instructions+=1;NFSU2_TR(0x538a63);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B538a65:L538a65:{c.instructions+=3;NFSU2_TR(0x538a65);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2dull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B538a68:{NFSU2_TR(0x538a68);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B538a6a:{NFSU2_TR(0x538a6a);
if(r1(R+518)){{goto L538a71;}}
}
B538a6c:L538a6c:{c.instructions+=2;NFSU2_TR(0x538a6c);
{u32 ea_=u32(r4(R+20)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B538a6f:{NFSU2_TR(0x538a6f);
{goto L538a74;}
}
B538a71:L538a71:{c.instructions+=1;NFSU2_TR(0x538a71);
{u32 ea_=u32(r4(R+20)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B538a74:L538a74:{c.instructions+=6;NFSU2_TR(0x538a74);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B538a76:{NFSU2_TR(0x538a76);
{u32 ea_=u32(r4(R+24)+u32(152u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B538a7c:{NFSU2_TR(0x538a7c);
{u32 ea_=u32(r4(R+24)+u32(144u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B538a82:{NFSU2_TR(0x538a82);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B538a84:{NFSU2_TR(0x538a84);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B538a87:{NFSU2_TR(0x538a87);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L538a92;}}
}
B538a89:L538a89:{c.instructions+=1;NFSU2_TR(0x538a89);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xbcull))));
w2(U+4,u16(0x2ull));
s2(u32(r4(U+0)),r2(U+4));
}
B538a92:L538a92:{c.instructions+=8;NFSU2_TR(0x538a92);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x98ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B538a98:{NFSU2_TR(0x538a98);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x9cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B538a9e:{NFSU2_TR(0x538a9e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x90ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B538aa4:{NFSU2_TR(0x538aa4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x94ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B538aaa:{NFSU2_TR(0x538aaa);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xbcull))));
__builtin_memmove((U+4),(R+28),2);
s2(u32(r4(U+0)),r2(U+4));
}
B538ab1:{NFSU2_TR(0x538ab1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+0),(U+0),4);
}
B538ab3:{NFSU2_TR(0x538ab3);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B538ab5:{NFSU2_TR(0x538ab5);
if(r1(R+518)){{goto L538ac0;}}
}
B538ab7:L538ab7:{c.instructions+=2;NFSU2_TR(0x538ab7);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+28),(U+0),4);
}
B538aba:{NFSU2_TR(0x538aba);
__builtin_memmove((R+12),(R+12),4);
}
B538ac0:L538ac0:{c.instructions+=2;NFSU2_TR(0x538ac0);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B538ac2:{NFSU2_TR(0x538ac2);
if(r1(R+518)){{goto L538ac9;}}
}
B538ac4:L538ac4:{c.instructions+=2;NFSU2_TR(0x538ac4);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+0),(U+0),4);
}
B538ac7:{NFSU2_TR(0x538ac7);
{goto L538acb;}
}
B538ac9:L538ac9:{c.instructions+=1;NFSU2_TR(0x538ac9);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B538acb:L538acb:{c.instructions+=2;NFSU2_TR(0x538acb);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B538acd:{NFSU2_TR(0x538acd);
if(r1(R+518)){{goto L538ae7;}}
}
B538acf:L538acf:{c.instructions+=3;NFSU2_TR(0x538acf);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B538ad0:{NFSU2_TR(0x538ad0);
__builtin_memmove((R+4),(R+24),4);
}
B538ad2:{NFSU2_TR(0x538ad2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x538ad7ull));
TAIL_STATIC(0x52f8c0u,52f);
}
B538ad7:L538ad7:{c.instructions+=3;NFSU2_TR(0x538ad7);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B538ada:{NFSU2_TR(0x538ada);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B538adc:{NFSU2_TR(0x538adc);
if(r1(R+518)){{goto L538ae3;}}
}
B538ade:L538ade:{c.instructions+=2;NFSU2_TR(0x538ade);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0xfffffffcull))));
}
B538ae1:{NFSU2_TR(0x538ae1);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x538ac0u);}goto L538ac0;}
}
B538ae3:L538ae3:{c.instructions+=2;NFSU2_TR(0x538ae3);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B538ae5:{NFSU2_TR(0x538ae5);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x538ac0u);}goto L538ac0;}
}
B538ae7:L538ae7:{c.instructions+=3;NFSU2_TR(0x538ae7);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B538aeb:{NFSU2_TR(0x538aeb);
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
B538aed:{NFSU2_TR(0x538aed);
if(r1(R+518)){{goto L538af2;}}
}
B538aef:L538aef:{c.instructions+=2;NFSU2_TR(0x538aef);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B538af0:{NFSU2_TR(0x538af0);
{goto L538b00;}
}
B538af2:L538af2:{c.instructions+=3;NFSU2_TR(0x538af2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+0),(U+0),4);
}
B538af4:{NFSU2_TR(0x538af4);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B538af6:{NFSU2_TR(0x538af6);
if(r1(R+518)){{goto L538afd;}}
}
B538af8:L538af8:{c.instructions+=2;NFSU2_TR(0x538af8);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),u32(0xfffffffcull)));
w1(R+523,scarry<u32>(r4(R+0),u32(0xfffffffcull)));
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B538afb:{NFSU2_TR(0x538afb);
{goto L538aff;}
}
B538afd:L538afd:{c.instructions+=1;NFSU2_TR(0x538afd);
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
B538aff:L538aff:{c.instructions+=1;NFSU2_TR(0x538aff);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B538b00:L538b00:{c.instructions+=3;NFSU2_TR(0x538b00);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B538b02:{NFSU2_TR(0x538b02);
__builtin_memmove((R+4),(R+24),4);
}
B538b04:{NFSU2_TR(0x538b04);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x538b07ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B538b07:L538b07:{c.instructions+=8;NFSU2_TR(0x538b07);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B538b0d:{NFSU2_TR(0x538b0d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B538b10:{NFSU2_TR(0x538b10);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B538b11:{NFSU2_TR(0x538b11);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
}
B538b12:{NFSU2_TR(0x538b12);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B538b13:{NFSU2_TR(0x538b13);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B538b15:{NFSU2_TR(0x538b15);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((R+4),(U+0),4);
}
B538b18:{NFSU2_TR(0x538b18);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x538b1dull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x538080u);}goto L538080;}
}
B538b1d:L538b1d:{c.instructions+=5;NFSU2_TR(0x538b1d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B538b1e:{NFSU2_TR(0x538b1e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B538b1f:{NFSU2_TR(0x538b1f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B538b20:{NFSU2_TR(0x538b20);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B538b21:{NFSU2_TR(0x538b21);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B538b30:L538b30:{c.instructions+=9;NFSU2_TR(0x538b30);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B538b31:{NFSU2_TR(0x538b31);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B538b32:{NFSU2_TR(0x538b32);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B538b33:{NFSU2_TR(0x538b33);
__builtin_memmove((R+28),(R+4),4);
}
B538b35:{NFSU2_TR(0x538b35);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B538b38:{NFSU2_TR(0x538b38);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B538b3a:{NFSU2_TR(0x538b3a);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B538b3d:{NFSU2_TR(0x538b3d);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xe4ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B538b44:{NFSU2_TR(0x538b44);
if(r1(R+518)){{goto L538b4b;}}
}
B538b46:L538b46:{c.instructions+=2;NFSU2_TR(0x538b46);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+24),(U+0),4);
}
B538b49:{NFSU2_TR(0x538b49);
{goto L538b50;}
}
B538b4b:L538b4b:{c.instructions+=2;NFSU2_TR(0x538b4b);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B538b4d:{NFSU2_TR(0x538b4d);
__builtin_memmove((R+4),(R+4),4);
}
B538b50:L538b50:{c.instructions+=2;NFSU2_TR(0x538b50);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B538b52:{NFSU2_TR(0x538b52);
if(r1(R+518)){{goto L538b59;}}
}
B538b54:L538b54:{c.instructions+=2;NFSU2_TR(0x538b54);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+0),(U+0),4);
}
B538b57:{NFSU2_TR(0x538b57);
{goto L538b5b;}
}
B538b59:L538b59:{c.instructions+=1;NFSU2_TR(0x538b59);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B538b5b:L538b5b:{c.instructions+=2;NFSU2_TR(0x538b5b);
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
B538b5d:{NFSU2_TR(0x538b5d);
if(r1(R+518)){{goto L538b73;}}
}
B538b5f:L538b5f:{c.instructions+=3;NFSU2_TR(0x538b5f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B538b60:{NFSU2_TR(0x538b60);
__builtin_memmove((R+4),(R+28),4);
}
B538b62:{NFSU2_TR(0x538b62);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x538b67ull));
TAIL_STATIC(0x52f8c0u,52f);
}
B538b67:L538b67:{c.instructions+=3;NFSU2_TR(0x538b67);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B538b6a:{NFSU2_TR(0x538b6a);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B538b6c:{NFSU2_TR(0x538b6c);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x538b4bu);}goto L538b4b;}}
}
B538b6e:L538b6e:{c.instructions+=2;NFSU2_TR(0x538b6e);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0xfffffffcull))));
}
B538b71:{NFSU2_TR(0x538b71);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x538b50u);}goto L538b50;}
}
B538b73:L538b73:{c.instructions+=4;NFSU2_TR(0x538b73);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B538b74:{NFSU2_TR(0x538b74);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B538b75:{NFSU2_TR(0x538b75);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B538b76:{NFSU2_TR(0x538b76);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B538b80:L538b80:{c.instructions+=4;NFSU2_TR(0x538b80);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B538b81:{NFSU2_TR(0x538b81);
__builtin_memmove((R+24),(R+4),4);
}
B538b83:{NFSU2_TR(0x538b83);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((R+4),(U+0),4);
}
B538b86:{NFSU2_TR(0x538b86);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x538b8bull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x538130u);}goto L538130;}
}
B538b8b:L538b8b:{c.instructions+=4;NFSU2_TR(0x538b8b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x74ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B538b8e:{NFSU2_TR(0x538b8e);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xaull))));
}
B538b91:{NFSU2_TR(0x538b91);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0x14ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x14ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x14ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B538b94:{NFSU2_TR(0x538b94);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L538bd5;}}
}
B538b96:L538b96:{c.instructions+=2;NFSU2_TR(0x538b96);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x538be8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B538b9d:{NFSU2_TR(0x538b9d);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x538bdcull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B538ba4:L538ba4:{c.instructions+=5;NFSU2_TR(0x538ba4);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B538ba7:{NFSU2_TR(0x538ba7);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B538ba9:{NFSU2_TR(0x538ba9);
__builtin_memmove((R+4),(R+24),4);
}
B538bab:{NFSU2_TR(0x538bab);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B538bad:{NFSU2_TR(0x538bad);
if(r1(R+518)){{goto L538bcc;}}
}
B538baf:L538baf:{c.instructions+=1;NFSU2_TR(0x538baf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x538bb4ull));
TAIL_STATIC(0x51fac0u,51f);
}
B538bb4:L538bb4:{c.instructions+=3;NFSU2_TR(0x538bb4);
w1(R+0,u8(0x1ull));
}
B538bb6:{NFSU2_TR(0x538bb6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B538bb7:{NFSU2_TR(0x538bb7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B538bb8:L538bb8:{c.instructions+=5;NFSU2_TR(0x538bb8);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B538bbb:{NFSU2_TR(0x538bbb);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B538bbd:{NFSU2_TR(0x538bbd);
__builtin_memmove((R+4),(R+24),4);
}
B538bbf:{NFSU2_TR(0x538bbf);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B538bc1:{NFSU2_TR(0x538bc1);
if(r1(R+518)){{goto L538bcc;}}
}
B538bc3:L538bc3:{c.instructions+=1;NFSU2_TR(0x538bc3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x538bc8ull));
TAIL_STATIC(0x51fac0u,51f);
}
B538bc8:L538bc8:{c.instructions+=3;NFSU2_TR(0x538bc8);
w1(R+0,u8(0x1ull));
}
B538bca:{NFSU2_TR(0x538bca);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B538bcb:{NFSU2_TR(0x538bcb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B538bcc:L538bcc:{c.instructions+=1;NFSU2_TR(0x538bcc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x538bd1ull));
TAIL_STATIC(0x51f9f0u,51f);
}
B538bd1:L538bd1:{c.instructions+=3;NFSU2_TR(0x538bd1);
w1(R+0,u8(0x1ull));
}
B538bd3:{NFSU2_TR(0x538bd3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B538bd4:{NFSU2_TR(0x538bd4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B538bd5:L538bd5:{c.instructions+=3;NFSU2_TR(0x538bd5);
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
B538bd7:{NFSU2_TR(0x538bd7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B538bd8:{NFSU2_TR(0x538bd8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B538c00:L538c00:{c.instructions+=5;NFSU2_TR(0x538c00);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B538c01:{NFSU2_TR(0x538c01);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B538c02:{NFSU2_TR(0x538c02);
u8 U[4];
w4(U+0,u32(0x79bda0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B538c07:{NFSU2_TR(0x538c07);
__builtin_memmove((R+24),(R+4),4);
}
B538c09:{NFSU2_TR(0x538c09);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x538c0eull));
TAIL_STATIC(0x50d510u,50d);
}
B538c0e:L538c0e:{c.instructions+=3;NFSU2_TR(0x538c0e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B538c11:{NFSU2_TR(0x538c11);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((R+4),(U+0),4);
}
B538c14:{NFSU2_TR(0x538c14);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x538c19ull));
TAIL_STATIC(0x51fd10u,51f);
}
B538c19:L538c19:{c.instructions+=3;NFSU2_TR(0x538c19);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B538c1c:{NFSU2_TR(0x538c1c);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B538c1e:{NFSU2_TR(0x538c1e);
if(r1(R+518)){{goto L538c3d;}}
}
B538c20:L538c20:{c.instructions+=2;NFSU2_TR(0x538c20);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B538c21:{NFSU2_TR(0x538c21);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x538c26ull));
TAIL_STATIC(0x52cef0u,52c);
}
B538c26:L538c26:{c.instructions+=3;NFSU2_TR(0x538c26);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B538c29:{NFSU2_TR(0x538c29);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B538c2b:{NFSU2_TR(0x538c2b);
if(r1(R+518)){{goto L538c3d;}}
}
B538c2d:L538c2d:{c.instructions+=3;NFSU2_TR(0x538c2d);
u8 U[4];
w4(U+0,u32(0x47ff4e7cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B538c32:{NFSU2_TR(0x538c32);
__builtin_memmove((R+4),(R+0),4);
}
B538c34:{NFSU2_TR(0x538c34);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x538c39ull));
TAIL_STATIC(0x517f80u,517);
}
B538c39:L538c39:{c.instructions+=2;NFSU2_TR(0x538c39);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B538c3b:{NFSU2_TR(0x538c3b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L538c54;}}
}
B538c3d:L538c3d:{c.instructions+=3;NFSU2_TR(0x538c3d);
__builtin_memmove((R+0),gp(0x8384c4),4);
}
B538c42:{NFSU2_TR(0x538c42);
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
B538c44:{NFSU2_TR(0x538c44);
if(r1(R+518)){{goto L538c99;}}
}
B538c46:L538c46:{c.instructions+=4;NFSU2_TR(0x538c46);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B538c49:{NFSU2_TR(0x538c49);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B538c4a:{NFSU2_TR(0x538c4a);
u8 U[4];
w4(U+0,u32(0x47ff4e7cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B538c4f:{NFSU2_TR(0x538c4f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x538c54ull));
TAIL_STATIC(0x52c570u,52c);
}
B538c54:L538c54:{c.instructions+=3;NFSU2_TR(0x538c54);
__builtin_memmove((R+28),(R+0),4);
}
B538c56:{NFSU2_TR(0x538c56);
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
B538c58:{NFSU2_TR(0x538c58);
if(r1(R+518)){{goto L538c99;}}
}
B538c5a:L538c5a:{c.instructions+=3;NFSU2_TR(0x538c5a);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B538c5d:{NFSU2_TR(0x538c5d);
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
B538c5f:{NFSU2_TR(0x538c5f);
if(r1(R+518)){{goto L538c99;}}
}
B538c61:L538c61:{c.instructions+=1;NFSU2_TR(0x538c61);
w4(R+0,u32(0x9e99ull));
}
B538c66:L538c66:{c.instructions+=2;NFSU2_TR(0x538c66);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B538c69:{NFSU2_TR(0x538c69);
if(r1(R+518)){{goto L538c75;}}
}
B538c6b:L538c6b:{c.instructions+=3;NFSU2_TR(0x538c6b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B538c6e:{NFSU2_TR(0x538c6e);
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
B538c70:{NFSU2_TR(0x538c70);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x538c66u);}goto L538c66;}}
}
B538c72:L538c72:{c.instructions+=3;NFSU2_TR(0x538c72);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B538c73:{NFSU2_TR(0x538c73);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B538c74:{NFSU2_TR(0x538c74);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B538c75:L538c75:{c.instructions+=2;NFSU2_TR(0x538c75);
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
B538c77:{NFSU2_TR(0x538c77);
if(r1(R+518)){{goto L538c99;}}
}
B538c79:L538c79:{c.instructions+=2;NFSU2_TR(0x538c79);
u8 U[22];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(R+24))<(r4(U+14))));
w1(R+523,sborrow<u32>(r4(R+24),r4(U+14)));
w4(U+18,u32(u32(r4(R+24))-u32(r4(U+14))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B538c7c:{NFSU2_TR(0x538c7c);
if(r1(R+518)){{goto L538c92;}}
}
B538c7e:L538c7e:{c.instructions+=3;NFSU2_TR(0x538c7e);
__builtin_memmove((R+4),(R+28),4);
}
B538c80:{NFSU2_TR(0x538c80);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B538c83:{NFSU2_TR(0x538c83);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x538c88ull));
TAIL_STATIC(0x517720u,517);
}
B538c88:L538c88:{c.instructions+=2;NFSU2_TR(0x538c88);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B538c8b:{NFSU2_TR(0x538c8b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B538c92:L538c92:{c.instructions+=1;NFSU2_TR(0x538c92);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B538c99:L538c99:{c.instructions+=3;NFSU2_TR(0x538c99);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B538c9a:{NFSU2_TR(0x538c9a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B538c9b:{NFSU2_TR(0x538c9b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B538ca0:L538ca0:{c.instructions+=5;NFSU2_TR(0x538ca0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B538ca1:{NFSU2_TR(0x538ca1);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B538ca2:{NFSU2_TR(0x538ca2);
u8 U[4];
w4(U+0,u32(0x79bdc0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B538ca7:{NFSU2_TR(0x538ca7);
__builtin_memmove((R+24),(R+4),4);
}
B538ca9:{NFSU2_TR(0x538ca9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x538caeull));
TAIL_STATIC(0x50d510u,50d);
}
B538cae:L538cae:{c.instructions+=4;NFSU2_TR(0x538cae);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B538cb4:{NFSU2_TR(0x538cb4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B538cb7:{NFSU2_TR(0x538cb7);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B538cb9:{NFSU2_TR(0x538cb9);
if(r1(R+518)){{goto L538cef;}}
}
B538cbb:L538cbb:{c.instructions+=4;NFSU2_TR(0x538cbb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B538cbe:{NFSU2_TR(0x538cbe);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B538cbf:{NFSU2_TR(0x538cbf);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7bull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B538cc3:{NFSU2_TR(0x538cc3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x538cc8ull));
TAIL_STATIC(0x52cef0u,52c);
}
B538cc8:L538cc8:{c.instructions+=11;NFSU2_TR(0x538cc8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B538ccb:{NFSU2_TR(0x538ccb);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B538cce:{NFSU2_TR(0x538cce);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B538ccf:{NFSU2_TR(0x538ccf);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B538cd0:{NFSU2_TR(0x538cd0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B538cd1:{NFSU2_TR(0x538cd1);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B538cd4:{NFSU2_TR(0x538cd4);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B538cd7:{NFSU2_TR(0x538cd7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B538cda:{NFSU2_TR(0x538cda);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B538cdb:{NFSU2_TR(0x538cdb);
u8 U[4];
w4(U+0,u32(0x79b958ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B538ce0:{NFSU2_TR(0x538ce0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x538ce5ull));
TAIL_STATIC(0x50d510u,50d);
}
B538ce5:L538ce5:{c.instructions+=2;NFSU2_TR(0x538ce5);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B538ce8:{NFSU2_TR(0x538ce8);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14cull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B538cef:L538cef:{c.instructions+=2;NFSU2_TR(0x538cef);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((R+4),(U+0),4);
}
B538cf2:{NFSU2_TR(0x538cf2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x538cf7ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x538b30u);}goto L538b30;}
}
B538cf7:L538cf7:{c.instructions+=3;NFSU2_TR(0x538cf7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B538cfa:{NFSU2_TR(0x538cfa);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B538cfc:{NFSU2_TR(0x538cfc);
if(r1(R+518)){{goto L538d1b;}}
}
B538cfe:L538cfe:{c.instructions+=2;NFSU2_TR(0x538cfe);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B538cff:{NFSU2_TR(0x538cff);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x538d04ull));
TAIL_STATIC(0x52cef0u,52c);
}
B538d04:L538d04:{c.instructions+=3;NFSU2_TR(0x538d04);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B538d07:{NFSU2_TR(0x538d07);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B538d09:{NFSU2_TR(0x538d09);
if(r1(R+518)){{goto L538d1b;}}
}
B538d0b:L538d0b:{c.instructions+=3;NFSU2_TR(0x538d0b);
u8 U[4];
w4(U+0,u32(0x47ff4e7cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B538d10:{NFSU2_TR(0x538d10);
__builtin_memmove((R+4),(R+0),4);
}
B538d12:{NFSU2_TR(0x538d12);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x538d17ull));
TAIL_STATIC(0x517f80u,517);
}
B538d17:L538d17:{c.instructions+=2;NFSU2_TR(0x538d17);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B538d19:{NFSU2_TR(0x538d19);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L538d32;}}
}
B538d1b:L538d1b:{c.instructions+=3;NFSU2_TR(0x538d1b);
__builtin_memmove((R+0),gp(0x8384c4),4);
}
B538d20:{NFSU2_TR(0x538d20);
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
B538d22:{NFSU2_TR(0x538d22);
if(r1(R+518)){{goto L538d77;}}
}
B538d24:L538d24:{c.instructions+=4;NFSU2_TR(0x538d24);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B538d27:{NFSU2_TR(0x538d27);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B538d28:{NFSU2_TR(0x538d28);
u8 U[4];
w4(U+0,u32(0x47ff4e7cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B538d2d:{NFSU2_TR(0x538d2d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x538d32ull));
TAIL_STATIC(0x52c570u,52c);
}
B538d32:L538d32:{c.instructions+=3;NFSU2_TR(0x538d32);
__builtin_memmove((R+28),(R+0),4);
}
B538d34:{NFSU2_TR(0x538d34);
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
B538d36:{NFSU2_TR(0x538d36);
if(r1(R+518)){{goto L538d77;}}
}
B538d38:L538d38:{c.instructions+=3;NFSU2_TR(0x538d38);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B538d3b:{NFSU2_TR(0x538d3b);
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
B538d3d:{NFSU2_TR(0x538d3d);
if(r1(R+518)){{goto L538d77;}}
}
B538d3f:L538d3f:{c.instructions+=1;NFSU2_TR(0x538d3f);
w4(R+0,u32(0x3d8eabcull));
}
B538d44:L538d44:{c.instructions+=2;NFSU2_TR(0x538d44);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B538d47:{NFSU2_TR(0x538d47);
if(r1(R+518)){{goto L538d53;}}
}
B538d49:L538d49:{c.instructions+=3;NFSU2_TR(0x538d49);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B538d4c:{NFSU2_TR(0x538d4c);
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
B538d4e:{NFSU2_TR(0x538d4e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x538d44u);}goto L538d44;}}
}
B538d50:L538d50:{c.instructions+=3;NFSU2_TR(0x538d50);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B538d51:{NFSU2_TR(0x538d51);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B538d52:{NFSU2_TR(0x538d52);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B538d53:L538d53:{c.instructions+=2;NFSU2_TR(0x538d53);
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
B538d55:{NFSU2_TR(0x538d55);
if(r1(R+518)){{goto L538d77;}}
}
B538d57:L538d57:{c.instructions+=2;NFSU2_TR(0x538d57);
u8 U[22];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(R+24))<(r4(U+14))));
w1(R+523,sborrow<u32>(r4(R+24),r4(U+14)));
w4(U+18,u32(u32(r4(R+24))-u32(r4(U+14))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B538d5a:{NFSU2_TR(0x538d5a);
if(r1(R+518)){{goto L538d70;}}
}
B538d5c:L538d5c:{c.instructions+=3;NFSU2_TR(0x538d5c);
__builtin_memmove((R+4),(R+28),4);
}
B538d5e:{NFSU2_TR(0x538d5e);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B538d61:{NFSU2_TR(0x538d61);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x538d66ull));
TAIL_STATIC(0x517720u,517);
}
B538d66:L538d66:{c.instructions+=2;NFSU2_TR(0x538d66);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B538d69:{NFSU2_TR(0x538d69);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B538d70:L538d70:{c.instructions+=1;NFSU2_TR(0x538d70);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B538d77:L538d77:{c.instructions+=3;NFSU2_TR(0x538d77);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B538d78:{NFSU2_TR(0x538d78);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B538d79:{NFSU2_TR(0x538d79);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B538d80:L538d80:{c.instructions+=6;NFSU2_TR(0x538d80);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B538d81:{NFSU2_TR(0x538d81);
__builtin_memmove((R+24),(R+4),4);
}
B538d83:{NFSU2_TR(0x538d83);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B538d86:{NFSU2_TR(0x538d86);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xfffffffeull))));
}
B538d89:{NFSU2_TR(0x538d89);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0x9ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x9ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x9ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B538d8c:{NFSU2_TR(0x538d8c);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L538df6;}}
}
B538d8e:L538d8e:{c.instructions+=2;NFSU2_TR(0x538d8e);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x538e64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B538d95:{NFSU2_TR(0x538d95);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x538e58ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B538d9c:L538d9c:{c.instructions+=4;NFSU2_TR(0x538d9c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B538d9f:{NFSU2_TR(0x538d9f);
w4(R+0,u32(0x1eull));
}
B538da4:{NFSU2_TR(0x538da4);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B538da6:{NFSU2_TR(0x538da6);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L538df6;}}
}
B538da8:L538da8:{c.instructions+=2;NFSU2_TR(0x538da8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B538dab:{NFSU2_TR(0x538dab);
{goto L538df6;}
}
B538dad:L538dad:{c.instructions+=2;NFSU2_TR(0x538dad);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(U+8),u32(0x1cull)));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x1cull))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B538db1:{NFSU2_TR(0x538db1);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L538df6;}}
}
B538db3:L538db3:{c.instructions+=4;NFSU2_TR(0x538db3);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x74ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(r2(U+4)));
}
B538db7:{NFSU2_TR(0x538db7);
__builtin_memmove((R+8),(R+4),4);
}
B538db9:{NFSU2_TR(0x538db9);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0x80000003ull))));
w1(R+519,u8(s32(r4(R+8))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
}
B538dbf:{NFSU2_TR(0x538dbf);
u8 U[1];
w1(U+0,u8(!(r1(R+519))));
if(r1(U+0)){{goto L538dc6;}}
}
B538dc1:L538dc1:{c.instructions+=3;NFSU2_TR(0x538dc1);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
}
B538dc2:{NFSU2_TR(0x538dc2);
w4(R+8,u32(u32(r4(R+8))|u32(u32(0xfffffffcull))));
}
B538dc5:{NFSU2_TR(0x538dc5);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
}
B538dc6:L538dc6:{c.instructions+=1;NFSU2_TR(0x538dc6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L538def;}}
}
B538dc8:L538dc8:{c.instructions+=8;NFSU2_TR(0x538dc8);
__builtin_memmove((R+0),(R+4),4);
}
B538dca:{NFSU2_TR(0x538dca);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B538dcb:{NFSU2_TR(0x538dcb);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B538dcc:{NFSU2_TR(0x538dcc);
w4(R+12,u32(0x64ull));
}
B538dd1:{NFSU2_TR(0x538dd1);
u8 U[56];
w8(U+0,u64(s64(s32(r4(R+12)))));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x538dd1);w8(U+40,u64(x_/y_));}
w4(R+0,u32(r8(U+40)));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x538dd1);w8(U+48,u64(x_%y_));}
w4(R+8,u32(r8(U+48)));
}
B538dd3:{NFSU2_TR(0x538dd3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B538dd4:{NFSU2_TR(0x538dd4);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B538dd6:{NFSU2_TR(0x538dd6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L538de6;}}
}
B538dd8:L538dd8:{c.instructions+=6;NFSU2_TR(0x538dd8);
__builtin_memmove((R+0),(R+4),4);
}
B538dda:{NFSU2_TR(0x538dda);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B538ddb:{NFSU2_TR(0x538ddb);
w4(R+4,u32(0x190ull));
}
B538de0:{NFSU2_TR(0x538de0);
u8 U[56];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x538de0);w8(U+40,u64(x_/y_));}
w4(R+0,u32(r8(U+40)));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x538de0);w8(U+48,u64(x_%y_));}
w4(R+8,u32(r8(U+48)));
}
B538de2:{NFSU2_TR(0x538de2);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B538de4:{NFSU2_TR(0x538de4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L538def;}}
}
B538de6:L538de6:{c.instructions+=2;NFSU2_TR(0x538de6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6cull))));
w4(U+4,u32(0x1dull));
s4(u32(r4(U+0)),r4(U+4));
}
B538ded:{NFSU2_TR(0x538ded);
{goto L538df6;}
}
B538def:L538def:{c.instructions+=1;NFSU2_TR(0x538def);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6cull))));
w4(U+4,u32(0x1cull));
s4(u32(r4(U+0)),r4(U+4));
}
B538df6:L538df6:{c.instructions+=6;NFSU2_TR(0x538df6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B538df9:{NFSU2_TR(0x538df9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B538dfc:{NFSU2_TR(0x538dfc);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B538dfd:{NFSU2_TR(0x538dfd);
u8 U[4];
w4(U+0,u32(0x7845d4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B538e02:{NFSU2_TR(0x538e02);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B538e03:{NFSU2_TR(0x538e03);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x538e08ull));
TAIL_STATIC(0x537be0u,537);
}
B538e08:L538e08:{c.instructions+=6;NFSU2_TR(0x538e08);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B538e0b:{NFSU2_TR(0x538e0b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B538e0e:{NFSU2_TR(0x538e0e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B538e0f:{NFSU2_TR(0x538e0f);
u8 U[4];
w4(U+0,u32(0x7845d4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B538e14:{NFSU2_TR(0x538e14);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B538e15:{NFSU2_TR(0x538e15);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x538e1aull));
TAIL_STATIC(0x537be0u,537);
}
B538e1a:L538e1a:{c.instructions+=6;NFSU2_TR(0x538e1a);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x74ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B538e1e:{NFSU2_TR(0x538e1e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B538e21:{NFSU2_TR(0x538e21);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B538e22:{NFSU2_TR(0x538e22);
u8 U[4];
w4(U+0,u32(0x7845d4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B538e27:{NFSU2_TR(0x538e27);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B538e28:{NFSU2_TR(0x538e28);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x538e2dull));
TAIL_STATIC(0x537be0u,537);
}
B538e2d:L538e2d:{c.instructions+=4;NFSU2_TR(0x538e2d);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B538e31:{NFSU2_TR(0x538e31);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x24ull))));
}
B538e34:{NFSU2_TR(0x538e34);
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
B538e36:{NFSU2_TR(0x538e36);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L538e51;}}
}
B538e38:L538e38:{c.instructions+=2;NFSU2_TR(0x538e38);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0x6ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x6ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x6ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B538e3b:{NFSU2_TR(0x538e3b);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L538e51;}}
}
B538e3d:L538e3d:{c.instructions+=5;NFSU2_TR(0x538e3d);
u8 U[16];
w4(U+0,u32(u32(u32(0x78ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+8),(U+12),4);
}
B538e41:{NFSU2_TR(0x538e41);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B538e43:{NFSU2_TR(0x538e43);
u8 U[4];
w4(U+0,u32(0x78f568ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B538e48:{NFSU2_TR(0x538e48);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B538e49:{NFSU2_TR(0x538e49);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x538e4eull));
TAIL_STATIC(0x51cf70u,51c);
}
B538e4e:L538e4e:{c.instructions+=1;NFSU2_TR(0x538e4e);
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
B538e51:L538e51:{c.instructions+=2;NFSU2_TR(0x538e51);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B538e52:{NFSU2_TR(0x538e52);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B538e70:L538e70:{c.instructions+=7;NFSU2_TR(0x538e70);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B538e74:{NFSU2_TR(0x538e74);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B538e75:{NFSU2_TR(0x538e75);
w4(R+12,u32(0x1ull));
}
B538e7a:{NFSU2_TR(0x538e7a);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B538e7c:{NFSU2_TR(0x538e7c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B538e7d:{NFSU2_TR(0x538e7d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B538e7e:{NFSU2_TR(0x538e7e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L538f83;}}
}
B538e84:L538e84:{c.instructions+=5;NFSU2_TR(0x538e84);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B538e87:{NFSU2_TR(0x538e87);
u8 U[16];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B538e8b:{NFSU2_TR(0x538e8b);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B538e8e:{NFSU2_TR(0x538e8e);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B538e8f:{NFSU2_TR(0x538e8f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L538eb6;}}
}
B538e91:L538e91:{c.instructions+=6;NFSU2_TR(0x538e91);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B538e94:{NFSU2_TR(0x538e94);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B538e95:{NFSU2_TR(0x538e95);
__builtin_memmove((R+0),(R+8),4);
}
B538e97:{NFSU2_TR(0x538e97);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0xcull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xcull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B538e9a:{NFSU2_TR(0x538e9a);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x70ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B538e9d:{NFSU2_TR(0x538e9d);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L538f73;}}
}
B538ea3:L538ea3:{c.instructions+=8;NFSU2_TR(0x538ea3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B538ea4:{NFSU2_TR(0x538ea4);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B538ea7:{NFSU2_TR(0x538ea7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B538ea8:{NFSU2_TR(0x538ea8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B538ea9:{NFSU2_TR(0x538ea9);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x70ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B538eac:{NFSU2_TR(0x538eac);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B538ead:{NFSU2_TR(0x538ead);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B538eb1:{NFSU2_TR(0x538eb1);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x538d80u);}goto L538d80;}
}
B538eb6:L538eb6:{c.instructions+=2;NFSU2_TR(0x538eb6);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B538eb9:{NFSU2_TR(0x538eb9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L538f5f;}}
}
B538ebf:L538ebf:{c.instructions+=8;NFSU2_TR(0x538ebf);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B538ec2:{NFSU2_TR(0x538ec2);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B538ec5:{NFSU2_TR(0x538ec5);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x1ull))));
}
B538ec6:{NFSU2_TR(0x538ec6);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
}
B538ec7:{NFSU2_TR(0x538ec7);
u8 U[14];
__builtin_memmove((U+6),(R+8),4);
w1(R+512,u8((r4(U+6))<(u32(0xbull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0xbull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0xbull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B538eca:{NFSU2_TR(0x538eca);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x6cull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B538ecd:{NFSU2_TR(0x538ecd);
__builtin_memmove((R+0),(R+20),4);
}
B538ecf:{NFSU2_TR(0x538ecf);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L538f73;}}
}
B538ed5:L538ed5:{c.instructions+=2;NFSU2_TR(0x538ed5);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x5390b8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+8,u32(r1(U+4)));
}
B538edc:{NFSU2_TR(0x538edc);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x5390acull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B538ee3:L538ee3:{c.instructions+=2;NFSU2_TR(0x538ee3);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x1full)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1full))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B538ee6:{NFSU2_TR(0x538ee6);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L538f73;}}
}
B538eec:L538eec:{c.instructions+=8;NFSU2_TR(0x538eec);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B538eed:{NFSU2_TR(0x538eed);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B538ef0:{NFSU2_TR(0x538ef0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B538ef1:{NFSU2_TR(0x538ef1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B538ef2:{NFSU2_TR(0x538ef2);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x6cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B538ef5:{NFSU2_TR(0x538ef5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B538ef6:{NFSU2_TR(0x538ef6);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B538efa:{NFSU2_TR(0x538efa);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x538d80u);}goto L538d80;}
}
B538eff:L538eff:{c.instructions+=1;NFSU2_TR(0x538eff);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x1eull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1eull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B538f02:L538f02:{c.instructions+=1;NFSU2_TR(0x538f02);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L538f73;}}
}
B538f04:L538f04:{c.instructions+=8;NFSU2_TR(0x538f04);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B538f05:{NFSU2_TR(0x538f05);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B538f08:{NFSU2_TR(0x538f08);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B538f09:{NFSU2_TR(0x538f09);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B538f0a:{NFSU2_TR(0x538f0a);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x6cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B538f0d:{NFSU2_TR(0x538f0d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B538f0e:{NFSU2_TR(0x538f0e);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B538f12:{NFSU2_TR(0x538f12);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x538d80u);}goto L538d80;}
}
B538f17:L538f17:{c.instructions+=2;NFSU2_TR(0x538f17);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x1dull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1dull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B538f1a:{NFSU2_TR(0x538f1a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x538f02u);}goto L538f02;}}
}
B538f1c:L538f1c:{c.instructions+=4;NFSU2_TR(0x538f1c);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x74ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+24,u32(r2(U+4)));
}
B538f20:{NFSU2_TR(0x538f20);
__builtin_memmove((R+0),(R+24),4);
}
B538f22:{NFSU2_TR(0x538f22);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x80000003ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B538f27:{NFSU2_TR(0x538f27);
u8 U[1];
w1(U+0,u8(!(r1(R+519))));
if(r1(U+0)){{goto L538f2e;}}
}
B538f29:L538f29:{c.instructions+=3;NFSU2_TR(0x538f29);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B538f2a:{NFSU2_TR(0x538f2a);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0xfffffffcull))));
}
B538f2d:{NFSU2_TR(0x538f2d);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B538f2e:L538f2e:{c.instructions+=1;NFSU2_TR(0x538f2e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L538f4c;}}
}
B538f30:L538f30:{c.instructions+=6;NFSU2_TR(0x538f30);
__builtin_memmove((R+0),(R+24),4);
}
B538f32:{NFSU2_TR(0x538f32);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B538f33:{NFSU2_TR(0x538f33);
w4(R+20,u32(0x64ull));
}
B538f38:{NFSU2_TR(0x538f38);
u8 U[56];
w8(U+0,u64(s64(s32(r4(R+20)))));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x538f38);w8(U+40,u64(x_/y_));}
w4(R+0,u32(r8(U+40)));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x538f38);w8(U+48,u64(x_%y_));}
w4(R+8,u32(r8(U+48)));
}
B538f3a:{NFSU2_TR(0x538f3a);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B538f3c:{NFSU2_TR(0x538f3c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L538f73;}}
}
B538f3e:L538f3e:{c.instructions+=6;NFSU2_TR(0x538f3e);
__builtin_memmove((R+0),(R+24),4);
}
B538f40:{NFSU2_TR(0x538f40);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B538f41:{NFSU2_TR(0x538f41);
w4(R+24,u32(0x190ull));
}
B538f46:{NFSU2_TR(0x538f46);
u8 U[56];
w8(U+0,u64(s64(s32(r4(R+24)))));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x538f46);w8(U+40,u64(x_/y_));}
w4(R+0,u32(r8(U+40)));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x538f46);w8(U+48,u64(x_%y_));}
w4(R+8,u32(r8(U+48)));
}
B538f48:{NFSU2_TR(0x538f48);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B538f4a:{NFSU2_TR(0x538f4a);
if(r1(R+518)){{goto L538f73;}}
}
B538f4c:L538f4c:{c.instructions+=8;NFSU2_TR(0x538f4c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B538f4d:{NFSU2_TR(0x538f4d);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B538f50:{NFSU2_TR(0x538f50);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B538f51:{NFSU2_TR(0x538f51);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B538f52:{NFSU2_TR(0x538f52);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x6cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B538f55:{NFSU2_TR(0x538f55);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B538f56:{NFSU2_TR(0x538f56);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B538f5a:{NFSU2_TR(0x538f5a);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x538d80u);}goto L538d80;}
}
B538f5f:L538f5f:{c.instructions+=4;NFSU2_TR(0x538f5f);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x74ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w2(U+4,u16(u32(r2(U+4))+u32(u16(0x1ull))));
s2(u32(r4(U+0)),r2(U+4));
}
B538f63:{NFSU2_TR(0x538f63);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x74ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+0),(U+4),2);
}
B538f67:{NFSU2_TR(0x538f67);
u8 U[10];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x76ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((U+6),(U+4),2);
w1(R+512,u8((r2(R+0))<(r2(U+6))));
w2(U+8,u16(u32(r2(R+0))-u32(r2(U+6))));
w1(R+518,u8((r2(U+8))==(u16(0x0ull))));
}
B538f6b:{NFSU2_TR(0x538f6b);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L538f73;}}
}
B538f6d:L538f6d:{c.instructions+=1;NFSU2_TR(0x538f6d);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x74ull))));
w2(U+4,u16(0x76cull));
s2(u32(r4(U+0)),r2(U+4));
}
B538f73:L538f73:{c.instructions+=7;NFSU2_TR(0x538f73);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B538f74:{NFSU2_TR(0x538f74);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B538f77:{NFSU2_TR(0x538f77);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B538f78:{NFSU2_TR(0x538f78);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B538f79:{NFSU2_TR(0x538f79);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B538f7a:{NFSU2_TR(0x538f7a);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B538f7e:{NFSU2_TR(0x538f7e);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x538d80u);}goto L538d80;}
}
B538f83:L538f83:{c.instructions+=2;NFSU2_TR(0x538f83);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0xffffffffull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0xffffffffull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0xffffffffull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B538f86:{NFSU2_TR(0x538f86);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x5390a6u,539);}
}
B538f8c:L538f8c:{c.instructions+=4;NFSU2_TR(0x538f8c);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B538f8f:{NFSU2_TR(0x538f8f);
u8 U[16];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B538f93:{NFSU2_TR(0x538f93);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B538f96:{NFSU2_TR(0x538f96);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L538fc0;}}
}
B538f98:L538f98:{c.instructions+=6;NFSU2_TR(0x538f98);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B538f9b:{NFSU2_TR(0x538f9b);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
}
B538f9c:{NFSU2_TR(0x538f9c);
__builtin_memmove((R+0),(R+8),4);
}
B538f9e:{NFSU2_TR(0x538f9e);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B538fa0:{NFSU2_TR(0x538fa0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x70ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B538fa3:{NFSU2_TR(0x538fa3);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x539096u,539);}
}
B538fa9:L538fa9:{c.instructions+=7;NFSU2_TR(0x538fa9);
u8 U[12];
w4(U+0,u32(u32(u32(0x1ull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+8),(U+8),4);
}
B538fad:{NFSU2_TR(0x538fad);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B538fae:{NFSU2_TR(0x538fae);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B538faf:{NFSU2_TR(0x538faf);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x70ull))));
w4(U+4,u32(0xcull));
s4(u32(r4(U+0)),r4(U+4));
}
B538fb6:{NFSU2_TR(0x538fb6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B538fb7:{NFSU2_TR(0x538fb7);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B538fbb:{NFSU2_TR(0x538fbb);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x538d80u);}goto L538d80;}
}
B538fc0:L538fc0:{c.instructions+=2;NFSU2_TR(0x538fc0);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B538fc3:{NFSU2_TR(0x538fc3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x539082u,539);}
}
B538fc9:L538fc9:{c.instructions+=6;NFSU2_TR(0x538fc9);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B538fcc:{NFSU2_TR(0x538fcc);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
}
B538fcd:{NFSU2_TR(0x538fcd);
__builtin_memmove((R+0),(R+8),4);
}
B538fcf:{NFSU2_TR(0x538fcf);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B538fd1:{NFSU2_TR(0x538fd1);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x6cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B538fd4:{NFSU2_TR(0x538fd4);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x539096u,539);}
}
B538fda:L538fda:{c.instructions+=4;NFSU2_TR(0x538fda);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B538fdd:{NFSU2_TR(0x538fdd);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B538fde:{NFSU2_TR(0x538fde);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0xbull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0xbull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0xbull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B538fe1:{NFSU2_TR(0x538fe1);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){TAIL_STATIC(0x539096u,539);}
}
B538fe7:L538fe7:{c.instructions+=2;NFSU2_TR(0x538fe7);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x5390d0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B538fee:{NFSU2_TR(0x538fee);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x5390c4ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B538ff5:L538ff5:{c.instructions+=4;NFSU2_TR(0x538ff5);
u8 U[12];
w4(U+0,u32(u32(u32(0x1ull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+8),(U+8),4);
}
B538ff9:{NFSU2_TR(0x538ff9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B538ffa:{NFSU2_TR(0x538ffa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B538ffb:{NFSU2_TR(0x538ffb);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x6cull))));
w4(U+4,u32(0x1full));
s4(u32(r4(U+0)),r4(U+4));
TAIL_STATIC(0x539002u,539);
}
XIT:NFSU2_TR_EXIT(0x538,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
