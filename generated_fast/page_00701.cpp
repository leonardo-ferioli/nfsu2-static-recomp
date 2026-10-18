#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_6f4(u8* __restrict R,Cpu& c);
u32 body_6ff(u8* __restrict R,Cpu& c);
u32 body_700(u8* __restrict R,Cpu& c);
u32 body_702(u8* __restrict R,Cpu& c);
u32 body_75d(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x701,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x701,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_701(u8* __restrict R,Cpu& c);
u32 page_701(Cpu& c){return body_701(c.regs.data(),c);}
__attribute__((noinline)) u32 body_701(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x701000:goto L701000;
case 0x701003:c.instructions+=7;goto B701003;
case 0x701005:c.instructions+=6;goto B701005;
case 0x701008:c.instructions+=5;goto B701008;
case 0x70100b:c.instructions+=4;goto B70100b;
case 0x70100d:c.instructions+=3;goto B70100d;
case 0x70100f:c.instructions+=2;goto B70100f;
case 0x701012:c.instructions+=1;goto B701012;
case 0x701014:goto L701014;
case 0x701016:c.instructions+=1;goto B701016;
case 0x70101b:goto L70101b;
case 0x70101d:c.instructions+=1;goto B70101d;
case 0x70101f:goto L70101f;
case 0x701022:c.instructions+=12;goto B701022;
case 0x701024:c.instructions+=11;goto B701024;
case 0x701025:c.instructions+=10;goto B701025;
case 0x701027:c.instructions+=9;goto B701027;
case 0x70102a:c.instructions+=8;goto B70102a;
case 0x70102b:c.instructions+=7;goto B70102b;
case 0x70102d:c.instructions+=6;goto B70102d;
case 0x701030:c.instructions+=5;goto B701030;
case 0x701031:c.instructions+=4;goto B701031;
case 0x701037:c.instructions+=3;goto B701037;
case 0x701038:c.instructions+=2;goto B701038;
case 0x701039:c.instructions+=1;goto B701039;
case 0x70103a:goto L70103a;
case 0x70103b:c.instructions+=15;goto B70103b;
case 0x70103d:c.instructions+=14;goto B70103d;
case 0x701040:c.instructions+=13;goto B701040;
case 0x701043:c.instructions+=12;goto B701043;
case 0x701044:c.instructions+=11;goto B701044;
case 0x701047:c.instructions+=10;goto B701047;
case 0x701048:c.instructions+=9;goto B701048;
case 0x70104a:c.instructions+=8;goto B70104a;
case 0x70104d:c.instructions+=7;goto B70104d;
case 0x70104e:c.instructions+=6;goto B70104e;
case 0x701050:c.instructions+=5;goto B701050;
case 0x701052:c.instructions+=4;goto B701052;
case 0x701055:c.instructions+=3;goto B701055;
case 0x701058:c.instructions+=2;goto B701058;
case 0x70105b:c.instructions+=1;goto B70105b;
case 0x70105d:goto L70105d;
case 0x701060:c.instructions+=1;goto B701060;
case 0x701065:goto L701065;
case 0x701068:c.instructions+=2;goto B701068;
case 0x70106a:c.instructions+=1;goto B70106a;
case 0x70106c:goto L70106c;
case 0x70106f:c.instructions+=1;goto B70106f;
case 0x701071:goto L701071;
case 0x701073:c.instructions+=1;goto B701073;
case 0x701076:goto L701076;
case 0x701079:c.instructions+=11;goto B701079;
case 0x70107d:c.instructions+=10;goto B70107d;
case 0x701080:c.instructions+=9;goto B701080;
case 0x701082:c.instructions+=8;goto B701082;
case 0x701085:c.instructions+=7;goto B701085;
case 0x701086:c.instructions+=6;goto B701086;
case 0x701088:c.instructions+=5;goto B701088;
case 0x70108b:c.instructions+=4;goto B70108b;
case 0x70108c:c.instructions+=3;goto B70108c;
case 0x70108e:c.instructions+=2;goto B70108e;
case 0x701091:c.instructions+=1;goto B701091;
case 0x701094:goto L701094;
case 0x701097:c.instructions+=1;goto B701097;
case 0x701099:goto L701099;
case 0x70109c:c.instructions+=15;goto B70109c;
case 0x70109f:c.instructions+=14;goto B70109f;
case 0x7010a2:c.instructions+=13;goto B7010a2;
case 0x7010a5:c.instructions+=12;goto B7010a5;
case 0x7010ab:c.instructions+=11;goto B7010ab;
case 0x7010b1:c.instructions+=10;goto B7010b1;
case 0x7010b4:c.instructions+=9;goto B7010b4;
case 0x7010b8:c.instructions+=8;goto B7010b8;
case 0x7010bb:c.instructions+=7;goto B7010bb;
case 0x7010bf:c.instructions+=6;goto B7010bf;
case 0x7010c2:c.instructions+=5;goto B7010c2;
case 0x7010c5:c.instructions+=4;goto B7010c5;
case 0x7010c8:c.instructions+=3;goto B7010c8;
case 0x7010c9:c.instructions+=2;goto B7010c9;
case 0x7010cb:c.instructions+=1;goto B7010cb;
case 0x7010cd:goto L7010cd;
case 0x7010d0:goto L7010d0;
case 0x7010d3:c.instructions+=3;goto B7010d3;
case 0x7010d5:c.instructions+=2;goto B7010d5;
case 0x7010d8:c.instructions+=1;goto B7010d8;
case 0x7010dd:goto L7010dd;
case 0x7010e0:c.instructions+=1;goto B7010e0;
case 0x7010e2:goto L7010e2;
case 0x7010e5:goto L7010e5;
case 0x7010e6:c.instructions+=2;goto B7010e6;
case 0x7010e7:c.instructions+=1;goto B7010e7;
case 0x7010ec:goto L7010ec;
case 0x7010f1:c.instructions+=3;goto B7010f1;
case 0x7010f6:c.instructions+=2;goto B7010f6;
case 0x7010f9:c.instructions+=1;goto B7010f9;
case 0x7010fe:goto L7010fe;
case 0x701101:c.instructions+=2;goto B701101;
case 0x701104:c.instructions+=1;goto B701104;
case 0x701109:goto L701109;
case 0x70110e:c.instructions+=1;goto B70110e;
case 0x701110:goto L701110;
case 0x701113:c.instructions+=2;goto B701113;
case 0x701115:c.instructions+=1;goto B701115;
case 0x701117:goto L701117;
case 0x701119:c.instructions+=3;goto B701119;
case 0x70111a:c.instructions+=2;goto B70111a;
case 0x70111c:c.instructions+=1;goto B70111c;
case 0x70111f:goto L70111f;
case 0x701121:c.instructions+=2;goto B701121;
case 0x701124:c.instructions+=1;goto B701124;
case 0x701129:goto L701129;
case 0x70112c:c.instructions+=4;goto B70112c;
case 0x701130:c.instructions+=3;goto B701130;
case 0x701131:c.instructions+=2;goto B701131;
case 0x701132:c.instructions+=1;goto B701132;
case 0x701134:goto L701134;
case 0x701137:c.instructions+=1;goto B701137;
case 0x70113c:goto L70113c;
case 0x701141:c.instructions+=2;goto B701141;
case 0x701143:c.instructions+=1;goto B701143;
case 0x701145:goto L701145;
case 0x70114a:goto L70114a;
case 0x70114c:goto L70114c;
case 0x701151:goto L701151;
case 0x701154:c.instructions+=3;goto B701154;
case 0x701158:c.instructions+=2;goto B701158;
case 0x701159:c.instructions+=1;goto B701159;
case 0x70115b:goto L70115b;
case 0x70115e:c.instructions+=2;goto B70115e;
case 0x70115f:c.instructions+=1;goto B70115f;
case 0x701164:goto L701164;
case 0x701167:c.instructions+=3;goto B701167;
case 0x70116a:c.instructions+=2;goto B70116a;
case 0x70116d:c.instructions+=1;goto B70116d;
case 0x701172:goto L701172;
case 0x701175:c.instructions+=2;goto B701175;
case 0x701177:c.instructions+=1;goto B701177;
case 0x701179:goto L701179;
case 0x70117c:c.instructions+=1;goto B70117c;
case 0x70117e:goto L70117e;
case 0x701180:c.instructions+=1;goto B701180;
case 0x701183:goto L701183;
case 0x701186:c.instructions+=15;goto B701186;
case 0x701189:c.instructions+=14;goto B701189;
case 0x70118c:c.instructions+=13;goto B70118c;
case 0x70118f:c.instructions+=12;goto B70118f;
case 0x701191:c.instructions+=11;goto B701191;
case 0x701194:c.instructions+=10;goto B701194;
case 0x701197:c.instructions+=9;goto B701197;
case 0x701198:c.instructions+=8;goto B701198;
case 0x70119a:c.instructions+=7;goto B70119a;
case 0x70119b:c.instructions+=6;goto B70119b;
case 0x70119d:c.instructions+=5;goto B70119d;
case 0x7011a0:c.instructions+=4;goto B7011a0;
case 0x7011a3:c.instructions+=3;goto B7011a3;
case 0x7011a5:c.instructions+=2;goto B7011a5;
case 0x7011a8:c.instructions+=1;goto B7011a8;
case 0x7011aa:goto L7011aa;
case 0x7011ac:c.instructions+=2;goto B7011ac;
case 0x7011af:c.instructions+=1;goto B7011af;
case 0x7011b1:goto L7011b1;
case 0x7011b4:c.instructions+=32;goto B7011b4;
case 0x7011b8:c.instructions+=31;goto B7011b8;
case 0x7011bb:c.instructions+=30;goto B7011bb;
case 0x7011bc:c.instructions+=29;goto B7011bc;
case 0x7011be:c.instructions+=28;goto B7011be;
case 0x7011bf:c.instructions+=27;goto B7011bf;
case 0x7011c1:c.instructions+=26;goto B7011c1;
case 0x7011c4:c.instructions+=25;goto B7011c4;
case 0x7011c6:c.instructions+=24;goto B7011c6;
case 0x7011c8:c.instructions+=23;goto B7011c8;
case 0x7011c9:c.instructions+=22;goto B7011c9;
case 0x7011cb:c.instructions+=21;goto B7011cb;
case 0x7011cd:c.instructions+=20;goto B7011cd;
case 0x7011cf:c.instructions+=19;goto B7011cf;
case 0x7011d2:c.instructions+=18;goto B7011d2;
case 0x7011d4:c.instructions+=17;goto B7011d4;
case 0x7011d5:c.instructions+=16;goto B7011d5;
case 0x7011d8:c.instructions+=15;goto B7011d8;
case 0x7011da:c.instructions+=14;goto B7011da;
case 0x7011db:c.instructions+=13;goto B7011db;
case 0x7011de:c.instructions+=12;goto B7011de;
case 0x7011e0:c.instructions+=11;goto B7011e0;
case 0x7011e1:c.instructions+=10;goto B7011e1;
case 0x7011e4:c.instructions+=9;goto B7011e4;
case 0x7011e6:c.instructions+=8;goto B7011e6;
case 0x7011e7:c.instructions+=7;goto B7011e7;
case 0x7011ea:c.instructions+=6;goto B7011ea;
case 0x7011ec:c.instructions+=5;goto B7011ec;
case 0x7011ef:c.instructions+=4;goto B7011ef;
case 0x7011f0:c.instructions+=3;goto B7011f0;
case 0x7011f2:c.instructions+=2;goto B7011f2;
case 0x7011f3:c.instructions+=1;goto B7011f3;
case 0x7011f8:goto L7011f8;
case 0x7011fb:c.instructions+=3;goto B7011fb;
case 0x7011fe:c.instructions+=2;goto B7011fe;
case 0x701201:c.instructions+=1;goto B701201;
case 0x701203:goto L701203;
case 0x701205:goto L701205;
case 0x701209:c.instructions+=3;goto B701209;
case 0x70120c:c.instructions+=2;goto B70120c;
case 0x70120f:c.instructions+=1;goto B70120f;
case 0x701211:goto L701211;
case 0x701216:c.instructions+=2;goto B701216;
case 0x701219:c.instructions+=1;goto B701219;
case 0x70121e:goto L70121e;
case 0x701221:c.instructions+=3;goto B701221;
case 0x701222:c.instructions+=2;goto B701222;
case 0x701223:c.instructions+=1;goto B701223;
case 0x701228:goto L701228;
case 0x70122d:c.instructions+=1;goto B70122d;
case 0x70122f:goto L70122f;
case 0x701232:c.instructions+=2;goto B701232;
case 0x701234:c.instructions+=1;goto B701234;
case 0x701236:goto L701236;
case 0x701238:c.instructions+=3;goto B701238;
case 0x701239:c.instructions+=2;goto B701239;
case 0x70123b:c.instructions+=1;goto B70123b;
case 0x70123e:goto L70123e;
case 0x701240:goto L701240;
case 0x701243:c.instructions+=1;goto B701243;
case 0x701248:goto L701248;
case 0x70124d:c.instructions+=1;goto B70124d;
case 0x70124f:goto L70124f;
case 0x701252:c.instructions+=1;goto B701252;
case 0x701255:goto L701255;
case 0x701258:c.instructions+=5;goto B701258;
case 0x701259:c.instructions+=4;goto B701259;
case 0x70125a:c.instructions+=3;goto B70125a;
case 0x70125b:c.instructions+=2;goto B70125b;
case 0x70125c:c.instructions+=1;goto B70125c;
case 0x70125f:goto L70125f;
case 0x701260:c.instructions+=8;goto B701260;
case 0x701262:c.instructions+=7;goto B701262;
case 0x701263:c.instructions+=6;goto B701263;
case 0x701264:c.instructions+=5;goto B701264;
case 0x701265:c.instructions+=4;goto B701265;
case 0x701268:c.instructions+=3;goto B701268;
case 0x701269:c.instructions+=2;goto B701269;
case 0x70126b:c.instructions+=1;goto B70126b;
case 0x701270:goto L701270;
case 0x701274:c.instructions+=1;goto B701274;
case 0x701276:goto L701276;
case 0x701279:c.instructions+=3;goto B701279;
case 0x70127c:c.instructions+=2;goto B70127c;
case 0x70127f:c.instructions+=1;goto B70127f;
case 0x701281:goto L701281;
case 0x701284:c.instructions+=2;goto B701284;
case 0x701286:c.instructions+=1;goto B701286;
case 0x70128b:goto L70128b;
case 0x70128e:c.instructions+=3;goto B70128e;
case 0x70128f:c.instructions+=2;goto B70128f;
case 0x701291:c.instructions+=1;goto B701291;
case 0x701296:goto L701296;
case 0x701299:c.instructions+=1;goto B701299;
case 0x70129e:goto L70129e;
case 0x7012a3:c.instructions+=1;goto B7012a3;
case 0x7012a5:goto L7012a5;
case 0x7012a7:goto L7012a7;
case 0x7012a9:c.instructions+=1;goto B7012a9;
case 0x7012ab:goto L7012ab;
case 0x7012ad:goto L7012ad;
case 0x7012b0:c.instructions+=1;goto B7012b0;
case 0x7012b5:goto L7012b5;
case 0x7012ba:c.instructions+=1;goto B7012ba;
case 0x7012bc:goto L7012bc;
case 0x7012bf:c.instructions+=2;goto B7012bf;
case 0x7012c1:c.instructions+=1;goto B7012c1;
case 0x7012c6:goto L7012c6;
case 0x7012c9:c.instructions+=3;goto B7012c9;
case 0x7012ca:c.instructions+=2;goto B7012ca;
case 0x7012cc:c.instructions+=1;goto B7012cc;
case 0x7012d1:goto L7012d1;
case 0x7012d2:c.instructions+=1;goto B7012d2;
case 0x7012d4:goto L7012d4;
case 0x7012d8:c.instructions+=1;goto B7012d8;
case 0x7012da:goto L7012da;
case 0x7012dd:c.instructions+=2;goto B7012dd;
case 0x7012df:c.instructions+=1;goto B7012df;
case 0x7012e4:goto L7012e4;
case 0x7012e7:c.instructions+=3;goto B7012e7;
case 0x7012e9:c.instructions+=2;goto B7012e9;
case 0x7012eb:c.instructions+=1;goto B7012eb;
case 0x7012f0:goto L7012f0;
case 0x7012f2:c.instructions+=1;goto B7012f2;
case 0x7012f4:goto L7012f4;
case 0x7012f7:c.instructions+=2;goto B7012f7;
case 0x7012f9:c.instructions+=1;goto B7012f9;
case 0x7012fb:goto L7012fb;
case 0x7012fd:c.instructions+=3;goto B7012fd;
case 0x7012fe:c.instructions+=2;goto B7012fe;
case 0x701300:c.instructions+=1;goto B701300;
case 0x701303:goto L701303;
case 0x701307:goto L701307;
case 0x701309:goto L701309;
case 0x70130a:c.instructions+=3;goto B70130a;
case 0x70130b:c.instructions+=2;goto B70130b;
case 0x70130c:c.instructions+=1;goto B70130c;
case 0x70130f:goto L70130f;
case 0x701311:c.instructions+=1;goto B701311;
case 0x701316:goto L701316;
case 0x701318:c.instructions+=2;goto B701318;
case 0x701319:c.instructions+=1;goto B701319;
case 0x70131b:goto L70131b;
case 0x70131d:c.instructions+=1;goto B70131d;
case 0x701322:goto L701322;
case 0x701324:c.instructions+=1;goto B701324;
case 0x701325:goto L701325;
case 0x701326:c.instructions+=4;goto B701326;
case 0x701328:c.instructions+=3;goto B701328;
case 0x701329:c.instructions+=2;goto B701329;
case 0x70132b:c.instructions+=1;goto B70132b;
case 0x701330:goto L701330;
case 0x701334:c.instructions+=1;goto B701334;
case 0x701336:goto L701336;
case 0x701337:c.instructions+=1;goto B701337;
case 0x70133d:goto L70133d;
case 0x70133e:goto L70133e;
case 0x701340:c.instructions+=3;goto B701340;
case 0x701341:c.instructions+=2;goto B701341;
case 0x701342:c.instructions+=1;goto B701342;
case 0x701345:goto L701345;
case 0x701346:c.instructions+=5;goto B701346;
case 0x701348:c.instructions+=4;goto B701348;
case 0x701349:c.instructions+=3;goto B701349;
case 0x70134b:c.instructions+=2;goto B70134b;
case 0x70134d:c.instructions+=1;goto B70134d;
case 0x701352:goto L701352;
case 0x701354:c.instructions+=2;goto B701354;
case 0x701355:c.instructions+=1;goto B701355;
case 0x701357:goto L701357;
case 0x70135a:c.instructions+=3;goto B70135a;
case 0x70135c:c.instructions+=2;goto B70135c;
case 0x70135f:c.instructions+=1;goto B70135f;
case 0x701364:goto L701364;
case 0x701366:goto L701366;
case 0x701368:goto L701368;
case 0x70136b:c.instructions+=12;goto B70136b;
case 0x70136d:c.instructions+=11;goto B70136d;
case 0x70136f:c.instructions+=10;goto B70136f;
case 0x701371:c.instructions+=9;goto B701371;
case 0x701374:c.instructions+=8;goto B701374;
case 0x701376:c.instructions+=7;goto B701376;
case 0x701378:c.instructions+=6;goto B701378;
case 0x70137b:c.instructions+=5;goto B70137b;
case 0x70137e:c.instructions+=4;goto B70137e;
case 0x701380:c.instructions+=3;goto B701380;
case 0x701381:c.instructions+=2;goto B701381;
case 0x701382:c.instructions+=1;goto B701382;
case 0x701385:goto L701385;
case 0x701386:c.instructions+=4;goto B701386;
case 0x701388:c.instructions+=3;goto B701388;
case 0x701389:c.instructions+=2;goto B701389;
case 0x70138b:c.instructions+=1;goto B70138b;
case 0x701390:goto L701390;
case 0x701394:c.instructions+=1;goto B701394;
case 0x701396:goto L701396;
case 0x701397:c.instructions+=1;goto B701397;
case 0x70139d:goto L70139d;
case 0x70139e:goto L70139e;
case 0x7013a0:c.instructions+=3;goto B7013a0;
case 0x7013a1:c.instructions+=2;goto B7013a1;
case 0x7013a2:c.instructions+=1;goto B7013a2;
case 0x7013a5:goto L7013a5;
case 0x7013a6:c.instructions+=5;goto B7013a6;
case 0x7013a8:c.instructions+=4;goto B7013a8;
case 0x7013af:c.instructions+=3;goto B7013af;
case 0x7013b2:c.instructions+=2;goto B7013b2;
case 0x7013b3:c.instructions+=1;goto B7013b3;
case 0x7013b4:goto L7013b4;
case 0x7013b5:c.instructions+=3;goto B7013b5;
case 0x7013b7:c.instructions+=2;goto B7013b7;
case 0x7013be:c.instructions+=1;goto B7013be;
case 0x7013c0:goto L7013c0;
case 0x7013c7:c.instructions+=1;goto B7013c7;
case 0x7013c9:goto L7013c9;
case 0x7013cb:c.instructions+=2;goto B7013cb;
case 0x7013cc:c.instructions+=1;goto B7013cc;
case 0x7013cd:goto L7013cd;
case 0x7013cf:c.instructions+=2;goto B7013cf;
case 0x7013d0:c.instructions+=1;goto B7013d0;
case 0x7013d1:goto L7013d1;
case 0x7013d2:c.instructions+=2;goto B7013d2;
case 0x7013d4:c.instructions+=1;goto B7013d4;
case 0x7013d6:goto L7013d6;
case 0x7013dc:c.instructions+=2;goto B7013dc;
case 0x7013df:c.instructions+=1;goto B7013df;
case 0x7013e1:goto L7013e1;
case 0x7013e4:c.instructions+=2;goto B7013e4;
case 0x7013e7:c.instructions+=1;goto B7013e7;
case 0x7013e9:goto L7013e9;
case 0x7013eb:c.instructions+=2;goto B7013eb;
case 0x7013ec:c.instructions+=1;goto B7013ec;
case 0x7013ed:goto L7013ed;
case 0x7013ef:c.instructions+=2;goto B7013ef;
case 0x7013f0:c.instructions+=1;goto B7013f0;
case 0x7013f1:goto L7013f1;
case 0x7013f2:c.instructions+=8;goto B7013f2;
case 0x7013f4:c.instructions+=7;goto B7013f4;
case 0x7013f7:c.instructions+=6;goto B7013f7;
case 0x7013fa:c.instructions+=5;goto B7013fa;
case 0x7013fd:c.instructions+=4;goto B7013fd;
case 0x701400:c.instructions+=3;goto B701400;
case 0x701402:c.instructions+=2;goto B701402;
case 0x701403:c.instructions+=1;goto B701403;
case 0x701404:goto L701404;
case 0x701405:c.instructions+=4;goto B701405;
case 0x701407:c.instructions+=3;goto B701407;
case 0x701408:c.instructions+=2;goto B701408;
case 0x701409:c.instructions+=1;goto B701409;
case 0x70140e:goto L70140e;
case 0x701411:c.instructions+=2;goto B701411;
case 0x701413:c.instructions+=1;goto B701413;
case 0x701415:goto L701415;
case 0x701417:c.instructions+=1;goto B701417;
case 0x701419:goto L701419;
case 0x70141c:c.instructions+=1;goto B70141c;
case 0x70141e:goto L70141e;
case 0x701420:goto L701420;
case 0x701421:goto L701421;
case 0x701423:c.instructions+=6;goto B701423;
case 0x701425:c.instructions+=5;goto B701425;
case 0x70142b:c.instructions+=4;goto B70142b;
case 0x70142c:c.instructions+=3;goto B70142c;
case 0x701432:c.instructions+=2;goto B701432;
case 0x701438:c.instructions+=1;goto B701438;
case 0x70143a:goto L70143a;
case 0x70143b:c.instructions+=9;goto B70143b;
case 0x70143c:c.instructions+=8;goto B70143c;
case 0x70143d:c.instructions+=7;goto B70143d;
case 0x70143f:c.instructions+=6;goto B70143f;
case 0x701440:c.instructions+=5;goto B701440;
case 0x701442:c.instructions+=4;goto B701442;
case 0x701443:c.instructions+=3;goto B701443;
case 0x701445:c.instructions+=2;goto B701445;
case 0x70144f:c.instructions+=1;goto B70144f;
case 0x701454:goto L701454;
case 0x701456:goto L701456;
case 0x701457:c.instructions+=3;goto B701457;
case 0x701459:c.instructions+=2;goto B701459;
case 0x70145a:c.instructions+=1;goto B70145a;
case 0x70145f:goto L70145f;
case 0x701461:goto L701461;
case 0x701463:c.instructions+=3;goto B701463;
case 0x701464:c.instructions+=2;goto B701464;
case 0x701469:c.instructions+=1;goto B701469;
case 0x70146e:goto L70146e;
case 0x701470:goto L701470;
case 0x701475:c.instructions+=3;goto B701475;
case 0x701478:c.instructions+=2;goto B701478;
case 0x70147d:c.instructions+=1;goto B70147d;
case 0x70147f:goto L70147f;
case 0x701482:goto L701482;
case 0x701485:c.instructions+=6;goto B701485;
case 0x701487:c.instructions+=5;goto B701487;
case 0x70148a:c.instructions+=4;goto B70148a;
case 0x70148c:c.instructions+=3;goto B70148c;
case 0x70148d:c.instructions+=2;goto B70148d;
case 0x70148f:c.instructions+=1;goto B70148f;
case 0x701491:goto L701491;
case 0x701494:c.instructions+=13;goto B701494;
case 0x701497:c.instructions+=12;goto B701497;
case 0x701499:c.instructions+=11;goto B701499;
case 0x70149b:c.instructions+=10;goto B70149b;
case 0x70149d:c.instructions+=9;goto B70149d;
case 0x70149e:c.instructions+=8;goto B70149e;
case 0x7014a0:c.instructions+=7;goto B7014a0;
case 0x7014a3:c.instructions+=6;goto B7014a3;
case 0x7014a5:c.instructions+=5;goto B7014a5;
case 0x7014a7:c.instructions+=4;goto B7014a7;
case 0x7014aa:c.instructions+=3;goto B7014aa;
case 0x7014ac:c.instructions+=2;goto B7014ac;
case 0x7014ae:c.instructions+=1;goto B7014ae;
case 0x7014b0:goto L7014b0;
case 0x7014b3:c.instructions+=2;goto B7014b3;
case 0x7014ba:c.instructions+=1;goto B7014ba;
case 0x7014bc:goto L7014bc;
case 0x7014bf:c.instructions+=14;goto B7014bf;
case 0x7014c2:c.instructions+=13;goto B7014c2;
case 0x7014c4:c.instructions+=12;goto B7014c4;
case 0x7014c6:c.instructions+=11;goto B7014c6;
case 0x7014c8:c.instructions+=10;goto B7014c8;
case 0x7014c9:c.instructions+=9;goto B7014c9;
case 0x7014cb:c.instructions+=8;goto B7014cb;
case 0x7014ce:c.instructions+=7;goto B7014ce;
case 0x7014d0:c.instructions+=6;goto B7014d0;
case 0x7014d2:c.instructions+=5;goto B7014d2;
case 0x7014d5:c.instructions+=4;goto B7014d5;
case 0x7014d8:c.instructions+=3;goto B7014d8;
case 0x7014da:c.instructions+=2;goto B7014da;
case 0x7014dc:c.instructions+=1;goto B7014dc;
case 0x7014de:goto L7014de;
case 0x7014e1:c.instructions+=1;goto B7014e1;
case 0x7014e8:goto L7014e8;
case 0x7014ea:c.instructions+=1;goto B7014ea;
case 0x7014ec:goto L7014ec;
case 0x7014ee:goto L7014ee;
case 0x7014f2:c.instructions+=2;goto B7014f2;
case 0x7014f9:c.instructions+=1;goto B7014f9;
case 0x7014fb:goto L7014fb;
case 0x701500:c.instructions+=2;goto B701500;
case 0x701503:c.instructions+=1;goto B701503;
case 0x701505:goto L701505;
case 0x701508:goto L701508;
case 0x70150b:c.instructions+=7;goto B70150b;
case 0x70150d:c.instructions+=6;goto B70150d;
case 0x701510:c.instructions+=5;goto B701510;
case 0x701512:c.instructions+=4;goto B701512;
case 0x701515:c.instructions+=3;goto B701515;
case 0x701516:c.instructions+=2;goto B701516;
case 0x701518:c.instructions+=1;goto B701518;
case 0x70151a:goto L70151a;
case 0x70151d:c.instructions+=14;goto B70151d;
case 0x701520:c.instructions+=13;goto B701520;
case 0x701522:c.instructions+=12;goto B701522;
case 0x701524:c.instructions+=11;goto B701524;
case 0x701526:c.instructions+=10;goto B701526;
case 0x701527:c.instructions+=9;goto B701527;
case 0x701529:c.instructions+=8;goto B701529;
case 0x70152c:c.instructions+=7;goto B70152c;
case 0x70152e:c.instructions+=6;goto B70152e;
case 0x701530:c.instructions+=5;goto B701530;
case 0x701533:c.instructions+=4;goto B701533;
case 0x701536:c.instructions+=3;goto B701536;
case 0x701538:c.instructions+=2;goto B701538;
case 0x70153a:c.instructions+=1;goto B70153a;
case 0x70153c:goto L70153c;
case 0x70153f:c.instructions+=2;goto B70153f;
case 0x701546:c.instructions+=1;goto B701546;
case 0x701548:goto L701548;
case 0x70154b:c.instructions+=14;goto B70154b;
case 0x70154e:c.instructions+=13;goto B70154e;
case 0x701550:c.instructions+=12;goto B701550;
case 0x701552:c.instructions+=11;goto B701552;
case 0x701554:c.instructions+=10;goto B701554;
case 0x701555:c.instructions+=9;goto B701555;
case 0x701557:c.instructions+=8;goto B701557;
case 0x70155a:c.instructions+=7;goto B70155a;
case 0x70155c:c.instructions+=6;goto B70155c;
case 0x70155e:c.instructions+=5;goto B70155e;
case 0x701561:c.instructions+=4;goto B701561;
case 0x701564:c.instructions+=3;goto B701564;
case 0x701566:c.instructions+=2;goto B701566;
case 0x701568:c.instructions+=1;goto B701568;
case 0x70156a:goto L70156a;
case 0x70156d:c.instructions+=1;goto B70156d;
case 0x701574:goto L701574;
case 0x701576:goto L701576;
case 0x701578:goto L701578;
case 0x70157c:c.instructions+=2;goto B70157c;
case 0x701583:c.instructions+=1;goto B701583;
case 0x701585:goto L701585;
case 0x701586:c.instructions+=3;goto B701586;
case 0x701587:c.instructions+=2;goto B701587;
case 0x70158c:c.instructions+=1;goto B70158c;
case 0x70158d:goto L70158d;
case 0x701593:c.instructions+=3;goto B701593;
case 0x701596:c.instructions+=2;goto B701596;
case 0x70159b:c.instructions+=1;goto B70159b;
case 0x70159d:goto L70159d;
case 0x7015a2:c.instructions+=1;goto B7015a2;
case 0x7015a7:goto L7015a7;
case 0x7015ad:c.instructions+=9;goto B7015ad;
case 0x7015b0:c.instructions+=8;goto B7015b0;
case 0x7015b3:c.instructions+=7;goto B7015b3;
case 0x7015b5:c.instructions+=6;goto B7015b5;
case 0x7015b8:c.instructions+=5;goto B7015b8;
case 0x7015ba:c.instructions+=4;goto B7015ba;
case 0x7015c0:c.instructions+=3;goto B7015c0;
case 0x7015c3:c.instructions+=2;goto B7015c3;
case 0x7015c5:c.instructions+=1;goto B7015c5;
case 0x7015c7:goto L7015c7;
case 0x7015d1:c.instructions+=2;goto B7015d1;
case 0x7015d2:c.instructions+=1;goto B7015d2;
case 0x7015d3:goto L7015d3;
case 0x7015d9:c.instructions+=3;goto B7015d9;
case 0x7015df:c.instructions+=2;goto B7015df;
case 0x7015e6:c.instructions+=1;goto B7015e6;
case 0x7015e8:goto L7015e8;
case 0x7015ed:c.instructions+=8;goto B7015ed;
case 0x7015f0:c.instructions+=7;goto B7015f0;
case 0x7015f2:c.instructions+=6;goto B7015f2;
case 0x7015f3:c.instructions+=5;goto B7015f3;
case 0x7015f9:c.instructions+=4;goto B7015f9;
case 0x701600:c.instructions+=3;goto B701600;
case 0x701602:c.instructions+=2;goto B701602;
case 0x701608:c.instructions+=1;goto B701608;
case 0x70160f:goto L70160f;
case 0x701610:goto L701610;
case 0x701615:c.instructions+=5;goto B701615;
case 0x701618:c.instructions+=4;goto B701618;
case 0x70161f:c.instructions+=3;goto B70161f;
case 0x701621:c.instructions+=2;goto B701621;
case 0x701627:c.instructions+=1;goto B701627;
case 0x70162c:goto L70162c;
case 0x70162e:c.instructions+=2;goto B70162e;
case 0x701631:c.instructions+=1;goto B701631;
case 0x701632:goto L701632;
case 0x701634:c.instructions+=3;goto B701634;
case 0x701635:c.instructions+=2;goto B701635;
case 0x701638:c.instructions+=1;goto B701638;
case 0x701639:goto L701639;
case 0x70163f:c.instructions+=18;goto B70163f;
case 0x701641:c.instructions+=17;goto B701641;
case 0x701647:c.instructions+=16;goto B701647;
case 0x70164a:c.instructions+=15;goto B70164a;
case 0x701650:c.instructions+=14;goto B701650;
case 0x701653:c.instructions+=13;goto B701653;
case 0x701659:c.instructions+=12;goto B701659;
case 0x70165c:c.instructions+=11;goto B70165c;
case 0x701662:c.instructions+=10;goto B701662;
case 0x701665:c.instructions+=9;goto B701665;
case 0x70166b:c.instructions+=8;goto B70166b;
case 0x70166e:c.instructions+=7;goto B70166e;
case 0x701674:c.instructions+=6;goto B701674;
case 0x701677:c.instructions+=5;goto B701677;
case 0x70167d:c.instructions+=4;goto B70167d;
case 0x701680:c.instructions+=3;goto B701680;
case 0x701682:c.instructions+=2;goto B701682;
case 0x701683:c.instructions+=1;goto B701683;
case 0x701685:goto L701685;
case 0x701686:c.instructions+=1;goto B701686;
case 0x701687:goto L701687;
case 0x701688:c.instructions+=5;goto B701688;
case 0x70168a:c.instructions+=4;goto B70168a;
case 0x70168b:c.instructions+=3;goto B70168b;
case 0x70168c:c.instructions+=2;goto B70168c;
case 0x70168e:c.instructions+=1;goto B70168e;
case 0x70168f:goto L70168f;
case 0x701692:c.instructions+=35;goto B701692;
case 0x701694:c.instructions+=34;goto B701694;
case 0x701697:c.instructions+=33;goto B701697;
case 0x701699:c.instructions+=32;goto B701699;
case 0x70169d:c.instructions+=31;goto B70169d;
case 0x70169f:c.instructions+=30;goto B70169f;
case 0x7016a2:c.instructions+=29;goto B7016a2;
case 0x7016a5:c.instructions+=28;goto B7016a5;
case 0x7016a9:c.instructions+=27;goto B7016a9;
case 0x7016ab:c.instructions+=26;goto B7016ab;
case 0x7016ae:c.instructions+=25;goto B7016ae;
case 0x7016b1:c.instructions+=24;goto B7016b1;
case 0x7016b5:c.instructions+=23;goto B7016b5;
case 0x7016b7:c.instructions+=22;goto B7016b7;
case 0x7016ba:c.instructions+=21;goto B7016ba;
case 0x7016bd:c.instructions+=20;goto B7016bd;
case 0x7016c1:c.instructions+=19;goto B7016c1;
case 0x7016c3:c.instructions+=18;goto B7016c3;
case 0x7016c6:c.instructions+=17;goto B7016c6;
case 0x7016c9:c.instructions+=16;goto B7016c9;
case 0x7016cd:c.instructions+=15;goto B7016cd;
case 0x7016cf:c.instructions+=14;goto B7016cf;
case 0x7016d2:c.instructions+=13;goto B7016d2;
case 0x7016d5:c.instructions+=12;goto B7016d5;
case 0x7016d9:c.instructions+=11;goto B7016d9;
case 0x7016db:c.instructions+=10;goto B7016db;
case 0x7016de:c.instructions+=9;goto B7016de;
case 0x7016e1:c.instructions+=8;goto B7016e1;
case 0x7016e5:c.instructions+=7;goto B7016e5;
case 0x7016e8:c.instructions+=6;goto B7016e8;
case 0x7016ea:c.instructions+=5;goto B7016ea;
case 0x7016ed:c.instructions+=4;goto B7016ed;
case 0x7016f0:c.instructions+=3;goto B7016f0;
case 0x7016f3:c.instructions+=2;goto B7016f3;
case 0x7016f4:c.instructions+=1;goto B7016f4;
case 0x7016f6:goto L7016f6;
case 0x7016f7:c.instructions+=3;goto B7016f7;
case 0x7016f8:c.instructions+=2;goto B7016f8;
case 0x7016f9:c.instructions+=1;goto B7016f9;
case 0x7016fa:goto L7016fa;
case 0x7016fb:c.instructions+=5;goto B7016fb;
case 0x7016fd:c.instructions+=4;goto B7016fd;
case 0x7016fe:c.instructions+=3;goto B7016fe;
case 0x7016ff:c.instructions+=2;goto B7016ff;
case 0x701701:c.instructions+=1;goto B701701;
case 0x701702:goto L701702;
case 0x701705:c.instructions+=35;goto B701705;
case 0x701707:c.instructions+=34;goto B701707;
case 0x70170a:c.instructions+=33;goto B70170a;
case 0x70170c:c.instructions+=32;goto B70170c;
case 0x701710:c.instructions+=31;goto B701710;
case 0x701712:c.instructions+=30;goto B701712;
case 0x701715:c.instructions+=29;goto B701715;
case 0x701718:c.instructions+=28;goto B701718;
case 0x70171c:c.instructions+=27;goto B70171c;
case 0x70171e:c.instructions+=26;goto B70171e;
case 0x701721:c.instructions+=25;goto B701721;
case 0x701724:c.instructions+=24;goto B701724;
case 0x701728:c.instructions+=23;goto B701728;
case 0x70172a:c.instructions+=22;goto B70172a;
case 0x70172d:c.instructions+=21;goto B70172d;
case 0x701730:c.instructions+=20;goto B701730;
case 0x701734:c.instructions+=19;goto B701734;
case 0x701736:c.instructions+=18;goto B701736;
case 0x701739:c.instructions+=17;goto B701739;
case 0x70173c:c.instructions+=16;goto B70173c;
case 0x701740:c.instructions+=15;goto B701740;
case 0x701742:c.instructions+=14;goto B701742;
case 0x701745:c.instructions+=13;goto B701745;
case 0x701748:c.instructions+=12;goto B701748;
case 0x70174c:c.instructions+=11;goto B70174c;
case 0x70174e:c.instructions+=10;goto B70174e;
case 0x701751:c.instructions+=9;goto B701751;
case 0x701754:c.instructions+=8;goto B701754;
case 0x701758:c.instructions+=7;goto B701758;
case 0x70175b:c.instructions+=6;goto B70175b;
case 0x70175d:c.instructions+=5;goto B70175d;
case 0x701760:c.instructions+=4;goto B701760;
case 0x701763:c.instructions+=3;goto B701763;
case 0x701766:c.instructions+=2;goto B701766;
case 0x701767:c.instructions+=1;goto B701767;
case 0x701769:goto L701769;
case 0x70176a:c.instructions+=3;goto B70176a;
case 0x70176b:c.instructions+=2;goto B70176b;
case 0x70176c:c.instructions+=1;goto B70176c;
case 0x70176d:goto L70176d;
case 0x70176e:c.instructions+=7;goto B70176e;
case 0x701770:c.instructions+=6;goto B701770;
case 0x701771:c.instructions+=5;goto B701771;
case 0x701772:c.instructions+=4;goto B701772;
case 0x701774:c.instructions+=3;goto B701774;
case 0x701776:c.instructions+=2;goto B701776;
case 0x701777:c.instructions+=1;goto B701777;
case 0x70177c:goto L70177c;
case 0x70177e:c.instructions+=83;goto B70177e;
case 0x701782:c.instructions+=82;goto B701782;
case 0x701784:c.instructions+=81;goto B701784;
case 0x70178a:c.instructions+=80;goto B70178a;
case 0x70178c:c.instructions+=79;goto B70178c;
case 0x70178e:c.instructions+=78;goto B70178e;
case 0x701792:c.instructions+=77;goto B701792;
case 0x701794:c.instructions+=76;goto B701794;
case 0x70179a:c.instructions+=75;goto B70179a;
case 0x70179d:c.instructions+=74;goto B70179d;
case 0x70179f:c.instructions+=73;goto B70179f;
case 0x7017a3:c.instructions+=72;goto B7017a3;
case 0x7017a5:c.instructions+=71;goto B7017a5;
case 0x7017ab:c.instructions+=70;goto B7017ab;
case 0x7017ae:c.instructions+=69;goto B7017ae;
case 0x7017b0:c.instructions+=68;goto B7017b0;
case 0x7017b4:c.instructions+=67;goto B7017b4;
case 0x7017b6:c.instructions+=66;goto B7017b6;
case 0x7017bc:c.instructions+=65;goto B7017bc;
case 0x7017bf:c.instructions+=64;goto B7017bf;
case 0x7017c1:c.instructions+=63;goto B7017c1;
case 0x7017c5:c.instructions+=62;goto B7017c5;
case 0x7017c7:c.instructions+=61;goto B7017c7;
case 0x7017cd:c.instructions+=60;goto B7017cd;
case 0x7017d0:c.instructions+=59;goto B7017d0;
case 0x7017d2:c.instructions+=58;goto B7017d2;
case 0x7017d6:c.instructions+=57;goto B7017d6;
case 0x7017d8:c.instructions+=56;goto B7017d8;
case 0x7017de:c.instructions+=55;goto B7017de;
case 0x7017e1:c.instructions+=54;goto B7017e1;
case 0x7017e3:c.instructions+=53;goto B7017e3;
case 0x7017e7:c.instructions+=52;goto B7017e7;
case 0x7017e9:c.instructions+=51;goto B7017e9;
case 0x7017ef:c.instructions+=50;goto B7017ef;
case 0x7017f2:c.instructions+=49;goto B7017f2;
case 0x7017f4:c.instructions+=48;goto B7017f4;
case 0x7017f8:c.instructions+=47;goto B7017f8;
case 0x7017fa:c.instructions+=46;goto B7017fa;
case 0x701800:c.instructions+=45;goto B701800;
case 0x701803:c.instructions+=44;goto B701803;
case 0x701805:c.instructions+=43;goto B701805;
case 0x701809:c.instructions+=42;goto B701809;
case 0x70180b:c.instructions+=41;goto B70180b;
case 0x701811:c.instructions+=40;goto B701811;
case 0x701814:c.instructions+=39;goto B701814;
case 0x701816:c.instructions+=38;goto B701816;
case 0x70181a:c.instructions+=37;goto B70181a;
case 0x70181c:c.instructions+=36;goto B70181c;
case 0x701822:c.instructions+=35;goto B701822;
case 0x701825:c.instructions+=34;goto B701825;
case 0x701827:c.instructions+=33;goto B701827;
case 0x70182b:c.instructions+=32;goto B70182b;
case 0x70182d:c.instructions+=31;goto B70182d;
case 0x701833:c.instructions+=30;goto B701833;
case 0x701836:c.instructions+=29;goto B701836;
case 0x701838:c.instructions+=28;goto B701838;
case 0x70183c:c.instructions+=27;goto B70183c;
case 0x70183e:c.instructions+=26;goto B70183e;
case 0x701844:c.instructions+=25;goto B701844;
case 0x701847:c.instructions+=24;goto B701847;
case 0x701849:c.instructions+=23;goto B701849;
case 0x70184d:c.instructions+=22;goto B70184d;
case 0x70184f:c.instructions+=21;goto B70184f;
case 0x701855:c.instructions+=20;goto B701855;
case 0x701858:c.instructions+=19;goto B701858;
case 0x70185a:c.instructions+=18;goto B70185a;
case 0x70185e:c.instructions+=17;goto B70185e;
case 0x701860:c.instructions+=16;goto B701860;
case 0x701866:c.instructions+=15;goto B701866;
case 0x701869:c.instructions+=14;goto B701869;
case 0x70186b:c.instructions+=13;goto B70186b;
case 0x70186f:c.instructions+=12;goto B70186f;
case 0x701871:c.instructions+=11;goto B701871;
case 0x701877:c.instructions+=10;goto B701877;
case 0x70187a:c.instructions+=9;goto B70187a;
case 0x70187c:c.instructions+=8;goto B70187c;
case 0x701880:c.instructions+=7;goto B701880;
case 0x701882:c.instructions+=6;goto B701882;
case 0x701888:c.instructions+=5;goto B701888;
case 0x70188b:c.instructions+=4;goto B70188b;
case 0x70188e:c.instructions+=3;goto B70188e;
case 0x701891:c.instructions+=2;goto B701891;
case 0x701892:c.instructions+=1;goto B701892;
case 0x701898:goto L701898;
case 0x701899:c.instructions+=3;goto B701899;
case 0x70189a:c.instructions+=2;goto B70189a;
case 0x70189b:c.instructions+=1;goto B70189b;
case 0x70189c:goto L70189c;
case 0x70189d:c.instructions+=7;goto B70189d;
case 0x70189f:c.instructions+=6;goto B70189f;
case 0x7018a0:c.instructions+=5;goto B7018a0;
case 0x7018a1:c.instructions+=4;goto B7018a1;
case 0x7018a3:c.instructions+=3;goto B7018a3;
case 0x7018a5:c.instructions+=2;goto B7018a5;
case 0x7018a6:c.instructions+=1;goto B7018a6;
case 0x7018ab:goto L7018ab;
case 0x7018ad:c.instructions+=43;goto B7018ad;
case 0x7018b1:c.instructions+=42;goto B7018b1;
case 0x7018b4:c.instructions+=41;goto B7018b4;
case 0x7018b6:c.instructions+=40;goto B7018b6;
case 0x7018bc:c.instructions+=39;goto B7018bc;
case 0x7018be:c.instructions+=38;goto B7018be;
case 0x7018c0:c.instructions+=37;goto B7018c0;
case 0x7018c4:c.instructions+=36;goto B7018c4;
case 0x7018c6:c.instructions+=35;goto B7018c6;
case 0x7018cc:c.instructions+=34;goto B7018cc;
case 0x7018cf:c.instructions+=33;goto B7018cf;
case 0x7018d1:c.instructions+=32;goto B7018d1;
case 0x7018d5:c.instructions+=31;goto B7018d5;
case 0x7018d7:c.instructions+=30;goto B7018d7;
case 0x7018dd:c.instructions+=29;goto B7018dd;
case 0x7018e0:c.instructions+=28;goto B7018e0;
case 0x7018e2:c.instructions+=27;goto B7018e2;
case 0x7018e6:c.instructions+=26;goto B7018e6;
case 0x7018e8:c.instructions+=25;goto B7018e8;
case 0x7018ee:c.instructions+=24;goto B7018ee;
case 0x7018f1:c.instructions+=23;goto B7018f1;
case 0x7018f3:c.instructions+=22;goto B7018f3;
case 0x7018f7:c.instructions+=21;goto B7018f7;
case 0x7018f9:c.instructions+=20;goto B7018f9;
case 0x7018ff:c.instructions+=19;goto B7018ff;
case 0x701902:c.instructions+=18;goto B701902;
case 0x701904:c.instructions+=17;goto B701904;
case 0x701908:c.instructions+=16;goto B701908;
case 0x70190a:c.instructions+=15;goto B70190a;
case 0x701910:c.instructions+=14;goto B701910;
case 0x701913:c.instructions+=13;goto B701913;
case 0x701915:c.instructions+=12;goto B701915;
case 0x701919:c.instructions+=11;goto B701919;
case 0x70191b:c.instructions+=10;goto B70191b;
case 0x701921:c.instructions+=9;goto B701921;
case 0x701924:c.instructions+=8;goto B701924;
case 0x701926:c.instructions+=7;goto B701926;
case 0x70192a:c.instructions+=6;goto B70192a;
case 0x70192c:c.instructions+=5;goto B70192c;
case 0x701932:c.instructions+=4;goto B701932;
case 0x701935:c.instructions+=3;goto B701935;
case 0x701938:c.instructions+=2;goto B701938;
case 0x701939:c.instructions+=1;goto B701939;
case 0x70193f:goto L70193f;
case 0x701940:c.instructions+=3;goto B701940;
case 0x701941:c.instructions+=2;goto B701941;
case 0x701942:c.instructions+=1;goto B701942;
case 0x701943:goto L701943;
case 0x701944:c.instructions+=3;goto B701944;
case 0x701946:c.instructions+=2;goto B701946;
case 0x70194d:c.instructions+=1;goto B70194d;
case 0x70194f:goto L70194f;
case 0x701954:goto L701954;
case 0x701957:c.instructions+=18;goto B701957;
case 0x70195a:c.instructions+=17;goto B70195a;
case 0x70195e:c.instructions+=16;goto B70195e;
case 0x701961:c.instructions+=15;goto B701961;
case 0x701964:c.instructions+=14;goto B701964;
case 0x701969:c.instructions+=13;goto B701969;
case 0x70196c:c.instructions+=12;goto B70196c;
case 0x70196e:c.instructions+=11;goto B70196e;
case 0x701974:c.instructions+=10;goto B701974;
case 0x70197e:c.instructions+=9;goto B70197e;
case 0x701983:c.instructions+=8;goto B701983;
case 0x70198a:c.instructions+=7;goto B70198a;
case 0x70198d:c.instructions+=6;goto B70198d;
case 0x701993:c.instructions+=5;goto B701993;
case 0x701996:c.instructions+=4;goto B701996;
case 0x701999:c.instructions+=3;goto B701999;
case 0x70199b:c.instructions+=2;goto B70199b;
case 0x7019a0:c.instructions+=1;goto B7019a0;
case 0x7019a2:goto L7019a2;
case 0x7019a8:c.instructions+=14;goto B7019a8;
case 0x7019ab:c.instructions+=13;goto B7019ab;
case 0x7019b1:c.instructions+=12;goto B7019b1;
case 0x7019b5:c.instructions+=11;goto B7019b5;
case 0x7019b8:c.instructions+=10;goto B7019b8;
case 0x7019bb:c.instructions+=9;goto B7019bb;
case 0x7019be:c.instructions+=8;goto B7019be;
case 0x7019c1:c.instructions+=7;goto B7019c1;
case 0x7019c4:c.instructions+=6;goto B7019c4;
case 0x7019c7:c.instructions+=5;goto B7019c7;
case 0x7019c9:c.instructions+=4;goto B7019c9;
case 0x7019cf:c.instructions+=3;goto B7019cf;
case 0x7019d2:c.instructions+=2;goto B7019d2;
case 0x7019d8:c.instructions+=1;goto B7019d8;
case 0x7019da:goto L7019da;
case 0x7019db:c.instructions+=1;goto B7019db;
case 0x7019dc:goto L7019dc;
case 0x7019dd:c.instructions+=12;goto B7019dd;
case 0x7019df:c.instructions+=11;goto B7019df;
case 0x7019e0:c.instructions+=10;goto B7019e0;
case 0x7019e1:c.instructions+=9;goto B7019e1;
case 0x7019e2:c.instructions+=8;goto B7019e2;
case 0x7019e5:c.instructions+=7;goto B7019e5;
case 0x7019e7:c.instructions+=6;goto B7019e7;
case 0x7019e9:c.instructions+=5;goto B7019e9;
case 0x7019eb:c.instructions+=4;goto B7019eb;
case 0x7019f1:c.instructions+=3;goto B7019f1;
case 0x7019f2:c.instructions+=2;goto B7019f2;
case 0x7019f5:c.instructions+=1;goto B7019f5;
case 0x7019f7:goto L7019f7;
case 0x7019fa:goto L7019fa;
case 0x7019fd:c.instructions+=1;goto B7019fd;
case 0x7019ff:goto L7019ff;
case 0x701a04:c.instructions+=2;goto B701a04;
case 0x701a09:c.instructions+=1;goto B701a09;
case 0x701a0b:goto L701a0b;
case 0x701a0e:c.instructions+=3;goto B701a0e;
case 0x701a10:c.instructions+=2;goto B701a10;
case 0x701a11:c.instructions+=1;goto B701a11;
case 0x701a16:goto L701a16;
case 0x701a18:goto L701a18;
case 0x701a1a:c.instructions+=1;goto B701a1a;
case 0x701a1c:goto L701a1c;
case 0x701a1e:c.instructions+=3;goto B701a1e;
case 0x701a25:c.instructions+=2;goto B701a25;
case 0x701a26:c.instructions+=1;goto B701a26;
case 0x701a28:goto L701a28;
case 0x701a2f:c.instructions+=3;goto B701a2f;
case 0x701a31:c.instructions+=2;goto B701a31;
case 0x701a34:c.instructions+=1;goto B701a34;
case 0x701a35:goto L701a35;
case 0x701a3a:goto L701a3a;
case 0x701a3f:goto L701a3f;
case 0x701a41:c.instructions+=1;goto B701a41;
case 0x701a46:goto L701a46;
case 0x701a49:c.instructions+=11;goto B701a49;
case 0x701a4b:c.instructions+=10;goto B701a4b;
case 0x701a4f:c.instructions+=9;goto B701a4f;
case 0x701a51:c.instructions+=8;goto B701a51;
case 0x701a55:c.instructions+=7;goto B701a55;
case 0x701a57:c.instructions+=6;goto B701a57;
case 0x701a59:c.instructions+=5;goto B701a59;
case 0x701a5b:c.instructions+=4;goto B701a5b;
case 0x701a5e:c.instructions+=3;goto B701a5e;
case 0x701a61:c.instructions+=2;goto B701a61;
case 0x701a63:c.instructions+=1;goto B701a63;
case 0x701a66:goto L701a66;
case 0x701a6a:c.instructions+=1;goto B701a6a;
case 0x701a6c:goto L701a6c;
case 0x701a71:goto L701a71;
case 0x701a74:c.instructions+=2;goto B701a74;
case 0x701a76:c.instructions+=1;goto B701a76;
case 0x701a78:goto L701a78;
case 0x701a79:c.instructions+=2;goto B701a79;
case 0x701a7e:c.instructions+=1;goto B701a7e;
case 0x701a83:goto L701a83;
case 0x701a85:goto L701a85;
case 0x701a8a:c.instructions+=1;goto B701a8a;
case 0x701a8f:goto L701a8f;
case 0x701a90:c.instructions+=1;goto B701a90;
case 0x701a92:goto L701a92;
case 0x701a97:goto L701a97;
case 0x701a9b:c.instructions+=4;goto B701a9b;
case 0x701a9c:c.instructions+=3;goto B701a9c;
case 0x701aa1:c.instructions+=2;goto B701aa1;
case 0x701aa3:c.instructions+=1;goto B701aa3;
case 0x701aa8:goto L701aa8;
case 0x701aa9:goto L701aa9;
case 0x701aad:c.instructions+=1;goto B701aad;
case 0x701aaf:goto L701aaf;
case 0x701ab4:goto L701ab4;
case 0x701ab7:c.instructions+=2;goto B701ab7;
case 0x701ab9:c.instructions+=1;goto B701ab9;
case 0x701abb:goto L701abb;
case 0x701abc:c.instructions+=2;goto B701abc;
case 0x701ac1:c.instructions+=1;goto B701ac1;
case 0x701ac6:goto L701ac6;
case 0x701ac8:goto L701ac8;
case 0x701acd:c.instructions+=1;goto B701acd;
case 0x701ad2:goto L701ad2;
case 0x701ad3:c.instructions+=1;goto B701ad3;
case 0x701ad5:goto L701ad5;
case 0x701ada:goto L701ada;
case 0x701ade:c.instructions+=4;goto B701ade;
case 0x701adf:c.instructions+=3;goto B701adf;
case 0x701ae2:c.instructions+=2;goto B701ae2;
case 0x701ae7:c.instructions+=1;goto B701ae7;
case 0x701aec:goto L701aec;
case 0x701aed:goto L701aed;
case 0x701af1:c.instructions+=1;goto B701af1;
case 0x701af3:goto L701af3;
case 0x701af8:goto L701af8;
case 0x701afb:c.instructions+=2;goto B701afb;
case 0x701afd:c.instructions+=1;goto B701afd;
case 0x701aff:goto L701aff;
case 0x701b00:c.instructions+=2;goto B701b00;
case 0x701b05:c.instructions+=1;goto B701b05;
case 0x701b0a:goto L701b0a;
case 0x701b0c:goto L701b0c;
case 0x701b11:c.instructions+=1;goto B701b11;
case 0x701b16:goto L701b16;
case 0x701b17:c.instructions+=1;goto B701b17;
case 0x701b19:goto L701b19;
case 0x701b1e:goto L701b1e;
case 0x701b22:c.instructions+=4;goto B701b22;
case 0x701b23:c.instructions+=3;goto B701b23;
case 0x701b26:c.instructions+=2;goto B701b26;
case 0x701b2b:c.instructions+=1;goto B701b2b;
case 0x701b30:goto L701b30;
case 0x701b31:goto L701b31;
case 0x701b35:c.instructions+=1;goto B701b35;
case 0x701b37:goto L701b37;
case 0x701b3c:goto L701b3c;
case 0x701b3f:c.instructions+=2;goto B701b3f;
case 0x701b41:c.instructions+=1;goto B701b41;
case 0x701b43:goto L701b43;
case 0x701b44:c.instructions+=2;goto B701b44;
case 0x701b49:c.instructions+=1;goto B701b49;
case 0x701b4e:goto L701b4e;
case 0x701b50:goto L701b50;
case 0x701b55:c.instructions+=1;goto B701b55;
case 0x701b5a:goto L701b5a;
case 0x701b5b:c.instructions+=1;goto B701b5b;
case 0x701b5d:goto L701b5d;
case 0x701b62:goto L701b62;
case 0x701b66:c.instructions+=4;goto B701b66;
case 0x701b67:c.instructions+=3;goto B701b67;
case 0x701b6b:c.instructions+=2;goto B701b6b;
case 0x701b70:c.instructions+=1;goto B701b70;
case 0x701b75:goto L701b75;
case 0x701b76:goto L701b76;
case 0x701b7a:c.instructions+=1;goto B701b7a;
case 0x701b7c:goto L701b7c;
case 0x701b81:goto L701b81;
case 0x701b84:c.instructions+=3;goto B701b84;
case 0x701b89:c.instructions+=2;goto B701b89;
case 0x701b8b:c.instructions+=1;goto B701b8b;
case 0x701b8d:goto L701b8d;
case 0x701b8e:c.instructions+=2;goto B701b8e;
case 0x701b90:c.instructions+=1;goto B701b90;
case 0x701b95:goto L701b95;
case 0x701b97:goto L701b97;
case 0x701b98:c.instructions+=1;goto B701b98;
case 0x701b9d:goto L701b9d;
case 0x701b9e:c.instructions+=1;goto B701b9e;
case 0x701ba0:goto L701ba0;
case 0x701ba5:goto L701ba5;
case 0x701ba8:c.instructions+=5;goto B701ba8;
case 0x701bac:c.instructions+=4;goto B701bac;
case 0x701baf:c.instructions+=3;goto B701baf;
case 0x701bb4:c.instructions+=2;goto B701bb4;
case 0x701bb6:c.instructions+=1;goto B701bb6;
case 0x701bbb:goto L701bbb;
case 0x701bbc:goto L701bbc;
case 0x701bc0:c.instructions+=1;goto B701bc0;
case 0x701bc2:goto L701bc2;
case 0x701bc7:goto L701bc7;
case 0x701bca:c.instructions+=3;goto B701bca;
case 0x701bcf:c.instructions+=2;goto B701bcf;
case 0x701bd1:c.instructions+=1;goto B701bd1;
case 0x701bd3:goto L701bd3;
case 0x701bd4:c.instructions+=2;goto B701bd4;
case 0x701bd6:c.instructions+=1;goto B701bd6;
case 0x701bdb:goto L701bdb;
case 0x701bdd:goto L701bdd;
case 0x701bde:c.instructions+=1;goto B701bde;
case 0x701be3:goto L701be3;
case 0x701be4:c.instructions+=1;goto B701be4;
case 0x701be6:goto L701be6;
case 0x701beb:goto L701beb;
case 0x701bee:c.instructions+=5;goto B701bee;
case 0x701bf2:c.instructions+=4;goto B701bf2;
case 0x701bf5:c.instructions+=3;goto B701bf5;
case 0x701bfa:c.instructions+=2;goto B701bfa;
case 0x701bfc:c.instructions+=1;goto B701bfc;
case 0x701c01:goto L701c01;
case 0x701c02:goto L701c02;
case 0x701c05:c.instructions+=3;goto B701c05;
case 0x701c08:c.instructions+=2;goto B701c08;
case 0x701c0d:c.instructions+=1;goto B701c0d;
case 0x701c12:goto L701c12;
case 0x701c15:c.instructions+=3;goto B701c15;
case 0x701c18:c.instructions+=2;goto B701c18;
case 0x701c1a:c.instructions+=1;goto B701c1a;
case 0x701c1f:goto L701c1f;
case 0x701c22:c.instructions+=3;goto B701c22;
case 0x701c25:c.instructions+=2;goto B701c25;
case 0x701c27:c.instructions+=1;goto B701c27;
case 0x701c2c:goto L701c2c;
case 0x701c2f:c.instructions+=4;goto B701c2f;
case 0x701c30:c.instructions+=3;goto B701c30;
case 0x701c31:c.instructions+=2;goto B701c31;
case 0x701c32:c.instructions+=1;goto B701c32;
case 0x701c40:goto L701c40;
case 0x701c43:c.instructions+=13;goto B701c43;
case 0x701c46:c.instructions+=12;goto B701c46;
case 0x701c49:c.instructions+=11;goto B701c49;
case 0x701c4c:c.instructions+=10;goto B701c4c;
case 0x701c4e:c.instructions+=9;goto B701c4e;
case 0x701c50:c.instructions+=8;goto B701c50;
case 0x701c52:c.instructions+=7;goto B701c52;
case 0x701c55:c.instructions+=6;goto B701c55;
case 0x701c57:c.instructions+=5;goto B701c57;
case 0x701c5a:c.instructions+=4;goto B701c5a;
case 0x701c5c:c.instructions+=3;goto B701c5c;
case 0x701c5f:c.instructions+=2;goto B701c5f;
case 0x701c61:c.instructions+=1;goto B701c61;
case 0x701c67:goto L701c67;
case 0x701c6a:c.instructions+=70;goto B701c6a;
case 0x701c6c:c.instructions+=69;goto B701c6c;
case 0x701c6f:c.instructions+=68;goto B701c6f;
case 0x701c71:c.instructions+=67;goto B701c71;
case 0x701c77:c.instructions+=66;goto B701c77;
case 0x701c7d:c.instructions+=65;goto B701c7d;
case 0x701c80:c.instructions+=64;goto B701c80;
case 0x701c82:c.instructions+=63;goto B701c82;
case 0x701c88:c.instructions+=62;goto B701c88;
case 0x701c8e:c.instructions+=61;goto B701c8e;
case 0x701c90:c.instructions+=60;goto B701c90;
case 0x701c96:c.instructions+=59;goto B701c96;
case 0x701c98:c.instructions+=58;goto B701c98;
case 0x701c9a:c.instructions+=57;goto B701c9a;
case 0x701ca0:c.instructions+=56;goto B701ca0;
case 0x701ca2:c.instructions+=55;goto B701ca2;
case 0x701ca8:c.instructions+=54;goto B701ca8;
case 0x701cae:c.instructions+=53;goto B701cae;
case 0x701cb0:c.instructions+=52;goto B701cb0;
case 0x701cb2:c.instructions+=51;goto B701cb2;
case 0x701cb8:c.instructions+=50;goto B701cb8;
case 0x701cba:c.instructions+=49;goto B701cba;
case 0x701cc0:c.instructions+=48;goto B701cc0;
case 0x701cc3:c.instructions+=47;goto B701cc3;
case 0x701cc6:c.instructions+=46;goto B701cc6;
case 0x701cc8:c.instructions+=45;goto B701cc8;
case 0x701cce:c.instructions+=44;goto B701cce;
case 0x701cd4:c.instructions+=43;goto B701cd4;
case 0x701cda:c.instructions+=42;goto B701cda;
case 0x701ce0:c.instructions+=41;goto B701ce0;
case 0x701ce2:c.instructions+=40;goto B701ce2;
case 0x701ce4:c.instructions+=39;goto B701ce4;
case 0x701ce6:c.instructions+=38;goto B701ce6;
case 0x701cec:c.instructions+=37;goto B701cec;
case 0x701cf2:c.instructions+=36;goto B701cf2;
case 0x701cf8:c.instructions+=35;goto B701cf8;
case 0x701cfa:c.instructions+=34;goto B701cfa;
case 0x701cfd:c.instructions+=33;goto B701cfd;
case 0x701d00:c.instructions+=32;goto B701d00;
case 0x701d02:c.instructions+=31;goto B701d02;
case 0x701d05:c.instructions+=30;goto B701d05;
case 0x701d07:c.instructions+=29;goto B701d07;
case 0x701d0d:c.instructions+=28;goto B701d0d;
case 0x701d0f:c.instructions+=27;goto B701d0f;
case 0x701d15:c.instructions+=26;goto B701d15;
case 0x701d17:c.instructions+=25;goto B701d17;
case 0x701d1d:c.instructions+=24;goto B701d1d;
case 0x701d20:c.instructions+=23;goto B701d20;
case 0x701d22:c.instructions+=22;goto B701d22;
case 0x701d25:c.instructions+=21;goto B701d25;
case 0x701d27:c.instructions+=20;goto B701d27;
case 0x701d2a:c.instructions+=19;goto B701d2a;
case 0x701d2c:c.instructions+=18;goto B701d2c;
case 0x701d32:c.instructions+=17;goto B701d32;
case 0x701d35:c.instructions+=16;goto B701d35;
case 0x701d3b:c.instructions+=15;goto B701d3b;
case 0x701d41:c.instructions+=14;goto B701d41;
case 0x701d44:c.instructions+=13;goto B701d44;
case 0x701d46:c.instructions+=12;goto B701d46;
case 0x701d4c:c.instructions+=11;goto B701d4c;
case 0x701d4f:c.instructions+=10;goto B701d4f;
case 0x701d55:c.instructions+=9;goto B701d55;
case 0x701d58:c.instructions+=8;goto B701d58;
case 0x701d5a:c.instructions+=7;goto B701d5a;
case 0x701d5d:c.instructions+=6;goto B701d5d;
case 0x701d5f:c.instructions+=5;goto B701d5f;
case 0x701d61:c.instructions+=4;goto B701d61;
case 0x701d64:c.instructions+=3;goto B701d64;
case 0x701d6a:c.instructions+=2;goto B701d6a;
case 0x701d70:c.instructions+=1;goto B701d70;
case 0x701d71:goto L701d71;
case 0x701d73:c.instructions+=10;goto B701d73;
case 0x701d79:c.instructions+=9;goto B701d79;
case 0x701d7b:c.instructions+=8;goto B701d7b;
case 0x701d7e:c.instructions+=7;goto B701d7e;
case 0x701d81:c.instructions+=6;goto B701d81;
case 0x701d84:c.instructions+=5;goto B701d84;
case 0x701d8a:c.instructions+=4;goto B701d8a;
case 0x701d90:c.instructions+=3;goto B701d90;
case 0x701d96:c.instructions+=2;goto B701d96;
case 0x701d9c:c.instructions+=1;goto B701d9c;
case 0x701d9d:goto L701d9d;
case 0x701da0:c.instructions+=74;goto B701da0;
case 0x701da3:c.instructions+=73;goto B701da3;
case 0x701da6:c.instructions+=72;goto B701da6;
case 0x701da9:c.instructions+=71;goto B701da9;
case 0x701dac:c.instructions+=70;goto B701dac;
case 0x701dae:c.instructions+=69;goto B701dae;
case 0x701db1:c.instructions+=68;goto B701db1;
case 0x701db3:c.instructions+=67;goto B701db3;
case 0x701db9:c.instructions+=66;goto B701db9;
case 0x701dbf:c.instructions+=65;goto B701dbf;
case 0x701dc2:c.instructions+=64;goto B701dc2;
case 0x701dc4:c.instructions+=63;goto B701dc4;
case 0x701dca:c.instructions+=62;goto B701dca;
case 0x701dd0:c.instructions+=61;goto B701dd0;
case 0x701dd2:c.instructions+=60;goto B701dd2;
case 0x701dd8:c.instructions+=59;goto B701dd8;
case 0x701dda:c.instructions+=58;goto B701dda;
case 0x701ddc:c.instructions+=57;goto B701ddc;
case 0x701de2:c.instructions+=56;goto B701de2;
case 0x701de4:c.instructions+=55;goto B701de4;
case 0x701dea:c.instructions+=54;goto B701dea;
case 0x701df0:c.instructions+=53;goto B701df0;
case 0x701df2:c.instructions+=52;goto B701df2;
case 0x701df4:c.instructions+=51;goto B701df4;
case 0x701dfa:c.instructions+=50;goto B701dfa;
case 0x701dfc:c.instructions+=49;goto B701dfc;
case 0x701e02:c.instructions+=48;goto B701e02;
case 0x701e05:c.instructions+=47;goto B701e05;
case 0x701e08:c.instructions+=46;goto B701e08;
case 0x701e0a:c.instructions+=45;goto B701e0a;
case 0x701e10:c.instructions+=44;goto B701e10;
case 0x701e16:c.instructions+=43;goto B701e16;
case 0x701e1c:c.instructions+=42;goto B701e1c;
case 0x701e22:c.instructions+=41;goto B701e22;
case 0x701e24:c.instructions+=40;goto B701e24;
case 0x701e26:c.instructions+=39;goto B701e26;
case 0x701e28:c.instructions+=38;goto B701e28;
case 0x701e2e:c.instructions+=37;goto B701e2e;
case 0x701e34:c.instructions+=36;goto B701e34;
case 0x701e3a:c.instructions+=35;goto B701e3a;
case 0x701e3c:c.instructions+=34;goto B701e3c;
case 0x701e3f:c.instructions+=33;goto B701e3f;
case 0x701e42:c.instructions+=32;goto B701e42;
case 0x701e44:c.instructions+=31;goto B701e44;
case 0x701e47:c.instructions+=30;goto B701e47;
case 0x701e49:c.instructions+=29;goto B701e49;
case 0x701e4f:c.instructions+=28;goto B701e4f;
case 0x701e51:c.instructions+=27;goto B701e51;
case 0x701e57:c.instructions+=26;goto B701e57;
case 0x701e59:c.instructions+=25;goto B701e59;
case 0x701e5f:c.instructions+=24;goto B701e5f;
case 0x701e62:c.instructions+=23;goto B701e62;
case 0x701e64:c.instructions+=22;goto B701e64;
case 0x701e67:c.instructions+=21;goto B701e67;
case 0x701e69:c.instructions+=20;goto B701e69;
case 0x701e6c:c.instructions+=19;goto B701e6c;
case 0x701e6e:c.instructions+=18;goto B701e6e;
case 0x701e74:c.instructions+=17;goto B701e74;
case 0x701e77:c.instructions+=16;goto B701e77;
case 0x701e7d:c.instructions+=15;goto B701e7d;
case 0x701e80:c.instructions+=14;goto B701e80;
case 0x701e83:c.instructions+=13;goto B701e83;
case 0x701e85:c.instructions+=12;goto B701e85;
case 0x701e8b:c.instructions+=11;goto B701e8b;
case 0x701e8e:c.instructions+=10;goto B701e8e;
case 0x701e91:c.instructions+=9;goto B701e91;
case 0x701e94:c.instructions+=8;goto B701e94;
case 0x701e96:c.instructions+=7;goto B701e96;
case 0x701e99:c.instructions+=6;goto B701e99;
case 0x701e9b:c.instructions+=5;goto B701e9b;
case 0x701e9d:c.instructions+=4;goto B701e9d;
case 0x701ea0:c.instructions+=3;goto B701ea0;
case 0x701ea3:c.instructions+=2;goto B701ea3;
case 0x701ea6:c.instructions+=1;goto B701ea6;
case 0x701ea7:goto L701ea7;
case 0x701eab:c.instructions+=11;goto B701eab;
case 0x701eaf:c.instructions+=10;goto B701eaf;
case 0x701eb0:c.instructions+=9;goto B701eb0;
case 0x701eb1:c.instructions+=8;goto B701eb1;
case 0x701eb2:c.instructions+=7;goto B701eb2;
case 0x701eb3:c.instructions+=6;goto B701eb3;
case 0x701eb4:c.instructions+=5;goto B701eb4;
case 0x701eb7:c.instructions+=4;goto B701eb7;
case 0x701ebd:c.instructions+=3;goto B701ebd;
case 0x701ec2:c.instructions+=2;goto B701ec2;
case 0x701ecc:c.instructions+=1;goto B701ecc;
case 0x701ed1:goto L701ed1;
case 0x701ed6:c.instructions+=2;goto B701ed6;
case 0x701ee0:c.instructions+=1;goto B701ee0;
case 0x701ee5:goto L701ee5;
case 0x701eea:c.instructions+=2;goto B701eea;
case 0x701ef4:c.instructions+=1;goto B701ef4;
case 0x701ef9:goto L701ef9;
case 0x701efe:c.instructions+=2;goto B701efe;
case 0x701f08:c.instructions+=1;goto B701f08;
case 0x701f0d:goto L701f0d;
case 0x701f12:c.instructions+=2;goto B701f12;
case 0x701f1c:c.instructions+=1;goto B701f1c;
case 0x701f21:goto L701f21;
case 0x701f26:c.instructions+=2;goto B701f26;
case 0x701f30:c.instructions+=1;goto B701f30;
case 0x701f35:goto L701f35;
case 0x701f3a:c.instructions+=2;goto B701f3a;
case 0x701f44:c.instructions+=1;goto B701f44;
case 0x701f49:goto L701f49;
case 0x701f4e:c.instructions+=2;goto B701f4e;
case 0x701f58:c.instructions+=1;goto B701f58;
case 0x701f5d:goto L701f5d;
case 0x701f5e:c.instructions+=3;goto B701f5e;
case 0x701f63:c.instructions+=2;goto B701f63;
case 0x701f68:c.instructions+=1;goto B701f68;
case 0x701f6d:goto L701f6d;
case 0x701f72:c.instructions+=5;goto B701f72;
case 0x701f78:c.instructions+=4;goto B701f78;
case 0x701f7a:c.instructions+=3;goto B701f7a;
case 0x701f7f:c.instructions+=2;goto B701f7f;
case 0x701f84:c.instructions+=1;goto B701f84;
case 0x701f89:goto L701f89;
case 0x701f8e:c.instructions+=5;goto B701f8e;
case 0x701f94:c.instructions+=4;goto B701f94;
case 0x701f96:c.instructions+=3;goto B701f96;
case 0x701f9b:c.instructions+=2;goto B701f9b;
case 0x701fa0:c.instructions+=1;goto B701fa0;
case 0x701fa5:goto L701fa5;
case 0x701faa:c.instructions+=5;goto B701faa;
case 0x701fb0:c.instructions+=4;goto B701fb0;
case 0x701fb2:c.instructions+=3;goto B701fb2;
case 0x701fb7:c.instructions+=2;goto B701fb7;
case 0x701fbc:c.instructions+=1;goto B701fbc;
case 0x701fc1:goto L701fc1;
case 0x701fc6:c.instructions+=5;goto B701fc6;
case 0x701fcc:c.instructions+=4;goto B701fcc;
case 0x701fce:c.instructions+=3;goto B701fce;
case 0x701fd3:c.instructions+=2;goto B701fd3;
case 0x701fd8:c.instructions+=1;goto B701fd8;
case 0x701fdd:goto L701fdd;
case 0x701fe2:c.instructions+=5;goto B701fe2;
case 0x701fe8:c.instructions+=4;goto B701fe8;
case 0x701fea:c.instructions+=3;goto B701fea;
case 0x701fef:c.instructions+=2;goto B701fef;
case 0x701ff4:c.instructions+=1;goto B701ff4;
case 0x701ff9:goto L701ff9;
case 0x701ffe:c.instructions+=1;goto B701ffe;
default:missing_instruction(c.pc);}
B701000:L701000:{c.instructions+=8;NFSU2_TR(0x701000);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B701003:{NFSU2_TR(0x701003);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+8)),r4(U+0));
}
B701005:{NFSU2_TR(0x701005);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B701008:{NFSU2_TR(0x701008);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffff8ull))));
__builtin_memmove((R+4),(U+0),4);
}
B70100b:{NFSU2_TR(0x70100b);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B70100d:{NFSU2_TR(0x70100d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
s4(u32(r4(R+0)),r4(U+0));
}
B70100f:{NFSU2_TR(0x70100f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B701012:{NFSU2_TR(0x701012);
if(r1(R+518)){{goto L70101b;}}
}
B701014:L701014:{c.instructions+=2;NFSU2_TR(0x701014);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B701016:{NFSU2_TR(0x701016);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x70101bull));
{goto L701325;}
}
B70101b:L70101b:{c.instructions+=2;NFSU2_TR(0x70101b);
u8 U[18];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((U+10),(U+0),4);
w1(R+512,u8((r4(U+10))<(r4(R+12))));
w1(R+523,sborrow<u32>(r4(U+10),r4(R+12)));
w4(U+14,u32(u32(r4(U+10))-u32(r4(R+12))));
w1(R+519,u8(s32(r4(U+14))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+14))==(u32(0x0ull))));
w4(U+4,u32(u32(r4(U+14))&u32(u32(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r4(U+4)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B70101d:{NFSU2_TR(0x70101d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x700ffcu,700);}
}
B70101f:L70101f:{c.instructions+=13;NFSU2_TR(0x70101f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B701022:{NFSU2_TR(0x701022);
u8 U[4];
w4(U+0,u32(0x7ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B701024:{NFSU2_TR(0x701024);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B701025:{NFSU2_TR(0x701025);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+12)),r4(U+0));
}
B701027:{NFSU2_TR(0x701027);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70102a:{NFSU2_TR(0x70102a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B70102b:{NFSU2_TR(0x70102b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+24)),r4(U+0));
}
B70102d:{NFSU2_TR(0x70102d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B701030:{NFSU2_TR(0x701030);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B701031:{NFSU2_TR(0x701031);
u8 U[4];
w4(U+0,u32(0x7c3510ull));
s4(u32(r4(R+4)),r4(U+0));
}
B701037:{NFSU2_TR(0x701037);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B701038:{NFSU2_TR(0x701038);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B701039:{NFSU2_TR(0x701039);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B70103a:L70103a:{c.instructions+=16;NFSU2_TR(0x70103a);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70103b:{NFSU2_TR(0x70103b);
__builtin_memmove((R+20),(R+16),4);
}
B70103d:{NFSU2_TR(0x70103d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x24ull))));
}
B701040:{NFSU2_TR(0x701040);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B701043:{NFSU2_TR(0x701043);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B701044:{NFSU2_TR(0x701044);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B701047:{NFSU2_TR(0x701047);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B701048:{NFSU2_TR(0x701048);
__builtin_memmove((R+24),(R+4),4);
}
B70104a:{NFSU2_TR(0x70104a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B70104d:{NFSU2_TR(0x70104d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70104e:{NFSU2_TR(0x70104e);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B701050:{NFSU2_TR(0x701050);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B701052:{NFSU2_TR(0x701052);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B701055:{NFSU2_TR(0x701055);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B701058:{NFSU2_TR(0x701058);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70105b:{NFSU2_TR(0x70105b);
if(r1(R+518)){{goto L701094;}}
}
B70105d:L70105d:{c.instructions+=2;NFSU2_TR(0x70105d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B701060:{NFSU2_TR(0x701060);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x701065ull));
TAIL_STATIC(0x6f4820u,6f4);
}
B701065:L701065:{c.instructions+=3;NFSU2_TR(0x701065);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B701068:{NFSU2_TR(0x701068);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B70106a:{NFSU2_TR(0x70106a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L701071;}}
}
B70106c:L70106c:{c.instructions+=2;NFSU2_TR(0x70106c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70106f:{NFSU2_TR(0x70106f);
{goto L701076;}
}
B701071:L701071:{c.instructions+=2;NFSU2_TR(0x701071);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+0))));
}
B701073:{NFSU2_TR(0x701073);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B701076:L701076:{c.instructions+=12;NFSU2_TR(0x701076);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B701079:{NFSU2_TR(0x701079);
u8 U[32];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
w8(U+8,u64(s64(s32(r4(R+0)))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+16,u64(s64(s32(r4(U+4)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+0,u32(r8(U+24)));
}
B70107d:{NFSU2_TR(0x70107d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B701080:{NFSU2_TR(0x701080);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+0))));
}
B701082:{NFSU2_TR(0x701082);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B701085:{NFSU2_TR(0x701085);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B701086:{NFSU2_TR(0x701086);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B701088:{NFSU2_TR(0x701088);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70108b:{NFSU2_TR(0x70108b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B70108c:{NFSU2_TR(0x70108c);
u8 U[56];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x70108c);w8(U+40,u64(x_/y_));}
w4(R+0,u32(r8(U+40)));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x70108c);w8(U+48,u64(x_%y_));}
w4(R+8,u32(r8(U+48)));
}
B70108e:{NFSU2_TR(0x70108e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))+u32(r4(U+4))));
}
B701091:{NFSU2_TR(0x701091);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B701094:L701094:{c.instructions+=2;NFSU2_TR(0x701094);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B701097:{NFSU2_TR(0x701097);
if(r1(R+518)){{goto L7010e5;}}
}
B701099:L701099:{c.instructions+=16;NFSU2_TR(0x701099);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B70109c:{NFSU2_TR(0x70109c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70109f:{NFSU2_TR(0x70109f);
{u32 ea_=u32(r4(R+20)+u32(4294967280u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B7010a2:{NFSU2_TR(0x7010a2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7010a5:{NFSU2_TR(0x7010a5);
{u32 ea_=u32(u32(8140464u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B7010ab:{NFSU2_TR(0x7010ab);
{u32 ea_=u32(u32(7882064u));__asm__ volatile(".byte 0xd8,0x38"::"a"(ea_):"memory");}
}
B7010b1:{NFSU2_TR(0x7010b1);
{u32 ea_=u32(r4(R+24)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B7010b4:{NFSU2_TR(0x7010b4);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B7010b8:{NFSU2_TR(0x7010b8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7010bb:{NFSU2_TR(0x7010bb);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x12ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B7010bf:{NFSU2_TR(0x7010bf);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7010c2:{NFSU2_TR(0x7010c2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7010c5:{NFSU2_TR(0x7010c5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7010c8:{NFSU2_TR(0x7010c8);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B7010c9:{NFSU2_TR(0x7010c9);
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
B7010cb:{NFSU2_TR(0x7010cb);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L7010e2;}}
}
B7010cd:L7010cd:{c.instructions+=1;NFSU2_TR(0x7010cd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7010d0:L7010d0:{c.instructions+=4;NFSU2_TR(0x7010d0);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B7010d3:{NFSU2_TR(0x7010d3);
__builtin_memmove((R+4),(R+24),4);
}
B7010d5:{NFSU2_TR(0x7010d5);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B7010d8:{NFSU2_TR(0x7010d8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7010ddull));
{goto L701345;}
}
B7010dd:L7010dd:{c.instructions+=2;NFSU2_TR(0x7010dd);
u8 U[14];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+523,sborrow<u32>(r4(U+4),u32(0x1ull)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
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
B7010e0:{NFSU2_TR(0x7010e0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7010d0u);}goto L7010d0;}}
}
B7010e2:L7010e2:{c.instructions+=1;NFSU2_TR(0x7010e2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7010e5:L7010e5:{c.instructions+=3;NFSU2_TR(0x7010e5);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7010e6:{NFSU2_TR(0x7010e6);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7010e7:{NFSU2_TR(0x7010e7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7010ecull));
TAIL_STATIC(0x75db38u,75d);
}
B7010ec:L7010ec:{c.instructions+=4;NFSU2_TR(0x7010ec);
u8 U[4];
w4(U+0,u32(0x30000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7010f1:{NFSU2_TR(0x7010f1);
u8 U[4];
w4(U+0,u32(0x10000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7010f6:{NFSU2_TR(0x7010f6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7010f9:{NFSU2_TR(0x7010f9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7010feull));
TAIL_STATIC(0x75db38u,75d);
}
B7010fe:L7010fe:{c.instructions+=3;NFSU2_TR(0x7010fe);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B701101:{NFSU2_TR(0x701101);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B701104:{NFSU2_TR(0x701104);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x701109ull));
TAIL_STATIC(0x700d87u,700);
}
B701109:L701109:{c.instructions+=2;NFSU2_TR(0x701109);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x4d41446bull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B70110e:{NFSU2_TR(0x70110e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L701134;}}
}
B701110:L701110:{c.instructions+=3;NFSU2_TR(0x701110);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B701113:{NFSU2_TR(0x701113);
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
B701115:{NFSU2_TR(0x701115);
if(r1(R+518)){{goto L70111f;}}
}
B701117:L701117:{c.instructions+=4;NFSU2_TR(0x701117);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B701119:{NFSU2_TR(0x701119);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70111a:{NFSU2_TR(0x70111a);
__builtin_memmove((R+4),(R+24),4);
}
B70111c:{NFSU2_TR(0x70111c);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x70111full));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B70111f:L70111f:{c.instructions+=3;NFSU2_TR(0x70111f);
__builtin_memmove((R+4),(R+24),4);
}
B701121:{NFSU2_TR(0x701121);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B701124:{NFSU2_TR(0x701124);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x701129ull));
TAIL_STATIC(0x700ebbu,700);
}
B701129:L701129:{c.instructions+=5;NFSU2_TR(0x701129);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70112c:{NFSU2_TR(0x70112c);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x15ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(s32(s8(r1(U+4)))));
}
B701130:{NFSU2_TR(0x701130);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B701131:{NFSU2_TR(0x701131);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B701132:{NFSU2_TR(0x701132);
{goto L70115b;}
}
B701134:L701134:{c.instructions+=2;NFSU2_TR(0x701134);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B701137:{NFSU2_TR(0x701137);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x70113cull));
TAIL_STATIC(0x700d87u,700);
}
B70113c:L70113c:{c.instructions+=3;NFSU2_TR(0x70113c);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x4d41446dull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B701141:{NFSU2_TR(0x701141);
__builtin_memmove((R+4),(R+24),4);
}
B701143:{NFSU2_TR(0x701143);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L70114c;}}
}
B701145:L701145:{c.instructions+=1;NFSU2_TR(0x701145);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x70114aull));
TAIL_STATIC(0x700ebbu,700);
}
B70114a:L70114a:{c.instructions+=1;NFSU2_TR(0x70114a);
{goto L701151;}
}
B70114c:L70114c:{c.instructions+=1;NFSU2_TR(0x70114c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x701151ull));
TAIL_STATIC(0x700f0cu,700);
}
B701151:L701151:{c.instructions+=4;NFSU2_TR(0x701151);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B701154:{NFSU2_TR(0x701154);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x15ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(s32(s8(r1(U+4)))));
}
B701158:{NFSU2_TR(0x701158);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B701159:{NFSU2_TR(0x701159);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70115b:L70115b:{c.instructions+=3;NFSU2_TR(0x70115b);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x18ull))));
}
B70115e:{NFSU2_TR(0x70115e);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70115f:{NFSU2_TR(0x70115f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x701164ull));
{goto L701943;}
}
B701164:L701164:{c.instructions+=4;NFSU2_TR(0x701164);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B701167:{NFSU2_TR(0x701167);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B70116a:{NFSU2_TR(0x70116a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B70116d:{NFSU2_TR(0x70116d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x701172ull));
TAIL_STATIC(0x6f4820u,6f4);
}
B701172:L701172:{c.instructions+=3;NFSU2_TR(0x701172);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B701175:{NFSU2_TR(0x701175);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B701177:{NFSU2_TR(0x701177);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L70117e;}}
}
B701179:L701179:{c.instructions+=2;NFSU2_TR(0x701179);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70117c:{NFSU2_TR(0x70117c);
{goto L701183;}
}
B70117e:L70117e:{c.instructions+=2;NFSU2_TR(0x70117e);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+0))));
}
B701180:{NFSU2_TR(0x701180);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B701183:L701183:{c.instructions+=16;NFSU2_TR(0x701183);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B701186:{NFSU2_TR(0x701186);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B701189:{NFSU2_TR(0x701189);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B70118c:{NFSU2_TR(0x70118c);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(r4(R+4)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B70118f:{NFSU2_TR(0x70118f);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+0))));
}
B701191:{NFSU2_TR(0x701191);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B701194:{NFSU2_TR(0x701194);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B701197:{NFSU2_TR(0x701197);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B701198:{NFSU2_TR(0x701198);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70119a:{NFSU2_TR(0x70119a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B70119b:{NFSU2_TR(0x70119b);
u8 U[56];
w8(U+0,u64(s64(s32(r4(R+12)))));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x70119b);w8(U+40,u64(x_/y_));}
w4(R+0,u32(r8(U+40)));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x70119b);w8(U+48,u64(x_%y_));}
w4(R+8,u32(r8(U+48)));
}
B70119d:{NFSU2_TR(0x70119d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7011a0:{NFSU2_TR(0x7011a0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))+u32(r4(U+4))));
}
B7011a3:{NFSU2_TR(0x7011a3);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B7011a5:{NFSU2_TR(0x7011a5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7011a8:{NFSU2_TR(0x7011a8);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L701211;}}
}
B7011aa:L7011aa:{c.instructions+=3;NFSU2_TR(0x7011aa);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B7011ac:{NFSU2_TR(0x7011ac);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(U+8),r4(R+28)));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B7011af:{NFSU2_TR(0x7011af);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L701205;}}
}
B7011b1:L7011b1:{c.instructions+=33;NFSU2_TR(0x7011b1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7011b4:{NFSU2_TR(0x7011b4);
u8 U[32];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
w8(U+8,u64(s64(s32(r4(R+0)))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+16,u64(s64(s32(r4(U+4)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+0,u32(r8(U+24)));
}
B7011b8:{NFSU2_TR(0x7011b8);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+28),(U+4),4);
}
B7011bb:{NFSU2_TR(0x7011bb);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B7011bc:{NFSU2_TR(0x7011bc);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7011be:{NFSU2_TR(0x7011be);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B7011bf:{NFSU2_TR(0x7011bf);
u8 U[56];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x7011bf);w8(U+40,u64(x_/y_));}
w4(R+0,u32(r8(U+40)));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x7011bf);w8(U+48,u64(x_%y_));}
w4(R+8,u32(r8(U+48)));
}
B7011c1:{NFSU2_TR(0x7011c1);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B7011c4:{NFSU2_TR(0x7011c4);
__builtin_memmove((R+4),(R+0),4);
}
B7011c6:{NFSU2_TR(0x7011c6);
__builtin_memmove((R+0),(R+12),4);
}
B7011c8:{NFSU2_TR(0x7011c8);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B7011c9:{NFSU2_TR(0x7011c9);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+8))));
}
B7011cb:{NFSU2_TR(0x7011cb);
w4(R+0,sar<u32>(r4(R+0),u64(u32(0x1ull))));
}
B7011cd:{NFSU2_TR(0x7011cd);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+0))));
}
B7011cf:{NFSU2_TR(0x7011cf);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7011d2:{NFSU2_TR(0x7011d2);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+4))));
}
B7011d4:{NFSU2_TR(0x7011d4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7011d5:{NFSU2_TR(0x7011d5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7011d8:{NFSU2_TR(0x7011d8);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+4))));
}
B7011da:{NFSU2_TR(0x7011da);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7011db:{NFSU2_TR(0x7011db);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7011de:{NFSU2_TR(0x7011de);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+28))));
}
B7011e0:{NFSU2_TR(0x7011e0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7011e1:{NFSU2_TR(0x7011e1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7011e4:{NFSU2_TR(0x7011e4);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+4))));
}
B7011e6:{NFSU2_TR(0x7011e6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7011e7:{NFSU2_TR(0x7011e7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7011ea:{NFSU2_TR(0x7011ea);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+0))));
}
B7011ec:{NFSU2_TR(0x7011ec);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7011ef:{NFSU2_TR(0x7011ef);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7011f0:{NFSU2_TR(0x7011f0);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+0))));
}
B7011f2:{NFSU2_TR(0x7011f2);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7011f3:{NFSU2_TR(0x7011f3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7011f8ull));
{goto L7019dc;}
}
B7011f8:L7011f8:{c.instructions+=4;NFSU2_TR(0x7011f8);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x10ull))));
}
B7011fb:{NFSU2_TR(0x7011fb);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x1cull))));
}
B7011fe:{NFSU2_TR(0x7011fe);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(R+12),r4(U+8)));
w4(U+12,u32(u32(r4(R+12))-u32(r4(U+8))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B701201:{NFSU2_TR(0x701201);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7011b1u);}goto L7011b1;}}
}
B701203:L701203:{c.instructions+=1;NFSU2_TR(0x701203);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B701205:L701205:{c.instructions+=4;NFSU2_TR(0x701205);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x10ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B701209:{NFSU2_TR(0x701209);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B70120c:{NFSU2_TR(0x70120c);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+8)));
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B70120f:{NFSU2_TR(0x70120f);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7011aau);}goto L7011aa;}}
}
B701211:L701211:{c.instructions+=3;NFSU2_TR(0x701211);
u8 U[4];
w4(U+0,u32(0xfffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B701216:{NFSU2_TR(0x701216);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B701219:{NFSU2_TR(0x701219);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x70121eull));
TAIL_STATIC(0x75db38u,75d);
}
B70121e:L70121e:{c.instructions+=4;NFSU2_TR(0x70121e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B701221:{NFSU2_TR(0x701221);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B701222:{NFSU2_TR(0x701222);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B701223:{NFSU2_TR(0x701223);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x701228ull));
TAIL_STATIC(0x700d87u,700);
}
B701228:L701228:{c.instructions+=2;NFSU2_TR(0x701228);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x4d41446dull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B70122d:{NFSU2_TR(0x70122d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L701240;}}
}
B70122f:L70122f:{c.instructions+=3;NFSU2_TR(0x70122f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B701232:{NFSU2_TR(0x701232);
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
B701234:{NFSU2_TR(0x701234);
if(r1(R+518)){{goto L70124f;}}
}
B701236:L701236:{c.instructions+=4;NFSU2_TR(0x701236);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B701238:{NFSU2_TR(0x701238);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B701239:{NFSU2_TR(0x701239);
__builtin_memmove((R+4),(R+24),4);
}
B70123b:{NFSU2_TR(0x70123b);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x70123eull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B70123e:L70123e:{c.instructions+=1;NFSU2_TR(0x70123e);
{goto L70124f;}
}
B701240:L701240:{c.instructions+=2;NFSU2_TR(0x701240);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B701243:{NFSU2_TR(0x701243);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x701248ull));
TAIL_STATIC(0x700d87u,700);
}
B701248:L701248:{c.instructions+=2;NFSU2_TR(0x701248);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0x4d41446bull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x4d41446bull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0x4d41446bull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B70124d:{NFSU2_TR(0x70124d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L701255;}}
}
B70124f:L70124f:{c.instructions+=2;NFSU2_TR(0x70124f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B701252:{NFSU2_TR(0x701252);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B701255:L701255:{c.instructions+=6;NFSU2_TR(0x701255);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B701258:{NFSU2_TR(0x701258);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B701259:{NFSU2_TR(0x701259);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B70125a:{NFSU2_TR(0x70125a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B70125b:{NFSU2_TR(0x70125b);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B70125c:{NFSU2_TR(0x70125c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B70125f:L70125f:{c.instructions+=9;NFSU2_TR(0x70125f);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B701260:{NFSU2_TR(0x701260);
__builtin_memmove((R+20),(R+16),4);
}
B701262:{NFSU2_TR(0x701262);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B701263:{NFSU2_TR(0x701263);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B701264:{NFSU2_TR(0x701264);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B701265:{NFSU2_TR(0x701265);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+0),(U+0),4);
}
B701268:{NFSU2_TR(0x701268);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B701269:{NFSU2_TR(0x701269);
__builtin_memmove((R+24),(R+4),4);
}
B70126b:{NFSU2_TR(0x70126b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x701270ull));
TAIL_STATIC(0x700dbeu,700);
}
B701270:L701270:{c.instructions+=2;NFSU2_TR(0x701270);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B701274:{NFSU2_TR(0x701274);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L7012d4;}}
}
B701276:L701276:{c.instructions+=4;NFSU2_TR(0x701276);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B701279:{NFSU2_TR(0x701279);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))-u32(r4(U+4))));
}
B70127c:{NFSU2_TR(0x70127c);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x2ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B70127f:{NFSU2_TR(0x70127f);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L7012a7;}}
}
B701281:L701281:{c.instructions+=3;NFSU2_TR(0x701281);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B701284:{NFSU2_TR(0x701284);
__builtin_memmove((R+4),(R+24),4);
}
B701286:{NFSU2_TR(0x701286);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x70128bull));
TAIL_STATIC(0x700dd9u,700);
}
B70128b:L70128b:{c.instructions+=4;NFSU2_TR(0x70128b);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+0),(U+0),4);
}
B70128e:{NFSU2_TR(0x70128e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70128f:{NFSU2_TR(0x70128f);
__builtin_memmove((R+4),(R+24),4);
}
B701291:{NFSU2_TR(0x701291);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x701296ull));
TAIL_STATIC(0x700dbeu,700);
}
B701296:L701296:{c.instructions+=2;NFSU2_TR(0x701296);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B701299:{NFSU2_TR(0x701299);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x70129eull));
TAIL_STATIC(0x700d87u,700);
}
B70129e:L70129e:{c.instructions+=2;NFSU2_TR(0x70129e);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x4d41446bull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B7012a3:{NFSU2_TR(0x7012a3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x701281u);}goto L701281;}}
}
B7012a5:L7012a5:{c.instructions+=1;NFSU2_TR(0x7012a5);
{goto L7012d4;}
}
B7012a7:L7012a7:{c.instructions+=2;NFSU2_TR(0x7012a7);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B7012a9:{NFSU2_TR(0x7012a9);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L7012d4;}}
}
B7012ab:L7012ab:{c.instructions+=1;NFSU2_TR(0x7012ab);
__builtin_memmove((R+28),(R+0),4);
}
B7012ad:L7012ad:{c.instructions+=2;NFSU2_TR(0x7012ad);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7012b0:{NFSU2_TR(0x7012b0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7012b5ull));
TAIL_STATIC(0x700d87u,700);
}
B7012b5:L7012b5:{c.instructions+=2;NFSU2_TR(0x7012b5);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x4d414465ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B7012ba:{NFSU2_TR(0x7012ba);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L7012d1;}}
}
B7012bc:L7012bc:{c.instructions+=3;NFSU2_TR(0x7012bc);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B7012bf:{NFSU2_TR(0x7012bf);
__builtin_memmove((R+4),(R+24),4);
}
B7012c1:{NFSU2_TR(0x7012c1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7012c6ull));
TAIL_STATIC(0x700dd9u,700);
}
B7012c6:L7012c6:{c.instructions+=4;NFSU2_TR(0x7012c6);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+0),(U+0),4);
}
B7012c9:{NFSU2_TR(0x7012c9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7012ca:{NFSU2_TR(0x7012ca);
__builtin_memmove((R+4),(R+24),4);
}
B7012cc:{NFSU2_TR(0x7012cc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7012d1ull));
TAIL_STATIC(0x700dbeu,700);
}
B7012d1:L7012d1:{c.instructions+=2;NFSU2_TR(0x7012d1);
w4(R+28,u32(u32(r4(R+28))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+28))==(u32(0x0ull))));
}
B7012d2:{NFSU2_TR(0x7012d2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7012adu);}goto L7012ad;}}
}
B7012d4:L7012d4:{c.instructions+=2;NFSU2_TR(0x7012d4);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B7012d8:{NFSU2_TR(0x7012d8);
if(r1(R+518)){{goto L7012f4;}}
}
B7012da:L7012da:{c.instructions+=3;NFSU2_TR(0x7012da);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B7012dd:{NFSU2_TR(0x7012dd);
__builtin_memmove((R+4),(R+24),4);
}
B7012df:{NFSU2_TR(0x7012df);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7012e4ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x70103au);}goto L70103a;}
}
B7012e4:L7012e4:{c.instructions+=4;NFSU2_TR(0x7012e4);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B7012e7:{NFSU2_TR(0x7012e7);
__builtin_memmove((R+4),(R+24),4);
}
B7012e9:{NFSU2_TR(0x7012e9);
__builtin_memmove((R+28),(R+0),4);
}
B7012eb:{NFSU2_TR(0x7012eb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7012f0ull));
TAIL_STATIC(0x700dd9u,700);
}
B7012f0:L7012f0:{c.instructions+=2;NFSU2_TR(0x7012f0);
__builtin_memmove((R+0),(R+28),4);
}
B7012f2:{NFSU2_TR(0x7012f2);
{goto L701309;}
}
B7012f4:L7012f4:{c.instructions+=3;NFSU2_TR(0x7012f4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7012f7:{NFSU2_TR(0x7012f7);
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
B7012f9:{NFSU2_TR(0x7012f9);
if(r1(R+518)){{goto L701307;}}
}
B7012fb:L7012fb:{c.instructions+=4;NFSU2_TR(0x7012fb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B7012fd:{NFSU2_TR(0x7012fd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7012fe:{NFSU2_TR(0x7012fe);
__builtin_memmove((R+4),(R+24),4);
}
B701300:{NFSU2_TR(0x701300);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x701303ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B701303:L701303:{c.instructions+=1;NFSU2_TR(0x701303);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B701307:L701307:{c.instructions+=1;NFSU2_TR(0x701307);
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
B701309:L701309:{c.instructions+=4;NFSU2_TR(0x701309);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B70130a:{NFSU2_TR(0x70130a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B70130b:{NFSU2_TR(0x70130b);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B70130c:{NFSU2_TR(0x70130c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B70130f:L70130f:{c.instructions+=2;NFSU2_TR(0x70130f);
u8 U[4];
w4(U+0,u32(0x34ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B701311:{NFSU2_TR(0x701311);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x701316ull));
TAIL_STATIC(0x6ff085u,6ff);
}
B701316:L701316:{c.instructions+=3;NFSU2_TR(0x701316);
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
B701318:{NFSU2_TR(0x701318);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B701319:{NFSU2_TR(0x701319);
if(r1(R+518)){{goto L701322;}}
}
B70131b:L70131b:{c.instructions+=2;NFSU2_TR(0x70131b);
__builtin_memmove((R+4),(R+0),4);
}
B70131d:{NFSU2_TR(0x70131d);
TAIL_STATIC(0x700f97u,700);
}
B701322:L701322:{c.instructions+=2;NFSU2_TR(0x701322);
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
B701324:{NFSU2_TR(0x701324);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B701325:L701325:{c.instructions+=5;NFSU2_TR(0x701325);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B701326:{NFSU2_TR(0x701326);
__builtin_memmove((R+20),(R+16),4);
}
B701328:{NFSU2_TR(0x701328);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B701329:{NFSU2_TR(0x701329);
__builtin_memmove((R+24),(R+4),4);
}
B70132b:{NFSU2_TR(0x70132b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x701330ull));
TAIL_STATIC(0x700e5du,700);
}
B701330:L701330:{c.instructions+=2;NFSU2_TR(0x701330);
u8 U[9];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
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
B701334:{NFSU2_TR(0x701334);
if(r1(R+518)){{goto L70133e;}}
}
B701336:L701336:{c.instructions+=2;NFSU2_TR(0x701336);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B701337:{NFSU2_TR(0x701337);
u8 U[4];
__builtin_memmove((U+0),gp(0x8161f0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x70133dull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B70133d:L70133d:{c.instructions+=1;NFSU2_TR(0x70133d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B70133e:L70133e:{c.instructions+=4;NFSU2_TR(0x70133e);
__builtin_memmove((R+0),(R+24),4);
}
B701340:{NFSU2_TR(0x701340);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B701341:{NFSU2_TR(0x701341);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B701342:{NFSU2_TR(0x701342);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B701345:L701345:{c.instructions+=6;NFSU2_TR(0x701345);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B701346:{NFSU2_TR(0x701346);
__builtin_memmove((R+20),(R+16),4);
}
B701348:{NFSU2_TR(0x701348);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B701349:{NFSU2_TR(0x701349);
u8 U[4];
w4(U+0,u32(0x14ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70134b:{NFSU2_TR(0x70134b);
__builtin_memmove((R+24),(R+4),4);
}
B70134d:{NFSU2_TR(0x70134d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x701352ull));
TAIL_STATIC(0x6ff085u,6ff);
}
B701352:L701352:{c.instructions+=3;NFSU2_TR(0x701352);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B701354:{NFSU2_TR(0x701354);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B701355:{NFSU2_TR(0x701355);
if(r1(R+518)){{goto L701366;}}
}
B701357:L701357:{c.instructions+=4;NFSU2_TR(0x701357);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B70135a:{NFSU2_TR(0x70135a);
__builtin_memmove((R+4),(R+0),4);
}
B70135c:{NFSU2_TR(0x70135c);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B70135f:{NFSU2_TR(0x70135f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x701364ull));
TAIL_STATIC(0x700defu,700);
}
B701364:L701364:{c.instructions+=1;NFSU2_TR(0x701364);
{goto L701368;}
}
B701366:L701366:{c.instructions+=1;NFSU2_TR(0x701366);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B701368:L701368:{c.instructions+=13;NFSU2_TR(0x701368);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((R+4),(U+0),4);
}
B70136b:{NFSU2_TR(0x70136b);
w1(R+512,u8((r4(R+0))!=(u32(0x0ull))));
w4(R+0,u32(0-u32(r4(R+0))));
}
B70136d:{NFSU2_TR(0x70136d);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(R+0))));
w4(R+0,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B70136f:{NFSU2_TR(0x70136f);
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
B701371:{NFSU2_TR(0x701371);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((R+4),(U+0),4);
}
B701374:{NFSU2_TR(0x701374);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B701376:{NFSU2_TR(0x701376);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B701378:{NFSU2_TR(0x701378);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70137b:{NFSU2_TR(0x70137b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70137e:{NFSU2_TR(0x70137e);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+0)),r4(U+0));
}
B701380:{NFSU2_TR(0x701380);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B701381:{NFSU2_TR(0x701381);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B701382:{NFSU2_TR(0x701382);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B701385:L701385:{c.instructions+=5;NFSU2_TR(0x701385);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B701386:{NFSU2_TR(0x701386);
__builtin_memmove((R+20),(R+16),4);
}
B701388:{NFSU2_TR(0x701388);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B701389:{NFSU2_TR(0x701389);
__builtin_memmove((R+24),(R+4),4);
}
B70138b:{NFSU2_TR(0x70138b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x701390ull));
TAIL_STATIC(0x700fb7u,700);
}
B701390:L701390:{c.instructions+=2;NFSU2_TR(0x701390);
u8 U[9];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
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
B701394:{NFSU2_TR(0x701394);
if(r1(R+518)){{goto L70139e;}}
}
B701396:L701396:{c.instructions+=2;NFSU2_TR(0x701396);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B701397:{NFSU2_TR(0x701397);
u8 U[4];
__builtin_memmove((U+0),gp(0x8161f0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x70139dull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B70139d:L70139d:{c.instructions+=1;NFSU2_TR(0x70139d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B70139e:L70139e:{c.instructions+=4;NFSU2_TR(0x70139e);
__builtin_memmove((R+0),(R+24),4);
}
B7013a0:{NFSU2_TR(0x7013a0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B7013a1:{NFSU2_TR(0x7013a1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B7013a2:{NFSU2_TR(0x7013a2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7013a5:L7013a5:{c.instructions+=6;NFSU2_TR(0x7013a5);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7013a6:{NFSU2_TR(0x7013a6);
__builtin_memmove((R+20),(R+16),4);
}
B7013a8:{NFSU2_TR(0x7013a8);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0x4d566864ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0x4d566864ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0x4d566864ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B7013af:{NFSU2_TR(0x7013af);
__builtin_memmove((R+0),(R+518),1);
}
B7013b2:{NFSU2_TR(0x7013b2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B7013b3:{NFSU2_TR(0x7013b3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7013b4:L7013b4:{c.instructions+=4;NFSU2_TR(0x7013b4);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7013b5:{NFSU2_TR(0x7013b5);
__builtin_memmove((R+20),(R+16),4);
}
B7013b7:{NFSU2_TR(0x7013b7);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0x4d563046ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0x4d563046ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0x4d563046ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B7013be:{NFSU2_TR(0x7013be);
if(r1(R+518)){{goto L7013cd;}}
}
B7013c0:L7013c0:{c.instructions+=2;NFSU2_TR(0x7013c0);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0x4d56304bull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0x4d56304bull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0x4d56304bull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B7013c7:{NFSU2_TR(0x7013c7);
if(r1(R+518)){{goto L7013cd;}}
}
B7013c9:L7013c9:{c.instructions+=3;NFSU2_TR(0x7013c9);
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
B7013cb:{NFSU2_TR(0x7013cb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B7013cc:{NFSU2_TR(0x7013cc);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7013cd:L7013cd:{c.instructions+=3;NFSU2_TR(0x7013cd);
w1(R+0,u8(0x1ull));
}
B7013cf:{NFSU2_TR(0x7013cf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B7013d0:{NFSU2_TR(0x7013d0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7013d1:L7013d1:{c.instructions+=3;NFSU2_TR(0x7013d1);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7013d2:{NFSU2_TR(0x7013d2);
__builtin_memmove((R+20),(R+16),4);
}
B7013d4:{NFSU2_TR(0x7013d4);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B7013d6:L7013d6:{c.instructions+=3;NFSU2_TR(0x7013d6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x7c36b4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7013dc:{NFSU2_TR(0x7013dc);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
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
B7013df:{NFSU2_TR(0x7013df);
if(r1(R+518)){{goto L7013ed;}}
}
B7013e1:L7013e1:{c.instructions+=3;NFSU2_TR(0x7013e1);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B7013e4:{NFSU2_TR(0x7013e4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(U+0))<(u32(0xcull))));
}
B7013e7:{NFSU2_TR(0x7013e7);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7013d6u);}goto L7013d6;}}
}
B7013e9:L7013e9:{c.instructions+=3;NFSU2_TR(0x7013e9);
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
B7013eb:{NFSU2_TR(0x7013eb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B7013ec:{NFSU2_TR(0x7013ec);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7013ed:L7013ed:{c.instructions+=3;NFSU2_TR(0x7013ed);
w1(R+0,u8(0x1ull));
}
B7013ef:{NFSU2_TR(0x7013ef);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B7013f0:{NFSU2_TR(0x7013f0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7013f1:L7013f1:{c.instructions+=9;NFSU2_TR(0x7013f1);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7013f2:{NFSU2_TR(0x7013f2);
__builtin_memmove((R+20),(R+16),4);
}
B7013f4:{NFSU2_TR(0x7013f4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7013f7:{NFSU2_TR(0x7013f7);
u8 U[40];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
w8(U+16,u64(s64(s32(r4(R+0)))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+24,u64(s64(s32(r4(U+4)))));
w8(U+32,u64(u64(r8(U+16))*u64(r8(U+24))));
w4(R+8,u32(u64(r8(U+32))>>32));
w4(R+0,u32(r8(U+32)));
w8(U+8,u64(s64(s32(r4(R+0)))));
w1(R+512,u8((r8(U+8))!=(r8(U+32))));
}
B7013fa:{NFSU2_TR(0x7013fa);
u8 U[23];
w4(U+15,u32(u32(u32(0x10ull))&u32(u32(0x1full))));
__builtin_memmove((U+19),(R+8),4);
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+15))));
w1(U+5,u8((r4(U+15))==(u32(0x0ull))));
w4(U+6,u32(u32(r4(U+15))-u32(u32(0x1ull))));
w4(U+10,shl<u32>(r4(U+19),u64(r4(U+6))));
w1(U+14,u8(s32(r4(U+10))<s32(u32(0x0ull))));
__builtin_memmove((U+0),(U+5),1);
w1(U+1,u8(u32(r1(U+0))*u32(r1(R+512))));
w1(U+2,u8(!(r1(U+5))));
__builtin_memmove((U+3),(U+2),1);
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+14))));
w1(R+512,u8(u32(r1(U+1))|u32(r1(U+4))));
}
B7013fd:{NFSU2_TR(0x7013fd);
u8 U[27];
w4(U+19,u32(u32(u32(0x10ull))&u32(u32(0x1full))));
__builtin_memmove((U+23),(R+0),4);
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+19))));
w1(U+5,u8((r4(U+19))==(u32(0x0ull))));
w4(U+6,u32(u32(r4(U+19))-u32(u32(0x1ull))));
w4(U+10,shr<u32>(r4(U+23),u64(r4(U+6))));
w4(U+14,u32(u32(r4(U+10))&u32(u32(0x1ull))));
w1(U+18,u8((r4(U+14))!=(u32(0x0ull))));
__builtin_memmove((U+0),(U+5),1);
w1(U+1,u8(u32(r1(U+0))*u32(r1(R+512))));
w1(U+2,u8(!(r1(U+5))));
__builtin_memmove((U+3),(U+2),1);
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+18))));
w1(R+512,u8(u32(r1(U+1))|u32(r1(U+4))));
}
B701400:{NFSU2_TR(0x701400);
u8 U[16];
w4(U+0,u32(r1(R+512)));
w1(R+512,carry<u32>(r4(R+0),r4(R+8)));
w1(R+523,scarry<u32>(r4(R+0),r4(R+8)));
w4(U+4,u32(u32(r4(R+0))+u32(r4(R+8))));
w1(U+8,carry<u32>(r4(U+4),r4(U+0)));
w1(R+512,u8((r1(R+512))||(r1(U+8))));
w1(U+9,scarry<u32>(r4(U+4),r4(U+0)));
w1(R+523,u8(((r1(R+523))!=0)!=((r1(U+9))!=0)));
w4(R+0,u32(u32(r4(U+4))+u32(r4(U+0))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+10,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+14,u8(__builtin_popcountll(u64(r4(U+10)))));
w1(U+15,u8(u32(r1(U+14))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+15))==(u8(0x0ull))));
}
B701402:{NFSU2_TR(0x701402);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B701403:{NFSU2_TR(0x701403);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B701404:L701404:{c.instructions+=5;NFSU2_TR(0x701404);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B701405:{NFSU2_TR(0x701405);
__builtin_memmove((R+20),(R+16),4);
}
B701407:{NFSU2_TR(0x701407);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B701408:{NFSU2_TR(0x701408);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B701409:{NFSU2_TR(0x701409);
w4(R+4,u32(0xffffff00ull));
}
B70140e:L70140e:{c.instructions+=3;NFSU2_TR(0x70140e);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0xffffff80ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffff80ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B701411:{NFSU2_TR(0x701411);
__builtin_memmove((R+0),(R+4),4);
}
B701413:{NFSU2_TR(0x701413);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L701419;}}
}
B701415:L701415:{c.instructions+=2;NFSU2_TR(0x701415);
u8 U[4];
w4(U+0,u32(0xffffff80ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B701417:{NFSU2_TR(0x701417);
{goto L701420;}
}
B701419:L701419:{c.instructions+=2;NFSU2_TR(0x701419);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x7full)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x7full))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B70141c:{NFSU2_TR(0x70141c);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L701421;}}
}
B70141e:L70141e:{c.instructions+=1;NFSU2_TR(0x70141e);
u8 U[4];
w4(U+0,u32(0x7full));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B701420:L701420:{c.instructions+=1;NFSU2_TR(0x701420);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B701421:L701421:{c.instructions+=7;NFSU2_TR(0x701421);
__builtin_memmove((R+8),(R+4),4);
}
B701423:{NFSU2_TR(0x701423);
w1(R+0,u8(u32(r1(R+0))+u32(u8(0x80ull))));
}
B701425:{NFSU2_TR(0x701425);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0x1ffull))));
}
B70142b:{NFSU2_TR(0x70142b);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B70142c:{NFSU2_TR(0x70142c);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0xffull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B701432:{NFSU2_TR(0x701432);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8b3b40ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B701438:{NFSU2_TR(0x701438);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x70140eu);}goto L70140e;}}
}
B70143a:L70143a:{c.instructions+=10;NFSU2_TR(0x70143a);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70143b:{NFSU2_TR(0x70143b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70143c:{NFSU2_TR(0x70143c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70143d:{NFSU2_TR(0x70143d);
u8 U[4];
w4(U+0,u32(0x7ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70143f:{NFSU2_TR(0x70143f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B701440:{NFSU2_TR(0x701440);
u8 U[4];
w4(U+0,u32(0x1full));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B701442:{NFSU2_TR(0x701442);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B701443:{NFSU2_TR(0x701443);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B701445:{NFSU2_TR(0x701445);
s4(0x8b2f38,u32(0xfull));
}
B70144f:{NFSU2_TR(0x70144f);
w4(R+28,u32(0x8b2f3cull));
}
B701454:L701454:{c.instructions+=1;NFSU2_TR(0x701454);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L701456;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x701454u);}goto L701454;}
}
B701456:L701456:{c.instructions+=4;NFSU2_TR(0x701456);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B701457:{NFSU2_TR(0x701457);
u8 U[4];
w4(U+0,u32(0x2full));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B701459:{NFSU2_TR(0x701459);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B70145a:{NFSU2_TR(0x70145a);
w4(R+28,u32(0x8b2f58ull));
}
B70145f:L70145f:{c.instructions+=1;NFSU2_TR(0x70145f);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L701461;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x70145fu);}goto L70145f;}
}
B701461:L701461:{c.instructions+=4;NFSU2_TR(0x701461);
u8 U[4];
w4(U+0,u32(0x3full));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B701463:{NFSU2_TR(0x701463);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B701464:{NFSU2_TR(0x701464);
w4(R+4,u32(0x80ull));
}
B701469:{NFSU2_TR(0x701469);
w4(R+28,u32(0x8b3338ull));
}
B70146e:L70146e:{c.instructions+=1;NFSU2_TR(0x70146e);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L701470;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x70146eu);}goto L70146e;}
}
B701470:L701470:{c.instructions+=4;NFSU2_TR(0x701470);
w4(R+0,u32(0x7c36d4ull));
}
B701475:{NFSU2_TR(0x701475);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B701478:{NFSU2_TR(0x701478);
w4(R+24,u32(0xfc00ull));
}
B70147d:{NFSU2_TR(0x70147d);
{goto L701482;}
}
B70147f:L70147f:{c.instructions+=1;NFSU2_TR(0x70147f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B701482:L701482:{c.instructions+=7;NFSU2_TR(0x701482);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B701485:{NFSU2_TR(0x701485);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B701487:{NFSU2_TR(0x701487);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B70148a:{NFSU2_TR(0x70148a);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B70148c:{NFSU2_TR(0x70148c);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B70148d:{NFSU2_TR(0x70148d);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B70148f:{NFSU2_TR(0x70148f);
if(r1(R+518)){{goto L7014bc;}}
}
B701491:L701491:{c.instructions+=14;NFSU2_TR(0x701491);
u8 U[4];
w4(U+0,u32(u32(u32(0x7ull))&u32(u32(0x1full))));
w4(R+0,sar<u32>(r4(R+0),u64(r4(U+0))));
}
B701494:{NFSU2_TR(0x701494);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B701497:{NFSU2_TR(0x701497);
u8 U[4];
w4(U+0,u32(0x9ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B701499:{NFSU2_TR(0x701499);
__builtin_memmove((R+0),(R+8),4);
}
B70149b:{NFSU2_TR(0x70149b);
w4(R+0,u32(u32(r4(R+0))&u32(r4(R+24))));
}
B70149d:{NFSU2_TR(0x70149d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B70149e:{NFSU2_TR(0x70149e);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+12))));
}
B7014a0:{NFSU2_TR(0x7014a0);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B7014a3:{NFSU2_TR(0x7014a3);
w4(R+0,u32(u32(r4(R+0))|u32(r4(R+8))));
}
B7014a5:{NFSU2_TR(0x7014a5);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+28,shl<u32>(r4(R+28),u64(r1(U+0))));
}
B7014a7:{NFSU2_TR(0x7014a7);
u8 U[4];
w4(U+0,u32(u32(u32(0x6ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B7014aa:{NFSU2_TR(0x7014aa);
w4(R+0,u32(u32(r4(R+0))|u32(r4(R+12))));
}
B7014ac:{NFSU2_TR(0x7014ac);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B7014ae:{NFSU2_TR(0x7014ae);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L7014ee;}}
}
B7014b0:L7014b0:{c.instructions+=3;NFSU2_TR(0x7014b0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B7014b3:{NFSU2_TR(0x7014b3);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x8b2f38ull))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B7014ba:{NFSU2_TR(0x7014ba);
{goto L7014e8;}
}
B7014bc:L7014bc:{c.instructions+=15;NFSU2_TR(0x7014bc);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,sar<u32>(r4(R+0),u64(r4(U+0))));
}
B7014bf:{NFSU2_TR(0x7014bf);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7014c2:{NFSU2_TR(0x7014c2);
u8 U[4];
w4(U+0,u32(0xeull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7014c4:{NFSU2_TR(0x7014c4);
__builtin_memmove((R+0),(R+8),4);
}
B7014c6:{NFSU2_TR(0x7014c6);
w4(R+0,u32(u32(r4(R+0))&u32(r4(R+24))));
}
B7014c8:{NFSU2_TR(0x7014c8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B7014c9:{NFSU2_TR(0x7014c9);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+12))));
}
B7014cb:{NFSU2_TR(0x7014cb);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B7014ce:{NFSU2_TR(0x7014ce);
w4(R+0,u32(u32(r4(R+0))|u32(r4(R+8))));
}
B7014d0:{NFSU2_TR(0x7014d0);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+28,shl<u32>(r4(R+28),u64(r1(U+0))));
}
B7014d2:{NFSU2_TR(0x7014d2);
u8 U[4];
w4(U+0,u32(u32(u32(0x6ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B7014d5:{NFSU2_TR(0x7014d5);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0xfffffffaull))));
}
B7014d8:{NFSU2_TR(0x7014d8);
w4(R+0,u32(u32(r4(R+0))|u32(r4(R+12))));
}
B7014da:{NFSU2_TR(0x7014da);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B7014dc:{NFSU2_TR(0x7014dc);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L7014ee;}}
}
B7014de:L7014de:{c.instructions+=2;NFSU2_TR(0x7014de);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B7014e1:{NFSU2_TR(0x7014e1);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x8b3740ull))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B7014e8:L7014e8:{c.instructions+=2;NFSU2_TR(0x7014e8);
__builtin_memmove((R+4),(R+28),4);
}
B7014ea:{NFSU2_TR(0x7014ea);
__builtin_memmove((R+28),(R+8),4);
}
B7014ec:L7014ec:{c.instructions+=1;NFSU2_TR(0x7014ec);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L7014ee;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7014ecu);}goto L7014ec;}
}
B7014ee:L7014ee:{c.instructions+=3;NFSU2_TR(0x7014ee);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x10ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B7014f2:{NFSU2_TR(0x7014f2);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(U+8),u32(0x7c3cb4ull)));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x7c3cb4ull))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B7014f9:{NFSU2_TR(0x7014f9);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x70147fu);}goto L70147f;}}
}
B7014fb:L7014fb:{c.instructions+=3;NFSU2_TR(0x7014fb);
w4(R+0,u32(0x7c3cb4ull));
}
B701500:{NFSU2_TR(0x701500);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B701503:{NFSU2_TR(0x701503);
{goto L701508;}
}
B701505:L701505:{c.instructions+=1;NFSU2_TR(0x701505);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B701508:L701508:{c.instructions+=8;NFSU2_TR(0x701508);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B70150b:{NFSU2_TR(0x70150b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B70150d:{NFSU2_TR(0x70150d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B701510:{NFSU2_TR(0x701510);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B701512:{NFSU2_TR(0x701512);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x8ull))));
}
B701515:{NFSU2_TR(0x701515);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B701516:{NFSU2_TR(0x701516);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(r1(R+1))));
w1(R+519,u8(s8(r1(U+0))<s8(u8(0x0ull))));
}
B701518:{NFSU2_TR(0x701518);
if(r1(R+519)){{goto L701548;}}
}
B70151a:L70151a:{c.instructions+=15;NFSU2_TR(0x70151a);
u8 U[4];
w4(U+0,u32(u32(u32(0x7ull))&u32(u32(0x1full))));
w4(R+0,sar<u32>(r4(R+0),u64(r4(U+0))));
}
B70151d:{NFSU2_TR(0x70151d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B701520:{NFSU2_TR(0x701520);
u8 U[4];
w4(U+0,u32(0x11ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B701522:{NFSU2_TR(0x701522);
__builtin_memmove((R+0),(R+8),4);
}
B701524:{NFSU2_TR(0x701524);
w4(R+0,u32(u32(r4(R+0))&u32(r4(R+24))));
}
B701526:{NFSU2_TR(0x701526);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B701527:{NFSU2_TR(0x701527);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+28))));
}
B701529:{NFSU2_TR(0x701529);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B70152c:{NFSU2_TR(0x70152c);
w4(R+0,u32(u32(r4(R+0))|u32(r4(R+8))));
}
B70152e:{NFSU2_TR(0x70152e);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+12,shl<u32>(r4(R+12),u64(r1(U+0))));
}
B701530:{NFSU2_TR(0x701530);
u8 U[4];
w4(U+0,u32(u32(u32(0x6ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B701533:{NFSU2_TR(0x701533);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0xfffffff7ull))));
}
B701536:{NFSU2_TR(0x701536);
w4(R+0,u32(u32(r4(R+0))|u32(r4(R+28))));
}
B701538:{NFSU2_TR(0x701538);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B70153a:{NFSU2_TR(0x70153a);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L701578;}}
}
B70153c:L70153c:{c.instructions+=3;NFSU2_TR(0x70153c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B70153f:{NFSU2_TR(0x70153f);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x8b2a30ull))+u32(r4(U+0))));
__builtin_memmove((R+28),(U+4),4);
}
B701546:{NFSU2_TR(0x701546);
{goto L701574;}
}
B701548:L701548:{c.instructions+=15;NFSU2_TR(0x701548);
u8 U[4];
w4(U+0,u32(u32(u32(0xaull))&u32(u32(0x1full))));
w4(R+0,sar<u32>(r4(R+0),u64(r4(U+0))));
}
B70154b:{NFSU2_TR(0x70154b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70154e:{NFSU2_TR(0x70154e);
u8 U[4];
w4(U+0,u32(0xeull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B701550:{NFSU2_TR(0x701550);
__builtin_memmove((R+0),(R+8),4);
}
B701552:{NFSU2_TR(0x701552);
w4(R+0,u32(u32(r4(R+0))&u32(r4(R+24))));
}
B701554:{NFSU2_TR(0x701554);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B701555:{NFSU2_TR(0x701555);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+28))));
}
B701557:{NFSU2_TR(0x701557);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B70155a:{NFSU2_TR(0x70155a);
w4(R+0,u32(u32(r4(R+0))|u32(r4(R+8))));
}
B70155c:{NFSU2_TR(0x70155c);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+12,shl<u32>(r4(R+12),u64(r1(U+0))));
}
B70155e:{NFSU2_TR(0x70155e);
u8 U[4];
w4(U+0,u32(u32(u32(0x6ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B701561:{NFSU2_TR(0x701561);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0xfffffffaull))));
}
B701564:{NFSU2_TR(0x701564);
w4(R+0,u32(u32(r4(R+0))|u32(r4(R+28))));
}
B701566:{NFSU2_TR(0x701566);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B701568:{NFSU2_TR(0x701568);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L701578;}}
}
B70156a:L70156a:{c.instructions+=2;NFSU2_TR(0x70156a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B70156d:{NFSU2_TR(0x70156d);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x8b3740ull))+u32(r4(U+0))));
__builtin_memmove((R+28),(U+4),4);
}
B701574:L701574:{c.instructions+=1;NFSU2_TR(0x701574);
__builtin_memmove((R+4),(R+12),4);
}
B701576:L701576:{c.instructions+=1;NFSU2_TR(0x701576);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L701578;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x701576u);}goto L701576;}
}
B701578:L701578:{c.instructions+=3;NFSU2_TR(0x701578);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x10ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B70157c:{NFSU2_TR(0x70157c);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(U+8),u32(0x7c44b4ull)));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x7c44b4ull))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B701583:{NFSU2_TR(0x701583);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x701505u);}goto L701505;}}
}
B701585:L701585:{c.instructions+=4;NFSU2_TR(0x701585);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B701586:{NFSU2_TR(0x701586);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B701587:{NFSU2_TR(0x701587);
w4(R+0,u32(0x8b2e30ull));
}
B70158c:{NFSU2_TR(0x70158c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B70158d:L70158d:{c.instructions+=4;NFSU2_TR(0x70158d);
u8 U[4];
w4(U+0,u32(0x1ull));
s4(u32(r4(R+0)),r4(U+0));
}
B701593:{NFSU2_TR(0x701593);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B701596:{NFSU2_TR(0x701596);
u8 U[4];
w1(R+523,sborrow<u32>(r4(R+0),u32(0x8b2eb0ull)));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x8b2eb0ull))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B70159b:{NFSU2_TR(0x70159b);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x70158du);}goto L70158d;}}
}
B70159d:L70159d:{c.instructions+=2;NFSU2_TR(0x70159d);
w4(R+0,u32(0x8b2ef0ull));
}
B7015a2:{NFSU2_TR(0x7015a2);
w4(R+4,u32(0xfc000000ull));
}
B7015a7:L7015a7:{c.instructions+=10;NFSU2_TR(0x7015a7);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4400000ull))));
__builtin_memmove((R+8),(U+0),4);
}
B7015ad:{NFSU2_TR(0x7015ad);
w4(R+8,u32(u32(r4(R+8))|u32(u32(0x6ull))));
}
B7015b0:{NFSU2_TR(0x7015b0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xffffffc0ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7015b3:{NFSU2_TR(0x7015b3);
__builtin_memmove((R+8),(R+4),4);
}
B7015b5:{NFSU2_TR(0x7015b5);
w4(R+8,u32(u32(r4(R+8))|u32(u32(0x6ull))));
}
B7015b8:{NFSU2_TR(0x7015b8);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+0)),r4(U+0));
}
B7015ba:{NFSU2_TR(0x7015ba);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x400000ull))));
}
B7015c0:{NFSU2_TR(0x7015c0);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B7015c3:{NFSU2_TR(0x7015c3);
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
B7015c5:{NFSU2_TR(0x7015c5);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7015a7u);}goto L7015a7;}}
}
B7015c7:L7015c7:{c.instructions+=3;NFSU2_TR(0x7015c7);
s4(0x8b3738,u32(0x1ull));
}
B7015d1:{NFSU2_TR(0x7015d1);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B7015d2:{NFSU2_TR(0x7015d2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7015d3:L7015d3:{c.instructions+=4;NFSU2_TR(0x7015d3);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
s4(0x8b2f30,shl<u32>(m4(0x8b2f30),u64(r1(U+0))));
}
B7015d9:{NFSU2_TR(0x7015d9);
s4(0x8b2328,u32(u32(m4(0x8b2328))-u32(r4(R+4))));
}
B7015df:{NFSU2_TR(0x7015df);
u8 U[14];
__builtin_memmove((U+6),gp(0x8b2328),4);
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
B7015e6:{NFSU2_TR(0x7015e6);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L70160f;}}
}
B7015e8:L7015e8:{c.instructions+=9;NFSU2_TR(0x7015e8);
__builtin_memmove((R+0),gp(0x8b3d40),4);
}
B7015ed:{NFSU2_TR(0x7015ed);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+0))),2);
w4(R+0,u32(r2(U+0)));
}
B7015f0:{NFSU2_TR(0x7015f0);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7015f2:{NFSU2_TR(0x7015f2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B7015f3:{NFSU2_TR(0x7015f3);
w4(R+4,u32(u32(r4(R+4))-u32(m4(0x8b2328))));
}
B7015f9:{NFSU2_TR(0x7015f9);
s4(0x8b2328,u32(u32(m4(0x8b2328))+u32(u32(0x10ull))));
}
B701600:{NFSU2_TR(0x701600);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r1(U+0))));
}
B701602:{NFSU2_TR(0x701602);
s4(0x8b2f30,u32(u32(m4(0x8b2f30))|u32(r4(R+0))));
}
B701608:{NFSU2_TR(0x701608);
u8 U[6];
w1(R+512,carry<u32>(m4(0x8b3d40),u32(0x2ull)));
w1(R+523,scarry<u32>(m4(0x8b3d40),u32(0x2ull)));
s4(0x8b3d40,u32(u32(m4(0x8b3d40))+u32(u32(0x2ull))));
w1(R+519,u8(s32(m4(0x8b3d40))<s32(u32(0x0ull))));
w1(R+518,u8((m4(0x8b3d40))==(u32(0x0ull))));
w4(U+0,u32(u32(m4(0x8b3d40))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B70160f:L70160f:{c.instructions+=1;NFSU2_TR(0x70160f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B701610:L701610:{c.instructions+=6;NFSU2_TR(0x701610);
__builtin_memmove((R+0),gp(0x8b2f30),4);
}
B701615:{NFSU2_TR(0x701615);
u8 U[4];
w4(U+0,u32(u32(u32(0x1aull))&u32(u32(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+0))));
}
B701618:{NFSU2_TR(0x701618);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x8b2e30ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B70161f:{NFSU2_TR(0x70161f);
__builtin_memmove((R+4),(R+8),4);
}
B701621:{NFSU2_TR(0x701621);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0xffull))));
}
B701627:{NFSU2_TR(0x701627);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x70162cull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7015d3u);}goto L7015d3;}
}
B70162c:L70162c:{c.instructions+=3;NFSU2_TR(0x70162c);
__builtin_memmove((R+0),(R+8),4);
}
B70162e:{NFSU2_TR(0x70162e);
u8 U[47];
w4(U+39,u32(u32(u32(0x16ull))&u32(u32(0x1full))));
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
B701631:{NFSU2_TR(0x701631);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B701632:L701632:{c.instructions+=4;NFSU2_TR(0x701632);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B701634:{NFSU2_TR(0x701634);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+8),(U+0),4);
}
B701635:{NFSU2_TR(0x701635);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B701638:{NFSU2_TR(0x701638);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B701639:L701639:{c.instructions+=19;NFSU2_TR(0x701639);
__builtin_memmove((R+24),gp(0x81635c),4);
}
B70163f:{NFSU2_TR(0x70163f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+0)),r4(U+0));
}
B701641:{NFSU2_TR(0x701641);
__builtin_memmove((R+24),gp(0x81635c),4);
}
B701647:{NFSU2_TR(0x701647);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70164a:{NFSU2_TR(0x70164a);
__builtin_memmove((R+24),gp(0x81635c),4);
}
B701650:{NFSU2_TR(0x701650);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B701653:{NFSU2_TR(0x701653);
__builtin_memmove((R+24),gp(0x81635c),4);
}
B701659:{NFSU2_TR(0x701659);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70165c:{NFSU2_TR(0x70165c);
__builtin_memmove((R+24),gp(0x81635c),4);
}
B701662:{NFSU2_TR(0x701662);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B701665:{NFSU2_TR(0x701665);
__builtin_memmove((R+24),gp(0x81635c),4);
}
B70166b:{NFSU2_TR(0x70166b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70166e:{NFSU2_TR(0x70166e);
__builtin_memmove((R+24),gp(0x81635c),4);
}
B701674:{NFSU2_TR(0x701674);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B701677:{NFSU2_TR(0x701677);
__builtin_memmove((R+24),gp(0x81635c),4);
}
B70167d:{NFSU2_TR(0x70167d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B701680:{NFSU2_TR(0x701680);
w1(R+512,carry<u32>(r4(R+0),r4(R+4)));
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+4))));
}
B701682:{NFSU2_TR(0x701682);
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
B701683:{NFSU2_TR(0x701683);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x701639u);}goto L701639;}}
}
B701685:L701685:{c.instructions+=2;NFSU2_TR(0x701685);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B701686:{NFSU2_TR(0x701686);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B701687:L701687:{c.instructions+=6;NFSU2_TR(0x701687);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B701688:{NFSU2_TR(0x701688);
__builtin_memmove((R+20),(R+16),4);
}
B70168a:{NFSU2_TR(0x70168a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70168b:{NFSU2_TR(0x70168b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70168c:{NFSU2_TR(0x70168c);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70168e:{NFSU2_TR(0x70168e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B70168f:L70168f:{c.instructions+=36;NFSU2_TR(0x70168f);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
w4(R+28,u32(r1(U+0)));
}
B701692:{NFSU2_TR(0x701692);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+8))));
}
B701694:{NFSU2_TR(0x701694);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))&u32(u32(0x1full))));
w4(R+28,shl<u32>(r4(R+28),u64(r4(U+0))));
}
B701697:{NFSU2_TR(0x701697);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
s4(u32(r4(R+4)),r4(U+0));
}
B701699:{NFSU2_TR(0x701699);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+28,u32(r1(U+4)));
}
B70169d:{NFSU2_TR(0x70169d);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+8))));
}
B70169f:{NFSU2_TR(0x70169f);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))&u32(u32(0x1full))));
w4(R+28,shl<u32>(r4(R+28),u64(r4(U+0))));
}
B7016a2:{NFSU2_TR(0x7016a2);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7016a5:{NFSU2_TR(0x7016a5);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+28,u32(r1(U+4)));
}
B7016a9:{NFSU2_TR(0x7016a9);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+8))));
}
B7016ab:{NFSU2_TR(0x7016ab);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))&u32(u32(0x1full))));
w4(R+28,shl<u32>(r4(R+28),u64(r4(U+0))));
}
B7016ae:{NFSU2_TR(0x7016ae);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7016b1:{NFSU2_TR(0x7016b1);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+28,u32(r1(U+4)));
}
B7016b5:{NFSU2_TR(0x7016b5);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+8))));
}
B7016b7:{NFSU2_TR(0x7016b7);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))&u32(u32(0x1full))));
w4(R+28,shl<u32>(r4(R+28),u64(r4(U+0))));
}
B7016ba:{NFSU2_TR(0x7016ba);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7016bd:{NFSU2_TR(0x7016bd);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+28,u32(r1(U+4)));
}
B7016c1:{NFSU2_TR(0x7016c1);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+8))));
}
B7016c3:{NFSU2_TR(0x7016c3);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))&u32(u32(0x1full))));
w4(R+28,shl<u32>(r4(R+28),u64(r4(U+0))));
}
B7016c6:{NFSU2_TR(0x7016c6);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7016c9:{NFSU2_TR(0x7016c9);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x5ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+28,u32(r1(U+4)));
}
B7016cd:{NFSU2_TR(0x7016cd);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+8))));
}
B7016cf:{NFSU2_TR(0x7016cf);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))&u32(u32(0x1full))));
w4(R+28,shl<u32>(r4(R+28),u64(r4(U+0))));
}
B7016d2:{NFSU2_TR(0x7016d2);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7016d5:{NFSU2_TR(0x7016d5);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+28,u32(r1(U+4)));
}
B7016d9:{NFSU2_TR(0x7016d9);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+8))));
}
B7016db:{NFSU2_TR(0x7016db);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))&u32(u32(0x1full))));
w4(R+28,shl<u32>(r4(R+28),u64(r4(U+0))));
}
B7016de:{NFSU2_TR(0x7016de);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7016e1:{NFSU2_TR(0x7016e1);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x7ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+28,u32(r1(U+4)));
}
B7016e5:{NFSU2_TR(0x7016e5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))+u32(r4(U+4))));
}
B7016e8:{NFSU2_TR(0x7016e8);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+8))));
}
B7016ea:{NFSU2_TR(0x7016ea);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))&u32(u32(0x1full))));
w4(R+28,shl<u32>(r4(R+28),u64(r4(U+0))));
}
B7016ed:{NFSU2_TR(0x7016ed);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7016f0:{NFSU2_TR(0x7016f0);
w1(R+512,carry<u32>(r4(R+4),u32(0x40ull)));
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x40ull))));
}
B7016f3:{NFSU2_TR(0x7016f3);
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
B7016f4:{NFSU2_TR(0x7016f4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x70168fu);}goto L70168f;}}
}
B7016f6:L7016f6:{c.instructions+=4;NFSU2_TR(0x7016f6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B7016f7:{NFSU2_TR(0x7016f7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B7016f8:{NFSU2_TR(0x7016f8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B7016f9:{NFSU2_TR(0x7016f9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7016fa:L7016fa:{c.instructions+=6;NFSU2_TR(0x7016fa);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7016fb:{NFSU2_TR(0x7016fb);
__builtin_memmove((R+20),(R+16),4);
}
B7016fd:{NFSU2_TR(0x7016fd);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7016fe:{NFSU2_TR(0x7016fe);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7016ff:{NFSU2_TR(0x7016ff);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B701701:{NFSU2_TR(0x701701);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B701702:L701702:{c.instructions+=36;NFSU2_TR(0x701702);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
w4(R+28,u32(r1(U+0)));
}
B701705:{NFSU2_TR(0x701705);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+8))));
}
B701707:{NFSU2_TR(0x701707);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))&u32(u32(0x1full))));
w4(R+28,shl<u32>(r4(R+28),u64(r4(U+0))));
}
B70170a:{NFSU2_TR(0x70170a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
s4(u32(r4(R+4)),r4(U+0));
}
B70170c:{NFSU2_TR(0x70170c);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+28,u32(r1(U+4)));
}
B701710:{NFSU2_TR(0x701710);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+8))));
}
B701712:{NFSU2_TR(0x701712);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))&u32(u32(0x1full))));
w4(R+28,shl<u32>(r4(R+28),u64(r4(U+0))));
}
B701715:{NFSU2_TR(0x701715);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B701718:{NFSU2_TR(0x701718);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+28,u32(r1(U+4)));
}
B70171c:{NFSU2_TR(0x70171c);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+8))));
}
B70171e:{NFSU2_TR(0x70171e);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))&u32(u32(0x1full))));
w4(R+28,shl<u32>(r4(R+28),u64(r4(U+0))));
}
B701721:{NFSU2_TR(0x701721);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B701724:{NFSU2_TR(0x701724);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+28,u32(r1(U+4)));
}
B701728:{NFSU2_TR(0x701728);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+8))));
}
B70172a:{NFSU2_TR(0x70172a);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))&u32(u32(0x1full))));
w4(R+28,shl<u32>(r4(R+28),u64(r4(U+0))));
}
B70172d:{NFSU2_TR(0x70172d);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B701730:{NFSU2_TR(0x701730);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+28,u32(r1(U+4)));
}
B701734:{NFSU2_TR(0x701734);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+8))));
}
B701736:{NFSU2_TR(0x701736);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))&u32(u32(0x1full))));
w4(R+28,shl<u32>(r4(R+28),u64(r4(U+0))));
}
B701739:{NFSU2_TR(0x701739);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70173c:{NFSU2_TR(0x70173c);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x5ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+28,u32(r1(U+4)));
}
B701740:{NFSU2_TR(0x701740);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+8))));
}
B701742:{NFSU2_TR(0x701742);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))&u32(u32(0x1full))));
w4(R+28,shl<u32>(r4(R+28),u64(r4(U+0))));
}
B701745:{NFSU2_TR(0x701745);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B701748:{NFSU2_TR(0x701748);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+28,u32(r1(U+4)));
}
B70174c:{NFSU2_TR(0x70174c);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+8))));
}
B70174e:{NFSU2_TR(0x70174e);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))&u32(u32(0x1full))));
w4(R+28,shl<u32>(r4(R+28),u64(r4(U+0))));
}
B701751:{NFSU2_TR(0x701751);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B701754:{NFSU2_TR(0x701754);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x7ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+28,u32(r1(U+4)));
}
B701758:{NFSU2_TR(0x701758);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))+u32(r4(U+4))));
}
B70175b:{NFSU2_TR(0x70175b);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+8))));
}
B70175d:{NFSU2_TR(0x70175d);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))&u32(u32(0x1full))));
w4(R+28,shl<u32>(r4(R+28),u64(r4(U+0))));
}
B701760:{NFSU2_TR(0x701760);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B701763:{NFSU2_TR(0x701763);
w1(R+512,carry<u32>(r4(R+4),u32(0x20ull)));
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x20ull))));
}
B701766:{NFSU2_TR(0x701766);
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
B701767:{NFSU2_TR(0x701767);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x701702u);}goto L701702;}}
}
B701769:L701769:{c.instructions+=4;NFSU2_TR(0x701769);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B70176a:{NFSU2_TR(0x70176a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B70176b:{NFSU2_TR(0x70176b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B70176c:{NFSU2_TR(0x70176c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B70176d:L70176d:{c.instructions+=8;NFSU2_TR(0x70176d);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70176e:{NFSU2_TR(0x70176e);
__builtin_memmove((R+20),(R+16),4);
}
B701770:{NFSU2_TR(0x701770);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B701771:{NFSU2_TR(0x701771);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B701772:{NFSU2_TR(0x701772);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B701774:{NFSU2_TR(0x701774);
__builtin_memmove((R+24),(R+0),4);
}
B701776:{NFSU2_TR(0x701776);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B701777:{NFSU2_TR(0x701777);
w4(R+0,u32(0x1ffull));
}
B70177c:L70177c:{c.instructions+=84;NFSU2_TR(0x70177c);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B70177e:{NFSU2_TR(0x70177e);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+8),(U+4),2);
}
B701782:{NFSU2_TR(0x701782);
w4(R+8,u32(u32(r4(R+8))&u32(r4(R+0))));
}
B701784:{NFSU2_TR(0x701784);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8b3b40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B70178a:{NFSU2_TR(0x70178a);
u8 U[1];
__builtin_memmove((U+0),(R+8),1);
s1(u32(r4(R+24)),r1(U+0));
}
B70178c:{NFSU2_TR(0x70178c);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B70178e:{NFSU2_TR(0x70178e);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+8),(U+4),2);
}
B701792:{NFSU2_TR(0x701792);
w4(R+8,u32(u32(r4(R+8))&u32(r4(R+0))));
}
B701794:{NFSU2_TR(0x701794);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8b3b40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B70179a:{NFSU2_TR(0x70179a);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B70179d:{NFSU2_TR(0x70179d);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B70179f:{NFSU2_TR(0x70179f);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xaull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+8),(U+4),2);
}
B7017a3:{NFSU2_TR(0x7017a3);
w4(R+8,u32(u32(r4(R+8))&u32(r4(R+0))));
}
B7017a5:{NFSU2_TR(0x7017a5);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8b3b40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B7017ab:{NFSU2_TR(0x7017ab);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B7017ae:{NFSU2_TR(0x7017ae);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B7017b0:{NFSU2_TR(0x7017b0);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xeull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+8),(U+4),2);
}
B7017b4:{NFSU2_TR(0x7017b4);
w4(R+8,u32(u32(r4(R+8))&u32(r4(R+0))));
}
B7017b6:{NFSU2_TR(0x7017b6);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8b3b40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B7017bc:{NFSU2_TR(0x7017bc);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B7017bf:{NFSU2_TR(0x7017bf);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B7017c1:{NFSU2_TR(0x7017c1);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x12ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+8),(U+4),2);
}
B7017c5:{NFSU2_TR(0x7017c5);
w4(R+8,u32(u32(r4(R+8))&u32(r4(R+0))));
}
B7017c7:{NFSU2_TR(0x7017c7);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8b3b40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B7017cd:{NFSU2_TR(0x7017cd);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B7017d0:{NFSU2_TR(0x7017d0);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B7017d2:{NFSU2_TR(0x7017d2);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x16ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+8),(U+4),2);
}
B7017d6:{NFSU2_TR(0x7017d6);
w4(R+8,u32(u32(r4(R+8))&u32(r4(R+0))));
}
B7017d8:{NFSU2_TR(0x7017d8);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8b3b40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B7017de:{NFSU2_TR(0x7017de);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B7017e1:{NFSU2_TR(0x7017e1);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B7017e3:{NFSU2_TR(0x7017e3);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1aull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+8),(U+4),2);
}
B7017e7:{NFSU2_TR(0x7017e7);
w4(R+8,u32(u32(r4(R+8))&u32(r4(R+0))));
}
B7017e9:{NFSU2_TR(0x7017e9);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8b3b40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B7017ef:{NFSU2_TR(0x7017ef);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B7017f2:{NFSU2_TR(0x7017f2);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B7017f4:{NFSU2_TR(0x7017f4);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1eull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+8),(U+4),2);
}
B7017f8:{NFSU2_TR(0x7017f8);
w4(R+8,u32(u32(r4(R+8))&u32(r4(R+0))));
}
B7017fa:{NFSU2_TR(0x7017fa);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8b3b40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B701800:{NFSU2_TR(0x701800);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B701803:{NFSU2_TR(0x701803);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B701805:{NFSU2_TR(0x701805);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x22ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+8),(U+4),2);
}
B701809:{NFSU2_TR(0x701809);
w4(R+8,u32(u32(r4(R+8))&u32(r4(R+0))));
}
B70180b:{NFSU2_TR(0x70180b);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8b3b40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B701811:{NFSU2_TR(0x701811);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B701814:{NFSU2_TR(0x701814);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B701816:{NFSU2_TR(0x701816);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x26ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+8),(U+4),2);
}
B70181a:{NFSU2_TR(0x70181a);
w4(R+8,u32(u32(r4(R+8))&u32(r4(R+0))));
}
B70181c:{NFSU2_TR(0x70181c);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8b3b40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B701822:{NFSU2_TR(0x701822);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x9ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B701825:{NFSU2_TR(0x701825);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B701827:{NFSU2_TR(0x701827);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2aull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+8),(U+4),2);
}
B70182b:{NFSU2_TR(0x70182b);
w4(R+8,u32(u32(r4(R+8))&u32(r4(R+0))));
}
B70182d:{NFSU2_TR(0x70182d);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8b3b40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B701833:{NFSU2_TR(0x701833);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xaull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B701836:{NFSU2_TR(0x701836);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B701838:{NFSU2_TR(0x701838);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2eull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+8),(U+4),2);
}
B70183c:{NFSU2_TR(0x70183c);
w4(R+8,u32(u32(r4(R+8))&u32(r4(R+0))));
}
B70183e:{NFSU2_TR(0x70183e);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8b3b40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B701844:{NFSU2_TR(0x701844);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xbull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B701847:{NFSU2_TR(0x701847);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B701849:{NFSU2_TR(0x701849);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x32ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+8),(U+4),2);
}
B70184d:{NFSU2_TR(0x70184d);
w4(R+8,u32(u32(r4(R+8))&u32(r4(R+0))));
}
B70184f:{NFSU2_TR(0x70184f);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8b3b40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B701855:{NFSU2_TR(0x701855);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B701858:{NFSU2_TR(0x701858);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B70185a:{NFSU2_TR(0x70185a);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x36ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+8),(U+4),2);
}
B70185e:{NFSU2_TR(0x70185e);
w4(R+8,u32(u32(r4(R+8))&u32(r4(R+0))));
}
B701860:{NFSU2_TR(0x701860);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8b3b40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B701866:{NFSU2_TR(0x701866);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xdull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B701869:{NFSU2_TR(0x701869);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B70186b:{NFSU2_TR(0x70186b);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x3aull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+8),(U+4),2);
}
B70186f:{NFSU2_TR(0x70186f);
w4(R+8,u32(u32(r4(R+8))&u32(r4(R+0))));
}
B701871:{NFSU2_TR(0x701871);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8b3b40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B701877:{NFSU2_TR(0x701877);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xeull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B70187a:{NFSU2_TR(0x70187a);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B70187c:{NFSU2_TR(0x70187c);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x3eull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+8),(U+4),2);
}
B701880:{NFSU2_TR(0x701880);
w4(R+8,u32(u32(r4(R+8))&u32(r4(R+0))));
}
B701882:{NFSU2_TR(0x701882);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8b3b40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B701888:{NFSU2_TR(0x701888);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B70188b:{NFSU2_TR(0x70188b);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x40ull))));
}
B70188e:{NFSU2_TR(0x70188e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+512,carry<u32>(r4(R+24),r4(U+4)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+24,u32(u32(r4(R+24))+u32(r4(U+4))));
}
B701891:{NFSU2_TR(0x701891);
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
B701892:{NFSU2_TR(0x701892);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x70177cu);}goto L70177c;}}
}
B701898:L701898:{c.instructions+=4;NFSU2_TR(0x701898);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B701899:{NFSU2_TR(0x701899);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B70189a:{NFSU2_TR(0x70189a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B70189b:{NFSU2_TR(0x70189b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B70189c:L70189c:{c.instructions+=8;NFSU2_TR(0x70189c);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70189d:{NFSU2_TR(0x70189d);
__builtin_memmove((R+20),(R+16),4);
}
B70189f:{NFSU2_TR(0x70189f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7018a0:{NFSU2_TR(0x7018a0);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7018a1:{NFSU2_TR(0x7018a1);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7018a3:{NFSU2_TR(0x7018a3);
__builtin_memmove((R+24),(R+0),4);
}
B7018a5:{NFSU2_TR(0x7018a5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B7018a6:{NFSU2_TR(0x7018a6);
w4(R+0,u32(0x1ffull));
}
B7018ab:L7018ab:{c.instructions+=44;NFSU2_TR(0x7018ab);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B7018ad:{NFSU2_TR(0x7018ad);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+8),(U+4),2);
}
B7018b1:{NFSU2_TR(0x7018b1);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x20ull))));
}
B7018b4:{NFSU2_TR(0x7018b4);
w4(R+8,u32(u32(r4(R+8))&u32(r4(R+0))));
}
B7018b6:{NFSU2_TR(0x7018b6);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8b3b40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B7018bc:{NFSU2_TR(0x7018bc);
u8 U[1];
__builtin_memmove((U+0),(R+8),1);
s1(u32(r4(R+24)),r1(U+0));
}
B7018be:{NFSU2_TR(0x7018be);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B7018c0:{NFSU2_TR(0x7018c0);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xffffffe6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+8),(U+4),2);
}
B7018c4:{NFSU2_TR(0x7018c4);
w4(R+8,u32(u32(r4(R+8))&u32(r4(R+0))));
}
B7018c6:{NFSU2_TR(0x7018c6);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8b3b40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B7018cc:{NFSU2_TR(0x7018cc);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B7018cf:{NFSU2_TR(0x7018cf);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B7018d1:{NFSU2_TR(0x7018d1);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xffffffeaull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+8),(U+4),2);
}
B7018d5:{NFSU2_TR(0x7018d5);
w4(R+8,u32(u32(r4(R+8))&u32(r4(R+0))));
}
B7018d7:{NFSU2_TR(0x7018d7);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8b3b40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B7018dd:{NFSU2_TR(0x7018dd);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B7018e0:{NFSU2_TR(0x7018e0);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B7018e2:{NFSU2_TR(0x7018e2);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xffffffeeull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+8),(U+4),2);
}
B7018e6:{NFSU2_TR(0x7018e6);
w4(R+8,u32(u32(r4(R+8))&u32(r4(R+0))));
}
B7018e8:{NFSU2_TR(0x7018e8);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8b3b40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B7018ee:{NFSU2_TR(0x7018ee);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B7018f1:{NFSU2_TR(0x7018f1);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B7018f3:{NFSU2_TR(0x7018f3);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xfffffff2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+8),(U+4),2);
}
B7018f7:{NFSU2_TR(0x7018f7);
w4(R+8,u32(u32(r4(R+8))&u32(r4(R+0))));
}
B7018f9:{NFSU2_TR(0x7018f9);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8b3b40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B7018ff:{NFSU2_TR(0x7018ff);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B701902:{NFSU2_TR(0x701902);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B701904:{NFSU2_TR(0x701904);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xfffffff6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+8),(U+4),2);
}
B701908:{NFSU2_TR(0x701908);
w4(R+8,u32(u32(r4(R+8))&u32(r4(R+0))));
}
B70190a:{NFSU2_TR(0x70190a);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8b3b40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B701910:{NFSU2_TR(0x701910);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B701913:{NFSU2_TR(0x701913);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B701915:{NFSU2_TR(0x701915);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xfffffffaull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+8),(U+4),2);
}
B701919:{NFSU2_TR(0x701919);
w4(R+8,u32(u32(r4(R+8))&u32(r4(R+0))));
}
B70191b:{NFSU2_TR(0x70191b);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8b3b40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B701921:{NFSU2_TR(0x701921);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B701924:{NFSU2_TR(0x701924);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B701926:{NFSU2_TR(0x701926);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xfffffffeull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+8),(U+4),2);
}
B70192a:{NFSU2_TR(0x70192a);
w4(R+8,u32(u32(r4(R+8))&u32(r4(R+0))));
}
B70192c:{NFSU2_TR(0x70192c);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8b3b40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B701932:{NFSU2_TR(0x701932);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B701935:{NFSU2_TR(0x701935);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+512,carry<u32>(r4(R+24),r4(U+4)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+24,u32(u32(r4(R+24))+u32(r4(U+4))));
}
B701938:{NFSU2_TR(0x701938);
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
B701939:{NFSU2_TR(0x701939);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7018abu);}goto L7018ab;}}
}
B70193f:L70193f:{c.instructions+=4;NFSU2_TR(0x70193f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B701940:{NFSU2_TR(0x701940);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B701941:{NFSU2_TR(0x701941);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B701942:{NFSU2_TR(0x701942);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B701943:L701943:{c.instructions+=4;NFSU2_TR(0x701943);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B701944:{NFSU2_TR(0x701944);
__builtin_memmove((R+20),(R+16),4);
}
B701946:{NFSU2_TR(0x701946);
u8 U[8];
__builtin_memmove((U+0),gp(0x8b3738),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B70194d:{NFSU2_TR(0x70194d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L701954;}}
}
B70194f:L70194f:{c.instructions+=1;NFSU2_TR(0x70194f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x701954ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x701404u);}goto L701404;}
}
B701954:L701954:{c.instructions+=19;NFSU2_TR(0x701954);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B701957:{NFSU2_TR(0x701957);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+0))),2);
w4(R+4,u32(r2(U+0)));
}
B70195a:{NFSU2_TR(0x70195a);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(r2(U+4)));
}
B70195e:{NFSU2_TR(0x70195e);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B701961:{NFSU2_TR(0x701961);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B701964:{NFSU2_TR(0x701964);
__builtin_memmove(gp(0x8b3d40),(R+0),4);
}
B701969:{NFSU2_TR(0x701969);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B70196c:{NFSU2_TR(0x70196c);
w4(R+4,u32(u32(r4(R+4))|u32(r4(R+8))));
}
B70196e:{NFSU2_TR(0x70196e);
__builtin_memmove(gp(0x8b2f30),(R+4),4);
}
B701974:{NFSU2_TR(0x701974);
s4(0x8b2328,u32(0x20ull));
}
B70197e:{NFSU2_TR(0x70197e);
__builtin_memmove(gp(0x8b373c),(R+0),4);
}
B701983:{NFSU2_TR(0x701983);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
w4(U+4,u32(0x80000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B70198a:{NFSU2_TR(0x70198a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B70198d:{NFSU2_TR(0x70198d);
u8 U[32];
w8(U+8,u64(s64(s32(r4(R+0)))));
w8(U+16,u64(s64(s32(m4(0x81645c)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+8,u32(u64(r8(U+24))>>32));
w4(R+0,u32(r8(U+24)));
w8(U+0,u64(s64(s32(r4(R+0)))));
w1(R+512,u8((r8(U+0))!=(r8(U+24))));
}
B701993:{NFSU2_TR(0x701993);
u8 U[23];
w4(U+15,u32(u32(u32(0x10ull))&u32(u32(0x1full))));
__builtin_memmove((U+19),(R+8),4);
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+15))));
w1(U+5,u8((r4(U+15))==(u32(0x0ull))));
w4(U+6,u32(u32(r4(U+15))-u32(u32(0x1ull))));
w4(U+10,shl<u32>(r4(U+19),u64(r4(U+6))));
w1(U+14,u8(s32(r4(U+10))<s32(u32(0x0ull))));
__builtin_memmove((U+0),(U+5),1);
w1(U+1,u8(u32(r1(U+0))*u32(r1(R+512))));
w1(U+2,u8(!(r1(U+5))));
__builtin_memmove((U+3),(U+2),1);
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+14))));
w1(R+512,u8(u32(r1(U+1))|u32(r1(U+4))));
}
B701996:{NFSU2_TR(0x701996);
u8 U[27];
w4(U+19,u32(u32(u32(0x10ull))&u32(u32(0x1full))));
__builtin_memmove((U+23),(R+0),4);
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+19))));
w1(U+5,u8((r4(U+19))==(u32(0x0ull))));
w4(U+6,u32(u32(r4(U+19))-u32(u32(0x1ull))));
w4(U+10,shr<u32>(r4(U+23),u64(r4(U+6))));
w4(U+14,u32(u32(r4(U+10))&u32(u32(0x1ull))));
w1(U+18,u8((r4(U+14))!=(u32(0x0ull))));
__builtin_memmove((U+0),(U+5),1);
w1(U+1,u8(u32(r1(U+0))*u32(r1(R+512))));
w1(U+2,u8(!(r1(U+5))));
__builtin_memmove((U+3),(U+2),1);
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+18))));
w1(R+512,u8(u32(r1(U+1))|u32(r1(U+4))));
}
B701999:{NFSU2_TR(0x701999);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+0))+u32(r4(R+8))));
w4(R+0,u32(u32(r4(U+4))+u32(r4(U+0))));
}
B70199b:{NFSU2_TR(0x70199b);
__builtin_memmove(gp(0x8b2730),(R+0),4);
}
B7019a0:{NFSU2_TR(0x7019a0);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B7019a2:L7019a2:{c.instructions+=15;NFSU2_TR(0x7019a2);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x816460ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7019a8:{NFSU2_TR(0x7019a8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7019ab:{NFSU2_TR(0x7019ab);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x7c44b4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7019b1:{NFSU2_TR(0x7019b1);
u8 U[32];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
w8(U+8,u64(s64(s32(r4(R+0)))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+16,u64(s64(s32(r4(U+4)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+0,u32(r8(U+24)));
}
B7019b5:{NFSU2_TR(0x7019b5);
u8 U[4];
w4(U+0,u32(u32(u32(0xdull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B7019b8:{NFSU2_TR(0x7019b8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7019bb:{NFSU2_TR(0x7019bb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7019be:{NFSU2_TR(0x7019be);
u8 U[40];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
w8(U+16,u64(s64(s32(r4(R+0)))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+24,u64(s64(s32(r4(U+4)))));
w8(U+32,u64(u64(r8(U+16))*u64(r8(U+24))));
w4(R+8,u32(u64(r8(U+32))>>32));
w4(R+0,u32(r8(U+32)));
w8(U+8,u64(s64(s32(r4(R+0)))));
w1(R+512,u8((r8(U+8))!=(r8(U+32))));
}
B7019c1:{NFSU2_TR(0x7019c1);
u8 U[23];
w4(U+15,u32(u32(u32(0x10ull))&u32(u32(0x1full))));
__builtin_memmove((U+19),(R+8),4);
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+15))));
w1(U+5,u8((r4(U+15))==(u32(0x0ull))));
w4(U+6,u32(u32(r4(U+15))-u32(u32(0x1ull))));
w4(U+10,shl<u32>(r4(U+19),u64(r4(U+6))));
w1(U+14,u8(s32(r4(U+10))<s32(u32(0x0ull))));
__builtin_memmove((U+0),(U+5),1);
w1(U+1,u8(u32(r1(U+0))*u32(r1(R+512))));
w1(U+2,u8(!(r1(U+5))));
__builtin_memmove((U+3),(U+2),1);
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+14))));
w1(R+512,u8(u32(r1(U+1))|u32(r1(U+4))));
}
B7019c4:{NFSU2_TR(0x7019c4);
u8 U[27];
w4(U+19,u32(u32(u32(0x10ull))&u32(u32(0x1full))));
__builtin_memmove((U+23),(R+0),4);
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+19))));
w1(U+5,u8((r4(U+19))==(u32(0x0ull))));
w4(U+6,u32(u32(r4(U+19))-u32(u32(0x1ull))));
w4(U+10,shr<u32>(r4(U+23),u64(r4(U+6))));
w4(U+14,u32(u32(r4(U+10))&u32(u32(0x1ull))));
w1(U+18,u8((r4(U+14))!=(u32(0x0ull))));
__builtin_memmove((U+0),(U+5),1);
w1(U+1,u8(u32(r1(U+0))*u32(r1(R+512))));
w1(U+2,u8(!(r1(U+5))));
__builtin_memmove((U+3),(U+2),1);
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+18))));
w1(R+512,u8(u32(r1(U+1))|u32(r1(U+4))));
}
B7019c7:{NFSU2_TR(0x7019c7);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+0))+u32(r4(R+8))));
w4(R+0,u32(u32(r4(U+4))+u32(r4(U+0))));
}
B7019c9:{NFSU2_TR(0x7019c9);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8b2734ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7019cf:{NFSU2_TR(0x7019cf);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4ull))));
}
B7019d2:{NFSU2_TR(0x7019d2);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
w1(R+512,u8((r4(U+6))<(u32(0xfcull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0xfcull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0xfcull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B7019d8:{NFSU2_TR(0x7019d8);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7019a2u);}goto L7019a2;}}
}
B7019da:L7019da:{c.instructions+=2;NFSU2_TR(0x7019da);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B7019db:{NFSU2_TR(0x7019db);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7019dc:L7019dc:{c.instructions+=13;NFSU2_TR(0x7019dc);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7019dd:{NFSU2_TR(0x7019dd);
__builtin_memmove((R+20),(R+16),4);
}
B7019df:{NFSU2_TR(0x7019df);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7019e0:{NFSU2_TR(0x7019e0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7019e1:{NFSU2_TR(0x7019e1);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7019e2:{NFSU2_TR(0x7019e2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B7019e5:{NFSU2_TR(0x7019e5);
__builtin_memmove((R+0),(R+24),4);
}
B7019e7:{NFSU2_TR(0x7019e7);
w4(R+0,sar<u32>(r4(R+0),u64(u32(0x1ull))));
}
B7019e9:{NFSU2_TR(0x7019e9);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B7019eb:{NFSU2_TR(0x7019eb);
u8 U[8];
__builtin_memmove((U+0),gp(0x8b373c),4);
w4(U+4,u32(u32(r4(U+0))-u32(r4(R+4))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B7019f1:{NFSU2_TR(0x7019f1);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7019f2:{NFSU2_TR(0x7019f2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7019f5:{NFSU2_TR(0x7019f5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L7019ff;}}
}
B7019f7:L7019f7:{c.instructions+=1;NFSU2_TR(0x7019f7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7019fa:L7019fa:{c.instructions+=2;NFSU2_TR(0x7019fa);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B7019fd:{NFSU2_TR(0x7019fd);
{goto L701a66;}
}
B7019ff:L7019ff:{c.instructions+=3;NFSU2_TR(0x7019ff);
__builtin_memmove((R+0),gp(0x8b2f30),4);
}
B701a04:{NFSU2_TR(0x701a04);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xc0000000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B701a09:{NFSU2_TR(0x701a09);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L701a18;}}
}
B701a0b:L701a0b:{c.instructions+=4;NFSU2_TR(0x701a0b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B701a0e:{NFSU2_TR(0x701a0e);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B701a10:{NFSU2_TR(0x701a10);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B701a11:{NFSU2_TR(0x701a11);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x701a16ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7015d3u);}goto L7015d3;}
}
B701a16:L701a16:{c.instructions+=1;NFSU2_TR(0x701a16);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7019fau);}goto L7019fa;}
}
B701a18:L701a18:{c.instructions+=2;NFSU2_TR(0x701a18);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B701a1a:{NFSU2_TR(0x701a1a);
u8 U[1];
w1(U+0,u8(!(r1(R+519))));
if(r1(U+0)){{goto L701a28;}}
}
B701a1c:L701a1c:{c.instructions+=4;NFSU2_TR(0x701a1c);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B701a1e:{NFSU2_TR(0x701a1e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w4(U+4,u32(0x3ffull));
s4(u32(r4(U+0)),r4(U+4));
}
B701a25:{NFSU2_TR(0x701a25);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B701a26:{NFSU2_TR(0x701a26);
{goto L701a35;}
}
B701a28:L701a28:{c.instructions+=4;NFSU2_TR(0x701a28);
w4(R+0,u32(m1(0x8b2f33)));
}
B701a2f:{NFSU2_TR(0x701a2f);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B701a31:{NFSU2_TR(0x701a31);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B701a34:{NFSU2_TR(0x701a34);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B701a35:L701a35:{c.instructions+=1;NFSU2_TR(0x701a35);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x701a3aull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7015d3u);}goto L7015d3;}
}
B701a3a:L701a3a:{c.instructions+=1;NFSU2_TR(0x701a3a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x701a3full));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x701610u);}goto L701610;}
}
B701a3f:L701a3f:{c.instructions+=2;NFSU2_TR(0x701a3f);
__builtin_memmove((R+24),(R+0),4);
}
B701a41:{NFSU2_TR(0x701a41);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x701a46ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x701610u);}goto L701610;}
}
B701a46:L701a46:{c.instructions+=12;NFSU2_TR(0x701a46);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B701a49:{NFSU2_TR(0x701a49);
__builtin_memmove((R+4),(R+0),4);
}
B701a4b:{NFSU2_TR(0x701a4b);
u8 U[32];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
w8(U+8,u64(s64(s32(r4(R+4)))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+16,u64(s64(s32(r4(U+4)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+4,u32(r8(U+24)));
}
B701a4f:{NFSU2_TR(0x701a4f);
w4(R+0,sar<u32>(r4(R+0),u64(u32(0x1ull))));
}
B701a51:{NFSU2_TR(0x701a51);
u8 U[32];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
w8(U+8,u64(s64(s32(r4(R+0)))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+16,u64(s64(s32(r4(U+4)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+0,u32(r8(U+24)));
}
B701a55:{NFSU2_TR(0x701a55);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+24))));
}
B701a57:{NFSU2_TR(0x701a57);
w4(R+24,sar<u32>(r4(R+24),u64(u32(0x1ull))));
}
B701a59:{NFSU2_TR(0x701a59);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+24))));
}
B701a5b:{NFSU2_TR(0x701a5b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+0))));
s4(u32(r4(U+0)),r4(U+4));
}
B701a5e:{NFSU2_TR(0x701a5e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B701a61:{NFSU2_TR(0x701a61);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+4))));
}
B701a63:{NFSU2_TR(0x701a63);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+0))));
s4(u32(r4(U+0)),r4(U+4));
}
B701a66:L701a66:{c.instructions+=2;NFSU2_TR(0x701a66);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B701a6a:{NFSU2_TR(0x701a6a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L701a92;}}
}
B701a6c:L701a6c:{c.instructions+=1;NFSU2_TR(0x701a6c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x701a71ull));
TAIL_STATIC(0x702040u,702);
}
B701a71:L701a71:{c.instructions+=3;NFSU2_TR(0x701a71);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B701a74:{NFSU2_TR(0x701a74);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B701a76:{NFSU2_TR(0x701a76);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L701a85;}}
}
B701a78:L701a78:{c.instructions+=3;NFSU2_TR(0x701a78);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B701a79:{NFSU2_TR(0x701a79);
w4(R+0,u32(0x8b2330ull));
}
B701a7e:{NFSU2_TR(0x701a7e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x701a83ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x701632u);}goto L701632;}
}
B701a83:L701a83:{c.instructions+=1;NFSU2_TR(0x701a83);
{goto L701aa9;}
}
B701a85:L701a85:{c.instructions+=2;NFSU2_TR(0x701a85);
u8 U[4];
w4(U+0,u32(0x8b2330ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B701a8a:{NFSU2_TR(0x701a8a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x701a8full));
{goto L701ea7;}
}
B701a8f:L701a8f:{c.instructions+=2;NFSU2_TR(0x701a8f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B701a90:{NFSU2_TR(0x701a90);
{goto L701aa8;}
}
B701a92:L701a92:{c.instructions+=1;NFSU2_TR(0x701a92);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x701a97ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x701610u);}goto L701610;}
}
B701a97:L701a97:{c.instructions+=5;NFSU2_TR(0x701a97);
u8 U[12];
w4(U+0,u32(u32(u32(0xffffff80ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+8),(U+8),4);
}
B701a9b:{NFSU2_TR(0x701a9b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B701a9c:{NFSU2_TR(0x701a9c);
w4(R+4,u32(0x8b2330ull));
}
B701aa1:{NFSU2_TR(0x701aa1);
__builtin_memmove((R+0),(R+28),4);
}
B701aa3:{NFSU2_TR(0x701aa3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x701aa8ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x701687u);}goto L701687;}
}
B701aa8:L701aa8:{c.instructions+=1;NFSU2_TR(0x701aa8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B701aa9:L701aa9:{c.instructions+=2;NFSU2_TR(0x701aa9);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x2ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B701aad:{NFSU2_TR(0x701aad);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L701ad5;}}
}
B701aaf:L701aaf:{c.instructions+=1;NFSU2_TR(0x701aaf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x701ab4ull));
TAIL_STATIC(0x702040u,702);
}
B701ab4:L701ab4:{c.instructions+=3;NFSU2_TR(0x701ab4);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B701ab7:{NFSU2_TR(0x701ab7);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B701ab9:{NFSU2_TR(0x701ab9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L701ac8;}}
}
B701abb:L701abb:{c.instructions+=3;NFSU2_TR(0x701abb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B701abc:{NFSU2_TR(0x701abc);
w4(R+0,u32(0x8b2350ull));
}
B701ac1:{NFSU2_TR(0x701ac1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x701ac6ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x701632u);}goto L701632;}
}
B701ac6:L701ac6:{c.instructions+=1;NFSU2_TR(0x701ac6);
{goto L701aed;}
}
B701ac8:L701ac8:{c.instructions+=2;NFSU2_TR(0x701ac8);
u8 U[4];
w4(U+0,u32(0x8b2350ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B701acd:{NFSU2_TR(0x701acd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x701ad2ull));
{goto L701ea7;}
}
B701ad2:L701ad2:{c.instructions+=2;NFSU2_TR(0x701ad2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B701ad3:{NFSU2_TR(0x701ad3);
{goto L701aec;}
}
B701ad5:L701ad5:{c.instructions+=1;NFSU2_TR(0x701ad5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x701adaull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x701610u);}goto L701610;}
}
B701ada:L701ada:{c.instructions+=5;NFSU2_TR(0x701ada);
u8 U[12];
w4(U+0,u32(u32(u32(0xffffff80ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+8),(U+8),4);
}
B701ade:{NFSU2_TR(0x701ade);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B701adf:{NFSU2_TR(0x701adf);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B701ae2:{NFSU2_TR(0x701ae2);
w4(R+4,u32(0x8b2350ull));
}
B701ae7:{NFSU2_TR(0x701ae7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x701aecull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x701687u);}goto L701687;}
}
B701aec:L701aec:{c.instructions+=1;NFSU2_TR(0x701aec);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B701aed:L701aed:{c.instructions+=2;NFSU2_TR(0x701aed);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x4ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B701af1:{NFSU2_TR(0x701af1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L701b19;}}
}
B701af3:L701af3:{c.instructions+=1;NFSU2_TR(0x701af3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x701af8ull));
TAIL_STATIC(0x702040u,702);
}
B701af8:L701af8:{c.instructions+=3;NFSU2_TR(0x701af8);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B701afb:{NFSU2_TR(0x701afb);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B701afd:{NFSU2_TR(0x701afd);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L701b0c;}}
}
B701aff:L701aff:{c.instructions+=3;NFSU2_TR(0x701aff);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B701b00:{NFSU2_TR(0x701b00);
w4(R+0,u32(0x8b2530ull));
}
B701b05:{NFSU2_TR(0x701b05);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x701b0aull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x701632u);}goto L701632;}
}
B701b0a:L701b0a:{c.instructions+=1;NFSU2_TR(0x701b0a);
{goto L701b31;}
}
B701b0c:L701b0c:{c.instructions+=2;NFSU2_TR(0x701b0c);
u8 U[4];
w4(U+0,u32(0x8b2530ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B701b11:{NFSU2_TR(0x701b11);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x701b16ull));
{goto L701ea7;}
}
B701b16:L701b16:{c.instructions+=2;NFSU2_TR(0x701b16);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B701b17:{NFSU2_TR(0x701b17);
{goto L701b30;}
}
B701b19:L701b19:{c.instructions+=1;NFSU2_TR(0x701b19);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x701b1eull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x701610u);}goto L701610;}
}
B701b1e:L701b1e:{c.instructions+=5;NFSU2_TR(0x701b1e);
u8 U[12];
w4(U+0,u32(u32(u32(0xffffff80ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+8),(U+8),4);
}
B701b22:{NFSU2_TR(0x701b22);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B701b23:{NFSU2_TR(0x701b23);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x8ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B701b26:{NFSU2_TR(0x701b26);
w4(R+4,u32(0x8b2530ull));
}
B701b2b:{NFSU2_TR(0x701b2b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x701b30ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x701687u);}goto L701687;}
}
B701b30:L701b30:{c.instructions+=1;NFSU2_TR(0x701b30);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B701b31:L701b31:{c.instructions+=2;NFSU2_TR(0x701b31);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x8ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B701b35:{NFSU2_TR(0x701b35);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L701b5d;}}
}
B701b37:L701b37:{c.instructions+=1;NFSU2_TR(0x701b37);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x701b3cull));
TAIL_STATIC(0x702040u,702);
}
B701b3c:L701b3c:{c.instructions+=3;NFSU2_TR(0x701b3c);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B701b3f:{NFSU2_TR(0x701b3f);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B701b41:{NFSU2_TR(0x701b41);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L701b50;}}
}
B701b43:L701b43:{c.instructions+=3;NFSU2_TR(0x701b43);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B701b44:{NFSU2_TR(0x701b44);
w4(R+0,u32(0x8b2550ull));
}
B701b49:{NFSU2_TR(0x701b49);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x701b4eull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x701632u);}goto L701632;}
}
B701b4e:L701b4e:{c.instructions+=1;NFSU2_TR(0x701b4e);
{goto L701b76;}
}
B701b50:L701b50:{c.instructions+=2;NFSU2_TR(0x701b50);
u8 U[4];
w4(U+0,u32(0x8b2550ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B701b55:{NFSU2_TR(0x701b55);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x701b5aull));
{goto L701ea7;}
}
B701b5a:L701b5a:{c.instructions+=2;NFSU2_TR(0x701b5a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B701b5b:{NFSU2_TR(0x701b5b);
{goto L701b75;}
}
B701b5d:L701b5d:{c.instructions+=1;NFSU2_TR(0x701b5d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x701b62ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x701610u);}goto L701610;}
}
B701b62:L701b62:{c.instructions+=5;NFSU2_TR(0x701b62);
u8 U[12];
w4(U+0,u32(u32(u32(0xffffff80ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+8),(U+8),4);
}
B701b66:{NFSU2_TR(0x701b66);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B701b67:{NFSU2_TR(0x701b67);
u8 U[12];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x8ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B701b6b:{NFSU2_TR(0x701b6b);
w4(R+4,u32(0x8b2550ull));
}
B701b70:{NFSU2_TR(0x701b70);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x701b75ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x701687u);}goto L701687;}
}
B701b75:L701b75:{c.instructions+=1;NFSU2_TR(0x701b75);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B701b76:L701b76:{c.instructions+=2;NFSU2_TR(0x701b76);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x10ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B701b7a:{NFSU2_TR(0x701b7a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L701ba0;}}
}
B701b7c:L701b7c:{c.instructions+=1;NFSU2_TR(0x701b7c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x701b81ull));
TAIL_STATIC(0x702040u,702);
}
B701b81:L701b81:{c.instructions+=4;NFSU2_TR(0x701b81);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B701b84:{NFSU2_TR(0x701b84);
w4(R+28,u32(0x8b2830ull));
}
B701b89:{NFSU2_TR(0x701b89);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B701b8b:{NFSU2_TR(0x701b8b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L701b97;}}
}
B701b8d:L701b8d:{c.instructions+=3;NFSU2_TR(0x701b8d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B701b8e:{NFSU2_TR(0x701b8e);
__builtin_memmove((R+0),(R+28),4);
}
B701b90:{NFSU2_TR(0x701b90);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x701b95ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x701632u);}goto L701632;}
}
B701b95:L701b95:{c.instructions+=1;NFSU2_TR(0x701b95);
{goto L701bbc;}
}
B701b97:L701b97:{c.instructions+=2;NFSU2_TR(0x701b97);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B701b98:{NFSU2_TR(0x701b98);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x701b9dull));
{goto L701ea7;}
}
B701b9d:L701b9d:{c.instructions+=2;NFSU2_TR(0x701b9d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B701b9e:{NFSU2_TR(0x701b9e);
{goto L701bbb;}
}
B701ba0:L701ba0:{c.instructions+=1;NFSU2_TR(0x701ba0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x701ba5ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x701610u);}goto L701610;}
}
B701ba5:L701ba5:{c.instructions+=6;NFSU2_TR(0x701ba5);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B701ba8:{NFSU2_TR(0x701ba8);
u8 U[12];
w4(U+0,u32(u32(u32(0xffffff80ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+8),(U+8),4);
}
B701bac:{NFSU2_TR(0x701bac);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B701baf:{NFSU2_TR(0x701baf);
w4(R+28,u32(0x8b2830ull));
}
B701bb4:{NFSU2_TR(0x701bb4);
__builtin_memmove((R+4),(R+28),4);
}
B701bb6:{NFSU2_TR(0x701bb6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x701bbbull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7016fau);}goto L7016fa;}
}
B701bbb:L701bbb:{c.instructions+=1;NFSU2_TR(0x701bbb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B701bbc:L701bbc:{c.instructions+=2;NFSU2_TR(0x701bbc);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x20ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B701bc0:{NFSU2_TR(0x701bc0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L701be6;}}
}
B701bc2:L701bc2:{c.instructions+=1;NFSU2_TR(0x701bc2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x701bc7ull));
TAIL_STATIC(0x702040u,702);
}
B701bc7:L701bc7:{c.instructions+=4;NFSU2_TR(0x701bc7);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B701bca:{NFSU2_TR(0x701bca);
w4(R+24,u32(0x8b2930ull));
}
B701bcf:{NFSU2_TR(0x701bcf);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B701bd1:{NFSU2_TR(0x701bd1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L701bdd;}}
}
B701bd3:L701bd3:{c.instructions+=3;NFSU2_TR(0x701bd3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B701bd4:{NFSU2_TR(0x701bd4);
__builtin_memmove((R+0),(R+24),4);
}
B701bd6:{NFSU2_TR(0x701bd6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x701bdbull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x701632u);}goto L701632;}
}
B701bdb:L701bdb:{c.instructions+=1;NFSU2_TR(0x701bdb);
{goto L701c02;}
}
B701bdd:L701bdd:{c.instructions+=2;NFSU2_TR(0x701bdd);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B701bde:{NFSU2_TR(0x701bde);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x701be3ull));
{goto L701ea7;}
}
B701be3:L701be3:{c.instructions+=2;NFSU2_TR(0x701be3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B701be4:{NFSU2_TR(0x701be4);
{goto L701c01;}
}
B701be6:L701be6:{c.instructions+=1;NFSU2_TR(0x701be6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x701bebull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x701610u);}goto L701610;}
}
B701beb:L701beb:{c.instructions+=6;NFSU2_TR(0x701beb);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B701bee:{NFSU2_TR(0x701bee);
u8 U[12];
w4(U+0,u32(u32(u32(0xffffff80ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+8),(U+8),4);
}
B701bf2:{NFSU2_TR(0x701bf2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B701bf5:{NFSU2_TR(0x701bf5);
w4(R+24,u32(0x8b2930ull));
}
B701bfa:{NFSU2_TR(0x701bfa);
__builtin_memmove((R+4),(R+24),4);
}
B701bfc:{NFSU2_TR(0x701bfc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x701c01ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7016fau);}goto L7016fa;}
}
B701c01:L701c01:{c.instructions+=1;NFSU2_TR(0x701c01);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B701c02:L701c02:{c.instructions+=4;NFSU2_TR(0x701c02);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B701c05:{NFSU2_TR(0x701c05);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B701c08:{NFSU2_TR(0x701c08);
w4(R+4,u32(0x8b2330ull));
}
B701c0d:{NFSU2_TR(0x701c0d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x701c12ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x70176du);}goto L70176d;}
}
B701c12:L701c12:{c.instructions+=4;NFSU2_TR(0x701c12);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B701c15:{NFSU2_TR(0x701c15);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B701c18:{NFSU2_TR(0x701c18);
__builtin_memmove((R+4),(R+28),4);
}
B701c1a:{NFSU2_TR(0x701c1a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x701c1full));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x70189cu);}goto L70189c;}
}
B701c1f:L701c1f:{c.instructions+=4;NFSU2_TR(0x701c1f);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B701c22:{NFSU2_TR(0x701c22);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B701c25:{NFSU2_TR(0x701c25);
__builtin_memmove((R+4),(R+24),4);
}
B701c27:{NFSU2_TR(0x701c27);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x701c2cull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x70189cu);}goto L70189c;}
}
B701c2c:L701c2c:{c.instructions+=5;NFSU2_TR(0x701c2c);
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
B701c2f:{NFSU2_TR(0x701c2f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B701c30:{NFSU2_TR(0x701c30);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B701c31:{NFSU2_TR(0x701c31);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B701c32:{NFSU2_TR(0x701c32);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B701c40:L701c40:{c.instructions+=14;NFSU2_TR(0x701c40);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B701c43:{NFSU2_TR(0x701c43);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B701c46:{NFSU2_TR(0x701c46);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B701c49:{NFSU2_TR(0x701c49);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B701c4c:{NFSU2_TR(0x701c4c);
w4(R+28,u32(u32(r4(R+28))|u32(r4(R+12))));
}
B701c4e:{NFSU2_TR(0x701c4e);
w4(R+20,u32(u32(r4(R+20))|u32(r4(R+0))));
}
B701c50:{NFSU2_TR(0x701c50);
w4(R+28,u32(u32(r4(R+28))|u32(r4(R+20))));
}
B701c52:{NFSU2_TR(0x701c52);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B701c55:{NFSU2_TR(0x701c55);
w4(R+28,u32(u32(r4(R+28))|u32(r4(R+4))));
}
B701c57:{NFSU2_TR(0x701c57);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B701c5a:{NFSU2_TR(0x701c5a);
w4(R+28,u32(u32(r4(R+28))|u32(r4(R+4))));
}
B701c5c:{NFSU2_TR(0x701c5c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B701c5f:{NFSU2_TR(0x701c5f);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+28,u32(u32(r4(R+28))|u32(r4(R+8))));
w1(R+519,u8(s32(r4(R+28))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+28))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+28))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B701c61:{NFSU2_TR(0x701c61);
if(r1(R+518)){{goto L701d71;}}
}
B701c67:L701c67:{c.instructions+=71;NFSU2_TR(0x701c67);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+28),(U+4),4);
}
B701c6a:{NFSU2_TR(0x701c6a);
w4(R+12,u32(u32(r4(R+12))-u32(r4(R+0))));
}
B701c6c:{NFSU2_TR(0x701c6c);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B701c6f:{NFSU2_TR(0x701c6f);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+8))));
}
B701c71:{NFSU2_TR(0x701c71);
__builtin_memmove(gp(0x816218),(R+12),4);
}
B701c77:{NFSU2_TR(0x701c77);
__builtin_memmove(gp(0x81621c),(R+4),4);
}
B701c7d:{NFSU2_TR(0x701c7d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((R+20),(U+4),4);
}
B701c80:{NFSU2_TR(0x701c80);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+28))));
}
B701c82:{NFSU2_TR(0x701c82);
{u32 ea_=u32(u32(8479256u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B701c88:{NFSU2_TR(0x701c88);
{u32 ea_=u32(u32(8479260u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B701c8e:{NFSU2_TR(0x701c8e);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B701c90:{NFSU2_TR(0x701c90);
{u32 ea_=u32(u32(8479280u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B701c96:{NFSU2_TR(0x701c96);
__asm__ volatile(".byte 0xd9,0xca":::"memory");
}
B701c98:{NFSU2_TR(0x701c98);
__asm__ volatile(".byte 0xdc,0xc1":::"memory");
}
B701c9a:{NFSU2_TR(0x701c9a);
{u32 ea_=u32(u32(8479276u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B701ca0:{NFSU2_TR(0x701ca0);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B701ca2:{NFSU2_TR(0x701ca2);
{u32 ea_=u32(u32(8479284u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B701ca8:{NFSU2_TR(0x701ca8);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(m4(0x816228)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(u64(r8(U+16))>>32));
w4(R+0,u32(r8(U+16)));
}
B701cae:{NFSU2_TR(0x701cae);
__asm__ volatile(".byte 0xdc,0xc1":::"memory");
}
B701cb0:{NFSU2_TR(0x701cb0);
__asm__ volatile(".byte 0xde,0xea":::"memory");
}
B701cb2:{NFSU2_TR(0x701cb2);
{u32 ea_=u32(u32(8479288u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B701cb8:{NFSU2_TR(0x701cb8);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B701cba:{NFSU2_TR(0x701cba);
{u32 ea_=u32(u32(8479288u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B701cc0:{NFSU2_TR(0x701cc0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B701cc3:{NFSU2_TR(0x701cc3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B701cc6:{NFSU2_TR(0x701cc6);
w4(R+8,shl<u32>(r4(R+8),u64(u32(0x1ull))));
}
B701cc8:{NFSU2_TR(0x701cc8);
{u32 ea_=u32(u32(8479264u));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B701cce:{NFSU2_TR(0x701cce);
{u32 ea_=u32(u32(8479256u));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B701cd4:{NFSU2_TR(0x701cd4);
__builtin_memmove((R+4),gp(0x816218),4);
}
B701cda:{NFSU2_TR(0x701cda);
__builtin_memmove((R+28),gp(0x816220),4);
}
B701ce0:{NFSU2_TR(0x701ce0);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+8))));
}
B701ce2:{NFSU2_TR(0x701ce2);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+28))));
}
B701ce4:{NFSU2_TR(0x701ce4);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+20))));
}
B701ce6:{NFSU2_TR(0x701ce6);
__builtin_memmove(gp(0x81621c),(R+4),4);
}
B701cec:{NFSU2_TR(0x701cec);
__builtin_memmove(gp(0x816220),(R+8),4);
}
B701cf2:{NFSU2_TR(0x701cf2);
__builtin_memmove(gp(0x816224),(R+28),4);
}
B701cf8:{NFSU2_TR(0x701cf8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B701cfa:{NFSU2_TR(0x701cfa);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B701cfd:{NFSU2_TR(0x701cfd);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((R+24),(U+4),4);
}
B701d00:{NFSU2_TR(0x701d00);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+12))));
}
B701d02:{NFSU2_TR(0x701d02);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((R+12),(U+4),4);
}
B701d05:{NFSU2_TR(0x701d05);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+8))));
}
B701d07:{NFSU2_TR(0x701d07);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(m4(0x816228)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(u64(r8(U+16))>>32));
w4(R+0,u32(r8(U+16)));
}
B701d0d:{NFSU2_TR(0x701d0d);
w4(R+8,shl<u32>(r4(R+8),u64(u32(0x1ull))));
}
B701d0f:{NFSU2_TR(0x701d0f);
__builtin_memmove((R+28),gp(0x816214),4);
}
B701d15:{NFSU2_TR(0x701d15);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+8))));
}
B701d17:{NFSU2_TR(0x701d17);
__builtin_memmove((R+20),gp(0x81621c),4);
}
B701d1d:{NFSU2_TR(0x701d1d);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B701d20:{NFSU2_TR(0x701d20);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+8))));
}
B701d22:{NFSU2_TR(0x701d22);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B701d25:{NFSU2_TR(0x701d25);
w4(R+12,u32(u32(r4(R+12))-u32(r4(R+24))));
}
B701d27:{NFSU2_TR(0x701d27);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+24),(U+4),4);
}
B701d2a:{NFSU2_TR(0x701d2a);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+20))));
}
B701d2c:{NFSU2_TR(0x701d2c);
__builtin_memmove((R+20),gp(0x816218),4);
}
B701d32:{NFSU2_TR(0x701d32);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x48ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B701d35:{NFSU2_TR(0x701d35);
__builtin_memmove((R+24),gp(0x816220),4);
}
B701d3b:{NFSU2_TR(0x701d3b);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xb4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B701d41:{NFSU2_TR(0x701d41);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B701d44:{NFSU2_TR(0x701d44);
w4(R+12,u32(u32(r4(R+12))-u32(r4(R+20))));
}
B701d46:{NFSU2_TR(0x701d46);
__builtin_memmove((R+20),gp(0x816224),4);
}
B701d4c:{NFSU2_TR(0x701d4c);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x6cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B701d4f:{NFSU2_TR(0x701d4f);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x90ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B701d55:{NFSU2_TR(0x701d55);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((R+12),(U+4),4);
}
B701d58:{NFSU2_TR(0x701d58);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+24))));
}
B701d5a:{NFSU2_TR(0x701d5a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B701d5d:{NFSU2_TR(0x701d5d);
u8 U[6];
w1(R+512,u8((r4(R+8))<(r4(R+20))));
w1(R+523,sborrow<u32>(r4(R+8),r4(R+20)));
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+20))));
w1(R+519,u8(s32(r4(R+8))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+8))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B701d5f:{NFSU2_TR(0x701d5f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+28)),r4(U+0));
}
B701d61:{NFSU2_TR(0x701d61);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B701d64:{NFSU2_TR(0x701d64);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xd8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B701d6a:{NFSU2_TR(0x701d6a);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xfcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B701d70:{NFSU2_TR(0x701d70);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B701d71:L701d71:{c.instructions+=11;NFSU2_TR(0x701d71);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B701d73:{NFSU2_TR(0x701d73);
__builtin_memmove((R+28),gp(0x816214),4);
}
B701d79:{NFSU2_TR(0x701d79);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+28)),r4(U+0));
}
B701d7b:{NFSU2_TR(0x701d7b);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B701d7e:{NFSU2_TR(0x701d7e);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x48ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B701d81:{NFSU2_TR(0x701d81);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x6cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B701d84:{NFSU2_TR(0x701d84);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x90ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B701d8a:{NFSU2_TR(0x701d8a);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xb4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B701d90:{NFSU2_TR(0x701d90);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xd8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B701d96:{NFSU2_TR(0x701d96);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xfcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B701d9c:{NFSU2_TR(0x701d9c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B701d9d:L701d9d:{c.instructions+=75;NFSU2_TR(0x701d9d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B701da0:{NFSU2_TR(0x701da0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B701da3:{NFSU2_TR(0x701da3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B701da6:{NFSU2_TR(0x701da6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B701da9:{NFSU2_TR(0x701da9);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+28),(U+4),4);
}
B701dac:{NFSU2_TR(0x701dac);
w4(R+12,u32(u32(r4(R+12))-u32(r4(R+0))));
}
B701dae:{NFSU2_TR(0x701dae);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B701db1:{NFSU2_TR(0x701db1);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+8))));
}
B701db3:{NFSU2_TR(0x701db3);
__builtin_memmove(gp(0x816218),(R+12),4);
}
B701db9:{NFSU2_TR(0x701db9);
__builtin_memmove(gp(0x81621c),(R+4),4);
}
B701dbf:{NFSU2_TR(0x701dbf);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((R+20),(U+4),4);
}
B701dc2:{NFSU2_TR(0x701dc2);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+28))));
}
B701dc4:{NFSU2_TR(0x701dc4);
{u32 ea_=u32(u32(8479256u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B701dca:{NFSU2_TR(0x701dca);
{u32 ea_=u32(u32(8479260u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B701dd0:{NFSU2_TR(0x701dd0);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B701dd2:{NFSU2_TR(0x701dd2);
{u32 ea_=u32(u32(8479280u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B701dd8:{NFSU2_TR(0x701dd8);
__asm__ volatile(".byte 0xd9,0xca":::"memory");
}
B701dda:{NFSU2_TR(0x701dda);
__asm__ volatile(".byte 0xdc,0xc1":::"memory");
}
B701ddc:{NFSU2_TR(0x701ddc);
{u32 ea_=u32(u32(8479276u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B701de2:{NFSU2_TR(0x701de2);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B701de4:{NFSU2_TR(0x701de4);
{u32 ea_=u32(u32(8479284u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B701dea:{NFSU2_TR(0x701dea);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(m4(0x816228)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(u64(r8(U+16))>>32));
w4(R+0,u32(r8(U+16)));
}
B701df0:{NFSU2_TR(0x701df0);
__asm__ volatile(".byte 0xdc,0xc1":::"memory");
}
B701df2:{NFSU2_TR(0x701df2);
__asm__ volatile(".byte 0xde,0xea":::"memory");
}
B701df4:{NFSU2_TR(0x701df4);
{u32 ea_=u32(u32(8479288u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B701dfa:{NFSU2_TR(0x701dfa);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B701dfc:{NFSU2_TR(0x701dfc);
{u32 ea_=u32(u32(8479288u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B701e02:{NFSU2_TR(0x701e02);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B701e05:{NFSU2_TR(0x701e05);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B701e08:{NFSU2_TR(0x701e08);
w4(R+8,shl<u32>(r4(R+8),u64(u32(0x1ull))));
}
B701e0a:{NFSU2_TR(0x701e0a);
{u32 ea_=u32(u32(8479264u));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B701e10:{NFSU2_TR(0x701e10);
{u32 ea_=u32(u32(8479256u));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B701e16:{NFSU2_TR(0x701e16);
__builtin_memmove((R+4),gp(0x816218),4);
}
B701e1c:{NFSU2_TR(0x701e1c);
__builtin_memmove((R+28),gp(0x816220),4);
}
B701e22:{NFSU2_TR(0x701e22);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+8))));
}
B701e24:{NFSU2_TR(0x701e24);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+28))));
}
B701e26:{NFSU2_TR(0x701e26);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+20))));
}
B701e28:{NFSU2_TR(0x701e28);
__builtin_memmove(gp(0x81621c),(R+4),4);
}
B701e2e:{NFSU2_TR(0x701e2e);
__builtin_memmove(gp(0x816220),(R+8),4);
}
B701e34:{NFSU2_TR(0x701e34);
__builtin_memmove(gp(0x816224),(R+28),4);
}
B701e3a:{NFSU2_TR(0x701e3a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B701e3c:{NFSU2_TR(0x701e3c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B701e3f:{NFSU2_TR(0x701e3f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((R+24),(U+4),4);
}
B701e42:{NFSU2_TR(0x701e42);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+12))));
}
B701e44:{NFSU2_TR(0x701e44);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((R+12),(U+4),4);
}
B701e47:{NFSU2_TR(0x701e47);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+8))));
}
B701e49:{NFSU2_TR(0x701e49);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(m4(0x816228)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(u64(r8(U+16))>>32));
w4(R+0,u32(r8(U+16)));
}
B701e4f:{NFSU2_TR(0x701e4f);
w4(R+8,shl<u32>(r4(R+8),u64(u32(0x1ull))));
}
B701e51:{NFSU2_TR(0x701e51);
__builtin_memmove((R+28),gp(0x816214),4);
}
B701e57:{NFSU2_TR(0x701e57);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+8))));
}
B701e59:{NFSU2_TR(0x701e59);
__builtin_memmove((R+20),gp(0x81621c),4);
}
B701e5f:{NFSU2_TR(0x701e5f);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B701e62:{NFSU2_TR(0x701e62);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+8))));
}
B701e64:{NFSU2_TR(0x701e64);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B701e67:{NFSU2_TR(0x701e67);
w4(R+12,u32(u32(r4(R+12))-u32(r4(R+24))));
}
B701e69:{NFSU2_TR(0x701e69);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+24),(U+4),4);
}
B701e6c:{NFSU2_TR(0x701e6c);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+20))));
}
B701e6e:{NFSU2_TR(0x701e6e);
__builtin_memmove((R+20),gp(0x816218),4);
}
B701e74:{NFSU2_TR(0x701e74);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B701e77:{NFSU2_TR(0x701e77);
__builtin_memmove((R+24),gp(0x816220),4);
}
B701e7d:{NFSU2_TR(0x701e7d);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B701e80:{NFSU2_TR(0x701e80);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B701e83:{NFSU2_TR(0x701e83);
w4(R+12,u32(u32(r4(R+12))-u32(r4(R+20))));
}
B701e85:{NFSU2_TR(0x701e85);
__builtin_memmove((R+20),gp(0x816224),4);
}
B701e8b:{NFSU2_TR(0x701e8b);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B701e8e:{NFSU2_TR(0x701e8e);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B701e91:{NFSU2_TR(0x701e91);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((R+12),(U+4),4);
}
B701e94:{NFSU2_TR(0x701e94);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+24))));
}
B701e96:{NFSU2_TR(0x701e96);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B701e99:{NFSU2_TR(0x701e99);
u8 U[6];
w1(R+512,u8((r4(R+8))<(r4(R+20))));
w1(R+523,sborrow<u32>(r4(R+8),r4(R+20)));
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+20))));
w1(R+519,u8(s32(r4(R+8))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+8))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B701e9b:{NFSU2_TR(0x701e9b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+28)),r4(U+0));
}
B701e9d:{NFSU2_TR(0x701e9d);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B701ea0:{NFSU2_TR(0x701ea0);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B701ea3:{NFSU2_TR(0x701ea3);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B701ea6:{NFSU2_TR(0x701ea6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B701ea7:L701ea7:{c.instructions+=12;NFSU2_TR(0x701ea7);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B701eab:{NFSU2_TR(0x701eab);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B701eaf:{NFSU2_TR(0x701eaf);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B701eb0:{NFSU2_TR(0x701eb0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B701eb1:{NFSU2_TR(0x701eb1);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B701eb2:{NFSU2_TR(0x701eb2);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B701eb3:{NFSU2_TR(0x701eb3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B701eb4:{NFSU2_TR(0x701eb4);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B701eb7:{NFSU2_TR(0x701eb7);
__builtin_memmove(gp(0x816210),(R+8),4);
}
B701ebd:{NFSU2_TR(0x701ebd);
w4(R+24,u32(0x81635cull));
}
B701ec2:{NFSU2_TR(0x701ec2);
s4(0x816214,u32(0x81623cull));
}
B701ecc:{NFSU2_TR(0x701ecc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x701ed1ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x701c40u);}goto L701c40;}
}
B701ed1:L701ed1:{c.instructions+=3;NFSU2_TR(0x701ed1);
w4(R+24,u32(0x81637cull));
}
B701ed6:{NFSU2_TR(0x701ed6);
s4(0x816214,u32(0x816240ull));
}
B701ee0:{NFSU2_TR(0x701ee0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x701ee5ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x701c40u);}goto L701c40;}
}
B701ee5:L701ee5:{c.instructions+=3;NFSU2_TR(0x701ee5);
w4(R+24,u32(0x81639cull));
}
B701eea:{NFSU2_TR(0x701eea);
s4(0x816214,u32(0x816244ull));
}
B701ef4:{NFSU2_TR(0x701ef4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x701ef9ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x701c40u);}goto L701c40;}
}
B701ef9:L701ef9:{c.instructions+=3;NFSU2_TR(0x701ef9);
w4(R+24,u32(0x8163bcull));
}
B701efe:{NFSU2_TR(0x701efe);
s4(0x816214,u32(0x816248ull));
}
B701f08:{NFSU2_TR(0x701f08);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x701f0dull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x701c40u);}goto L701c40;}
}
B701f0d:L701f0d:{c.instructions+=3;NFSU2_TR(0x701f0d);
w4(R+24,u32(0x8163dcull));
}
B701f12:{NFSU2_TR(0x701f12);
s4(0x816214,u32(0x81624cull));
}
B701f1c:{NFSU2_TR(0x701f1c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x701f21ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x701c40u);}goto L701c40;}
}
B701f21:L701f21:{c.instructions+=3;NFSU2_TR(0x701f21);
w4(R+24,u32(0x8163fcull));
}
B701f26:{NFSU2_TR(0x701f26);
s4(0x816214,u32(0x816250ull));
}
B701f30:{NFSU2_TR(0x701f30);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x701f35ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x701c40u);}goto L701c40;}
}
B701f35:L701f35:{c.instructions+=3;NFSU2_TR(0x701f35);
w4(R+24,u32(0x81641cull));
}
B701f3a:{NFSU2_TR(0x701f3a);
s4(0x816214,u32(0x816254ull));
}
B701f44:{NFSU2_TR(0x701f44);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x701f49ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x701c40u);}goto L701c40;}
}
B701f49:L701f49:{c.instructions+=3;NFSU2_TR(0x701f49);
w4(R+24,u32(0x81643cull));
}
B701f4e:{NFSU2_TR(0x701f4e);
s4(0x816214,u32(0x816258ull));
}
B701f58:{NFSU2_TR(0x701f58);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x701f5dull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x701c40u);}goto L701c40;}
}
B701f5d:L701f5d:{c.instructions+=4;NFSU2_TR(0x701f5d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B701f5e:{NFSU2_TR(0x701f5e);
w4(R+24,u32(0x81623cull));
}
B701f63:{NFSU2_TR(0x701f63);
__builtin_memmove(gp(0x816214),(R+0),4);
}
B701f68:{NFSU2_TR(0x701f68);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x701f6dull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x701d9du);}goto L701d9d;}
}
B701f6d:L701f6d:{c.instructions+=6;NFSU2_TR(0x701f6d);
__builtin_memmove((R+0),gp(0x816214),4);
}
B701f72:{NFSU2_TR(0x701f72);
__builtin_memmove((R+8),gp(0x816210),4);
}
B701f78:{NFSU2_TR(0x701f78);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+8))));
}
B701f7a:{NFSU2_TR(0x701f7a);
w4(R+24,u32(0x816260ull));
}
B701f7f:{NFSU2_TR(0x701f7f);
__builtin_memmove(gp(0x816214),(R+0),4);
}
B701f84:{NFSU2_TR(0x701f84);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x701f89ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x701d9du);}goto L701d9d;}
}
B701f89:L701f89:{c.instructions+=6;NFSU2_TR(0x701f89);
__builtin_memmove((R+0),gp(0x816214),4);
}
B701f8e:{NFSU2_TR(0x701f8e);
__builtin_memmove((R+8),gp(0x816210),4);
}
B701f94:{NFSU2_TR(0x701f94);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+8))));
}
B701f96:{NFSU2_TR(0x701f96);
w4(R+24,u32(0x816284ull));
}
B701f9b:{NFSU2_TR(0x701f9b);
__builtin_memmove(gp(0x816214),(R+0),4);
}
B701fa0:{NFSU2_TR(0x701fa0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x701fa5ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x701d9du);}goto L701d9d;}
}
B701fa5:L701fa5:{c.instructions+=6;NFSU2_TR(0x701fa5);
__builtin_memmove((R+0),gp(0x816214),4);
}
B701faa:{NFSU2_TR(0x701faa);
__builtin_memmove((R+8),gp(0x816210),4);
}
B701fb0:{NFSU2_TR(0x701fb0);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+8))));
}
B701fb2:{NFSU2_TR(0x701fb2);
w4(R+24,u32(0x8162a8ull));
}
B701fb7:{NFSU2_TR(0x701fb7);
__builtin_memmove(gp(0x816214),(R+0),4);
}
B701fbc:{NFSU2_TR(0x701fbc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x701fc1ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x701d9du);}goto L701d9d;}
}
B701fc1:L701fc1:{c.instructions+=6;NFSU2_TR(0x701fc1);
__builtin_memmove((R+0),gp(0x816214),4);
}
B701fc6:{NFSU2_TR(0x701fc6);
__builtin_memmove((R+8),gp(0x816210),4);
}
B701fcc:{NFSU2_TR(0x701fcc);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+8))));
}
B701fce:{NFSU2_TR(0x701fce);
w4(R+24,u32(0x8162ccull));
}
B701fd3:{NFSU2_TR(0x701fd3);
__builtin_memmove(gp(0x816214),(R+0),4);
}
B701fd8:{NFSU2_TR(0x701fd8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x701fddull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x701d9du);}goto L701d9d;}
}
B701fdd:L701fdd:{c.instructions+=6;NFSU2_TR(0x701fdd);
__builtin_memmove((R+0),gp(0x816214),4);
}
B701fe2:{NFSU2_TR(0x701fe2);
__builtin_memmove((R+8),gp(0x816210),4);
}
B701fe8:{NFSU2_TR(0x701fe8);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+8))));
}
B701fea:{NFSU2_TR(0x701fea);
w4(R+24,u32(0x8162f0ull));
}
B701fef:{NFSU2_TR(0x701fef);
__builtin_memmove(gp(0x816214),(R+0),4);
}
B701ff4:{NFSU2_TR(0x701ff4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x701ff9ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x701d9du);}goto L701d9d;}
}
B701ff9:L701ff9:{c.instructions+=2;NFSU2_TR(0x701ff9);
__builtin_memmove((R+0),gp(0x816214),4);
}
B701ffe:{NFSU2_TR(0x701ffe);
__builtin_memmove((R+8),gp(0x816210),4);
TAIL_STATIC(0x702004u,702);
}
XIT:NFSU2_TR_EXIT(0x701,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
