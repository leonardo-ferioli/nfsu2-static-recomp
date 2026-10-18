#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_735(u8* __restrict R,Cpu& c);
u32 body_736(u8* __restrict R,Cpu& c);
u32 body_737(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x738,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x738,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_738(u8* __restrict R,Cpu& c);
u32 page_738(Cpu& c){return body_738(c.regs.data(),c);}
__attribute__((noinline)) u32 body_738(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x738001:goto L738001;
case 0x738002:c.instructions+=1;goto B738002;
case 0x738004:goto L738004;
case 0x73800a:c.instructions+=2;goto B73800a;
case 0x738010:c.instructions+=1;goto B738010;
case 0x738012:goto L738012;
case 0x738013:c.instructions+=2;goto B738013;
case 0x738014:c.instructions+=1;goto B738014;
case 0x738020:goto L738020;
case 0x738021:c.instructions+=9;goto B738021;
case 0x738025:c.instructions+=8;goto B738025;
case 0x738026:c.instructions+=7;goto B738026;
case 0x738029:c.instructions+=6;goto B738029;
case 0x73802c:c.instructions+=5;goto B73802c;
case 0x738032:c.instructions+=4;goto B738032;
case 0x738034:c.instructions+=3;goto B738034;
case 0x738035:c.instructions+=2;goto B738035;
case 0x738037:c.instructions+=1;goto B738037;
case 0x738039:goto L738039;
case 0x73803a:c.instructions+=1;goto B73803a;
case 0x73803f:goto L73803f;
case 0x738042:goto L738042;
case 0x738046:c.instructions+=3;goto B738046;
case 0x73804d:c.instructions+=2;goto B73804d;
case 0x73804e:c.instructions+=1;goto B73804e;
case 0x738053:goto L738053;
case 0x738056:c.instructions+=3;goto B738056;
case 0x738058:c.instructions+=2;goto B738058;
case 0x73805e:c.instructions+=1;goto B73805e;
case 0x738064:goto L738064;
case 0x738068:c.instructions+=7;goto B738068;
case 0x73806e:c.instructions+=6;goto B73806e;
case 0x738074:c.instructions+=5;goto B738074;
case 0x73807a:c.instructions+=4;goto B73807a;
case 0x73807d:c.instructions+=3;goto B73807d;
case 0x73807f:c.instructions+=2;goto B73807f;
case 0x738081:c.instructions+=1;goto B738081;
case 0x738083:goto L738083;
case 0x738087:c.instructions+=7;goto B738087;
case 0x73808d:c.instructions+=6;goto B73808d;
case 0x738090:c.instructions+=5;goto B738090;
case 0x738093:c.instructions+=4;goto B738093;
case 0x738097:c.instructions+=3;goto B738097;
case 0x738098:c.instructions+=2;goto B738098;
case 0x73809a:c.instructions+=1;goto B73809a;
case 0x73809c:goto L73809c;
case 0x7380a3:c.instructions+=4;goto B7380a3;
case 0x7380a7:c.instructions+=3;goto B7380a7;
case 0x7380aa:c.instructions+=2;goto B7380aa;
case 0x7380ac:c.instructions+=1;goto B7380ac;
case 0x7380ae:goto L7380ae;
case 0x7380b1:c.instructions+=3;goto B7380b1;
case 0x7380b7:c.instructions+=2;goto B7380b7;
case 0x7380b9:c.instructions+=1;goto B7380b9;
case 0x7380c0:goto L7380c0;
case 0x7380c4:c.instructions+=12;goto B7380c4;
case 0x7380c8:c.instructions+=11;goto B7380c8;
case 0x7380cb:c.instructions+=10;goto B7380cb;
case 0x7380cd:c.instructions+=9;goto B7380cd;
case 0x7380d0:c.instructions+=8;goto B7380d0;
case 0x7380d4:c.instructions+=7;goto B7380d4;
case 0x7380d8:c.instructions+=6;goto B7380d8;
case 0x7380e1:c.instructions+=5;goto B7380e1;
case 0x7380e5:c.instructions+=4;goto B7380e5;
case 0x7380e8:c.instructions+=3;goto B7380e8;
case 0x7380eb:c.instructions+=2;goto B7380eb;
case 0x7380ec:c.instructions+=1;goto B7380ec;
case 0x7380ee:goto L7380ee;
case 0x7380f4:goto L7380f4;
case 0x7380f5:c.instructions+=3;goto B7380f5;
case 0x7380f6:c.instructions+=2;goto B7380f6;
case 0x7380f7:c.instructions+=1;goto B7380f7;
case 0x738100:goto L738100;
case 0x738104:c.instructions+=4;goto B738104;
case 0x738107:c.instructions+=3;goto B738107;
case 0x73810a:c.instructions+=2;goto B73810a;
case 0x738111:c.instructions+=1;goto B738111;
case 0x738120:goto L738120;
case 0x738121:c.instructions+=5;goto B738121;
case 0x738122:c.instructions+=4;goto B738122;
case 0x738126:c.instructions+=3;goto B738126;
case 0x738128:c.instructions+=2;goto B738128;
case 0x73812b:c.instructions+=1;goto B73812b;
case 0x738131:goto L738131;
case 0x738132:c.instructions+=5;goto B738132;
case 0x738135:c.instructions+=4;goto B738135;
case 0x738138:c.instructions+=3;goto B738138;
case 0x73813e:c.instructions+=2;goto B73813e;
case 0x738140:c.instructions+=1;goto B738140;
case 0x738146:goto L738146;
case 0x73814c:c.instructions+=10;goto B73814c;
case 0x738153:c.instructions+=9;goto B738153;
case 0x738155:c.instructions+=8;goto B738155;
case 0x738156:c.instructions+=7;goto B738156;
case 0x73815c:c.instructions+=6;goto B73815c;
case 0x73815d:c.instructions+=5;goto B73815d;
case 0x738161:c.instructions+=4;goto B738161;
case 0x738162:c.instructions+=3;goto B738162;
case 0x738166:c.instructions+=2;goto B738166;
case 0x738167:c.instructions+=1;goto B738167;
case 0x73816c:goto L73816c;
case 0x738172:c.instructions+=6;goto B738172;
case 0x738178:c.instructions+=5;goto B738178;
case 0x738179:c.instructions+=4;goto B738179;
case 0x73817a:c.instructions+=3;goto B73817a;
case 0x73817e:c.instructions+=2;goto B73817e;
case 0x73817f:c.instructions+=1;goto B73817f;
case 0x738184:goto L738184;
case 0x73818a:c.instructions+=6;goto B73818a;
case 0x738190:c.instructions+=5;goto B738190;
case 0x738194:c.instructions+=4;goto B738194;
case 0x738195:c.instructions+=3;goto B738195;
case 0x738196:c.instructions+=2;goto B738196;
case 0x738197:c.instructions+=1;goto B738197;
case 0x73819c:goto L73819c;
case 0x7381a2:c.instructions+=6;goto B7381a2;
case 0x7381a6:c.instructions+=5;goto B7381a6;
case 0x7381aa:c.instructions+=4;goto B7381aa;
case 0x7381ad:c.instructions+=3;goto B7381ad;
case 0x7381b0:c.instructions+=2;goto B7381b0;
case 0x7381b8:c.instructions+=1;goto B7381b8;
case 0x7381ba:goto L7381ba;
case 0x7381c1:c.instructions+=5;goto B7381c1;
case 0x7381c2:c.instructions+=4;goto B7381c2;
case 0x7381c3:c.instructions+=3;goto B7381c3;
case 0x7381c4:c.instructions+=2;goto B7381c4;
case 0x7381cb:c.instructions+=1;goto B7381cb;
case 0x7381d0:goto L7381d0;
case 0x7381d3:c.instructions+=4;goto B7381d3;
case 0x7381d4:c.instructions+=3;goto B7381d4;
case 0x7381d6:c.instructions+=2;goto B7381d6;
case 0x7381d7:c.instructions+=1;goto B7381d7;
case 0x7381d8:goto L7381d8;
case 0x7381df:c.instructions+=1;goto B7381df;
case 0x7381ea:goto L7381ea;
case 0x7381eb:goto L7381eb;
case 0x7381ec:c.instructions+=1;goto B7381ec;
case 0x7381f1:goto L7381f1;
case 0x7381f4:c.instructions+=4;goto B7381f4;
case 0x7381f5:c.instructions+=3;goto B7381f5;
case 0x7381f7:c.instructions+=2;goto B7381f7;
case 0x7381f8:c.instructions+=1;goto B7381f8;
case 0x738200:goto L738200;
case 0x738201:c.instructions+=36;goto B738201;
case 0x738205:c.instructions+=35;goto B738205;
case 0x738209:c.instructions+=34;goto B738209;
case 0x73820c:c.instructions+=33;goto B73820c;
case 0x73820d:c.instructions+=32;goto B73820d;
case 0x73820e:c.instructions+=31;goto B73820e;
case 0x73820f:c.instructions+=30;goto B73820f;
case 0x738212:c.instructions+=29;goto B738212;
case 0x738214:c.instructions+=28;goto B738214;
case 0x738215:c.instructions+=27;goto B738215;
case 0x738219:c.instructions+=26;goto B738219;
case 0x73821c:c.instructions+=25;goto B73821c;
case 0x73821d:c.instructions+=24;goto B73821d;
case 0x738220:c.instructions+=23;goto B738220;
case 0x738222:c.instructions+=22;goto B738222;
case 0x738225:c.instructions+=21;goto B738225;
case 0x738226:c.instructions+=20;goto B738226;
case 0x73822a:c.instructions+=19;goto B73822a;
case 0x73822d:c.instructions+=18;goto B73822d;
case 0x738231:c.instructions+=17;goto B738231;
case 0x738235:c.instructions+=16;goto B738235;
case 0x738238:c.instructions+=15;goto B738238;
case 0x73823a:c.instructions+=14;goto B73823a;
case 0x73823d:c.instructions+=13;goto B73823d;
case 0x738240:c.instructions+=12;goto B738240;
case 0x738242:c.instructions+=11;goto B738242;
case 0x738246:c.instructions+=10;goto B738246;
case 0x73824a:c.instructions+=9;goto B73824a;
case 0x73824d:c.instructions+=8;goto B73824d;
case 0x73824f:c.instructions+=7;goto B73824f;
case 0x738253:c.instructions+=6;goto B738253;
case 0x73825b:c.instructions+=5;goto B73825b;
case 0x73825f:c.instructions+=4;goto B73825f;
case 0x738261:c.instructions+=3;goto B738261;
case 0x738266:c.instructions+=2;goto B738266;
case 0x738269:c.instructions+=1;goto B738269;
case 0x738270:goto L738270;
case 0x738272:c.instructions+=5;goto B738272;
case 0x738274:c.instructions+=4;goto B738274;
case 0x738276:c.instructions+=3;goto B738276;
case 0x738279:c.instructions+=2;goto B738279;
case 0x73827a:c.instructions+=1;goto B73827a;
case 0x73827c:goto L73827c;
case 0x73827d:c.instructions+=1;goto B73827d;
case 0x73827f:goto L73827f;
case 0x738282:c.instructions+=1;goto B738282;
case 0x738284:goto L738284;
case 0x738286:goto L738286;
case 0x738288:goto L738288;
case 0x73828a:goto L73828a;
case 0x73828d:c.instructions+=4;goto B73828d;
case 0x73828f:c.instructions+=3;goto B73828f;
case 0x738292:c.instructions+=2;goto B738292;
case 0x738295:c.instructions+=1;goto B738295;
case 0x738297:goto L738297;
case 0x738298:c.instructions+=6;goto B738298;
case 0x738299:c.instructions+=5;goto B738299;
case 0x73829c:c.instructions+=4;goto B73829c;
case 0x73829d:c.instructions+=3;goto B73829d;
case 0x73829e:c.instructions+=2;goto B73829e;
case 0x73829f:c.instructions+=1;goto B73829f;
case 0x7382a0:goto L7382a0;
case 0x7382a1:c.instructions+=7;goto B7382a1;
case 0x7382a3:c.instructions+=6;goto B7382a3;
case 0x7382a4:c.instructions+=5;goto B7382a4;
case 0x7382a8:c.instructions+=4;goto B7382a8;
case 0x7382ab:c.instructions+=3;goto B7382ab;
case 0x7382ad:c.instructions+=2;goto B7382ad;
case 0x7382b2:c.instructions+=1;goto B7382b2;
case 0x7382b4:goto L7382b4;
case 0x7382b8:c.instructions+=26;goto B7382b8;
case 0x7382bb:c.instructions+=25;goto B7382bb;
case 0x7382be:c.instructions+=24;goto B7382be;
case 0x7382c1:c.instructions+=23;goto B7382c1;
case 0x7382c2:c.instructions+=22;goto B7382c2;
case 0x7382c6:c.instructions+=21;goto B7382c6;
case 0x7382c7:c.instructions+=20;goto B7382c7;
case 0x7382cb:c.instructions+=19;goto B7382cb;
case 0x7382cf:c.instructions+=18;goto B7382cf;
case 0x7382d2:c.instructions+=17;goto B7382d2;
case 0x7382d3:c.instructions+=16;goto B7382d3;
case 0x7382d6:c.instructions+=15;goto B7382d6;
case 0x7382d8:c.instructions+=14;goto B7382d8;
case 0x7382db:c.instructions+=13;goto B7382db;
case 0x7382de:c.instructions+=12;goto B7382de;
case 0x7382e2:c.instructions+=11;goto B7382e2;
case 0x7382e6:c.instructions+=10;goto B7382e6;
case 0x7382e9:c.instructions+=9;goto B7382e9;
case 0x7382eb:c.instructions+=8;goto B7382eb;
case 0x7382ee:c.instructions+=7;goto B7382ee;
case 0x7382f2:c.instructions+=6;goto B7382f2;
case 0x7382f4:c.instructions+=5;goto B7382f4;
case 0x7382f7:c.instructions+=4;goto B7382f7;
case 0x7382fb:c.instructions+=3;goto B7382fb;
case 0x7382fd:c.instructions+=2;goto B7382fd;
case 0x7382ff:c.instructions+=1;goto B7382ff;
case 0x738301:goto L738301;
case 0x738304:goto L738304;
case 0x738308:c.instructions+=2;goto B738308;
case 0x73830a:c.instructions+=1;goto B73830a;
case 0x73830c:goto L73830c;
case 0x73830f:c.instructions+=3;goto B73830f;
case 0x738313:c.instructions+=2;goto B738313;
case 0x738316:c.instructions+=1;goto B738316;
case 0x738318:goto L738318;
case 0x738319:c.instructions+=3;goto B738319;
case 0x73831c:c.instructions+=2;goto B73831c;
case 0x73831e:c.instructions+=1;goto B73831e;
case 0x738320:goto L738320;
case 0x738321:c.instructions+=5;goto B738321;
case 0x738322:c.instructions+=4;goto B738322;
case 0x738323:c.instructions+=3;goto B738323;
case 0x738328:c.instructions+=2;goto B738328;
case 0x738329:c.instructions+=1;goto B738329;
case 0x73832a:goto L73832a;
case 0x73832b:c.instructions+=5;goto B73832b;
case 0x73832c:c.instructions+=4;goto B73832c;
case 0x73832d:c.instructions+=3;goto B73832d;
case 0x73832f:c.instructions+=2;goto B73832f;
case 0x738330:c.instructions+=1;goto B738330;
case 0x738331:goto L738331;
case 0x738332:c.instructions+=3;goto B738332;
case 0x738334:c.instructions+=2;goto B738334;
case 0x738335:c.instructions+=1;goto B738335;
case 0x738340:goto L738340;
case 0x738346:c.instructions+=16;goto B738346;
case 0x738347:c.instructions+=15;goto B738347;
case 0x738348:c.instructions+=14;goto B738348;
case 0x73834f:c.instructions+=13;goto B73834f;
case 0x738352:c.instructions+=12;goto B738352;
case 0x738353:c.instructions+=11;goto B738353;
case 0x738354:c.instructions+=10;goto B738354;
case 0x738356:c.instructions+=9;goto B738356;
case 0x73835a:c.instructions+=8;goto B73835a;
case 0x73835c:c.instructions+=7;goto B73835c;
case 0x73835d:c.instructions+=6;goto B73835d;
case 0x738361:c.instructions+=5;goto B738361;
case 0x738365:c.instructions+=4;goto B738365;
case 0x738369:c.instructions+=3;goto B738369;
case 0x73836d:c.instructions+=2;goto B73836d;
case 0x738371:c.instructions+=1;goto B738371;
case 0x738376:goto L738376;
case 0x738378:c.instructions+=3;goto B738378;
case 0x73837b:c.instructions+=2;goto B73837b;
case 0x73837d:c.instructions+=1;goto B73837d;
case 0x738383:goto L738383;
case 0x738387:c.instructions+=4;goto B738387;
case 0x738388:c.instructions+=3;goto B738388;
case 0x73838c:c.instructions+=2;goto B73838c;
case 0x73838d:c.instructions+=1;goto B73838d;
case 0x738392:goto L738392;
case 0x738395:c.instructions+=2;goto B738395;
case 0x738397:c.instructions+=1;goto B738397;
case 0x73839d:goto L73839d;
case 0x7383a1:c.instructions+=3;goto B7383a1;
case 0x7383a4:c.instructions+=2;goto B7383a4;
case 0x7383ac:c.instructions+=1;goto B7383ac;
case 0x7383ae:goto L7383ae;
case 0x7383b0:c.instructions+=3;goto B7383b0;
case 0x7383b3:c.instructions+=2;goto B7383b3;
case 0x7383b6:c.instructions+=1;goto B7383b6;
case 0x7383b8:goto L7383b8;
case 0x7383bf:c.instructions+=1;goto B7383bf;
case 0x7383c5:goto L7383c5;
case 0x7383cc:c.instructions+=3;goto B7383cc;
case 0x7383cf:c.instructions+=2;goto B7383cf;
case 0x7383d3:c.instructions+=1;goto B7383d3;
case 0x7383d5:goto L7383d5;
case 0x7383d9:c.instructions+=1;goto B7383d9;
case 0x7383db:goto L7383db;
case 0x7383e3:c.instructions+=1;goto B7383e3;
case 0x7383e5:goto L7383e5;
case 0x7383e9:c.instructions+=2;goto B7383e9;
case 0x7383ea:c.instructions+=1;goto B7383ea;
case 0x7383ef:goto L7383ef;
case 0x7383f2:c.instructions+=1;goto B7383f2;
case 0x7383f6:goto L7383f6;
case 0x7383fa:c.instructions+=6;goto B7383fa;
case 0x7383fb:c.instructions+=5;goto B7383fb;
case 0x7383fc:c.instructions+=4;goto B7383fc;
case 0x738400:c.instructions+=3;goto B738400;
case 0x738401:c.instructions+=2;goto B738401;
case 0x738402:c.instructions+=1;goto B738402;
case 0x738407:goto L738407;
case 0x73840b:c.instructions+=4;goto B73840b;
case 0x73840c:c.instructions+=3;goto B73840c;
case 0x73840d:c.instructions+=2;goto B73840d;
case 0x738411:c.instructions+=1;goto B738411;
case 0x738416:goto L738416;
case 0x73841a:c.instructions+=4;goto B73841a;
case 0x73841d:c.instructions+=3;goto B73841d;
case 0x73841f:c.instructions+=2;goto B73841f;
case 0x738423:c.instructions+=1;goto B738423;
case 0x738425:goto L738425;
case 0x738426:c.instructions+=6;goto B738426;
case 0x738427:c.instructions+=5;goto B738427;
case 0x738428:c.instructions+=4;goto B738428;
case 0x73842b:c.instructions+=3;goto B73842b;
case 0x73842c:c.instructions+=2;goto B73842c;
case 0x738432:c.instructions+=1;goto B738432;
case 0x738433:goto L738433;
case 0x738435:c.instructions+=5;goto B738435;
case 0x738438:c.instructions+=4;goto B738438;
case 0x73843b:c.instructions+=3;goto B73843b;
case 0x73843e:c.instructions+=2;goto B73843e;
case 0x738442:c.instructions+=1;goto B738442;
case 0x738444:goto L738444;
case 0x738445:c.instructions+=2;goto B738445;
case 0x738446:c.instructions+=1;goto B738446;
case 0x73844b:goto L73844b;
case 0x73844e:c.instructions+=1;goto B73844e;
case 0x738452:goto L738452;
case 0x738454:c.instructions+=1;goto B738454;
case 0x738456:goto L738456;
case 0x73845a:c.instructions+=2;goto B73845a;
case 0x73845e:c.instructions+=1;goto B73845e;
case 0x738460:goto L738460;
case 0x738462:c.instructions+=1;goto B738462;
case 0x738468:goto L738468;
case 0x73846d:c.instructions+=2;goto B73846d;
case 0x73846f:c.instructions+=1;goto B73846f;
case 0x738475:goto L738475;
case 0x738477:c.instructions+=1;goto B738477;
case 0x73847d:goto L73847d;
case 0x738482:c.instructions+=4;goto B738482;
case 0x738484:c.instructions+=3;goto B738484;
case 0x738486:c.instructions+=2;goto B738486;
case 0x738489:c.instructions+=1;goto B738489;
case 0x73848e:goto L73848e;
case 0x738492:c.instructions+=4;goto B738492;
case 0x738495:c.instructions+=3;goto B738495;
case 0x738498:c.instructions+=2;goto B738498;
case 0x73849a:c.instructions+=1;goto B73849a;
case 0x7384a0:goto L7384a0;
case 0x7384a7:c.instructions+=4;goto B7384a7;
case 0x7384a8:c.instructions+=3;goto B7384a8;
case 0x7384aa:c.instructions+=2;goto B7384aa;
case 0x7384ac:c.instructions+=1;goto B7384ac;
case 0x7384b1:goto L7384b1;
case 0x7384b4:c.instructions+=2;goto B7384b4;
case 0x7384b6:c.instructions+=1;goto B7384b6;
case 0x7384bc:goto L7384bc;
case 0x7384c0:c.instructions+=6;goto B7384c0;
case 0x7384c4:c.instructions+=5;goto B7384c4;
case 0x7384c5:c.instructions+=4;goto B7384c5;
case 0x7384c6:c.instructions+=3;goto B7384c6;
case 0x7384c7:c.instructions+=2;goto B7384c7;
case 0x7384c8:c.instructions+=1;goto B7384c8;
case 0x7384cd:goto L7384cd;
case 0x7384d0:c.instructions+=2;goto B7384d0;
case 0x7384d2:c.instructions+=1;goto B7384d2;
case 0x7384d8:goto L7384d8;
case 0x7384dc:c.instructions+=2;goto B7384dc;
case 0x7384de:c.instructions+=1;goto B7384de;
case 0x7384e0:goto L7384e0;
case 0x7384e1:c.instructions+=2;goto B7384e1;
case 0x7384e2:c.instructions+=1;goto B7384e2;
case 0x7384e7:goto L7384e7;
case 0x7384ea:c.instructions+=2;goto B7384ea;
case 0x7384ef:c.instructions+=1;goto B7384ef;
case 0x7384f5:goto L7384f5;
case 0x7384fd:c.instructions+=3;goto B7384fd;
case 0x738505:c.instructions+=2;goto B738505;
case 0x73850c:c.instructions+=1;goto B73850c;
case 0x738511:goto L738511;
case 0x738514:c.instructions+=3;goto B738514;
case 0x738517:c.instructions+=2;goto B738517;
case 0x738518:c.instructions+=1;goto B738518;
case 0x73851a:goto L73851a;
case 0x738521:c.instructions+=6;goto B738521;
case 0x738522:c.instructions+=5;goto B738522;
case 0x738529:c.instructions+=4;goto B738529;
case 0x73852a:c.instructions+=3;goto B73852a;
case 0x73852b:c.instructions+=2;goto B73852b;
case 0x73852f:c.instructions+=1;goto B73852f;
case 0x738534:goto L738534;
case 0x738537:c.instructions+=2;goto B738537;
case 0x738539:c.instructions+=1;goto B738539;
case 0x73853b:goto L73853b;
case 0x73853c:c.instructions+=6;goto B73853c;
case 0x738543:c.instructions+=5;goto B738543;
case 0x738544:c.instructions+=4;goto B738544;
case 0x738548:c.instructions+=3;goto B738548;
case 0x738549:c.instructions+=2;goto B738549;
case 0x73854d:c.instructions+=1;goto B73854d;
case 0x738552:goto L738552;
case 0x738554:c.instructions+=3;goto B738554;
case 0x738557:c.instructions+=2;goto B738557;
case 0x738559:c.instructions+=1;goto B738559;
case 0x73855b:goto L73855b;
case 0x738562:c.instructions+=7;goto B738562;
case 0x738566:c.instructions+=6;goto B738566;
case 0x738567:c.instructions+=5;goto B738567;
case 0x738568:c.instructions+=4;goto B738568;
case 0x738569:c.instructions+=3;goto B738569;
case 0x73856b:c.instructions+=2;goto B73856b;
case 0x738572:c.instructions+=1;goto B738572;
case 0x738577:goto L738577;
case 0x73857a:goto L73857a;
case 0x73857e:c.instructions+=4;goto B73857e;
case 0x73857f:c.instructions+=3;goto B73857f;
case 0x738581:c.instructions+=2;goto B738581;
case 0x738585:c.instructions+=1;goto B738585;
case 0x73858b:goto L73858b;
case 0x73858c:c.instructions+=6;goto B73858c;
case 0x73858d:c.instructions+=5;goto B73858d;
case 0x73858f:c.instructions+=4;goto B73858f;
case 0x738590:c.instructions+=3;goto B738590;
case 0x738591:c.instructions+=2;goto B738591;
case 0x738597:c.instructions+=1;goto B738597;
case 0x738598:goto L738598;
case 0x73859a:c.instructions+=6;goto B73859a;
case 0x73859b:c.instructions+=5;goto B73859b;
case 0x73859c:c.instructions+=4;goto B73859c;
case 0x73859d:c.instructions+=3;goto B73859d;
case 0x73859e:c.instructions+=2;goto B73859e;
case 0x7385a4:c.instructions+=1;goto B7385a4;
case 0x7385b0:goto L7385b0;
case 0x7385b4:c.instructions+=6;goto B7385b4;
case 0x7385b7:c.instructions+=5;goto B7385b7;
case 0x7385b8:c.instructions+=4;goto B7385b8;
case 0x7385be:c.instructions+=3;goto B7385be;
case 0x7385c0:c.instructions+=2;goto B7385c0;
case 0x7385c2:c.instructions+=1;goto B7385c2;
case 0x7385c4:goto L7385c4;
case 0x7385c5:c.instructions+=4;goto B7385c5;
case 0x7385c6:c.instructions+=3;goto B7385c6;
case 0x7385c7:c.instructions+=2;goto B7385c7;
case 0x7385c8:c.instructions+=1;goto B7385c8;
case 0x7385cd:goto L7385cd;
case 0x7385cf:c.instructions+=3;goto B7385cf;
case 0x7385d2:c.instructions+=2;goto B7385d2;
case 0x7385d4:c.instructions+=1;goto B7385d4;
case 0x7385d6:goto L7385d6;
case 0x7385db:c.instructions+=2;goto B7385db;
case 0x7385dd:c.instructions+=1;goto B7385dd;
case 0x7385df:goto L7385df;
case 0x7385e1:goto L7385e1;
case 0x7385e2:c.instructions+=2;goto B7385e2;
case 0x7385e3:c.instructions+=1;goto B7385e3;
case 0x7385e9:goto L7385e9;
case 0x7385eb:c.instructions+=3;goto B7385eb;
case 0x7385ee:c.instructions+=2;goto B7385ee;
case 0x7385f0:c.instructions+=1;goto B7385f0;
case 0x7385f2:goto L7385f2;
case 0x7385f3:c.instructions+=1;goto B7385f3;
case 0x7385f8:goto L7385f8;
case 0x7385fb:c.instructions+=1;goto B7385fb;
case 0x7385fd:goto L7385fd;
case 0x7385fe:c.instructions+=2;goto B7385fe;
case 0x738600:c.instructions+=1;goto B738600;
case 0x738602:goto L738602;
case 0x738604:c.instructions+=1;goto B738604;
case 0x738606:goto L738606;
case 0x738607:c.instructions+=3;goto B738607;
case 0x738609:c.instructions+=2;goto B738609;
case 0x73860a:c.instructions+=1;goto B73860a;
case 0x73860b:goto L73860b;
case 0x73860c:c.instructions+=1;goto B73860c;
case 0x73860d:goto L73860d;
case 0x73860f:goto L73860f;
case 0x738611:goto L738611;
case 0x738612:c.instructions+=5;goto B738612;
case 0x738613:c.instructions+=4;goto B738613;
case 0x738614:c.instructions+=3;goto B738614;
case 0x738616:c.instructions+=2;goto B738616;
case 0x738617:c.instructions+=1;goto B738617;
case 0x738620:goto L738620;
case 0x738624:c.instructions+=2;goto B738624;
case 0x738629:c.instructions+=1;goto B738629;
case 0x738630:goto L738630;
case 0x738634:c.instructions+=4;goto B738634;
case 0x738638:c.instructions+=3;goto B738638;
case 0x738639:c.instructions+=2;goto B738639;
case 0x73863d:c.instructions+=1;goto B73863d;
case 0x738642:goto L738642;
case 0x738645:c.instructions+=2;goto B738645;
case 0x738647:c.instructions+=1;goto B738647;
case 0x738649:goto L738649;
case 0x73864a:c.instructions+=5;goto B73864a;
case 0x73864b:c.instructions+=4;goto B73864b;
case 0x73864f:c.instructions+=3;goto B73864f;
case 0x738656:c.instructions+=2;goto B738656;
case 0x738657:c.instructions+=1;goto B738657;
case 0x73865c:goto L73865c;
case 0x73865e:c.instructions+=3;goto B73865e;
case 0x738661:c.instructions+=2;goto B738661;
case 0x738663:c.instructions+=1;goto B738663;
case 0x738665:goto L738665;
case 0x738669:c.instructions+=7;goto B738669;
case 0x73866c:c.instructions+=6;goto B73866c;
case 0x738670:c.instructions+=5;goto B738670;
case 0x738672:c.instructions+=4;goto B738672;
case 0x738673:c.instructions+=3;goto B738673;
case 0x738676:c.instructions+=2;goto B738676;
case 0x738678:c.instructions+=1;goto B738678;
case 0x73867b:goto L73867b;
case 0x73867d:goto L73867d;
case 0x73867f:c.instructions+=2;goto B73867f;
case 0x738682:c.instructions+=1;goto B738682;
case 0x738683:goto L738683;
case 0x738685:goto L738685;
case 0x73868a:goto L73868a;
case 0x73868d:c.instructions+=3;goto B73868d;
case 0x73868f:c.instructions+=2;goto B73868f;
case 0x738690:c.instructions+=1;goto B738690;
case 0x738692:goto L738692;
case 0x738693:c.instructions+=1;goto B738693;
case 0x738698:goto L738698;
case 0x73869b:goto L73869b;
case 0x73869c:c.instructions+=1;goto B73869c;
case 0x73869d:goto L73869d;
case 0x7386a0:goto L7386a0;
case 0x7386a1:c.instructions+=3;goto B7386a1;
case 0x7386a5:c.instructions+=2;goto B7386a5;
case 0x7386a7:c.instructions+=1;goto B7386a7;
case 0x7386ad:goto L7386ad;
case 0x7386b0:c.instructions+=2;goto B7386b0;
case 0x7386b2:c.instructions+=1;goto B7386b2;
case 0x7386b8:goto L7386b8;
case 0x7386bb:c.instructions+=2;goto B7386bb;
case 0x7386bd:c.instructions+=1;goto B7386bd;
case 0x7386c3:goto L7386c3;
case 0x7386c6:c.instructions+=9;goto B7386c6;
case 0x7386ca:c.instructions+=8;goto B7386ca;
case 0x7386cb:c.instructions+=7;goto B7386cb;
case 0x7386cd:c.instructions+=6;goto B7386cd;
case 0x7386d0:c.instructions+=5;goto B7386d0;
case 0x7386d1:c.instructions+=4;goto B7386d1;
case 0x7386d3:c.instructions+=3;goto B7386d3;
case 0x7386d5:c.instructions+=2;goto B7386d5;
case 0x7386d7:c.instructions+=1;goto B7386d7;
case 0x7386d9:goto L7386d9;
case 0x7386dc:c.instructions+=3;goto B7386dc;
case 0x7386dd:c.instructions+=2;goto B7386dd;
case 0x7386e1:c.instructions+=1;goto B7386e1;
case 0x7386e4:goto L7386e4;
case 0x7386e7:c.instructions+=6;goto B7386e7;
case 0x7386ea:c.instructions+=5;goto B7386ea;
case 0x7386ec:c.instructions+=4;goto B7386ec;
case 0x7386ee:c.instructions+=3;goto B7386ee;
case 0x7386ef:c.instructions+=2;goto B7386ef;
case 0x7386f1:c.instructions+=1;goto B7386f1;
case 0x7386f6:goto L7386f6;
case 0x7386fa:c.instructions+=10;goto B7386fa;
case 0x738701:c.instructions+=9;goto B738701;
case 0x738704:c.instructions+=8;goto B738704;
case 0x738708:c.instructions+=7;goto B738708;
case 0x73870b:c.instructions+=6;goto B73870b;
case 0x73870e:c.instructions+=5;goto B73870e;
case 0x738712:c.instructions+=4;goto B738712;
case 0x738713:c.instructions+=3;goto B738713;
case 0x738714:c.instructions+=2;goto B738714;
case 0x738715:c.instructions+=1;goto B738715;
case 0x73871a:goto L73871a;
case 0x73871d:c.instructions+=4;goto B73871d;
case 0x738720:c.instructions+=3;goto B738720;
case 0x738721:c.instructions+=2;goto B738721;
case 0x738722:c.instructions+=1;goto B738722;
case 0x738727:goto L738727;
case 0x73872b:c.instructions+=8;goto B73872b;
case 0x73872f:c.instructions+=7;goto B73872f;
case 0x738732:c.instructions+=6;goto B738732;
case 0x738733:c.instructions+=5;goto B738733;
case 0x738736:c.instructions+=4;goto B738736;
case 0x738739:c.instructions+=3;goto B738739;
case 0x73873b:c.instructions+=2;goto B73873b;
case 0x73873f:c.instructions+=1;goto B73873f;
case 0x738741:goto L738741;
case 0x738742:goto L738742;
case 0x738743:c.instructions+=2;goto B738743;
case 0x738747:c.instructions+=1;goto B738747;
case 0x738748:goto L738748;
case 0x738749:c.instructions+=1;goto B738749;
case 0x738750:goto L738750;
case 0x738756:c.instructions+=5;goto B738756;
case 0x738757:c.instructions+=4;goto B738757;
case 0x73875d:c.instructions+=3;goto B73875d;
case 0x738760:c.instructions+=2;goto B738760;
case 0x738762:c.instructions+=1;goto B738762;
case 0x738764:goto L738764;
case 0x738766:c.instructions+=1;goto B738766;
case 0x738768:goto L738768;
case 0x73876a:c.instructions+=1;goto B73876a;
case 0x73876c:goto L73876c;
case 0x738771:goto L738771;
case 0x738777:c.instructions+=29;goto B738777;
case 0x738779:c.instructions+=28;goto B738779;
case 0x73877e:c.instructions+=27;goto B73877e;
case 0x738780:c.instructions+=26;goto B738780;
case 0x738786:c.instructions+=25;goto B738786;
case 0x738788:c.instructions+=24;goto B738788;
case 0x73878a:c.instructions+=23;goto B73878a;
case 0x73878c:c.instructions+=22;goto B73878c;
case 0x73878e:c.instructions+=21;goto B73878e;
case 0x738793:c.instructions+=20;goto B738793;
case 0x738795:c.instructions+=19;goto B738795;
case 0x738797:c.instructions+=18;goto B738797;
case 0x73879d:c.instructions+=17;goto B73879d;
case 0x73879f:c.instructions+=16;goto B73879f;
case 0x7387a1:c.instructions+=15;goto B7387a1;
case 0x7387a3:c.instructions+=14;goto B7387a3;
case 0x7387a8:c.instructions+=13;goto B7387a8;
case 0x7387aa:c.instructions+=12;goto B7387aa;
case 0x7387ac:c.instructions+=11;goto B7387ac;
case 0x7387ae:c.instructions+=10;goto B7387ae;
case 0x7387b0:c.instructions+=9;goto B7387b0;
case 0x7387b5:c.instructions+=8;goto B7387b5;
case 0x7387b8:c.instructions+=7;goto B7387b8;
case 0x7387bd:c.instructions+=6;goto B7387bd;
case 0x7387bf:c.instructions+=5;goto B7387bf;
case 0x7387c0:c.instructions+=4;goto B7387c0;
case 0x7387c6:c.instructions+=3;goto B7387c6;
case 0x7387cb:c.instructions+=2;goto B7387cb;
case 0x7387cc:c.instructions+=1;goto B7387cc;
case 0x7387ce:goto L7387ce;
case 0x7387d4:c.instructions+=1;goto B7387d4;
case 0x7387d6:goto L7387d6;
case 0x7387dc:c.instructions+=1;goto B7387dc;
case 0x7387de:goto L7387de;
case 0x7387e4:c.instructions+=1;goto B7387e4;
case 0x7387e6:goto L7387e6;
case 0x7387ec:c.instructions+=1;goto B7387ec;
case 0x7387ee:goto L7387ee;
case 0x7387ef:c.instructions+=1;goto B7387ef;
case 0x7387f4:goto L7387f4;
case 0x738800:goto L738800;
case 0x738801:c.instructions+=7;goto B738801;
case 0x738802:c.instructions+=6;goto B738802;
case 0x738804:c.instructions+=5;goto B738804;
case 0x738805:c.instructions+=4;goto B738805;
case 0x738808:c.instructions+=3;goto B738808;
case 0x73880b:c.instructions+=2;goto B73880b;
case 0x73880c:c.instructions+=1;goto B73880c;
case 0x73880e:goto L73880e;
case 0x738813:goto L738813;
case 0x738819:c.instructions+=4;goto B738819;
case 0x73881b:c.instructions+=3;goto B73881b;
case 0x73881d:c.instructions+=2;goto B73881d;
case 0x73881f:c.instructions+=1;goto B73881f;
case 0x738820:goto L738820;
case 0x738822:c.instructions+=1;goto B738822;
case 0x738824:goto L738824;
case 0x73882c:c.instructions+=2;goto B73882c;
case 0x738831:c.instructions+=1;goto B738831;
case 0x738833:goto L738833;
case 0x738838:c.instructions+=3;goto B738838;
case 0x738839:c.instructions+=2;goto B738839;
case 0x738841:c.instructions+=1;goto B738841;
case 0x738843:goto L738843;
case 0x738846:goto L738846;
case 0x73884b:goto L73884b;
case 0x73884c:c.instructions+=1;goto B73884c;
case 0x73884e:goto L73884e;
case 0x738851:goto L738851;
case 0x738852:c.instructions+=2;goto B738852;
case 0x738855:c.instructions+=1;goto B738855;
case 0x738857:goto L738857;
case 0x738859:c.instructions+=1;goto B738859;
case 0x73885b:goto L73885b;
case 0x73885c:c.instructions+=4;goto B73885c;
case 0x73885d:c.instructions+=3;goto B73885d;
case 0x73885e:c.instructions+=2;goto B73885e;
case 0x73885f:c.instructions+=1;goto B73885f;
case 0x738860:goto L738860;
case 0x738863:c.instructions+=16;goto B738863;
case 0x738864:c.instructions+=15;goto B738864;
case 0x738866:c.instructions+=14;goto B738866;
case 0x738867:c.instructions+=13;goto B738867;
case 0x738868:c.instructions+=12;goto B738868;
case 0x73886c:c.instructions+=11;goto B73886c;
case 0x738870:c.instructions+=10;goto B738870;
case 0x738874:c.instructions+=9;goto B738874;
case 0x738876:c.instructions+=8;goto B738876;
case 0x738877:c.instructions+=7;goto B738877;
case 0x738879:c.instructions+=6;goto B738879;
case 0x73887b:c.instructions+=5;goto B73887b;
case 0x73887d:c.instructions+=4;goto B73887d;
case 0x738880:c.instructions+=3;goto B738880;
case 0x738883:c.instructions+=2;goto B738883;
case 0x738884:c.instructions+=1;goto B738884;
case 0x738886:goto L738886;
case 0x73888b:goto L73888b;
case 0x738890:goto L738890;
case 0x738892:c.instructions+=7;goto B738892;
case 0x738896:c.instructions+=6;goto B738896;
case 0x738899:c.instructions+=5;goto B738899;
case 0x73889c:c.instructions+=4;goto B73889c;
case 0x73889f:c.instructions+=3;goto B73889f;
case 0x7388a2:c.instructions+=2;goto B7388a2;
case 0x7388a4:c.instructions+=1;goto B7388a4;
case 0x7388a6:goto L7388a6;
case 0x7388a9:c.instructions+=6;goto B7388a9;
case 0x7388aa:c.instructions+=5;goto B7388aa;
case 0x7388ab:c.instructions+=4;goto B7388ab;
case 0x7388ac:c.instructions+=3;goto B7388ac;
case 0x7388ad:c.instructions+=2;goto B7388ad;
case 0x7388b0:c.instructions+=1;goto B7388b0;
case 0x7388b1:goto L7388b1;
case 0x7388b5:c.instructions+=4;goto B7388b5;
case 0x7388b6:c.instructions+=3;goto B7388b6;
case 0x7388b7:c.instructions+=2;goto B7388b7;
case 0x7388b9:c.instructions+=1;goto B7388b9;
case 0x7388be:goto L7388be;
case 0x7388c1:c.instructions+=2;goto B7388c1;
case 0x7388c4:c.instructions+=1;goto B7388c4;
case 0x7388c6:goto L7388c6;
case 0x7388ce:c.instructions+=1;goto B7388ce;
case 0x7388d0:goto L7388d0;
case 0x7388d2:c.instructions+=1;goto B7388d2;
case 0x7388d4:goto L7388d4;
case 0x7388d6:goto L7388d6;
case 0x7388d8:goto L7388d8;
case 0x7388dc:c.instructions+=4;goto B7388dc;
case 0x7388dd:c.instructions+=3;goto B7388dd;
case 0x7388e0:c.instructions+=2;goto B7388e0;
case 0x7388e4:c.instructions+=1;goto B7388e4;
case 0x7388e6:goto L7388e6;
case 0x7388ea:c.instructions+=2;goto B7388ea;
case 0x7388ec:c.instructions+=1;goto B7388ec;
case 0x7388ee:goto L7388ee;
case 0x7388f3:goto L7388f3;
case 0x7388f5:c.instructions+=4;goto B7388f5;
case 0x7388f8:c.instructions+=3;goto B7388f8;
case 0x7388fd:c.instructions+=2;goto B7388fd;
case 0x738900:c.instructions+=1;goto B738900;
case 0x738902:goto L738902;
case 0x738907:c.instructions+=4;goto B738907;
case 0x738908:c.instructions+=3;goto B738908;
case 0x73890b:c.instructions+=2;goto B73890b;
case 0x738910:c.instructions+=1;goto B738910;
case 0x738912:goto L738912;
case 0x738914:c.instructions+=1;goto B738914;
case 0x738919:goto L738919;
case 0x73891e:c.instructions+=9;goto B73891e;
case 0x738926:c.instructions+=8;goto B738926;
case 0x738927:c.instructions+=7;goto B738927;
case 0x73892f:c.instructions+=6;goto B73892f;
case 0x738932:c.instructions+=5;goto B738932;
case 0x738933:c.instructions+=4;goto B738933;
case 0x738934:c.instructions+=3;goto B738934;
case 0x738935:c.instructions+=2;goto B738935;
case 0x738938:c.instructions+=1;goto B738938;
case 0x738940:goto L738940;
case 0x738945:c.instructions+=2;goto B738945;
case 0x73894a:c.instructions+=1;goto B73894a;
case 0x738950:goto L738950;
case 0x738954:c.instructions+=4;goto B738954;
case 0x738957:c.instructions+=3;goto B738957;
case 0x73895a:c.instructions+=2;goto B73895a;
case 0x73895f:c.instructions+=1;goto B73895f;
case 0x738961:goto L738961;
case 0x738965:c.instructions+=16;goto B738965;
case 0x73896b:c.instructions+=15;goto B73896b;
case 0x738971:c.instructions+=14;goto B738971;
case 0x738976:c.instructions+=13;goto B738976;
case 0x73897b:c.instructions+=12;goto B73897b;
case 0x738980:c.instructions+=11;goto B738980;
case 0x738985:c.instructions+=10;goto B738985;
case 0x73898a:c.instructions+=9;goto B73898a;
case 0x73898f:c.instructions+=8;goto B73898f;
case 0x738994:c.instructions+=7;goto B738994;
case 0x738999:c.instructions+=6;goto B738999;
case 0x73899e:c.instructions+=5;goto B73899e;
case 0x7389a3:c.instructions+=4;goto B7389a3;
case 0x7389a9:c.instructions+=3;goto B7389a9;
case 0x7389b3:c.instructions+=2;goto B7389b3;
case 0x7389b8:c.instructions+=1;goto B7389b8;
case 0x7389ba:goto L7389ba;
case 0x7389bb:c.instructions+=2;goto B7389bb;
case 0x7389be:c.instructions+=1;goto B7389be;
case 0x7389bf:goto L7389bf;
case 0x7389c4:c.instructions+=3;goto B7389c4;
case 0x7389c6:c.instructions+=2;goto B7389c6;
case 0x7389c8:c.instructions+=1;goto B7389c8;
case 0x7389ca:goto L7389ca;
case 0x7389cb:c.instructions+=2;goto B7389cb;
case 0x7389cd:c.instructions+=1;goto B7389cd;
case 0x7389d0:goto L7389d0;
case 0x7389d5:goto L7389d5;
case 0x7389d6:c.instructions+=1;goto B7389d6;
case 0x7389d8:goto L7389d8;
case 0x7389d9:goto L7389d9;
case 0x7389e0:goto L7389e0;
case 0x7389e6:c.instructions+=3;goto B7389e6;
case 0x7389e8:c.instructions+=2;goto B7389e8;
case 0x7389ea:c.instructions+=1;goto B7389ea;
case 0x7389ec:goto L7389ec;
case 0x7389ee:goto L7389ee;
case 0x7389f0:goto L7389f0;
case 0x7389f4:c.instructions+=7;goto B7389f4;
case 0x7389f8:c.instructions+=6;goto B7389f8;
case 0x7389f9:c.instructions+=5;goto B7389f9;
case 0x7389fd:c.instructions+=4;goto B7389fd;
case 0x7389ff:c.instructions+=3;goto B7389ff;
case 0x738a01:c.instructions+=2;goto B738a01;
case 0x738a02:c.instructions+=1;goto B738a02;
case 0x738a04:goto L738a04;
case 0x738a06:c.instructions+=5;goto B738a06;
case 0x738a09:c.instructions+=4;goto B738a09;
case 0x738a0c:c.instructions+=3;goto B738a0c;
case 0x738a0f:c.instructions+=2;goto B738a0f;
case 0x738a12:c.instructions+=1;goto B738a12;
case 0x738a16:goto L738a16;
case 0x738a20:goto L738a20;
case 0x738a24:c.instructions+=6;goto B738a24;
case 0x738a28:c.instructions+=5;goto B738a28;
case 0x738a29:c.instructions+=4;goto B738a29;
case 0x738a2d:c.instructions+=3;goto B738a2d;
case 0x738a2f:c.instructions+=2;goto B738a2f;
case 0x738a31:c.instructions+=1;goto B738a31;
case 0x738a33:goto L738a33;
case 0x738a35:c.instructions+=22;goto B738a35;
case 0x738a38:c.instructions+=21;goto B738a38;
case 0x738a39:c.instructions+=20;goto B738a39;
case 0x738a3a:c.instructions+=19;goto B738a3a;
case 0x738a3b:c.instructions+=18;goto B738a3b;
case 0x738a3e:c.instructions+=17;goto B738a3e;
case 0x738a41:c.instructions+=16;goto B738a41;
case 0x738a43:c.instructions+=15;goto B738a43;
case 0x738a47:c.instructions+=14;goto B738a47;
case 0x738a49:c.instructions+=13;goto B738a49;
case 0x738a4c:c.instructions+=12;goto B738a4c;
case 0x738a51:c.instructions+=11;goto B738a51;
case 0x738a55:c.instructions+=10;goto B738a55;
case 0x738a58:c.instructions+=9;goto B738a58;
case 0x738a5b:c.instructions+=8;goto B738a5b;
case 0x738a5d:c.instructions+=7;goto B738a5d;
case 0x738a5e:c.instructions+=6;goto B738a5e;
case 0x738a61:c.instructions+=5;goto B738a61;
case 0x738a65:c.instructions+=4;goto B738a65;
case 0x738a68:c.instructions+=3;goto B738a68;
case 0x738a6b:c.instructions+=2;goto B738a6b;
case 0x738a6d:c.instructions+=1;goto B738a6d;
case 0x738a6f:goto L738a6f;
case 0x738a73:c.instructions+=1;goto B738a73;
case 0x738a75:goto L738a75;
case 0x738a79:c.instructions+=3;goto B738a79;
case 0x738a7e:c.instructions+=2;goto B738a7e;
case 0x738a81:c.instructions+=1;goto B738a81;
case 0x738a83:goto L738a83;
case 0x738a86:c.instructions+=9;goto B738a86;
case 0x738a8a:c.instructions+=8;goto B738a8a;
case 0x738a8c:c.instructions+=7;goto B738a8c;
case 0x738a8d:c.instructions+=6;goto B738a8d;
case 0x738a8f:c.instructions+=5;goto B738a8f;
case 0x738a93:c.instructions+=4;goto B738a93;
case 0x738a94:c.instructions+=3;goto B738a94;
case 0x738a96:c.instructions+=2;goto B738a96;
case 0x738a9b:c.instructions+=1;goto B738a9b;
case 0x738a9c:goto L738a9c;
case 0x738a9d:c.instructions+=1;goto B738a9d;
case 0x738aa0:goto L738aa0;
case 0x738aa1:c.instructions+=10;goto B738aa1;
case 0x738aa2:c.instructions+=9;goto B738aa2;
case 0x738aa6:c.instructions+=8;goto B738aa6;
case 0x738aa7:c.instructions+=7;goto B738aa7;
case 0x738aab:c.instructions+=6;goto B738aab;
case 0x738aad:c.instructions+=5;goto B738aad;
case 0x738ab0:c.instructions+=4;goto B738ab0;
case 0x738ab2:c.instructions+=3;goto B738ab2;
case 0x738ab4:c.instructions+=2;goto B738ab4;
case 0x738ab8:c.instructions+=1;goto B738ab8;
case 0x738aba:goto L738aba;
case 0x738abb:c.instructions+=1;goto B738abb;
case 0x738ac0:goto L738ac0;
case 0x738ac5:c.instructions+=4;goto B738ac5;
case 0x738aca:c.instructions+=3;goto B738aca;
case 0x738ace:c.instructions+=2;goto B738ace;
case 0x738ad2:c.instructions+=1;goto B738ad2;
case 0x738ad4:goto L738ad4;
case 0x738ad8:c.instructions+=3;goto B738ad8;
case 0x738ada:c.instructions+=2;goto B738ada;
case 0x738adc:c.instructions+=1;goto B738adc;
case 0x738ade:goto L738ade;
case 0x738ae1:goto L738ae1;
case 0x738ae4:c.instructions+=2;goto B738ae4;
case 0x738ae8:c.instructions+=1;goto B738ae8;
case 0x738aea:goto L738aea;
case 0x738aeb:c.instructions+=3;goto B738aeb;
case 0x738aee:c.instructions+=2;goto B738aee;
case 0x738af0:c.instructions+=1;goto B738af0;
case 0x738af2:goto L738af2;
case 0x738af4:goto L738af4;
case 0x738afc:goto L738afc;
case 0x738afd:c.instructions+=2;goto B738afd;
case 0x738aff:c.instructions+=1;goto B738aff;
case 0x738b01:goto L738b01;
case 0x738b05:c.instructions+=5;goto B738b05;
case 0x738b06:c.instructions+=4;goto B738b06;
case 0x738b07:c.instructions+=3;goto B738b07;
case 0x738b08:c.instructions+=2;goto B738b08;
case 0x738b09:c.instructions+=1;goto B738b09;
case 0x738b0a:goto L738b0a;
case 0x738b0f:c.instructions+=1;goto B738b0f;
case 0x738b10:goto L738b10;
case 0x738b11:c.instructions+=3;goto B738b11;
case 0x738b12:c.instructions+=2;goto B738b12;
case 0x738b13:c.instructions+=1;goto B738b13;
case 0x738b20:goto L738b20;
case 0x738b24:c.instructions+=8;goto B738b24;
case 0x738b28:c.instructions+=7;goto B738b28;
case 0x738b2c:c.instructions+=6;goto B738b2c;
case 0x738b30:c.instructions+=5;goto B738b30;
case 0x738b33:c.instructions+=4;goto B738b33;
case 0x738b37:c.instructions+=3;goto B738b37;
case 0x738b39:c.instructions+=2;goto B738b39;
case 0x738b3d:c.instructions+=1;goto B738b3d;
case 0x738b40:goto L738b40;
case 0x738b45:c.instructions+=3;goto B738b45;
case 0x738b48:c.instructions+=2;goto B738b48;
case 0x738b4a:c.instructions+=1;goto B738b4a;
case 0x738b50:goto L738b50;
case 0x738b51:c.instructions+=6;goto B738b51;
case 0x738b55:c.instructions+=5;goto B738b55;
case 0x738b56:c.instructions+=4;goto B738b56;
case 0x738b5a:c.instructions+=3;goto B738b5a;
case 0x738b5b:c.instructions+=2;goto B738b5b;
case 0x738b5c:c.instructions+=1;goto B738b5c;
case 0x738b61:goto L738b61;
case 0x738b65:c.instructions+=12;goto B738b65;
case 0x738b69:c.instructions+=11;goto B738b69;
case 0x738b6d:c.instructions+=10;goto B738b6d;
case 0x738b71:c.instructions+=9;goto B738b71;
case 0x738b76:c.instructions+=8;goto B738b76;
case 0x738b7a:c.instructions+=7;goto B738b7a;
case 0x738b7d:c.instructions+=6;goto B738b7d;
case 0x738b81:c.instructions+=5;goto B738b81;
case 0x738b84:c.instructions+=4;goto B738b84;
case 0x738b86:c.instructions+=3;goto B738b86;
case 0x738b89:c.instructions+=2;goto B738b89;
case 0x738b8d:c.instructions+=1;goto B738b8d;
case 0x738b8f:goto L738b8f;
case 0x738b90:c.instructions+=4;goto B738b90;
case 0x738b93:c.instructions+=3;goto B738b93;
case 0x738b97:c.instructions+=2;goto B738b97;
case 0x738b98:c.instructions+=1;goto B738b98;
case 0x738ba0:goto L738ba0;
case 0x738ba3:c.instructions+=4;goto B738ba3;
case 0x738ba5:c.instructions+=3;goto B738ba5;
case 0x738ba9:c.instructions+=2;goto B738ba9;
case 0x738bad:c.instructions+=1;goto B738bad;
case 0x738baf:goto L738baf;
case 0x738bb2:c.instructions+=1;goto B738bb2;
case 0x738bb4:goto L738bb4;
case 0x738bb8:c.instructions+=3;goto B738bb8;
case 0x738bb9:c.instructions+=2;goto B738bb9;
case 0x738bba:c.instructions+=1;goto B738bba;
case 0x738bbf:goto L738bbf;
case 0x738bc2:c.instructions+=2;goto B738bc2;
case 0x738bc4:c.instructions+=1;goto B738bc4;
case 0x738bc6:goto L738bc6;
case 0x738bca:c.instructions+=7;goto B738bca;
case 0x738bce:c.instructions+=6;goto B738bce;
case 0x738bd1:c.instructions+=5;goto B738bd1;
case 0x738bd2:c.instructions+=4;goto B738bd2;
case 0x738bd3:c.instructions+=3;goto B738bd3;
case 0x738bd4:c.instructions+=2;goto B738bd4;
case 0x738bd5:c.instructions+=1;goto B738bd5;
case 0x738bdb:goto L738bdb;
case 0x738bde:goto L738bde;
case 0x738be2:c.instructions+=4;goto B738be2;
case 0x738be5:c.instructions+=3;goto B738be5;
case 0x738be6:c.instructions+=2;goto B738be6;
case 0x738bea:c.instructions+=1;goto B738bea;
case 0x738bec:goto L738bec;
case 0x738bed:c.instructions+=1;goto B738bed;
case 0x738bee:goto L738bee;
case 0x738bef:c.instructions+=1;goto B738bef;
case 0x738bf0:goto L738bf0;
case 0x738bf3:c.instructions+=1;goto B738bf3;
case 0x738c00:goto L738c00;
case 0x738c03:c.instructions+=12;goto B738c03;
case 0x738c07:c.instructions+=11;goto B738c07;
case 0x738c08:c.instructions+=10;goto B738c08;
case 0x738c09:c.instructions+=9;goto B738c09;
case 0x738c0a:c.instructions+=8;goto B738c0a;
case 0x738c0b:c.instructions+=7;goto B738c0b;
case 0x738c0f:c.instructions+=6;goto B738c0f;
case 0x738c10:c.instructions+=5;goto B738c10;
case 0x738c12:c.instructions+=4;goto B738c12;
case 0x738c13:c.instructions+=3;goto B738c13;
case 0x738c17:c.instructions+=2;goto B738c17;
case 0x738c1b:c.instructions+=1;goto B738c1b;
case 0x738c20:goto L738c20;
case 0x738c24:c.instructions+=10;goto B738c24;
case 0x738c28:c.instructions+=9;goto B738c28;
case 0x738c2c:c.instructions+=8;goto B738c2c;
case 0x738c30:c.instructions+=7;goto B738c30;
case 0x738c33:c.instructions+=6;goto B738c33;
case 0x738c36:c.instructions+=5;goto B738c36;
case 0x738c38:c.instructions+=4;goto B738c38;
case 0x738c3c:c.instructions+=3;goto B738c3c;
case 0x738c40:c.instructions+=2;goto B738c40;
case 0x738c44:c.instructions+=1;goto B738c44;
case 0x738c46:goto L738c46;
case 0x738c4b:c.instructions+=2;goto B738c4b;
case 0x738c4f:c.instructions+=1;goto B738c4f;
case 0x738c50:goto L738c50;
case 0x738c54:c.instructions+=4;goto B738c54;
case 0x738c57:c.instructions+=3;goto B738c57;
case 0x738c59:c.instructions+=2;goto B738c59;
case 0x738c5b:c.instructions+=1;goto B738c5b;
case 0x738c5d:goto L738c5d;
case 0x738c61:c.instructions+=7;goto B738c61;
case 0x738c64:c.instructions+=6;goto B738c64;
case 0x738c66:c.instructions+=5;goto B738c66;
case 0x738c6b:c.instructions+=4;goto B738c6b;
case 0x738c6d:c.instructions+=3;goto B738c6d;
case 0x738c73:c.instructions+=2;goto B738c73;
case 0x738c75:c.instructions+=1;goto B738c75;
case 0x738c77:goto L738c77;
case 0x738c7b:c.instructions+=6;goto B738c7b;
case 0x738c7c:c.instructions+=5;goto B738c7c;
case 0x738c7d:c.instructions+=4;goto B738c7d;
case 0x738c7e:c.instructions+=3;goto B738c7e;
case 0x738c82:c.instructions+=2;goto B738c82;
case 0x738c83:c.instructions+=1;goto B738c83;
case 0x738c89:goto L738c89;
case 0x738c8c:c.instructions+=2;goto B738c8c;
case 0x738c8e:c.instructions+=1;goto B738c8e;
case 0x738c90:goto L738c90;
case 0x738c92:goto L738c92;
case 0x738c94:c.instructions+=1;goto B738c94;
case 0x738c96:goto L738c96;
case 0x738c9a:goto L738c9a;
case 0x738c9e:c.instructions+=3;goto B738c9e;
case 0x738ca2:c.instructions+=2;goto B738ca2;
case 0x738ca4:c.instructions+=1;goto B738ca4;
case 0x738ca8:goto L738ca8;
case 0x738cac:c.instructions+=5;goto B738cac;
case 0x738caf:c.instructions+=4;goto B738caf;
case 0x738cb0:c.instructions+=3;goto B738cb0;
case 0x738cb1:c.instructions+=2;goto B738cb1;
case 0x738cb5:c.instructions+=1;goto B738cb5;
case 0x738cb7:goto L738cb7;
case 0x738cbb:goto L738cbb;
case 0x738cbd:c.instructions+=1;goto B738cbd;
case 0x738cbf:goto L738cbf;
case 0x738cc4:c.instructions+=2;goto B738cc4;
case 0x738cc8:c.instructions+=1;goto B738cc8;
case 0x738cd0:goto L738cd0;
case 0x738cd4:c.instructions+=4;goto B738cd4;
case 0x738cd7:c.instructions+=3;goto B738cd7;
case 0x738cd9:c.instructions+=2;goto B738cd9;
case 0x738cdb:c.instructions+=1;goto B738cdb;
case 0x738cdd:goto L738cdd;
case 0x738ce2:c.instructions+=5;goto B738ce2;
case 0x738ce7:c.instructions+=4;goto B738ce7;
case 0x738ce9:c.instructions+=3;goto B738ce9;
case 0x738ceb:c.instructions+=2;goto B738ceb;
case 0x738ced:c.instructions+=1;goto B738ced;
case 0x738cef:goto L738cef;
case 0x738cf3:c.instructions+=6;goto B738cf3;
case 0x738cf4:c.instructions+=5;goto B738cf4;
case 0x738cf5:c.instructions+=4;goto B738cf5;
case 0x738cf6:c.instructions+=3;goto B738cf6;
case 0x738cfa:c.instructions+=2;goto B738cfa;
case 0x738cfb:c.instructions+=1;goto B738cfb;
case 0x738cfd:goto L738cfd;
case 0x738d00:c.instructions+=2;goto B738d00;
case 0x738d02:c.instructions+=1;goto B738d02;
case 0x738d04:goto L738d04;
case 0x738d06:goto L738d06;
case 0x738d08:c.instructions+=1;goto B738d08;
case 0x738d0a:goto L738d0a;
case 0x738d0e:goto L738d0e;
case 0x738d12:goto L738d12;
case 0x738d16:c.instructions+=5;goto B738d16;
case 0x738d19:c.instructions+=4;goto B738d19;
case 0x738d1a:c.instructions+=3;goto B738d1a;
case 0x738d1b:c.instructions+=2;goto B738d1b;
case 0x738d1f:c.instructions+=1;goto B738d1f;
case 0x738d21:goto L738d21;
case 0x738d25:c.instructions+=9;goto B738d25;
case 0x738d29:c.instructions+=8;goto B738d29;
case 0x738d2a:c.instructions+=7;goto B738d2a;
case 0x738d2b:c.instructions+=6;goto B738d2b;
case 0x738d2c:c.instructions+=5;goto B738d2c;
case 0x738d2e:c.instructions+=4;goto B738d2e;
case 0x738d32:c.instructions+=3;goto B738d32;
case 0x738d33:c.instructions+=2;goto B738d33;
case 0x738d36:c.instructions+=1;goto B738d36;
case 0x738d37:goto L738d37;
case 0x738d3b:c.instructions+=9;goto B738d3b;
case 0x738d3f:c.instructions+=8;goto B738d3f;
case 0x738d40:c.instructions+=7;goto B738d40;
case 0x738d41:c.instructions+=6;goto B738d41;
case 0x738d42:c.instructions+=5;goto B738d42;
case 0x738d44:c.instructions+=4;goto B738d44;
case 0x738d48:c.instructions+=3;goto B738d48;
case 0x738d49:c.instructions+=2;goto B738d49;
case 0x738d4c:c.instructions+=1;goto B738d4c;
case 0x738d50:goto L738d50;
case 0x738d51:c.instructions+=25;goto B738d51;
case 0x738d55:c.instructions+=24;goto B738d55;
case 0x738d56:c.instructions+=23;goto B738d56;
case 0x738d5c:c.instructions+=22;goto B738d5c;
case 0x738d62:c.instructions+=21;goto B738d62;
case 0x738d66:c.instructions+=20;goto B738d66;
case 0x738d6a:c.instructions+=19;goto B738d6a;
case 0x738d6d:c.instructions+=18;goto B738d6d;
case 0x738d6e:c.instructions+=17;goto B738d6e;
case 0x738d71:c.instructions+=16;goto B738d71;
case 0x738d73:c.instructions+=15;goto B738d73;
case 0x738d77:c.instructions+=14;goto B738d77;
case 0x738d7a:c.instructions+=13;goto B738d7a;
case 0x738d7c:c.instructions+=12;goto B738d7c;
case 0x738d7f:c.instructions+=11;goto B738d7f;
case 0x738d81:c.instructions+=10;goto B738d81;
case 0x738d86:c.instructions+=9;goto B738d86;
case 0x738d8a:c.instructions+=8;goto B738d8a;
case 0x738d8d:c.instructions+=7;goto B738d8d;
case 0x738d90:c.instructions+=6;goto B738d90;
case 0x738d92:c.instructions+=5;goto B738d92;
case 0x738d96:c.instructions+=4;goto B738d96;
case 0x738d98:c.instructions+=3;goto B738d98;
case 0x738d9b:c.instructions+=2;goto B738d9b;
case 0x738d9d:c.instructions+=1;goto B738d9d;
case 0x738d9f:goto L738d9f;
case 0x738da1:c.instructions+=1;goto B738da1;
case 0x738da3:goto L738da3;
case 0x738da8:c.instructions+=2;goto B738da8;
case 0x738daa:c.instructions+=1;goto B738daa;
case 0x738db0:goto L738db0;
case 0x738db4:c.instructions+=9;goto B738db4;
case 0x738db6:c.instructions+=8;goto B738db6;
case 0x738db8:c.instructions+=7;goto B738db8;
case 0x738dbb:c.instructions+=6;goto B738dbb;
case 0x738dbd:c.instructions+=5;goto B738dbd;
case 0x738dc0:c.instructions+=4;goto B738dc0;
case 0x738dc2:c.instructions+=3;goto B738dc2;
case 0x738dc3:c.instructions+=2;goto B738dc3;
case 0x738dc4:c.instructions+=1;goto B738dc4;
case 0x738dc6:goto L738dc6;
case 0x738dc7:c.instructions+=2;goto B738dc7;
case 0x738dc8:c.instructions+=1;goto B738dc8;
case 0x738dd0:goto L738dd0;
case 0x738dd4:c.instructions+=9;goto B738dd4;
case 0x738dd8:c.instructions+=8;goto B738dd8;
case 0x738ddb:c.instructions+=7;goto B738ddb;
case 0x738ddc:c.instructions+=6;goto B738ddc;
case 0x738ddd:c.instructions+=5;goto B738ddd;
case 0x738dde:c.instructions+=4;goto B738dde;
case 0x738ddf:c.instructions+=3;goto B738ddf;
case 0x738de3:c.instructions+=2;goto B738de3;
case 0x738de7:c.instructions+=1;goto B738de7;
case 0x738dec:goto L738dec;
case 0x738df0:c.instructions+=16;goto B738df0;
case 0x738df4:c.instructions+=15;goto B738df4;
case 0x738df8:c.instructions+=14;goto B738df8;
case 0x738dfc:c.instructions+=13;goto B738dfc;
case 0x738dfe:c.instructions+=12;goto B738dfe;
case 0x738e00:c.instructions+=11;goto B738e00;
case 0x738e02:c.instructions+=10;goto B738e02;
case 0x738e04:c.instructions+=9;goto B738e04;
case 0x738e07:c.instructions+=8;goto B738e07;
case 0x738e09:c.instructions+=7;goto B738e09;
case 0x738e0b:c.instructions+=6;goto B738e0b;
case 0x738e0d:c.instructions+=5;goto B738e0d;
case 0x738e0e:c.instructions+=4;goto B738e0e;
case 0x738e0f:c.instructions+=3;goto B738e0f;
case 0x738e10:c.instructions+=2;goto B738e10;
case 0x738e13:c.instructions+=1;goto B738e13;
default:missing_instruction(c.pc);}
B738001:L738001:{c.instructions+=2;NFSU2_TR(0x738001);
w4(R+24,u32(u32(r4(R+24))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
}
B738002:{NFSU2_TR(0x738002);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x737ff0u,737);}
}
B738004:L738004:{c.instructions+=3;NFSU2_TR(0x738004);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0xa0ull))));
}
B73800a:{NFSU2_TR(0x73800a);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
w1(R+512,u8((r4(U+6))<(u32(0x8b568cull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x8b568cull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x8b568cull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B738010:{NFSU2_TR(0x738010);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x737fd0u,737);}
}
B738012:L738012:{c.instructions+=3;NFSU2_TR(0x738012);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B738013:{NFSU2_TR(0x738013);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B738014:{NFSU2_TR(0x738014);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B738020:L738020:{c.instructions+=10;NFSU2_TR(0x738020);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B738021:{NFSU2_TR(0x738021);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B738025:{NFSU2_TR(0x738025);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B738026:{NFSU2_TR(0x738026);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+24),(U+4),4);
}
B738029:{NFSU2_TR(0x738029);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w4(R+24,shl<u32>(r4(R+24),u64(r4(U+0))));
}
B73802c:{NFSU2_TR(0x73802c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8b5194ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B738032:{NFSU2_TR(0x738032);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B738034:{NFSU2_TR(0x738034);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B738035:{NFSU2_TR(0x738035);
__builtin_memmove((R+28),(R+4),4);
}
B738037:{NFSU2_TR(0x738037);
if(r1(R+518)){{goto L738042;}}
}
B738039:L738039:{c.instructions+=2;NFSU2_TR(0x738039);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73803a:{NFSU2_TR(0x73803a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x73803full));
TAIL_STATIC(0x7360a0u,736);
}
B73803f:L73803f:{c.instructions+=1;NFSU2_TR(0x73803f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B738042:L738042:{c.instructions+=4;NFSU2_TR(0x738042);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xbull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(s32(s8(r1(U+4)))));
}
B738046:{NFSU2_TR(0x738046);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x4ull))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B73804d:{NFSU2_TR(0x73804d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73804e:{NFSU2_TR(0x73804e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x738053ull));
TAIL_STATIC(0x736060u,736);
}
B738053:L738053:{c.instructions+=4;NFSU2_TR(0x738053);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B738056:{NFSU2_TR(0x738056);
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
B738058:{NFSU2_TR(0x738058);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8b5194ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B73805e:{NFSU2_TR(0x73805e);
if(r1(R+518)){{goto L7380f4;}}
}
B738064:L738064:{c.instructions+=8;NFSU2_TR(0x738064);
u8 U[5];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B738068:{NFSU2_TR(0x738068);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8b5188ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B73806e:{NFSU2_TR(0x73806e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8b518cull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B738074:{NFSU2_TR(0x738074);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8b5190ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B73807a:{NFSU2_TR(0x73807a);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xbull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B73807d:{NFSU2_TR(0x73807d);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B73807f:{NFSU2_TR(0x73807f);
u8 U[1];
w1(R+523,u8(0x0ull));
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+519,u8(s8(r1(U+0))<s8(u8(0x0ull))));
}
B738081:{NFSU2_TR(0x738081);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L73809c;}}
}
B738083:L738083:{c.instructions+=8;NFSU2_TR(0x738083);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B738087:{NFSU2_TR(0x738087);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8b5194ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B73808d:{NFSU2_TR(0x73808d);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B738090:{NFSU2_TR(0x738090);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+8),4);
s4(u32(r4(U+4)),r4(U+8));
}
B738093:{NFSU2_TR(0x738093);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xbull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(s32(s8(r1(U+4)))));
}
B738097:{NFSU2_TR(0x738097);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B738098:{NFSU2_TR(0x738098);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B73809a:{NFSU2_TR(0x73809a);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x738083u);}goto L738083;}}
}
B73809c:L73809c:{c.instructions+=5;NFSU2_TR(0x73809c);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8b5191ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B7380a3:{NFSU2_TR(0x7380a3);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+8,u32(r1(U+4)));
}
B7380a7:{NFSU2_TR(0x7380a7);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+8,shr<u32>(r4(R+8),u64(r4(U+0))));
}
B7380aa:{NFSU2_TR(0x7380aa);
u8 U[10];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(U+6,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B7380ac:{NFSU2_TR(0x7380ac);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L7380ee;}}
}
B7380ae:L7380ae:{c.instructions+=4;NFSU2_TR(0x7380ae);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x6ull))));
__builtin_memmove((R+0),(U+0),4);
}
B7380b1:{NFSU2_TR(0x7380b1);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8b5198ull))));
__builtin_memmove((R+4),(U+0),4);
}
B7380b7:{NFSU2_TR(0x7380b7);
__builtin_memmove((R+28),(R+8),4);
}
B7380b9:{NFSU2_TR(0x7380b9);
__builtin_memmove((R+16),(R+16),4);
}
B7380c0:L7380c0:{c.instructions+=13;NFSU2_TR(0x7380c0);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffffeull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+20),(U+4),2);
}
B7380c4:{NFSU2_TR(0x7380c4);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+20),2);
s2(u32(r4(U+0)),r2(U+4));
}
B7380c8:{NFSU2_TR(0x7380c8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffffaull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B7380cb:{NFSU2_TR(0x7380cb);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
s4(u32(r4(R+4)),r4(U+0));
}
B7380cd:{NFSU2_TR(0x7380cd);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+0))),2);
__builtin_memmove((R+20),(U+0),2);
}
B7380d0:{NFSU2_TR(0x7380d0);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x6ull))));
__builtin_memmove((U+4),(R+20),2);
s2(u32(r4(U+0)),r2(U+4));
}
B7380d4:{NFSU2_TR(0x7380d4);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+20,u32(r1(U+4)));
}
B7380d8:{NFSU2_TR(0x7380d8);
u8 U[13];
w4(U+0,u32(u32(u32(0x92ull))+u32(r4(R+12))));
w4(U+4,u32(u32(r4(R+20))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
w2(R+20,u16(r1(U+12)));
}
B7380e1:{NFSU2_TR(0x7380e1);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+20),2);
s2(u32(r4(U+0)),r2(U+4));
}
B7380e5:{NFSU2_TR(0x7380e5);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
}
B7380e8:{NFSU2_TR(0x7380e8);
w1(R+512,carry<u32>(r4(R+4),u32(0xcull)));
w4(R+4,u32(u32(r4(R+4))+u32(u32(0xcull))));
}
B7380eb:{NFSU2_TR(0x7380eb);
u8 U[6];
w1(R+523,sborrow<u32>(r4(R+28),u32(0x1ull)));
w4(R+28,u32(u32(r4(R+28))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+28))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+28))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+28))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B7380ec:{NFSU2_TR(0x7380ec);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7380c0u);}goto L7380c0;}}
}
B7380ee:L7380ee:{c.instructions+=1;NFSU2_TR(0x7380ee);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8b5192ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B7380f4:L7380f4:{c.instructions+=4;NFSU2_TR(0x7380f4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B7380f5:{NFSU2_TR(0x7380f5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B7380f6:{NFSU2_TR(0x7380f6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B7380f7:{NFSU2_TR(0x7380f7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B738100:L738100:{c.instructions+=5;NFSU2_TR(0x738100);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B738104:{NFSU2_TR(0x738104);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B738107:{NFSU2_TR(0x738107);
u8 U[45];
w4(U+37,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
__builtin_memmove((U+41),(R+0),4);
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+37))));
w1(U+24,u8((r4(U+37))==(u32(0x0ull))));
w4(U+25,u32(u32(r4(U+37))-u32(u32(0x1ull))));
w4(U+29,shl<u32>(r4(U+41),u64(r4(U+25))));
w1(U+33,u8(s32(r4(U+29))<s32(u32(0x0ull))));
__builtin_memmove((U+0),(U+24),1);
w1(U+1,u8(u32(r1(U+0))*u32(r1(R+512))));
w1(U+2,u8(!(r1(U+24))));
__builtin_memmove((U+3),(U+2),1);
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+33))));
w1(R+512,u8(u32(r1(U+1))|u32(r1(U+4))));
w1(U+34,u8((r4(U+37))==(u32(0x1ull))));
w1(U+35,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(U+36,u8(u32(r1(R+512))^u32(r1(U+35))));
__builtin_memmove((U+0),(U+34),1);
w1(U+1,u8(u32(r1(U+0))*u32(r1(U+36))));
w1(U+2,u8(!(r1(U+34))));
__builtin_memmove((U+3),(U+2),1);
w1(U+4,u8(u32(r1(U+3))*u32(r1(R+523))));
w1(R+523,u8(u32(r1(U+1))|u32(r1(U+4))));
w1(U+5,u8((r4(U+37))!=(u32(0x0ull))));
w1(U+6,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(U+7,u8(!(r1(U+5))));
w1(U+8,u8(u32(r1(U+7))&u32(r1(R+519))));
w1(U+9,u8(u32(r1(U+5))&u32(r1(U+6))));
w1(R+519,u8(u32(r1(U+8))|u32(r1(U+9))));
w1(U+10,u8((r4(R+0))==(u32(0x0ull))));
w1(U+11,u8(!(r1(U+5))));
w1(U+12,u8(u32(r1(U+11))&u32(r1(R+518))));
w1(U+13,u8(u32(r1(U+5))&u32(r1(U+10))));
w1(R+518,u8(u32(r1(U+12))|u32(r1(U+13))));
w4(U+14,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+18,u8(__builtin_popcountll(u64(r4(U+14)))));
w1(U+19,u8(u32(r1(U+18))&u32(u8(0x1ull))));
w1(U+20,u8((r1(U+19))==(u8(0x0ull))));
w1(U+21,u8(!(r1(U+5))));
w1(U+22,u8(u32(r1(U+21))&u32(r1(R+514))));
w1(U+23,u8(u32(r1(U+5))&u32(r1(U+20))));
w1(R+514,u8(u32(r1(U+22))|u32(r1(U+23))));
}
B73810a:{NFSU2_TR(0x73810a);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8b5191ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B738111:{NFSU2_TR(0x738111);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B738120:L738120:{c.instructions+=6;NFSU2_TR(0x738120);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B738121:{NFSU2_TR(0x738121);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B738122:{NFSU2_TR(0x738122);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B738126:{NFSU2_TR(0x738126);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B738128:{NFSU2_TR(0x738128);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w1(R+512,u8((r4(U+0))<(u32(0x8ull))));
}
B73812b:{NFSU2_TR(0x73812b);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L7381eb;}}
}
B738131:L738131:{c.instructions+=6;NFSU2_TR(0x738131);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B738132:{NFSU2_TR(0x738132);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((R+24),(U+4),4);
}
B738135:{NFSU2_TR(0x738135);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w4(R+24,shl<u32>(r4(R+24),u64(r4(U+0))));
}
B738138:{NFSU2_TR(0x738138);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8b5191ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B73813e:{NFSU2_TR(0x73813e);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B738140:{NFSU2_TR(0x738140);
if(r1(R+518)){{goto L7381ea;}}
}
B738146:L738146:{c.instructions+=11;NFSU2_TR(0x738146);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8b5194ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B73814c:{NFSU2_TR(0x73814c);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8b5190ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+8,u32(r1(U+4)));
}
B738153:{NFSU2_TR(0x738153);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B738155:{NFSU2_TR(0x738155);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B738156:{NFSU2_TR(0x738156);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8b5188ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B73815c:{NFSU2_TR(0x73815c);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73815d:{NFSU2_TR(0x73815d);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B738161:{NFSU2_TR(0x738161);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B738162:{NFSU2_TR(0x738162);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B738166:{NFSU2_TR(0x738166);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B738167:{NFSU2_TR(0x738167);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x73816cull));
{goto L738b40;}
}
B73816c:L73816c:{c.instructions+=7;NFSU2_TR(0x73816c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8b518cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B738172:{NFSU2_TR(0x738172);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8b5188ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B738178:{NFSU2_TR(0x738178);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B738179:{NFSU2_TR(0x738179);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73817a:{NFSU2_TR(0x73817a);
u8 U[4];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B73817e:{NFSU2_TR(0x73817e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73817f:{NFSU2_TR(0x73817f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x738184ull));
TAIL_STATIC(0x737bc0u,737);
}
B738184:L738184:{c.instructions+=7;NFSU2_TR(0x738184);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8b518cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B73818a:{NFSU2_TR(0x73818a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8b5188ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B738190:{NFSU2_TR(0x738190);
u8 U[4];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B738194:{NFSU2_TR(0x738194);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B738195:{NFSU2_TR(0x738195);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B738196:{NFSU2_TR(0x738196);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B738197:{NFSU2_TR(0x738197);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x73819cull));
TAIL_STATIC(0x737cf0u,737);
}
B73819c:L73819c:{c.instructions+=7;NFSU2_TR(0x73819c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8b518cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B7381a2:{NFSU2_TR(0x7381a2);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+12,u32(r1(U+4)));
}
B7381a6:{NFSU2_TR(0x7381a6);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7381aa:{NFSU2_TR(0x7381aa);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x28ull))));
}
B7381ad:{NFSU2_TR(0x7381ad);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+12,shr<u32>(r4(R+12),u64(r4(U+0))));
}
B7381b0:{NFSU2_TR(0x7381b0);
u8 U[14];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x8ull))));
w4(U+4,u32(u32(u32(0x8b4f88ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),2);
__builtin_memmove((U+10),(U+8),2);
w2(U+12,u16(u32(r2(R+0))-u32(r2(U+10))));
w1(R+518,u8((r2(U+12))==(u16(0x0ull))));
}
B7381b8:{NFSU2_TR(0x7381b8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L7381d8;}}
}
B7381ba:L7381ba:{c.instructions+=6;NFSU2_TR(0x7381ba);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x8ull))));
w4(U+4,u32(u32(u32(0x8b4f8cull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B7381c1:{NFSU2_TR(0x7381c1);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B7381c2:{NFSU2_TR(0x7381c2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B7381c3:{NFSU2_TR(0x7381c3);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7381c4:{NFSU2_TR(0x7381c4);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x8ull))));
w4(U+4,u32(u32(u32(0x8b4f8cull))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+0),4);
s4(u32(r4(U+4)),r4(U+8));
}
B7381cb:{NFSU2_TR(0x7381cb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7381d0ull));
TAIL_STATIC(0x737f40u,737);
}
B7381d0:L7381d0:{c.instructions+=5;NFSU2_TR(0x7381d0);
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
B7381d3:{NFSU2_TR(0x7381d3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B7381d4:{NFSU2_TR(0x7381d4);
__builtin_memmove((R+0),(R+12),4);
}
B7381d6:{NFSU2_TR(0x7381d6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B7381d7:{NFSU2_TR(0x7381d7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7381d8:L7381d8:{c.instructions+=2;NFSU2_TR(0x7381d8);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x8ull))));
w4(U+4,u32(u32(u32(0x8b4f88ull))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+0),4);
s4(u32(r4(U+4)),r4(U+8));
}
B7381df:{NFSU2_TR(0x7381df);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x8ull))));
w4(U+4,u32(u32(u32(0x8b4f8cull))+u32(r4(U+0))));
w4(U+8,u32(0x1ull));
s4(u32(r4(U+4)),r4(U+8));
}
B7381ea:L7381ea:{c.instructions+=1;NFSU2_TR(0x7381ea);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B7381eb:L7381eb:{c.instructions+=2;NFSU2_TR(0x7381eb);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7381ec:{NFSU2_TR(0x7381ec);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7381f1ull));
TAIL_STATIC(0x737f40u,737);
}
B7381f1:L7381f1:{c.instructions+=5;NFSU2_TR(0x7381f1);
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
B7381f4:{NFSU2_TR(0x7381f4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B7381f5:{NFSU2_TR(0x7381f5);
__builtin_memmove((R+0),(R+12),4);
}
B7381f7:{NFSU2_TR(0x7381f7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B7381f8:{NFSU2_TR(0x7381f8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B738200:L738200:{c.instructions+=37;NFSU2_TR(0x738200);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B738201:{NFSU2_TR(0x738201);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B738205:{NFSU2_TR(0x738205);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B738209:{NFSU2_TR(0x738209);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+0))));
}
B73820c:{NFSU2_TR(0x73820c);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B73820d:{NFSU2_TR(0x73820d);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73820e:{NFSU2_TR(0x73820e);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73820f:{NFSU2_TR(0x73820f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B738212:{NFSU2_TR(0x738212);
__builtin_memmove((R+20),(R+0),4);
}
B738214:{NFSU2_TR(0x738214);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B738215:{NFSU2_TR(0x738215);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x7ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+24,u32(r1(U+4)));
}
B738219:{NFSU2_TR(0x738219);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7ull))));
__builtin_memmove((R+0),(U+0),4);
}
B73821c:{NFSU2_TR(0x73821c);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B73821d:{NFSU2_TR(0x73821d);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0x7ull))));
}
B738220:{NFSU2_TR(0x738220);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+8))));
}
B738222:{NFSU2_TR(0x738222);
u8 U[4];
w4(U+0,u32(u32(u32(0x3ull))&u32(u32(0x1full))));
w4(R+0,sar<u32>(r4(R+0),u64(r4(U+0))));
}
B738225:{NFSU2_TR(0x738225);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B738226:{NFSU2_TR(0x738226);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+28,u32(r1(U+4)));
}
B73822a:{NFSU2_TR(0x73822a);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(r4(R+28)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B73822d:{NFSU2_TR(0x73822d);
u8 U[12];
w4(U+0,u32(u32(u32(0x3ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+8),(U+8),4);
}
B738231:{NFSU2_TR(0x738231);
u8 U[12];
w4(U+0,u32(u32(u32(0x3ull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B738235:{NFSU2_TR(0x738235);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfffffffcull))));
}
B738238:{NFSU2_TR(0x738238);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+4))));
}
B73823a:{NFSU2_TR(0x73823a);
w4(R+20,u32(u32(r4(R+20))&u32(u32(0xfffffffcull))));
}
B73823d:{NFSU2_TR(0x73823d);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0xfffffffcull))));
}
B738240:{NFSU2_TR(0x738240);
w4(R+20,u32(u32(r4(R+20))+u32(r4(R+8))));
}
B738242:{NFSU2_TR(0x738242);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B738246:{NFSU2_TR(0x738246);
u8 U[12];
w4(U+0,u32(u32(u32(0x3ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x2ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B73824a:{NFSU2_TR(0x73824a);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0xfffffffcull))));
}
B73824d:{NFSU2_TR(0x73824d);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+20))));
}
B73824f:{NFSU2_TR(0x73824f);
u8 U[16];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+28),(U+12),4);
}
B738253:{NFSU2_TR(0x738253);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B73825b:{NFSU2_TR(0x73825b);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B73825f:{NFSU2_TR(0x73825f);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B738261:{NFSU2_TR(0x738261);
w4(R+12,u32(0x1ull));
}
B738266:{NFSU2_TR(0x738266);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x4ull))));
}
B738269:{NFSU2_TR(0x738269);
__builtin_memmove((R+16),(R+16),4);
}
B738270:L738270:{c.instructions+=6;NFSU2_TR(0x738270);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+24),(U+0),4);
}
B738272:{NFSU2_TR(0x738272);
__builtin_memmove((R+0),(R+28),4);
}
B738274:{NFSU2_TR(0x738274);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r1(U+0))));
}
B738276:{NFSU2_TR(0x738276);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x3ull))));
}
B738279:{NFSU2_TR(0x738279);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B73827a:{NFSU2_TR(0x73827a);
if(r1(R+518)){{goto L738284;}}
}
B73827c:L73827c:{c.instructions+=2;NFSU2_TR(0x73827c);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B73827d:{NFSU2_TR(0x73827d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L73828a;}}
}
B73827f:L73827f:{c.instructions+=2;NFSU2_TR(0x73827f);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B738282:{NFSU2_TR(0x738282);
{goto L738286;}
}
B738284:L738284:{c.instructions+=1;NFSU2_TR(0x738284);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B738286:L738286:{c.instructions+=1;NFSU2_TR(0x738286);
if(r1(R+518)){{goto L73828a;}}
}
B738288:L738288:{c.instructions+=1;NFSU2_TR(0x738288);
w4(R+20,u32(u32(r4(R+20))|u32(r4(R+12))));
}
B73828a:L73828a:{c.instructions+=5;NFSU2_TR(0x73828a);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x2ull))));
}
B73828d:{NFSU2_TR(0x73828d);
w4(R+12,shl<u32>(r4(R+12),u64(u32(0x1ull))));
}
B73828f:{NFSU2_TR(0x73828f);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x4ull))));
}
B738292:{NFSU2_TR(0x738292);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
w1(R+512,u8((r4(U+6))<(u32(0x20ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x20ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x20ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B738295:{NFSU2_TR(0x738295);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x738270u);}goto L738270;}}
}
B738297:L738297:{c.instructions+=7;NFSU2_TR(0x738297);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B738298:{NFSU2_TR(0x738298);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B738299:{NFSU2_TR(0x738299);
__builtin_memmove((R+0),(R+20),2);
}
B73829c:{NFSU2_TR(0x73829c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B73829d:{NFSU2_TR(0x73829d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B73829e:{NFSU2_TR(0x73829e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B73829f:{NFSU2_TR(0x73829f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7382a0:L7382a0:{c.instructions+=8;NFSU2_TR(0x7382a0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7382a1:{NFSU2_TR(0x7382a1);
__builtin_memmove((R+24),(R+4),4);
}
B7382a3:{NFSU2_TR(0x7382a3);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7382a4:{NFSU2_TR(0x7382a4);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+28,u32(r1(U+4)));
}
B7382a8:{NFSU2_TR(0x7382a8);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+28,shr<u32>(r4(R+28),u64(r4(U+0))));
}
B7382ab:{NFSU2_TR(0x7382ab);
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
B7382ad:{NFSU2_TR(0x7382ad);
w4(R+4,u32(0x1ull));
}
B7382b2:{NFSU2_TR(0x7382b2);
if(r1(R+518)){{goto L738331;}}
}
B7382b4:L7382b4:{c.instructions+=27;NFSU2_TR(0x7382b4);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(r1(U+4)));
}
B7382b8:{NFSU2_TR(0x7382b8);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B7382bb:{NFSU2_TR(0x7382bb);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x3ull))));
}
B7382be:{NFSU2_TR(0x7382be);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0xfffffffcull))));
}
B7382c1:{NFSU2_TR(0x7382c1);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7382c2:{NFSU2_TR(0x7382c2);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+12,u32(r1(U+4)));
}
B7382c6:{NFSU2_TR(0x7382c6);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7382c7:{NFSU2_TR(0x7382c7);
u8 U[12];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+20),(U+8),4);
}
B7382cb:{NFSU2_TR(0x7382cb);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(r1(U+4)));
}
B7382cf:{NFSU2_TR(0x7382cf);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x7ull))));
__builtin_memmove((R+0),(U+0),4);
}
B7382d2:{NFSU2_TR(0x7382d2);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B7382d3:{NFSU2_TR(0x7382d3);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0x7ull))));
}
B7382d6:{NFSU2_TR(0x7382d6);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+8))));
}
B7382d8:{NFSU2_TR(0x7382d8);
u8 U[4];
w4(U+0,u32(u32(u32(0x3ull))&u32(u32(0x1full))));
w4(R+0,sar<u32>(r4(R+0),u64(r4(U+0))));
}
B7382db:{NFSU2_TR(0x7382db);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(r4(R+12)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B7382de:{NFSU2_TR(0x7382de);
u8 U[12];
w4(U+0,u32(u32(u32(0x3ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+8),(U+8),4);
}
B7382e2:{NFSU2_TR(0x7382e2);
u8 U[12];
w4(U+0,u32(u32(u32(0x3ull))+u32(r4(R+12))));
w4(U+4,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B7382e6:{NFSU2_TR(0x7382e6);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfffffffcull))));
}
B7382e9:{NFSU2_TR(0x7382e9);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+24))));
}
B7382eb:{NFSU2_TR(0x7382eb);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0xfffffffcull))));
}
B7382ee:{NFSU2_TR(0x7382ee);
u8 U[12];
w4(U+0,u32(u32(u32(0x3ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B7382f2:{NFSU2_TR(0x7382f2);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+8))));
}
B7382f4:{NFSU2_TR(0x7382f4);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0xfffffffcull))));
}
B7382f7:{NFSU2_TR(0x7382f7);
u8 U[12];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B7382fb:{NFSU2_TR(0x7382fb);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B7382fd:{NFSU2_TR(0x7382fd);
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
B7382ff:{NFSU2_TR(0x7382ff);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L738320;}}
}
B738301:L738301:{c.instructions+=1;NFSU2_TR(0x738301);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1ull))));
__builtin_memmove((R+8),(U+0),4);
}
B738304:L738304:{c.instructions+=3;NFSU2_TR(0x738304);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+20))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B738308:{NFSU2_TR(0x738308);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B73830a:{NFSU2_TR(0x73830a);
if(r1(R+518)){{goto L738318;}}
}
B73830c:L73830c:{c.instructions+=4;NFSU2_TR(0x73830c);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+8))),1);
w4(R+24,u32(r1(U+0)));
}
B73830f:{NFSU2_TR(0x73830f);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B738313:{NFSU2_TR(0x738313);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
w4(U+12,u32(u32(r4(U+8))&u32(r4(R+4))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B738316:{NFSU2_TR(0x738316);
if(r1(R+518)){{goto L73832a;}}
}
B738318:L738318:{c.instructions+=4;NFSU2_TR(0x738318);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B738319:{NFSU2_TR(0x738319);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x3ull))));
}
B73831c:{NFSU2_TR(0x73831c);
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
B73831e:{NFSU2_TR(0x73831e);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x738304u);}goto L738304;}}
}
B738320:L738320:{c.instructions+=6;NFSU2_TR(0x738320);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B738321:{NFSU2_TR(0x738321);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B738322:{NFSU2_TR(0x738322);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B738323:{NFSU2_TR(0x738323);
w4(R+0,u32(0x1ull));
}
B738328:{NFSU2_TR(0x738328);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B738329:{NFSU2_TR(0x738329);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B73832a:L73832a:{c.instructions+=6;NFSU2_TR(0x73832a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B73832b:{NFSU2_TR(0x73832b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B73832c:{NFSU2_TR(0x73832c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B73832d:{NFSU2_TR(0x73832d);
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
B73832f:{NFSU2_TR(0x73832f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B738330:{NFSU2_TR(0x738330);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B738331:L738331:{c.instructions+=4;NFSU2_TR(0x738331);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B738332:{NFSU2_TR(0x738332);
__builtin_memmove((R+0),(R+4),4);
}
B738334:{NFSU2_TR(0x738334);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B738335:{NFSU2_TR(0x738335);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B738340:L738340:{c.instructions+=17;NFSU2_TR(0x738340);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x1e8ull))));
}
B738346:{NFSU2_TR(0x738346);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B738347:{NFSU2_TR(0x738347);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B738348:{NFSU2_TR(0x738348);
u8 U[8];
w4(U+0,u32(u32(u32(0x1f4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B73834f:{NFSU2_TR(0x73834f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+20))),4);
__builtin_memmove((R+0),(U+0),4);
}
B738352:{NFSU2_TR(0x738352);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B738353:{NFSU2_TR(0x738353);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B738354:{NFSU2_TR(0x738354);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B738356:{NFSU2_TR(0x738356);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B73835a:{NFSU2_TR(0x73835a);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B73835c:{NFSU2_TR(0x73835c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73835d:{NFSU2_TR(0x73835d);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B738361:{NFSU2_TR(0x738361);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B738365:{NFSU2_TR(0x738365);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B738369:{NFSU2_TR(0x738369);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B73836d:{NFSU2_TR(0x73836d);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B738371:{NFSU2_TR(0x738371);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x738376ull));
TAIL_STATIC(0x7363a0u,736);
}
B738376:L738376:{c.instructions+=4;NFSU2_TR(0x738376);
__builtin_memmove((R+24),(R+0),4);
}
B738378:{NFSU2_TR(0x738378);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B73837b:{NFSU2_TR(0x73837b);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B73837d:{NFSU2_TR(0x73837d);
if(r1(R+518)){{goto L738598;}}
}
B738383:L738383:{c.instructions+=5;NFSU2_TR(0x738383);
u8 U[4];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B738387:{NFSU2_TR(0x738387);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B738388:{NFSU2_TR(0x738388);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B73838c:{NFSU2_TR(0x73838c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73838d:{NFSU2_TR(0x73838d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x738392ull));
TAIL_STATIC(0x736400u,736);
}
B738392:L738392:{c.instructions+=3;NFSU2_TR(0x738392);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B738395:{NFSU2_TR(0x738395);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B738397:{NFSU2_TR(0x738397);
if(r1(R+518)){{goto L738598;}}
}
B73839d:L73839d:{c.instructions+=4;NFSU2_TR(0x73839d);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7383a1:{NFSU2_TR(0x7383a1);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+24))),2);
__builtin_memmove((R+4),(U+0),2);
}
B7383a4:{NFSU2_TR(0x7383a4);
u8 U[14];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x8ull))));
w4(U+4,u32(u32(u32(0x8b4f88ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),2);
__builtin_memmove((U+10),(U+8),2);
w2(U+12,u16(u32(r2(R+4))-u32(r2(U+10))));
w1(R+518,u8((r2(U+12))==(u16(0x0ull))));
}
B7383ac:{NFSU2_TR(0x7383ac);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L7383c5;}}
}
B7383ae:L7383ae:{c.instructions+=4;NFSU2_TR(0x7383ae);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B7383b0:{NFSU2_TR(0x7383b0);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B7383b3:{NFSU2_TR(0x7383b3);
w1(R+523,u8(0x0ull));
w4(R+4,u32(u32(r4(R+4))&u32(u32(0xfull))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B7383b6:{NFSU2_TR(0x7383b6);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L7383c5;}}
}
B7383b8:L7383b8:{c.instructions+=2;NFSU2_TR(0x7383b8);
u8 U[20];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x8ull))));
w4(U+4,u32(u32(u32(0x8b4f8cull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w1(R+523,sborrow<u32>(r4(U+12),r4(R+4)));
w4(U+16,u32(u32(r4(U+12))-u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+16))<s32(u32(0x0ull))));
}
B7383bf:{NFSU2_TR(0x7383bf);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L738598;}}
}
B7383c5:L7383c5:{c.instructions+=4;NFSU2_TR(0x7383c5);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x8b4f60ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B7383cc:{NFSU2_TR(0x7383cc);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B7383cf:{NFSU2_TR(0x7383cf);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7383d3:{NFSU2_TR(0x7383d3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L7383f6;}}
}
B7383d5:L7383d5:{c.instructions+=2;NFSU2_TR(0x7383d5);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xaull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B7383d9:{NFSU2_TR(0x7383d9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L7383e5;}}
}
B7383db:L7383db:{c.instructions+=2;NFSU2_TR(0x7383db);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B7383e3:{NFSU2_TR(0x7383e3);
{goto L7383f6;}
}
B7383e5:L7383e5:{c.instructions+=3;NFSU2_TR(0x7383e5);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B7383e9:{NFSU2_TR(0x7383e9);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7383ea:{NFSU2_TR(0x7383ea);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7383efull));
TAIL_STATIC(0x736530u,736);
}
B7383ef:L7383ef:{c.instructions+=2;NFSU2_TR(0x7383ef);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B7383f2:{NFSU2_TR(0x7383f2);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7383f6:L7383f6:{c.instructions+=7;NFSU2_TR(0x7383f6);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B7383fa:{NFSU2_TR(0x7383fa);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7383fb:{NFSU2_TR(0x7383fb);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7383fc:{NFSU2_TR(0x7383fc);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B738400:{NFSU2_TR(0x738400);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B738401:{NFSU2_TR(0x738401);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B738402:{NFSU2_TR(0x738402);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x738407ull));
{goto L738c00;}
}
B738407:L738407:{c.instructions+=5;NFSU2_TR(0x738407);
u8 U[4];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B73840b:{NFSU2_TR(0x73840b);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73840c:{NFSU2_TR(0x73840c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73840d:{NFSU2_TR(0x73840d);
u8 U[8];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B738411:{NFSU2_TR(0x738411);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x738416ull));
TAIL_STATIC(0x737470u,737);
}
B738416:L738416:{c.instructions+=5;NFSU2_TR(0x738416);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+28,u32(r1(U+4)));
}
B73841a:{NFSU2_TR(0x73841a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B73841d:{NFSU2_TR(0x73841d);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B73841f:{NFSU2_TR(0x73841f);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B738423:{NFSU2_TR(0x738423);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L738433;}}
}
B738425:L738425:{c.instructions+=7;NFSU2_TR(0x738425);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B738426:{NFSU2_TR(0x738426);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B738427:{NFSU2_TR(0x738427);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B738428:{NFSU2_TR(0x738428);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0xffffffffull))));
}
B73842b:{NFSU2_TR(0x73842b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B73842c:{NFSU2_TR(0x73842c);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x1e8ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x1e8ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x1e8ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B738432:{NFSU2_TR(0x738432);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B738433:L738433:{c.instructions+=6;NFSU2_TR(0x738433);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B738435:{NFSU2_TR(0x738435);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xaull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B738438:{NFSU2_TR(0x738438);
u8 U[4];
w4(U+0,u32(u32(u32(0x3ull))&u32(u32(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+0))));
}
B73843b:{NFSU2_TR(0x73843b);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B73843e:{NFSU2_TR(0x73843e);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B738442:{NFSU2_TR(0x738442);
if(r1(R+518)){{goto L738452;}}
}
B738444:L738444:{c.instructions+=3;NFSU2_TR(0x738444);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B738445:{NFSU2_TR(0x738445);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B738446:{NFSU2_TR(0x738446);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x73844bull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x738200u);}goto L738200;}
}
B73844b:L73844b:{c.instructions+=2;NFSU2_TR(0x73844b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B73844e:{NFSU2_TR(0x73844e);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B738452:L738452:{c.instructions+=2;NFSU2_TR(0x738452);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B738454:{NFSU2_TR(0x738454);
{goto L738460;}
}
B738456:L738456:{c.instructions+=3;NFSU2_TR(0x738456);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B73845a:{NFSU2_TR(0x73845a);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B73845e:{NFSU2_TR(0x73845e);
__builtin_memmove((R+28),(R+28),4);
}
B738460:L738460:{c.instructions+=2;NFSU2_TR(0x738460);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+12),r4(U+0)));
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B738462:{NFSU2_TR(0x738462);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L73858b;}}
}
B738468:L738468:{c.instructions+=3;NFSU2_TR(0x738468);
u8 U[13];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
w4(R+12,u32(s32(s8(r1(U+12)))));
}
B73846d:{NFSU2_TR(0x73846d);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B73846f:{NFSU2_TR(0x73846f);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L73858b;}}
}
B738475:L738475:{c.instructions+=2;NFSU2_TR(0x738475);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+12),r4(U+0)));
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B738477:{NFSU2_TR(0x738477);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L73858b;}}
}
B73847d:L73847d:{c.instructions+=5;NFSU2_TR(0x73847d);
u8 U[14];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+12))*u32(u32(0x2ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),2);
w4(R+4,u32(r2(U+12)));
}
B738482:{NFSU2_TR(0x738482);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B738484:{NFSU2_TR(0x738484);
u8 U[4];
w4(U+0,u32(0x64ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B738486:{NFSU2_TR(0x738486);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((R+28),(U+4),4);
}
B738489:{NFSU2_TR(0x738489);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x73848eull));
{goto L738860;}
}
B73848e:L73848e:{c.instructions+=5;NFSU2_TR(0x73848e);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+8,u32(r1(U+4)));
}
B738492:{NFSU2_TR(0x738492);
w4(R+0,u32(r2(R+0)));
}
B738495:{NFSU2_TR(0x738495);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B738498:{NFSU2_TR(0x738498);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B73849a:{NFSU2_TR(0x73849a);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L73857a;}}
}
B7384a0:L7384a0:{c.instructions+=5;NFSU2_TR(0x7384a0);
u8 U[8];
w4(U+0,u32(u32(u32(0x1fcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7384a7:{NFSU2_TR(0x7384a7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7384a8:{NFSU2_TR(0x7384a8);
__builtin_memmove((R+0),(R+28),4);
}
B7384aa:{NFSU2_TR(0x7384aa);
__builtin_memmove((R+4),(R+24),4);
}
B7384ac:{NFSU2_TR(0x7384ac);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7384b1ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7382a0u);}goto L7382a0;}
}
B7384b1:L7384b1:{c.instructions+=3;NFSU2_TR(0x7384b1);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B7384b4:{NFSU2_TR(0x7384b4);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B7384b6:{NFSU2_TR(0x7384b6);
if(r1(R+518)){{goto L73857a;}}
}
B7384bc:L7384bc:{c.instructions+=7;NFSU2_TR(0x7384bc);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7384c0:{NFSU2_TR(0x7384c0);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B7384c4:{NFSU2_TR(0x7384c4);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7384c5:{NFSU2_TR(0x7384c5);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7384c6:{NFSU2_TR(0x7384c6);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7384c7:{NFSU2_TR(0x7384c7);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7384c8:{NFSU2_TR(0x7384c8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7384cdull));
{goto L738dd0;}
}
B7384cd:L7384cd:{c.instructions+=3;NFSU2_TR(0x7384cd);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B7384d0:{NFSU2_TR(0x7384d0);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B7384d2:{NFSU2_TR(0x7384d2);
if(r1(R+518)){{goto L73857a;}}
}
B7384d8:L7384d8:{c.instructions+=3;NFSU2_TR(0x7384d8);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7384dc:{NFSU2_TR(0x7384dc);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B7384de:{NFSU2_TR(0x7384de);
if(r1(R+518)){{goto L7384f5;}}
}
B7384e0:L7384e0:{c.instructions+=3;NFSU2_TR(0x7384e0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7384e1:{NFSU2_TR(0x7384e1);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7384e2:{NFSU2_TR(0x7384e2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7384e7ull));
TAIL_STATIC(0x736e50u,736);
}
B7384e7:L7384e7:{c.instructions+=3;NFSU2_TR(0x7384e7);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B7384ea:{NFSU2_TR(0x7384ea);
u8 U[10];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((U+6),(U+4),2);
w2(U+8,u16(u32(r2(R+0))-u32(r2(U+6))));
w1(R+518,u8((r2(U+8))==(u16(0x0ull))));
}
B7384ef:{NFSU2_TR(0x7384ef);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L73857a;}}
}
B7384f5:L7384f5:{c.instructions+=4;NFSU2_TR(0x7384f5);
u8 U[5];
w4(U+0,u32(u32(u32(0x12dull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B7384fd:{NFSU2_TR(0x7384fd);
u8 U[5];
w4(U+0,u32(u32(u32(0x12cull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B738505:{NFSU2_TR(0x738505);
u8 U[4];
w4(U+0,u32(u32(u32(0xa7ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B73850c:{NFSU2_TR(0x73850c);
w4(R+4,u32(0xcull));
}
B738511:L738511:{c.instructions+=4;NFSU2_TR(0x738511);
u8 U[1];
w1(U+0,u8(0x0ull));
s1(u32(r4(R+0)),r1(U+0));
}
B738514:{NFSU2_TR(0x738514);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
}
B738517:{NFSU2_TR(0x738517);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B738518:{NFSU2_TR(0x738518);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x738511u);}goto L738511;}}
}
B73851a:L73851a:{c.instructions+=7;NFSU2_TR(0x73851a);
u8 U[8];
w4(U+0,u32(u32(u32(0x1fcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B738521:{NFSU2_TR(0x738521);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B738522:{NFSU2_TR(0x738522);
u8 U[4];
w4(U+0,u32(u32(u32(0xa0ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B738529:{NFSU2_TR(0x738529);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73852a:{NFSU2_TR(0x73852a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73852b:{NFSU2_TR(0x73852b);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B73852f:{NFSU2_TR(0x73852f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x738534ull));
TAIL_STATIC(0x7377b0u,737);
}
B738534:L738534:{c.instructions+=3;NFSU2_TR(0x738534);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B738537:{NFSU2_TR(0x738537);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B738539:{NFSU2_TR(0x738539);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L73857a;}}
}
B73853b:L73853b:{c.instructions+=7;NFSU2_TR(0x73853b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73853c:{NFSU2_TR(0x73853c);
u8 U[4];
w4(U+0,u32(u32(u32(0xa0ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B738543:{NFSU2_TR(0x738543);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B738544:{NFSU2_TR(0x738544);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B738548:{NFSU2_TR(0x738548);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B738549:{NFSU2_TR(0x738549);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B73854d:{NFSU2_TR(0x73854d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x738552ull));
TAIL_STATIC(0x737b20u,737);
}
B738552:L738552:{c.instructions+=4;NFSU2_TR(0x738552);
__builtin_memmove((R+20),(R+0),4);
}
B738554:{NFSU2_TR(0x738554);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B738557:{NFSU2_TR(0x738557);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))&u32(r4(R+20))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B738559:{NFSU2_TR(0x738559);
if(r1(R+518)){{goto L73857a;}}
}
B73855b:L73855b:{c.instructions+=8;NFSU2_TR(0x73855b);
u8 U[8];
w4(U+0,u32(u32(u32(0x1fcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B738562:{NFSU2_TR(0x738562);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B738566:{NFSU2_TR(0x738566);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B738567:{NFSU2_TR(0x738567);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B738568:{NFSU2_TR(0x738568);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B738569:{NFSU2_TR(0x738569);
__builtin_memmove((R+4),(R+24),4);
}
B73856b:{NFSU2_TR(0x73856b);
u8 U[4];
w4(U+0,u32(u32(u32(0xa8ull))+u32(r4(R+16))));
__builtin_memmove((R+12),(U+0),4);
}
B738572:{NFSU2_TR(0x738572);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x738577ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x738020u);}goto L738020;}
}
B738577:L738577:{c.instructions+=1;NFSU2_TR(0x738577);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B73857a:L73857a:{c.instructions+=5;NFSU2_TR(0x73857a);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B73857e:{NFSU2_TR(0x73857e);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B73857f:{NFSU2_TR(0x73857f);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))&u32(r4(R+20))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B738581:{NFSU2_TR(0x738581);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B738585:{NFSU2_TR(0x738585);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x738456u);}goto L738456;}}
}
B73858b:L73858b:{c.instructions+=7;NFSU2_TR(0x73858b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B73858c:{NFSU2_TR(0x73858c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B73858d:{NFSU2_TR(0x73858d);
__builtin_memmove((R+0),(R+20),4);
}
B73858f:{NFSU2_TR(0x73858f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B738590:{NFSU2_TR(0x738590);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B738591:{NFSU2_TR(0x738591);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x1e8ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x1e8ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x1e8ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B738597:{NFSU2_TR(0x738597);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B738598:L738598:{c.instructions+=7;NFSU2_TR(0x738598);
__builtin_memmove((R+0),(R+28),4);
}
B73859a:{NFSU2_TR(0x73859a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B73859b:{NFSU2_TR(0x73859b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B73859c:{NFSU2_TR(0x73859c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B73859d:{NFSU2_TR(0x73859d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B73859e:{NFSU2_TR(0x73859e);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x1e8ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x1e8ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x1e8ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B7385a4:{NFSU2_TR(0x7385a4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7385b0:L7385b0:{c.instructions+=7;NFSU2_TR(0x7385b0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7385b4:{NFSU2_TR(0x7385b4);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B7385b7:{NFSU2_TR(0x7385b7);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7385b8:{NFSU2_TR(0x7385b8);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8b5054ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B7385be:{NFSU2_TR(0x7385be);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B7385c0:{NFSU2_TR(0x7385c0);
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
B7385c2:{NFSU2_TR(0x7385c2);
if(r1(R+518)){{goto L73860b;}}
}
B7385c4:L7385c4:{c.instructions+=5;NFSU2_TR(0x7385c4);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7385c5:{NFSU2_TR(0x7385c5);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7385c6:{NFSU2_TR(0x7385c6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7385c7:{NFSU2_TR(0x7385c7);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7385c8:{NFSU2_TR(0x7385c8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7385cdull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x738340u);}goto L738340;}
}
B7385cd:L7385cd:{c.instructions+=4;NFSU2_TR(0x7385cd);
__builtin_memmove((R+20),(R+0),4);
}
B7385cf:{NFSU2_TR(0x7385cf);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B7385d2:{NFSU2_TR(0x7385d2);
u8 U[10];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(U+6,u32(u32(r4(R+20))&u32(r4(R+20))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B7385d4:{NFSU2_TR(0x7385d4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L73860f;}}
}
B7385d6:L7385d6:{c.instructions+=3;NFSU2_TR(0x7385d6);
__builtin_memmove((R+0),gp(0x8b5158),4);
}
B7385db:{NFSU2_TR(0x7385db);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B7385dd:{NFSU2_TR(0x7385dd);
if(r1(R+518)){{goto L73860d;}}
}
B7385df:L7385df:{c.instructions+=1;NFSU2_TR(0x7385df);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
w1(R+519,u8(s32(r4(R+12))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+12))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+12))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B7385e1:L7385e1:{c.instructions+=3;NFSU2_TR(0x7385e1);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7385e2:{NFSU2_TR(0x7385e2);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7385e3:{NFSU2_TR(0x7385e3);
u8 U[4];
__builtin_memmove((U+0),gp(0x8b5158),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7385e9ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B7385e9:L7385e9:{c.instructions+=4;NFSU2_TR(0x7385e9);
__builtin_memmove((R+24),(R+0),4);
}
B7385eb:{NFSU2_TR(0x7385eb);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B7385ee:{NFSU2_TR(0x7385ee);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B7385f0:{NFSU2_TR(0x7385f0);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L7385fd;}}
}
B7385f2:L7385f2:{c.instructions+=2;NFSU2_TR(0x7385f2);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7385f3:{NFSU2_TR(0x7385f3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7385f8ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x738340u);}goto L738340;}
}
B7385f8:L7385f8:{c.instructions+=2;NFSU2_TR(0x7385f8);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B7385fb:{NFSU2_TR(0x7385fb);
__builtin_memmove((R+20),(R+0),4);
}
B7385fd:L7385fd:{c.instructions+=3;NFSU2_TR(0x7385fd);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B7385fe:{NFSU2_TR(0x7385fe);
u8 U[10];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(U+6,u32(u32(r4(R+20))&u32(r4(R+20))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B738600:{NFSU2_TR(0x738600);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L73860f;}}
}
B738602:L738602:{c.instructions+=2;NFSU2_TR(0x738602);
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
B738604:{NFSU2_TR(0x738604);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7385e1u);}goto L7385e1;}}
}
B738606:L738606:{c.instructions+=4;NFSU2_TR(0x738606);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B738607:{NFSU2_TR(0x738607);
__builtin_memmove((R+0),(R+20),4);
}
B738609:{NFSU2_TR(0x738609);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B73860a:{NFSU2_TR(0x73860a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B73860b:L73860b:{c.instructions+=2;NFSU2_TR(0x73860b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B73860c:{NFSU2_TR(0x73860c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B73860d:L73860d:{c.instructions+=1;NFSU2_TR(0x73860d);
u8 U[10];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(U+6,u32(u32(r4(R+20))&u32(r4(R+20))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B73860f:L73860f:{c.instructions+=1;NFSU2_TR(0x73860f);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x738606u);}goto L738606;}}
}
B738611:L738611:{c.instructions+=6;NFSU2_TR(0x738611);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B738612:{NFSU2_TR(0x738612);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B738613:{NFSU2_TR(0x738613);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B738614:{NFSU2_TR(0x738614);
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
B738616:{NFSU2_TR(0x738616);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B738617:{NFSU2_TR(0x738617);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B738620:L738620:{c.instructions+=3;NFSU2_TR(0x738620);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B738624:{NFSU2_TR(0x738624);
__builtin_memmove(gp(0x8b4f80),(R+0),4);
}
B738629:{NFSU2_TR(0x738629);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B738630:L738630:{c.instructions+=5;NFSU2_TR(0x738630);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B738634:{NFSU2_TR(0x738634);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B738638:{NFSU2_TR(0x738638);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B738639:{NFSU2_TR(0x738639);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B73863d:{NFSU2_TR(0x73863d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x738642ull));
TAIL_STATIC(0x7363a0u,736);
}
B738642:L738642:{c.instructions+=3;NFSU2_TR(0x738642);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B738645:{NFSU2_TR(0x738645);
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
B738647:{NFSU2_TR(0x738647);
if(r1(R+518)){{goto L73869d;}}
}
B738649:L738649:{c.instructions+=6;NFSU2_TR(0x738649);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73864a:{NFSU2_TR(0x73864a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73864b:{NFSU2_TR(0x73864b);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xbull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+24,u32(s32(s8(r1(U+4)))));
}
B73864f:{NFSU2_TR(0x73864f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x4ull))+u32(r4(U+0))));
__builtin_memmove((R+24),(U+4),4);
}
B738656:{NFSU2_TR(0x738656);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B738657:{NFSU2_TR(0x738657);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x73865cull));
TAIL_STATIC(0x736060u,736);
}
B73865c:L73865c:{c.instructions+=4;NFSU2_TR(0x73865c);
__builtin_memmove((R+12),(R+0),4);
}
B73865e:{NFSU2_TR(0x73865e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B738661:{NFSU2_TR(0x738661);
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
B738663:{NFSU2_TR(0x738663);
if(r1(R+518)){{goto L73869b;}}
}
B738665:L738665:{c.instructions+=8;NFSU2_TR(0x738665);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B738669:{NFSU2_TR(0x738669);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+4),(U+0),4);
}
B73866c:{NFSU2_TR(0x73866c);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B738670:{NFSU2_TR(0x738670);
__builtin_memmove((R+0),(R+4),4);
}
B738672:{NFSU2_TR(0x738672);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B738673:{NFSU2_TR(0x738673);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B738676:{NFSU2_TR(0x738676);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+12)),r4(U+0));
}
B738678:{NFSU2_TR(0x738678);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B73867b:L73867b:{c.instructions+=1;NFSU2_TR(0x73867b);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L73867d;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x73867bu);}goto L73867b;}
}
B73867d:L73867d:{c.instructions+=3;NFSU2_TR(0x73867d);
__builtin_memmove((R+4),(R+0),4);
}
B73867f:{NFSU2_TR(0x73867f);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B738682:{NFSU2_TR(0x738682);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B738683:L738683:{c.instructions+=1;NFSU2_TR(0x738683);
u8 U[35];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L738685;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x738683u);}goto L738683;}
}
B738685:L738685:{c.instructions+=1;NFSU2_TR(0x738685);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x73868aull));
TAIL_STATIC(0x736920u,736);
}
B73868a:L73868a:{c.instructions+=4;NFSU2_TR(0x73868a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B73868d:{NFSU2_TR(0x73868d);
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
B73868f:{NFSU2_TR(0x73868f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B738690:{NFSU2_TR(0x738690);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L73869b;}}
}
B738692:L738692:{c.instructions+=2;NFSU2_TR(0x738692);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B738693:{NFSU2_TR(0x738693);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x738698ull));
TAIL_STATIC(0x7360a0u,736);
}
B738698:L738698:{c.instructions+=1;NFSU2_TR(0x738698);
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
B73869b:L73869b:{c.instructions+=2;NFSU2_TR(0x73869b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B73869c:{NFSU2_TR(0x73869c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B73869d:L73869d:{c.instructions+=1;NFSU2_TR(0x73869d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7386a0:L7386a0:{c.instructions+=4;NFSU2_TR(0x7386a0);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7386a1:{NFSU2_TR(0x7386a1);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B7386a5:{NFSU2_TR(0x7386a5);
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
B7386a7:{NFSU2_TR(0x7386a7);
if(r1(R+518)){{goto L738748;}}
}
B7386ad:L7386ad:{c.instructions+=3;NFSU2_TR(0x7386ad);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7386b0:{NFSU2_TR(0x7386b0);
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
B7386b2:{NFSU2_TR(0x7386b2);
if(r1(R+518)){{goto L738748;}}
}
B7386b8:L7386b8:{c.instructions+=3;NFSU2_TR(0x7386b8);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xbull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B7386bb:{NFSU2_TR(0x7386bb);
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
B7386bd:{NFSU2_TR(0x7386bd);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L738748;}}
}
B7386c3:L7386c3:{c.instructions+=10;NFSU2_TR(0x7386c3);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B7386c6:{NFSU2_TR(0x7386c6);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B7386ca:{NFSU2_TR(0x7386ca);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7386cb:{NFSU2_TR(0x7386cb);
__builtin_memmove((R+12),(R+0),4);
}
B7386cd:{NFSU2_TR(0x7386cd);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w4(R+12,shl<u32>(r4(R+12),u64(r4(U+0))));
}
B7386d0:{NFSU2_TR(0x7386d0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7386d1:{NFSU2_TR(0x7386d1);
w4(R+12,u32(u32(r4(R+12))+u32(r4(R+4))));
}
B7386d3:{NFSU2_TR(0x7386d3);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B7386d5:{NFSU2_TR(0x7386d5);
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
B7386d7:{NFSU2_TR(0x7386d7);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L738742;}}
}
B7386d9:L7386d9:{c.instructions+=4;NFSU2_TR(0x7386d9);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x18ull))));
__builtin_memmove((R+0),(U+0),4);
}
B7386dc:{NFSU2_TR(0x7386dc);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7386dd:{NFSU2_TR(0x7386dd);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7386e1:{NFSU2_TR(0x7386e1);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((R+24),(U+0),4);
}
B7386e4:L7386e4:{c.instructions+=7;NFSU2_TR(0x7386e4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7386e7:{NFSU2_TR(0x7386e7);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfffffff8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B7386ea:{NFSU2_TR(0x7386ea);
u8 U[6];
w1(R+512,carry<u32>(r4(R+4),r4(R+12)));
w1(R+523,scarry<u32>(r4(R+4),r4(R+12)));
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+12))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B7386ec:{NFSU2_TR(0x7386ec);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B7386ee:{NFSU2_TR(0x7386ee);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7386ef:{NFSU2_TR(0x7386ef);
__builtin_memmove((R+4),(R+24),4);
}
B7386f1:{NFSU2_TR(0x7386f1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7386f6ull));
TAIL_STATIC(0x735800u,735);
}
B7386f6:L7386f6:{c.instructions+=11;NFSU2_TR(0x7386f6);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7386fa:{NFSU2_TR(0x7386fa);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
w4(U+4,u32(0x738630ull));
s4(u32(r4(U+0)),r4(U+4));
}
B738701:{NFSU2_TR(0x738701);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+4))),2);
w4(R+8,u32(r2(U+0)));
}
B738704:{NFSU2_TR(0x738704);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x9ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(r1(U+4)));
}
B738708:{NFSU2_TR(0x738708);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B73870b:{NFSU2_TR(0x73870b);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+0))),2);
w4(R+0,u32(r2(U+0)));
}
B73870e:{NFSU2_TR(0x73870e);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+8,u32(r1(U+4)));
}
B738712:{NFSU2_TR(0x738712);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B738713:{NFSU2_TR(0x738713);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B738714:{NFSU2_TR(0x738714);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B738715:{NFSU2_TR(0x738715);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x73871aull));
TAIL_STATIC(0x736330u,736);
}
B73871a:L73871a:{c.instructions+=5;NFSU2_TR(0x73871a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B73871d:{NFSU2_TR(0x73871d);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B738720:{NFSU2_TR(0x738720);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B738721:{NFSU2_TR(0x738721);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B738722:{NFSU2_TR(0x738722);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x738727ull));
TAIL_STATIC(0x735900u,735);
}
B738727:L738727:{c.instructions+=9;NFSU2_TR(0x738727);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B73872b:{NFSU2_TR(0x73872b);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(r2(U+4)));
}
B73872f:{NFSU2_TR(0x73872f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B738732:{NFSU2_TR(0x738732);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x1ull))));
}
B738733:{NFSU2_TR(0x738733);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x2ull))));
}
B738736:{NFSU2_TR(0x738736);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x20ull))));
}
B738739:{NFSU2_TR(0x738739);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
w1(R+512,u8((r4(R+20))<(r4(U+6))));
w1(R+523,sborrow<u32>(r4(R+20),r4(U+6)));
w4(U+10,u32(u32(r4(R+20))-u32(r4(U+6))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B73873b:{NFSU2_TR(0x73873b);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B73873f:{NFSU2_TR(0x73873f);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7386e4u);}goto L7386e4;}}
}
B738741:L738741:{c.instructions+=1;NFSU2_TR(0x738741);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B738742:L738742:{c.instructions+=3;NFSU2_TR(0x738742);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B738743:{NFSU2_TR(0x738743);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xbull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B738747:{NFSU2_TR(0x738747);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B738748:L738748:{c.instructions+=2;NFSU2_TR(0x738748);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B738749:{NFSU2_TR(0x738749);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B738750:L738750:{c.instructions+=6;NFSU2_TR(0x738750);
__builtin_memmove((R+4),gp(0x819ac4),4);
}
B738756:{NFSU2_TR(0x738756);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B738757:{NFSU2_TR(0x738757);
__builtin_memmove((R+24),gp(0x819ac8),4);
}
B73875d:{NFSU2_TR(0x73875d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B738760:{NFSU2_TR(0x738760);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
}
B738762:{NFSU2_TR(0x738762);
if(r1(R+512)){{goto L73876c;}}
}
B738764:L738764:{c.instructions+=2;NFSU2_TR(0x738764);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
}
B738766:{NFSU2_TR(0x738766);
if(r1(R+512)){{goto L73876c;}}
}
B738768:L738768:{c.instructions+=2;NFSU2_TR(0x738768);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B73876a:{NFSU2_TR(0x73876a);
{goto L738771;}
}
B73876c:L73876c:{c.instructions+=1;NFSU2_TR(0x73876c);
w4(R+8,u32(0x1ull));
}
B738771:L738771:{c.instructions+=30;NFSU2_TR(0x738771);
__builtin_memmove((R+4),gp(0x819ac0),4);
}
B738777:{NFSU2_TR(0x738777);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+4))));
}
B738779:{NFSU2_TR(0x738779);
__builtin_memmove(gp(0x819ac4),(R+0),4);
}
B73877e:{NFSU2_TR(0x73877e);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+8))));
}
B738780:{NFSU2_TR(0x738780);
__builtin_memmove((R+8),gp(0x819abc),4);
}
B738786:{NFSU2_TR(0x738786);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
}
B738788:{NFSU2_TR(0x738788);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(R+4))));
w4(R+4,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B73878a:{NFSU2_TR(0x73878a);
w4(R+4,u32(0-u32(r4(R+4))));
}
B73878c:{NFSU2_TR(0x73878c);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+8))));
}
B73878e:{NFSU2_TR(0x73878e);
__builtin_memmove(gp(0x819ac0),(R+0),4);
}
B738793:{NFSU2_TR(0x738793);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+4))));
}
B738795:{NFSU2_TR(0x738795);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
}
B738797:{NFSU2_TR(0x738797);
__builtin_memmove((R+8),gp(0x819ab8),4);
}
B73879d:{NFSU2_TR(0x73879d);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(R+4))));
w4(R+4,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B73879f:{NFSU2_TR(0x73879f);
w4(R+4,u32(0-u32(r4(R+4))));
}
B7387a1:{NFSU2_TR(0x7387a1);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+8))));
}
B7387a3:{NFSU2_TR(0x7387a3);
__builtin_memmove(gp(0x819abc),(R+0),4);
}
B7387a8:{NFSU2_TR(0x7387a8);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+4))));
}
B7387aa:{NFSU2_TR(0x7387aa);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
}
B7387ac:{NFSU2_TR(0x7387ac);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(R+4))));
w4(R+4,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B7387ae:{NFSU2_TR(0x7387ae);
w4(R+4,u32(0-u32(r4(R+4))));
}
B7387b0:{NFSU2_TR(0x7387b0);
__builtin_memmove(gp(0x819ab8),(R+0),4);
}
B7387b5:{NFSU2_TR(0x7387b5);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B7387b8:{NFSU2_TR(0x7387b8);
__builtin_memmove((R+0),gp(0x819ab4),4);
}
B7387bd:{NFSU2_TR(0x7387bd);
w1(R+512,carry<u32>(r4(R+0),r4(R+8)));
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+8))));
}
B7387bf:{NFSU2_TR(0x7387bf);
u8 U[6];
w1(R+523,scarry<u32>(r4(R+24),u32(0x1ull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B7387c0:{NFSU2_TR(0x7387c0);
__builtin_memmove(gp(0x819ac8),(R+24),4);
}
B7387c6:{NFSU2_TR(0x7387c6);
__builtin_memmove(gp(0x819ab4),(R+0),4);
}
B7387cb:{NFSU2_TR(0x7387cb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B7387cc:{NFSU2_TR(0x7387cc);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L7387f4;}}
}
B7387ce:L7387ce:{c.instructions+=2;NFSU2_TR(0x7387ce);
u8 U[6];
w1(R+523,scarry<u32>(m4(0x819ac4),u32(0x1ull)));
s4(0x819ac4,u32(u32(m4(0x819ac4))+u32(u32(0x1ull))));
w1(R+519,u8(s32(m4(0x819ac4))<s32(u32(0x0ull))));
w1(R+518,u8((m4(0x819ac4))==(u32(0x0ull))));
w4(U+0,u32(u32(m4(0x819ac4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B7387d4:{NFSU2_TR(0x7387d4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L7387f4;}}
}
B7387d6:L7387d6:{c.instructions+=2;NFSU2_TR(0x7387d6);
u8 U[6];
w1(R+523,scarry<u32>(m4(0x819ac0),u32(0x1ull)));
s4(0x819ac0,u32(u32(m4(0x819ac0))+u32(u32(0x1ull))));
w1(R+519,u8(s32(m4(0x819ac0))<s32(u32(0x0ull))));
w1(R+518,u8((m4(0x819ac0))==(u32(0x0ull))));
w4(U+0,u32(u32(m4(0x819ac0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B7387dc:{NFSU2_TR(0x7387dc);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L7387f4;}}
}
B7387de:L7387de:{c.instructions+=2;NFSU2_TR(0x7387de);
u8 U[6];
w1(R+523,scarry<u32>(m4(0x819abc),u32(0x1ull)));
s4(0x819abc,u32(u32(m4(0x819abc))+u32(u32(0x1ull))));
w1(R+519,u8(s32(m4(0x819abc))<s32(u32(0x0ull))));
w1(R+518,u8((m4(0x819abc))==(u32(0x0ull))));
w4(U+0,u32(u32(m4(0x819abc))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B7387e4:{NFSU2_TR(0x7387e4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L7387f4;}}
}
B7387e6:L7387e6:{c.instructions+=2;NFSU2_TR(0x7387e6);
u8 U[6];
w1(R+523,scarry<u32>(m4(0x819ab8),u32(0x1ull)));
s4(0x819ab8,u32(u32(m4(0x819ab8))+u32(u32(0x1ull))));
w1(R+519,u8(s32(m4(0x819ab8))<s32(u32(0x0ull))));
w1(R+518,u8((m4(0x819ab8))==(u32(0x0ull))));
w4(U+0,u32(u32(m4(0x819ab8))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B7387ec:{NFSU2_TR(0x7387ec);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L7387f4;}}
}
B7387ee:L7387ee:{c.instructions+=2;NFSU2_TR(0x7387ee);
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
B7387ef:{NFSU2_TR(0x7387ef);
__builtin_memmove(gp(0x819ab4),(R+0),4);
}
B7387f4:L7387f4:{c.instructions+=1;NFSU2_TR(0x7387f4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B738800:L738800:{c.instructions+=8;NFSU2_TR(0x738800);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B738801:{NFSU2_TR(0x738801);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B738802:{NFSU2_TR(0x738802);
__builtin_memmove((R+12),(R+0),4);
}
B738804:{NFSU2_TR(0x738804);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B738805:{NFSU2_TR(0x738805);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0xffffffffull))));
}
B738808:{NFSU2_TR(0x738808);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x20ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x20ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B73880b:{NFSU2_TR(0x73880b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73880c:{NFSU2_TR(0x73880c);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L738813;}}
}
B73880e:L73880e:{c.instructions+=1;NFSU2_TR(0x73880e);
w4(R+12,u32(0x20ull));
}
B738813:L738813:{c.instructions+=5;NFSU2_TR(0x738813);
__builtin_memmove((R+8),gp(0x8b5708),4);
}
B738819:{NFSU2_TR(0x738819);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B73881b:{NFSU2_TR(0x73881b);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B73881d:{NFSU2_TR(0x73881d);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B73881f:{NFSU2_TR(0x73881f);
}
B738820:L738820:{c.instructions+=2;NFSU2_TR(0x738820);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B738822:{NFSU2_TR(0x738822);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L738846;}}
}
B738824:L738824:{c.instructions+=3;NFSU2_TR(0x738824);
u8 U[10];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x8b568aull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),2);
__builtin_memmove((R+20),(U+8),2);
}
B73882c:{NFSU2_TR(0x73882c);
u8 U[10];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((U+6),(U+4),2);
w2(U+8,u16(u32(r2(R+20))-u32(r2(U+6))));
w1(R+518,u8((r2(U+8))==(u16(0x0ull))));
}
B738831:{NFSU2_TR(0x738831);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L73884b;}}
}
B738833:L738833:{c.instructions+=4;NFSU2_TR(0x738833);
u8 U[6];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+20),(U+4),2);
}
B738838:{NFSU2_TR(0x738838);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B738839:{NFSU2_TR(0x738839);
u8 U[14];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x8b5688ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),2);
__builtin_memmove((U+10),(U+8),2);
w2(U+12,u16(u32(r2(U+10))-u32(r2(R+20))));
w1(R+518,u8((r2(U+12))==(u16(0x0ull))));
}
B738841:{NFSU2_TR(0x738841);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L73884b;}}
}
B738843:L738843:{c.instructions+=1;NFSU2_TR(0x738843);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xffffffffull))));
__builtin_memmove((R+0),(U+0),4);
}
B738846:L738846:{c.instructions+=1;NFSU2_TR(0x738846);
w4(R+24,u32(0x1ull));
}
B73884b:L73884b:{c.instructions+=2;NFSU2_TR(0x73884b);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+8))<s32(u32(0x0ull))));
}
B73884c:{NFSU2_TR(0x73884c);
u8 U[1];
w1(U+0,u8(!(r1(R+519))));
if(r1(U+0)){{goto L738851;}}
}
B73884e:L73884e:{c.instructions+=1;NFSU2_TR(0x73884e);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x20ull))));
}
B738851:L738851:{c.instructions+=3;NFSU2_TR(0x738851);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B738852:{NFSU2_TR(0x738852);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
w1(R+512,u8((r4(U+6))<(u32(0x20ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x20ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x20ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B738855:{NFSU2_TR(0x738855);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L73885b;}}
}
B738857:L738857:{c.instructions+=2;NFSU2_TR(0x738857);
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
B738859:{NFSU2_TR(0x738859);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x738820u);}goto L738820;}}
}
B73885b:L73885b:{c.instructions+=5;NFSU2_TR(0x73885b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B73885c:{NFSU2_TR(0x73885c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B73885d:{NFSU2_TR(0x73885d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B73885e:{NFSU2_TR(0x73885e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B73885f:{NFSU2_TR(0x73885f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B738860:L738860:{c.instructions+=17;NFSU2_TR(0x738860);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x8ull))));
}
B738863:{NFSU2_TR(0x738863);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B738864:{NFSU2_TR(0x738864);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B738866:{NFSU2_TR(0x738866);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B738867:{NFSU2_TR(0x738867);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B738868:{NFSU2_TR(0x738868);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B73886c:{NFSU2_TR(0x73886c);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B738870:{NFSU2_TR(0x738870);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B738874:{NFSU2_TR(0x738874);
__builtin_memmove((R+0),(R+24),4);
}
B738876:{NFSU2_TR(0x738876);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B738877:{NFSU2_TR(0x738877);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+8))));
}
B738879:{NFSU2_TR(0x738879);
__builtin_memmove((R+12),(R+0),4);
}
B73887b:{NFSU2_TR(0x73887b);
w4(R+12,sar<u32>(r4(R+12),u64(u32(0x1ull))));
}
B73887d:{NFSU2_TR(0x73887d);
w4(R+20,u32(u32(r4(R+20))|u32(u32(0xffffffffull))));
}
B738880:{NFSU2_TR(0x738880);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0xaull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xaull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B738883:{NFSU2_TR(0x738883);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B738884:{NFSU2_TR(0x738884);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L73888b;}}
}
B738886:L738886:{c.instructions+=1;NFSU2_TR(0x738886);
w4(R+12,u32(0xaull));
}
B73888b:L73888b:{c.instructions+=1;NFSU2_TR(0x73888b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x738890ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x738750u);}goto L738750;}
}
B738890:L738890:{c.instructions+=8;NFSU2_TR(0x738890);
__builtin_memmove((R+28),(R+0),4);
}
B738892:{NFSU2_TR(0x738892);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B738896:{NFSU2_TR(0x738896);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))&u32(u32(0x1full))));
w4(R+28,shr<u32>(r4(R+28),u64(r4(U+0))));
}
B738899:{NFSU2_TR(0x738899);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+28)))));
w8(U+8,u64(s64(s32(r4(R+24)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+28,u32(r8(U+16)));
}
B73889c:{NFSU2_TR(0x73889c);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))&u32(u32(0x1full))));
w4(R+28,shr<u32>(r4(R+28),u64(r4(U+0))));
}
B73889f:{NFSU2_TR(0x73889f);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B7388a2:{NFSU2_TR(0x7388a2);
__builtin_memmove((R+24),(R+28),4);
}
B7388a4:{NFSU2_TR(0x7388a4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L7388b1;}}
}
B7388a6:L7388a6:{c.instructions+=7;NFSU2_TR(0x7388a6);
__builtin_memmove((R+0),(R+28),2);
}
B7388a9:{NFSU2_TR(0x7388a9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B7388aa:{NFSU2_TR(0x7388aa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B7388ab:{NFSU2_TR(0x7388ab);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B7388ac:{NFSU2_TR(0x7388ac);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B7388ad:{NFSU2_TR(0x7388ad);
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
B7388b0:{NFSU2_TR(0x7388b0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7388b1:L7388b1:{c.instructions+=5;NFSU2_TR(0x7388b1);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7388b5:{NFSU2_TR(0x7388b5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7388b6:{NFSU2_TR(0x7388b6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7388b7:{NFSU2_TR(0x7388b7);
__builtin_memmove((R+0),(R+12),4);
}
B7388b9:{NFSU2_TR(0x7388b9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7388beull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x738800u);}goto L738800;}
}
B7388be:L7388be:{c.instructions+=3;NFSU2_TR(0x7388be);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B7388c1:{NFSU2_TR(0x7388c1);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B7388c4:{NFSU2_TR(0x7388c4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L7388d0;}}
}
B7388c6:L7388c6:{c.instructions+=2;NFSU2_TR(0x7388c6);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B7388ce:{NFSU2_TR(0x7388ce);
{goto L7388d6;}
}
B7388d0:L7388d0:{c.instructions+=2;NFSU2_TR(0x7388d0);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B7388d2:{NFSU2_TR(0x7388d2);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L7388d8;}}
}
B7388d4:L7388d4:{c.instructions+=1;NFSU2_TR(0x7388d4);
__builtin_memmove((R+20),(R+0),4);
}
B7388d6:L7388d6:{c.instructions+=1;NFSU2_TR(0x7388d6);
__builtin_memmove((R+28),(R+24),4);
}
B7388d8:L7388d8:{c.instructions+=5;NFSU2_TR(0x7388d8);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7388dc:{NFSU2_TR(0x7388dc);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B7388dd:{NFSU2_TR(0x7388dd);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x20ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x20ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B7388e0:{NFSU2_TR(0x7388e0);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7388e4:{NFSU2_TR(0x7388e4);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L738902;}}
}
B7388e6:L7388e6:{c.instructions+=3;NFSU2_TR(0x7388e6);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7388ea:{NFSU2_TR(0x7388ea);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B7388ec:{NFSU2_TR(0x7388ec);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L738902;}}
}
B7388ee:L7388ee:{c.instructions+=1;NFSU2_TR(0x7388ee);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7388f3ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x738750u);}goto L738750;}
}
B7388f3:L7388f3:{c.instructions+=5;NFSU2_TR(0x7388f3);
__builtin_memmove((R+24),(R+0),4);
}
B7388f5:{NFSU2_TR(0x7388f5);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))&u32(u32(0x1full))));
w4(R+24,shr<u32>(r4(R+24),u64(r4(U+0))));
}
B7388f8:{NFSU2_TR(0x7388f8);
u8 U[32];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w8(U+8,u64(s64(s32(r4(R+24)))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+16,u64(s64(s32(r4(U+4)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+24,u32(r8(U+24)));
}
B7388fd:{NFSU2_TR(0x7388fd);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))&u32(u32(0x1full))));
w4(R+24,shr<u32>(r4(R+24),u64(r4(U+0))));
}
B738900:{NFSU2_TR(0x738900);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7388b1u);}goto L7388b1;}
}
B738902:L738902:{c.instructions+=5;NFSU2_TR(0x738902);
__builtin_memmove((R+0),gp(0x8b5708),4);
}
B738907:{NFSU2_TR(0x738907);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B738908:{NFSU2_TR(0x738908);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x20ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x20ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B73890b:{NFSU2_TR(0x73890b);
__builtin_memmove(gp(0x8b5708),(R+0),4);
}
B738910:{NFSU2_TR(0x738910);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L738919;}}
}
B738912:L738912:{c.instructions+=2;NFSU2_TR(0x738912);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B738914:{NFSU2_TR(0x738914);
__builtin_memmove(gp(0x8b5708),(R+0),4);
}
B738919:L738919:{c.instructions+=10;NFSU2_TR(0x738919);
u8 U[6];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+4),(U+4),2);
}
B73891e:{NFSU2_TR(0x73891e);
u8 U[10];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x8b5688ull))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+28),2);
s2(u32(r4(U+4)),r2(U+8));
}
B738926:{NFSU2_TR(0x738926);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B738927:{NFSU2_TR(0x738927);
u8 U[10];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x8b568aull))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4),2);
s2(u32(r4(U+4)),r2(U+8));
}
B73892f:{NFSU2_TR(0x73892f);
__builtin_memmove((R+0),(R+24),2);
}
B738932:{NFSU2_TR(0x738932);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B738933:{NFSU2_TR(0x738933);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B738934:{NFSU2_TR(0x738934);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B738935:{NFSU2_TR(0x738935);
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
B738938:{NFSU2_TR(0x738938);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B738940:L738940:{c.instructions+=3;NFSU2_TR(0x738940);
w4(R+0,u32(0x8b568aull));
}
B738945:{NFSU2_TR(0x738945);
w4(R+4,u32(0xffffull));
}
B73894a:{NFSU2_TR(0x73894a);
__builtin_memmove((R+12),(R+12),4);
}
B738950:L738950:{c.instructions+=5;NFSU2_TR(0x738950);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffffeull))));
__builtin_memmove((U+4),(R+4),2);
s2(u32(r4(U+0)),r2(U+4));
}
B738954:{NFSU2_TR(0x738954);
u8 U[2];
__builtin_memmove((U+0),(R+4),2);
s2(u32(r4(R+0)),r2(U+0));
}
B738957:{NFSU2_TR(0x738957);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B73895a:{NFSU2_TR(0x73895a);
u8 U[4];
w1(R+523,sborrow<u32>(r4(R+0),u32(0x8b570aull)));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x8b570aull))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B73895f:{NFSU2_TR(0x73895f);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x738950u);}goto L738950;}}
}
B738961:L738961:{c.instructions+=17;NFSU2_TR(0x738961);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B738965:{NFSU2_TR(0x738965);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(u32(0x10001ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B73896b:{NFSU2_TR(0x73896b);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xf22d0e56ull))));
__builtin_memmove((R+0),(U+0),4);
}
B738971:{NFSU2_TR(0x738971);
__builtin_memmove(gp(0x819ab4),(R+0),4);
}
B738976:{NFSU2_TR(0x738976);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x69fbe76dull))));
}
B73897b:{NFSU2_TR(0x73897b);
__builtin_memmove(gp(0x819ab8),(R+0),4);
}
B738980:{NFSU2_TR(0x738980);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x3df3b646ull))));
}
B738985:{NFSU2_TR(0x738985);
__builtin_memmove(gp(0x819abc),(R+0),4);
}
B73898a:{NFSU2_TR(0x73898a);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x40dde76dull))));
}
B73898f:{NFSU2_TR(0x73898f);
__builtin_memmove(gp(0x819ac0),(R+0),4);
}
B738994:{NFSU2_TR(0x738994);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x68cd851full))));
}
B738999:{NFSU2_TR(0x738999);
__builtin_memmove(gp(0x819ac4),(R+0),4);
}
B73899e:{NFSU2_TR(0x73899e);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xd1a9fbe7ull))));
}
B7389a3:{NFSU2_TR(0x7389a3);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x8000001full))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
}
B7389a9:{NFSU2_TR(0x7389a9);
s4(0x8b5708,u32(0x0ull));
}
B7389b3:{NFSU2_TR(0x7389b3);
__builtin_memmove(gp(0x819ac8),(R+0),4);
}
B7389b8:{NFSU2_TR(0x7389b8);
u8 U[1];
w1(U+0,u8(!(r1(R+519))));
if(r1(U+0)){{goto L7389bf;}}
}
B7389ba:L7389ba:{c.instructions+=3;NFSU2_TR(0x7389ba);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
}
B7389bb:{NFSU2_TR(0x7389bb);
w4(R+4,u32(u32(r4(R+4))|u32(u32(0xffffffe0ull))));
}
B7389be:{NFSU2_TR(0x7389be);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B7389bf:L7389bf:{c.instructions+=4;NFSU2_TR(0x7389bf);
w4(R+0,u32(0x20ull));
}
B7389c4:{NFSU2_TR(0x7389c4);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+4))));
}
B7389c6:{NFSU2_TR(0x7389c6);
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
B7389c8:{NFSU2_TR(0x7389c8);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L7389d9;}}
}
B7389ca:L7389ca:{c.instructions+=3;NFSU2_TR(0x7389ca);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7389cb:{NFSU2_TR(0x7389cb);
__builtin_memmove((R+24),(R+0),4);
}
B7389cd:{NFSU2_TR(0x7389cd);
__builtin_memmove((R+4),(R+4),4);
}
B7389d0:L7389d0:{c.instructions+=1;NFSU2_TR(0x7389d0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7389d5ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x738750u);}goto L738750;}
}
B7389d5:L7389d5:{c.instructions+=2;NFSU2_TR(0x7389d5);
u8 U[6];
w1(R+523,sborrow<u32>(r4(R+24),u32(0x1ull)));
w4(R+24,u32(u32(r4(R+24))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B7389d6:{NFSU2_TR(0x7389d6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7389d0u);}goto L7389d0;}}
}
B7389d8:L7389d8:{c.instructions+=1;NFSU2_TR(0x7389d8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B7389d9:L7389d9:{c.instructions+=1;NFSU2_TR(0x7389d9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7389e0:L7389e0:{c.instructions+=4;NFSU2_TR(0x7389e0);
__builtin_memmove((R+4),gp(0x8b516c),4);
}
B7389e6:{NFSU2_TR(0x7389e6);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B7389e8:{NFSU2_TR(0x7389e8);
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
B7389ea:{NFSU2_TR(0x7389ea);
if(r1(R+518)){{goto L7389ee;}}
}
B7389ec:L7389ec:{c.instructions+=1;NFSU2_TR(0x7389ec);
{u32 t_=u32(r4(R+4));TAIL_DYNAMIC(t_);}
}
B7389ee:L7389ee:{c.instructions+=1;NFSU2_TR(0x7389ee);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7389f0:L7389f0:{c.instructions+=8;NFSU2_TR(0x7389f0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7389f4:{NFSU2_TR(0x7389f4);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B7389f8:{NFSU2_TR(0x7389f8);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7389f9:{NFSU2_TR(0x7389f9);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x5ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+24,u32(r1(U+4)));
}
B7389fd:{NFSU2_TR(0x7389fd);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B7389ff:{NFSU2_TR(0x7389ff);
u8 U[14];
__builtin_memmove((U+6),(R+24),4);
w1(R+512,u8((r4(R+8))<(r4(U+6))));
w1(R+523,sborrow<u32>(r4(R+8),r4(U+6)));
w4(U+10,u32(u32(r4(R+8))-u32(r4(U+6))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B738a01:{NFSU2_TR(0x738a01);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B738a02:{NFSU2_TR(0x738a02);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L738a16;}}
}
B738a04:L738a04:{c.instructions+=6;NFSU2_TR(0x738a04);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B738a06:{NFSU2_TR(0x738a06);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B738a09:{NFSU2_TR(0x738a09);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x7full))));
}
B738a0c:{NFSU2_TR(0x738a0c);
u8 U[6];
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x2ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B738a0f:{NFSU2_TR(0x738a0f);
u8 U[32];
w8(U+8,u64(s64(s32(r4(R+0)))));
w8(U+16,u64(s64(s32(r4(R+8)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+0,u32(r8(U+24)));
w8(U+0,u64(s64(s32(r4(R+0)))));
w1(R+512,u8((r8(U+0))!=(r8(U+24))));
__builtin_memmove((R+523),(R+512),1);
}
B738a12:{NFSU2_TR(0x738a12);
u8 U[12];
w4(U+0,u32(u32(u32(0xeull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B738a16:L738a16:{c.instructions+=1;NFSU2_TR(0x738a16);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B738a20:L738a20:{c.instructions+=7;NFSU2_TR(0x738a20);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B738a24:{NFSU2_TR(0x738a24);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x5ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+8,u32(r1(U+4)));
}
B738a28:{NFSU2_TR(0x738a28);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B738a29:{NFSU2_TR(0x738a29);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B738a2d:{NFSU2_TR(0x738a2d);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B738a2f:{NFSU2_TR(0x738a2f);
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
B738a31:{NFSU2_TR(0x738a31);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L738a9c;}}
}
B738a33:L738a33:{c.instructions+=23;NFSU2_TR(0x738a33);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B738a35:{NFSU2_TR(0x738a35);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B738a38:{NFSU2_TR(0x738a38);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B738a39:{NFSU2_TR(0x738a39);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B738a3a:{NFSU2_TR(0x738a3a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B738a3b:{NFSU2_TR(0x738a3b);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x7full))));
}
B738a3e:{NFSU2_TR(0x738a3e);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x2ull))));
}
B738a41:{NFSU2_TR(0x738a41);
__builtin_memmove((R+28),(R+0),4);
}
B738a43:{NFSU2_TR(0x738a43);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x7ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B738a47:{NFSU2_TR(0x738a47);
__builtin_memmove((R+8),(R+28),4);
}
B738a49:{NFSU2_TR(0x738a49);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(r4(R+12)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B738a4c:{NFSU2_TR(0x738a4c);
u8 U[13];
w4(U+0,u32(u32(u32(0xdull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
w4(R+20,u32(r1(U+12)));
}
B738a51:{NFSU2_TR(0x738a51);
u8 U[12];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+24),(U+8),4);
}
B738a55:{NFSU2_TR(0x738a55);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
w4(R+8,u32(r1(U+0)));
}
B738a58:{NFSU2_TR(0x738a58);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B738a5b:{NFSU2_TR(0x738a5b);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+20))));
}
B738a5d:{NFSU2_TR(0x738a5d);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B738a5e:{NFSU2_TR(0x738a5e);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1ull))));
__builtin_memmove((R+20),(U+0),4);
}
B738a61:{NFSU2_TR(0x738a61);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x5ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+12,u32(r1(U+4)));
}
B738a65:{NFSU2_TR(0x738a65);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B738a68:{NFSU2_TR(0x738a68);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(r4(R+0)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B738a6b:{NFSU2_TR(0x738a6b);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+20),r4(U+0)));
w4(U+4,u32(u32(r4(R+20))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B738a6d:{NFSU2_TR(0x738a6d);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L738a75;}}
}
B738a6f:L738a6f:{c.instructions+=2;NFSU2_TR(0x738a6f);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(r2(U+4)));
}
B738a73:{NFSU2_TR(0x738a73);
{goto L738a83;}
}
B738a75:L738a75:{c.instructions+=4;NFSU2_TR(0x738a75);
u8 U[9];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
w4(R+4,u32(r1(U+8)));
}
B738a79:{NFSU2_TR(0x738a79);
u8 U[13];
w4(U+0,u32(u32(u32(0x1ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
w4(R+24,u32(r1(U+12)));
}
B738a7e:{NFSU2_TR(0x738a7e);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B738a81:{NFSU2_TR(0x738a81);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+24))));
}
B738a83:L738a83:{c.instructions+=10;NFSU2_TR(0x738a83);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(r4(R+0)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B738a86:{NFSU2_TR(0x738a86);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B738a8a:{NFSU2_TR(0x738a8a);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+0)),r4(U+0));
}
B738a8c:{NFSU2_TR(0x738a8c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B738a8d:{NFSU2_TR(0x738a8d);
u8 U[6];
w1(R+512,u8((r4(R+4))<(r4(R+8))));
w1(R+523,sborrow<u32>(r4(R+4),r4(R+8)));
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+8))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B738a8f:{NFSU2_TR(0x738a8f);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B738a93:{NFSU2_TR(0x738a93);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B738a94:{NFSU2_TR(0x738a94);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+8)),r4(U+0));
}
B738a96:{NFSU2_TR(0x738a96);
w4(R+0,u32(0x1ull));
}
B738a9b:{NFSU2_TR(0x738a9b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B738a9c:L738a9c:{c.instructions+=2;NFSU2_TR(0x738a9c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B738a9d:{NFSU2_TR(0x738a9d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B738aa0:L738aa0:{c.instructions+=11;NFSU2_TR(0x738aa0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B738aa1:{NFSU2_TR(0x738aa1);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B738aa2:{NFSU2_TR(0x738aa2);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B738aa6:{NFSU2_TR(0x738aa6);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B738aa7:{NFSU2_TR(0x738aa7);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+28,u32(r1(U+4)));
}
B738aab:{NFSU2_TR(0x738aab);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B738aad:{NFSU2_TR(0x738aad);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+28,shr<u32>(r4(R+28),u64(r4(U+0))));
}
B738ab0:{NFSU2_TR(0x738ab0);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B738ab2:{NFSU2_TR(0x738ab2);
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
B738ab4:{NFSU2_TR(0x738ab4);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B738ab8:{NFSU2_TR(0x738ab8);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L738b10;}}
}
B738aba:L738aba:{c.instructions+=2;NFSU2_TR(0x738aba);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B738abb:{NFSU2_TR(0x738abb);
{goto L738ac0;}
}
B738ac0:L738ac0:{c.instructions+=5;NFSU2_TR(0x738ac0);
u8 U[13];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+12))));
w4(U+4,u32(u32(r4(R+20))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
w4(R+0,u32(r1(U+12)));
}
B738ac5:{NFSU2_TR(0x738ac5);
u8 U[13];
w4(U+0,u32(u32(u32(0x2ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
w4(R+4,u32(r1(U+12)));
}
B738aca:{NFSU2_TR(0x738aca);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+20))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B738ace:{NFSU2_TR(0x738ace);
u8 U[22];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
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
B738ad2:{NFSU2_TR(0x738ad2);
if(r1(R+518)){{goto L738b0a;}}
}
B738ad4:L738ad4:{c.instructions+=4;NFSU2_TR(0x738ad4);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+24,u32(s32(s8(r1(U+4)))));
}
B738ad8:{NFSU2_TR(0x738ad8);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B738ada:{NFSU2_TR(0x738ada);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B738adc:{NFSU2_TR(0x738adc);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L738afc;}}
}
B738ade:L738ade:{c.instructions+=1;NFSU2_TR(0x738ade);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0xcull))));
}
B738ae1:L738ae1:{c.instructions+=3;NFSU2_TR(0x738ae1);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+8))),1);
w4(R+0,u32(r1(U+0)));
}
B738ae4:{NFSU2_TR(0x738ae4);
u8 U[16];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B738ae8:{NFSU2_TR(0x738ae8);
if(r1(R+518)){{goto L738af4;}}
}
B738aea:L738aea:{c.instructions+=4;NFSU2_TR(0x738aea);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B738aeb:{NFSU2_TR(0x738aeb);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x8ull))));
}
B738aee:{NFSU2_TR(0x738aee);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B738af0:{NFSU2_TR(0x738af0);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x738ae1u);}goto L738ae1;}}
}
B738af2:L738af2:{c.instructions+=1;NFSU2_TR(0x738af2);
{goto L738afc;}
}
B738af4:L738af4:{c.instructions+=1;NFSU2_TR(0x738af4);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B738afc:L738afc:{c.instructions+=3;NFSU2_TR(0x738afc);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B738afd:{NFSU2_TR(0x738afd);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
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
B738aff:{NFSU2_TR(0x738aff);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x738ac0u);}goto L738ac0;}}
}
B738b01:L738b01:{c.instructions+=6;NFSU2_TR(0x738b01);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B738b05:{NFSU2_TR(0x738b05);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B738b06:{NFSU2_TR(0x738b06);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B738b07:{NFSU2_TR(0x738b07);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B738b08:{NFSU2_TR(0x738b08);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B738b09:{NFSU2_TR(0x738b09);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B738b0a:L738b0a:{c.instructions+=2;NFSU2_TR(0x738b0a);
w4(R+0,u32(0x1ull));
}
B738b0f:{NFSU2_TR(0x738b0f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B738b10:L738b10:{c.instructions+=4;NFSU2_TR(0x738b10);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B738b11:{NFSU2_TR(0x738b11);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B738b12:{NFSU2_TR(0x738b12);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B738b13:{NFSU2_TR(0x738b13);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B738b20:L738b20:{c.instructions+=9;NFSU2_TR(0x738b20);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B738b24:{NFSU2_TR(0x738b24);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(r1(U+4)));
}
B738b28:{NFSU2_TR(0x738b28);
u8 U[12];
w4(U+0,u32(u32(u32(0x3ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+8),(U+8),4);
}
B738b2c:{NFSU2_TR(0x738b2c);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B738b30:{NFSU2_TR(0x738b30);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0xfffffffcull))));
}
B738b33:{NFSU2_TR(0x738b33);
u8 U[12];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B738b37:{NFSU2_TR(0x738b37);
u8 U[6];
w1(R+512,carry<u32>(r4(R+8),r4(R+0)));
w1(R+523,scarry<u32>(r4(R+8),r4(R+0)));
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+0))));
w1(R+519,u8(s32(r4(R+8))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+8))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B738b39:{NFSU2_TR(0x738b39);
u8 U[9];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
w4(R+0,u32(r1(U+8)));
}
B738b3d:{NFSU2_TR(0x738b3d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B738b40:L738b40:{c.instructions+=4;NFSU2_TR(0x738b40);
__builtin_memmove((R+0),gp(0x8b5150),4);
}
B738b45:{NFSU2_TR(0x738b45);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xcull))));
}
B738b48:{NFSU2_TR(0x738b48);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B738b4a:{NFSU2_TR(0x738b4a);
if(r1(R+518)){{goto L738bf0;}}
}
B738b50:L738b50:{c.instructions+=7;NFSU2_TR(0x738b50);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B738b51:{NFSU2_TR(0x738b51);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B738b55:{NFSU2_TR(0x738b55);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B738b56:{NFSU2_TR(0x738b56);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B738b5a:{NFSU2_TR(0x738b5a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B738b5b:{NFSU2_TR(0x738b5b);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B738b5c:{NFSU2_TR(0x738b5c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x738b61ull));
TAIL_STATIC(0x736440u,736);
}
B738b61:L738b61:{c.instructions+=13;NFSU2_TR(0x738b61);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B738b65:{NFSU2_TR(0x738b65);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+8,u32(r1(U+4)));
}
B738b69:{NFSU2_TR(0x738b69);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B738b6d:{NFSU2_TR(0x738b6d);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x7ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(r1(U+4)));
}
B738b71:{NFSU2_TR(0x738b71);
u8 U[14];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x2ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),2);
w4(R+24,u32(r2(U+12)));
}
B738b76:{NFSU2_TR(0x738b76);
u8 U[12];
w4(U+0,u32(u32(u32(0x3ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+8),(U+8),4);
}
B738b7a:{NFSU2_TR(0x738b7a);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0xfffffffcull))));
}
B738b7d:{NFSU2_TR(0x738b7d);
u8 U[12];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+8),(U+8),4);
}
B738b81:{NFSU2_TR(0x738b81);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B738b84:{NFSU2_TR(0x738b84);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B738b86:{NFSU2_TR(0x738b86);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B738b89:{NFSU2_TR(0x738b89);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B738b8d:{NFSU2_TR(0x738b8d);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L738bee;}}
}
B738b8f:L738b8f:{c.instructions+=5;NFSU2_TR(0x738b8f);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B738b90:{NFSU2_TR(0x738b90);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x2ull))));
__builtin_memmove((R+24),(U+0),4);
}
B738b93:{NFSU2_TR(0x738b93);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B738b97:{NFSU2_TR(0x738b97);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B738b98:{NFSU2_TR(0x738b98);
{goto L738ba0;}
}
B738ba0:L738ba0:{c.instructions+=5;NFSU2_TR(0x738ba0);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
w4(R+0,u32(r1(U+0)));
}
B738ba3:{NFSU2_TR(0x738ba3);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B738ba5:{NFSU2_TR(0x738ba5);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfffffffeull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+12,u32(r1(U+4)));
}
B738ba9:{NFSU2_TR(0x738ba9);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xffffffffull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+28,u32(r1(U+4)));
}
B738bad:{NFSU2_TR(0x738bad);
if(r1(R+518)){{goto L738bb4;}}
}
B738baf:L738baf:{c.instructions+=2;NFSU2_TR(0x738baf);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B738bb2:{NFSU2_TR(0x738bb2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L738bde;}}
}
B738bb4:L738bb4:{c.instructions+=4;NFSU2_TR(0x738bb4);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B738bb8:{NFSU2_TR(0x738bb8);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B738bb9:{NFSU2_TR(0x738bb9);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B738bba:{NFSU2_TR(0x738bba);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x738bbfull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x738aa0u);}goto L738aa0;}
}
B738bbf:L738bbf:{c.instructions+=3;NFSU2_TR(0x738bbf);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B738bc2:{NFSU2_TR(0x738bc2);
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
B738bc4:{NFSU2_TR(0x738bc4);
if(r1(R+518)){{goto L738bde;}}
}
B738bc6:L738bc6:{c.instructions+=8;NFSU2_TR(0x738bc6);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B738bca:{NFSU2_TR(0x738bca);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B738bce:{NFSU2_TR(0x738bce);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B738bd1:{NFSU2_TR(0x738bd1);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B738bd2:{NFSU2_TR(0x738bd2);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B738bd3:{NFSU2_TR(0x738bd3);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B738bd4:{NFSU2_TR(0x738bd4);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B738bd5:{NFSU2_TR(0x738bd5);
u8 U[4];
__builtin_memmove((U+0),gp(0x8b5150),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x738bdbull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B738bdb:L738bdb:{c.instructions+=1;NFSU2_TR(0x738bdb);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B738bde:L738bde:{c.instructions+=5;NFSU2_TR(0x738bde);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B738be2:{NFSU2_TR(0x738be2);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x3ull))));
}
B738be5:{NFSU2_TR(0x738be5);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B738be6:{NFSU2_TR(0x738be6);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B738bea:{NFSU2_TR(0x738bea);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x738ba0u);}goto L738ba0;}}
}
B738bec:L738bec:{c.instructions+=2;NFSU2_TR(0x738bec);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B738bed:{NFSU2_TR(0x738bed);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B738bee:L738bee:{c.instructions+=2;NFSU2_TR(0x738bee);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B738bef:{NFSU2_TR(0x738bef);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B738bf0:L738bf0:{c.instructions+=2;NFSU2_TR(0x738bf0);
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
B738bf3:{NFSU2_TR(0x738bf3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B738c00:L738c00:{c.instructions+=13;NFSU2_TR(0x738c00);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x14ull))));
}
B738c03:{NFSU2_TR(0x738c03);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B738c07:{NFSU2_TR(0x738c07);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B738c08:{NFSU2_TR(0x738c08);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B738c09:{NFSU2_TR(0x738c09);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B738c0a:{NFSU2_TR(0x738c0a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B738c0b:{NFSU2_TR(0x738c0b);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B738c0f:{NFSU2_TR(0x738c0f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B738c10:{NFSU2_TR(0x738c10);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B738c12:{NFSU2_TR(0x738c12);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B738c13:{NFSU2_TR(0x738c13);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B738c17:{NFSU2_TR(0x738c17);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B738c1b:{NFSU2_TR(0x738c1b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x738c20ull));
TAIL_STATIC(0x736440u,736);
}
B738c20:L738c20:{c.instructions+=11;NFSU2_TR(0x738c20);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B738c24:{NFSU2_TR(0x738c24);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+8,u32(r1(U+4)));
}
B738c28:{NFSU2_TR(0x738c28);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x7ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(r1(U+4)));
}
B738c2c:{NFSU2_TR(0x738c2c);
u8 U[12];
w4(U+0,u32(u32(u32(0x3ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+8),(U+8),4);
}
B738c30:{NFSU2_TR(0x738c30);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0xfffffffcull))));
}
B738c33:{NFSU2_TR(0x738c33);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B738c36:{NFSU2_TR(0x738c36);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B738c38:{NFSU2_TR(0x738c38);
u8 U[12];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+28),(U+8),4);
}
B738c3c:{NFSU2_TR(0x738c3c);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B738c40:{NFSU2_TR(0x738c40);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B738c44:{NFSU2_TR(0x738c44);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L738cbb;}}
}
B738c46:L738c46:{c.instructions+=3;NFSU2_TR(0x738c46);
w4(R+20,u32(0x1full));
}
B738c4b:{NFSU2_TR(0x738c4b);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B738c4f:{NFSU2_TR(0x738c4f);
}
B738c50:L738c50:{c.instructions+=5;NFSU2_TR(0x738c50);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B738c54:{NFSU2_TR(0x738c54);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+28))),1);
w4(R+8,u32(r1(U+0)));
}
B738c57:{NFSU2_TR(0x738c57);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B738c59:{NFSU2_TR(0x738c59);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B738c5b:{NFSU2_TR(0x738c5b);
if(r1(R+518)){{goto L738ca8;}}
}
B738c5d:L738c5d:{c.instructions+=8;NFSU2_TR(0x738c5d);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B738c61:{NFSU2_TR(0x738c61);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B738c64:{NFSU2_TR(0x738c64);
__builtin_memmove((R+4),(R+20),4);
}
B738c66:{NFSU2_TR(0x738c66);
w4(R+24,u32(0x1ull));
}
B738c6b:{NFSU2_TR(0x738c6b);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+24,shl<u32>(r4(R+24),u64(r1(U+0))));
}
B738c6d:{NFSU2_TR(0x738c6d);
__builtin_memmove((R+4),gp(0x8b514c),4);
}
B738c73:{NFSU2_TR(0x738c73);
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
B738c75:{NFSU2_TR(0x738c75);
if(r1(R+518)){{goto L738c96;}}
}
B738c77:L738c77:{c.instructions+=7;NFSU2_TR(0x738c77);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B738c7b:{NFSU2_TR(0x738c7b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B738c7c:{NFSU2_TR(0x738c7c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B738c7d:{NFSU2_TR(0x738c7d);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B738c7e:{NFSU2_TR(0x738c7e);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B738c82:{NFSU2_TR(0x738c82);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B738c83:{NFSU2_TR(0x738c83);
u8 U[4];
__builtin_memmove((U+0),gp(0x8b514c),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x738c89ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B738c89:L738c89:{c.instructions+=3;NFSU2_TR(0x738c89);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B738c8c:{NFSU2_TR(0x738c8c);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B738c8e:{NFSU2_TR(0x738c8e);
if(r1(R+518)){{goto L738c9a;}}
}
B738c90:L738c90:{c.instructions+=1;NFSU2_TR(0x738c90);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L738c96;}}
}
B738c92:L738c92:{c.instructions+=2;NFSU2_TR(0x738c92);
__builtin_memmove((R+12),(R+24),4);
}
B738c94:{NFSU2_TR(0x738c94);
{goto L738c9a;}
}
B738c96:L738c96:{c.instructions+=1;NFSU2_TR(0x738c96);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(r4(R+24))));
s4(u32(r4(U+0)),r4(U+4));
}
B738c9a:L738c9a:{c.instructions+=4;NFSU2_TR(0x738c9a);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B738c9e:{NFSU2_TR(0x738c9e);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B738ca2:{NFSU2_TR(0x738ca2);
w4(R+0,u32(u32(r4(R+0))|u32(r4(R+12))));
}
B738ca4:{NFSU2_TR(0x738ca4);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B738ca8:L738ca8:{c.instructions+=6;NFSU2_TR(0x738ca8);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B738cac:{NFSU2_TR(0x738cac);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x3ull))));
}
B738caf:{NFSU2_TR(0x738caf);
w4(R+20,u32(u32(r4(R+20))-u32(u32(0x1ull))));
}
B738cb0:{NFSU2_TR(0x738cb0);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B738cb1:{NFSU2_TR(0x738cb1);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B738cb5:{NFSU2_TR(0x738cb5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x738c50u);}goto L738c50;}}
}
B738cb7:L738cb7:{c.instructions+=1;NFSU2_TR(0x738cb7);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B738cbb:L738cbb:{c.instructions+=2;NFSU2_TR(0x738cbb);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B738cbd:{NFSU2_TR(0x738cbd);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L738d37;}}
}
B738cbf:L738cbf:{c.instructions+=3;NFSU2_TR(0x738cbf);
w4(R+20,u32(0x1full));
}
B738cc4:{NFSU2_TR(0x738cc4);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B738cc8:{NFSU2_TR(0x738cc8);
{goto L738cd0;}
}
B738cd0:L738cd0:{c.instructions+=5;NFSU2_TR(0x738cd0);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B738cd4:{NFSU2_TR(0x738cd4);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+28))),1);
w4(R+8,u32(r1(U+0)));
}
B738cd7:{NFSU2_TR(0x738cd7);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B738cd9:{NFSU2_TR(0x738cd9);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B738cdb:{NFSU2_TR(0x738cdb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L738d12;}}
}
B738cdd:L738cdd:{c.instructions+=6;NFSU2_TR(0x738cdd);
__builtin_memmove((R+0),gp(0x8b514c),4);
}
B738ce2:{NFSU2_TR(0x738ce2);
w4(R+24,u32(0x1ull));
}
B738ce7:{NFSU2_TR(0x738ce7);
__builtin_memmove((R+4),(R+20),4);
}
B738ce9:{NFSU2_TR(0x738ce9);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+24,shl<u32>(r4(R+24),u64(r1(U+0))));
}
B738ceb:{NFSU2_TR(0x738ceb);
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
B738ced:{NFSU2_TR(0x738ced);
if(r1(R+518)){{goto L738d0a;}}
}
B738cef:L738cef:{c.instructions+=7;NFSU2_TR(0x738cef);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B738cf3:{NFSU2_TR(0x738cf3);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B738cf4:{NFSU2_TR(0x738cf4);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B738cf5:{NFSU2_TR(0x738cf5);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B738cf6:{NFSU2_TR(0x738cf6);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B738cfa:{NFSU2_TR(0x738cfa);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B738cfb:{NFSU2_TR(0x738cfb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x738cfdull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B738cfd:L738cfd:{c.instructions+=3;NFSU2_TR(0x738cfd);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B738d00:{NFSU2_TR(0x738d00);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B738d02:{NFSU2_TR(0x738d02);
if(r1(R+518)){{goto L738d0e;}}
}
B738d04:L738d04:{c.instructions+=1;NFSU2_TR(0x738d04);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L738d0a;}}
}
B738d06:L738d06:{c.instructions+=2;NFSU2_TR(0x738d06);
__builtin_memmove((R+12),(R+24),4);
}
B738d08:{NFSU2_TR(0x738d08);
{goto L738d0e;}
}
B738d0a:L738d0a:{c.instructions+=1;NFSU2_TR(0x738d0a);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(r4(R+24))));
s4(u32(r4(U+0)),r4(U+4));
}
B738d0e:L738d0e:{c.instructions+=1;NFSU2_TR(0x738d0e);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(r4(R+12))));
s4(u32(r4(U+0)),r4(U+4));
}
B738d12:L738d12:{c.instructions+=6;NFSU2_TR(0x738d12);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B738d16:{NFSU2_TR(0x738d16);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x3ull))));
}
B738d19:{NFSU2_TR(0x738d19);
w4(R+20,u32(u32(r4(R+20))-u32(u32(0x1ull))));
}
B738d1a:{NFSU2_TR(0x738d1a);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B738d1b:{NFSU2_TR(0x738d1b);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B738d1f:{NFSU2_TR(0x738d1f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x738cd0u);}goto L738cd0;}}
}
B738d21:L738d21:{c.instructions+=10;NFSU2_TR(0x738d21);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B738d25:{NFSU2_TR(0x738d25);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B738d29:{NFSU2_TR(0x738d29);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B738d2a:{NFSU2_TR(0x738d2a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B738d2b:{NFSU2_TR(0x738d2b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B738d2c:{NFSU2_TR(0x738d2c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B738d2e:{NFSU2_TR(0x738d2e);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B738d32:{NFSU2_TR(0x738d32);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B738d33:{NFSU2_TR(0x738d33);
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
B738d36:{NFSU2_TR(0x738d36);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B738d37:L738d37:{c.instructions+=10;NFSU2_TR(0x738d37);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B738d3b:{NFSU2_TR(0x738d3b);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B738d3f:{NFSU2_TR(0x738d3f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B738d40:{NFSU2_TR(0x738d40);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B738d41:{NFSU2_TR(0x738d41);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B738d42:{NFSU2_TR(0x738d42);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+8)),r4(U+0));
}
B738d44:{NFSU2_TR(0x738d44);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B738d48:{NFSU2_TR(0x738d48);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B738d49:{NFSU2_TR(0x738d49);
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
B738d4c:{NFSU2_TR(0x738d4c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B738d50:L738d50:{c.instructions+=26;NFSU2_TR(0x738d50);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B738d51:{NFSU2_TR(0x738d51);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B738d55:{NFSU2_TR(0x738d55);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B738d56:{NFSU2_TR(0x738d56);
u8 U[4];
w4(U+0,u32(0x0ull));
s4(u32(r4(R+12)),r4(U+0));
}
B738d5c:{NFSU2_TR(0x738d5c);
u8 U[4];
w4(U+0,u32(0x0ull));
s4(u32(r4(R+28)),r4(U+0));
}
B738d62:{NFSU2_TR(0x738d62);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x7ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+24,u32(r1(U+4)));
}
B738d66:{NFSU2_TR(0x738d66);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(r1(U+4)));
}
B738d6a:{NFSU2_TR(0x738d6a);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7ull))));
__builtin_memmove((R+0),(U+0),4);
}
B738d6d:{NFSU2_TR(0x738d6d);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B738d6e:{NFSU2_TR(0x738d6e);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0x7ull))));
}
B738d71:{NFSU2_TR(0x738d71);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+8))));
}
B738d73:{NFSU2_TR(0x738d73);
u8 U[12];
w4(U+0,u32(u32(u32(0x3ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x2ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+24),(U+8),4);
}
B738d77:{NFSU2_TR(0x738d77);
w4(R+24,u32(u32(r4(R+24))&u32(u32(0xfffffffcull))));
}
B738d7a:{NFSU2_TR(0x738d7a);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+20))));
}
B738d7c:{NFSU2_TR(0x738d7c);
u8 U[4];
w4(U+0,u32(u32(u32(0x3ull))&u32(u32(0x1full))));
w4(R+0,sar<u32>(r4(R+0),u64(r4(U+0))));
}
B738d7f:{NFSU2_TR(0x738d7f);
__builtin_memmove((R+20),(R+0),4);
}
B738d81:{NFSU2_TR(0x738d81);
u8 U[32];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w8(U+8,u64(s64(s32(r4(R+20)))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+16,u64(s64(s32(r4(U+4)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+20,u32(r8(U+24)));
}
B738d86:{NFSU2_TR(0x738d86);
u8 U[12];
w4(U+0,u32(u32(u32(0x3ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+8),(U+8),4);
}
B738d8a:{NFSU2_TR(0x738d8a);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(r4(R+0)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B738d8d:{NFSU2_TR(0x738d8d);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0xfffffffcull))));
}
B738d90:{NFSU2_TR(0x738d90);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+8))));
}
B738d92:{NFSU2_TR(0x738d92);
u8 U[12];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+20))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+24),(U+8),4);
}
B738d96:{NFSU2_TR(0x738d96);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+24))));
}
B738d98:{NFSU2_TR(0x738d98);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0x4ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x4ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B738d9b:{NFSU2_TR(0x738d9b);
__builtin_memmove((R+8),(R+4),4);
}
B738d9d:{NFSU2_TR(0x738d9d);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L738dc6;}}
}
B738d9f:L738d9f:{c.instructions+=2;NFSU2_TR(0x738d9f);
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
B738da1:{NFSU2_TR(0x738da1);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L738dc6;}}
}
B738da3:L738da3:{c.instructions+=3;NFSU2_TR(0x738da3);
w4(R+4,u32(0x18ull));
}
B738da8:{NFSU2_TR(0x738da8);
w4(R+24,u32(u32(r4(R+24))-u32(r4(R+8))));
}
B738daa:{NFSU2_TR(0x738daa);
__builtin_memmove((R+12),(R+12),4);
}
B738db0:L738db0:{c.instructions+=10;NFSU2_TR(0x738db0);
u8 U[9];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
w4(R+20,u32(r1(U+8)));
}
B738db4:{NFSU2_TR(0x738db4);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+20,shl<u32>(r4(R+20),u64(r1(U+0))));
}
B738db6:{NFSU2_TR(0x738db6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
w4(U+0,u32(u32(r4(U+0))+u32(r4(R+20))));
s4(u32(r4(R+12)),r4(U+0));
}
B738db8:{NFSU2_TR(0x738db8);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+8))),1);
w4(R+20,u32(r1(U+0)));
}
B738dbb:{NFSU2_TR(0x738dbb);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+20,shl<u32>(r4(R+20),u64(r1(U+0))));
}
B738dbd:{NFSU2_TR(0x738dbd);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x8ull))));
}
B738dc0:{NFSU2_TR(0x738dc0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
w1(R+512,carry<u32>(r4(U+0),r4(R+20)));
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
w4(U+0,u32(u32(r4(U+0))+u32(r4(R+20))));
s4(u32(r4(R+28)),r4(U+0));
}
B738dc2:{NFSU2_TR(0x738dc2);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B738dc3:{NFSU2_TR(0x738dc3);
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
B738dc4:{NFSU2_TR(0x738dc4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x738db0u);}goto L738db0;}}
}
B738dc6:L738dc6:{c.instructions+=3;NFSU2_TR(0x738dc6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B738dc7:{NFSU2_TR(0x738dc7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B738dc8:{NFSU2_TR(0x738dc8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B738dd0:L738dd0:{c.instructions+=10;NFSU2_TR(0x738dd0);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B738dd4:{NFSU2_TR(0x738dd4);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B738dd8:{NFSU2_TR(0x738dd8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x8ull))));
}
B738ddb:{NFSU2_TR(0x738ddb);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B738ddc:{NFSU2_TR(0x738ddc);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B738ddd:{NFSU2_TR(0x738ddd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B738dde:{NFSU2_TR(0x738dde);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B738ddf:{NFSU2_TR(0x738ddf);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+28),(U+0),4);
}
B738de3:{NFSU2_TR(0x738de3);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+12),(U+0),4);
}
B738de7:{NFSU2_TR(0x738de7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x738decull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x738d50u);}goto L738d50;}
}
B738dec:L738dec:{c.instructions+=17;NFSU2_TR(0x738dec);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B738df0:{NFSU2_TR(0x738df0);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B738df4:{NFSU2_TR(0x738df4);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B738df8:{NFSU2_TR(0x738df8);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B738dfc:{NFSU2_TR(0x738dfc);
w4(R+8,u32(~u32(r4(R+8))));
}
B738dfe:{NFSU2_TR(0x738dfe);
w4(R+0,u32(u32(r4(R+0))&u32(r4(R+8))));
}
B738e00:{NFSU2_TR(0x738e00);
w4(R+4,u32(u32(r4(R+4))&u32(r4(R+0))));
}
B738e02:{NFSU2_TR(0x738e02);
w4(R+0,u32(u32(r4(R+0))&u32(r4(R+12))));
}
B738e04:{NFSU2_TR(0x738e04);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B738e07:{NFSU2_TR(0x738e07);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+4))));
}
B738e09:{NFSU2_TR(0x738e09);
w1(R+512,u8((r4(R+0))!=(u32(0x0ull))));
w4(R+0,u32(0-u32(r4(R+0))));
}
B738e0b:{NFSU2_TR(0x738e0b);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(R+0))));
w4(R+0,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B738e0d:{NFSU2_TR(0x738e0d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B738e0e:{NFSU2_TR(0x738e0e);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B738e0f:{NFSU2_TR(0x738e0f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B738e10:{NFSU2_TR(0x738e10);
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
B738e13:{NFSU2_TR(0x738e13);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
XIT:NFSU2_TR_EXIT(0x738,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
