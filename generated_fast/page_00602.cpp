#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_401(u8* __restrict R,Cpu& c);
u32 body_402(u8* __restrict R,Cpu& c);
u32 body_40f(u8* __restrict R,Cpu& c);
u32 body_433(u8* __restrict R,Cpu& c);
u32 body_440(u8* __restrict R,Cpu& c);
u32 body_446(u8* __restrict R,Cpu& c);
u32 body_455(u8* __restrict R,Cpu& c);
u32 body_48b(u8* __restrict R,Cpu& c);
u32 body_494(u8* __restrict R,Cpu& c);
u32 body_4db(u8* __restrict R,Cpu& c);
u32 body_500(u8* __restrict R,Cpu& c);
u32 body_501(u8* __restrict R,Cpu& c);
u32 body_502(u8* __restrict R,Cpu& c);
u32 body_527(u8* __restrict R,Cpu& c);
u32 body_534(u8* __restrict R,Cpu& c);
u32 body_575(u8* __restrict R,Cpu& c);
u32 body_576(u8* __restrict R,Cpu& c);
u32 body_592(u8* __restrict R,Cpu& c);
u32 body_59f(u8* __restrict R,Cpu& c);
u32 body_5b5(u8* __restrict R,Cpu& c);
u32 body_5e7(u8* __restrict R,Cpu& c);
u32 body_5ea(u8* __restrict R,Cpu& c);
u32 body_5eb(u8* __restrict R,Cpu& c);
u32 body_5f0(u8* __restrict R,Cpu& c);
u32 body_5f1(u8* __restrict R,Cpu& c);
u32 body_5f2(u8* __restrict R,Cpu& c);
u32 body_5f3(u8* __restrict R,Cpu& c);
u32 body_5f4(u8* __restrict R,Cpu& c);
u32 body_5f9(u8* __restrict R,Cpu& c);
u32 body_5fe(u8* __restrict R,Cpu& c);
u32 body_5ff(u8* __restrict R,Cpu& c);
u32 body_600(u8* __restrict R,Cpu& c);
u32 body_601(u8* __restrict R,Cpu& c);
u32 body_603(u8* __restrict R,Cpu& c);
u32 body_609(u8* __restrict R,Cpu& c);
u32 body_75b(u8* __restrict R,Cpu& c);
u32 body_75c(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x602,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x602,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_602(u8* __restrict R,Cpu& c);
u32 page_602(Cpu& c){return body_602(c.regs.data(),c);}
__attribute__((noinline)) u32 body_602(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x602000:goto L602000;
case 0x602004:c.instructions+=9;goto B602004;
case 0x602005:c.instructions+=8;goto B602005;
case 0x602006:c.instructions+=7;goto B602006;
case 0x602007:c.instructions+=6;goto B602007;
case 0x602009:c.instructions+=5;goto B602009;
case 0x60200a:c.instructions+=4;goto B60200a;
case 0x60200e:c.instructions+=3;goto B60200e;
case 0x602010:c.instructions+=2;goto B602010;
case 0x602012:c.instructions+=1;goto B602012;
case 0x602018:goto L602018;
case 0x60201a:c.instructions+=2;goto B60201a;
case 0x60201d:c.instructions+=1;goto B60201d;
case 0x60201f:goto L60201f;
case 0x602022:c.instructions+=1;goto B602022;
case 0x602024:goto L602024;
case 0x602026:c.instructions+=1;goto B602026;
case 0x602028:goto L602028;
case 0x60202b:c.instructions+=1;goto B60202b;
case 0x60202d:goto L60202d;
case 0x602030:c.instructions+=1;goto B602030;
case 0x602032:goto L602032;
case 0x602039:c.instructions+=1;goto B602039;
case 0x60203b:goto L60203b;
case 0x60203e:c.instructions+=1;goto B60203e;
case 0x602040:goto L602040;
case 0x602041:c.instructions+=6;goto B602041;
case 0x602042:c.instructions+=5;goto B602042;
case 0x602044:c.instructions+=4;goto B602044;
case 0x602045:c.instructions+=3;goto B602045;
case 0x602047:c.instructions+=2;goto B602047;
case 0x602048:c.instructions+=1;goto B602048;
case 0x60204b:goto L60204b;
case 0x60204e:c.instructions+=3;goto B60204e;
case 0x602050:c.instructions+=2;goto B602050;
case 0x602052:c.instructions+=1;goto B602052;
case 0x602058:goto L602058;
case 0x60205d:c.instructions+=3;goto B60205d;
case 0x60205f:c.instructions+=2;goto B60205f;
case 0x602063:c.instructions+=1;goto B602063;
case 0x602065:goto L602065;
case 0x60206a:c.instructions+=2;goto B60206a;
case 0x60206c:c.instructions+=1;goto B60206c;
case 0x60206e:goto L60206e;
case 0x602073:c.instructions+=2;goto B602073;
case 0x602075:c.instructions+=1;goto B602075;
case 0x602077:goto L602077;
case 0x60207a:c.instructions+=1;goto B60207a;
case 0x60207c:goto L60207c;
case 0x602081:c.instructions+=1;goto B602081;
case 0x602086:goto L602086;
case 0x602088:c.instructions+=1;goto B602088;
case 0x60208a:goto L60208a;
case 0x60208f:c.instructions+=1;goto B60208f;
case 0x602094:goto L602094;
case 0x602096:c.instructions+=1;goto B602096;
case 0x602098:goto L602098;
case 0x60209d:c.instructions+=2;goto B60209d;
case 0x60209f:c.instructions+=1;goto B60209f;
case 0x6020a1:goto L6020a1;
case 0x6020a3:c.instructions+=1;goto B6020a3;
case 0x6020a8:goto L6020a8;
case 0x6020ac:c.instructions+=2;goto B6020ac;
case 0x6020b2:c.instructions+=1;goto B6020b2;
case 0x6020b4:goto L6020b4;
case 0x6020bb:c.instructions+=2;goto B6020bb;
case 0x6020bd:c.instructions+=1;goto B6020bd;
case 0x6020bf:goto L6020bf;
case 0x6020c1:c.instructions+=2;goto B6020c1;
case 0x6020c3:c.instructions+=1;goto B6020c3;
case 0x6020c8:goto L6020c8;
case 0x6020c9:c.instructions+=5;goto B6020c9;
case 0x6020ca:c.instructions+=4;goto B6020ca;
case 0x6020cb:c.instructions+=3;goto B6020cb;
case 0x6020cd:c.instructions+=2;goto B6020cd;
case 0x6020ce:c.instructions+=1;goto B6020ce;
case 0x6020d1:goto L6020d1;
case 0x6020d5:c.instructions+=6;goto B6020d5;
case 0x6020d9:c.instructions+=5;goto B6020d9;
case 0x6020da:c.instructions+=4;goto B6020da;
case 0x6020db:c.instructions+=3;goto B6020db;
case 0x6020dc:c.instructions+=2;goto B6020dc;
case 0x6020de:c.instructions+=1;goto B6020de;
case 0x6020e3:goto L6020e3;
case 0x6020e6:c.instructions+=2;goto B6020e6;
case 0x6020e8:c.instructions+=1;goto B6020e8;
case 0x6020ea:goto L6020ea;
case 0x6020f2:c.instructions+=1;goto B6020f2;
case 0x6020f4:goto L6020f4;
case 0x6020f7:c.instructions+=2;goto B6020f7;
case 0x6020fc:c.instructions+=1;goto B6020fc;
case 0x602100:goto L602100;
case 0x602102:c.instructions+=2;goto B602102;
case 0x602104:c.instructions+=1;goto B602104;
case 0x602106:goto L602106;
case 0x602108:c.instructions+=1;goto B602108;
case 0x60210a:goto L60210a;
case 0x60210c:c.instructions+=2;goto B60210c;
case 0x60210e:c.instructions+=1;goto B60210e;
case 0x602113:goto L602113;
case 0x602116:c.instructions+=2;goto B602116;
case 0x602117:c.instructions+=1;goto B602117;
case 0x602119:goto L602119;
case 0x60211a:c.instructions+=5;goto B60211a;
case 0x60211b:c.instructions+=4;goto B60211b;
case 0x60211c:c.instructions+=3;goto B60211c;
case 0x60211e:c.instructions+=2;goto B60211e;
case 0x60211f:c.instructions+=1;goto B60211f;
case 0x602130:goto L602130;
case 0x602136:c.instructions+=3;goto B602136;
case 0x60213b:c.instructions+=2;goto B60213b;
case 0x60213d:c.instructions+=1;goto B60213d;
case 0x60213f:goto L60213f;
case 0x602145:c.instructions+=7;goto B602145;
case 0x602147:c.instructions+=6;goto B602147;
case 0x60214c:c.instructions+=5;goto B60214c;
case 0x602151:c.instructions+=4;goto B602151;
case 0x602157:c.instructions+=3;goto B602157;
case 0x60215c:c.instructions+=2;goto B60215c;
case 0x602161:c.instructions+=1;goto B602161;
case 0x602166:goto L602166;
case 0x602169:goto L602169;
case 0x60216e:c.instructions+=1;goto B60216e;
case 0x602170:goto L602170;
case 0x602171:c.instructions+=3;goto B602171;
case 0x602173:c.instructions+=2;goto B602173;
case 0x602175:c.instructions+=1;goto B602175;
case 0x602178:goto L602178;
case 0x60217b:c.instructions+=2;goto B60217b;
case 0x60217d:c.instructions+=1;goto B60217d;
case 0x60217f:goto L60217f;
case 0x602182:c.instructions+=3;goto B602182;
case 0x602185:c.instructions+=2;goto B602185;
case 0x602187:c.instructions+=1;goto B602187;
case 0x60218a:goto L60218a;
case 0x60218e:c.instructions+=3;goto B60218e;
case 0x602190:c.instructions+=2;goto B602190;
case 0x602193:c.instructions+=1;goto B602193;
case 0x602195:goto L602195;
case 0x602197:c.instructions+=2;goto B602197;
case 0x602199:c.instructions+=1;goto B602199;
case 0x60219c:goto L60219c;
case 0x60219f:c.instructions+=9;goto B60219f;
case 0x6021a2:c.instructions+=8;goto B6021a2;
case 0x6021a5:c.instructions+=7;goto B6021a5;
case 0x6021a8:c.instructions+=6;goto B6021a8;
case 0x6021aa:c.instructions+=5;goto B6021aa;
case 0x6021ad:c.instructions+=4;goto B6021ad;
case 0x6021b0:c.instructions+=3;goto B6021b0;
case 0x6021b2:c.instructions+=2;goto B6021b2;
case 0x6021b3:c.instructions+=1;goto B6021b3;
case 0x6021b6:goto L6021b6;
case 0x6021b9:c.instructions+=2;goto B6021b9;
case 0x6021bb:c.instructions+=1;goto B6021bb;
case 0x6021bd:goto L6021bd;
case 0x6021c0:c.instructions+=1;goto B6021c0;
case 0x6021c5:goto L6021c5;
case 0x6021c8:c.instructions+=4;goto B6021c8;
case 0x6021ca:c.instructions+=3;goto B6021ca;
case 0x6021cd:c.instructions+=2;goto B6021cd;
case 0x6021d0:c.instructions+=1;goto B6021d0;
case 0x6021d2:goto L6021d2;
case 0x6021d3:c.instructions+=1;goto B6021d3;
case 0x6021e0:goto L6021e0;
case 0x6021e1:c.instructions+=2;goto B6021e1;
case 0x6021e3:c.instructions+=1;goto B6021e3;
case 0x6021e8:goto L6021e8;
case 0x6021ea:c.instructions+=1;goto B6021ea;
case 0x6021ec:goto L6021ec;
case 0x6021f0:goto L6021f0;
case 0x6021f3:c.instructions+=2;goto B6021f3;
case 0x6021f5:c.instructions+=1;goto B6021f5;
case 0x6021f7:goto L6021f7;
case 0x6021f9:c.instructions+=1;goto B6021f9;
case 0x6021fb:goto L6021fb;
case 0x6021fd:goto L6021fd;
case 0x6021ff:c.instructions+=1;goto B6021ff;
case 0x602201:goto L602201;
case 0x602203:c.instructions+=2;goto B602203;
case 0x602205:c.instructions+=1;goto B602205;
case 0x602207:goto L602207;
case 0x602209:c.instructions+=2;goto B602209;
case 0x60220a:c.instructions+=1;goto B60220a;
case 0x60220d:goto L60220d;
case 0x602211:c.instructions+=2;goto B602211;
case 0x602212:c.instructions+=1;goto B602212;
case 0x602217:goto L602217;
case 0x60221c:c.instructions+=2;goto B60221c;
case 0x60221d:c.instructions+=1;goto B60221d;
case 0x602220:goto L602220;
case 0x602221:c.instructions+=5;goto B602221;
case 0x602223:c.instructions+=4;goto B602223;
case 0x602225:c.instructions+=3;goto B602225;
case 0x602227:c.instructions+=2;goto B602227;
case 0x60222b:c.instructions+=1;goto B60222b;
case 0x60222d:goto L60222d;
case 0x602230:c.instructions+=4;goto B602230;
case 0x602231:c.instructions+=3;goto B602231;
case 0x602234:c.instructions+=2;goto B602234;
case 0x602236:c.instructions+=1;goto B602236;
case 0x602238:goto L602238;
case 0x602239:c.instructions+=2;goto B602239;
case 0x60223a:c.instructions+=1;goto B60223a;
case 0x602240:goto L602240;
case 0x602242:c.instructions+=6;goto B602242;
case 0x602245:c.instructions+=5;goto B602245;
case 0x602248:c.instructions+=4;goto B602248;
case 0x60224a:c.instructions+=3;goto B60224a;
case 0x60224b:c.instructions+=2;goto B60224b;
case 0x60224e:c.instructions+=1;goto B60224e;
case 0x602253:goto L602253;
case 0x602256:c.instructions+=3;goto B602256;
case 0x602257:c.instructions+=2;goto B602257;
case 0x60225c:c.instructions+=1;goto B60225c;
case 0x602261:goto L602261;
case 0x602262:c.instructions+=2;goto B602262;
case 0x602267:c.instructions+=1;goto B602267;
case 0x60226c:goto L60226c;
case 0x60226e:c.instructions+=1;goto B60226e;
case 0x602270:goto L602270;
case 0x602272:c.instructions+=1;goto B602272;
case 0x602277:goto L602277;
case 0x602278:c.instructions+=1;goto B602278;
case 0x60227d:goto L60227d;
case 0x602280:goto L602280;
case 0x602282:c.instructions+=2;goto B602282;
case 0x602284:c.instructions+=1;goto B602284;
case 0x602286:goto L602286;
case 0x60228a:c.instructions+=3;goto B60228a;
case 0x60228b:c.instructions+=2;goto B60228b;
case 0x60228d:c.instructions+=1;goto B60228d;
case 0x60228e:goto L60228e;
case 0x602291:c.instructions+=4;goto B602291;
case 0x602294:c.instructions+=3;goto B602294;
case 0x602297:c.instructions+=2;goto B602297;
case 0x602299:c.instructions+=1;goto B602299;
case 0x60229a:goto L60229a;
case 0x60229b:c.instructions+=1;goto B60229b;
case 0x6022a0:goto L6022a0;
case 0x6022a1:c.instructions+=1;goto B6022a1;
case 0x6022a3:goto L6022a3;
case 0x6022a8:c.instructions+=2;goto B6022a8;
case 0x6022ab:c.instructions+=1;goto B6022ab;
case 0x6022b0:goto L6022b0;
case 0x6022b3:c.instructions+=2;goto B6022b3;
case 0x6022b9:c.instructions+=1;goto B6022b9;
case 0x6022bb:goto L6022bb;
case 0x6022c5:c.instructions+=2;goto B6022c5;
case 0x6022c6:c.instructions+=1;goto B6022c6;
case 0x6022d0:goto L6022d0;
case 0x6022d4:c.instructions+=2;goto B6022d4;
case 0x6022d6:c.instructions+=1;goto B6022d6;
case 0x6022db:goto L6022db;
case 0x6022e0:goto L6022e0;
case 0x6022e5:c.instructions+=5;goto B6022e5;
case 0x6022e7:c.instructions+=4;goto B6022e7;
case 0x6022e8:c.instructions+=3;goto B6022e8;
case 0x6022e9:c.instructions+=2;goto B6022e9;
case 0x6022eb:c.instructions+=1;goto B6022eb;
case 0x6022ed:goto L6022ed;
case 0x6022f2:c.instructions+=2;goto B6022f2;
case 0x6022f4:c.instructions+=1;goto B6022f4;
case 0x6022f6:goto L6022f6;
case 0x6022f7:c.instructions+=3;goto B6022f7;
case 0x6022f9:c.instructions+=2;goto B6022f9;
case 0x6022fa:c.instructions+=1;goto B6022fa;
case 0x6022fd:goto L6022fd;
case 0x6022fe:c.instructions+=5;goto B6022fe;
case 0x602302:c.instructions+=4;goto B602302;
case 0x602304:c.instructions+=3;goto B602304;
case 0x602305:c.instructions+=2;goto B602305;
case 0x602309:c.instructions+=1;goto B602309;
case 0x60230b:goto L60230b;
case 0x60230f:c.instructions+=2;goto B60230f;
case 0x602311:c.instructions+=1;goto B602311;
case 0x602313:goto L602313;
case 0x602318:c.instructions+=1;goto B602318;
case 0x60231a:goto L60231a;
case 0x60231f:c.instructions+=8;goto B60231f;
case 0x602323:c.instructions+=7;goto B602323;
case 0x602327:c.instructions+=6;goto B602327;
case 0x60232b:c.instructions+=5;goto B60232b;
case 0x602331:c.instructions+=4;goto B602331;
case 0x602337:c.instructions+=3;goto B602337;
case 0x602339:c.instructions+=2;goto B602339;
case 0x60233c:c.instructions+=1;goto B60233c;
case 0x60233e:goto L60233e;
case 0x60233f:c.instructions+=5;goto B60233f;
case 0x602340:c.instructions+=4;goto B602340;
case 0x602341:c.instructions+=3;goto B602341;
case 0x602343:c.instructions+=2;goto B602343;
case 0x602344:c.instructions+=1;goto B602344;
case 0x602347:goto L602347;
case 0x60234a:c.instructions+=2;goto B60234a;
case 0x60234c:c.instructions+=1;goto B60234c;
case 0x60234e:goto L60234e;
case 0x602353:c.instructions+=1;goto B602353;
case 0x602355:goto L602355;
case 0x60235b:c.instructions+=8;goto B60235b;
case 0x60235d:c.instructions+=7;goto B60235d;
case 0x602361:c.instructions+=6;goto B602361;
case 0x602365:c.instructions+=5;goto B602365;
case 0x60236b:c.instructions+=4;goto B60236b;
case 0x602371:c.instructions+=3;goto B602371;
case 0x602373:c.instructions+=2;goto B602373;
case 0x602376:c.instructions+=1;goto B602376;
case 0x602378:goto L602378;
case 0x60237e:c.instructions+=2;goto B60237e;
case 0x602381:c.instructions+=1;goto B602381;
case 0x602383:goto L602383;
case 0x602385:c.instructions+=1;goto B602385;
case 0x602387:goto L602387;
case 0x60238a:c.instructions+=1;goto B60238a;
case 0x60238c:goto L60238c;
case 0x602392:c.instructions+=2;goto B602392;
case 0x602395:c.instructions+=1;goto B602395;
case 0x602397:goto L602397;
case 0x60239a:c.instructions+=1;goto B60239a;
case 0x60239c:goto L60239c;
case 0x60239f:c.instructions+=1;goto B60239f;
case 0x6023a1:goto L6023a1;
case 0x6023a4:c.instructions+=4;goto B6023a4;
case 0x6023aa:c.instructions+=3;goto B6023aa;
case 0x6023ac:c.instructions+=2;goto B6023ac;
case 0x6023af:c.instructions+=1;goto B6023af;
case 0x6023b1:goto L6023b1;
case 0x6023b4:c.instructions+=1;goto B6023b4;
case 0x6023b6:goto L6023b6;
case 0x6023b9:c.instructions+=1;goto B6023b9;
case 0x6023bb:goto L6023bb;
case 0x6023be:c.instructions+=1;goto B6023be;
case 0x6023c0:goto L6023c0;
case 0x6023c3:c.instructions+=1;goto B6023c3;
case 0x6023c5:goto L6023c5;
case 0x6023c8:c.instructions+=1;goto B6023c8;
case 0x6023ca:goto L6023ca;
case 0x6023d0:c.instructions+=4;goto B6023d0;
case 0x6023d6:c.instructions+=3;goto B6023d6;
case 0x6023d8:c.instructions+=2;goto B6023d8;
case 0x6023db:c.instructions+=1;goto B6023db;
case 0x6023e1:goto L6023e1;
case 0x6023e4:c.instructions+=3;goto B6023e4;
case 0x6023ea:c.instructions+=2;goto B6023ea;
case 0x6023ec:c.instructions+=1;goto B6023ec;
case 0x6023ee:goto L6023ee;
case 0x6023f0:c.instructions+=2;goto B6023f0;
case 0x6023f2:c.instructions+=1;goto B6023f2;
case 0x6023f7:goto L6023f7;
case 0x6023fd:goto L6023fd;
case 0x6023ff:c.instructions+=2;goto B6023ff;
case 0x602401:c.instructions+=1;goto B602401;
case 0x602403:goto L602403;
case 0x60240a:c.instructions+=3;goto B60240a;
case 0x60240d:c.instructions+=2;goto B60240d;
case 0x602414:c.instructions+=1;goto B602414;
case 0x60241a:goto L60241a;
case 0x60241b:c.instructions+=2;goto B60241b;
case 0x60241d:c.instructions+=1;goto B60241d;
case 0x60241f:goto L60241f;
case 0x602421:c.instructions+=3;goto B602421;
case 0x602426:c.instructions+=2;goto B602426;
case 0x60242c:c.instructions+=1;goto B60242c;
case 0x60242e:goto L60242e;
case 0x602434:c.instructions+=1;goto B602434;
case 0x602438:goto L602438;
case 0x60243b:c.instructions+=2;goto B60243b;
case 0x60243e:c.instructions+=1;goto B60243e;
case 0x602444:goto L602444;
case 0x60244b:goto L60244b;
case 0x602451:c.instructions+=2;goto B602451;
case 0x602454:c.instructions+=1;goto B602454;
case 0x60245a:goto L60245a;
case 0x60245c:c.instructions+=3;goto B60245c;
case 0x60245e:c.instructions+=2;goto B60245e;
case 0x602460:c.instructions+=1;goto B602460;
case 0x602465:goto L602465;
case 0x60246a:goto L60246a;
case 0x60246c:goto L60246c;
case 0x602471:c.instructions+=2;goto B602471;
case 0x602474:c.instructions+=1;goto B602474;
case 0x60247a:goto L60247a;
case 0x602480:c.instructions+=2;goto B602480;
case 0x602482:c.instructions+=1;goto B602482;
case 0x602488:goto L602488;
case 0x60248b:c.instructions+=2;goto B60248b;
case 0x60248c:c.instructions+=1;goto B60248c;
case 0x602491:goto L602491;
case 0x602494:c.instructions+=3;goto B602494;
case 0x602496:c.instructions+=2;goto B602496;
case 0x60249c:c.instructions+=1;goto B60249c;
case 0x6024a2:goto L6024a2;
case 0x6024a4:c.instructions+=3;goto B6024a4;
case 0x6024a6:c.instructions+=2;goto B6024a6;
case 0x6024a8:c.instructions+=1;goto B6024a8;
case 0x6024ad:goto L6024ad;
case 0x6024b3:c.instructions+=2;goto B6024b3;
case 0x6024b5:c.instructions+=1;goto B6024b5;
case 0x6024ba:goto L6024ba;
case 0x6024bc:c.instructions+=1;goto B6024bc;
case 0x6024be:goto L6024be;
case 0x6024c0:c.instructions+=1;goto B6024c0;
case 0x6024c5:goto L6024c5;
case 0x6024c6:c.instructions+=5;goto B6024c6;
case 0x6024c7:c.instructions+=4;goto B6024c7;
case 0x6024c8:c.instructions+=3;goto B6024c8;
case 0x6024ca:c.instructions+=2;goto B6024ca;
case 0x6024cb:c.instructions+=1;goto B6024cb;
case 0x6024ce:goto L6024ce;
case 0x6024d0:c.instructions+=1;goto B6024d0;
case 0x6024d5:goto L6024d5;
case 0x6024db:c.instructions+=5;goto B6024db;
case 0x6024e0:c.instructions+=4;goto B6024e0;
case 0x6024e6:c.instructions+=3;goto B6024e6;
case 0x6024f0:c.instructions+=2;goto B6024f0;
case 0x6024f6:c.instructions+=1;goto B6024f6;
case 0x6024fb:goto L6024fb;
case 0x602501:c.instructions+=7;goto B602501;
case 0x602506:c.instructions+=6;goto B602506;
case 0x60250c:c.instructions+=5;goto B60250c;
case 0x60250d:c.instructions+=4;goto B60250d;
case 0x602512:c.instructions+=3;goto B602512;
case 0x602513:c.instructions+=2;goto B602513;
case 0x602514:c.instructions+=1;goto B602514;
case 0x602519:goto L602519;
case 0x60251e:goto L60251e;
case 0x602524:c.instructions+=7;goto B602524;
case 0x60252a:c.instructions+=6;goto B60252a;
case 0x60252b:c.instructions+=5;goto B60252b;
case 0x602530:c.instructions+=4;goto B602530;
case 0x602531:c.instructions+=3;goto B602531;
case 0x602537:c.instructions+=2;goto B602537;
case 0x602538:c.instructions+=1;goto B602538;
case 0x60253d:goto L60253d;
case 0x602542:goto L602542;
case 0x602547:c.instructions+=7;goto B602547;
case 0x60254d:c.instructions+=6;goto B60254d;
case 0x60254e:c.instructions+=5;goto B60254e;
case 0x602553:c.instructions+=4;goto B602553;
case 0x602554:c.instructions+=3;goto B602554;
case 0x602555:c.instructions+=2;goto B602555;
case 0x60255b:c.instructions+=1;goto B60255b;
case 0x602560:goto L602560;
case 0x602562:goto L602562;
case 0x602568:c.instructions+=7;goto B602568;
case 0x60256d:c.instructions+=6;goto B60256d;
case 0x602573:c.instructions+=5;goto B602573;
case 0x602574:c.instructions+=4;goto B602574;
case 0x602579:c.instructions+=3;goto B602579;
case 0x60257a:c.instructions+=2;goto B60257a;
case 0x60257b:c.instructions+=1;goto B60257b;
case 0x602580:goto L602580;
case 0x602586:c.instructions+=2;goto B602586;
case 0x602589:c.instructions+=1;goto B602589;
case 0x60258b:goto L60258b;
case 0x60258d:c.instructions+=3;goto B60258d;
case 0x60258f:c.instructions+=2;goto B60258f;
case 0x602591:c.instructions+=1;goto B602591;
case 0x602596:goto L602596;
case 0x602599:c.instructions+=3;goto B602599;
case 0x60259f:c.instructions+=2;goto B60259f;
case 0x6025a5:c.instructions+=1;goto B6025a5;
case 0x6025a7:goto L6025a7;
case 0x6025ad:c.instructions+=7;goto B6025ad;
case 0x6025b2:c.instructions+=6;goto B6025b2;
case 0x6025b8:c.instructions+=5;goto B6025b8;
case 0x6025b9:c.instructions+=4;goto B6025b9;
case 0x6025be:c.instructions+=3;goto B6025be;
case 0x6025bf:c.instructions+=2;goto B6025bf;
case 0x6025c0:c.instructions+=1;goto B6025c0;
case 0x6025c5:goto L6025c5;
case 0x6025cb:c.instructions+=2;goto B6025cb;
case 0x6025ce:c.instructions+=1;goto B6025ce;
case 0x6025d0:goto L6025d0;
case 0x6025d2:c.instructions+=3;goto B6025d2;
case 0x6025d4:c.instructions+=2;goto B6025d4;
case 0x6025d6:c.instructions+=1;goto B6025d6;
case 0x6025db:goto L6025db;
case 0x6025de:c.instructions+=2;goto B6025de;
case 0x6025df:c.instructions+=1;goto B6025df;
case 0x6025e4:goto L6025e4;
case 0x6025e8:c.instructions+=6;goto B6025e8;
case 0x6025eb:c.instructions+=5;goto B6025eb;
case 0x6025ed:c.instructions+=4;goto B6025ed;
case 0x6025f4:c.instructions+=3;goto B6025f4;
case 0x6025f7:c.instructions+=2;goto B6025f7;
case 0x6025fd:c.instructions+=1;goto B6025fd;
case 0x6025ff:goto L6025ff;
case 0x602605:c.instructions+=7;goto B602605;
case 0x602606:c.instructions+=6;goto B602606;
case 0x602607:c.instructions+=5;goto B602607;
case 0x60260d:c.instructions+=4;goto B60260d;
case 0x60260e:c.instructions+=3;goto B60260e;
case 0x602610:c.instructions+=2;goto B602610;
case 0x602611:c.instructions+=1;goto B602611;
case 0x602614:goto L602614;
case 0x60261a:c.instructions+=7;goto B60261a;
case 0x60261b:c.instructions+=6;goto B60261b;
case 0x60261c:c.instructions+=5;goto B60261c;
case 0x602622:c.instructions+=4;goto B602622;
case 0x602623:c.instructions+=3;goto B602623;
case 0x602625:c.instructions+=2;goto B602625;
case 0x602626:c.instructions+=1;goto B602626;
case 0x602650:goto L602650;
case 0x602653:c.instructions+=5;goto B602653;
case 0x602654:c.instructions+=4;goto B602654;
case 0x602655:c.instructions+=3;goto B602655;
case 0x602656:c.instructions+=2;goto B602656;
case 0x602658:c.instructions+=1;goto B602658;
case 0x60265d:goto L60265d;
case 0x60265f:c.instructions+=1;goto B60265f;
case 0x602664:goto L602664;
case 0x60266b:c.instructions+=3;goto B60266b;
case 0x60266c:c.instructions+=2;goto B60266c;
case 0x60266e:c.instructions+=1;goto B60266e;
case 0x602673:goto L602673;
case 0x602675:c.instructions+=6;goto B602675;
case 0x602678:c.instructions+=5;goto B602678;
case 0x60267e:c.instructions+=4;goto B60267e;
case 0x602683:c.instructions+=3;goto B602683;
case 0x602685:c.instructions+=2;goto B602685;
case 0x602687:c.instructions+=1;goto B602687;
case 0x60268d:goto L60268d;
case 0x602693:c.instructions+=1;goto B602693;
case 0x602699:goto L602699;
case 0x60269e:c.instructions+=2;goto B60269e;
case 0x6026a1:c.instructions+=1;goto B6026a1;
case 0x6026a7:goto L6026a7;
case 0x6026ae:c.instructions+=10;goto B6026ae;
case 0x6026b1:c.instructions+=9;goto B6026b1;
case 0x6026b8:c.instructions+=8;goto B6026b8;
case 0x6026be:c.instructions+=7;goto B6026be;
case 0x6026c4:c.instructions+=6;goto B6026c4;
case 0x6026c6:c.instructions+=5;goto B6026c6;
case 0x6026ca:c.instructions+=4;goto B6026ca;
case 0x6026d0:c.instructions+=3;goto B6026d0;
case 0x6026d2:c.instructions+=2;goto B6026d2;
case 0x6026d5:c.instructions+=1;goto B6026d5;
case 0x6026d7:goto L6026d7;
case 0x6026dd:c.instructions+=8;goto B6026dd;
case 0x6026e3:c.instructions+=7;goto B6026e3;
case 0x6026e9:c.instructions+=6;goto B6026e9;
case 0x6026ed:c.instructions+=5;goto B6026ed;
case 0x6026f3:c.instructions+=4;goto B6026f3;
case 0x6026f9:c.instructions+=3;goto B6026f9;
case 0x6026fb:c.instructions+=2;goto B6026fb;
case 0x6026fe:c.instructions+=1;goto B6026fe;
case 0x602700:goto L602700;
case 0x602703:c.instructions+=8;goto B602703;
case 0x602705:c.instructions+=7;goto B602705;
case 0x602708:c.instructions+=6;goto B602708;
case 0x60270a:c.instructions+=5;goto B60270a;
case 0x60270c:c.instructions+=4;goto B60270c;
case 0x602712:c.instructions+=3;goto B602712;
case 0x602714:c.instructions+=2;goto B602714;
case 0x602717:c.instructions+=1;goto B602717;
case 0x602719:goto L602719;
case 0x602723:c.instructions+=1;goto B602723;
case 0x602725:goto L602725;
case 0x602727:c.instructions+=1;goto B602727;
case 0x602729:goto L602729;
case 0x60272b:c.instructions+=1;goto B60272b;
case 0x602730:goto L602730;
case 0x602732:c.instructions+=1;goto B602732;
case 0x602734:goto L602734;
case 0x602737:c.instructions+=1;goto B602737;
case 0x602741:goto L602741;
case 0x602743:c.instructions+=1;goto B602743;
case 0x602748:goto L602748;
case 0x60274e:c.instructions+=3;goto B60274e;
case 0x602750:c.instructions+=2;goto B602750;
case 0x602753:c.instructions+=1;goto B602753;
case 0x602755:goto L602755;
case 0x602758:c.instructions+=1;goto B602758;
case 0x60275e:goto L60275e;
case 0x602764:c.instructions+=3;goto B602764;
case 0x60276a:c.instructions+=2;goto B60276a;
case 0x602770:c.instructions+=1;goto B602770;
case 0x602775:goto L602775;
case 0x60277b:c.instructions+=8;goto B60277b;
case 0x60277d:c.instructions+=7;goto B60277d;
case 0x602783:c.instructions+=6;goto B602783;
case 0x602789:c.instructions+=5;goto B602789;
case 0x60278f:c.instructions+=4;goto B60278f;
case 0x602795:c.instructions+=3;goto B602795;
case 0x602797:c.instructions+=2;goto B602797;
case 0x60279a:c.instructions+=1;goto B60279a;
case 0x6027a0:goto L6027a0;
case 0x6027a3:c.instructions+=2;goto B6027a3;
case 0x6027a6:c.instructions+=1;goto B6027a6;
case 0x6027ab:goto L6027ab;
case 0x6027ad:c.instructions+=1;goto B6027ad;
case 0x6027b3:goto L6027b3;
case 0x6027b6:c.instructions+=3;goto B6027b6;
case 0x6027b9:c.instructions+=2;goto B6027b9;
case 0x6027bc:c.instructions+=1;goto B6027bc;
case 0x6027c1:goto L6027c1;
case 0x6027c4:c.instructions+=5;goto B6027c4;
case 0x6027c7:c.instructions+=4;goto B6027c7;
case 0x6027ca:c.instructions+=3;goto B6027ca;
case 0x6027cc:c.instructions+=2;goto B6027cc;
case 0x6027d4:c.instructions+=1;goto B6027d4;
case 0x6027d6:goto L6027d6;
case 0x6027da:c.instructions+=8;goto B6027da;
case 0x6027dd:c.instructions+=7;goto B6027dd;
case 0x6027e1:c.instructions+=6;goto B6027e1;
case 0x6027e5:c.instructions+=5;goto B6027e5;
case 0x6027eb:c.instructions+=4;goto B6027eb;
case 0x6027f1:c.instructions+=3;goto B6027f1;
case 0x6027f3:c.instructions+=2;goto B6027f3;
case 0x6027f6:c.instructions+=1;goto B6027f6;
case 0x6027f8:goto L6027f8;
case 0x6027fe:c.instructions+=4;goto B6027fe;
case 0x602800:c.instructions+=3;goto B602800;
case 0x602804:c.instructions+=2;goto B602804;
case 0x602806:c.instructions+=1;goto B602806;
case 0x602808:goto L602808;
case 0x60280a:c.instructions+=6;goto B60280a;
case 0x602812:c.instructions+=5;goto B602812;
case 0x602818:c.instructions+=4;goto B602818;
case 0x60281e:c.instructions+=3;goto B60281e;
case 0x602820:c.instructions+=2;goto B602820;
case 0x602823:c.instructions+=1;goto B602823;
case 0x602825:goto L602825;
case 0x60282d:goto L60282d;
case 0x602831:c.instructions+=3;goto B602831;
case 0x602832:c.instructions+=2;goto B602832;
case 0x602838:c.instructions+=1;goto B602838;
case 0x60283d:goto L60283d;
case 0x602843:c.instructions+=7;goto B602843;
case 0x602846:c.instructions+=6;goto B602846;
case 0x60284c:c.instructions+=5;goto B60284c;
case 0x602850:c.instructions+=4;goto B602850;
case 0x602852:c.instructions+=3;goto B602852;
case 0x602854:c.instructions+=2;goto B602854;
case 0x602857:c.instructions+=1;goto B602857;
case 0x602859:goto L602859;
case 0x60285b:c.instructions+=1;goto B60285b;
case 0x60285f:goto L60285f;
case 0x602865:goto L602865;
case 0x60286b:c.instructions+=3;goto B60286b;
case 0x602871:c.instructions+=2;goto B602871;
case 0x602877:c.instructions+=1;goto B602877;
case 0x60287c:goto L60287c;
case 0x602882:goto L602882;
case 0x602888:c.instructions+=4;goto B602888;
case 0x60288e:c.instructions+=3;goto B60288e;
case 0x602890:c.instructions+=2;goto B602890;
case 0x602893:c.instructions+=1;goto B602893;
case 0x602899:goto L602899;
case 0x60289f:c.instructions+=6;goto B60289f;
case 0x6028a5:c.instructions+=5;goto B6028a5;
case 0x6028ab:c.instructions+=4;goto B6028ab;
case 0x6028b1:c.instructions+=3;goto B6028b1;
case 0x6028b3:c.instructions+=2;goto B6028b3;
case 0x6028b6:c.instructions+=1;goto B6028b6;
case 0x6028bc:goto L6028bc;
case 0x6028c2:c.instructions+=2;goto B6028c2;
case 0x6028c8:c.instructions+=1;goto B6028c8;
case 0x6028ce:goto L6028ce;
case 0x6028d4:c.instructions+=1;goto B6028d4;
case 0x6028da:goto L6028da;
case 0x6028dd:c.instructions+=2;goto B6028dd;
case 0x6028df:c.instructions+=1;goto B6028df;
case 0x6028e1:goto L6028e1;
case 0x6028e6:c.instructions+=1;goto B6028e6;
case 0x6028e8:goto L6028e8;
case 0x6028ed:c.instructions+=8;goto B6028ed;
case 0x6028f0:c.instructions+=7;goto B6028f0;
case 0x6028f4:c.instructions+=6;goto B6028f4;
case 0x6028f8:c.instructions+=5;goto B6028f8;
case 0x6028fe:c.instructions+=4;goto B6028fe;
case 0x602904:c.instructions+=3;goto B602904;
case 0x602906:c.instructions+=2;goto B602906;
case 0x602909:c.instructions+=1;goto B602909;
case 0x60290f:goto L60290f;
case 0x602915:c.instructions+=2;goto B602915;
case 0x602918:c.instructions+=1;goto B602918;
case 0x60291e:goto L60291e;
case 0x602924:c.instructions+=2;goto B602924;
case 0x602927:c.instructions+=1;goto B602927;
case 0x60292d:goto L60292d;
case 0x602933:c.instructions+=4;goto B602933;
case 0x602939:c.instructions+=3;goto B602939;
case 0x60293b:c.instructions+=2;goto B60293b;
case 0x60293e:c.instructions+=1;goto B60293e;
case 0x602944:goto L602944;
case 0x602947:c.instructions+=2;goto B602947;
case 0x60294d:c.instructions+=1;goto B60294d;
case 0x60294f:goto L60294f;
case 0x602950:c.instructions+=2;goto B602950;
case 0x602952:c.instructions+=1;goto B602952;
case 0x602957:goto L602957;
case 0x60295d:goto L60295d;
case 0x60295f:c.instructions+=2;goto B60295f;
case 0x602961:c.instructions+=1;goto B602961;
case 0x602963:goto L602963;
case 0x602970:goto L602970;
case 0x602977:c.instructions+=3;goto B602977;
case 0x60297a:c.instructions+=2;goto B60297a;
case 0x602980:c.instructions+=1;goto B602980;
case 0x602982:goto L602982;
case 0x602983:c.instructions+=2;goto B602983;
case 0x602985:c.instructions+=1;goto B602985;
case 0x602987:goto L602987;
case 0x60298c:c.instructions+=6;goto B60298c;
case 0x602992:c.instructions+=5;goto B602992;
case 0x602998:c.instructions+=4;goto B602998;
case 0x60299b:c.instructions+=3;goto B60299b;
case 0x6029a1:c.instructions+=2;goto B6029a1;
case 0x6029a4:c.instructions+=1;goto B6029a4;
case 0x6029a6:goto L6029a6;
case 0x6029a8:c.instructions+=3;goto B6029a8;
case 0x6029aa:c.instructions+=2;goto B6029aa;
case 0x6029ac:c.instructions+=1;goto B6029ac;
case 0x6029b1:goto L6029b1;
case 0x6029b6:goto L6029b6;
case 0x6029bc:c.instructions+=7;goto B6029bc;
case 0x6029c1:c.instructions+=6;goto B6029c1;
case 0x6029cb:c.instructions+=5;goto B6029cb;
case 0x6029d1:c.instructions+=4;goto B6029d1;
case 0x6029d7:c.instructions+=3;goto B6029d7;
case 0x6029da:c.instructions+=2;goto B6029da;
case 0x6029db:c.instructions+=1;goto B6029db;
case 0x6029e0:goto L6029e0;
case 0x6029e3:c.instructions+=4;goto B6029e3;
case 0x6029ea:c.instructions+=3;goto B6029ea;
case 0x6029f1:c.instructions+=2;goto B6029f1;
case 0x6029f8:c.instructions+=1;goto B6029f8;
case 0x6029fe:goto L6029fe;
case 0x602a01:c.instructions+=2;goto B602a01;
case 0x602a03:c.instructions+=1;goto B602a03;
case 0x602a05:goto L602a05;
case 0x602a08:c.instructions+=2;goto B602a08;
case 0x602a0a:c.instructions+=1;goto B602a0a;
case 0x602a0c:goto L602a0c;
case 0x602a0f:c.instructions+=1;goto B602a0f;
case 0x602a14:goto L602a14;
case 0x602a16:c.instructions+=1;goto B602a16;
case 0x602a18:goto L602a18;
case 0x602a1e:c.instructions+=1;goto B602a1e;
case 0x602a20:goto L602a20;
case 0x602a23:c.instructions+=2;goto B602a23;
case 0x602a24:c.instructions+=1;goto B602a24;
case 0x602a29:goto L602a29;
case 0x602a2c:c.instructions+=1;goto B602a2c;
case 0x602a32:goto L602a32;
case 0x602a39:c.instructions+=1;goto B602a39;
case 0x602a3b:goto L602a3b;
case 0x602a41:c.instructions+=2;goto B602a41;
case 0x602a43:c.instructions+=1;goto B602a43;
case 0x602a45:goto L602a45;
case 0x602a49:c.instructions+=1;goto B602a49;
case 0x602a4b:goto L602a4b;
case 0x602a50:c.instructions+=3;goto B602a50;
case 0x602a51:c.instructions+=2;goto B602a51;
case 0x602a53:c.instructions+=1;goto B602a53;
case 0x602a58:goto L602a58;
case 0x602a5b:c.instructions+=3;goto B602a5b;
case 0x602a5d:c.instructions+=2;goto B602a5d;
case 0x602a62:c.instructions+=1;goto B602a62;
case 0x602a64:goto L602a64;
case 0x602a67:c.instructions+=2;goto B602a67;
case 0x602a69:c.instructions+=1;goto B602a69;
case 0x602a6b:goto L602a6b;
case 0x602a6f:c.instructions+=1;goto B602a6f;
case 0x602a71:goto L602a71;
case 0x602a77:c.instructions+=1;goto B602a77;
case 0x602a79:goto L602a79;
case 0x602a7d:c.instructions+=2;goto B602a7d;
case 0x602a83:c.instructions+=1;goto B602a83;
case 0x602a85:goto L602a85;
case 0x602a87:c.instructions+=1;goto B602a87;
case 0x602a89:goto L602a89;
case 0x602a8b:c.instructions+=1;goto B602a8b;
case 0x602a90:goto L602a90;
case 0x602a92:goto L602a92;
case 0x602a94:c.instructions+=1;goto B602a94;
case 0x602a96:goto L602a96;
case 0x602a98:c.instructions+=1;goto B602a98;
case 0x602a9d:goto L602a9d;
case 0x602aa3:c.instructions+=1;goto B602aa3;
case 0x602aa5:goto L602aa5;
case 0x602aab:c.instructions+=1;goto B602aab;
case 0x602aad:goto L602aad;
case 0x602aaf:c.instructions+=1;goto B602aaf;
case 0x602ab4:goto L602ab4;
case 0x602ab6:goto L602ab6;
case 0x602abc:c.instructions+=1;goto B602abc;
case 0x602abe:goto L602abe;
case 0x602ac8:goto L602ac8;
case 0x602ace:c.instructions+=1;goto B602ace;
case 0x602ad0:goto L602ad0;
case 0x602ad2:c.instructions+=1;goto B602ad2;
case 0x602ad7:goto L602ad7;
case 0x602ad9:c.instructions+=1;goto B602ad9;
case 0x602ade:goto L602ade;
case 0x602ae4:c.instructions+=2;goto B602ae4;
case 0x602aea:c.instructions+=1;goto B602aea;
case 0x602aec:goto L602aec;
case 0x602aed:c.instructions+=2;goto B602aed;
case 0x602af0:c.instructions+=1;goto B602af0;
case 0x602af1:goto L602af1;
case 0x602af3:goto L602af3;
case 0x602af9:c.instructions+=1;goto B602af9;
case 0x602aff:goto L602aff;
case 0x602b05:c.instructions+=4;goto B602b05;
case 0x602b0a:c.instructions+=3;goto B602b0a;
case 0x602b0d:c.instructions+=2;goto B602b0d;
case 0x602b10:c.instructions+=1;goto B602b10;
case 0x602b12:goto L602b12;
case 0x602b13:c.instructions+=2;goto B602b13;
case 0x602b16:c.instructions+=1;goto B602b16;
case 0x602b17:goto L602b17;
case 0x602b1a:c.instructions+=18;goto B602b1a;
case 0x602b1d:c.instructions+=17;goto B602b1d;
case 0x602b20:c.instructions+=16;goto B602b20;
case 0x602b22:c.instructions+=15;goto B602b22;
case 0x602b24:c.instructions+=14;goto B602b24;
case 0x602b27:c.instructions+=13;goto B602b27;
case 0x602b2a:c.instructions+=12;goto B602b2a;
case 0x602b2c:c.instructions+=11;goto B602b2c;
case 0x602b2e:c.instructions+=10;goto B602b2e;
case 0x602b30:c.instructions+=9;goto B602b30;
case 0x602b32:c.instructions+=8;goto B602b32;
case 0x602b34:c.instructions+=7;goto B602b34;
case 0x602b36:c.instructions+=6;goto B602b36;
case 0x602b38:c.instructions+=5;goto B602b38;
case 0x602b3a:c.instructions+=4;goto B602b3a;
case 0x602b40:c.instructions+=3;goto B602b40;
case 0x602b42:c.instructions+=2;goto B602b42;
case 0x602b45:c.instructions+=1;goto B602b45;
case 0x602b4b:goto L602b4b;
case 0x602b4c:c.instructions+=2;goto B602b4c;
case 0x602b52:c.instructions+=1;goto B602b52;
case 0x602b57:goto L602b57;
case 0x602b59:c.instructions+=1;goto B602b59;
case 0x602b5b:goto L602b5b;
case 0x602b61:c.instructions+=3;goto B602b61;
case 0x602b62:c.instructions+=2;goto B602b62;
case 0x602b67:c.instructions+=1;goto B602b67;
case 0x602b69:goto L602b69;
case 0x602b6e:goto L602b6e;
case 0x602b70:c.instructions+=1;goto B602b70;
case 0x602b72:goto L602b72;
case 0x602b74:c.instructions+=1;goto B602b74;
case 0x602b79:goto L602b79;
case 0x602b7b:c.instructions+=1;goto B602b7b;
case 0x602b80:goto L602b80;
case 0x602b86:c.instructions+=4;goto B602b86;
case 0x602b87:c.instructions+=3;goto B602b87;
case 0x602b8d:c.instructions+=2;goto B602b8d;
case 0x602b93:c.instructions+=1;goto B602b93;
case 0x602b95:goto L602b95;
case 0x602b96:c.instructions+=2;goto B602b96;
case 0x602b99:c.instructions+=1;goto B602b99;
case 0x602b9a:goto L602b9a;
case 0x602b9d:c.instructions+=14;goto B602b9d;
case 0x602b9f:c.instructions+=13;goto B602b9f;
case 0x602ba2:c.instructions+=12;goto B602ba2;
case 0x602ba4:c.instructions+=11;goto B602ba4;
case 0x602ba7:c.instructions+=10;goto B602ba7;
case 0x602ba9:c.instructions+=9;goto B602ba9;
case 0x602bac:c.instructions+=8;goto B602bac;
case 0x602bae:c.instructions+=7;goto B602bae;
case 0x602baf:c.instructions+=6;goto B602baf;
case 0x602bb2:c.instructions+=5;goto B602bb2;
case 0x602bb4:c.instructions+=4;goto B602bb4;
case 0x602bb7:c.instructions+=3;goto B602bb7;
case 0x602bbe:c.instructions+=2;goto B602bbe;
case 0x602bc6:c.instructions+=1;goto B602bc6;
case 0x602bc8:goto L602bc8;
case 0x602bc9:goto L602bc9;
case 0x602bca:c.instructions+=4;goto B602bca;
case 0x602bcb:c.instructions+=3;goto B602bcb;
case 0x602bcc:c.instructions+=2;goto B602bcc;
case 0x602bcf:c.instructions+=1;goto B602bcf;
case 0x602bd0:goto L602bd0;
case 0x602bd1:c.instructions+=8;goto B602bd1;
case 0x602bd3:c.instructions+=7;goto B602bd3;
case 0x602bd6:c.instructions+=6;goto B602bd6;
case 0x602bd7:c.instructions+=5;goto B602bd7;
case 0x602bda:c.instructions+=4;goto B602bda;
case 0x602bdd:c.instructions+=3;goto B602bdd;
case 0x602bde:c.instructions+=2;goto B602bde;
case 0x602be0:c.instructions+=1;goto B602be0;
case 0x602be6:goto L602be6;
case 0x602bed:c.instructions+=2;goto B602bed;
case 0x602bee:c.instructions+=1;goto B602bee;
case 0x602bf5:goto L602bf5;
case 0x602bfa:c.instructions+=1;goto B602bfa;
case 0x602bff:goto L602bff;
case 0x602c01:c.instructions+=1;goto B602c01;
case 0x602c03:goto L602c03;
case 0x602c08:goto L602c08;
case 0x602c0a:c.instructions+=1;goto B602c0a;
case 0x602c10:goto L602c10;
case 0x602c15:c.instructions+=1;goto B602c15;
case 0x602c1a:goto L602c1a;
case 0x602c1c:c.instructions+=1;goto B602c1c;
case 0x602c22:goto L602c22;
case 0x602c27:c.instructions+=1;goto B602c27;
case 0x602c2c:goto L602c2c;
case 0x602c2e:c.instructions+=1;goto B602c2e;
case 0x602c34:goto L602c34;
case 0x602c36:c.instructions+=2;goto B602c36;
case 0x602c3b:c.instructions+=1;goto B602c3b;
case 0x602c40:goto L602c40;
case 0x602c42:c.instructions+=1;goto B602c42;
case 0x602c47:goto L602c47;
case 0x602c49:c.instructions+=1;goto B602c49;
case 0x602c4b:goto L602c4b;
case 0x602c4e:c.instructions+=2;goto B602c4e;
case 0x602c51:c.instructions+=1;goto B602c51;
case 0x602c56:goto L602c56;
case 0x602c59:c.instructions+=4;goto B602c59;
case 0x602c5a:c.instructions+=3;goto B602c5a;
case 0x602c60:c.instructions+=2;goto B602c60;
case 0x602c62:c.instructions+=1;goto B602c62;
case 0x602c67:goto L602c67;
case 0x602c68:c.instructions+=4;goto B602c68;
case 0x602c69:c.instructions+=3;goto B602c69;
case 0x602c6a:c.instructions+=2;goto B602c6a;
case 0x602c6b:c.instructions+=1;goto B602c6b;
case 0x602c6e:goto L602c6e;
case 0x602c73:c.instructions+=1;goto B602c73;
case 0x602c78:goto L602c78;
case 0x602c7a:c.instructions+=1;goto B602c7a;
case 0x602c80:goto L602c80;
case 0x602c86:c.instructions+=9;goto B602c86;
case 0x602c8c:c.instructions+=8;goto B602c8c;
case 0x602c8e:c.instructions+=7;goto B602c8e;
case 0x602c91:c.instructions+=6;goto B602c91;
case 0x602c94:c.instructions+=5;goto B602c94;
case 0x602c9a:c.instructions+=4;goto B602c9a;
case 0x602ca0:c.instructions+=3;goto B602ca0;
case 0x602ca2:c.instructions+=2;goto B602ca2;
case 0x602ca5:c.instructions+=1;goto B602ca5;
case 0x602cab:goto L602cab;
case 0x602cb1:c.instructions+=2;goto B602cb1;
case 0x602cb4:c.instructions+=1;goto B602cb4;
case 0x602cb6:goto L602cb6;
case 0x602cb9:c.instructions+=1;goto B602cb9;
case 0x602cbf:goto L602cbf;
case 0x602cc5:c.instructions+=2;goto B602cc5;
case 0x602cc7:c.instructions+=1;goto B602cc7;
case 0x602ccd:goto L602ccd;
case 0x602cd0:c.instructions+=3;goto B602cd0;
case 0x602cd5:c.instructions+=2;goto B602cd5;
case 0x602cd7:c.instructions+=1;goto B602cd7;
case 0x602cdd:goto L602cdd;
case 0x602ce0:c.instructions+=2;goto B602ce0;
case 0x602ce2:c.instructions+=1;goto B602ce2;
case 0x602ce8:goto L602ce8;
case 0x602ce9:c.instructions+=2;goto B602ce9;
case 0x602ceb:c.instructions+=1;goto B602ceb;
case 0x602cf0:goto L602cf0;
case 0x602cf1:c.instructions+=4;goto B602cf1;
case 0x602cf2:c.instructions+=3;goto B602cf2;
case 0x602cf3:c.instructions+=2;goto B602cf3;
case 0x602cf4:c.instructions+=1;goto B602cf4;
case 0x602cf7:goto L602cf7;
case 0x602cfa:c.instructions+=2;goto B602cfa;
case 0x602cfc:c.instructions+=1;goto B602cfc;
case 0x602d02:goto L602d02;
case 0x602d04:c.instructions+=2;goto B602d04;
case 0x602d06:c.instructions+=1;goto B602d06;
case 0x602d0b:goto L602d0b;
case 0x602d0c:c.instructions+=4;goto B602d0c;
case 0x602d0d:c.instructions+=3;goto B602d0d;
case 0x602d0e:c.instructions+=2;goto B602d0e;
case 0x602d0f:c.instructions+=1;goto B602d0f;
case 0x602d12:goto L602d12;
case 0x602d19:c.instructions+=1;goto B602d19;
case 0x602d1f:goto L602d1f;
case 0x602d24:c.instructions+=1;goto B602d24;
case 0x602d29:goto L602d29;
case 0x602d2b:c.instructions+=1;goto B602d2b;
case 0x602d31:goto L602d31;
case 0x602d36:c.instructions+=1;goto B602d36;
case 0x602d3b:goto L602d3b;
case 0x602d3c:c.instructions+=4;goto B602d3c;
case 0x602d3d:c.instructions+=3;goto B602d3d;
case 0x602d3e:c.instructions+=2;goto B602d3e;
case 0x602d3f:c.instructions+=1;goto B602d3f;
case 0x602d42:goto L602d42;
case 0x602d47:c.instructions+=1;goto B602d47;
case 0x602d4c:goto L602d4c;
case 0x602d4e:c.instructions+=1;goto B602d4e;
case 0x602d54:goto L602d54;
case 0x602d59:c.instructions+=1;goto B602d59;
case 0x602d5e:goto L602d5e;
case 0x602d60:c.instructions+=1;goto B602d60;
case 0x602d66:goto L602d66;
case 0x602d6b:c.instructions+=1;goto B602d6b;
case 0x602d70:goto L602d70;
case 0x602d72:c.instructions+=1;goto B602d72;
case 0x602d78:goto L602d78;
case 0x602d7a:c.instructions+=2;goto B602d7a;
case 0x602d7f:c.instructions+=1;goto B602d7f;
case 0x602d84:goto L602d84;
case 0x602d87:c.instructions+=3;goto B602d87;
case 0x602d88:c.instructions+=2;goto B602d88;
case 0x602d8d:c.instructions+=1;goto B602d8d;
case 0x602d92:goto L602d92;
case 0x602d93:c.instructions+=4;goto B602d93;
case 0x602d94:c.instructions+=3;goto B602d94;
case 0x602d95:c.instructions+=2;goto B602d95;
case 0x602d96:c.instructions+=1;goto B602d96;
case 0x602d99:goto L602d99;
case 0x602d9e:c.instructions+=1;goto B602d9e;
case 0x602da3:goto L602da3;
case 0x602da5:c.instructions+=1;goto B602da5;
case 0x602da7:goto L602da7;
case 0x602dad:c.instructions+=2;goto B602dad;
case 0x602daf:c.instructions+=1;goto B602daf;
case 0x602db1:goto L602db1;
case 0x602db6:c.instructions+=1;goto B602db6;
case 0x602dbb:goto L602dbb;
case 0x602dbd:c.instructions+=1;goto B602dbd;
case 0x602dbf:goto L602dbf;
case 0x602dc4:c.instructions+=1;goto B602dc4;
case 0x602dc9:goto L602dc9;
case 0x602dcb:c.instructions+=1;goto B602dcb;
case 0x602dcd:goto L602dcd;
case 0x602dd2:c.instructions+=1;goto B602dd2;
case 0x602dd7:goto L602dd7;
case 0x602dd9:c.instructions+=1;goto B602dd9;
case 0x602ddb:goto L602ddb;
case 0x602ddd:c.instructions+=2;goto B602ddd;
case 0x602de2:c.instructions+=1;goto B602de2;
case 0x602de7:goto L602de7;
case 0x602dec:c.instructions+=1;goto B602dec;
case 0x602df1:goto L602df1;
case 0x602df4:c.instructions+=4;goto B602df4;
case 0x602df5:c.instructions+=3;goto B602df5;
case 0x602dfb:c.instructions+=2;goto B602dfb;
case 0x602dfd:c.instructions+=1;goto B602dfd;
case 0x602e02:goto L602e02;
case 0x602e03:c.instructions+=4;goto B602e03;
case 0x602e04:c.instructions+=3;goto B602e04;
case 0x602e05:c.instructions+=2;goto B602e05;
case 0x602e06:c.instructions+=1;goto B602e06;
case 0x602e09:goto L602e09;
case 0x602e0e:c.instructions+=3;goto B602e0e;
case 0x602e13:c.instructions+=2;goto B602e13;
case 0x602e15:c.instructions+=1;goto B602e15;
case 0x602e17:goto L602e17;
case 0x602e1c:c.instructions+=1;goto B602e1c;
case 0x602e21:goto L602e21;
case 0x602e23:c.instructions+=1;goto B602e23;
case 0x602e25:goto L602e25;
case 0x602e27:c.instructions+=1;goto B602e27;
case 0x602e29:goto L602e29;
case 0x602e2b:goto L602e2b;
case 0x602e31:c.instructions+=2;goto B602e31;
case 0x602e33:c.instructions+=1;goto B602e33;
case 0x602e39:goto L602e39;
case 0x602e3b:c.instructions+=1;goto B602e3b;
case 0x602e41:goto L602e41;
case 0x602e47:c.instructions+=2;goto B602e47;
case 0x602e49:c.instructions+=1;goto B602e49;
case 0x602e4f:goto L602e4f;
case 0x602e54:c.instructions+=1;goto B602e54;
case 0x602e59:goto L602e59;
case 0x602e5b:c.instructions+=1;goto B602e5b;
case 0x602e61:goto L602e61;
case 0x602e67:c.instructions+=2;goto B602e67;
case 0x602e69:c.instructions+=1;goto B602e69;
case 0x602e6e:goto L602e6e;
case 0x602e74:c.instructions+=3;goto B602e74;
case 0x602e79:c.instructions+=2;goto B602e79;
case 0x602e7f:c.instructions+=1;goto B602e7f;
case 0x602e84:goto L602e84;
case 0x602e85:c.instructions+=4;goto B602e85;
case 0x602e86:c.instructions+=3;goto B602e86;
case 0x602e87:c.instructions+=2;goto B602e87;
case 0x602e88:c.instructions+=1;goto B602e88;
case 0x602e8b:goto L602e8b;
case 0x602e90:c.instructions+=1;goto B602e90;
case 0x602e95:goto L602e95;
case 0x602e97:c.instructions+=1;goto B602e97;
case 0x602e9d:goto L602e9d;
case 0x602ea2:c.instructions+=1;goto B602ea2;
case 0x602ea7:goto L602ea7;
case 0x602ea9:c.instructions+=1;goto B602ea9;
case 0x602eaf:goto L602eaf;
case 0x602eb4:c.instructions+=1;goto B602eb4;
case 0x602eb9:goto L602eb9;
case 0x602ebb:c.instructions+=1;goto B602ebb;
case 0x602ec1:goto L602ec1;
case 0x602ec3:c.instructions+=2;goto B602ec3;
case 0x602ec8:c.instructions+=1;goto B602ec8;
case 0x602ecd:goto L602ecd;
case 0x602ed0:c.instructions+=4;goto B602ed0;
case 0x602ed6:c.instructions+=3;goto B602ed6;
case 0x602ed7:c.instructions+=2;goto B602ed7;
case 0x602ed9:c.instructions+=1;goto B602ed9;
case 0x602ede:goto L602ede;
case 0x602edf:c.instructions+=4;goto B602edf;
case 0x602ee0:c.instructions+=3;goto B602ee0;
case 0x602ee1:c.instructions+=2;goto B602ee1;
case 0x602ee2:c.instructions+=1;goto B602ee2;
case 0x602ee5:goto L602ee5;
case 0x602eea:c.instructions+=1;goto B602eea;
case 0x602eef:goto L602eef;
case 0x602ef1:c.instructions+=1;goto B602ef1;
case 0x602ef7:goto L602ef7;
case 0x602efc:c.instructions+=1;goto B602efc;
case 0x602f01:goto L602f01;
case 0x602f03:c.instructions+=1;goto B602f03;
case 0x602f09:goto L602f09;
case 0x602f0e:c.instructions+=1;goto B602f0e;
case 0x602f13:goto L602f13;
case 0x602f15:c.instructions+=1;goto B602f15;
case 0x602f1b:goto L602f1b;
case 0x602f1d:c.instructions+=2;goto B602f1d;
case 0x602f22:c.instructions+=1;goto B602f22;
case 0x602f27:goto L602f27;
case 0x602f2a:c.instructions+=4;goto B602f2a;
case 0x602f2b:c.instructions+=3;goto B602f2b;
case 0x602f31:c.instructions+=2;goto B602f31;
case 0x602f33:c.instructions+=1;goto B602f33;
case 0x602f38:goto L602f38;
case 0x602f39:c.instructions+=4;goto B602f39;
case 0x602f3a:c.instructions+=3;goto B602f3a;
case 0x602f3b:c.instructions+=2;goto B602f3b;
case 0x602f3c:c.instructions+=1;goto B602f3c;
case 0x602f3f:goto L602f3f;
case 0x602f44:c.instructions+=2;goto B602f44;
case 0x602f46:c.instructions+=1;goto B602f46;
case 0x602f4c:goto L602f4c;
case 0x602f51:c.instructions+=2;goto B602f51;
case 0x602f53:c.instructions+=1;goto B602f53;
case 0x602f59:goto L602f59;
case 0x602f5c:c.instructions+=2;goto B602f5c;
case 0x602f5e:c.instructions+=1;goto B602f5e;
case 0x602f60:goto L602f60;
case 0x602f65:c.instructions+=1;goto B602f65;
case 0x602f67:goto L602f67;
case 0x602f6d:c.instructions+=8;goto B602f6d;
case 0x602f6f:c.instructions+=7;goto B602f6f;
case 0x602f72:c.instructions+=6;goto B602f72;
case 0x602f75:c.instructions+=5;goto B602f75;
case 0x602f7b:c.instructions+=4;goto B602f7b;
case 0x602f81:c.instructions+=3;goto B602f81;
case 0x602f83:c.instructions+=2;goto B602f83;
case 0x602f86:c.instructions+=1;goto B602f86;
case 0x602f8c:goto L602f8c;
case 0x602f91:c.instructions+=2;goto B602f91;
case 0x602f94:c.instructions+=1;goto B602f94;
case 0x602f9a:goto L602f9a;
case 0x602fa0:c.instructions+=2;goto B602fa0;
case 0x602fa3:c.instructions+=1;goto B602fa3;
case 0x602fa9:goto L602fa9;
case 0x602faf:c.instructions+=4;goto B602faf;
case 0x602fb5:c.instructions+=3;goto B602fb5;
case 0x602fb7:c.instructions+=2;goto B602fb7;
case 0x602fba:c.instructions+=1;goto B602fba;
case 0x602fc0:goto L602fc0;
case 0x602fc3:c.instructions+=3;goto B602fc3;
case 0x602fc9:c.instructions+=2;goto B602fc9;
case 0x602fcb:c.instructions+=1;goto B602fcb;
case 0x602fcd:goto L602fcd;
case 0x602fcf:c.instructions+=2;goto B602fcf;
case 0x602fd1:c.instructions+=1;goto B602fd1;
case 0x602fd6:goto L602fd6;
case 0x602fdc:goto L602fdc;
case 0x602fde:c.instructions+=2;goto B602fde;
case 0x602fe0:c.instructions+=1;goto B602fe0;
case 0x602fe2:goto L602fe2;
case 0x602ff0:goto L602ff0;
case 0x602ff7:c.instructions+=2;goto B602ff7;
case 0x602ffa:c.instructions+=1;goto B602ffa;
default:missing_instruction(c.pc);}
B602000:L602000:{c.instructions+=10;NFSU2_TR(0x602000);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B602004:{NFSU2_TR(0x602004);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B602005:{NFSU2_TR(0x602005);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B602006:{NFSU2_TR(0x602006);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B602007:{NFSU2_TR(0x602007);
__builtin_memmove((R+20),(R+4),4);
}
B602009:{NFSU2_TR(0x602009);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60200a:{NFSU2_TR(0x60200a);
u8 U[16];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+28),(U+12),4);
}
B60200e:{NFSU2_TR(0x60200e);
w1(R+12,u8(u32(r1(R+12))^u32(r1(R+12))));
}
B602010:{NFSU2_TR(0x602010);
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
B602012:{NFSU2_TR(0x602012);
if(r1(R+518)){{goto L602119;}}
}
B602018:L602018:{c.instructions+=3;NFSU2_TR(0x602018);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B60201a:{NFSU2_TR(0x60201a);
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
B60201d:{NFSU2_TR(0x60201d);
if(r1(R+518)){{goto L602040;}}
}
B60201f:L60201f:{c.instructions+=2;NFSU2_TR(0x60201f);
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
B602022:{NFSU2_TR(0x602022);
if(r1(R+518)){{goto L602040;}}
}
B602024:L602024:{c.instructions+=2;NFSU2_TR(0x602024);
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
B602026:{NFSU2_TR(0x602026);
if(r1(R+518)){{goto L602040;}}
}
B602028:L602028:{c.instructions+=2;NFSU2_TR(0x602028);
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
B60202b:{NFSU2_TR(0x60202b);
if(r1(R+518)){{goto L602040;}}
}
B60202d:L60202d:{c.instructions+=2;NFSU2_TR(0x60202d);
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
B602030:{NFSU2_TR(0x602030);
if(r1(R+518)){{goto L602040;}}
}
B602032:L602032:{c.instructions+=2;NFSU2_TR(0x602032);
u8 U[8];
__builtin_memmove((U+0),gp(0x89cf48),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x6ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x6ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B602039:{NFSU2_TR(0x602039);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L60204b;}}
}
B60203b:L60203b:{c.instructions+=2;NFSU2_TR(0x60203b);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
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
B60203e:{NFSU2_TR(0x60203e);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L60204b;}}
}
B602040:L602040:{c.instructions+=7;NFSU2_TR(0x602040);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B602041:{NFSU2_TR(0x602041);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B602042:{NFSU2_TR(0x602042);
w1(R+12,u8(0x1ull));
}
B602044:{NFSU2_TR(0x602044);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B602045:{NFSU2_TR(0x602045);
__builtin_memmove((R+0),(R+12),1);
}
B602047:{NFSU2_TR(0x602047);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B602048:{NFSU2_TR(0x602048);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B60204b:L60204b:{c.instructions+=4;NFSU2_TR(0x60204b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B60204e:{NFSU2_TR(0x60204e);
w1(R+12,u8(u32(r1(R+12))^u32(r1(R+12))));
}
B602050:{NFSU2_TR(0x602050);
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
B602052:{NFSU2_TR(0x602052);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L602119;}}
}
B602058:L602058:{c.instructions+=4;NFSU2_TR(0x602058);
__builtin_memmove((R+0),gp(0x850098),1);
}
B60205d:{NFSU2_TR(0x60205d);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B60205f:{NFSU2_TR(0x60205f);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B602063:{NFSU2_TR(0x602063);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L60206e;}}
}
B602065:L602065:{c.instructions+=3;NFSU2_TR(0x602065);
__builtin_memmove((R+0),gp(0x864fac),4);
}
B60206a:{NFSU2_TR(0x60206a);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B60206c:{NFSU2_TR(0x60206c);
if(r1(R+518)){{goto L6020d1;}}
}
B60206e:L60206e:{c.instructions+=3;NFSU2_TR(0x60206e);
__builtin_memmove((R+0),gp(0x89d061),1);
}
B602073:{NFSU2_TR(0x602073);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B602075:{NFSU2_TR(0x602075);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6020d1;}}
}
B602077:L602077:{c.instructions+=2;NFSU2_TR(0x602077);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B60207a:{NFSU2_TR(0x60207a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6020d1;}}
}
B60207c:L60207c:{c.instructions+=2;NFSU2_TR(0x60207c);
w4(R+4,u32(0x89e7a0ull));
}
B602081:{NFSU2_TR(0x602081);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x602086ull));
TAIL_STATIC(0x401910u,401);
}
B602086:L602086:{c.instructions+=2;NFSU2_TR(0x602086);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B602088:{NFSU2_TR(0x602088);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6020d1;}}
}
B60208a:L60208a:{c.instructions+=2;NFSU2_TR(0x60208a);
w4(R+4,u32(0x89e7a0ull));
}
B60208f:{NFSU2_TR(0x60208f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x602094ull));
TAIL_STATIC(0x4018f0u,401);
}
B602094:L602094:{c.instructions+=2;NFSU2_TR(0x602094);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B602096:{NFSU2_TR(0x602096);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6020d1;}}
}
B602098:L602098:{c.instructions+=3;NFSU2_TR(0x602098);
__builtin_memmove((R+0),gp(0x89e7b4),4);
}
B60209d:{NFSU2_TR(0x60209d);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B60209f:{NFSU2_TR(0x60209f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6020d1;}}
}
B6020a1:L6020a1:{c.instructions+=2;NFSU2_TR(0x6020a1);
__builtin_memmove((R+4),(R+28),4);
}
B6020a3:{NFSU2_TR(0x6020a3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6020a8ull));
TAIL_STATIC(0x5fe0f0u,5fe);
}
B6020a8:L6020a8:{c.instructions+=3;NFSU2_TR(0x6020a8);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x9ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(s32(s8(r1(U+4)))));
}
B6020ac:{NFSU2_TR(0x6020ac);
u8 U[8];
__builtin_memmove((U+0),gp(0x89e7bc),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6020b2:{NFSU2_TR(0x6020b2);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6020bf;}}
}
B6020b4:L6020b4:{c.instructions+=3;NFSU2_TR(0x6020b4);
w4(R+4,u32(m2(0x8500ba)));
}
B6020bb:{NFSU2_TR(0x6020bb);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6020bd:{NFSU2_TR(0x6020bd);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L6020d1;}}
}
B6020bf:L6020bf:{c.instructions+=3;NFSU2_TR(0x6020bf);
u8 U[4];
w4(U+0,u32(0xbull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6020c1:{NFSU2_TR(0x6020c1);
__builtin_memmove((R+4),(R+28),4);
}
B6020c3:{NFSU2_TR(0x6020c3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6020c8ull));
TAIL_STATIC(0x5f9010u,5f9);
}
B6020c8:L6020c8:{c.instructions+=6;NFSU2_TR(0x6020c8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6020c9:{NFSU2_TR(0x6020c9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6020ca:{NFSU2_TR(0x6020ca);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6020cb:{NFSU2_TR(0x6020cb);
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
B6020cd:{NFSU2_TR(0x6020cd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6020ce:{NFSU2_TR(0x6020ce);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6020d1:L6020d1:{c.instructions+=7;NFSU2_TR(0x6020d1);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6020d5:{NFSU2_TR(0x6020d5);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6020d9:{NFSU2_TR(0x6020d9);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6020da:{NFSU2_TR(0x6020da);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6020db:{NFSU2_TR(0x6020db);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6020dc:{NFSU2_TR(0x6020dc);
__builtin_memmove((R+4),(R+28),4);
}
B6020de:{NFSU2_TR(0x6020de);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6020e3ull));
TAIL_STATIC(0x601960u,601);
}
B6020e3:L6020e3:{c.instructions+=3;NFSU2_TR(0x6020e3);
u8 U[14];
__builtin_memmove((U+6),(R+24),4);
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
B6020e6:{NFSU2_TR(0x6020e6);
w1(R+12,u8(0x1ull));
}
B6020e8:{NFSU2_TR(0x6020e8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L602119;}}
}
B6020ea:L6020ea:{c.instructions+=2;NFSU2_TR(0x6020ea);
u8 U[14];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x250ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((U+10),(U+4),2);
w1(R+512,u8((r2(U+10))<(u16(0x0ull))));
w1(R+523,sborrow<u16>(r2(U+10),u16(0x0ull)));
w2(U+12,u16(u32(r2(U+10))-u32(u16(0x0ull))));
w1(R+519,u8(s16(r2(U+12))<s16(u16(0x0ull))));
w1(R+518,u8((r2(U+12))==(u16(0x0ull))));
w2(U+6,u16(u32(r2(U+12))&u32(u16(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r2(U+6)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B6020f2:{NFSU2_TR(0x6020f2);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L602119;}}
}
B6020f4:L6020f4:{c.instructions+=3;NFSU2_TR(0x6020f4);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6020f7:{NFSU2_TR(0x6020f7);
w4(R+20,u32(0x6ull));
}
B6020fc:{NFSU2_TR(0x6020fc);
__builtin_memmove((R+16),(R+16),4);
}
B602100:L602100:{c.instructions+=3;NFSU2_TR(0x602100);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B602102:{NFSU2_TR(0x602102);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B602104:{NFSU2_TR(0x602104);
if(r1(R+518)){{goto L602113;}}
}
B602106:L602106:{c.instructions+=2;NFSU2_TR(0x602106);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B602108:{NFSU2_TR(0x602108);
if(r1(R+518)){{goto L602113;}}
}
B60210a:L60210a:{c.instructions+=3;NFSU2_TR(0x60210a);
u8 U[4];
w4(U+0,u32(0xcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60210c:{NFSU2_TR(0x60210c);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60210e:{NFSU2_TR(0x60210e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x602113ull));
TAIL_STATIC(0x6090f0u,609);
}
B602113:L602113:{c.instructions+=3;NFSU2_TR(0x602113);
w1(R+512,carry<u32>(r4(R+24),u32(0x4ull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x4ull))));
}
B602116:{NFSU2_TR(0x602116);
u8 U[6];
w1(R+523,sborrow<u32>(r4(R+20),u32(0x1ull)));
w4(R+20,u32(u32(r4(R+20))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+20))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+20))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+20))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B602117:{NFSU2_TR(0x602117);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x602100u);}goto L602100;}}
}
B602119:L602119:{c.instructions+=6;NFSU2_TR(0x602119);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B60211a:{NFSU2_TR(0x60211a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B60211b:{NFSU2_TR(0x60211b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B60211c:{NFSU2_TR(0x60211c);
__builtin_memmove((R+0),(R+12),1);
}
B60211e:{NFSU2_TR(0x60211e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B60211f:{NFSU2_TR(0x60211f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B602130:L602130:{c.instructions+=4;NFSU2_TR(0x602130);
__builtin_memmove((R+4),gp(0x89e840),1);
}
B602136:{NFSU2_TR(0x602136);
w4(R+0,u32(0x1ull));
}
B60213b:{NFSU2_TR(0x60213b);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+0))&u32(r1(R+4))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B60213d:{NFSU2_TR(0x60213d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L602169;}}
}
B60213f:L60213f:{c.instructions+=8;NFSU2_TR(0x60213f);
__builtin_memmove((R+8),gp(0x89e840),4);
}
B602145:{NFSU2_TR(0x602145);
w4(R+8,u32(u32(r4(R+8))|u32(r4(R+0))));
}
B602147:{NFSU2_TR(0x602147);
w4(R+0,u32(0x89e838ull));
}
B60214c:{NFSU2_TR(0x60214c);
u8 U[4];
w4(U+0,u32(0x782700ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B602151:{NFSU2_TR(0x602151);
__builtin_memmove(gp(0x89e840),(R+8),4);
}
B602157:{NFSU2_TR(0x602157);
__builtin_memmove(gp(0x89e838),(R+0),4);
}
B60215c:{NFSU2_TR(0x60215c);
__builtin_memmove(gp(0x89e83c),(R+0),4);
}
B602161:{NFSU2_TR(0x602161);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x602166ull));
TAIL_STATIC(0x75c5edu,75c);
}
B602166:L602166:{c.instructions+=1;NFSU2_TR(0x602166);
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
B602169:L602169:{c.instructions+=2;NFSU2_TR(0x602169);
w4(R+0,u32(0x89e838ull));
}
B60216e:{NFSU2_TR(0x60216e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B602170:L602170:{c.instructions+=4;NFSU2_TR(0x602170);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B602171:{NFSU2_TR(0x602171);
__builtin_memmove((R+24),(R+4),4);
}
B602173:{NFSU2_TR(0x602173);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B602175:{NFSU2_TR(0x602175);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x602178ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B602178:L602178:{c.instructions+=3;NFSU2_TR(0x602178);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B60217b:{NFSU2_TR(0x60217b);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B60217d:{NFSU2_TR(0x60217d);
if(r1(R+518)){{goto L60218a;}}
}
B60217f:L60217f:{c.instructions+=4;NFSU2_TR(0x60217f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B602182:{NFSU2_TR(0x602182);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B602185:{NFSU2_TR(0x602185);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B602187:{NFSU2_TR(0x602187);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60218a:L60218a:{c.instructions+=4;NFSU2_TR(0x60218a);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B60218e:{NFSU2_TR(0x60218e);
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
B602190:{NFSU2_TR(0x602190);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B602193:{NFSU2_TR(0x602193);
if(r1(R+518)){{goto L6021b6;}}
}
B602195:L602195:{c.instructions+=3;NFSU2_TR(0x602195);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B602197:{NFSU2_TR(0x602197);
__builtin_memmove((R+4),(R+24),4);
}
B602199:{NFSU2_TR(0x602199);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60219cull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B60219c:L60219c:{c.instructions+=10;NFSU2_TR(0x60219c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B60219f:{NFSU2_TR(0x60219f);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6021a2:{NFSU2_TR(0x6021a2);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6021a5:{NFSU2_TR(0x6021a5);
u8 U[6];
w1(R+512,carry<u32>(r4(R+4),u32(0x20ull)));
w1(R+523,scarry<u32>(r4(R+4),u32(0x20ull)));
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x20ull))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6021a8:{NFSU2_TR(0x6021a8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+8)),r4(U+0));
}
B6021aa:{NFSU2_TR(0x6021aa);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6021ad:{NFSU2_TR(0x6021ad);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6021b0:{NFSU2_TR(0x6021b0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B6021b2:{NFSU2_TR(0x6021b2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6021b3:{NFSU2_TR(0x6021b3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6021b6:L6021b6:{c.instructions+=3;NFSU2_TR(0x6021b6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6021b9:{NFSU2_TR(0x6021b9);
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
B6021bb:{NFSU2_TR(0x6021bb);
if(r1(R+518)){{goto L6021d2;}}
}
B6021bd:L6021bd:{c.instructions+=2;NFSU2_TR(0x6021bd);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x4ull))));
}
B6021c0:{NFSU2_TR(0x6021c0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6021c5ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x602130u);}goto L602130;}
}
B6021c5:L6021c5:{c.instructions+=5;NFSU2_TR(0x6021c5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6021c8:{NFSU2_TR(0x6021c8);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+4)),r4(U+0));
}
B6021ca:{NFSU2_TR(0x6021ca);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6021cd:{NFSU2_TR(0x6021cd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6021d0:{NFSU2_TR(0x6021d0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+24)),r4(U+0));
}
B6021d2:L6021d2:{c.instructions+=2;NFSU2_TR(0x6021d2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6021d3:{NFSU2_TR(0x6021d3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6021e0:L6021e0:{c.instructions+=3;NFSU2_TR(0x6021e0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6021e1:{NFSU2_TR(0x6021e1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+24),(U+0),4);
}
B6021e3:{NFSU2_TR(0x6021e3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6021e8ull));
TAIL_STATIC(0x502fd0u,502);
}
B6021e8:L6021e8:{c.instructions+=2;NFSU2_TR(0x6021e8);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6021ea:{NFSU2_TR(0x6021ea);
if(r1(R+518)){{goto L602207;}}
}
B6021ec:L6021ec:{c.instructions+=1;NFSU2_TR(0x6021ec);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6021f0:L6021f0:{c.instructions+=3;NFSU2_TR(0x6021f0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6021f3:{NFSU2_TR(0x6021f3);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6021f5:{NFSU2_TR(0x6021f5);
if(r1(R+518)){{goto L6021fb;}}
}
B6021f7:L6021f7:{c.instructions+=2;NFSU2_TR(0x6021f7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6021f9:{NFSU2_TR(0x6021f9);
{goto L6021fd;}
}
B6021fb:L6021fb:{c.instructions+=1;NFSU2_TR(0x6021fb);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B6021fd:L6021fd:{c.instructions+=2;NFSU2_TR(0x6021fd);
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
B6021ff:{NFSU2_TR(0x6021ff);
if(r1(R+518)){{goto L60220d;}}
}
B602201:L602201:{c.instructions+=3;NFSU2_TR(0x602201);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+24),(U+0),4);
}
B602203:{NFSU2_TR(0x602203);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B602205:{NFSU2_TR(0x602205);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6021f0u);}goto L6021f0;}}
}
B602207:L602207:{c.instructions+=3;NFSU2_TR(0x602207);
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
B602209:{NFSU2_TR(0x602209);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B60220a:{NFSU2_TR(0x60220a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B60220d:L60220d:{c.instructions+=3;NFSU2_TR(0x60220d);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B602211:{NFSU2_TR(0x602211);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B602212:{NFSU2_TR(0x602212);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x602217ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x602170u);}goto L602170;}
}
B602217:L602217:{c.instructions+=3;NFSU2_TR(0x602217);
w4(R+0,u32(0x1ull));
}
B60221c:{NFSU2_TR(0x60221c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B60221d:{NFSU2_TR(0x60221d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B602220:L602220:{c.instructions+=6;NFSU2_TR(0x602220);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B602221:{NFSU2_TR(0x602221);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B602223:{NFSU2_TR(0x602223);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B602225:{NFSU2_TR(0x602225);
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
B602227:{NFSU2_TR(0x602227);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+16)),r4(U+0));
}
B60222b:{NFSU2_TR(0x60222b);
if(r1(R+518)){{goto L60229a;}}
}
B60222d:L60222d:{c.instructions+=5;NFSU2_TR(0x60222d);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B602230:{NFSU2_TR(0x602230);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B602231:{NFSU2_TR(0x602231);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x28ull))));
__builtin_memmove((R+12),(U+0),4);
}
B602234:{NFSU2_TR(0x602234);
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
B602236:{NFSU2_TR(0x602236);
if(r1(R+518)){{goto L60228e;}}
}
B602238:L602238:{c.instructions+=3;NFSU2_TR(0x602238);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B602239:{NFSU2_TR(0x602239);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60223a:{NFSU2_TR(0x60223a);
__builtin_memmove((R+12),(R+12),4);
}
B602240:L602240:{c.instructions+=7;NFSU2_TR(0x602240);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+28),(U+0),4);
}
B602242:{NFSU2_TR(0x602242);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B602245:{NFSU2_TR(0x602245);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B602248:{NFSU2_TR(0x602248);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
s4(u32(r4(R+4)),r4(U+0));
}
B60224a:{NFSU2_TR(0x60224a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60224b:{NFSU2_TR(0x60224b);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60224e:{NFSU2_TR(0x60224e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x602253ull));
TAIL_STATIC(0x440ef0u,440);
}
B602253:L602253:{c.instructions+=4;NFSU2_TR(0x602253);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B602256:{NFSU2_TR(0x602256);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B602257:{NFSU2_TR(0x602257);
w4(R+4,u32(0x8357e0ull));
}
B60225c:{NFSU2_TR(0x60225c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x602261ull));
TAIL_STATIC(0x494690u,494);
}
B602261:L602261:{c.instructions+=3;NFSU2_TR(0x602261);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B602262:{NFSU2_TR(0x602262);
w4(R+4,u32(0x8357e0ull));
}
B602267:{NFSU2_TR(0x602267);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60226cull));
TAIL_STATIC(0x48bd70u,48b);
}
B60226c:L60226c:{c.instructions+=2;NFSU2_TR(0x60226c);
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
B60226e:{NFSU2_TR(0x60226e);
if(r1(R+518)){{goto L602280;}}
}
B602270:L602270:{c.instructions+=2;NFSU2_TR(0x602270);
__builtin_memmove((R+4),(R+24),4);
}
B602272:{NFSU2_TR(0x602272);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x602277ull));
TAIL_STATIC(0x433070u,433);
}
B602277:L602277:{c.instructions+=2;NFSU2_TR(0x602277);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B602278:{NFSU2_TR(0x602278);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60227dull));
TAIL_STATIC(0x575630u,575);
}
B60227d:L60227d:{c.instructions+=1;NFSU2_TR(0x60227d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B602280:L602280:{c.instructions+=3;NFSU2_TR(0x602280);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B602282:{NFSU2_TR(0x602282);
__builtin_memmove((R+0),(R+28),4);
}
B602284:{NFSU2_TR(0x602284);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x602240u);}goto L602240;}}
}
B602286:L602286:{c.instructions+=4;NFSU2_TR(0x602286);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B60228a:{NFSU2_TR(0x60228a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B60228b:{NFSU2_TR(0x60228b);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
w1(R+519,u8(s32(r4(R+8))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+8))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B60228d:{NFSU2_TR(0x60228d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B60228e:L60228e:{c.instructions+=5;NFSU2_TR(0x60228e);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B602291:{NFSU2_TR(0x602291);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B602294:{NFSU2_TR(0x602294);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B602297:{NFSU2_TR(0x602297);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+4)),r4(U+0));
}
B602299:{NFSU2_TR(0x602299);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B60229a:L60229a:{c.instructions+=2;NFSU2_TR(0x60229a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B60229b:{NFSU2_TR(0x60229b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6022a0:L6022a0:{c.instructions+=2;NFSU2_TR(0x6022a0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6022a1:{NFSU2_TR(0x6022a1);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B6022a3:L6022a3:{c.instructions+=3;NFSU2_TR(0x6022a3);
__builtin_memmove((R+0),gp(0x890130),4);
}
B6022a8:{NFSU2_TR(0x6022a8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B6022ab:{NFSU2_TR(0x6022ab);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6022b0ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x602220u);}goto L602220;}
}
B6022b0:L6022b0:{c.instructions+=3;NFSU2_TR(0x6022b0);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x30ull))));
}
B6022b3:{NFSU2_TR(0x6022b3);
u8 U[14];
__builtin_memmove((U+6),(R+24),4);
w1(R+512,u8((r4(U+6))<(u32(0x240ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x240ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x240ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6022b9:{NFSU2_TR(0x6022b9);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6022a3u);}goto L6022a3;}}
}
B6022bb:L6022bb:{c.instructions+=3;NFSU2_TR(0x6022bb);
s4(0x8022f8,u32(0x0ull));
}
B6022c5:{NFSU2_TR(0x6022c5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6022c6:{NFSU2_TR(0x6022c6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6022d0:L6022d0:{c.instructions+=3;NFSU2_TR(0x6022d0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6022d4:{NFSU2_TR(0x6022d4);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6022d6:{NFSU2_TR(0x6022d6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6022dbull));
TAIL_STATIC(0x5ffe70u,5ff);
}
B6022db:L6022db:{c.instructions+=1;NFSU2_TR(0x6022db);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6022e0:L6022e0:{c.instructions+=6;NFSU2_TR(0x6022e0);
__builtin_memmove((R+0),gp(0x89e7d9),1);
}
B6022e5:{NFSU2_TR(0x6022e5);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6022e7:{NFSU2_TR(0x6022e7);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6022e8:{NFSU2_TR(0x6022e8);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6022e9:{NFSU2_TR(0x6022e9);
__builtin_memmove((R+24),(R+4),4);
}
B6022eb:{NFSU2_TR(0x6022eb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6022f6;}}
}
B6022ed:L6022ed:{c.instructions+=3;NFSU2_TR(0x6022ed);
__builtin_memmove((R+0),gp(0x890104),4);
}
B6022f2:{NFSU2_TR(0x6022f2);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6022f4:{NFSU2_TR(0x6022f4);
if(r1(R+518)){{goto L6022fd;}}
}
B6022f6:L6022f6:{c.instructions+=4;NFSU2_TR(0x6022f6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6022f7:{NFSU2_TR(0x6022f7);
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
B6022f9:{NFSU2_TR(0x6022f9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6022fa:{NFSU2_TR(0x6022fa);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6022fd:L6022fd:{c.instructions+=6;NFSU2_TR(0x6022fd);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6022fe:{NFSU2_TR(0x6022fe);
u8 U[5];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+12),(U+4),1);
}
B602302:{NFSU2_TR(0x602302);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(r1(R+12))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B602304:{NFSU2_TR(0x602304);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B602305:{NFSU2_TR(0x602305);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B602309:{NFSU2_TR(0x602309);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L602347;}}
}
B60230b:L60230b:{c.instructions+=3;NFSU2_TR(0x60230b);
u8 U[16];
w4(U+0,u32(u32(u32(0x68ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+20))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B60230f:{NFSU2_TR(0x60230f);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B602311:{NFSU2_TR(0x602311);
if(r1(R+518)){{goto L602378;}}
}
B602313:L602313:{c.instructions+=2;NFSU2_TR(0x602313);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x7fffffffull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B602318:{NFSU2_TR(0x602318);
if(r1(R+518)){{goto L602378;}}
}
B60231a:L60231a:{c.instructions+=9;NFSU2_TR(0x60231a);
__builtin_memmove((R+0),gp(0x86518c),4);
}
B60231f:{NFSU2_TR(0x60231f);
u8 U[16];
w4(U+0,u32(u32(u32(0x68ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+20))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
w4(R+0,u32(u32(r4(R+0))-u32(r4(U+12))));
}
B602323:{NFSU2_TR(0x602323);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B602327:{NFSU2_TR(0x602327);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B60232b:{NFSU2_TR(0x60232b);
{u32 ea_=u32(u32(7881320u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B602331:{NFSU2_TR(0x602331);
{u32 ea_=u32(u32(8017164u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B602337:{NFSU2_TR(0x602337);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B602339:{NFSU2_TR(0x602339);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B60233c:{NFSU2_TR(0x60233c);
if(r1(R+514)){{goto L602378;}}
}
B60233e:L60233e:{c.instructions+=6;NFSU2_TR(0x60233e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B60233f:{NFSU2_TR(0x60233f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B602340:{NFSU2_TR(0x602340);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B602341:{NFSU2_TR(0x602341);
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
B602343:{NFSU2_TR(0x602343);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B602344:{NFSU2_TR(0x602344);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B602347:L602347:{c.instructions+=3;NFSU2_TR(0x602347);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B60234a:{NFSU2_TR(0x60234a);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B60234c:{NFSU2_TR(0x60234c);
if(r1(R+518)){{goto L602378;}}
}
B60234e:L60234e:{c.instructions+=2;NFSU2_TR(0x60234e);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x7fffffffull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B602353:{NFSU2_TR(0x602353);
if(r1(R+518)){{goto L602378;}}
}
B602355:L602355:{c.instructions+=9;NFSU2_TR(0x602355);
__builtin_memmove((R+4),gp(0x86518c),4);
}
B60235b:{NFSU2_TR(0x60235b);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+0))));
}
B60235d:{NFSU2_TR(0x60235d);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B602361:{NFSU2_TR(0x602361);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B602365:{NFSU2_TR(0x602365);
{u32 ea_=u32(u32(7881320u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B60236b:{NFSU2_TR(0x60236b);
{u32 ea_=u32(u32(8017168u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B602371:{NFSU2_TR(0x602371);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B602373:{NFSU2_TR(0x602373);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B602376:{NFSU2_TR(0x602376);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x60233eu);}goto L60233e;}}
}
B602378:L602378:{c.instructions+=3;NFSU2_TR(0x602378);
__builtin_memmove((R+8),gp(0x890118),4);
}
B60237e:{NFSU2_TR(0x60237e);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B602381:{NFSU2_TR(0x602381);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x60233eu);}goto L60233e;}}
}
B602383:L602383:{c.instructions+=2;NFSU2_TR(0x602383);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+20))&u32(r4(R+20))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B602385:{NFSU2_TR(0x602385);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x60233eu);}goto L60233e;}}
}
B602387:L602387:{c.instructions+=2;NFSU2_TR(0x602387);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x8ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x8ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B60238a:{NFSU2_TR(0x60238a);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x60233eu);}goto L60233e;}}
}
B60238c:L60238c:{c.instructions+=3;NFSU2_TR(0x60238c);
__builtin_memmove((R+4),gp(0x8900bc),4);
}
B602392:{NFSU2_TR(0x602392);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B602395:{NFSU2_TR(0x602395);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x60233eu);}goto L60233e;}}
}
B602397:L602397:{c.instructions+=2;NFSU2_TR(0x602397);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x6ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B60239a:{NFSU2_TR(0x60239a);
if(r1(R+518)){{goto L6023a1;}}
}
B60239c:L60239c:{c.instructions+=2;NFSU2_TR(0x60239c);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x7ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B60239f:{NFSU2_TR(0x60239f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6023b1;}}
}
B6023a1:L6023a1:{c.instructions+=5;NFSU2_TR(0x6023a1);
{u32 ea_=u32(r4(R+24)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6023a4:{NFSU2_TR(0x6023a4);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B6023aa:{NFSU2_TR(0x6023aa);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B6023ac:{NFSU2_TR(0x6023ac);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B6023af:{NFSU2_TR(0x6023af);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x60233eu);}goto L60233e;}}
}
B6023b1:L6023b1:{c.instructions+=2;NFSU2_TR(0x6023b1);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6023b4:{NFSU2_TR(0x6023b4);
if(r1(R+518)){{goto L6023ca;}}
}
B6023b6:L6023b6:{c.instructions+=2;NFSU2_TR(0x6023b6);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6023b9:{NFSU2_TR(0x6023b9);
if(r1(R+518)){{goto L6023ca;}}
}
B6023bb:L6023bb:{c.instructions+=2;NFSU2_TR(0x6023bb);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6023be:{NFSU2_TR(0x6023be);
if(r1(R+518)){{goto L6023ca;}}
}
B6023c0:L6023c0:{c.instructions+=2;NFSU2_TR(0x6023c0);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6023c3:{NFSU2_TR(0x6023c3);
if(r1(R+518)){{goto L6023ca;}}
}
B6023c5:L6023c5:{c.instructions+=2;NFSU2_TR(0x6023c5);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x5ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6023c8:{NFSU2_TR(0x6023c8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6023e1;}}
}
B6023ca:L6023ca:{c.instructions+=5;NFSU2_TR(0x6023ca);
{u32 ea_=u32(u32(8628772u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6023d0:{NFSU2_TR(0x6023d0);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B6023d6:{NFSU2_TR(0x6023d6);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B6023d8:{NFSU2_TR(0x6023d8);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B6023db:{NFSU2_TR(0x6023db);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x60233eu);}goto L60233e;}}
}
B6023e1:L6023e1:{c.instructions+=4;NFSU2_TR(0x6023e1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6023e4:{NFSU2_TR(0x6023e4);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8020e0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B6023ea:{NFSU2_TR(0x6023ea);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(r1(R+8))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6023ec:{NFSU2_TR(0x6023ec);
if(r1(R+518)){{goto L6023fd;}}
}
B6023ee:L6023ee:{c.instructions+=3;NFSU2_TR(0x6023ee);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6023f0:{NFSU2_TR(0x6023f0);
__builtin_memmove((R+4),(R+24),4);
}
B6023f2:{NFSU2_TR(0x6023f2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6023f7ull));
TAIL_STATIC(0x5ffe70u,5ff);
}
B6023f7:L6023f7:{c.instructions+=1;NFSU2_TR(0x6023f7);
__builtin_memmove((R+4),gp(0x8900bc),4);
}
B6023fd:L6023fd:{c.instructions+=3;NFSU2_TR(0x6023fd);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6023ff:{NFSU2_TR(0x6023ff);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B602401:{NFSU2_TR(0x602401);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L60241f;}}
}
B602403:L602403:{c.instructions+=4;NFSU2_TR(0x602403);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x8900b4ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B60240a:{NFSU2_TR(0x60240a);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B60240d:{NFSU2_TR(0x60240d);
u8 U[7];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8020e8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x0ull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B602414:{NFSU2_TR(0x602414);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x60233eu);}goto L60233e;}}
}
B60241a:L60241a:{c.instructions+=3;NFSU2_TR(0x60241a);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B60241b:{NFSU2_TR(0x60241b);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B60241d:{NFSU2_TR(0x60241d);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x602403u);}goto L602403;}}
}
B60241f:L60241f:{c.instructions+=4;NFSU2_TR(0x60241f);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(r1(R+12))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B602421:{NFSU2_TR(0x602421);
__builtin_memmove((R+0),gp(0x8651ac),4);
}
B602426:{NFSU2_TR(0x602426);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x98ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60242c:{NFSU2_TR(0x60242c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L602438;}}
}
B60242e:L60242e:{c.instructions+=2;NFSU2_TR(0x60242e);
__builtin_memmove((R+4),gp(0x86518c),4);
}
B602434:{NFSU2_TR(0x602434);
u8 U[16];
w4(U+0,u32(u32(u32(0x68ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+20))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+4),4);
s4(u32(r4(U+8)),r4(U+12));
}
B602438:L602438:{c.instructions+=3;NFSU2_TR(0x602438);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffffull))));
__builtin_memmove((R+0),(U+0),4);
}
B60243b:{NFSU2_TR(0x60243b);
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
B60243e:{NFSU2_TR(0x60243e);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L6025db;}}
}
B602444:L602444:{c.instructions+=1;NFSU2_TR(0x602444);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x60262cull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B60244b:L60244b:{c.instructions+=3;NFSU2_TR(0x60244b);
__builtin_memmove((R+8),gp(0x8900d8),4);
}
B602451:{NFSU2_TR(0x602451);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x5ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B602454:{NFSU2_TR(0x602454);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x60233eu);}goto L60233e;}}
}
B60245a:L60245a:{c.instructions+=4;NFSU2_TR(0x60245a);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60245c:{NFSU2_TR(0x60245c);
u8 U[4];
w4(U+0,u32(0xdull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60245e:{NFSU2_TR(0x60245e);
__builtin_memmove((R+4),(R+24),4);
}
B602460:{NFSU2_TR(0x602460);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x602465ull));
TAIL_STATIC(0x5f1fd0u,5f1);
}
B602465:L602465:{c.instructions+=1;NFSU2_TR(0x602465);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60246aull));
TAIL_STATIC(0x446800u,446);
}
B60246a:L60246a:{c.instructions+=1;NFSU2_TR(0x60246a);
{goto L6024d5;}
}
B60246c:L60246c:{c.instructions+=3;NFSU2_TR(0x60246c);
__builtin_memmove((R+0),gp(0x8900d8),4);
}
B602471:{NFSU2_TR(0x602471);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x5ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B602474:{NFSU2_TR(0x602474);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x60233eu);}goto L60233e;}}
}
B60247a:L60247a:{c.instructions+=3;NFSU2_TR(0x60247a);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x248ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B602480:{NFSU2_TR(0x602480);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B602482:{NFSU2_TR(0x602482);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x60233eu);}goto L60233e;}}
}
B602488:L602488:{c.instructions+=3;NFSU2_TR(0x602488);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B60248b:{NFSU2_TR(0x60248b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60248c:{NFSU2_TR(0x60248c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x602491ull));
TAIL_STATIC(0x455bd0u,455);
}
B602491:L602491:{c.instructions+=4;NFSU2_TR(0x602491);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B602494:{NFSU2_TR(0x602494);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B602496:{NFSU2_TR(0x602496);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x88ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60249c:{NFSU2_TR(0x60249c);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x60233eu);}goto L60233e;}}
}
B6024a2:L6024a2:{c.instructions+=4;NFSU2_TR(0x6024a2);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6024a4:{NFSU2_TR(0x6024a4);
u8 U[4];
w4(U+0,u32(0xeull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6024a6:{NFSU2_TR(0x6024a6);
__builtin_memmove((R+4),(R+24),4);
}
B6024a8:{NFSU2_TR(0x6024a8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6024adull));
TAIL_STATIC(0x5f1fd0u,5f1);
}
B6024ad:L6024ad:{c.instructions+=3;NFSU2_TR(0x6024ad);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x238ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6024b3:{NFSU2_TR(0x6024b3);
__builtin_memmove((R+4),(R+28),4);
}
B6024b5:{NFSU2_TR(0x6024b5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6024baull));
TAIL_STATIC(0x446970u,446);
}
B6024ba:L6024ba:{c.instructions+=2;NFSU2_TR(0x6024ba);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6024bc:{NFSU2_TR(0x6024bc);
if(r1(R+518)){{goto L6024ce;}}
}
B6024be:L6024be:{c.instructions+=2;NFSU2_TR(0x6024be);
__builtin_memmove((R+4),(R+24),4);
}
B6024c0:{NFSU2_TR(0x6024c0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6024c5ull));
TAIL_STATIC(0x5ffdd0u,5ff);
}
B6024c5:L6024c5:{c.instructions+=6;NFSU2_TR(0x6024c5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6024c6:{NFSU2_TR(0x6024c6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6024c7:{NFSU2_TR(0x6024c7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6024c8:{NFSU2_TR(0x6024c8);
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
B6024ca:{NFSU2_TR(0x6024ca);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6024cb:{NFSU2_TR(0x6024cb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6024ce:L6024ce:{c.instructions+=2;NFSU2_TR(0x6024ce);
__builtin_memmove((R+4),(R+28),4);
}
B6024d0:{NFSU2_TR(0x6024d0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6024d5ull));
TAIL_STATIC(0x446820u,446);
}
B6024d5:L6024d5:{c.instructions+=6;NFSU2_TR(0x6024d5);
{u32 ea_=u32(u32(8802644u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B6024db:{NFSU2_TR(0x6024db);
__builtin_memmove((R+0),gp(0x890080),4);
}
B6024e0:{NFSU2_TR(0x6024e0);
{u32 ea_=u32(r4(R+0)+u32(252u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6024e6:{NFSU2_TR(0x6024e6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x110ull))));
w4(U+4,u32(0x6022d0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6024f0:{NFSU2_TR(0x6024f0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x114ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6024f6:{NFSU2_TR(0x6024f6);
{goto L6025db;}
}
B6024fb:L6024fb:{c.instructions+=8;NFSU2_TR(0x6024fb);
__builtin_memmove((R+8),gp(0x7a54f8),4);
}
B602501:{NFSU2_TR(0x602501);
__builtin_memmove((R+0),gp(0x7a5500),4);
}
B602506:{NFSU2_TR(0x602506);
__builtin_memmove((R+4),gp(0x890080),4);
}
B60250c:{NFSU2_TR(0x60250c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60250d:{NFSU2_TR(0x60250d);
u8 U[4];
w4(U+0,u32(0x6022d0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B602512:{NFSU2_TR(0x602512);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B602513:{NFSU2_TR(0x602513);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B602514:{NFSU2_TR(0x602514);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x602519ull));
TAIL_STATIC(0x5ea280u,5ea);
}
B602519:L602519:{c.instructions+=1;NFSU2_TR(0x602519);
{goto L6025db;}
}
B60251e:L60251e:{c.instructions+=8;NFSU2_TR(0x60251e);
__builtin_memmove((R+4),gp(0x7a54fc),4);
}
B602524:{NFSU2_TR(0x602524);
__builtin_memmove((R+8),gp(0x7a5500),4);
}
B60252a:{NFSU2_TR(0x60252a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60252b:{NFSU2_TR(0x60252b);
u8 U[4];
w4(U+0,u32(0x6022d0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B602530:{NFSU2_TR(0x602530);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B602531:{NFSU2_TR(0x602531);
__builtin_memmove((R+4),gp(0x890080),4);
}
B602537:{NFSU2_TR(0x602537);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B602538:{NFSU2_TR(0x602538);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60253dull));
TAIL_STATIC(0x5ea280u,5ea);
}
B60253d:L60253d:{c.instructions+=1;NFSU2_TR(0x60253d);
{goto L6025db;}
}
B602542:L602542:{c.instructions+=8;NFSU2_TR(0x602542);
__builtin_memmove((R+0),gp(0x7a5504),4);
}
B602547:{NFSU2_TR(0x602547);
__builtin_memmove((R+4),gp(0x7a5508),4);
}
B60254d:{NFSU2_TR(0x60254d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60254e:{NFSU2_TR(0x60254e);
u8 U[4];
w4(U+0,u32(0x6022d0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B602553:{NFSU2_TR(0x602553);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B602554:{NFSU2_TR(0x602554);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B602555:{NFSU2_TR(0x602555);
__builtin_memmove((R+4),gp(0x890080),4);
}
B60255b:{NFSU2_TR(0x60255b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x602560ull));
TAIL_STATIC(0x5ea280u,5ea);
}
B602560:L602560:{c.instructions+=1;NFSU2_TR(0x602560);
{goto L6025db;}
}
B602562:L602562:{c.instructions+=8;NFSU2_TR(0x602562);
__builtin_memmove((R+8),gp(0x7a54f8),4);
}
B602568:{NFSU2_TR(0x602568);
__builtin_memmove((R+0),gp(0x7a5524),4);
}
B60256d:{NFSU2_TR(0x60256d);
__builtin_memmove((R+4),gp(0x890080),4);
}
B602573:{NFSU2_TR(0x602573);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B602574:{NFSU2_TR(0x602574);
u8 U[4];
w4(U+0,u32(0x6022d0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B602579:{NFSU2_TR(0x602579);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60257a:{NFSU2_TR(0x60257a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60257b:{NFSU2_TR(0x60257b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x602580ull));
TAIL_STATIC(0x5ea280u,5ea);
}
B602580:L602580:{c.instructions+=3;NFSU2_TR(0x602580);
__builtin_memmove((R+4),gp(0x8900d8),4);
}
B602586:{NFSU2_TR(0x602586);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x5ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B602589:{NFSU2_TR(0x602589);
if(r1(R+518)){{goto L602596;}}
}
B60258b:L60258b:{c.instructions+=4;NFSU2_TR(0x60258b);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60258d:{NFSU2_TR(0x60258d);
u8 U[4];
w4(U+0,u32(0xfull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60258f:{NFSU2_TR(0x60258f);
__builtin_memmove((R+4),(R+24),4);
}
B602591:{NFSU2_TR(0x602591);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x602596ull));
TAIL_STATIC(0x5f1fd0u,5f1);
}
B602596:L602596:{c.instructions+=4;NFSU2_TR(0x602596);
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
B602599:{NFSU2_TR(0x602599);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x644ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60259f:{NFSU2_TR(0x60259f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x648ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6025a5:{NFSU2_TR(0x6025a5);
{goto L6025db;}
}
B6025a7:L6025a7:{c.instructions+=8;NFSU2_TR(0x6025a7);
__builtin_memmove((R+8),gp(0x7a54f8),4);
}
B6025ad:{NFSU2_TR(0x6025ad);
__builtin_memmove((R+0),gp(0x7a5524),4);
}
B6025b2:{NFSU2_TR(0x6025b2);
__builtin_memmove((R+4),gp(0x890080),4);
}
B6025b8:{NFSU2_TR(0x6025b8);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6025b9:{NFSU2_TR(0x6025b9);
u8 U[4];
w4(U+0,u32(0x6022d0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6025be:{NFSU2_TR(0x6025be);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6025bf:{NFSU2_TR(0x6025bf);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6025c0:{NFSU2_TR(0x6025c0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6025c5ull));
TAIL_STATIC(0x5ea280u,5ea);
}
B6025c5:L6025c5:{c.instructions+=3;NFSU2_TR(0x6025c5);
__builtin_memmove((R+4),gp(0x8900d8),4);
}
B6025cb:{NFSU2_TR(0x6025cb);
u8 U[18];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((U+10),(U+0),4);
w1(R+512,u8((r4(U+10))<(u32(0x5ull))));
w1(R+523,sborrow<u32>(r4(U+10),u32(0x5ull)));
w4(U+14,u32(u32(r4(U+10))-u32(u32(0x5ull))));
w1(R+519,u8(s32(r4(U+14))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+14))==(u32(0x0ull))));
w4(U+4,u32(u32(r4(U+14))&u32(u32(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r4(U+4)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B6025ce:{NFSU2_TR(0x6025ce);
if(r1(R+518)){{goto L6025db;}}
}
B6025d0:L6025d0:{c.instructions+=4;NFSU2_TR(0x6025d0);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6025d2:{NFSU2_TR(0x6025d2);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6025d4:{NFSU2_TR(0x6025d4);
__builtin_memmove((R+4),(R+24),4);
}
B6025d6:{NFSU2_TR(0x6025d6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6025dbull));
TAIL_STATIC(0x5f1fd0u,5f1);
}
B6025db:L6025db:{c.instructions+=3;NFSU2_TR(0x6025db);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6025de:{NFSU2_TR(0x6025de);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6025df:{NFSU2_TR(0x6025df);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6025e4ull));
TAIL_STATIC(0x4022c0u,402);
}
B6025e4:L6025e4:{c.instructions+=7;NFSU2_TR(0x6025e4);
u8 U[5];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B6025e8:{NFSU2_TR(0x6025e8);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6025eb:{NFSU2_TR(0x6025eb);
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
B6025ed:{NFSU2_TR(0x6025ed);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x225ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B6025f4:{NFSU2_TR(0x6025f4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6025f7:{NFSU2_TR(0x6025f7);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x90ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B6025fd:{NFSU2_TR(0x6025fd);
if(r1(R+518)){{goto L602614;}}
}
B6025ff:L6025ff:{c.instructions+=8;NFSU2_TR(0x6025ff);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B602605:{NFSU2_TR(0x602605);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B602606:{NFSU2_TR(0x602606);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B602607:{NFSU2_TR(0x602607);
{u32 ea_=u32(r4(R+24)+u32(148u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60260d:{NFSU2_TR(0x60260d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B60260e:{NFSU2_TR(0x60260e);
w1(R+0,u8(0x1ull));
}
B602610:{NFSU2_TR(0x602610);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B602611:{NFSU2_TR(0x602611);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B602614:L602614:{c.instructions+=8;NFSU2_TR(0x602614);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60261a:{NFSU2_TR(0x60261a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B60261b:{NFSU2_TR(0x60261b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B60261c:{NFSU2_TR(0x60261c);
{u32 ea_=u32(r4(R+24)+u32(148u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B602622:{NFSU2_TR(0x602622);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B602623:{NFSU2_TR(0x602623);
w1(R+0,u8(0x1ull));
}
B602625:{NFSU2_TR(0x602625);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B602626:{NFSU2_TR(0x602626);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B602650:L602650:{c.instructions+=6;NFSU2_TR(0x602650);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x8ull))));
}
B602653:{NFSU2_TR(0x602653);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B602654:{NFSU2_TR(0x602654);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B602655:{NFSU2_TR(0x602655);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B602656:{NFSU2_TR(0x602656);
__builtin_memmove((R+24),(R+4),4);
}
B602658:{NFSU2_TR(0x602658);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60265dull));
TAIL_STATIC(0x600e10u,600);
}
B60265d:L60265d:{c.instructions+=2;NFSU2_TR(0x60265d);
__builtin_memmove((R+4),(R+24),4);
}
B60265f:{NFSU2_TR(0x60265f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x602664ull));
TAIL_STATIC(0x600f30u,600);
}
B602664:L602664:{c.instructions+=4;NFSU2_TR(0x602664);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x248ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B60266b:{NFSU2_TR(0x60266b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60266c:{NFSU2_TR(0x60266c);
__builtin_memmove((R+4),(R+24),4);
}
B60266e:{NFSU2_TR(0x60266e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x602673ull));
TAIL_STATIC(0x600710u,600);
}
B602673:L602673:{c.instructions+=7;NFSU2_TR(0x602673);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B602675:{NFSU2_TR(0x602675);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+4),(U+0),1);
}
B602678:{NFSU2_TR(0x602678);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x248ull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B60267e:{NFSU2_TR(0x60267e);
__builtin_memmove((R+0),gp(0x88f2be),1);
}
B602683:{NFSU2_TR(0x602683);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B602685:{NFSU2_TR(0x602685);
u8 U[2];
__builtin_memmove((U+0),(R+12),1);
w1(U+1,u8(u32(r1(R+0))-u32(r1(U+0))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B602687:{NFSU2_TR(0x602687);
if(r1(R+518)){{goto L602741;}}
}
B60268d:L60268d:{c.instructions+=2;NFSU2_TR(0x60268d);
u8 U[2];
__builtin_memmove((U+0),gp(0x88f2bc),1);
w1(U+1,u8(u32(r1(U+0))-u32(r1(R+12))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B602693:{NFSU2_TR(0x602693);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L602741;}}
}
B602699:L602699:{c.instructions+=3;NFSU2_TR(0x602699);
__builtin_memmove((R+0),gp(0x890118),4);
}
B60269e:{NFSU2_TR(0x60269e);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B6026a1:{NFSU2_TR(0x6026a1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L602741;}}
}
B6026a7:L6026a7:{c.instructions+=11;NFSU2_TR(0x6026a7);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xbf6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+8,u32(s32(s8(r1(U+4)))));
}
B6026ae:{NFSU2_TR(0x6026ae);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6026b1:{NFSU2_TR(0x6026b1);
{u32 ea_=u32((r4(R+8)*4u)+r4(R+0)+u32(3064u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6026b8:{NFSU2_TR(0x6026b8);
{u32 ea_=u32(r4(R+4)+u32(2296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6026be:{NFSU2_TR(0x6026be);
{u32 ea_=u32(u32(7881304u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6026c4:{NFSU2_TR(0x6026c4);
__asm__ volatile(".byte 0xde,0xe9":::"memory");
}
B6026c6:{NFSU2_TR(0x6026c6);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B6026ca:{NFSU2_TR(0x6026ca);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B6026d0:{NFSU2_TR(0x6026d0);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B6026d2:{NFSU2_TR(0x6026d2);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6026d5:{NFSU2_TR(0x6026d5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L602729;}}
}
B6026d7:L6026d7:{c.instructions+=9;NFSU2_TR(0x6026d7);
{u32 ea_=u32(r4(R+4)+u32(2304u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6026dd:{NFSU2_TR(0x6026dd);
{u32 ea_=u32(r4(R+4)+u32(2308u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6026e3:{NFSU2_TR(0x6026e3);
{u32 ea_=u32(u32(8975024u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6026e9:{NFSU2_TR(0x6026e9);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6026ed:{NFSU2_TR(0x6026ed);
{u32 ea_=u32(u32(7881308u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6026f3:{NFSU2_TR(0x6026f3);
{u32 ea_=u32(u32(8017256u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B6026f9:{NFSU2_TR(0x6026f9);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B6026fb:{NFSU2_TR(0x6026fb);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6026fe:{NFSU2_TR(0x6026fe);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L602725;}}
}
B602700:L602700:{c.instructions+=9;NFSU2_TR(0x602700);
{u32 ea_=u32(r4(R+4)+u32(116u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B602703:{NFSU2_TR(0x602703);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B602705:{NFSU2_TR(0x602705);
{u32 ea_=u32(r4(R+4)+u32(112u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B602708:{NFSU2_TR(0x602708);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B60270a:{NFSU2_TR(0x60270a);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B60270c:{NFSU2_TR(0x60270c);
{u32 ea_=u32(u32(8017260u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B602712:{NFSU2_TR(0x602712);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B602714:{NFSU2_TR(0x602714);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B602717:{NFSU2_TR(0x602717);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L602729;}}
}
B602719:L602719:{c.instructions+=2;NFSU2_TR(0x602719);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x96cull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B602723:{NFSU2_TR(0x602723);
{goto L602729;}
}
B602725:L602725:{c.instructions+=2;NFSU2_TR(0x602725);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B602727:{NFSU2_TR(0x602727);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B602729:L602729:{c.instructions+=2;NFSU2_TR(0x602729);
__builtin_memmove((R+4),(R+24),4);
}
B60272b:{NFSU2_TR(0x60272b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x602730ull));
TAIL_STATIC(0x5eaec0u,5ea);
}
B602730:L602730:{c.instructions+=2;NFSU2_TR(0x602730);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B602732:{NFSU2_TR(0x602732);
if(r1(R+518)){{goto L602741;}}
}
B602734:L602734:{c.instructions+=2;NFSU2_TR(0x602734);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B602737:{NFSU2_TR(0x602737);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x96cull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B602741:L602741:{c.instructions+=2;NFSU2_TR(0x602741);
__builtin_memmove((R+4),(R+24),4);
}
B602743:{NFSU2_TR(0x602743);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x602748ull));
TAIL_STATIC(0x5f3fb0u,5f3);
}
B602748:L602748:{c.instructions+=4;NFSU2_TR(0x602748);
__builtin_memmove((R+4),gp(0x8900d8),4);
}
B60274e:{NFSU2_TR(0x60274e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B602750:{NFSU2_TR(0x602750);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B602753:{NFSU2_TR(0x602753);
if(r1(R+518)){{goto L60275e;}}
}
B602755:L602755:{c.instructions+=2;NFSU2_TR(0x602755);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x5ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B602758:{NFSU2_TR(0x602758);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L602882;}}
}
B60275e:L60275e:{c.instructions+=4;NFSU2_TR(0x60275e);
{u32 ea_=u32(u32(8802644u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B602764:{NFSU2_TR(0x602764);
{u32 ea_=u32(u32(7881316u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B60276a:{NFSU2_TR(0x60276a);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B602770:{NFSU2_TR(0x602770);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x602775ull));
TAIL_STATIC(0x75bed4u,75b);
}
B602775:L602775:{c.instructions+=9;NFSU2_TR(0x602775);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B60277b:{NFSU2_TR(0x60277b);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+0))));
}
B60277d:{NFSU2_TR(0x60277d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B602783:{NFSU2_TR(0x602783);
{u32 ea_=u32(r4(R+24)+u32(164u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B602789:{NFSU2_TR(0x602789);
{u32 ea_=u32(u32(7881320u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B60278f:{NFSU2_TR(0x60278f);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B602795:{NFSU2_TR(0x602795);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B602797:{NFSU2_TR(0x602797);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B60279a:{NFSU2_TR(0x60279a);
if(r1(R+514)){{goto L602882;}}
}
B6027a0:L6027a0:{c.instructions+=3;NFSU2_TR(0x6027a0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6027a3:{NFSU2_TR(0x6027a3);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6027a6:{NFSU2_TR(0x6027a6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6027abull));
TAIL_STATIC(0x40f690u,40f);
}
B6027ab:L6027ab:{c.instructions+=2;NFSU2_TR(0x6027ab);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6027ad:{NFSU2_TR(0x6027ad);
if(r1(R+518)){{goto L602865;}}
}
B6027b3:L6027b3:{c.instructions+=4;NFSU2_TR(0x6027b3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6027b6:{NFSU2_TR(0x6027b6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6027b9:{NFSU2_TR(0x6027b9);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x10ull))));
}
B6027bc:{NFSU2_TR(0x6027bc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6027c1ull));
TAIL_STATIC(0x5b5330u,5b5);
}
B6027c1:L6027c1:{c.instructions+=6;NFSU2_TR(0x6027c1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6027c4:{NFSU2_TR(0x6027c4);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6027c7:{NFSU2_TR(0x6027c7);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6027ca:{NFSU2_TR(0x6027ca);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6027cc:{NFSU2_TR(0x6027cc);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6027d4:{NFSU2_TR(0x6027d4);
if(r1(R+518)){{goto L60282d;}}
}
B6027d6:L6027d6:{c.instructions+=9;NFSU2_TR(0x6027d6);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B6027da:{NFSU2_TR(0x6027da);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B6027dd:{NFSU2_TR(0x6027dd);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6027e1:{NFSU2_TR(0x6027e1);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6027e5:{NFSU2_TR(0x6027e5);
{u32 ea_=u32(u32(7881336u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6027eb:{NFSU2_TR(0x6027eb);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B6027f1:{NFSU2_TR(0x6027f1);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B6027f3:{NFSU2_TR(0x6027f3);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6027f6:{NFSU2_TR(0x6027f6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L602808;}}
}
B6027f8:L6027f8:{c.instructions+=5;NFSU2_TR(0x6027f8);
{u32 ea_=u32(r4(R+4)+u32(1072u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6027fe:{NFSU2_TR(0x6027fe);
__asm__ volatile(".byte 0xd8,0xf1":::"memory");
}
B602800:{NFSU2_TR(0x602800);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B602804:{NFSU2_TR(0x602804);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B602806:{NFSU2_TR(0x602806);
{goto L60282d;}
}
B602808:L602808:{c.instructions+=7;NFSU2_TR(0x602808);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B60280a:{NFSU2_TR(0x60280a);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B602812:{NFSU2_TR(0x602812);
{u32 ea_=u32(r4(R+4)+u32(1072u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B602818:{NFSU2_TR(0x602818);
{u32 ea_=u32(u32(7881308u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B60281e:{NFSU2_TR(0x60281e);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B602820:{NFSU2_TR(0x602820);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B602823:{NFSU2_TR(0x602823);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L60282d;}}
}
B602825:L602825:{c.instructions+=1;NFSU2_TR(0x602825);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B60282d:L60282d:{c.instructions+=4;NFSU2_TR(0x60282d);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B602831:{NFSU2_TR(0x602831);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B602832:{NFSU2_TR(0x602832);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B602838:{NFSU2_TR(0x602838);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60283dull));
TAIL_STATIC(0x576970u,576);
}
B60283d:L60283d:{c.instructions+=8;NFSU2_TR(0x60283d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B602843:{NFSU2_TR(0x602843);
{u32 ea_=u32(r4(R+8)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B602846:{NFSU2_TR(0x602846);
{u32 ea_=u32(r4(R+24)+u32(168u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60284c:{NFSU2_TR(0x60284c);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B602850:{NFSU2_TR(0x602850);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B602852:{NFSU2_TR(0x602852);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B602854:{NFSU2_TR(0x602854);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B602857:{NFSU2_TR(0x602857);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L60285f;}}
}
B602859:L602859:{c.instructions+=2;NFSU2_TR(0x602859);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B60285b:{NFSU2_TR(0x60285b);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60285f:L60285f:{c.instructions+=1;NFSU2_TR(0x60285f);
{u32 ea_=u32(r4(R+24)+u32(168u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B602865:L602865:{c.instructions+=4;NFSU2_TR(0x602865);
{u32 ea_=u32(u32(8017172u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60286b:{NFSU2_TR(0x60286b);
{u32 ea_=u32(u32(7881316u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B602871:{NFSU2_TR(0x602871);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B602877:{NFSU2_TR(0x602877);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60287cull));
TAIL_STATIC(0x75bed4u,75b);
}
B60287c:L60287c:{c.instructions+=1;NFSU2_TR(0x60287c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B602882:L602882:{c.instructions+=5;NFSU2_TR(0x602882);
{u32 ea_=u32(r4(R+24)+u32(156u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B602888:{NFSU2_TR(0x602888);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B60288e:{NFSU2_TR(0x60288e);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B602890:{NFSU2_TR(0x602890);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B602893:{NFSU2_TR(0x602893);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6029fe;}}
}
B602899:L602899:{c.instructions+=7;NFSU2_TR(0x602899);
{u32 ea_=u32(r4(R+24)+u32(156u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60289f:{NFSU2_TR(0x60289f);
{u32 ea_=u32(u32(8802644u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B6028a5:{NFSU2_TR(0x6028a5);
{u32 ea_=u32(r4(R+24)+u32(156u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B6028ab:{NFSU2_TR(0x6028ab);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B6028b1:{NFSU2_TR(0x6028b1);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B6028b3:{NFSU2_TR(0x6028b3);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B6028b6:{NFSU2_TR(0x6028b6);
if(r1(R+514)){{goto L6029fe;}}
}
B6028bc:L6028bc:{c.instructions+=3;NFSU2_TR(0x6028bc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x9cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6028c2:{NFSU2_TR(0x6028c2);
u8 U[2];
__builtin_memmove((U+0),gp(0x89e7d9),1);
w1(U+1,u8(u32(r1(U+0))-u32(r1(R+12))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B6028c8:{NFSU2_TR(0x6028c8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6029fe;}}
}
B6028ce:L6028ce:{c.instructions+=2;NFSU2_TR(0x6028ce);
u8 U[8];
__builtin_memmove((U+0),gp(0x890104),4);
w4(U+4,u32(u32(r4(U+0))-u32(r4(R+12))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6028d4:{NFSU2_TR(0x6028d4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6029fe;}}
}
B6028da:L6028da:{c.instructions+=3;NFSU2_TR(0x6028da);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6028dd:{NFSU2_TR(0x6028dd);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6028df:{NFSU2_TR(0x6028df);
if(r1(R+518)){{goto L60290f;}}
}
B6028e1:L6028e1:{c.instructions+=2;NFSU2_TR(0x6028e1);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x7fffffffull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6028e6:{NFSU2_TR(0x6028e6);
if(r1(R+518)){{goto L60290f;}}
}
B6028e8:L6028e8:{c.instructions+=9;NFSU2_TR(0x6028e8);
__builtin_memmove((R+0),gp(0x86518c),4);
}
B6028ed:{NFSU2_TR(0x6028ed);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))-u32(r4(U+4))));
}
B6028f0:{NFSU2_TR(0x6028f0);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6028f4:{NFSU2_TR(0x6028f4);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6028f8:{NFSU2_TR(0x6028f8);
{u32 ea_=u32(u32(7881320u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6028fe:{NFSU2_TR(0x6028fe);
{u32 ea_=u32(u32(8017164u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B602904:{NFSU2_TR(0x602904);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B602906:{NFSU2_TR(0x602906);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B602909:{NFSU2_TR(0x602909);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L6029fe;}}
}
B60290f:L60290f:{c.instructions+=3;NFSU2_TR(0x60290f);
__builtin_memmove((R+4),gp(0x890118),4);
}
B602915:{NFSU2_TR(0x602915);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B602918:{NFSU2_TR(0x602918);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6029fe;}}
}
B60291e:L60291e:{c.instructions+=3;NFSU2_TR(0x60291e);
__builtin_memmove((R+4),gp(0x8900bc),4);
}
B602924:{NFSU2_TR(0x602924);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B602927:{NFSU2_TR(0x602927);
if(r1(R+518)){{goto L6029fe;}}
}
B60292d:L60292d:{c.instructions+=5;NFSU2_TR(0x60292d);
{u32 ea_=u32(u32(8628772u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B602933:{NFSU2_TR(0x602933);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B602939:{NFSU2_TR(0x602939);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B60293b:{NFSU2_TR(0x60293b);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B60293e:{NFSU2_TR(0x60293e);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L6029fe;}}
}
B602944:L602944:{c.instructions+=3;NFSU2_TR(0x602944);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B602947:{NFSU2_TR(0x602947);
u8 U[7];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8020e0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(r1(R+12))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B60294d:{NFSU2_TR(0x60294d);
if(r1(R+518)){{goto L60295d;}}
}
B60294f:L60294f:{c.instructions+=3;NFSU2_TR(0x60294f);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B602950:{NFSU2_TR(0x602950);
__builtin_memmove((R+4),(R+24),4);
}
B602952:{NFSU2_TR(0x602952);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x602957ull));
TAIL_STATIC(0x5ffe70u,5ff);
}
B602957:L602957:{c.instructions+=1;NFSU2_TR(0x602957);
__builtin_memmove((R+4),gp(0x8900bc),4);
}
B60295d:L60295d:{c.instructions+=3;NFSU2_TR(0x60295d);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B60295f:{NFSU2_TR(0x60295f);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B602961:{NFSU2_TR(0x602961);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L602987;}}
}
B602963:L602963:{c.instructions+=1;NFSU2_TR(0x602963);
{goto L602970;}
}
B602970:L602970:{c.instructions+=4;NFSU2_TR(0x602970);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x8900b4ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B602977:{NFSU2_TR(0x602977);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B60297a:{NFSU2_TR(0x60297a);
u8 U[7];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8020e8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(r1(R+12))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B602980:{NFSU2_TR(0x602980);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6029fe;}}
}
B602982:L602982:{c.instructions+=3;NFSU2_TR(0x602982);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B602983:{NFSU2_TR(0x602983);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B602985:{NFSU2_TR(0x602985);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x602970u);}goto L602970;}}
}
B602987:L602987:{c.instructions+=7;NFSU2_TR(0x602987);
__builtin_memmove((R+0),gp(0x8651ac),4);
}
B60298c:{NFSU2_TR(0x60298c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x98ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B602992:{NFSU2_TR(0x602992);
__builtin_memmove((R+4),gp(0x86518c),4);
}
B602998:{NFSU2_TR(0x602998);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60299b:{NFSU2_TR(0x60299b);
__builtin_memmove((R+8),gp(0x8900d8),4);
}
B6029a1:{NFSU2_TR(0x6029a1);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x5ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B6029a4:{NFSU2_TR(0x6029a4);
if(r1(R+518)){{goto L6029fe;}}
}
B6029a6:L6029a6:{c.instructions+=4;NFSU2_TR(0x6029a6);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6029a8:{NFSU2_TR(0x6029a8);
u8 U[4];
w4(U+0,u32(0xdull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6029aa:{NFSU2_TR(0x6029aa);
__builtin_memmove((R+4),(R+24),4);
}
B6029ac:{NFSU2_TR(0x6029ac);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6029b1ull));
TAIL_STATIC(0x5f1fd0u,5f1);
}
B6029b1:L6029b1:{c.instructions+=1;NFSU2_TR(0x6029b1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6029b6ull));
TAIL_STATIC(0x446800u,446);
}
B6029b6:L6029b6:{c.instructions+=8;NFSU2_TR(0x6029b6);
{u32 ea_=u32(u32(8802644u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B6029bc:{NFSU2_TR(0x6029bc);
__builtin_memmove((R+0),gp(0x890080),4);
}
B6029c1:{NFSU2_TR(0x6029c1);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x110ull))));
w4(U+4,u32(0x6022d0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6029cb:{NFSU2_TR(0x6029cb);
{u32 ea_=u32(r4(R+0)+u32(252u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6029d1:{NFSU2_TR(0x6029d1);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x114ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6029d7:{NFSU2_TR(0x6029d7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6029da:{NFSU2_TR(0x6029da);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6029db:{NFSU2_TR(0x6029db);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6029e0ull));
TAIL_STATIC(0x4022c0u,402);
}
B6029e0:L6029e0:{c.instructions+=5;NFSU2_TR(0x6029e0);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6029e3:{NFSU2_TR(0x6029e3);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x225ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B6029ea:{NFSU2_TR(0x6029ea);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6029f1:{NFSU2_TR(0x6029f1);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x90ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B6029f8:{NFSU2_TR(0x6029f8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x94ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6029fe:L6029fe:{c.instructions+=3;NFSU2_TR(0x6029fe);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B602a01:{NFSU2_TR(0x602a01);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B602a03:{NFSU2_TR(0x602a03);
if(r1(R+518)){{goto L602a18;}}
}
B602a05:L602a05:{c.instructions+=3;NFSU2_TR(0x602a05);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x40ull))));
__builtin_memmove((R+4),(U+0),4);
}
B602a08:{NFSU2_TR(0x602a08);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B602a0a:{NFSU2_TR(0x602a0a);
if(r1(R+518)){{goto L602a18;}}
}
B602a0c:L602a0c:{c.instructions+=2;NFSU2_TR(0x602a0c);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x40ull))));
__builtin_memmove((R+4),(U+0),4);
}
B602a0f:{NFSU2_TR(0x602a0f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x602a14ull));
TAIL_STATIC(0x59fa30u,59f);
}
B602a14:L602a14:{c.instructions+=2;NFSU2_TR(0x602a14);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B602a16:{NFSU2_TR(0x602a16);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L602a32;}}
}
B602a18:L602a18:{c.instructions+=2;NFSU2_TR(0x602a18);
u8 U[10];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x225ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+8),(U+4),1);
w1(R+512,u8((r1(U+8))<(r1(R+12))));
w1(R+523,sborrow<u8>(r1(U+8),r1(R+12)));
w1(U+9,u8(u32(r1(U+8))-u32(r1(R+12))));
w1(R+519,u8(s8(r1(U+9))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+9))==(u8(0x0ull))));
w1(U+5,u8(u32(r1(U+9))&u32(u8(0xffull))));
w1(U+6,u8(__builtin_popcountll(u64(r1(U+5)))));
w1(U+7,u8(u32(r1(U+6))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+7))==(u8(0x0ull))));
}
B602a1e:{NFSU2_TR(0x602a1e);
if(r1(R+518)){{goto L602a32;}}
}
B602a20:L602a20:{c.instructions+=3;NFSU2_TR(0x602a20);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B602a23:{NFSU2_TR(0x602a23);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B602a24:{NFSU2_TR(0x602a24);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x602a29ull));
TAIL_STATIC(0x4022c0u,402);
}
B602a29:L602a29:{c.instructions+=2;NFSU2_TR(0x602a29);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B602a2c:{NFSU2_TR(0x602a2c);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x225ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B602a32:L602a32:{c.instructions+=2;NFSU2_TR(0x602a32);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x22cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x5ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B602a39:{NFSU2_TR(0x602a39);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L602a58;}}
}
B602a3b:L602a3b:{c.instructions+=3;NFSU2_TR(0x602a3b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x238ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B602a41:{NFSU2_TR(0x602a41);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B602a43:{NFSU2_TR(0x602a43);
if(r1(R+518)){{goto L602a58;}}
}
B602a45:L602a45:{c.instructions+=2;NFSU2_TR(0x602a45);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x11ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B602a49:{NFSU2_TR(0x602a49);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L602a58;}}
}
B602a4b:L602a4b:{c.instructions+=4;NFSU2_TR(0x602a4b);
__builtin_memmove((R+0),gp(0x865154),4);
}
B602a50:{NFSU2_TR(0x602a50);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B602a51:{NFSU2_TR(0x602a51);
__builtin_memmove((R+4),(R+24),4);
}
B602a53:{NFSU2_TR(0x602a53);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x602a58ull));
TAIL_STATIC(0x5f3550u,5f3);
}
B602a58:L602a58:{c.instructions+=4;NFSU2_TR(0x602a58);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B602a5b:{NFSU2_TR(0x602a5b);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B602a5d:{NFSU2_TR(0x602a5d);
w4(R+28,u32(0x3ull));
}
B602a62:{NFSU2_TR(0x602a62);
if(r1(R+518)){{goto L602a9d;}}
}
B602a64:L602a64:{c.instructions+=3;NFSU2_TR(0x602a64);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B602a67:{NFSU2_TR(0x602a67);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B602a69:{NFSU2_TR(0x602a69);
if(r1(R+518)){{goto L602a79;}}
}
B602a6b:L602a6b:{c.instructions+=2;NFSU2_TR(0x602a6b);
u8 U[10];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((U+6),(U+4),2);
w2(U+8,u16(u32(r2(U+6))-u32(r2(R+12))));
w1(R+518,u8((r2(U+8))==(u16(0x0ull))));
}
B602a6f:{NFSU2_TR(0x602a6f);
if(r1(R+518)){{goto L602a79;}}
}
B602a71:L602a71:{c.instructions+=2;NFSU2_TR(0x602a71);
u8 U[8];
__builtin_memmove((U+0),gp(0x89e7b0),4);
w4(U+4,u32(u32(r4(U+0))-u32(r4(R+12))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B602a77:{NFSU2_TR(0x602a77);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L602a9d;}}
}
B602a79:L602a79:{c.instructions+=3;NFSU2_TR(0x602a79);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B602a7d:{NFSU2_TR(0x602a7d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x22cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B602a83:{NFSU2_TR(0x602a83);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L602a92;}}
}
B602a85:L602a85:{c.instructions+=2;NFSU2_TR(0x602a85);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B602a87:{NFSU2_TR(0x602a87);
if(r1(R+518)){{goto L602a9d;}}
}
B602a89:L602a89:{c.instructions+=2;NFSU2_TR(0x602a89);
__builtin_memmove((R+4),(R+24),4);
}
B602a8b:{NFSU2_TR(0x602a8b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x602a90ull));
TAIL_STATIC(0x5f3080u,5f3);
}
B602a90:L602a90:{c.instructions+=1;NFSU2_TR(0x602a90);
{goto L602a9d;}
}
B602a92:L602a92:{c.instructions+=2;NFSU2_TR(0x602a92);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B602a94:{NFSU2_TR(0x602a94);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L602a9d;}}
}
B602a96:L602a96:{c.instructions+=2;NFSU2_TR(0x602a96);
__builtin_memmove((R+4),(R+24),4);
}
B602a98:{NFSU2_TR(0x602a98);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x602a9dull));
TAIL_STATIC(0x5f3010u,5f3);
}
B602a9d:L602a9d:{c.instructions+=2;NFSU2_TR(0x602a9d);
u8 U[5];
__builtin_memmove((U+3),gp(0x89e7d8),1);
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
B602aa3:{NFSU2_TR(0x602aa3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L602aad;}}
}
B602aa5:L602aa5:{c.instructions+=2;NFSU2_TR(0x602aa5);
u8 U[14];
__builtin_memmove((U+6),gp(0x890108),4);
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
B602aab:{NFSU2_TR(0x602aab);
if(r1(R+518)){{goto L602ab6;}}
}
B602aad:L602aad:{c.instructions+=2;NFSU2_TR(0x602aad);
__builtin_memmove((R+4),(R+24),4);
}
B602aaf:{NFSU2_TR(0x602aaf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x602ab4ull));
TAIL_STATIC(0x5f39d0u,5f3);
}
B602ab4:L602ab4:{c.instructions+=1;NFSU2_TR(0x602ab4);
{goto L602ac8;}
}
B602ab6:L602ab6:{c.instructions+=2;NFSU2_TR(0x602ab6);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x230ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B602abc:{NFSU2_TR(0x602abc);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L602ac8;}}
}
B602abe:L602abe:{c.instructions+=1;NFSU2_TR(0x602abe);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x230ull))));
w4(U+4,u32(0x2ull));
s4(u32(r4(U+0)),r4(U+4));
}
B602ac8:L602ac8:{c.instructions+=2;NFSU2_TR(0x602ac8);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x264ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B602ace:{NFSU2_TR(0x602ace);
if(r1(R+518)){{goto L602ad7;}}
}
B602ad0:L602ad0:{c.instructions+=2;NFSU2_TR(0x602ad0);
__builtin_memmove((R+4),(R+24),4);
}
B602ad2:{NFSU2_TR(0x602ad2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x602ad7ull));
TAIL_STATIC(0x5eb280u,5eb);
}
B602ad7:L602ad7:{c.instructions+=2;NFSU2_TR(0x602ad7);
__builtin_memmove((R+4),(R+24),4);
}
B602ad9:{NFSU2_TR(0x602ad9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x602adeull));
TAIL_STATIC(0x5eb040u,5eb);
}
B602ade:L602ade:{c.instructions+=3;NFSU2_TR(0x602ade);
__builtin_memmove((R+4),gp(0x7fb724),4);
}
B602ae4:{NFSU2_TR(0x602ae4);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x8000001full))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B602aea:{NFSU2_TR(0x602aea);
u8 U[1];
w1(U+0,u8(!(r1(R+519))));
if(r1(U+0)){{goto L602af1;}}
}
B602aec:L602aec:{c.instructions+=3;NFSU2_TR(0x602aec);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
}
B602aed:{NFSU2_TR(0x602aed);
w4(R+4,u32(u32(r4(R+4))|u32(u32(0xffffffe0ull))));
}
B602af0:{NFSU2_TR(0x602af0);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B602af1:L602af1:{c.instructions+=1;NFSU2_TR(0x602af1);
if(r1(R+518)){{goto L602aff;}}
}
B602af3:L602af3:{c.instructions+=2;NFSU2_TR(0x602af3);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xbcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B602af9:{NFSU2_TR(0x602af9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L602bc9;}}
}
B602aff:L602aff:{c.instructions+=5;NFSU2_TR(0x602aff);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xbcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B602b05:{NFSU2_TR(0x602b05);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x80000003ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
}
B602b0a:{NFSU2_TR(0x602b0a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B602b0d:{NFSU2_TR(0x602b0d);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x60ull))));
__builtin_memmove((R+4),(U+0),4);
}
B602b10:{NFSU2_TR(0x602b10);
u8 U[1];
w1(U+0,u8(!(r1(R+519))));
if(r1(U+0)){{goto L602b17;}}
}
B602b12:L602b12:{c.instructions+=3;NFSU2_TR(0x602b12);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B602b13:{NFSU2_TR(0x602b13);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0xfffffffcull))));
}
B602b16:{NFSU2_TR(0x602b16);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B602b17:L602b17:{c.instructions+=19;NFSU2_TR(0x602b17);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
}
B602b1a:{NFSU2_TR(0x602b1a);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B602b1d:{NFSU2_TR(0x602b1d);
{u32 ea_=u32(r4(R+24)+r4(R+0));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B602b20:{NFSU2_TR(0x602b20);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+24))));
}
B602b22:{NFSU2_TR(0x602b22);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B602b24:{NFSU2_TR(0x602b24);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B602b27:{NFSU2_TR(0x602b27);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B602b2a:{NFSU2_TR(0x602b2a);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B602b2c:{NFSU2_TR(0x602b2c);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B602b2e:{NFSU2_TR(0x602b2e);
__asm__ volatile(".byte 0xd9,0xc2":::"memory");
}
B602b30:{NFSU2_TR(0x602b30);
__asm__ volatile(".byte 0xd8,0xcb":::"memory");
}
B602b32:{NFSU2_TR(0x602b32);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B602b34:{NFSU2_TR(0x602b34);
__asm__ volatile(".byte 0xd9,0xfa":::"memory");
}
B602b36:{NFSU2_TR(0x602b36);
__asm__ volatile(".byte 0xdd,0xda":::"memory");
}
B602b38:{NFSU2_TR(0x602b38);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B602b3a:{NFSU2_TR(0x602b3a);
{u32 ea_=u32(u32(7980676u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B602b40:{NFSU2_TR(0x602b40);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B602b42:{NFSU2_TR(0x602b42);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B602b45:{NFSU2_TR(0x602b45);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L602bc9;}}
}
B602b4b:L602b4b:{c.instructions+=3;NFSU2_TR(0x602b4b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B602b4c:{NFSU2_TR(0x602b4c);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x5c4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B602b52:{NFSU2_TR(0x602b52);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x602b57ull));
TAIL_STATIC(0x5e7e80u,5e7);
}
B602b57:L602b57:{c.instructions+=2;NFSU2_TR(0x602b57);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B602b59:{NFSU2_TR(0x602b59);
if(r1(R+518)){{goto L602bc9;}}
}
B602b5b:L602b5b:{c.instructions+=4;NFSU2_TR(0x602b5b);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xbcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B602b61:{NFSU2_TR(0x602b61);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B602b62:{NFSU2_TR(0x602b62);
w4(R+20,u32(0x1ull));
}
B602b67:{NFSU2_TR(0x602b67);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L602b6e;}}
}
B602b69:L602b69:{c.instructions+=1;NFSU2_TR(0x602b69);
w4(R+20,u32(0x4ull));
}
B602b6e:L602b6e:{c.instructions+=2;NFSU2_TR(0x602b6e);
u8 U[14];
__builtin_memmove((U+6),(R+12),4);
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
B602b70:{NFSU2_TR(0x602b70);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L602bc8;}}
}
B602b72:L602b72:{c.instructions+=2;NFSU2_TR(0x602b72);
__builtin_memmove((R+4),(R+28),4);
}
B602b74:{NFSU2_TR(0x602b74);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x602b79ull));
TAIL_STATIC(0x401890u,401);
}
B602b79:L602b79:{c.instructions+=2;NFSU2_TR(0x602b79);
__builtin_memmove((R+12),(R+20),4);
}
B602b7b:{NFSU2_TR(0x602b7b);
{goto L602b80;}
}
B602b80:L602b80:{c.instructions+=5;NFSU2_TR(0x602b80);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xbcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B602b86:{NFSU2_TR(0x602b86);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B602b87:{NFSU2_TR(0x602b87);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xbcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B602b8d:{NFSU2_TR(0x602b8d);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x80000003ull))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
}
B602b93:{NFSU2_TR(0x602b93);
u8 U[1];
w1(U+0,u8(!(r1(R+519))));
if(r1(U+0)){{goto L602b9a;}}
}
B602b95:L602b95:{c.instructions+=3;NFSU2_TR(0x602b95);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
}
B602b96:{NFSU2_TR(0x602b96);
w4(R+4,u32(u32(r4(R+4))|u32(u32(0xfffffffcull))));
}
B602b99:{NFSU2_TR(0x602b99);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B602b9a:L602b9a:{c.instructions+=15;NFSU2_TR(0x602b9a);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B602b9d:{NFSU2_TR(0x602b9d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+20),(U+0),4);
}
B602b9f:{NFSU2_TR(0x602b9f);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B602ba2:{NFSU2_TR(0x602ba2);
__builtin_memmove((R+8),(R+4),4);
}
B602ba4:{NFSU2_TR(0x602ba4);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((R+4),(U+0),4);
}
B602ba7:{NFSU2_TR(0x602ba7);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B602ba9:{NFSU2_TR(0x602ba9);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B602bac:{NFSU2_TR(0x602bac);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+24))));
}
B602bae:{NFSU2_TR(0x602bae);
w4(R+12,u32(u32(r4(R+12))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+12))==(u32(0x0ull))));
}
B602baf:{NFSU2_TR(0x602baf);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B602bb2:{NFSU2_TR(0x602bb2);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
s4(u32(r4(R+4)),r4(U+0));
}
B602bb4:{NFSU2_TR(0x602bb4);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B602bb7:{NFSU2_TR(0x602bb7);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x40cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+4),(U+4),2);
}
B602bbe:{NFSU2_TR(0x602bbe);
u8 U[14];
w4(U+0,u32(u32(u32(0x100ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x2ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+4),2);
s2(u32(r4(U+8)),r2(U+12));
}
B602bc6:{NFSU2_TR(0x602bc6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x602b80u);}goto L602b80;}}
}
B602bc8:L602bc8:{c.instructions+=1;NFSU2_TR(0x602bc8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B602bc9:L602bc9:{c.instructions+=5;NFSU2_TR(0x602bc9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B602bca:{NFSU2_TR(0x602bca);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B602bcb:{NFSU2_TR(0x602bcb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B602bcc:{NFSU2_TR(0x602bcc);
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
B602bcf:{NFSU2_TR(0x602bcf);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B602bd0:L602bd0:{c.instructions+=9;NFSU2_TR(0x602bd0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B602bd1:{NFSU2_TR(0x602bd1);
__builtin_memmove((R+20),(R+16),4);
}
B602bd3:{NFSU2_TR(0x602bd3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B602bd6:{NFSU2_TR(0x602bd6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B602bd7:{NFSU2_TR(0x602bd7);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xffffff83ull))));
}
B602bda:{NFSU2_TR(0x602bda);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0x45ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x45ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x45ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B602bdd:{NFSU2_TR(0x602bdd);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B602bde:{NFSU2_TR(0x602bde);
__builtin_memmove((R+24),(R+4),4);
}
B602be0:{NFSU2_TR(0x602be0);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){TAIL_STATIC(0x603580u,603);}
}
B602be6:L602be6:{c.instructions+=3;NFSU2_TR(0x602be6);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x6035dcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B602bed:{NFSU2_TR(0x602bed);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B602bee:{NFSU2_TR(0x602bee);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x603588ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B602bf5:L602bf5:{c.instructions+=2;NFSU2_TR(0x602bf5);
w4(R+4,u32(0x89cf48ull));
}
B602bfa:{NFSU2_TR(0x602bfa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x602bffull));
TAIL_STATIC(0x5f00f0u,5f0);
}
B602bff:L602bff:{c.instructions+=2;NFSU2_TR(0x602bff);
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
B602c01:{NFSU2_TR(0x602c01);
if(r1(R+518)){{goto L602c10;}}
}
B602c03:L602c03:{c.instructions+=1;NFSU2_TR(0x602c03);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x602c08ull));
TAIL_STATIC(0x5f9790u,5f9);
}
B602c08:L602c08:{c.instructions+=2;NFSU2_TR(0x602c08);
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
B602c0a:{NFSU2_TR(0x602c0a);
if(r1(R+518)){TAIL_STATIC(0x60357fu,603);}
}
B602c10:L602c10:{c.instructions+=2;NFSU2_TR(0x602c10);
w4(R+4,u32(0x85ad40ull));
}
B602c15:{NFSU2_TR(0x602c15);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x602c1aull));
TAIL_STATIC(0x5004c0u,500);
}
B602c1a:L602c1a:{c.instructions+=2;NFSU2_TR(0x602c1a);
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
B602c1c:{NFSU2_TR(0x602c1c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x60357fu,603);}
}
B602c22:L602c22:{c.instructions+=2;NFSU2_TR(0x602c22);
w4(R+4,u32(0x85ef50ull));
}
B602c27:{NFSU2_TR(0x602c27);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x602c2cull));
TAIL_STATIC(0x5012c0u,501);
}
B602c2c:L602c2c:{c.instructions+=2;NFSU2_TR(0x602c2c);
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
B602c2e:{NFSU2_TR(0x602c2e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x60357fu,603);}
}
B602c34:L602c34:{c.instructions+=3;NFSU2_TR(0x602c34);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B602c36:{NFSU2_TR(0x602c36);
w4(R+4,u32(0x85ad40ull));
}
B602c3b:{NFSU2_TR(0x602c3b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x602c40ull));
TAIL_STATIC(0x5004b0u,500);
}
B602c40:L602c40:{c.instructions+=2;NFSU2_TR(0x602c40);
__builtin_memmove((R+4),(R+24),4);
}
B602c42:{NFSU2_TR(0x602c42);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x602c47ull));
TAIL_STATIC(0x5eb530u,5eb);
}
B602c47:L602c47:{c.instructions+=2;NFSU2_TR(0x602c47);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B602c49:{NFSU2_TR(0x602c49);
if(r1(R+518)){{goto L602c56;}}
}
B602c4b:L602c4b:{c.instructions+=3;NFSU2_TR(0x602c4b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B602c4e:{NFSU2_TR(0x602c4e);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x40ull))));
}
B602c51:{NFSU2_TR(0x602c51);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x602c56ull));
TAIL_STATIC(0x592500u,592);
}
B602c56:L602c56:{c.instructions+=5;NFSU2_TR(0x602c56);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B602c59:{NFSU2_TR(0x602c59);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B602c5a:{NFSU2_TR(0x602c5a);
__builtin_memmove((R+4),gp(0x8900d8),4);
}
B602c60:{NFSU2_TR(0x602c60);
u8 U[4];
w4(U+0,u32(0x7ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B602c62:{NFSU2_TR(0x602c62);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x602c67ull));
TAIL_STATIC(0x5f41e0u,5f4);
}
B602c67:L602c67:{c.instructions+=5;NFSU2_TR(0x602c67);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B602c68:{NFSU2_TR(0x602c68);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B602c69:{NFSU2_TR(0x602c69);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B602c6a:{NFSU2_TR(0x602c6a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B602c6b:{NFSU2_TR(0x602c6b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B602c6e:L602c6e:{c.instructions+=2;NFSU2_TR(0x602c6e);
w4(R+4,u32(0x85ef50ull));
}
B602c73:{NFSU2_TR(0x602c73);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x602c78ull));
TAIL_STATIC(0x5012c0u,501);
}
B602c78:L602c78:{c.instructions+=2;NFSU2_TR(0x602c78);
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
B602c7a:{NFSU2_TR(0x602c7a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x60357fu,603);}
}
B602c80:L602c80:{c.instructions+=10;NFSU2_TR(0x602c80);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x98ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B602c86:{NFSU2_TR(0x602c86);
__builtin_memmove((R+8),gp(0x8651ac),4);
}
B602c8c:{NFSU2_TR(0x602c8c);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+0))));
}
B602c8e:{NFSU2_TR(0x602c8e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B602c91:{NFSU2_TR(0x602c91);
{u32 ea_=u32(r4(R+20)+u32(16u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B602c94:{NFSU2_TR(0x602c94);
{u32 ea_=u32(u32(7881320u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B602c9a:{NFSU2_TR(0x602c9a);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B602ca0:{NFSU2_TR(0x602ca0);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B602ca2:{NFSU2_TR(0x602ca2);
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
B602ca5:{NFSU2_TR(0x602ca5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x60357fu,603);}
}
B602cab:L602cab:{c.instructions+=3;NFSU2_TR(0x602cab);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x22cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B602cb1:{NFSU2_TR(0x602cb1);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B602cb4:{NFSU2_TR(0x602cb4);
if(r1(R+518)){{goto L602cbf;}}
}
B602cb6:L602cb6:{c.instructions+=2;NFSU2_TR(0x602cb6);
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
B602cb9:{NFSU2_TR(0x602cb9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x60357fu,603);}
}
B602cbf:L602cbf:{c.instructions+=3;NFSU2_TR(0x602cbf);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x238ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B602cc5:{NFSU2_TR(0x602cc5);
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
B602cc7:{NFSU2_TR(0x602cc7);
if(r1(R+518)){TAIL_STATIC(0x60357fu,603);}
}
B602ccd:L602ccd:{c.instructions+=4;NFSU2_TR(0x602ccd);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B602cd0:{NFSU2_TR(0x602cd0);
w4(R+12,u32(0x1ull));
}
B602cd5:{NFSU2_TR(0x602cd5);
u8 U[14];
__builtin_memmove((U+6),(R+12),4);
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
B602cd7:{NFSU2_TR(0x602cd7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x60357fu,603);}
}
B602cdd:L602cdd:{c.instructions+=3;NFSU2_TR(0x602cdd);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B602ce0:{NFSU2_TR(0x602ce0);
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
B602ce2:{NFSU2_TR(0x602ce2);
if(r1(R+518)){TAIL_STATIC(0x60357fu,603);}
}
B602ce8:L602ce8:{c.instructions+=3;NFSU2_TR(0x602ce8);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B602ce9:{NFSU2_TR(0x602ce9);
__builtin_memmove((R+4),(R+24),4);
}
B602ceb:{NFSU2_TR(0x602ceb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x602cf0ull));
TAIL_STATIC(0x5f2fa0u,5f2);
}
B602cf0:L602cf0:{c.instructions+=5;NFSU2_TR(0x602cf0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B602cf1:{NFSU2_TR(0x602cf1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B602cf2:{NFSU2_TR(0x602cf2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B602cf3:{NFSU2_TR(0x602cf3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B602cf4:{NFSU2_TR(0x602cf4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B602cf7:L602cf7:{c.instructions+=3;NFSU2_TR(0x602cf7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B602cfa:{NFSU2_TR(0x602cfa);
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
B602cfc:{NFSU2_TR(0x602cfc);
if(r1(R+518)){TAIL_STATIC(0x60357fu,603);}
}
B602d02:L602d02:{c.instructions+=3;NFSU2_TR(0x602d02);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B602d04:{NFSU2_TR(0x602d04);
__builtin_memmove((R+4),(R+24),4);
}
B602d06:{NFSU2_TR(0x602d06);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x602d0bull));
TAIL_STATIC(0x5ea800u,5ea);
}
B602d0b:L602d0b:{c.instructions+=5;NFSU2_TR(0x602d0b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B602d0c:{NFSU2_TR(0x602d0c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B602d0d:{NFSU2_TR(0x602d0d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B602d0e:{NFSU2_TR(0x602d0e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B602d0f:{NFSU2_TR(0x602d0f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B602d12:L602d12:{c.instructions+=2;NFSU2_TR(0x602d12);
u8 U[14];
__builtin_memmove((U+6),gp(0x850078),4);
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
B602d19:{NFSU2_TR(0x602d19);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x60357fu,603);}
}
B602d1f:L602d1f:{c.instructions+=2;NFSU2_TR(0x602d1f);
w4(R+4,u32(0x861e7cull));
}
B602d24:{NFSU2_TR(0x602d24);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x602d29ull));
TAIL_STATIC(0x502420u,502);
}
B602d29:L602d29:{c.instructions+=2;NFSU2_TR(0x602d29);
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
B602d2b:{NFSU2_TR(0x602d2b);
if(r1(R+518)){TAIL_STATIC(0x60357fu,603);}
}
B602d31:L602d31:{c.instructions+=2;NFSU2_TR(0x602d31);
w4(R+4,u32(0x861e7cull));
}
B602d36:{NFSU2_TR(0x602d36);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x602d3bull));
TAIL_STATIC(0x534280u,534);
}
B602d3b:L602d3b:{c.instructions+=5;NFSU2_TR(0x602d3b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B602d3c:{NFSU2_TR(0x602d3c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B602d3d:{NFSU2_TR(0x602d3d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B602d3e:{NFSU2_TR(0x602d3e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B602d3f:{NFSU2_TR(0x602d3f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B602d42:L602d42:{c.instructions+=2;NFSU2_TR(0x602d42);
w4(R+4,u32(0x85ad40ull));
}
B602d47:{NFSU2_TR(0x602d47);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x602d4cull));
TAIL_STATIC(0x500b60u,500);
}
B602d4c:L602d4c:{c.instructions+=2;NFSU2_TR(0x602d4c);
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
B602d4e:{NFSU2_TR(0x602d4e);
if(r1(R+518)){TAIL_STATIC(0x60357fu,603);}
}
B602d54:L602d54:{c.instructions+=2;NFSU2_TR(0x602d54);
w4(R+4,u32(0x85ef50ull));
}
B602d59:{NFSU2_TR(0x602d59);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x602d5eull));
TAIL_STATIC(0x5012c0u,501);
}
B602d5e:L602d5e:{c.instructions+=2;NFSU2_TR(0x602d5e);
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
B602d60:{NFSU2_TR(0x602d60);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x60357fu,603);}
}
B602d66:L602d66:{c.instructions+=2;NFSU2_TR(0x602d66);
w4(R+4,u32(0x85ad40ull));
}
B602d6b:{NFSU2_TR(0x602d6b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x602d70ull));
TAIL_STATIC(0x5004c0u,500);
}
B602d70:L602d70:{c.instructions+=2;NFSU2_TR(0x602d70);
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
B602d72:{NFSU2_TR(0x602d72);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x60357fu,603);}
}
B602d78:L602d78:{c.instructions+=3;NFSU2_TR(0x602d78);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B602d7a:{NFSU2_TR(0x602d7a);
w4(R+4,u32(0x85ad40ull));
}
B602d7f:{NFSU2_TR(0x602d7f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x602d84ull));
TAIL_STATIC(0x5004b0u,500);
}
B602d84:L602d84:{c.instructions+=4;NFSU2_TR(0x602d84);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B602d87:{NFSU2_TR(0x602d87);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B602d88:{NFSU2_TR(0x602d88);
w4(R+4,u32(0x860a60ull));
}
B602d8d:{NFSU2_TR(0x602d8d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x602d92ull));
TAIL_STATIC(0x501480u,501);
}
B602d92:L602d92:{c.instructions+=5;NFSU2_TR(0x602d92);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B602d93:{NFSU2_TR(0x602d93);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B602d94:{NFSU2_TR(0x602d94);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B602d95:{NFSU2_TR(0x602d95);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B602d96:{NFSU2_TR(0x602d96);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B602d99:L602d99:{c.instructions+=2;NFSU2_TR(0x602d99);
w4(R+4,u32(0x85ad40ull));
}
B602d9e:{NFSU2_TR(0x602d9e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x602da3ull));
TAIL_STATIC(0x500b60u,500);
}
B602da3:L602da3:{c.instructions+=2;NFSU2_TR(0x602da3);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B602da5:{NFSU2_TR(0x602da5);
if(r1(R+518)){{goto L602e09;}}
}
B602da7:L602da7:{c.instructions+=3;NFSU2_TR(0x602da7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x9acull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B602dad:{NFSU2_TR(0x602dad);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B602daf:{NFSU2_TR(0x602daf);
if(r1(R+518)){{goto L602e09;}}
}
B602db1:L602db1:{c.instructions+=2;NFSU2_TR(0x602db1);
w4(R+4,u32(0x85ad40ull));
}
B602db6:{NFSU2_TR(0x602db6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x602dbbull));
TAIL_STATIC(0x5278f0u,527);
}
B602dbb:L602dbb:{c.instructions+=2;NFSU2_TR(0x602dbb);
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
B602dbd:{NFSU2_TR(0x602dbd);
if(r1(R+518)){{goto L602e09;}}
}
B602dbf:L602dbf:{c.instructions+=2;NFSU2_TR(0x602dbf);
w4(R+4,u32(0x85ef50ull));
}
B602dc4:{NFSU2_TR(0x602dc4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x602dc9ull));
TAIL_STATIC(0x5012c0u,501);
}
B602dc9:L602dc9:{c.instructions+=2;NFSU2_TR(0x602dc9);
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
B602dcb:{NFSU2_TR(0x602dcb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L602e09;}}
}
B602dcd:L602dcd:{c.instructions+=2;NFSU2_TR(0x602dcd);
w4(R+4,u32(0x85ad40ull));
}
B602dd2:{NFSU2_TR(0x602dd2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x602dd7ull));
TAIL_STATIC(0x5004c0u,500);
}
B602dd7:L602dd7:{c.instructions+=2;NFSU2_TR(0x602dd7);
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
B602dd9:{NFSU2_TR(0x602dd9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L602e09;}}
}
B602ddb:L602ddb:{c.instructions+=3;NFSU2_TR(0x602ddb);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B602ddd:{NFSU2_TR(0x602ddd);
w4(R+4,u32(0x85ad40ull));
}
B602de2:{NFSU2_TR(0x602de2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x602de7ull));
TAIL_STATIC(0x5004b0u,500);
}
B602de7:L602de7:{c.instructions+=2;NFSU2_TR(0x602de7);
w4(R+4,u32(0x85ad40ull));
}
B602dec:{NFSU2_TR(0x602dec);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x602df1ull));
TAIL_STATIC(0x500b00u,500);
}
B602df1:L602df1:{c.instructions+=5;NFSU2_TR(0x602df1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B602df4:{NFSU2_TR(0x602df4);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B602df5:{NFSU2_TR(0x602df5);
__builtin_memmove((R+4),gp(0x8900d8),4);
}
B602dfb:{NFSU2_TR(0x602dfb);
u8 U[4];
w4(U+0,u32(0x11ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B602dfd:{NFSU2_TR(0x602dfd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x602e02ull));
TAIL_STATIC(0x5f41e0u,5f4);
}
B602e02:L602e02:{c.instructions+=5;NFSU2_TR(0x602e02);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B602e03:{NFSU2_TR(0x602e03);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B602e04:{NFSU2_TR(0x602e04);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B602e05:{NFSU2_TR(0x602e05);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B602e06:{NFSU2_TR(0x602e06);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B602e09:L602e09:{c.instructions+=4;NFSU2_TR(0x602e09);
__builtin_memmove((R+0),gp(0x850078),4);
}
B602e0e:{NFSU2_TR(0x602e0e);
w4(R+12,u32(0x1ull));
}
B602e13:{NFSU2_TR(0x602e13);
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
B602e15:{NFSU2_TR(0x602e15);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L602e29;}}
}
B602e17:L602e17:{c.instructions+=2;NFSU2_TR(0x602e17);
w4(R+4,u32(0x85ef50ull));
}
B602e1c:{NFSU2_TR(0x602e1c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x602e21ull));
TAIL_STATIC(0x5012c0u,501);
}
B602e21:L602e21:{c.instructions+=2;NFSU2_TR(0x602e21);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B602e23:{NFSU2_TR(0x602e23);
if(r1(R+518)){{goto L602e29;}}
}
B602e25:L602e25:{c.instructions+=2;NFSU2_TR(0x602e25);
w1(R+0,u8(u32(r1(R+0))^u32(r1(R+0))));
}
B602e27:{NFSU2_TR(0x602e27);
{goto L602e2b;}
}
B602e29:L602e29:{c.instructions+=1;NFSU2_TR(0x602e29);
__builtin_memmove((R+0),(R+12),1);
}
B602e2b:L602e2b:{c.instructions+=3;NFSU2_TR(0x602e2b);
__builtin_memmove((R+4),gp(0x89e7b0),4);
}
B602e31:{NFSU2_TR(0x602e31);
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
B602e33:{NFSU2_TR(0x602e33);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x60357fu,603);}
}
B602e39:L602e39:{c.instructions+=2;NFSU2_TR(0x602e39);
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
B602e3b:{NFSU2_TR(0x602e3b);
if(r1(R+518)){TAIL_STATIC(0x60357fu,603);}
}
B602e41:L602e41:{c.instructions+=3;NFSU2_TR(0x602e41);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x250ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B602e47:{NFSU2_TR(0x602e47);
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
B602e49:{NFSU2_TR(0x602e49);
if(r1(R+518)){TAIL_STATIC(0x60357fu,603);}
}
B602e4f:L602e4f:{c.instructions+=2;NFSU2_TR(0x602e4f);
w4(R+4,u32(0x85ef70ull));
}
B602e54:{NFSU2_TR(0x602e54);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x602e59ull));
TAIL_STATIC(0x500d80u,500);
}
B602e59:L602e59:{c.instructions+=2;NFSU2_TR(0x602e59);
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
B602e5b:{NFSU2_TR(0x602e5b);
if(r1(R+518)){TAIL_STATIC(0x60357fu,603);}
}
B602e61:L602e61:{c.instructions+=3;NFSU2_TR(0x602e61);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x9a4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B602e67:{NFSU2_TR(0x602e67);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B602e69:{NFSU2_TR(0x602e69);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x602e6eull));
TAIL_STATIC(0x4db890u,4db);
}
B602e6e:L602e6e:{c.instructions+=4;NFSU2_TR(0x602e6e);
__builtin_memmove((R+8),gp(0x890118),4);
}
B602e74:{NFSU2_TR(0x602e74);
w4(R+4,u32(0x838590ull));
}
B602e79:{NFSU2_TR(0x602e79);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xc30ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B602e7f:{NFSU2_TR(0x602e7f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x602e84ull));
TAIL_STATIC(0x5010e0u,501);
}
B602e84:L602e84:{c.instructions+=5;NFSU2_TR(0x602e84);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B602e85:{NFSU2_TR(0x602e85);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B602e86:{NFSU2_TR(0x602e86);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B602e87:{NFSU2_TR(0x602e87);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B602e88:{NFSU2_TR(0x602e88);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B602e8b:L602e8b:{c.instructions+=2;NFSU2_TR(0x602e8b);
w4(R+4,u32(0x85ad40ull));
}
B602e90:{NFSU2_TR(0x602e90);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x602e95ull));
TAIL_STATIC(0x500b60u,500);
}
B602e95:L602e95:{c.instructions+=2;NFSU2_TR(0x602e95);
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
B602e97:{NFSU2_TR(0x602e97);
if(r1(R+518)){TAIL_STATIC(0x60357fu,603);}
}
B602e9d:L602e9d:{c.instructions+=2;NFSU2_TR(0x602e9d);
w4(R+4,u32(0x85ef50ull));
}
B602ea2:{NFSU2_TR(0x602ea2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x602ea7ull));
TAIL_STATIC(0x5012c0u,501);
}
B602ea7:L602ea7:{c.instructions+=2;NFSU2_TR(0x602ea7);
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
B602ea9:{NFSU2_TR(0x602ea9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x60357fu,603);}
}
B602eaf:L602eaf:{c.instructions+=2;NFSU2_TR(0x602eaf);
w4(R+4,u32(0x85ad40ull));
}
B602eb4:{NFSU2_TR(0x602eb4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x602eb9ull));
TAIL_STATIC(0x5004c0u,500);
}
B602eb9:L602eb9:{c.instructions+=2;NFSU2_TR(0x602eb9);
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
B602ebb:{NFSU2_TR(0x602ebb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x60357fu,603);}
}
B602ec1:L602ec1:{c.instructions+=3;NFSU2_TR(0x602ec1);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B602ec3:{NFSU2_TR(0x602ec3);
w4(R+4,u32(0x85ad40ull));
}
B602ec8:{NFSU2_TR(0x602ec8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x602ecdull));
TAIL_STATIC(0x5004b0u,500);
}
B602ecd:L602ecd:{c.instructions+=5;NFSU2_TR(0x602ecd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B602ed0:{NFSU2_TR(0x602ed0);
__builtin_memmove((R+4),gp(0x8900d8),4);
}
B602ed6:{NFSU2_TR(0x602ed6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B602ed7:{NFSU2_TR(0x602ed7);
u8 U[4];
w4(U+0,u32(0x13ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B602ed9:{NFSU2_TR(0x602ed9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x602edeull));
TAIL_STATIC(0x5f41e0u,5f4);
}
B602ede:L602ede:{c.instructions+=5;NFSU2_TR(0x602ede);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B602edf:{NFSU2_TR(0x602edf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B602ee0:{NFSU2_TR(0x602ee0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B602ee1:{NFSU2_TR(0x602ee1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B602ee2:{NFSU2_TR(0x602ee2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B602ee5:L602ee5:{c.instructions+=2;NFSU2_TR(0x602ee5);
w4(R+4,u32(0x85ad40ull));
}
B602eea:{NFSU2_TR(0x602eea);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x602eefull));
TAIL_STATIC(0x500b60u,500);
}
B602eef:L602eef:{c.instructions+=2;NFSU2_TR(0x602eef);
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
B602ef1:{NFSU2_TR(0x602ef1);
if(r1(R+518)){TAIL_STATIC(0x60357fu,603);}
}
B602ef7:L602ef7:{c.instructions+=2;NFSU2_TR(0x602ef7);
w4(R+4,u32(0x85ef50ull));
}
B602efc:{NFSU2_TR(0x602efc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x602f01ull));
TAIL_STATIC(0x5012c0u,501);
}
B602f01:L602f01:{c.instructions+=2;NFSU2_TR(0x602f01);
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
B602f03:{NFSU2_TR(0x602f03);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x60357fu,603);}
}
B602f09:L602f09:{c.instructions+=2;NFSU2_TR(0x602f09);
w4(R+4,u32(0x85ad40ull));
}
B602f0e:{NFSU2_TR(0x602f0e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x602f13ull));
TAIL_STATIC(0x5004c0u,500);
}
B602f13:L602f13:{c.instructions+=2;NFSU2_TR(0x602f13);
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
B602f15:{NFSU2_TR(0x602f15);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x60357fu,603);}
}
B602f1b:L602f1b:{c.instructions+=3;NFSU2_TR(0x602f1b);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B602f1d:{NFSU2_TR(0x602f1d);
w4(R+4,u32(0x85ad40ull));
}
B602f22:{NFSU2_TR(0x602f22);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x602f27ull));
TAIL_STATIC(0x5004b0u,500);
}
B602f27:L602f27:{c.instructions+=5;NFSU2_TR(0x602f27);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B602f2a:{NFSU2_TR(0x602f2a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B602f2b:{NFSU2_TR(0x602f2b);
__builtin_memmove((R+4),gp(0x8900d8),4);
}
B602f31:{NFSU2_TR(0x602f31);
u8 U[4];
w4(U+0,u32(0x12ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B602f33:{NFSU2_TR(0x602f33);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x602f38ull));
TAIL_STATIC(0x5f41e0u,5f4);
}
B602f38:L602f38:{c.instructions+=5;NFSU2_TR(0x602f38);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B602f39:{NFSU2_TR(0x602f39);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B602f3a:{NFSU2_TR(0x602f3a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B602f3b:{NFSU2_TR(0x602f3b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B602f3c:{NFSU2_TR(0x602f3c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B602f3f:L602f3f:{c.instructions+=3;NFSU2_TR(0x602f3f);
__builtin_memmove((R+0),gp(0x89e7d9),1);
}
B602f44:{NFSU2_TR(0x602f44);
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
B602f46:{NFSU2_TR(0x602f46);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x60357fu,603);}
}
B602f4c:L602f4c:{c.instructions+=3;NFSU2_TR(0x602f4c);
__builtin_memmove((R+0),gp(0x890104),4);
}
B602f51:{NFSU2_TR(0x602f51);
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
B602f53:{NFSU2_TR(0x602f53);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x60357fu,603);}
}
B602f59:L602f59:{c.instructions+=3;NFSU2_TR(0x602f59);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B602f5c:{NFSU2_TR(0x602f5c);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B602f5e:{NFSU2_TR(0x602f5e);
if(r1(R+518)){{goto L602f8c;}}
}
B602f60:L602f60:{c.instructions+=2;NFSU2_TR(0x602f60);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x7fffffffull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B602f65:{NFSU2_TR(0x602f65);
if(r1(R+518)){{goto L602f8c;}}
}
B602f67:L602f67:{c.instructions+=9;NFSU2_TR(0x602f67);
__builtin_memmove((R+8),gp(0x86518c),4);
}
B602f6d:{NFSU2_TR(0x602f6d);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+0))));
}
B602f6f:{NFSU2_TR(0x602f6f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B602f72:{NFSU2_TR(0x602f72);
{u32 ea_=u32(r4(R+20)+u32(16u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B602f75:{NFSU2_TR(0x602f75);
{u32 ea_=u32(u32(7881320u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B602f7b:{NFSU2_TR(0x602f7b);
{u32 ea_=u32(u32(8017168u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B602f81:{NFSU2_TR(0x602f81);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B602f83:{NFSU2_TR(0x602f83);
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
B602f86:{NFSU2_TR(0x602f86);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){TAIL_STATIC(0x60357fu,603);}
}
B602f8c:L602f8c:{c.instructions+=3;NFSU2_TR(0x602f8c);
__builtin_memmove((R+0),gp(0x890118),4);
}
B602f91:{NFSU2_TR(0x602f91);
u8 U[18];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+10),(U+0),4);
w1(R+512,u8((r4(U+10))<(u32(0x4ull))));
w1(R+523,sborrow<u32>(r4(U+10),u32(0x4ull)));
w4(U+14,u32(u32(r4(U+10))-u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(U+14))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+14))==(u32(0x0ull))));
w4(U+4,u32(u32(r4(U+14))&u32(u32(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r4(U+4)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B602f94:{NFSU2_TR(0x602f94);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x60357fu,603);}
}
B602f9a:L602f9a:{c.instructions+=3;NFSU2_TR(0x602f9a);
__builtin_memmove((R+4),gp(0x8900bc),4);
}
B602fa0:{NFSU2_TR(0x602fa0);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
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
B602fa3:{NFSU2_TR(0x602fa3);
if(r1(R+518)){TAIL_STATIC(0x60357fu,603);}
}
B602fa9:L602fa9:{c.instructions+=5;NFSU2_TR(0x602fa9);
{u32 ea_=u32(u32(8628772u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B602faf:{NFSU2_TR(0x602faf);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B602fb5:{NFSU2_TR(0x602fb5);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B602fb7:{NFSU2_TR(0x602fb7);
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
B602fba:{NFSU2_TR(0x602fba);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){TAIL_STATIC(0x60357fu,603);}
}
B602fc0:L602fc0:{c.instructions+=4;NFSU2_TR(0x602fc0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B602fc3:{NFSU2_TR(0x602fc3);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8020e0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B602fc9:{NFSU2_TR(0x602fc9);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B602fcb:{NFSU2_TR(0x602fcb);
if(r1(R+518)){{goto L602fdc;}}
}
B602fcd:L602fcd:{c.instructions+=3;NFSU2_TR(0x602fcd);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B602fcf:{NFSU2_TR(0x602fcf);
__builtin_memmove((R+4),(R+24),4);
}
B602fd1:{NFSU2_TR(0x602fd1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x602fd6ull));
TAIL_STATIC(0x5ffe70u,5ff);
}
B602fd6:L602fd6:{c.instructions+=1;NFSU2_TR(0x602fd6);
__builtin_memmove((R+4),gp(0x8900bc),4);
}
B602fdc:L602fdc:{c.instructions+=3;NFSU2_TR(0x602fdc);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B602fde:{NFSU2_TR(0x602fde);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B602fe0:{NFSU2_TR(0x602fe0);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){TAIL_STATIC(0x60300du,603);}
}
B602fe2:L602fe2:{c.instructions+=1;NFSU2_TR(0x602fe2);
{goto L602ff0;}
}
B602ff0:L602ff0:{c.instructions+=3;NFSU2_TR(0x602ff0);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x8900b4ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B602ff7:{NFSU2_TR(0x602ff7);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B602ffa:{NFSU2_TR(0x602ffa);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8020e8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+12),(U+4),1);
TAIL_STATIC(0x603000u,603);
}
XIT:NFSU2_TR_EXIT(0x602,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
