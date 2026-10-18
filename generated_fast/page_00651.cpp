#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_645(u8* __restrict R,Cpu& c);
u32 body_64f(u8* __restrict R,Cpu& c);
u32 body_650(u8* __restrict R,Cpu& c);
u32 body_652(u8* __restrict R,Cpu& c);
u32 body_672(u8* __restrict R,Cpu& c);
u32 body_673(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x651,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x651,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_651(u8* __restrict R,Cpu& c);
u32 page_651(Cpu& c){return body_651(c.regs.data(),c);}
__attribute__((noinline)) u32 body_651(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x651001:goto L651001;
case 0x651004:c.instructions+=7;goto B651004;
case 0x651007:c.instructions+=6;goto B651007;
case 0x65100b:c.instructions+=5;goto B65100b;
case 0x65100d:c.instructions+=4;goto B65100d;
case 0x65100f:c.instructions+=3;goto B65100f;
case 0x651010:c.instructions+=2;goto B651010;
case 0x651012:c.instructions+=1;goto B651012;
case 0x651014:goto L651014;
case 0x651016:c.instructions+=1;goto B651016;
case 0x651018:goto L651018;
case 0x65101a:c.instructions+=2;goto B65101a;
case 0x65101d:c.instructions+=1;goto B65101d;
case 0x65101f:goto L65101f;
case 0x651022:c.instructions+=1;goto B651022;
case 0x651024:goto L651024;
case 0x651026:c.instructions+=1;goto B651026;
case 0x651028:goto L651028;
case 0x65102a:c.instructions+=1;goto B65102a;
case 0x65102c:goto L65102c;
case 0x65102f:goto L65102f;
case 0x651031:c.instructions+=2;goto B651031;
case 0x651033:c.instructions+=1;goto B651033;
case 0x651035:goto L651035;
case 0x651037:c.instructions+=1;goto B651037;
case 0x651039:goto L651039;
case 0x65103b:goto L65103b;
case 0x65103d:c.instructions+=1;goto B65103d;
case 0x65103f:goto L65103f;
case 0x651041:c.instructions+=1;goto B651041;
case 0x651043:goto L651043;
case 0x651046:c.instructions+=6;goto B651046;
case 0x651048:c.instructions+=5;goto B651048;
case 0x65104c:c.instructions+=4;goto B65104c;
case 0x65104e:c.instructions+=3;goto B65104e;
case 0x651051:c.instructions+=2;goto B651051;
case 0x651053:c.instructions+=1;goto B651053;
case 0x651055:goto L651055;
case 0x651057:c.instructions+=1;goto B651057;
case 0x651059:goto L651059;
case 0x65105b:goto L65105b;
case 0x65105d:goto L65105d;
case 0x651060:c.instructions+=3;goto B651060;
case 0x651064:c.instructions+=2;goto B651064;
case 0x651067:c.instructions+=1;goto B651067;
case 0x651069:goto L651069;
case 0x65106f:goto L65106f;
case 0x651072:c.instructions+=3;goto B651072;
case 0x651075:c.instructions+=2;goto B651075;
case 0x651079:c.instructions+=1;goto B651079;
case 0x65107b:goto L65107b;
case 0x65107f:c.instructions+=1;goto B65107f;
case 0x651081:goto L651081;
case 0x651084:c.instructions+=4;goto B651084;
case 0x651087:c.instructions+=3;goto B651087;
case 0x65108e:c.instructions+=2;goto B65108e;
case 0x651091:c.instructions+=1;goto B651091;
case 0x651097:goto L651097;
case 0x65109a:c.instructions+=2;goto B65109a;
case 0x65109d:c.instructions+=1;goto B65109d;
case 0x65109f:goto L65109f;
case 0x6510a1:c.instructions+=2;goto B6510a1;
case 0x6510a2:c.instructions+=1;goto B6510a2;
case 0x6510a7:goto L6510a7;
case 0x6510a9:c.instructions+=1;goto B6510a9;
case 0x6510ab:goto L6510ab;
case 0x6510ae:goto L6510ae;
case 0x6510b0:c.instructions+=2;goto B6510b0;
case 0x6510b3:c.instructions+=1;goto B6510b3;
case 0x6510b5:goto L6510b5;
case 0x6510b8:c.instructions+=1;goto B6510b8;
case 0x6510ba:goto L6510ba;
case 0x6510bc:c.instructions+=1;goto B6510bc;
case 0x6510be:goto L6510be;
case 0x6510c2:c.instructions+=1;goto B6510c2;
case 0x6510c8:goto L6510c8;
case 0x6510ca:c.instructions+=2;goto B6510ca;
case 0x6510d0:c.instructions+=1;goto B6510d0;
case 0x6510d1:goto L6510d1;
case 0x6510d3:c.instructions+=1;goto B6510d3;
case 0x6510d8:goto L6510d8;
case 0x6510db:c.instructions+=2;goto B6510db;
case 0x6510dc:c.instructions+=1;goto B6510dc;
case 0x6510de:goto L6510de;
case 0x6510e1:c.instructions+=4;goto B6510e1;
case 0x6510e3:c.instructions+=3;goto B6510e3;
case 0x6510e9:c.instructions+=2;goto B6510e9;
case 0x6510ef:c.instructions+=1;goto B6510ef;
case 0x6510f5:goto L6510f5;
case 0x6510f9:c.instructions+=1;goto B6510f9;
case 0x6510fb:goto L6510fb;
case 0x6510fe:c.instructions+=3;goto B6510fe;
case 0x651100:c.instructions+=2;goto B651100;
case 0x651103:c.instructions+=1;goto B651103;
case 0x651105:goto L651105;
case 0x651108:c.instructions+=8;goto B651108;
case 0x65110c:c.instructions+=7;goto B65110c;
case 0x65110f:c.instructions+=6;goto B65110f;
case 0x651112:c.instructions+=5;goto B651112;
case 0x651116:c.instructions+=4;goto B651116;
case 0x651119:c.instructions+=3;goto B651119;
case 0x65111b:c.instructions+=2;goto B65111b;
case 0x65111d:c.instructions+=1;goto B65111d;
case 0x65111f:goto L65111f;
case 0x651121:c.instructions+=1;goto B651121;
case 0x651125:goto L651125;
case 0x651127:c.instructions+=3;goto B651127;
case 0x65112a:c.instructions+=2;goto B65112a;
case 0x65112c:c.instructions+=1;goto B65112c;
case 0x65112e:goto L65112e;
case 0x651130:c.instructions+=1;goto B651130;
case 0x651134:goto L651134;
case 0x651137:c.instructions+=5;goto B651137;
case 0x65113d:c.instructions+=4;goto B65113d;
case 0x65113f:c.instructions+=3;goto B65113f;
case 0x651142:c.instructions+=2;goto B651142;
case 0x651145:c.instructions+=1;goto B651145;
case 0x651147:goto L651147;
case 0x65114b:c.instructions+=1;goto B65114b;
case 0x65114d:goto L65114d;
case 0x651153:c.instructions+=1;goto B651153;
case 0x651156:goto L651156;
case 0x651157:c.instructions+=4;goto B651157;
case 0x65115a:c.instructions+=3;goto B65115a;
case 0x65115d:c.instructions+=2;goto B65115d;
case 0x651160:c.instructions+=1;goto B651160;
case 0x651162:goto L651162;
case 0x651169:c.instructions+=1;goto B651169;
case 0x65116b:goto L65116b;
case 0x651172:c.instructions+=1;goto B651172;
case 0x651174:goto L651174;
case 0x65117b:c.instructions+=1;goto B65117b;
case 0x65117d:goto L65117d;
case 0x651184:c.instructions+=1;goto B651184;
case 0x651186:goto L651186;
case 0x65118d:goto L65118d;
case 0x65118f:c.instructions+=1;goto B65118f;
case 0x651194:goto L651194;
case 0x651196:c.instructions+=1;goto B651196;
case 0x651198:goto L651198;
case 0x65119a:c.instructions+=1;goto B65119a;
case 0x65119f:goto L65119f;
case 0x6511a1:c.instructions+=2;goto B6511a1;
case 0x6511a4:c.instructions+=1;goto B6511a4;
case 0x6511a6:goto L6511a6;
case 0x6511aa:c.instructions+=1;goto B6511aa;
case 0x6511ad:goto L6511ad;
case 0x6511af:c.instructions+=1;goto B6511af;
case 0x6511b5:goto L6511b5;
case 0x6511bc:c.instructions+=1;goto B6511bc;
case 0x6511be:goto L6511be;
case 0x6511c4:c.instructions+=1;goto B6511c4;
case 0x6511c9:goto L6511c9;
case 0x6511cb:c.instructions+=2;goto B6511cb;
case 0x6511ce:c.instructions+=1;goto B6511ce;
case 0x6511d4:goto L6511d4;
case 0x6511d7:c.instructions+=5;goto B6511d7;
case 0x6511dd:c.instructions+=4;goto B6511dd;
case 0x6511e0:c.instructions+=3;goto B6511e0;
case 0x6511e7:c.instructions+=2;goto B6511e7;
case 0x6511ed:c.instructions+=1;goto B6511ed;
case 0x6511f0:goto L6511f0;
case 0x6511f3:c.instructions+=2;goto B6511f3;
case 0x6511f6:c.instructions+=1;goto B6511f6;
case 0x6511fc:goto L6511fc;
case 0x6511fe:c.instructions+=1;goto B6511fe;
case 0x651203:goto L651203;
case 0x651205:c.instructions+=1;goto B651205;
case 0x651207:goto L651207;
case 0x65120c:c.instructions+=4;goto B65120c;
case 0x65120e:c.instructions+=3;goto B65120e;
case 0x651210:c.instructions+=2;goto B651210;
case 0x651212:c.instructions+=1;goto B651212;
case 0x651217:goto L651217;
case 0x651219:goto L651219;
case 0x65121b:goto L65121b;
case 0x65121d:c.instructions+=2;goto B65121d;
case 0x65121f:c.instructions+=1;goto B65121f;
case 0x651225:goto L651225;
case 0x651227:c.instructions+=1;goto B651227;
case 0x65122c:goto L65122c;
case 0x65122e:c.instructions+=1;goto B65122e;
case 0x651230:goto L651230;
case 0x651232:c.instructions+=6;goto B651232;
case 0x651233:c.instructions+=5;goto B651233;
case 0x651234:c.instructions+=4;goto B651234;
case 0x651235:c.instructions+=3;goto B651235;
case 0x651237:c.instructions+=2;goto B651237;
case 0x651239:c.instructions+=1;goto B651239;
case 0x65123e:goto L65123e;
case 0x651240:c.instructions+=1;goto B651240;
case 0x651242:goto L651242;
case 0x651244:goto L651244;
case 0x651246:c.instructions+=1;goto B651246;
case 0x65124c:goto L65124c;
case 0x65124f:c.instructions+=4;goto B65124f;
case 0x651251:c.instructions+=3;goto B651251;
case 0x651253:c.instructions+=2;goto B651253;
case 0x651256:c.instructions+=1;goto B651256;
case 0x65125b:goto L65125b;
case 0x65125d:c.instructions+=1;goto B65125d;
case 0x65125f:goto L65125f;
case 0x651262:c.instructions+=2;goto B651262;
case 0x651264:c.instructions+=1;goto B651264;
case 0x651269:goto L651269;
case 0x65126b:goto L65126b;
case 0x65126d:goto L65126d;
case 0x65126f:c.instructions+=2;goto B65126f;
case 0x651272:c.instructions+=1;goto B651272;
case 0x651278:goto L651278;
case 0x65127b:c.instructions+=4;goto B65127b;
case 0x65127d:c.instructions+=3;goto B65127d;
case 0x65127f:c.instructions+=2;goto B65127f;
case 0x651282:c.instructions+=1;goto B651282;
case 0x651287:goto L651287;
case 0x651289:c.instructions+=1;goto B651289;
case 0x65128b:goto L65128b;
case 0x65128d:c.instructions+=1;goto B65128d;
case 0x651292:goto L651292;
case 0x651294:c.instructions+=1;goto B651294;
case 0x651296:goto L651296;
case 0x651298:goto L651298;
case 0x65129a:c.instructions+=1;goto B65129a;
case 0x6512a0:goto L6512a0;
case 0x6512a3:c.instructions+=10;goto B6512a3;
case 0x6512a7:c.instructions+=9;goto B6512a7;
case 0x6512aa:c.instructions+=8;goto B6512aa;
case 0x6512ad:c.instructions+=7;goto B6512ad;
case 0x6512b0:c.instructions+=6;goto B6512b0;
case 0x6512b3:c.instructions+=5;goto B6512b3;
case 0x6512ba:c.instructions+=4;goto B6512ba;
case 0x6512bd:c.instructions+=3;goto B6512bd;
case 0x6512c0:c.instructions+=2;goto B6512c0;
case 0x6512c3:c.instructions+=1;goto B6512c3;
case 0x6512c8:goto L6512c8;
case 0x6512ca:c.instructions+=2;goto B6512ca;
case 0x6512cd:c.instructions+=1;goto B6512cd;
case 0x6512d3:goto L6512d3;
case 0x6512d6:c.instructions+=8;goto B6512d6;
case 0x6512d8:c.instructions+=7;goto B6512d8;
case 0x6512dc:c.instructions+=6;goto B6512dc;
case 0x6512df:c.instructions+=5;goto B6512df;
case 0x6512e2:c.instructions+=4;goto B6512e2;
case 0x6512e5:c.instructions+=3;goto B6512e5;
case 0x6512e9:c.instructions+=2;goto B6512e9;
case 0x6512ec:c.instructions+=1;goto B6512ec;
case 0x6512f2:goto L6512f2;
case 0x6512f5:c.instructions+=3;goto B6512f5;
case 0x6512f8:c.instructions+=2;goto B6512f8;
case 0x6512fb:c.instructions+=1;goto B6512fb;
case 0x6512fd:goto L6512fd;
case 0x651300:c.instructions+=3;goto B651300;
case 0x651302:c.instructions+=2;goto B651302;
case 0x651304:c.instructions+=1;goto B651304;
case 0x651306:goto L651306;
case 0x651308:c.instructions+=1;goto B651308;
case 0x65130d:goto L65130d;
case 0x65130f:c.instructions+=1;goto B65130f;
case 0x651311:goto L651311;
case 0x651316:c.instructions+=4;goto B651316;
case 0x651317:c.instructions+=3;goto B651317;
case 0x651318:c.instructions+=2;goto B651318;
case 0x65131a:c.instructions+=1;goto B65131a;
case 0x65131f:goto L65131f;
case 0x651321:goto L651321;
case 0x651323:c.instructions+=1;goto B651323;
case 0x651325:goto L651325;
case 0x651327:c.instructions+=1;goto B651327;
case 0x65132c:goto L65132c;
case 0x65132e:c.instructions+=1;goto B65132e;
case 0x651330:goto L651330;
case 0x651333:c.instructions+=5;goto B651333;
case 0x651339:c.instructions+=4;goto B651339;
case 0x65133f:c.instructions+=3;goto B65133f;
case 0x651341:c.instructions+=2;goto B651341;
case 0x651343:c.instructions+=1;goto B651343;
case 0x651348:goto L651348;
case 0x65134a:goto L65134a;
case 0x65134c:goto L65134c;
case 0x65134e:c.instructions+=2;goto B65134e;
case 0x651351:c.instructions+=1;goto B651351;
case 0x651353:goto L651353;
case 0x651355:goto L651355;
case 0x651357:goto L651357;
case 0x651358:c.instructions+=4;goto B651358;
case 0x651359:c.instructions+=3;goto B651359;
case 0x65135a:c.instructions+=2;goto B65135a;
case 0x65135b:c.instructions+=1;goto B65135b;
case 0x65135e:goto L65135e;
case 0x651363:c.instructions+=1;goto B651363;
case 0x651365:goto L651365;
case 0x651367:c.instructions+=17;goto B651367;
case 0x651368:c.instructions+=16;goto B651368;
case 0x65136a:c.instructions+=15;goto B65136a;
case 0x65136d:c.instructions+=14;goto B65136d;
case 0x65136e:c.instructions+=13;goto B65136e;
case 0x651371:c.instructions+=12;goto B651371;
case 0x651374:c.instructions+=11;goto B651374;
case 0x651377:c.instructions+=10;goto B651377;
case 0x651379:c.instructions+=9;goto B651379;
case 0x65137b:c.instructions+=8;goto B65137b;
case 0x65137e:c.instructions+=7;goto B65137e;
case 0x65137f:c.instructions+=6;goto B65137f;
case 0x651382:c.instructions+=5;goto B651382;
case 0x651384:c.instructions+=4;goto B651384;
case 0x651386:c.instructions+=3;goto B651386;
case 0x651389:c.instructions+=2;goto B651389;
case 0x65138b:c.instructions+=1;goto B65138b;
case 0x65138d:goto L65138d;
case 0x651390:c.instructions+=1;goto B651390;
case 0x651392:goto L651392;
case 0x651394:c.instructions+=2;goto B651394;
case 0x651395:c.instructions+=1;goto B651395;
case 0x651397:goto L651397;
case 0x65139a:c.instructions+=4;goto B65139a;
case 0x65139b:c.instructions+=3;goto B65139b;
case 0x65139d:c.instructions+=2;goto B65139d;
case 0x6513a0:c.instructions+=1;goto B6513a0;
case 0x6513a5:goto L6513a5;
case 0x6513a7:c.instructions+=1;goto B6513a7;
case 0x6513a9:goto L6513a9;
case 0x6513ac:c.instructions+=4;goto B6513ac;
case 0x6513ad:c.instructions+=3;goto B6513ad;
case 0x6513af:c.instructions+=2;goto B6513af;
case 0x6513b2:c.instructions+=1;goto B6513b2;
case 0x6513b7:goto L6513b7;
case 0x6513b9:c.instructions+=1;goto B6513b9;
case 0x6513bb:goto L6513bb;
case 0x6513be:c.instructions+=2;goto B6513be;
case 0x6513c1:c.instructions+=1;goto B6513c1;
case 0x6513c3:goto L6513c3;
case 0x6513c6:goto L6513c6;
case 0x6513c7:goto L6513c7;
case 0x6513c8:c.instructions+=3;goto B6513c8;
case 0x6513c9:c.instructions+=2;goto B6513c9;
case 0x6513ca:c.instructions+=1;goto B6513ca;
case 0x6513cd:goto L6513cd;
case 0x6513d0:c.instructions+=2;goto B6513d0;
case 0x6513d3:c.instructions+=1;goto B6513d3;
case 0x6513d6:goto L6513d6;
case 0x6513d8:c.instructions+=3;goto B6513d8;
case 0x6513da:c.instructions+=2;goto B6513da;
case 0x6513dc:c.instructions+=1;goto B6513dc;
case 0x6513de:goto L6513de;
case 0x6513e0:c.instructions+=1;goto B6513e0;
case 0x6513e2:goto L6513e2;
case 0x6513e5:c.instructions+=3;goto B6513e5;
case 0x6513e7:c.instructions+=2;goto B6513e7;
case 0x6513ea:c.instructions+=1;goto B6513ea;
case 0x6513ec:goto L6513ec;
case 0x6513ed:c.instructions+=5;goto B6513ed;
case 0x6513ee:c.instructions+=4;goto B6513ee;
case 0x6513ef:c.instructions+=3;goto B6513ef;
case 0x6513f0:c.instructions+=2;goto B6513f0;
case 0x6513f2:c.instructions+=1;goto B6513f2;
case 0x6513f4:goto L6513f4;
case 0x6513f6:c.instructions+=1;goto B6513f6;
case 0x6513f8:goto L6513f8;
case 0x6513fa:c.instructions+=1;goto B6513fa;
case 0x6513fd:goto L6513fd;
case 0x6513ff:c.instructions+=1;goto B6513ff;
case 0x651401:goto L651401;
case 0x651404:c.instructions+=2;goto B651404;
case 0x651407:c.instructions+=1;goto B651407;
case 0x651409:goto L651409;
case 0x65140b:c.instructions+=1;goto B65140b;
case 0x65140d:goto L65140d;
case 0x651410:c.instructions+=6;goto B651410;
case 0x651413:c.instructions+=5;goto B651413;
case 0x651416:c.instructions+=4;goto B651416;
case 0x651419:c.instructions+=3;goto B651419;
case 0x65141c:c.instructions+=2;goto B65141c;
case 0x65141f:c.instructions+=1;goto B65141f;
case 0x651421:goto L651421;
case 0x651424:c.instructions+=3;goto B651424;
case 0x651427:c.instructions+=2;goto B651427;
case 0x65142a:c.instructions+=1;goto B65142a;
case 0x65142f:goto L65142f;
case 0x651431:c.instructions+=1;goto B651431;
case 0x651433:goto L651433;
case 0x651435:goto L651435;
case 0x651438:c.instructions+=2;goto B651438;
case 0x65143c:c.instructions+=1;goto B65143c;
case 0x65143e:goto L65143e;
case 0x651441:c.instructions+=2;goto B651441;
case 0x651443:c.instructions+=1;goto B651443;
case 0x651445:goto L651445;
case 0x651447:goto L651447;
case 0x65144a:c.instructions+=2;goto B65144a;
case 0x65144e:c.instructions+=1;goto B65144e;
case 0x651450:goto L651450;
case 0x651453:c.instructions+=2;goto B651453;
case 0x651455:c.instructions+=1;goto B651455;
case 0x651457:goto L651457;
case 0x651459:c.instructions+=1;goto B651459;
case 0x65145b:goto L65145b;
case 0x65145d:goto L65145d;
case 0x65145f:c.instructions+=1;goto B65145f;
case 0x651465:goto L651465;
case 0x651467:c.instructions+=1;goto B651467;
case 0x65146d:goto L65146d;
case 0x65146f:c.instructions+=1;goto B65146f;
case 0x651474:goto L651474;
case 0x651476:c.instructions+=10;goto B651476;
case 0x651477:c.instructions+=9;goto B651477;
case 0x651479:c.instructions+=8;goto B651479;
case 0x65147c:c.instructions+=7;goto B65147c;
case 0x65147d:c.instructions+=6;goto B65147d;
case 0x65147e:c.instructions+=5;goto B65147e;
case 0x651481:c.instructions+=4;goto B651481;
case 0x651483:c.instructions+=3;goto B651483;
case 0x651485:c.instructions+=2;goto B651485;
case 0x651488:c.instructions+=1;goto B651488;
case 0x65148d:goto L65148d;
case 0x651490:c.instructions+=3;goto B651490;
case 0x651492:c.instructions+=2;goto B651492;
case 0x651495:c.instructions+=1;goto B651495;
case 0x65149a:goto L65149a;
case 0x65149d:c.instructions+=4;goto B65149d;
case 0x65149f:c.instructions+=3;goto B65149f;
case 0x6514a2:c.instructions+=2;goto B6514a2;
case 0x6514a5:c.instructions+=1;goto B6514a5;
case 0x6514aa:goto L6514aa;
case 0x6514ac:c.instructions+=1;goto B6514ac;
case 0x6514ae:goto L6514ae;
case 0x6514b0:c.instructions+=1;goto B6514b0;
case 0x6514b5:goto L6514b5;
case 0x6514b6:c.instructions+=4;goto B6514b6;
case 0x6514b9:c.instructions+=3;goto B6514b9;
case 0x6514bb:c.instructions+=2;goto B6514bb;
case 0x6514be:c.instructions+=1;goto B6514be;
case 0x6514c3:goto L6514c3;
case 0x6514c6:c.instructions+=1;goto B6514c6;
case 0x6514cb:goto L6514cb;
case 0x6514ce:c.instructions+=1;goto B6514ce;
case 0x6514d4:goto L6514d4;
case 0x6514d7:c.instructions+=1;goto B6514d7;
case 0x6514dd:goto L6514dd;
case 0x6514e0:c.instructions+=5;goto B6514e0;
case 0x6514e1:c.instructions+=4;goto B6514e1;
case 0x6514e2:c.instructions+=3;goto B6514e2;
case 0x6514e5:c.instructions+=2;goto B6514e5;
case 0x6514e7:c.instructions+=1;goto B6514e7;
case 0x6514ec:goto L6514ec;
case 0x6514ee:c.instructions+=1;goto B6514ee;
case 0x6514f0:goto L6514f0;
case 0x6514f3:c.instructions+=5;goto B6514f3;
case 0x6514f4:c.instructions+=4;goto B6514f4;
case 0x6514f5:c.instructions+=3;goto B6514f5;
case 0x6514f8:c.instructions+=2;goto B6514f8;
case 0x6514fa:c.instructions+=1;goto B6514fa;
case 0x6514ff:goto L6514ff;
case 0x651501:c.instructions+=1;goto B651501;
case 0x651503:goto L651503;
case 0x651506:c.instructions+=7;goto B651506;
case 0x651507:c.instructions+=6;goto B651507;
case 0x65150a:c.instructions+=5;goto B65150a;
case 0x65150b:c.instructions+=4;goto B65150b;
case 0x65150e:c.instructions+=3;goto B65150e;
case 0x65150f:c.instructions+=2;goto B65150f;
case 0x651511:c.instructions+=1;goto B651511;
case 0x651516:goto L651516;
case 0x651518:c.instructions+=1;goto B651518;
case 0x65151a:goto L65151a;
case 0x65151d:c.instructions+=3;goto B65151d;
case 0x65151f:c.instructions+=2;goto B65151f;
case 0x651522:c.instructions+=1;goto B651522;
case 0x651527:goto L651527;
case 0x651529:c.instructions+=1;goto B651529;
case 0x65152b:goto L65152b;
case 0x65152d:c.instructions+=1;goto B65152d;
case 0x65152e:goto L65152e;
case 0x651531:c.instructions+=3;goto B651531;
case 0x651533:c.instructions+=2;goto B651533;
case 0x651536:c.instructions+=1;goto B651536;
case 0x65153b:goto L65153b;
case 0x65153d:c.instructions+=1;goto B65153d;
case 0x65153f:goto L65153f;
case 0x651546:c.instructions+=1;goto B651546;
case 0x651548:goto L651548;
case 0x65154a:c.instructions+=2;goto B65154a;
case 0x65154b:c.instructions+=1;goto B65154b;
case 0x65154e:goto L65154e;
case 0x651550:c.instructions+=1;goto B651550;
case 0x651552:goto L651552;
case 0x651556:c.instructions+=1;goto B651556;
case 0x651558:goto L651558;
case 0x651559:c.instructions+=2;goto B651559;
case 0x65155c:c.instructions+=1;goto B65155c;
case 0x651562:goto L651562;
case 0x651565:c.instructions+=2;goto B651565;
case 0x651568:c.instructions+=1;goto B651568;
case 0x65156a:goto L65156a;
case 0x65156c:c.instructions+=2;goto B65156c;
case 0x65156d:c.instructions+=1;goto B65156d;
case 0x65156f:goto L65156f;
case 0x651572:goto L651572;
case 0x651574:c.instructions+=2;goto B651574;
case 0x651575:c.instructions+=1;goto B651575;
case 0x651577:goto L651577;
case 0x65157c:goto L65157c;
case 0x651580:c.instructions+=1;goto B651580;
case 0x651582:goto L651582;
case 0x651587:goto L651587;
case 0x65158a:c.instructions+=1;goto B65158a;
case 0x65158c:goto L65158c;
case 0x651591:goto L651591;
case 0x651592:c.instructions+=3;goto B651592;
case 0x651593:c.instructions+=2;goto B651593;
case 0x651594:c.instructions+=1;goto B651594;
case 0x651597:goto L651597;
case 0x651599:c.instructions+=11;goto B651599;
case 0x65159a:c.instructions+=10;goto B65159a;
case 0x65159c:c.instructions+=9;goto B65159c;
case 0x65159f:c.instructions+=8;goto B65159f;
case 0x6515a0:c.instructions+=7;goto B6515a0;
case 0x6515a1:c.instructions+=6;goto B6515a1;
case 0x6515a4:c.instructions+=5;goto B6515a4;
case 0x6515aa:c.instructions+=4;goto B6515aa;
case 0x6515ab:c.instructions+=3;goto B6515ab;
case 0x6515ae:c.instructions+=2;goto B6515ae;
case 0x6515b0:c.instructions+=1;goto B6515b0;
case 0x6515b2:goto L6515b2;
case 0x6515b4:c.instructions+=2;goto B6515b4;
case 0x6515b5:c.instructions+=1;goto B6515b5;
case 0x6515ba:goto L6515ba;
case 0x6515bc:c.instructions+=1;goto B6515bc;
case 0x6515be:goto L6515be;
case 0x6515c2:c.instructions+=1;goto B6515c2;
case 0x6515c4:goto L6515c4;
case 0x6515c8:c.instructions+=1;goto B6515c8;
case 0x6515ca:goto L6515ca;
case 0x6515cf:c.instructions+=2;goto B6515cf;
case 0x6515d1:c.instructions+=1;goto B6515d1;
case 0x6515d3:goto L6515d3;
case 0x6515d6:c.instructions+=1;goto B6515d6;
case 0x6515d9:goto L6515d9;
case 0x6515db:c.instructions+=3;goto B6515db;
case 0x6515e0:c.instructions+=2;goto B6515e0;
case 0x6515e5:c.instructions+=1;goto B6515e5;
case 0x6515e7:goto L6515e7;
case 0x6515e9:c.instructions+=2;goto B6515e9;
case 0x6515ec:c.instructions+=1;goto B6515ec;
case 0x6515ee:goto L6515ee;
case 0x6515f0:c.instructions+=1;goto B6515f0;
case 0x6515f2:goto L6515f2;
case 0x6515f5:c.instructions+=1;goto B6515f5;
case 0x6515f7:goto L6515f7;
case 0x6515f9:goto L6515f9;
case 0x6515fb:c.instructions+=1;goto B6515fb;
case 0x6515fd:goto L6515fd;
case 0x651600:c.instructions+=3;goto B651600;
case 0x651605:c.instructions+=2;goto B651605;
case 0x651607:c.instructions+=1;goto B651607;
case 0x65160a:goto L65160a;
case 0x65160c:c.instructions+=1;goto B65160c;
case 0x65160e:goto L65160e;
case 0x651611:c.instructions+=3;goto B651611;
case 0x651616:c.instructions+=2;goto B651616;
case 0x651618:c.instructions+=1;goto B651618;
case 0x65161b:goto L65161b;
case 0x65161d:goto L65161d;
case 0x65161e:c.instructions+=4;goto B65161e;
case 0x65161f:c.instructions+=3;goto B65161f;
case 0x651620:c.instructions+=2;goto B651620;
case 0x651621:c.instructions+=1;goto B651621;
case 0x651624:goto L651624;
case 0x65162a:c.instructions+=1;goto B65162a;
case 0x65162c:goto L65162c;
case 0x651631:c.instructions+=5;goto B651631;
case 0x651636:c.instructions+=4;goto B651636;
case 0x651639:c.instructions+=3;goto B651639;
case 0x65163a:c.instructions+=2;goto B65163a;
case 0x65163b:c.instructions+=1;goto B65163b;
case 0x651640:goto L651640;
case 0x651643:c.instructions+=2;goto B651643;
case 0x651648:c.instructions+=1;goto B651648;
case 0x65164a:goto L65164a;
case 0x65164c:c.instructions+=11;goto B65164c;
case 0x65164d:c.instructions+=10;goto B65164d;
case 0x65164f:c.instructions+=9;goto B65164f;
case 0x651652:c.instructions+=8;goto B651652;
case 0x651653:c.instructions+=7;goto B651653;
case 0x651654:c.instructions+=6;goto B651654;
case 0x651657:c.instructions+=5;goto B651657;
case 0x651659:c.instructions+=4;goto B651659;
case 0x65165c:c.instructions+=3;goto B65165c;
case 0x65165d:c.instructions+=2;goto B65165d;
case 0x651660:c.instructions+=1;goto B651660;
case 0x651662:goto L651662;
case 0x651664:c.instructions+=1;goto B651664;
case 0x65166a:goto L65166a;
case 0x65166d:c.instructions+=1;goto B65166d;
case 0x65166f:goto L65166f;
case 0x651671:goto L651671;
case 0x651672:c.instructions+=4;goto B651672;
case 0x651673:c.instructions+=3;goto B651673;
case 0x651674:c.instructions+=2;goto B651674;
case 0x651675:c.instructions+=1;goto B651675;
case 0x651678:goto L651678;
case 0x65167a:c.instructions+=1;goto B65167a;
case 0x65167c:goto L65167c;
case 0x65167f:c.instructions+=1;goto B65167f;
case 0x651681:goto L651681;
case 0x651686:goto L651686;
case 0x651689:c.instructions+=1;goto B651689;
case 0x65168e:goto L65168e;
case 0x651691:c.instructions+=1;goto B651691;
case 0x651696:goto L651696;
case 0x65169a:c.instructions+=3;goto B65169a;
case 0x65169c:c.instructions+=2;goto B65169c;
case 0x65169d:c.instructions+=1;goto B65169d;
case 0x65169f:goto L65169f;
case 0x6516a1:c.instructions+=1;goto B6516a1;
case 0x6516a3:goto L6516a3;
case 0x6516a6:c.instructions+=5;goto B6516a6;
case 0x6516a7:c.instructions+=4;goto B6516a7;
case 0x6516aa:c.instructions+=3;goto B6516aa;
case 0x6516ad:c.instructions+=2;goto B6516ad;
case 0x6516b4:c.instructions+=1;goto B6516b4;
case 0x6516b9:goto L6516b9;
case 0x6516bd:c.instructions+=2;goto B6516bd;
case 0x6516c0:c.instructions+=1;goto B6516c0;
case 0x6516c2:goto L6516c2;
case 0x6516c5:c.instructions+=2;goto B6516c5;
case 0x6516c6:c.instructions+=1;goto B6516c6;
case 0x6516cb:goto L6516cb;
case 0x6516cd:c.instructions+=1;goto B6516cd;
case 0x6516cf:goto L6516cf;
case 0x6516d6:goto L6516d6;
case 0x6516d9:c.instructions+=2;goto B6516d9;
case 0x6516dd:c.instructions+=1;goto B6516dd;
case 0x6516df:goto L6516df;
case 0x6516e1:c.instructions+=1;goto B6516e1;
case 0x6516e3:goto L6516e3;
case 0x6516e6:c.instructions+=5;goto B6516e6;
case 0x6516e9:c.instructions+=4;goto B6516e9;
case 0x6516ec:c.instructions+=3;goto B6516ec;
case 0x6516ef:c.instructions+=2;goto B6516ef;
case 0x6516f6:c.instructions+=1;goto B6516f6;
case 0x6516fb:goto L6516fb;
case 0x6516ff:c.instructions+=2;goto B6516ff;
case 0x651702:c.instructions+=1;goto B651702;
case 0x651704:goto L651704;
case 0x651707:c.instructions+=2;goto B651707;
case 0x65170a:c.instructions+=1;goto B65170a;
case 0x65170f:goto L65170f;
case 0x651711:c.instructions+=1;goto B651711;
case 0x651713:goto L651713;
case 0x65171a:goto L65171a;
case 0x65171d:c.instructions+=2;goto B65171d;
case 0x65171f:c.instructions+=1;goto B65171f;
case 0x651725:goto L651725;
case 0x651728:c.instructions+=2;goto B651728;
case 0x65172a:c.instructions+=1;goto B65172a;
case 0x651730:goto L651730;
case 0x651732:c.instructions+=1;goto B651732;
case 0x651734:goto L651734;
case 0x651737:c.instructions+=1;goto B651737;
case 0x65173d:goto L65173d;
case 0x65173f:c.instructions+=1;goto B65173f;
case 0x651740:goto L651740;
case 0x651742:c.instructions+=1;goto B651742;
case 0x651747:goto L651747;
case 0x651749:c.instructions+=3;goto B651749;
case 0x65174a:c.instructions+=2;goto B65174a;
case 0x65174c:c.instructions+=1;goto B65174c;
case 0x65174e:goto L65174e;
case 0x651750:c.instructions+=1;goto B651750;
case 0x651752:goto L651752;
case 0x651754:c.instructions+=1;goto B651754;
case 0x65175a:goto L65175a;
case 0x65175d:c.instructions+=1;goto B65175d;
case 0x651763:goto L651763;
case 0x651766:c.instructions+=2;goto B651766;
case 0x651768:c.instructions+=1;goto B651768;
case 0x65176a:goto L65176a;
case 0x65176d:c.instructions+=2;goto B65176d;
case 0x651770:c.instructions+=1;goto B651770;
case 0x651776:goto L651776;
case 0x651779:c.instructions+=2;goto B651779;
case 0x65177b:c.instructions+=1;goto B65177b;
case 0x65177d:goto L65177d;
case 0x651780:c.instructions+=1;goto B651780;
case 0x651786:goto L651786;
case 0x651788:c.instructions+=1;goto B651788;
case 0x65178a:goto L65178a;
case 0x65178c:c.instructions+=1;goto B65178c;
case 0x65178e:goto L65178e;
case 0x651791:c.instructions+=2;goto B651791;
case 0x651794:c.instructions+=1;goto B651794;
case 0x651799:goto L651799;
case 0x65179c:c.instructions+=1;goto B65179c;
case 0x65179e:goto L65179e;
case 0x6517a0:c.instructions+=1;goto B6517a0;
case 0x6517a2:goto L6517a2;
case 0x6517a4:c.instructions+=1;goto B6517a4;
case 0x6517a6:goto L6517a6;
case 0x6517a9:c.instructions+=2;goto B6517a9;
case 0x6517ab:c.instructions+=1;goto B6517ab;
case 0x6517ad:goto L6517ad;
case 0x6517b0:c.instructions+=2;goto B6517b0;
case 0x6517b3:c.instructions+=1;goto B6517b3;
case 0x6517b9:goto L6517b9;
case 0x6517bc:c.instructions+=2;goto B6517bc;
case 0x6517be:c.instructions+=1;goto B6517be;
case 0x6517c0:goto L6517c0;
case 0x6517c3:c.instructions+=1;goto B6517c3;
case 0x6517c9:goto L6517c9;
case 0x6517cb:c.instructions+=1;goto B6517cb;
case 0x6517d1:goto L6517d1;
case 0x6517d3:c.instructions+=1;goto B6517d3;
case 0x6517d9:goto L6517d9;
case 0x6517dc:c.instructions+=2;goto B6517dc;
case 0x6517df:c.instructions+=1;goto B6517df;
case 0x6517e4:goto L6517e4;
case 0x6517e7:c.instructions+=1;goto B6517e7;
case 0x6517e9:goto L6517e9;
case 0x6517ec:c.instructions+=2;goto B6517ec;
case 0x6517ef:c.instructions+=1;goto B6517ef;
case 0x6517f5:goto L6517f5;
case 0x6517f8:c.instructions+=2;goto B6517f8;
case 0x6517fb:c.instructions+=1;goto B6517fb;
case 0x651801:goto L651801;
case 0x651806:goto L651806;
case 0x651809:c.instructions+=1;goto B651809;
case 0x65180f:goto L65180f;
case 0x651814:goto L651814;
case 0x651817:c.instructions+=1;goto B651817;
case 0x65181d:goto L65181d;
case 0x65181f:c.instructions+=1;goto B65181f;
case 0x651825:goto L651825;
case 0x651828:c.instructions+=2;goto B651828;
case 0x65182b:c.instructions+=1;goto B65182b;
case 0x651831:goto L651831;
case 0x651834:c.instructions+=1;goto B651834;
case 0x651836:goto L651836;
case 0x651839:c.instructions+=2;goto B651839;
case 0x65183b:c.instructions+=1;goto B65183b;
case 0x651841:goto L651841;
case 0x651844:c.instructions+=1;goto B651844;
case 0x65184a:goto L65184a;
case 0x65184d:c.instructions+=1;goto B65184d;
case 0x651853:goto L651853;
case 0x651856:c.instructions+=1;goto B651856;
case 0x65185c:goto L65185c;
case 0x65185f:c.instructions+=1;goto B65185f;
case 0x651861:goto L651861;
case 0x651864:c.instructions+=1;goto B651864;
case 0x651866:goto L651866;
case 0x651869:c.instructions+=2;goto B651869;
case 0x65186b:c.instructions+=1;goto B65186b;
case 0x651871:goto L651871;
case 0x651874:c.instructions+=1;goto B651874;
case 0x65187a:goto L65187a;
case 0x65187d:c.instructions+=1;goto B65187d;
case 0x651883:goto L651883;
case 0x651886:c.instructions+=1;goto B651886;
case 0x65188c:goto L65188c;
case 0x65188f:c.instructions+=1;goto B65188f;
case 0x651891:goto L651891;
case 0x651894:goto L651894;
case 0x65189a:goto L65189a;
case 0x65189f:goto L65189f;
case 0x6518a2:c.instructions+=5;goto B6518a2;
case 0x6518a5:c.instructions+=4;goto B6518a5;
case 0x6518a9:c.instructions+=3;goto B6518a9;
case 0x6518ad:c.instructions+=2;goto B6518ad;
case 0x6518b1:c.instructions+=1;goto B6518b1;
case 0x6518b3:goto L6518b3;
case 0x6518b5:c.instructions+=1;goto B6518b5;
case 0x6518bb:goto L6518bb;
case 0x6518bd:c.instructions+=2;goto B6518bd;
case 0x6518bf:c.instructions+=1;goto B6518bf;
case 0x6518c5:goto L6518c5;
case 0x6518c8:c.instructions+=5;goto B6518c8;
case 0x6518cb:c.instructions+=4;goto B6518cb;
case 0x6518cc:c.instructions+=3;goto B6518cc;
case 0x6518cd:c.instructions+=2;goto B6518cd;
case 0x6518d0:c.instructions+=1;goto B6518d0;
case 0x6518d5:goto L6518d5;
case 0x6518d7:c.instructions+=1;goto B6518d7;
case 0x6518dd:goto L6518dd;
case 0x6518e0:c.instructions+=5;goto B6518e0;
case 0x6518e3:c.instructions+=4;goto B6518e3;
case 0x6518e4:c.instructions+=3;goto B6518e4;
case 0x6518e5:c.instructions+=2;goto B6518e5;
case 0x6518e8:c.instructions+=1;goto B6518e8;
case 0x6518ed:goto L6518ed;
case 0x6518ef:c.instructions+=1;goto B6518ef;
case 0x6518f5:goto L6518f5;
case 0x6518f8:c.instructions+=6;goto B6518f8;
case 0x6518fa:c.instructions+=5;goto B6518fa;
case 0x6518fd:c.instructions+=4;goto B6518fd;
case 0x6518fe:c.instructions+=3;goto B6518fe;
case 0x651901:c.instructions+=2;goto B651901;
case 0x651902:c.instructions+=1;goto B651902;
case 0x651907:goto L651907;
case 0x651909:c.instructions+=1;goto B651909;
case 0x65190f:goto L65190f;
case 0x651910:c.instructions+=2;goto B651910;
case 0x651912:c.instructions+=1;goto B651912;
case 0x651914:goto L651914;
case 0x651916:goto L651916;
case 0x651919:c.instructions+=1;goto B651919;
case 0x65191f:goto L65191f;
case 0x651921:c.instructions+=1;goto B651921;
case 0x651927:goto L651927;
case 0x651929:c.instructions+=2;goto B651929;
case 0x65192b:c.instructions+=1;goto B65192b;
case 0x65192d:goto L65192d;
case 0x651930:c.instructions+=5;goto B651930;
case 0x651933:c.instructions+=4;goto B651933;
case 0x651934:c.instructions+=3;goto B651934;
case 0x651935:c.instructions+=2;goto B651935;
case 0x651938:c.instructions+=1;goto B651938;
case 0x65193d:goto L65193d;
case 0x65193f:c.instructions+=1;goto B65193f;
case 0x651945:goto L651945;
case 0x651948:c.instructions+=5;goto B651948;
case 0x65194b:c.instructions+=4;goto B65194b;
case 0x65194c:c.instructions+=3;goto B65194c;
case 0x65194d:c.instructions+=2;goto B65194d;
case 0x651950:c.instructions+=1;goto B651950;
case 0x651955:goto L651955;
case 0x651957:c.instructions+=1;goto B651957;
case 0x65195d:goto L65195d;
case 0x651960:c.instructions+=5;goto B651960;
case 0x651963:c.instructions+=4;goto B651963;
case 0x651964:c.instructions+=3;goto B651964;
case 0x651967:c.instructions+=2;goto B651967;
case 0x651968:c.instructions+=1;goto B651968;
case 0x65196d:goto L65196d;
case 0x65196f:c.instructions+=1;goto B65196f;
case 0x651975:goto L651975;
case 0x651976:c.instructions+=2;goto B651976;
case 0x651978:c.instructions+=1;goto B651978;
case 0x65197a:goto L65197a;
case 0x65197c:c.instructions+=2;goto B65197c;
case 0x65197d:c.instructions+=1;goto B65197d;
case 0x651982:goto L651982;
case 0x651984:c.instructions+=9;goto B651984;
case 0x651985:c.instructions+=8;goto B651985;
case 0x651987:c.instructions+=7;goto B651987;
case 0x65198d:c.instructions+=6;goto B65198d;
case 0x651991:c.instructions+=5;goto B651991;
case 0x651992:c.instructions+=4;goto B651992;
case 0x651993:c.instructions+=3;goto B651993;
case 0x651994:c.instructions+=2;goto B651994;
case 0x651997:c.instructions+=1;goto B651997;
case 0x65199d:goto L65199d;
case 0x6519a0:c.instructions+=2;goto B6519a0;
case 0x6519a2:c.instructions+=1;goto B6519a2;
case 0x6519a8:goto L6519a8;
case 0x6519ac:c.instructions+=1;goto B6519ac;
case 0x6519b2:goto L6519b2;
case 0x6519b5:c.instructions+=1;goto B6519b5;
case 0x6519ba:goto L6519ba;
case 0x6519bd:c.instructions+=1;goto B6519bd;
case 0x6519c2:goto L6519c2;
case 0x6519c6:c.instructions+=3;goto B6519c6;
case 0x6519c8:c.instructions+=2;goto B6519c8;
case 0x6519c9:c.instructions+=1;goto B6519c9;
case 0x6519cb:goto L6519cb;
case 0x6519ce:c.instructions+=7;goto B6519ce;
case 0x6519d1:c.instructions+=6;goto B6519d1;
case 0x6519d3:c.instructions+=5;goto B6519d3;
case 0x6519d4:c.instructions+=4;goto B6519d4;
case 0x6519d7:c.instructions+=3;goto B6519d7;
case 0x6519da:c.instructions+=2;goto B6519da;
case 0x6519dd:c.instructions+=1;goto B6519dd;
case 0x6519e2:goto L6519e2;
case 0x6519e5:c.instructions+=3;goto B6519e5;
case 0x6519e8:c.instructions+=2;goto B6519e8;
case 0x6519eb:c.instructions+=1;goto B6519eb;
case 0x6519f0:goto L6519f0;
case 0x6519f2:c.instructions+=1;goto B6519f2;
case 0x6519f4:goto L6519f4;
case 0x6519f7:goto L6519f7;
case 0x6519fa:c.instructions+=2;goto B6519fa;
case 0x6519fe:c.instructions+=1;goto B6519fe;
case 0x651a00:goto L651a00;
case 0x651a03:c.instructions+=5;goto B651a03;
case 0x651a06:c.instructions+=4;goto B651a06;
case 0x651a09:c.instructions+=3;goto B651a09;
case 0x651a0c:c.instructions+=2;goto B651a0c;
case 0x651a13:c.instructions+=1;goto B651a13;
case 0x651a18:goto L651a18;
case 0x651a1b:c.instructions+=3;goto B651a1b;
case 0x651a1e:c.instructions+=2;goto B651a1e;
case 0x651a21:c.instructions+=1;goto B651a21;
case 0x651a26:goto L651a26;
case 0x651a28:c.instructions+=1;goto B651a28;
case 0x651a2a:goto L651a2a;
case 0x651a2c:c.instructions+=3;goto B651a2c;
case 0x651a2d:c.instructions+=2;goto B651a2d;
case 0x651a30:c.instructions+=1;goto B651a30;
case 0x651a32:goto L651a32;
case 0x651a34:c.instructions+=1;goto B651a34;
case 0x651a35:goto L651a35;
case 0x651a38:c.instructions+=2;goto B651a38;
case 0x651a3a:c.instructions+=1;goto B651a3a;
case 0x651a40:goto L651a40;
case 0x651a43:c.instructions+=2;goto B651a43;
case 0x651a45:c.instructions+=1;goto B651a45;
case 0x651a4b:goto L651a4b;
case 0x651a4d:c.instructions+=1;goto B651a4d;
case 0x651a53:goto L651a53;
case 0x651a55:c.instructions+=1;goto B651a55;
case 0x651a5b:goto L651a5b;
case 0x651a5d:c.instructions+=1;goto B651a5d;
case 0x651a63:goto L651a63;
case 0x651a65:c.instructions+=1;goto B651a65;
case 0x651a67:goto L651a67;
case 0x651a6a:c.instructions+=2;goto B651a6a;
case 0x651a6d:c.instructions+=1;goto B651a6d;
case 0x651a73:goto L651a73;
case 0x651a78:goto L651a78;
case 0x651a7b:c.instructions+=7;goto B651a7b;
case 0x651a7e:c.instructions+=6;goto B651a7e;
case 0x651a83:c.instructions+=5;goto B651a83;
case 0x651a84:c.instructions+=4;goto B651a84;
case 0x651a8a:c.instructions+=3;goto B651a8a;
case 0x651a8b:c.instructions+=2;goto B651a8b;
case 0x651a8d:c.instructions+=1;goto B651a8d;
case 0x651a92:goto L651a92;
case 0x651a95:c.instructions+=5;goto B651a95;
case 0x651a9b:c.instructions+=4;goto B651a9b;
case 0x651a9c:c.instructions+=3;goto B651a9c;
case 0x651a9d:c.instructions+=2;goto B651a9d;
case 0x651a9f:c.instructions+=1;goto B651a9f;
case 0x651aa4:goto L651aa4;
case 0x651aa8:c.instructions+=6;goto B651aa8;
case 0x651aae:c.instructions+=5;goto B651aae;
case 0x651aaf:c.instructions+=4;goto B651aaf;
case 0x651ab5:c.instructions+=3;goto B651ab5;
case 0x651ab6:c.instructions+=2;goto B651ab6;
case 0x651ab7:c.instructions+=1;goto B651ab7;
case 0x651abd:goto L651abd;
case 0x651ac2:c.instructions+=4;goto B651ac2;
case 0x651ac7:c.instructions+=3;goto B651ac7;
case 0x651aca:c.instructions+=2;goto B651aca;
case 0x651acb:c.instructions+=1;goto B651acb;
case 0x651ad0:goto L651ad0;
case 0x651ad3:c.instructions+=1;goto B651ad3;
case 0x651ad8:goto L651ad8;
case 0x651adb:c.instructions+=1;goto B651adb;
case 0x651ae1:goto L651ae1;
case 0x651ae4:c.instructions+=2;goto B651ae4;
case 0x651ae6:c.instructions+=1;goto B651ae6;
case 0x651ae8:goto L651ae8;
case 0x651aeb:c.instructions+=2;goto B651aeb;
case 0x651aee:c.instructions+=1;goto B651aee;
case 0x651af0:goto L651af0;
case 0x651af3:c.instructions+=2;goto B651af3;
case 0x651af5:c.instructions+=1;goto B651af5;
case 0x651af7:goto L651af7;
case 0x651afa:c.instructions+=1;goto B651afa;
case 0x651b00:goto L651b00;
case 0x651b02:c.instructions+=1;goto B651b02;
case 0x651b08:goto L651b08;
case 0x651b0a:c.instructions+=1;goto B651b0a;
case 0x651b10:goto L651b10;
case 0x651b13:c.instructions+=2;goto B651b13;
case 0x651b16:c.instructions+=1;goto B651b16;
case 0x651b1b:goto L651b1b;
case 0x651b1e:c.instructions+=1;goto B651b1e;
case 0x651b20:goto L651b20;
case 0x651b22:c.instructions+=1;goto B651b22;
case 0x651b28:goto L651b28;
case 0x651b2a:c.instructions+=1;goto B651b2a;
case 0x651b2c:goto L651b2c;
case 0x651b2f:c.instructions+=2;goto B651b2f;
case 0x651b31:c.instructions+=1;goto B651b31;
case 0x651b33:goto L651b33;
case 0x651b36:c.instructions+=2;goto B651b36;
case 0x651b39:c.instructions+=1;goto B651b39;
case 0x651b3f:goto L651b3f;
case 0x651b42:c.instructions+=2;goto B651b42;
case 0x651b44:c.instructions+=1;goto B651b44;
case 0x651b46:goto L651b46;
case 0x651b49:c.instructions+=1;goto B651b49;
case 0x651b4f:goto L651b4f;
case 0x651b51:c.instructions+=1;goto B651b51;
case 0x651b57:goto L651b57;
case 0x651b59:c.instructions+=1;goto B651b59;
case 0x651b5f:goto L651b5f;
case 0x651b62:c.instructions+=2;goto B651b62;
case 0x651b65:c.instructions+=1;goto B651b65;
case 0x651b6a:goto L651b6a;
case 0x651b6d:c.instructions+=1;goto B651b6d;
case 0x651b6f:goto L651b6f;
case 0x651b72:c.instructions+=2;goto B651b72;
case 0x651b75:c.instructions+=1;goto B651b75;
case 0x651b7b:goto L651b7b;
case 0x651b7e:c.instructions+=2;goto B651b7e;
case 0x651b81:c.instructions+=1;goto B651b81;
case 0x651b87:goto L651b87;
case 0x651b8c:goto L651b8c;
case 0x651b8f:c.instructions+=1;goto B651b8f;
case 0x651b95:goto L651b95;
case 0x651b9a:goto L651b9a;
case 0x651b9d:c.instructions+=1;goto B651b9d;
case 0x651ba3:goto L651ba3;
case 0x651ba5:c.instructions+=1;goto B651ba5;
case 0x651bab:goto L651bab;
case 0x651bae:c.instructions+=2;goto B651bae;
case 0x651bb1:c.instructions+=1;goto B651bb1;
case 0x651bb7:goto L651bb7;
case 0x651bba:c.instructions+=1;goto B651bba;
case 0x651bbc:goto L651bbc;
case 0x651bbf:c.instructions+=2;goto B651bbf;
case 0x651bc1:c.instructions+=1;goto B651bc1;
case 0x651bc7:goto L651bc7;
case 0x651bca:c.instructions+=1;goto B651bca;
case 0x651bd0:goto L651bd0;
case 0x651bd3:c.instructions+=1;goto B651bd3;
case 0x651bd9:goto L651bd9;
case 0x651bdc:c.instructions+=1;goto B651bdc;
case 0x651be2:goto L651be2;
case 0x651be5:c.instructions+=1;goto B651be5;
case 0x651be7:goto L651be7;
case 0x651bea:c.instructions+=1;goto B651bea;
case 0x651bec:goto L651bec;
case 0x651bef:c.instructions+=2;goto B651bef;
case 0x651bf1:c.instructions+=1;goto B651bf1;
case 0x651bf7:goto L651bf7;
case 0x651bfa:c.instructions+=1;goto B651bfa;
case 0x651c00:goto L651c00;
case 0x651c03:c.instructions+=1;goto B651c03;
case 0x651c09:goto L651c09;
case 0x651c0c:c.instructions+=1;goto B651c0c;
case 0x651c0e:goto L651c0e;
case 0x651c11:goto L651c11;
case 0x651c17:goto L651c17;
case 0x651c19:goto L651c19;
case 0x651c1c:c.instructions+=1;goto B651c1c;
case 0x651c1e:goto L651c1e;
case 0x651c21:c.instructions+=5;goto B651c21;
case 0x651c24:c.instructions+=4;goto B651c24;
case 0x651c28:c.instructions+=3;goto B651c28;
case 0x651c2c:c.instructions+=2;goto B651c2c;
case 0x651c2e:c.instructions+=1;goto B651c2e;
case 0x651c34:goto L651c34;
case 0x651c36:c.instructions+=2;goto B651c36;
case 0x651c38:c.instructions+=1;goto B651c38;
case 0x651c3a:goto L651c3a;
case 0x651c3d:c.instructions+=5;goto B651c3d;
case 0x651c40:c.instructions+=4;goto B651c40;
case 0x651c41:c.instructions+=3;goto B651c41;
case 0x651c42:c.instructions+=2;goto B651c42;
case 0x651c45:c.instructions+=1;goto B651c45;
case 0x651c4a:goto L651c4a;
case 0x651c4c:c.instructions+=1;goto B651c4c;
case 0x651c52:goto L651c52;
case 0x651c55:c.instructions+=5;goto B651c55;
case 0x651c58:c.instructions+=4;goto B651c58;
case 0x651c59:c.instructions+=3;goto B651c59;
case 0x651c5a:c.instructions+=2;goto B651c5a;
case 0x651c5d:c.instructions+=1;goto B651c5d;
case 0x651c62:goto L651c62;
case 0x651c64:c.instructions+=1;goto B651c64;
case 0x651c6a:goto L651c6a;
case 0x651c6d:c.instructions+=6;goto B651c6d;
case 0x651c6f:c.instructions+=5;goto B651c6f;
case 0x651c72:c.instructions+=4;goto B651c72;
case 0x651c73:c.instructions+=3;goto B651c73;
case 0x651c76:c.instructions+=2;goto B651c76;
case 0x651c77:c.instructions+=1;goto B651c77;
case 0x651c7c:goto L651c7c;
case 0x651c7e:c.instructions+=1;goto B651c7e;
case 0x651c84:goto L651c84;
case 0x651c85:c.instructions+=2;goto B651c85;
case 0x651c87:c.instructions+=1;goto B651c87;
case 0x651c89:goto L651c89;
case 0x651c8e:c.instructions+=1;goto B651c8e;
case 0x651c93:goto L651c93;
case 0x651c96:c.instructions+=5;goto B651c96;
case 0x651c9b:c.instructions+=4;goto B651c9b;
case 0x651ca0:c.instructions+=3;goto B651ca0;
case 0x651ca3:c.instructions+=2;goto B651ca3;
case 0x651ca4:c.instructions+=1;goto B651ca4;
case 0x651ca9:goto L651ca9;
case 0x651cac:goto L651cac;
case 0x651cad:c.instructions+=4;goto B651cad;
case 0x651cae:c.instructions+=3;goto B651cae;
case 0x651caf:c.instructions+=2;goto B651caf;
case 0x651cb0:c.instructions+=1;goto B651cb0;
case 0x651cb3:goto L651cb3;
case 0x651cb5:c.instructions+=11;goto B651cb5;
case 0x651cb6:c.instructions+=10;goto B651cb6;
case 0x651cb8:c.instructions+=9;goto B651cb8;
case 0x651cb9:c.instructions+=8;goto B651cb9;
case 0x651cba:c.instructions+=7;goto B651cba;
case 0x651cbd:c.instructions+=6;goto B651cbd;
case 0x651cc0:c.instructions+=5;goto B651cc0;
case 0x651cc2:c.instructions+=4;goto B651cc2;
case 0x651cc4:c.instructions+=3;goto B651cc4;
case 0x651cc5:c.instructions+=2;goto B651cc5;
case 0x651cc6:c.instructions+=1;goto B651cc6;
case 0x651cc8:goto L651cc8;
case 0x651ccb:c.instructions+=2;goto B651ccb;
case 0x651ccd:c.instructions+=1;goto B651ccd;
case 0x651ccf:goto L651ccf;
case 0x651cd1:c.instructions+=4;goto B651cd1;
case 0x651cd3:c.instructions+=3;goto B651cd3;
case 0x651cd6:c.instructions+=2;goto B651cd6;
case 0x651cd8:c.instructions+=1;goto B651cd8;
case 0x651cda:goto L651cda;
case 0x651cdc:goto L651cdc;
case 0x651cdf:c.instructions+=2;goto B651cdf;
case 0x651ce1:c.instructions+=1;goto B651ce1;
case 0x651ce3:goto L651ce3;
case 0x651ce6:c.instructions+=1;goto B651ce6;
case 0x651cec:goto L651cec;
case 0x651cf1:goto L651cf1;
case 0x651cf2:c.instructions+=4;goto B651cf2;
case 0x651cf3:c.instructions+=3;goto B651cf3;
case 0x651cf4:c.instructions+=2;goto B651cf4;
case 0x651cf5:c.instructions+=1;goto B651cf5;
case 0x651cf8:goto L651cf8;
case 0x651cfb:c.instructions+=2;goto B651cfb;
case 0x651cfd:c.instructions+=1;goto B651cfd;
case 0x651cff:goto L651cff;
case 0x651d02:c.instructions+=2;goto B651d02;
case 0x651d03:c.instructions+=1;goto B651d03;
case 0x651d08:goto L651d08;
case 0x651d0b:c.instructions+=3;goto B651d0b;
case 0x651d0c:c.instructions+=2;goto B651d0c;
case 0x651d0e:c.instructions+=1;goto B651d0e;
case 0x651d13:goto L651d13;
case 0x651d15:c.instructions+=1;goto B651d15;
case 0x651d17:goto L651d17;
case 0x651d1a:c.instructions+=4;goto B651d1a;
case 0x651d1c:c.instructions+=3;goto B651d1c;
case 0x651d1d:c.instructions+=2;goto B651d1d;
case 0x651d1e:c.instructions+=1;goto B651d1e;
case 0x651d23:goto L651d23;
case 0x651d25:c.instructions+=1;goto B651d25;
case 0x651d27:goto L651d27;
case 0x651d2a:c.instructions+=4;goto B651d2a;
case 0x651d2c:c.instructions+=3;goto B651d2c;
case 0x651d2d:c.instructions+=2;goto B651d2d;
case 0x651d2e:c.instructions+=1;goto B651d2e;
case 0x651d33:goto L651d33;
case 0x651d35:c.instructions+=1;goto B651d35;
case 0x651d37:goto L651d37;
case 0x651d39:c.instructions+=1;goto B651d39;
case 0x651d3b:goto L651d3b;
case 0x651d3e:c.instructions+=4;goto B651d3e;
case 0x651d40:c.instructions+=3;goto B651d40;
case 0x651d41:c.instructions+=2;goto B651d41;
case 0x651d42:c.instructions+=1;goto B651d42;
case 0x651d47:goto L651d47;
case 0x651d49:c.instructions+=1;goto B651d49;
case 0x651d4b:goto L651d4b;
case 0x651d4d:goto L651d4d;
case 0x651d50:c.instructions+=5;goto B651d50;
case 0x651d53:c.instructions+=4;goto B651d53;
case 0x651d54:c.instructions+=3;goto B651d54;
case 0x651d55:c.instructions+=2;goto B651d55;
case 0x651d56:c.instructions+=1;goto B651d56;
case 0x651d5b:goto L651d5b;
case 0x651d5d:c.instructions+=1;goto B651d5d;
case 0x651d5f:goto L651d5f;
case 0x651d62:c.instructions+=2;goto B651d62;
case 0x651d65:c.instructions+=1;goto B651d65;
case 0x651d67:goto L651d67;
case 0x651d69:c.instructions+=2;goto B651d69;
case 0x651d6b:c.instructions+=1;goto B651d6b;
case 0x651d6e:goto L651d6e;
case 0x651d70:c.instructions+=1;goto B651d70;
case 0x651d72:goto L651d72;
case 0x651d75:c.instructions+=1;goto B651d75;
case 0x651d77:goto L651d77;
case 0x651d7a:c.instructions+=2;goto B651d7a;
case 0x651d7c:c.instructions+=1;goto B651d7c;
case 0x651d7e:goto L651d7e;
case 0x651d80:c.instructions+=2;goto B651d80;
case 0x651d82:c.instructions+=1;goto B651d82;
case 0x651d85:goto L651d85;
case 0x651d87:c.instructions+=2;goto B651d87;
case 0x651d89:c.instructions+=1;goto B651d89;
case 0x651d8b:goto L651d8b;
case 0x651d90:c.instructions+=1;goto B651d90;
case 0x651d95:goto L651d95;
case 0x651d98:c.instructions+=3;goto B651d98;
case 0x651d9a:c.instructions+=2;goto B651d9a;
case 0x651d9b:c.instructions+=1;goto B651d9b;
case 0x651da0:goto L651da0;
case 0x651da3:c.instructions+=3;goto B651da3;
case 0x651da5:c.instructions+=2;goto B651da5;
case 0x651da8:c.instructions+=1;goto B651da8;
case 0x651daa:goto L651daa;
case 0x651dac:c.instructions+=1;goto B651dac;
case 0x651db1:goto L651db1;
case 0x651db3:c.instructions+=17;goto B651db3;
case 0x651db4:c.instructions+=16;goto B651db4;
case 0x651db6:c.instructions+=15;goto B651db6;
case 0x651db7:c.instructions+=14;goto B651db7;
case 0x651db8:c.instructions+=13;goto B651db8;
case 0x651dbb:c.instructions+=12;goto B651dbb;
case 0x651dbc:c.instructions+=11;goto B651dbc;
case 0x651dbd:c.instructions+=10;goto B651dbd;
case 0x651dbe:c.instructions+=9;goto B651dbe;
case 0x651dc0:c.instructions+=8;goto B651dc0;
case 0x651dc2:c.instructions+=7;goto B651dc2;
case 0x651dc5:c.instructions+=6;goto B651dc5;
case 0x651dc7:c.instructions+=5;goto B651dc7;
case 0x651dc8:c.instructions+=4;goto B651dc8;
case 0x651dc9:c.instructions+=3;goto B651dc9;
case 0x651dcb:c.instructions+=2;goto B651dcb;
case 0x651dce:c.instructions+=1;goto B651dce;
case 0x651dd0:goto L651dd0;
case 0x651dd2:goto L651dd2;
case 0x651dd5:c.instructions+=1;goto B651dd5;
case 0x651dd7:goto L651dd7;
case 0x651dda:c.instructions+=1;goto B651dda;
case 0x651ddc:goto L651ddc;
case 0x651ddf:c.instructions+=1;goto B651ddf;
case 0x651de1:goto L651de1;
case 0x651de8:c.instructions+=1;goto B651de8;
case 0x651dea:goto L651dea;
case 0x651ded:c.instructions+=1;goto B651ded;
case 0x651def:goto L651def;
case 0x651df2:c.instructions+=1;goto B651df2;
case 0x651df4:goto L651df4;
case 0x651df7:goto L651df7;
case 0x651df9:c.instructions+=1;goto B651df9;
case 0x651dfe:goto L651dfe;
case 0x651e00:c.instructions+=1;goto B651e00;
case 0x651e02:goto L651e02;
case 0x651e05:c.instructions+=7;goto B651e05;
case 0x651e07:c.instructions+=6;goto B651e07;
case 0x651e08:c.instructions+=5;goto B651e08;
case 0x651e09:c.instructions+=4;goto B651e09;
case 0x651e0a:c.instructions+=3;goto B651e0a;
case 0x651e0b:c.instructions+=2;goto B651e0b;
case 0x651e0c:c.instructions+=1;goto B651e0c;
case 0x651e11:goto L651e11;
case 0x651e13:c.instructions+=1;goto B651e13;
case 0x651e15:goto L651e15;
case 0x651e17:goto L651e17;
case 0x651e19:c.instructions+=1;goto B651e19;
case 0x651e1f:goto L651e1f;
case 0x651e21:c.instructions+=1;goto B651e21;
case 0x651e26:goto L651e26;
case 0x651e28:c.instructions+=1;goto B651e28;
case 0x651e2a:goto L651e2a;
case 0x651e2f:c.instructions+=6;goto B651e2f;
case 0x651e30:c.instructions+=5;goto B651e30;
case 0x651e31:c.instructions+=4;goto B651e31;
case 0x651e34:c.instructions+=3;goto B651e34;
case 0x651e36:c.instructions+=2;goto B651e36;
case 0x651e37:c.instructions+=1;goto B651e37;
case 0x651e3c:goto L651e3c;
case 0x651e3e:goto L651e3e;
case 0x651e40:goto L651e40;
case 0x651e42:c.instructions+=2;goto B651e42;
case 0x651e45:c.instructions+=1;goto B651e45;
case 0x651e47:goto L651e47;
case 0x651e49:c.instructions+=1;goto B651e49;
case 0x651e4e:goto L651e4e;
case 0x651e52:c.instructions+=1;goto B651e52;
case 0x651e54:goto L651e54;
case 0x651e56:c.instructions+=1;goto B651e56;
case 0x651e58:goto L651e58;
case 0x651e5b:c.instructions+=7;goto B651e5b;
case 0x651e5e:c.instructions+=6;goto B651e5e;
case 0x651e5f:c.instructions+=5;goto B651e5f;
case 0x651e60:c.instructions+=4;goto B651e60;
case 0x651e63:c.instructions+=3;goto B651e63;
case 0x651e65:c.instructions+=2;goto B651e65;
case 0x651e67:c.instructions+=1;goto B651e67;
case 0x651e6c:goto L651e6c;
case 0x651e6e:goto L651e6e;
case 0x651e70:c.instructions+=1;goto B651e70;
case 0x651e72:goto L651e72;
case 0x651e75:c.instructions+=4;goto B651e75;
case 0x651e77:c.instructions+=3;goto B651e77;
case 0x651e7a:c.instructions+=2;goto B651e7a;
case 0x651e7d:c.instructions+=1;goto B651e7d;
case 0x651e82:goto L651e82;
case 0x651e84:goto L651e84;
case 0x651e86:goto L651e86;
case 0x651e88:c.instructions+=2;goto B651e88;
case 0x651e8b:c.instructions+=1;goto B651e8b;
case 0x651e8d:goto L651e8d;
case 0x651e8f:c.instructions+=1;goto B651e8f;
case 0x651e94:goto L651e94;
case 0x651e96:c.instructions+=1;goto B651e96;
case 0x651e98:goto L651e98;
case 0x651e9d:c.instructions+=4;goto B651e9d;
case 0x651e9e:c.instructions+=3;goto B651e9e;
case 0x651ea1:c.instructions+=2;goto B651ea1;
case 0x651ea3:c.instructions+=1;goto B651ea3;
case 0x651ea8:goto L651ea8;
case 0x651eaa:goto L651eaa;
case 0x651eac:goto L651eac;
case 0x651eae:c.instructions+=1;goto B651eae;
case 0x651eb0:goto L651eb0;
case 0x651eb2:c.instructions+=1;goto B651eb2;
case 0x651eb4:goto L651eb4;
case 0x651eb7:c.instructions+=3;goto B651eb7;
case 0x651eb8:c.instructions+=2;goto B651eb8;
case 0x651ebb:c.instructions+=1;goto B651ebb;
case 0x651ec0:goto L651ec0;
case 0x651ec2:goto L651ec2;
case 0x651ec3:c.instructions+=4;goto B651ec3;
case 0x651ec4:c.instructions+=3;goto B651ec4;
case 0x651ec5:c.instructions+=2;goto B651ec5;
case 0x651ec6:c.instructions+=1;goto B651ec6;
case 0x651ec9:goto L651ec9;
case 0x651ecb:c.instructions+=12;goto B651ecb;
case 0x651ecc:c.instructions+=11;goto B651ecc;
case 0x651ece:c.instructions+=10;goto B651ece;
case 0x651ecf:c.instructions+=9;goto B651ecf;
case 0x651ed1:c.instructions+=8;goto B651ed1;
case 0x651ed4:c.instructions+=7;goto B651ed4;
case 0x651ed5:c.instructions+=6;goto B651ed5;
case 0x651ed7:c.instructions+=5;goto B651ed7;
case 0x651ed9:c.instructions+=4;goto B651ed9;
case 0x651edb:c.instructions+=3;goto B651edb;
case 0x651ede:c.instructions+=2;goto B651ede;
case 0x651edf:c.instructions+=1;goto B651edf;
case 0x651ee1:goto L651ee1;
case 0x651ee5:c.instructions+=1;goto B651ee5;
case 0x651ee7:goto L651ee7;
case 0x651eea:c.instructions+=4;goto B651eea;
case 0x651eec:c.instructions+=3;goto B651eec;
case 0x651eed:c.instructions+=2;goto B651eed;
case 0x651eee:c.instructions+=1;goto B651eee;
case 0x651ef0:goto L651ef0;
case 0x651ef1:c.instructions+=1;goto B651ef1;
case 0x651ef3:goto L651ef3;
case 0x651ef4:c.instructions+=1;goto B651ef4;
case 0x651ef6:goto L651ef6;
case 0x651ef7:c.instructions+=1;goto B651ef7;
case 0x651ef9:goto L651ef9;
case 0x651efa:c.instructions+=1;goto B651efa;
case 0x651efc:goto L651efc;
case 0x651efd:c.instructions+=1;goto B651efd;
case 0x651eff:goto L651eff;
case 0x651f00:c.instructions+=1;goto B651f00;
case 0x651f02:goto L651f02;
case 0x651f04:goto L651f04;
case 0x651f06:c.instructions+=3;goto B651f06;
case 0x651f07:c.instructions+=2;goto B651f07;
case 0x651f0a:c.instructions+=1;goto B651f0a;
case 0x651f0c:goto L651f0c;
case 0x651f0e:c.instructions+=1;goto B651f0e;
case 0x651f10:goto L651f10;
case 0x651f12:c.instructions+=1;goto B651f12;
case 0x651f14:goto L651f14;
case 0x651f16:c.instructions+=1;goto B651f16;
case 0x651f18:goto L651f18;
case 0x651f1a:goto L651f1a;
case 0x651f1d:c.instructions+=2;goto B651f1d;
case 0x651f1e:c.instructions+=1;goto B651f1e;
case 0x651f20:goto L651f20;
case 0x651f22:c.instructions+=1;goto B651f22;
case 0x651f24:goto L651f24;
case 0x651f27:c.instructions+=5;goto B651f27;
case 0x651f29:c.instructions+=4;goto B651f29;
case 0x651f2f:c.instructions+=3;goto B651f2f;
case 0x651f35:c.instructions+=2;goto B651f35;
case 0x651f38:c.instructions+=1;goto B651f38;
case 0x651f3a:goto L651f3a;
case 0x651f3b:c.instructions+=6;goto B651f3b;
case 0x651f3c:c.instructions+=5;goto B651f3c;
case 0x651f3d:c.instructions+=4;goto B651f3d;
case 0x651f40:c.instructions+=3;goto B651f40;
case 0x651f41:c.instructions+=2;goto B651f41;
case 0x651f42:c.instructions+=1;goto B651f42;
case 0x651f47:goto L651f47;
case 0x651f48:c.instructions+=3;goto B651f48;
case 0x651f49:c.instructions+=2;goto B651f49;
case 0x651f4a:c.instructions+=1;goto B651f4a;
case 0x651f4d:goto L651f4d;
case 0x651f4f:c.instructions+=10;goto B651f4f;
case 0x651f50:c.instructions+=9;goto B651f50;
case 0x651f52:c.instructions+=8;goto B651f52;
case 0x651f53:c.instructions+=7;goto B651f53;
case 0x651f54:c.instructions+=6;goto B651f54;
case 0x651f57:c.instructions+=5;goto B651f57;
case 0x651f58:c.instructions+=4;goto B651f58;
case 0x651f5a:c.instructions+=3;goto B651f5a;
case 0x651f5c:c.instructions+=2;goto B651f5c;
case 0x651f5f:c.instructions+=1;goto B651f5f;
case 0x651f61:goto L651f61;
case 0x651f63:c.instructions+=1;goto B651f63;
case 0x651f68:goto L651f68;
case 0x651f69:c.instructions+=3;goto B651f69;
case 0x651f6b:c.instructions+=2;goto B651f6b;
case 0x651f6e:c.instructions+=1;goto B651f6e;
case 0x651f73:goto L651f73;
case 0x651f75:c.instructions+=1;goto B651f75;
case 0x651f77:goto L651f77;
case 0x651f78:c.instructions+=7;goto B651f78;
case 0x651f7a:c.instructions+=6;goto B651f7a;
case 0x651f7b:c.instructions+=5;goto B651f7b;
case 0x651f7c:c.instructions+=4;goto B651f7c;
case 0x651f7d:c.instructions+=3;goto B651f7d;
case 0x651f7e:c.instructions+=2;goto B651f7e;
case 0x651f80:c.instructions+=1;goto B651f80;
case 0x651f85:goto L651f85;
case 0x651f87:c.instructions+=1;goto B651f87;
case 0x651f89:goto L651f89;
case 0x651f8b:goto L651f8b;
case 0x651f8d:c.instructions+=1;goto B651f8d;
case 0x651f93:goto L651f93;
case 0x651f95:c.instructions+=1;goto B651f95;
case 0x651f9a:goto L651f9a;
case 0x651f9c:c.instructions+=1;goto B651f9c;
case 0x651f9e:goto L651f9e;
case 0x651fa3:c.instructions+=6;goto B651fa3;
case 0x651fa5:c.instructions+=5;goto B651fa5;
case 0x651fa7:c.instructions+=4;goto B651fa7;
case 0x651fa9:c.instructions+=3;goto B651fa9;
case 0x651fab:c.instructions+=2;goto B651fab;
case 0x651fad:c.instructions+=1;goto B651fad;
case 0x651fb2:goto L651fb2;
case 0x651fb4:goto L651fb4;
case 0x651fb6:goto L651fb6;
case 0x651fb8:c.instructions+=2;goto B651fb8;
case 0x651fbb:c.instructions+=1;goto B651fbb;
case 0x651fbd:goto L651fbd;
case 0x651fbf:c.instructions+=1;goto B651fbf;
case 0x651fc4:goto L651fc4;
case 0x651fc6:c.instructions+=2;goto B651fc6;
case 0x651fc9:c.instructions+=1;goto B651fc9;
case 0x651fcb:goto L651fcb;
case 0x651fce:c.instructions+=2;goto B651fce;
case 0x651fd0:c.instructions+=1;goto B651fd0;
case 0x651fd3:goto L651fd3;
case 0x651fd5:c.instructions+=3;goto B651fd5;
case 0x651fd6:c.instructions+=2;goto B651fd6;
case 0x651fd8:c.instructions+=1;goto B651fd8;
case 0x651fda:goto L651fda;
case 0x651fdc:c.instructions+=7;goto B651fdc;
case 0x651fdf:c.instructions+=6;goto B651fdf;
case 0x651fe0:c.instructions+=5;goto B651fe0;
case 0x651fe1:c.instructions+=4;goto B651fe1;
case 0x651fe2:c.instructions+=3;goto B651fe2;
case 0x651fe3:c.instructions+=2;goto B651fe3;
case 0x651fe5:c.instructions+=1;goto B651fe5;
case 0x651fea:goto L651fea;
case 0x651fec:c.instructions+=1;goto B651fec;
case 0x651fee:goto L651fee;
case 0x651ff0:goto L651ff0;
case 0x651ff2:c.instructions+=2;goto B651ff2;
case 0x651ff5:c.instructions+=1;goto B651ff5;
case 0x651ff7:goto L651ff7;
case 0x651ff9:c.instructions+=1;goto B651ff9;
case 0x651ffe:goto L651ffe;
default:missing_instruction(c.pc);}
B651001:L651001:{c.instructions+=8;NFSU2_TR(0x651001);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B651004:{NFSU2_TR(0x651004);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B651007:{NFSU2_TR(0x651007);
u8 U[12];
w4(U+0,u32(u32(u32(0xffffffc4ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B65100b:{NFSU2_TR(0x65100b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+24),(U+0),4);
}
B65100d:{NFSU2_TR(0x65100d);
u8 U[4];
w4(U+0,u32(0x5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65100f:{NFSU2_TR(0x65100f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B651010:{NFSU2_TR(0x651010);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B651012:{NFSU2_TR(0x651012);
if(r1(R+518)){{goto L65103b;}}
}
B651014:L651014:{c.instructions+=2;NFSU2_TR(0x651014);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B651016:{NFSU2_TR(0x651016);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L65102f;}}
}
B651018:L651018:{c.instructions+=3;NFSU2_TR(0x651018);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B65101a:{NFSU2_TR(0x65101a);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B65101d:{NFSU2_TR(0x65101d);
if(r1(R+518)){{goto L651024;}}
}
B65101f:L65101f:{c.instructions+=2;NFSU2_TR(0x65101f);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B651022:{NFSU2_TR(0x651022);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L65102f;}}
}
B651024:L651024:{c.instructions+=2;NFSU2_TR(0x651024);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+4)),r4(U+0));
}
B651026:{NFSU2_TR(0x651026);
{goto L651035;}
}
B651028:L651028:{c.instructions+=2;NFSU2_TR(0x651028);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B65102a:{NFSU2_TR(0x65102a);
if(r1(R+518)){{goto L651035;}}
}
B65102c:L65102c:{c.instructions+=1;NFSU2_TR(0x65102c);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B65102f:L65102f:{c.instructions+=3;NFSU2_TR(0x65102f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B651031:{NFSU2_TR(0x651031);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B651033:{NFSU2_TR(0x651033);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x651028u);}goto L651028;}}
}
B651035:L651035:{c.instructions+=2;NFSU2_TR(0x651035);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(r4(R+28))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B651037:{NFSU2_TR(0x651037);
if(r1(R+518)){{goto L65107b;}}
}
B651039:L651039:{c.instructions+=1;NFSU2_TR(0x651039);
{goto L651043;}
}
B65103b:L65103b:{c.instructions+=2;NFSU2_TR(0x65103b);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B65103d:{NFSU2_TR(0x65103d);
if(r1(R+518)){{goto L651043;}}
}
B65103f:L65103f:{c.instructions+=2;NFSU2_TR(0x65103f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B651041:{NFSU2_TR(0x651041);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B651043:L651043:{c.instructions+=7;NFSU2_TR(0x651043);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B651046:{NFSU2_TR(0x651046);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+24),(U+0),4);
}
B651048:{NFSU2_TR(0x651048);
u8 U[12];
w4(U+0,u32(u32(u32(0xffffffd8ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B65104c:{NFSU2_TR(0x65104c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+28),(U+0),4);
}
B65104e:{NFSU2_TR(0x65104e);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1eull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B651051:{NFSU2_TR(0x651051);
__builtin_memmove((R+0),(R+24),4);
}
B651053:{NFSU2_TR(0x651053);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6510ae;}}
}
B651055:L651055:{c.instructions+=2;NFSU2_TR(0x651055);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B651057:{NFSU2_TR(0x651057);
if(r1(R+518)){{goto L65105d;}}
}
B651059:L651059:{c.instructions+=1;NFSU2_TR(0x651059);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B65105b:L65105b:{c.instructions+=1;NFSU2_TR(0x65105b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B65105d:L65105d:{c.instructions+=4;NFSU2_TR(0x65105d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B651060:{NFSU2_TR(0x651060);
u8 U[12];
w4(U+0,u32(u32(u32(0xffffffb0ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B651064:{NFSU2_TR(0x651064);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B651067:{NFSU2_TR(0x651067);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L65106f;}}
}
B651069:L651069:{c.instructions+=1;NFSU2_TR(0x651069);
u8 U[4];
w4(U+0,u32(0x1ull));
s4(u32(r4(R+0)),r4(U+0));
}
B65106f:L65106f:{c.instructions+=4;NFSU2_TR(0x65106f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B651072:{NFSU2_TR(0x651072);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x20ull))));
}
B651075:{NFSU2_TR(0x651075);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x5ull))));
}
B651079:{NFSU2_TR(0x651079);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x651001u);}goto L651001;}}
}
B65107b:L65107b:{c.instructions+=2;NFSU2_TR(0x65107b);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x5ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B65107f:{NFSU2_TR(0x65107f);
if(r1(R+518)){{goto L651097;}}
}
B651081:L651081:{c.instructions+=5;NFSU2_TR(0x651081);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B651084:{NFSU2_TR(0x651084);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B651087:{NFSU2_TR(0x651087);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0xa4ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B65108e:{NFSU2_TR(0x65108e);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B651091:{NFSU2_TR(0x651091);
if(r1(R+512)){TAIL_STATIC(0x650e3cu,650);}
}
B651097:L651097:{c.instructions+=3;NFSU2_TR(0x651097);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B65109a:{NFSU2_TR(0x65109a);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+28))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B65109d:{NFSU2_TR(0x65109d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6510be;}}
}
B65109f:L65109f:{c.instructions+=3;NFSU2_TR(0x65109f);
w1(R+512,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6510a1:{NFSU2_TR(0x6510a1);
u8 U[6];
w1(R+523,scarry<u32>(r4(R+0),u32(0x1ull)));
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6510a2:{NFSU2_TR(0x6510a2);
{goto L651357;}
}
B6510a7:L6510a7:{c.instructions+=2;NFSU2_TR(0x6510a7);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6510a9:{NFSU2_TR(0x6510a9);
if(r1(R+518)){{goto L6510b5;}}
}
B6510ab:L6510ab:{c.instructions+=1;NFSU2_TR(0x6510ab);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B6510ae:L6510ae:{c.instructions+=3;NFSU2_TR(0x6510ae);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6510b0:{NFSU2_TR(0x6510b0);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1eull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6510b3:{NFSU2_TR(0x6510b3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6510a7u);}goto L6510a7;}}
}
B6510b5:L6510b5:{c.instructions+=2;NFSU2_TR(0x6510b5);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x1eull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B6510b8:{NFSU2_TR(0x6510b8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65105du);}goto L65105d;}}
}
B6510ba:L6510ba:{c.instructions+=2;NFSU2_TR(0x6510ba);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6510bc:{NFSU2_TR(0x6510bc);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65105bu);}goto L65105b;}
}
B6510be:L6510be:{c.instructions+=2;NFSU2_TR(0x6510be);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6510c2:{NFSU2_TR(0x6510c2);
if(r1(R+518)){{goto L6512fd;}}
}
B6510c8:L6510c8:{c.instructions+=3;NFSU2_TR(0x6510c8);
u8 U[4];
w4(U+0,u32(0x5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6510ca:{NFSU2_TR(0x6510ca);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffea0ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6510d0:{NFSU2_TR(0x6510d0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6510d1:L6510d1:{c.instructions+=2;NFSU2_TR(0x6510d1);
__builtin_memmove((R+4),(R+24),4);
}
B6510d3:{NFSU2_TR(0x6510d3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6510d8ull));
TAIL_STATIC(0x672a2au,672);
}
B6510d8:L6510d8:{c.instructions+=3;NFSU2_TR(0x6510d8);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x24ull))));
}
B6510db:{NFSU2_TR(0x6510db);
w4(R+28,u32(u32(r4(R+28))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+28))==(u32(0x0ull))));
}
B6510dc:{NFSU2_TR(0x6510dc);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6510d1u);}goto L6510d1;}}
}
B6510de:L6510de:{c.instructions+=5;NFSU2_TR(0x6510de);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6510e1:{NFSU2_TR(0x6510e1);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B6510e3:{NFSU2_TR(0x6510e3);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+12)))));
w8(U+8,u64(s64(s32(u32(0xa4ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+12,u32(r8(U+16)));
}
B6510e9:{NFSU2_TR(0x6510e9);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffeb8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6510ef:{NFSU2_TR(0x6510ef);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x7afd4cull))));
__builtin_memmove((R+4),(U+0),4);
}
B6510f5:L6510f5:{c.instructions+=2;NFSU2_TR(0x6510f5);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6510f9:{NFSU2_TR(0x6510f9);
if(r1(R+518)){{goto L651162;}}
}
B6510fb:L6510fb:{c.instructions+=4;NFSU2_TR(0x6510fb);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6510fe:{NFSU2_TR(0x6510fe);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B651100:{NFSU2_TR(0x651100);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B651103:{NFSU2_TR(0x651103);
if(r1(R+518)){{goto L651156;}}
}
B651105:L651105:{c.instructions+=9;NFSU2_TR(0x651105);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B651108:{NFSU2_TR(0x651108);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffffc4ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+8),(U+12),4);
}
B65110c:{NFSU2_TR(0x65110c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B65110f:{NFSU2_TR(0x65110f);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B651112:{NFSU2_TR(0x651112);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffffd8ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+8),(U+12),4);
}
B651116:{NFSU2_TR(0x651116);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B651119:{NFSU2_TR(0x651119);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B65111b:{NFSU2_TR(0x65111b);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B65111d:{NFSU2_TR(0x65111d);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L651125;}}
}
B65111f:L65111f:{c.instructions+=2;NFSU2_TR(0x65111f);
w4(R+8,u32(~u32(r4(R+8))));
}
B651121:{NFSU2_TR(0x651121);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffffb0ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+8),(U+12),4);
}
B651125:L651125:{c.instructions+=4;NFSU2_TR(0x651125);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+0)),r4(U+0));
}
B651127:{NFSU2_TR(0x651127);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B65112a:{NFSU2_TR(0x65112a);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B65112c:{NFSU2_TR(0x65112c);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L651134;}}
}
B65112e:L65112e:{c.instructions+=2;NFSU2_TR(0x65112e);
w4(R+8,u32(~u32(r4(R+8))));
}
B651130:{NFSU2_TR(0x651130);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffffb0ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+8),(U+12),4);
}
B651134:L651134:{c.instructions+=6;NFSU2_TR(0x651134);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B651137:{NFSU2_TR(0x651137);
w4(R+24,u32(u32(r4(R+24))&u32(u32(0xc00ull))));
}
B65113d:{NFSU2_TR(0x65113d);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B65113f:{NFSU2_TR(0x65113f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B651142:{NFSU2_TR(0x651142);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B651145:{NFSU2_TR(0x651145);
if(r1(R+518)){{goto L65114d;}}
}
B651147:L651147:{c.instructions+=2;NFSU2_TR(0x651147);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x20ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B65114b:{NFSU2_TR(0x65114b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L651156;}}
}
B65114d:L65114d:{c.instructions+=2;NFSU2_TR(0x65114d);
w4(R+24,u32(u32(r4(R+24))|u32(u32(0x200ull))));
}
B651153:{NFSU2_TR(0x651153);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B651156:L651156:{c.instructions+=5;NFSU2_TR(0x651156);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B651157:{NFSU2_TR(0x651157);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x20ull))));
}
B65115a:{NFSU2_TR(0x65115a);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
}
B65115d:{NFSU2_TR(0x65115d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w1(R+512,u8((r4(U+0))<(u32(0x5ull))));
}
B651160:{NFSU2_TR(0x651160);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6510f5u);}goto L6510f5;}}
}
B651162:L651162:{c.instructions+=2;NFSU2_TR(0x651162);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffeb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B651169:{NFSU2_TR(0x651169);
if(r1(R+518)){{goto L651174;}}
}
B65116b:L65116b:{c.instructions+=2;NFSU2_TR(0x65116b);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffeb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B651172:{NFSU2_TR(0x651172);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L65118d;}}
}
B651174:L651174:{c.instructions+=2;NFSU2_TR(0x651174);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffebcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B65117b:{NFSU2_TR(0x65117b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L65118d;}}
}
B65117d:L65117d:{c.instructions+=2;NFSU2_TR(0x65117d);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffeb8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B651184:{NFSU2_TR(0x651184);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L65118d;}}
}
B651186:L651186:{c.instructions+=1;NFSU2_TR(0x651186);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffeb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B65118d:L65118d:{c.instructions+=2;NFSU2_TR(0x65118d);
u8 U[4];
w4(U+0,u32(0x40ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65118f:{NFSU2_TR(0x65118f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x651194ull));
TAIL_STATIC(0x645362u,645);
}
B651194:L651194:{c.instructions+=2;NFSU2_TR(0x651194);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B651196:{NFSU2_TR(0x651196);
if(r1(R+518)){{goto L6511a6;}}
}
B651198:L651198:{c.instructions+=2;NFSU2_TR(0x651198);
__builtin_memmove((R+4),(R+0),4);
}
B65119a:{NFSU2_TR(0x65119a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x65119full));
TAIL_STATIC(0x672aceu,672);
}
B65119f:L65119f:{c.instructions+=3;NFSU2_TR(0x65119f);
__builtin_memmove((R+24),(R+0),4);
}
B6511a1:{NFSU2_TR(0x6511a1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6511a4:{NFSU2_TR(0x6511a4);
{goto L6511ad;}
}
B6511a6:L6511a6:{c.instructions+=2;NFSU2_TR(0x6511a6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6511aa:{NFSU2_TR(0x6511aa);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6511ad:L6511ad:{c.instructions+=2;NFSU2_TR(0x6511ad);
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
B6511af:{NFSU2_TR(0x6511af);
if(r1(R+518)){{goto L65135e;}}
}
B6511b5:L6511b5:{c.instructions+=2;NFSU2_TR(0x6511b5);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x7afd38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6511bc:{NFSU2_TR(0x6511bc);
if(r1(R+518)){{goto L6511d4;}}
}
B6511be:L6511be:{c.instructions+=2;NFSU2_TR(0x6511be);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffea0ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6511c4:{NFSU2_TR(0x6511c4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6511c9ull));
TAIL_STATIC(0x67347eu,673);
}
B6511c9:L6511c9:{c.instructions+=3;NFSU2_TR(0x6511c9);
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
B6511cb:{NFSU2_TR(0x6511cb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6511ce:{NFSU2_TR(0x6511ce);
if(r1(R+518)){{goto L65135e;}}
}
B6511d4:L6511d4:{c.instructions+=6;NFSU2_TR(0x6511d4);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x24ull))));
}
B6511d7:{NFSU2_TR(0x6511d7);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x7afd54ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6511dd:{NFSU2_TR(0x6511dd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6511e0:{NFSU2_TR(0x6511e0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6511e7:{NFSU2_TR(0x6511e7);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffee0ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6511ed:{NFSU2_TR(0x6511ed);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6511f0:L6511f0:{c.instructions+=3;NFSU2_TR(0x6511f0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6511f3:{NFSU2_TR(0x6511f3);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B6511f6:{NFSU2_TR(0x6511f6);
if(r1(R+518)){{goto L6512f2;}}
}
B6511fc:L6511fc:{c.instructions+=2;NFSU2_TR(0x6511fc);
u8 U[4];
w4(U+0,u32(0x14ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6511fe:{NFSU2_TR(0x6511fe);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x651203ull));
TAIL_STATIC(0x645362u,645);
}
B651203:L651203:{c.instructions+=2;NFSU2_TR(0x651203);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B651205:{NFSU2_TR(0x651205);
if(r1(R+518)){{goto L651219;}}
}
B651207:L651207:{c.instructions+=5;NFSU2_TR(0x651207);
u8 U[4];
w4(U+0,u32(0x7b3fe0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65120c:{NFSU2_TR(0x65120c);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65120e:{NFSU2_TR(0x65120e);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B651210:{NFSU2_TR(0x651210);
__builtin_memmove((R+4),(R+0),4);
}
B651212:{NFSU2_TR(0x651212);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x651217ull));
TAIL_STATIC(0x672498u,672);
}
B651217:L651217:{c.instructions+=1;NFSU2_TR(0x651217);
{goto L65121b;}
}
B651219:L651219:{c.instructions+=1;NFSU2_TR(0x651219);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B65121b:L65121b:{c.instructions+=3;NFSU2_TR(0x65121b);
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
B65121d:{NFSU2_TR(0x65121d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+24)),r4(U+0));
}
B65121f:{NFSU2_TR(0x65121f);
if(r1(R+518)){{goto L65135e;}}
}
B651225:L651225:{c.instructions+=2;NFSU2_TR(0x651225);
u8 U[4];
w4(U+0,u32(0x30ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B651227:{NFSU2_TR(0x651227);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x65122cull));
TAIL_STATIC(0x645362u,645);
}
B65122c:L65122c:{c.instructions+=2;NFSU2_TR(0x65122c);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B65122e:{NFSU2_TR(0x65122e);
if(r1(R+518)){{goto L651242;}}
}
B651230:L651230:{c.instructions+=7;NFSU2_TR(0x651230);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B651232:{NFSU2_TR(0x651232);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B651233:{NFSU2_TR(0x651233);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B651234:{NFSU2_TR(0x651234);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B651235:{NFSU2_TR(0x651235);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B651237:{NFSU2_TR(0x651237);
__builtin_memmove((R+4),(R+0),4);
}
B651239:{NFSU2_TR(0x651239);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x65123eull));
TAIL_STATIC(0x67286cu,672);
}
B65123e:L65123e:{c.instructions+=2;NFSU2_TR(0x65123e);
__builtin_memmove((R+12),(R+0),4);
}
B651240:{NFSU2_TR(0x651240);
{goto L651244;}
}
B651242:L651242:{c.instructions+=1;NFSU2_TR(0x651242);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B651244:L651244:{c.instructions+=2;NFSU2_TR(0x651244);
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
B651246:{NFSU2_TR(0x651246);
if(r1(R+518)){{goto L65135e;}}
}
B65124c:L65124c:{c.instructions+=5;NFSU2_TR(0x65124c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65124f:{NFSU2_TR(0x65124f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B651251:{NFSU2_TR(0x651251);
u8 U[4];
w4(U+0,u32(0x30ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B651253:{NFSU2_TR(0x651253);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B651256:{NFSU2_TR(0x651256);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x65125bull));
TAIL_STATIC(0x645362u,645);
}
B65125b:L65125b:{c.instructions+=2;NFSU2_TR(0x65125b);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B65125d:{NFSU2_TR(0x65125d);
if(r1(R+518)){{goto L65126b;}}
}
B65125f:L65125f:{c.instructions+=3;NFSU2_TR(0x65125f);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B651262:{NFSU2_TR(0x651262);
__builtin_memmove((R+4),(R+0),4);
}
B651264:{NFSU2_TR(0x651264);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x651269ull));
TAIL_STATIC(0x67269fu,672);
}
B651269:L651269:{c.instructions+=1;NFSU2_TR(0x651269);
{goto L65126d;}
}
B65126b:L65126b:{c.instructions+=1;NFSU2_TR(0x65126b);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B65126d:L65126d:{c.instructions+=3;NFSU2_TR(0x65126d);
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
B65126f:{NFSU2_TR(0x65126f);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B651272:{NFSU2_TR(0x651272);
if(r1(R+518)){{goto L65135e;}}
}
B651278:L651278:{c.instructions+=5;NFSU2_TR(0x651278);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B65127b:{NFSU2_TR(0x65127b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+4),(U+0),4);
}
B65127d:{NFSU2_TR(0x65127d);
u8 U[4];
w4(U+0,u32(0x40ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65127f:{NFSU2_TR(0x65127f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B651282:{NFSU2_TR(0x651282);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x651287ull));
TAIL_STATIC(0x645362u,645);
}
B651287:L651287:{c.instructions+=2;NFSU2_TR(0x651287);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B651289:{NFSU2_TR(0x651289);
if(r1(R+518)){{goto L651296;}}
}
B65128b:L65128b:{c.instructions+=2;NFSU2_TR(0x65128b);
__builtin_memmove((R+4),(R+0),4);
}
B65128d:{NFSU2_TR(0x65128d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x651292ull));
TAIL_STATIC(0x672bc6u,672);
}
B651292:L651292:{c.instructions+=2;NFSU2_TR(0x651292);
__builtin_memmove((R+24),(R+0),4);
}
B651294:{NFSU2_TR(0x651294);
{goto L651298;}
}
B651296:L651296:{c.instructions+=1;NFSU2_TR(0x651296);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B651298:L651298:{c.instructions+=2;NFSU2_TR(0x651298);
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
B65129a:{NFSU2_TR(0x65129a);
if(r1(R+518)){{goto L65135e;}}
}
B6512a0:L6512a0:{c.instructions+=11;NFSU2_TR(0x6512a0);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6512a3:{NFSU2_TR(0x6512a3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0xffffffffull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6512a7:{NFSU2_TR(0x6512a7);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6512aa:{NFSU2_TR(0x6512aa);
u8 U[28];
w8(U+4,u64(s64(s32(r4(R+0)))));
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
w8(U+12,u64(s64(s32(r4(U+0)))));
w8(U+20,u64(u64(r8(U+4))*u64(r8(U+12))));
w4(R+0,u32(r8(U+20)));
}
B6512ad:{NFSU2_TR(0x6512ad);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6512b0:{NFSU2_TR(0x6512b0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6512b3:{NFSU2_TR(0x6512b3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
w4(U+4,u32(0x2ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6512ba:{NFSU2_TR(0x6512ba);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6512bd:{NFSU2_TR(0x6512bd);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xffffffe4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6512c0:{NFSU2_TR(0x6512c0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6512c3:{NFSU2_TR(0x6512c3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6512c8ull));
TAIL_STATIC(0x67347eu,673);
}
B6512c8:L6512c8:{c.instructions+=3;NFSU2_TR(0x6512c8);
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
B6512ca:{NFSU2_TR(0x6512ca);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6512cd:{NFSU2_TR(0x6512cd);
if(r1(R+518)){{goto L65135e;}}
}
B6512d3:L6512d3:{c.instructions+=9;NFSU2_TR(0x6512d3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6512d6:{NFSU2_TR(0x6512d6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+24),(U+0),4);
}
B6512d8:{NFSU2_TR(0x6512d8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x20ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6512dc:{NFSU2_TR(0x6512dc);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0xcull))));
}
B6512df:{NFSU2_TR(0x6512df);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6512e2:{NFSU2_TR(0x6512e2);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x24ull))));
}
B6512e5:{NFSU2_TR(0x6512e5);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x5ull))));
}
B6512e9:{NFSU2_TR(0x6512e9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6512ec:{NFSU2_TR(0x6512ec);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6511f0u);}goto L6511f0;}}
}
B6512f2:L6512f2:{c.instructions+=4;NFSU2_TR(0x6512f2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6512f5:{NFSU2_TR(0x6512f5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6512f8:{NFSU2_TR(0x6512f8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6512fb:{NFSU2_TR(0x6512fb);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B6512fd:L6512fd:{c.instructions+=4;NFSU2_TR(0x6512fd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B651300:{NFSU2_TR(0x651300);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B651302:{NFSU2_TR(0x651302);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B651304:{NFSU2_TR(0x651304);
if(r1(R+518)){{goto L651355;}}
}
B651306:L651306:{c.instructions+=2;NFSU2_TR(0x651306);
u8 U[4];
w4(U+0,u32(0x14ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B651308:{NFSU2_TR(0x651308);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x65130dull));
TAIL_STATIC(0x645362u,645);
}
B65130d:L65130d:{c.instructions+=2;NFSU2_TR(0x65130d);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B65130f:{NFSU2_TR(0x65130f);
if(r1(R+518)){{goto L651321;}}
}
B651311:L651311:{c.instructions+=5;NFSU2_TR(0x651311);
u8 U[4];
w4(U+0,u32(0x7b3fd8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B651316:{NFSU2_TR(0x651316);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B651317:{NFSU2_TR(0x651317);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B651318:{NFSU2_TR(0x651318);
__builtin_memmove((R+4),(R+0),4);
}
B65131a:{NFSU2_TR(0x65131a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x65131full));
TAIL_STATIC(0x672498u,672);
}
B65131f:L65131f:{c.instructions+=1;NFSU2_TR(0x65131f);
__builtin_memmove((R+24),(R+0),4);
}
B651321:L651321:{c.instructions+=2;NFSU2_TR(0x651321);
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
B651323:{NFSU2_TR(0x651323);
if(r1(R+518)){{goto L65135e;}}
}
B651325:L651325:{c.instructions+=2;NFSU2_TR(0x651325);
u8 U[4];
w4(U+0,u32(0x40ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B651327:{NFSU2_TR(0x651327);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x65132cull));
TAIL_STATIC(0x645362u,645);
}
B65132c:L65132c:{c.instructions+=2;NFSU2_TR(0x65132c);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B65132e:{NFSU2_TR(0x65132e);
if(r1(R+518)){{goto L65134a;}}
}
B651330:L651330:{c.instructions+=6;NFSU2_TR(0x651330);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B651333:{NFSU2_TR(0x651333);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+28)))));
w8(U+8,u64(s64(s32(u32(0xa4ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+28,u32(r8(U+16)));
}
B651339:{NFSU2_TR(0x651339);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x7afd30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B65133f:{NFSU2_TR(0x65133f);
__builtin_memmove((R+4),(R+0),4);
}
B651341:{NFSU2_TR(0x651341);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B651343:{NFSU2_TR(0x651343);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x651348ull));
TAIL_STATIC(0x672ec8u,672);
}
B651348:L651348:{c.instructions+=1;NFSU2_TR(0x651348);
{goto L65134c;}
}
B65134a:L65134a:{c.instructions+=1;NFSU2_TR(0x65134a);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B65134c:L65134c:{c.instructions+=3;NFSU2_TR(0x65134c);
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
B65134e:{NFSU2_TR(0x65134e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B651351:{NFSU2_TR(0x651351);
if(r1(R+518)){{goto L65135e;}}
}
B651353:L651353:{c.instructions+=1;NFSU2_TR(0x651353);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+12)),r4(U+0));
}
B651355:L651355:{c.instructions+=1;NFSU2_TR(0x651355);
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
B651357:L651357:{c.instructions+=5;NFSU2_TR(0x651357);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B651358:{NFSU2_TR(0x651358);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B651359:{NFSU2_TR(0x651359);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B65135a:{NFSU2_TR(0x65135a);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B65135b:{NFSU2_TR(0x65135b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B65135e:L65135e:{c.instructions+=2;NFSU2_TR(0x65135e);
w4(R+0,u32(0x8007000eull));
}
B651363:{NFSU2_TR(0x651363);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x651357u);}goto L651357;}
}
B651365:L651365:{c.instructions+=18;NFSU2_TR(0x651365);
__builtin_memmove((R+28),(R+28),4);
}
B651367:{NFSU2_TR(0x651367);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B651368:{NFSU2_TR(0x651368);
__builtin_memmove((R+20),(R+16),4);
}
B65136a:{NFSU2_TR(0x65136a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x1cull))));
}
B65136d:{NFSU2_TR(0x65136d);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65136e:{NFSU2_TR(0x65136e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B651371:{NFSU2_TR(0x651371);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B651374:{NFSU2_TR(0x651374);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B651377:{NFSU2_TR(0x651377);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B651379:{NFSU2_TR(0x651379);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B65137b:{NFSU2_TR(0x65137b);
__builtin_memmove((R+4),(R+518),1);
}
B65137e:{NFSU2_TR(0x65137e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65137f:{NFSU2_TR(0x65137f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B651382:{NFSU2_TR(0x651382);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B651384:{NFSU2_TR(0x651384);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B651386:{NFSU2_TR(0x651386);
__builtin_memmove((R+8),(R+518),1);
}
B651389:{NFSU2_TR(0x651389);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B65138b:{NFSU2_TR(0x65138b);
if(r1(R+518)){{goto L651392;}}
}
B65138d:L65138d:{c.instructions+=2;NFSU2_TR(0x65138d);
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
B651390:{NFSU2_TR(0x651390);
{goto L6513c7;}
}
B651392:L651392:{c.instructions+=3;NFSU2_TR(0x651392);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B651394:{NFSU2_TR(0x651394);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B651395:{NFSU2_TR(0x651395);
if(r1(R+518)){{goto L651401;}}
}
B651397:L651397:{c.instructions+=5;NFSU2_TR(0x651397);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((R+4),(U+0),4);
}
B65139a:{NFSU2_TR(0x65139a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65139b:{NFSU2_TR(0x65139b);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65139d:{NFSU2_TR(0x65139d);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6513a0:{NFSU2_TR(0x6513a0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6513a5ull));
TAIL_STATIC(0x672277u,672);
}
B6513a5:L6513a5:{c.instructions+=2;NFSU2_TR(0x6513a5);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B6513a7:{NFSU2_TR(0x6513a7);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6513cd;}}
}
B6513a9:L6513a9:{c.instructions+=5;NFSU2_TR(0x6513a9);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6513ac:{NFSU2_TR(0x6513ac);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6513ad:{NFSU2_TR(0x6513ad);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6513af:{NFSU2_TR(0x6513af);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6513b2:{NFSU2_TR(0x6513b2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6513b7ull));
TAIL_STATIC(0x672277u,672);
}
B6513b7:L6513b7:{c.instructions+=2;NFSU2_TR(0x6513b7);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B6513b9:{NFSU2_TR(0x6513b9);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6513cd;}}
}
B6513bb:L6513bb:{c.instructions+=3;NFSU2_TR(0x6513bb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6513be:{NFSU2_TR(0x6513be);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6513c1:{NFSU2_TR(0x6513c1);
if(r1(R+518)){{goto L651401;}}
}
B6513c3:L6513c3:{c.instructions+=1;NFSU2_TR(0x6513c3);
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
B6513c6:L6513c6:{c.instructions+=1;NFSU2_TR(0x6513c6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6513c7:L6513c7:{c.instructions+=4;NFSU2_TR(0x6513c7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6513c8:{NFSU2_TR(0x6513c8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6513c9:{NFSU2_TR(0x6513c9);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6513ca:{NFSU2_TR(0x6513ca);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6513cd:L6513cd:{c.instructions+=3;NFSU2_TR(0x6513cd);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6513d0:{NFSU2_TR(0x6513d0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6513d3:{NFSU2_TR(0x6513d3);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6513d6:L6513d6:{c.instructions+=4;NFSU2_TR(0x6513d6);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((R+8),(U+0),1);
}
B6513d8:{NFSU2_TR(0x6513d8);
__builtin_memmove((R+4),(R+8),1);
}
B6513da:{NFSU2_TR(0x6513da);
u8 U[3];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
__builtin_memmove((U+1),(U+0),1);
w1(R+512,u8((r1(R+8))<(r1(U+1))));
w1(U+2,u8(u32(r1(R+8))-u32(r1(U+1))));
w1(R+518,u8((r1(U+2))==(u8(0x0ull))));
}
B6513dc:{NFSU2_TR(0x6513dc);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6513f8;}}
}
B6513de:L6513de:{c.instructions+=2;NFSU2_TR(0x6513de);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6513e0:{NFSU2_TR(0x6513e0);
if(r1(R+518)){{goto L6513f4;}}
}
B6513e2:L6513e2:{c.instructions+=4;NFSU2_TR(0x6513e2);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B6513e5:{NFSU2_TR(0x6513e5);
__builtin_memmove((R+4),(R+8),1);
}
B6513e7:{NFSU2_TR(0x6513e7);
u8 U[7];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(R+512,u8((r1(R+8))<(r1(U+5))));
w1(U+6,u8(u32(r1(R+8))-u32(r1(U+5))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B6513ea:{NFSU2_TR(0x6513ea);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6513f8;}}
}
B6513ec:L6513ec:{c.instructions+=6;NFSU2_TR(0x6513ec);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6513ed:{NFSU2_TR(0x6513ed);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6513ee:{NFSU2_TR(0x6513ee);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B6513ef:{NFSU2_TR(0x6513ef);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B6513f0:{NFSU2_TR(0x6513f0);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6513f2:{NFSU2_TR(0x6513f2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6513d6u);}goto L6513d6;}}
}
B6513f4:L6513f4:{c.instructions+=2;NFSU2_TR(0x6513f4);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6513f6:{NFSU2_TR(0x6513f6);
{goto L6513fd;}
}
B6513f8:L6513f8:{c.instructions+=2;NFSU2_TR(0x6513f8);
u8 U[9];
w4(U+0,u32(r1(R+512)));
w1(R+512,u8((r4(R+0))<(r4(R+0))));
w4(U+4,u32(u32(r4(R+0))-u32(r4(R+0))));
w1(U+8,u8((r4(U+4))<(r4(U+0))));
w1(R+512,u8((r1(R+512))||(r1(U+8))));
w4(R+0,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B6513fa:{NFSU2_TR(0x6513fa);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+0))-u32(u32(0xffffffffull))));
w4(R+0,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B6513fd:L6513fd:{c.instructions+=2;NFSU2_TR(0x6513fd);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6513ff:{NFSU2_TR(0x6513ff);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6513c3u);}goto L6513c3;}}
}
B651401:L651401:{c.instructions+=3;NFSU2_TR(0x651401);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B651404:{NFSU2_TR(0x651404);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B651407:{NFSU2_TR(0x651407);
{goto L651457;}
}
B651409:L651409:{c.instructions+=2;NFSU2_TR(0x651409);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B65140b:{NFSU2_TR(0x65140b);
if(r1(R+518)){{goto L65145d;}}
}
B65140d:L65140d:{c.instructions+=7;NFSU2_TR(0x65140d);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B651410:{NFSU2_TR(0x651410);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B651413:{NFSU2_TR(0x651413);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B651416:{NFSU2_TR(0x651416);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B651419:{NFSU2_TR(0x651419);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B65141c:{NFSU2_TR(0x65141c);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+28))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B65141f:{NFSU2_TR(0x65141f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6513c3u);}goto L6513c3;}}
}
B651421:L651421:{c.instructions+=4;NFSU2_TR(0x651421);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B651424:{NFSU2_TR(0x651424);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B651427:{NFSU2_TR(0x651427);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B65142a:{NFSU2_TR(0x65142a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x65142full));
TAIL_STATIC(0x64fbecu,64f);
}
B65142f:L65142f:{c.instructions+=2;NFSU2_TR(0x65142f);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B651431:{NFSU2_TR(0x651431);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6513c3u);}goto L6513c3;}}
}
B651433:L651433:{c.instructions+=1;NFSU2_TR(0x651433);
{goto L65143e;}
}
B651435:L651435:{c.instructions+=3;NFSU2_TR(0x651435);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B651438:{NFSU2_TR(0x651438);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x6ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B65143c:{NFSU2_TR(0x65143c);
if(r1(R+518)){{goto L651450;}}
}
B65143e:L65143e:{c.instructions+=3;NFSU2_TR(0x65143e);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B651441:{NFSU2_TR(0x651441);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B651443:{NFSU2_TR(0x651443);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x651435u);}goto L651435;}}
}
B651445:L651445:{c.instructions+=1;NFSU2_TR(0x651445);
{goto L651450;}
}
B651447:L651447:{c.instructions+=3;NFSU2_TR(0x651447);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65144a:{NFSU2_TR(0x65144a);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x6ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B65144e:{NFSU2_TR(0x65144e);
if(r1(R+518)){{goto L651457;}}
}
B651450:L651450:{c.instructions+=3;NFSU2_TR(0x651450);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B651453:{NFSU2_TR(0x651453);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B651455:{NFSU2_TR(0x651455);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x651447u);}goto L651447;}}
}
B651457:L651457:{c.instructions+=2;NFSU2_TR(0x651457);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B651459:{NFSU2_TR(0x651459);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x651409u);}goto L651409;}}
}
B65145b:L65145b:{c.instructions+=1;NFSU2_TR(0x65145b);
{goto L651465;}
}
B65145d:L65145d:{c.instructions+=2;NFSU2_TR(0x65145d);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B65145f:{NFSU2_TR(0x65145f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6513c3u);}goto L6513c3;}}
}
B651465:L651465:{c.instructions+=2;NFSU2_TR(0x651465);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B651467:{NFSU2_TR(0x651467);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6513c3u);}goto L6513c3;}}
}
B65146d:L65146d:{c.instructions+=2;NFSU2_TR(0x65146d);
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
B65146f:{NFSU2_TR(0x65146f);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6513c6u);}goto L6513c6;}
}
B651474:L651474:{c.instructions+=11;NFSU2_TR(0x651474);
__builtin_memmove((R+28),(R+28),4);
}
B651476:{NFSU2_TR(0x651476);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B651477:{NFSU2_TR(0x651477);
__builtin_memmove((R+20),(R+16),4);
}
B651479:{NFSU2_TR(0x651479);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x5cull))));
}
B65147c:{NFSU2_TR(0x65147c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65147d:{NFSU2_TR(0x65147d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65147e:{NFSU2_TR(0x65147e);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B651481:{NFSU2_TR(0x651481);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B651483:{NFSU2_TR(0x651483);
__builtin_memmove((R+24),(R+4),4);
}
B651485:{NFSU2_TR(0x651485);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B651488:{NFSU2_TR(0x651488);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x65148dull));
TAIL_STATIC(0x64fb5eu,64f);
}
B65148d:L65148d:{c.instructions+=4;NFSU2_TR(0x65148d);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B651490:{NFSU2_TR(0x651490);
__builtin_memmove((R+4),(R+24),4);
}
B651492:{NFSU2_TR(0x651492);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B651495:{NFSU2_TR(0x651495);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x65149aull));
TAIL_STATIC(0x64fb5eu,64f);
}
B65149a:L65149a:{c.instructions+=5;NFSU2_TR(0x65149a);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B65149d:{NFSU2_TR(0x65149d);
__builtin_memmove((R+4),(R+24),4);
}
B65149f:{NFSU2_TR(0x65149f);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6514a2:{NFSU2_TR(0x6514a2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6514a5:{NFSU2_TR(0x6514a5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6514aaull));
TAIL_STATIC(0x64fbecu,64f);
}
B6514aa:L6514aa:{c.instructions+=2;NFSU2_TR(0x6514aa);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6514ac:{NFSU2_TR(0x6514ac);
if(r1(R+518)){{goto L6514b5;}}
}
B6514ae:L6514ae:{c.instructions+=2;NFSU2_TR(0x6514ae);
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
B6514b0:{NFSU2_TR(0x6514b0);
{goto L651591;}
}
B6514b5:L6514b5:{c.instructions+=5;NFSU2_TR(0x6514b5);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6514b6:{NFSU2_TR(0x6514b6);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc8ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6514b9:{NFSU2_TR(0x6514b9);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B6514bb:{NFSU2_TR(0x6514bb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6514be:{NFSU2_TR(0x6514be);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6514c3ull));
TAIL_STATIC(0x672a2au,672);
}
B6514c3:L6514c3:{c.instructions+=2;NFSU2_TR(0x6514c3);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6514c6:{NFSU2_TR(0x6514c6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6514cbull));
TAIL_STATIC(0x672a2au,672);
}
B6514cb:L6514cb:{c.instructions+=2;NFSU2_TR(0x6514cb);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+12))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6514ce:{NFSU2_TR(0x6514ce);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L651562;}}
}
B6514d4:L6514d4:{c.instructions+=2;NFSU2_TR(0x6514d4);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+28))<(r4(U+8))));
}
B6514d7:{NFSU2_TR(0x6514d7);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L651562;}}
}
B6514dd:L6514dd:{c.instructions+=6;NFSU2_TR(0x6514dd);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6514e0:{NFSU2_TR(0x6514e0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6514e1:{NFSU2_TR(0x6514e1);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6514e2:{NFSU2_TR(0x6514e2);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6514e5:{NFSU2_TR(0x6514e5);
__builtin_memmove((R+4),(R+24),4);
}
B6514e7:{NFSU2_TR(0x6514e7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6514ecull));
TAIL_STATIC(0x64ff71u,64f);
}
B6514ec:L6514ec:{c.instructions+=2;NFSU2_TR(0x6514ec);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B6514ee:{NFSU2_TR(0x6514ee);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L651548;}}
}
B6514f0:L6514f0:{c.instructions+=6;NFSU2_TR(0x6514f0);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6514f3:{NFSU2_TR(0x6514f3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6514f4:{NFSU2_TR(0x6514f4);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6514f5:{NFSU2_TR(0x6514f5);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6514f8:{NFSU2_TR(0x6514f8);
__builtin_memmove((R+4),(R+24),4);
}
B6514fa:{NFSU2_TR(0x6514fa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6514ffull));
TAIL_STATIC(0x64ff71u,64f);
}
B6514ff:L6514ff:{c.instructions+=2;NFSU2_TR(0x6514ff);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B651501:{NFSU2_TR(0x651501);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L651548;}}
}
B651503:L651503:{c.instructions+=8;NFSU2_TR(0x651503);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B651506:{NFSU2_TR(0x651506);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B651507:{NFSU2_TR(0x651507);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B65150a:{NFSU2_TR(0x65150a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65150b:{NFSU2_TR(0x65150b);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B65150e:{NFSU2_TR(0x65150e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65150f:{NFSU2_TR(0x65150f);
__builtin_memmove((R+4),(R+24),4);
}
B651511:{NFSU2_TR(0x651511);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x651516ull));
TAIL_STATIC(0x65003cu,650);
}
B651516:L651516:{c.instructions+=2;NFSU2_TR(0x651516);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B651518:{NFSU2_TR(0x651518);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L651548;}}
}
B65151a:L65151a:{c.instructions+=4;NFSU2_TR(0x65151a);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B65151d:{NFSU2_TR(0x65151d);
__builtin_memmove((R+4),(R+24),4);
}
B65151f:{NFSU2_TR(0x65151f);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B651522:{NFSU2_TR(0x651522);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x651527ull));
TAIL_STATIC(0x64f855u,64f);
}
B651527:L651527:{c.instructions+=2;NFSU2_TR(0x651527);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B651529:{NFSU2_TR(0x651529);
if(r1(R+518)){{goto L65152e;}}
}
B65152b:L65152b:{c.instructions+=2;NFSU2_TR(0x65152b);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B65152d:{NFSU2_TR(0x65152d);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B65152e:L65152e:{c.instructions+=4;NFSU2_TR(0x65152e);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B651531:{NFSU2_TR(0x651531);
__builtin_memmove((R+4),(R+24),4);
}
B651533:{NFSU2_TR(0x651533);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B651536:{NFSU2_TR(0x651536);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x65153bull));
TAIL_STATIC(0x64f855u,64f);
}
B65153b:L65153b:{c.instructions+=2;NFSU2_TR(0x65153b);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B65153d:{NFSU2_TR(0x65153d);
if(r1(R+518)){{goto L65154e;}}
}
B65153f:L65153f:{c.instructions+=2;NFSU2_TR(0x65153f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B651546:{NFSU2_TR(0x651546);
{goto L65154e;}
}
B651548:L651548:{c.instructions+=3;NFSU2_TR(0x651548);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B65154a:{NFSU2_TR(0x65154a);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B65154b:{NFSU2_TR(0x65154b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B65154e:L65154e:{c.instructions+=2;NFSU2_TR(0x65154e);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B651550:{NFSU2_TR(0x651550);
if(r1(R+518)){{goto L651558;}}
}
B651552:L651552:{c.instructions+=2;NFSU2_TR(0x651552);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B651556:{NFSU2_TR(0x651556);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L651562;}}
}
B651558:L651558:{c.instructions+=3;NFSU2_TR(0x651558);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B651559:{NFSU2_TR(0x651559);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+28))<(r4(U+8))));
}
B65155c:{NFSU2_TR(0x65155c);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6514d4u);}goto L6514d4;}}
}
B651562:L651562:{c.instructions+=3;NFSU2_TR(0x651562);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B651565:{NFSU2_TR(0x651565);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+4))));
}
B651568:{NFSU2_TR(0x651568);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L65156f;}}
}
B65156a:L65156a:{c.instructions+=3;NFSU2_TR(0x65156a);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65156c:{NFSU2_TR(0x65156c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B65156d:{NFSU2_TR(0x65156d);
{goto L651572;}
}
B65156f:L65156f:{c.instructions+=1;NFSU2_TR(0x65156f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B651572:L651572:{c.instructions+=3;NFSU2_TR(0x651572);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B651574:{NFSU2_TR(0x651574);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B651575:{NFSU2_TR(0x651575);
if(r1(R+518)){{goto L65157c;}}
}
B651577:L651577:{c.instructions+=1;NFSU2_TR(0x651577);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x200ull))));
}
B65157c:L65157c:{c.instructions+=2;NFSU2_TR(0x65157c);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B651580:{NFSU2_TR(0x651580);
if(r1(R+518)){{goto L651587;}}
}
B651582:L651582:{c.instructions+=1;NFSU2_TR(0x651582);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x10000ull))));
}
B651587:L651587:{c.instructions+=2;NFSU2_TR(0x651587);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
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
B65158a:{NFSU2_TR(0x65158a);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L651591;}}
}
B65158c:L65158c:{c.instructions+=1;NFSU2_TR(0x65158c);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),u32(0x800000ull)));
w1(R+523,scarry<u32>(r4(R+0),u32(0x800000ull)));
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x800000ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B651591:L651591:{c.instructions+=4;NFSU2_TR(0x651591);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B651592:{NFSU2_TR(0x651592);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B651593:{NFSU2_TR(0x651593);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B651594:{NFSU2_TR(0x651594);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B651597:L651597:{c.instructions+=12;NFSU2_TR(0x651597);
__builtin_memmove((R+28),(R+28),4);
}
B651599:{NFSU2_TR(0x651599);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65159a:{NFSU2_TR(0x65159a);
__builtin_memmove((R+20),(R+16),4);
}
B65159c:{NFSU2_TR(0x65159c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65159f:{NFSU2_TR(0x65159f);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6515a0:{NFSU2_TR(0x6515a0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6515a1:{NFSU2_TR(0x6515a1);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6515a4:{NFSU2_TR(0x6515a4);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(u32(0x200ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6515aa:{NFSU2_TR(0x6515aa);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6515ab:{NFSU2_TR(0x6515ab);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6515ae:{NFSU2_TR(0x6515ae);
__builtin_memmove((R+12),(R+4),4);
}
B6515b0:{NFSU2_TR(0x6515b0);
if(r1(R+518)){{goto L6515ba;}}
}
B6515b2:L6515b2:{c.instructions+=3;NFSU2_TR(0x6515b2);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6515b4:{NFSU2_TR(0x6515b4);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6515b5:{NFSU2_TR(0x6515b5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6515baull));
TAIL_STATIC(0x64f92eu,64f);
}
B6515ba:L6515ba:{c.instructions+=2;NFSU2_TR(0x6515ba);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6515bc:{NFSU2_TR(0x6515bc);
if(r1(R+518)){{goto L651624;}}
}
B6515be:L6515be:{c.instructions+=2;NFSU2_TR(0x6515be);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x9ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6515c2:{NFSU2_TR(0x6515c2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L651624;}}
}
B6515c4:L6515c4:{c.instructions+=2;NFSU2_TR(0x6515c4);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6515c8:{NFSU2_TR(0x6515c8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L651624;}}
}
B6515ca:L6515ca:{c.instructions+=3;NFSU2_TR(0x6515ca);
w4(R+0,u32(0xc00ull));
}
B6515cf:{NFSU2_TR(0x6515cf);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6515d1:{NFSU2_TR(0x6515d1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6515d9;}}
}
B6515d3:L6515d3:{c.instructions+=2;NFSU2_TR(0x6515d3);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6515d6:{NFSU2_TR(0x6515d6);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+24,u32(u32(r4(R+24))|u32(r4(U+4))));
}
B6515d9:L6515d9:{c.instructions+=4;NFSU2_TR(0x6515d9);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6515db:{NFSU2_TR(0x6515db);
w4(R+4,u32(0x400ull));
}
B6515e0:{NFSU2_TR(0x6515e0);
w4(R+8,u32(0x800ull));
}
B6515e5:{NFSU2_TR(0x6515e5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6515f9;}}
}
B6515e7:L6515e7:{c.instructions+=3;NFSU2_TR(0x6515e7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+12),(U+0),4);
}
B6515e9:{NFSU2_TR(0x6515e9);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(u8(0x8ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6515ec:{NFSU2_TR(0x6515ec);
if(r1(R+518)){{goto L6515f2;}}
}
B6515ee:L6515ee:{c.instructions+=2;NFSU2_TR(0x6515ee);
w4(R+24,u32(u32(r4(R+24))|u32(r4(R+4))));
}
B6515f0:{NFSU2_TR(0x6515f0);
{goto L6515f9;}
}
B6515f2:L6515f2:{c.instructions+=2;NFSU2_TR(0x6515f2);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(u8(0x10ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6515f5:{NFSU2_TR(0x6515f5);
if(r1(R+518)){{goto L6515f9;}}
}
B6515f7:L6515f7:{c.instructions+=1;NFSU2_TR(0x6515f7);
w4(R+24,u32(u32(r4(R+24))|u32(r4(R+8))));
}
B6515f9:L6515f9:{c.instructions+=2;NFSU2_TR(0x6515f9);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6515fb:{NFSU2_TR(0x6515fb);
if(r1(R+518)){{goto L65160a;}}
}
B6515fd:L6515fd:{c.instructions+=4;NFSU2_TR(0x6515fd);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B651600:{NFSU2_TR(0x651600);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfffff7ffull))));
}
B651605:{NFSU2_TR(0x651605);
w4(R+0,u32(u32(r4(R+0))|u32(r4(R+4))));
}
B651607:{NFSU2_TR(0x651607);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B65160a:L65160a:{c.instructions+=2;NFSU2_TR(0x65160a);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B65160c:{NFSU2_TR(0x65160c);
if(r1(R+518)){{goto L65161b;}}
}
B65160e:L65160e:{c.instructions+=4;NFSU2_TR(0x65160e);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B651611:{NFSU2_TR(0x651611);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfffffbffull))));
}
B651616:{NFSU2_TR(0x651616);
w4(R+0,u32(u32(r4(R+0))|u32(r4(R+8))));
}
B651618:{NFSU2_TR(0x651618);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B65161b:L65161b:{c.instructions+=1;NFSU2_TR(0x65161b);
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
B65161d:L65161d:{c.instructions+=5;NFSU2_TR(0x65161d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B65161e:{NFSU2_TR(0x65161e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B65161f:{NFSU2_TR(0x65161f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B651620:{NFSU2_TR(0x651620);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B651621:{NFSU2_TR(0x651621);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B651624:L651624:{c.instructions+=2;NFSU2_TR(0x651624);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xc00ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B65162a:{NFSU2_TR(0x65162a);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65161bu);}goto L65161b;}}
}
B65162c:L65162c:{c.instructions+=6;NFSU2_TR(0x65162c);
u8 U[4];
w4(U+0,u32(0x7b3fe8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B651631:{NFSU2_TR(0x651631);
u8 U[4];
w4(U+0,u32(0xc05ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B651636:{NFSU2_TR(0x651636);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x20ull))));
__builtin_memmove((R+0),(U+0),4);
}
B651639:{NFSU2_TR(0x651639);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65163a:{NFSU2_TR(0x65163a);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65163b:{NFSU2_TR(0x65163b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x651640ull));
TAIL_STATIC(0x64f52au,64f);
}
B651640:L651640:{c.instructions+=3;NFSU2_TR(0x651640);
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
B651643:{NFSU2_TR(0x651643);
w4(R+0,u32(0x80004005ull));
}
B651648:{NFSU2_TR(0x651648);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65161du);}goto L65161d;}
}
B65164a:L65164a:{c.instructions+=12;NFSU2_TR(0x65164a);
__builtin_memmove((R+28),(R+28),4);
}
B65164c:{NFSU2_TR(0x65164c);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65164d:{NFSU2_TR(0x65164d);
__builtin_memmove((R+20),(R+16),4);
}
B65164f:{NFSU2_TR(0x65164f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4cull))));
}
B651652:{NFSU2_TR(0x651652);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B651653:{NFSU2_TR(0x651653);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B651654:{NFSU2_TR(0x651654);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B651657:{NFSU2_TR(0x651657);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B651659:{NFSU2_TR(0x651659);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B65165c:{NFSU2_TR(0x65165c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65165d:{NFSU2_TR(0x65165d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B651660:{NFSU2_TR(0x651660);
if(r1(R+518)){{goto L651678;}}
}
B651662:L651662:{c.instructions+=2;NFSU2_TR(0x651662);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B651664:{NFSU2_TR(0x651664);
if(r1(R+518)){{goto L65197a;}}
}
B65166a:L65166a:{c.instructions+=2;NFSU2_TR(0x65166a);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B65166d:{NFSU2_TR(0x65166d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L651686;}}
}
B65166f:L65166f:{c.instructions+=1;NFSU2_TR(0x65166f);
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
B651671:L651671:{c.instructions+=5;NFSU2_TR(0x651671);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B651672:{NFSU2_TR(0x651672);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B651673:{NFSU2_TR(0x651673);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B651674:{NFSU2_TR(0x651674);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B651675:{NFSU2_TR(0x651675);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B651678:L651678:{c.instructions+=2;NFSU2_TR(0x651678);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B65167a:{NFSU2_TR(0x65167a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65166au);}goto L65166a;}}
}
B65167c:L65167c:{c.instructions+=2;NFSU2_TR(0x65167c);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B65167f:{NFSU2_TR(0x65167f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65166fu);}goto L65166f;}}
}
B651681:L651681:{c.instructions+=1;NFSU2_TR(0x651681);
{goto L65197a;}
}
B651686:L651686:{c.instructions+=2;NFSU2_TR(0x651686);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B651689:{NFSU2_TR(0x651689);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x65168eull));
TAIL_STATIC(0x672a2au,672);
}
B65168e:L65168e:{c.instructions+=2;NFSU2_TR(0x65168e);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((R+4),(U+0),4);
}
B651691:{NFSU2_TR(0x651691);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x651696ull));
TAIL_STATIC(0x672a2au,672);
}
B651696:L651696:{c.instructions+=4;NFSU2_TR(0x651696);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x9ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B65169a:{NFSU2_TR(0x65169a);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65169c:{NFSU2_TR(0x65169c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B65169d:{NFSU2_TR(0x65169d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6516a3;}}
}
B65169f:L65169f:{c.instructions+=2;NFSU2_TR(0x65169f);
__builtin_memmove((R+28),(R+24),4);
}
B6516a1:{NFSU2_TR(0x6516a1);
{goto L6516d6;}
}
B6516a3:L6516a3:{c.instructions+=6;NFSU2_TR(0x6516a3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6516a6:{NFSU2_TR(0x6516a6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6516a7:{NFSU2_TR(0x6516a7);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6516aa:{NFSU2_TR(0x6516aa);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6516ad:{NFSU2_TR(0x6516ad);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6516b4:{NFSU2_TR(0x6516b4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6516b9ull));
TAIL_STATIC(0x64fb5eu,64f);
}
B6516b9:L6516b9:{c.instructions+=3;NFSU2_TR(0x6516b9);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6516bd:{NFSU2_TR(0x6516bd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6516c0:{NFSU2_TR(0x6516c0);
if(r1(R+518)){{goto L6516d6;}}
}
B6516c2:L6516c2:{c.instructions+=3;NFSU2_TR(0x6516c2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6516c5:{NFSU2_TR(0x6516c5);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6516c6:{NFSU2_TR(0x6516c6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6516cbull));
TAIL_STATIC(0x64fae7u,64f);
}
B6516cb:L6516cb:{c.instructions+=2;NFSU2_TR(0x6516cb);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6516cd:{NFSU2_TR(0x6516cd);
if(r1(R+518)){{goto L6516d6;}}
}
B6516cf:L6516cf:{c.instructions+=1;NFSU2_TR(0x6516cf);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc4ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6516d6:L6516d6:{c.instructions+=3;NFSU2_TR(0x6516d6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6516d9:{NFSU2_TR(0x6516d9);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x9ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6516dd:{NFSU2_TR(0x6516dd);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6516e3;}}
}
B6516df:L6516df:{c.instructions+=2;NFSU2_TR(0x6516df);
__builtin_memmove((R+24),(R+0),4);
}
B6516e1:{NFSU2_TR(0x6516e1);
{goto L65171a;}
}
B6516e3:L6516e3:{c.instructions+=6;NFSU2_TR(0x6516e3);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6516e6:{NFSU2_TR(0x6516e6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6516e9:{NFSU2_TR(0x6516e9);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6516ec:{NFSU2_TR(0x6516ec);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6516ef:{NFSU2_TR(0x6516ef);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6516f6:{NFSU2_TR(0x6516f6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6516fbull));
TAIL_STATIC(0x64fb5eu,64f);
}
B6516fb:L6516fb:{c.instructions+=3;NFSU2_TR(0x6516fb);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6516ff:{NFSU2_TR(0x6516ff);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B651702:{NFSU2_TR(0x651702);
if(r1(R+518)){{goto L65171a;}}
}
B651704:L651704:{c.instructions+=3;NFSU2_TR(0x651704);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B651707:{NFSU2_TR(0x651707);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B65170a:{NFSU2_TR(0x65170a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x65170full));
TAIL_STATIC(0x64fae7u,64f);
}
B65170f:L65170f:{c.instructions+=2;NFSU2_TR(0x65170f);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B651711:{NFSU2_TR(0x651711);
if(r1(R+518)){{goto L65171a;}}
}
B651713:L651713:{c.instructions+=1;NFSU2_TR(0x651713);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B65171a:L65171a:{c.instructions+=3;NFSU2_TR(0x65171a);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B65171d:{NFSU2_TR(0x65171d);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B65171f:{NFSU2_TR(0x65171f);
if(r1(R+518)){{goto L65189f;}}
}
B651725:L651725:{c.instructions+=3;NFSU2_TR(0x651725);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B651728:{NFSU2_TR(0x651728);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B65172a:{NFSU2_TR(0x65172a);
if(r1(R+518)){{goto L65189f;}}
}
B651730:L651730:{c.instructions+=2;NFSU2_TR(0x651730);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B651732:{NFSU2_TR(0x651732);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L651747;}}
}
B651734:L651734:{c.instructions+=2;NFSU2_TR(0x651734);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B651737:{NFSU2_TR(0x651737);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65166fu);}goto L65166f;}}
}
B65173d:L65173d:{c.instructions+=2;NFSU2_TR(0x65173d);
w1(R+512,u8(0x0ull));
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B65173f:{NFSU2_TR(0x65173f);
u8 U[6];
w1(R+523,scarry<u32>(r4(R+8),u32(0x1ull)));
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+8))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+8))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B651740:L651740:{c.instructions+=2;NFSU2_TR(0x651740);
__builtin_memmove((R+0),(R+8),4);
}
B651742:{NFSU2_TR(0x651742);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x651671u);}goto L651671;}
}
B651747:L651747:{c.instructions+=4;NFSU2_TR(0x651747);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B651749:{NFSU2_TR(0x651749);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B65174a:{NFSU2_TR(0x65174a);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B65174c:{NFSU2_TR(0x65174c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L651799;}}
}
B65174e:L65174e:{c.instructions+=2;NFSU2_TR(0x65174e);
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
B651750:{NFSU2_TR(0x651750);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x651740u);}goto L651740;}}
}
B651752:L651752:{c.instructions+=2;NFSU2_TR(0x651752);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B651754:{NFSU2_TR(0x651754);
if(r1(R+518)){{goto L6517f5;}}
}
B65175a:L65175a:{c.instructions+=2;NFSU2_TR(0x65175a);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B65175d:{NFSU2_TR(0x65175d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L651806;}}
}
B651763:L651763:{c.instructions+=3;NFSU2_TR(0x651763);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B651766:{NFSU2_TR(0x651766);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B651768:{NFSU2_TR(0x651768);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L651776;}}
}
B65176a:L65176a:{c.instructions+=3;NFSU2_TR(0x65176a);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B65176d:{NFSU2_TR(0x65176d);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+4))<(r4(U+8))));
w4(U+12,u32(u32(r4(R+4))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B651770:{NFSU2_TR(0x651770);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65166fu);}goto L65166f;}}
}
B651776:L651776:{c.instructions+=3;NFSU2_TR(0x651776);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B651779:{NFSU2_TR(0x651779);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B65177b:{NFSU2_TR(0x65177b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L651786;}}
}
B65177d:L65177d:{c.instructions+=2;NFSU2_TR(0x65177d);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+0))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B651780:{NFSU2_TR(0x651780);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65166fu);}goto L65166f;}}
}
B651786:L651786:{c.instructions+=2;NFSU2_TR(0x651786);
u8 U[14];
__builtin_memmove((U+6),(R+8),4);
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
B651788:{NFSU2_TR(0x651788);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x651740u);}goto L651740;}}
}
B65178a:L65178a:{c.instructions+=2;NFSU2_TR(0x65178a);
u8 U[14];
__builtin_memmove((U+6),(R+8),4);
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
B65178c:{NFSU2_TR(0x65178c);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x651740u);}goto L651740;}}
}
B65178e:L65178e:{c.instructions+=3;NFSU2_TR(0x65178e);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(r4(R+24)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B651791:{NFSU2_TR(0x651791);
u8 U[22];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1cull))));
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
B651794:{NFSU2_TR(0x651794);
{goto L651894;}
}
B651799:L651799:{c.instructions+=2;NFSU2_TR(0x651799);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B65179c:{NFSU2_TR(0x65179c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L651814;}}
}
B65179e:L65179e:{c.instructions+=2;NFSU2_TR(0x65179e);
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
B6517a0:{NFSU2_TR(0x6517a0);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x651740u);}goto L651740;}}
}
B6517a2:L6517a2:{c.instructions+=2;NFSU2_TR(0x6517a2);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6517a4:{NFSU2_TR(0x6517a4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6517e4;}}
}
B6517a6:L6517a6:{c.instructions+=3;NFSU2_TR(0x6517a6);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6517a9:{NFSU2_TR(0x6517a9);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6517ab:{NFSU2_TR(0x6517ab);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6517b9;}}
}
B6517ad:L6517ad:{c.instructions+=3;NFSU2_TR(0x6517ad);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6517b0:{NFSU2_TR(0x6517b0);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+4))<(r4(U+8))));
w4(U+12,u32(u32(r4(R+4))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6517b3:{NFSU2_TR(0x6517b3);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65166fu);}goto L65166f;}}
}
B6517b9:L6517b9:{c.instructions+=3;NFSU2_TR(0x6517b9);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6517bc:{NFSU2_TR(0x6517bc);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6517be:{NFSU2_TR(0x6517be);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6517c9;}}
}
B6517c0:L6517c0:{c.instructions+=2;NFSU2_TR(0x6517c0);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6517c3:{NFSU2_TR(0x6517c3);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65166fu);}goto L65166f;}}
}
B6517c9:L6517c9:{c.instructions+=2;NFSU2_TR(0x6517c9);
u8 U[14];
__builtin_memmove((U+6),(R+8),4);
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
B6517cb:{NFSU2_TR(0x6517cb);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x651740u);}goto L651740;}}
}
B6517d1:L6517d1:{c.instructions+=2;NFSU2_TR(0x6517d1);
u8 U[14];
__builtin_memmove((U+6),(R+8),4);
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
B6517d3:{NFSU2_TR(0x6517d3);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x651740u);}goto L651740;}}
}
B6517d9:L6517d9:{c.instructions+=3;NFSU2_TR(0x6517d9);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(r4(R+28)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B6517dc:{NFSU2_TR(0x6517dc);
u8 U[22];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
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
B6517df:{NFSU2_TR(0x6517df);
{goto L651894;}
}
B6517e4:L6517e4:{c.instructions+=2;NFSU2_TR(0x6517e4);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6517e7:{NFSU2_TR(0x6517e7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L651806;}}
}
B6517e9:L6517e9:{c.instructions+=3;NFSU2_TR(0x6517e9);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6517ec:{NFSU2_TR(0x6517ec);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6517ef:{NFSU2_TR(0x6517ef);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65166fu);}goto L65166f;}}
}
B6517f5:L6517f5:{c.instructions+=3;NFSU2_TR(0x6517f5);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6517f8:{NFSU2_TR(0x6517f8);
u8 U[22];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
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
B6517fb:{NFSU2_TR(0x6517fb);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x651740u);}goto L651740;}}
}
B651801:L651801:{c.instructions+=1;NFSU2_TR(0x651801);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65166fu);}goto L65166f;}
}
B651806:L651806:{c.instructions+=2;NFSU2_TR(0x651806);
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
B651809:{NFSU2_TR(0x651809);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x651740u);}goto L651740;}}
}
B65180f:L65180f:{c.instructions+=1;NFSU2_TR(0x65180f);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65166fu);}goto L65166f;}
}
B651814:L651814:{c.instructions+=2;NFSU2_TR(0x651814);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
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
B651817:{NFSU2_TR(0x651817);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x651740u);}goto L651740;}}
}
B65181d:L65181d:{c.instructions+=2;NFSU2_TR(0x65181d);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B65181f:{NFSU2_TR(0x65181f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65166fu);}goto L65166f;}}
}
B651825:L651825:{c.instructions+=3;NFSU2_TR(0x651825);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B651828:{NFSU2_TR(0x651828);
u8 U[14];
__builtin_memmove((U+6),(R+24),4);
w1(R+512,u8((r4(U+6))<(u32(0xdull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0xdull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0xdull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B65182b:{NFSU2_TR(0x65182b);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x651740u);}goto L651740;}}
}
B651831:L651831:{c.instructions+=2;NFSU2_TR(0x651831);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xfull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B651834:{NFSU2_TR(0x651834);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L651861;}}
}
B651836:L651836:{c.instructions+=3;NFSU2_TR(0x651836);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B651839:{NFSU2_TR(0x651839);
u8 U[14];
__builtin_memmove((U+6),(R+24),4);
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
B65183b:{NFSU2_TR(0x65183b);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x651740u);}goto L651740;}}
}
B651841:L651841:{c.instructions+=2;NFSU2_TR(0x651841);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
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
B651844:{NFSU2_TR(0x651844);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x651740u);}goto L651740;}}
}
B65184a:L65184a:{c.instructions+=2;NFSU2_TR(0x65184a);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
w1(R+512,u8((r4(U+6))<(u32(0x11ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x11ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x11ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B65184d:{NFSU2_TR(0x65184d);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x651740u);}goto L651740;}}
}
B651853:L651853:{c.instructions+=2;NFSU2_TR(0x651853);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
w1(R+512,u8((r4(U+6))<(u32(0x12ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x12ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x12ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B651856:{NFSU2_TR(0x651856);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x651740u);}goto L651740;}}
}
B65185c:L65185c:{c.instructions+=2;NFSU2_TR(0x65185c);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
w1(R+512,u8((r4(U+6))<(u32(0x13ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x13ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x13ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B65185f:{NFSU2_TR(0x65185f);
{goto L651894;}
}
B651861:L651861:{c.instructions+=2;NFSU2_TR(0x651861);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x14ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B651864:{NFSU2_TR(0x651864);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L651891;}}
}
B651866:L651866:{c.instructions+=3;NFSU2_TR(0x651866);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B651869:{NFSU2_TR(0x651869);
u8 U[14];
__builtin_memmove((U+6),(R+24),4);
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
B65186b:{NFSU2_TR(0x65186b);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x651740u);}goto L651740;}}
}
B651871:L651871:{c.instructions+=2;NFSU2_TR(0x651871);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
w1(R+512,u8((r4(U+6))<(u32(0x15ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x15ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x15ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B651874:{NFSU2_TR(0x651874);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x651740u);}goto L651740;}}
}
B65187a:L65187a:{c.instructions+=2;NFSU2_TR(0x65187a);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
w1(R+512,u8((r4(U+6))<(u32(0x16ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x16ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x16ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B65187d:{NFSU2_TR(0x65187d);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x651740u);}goto L651740;}}
}
B651883:L651883:{c.instructions+=2;NFSU2_TR(0x651883);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
w1(R+512,u8((r4(U+6))<(u32(0x17ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x17ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x17ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B651886:{NFSU2_TR(0x651886);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x651740u);}goto L651740;}}
}
B65188c:L65188c:{c.instructions+=2;NFSU2_TR(0x65188c);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
w1(R+512,u8((r4(U+6))<(u32(0x18ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x18ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x18ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B65188f:{NFSU2_TR(0x65188f);
{goto L651894;}
}
B651891:L651891:{c.instructions+=1;NFSU2_TR(0x651891);
u8 U[22];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(r4(R+24))));
w1(R+523,sborrow<u32>(r4(U+14),r4(R+24)));
w4(U+18,u32(u32(r4(U+14))-u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B651894:L651894:{c.instructions+=1;NFSU2_TR(0x651894);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x651740u);}goto L651740;}}
}
B65189a:L65189a:{c.instructions+=1;NFSU2_TR(0x65189a);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65166fu);}goto L65166f;}
}
B65189f:L65189f:{c.instructions+=6;NFSU2_TR(0x65189f);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6518a2:{NFSU2_TR(0x6518a2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6518a5:{NFSU2_TR(0x6518a5);
u8 U[32];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x18ull))));
w8(U+8,u64(s64(s32(r4(R+12)))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+16,u64(s64(s32(r4(U+4)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+12,u32(r8(U+24)));
}
B6518a9:{NFSU2_TR(0x6518a9);
u8 U[32];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
w8(U+8,u64(s64(s32(r4(R+0)))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+16,u64(s64(s32(r4(U+4)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+0,u32(r8(U+24)));
}
B6518ad:{NFSU2_TR(0x6518ad);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6518b1:{NFSU2_TR(0x6518b1);
if(r1(R+518)){{goto L651916;}}
}
B6518b3:L6518b3:{c.instructions+=2;NFSU2_TR(0x6518b3);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(R+12))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6518b5:{NFSU2_TR(0x6518b5);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65166fu);}goto L65166f;}}
}
B6518bb:L6518bb:{c.instructions+=3;NFSU2_TR(0x6518bb);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B6518bd:{NFSU2_TR(0x6518bd);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6518bf:{NFSU2_TR(0x6518bf);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L65197a;}}
}
B6518c5:L6518c5:{c.instructions+=6;NFSU2_TR(0x6518c5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6518c8:{NFSU2_TR(0x6518c8);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6518cb:{NFSU2_TR(0x6518cb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6518cc:{NFSU2_TR(0x6518cc);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6518cd:{NFSU2_TR(0x6518cd);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6518d0:{NFSU2_TR(0x6518d0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6518d5ull));
TAIL_STATIC(0x64ff71u,64f);
}
B6518d5:L6518d5:{c.instructions+=2;NFSU2_TR(0x6518d5);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B6518d7:{NFSU2_TR(0x6518d7);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65166fu);}goto L65166f;}}
}
B6518dd:L6518dd:{c.instructions+=6;NFSU2_TR(0x6518dd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6518e0:{NFSU2_TR(0x6518e0);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6518e3:{NFSU2_TR(0x6518e3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6518e4:{NFSU2_TR(0x6518e4);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6518e5:{NFSU2_TR(0x6518e5);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6518e8:{NFSU2_TR(0x6518e8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6518edull));
TAIL_STATIC(0x64ff71u,64f);
}
B6518ed:L6518ed:{c.instructions+=2;NFSU2_TR(0x6518ed);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B6518ef:{NFSU2_TR(0x6518ef);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65166fu);}goto L65166f;}}
}
B6518f5:L6518f5:{c.instructions+=7;NFSU2_TR(0x6518f5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6518f8:{NFSU2_TR(0x6518f8);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6518fa:{NFSU2_TR(0x6518fa);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6518fd:{NFSU2_TR(0x6518fd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6518fe:{NFSU2_TR(0x6518fe);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B651901:{NFSU2_TR(0x651901);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B651902:{NFSU2_TR(0x651902);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x651907ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65164au);}goto L65164a;}
}
B651907:L651907:{c.instructions+=2;NFSU2_TR(0x651907);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B651909:{NFSU2_TR(0x651909);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65166fu);}goto L65166f;}}
}
B65190f:L65190f:{c.instructions+=3;NFSU2_TR(0x65190f);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B651910:{NFSU2_TR(0x651910);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w1(R+512,u8((r4(R+24))<(r4(U+0))));
}
B651912:{NFSU2_TR(0x651912);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6518c5u);}goto L6518c5;}}
}
B651914:L651914:{c.instructions+=1;NFSU2_TR(0x651914);
{goto L65197a;}
}
B651916:L651916:{c.instructions+=2;NFSU2_TR(0x651916);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+4))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B651919:{NFSU2_TR(0x651919);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65166fu);}goto L65166f;}}
}
B65191f:L65191f:{c.instructions+=2;NFSU2_TR(0x65191f);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B651921:{NFSU2_TR(0x651921);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65166fu);}goto L65166f;}}
}
B651927:L651927:{c.instructions+=3;NFSU2_TR(0x651927);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B651929:{NFSU2_TR(0x651929);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B65192b:{NFSU2_TR(0x65192b);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L65197a;}}
}
B65192d:L65192d:{c.instructions+=6;NFSU2_TR(0x65192d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B651930:{NFSU2_TR(0x651930);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B651933:{NFSU2_TR(0x651933);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B651934:{NFSU2_TR(0x651934);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B651935:{NFSU2_TR(0x651935);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B651938:{NFSU2_TR(0x651938);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x65193dull));
TAIL_STATIC(0x64ff71u,64f);
}
B65193d:L65193d:{c.instructions+=2;NFSU2_TR(0x65193d);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B65193f:{NFSU2_TR(0x65193f);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65166fu);}goto L65166f;}}
}
B651945:L651945:{c.instructions+=6;NFSU2_TR(0x651945);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B651948:{NFSU2_TR(0x651948);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B65194b:{NFSU2_TR(0x65194b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65194c:{NFSU2_TR(0x65194c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65194d:{NFSU2_TR(0x65194d);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B651950:{NFSU2_TR(0x651950);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x651955ull));
TAIL_STATIC(0x64ff71u,64f);
}
B651955:L651955:{c.instructions+=2;NFSU2_TR(0x651955);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B651957:{NFSU2_TR(0x651957);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65166fu);}goto L65166f;}}
}
B65195d:L65195d:{c.instructions+=6;NFSU2_TR(0x65195d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B651960:{NFSU2_TR(0x651960);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B651963:{NFSU2_TR(0x651963);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B651964:{NFSU2_TR(0x651964);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B651967:{NFSU2_TR(0x651967);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B651968:{NFSU2_TR(0x651968);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x65196dull));
TAIL_STATIC(0x64fbecu,64f);
}
B65196d:L65196d:{c.instructions+=2;NFSU2_TR(0x65196d);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B65196f:{NFSU2_TR(0x65196f);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65166fu);}goto L65166f;}}
}
B651975:L651975:{c.instructions+=3;NFSU2_TR(0x651975);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B651976:{NFSU2_TR(0x651976);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w1(R+512,u8((r4(R+24))<(r4(U+0))));
}
B651978:{NFSU2_TR(0x651978);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65192du);}goto L65192d;}}
}
B65197a:L65197a:{c.instructions+=3;NFSU2_TR(0x65197a);
w1(R+512,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B65197c:{NFSU2_TR(0x65197c);
u8 U[6];
w1(R+523,scarry<u32>(r4(R+0),u32(0x1ull)));
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B65197d:{NFSU2_TR(0x65197d);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x651671u);}goto L651671;}
}
B651982:L651982:{c.instructions+=10;NFSU2_TR(0x651982);
__builtin_memmove((R+28),(R+28),4);
}
B651984:{NFSU2_TR(0x651984);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B651985:{NFSU2_TR(0x651985);
__builtin_memmove((R+20),(R+16),4);
}
B651987:{NFSU2_TR(0x651987);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x24cull))));
}
B65198d:{NFSU2_TR(0x65198d);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B651991:{NFSU2_TR(0x651991);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B651992:{NFSU2_TR(0x651992);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B651993:{NFSU2_TR(0x651993);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B651994:{NFSU2_TR(0x651994);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B651997:{NFSU2_TR(0x651997);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L651c89;}}
}
B65199d:L65199d:{c.instructions+=3;NFSU2_TR(0x65199d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6519a0:{NFSU2_TR(0x6519a0);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6519a2:{NFSU2_TR(0x6519a2);
if(r1(R+518)){{goto L651c89;}}
}
B6519a8:L6519a8:{c.instructions+=2;NFSU2_TR(0x6519a8);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6519ac:{NFSU2_TR(0x6519ac);
if(r1(R+518)){{goto L651a73;}}
}
B6519b2:L6519b2:{c.instructions+=2;NFSU2_TR(0x6519b2);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6519b5:{NFSU2_TR(0x6519b5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6519baull));
TAIL_STATIC(0x672a2au,672);
}
B6519ba:L6519ba:{c.instructions+=2;NFSU2_TR(0x6519ba);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6519bd:{NFSU2_TR(0x6519bd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6519c2ull));
TAIL_STATIC(0x672a2au,672);
}
B6519c2:L6519c2:{c.instructions+=4;NFSU2_TR(0x6519c2);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x9ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6519c6:{NFSU2_TR(0x6519c6);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6519c8:{NFSU2_TR(0x6519c8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6519c9:{NFSU2_TR(0x6519c9);
if(r1(R+518)){{goto L6519f7;}}
}
B6519cb:L6519cb:{c.instructions+=8;NFSU2_TR(0x6519cb);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6519ce:{NFSU2_TR(0x6519ce);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6519d1:{NFSU2_TR(0x6519d1);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B6519d3:{NFSU2_TR(0x6519d3);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B6519d4:{NFSU2_TR(0x6519d4);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6519d7:{NFSU2_TR(0x6519d7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6519da:{NFSU2_TR(0x6519da);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6519dd:{NFSU2_TR(0x6519dd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6519e2ull));
TAIL_STATIC(0x64fb5eu,64f);
}
B6519e2:L6519e2:{c.instructions+=4;NFSU2_TR(0x6519e2);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6519e5:{NFSU2_TR(0x6519e5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6519e8:{NFSU2_TR(0x6519e8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6519eb:{NFSU2_TR(0x6519eb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6519f0ull));
TAIL_STATIC(0x64fae7u,64f);
}
B6519f0:L6519f0:{c.instructions+=2;NFSU2_TR(0x6519f0);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6519f2:{NFSU2_TR(0x6519f2);
if(r1(R+518)){{goto L6519f7;}}
}
B6519f4:L6519f4:{c.instructions+=1;NFSU2_TR(0x6519f4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6519f7:L6519f7:{c.instructions+=3;NFSU2_TR(0x6519f7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6519fa:{NFSU2_TR(0x6519fa);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x9ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6519fe:{NFSU2_TR(0x6519fe);
if(r1(R+518)){{goto L651a32;}}
}
B651a00:L651a00:{c.instructions+=6;NFSU2_TR(0x651a00);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B651a03:{NFSU2_TR(0x651a03);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B651a06:{NFSU2_TR(0x651a06);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B651a09:{NFSU2_TR(0x651a09);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B651a0c:{NFSU2_TR(0x651a0c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B651a13:{NFSU2_TR(0x651a13);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x651a18ull));
TAIL_STATIC(0x64fb5eu,64f);
}
B651a18:L651a18:{c.instructions+=4;NFSU2_TR(0x651a18);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B651a1b:{NFSU2_TR(0x651a1b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B651a1e:{NFSU2_TR(0x651a1e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B651a21:{NFSU2_TR(0x651a21);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x651a26ull));
TAIL_STATIC(0x64fae7u,64f);
}
B651a26:L651a26:{c.instructions+=2;NFSU2_TR(0x651a26);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B651a28:{NFSU2_TR(0x651a28);
if(r1(R+518)){{goto L651a32;}}
}
B651a2a:L651a2a:{c.instructions+=4;NFSU2_TR(0x651a2a);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B651a2c:{NFSU2_TR(0x651a2c);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B651a2d:{NFSU2_TR(0x651a2d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B651a30:{NFSU2_TR(0x651a30);
{goto L651a35;}
}
B651a32:L651a32:{c.instructions+=2;NFSU2_TR(0x651a32);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B651a34:{NFSU2_TR(0x651a34);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B651a35:L651a35:{c.instructions+=3;NFSU2_TR(0x651a35);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B651a38:{NFSU2_TR(0x651a38);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B651a3a:{NFSU2_TR(0x651a3a);
if(r1(R+518)){{goto L651c1e;}}
}
B651a40:L651a40:{c.instructions+=3;NFSU2_TR(0x651a40);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B651a43:{NFSU2_TR(0x651a43);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B651a45:{NFSU2_TR(0x651a45);
if(r1(R+518)){{goto L651c1e;}}
}
B651a4b:L651a4b:{c.instructions+=2;NFSU2_TR(0x651a4b);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B651a4d:{NFSU2_TR(0x651a4d);
if(r1(R+518)){{goto L651b8c;}}
}
B651a53:L651a53:{c.instructions+=2;NFSU2_TR(0x651a53);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B651a55:{NFSU2_TR(0x651a55);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L651b1b;}}
}
B651a5b:L651a5b:{c.instructions+=2;NFSU2_TR(0x651a5b);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B651a5d:{NFSU2_TR(0x651a5d);
if(r1(R+518)){{goto L651c89;}}
}
B651a63:L651a63:{c.instructions+=2;NFSU2_TR(0x651a63);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B651a65:{NFSU2_TR(0x651a65);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L651ad8;}}
}
B651a67:L651a67:{c.instructions+=3;NFSU2_TR(0x651a67);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B651a6a:{NFSU2_TR(0x651a6a);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B651a6d:{NFSU2_TR(0x651a6d);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L651c89;}}
}
B651a73:L651a73:{c.instructions+=1;NFSU2_TR(0x651a73);
w4(R+28,u32(0x7b407cull));
}
B651a78:L651a78:{c.instructions+=8;NFSU2_TR(0x651a78);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B651a7b:{NFSU2_TR(0x651a7b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B651a7e:{NFSU2_TR(0x651a7e);
w4(R+24,u32(0xffull));
}
B651a83:{NFSU2_TR(0x651a83);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B651a84:{NFSU2_TR(0x651a84);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffeb4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B651a8a:{NFSU2_TR(0x651a8a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B651a8b:{NFSU2_TR(0x651a8b);
__builtin_memmove((R+4),(R+12),4);
}
B651a8d:{NFSU2_TR(0x651a8d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x651a92ull));
TAIL_STATIC(0x64fc9eu,64f);
}
B651a92:L651a92:{c.instructions+=6;NFSU2_TR(0x651a92);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B651a95:{NFSU2_TR(0x651a95);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffdb4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B651a9b:{NFSU2_TR(0x651a9b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B651a9c:{NFSU2_TR(0x651a9c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B651a9d:{NFSU2_TR(0x651a9d);
__builtin_memmove((R+4),(R+12),4);
}
B651a9f:{NFSU2_TR(0x651a9f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x651aa4ull));
TAIL_STATIC(0x64fc9eu,64f);
}
B651aa4:L651aa4:{c.instructions+=7;NFSU2_TR(0x651aa4);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B651aa8:{NFSU2_TR(0x651aa8);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffeb4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B651aae:{NFSU2_TR(0x651aae);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B651aaf:{NFSU2_TR(0x651aaf);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffdb4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B651ab5:{NFSU2_TR(0x651ab5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B651ab6:{NFSU2_TR(0x651ab6);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B651ab7:{NFSU2_TR(0x651ab7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L651c93;}}
}
B651abd:L651abd:{c.instructions+=5;NFSU2_TR(0x651abd);
u8 U[4];
w4(U+0,u32(0x7b4058ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B651ac2:{NFSU2_TR(0x651ac2);
u8 U[4];
w4(U+0,u32(0xbc9ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B651ac7:{NFSU2_TR(0x651ac7);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B651aca:{NFSU2_TR(0x651aca);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B651acb:{NFSU2_TR(0x651acb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x651ad0ull));
TAIL_STATIC(0x64f52au,64f);
}
B651ad0:L651ad0:{c.instructions+=2;NFSU2_TR(0x651ad0);
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
B651ad3:{NFSU2_TR(0x651ad3);
{goto L651cac;}
}
B651ad8:L651ad8:{c.instructions+=2;NFSU2_TR(0x651ad8);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B651adb:{NFSU2_TR(0x651adb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L651b8c;}}
}
B651ae1:L651ae1:{c.instructions+=3;NFSU2_TR(0x651ae1);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B651ae4:{NFSU2_TR(0x651ae4);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B651ae6:{NFSU2_TR(0x651ae6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L651af0;}}
}
B651ae8:L651ae8:{c.instructions+=3;NFSU2_TR(0x651ae8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B651aeb:{NFSU2_TR(0x651aeb);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+4))<(r4(U+8))));
w4(U+12,u32(u32(r4(R+4))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B651aee:{NFSU2_TR(0x651aee);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x651a73u);}goto L651a73;}}
}
B651af0:L651af0:{c.instructions+=3;NFSU2_TR(0x651af0);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B651af3:{NFSU2_TR(0x651af3);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B651af5:{NFSU2_TR(0x651af5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L651b00;}}
}
B651af7:L651af7:{c.instructions+=2;NFSU2_TR(0x651af7);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+0))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B651afa:{NFSU2_TR(0x651afa);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x651a73u);}goto L651a73;}}
}
B651b00:L651b00:{c.instructions+=2;NFSU2_TR(0x651b00);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B651b02:{NFSU2_TR(0x651b02);
if(r1(R+518)){{goto L651c89;}}
}
B651b08:L651b08:{c.instructions+=2;NFSU2_TR(0x651b08);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B651b0a:{NFSU2_TR(0x651b0a);
if(r1(R+518)){{goto L651c89;}}
}
B651b10:L651b10:{c.instructions+=3;NFSU2_TR(0x651b10);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(r4(R+28)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B651b13:{NFSU2_TR(0x651b13);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B651b16:{NFSU2_TR(0x651b16);
{goto L651c11;}
}
B651b1b:L651b1b:{c.instructions+=2;NFSU2_TR(0x651b1b);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B651b1e:{NFSU2_TR(0x651b1e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L651b9a;}}
}
B651b20:L651b20:{c.instructions+=2;NFSU2_TR(0x651b20);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B651b22:{NFSU2_TR(0x651b22);
if(r1(R+518)){{goto L651c89;}}
}
B651b28:L651b28:{c.instructions+=2;NFSU2_TR(0x651b28);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B651b2a:{NFSU2_TR(0x651b2a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L651b6a;}}
}
B651b2c:L651b2c:{c.instructions+=3;NFSU2_TR(0x651b2c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B651b2f:{NFSU2_TR(0x651b2f);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B651b31:{NFSU2_TR(0x651b31);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L651b3f;}}
}
B651b33:L651b33:{c.instructions+=3;NFSU2_TR(0x651b33);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B651b36:{NFSU2_TR(0x651b36);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+4))<(r4(U+8))));
w4(U+12,u32(u32(r4(R+4))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B651b39:{NFSU2_TR(0x651b39);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x651a73u);}goto L651a73;}}
}
B651b3f:L651b3f:{c.instructions+=3;NFSU2_TR(0x651b3f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B651b42:{NFSU2_TR(0x651b42);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B651b44:{NFSU2_TR(0x651b44);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L651b4f;}}
}
B651b46:L651b46:{c.instructions+=2;NFSU2_TR(0x651b46);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B651b49:{NFSU2_TR(0x651b49);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x651a73u);}goto L651a73;}}
}
B651b4f:L651b4f:{c.instructions+=2;NFSU2_TR(0x651b4f);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B651b51:{NFSU2_TR(0x651b51);
if(r1(R+518)){{goto L651c89;}}
}
B651b57:L651b57:{c.instructions+=2;NFSU2_TR(0x651b57);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B651b59:{NFSU2_TR(0x651b59);
if(r1(R+518)){{goto L651c89;}}
}
B651b5f:L651b5f:{c.instructions+=3;NFSU2_TR(0x651b5f);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(r4(R+24)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B651b62:{NFSU2_TR(0x651b62);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B651b65:{NFSU2_TR(0x651b65);
{goto L651c11;}
}
B651b6a:L651b6a:{c.instructions+=2;NFSU2_TR(0x651b6a);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B651b6d:{NFSU2_TR(0x651b6d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L651b8c;}}
}
B651b6f:L651b6f:{c.instructions+=3;NFSU2_TR(0x651b6f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B651b72:{NFSU2_TR(0x651b72);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B651b75:{NFSU2_TR(0x651b75);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x651a73u);}goto L651a73;}}
}
B651b7b:L651b7b:{c.instructions+=3;NFSU2_TR(0x651b7b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B651b7e:{NFSU2_TR(0x651b7e);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B651b81:{NFSU2_TR(0x651b81);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L651c89;}}
}
B651b87:L651b87:{c.instructions+=1;NFSU2_TR(0x651b87);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x651a73u);}goto L651a73;}
}
B651b8c:L651b8c:{c.instructions+=2;NFSU2_TR(0x651b8c);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B651b8f:{NFSU2_TR(0x651b8f);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x651a73u);}goto L651a73;}}
}
B651b95:L651b95:{c.instructions+=1;NFSU2_TR(0x651b95);
{goto L651c89;}
}
B651b9a:L651b9a:{c.instructions+=2;NFSU2_TR(0x651b9a);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B651b9d:{NFSU2_TR(0x651b9d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L651c89;}}
}
B651ba3:L651ba3:{c.instructions+=2;NFSU2_TR(0x651ba3);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B651ba5:{NFSU2_TR(0x651ba5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x651a73u);}goto L651a73;}}
}
B651bab:L651bab:{c.instructions+=3;NFSU2_TR(0x651bab);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B651bae:{NFSU2_TR(0x651bae);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xdull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B651bb1:{NFSU2_TR(0x651bb1);
if(r1(R+518)){{goto L651c89;}}
}
B651bb7:L651bb7:{c.instructions+=2;NFSU2_TR(0x651bb7);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xfull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B651bba:{NFSU2_TR(0x651bba);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L651be7;}}
}
B651bbc:L651bbc:{c.instructions+=3;NFSU2_TR(0x651bbc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B651bbf:{NFSU2_TR(0x651bbf);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B651bc1:{NFSU2_TR(0x651bc1);
if(r1(R+518)){{goto L651c89;}}
}
B651bc7:L651bc7:{c.instructions+=2;NFSU2_TR(0x651bc7);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x10ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B651bca:{NFSU2_TR(0x651bca);
if(r1(R+518)){{goto L651c89;}}
}
B651bd0:L651bd0:{c.instructions+=2;NFSU2_TR(0x651bd0);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x11ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B651bd3:{NFSU2_TR(0x651bd3);
if(r1(R+518)){{goto L651c89;}}
}
B651bd9:L651bd9:{c.instructions+=2;NFSU2_TR(0x651bd9);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x12ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B651bdc:{NFSU2_TR(0x651bdc);
if(r1(R+518)){{goto L651c89;}}
}
B651be2:L651be2:{c.instructions+=2;NFSU2_TR(0x651be2);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x13ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B651be5:{NFSU2_TR(0x651be5);
{goto L651c11;}
}
B651be7:L651be7:{c.instructions+=2;NFSU2_TR(0x651be7);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x14ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B651bea:{NFSU2_TR(0x651bea);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L651c19;}}
}
B651bec:L651bec:{c.instructions+=3;NFSU2_TR(0x651bec);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B651bef:{NFSU2_TR(0x651bef);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B651bf1:{NFSU2_TR(0x651bf1);
if(r1(R+518)){{goto L651c89;}}
}
B651bf7:L651bf7:{c.instructions+=2;NFSU2_TR(0x651bf7);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x15ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B651bfa:{NFSU2_TR(0x651bfa);
if(r1(R+518)){{goto L651c89;}}
}
B651c00:L651c00:{c.instructions+=2;NFSU2_TR(0x651c00);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x16ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B651c03:{NFSU2_TR(0x651c03);
if(r1(R+518)){{goto L651c89;}}
}
B651c09:L651c09:{c.instructions+=2;NFSU2_TR(0x651c09);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x17ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B651c0c:{NFSU2_TR(0x651c0c);
if(r1(R+518)){{goto L651c89;}}
}
B651c0e:L651c0e:{c.instructions+=1;NFSU2_TR(0x651c0e);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x18ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B651c11:L651c11:{c.instructions+=1;NFSU2_TR(0x651c11);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x651a73u);}goto L651a73;}}
}
B651c17:L651c17:{c.instructions+=1;NFSU2_TR(0x651c17);
{goto L651c89;}
}
B651c19:L651c19:{c.instructions+=2;NFSU2_TR(0x651c19);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B651c1c:{NFSU2_TR(0x651c1c);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x651c11u);}goto L651c11;}
}
B651c1e:L651c1e:{c.instructions+=6;NFSU2_TR(0x651c1e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B651c21:{NFSU2_TR(0x651c21);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B651c24:{NFSU2_TR(0x651c24);
u8 U[32];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
w8(U+8,u64(s64(s32(r4(R+12)))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+16,u64(s64(s32(r4(U+4)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+12,u32(r8(U+24)));
}
B651c28:{NFSU2_TR(0x651c28);
u8 U[32];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x18ull))));
w8(U+8,u64(s64(s32(r4(R+0)))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+16,u64(s64(s32(r4(U+4)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+0,u32(r8(U+24)));
}
B651c2c:{NFSU2_TR(0x651c2c);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(R+12))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B651c2e:{NFSU2_TR(0x651c2e);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x651a73u);}goto L651a73;}}
}
B651c34:L651c34:{c.instructions+=3;NFSU2_TR(0x651c34);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B651c36:{NFSU2_TR(0x651c36);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B651c38:{NFSU2_TR(0x651c38);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L651c89;}}
}
B651c3a:L651c3a:{c.instructions+=6;NFSU2_TR(0x651c3a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B651c3d:{NFSU2_TR(0x651c3d);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B651c40:{NFSU2_TR(0x651c40);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B651c41:{NFSU2_TR(0x651c41);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B651c42:{NFSU2_TR(0x651c42);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B651c45:{NFSU2_TR(0x651c45);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x651c4aull));
TAIL_STATIC(0x64ff71u,64f);
}
B651c4a:L651c4a:{c.instructions+=2;NFSU2_TR(0x651c4a);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B651c4c:{NFSU2_TR(0x651c4c);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x651a73u);}goto L651a73;}}
}
B651c52:L651c52:{c.instructions+=6;NFSU2_TR(0x651c52);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B651c55:{NFSU2_TR(0x651c55);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B651c58:{NFSU2_TR(0x651c58);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B651c59:{NFSU2_TR(0x651c59);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B651c5a:{NFSU2_TR(0x651c5a);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B651c5d:{NFSU2_TR(0x651c5d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x651c62ull));
TAIL_STATIC(0x64ff71u,64f);
}
B651c62:L651c62:{c.instructions+=2;NFSU2_TR(0x651c62);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B651c64:{NFSU2_TR(0x651c64);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x651a73u);}goto L651a73;}}
}
B651c6a:L651c6a:{c.instructions+=7;NFSU2_TR(0x651c6a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B651c6d:{NFSU2_TR(0x651c6d);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B651c6f:{NFSU2_TR(0x651c6f);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B651c72:{NFSU2_TR(0x651c72);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B651c73:{NFSU2_TR(0x651c73);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B651c76:{NFSU2_TR(0x651c76);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B651c77:{NFSU2_TR(0x651c77);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x651c7cull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65164au);}goto L65164a;}
}
B651c7c:L651c7c:{c.instructions+=2;NFSU2_TR(0x651c7c);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B651c7e:{NFSU2_TR(0x651c7e);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x651a73u);}goto L651a73;}}
}
B651c84:L651c84:{c.instructions+=3;NFSU2_TR(0x651c84);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B651c85:{NFSU2_TR(0x651c85);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w1(R+512,u8((r4(R+24))<(r4(U+0))));
}
B651c87:{NFSU2_TR(0x651c87);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x651c3au);}goto L651c3a;}}
}
B651c89:L651c89:{c.instructions+=2;NFSU2_TR(0x651c89);
w4(R+28,u32(0x783fe5ull));
}
B651c8e:{NFSU2_TR(0x651c8e);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x651a78u);}goto L651a78;}
}
B651c93:L651c93:{c.instructions+=6;NFSU2_TR(0x651c93);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B651c96:{NFSU2_TR(0x651c96);
u8 U[4];
w4(U+0,u32(0x7b402cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B651c9b:{NFSU2_TR(0x651c9b);
u8 U[4];
w4(U+0,u32(0xbc9ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B651ca0:{NFSU2_TR(0x651ca0);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B651ca3:{NFSU2_TR(0x651ca3);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B651ca4:{NFSU2_TR(0x651ca4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x651ca9ull));
TAIL_STATIC(0x64f52au,64f);
}
B651ca9:L651ca9:{c.instructions+=1;NFSU2_TR(0x651ca9);
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
B651cac:L651cac:{c.instructions+=5;NFSU2_TR(0x651cac);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B651cad:{NFSU2_TR(0x651cad);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B651cae:{NFSU2_TR(0x651cae);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B651caf:{NFSU2_TR(0x651caf);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B651cb0:{NFSU2_TR(0x651cb0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B651cb3:L651cb3:{c.instructions+=12;NFSU2_TR(0x651cb3);
__builtin_memmove((R+28),(R+28),4);
}
B651cb5:{NFSU2_TR(0x651cb5);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B651cb6:{NFSU2_TR(0x651cb6);
__builtin_memmove((R+20),(R+16),4);
}
B651cb8:{NFSU2_TR(0x651cb8);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B651cb9:{NFSU2_TR(0x651cb9);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B651cba:{NFSU2_TR(0x651cba);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B651cbd:{NFSU2_TR(0x651cbd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B651cc0:{NFSU2_TR(0x651cc0);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B651cc2:{NFSU2_TR(0x651cc2);
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
B651cc4:{NFSU2_TR(0x651cc4);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B651cc5:{NFSU2_TR(0x651cc5);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B651cc6:{NFSU2_TR(0x651cc6);
if(r1(R+518)){{goto L651cec;}}
}
B651cc8:L651cc8:{c.instructions+=3;NFSU2_TR(0x651cc8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B651ccb:{NFSU2_TR(0x651ccb);
u8 U[14];
__builtin_memmove((U+6),(R+8),4);
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
B651ccd:{NFSU2_TR(0x651ccd);
if(r1(R+518)){{goto L651cec;}}
}
B651ccf:L651ccf:{c.instructions+=5;NFSU2_TR(0x651ccf);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+4)),r4(U+0));
}
B651cd1:{NFSU2_TR(0x651cd1);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+0)),r4(U+0));
}
B651cd3:{NFSU2_TR(0x651cd3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B651cd6:{NFSU2_TR(0x651cd6);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B651cd8:{NFSU2_TR(0x651cd8);
if(r1(R+518)){{goto L651cdc;}}
}
B651cda:L651cda:{c.instructions+=1;NFSU2_TR(0x651cda);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+0)),r4(U+0));
}
B651cdc:L651cdc:{c.instructions+=3;NFSU2_TR(0x651cdc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B651cdf:{NFSU2_TR(0x651cdf);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B651ce1:{NFSU2_TR(0x651ce1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L651cf8;}}
}
B651ce3:L651ce3:{c.instructions+=2;NFSU2_TR(0x651ce3);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
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
B651ce6:{NFSU2_TR(0x651ce6);
if(r1(R+518)){{goto L651daa;}}
}
B651cec:L651cec:{c.instructions+=1;NFSU2_TR(0x651cec);
w4(R+0,u32(0x80004005ull));
}
B651cf1:L651cf1:{c.instructions+=5;NFSU2_TR(0x651cf1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B651cf2:{NFSU2_TR(0x651cf2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B651cf3:{NFSU2_TR(0x651cf3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B651cf4:{NFSU2_TR(0x651cf4);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B651cf5:{NFSU2_TR(0x651cf5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B651cf8:L651cf8:{c.instructions+=3;NFSU2_TR(0x651cf8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B651cfb:{NFSU2_TR(0x651cfb);
u8 U[14];
__builtin_memmove((U+6),(R+8),4);
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
B651cfd:{NFSU2_TR(0x651cfd);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x651cecu);}goto L651cec;}}
}
B651cff:L651cff:{c.instructions+=3;NFSU2_TR(0x651cff);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B651d02:{NFSU2_TR(0x651d02);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B651d03:{NFSU2_TR(0x651d03);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x651d08ull));
TAIL_STATIC(0x64fb5eu,64f);
}
B651d08:L651d08:{c.instructions+=4;NFSU2_TR(0x651d08);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B651d0b:{NFSU2_TR(0x651d0b);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B651d0c:{NFSU2_TR(0x651d0c);
__builtin_memmove((R+24),(R+0),4);
}
B651d0e:{NFSU2_TR(0x651d0e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x651d13ull));
TAIL_STATIC(0x64fb5eu,64f);
}
B651d13:L651d13:{c.instructions+=2;NFSU2_TR(0x651d13);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(R+24))<(r4(U+0))));
}
B651d15:{NFSU2_TR(0x651d15);
if(r1(R+512)){{goto L651d27;}}
}
B651d17:L651d17:{c.instructions+=5;NFSU2_TR(0x651d17);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B651d1a:{NFSU2_TR(0x651d1a);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B651d1c:{NFSU2_TR(0x651d1c);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B651d1d:{NFSU2_TR(0x651d1d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B651d1e:{NFSU2_TR(0x651d1e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x651d23ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65164au);}goto L65164a;}
}
B651d23:L651d23:{c.instructions+=2;NFSU2_TR(0x651d23);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B651d25:{NFSU2_TR(0x651d25);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L651d4b;}}
}
B651d27:L651d27:{c.instructions+=5;NFSU2_TR(0x651d27);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B651d2a:{NFSU2_TR(0x651d2a);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B651d2c:{NFSU2_TR(0x651d2c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B651d2d:{NFSU2_TR(0x651d2d);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B651d2e:{NFSU2_TR(0x651d2e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x651d33ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65164au);}goto L65164a;}
}
B651d33:L651d33:{c.instructions+=2;NFSU2_TR(0x651d33);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B651d35:{NFSU2_TR(0x651d35);
if(r1(R+518)){{goto L651d3b;}}
}
B651d37:L651d37:{c.instructions+=2;NFSU2_TR(0x651d37);
__builtin_memmove((R+24),(R+12),4);
}
B651d39:{NFSU2_TR(0x651d39);
{goto L651d4d;}
}
B651d3b:L651d3b:{c.instructions+=5;NFSU2_TR(0x651d3b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B651d3e:{NFSU2_TR(0x651d3e);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B651d40:{NFSU2_TR(0x651d40);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B651d41:{NFSU2_TR(0x651d41);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B651d42:{NFSU2_TR(0x651d42);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x651d47ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65164au);}goto L65164a;}
}
B651d47:L651d47:{c.instructions+=2;NFSU2_TR(0x651d47);
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
B651d49:{NFSU2_TR(0x651d49);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x651cecu);}goto L651cec;}}
}
B651d4b:L651d4b:{c.instructions+=1;NFSU2_TR(0x651d4b);
__builtin_memmove((R+24),(R+28),4);
}
B651d4d:L651d4d:{c.instructions+=6;NFSU2_TR(0x651d4d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B651d50:{NFSU2_TR(0x651d50);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((R+0),(U+0),4);
}
B651d53:{NFSU2_TR(0x651d53);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B651d54:{NFSU2_TR(0x651d54);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B651d55:{NFSU2_TR(0x651d55);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B651d56:{NFSU2_TR(0x651d56);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x651d5bull));
TAIL_STATIC(0x65003cu,650);
}
B651d5b:L651d5b:{c.instructions+=2;NFSU2_TR(0x651d5b);
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
B651d5d:{NFSU2_TR(0x651d5d);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x651cf1u);}goto L651cf1;}}
}
B651d5f:L651d5f:{c.instructions+=3;NFSU2_TR(0x651d5f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B651d62:{NFSU2_TR(0x651d62);
u8 U[22];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(r4(R+28))));
w1(R+523,sborrow<u32>(r4(U+14),r4(R+28)));
w4(U+18,u32(u32(r4(U+14))-u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B651d65:{NFSU2_TR(0x651d65);
if(r1(R+518)){{goto L651d77;}}
}
B651d67:L651d67:{c.instructions+=3;NFSU2_TR(0x651d67);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B651d69:{NFSU2_TR(0x651d69);
__builtin_memmove((R+4),(R+24),4);
}
B651d6b:{NFSU2_TR(0x651d6b);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x651d6eull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B651d6e:L651d6e:{c.instructions+=2;NFSU2_TR(0x651d6e);
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
B651d70:{NFSU2_TR(0x651d70);
if(r1(R+518)){{goto L651d8b;}}
}
B651d72:L651d72:{c.instructions+=2;NFSU2_TR(0x651d72);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B651d75:{NFSU2_TR(0x651d75);
__builtin_memmove((R+24),(R+0),4);
}
B651d77:L651d77:{c.instructions+=3;NFSU2_TR(0x651d77);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B651d7a:{NFSU2_TR(0x651d7a);
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
B651d7c:{NFSU2_TR(0x651d7c);
if(r1(R+518)){{goto L651da0;}}
}
B651d7e:L651d7e:{c.instructions+=3;NFSU2_TR(0x651d7e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B651d80:{NFSU2_TR(0x651d80);
__builtin_memmove((R+4),(R+24),4);
}
B651d82:{NFSU2_TR(0x651d82);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x651d85ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B651d85:L651d85:{c.instructions+=3;NFSU2_TR(0x651d85);
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
B651d87:{NFSU2_TR(0x651d87);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+28)),r4(U+0));
}
B651d89:{NFSU2_TR(0x651d89);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L651d95;}}
}
B651d8b:L651d8b:{c.instructions+=2;NFSU2_TR(0x651d8b);
w4(R+0,u32(0x8007000eull));
}
B651d90:{NFSU2_TR(0x651d90);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x651cf1u);}goto L651cf1;}
}
B651d95:L651d95:{c.instructions+=4;NFSU2_TR(0x651d95);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B651d98:{NFSU2_TR(0x651d98);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B651d9a:{NFSU2_TR(0x651d9a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B651d9b:{NFSU2_TR(0x651d9b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x651da0ull));
TAIL_STATIC(0x64f92eu,64f);
}
B651da0:L651da0:{c.instructions+=4;NFSU2_TR(0x651da0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B651da3:{NFSU2_TR(0x651da3);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+0)),r4(U+0));
}
B651da5:{NFSU2_TR(0x651da5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B651da8:{NFSU2_TR(0x651da8);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+0)),r4(U+0));
}
B651daa:L651daa:{c.instructions+=2;NFSU2_TR(0x651daa);
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
B651dac:{NFSU2_TR(0x651dac);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x651cf1u);}goto L651cf1;}
}
B651db1:L651db1:{c.instructions+=18;NFSU2_TR(0x651db1);
__builtin_memmove((R+28),(R+28),4);
}
B651db3:{NFSU2_TR(0x651db3);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B651db4:{NFSU2_TR(0x651db4);
__builtin_memmove((R+20),(R+16),4);
}
B651db6:{NFSU2_TR(0x651db6);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B651db7:{NFSU2_TR(0x651db7);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B651db8:{NFSU2_TR(0x651db8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B651dbb:{NFSU2_TR(0x651dbb);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B651dbc:{NFSU2_TR(0x651dbc);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B651dbd:{NFSU2_TR(0x651dbd);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B651dbe:{NFSU2_TR(0x651dbe);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B651dc0:{NFSU2_TR(0x651dc0);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B651dc2:{NFSU2_TR(0x651dc2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B651dc5:{NFSU2_TR(0x651dc5);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B651dc7:{NFSU2_TR(0x651dc7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B651dc8:{NFSU2_TR(0x651dc8);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B651dc9:{NFSU2_TR(0x651dc9);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B651dcb:{NFSU2_TR(0x651dcb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B651dce:{NFSU2_TR(0x651dce);
if(r1(R+518)){{goto L651df4;}}
}
B651dd0:L651dd0:{c.instructions+=1;NFSU2_TR(0x651dd0);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L651df7;}}
}
B651dd2:L651dd2:{c.instructions+=2;NFSU2_TR(0x651dd2);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x4ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B651dd5:{NFSU2_TR(0x651dd5);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L651def;}}
}
B651dd7:L651dd7:{c.instructions+=2;NFSU2_TR(0x651dd7);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x8ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x8ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B651dda:{NFSU2_TR(0x651dda);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L651dea;}}
}
B651ddc:L651ddc:{c.instructions+=2;NFSU2_TR(0x651ddc);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0xcull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xcull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B651ddf:{NFSU2_TR(0x651ddf);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L651df7;}}
}
B651de1:L651de1:{c.instructions+=2;NFSU2_TR(0x651de1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w4(U+4,u32(0x3ull));
s4(u32(r4(U+0)),r4(U+4));
}
B651de8:{NFSU2_TR(0x651de8);
{goto L651df7;}
}
B651dea:L651dea:{c.instructions+=2;NFSU2_TR(0x651dea);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B651ded:{NFSU2_TR(0x651ded);
{goto L651df7;}
}
B651def:L651def:{c.instructions+=2;NFSU2_TR(0x651def);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B651df2:{NFSU2_TR(0x651df2);
{goto L651df7;}
}
B651df4:L651df4:{c.instructions+=1;NFSU2_TR(0x651df4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B651df7:L651df7:{c.instructions+=2;NFSU2_TR(0x651df7);
u8 U[4];
w4(U+0,u32(0x50ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B651df9:{NFSU2_TR(0x651df9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x651dfeull));
TAIL_STATIC(0x645362u,645);
}
B651dfe:L651dfe:{c.instructions+=2;NFSU2_TR(0x651dfe);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B651e00:{NFSU2_TR(0x651e00);
if(r1(R+518)){{goto L651e15;}}
}
B651e02:L651e02:{c.instructions+=8;NFSU2_TR(0x651e02);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B651e05:{NFSU2_TR(0x651e05);
__builtin_memmove((R+4),(R+0),4);
}
B651e07:{NFSU2_TR(0x651e07);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B651e08:{NFSU2_TR(0x651e08);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B651e09:{NFSU2_TR(0x651e09);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B651e0a:{NFSU2_TR(0x651e0a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B651e0b:{NFSU2_TR(0x651e0b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B651e0c:{NFSU2_TR(0x651e0c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x651e11ull));
TAIL_STATIC(0x672d7bu,672);
}
B651e11:L651e11:{c.instructions+=2;NFSU2_TR(0x651e11);
__builtin_memmove((R+24),(R+0),4);
}
B651e13:{NFSU2_TR(0x651e13);
{goto L651e17;}
}
B651e15:L651e15:{c.instructions+=1;NFSU2_TR(0x651e15);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B651e17:L651e17:{c.instructions+=2;NFSU2_TR(0x651e17);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B651e19:{NFSU2_TR(0x651e19);
if(r1(R+518)){{goto L651eb0;}}
}
B651e1f:L651e1f:{c.instructions+=2;NFSU2_TR(0x651e1f);
u8 U[4];
w4(U+0,u32(0x24ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B651e21:{NFSU2_TR(0x651e21);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x651e26ull));
TAIL_STATIC(0x645362u,645);
}
B651e26:L651e26:{c.instructions+=2;NFSU2_TR(0x651e26);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B651e28:{NFSU2_TR(0x651e28);
if(r1(R+518)){{goto L651e3e;}}
}
B651e2a:L651e2a:{c.instructions+=7;NFSU2_TR(0x651e2a);
u8 U[4];
w4(U+0,u32(0x200ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B651e2f:{NFSU2_TR(0x651e2f);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B651e30:{NFSU2_TR(0x651e30);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B651e31:{NFSU2_TR(0x651e31);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B651e34:{NFSU2_TR(0x651e34);
__builtin_memmove((R+4),(R+0),4);
}
B651e36:{NFSU2_TR(0x651e36);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B651e37:{NFSU2_TR(0x651e37);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x651e3cull));
TAIL_STATIC(0x672a51u,672);
}
B651e3c:L651e3c:{c.instructions+=1;NFSU2_TR(0x651e3c);
{goto L651e40;}
}
B651e3e:L651e3e:{c.instructions+=1;NFSU2_TR(0x651e3e);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B651e40:L651e40:{c.instructions+=3;NFSU2_TR(0x651e40);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B651e42:{NFSU2_TR(0x651e42);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B651e45:{NFSU2_TR(0x651e45);
if(r1(R+518)){{goto L651eb0;}}
}
B651e47:L651e47:{c.instructions+=2;NFSU2_TR(0x651e47);
u8 U[4];
w4(U+0,u32(0x40ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B651e49:{NFSU2_TR(0x651e49);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x651e4eull));
TAIL_STATIC(0x645362u,645);
}
B651e4e:L651e4e:{c.instructions+=2;NFSU2_TR(0x651e4e);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B651e52:{NFSU2_TR(0x651e52);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L651e6e;}}
}
B651e54:L651e54:{c.instructions+=2;NFSU2_TR(0x651e54);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B651e56:{NFSU2_TR(0x651e56);
if(r1(R+518)){{goto L651e84;}}
}
B651e58:L651e58:{c.instructions+=8;NFSU2_TR(0x651e58);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B651e5b:{NFSU2_TR(0x651e5b);
{u32 ea_=u32(r4(R+20)+u32(16u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B651e5e:{NFSU2_TR(0x651e5e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B651e5f:{NFSU2_TR(0x651e5f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B651e60:{NFSU2_TR(0x651e60);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B651e63:{NFSU2_TR(0x651e63);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B651e65:{NFSU2_TR(0x651e65);
__builtin_memmove((R+4),(R+0),4);
}
B651e67:{NFSU2_TR(0x651e67);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x651e6cull));
TAIL_STATIC(0x672efdu,672);
}
B651e6c:L651e6c:{c.instructions+=1;NFSU2_TR(0x651e6c);
{goto L651e86;}
}
B651e6e:L651e6e:{c.instructions+=2;NFSU2_TR(0x651e6e);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B651e70:{NFSU2_TR(0x651e70);
if(r1(R+518)){{goto L651e84;}}
}
B651e72:L651e72:{c.instructions+=5;NFSU2_TR(0x651e72);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B651e75:{NFSU2_TR(0x651e75);
__builtin_memmove((R+4),(R+0),4);
}
B651e77:{NFSU2_TR(0x651e77);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B651e7a:{NFSU2_TR(0x651e7a);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B651e7d:{NFSU2_TR(0x651e7d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x651e82ull));
TAIL_STATIC(0x672ec8u,672);
}
B651e82:L651e82:{c.instructions+=1;NFSU2_TR(0x651e82);
{goto L651e86;}
}
B651e84:L651e84:{c.instructions+=1;NFSU2_TR(0x651e84);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B651e86:L651e86:{c.instructions+=3;NFSU2_TR(0x651e86);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B651e88:{NFSU2_TR(0x651e88);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B651e8b:{NFSU2_TR(0x651e8b);
if(r1(R+518)){{goto L651eb0;}}
}
B651e8d:L651e8d:{c.instructions+=2;NFSU2_TR(0x651e8d);
u8 U[4];
w4(U+0,u32(0x14ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B651e8f:{NFSU2_TR(0x651e8f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x651e94ull));
TAIL_STATIC(0x645362u,645);
}
B651e94:L651e94:{c.instructions+=2;NFSU2_TR(0x651e94);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B651e96:{NFSU2_TR(0x651e96);
if(r1(R+518)){{goto L651eaa;}}
}
B651e98:L651e98:{c.instructions+=5;NFSU2_TR(0x651e98);
u8 U[4];
w4(U+0,u32(0x7b4088ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B651e9d:{NFSU2_TR(0x651e9d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B651e9e:{NFSU2_TR(0x651e9e);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B651ea1:{NFSU2_TR(0x651ea1);
__builtin_memmove((R+4),(R+0),4);
}
B651ea3:{NFSU2_TR(0x651ea3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x651ea8ull));
TAIL_STATIC(0x672498u,672);
}
B651ea8:L651ea8:{c.instructions+=1;NFSU2_TR(0x651ea8);
{goto L651eac;}
}
B651eaa:L651eaa:{c.instructions+=1;NFSU2_TR(0x651eaa);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B651eac:L651eac:{c.instructions+=2;NFSU2_TR(0x651eac);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B651eae:{NFSU2_TR(0x651eae);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L651eb4;}}
}
B651eb0:L651eb0:{c.instructions+=2;NFSU2_TR(0x651eb0);
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
B651eb2:{NFSU2_TR(0x651eb2);
{goto L651ec2;}
}
B651eb4:L651eb4:{c.instructions+=4;NFSU2_TR(0x651eb4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B651eb7:{NFSU2_TR(0x651eb7);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B651eb8:{NFSU2_TR(0x651eb8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B651ebb:{NFSU2_TR(0x651ebb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x651ec0ull));
TAIL_STATIC(0x650571u,650);
}
B651ec0:L651ec0:{c.instructions+=1;NFSU2_TR(0x651ec0);
__builtin_memmove((R+0),(R+24),4);
}
B651ec2:L651ec2:{c.instructions+=5;NFSU2_TR(0x651ec2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B651ec3:{NFSU2_TR(0x651ec3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B651ec4:{NFSU2_TR(0x651ec4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B651ec5:{NFSU2_TR(0x651ec5);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B651ec6:{NFSU2_TR(0x651ec6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B651ec9:L651ec9:{c.instructions+=13;NFSU2_TR(0x651ec9);
__builtin_memmove((R+28),(R+28),4);
}
B651ecb:{NFSU2_TR(0x651ecb);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B651ecc:{NFSU2_TR(0x651ecc);
__builtin_memmove((R+20),(R+16),4);
}
B651ece:{NFSU2_TR(0x651ece);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B651ecf:{NFSU2_TR(0x651ecf);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B651ed1:{NFSU2_TR(0x651ed1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B651ed4:{NFSU2_TR(0x651ed4);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B651ed5:{NFSU2_TR(0x651ed5);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B651ed7:{NFSU2_TR(0x651ed7);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B651ed9:{NFSU2_TR(0x651ed9);
u8 U[4];
w4(U+0,u32(0x5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B651edb:{NFSU2_TR(0x651edb);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x20ull))));
__builtin_memmove((R+0),(U+0),4);
}
B651ede:{NFSU2_TR(0x651ede);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+8),(U+0),4);
}
B651edf:{NFSU2_TR(0x651edf);
if(r1(R+518)){{goto L651f3a;}}
}
B651ee1:L651ee1:{c.instructions+=2;NFSU2_TR(0x651ee1);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B651ee5:{NFSU2_TR(0x651ee5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L651f3a;}}
}
B651ee7:L651ee7:{c.instructions+=5;NFSU2_TR(0x651ee7);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((R+0),(U+0),4);
}
B651eea:{NFSU2_TR(0x651eea);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+24),(U+0),4);
}
B651eec:{NFSU2_TR(0x651eec);
w4(R+24,u32(u32(r4(R+24))-u32(u32(0x1ull))));
}
B651eed:{NFSU2_TR(0x651eed);
w4(R+24,u32(u32(r4(R+24))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
}
B651eee:{NFSU2_TR(0x651eee);
if(r1(R+518)){{goto L651f24;}}
}
B651ef0:L651ef0:{c.instructions+=2;NFSU2_TR(0x651ef0);
w4(R+24,u32(u32(r4(R+24))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
}
B651ef1:{NFSU2_TR(0x651ef1);
if(r1(R+518)){{goto L651f20;}}
}
B651ef3:L651ef3:{c.instructions+=2;NFSU2_TR(0x651ef3);
w4(R+24,u32(u32(r4(R+24))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
}
B651ef4:{NFSU2_TR(0x651ef4);
if(r1(R+518)){{goto L651f18;}}
}
B651ef6:L651ef6:{c.instructions+=2;NFSU2_TR(0x651ef6);
w4(R+24,u32(u32(r4(R+24))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
}
B651ef7:{NFSU2_TR(0x651ef7);
if(r1(R+518)){{goto L651f14;}}
}
B651ef9:L651ef9:{c.instructions+=2;NFSU2_TR(0x651ef9);
w4(R+24,u32(u32(r4(R+24))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
}
B651efa:{NFSU2_TR(0x651efa);
if(r1(R+518)){{goto L651f10;}}
}
B651efc:L651efc:{c.instructions+=2;NFSU2_TR(0x651efc);
w4(R+24,u32(u32(r4(R+24))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
}
B651efd:{NFSU2_TR(0x651efd);
if(r1(R+518)){{goto L651f0c;}}
}
B651eff:L651eff:{c.instructions+=2;NFSU2_TR(0x651eff);
w4(R+24,u32(u32(r4(R+24))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
}
B651f00:{NFSU2_TR(0x651f00);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L651f3a;}}
}
B651f02:L651f02:{c.instructions+=1;NFSU2_TR(0x651f02);
u8 U[4];
w4(U+0,u32(0xcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B651f04:L651f04:{c.instructions+=4;NFSU2_TR(0x651f04);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B651f06:{NFSU2_TR(0x651f06);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+8),(U+0),4);
}
B651f07:{NFSU2_TR(0x651f07);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B651f0a:{NFSU2_TR(0x651f0a);
{goto L651f3a;}
}
B651f0c:L651f0c:{c.instructions+=2;NFSU2_TR(0x651f0c);
u8 U[4];
w4(U+0,u32(0xbull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B651f0e:{NFSU2_TR(0x651f0e);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x651f04u);}goto L651f04;}
}
B651f10:L651f10:{c.instructions+=2;NFSU2_TR(0x651f10);
u8 U[4];
w4(U+0,u32(0xaull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B651f12:{NFSU2_TR(0x651f12);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x651f04u);}goto L651f04;}
}
B651f14:L651f14:{c.instructions+=2;NFSU2_TR(0x651f14);
u8 U[4];
w4(U+0,u32(0x9ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B651f16:{NFSU2_TR(0x651f16);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x651f04u);}goto L651f04;}
}
B651f18:L651f18:{c.instructions+=1;NFSU2_TR(0x651f18);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B651f1a:L651f1a:{c.instructions+=3;NFSU2_TR(0x651f1a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B651f1d:{NFSU2_TR(0x651f1d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+8),(U+0),4);
}
B651f1e:{NFSU2_TR(0x651f1e);
{goto L651f3a;}
}
B651f20:L651f20:{c.instructions+=2;NFSU2_TR(0x651f20);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B651f22:{NFSU2_TR(0x651f22);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x651f1au);}goto L651f1a;}
}
B651f24:L651f24:{c.instructions+=6;NFSU2_TR(0x651f24);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B651f27:{NFSU2_TR(0x651f27);
__builtin_memmove((R+8),(R+24),4);
}
B651f29:{NFSU2_TR(0x651f29);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0xbfffffffull))));
}
B651f2f:{NFSU2_TR(0x651f2f);
w4(R+8,u32(u32(r4(R+8))|u32(u32(0x20000000ull))));
}
B651f35:{NFSU2_TR(0x651f35);
u8 U[4];
w4(U+0,u32(u32(u32(0x1dull))&u32(u32(0x1full))));
w4(R+8,shr<u32>(r4(R+8),u64(r4(U+0))));
}
B651f38:{NFSU2_TR(0x651f38);
__builtin_memmove((R+28),(R+24),4);
}
B651f3a:L651f3a:{c.instructions+=7;NFSU2_TR(0x651f3a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B651f3b:{NFSU2_TR(0x651f3b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B651f3c:{NFSU2_TR(0x651f3c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B651f3d:{NFSU2_TR(0x651f3d);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B651f40:{NFSU2_TR(0x651f40);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B651f41:{NFSU2_TR(0x651f41);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B651f42:{NFSU2_TR(0x651f42);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x651f47ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x651db1u);}goto L651db1;}
}
B651f47:L651f47:{c.instructions+=4;NFSU2_TR(0x651f47);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B651f48:{NFSU2_TR(0x651f48);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B651f49:{NFSU2_TR(0x651f49);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B651f4a:{NFSU2_TR(0x651f4a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B651f4d:L651f4d:{c.instructions+=11;NFSU2_TR(0x651f4d);
__builtin_memmove((R+28),(R+28),4);
}
B651f4f:{NFSU2_TR(0x651f4f);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B651f50:{NFSU2_TR(0x651f50);
__builtin_memmove((R+20),(R+16),4);
}
B651f52:{NFSU2_TR(0x651f52);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B651f53:{NFSU2_TR(0x651f53);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B651f54:{NFSU2_TR(0x651f54);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B651f57:{NFSU2_TR(0x651f57);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B651f58:{NFSU2_TR(0x651f58);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B651f5a:{NFSU2_TR(0x651f5a);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B651f5c:{NFSU2_TR(0x651f5c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B651f5f:{NFSU2_TR(0x651f5f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L651f68;}}
}
B651f61:L651f61:{c.instructions+=2;NFSU2_TR(0x651f61);
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
B651f63:{NFSU2_TR(0x651f63);
TAIL_STATIC(0x65202du,652);
}
B651f68:L651f68:{c.instructions+=4;NFSU2_TR(0x651f68);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B651f69:{NFSU2_TR(0x651f69);
u8 U[4];
w4(U+0,u32(0x50ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B651f6b:{NFSU2_TR(0x651f6b);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x10ull))));
}
B651f6e:{NFSU2_TR(0x651f6e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x651f73ull));
TAIL_STATIC(0x645362u,645);
}
B651f73:L651f73:{c.instructions+=2;NFSU2_TR(0x651f73);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B651f75:{NFSU2_TR(0x651f75);
if(r1(R+518)){{goto L651f89;}}
}
B651f77:L651f77:{c.instructions+=8;NFSU2_TR(0x651f77);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B651f78:{NFSU2_TR(0x651f78);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B651f7a:{NFSU2_TR(0x651f7a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B651f7b:{NFSU2_TR(0x651f7b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B651f7c:{NFSU2_TR(0x651f7c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B651f7d:{NFSU2_TR(0x651f7d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B651f7e:{NFSU2_TR(0x651f7e);
__builtin_memmove((R+4),(R+0),4);
}
B651f80:{NFSU2_TR(0x651f80);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x651f85ull));
TAIL_STATIC(0x672d7bu,672);
}
B651f85:L651f85:{c.instructions+=2;NFSU2_TR(0x651f85);
__builtin_memmove((R+24),(R+0),4);
}
B651f87:{NFSU2_TR(0x651f87);
{goto L651f8b;}
}
B651f89:L651f89:{c.instructions+=1;NFSU2_TR(0x651f89);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B651f8b:L651f8b:{c.instructions+=2;NFSU2_TR(0x651f8b);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B651f8d:{NFSU2_TR(0x651f8d);
if(r1(R+518)){TAIL_STATIC(0x65201au,652);}
}
B651f93:L651f93:{c.instructions+=2;NFSU2_TR(0x651f93);
u8 U[4];
w4(U+0,u32(0x24ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B651f95:{NFSU2_TR(0x651f95);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x651f9aull));
TAIL_STATIC(0x645362u,645);
}
B651f9a:L651f9a:{c.instructions+=2;NFSU2_TR(0x651f9a);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B651f9c:{NFSU2_TR(0x651f9c);
if(r1(R+518)){{goto L651fb4;}}
}
B651f9e:L651f9e:{c.instructions+=7;NFSU2_TR(0x651f9e);
u8 U[4];
w4(U+0,u32(0x200ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B651fa3:{NFSU2_TR(0x651fa3);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B651fa5:{NFSU2_TR(0x651fa5);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B651fa7:{NFSU2_TR(0x651fa7);
u8 U[4];
w4(U+0,u32(0xeull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B651fa9:{NFSU2_TR(0x651fa9);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B651fab:{NFSU2_TR(0x651fab);
__builtin_memmove((R+4),(R+0),4);
}
B651fad:{NFSU2_TR(0x651fad);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x651fb2ull));
TAIL_STATIC(0x672a51u,672);
}
B651fb2:L651fb2:{c.instructions+=1;NFSU2_TR(0x651fb2);
{goto L651fb6;}
}
B651fb4:L651fb4:{c.instructions+=1;NFSU2_TR(0x651fb4);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B651fb6:L651fb6:{c.instructions+=3;NFSU2_TR(0x651fb6);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B651fb8:{NFSU2_TR(0x651fb8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B651fbb:{NFSU2_TR(0x651fbb);
if(r1(R+518)){TAIL_STATIC(0x65201au,652);}
}
B651fbd:L651fbd:{c.instructions+=2;NFSU2_TR(0x651fbd);
u8 U[4];
w4(U+0,u32(0x40ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B651fbf:{NFSU2_TR(0x651fbf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x651fc4ull));
TAIL_STATIC(0x645362u,645);
}
B651fc4:L651fc4:{c.instructions+=3;NFSU2_TR(0x651fc4);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B651fc6:{NFSU2_TR(0x651fc6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B651fc9:{NFSU2_TR(0x651fc9);
if(r1(R+518)){{goto L651fee;}}
}
B651fcb:L651fcb:{c.instructions+=3;NFSU2_TR(0x651fcb);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B651fce:{NFSU2_TR(0x651fce);
__builtin_memmove((R+8),(R+28),4);
}
B651fd0:{NFSU2_TR(0x651fd0);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x1ull))));
__builtin_memmove((R+4),(U+0),4);
}
B651fd3:L651fd3:{c.instructions+=4;NFSU2_TR(0x651fd3);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+8))),1);
__builtin_memmove((R+0),(U+0),1);
}
B651fd5:{NFSU2_TR(0x651fd5);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B651fd6:{NFSU2_TR(0x651fd6);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B651fd8:{NFSU2_TR(0x651fd8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x651fd3u);}goto L651fd3;}}
}
B651fda:L651fda:{c.instructions+=8;NFSU2_TR(0x651fda);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+4))));
}
B651fdc:{NFSU2_TR(0x651fdc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B651fdf:{NFSU2_TR(0x651fdf);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B651fe0:{NFSU2_TR(0x651fe0);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B651fe1:{NFSU2_TR(0x651fe1);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B651fe2:{NFSU2_TR(0x651fe2);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B651fe3:{NFSU2_TR(0x651fe3);
u8 U[4];
w4(U+0,u32(0x5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B651fe5:{NFSU2_TR(0x651fe5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x651feaull));
TAIL_STATIC(0x672f32u,672);
}
B651fea:L651fea:{c.instructions+=2;NFSU2_TR(0x651fea);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B651fec:{NFSU2_TR(0x651fec);
{goto L651ff0;}
}
B651fee:L651fee:{c.instructions+=1;NFSU2_TR(0x651fee);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B651ff0:L651ff0:{c.instructions+=3;NFSU2_TR(0x651ff0);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B651ff2:{NFSU2_TR(0x651ff2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B651ff5:{NFSU2_TR(0x651ff5);
if(r1(R+518)){TAIL_STATIC(0x65201au,652);}
}
B651ff7:L651ff7:{c.instructions+=2;NFSU2_TR(0x651ff7);
u8 U[4];
w4(U+0,u32(0x14ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B651ff9:{NFSU2_TR(0x651ff9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x651ffeull));
TAIL_STATIC(0x645362u,645);
}
B651ffe:L651ffe:{c.instructions+=1;NFSU2_TR(0x651ffe);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
TAIL_STATIC(0x652000u,652);
}
XIT:NFSU2_TR_EXIT(0x651,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
