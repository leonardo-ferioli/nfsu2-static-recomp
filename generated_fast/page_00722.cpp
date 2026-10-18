#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_71f(u8* __restrict R,Cpu& c);
u32 body_721(u8* __restrict R,Cpu& c);
u32 body_723(u8* __restrict R,Cpu& c);
u32 body_724(u8* __restrict R,Cpu& c);
u32 body_725(u8* __restrict R,Cpu& c);
u32 body_727(u8* __restrict R,Cpu& c);
u32 body_75b(u8* __restrict R,Cpu& c);
u32 body_770(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x722,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x722,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_722(u8* __restrict R,Cpu& c);
u32 page_722(Cpu& c){return body_722(c.regs.data(),c);}
__attribute__((noinline)) u32 body_722(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x722004:goto L722004;
case 0x722005:c.instructions+=2;goto B722005;
case 0x722008:c.instructions+=1;goto B722008;
case 0x72200d:goto L72200d;
case 0x72200f:c.instructions+=4;goto B72200f;
case 0x722011:c.instructions+=3;goto B722011;
case 0x722013:c.instructions+=2;goto B722013;
case 0x722014:c.instructions+=1;goto B722014;
case 0x722016:goto L722016;
case 0x72201c:c.instructions+=11;goto B72201c;
case 0x72201f:c.instructions+=10;goto B72201f;
case 0x722022:c.instructions+=9;goto B722022;
case 0x722024:c.instructions+=8;goto B722024;
case 0x722028:c.instructions+=7;goto B722028;
case 0x722029:c.instructions+=6;goto B722029;
case 0x72202d:c.instructions+=5;goto B72202d;
case 0x722030:c.instructions+=4;goto B722030;
case 0x722038:c.instructions+=3;goto B722038;
case 0x72203b:c.instructions+=2;goto B72203b;
case 0x72203c:c.instructions+=1;goto B72203c;
case 0x72203e:goto L72203e;
case 0x722043:c.instructions+=9;goto B722043;
case 0x722046:c.instructions+=8;goto B722046;
case 0x722049:c.instructions+=7;goto B722049;
case 0x72204c:c.instructions+=6;goto B72204c;
case 0x72204e:c.instructions+=5;goto B72204e;
case 0x72204f:c.instructions+=4;goto B72204f;
case 0x722052:c.instructions+=3;goto B722052;
case 0x722058:c.instructions+=2;goto B722058;
case 0x72205b:c.instructions+=1;goto B72205b;
case 0x722060:goto L722060;
case 0x722066:c.instructions+=2;goto B722066;
case 0x722067:c.instructions+=1;goto B722067;
case 0x722069:goto L722069;
case 0x72206a:c.instructions+=2;goto B72206a;
case 0x72206b:c.instructions+=1;goto B72206b;
case 0x722070:goto L722070;
case 0x722071:c.instructions+=4;goto B722071;
case 0x722077:c.instructions+=3;goto B722077;
case 0x722078:c.instructions+=2;goto B722078;
case 0x722079:c.instructions+=1;goto B722079;
case 0x72207b:goto L72207b;
case 0x722081:c.instructions+=7;goto B722081;
case 0x722082:c.instructions+=6;goto B722082;
case 0x722085:c.instructions+=5;goto B722085;
case 0x722086:c.instructions+=4;goto B722086;
case 0x722088:c.instructions+=3;goto B722088;
case 0x72208a:c.instructions+=2;goto B72208a;
case 0x72208d:c.instructions+=1;goto B72208d;
case 0x72208f:goto L72208f;
case 0x722092:c.instructions+=3;goto B722092;
case 0x722093:c.instructions+=2;goto B722093;
case 0x722098:c.instructions+=1;goto B722098;
case 0x72209d:goto L72209d;
case 0x72209e:c.instructions+=1;goto B72209e;
case 0x72209f:goto L72209f;
case 0x7220a0:c.instructions+=5;goto B7220a0;
case 0x7220a2:c.instructions+=4;goto B7220a2;
case 0x7220a3:c.instructions+=3;goto B7220a3;
case 0x7220a4:c.instructions+=2;goto B7220a4;
case 0x7220ab:c.instructions+=1;goto B7220ab;
case 0x7220ad:goto L7220ad;
case 0x7220af:c.instructions+=1;goto B7220af;
case 0x7220b1:goto L7220b1;
case 0x7220b4:c.instructions+=1;goto B7220b4;
case 0x7220b9:goto L7220b9;
case 0x7220bb:c.instructions+=2;goto B7220bb;
case 0x7220bc:c.instructions+=1;goto B7220bc;
case 0x7220be:goto L7220be;
case 0x7220c0:goto L7220c0;
case 0x7220c1:c.instructions+=2;goto B7220c1;
case 0x7220c2:c.instructions+=1;goto B7220c2;
case 0x7220c3:goto L7220c3;
case 0x7220c7:c.instructions+=4;goto B7220c7;
case 0x7220ca:c.instructions+=3;goto B7220ca;
case 0x7220d0:c.instructions+=2;goto B7220d0;
case 0x7220d3:c.instructions+=1;goto B7220d3;
case 0x7220d5:goto L7220d5;
case 0x7220d6:c.instructions+=4;goto B7220d6;
case 0x7220d9:c.instructions+=3;goto B7220d9;
case 0x7220db:c.instructions+=2;goto B7220db;
case 0x7220de:c.instructions+=1;goto B7220de;
case 0x7220e3:goto L7220e3;
case 0x7220e6:c.instructions+=2;goto B7220e6;
case 0x7220e7:c.instructions+=1;goto B7220e7;
case 0x7220e8:goto L7220e8;
case 0x7220ea:c.instructions+=10;goto B7220ea;
case 0x7220eb:c.instructions+=9;goto B7220eb;
case 0x7220ee:c.instructions+=8;goto B7220ee;
case 0x7220ef:c.instructions+=7;goto B7220ef;
case 0x7220f0:c.instructions+=6;goto B7220f0;
case 0x7220f2:c.instructions+=5;goto B7220f2;
case 0x7220f8:c.instructions+=4;goto B7220f8;
case 0x7220fe:c.instructions+=3;goto B7220fe;
case 0x7220ff:c.instructions+=2;goto B7220ff;
case 0x722104:c.instructions+=1;goto B722104;
case 0x722107:goto L722107;
case 0x72210d:c.instructions+=5;goto B72210d;
case 0x72210f:c.instructions+=4;goto B72210f;
case 0x722111:c.instructions+=3;goto B722111;
case 0x722113:c.instructions+=2;goto B722113;
case 0x722116:c.instructions+=1;goto B722116;
case 0x722118:goto L722118;
case 0x72211b:c.instructions+=3;goto B72211b;
case 0x72211c:c.instructions+=2;goto B72211c;
case 0x72211e:c.instructions+=1;goto B72211e;
case 0x722123:goto L722123;
case 0x722126:c.instructions+=13;goto B722126;
case 0x722129:c.instructions+=12;goto B722129;
case 0x72212c:c.instructions+=11;goto B72212c;
case 0x72212e:c.instructions+=10;goto B72212e;
case 0x722131:c.instructions+=9;goto B722131;
case 0x722137:c.instructions+=8;goto B722137;
case 0x72213a:c.instructions+=7;goto B72213a;
case 0x72213c:c.instructions+=6;goto B72213c;
case 0x722142:c.instructions+=5;goto B722142;
case 0x722144:c.instructions+=4;goto B722144;
case 0x722146:c.instructions+=3;goto B722146;
case 0x722148:c.instructions+=2;goto B722148;
case 0x72214b:c.instructions+=1;goto B72214b;
case 0x72214d:goto L72214d;
case 0x722150:c.instructions+=6;goto B722150;
case 0x722153:c.instructions+=5;goto B722153;
case 0x722156:c.instructions+=4;goto B722156;
case 0x722157:c.instructions+=3;goto B722157;
case 0x722159:c.instructions+=2;goto B722159;
case 0x722160:c.instructions+=1;goto B722160;
case 0x722165:goto L722165;
case 0x722168:c.instructions+=2;goto B722168;
case 0x722169:c.instructions+=1;goto B722169;
case 0x72216b:goto L72216b;
case 0x72216c:c.instructions+=5;goto B72216c;
case 0x72216d:c.instructions+=4;goto B72216d;
case 0x72216f:c.instructions+=3;goto B72216f;
case 0x722170:c.instructions+=2;goto B722170;
case 0x722171:c.instructions+=1;goto B722171;
case 0x722172:goto L722172;
case 0x722173:c.instructions+=5;goto B722173;
case 0x722177:c.instructions+=4;goto B722177;
case 0x722178:c.instructions+=3;goto B722178;
case 0x72217a:c.instructions+=2;goto B72217a;
case 0x722180:c.instructions+=1;goto B722180;
case 0x722181:goto L722181;
case 0x722187:c.instructions+=5;goto B722187;
case 0x72218a:c.instructions+=4;goto B72218a;
case 0x72218c:c.instructions+=3;goto B72218c;
case 0x72218e:c.instructions+=2;goto B72218e;
case 0x722191:c.instructions+=1;goto B722191;
case 0x722193:goto L722193;
case 0x722194:c.instructions+=2;goto B722194;
case 0x722199:c.instructions+=1;goto B722199;
case 0x72219e:goto L72219e;
case 0x7221a1:c.instructions+=2;goto B7221a1;
case 0x7221a2:c.instructions+=1;goto B7221a2;
case 0x7221a4:goto L7221a4;
case 0x7221a5:c.instructions+=2;goto B7221a5;
case 0x7221a6:c.instructions+=1;goto B7221a6;
case 0x7221a7:goto L7221a7;
case 0x7221a8:c.instructions+=14;goto B7221a8;
case 0x7221aa:c.instructions+=13;goto B7221aa;
case 0x7221ad:c.instructions+=12;goto B7221ad;
case 0x7221ae:c.instructions+=11;goto B7221ae;
case 0x7221af:c.instructions+=10;goto B7221af;
case 0x7221b2:c.instructions+=9;goto B7221b2;
case 0x7221b3:c.instructions+=8;goto B7221b3;
case 0x7221b9:c.instructions+=7;goto B7221b9;
case 0x7221ba:c.instructions+=6;goto B7221ba;
case 0x7221bd:c.instructions+=5;goto B7221bd;
case 0x7221be:c.instructions+=4;goto B7221be;
case 0x7221c1:c.instructions+=3;goto B7221c1;
case 0x7221c2:c.instructions+=2;goto B7221c2;
case 0x7221c5:c.instructions+=1;goto B7221c5;
case 0x7221ca:goto L7221ca;
case 0x7221cd:c.instructions+=2;goto B7221cd;
case 0x7221d0:c.instructions+=1;goto B7221d0;
case 0x7221d5:goto L7221d5;
case 0x7221d9:c.instructions+=5;goto B7221d9;
case 0x7221dc:c.instructions+=4;goto B7221dc;
case 0x7221e0:c.instructions+=3;goto B7221e0;
case 0x7221e2:c.instructions+=2;goto B7221e2;
case 0x7221e5:c.instructions+=1;goto B7221e5;
case 0x7221eb:goto L7221eb;
case 0x7221ee:c.instructions+=4;goto B7221ee;
case 0x7221f1:c.instructions+=3;goto B7221f1;
case 0x7221f4:c.instructions+=2;goto B7221f4;
case 0x7221f7:c.instructions+=1;goto B7221f7;
case 0x7221f9:goto L7221f9;
case 0x7221fc:goto L7221fc;
case 0x722201:c.instructions+=14;goto B722201;
case 0x722205:c.instructions+=13;goto B722205;
case 0x722208:c.instructions+=12;goto B722208;
case 0x72220c:c.instructions+=11;goto B72220c;
case 0x72220f:c.instructions+=10;goto B72220f;
case 0x722212:c.instructions+=9;goto B722212;
case 0x722214:c.instructions+=8;goto B722214;
case 0x72221b:c.instructions+=7;goto B72221b;
case 0x72221f:c.instructions+=6;goto B72221f;
case 0x722222:c.instructions+=5;goto B722222;
case 0x72222a:c.instructions+=4;goto B72222a;
case 0x72222d:c.instructions+=3;goto B72222d;
case 0x722234:c.instructions+=2;goto B722234;
case 0x722237:c.instructions+=1;goto B722237;
case 0x722239:goto L722239;
case 0x72223c:c.instructions+=9;goto B72223c;
case 0x722242:c.instructions+=8;goto B722242;
case 0x722245:c.instructions+=7;goto B722245;
case 0x722248:c.instructions+=6;goto B722248;
case 0x72224b:c.instructions+=5;goto B72224b;
case 0x72224e:c.instructions+=4;goto B72224e;
case 0x722251:c.instructions+=3;goto B722251;
case 0x722254:c.instructions+=2;goto B722254;
case 0x72225a:c.instructions+=1;goto B72225a;
case 0x72225f:goto L72225f;
case 0x722260:c.instructions+=3;goto B722260;
case 0x722263:c.instructions+=2;goto B722263;
case 0x722266:c.instructions+=1;goto B722266;
case 0x72226b:goto L72226b;
case 0x72226e:c.instructions+=4;goto B72226e;
case 0x722271:c.instructions+=3;goto B722271;
case 0x722274:c.instructions+=2;goto B722274;
case 0x72227a:c.instructions+=1;goto B72227a;
case 0x72227c:goto L72227c;
case 0x72227f:c.instructions+=6;goto B72227f;
case 0x722282:c.instructions+=5;goto B722282;
case 0x722283:c.instructions+=4;goto B722283;
case 0x722286:c.instructions+=3;goto B722286;
case 0x72228c:c.instructions+=2;goto B72228c;
case 0x72228f:c.instructions+=1;goto B72228f;
case 0x722294:goto L722294;
case 0x722298:c.instructions+=5;goto B722298;
case 0x72229b:c.instructions+=4;goto B72229b;
case 0x72229f:c.instructions+=3;goto B72229f;
case 0x7222a2:c.instructions+=2;goto B7222a2;
case 0x7222a3:c.instructions+=1;goto B7222a3;
case 0x7222a9:goto L7222a9;
case 0x7222ac:goto L7222ac;
case 0x7222b0:c.instructions+=1;goto B7222b0;
case 0x7222b6:goto L7222b6;
case 0x7222ba:c.instructions+=11;goto B7222ba;
case 0x7222c0:c.instructions+=10;goto B7222c0;
case 0x7222c4:c.instructions+=9;goto B7222c4;
case 0x7222c6:c.instructions+=8;goto B7222c6;
case 0x7222c9:c.instructions+=7;goto B7222c9;
case 0x7222cc:c.instructions+=6;goto B7222cc;
case 0x7222cf:c.instructions+=5;goto B7222cf;
case 0x7222d2:c.instructions+=4;goto B7222d2;
case 0x7222d9:c.instructions+=3;goto B7222d9;
case 0x7222e0:c.instructions+=2;goto B7222e0;
case 0x7222e3:c.instructions+=1;goto B7222e3;
case 0x7222e9:goto L7222e9;
case 0x7222ec:c.instructions+=4;goto B7222ec;
case 0x7222ef:c.instructions+=3;goto B7222ef;
case 0x7222f2:c.instructions+=2;goto B7222f2;
case 0x7222f5:c.instructions+=1;goto B7222f5;
case 0x7222f8:goto L7222f8;
case 0x7222fd:c.instructions+=17;goto B7222fd;
case 0x722303:c.instructions+=16;goto B722303;
case 0x722307:c.instructions+=15;goto B722307;
case 0x72230a:c.instructions+=14;goto B72230a;
case 0x72230d:c.instructions+=13;goto B72230d;
case 0x722310:c.instructions+=12;goto B722310;
case 0x722312:c.instructions+=11;goto B722312;
case 0x722316:c.instructions+=10;goto B722316;
case 0x722319:c.instructions+=9;goto B722319;
case 0x722321:c.instructions+=8;goto B722321;
case 0x722324:c.instructions+=7;goto B722324;
case 0x72232b:c.instructions+=6;goto B72232b;
case 0x72232e:c.instructions+=5;goto B72232e;
case 0x722330:c.instructions+=4;goto B722330;
case 0x722332:c.instructions+=3;goto B722332;
case 0x722334:c.instructions+=2;goto B722334;
case 0x722337:c.instructions+=1;goto B722337;
case 0x722339:goto L722339;
case 0x72233c:c.instructions+=8;goto B72233c;
case 0x72233f:c.instructions+=7;goto B72233f;
case 0x722342:c.instructions+=6;goto B722342;
case 0x722344:c.instructions+=5;goto B722344;
case 0x722346:c.instructions+=4;goto B722346;
case 0x722349:c.instructions+=3;goto B722349;
case 0x72234d:c.instructions+=2;goto B72234d;
case 0x722350:c.instructions+=1;goto B722350;
case 0x722352:goto L722352;
case 0x722354:c.instructions+=8;goto B722354;
case 0x72235a:c.instructions+=7;goto B72235a;
case 0x72235d:c.instructions+=6;goto B72235d;
case 0x722360:c.instructions+=5;goto B722360;
case 0x722363:c.instructions+=4;goto B722363;
case 0x722367:c.instructions+=3;goto B722367;
case 0x72236b:c.instructions+=2;goto B72236b;
case 0x72236f:c.instructions+=1;goto B72236f;
case 0x722371:goto L722371;
case 0x722374:c.instructions+=5;goto B722374;
case 0x722377:c.instructions+=4;goto B722377;
case 0x72237c:c.instructions+=3;goto B72237c;
case 0x72237f:c.instructions+=2;goto B72237f;
case 0x722382:c.instructions+=1;goto B722382;
case 0x722386:goto L722386;
case 0x722387:c.instructions+=1;goto B722387;
case 0x72238c:goto L72238c;
case 0x72238f:c.instructions+=6;goto B72238f;
case 0x722393:c.instructions+=5;goto B722393;
case 0x722394:c.instructions+=4;goto B722394;
case 0x722395:c.instructions+=3;goto B722395;
case 0x722398:c.instructions+=2;goto B722398;
case 0x722399:c.instructions+=1;goto B722399;
case 0x72239f:goto L72239f;
case 0x7223a6:c.instructions+=1;goto B7223a6;
case 0x7223a8:goto L7223a8;
case 0x7223ae:c.instructions+=3;goto B7223ae;
case 0x7223af:c.instructions+=2;goto B7223af;
case 0x7223b2:c.instructions+=1;goto B7223b2;
case 0x7223b7:goto L7223b7;
case 0x7223b8:c.instructions+=1;goto B7223b8;
case 0x7223b9:goto L7223b9;
case 0x7223ba:c.instructions+=5;goto B7223ba;
case 0x7223be:c.instructions+=4;goto B7223be;
case 0x7223bf:c.instructions+=3;goto B7223bf;
case 0x7223c0:c.instructions+=2;goto B7223c0;
case 0x7223c1:c.instructions+=1;goto B7223c1;
case 0x7223c2:goto L7223c2;
case 0x7223c6:c.instructions+=8;goto B7223c6;
case 0x7223ca:c.instructions+=7;goto B7223ca;
case 0x7223cd:c.instructions+=6;goto B7223cd;
case 0x7223d0:c.instructions+=5;goto B7223d0;
case 0x7223d3:c.instructions+=4;goto B7223d3;
case 0x7223d4:c.instructions+=3;goto B7223d4;
case 0x7223d6:c.instructions+=2;goto B7223d6;
case 0x7223d9:c.instructions+=1;goto B7223d9;
case 0x7223db:goto L7223db;
case 0x7223e0:goto L7223e0;
case 0x7223e3:c.instructions+=3;goto B7223e3;
case 0x7223e6:c.instructions+=2;goto B7223e6;
case 0x7223e7:c.instructions+=1;goto B7223e7;
case 0x7223e8:goto L7223e8;
case 0x7223eb:c.instructions+=1;goto B7223eb;
case 0x7223ed:goto L7223ed;
case 0x7223ef:goto L7223ef;
case 0x7223f0:c.instructions+=1;goto B7223f0;
case 0x7223f2:goto L7223f2;
case 0x7223f5:c.instructions+=1;goto B7223f5;
case 0x7223f7:goto L7223f7;
case 0x7223f9:c.instructions+=1;goto B7223f9;
case 0x7223fb:goto L7223fb;
case 0x7223fe:c.instructions+=1;goto B7223fe;
case 0x722400:goto L722400;
case 0x722405:c.instructions+=1;goto B722405;
case 0x722407:goto L722407;
case 0x72240a:c.instructions+=1;goto B72240a;
case 0x72240c:goto L72240c;
case 0x722411:c.instructions+=1;goto B722411;
case 0x722413:goto L722413;
case 0x722416:c.instructions+=1;goto B722416;
case 0x722418:goto L722418;
case 0x72241b:c.instructions+=1;goto B72241b;
case 0x72241d:goto L72241d;
case 0x72241f:c.instructions+=3;goto B72241f;
case 0x722422:c.instructions+=2;goto B722422;
case 0x722423:c.instructions+=1;goto B722423;
case 0x722424:goto L722424;
case 0x72242b:c.instructions+=3;goto B72242b;
case 0x72242f:c.instructions+=2;goto B72242f;
case 0x722431:c.instructions+=1;goto B722431;
case 0x722433:goto L722433;
case 0x722435:c.instructions+=1;goto B722435;
case 0x722437:goto L722437;
case 0x72243e:c.instructions+=1;goto B72243e;
case 0x72243f:goto L72243f;
case 0x722441:c.instructions+=1;goto B722441;
case 0x722442:goto L722442;
case 0x722446:c.instructions+=6;goto B722446;
case 0x722447:c.instructions+=5;goto B722447;
case 0x722448:c.instructions+=4;goto B722448;
case 0x72244c:c.instructions+=3;goto B72244c;
case 0x722451:c.instructions+=2;goto B722451;
case 0x722458:c.instructions+=1;goto B722458;
case 0x72245d:goto L72245d;
case 0x72245f:c.instructions+=4;goto B72245f;
case 0x722465:c.instructions+=3;goto B722465;
case 0x722466:c.instructions+=2;goto B722466;
case 0x722467:c.instructions+=1;goto B722467;
case 0x72246c:goto L72246c;
case 0x722472:c.instructions+=3;goto B722472;
case 0x722473:c.instructions+=2;goto B722473;
case 0x722474:c.instructions+=1;goto B722474;
case 0x722479:goto L722479;
case 0x72247c:c.instructions+=5;goto B72247c;
case 0x722482:c.instructions+=4;goto B722482;
case 0x722484:c.instructions+=3;goto B722484;
case 0x722485:c.instructions+=2;goto B722485;
case 0x722486:c.instructions+=1;goto B722486;
case 0x722488:goto L722488;
case 0x72248b:goto L72248b;
case 0x72248c:goto L72248c;
case 0x722490:c.instructions+=7;goto B722490;
case 0x722493:c.instructions+=6;goto B722493;
case 0x722494:c.instructions+=5;goto B722494;
case 0x722496:c.instructions+=4;goto B722496;
case 0x72249b:c.instructions+=3;goto B72249b;
case 0x7224a2:c.instructions+=2;goto B7224a2;
case 0x7224a4:c.instructions+=1;goto B7224a4;
case 0x7224a9:goto L7224a9;
case 0x7224aa:c.instructions+=2;goto B7224aa;
case 0x7224ab:c.instructions+=1;goto B7224ab;
case 0x7224ac:goto L7224ac;
case 0x7224b0:c.instructions+=8;goto B7224b0;
case 0x7224b1:c.instructions+=7;goto B7224b1;
case 0x7224b2:c.instructions+=6;goto B7224b2;
case 0x7224b3:c.instructions+=5;goto B7224b3;
case 0x7224b7:c.instructions+=4;goto B7224b7;
case 0x7224bd:c.instructions+=3;goto B7224bd;
case 0x7224bf:c.instructions+=2;goto B7224bf;
case 0x7224c1:c.instructions+=1;goto B7224c1;
case 0x7224c2:goto L7224c2;
case 0x7224c5:c.instructions+=1;goto B7224c5;
case 0x7224c7:goto L7224c7;
case 0x7224ca:c.instructions+=3;goto B7224ca;
case 0x7224cc:c.instructions+=2;goto B7224cc;
case 0x7224ce:c.instructions+=1;goto B7224ce;
case 0x7224d0:goto L7224d0;
case 0x7224d3:c.instructions+=4;goto B7224d3;
case 0x7224d6:c.instructions+=3;goto B7224d6;
case 0x7224d9:c.instructions+=2;goto B7224d9;
case 0x7224dc:c.instructions+=1;goto B7224dc;
case 0x7224de:goto L7224de;
case 0x7224e1:c.instructions+=1;goto B7224e1;
case 0x7224e6:goto L7224e6;
case 0x7224e7:goto L7224e7;
case 0x7224e9:c.instructions+=1;goto B7224e9;
case 0x7224eb:goto L7224eb;
case 0x7224f1:c.instructions+=5;goto B7224f1;
case 0x7224f3:c.instructions+=4;goto B7224f3;
case 0x7224f5:c.instructions+=3;goto B7224f5;
case 0x7224f6:c.instructions+=2;goto B7224f6;
case 0x7224fc:c.instructions+=1;goto B7224fc;
case 0x7224fe:goto L7224fe;
case 0x722501:c.instructions+=1;goto B722501;
case 0x722506:goto L722506;
case 0x722507:goto L722507;
case 0x722508:c.instructions+=3;goto B722508;
case 0x722509:c.instructions+=2;goto B722509;
case 0x72250a:c.instructions+=1;goto B72250a;
case 0x72250b:goto L72250b;
case 0x72250c:c.instructions+=11;goto B72250c;
case 0x72250e:c.instructions+=10;goto B72250e;
case 0x722511:c.instructions+=9;goto B722511;
case 0x722514:c.instructions+=8;goto B722514;
case 0x722515:c.instructions+=7;goto B722515;
case 0x72251c:c.instructions+=6;goto B72251c;
case 0x722522:c.instructions+=5;goto B722522;
case 0x722524:c.instructions+=4;goto B722524;
case 0x722526:c.instructions+=3;goto B722526;
case 0x722527:c.instructions+=2;goto B722527;
case 0x722528:c.instructions+=1;goto B722528;
case 0x72252a:goto L72252a;
case 0x722530:c.instructions+=1;goto B722530;
case 0x722532:goto L722532;
case 0x722534:goto L722534;
case 0x722536:c.instructions+=14;goto B722536;
case 0x722539:c.instructions+=13;goto B722539;
case 0x72253a:c.instructions+=12;goto B72253a;
case 0x72253c:c.instructions+=11;goto B72253c;
case 0x72253f:c.instructions+=10;goto B72253f;
case 0x722540:c.instructions+=9;goto B722540;
case 0x722546:c.instructions+=8;goto B722546;
case 0x722547:c.instructions+=7;goto B722547;
case 0x72254a:c.instructions+=6;goto B72254a;
case 0x72254d:c.instructions+=5;goto B72254d;
case 0x72254e:c.instructions+=4;goto B72254e;
case 0x722551:c.instructions+=3;goto B722551;
case 0x722552:c.instructions+=2;goto B722552;
case 0x722554:c.instructions+=1;goto B722554;
case 0x722559:goto L722559;
case 0x72255c:c.instructions+=5;goto B72255c;
case 0x72255f:c.instructions+=4;goto B72255f;
case 0x722562:c.instructions+=3;goto B722562;
case 0x722566:c.instructions+=2;goto B722566;
case 0x72256c:c.instructions+=1;goto B72256c;
case 0x72256e:goto L72256e;
case 0x722575:c.instructions+=13;goto B722575;
case 0x722577:c.instructions+=12;goto B722577;
case 0x72257a:c.instructions+=11;goto B72257a;
case 0x72257d:c.instructions+=10;goto B72257d;
case 0x722580:c.instructions+=9;goto B722580;
case 0x722583:c.instructions+=8;goto B722583;
case 0x722586:c.instructions+=7;goto B722586;
case 0x722588:c.instructions+=6;goto B722588;
case 0x72258a:c.instructions+=5;goto B72258a;
case 0x72258d:c.instructions+=4;goto B72258d;
case 0x722590:c.instructions+=3;goto B722590;
case 0x722596:c.instructions+=2;goto B722596;
case 0x722599:c.instructions+=1;goto B722599;
case 0x72259b:goto L72259b;
case 0x72259e:c.instructions+=3;goto B72259e;
case 0x72259f:c.instructions+=2;goto B72259f;
case 0x7225a2:c.instructions+=1;goto B7225a2;
case 0x7225a9:goto L7225a9;
case 0x7225b0:c.instructions+=4;goto B7225b0;
case 0x7225b3:c.instructions+=3;goto B7225b3;
case 0x7225b6:c.instructions+=2;goto B7225b6;
case 0x7225b7:c.instructions+=1;goto B7225b7;
case 0x7225b9:goto L7225b9;
case 0x7225bc:c.instructions+=1;goto B7225bc;
case 0x7225be:goto L7225be;
case 0x7225c1:c.instructions+=2;goto B7225c1;
case 0x7225c3:c.instructions+=1;goto B7225c3;
case 0x7225c8:goto L7225c8;
case 0x7225cb:c.instructions+=2;goto B7225cb;
case 0x7225cc:c.instructions+=1;goto B7225cc;
case 0x7225d1:goto L7225d1;
case 0x7225d4:c.instructions+=4;goto B7225d4;
case 0x7225d7:c.instructions+=3;goto B7225d7;
case 0x7225da:c.instructions+=2;goto B7225da;
case 0x7225dc:c.instructions+=1;goto B7225dc;
case 0x7225de:goto L7225de;
case 0x7225e0:c.instructions+=4;goto B7225e0;
case 0x7225e1:c.instructions+=3;goto B7225e1;
case 0x7225e7:c.instructions+=2;goto B7225e7;
case 0x7225ea:c.instructions+=1;goto B7225ea;
case 0x7225ec:goto L7225ec;
case 0x7225ee:goto L7225ee;
case 0x7225f0:goto L7225f0;
case 0x7225f6:c.instructions+=1;goto B7225f6;
case 0x7225f8:goto L7225f8;
case 0x7225fd:c.instructions+=1;goto B7225fd;
case 0x7225ff:goto L7225ff;
case 0x722603:c.instructions+=1;goto B722603;
case 0x722605:goto L722605;
case 0x722608:c.instructions+=4;goto B722608;
case 0x72260a:c.instructions+=3;goto B72260a;
case 0x72260d:c.instructions+=2;goto B72260d;
case 0x72260e:c.instructions+=1;goto B72260e;
case 0x722614:goto L722614;
case 0x722616:goto L722616;
case 0x72261d:c.instructions+=1;goto B72261d;
case 0x722620:goto L722620;
case 0x722624:c.instructions+=1;goto B722624;
case 0x722626:goto L722626;
case 0x722627:c.instructions+=1;goto B722627;
case 0x72262c:goto L72262c;
case 0x72262d:c.instructions+=1;goto B72262d;
case 0x722631:goto L722631;
case 0x722632:c.instructions+=5;goto B722632;
case 0x722633:c.instructions+=4;goto B722633;
case 0x722635:c.instructions+=3;goto B722635;
case 0x722636:c.instructions+=2;goto B722636;
case 0x722637:c.instructions+=1;goto B722637;
case 0x722638:goto L722638;
case 0x722639:c.instructions+=7;goto B722639;
case 0x72263a:c.instructions+=6;goto B72263a;
case 0x72263b:c.instructions+=5;goto B72263b;
case 0x72263f:c.instructions+=4;goto B72263f;
case 0x722645:c.instructions+=3;goto B722645;
case 0x722647:c.instructions+=2;goto B722647;
case 0x722649:c.instructions+=1;goto B722649;
case 0x72264b:goto L72264b;
case 0x72264e:c.instructions+=1;goto B72264e;
case 0x722650:goto L722650;
case 0x722653:c.instructions+=1;goto B722653;
case 0x722655:goto L722655;
case 0x722657:goto L722657;
case 0x722659:c.instructions+=1;goto B722659;
case 0x72265e:goto L72265e;
case 0x72265f:c.instructions+=3;goto B72265f;
case 0x722664:c.instructions+=2;goto B722664;
case 0x722666:c.instructions+=1;goto B722666;
case 0x722668:goto L722668;
case 0x72266a:goto L72266a;
case 0x722670:c.instructions+=4;goto B722670;
case 0x722672:c.instructions+=3;goto B722672;
case 0x722675:c.instructions+=2;goto B722675;
case 0x722678:c.instructions+=1;goto B722678;
case 0x72267a:goto L72267a;
case 0x72267c:c.instructions+=1;goto B72267c;
case 0x722681:goto L722681;
case 0x722684:c.instructions+=2;goto B722684;
case 0x722685:c.instructions+=1;goto B722685;
case 0x722687:goto L722687;
case 0x72268d:c.instructions+=1;goto B72268d;
case 0x72268f:goto L72268f;
case 0x722691:c.instructions+=1;goto B722691;
case 0x722696:goto L722696;
case 0x722698:c.instructions+=2;goto B722698;
case 0x722699:c.instructions+=1;goto B722699;
case 0x72269b:goto L72269b;
case 0x72269e:goto L72269e;
case 0x7226a0:goto L7226a0;
case 0x7226a1:c.instructions+=3;goto B7226a1;
case 0x7226a2:c.instructions+=2;goto B7226a2;
case 0x7226a3:c.instructions+=1;goto B7226a3;
case 0x7226a4:goto L7226a4;
case 0x7226a6:c.instructions+=2;goto B7226a6;
case 0x7226a7:c.instructions+=1;goto B7226a7;
case 0x7226a9:goto L7226a9;
case 0x7226b0:c.instructions+=4;goto B7226b0;
case 0x7226b2:c.instructions+=3;goto B7226b2;
case 0x7226b4:c.instructions+=2;goto B7226b4;
case 0x7226b6:c.instructions+=1;goto B7226b6;
case 0x7226b8:goto L7226b8;
case 0x7226c0:c.instructions+=1;goto B7226c0;
case 0x7226c2:goto L7226c2;
case 0x7226c3:goto L7226c3;
case 0x7226c4:c.instructions+=2;goto B7226c4;
case 0x7226c6:c.instructions+=1;goto B7226c6;
case 0x7226c8:goto L7226c8;
case 0x7226c9:goto L7226c9;
case 0x7226ca:c.instructions+=3;goto B7226ca;
case 0x7226cc:c.instructions+=2;goto B7226cc;
case 0x7226d3:c.instructions+=1;goto B7226d3;
case 0x7226d5:goto L7226d5;
case 0x7226d7:c.instructions+=3;goto B7226d7;
case 0x7226d8:c.instructions+=2;goto B7226d8;
case 0x7226d9:c.instructions+=1;goto B7226d9;
case 0x7226da:goto L7226da;
case 0x7226db:c.instructions+=3;goto B7226db;
case 0x7226dc:c.instructions+=2;goto B7226dc;
case 0x7226df:c.instructions+=1;goto B7226df;
case 0x7226e4:goto L7226e4;
case 0x7226e6:c.instructions+=4;goto B7226e6;
case 0x7226e8:c.instructions+=3;goto B7226e8;
case 0x7226ea:c.instructions+=2;goto B7226ea;
case 0x7226eb:c.instructions+=1;goto B7226eb;
case 0x7226ed:goto L7226ed;
case 0x7226ef:c.instructions+=1;goto B7226ef;
case 0x7226f1:goto L7226f1;
case 0x7226f7:c.instructions+=1;goto B7226f7;
case 0x7226f9:goto L7226f9;
case 0x7226fb:goto L7226fb;
case 0x7226fc:c.instructions+=1;goto B7226fc;
case 0x722701:goto L722701;
case 0x722704:c.instructions+=2;goto B722704;
case 0x722705:c.instructions+=1;goto B722705;
case 0x722707:goto L722707;
case 0x72270c:c.instructions+=4;goto B72270c;
case 0x72270f:c.instructions+=3;goto B72270f;
case 0x722712:c.instructions+=2;goto B722712;
case 0x722714:c.instructions+=1;goto B722714;
case 0x722719:goto L722719;
case 0x72271c:c.instructions+=2;goto B72271c;
case 0x72271e:c.instructions+=1;goto B72271e;
case 0x722720:goto L722720;
case 0x722724:c.instructions+=1;goto B722724;
case 0x722726:goto L722726;
case 0x72272b:c.instructions+=4;goto B72272b;
case 0x72272c:c.instructions+=3;goto B72272c;
case 0x72272f:c.instructions+=2;goto B72272f;
case 0x722731:c.instructions+=1;goto B722731;
case 0x722736:goto L722736;
case 0x722738:goto L722738;
case 0x72273b:goto L72273b;
case 0x72273d:c.instructions+=1;goto B72273d;
case 0x72273f:goto L72273f;
case 0x722742:c.instructions+=1;goto B722742;
case 0x722744:goto L722744;
case 0x722749:goto L722749;
case 0x72274f:c.instructions+=2;goto B72274f;
case 0x722750:c.instructions+=1;goto B722750;
case 0x722755:goto L722755;
case 0x722757:c.instructions+=3;goto B722757;
case 0x722759:c.instructions+=2;goto B722759;
case 0x72275a:c.instructions+=1;goto B72275a;
case 0x72275f:goto L72275f;
case 0x722765:c.instructions+=3;goto B722765;
case 0x722766:c.instructions+=2;goto B722766;
case 0x722767:c.instructions+=1;goto B722767;
case 0x72276c:goto L72276c;
case 0x72276f:c.instructions+=5;goto B72276f;
case 0x722772:c.instructions+=4;goto B722772;
case 0x722778:c.instructions+=3;goto B722778;
case 0x72277b:c.instructions+=2;goto B72277b;
case 0x72277e:c.instructions+=1;goto B72277e;
case 0x722780:goto L722780;
case 0x722786:goto L722786;
case 0x722788:c.instructions+=6;goto B722788;
case 0x72278b:c.instructions+=5;goto B72278b;
case 0x72278e:c.instructions+=4;goto B72278e;
case 0x722791:c.instructions+=3;goto B722791;
case 0x722794:c.instructions+=2;goto B722794;
case 0x722797:c.instructions+=1;goto B722797;
case 0x72279c:goto L72279c;
case 0x72279e:goto L72279e;
case 0x72279f:goto L72279f;
case 0x7227a0:c.instructions+=3;goto B7227a0;
case 0x7227a1:c.instructions+=2;goto B7227a1;
case 0x7227a2:c.instructions+=1;goto B7227a2;
case 0x7227a3:goto L7227a3;
case 0x7227aa:c.instructions+=1;goto B7227aa;
case 0x7227ac:goto L7227ac;
case 0x7227ae:c.instructions+=2;goto B7227ae;
case 0x7227af:c.instructions+=1;goto B7227af;
case 0x7227b0:goto L7227b0;
case 0x7227b2:c.instructions+=5;goto B7227b2;
case 0x7227b6:c.instructions+=4;goto B7227b6;
case 0x7227ba:c.instructions+=3;goto B7227ba;
case 0x7227be:c.instructions+=2;goto B7227be;
case 0x7227c2:c.instructions+=1;goto B7227c2;
case 0x7227c7:goto L7227c7;
case 0x7227ca:c.instructions+=1;goto B7227ca;
case 0x7227cb:goto L7227cb;
case 0x7227cc:c.instructions+=3;goto B7227cc;
case 0x7227ce:c.instructions+=2;goto B7227ce;
case 0x7227d4:c.instructions+=1;goto B7227d4;
case 0x7227d6:goto L7227d6;
case 0x7227d8:c.instructions+=3;goto B7227d8;
case 0x7227d9:c.instructions+=2;goto B7227d9;
case 0x7227da:c.instructions+=1;goto B7227da;
case 0x7227db:goto L7227db;
case 0x7227dc:c.instructions+=1;goto B7227dc;
case 0x7227e1:goto L7227e1;
case 0x7227e5:c.instructions+=1;goto B7227e5;
case 0x7227ea:goto L7227ea;
case 0x7227ec:c.instructions+=3;goto B7227ec;
case 0x7227ee:c.instructions+=2;goto B7227ee;
case 0x7227ef:c.instructions+=1;goto B7227ef;
case 0x7227f1:goto L7227f1;
case 0x7227f3:c.instructions+=2;goto B7227f3;
case 0x7227f4:c.instructions+=1;goto B7227f4;
case 0x7227f9:goto L7227f9;
case 0x7227fc:c.instructions+=1;goto B7227fc;
case 0x7227fe:goto L7227fe;
case 0x722801:c.instructions+=1;goto B722801;
case 0x722806:goto L722806;
case 0x722807:goto L722807;
case 0x72280e:c.instructions+=2;goto B72280e;
case 0x722811:c.instructions+=1;goto B722811;
case 0x722813:goto L722813;
case 0x722815:c.instructions+=1;goto B722815;
case 0x72281a:goto L72281a;
case 0x72281b:goto L72281b;
case 0x722821:c.instructions+=3;goto B722821;
case 0x722823:c.instructions+=2;goto B722823;
case 0x722824:c.instructions+=1;goto B722824;
case 0x722826:goto L722826;
case 0x722827:c.instructions+=3;goto B722827;
case 0x722829:c.instructions+=2;goto B722829;
case 0x72282c:c.instructions+=1;goto B72282c;
case 0x72282e:goto L72282e;
case 0x722830:goto L722830;
case 0x722832:c.instructions+=1;goto B722832;
case 0x722837:goto L722837;
case 0x72283b:c.instructions+=5;goto B72283b;
case 0x72283c:c.instructions+=4;goto B72283c;
case 0x72283f:c.instructions+=3;goto B72283f;
case 0x722841:c.instructions+=2;goto B722841;
case 0x722842:c.instructions+=1;goto B722842;
case 0x722844:goto L722844;
case 0x722845:goto L722845;
case 0x72284b:goto L72284b;
case 0x72284c:c.instructions+=1;goto B72284c;
case 0x722851:goto L722851;
case 0x722853:c.instructions+=2;goto B722853;
case 0x722854:c.instructions+=1;goto B722854;
case 0x722856:goto L722856;
case 0x722857:c.instructions+=3;goto B722857;
case 0x72285d:c.instructions+=2;goto B72285d;
case 0x72285e:c.instructions+=1;goto B72285e;
case 0x722863:goto L722863;
case 0x722864:c.instructions+=2;goto B722864;
case 0x722865:c.instructions+=1;goto B722865;
case 0x722867:goto L722867;
case 0x72286a:c.instructions+=5;goto B72286a;
case 0x72286c:c.instructions+=4;goto B72286c;
case 0x72286d:c.instructions+=3;goto B72286d;
case 0x722873:c.instructions+=2;goto B722873;
case 0x722876:c.instructions+=1;goto B722876;
case 0x72287b:goto L72287b;
case 0x72287e:c.instructions+=3;goto B72287e;
case 0x722880:c.instructions+=2;goto B722880;
case 0x722881:c.instructions+=1;goto B722881;
case 0x722886:goto L722886;
case 0x722889:c.instructions+=3;goto B722889;
case 0x72288b:c.instructions+=2;goto B72288b;
case 0x72288c:c.instructions+=1;goto B72288c;
case 0x722891:goto L722891;
case 0x722893:c.instructions+=3;goto B722893;
case 0x722899:c.instructions+=2;goto B722899;
case 0x72289a:c.instructions+=1;goto B72289a;
case 0x72289f:goto L72289f;
case 0x7228a2:c.instructions+=2;goto B7228a2;
case 0x7228a4:c.instructions+=1;goto B7228a4;
case 0x7228a5:goto L7228a5;
case 0x7228aa:goto L7228aa;
case 0x7228ac:c.instructions+=3;goto B7228ac;
case 0x7228ad:c.instructions+=2;goto B7228ad;
case 0x7228ae:c.instructions+=1;goto B7228ae;
case 0x7228af:goto L7228af;
case 0x7228b0:c.instructions+=12;goto B7228b0;
case 0x7228b2:c.instructions+=11;goto B7228b2;
case 0x7228b5:c.instructions+=10;goto B7228b5;
case 0x7228b8:c.instructions+=9;goto B7228b8;
case 0x7228bb:c.instructions+=8;goto B7228bb;
case 0x7228bc:c.instructions+=7;goto B7228bc;
case 0x7228bf:c.instructions+=6;goto B7228bf;
case 0x7228c0:c.instructions+=5;goto B7228c0;
case 0x7228c6:c.instructions+=4;goto B7228c6;
case 0x7228ca:c.instructions+=3;goto B7228ca;
case 0x7228cb:c.instructions+=2;goto B7228cb;
case 0x7228d0:c.instructions+=1;goto B7228d0;
case 0x7228d2:goto L7228d2;
case 0x7228d5:c.instructions+=8;goto B7228d5;
case 0x7228d9:c.instructions+=7;goto B7228d9;
case 0x7228dc:c.instructions+=6;goto B7228dc;
case 0x7228df:c.instructions+=5;goto B7228df;
case 0x7228e2:c.instructions+=4;goto B7228e2;
case 0x7228e5:c.instructions+=3;goto B7228e5;
case 0x7228e8:c.instructions+=2;goto B7228e8;
case 0x7228eb:c.instructions+=1;goto B7228eb;
case 0x7228ed:goto L7228ed;
case 0x7228f0:goto L7228f0;
case 0x7228f4:c.instructions+=8;goto B7228f4;
case 0x7228f6:c.instructions+=7;goto B7228f6;
case 0x7228f9:c.instructions+=6;goto B7228f9;
case 0x7228fc:c.instructions+=5;goto B7228fc;
case 0x7228ff:c.instructions+=4;goto B7228ff;
case 0x722902:c.instructions+=3;goto B722902;
case 0x722904:c.instructions+=2;goto B722904;
case 0x722906:c.instructions+=1;goto B722906;
case 0x722908:goto L722908;
case 0x72290b:c.instructions+=3;goto B72290b;
case 0x72290d:c.instructions+=2;goto B72290d;
case 0x722910:c.instructions+=1;goto B722910;
case 0x722912:goto L722912;
case 0x722915:goto L722915;
case 0x722919:c.instructions+=3;goto B722919;
case 0x72291c:c.instructions+=2;goto B72291c;
case 0x722920:c.instructions+=1;goto B722920;
case 0x722922:goto L722922;
case 0x722925:c.instructions+=10;goto B722925;
case 0x722929:c.instructions+=9;goto B722929;
case 0x72292c:c.instructions+=8;goto B72292c;
case 0x72292f:c.instructions+=7;goto B72292f;
case 0x722932:c.instructions+=6;goto B722932;
case 0x722935:c.instructions+=5;goto B722935;
case 0x722938:c.instructions+=4;goto B722938;
case 0x72293b:c.instructions+=3;goto B72293b;
case 0x72293d:c.instructions+=2;goto B72293d;
case 0x722941:c.instructions+=1;goto B722941;
case 0x722943:goto L722943;
case 0x722946:c.instructions+=1;goto B722946;
case 0x72294a:goto L72294a;
case 0x72294d:c.instructions+=4;goto B72294d;
case 0x722951:c.instructions+=3;goto B722951;
case 0x722952:c.instructions+=2;goto B722952;
case 0x722954:c.instructions+=1;goto B722954;
case 0x722956:goto L722956;
case 0x722959:c.instructions+=1;goto B722959;
case 0x72295b:goto L72295b;
case 0x72295e:c.instructions+=3;goto B72295e;
case 0x72295f:c.instructions+=2;goto B72295f;
case 0x722961:c.instructions+=1;goto B722961;
case 0x722966:goto L722966;
case 0x722968:goto L722968;
case 0x72296b:c.instructions+=19;goto B72296b;
case 0x72296e:c.instructions+=18;goto B72296e;
case 0x722971:c.instructions+=17;goto B722971;
case 0x722973:c.instructions+=16;goto B722973;
case 0x722976:c.instructions+=15;goto B722976;
case 0x722979:c.instructions+=14;goto B722979;
case 0x72297b:c.instructions+=13;goto B72297b;
case 0x72297d:c.instructions+=12;goto B72297d;
case 0x722980:c.instructions+=11;goto B722980;
case 0x722984:c.instructions+=10;goto B722984;
case 0x722987:c.instructions+=9;goto B722987;
case 0x72298a:c.instructions+=8;goto B72298a;
case 0x72298c:c.instructions+=7;goto B72298c;
case 0x72298e:c.instructions+=6;goto B72298e;
case 0x722991:c.instructions+=5;goto B722991;
case 0x722994:c.instructions+=4;goto B722994;
case 0x722995:c.instructions+=3;goto B722995;
case 0x722998:c.instructions+=2;goto B722998;
case 0x72299b:c.instructions+=1;goto B72299b;
case 0x7229a0:goto L7229a0;
case 0x7229a4:goto L7229a4;
case 0x7229a5:c.instructions+=6;goto B7229a5;
case 0x7229a6:c.instructions+=5;goto B7229a6;
case 0x7229a7:c.instructions+=4;goto B7229a7;
case 0x7229a8:c.instructions+=3;goto B7229a8;
case 0x7229a9:c.instructions+=2;goto B7229a9;
case 0x7229aa:c.instructions+=1;goto B7229aa;
case 0x7229ab:goto L7229ab;
case 0x7229af:c.instructions+=7;goto B7229af;
case 0x7229b1:c.instructions+=6;goto B7229b1;
case 0x7229b7:c.instructions+=5;goto B7229b7;
case 0x7229b8:c.instructions+=4;goto B7229b8;
case 0x7229bc:c.instructions+=3;goto B7229bc;
case 0x7229c3:c.instructions+=2;goto B7229c3;
case 0x7229c4:c.instructions+=1;goto B7229c4;
case 0x7229c6:goto L7229c6;
case 0x7229c7:c.instructions+=1;goto B7229c7;
case 0x7229cc:goto L7229cc;
case 0x7229ce:goto L7229ce;
case 0x7229d4:c.instructions+=1;goto B7229d4;
case 0x7229d6:goto L7229d6;
case 0x7229d7:c.instructions+=1;goto B7229d7;
case 0x7229dc:goto L7229dc;
case 0x7229de:c.instructions+=1;goto B7229de;
case 0x7229e0:goto L7229e0;
case 0x7229e2:c.instructions+=1;goto B7229e2;
case 0x7229e7:goto L7229e7;
case 0x7229e9:c.instructions+=1;goto B7229e9;
case 0x7229ea:goto L7229ea;
case 0x7229eb:c.instructions+=3;goto B7229eb;
case 0x7229ec:c.instructions+=2;goto B7229ec;
case 0x7229ed:c.instructions+=1;goto B7229ed;
case 0x7229ee:goto L7229ee;
case 0x7229ef:c.instructions+=1;goto B7229ef;
case 0x7229f4:goto L7229f4;
case 0x7229f6:c.instructions+=2;goto B7229f6;
case 0x7229fd:c.instructions+=1;goto B7229fd;
case 0x722a03:goto L722a03;
case 0x722a04:c.instructions+=2;goto B722a04;
case 0x722a05:c.instructions+=1;goto B722a05;
case 0x722a06:goto L722a06;
case 0x722a0d:c.instructions+=2;goto B722a0d;
case 0x722a0f:c.instructions+=1;goto B722a0f;
case 0x722a15:goto L722a15;
case 0x722a1c:c.instructions+=1;goto B722a1c;
case 0x722a22:goto L722a22;
case 0x722a26:c.instructions+=1;goto B722a26;
case 0x722a28:goto L722a28;
case 0x722a2b:c.instructions+=1;goto B722a2b;
case 0x722a30:goto L722a30;
case 0x722a32:c.instructions+=2;goto B722a32;
case 0x722a33:c.instructions+=1;goto B722a33;
case 0x722a35:goto L722a35;
case 0x722a38:c.instructions+=5;goto B722a38;
case 0x722a3a:c.instructions+=4;goto B722a3a;
case 0x722a3b:c.instructions+=3;goto B722a3b;
case 0x722a3e:c.instructions+=2;goto B722a3e;
case 0x722a44:c.instructions+=1;goto B722a44;
case 0x722a47:goto L722a47;
case 0x722a49:goto L722a49;
case 0x722a50:c.instructions+=2;goto B722a50;
case 0x722a53:c.instructions+=1;goto B722a53;
case 0x722a58:goto L722a58;
case 0x722a59:c.instructions+=1;goto B722a59;
case 0x722a5e:goto L722a5e;
case 0x722a5f:c.instructions+=1;goto B722a5f;
case 0x722a60:goto L722a60;
case 0x722a61:c.instructions+=1;goto B722a61;
case 0x722a66:goto L722a66;
case 0x722a68:c.instructions+=2;goto B722a68;
case 0x722a69:c.instructions+=1;goto B722a69;
case 0x722a6b:goto L722a6b;
case 0x722a6f:c.instructions+=1;goto B722a6f;
case 0x722a71:goto L722a71;
case 0x722a74:c.instructions+=1;goto B722a74;
case 0x722a79:goto L722a79;
case 0x722a7b:c.instructions+=3;goto B722a7b;
case 0x722a7d:c.instructions+=2;goto B722a7d;
case 0x722a7e:c.instructions+=1;goto B722a7e;
case 0x722a80:goto L722a80;
case 0x722a82:goto L722a82;
case 0x722a84:c.instructions+=1;goto B722a84;
case 0x722a85:goto L722a85;
case 0x722a87:goto L722a87;
case 0x722a89:c.instructions+=2;goto B722a89;
case 0x722a8a:c.instructions+=1;goto B722a8a;
case 0x722a8f:goto L722a8f;
case 0x722a91:c.instructions+=2;goto B722a91;
case 0x722a92:c.instructions+=1;goto B722a92;
case 0x722a94:goto L722a94;
case 0x722a95:c.instructions+=2;goto B722a95;
case 0x722a96:c.instructions+=1;goto B722a96;
case 0x722a9b:goto L722a9b;
case 0x722a9c:c.instructions+=2;goto B722a9c;
case 0x722a9d:c.instructions+=1;goto B722a9d;
case 0x722a9f:goto L722a9f;
case 0x722aa1:c.instructions+=1;goto B722aa1;
case 0x722aa3:goto L722aa3;
case 0x722aa5:c.instructions+=1;goto B722aa5;
case 0x722aa7:goto L722aa7;
case 0x722aae:c.instructions+=3;goto B722aae;
case 0x722aaf:c.instructions+=2;goto B722aaf;
case 0x722ab1:c.instructions+=1;goto B722ab1;
case 0x722ab7:goto L722ab7;
case 0x722ab8:c.instructions+=2;goto B722ab8;
case 0x722ab9:c.instructions+=1;goto B722ab9;
case 0x722aba:goto L722aba;
case 0x722abb:c.instructions+=1;goto B722abb;
case 0x722ac0:goto L722ac0;
case 0x722ac7:c.instructions+=1;goto B722ac7;
case 0x722ac9:goto L722ac9;
case 0x722acb:c.instructions+=2;goto B722acb;
case 0x722acc:c.instructions+=1;goto B722acc;
case 0x722acd:goto L722acd;
case 0x722ace:c.instructions+=2;goto B722ace;
case 0x722acf:c.instructions+=1;goto B722acf;
case 0x722ad4:goto L722ad4;
case 0x722ad8:c.instructions+=2;goto B722ad8;
case 0x722ad9:c.instructions+=1;goto B722ad9;
case 0x722ade:goto L722ade;
case 0x722ae0:c.instructions+=3;goto B722ae0;
case 0x722ae2:c.instructions+=2;goto B722ae2;
case 0x722ae3:c.instructions+=1;goto B722ae3;
case 0x722ae5:goto L722ae5;
case 0x722aea:goto L722aea;
case 0x722aec:c.instructions+=2;goto B722aec;
case 0x722aed:c.instructions+=1;goto B722aed;
case 0x722aef:goto L722aef;
case 0x722af0:c.instructions+=1;goto B722af0;
case 0x722af5:goto L722af5;
case 0x722af6:c.instructions+=1;goto B722af6;
case 0x722afb:goto L722afb;
case 0x722afc:c.instructions+=2;goto B722afc;
case 0x722afd:c.instructions+=1;goto B722afd;
case 0x722b02:goto L722b02;
case 0x722b05:c.instructions+=1;goto B722b05;
case 0x722b07:goto L722b07;
case 0x722b0c:c.instructions+=1;goto B722b0c;
case 0x722b11:goto L722b11;
case 0x722b18:c.instructions+=1;goto B722b18;
case 0x722b19:goto L722b19;
case 0x722b1a:c.instructions+=2;goto B722b1a;
case 0x722b1d:c.instructions+=1;goto B722b1d;
case 0x722b22:goto L722b22;
case 0x722b24:c.instructions+=4;goto B722b24;
case 0x722b28:c.instructions+=3;goto B722b28;
case 0x722b30:c.instructions+=2;goto B722b30;
case 0x722b31:c.instructions+=1;goto B722b31;
case 0x722b36:goto L722b36;
case 0x722b38:c.instructions+=1;goto B722b38;
case 0x722b3a:goto L722b3a;
case 0x722b3b:c.instructions+=1;goto B722b3b;
case 0x722b40:goto L722b40;
case 0x722b41:goto L722b41;
case 0x722b43:c.instructions+=1;goto B722b43;
case 0x722b44:goto L722b44;
case 0x722b45:c.instructions+=2;goto B722b45;
case 0x722b46:c.instructions+=1;goto B722b46;
case 0x722b47:goto L722b47;
case 0x722b48:c.instructions+=3;goto B722b48;
case 0x722b4a:c.instructions+=2;goto B722b4a;
case 0x722b51:c.instructions+=1;goto B722b51;
case 0x722b53:goto L722b53;
case 0x722b54:c.instructions+=1;goto B722b54;
case 0x722b59:goto L722b59;
case 0x722b60:c.instructions+=4;goto B722b60;
case 0x722b61:c.instructions+=3;goto B722b61;
case 0x722b63:c.instructions+=2;goto B722b63;
case 0x722b64:c.instructions+=1;goto B722b64;
case 0x722b66:goto L722b66;
case 0x722b68:c.instructions+=2;goto B722b68;
case 0x722b69:c.instructions+=1;goto B722b69;
case 0x722b6a:goto L722b6a;
case 0x722b6b:c.instructions+=4;goto B722b6b;
case 0x722b6d:c.instructions+=3;goto B722b6d;
case 0x722b70:c.instructions+=2;goto B722b70;
case 0x722b77:c.instructions+=1;goto B722b77;
case 0x722b79:goto L722b79;
case 0x722b7b:c.instructions+=3;goto B722b7b;
case 0x722b7c:c.instructions+=2;goto B722b7c;
case 0x722b7d:c.instructions+=1;goto B722b7d;
case 0x722b7e:goto L722b7e;
case 0x722b7f:c.instructions+=3;goto B722b7f;
case 0x722b80:c.instructions+=2;goto B722b80;
case 0x722b81:c.instructions+=1;goto B722b81;
case 0x722b86:goto L722b86;
case 0x722b8d:c.instructions+=3;goto B722b8d;
case 0x722b8f:c.instructions+=2;goto B722b8f;
case 0x722b91:c.instructions+=1;goto B722b91;
case 0x722b93:goto L722b93;
case 0x722b9b:c.instructions+=1;goto B722b9b;
case 0x722b9d:goto L722b9d;
case 0x722b9e:c.instructions+=2;goto B722b9e;
case 0x722ba0:c.instructions+=1;goto B722ba0;
case 0x722ba2:goto L722ba2;
case 0x722ba4:c.instructions+=1;goto B722ba4;
case 0x722ba5:goto L722ba5;
case 0x722baa:goto L722baa;
case 0x722bac:goto L722bac;
case 0x722bad:c.instructions+=4;goto B722bad;
case 0x722bae:c.instructions+=3;goto B722bae;
case 0x722baf:c.instructions+=2;goto B722baf;
case 0x722bb0:c.instructions+=1;goto B722bb0;
case 0x722bb1:goto L722bb1;
case 0x722bb4:c.instructions+=11;goto B722bb4;
case 0x722bb7:c.instructions+=10;goto B722bb7;
case 0x722bbd:c.instructions+=9;goto B722bbd;
case 0x722bc0:c.instructions+=8;goto B722bc0;
case 0x722bc5:c.instructions+=7;goto B722bc5;
case 0x722bc7:c.instructions+=6;goto B722bc7;
case 0x722bce:c.instructions+=5;goto B722bce;
case 0x722bd1:c.instructions+=4;goto B722bd1;
case 0x722bd6:c.instructions+=3;goto B722bd6;
case 0x722bd7:c.instructions+=2;goto B722bd7;
case 0x722bd9:c.instructions+=1;goto B722bd9;
case 0x722bde:goto L722bde;
case 0x722be1:c.instructions+=7;goto B722be1;
case 0x722be4:c.instructions+=6;goto B722be4;
case 0x722be7:c.instructions+=5;goto B722be7;
case 0x722bea:c.instructions+=4;goto B722bea;
case 0x722bed:c.instructions+=3;goto B722bed;
case 0x722bf0:c.instructions+=2;goto B722bf0;
case 0x722bf2:c.instructions+=1;goto B722bf2;
case 0x722bf7:goto L722bf7;
case 0x722bfa:c.instructions+=5;goto B722bfa;
case 0x722bfd:c.instructions+=4;goto B722bfd;
case 0x722bff:c.instructions+=3;goto B722bff;
case 0x722c05:c.instructions+=2;goto B722c05;
case 0x722c06:c.instructions+=1;goto B722c06;
case 0x722c0b:goto L722c0b;
case 0x722c11:c.instructions+=2;goto B722c11;
case 0x722c12:c.instructions+=1;goto B722c12;
case 0x722c17:goto L722c17;
case 0x722c1a:c.instructions+=2;goto B722c1a;
case 0x722c1c:c.instructions+=1;goto B722c1c;
case 0x722c1e:goto L722c1e;
case 0x722c21:c.instructions+=2;goto B722c21;
case 0x722c24:c.instructions+=1;goto B722c24;
case 0x722c27:goto L722c27;
case 0x722c2a:c.instructions+=3;goto B722c2a;
case 0x722c30:c.instructions+=2;goto B722c30;
case 0x722c31:c.instructions+=1;goto B722c31;
case 0x722c36:goto L722c36;
case 0x722c3a:c.instructions+=4;goto B722c3a;
case 0x722c3d:c.instructions+=3;goto B722c3d;
case 0x722c3e:c.instructions+=2;goto B722c3e;
case 0x722c3f:c.instructions+=1;goto B722c3f;
case 0x722c41:goto L722c41;
case 0x722c44:c.instructions+=1;goto B722c44;
case 0x722c49:goto L722c49;
case 0x722c4a:c.instructions+=5;goto B722c4a;
case 0x722c4d:c.instructions+=4;goto B722c4d;
case 0x722c4e:c.instructions+=3;goto B722c4e;
case 0x722c53:c.instructions+=2;goto B722c53;
case 0x722c58:c.instructions+=1;goto B722c58;
case 0x722c5d:goto L722c5d;
case 0x722c60:c.instructions+=3;goto B722c60;
case 0x722c63:c.instructions+=2;goto B722c63;
case 0x722c67:c.instructions+=1;goto B722c67;
case 0x722c69:goto L722c69;
case 0x722c6e:goto L722c6e;
case 0x722c71:c.instructions+=1;goto B722c71;
case 0x722c76:goto L722c76;
case 0x722c7a:c.instructions+=1;goto B722c7a;
case 0x722c7c:goto L722c7c;
case 0x722c7f:c.instructions+=2;goto B722c7f;
case 0x722c83:c.instructions+=1;goto B722c83;
case 0x722c85:goto L722c85;
case 0x722c88:c.instructions+=6;goto B722c88;
case 0x722c8b:c.instructions+=5;goto B722c8b;
case 0x722c8c:c.instructions+=4;goto B722c8c;
case 0x722c8e:c.instructions+=3;goto B722c8e;
case 0x722c90:c.instructions+=2;goto B722c90;
case 0x722c91:c.instructions+=1;goto B722c91;
case 0x722c96:goto L722c96;
case 0x722c99:c.instructions+=2;goto B722c99;
case 0x722c9b:c.instructions+=1;goto B722c9b;
case 0x722c9d:goto L722c9d;
case 0x722ca0:c.instructions+=1;goto B722ca0;
case 0x722ca5:goto L722ca5;
case 0x722ca6:c.instructions+=1;goto B722ca6;
case 0x722cab:goto L722cab;
case 0x722caf:goto L722caf;
case 0x722cb2:c.instructions+=9;goto B722cb2;
case 0x722cb8:c.instructions+=8;goto B722cb8;
case 0x722cba:c.instructions+=7;goto B722cba;
case 0x722cbd:c.instructions+=6;goto B722cbd;
case 0x722cc4:c.instructions+=5;goto B722cc4;
case 0x722cc6:c.instructions+=4;goto B722cc6;
case 0x722ccd:c.instructions+=3;goto B722ccd;
case 0x722cd3:c.instructions+=2;goto B722cd3;
case 0x722cd4:c.instructions+=1;goto B722cd4;
case 0x722cd6:goto L722cd6;
case 0x722cd8:goto L722cd8;
case 0x722cde:c.instructions+=4;goto B722cde;
case 0x722ce0:c.instructions+=3;goto B722ce0;
case 0x722ce2:c.instructions+=2;goto B722ce2;
case 0x722ce8:c.instructions+=1;goto B722ce8;
case 0x722cea:goto L722cea;
case 0x722cf1:c.instructions+=8;goto B722cf1;
case 0x722cf4:c.instructions+=7;goto B722cf4;
case 0x722cfa:c.instructions+=6;goto B722cfa;
case 0x722cfd:c.instructions+=5;goto B722cfd;
case 0x722cff:c.instructions+=4;goto B722cff;
case 0x722d02:c.instructions+=3;goto B722d02;
case 0x722d03:c.instructions+=2;goto B722d03;
case 0x722d09:c.instructions+=1;goto B722d09;
case 0x722d0b:goto L722d0b;
case 0x722d0e:c.instructions+=4;goto B722d0e;
case 0x722d11:c.instructions+=3;goto B722d11;
case 0x722d13:c.instructions+=2;goto B722d13;
case 0x722d19:c.instructions+=1;goto B722d19;
case 0x722d1c:goto L722d1c;
case 0x722d1e:c.instructions+=7;goto B722d1e;
case 0x722d21:c.instructions+=6;goto B722d21;
case 0x722d25:c.instructions+=5;goto B722d25;
case 0x722d2c:c.instructions+=4;goto B722d2c;
case 0x722d2d:c.instructions+=3;goto B722d2d;
case 0x722d30:c.instructions+=2;goto B722d30;
case 0x722d33:c.instructions+=1;goto B722d33;
case 0x722d35:goto L722d35;
case 0x722d37:c.instructions+=3;goto B722d37;
case 0x722d3b:c.instructions+=2;goto B722d3b;
case 0x722d3f:c.instructions+=1;goto B722d3f;
case 0x722d44:goto L722d44;
case 0x722d46:c.instructions+=1;goto B722d46;
case 0x722d48:goto L722d48;
case 0x722d4d:c.instructions+=1;goto B722d4d;
case 0x722d52:goto L722d52;
case 0x722d53:c.instructions+=1;goto B722d53;
case 0x722d5d:goto L722d5d;
case 0x722d60:c.instructions+=3;goto B722d60;
case 0x722d63:c.instructions+=2;goto B722d63;
case 0x722d6a:c.instructions+=1;goto B722d6a;
case 0x722d6c:goto L722d6c;
case 0x722d6e:c.instructions+=1;goto B722d6e;
case 0x722d73:goto L722d73;
case 0x722d75:c.instructions+=6;goto B722d75;
case 0x722d76:c.instructions+=5;goto B722d76;
case 0x722d77:c.instructions+=4;goto B722d77;
case 0x722d79:c.instructions+=3;goto B722d79;
case 0x722d7a:c.instructions+=2;goto B722d7a;
case 0x722d7b:c.instructions+=1;goto B722d7b;
case 0x722d80:goto L722d80;
case 0x722d83:goto L722d83;
case 0x722d84:c.instructions+=2;goto B722d84;
case 0x722d8a:c.instructions+=1;goto B722d8a;
case 0x722d8f:goto L722d8f;
case 0x722d90:c.instructions+=1;goto B722d90;
case 0x722d95:goto L722d95;
case 0x722d96:c.instructions+=9;goto B722d96;
case 0x722d98:c.instructions+=8;goto B722d98;
case 0x722d9a:c.instructions+=7;goto B722d9a;
case 0x722d9c:c.instructions+=6;goto B722d9c;
case 0x722d9f:c.instructions+=5;goto B722d9f;
case 0x722da2:c.instructions+=4;goto B722da2;
case 0x722da5:c.instructions+=3;goto B722da5;
case 0x722da8:c.instructions+=2;goto B722da8;
case 0x722dab:c.instructions+=1;goto B722dab;
case 0x722db0:goto L722db0;
case 0x722db3:c.instructions+=2;goto B722db3;
case 0x722db4:c.instructions+=1;goto B722db4;
case 0x722db5:goto L722db5;
case 0x722db6:c.instructions+=13;goto B722db6;
case 0x722db8:c.instructions+=12;goto B722db8;
case 0x722db9:c.instructions+=11;goto B722db9;
case 0x722dba:c.instructions+=10;goto B722dba;
case 0x722dbb:c.instructions+=9;goto B722dbb;
case 0x722dbd:c.instructions+=8;goto B722dbd;
case 0x722dbe:c.instructions+=7;goto B722dbe;
case 0x722dc1:c.instructions+=6;goto B722dc1;
case 0x722dc3:c.instructions+=5;goto B722dc3;
case 0x722dc6:c.instructions+=4;goto B722dc6;
case 0x722dc9:c.instructions+=3;goto B722dc9;
case 0x722dcc:c.instructions+=2;goto B722dcc;
case 0x722dd2:c.instructions+=1;goto B722dd2;
case 0x722dd4:goto L722dd4;
case 0x722dd6:c.instructions+=1;goto B722dd6;
case 0x722dd8:goto L722dd8;
case 0x722ddb:c.instructions+=1;goto B722ddb;
case 0x722ddd:goto L722ddd;
case 0x722ddf:goto L722ddf;
case 0x722de0:c.instructions+=1;goto B722de0;
case 0x722de5:goto L722de5;
case 0x722de8:c.instructions+=4;goto B722de8;
case 0x722ded:c.instructions+=3;goto B722ded;
case 0x722dee:c.instructions+=2;goto B722dee;
case 0x722def:c.instructions+=1;goto B722def;
case 0x722df4:goto L722df4;
case 0x722df6:c.instructions+=3;goto B722df6;
case 0x722df8:c.instructions+=2;goto B722df8;
case 0x722df9:c.instructions+=1;goto B722df9;
case 0x722dfb:goto L722dfb;
case 0x722dfd:c.instructions+=2;goto B722dfd;
case 0x722dfe:c.instructions+=1;goto B722dfe;
case 0x722e03:goto L722e03;
case 0x722e06:c.instructions+=1;goto B722e06;
case 0x722e0b:goto L722e0b;
case 0x722e0d:c.instructions+=2;goto B722e0d;
case 0x722e0e:c.instructions+=1;goto B722e0e;
case 0x722e14:goto L722e14;
case 0x722e17:c.instructions+=1;goto B722e17;
case 0x722e19:goto L722e19;
case 0x722e1b:c.instructions+=1;goto B722e1b;
case 0x722e20:goto L722e20;
case 0x722e26:c.instructions+=1;goto B722e26;
case 0x722e28:goto L722e28;
case 0x722e2e:c.instructions+=2;goto B722e2e;
case 0x722e32:c.instructions+=1;goto B722e32;
case 0x722e34:goto L722e34;
case 0x722e3a:c.instructions+=1;goto B722e3a;
case 0x722e3e:goto L722e3e;
case 0x722e41:c.instructions+=7;goto B722e41;
case 0x722e44:c.instructions+=6;goto B722e44;
case 0x722e47:c.instructions+=5;goto B722e47;
case 0x722e49:c.instructions+=4;goto B722e49;
case 0x722e4f:c.instructions+=3;goto B722e4f;
case 0x722e52:c.instructions+=2;goto B722e52;
case 0x722e55:c.instructions+=1;goto B722e55;
case 0x722e57:goto L722e57;
case 0x722e5d:goto L722e5d;
case 0x722e5f:c.instructions+=13;goto B722e5f;
case 0x722e62:c.instructions+=12;goto B722e62;
case 0x722e64:c.instructions+=11;goto B722e64;
case 0x722e67:c.instructions+=10;goto B722e67;
case 0x722e6a:c.instructions+=9;goto B722e6a;
case 0x722e6d:c.instructions+=8;goto B722e6d;
case 0x722e70:c.instructions+=7;goto B722e70;
case 0x722e73:c.instructions+=6;goto B722e73;
case 0x722e76:c.instructions+=5;goto B722e76;
case 0x722e78:c.instructions+=4;goto B722e78;
case 0x722e7a:c.instructions+=3;goto B722e7a;
case 0x722e7d:c.instructions+=2;goto B722e7d;
case 0x722e80:c.instructions+=1;goto B722e80;
case 0x722e82:goto L722e82;
case 0x722e88:goto L722e88;
case 0x722e8b:c.instructions+=10;goto B722e8b;
case 0x722e8e:c.instructions+=9;goto B722e8e;
case 0x722e91:c.instructions+=8;goto B722e91;
case 0x722e94:c.instructions+=7;goto B722e94;
case 0x722e97:c.instructions+=6;goto B722e97;
case 0x722e9a:c.instructions+=5;goto B722e9a;
case 0x722e9d:c.instructions+=4;goto B722e9d;
case 0x722e9f:c.instructions+=3;goto B722e9f;
case 0x722ea2:c.instructions+=2;goto B722ea2;
case 0x722ea5:c.instructions+=1;goto B722ea5;
case 0x722ea7:goto L722ea7;
case 0x722ead:goto L722ead;
case 0x722eb0:c.instructions+=6;goto B722eb0;
case 0x722eb3:c.instructions+=5;goto B722eb3;
case 0x722eb6:c.instructions+=4;goto B722eb6;
case 0x722eb9:c.instructions+=3;goto B722eb9;
case 0x722ebc:c.instructions+=2;goto B722ebc;
case 0x722ebf:c.instructions+=1;goto B722ebf;
case 0x722ec1:goto L722ec1;
case 0x722ec7:goto L722ec7;
case 0x722ec9:goto L722ec9;
case 0x722eca:goto L722eca;
case 0x722ecb:c.instructions+=3;goto B722ecb;
case 0x722ecc:c.instructions+=2;goto B722ecc;
case 0x722ecd:c.instructions+=1;goto B722ecd;
case 0x722ece:goto L722ece;
case 0x722ecf:c.instructions+=8;goto B722ecf;
case 0x722ed1:c.instructions+=7;goto B722ed1;
case 0x722ed2:c.instructions+=6;goto B722ed2;
case 0x722ed6:c.instructions+=5;goto B722ed6;
case 0x722ed9:c.instructions+=4;goto B722ed9;
case 0x722edc:c.instructions+=3;goto B722edc;
case 0x722ede:c.instructions+=2;goto B722ede;
case 0x722ee4:c.instructions+=1;goto B722ee4;
case 0x722ee6:goto L722ee6;
case 0x722ee8:c.instructions+=2;goto B722ee8;
case 0x722ee9:c.instructions+=1;goto B722ee9;
case 0x722eee:goto L722eee;
case 0x722eef:c.instructions+=2;goto B722eef;
case 0x722ef3:c.instructions+=1;goto B722ef3;
case 0x722ef8:goto L722ef8;
case 0x722efa:c.instructions+=3;goto B722efa;
case 0x722efc:c.instructions+=2;goto B722efc;
case 0x722efd:c.instructions+=1;goto B722efd;
case 0x722eff:goto L722eff;
case 0x722f01:c.instructions+=2;goto B722f01;
case 0x722f02:c.instructions+=1;goto B722f02;
case 0x722f04:goto L722f04;
case 0x722f0a:c.instructions+=3;goto B722f0a;
case 0x722f0c:c.instructions+=2;goto B722f0c;
case 0x722f0e:c.instructions+=1;goto B722f0e;
case 0x722f10:goto L722f10;
case 0x722f16:c.instructions+=4;goto B722f16;
case 0x722f19:c.instructions+=3;goto B722f19;
case 0x722f1c:c.instructions+=2;goto B722f1c;
case 0x722f20:c.instructions+=1;goto B722f20;
case 0x722f22:goto L722f22;
case 0x722f25:c.instructions+=1;goto B722f25;
case 0x722f2a:goto L722f2a;
case 0x722f30:c.instructions+=7;goto B722f30;
case 0x722f31:c.instructions+=6;goto B722f31;
case 0x722f35:c.instructions+=5;goto B722f35;
case 0x722f37:c.instructions+=4;goto B722f37;
case 0x722f39:c.instructions+=3;goto B722f39;
case 0x722f3b:c.instructions+=2;goto B722f3b;
case 0x722f3e:c.instructions+=1;goto B722f3e;
case 0x722f40:goto L722f40;
case 0x722f43:c.instructions+=1;goto B722f43;
case 0x722f48:goto L722f48;
case 0x722f4a:c.instructions+=3;goto B722f4a;
case 0x722f4e:c.instructions+=2;goto B722f4e;
case 0x722f4f:c.instructions+=1;goto B722f4f;
case 0x722f51:goto L722f51;
case 0x722f53:c.instructions+=1;goto B722f53;
case 0x722f58:goto L722f58;
case 0x722f59:c.instructions+=3;goto B722f59;
case 0x722f5e:c.instructions+=2;goto B722f5e;
case 0x722f60:c.instructions+=1;goto B722f60;
case 0x722f62:goto L722f62;
case 0x722f64:goto L722f64;
case 0x722f6a:c.instructions+=3;goto B722f6a;
case 0x722f6c:c.instructions+=2;goto B722f6c;
case 0x722f6f:c.instructions+=1;goto B722f6f;
case 0x722f72:goto L722f72;
case 0x722f74:goto L722f74;
case 0x722f75:goto L722f75;
case 0x722f76:c.instructions+=2;goto B722f76;
case 0x722f77:c.instructions+=1;goto B722f77;
case 0x722f78:goto L722f78;
case 0x722f7c:c.instructions+=8;goto B722f7c;
case 0x722f80:c.instructions+=7;goto B722f80;
case 0x722f82:c.instructions+=6;goto B722f82;
case 0x722f84:c.instructions+=5;goto B722f84;
case 0x722f86:c.instructions+=4;goto B722f86;
case 0x722f87:c.instructions+=3;goto B722f87;
case 0x722f8b:c.instructions+=2;goto B722f8b;
case 0x722f8f:c.instructions+=1;goto B722f8f;
case 0x722f94:goto L722f94;
case 0x722f97:c.instructions+=1;goto B722f97;
case 0x722f98:goto L722f98;
case 0x722f9f:c.instructions+=4;goto B722f9f;
case 0x722fa0:c.instructions+=3;goto B722fa0;
case 0x722fa2:c.instructions+=2;goto B722fa2;
case 0x722fa3:c.instructions+=1;goto B722fa3;
case 0x722fa5:goto L722fa5;
case 0x722fa7:c.instructions+=3;goto B722fa7;
case 0x722fa8:c.instructions+=2;goto B722fa8;
case 0x722fa9:c.instructions+=1;goto B722fa9;
case 0x722faa:goto L722faa;
case 0x722faf:goto L722faf;
case 0x722fb3:c.instructions+=1;goto B722fb3;
case 0x722fb8:goto L722fb8;
case 0x722fba:c.instructions+=2;goto B722fba;
case 0x722fbb:c.instructions+=1;goto B722fbb;
case 0x722fbd:goto L722fbd;
case 0x722fc2:c.instructions+=2;goto B722fc2;
case 0x722fc5:c.instructions+=1;goto B722fc5;
case 0x722fc7:goto L722fc7;
case 0x722fcc:goto L722fcc;
case 0x722fce:c.instructions+=2;goto B722fce;
case 0x722fcf:c.instructions+=1;goto B722fcf;
case 0x722fd0:goto L722fd0;
case 0x722fd1:c.instructions+=3;goto B722fd1;
case 0x722fd3:c.instructions+=2;goto B722fd3;
case 0x722fda:c.instructions+=1;goto B722fda;
case 0x722fdc:goto L722fdc;
case 0x722fde:c.instructions+=3;goto B722fde;
case 0x722fdf:c.instructions+=2;goto B722fdf;
case 0x722fe0:c.instructions+=1;goto B722fe0;
case 0x722fe1:goto L722fe1;
case 0x722fe2:c.instructions+=2;goto B722fe2;
case 0x722fe5:c.instructions+=1;goto B722fe5;
case 0x722fea:goto L722fea;
case 0x722fec:c.instructions+=3;goto B722fec;
case 0x722fee:c.instructions+=2;goto B722fee;
case 0x722fef:c.instructions+=1;goto B722fef;
case 0x722ff1:goto L722ff1;
case 0x722ff3:c.instructions+=2;goto B722ff3;
case 0x722ff4:c.instructions+=1;goto B722ff4;
case 0x722ff6:goto L722ff6;
case 0x722ff9:c.instructions+=2;goto B722ff9;
case 0x722fff:c.instructions+=1;goto B722fff;
default:missing_instruction(c.pc);}
B722004:L722004:{c.instructions+=3;NFSU2_TR(0x722004);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B722005:{NFSU2_TR(0x722005);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B722008:{NFSU2_TR(0x722008);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x72200dull));
TAIL_STATIC(0x725480u,725);
}
B72200d:L72200d:{c.instructions+=5;NFSU2_TR(0x72200d);
__builtin_memmove((R+28),(R+0),4);
}
B72200f:{NFSU2_TR(0x72200f);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B722011:{NFSU2_TR(0x722011);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+0)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B722013:{NFSU2_TR(0x722013);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B722014:{NFSU2_TR(0x722014);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L72207b;}}
}
B722016:L722016:{c.instructions+=12;NFSU2_TR(0x722016);
__builtin_memmove((R+8),gp(0x8b466c),4);
}
B72201c:{NFSU2_TR(0x72201c);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x8ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B72201f:{NFSU2_TR(0x72201f);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B722022:{NFSU2_TR(0x722022);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+8))));
}
B722024:{NFSU2_TR(0x722024);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x23ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(r1(U+4)));
}
B722028:{NFSU2_TR(0x722028);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B722029:{NFSU2_TR(0x722029);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+20,u32(r1(U+4)));
}
B72202d:{NFSU2_TR(0x72202d);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B722030:{NFSU2_TR(0x722030);
u8 U[13];
w4(U+0,u32(u32(u32(0x7c68e6ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
w4(R+4,u32(s32(s8(r1(U+12)))));
}
B722038:{NFSU2_TR(0x722038);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffff80ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B72203b:{NFSU2_TR(0x72203b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B72203c:{NFSU2_TR(0x72203c);
if(r1(R+518)){{goto L72207b;}}
}
B72203e:L72203e:{c.instructions+=10;NFSU2_TR(0x72203e);
u8 U[14];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),2);
w4(R+4,u32(s32(s16(r2(U+12)))));
}
B722043:{NFSU2_TR(0x722043);
{u32 ea_=u32(r4(R+24)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B722046:{NFSU2_TR(0x722046);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x8ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B722049:{NFSU2_TR(0x722049);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B72204c:{NFSU2_TR(0x72204c);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+8))));
}
B72204e:{NFSU2_TR(0x72204e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72204f:{NFSU2_TR(0x72204f);
{u32 ea_=u32(r4(R+0)+u32(56u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B722052:{NFSU2_TR(0x722052);
{u32 ea_=u32(u32(8487092u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B722058:{NFSU2_TR(0x722058);
{u32 ea_=u32(r4(R+0)+u32(72u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B72205b:{NFSU2_TR(0x72205b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x722060ull));
TAIL_STATIC(0x724f5du,724);
}
B722060:L722060:{c.instructions+=3;NFSU2_TR(0x722060);
u8 U[8];
__builtin_memmove((U+0),gp(0x8180b8),4);
w1(R+523,sborrow<u32>(r4(U+0),r4(R+12)));
w4(U+4,u32(u32(r4(U+0))-u32(r4(R+12))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B722066:{NFSU2_TR(0x722066);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B722067:{NFSU2_TR(0x722067);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L72207b;}}
}
B722069:L722069:{c.instructions+=3;NFSU2_TR(0x722069);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72206a:{NFSU2_TR(0x72206a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72206b:{NFSU2_TR(0x72206b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x722070ull));
TAIL_STATIC(0x725022u,725);
}
B722070:L722070:{c.instructions+=5;NFSU2_TR(0x722070);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B722071:{NFSU2_TR(0x722071);
u8 U[8];
__builtin_memmove((U+0),gp(0x8180b8),4);
w1(R+523,sborrow<u32>(r4(R+12),r4(U+0)));
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B722077:{NFSU2_TR(0x722077);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B722078:{NFSU2_TR(0x722078);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B722079:{NFSU2_TR(0x722079);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x722069u);}goto L722069;}}
}
B72207b:L72207b:{c.instructions+=8;NFSU2_TR(0x72207b);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B722081:{NFSU2_TR(0x722081);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B722082:{NFSU2_TR(0x722082);
{u32 ea_=u32(r4(R+24)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B722085:{NFSU2_TR(0x722085);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B722086:{NFSU2_TR(0x722086);
__asm__ volatile(".byte 0xda,0xe9":::"memory");
}
B722088:{NFSU2_TR(0x722088);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B72208a:{NFSU2_TR(0x72208a);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B72208d:{NFSU2_TR(0x72208d);
if(r1(R+514)){{goto L72209d;}}
}
B72208f:L72208f:{c.instructions+=4;NFSU2_TR(0x72208f);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0xcull))));
}
B722092:{NFSU2_TR(0x722092);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B722093:{NFSU2_TR(0x722093);
w4(R+4,u32(0x8b405cull));
}
B722098:{NFSU2_TR(0x722098);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x72209dull));
TAIL_STATIC(0x71fea4u,71f);
}
B72209d:L72209d:{c.instructions+=2;NFSU2_TR(0x72209d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B72209e:{NFSU2_TR(0x72209e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B72209f:L72209f:{c.instructions+=6;NFSU2_TR(0x72209f);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7220a0:{NFSU2_TR(0x7220a0);
__builtin_memmove((R+20),(R+16),4);
}
B7220a2:{NFSU2_TR(0x7220a2);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7220a3:{NFSU2_TR(0x7220a3);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7220a4:{NFSU2_TR(0x7220a4);
u8 U[5];
__builtin_memmove((U+3),gp(0x8b4608),1);
w1(R+512,u8((r1(U+3))<(u8(0x0ull))));
w1(R+523,sborrow<u8>(r1(U+3),u8(0x0ull)));
w1(U+4,u8(u32(r1(U+3))-u32(u8(0x0ull))));
w1(R+519,u8(s8(r1(U+4))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+4))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+4))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B7220ab:{NFSU2_TR(0x7220ab);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L7220b1;}}
}
B7220ad:L7220ad:{c.instructions+=2;NFSU2_TR(0x7220ad);
u8 U[4];
w4(U+0,u32(0xfffffff6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7220af:{NFSU2_TR(0x7220af);
{goto L7220c0;}
}
B7220b1:L7220b1:{c.instructions+=2;NFSU2_TR(0x7220b1);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B7220b4:{NFSU2_TR(0x7220b4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7220b9ull));
{goto L722424;}
}
B7220b9:L7220b9:{c.instructions+=3;NFSU2_TR(0x7220b9);
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
B7220bb:{NFSU2_TR(0x7220bb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B7220bc:{NFSU2_TR(0x7220bc);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L7220c3;}}
}
B7220be:L7220be:{c.instructions+=1;NFSU2_TR(0x7220be);
u8 U[4];
w4(U+0,u32(0xfffffff8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7220c0:L7220c0:{c.instructions+=3;NFSU2_TR(0x7220c0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B7220c1:{NFSU2_TR(0x7220c1);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B7220c2:{NFSU2_TR(0x7220c2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7220c3:L7220c3:{c.instructions+=5;NFSU2_TR(0x7220c3);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(U+8),u32(0x0ull)));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B7220c7:{NFSU2_TR(0x7220c7);
{u32 ea_=u32(r4(R+20)+u32(16u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B7220ca:{NFSU2_TR(0x7220ca);
{u32 ea_=u32(u32(7907660u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B7220d0:{NFSU2_TR(0x7220d0);
{u32 ea_=u32(r4(R+20)+u32(4294967292u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B7220d3:{NFSU2_TR(0x7220d3);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L7220e8;}}
}
B7220d5:L7220d5:{c.instructions+=5;NFSU2_TR(0x7220d5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7220d6:{NFSU2_TR(0x7220d6);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B7220d9:{NFSU2_TR(0x7220d9);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7220db:{NFSU2_TR(0x7220db);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B7220de:{NFSU2_TR(0x7220de);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7220e3ull));
TAIL_STATIC(0x723e9du,723);
}
B7220e3:L7220e3:{c.instructions+=3;NFSU2_TR(0x7220e3);
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
B7220e6:{NFSU2_TR(0x7220e6);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B7220e7:{NFSU2_TR(0x7220e7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7220e8:L7220e8:{c.instructions+=11;NFSU2_TR(0x7220e8);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B7220ea:{NFSU2_TR(0x7220ea);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7220eb:{NFSU2_TR(0x7220eb);
{u32 ea_=u32(r4(R+20)+u32(12u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B7220ee:{NFSU2_TR(0x7220ee);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7220ef:{NFSU2_TR(0x7220ef);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7220f0:{NFSU2_TR(0x7220f0);
u8 U[4];
w4(U+0,u32(0x6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7220f2:{NFSU2_TR(0x7220f2);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x38"::"a"(ea_):"memory");}
}
B7220f8:{NFSU2_TR(0x7220f8);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x180ull))));
__builtin_memmove((R+24),(U+0),4);
}
B7220fe:{NFSU2_TR(0x7220fe);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B7220ff:{NFSU2_TR(0x7220ff);
w4(R+28,u32(0x8b405cull));
}
B722104:{NFSU2_TR(0x722104);
{u32 ea_=u32(r4(R+20)+u32(4294967288u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B722107:L722107:{c.instructions+=6;NFSU2_TR(0x722107);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72210d:{NFSU2_TR(0x72210d);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72210f:{NFSU2_TR(0x72210f);
__asm__ volatile(".byte 0xda,0xe9":::"memory");
}
B722111:{NFSU2_TR(0x722111);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B722113:{NFSU2_TR(0x722113);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B722116:{NFSU2_TR(0x722116);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L722123;}}
}
B722118:L722118:{c.instructions+=4;NFSU2_TR(0x722118);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xffffffecull))));
__builtin_memmove((R+0),(U+0),4);
}
B72211b:{NFSU2_TR(0x72211b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72211c:{NFSU2_TR(0x72211c);
__builtin_memmove((R+4),(R+28),4);
}
B72211e:{NFSU2_TR(0x72211e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x722123ull));
TAIL_STATIC(0x71fea4u,71f);
}
B722123:L722123:{c.instructions+=14;NFSU2_TR(0x722123);
{u32 ea_=u32(r4(R+20)+u32(4294967292u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B722126:{NFSU2_TR(0x722126);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B722129:{NFSU2_TR(0x722129);
{u32 ea_=u32(r4(R+24)+u32(4294967272u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B72212c:{NFSU2_TR(0x72212c);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B72212e:{NFSU2_TR(0x72212e);
{u32 ea_=u32(r4(R+20)+u32(4294967288u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B722131:{NFSU2_TR(0x722131);
{u32 ea_=u32(u32(9125972u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B722137:{NFSU2_TR(0x722137);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72213a:{NFSU2_TR(0x72213a);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B72213c:{NFSU2_TR(0x72213c);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B722142:{NFSU2_TR(0x722142);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B722144:{NFSU2_TR(0x722144);
__asm__ volatile(".byte 0xda,0xe9":::"memory");
}
B722146:{NFSU2_TR(0x722146);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B722148:{NFSU2_TR(0x722148);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B72214b:{NFSU2_TR(0x72214b);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L722165;}}
}
B72214d:L72214d:{c.instructions+=7;NFSU2_TR(0x72214d);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xffffffe0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B722150:{NFSU2_TR(0x722150);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B722153:{NFSU2_TR(0x722153);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xffffffecull))));
__builtin_memmove((R+0),(U+0),4);
}
B722156:{NFSU2_TR(0x722156);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B722157:{NFSU2_TR(0x722157);
__builtin_memmove((R+4),(R+28),4);
}
B722159:{NFSU2_TR(0x722159);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfffffff4ull))));
w4(U+4,u32(0x721fb4ull));
s4(u32(r4(U+0)),r4(U+4));
}
B722160:{NFSU2_TR(0x722160);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x722165ull));
TAIL_STATIC(0x71fe8au,71f);
}
B722165:L722165:{c.instructions+=3;NFSU2_TR(0x722165);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x24ull))));
}
B722168:{NFSU2_TR(0x722168);
w4(R+12,u32(u32(r4(R+12))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+12))==(u32(0x0ull))));
}
B722169:{NFSU2_TR(0x722169);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x722107u);}goto L722107;}}
}
B72216b:L72216b:{c.instructions+=6;NFSU2_TR(0x72216b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B72216c:{NFSU2_TR(0x72216c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B72216d:{NFSU2_TR(0x72216d);
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
B72216f:{NFSU2_TR(0x72216f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B722170:{NFSU2_TR(0x722170);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B722171:{NFSU2_TR(0x722171);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B722172:L722172:{c.instructions+=6;NFSU2_TR(0x722172);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B722173:{NFSU2_TR(0x722173);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B722177:{NFSU2_TR(0x722177);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B722178:{NFSU2_TR(0x722178);
u8 U[4];
w4(U+0,u32(0x6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72217a:{NFSU2_TR(0x72217a);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x16cull))));
}
B722180:{NFSU2_TR(0x722180);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B722181:L722181:{c.instructions+=6;NFSU2_TR(0x722181);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B722187:{NFSU2_TR(0x722187);
{u32 ea_=u32(r4(R+24)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72218a:{NFSU2_TR(0x72218a);
__asm__ volatile(".byte 0xda,0xe9":::"memory");
}
B72218c:{NFSU2_TR(0x72218c);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B72218e:{NFSU2_TR(0x72218e);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B722191:{NFSU2_TR(0x722191);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L72219e;}}
}
B722193:L722193:{c.instructions+=3;NFSU2_TR(0x722193);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B722194:{NFSU2_TR(0x722194);
w4(R+4,u32(0x8b405cull));
}
B722199:{NFSU2_TR(0x722199);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x72219eull));
TAIL_STATIC(0x71fea4u,71f);
}
B72219e:L72219e:{c.instructions+=3;NFSU2_TR(0x72219e);
w1(R+512,carry<u32>(r4(R+24),u32(0x24ull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x24ull))));
}
B7221a1:{NFSU2_TR(0x7221a1);
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
B7221a2:{NFSU2_TR(0x7221a2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x722181u);}goto L722181;}}
}
B7221a4:L7221a4:{c.instructions+=3;NFSU2_TR(0x7221a4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B7221a5:{NFSU2_TR(0x7221a5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B7221a6:{NFSU2_TR(0x7221a6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7221a7:L7221a7:{c.instructions+=15;NFSU2_TR(0x7221a7);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7221a8:{NFSU2_TR(0x7221a8);
__builtin_memmove((R+20),(R+16),4);
}
B7221aa:{NFSU2_TR(0x7221aa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x10ull))));
}
B7221ad:{NFSU2_TR(0x7221ad);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7221ae:{NFSU2_TR(0x7221ae);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7221af:{NFSU2_TR(0x7221af);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B7221b2:{NFSU2_TR(0x7221b2);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7221b3:{NFSU2_TR(0x7221b3);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x110ull))));
__builtin_memmove((R+0),(U+0),4);
}
B7221b9:{NFSU2_TR(0x7221b9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7221ba:{NFSU2_TR(0x7221ba);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((R+0),(U+0),4);
}
B7221bd:{NFSU2_TR(0x7221bd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7221be:{NFSU2_TR(0x7221be);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((R+0),(U+0),4);
}
B7221c1:{NFSU2_TR(0x7221c1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7221c2:{NFSU2_TR(0x7221c2);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B7221c5:{NFSU2_TR(0x7221c5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7221caull));
TAIL_STATIC(0x7231d4u,723);
}
B7221ca:L7221ca:{c.instructions+=3;NFSU2_TR(0x7221ca);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7221cd:{NFSU2_TR(0x7221cd);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B7221d0:{NFSU2_TR(0x7221d0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7221d5ull));
TAIL_STATIC(0x725480u,725);
}
B7221d5:L7221d5:{c.instructions+=6;NFSU2_TR(0x7221d5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B7221d9:{NFSU2_TR(0x7221d9);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B7221dc:{NFSU2_TR(0x7221dc);
u8 U[7];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3aull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(R+512,u8((r1(U+5))<(u8(0x0ull))));
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x0ull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B7221e0:{NFSU2_TR(0x7221e0);
__builtin_memmove((R+28),(R+0),4);
}
B7221e2:{NFSU2_TR(0x7221e2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7221e5:{NFSU2_TR(0x7221e5);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L7222ac;}}
}
B7221eb:L7221eb:{c.instructions+=5;NFSU2_TR(0x7221eb);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x8ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B7221ee:{NFSU2_TR(0x7221ee);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B7221f1:{NFSU2_TR(0x7221f1);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4ull))));
}
B7221f4:{NFSU2_TR(0x7221f4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7221f7:{NFSU2_TR(0x7221f7);
{goto L7221fc;}
}
B7221f9:L7221f9:{c.instructions+=1;NFSU2_TR(0x7221f9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7221fc:L7221fc:{c.instructions+=15;NFSU2_TR(0x7221fc);
__builtin_memmove((R+0),gp(0x8b466c),4);
}
B722201:{NFSU2_TR(0x722201);
u8 U[10];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),2);
w4(R+12,u32(s32(s16(r2(U+8)))));
}
B722205:{NFSU2_TR(0x722205);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B722208:{NFSU2_TR(0x722208);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B72220c:{NFSU2_TR(0x72220c);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x8ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((R+28),(U+4),4);
}
B72220f:{NFSU2_TR(0x72220f);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+28,shl<u32>(r4(R+28),u64(r4(U+0))));
}
B722212:{NFSU2_TR(0x722212);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+0))));
}
B722214:{NFSU2_TR(0x722214);
u8 U[8];
__builtin_memmove((U+0),gp(0x8180b8),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x0ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x0ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B72221b:{NFSU2_TR(0x72221b);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3aull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B72221f:{NFSU2_TR(0x72221f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B722222:{NFSU2_TR(0x722222);
u8 U[13];
w4(U+0,u32(u32(u32(0x81808aull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
w4(R+0,u32(s32(s8(r1(U+12)))));
}
B72222a:{NFSU2_TR(0x72222a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x8ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B72222d:{NFSU2_TR(0x72222d);
u8 U[12];
w4(U+0,u32(u32(u32(0x160ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B722234:{NFSU2_TR(0x722234);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B722237:{NFSU2_TR(0x722237);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L72227c;}}
}
B722239:L722239:{c.instructions+=10;NFSU2_TR(0x722239);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B72223c:{NFSU2_TR(0x72223c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x128ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B722242:{NFSU2_TR(0x722242);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B722245:{NFSU2_TR(0x722245);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B722248:{NFSU2_TR(0x722248);
{u32 ea_=u32(r4(R+4)+r4(R+0));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72224b:{NFSU2_TR(0x72224b);
{u32 ea_=u32(r4(R+8)+r4(R+0));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B72224e:{NFSU2_TR(0x72224e);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B722251:{NFSU2_TR(0x722251);
{u32 ea_=u32(r4(R+0)+r4(R+4));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B722254:{NFSU2_TR(0x722254);
{u32 ea_=u32(u32(7909636u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B72225a:{NFSU2_TR(0x72225a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x72225full));
TAIL_STATIC(0x75bed4u,75b);
}
B72225f:L72225f:{c.instructions+=4;NFSU2_TR(0x72225f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B722260:{NFSU2_TR(0x722260);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B722263:{NFSU2_TR(0x722263);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B722266:{NFSU2_TR(0x722266);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x72226bull));
TAIL_STATIC(0x723bc1u,723);
}
B72226b:L72226b:{c.instructions+=5;NFSU2_TR(0x72226b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B72226e:{NFSU2_TR(0x72226e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B722271:{NFSU2_TR(0x722271);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B722274:{NFSU2_TR(0x722274);
u8 U[8];
__builtin_memmove((U+0),gp(0x8180b8),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B72227a:{NFSU2_TR(0x72227a);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x722239u);}goto L722239;}}
}
B72227c:L72227c:{c.instructions+=7;NFSU2_TR(0x72227c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B72227f:{NFSU2_TR(0x72227f);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B722282:{NFSU2_TR(0x722282);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B722283:{NFSU2_TR(0x722283);
{u32 ea_=u32(r4(R+28)+u32(56u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B722286:{NFSU2_TR(0x722286);
{u32 ea_=u32(u32(8487092u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B72228c:{NFSU2_TR(0x72228c);
{u32 ea_=u32(r4(R+28)+u32(72u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B72228f:{NFSU2_TR(0x72228f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x722294ull));
TAIL_STATIC(0x724f5du,724);
}
B722294:L722294:{c.instructions+=6;NFSU2_TR(0x722294);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3aull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B722298:{NFSU2_TR(0x722298);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B72229b:{NFSU2_TR(0x72229b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x2ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B72229f:{NFSU2_TR(0x72229f);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+0))));
}
B7222a2:{NFSU2_TR(0x7222a2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B7222a3:{NFSU2_TR(0x7222a3);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7221f9u);}goto L7221f9;}}
}
B7222a9:L7222a9:{c.instructions+=1;NFSU2_TR(0x7222a9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B7222ac:L7222ac:{c.instructions+=2;NFSU2_TR(0x7222ac);
u8 U[7];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x12ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x0ull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B7222b0:{NFSU2_TR(0x7222b0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L72239f;}}
}
B7222b6:L7222b6:{c.instructions+=12;NFSU2_TR(0x7222b6);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3aull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B7222ba:{NFSU2_TR(0x7222ba);
__builtin_memmove((R+4),gp(0x8b46ec),4);
}
B7222c0:{NFSU2_TR(0x7222c0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B7222c4:{NFSU2_TR(0x7222c4);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B7222c6:{NFSU2_TR(0x7222c6);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B7222c9:{NFSU2_TR(0x7222c9);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B7222cc:{NFSU2_TR(0x7222cc);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B7222cf:{NFSU2_TR(0x7222cf);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B7222d2:{NFSU2_TR(0x7222d2);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x2ull))));
w4(U+4,u32(u32(u32(0x7c69baull))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B7222d9:{NFSU2_TR(0x7222d9);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+4,u32(u32(u32(0x7c692aull))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B7222e0:{NFSU2_TR(0x7222e0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7222e3:{NFSU2_TR(0x7222e3);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L72239f;}}
}
B7222e9:L7222e9:{c.instructions+=5;NFSU2_TR(0x7222e9);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x8ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((R+28),(U+4),4);
}
B7222ec:{NFSU2_TR(0x7222ec);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+28,shl<u32>(r4(R+28),u64(r4(U+0))));
}
B7222ef:{NFSU2_TR(0x7222ef);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7222f2:{NFSU2_TR(0x7222f2);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x4ull))));
}
B7222f5:{NFSU2_TR(0x7222f5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(r4(R+8))));
s4(u32(r4(U+0)),r4(U+4));
}
B7222f8:L7222f8:{c.instructions+=18;NFSU2_TR(0x7222f8);
__builtin_memmove((R+0),gp(0x8b466c),4);
}
B7222fd:{NFSU2_TR(0x7222fd);
{u32 ea_=u32(u32(8153320u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B722303:{NFSU2_TR(0x722303);
u8 U[10];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),2);
w4(R+8,u32(s32(s16(r2(U+8)))));
}
B722307:{NFSU2_TR(0x722307);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B72230a:{NFSU2_TR(0x72230a);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x8ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B72230d:{NFSU2_TR(0x72230d);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B722310:{NFSU2_TR(0x722310);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+0))));
}
B722312:{NFSU2_TR(0x722312);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3aull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B722316:{NFSU2_TR(0x722316);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B722319:{NFSU2_TR(0x722319);
u8 U[13];
w4(U+0,u32(u32(u32(0x81808aull))+u32(r4(R+12))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
w4(R+0,u32(s32(s8(r1(U+12)))));
}
B722321:{NFSU2_TR(0x722321);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x8ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B722324:{NFSU2_TR(0x722324);
u8 U[12];
w4(U+0,u32(u32(u32(0x160ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+12),(U+8),4);
}
B72232b:{NFSU2_TR(0x72232b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72232e:{NFSU2_TR(0x72232e);
{u32 ea_=u32(r4(R+12));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B722330:{NFSU2_TR(0x722330);
__asm__ volatile(".byte 0xda,0xe9":::"memory");
}
B722332:{NFSU2_TR(0x722332);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B722334:{NFSU2_TR(0x722334);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B722337:{NFSU2_TR(0x722337);
if(r1(R+514)){{goto L722352;}}
}
B722339:L722339:{c.instructions+=9;NFSU2_TR(0x722339);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B72233c:{NFSU2_TR(0x72233c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B72233f:{NFSU2_TR(0x72233f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B722342:{NFSU2_TR(0x722342);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+8))));
}
B722344:{NFSU2_TR(0x722344);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B722346:{NFSU2_TR(0x722346);
u8 U[9];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
__builtin_memmove((R+9),(U+8),1);
}
B722349:{NFSU2_TR(0x722349);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+8),2);
s2(u32(r4(U+0)),r2(U+4));
}
B72234d:{NFSU2_TR(0x72234d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B722350:{NFSU2_TR(0x722350);
{goto L722386;}
}
B722352:L722352:{c.instructions+=9;NFSU2_TR(0x722352);
{u32 ea_=u32(r4(R+12));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B722354:{NFSU2_TR(0x722354);
{u32 ea_=u32(u32(7896460u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B72235a:{NFSU2_TR(0x72235a);
{u32 ea_=u32(r4(R+20)+u32(4294967280u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B72235d:{NFSU2_TR(0x72235d);
{u32 ea_=u32(r4(R+20)+u32(4294967280u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B722360:{NFSU2_TR(0x722360);
{u32 ea_=u32(r4(R+20)+u32(4294967284u));__asm__ volatile(".byte 0xdb,0x18"::"a"(ea_):"memory");}
}
B722363:{NFSU2_TR(0x722363);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+0),(U+4),2);
}
B722367:{NFSU2_TR(0x722367);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B72236b:{NFSU2_TR(0x72236b);
u8 U[7];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x0ull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B72236f:{NFSU2_TR(0x72236f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L722386;}}
}
B722371:L722371:{c.instructions+=6;NFSU2_TR(0x722371);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B722374:{NFSU2_TR(0x722374);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B722377:{NFSU2_TR(0x722377);
u8 U[9];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
w2(R+0,u16(r1(U+8)));
}
B72237c:{NFSU2_TR(0x72237c);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B72237f:{NFSU2_TR(0x72237f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))+u32(r4(U+4))));
}
B722382:{NFSU2_TR(0x722382);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B722386:L722386:{c.instructions+=2;NFSU2_TR(0x722386);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B722387:{NFSU2_TR(0x722387);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x72238cull));
TAIL_STATIC(0x724fc5u,724);
}
B72238c:L72238c:{c.instructions+=7;NFSU2_TR(0x72238c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B72238f:{NFSU2_TR(0x72238f);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3aull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B722393:{NFSU2_TR(0x722393);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B722394:{NFSU2_TR(0x722394);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B722395:{NFSU2_TR(0x722395);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+0))));
}
B722398:{NFSU2_TR(0x722398);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B722399:{NFSU2_TR(0x722399);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7222f8u);}goto L7222f8;}}
}
B72239f:L72239f:{c.instructions+=2;NFSU2_TR(0x72239f);
u8 U[22];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x13cull))));
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
B7223a6:{NFSU2_TR(0x7223a6);
if(r1(R+518)){{goto L7223b9;}}
}
B7223a8:L7223a8:{c.instructions+=4;NFSU2_TR(0x7223a8);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x12cull))));
__builtin_memmove((R+0),(U+0),4);
}
B7223ae:{NFSU2_TR(0x7223ae);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7223af:{NFSU2_TR(0x7223af);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B7223b2:{NFSU2_TR(0x7223b2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7223b7ull));
TAIL_STATIC(0x7278b6u,727);
}
B7223b7:L7223b7:{c.instructions+=2;NFSU2_TR(0x7223b7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B7223b8:{NFSU2_TR(0x7223b8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B7223b9:L7223b9:{c.instructions+=6;NFSU2_TR(0x7223b9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B7223ba:{NFSU2_TR(0x7223ba);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B7223be:{NFSU2_TR(0x7223be);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B7223bf:{NFSU2_TR(0x7223bf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B7223c0:{NFSU2_TR(0x7223c0);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B7223c1:{NFSU2_TR(0x7223c1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7223c2:L7223c2:{c.instructions+=9;NFSU2_TR(0x7223c2);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7223c6:{NFSU2_TR(0x7223c6);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+8,u32(r1(U+4)));
}
B7223ca:{NFSU2_TR(0x7223ca);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+4))),2);
w4(R+0,u32(r2(U+0)));
}
B7223cd:{NFSU2_TR(0x7223cd);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x3ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B7223d0:{NFSU2_TR(0x7223d0);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(r4(R+8)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B7223d3:{NFSU2_TR(0x7223d3);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7223d4:{NFSU2_TR(0x7223d4);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B7223d6:{NFSU2_TR(0x7223d6);
u8 U[5];
__builtin_memmove((U+3),(R+4),1);
w1(U+4,u8(u32(r1(U+3))-u32(u8(0xaull))));
w1(R+519,u8(s8(r1(U+4))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+4))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+4))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B7223d9:{NFSU2_TR(0x7223d9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L7223e8;}}
}
B7223db:L7223db:{c.instructions+=1;NFSU2_TR(0x7223db);
w4(R+24,u32(0x88ull));
}
B7223e0:L7223e0:{c.instructions+=4;NFSU2_TR(0x7223e0);
u8 U[32];
w8(U+8,u64(s64(s32(r4(R+0)))));
w8(U+16,u64(s64(s32(r4(R+24)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+0,u32(r8(U+24)));
w8(U+0,u64(s64(s32(r4(R+0)))));
w1(R+512,u8((r8(U+0))!=(r8(U+24))));
__builtin_memmove((R+523),(R+512),1);
}
B7223e3:{NFSU2_TR(0x7223e3);
u8 U[47];
w4(U+39,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
__builtin_memmove((U+43),(R+0),4);
w4(R+0,sar<u32>(r4(R+0),u64(r4(U+39))));
w1(U+24,u8((r4(U+39))==(u32(0x0ull))));
w4(U+25,u32(u32(r4(U+39))-u32(u32(0x1ull))));
w4(U+29,sar<u32>(r4(U+43),u64(r4(U+25))));
w4(U+33,u32(u32(r4(U+29))&u32(u32(0x1ull))));
w1(U+37,u8((r4(U+33))!=(u32(0x0ull))));
__builtin_memmove((U+0),(U+24),1);
w1(U+1,u8(u32(r1(U+0))*u32(r1(R+512))));
w1(U+2,u8(!(r1(U+24))));
__builtin_memmove((U+3),(U+2),1);
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+37))));
w1(R+512,u8(u32(r1(U+1))|u32(r1(U+4))));
w1(U+38,u8((r4(U+39))==(u32(0x1ull))));
__builtin_memmove((U+0),(U+38),1);
w1(U+1,u8(u32(r1(U+0))*u32(u8(0x0ull))));
w1(U+2,u8(!(r1(U+38))));
__builtin_memmove((U+3),(U+2),1);
w1(U+4,u8(u32(r1(U+3))*u32(r1(R+523))));
w1(R+523,u8(u32(r1(U+1))|u32(r1(U+4))));
w1(U+5,u8((r4(U+39))!=(u32(0x0ull))));
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
B7223e6:{NFSU2_TR(0x7223e6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B7223e7:{NFSU2_TR(0x7223e7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7223e8:L7223e8:{c.instructions+=2;NFSU2_TR(0x7223e8);
u8 U[5];
__builtin_memmove((U+3),(R+4),1);
w1(U+4,u8(u32(r1(U+3))-u32(u8(0x4ull))));
w1(R+519,u8(s8(r1(U+4))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+4))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+4))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B7223eb:{NFSU2_TR(0x7223eb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L7223f2;}}
}
B7223ed:L7223ed:{c.instructions+=1;NFSU2_TR(0x7223ed);
u8 U[4];
w4(U+0,u32(0x33ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7223ef:L7223ef:{c.instructions+=2;NFSU2_TR(0x7223ef);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B7223f0:{NFSU2_TR(0x7223f0);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7223e0u);}goto L7223e0;}
}
B7223f2:L7223f2:{c.instructions+=2;NFSU2_TR(0x7223f2);
u8 U[5];
__builtin_memmove((U+3),(R+4),1);
w1(U+4,u8(u32(r1(U+3))-u32(u8(0x16ull))));
w1(R+519,u8(s8(r1(U+4))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+4))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+4))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B7223f5:{NFSU2_TR(0x7223f5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L7223fb;}}
}
B7223f7:L7223f7:{c.instructions+=2;NFSU2_TR(0x7223f7);
u8 U[4];
w4(U+0,u32(0x66ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7223f9:{NFSU2_TR(0x7223f9);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7223efu);}goto L7223ef;}
}
B7223fb:L7223fb:{c.instructions+=2;NFSU2_TR(0x7223fb);
u8 U[5];
__builtin_memmove((U+3),(R+4),1);
w1(U+4,u8(u32(r1(U+3))-u32(u8(0x9ull))));
w1(R+519,u8(s8(r1(U+4))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+4))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+4))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B7223fe:{NFSU2_TR(0x7223fe);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L722407;}}
}
B722400:L722400:{c.instructions+=2;NFSU2_TR(0x722400);
w4(R+24,u32(0x100ull));
}
B722405:{NFSU2_TR(0x722405);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7223e0u);}goto L7223e0;}
}
B722407:L722407:{c.instructions+=2;NFSU2_TR(0x722407);
u8 U[5];
__builtin_memmove((U+3),(R+4),1);
w1(U+4,u8(u32(r1(U+3))-u32(u8(0x8ull))));
w1(R+519,u8(s8(r1(U+4))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+4))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+4))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B72240a:{NFSU2_TR(0x72240a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L722413;}}
}
B72240c:L72240c:{c.instructions+=2;NFSU2_TR(0x72240c);
w4(R+24,u32(0x200ull));
}
B722411:{NFSU2_TR(0x722411);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7223e0u);}goto L7223e0;}
}
B722413:L722413:{c.instructions+=2;NFSU2_TR(0x722413);
u8 U[5];
__builtin_memmove((U+3),(R+4),1);
w1(R+512,u8((r1(U+3))<(u8(0x10ull))));
w1(R+523,sborrow<u8>(r1(U+3),u8(0x10ull)));
w1(U+4,u8(u32(r1(U+3))-u32(u8(0x10ull))));
w1(R+519,u8(s8(r1(U+4))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+4))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+4))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B722416:{NFSU2_TR(0x722416);
if(r1(R+518)){{goto L72241d;}}
}
B722418:L722418:{c.instructions+=2;NFSU2_TR(0x722418);
u8 U[5];
__builtin_memmove((U+3),(R+4),1);
w1(R+512,u8((r1(U+3))<(u8(0x17ull))));
w1(R+523,sborrow<u8>(r1(U+3),u8(0x17ull)));
w1(U+4,u8(u32(r1(U+3))-u32(u8(0x17ull))));
w1(R+519,u8(s8(r1(U+4))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+4))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+4))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B72241b:{NFSU2_TR(0x72241b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7223e0u);}goto L7223e0;}}
}
B72241d:L72241d:{c.instructions+=4;NFSU2_TR(0x72241d);
__builtin_memmove((R+0),(R+8),4);
}
B72241f:{NFSU2_TR(0x72241f);
u8 U[45];
w4(U+37,u32(u32(u32(0x3ull))&u32(u32(0x1full))));
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
B722422:{NFSU2_TR(0x722422);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B722423:{NFSU2_TR(0x722423);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B722424:L722424:{c.instructions+=4;NFSU2_TR(0x722424);
w4(R+4,u32(m1(0x8b44de)));
}
B72242b:{NFSU2_TR(0x72242b);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B72242f:{NFSU2_TR(0x72242f);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B722431:{NFSU2_TR(0x722431);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L72243f;}}
}
B722433:L722433:{c.instructions+=2;NFSU2_TR(0x722433);
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
B722435:{NFSU2_TR(0x722435);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L72243f;}}
}
B722437:L722437:{c.instructions+=2;NFSU2_TR(0x722437);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x8b4068ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B72243e:{NFSU2_TR(0x72243e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B72243f:L72243f:{c.instructions+=2;NFSU2_TR(0x72243f);
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
B722441:{NFSU2_TR(0x722441);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B722442:L722442:{c.instructions+=7;NFSU2_TR(0x722442);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B722446:{NFSU2_TR(0x722446);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B722447:{NFSU2_TR(0x722447);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B722448:{NFSU2_TR(0x722448);
u8 U[12];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B72244c:{NFSU2_TR(0x72244c);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
}
B722451:{NFSU2_TR(0x722451);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x8b4068ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+24),(U+8),4);
}
B722458:{NFSU2_TR(0x722458);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x72245dull));
TAIL_STATIC(0x727a12u,727);
}
B72245d:L72245d:{c.instructions+=5;NFSU2_TR(0x72245d);
__builtin_memmove((R+28),(R+0),4);
}
B72245f:{NFSU2_TR(0x72245f);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x144ull))));
__builtin_memmove((R+0),(U+0),4);
}
B722465:{NFSU2_TR(0x722465);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B722466:{NFSU2_TR(0x722466);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B722467:{NFSU2_TR(0x722467);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x72246cull));
TAIL_STATIC(0x7279d6u,727);
}
B72246c:L72246c:{c.instructions+=4;NFSU2_TR(0x72246c);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x150ull))));
__builtin_memmove((R+0),(U+0),4);
}
B722472:{NFSU2_TR(0x722472);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B722473:{NFSU2_TR(0x722473);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B722474:{NFSU2_TR(0x722474);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x722479ull));
TAIL_STATIC(0x72796eu,727);
}
B722479:L722479:{c.instructions+=6;NFSU2_TR(0x722479);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B72247c:{NFSU2_TR(0x72247c);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x15cull))));
__builtin_memmove((R+0),(U+0),4);
}
B722482:{NFSU2_TR(0x722482);
u8 U[18];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
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
B722484:{NFSU2_TR(0x722484);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B722485:{NFSU2_TR(0x722485);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B722486:{NFSU2_TR(0x722486);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L72248b;}}
}
B722488:L722488:{c.instructions+=1;NFSU2_TR(0x722488);
u8 U[10];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
w4(U+0,u32(u32(r4(U+0))&u32(u32(0x0ull))));
s4(u32(r4(R+0)),r4(U+0));
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
w4(U+4,u32(u32(r4(U+0))&u32(u32(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r4(U+4)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B72248b:L72248b:{c.instructions+=1;NFSU2_TR(0x72248b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B72248c:L72248c:{c.instructions+=8;NFSU2_TR(0x72248c);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B722490:{NFSU2_TR(0x722490);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B722493:{NFSU2_TR(0x722493);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B722494:{NFSU2_TR(0x722494);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B722496:{NFSU2_TR(0x722496);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
}
B72249b:{NFSU2_TR(0x72249b);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x8b4068ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B7224a2:{NFSU2_TR(0x7224a2);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+4));
}
B7224a4:{NFSU2_TR(0x7224a4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7224a9ull));
TAIL_STATIC(0x770e3fu,770);
}
B7224a9:L7224a9:{c.instructions+=3;NFSU2_TR(0x7224a9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B7224aa:{NFSU2_TR(0x7224aa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B7224ab:{NFSU2_TR(0x7224ab);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7224ac:L7224ac:{c.instructions+=9;NFSU2_TR(0x7224ac);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7224b0:{NFSU2_TR(0x7224b0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7224b1:{NFSU2_TR(0x7224b1);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7224b2:{NFSU2_TR(0x7224b2);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7224b3:{NFSU2_TR(0x7224b3);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B7224b7:{NFSU2_TR(0x7224b7);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x144ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7224bd:{NFSU2_TR(0x7224bd);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B7224bf:{NFSU2_TR(0x7224bf);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B7224c1:{NFSU2_TR(0x7224c1);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B7224c2:L7224c2:{c.instructions+=2;NFSU2_TR(0x7224c2);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+4))<(r4(U+8))));
w4(U+12,u32(u32(r4(R+4))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B7224c5:{NFSU2_TR(0x7224c5);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L7224d0;}}
}
B7224c7:L7224c7:{c.instructions+=4;NFSU2_TR(0x7224c7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B7224ca:{NFSU2_TR(0x7224ca);
__builtin_memmove((R+24),(R+4),4);
}
B7224cc:{NFSU2_TR(0x7224cc);
w4(R+24,u32(u32(r4(R+24))-u32(r4(R+8))));
}
B7224ce:{NFSU2_TR(0x7224ce);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+24))));
}
B7224d0:L7224d0:{c.instructions+=5;NFSU2_TR(0x7224d0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+4))));
s4(u32(r4(U+0)),r4(U+4));
}
B7224d3:{NFSU2_TR(0x7224d3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(r4(R+4))));
s4(u32(r4(U+0)),r4(U+4));
}
B7224d6:{NFSU2_TR(0x7224d6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7224d9:{NFSU2_TR(0x7224d9);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+4))));
}
B7224dc:{NFSU2_TR(0x7224dc);
if(r1(R+512)){{goto L7224e7;}}
}
B7224de:L7224de:{c.instructions+=2;NFSU2_TR(0x7224de);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B7224e1:{NFSU2_TR(0x7224e1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7224e6ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x722442u);}goto L722442;}
}
B7224e6:L7224e6:{c.instructions+=1;NFSU2_TR(0x7224e6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B7224e7:L7224e7:{c.instructions+=2;NFSU2_TR(0x7224e7);
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
B7224e9:{NFSU2_TR(0x7224e9);
if(r1(R+518)){{goto L722507;}}
}
B7224eb:L7224eb:{c.instructions+=6;NFSU2_TR(0x7224eb);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x144ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7224f1:{NFSU2_TR(0x7224f1);
__builtin_memmove((R+4),(R+24),4);
}
B7224f3:{NFSU2_TR(0x7224f3);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B7224f5:{NFSU2_TR(0x7224f5);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B7224f6:{NFSU2_TR(0x7224f6);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0xc8ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xc8ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B7224fc:{NFSU2_TR(0x7224fc);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7224c2u);}goto L7224c2;}}
}
B7224fe:L7224fe:{c.instructions+=2;NFSU2_TR(0x7224fe);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B722501:{NFSU2_TR(0x722501);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x722506ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x722442u);}goto L722442;}
}
B722506:L722506:{c.instructions+=1;NFSU2_TR(0x722506);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B722507:L722507:{c.instructions+=4;NFSU2_TR(0x722507);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B722508:{NFSU2_TR(0x722508);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B722509:{NFSU2_TR(0x722509);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B72250a:{NFSU2_TR(0x72250a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B72250b:L72250b:{c.instructions+=12;NFSU2_TR(0x72250b);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72250c:{NFSU2_TR(0x72250c);
__builtin_memmove((R+20),(R+16),4);
}
B72250e:{NFSU2_TR(0x72250e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x30ull))));
}
B722511:{NFSU2_TR(0x722511);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B722514:{NFSU2_TR(0x722514);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B722515:{NFSU2_TR(0x722515);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x8b4068ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+12),(U+8),4);
}
B72251c:{NFSU2_TR(0x72251c);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x15cull))));
__builtin_memmove((R+0),(U+0),4);
}
B722522:{NFSU2_TR(0x722522);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B722524:{NFSU2_TR(0x722524);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B722526:{NFSU2_TR(0x722526);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B722527:{NFSU2_TR(0x722527);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B722528:{NFSU2_TR(0x722528);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L722532;}}
}
B72252a:L72252a:{c.instructions+=2;NFSU2_TR(0x72252a);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x144ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B722530:{NFSU2_TR(0x722530);
{goto L722534;}
}
B722532:L722532:{c.instructions+=1;NFSU2_TR(0x722532);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+4),(U+0),4);
}
B722534:L722534:{c.instructions+=15;NFSU2_TR(0x722534);
__builtin_memmove((R+24),(R+4),4);
}
B722536:{NFSU2_TR(0x722536);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x25ull))));
__builtin_memmove((R+8),(U+0),4);
}
B722539:{NFSU2_TR(0x722539);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72253a:{NFSU2_TR(0x72253a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B72253c:{NFSU2_TR(0x72253c);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((R+8),(U+0),4);
}
B72253f:{NFSU2_TR(0x72253f);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B722540:{NFSU2_TR(0x722540);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xa8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B722546:{NFSU2_TR(0x722546);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B722547:{NFSU2_TR(0x722547);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B72254a:{NFSU2_TR(0x72254a);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x3cull))));
__builtin_memmove((R+4),(U+0),4);
}
B72254d:{NFSU2_TR(0x72254d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72254e:{NFSU2_TR(0x72254e);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
}
B722551:{NFSU2_TR(0x722551);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B722552:{NFSU2_TR(0x722552);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B722554:{NFSU2_TR(0x722554);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x722559ull));
TAIL_STATIC(0x727a46u,727);
}
B722559:L722559:{c.instructions+=6;NFSU2_TR(0x722559);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B72255c:{NFSU2_TR(0x72255c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B72255f:{NFSU2_TR(0x72255f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B722562:{NFSU2_TR(0x722562);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B722566:{NFSU2_TR(0x722566);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xf0ull))));
__builtin_memmove((R+28),(U+0),4);
}
B72256c:{NFSU2_TR(0x72256c);
{goto L7225b9;}
}
B72256e:L72256e:{c.instructions+=14;NFSU2_TR(0x72256e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
w4(U+4,u32(0x3ull));
s4(u32(r4(U+0)),r4(U+4));
}
B722575:{NFSU2_TR(0x722575);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B722577:{NFSU2_TR(0x722577);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72257a:{NFSU2_TR(0x72257a);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B72257d:{NFSU2_TR(0x72257d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B722580:{NFSU2_TR(0x722580);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B722583:{NFSU2_TR(0x722583);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B722586:{NFSU2_TR(0x722586);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B722588:{NFSU2_TR(0x722588);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+28)),r4(U+0));
}
B72258a:{NFSU2_TR(0x72258a);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72258d:{NFSU2_TR(0x72258d);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x4ull))));
}
B722590:{NFSU2_TR(0x722590);
u8 U[5];
__builtin_memmove((U+3),gp(0x8b460e),1);
w1(R+512,u8((r1(U+3))<(r1(R+0))));
w1(R+523,sborrow<u8>(r1(U+3),r1(R+0)));
w1(U+4,u8(u32(r1(U+3))-u32(r1(R+0))));
w1(R+519,u8(s8(r1(U+4))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+4))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+4))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B722596:{NFSU2_TR(0x722596);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B722599:{NFSU2_TR(0x722599);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L7225b9;}}
}
B72259b:L72259b:{c.instructions+=4;NFSU2_TR(0x72259b);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((R+0),(U+0),4);
}
B72259e:{NFSU2_TR(0x72259e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72259f:{NFSU2_TR(0x72259f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7225a2:{NFSU2_TR(0x7225a2);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x8b4644ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7225a9ull));
{u32 t_=u32(r4(U+12));TAIL_DYNAMIC(t_);}
}
B7225a9:L7225a9:{c.instructions+=5;NFSU2_TR(0x7225a9);
w4(R+0,u32(s32(s8(m1(0x8b460e)))));
}
B7225b0:{NFSU2_TR(0x7225b0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B7225b3:{NFSU2_TR(0x7225b3);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
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
B7225b6:{NFSU2_TR(0x7225b6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B7225b7:{NFSU2_TR(0x7225b7);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x72259bu);}goto L72259b;}}
}
B7225b9:L7225b9:{c.instructions+=2;NFSU2_TR(0x7225b9);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B7225bc:{NFSU2_TR(0x7225bc);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x72256eu);}goto L72256e;}}
}
B7225be:L7225be:{c.instructions+=3;NFSU2_TR(0x7225be);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B7225c1:{NFSU2_TR(0x7225c1);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+4));
}
B7225c3:{NFSU2_TR(0x7225c3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7225c8ull));
TAIL_STATIC(0x770e3fu,770);
}
B7225c8:L7225c8:{c.instructions+=3;NFSU2_TR(0x7225c8);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x3cull))));
__builtin_memmove((R+28),(U+0),4);
}
B7225cb:{NFSU2_TR(0x7225cb);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7225cc:{NFSU2_TR(0x7225cc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7225d1ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7223c2u);}goto L7223c2;}
}
B7225d1:L7225d1:{c.instructions+=5;NFSU2_TR(0x7225d1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7225d4:{NFSU2_TR(0x7225d4);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7225d7:{NFSU2_TR(0x7225d7);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B7225da:{NFSU2_TR(0x7225da);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(R+0))-u32(r4(U+4))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B7225dc:{NFSU2_TR(0x7225dc);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L7225f8;}}
}
B7225de:L7225de:{c.instructions+=5;NFSU2_TR(0x7225de);
u8 U[4];
w4(U+0,u32(0x1aull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7225e0:{NFSU2_TR(0x7225e0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B7225e1:{NFSU2_TR(0x7225e1);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xa8ull))));
__builtin_memmove((R+28),(U+0),4);
}
B7225e7:{NFSU2_TR(0x7225e7);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x40ull))));
__builtin_memmove((R+24),(U+0),4);
}
B7225ea:{NFSU2_TR(0x7225ea);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B7225ec:L7225ec:{c.instructions+=1;NFSU2_TR(0x7225ec);
u8 U[59];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L7225ee;}}
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
__builtin_memmove((U+36),gp(u32(r4(U+20))),4);
__builtin_memmove((U+47),(U+36),4);
__builtin_memmove((U+16),gp(u32(r4(U+0))),4);
__builtin_memmove((U+51),(U+16),4);
w1(R+512,u8((r4(U+51))<(r4(U+47))));
w1(R+523,sborrow<u32>(r4(U+51),r4(U+47)));
w4(U+55,u32(u32(r4(U+51))-u32(r4(U+47))));
w1(R+519,u8(s32(r4(U+55))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+55))==(u32(0x0ull))));
w4(U+41,u32(u32(r4(U+55))&u32(u32(0xffull))));
w1(U+45,u8(__builtin_popcountll(u64(r4(U+41)))));
w1(U+46,u8(u32(r1(U+45))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+46))==(u8(0x0ull))));
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7225ecu);}goto L7225ec;}}
}
B7225ee:L7225ee:{c.instructions+=1;NFSU2_TR(0x7225ee);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L7225f8;}}
}
B7225f0:L7225f0:{c.instructions+=2;NFSU2_TR(0x7225f0);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xc0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B7225f6:{NFSU2_TR(0x7225f6);
if(r1(R+518)){{goto L722620;}}
}
B7225f8:L7225f8:{c.instructions+=2;NFSU2_TR(0x7225f8);
u8 U[10];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((U+6),(U+4),2);
w2(U+8,u16(u32(r2(U+6))-u32(u16(0x0ull))));
w1(R+518,u8((r2(U+8))==(u16(0x0ull))));
}
B7225fd:{NFSU2_TR(0x7225fd);
if(r1(R+518)){{goto L722605;}}
}
B7225ff:L7225ff:{c.instructions+=2;NFSU2_TR(0x7225ff);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B722603:{NFSU2_TR(0x722603);
{goto L722631;}
}
B722605:L722605:{c.instructions+=5;NFSU2_TR(0x722605);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B722608:{NFSU2_TR(0x722608);
u8 U[4];
w4(U+0,u32(0x1aull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72260a:{NFSU2_TR(0x72260a);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x40ull))));
__builtin_memmove((R+28),(U+0),4);
}
B72260d:{NFSU2_TR(0x72260d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B72260e:{NFSU2_TR(0x72260e);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xa8ull))));
__builtin_memmove((R+24),(U+0),4);
}
B722614:L722614:{c.instructions+=1;NFSU2_TR(0x722614);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L722616;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x722614u);}goto L722614;}
}
B722616:L722616:{c.instructions+=2;NFSU2_TR(0x722616);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xc0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B72261d:{NFSU2_TR(0x72261d);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B722620:L722620:{c.instructions+=2;NFSU2_TR(0x722620);
u8 U[7];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x1ull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B722624:{NFSU2_TR(0x722624);
if(r1(R+518)){{goto L722631;}}
}
B722626:L722626:{c.instructions+=2;NFSU2_TR(0x722626);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B722627:{NFSU2_TR(0x722627);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x72262cull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7221a7u);}goto L7221a7;}
}
B72262c:L72262c:{c.instructions+=2;NFSU2_TR(0x72262c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B72262d:{NFSU2_TR(0x72262d);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B722631:L722631:{c.instructions+=6;NFSU2_TR(0x722631);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B722632:{NFSU2_TR(0x722632);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B722633:{NFSU2_TR(0x722633);
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
B722635:{NFSU2_TR(0x722635);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B722636:{NFSU2_TR(0x722636);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B722637:{NFSU2_TR(0x722637);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B722638:L722638:{c.instructions+=8;NFSU2_TR(0x722638);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B722639:{NFSU2_TR(0x722639);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72263a:{NFSU2_TR(0x72263a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72263b:{NFSU2_TR(0x72263b);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B72263f:{NFSU2_TR(0x72263f);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x15cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B722645:{NFSU2_TR(0x722645);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B722647:{NFSU2_TR(0x722647);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B722649:{NFSU2_TR(0x722649);
if(r1(R+518)){{goto L72269e;}}
}
B72264b:L72264b:{c.instructions+=2;NFSU2_TR(0x72264b);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B72264e:{NFSU2_TR(0x72264e);
if(r1(R+518)){{goto L72269e;}}
}
B722650:L722650:{c.instructions+=2;NFSU2_TR(0x722650);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(U+8),r4(R+12)));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B722653:{NFSU2_TR(0x722653);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L7226a4;}}
}
B722655:L722655:{c.instructions+=1;NFSU2_TR(0x722655);
if(r1(R+518)){{goto L72269e;}}
}
B722657:L722657:{c.instructions+=2;NFSU2_TR(0x722657);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+4));
}
B722659:{NFSU2_TR(0x722659);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x72265eull));
TAIL_STATIC(0x770e48u,770);
}
B72265e:L72265e:{c.instructions+=4;NFSU2_TR(0x72265e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B72265f:{NFSU2_TR(0x72265f);
w4(R+4,u32(0x3d0900ull));
}
B722664:{NFSU2_TR(0x722664);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B722666:{NFSU2_TR(0x722666);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L72266a;}}
}
B722668:L722668:{c.instructions+=1;NFSU2_TR(0x722668);
__builtin_memmove((R+0),(R+4),4);
}
B72266a:L72266a:{c.instructions+=5;NFSU2_TR(0x72266a);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x3e8ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B722670:{NFSU2_TR(0x722670);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B722672:{NFSU2_TR(0x722672);
u8 U[64];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+8,u64(r4(U+4)));
w8(U+16,u64(r4(R+8)));
w8(U+24,shl<u64>(r8(U+16),u64(u32(0x20ull))));
w8(U+32,u64(r4(R+0)));
w8(U+40,u64(u64(r8(U+24))|u64(r8(U+32))));
{u64 d_=u64(r8(U+8));if(__builtin_expect(!d_,0))NFSU2_FAULT("integer division by zero",0x722672);w8(U+48,u64(u64(r8(U+40))/d_));}
w4(R+0,u32(r8(U+48)));
{u64 d_=u64(r8(U+8));if(__builtin_expect(!d_,0))NFSU2_FAULT("integer division by zero",0x722672);w8(U+56,u64(u64(r8(U+40))%d_));}
w4(R+8,u32(r8(U+56)));
}
B722675:{NFSU2_TR(0x722675);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B722678:{NFSU2_TR(0x722678);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L72269b;}}
}
B72267a:L72267a:{c.instructions+=2;NFSU2_TR(0x72267a);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+4));
}
B72267c:{NFSU2_TR(0x72267c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x722681ull));
TAIL_STATIC(0x770e51u,770);
}
B722681:L722681:{c.instructions+=3;NFSU2_TR(0x722681);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B722684:{NFSU2_TR(0x722684);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B722685:{NFSU2_TR(0x722685);
if(r1(R+518)){{goto L72269b;}}
}
B722687:L722687:{c.instructions+=2;NFSU2_TR(0x722687);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x158ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(U+8),r4(R+12)));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B72268d:{NFSU2_TR(0x72268d);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L7226a4;}}
}
B72268f:L72268f:{c.instructions+=2;NFSU2_TR(0x72268f);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+4));
}
B722691:{NFSU2_TR(0x722691);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x722696ull));
TAIL_STATIC(0x770e51u,770);
}
B722696:L722696:{c.instructions+=3;NFSU2_TR(0x722696);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B722698:{NFSU2_TR(0x722698);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B722699:{NFSU2_TR(0x722699);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L7226a4;}}
}
B72269b:L72269b:{c.instructions+=1;NFSU2_TR(0x72269b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72269e:L72269e:{c.instructions+=1;NFSU2_TR(0x72269e);
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
B7226a0:L7226a0:{c.instructions+=4;NFSU2_TR(0x7226a0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B7226a1:{NFSU2_TR(0x7226a1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B7226a2:{NFSU2_TR(0x7226a2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B7226a3:{NFSU2_TR(0x7226a3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7226a4:L7226a4:{c.instructions+=3;NFSU2_TR(0x7226a4);
w1(R+512,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B7226a6:{NFSU2_TR(0x7226a6);
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
B7226a7:{NFSU2_TR(0x7226a7);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7226a0u);}goto L7226a0;}
}
B7226a9:L7226a9:{c.instructions+=5;NFSU2_TR(0x7226a9);
w4(R+4,u32(m1(0x8b44de)));
}
B7226b0:{NFSU2_TR(0x7226b0);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B7226b2:{NFSU2_TR(0x7226b2);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B7226b4:{NFSU2_TR(0x7226b4);
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
B7226b6:{NFSU2_TR(0x7226b6);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L7226c8;}}
}
B7226b8:L7226b8:{c.instructions+=2;NFSU2_TR(0x7226b8);
u8 U[20];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x8b4068ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(U+16,u32(u32(r4(U+12))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+16))==(u32(0x0ull))));
}
B7226c0:{NFSU2_TR(0x7226c0);
if(r1(R+518)){{goto L7226c3;}}
}
B7226c2:L7226c2:{c.instructions+=1;NFSU2_TR(0x7226c2);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B7226c3:L7226c3:{c.instructions+=3;NFSU2_TR(0x7226c3);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B7226c4:{NFSU2_TR(0x7226c4);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
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
B7226c6:{NFSU2_TR(0x7226c6);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7226b8u);}goto L7226b8;}}
}
B7226c8:L7226c8:{c.instructions+=1;NFSU2_TR(0x7226c8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7226c9:L7226c9:{c.instructions+=4;NFSU2_TR(0x7226c9);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7226ca:{NFSU2_TR(0x7226ca);
__builtin_memmove((R+20),(R+16),4);
}
B7226cc:{NFSU2_TR(0x7226cc);
u8 U[5];
__builtin_memmove((U+3),gp(0x8b4608),1);
w1(R+512,u8((r1(U+3))<(u8(0x0ull))));
w1(R+523,sborrow<u8>(r1(U+3),u8(0x0ull)));
w1(U+4,u8(u32(r1(U+3))-u32(u8(0x0ull))));
w1(R+519,u8(s8(r1(U+4))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+4))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+4))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B7226d3:{NFSU2_TR(0x7226d3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L7226da;}}
}
B7226d5:L7226d5:{c.instructions+=4;NFSU2_TR(0x7226d5);
u8 U[4];
w4(U+0,u32(0xfffffff6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7226d7:{NFSU2_TR(0x7226d7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B7226d8:{NFSU2_TR(0x7226d8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B7226d9:{NFSU2_TR(0x7226d9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7226da:L7226da:{c.instructions+=4;NFSU2_TR(0x7226da);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7226db:{NFSU2_TR(0x7226db);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7226dc:{NFSU2_TR(0x7226dc);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B7226df:{NFSU2_TR(0x7226df);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7226e4ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x722424u);}goto L722424;}
}
B7226e4:L7226e4:{c.instructions+=5;NFSU2_TR(0x7226e4);
__builtin_memmove((R+24),(R+0),4);
}
B7226e6:{NFSU2_TR(0x7226e6);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B7226e8:{NFSU2_TR(0x7226e8);
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
B7226ea:{NFSU2_TR(0x7226ea);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B7226eb:{NFSU2_TR(0x7226eb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L7226f1;}}
}
B7226ed:L7226ed:{c.instructions+=2;NFSU2_TR(0x7226ed);
u8 U[4];
w4(U+0,u32(0xfffffff8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7226ef:{NFSU2_TR(0x7226ef);
{goto L7226fb;}
}
B7226f1:L7226f1:{c.instructions+=2;NFSU2_TR(0x7226f1);
u8 U[22];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x158ull))));
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
B7226f7:{NFSU2_TR(0x7226f7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L722701;}}
}
B7226f9:L7226f9:{c.instructions+=1;NFSU2_TR(0x7226f9);
u8 U[4];
w4(U+0,u32(0xfffffff3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7226fb:L7226fb:{c.instructions+=2;NFSU2_TR(0x7226fb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B7226fc:{NFSU2_TR(0x7226fc);
{goto L72279f;}
}
B722701:L722701:{c.instructions+=3;NFSU2_TR(0x722701);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B722704:{NFSU2_TR(0x722704);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B722705:{NFSU2_TR(0x722705);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L722720;}}
}
B722707:L722707:{c.instructions+=5;NFSU2_TR(0x722707);
u8 U[4];
w4(U+0,u32(0x6c454353ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72270c:{NFSU2_TR(0x72270c);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B72270f:{NFSU2_TR(0x72270f);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B722712:{NFSU2_TR(0x722712);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+4));
}
B722714:{NFSU2_TR(0x722714);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x722719ull));
TAIL_STATIC(0x770e12u,770);
}
B722719:L722719:{c.instructions+=3;NFSU2_TR(0x722719);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B72271c:{NFSU2_TR(0x72271c);
__builtin_memmove((R+12),(R+0),4);
}
B72271e:{NFSU2_TR(0x72271e);
{goto L72273b;}
}
B722720:L722720:{c.instructions+=2;NFSU2_TR(0x722720);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B722724:{NFSU2_TR(0x722724);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L722738;}}
}
B722726:L722726:{c.instructions+=5;NFSU2_TR(0x722726);
u8 U[4];
w4(U+0,u32(0x6c454353ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72272b:{NFSU2_TR(0x72272b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72272c:{NFSU2_TR(0x72272c);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B72272f:{NFSU2_TR(0x72272f);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+4));
}
B722731:{NFSU2_TR(0x722731);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x722736ull));
TAIL_STATIC(0x770e1bu,770);
}
B722736:L722736:{c.instructions+=1;NFSU2_TR(0x722736);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x722719u);}goto L722719;}
}
B722738:L722738:{c.instructions+=1;NFSU2_TR(0x722738);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B72273b:L72273b:{c.instructions+=2;NFSU2_TR(0x72273b);
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
B72273d:{NFSU2_TR(0x72273d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L722744;}}
}
B72273f:L72273f:{c.instructions+=2;NFSU2_TR(0x72273f);
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
B722742:{NFSU2_TR(0x722742);
{goto L72279e;}
}
B722744:L722744:{c.instructions+=1;NFSU2_TR(0x722744);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x722749ull));
TAIL_STATIC(0x721f99u,721);
}
B722749:L722749:{c.instructions+=3;NFSU2_TR(0x722749);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x150ull))));
__builtin_memmove((R+0),(U+0),4);
}
B72274f:{NFSU2_TR(0x72274f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B722750:{NFSU2_TR(0x722750);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x722755ull));
TAIL_STATIC(0x7279b7u,727);
}
B722755:L722755:{c.instructions+=4;NFSU2_TR(0x722755);
__builtin_memmove((R+28),(R+0),4);
}
B722757:{NFSU2_TR(0x722757);
u8 U[4];
w4(U+0,u32(0x28ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B722759:{NFSU2_TR(0x722759);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72275a:{NFSU2_TR(0x72275a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x72275full));
TAIL_STATIC(0x727030u,727);
}
B72275f:L72275f:{c.instructions+=4;NFSU2_TR(0x72275f);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x144ull))));
__builtin_memmove((R+0),(U+0),4);
}
B722765:{NFSU2_TR(0x722765);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B722766:{NFSU2_TR(0x722766);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B722767:{NFSU2_TR(0x722767);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x72276cull));
TAIL_STATIC(0x727992u,727);
}
B72276c:L72276c:{c.instructions+=6;NFSU2_TR(0x72276c);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((R+0),(U+0),4);
}
B72276f:{NFSU2_TR(0x72276f);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B722772:{NFSU2_TR(0x722772);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
w4(U+0,u32(u32(r4(U+0))+u32(u32(0x100ull))));
s4(u32(r4(R+0)),r4(U+0));
}
B722778:{NFSU2_TR(0x722778);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B72277b:{NFSU2_TR(0x72277b);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w1(R+523,sborrow<u32>(r4(U+4),u32(0x0ull)));
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x0ull))));
w1(R+519,u8(s32(r4(U+8))<s32(u32(0x0ull))));
}
B72277e:{NFSU2_TR(0x72277e);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L722786;}}
}
B722780:L722780:{c.instructions+=1;NFSU2_TR(0x722780);
u8 U[4];
w4(U+0,u32(0x0ull));
s4(u32(r4(R+0)),r4(U+0));
}
B722786:L722786:{c.instructions+=7;NFSU2_TR(0x722786);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B722788:{NFSU2_TR(0x722788);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))|u32(r4(U+4))));
}
B72278b:{NFSU2_TR(0x72278b);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72278e:{NFSU2_TR(0x72278e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B722791:{NFSU2_TR(0x722791);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B722794:{NFSU2_TR(0x722794);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B722797:{NFSU2_TR(0x722797);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x72279cull));
TAIL_STATIC(0x721fa7u,721);
}
B72279c:L72279c:{c.instructions+=1;NFSU2_TR(0x72279c);
__builtin_memmove((R+0),(R+28),4);
}
B72279e:L72279e:{c.instructions+=1;NFSU2_TR(0x72279e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B72279f:L72279f:{c.instructions+=4;NFSU2_TR(0x72279f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B7227a0:{NFSU2_TR(0x7227a0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B7227a1:{NFSU2_TR(0x7227a1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B7227a2:{NFSU2_TR(0x7227a2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7227a3:L7227a3:{c.instructions+=2;NFSU2_TR(0x7227a3);
u8 U[5];
__builtin_memmove((U+3),gp(0x8b4608),1);
w1(R+512,u8((r1(U+3))<(u8(0x0ull))));
w1(R+523,sborrow<u8>(r1(U+3),u8(0x0ull)));
w1(U+4,u8(u32(r1(U+3))-u32(u8(0x0ull))));
w1(R+519,u8(s8(r1(U+4))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+4))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+4))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B7227aa:{NFSU2_TR(0x7227aa);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L7227b0;}}
}
B7227ac:L7227ac:{c.instructions+=3;NFSU2_TR(0x7227ac);
u8 U[4];
w4(U+0,u32(0xfffffff6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7227ae:{NFSU2_TR(0x7227ae);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B7227af:{NFSU2_TR(0x7227af);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7227b0:L7227b0:{c.instructions+=6;NFSU2_TR(0x7227b0);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7227b2:{NFSU2_TR(0x7227b2);
u8 U[12];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B7227b6:{NFSU2_TR(0x7227b6);
u8 U[12];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B7227ba:{NFSU2_TR(0x7227ba);
u8 U[12];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B7227be:{NFSU2_TR(0x7227be);
u8 U[12];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B7227c2:{NFSU2_TR(0x7227c2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7227c7ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7226c9u);}goto L7226c9;}
}
B7227c7:L7227c7:{c.instructions+=2;NFSU2_TR(0x7227c7);
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
B7227ca:{NFSU2_TR(0x7227ca);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7227cb:L7227cb:{c.instructions+=4;NFSU2_TR(0x7227cb);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7227cc:{NFSU2_TR(0x7227cc);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B7227ce:{NFSU2_TR(0x7227ce);
u8 U[5];
__builtin_memmove((U+3),gp(0x8b4608),1);
w1(R+512,u8((r1(U+3))<(r1(R+12))));
w1(R+523,sborrow<u8>(r1(U+3),r1(R+12)));
w1(U+4,u8(u32(r1(U+3))-u32(r1(R+12))));
w1(R+519,u8(s8(r1(U+4))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+4))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+4))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B7227d4:{NFSU2_TR(0x7227d4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L7227db;}}
}
B7227d6:L7227d6:{c.instructions+=4;NFSU2_TR(0x7227d6);
u8 U[4];
w4(U+0,u32(0xfffffff6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7227d8:{NFSU2_TR(0x7227d8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B7227d9:{NFSU2_TR(0x7227d9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B7227da:{NFSU2_TR(0x7227da);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7227db:L7227db:{c.instructions+=2;NFSU2_TR(0x7227db);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7227dc:{NFSU2_TR(0x7227dc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7227e1ull));
TAIL_STATIC(0x721f99u,721);
}
B7227e1:L7227e1:{c.instructions+=2;NFSU2_TR(0x7227e1);
u8 U[12];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B7227e5:{NFSU2_TR(0x7227e5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7227eaull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x722424u);}goto L722424;}
}
B7227ea:L7227ea:{c.instructions+=4;NFSU2_TR(0x7227ea);
__builtin_memmove((R+24),(R+0),4);
}
B7227ec:{NFSU2_TR(0x7227ec);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B7227ee:{NFSU2_TR(0x7227ee);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B7227ef:{NFSU2_TR(0x7227ef);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L7227f9;}}
}
B7227f1:L7227f1:{c.instructions+=3;NFSU2_TR(0x7227f1);
u8 U[4];
w4(U+0,u32(0xfffffff8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7227f3:{NFSU2_TR(0x7227f3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B7227f4:{NFSU2_TR(0x7227f4);
{goto L7228a5;}
}
B7227f9:L7227f9:{c.instructions+=2;NFSU2_TR(0x7227f9);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(U+8),r4(R+12)));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B7227fc:{NFSU2_TR(0x7227fc);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L722807;}}
}
B7227fe:L7227fe:{c.instructions+=2;NFSU2_TR(0x7227fe);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B722801:{NFSU2_TR(0x722801);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x722806ull));
TAIL_STATIC(0x72387bu,723);
}
B722806:L722806:{c.instructions+=1;NFSU2_TR(0x722806);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B722807:L722807:{c.instructions+=3;NFSU2_TR(0x722807);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B72280e:{NFSU2_TR(0x72280e);
u8 U[7];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x11ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(r1(R+12))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B722811:{NFSU2_TR(0x722811);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L72281b;}}
}
B722813:L722813:{c.instructions+=2;NFSU2_TR(0x722813);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+4));
}
B722815:{NFSU2_TR(0x722815);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x72281aull));
TAIL_STATIC(0x770e2du,770);
}
B72281a:L72281a:{c.instructions+=1;NFSU2_TR(0x72281a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B72281b:L72281b:{c.instructions+=4;NFSU2_TR(0x72281b);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B722821:{NFSU2_TR(0x722821);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(r4(R+12))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B722823:{NFSU2_TR(0x722823);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B722824:{NFSU2_TR(0x722824);
if(r1(R+518)){{goto L722845;}}
}
B722826:L722826:{c.instructions+=4;NFSU2_TR(0x722826);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B722827:{NFSU2_TR(0x722827);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B722829:{NFSU2_TR(0x722829);
u8 U[7];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3eull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(R+512,u8((r1(U+5))<(r1(R+12))));
w1(U+6,u8(u32(r1(U+5))-u32(r1(R+12))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B72282c:{NFSU2_TR(0x72282c);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L722844;}}
}
B72282e:L72282e:{c.instructions+=1;NFSU2_TR(0x72282e);
__builtin_memmove((R+28),(R+0),4);
}
B722830:L722830:{c.instructions+=2;NFSU2_TR(0x722830);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+4));
}
B722832:{NFSU2_TR(0x722832);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x722837ull));
TAIL_STATIC(0x724894u,724);
}
B722837:L722837:{c.instructions+=6;NFSU2_TR(0x722837);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3eull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B72283b:{NFSU2_TR(0x72283b);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x1ull))));
}
B72283c:{NFSU2_TR(0x72283c);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x4ull))));
}
B72283f:{NFSU2_TR(0x72283f);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+20),r4(U+0)));
w4(U+4,u32(u32(r4(R+20))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B722841:{NFSU2_TR(0x722841);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B722842:{NFSU2_TR(0x722842);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x722830u);}goto L722830;}}
}
B722844:L722844:{c.instructions+=1;NFSU2_TR(0x722844);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B722845:L722845:{c.instructions+=1;NFSU2_TR(0x722845);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x144ull))));
__builtin_memmove((R+28),(U+0),4);
}
B72284b:L72284b:{c.instructions+=2;NFSU2_TR(0x72284b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72284c:{NFSU2_TR(0x72284c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x722851ull));
TAIL_STATIC(0x7279b7u,727);
}
B722851:L722851:{c.instructions+=3;NFSU2_TR(0x722851);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B722853:{NFSU2_TR(0x722853);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B722854:{NFSU2_TR(0x722854);
if(r1(R+518)){{goto L722867;}}
}
B722856:L722856:{c.instructions+=4;NFSU2_TR(0x722856);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B722857:{NFSU2_TR(0x722857);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x150ull))));
__builtin_memmove((R+0),(U+0),4);
}
B72285d:{NFSU2_TR(0x72285d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72285e:{NFSU2_TR(0x72285e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x722863ull));
TAIL_STATIC(0x72796eu,727);
}
B722863:L722863:{c.instructions+=3;NFSU2_TR(0x722863);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B722864:{NFSU2_TR(0x722864);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B722865:{NFSU2_TR(0x722865);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x72284bu);}goto L72284b;}
}
B722867:L722867:{c.instructions+=6;NFSU2_TR(0x722867);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((R+0),(U+0),4);
}
B72286a:{NFSU2_TR(0x72286a);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72286c:{NFSU2_TR(0x72286c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72286d:{NFSU2_TR(0x72286d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x15cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B722873:{NFSU2_TR(0x722873);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B722876:{NFSU2_TR(0x722876);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x72287bull));
TAIL_STATIC(0x727030u,727);
}
B72287b:L72287b:{c.instructions+=4;NFSU2_TR(0x72287b);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3cull))));
__builtin_memmove((R+0),(U+0),4);
}
B72287e:{NFSU2_TR(0x72287e);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B722880:{NFSU2_TR(0x722880);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B722881:{NFSU2_TR(0x722881);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x722886ull));
TAIL_STATIC(0x727030u,727);
}
B722886:L722886:{c.instructions+=4;NFSU2_TR(0x722886);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((R+0),(U+0),4);
}
B722889:{NFSU2_TR(0x722889);
u8 U[4];
w4(U+0,u32(0x68ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72288b:{NFSU2_TR(0x72288b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72288c:{NFSU2_TR(0x72288c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x722891ull));
TAIL_STATIC(0x727030u,727);
}
B722891:L722891:{c.instructions+=4;NFSU2_TR(0x722891);
u8 U[4];
w4(U+0,u32(0x68ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B722893:{NFSU2_TR(0x722893);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0xa8ull))));
}
B722899:{NFSU2_TR(0x722899);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72289a:{NFSU2_TR(0x72289a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x72289full));
TAIL_STATIC(0x727030u,727);
}
B72289f:L72289f:{c.instructions+=3;NFSU2_TR(0x72289f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x20ull))));
}
B7228a2:{NFSU2_TR(0x7228a2);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B7228a4:{NFSU2_TR(0x7228a4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B7228a5:L7228a5:{c.instructions+=1;NFSU2_TR(0x7228a5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7228aaull));
TAIL_STATIC(0x721fa7u,721);
}
B7228aa:L7228aa:{c.instructions+=4;NFSU2_TR(0x7228aa);
__builtin_memmove((R+0),(R+24),4);
}
B7228ac:{NFSU2_TR(0x7228ac);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B7228ad:{NFSU2_TR(0x7228ad);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B7228ae:{NFSU2_TR(0x7228ae);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7228af:L7228af:{c.instructions+=13;NFSU2_TR(0x7228af);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7228b0:{NFSU2_TR(0x7228b0);
__builtin_memmove((R+20),(R+16),4);
}
B7228b2:{NFSU2_TR(0x7228b2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x30ull))));
}
B7228b5:{NFSU2_TR(0x7228b5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7228b8:{NFSU2_TR(0x7228b8);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7228bb:{NFSU2_TR(0x7228bb);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7228bc:{NFSU2_TR(0x7228bc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B7228bf:{NFSU2_TR(0x7228bf);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7228c0:{NFSU2_TR(0x7228c0);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x15cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B7228c6:{NFSU2_TR(0x7228c6);
u8 U[7];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x25ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x0ull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B7228ca:{NFSU2_TR(0x7228ca);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7228cb:{NFSU2_TR(0x7228cb);
w4(R+28,u32(0x7fffffffull));
}
B7228d0:{NFSU2_TR(0x7228d0);
if(r1(R+518)){{goto L7228ed;}}
}
B7228d2:L7228d2:{c.instructions+=9;NFSU2_TR(0x7228d2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7228d5:{NFSU2_TR(0x7228d5);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xeull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+8),(U+4),2);
}
B7228d9:{NFSU2_TR(0x7228d9);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xeull))));
__builtin_memmove((U+4),(R+1),1);
s1(u32(r4(U+0)),r1(U+4));
}
B7228dc:{NFSU2_TR(0x7228dc);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B7228df:{NFSU2_TR(0x7228df);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7228e2:{NFSU2_TR(0x7228e2);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+9),1);
s1(u32(r4(U+0)),r1(U+4));
}
B7228e5:{NFSU2_TR(0x7228e5);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xdull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B7228e8:{NFSU2_TR(0x7228e8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))^u32(r4(U+4))));
}
B7228eb:{NFSU2_TR(0x7228eb);
{goto L7228f0;}
}
B7228ed:L7228ed:{c.instructions+=1;NFSU2_TR(0x7228ed);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))^u32(r4(U+4))));
}
B7228f0:L7228f0:{c.instructions+=9;NFSU2_TR(0x7228f0);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x3aull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+8,u32(r1(U+4)));
}
B7228f4:{NFSU2_TR(0x7228f4);
w4(R+0,u32(u32(r4(R+0))&u32(r4(R+28))));
}
B7228f6:{NFSU2_TR(0x7228f6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))^u32(r4(R+0))));
s4(u32(r4(U+0)),r4(U+4));
}
B7228f9:{NFSU2_TR(0x7228f9);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((R+0),(U+0),4);
}
B7228fc:{NFSU2_TR(0x7228fc);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+12),(U+4),4);
}
B7228ff:{NFSU2_TR(0x7228ff);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B722902:{NFSU2_TR(0x722902);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B722904:{NFSU2_TR(0x722904);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B722906:{NFSU2_TR(0x722906);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L722956;}}
}
B722908:L722908:{c.instructions+=4;NFSU2_TR(0x722908);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((R+8),(U+0),4);
}
B72290b:{NFSU2_TR(0x72290b);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+8))));
}
B72290d:{NFSU2_TR(0x72290d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B722910:{NFSU2_TR(0x722910);
{goto L722915;}
}
B722912:L722912:{c.instructions+=1;NFSU2_TR(0x722912);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B722915:L722915:{c.instructions+=4;NFSU2_TR(0x722915);
u8 U[7];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x25ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x0ull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B722919:{NFSU2_TR(0x722919);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B72291c:{NFSU2_TR(0x72291c);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffffdcull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B722920:{NFSU2_TR(0x722920);
if(r1(R+518)){{goto L722943;}}
}
B722922:L722922:{c.instructions+=11;NFSU2_TR(0x722922);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B722925:{NFSU2_TR(0x722925);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+8),(U+4),2);
}
B722929:{NFSU2_TR(0x722929);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+9),1);
s1(u32(r4(U+0)),r1(U+4));
}
B72292c:{NFSU2_TR(0x72292c);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xdull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B72292f:{NFSU2_TR(0x72292f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B722932:{NFSU2_TR(0x722932);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xeull))));
__builtin_memmove((U+4),(R+1),1);
s1(u32(r4(U+0)),r1(U+4));
}
B722935:{NFSU2_TR(0x722935);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B722938:{NFSU2_TR(0x722938);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B72293b:{NFSU2_TR(0x72293b);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+0))));
}
B72293d:{NFSU2_TR(0x72293d);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffffdcull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+8),4);
s4(u32(r4(U+8)),r4(U+12));
}
B722941:{NFSU2_TR(0x722941);
{goto L72294a;}
}
B722943:L722943:{c.instructions+=2;NFSU2_TR(0x722943);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))+u32(r4(U+4))));
}
B722946:{NFSU2_TR(0x722946);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffffdcull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+0),4);
s4(u32(r4(U+8)),r4(U+12));
}
B72294a:L72294a:{c.instructions+=5;NFSU2_TR(0x72294a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B72294d:{NFSU2_TR(0x72294d);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3aull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B722951:{NFSU2_TR(0x722951);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B722952:{NFSU2_TR(0x722952);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+12),r4(U+0)));
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B722954:{NFSU2_TR(0x722954);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x722912u);}goto L722912;}}
}
B722956:L722956:{c.instructions+=2;NFSU2_TR(0x722956);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+8,u32(u32(r4(U+4))&u32(r4(R+28))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B722959:{NFSU2_TR(0x722959);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L722968;}}
}
B72295b:L72295b:{c.instructions+=4;NFSU2_TR(0x72295b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B72295e:{NFSU2_TR(0x72295e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72295f:{NFSU2_TR(0x72295f);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+4));
}
B722961:{NFSU2_TR(0x722961);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x722966ull));
TAIL_STATIC(0x770e3fu,770);
}
B722966:L722966:{c.instructions+=1;NFSU2_TR(0x722966);
{goto L7229a4;}
}
B722968:L722968:{c.instructions+=20;NFSU2_TR(0x722968);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B72296b:{NFSU2_TR(0x72296b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72296e:{NFSU2_TR(0x72296e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B722971:{NFSU2_TR(0x722971);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B722973:{NFSU2_TR(0x722973);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B722976:{NFSU2_TR(0x722976);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B722979:{NFSU2_TR(0x722979);
w4(R+0,u32(u32(r4(R+0))&u32(r4(R+28))));
}
B72297b:{NFSU2_TR(0x72297b);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+4))));
}
B72297d:{NFSU2_TR(0x72297d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B722980:{NFSU2_TR(0x722980);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B722984:{NFSU2_TR(0x722984);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B722987:{NFSU2_TR(0x722987);
u8 U[4];
w4(U+0,u32(u32(u32(0x1full))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B72298a:{NFSU2_TR(0x72298a);
w4(R+4,u32(u32(r4(R+4))&u32(r4(R+28))));
}
B72298c:{NFSU2_TR(0x72298c);
w4(R+0,u32(u32(r4(R+0))|u32(r4(R+4))));
}
B72298e:{NFSU2_TR(0x72298e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B722991:{NFSU2_TR(0x722991);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B722994:{NFSU2_TR(0x722994);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B722995:{NFSU2_TR(0x722995);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B722998:{NFSU2_TR(0x722998);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B72299b:{NFSU2_TR(0x72299b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7229a0ull));
TAIL_STATIC(0x723515u,723);
}
B7229a0:L7229a0:{c.instructions+=1;NFSU2_TR(0x7229a0);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B7229a4:L7229a4:{c.instructions+=7;NFSU2_TR(0x7229a4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B7229a5:{NFSU2_TR(0x7229a5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B7229a6:{NFSU2_TR(0x7229a6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B7229a7:{NFSU2_TR(0x7229a7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B7229a8:{NFSU2_TR(0x7229a8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B7229a9:{NFSU2_TR(0x7229a9);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B7229aa:{NFSU2_TR(0x7229aa);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7229ab:L7229ab:{c.instructions+=8;NFSU2_TR(0x7229ab);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7229af:{NFSU2_TR(0x7229af);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B7229b1:{NFSU2_TR(0x7229b1);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x6c444353ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B7229b7:{NFSU2_TR(0x7229b7);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7229b8:{NFSU2_TR(0x7229b8);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B7229bc:{NFSU2_TR(0x7229bc);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x8b4068ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B7229c3:{NFSU2_TR(0x7229c3);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7229c4:{NFSU2_TR(0x7229c4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L7229ce;}}
}
B7229c6:L7229c6:{c.instructions+=2;NFSU2_TR(0x7229c6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7229c7:{NFSU2_TR(0x7229c7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7229ccull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7228afu);}goto L7228af;}
}
B7229cc:L7229cc:{c.instructions+=1;NFSU2_TR(0x7229cc);
{goto L7229e7;}
}
B7229ce:L7229ce:{c.instructions+=2;NFSU2_TR(0x7229ce);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x6c484353ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B7229d4:{NFSU2_TR(0x7229d4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L7229e0;}}
}
B7229d6:L7229d6:{c.instructions+=2;NFSU2_TR(0x7229d6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7229d7:{NFSU2_TR(0x7229d7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7229dcull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x72250bu);}goto L72250b;}
}
B7229dc:L7229dc:{c.instructions+=2;NFSU2_TR(0x7229dc);
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
B7229de:{NFSU2_TR(0x7229de);
{goto L7229ea;}
}
B7229e0:L7229e0:{c.instructions+=2;NFSU2_TR(0x7229e0);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+4));
}
B7229e2:{NFSU2_TR(0x7229e2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7229e7ull));
TAIL_STATIC(0x770e3fu,770);
}
B7229e7:L7229e7:{c.instructions+=2;NFSU2_TR(0x7229e7);
w1(R+512,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B7229e9:{NFSU2_TR(0x7229e9);
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
B7229ea:L7229ea:{c.instructions+=4;NFSU2_TR(0x7229ea);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B7229eb:{NFSU2_TR(0x7229eb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B7229ec:{NFSU2_TR(0x7229ec);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B7229ed:{NFSU2_TR(0x7229ed);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7229ee:L7229ee:{c.instructions+=2;NFSU2_TR(0x7229ee);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7229ef:{NFSU2_TR(0x7229ef);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7229f4ull));
TAIL_STATIC(0x721f99u,721);
}
B7229f4:L7229f4:{c.instructions+=3;NFSU2_TR(0x7229f4);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B7229f6:{NFSU2_TR(0x7229f6);
u8 U[2];
__builtin_memmove((U+0),gp(0x8b44de),1);
w1(R+512,u8((r1(U+0))<(u8(0x0ull))));
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x0ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B7229fd:{NFSU2_TR(0x7229fd);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L722aba;}}
}
B722a03:L722a03:{c.instructions+=3;NFSU2_TR(0x722a03);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B722a04:{NFSU2_TR(0x722a04);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B722a05:{NFSU2_TR(0x722a05);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B722a06:L722a06:{c.instructions+=3;NFSU2_TR(0x722a06);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x8b4068ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+12),(U+8),4);
}
B722a0d:{NFSU2_TR(0x722a0d);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B722a0f:{NFSU2_TR(0x722a0f);
if(r1(R+518)){{goto L722aa7;}}
}
B722a15:L722a15:{c.instructions+=2;NFSU2_TR(0x722a15);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B722a1c:{NFSU2_TR(0x722a1c);
if(r1(R+518)){{goto L722aa7;}}
}
B722a22:L722a22:{c.instructions+=2;NFSU2_TR(0x722a22);
u8 U[7];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x2ull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B722a26:{NFSU2_TR(0x722a26);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L722a60;}}
}
B722a28:L722a28:{c.instructions+=2;NFSU2_TR(0x722a28);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B722a2b:{NFSU2_TR(0x722a2b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x722a30ull));
TAIL_STATIC(0x723649u,723);
}
B722a30:L722a30:{c.instructions+=3;NFSU2_TR(0x722a30);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B722a32:{NFSU2_TR(0x722a32);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B722a33:{NFSU2_TR(0x722a33);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L722aa7;}}
}
B722a35:L722a35:{c.instructions+=6;NFSU2_TR(0x722a35);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B722a38:{NFSU2_TR(0x722a38);
u8 U[4];
w4(U+0,u32(0x1aull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B722a3a:{NFSU2_TR(0x722a3a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B722a3b:{NFSU2_TR(0x722a3b);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B722a3e:{NFSU2_TR(0x722a3e);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xa8ull))));
__builtin_memmove((R+24),(U+0),4);
}
B722a44:{NFSU2_TR(0x722a44);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x40ull))));
__builtin_memmove((R+28),(U+0),4);
}
B722a47:L722a47:{c.instructions+=1;NFSU2_TR(0x722a47);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L722a49;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x722a47u);}goto L722a47;}
}
B722a49:L722a49:{c.instructions+=3;NFSU2_TR(0x722a49);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xc0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B722a50:{NFSU2_TR(0x722a50);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B722a53:{NFSU2_TR(0x722a53);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x722a58ull));
TAIL_STATIC(0x72387bu,723);
}
B722a58:L722a58:{c.instructions+=2;NFSU2_TR(0x722a58);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B722a59:{NFSU2_TR(0x722a59);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x722a5eull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7221a7u);}goto L7221a7;}
}
B722a5e:L722a5e:{c.instructions+=2;NFSU2_TR(0x722a5e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B722a5f:{NFSU2_TR(0x722a5f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B722a60:L722a60:{c.instructions+=2;NFSU2_TR(0x722a60);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B722a61:{NFSU2_TR(0x722a61);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x722a66ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x722638u);}goto L722638;}
}
B722a66:L722a66:{c.instructions+=3;NFSU2_TR(0x722a66);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B722a68:{NFSU2_TR(0x722a68);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B722a69:{NFSU2_TR(0x722a69);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L722aa7;}}
}
B722a6b:L722a6b:{c.instructions+=2;NFSU2_TR(0x722a6b);
u8 U[7];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x1ull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B722a6f:{NFSU2_TR(0x722a6f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L722a82;}}
}
B722a71:L722a71:{c.instructions+=2;NFSU2_TR(0x722a71);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B722a74:{NFSU2_TR(0x722a74);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x722a79ull));
TAIL_STATIC(0x723608u,723);
}
B722a79:L722a79:{c.instructions+=4;NFSU2_TR(0x722a79);
__builtin_memmove((R+24),(R+0),4);
}
B722a7b:{NFSU2_TR(0x722a7b);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B722a7d:{NFSU2_TR(0x722a7d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B722a7e:{NFSU2_TR(0x722a7e);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L722aa7;}}
}
B722a80:L722a80:{c.instructions+=1;NFSU2_TR(0x722a80);
{goto L722a85;}
}
B722a82:L722a82:{c.instructions+=2;NFSU2_TR(0x722a82);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B722a84:{NFSU2_TR(0x722a84);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B722a85:L722a85:{c.instructions+=1;NFSU2_TR(0x722a85);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B722a87:L722a87:{c.instructions+=3;NFSU2_TR(0x722a87);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+4));
}
B722a89:{NFSU2_TR(0x722a89);
w4(R+24,u32(u32(r4(R+24))-u32(u32(0x1ull))));
}
B722a8a:{NFSU2_TR(0x722a8a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x722a8full));
TAIL_STATIC(0x770e36u,770);
}
B722a8f:L722a8f:{c.instructions+=3;NFSU2_TR(0x722a8f);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B722a91:{NFSU2_TR(0x722a91);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B722a92:{NFSU2_TR(0x722a92);
if(r1(R+518)){{goto L722a9f;}}
}
B722a94:L722a94:{c.instructions+=3;NFSU2_TR(0x722a94);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B722a95:{NFSU2_TR(0x722a95);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B722a96:{NFSU2_TR(0x722a96);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x722a9bull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7229abu);}goto L7229ab;}
}
B722a9b:L722a9b:{c.instructions+=3;NFSU2_TR(0x722a9b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B722a9c:{NFSU2_TR(0x722a9c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B722a9d:{NFSU2_TR(0x722a9d);
__builtin_memmove((R+28),(R+0),4);
}
B722a9f:L722a9f:{c.instructions+=2;NFSU2_TR(0x722a9f);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B722aa1:{NFSU2_TR(0x722aa1);
if(r1(R+518)){{goto L722aa7;}}
}
B722aa3:L722aa3:{c.instructions+=2;NFSU2_TR(0x722aa3);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B722aa5:{NFSU2_TR(0x722aa5);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x722a87u);}goto L722a87;}}
}
B722aa7:L722aa7:{c.instructions+=4;NFSU2_TR(0x722aa7);
w4(R+0,u32(m1(0x8b44de)));
}
B722aae:{NFSU2_TR(0x722aae);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x1ull))));
}
B722aaf:{NFSU2_TR(0x722aaf);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+20),r4(U+0)));
w4(U+4,u32(u32(r4(R+20))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B722ab1:{NFSU2_TR(0x722ab1);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x722a06u);}goto L722a06;}}
}
B722ab7:L722ab7:{c.instructions+=3;NFSU2_TR(0x722ab7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B722ab8:{NFSU2_TR(0x722ab8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B722ab9:{NFSU2_TR(0x722ab9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B722aba:L722aba:{c.instructions+=2;NFSU2_TR(0x722aba);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B722abb:{NFSU2_TR(0x722abb);
TAIL_STATIC(0x721fa7u,721);
}
B722ac0:L722ac0:{c.instructions+=2;NFSU2_TR(0x722ac0);
u8 U[5];
__builtin_memmove((U+3),gp(0x8b4608),1);
w1(R+512,u8((r1(U+3))<(u8(0x0ull))));
w1(R+523,sborrow<u8>(r1(U+3),u8(0x0ull)));
w1(U+4,u8(u32(r1(U+3))-u32(u8(0x0ull))));
w1(R+519,u8(s8(r1(U+4))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+4))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+4))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B722ac7:{NFSU2_TR(0x722ac7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L722acd;}}
}
B722ac9:L722ac9:{c.instructions+=3;NFSU2_TR(0x722ac9);
u8 U[4];
w4(U+0,u32(0xfffffff6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B722acb:{NFSU2_TR(0x722acb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B722acc:{NFSU2_TR(0x722acc);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B722acd:L722acd:{c.instructions+=3;NFSU2_TR(0x722acd);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B722ace:{NFSU2_TR(0x722ace);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B722acf:{NFSU2_TR(0x722acf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x722ad4ull));
TAIL_STATIC(0x721f99u,721);
}
B722ad4:L722ad4:{c.instructions+=3;NFSU2_TR(0x722ad4);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B722ad8:{NFSU2_TR(0x722ad8);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B722ad9:{NFSU2_TR(0x722ad9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x722adeull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x722424u);}goto L722424;}
}
B722ade:L722ade:{c.instructions+=4;NFSU2_TR(0x722ade);
__builtin_memmove((R+24),(R+0),4);
}
B722ae0:{NFSU2_TR(0x722ae0);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B722ae2:{NFSU2_TR(0x722ae2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B722ae3:{NFSU2_TR(0x722ae3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L722aef;}}
}
B722ae5:L722ae5:{c.instructions+=1;NFSU2_TR(0x722ae5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x722aeaull));
TAIL_STATIC(0x721fa7u,721);
}
B722aea:L722aea:{c.instructions+=3;NFSU2_TR(0x722aea);
u8 U[4];
w4(U+0,u32(0xfffffff8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B722aec:{NFSU2_TR(0x722aec);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B722aed:{NFSU2_TR(0x722aed);
{goto L722b44;}
}
B722aef:L722aef:{c.instructions+=2;NFSU2_TR(0x722aef);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B722af0:{NFSU2_TR(0x722af0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x722af5ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7227cbu);}goto L7227cb;}
}
B722af5:L722af5:{c.instructions+=2;NFSU2_TR(0x722af5);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B722af6:{NFSU2_TR(0x722af6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x722afbull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x722172u);}goto L722172;}
}
B722afb:L722afb:{c.instructions+=3;NFSU2_TR(0x722afb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B722afc:{NFSU2_TR(0x722afc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B722afd:{NFSU2_TR(0x722afd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x722b02ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7226a9u);}goto L7226a9;}
}
B722b02:L722b02:{c.instructions+=2;NFSU2_TR(0x722b02);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B722b05:{NFSU2_TR(0x722b05);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L722b19;}}
}
B722b07:L722b07:{c.instructions+=2;NFSU2_TR(0x722b07);
u8 U[4];
w4(U+0,u32(0x7229eeull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B722b0c:{NFSU2_TR(0x722b0c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x722b11ull));
TAIL_STATIC(0x7214d2u,721);
}
B722b11:L722b11:{c.instructions+=2;NFSU2_TR(0x722b11);
s4(0x8b4668,u32(u32(m4(0x8b4668))&u32(u32(0x0ull))));
}
B722b18:{NFSU2_TR(0x722b18);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B722b19:L722b19:{c.instructions+=3;NFSU2_TR(0x722b19);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B722b1a:{NFSU2_TR(0x722b1a);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B722b1d:{NFSU2_TR(0x722b1d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x722b22ull));
TAIL_STATIC(0x72366au,723);
}
B722b22:L722b22:{c.instructions+=5;NFSU2_TR(0x722b22);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+12),(U+0),4);
}
B722b24:{NFSU2_TR(0x722b24);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x11ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+24,u32(s32(s8(r1(U+4)))));
}
B722b28:{NFSU2_TR(0x722b28);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x8b4068ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
w4(U+8,u32(u32(r4(U+8))&u32(u32(0x0ull))));
s4(u32(r4(U+4)),r4(U+8));
}
B722b30:{NFSU2_TR(0x722b30);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B722b31:{NFSU2_TR(0x722b31);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x722b36ull));
TAIL_STATIC(0x721fa7u,721);
}
B722b36:L722b36:{c.instructions+=2;NFSU2_TR(0x722b36);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B722b38:{NFSU2_TR(0x722b38);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L722b41;}}
}
B722b3a:L722b3a:{c.instructions+=2;NFSU2_TR(0x722b3a);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B722b3b:{NFSU2_TR(0x722b3b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x722b40ull));
TAIL_STATIC(0x770deeu,770);
}
B722b40:L722b40:{c.instructions+=1;NFSU2_TR(0x722b40);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B722b41:L722b41:{c.instructions+=2;NFSU2_TR(0x722b41);
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
B722b43:{NFSU2_TR(0x722b43);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B722b44:L722b44:{c.instructions+=3;NFSU2_TR(0x722b44);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B722b45:{NFSU2_TR(0x722b45);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B722b46:{NFSU2_TR(0x722b46);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B722b47:L722b47:{c.instructions+=4;NFSU2_TR(0x722b47);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B722b48:{NFSU2_TR(0x722b48);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B722b4a:{NFSU2_TR(0x722b4a);
u8 U[2];
__builtin_memmove((U+0),gp(0x8b44de),1);
w1(R+512,u8((r1(U+0))<(u8(0x0ull))));
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x0ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B722b51:{NFSU2_TR(0x722b51);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L722b66;}}
}
B722b53:L722b53:{c.instructions+=2;NFSU2_TR(0x722b53);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B722b54:{NFSU2_TR(0x722b54);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x722b59ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x722ac0u);}goto L722ac0;}
}
B722b59:L722b59:{c.instructions+=5;NFSU2_TR(0x722b59);
w4(R+0,u32(m1(0x8b44de)));
}
B722b60:{NFSU2_TR(0x722b60);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B722b61:{NFSU2_TR(0x722b61);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B722b63:{NFSU2_TR(0x722b63);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B722b64:{NFSU2_TR(0x722b64);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x722b53u);}goto L722b53;}}
}
B722b66:L722b66:{c.instructions+=3;NFSU2_TR(0x722b66);
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
B722b68:{NFSU2_TR(0x722b68);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B722b69:{NFSU2_TR(0x722b69);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B722b6a:L722b6a:{c.instructions+=5;NFSU2_TR(0x722b6a);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B722b6b:{NFSU2_TR(0x722b6b);
__builtin_memmove((R+20),(R+16),4);
}
B722b6d:{NFSU2_TR(0x722b6d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x14ull))));
}
B722b70:{NFSU2_TR(0x722b70);
u8 U[5];
__builtin_memmove((U+3),gp(0x8b4608),1);
w1(R+512,u8((r1(U+3))<(u8(0x0ull))));
w1(R+523,sborrow<u8>(r1(U+3),u8(0x0ull)));
w1(U+4,u8(u32(r1(U+3))-u32(u8(0x0ull))));
w1(R+519,u8(s8(r1(U+4))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+4))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+4))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B722b77:{NFSU2_TR(0x722b77);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L722b7e;}}
}
B722b79:L722b79:{c.instructions+=4;NFSU2_TR(0x722b79);
u8 U[4];
w4(U+0,u32(0xfffffff6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B722b7b:{NFSU2_TR(0x722b7b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B722b7c:{NFSU2_TR(0x722b7c);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B722b7d:{NFSU2_TR(0x722b7d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B722b7e:L722b7e:{c.instructions+=4;NFSU2_TR(0x722b7e);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B722b7f:{NFSU2_TR(0x722b7f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B722b80:{NFSU2_TR(0x722b80);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B722b81:{NFSU2_TR(0x722b81);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x722b86ull));
TAIL_STATIC(0x721f99u,721);
}
B722b86:L722b86:{c.instructions+=4;NFSU2_TR(0x722b86);
w4(R+4,u32(m1(0x8b44de)));
}
B722b8d:{NFSU2_TR(0x722b8d);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B722b8f:{NFSU2_TR(0x722b8f);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B722b91:{NFSU2_TR(0x722b91);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L722ba2;}}
}
B722b93:L722b93:{c.instructions+=2;NFSU2_TR(0x722b93);
u8 U[20];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x8b4068ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(U+16,u32(u32(r4(U+12))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+16))==(u32(0x0ull))));
}
B722b9b:{NFSU2_TR(0x722b9b);
if(r1(R+518)){{goto L722bb1;}}
}
B722b9d:L722b9d:{c.instructions+=3;NFSU2_TR(0x722b9d);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B722b9e:{NFSU2_TR(0x722b9e);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B722ba0:{NFSU2_TR(0x722ba0);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x722b93u);}goto L722b93;}}
}
B722ba2:L722ba2:{c.instructions+=2;NFSU2_TR(0x722ba2);
u8 U[4];
w4(U+0,u32(0xfffffff7ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B722ba4:{NFSU2_TR(0x722ba4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B722ba5:L722ba5:{c.instructions+=1;NFSU2_TR(0x722ba5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x722baaull));
TAIL_STATIC(0x721fa7u,721);
}
B722baa:L722baa:{c.instructions+=1;NFSU2_TR(0x722baa);
__builtin_memmove((R+0),(R+24),4);
}
B722bac:L722bac:{c.instructions+=5;NFSU2_TR(0x722bac);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B722bad:{NFSU2_TR(0x722bad);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B722bae:{NFSU2_TR(0x722bae);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B722baf:{NFSU2_TR(0x722baf);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B722bb0:{NFSU2_TR(0x722bb0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B722bb1:L722bb1:{c.instructions+=12;NFSU2_TR(0x722bb1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B722bb4:{NFSU2_TR(0x722bb4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B722bb7:{NFSU2_TR(0x722bb7);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x238ull))));
__builtin_memmove((R+0),(U+0),4);
}
B722bbd:{NFSU2_TR(0x722bbd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B722bc0:{NFSU2_TR(0x722bc0);
__builtin_memmove((R+0),gp(0x8180b8),4);
}
B722bc5:{NFSU2_TR(0x722bc5);
__builtin_memmove((R+12),(R+24),4);
}
B722bc7:{NFSU2_TR(0x722bc7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x238ull))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B722bce:{NFSU2_TR(0x722bce);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(r4(R+0))));
s4(u32(r4(U+0)),r4(U+4));
}
B722bd1:{NFSU2_TR(0x722bd1);
u8 U[4];
w4(U+0,u32(0x238ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B722bd6:{NFSU2_TR(0x722bd6);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B722bd7:{NFSU2_TR(0x722bd7);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+0))));
}
B722bd9:{NFSU2_TR(0x722bd9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x722bdeull));
TAIL_STATIC(0x727030u,727);
}
B722bde:L722bde:{c.instructions+=8;NFSU2_TR(0x722bde);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B722be1:{NFSU2_TR(0x722be1);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B722be4:{NFSU2_TR(0x722be4);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B722be7:{NFSU2_TR(0x722be7);
u8 U[4];
w4(U+0,u32(u32(u32(0x3ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B722bea:{NFSU2_TR(0x722bea);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(r4(R+0))));
s4(u32(r4(U+0)),r4(U+4));
}
B722bed:{NFSU2_TR(0x722bed);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B722bf0:{NFSU2_TR(0x722bf0);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+0))));
}
B722bf2:{NFSU2_TR(0x722bf2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x722bf7ull));
TAIL_STATIC(0x723124u,723);
}
B722bf7:L722bf7:{c.instructions+=6;NFSU2_TR(0x722bf7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(r4(R+0))));
s4(u32(r4(U+0)),r4(U+4));
}
B722bfa:{NFSU2_TR(0x722bfa);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B722bfd:{NFSU2_TR(0x722bfd);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+0))));
}
B722bff:{NFSU2_TR(0x722bff);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x144ull))));
__builtin_memmove((R+0),(U+0),4);
}
B722c05:{NFSU2_TR(0x722c05);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B722c06:{NFSU2_TR(0x722c06);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x722c0bull));
TAIL_STATIC(0x72795fu,727);
}
B722c0b:L722c0b:{c.instructions+=3;NFSU2_TR(0x722c0b);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x150ull))));
__builtin_memmove((R+0),(U+0),4);
}
B722c11:{NFSU2_TR(0x722c11);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B722c12:{NFSU2_TR(0x722c12);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x722c17ull));
TAIL_STATIC(0x72795fu,727);
}
B722c17:L722c17:{c.instructions+=3;NFSU2_TR(0x722c17);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B722c1a:{NFSU2_TR(0x722c1a);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B722c1c:{NFSU2_TR(0x722c1c);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L722c41;}}
}
B722c1e:L722c1e:{c.instructions+=3;NFSU2_TR(0x722c1e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B722c21:{NFSU2_TR(0x722c21);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B722c24:{NFSU2_TR(0x722c24);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B722c27:L722c27:{c.instructions+=4;NFSU2_TR(0x722c27);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B722c2a:{NFSU2_TR(0x722c2a);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x150ull))));
__builtin_memmove((R+0),(U+0),4);
}
B722c30:{NFSU2_TR(0x722c30);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B722c31:{NFSU2_TR(0x722c31);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x722c36ull));
TAIL_STATIC(0x72796eu,727);
}
B722c36:L722c36:{c.instructions+=5;NFSU2_TR(0x722c36);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x28ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B722c3a:{NFSU2_TR(0x722c3a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B722c3d:{NFSU2_TR(0x722c3d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B722c3e:{NFSU2_TR(0x722c3e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B722c3f:{NFSU2_TR(0x722c3f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x722c27u);}goto L722c27;}}
}
B722c41:L722c41:{c.instructions+=2;NFSU2_TR(0x722c41);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B722c44:{NFSU2_TR(0x722c44);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x722c49ull));
TAIL_STATIC(0x723124u,723);
}
B722c49:L722c49:{c.instructions+=6;NFSU2_TR(0x722c49);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B722c4a:{NFSU2_TR(0x722c4a);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B722c4d:{NFSU2_TR(0x722c4d);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B722c4e:{NFSU2_TR(0x722c4e);
u8 U[4];
w4(U+0,u32(0x7224acull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B722c53:{NFSU2_TR(0x722c53);
u8 U[4];
w4(U+0,u32(0x72248cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B722c58:{NFSU2_TR(0x722c58);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x722c5dull));
TAIL_STATIC(0x723138u,723);
}
B722c5d:L722c5d:{c.instructions+=4;NFSU2_TR(0x722c5d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B722c60:{NFSU2_TR(0x722c60);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B722c63:{NFSU2_TR(0x722c63);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(U+8),u32(0x0ull)));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B722c67:{NFSU2_TR(0x722c67);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L722c76;}}
}
B722c69:L722c69:{c.instructions+=1;NFSU2_TR(0x722c69);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x722c6eull));
TAIL_STATIC(0x721fa7u,721);
}
B722c6e:L722c6e:{c.instructions+=2;NFSU2_TR(0x722c6e);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B722c71:{NFSU2_TR(0x722c71);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x722bacu);}goto L722bac;}
}
B722c76:L722c76:{c.instructions+=2;NFSU2_TR(0x722c76);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B722c7a:{NFSU2_TR(0x722c7a);
if(r1(R+518)){{goto L722c85;}}
}
B722c7c:L722c7c:{c.instructions+=3;NFSU2_TR(0x722c7c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B722c7f:{NFSU2_TR(0x722c7f);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x11ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B722c83:{NFSU2_TR(0x722c83);
{goto L722caf;}
}
B722c85:L722c85:{c.instructions+=7;NFSU2_TR(0x722c85);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B722c88:{NFSU2_TR(0x722c88);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x2ull))));
}
B722c8b:{NFSU2_TR(0x722c8b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B722c8c:{NFSU2_TR(0x722c8c);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B722c8e:{NFSU2_TR(0x722c8e);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B722c90:{NFSU2_TR(0x722c90);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B722c91:{NFSU2_TR(0x722c91);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x722c96ull));
TAIL_STATIC(0x770de5u,770);
}
B722c96:L722c96:{c.instructions+=3;NFSU2_TR(0x722c96);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B722c99:{NFSU2_TR(0x722c99);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B722c9b:{NFSU2_TR(0x722c9b);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L722cab;}}
}
B722c9d:L722c9d:{c.instructions+=2;NFSU2_TR(0x722c9d);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B722ca0:{NFSU2_TR(0x722ca0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x722ca5ull));
TAIL_STATIC(0x72366au,723);
}
B722ca5:L722ca5:{c.instructions+=2;NFSU2_TR(0x722ca5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B722ca6:{NFSU2_TR(0x722ca6);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x722ba2u);}goto L722ba2;}
}
B722cab:L722cab:{c.instructions+=1;NFSU2_TR(0x722cab);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x11ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B722caf:L722caf:{c.instructions+=10;NFSU2_TR(0x722caf);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B722cb2:{NFSU2_TR(0x722cb2);
{u32 ea_=u32(u32(7907660u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B722cb8:{NFSU2_TR(0x722cb8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+12)),r4(U+0));
}
B722cba:{NFSU2_TR(0x722cba);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B722cbd:{NFSU2_TR(0x722cbd);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B722cc4:{NFSU2_TR(0x722cc4);
u8 U[4];
w4(U+0,u32(0x6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B722cc6:{NFSU2_TR(0x722cc6);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B722ccd:{NFSU2_TR(0x722ccd);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x110ull))));
__builtin_memmove((R+28),(U+0),4);
}
B722cd3:{NFSU2_TR(0x722cd3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B722cd4:{NFSU2_TR(0x722cd4);
__builtin_memmove((R+24),(R+8),4);
}
B722cd6:L722cd6:{c.instructions+=1;NFSU2_TR(0x722cd6);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L722cd8;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x722cd6u);}goto L722cd6;}
}
B722cd8:L722cd8:{c.instructions+=5;NFSU2_TR(0x722cd8);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x128ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B722cde:{NFSU2_TR(0x722cde);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B722ce0:{NFSU2_TR(0x722ce0);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B722ce2:{NFSU2_TR(0x722ce2);
u8 U[8];
__builtin_memmove((U+0),gp(0x8180b8),4);
w1(R+523,sborrow<u32>(r4(U+0),r4(R+28)));
w4(U+4,u32(u32(r4(U+0))-u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B722ce8:{NFSU2_TR(0x722ce8);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L722d0b;}}
}
B722cea:L722cea:{c.instructions+=9;NFSU2_TR(0x722cea);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x115ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(s32(s8(r1(U+4)))));
}
B722cf1:{NFSU2_TR(0x722cf1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B722cf4:{NFSU2_TR(0x722cf4);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x128ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B722cfa:{NFSU2_TR(0x722cfa);
{u32 ea_=u32(r4(R+20)+u32(4294967280u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B722cfd:{NFSU2_TR(0x722cfd);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B722cff:{NFSU2_TR(0x722cff);
{u32 ea_=u32((r4(R+0)*4u)+r4(R+4));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B722d02:{NFSU2_TR(0x722d02);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B722d03:{NFSU2_TR(0x722d03);
u8 U[8];
__builtin_memmove((U+0),gp(0x8180b8),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B722d09:{NFSU2_TR(0x722d09);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x722ceau);}goto L722cea;}}
}
B722d0b:L722d0b:{c.instructions+=5;NFSU2_TR(0x722d0b);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+8))),1);
w4(R+0,u32(s32(s8(r1(U+0)))));
}
B722d0e:{NFSU2_TR(0x722d0e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B722d11:{NFSU2_TR(0x722d11);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B722d13:{NFSU2_TR(0x722d13);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x165ull))));
__builtin_memmove((R+0),(U+0),4);
}
B722d19:{NFSU2_TR(0x722d19);
{u32 ea_=u32(r4(R+20)+u32(4294967280u));__asm__ volatile(".byte 0xda,0x08"::"a"(ea_):"memory");}
}
B722d1c:L722d1c:{c.instructions+=8;NFSU2_TR(0x722d1c);
u8 U[1];
__builtin_memmove((U+0),(R+4),1);
s1(u32(r4(R+0)),r1(U+0));
}
B722d1e:{NFSU2_TR(0x722d1e);
{u32 ea_=u32(r4(R+0)+u32(3u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B722d21:{NFSU2_TR(0x722d21);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xffffffffull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B722d25:{NFSU2_TR(0x722d25);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffffbull))));
w4(U+4,u32(0xc9742400ull));
s4(u32(r4(U+0)),r4(U+4));
}
B722d2c:{NFSU2_TR(0x722d2c);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B722d2d:{NFSU2_TR(0x722d2d);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
}
B722d30:{NFSU2_TR(0x722d30);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x6ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x6ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B722d33:{NFSU2_TR(0x722d33);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x722d1cu);}goto L722d1c;}}
}
B722d35:L722d35:{c.instructions+=4;NFSU2_TR(0x722d35);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B722d37:{NFSU2_TR(0x722d37);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x12ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B722d3b:{NFSU2_TR(0x722d3b);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x13ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B722d3f:{NFSU2_TR(0x722d3f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x722d44ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7226a9u);}goto L7226a9;}
}
B722d44:L722d44:{c.instructions+=2;NFSU2_TR(0x722d44);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B722d46:{NFSU2_TR(0x722d46);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L722d5d;}}
}
B722d48:L722d48:{c.instructions+=2;NFSU2_TR(0x722d48);
u8 U[4];
w4(U+0,u32(0x7229eeull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B722d4d:{NFSU2_TR(0x722d4d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x722d52ull));
TAIL_STATIC(0x7214b9u,721);
}
B722d52:L722d52:{c.instructions+=2;NFSU2_TR(0x722d52);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B722d53:{NFSU2_TR(0x722d53);
s4(0x8b4668,u32(0x722b47ull));
}
B722d5d:L722d5d:{c.instructions+=4;NFSU2_TR(0x722d5d);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B722d60:{NFSU2_TR(0x722d60);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B722d63:{NFSU2_TR(0x722d63);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x8b4068ull))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+12),4);
s4(u32(r4(U+4)),r4(U+8));
}
B722d6a:{NFSU2_TR(0x722d6a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L722d83;}}
}
B722d6c:L722d6c:{c.instructions+=2;NFSU2_TR(0x722d6c);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+4));
}
B722d6e:{NFSU2_TR(0x722d6e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x722d73ull));
TAIL_STATIC(0x770e63u,770);
}
B722d73:L722d73:{c.instructions+=7;NFSU2_TR(0x722d73);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B722d75:{NFSU2_TR(0x722d75);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B722d76:{NFSU2_TR(0x722d76);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B722d77:{NFSU2_TR(0x722d77);
u8 U[56];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x722d77);w8(U+40,u64(x_/y_));}
w4(R+0,u32(r8(U+40)));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x722d77);w8(U+48,u64(x_%y_));}
w4(R+8,u32(r8(U+48)));
}
B722d79:{NFSU2_TR(0x722d79);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B722d7a:{NFSU2_TR(0x722d7a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B722d7b:{NFSU2_TR(0x722d7b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x722d80ull));
TAIL_STATIC(0x721db7u,721);
}
B722d80:L722d80:{c.instructions+=1;NFSU2_TR(0x722d80);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B722d83:L722d83:{c.instructions+=3;NFSU2_TR(0x722d83);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B722d84:{NFSU2_TR(0x722d84);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xc0ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B722d8a:{NFSU2_TR(0x722d8a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x722d8full));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7227cbu);}goto L7227cb;}
}
B722d8f:L722d8f:{c.instructions+=2;NFSU2_TR(0x722d8f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B722d90:{NFSU2_TR(0x722d90);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x722ba5u);}goto L722ba5;}
}
B722d95:L722d95:{c.instructions+=10;NFSU2_TR(0x722d95);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B722d96:{NFSU2_TR(0x722d96);
__builtin_memmove((R+20),(R+16),4);
}
B722d98:{NFSU2_TR(0x722d98);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B722d9a:{NFSU2_TR(0x722d9a);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B722d9c:{NFSU2_TR(0x722d9c);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B722d9f:{NFSU2_TR(0x722d9f);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B722da2:{NFSU2_TR(0x722da2);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B722da5:{NFSU2_TR(0x722da5);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B722da8:{NFSU2_TR(0x722da8);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B722dab:{NFSU2_TR(0x722dab);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x722db0ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x722b6au);}goto L722b6a;}
}
B722db0:L722db0:{c.instructions+=3;NFSU2_TR(0x722db0);
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
B722db3:{NFSU2_TR(0x722db3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B722db4:{NFSU2_TR(0x722db4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B722db5:L722db5:{c.instructions+=14;NFSU2_TR(0x722db5);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B722db6:{NFSU2_TR(0x722db6);
__builtin_memmove((R+20),(R+16),4);
}
B722db8:{NFSU2_TR(0x722db8);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B722db9:{NFSU2_TR(0x722db9);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B722dba:{NFSU2_TR(0x722dba);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B722dbb:{NFSU2_TR(0x722dbb);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B722dbd:{NFSU2_TR(0x722dbd);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B722dbe:{NFSU2_TR(0x722dbe);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B722dc1:{NFSU2_TR(0x722dc1);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
s4(u32(r4(R+24)),r4(U+0));
}
B722dc3:{NFSU2_TR(0x722dc3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B722dc6:{NFSU2_TR(0x722dc6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B722dc9:{NFSU2_TR(0x722dc9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B722dcc:{NFSU2_TR(0x722dcc);
u8 U[5];
__builtin_memmove((U+3),gp(0x8b4608),1);
w1(R+512,u8((r1(U+3))<(r1(R+12))));
w1(R+523,sborrow<u8>(r1(U+3),r1(R+12)));
w1(U+4,u8(u32(r1(U+3))-u32(r1(R+12))));
w1(R+519,u8(s8(r1(U+4))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+4))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+4))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B722dd2:{NFSU2_TR(0x722dd2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L722dd8;}}
}
B722dd4:L722dd4:{c.instructions+=2;NFSU2_TR(0x722dd4);
u8 U[4];
w4(U+0,u32(0xfffffff6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B722dd6:{NFSU2_TR(0x722dd6);
{goto L722ddf;}
}
B722dd8:L722dd8:{c.instructions+=2;NFSU2_TR(0x722dd8);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(r4(R+12))));
w1(R+523,sborrow<u32>(r4(U+14),r4(R+12)));
w4(U+18,u32(u32(r4(U+14))-u32(r4(R+12))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B722ddb:{NFSU2_TR(0x722ddb);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L722de5;}}
}
B722ddd:L722ddd:{c.instructions+=1;NFSU2_TR(0x722ddd);
u8 U[4];
w4(U+0,u32(0xfffffff8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B722ddf:L722ddf:{c.instructions+=2;NFSU2_TR(0x722ddf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B722de0:{NFSU2_TR(0x722de0);
{goto L722eca;}
}
B722de5:L722de5:{c.instructions+=5;NFSU2_TR(0x722de5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B722de8:{NFSU2_TR(0x722de8);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
}
B722ded:{NFSU2_TR(0x722ded);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B722dee:{NFSU2_TR(0x722dee);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B722def:{NFSU2_TR(0x722def);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x722df4ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x722424u);}goto L722424;}
}
B722df4:L722df4:{c.instructions+=4;NFSU2_TR(0x722df4);
__builtin_memmove((R+28),(R+0),4);
}
B722df6:{NFSU2_TR(0x722df6);
u8 U[14];
__builtin_memmove((U+6),(R+12),4);
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
B722df8:{NFSU2_TR(0x722df8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B722df9:{NFSU2_TR(0x722df9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L722e03;}}
}
B722dfb:L722dfb:{c.instructions+=3;NFSU2_TR(0x722dfb);
u8 U[4];
w4(U+0,u32(0xfffffff8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B722dfd:{NFSU2_TR(0x722dfd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B722dfe:{NFSU2_TR(0x722dfe);
{goto L722ec9;}
}
B722e03:L722e03:{c.instructions+=2;NFSU2_TR(0x722e03);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B722e06:{NFSU2_TR(0x722e06);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x722e0bull));
TAIL_STATIC(0x727a12u,727);
}
B722e0b:L722e0b:{c.instructions+=3;NFSU2_TR(0x722e0b);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B722e0d:{NFSU2_TR(0x722e0d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B722e0e:{NFSU2_TR(0x722e0e);
if(r1(R+518)){{goto L722ec1;}}
}
B722e14:L722e14:{c.instructions+=2;NFSU2_TR(0x722e14);
u8 U[7];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(r1(R+12))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B722e17:{NFSU2_TR(0x722e17);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L722e20;}}
}
B722e19:L722e19:{c.instructions+=2;NFSU2_TR(0x722e19);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
s4(u32(r4(R+24)),r4(U+0));
}
B722e1b:{NFSU2_TR(0x722e1b);
{goto L722ec7;}
}
B722e20:L722e20:{c.instructions+=2;NFSU2_TR(0x722e20);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x144ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B722e26:{NFSU2_TR(0x722e26);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L722e34;}}
}
B722e28:L722e28:{c.instructions+=3;NFSU2_TR(0x722e28);
u8 U[4];
w4(U+0,u32(0x2ull));
s4(u32(r4(R+24)),r4(U+0));
}
B722e2e:{NFSU2_TR(0x722e2e);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(r2(U+4)));
}
B722e32:{NFSU2_TR(0x722e32);
{goto L722e3e;}
}
B722e34:L722e34:{c.instructions+=2;NFSU2_TR(0x722e34);
u8 U[4];
w4(U+0,u32(0x1ull));
s4(u32(r4(R+24)),r4(U+0));
}
B722e3a:{NFSU2_TR(0x722e3a);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(r2(U+4)));
}
B722e3e:L722e3e:{c.instructions+=8;NFSU2_TR(0x722e3e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B722e41:{NFSU2_TR(0x722e41);
{u32 ea_=u32(r4(R+20)+u32(12u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B722e44:{NFSU2_TR(0x722e44);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B722e47:{NFSU2_TR(0x722e47);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B722e49:{NFSU2_TR(0x722e49);
{u32 ea_=u32(u32(7882064u));__asm__ volatile(".byte 0xd8,0x38"::"a"(ea_):"memory");}
}
B722e4f:{NFSU2_TR(0x722e4f);
{u32 ea_=u32(r4(R+20)+u32(12u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B722e52:{NFSU2_TR(0x722e52);
{u32 ea_=u32(r4(R+0)+u32(20u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B722e55:{NFSU2_TR(0x722e55);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L722e5d;}}
}
B722e57:L722e57:{c.instructions+=1;NFSU2_TR(0x722e57);
{u32 ea_=u32(u32(7882060u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B722e5d:L722e5d:{c.instructions+=14;NFSU2_TR(0x722e5d);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B722e5f:{NFSU2_TR(0x722e5f);
{u32 ea_=u32(r4(R+20)+u32(4294967292u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B722e62:{NFSU2_TR(0x722e62);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B722e64:{NFSU2_TR(0x722e64);
{u32 ea_=u32(r4(R+20)+u32(4294967292u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B722e67:{NFSU2_TR(0x722e67);
{u32 ea_=u32(r4(R+20)+u32(4294967288u));__asm__ volatile(".byte 0xdb,0x18"::"a"(ea_):"memory");}
}
B722e6a:{NFSU2_TR(0x722e6a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B722e6d:{NFSU2_TR(0x722e6d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B722e70:{NFSU2_TR(0x722e70);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B722e73:{NFSU2_TR(0x722e73);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B722e76:{NFSU2_TR(0x722e76);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+8))));
}
B722e78:{NFSU2_TR(0x722e78);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B722e7a:{NFSU2_TR(0x722e7a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B722e7d:{NFSU2_TR(0x722e7d);
{u32 ea_=u32(r4(R+20)+u32(4294967288u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B722e80:{NFSU2_TR(0x722e80);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L722e88;}}
}
B722e82:L722e82:{c.instructions+=1;NFSU2_TR(0x722e82);
{u32 ea_=u32(u32(7882060u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B722e88:L722e88:{c.instructions+=11;NFSU2_TR(0x722e88);
{u32 ea_=u32(r4(R+20)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B722e8b:{NFSU2_TR(0x722e8b);
{u32 ea_=u32(r4(R+20)+u32(4294967288u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B722e8e:{NFSU2_TR(0x722e8e);
{u32 ea_=u32(r4(R+20)+u32(4294967288u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B722e91:{NFSU2_TR(0x722e91);
{u32 ea_=u32(r4(R+20)+u32(4294967292u));__asm__ volatile(".byte 0xdb,0x18"::"a"(ea_):"memory");}
}
B722e94:{NFSU2_TR(0x722e94);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B722e97:{NFSU2_TR(0x722e97);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B722e9a:{NFSU2_TR(0x722e9a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B722e9d:{NFSU2_TR(0x722e9d);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B722e9f:{NFSU2_TR(0x722e9f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B722ea2:{NFSU2_TR(0x722ea2);
{u32 ea_=u32(r4(R+20)+u32(4294967288u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B722ea5:{NFSU2_TR(0x722ea5);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L722ead;}}
}
B722ea7:L722ea7:{c.instructions+=1;NFSU2_TR(0x722ea7);
{u32 ea_=u32(u32(7882060u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B722ead:L722ead:{c.instructions+=7;NFSU2_TR(0x722ead);
{u32 ea_=u32(r4(R+20)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B722eb0:{NFSU2_TR(0x722eb0);
{u32 ea_=u32(r4(R+20)+u32(12u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B722eb3:{NFSU2_TR(0x722eb3);
{u32 ea_=u32(r4(R+20)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B722eb6:{NFSU2_TR(0x722eb6);
{u32 ea_=u32(r4(R+20)+u32(4294967288u));__asm__ volatile(".byte 0xdb,0x18"::"a"(ea_):"memory");}
}
B722eb9:{NFSU2_TR(0x722eb9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B722ebc:{NFSU2_TR(0x722ebc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B722ebf:{NFSU2_TR(0x722ebf);
{goto L722ec7;}
}
B722ec1:L722ec1:{c.instructions+=1;NFSU2_TR(0x722ec1);
u8 U[4];
w4(U+0,u32(0x3ull));
s4(u32(r4(R+24)),r4(U+0));
}
B722ec7:L722ec7:{c.instructions+=1;NFSU2_TR(0x722ec7);
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
B722ec9:L722ec9:{c.instructions+=1;NFSU2_TR(0x722ec9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B722eca:L722eca:{c.instructions+=4;NFSU2_TR(0x722eca);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B722ecb:{NFSU2_TR(0x722ecb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B722ecc:{NFSU2_TR(0x722ecc);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B722ecd:{NFSU2_TR(0x722ecd);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B722ece:L722ece:{c.instructions+=9;NFSU2_TR(0x722ece);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B722ecf:{NFSU2_TR(0x722ecf);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B722ed1:{NFSU2_TR(0x722ed1);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B722ed2:{NFSU2_TR(0x722ed2);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B722ed6:{NFSU2_TR(0x722ed6);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B722ed9:{NFSU2_TR(0x722ed9);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B722edc:{NFSU2_TR(0x722edc);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
s4(u32(r4(R+28)),r4(U+0));
}
B722ede:{NFSU2_TR(0x722ede);
u8 U[5];
__builtin_memmove((U+3),gp(0x8b4608),1);
w1(R+512,u8((r1(U+3))<(r1(R+12))));
w1(R+523,sborrow<u8>(r1(U+3),r1(R+12)));
w1(U+4,u8(u32(r1(U+3))-u32(r1(R+12))));
w1(R+519,u8(s8(r1(U+4))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+4))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+4))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B722ee4:{NFSU2_TR(0x722ee4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L722eee;}}
}
B722ee6:L722ee6:{c.instructions+=3;NFSU2_TR(0x722ee6);
u8 U[4];
w4(U+0,u32(0xfffffff6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B722ee8:{NFSU2_TR(0x722ee8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B722ee9:{NFSU2_TR(0x722ee9);
{goto L722f75;}
}
B722eee:L722eee:{c.instructions+=3;NFSU2_TR(0x722eee);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B722eef:{NFSU2_TR(0x722eef);
u8 U[12];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B722ef3:{NFSU2_TR(0x722ef3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x722ef8ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x722424u);}goto L722424;}
}
B722ef8:L722ef8:{c.instructions+=4;NFSU2_TR(0x722ef8);
__builtin_memmove((R+24),(R+0),4);
}
B722efa:{NFSU2_TR(0x722efa);
u8 U[14];
__builtin_memmove((U+6),(R+12),4);
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
B722efc:{NFSU2_TR(0x722efc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B722efd:{NFSU2_TR(0x722efd);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L722f04;}}
}
B722eff:L722eff:{c.instructions+=3;NFSU2_TR(0x722eff);
u8 U[4];
w4(U+0,u32(0xfffffff8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B722f01:{NFSU2_TR(0x722f01);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B722f02:{NFSU2_TR(0x722f02);
{goto L722f74;}
}
B722f04:L722f04:{c.instructions+=4;NFSU2_TR(0x722f04);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B722f0a:{NFSU2_TR(0x722f0a);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B722f0c:{NFSU2_TR(0x722f0c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+28)),r4(U+0));
}
B722f0e:{NFSU2_TR(0x722f0e);
if(r1(R+518)){{goto L722f72;}}
}
B722f10:L722f10:{c.instructions+=5;NFSU2_TR(0x722f10);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x144ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B722f16:{NFSU2_TR(0x722f16);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B722f19:{NFSU2_TR(0x722f19);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B722f1c:{NFSU2_TR(0x722f1c);
u8 U[10];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((U+6),(U+4),2);
w2(U+8,u16(u32(r2(U+6))-u32(r2(R+12))));
w1(R+518,u8((r2(U+8))==(u16(0x0ull))));
}
B722f20:{NFSU2_TR(0x722f20);
if(r1(R+518)){{goto L722f72;}}
}
B722f22:L722f22:{c.instructions+=2;NFSU2_TR(0x722f22);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B722f25:{NFSU2_TR(0x722f25);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x722f2aull));
TAIL_STATIC(0x723649u,723);
}
B722f2a:L722f2a:{c.instructions+=8;NFSU2_TR(0x722f2a);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x3e8ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B722f30:{NFSU2_TR(0x722f30);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B722f31:{NFSU2_TR(0x722f31);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(r2(U+4)));
}
B722f35:{NFSU2_TR(0x722f35);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B722f37:{NFSU2_TR(0x722f37);
u8 U[56];
w8(U+0,u64(r4(R+4)));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{u64 d_=u64(r8(U+0));if(__builtin_expect(!d_,0))NFSU2_FAULT("integer division by zero",0x722f37);w8(U+40,u64(u64(r8(U+32))/d_));}
w4(R+0,u32(r8(U+40)));
{u64 d_=u64(r8(U+0));if(__builtin_expect(!d_,0))NFSU2_FAULT("integer division by zero",0x722f37);w8(U+48,u64(u64(r8(U+32))%d_));}
w4(R+8,u32(r8(U+48)));
}
B722f39:{NFSU2_TR(0x722f39);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B722f3b:{NFSU2_TR(0x722f3b);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B722f3e:{NFSU2_TR(0x722f3e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L722f72;}}
}
B722f40:L722f40:{c.instructions+=2;NFSU2_TR(0x722f40);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B722f43:{NFSU2_TR(0x722f43);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x722f48ull));
TAIL_STATIC(0x727a12u,727);
}
B722f48:L722f48:{c.instructions+=4;NFSU2_TR(0x722f48);
__builtin_memmove((R+12),(R+0),4);
}
B722f4a:{NFSU2_TR(0x722f4a);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B722f4e:{NFSU2_TR(0x722f4e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B722f4f:{NFSU2_TR(0x722f4f);
if(r1(R+518)){{goto L722f72;}}
}
B722f51:L722f51:{c.instructions+=2;NFSU2_TR(0x722f51);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+4));
}
B722f53:{NFSU2_TR(0x722f53);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x722f58ull));
TAIL_STATIC(0x770e48u,770);
}
B722f58:L722f58:{c.instructions+=4;NFSU2_TR(0x722f58);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B722f59:{NFSU2_TR(0x722f59);
w4(R+4,u32(0x3d0900ull));
}
B722f5e:{NFSU2_TR(0x722f5e);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B722f60:{NFSU2_TR(0x722f60);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L722f64;}}
}
B722f62:L722f62:{c.instructions+=1;NFSU2_TR(0x722f62);
__builtin_memmove((R+0),(R+4),4);
}
B722f64:L722f64:{c.instructions+=4;NFSU2_TR(0x722f64);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x3e8ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B722f6a:{NFSU2_TR(0x722f6a);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B722f6c:{NFSU2_TR(0x722f6c);
u8 U[64];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+8,u64(r4(U+4)));
w8(U+16,u64(r4(R+8)));
w8(U+24,shl<u64>(r8(U+16),u64(u32(0x20ull))));
w8(U+32,u64(r4(R+0)));
w8(U+40,u64(u64(r8(U+24))|u64(r8(U+32))));
{u64 d_=u64(r8(U+8));if(__builtin_expect(!d_,0))NFSU2_FAULT("integer division by zero",0x722f6c);w8(U+48,u64(u64(r8(U+40))/d_));}
w4(R+0,u32(r8(U+48)));
{u64 d_=u64(r8(U+8));if(__builtin_expect(!d_,0))NFSU2_FAULT("integer division by zero",0x722f6c);w8(U+56,u64(u64(r8(U+40))%d_));}
w4(R+8,u32(r8(U+56)));
}
B722f6f:{NFSU2_TR(0x722f6f);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B722f72:L722f72:{c.instructions+=1;NFSU2_TR(0x722f72);
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
B722f74:L722f74:{c.instructions+=1;NFSU2_TR(0x722f74);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B722f75:L722f75:{c.instructions+=3;NFSU2_TR(0x722f75);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B722f76:{NFSU2_TR(0x722f76);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B722f77:{NFSU2_TR(0x722f77);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B722f78:L722f78:{c.instructions+=9;NFSU2_TR(0x722f78);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B722f7c:{NFSU2_TR(0x722f7c);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B722f80:{NFSU2_TR(0x722f80);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B722f82:{NFSU2_TR(0x722f82);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B722f84:{NFSU2_TR(0x722f84);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+0))));
}
B722f86:{NFSU2_TR(0x722f86);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B722f87:{NFSU2_TR(0x722f87);
u8 U[12];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B722f8b:{NFSU2_TR(0x722f8b);
u8 U[12];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B722f8f:{NFSU2_TR(0x722f8f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x722f94ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7226c9u);}goto L7226c9;}
}
B722f94:L722f94:{c.instructions+=2;NFSU2_TR(0x722f94);
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
B722f97:{NFSU2_TR(0x722f97);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B722f98:L722f98:{c.instructions+=5;NFSU2_TR(0x722f98);
u8 U[5];
__builtin_memmove((U+3),gp(0x8b4608),1);
w1(R+512,u8((r1(U+3))<(u8(0x0ull))));
w1(R+523,sborrow<u8>(r1(U+3),u8(0x0ull)));
w1(U+4,u8(u32(r1(U+3))-u32(u8(0x0ull))));
w1(R+519,u8(s8(r1(U+4))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+4))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+4))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B722f9f:{NFSU2_TR(0x722f9f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B722fa0:{NFSU2_TR(0x722fa0);
u8 U[4];
w4(U+0,u32(0xfffffff8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B722fa2:{NFSU2_TR(0x722fa2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B722fa3:{NFSU2_TR(0x722fa3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L722faa;}}
}
B722fa5:L722fa5:{c.instructions+=4;NFSU2_TR(0x722fa5);
u8 U[4];
w4(U+0,u32(0xfffffff6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B722fa7:{NFSU2_TR(0x722fa7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B722fa8:{NFSU2_TR(0x722fa8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B722fa9:{NFSU2_TR(0x722fa9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B722faa:L722faa:{c.instructions+=1;NFSU2_TR(0x722faa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x722fafull));
TAIL_STATIC(0x721f99u,721);
}
B722faf:L722faf:{c.instructions+=2;NFSU2_TR(0x722faf);
u8 U[12];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B722fb3:{NFSU2_TR(0x722fb3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x722fb8ull));
TAIL_STATIC(0x727a12u,727);
}
B722fb8:L722fb8:{c.instructions+=3;NFSU2_TR(0x722fb8);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B722fba:{NFSU2_TR(0x722fba);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B722fbb:{NFSU2_TR(0x722fbb);
if(r1(R+518)){{goto L722fc7;}}
}
B722fbd:L722fbd:{c.instructions+=3;NFSU2_TR(0x722fbd);
u8 U[6];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(s32(s16(r2(U+4)))));
}
B722fc2:{NFSU2_TR(0x722fc2);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B722fc5:{NFSU2_TR(0x722fc5);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B722fc7:L722fc7:{c.instructions+=1;NFSU2_TR(0x722fc7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x722fccull));
TAIL_STATIC(0x721fa7u,721);
}
B722fcc:L722fcc:{c.instructions+=3;NFSU2_TR(0x722fcc);
__builtin_memmove((R+0),(R+24),4);
}
B722fce:{NFSU2_TR(0x722fce);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B722fcf:{NFSU2_TR(0x722fcf);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B722fd0:L722fd0:{c.instructions+=4;NFSU2_TR(0x722fd0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B722fd1:{NFSU2_TR(0x722fd1);
__builtin_memmove((R+20),(R+16),4);
}
B722fd3:{NFSU2_TR(0x722fd3);
u8 U[5];
__builtin_memmove((U+3),gp(0x8b4608),1);
w1(R+512,u8((r1(U+3))<(u8(0x0ull))));
w1(R+523,sborrow<u8>(r1(U+3),u8(0x0ull)));
w1(U+4,u8(u32(r1(U+3))-u32(u8(0x0ull))));
w1(R+519,u8(s8(r1(U+4))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+4))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+4))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B722fda:{NFSU2_TR(0x722fda);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L722fe1;}}
}
B722fdc:L722fdc:{c.instructions+=4;NFSU2_TR(0x722fdc);
u8 U[4];
w4(U+0,u32(0xfffffff6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B722fde:{NFSU2_TR(0x722fde);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B722fdf:{NFSU2_TR(0x722fdf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B722fe0:{NFSU2_TR(0x722fe0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B722fe1:L722fe1:{c.instructions+=3;NFSU2_TR(0x722fe1);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B722fe2:{NFSU2_TR(0x722fe2);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B722fe5:{NFSU2_TR(0x722fe5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x722feaull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x722424u);}goto L722424;}
}
B722fea:L722fea:{c.instructions+=4;NFSU2_TR(0x722fea);
__builtin_memmove((R+24),(R+0),4);
}
B722fec:{NFSU2_TR(0x722fec);
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
B722fee:{NFSU2_TR(0x722fee);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B722fef:{NFSU2_TR(0x722fef);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L722ff6;}}
}
B722ff1:L722ff1:{c.instructions+=3;NFSU2_TR(0x722ff1);
u8 U[4];
w4(U+0,u32(0xfffffff8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B722ff3:{NFSU2_TR(0x722ff3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B722ff4:{NFSU2_TR(0x722ff4);
TAIL_STATIC(0x72306du,723);
}
B722ff6:L722ff6:{c.instructions+=3;NFSU2_TR(0x722ff6);
{u32 ea_=u32(r4(R+20)+u32(16u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B722ff9:{NFSU2_TR(0x722ff9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x128ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B722fff:{NFSU2_TR(0x722fff);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
TAIL_STATIC(0x723000u,723);
}
XIT:NFSU2_TR_EXIT(0x722,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
