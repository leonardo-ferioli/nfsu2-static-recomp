#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_402(u8* __restrict R,Cpu& c);
u32 body_403(u8* __restrict R,Cpu& c);
u32 body_43d(u8* __restrict R,Cpu& c);
u32 body_43e(u8* __restrict R,Cpu& c);
u32 body_440(u8* __restrict R,Cpu& c);
u32 body_5b9(u8* __restrict R,Cpu& c);
u32 body_5be(u8* __restrict R,Cpu& c);
u32 body_611(u8* __restrict R,Cpu& c);
u32 body_613(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x612,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x612,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_612(u8* __restrict R,Cpu& c);
u32 page_612(Cpu& c){return body_612(c.regs.data(),c);}
__attribute__((noinline)) u32 body_612(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x612003:goto L612003;
case 0x61200a:c.instructions+=6;goto B61200a;
case 0x61200e:c.instructions+=5;goto B61200e;
case 0x612011:c.instructions+=4;goto B612011;
case 0x612014:c.instructions+=3;goto B612014;
case 0x612016:c.instructions+=2;goto B612016;
case 0x61201a:c.instructions+=1;goto B61201a;
case 0x61201c:goto L61201c;
case 0x612020:c.instructions+=3;goto B612020;
case 0x61202a:c.instructions+=2;goto B61202a;
case 0x61202e:c.instructions+=1;goto B61202e;
case 0x612033:goto L612033;
case 0x612034:c.instructions+=1;goto B612034;
case 0x612039:goto L612039;
case 0x61203b:c.instructions+=4;goto B61203b;
case 0x61203e:c.instructions+=3;goto B61203e;
case 0x612041:c.instructions+=2;goto B612041;
case 0x612042:c.instructions+=1;goto B612042;
case 0x612044:goto L612044;
case 0x612048:c.instructions+=10;goto B612048;
case 0x61204c:c.instructions+=9;goto B61204c;
case 0x61204f:c.instructions+=8;goto B61204f;
case 0x612054:c.instructions+=7;goto B612054;
case 0x612058:c.instructions+=6;goto B612058;
case 0x61205c:c.instructions+=5;goto B61205c;
case 0x612060:c.instructions+=4;goto B612060;
case 0x612062:c.instructions+=3;goto B612062;
case 0x612066:c.instructions+=2;goto B612066;
case 0x61206a:c.instructions+=1;goto B61206a;
case 0x61206c:goto L61206c;
case 0x612070:c.instructions+=5;goto B612070;
case 0x612072:c.instructions+=4;goto B612072;
case 0x612073:c.instructions+=3;goto B612073;
case 0x612076:c.instructions+=2;goto B612076;
case 0x612077:c.instructions+=1;goto B612077;
case 0x612079:goto L612079;
case 0x61207b:goto L61207b;
case 0x61207f:c.instructions+=2;goto B61207f;
case 0x612081:c.instructions+=1;goto B612081;
case 0x612087:goto L612087;
case 0x61208b:c.instructions+=2;goto B61208b;
case 0x61208f:c.instructions+=1;goto B61208f;
case 0x612093:goto L612093;
case 0x612096:c.instructions+=1;goto B612096;
case 0x61209c:goto L61209c;
case 0x61209f:c.instructions+=3;goto B61209f;
case 0x6120a1:c.instructions+=2;goto B6120a1;
case 0x6120a4:c.instructions+=1;goto B6120a4;
case 0x6120a6:goto L6120a6;
case 0x6120ab:c.instructions+=1;goto B6120ab;
case 0x6120b0:goto L6120b0;
case 0x6120b1:c.instructions+=1;goto B6120b1;
case 0x6120b6:goto L6120b6;
case 0x6120b8:c.instructions+=4;goto B6120b8;
case 0x6120bb:c.instructions+=3;goto B6120bb;
case 0x6120be:c.instructions+=2;goto B6120be;
case 0x6120bf:c.instructions+=1;goto B6120bf;
case 0x6120c1:goto L6120c1;
case 0x6120c5:goto L6120c5;
case 0x6120c8:c.instructions+=6;goto B6120c8;
case 0x6120cb:c.instructions+=5;goto B6120cb;
case 0x6120cd:c.instructions+=4;goto B6120cd;
case 0x6120cf:c.instructions+=3;goto B6120cf;
case 0x6120d2:c.instructions+=2;goto B6120d2;
case 0x6120d6:c.instructions+=1;goto B6120d6;
case 0x6120dc:goto L6120dc;
case 0x6120e0:goto L6120e0;
case 0x6120e4:c.instructions+=6;goto B6120e4;
case 0x6120e7:c.instructions+=5;goto B6120e7;
case 0x6120e9:c.instructions+=4;goto B6120e9;
case 0x6120eb:c.instructions+=3;goto B6120eb;
case 0x6120ef:c.instructions+=2;goto B6120ef;
case 0x6120f3:c.instructions+=1;goto B6120f3;
case 0x6120f5:goto L6120f5;
case 0x6120f7:c.instructions+=1;goto B6120f7;
case 0x6120f9:goto L6120f9;
case 0x6120fb:c.instructions+=26;goto B6120fb;
case 0x6120fe:c.instructions+=25;goto B6120fe;
case 0x612101:c.instructions+=24;goto B612101;
case 0x612105:c.instructions+=23;goto B612105;
case 0x612108:c.instructions+=22;goto B612108;
case 0x61210c:c.instructions+=21;goto B61210c;
case 0x61210f:c.instructions+=20;goto B61210f;
case 0x612115:c.instructions+=19;goto B612115;
case 0x612119:c.instructions+=18;goto B612119;
case 0x61211d:c.instructions+=17;goto B61211d;
case 0x612121:c.instructions+=16;goto B612121;
case 0x612125:c.instructions+=15;goto B612125;
case 0x612128:c.instructions+=14;goto B612128;
case 0x61212e:c.instructions+=13;goto B61212e;
case 0x612132:c.instructions+=12;goto B612132;
case 0x612134:c.instructions+=11;goto B612134;
case 0x612136:c.instructions+=10;goto B612136;
case 0x61213a:c.instructions+=9;goto B61213a;
case 0x61213e:c.instructions+=8;goto B61213e;
case 0x612142:c.instructions+=7;goto B612142;
case 0x612143:c.instructions+=6;goto B612143;
case 0x612146:c.instructions+=5;goto B612146;
case 0x612147:c.instructions+=4;goto B612147;
case 0x61214d:c.instructions+=3;goto B61214d;
case 0x612155:c.instructions+=2;goto B612155;
case 0x612159:c.instructions+=1;goto B612159;
case 0x61215e:goto L61215e;
case 0x612161:goto L612161;
case 0x612164:c.instructions+=1;goto B612164;
case 0x612166:goto L612166;
case 0x612168:c.instructions+=1;goto B612168;
case 0x61216a:goto L61216a;
case 0x61216e:c.instructions+=5;goto B61216e;
case 0x612170:c.instructions+=4;goto B612170;
case 0x612174:c.instructions+=3;goto B612174;
case 0x612178:c.instructions+=2;goto B612178;
case 0x61217c:c.instructions+=1;goto B61217c;
case 0x61217e:goto L61217e;
case 0x612184:goto L612184;
case 0x61218a:c.instructions+=10;goto B61218a;
case 0x61218c:c.instructions+=9;goto B61218c;
case 0x612190:c.instructions+=8;goto B612190;
case 0x612196:c.instructions+=7;goto B612196;
case 0x612198:c.instructions+=6;goto B612198;
case 0x61219c:c.instructions+=5;goto B61219c;
case 0x6121a2:c.instructions+=4;goto B6121a2;
case 0x6121a4:c.instructions+=3;goto B6121a4;
case 0x6121a6:c.instructions+=2;goto B6121a6;
case 0x6121a9:c.instructions+=1;goto B6121a9;
case 0x6121ab:goto L6121ab;
case 0x6121b3:goto L6121b3;
case 0x6121b7:c.instructions+=4;goto B6121b7;
case 0x6121bd:c.instructions+=3;goto B6121bd;
case 0x6121bf:c.instructions+=2;goto B6121bf;
case 0x6121c2:c.instructions+=1;goto B6121c2;
case 0x6121c4:goto L6121c4;
case 0x6121cc:goto L6121cc;
case 0x6121ce:c.instructions+=6;goto B6121ce;
case 0x6121d0:c.instructions+=5;goto B6121d0;
case 0x6121d4:c.instructions+=4;goto B6121d4;
case 0x6121d5:c.instructions+=3;goto B6121d5;
case 0x6121d9:c.instructions+=2;goto B6121d9;
case 0x6121da:c.instructions+=1;goto B6121da;
case 0x6121df:goto L6121df;
case 0x6121e2:goto L6121e2;
case 0x6121e4:goto L6121e4;
case 0x6121e8:c.instructions+=5;goto B6121e8;
case 0x6121eb:c.instructions+=4;goto B6121eb;
case 0x6121ee:c.instructions+=3;goto B6121ee;
case 0x6121f1:c.instructions+=2;goto B6121f1;
case 0x6121f3:c.instructions+=1;goto B6121f3;
case 0x6121f9:goto L6121f9;
case 0x6121fd:c.instructions+=1;goto B6121fd;
case 0x612201:goto L612201;
case 0x612205:goto L612205;
case 0x612209:c.instructions+=5;goto B612209;
case 0x61220c:c.instructions+=4;goto B61220c;
case 0x61220d:c.instructions+=3;goto B61220d;
case 0x612211:c.instructions+=2;goto B612211;
case 0x612215:c.instructions+=1;goto B612215;
case 0x61221b:goto L61221b;
case 0x61221f:c.instructions+=5;goto B61221f;
case 0x612224:c.instructions+=4;goto B612224;
case 0x612229:c.instructions+=3;goto B612229;
case 0x61222d:c.instructions+=2;goto B61222d;
case 0x61222f:c.instructions+=1;goto B61222f;
case 0x612230:goto L612230;
case 0x612232:c.instructions+=3;goto B612232;
case 0x612234:c.instructions+=2;goto B612234;
case 0x612236:c.instructions+=1;goto B612236;
case 0x612238:goto L612238;
case 0x612240:goto L612240;
case 0x612242:c.instructions+=7;goto B612242;
case 0x612245:c.instructions+=6;goto B612245;
case 0x612249:c.instructions+=5;goto B612249;
case 0x61224b:c.instructions+=4;goto B61224b;
case 0x61224c:c.instructions+=3;goto B61224c;
case 0x61224f:c.instructions+=2;goto B61224f;
case 0x612251:c.instructions+=1;goto B612251;
case 0x612253:goto L612253;
case 0x612257:c.instructions+=5;goto B612257;
case 0x61225a:c.instructions+=4;goto B61225a;
case 0x61225d:c.instructions+=3;goto B61225d;
case 0x612262:c.instructions+=2;goto B612262;
case 0x612266:c.instructions+=1;goto B612266;
case 0x612268:goto L612268;
case 0x61226c:c.instructions+=2;goto B61226c;
case 0x61226d:c.instructions+=1;goto B61226d;
case 0x612272:goto L612272;
case 0x612273:c.instructions+=6;goto B612273;
case 0x612274:c.instructions+=5;goto B612274;
case 0x612275:c.instructions+=4;goto B612275;
case 0x61227a:c.instructions+=3;goto B61227a;
case 0x61227b:c.instructions+=2;goto B61227b;
case 0x61227e:c.instructions+=1;goto B61227e;
case 0x612280:goto L612280;
case 0x612286:c.instructions+=10;goto B612286;
case 0x61228d:c.instructions+=9;goto B61228d;
case 0x612290:c.instructions+=8;goto B612290;
case 0x612296:c.instructions+=7;goto B612296;
case 0x612297:c.instructions+=6;goto B612297;
case 0x612299:c.instructions+=5;goto B612299;
case 0x61229b:c.instructions+=4;goto B61229b;
case 0x61229f:c.instructions+=3;goto B61229f;
case 0x6122a3:c.instructions+=2;goto B6122a3;
case 0x6122a7:c.instructions+=1;goto B6122a7;
case 0x6122a9:goto L6122a9;
case 0x6122ad:c.instructions+=1;goto B6122ad;
case 0x6122af:goto L6122af;
case 0x6122b1:c.instructions+=3;goto B6122b1;
case 0x6122b2:c.instructions+=2;goto B6122b2;
case 0x6122b8:c.instructions+=1;goto B6122b8;
case 0x6122b9:goto L6122b9;
case 0x6122ba:c.instructions+=5;goto B6122ba;
case 0x6122bb:c.instructions+=4;goto B6122bb;
case 0x6122bc:c.instructions+=3;goto B6122bc;
case 0x6122be:c.instructions+=2;goto B6122be;
case 0x6122c0:c.instructions+=1;goto B6122c0;
case 0x6122c5:goto L6122c5;
case 0x6122c7:c.instructions+=4;goto B6122c7;
case 0x6122c9:c.instructions+=3;goto B6122c9;
case 0x6122cb:c.instructions+=2;goto B6122cb;
case 0x6122cf:c.instructions+=1;goto B6122cf;
case 0x6122d4:goto L6122d4;
case 0x6122d5:c.instructions+=2;goto B6122d5;
case 0x6122d9:c.instructions+=1;goto B6122d9;
case 0x6122de:goto L6122de;
case 0x6122e3:c.instructions+=4;goto B6122e3;
case 0x6122e7:c.instructions+=3;goto B6122e7;
case 0x6122eb:c.instructions+=2;goto B6122eb;
case 0x6122ec:c.instructions+=1;goto B6122ec;
case 0x6122f1:goto L6122f1;
case 0x6122f4:c.instructions+=2;goto B6122f4;
case 0x6122f9:c.instructions+=1;goto B6122f9;
case 0x6122fb:goto L6122fb;
case 0x612300:c.instructions+=5;goto B612300;
case 0x612303:c.instructions+=4;goto B612303;
case 0x612306:c.instructions+=3;goto B612306;
case 0x612307:c.instructions+=2;goto B612307;
case 0x61230c:c.instructions+=1;goto B61230c;
case 0x612311:goto L612311;
case 0x612315:c.instructions+=5;goto B612315;
case 0x61231a:c.instructions+=4;goto B61231a;
case 0x61231d:c.instructions+=3;goto B61231d;
case 0x612320:c.instructions+=2;goto B612320;
case 0x612321:c.instructions+=1;goto B612321;
case 0x612323:goto L612323;
case 0x612325:c.instructions+=1;goto B612325;
case 0x61232a:goto L61232a;
case 0x61232d:c.instructions+=2;goto B61232d;
case 0x612332:c.instructions+=1;goto B612332;
case 0x612338:goto L612338;
case 0x61233a:c.instructions+=2;goto B61233a;
case 0x61233f:c.instructions+=1;goto B61233f;
case 0x612344:goto L612344;
case 0x612348:c.instructions+=1;goto B612348;
case 0x61234a:goto L61234a;
case 0x61234f:c.instructions+=1;goto B61234f;
case 0x612354:goto L612354;
case 0x612358:c.instructions+=12;goto B612358;
case 0x61235c:c.instructions+=11;goto B61235c;
case 0x612360:c.instructions+=10;goto B612360;
case 0x612363:c.instructions+=9;goto B612363;
case 0x612365:c.instructions+=8;goto B612365;
case 0x612369:c.instructions+=7;goto B612369;
case 0x61236d:c.instructions+=6;goto B61236d;
case 0x612370:c.instructions+=5;goto B612370;
case 0x612372:c.instructions+=4;goto B612372;
case 0x612374:c.instructions+=3;goto B612374;
case 0x61237c:c.instructions+=2;goto B61237c;
case 0x612380:c.instructions+=1;goto B612380;
case 0x612382:goto L612382;
case 0x612389:c.instructions+=2;goto B612389;
case 0x61238c:c.instructions+=1;goto B61238c;
case 0x612390:goto L612390;
case 0x612393:c.instructions+=2;goto B612393;
case 0x612395:c.instructions+=1;goto B612395;
case 0x612397:goto L612397;
case 0x61239a:c.instructions+=2;goto B61239a;
case 0x61239b:c.instructions+=1;goto B61239b;
case 0x6123a0:goto L6123a0;
case 0x6123a2:c.instructions+=2;goto B6123a2;
case 0x6123a3:c.instructions+=1;goto B6123a3;
case 0x6123a8:goto L6123a8;
case 0x6123ab:c.instructions+=4;goto B6123ab;
case 0x6123ae:c.instructions+=3;goto B6123ae;
case 0x6123b1:c.instructions+=2;goto B6123b1;
case 0x6123b8:c.instructions+=1;goto B6123b8;
case 0x6123bf:goto L6123bf;
case 0x6123c3:c.instructions+=4;goto B6123c3;
case 0x6123c4:c.instructions+=3;goto B6123c4;
case 0x6123c7:c.instructions+=2;goto B6123c7;
case 0x6123c9:c.instructions+=1;goto B6123c9;
case 0x6123cb:goto L6123cb;
case 0x6123d0:c.instructions+=2;goto B6123d0;
case 0x6123d2:c.instructions+=1;goto B6123d2;
case 0x6123d8:goto L6123d8;
case 0x6123dc:c.instructions+=18;goto B6123dc;
case 0x6123df:c.instructions+=17;goto B6123df;
case 0x6123e2:c.instructions+=16;goto B6123e2;
case 0x6123ea:c.instructions+=15;goto B6123ea;
case 0x6123f5:c.instructions+=14;goto B6123f5;
case 0x612400:c.instructions+=13;goto B612400;
case 0x61240b:c.instructions+=12;goto B61240b;
case 0x612416:c.instructions+=11;goto B612416;
case 0x612421:c.instructions+=10;goto B612421;
case 0x61242c:c.instructions+=9;goto B61242c;
case 0x612430:c.instructions+=8;goto B612430;
case 0x612434:c.instructions+=7;goto B612434;
case 0x612438:c.instructions+=6;goto B612438;
case 0x61243c:c.instructions+=5;goto B61243c;
case 0x612440:c.instructions+=4;goto B612440;
case 0x612444:c.instructions+=3;goto B612444;
case 0x612448:c.instructions+=2;goto B612448;
case 0x61244a:c.instructions+=1;goto B61244a;
case 0x612450:goto L612450;
case 0x612454:c.instructions+=2;goto B612454;
case 0x612456:c.instructions+=1;goto B612456;
case 0x612458:goto L612458;
case 0x61245b:c.instructions+=1;goto B61245b;
case 0x61245d:goto L61245d;
case 0x612460:c.instructions+=1;goto B612460;
case 0x612462:goto L612462;
case 0x612464:c.instructions+=1;goto B612464;
case 0x612466:goto L612466;
case 0x612469:c.instructions+=1;goto B612469;
case 0x61246b:goto L61246b;
case 0x61246e:c.instructions+=1;goto B61246e;
case 0x612470:goto L612470;
case 0x612473:c.instructions+=1;goto B612473;
case 0x612475:goto L612475;
case 0x612478:c.instructions+=1;goto B612478;
case 0x61247a:goto L61247a;
case 0x61247d:c.instructions+=1;goto B61247d;
case 0x61247f:goto L61247f;
case 0x612482:c.instructions+=3;goto B612482;
case 0x612485:c.instructions+=2;goto B612485;
case 0x61248b:c.instructions+=1;goto B61248b;
case 0x61248d:goto L61248d;
case 0x61248f:goto L61248f;
case 0x612490:c.instructions+=1;goto B612490;
case 0x612492:goto L612492;
case 0x612495:c.instructions+=1;goto B612495;
case 0x612497:goto L612497;
case 0x61249a:c.instructions+=1;goto B61249a;
case 0x61249c:goto L61249c;
case 0x61249f:c.instructions+=1;goto B61249f;
case 0x6124a1:goto L6124a1;
case 0x6124a4:c.instructions+=1;goto B6124a4;
case 0x6124a6:goto L6124a6;
case 0x6124a9:c.instructions+=1;goto B6124a9;
case 0x6124ab:goto L6124ab;
case 0x6124ae:goto L6124ae;
case 0x6124b4:c.instructions+=1;goto B6124b4;
case 0x6124b6:goto L6124b6;
case 0x6124ba:goto L6124ba;
case 0x6124bd:c.instructions+=2;goto B6124bd;
case 0x6124c0:c.instructions+=1;goto B6124c0;
case 0x6124c2:goto L6124c2;
case 0x6124c6:c.instructions+=3;goto B6124c6;
case 0x6124c8:c.instructions+=2;goto B6124c8;
case 0x6124cd:c.instructions+=1;goto B6124cd;
case 0x6124d2:goto L6124d2;
case 0x6124d4:goto L6124d4;
case 0x6124d8:c.instructions+=2;goto B6124d8;
case 0x6124da:c.instructions+=1;goto B6124da;
case 0x6124dc:goto L6124dc;
case 0x6124e0:c.instructions+=1;goto B6124e0;
case 0x6124e2:goto L6124e2;
case 0x6124e5:c.instructions+=1;goto B6124e5;
case 0x6124e7:goto L6124e7;
case 0x6124eb:c.instructions+=1;goto B6124eb;
case 0x6124ed:goto L6124ed;
case 0x6124ee:c.instructions+=2;goto B6124ee;
case 0x6124f1:c.instructions+=1;goto B6124f1;
case 0x6124f3:goto L6124f3;
case 0x6124f5:goto L6124f5;
case 0x6124f7:c.instructions+=9;goto B6124f7;
case 0x6124f9:c.instructions+=8;goto B6124f9;
case 0x6124fb:c.instructions+=7;goto B6124fb;
case 0x612502:c.instructions+=6;goto B612502;
case 0x612504:c.instructions+=5;goto B612504;
case 0x612507:c.instructions+=4;goto B612507;
case 0x612509:c.instructions+=3;goto B612509;
case 0x61250a:c.instructions+=2;goto B61250a;
case 0x612511:c.instructions+=1;goto B612511;
case 0x612518:goto L612518;
case 0x61251b:c.instructions+=1;goto B61251b;
case 0x61251d:goto L61251d;
case 0x612520:goto L612520;
case 0x612521:c.instructions+=3;goto B612521;
case 0x612522:c.instructions+=2;goto B612522;
case 0x612524:c.instructions+=1;goto B612524;
case 0x612526:goto L612526;
case 0x61252a:c.instructions+=2;goto B61252a;
case 0x612534:c.instructions+=1;goto B612534;
case 0x612536:goto L612536;
case 0x61253a:c.instructions+=5;goto B61253a;
case 0x61253c:c.instructions+=4;goto B61253c;
case 0x61253f:c.instructions+=3;goto B61253f;
case 0x612541:c.instructions+=2;goto B612541;
case 0x612544:c.instructions+=1;goto B612544;
case 0x612546:goto L612546;
case 0x612548:goto L612548;
case 0x61254a:c.instructions+=1;goto B61254a;
case 0x61254d:goto L61254d;
case 0x61254f:goto L61254f;
case 0x612553:goto L612553;
case 0x612557:c.instructions+=20;goto B612557;
case 0x61255e:c.instructions+=19;goto B61255e;
case 0x612562:c.instructions+=18;goto B612562;
case 0x612564:c.instructions+=17;goto B612564;
case 0x612567:c.instructions+=16;goto B612567;
case 0x61256a:c.instructions+=15;goto B61256a;
case 0x61256d:c.instructions+=14;goto B61256d;
case 0x612570:c.instructions+=13;goto B612570;
case 0x612573:c.instructions+=12;goto B612573;
case 0x612576:c.instructions+=11;goto B612576;
case 0x612579:c.instructions+=10;goto B612579;
case 0x61257c:c.instructions+=9;goto B61257c;
case 0x61257f:c.instructions+=8;goto B61257f;
case 0x612582:c.instructions+=7;goto B612582;
case 0x612585:c.instructions+=6;goto B612585;
case 0x612588:c.instructions+=5;goto B612588;
case 0x61258b:c.instructions+=4;goto B61258b;
case 0x61258e:c.instructions+=3;goto B61258e;
case 0x612592:c.instructions+=2;goto B612592;
case 0x612596:c.instructions+=1;goto B612596;
case 0x61259c:goto L61259c;
case 0x6125a0:goto L6125a0;
case 0x6125a2:c.instructions+=7;goto B6125a2;
case 0x6125a5:c.instructions+=6;goto B6125a5;
case 0x6125a8:c.instructions+=5;goto B6125a8;
case 0x6125ac:c.instructions+=4;goto B6125ac;
case 0x6125b1:c.instructions+=3;goto B6125b1;
case 0x6125b9:c.instructions+=2;goto B6125b9;
case 0x6125c1:c.instructions+=1;goto B6125c1;
case 0x6125c7:goto L6125c7;
case 0x6125ca:c.instructions+=1;goto B6125ca;
case 0x6125d0:goto L6125d0;
case 0x6125d3:c.instructions+=2;goto B6125d3;
case 0x6125d5:c.instructions+=1;goto B6125d5;
case 0x6125db:goto L6125db;
case 0x6125df:c.instructions+=14;goto B6125df;
case 0x6125e6:c.instructions+=13;goto B6125e6;
case 0x6125e9:c.instructions+=12;goto B6125e9;
case 0x6125ec:c.instructions+=11;goto B6125ec;
case 0x6125ee:c.instructions+=10;goto B6125ee;
case 0x6125f1:c.instructions+=9;goto B6125f1;
case 0x6125f4:c.instructions+=8;goto B6125f4;
case 0x6125fb:c.instructions+=7;goto B6125fb;
case 0x6125fe:c.instructions+=6;goto B6125fe;
case 0x612601:c.instructions+=5;goto B612601;
case 0x612604:c.instructions+=4;goto B612604;
case 0x61260a:c.instructions+=3;goto B61260a;
case 0x61260c:c.instructions+=2;goto B61260c;
case 0x612610:c.instructions+=1;goto B612610;
case 0x612612:goto L612612;
case 0x612614:c.instructions+=1;goto B612614;
case 0x612616:goto L612616;
case 0x61261a:c.instructions+=24;goto B61261a;
case 0x61261d:c.instructions+=23;goto B61261d;
case 0x612621:c.instructions+=22;goto B612621;
case 0x612624:c.instructions+=21;goto B612624;
case 0x612628:c.instructions+=20;goto B612628;
case 0x61262c:c.instructions+=19;goto B61262c;
case 0x612632:c.instructions+=18;goto B612632;
case 0x612635:c.instructions+=17;goto B612635;
case 0x612638:c.instructions+=16;goto B612638;
case 0x61263c:c.instructions+=15;goto B61263c;
case 0x612640:c.instructions+=14;goto B612640;
case 0x612644:c.instructions+=13;goto B612644;
case 0x612646:c.instructions+=12;goto B612646;
case 0x612648:c.instructions+=11;goto B612648;
case 0x61264e:c.instructions+=10;goto B61264e;
case 0x612652:c.instructions+=9;goto B612652;
case 0x612653:c.instructions+=8;goto B612653;
case 0x612656:c.instructions+=7;goto B612656;
case 0x61265a:c.instructions+=6;goto B61265a;
case 0x61265b:c.instructions+=5;goto B61265b;
case 0x61265f:c.instructions+=4;goto B61265f;
case 0x612667:c.instructions+=3;goto B612667;
case 0x61266d:c.instructions+=2;goto B61266d;
case 0x612671:c.instructions+=1;goto B612671;
case 0x612676:goto L612676;
case 0x612678:c.instructions+=2;goto B612678;
case 0x61267c:c.instructions+=1;goto B61267c;
case 0x61267f:goto L61267f;
case 0x612682:c.instructions+=1;goto B612682;
case 0x612684:goto L612684;
case 0x612688:c.instructions+=6;goto B612688;
case 0x61268c:c.instructions+=5;goto B61268c;
case 0x612690:c.instructions+=4;goto B612690;
case 0x612694:c.instructions+=3;goto B612694;
case 0x612696:c.instructions+=2;goto B612696;
case 0x612698:c.instructions+=1;goto B612698;
case 0x61269e:goto L61269e;
case 0x6126a2:c.instructions+=2;goto B6126a2;
case 0x6126a7:c.instructions+=1;goto B6126a7;
case 0x6126ac:goto L6126ac;
case 0x6126ae:c.instructions+=1;goto B6126ae;
case 0x6126b4:goto L6126b4;
case 0x6126b8:c.instructions+=2;goto B6126b8;
case 0x6126bc:c.instructions+=1;goto B6126bc;
case 0x6126be:goto L6126be;
case 0x6126c4:goto L6126c4;
case 0x6126ca:c.instructions+=5;goto B6126ca;
case 0x6126ce:c.instructions+=4;goto B6126ce;
case 0x6126d4:c.instructions+=3;goto B6126d4;
case 0x6126d6:c.instructions+=2;goto B6126d6;
case 0x6126d9:c.instructions+=1;goto B6126d9;
case 0x6126db:goto L6126db;
case 0x6126e3:goto L6126e3;
case 0x6126e9:c.instructions+=12;goto B6126e9;
case 0x6126ed:c.instructions+=11;goto B6126ed;
case 0x6126f1:c.instructions+=10;goto B6126f1;
case 0x6126f3:c.instructions+=9;goto B6126f3;
case 0x6126f7:c.instructions+=8;goto B6126f7;
case 0x6126f9:c.instructions+=7;goto B6126f9;
case 0x6126fd:c.instructions+=6;goto B6126fd;
case 0x612701:c.instructions+=5;goto B612701;
case 0x612702:c.instructions+=4;goto B612702;
case 0x612709:c.instructions+=3;goto B612709;
case 0x61270a:c.instructions+=2;goto B61270a;
case 0x612711:c.instructions+=1;goto B612711;
case 0x612716:goto L612716;
case 0x612718:c.instructions+=4;goto B612718;
case 0x61271c:c.instructions+=3;goto B61271c;
case 0x61271f:c.instructions+=2;goto B61271f;
case 0x612721:c.instructions+=1;goto B612721;
case 0x612723:goto L612723;
case 0x612726:c.instructions+=16;goto B612726;
case 0x61272a:c.instructions+=15;goto B61272a;
case 0x61272c:c.instructions+=14;goto B61272c;
case 0x61272e:c.instructions+=13;goto B61272e;
case 0x612732:c.instructions+=12;goto B612732;
case 0x612733:c.instructions+=11;goto B612733;
case 0x612735:c.instructions+=10;goto B612735;
case 0x612739:c.instructions+=9;goto B612739;
case 0x61273d:c.instructions+=8;goto B61273d;
case 0x612740:c.instructions+=7;goto B612740;
case 0x612744:c.instructions+=6;goto B612744;
case 0x612745:c.instructions+=5;goto B612745;
case 0x61274b:c.instructions+=4;goto B61274b;
case 0x61274f:c.instructions+=3;goto B61274f;
case 0x612754:c.instructions+=2;goto B612754;
case 0x612759:c.instructions+=1;goto B612759;
case 0x61275b:goto L61275b;
case 0x61275c:c.instructions+=2;goto B61275c;
case 0x612760:c.instructions+=1;goto B612760;
case 0x612762:goto L612762;
case 0x612766:c.instructions+=2;goto B612766;
case 0x61276a:c.instructions+=1;goto B61276a;
case 0x61276e:goto L61276e;
case 0x612772:c.instructions+=4;goto B612772;
case 0x612775:c.instructions+=3;goto B612775;
case 0x612779:c.instructions+=2;goto B612779;
case 0x61277e:c.instructions+=1;goto B61277e;
case 0x612782:goto L612782;
case 0x612789:c.instructions+=11;goto B612789;
case 0x612790:c.instructions+=10;goto B612790;
case 0x612791:c.instructions+=9;goto B612791;
case 0x612792:c.instructions+=8;goto B612792;
case 0x612799:c.instructions+=7;goto B612799;
case 0x61279c:c.instructions+=6;goto B61279c;
case 0x6127a3:c.instructions+=5;goto B6127a3;
case 0x6127a7:c.instructions+=4;goto B6127a7;
case 0x6127a9:c.instructions+=3;goto B6127a9;
case 0x6127ad:c.instructions+=2;goto B6127ad;
case 0x6127b1:c.instructions+=1;goto B6127b1;
case 0x6127b5:goto L6127b5;
case 0x6127b9:c.instructions+=5;goto B6127b9;
case 0x6127ba:c.instructions+=4;goto B6127ba;
case 0x6127bd:c.instructions+=3;goto B6127bd;
case 0x6127bf:c.instructions+=2;goto B6127bf;
case 0x6127c3:c.instructions+=1;goto B6127c3;
case 0x6127c9:goto L6127c9;
case 0x6127cd:goto L6127cd;
case 0x6127d1:c.instructions+=4;goto B6127d1;
case 0x6127d2:c.instructions+=3;goto B6127d2;
case 0x6127d4:c.instructions+=2;goto B6127d4;
case 0x6127d8:c.instructions+=1;goto B6127d8;
case 0x6127de:goto L6127de;
case 0x6127e0:c.instructions+=3;goto B6127e0;
case 0x6127e5:c.instructions+=2;goto B6127e5;
case 0x6127e9:c.instructions+=1;goto B6127e9;
case 0x6127ef:goto L6127ef;
case 0x6127f6:c.instructions+=3;goto B6127f6;
case 0x6127fa:c.instructions+=2;goto B6127fa;
case 0x6127fd:c.instructions+=1;goto B6127fd;
case 0x612801:goto L612801;
case 0x612804:c.instructions+=2;goto B612804;
case 0x612806:c.instructions+=1;goto B612806;
case 0x612808:goto L612808;
case 0x61280a:c.instructions+=3;goto B61280a;
case 0x61280c:c.instructions+=2;goto B61280c;
case 0x61280e:c.instructions+=1;goto B61280e;
case 0x612814:goto L612814;
case 0x612818:c.instructions+=2;goto B612818;
case 0x61281b:c.instructions+=1;goto B61281b;
case 0x612820:goto L612820;
case 0x612823:c.instructions+=7;goto B612823;
case 0x612826:c.instructions+=6;goto B612826;
case 0x612828:c.instructions+=5;goto B612828;
case 0x61282a:c.instructions+=4;goto B61282a;
case 0x61282b:c.instructions+=3;goto B61282b;
case 0x61282e:c.instructions+=2;goto B61282e;
case 0x612830:c.instructions+=1;goto B612830;
case 0x612832:goto L612832;
case 0x612837:goto L612837;
case 0x612839:c.instructions+=3;goto B612839;
case 0x61283b:c.instructions+=2;goto B61283b;
case 0x61283d:c.instructions+=1;goto B61283d;
case 0x612843:goto L612843;
case 0x612847:c.instructions+=4;goto B612847;
case 0x61284b:c.instructions+=3;goto B61284b;
case 0x61284f:c.instructions+=2;goto B61284f;
case 0x612852:c.instructions+=1;goto B612852;
case 0x612855:goto L612855;
case 0x612858:c.instructions+=24;goto B612858;
case 0x61285b:c.instructions+=23;goto B61285b;
case 0x61285e:c.instructions+=22;goto B61285e;
case 0x612862:c.instructions+=21;goto B612862;
case 0x612865:c.instructions+=20;goto B612865;
case 0x612869:c.instructions+=19;goto B612869;
case 0x61286d:c.instructions+=18;goto B61286d;
case 0x612873:c.instructions+=17;goto B612873;
case 0x612877:c.instructions+=16;goto B612877;
case 0x61287a:c.instructions+=15;goto B61287a;
case 0x61287d:c.instructions+=14;goto B61287d;
case 0x612881:c.instructions+=13;goto B612881;
case 0x612885:c.instructions+=12;goto B612885;
case 0x612889:c.instructions+=11;goto B612889;
case 0x61288b:c.instructions+=10;goto B61288b;
case 0x612891:c.instructions+=9;goto B612891;
case 0x612893:c.instructions+=8;goto B612893;
case 0x612897:c.instructions+=7;goto B612897;
case 0x612898:c.instructions+=6;goto B612898;
case 0x61289c:c.instructions+=5;goto B61289c;
case 0x61289d:c.instructions+=4;goto B61289d;
case 0x6128a1:c.instructions+=3;goto B6128a1;
case 0x6128a7:c.instructions+=2;goto B6128a7;
case 0x6128ab:c.instructions+=1;goto B6128ab;
case 0x6128b0:goto L6128b0;
case 0x6128b3:c.instructions+=6;goto B6128b3;
case 0x6128b6:c.instructions+=5;goto B6128b6;
case 0x6128b8:c.instructions+=4;goto B6128b8;
case 0x6128b9:c.instructions+=3;goto B6128b9;
case 0x6128bc:c.instructions+=2;goto B6128bc;
case 0x6128be:c.instructions+=1;goto B6128be;
case 0x6128c0:goto L6128c0;
case 0x6128c4:goto L6128c4;
case 0x6128c7:c.instructions+=2;goto B6128c7;
case 0x6128c8:c.instructions+=1;goto B6128c8;
case 0x6128cd:goto L6128cd;
case 0x6128d0:c.instructions+=2;goto B6128d0;
case 0x6128d1:c.instructions+=1;goto B6128d1;
case 0x6128d6:goto L6128d6;
case 0x6128d8:c.instructions+=8;goto B6128d8;
case 0x6128dc:c.instructions+=7;goto B6128dc;
case 0x6128de:c.instructions+=6;goto B6128de;
case 0x6128e1:c.instructions+=5;goto B6128e1;
case 0x6128e4:c.instructions+=4;goto B6128e4;
case 0x6128e5:c.instructions+=3;goto B6128e5;
case 0x6128e9:c.instructions+=2;goto B6128e9;
case 0x6128ed:c.instructions+=1;goto B6128ed;
case 0x6128f3:goto L6128f3;
case 0x6128f7:c.instructions+=2;goto B6128f7;
case 0x6128f9:c.instructions+=1;goto B6128f9;
case 0x6128ff:goto L6128ff;
case 0x612904:c.instructions+=3;goto B612904;
case 0x612906:c.instructions+=2;goto B612906;
case 0x612908:c.instructions+=1;goto B612908;
case 0x61290a:goto L61290a;
case 0x61290c:c.instructions+=2;goto B61290c;
case 0x61290e:c.instructions+=1;goto B61290e;
case 0x612914:goto L612914;
case 0x612918:c.instructions+=6;goto B612918;
case 0x61291c:c.instructions+=5;goto B61291c;
case 0x61291f:c.instructions+=4;goto B61291f;
case 0x612923:c.instructions+=3;goto B612923;
case 0x612925:c.instructions+=2;goto B612925;
case 0x612929:c.instructions+=1;goto B612929;
case 0x61292b:goto L61292b;
case 0x61292f:c.instructions+=1;goto B61292f;
case 0x612930:goto L612930;
case 0x612934:c.instructions+=17;goto B612934;
case 0x612938:c.instructions+=16;goto B612938;
case 0x61293c:c.instructions+=15;goto B61293c;
case 0x612940:c.instructions+=14;goto B612940;
case 0x612943:c.instructions+=13;goto B612943;
case 0x612946:c.instructions+=12;goto B612946;
case 0x612948:c.instructions+=11;goto B612948;
case 0x61294c:c.instructions+=10;goto B61294c;
case 0x61294e:c.instructions+=9;goto B61294e;
case 0x612951:c.instructions+=8;goto B612951;
case 0x612954:c.instructions+=7;goto B612954;
case 0x612956:c.instructions+=6;goto B612956;
case 0x61295a:c.instructions+=5;goto B61295a;
case 0x61295b:c.instructions+=4;goto B61295b;
case 0x61295e:c.instructions+=3;goto B61295e;
case 0x612961:c.instructions+=2;goto B612961;
case 0x612963:c.instructions+=1;goto B612963;
case 0x612965:goto L612965;
case 0x61296a:goto L61296a;
case 0x61296e:c.instructions+=6;goto B61296e;
case 0x612970:c.instructions+=5;goto B612970;
case 0x612971:c.instructions+=4;goto B612971;
case 0x612974:c.instructions+=3;goto B612974;
case 0x612975:c.instructions+=2;goto B612975;
case 0x612976:c.instructions+=1;goto B612976;
case 0x61297b:goto L61297b;
case 0x61297e:c.instructions+=1;goto B61297e;
case 0x612983:goto L612983;
case 0x612989:c.instructions+=3;goto B612989;
case 0x61298b:c.instructions+=2;goto B61298b;
case 0x61298d:c.instructions+=1;goto B61298d;
case 0x61298f:goto L61298f;
case 0x612994:c.instructions+=2;goto B612994;
case 0x612999:c.instructions+=1;goto B612999;
case 0x6129a0:goto L6129a0;
case 0x6129a3:c.instructions+=17;goto B6129a3;
case 0x6129a5:c.instructions+=16;goto B6129a5;
case 0x6129a8:c.instructions+=15;goto B6129a8;
case 0x6129ab:c.instructions+=14;goto B6129ab;
case 0x6129ae:c.instructions+=13;goto B6129ae;
case 0x6129b1:c.instructions+=12;goto B6129b1;
case 0x6129b3:c.instructions+=11;goto B6129b3;
case 0x6129b6:c.instructions+=10;goto B6129b6;
case 0x6129b9:c.instructions+=9;goto B6129b9;
case 0x6129bc:c.instructions+=8;goto B6129bc;
case 0x6129bf:c.instructions+=7;goto B6129bf;
case 0x6129c2:c.instructions+=6;goto B6129c2;
case 0x6129c4:c.instructions+=5;goto B6129c4;
case 0x6129c5:c.instructions+=4;goto B6129c5;
case 0x6129c8:c.instructions+=3;goto B6129c8;
case 0x6129cb:c.instructions+=2;goto B6129cb;
case 0x6129cd:c.instructions+=1;goto B6129cd;
case 0x6129cf:goto L6129cf;
case 0x6129d1:c.instructions+=2;goto B6129d1;
case 0x6129d3:c.instructions+=1;goto B6129d3;
case 0x6129d5:goto L6129d5;
case 0x6129d9:c.instructions+=4;goto B6129d9;
case 0x6129dd:c.instructions+=3;goto B6129dd;
case 0x6129e2:c.instructions+=2;goto B6129e2;
case 0x6129e5:c.instructions+=1;goto B6129e5;
case 0x6129e7:goto L6129e7;
case 0x6129ed:c.instructions+=1;goto B6129ed;
case 0x6129f0:goto L6129f0;
case 0x6129f5:c.instructions+=1;goto B6129f5;
case 0x6129f7:goto L6129f7;
case 0x6129f9:c.instructions+=1;goto B6129f9;
case 0x6129fb:goto L6129fb;
case 0x6129fd:c.instructions+=6;goto B6129fd;
case 0x612a00:c.instructions+=5;goto B612a00;
case 0x612a04:c.instructions+=4;goto B612a04;
case 0x612a07:c.instructions+=3;goto B612a07;
case 0x612a0b:c.instructions+=2;goto B612a0b;
case 0x612a0e:c.instructions+=1;goto B612a0e;
case 0x612a10:goto L612a10;
case 0x612a12:c.instructions+=3;goto B612a12;
case 0x612a16:c.instructions+=2;goto B612a16;
case 0x612a1a:c.instructions+=1;goto B612a1a;
case 0x612a1c:goto L612a1c;
case 0x612a1e:c.instructions+=14;goto B612a1e;
case 0x612a20:c.instructions+=13;goto B612a20;
case 0x612a25:c.instructions+=12;goto B612a25;
case 0x612a28:c.instructions+=11;goto B612a28;
case 0x612a2b:c.instructions+=10;goto B612a2b;
case 0x612a2d:c.instructions+=9;goto B612a2d;
case 0x612a32:c.instructions+=8;goto B612a32;
case 0x612a35:c.instructions+=7;goto B612a35;
case 0x612a37:c.instructions+=6;goto B612a37;
case 0x612a3a:c.instructions+=5;goto B612a3a;
case 0x612a3c:c.instructions+=4;goto B612a3c;
case 0x612a3f:c.instructions+=3;goto B612a3f;
case 0x612a40:c.instructions+=2;goto B612a40;
case 0x612a42:c.instructions+=1;goto B612a42;
case 0x612a44:goto L612a44;
case 0x612a49:goto L612a49;
case 0x612a4d:c.instructions+=2;goto B612a4d;
case 0x612a4f:c.instructions+=1;goto B612a4f;
case 0x612a51:goto L612a51;
case 0x612a55:c.instructions+=4;goto B612a55;
case 0x612a59:c.instructions+=3;goto B612a59;
case 0x612a5b:c.instructions+=2;goto B612a5b;
case 0x612a5f:c.instructions+=1;goto B612a5f;
case 0x612a60:goto L612a60;
case 0x612a64:c.instructions+=10;goto B612a64;
case 0x612a68:c.instructions+=9;goto B612a68;
case 0x612a6c:c.instructions+=8;goto B612a6c;
case 0x612a6f:c.instructions+=7;goto B612a6f;
case 0x612a72:c.instructions+=6;goto B612a72;
case 0x612a76:c.instructions+=5;goto B612a76;
case 0x612a78:c.instructions+=4;goto B612a78;
case 0x612a7b:c.instructions+=3;goto B612a7b;
case 0x612a7d:c.instructions+=2;goto B612a7d;
case 0x612a7f:c.instructions+=1;goto B612a7f;
case 0x612a81:goto L612a81;
case 0x612a84:c.instructions+=13;goto B612a84;
case 0x612a86:c.instructions+=12;goto B612a86;
case 0x612a88:c.instructions+=11;goto B612a88;
case 0x612a8b:c.instructions+=10;goto B612a8b;
case 0x612a8c:c.instructions+=9;goto B612a8c;
case 0x612a8f:c.instructions+=8;goto B612a8f;
case 0x612a92:c.instructions+=7;goto B612a92;
case 0x612a95:c.instructions+=6;goto B612a95;
case 0x612a96:c.instructions+=5;goto B612a96;
case 0x612a9a:c.instructions+=4;goto B612a9a;
case 0x612a9b:c.instructions+=3;goto B612a9b;
case 0x612aa0:c.instructions+=2;goto B612aa0;
case 0x612aa1:c.instructions+=1;goto B612aa1;
case 0x612aa6:goto L612aa6;
case 0x612aa9:c.instructions+=2;goto B612aa9;
case 0x612aab:c.instructions+=1;goto B612aab;
case 0x612aad:goto L612aad;
case 0x612ab1:c.instructions+=3;goto B612ab1;
case 0x612ab3:c.instructions+=2;goto B612ab3;
case 0x612ab5:c.instructions+=1;goto B612ab5;
case 0x612ab7:goto L612ab7;
case 0x612aba:goto L612aba;
case 0x612abe:c.instructions+=4;goto B612abe;
case 0x612ac1:c.instructions+=3;goto B612ac1;
case 0x612ac2:c.instructions+=2;goto B612ac2;
case 0x612ac6:c.instructions+=1;goto B612ac6;
case 0x612ac8:goto L612ac8;
case 0x612acc:c.instructions+=2;goto B612acc;
case 0x612acd:c.instructions+=1;goto B612acd;
case 0x612ad2:goto L612ad2;
case 0x612ad6:c.instructions+=2;goto B612ad6;
case 0x612ad7:c.instructions+=1;goto B612ad7;
case 0x612adc:goto L612adc;
case 0x612ae0:c.instructions+=5;goto B612ae0;
case 0x612ae5:c.instructions+=4;goto B612ae5;
case 0x612ae8:c.instructions+=3;goto B612ae8;
case 0x612aea:c.instructions+=2;goto B612aea;
case 0x612aee:c.instructions+=1;goto B612aee;
case 0x612af3:goto L612af3;
case 0x612af5:c.instructions+=3;goto B612af5;
case 0x612af7:c.instructions+=2;goto B612af7;
case 0x612af9:c.instructions+=1;goto B612af9;
case 0x612afb:goto L612afb;
case 0x612afd:c.instructions+=2;goto B612afd;
case 0x612aff:c.instructions+=1;goto B612aff;
case 0x612b00:goto L612b00;
case 0x612b02:c.instructions+=6;goto B612b02;
case 0x612b05:c.instructions+=5;goto B612b05;
case 0x612b07:c.instructions+=4;goto B612b07;
case 0x612b08:c.instructions+=3;goto B612b08;
case 0x612b0b:c.instructions+=2;goto B612b0b;
case 0x612b0d:c.instructions+=1;goto B612b0d;
case 0x612b0f:goto L612b0f;
case 0x612b13:c.instructions+=6;goto B612b13;
case 0x612b16:c.instructions+=5;goto B612b16;
case 0x612b19:c.instructions+=4;goto B612b19;
case 0x612b1a:c.instructions+=3;goto B612b1a;
case 0x612b1f:c.instructions+=2;goto B612b1f;
case 0x612b23:c.instructions+=1;goto B612b23;
case 0x612b25:goto L612b25;
case 0x612b29:c.instructions+=2;goto B612b29;
case 0x612b2a:c.instructions+=1;goto B612b2a;
case 0x612b2f:goto L612b2f;
case 0x612b32:c.instructions+=4;goto B612b32;
case 0x612b33:c.instructions+=3;goto B612b33;
case 0x612b37:c.instructions+=2;goto B612b37;
case 0x612b39:c.instructions+=1;goto B612b39;
case 0x612b3e:goto L612b3e;
case 0x612b3f:c.instructions+=2;goto B612b3f;
case 0x612b41:c.instructions+=1;goto B612b41;
case 0x612b46:goto L612b46;
case 0x612b47:c.instructions+=6;goto B612b47;
case 0x612b48:c.instructions+=5;goto B612b48;
case 0x612b49:c.instructions+=4;goto B612b49;
case 0x612b4e:c.instructions+=3;goto B612b4e;
case 0x612b4f:c.instructions+=2;goto B612b4f;
case 0x612b55:c.instructions+=1;goto B612b55;
case 0x612b56:goto L612b56;
case 0x612b57:c.instructions+=6;goto B612b57;
case 0x612b58:c.instructions+=5;goto B612b58;
case 0x612b59:c.instructions+=4;goto B612b59;
case 0x612b5b:c.instructions+=3;goto B612b5b;
case 0x612b5c:c.instructions+=2;goto B612b5c;
case 0x612b62:c.instructions+=1;goto B612b62;
case 0x612b70:goto L612b70;
case 0x612b76:c.instructions+=10;goto B612b76;
case 0x612b79:c.instructions+=9;goto B612b79;
case 0x612b7a:c.instructions+=8;goto B612b7a;
case 0x612b7e:c.instructions+=7;goto B612b7e;
case 0x612b80:c.instructions+=6;goto B612b80;
case 0x612b86:c.instructions+=5;goto B612b86;
case 0x612b8a:c.instructions+=4;goto B612b8a;
case 0x612b8b:c.instructions+=3;goto B612b8b;
case 0x612b8f:c.instructions+=2;goto B612b8f;
case 0x612b90:c.instructions+=1;goto B612b90;
case 0x612b95:goto L612b95;
case 0x612b9b:c.instructions+=3;goto B612b9b;
case 0x612b9e:c.instructions+=2;goto B612b9e;
case 0x612ba0:c.instructions+=1;goto B612ba0;
case 0x612ba2:goto L612ba2;
case 0x612ba5:c.instructions+=3;goto B612ba5;
case 0x612ba8:c.instructions+=2;goto B612ba8;
case 0x612baa:c.instructions+=1;goto B612baa;
case 0x612bac:goto L612bac;
case 0x612bb1:c.instructions+=5;goto B612bb1;
case 0x612bb5:c.instructions+=4;goto B612bb5;
case 0x612bb6:c.instructions+=3;goto B612bb6;
case 0x612bba:c.instructions+=2;goto B612bba;
case 0x612bbb:c.instructions+=1;goto B612bbb;
case 0x612bbd:goto L612bbd;
case 0x612bc5:c.instructions+=5;goto B612bc5;
case 0x612bcd:c.instructions+=4;goto B612bcd;
case 0x612bd5:c.instructions+=3;goto B612bd5;
case 0x612bdd:c.instructions+=2;goto B612bdd;
case 0x612bdf:c.instructions+=1;goto B612bdf;
case 0x612be0:goto L612be0;
case 0x612be4:c.instructions+=3;goto B612be4;
case 0x612beb:c.instructions+=2;goto B612beb;
case 0x612bed:c.instructions+=1;goto B612bed;
case 0x612bef:goto L612bef;
case 0x612bf2:c.instructions+=3;goto B612bf2;
case 0x612bf5:c.instructions+=2;goto B612bf5;
case 0x612bf7:c.instructions+=1;goto B612bf7;
case 0x612bf9:goto L612bf9;
case 0x612bfa:c.instructions+=2;goto B612bfa;
case 0x612bfd:c.instructions+=1;goto B612bfd;
case 0x612bff:goto L612bff;
case 0x612c04:c.instructions+=4;goto B612c04;
case 0x612c08:c.instructions+=3;goto B612c08;
case 0x612c09:c.instructions+=2;goto B612c09;
case 0x612c0d:c.instructions+=1;goto B612c0d;
case 0x612c0e:goto L612c0e;
case 0x612c13:goto L612c13;
case 0x612c17:c.instructions+=3;goto B612c17;
case 0x612c1a:c.instructions+=2;goto B612c1a;
case 0x612c1b:c.instructions+=1;goto B612c1b;
case 0x612c20:goto L612c20;
case 0x612c23:c.instructions+=3;goto B612c23;
case 0x612c24:c.instructions+=2;goto B612c24;
case 0x612c27:c.instructions+=1;goto B612c27;
case 0x612c28:goto L612c28;
case 0x612c2d:c.instructions+=5;goto B612c2d;
case 0x612c31:c.instructions+=4;goto B612c31;
case 0x612c32:c.instructions+=3;goto B612c32;
case 0x612c36:c.instructions+=2;goto B612c36;
case 0x612c37:c.instructions+=1;goto B612c37;
case 0x612c40:goto L612c40;
case 0x612c46:c.instructions+=10;goto B612c46;
case 0x612c49:c.instructions+=9;goto B612c49;
case 0x612c4a:c.instructions+=8;goto B612c4a;
case 0x612c4e:c.instructions+=7;goto B612c4e;
case 0x612c50:c.instructions+=6;goto B612c50;
case 0x612c56:c.instructions+=5;goto B612c56;
case 0x612c5a:c.instructions+=4;goto B612c5a;
case 0x612c5b:c.instructions+=3;goto B612c5b;
case 0x612c5f:c.instructions+=2;goto B612c5f;
case 0x612c60:c.instructions+=1;goto B612c60;
case 0x612c65:goto L612c65;
case 0x612c6b:c.instructions+=3;goto B612c6b;
case 0x612c6e:c.instructions+=2;goto B612c6e;
case 0x612c70:c.instructions+=1;goto B612c70;
case 0x612c72:goto L612c72;
case 0x612c75:c.instructions+=3;goto B612c75;
case 0x612c78:c.instructions+=2;goto B612c78;
case 0x612c7a:c.instructions+=1;goto B612c7a;
case 0x612c7c:goto L612c7c;
case 0x612c81:c.instructions+=5;goto B612c81;
case 0x612c85:c.instructions+=4;goto B612c85;
case 0x612c86:c.instructions+=3;goto B612c86;
case 0x612c8a:c.instructions+=2;goto B612c8a;
case 0x612c8b:c.instructions+=1;goto B612c8b;
case 0x612c8d:goto L612c8d;
case 0x612c95:c.instructions+=5;goto B612c95;
case 0x612c9d:c.instructions+=4;goto B612c9d;
case 0x612ca5:c.instructions+=3;goto B612ca5;
case 0x612cad:c.instructions+=2;goto B612cad;
case 0x612caf:c.instructions+=1;goto B612caf;
case 0x612cb0:goto L612cb0;
case 0x612cb4:c.instructions+=3;goto B612cb4;
case 0x612cbb:c.instructions+=2;goto B612cbb;
case 0x612cbd:c.instructions+=1;goto B612cbd;
case 0x612cbf:goto L612cbf;
case 0x612cc2:c.instructions+=3;goto B612cc2;
case 0x612cc5:c.instructions+=2;goto B612cc5;
case 0x612cc7:c.instructions+=1;goto B612cc7;
case 0x612cc9:goto L612cc9;
case 0x612cca:c.instructions+=2;goto B612cca;
case 0x612ccd:c.instructions+=1;goto B612ccd;
case 0x612ccf:goto L612ccf;
case 0x612cd4:c.instructions+=4;goto B612cd4;
case 0x612cd8:c.instructions+=3;goto B612cd8;
case 0x612cd9:c.instructions+=2;goto B612cd9;
case 0x612cdd:c.instructions+=1;goto B612cdd;
case 0x612cde:goto L612cde;
case 0x612ce3:goto L612ce3;
case 0x612ce7:c.instructions+=3;goto B612ce7;
case 0x612cea:c.instructions+=2;goto B612cea;
case 0x612ceb:c.instructions+=1;goto B612ceb;
case 0x612cf0:goto L612cf0;
case 0x612cf3:c.instructions+=3;goto B612cf3;
case 0x612cf4:c.instructions+=2;goto B612cf4;
case 0x612cf7:c.instructions+=1;goto B612cf7;
case 0x612cf8:goto L612cf8;
case 0x612cfd:c.instructions+=5;goto B612cfd;
case 0x612d01:c.instructions+=4;goto B612d01;
case 0x612d02:c.instructions+=3;goto B612d02;
case 0x612d06:c.instructions+=2;goto B612d06;
case 0x612d07:c.instructions+=1;goto B612d07;
case 0x612d10:goto L612d10;
case 0x612d11:c.instructions+=10;goto B612d11;
case 0x612d13:c.instructions+=9;goto B612d13;
case 0x612d16:c.instructions+=8;goto B612d16;
case 0x612d19:c.instructions+=7;goto B612d19;
case 0x612d1a:c.instructions+=6;goto B612d1a;
case 0x612d1b:c.instructions+=5;goto B612d1b;
case 0x612d1e:c.instructions+=4;goto B612d1e;
case 0x612d1f:c.instructions+=3;goto B612d1f;
case 0x612d21:c.instructions+=2;goto B612d21;
case 0x612d23:c.instructions+=1;goto B612d23;
case 0x612d28:goto L612d28;
case 0x612d2a:c.instructions+=3;goto B612d2a;
case 0x612d2c:c.instructions+=2;goto B612d2c;
case 0x612d30:c.instructions+=1;goto B612d30;
case 0x612d35:goto L612d35;
case 0x612d38:c.instructions+=5;goto B612d38;
case 0x612d3a:c.instructions+=4;goto B612d3a;
case 0x612d3c:c.instructions+=3;goto B612d3c;
case 0x612d3e:c.instructions+=2;goto B612d3e;
case 0x612d42:c.instructions+=1;goto B612d42;
case 0x612d47:goto L612d47;
case 0x612d49:c.instructions+=3;goto B612d49;
case 0x612d4b:c.instructions+=2;goto B612d4b;
case 0x612d4f:c.instructions+=1;goto B612d4f;
case 0x612d54:goto L612d54;
case 0x612d57:c.instructions+=5;goto B612d57;
case 0x612d59:c.instructions+=4;goto B612d59;
case 0x612d5b:c.instructions+=3;goto B612d5b;
case 0x612d5d:c.instructions+=2;goto B612d5d;
case 0x612d61:c.instructions+=1;goto B612d61;
case 0x612d66:goto L612d66;
case 0x612d68:c.instructions+=3;goto B612d68;
case 0x612d6a:c.instructions+=2;goto B612d6a;
case 0x612d6e:c.instructions+=1;goto B612d6e;
case 0x612d73:goto L612d73;
case 0x612d75:c.instructions+=3;goto B612d75;
case 0x612d76:c.instructions+=2;goto B612d76;
case 0x612d7a:c.instructions+=1;goto B612d7a;
case 0x612d7f:goto L612d7f;
case 0x612d80:c.instructions+=1;goto B612d80;
case 0x612d85:goto L612d85;
case 0x612d86:c.instructions+=1;goto B612d86;
case 0x612d8b:goto L612d8b;
case 0x612d8e:c.instructions+=3;goto B612d8e;
case 0x612d96:c.instructions+=2;goto B612d96;
case 0x612d98:c.instructions+=1;goto B612d98;
case 0x612da0:goto L612da0;
case 0x612da4:c.instructions+=7;goto B612da4;
case 0x612da6:c.instructions+=6;goto B612da6;
case 0x612dac:c.instructions+=5;goto B612dac;
case 0x612db2:c.instructions+=4;goto B612db2;
case 0x612db4:c.instructions+=3;goto B612db4;
case 0x612db8:c.instructions+=2;goto B612db8;
case 0x612dbc:c.instructions+=1;goto B612dbc;
case 0x612dc0:goto L612dc0;
case 0x612dc4:c.instructions+=7;goto B612dc4;
case 0x612dc7:c.instructions+=6;goto B612dc7;
case 0x612dca:c.instructions+=5;goto B612dca;
case 0x612dcb:c.instructions+=4;goto B612dcb;
case 0x612dcd:c.instructions+=3;goto B612dcd;
case 0x612dce:c.instructions+=2;goto B612dce;
case 0x612dd2:c.instructions+=1;goto B612dd2;
case 0x612dd7:goto L612dd7;
case 0x612dd9:c.instructions+=7;goto B612dd9;
case 0x612ddb:c.instructions+=6;goto B612ddb;
case 0x612ddf:c.instructions+=5;goto B612ddf;
case 0x612de3:c.instructions+=4;goto B612de3;
case 0x612de4:c.instructions+=3;goto B612de4;
case 0x612de8:c.instructions+=2;goto B612de8;
case 0x612de9:c.instructions+=1;goto B612de9;
case 0x612dee:goto L612dee;
case 0x612df0:c.instructions+=8;goto B612df0;
case 0x612df5:c.instructions+=7;goto B612df5;
case 0x612df7:c.instructions+=6;goto B612df7;
case 0x612dfa:c.instructions+=5;goto B612dfa;
case 0x612dfc:c.instructions+=4;goto B612dfc;
case 0x612dfd:c.instructions+=3;goto B612dfd;
case 0x612e00:c.instructions+=2;goto B612e00;
case 0x612e03:c.instructions+=1;goto B612e03;
case 0x612e05:goto L612e05;
case 0x612e09:c.instructions+=4;goto B612e09;
case 0x612e0a:c.instructions+=3;goto B612e0a;
case 0x612e0d:c.instructions+=2;goto B612e0d;
case 0x612e11:c.instructions+=1;goto B612e11;
case 0x612e13:goto L612e13;
case 0x612e17:c.instructions+=2;goto B612e17;
case 0x612e18:c.instructions+=1;goto B612e18;
case 0x612e1d:goto L612e1d;
case 0x612e21:c.instructions+=2;goto B612e21;
case 0x612e22:c.instructions+=1;goto B612e22;
case 0x612e27:goto L612e27;
case 0x612e2a:c.instructions+=4;goto B612e2a;
case 0x612e2b:c.instructions+=3;goto B612e2b;
case 0x612e2e:c.instructions+=2;goto B612e2e;
case 0x612e30:c.instructions+=1;goto B612e30;
case 0x612e35:goto L612e35;
case 0x612e38:c.instructions+=2;goto B612e38;
case 0x612e39:c.instructions+=1;goto B612e39;
case 0x612e3e:goto L612e3e;
case 0x612e42:c.instructions+=7;goto B612e42;
case 0x612e46:c.instructions+=6;goto B612e46;
case 0x612e4a:c.instructions+=5;goto B612e4a;
case 0x612e4d:c.instructions+=4;goto B612e4d;
case 0x612e4f:c.instructions+=3;goto B612e4f;
case 0x612e51:c.instructions+=2;goto B612e51;
case 0x612e53:c.instructions+=1;goto B612e53;
case 0x612e55:goto L612e55;
case 0x612e59:c.instructions+=6;goto B612e59;
case 0x612e5d:c.instructions+=5;goto B612e5d;
case 0x612e5f:c.instructions+=4;goto B612e5f;
case 0x612e61:c.instructions+=3;goto B612e61;
case 0x612e65:c.instructions+=2;goto B612e65;
case 0x612e69:c.instructions+=1;goto B612e69;
case 0x612e6b:goto L612e6b;
case 0x612e6f:c.instructions+=1;goto B612e6f;
case 0x612e73:goto L612e73;
case 0x612e77:c.instructions+=12;goto B612e77;
case 0x612e79:c.instructions+=11;goto B612e79;
case 0x612e7d:c.instructions+=10;goto B612e7d;
case 0x612e80:c.instructions+=9;goto B612e80;
case 0x612e82:c.instructions+=8;goto B612e82;
case 0x612e85:c.instructions+=7;goto B612e85;
case 0x612e88:c.instructions+=6;goto B612e88;
case 0x612e8b:c.instructions+=5;goto B612e8b;
case 0x612e8d:c.instructions+=4;goto B612e8d;
case 0x612e8f:c.instructions+=3;goto B612e8f;
case 0x612e90:c.instructions+=2;goto B612e90;
case 0x612e92:c.instructions+=1;goto B612e92;
case 0x612e94:goto L612e94;
case 0x612e97:goto L612e97;
case 0x612e9b:c.instructions+=2;goto B612e9b;
case 0x612e9c:c.instructions+=1;goto B612e9c;
case 0x612ea1:goto L612ea1;
case 0x612ea4:c.instructions+=4;goto B612ea4;
case 0x612ea5:c.instructions+=3;goto B612ea5;
case 0x612ea8:c.instructions+=2;goto B612ea8;
case 0x612eaa:c.instructions+=1;goto B612eaa;
case 0x612eaf:goto L612eaf;
case 0x612eb3:c.instructions+=3;goto B612eb3;
case 0x612eb4:c.instructions+=2;goto B612eb4;
case 0x612eb6:c.instructions+=1;goto B612eb6;
case 0x612ebb:goto L612ebb;
case 0x612ebf:c.instructions+=3;goto B612ebf;
case 0x612ec0:c.instructions+=2;goto B612ec0;
case 0x612ec3:c.instructions+=1;goto B612ec3;
case 0x612ec8:goto L612ec8;
case 0x612ec9:c.instructions+=2;goto B612ec9;
case 0x612ecb:c.instructions+=1;goto B612ecb;
case 0x612ed0:goto L612ed0;
case 0x612ed1:c.instructions+=6;goto B612ed1;
case 0x612ed2:c.instructions+=5;goto B612ed2;
case 0x612ed7:c.instructions+=4;goto B612ed7;
case 0x612ed8:c.instructions+=3;goto B612ed8;
case 0x612eda:c.instructions+=2;goto B612eda;
case 0x612edb:c.instructions+=1;goto B612edb;
case 0x612ee0:goto L612ee0;
case 0x612ee3:c.instructions+=6;goto B612ee3;
case 0x612ee4:c.instructions+=5;goto B612ee4;
case 0x612ee5:c.instructions+=4;goto B612ee5;
case 0x612ee9:c.instructions+=3;goto B612ee9;
case 0x612eea:c.instructions+=2;goto B612eea;
case 0x612eeb:c.instructions+=1;goto B612eeb;
case 0x612ef0:goto L612ef0;
case 0x612ef4:c.instructions+=5;goto B612ef4;
case 0x612ef7:c.instructions+=4;goto B612ef7;
case 0x612ef9:c.instructions+=3;goto B612ef9;
case 0x612efb:c.instructions+=2;goto B612efb;
case 0x612eff:c.instructions+=1;goto B612eff;
case 0x612f04:goto L612f04;
case 0x612f08:c.instructions+=3;goto B612f08;
case 0x612f0a:c.instructions+=2;goto B612f0a;
case 0x612f0c:c.instructions+=1;goto B612f0c;
case 0x612f11:goto L612f11;
case 0x612f15:c.instructions+=4;goto B612f15;
case 0x612f17:c.instructions+=3;goto B612f17;
case 0x612f19:c.instructions+=2;goto B612f19;
case 0x612f1d:c.instructions+=1;goto B612f1d;
case 0x612f22:goto L612f22;
case 0x612f26:c.instructions+=7;goto B612f26;
case 0x612f2a:c.instructions+=6;goto B612f2a;
case 0x612f2d:c.instructions+=5;goto B612f2d;
case 0x612f30:c.instructions+=4;goto B612f30;
case 0x612f32:c.instructions+=3;goto B612f32;
case 0x612f36:c.instructions+=2;goto B612f36;
case 0x612f3a:c.instructions+=1;goto B612f3a;
case 0x612f40:goto L612f40;
case 0x612f42:c.instructions+=6;goto B612f42;
case 0x612f44:c.instructions+=5;goto B612f44;
case 0x612f45:c.instructions+=4;goto B612f45;
case 0x612f47:c.instructions+=3;goto B612f47;
case 0x612f4b:c.instructions+=2;goto B612f4b;
case 0x612f4d:c.instructions+=1;goto B612f4d;
case 0x612f50:goto L612f50;
case 0x612f53:c.instructions+=2;goto B612f53;
case 0x612f58:c.instructions+=1;goto B612f58;
case 0x612f5a:goto L612f5a;
case 0x612f5d:c.instructions+=1;goto B612f5d;
case 0x612f5f:goto L612f5f;
case 0x612f61:c.instructions+=3;goto B612f61;
case 0x612f65:c.instructions+=2;goto B612f65;
case 0x612f69:c.instructions+=1;goto B612f69;
case 0x612f6b:goto L612f6b;
case 0x612f71:goto L612f71;
case 0x612f74:c.instructions+=8;goto B612f74;
case 0x612f7a:c.instructions+=7;goto B612f7a;
case 0x612f7e:c.instructions+=6;goto B612f7e;
case 0x612f7f:c.instructions+=5;goto B612f7f;
case 0x612f81:c.instructions+=4;goto B612f81;
case 0x612f85:c.instructions+=3;goto B612f85;
case 0x612f86:c.instructions+=2;goto B612f86;
case 0x612f8a:c.instructions+=1;goto B612f8a;
case 0x612f8f:goto L612f8f;
case 0x612f95:c.instructions+=12;goto B612f95;
case 0x612f99:c.instructions+=11;goto B612f99;
case 0x612f9d:c.instructions+=10;goto B612f9d;
case 0x612f9f:c.instructions+=9;goto B612f9f;
case 0x612fa3:c.instructions+=8;goto B612fa3;
case 0x612fa5:c.instructions+=7;goto B612fa5;
case 0x612fa9:c.instructions+=6;goto B612fa9;
case 0x612fad:c.instructions+=5;goto B612fad;
case 0x612fae:c.instructions+=4;goto B612fae;
case 0x612fb2:c.instructions+=3;goto B612fb2;
case 0x612fb3:c.instructions+=2;goto B612fb3;
case 0x612fb7:c.instructions+=1;goto B612fb7;
case 0x612fbc:goto L612fbc;
case 0x612fc0:c.instructions+=6;goto B612fc0;
case 0x612fc4:c.instructions+=5;goto B612fc4;
case 0x612fc6:c.instructions+=4;goto B612fc6;
case 0x612fcb:c.instructions+=3;goto B612fcb;
case 0x612fce:c.instructions+=2;goto B612fce;
case 0x612fd0:c.instructions+=1;goto B612fd0;
case 0x612fd4:goto L612fd4;
case 0x612fd6:c.instructions+=3;goto B612fd6;
case 0x612fd9:c.instructions+=2;goto B612fd9;
case 0x612fdb:c.instructions+=1;goto B612fdb;
case 0x612fe1:goto L612fe1;
case 0x612fe5:c.instructions+=2;goto B612fe5;
case 0x612fe9:c.instructions+=1;goto B612fe9;
case 0x612fea:goto L612fea;
case 0x612fee:c.instructions+=2;goto B612fee;
case 0x612fef:c.instructions+=1;goto B612fef;
case 0x612ff4:goto L612ff4;
case 0x612ff8:c.instructions+=2;goto B612ff8;
case 0x612ff9:c.instructions+=1;goto B612ff9;
case 0x612ffe:goto L612ffe;
case 0x612fff:c.instructions+=1;goto B612fff;
default:missing_instruction(c.pc);}
B612003:L612003:{c.instructions+=7;NFSU2_TR(0x612003);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x8a1d1cull))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+8),4);
s4(u32(r4(U+4)),r4(U+8));
}
B61200a:{NFSU2_TR(0x61200a);
u8 U[8];
w4(U+0,u32(u32(u32(0x5cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B61200e:{NFSU2_TR(0x61200e);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4ull))));
}
B612011:{NFSU2_TR(0x612011);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x4ull))));
}
B612014:{NFSU2_TR(0x612014);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w1(R+512,u8((r4(R+4))<(r4(U+0))));
}
B612016:{NFSU2_TR(0x612016);
u8 U[8];
w4(U+0,u32(u32(u32(0x5cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B61201a:{NFSU2_TR(0x61201a);
if(r1(R+512)){TAIL_STATIC(0x611fd4u,611);}
}
B61201c:L61201c:{c.instructions+=4;NFSU2_TR(0x61201c);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B612020:{NFSU2_TR(0x612020);
s4(0x8a1d18,u32(0x1ull));
}
B61202a:{NFSU2_TR(0x61202a);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B61202e:{NFSU2_TR(0x61202e);
w4(R+12,u32(0x7ull));
}
B612033:L612033:{c.instructions+=2;NFSU2_TR(0x612033);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B612034:{NFSU2_TR(0x612034);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x612039ull));
TAIL_STATIC(0x5be040u,5be);
}
B612039:L612039:{c.instructions+=5;NFSU2_TR(0x612039);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+28)),r4(U+0));
}
B61203b:{NFSU2_TR(0x61203b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B61203e:{NFSU2_TR(0x61203e);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x4ull))));
}
B612041:{NFSU2_TR(0x612041);
w4(R+12,u32(u32(r4(R+12))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+12))==(u32(0x0ull))));
}
B612042:{NFSU2_TR(0x612042);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x612033u);}goto L612033;}}
}
B612044:L612044:{c.instructions+=11;NFSU2_TR(0x612044);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B612048:{NFSU2_TR(0x612048);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B61204c:{NFSU2_TR(0x61204c);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(r4(R+24)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B61204f:{NFSU2_TR(0x61204f);
u8 U[5];
w4(U+0,u32(u32(u32(0x12ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B612054:{NFSU2_TR(0x612054);
u8 U[8];
w4(U+0,u32(u32(u32(0x5cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B612058:{NFSU2_TR(0x612058);
u8 U[5];
w4(U+0,u32(u32(u32(0x5eull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B61205c:{NFSU2_TR(0x61205c);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+20))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B612060:{NFSU2_TR(0x612060);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(R+20))<(r4(U+0))));
}
B612062:{NFSU2_TR(0x612062);
u8 U[5];
w4(U+0,u32(u32(u32(0x5cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B612066:{NFSU2_TR(0x612066);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B61206a:{NFSU2_TR(0x61206a);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L61207b;}}
}
B61206c:L61206c:{c.instructions+=6;NFSU2_TR(0x61206c);
u8 U[8];
w4(U+0,u32(u32(u32(0x5cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B612070:{NFSU2_TR(0x612070);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+20))));
}
B612072:{NFSU2_TR(0x612072);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
}
B612073:{NFSU2_TR(0x612073);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B612076:{NFSU2_TR(0x612076);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B612077:{NFSU2_TR(0x612077);
__builtin_memmove((R+28),(R+20),4);
}
B612079:L612079:{c.instructions+=1;NFSU2_TR(0x612079);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L61207b;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x612079u);}goto L612079;}
}
B61207b:L61207b:{c.instructions+=3;NFSU2_TR(0x61207b);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B61207f:{NFSU2_TR(0x61207f);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B612081:{NFSU2_TR(0x612081);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L61221b;}}
}
B612087:L612087:{c.instructions+=3;NFSU2_TR(0x612087);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B61208b:{NFSU2_TR(0x61208b);
u8 U[8];
w4(U+0,u32(u32(u32(0x5cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B61208f:{NFSU2_TR(0x61208f);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B612093:L612093:{c.instructions+=2;NFSU2_TR(0x612093);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B612096:{NFSU2_TR(0x612096);
if(r1(R+518)){{goto L612205;}}
}
B61209c:L61209c:{c.instructions+=4;NFSU2_TR(0x61209c);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B61209f:{NFSU2_TR(0x61209f);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6120a1:{NFSU2_TR(0x6120a1);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x24ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6120a4:{NFSU2_TR(0x6120a4);
if(r1(R+518)){{goto L6120c5;}}
}
B6120a6:L6120a6:{c.instructions+=2;NFSU2_TR(0x6120a6);
w4(R+28,u32(0x4ull));
}
B6120ab:{NFSU2_TR(0x6120ab);
{goto L6120b0;}
}
B6120b0:L6120b0:{c.instructions+=2;NFSU2_TR(0x6120b0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6120b1:{NFSU2_TR(0x6120b1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6120b6ull));
TAIL_STATIC(0x5be040u,5be);
}
B6120b6:L6120b6:{c.instructions+=5;NFSU2_TR(0x6120b6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+24)),r4(U+0));
}
B6120b8:{NFSU2_TR(0x6120b8);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6120bb:{NFSU2_TR(0x6120bb);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x4ull))));
}
B6120be:{NFSU2_TR(0x6120be);
w4(R+28,u32(u32(r4(R+28))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+28))==(u32(0x0ull))));
}
B6120bf:{NFSU2_TR(0x6120bf);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6120b0u);}goto L6120b0;}}
}
B6120c1:L6120c1:{c.instructions+=1;NFSU2_TR(0x6120c1);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6120c5:L6120c5:{c.instructions+=7;NFSU2_TR(0x6120c5);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6120c8:{NFSU2_TR(0x6120c8);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B6120cb:{NFSU2_TR(0x6120cb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(R+24))<(r4(U+0))));
}
B6120cd:{NFSU2_TR(0x6120cd);
__builtin_memmove((R+28),(R+20),4);
}
B6120cf:{NFSU2_TR(0x6120cf);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B6120d2:{NFSU2_TR(0x6120d2);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6120d6:{NFSU2_TR(0x6120d6);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L612201;}}
}
B6120dc:L6120dc:{c.instructions+=1;NFSU2_TR(0x6120dc);
__builtin_memmove((R+16),(R+16),4);
}
B6120e0:L6120e0:{c.instructions+=7;NFSU2_TR(0x6120e0);
u8 U[8];
w4(U+0,u32(u32(u32(0x5cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6120e4:{NFSU2_TR(0x6120e4);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6120e7:{NFSU2_TR(0x6120e7);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6120e9:{NFSU2_TR(0x6120e9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6120eb:{NFSU2_TR(0x6120eb);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+12,u32(r1(U+4)));
}
B6120ef:{NFSU2_TR(0x6120ef);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6120f3:{NFSU2_TR(0x6120f3);
if(r1(R+518)){{goto L612161;}}
}
B6120f5:L6120f5:{c.instructions+=2;NFSU2_TR(0x6120f5);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6120f7:{NFSU2_TR(0x6120f7);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L612161;}}
}
B6120f9:L6120f9:{c.instructions+=27;NFSU2_TR(0x6120f9);
__builtin_memmove((R+8),(R+0),4);
}
B6120fb:{NFSU2_TR(0x6120fb);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))&u32(u32(0x1full))));
w4(R+8,shr<u32>(r4(R+8),u64(r4(U+0))));
}
B6120fe:{NFSU2_TR(0x6120fe);
w4(R+8,u32(r1(R+8)));
}
B612101:{NFSU2_TR(0x612101);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B612105:{NFSU2_TR(0x612105);
w4(R+4,u32(r1(R+0)));
}
B612108:{NFSU2_TR(0x612108);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B61210c:{NFSU2_TR(0x61210c);
w4(R+0,u32(r1(R+1)));
}
B61210f:{NFSU2_TR(0x61210f);
{u32 ea_=u32(u32(7882056u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B612115:{NFSU2_TR(0x612115);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B612119:{NFSU2_TR(0x612119);
u8 U[8];
w4(U+0,u32(u32(u32(0x5cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B61211d:{NFSU2_TR(0x61211d);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B612121:{NFSU2_TR(0x612121);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B612125:{NFSU2_TR(0x612125);
w4(R+4,u32(r1(R+4)));
}
B612128:{NFSU2_TR(0x612128);
{u32 ea_=u32(u32(7882056u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61212e:{NFSU2_TR(0x61212e);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B612132:{NFSU2_TR(0x612132);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B612134:{NFSU2_TR(0x612134);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B612136:{NFSU2_TR(0x612136);
{u32 ea_=u32(r4(R+16)+u32(72u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B61213a:{NFSU2_TR(0x61213a);
u8 U[4];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B61213e:{NFSU2_TR(0x61213e);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B612142:{NFSU2_TR(0x612142);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B612143:{NFSU2_TR(0x612143);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
}
B612146:{NFSU2_TR(0x612146);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B612147:{NFSU2_TR(0x612147);
{u32 ea_=u32(u32(7882056u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61214d:{NFSU2_TR(0x61214d);
u8 U[8];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B612155:{NFSU2_TR(0x612155);
{u32 ea_=u32(r4(R+16)+u32(84u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B612159:{NFSU2_TR(0x612159);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x61215eull));
TAIL_STATIC(0x611b00u,611);
}
B61215e:L61215e:{c.instructions+=1;NFSU2_TR(0x61215e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B612161:L612161:{c.instructions+=2;NFSU2_TR(0x612161);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+512,u8((r4(U+0))<(u32(0x7full))));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x7full))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B612164:{NFSU2_TR(0x612164);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L6121e2;}}
}
B612166:L612166:{c.instructions+=2;NFSU2_TR(0x612166);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B612168:{NFSU2_TR(0x612168);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6121e4;}}
}
B61216a:L61216a:{c.instructions+=6;NFSU2_TR(0x61216a);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B61216e:{NFSU2_TR(0x61216e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B612170:{NFSU2_TR(0x612170);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B612174:{NFSU2_TR(0x612174);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B612178:{NFSU2_TR(0x612178);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B61217c:{NFSU2_TR(0x61217c);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L612184;}}
}
B61217e:L61217e:{c.instructions+=1;NFSU2_TR(0x61217e);
{u32 ea_=u32(u32(7882060u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B612184:L612184:{c.instructions+=11;NFSU2_TR(0x612184);
{u32 ea_=u32(u32(7895792u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61218a:{NFSU2_TR(0x61218a);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B61218c:{NFSU2_TR(0x61218c);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B612190:{NFSU2_TR(0x612190);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B612196:{NFSU2_TR(0x612196);
__asm__ volatile(".byte 0xd8,0xe2":::"memory");
}
B612198:{NFSU2_TR(0x612198);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B61219c:{NFSU2_TR(0x61219c);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B6121a2:{NFSU2_TR(0x6121a2);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B6121a4:{NFSU2_TR(0x6121a4);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B6121a6:{NFSU2_TR(0x6121a6);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6121a9:{NFSU2_TR(0x6121a9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6121b3;}}
}
B6121ab:L6121ab:{c.instructions+=1;NFSU2_TR(0x6121ab);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6121b3:L6121b3:{c.instructions+=5;NFSU2_TR(0x6121b3);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6121b7:{NFSU2_TR(0x6121b7);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B6121bd:{NFSU2_TR(0x6121bd);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B6121bf:{NFSU2_TR(0x6121bf);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B6121c2:{NFSU2_TR(0x6121c2);
if(r1(R+514)){{goto L6121cc;}}
}
B6121c4:L6121c4:{c.instructions+=1;NFSU2_TR(0x6121c4);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6121cc:L6121cc:{c.instructions+=7;NFSU2_TR(0x6121cc);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6121ce:{NFSU2_TR(0x6121ce);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6121d0:{NFSU2_TR(0x6121d0);
u8 U[4];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B6121d4:{NFSU2_TR(0x6121d4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6121d5:{NFSU2_TR(0x6121d5);
u8 U[4];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B6121d9:{NFSU2_TR(0x6121d9);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6121da:{NFSU2_TR(0x6121da);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6121dfull));
TAIL_STATIC(0x611b00u,611);
}
B6121df:L6121df:{c.instructions+=1;NFSU2_TR(0x6121df);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B6121e2:L6121e2:{c.instructions+=1;NFSU2_TR(0x6121e2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+28)),r4(U+0));
}
B6121e4:L6121e4:{c.instructions+=6;NFSU2_TR(0x6121e4);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6121e8:{NFSU2_TR(0x6121e8);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x4ull))));
}
B6121eb:{NFSU2_TR(0x6121eb);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x4ull))));
}
B6121ee:{NFSU2_TR(0x6121ee);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x4ull))));
}
B6121f1:{NFSU2_TR(0x6121f1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(R+24))<(r4(U+0))));
}
B6121f3:{NFSU2_TR(0x6121f3);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6120e0u);}goto L6120e0;}}
}
B6121f9:L6121f9:{c.instructions+=2;NFSU2_TR(0x6121f9);
u8 U[8];
w4(U+0,u32(u32(u32(0x5cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6121fd:{NFSU2_TR(0x6121fd);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B612201:L612201:{c.instructions+=1;NFSU2_TR(0x612201);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B612205:L612205:{c.instructions+=6;NFSU2_TR(0x612205);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B612209:{NFSU2_TR(0x612209);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x34ull))));
}
B61220c:{NFSU2_TR(0x61220c);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B61220d:{NFSU2_TR(0x61220d);
u8 U[8];
w4(U+0,u32(u32(u32(0x5cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B612211:{NFSU2_TR(0x612211);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B612215:{NFSU2_TR(0x612215);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x612093u);}goto L612093;}}
}
B61221b:L61221b:{c.instructions+=6;NFSU2_TR(0x61221b);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B61221f:{NFSU2_TR(0x61221f);
w4(R+8,u32(0x8a05e8ull));
}
B612224:{NFSU2_TR(0x612224);
w4(R+0,u32(0x8a1d1cull));
}
B612229:{NFSU2_TR(0x612229);
u8 U[8];
w4(U+0,u32(u32(u32(0x5cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B61222d:{NFSU2_TR(0x61222d);
w4(R+24,u32(u32(r4(R+24))-u32(r4(R+0))));
}
B61222f:{NFSU2_TR(0x61222f);
}
B612230:L612230:{c.instructions+=4;NFSU2_TR(0x612230);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+28),(U+0),4);
}
B612232:{NFSU2_TR(0x612232);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B612234:{NFSU2_TR(0x612234);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B612236:{NFSU2_TR(0x612236);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L612253;}}
}
B612238:L612238:{c.instructions+=1;NFSU2_TR(0x612238);
{goto L612240;}
}
B612240:L612240:{c.instructions+=8;NFSU2_TR(0x612240);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+28),(U+0),4);
}
B612242:{NFSU2_TR(0x612242);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+12),(U+8),4);
}
B612245:{NFSU2_TR(0x612245);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+20))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+12),4);
s4(u32(r4(U+4)),r4(U+8));
}
B612249:{NFSU2_TR(0x612249);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+28),(U+0),4);
}
B61224b:{NFSU2_TR(0x61224b);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B61224c:{NFSU2_TR(0x61224c);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x4ull))));
}
B61224f:{NFSU2_TR(0x61224f);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B612251:{NFSU2_TR(0x612251);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x612240u);}goto L612240;}}
}
B612253:L612253:{c.instructions+=6;NFSU2_TR(0x612253);
u8 U[8];
w4(U+0,u32(u32(u32(0x5cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B612257:{NFSU2_TR(0x612257);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B61225a:{NFSU2_TR(0x61225a);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x40ull))));
}
B61225d:{NFSU2_TR(0x61225d);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0x8a1d38ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x8a1d38ull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0x8a1d38ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B612262:{NFSU2_TR(0x612262);
u8 U[8];
w4(U+0,u32(u32(u32(0x5cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B612266:{NFSU2_TR(0x612266);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x612230u);}goto L612230;}}
}
B612268:L612268:{c.instructions+=3;NFSU2_TR(0x612268);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B61226c:{NFSU2_TR(0x61226c);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61226d:{NFSU2_TR(0x61226d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x612272ull));
TAIL_STATIC(0x5b96d0u,5b9);
}
B612272:L612272:{c.instructions+=7;NFSU2_TR(0x612272);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B612273:{NFSU2_TR(0x612273);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B612274:{NFSU2_TR(0x612274);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B612275:{NFSU2_TR(0x612275);
w4(R+0,u32(0x1ull));
}
B61227a:{NFSU2_TR(0x61227a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B61227b:{NFSU2_TR(0x61227b);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x48ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x48ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x48ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B61227e:{NFSU2_TR(0x61227e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B612280:L612280:{c.instructions+=11;NFSU2_TR(0x612280);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xc8ull))));
}
B612286:{NFSU2_TR(0x612286);
u8 U[8];
w4(U+0,u32(u32(u32(0xccull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B61228d:{NFSU2_TR(0x61228d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B612290:{NFSU2_TR(0x612290);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1c4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B612296:{NFSU2_TR(0x612296);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B612297:{NFSU2_TR(0x612297);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+24),(U+0),4);
}
B612299:{NFSU2_TR(0x612299);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B61229b:{NFSU2_TR(0x61229b);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B61229f:{NFSU2_TR(0x61229f);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6122a3:{NFSU2_TR(0x6122a3);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6122a7:{NFSU2_TR(0x6122a7);
if(r1(R+518)){{goto L6122af;}}
}
B6122a9:L6122a9:{c.instructions+=2;NFSU2_TR(0x6122a9);
u8 U[7];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4aull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x8ull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B6122ad:{NFSU2_TR(0x6122ad);
if(r1(R+518)){{goto L6122b9;}}
}
B6122af:L6122af:{c.instructions+=4;NFSU2_TR(0x6122af);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6122b1:{NFSU2_TR(0x6122b1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6122b2:{NFSU2_TR(0x6122b2);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0xc8ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0xc8ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xc8ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6122b8:{NFSU2_TR(0x6122b8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6122b9:L6122b9:{c.instructions+=6;NFSU2_TR(0x6122b9);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6122ba:{NFSU2_TR(0x6122ba);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6122bb:{NFSU2_TR(0x6122bb);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6122bc:{NFSU2_TR(0x6122bc);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6122be:{NFSU2_TR(0x6122be);
__builtin_memmove((R+4),(R+24),4);
}
B6122c0:{NFSU2_TR(0x6122c0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6122c5ull));
TAIL_STATIC(0x5b96a0u,5b9);
}
B6122c5:L6122c5:{c.instructions+=5;NFSU2_TR(0x6122c5);
__builtin_memmove((R+28),(R+0),4);
}
B6122c7:{NFSU2_TR(0x6122c7);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6122c9:{NFSU2_TR(0x6122c9);
__builtin_memmove((R+4),(R+24),4);
}
B6122cb:{NFSU2_TR(0x6122cb);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6122cf:{NFSU2_TR(0x6122cf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6122d4ull));
TAIL_STATIC(0x5b96e0u,5b9);
}
B6122d4:L6122d4:{c.instructions+=3;NFSU2_TR(0x6122d4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6122d5:{NFSU2_TR(0x6122d5);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6122d9:{NFSU2_TR(0x6122d9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6122deull));
TAIL_STATIC(0x4022c0u,402);
}
B6122de:L6122de:{c.instructions+=5;NFSU2_TR(0x6122de);
__builtin_memmove((R+0),gp(0x803680),4);
}
B6122e3:{NFSU2_TR(0x6122e3);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+12,u32(s32(s16(r2(U+4)))));
}
B6122e7:{NFSU2_TR(0x6122e7);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x46ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+20,u32(s32(s16(r2(U+4)))));
}
B6122eb:{NFSU2_TR(0x6122eb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6122ec:{NFSU2_TR(0x6122ec);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6122f1ull));
TAIL_STATIC(0x43e910u,43e);
}
B6122f1:L6122f1:{c.instructions+=3;NFSU2_TR(0x6122f1);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B6122f4:{NFSU2_TR(0x6122f4);
u8 U[4];
w1(R+523,sborrow<u32>(r4(R+0),u32(0x60100ull)));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x60100ull))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6122f9:{NFSU2_TR(0x6122f9);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L612323;}}
}
B6122fb:L6122fb:{c.instructions+=6;NFSU2_TR(0x6122fb);
__builtin_memmove((R+0),gp(0x803680),4);
}
B612300:{NFSU2_TR(0x612300);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x7ull))));
}
B612303:{NFSU2_TR(0x612303);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0x8ull))));
}
B612306:{NFSU2_TR(0x612306);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B612307:{NFSU2_TR(0x612307);
u8 U[4];
w4(U+0,u32(0x30000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61230c:{NFSU2_TR(0x61230c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x612311ull));
TAIL_STATIC(0x440820u,440);
}
B612311:L612311:{c.instructions+=6;NFSU2_TR(0x612311);
u8 U[8];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B612315:{NFSU2_TR(0x612315);
__builtin_memmove((R+0),gp(0x803680),4);
}
B61231a:{NFSU2_TR(0x61231a);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x7ull))));
}
B61231d:{NFSU2_TR(0x61231d);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0x8ull))));
}
B612320:{NFSU2_TR(0x612320);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B612321:{NFSU2_TR(0x612321);
{goto L61234a;}
}
B612323:L612323:{c.instructions+=2;NFSU2_TR(0x612323);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B612325:{NFSU2_TR(0x612325);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x61232aull));
TAIL_STATIC(0x43e910u,43e);
}
B61232a:L61232a:{c.instructions+=3;NFSU2_TR(0x61232a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B61232d:{NFSU2_TR(0x61232d);
u8 U[4];
w1(R+523,sborrow<u32>(r4(R+0),u32(0x60100ull)));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x60100ull))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B612332:{NFSU2_TR(0x612332);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L612b56;}}
}
B612338:L612338:{c.instructions+=3;NFSU2_TR(0x612338);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61233a:{NFSU2_TR(0x61233a);
u8 U[4];
w4(U+0,u32(0x30000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61233f:{NFSU2_TR(0x61233f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x612344ull));
TAIL_STATIC(0x440820u,440);
}
B612344:L612344:{c.instructions+=2;NFSU2_TR(0x612344);
u8 U[8];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B612348:{NFSU2_TR(0x612348);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61234a:L61234a:{c.instructions+=2;NFSU2_TR(0x61234a);
u8 U[4];
w4(U+0,u32(0x30000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61234f:{NFSU2_TR(0x61234f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x612354ull));
TAIL_STATIC(0x440820u,440);
}
B612354:L612354:{c.instructions+=13;NFSU2_TR(0x612354);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(s32(s16(r2(U+4)))));
}
B612358:{NFSU2_TR(0x612358);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B61235c:{NFSU2_TR(0x61235c);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x46ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(s32(s16(r2(U+4)))));
}
B612360:{NFSU2_TR(0x612360);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(r4(R+4)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B612363:{NFSU2_TR(0x612363);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+28))));
}
B612365:{NFSU2_TR(0x612365);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B612369:{NFSU2_TR(0x612369);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B61236d:{NFSU2_TR(0x61236d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B612370:{NFSU2_TR(0x612370);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B612372:{NFSU2_TR(0x612372);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B612374:{NFSU2_TR(0x612374);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B61237c:{NFSU2_TR(0x61237c);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B612380:{NFSU2_TR(0x612380);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L6123cb;}}
}
B612382:L612382:{c.instructions+=3;NFSU2_TR(0x612382);
u8 U[8];
w4(U+0,u32(u32(u32(0xdcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B612389:{NFSU2_TR(0x612389);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x3cull))));
}
B61238c:{NFSU2_TR(0x61238c);
__builtin_memmove((R+16),(R+16),4);
}
B612390:L612390:{c.instructions+=3;NFSU2_TR(0x612390);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B612393:{NFSU2_TR(0x612393);
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
B612395:{NFSU2_TR(0x612395);
if(r1(R+518)){{goto L6123bf;}}
}
B612397:L612397:{c.instructions+=3;NFSU2_TR(0x612397);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B61239a:{NFSU2_TR(0x61239a);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61239b:{NFSU2_TR(0x61239b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6123a0ull));
TAIL_STATIC(0x4022c0u,402);
}
B6123a0:L6123a0:{c.instructions+=3;NFSU2_TR(0x6123a0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6123a2:{NFSU2_TR(0x6123a2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6123a3:{NFSU2_TR(0x6123a3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6123a8ull));
TAIL_STATIC(0x4022c0u,402);
}
B6123a8:L6123a8:{c.instructions+=5;NFSU2_TR(0x6123a8);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6123ab:{NFSU2_TR(0x6123ab);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6123ae:{NFSU2_TR(0x6123ae);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B6123b1:{NFSU2_TR(0x6123b1);
u8 U[16];
w4(U+0,u32(u32(u32(0xb8ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+4),4);
s4(u32(r4(U+8)),r4(U+12));
}
B6123b8:{NFSU2_TR(0x6123b8);
u8 U[16];
w4(U+0,u32(u32(u32(0x98ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+8),4);
s4(u32(r4(U+8)),r4(U+12));
}
B6123bf:L6123bf:{c.instructions+=5;NFSU2_TR(0x6123bf);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6123c3:{NFSU2_TR(0x6123c3);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B6123c4:{NFSU2_TR(0x6123c4);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x34ull))));
}
B6123c7:{NFSU2_TR(0x6123c7);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6123c9:{NFSU2_TR(0x6123c9);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x612390u);}goto L612390;}}
}
B6123cb:L6123cb:{c.instructions+=3;NFSU2_TR(0x6123cb);
__builtin_memmove((R+0),gp(0x8a1d18),4);
}
B6123d0:{NFSU2_TR(0x6123d0);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6123d2:{NFSU2_TR(0x6123d2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L612536;}}
}
B6123d8:L6123d8:{c.instructions+=19;NFSU2_TR(0x6123d8);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6123dc:{NFSU2_TR(0x6123dc);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0xffffffffull))));
}
B6123df:{NFSU2_TR(0x6123df);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x8ull))));
}
B6123e2:{NFSU2_TR(0x6123e2);
u8 U[8];
w4(U+0,u32(u32(u32(0x7cull))+u32(r4(R+16))));
w4(U+4,u32(0xbf0000ffull));
s4(u32(r4(U+0)),r4(U+4));
}
B6123ea:{NFSU2_TR(0x6123ea);
u8 U[8];
w4(U+0,u32(u32(u32(0x80ull))+u32(r4(R+16))));
w4(U+4,u32(0xbf00ff00ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6123f5:{NFSU2_TR(0x6123f5);
u8 U[8];
w4(U+0,u32(u32(u32(0x84ull))+u32(r4(R+16))));
w4(U+4,u32(0xbfff0000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B612400:{NFSU2_TR(0x612400);
u8 U[8];
w4(U+0,u32(u32(u32(0x88ull))+u32(r4(R+16))));
w4(U+4,u32(0xbfff00ffull));
s4(u32(r4(U+0)),r4(U+4));
}
B61240b:{NFSU2_TR(0x61240b);
u8 U[8];
w4(U+0,u32(u32(u32(0x8cull))+u32(r4(R+16))));
w4(U+4,u32(0xbfffff00ull));
s4(u32(r4(U+0)),r4(U+4));
}
B612416:{NFSU2_TR(0x612416);
u8 U[8];
w4(U+0,u32(u32(u32(0x90ull))+u32(r4(R+16))));
w4(U+4,u32(0xbf00ffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B612421:{NFSU2_TR(0x612421);
u8 U[8];
w4(U+0,u32(u32(u32(0x94ull))+u32(r4(R+16))));
w4(U+4,u32(0xbfffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B61242c:{NFSU2_TR(0x61242c);
u8 U[8];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B612430:{NFSU2_TR(0x612430);
u8 U[8];
w4(U+0,u32(u32(u32(0x5cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B612434:{NFSU2_TR(0x612434);
u8 U[8];
w4(U+0,u32(u32(u32(0x60ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B612438:{NFSU2_TR(0x612438);
u8 U[8];
w4(U+0,u32(u32(u32(0x64ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B61243c:{NFSU2_TR(0x61243c);
u8 U[8];
w4(U+0,u32(u32(u32(0x68ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B612440:{NFSU2_TR(0x612440);
u8 U[8];
w4(U+0,u32(u32(u32(0x6cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B612444:{NFSU2_TR(0x612444);
u8 U[8];
w4(U+0,u32(u32(u32(0x70ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B612448:{NFSU2_TR(0x612448);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B61244a:{NFSU2_TR(0x61244a);
__builtin_memmove((R+12),(R+12),4);
}
B612450:L612450:{c.instructions+=3;NFSU2_TR(0x612450);
u8 U[16];
w4(U+0,u32(u32(u32(0x7cull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+4),(U+12),4);
}
B612454:{NFSU2_TR(0x612454);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B612456:{NFSU2_TR(0x612456);
__builtin_memmove((R+0),(R+28),4);
}
B612458:L612458:{c.instructions+=2;NFSU2_TR(0x612458);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+4))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B61245b:{NFSU2_TR(0x61245b);
if(r1(R+518)){{goto L6124ae;}}
}
B61245d:L61245d:{c.instructions+=2;NFSU2_TR(0x61245d);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+4))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B612460:{NFSU2_TR(0x612460);
if(r1(R+518)){{goto L61248f;}}
}
B612462:L612462:{c.instructions+=2;NFSU2_TR(0x612462);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(r4(R+4))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B612464:{NFSU2_TR(0x612464);
if(r1(R+518)){{goto L612492;}}
}
B612466:L612466:{c.instructions+=2;NFSU2_TR(0x612466);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+4))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B612469:{NFSU2_TR(0x612469);
if(r1(R+518)){{goto L612497;}}
}
B61246b:L61246b:{c.instructions+=2;NFSU2_TR(0x61246b);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+4))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B61246e:{NFSU2_TR(0x61246e);
if(r1(R+518)){{goto L61249c;}}
}
B612470:L612470:{c.instructions+=2;NFSU2_TR(0x612470);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+4))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B612473:{NFSU2_TR(0x612473);
if(r1(R+518)){{goto L6124a1;}}
}
B612475:L612475:{c.instructions+=2;NFSU2_TR(0x612475);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+4))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B612478:{NFSU2_TR(0x612478);
if(r1(R+518)){{goto L6124a6;}}
}
B61247a:L61247a:{c.instructions+=2;NFSU2_TR(0x61247a);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+4))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B61247d:{NFSU2_TR(0x61247d);
if(r1(R+518)){{goto L6124ab;}}
}
B61247f:L61247f:{c.instructions+=4;NFSU2_TR(0x61247f);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x8ull))));
}
B612482:{NFSU2_TR(0x612482);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
}
B612485:{NFSU2_TR(0x612485);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x100ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x100ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B61248b:{NFSU2_TR(0x61248b);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x612458u);}goto L612458;}}
}
B61248d:L61248d:{c.instructions+=1;NFSU2_TR(0x61248d);
{goto L6124ae;}
}
B61248f:L61248f:{c.instructions+=2;NFSU2_TR(0x61248f);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B612490:{NFSU2_TR(0x612490);
{goto L6124ae;}
}
B612492:L612492:{c.instructions+=2;NFSU2_TR(0x612492);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x2ull))));
}
B612495:{NFSU2_TR(0x612495);
{goto L6124ae;}
}
B612497:L612497:{c.instructions+=2;NFSU2_TR(0x612497);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x3ull))));
}
B61249a:{NFSU2_TR(0x61249a);
{goto L6124ae;}
}
B61249c:L61249c:{c.instructions+=2;NFSU2_TR(0x61249c);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x4ull))));
}
B61249f:{NFSU2_TR(0x61249f);
{goto L6124ae;}
}
B6124a1:L6124a1:{c.instructions+=2;NFSU2_TR(0x6124a1);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x5ull))));
}
B6124a4:{NFSU2_TR(0x6124a4);
{goto L6124ae;}
}
B6124a6:L6124a6:{c.instructions+=2;NFSU2_TR(0x6124a6);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x6ull))));
}
B6124a9:{NFSU2_TR(0x6124a9);
{goto L6124ae;}
}
B6124ab:L6124ab:{c.instructions+=1;NFSU2_TR(0x6124ab);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x7ull))));
}
B6124ae:L6124ae:{c.instructions+=2;NFSU2_TR(0x6124ae);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x100ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6124b4:{NFSU2_TR(0x6124b4);
if(r1(R+518)){{goto L6124ba;}}
}
B6124b6:L6124b6:{c.instructions+=1;NFSU2_TR(0x6124b6);
u8 U[16];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+8),4);
s4(u32(r4(U+8)),r4(U+12));
}
B6124ba:L6124ba:{c.instructions+=3;NFSU2_TR(0x6124ba);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x4ull))));
}
B6124bd:{NFSU2_TR(0x6124bd);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x1cull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1cull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6124c0:{NFSU2_TR(0x6124c0);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x612450u);}goto L612450;}}
}
B6124c2:L6124c2:{c.instructions+=4;NFSU2_TR(0x6124c2);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B6124c6:{NFSU2_TR(0x6124c6);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6124c8:{NFSU2_TR(0x6124c8);
w4(R+4,u32(0x40ull));
}
B6124cd:{NFSU2_TR(0x6124cd);
w4(R+28,u32(0x8a05e8ull));
}
B6124d2:L6124d2:{c.instructions+=1;NFSU2_TR(0x6124d2);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L6124d4;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6124d2u);}goto L6124d2;}
}
B6124d4:L6124d4:{c.instructions+=3;NFSU2_TR(0x6124d4);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6124d8:{NFSU2_TR(0x6124d8);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w1(R+512,u8((r4(R+28))<(r4(U+0))));
}
B6124da:{NFSU2_TR(0x6124da);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L612526;}}
}
B6124dc:L6124dc:{c.instructions+=2;NFSU2_TR(0x6124dc);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6124e0:{NFSU2_TR(0x6124e0);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B6124e2:L6124e2:{c.instructions+=2;NFSU2_TR(0x6124e2);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
w4(R+4,u32(r1(U+0)));
}
B6124e5:{NFSU2_TR(0x6124e5);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6124e7:L6124e7:{c.instructions+=2;NFSU2_TR(0x6124e7);
u8 U[24];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((U+16),(U+12),4);
w4(U+20,u32(u32(r4(R+4))-u32(r4(U+16))));
w1(R+518,u8((r4(U+20))==(u32(0x0ull))));
}
B6124eb:{NFSU2_TR(0x6124eb);
if(r1(R+518)){{goto L6124f5;}}
}
B6124ed:L6124ed:{c.instructions+=3;NFSU2_TR(0x6124ed);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6124ee:{NFSU2_TR(0x6124ee);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x7ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x7ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6124f1:{NFSU2_TR(0x6124f1);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6124e7u);}goto L6124e7;}}
}
B6124f3:L6124f3:{c.instructions+=1;NFSU2_TR(0x6124f3);
{goto L612518;}
}
B6124f5:L6124f5:{c.instructions+=10;NFSU2_TR(0x6124f5);
__builtin_memmove((R+4),(R+0),1);
}
B6124f7:{NFSU2_TR(0x6124f7);
w1(R+4,u8(u32(r1(R+4))+u32(u8(0x1ull))));
}
B6124f9:{NFSU2_TR(0x6124f9);
u8 U[1];
__builtin_memmove((U+0),(R+4),1);
s1(u32(r4(R+24)),r1(U+0));
}
B6124fb:{NFSU2_TR(0x6124fb);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x8a1d1cull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B612502:{NFSU2_TR(0x612502);
__builtin_memmove((R+12),(R+0),4);
}
B612504:{NFSU2_TR(0x612504);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+12,shl<u32>(r4(R+12),u64(r4(U+0))));
}
B612507:{NFSU2_TR(0x612507);
w4(R+12,u32(u32(r4(R+12))+u32(r4(R+4))));
}
B612509:{NFSU2_TR(0x612509);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B61250a:{NFSU2_TR(0x61250a);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x8a05e8ull))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+8),4);
s4(u32(r4(U+4)),r4(U+8));
}
B612511:{NFSU2_TR(0x612511);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x8a1d1cull))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4),4);
s4(u32(r4(U+4)),r4(U+8));
}
B612518:L612518:{c.instructions+=2;NFSU2_TR(0x612518);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x7ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B61251b:{NFSU2_TR(0x61251b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L612520;}}
}
B61251d:L61251d:{c.instructions+=1;NFSU2_TR(0x61251d);
u8 U[1];
w1(U+0,u8(0x0ull));
s1(u32(r4(R+24)),r1(U+0));
}
B612520:L612520:{c.instructions+=4;NFSU2_TR(0x612520);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B612521:{NFSU2_TR(0x612521);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B612522:{NFSU2_TR(0x612522);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w1(R+512,u8((r4(R+24))<(r4(U+0))));
}
B612524:{NFSU2_TR(0x612524);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6124e2u);}goto L6124e2;}}
}
B612526:L612526:{c.instructions+=3;NFSU2_TR(0x612526);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B61252a:{NFSU2_TR(0x61252a);
s4(0x8a1d18,u32(0x1ull));
}
B612534:{NFSU2_TR(0x612534);
{goto L612553;}
}
B612536:L612536:{c.instructions+=6;NFSU2_TR(0x612536);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B61253a:{NFSU2_TR(0x61253a);
__builtin_memmove((R+4),(R+20),4);
}
B61253c:{NFSU2_TR(0x61253c);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(r4(R+12)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B61253f:{NFSU2_TR(0x61253f);
__builtin_memmove((R+8),(R+4),4);
}
B612541:{NFSU2_TR(0x612541);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B612544:{NFSU2_TR(0x612544);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B612546:L612546:{c.instructions+=1;NFSU2_TR(0x612546);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L612548;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x612546u);}goto L612546;}
}
B612548:L612548:{c.instructions+=2;NFSU2_TR(0x612548);
__builtin_memmove((R+4),(R+8),4);
}
B61254a:{NFSU2_TR(0x61254a);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B61254d:L61254d:{c.instructions+=1;NFSU2_TR(0x61254d);
u8 U[18];
w1(U+17,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+17)){{goto L61254f;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x1ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x2ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),1);
s1(u32(r4(U+0)),r1(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x61254du);}goto L61254d;}
}
B61254f:L61254f:{c.instructions+=1;NFSU2_TR(0x61254f);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B612553:L612553:{c.instructions+=21;NFSU2_TR(0x612553);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B612557:{NFSU2_TR(0x612557);
u8 U[8];
w4(U+0,u32(u32(u32(0xdcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B61255e:{NFSU2_TR(0x61255e);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B612562:{NFSU2_TR(0x612562);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B612564:{NFSU2_TR(0x612564);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B612567:{NFSU2_TR(0x612567);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B61256a:{NFSU2_TR(0x61256a);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B61256d:{NFSU2_TR(0x61256d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B612570:{NFSU2_TR(0x612570);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B612573:{NFSU2_TR(0x612573);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B612576:{NFSU2_TR(0x612576);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B612579:{NFSU2_TR(0x612579);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B61257c:{NFSU2_TR(0x61257c);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B61257f:{NFSU2_TR(0x61257f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B612582:{NFSU2_TR(0x612582);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B612585:{NFSU2_TR(0x612585);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B612588:{NFSU2_TR(0x612588);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B61258b:{NFSU2_TR(0x61258b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B61258e:{NFSU2_TR(0x61258e);
u8 U[12];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+28))<(r4(U+8))));
}
B612592:{NFSU2_TR(0x612592);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B612596:{NFSU2_TR(0x612596);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L6127de;}}
}
B61259c:L61259c:{c.instructions+=1;NFSU2_TR(0x61259c);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6125a0:L6125a0:{c.instructions+=8;NFSU2_TR(0x6125a0);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6125a2:{NFSU2_TR(0x6125a2);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
w4(R+28,u32(r1(U+0)));
}
B6125a5:{NFSU2_TR(0x6125a5);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B6125a8:{NFSU2_TR(0x6125a8);
u8 U[8];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6125ac:{NFSU2_TR(0x6125ac);
u8 U[5];
w4(U+0,u32(u32(u32(0x13ull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B6125b1:{NFSU2_TR(0x6125b1);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
w4(U+4,u32(0x8ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6125b9:{NFSU2_TR(0x6125b9);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6125c1:{NFSU2_TR(0x6125c1);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L6127cd;}}
}
B6125c7:L6125c7:{c.instructions+=2;NFSU2_TR(0x6125c7);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x3cull))));
__builtin_memmove((R+24),(U+0),4);
}
B6125ca:{NFSU2_TR(0x6125ca);
__builtin_memmove((R+12),(R+12),4);
}
B6125d0:L6125d0:{c.instructions+=3;NFSU2_TR(0x6125d0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6125d3:{NFSU2_TR(0x6125d3);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6125d5:{NFSU2_TR(0x6125d5);
if(r1(R+518)){{goto L6127b5;}}
}
B6125db:L6125db:{c.instructions+=15;NFSU2_TR(0x6125db);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6125df:{NFSU2_TR(0x6125df);
u8 U[16];
w4(U+0,u32(u32(u32(0xb8ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+20),(U+12),4);
}
B6125e6:{NFSU2_TR(0x6125e6);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+20))),1);
__builtin_memmove((R+12),(U+0),1);
}
B6125e9:{NFSU2_TR(0x6125e9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6125ec:{NFSU2_TR(0x6125ec);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+28),(U+0),4);
}
B6125ee:{NFSU2_TR(0x6125ee);
w4(R+8,u32(r1(R+12)));
}
B6125f1:{NFSU2_TR(0x6125f1);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6125f4:{NFSU2_TR(0x6125f4);
u8 U[16];
w4(U+0,u32(u32(u32(0x98ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+8),(U+12),4);
}
B6125fb:{NFSU2_TR(0x6125fb);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+8))),1);
w4(R+8,u32(r1(U+0)));
}
B6125fe:{NFSU2_TR(0x6125fe);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B612601:{NFSU2_TR(0x612601);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B612604:{NFSU2_TR(0x612604);
w4(R+28,u32(u32(r4(R+28))&u32(u32(0xffull))));
}
B61260a:{NFSU2_TR(0x61260a);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B61260c:{NFSU2_TR(0x61260c);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B612610:{NFSU2_TR(0x612610);
if(r1(R+518)){{goto L61267f;}}
}
B612612:L612612:{c.instructions+=2;NFSU2_TR(0x612612);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B612614:{NFSU2_TR(0x612614);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L61267f;}}
}
B612616:L612616:{c.instructions+=25;NFSU2_TR(0x612616);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B61261a:{NFSU2_TR(0x61261a);
w4(R+0,u32(r1(R+4)));
}
B61261d:{NFSU2_TR(0x61261d);
u8 U[8];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B612621:{NFSU2_TR(0x612621);
w4(R+4,u32(r1(R+5)));
}
B612624:{NFSU2_TR(0x612624);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B612628:{NFSU2_TR(0x612628);
u8 U[8];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B61262c:{NFSU2_TR(0x61262c);
{u32 ea_=u32(u32(7882056u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B612632:{NFSU2_TR(0x612632);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))&u32(u32(0x1full))));
w4(R+8,shr<u32>(r4(R+8),u64(r4(U+0))));
}
B612635:{NFSU2_TR(0x612635);
w4(R+8,u32(r1(R+8)));
}
B612638:{NFSU2_TR(0x612638);
{u32 ea_=u32(r4(R+16)+u32(88u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B61263c:{NFSU2_TR(0x61263c);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B612640:{NFSU2_TR(0x612640);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B612644:{NFSU2_TR(0x612644);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B612646:{NFSU2_TR(0x612646);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B612648:{NFSU2_TR(0x612648);
{u32 ea_=u32(u32(7882056u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61264e:{NFSU2_TR(0x61264e);
u8 U[4];
w4(U+0,u32(u32(u32(0x60ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B612652:{NFSU2_TR(0x612652);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B612653:{NFSU2_TR(0x612653);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((R+4),(U+0),4);
}
B612656:{NFSU2_TR(0x612656);
{u32 ea_=u32(r4(R+16)+u32(104u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B61265a:{NFSU2_TR(0x61265a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61265b:{NFSU2_TR(0x61265b);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B61265f:{NFSU2_TR(0x61265f);
u8 U[8];
w4(U+0,u32(u32(u32(0x74ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B612667:{NFSU2_TR(0x612667);
{u32 ea_=u32(u32(7882056u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61266d:{NFSU2_TR(0x61266d);
{u32 ea_=u32(r4(R+16)+u32(112u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B612671:{NFSU2_TR(0x612671);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x612676ull));
TAIL_STATIC(0x611b00u,611);
}
B612676:L612676:{c.instructions+=3;NFSU2_TR(0x612676);
__builtin_memmove((R+4),(R+0),4);
}
B612678:{NFSU2_TR(0x612678);
u8 U[8];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B61267c:{NFSU2_TR(0x61267c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B61267f:L61267f:{c.instructions+=2;NFSU2_TR(0x61267f);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+512,u8((r4(U+0))<(u32(0x7full))));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x7full))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B612682:{NFSU2_TR(0x612682);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6126ac;}}
}
B612684:L612684:{c.instructions+=7;NFSU2_TR(0x612684);
u8 U[5];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(R+12,u8(u32(r1(R+12))+u32(r1(U+4))));
}
B612688:{NFSU2_TR(0x612688);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B61268c:{NFSU2_TR(0x61268c);
u8 U[8];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B612690:{NFSU2_TR(0x612690);
u8 U[5];
w4(U+0,u32(u32(u32(0x13ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B612694:{NFSU2_TR(0x612694);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B612696:{NFSU2_TR(0x612696);
u8 U[1];
__builtin_memmove((U+0),(R+12),1);
s1(u32(r4(R+8)),r1(U+0));
}
B612698:{NFSU2_TR(0x612698);
if(r1(R+518)){{goto L612782;}}
}
B61269e:L61269e:{c.instructions+=3;NFSU2_TR(0x61269e);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6126a2:{NFSU2_TR(0x6126a2);
u8 U[5];
w4(U+0,u32(u32(u32(0x13ull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B6126a7:{NFSU2_TR(0x6126a7);
{goto L612782;}
}
B6126ac:L6126ac:{c.instructions+=2;NFSU2_TR(0x6126ac);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6126ae:{NFSU2_TR(0x6126ae);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L612782;}}
}
B6126b4:L6126b4:{c.instructions+=3;NFSU2_TR(0x6126b4);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6126b8:{NFSU2_TR(0x6126b8);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6126bc:{NFSU2_TR(0x6126bc);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L6126c4;}}
}
B6126be:L6126be:{c.instructions+=1;NFSU2_TR(0x6126be);
{u32 ea_=u32(u32(7882060u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6126c4:L6126c4:{c.instructions+=6;NFSU2_TR(0x6126c4);
{u32 ea_=u32(u32(7895792u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6126ca:{NFSU2_TR(0x6126ca);
{u32 ea_=u32(r4(R+16)+u32(80u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B6126ce:{NFSU2_TR(0x6126ce);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B6126d4:{NFSU2_TR(0x6126d4);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B6126d6:{NFSU2_TR(0x6126d6);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6126d9:{NFSU2_TR(0x6126d9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6126e3;}}
}
B6126db:L6126db:{c.instructions+=1;NFSU2_TR(0x6126db);
u8 U[8];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+16))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6126e3:L6126e3:{c.instructions+=13;NFSU2_TR(0x6126e3);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6126e9:{NFSU2_TR(0x6126e9);
u8 U[8];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6126ed:{NFSU2_TR(0x6126ed);
{u32 ea_=u32(r4(R+16)+u32(80u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B6126f1:{NFSU2_TR(0x6126f1);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6126f3:{NFSU2_TR(0x6126f3);
u8 U[8];
w4(U+0,u32(u32(u32(0x78ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6126f7:{NFSU2_TR(0x6126f7);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6126f9:{NFSU2_TR(0x6126f9);
u8 U[4];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B6126fd:{NFSU2_TR(0x6126fd);
{u32 ea_=u32(r4(R+16)+u32(92u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B612701:{NFSU2_TR(0x612701);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B612702:{NFSU2_TR(0x612702);
u8 U[4];
w4(U+0,u32(u32(u32(0x80ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B612709:{NFSU2_TR(0x612709);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61270a:{NFSU2_TR(0x61270a);
u8 U[8];
w4(U+0,u32(u32(u32(0x88ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B612711:{NFSU2_TR(0x612711);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x612716ull));
TAIL_STATIC(0x611b00u,611);
}
B612716:L612716:{c.instructions+=5;NFSU2_TR(0x612716);
__builtin_memmove((R+4),(R+0),4);
}
B612718:{NFSU2_TR(0x612718);
u8 U[5];
w4(U+0,u32(u32(u32(0x23ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B61271c:{NFSU2_TR(0x61271c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B61271f:{NFSU2_TR(0x61271f);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B612721:{NFSU2_TR(0x612721);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L612762;}}
}
B612723:L612723:{c.instructions+=17;NFSU2_TR(0x612723);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B612726:{NFSU2_TR(0x612726);
u8 U[8];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B61272a:{NFSU2_TR(0x61272a);
__builtin_memmove((R+0),(R+20),4);
}
B61272c:{NFSU2_TR(0x61272c);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+28))));
}
B61272e:{NFSU2_TR(0x61272e);
u8 U[6];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+28,u32(s32(s16(r2(U+4)))));
}
B612732:{NFSU2_TR(0x612732);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B612733:{NFSU2_TR(0x612733);
u8 U[56];
w8(U+0,u64(s64(s32(r4(R+28)))));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x612733);w8(U+40,u64(x_/y_));}
w4(R+0,u32(r8(U+40)));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x612733);w8(U+48,u64(x_%y_));}
w4(R+8,u32(r8(U+48)));
}
B612735:{NFSU2_TR(0x612735);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B612739:{NFSU2_TR(0x612739);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B61273d:{NFSU2_TR(0x61273d);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4),4);
s4(u32(r4(U+4)),r4(U+8));
}
B612740:{NFSU2_TR(0x612740);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B612744:{NFSU2_TR(0x612744);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B612745:{NFSU2_TR(0x612745);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0xc000ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xc000ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B61274b:{NFSU2_TR(0x61274b);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B61274f:{NFSU2_TR(0x61274f);
u8 U[14];
w4(U+0,u32(u32(u32(0xfffffffcull))+u32(r4(R+12))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+8),2);
s2(u32(r4(U+8)),r2(U+12));
}
B612754:{NFSU2_TR(0x612754);
u8 U[14];
w4(U+0,u32(u32(u32(0xfffffffeull))+u32(r4(R+12))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+0),2);
s2(u32(r4(U+8)),r2(U+12));
}
B612759:{NFSU2_TR(0x612759);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L61276e;}}
}
B61275b:L61275b:{c.instructions+=3;NFSU2_TR(0x61275b);
w4(R+28,u32(u32(r4(R+28))-u32(u32(0x1ull))));
}
B61275c:{NFSU2_TR(0x61275c);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B612760:{NFSU2_TR(0x612760);
{goto L61276e;}
}
B612762:L612762:{c.instructions+=3;NFSU2_TR(0x612762);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B612766:{NFSU2_TR(0x612766);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B61276a:{NFSU2_TR(0x61276a);
u8 U[16];
w4(U+0,u32(u32(u32(0xfffffffcull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+4),4);
s4(u32(r4(U+8)),r4(U+12));
}
B61276e:L61276e:{c.instructions+=5;NFSU2_TR(0x61276e);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B612772:{NFSU2_TR(0x612772);
u8 U[1];
w1(U+0,u8(0xffull));
s1(u32(r4(R+0)),r1(U+0));
}
B612775:{NFSU2_TR(0x612775);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B612779:{NFSU2_TR(0x612779);
u8 U[5];
w4(U+0,u32(u32(u32(0x13ull))+u32(r4(R+16))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B61277e:{NFSU2_TR(0x61277e);
u8 U[8];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B612782:L612782:{c.instructions+=12;NFSU2_TR(0x612782);
u8 U[16];
w4(U+0,u32(u32(u32(0x98ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+4),(U+12),4);
}
B612789:{NFSU2_TR(0x612789);
u8 U[8];
w4(U+0,u32(u32(u32(0xdcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B612790:{NFSU2_TR(0x612790);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x1ull))));
}
B612791:{NFSU2_TR(0x612791);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B612792:{NFSU2_TR(0x612792);
u8 U[16];
w4(U+0,u32(u32(u32(0x98ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+4),4);
s4(u32(r4(U+8)),r4(U+12));
}
B612799:{NFSU2_TR(0x612799);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B61279c:{NFSU2_TR(0x61279c);
u8 U[16];
w4(U+0,u32(u32(u32(0xb8ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+20),4);
s4(u32(r4(U+8)),r4(U+12));
}
B6127a3:{NFSU2_TR(0x6127a3);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6127a7:{NFSU2_TR(0x6127a7);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+4))));
}
B6127a9:{NFSU2_TR(0x6127a9);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6127ad:{NFSU2_TR(0x6127ad);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6127b1:{NFSU2_TR(0x6127b1);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6127b5:L6127b5:{c.instructions+=6;NFSU2_TR(0x6127b5);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6127b9:{NFSU2_TR(0x6127b9);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B6127ba:{NFSU2_TR(0x6127ba);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x34ull))));
}
B6127bd:{NFSU2_TR(0x6127bd);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+0)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6127bf:{NFSU2_TR(0x6127bf);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6127c3:{NFSU2_TR(0x6127c3);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6125d0u);}goto L6125d0;}}
}
B6127c9:L6127c9:{c.instructions+=1;NFSU2_TR(0x6127c9);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6127cd:L6127cd:{c.instructions+=5;NFSU2_TR(0x6127cd);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6127d1:{NFSU2_TR(0x6127d1);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B6127d2:{NFSU2_TR(0x6127d2);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w1(R+512,u8((r4(R+24))<(r4(U+0))));
}
B6127d4:{NFSU2_TR(0x6127d4);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6127d8:{NFSU2_TR(0x6127d8);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6125a0u);}goto L6125a0;}}
}
B6127de:L6127de:{c.instructions+=4;NFSU2_TR(0x6127de);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6127e0:{NFSU2_TR(0x6127e0);
w4(R+12,u32(0x8ull));
}
B6127e5:{NFSU2_TR(0x6127e5);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6127e9:{NFSU2_TR(0x6127e9);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L6128f3;}}
}
B6127ef:L6127ef:{c.instructions+=4;NFSU2_TR(0x6127ef);
u8 U[8];
w4(U+0,u32(u32(u32(0xdcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6127f6:{NFSU2_TR(0x6127f6);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6127fa:{NFSU2_TR(0x6127fa);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x40ull))));
}
B6127fd:{NFSU2_TR(0x6127fd);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B612801:L612801:{c.instructions+=3;NFSU2_TR(0x612801);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B612804:{NFSU2_TR(0x612804);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B612806:{NFSU2_TR(0x612806);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L612837;}}
}
B612808:L612808:{c.instructions+=4;NFSU2_TR(0x612808);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B61280a:{NFSU2_TR(0x61280a);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B61280c:{NFSU2_TR(0x61280c);
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
B61280e:{NFSU2_TR(0x61280e);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L6128c4;}}
}
B612814:L612814:{c.instructions+=3;NFSU2_TR(0x612814);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B612818:{NFSU2_TR(0x612818);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B61281b:{NFSU2_TR(0x61281b);
{goto L612820;}
}
B612820:L612820:{c.instructions+=8;NFSU2_TR(0x612820);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B612823:{NFSU2_TR(0x612823);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B612826:{NFSU2_TR(0x612826);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+4)),r4(U+0));
}
B612828:{NFSU2_TR(0x612828);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B61282a:{NFSU2_TR(0x61282a);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B61282b:{NFSU2_TR(0x61282b);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4ull))));
}
B61282e:{NFSU2_TR(0x61282e);
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
B612830:{NFSU2_TR(0x612830);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x612820u);}goto L612820;}}
}
B612832:L612832:{c.instructions+=1;NFSU2_TR(0x612832);
{goto L6128c4;}
}
B612837:L612837:{c.instructions+=4;NFSU2_TR(0x612837);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B612839:{NFSU2_TR(0x612839);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B61283b:{NFSU2_TR(0x61283b);
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
B61283d:{NFSU2_TR(0x61283d);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L6128c4;}}
}
B612843:L612843:{c.instructions+=5;NFSU2_TR(0x612843);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B612847:{NFSU2_TR(0x612847);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B61284b:{NFSU2_TR(0x61284b);
u8 U[8];
w4(U+0,u32(u32(u32(0x64ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B61284f:{NFSU2_TR(0x61284f);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((R+12),(U+0),4);
}
B612852:{NFSU2_TR(0x612852);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+20),(U+4),4);
}
B612855:L612855:{c.instructions+=25;NFSU2_TR(0x612855);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B612858:{NFSU2_TR(0x612858);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B61285b:{NFSU2_TR(0x61285b);
w4(R+4,u32(r1(R+0)));
}
B61285e:{NFSU2_TR(0x61285e);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B612862:{NFSU2_TR(0x612862);
w4(R+8,u32(r1(R+1)));
}
B612865:{NFSU2_TR(0x612865);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B612869:{NFSU2_TR(0x612869);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B61286d:{NFSU2_TR(0x61286d);
{u32 ea_=u32(u32(7882056u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B612873:{NFSU2_TR(0x612873);
u8 U[8];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B612877:{NFSU2_TR(0x612877);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))&u32(u32(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+0))));
}
B61287a:{NFSU2_TR(0x61287a);
w4(R+0,u32(r1(R+0)));
}
B61287d:{NFSU2_TR(0x61287d);
{u32 ea_=u32(r4(R+16)+u32(88u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B612881:{NFSU2_TR(0x612881);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B612885:{NFSU2_TR(0x612885);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B612889:{NFSU2_TR(0x612889);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61288b:{NFSU2_TR(0x61288b);
{u32 ea_=u32(u32(7882056u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B612891:{NFSU2_TR(0x612891);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B612893:{NFSU2_TR(0x612893);
u8 U[4];
w4(U+0,u32(u32(u32(0x60ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B612897:{NFSU2_TR(0x612897);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B612898:{NFSU2_TR(0x612898);
{u32 ea_=u32(r4(R+16)+u32(104u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B61289c:{NFSU2_TR(0x61289c);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61289d:{NFSU2_TR(0x61289d);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6128a1:{NFSU2_TR(0x6128a1);
{u32 ea_=u32(u32(7882056u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6128a7:{NFSU2_TR(0x6128a7);
{u32 ea_=u32(r4(R+16)+u32(112u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6128ab:{NFSU2_TR(0x6128ab);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6128b0ull));
TAIL_STATIC(0x611b00u,611);
}
B6128b0:L6128b0:{c.instructions+=7;NFSU2_TR(0x6128b0);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B6128b3:{NFSU2_TR(0x6128b3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+20)),r4(U+0));
}
B6128b6:{NFSU2_TR(0x6128b6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6128b8:{NFSU2_TR(0x6128b8);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B6128b9:{NFSU2_TR(0x6128b9);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x4ull))));
}
B6128bc:{NFSU2_TR(0x6128bc);
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
B6128be:{NFSU2_TR(0x6128be);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x612855u);}goto L612855;}}
}
B6128c0:L6128c0:{c.instructions+=1;NFSU2_TR(0x6128c0);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6128c4:L6128c4:{c.instructions+=3;NFSU2_TR(0x6128c4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6128c7:{NFSU2_TR(0x6128c7);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6128c8:{NFSU2_TR(0x6128c8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6128cdull));
TAIL_STATIC(0x4022c0u,402);
}
B6128cd:L6128cd:{c.instructions+=3;NFSU2_TR(0x6128cd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6128d0:{NFSU2_TR(0x6128d0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6128d1:{NFSU2_TR(0x6128d1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6128d6ull));
TAIL_STATIC(0x4022c0u,402);
}
B6128d6:L6128d6:{c.instructions+=9;NFSU2_TR(0x6128d6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6128d8:{NFSU2_TR(0x6128d8);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6128dc:{NFSU2_TR(0x6128dc);
w4(R+12,u32(u32(r4(R+12))+u32(r4(R+8))));
}
B6128de:{NFSU2_TR(0x6128de);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B6128e1:{NFSU2_TR(0x6128e1);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x34ull))));
}
B6128e4:{NFSU2_TR(0x6128e4);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B6128e5:{NFSU2_TR(0x6128e5);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6128e9:{NFSU2_TR(0x6128e9);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6128ed:{NFSU2_TR(0x6128ed);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x612801u);}goto L612801;}}
}
B6128f3:L6128f3:{c.instructions+=3;NFSU2_TR(0x6128f3);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6128f7:{NFSU2_TR(0x6128f7);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6128f9:{NFSU2_TR(0x6128f9);
if(r1(R+518)){{goto L612ac8;}}
}
B6128ff:L6128ff:{c.instructions+=4;NFSU2_TR(0x6128ff);
w4(R+20,u32(0xffull));
}
B612904:{NFSU2_TR(0x612904);
w4(R+20,u32(u32(r4(R+20))-u32(r4(R+12))));
}
B612906:{NFSU2_TR(0x612906);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B612908:{NFSU2_TR(0x612908);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L61296a;}}
}
B61290a:L61290a:{c.instructions+=3;NFSU2_TR(0x61290a);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B61290c:{NFSU2_TR(0x61290c);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B61290e:{NFSU2_TR(0x61290e);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L612ac8;}}
}
B612914:L612914:{c.instructions+=7;NFSU2_TR(0x612914);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B612918:{NFSU2_TR(0x612918);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B61291c:{NFSU2_TR(0x61291c);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((R+24),(U+4),4);
}
B61291f:{NFSU2_TR(0x61291f);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B612923:{NFSU2_TR(0x612923);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+0))));
}
B612925:{NFSU2_TR(0x612925);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B612929:{NFSU2_TR(0x612929);
{goto L612930;}
}
B61292b:L61292b:{c.instructions+=2;NFSU2_TR(0x61292b);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B61292f:{NFSU2_TR(0x61292f);
}
B612930:L612930:{c.instructions+=18;NFSU2_TR(0x612930);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(s32(s16(r2(U+4)))));
}
B612934:{NFSU2_TR(0x612934);
u8 U[8];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B612938:{NFSU2_TR(0x612938);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+28,u32(s32(s16(r2(U+4)))));
}
B61293c:{NFSU2_TR(0x61293c);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B612940:{NFSU2_TR(0x612940);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(r4(R+28)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B612943:{NFSU2_TR(0x612943);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+0))),2);
w4(R+28,u32(s32(s16(r2(U+0)))));
}
B612946:{NFSU2_TR(0x612946);
w4(R+20,u32(u32(r4(R+20))+u32(r4(R+8))));
}
B612948:{NFSU2_TR(0x612948);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B61294c:{NFSU2_TR(0x61294c);
w1(R+12,u8(u32(r1(R+12))+u32(r1(R+4))));
}
B61294e:{NFSU2_TR(0x61294e);
u8 U[9];
w4(U+0,u32(u32(r4(R+20))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+12),1);
s1(u32(r4(U+4)),r1(U+8));
}
B612951:{NFSU2_TR(0x612951);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B612954:{NFSU2_TR(0x612954);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+24)),r4(U+0));
}
B612956:{NFSU2_TR(0x612956);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B61295a:{NFSU2_TR(0x61295a);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B61295b:{NFSU2_TR(0x61295b);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B61295e:{NFSU2_TR(0x61295e);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x4ull))));
}
B612961:{NFSU2_TR(0x612961);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B612963:{NFSU2_TR(0x612963);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x61292bu);}goto L61292b;}}
}
B612965:L612965:{c.instructions+=1;NFSU2_TR(0x612965);
{goto L612ac8;}
}
B61296a:L61296a:{c.instructions+=7;NFSU2_TR(0x61296a);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B61296e:{NFSU2_TR(0x61296e);
u8 U[4];
w4(U+0,u32(0x14ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B612970:{NFSU2_TR(0x612970);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B612971:{NFSU2_TR(0x612971);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B612974:{NFSU2_TR(0x612974);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B612975:{NFSU2_TR(0x612975);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B612976:{NFSU2_TR(0x612976);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x61297bull));
TAIL_STATIC(0x6110b0u,611);
}
B61297b:L61297b:{c.instructions+=2;NFSU2_TR(0x61297b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B61297e:{NFSU2_TR(0x61297e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x612983ull));
TAIL_STATIC(0x6116c0u,611);
}
B612983:L612983:{c.instructions+=4;NFSU2_TR(0x612983);
__builtin_memmove((R+12),gp(0x803958),4);
}
B612989:{NFSU2_TR(0x612989);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B61298b:{NFSU2_TR(0x61298b);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B61298d:{NFSU2_TR(0x61298d);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L6129cf;}}
}
B61298f:L61298f:{c.instructions+=3;NFSU2_TR(0x61298f);
w4(R+8,u32(0x8a07d8ull));
}
B612994:{NFSU2_TR(0x612994);
w4(R+0,u32(0x8a07ccull));
}
B612999:{NFSU2_TR(0x612999);
__builtin_memmove((R+16),(R+16),4);
}
B6129a0:L6129a0:{c.instructions+=18;NFSU2_TR(0x6129a0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6129a3:{NFSU2_TR(0x6129a3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+24),(U+0),4);
}
B6129a5:{NFSU2_TR(0x6129a5);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+28,sar<u32>(r4(R+28),u64(r4(U+0))));
}
B6129a8:{NFSU2_TR(0x6129a8);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+24,sar<u32>(r4(R+24),u64(r4(U+0))));
}
B6129ab:{NFSU2_TR(0x6129ab);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6129ae:{NFSU2_TR(0x6129ae);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6129b1:{NFSU2_TR(0x6129b1);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+0)),r4(U+0));
}
B6129b3:{NFSU2_TR(0x6129b3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6129b6:{NFSU2_TR(0x6129b6);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+28,sar<u32>(r4(R+28),u64(r4(U+0))));
}
B6129b9:{NFSU2_TR(0x6129b9);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+24,sar<u32>(r4(R+24),u64(r4(U+0))));
}
B6129bc:{NFSU2_TR(0x6129bc);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6129bf:{NFSU2_TR(0x6129bf);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6129c2:{NFSU2_TR(0x6129c2);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+8)),r4(U+0));
}
B6129c4:{NFSU2_TR(0x6129c4);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B6129c5:{NFSU2_TR(0x6129c5);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
}
B6129c8:{NFSU2_TR(0x6129c8);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x14ull))));
}
B6129cb:{NFSU2_TR(0x6129cb);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6129cd:{NFSU2_TR(0x6129cd);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6129a0u);}goto L6129a0;}}
}
B6129cf:L6129cf:{c.instructions+=3;NFSU2_TR(0x6129cf);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B6129d1:{NFSU2_TR(0x6129d1);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+20))&u32(r4(R+20))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6129d3:{NFSU2_TR(0x6129d3);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L612a44;}}
}
B6129d5:L6129d5:{c.instructions+=5;NFSU2_TR(0x6129d5);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6129d9:{NFSU2_TR(0x6129d9);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6129dd:{NFSU2_TR(0x6129dd);
w4(R+0,u32(0x8a07ccull));
}
B6129e2:{NFSU2_TR(0x6129e2);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((R+28),(U+4),4);
}
B6129e5:{NFSU2_TR(0x6129e5);
{goto L6129f0;}
}
B6129e7:L6129e7:{c.instructions+=2;NFSU2_TR(0x6129e7);
__builtin_memmove((R+12),gp(0x803958),4);
}
B6129ed:{NFSU2_TR(0x6129ed);
__builtin_memmove((R+4),(R+4),4);
}
B6129f0:L6129f0:{c.instructions+=2;NFSU2_TR(0x6129f0);
u8 U[4];
w1(R+523,sborrow<u32>(r4(R+0),u32(0x8a07ccull)));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x8a07ccull))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B6129f5:{NFSU2_TR(0x6129f5);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L612a10;}}
}
B6129f7:L6129f7:{c.instructions+=2;NFSU2_TR(0x6129f7);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6129f9:{NFSU2_TR(0x6129f9);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L612a10;}}
}
B6129fb:L6129fb:{c.instructions+=7;NFSU2_TR(0x6129fb);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((R+8),(U+0),1);
}
B6129fd:{NFSU2_TR(0x6129fd);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B612a00:{NFSU2_TR(0x612a00);
u8 U[5];
w4(U+0,u32(u32(u32(0x13ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B612a04:{NFSU2_TR(0x612a04);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B612a07:{NFSU2_TR(0x612a07);
u8 U[5];
w4(U+0,u32(u32(u32(0x23ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B612a0b:{NFSU2_TR(0x612a0b);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B612a0e:{NFSU2_TR(0x612a0e);
{goto L612a1c;}
}
B612a10:L612a10:{c.instructions+=4;NFSU2_TR(0x612a10);
w1(R+4,u8(u32(r1(R+4))^u32(r1(R+4))));
}
B612a12:{NFSU2_TR(0x612a12);
u8 U[5];
w4(U+0,u32(u32(u32(0x13ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B612a16:{NFSU2_TR(0x612a16);
u8 U[5];
w4(U+0,u32(u32(u32(0x23ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B612a1a:{NFSU2_TR(0x612a1a);
w1(R+8,u8(u32(r1(R+8))^u32(r1(R+8))));
}
B612a1c:L612a1c:{c.instructions+=15;NFSU2_TR(0x612a1c);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B612a1e:{NFSU2_TR(0x612a1e);
__builtin_memmove((R+13),(R+8),1);
}
B612a20:{NFSU2_TR(0x612a20);
u8 U[5];
w4(U+0,u32(u32(u32(0x23ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+8,u32(r1(U+4)));
}
B612a25:{NFSU2_TR(0x612a25);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x4ull))));
}
B612a28:{NFSU2_TR(0x612a28);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
}
B612a2b:{NFSU2_TR(0x612a2b);
__builtin_memmove((R+12),(R+4),1);
}
B612a2d:{NFSU2_TR(0x612a2d);
u8 U[5];
w4(U+0,u32(u32(u32(0x13ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(r1(U+4)));
}
B612a32:{NFSU2_TR(0x612a32);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+12,shl<u32>(r4(R+12),u64(r4(U+0))));
}
B612a35:{NFSU2_TR(0x612a35);
w4(R+12,u32(u32(r4(R+12))|u32(r4(R+4))));
}
B612a37:{NFSU2_TR(0x612a37);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+12,shl<u32>(r4(R+12),u64(r4(U+0))));
}
B612a3a:{NFSU2_TR(0x612a3a);
w4(R+12,u32(u32(r4(R+12))|u32(r4(R+8))));
}
B612a3c:{NFSU2_TR(0x612a3c);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B612a3f:{NFSU2_TR(0x612a3f);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B612a40:{NFSU2_TR(0x612a40);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B612a42:{NFSU2_TR(0x612a42);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6129e7u);}goto L6129e7;}}
}
B612a44:L612a44:{c.instructions+=1;NFSU2_TR(0x612a44);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x612a49ull));
TAIL_STATIC(0x611140u,611);
}
B612a49:L612a49:{c.instructions+=3;NFSU2_TR(0x612a49);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B612a4d:{NFSU2_TR(0x612a4d);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B612a4f:{NFSU2_TR(0x612a4f);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L612ac8;}}
}
B612a51:L612a51:{c.instructions+=5;NFSU2_TR(0x612a51);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B612a55:{NFSU2_TR(0x612a55);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B612a59:{NFSU2_TR(0x612a59);
w4(R+12,u32(u32(r4(R+12))-u32(r4(R+28))));
}
B612a5b:{NFSU2_TR(0x612a5b);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B612a5f:{NFSU2_TR(0x612a5f);
}
B612a60:L612a60:{c.instructions+=11;NFSU2_TR(0x612a60);
u8 U[8];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B612a64:{NFSU2_TR(0x612a64);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(s32(s16(r2(U+4)))));
}
B612a68:{NFSU2_TR(0x612a68);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(s32(s16(r2(U+4)))));
}
B612a6c:{NFSU2_TR(0x612a6c);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+28))),2);
w4(R+24,u32(s32(s16(r2(U+0)))));
}
B612a6f:{NFSU2_TR(0x612a6f);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(r4(R+8)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B612a72:{NFSU2_TR(0x612a72);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B612a76:{NFSU2_TR(0x612a76);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+0))));
}
B612a78:{NFSU2_TR(0x612a78);
u8 U[9];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
__builtin_memmove((R+0),(U+8),1);
}
B612a7b:{NFSU2_TR(0x612a7b);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+4))));
}
B612a7d:{NFSU2_TR(0x612a7d);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))-u32(u8(0xffull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B612a7f:{NFSU2_TR(0x612a7f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L612aba;}}
}
B612a81:L612a81:{c.instructions+=14;NFSU2_TR(0x612a81);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B612a84:{NFSU2_TR(0x612a84);
__builtin_memmove((R+4),(R+0),4);
}
B612a86:{NFSU2_TR(0x612a86);
__builtin_memmove((R+8),(R+0),4);
}
B612a88:{NFSU2_TR(0x612a88);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))&u32(u32(0x1full))));
w4(R+8,shr<u32>(r4(R+8),u64(r4(U+0))));
}
B612a8b:{NFSU2_TR(0x612a8b);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B612a8c:{NFSU2_TR(0x612a8c);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B612a8f:{NFSU2_TR(0x612a8f);
w4(R+4,u32(r1(R+4)));
}
B612a92:{NFSU2_TR(0x612a92);
w4(R+8,u32(r1(R+1)));
}
B612a95:{NFSU2_TR(0x612a95);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B612a96:{NFSU2_TR(0x612a96);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B612a9a:{NFSU2_TR(0x612a9a);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B612a9b:{NFSU2_TR(0x612a9b);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
}
B612aa0:{NFSU2_TR(0x612aa0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B612aa1:{NFSU2_TR(0x612aa1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x612aa6ull));
TAIL_STATIC(0x611270u,611);
}
B612aa6:L612aa6:{c.instructions+=3;NFSU2_TR(0x612aa6);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B612aa9:{NFSU2_TR(0x612aa9);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B612aab:{NFSU2_TR(0x612aab);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L612ab7;}}
}
B612aad:L612aad:{c.instructions+=4;NFSU2_TR(0x612aad);
u8 U[5];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B612ab1:{NFSU2_TR(0x612ab1);
w1(R+4,u8(u32(r1(R+4))+u32(r1(R+0))));
}
B612ab3:{NFSU2_TR(0x612ab3);
u8 U[1];
__builtin_memmove((U+0),(R+4),1);
s1(u32(r4(R+24)),r1(U+0));
}
B612ab5:{NFSU2_TR(0x612ab5);
{goto L612aba;}
}
B612ab7:L612ab7:{c.instructions+=1;NFSU2_TR(0x612ab7);
u8 U[1];
w1(U+0,u8(0x0ull));
s1(u32(r4(R+24)),r1(U+0));
}
B612aba:L612aba:{c.instructions+=5;NFSU2_TR(0x612aba);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B612abe:{NFSU2_TR(0x612abe);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x4ull))));
}
B612ac1:{NFSU2_TR(0x612ac1);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B612ac2:{NFSU2_TR(0x612ac2);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B612ac6:{NFSU2_TR(0x612ac6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x612a60u);}goto L612a60;}}
}
B612ac8:L612ac8:{c.instructions+=3;NFSU2_TR(0x612ac8);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B612acc:{NFSU2_TR(0x612acc);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B612acd:{NFSU2_TR(0x612acd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x612ad2ull));
TAIL_STATIC(0x440540u,440);
}
B612ad2:L612ad2:{c.instructions+=3;NFSU2_TR(0x612ad2);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B612ad6:{NFSU2_TR(0x612ad6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B612ad7:{NFSU2_TR(0x612ad7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x612adcull));
TAIL_STATIC(0x440540u,440);
}
B612adc:L612adc:{c.instructions+=6;NFSU2_TR(0x612adc);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B612ae0:{NFSU2_TR(0x612ae0);
w4(R+4,u32(0x8a05e8ull));
}
B612ae5:{NFSU2_TR(0x612ae5);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B612ae8:{NFSU2_TR(0x612ae8);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B612aea:{NFSU2_TR(0x612aea);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B612aee:{NFSU2_TR(0x612aee);
w4(R+0,u32(0x8a1d1cull));
}
B612af3:L612af3:{c.instructions+=4;NFSU2_TR(0x612af3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B612af5:{NFSU2_TR(0x612af5);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B612af7:{NFSU2_TR(0x612af7);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B612af9:{NFSU2_TR(0x612af9);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L612b0f;}}
}
B612afb:L612afb:{c.instructions+=3;NFSU2_TR(0x612afb);
__builtin_memmove((R+8),(R+12),1);
}
B612afd:{NFSU2_TR(0x612afd);
w1(R+8,u8(u32(r1(R+8))+u32(u8(0x1ull))));
}
B612aff:{NFSU2_TR(0x612aff);
}
B612b00:L612b00:{c.instructions+=7;NFSU2_TR(0x612b00);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+20),(U+0),4);
}
B612b02:{NFSU2_TR(0x612b02);
u8 U[9];
w4(U+0,u32(u32(r4(R+20))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+8),1);
s1(u32(r4(U+4)),r1(U+8));
}
B612b05:{NFSU2_TR(0x612b05);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+20),(U+0),4);
}
B612b07:{NFSU2_TR(0x612b07);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B612b08:{NFSU2_TR(0x612b08);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4ull))));
}
B612b0b:{NFSU2_TR(0x612b0b);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B612b0d:{NFSU2_TR(0x612b0d);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x612b00u);}goto L612b00;}}
}
B612b0f:L612b0f:{c.instructions+=7;NFSU2_TR(0x612b0f);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B612b13:{NFSU2_TR(0x612b13);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B612b16:{NFSU2_TR(0x612b16);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x40ull))));
}
B612b19:{NFSU2_TR(0x612b19);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B612b1a:{NFSU2_TR(0x612b1a);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0x8a1d38ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x8a1d38ull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0x8a1d38ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B612b1f:{NFSU2_TR(0x612b1f);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B612b23:{NFSU2_TR(0x612b23);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x612af3u);}goto L612af3;}}
}
B612b25:L612b25:{c.instructions+=3;NFSU2_TR(0x612b25);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B612b29:{NFSU2_TR(0x612b29);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B612b2a:{NFSU2_TR(0x612b2a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x612b2full));
TAIL_STATIC(0x4022c0u,402);
}
B612b2f:L612b2f:{c.instructions+=5;NFSU2_TR(0x612b2f);
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
B612b32:{NFSU2_TR(0x612b32);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B612b33:{NFSU2_TR(0x612b33);
u8 U[8];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B612b37:{NFSU2_TR(0x612b37);
__builtin_memmove((R+4),(R+28),4);
}
B612b39:{NFSU2_TR(0x612b39);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x612b3eull));
TAIL_STATIC(0x5b96d0u,5b9);
}
B612b3e:L612b3e:{c.instructions+=3;NFSU2_TR(0x612b3e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B612b3f:{NFSU2_TR(0x612b3f);
__builtin_memmove((R+4),(R+28),4);
}
B612b41:{NFSU2_TR(0x612b41);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x612b46ull));
TAIL_STATIC(0x4031c0u,403);
}
B612b46:L612b46:{c.instructions+=7;NFSU2_TR(0x612b46);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B612b47:{NFSU2_TR(0x612b47);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B612b48:{NFSU2_TR(0x612b48);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B612b49:{NFSU2_TR(0x612b49);
w4(R+0,u32(0x1ull));
}
B612b4e:{NFSU2_TR(0x612b4e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B612b4f:{NFSU2_TR(0x612b4f);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0xc8ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0xc8ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xc8ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B612b55:{NFSU2_TR(0x612b55);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B612b56:L612b56:{c.instructions+=7;NFSU2_TR(0x612b56);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B612b57:{NFSU2_TR(0x612b57);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B612b58:{NFSU2_TR(0x612b58);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B612b59:{NFSU2_TR(0x612b59);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B612b5b:{NFSU2_TR(0x612b5b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B612b5c:{NFSU2_TR(0x612b5c);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0xc8ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0xc8ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xc8ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B612b62:{NFSU2_TR(0x612b62);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B612b70:L612b70:{c.instructions+=11;NFSU2_TR(0x612b70);
__builtin_memmove((R+4),gp(0x8a1ccc),4);
}
B612b76:{NFSU2_TR(0x612b76);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x50ull))));
}
B612b79:{NFSU2_TR(0x612b79);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B612b7a:{NFSU2_TR(0x612b7a);
u8 U[8];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B612b7e:{NFSU2_TR(0x612b7e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B612b80:{NFSU2_TR(0x612b80);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x890ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B612b86:{NFSU2_TR(0x612b86);
u8 U[12];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+8),(U+8),4);
}
B612b8a:{NFSU2_TR(0x612b8a);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B612b8b:{NFSU2_TR(0x612b8b);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B612b8f:{NFSU2_TR(0x612b8f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B612b90:{NFSU2_TR(0x612b90);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x612b95ull));
TAIL_STATIC(0x43dbd0u,43d);
}
B612b95:L612b95:{c.instructions+=4;NFSU2_TR(0x612b95);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5a8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B612b9b:{NFSU2_TR(0x612b9b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B612b9e:{NFSU2_TR(0x612b9e);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B612ba0:{NFSU2_TR(0x612ba0);
if(r1(R+518)){{goto L612bbd;}}
}
B612ba2:L612ba2:{c.instructions+=4;NFSU2_TR(0x612ba2);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x5ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B612ba5:{NFSU2_TR(0x612ba5);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w1(R+4,shr<u8>(r1(R+4),u64(r4(U+0))));
}
B612ba8:{NFSU2_TR(0x612ba8);
u8 U[1];
w1(R+523,u8(0x0ull));
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+519,u8(s8(r1(U+0))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B612baa:{NFSU2_TR(0x612baa);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L612bbd;}}
}
B612bac:L612bac:{c.instructions+=6;NFSU2_TR(0x612bac);
u8 U[4];
w4(U+0,u32(0x7a84acull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B612bb1:{NFSU2_TR(0x612bb1);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B612bb5:{NFSU2_TR(0x612bb5);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B612bb6:{NFSU2_TR(0x612bb6);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B612bba:{NFSU2_TR(0x612bba);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B612bbb:{NFSU2_TR(0x612bbb);
{goto L612c0e;}
}
B612bbd:L612bbd:{c.instructions+=6;NFSU2_TR(0x612bbd);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B612bc5:{NFSU2_TR(0x612bc5);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
w4(U+4,u32(0x2ull));
s4(u32(r4(U+0)),r4(U+4));
}
B612bcd:{NFSU2_TR(0x612bcd);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
w4(U+4,u32(0xbull));
s4(u32(r4(U+0)),r4(U+4));
}
B612bd5:{NFSU2_TR(0x612bd5);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0x5ull));
s4(u32(r4(U+0)),r4(U+4));
}
B612bdd:{NFSU2_TR(0x612bdd);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B612bdf:{NFSU2_TR(0x612bdf);
}
B612be0:L612be0:{c.instructions+=4;NFSU2_TR(0x612be0);
u8 U[16];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+8),(U+12),4);
}
B612be4:{NFSU2_TR(0x612be4);
u8 U[16];
w4(U+0,u32(u32(u32(0x590ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B612beb:{NFSU2_TR(0x612beb);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B612bed:{NFSU2_TR(0x612bed);
if(r1(R+518)){{goto L612bf9;}}
}
B612bef:L612bef:{c.instructions+=4;NFSU2_TR(0x612bef);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x5ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B612bf2:{NFSU2_TR(0x612bf2);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w1(R+0,shr<u8>(r1(R+0),u64(r4(U+0))));
}
B612bf5:{NFSU2_TR(0x612bf5);
u8 U[1];
w1(R+523,u8(0x0ull));
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+519,u8(s8(r1(U+0))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B612bf7:{NFSU2_TR(0x612bf7);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L612c28;}}
}
B612bf9:L612bf9:{c.instructions+=3;NFSU2_TR(0x612bf9);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B612bfa:{NFSU2_TR(0x612bfa);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x3ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B612bfd:{NFSU2_TR(0x612bfd);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x612be0u);}goto L612be0;}}
}
B612bff:L612bff:{c.instructions+=5;NFSU2_TR(0x612bff);
u8 U[4];
w4(U+0,u32(0x7a84a0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B612c04:{NFSU2_TR(0x612c04);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B612c08:{NFSU2_TR(0x612c08);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B612c09:{NFSU2_TR(0x612c09);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B612c0d:{NFSU2_TR(0x612c0d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B612c0e:L612c0e:{c.instructions+=1;NFSU2_TR(0x612c0e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x612c13ull));
TAIL_STATIC(0x43dda0u,43d);
}
B612c13:L612c13:{c.instructions+=4;NFSU2_TR(0x612c13);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B612c17:{NFSU2_TR(0x612c17);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B612c1a:{NFSU2_TR(0x612c1a);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B612c1b:{NFSU2_TR(0x612c1b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x612c20ull));
TAIL_STATIC(0x43db50u,43d);
}
B612c20:L612c20:{c.instructions+=4;NFSU2_TR(0x612c20);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B612c23:{NFSU2_TR(0x612c23);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B612c24:{NFSU2_TR(0x612c24);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x50ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x50ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x50ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B612c27:{NFSU2_TR(0x612c27);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B612c28:L612c28:{c.instructions+=6;NFSU2_TR(0x612c28);
u8 U[4];
w4(U+0,u32(0x7a8490ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B612c2d:{NFSU2_TR(0x612c2d);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B612c31:{NFSU2_TR(0x612c31);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B612c32:{NFSU2_TR(0x612c32);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B612c36:{NFSU2_TR(0x612c36);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B612c37:{NFSU2_TR(0x612c37);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x612c0eu);}goto L612c0e;}
}
B612c40:L612c40:{c.instructions+=11;NFSU2_TR(0x612c40);
__builtin_memmove((R+4),gp(0x8a1ccc),4);
}
B612c46:{NFSU2_TR(0x612c46);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x50ull))));
}
B612c49:{NFSU2_TR(0x612c49);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B612c4a:{NFSU2_TR(0x612c4a);
u8 U[8];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B612c4e:{NFSU2_TR(0x612c4e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B612c50:{NFSU2_TR(0x612c50);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x890ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B612c56:{NFSU2_TR(0x612c56);
u8 U[12];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+8),(U+8),4);
}
B612c5a:{NFSU2_TR(0x612c5a);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B612c5b:{NFSU2_TR(0x612c5b);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B612c5f:{NFSU2_TR(0x612c5f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B612c60:{NFSU2_TR(0x612c60);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x612c65ull));
TAIL_STATIC(0x43dbd0u,43d);
}
B612c65:L612c65:{c.instructions+=4;NFSU2_TR(0x612c65);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5a8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B612c6b:{NFSU2_TR(0x612c6b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B612c6e:{NFSU2_TR(0x612c6e);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B612c70:{NFSU2_TR(0x612c70);
if(r1(R+518)){{goto L612c8d;}}
}
B612c72:L612c72:{c.instructions+=4;NFSU2_TR(0x612c72);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x5ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B612c75:{NFSU2_TR(0x612c75);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w1(R+4,shr<u8>(r1(R+4),u64(r4(U+0))));
}
B612c78:{NFSU2_TR(0x612c78);
u8 U[1];
w1(R+523,u8(0x0ull));
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+519,u8(s8(r1(U+0))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B612c7a:{NFSU2_TR(0x612c7a);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L612c8d;}}
}
B612c7c:L612c7c:{c.instructions+=6;NFSU2_TR(0x612c7c);
u8 U[4];
w4(U+0,u32(0x7a84e4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B612c81:{NFSU2_TR(0x612c81);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B612c85:{NFSU2_TR(0x612c85);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B612c86:{NFSU2_TR(0x612c86);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B612c8a:{NFSU2_TR(0x612c8a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B612c8b:{NFSU2_TR(0x612c8b);
{goto L612cde;}
}
B612c8d:L612c8d:{c.instructions+=6;NFSU2_TR(0x612c8d);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B612c95:{NFSU2_TR(0x612c95);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
w4(U+4,u32(0x2ull));
s4(u32(r4(U+0)),r4(U+4));
}
B612c9d:{NFSU2_TR(0x612c9d);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
w4(U+4,u32(0xbull));
s4(u32(r4(U+0)),r4(U+4));
}
B612ca5:{NFSU2_TR(0x612ca5);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0x5ull));
s4(u32(r4(U+0)),r4(U+4));
}
B612cad:{NFSU2_TR(0x612cad);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B612caf:{NFSU2_TR(0x612caf);
}
B612cb0:L612cb0:{c.instructions+=4;NFSU2_TR(0x612cb0);
u8 U[16];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+8),(U+12),4);
}
B612cb4:{NFSU2_TR(0x612cb4);
u8 U[16];
w4(U+0,u32(u32(u32(0x590ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B612cbb:{NFSU2_TR(0x612cbb);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B612cbd:{NFSU2_TR(0x612cbd);
if(r1(R+518)){{goto L612cc9;}}
}
B612cbf:L612cbf:{c.instructions+=4;NFSU2_TR(0x612cbf);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x5ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B612cc2:{NFSU2_TR(0x612cc2);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w1(R+0,shr<u8>(r1(R+0),u64(r4(U+0))));
}
B612cc5:{NFSU2_TR(0x612cc5);
u8 U[1];
w1(R+523,u8(0x0ull));
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+519,u8(s8(r1(U+0))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B612cc7:{NFSU2_TR(0x612cc7);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L612cf8;}}
}
B612cc9:L612cc9:{c.instructions+=3;NFSU2_TR(0x612cc9);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B612cca:{NFSU2_TR(0x612cca);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x3ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B612ccd:{NFSU2_TR(0x612ccd);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x612cb0u);}goto L612cb0;}}
}
B612ccf:L612ccf:{c.instructions+=5;NFSU2_TR(0x612ccf);
u8 U[4];
w4(U+0,u32(0x7a84d4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B612cd4:{NFSU2_TR(0x612cd4);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B612cd8:{NFSU2_TR(0x612cd8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B612cd9:{NFSU2_TR(0x612cd9);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B612cdd:{NFSU2_TR(0x612cdd);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B612cde:L612cde:{c.instructions+=1;NFSU2_TR(0x612cde);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x612ce3ull));
TAIL_STATIC(0x43dda0u,43d);
}
B612ce3:L612ce3:{c.instructions+=4;NFSU2_TR(0x612ce3);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B612ce7:{NFSU2_TR(0x612ce7);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B612cea:{NFSU2_TR(0x612cea);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B612ceb:{NFSU2_TR(0x612ceb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x612cf0ull));
TAIL_STATIC(0x43db50u,43d);
}
B612cf0:L612cf0:{c.instructions+=4;NFSU2_TR(0x612cf0);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B612cf3:{NFSU2_TR(0x612cf3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B612cf4:{NFSU2_TR(0x612cf4);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x50ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x50ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x50ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B612cf7:{NFSU2_TR(0x612cf7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B612cf8:L612cf8:{c.instructions+=6;NFSU2_TR(0x612cf8);
u8 U[4];
w4(U+0,u32(0x7a84c0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B612cfd:{NFSU2_TR(0x612cfd);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B612d01:{NFSU2_TR(0x612d01);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B612d02:{NFSU2_TR(0x612d02);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B612d06:{NFSU2_TR(0x612d06);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B612d07:{NFSU2_TR(0x612d07);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x612cdeu);}goto L612cde;}
}
B612d10:L612d10:{c.instructions+=11;NFSU2_TR(0x612d10);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B612d11:{NFSU2_TR(0x612d11);
__builtin_memmove((R+20),(R+16),4);
}
B612d13:{NFSU2_TR(0x612d13);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff8ull))));
}
B612d16:{NFSU2_TR(0x612d16);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x2cull))));
}
B612d19:{NFSU2_TR(0x612d19);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B612d1a:{NFSU2_TR(0x612d1a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B612d1b:{NFSU2_TR(0x612d1b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B612d1e:{NFSU2_TR(0x612d1e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B612d1f:{NFSU2_TR(0x612d1f);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B612d21:{NFSU2_TR(0x612d21);
__builtin_memmove((R+4),(R+24),4);
}
B612d23:{NFSU2_TR(0x612d23);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x612d28ull));
TAIL_STATIC(0x5b96a0u,5b9);
}
B612d28:L612d28:{c.instructions+=4;NFSU2_TR(0x612d28);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B612d2a:{NFSU2_TR(0x612d2a);
__builtin_memmove((R+4),(R+24),4);
}
B612d2c:{NFSU2_TR(0x612d2c);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B612d30:{NFSU2_TR(0x612d30);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x612d35ull));
TAIL_STATIC(0x5b96e0u,5b9);
}
B612d35:L612d35:{c.instructions+=6;NFSU2_TR(0x612d35);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B612d38:{NFSU2_TR(0x612d38);
__builtin_memmove((R+24),(R+0),4);
}
B612d3a:{NFSU2_TR(0x612d3a);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B612d3c:{NFSU2_TR(0x612d3c);
__builtin_memmove((R+4),(R+28),4);
}
B612d3e:{NFSU2_TR(0x612d3e);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B612d42:{NFSU2_TR(0x612d42);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x612d47ull));
TAIL_STATIC(0x5b96a0u,5b9);
}
B612d47:L612d47:{c.instructions+=4;NFSU2_TR(0x612d47);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B612d49:{NFSU2_TR(0x612d49);
__builtin_memmove((R+4),(R+28),4);
}
B612d4b:{NFSU2_TR(0x612d4b);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B612d4f:{NFSU2_TR(0x612d4f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x612d54ull));
TAIL_STATIC(0x5b96e0u,5b9);
}
B612d54:L612d54:{c.instructions+=6;NFSU2_TR(0x612d54);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B612d57:{NFSU2_TR(0x612d57);
__builtin_memmove((R+12),(R+0),4);
}
B612d59:{NFSU2_TR(0x612d59);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B612d5b:{NFSU2_TR(0x612d5b);
__builtin_memmove((R+4),(R+28),4);
}
B612d5d:{NFSU2_TR(0x612d5d);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B612d61:{NFSU2_TR(0x612d61);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x612d66ull));
TAIL_STATIC(0x5b96a0u,5b9);
}
B612d66:L612d66:{c.instructions+=4;NFSU2_TR(0x612d66);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B612d68:{NFSU2_TR(0x612d68);
__builtin_memmove((R+4),(R+28),4);
}
B612d6a:{NFSU2_TR(0x612d6a);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B612d6e:{NFSU2_TR(0x612d6e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x612d73ull));
TAIL_STATIC(0x5b96e0u,5b9);
}
B612d73:L612d73:{c.instructions+=4;NFSU2_TR(0x612d73);
__builtin_memmove((R+28),(R+0),4);
}
B612d75:{NFSU2_TR(0x612d75);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B612d76:{NFSU2_TR(0x612d76);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B612d7a:{NFSU2_TR(0x612d7a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x612d7full));
TAIL_STATIC(0x4022c0u,402);
}
B612d7f:L612d7f:{c.instructions+=2;NFSU2_TR(0x612d7f);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B612d80:{NFSU2_TR(0x612d80);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x612d85ull));
TAIL_STATIC(0x4022c0u,402);
}
B612d85:L612d85:{c.instructions+=2;NFSU2_TR(0x612d85);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B612d86:{NFSU2_TR(0x612d86);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x612d8bull));
TAIL_STATIC(0x4022c0u,402);
}
B612d8b:L612d8b:{c.instructions+=4;NFSU2_TR(0x612d8b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B612d8e:{NFSU2_TR(0x612d8e);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B612d96:{NFSU2_TR(0x612d96);
__builtin_memmove((R+12),(R+24),4);
}
B612d98:{NFSU2_TR(0x612d98);
{goto L612da0;}
}
B612da0:L612da0:{c.instructions+=8;NFSU2_TR(0x612da0);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B612da4:{NFSU2_TR(0x612da4);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B612da6:{NFSU2_TR(0x612da6);
{u32 ea_=u32(u32(7881964u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B612dac:{NFSU2_TR(0x612dac);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B612db2:{NFSU2_TR(0x612db2);
__asm__ volatile(".byte 0xd8,0xe1":::"memory");
}
B612db4:{NFSU2_TR(0x612db4);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B612db8:{NFSU2_TR(0x612db8);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B612dbc:{NFSU2_TR(0x612dbc);
__builtin_memmove((R+16),(R+16),4);
}
B612dc0:L612dc0:{c.instructions+=8;NFSU2_TR(0x612dc0);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B612dc4:{NFSU2_TR(0x612dc4);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B612dc7:{NFSU2_TR(0x612dc7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B612dca:{NFSU2_TR(0x612dca);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B612dcb:{NFSU2_TR(0x612dcb);
__builtin_memmove((R+28),(R+0),4);
}
B612dcd:{NFSU2_TR(0x612dcd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B612dce:{NFSU2_TR(0x612dce);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B612dd2:{NFSU2_TR(0x612dd2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x612dd7ull));
TAIL_STATIC(0x611a30u,611);
}
B612dd7:L612dd7:{c.instructions+=8;NFSU2_TR(0x612dd7);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B612dd9:{NFSU2_TR(0x612dd9);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B612ddb:{NFSU2_TR(0x612ddb);
u8 U[4];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B612ddf:{NFSU2_TR(0x612ddf);
u8 U[8];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B612de3:{NFSU2_TR(0x612de3);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B612de4:{NFSU2_TR(0x612de4);
u8 U[4];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B612de8:{NFSU2_TR(0x612de8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B612de9:{NFSU2_TR(0x612de9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x612deeull));
TAIL_STATIC(0x611b00u,611);
}
B612dee:L612dee:{c.instructions+=9;NFSU2_TR(0x612dee);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+28))));
}
B612df0:{NFSU2_TR(0x612df0);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xffffffull))));
}
B612df5:{NFSU2_TR(0x612df5);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+28))));
}
B612df7:{NFSU2_TR(0x612df7);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B612dfa:{NFSU2_TR(0x612dfa);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+12)),r4(U+0));
}
B612dfc:{NFSU2_TR(0x612dfc);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B612dfd:{NFSU2_TR(0x612dfd);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x4ull))));
}
B612e00:{NFSU2_TR(0x612e00);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x10ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x10ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B612e03:{NFSU2_TR(0x612e03);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x612dc0u);}goto L612dc0;}}
}
B612e05:L612e05:{c.instructions+=5;NFSU2_TR(0x612e05);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B612e09:{NFSU2_TR(0x612e09);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B612e0a:{NFSU2_TR(0x612e0a);
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
B612e0d:{NFSU2_TR(0x612e0d);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B612e11:{NFSU2_TR(0x612e11);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x612da0u);}goto L612da0;}}
}
B612e13:L612e13:{c.instructions+=3;NFSU2_TR(0x612e13);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B612e17:{NFSU2_TR(0x612e17);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B612e18:{NFSU2_TR(0x612e18);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x612e1dull));
TAIL_STATIC(0x4022c0u,402);
}
B612e1d:L612e1d:{c.instructions+=3;NFSU2_TR(0x612e1d);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B612e21:{NFSU2_TR(0x612e21);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B612e22:{NFSU2_TR(0x612e22);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x612e27ull));
TAIL_STATIC(0x4022c0u,402);
}
B612e27:L612e27:{c.instructions+=5;NFSU2_TR(0x612e27);
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
B612e2a:{NFSU2_TR(0x612e2a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B612e2b:{NFSU2_TR(0x612e2b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B612e2e:{NFSU2_TR(0x612e2e);
__builtin_memmove((R+4),(R+24),4);
}
B612e30:{NFSU2_TR(0x612e30);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x612e35ull));
TAIL_STATIC(0x4031c0u,403);
}
B612e35:L612e35:{c.instructions+=3;NFSU2_TR(0x612e35);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B612e38:{NFSU2_TR(0x612e38);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B612e39:{NFSU2_TR(0x612e39);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x612e3eull));
TAIL_STATIC(0x4031c0u,403);
}
B612e3e:L612e3e:{c.instructions+=8;NFSU2_TR(0x612e3e);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x46ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(s32(s16(r2(U+4)))));
}
B612e42:{NFSU2_TR(0x612e42);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(s32(s16(r2(U+4)))));
}
B612e46:{NFSU2_TR(0x612e46);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B612e4a:{NFSU2_TR(0x612e4a);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(r4(R+8)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B612e4d:{NFSU2_TR(0x612e4d);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+28))));
}
B612e4f:{NFSU2_TR(0x612e4f);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
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
B612e51:{NFSU2_TR(0x612e51);
__builtin_memmove((R+0),(R+28),4);
}
B612e53:{NFSU2_TR(0x612e53);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L612e97;}}
}
B612e55:L612e55:{c.instructions+=7;NFSU2_TR(0x612e55);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B612e59:{NFSU2_TR(0x612e59);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B612e5d:{NFSU2_TR(0x612e5d);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+24))));
}
B612e5f:{NFSU2_TR(0x612e5f);
w4(R+24,u32(u32(r4(R+24))-u32(r4(R+28))));
}
B612e61:{NFSU2_TR(0x612e61);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B612e65:{NFSU2_TR(0x612e65);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B612e69:{NFSU2_TR(0x612e69);
{goto L612e73;}
}
B612e6b:L612e6b:{c.instructions+=2;NFSU2_TR(0x612e6b);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B612e6f:{NFSU2_TR(0x612e6f);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B612e73:L612e73:{c.instructions+=13;NFSU2_TR(0x612e73);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B612e77:{NFSU2_TR(0x612e77);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+0))));
}
B612e79:{NFSU2_TR(0x612e79);
u8 U[9];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
w4(R+8,u32(r1(U+8)));
}
B612e7d:{NFSU2_TR(0x612e7d);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B612e80:{NFSU2_TR(0x612e80);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
__builtin_memmove((R+12),(U+0),1);
}
B612e82:{NFSU2_TR(0x612e82);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+8,shr<u32>(r4(R+8),u64(r4(U+0))));
}
B612e85:{NFSU2_TR(0x612e85);
w1(R+8,u8(u32(r1(R+8))&u32(u8(0xfull))));
}
B612e88:{NFSU2_TR(0x612e88);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w1(R+8,shl<u8>(r1(R+8),u64(r4(U+0))));
}
B612e8b:{NFSU2_TR(0x612e8b);
w1(R+8,u8(u32(r1(R+8))+u32(r1(R+12))));
}
B612e8d:{NFSU2_TR(0x612e8d);
u8 U[1];
__builtin_memmove((U+0),(R+8),1);
s1(u32(r4(R+0)),r1(U+0));
}
B612e8f:{NFSU2_TR(0x612e8f);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B612e90:{NFSU2_TR(0x612e90);
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
B612e92:{NFSU2_TR(0x612e92);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x612e6bu);}goto L612e6b;}}
}
B612e94:L612e94:{c.instructions+=1;NFSU2_TR(0x612e94);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B612e97:L612e97:{c.instructions+=3;NFSU2_TR(0x612e97);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B612e9b:{NFSU2_TR(0x612e9b);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B612e9c:{NFSU2_TR(0x612e9c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x612ea1ull));
TAIL_STATIC(0x4022c0u,402);
}
B612ea1:L612ea1:{c.instructions+=5;NFSU2_TR(0x612ea1);
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
B612ea4:{NFSU2_TR(0x612ea4);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B612ea5:{NFSU2_TR(0x612ea5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B612ea8:{NFSU2_TR(0x612ea8);
__builtin_memmove((R+4),(R+12),4);
}
B612eaa:{NFSU2_TR(0x612eaa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x612eafull));
TAIL_STATIC(0x4031c0u,403);
}
B612eaf:L612eaf:{c.instructions+=4;NFSU2_TR(0x612eaf);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B612eb3:{NFSU2_TR(0x612eb3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B612eb4:{NFSU2_TR(0x612eb4);
__builtin_memmove((R+4),(R+12),4);
}
B612eb6:{NFSU2_TR(0x612eb6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x612ebbull));
TAIL_STATIC(0x5b96d0u,5b9);
}
B612ebb:L612ebb:{c.instructions+=4;NFSU2_TR(0x612ebb);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B612ebf:{NFSU2_TR(0x612ebf);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B612ec0:{NFSU2_TR(0x612ec0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B612ec3:{NFSU2_TR(0x612ec3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x612ec8ull));
TAIL_STATIC(0x5b96d0u,5b9);
}
B612ec8:L612ec8:{c.instructions+=3;NFSU2_TR(0x612ec8);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B612ec9:{NFSU2_TR(0x612ec9);
__builtin_memmove((R+4),(R+24),4);
}
B612ecb:{NFSU2_TR(0x612ecb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x612ed0ull));
TAIL_STATIC(0x5b96d0u,5b9);
}
B612ed0:L612ed0:{c.instructions+=7;NFSU2_TR(0x612ed0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B612ed1:{NFSU2_TR(0x612ed1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B612ed2:{NFSU2_TR(0x612ed2);
w4(R+0,u32(0x1ull));
}
B612ed7:{NFSU2_TR(0x612ed7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B612ed8:{NFSU2_TR(0x612ed8);
__builtin_memmove((R+16),(R+20),4);
}
B612eda:{NFSU2_TR(0x612eda);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B612edb:{NFSU2_TR(0x612edb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B612ee0:L612ee0:{c.instructions+=7;NFSU2_TR(0x612ee0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x24ull))));
}
B612ee3:{NFSU2_TR(0x612ee3);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B612ee4:{NFSU2_TR(0x612ee4);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B612ee5:{NFSU2_TR(0x612ee5);
u8 U[4];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B612ee9:{NFSU2_TR(0x612ee9);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B612eea:{NFSU2_TR(0x612eea);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B612eeb:{NFSU2_TR(0x612eeb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x612ef0ull));
TAIL_STATIC(0x5be040u,5be);
}
B612ef0:L612ef0:{c.instructions+=6;NFSU2_TR(0x612ef0);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B612ef4:{NFSU2_TR(0x612ef4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B612ef7:{NFSU2_TR(0x612ef7);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B612ef9:{NFSU2_TR(0x612ef9);
__builtin_memmove((R+4),(R+28),4);
}
B612efb:{NFSU2_TR(0x612efb);
u8 U[8];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B612eff:{NFSU2_TR(0x612eff);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x612f04ull));
TAIL_STATIC(0x5b96a0u,5b9);
}
B612f04:L612f04:{c.instructions+=4;NFSU2_TR(0x612f04);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B612f08:{NFSU2_TR(0x612f08);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B612f0a:{NFSU2_TR(0x612f0a);
__builtin_memmove((R+12),(R+0),4);
}
B612f0c:{NFSU2_TR(0x612f0c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x612f11ull));
TAIL_STATIC(0x5b96a0u,5b9);
}
B612f11:L612f11:{c.instructions+=5;NFSU2_TR(0x612f11);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B612f15:{NFSU2_TR(0x612f15);
__builtin_memmove((R+20),(R+0),4);
}
B612f17:{NFSU2_TR(0x612f17);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B612f19:{NFSU2_TR(0x612f19);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B612f1d:{NFSU2_TR(0x612f1d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x612f22ull));
TAIL_STATIC(0x5b96a0u,5b9);
}
B612f22:L612f22:{c.instructions+=8;NFSU2_TR(0x612f22);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(s32(s16(r2(U+4)))));
}
B612f26:{NFSU2_TR(0x612f26);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x46ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(s32(s16(r2(U+4)))));
}
B612f2a:{NFSU2_TR(0x612f2a);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(r4(R+8)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B612f2d:{NFSU2_TR(0x612f2d);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B612f30:{NFSU2_TR(0x612f30);
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
B612f32:{NFSU2_TR(0x612f32);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B612f36:{NFSU2_TR(0x612f36);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B612f3a:{NFSU2_TR(0x612f3a);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L612fea;}}
}
B612f40:L612f40:{c.instructions+=7;NFSU2_TR(0x612f40);
__builtin_memmove((R+4),(R+0),4);
}
B612f42:{NFSU2_TR(0x612f42);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+12))));
}
B612f44:{NFSU2_TR(0x612f44);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B612f45:{NFSU2_TR(0x612f45);
__builtin_memmove((R+24),(R+12),4);
}
B612f47:{NFSU2_TR(0x612f47);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B612f4b:{NFSU2_TR(0x612f4b);
w4(R+20,u32(u32(r4(R+20))-u32(r4(R+12))));
}
B612f4d:{NFSU2_TR(0x612f4d);
__builtin_memmove((R+4),(R+4),4);
}
B612f50:L612f50:{c.instructions+=3;NFSU2_TR(0x612f50);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B612f53:{NFSU2_TR(0x612f53);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B612f58:{NFSU2_TR(0x612f58);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L612f5f;}}
}
B612f5a:L612f5a:{c.instructions+=2;NFSU2_TR(0x612f5a);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B612f5d:{NFSU2_TR(0x612f5d);
{goto L612fd4;}
}
B612f5f:L612f5f:{c.instructions+=4;NFSU2_TR(0x612f5f);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B612f61:{NFSU2_TR(0x612f61);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B612f65:{NFSU2_TR(0x612f65);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B612f69:{NFSU2_TR(0x612f69);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L612f71;}}
}
B612f6b:L612f6b:{c.instructions+=1;NFSU2_TR(0x612f6b);
{u32 ea_=u32(u32(7882060u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B612f71:L612f71:{c.instructions+=9;NFSU2_TR(0x612f71);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B612f74:{NFSU2_TR(0x612f74);
{u32 ea_=u32(u32(7882056u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B612f7a:{NFSU2_TR(0x612f7a);
u8 U[8];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B612f7e:{NFSU2_TR(0x612f7e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B612f7f:{NFSU2_TR(0x612f7f);
__builtin_memmove((R+28),(R+0),4);
}
B612f81:{NFSU2_TR(0x612f81);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B612f85:{NFSU2_TR(0x612f85);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B612f86:{NFSU2_TR(0x612f86);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B612f8a:{NFSU2_TR(0x612f8a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x612f8full));
TAIL_STATIC(0x611a30u,611);
}
B612f8f:L612f8f:{c.instructions+=13;NFSU2_TR(0x612f8f);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B612f95:{NFSU2_TR(0x612f95);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B612f99:{NFSU2_TR(0x612f99);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B612f9d:{NFSU2_TR(0x612f9d);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B612f9f:{NFSU2_TR(0x612f9f);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B612fa3:{NFSU2_TR(0x612fa3);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B612fa5:{NFSU2_TR(0x612fa5);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B612fa9:{NFSU2_TR(0x612fa9);
u8 U[4];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B612fad:{NFSU2_TR(0x612fad);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B612fae:{NFSU2_TR(0x612fae);
u8 U[4];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B612fb2:{NFSU2_TR(0x612fb2);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B612fb3:{NFSU2_TR(0x612fb3);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B612fb7:{NFSU2_TR(0x612fb7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x612fbcull));
TAIL_STATIC(0x611b00u,611);
}
B612fbc:L612fbc:{c.instructions+=7;NFSU2_TR(0x612fbc);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B612fc0:{NFSU2_TR(0x612fc0);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B612fc4:{NFSU2_TR(0x612fc4);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+28))));
}
B612fc6:{NFSU2_TR(0x612fc6);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xffffffull))));
}
B612fcb:{NFSU2_TR(0x612fcb);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B612fce:{NFSU2_TR(0x612fce);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+28))));
}
B612fd0:{NFSU2_TR(0x612fd0);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B612fd4:L612fd4:{c.instructions+=4;NFSU2_TR(0x612fd4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+24)),r4(U+0));
}
B612fd6:{NFSU2_TR(0x612fd6);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x4ull))));
}
B612fd9:{NFSU2_TR(0x612fd9);
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
B612fdb:{NFSU2_TR(0x612fdb);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x612f50u);}goto L612f50;}}
}
B612fe1:L612fe1:{c.instructions+=3;NFSU2_TR(0x612fe1);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B612fe5:{NFSU2_TR(0x612fe5);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B612fe9:{NFSU2_TR(0x612fe9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B612fea:L612fea:{c.instructions+=3;NFSU2_TR(0x612fea);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B612fee:{NFSU2_TR(0x612fee);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B612fef:{NFSU2_TR(0x612fef);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x612ff4ull));
TAIL_STATIC(0x5b96d0u,5b9);
}
B612ff4:L612ff4:{c.instructions+=3;NFSU2_TR(0x612ff4);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B612ff8:{NFSU2_TR(0x612ff8);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B612ff9:{NFSU2_TR(0x612ff9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x612ffeull));
TAIL_STATIC(0x5b96d0u,5b9);
}
B612ffe:L612ffe:{c.instructions+=2;NFSU2_TR(0x612ffe);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B612fff:{NFSU2_TR(0x612fff);
__builtin_memmove((R+4),(R+28),4);
TAIL_STATIC(0x613001u,613);
}
XIT:NFSU2_TR_EXIT(0x612,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
