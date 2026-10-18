#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_401(u8* __restrict R,Cpu& c);
u32 body_402(u8* __restrict R,Cpu& c);
u32 body_43c(u8* __restrict R,Cpu& c);
u32 body_43d(u8* __restrict R,Cpu& c);
u32 body_570(u8* __restrict R,Cpu& c);
u32 body_571(u8* __restrict R,Cpu& c);
u32 body_573(u8* __restrict R,Cpu& c);
u32 body_5ba(u8* __restrict R,Cpu& c);
u32 body_5ea(u8* __restrict R,Cpu& c);
u32 body_75b(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x572,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x572,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_572(u8* __restrict R,Cpu& c);
u32 page_572(Cpu& c){return body_572(c.regs.data(),c);}
__attribute__((noinline)) u32 body_572(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x572003:goto L572003;
case 0x572005:c.instructions+=2;goto B572005;
case 0x572007:c.instructions+=1;goto B572007;
case 0x572009:goto L572009;
case 0x57200b:c.instructions+=1;goto B57200b;
case 0x57200d:goto L57200d;
case 0x572010:c.instructions+=2;goto B572010;
case 0x572012:c.instructions+=1;goto B572012;
case 0x572017:goto L572017;
case 0x57201a:c.instructions+=2;goto B57201a;
case 0x57201c:c.instructions+=1;goto B57201c;
case 0x57201e:goto L57201e;
case 0x572020:c.instructions+=1;goto B572020;
case 0x572022:goto L572022;
case 0x572025:c.instructions+=2;goto B572025;
case 0x572028:c.instructions+=1;goto B572028;
case 0x572029:goto L572029;
case 0x57202c:c.instructions+=2;goto B57202c;
case 0x57202e:c.instructions+=1;goto B57202e;
case 0x572030:goto L572030;
case 0x572032:c.instructions+=1;goto B572032;
case 0x572034:goto L572034;
case 0x572037:c.instructions+=2;goto B572037;
case 0x57203a:c.instructions+=1;goto B57203a;
case 0x57203b:goto L57203b;
case 0x57203e:c.instructions+=2;goto B57203e;
case 0x572040:c.instructions+=1;goto B572040;
case 0x572042:goto L572042;
case 0x572044:c.instructions+=1;goto B572044;
case 0x572046:goto L572046;
case 0x572049:c.instructions+=2;goto B572049;
case 0x57204c:c.instructions+=1;goto B57204c;
case 0x57204d:goto L57204d;
case 0x572050:c.instructions+=2;goto B572050;
case 0x572052:c.instructions+=1;goto B572052;
case 0x572054:goto L572054;
case 0x572056:c.instructions+=1;goto B572056;
case 0x572058:goto L572058;
case 0x57205b:c.instructions+=2;goto B57205b;
case 0x57205e:c.instructions+=1;goto B57205e;
case 0x57205f:goto L57205f;
case 0x572062:c.instructions+=2;goto B572062;
case 0x572064:c.instructions+=1;goto B572064;
case 0x572066:goto L572066;
case 0x572068:c.instructions+=1;goto B572068;
case 0x57206a:goto L57206a;
case 0x57206d:c.instructions+=2;goto B57206d;
case 0x572070:c.instructions+=1;goto B572070;
case 0x572071:goto L572071;
case 0x572074:c.instructions+=2;goto B572074;
case 0x572076:c.instructions+=1;goto B572076;
case 0x572078:goto L572078;
case 0x57207a:c.instructions+=1;goto B57207a;
case 0x57207c:goto L57207c;
case 0x57207f:c.instructions+=2;goto B57207f;
case 0x572082:c.instructions+=1;goto B572082;
case 0x572083:goto L572083;
case 0x572086:c.instructions+=2;goto B572086;
case 0x572088:c.instructions+=1;goto B572088;
case 0x57208a:goto L57208a;
case 0x57208c:c.instructions+=1;goto B57208c;
case 0x57208e:goto L57208e;
case 0x572091:c.instructions+=2;goto B572091;
case 0x572094:c.instructions+=1;goto B572094;
case 0x572095:goto L572095;
case 0x572098:c.instructions+=2;goto B572098;
case 0x57209a:c.instructions+=1;goto B57209a;
case 0x57209c:goto L57209c;
case 0x57209e:c.instructions+=1;goto B57209e;
case 0x5720a0:goto L5720a0;
case 0x5720a3:c.instructions+=2;goto B5720a3;
case 0x5720a6:c.instructions+=1;goto B5720a6;
case 0x5720a7:goto L5720a7;
case 0x5720aa:c.instructions+=2;goto B5720aa;
case 0x5720ac:c.instructions+=1;goto B5720ac;
case 0x5720b2:goto L5720b2;
case 0x5720b4:c.instructions+=1;goto B5720b4;
case 0x5720ba:goto L5720ba;
case 0x5720bd:c.instructions+=5;goto B5720bd;
case 0x5720c0:c.instructions+=4;goto B5720c0;
case 0x5720c1:c.instructions+=3;goto B5720c1;
case 0x5720c2:c.instructions+=2;goto B5720c2;
case 0x5720c3:c.instructions+=1;goto B5720c3;
case 0x5720d0:goto L5720d0;
case 0x5720d4:c.instructions+=6;goto B5720d4;
case 0x5720d7:c.instructions+=5;goto B5720d7;
case 0x5720d8:c.instructions+=4;goto B5720d8;
case 0x5720dc:c.instructions+=3;goto B5720dc;
case 0x5720de:c.instructions+=2;goto B5720de;
case 0x5720df:c.instructions+=1;goto B5720df;
case 0x5720e4:goto L5720e4;
case 0x5720e7:c.instructions+=2;goto B5720e7;
case 0x5720e9:c.instructions+=1;goto B5720e9;
case 0x5720eb:goto L5720eb;
case 0x5720ee:c.instructions+=1;goto B5720ee;
case 0x5720ef:goto L5720ef;
case 0x5720f1:c.instructions+=2;goto B5720f1;
case 0x5720f3:c.instructions+=1;goto B5720f3;
case 0x5720f5:goto L5720f5;
case 0x5720f9:c.instructions+=1;goto B5720f9;
case 0x572100:goto L572100;
case 0x572104:c.instructions+=1;goto B572104;
case 0x572106:goto L572106;
case 0x572107:c.instructions+=2;goto B572107;
case 0x572109:c.instructions+=1;goto B572109;
case 0x57210b:goto L57210b;
case 0x57210f:c.instructions+=2;goto B57210f;
case 0x572112:c.instructions+=1;goto B572112;
case 0x572113:goto L572113;
case 0x572115:c.instructions+=2;goto B572115;
case 0x572118:c.instructions+=1;goto B572118;
case 0x572120:goto L572120;
case 0x572124:c.instructions+=8;goto B572124;
case 0x572128:c.instructions+=7;goto B572128;
case 0x572129:c.instructions+=6;goto B572129;
case 0x57212a:c.instructions+=5;goto B57212a;
case 0x57212b:c.instructions+=4;goto B57212b;
case 0x57212c:c.instructions+=3;goto B57212c;
case 0x57212d:c.instructions+=2;goto B57212d;
case 0x57212e:c.instructions+=1;goto B57212e;
case 0x572133:goto L572133;
case 0x572139:c.instructions+=5;goto B572139;
case 0x57213c:c.instructions+=4;goto B57213c;
case 0x57213e:c.instructions+=3;goto B57213e;
case 0x572140:c.instructions+=2;goto B572140;
case 0x572142:c.instructions+=1;goto B572142;
case 0x572144:goto L572144;
case 0x572148:c.instructions+=2;goto B572148;
case 0x57214d:c.instructions+=1;goto B57214d;
case 0x572150:goto L572150;
case 0x572153:c.instructions+=1;goto B572153;
case 0x572155:goto L572155;
case 0x572157:goto L572157;
case 0x572159:c.instructions+=1;goto B572159;
case 0x57215b:goto L57215b;
case 0x57215e:c.instructions+=1;goto B57215e;
case 0x572160:goto L572160;
case 0x572163:c.instructions+=1;goto B572163;
case 0x572165:goto L572165;
case 0x572168:c.instructions+=2;goto B572168;
case 0x57216a:c.instructions+=1;goto B57216a;
case 0x57216c:goto L57216c;
case 0x57216f:c.instructions+=1;goto B57216f;
case 0x572171:goto L572171;
case 0x572174:c.instructions+=1;goto B572174;
case 0x572176:goto L572176;
case 0x572178:goto L572178;
case 0x572179:c.instructions+=2;goto B572179;
case 0x57217c:c.instructions+=1;goto B57217c;
case 0x57217e:goto L57217e;
case 0x57217f:c.instructions+=3;goto B57217f;
case 0x572182:c.instructions+=2;goto B572182;
case 0x572184:c.instructions+=1;goto B572184;
case 0x572186:goto L572186;
case 0x572188:goto L572188;
case 0x572189:c.instructions+=4;goto B572189;
case 0x57218a:c.instructions+=3;goto B57218a;
case 0x57218b:c.instructions+=2;goto B57218b;
case 0x57218c:c.instructions+=1;goto B57218c;
case 0x572190:goto L572190;
case 0x572194:c.instructions+=5;goto B572194;
case 0x572195:c.instructions+=4;goto B572195;
case 0x572196:c.instructions+=3;goto B572196;
case 0x572197:c.instructions+=2;goto B572197;
case 0x572198:c.instructions+=1;goto B572198;
case 0x57219d:goto L57219d;
case 0x5721a1:c.instructions+=5;goto B5721a1;
case 0x5721a7:c.instructions+=4;goto B5721a7;
case 0x5721aa:c.instructions+=3;goto B5721aa;
case 0x5721ad:c.instructions+=2;goto B5721ad;
case 0x5721af:c.instructions+=1;goto B5721af;
case 0x5721b1:goto L5721b1;
case 0x5721b3:c.instructions+=1;goto B5721b3;
case 0x5721b5:goto L5721b5;
case 0x5721b7:c.instructions+=7;goto B5721b7;
case 0x5721bd:c.instructions+=6;goto B5721bd;
case 0x5721c3:c.instructions+=5;goto B5721c3;
case 0x5721c6:c.instructions+=4;goto B5721c6;
case 0x5721c7:c.instructions+=3;goto B5721c7;
case 0x5721c8:c.instructions+=2;goto B5721c8;
case 0x5721c9:c.instructions+=1;goto B5721c9;
case 0x5721ce:goto L5721ce;
case 0x5721d1:c.instructions+=2;goto B5721d1;
case 0x5721d3:c.instructions+=1;goto B5721d3;
case 0x5721d5:goto L5721d5;
case 0x5721d8:c.instructions+=1;goto B5721d8;
case 0x5721da:goto L5721da;
case 0x5721e1:c.instructions+=7;goto B5721e1;
case 0x5721e3:c.instructions+=6;goto B5721e3;
case 0x5721e9:c.instructions+=5;goto B5721e9;
case 0x5721ef:c.instructions+=4;goto B5721ef;
case 0x5721f0:c.instructions+=3;goto B5721f0;
case 0x5721f1:c.instructions+=2;goto B5721f1;
case 0x5721f2:c.instructions+=1;goto B5721f2;
case 0x5721f7:goto L5721f7;
case 0x5721fa:c.instructions+=2;goto B5721fa;
case 0x5721fc:c.instructions+=1;goto B5721fc;
case 0x5721fe:goto L5721fe;
case 0x572201:c.instructions+=4;goto B572201;
case 0x572202:c.instructions+=3;goto B572202;
case 0x572203:c.instructions+=2;goto B572203;
case 0x572204:c.instructions+=1;goto B572204;
case 0x572205:goto L572205;
case 0x572206:c.instructions+=4;goto B572206;
case 0x572207:c.instructions+=3;goto B572207;
case 0x572209:c.instructions+=2;goto B572209;
case 0x57220a:c.instructions+=1;goto B57220a;
case 0x572210:goto L572210;
case 0x572211:c.instructions+=5;goto B572211;
case 0x572217:c.instructions+=4;goto B572217;
case 0x572219:c.instructions+=3;goto B572219;
case 0x57221e:c.instructions+=2;goto B57221e;
case 0x572226:c.instructions+=1;goto B572226;
case 0x572228:goto L572228;
case 0x572229:c.instructions+=5;goto B572229;
case 0x57222a:c.instructions+=4;goto B57222a;
case 0x57222e:c.instructions+=3;goto B57222e;
case 0x57222f:c.instructions+=2;goto B57222f;
case 0x572233:c.instructions+=1;goto B572233;
case 0x572238:goto L572238;
case 0x57223b:c.instructions+=1;goto B57223b;
case 0x57223d:goto L57223d;
case 0x572240:c.instructions+=1;goto B572240;
case 0x572242:goto L572242;
case 0x572246:c.instructions+=1;goto B572246;
case 0x57224a:goto L57224a;
case 0x57224e:goto L57224e;
case 0x572251:c.instructions+=2;goto B572251;
case 0x572252:c.instructions+=1;goto B572252;
case 0x572254:goto L572254;
case 0x572255:c.instructions+=2;goto B572255;
case 0x572256:c.instructions+=1;goto B572256;
case 0x572257:goto L572257;
case 0x57225b:c.instructions+=9;goto B57225b;
case 0x57225f:c.instructions+=8;goto B57225f;
case 0x572265:c.instructions+=7;goto B572265;
case 0x572268:c.instructions+=6;goto B572268;
case 0x57226a:c.instructions+=5;goto B57226a;
case 0x57226d:c.instructions+=4;goto B57226d;
case 0x572273:c.instructions+=3;goto B572273;
case 0x572276:c.instructions+=2;goto B572276;
case 0x572277:c.instructions+=1;goto B572277;
case 0x572278:goto L572278;
case 0x57227b:c.instructions+=1;goto B57227b;
case 0x57227d:goto L57227d;
case 0x572281:c.instructions+=3;goto B572281;
case 0x572284:c.instructions+=2;goto B572284;
case 0x572288:c.instructions+=1;goto B572288;
case 0x57228a:goto L57228a;
case 0x57228d:c.instructions+=1;goto B57228d;
case 0x57228f:goto L57228f;
case 0x572293:c.instructions+=3;goto B572293;
case 0x572297:c.instructions+=2;goto B572297;
case 0x57229b:c.instructions+=1;goto B57229b;
case 0x5722a0:goto L5722a0;
case 0x5722a4:c.instructions+=6;goto B5722a4;
case 0x5722a5:c.instructions+=5;goto B5722a5;
case 0x5722a7:c.instructions+=4;goto B5722a7;
case 0x5722a9:c.instructions+=3;goto B5722a9;
case 0x5722ab:c.instructions+=2;goto B5722ab;
case 0x5722ae:c.instructions+=1;goto B5722ae;
case 0x5722b0:goto L5722b0;
case 0x5722b3:c.instructions+=5;goto B5722b3;
case 0x5722b7:c.instructions+=4;goto B5722b7;
case 0x5722bb:c.instructions+=3;goto B5722bb;
case 0x5722bd:c.instructions+=2;goto B5722bd;
case 0x5722c0:c.instructions+=1;goto B5722c0;
case 0x5722c2:goto L5722c2;
case 0x5722c8:c.instructions+=2;goto B5722c8;
case 0x5722c9:c.instructions+=1;goto B5722c9;
case 0x5722cc:goto L5722cc;
case 0x5722ce:c.instructions+=2;goto B5722ce;
case 0x5722d0:c.instructions+=1;goto B5722d0;
case 0x5722d2:goto L5722d2;
case 0x5722d3:c.instructions+=1;goto B5722d3;
case 0x5722d5:goto L5722d5;
case 0x5722d9:c.instructions+=4;goto B5722d9;
case 0x5722db:c.instructions+=3;goto B5722db;
case 0x5722dd:c.instructions+=2;goto B5722dd;
case 0x5722e0:c.instructions+=1;goto B5722e0;
case 0x5722e2:goto L5722e2;
case 0x5722e3:c.instructions+=3;goto B5722e3;
case 0x5722e6:c.instructions+=2;goto B5722e6;
case 0x5722e8:c.instructions+=1;goto B5722e8;
case 0x5722ea:goto L5722ea;
case 0x5722ec:c.instructions+=2;goto B5722ec;
case 0x5722ed:c.instructions+=1;goto B5722ed;
case 0x5722ef:goto L5722ef;
case 0x5722f0:c.instructions+=1;goto B5722f0;
case 0x5722f2:goto L5722f2;
case 0x5722f4:goto L5722f4;
case 0x5722f7:c.instructions+=2;goto B5722f7;
case 0x5722f9:c.instructions+=1;goto B5722f9;
case 0x5722fb:goto L5722fb;
case 0x5722ff:c.instructions+=10;goto B5722ff;
case 0x572303:c.instructions+=9;goto B572303;
case 0x572307:c.instructions+=8;goto B572307;
case 0x57230a:c.instructions+=7;goto B57230a;
case 0x57230c:c.instructions+=6;goto B57230c;
case 0x572310:c.instructions+=5;goto B572310;
case 0x572313:c.instructions+=4;goto B572313;
case 0x572315:c.instructions+=3;goto B572315;
case 0x572319:c.instructions+=2;goto B572319;
case 0x57231a:c.instructions+=1;goto B57231a;
case 0x57231d:goto L57231d;
case 0x572323:c.instructions+=6;goto B572323;
case 0x572327:c.instructions+=5;goto B572327;
case 0x57232a:c.instructions+=4;goto B57232a;
case 0x57232c:c.instructions+=3;goto B57232c;
case 0x572330:c.instructions+=2;goto B572330;
case 0x572331:c.instructions+=1;goto B572331;
case 0x572340:goto L572340;
case 0x572341:c.instructions+=6;goto B572341;
case 0x572343:c.instructions+=5;goto B572343;
case 0x572345:c.instructions+=4;goto B572345;
case 0x572346:c.instructions+=3;goto B572346;
case 0x572348:c.instructions+=2;goto B572348;
case 0x57234b:c.instructions+=1;goto B57234b;
case 0x572350:goto L572350;
case 0x572353:c.instructions+=7;goto B572353;
case 0x572356:c.instructions+=6;goto B572356;
case 0x572358:c.instructions+=5;goto B572358;
case 0x57235c:c.instructions+=4;goto B57235c;
case 0x57235d:c.instructions+=3;goto B57235d;
case 0x572360:c.instructions+=2;goto B572360;
case 0x572363:c.instructions+=1;goto B572363;
case 0x572365:goto L572365;
case 0x572367:c.instructions+=2;goto B572367;
case 0x57236c:c.instructions+=1;goto B57236c;
case 0x572371:goto L572371;
case 0x572373:goto L572373;
case 0x572378:c.instructions+=1;goto B572378;
case 0x57237d:goto L57237d;
case 0x57237f:goto L57237f;
case 0x572380:c.instructions+=3;goto B572380;
case 0x572382:c.instructions+=2;goto B572382;
case 0x572383:c.instructions+=1;goto B572383;
case 0x572390:goto L572390;
case 0x572393:c.instructions+=9;goto B572393;
case 0x572394:c.instructions+=8;goto B572394;
case 0x572395:c.instructions+=7;goto B572395;
case 0x572396:c.instructions+=6;goto B572396;
case 0x572397:c.instructions+=5;goto B572397;
case 0x572399:c.instructions+=4;goto B572399;
case 0x57239c:c.instructions+=3;goto B57239c;
case 0x57239e:c.instructions+=2;goto B57239e;
case 0x5723a2:c.instructions+=1;goto B5723a2;
case 0x5723a5:goto L5723a5;
case 0x5723a9:c.instructions+=2;goto B5723a9;
case 0x5723ad:c.instructions+=1;goto B5723ad;
case 0x5723af:goto L5723af;
case 0x5723b2:c.instructions+=2;goto B5723b2;
case 0x5723b4:c.instructions+=1;goto B5723b4;
case 0x5723b6:goto L5723b6;
case 0x5723b9:c.instructions+=1;goto B5723b9;
case 0x5723bb:goto L5723bb;
case 0x5723bf:c.instructions+=2;goto B5723bf;
case 0x5723c1:c.instructions+=1;goto B5723c1;
case 0x5723c3:goto L5723c3;
case 0x5723c5:goto L5723c5;
case 0x5723c9:c.instructions+=3;goto B5723c9;
case 0x5723cc:c.instructions+=2;goto B5723cc;
case 0x5723cd:c.instructions+=1;goto B5723cd;
case 0x5723d2:goto L5723d2;
case 0x5723d6:c.instructions+=1;goto B5723d6;
case 0x5723db:goto L5723db;
case 0x5723de:c.instructions+=4;goto B5723de;
case 0x5723df:c.instructions+=3;goto B5723df;
case 0x5723e1:c.instructions+=2;goto B5723e1;
case 0x5723e5:c.instructions+=1;goto B5723e5;
case 0x5723ea:goto L5723ea;
case 0x5723ed:c.instructions+=1;goto B5723ed;
case 0x5723f2:goto L5723f2;
case 0x5723f6:c.instructions+=3;goto B5723f6;
case 0x5723f8:c.instructions+=2;goto B5723f8;
case 0x5723fc:c.instructions+=1;goto B5723fc;
case 0x5723fe:goto L5723fe;
case 0x572402:c.instructions+=2;goto B572402;
case 0x572406:c.instructions+=1;goto B572406;
case 0x572408:goto L572408;
case 0x57240b:c.instructions+=4;goto B57240b;
case 0x57240f:c.instructions+=3;goto B57240f;
case 0x572411:c.instructions+=2;goto B572411;
case 0x572414:c.instructions+=1;goto B572414;
case 0x572416:goto L572416;
case 0x572418:goto L572418;
case 0x572419:c.instructions+=4;goto B572419;
case 0x57241c:c.instructions+=3;goto B57241c;
case 0x57241f:c.instructions+=2;goto B57241f;
case 0x572423:c.instructions+=1;goto B572423;
case 0x572425:goto L572425;
case 0x572427:goto L572427;
case 0x572429:goto L572429;
case 0x57242c:c.instructions+=1;goto B57242c;
case 0x57242e:goto L57242e;
case 0x572432:c.instructions+=13;goto B572432;
case 0x572436:c.instructions+=12;goto B572436;
case 0x57243a:c.instructions+=11;goto B57243a;
case 0x57243e:c.instructions+=10;goto B57243e;
case 0x572441:c.instructions+=9;goto B572441;
case 0x572449:c.instructions+=8;goto B572449;
case 0x57244d:c.instructions+=7;goto B57244d;
case 0x57244e:c.instructions+=6;goto B57244e;
case 0x57244f:c.instructions+=5;goto B57244f;
case 0x572450:c.instructions+=4;goto B572450;
case 0x572452:c.instructions+=3;goto B572452;
case 0x572453:c.instructions+=2;goto B572453;
case 0x572456:c.instructions+=1;goto B572456;
case 0x572459:goto L572459;
case 0x57245a:c.instructions+=6;goto B57245a;
case 0x57245b:c.instructions+=5;goto B57245b;
case 0x57245c:c.instructions+=4;goto B57245c;
case 0x57245e:c.instructions+=3;goto B57245e;
case 0x57245f:c.instructions+=2;goto B57245f;
case 0x572462:c.instructions+=1;goto B572462;
case 0x572470:goto L572470;
case 0x572471:c.instructions+=10;goto B572471;
case 0x572472:c.instructions+=9;goto B572472;
case 0x572473:c.instructions+=8;goto B572473;
case 0x572474:c.instructions+=7;goto B572474;
case 0x572476:c.instructions+=6;goto B572476;
case 0x572479:c.instructions+=5;goto B572479;
case 0x57247b:c.instructions+=4;goto B57247b;
case 0x57247e:c.instructions+=3;goto B57247e;
case 0x572481:c.instructions+=2;goto B572481;
case 0x572483:c.instructions+=1;goto B572483;
case 0x572486:goto L572486;
case 0x572489:c.instructions+=2;goto B572489;
case 0x57248b:c.instructions+=1;goto B57248b;
case 0x57248d:goto L57248d;
case 0x57248f:c.instructions+=5;goto B57248f;
case 0x572491:c.instructions+=4;goto B572491;
case 0x572493:c.instructions+=3;goto B572493;
case 0x572495:c.instructions+=2;goto B572495;
case 0x572498:c.instructions+=1;goto B572498;
case 0x57249a:goto L57249a;
case 0x57249d:c.instructions+=4;goto B57249d;
case 0x5724a1:c.instructions+=3;goto B5724a1;
case 0x5724a3:c.instructions+=2;goto B5724a3;
case 0x5724a6:c.instructions+=1;goto B5724a6;
case 0x5724a8:goto L5724a8;
case 0x5724aa:c.instructions+=2;goto B5724aa;
case 0x5724ab:c.instructions+=1;goto B5724ab;
case 0x5724b0:goto L5724b0;
case 0x5724b3:c.instructions+=1;goto B5724b3;
case 0x5724b8:goto L5724b8;
case 0x5724bb:c.instructions+=2;goto B5724bb;
case 0x5724bd:c.instructions+=1;goto B5724bd;
case 0x5724bf:goto L5724bf;
case 0x5724c1:goto L5724c1;
case 0x5724c5:c.instructions+=4;goto B5724c5;
case 0x5724c8:c.instructions+=3;goto B5724c8;
case 0x5724cb:c.instructions+=2;goto B5724cb;
case 0x5724cd:c.instructions+=1;goto B5724cd;
case 0x5724cf:goto L5724cf;
case 0x5724d0:c.instructions+=3;goto B5724d0;
case 0x5724d3:c.instructions+=2;goto B5724d3;
case 0x5724d6:c.instructions+=1;goto B5724d6;
case 0x5724d8:goto L5724d8;
case 0x5724db:c.instructions+=1;goto B5724db;
case 0x5724dd:goto L5724dd;
case 0x5724e0:goto L5724e0;
case 0x5724e3:c.instructions+=3;goto B5724e3;
case 0x5724e8:c.instructions+=2;goto B5724e8;
case 0x5724ea:c.instructions+=1;goto B5724ea;
case 0x5724ec:goto L5724ec;
case 0x5724ef:goto L5724ef;
case 0x5724f2:c.instructions+=10;goto B5724f2;
case 0x5724f5:c.instructions+=9;goto B5724f5;
case 0x5724f6:c.instructions+=8;goto B5724f6;
case 0x5724f8:c.instructions+=7;goto B5724f8;
case 0x5724fa:c.instructions+=6;goto B5724fa;
case 0x5724fb:c.instructions+=5;goto B5724fb;
case 0x5724fe:c.instructions+=4;goto B5724fe;
case 0x5724ff:c.instructions+=3;goto B5724ff;
case 0x572501:c.instructions+=2;goto B572501;
case 0x572502:c.instructions+=1;goto B572502;
case 0x572505:goto L572505;
case 0x572507:goto L572507;
case 0x57250a:c.instructions+=2;goto B57250a;
case 0x57250f:c.instructions+=1;goto B57250f;
case 0x572520:goto L572520;
case 0x572521:c.instructions+=7;goto B572521;
case 0x572522:c.instructions+=6;goto B572522;
case 0x572523:c.instructions+=5;goto B572523;
case 0x572524:c.instructions+=4;goto B572524;
case 0x57252a:c.instructions+=3;goto B57252a;
case 0x57252c:c.instructions+=2;goto B57252c;
case 0x57252e:c.instructions+=1;goto B57252e;
case 0x572530:goto L572530;
case 0x572535:c.instructions+=1;goto B572535;
case 0x572540:goto L572540;
case 0x572546:c.instructions+=4;goto B572546;
case 0x57254c:c.instructions+=3;goto B57254c;
case 0x57254e:c.instructions+=2;goto B57254e;
case 0x572551:c.instructions+=1;goto B572551;
case 0x572553:goto L572553;
case 0x572559:c.instructions+=2;goto B572559;
case 0x57255b:c.instructions+=1;goto B57255b;
case 0x57255d:goto L57255d;
case 0x572562:c.instructions+=1;goto B572562;
case 0x572564:goto L572564;
case 0x57256a:c.instructions+=9;goto B57256a;
case 0x57256c:c.instructions+=8;goto B57256c;
case 0x57256e:c.instructions+=7;goto B57256e;
case 0x572572:c.instructions+=6;goto B572572;
case 0x572576:c.instructions+=5;goto B572576;
case 0x57257c:c.instructions+=4;goto B57257c;
case 0x572582:c.instructions+=3;goto B572582;
case 0x572584:c.instructions+=2;goto B572584;
case 0x572587:c.instructions+=1;goto B572587;
case 0x572589:goto L572589;
case 0x57258d:c.instructions+=6;goto B57258d;
case 0x572593:c.instructions+=5;goto B572593;
case 0x572599:c.instructions+=4;goto B572599;
case 0x57259f:c.instructions+=3;goto B57259f;
case 0x5725a1:c.instructions+=2;goto B5725a1;
case 0x5725a4:c.instructions+=1;goto B5725a4;
case 0x5725a6:goto L5725a6;
case 0x5725ac:c.instructions+=2;goto B5725ac;
case 0x5725ae:c.instructions+=1;goto B5725ae;
case 0x5725b0:goto L5725b0;
case 0x5725b6:c.instructions+=6;goto B5725b6;
case 0x5725ba:c.instructions+=5;goto B5725ba;
case 0x5725c0:c.instructions+=4;goto B5725c0;
case 0x5725c2:c.instructions+=3;goto B5725c2;
case 0x5725c4:c.instructions+=2;goto B5725c4;
case 0x5725c7:c.instructions+=1;goto B5725c7;
case 0x5725c9:goto L5725c9;
case 0x5725cb:goto L5725cb;
case 0x5725cf:c.instructions+=6;goto B5725cf;
case 0x5725d5:c.instructions+=5;goto B5725d5;
case 0x5725db:c.instructions+=4;goto B5725db;
case 0x5725dd:c.instructions+=3;goto B5725dd;
case 0x5725df:c.instructions+=2;goto B5725df;
case 0x5725e2:c.instructions+=1;goto B5725e2;
case 0x5725e4:goto L5725e4;
case 0x5725e6:c.instructions+=1;goto B5725e6;
case 0x5725ec:goto L5725ec;
case 0x5725f2:goto L5725f2;
case 0x5725f8:goto L5725f8;
case 0x5725fb:c.instructions+=2;goto B5725fb;
case 0x5725fc:c.instructions+=1;goto B5725fc;
case 0x572602:goto L572602;
case 0x572605:c.instructions+=1;goto B572605;
case 0x57260b:goto L57260b;
case 0x57260c:c.instructions+=4;goto B57260c;
case 0x57260d:c.instructions+=3;goto B57260d;
case 0x57260e:c.instructions+=2;goto B57260e;
case 0x57260f:c.instructions+=1;goto B57260f;
case 0x572610:goto L572610;
case 0x572613:c.instructions+=6;goto B572613;
case 0x572614:c.instructions+=5;goto B572614;
case 0x572615:c.instructions+=4;goto B572615;
case 0x572616:c.instructions+=3;goto B572616;
case 0x572617:c.instructions+=2;goto B572617;
case 0x57261f:c.instructions+=1;goto B57261f;
case 0x572624:goto L572624;
case 0x572626:c.instructions+=3;goto B572626;
case 0x572629:c.instructions+=2;goto B572629;
case 0x57262e:c.instructions+=1;goto B57262e;
case 0x572630:goto L572630;
case 0x572635:c.instructions+=3;goto B572635;
case 0x572636:c.instructions+=2;goto B572636;
case 0x572638:c.instructions+=1;goto B572638;
case 0x57263d:goto L57263d;
case 0x57263f:c.instructions+=3;goto B57263f;
case 0x572642:c.instructions+=2;goto B572642;
case 0x572643:c.instructions+=1;goto B572643;
case 0x572645:goto L572645;
case 0x572647:c.instructions+=1;goto B572647;
case 0x572649:goto L572649;
case 0x57264d:c.instructions+=5;goto B57264d;
case 0x572653:c.instructions+=4;goto B572653;
case 0x572657:c.instructions+=3;goto B572657;
case 0x57265b:c.instructions+=2;goto B57265b;
case 0x57265c:c.instructions+=1;goto B57265c;
case 0x572661:goto L572661;
case 0x572664:c.instructions+=2;goto B572664;
case 0x572666:c.instructions+=1;goto B572666;
case 0x572668:goto L572668;
case 0x57266b:c.instructions+=4;goto B57266b;
case 0x57266c:c.instructions+=3;goto B57266c;
case 0x57266d:c.instructions+=2;goto B57266d;
case 0x57266e:c.instructions+=1;goto B57266e;
case 0x572673:goto L572673;
case 0x572676:goto L572676;
case 0x57267a:c.instructions+=5;goto B57267a;
case 0x57267b:c.instructions+=4;goto B57267b;
case 0x57267e:c.instructions+=3;goto B57267e;
case 0x572684:c.instructions+=2;goto B572684;
case 0x572688:c.instructions+=1;goto B572688;
case 0x57268a:goto L57268a;
case 0x57268f:c.instructions+=2;goto B57268f;
case 0x572690:c.instructions+=1;goto B572690;
case 0x572695:goto L572695;
case 0x572698:c.instructions+=6;goto B572698;
case 0x572699:c.instructions+=5;goto B572699;
case 0x57269a:c.instructions+=4;goto B57269a;
case 0x57269b:c.instructions+=3;goto B57269b;
case 0x57269c:c.instructions+=2;goto B57269c;
case 0x57269f:c.instructions+=1;goto B57269f;
case 0x5726a0:goto L5726a0;
case 0x5726a1:c.instructions+=6;goto B5726a1;
case 0x5726a5:c.instructions+=5;goto B5726a5;
case 0x5726ab:c.instructions+=4;goto B5726ab;
case 0x5726af:c.instructions+=3;goto B5726af;
case 0x5726b3:c.instructions+=2;goto B5726b3;
case 0x5726b4:c.instructions+=1;goto B5726b4;
case 0x5726b9:goto L5726b9;
case 0x5726bc:c.instructions+=2;goto B5726bc;
case 0x5726be:c.instructions+=1;goto B5726be;
case 0x5726c0:goto L5726c0;
case 0x5726c2:c.instructions+=3;goto B5726c2;
case 0x5726c4:c.instructions+=2;goto B5726c4;
case 0x5726c5:c.instructions+=1;goto B5726c5;
case 0x5726ca:goto L5726ca;
case 0x5726cd:goto L5726cd;
case 0x5726ce:c.instructions+=1;goto B5726ce;
case 0x5726d0:goto L5726d0;
case 0x5726d1:c.instructions+=3;goto B5726d1;
case 0x5726d7:c.instructions+=2;goto B5726d7;
case 0x5726da:c.instructions+=1;goto B5726da;
case 0x5726dc:goto L5726dc;
case 0x5726e1:c.instructions+=3;goto B5726e1;
case 0x5726e3:c.instructions+=2;goto B5726e3;
case 0x5726e5:c.instructions+=1;goto B5726e5;
case 0x5726e7:goto L5726e7;
case 0x5726ea:c.instructions+=1;goto B5726ea;
case 0x5726f0:goto L5726f0;
case 0x5726f5:c.instructions+=2;goto B5726f5;
case 0x5726f7:c.instructions+=1;goto B5726f7;
case 0x5726fd:goto L5726fd;
case 0x572700:c.instructions+=2;goto B572700;
case 0x572702:c.instructions+=1;goto B572702;
case 0x572708:goto L572708;
case 0x57270b:c.instructions+=5;goto B57270b;
case 0x57270f:c.instructions+=4;goto B57270f;
case 0x572711:c.instructions+=3;goto B572711;
case 0x572713:c.instructions+=2;goto B572713;
case 0x572716:c.instructions+=1;goto B572716;
case 0x57271c:goto L57271c;
case 0x57271e:c.instructions+=6;goto B57271e;
case 0x572721:c.instructions+=5;goto B572721;
case 0x572728:c.instructions+=4;goto B572728;
case 0x57272e:c.instructions+=3;goto B57272e;
case 0x572730:c.instructions+=2;goto B572730;
case 0x572733:c.instructions+=1;goto B572733;
case 0x572735:goto L572735;
case 0x572739:c.instructions+=4;goto B572739;
case 0x57273c:c.instructions+=3;goto B57273c;
case 0x57273e:c.instructions+=2;goto B57273e;
case 0x572741:c.instructions+=1;goto B572741;
case 0x572743:goto L572743;
case 0x572746:c.instructions+=1;goto B572746;
case 0x57274a:goto L57274a;
case 0x57274d:c.instructions+=11;goto B57274d;
case 0x572751:c.instructions+=10;goto B572751;
case 0x572753:c.instructions+=9;goto B572753;
case 0x572756:c.instructions+=8;goto B572756;
case 0x572758:c.instructions+=7;goto B572758;
case 0x57275a:c.instructions+=6;goto B57275a;
case 0x57275d:c.instructions+=5;goto B57275d;
case 0x572760:c.instructions+=4;goto B572760;
case 0x572762:c.instructions+=3;goto B572762;
case 0x572765:c.instructions+=2;goto B572765;
case 0x572769:c.instructions+=1;goto B572769;
case 0x57276b:goto L57276b;
case 0x57276f:c.instructions+=10;goto B57276f;
case 0x572772:c.instructions+=9;goto B572772;
case 0x572774:c.instructions+=8;goto B572774;
case 0x572777:c.instructions+=7;goto B572777;
case 0x572778:c.instructions+=6;goto B572778;
case 0x57277b:c.instructions+=5;goto B57277b;
case 0x57277c:c.instructions+=4;goto B57277c;
case 0x57277f:c.instructions+=3;goto B57277f;
case 0x572780:c.instructions+=2;goto B572780;
case 0x572786:c.instructions+=1;goto B572786;
case 0x57278b:goto L57278b;
case 0x57278d:c.instructions+=1;goto B57278d;
case 0x57278f:goto L57278f;
case 0x572791:c.instructions+=3;goto B572791;
case 0x572796:c.instructions+=2;goto B572796;
case 0x572799:c.instructions+=1;goto B572799;
case 0x5727a0:goto L5727a0;
case 0x5727a1:c.instructions+=1;goto B5727a1;
case 0x5727b0:goto L5727b0;
case 0x5727b4:c.instructions+=8;goto B5727b4;
case 0x5727b5:c.instructions+=7;goto B5727b5;
case 0x5727b7:c.instructions+=6;goto B5727b7;
case 0x5727ba:c.instructions+=5;goto B5727ba;
case 0x5727c0:c.instructions+=4;goto B5727c0;
case 0x5727c1:c.instructions+=3;goto B5727c1;
case 0x5727c2:c.instructions+=2;goto B5727c2;
case 0x5727c6:c.instructions+=1;goto B5727c6;
case 0x5727c8:goto L5727c8;
case 0x5727ca:c.instructions+=12;goto B5727ca;
case 0x5727ce:c.instructions+=11;goto B5727ce;
case 0x5727d1:c.instructions+=10;goto B5727d1;
case 0x5727d3:c.instructions+=9;goto B5727d3;
case 0x5727d6:c.instructions+=8;goto B5727d6;
case 0x5727d8:c.instructions+=7;goto B5727d8;
case 0x5727da:c.instructions+=6;goto B5727da;
case 0x5727dd:c.instructions+=5;goto B5727dd;
case 0x5727e0:c.instructions+=4;goto B5727e0;
case 0x5727e2:c.instructions+=3;goto B5727e2;
case 0x5727e5:c.instructions+=2;goto B5727e5;
case 0x5727ea:c.instructions+=1;goto B5727ea;
case 0x5727ec:goto L5727ec;
case 0x5727f1:goto L5727f1;
case 0x5727f4:c.instructions+=2;goto B5727f4;
case 0x5727f6:c.instructions+=1;goto B5727f6;
case 0x5727f9:goto L5727f9;
case 0x5727fd:c.instructions+=2;goto B5727fd;
case 0x5727fe:c.instructions+=1;goto B5727fe;
case 0x572803:goto L572803;
case 0x572806:c.instructions+=3;goto B572806;
case 0x572807:c.instructions+=2;goto B572807;
case 0x572808:c.instructions+=1;goto B572808;
case 0x572810:goto L572810;
case 0x572814:c.instructions+=17;goto B572814;
case 0x572817:c.instructions+=16;goto B572817;
case 0x57281b:c.instructions+=15;goto B57281b;
case 0x57281e:c.instructions+=14;goto B57281e;
case 0x572820:c.instructions+=13;goto B572820;
case 0x572824:c.instructions+=12;goto B572824;
case 0x57282a:c.instructions+=11;goto B57282a;
case 0x572831:c.instructions+=10;goto B572831;
case 0x572838:c.instructions+=9;goto B572838;
case 0x57283b:c.instructions+=8;goto B57283b;
case 0x57283d:c.instructions+=7;goto B57283d;
case 0x572840:c.instructions+=6;goto B572840;
case 0x572842:c.instructions+=5;goto B572842;
case 0x572848:c.instructions+=4;goto B572848;
case 0x57284b:c.instructions+=3;goto B57284b;
case 0x572851:c.instructions+=2;goto B572851;
case 0x572854:c.instructions+=1;goto B572854;
case 0x572860:goto L572860;
case 0x572861:c.instructions+=5;goto B572861;
case 0x572862:c.instructions+=4;goto B572862;
case 0x572864:c.instructions+=3;goto B572864;
case 0x572867:c.instructions+=2;goto B572867;
case 0x57286a:c.instructions+=1;goto B57286a;
case 0x57286f:goto L57286f;
case 0x572871:c.instructions+=2;goto B572871;
case 0x572873:c.instructions+=1;goto B572873;
case 0x572875:goto L572875;
case 0x572878:c.instructions+=2;goto B572878;
case 0x57287a:c.instructions+=1;goto B57287a;
case 0x57287c:goto L57287c;
case 0x57287f:c.instructions+=2;goto B57287f;
case 0x572880:c.instructions+=1;goto B572880;
case 0x572885:goto L572885;
case 0x572887:goto L572887;
case 0x57288d:goto L57288d;
case 0x572890:c.instructions+=15;goto B572890;
case 0x572893:c.instructions+=14;goto B572893;
case 0x572897:c.instructions+=13;goto B572897;
case 0x572899:c.instructions+=12;goto B572899;
case 0x57289b:c.instructions+=11;goto B57289b;
case 0x57289f:c.instructions+=10;goto B57289f;
case 0x5728a0:c.instructions+=9;goto B5728a0;
case 0x5728a2:c.instructions+=8;goto B5728a2;
case 0x5728a4:c.instructions+=7;goto B5728a4;
case 0x5728a7:c.instructions+=6;goto B5728a7;
case 0x5728ab:c.instructions+=5;goto B5728ab;
case 0x5728ad:c.instructions+=4;goto B5728ad;
case 0x5728b0:c.instructions+=3;goto B5728b0;
case 0x5728b2:c.instructions+=2;goto B5728b2;
case 0x5728b3:c.instructions+=1;goto B5728b3;
case 0x5728c0:goto L5728c0;
case 0x5728c5:c.instructions+=2;goto B5728c5;
case 0x5728c7:c.instructions+=1;goto B5728c7;
case 0x5728c9:goto L5728c9;
case 0x5728cf:c.instructions+=17;goto B5728cf;
case 0x5728d4:c.instructions+=16;goto B5728d4;
case 0x5728da:c.instructions+=15;goto B5728da;
case 0x5728e0:c.instructions+=14;goto B5728e0;
case 0x5728e5:c.instructions+=13;goto B5728e5;
case 0x5728ef:c.instructions+=12;goto B5728ef;
case 0x5728f5:c.instructions+=11;goto B5728f5;
case 0x5728fb:c.instructions+=10;goto B5728fb;
case 0x572901:c.instructions+=9;goto B572901;
case 0x57290b:c.instructions+=8;goto B57290b;
case 0x572911:c.instructions+=7;goto B572911;
case 0x572916:c.instructions+=6;goto B572916;
case 0x57291c:c.instructions+=5;goto B57291c;
case 0x572922:c.instructions+=4;goto B572922;
case 0x572928:c.instructions+=3;goto B572928;
case 0x57292e:c.instructions+=2;goto B57292e;
case 0x572934:c.instructions+=1;goto B572934;
case 0x572936:goto L572936;
case 0x57293c:goto L57293c;
case 0x57293e:c.instructions+=1;goto B57293e;
case 0x572940:goto L572940;
case 0x572946:c.instructions+=8;goto B572946;
case 0x57294c:c.instructions+=7;goto B57294c;
case 0x572952:c.instructions+=6;goto B572952;
case 0x572958:c.instructions+=5;goto B572958;
case 0x57295a:c.instructions+=4;goto B57295a;
case 0x57295c:c.instructions+=3;goto B57295c;
case 0x57295e:c.instructions+=2;goto B57295e;
case 0x572961:c.instructions+=1;goto B572961;
case 0x572963:goto L572963;
case 0x572966:c.instructions+=4;goto B572966;
case 0x57296a:c.instructions+=3;goto B57296a;
case 0x57296c:c.instructions+=2;goto B57296c;
case 0x57296f:c.instructions+=1;goto B57296f;
case 0x572971:goto L572971;
case 0x572973:goto L572973;
case 0x572975:goto L572975;
case 0x57297f:goto L57297f;
case 0x572985:c.instructions+=2;goto B572985;
case 0x572987:c.instructions+=1;goto B572987;
case 0x572989:goto L572989;
case 0x57298f:c.instructions+=8;goto B57298f;
case 0x572995:c.instructions+=7;goto B572995;
case 0x57299b:c.instructions+=6;goto B57299b;
case 0x5729a1:c.instructions+=5;goto B5729a1;
case 0x5729a3:c.instructions+=4;goto B5729a3;
case 0x5729a5:c.instructions+=3;goto B5729a5;
case 0x5729a7:c.instructions+=2;goto B5729a7;
case 0x5729aa:c.instructions+=1;goto B5729aa;
case 0x5729ac:goto L5729ac;
case 0x5729af:c.instructions+=4;goto B5729af;
case 0x5729b3:c.instructions+=3;goto B5729b3;
case 0x5729b5:c.instructions+=2;goto B5729b5;
case 0x5729b8:c.instructions+=1;goto B5729b8;
case 0x5729ba:goto L5729ba;
case 0x5729c4:c.instructions+=1;goto B5729c4;
case 0x5729c5:goto L5729c5;
case 0x5729c7:c.instructions+=1;goto B5729c7;
case 0x5729d1:goto L5729d1;
case 0x5729e0:goto L5729e0;
case 0x5729e6:c.instructions+=17;goto B5729e6;
case 0x5729e8:c.instructions+=16;goto B5729e8;
case 0x5729ea:c.instructions+=15;goto B5729ea;
case 0x5729f4:c.instructions+=14;goto B5729f4;
case 0x5729fe:c.instructions+=13;goto B5729fe;
case 0x572a08:c.instructions+=12;goto B572a08;
case 0x572a0d:c.instructions+=11;goto B572a0d;
case 0x572a12:c.instructions+=10;goto B572a12;
case 0x572a1c:c.instructions+=9;goto B572a1c;
case 0x572a22:c.instructions+=8;goto B572a22;
case 0x572a27:c.instructions+=7;goto B572a27;
case 0x572a2c:c.instructions+=6;goto B572a2c;
case 0x572a31:c.instructions+=5;goto B572a31;
case 0x572a36:c.instructions+=4;goto B572a36;
case 0x572a3b:c.instructions+=3;goto B572a3b;
case 0x572a45:c.instructions+=2;goto B572a45;
case 0x572a4b:c.instructions+=1;goto B572a4b;
case 0x572a50:goto L572a50;
case 0x572a51:c.instructions+=10;goto B572a51;
case 0x572a53:c.instructions+=9;goto B572a53;
case 0x572a56:c.instructions+=8;goto B572a56;
case 0x572a5c:c.instructions+=7;goto B572a5c;
case 0x572a61:c.instructions+=6;goto B572a61;
case 0x572a67:c.instructions+=5;goto B572a67;
case 0x572a68:c.instructions+=4;goto B572a68;
case 0x572a6e:c.instructions+=3;goto B572a6e;
case 0x572a70:c.instructions+=2;goto B572a70;
case 0x572a73:c.instructions+=1;goto B572a73;
case 0x572a79:goto L572a79;
case 0x572a7c:c.instructions+=2;goto B572a7c;
case 0x572a7d:c.instructions+=1;goto B572a7d;
case 0x572a7f:goto L572a7f;
case 0x572a80:c.instructions+=1;goto B572a80;
case 0x572a86:goto L572a86;
case 0x572a87:c.instructions+=1;goto B572a87;
case 0x572a8d:goto L572a8d;
case 0x572a8f:goto L572a8f;
case 0x572a93:c.instructions+=4;goto B572a93;
case 0x572a96:c.instructions+=3;goto B572a96;
case 0x572a97:c.instructions+=2;goto B572a97;
case 0x572a9d:c.instructions+=1;goto B572a9d;
case 0x572aa2:goto L572aa2;
case 0x572aa6:c.instructions+=2;goto B572aa6;
case 0x572aa7:c.instructions+=1;goto B572aa7;
case 0x572aac:goto L572aac;
case 0x572ab0:c.instructions+=44;goto B572ab0;
case 0x572ab3:c.instructions+=43;goto B572ab3;
case 0x572ab6:c.instructions+=42;goto B572ab6;
case 0x572abe:c.instructions+=41;goto B572abe;
case 0x572ac2:c.instructions+=40;goto B572ac2;
case 0x572ac5:c.instructions+=39;goto B572ac5;
case 0x572ac7:c.instructions+=38;goto B572ac7;
case 0x572acb:c.instructions+=37;goto B572acb;
case 0x572acd:c.instructions+=36;goto B572acd;
case 0x572acf:c.instructions+=35;goto B572acf;
case 0x572ad2:c.instructions+=34;goto B572ad2;
case 0x572ad8:c.instructions+=33;goto B572ad8;
case 0x572ada:c.instructions+=32;goto B572ada;
case 0x572ade:c.instructions+=31;goto B572ade;
case 0x572ae1:c.instructions+=30;goto B572ae1;
case 0x572ae5:c.instructions+=29;goto B572ae5;
case 0x572ae8:c.instructions+=28;goto B572ae8;
case 0x572aea:c.instructions+=27;goto B572aea;
case 0x572aee:c.instructions+=26;goto B572aee;
case 0x572af1:c.instructions+=25;goto B572af1;
case 0x572af3:c.instructions+=24;goto B572af3;
case 0x572af6:c.instructions+=23;goto B572af6;
case 0x572afc:c.instructions+=22;goto B572afc;
case 0x572afe:c.instructions+=21;goto B572afe;
case 0x572b02:c.instructions+=20;goto B572b02;
case 0x572b05:c.instructions+=19;goto B572b05;
case 0x572b09:c.instructions+=18;goto B572b09;
case 0x572b0c:c.instructions+=17;goto B572b0c;
case 0x572b0e:c.instructions+=16;goto B572b0e;
case 0x572b12:c.instructions+=15;goto B572b12;
case 0x572b15:c.instructions+=14;goto B572b15;
case 0x572b17:c.instructions+=13;goto B572b17;
case 0x572b1a:c.instructions+=12;goto B572b1a;
case 0x572b20:c.instructions+=11;goto B572b20;
case 0x572b22:c.instructions+=10;goto B572b22;
case 0x572b26:c.instructions+=9;goto B572b26;
case 0x572b2a:c.instructions+=8;goto B572b2a;
case 0x572b2c:c.instructions+=7;goto B572b2c;
case 0x572b30:c.instructions+=6;goto B572b30;
case 0x572b34:c.instructions+=5;goto B572b34;
case 0x572b38:c.instructions+=4;goto B572b38;
case 0x572b3c:c.instructions+=3;goto B572b3c;
case 0x572b40:c.instructions+=2;goto B572b40;
case 0x572b46:c.instructions+=1;goto B572b46;
case 0x572b4b:goto L572b4b;
case 0x572b4f:c.instructions+=5;goto B572b4f;
case 0x572b50:c.instructions+=4;goto B572b50;
case 0x572b51:c.instructions+=3;goto B572b51;
case 0x572b55:c.instructions+=2;goto B572b55;
case 0x572b56:c.instructions+=1;goto B572b56;
case 0x572b5b:goto L572b5b;
case 0x572b61:c.instructions+=2;goto B572b61;
case 0x572b65:c.instructions+=1;goto B572b65;
case 0x572b6a:goto L572b6a;
case 0x572b6e:c.instructions+=5;goto B572b6e;
case 0x572b72:c.instructions+=4;goto B572b72;
case 0x572b73:c.instructions+=3;goto B572b73;
case 0x572b74:c.instructions+=2;goto B572b74;
case 0x572b75:c.instructions+=1;goto B572b75;
case 0x572b7a:goto L572b7a;
case 0x572b7e:c.instructions+=3;goto B572b7e;
case 0x572b82:c.instructions+=2;goto B572b82;
case 0x572b88:c.instructions+=1;goto B572b88;
case 0x572b8d:goto L572b8d;
case 0x572b91:c.instructions+=5;goto B572b91;
case 0x572b92:c.instructions+=4;goto B572b92;
case 0x572b96:c.instructions+=3;goto B572b96;
case 0x572b97:c.instructions+=2;goto B572b97;
case 0x572b98:c.instructions+=1;goto B572b98;
case 0x572b9d:goto L572b9d;
case 0x572ba1:c.instructions+=195;goto B572ba1;
case 0x572ba4:c.instructions+=194;goto B572ba4;
case 0x572ba8:c.instructions+=193;goto B572ba8;
case 0x572baa:c.instructions+=192;goto B572baa;
case 0x572bac:c.instructions+=191;goto B572bac;
case 0x572bb0:c.instructions+=190;goto B572bb0;
case 0x572bb3:c.instructions+=189;goto B572bb3;
case 0x572bb5:c.instructions+=188;goto B572bb5;
case 0x572bb9:c.instructions+=187;goto B572bb9;
case 0x572bbc:c.instructions+=186;goto B572bbc;
case 0x572bbe:c.instructions+=185;goto B572bbe;
case 0x572bc5:c.instructions+=184;goto B572bc5;
case 0x572bc9:c.instructions+=183;goto B572bc9;
case 0x572bcc:c.instructions+=182;goto B572bcc;
case 0x572bd0:c.instructions+=181;goto B572bd0;
case 0x572bd2:c.instructions+=180;goto B572bd2;
case 0x572bd4:c.instructions+=179;goto B572bd4;
case 0x572bd8:c.instructions+=178;goto B572bd8;
case 0x572bdb:c.instructions+=177;goto B572bdb;
case 0x572bdd:c.instructions+=176;goto B572bdd;
case 0x572be1:c.instructions+=175;goto B572be1;
case 0x572be4:c.instructions+=174;goto B572be4;
case 0x572be6:c.instructions+=173;goto B572be6;
case 0x572bed:c.instructions+=172;goto B572bed;
case 0x572bf1:c.instructions+=171;goto B572bf1;
case 0x572bf4:c.instructions+=170;goto B572bf4;
case 0x572bf8:c.instructions+=169;goto B572bf8;
case 0x572bfa:c.instructions+=168;goto B572bfa;
case 0x572bfc:c.instructions+=167;goto B572bfc;
case 0x572c00:c.instructions+=166;goto B572c00;
case 0x572c03:c.instructions+=165;goto B572c03;
case 0x572c05:c.instructions+=164;goto B572c05;
case 0x572c09:c.instructions+=163;goto B572c09;
case 0x572c0c:c.instructions+=162;goto B572c0c;
case 0x572c0e:c.instructions+=161;goto B572c0e;
case 0x572c15:c.instructions+=160;goto B572c15;
case 0x572c19:c.instructions+=159;goto B572c19;
case 0x572c1c:c.instructions+=158;goto B572c1c;
case 0x572c20:c.instructions+=157;goto B572c20;
case 0x572c22:c.instructions+=156;goto B572c22;
case 0x572c24:c.instructions+=155;goto B572c24;
case 0x572c28:c.instructions+=154;goto B572c28;
case 0x572c2b:c.instructions+=153;goto B572c2b;
case 0x572c2d:c.instructions+=152;goto B572c2d;
case 0x572c31:c.instructions+=151;goto B572c31;
case 0x572c34:c.instructions+=150;goto B572c34;
case 0x572c36:c.instructions+=149;goto B572c36;
case 0x572c3d:c.instructions+=148;goto B572c3d;
case 0x572c41:c.instructions+=147;goto B572c41;
case 0x572c44:c.instructions+=146;goto B572c44;
case 0x572c48:c.instructions+=145;goto B572c48;
case 0x572c4b:c.instructions+=144;goto B572c4b;
case 0x572c4d:c.instructions+=143;goto B572c4d;
case 0x572c51:c.instructions+=142;goto B572c51;
case 0x572c54:c.instructions+=141;goto B572c54;
case 0x572c56:c.instructions+=140;goto B572c56;
case 0x572c5a:c.instructions+=139;goto B572c5a;
case 0x572c5d:c.instructions+=138;goto B572c5d;
case 0x572c5f:c.instructions+=137;goto B572c5f;
case 0x572c66:c.instructions+=136;goto B572c66;
case 0x572c6a:c.instructions+=135;goto B572c6a;
case 0x572c6d:c.instructions+=134;goto B572c6d;
case 0x572c71:c.instructions+=133;goto B572c71;
case 0x572c74:c.instructions+=132;goto B572c74;
case 0x572c76:c.instructions+=131;goto B572c76;
case 0x572c7a:c.instructions+=130;goto B572c7a;
case 0x572c7d:c.instructions+=129;goto B572c7d;
case 0x572c7f:c.instructions+=128;goto B572c7f;
case 0x572c83:c.instructions+=127;goto B572c83;
case 0x572c86:c.instructions+=126;goto B572c86;
case 0x572c88:c.instructions+=125;goto B572c88;
case 0x572c8f:c.instructions+=124;goto B572c8f;
case 0x572c93:c.instructions+=123;goto B572c93;
case 0x572c96:c.instructions+=122;goto B572c96;
case 0x572c9a:c.instructions+=121;goto B572c9a;
case 0x572c9d:c.instructions+=120;goto B572c9d;
case 0x572c9f:c.instructions+=119;goto B572c9f;
case 0x572ca3:c.instructions+=118;goto B572ca3;
case 0x572ca6:c.instructions+=117;goto B572ca6;
case 0x572ca8:c.instructions+=116;goto B572ca8;
case 0x572cac:c.instructions+=115;goto B572cac;
case 0x572caf:c.instructions+=114;goto B572caf;
case 0x572cb1:c.instructions+=113;goto B572cb1;
case 0x572cb8:c.instructions+=112;goto B572cb8;
case 0x572cbc:c.instructions+=111;goto B572cbc;
case 0x572cbf:c.instructions+=110;goto B572cbf;
case 0x572cc3:c.instructions+=109;goto B572cc3;
case 0x572cc6:c.instructions+=108;goto B572cc6;
case 0x572cc8:c.instructions+=107;goto B572cc8;
case 0x572ccc:c.instructions+=106;goto B572ccc;
case 0x572ccf:c.instructions+=105;goto B572ccf;
case 0x572cd1:c.instructions+=104;goto B572cd1;
case 0x572cd5:c.instructions+=103;goto B572cd5;
case 0x572cd8:c.instructions+=102;goto B572cd8;
case 0x572cda:c.instructions+=101;goto B572cda;
case 0x572ce1:c.instructions+=100;goto B572ce1;
case 0x572ce5:c.instructions+=99;goto B572ce5;
case 0x572ce8:c.instructions+=98;goto B572ce8;
case 0x572cec:c.instructions+=97;goto B572cec;
case 0x572cef:c.instructions+=96;goto B572cef;
case 0x572cf1:c.instructions+=95;goto B572cf1;
case 0x572cf5:c.instructions+=94;goto B572cf5;
case 0x572cf8:c.instructions+=93;goto B572cf8;
case 0x572cfa:c.instructions+=92;goto B572cfa;
case 0x572cfe:c.instructions+=91;goto B572cfe;
case 0x572d01:c.instructions+=90;goto B572d01;
case 0x572d03:c.instructions+=89;goto B572d03;
case 0x572d0a:c.instructions+=88;goto B572d0a;
case 0x572d0e:c.instructions+=87;goto B572d0e;
case 0x572d11:c.instructions+=86;goto B572d11;
case 0x572d15:c.instructions+=85;goto B572d15;
case 0x572d18:c.instructions+=84;goto B572d18;
case 0x572d1a:c.instructions+=83;goto B572d1a;
case 0x572d1e:c.instructions+=82;goto B572d1e;
case 0x572d21:c.instructions+=81;goto B572d21;
case 0x572d23:c.instructions+=80;goto B572d23;
case 0x572d27:c.instructions+=79;goto B572d27;
case 0x572d2a:c.instructions+=78;goto B572d2a;
case 0x572d2c:c.instructions+=77;goto B572d2c;
case 0x572d33:c.instructions+=76;goto B572d33;
case 0x572d37:c.instructions+=75;goto B572d37;
case 0x572d3a:c.instructions+=74;goto B572d3a;
case 0x572d3e:c.instructions+=73;goto B572d3e;
case 0x572d41:c.instructions+=72;goto B572d41;
case 0x572d43:c.instructions+=71;goto B572d43;
case 0x572d47:c.instructions+=70;goto B572d47;
case 0x572d4a:c.instructions+=69;goto B572d4a;
case 0x572d4c:c.instructions+=68;goto B572d4c;
case 0x572d50:c.instructions+=67;goto B572d50;
case 0x572d53:c.instructions+=66;goto B572d53;
case 0x572d55:c.instructions+=65;goto B572d55;
case 0x572d5c:c.instructions+=64;goto B572d5c;
case 0x572d60:c.instructions+=63;goto B572d60;
case 0x572d63:c.instructions+=62;goto B572d63;
case 0x572d67:c.instructions+=61;goto B572d67;
case 0x572d6a:c.instructions+=60;goto B572d6a;
case 0x572d6c:c.instructions+=59;goto B572d6c;
case 0x572d70:c.instructions+=58;goto B572d70;
case 0x572d73:c.instructions+=57;goto B572d73;
case 0x572d75:c.instructions+=56;goto B572d75;
case 0x572d79:c.instructions+=55;goto B572d79;
case 0x572d7c:c.instructions+=54;goto B572d7c;
case 0x572d7e:c.instructions+=53;goto B572d7e;
case 0x572d85:c.instructions+=52;goto B572d85;
case 0x572d89:c.instructions+=51;goto B572d89;
case 0x572d8c:c.instructions+=50;goto B572d8c;
case 0x572d90:c.instructions+=49;goto B572d90;
case 0x572d93:c.instructions+=48;goto B572d93;
case 0x572d95:c.instructions+=47;goto B572d95;
case 0x572d99:c.instructions+=46;goto B572d99;
case 0x572d9c:c.instructions+=45;goto B572d9c;
case 0x572d9e:c.instructions+=44;goto B572d9e;
case 0x572da2:c.instructions+=43;goto B572da2;
case 0x572da5:c.instructions+=42;goto B572da5;
case 0x572da7:c.instructions+=41;goto B572da7;
case 0x572dae:c.instructions+=40;goto B572dae;
case 0x572db2:c.instructions+=39;goto B572db2;
case 0x572db5:c.instructions+=38;goto B572db5;
case 0x572db9:c.instructions+=37;goto B572db9;
case 0x572dbc:c.instructions+=36;goto B572dbc;
case 0x572dbe:c.instructions+=35;goto B572dbe;
case 0x572dc2:c.instructions+=34;goto B572dc2;
case 0x572dc5:c.instructions+=33;goto B572dc5;
case 0x572dc7:c.instructions+=32;goto B572dc7;
case 0x572dcb:c.instructions+=31;goto B572dcb;
case 0x572dce:c.instructions+=30;goto B572dce;
case 0x572dd0:c.instructions+=29;goto B572dd0;
case 0x572dd7:c.instructions+=28;goto B572dd7;
case 0x572ddb:c.instructions+=27;goto B572ddb;
case 0x572dde:c.instructions+=26;goto B572dde;
case 0x572de2:c.instructions+=25;goto B572de2;
case 0x572de5:c.instructions+=24;goto B572de5;
case 0x572de7:c.instructions+=23;goto B572de7;
case 0x572deb:c.instructions+=22;goto B572deb;
case 0x572dee:c.instructions+=21;goto B572dee;
case 0x572df0:c.instructions+=20;goto B572df0;
case 0x572df4:c.instructions+=19;goto B572df4;
case 0x572df7:c.instructions+=18;goto B572df7;
case 0x572df9:c.instructions+=17;goto B572df9;
case 0x572e00:c.instructions+=16;goto B572e00;
case 0x572e04:c.instructions+=15;goto B572e04;
case 0x572e07:c.instructions+=14;goto B572e07;
case 0x572e0b:c.instructions+=13;goto B572e0b;
case 0x572e0e:c.instructions+=12;goto B572e0e;
case 0x572e15:c.instructions+=11;goto B572e15;
case 0x572e16:c.instructions+=10;goto B572e16;
case 0x572e17:c.instructions+=9;goto B572e17;
case 0x572e19:c.instructions+=8;goto B572e19;
case 0x572e1d:c.instructions+=7;goto B572e1d;
case 0x572e20:c.instructions+=6;goto B572e20;
case 0x572e22:c.instructions+=5;goto B572e22;
case 0x572e26:c.instructions+=4;goto B572e26;
case 0x572e29:c.instructions+=3;goto B572e29;
case 0x572e2b:c.instructions+=2;goto B572e2b;
case 0x572e32:c.instructions+=1;goto B572e32;
case 0x572e37:goto L572e37;
case 0x572e3a:goto L572e3a;
case 0x572e3b:c.instructions+=3;goto B572e3b;
case 0x572e3d:c.instructions+=2;goto B572e3d;
case 0x572e3e:c.instructions+=1;goto B572e3e;
case 0x572e3f:goto L572e3f;
case 0x572e44:c.instructions+=1;goto B572e44;
case 0x572e50:goto L572e50;
case 0x572e51:c.instructions+=8;goto B572e51;
case 0x572e53:c.instructions+=7;goto B572e53;
case 0x572e56:c.instructions+=6;goto B572e56;
case 0x572e59:c.instructions+=5;goto B572e59;
case 0x572e5a:c.instructions+=4;goto B572e5a;
case 0x572e5b:c.instructions+=3;goto B572e5b;
case 0x572e5e:c.instructions+=2;goto B572e5e;
case 0x572e65:c.instructions+=1;goto B572e65;
case 0x572e6a:goto L572e6a;
case 0x572e6c:c.instructions+=1;goto B572e6c;
case 0x572e72:goto L572e72;
case 0x572e75:c.instructions+=21;goto B572e75;
case 0x572e7b:c.instructions+=20;goto B572e7b;
case 0x572e7d:c.instructions+=19;goto B572e7d;
case 0x572e81:c.instructions+=18;goto B572e81;
case 0x572e87:c.instructions+=17;goto B572e87;
case 0x572e8a:c.instructions+=16;goto B572e8a;
case 0x572e8e:c.instructions+=15;goto B572e8e;
case 0x572e94:c.instructions+=14;goto B572e94;
case 0x572e97:c.instructions+=13;goto B572e97;
case 0x572e9b:c.instructions+=12;goto B572e9b;
case 0x572e9f:c.instructions+=11;goto B572e9f;
case 0x572ea3:c.instructions+=10;goto B572ea3;
case 0x572ea7:c.instructions+=9;goto B572ea7;
case 0x572ea9:c.instructions+=8;goto B572ea9;
case 0x572ead:c.instructions+=7;goto B572ead;
case 0x572eb1:c.instructions+=6;goto B572eb1;
case 0x572eb3:c.instructions+=5;goto B572eb3;
case 0x572eb5:c.instructions+=4;goto B572eb5;
case 0x572ebb:c.instructions+=3;goto B572ebb;
case 0x572ebd:c.instructions+=2;goto B572ebd;
case 0x572ec0:c.instructions+=1;goto B572ec0;
case 0x572ec6:goto L572ec6;
case 0x572ecc:c.instructions+=3;goto B572ecc;
case 0x572ece:c.instructions+=2;goto B572ece;
case 0x572ed1:c.instructions+=1;goto B572ed1;
case 0x572ed3:goto L572ed3;
case 0x572ed5:c.instructions+=1;goto B572ed5;
case 0x572edb:goto L572edb;
case 0x572ee1:c.instructions+=15;goto B572ee1;
case 0x572ee3:c.instructions+=14;goto B572ee3;
case 0x572ee9:c.instructions+=13;goto B572ee9;
case 0x572eec:c.instructions+=12;goto B572eec;
case 0x572ef2:c.instructions+=11;goto B572ef2;
case 0x572ef8:c.instructions+=10;goto B572ef8;
case 0x572efa:c.instructions+=9;goto B572efa;
case 0x572efc:c.instructions+=8;goto B572efc;
case 0x572f02:c.instructions+=7;goto B572f02;
case 0x572f06:c.instructions+=6;goto B572f06;
case 0x572f0c:c.instructions+=5;goto B572f0c;
case 0x572f12:c.instructions+=4;goto B572f12;
case 0x572f16:c.instructions+=3;goto B572f16;
case 0x572f1c:c.instructions+=2;goto B572f1c;
case 0x572f20:c.instructions+=1;goto B572f20;
case 0x572f22:goto L572f22;
case 0x572f25:c.instructions+=2;goto B572f25;
case 0x572f26:c.instructions+=1;goto B572f26;
case 0x572f2b:goto L572f2b;
case 0x572f2d:goto L572f2d;
case 0x572f33:goto L572f33;
case 0x572f37:c.instructions+=5;goto B572f37;
case 0x572f39:c.instructions+=4;goto B572f39;
case 0x572f3b:c.instructions+=3;goto B572f3b;
case 0x572f3d:c.instructions+=2;goto B572f3d;
case 0x572f40:c.instructions+=1;goto B572f40;
case 0x572f42:goto L572f42;
case 0x572f48:c.instructions+=7;goto B572f48;
case 0x572f4f:c.instructions+=6;goto B572f4f;
case 0x572f51:c.instructions+=5;goto B572f51;
case 0x572f57:c.instructions+=4;goto B572f57;
case 0x572f5b:c.instructions+=3;goto B572f5b;
case 0x572f61:c.instructions+=2;goto B572f61;
case 0x572f65:c.instructions+=1;goto B572f65;
case 0x572f67:goto L572f67;
case 0x572f6b:c.instructions+=1;goto B572f6b;
case 0x572f6d:goto L572f6d;
case 0x572f71:c.instructions+=5;goto B572f71;
case 0x572f77:c.instructions+=4;goto B572f77;
case 0x572f7b:c.instructions+=3;goto B572f7b;
case 0x572f7f:c.instructions+=2;goto B572f7f;
case 0x572f85:c.instructions+=1;goto B572f85;
case 0x572f89:goto L572f89;
case 0x572f8d:c.instructions+=6;goto B572f8d;
case 0x572f8e:c.instructions+=5;goto B572f8e;
case 0x572f92:c.instructions+=4;goto B572f92;
case 0x572f93:c.instructions+=3;goto B572f93;
case 0x572f97:c.instructions+=2;goto B572f97;
case 0x572f98:c.instructions+=1;goto B572f98;
case 0x572f9d:goto L572f9d;
case 0x572fa2:c.instructions+=8;goto B572fa2;
case 0x572fa6:c.instructions+=7;goto B572fa6;
case 0x572fa9:c.instructions+=6;goto B572fa9;
case 0x572faa:c.instructions+=5;goto B572faa;
case 0x572fab:c.instructions+=4;goto B572fab;
case 0x572faf:c.instructions+=3;goto B572faf;
case 0x572fb0:c.instructions+=2;goto B572fb0;
case 0x572fb2:c.instructions+=1;goto B572fb2;
case 0x572fb7:goto L572fb7;
case 0x572fb8:c.instructions+=4;goto B572fb8;
case 0x572fb9:c.instructions+=3;goto B572fb9;
case 0x572fbb:c.instructions+=2;goto B572fbb;
case 0x572fbc:c.instructions+=1;goto B572fbc;
case 0x572fbd:goto L572fbd;
case 0x572fbf:goto L572fbf;
case 0x572fc0:c.instructions+=4;goto B572fc0;
case 0x572fc1:c.instructions+=3;goto B572fc1;
case 0x572fc3:c.instructions+=2;goto B572fc3;
case 0x572fc4:c.instructions+=1;goto B572fc4;
case 0x572fd0:goto L572fd0;
case 0x572fd4:c.instructions+=9;goto B572fd4;
case 0x572fd5:c.instructions+=8;goto B572fd5;
case 0x572fd7:c.instructions+=7;goto B572fd7;
case 0x572fdb:c.instructions+=6;goto B572fdb;
case 0x572fdc:c.instructions+=5;goto B572fdc;
case 0x572fdd:c.instructions+=4;goto B572fdd;
case 0x572fe0:c.instructions+=3;goto B572fe0;
case 0x572fe1:c.instructions+=2;goto B572fe1;
case 0x572fe4:c.instructions+=1;goto B572fe4;
case 0x572fe9:goto L572fe9;
case 0x572feb:c.instructions+=8;goto B572feb;
case 0x572fed:c.instructions+=7;goto B572fed;
case 0x572ff0:c.instructions+=6;goto B572ff0;
case 0x572ff3:c.instructions+=5;goto B572ff3;
case 0x572ff6:c.instructions+=4;goto B572ff6;
case 0x572ff9:c.instructions+=3;goto B572ff9;
case 0x572ffc:c.instructions+=2;goto B572ffc;
case 0x572fff:c.instructions+=1;goto B572fff;
default:missing_instruction(c.pc);}
B572003:L572003:{c.instructions+=3;NFSU2_TR(0x572003);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B572005:{NFSU2_TR(0x572005);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(r1(R+8))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B572007:{NFSU2_TR(0x572007);
if(r1(R+518)){{goto L572017;}}
}
B572009:L572009:{c.instructions+=2;NFSU2_TR(0x572009);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B57200b:{NFSU2_TR(0x57200b);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L572017;}}
}
B57200d:L57200d:{c.instructions+=3;NFSU2_TR(0x57200d);
w4(R+0,u32(s32(s8(r1(R+8)))));
}
B572010:{NFSU2_TR(0x572010);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+24)),r4(U+0));
}
B572012:{NFSU2_TR(0x572012);
w4(R+0,u32(0x1ull));
}
B572017:L572017:{c.instructions+=3;NFSU2_TR(0x572017);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x5ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B57201a:{NFSU2_TR(0x57201a);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(r1(R+8))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B57201c:{NFSU2_TR(0x57201c);
if(r1(R+518)){{goto L572029;}}
}
B57201e:L57201e:{c.instructions+=2;NFSU2_TR(0x57201e);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B572020:{NFSU2_TR(0x572020);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L572029;}}
}
B572022:L572022:{c.instructions+=3;NFSU2_TR(0x572022);
w4(R+8,u32(s32(s8(r1(R+8)))));
}
B572025:{NFSU2_TR(0x572025);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+8),4);
s4(u32(r4(U+4)),r4(U+8));
}
B572028:{NFSU2_TR(0x572028);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B572029:L572029:{c.instructions+=3;NFSU2_TR(0x572029);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B57202c:{NFSU2_TR(0x57202c);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(r1(R+8))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B57202e:{NFSU2_TR(0x57202e);
if(r1(R+518)){{goto L57203b;}}
}
B572030:L572030:{c.instructions+=2;NFSU2_TR(0x572030);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B572032:{NFSU2_TR(0x572032);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L57203b;}}
}
B572034:L572034:{c.instructions+=3;NFSU2_TR(0x572034);
w4(R+8,u32(s32(s8(r1(R+8)))));
}
B572037:{NFSU2_TR(0x572037);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+8),4);
s4(u32(r4(U+4)),r4(U+8));
}
B57203a:{NFSU2_TR(0x57203a);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B57203b:L57203b:{c.instructions+=3;NFSU2_TR(0x57203b);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x7ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B57203e:{NFSU2_TR(0x57203e);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(r1(R+8))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B572040:{NFSU2_TR(0x572040);
if(r1(R+518)){{goto L57204d;}}
}
B572042:L572042:{c.instructions+=2;NFSU2_TR(0x572042);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B572044:{NFSU2_TR(0x572044);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L57204d;}}
}
B572046:L572046:{c.instructions+=3;NFSU2_TR(0x572046);
w4(R+8,u32(s32(s8(r1(R+8)))));
}
B572049:{NFSU2_TR(0x572049);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+8),4);
s4(u32(r4(U+4)),r4(U+8));
}
B57204c:{NFSU2_TR(0x57204c);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B57204d:L57204d:{c.instructions+=3;NFSU2_TR(0x57204d);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B572050:{NFSU2_TR(0x572050);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(r1(R+8))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B572052:{NFSU2_TR(0x572052);
if(r1(R+518)){{goto L57205f;}}
}
B572054:L572054:{c.instructions+=2;NFSU2_TR(0x572054);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B572056:{NFSU2_TR(0x572056);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L57205f;}}
}
B572058:L572058:{c.instructions+=3;NFSU2_TR(0x572058);
w4(R+8,u32(s32(s8(r1(R+8)))));
}
B57205b:{NFSU2_TR(0x57205b);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+8),4);
s4(u32(r4(U+4)),r4(U+8));
}
B57205e:{NFSU2_TR(0x57205e);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B57205f:L57205f:{c.instructions+=3;NFSU2_TR(0x57205f);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x9ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B572062:{NFSU2_TR(0x572062);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(r1(R+8))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B572064:{NFSU2_TR(0x572064);
if(r1(R+518)){{goto L572071;}}
}
B572066:L572066:{c.instructions+=2;NFSU2_TR(0x572066);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B572068:{NFSU2_TR(0x572068);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L572071;}}
}
B57206a:L57206a:{c.instructions+=3;NFSU2_TR(0x57206a);
w4(R+8,u32(s32(s8(r1(R+8)))));
}
B57206d:{NFSU2_TR(0x57206d);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+8),4);
s4(u32(r4(U+4)),r4(U+8));
}
B572070:{NFSU2_TR(0x572070);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B572071:L572071:{c.instructions+=3;NFSU2_TR(0x572071);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xaull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B572074:{NFSU2_TR(0x572074);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(r1(R+8))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B572076:{NFSU2_TR(0x572076);
if(r1(R+518)){{goto L572083;}}
}
B572078:L572078:{c.instructions+=2;NFSU2_TR(0x572078);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B57207a:{NFSU2_TR(0x57207a);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L572083;}}
}
B57207c:L57207c:{c.instructions+=3;NFSU2_TR(0x57207c);
w4(R+8,u32(s32(s8(r1(R+8)))));
}
B57207f:{NFSU2_TR(0x57207f);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+8),4);
s4(u32(r4(U+4)),r4(U+8));
}
B572082:{NFSU2_TR(0x572082);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B572083:L572083:{c.instructions+=3;NFSU2_TR(0x572083);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xbull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B572086:{NFSU2_TR(0x572086);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(r1(R+8))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B572088:{NFSU2_TR(0x572088);
if(r1(R+518)){{goto L572095;}}
}
B57208a:L57208a:{c.instructions+=2;NFSU2_TR(0x57208a);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B57208c:{NFSU2_TR(0x57208c);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L572095;}}
}
B57208e:L57208e:{c.instructions+=3;NFSU2_TR(0x57208e);
w4(R+8,u32(s32(s8(r1(R+8)))));
}
B572091:{NFSU2_TR(0x572091);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+8),4);
s4(u32(r4(U+4)),r4(U+8));
}
B572094:{NFSU2_TR(0x572094);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B572095:L572095:{c.instructions+=3;NFSU2_TR(0x572095);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B572098:{NFSU2_TR(0x572098);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(r1(R+8))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B57209a:{NFSU2_TR(0x57209a);
if(r1(R+518)){{goto L5720a7;}}
}
B57209c:L57209c:{c.instructions+=2;NFSU2_TR(0x57209c);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B57209e:{NFSU2_TR(0x57209e);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L5720a7;}}
}
B5720a0:L5720a0:{c.instructions+=3;NFSU2_TR(0x5720a0);
w4(R+8,u32(s32(s8(r1(R+8)))));
}
B5720a3:{NFSU2_TR(0x5720a3);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+8),4);
s4(u32(r4(U+4)),r4(U+8));
}
B5720a6:{NFSU2_TR(0x5720a6);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B5720a7:L5720a7:{c.instructions+=3;NFSU2_TR(0x5720a7);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xdull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B5720aa:{NFSU2_TR(0x5720aa);
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
B5720ac:{NFSU2_TR(0x5720ac);
if(r1(R+518)){TAIL_STATIC(0x571ff5u,571);}
}
B5720b2:L5720b2:{c.instructions+=2;NFSU2_TR(0x5720b2);
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
B5720b4:{NFSU2_TR(0x5720b4);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x571ff5u,571);}
}
B5720ba:L5720ba:{c.instructions+=6;NFSU2_TR(0x5720ba);
w4(R+4,u32(s32(s8(r1(R+4)))));
}
B5720bd:{NFSU2_TR(0x5720bd);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4),4);
s4(u32(r4(U+4)),r4(U+8));
}
B5720c0:{NFSU2_TR(0x5720c0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5720c1:{NFSU2_TR(0x5720c1);
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
B5720c2:{NFSU2_TR(0x5720c2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5720c3:{NFSU2_TR(0x5720c3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5720d0:L5720d0:{c.instructions+=7;NFSU2_TR(0x5720d0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5720d4:{NFSU2_TR(0x5720d4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x28ull))));
}
B5720d7:{NFSU2_TR(0x5720d7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5720d8:{NFSU2_TR(0x5720d8);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5720dc:{NFSU2_TR(0x5720dc);
u8 U[4];
w4(U+0,u32(0xaull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5720de:{NFSU2_TR(0x5720de);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5720df:{NFSU2_TR(0x5720df);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5720e4ull));
TAIL_STATIC(0x571fd0u,571);
}
B5720e4:L5720e4:{c.instructions+=3;NFSU2_TR(0x5720e4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B5720e7:{NFSU2_TR(0x5720e7);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5720e9:{NFSU2_TR(0x5720e9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5720ef;}}
}
B5720eb:L5720eb:{c.instructions+=2;NFSU2_TR(0x5720eb);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x28ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x28ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x28ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5720ee:{NFSU2_TR(0x5720ee);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5720ef:L5720ef:{c.instructions+=3;NFSU2_TR(0x5720ef);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B5720f1:{NFSU2_TR(0x5720f1);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5720f3:{NFSU2_TR(0x5720f3);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L57210b;}}
}
B5720f5:L5720f5:{c.instructions+=2;NFSU2_TR(0x5720f5);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5720f9:{NFSU2_TR(0x5720f9);
__builtin_memmove((R+16),(R+16),4);
}
B572100:L572100:{c.instructions+=2;NFSU2_TR(0x572100);
u8 U[20];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+16))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(U+16,u32(u32(r4(U+12))-u32(r4(R+8))));
w1(R+518,u8((r4(U+16))==(u32(0x0ull))));
}
B572104:{NFSU2_TR(0x572104);
if(r1(R+518)){{goto L572113;}}
}
B572106:L572106:{c.instructions+=3;NFSU2_TR(0x572106);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B572107:{NFSU2_TR(0x572107);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B572109:{NFSU2_TR(0x572109);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x572100u);}goto L572100;}}
}
B57210b:L57210b:{c.instructions+=3;NFSU2_TR(0x57210b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
__builtin_memmove((R+0),(U+0),4);
}
B57210f:{NFSU2_TR(0x57210f);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x28ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x28ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x28ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B572112:{NFSU2_TR(0x572112);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B572113:L572113:{c.instructions+=3;NFSU2_TR(0x572113);
__builtin_memmove((R+0),(R+8),4);
}
B572115:{NFSU2_TR(0x572115);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x28ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x28ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x28ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B572118:{NFSU2_TR(0x572118);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B572120:L572120:{c.instructions+=9;NFSU2_TR(0x572120);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B572124:{NFSU2_TR(0x572124);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B572128:{NFSU2_TR(0x572128);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B572129:{NFSU2_TR(0x572129);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57212a:{NFSU2_TR(0x57212a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57212b:{NFSU2_TR(0x57212b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57212c:{NFSU2_TR(0x57212c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57212d:{NFSU2_TR(0x57212d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57212e:{NFSU2_TR(0x57212e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x572133ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5720d0u);}goto L5720d0;}
}
B572133:L572133:{c.instructions+=6;NFSU2_TR(0x572133);
__builtin_memmove((R+20),gp(0x7fe770),4);
}
B572139:{NFSU2_TR(0x572139);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B57213c:{NFSU2_TR(0x57213c);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B57213e:{NFSU2_TR(0x57213e);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+20))&u32(r4(R+20))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B572140:{NFSU2_TR(0x572140);
__builtin_memmove((R+28),(R+0),4);
}
B572142:{NFSU2_TR(0x572142);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L572186;}}
}
B572144:L572144:{c.instructions+=3;NFSU2_TR(0x572144);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B572148:{NFSU2_TR(0x572148);
w4(R+0,u32(0x7fdd10ull));
}
B57214d:{NFSU2_TR(0x57214d);
__builtin_memmove((R+4),(R+4),4);
}
B572150:L572150:{c.instructions+=2;NFSU2_TR(0x572150);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+24))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B572153:{NFSU2_TR(0x572153);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L57217e;}}
}
B572155:L572155:{c.instructions+=1;NFSU2_TR(0x572155);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B572157:L572157:{c.instructions+=2;NFSU2_TR(0x572157);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B572159:{NFSU2_TR(0x572159);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L572165;}}
}
B57215b:L57215b:{c.instructions+=2;NFSU2_TR(0x57215b);
u8 U[14];
__builtin_memmove((U+6),(R+24),4);
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
B57215e:{NFSU2_TR(0x57215e);
if(r1(R+518)){{goto L572188;}}
}
B572160:L572160:{c.instructions+=2;NFSU2_TR(0x572160);
u8 U[14];
__builtin_memmove((U+6),(R+24),4);
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
B572163:{NFSU2_TR(0x572163);
{goto L572176;}
}
B572165:L572165:{c.instructions+=3;NFSU2_TR(0x572165);
u8 U[9];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
__builtin_memmove((R+4),(U+8),1);
}
B572168:{NFSU2_TR(0x572168);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B57216a:{NFSU2_TR(0x57216a);
if(r1(R+518)){{goto L572178;}}
}
B57216c:L57216c:{c.instructions+=2;NFSU2_TR(0x57216c);
u8 U[5];
__builtin_memmove((U+3),(R+4),1);
w1(R+512,u8((r1(U+3))<(u8(0xffull))));
w1(R+523,sborrow<u8>(r1(U+3),u8(0xffull)));
w1(U+4,u8(u32(r1(U+3))-u32(u8(0xffull))));
w1(R+519,u8(s8(r1(U+4))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+4))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+4))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B57216f:{NFSU2_TR(0x57216f);
if(r1(R+518)){{goto L572188;}}
}
B572171:L572171:{c.instructions+=2;NFSU2_TR(0x572171);
w4(R+4,u32(s32(s8(r1(R+4)))));
}
B572174:{NFSU2_TR(0x572174);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
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
B572176:L572176:{c.instructions+=1;NFSU2_TR(0x572176);
if(r1(R+518)){{goto L572188;}}
}
B572178:L572178:{c.instructions+=3;NFSU2_TR(0x572178);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B572179:{NFSU2_TR(0x572179);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x8ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x8ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B57217c:{NFSU2_TR(0x57217c);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x572157u);}goto L572157;}}
}
B57217e:L57217e:{c.instructions+=4;NFSU2_TR(0x57217e);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B57217f:{NFSU2_TR(0x57217f);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
}
B572182:{NFSU2_TR(0x572182);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w1(R+523,sborrow<u32>(r4(R+12),r4(U+0)));
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B572184:{NFSU2_TR(0x572184);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x572150u);}goto L572150;}}
}
B572186:L572186:{c.instructions+=1;NFSU2_TR(0x572186);
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
B572188:L572188:{c.instructions+=5;NFSU2_TR(0x572188);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B572189:{NFSU2_TR(0x572189);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B57218a:{NFSU2_TR(0x57218a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B57218b:{NFSU2_TR(0x57218b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B57218c:{NFSU2_TR(0x57218c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B572190:L572190:{c.instructions+=6;NFSU2_TR(0x572190);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B572194:{NFSU2_TR(0x572194);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B572195:{NFSU2_TR(0x572195);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B572196:{NFSU2_TR(0x572196);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B572197:{NFSU2_TR(0x572197);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B572198:{NFSU2_TR(0x572198);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57219dull));
TAIL_STATIC(0x571ad0u,571);
}
B57219d:L57219d:{c.instructions+=6;NFSU2_TR(0x57219d);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5721a1:{NFSU2_TR(0x5721a1);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x864788ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+12),(U+4),1);
}
B5721a7:{NFSU2_TR(0x5721a7);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5721aa:{NFSU2_TR(0x5721aa);
u8 U[2];
__builtin_memmove((U+0),(R+12),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0xffull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B5721ad:{NFSU2_TR(0x5721ad);
__builtin_memmove((R+28),(R+0),4);
}
B5721af:{NFSU2_TR(0x5721af);
if(r1(R+518)){{goto L5721da;}}
}
B5721b1:L5721b1:{c.instructions+=2;NFSU2_TR(0x5721b1);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5721b3:{NFSU2_TR(0x5721b3);
if(r1(R+518)){{goto L5721d5;}}
}
B5721b5:L5721b5:{c.instructions+=8;NFSU2_TR(0x5721b5);
__builtin_memmove((R+4),(R+24),4);
}
B5721b7:{NFSU2_TR(0x5721b7);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(u32(0x1c8ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B5721bd:{NFSU2_TR(0x5721bd);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x865764ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5721c3:{NFSU2_TR(0x5721c3);
w4(R+0,u32(r1(R+12)));
}
B5721c6:{NFSU2_TR(0x5721c6);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5721c7:{NFSU2_TR(0x5721c7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5721c8:{NFSU2_TR(0x5721c8);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5721c9:{NFSU2_TR(0x5721c9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5721ceull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x572120u);}goto L572120;}
}
B5721ce:L5721ce:{c.instructions+=3;NFSU2_TR(0x5721ce);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B5721d1:{NFSU2_TR(0x5721d1);
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
B5721d3:{NFSU2_TR(0x5721d3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5721fe;}}
}
B5721d5:L5721d5:{c.instructions+=2;NFSU2_TR(0x5721d5);
u8 U[2];
__builtin_memmove((U+0),(R+12),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0xffull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B5721d8:{NFSU2_TR(0x5721d8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L572205;}}
}
B5721da:L5721da:{c.instructions+=8;NFSU2_TR(0x5721da);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x7f9414ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B5721e1:{NFSU2_TR(0x5721e1);
__builtin_memmove((R+4),(R+24),4);
}
B5721e3:{NFSU2_TR(0x5721e3);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(u32(0x1c8ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B5721e9:{NFSU2_TR(0x5721e9);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x865764ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5721ef:{NFSU2_TR(0x5721ef);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5721f0:{NFSU2_TR(0x5721f0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5721f1:{NFSU2_TR(0x5721f1);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5721f2:{NFSU2_TR(0x5721f2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5721f7ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x572120u);}goto L572120;}
}
B5721f7:L5721f7:{c.instructions+=3;NFSU2_TR(0x5721f7);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B5721fa:{NFSU2_TR(0x5721fa);
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
B5721fc:{NFSU2_TR(0x5721fc);
if(r1(R+518)){{goto L572205;}}
}
B5721fe:L5721fe:{c.instructions+=5;NFSU2_TR(0x5721fe);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B572201:{NFSU2_TR(0x572201);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B572202:{NFSU2_TR(0x572202);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B572203:{NFSU2_TR(0x572203);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B572204:{NFSU2_TR(0x572204);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B572205:L572205:{c.instructions+=5;NFSU2_TR(0x572205);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B572206:{NFSU2_TR(0x572206);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B572207:{NFSU2_TR(0x572207);
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
B572209:{NFSU2_TR(0x572209);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B57220a:{NFSU2_TR(0x57220a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B572210:L572210:{c.instructions+=6;NFSU2_TR(0x572210);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B572211:{NFSU2_TR(0x572211);
__builtin_memmove((R+8),gp(0x7fe7f0),4);
}
B572217:{NFSU2_TR(0x572217);
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
B572219:{NFSU2_TR(0x572219);
w4(R+4,u32(0xcull));
}
B57221e:{NFSU2_TR(0x57221e);
u8 U[4];
w4(U+0,u32(0x20ull));
s4(u32(r4(R+16)),r4(U+0));
}
B572226:{NFSU2_TR(0x572226);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L572257;}}
}
B572228:L572228:{c.instructions+=6;NFSU2_TR(0x572228);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B572229:{NFSU2_TR(0x572229);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57222a:{NFSU2_TR(0x57222a);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B57222e:{NFSU2_TR(0x57222e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57222f:{NFSU2_TR(0x57222f);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B572233:{NFSU2_TR(0x572233);
w4(R+0,u32(0x7fe788ull));
}
B572238:L572238:{c.instructions+=2;NFSU2_TR(0x572238);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B57223b:{NFSU2_TR(0x57223b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L57224e;}}
}
B57223d:L57223d:{c.instructions+=2;NFSU2_TR(0x57223d);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B572240:{NFSU2_TR(0x572240);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L572278;}}
}
B572242:L572242:{c.instructions+=2;NFSU2_TR(0x572242);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xffffffffull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+12,u32(r1(U+4)));
}
B572246:{NFSU2_TR(0x572246);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57224a:L57224a:{c.instructions+=1;NFSU2_TR(0x57224a);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffffeull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(r1(U+4)));
}
B57224e:L57224e:{c.instructions+=3;NFSU2_TR(0x57224e);
w1(R+512,carry<u32>(r4(R+0),u32(0x14ull)));
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
}
B572251:{NFSU2_TR(0x572251);
u8 U[6];
w1(R+523,sborrow<u32>(r4(R+8),u32(0x1ull)));
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+8))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+8))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B572252:{NFSU2_TR(0x572252);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x572238u);}goto L572238;}}
}
B572254:L572254:{c.instructions+=3;NFSU2_TR(0x572254);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B572255:{NFSU2_TR(0x572255);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B572256:{NFSU2_TR(0x572256);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B572257:L572257:{c.instructions+=10;NFSU2_TR(0x572257);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B57225b:{NFSU2_TR(0x57225b);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B57225f:{NFSU2_TR(0x57225f);
{u32 ea_=u32(u32(7882048u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B572265:{NFSU2_TR(0x572265);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B572268:{NFSU2_TR(0x572268);
__asm__ volatile(".byte 0xd8,0xe1":::"memory");
}
B57226a:{NFSU2_TR(0x57226a);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B57226d:{NFSU2_TR(0x57226d);
{u32 ea_=u32(u32(7882048u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B572273:{NFSU2_TR(0x572273);
{u32 ea_=u32(r4(R+0)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B572276:{NFSU2_TR(0x572276);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B572277:{NFSU2_TR(0x572277);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B572278:L572278:{c.instructions+=2;NFSU2_TR(0x572278);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B57227b:{NFSU2_TR(0x57227b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L57228a;}}
}
B57227d:L57227d:{c.instructions+=4;NFSU2_TR(0x57227d);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+12,u32(r1(U+4)));
}
B572281:{NFSU2_TR(0x572281);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
w4(R+4,u32(r1(U+0)));
}
B572284:{NFSU2_TR(0x572284);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B572288:{NFSU2_TR(0x572288);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x57224eu);}goto L57224e;}
}
B57228a:L57228a:{c.instructions+=2;NFSU2_TR(0x57228a);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B57228d:{NFSU2_TR(0x57228d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x57224au);}goto L57224a;}}
}
B57228f:L57228f:{c.instructions+=4;NFSU2_TR(0x57228f);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+12,u32(r1(U+4)));
}
B572293:{NFSU2_TR(0x572293);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(r1(U+4)));
}
B572297:{NFSU2_TR(0x572297);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57229b:{NFSU2_TR(0x57229b);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x57224eu);}goto L57224e;}
}
B5722a0:L5722a0:{c.instructions+=7;NFSU2_TR(0x5722a0);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5722a4:{NFSU2_TR(0x5722a4);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5722a5:{NFSU2_TR(0x5722a5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+28),(U+0),4);
}
B5722a7:{NFSU2_TR(0x5722a7);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5722a9:{NFSU2_TR(0x5722a9);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5722ab:{NFSU2_TR(0x5722ab);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5722ae:{NFSU2_TR(0x5722ae);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L5722c2;}}
}
B5722b0:L5722b0:{c.instructions+=6;NFSU2_TR(0x5722b0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5722b3:{NFSU2_TR(0x5722b3);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5722b7:{NFSU2_TR(0x5722b7);
{u32 ea_=u32((r4(R+8)*8u)+r4(R+28)+u32(4294967288u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5722bb:{NFSU2_TR(0x5722bb);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5722bd:{NFSU2_TR(0x5722bd);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x1ull))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5722c0:{NFSU2_TR(0x5722c0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5722cc;}}
}
B5722c2:L5722c2:{c.instructions+=3;NFSU2_TR(0x5722c2);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5722c8:{NFSU2_TR(0x5722c8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5722c9:{NFSU2_TR(0x5722c9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5722cc:L5722cc:{c.instructions+=3;NFSU2_TR(0x5722cc);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B5722ce:{NFSU2_TR(0x5722ce);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5722d0:{NFSU2_TR(0x5722d0);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5722f4;}}
}
B5722d2:L5722d2:{c.instructions+=2;NFSU2_TR(0x5722d2);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5722d3:{NFSU2_TR(0x5722d3);
__builtin_memmove((R+24),(R+28),4);
}
B5722d5:L5722d5:{c.instructions+=5;NFSU2_TR(0x5722d5);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5722d9:{NFSU2_TR(0x5722d9);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5722db:{NFSU2_TR(0x5722db);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5722dd:{NFSU2_TR(0x5722dd);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5722e0:{NFSU2_TR(0x5722e0);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L5722ea;}}
}
B5722e2:L5722e2:{c.instructions+=4;NFSU2_TR(0x5722e2);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B5722e3:{NFSU2_TR(0x5722e3);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x8ull))));
}
B5722e6:{NFSU2_TR(0x5722e6);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5722e8:{NFSU2_TR(0x5722e8);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5722d5u);}goto L5722d5;}}
}
B5722ea:L5722ea:{c.instructions+=3;NFSU2_TR(0x5722ea);
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
B5722ec:{NFSU2_TR(0x5722ec);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5722ed:{NFSU2_TR(0x5722ed);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5722f2;}}
}
B5722ef:L5722ef:{c.instructions+=2;NFSU2_TR(0x5722ef);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
}
B5722f0:{NFSU2_TR(0x5722f0);
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
B5722f2:L5722f2:{c.instructions+=1;NFSU2_TR(0x5722f2);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L57231d;}}
}
B5722f4:L5722f4:{c.instructions+=3;NFSU2_TR(0x5722f4);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0xfffffffeull))));
}
B5722f7:{NFSU2_TR(0x5722f7);
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
B5722f9:{NFSU2_TR(0x5722f9);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L57231d;}}
}
B5722fb:L5722fb:{c.instructions+=11;NFSU2_TR(0x5722fb);
{u32 ea_=u32((r4(R+4)*8u)+r4(R+28)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5722ff:{NFSU2_TR(0x5722ff);
{u32 ea_=u32((r4(R+4)*8u)+r4(R+28)+u32(4u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B572303:{NFSU2_TR(0x572303);
{u32 ea_=u32((r4(R+4)*8u)+r4(R+28)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B572307:{NFSU2_TR(0x572307);
{u32 ea_=u32((r4(R+4)*8u)+r4(R+28));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B57230a:{NFSU2_TR(0x57230a);
__asm__ volatile(".byte 0xde,0xf9":::"memory");
}
B57230c:{NFSU2_TR(0x57230c);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B572310:{NFSU2_TR(0x572310);
{u32 ea_=u32((r4(R+4)*8u)+r4(R+28));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B572313:{NFSU2_TR(0x572313);
__asm__ volatile(".byte 0xde,0xc9":::"memory");
}
B572315:{NFSU2_TR(0x572315);
{u32 ea_=u32((r4(R+4)*8u)+r4(R+28)+u32(4u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B572319:{NFSU2_TR(0x572319);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B57231a:{NFSU2_TR(0x57231a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B57231d:L57231d:{c.instructions+=7;NFSU2_TR(0x57231d);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B572323:{NFSU2_TR(0x572323);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B572327:{NFSU2_TR(0x572327);
{u32 ea_=u32((r4(R+4)*8u)+r4(R+28));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B57232a:{NFSU2_TR(0x57232a);
__asm__ volatile(".byte 0xde,0xc9":::"memory");
}
B57232c:{NFSU2_TR(0x57232c);
{u32 ea_=u32((r4(R+4)*8u)+r4(R+28)+u32(4u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B572330:{NFSU2_TR(0x572330);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B572331:{NFSU2_TR(0x572331);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B572340:L572340:{c.instructions+=7;NFSU2_TR(0x572340);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B572341:{NFSU2_TR(0x572341);
__builtin_memmove((R+8),(R+4),4);
}
B572343:{NFSU2_TR(0x572343);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B572345:{NFSU2_TR(0x572345);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B572346:{NFSU2_TR(0x572346);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B572348:{NFSU2_TR(0x572348);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x18ull))));
__builtin_memmove((R+0),(U+0),4);
}
B57234b:{NFSU2_TR(0x57234b);
{goto L572350;}
}
B572350:L572350:{c.instructions+=8;NFSU2_TR(0x572350);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B572353:{NFSU2_TR(0x572353);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B572356:{NFSU2_TR(0x572356);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
s4(u32(r4(R+0)),r4(U+0));
}
B572358:{NFSU2_TR(0x572358);
u8 U[13];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+12),1);
s1(u32(r4(U+8)),r1(U+12));
}
B57235c:{NFSU2_TR(0x57235c);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B57235d:{NFSU2_TR(0x57235d);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B572360:{NFSU2_TR(0x572360);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x3ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B572363:{NFSU2_TR(0x572363);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x572350u);}goto L572350;}}
}
B572365:L572365:{c.instructions+=3;NFSU2_TR(0x572365);
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
B572367:{NFSU2_TR(0x572367);
w4(R+4,u32(0x18ull));
}
B57236c:{NFSU2_TR(0x57236c);
w4(R+28,u32(0x864728ull));
}
B572371:L572371:{c.instructions+=1;NFSU2_TR(0x572371);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L572373;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x572371u);}goto L572371;}
}
B572373:L572373:{c.instructions+=2;NFSU2_TR(0x572373);
w4(R+4,u32(0x18ull));
}
B572378:{NFSU2_TR(0x572378);
w4(R+28,u32(0x8651b0ull));
}
B57237d:L57237d:{c.instructions+=1;NFSU2_TR(0x57237d);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L57237f;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x57237du);}goto L57237d;}
}
B57237f:L57237f:{c.instructions+=4;NFSU2_TR(0x57237f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B572380:{NFSU2_TR(0x572380);
__builtin_memmove((R+0),(R+8),4);
}
B572382:{NFSU2_TR(0x572382);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B572383:{NFSU2_TR(0x572383);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B572390:L572390:{c.instructions+=10;NFSU2_TR(0x572390);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x8ull))));
}
B572393:{NFSU2_TR(0x572393);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B572394:{NFSU2_TR(0x572394);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B572395:{NFSU2_TR(0x572395);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B572396:{NFSU2_TR(0x572396);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B572397:{NFSU2_TR(0x572397);
__builtin_memmove((R+28),(R+4),4);
}
B572399:{NFSU2_TR(0x572399);
w4(R+24,u32(u32(r4(R+24))|u32(u32(0xffffffffull))));
}
B57239c:{NFSU2_TR(0x57239c);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B57239e:{NFSU2_TR(0x57239e);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5723a2:{NFSU2_TR(0x5723a2);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x18ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5723a5:L5723a5:{c.instructions+=3;NFSU2_TR(0x5723a5);
u8 U[13];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
__builtin_memmove((R+0),(U+12),1);
}
B5723a9:{NFSU2_TR(0x5723a9);
u8 U[7];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(R+523,sborrow<u8>(r1(R+0),r1(U+5)));
w1(U+6,u8(u32(r1(R+0))-u32(r1(U+5))));
w1(R+519,u8(s8(r1(U+6))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B5723ad:{NFSU2_TR(0x5723ad);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L572418;}}
}
B5723af:L5723af:{c.instructions+=3;NFSU2_TR(0x5723af);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B5723b2:{NFSU2_TR(0x5723b2);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5723b4:{NFSU2_TR(0x5723b4);
if(r1(R+518)){{goto L572427;}}
}
B5723b6:L5723b6:{c.instructions+=2;NFSU2_TR(0x5723b6);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0xffffffffull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5723b9:{NFSU2_TR(0x5723b9);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5723fe;}}
}
B5723bb:L5723bb:{c.instructions+=3;NFSU2_TR(0x5723bb);
u8 U[13];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
__builtin_memmove((R+8),(U+12),1);
}
B5723bf:{NFSU2_TR(0x5723bf);
u8 U[2];
__builtin_memmove((U+0),(R+8),1);
w1(R+523,sborrow<u8>(r1(R+0),r1(U+0)));
w1(U+1,u8(u32(r1(R+0))-u32(r1(U+0))));
w1(R+519,u8(s8(r1(U+1))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B5723c1:{NFSU2_TR(0x5723c1);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L572418;}}
}
B5723c3:L5723c3:{c.instructions+=1;NFSU2_TR(0x5723c3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5723fe;}}
}
B5723c5:L5723c5:{c.instructions+=4;NFSU2_TR(0x5723c5);
u8 U[16];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B5723c9:{NFSU2_TR(0x5723c9);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B5723cc:{NFSU2_TR(0x5723cc);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5723cd:{NFSU2_TR(0x5723cd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5723d2ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5722a0u);}goto L5722a0;}
}
B5723d2:L5723d2:{c.instructions+=2;NFSU2_TR(0x5723d2);
{u32 ea_=u32((r4(R+24)*4u)+r4(R+28)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5723d6:{NFSU2_TR(0x5723d6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5723dbull));
TAIL_STATIC(0x75bed4u,75b);
}
B5723db:L5723db:{c.instructions+=5;NFSU2_TR(0x5723db);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5723de:{NFSU2_TR(0x5723de);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5723df:{NFSU2_TR(0x5723df);
__builtin_memmove((R+4),(R+12),4);
}
B5723e1:{NFSU2_TR(0x5723e1);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5723e5:{NFSU2_TR(0x5723e5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5723eaull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5722a0u);}goto L5722a0;}
}
B5723ea:L5723ea:{c.instructions+=2;NFSU2_TR(0x5723ea);
{u32 ea_=u32(r4(R+20));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5723ed:{NFSU2_TR(0x5723ed);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5723f2ull));
TAIL_STATIC(0x75bed4u,75b);
}
B5723f2:L5723f2:{c.instructions+=4;NFSU2_TR(0x5723f2);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5723f6:{NFSU2_TR(0x5723f6);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5723f8:{NFSU2_TR(0x5723f8);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5723fc:{NFSU2_TR(0x5723fc);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L572418;}}
}
B5723fe:L5723fe:{c.instructions+=3;NFSU2_TR(0x5723fe);
u8 U[5];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B572402:{NFSU2_TR(0x572402);
u8 U[15];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
__builtin_memmove((U+13),(U+12),1);
w1(R+523,sborrow<u8>(r1(U+13),r1(R+8)));
w1(U+14,u8(u32(r1(U+13))-u32(r1(R+8))));
w1(R+519,u8(s8(r1(U+14))<s8(u8(0x0ull))));
}
B572406:{NFSU2_TR(0x572406);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L572416;}}
}
B572408:L572408:{c.instructions+=5;NFSU2_TR(0x572408);
{u32 ea_=u32(r4(R+20));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B57240b:{NFSU2_TR(0x57240b);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B57240f:{NFSU2_TR(0x57240f);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B572411:{NFSU2_TR(0x572411);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B572414:{NFSU2_TR(0x572414);
if(r1(R+514)){{goto L572418;}}
}
B572416:L572416:{c.instructions+=1;NFSU2_TR(0x572416);
__builtin_memmove((R+24),(R+4),4);
}
B572418:L572418:{c.instructions+=5;NFSU2_TR(0x572418);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B572419:{NFSU2_TR(0x572419);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x4ull))));
}
B57241c:{NFSU2_TR(0x57241c);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x3ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B57241f:{NFSU2_TR(0x57241f);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B572423:{NFSU2_TR(0x572423);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5723a5u);}goto L5723a5;}}
}
B572425:L572425:{c.instructions+=1;NFSU2_TR(0x572425);
{goto L572429;}
}
B572427:L572427:{c.instructions+=1;NFSU2_TR(0x572427);
__builtin_memmove((R+24),(R+4),4);
}
B572429:L572429:{c.instructions+=2;NFSU2_TR(0x572429);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0xffffffffull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B57242c:{NFSU2_TR(0x57242c);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L572459;}}
}
B57242e:L57242e:{c.instructions+=14;NFSU2_TR(0x57242e);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B572432:{NFSU2_TR(0x572432);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B572436:{NFSU2_TR(0x572436);
u8 U[5];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B57243a:{NFSU2_TR(0x57243a);
{u32 ea_=u32((r4(R+24)*4u)+r4(R+28)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B57243e:{NFSU2_TR(0x57243e);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+0),4);
s4(u32(r4(U+4)),r4(U+8));
}
B572441:{NFSU2_TR(0x572441);
u8 U[16];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
w4(U+12,u32(0x0ull));
s4(u32(r4(U+8)),r4(U+12));
}
B572449:{NFSU2_TR(0x572449);
u8 U[13];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+4),1);
s1(u32(r4(U+8)),r1(U+12));
}
B57244d:{NFSU2_TR(0x57244d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B57244e:{NFSU2_TR(0x57244e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B57244f:{NFSU2_TR(0x57244f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B572450:{NFSU2_TR(0x572450);
w1(R+0,u8(0x1ull));
}
B572452:{NFSU2_TR(0x572452);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B572453:{NFSU2_TR(0x572453);
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
B572456:{NFSU2_TR(0x572456);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B572459:L572459:{c.instructions+=7;NFSU2_TR(0x572459);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B57245a:{NFSU2_TR(0x57245a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B57245b:{NFSU2_TR(0x57245b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B57245c:{NFSU2_TR(0x57245c);
w1(R+0,u8(u32(r1(R+0))^u32(r1(R+0))));
}
B57245e:{NFSU2_TR(0x57245e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B57245f:{NFSU2_TR(0x57245f);
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
B572462:{NFSU2_TR(0x572462);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B572470:L572470:{c.instructions+=11;NFSU2_TR(0x572470);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B572471:{NFSU2_TR(0x572471);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B572472:{NFSU2_TR(0x572472);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B572473:{NFSU2_TR(0x572473);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B572474:{NFSU2_TR(0x572474);
__builtin_memmove((R+28),(R+4),4);
}
B572476:{NFSU2_TR(0x572476);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B572479:{NFSU2_TR(0x572479);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B57247b:{NFSU2_TR(0x57247b);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57247e:{NFSU2_TR(0x57247e);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B572481:{NFSU2_TR(0x572481);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B572483:{NFSU2_TR(0x572483);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((R+24),(U+0),4);
}
B572486:L572486:{c.instructions+=3;NFSU2_TR(0x572486);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B572489:{NFSU2_TR(0x572489);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B57248b:{NFSU2_TR(0x57248b);
if(r1(R+518)){{goto L5724cf;}}
}
B57248d:L57248d:{c.instructions+=6;NFSU2_TR(0x57248d);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B57248f:{NFSU2_TR(0x57248f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B572491:{NFSU2_TR(0x572491);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B572493:{NFSU2_TR(0x572493);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B572495:{NFSU2_TR(0x572495);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B572498:{NFSU2_TR(0x572498);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L572505;}}
}
B57249a:L57249a:{c.instructions+=5;NFSU2_TR(0x57249a);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B57249d:{NFSU2_TR(0x57249d);
{u32 ea_=u32((r4(R+0)*8u)+r4(R+8)+u32(4294967288u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5724a1:{NFSU2_TR(0x5724a1);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5724a3:{NFSU2_TR(0x5724a3);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5724a6:{NFSU2_TR(0x5724a6);
if(r1(R+518)){{goto L572507;}}
}
B5724a8:L5724a8:{c.instructions+=3;NFSU2_TR(0x5724a8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5724aa:{NFSU2_TR(0x5724aa);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5724ab:{NFSU2_TR(0x5724ab);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5724b0ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5722a0u);}goto L5722a0;}
}
B5724b0:L5724b0:{c.instructions+=2;NFSU2_TR(0x5724b0);
{u32 ea_=u32(r4(R+24)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5724b3:{NFSU2_TR(0x5724b3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5724b8ull));
TAIL_STATIC(0x75bed4u,75b);
}
B5724b8:L5724b8:{c.instructions+=3;NFSU2_TR(0x5724b8);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5724bb:{NFSU2_TR(0x5724bb);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5724bd:{NFSU2_TR(0x5724bd);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L5724c1;}}
}
B5724bf:L5724bf:{c.instructions+=1;NFSU2_TR(0x5724bf);
__builtin_memmove((R+0),(R+4),4);
}
B5724c1:L5724c1:{c.instructions+=5;NFSU2_TR(0x5724c1);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5724c5:{NFSU2_TR(0x5724c5);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5724c8:{NFSU2_TR(0x5724c8);
{u32 ea_=u32(r4(R+24)+u32(12u));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B5724cb:{NFSU2_TR(0x5724cb);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5724cd:{NFSU2_TR(0x5724cd);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5724cf:L5724cf:{c.instructions+=4;NFSU2_TR(0x5724cf);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x1ull))));
}
B5724d0:{NFSU2_TR(0x5724d0);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x4ull))));
}
B5724d3:{NFSU2_TR(0x5724d3);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x3ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5724d6:{NFSU2_TR(0x5724d6);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x572486u);}goto L572486;}}
}
B5724d8:L5724d8:{c.instructions+=2;NFSU2_TR(0x5724d8);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(U+8),r4(R+12)));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B5724db:{NFSU2_TR(0x5724db);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L5724e0;}}
}
B5724dd:L5724dd:{c.instructions+=1;NFSU2_TR(0x5724dd);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5724e0:L5724e0:{c.instructions+=4;NFSU2_TR(0x5724e0);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5724e3:{NFSU2_TR(0x5724e3);
w4(R+0,u32(0xffull));
}
B5724e8:{NFSU2_TR(0x5724e8);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5724ea:{NFSU2_TR(0x5724ea);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5724ef;}}
}
B5724ec:L5724ec:{c.instructions+=1;NFSU2_TR(0x5724ec);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5724ef:L5724ef:{c.instructions+=11;NFSU2_TR(0x5724ef);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5724f2:{NFSU2_TR(0x5724f2);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5724f5:{NFSU2_TR(0x5724f5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5724f6:{NFSU2_TR(0x5724f6);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B5724f8:{NFSU2_TR(0x5724f8);
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
B5724fa:{NFSU2_TR(0x5724fa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5724fb:{NFSU2_TR(0x5724fb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+4),(U+0),1);
}
B5724fe:{NFSU2_TR(0x5724fe);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5724ff:{NFSU2_TR(0x5724ff);
__builtin_memmove((R+0),(R+4),1);
}
B572501:{NFSU2_TR(0x572501);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B572502:{NFSU2_TR(0x572502);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B572505:L572505:{c.instructions+=1;NFSU2_TR(0x572505);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B572507:L572507:{c.instructions+=3;NFSU2_TR(0x572507);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57250a:{NFSU2_TR(0x57250a);
u8 U[13];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+20))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
w1(U+12,u8(0xffull));
s1(u32(r4(U+8)),r1(U+12));
}
B57250f:{NFSU2_TR(0x57250f);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5724cfu);}goto L5724cf;}
}
B572520:L572520:{c.instructions+=8;NFSU2_TR(0x572520);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B572521:{NFSU2_TR(0x572521);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B572522:{NFSU2_TR(0x572522);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B572523:{NFSU2_TR(0x572523);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B572524:{NFSU2_TR(0x572524);
__builtin_memmove((R+28),gp(0x8651ac),4);
}
B57252a:{NFSU2_TR(0x57252a);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B57252c:{NFSU2_TR(0x57252c);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B57252e:{NFSU2_TR(0x57252e);
__builtin_memmove((R+28),(R+28),4);
}
B572530:L572530:{c.instructions+=2;NFSU2_TR(0x572530);
w4(R+8,u32(0x2ull));
}
B572535:{NFSU2_TR(0x572535);
{goto L572540;}
}
B572540:L572540:{c.instructions+=5;NFSU2_TR(0x572540);
{u32 ea_=u32(r4(R+4)+u32(8800040u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B572546:{NFSU2_TR(0x572546);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B57254c:{NFSU2_TR(0x57254c);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B57254e:{NFSU2_TR(0x57254e);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B572551:{NFSU2_TR(0x572551);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5725cb;}}
}
B572553:L572553:{c.instructions+=3;NFSU2_TR(0x572553);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8651b0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B572559:{NFSU2_TR(0x572559);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B57255b:{NFSU2_TR(0x57255b);
if(r1(R+518)){{goto L5725b0;}}
}
B57255d:L57255d:{c.instructions+=2;NFSU2_TR(0x57255d);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x7fffffffull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B572562:{NFSU2_TR(0x572562);
if(r1(R+518)){{goto L5725b0;}}
}
B572564:L572564:{c.instructions+=10;NFSU2_TR(0x572564);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8651b0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B57256a:{NFSU2_TR(0x57256a);
__builtin_memmove((R+0),(R+28),4);
}
B57256c:{NFSU2_TR(0x57256c);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+12))));
}
B57256e:{NFSU2_TR(0x57256e);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B572572:{NFSU2_TR(0x572572);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B572576:{NFSU2_TR(0x572576);
{u32 ea_=u32(u32(7881320u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B57257c:{NFSU2_TR(0x57257c);
{u32 ea_=u32(u32(7986500u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B572582:{NFSU2_TR(0x572582);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B572584:{NFSU2_TR(0x572584);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B572587:{NFSU2_TR(0x572587);
if(r1(R+514)){{goto L5725b0;}}
}
B572589:L572589:{c.instructions+=7;NFSU2_TR(0x572589);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B57258d:{NFSU2_TR(0x57258d);
{u32 ea_=u32(r4(R+4)+u32(8800040u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B572593:{NFSU2_TR(0x572593);
{u32 ea_=u32(r4(R+4)+u32(8800040u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B572599:{NFSU2_TR(0x572599);
{u32 ea_=u32(u32(7986492u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B57259f:{NFSU2_TR(0x57259f);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5725a1:{NFSU2_TR(0x5725a1);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5725a4:{NFSU2_TR(0x5725a4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5725f8;}}
}
B5725a6:L5725a6:{c.instructions+=3;NFSU2_TR(0x5725a6);
{u32 ea_=u32(u32(7986496u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5725ac:{NFSU2_TR(0x5725ac);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B5725ae:{NFSU2_TR(0x5725ae);
{goto L5725f2;}
}
B5725b0:L5725b0:{c.instructions+=7;NFSU2_TR(0x5725b0);
{u32 ea_=u32(r4(R+4)+u32(8800040u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5725b6:{NFSU2_TR(0x5725b6);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5725ba:{NFSU2_TR(0x5725ba);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5725c0:{NFSU2_TR(0x5725c0);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B5725c2:{NFSU2_TR(0x5725c2);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5725c4:{NFSU2_TR(0x5725c4);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5725c7:{NFSU2_TR(0x5725c7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5725ec;}}
}
B5725c9:L5725c9:{c.instructions+=1;NFSU2_TR(0x5725c9);
{goto L5725e4;}
}
B5725cb:L5725cb:{c.instructions+=7;NFSU2_TR(0x5725cb);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5725cf:{NFSU2_TR(0x5725cf);
{u32 ea_=u32(r4(R+4)+u32(8800040u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5725d5:{NFSU2_TR(0x5725d5);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5725db:{NFSU2_TR(0x5725db);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B5725dd:{NFSU2_TR(0x5725dd);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5725df:{NFSU2_TR(0x5725df);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5725e2:{NFSU2_TR(0x5725e2);
if(r1(R+514)){{goto L5725ec;}}
}
B5725e4:L5725e4:{c.instructions+=2;NFSU2_TR(0x5725e4);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5725e6:{NFSU2_TR(0x5725e6);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5725ec:L5725ec:{c.instructions+=1;NFSU2_TR(0x5725ec);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8651b0ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5725f2:L5725f2:{c.instructions+=1;NFSU2_TR(0x5725f2);
{u32 ea_=u32(r4(R+4)+u32(8800040u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5725f8:L5725f8:{c.instructions+=3;NFSU2_TR(0x5725f8);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4ull))));
}
B5725fb:{NFSU2_TR(0x5725fb);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
}
B5725fc:{NFSU2_TR(0x5725fc);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x572540u);}goto L572540;}}
}
B572602:L572602:{c.instructions+=2;NFSU2_TR(0x572602);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
w1(R+512,u8((r4(U+6))<(u32(0x60ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x60ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x60ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B572605:{NFSU2_TR(0x572605);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x572530u);}goto L572530;}}
}
B57260b:L57260b:{c.instructions+=5;NFSU2_TR(0x57260b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B57260c:{NFSU2_TR(0x57260c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B57260d:{NFSU2_TR(0x57260d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B57260e:{NFSU2_TR(0x57260e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B57260f:{NFSU2_TR(0x57260f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B572610:L572610:{c.instructions+=7;NFSU2_TR(0x572610);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x8ull))));
}
B572613:{NFSU2_TR(0x572613);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B572614:{NFSU2_TR(0x572614);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B572615:{NFSU2_TR(0x572615);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B572616:{NFSU2_TR(0x572616);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B572617:{NFSU2_TR(0x572617);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B57261f:{NFSU2_TR(0x57261f);
w4(R+20,u32(0x8653d8ull));
}
B572624:L572624:{c.instructions+=4;NFSU2_TR(0x572624);
w1(R+12,u8(u32(r1(R+12))^u32(r1(R+12))));
}
B572626:{NFSU2_TR(0x572626);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((R+24),(U+0),4);
}
B572629:{NFSU2_TR(0x572629);
w4(R+28,u32(0x2ull));
}
B57262e:{NFSU2_TR(0x57262e);
__builtin_memmove((R+28),(R+28),4);
}
B572630:L572630:{c.instructions+=4;NFSU2_TR(0x572630);
__builtin_memmove((R+0),gp(0x865198),4);
}
B572635:{NFSU2_TR(0x572635);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B572636:{NFSU2_TR(0x572636);
__builtin_memmove((R+4),(R+24),4);
}
B572638:{NFSU2_TR(0x572638);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57263dull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x572470u);}goto L572470;}
}
B57263d:L57263d:{c.instructions+=4;NFSU2_TR(0x57263d);
w1(R+12,u8(u32(r1(R+12))|u32(r1(R+0))));
}
B57263f:{NFSU2_TR(0x57263f);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x30ull))));
}
B572642:{NFSU2_TR(0x572642);
w4(R+28,u32(u32(r4(R+28))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+28))==(u32(0x0ull))));
}
B572643:{NFSU2_TR(0x572643);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x572630u);}goto L572630;}}
}
B572645:L572645:{c.instructions+=2;NFSU2_TR(0x572645);
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
B572647:{NFSU2_TR(0x572647);
if(r1(R+518)){{goto L572676;}}
}
B572649:L572649:{c.instructions+=6;NFSU2_TR(0x572649);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B57264d:{NFSU2_TR(0x57264d);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x864788ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B572653:{NFSU2_TR(0x572653);
u8 U[5];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B572657:{NFSU2_TR(0x572657);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B57265b:{NFSU2_TR(0x57265b);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57265c:{NFSU2_TR(0x57265c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x572661ull));
TAIL_STATIC(0x570a60u,570);
}
B572661:L572661:{c.instructions+=3;NFSU2_TR(0x572661);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B572664:{NFSU2_TR(0x572664);
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
B572666:{NFSU2_TR(0x572666);
if(r1(R+518)){{goto L572676;}}
}
B572668:L572668:{c.instructions+=5;NFSU2_TR(0x572668);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+20))),4);
__builtin_memmove((R+0),(U+0),4);
}
B57266b:{NFSU2_TR(0x57266b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57266c:{NFSU2_TR(0x57266c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57266d:{NFSU2_TR(0x57266d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57266e:{NFSU2_TR(0x57266e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x572673ull));
TAIL_STATIC(0x4022c0u,402);
}
B572673:L572673:{c.instructions+=1;NFSU2_TR(0x572673);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B572676:L572676:{c.instructions+=6;NFSU2_TR(0x572676);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B57267a:{NFSU2_TR(0x57267a);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B57267b:{NFSU2_TR(0x57267b);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x60ull))));
}
B57267e:{NFSU2_TR(0x57267e);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x865498ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x865498ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B572684:{NFSU2_TR(0x572684);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B572688:{NFSU2_TR(0x572688);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x572624u);}goto L572624;}}
}
B57268a:L57268a:{c.instructions+=3;NFSU2_TR(0x57268a);
__builtin_memmove((R+0),gp(0x865198),4);
}
B57268f:{NFSU2_TR(0x57268f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B572690:{NFSU2_TR(0x572690);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x572695ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x572520u);}goto L572520;}
}
B572695:L572695:{c.instructions+=7;NFSU2_TR(0x572695);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B572698:{NFSU2_TR(0x572698);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B572699:{NFSU2_TR(0x572699);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B57269a:{NFSU2_TR(0x57269a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B57269b:{NFSU2_TR(0x57269b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B57269c:{NFSU2_TR(0x57269c);
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
B57269f:{NFSU2_TR(0x57269f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5726a0:L5726a0:{c.instructions+=7;NFSU2_TR(0x5726a0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5726a1:{NFSU2_TR(0x5726a1);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5726a5:{NFSU2_TR(0x5726a5);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x864788ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5726ab:{NFSU2_TR(0x5726ab);
u8 U[5];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5726af:{NFSU2_TR(0x5726af);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5726b3:{NFSU2_TR(0x5726b3);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5726b4:{NFSU2_TR(0x5726b4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5726b9ull));
TAIL_STATIC(0x570a60u,570);
}
B5726b9:L5726b9:{c.instructions+=3;NFSU2_TR(0x5726b9);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5726bc:{NFSU2_TR(0x5726bc);
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
B5726be:{NFSU2_TR(0x5726be);
if(r1(R+518)){{goto L5726cd;}}
}
B5726c0:L5726c0:{c.instructions+=4;NFSU2_TR(0x5726c0);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5726c2:{NFSU2_TR(0x5726c2);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5726c4:{NFSU2_TR(0x5726c4);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5726c5:{NFSU2_TR(0x5726c5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5726caull));
TAIL_STATIC(0x4022c0u,402);
}
B5726ca:L5726ca:{c.instructions+=1;NFSU2_TR(0x5726ca);
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
B5726cd:L5726cd:{c.instructions+=2;NFSU2_TR(0x5726cd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5726ce:{NFSU2_TR(0x5726ce);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5726d0:L5726d0:{c.instructions+=4;NFSU2_TR(0x5726d0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5726d1:{NFSU2_TR(0x5726d1);
__builtin_memmove((R+8),gp(0x8654a4),4);
}
B5726d7:{NFSU2_TR(0x5726d7);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x6ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5726da:{NFSU2_TR(0x5726da);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5726f0;}}
}
B5726dc:L5726dc:{c.instructions+=4;NFSU2_TR(0x5726dc);
__builtin_memmove((R+0),gp(0x8900d8),4);
}
B5726e1:{NFSU2_TR(0x5726e1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5726e3:{NFSU2_TR(0x5726e3);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5726e5:{NFSU2_TR(0x5726e5);
if(r1(R+518)){{goto L5726f0;}}
}
B5726e7:L5726e7:{c.instructions+=2;NFSU2_TR(0x5726e7);
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
B5726ea:{NFSU2_TR(0x5726ea);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5727a0;}}
}
B5726f0:L5726f0:{c.instructions+=3;NFSU2_TR(0x5726f0);
__builtin_memmove((R+0),gp(0x7faa14),4);
}
B5726f5:{NFSU2_TR(0x5726f5);
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
B5726f7:{NFSU2_TR(0x5726f7);
if(r1(R+518)){{goto L5727a0;}}
}
B5726fd:L5726fd:{c.instructions+=3;NFSU2_TR(0x5726fd);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B572700:{NFSU2_TR(0x572700);
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
B572702:{NFSU2_TR(0x572702);
if(r1(R+518)){{goto L5727a0;}}
}
B572708:L572708:{c.instructions+=6;NFSU2_TR(0x572708);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B57270b:{NFSU2_TR(0x57270b);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B57270f:{NFSU2_TR(0x57270f);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B572711:{NFSU2_TR(0x572711);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B572713:{NFSU2_TR(0x572713);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B572716:{NFSU2_TR(0x572716);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L5727a0;}}
}
B57271c:L57271c:{c.instructions+=7;NFSU2_TR(0x57271c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B57271e:{NFSU2_TR(0x57271e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B572721:{NFSU2_TR(0x572721);
{u32 ea_=u32((r4(R+0)*4u)+u32(8800040u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B572728:{NFSU2_TR(0x572728);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B57272e:{NFSU2_TR(0x57272e);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B572730:{NFSU2_TR(0x572730);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B572733:{NFSU2_TR(0x572733);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L5727a0;}}
}
B572735:L572735:{c.instructions+=5;NFSU2_TR(0x572735);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B572739:{NFSU2_TR(0x572739);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B57273c:{NFSU2_TR(0x57273c);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B57273e:{NFSU2_TR(0x57273e);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B572741:{NFSU2_TR(0x572741);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L57274a;}}
}
B572743:L572743:{c.instructions+=2;NFSU2_TR(0x572743);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B572746:{NFSU2_TR(0x572746);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57274a:L57274a:{c.instructions+=12;NFSU2_TR(0x57274a);
u8 U[14];
__builtin_memmove((U+6),(R+8),4);
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
B57274d:{NFSU2_TR(0x57274d);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B572751:{NFSU2_TR(0x572751);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B572753:{NFSU2_TR(0x572753);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B572756:{NFSU2_TR(0x572756);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B572758:{NFSU2_TR(0x572758);
__asm__ volatile(".byte 0xde,0xf9":::"memory");
}
B57275a:{NFSU2_TR(0x57275a);
{u32 ea_=u32(r4(R+4)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B57275d:{NFSU2_TR(0x57275d);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B572760:{NFSU2_TR(0x572760);
__asm__ volatile(".byte 0xde,0xc9":::"memory");
}
B572762:{NFSU2_TR(0x572762);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B572765:{NFSU2_TR(0x572765);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B572769:{NFSU2_TR(0x572769);
if(r1(R+518)){{goto L5727a0;}}
}
B57276b:L57276b:{c.instructions+=11;NFSU2_TR(0x57276b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
__builtin_memmove((R+8),(U+0),4);
}
B57276f:{NFSU2_TR(0x57276f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B572772:{NFSU2_TR(0x572772);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B572774:{NFSU2_TR(0x572774);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B572777:{NFSU2_TR(0x572777);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B572778:{NFSU2_TR(0x572778);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B57277b:{NFSU2_TR(0x57277b);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57277c:{NFSU2_TR(0x57277c);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B57277f:{NFSU2_TR(0x57277f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B572780:{NFSU2_TR(0x572780);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x8653b0ull))));
}
B572786:{NFSU2_TR(0x572786);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57278bull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x572390u);}goto L572390;}
}
B57278b:L57278b:{c.instructions+=2;NFSU2_TR(0x57278b);
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
B57278d:{NFSU2_TR(0x57278d);
if(r1(R+518)){{goto L5727a0;}}
}
B57278f:L57278f:{c.instructions+=4;NFSU2_TR(0x57278f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B572791:{NFSU2_TR(0x572791);
__builtin_memmove((R+0),gp(0x8651ac),4);
}
B572796:{NFSU2_TR(0x572796);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B572799:{NFSU2_TR(0x572799);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x8651b0ull))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+0),4);
s4(u32(r4(U+4)),r4(U+8));
}
B5727a0:L5727a0:{c.instructions+=2;NFSU2_TR(0x5727a0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5727a1:{NFSU2_TR(0x5727a1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5727b0:L5727b0:{c.instructions+=9;NFSU2_TR(0x5727b0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5727b4:{NFSU2_TR(0x5727b4);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5727b5:{NFSU2_TR(0x5727b5);
__builtin_memmove((R+24),(R+0),4);
}
B5727b7:{NFSU2_TR(0x5727b7);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+24,shl<u32>(r4(R+24),u64(r4(U+0))));
}
B5727ba:{NFSU2_TR(0x5727ba);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x7fb7d8ull))));
}
B5727c0:{NFSU2_TR(0x5727c0);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B5727c1:{NFSU2_TR(0x5727c1);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5727c2:{NFSU2_TR(0x5727c2);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5727c6:{NFSU2_TR(0x5727c6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5727f9;}}
}
B5727c8:L5727c8:{c.instructions+=13;NFSU2_TR(0x5727c8);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5727ca:{NFSU2_TR(0x5727ca);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5727ce:{NFSU2_TR(0x5727ce);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5727d1:{NFSU2_TR(0x5727d1);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5727d3:{NFSU2_TR(0x5727d3);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5727d6:{NFSU2_TR(0x5727d6);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5727d8:{NFSU2_TR(0x5727d8);
__asm__ volatile(".byte 0xde,0xf9":::"memory");
}
B5727da:{NFSU2_TR(0x5727da);
{u32 ea_=u32(r4(R+0)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5727dd:{NFSU2_TR(0x5727dd);
{u32 ea_=u32(r4(R+0)+u32(16u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5727e0:{NFSU2_TR(0x5727e0);
__asm__ volatile(".byte 0xde,0xc9":::"memory");
}
B5727e2:{NFSU2_TR(0x5727e2);
{u32 ea_=u32(r4(R+0)+u32(16u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5727e5:{NFSU2_TR(0x5727e5);
w4(R+0,u32(0x7fb778ull));
}
B5727ea:{NFSU2_TR(0x5727ea);
if(r1(R+518)){{goto L5727f1;}}
}
B5727ec:L5727ec:{c.instructions+=1;NFSU2_TR(0x5727ec);
w4(R+0,u32(0x7fb780ull));
}
B5727f1:L5727f1:{c.instructions+=3;NFSU2_TR(0x5727f1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5727f4:{NFSU2_TR(0x5727f4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5727f6:{NFSU2_TR(0x5727f6);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5727f9:L5727f9:{c.instructions+=3;NFSU2_TR(0x5727f9);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5727fd:{NFSU2_TR(0x5727fd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5727fe:{NFSU2_TR(0x5727fe);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x572803ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5726d0u);}goto L5726d0;}
}
B572803:L572803:{c.instructions+=4;NFSU2_TR(0x572803);
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
B572806:{NFSU2_TR(0x572806);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B572807:{NFSU2_TR(0x572807);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B572808:{NFSU2_TR(0x572808);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B572810:L572810:{c.instructions+=18;NFSU2_TR(0x572810);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B572814:{NFSU2_TR(0x572814);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B572817:{NFSU2_TR(0x572817);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B57281b:{NFSU2_TR(0x57281b);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B57281e:{NFSU2_TR(0x57281e);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B572820:{NFSU2_TR(0x572820);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B572824:{NFSU2_TR(0x572824);
{u32 ea_=u32(u32(7881376u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B57282a:{NFSU2_TR(0x57282a);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
w4(U+4,u32(0x7fb7a0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B572831:{NFSU2_TR(0x572831);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B572838:{NFSU2_TR(0x572838);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57283b:{NFSU2_TR(0x57283b);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B57283d:{NFSU2_TR(0x57283d);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B572840:{NFSU2_TR(0x572840);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B572842:{NFSU2_TR(0x572842);
{u32 ea_=u32(u32(7881376u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B572848:{NFSU2_TR(0x572848);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B57284b:{NFSU2_TR(0x57284b);
{u32 ea_=u32(u32(7881376u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B572851:{NFSU2_TR(0x572851);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B572854:{NFSU2_TR(0x572854);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B572860:L572860:{c.instructions+=6;NFSU2_TR(0x572860);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B572861:{NFSU2_TR(0x572861);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B572862:{NFSU2_TR(0x572862);
__builtin_memmove((R+24),(R+4),4);
}
B572864:{NFSU2_TR(0x572864);
{u32 ea_=u32(r4(R+24)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B572867:{NFSU2_TR(0x572867);
{u32 ea_=u32(r4(R+24)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B57286a:{NFSU2_TR(0x57286a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57286full));
TAIL_STATIC(0x75bed4u,75b);
}
B57286f:L57286f:{c.instructions+=3;NFSU2_TR(0x57286f);
w4(R+0,u32(~u32(r4(R+0))));
}
B572871:{NFSU2_TR(0x572871);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+0))&u32(u8(0x1ull))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B572873:{NFSU2_TR(0x572873);
if(r1(R+518)){{goto L572887;}}
}
B572875:L572875:{c.instructions+=3;NFSU2_TR(0x572875);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B572878:{NFSU2_TR(0x572878);
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
B57287a:{NFSU2_TR(0x57287a);
if(r1(R+518)){{goto L572887;}}
}
B57287c:L57287c:{c.instructions+=3;NFSU2_TR(0x57287c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B57287f:{NFSU2_TR(0x57287f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B572880:{NFSU2_TR(0x572880);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x572885ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5722a0u);}goto L5722a0;}
}
B572885:L572885:{c.instructions+=1;NFSU2_TR(0x572885);
{goto L57288d;}
}
B572887:L572887:{c.instructions+=1;NFSU2_TR(0x572887);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B57288d:L57288d:{c.instructions+=16;NFSU2_TR(0x57288d);
{u32 ea_=u32(r4(R+24)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B572890:{NFSU2_TR(0x572890);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B572893:{NFSU2_TR(0x572893);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B572897:{NFSU2_TR(0x572897);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B572899:{NFSU2_TR(0x572899);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B57289b:{NFSU2_TR(0x57289b);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57289f:{NFSU2_TR(0x57289f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5728a0:{NFSU2_TR(0x5728a0);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5728a2:{NFSU2_TR(0x5728a2);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B5728a4:{NFSU2_TR(0x5728a4);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5728a7:{NFSU2_TR(0x5728a7);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5728ab:{NFSU2_TR(0x5728ab);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B5728ad:{NFSU2_TR(0x5728ad);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5728b0:{NFSU2_TR(0x5728b0);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5728b2:{NFSU2_TR(0x5728b2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5728b3:{NFSU2_TR(0x5728b3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5728c0:L5728c0:{c.instructions+=3;NFSU2_TR(0x5728c0);
__builtin_memmove((R+0),gp(0x8650c4),4);
}
B5728c5:{NFSU2_TR(0x5728c5);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5728c7:{NFSU2_TR(0x5728c7);
if(r1(R+518)){{goto L572936;}}
}
B5728c9:L5728c9:{c.instructions+=18;NFSU2_TR(0x5728c9);
{u32 ea_=u32(u32(8369968u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5728cf:{NFSU2_TR(0x5728cf);
__builtin_memmove((R+0),gp(0x79dc64),4);
}
B5728d4:{NFSU2_TR(0x5728d4);
{u32 ea_=u32(u32(7881376u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5728da:{NFSU2_TR(0x5728da);
__builtin_memmove((R+8),gp(0x79dc68),4);
}
B5728e0:{NFSU2_TR(0x5728e0);
w4(R+4,u32(0x7fb7a0ull));
}
B5728e5:{NFSU2_TR(0x5728e5);
s4(0x8650c4,u32(0x0ull));
}
B5728ef:{NFSU2_TR(0x5728ef);
{u32 ea_=u32(u32(8803168u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5728f5:{NFSU2_TR(0x5728f5);
__builtin_memmove(gp(0x865370),(R+4),4);
}
B5728fb:{NFSU2_TR(0x5728fb);
{u32 ea_=u32(u32(8369972u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B572901:{NFSU2_TR(0x572901);
s4(0x865374,u32(0x0ull));
}
B57290b:{NFSU2_TR(0x57290b);
{u32 ea_=u32(u32(7881376u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B572911:{NFSU2_TR(0x572911);
__builtin_memmove(gp(0x865378),(R+0),4);
}
B572916:{NFSU2_TR(0x572916);
__builtin_memmove(gp(0x86537c),(R+8),4);
}
B57291c:{NFSU2_TR(0x57291c);
{u32 ea_=u32(u32(8803172u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B572922:{NFSU2_TR(0x572922);
{u32 ea_=u32(u32(8369976u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B572928:{NFSU2_TR(0x572928);
{u32 ea_=u32(u32(7881376u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B57292e:{NFSU2_TR(0x57292e);
{u32 ea_=u32(u32(8803176u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B572934:{NFSU2_TR(0x572934);
{goto L57293c;}
}
B572936:L572936:{c.instructions+=1;NFSU2_TR(0x572936);
__builtin_memmove((R+4),gp(0x865370),4);
}
B57293c:L57293c:{c.instructions+=2;NFSU2_TR(0x57293c);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B57293e:{NFSU2_TR(0x57293e);
if(r1(R+518)){{goto L57297f;}}
}
B572940:L572940:{c.instructions+=9;NFSU2_TR(0x572940);
{u32 ea_=u32(u32(8802644u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B572946:{NFSU2_TR(0x572946);
{u32 ea_=u32(u32(8803192u));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B57294c:{NFSU2_TR(0x57294c);
{u32 ea_=u32(u32(8803188u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B572952:{NFSU2_TR(0x572952);
{u32 ea_=u32(u32(8803188u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B572958:{NFSU2_TR(0x572958);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B57295a:{NFSU2_TR(0x57295a);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B57295c:{NFSU2_TR(0x57295c);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B57295e:{NFSU2_TR(0x57295e);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B572961:{NFSU2_TR(0x572961);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L572973;}}
}
B572963:L572963:{c.instructions+=5;NFSU2_TR(0x572963);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B572966:{NFSU2_TR(0x572966);
{u32 ea_=u32((r4(R+0)*8u)+r4(R+8)+u32(4294967288u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B57296a:{NFSU2_TR(0x57296a);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B57296c:{NFSU2_TR(0x57296c);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B57296f:{NFSU2_TR(0x57296f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L57297f;}}
}
B572971:L572971:{c.instructions+=1;NFSU2_TR(0x572971);
{goto L572975;}
}
B572973:L572973:{c.instructions+=1;NFSU2_TR(0x572973);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B572975:L572975:{c.instructions+=1;NFSU2_TR(0x572975);
s4(0x865370,u32(0x0ull));
}
B57297f:L57297f:{c.instructions+=3;NFSU2_TR(0x57297f);
__builtin_memmove((R+8),gp(0x865390),4);
}
B572985:{NFSU2_TR(0x572985);
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
B572987:{NFSU2_TR(0x572987);
if(r1(R+518)){{goto L5729d1;}}
}
B572989:L572989:{c.instructions+=9;NFSU2_TR(0x572989);
{u32 ea_=u32(u32(8802644u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B57298f:{NFSU2_TR(0x57298f);
{u32 ea_=u32(u32(8803224u));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B572995:{NFSU2_TR(0x572995);
{u32 ea_=u32(u32(8803220u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B57299b:{NFSU2_TR(0x57299b);
{u32 ea_=u32(u32(8803220u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B5729a1:{NFSU2_TR(0x5729a1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5729a3:{NFSU2_TR(0x5729a3);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B5729a5:{NFSU2_TR(0x5729a5);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5729a7:{NFSU2_TR(0x5729a7);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5729aa:{NFSU2_TR(0x5729aa);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L5729c5;}}
}
B5729ac:L5729ac:{c.instructions+=5;NFSU2_TR(0x5729ac);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5729af:{NFSU2_TR(0x5729af);
{u32 ea_=u32((r4(R+8)*8u)+r4(R+4)+u32(4294967288u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5729b3:{NFSU2_TR(0x5729b3);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5729b5:{NFSU2_TR(0x5729b5);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x1ull))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5729b8:{NFSU2_TR(0x5729b8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5729d1;}}
}
B5729ba:L5729ba:{c.instructions+=2;NFSU2_TR(0x5729ba);
s4(0x865390,u32(0x0ull));
}
B5729c4:{NFSU2_TR(0x5729c4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5729c5:L5729c5:{c.instructions+=2;NFSU2_TR(0x5729c5);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5729c7:{NFSU2_TR(0x5729c7);
s4(0x865390,u32(0x0ull));
}
B5729d1:L5729d1:{c.instructions+=1;NFSU2_TR(0x5729d1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5729e0:L5729e0:{c.instructions+=18;NFSU2_TR(0x5729e0);
__builtin_memmove((R+4),gp(0x79dc68),4);
}
B5729e6:{NFSU2_TR(0x5729e6);
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
B5729e8:{NFSU2_TR(0x5729e8);
__builtin_memmove((R+8),(R+4),4);
}
B5729ea:{NFSU2_TR(0x5729ea);
s4(0x865360,u32(0x0ull));
}
B5729f4:{NFSU2_TR(0x5729f4);
s4(0x865364,u32(0x0ull));
}
B5729fe:{NFSU2_TR(0x5729fe);
s4(0x865368,u32(0x0ull));
}
B572a08:{NFSU2_TR(0x572a08);
__builtin_memmove(gp(0x865370),(R+0),4);
}
B572a0d:{NFSU2_TR(0x572a0d);
__builtin_memmove(gp(0x865374),(R+0),4);
}
B572a12:{NFSU2_TR(0x572a12);
s4(0x865378,u32(0x3f800000ull));
}
B572a1c:{NFSU2_TR(0x572a1c);
__builtin_memmove(gp(0x86537c),(R+4),4);
}
B572a22:{NFSU2_TR(0x572a22);
__builtin_memmove(gp(0x865380),(R+0),4);
}
B572a27:{NFSU2_TR(0x572a27);
__builtin_memmove(gp(0x865384),(R+0),4);
}
B572a2c:{NFSU2_TR(0x572a2c);
__builtin_memmove(gp(0x865388),(R+0),4);
}
B572a31:{NFSU2_TR(0x572a31);
__builtin_memmove(gp(0x865390),(R+0),4);
}
B572a36:{NFSU2_TR(0x572a36);
__builtin_memmove(gp(0x865394),(R+0),4);
}
B572a3b:{NFSU2_TR(0x572a3b);
s4(0x865398,u32(0x3f800000ull));
}
B572a45:{NFSU2_TR(0x572a45);
__builtin_memmove(gp(0x86539c),(R+8),4);
}
B572a4b:{NFSU2_TR(0x572a4b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B572a50:L572a50:{c.instructions+=11;NFSU2_TR(0x572a50);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B572a51:{NFSU2_TR(0x572a51);
__builtin_memmove((R+20),(R+16),4);
}
B572a53:{NFSU2_TR(0x572a53);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B572a56:{NFSU2_TR(0x572a56);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x9cull))));
}
B572a5c:{NFSU2_TR(0x572a5c);
__builtin_memmove((R+0),gp(0x890080),4);
}
B572a61:{NFSU2_TR(0x572a61);
{u32 ea_=u32(r4(R+0)+u32(264u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B572a67:{NFSU2_TR(0x572a67);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B572a68:{NFSU2_TR(0x572a68);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B572a6e:{NFSU2_TR(0x572a6e);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B572a70:{NFSU2_TR(0x572a70);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B572a73:{NFSU2_TR(0x572a73);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L572e3a;}}
}
B572a79:L572a79:{c.instructions+=3;NFSU2_TR(0x572a79);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B572a7c:{NFSU2_TR(0x572a7c);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B572a7d:{NFSU2_TR(0x572a7d);
if(r1(R+518)){{goto L572a8d;}}
}
B572a7f:L572a7f:{c.instructions+=2;NFSU2_TR(0x572a7f);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B572a80:{NFSU2_TR(0x572a80);
if(r1(R+518)){{goto L572e3f;}}
}
B572a86:L572a86:{c.instructions+=2;NFSU2_TR(0x572a86);
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
B572a87:{NFSU2_TR(0x572a87);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L572e3a;}}
}
B572a8d:L572a8d:{c.instructions+=1;NFSU2_TR(0x572a8d);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B572a8f:L572a8f:{c.instructions+=5;NFSU2_TR(0x572a8f);
u8 U[4];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B572a93:{NFSU2_TR(0x572a93);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B572a96:{NFSU2_TR(0x572a96);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B572a97:{NFSU2_TR(0x572a97);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x865360ull))));
}
B572a9d:{NFSU2_TR(0x572a9d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x572aa2ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x572860u);}goto L572860;}
}
B572aa2:L572aa2:{c.instructions+=3;NFSU2_TR(0x572aa2);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B572aa6:{NFSU2_TR(0x572aa6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B572aa7:{NFSU2_TR(0x572aa7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x572aacull));
TAIL_STATIC(0x43c780u,43c);
}
B572aac:L572aac:{c.instructions+=45;NFSU2_TR(0x572aac);
{u32 ea_=u32(r4(R+16)+u32(92u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B572ab0:{NFSU2_TR(0x572ab0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B572ab3:{NFSU2_TR(0x572ab3);
{u32 ea_=u32(r4(R+24)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B572ab6:{NFSU2_TR(0x572ab6);
u8 U[8];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+16))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B572abe:{NFSU2_TR(0x572abe);
{u32 ea_=u32(r4(R+16)+u32(88u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B572ac2:{NFSU2_TR(0x572ac2);
{u32 ea_=u32(r4(R+24)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B572ac5:{NFSU2_TR(0x572ac5);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B572ac7:{NFSU2_TR(0x572ac7);
{u32 ea_=u32(r4(R+16)+u32(84u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B572acb:{NFSU2_TR(0x572acb);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B572acd:{NFSU2_TR(0x572acd);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B572acf:{NFSU2_TR(0x572acf);
{u32 ea_=u32(r4(R+24)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B572ad2:{NFSU2_TR(0x572ad2);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B572ad8:{NFSU2_TR(0x572ad8);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B572ada:{NFSU2_TR(0x572ada);
{u32 ea_=u32(r4(R+16)+u32(88u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B572ade:{NFSU2_TR(0x572ade);
{u32 ea_=u32(r4(R+24)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B572ae1:{NFSU2_TR(0x572ae1);
{u32 ea_=u32(r4(R+16)+u32(92u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B572ae5:{NFSU2_TR(0x572ae5);
{u32 ea_=u32(r4(R+24)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B572ae8:{NFSU2_TR(0x572ae8);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B572aea:{NFSU2_TR(0x572aea);
{u32 ea_=u32(r4(R+16)+u32(84u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B572aee:{NFSU2_TR(0x572aee);
{u32 ea_=u32(r4(R+24)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B572af1:{NFSU2_TR(0x572af1);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B572af3:{NFSU2_TR(0x572af3);
{u32 ea_=u32(r4(R+24)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B572af6:{NFSU2_TR(0x572af6);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B572afc:{NFSU2_TR(0x572afc);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B572afe:{NFSU2_TR(0x572afe);
{u32 ea_=u32(r4(R+16)+u32(88u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B572b02:{NFSU2_TR(0x572b02);
{u32 ea_=u32(r4(R+24)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B572b05:{NFSU2_TR(0x572b05);
{u32 ea_=u32(r4(R+16)+u32(92u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B572b09:{NFSU2_TR(0x572b09);
{u32 ea_=u32(r4(R+24)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B572b0c:{NFSU2_TR(0x572b0c);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B572b0e:{NFSU2_TR(0x572b0e);
{u32 ea_=u32(r4(R+16)+u32(84u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B572b12:{NFSU2_TR(0x572b12);
{u32 ea_=u32(r4(R+24)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B572b15:{NFSU2_TR(0x572b15);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B572b17:{NFSU2_TR(0x572b17);
{u32 ea_=u32(r4(R+24)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B572b1a:{NFSU2_TR(0x572b1a);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B572b20:{NFSU2_TR(0x572b20);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B572b22:{NFSU2_TR(0x572b22);
{u32 ea_=u32(r4(R+16)+u32(92u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B572b26:{NFSU2_TR(0x572b26);
u8 U[8];
w4(U+0,u32(u32(u32(0x5cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B572b2a:{NFSU2_TR(0x572b2a);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B572b2c:{NFSU2_TR(0x572b2c);
u8 U[8];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B572b30:{NFSU2_TR(0x572b30);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B572b34:{NFSU2_TR(0x572b34);
{u32 ea_=u32(r4(R+16)+u32(72u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B572b38:{NFSU2_TR(0x572b38);
{u32 ea_=u32(r4(R+16)+u32(72u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B572b3c:{NFSU2_TR(0x572b3c);
{u32 ea_=u32(r4(R+16)+u32(76u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B572b40:{NFSU2_TR(0x572b40);
{u32 ea_=u32(u32(8369984u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B572b46:{NFSU2_TR(0x572b46);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x572b4bull));
TAIL_STATIC(0x75bed4u,75b);
}
B572b4b:L572b4b:{c.instructions+=6;NFSU2_TR(0x572b4b);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B572b4f:{NFSU2_TR(0x572b4f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B572b50:{NFSU2_TR(0x572b50);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B572b51:{NFSU2_TR(0x572b51);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B572b55:{NFSU2_TR(0x572b55);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B572b56:{NFSU2_TR(0x572b56);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x572b5bull));
TAIL_STATIC(0x5bacf0u,5ba);
}
B572b5b:L572b5b:{c.instructions+=3;NFSU2_TR(0x572b5b);
{u32 ea_=u32(u32(8369988u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B572b61:{NFSU2_TR(0x572b61);
{u32 ea_=u32(r4(R+16)+u32(80u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B572b65:{NFSU2_TR(0x572b65);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x572b6aull));
TAIL_STATIC(0x75bed4u,75b);
}
B572b6a:L572b6a:{c.instructions+=6;NFSU2_TR(0x572b6a);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B572b6e:{NFSU2_TR(0x572b6e);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B572b72:{NFSU2_TR(0x572b72);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B572b73:{NFSU2_TR(0x572b73);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B572b74:{NFSU2_TR(0x572b74);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B572b75:{NFSU2_TR(0x572b75);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x572b7aull));
TAIL_STATIC(0x5bada0u,5ba);
}
B572b7a:L572b7a:{c.instructions+=4;NFSU2_TR(0x572b7a);
{u32 ea_=u32(r4(R+16)+u32(92u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B572b7e:{NFSU2_TR(0x572b7e);
{u32 ea_=u32(r4(R+16)+u32(96u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B572b82:{NFSU2_TR(0x572b82);
{u32 ea_=u32(u32(8369992u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B572b88:{NFSU2_TR(0x572b88);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x572b8dull));
TAIL_STATIC(0x75bed4u,75b);
}
B572b8d:L572b8d:{c.instructions+=6;NFSU2_TR(0x572b8d);
u8 U[4];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B572b91:{NFSU2_TR(0x572b91);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B572b92:{NFSU2_TR(0x572b92);
u8 U[4];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B572b96:{NFSU2_TR(0x572b96);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B572b97:{NFSU2_TR(0x572b97);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B572b98:{NFSU2_TR(0x572b98);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x572b9dull));
TAIL_STATIC(0x5bae60u,5ba);
}
B572b9d:L572b9d:{c.instructions+=196;NFSU2_TR(0x572b9d);
{u32 ea_=u32(r4(R+16)+u32(72u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B572ba1:{NFSU2_TR(0x572ba1);
{u32 ea_=u32(r4(R+24)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B572ba4:{NFSU2_TR(0x572ba4);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B572ba8:{NFSU2_TR(0x572ba8);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B572baa:{NFSU2_TR(0x572baa);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B572bac:{NFSU2_TR(0x572bac);
{u32 ea_=u32(r4(R+16)+u32(88u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B572bb0:{NFSU2_TR(0x572bb0);
{u32 ea_=u32(r4(R+24)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B572bb3:{NFSU2_TR(0x572bb3);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B572bb5:{NFSU2_TR(0x572bb5);
{u32 ea_=u32(r4(R+16)+u32(104u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B572bb9:{NFSU2_TR(0x572bb9);
{u32 ea_=u32(r4(R+24)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B572bbc:{NFSU2_TR(0x572bbc);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B572bbe:{NFSU2_TR(0x572bbe);
{u32 ea_=u32(r4(R+16)+u32(136u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B572bc5:{NFSU2_TR(0x572bc5);
{u32 ea_=u32(r4(R+16)+u32(76u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B572bc9:{NFSU2_TR(0x572bc9);
{u32 ea_=u32(r4(R+24)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B572bcc:{NFSU2_TR(0x572bcc);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B572bd0:{NFSU2_TR(0x572bd0);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B572bd2:{NFSU2_TR(0x572bd2);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B572bd4:{NFSU2_TR(0x572bd4);
{u32 ea_=u32(r4(R+16)+u32(92u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B572bd8:{NFSU2_TR(0x572bd8);
{u32 ea_=u32(r4(R+24)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B572bdb:{NFSU2_TR(0x572bdb);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B572bdd:{NFSU2_TR(0x572bdd);
{u32 ea_=u32(r4(R+16)+u32(108u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B572be1:{NFSU2_TR(0x572be1);
{u32 ea_=u32(r4(R+24)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B572be4:{NFSU2_TR(0x572be4);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B572be6:{NFSU2_TR(0x572be6);
{u32 ea_=u32(r4(R+16)+u32(140u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B572bed:{NFSU2_TR(0x572bed);
{u32 ea_=u32(r4(R+16)+u32(80u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B572bf1:{NFSU2_TR(0x572bf1);
{u32 ea_=u32(r4(R+24)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B572bf4:{NFSU2_TR(0x572bf4);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B572bf8:{NFSU2_TR(0x572bf8);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B572bfa:{NFSU2_TR(0x572bfa);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B572bfc:{NFSU2_TR(0x572bfc);
{u32 ea_=u32(r4(R+16)+u32(96u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B572c00:{NFSU2_TR(0x572c00);
{u32 ea_=u32(r4(R+24)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B572c03:{NFSU2_TR(0x572c03);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B572c05:{NFSU2_TR(0x572c05);
{u32 ea_=u32(r4(R+16)+u32(112u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B572c09:{NFSU2_TR(0x572c09);
{u32 ea_=u32(r4(R+24)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B572c0c:{NFSU2_TR(0x572c0c);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B572c0e:{NFSU2_TR(0x572c0e);
{u32 ea_=u32(r4(R+16)+u32(144u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B572c15:{NFSU2_TR(0x572c15);
{u32 ea_=u32(r4(R+16)+u32(84u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B572c19:{NFSU2_TR(0x572c19);
{u32 ea_=u32(r4(R+24)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B572c1c:{NFSU2_TR(0x572c1c);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B572c20:{NFSU2_TR(0x572c20);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B572c22:{NFSU2_TR(0x572c22);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B572c24:{NFSU2_TR(0x572c24);
{u32 ea_=u32(r4(R+16)+u32(100u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B572c28:{NFSU2_TR(0x572c28);
{u32 ea_=u32(r4(R+24)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B572c2b:{NFSU2_TR(0x572c2b);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B572c2d:{NFSU2_TR(0x572c2d);
{u32 ea_=u32(r4(R+16)+u32(116u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B572c31:{NFSU2_TR(0x572c31);
{u32 ea_=u32(r4(R+24)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B572c34:{NFSU2_TR(0x572c34);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B572c36:{NFSU2_TR(0x572c36);
{u32 ea_=u32(r4(R+16)+u32(148u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B572c3d:{NFSU2_TR(0x572c3d);
{u32 ea_=u32(r4(R+16)+u32(72u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B572c41:{NFSU2_TR(0x572c41);
{u32 ea_=u32(r4(R+24)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B572c44:{NFSU2_TR(0x572c44);
{u32 ea_=u32(r4(R+16)+u32(104u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B572c48:{NFSU2_TR(0x572c48);
{u32 ea_=u32(r4(R+24)+u32(28u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B572c4b:{NFSU2_TR(0x572c4b);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B572c4d:{NFSU2_TR(0x572c4d);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B572c51:{NFSU2_TR(0x572c51);
{u32 ea_=u32(r4(R+24)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B572c54:{NFSU2_TR(0x572c54);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B572c56:{NFSU2_TR(0x572c56);
{u32 ea_=u32(r4(R+16)+u32(88u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B572c5a:{NFSU2_TR(0x572c5a);
{u32 ea_=u32(r4(R+24)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B572c5d:{NFSU2_TR(0x572c5d);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B572c5f:{NFSU2_TR(0x572c5f);
{u32 ea_=u32(r4(R+16)+u32(152u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B572c66:{NFSU2_TR(0x572c66);
{u32 ea_=u32(r4(R+16)+u32(76u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B572c6a:{NFSU2_TR(0x572c6a);
{u32 ea_=u32(r4(R+24)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B572c6d:{NFSU2_TR(0x572c6d);
{u32 ea_=u32(r4(R+16)+u32(108u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B572c71:{NFSU2_TR(0x572c71);
{u32 ea_=u32(r4(R+24)+u32(28u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B572c74:{NFSU2_TR(0x572c74);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B572c76:{NFSU2_TR(0x572c76);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B572c7a:{NFSU2_TR(0x572c7a);
{u32 ea_=u32(r4(R+24)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B572c7d:{NFSU2_TR(0x572c7d);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B572c7f:{NFSU2_TR(0x572c7f);
{u32 ea_=u32(r4(R+16)+u32(92u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B572c83:{NFSU2_TR(0x572c83);
{u32 ea_=u32(r4(R+24)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B572c86:{NFSU2_TR(0x572c86);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B572c88:{NFSU2_TR(0x572c88);
{u32 ea_=u32(r4(R+16)+u32(156u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B572c8f:{NFSU2_TR(0x572c8f);
{u32 ea_=u32(r4(R+16)+u32(80u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B572c93:{NFSU2_TR(0x572c93);
{u32 ea_=u32(r4(R+24)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B572c96:{NFSU2_TR(0x572c96);
{u32 ea_=u32(r4(R+16)+u32(112u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B572c9a:{NFSU2_TR(0x572c9a);
{u32 ea_=u32(r4(R+24)+u32(28u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B572c9d:{NFSU2_TR(0x572c9d);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B572c9f:{NFSU2_TR(0x572c9f);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B572ca3:{NFSU2_TR(0x572ca3);
{u32 ea_=u32(r4(R+24)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B572ca6:{NFSU2_TR(0x572ca6);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B572ca8:{NFSU2_TR(0x572ca8);
{u32 ea_=u32(r4(R+16)+u32(96u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B572cac:{NFSU2_TR(0x572cac);
{u32 ea_=u32(r4(R+24)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B572caf:{NFSU2_TR(0x572caf);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B572cb1:{NFSU2_TR(0x572cb1);
{u32 ea_=u32(r4(R+16)+u32(160u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B572cb8:{NFSU2_TR(0x572cb8);
{u32 ea_=u32(r4(R+16)+u32(84u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B572cbc:{NFSU2_TR(0x572cbc);
{u32 ea_=u32(r4(R+24)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B572cbf:{NFSU2_TR(0x572cbf);
{u32 ea_=u32(r4(R+16)+u32(116u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B572cc3:{NFSU2_TR(0x572cc3);
{u32 ea_=u32(r4(R+24)+u32(28u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B572cc6:{NFSU2_TR(0x572cc6);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B572cc8:{NFSU2_TR(0x572cc8);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B572ccc:{NFSU2_TR(0x572ccc);
{u32 ea_=u32(r4(R+24)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B572ccf:{NFSU2_TR(0x572ccf);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B572cd1:{NFSU2_TR(0x572cd1);
{u32 ea_=u32(r4(R+16)+u32(100u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B572cd5:{NFSU2_TR(0x572cd5);
{u32 ea_=u32(r4(R+24)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B572cd8:{NFSU2_TR(0x572cd8);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B572cda:{NFSU2_TR(0x572cda);
{u32 ea_=u32(r4(R+16)+u32(164u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B572ce1:{NFSU2_TR(0x572ce1);
{u32 ea_=u32(r4(R+16)+u32(88u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B572ce5:{NFSU2_TR(0x572ce5);
{u32 ea_=u32(r4(R+24)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B572ce8:{NFSU2_TR(0x572ce8);
{u32 ea_=u32(r4(R+16)+u32(104u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B572cec:{NFSU2_TR(0x572cec);
{u32 ea_=u32(r4(R+24)+u32(44u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B572cef:{NFSU2_TR(0x572cef);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B572cf1:{NFSU2_TR(0x572cf1);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B572cf5:{NFSU2_TR(0x572cf5);
{u32 ea_=u32(r4(R+24)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B572cf8:{NFSU2_TR(0x572cf8);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B572cfa:{NFSU2_TR(0x572cfa);
{u32 ea_=u32(r4(R+16)+u32(72u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B572cfe:{NFSU2_TR(0x572cfe);
{u32 ea_=u32(r4(R+24)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B572d01:{NFSU2_TR(0x572d01);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B572d03:{NFSU2_TR(0x572d03);
{u32 ea_=u32(r4(R+16)+u32(168u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B572d0a:{NFSU2_TR(0x572d0a);
{u32 ea_=u32(r4(R+16)+u32(92u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B572d0e:{NFSU2_TR(0x572d0e);
{u32 ea_=u32(r4(R+24)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B572d11:{NFSU2_TR(0x572d11);
{u32 ea_=u32(r4(R+16)+u32(108u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B572d15:{NFSU2_TR(0x572d15);
{u32 ea_=u32(r4(R+24)+u32(44u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B572d18:{NFSU2_TR(0x572d18);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B572d1a:{NFSU2_TR(0x572d1a);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B572d1e:{NFSU2_TR(0x572d1e);
{u32 ea_=u32(r4(R+24)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B572d21:{NFSU2_TR(0x572d21);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B572d23:{NFSU2_TR(0x572d23);
{u32 ea_=u32(r4(R+16)+u32(76u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B572d27:{NFSU2_TR(0x572d27);
{u32 ea_=u32(r4(R+24)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B572d2a:{NFSU2_TR(0x572d2a);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B572d2c:{NFSU2_TR(0x572d2c);
{u32 ea_=u32(r4(R+16)+u32(172u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B572d33:{NFSU2_TR(0x572d33);
{u32 ea_=u32(r4(R+16)+u32(96u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B572d37:{NFSU2_TR(0x572d37);
{u32 ea_=u32(r4(R+24)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B572d3a:{NFSU2_TR(0x572d3a);
{u32 ea_=u32(r4(R+16)+u32(112u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B572d3e:{NFSU2_TR(0x572d3e);
{u32 ea_=u32(r4(R+24)+u32(44u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B572d41:{NFSU2_TR(0x572d41);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B572d43:{NFSU2_TR(0x572d43);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B572d47:{NFSU2_TR(0x572d47);
{u32 ea_=u32(r4(R+24)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B572d4a:{NFSU2_TR(0x572d4a);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B572d4c:{NFSU2_TR(0x572d4c);
{u32 ea_=u32(r4(R+16)+u32(80u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B572d50:{NFSU2_TR(0x572d50);
{u32 ea_=u32(r4(R+24)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B572d53:{NFSU2_TR(0x572d53);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B572d55:{NFSU2_TR(0x572d55);
{u32 ea_=u32(r4(R+16)+u32(176u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B572d5c:{NFSU2_TR(0x572d5c);
{u32 ea_=u32(r4(R+16)+u32(100u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B572d60:{NFSU2_TR(0x572d60);
{u32 ea_=u32(r4(R+24)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B572d63:{NFSU2_TR(0x572d63);
{u32 ea_=u32(r4(R+16)+u32(116u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B572d67:{NFSU2_TR(0x572d67);
{u32 ea_=u32(r4(R+24)+u32(44u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B572d6a:{NFSU2_TR(0x572d6a);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B572d6c:{NFSU2_TR(0x572d6c);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B572d70:{NFSU2_TR(0x572d70);
{u32 ea_=u32(r4(R+24)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B572d73:{NFSU2_TR(0x572d73);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B572d75:{NFSU2_TR(0x572d75);
{u32 ea_=u32(r4(R+16)+u32(84u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B572d79:{NFSU2_TR(0x572d79);
{u32 ea_=u32(r4(R+24)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B572d7c:{NFSU2_TR(0x572d7c);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B572d7e:{NFSU2_TR(0x572d7e);
{u32 ea_=u32(r4(R+16)+u32(180u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B572d85:{NFSU2_TR(0x572d85);
{u32 ea_=u32(r4(R+16)+u32(72u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B572d89:{NFSU2_TR(0x572d89);
{u32 ea_=u32(r4(R+24)+u32(52u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B572d8c:{NFSU2_TR(0x572d8c);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B572d90:{NFSU2_TR(0x572d90);
{u32 ea_=u32(r4(R+24)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B572d93:{NFSU2_TR(0x572d93);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B572d95:{NFSU2_TR(0x572d95);
{u32 ea_=u32(r4(R+16)+u32(104u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B572d99:{NFSU2_TR(0x572d99);
{u32 ea_=u32(r4(R+24)+u32(60u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B572d9c:{NFSU2_TR(0x572d9c);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B572d9e:{NFSU2_TR(0x572d9e);
{u32 ea_=u32(r4(R+16)+u32(88u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B572da2:{NFSU2_TR(0x572da2);
{u32 ea_=u32(r4(R+24)+u32(56u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B572da5:{NFSU2_TR(0x572da5);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B572da7:{NFSU2_TR(0x572da7);
{u32 ea_=u32(r4(R+16)+u32(184u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B572dae:{NFSU2_TR(0x572dae);
{u32 ea_=u32(r4(R+16)+u32(76u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B572db2:{NFSU2_TR(0x572db2);
{u32 ea_=u32(r4(R+24)+u32(52u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B572db5:{NFSU2_TR(0x572db5);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B572db9:{NFSU2_TR(0x572db9);
{u32 ea_=u32(r4(R+24)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B572dbc:{NFSU2_TR(0x572dbc);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B572dbe:{NFSU2_TR(0x572dbe);
{u32 ea_=u32(r4(R+16)+u32(108u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B572dc2:{NFSU2_TR(0x572dc2);
{u32 ea_=u32(r4(R+24)+u32(60u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B572dc5:{NFSU2_TR(0x572dc5);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B572dc7:{NFSU2_TR(0x572dc7);
{u32 ea_=u32(r4(R+16)+u32(92u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B572dcb:{NFSU2_TR(0x572dcb);
{u32 ea_=u32(r4(R+24)+u32(56u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B572dce:{NFSU2_TR(0x572dce);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B572dd0:{NFSU2_TR(0x572dd0);
{u32 ea_=u32(r4(R+16)+u32(188u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B572dd7:{NFSU2_TR(0x572dd7);
{u32 ea_=u32(r4(R+16)+u32(80u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B572ddb:{NFSU2_TR(0x572ddb);
{u32 ea_=u32(r4(R+24)+u32(52u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B572dde:{NFSU2_TR(0x572dde);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B572de2:{NFSU2_TR(0x572de2);
{u32 ea_=u32(r4(R+24)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B572de5:{NFSU2_TR(0x572de5);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B572de7:{NFSU2_TR(0x572de7);
{u32 ea_=u32(r4(R+16)+u32(112u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B572deb:{NFSU2_TR(0x572deb);
{u32 ea_=u32(r4(R+24)+u32(60u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B572dee:{NFSU2_TR(0x572dee);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B572df0:{NFSU2_TR(0x572df0);
{u32 ea_=u32(r4(R+16)+u32(96u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B572df4:{NFSU2_TR(0x572df4);
{u32 ea_=u32(r4(R+24)+u32(56u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B572df7:{NFSU2_TR(0x572df7);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B572df9:{NFSU2_TR(0x572df9);
{u32 ea_=u32(r4(R+16)+u32(192u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B572e00:{NFSU2_TR(0x572e00);
{u32 ea_=u32(r4(R+16)+u32(84u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B572e04:{NFSU2_TR(0x572e04);
{u32 ea_=u32(r4(R+24)+u32(52u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B572e07:{NFSU2_TR(0x572e07);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B572e0b:{NFSU2_TR(0x572e0b);
{u32 ea_=u32(r4(R+24)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B572e0e:{NFSU2_TR(0x572e0e);
u8 U[4];
w4(U+0,u32(u32(u32(0x88ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B572e15:{NFSU2_TR(0x572e15);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B572e16:{NFSU2_TR(0x572e16);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B572e17:{NFSU2_TR(0x572e17);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B572e19:{NFSU2_TR(0x572e19);
{u32 ea_=u32(r4(R+16)+u32(124u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B572e1d:{NFSU2_TR(0x572e1d);
{u32 ea_=u32(r4(R+24)+u32(60u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B572e20:{NFSU2_TR(0x572e20);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B572e22:{NFSU2_TR(0x572e22);
{u32 ea_=u32(r4(R+16)+u32(108u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B572e26:{NFSU2_TR(0x572e26);
{u32 ea_=u32(r4(R+24)+u32(56u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B572e29:{NFSU2_TR(0x572e29);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B572e2b:{NFSU2_TR(0x572e2b);
{u32 ea_=u32(r4(R+16)+u32(204u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B572e32:{NFSU2_TR(0x572e32);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x572e37ull));
TAIL_STATIC(0x4012b0u,401);
}
B572e37:L572e37:{c.instructions+=1;NFSU2_TR(0x572e37);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x30ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x30ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x30ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B572e3a:L572e3a:{c.instructions+=4;NFSU2_TR(0x572e3a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B572e3b:{NFSU2_TR(0x572e3b);
__builtin_memmove((R+16),(R+20),4);
}
B572e3d:{NFSU2_TR(0x572e3d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B572e3e:{NFSU2_TR(0x572e3e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B572e3f:L572e3f:{c.instructions+=2;NFSU2_TR(0x572e3f);
w4(R+4,u32(0x1ull));
}
B572e44:{NFSU2_TR(0x572e44);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x572a8fu);}goto L572a8f;}
}
B572e50:L572e50:{c.instructions+=9;NFSU2_TR(0x572e50);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B572e51:{NFSU2_TR(0x572e51);
__builtin_memmove((R+20),(R+16),4);
}
B572e53:{NFSU2_TR(0x572e53);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B572e56:{NFSU2_TR(0x572e56);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x28ull))));
}
B572e59:{NFSU2_TR(0x572e59);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B572e5a:{NFSU2_TR(0x572e5a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B572e5b:{NFSU2_TR(0x572e5b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B572e5e:{NFSU2_TR(0x572e5e);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x8900acull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B572e65:{NFSU2_TR(0x572e65);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x572e6aull));
TAIL_STATIC(0x5ea7c0u,5ea);
}
B572e6a:L572e6a:{c.instructions+=2;NFSU2_TR(0x572e6a);
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
B572e6c:{NFSU2_TR(0x572e6c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L572fbf;}}
}
B572e72:L572e72:{c.instructions+=22;NFSU2_TR(0x572e72);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B572e75:{NFSU2_TR(0x572e75);
{u32 ea_=u32(u32(8370000u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B572e7b:{NFSU2_TR(0x572e7b);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B572e7d:{NFSU2_TR(0x572e7d);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B572e81:{NFSU2_TR(0x572e81);
{u32 ea_=u32(u32(8370004u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B572e87:{NFSU2_TR(0x572e87);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B572e8a:{NFSU2_TR(0x572e8a);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B572e8e:{NFSU2_TR(0x572e8e);
{u32 ea_=u32(u32(8370008u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B572e94:{NFSU2_TR(0x572e94);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B572e97:{NFSU2_TR(0x572e97);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B572e9b:{NFSU2_TR(0x572e9b);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B572e9f:{NFSU2_TR(0x572e9f);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B572ea3:{NFSU2_TR(0x572ea3);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B572ea7:{NFSU2_TR(0x572ea7);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B572ea9:{NFSU2_TR(0x572ea9);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B572ead:{NFSU2_TR(0x572ead);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B572eb1:{NFSU2_TR(0x572eb1);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B572eb3:{NFSU2_TR(0x572eb3);
__asm__ volatile(".byte 0xd9,0xfa":::"memory");
}
B572eb5:{NFSU2_TR(0x572eb5);
{u32 ea_=u32(u32(7986388u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B572ebb:{NFSU2_TR(0x572ebb);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B572ebd:{NFSU2_TR(0x572ebd);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B572ec0:{NFSU2_TR(0x572ec0);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L572fbd;}}
}
B572ec6:L572ec6:{c.instructions+=4;NFSU2_TR(0x572ec6);
{u32 ea_=u32(u32(7986392u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B572ecc:{NFSU2_TR(0x572ecc);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B572ece:{NFSU2_TR(0x572ece);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B572ed1:{NFSU2_TR(0x572ed1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L572edb;}}
}
B572ed3:L572ed3:{c.instructions+=2;NFSU2_TR(0x572ed3);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B572ed5:{NFSU2_TR(0x572ed5);
{u32 ea_=u32(u32(7986392u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B572edb:L572edb:{c.instructions+=16;NFSU2_TR(0x572edb);
{u32 ea_=u32(u32(7986388u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B572ee1:{NFSU2_TR(0x572ee1);
__builtin_memmove((R+0),(R+28),4);
}
B572ee3:{NFSU2_TR(0x572ee3);
{u32 ea_=u32(u32(7986392u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B572ee9:{NFSU2_TR(0x572ee9);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B572eec:{NFSU2_TR(0x572eec);
{u32 ea_=u32(u32(7986388u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B572ef2:{NFSU2_TR(0x572ef2);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x865370ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B572ef8:{NFSU2_TR(0x572ef8);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B572efa:{NFSU2_TR(0x572efa);
__asm__ volatile(".byte 0xde,0xf9":::"memory");
}
B572efc:{NFSU2_TR(0x572efc);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x865360ull))));
__builtin_memmove((R+24),(U+0),4);
}
B572f02:{NFSU2_TR(0x572f02);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B572f06:{NFSU2_TR(0x572f06);
{u32 ea_=u32(u32(7986400u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B572f0c:{NFSU2_TR(0x572f0c);
{u32 ea_=u32(u32(7986396u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B572f12:{NFSU2_TR(0x572f12);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B572f16:{NFSU2_TR(0x572f16);
{u32 ea_=u32(u32(7986396u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B572f1c:{NFSU2_TR(0x572f1c);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B572f20:{NFSU2_TR(0x572f20);
if(r1(R+518)){{goto L572f2d;}}
}
B572f22:L572f22:{c.instructions+=3;NFSU2_TR(0x572f22);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B572f25:{NFSU2_TR(0x572f25);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B572f26:{NFSU2_TR(0x572f26);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x572f2bull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5722a0u);}goto L5722a0;}
}
B572f2b:L572f2b:{c.instructions+=1;NFSU2_TR(0x572f2b);
{goto L572f33;}
}
B572f2d:L572f2d:{c.instructions+=1;NFSU2_TR(0x572f2d);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B572f33:L572f33:{c.instructions+=6;NFSU2_TR(0x572f33);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B572f37:{NFSU2_TR(0x572f37);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B572f39:{NFSU2_TR(0x572f39);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B572f3b:{NFSU2_TR(0x572f3b);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B572f3d:{NFSU2_TR(0x572f3d);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B572f40:{NFSU2_TR(0x572f40);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L572fbf;}}
}
B572f42:L572f42:{c.instructions+=8;NFSU2_TR(0x572f42);
{u32 ea_=u32(u32(7986408u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B572f48:{NFSU2_TR(0x572f48);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x8900acull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B572f4f:{NFSU2_TR(0x572f4f);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B572f51:{NFSU2_TR(0x572f51);
{u32 ea_=u32(u32(7986404u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B572f57:{NFSU2_TR(0x572f57);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B572f5b:{NFSU2_TR(0x572f5b);
{u32 ea_=u32(u32(7986404u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B572f61:{NFSU2_TR(0x572f61);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B572f65:{NFSU2_TR(0x572f65);
if(r1(R+518)){{goto L572f89;}}
}
B572f67:L572f67:{c.instructions+=2;NFSU2_TR(0x572f67);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x7ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B572f6b:{NFSU2_TR(0x572f6b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L572f89;}}
}
B572f6d:L572f6d:{c.instructions+=6;NFSU2_TR(0x572f6d);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B572f71:{NFSU2_TR(0x572f71);
{u32 ea_=u32(u32(7885036u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B572f77:{NFSU2_TR(0x572f77);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B572f7b:{NFSU2_TR(0x572f7b);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B572f7f:{NFSU2_TR(0x572f7f);
{u32 ea_=u32(u32(7905516u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B572f85:{NFSU2_TR(0x572f85);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B572f89:L572f89:{c.instructions+=7;NFSU2_TR(0x572f89);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B572f8d:{NFSU2_TR(0x572f8d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B572f8e:{NFSU2_TR(0x572f8e);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B572f92:{NFSU2_TR(0x572f92);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B572f93:{NFSU2_TR(0x572f93);
u8 U[4];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B572f97:{NFSU2_TR(0x572f97);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B572f98:{NFSU2_TR(0x572f98);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x572f9dull));
TAIL_STATIC(0x43cf90u,43c);
}
B572f9d:L572f9d:{c.instructions+=9;NFSU2_TR(0x572f9d);
__builtin_memmove((R+0),gp(0x79dc68),4);
}
B572fa2:{NFSU2_TR(0x572fa2);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B572fa6:{NFSU2_TR(0x572fa6);
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
B572fa9:{NFSU2_TR(0x572fa9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B572faa:{NFSU2_TR(0x572faa);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B572fab:{NFSU2_TR(0x572fab);
u8 U[4];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B572faf:{NFSU2_TR(0x572faf);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B572fb0:{NFSU2_TR(0x572fb0);
__builtin_memmove((R+4),(R+24),4);
}
B572fb2:{NFSU2_TR(0x572fb2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x572fb7ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x572810u);}goto L572810;}
}
B572fb7:L572fb7:{c.instructions+=5;NFSU2_TR(0x572fb7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B572fb8:{NFSU2_TR(0x572fb8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B572fb9:{NFSU2_TR(0x572fb9);
__builtin_memmove((R+16),(R+20),4);
}
B572fbb:{NFSU2_TR(0x572fbb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B572fbc:{NFSU2_TR(0x572fbc);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B572fbd:L572fbd:{c.instructions+=1;NFSU2_TR(0x572fbd);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B572fbf:L572fbf:{c.instructions+=5;NFSU2_TR(0x572fbf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B572fc0:{NFSU2_TR(0x572fc0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B572fc1:{NFSU2_TR(0x572fc1);
__builtin_memmove((R+16),(R+20),4);
}
B572fc3:{NFSU2_TR(0x572fc3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B572fc4:{NFSU2_TR(0x572fc4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B572fd0:L572fd0:{c.instructions+=10;NFSU2_TR(0x572fd0);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B572fd4:{NFSU2_TR(0x572fd4);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B572fd5:{NFSU2_TR(0x572fd5);
__builtin_memmove((R+24),(R+4),4);
}
B572fd7:{NFSU2_TR(0x572fd7);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B572fdb:{NFSU2_TR(0x572fdb);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B572fdc:{NFSU2_TR(0x572fdc);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B572fdd:{NFSU2_TR(0x572fdd);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((R+8),(U+0),4);
}
B572fe0:{NFSU2_TR(0x572fe0);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B572fe1:{NFSU2_TR(0x572fe1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B572fe4:{NFSU2_TR(0x572fe4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x572fe9ull));
TAIL_STATIC(0x43dbd0u,43d);
}
B572fe9:L572fe9:{c.instructions+=9;NFSU2_TR(0x572fe9);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B572feb:{NFSU2_TR(0x572feb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+24)),r4(U+0));
}
B572fed:{NFSU2_TR(0x572fed);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B572ff0:{NFSU2_TR(0x572ff0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B572ff3:{NFSU2_TR(0x572ff3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B572ff6:{NFSU2_TR(0x572ff6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B572ff9:{NFSU2_TR(0x572ff9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B572ffc:{NFSU2_TR(0x572ffc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B572fff:{NFSU2_TR(0x572fff);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
TAIL_STATIC(0x573002u,573);
}
XIT:NFSU2_TR_EXIT(0x572,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
