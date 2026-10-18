#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_401(u8* __restrict R,Cpu& c);
u32 body_403(u8* __restrict R,Cpu& c);
u32 body_404(u8* __restrict R,Cpu& c);
u32 body_43b(u8* __restrict R,Cpu& c);
u32 body_43c(u8* __restrict R,Cpu& c);
u32 body_43e(u8* __restrict R,Cpu& c);
u32 body_440(u8* __restrict R,Cpu& c);
u32 body_571(u8* __restrict R,Cpu& c);
u32 body_578(u8* __restrict R,Cpu& c);
u32 body_591(u8* __restrict R,Cpu& c);
u32 body_592(u8* __restrict R,Cpu& c);
u32 body_593(u8* __restrict R,Cpu& c);
u32 body_594(u8* __restrict R,Cpu& c);
u32 body_5a0(u8* __restrict R,Cpu& c);
u32 body_5ec(u8* __restrict R,Cpu& c);
u32 body_5ed(u8* __restrict R,Cpu& c);
u32 body_5ee(u8* __restrict R,Cpu& c);
u32 body_5f0(u8* __restrict R,Cpu& c);
u32 body_5f1(u8* __restrict R,Cpu& c);
u32 body_5f4(u8* __restrict R,Cpu& c);
u32 body_60b(u8* __restrict R,Cpu& c);
u32 body_60c(u8* __restrict R,Cpu& c);
u32 body_610(u8* __restrict R,Cpu& c);
u32 body_614(u8* __restrict R,Cpu& c);
u32 body_75b(u8* __restrict R,Cpu& c);
u32 body_75c(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x402,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x402,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_402(u8* __restrict R,Cpu& c);
u32 page_402(Cpu& c){return body_402(c.regs.data(),c);}
__attribute__((noinline)) u32 body_402(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x402000:goto L402000;
case 0x402001:c.instructions+=3;goto B402001;
case 0x402004:c.instructions+=2;goto B402004;
case 0x402006:c.instructions+=1;goto B402006;
case 0x402008:goto L402008;
case 0x40200d:c.instructions+=1;goto B40200d;
case 0x40200f:goto L40200f;
case 0x402014:c.instructions+=6;goto B402014;
case 0x402017:c.instructions+=5;goto B402017;
case 0x40201b:c.instructions+=4;goto B40201b;
case 0x40201f:c.instructions+=3;goto B40201f;
case 0x402025:c.instructions+=2;goto B402025;
case 0x402026:c.instructions+=1;goto B402026;
case 0x402027:goto L402027;
case 0x40202d:c.instructions+=2;goto B40202d;
case 0x40202e:c.instructions+=1;goto B40202e;
case 0x402030:goto L402030;
case 0x402034:c.instructions+=2;goto B402034;
case 0x402037:c.instructions+=1;goto B402037;
case 0x402039:goto L402039;
case 0x402040:c.instructions+=1;goto B402040;
case 0x402043:goto L402043;
case 0x402045:c.instructions+=1;goto B402045;
case 0x402050:goto L402050;
case 0x402054:c.instructions+=5;goto B402054;
case 0x402056:c.instructions+=4;goto B402056;
case 0x402058:c.instructions+=3;goto B402058;
case 0x40205a:c.instructions+=2;goto B40205a;
case 0x40205b:c.instructions+=1;goto B40205b;
case 0x402060:goto L402060;
case 0x402070:goto L402070;
case 0x402071:c.instructions+=4;goto B402071;
case 0x402073:c.instructions+=3;goto B402073;
case 0x402079:c.instructions+=2;goto B402079;
case 0x40207b:c.instructions+=1;goto B40207b;
case 0x40207d:goto L40207d;
case 0x40207f:c.instructions+=3;goto B40207f;
case 0x402082:c.instructions+=2;goto B402082;
case 0x402083:c.instructions+=1;goto B402083;
case 0x402086:goto L402086;
case 0x40208c:c.instructions+=2;goto B40208c;
case 0x40208e:c.instructions+=1;goto B40208e;
case 0x402090:goto L402090;
case 0x402092:c.instructions+=2;goto B402092;
case 0x402094:c.instructions+=1;goto B402094;
case 0x402096:goto L402096;
case 0x4020a0:goto L4020a0;
case 0x4020a6:c.instructions+=2;goto B4020a6;
case 0x4020a8:c.instructions+=1;goto B4020a8;
case 0x4020aa:goto L4020aa;
case 0x4020ac:c.instructions+=3;goto B4020ac;
case 0x4020af:c.instructions+=2;goto B4020af;
case 0x4020b0:c.instructions+=1;goto B4020b0;
case 0x4020b3:goto L4020b3;
case 0x4020b9:c.instructions+=2;goto B4020b9;
case 0x4020bb:c.instructions+=1;goto B4020bb;
case 0x4020bd:goto L4020bd;
case 0x4020bf:c.instructions+=2;goto B4020bf;
case 0x4020c1:c.instructions+=1;goto B4020c1;
case 0x4020c3:goto L4020c3;
case 0x4020cd:goto L4020cd;
case 0x4020ce:c.instructions+=1;goto B4020ce;
case 0x4020d0:goto L4020d0;
case 0x4020d1:c.instructions+=4;goto B4020d1;
case 0x4020d3:c.instructions+=3;goto B4020d3;
case 0x4020d9:c.instructions+=2;goto B4020d9;
case 0x4020db:c.instructions+=1;goto B4020db;
case 0x4020dd:goto L4020dd;
case 0x4020e0:c.instructions+=2;goto B4020e0;
case 0x4020e3:c.instructions+=1;goto B4020e3;
case 0x4020e8:goto L4020e8;
case 0x4020eb:c.instructions+=2;goto B4020eb;
case 0x4020ed:c.instructions+=1;goto B4020ed;
case 0x4020f2:goto L4020f2;
case 0x4020f5:c.instructions+=2;goto B4020f5;
case 0x4020f7:c.instructions+=1;goto B4020f7;
case 0x4020fc:goto L4020fc;
case 0x402103:goto L402103;
case 0x402104:c.instructions+=1;goto B402104;
case 0x402110:goto L402110;
case 0x402111:c.instructions+=4;goto B402111;
case 0x402113:c.instructions+=3;goto B402113;
case 0x402119:c.instructions+=2;goto B402119;
case 0x40211b:c.instructions+=1;goto B40211b;
case 0x40211d:goto L40211d;
case 0x402120:c.instructions+=5;goto B402120;
case 0x402121:c.instructions+=4;goto B402121;
case 0x402124:c.instructions+=3;goto B402124;
case 0x402126:c.instructions+=2;goto B402126;
case 0x402128:c.instructions+=1;goto B402128;
case 0x40212d:goto L40212d;
case 0x40212f:c.instructions+=3;goto B40212f;
case 0x402131:c.instructions+=2;goto B402131;
case 0x402133:c.instructions+=1;goto B402133;
case 0x402136:goto L402136;
case 0x402138:c.instructions+=2;goto B402138;
case 0x402139:c.instructions+=1;goto B402139;
case 0x40213b:goto L40213b;
case 0x40213e:c.instructions+=2;goto B40213e;
case 0x40213f:c.instructions+=1;goto B40213f;
case 0x402144:goto L402144;
case 0x402147:c.instructions+=3;goto B402147;
case 0x40214a:c.instructions+=2;goto B40214a;
case 0x40214b:c.instructions+=1;goto B40214b;
case 0x402150:goto L402150;
case 0x402153:c.instructions+=2;goto B402153;
case 0x402155:c.instructions+=1;goto B402155;
case 0x40215a:goto L40215a;
case 0x402161:goto L402161;
case 0x402162:c.instructions+=1;goto B402162;
case 0x402170:goto L402170;
case 0x402176:c.instructions+=2;goto B402176;
case 0x402178:c.instructions+=1;goto B402178;
case 0x402180:goto L402180;
case 0x40218a:c.instructions+=3;goto B40218a;
case 0x40218b:c.instructions+=2;goto B40218b;
case 0x40218d:c.instructions+=1;goto B40218d;
case 0x40218f:goto L40218f;
case 0x402194:c.instructions+=2;goto B402194;
case 0x402196:c.instructions+=1;goto B402196;
case 0x402198:goto L402198;
case 0x40219f:c.instructions+=1;goto B40219f;
case 0x4021a5:goto L4021a5;
case 0x4021aa:c.instructions+=2;goto B4021aa;
case 0x4021ac:c.instructions+=1;goto B4021ac;
case 0x4021b2:goto L4021b2;
case 0x4021b7:c.instructions+=2;goto B4021b7;
case 0x4021b9:c.instructions+=1;goto B4021b9;
case 0x4021bf:goto L4021bf;
case 0x4021c4:c.instructions+=2;goto B4021c4;
case 0x4021c6:c.instructions+=1;goto B4021c6;
case 0x4021cc:goto L4021cc;
case 0x4021d1:c.instructions+=2;goto B4021d1;
case 0x4021d3:c.instructions+=1;goto B4021d3;
case 0x4021d9:goto L4021d9;
case 0x4021dc:c.instructions+=2;goto B4021dc;
case 0x4021e0:c.instructions+=1;goto B4021e0;
case 0x4021e6:goto L4021e6;
case 0x4021ec:c.instructions+=1;goto B4021ec;
case 0x4021f1:goto L4021f1;
case 0x4021f3:c.instructions+=1;goto B4021f3;
case 0x4021f9:goto L4021f9;
case 0x4021ff:c.instructions+=1;goto B4021ff;
case 0x402204:goto L402204;
case 0x402206:c.instructions+=1;goto B402206;
case 0x40220c:goto L40220c;
case 0x40220f:c.instructions+=5;goto B40220f;
case 0x402215:c.instructions+=4;goto B402215;
case 0x40221b:c.instructions+=3;goto B40221b;
case 0x40221d:c.instructions+=2;goto B40221d;
case 0x402220:c.instructions+=1;goto B402220;
case 0x402226:goto L402226;
case 0x40222d:c.instructions+=1;goto B40222d;
case 0x402233:goto L402233;
case 0x402239:c.instructions+=2;goto B402239;
case 0x40223b:c.instructions+=1;goto B40223b;
case 0x40223d:goto L40223d;
case 0x402243:c.instructions+=2;goto B402243;
case 0x402246:c.instructions+=1;goto B402246;
case 0x402248:goto L402248;
case 0x40224b:c.instructions+=1;goto B40224b;
case 0x40224d:goto L40224d;
case 0x402250:c.instructions+=1;goto B402250;
case 0x402252:goto L402252;
case 0x402255:c.instructions+=1;goto B402255;
case 0x402257:goto L402257;
case 0x40225a:c.instructions+=1;goto B40225a;
case 0x40225c:goto L40225c;
case 0x40225e:c.instructions+=2;goto B40225e;
case 0x402260:c.instructions+=1;goto B402260;
case 0x402263:goto L402263;
case 0x402266:c.instructions+=1;goto B402266;
case 0x402268:goto L402268;
case 0x40226b:c.instructions+=4;goto B40226b;
case 0x402271:c.instructions+=3;goto B402271;
case 0x402274:c.instructions+=2;goto B402274;
case 0x402275:c.instructions+=1;goto B402275;
case 0x40227a:goto L40227a;
case 0x402280:c.instructions+=3;goto B402280;
case 0x402282:c.instructions+=2;goto B402282;
case 0x402285:c.instructions+=1;goto B402285;
case 0x402287:goto L402287;
case 0x40228d:c.instructions+=6;goto B40228d;
case 0x402290:c.instructions+=5;goto B402290;
case 0x402296:c.instructions+=4;goto B402296;
case 0x40229c:c.instructions+=3;goto B40229c;
case 0x40229e:c.instructions+=2;goto B40229e;
case 0x4022a1:c.instructions+=1;goto B4022a1;
case 0x4022a3:goto L4022a3;
case 0x4022a6:c.instructions+=3;goto B4022a6;
case 0x4022a9:c.instructions+=2;goto B4022a9;
case 0x4022ab:c.instructions+=1;goto B4022ab;
case 0x4022ad:goto L4022ad;
case 0x4022b2:goto L4022b2;
case 0x4022b4:c.instructions+=1;goto B4022b4;
case 0x4022b6:goto L4022b6;
case 0x4022b8:c.instructions+=2;goto B4022b8;
case 0x4022b9:c.instructions+=1;goto B4022b9;
case 0x4022ba:goto L4022ba;
case 0x4022bc:c.instructions+=2;goto B4022bc;
case 0x4022bd:c.instructions+=1;goto B4022bd;
case 0x4022c0:goto L4022c0;
case 0x4022d0:goto L4022d0;
case 0x4022d4:c.instructions+=4;goto B4022d4;
case 0x4022d6:c.instructions+=3;goto B4022d6;
case 0x4022d7:c.instructions+=2;goto B4022d7;
case 0x4022d9:c.instructions+=1;goto B4022d9;
case 0x4022db:goto L4022db;
case 0x4022de:c.instructions+=3;goto B4022de;
case 0x4022e1:c.instructions+=2;goto B4022e1;
case 0x4022e3:c.instructions+=1;goto B4022e3;
case 0x4022e6:goto L4022e6;
case 0x4022e8:c.instructions+=1;goto B4022e8;
case 0x4022ea:goto L4022ea;
case 0x4022ed:c.instructions+=2;goto B4022ed;
case 0x4022ef:c.instructions+=1;goto B4022ef;
case 0x4022f4:goto L4022f4;
case 0x4022f5:c.instructions+=1;goto B4022f5;
case 0x4022f8:goto L4022f8;
case 0x4022fe:c.instructions+=2;goto B4022fe;
case 0x402300:c.instructions+=1;goto B402300;
case 0x402302:goto L402302;
case 0x402305:c.instructions+=3;goto B402305;
case 0x402308:c.instructions+=2;goto B402308;
case 0x40230a:c.instructions+=1;goto B40230a;
case 0x40230c:goto L40230c;
case 0x40230e:c.instructions+=2;goto B40230e;
case 0x402310:c.instructions+=1;goto B402310;
case 0x402313:goto L402313;
case 0x402315:c.instructions+=1;goto B402315;
case 0x402317:goto L402317;
case 0x40231a:c.instructions+=2;goto B40231a;
case 0x40231c:c.instructions+=1;goto B40231c;
case 0x402321:goto L402321;
case 0x402322:c.instructions+=1;goto B402322;
case 0x402330:goto L402330;
case 0x402336:c.instructions+=2;goto B402336;
case 0x402338:c.instructions+=1;goto B402338;
case 0x40233a:goto L40233a;
case 0x40233c:c.instructions+=1;goto B40233c;
case 0x40233f:goto L40233f;
case 0x402341:c.instructions+=1;goto B402341;
case 0x402350:goto L402350;
case 0x402360:goto L402360;
case 0x402361:c.instructions+=6;goto B402361;
case 0x402362:c.instructions+=5;goto B402362;
case 0x402364:c.instructions+=4;goto B402364;
case 0x40236a:c.instructions+=3;goto B40236a;
case 0x40236d:c.instructions+=2;goto B40236d;
case 0x402375:c.instructions+=1;goto B402375;
case 0x402377:goto L402377;
case 0x402379:c.instructions+=5;goto B402379;
case 0x40237b:c.instructions+=4;goto B40237b;
case 0x40237f:c.instructions+=3;goto B40237f;
case 0x402380:c.instructions+=2;goto B402380;
case 0x402382:c.instructions+=1;goto B402382;
case 0x402388:goto L402388;
case 0x40238c:c.instructions+=2;goto B40238c;
case 0x40238e:c.instructions+=1;goto B40238e;
case 0x402390:goto L402390;
case 0x402396:c.instructions+=2;goto B402396;
case 0x402398:c.instructions+=1;goto B402398;
case 0x40239a:goto L40239a;
case 0x4023a0:c.instructions+=2;goto B4023a0;
case 0x4023a6:c.instructions+=1;goto B4023a6;
case 0x4023a8:goto L4023a8;
case 0x4023aa:c.instructions+=3;goto B4023aa;
case 0x4023ac:c.instructions+=2;goto B4023ac;
case 0x4023ae:c.instructions+=1;goto B4023ae;
case 0x4023b0:goto L4023b0;
case 0x4023b2:c.instructions+=3;goto B4023b2;
case 0x4023b3:c.instructions+=2;goto B4023b3;
case 0x4023b4:c.instructions+=1;goto B4023b4;
case 0x4023b5:goto L4023b5;
case 0x4023b7:c.instructions+=5;goto B4023b7;
case 0x4023b8:c.instructions+=4;goto B4023b8;
case 0x4023bc:c.instructions+=3;goto B4023bc;
case 0x4023bd:c.instructions+=2;goto B4023bd;
case 0x4023bf:c.instructions+=1;goto B4023bf;
case 0x4023c5:goto L4023c5;
case 0x4023c9:c.instructions+=1;goto B4023c9;
case 0x4023d3:goto L4023d3;
case 0x4023d4:c.instructions+=2;goto B4023d4;
case 0x4023d5:c.instructions+=1;goto B4023d5;
case 0x4023e0:goto L4023e0;
case 0x4023e3:c.instructions+=8;goto B4023e3;
case 0x4023e4:c.instructions+=7;goto B4023e4;
case 0x4023e6:c.instructions+=6;goto B4023e6;
case 0x4023e9:c.instructions+=5;goto B4023e9;
case 0x4023ea:c.instructions+=4;goto B4023ea;
case 0x4023ec:c.instructions+=3;goto B4023ec;
case 0x4023f3:c.instructions+=2;goto B4023f3;
case 0x4023f4:c.instructions+=1;goto B4023f4;
case 0x4023f9:goto L4023f9;
case 0x4023fd:c.instructions+=2;goto B4023fd;
case 0x4023fe:c.instructions+=1;goto B4023fe;
case 0x402403:goto L402403;
case 0x402406:c.instructions+=17;goto B402406;
case 0x402409:c.instructions+=16;goto B402409;
case 0x40240d:c.instructions+=15;goto B40240d;
case 0x402411:c.instructions+=14;goto B402411;
case 0x402414:c.instructions+=13;goto B402414;
case 0x402416:c.instructions+=12;goto B402416;
case 0x402419:c.instructions+=11;goto B402419;
case 0x40241d:c.instructions+=10;goto B40241d;
case 0x402421:c.instructions+=9;goto B402421;
case 0x402424:c.instructions+=8;goto B402424;
case 0x402428:c.instructions+=7;goto B402428;
case 0x40242a:c.instructions+=6;goto B40242a;
case 0x40242b:c.instructions+=5;goto B40242b;
case 0x40242f:c.instructions+=4;goto B40242f;
case 0x402433:c.instructions+=3;goto B402433;
case 0x402437:c.instructions+=2;goto B402437;
case 0x402439:c.instructions+=1;goto B402439;
case 0x40243c:goto L40243c;
case 0x40243d:c.instructions+=3;goto B40243d;
case 0x40243e:c.instructions+=2;goto B40243e;
case 0x402441:c.instructions+=1;goto B402441;
case 0x402450:goto L402450;
case 0x402451:c.instructions+=7;goto B402451;
case 0x402452:c.instructions+=6;goto B402452;
case 0x402454:c.instructions+=5;goto B402454;
case 0x402455:c.instructions+=4;goto B402455;
case 0x402458:c.instructions+=3;goto B402458;
case 0x40245b:c.instructions+=2;goto B40245b;
case 0x40245e:c.instructions+=1;goto B40245e;
case 0x402460:goto L402460;
case 0x402466:c.instructions+=3;goto B402466;
case 0x40246c:c.instructions+=2;goto B40246c;
case 0x402472:c.instructions+=1;goto B402472;
case 0x402477:goto L402477;
case 0x40247d:goto L40247d;
case 0x402481:c.instructions+=2;goto B402481;
case 0x402483:c.instructions+=1;goto B402483;
case 0x402485:goto L402485;
case 0x402488:c.instructions+=2;goto B402488;
case 0x40248a:c.instructions+=1;goto B40248a;
case 0x40248c:goto L40248c;
case 0x402490:c.instructions+=2;goto B402490;
case 0x402492:c.instructions+=1;goto B402492;
case 0x402494:goto L402494;
case 0x40249a:c.instructions+=4;goto B40249a;
case 0x40249f:c.instructions+=3;goto B40249f;
case 0x4024a5:c.instructions+=2;goto B4024a5;
case 0x4024ab:c.instructions+=1;goto B4024ab;
case 0x4024b0:goto L4024b0;
case 0x4024b6:c.instructions+=1;goto B4024b6;
case 0x4024b8:goto L4024b8;
case 0x4024b9:c.instructions+=1;goto B4024b9;
case 0x4024be:goto L4024be;
case 0x4024c1:c.instructions+=1;goto B4024c1;
case 0x4024c3:goto L4024c3;
case 0x4024c6:c.instructions+=3;goto B4024c6;
case 0x4024cc:c.instructions+=2;goto B4024cc;
case 0x4024ce:c.instructions+=1;goto B4024ce;
case 0x4024d0:goto L4024d0;
case 0x4024d5:goto L4024d5;
case 0x4024d7:c.instructions+=1;goto B4024d7;
case 0x4024d9:goto L4024d9;
case 0x4024da:c.instructions+=1;goto B4024da;
case 0x4024df:goto L4024df;
case 0x4024e0:c.instructions+=3;goto B4024e0;
case 0x4024e1:c.instructions+=2;goto B4024e1;
case 0x4024e2:c.instructions+=1;goto B4024e2;
case 0x4024f0:goto L4024f0;
case 0x4024f1:c.instructions+=3;goto B4024f1;
case 0x4024f4:c.instructions+=2;goto B4024f4;
case 0x4024f6:c.instructions+=1;goto B4024f6;
case 0x4024f8:goto L4024f8;
case 0x4024fe:c.instructions+=3;goto B4024fe;
case 0x402500:c.instructions+=2;goto B402500;
case 0x402503:c.instructions+=1;goto B402503;
case 0x402505:goto L402505;
case 0x40250a:c.instructions+=6;goto B40250a;
case 0x40250d:c.instructions+=5;goto B40250d;
case 0x402511:c.instructions+=4;goto B402511;
case 0x402515:c.instructions+=3;goto B402515;
case 0x40251b:c.instructions+=2;goto B40251b;
case 0x40251c:c.instructions+=1;goto B40251c;
case 0x40251d:goto L40251d;
case 0x402523:c.instructions+=2;goto B402523;
case 0x402524:c.instructions+=1;goto B402524;
case 0x402530:goto L402530;
case 0x402534:c.instructions+=4;goto B402534;
case 0x402536:c.instructions+=3;goto B402536;
case 0x402537:c.instructions+=2;goto B402537;
case 0x402539:c.instructions+=1;goto B402539;
case 0x40253b:goto L40253b;
case 0x402541:c.instructions+=2;goto B402541;
case 0x402543:c.instructions+=1;goto B402543;
case 0x402545:goto L402545;
case 0x402547:c.instructions+=2;goto B402547;
case 0x40254c:c.instructions+=1;goto B40254c;
case 0x402551:goto L402551;
case 0x402553:c.instructions+=1;goto B402553;
case 0x402558:goto L402558;
case 0x40255b:c.instructions+=6;goto B40255b;
case 0x40255d:c.instructions+=5;goto B40255d;
case 0x40255f:c.instructions+=4;goto B40255f;
case 0x402561:c.instructions+=3;goto B402561;
case 0x402563:c.instructions+=2;goto B402563;
case 0x402565:c.instructions+=1;goto B402565;
case 0x402568:goto L402568;
case 0x40256f:c.instructions+=2;goto B40256f;
case 0x402570:c.instructions+=1;goto B402570;
case 0x402580:goto L402580;
case 0x402583:c.instructions+=2;goto B402583;
case 0x402586:c.instructions+=1;goto B402586;
case 0x40258b:goto L40258b;
case 0x40258e:c.instructions+=1;goto B40258e;
case 0x402590:goto L402590;
case 0x402593:c.instructions+=7;goto B402593;
case 0x402594:c.instructions+=6;goto B402594;
case 0x402597:c.instructions+=5;goto B402597;
case 0x40259a:c.instructions+=4;goto B40259a;
case 0x40259d:c.instructions+=3;goto B40259d;
case 0x40259e:c.instructions+=2;goto B40259e;
case 0x4025a4:c.instructions+=1;goto B4025a4;
case 0x4025a6:goto L4025a6;
case 0x4025a9:c.instructions+=6;goto B4025a9;
case 0x4025aa:c.instructions+=5;goto B4025aa;
case 0x4025ad:c.instructions+=4;goto B4025ad;
case 0x4025af:c.instructions+=3;goto B4025af;
case 0x4025b0:c.instructions+=2;goto B4025b0;
case 0x4025b2:c.instructions+=1;goto B4025b2;
case 0x4025b7:goto L4025b7;
case 0x4025bb:c.instructions+=4;goto B4025bb;
case 0x4025bd:c.instructions+=3;goto B4025bd;
case 0x4025be:c.instructions+=2;goto B4025be;
case 0x4025c0:c.instructions+=1;goto B4025c0;
case 0x4025c5:goto L4025c5;
case 0x4025c6:c.instructions+=1;goto B4025c6;
case 0x4025c8:goto L4025c8;
case 0x4025cb:c.instructions+=1;goto B4025cb;
case 0x4025d1:goto L4025d1;
case 0x4025d4:c.instructions+=4;goto B4025d4;
case 0x4025d7:c.instructions+=3;goto B4025d7;
case 0x4025de:c.instructions+=2;goto B4025de;
case 0x4025e2:c.instructions+=1;goto B4025e2;
case 0x4025e9:goto L4025e9;
case 0x4025ed:c.instructions+=8;goto B4025ed;
case 0x4025f3:c.instructions+=7;goto B4025f3;
case 0x4025f7:c.instructions+=6;goto B4025f7;
case 0x4025fb:c.instructions+=5;goto B4025fb;
case 0x402601:c.instructions+=4;goto B402601;
case 0x402607:c.instructions+=3;goto B402607;
case 0x402609:c.instructions+=2;goto B402609;
case 0x40260c:c.instructions+=1;goto B40260c;
case 0x40260e:goto L40260e;
case 0x402614:c.instructions+=1;goto B402614;
case 0x402616:goto L402616;
case 0x40261c:goto L40261c;
case 0x402620:c.instructions+=3;goto B402620;
case 0x402622:c.instructions+=2;goto B402622;
case 0x402625:c.instructions+=1;goto B402625;
case 0x402627:goto L402627;
case 0x402629:c.instructions+=1;goto B402629;
case 0x40262b:goto L40262b;
case 0x40262f:goto L40262f;
case 0x402633:c.instructions+=4;goto B402633;
case 0x402635:c.instructions+=3;goto B402635;
case 0x402637:c.instructions+=2;goto B402637;
case 0x40263a:c.instructions+=1;goto B40263a;
case 0x40263c:goto L40263c;
case 0x40263e:c.instructions+=1;goto B40263e;
case 0x402642:goto L402642;
case 0x402644:c.instructions+=5;goto B402644;
case 0x402646:c.instructions+=4;goto B402646;
case 0x402648:c.instructions+=3;goto B402648;
case 0x40264a:c.instructions+=2;goto B40264a;
case 0x40264d:c.instructions+=1;goto B40264d;
case 0x40264f:goto L40264f;
case 0x402650:c.instructions+=4;goto B402650;
case 0x402652:c.instructions+=3;goto B402652;
case 0x402653:c.instructions+=2;goto B402653;
case 0x402656:c.instructions+=1;goto B402656;
case 0x402657:goto L402657;
case 0x402658:c.instructions+=4;goto B402658;
case 0x40265a:c.instructions+=3;goto B40265a;
case 0x40265b:c.instructions+=2;goto B40265b;
case 0x40265e:c.instructions+=1;goto B40265e;
case 0x402660:goto L402660;
case 0x402663:c.instructions+=11;goto B402663;
case 0x402664:c.instructions+=10;goto B402664;
case 0x402665:c.instructions+=9;goto B402665;
case 0x402666:c.instructions+=8;goto B402666;
case 0x402667:c.instructions+=7;goto B402667;
case 0x40266a:c.instructions+=6;goto B40266a;
case 0x40266c:c.instructions+=5;goto B40266c;
case 0x40266f:c.instructions+=4;goto B40266f;
case 0x402677:c.instructions+=3;goto B402677;
case 0x40267b:c.instructions+=2;goto B40267b;
case 0x40267d:c.instructions+=1;goto B40267d;
case 0x402683:goto L402683;
case 0x402684:c.instructions+=2;goto B402684;
case 0x402686:c.instructions+=1;goto B402686;
case 0x40268b:goto L40268b;
case 0x40268d:c.instructions+=1;goto B40268d;
case 0x40268f:goto L40268f;
case 0x402691:c.instructions+=4;goto B402691;
case 0x402692:c.instructions+=3;goto B402692;
case 0x402694:c.instructions+=2;goto B402694;
case 0x402698:c.instructions+=1;goto B402698;
case 0x40269c:goto L40269c;
case 0x40269d:c.instructions+=3;goto B40269d;
case 0x4026a0:c.instructions+=2;goto B4026a0;
case 0x4026a3:c.instructions+=1;goto B4026a3;
case 0x4026a5:goto L4026a5;
case 0x4026a6:c.instructions+=6;goto B4026a6;
case 0x4026a7:c.instructions+=5;goto B4026a7;
case 0x4026ab:c.instructions+=4;goto B4026ab;
case 0x4026ad:c.instructions+=3;goto B4026ad;
case 0x4026ae:c.instructions+=2;goto B4026ae;
case 0x4026af:c.instructions+=1;goto B4026af;
case 0x4026b1:goto L4026b1;
case 0x4026b5:c.instructions+=2;goto B4026b5;
case 0x4026b9:c.instructions+=1;goto B4026b9;
case 0x4026bd:goto L4026bd;
case 0x4026c1:c.instructions+=4;goto B4026c1;
case 0x4026c7:c.instructions+=3;goto B4026c7;
case 0x4026c9:c.instructions+=2;goto B4026c9;
case 0x4026cc:c.instructions+=1;goto B4026cc;
case 0x4026ce:goto L4026ce;
case 0x4026d3:c.instructions+=2;goto B4026d3;
case 0x4026d6:c.instructions+=1;goto B4026d6;
case 0x4026d7:goto L4026d7;
case 0x4026d9:c.instructions+=2;goto B4026d9;
case 0x4026dc:c.instructions+=1;goto B4026dc;
case 0x4026e0:goto L4026e0;
case 0x4026e1:c.instructions+=7;goto B4026e1;
case 0x4026e6:c.instructions+=6;goto B4026e6;
case 0x4026ec:c.instructions+=5;goto B4026ec;
case 0x4026f0:c.instructions+=4;goto B4026f0;
case 0x4026f4:c.instructions+=3;goto B4026f4;
case 0x4026fa:c.instructions+=2;goto B4026fa;
case 0x4026fb:c.instructions+=1;goto B4026fb;
case 0x402700:goto L402700;
case 0x402705:c.instructions+=5;goto B402705;
case 0x402707:c.instructions+=4;goto B402707;
case 0x402709:c.instructions+=3;goto B402709;
case 0x40270c:c.instructions+=2;goto B40270c;
case 0x40270d:c.instructions+=1;goto B40270d;
case 0x402712:goto L402712;
case 0x402720:goto L402720;
case 0x402721:c.instructions+=7;goto B402721;
case 0x402725:c.instructions+=6;goto B402725;
case 0x402726:c.instructions+=5;goto B402726;
case 0x40272b:c.instructions+=4;goto B40272b;
case 0x40272d:c.instructions+=3;goto B40272d;
case 0x40272f:c.instructions+=2;goto B40272f;
case 0x402731:c.instructions+=1;goto B402731;
case 0x402736:goto L402736;
case 0x402738:c.instructions+=6;goto B402738;
case 0x40273a:c.instructions+=5;goto B40273a;
case 0x40273c:c.instructions+=4;goto B40273c;
case 0x40273f:c.instructions+=3;goto B40273f;
case 0x402740:c.instructions+=2;goto B402740;
case 0x402742:c.instructions+=1;goto B402742;
case 0x402747:goto L402747;
case 0x40274a:c.instructions+=3;goto B40274a;
case 0x40274b:c.instructions+=2;goto B40274b;
case 0x40274d:c.instructions+=1;goto B40274d;
case 0x402752:goto L402752;
case 0x402755:c.instructions+=3;goto B402755;
case 0x402756:c.instructions+=2;goto B402756;
case 0x402758:c.instructions+=1;goto B402758;
case 0x40275d:goto L40275d;
case 0x40275f:c.instructions+=6;goto B40275f;
case 0x402761:c.instructions+=5;goto B402761;
case 0x402763:c.instructions+=4;goto B402763;
case 0x402766:c.instructions+=3;goto B402766;
case 0x402767:c.instructions+=2;goto B402767;
case 0x402769:c.instructions+=1;goto B402769;
case 0x40276e:goto L40276e;
case 0x402770:c.instructions+=1;goto B402770;
case 0x402775:goto L402775;
case 0x402776:c.instructions+=2;goto B402776;
case 0x402777:c.instructions+=1;goto B402777;
case 0x402780:goto L402780;
case 0x402782:c.instructions+=1;goto B402782;
case 0x402785:goto L402785;
case 0x402790:goto L402790;
case 0x402793:c.instructions+=5;goto B402793;
case 0x402797:c.instructions+=4;goto B402797;
case 0x402798:c.instructions+=3;goto B402798;
case 0x40279d:c.instructions+=2;goto B40279d;
case 0x4027a2:c.instructions+=1;goto B4027a2;
case 0x4027a7:goto L4027a7;
case 0x4027aa:c.instructions+=2;goto B4027aa;
case 0x4027af:c.instructions+=1;goto B4027af;
case 0x4027b0:goto L4027b0;
case 0x4027b1:c.instructions+=7;goto B4027b1;
case 0x4027b5:c.instructions+=6;goto B4027b5;
case 0x4027b6:c.instructions+=5;goto B4027b6;
case 0x4027bb:c.instructions+=4;goto B4027bb;
case 0x4027bd:c.instructions+=3;goto B4027bd;
case 0x4027bf:c.instructions+=2;goto B4027bf;
case 0x4027c1:c.instructions+=1;goto B4027c1;
case 0x4027c6:goto L4027c6;
case 0x4027cc:c.instructions+=4;goto B4027cc;
case 0x4027cf:c.instructions+=3;goto B4027cf;
case 0x4027d0:c.instructions+=2;goto B4027d0;
case 0x4027d1:c.instructions+=1;goto B4027d1;
case 0x4027d6:goto L4027d6;
case 0x4027db:c.instructions+=3;goto B4027db;
case 0x4027dd:c.instructions+=2;goto B4027dd;
case 0x4027df:c.instructions+=1;goto B4027df;
case 0x4027e4:goto L4027e4;
case 0x4027e5:c.instructions+=2;goto B4027e5;
case 0x4027e7:c.instructions+=1;goto B4027e7;
case 0x4027ec:goto L4027ec;
case 0x4027ee:c.instructions+=1;goto B4027ee;
case 0x4027f3:goto L4027f3;
case 0x4027f5:c.instructions+=1;goto B4027f5;
case 0x4027fa:goto L4027fa;
case 0x4027fb:c.instructions+=2;goto B4027fb;
case 0x4027fc:c.instructions+=1;goto B4027fc;
case 0x402800:goto L402800;
case 0x402803:c.instructions+=5;goto B402803;
case 0x402807:c.instructions+=4;goto B402807;
case 0x402808:c.instructions+=3;goto B402808;
case 0x40280d:c.instructions+=2;goto B40280d;
case 0x402812:c.instructions+=1;goto B402812;
case 0x402817:goto L402817;
case 0x40281a:c.instructions+=2;goto B40281a;
case 0x40281f:c.instructions+=1;goto B40281f;
case 0x402820:goto L402820;
case 0x402821:c.instructions+=7;goto B402821;
case 0x402825:c.instructions+=6;goto B402825;
case 0x402826:c.instructions+=5;goto B402826;
case 0x40282b:c.instructions+=4;goto B40282b;
case 0x40282d:c.instructions+=3;goto B40282d;
case 0x40282f:c.instructions+=2;goto B40282f;
case 0x402831:c.instructions+=1;goto B402831;
case 0x402836:goto L402836;
case 0x40283c:c.instructions+=4;goto B40283c;
case 0x40283f:c.instructions+=3;goto B40283f;
case 0x402840:c.instructions+=2;goto B402840;
case 0x402841:c.instructions+=1;goto B402841;
case 0x402846:goto L402846;
case 0x402849:c.instructions+=3;goto B402849;
case 0x40284a:c.instructions+=2;goto B40284a;
case 0x40284c:c.instructions+=1;goto B40284c;
case 0x402851:goto L402851;
case 0x402854:c.instructions+=3;goto B402854;
case 0x402855:c.instructions+=2;goto B402855;
case 0x402857:c.instructions+=1;goto B402857;
case 0x40285c:goto L40285c;
case 0x402861:c.instructions+=3;goto B402861;
case 0x402863:c.instructions+=2;goto B402863;
case 0x402865:c.instructions+=1;goto B402865;
case 0x40286a:goto L40286a;
case 0x40286b:c.instructions+=2;goto B40286b;
case 0x40286d:c.instructions+=1;goto B40286d;
case 0x402872:goto L402872;
case 0x402874:c.instructions+=1;goto B402874;
case 0x402879:goto L402879;
case 0x40287b:c.instructions+=1;goto B40287b;
case 0x402880:goto L402880;
case 0x402881:c.instructions+=2;goto B402881;
case 0x402882:c.instructions+=1;goto B402882;
case 0x402890:goto L402890;
case 0x402893:c.instructions+=5;goto B402893;
case 0x402897:c.instructions+=4;goto B402897;
case 0x402898:c.instructions+=3;goto B402898;
case 0x40289d:c.instructions+=2;goto B40289d;
case 0x4028a2:c.instructions+=1;goto B4028a2;
case 0x4028a7:goto L4028a7;
case 0x4028aa:c.instructions+=2;goto B4028aa;
case 0x4028af:c.instructions+=1;goto B4028af;
case 0x4028b0:goto L4028b0;
case 0x4028b1:c.instructions+=7;goto B4028b1;
case 0x4028b5:c.instructions+=6;goto B4028b5;
case 0x4028b6:c.instructions+=5;goto B4028b6;
case 0x4028bb:c.instructions+=4;goto B4028bb;
case 0x4028bd:c.instructions+=3;goto B4028bd;
case 0x4028bf:c.instructions+=2;goto B4028bf;
case 0x4028c1:c.instructions+=1;goto B4028c1;
case 0x4028c6:goto L4028c6;
case 0x4028cc:c.instructions+=4;goto B4028cc;
case 0x4028cf:c.instructions+=3;goto B4028cf;
case 0x4028d0:c.instructions+=2;goto B4028d0;
case 0x4028d1:c.instructions+=1;goto B4028d1;
case 0x4028d6:goto L4028d6;
case 0x4028d9:c.instructions+=3;goto B4028d9;
case 0x4028da:c.instructions+=2;goto B4028da;
case 0x4028dc:c.instructions+=1;goto B4028dc;
case 0x4028e1:goto L4028e1;
case 0x4028e4:c.instructions+=3;goto B4028e4;
case 0x4028e5:c.instructions+=2;goto B4028e5;
case 0x4028e7:c.instructions+=1;goto B4028e7;
case 0x4028ec:goto L4028ec;
case 0x4028f1:c.instructions+=3;goto B4028f1;
case 0x4028f3:c.instructions+=2;goto B4028f3;
case 0x4028f5:c.instructions+=1;goto B4028f5;
case 0x4028fa:goto L4028fa;
case 0x4028fb:c.instructions+=2;goto B4028fb;
case 0x4028fd:c.instructions+=1;goto B4028fd;
case 0x402902:goto L402902;
case 0x402904:c.instructions+=1;goto B402904;
case 0x402909:goto L402909;
case 0x40290b:c.instructions+=1;goto B40290b;
case 0x402910:goto L402910;
case 0x402911:c.instructions+=2;goto B402911;
case 0x402912:c.instructions+=1;goto B402912;
case 0x402920:goto L402920;
case 0x402923:c.instructions+=5;goto B402923;
case 0x402927:c.instructions+=4;goto B402927;
case 0x402928:c.instructions+=3;goto B402928;
case 0x40292d:c.instructions+=2;goto B40292d;
case 0x402932:c.instructions+=1;goto B402932;
case 0x402937:goto L402937;
case 0x40293a:c.instructions+=2;goto B40293a;
case 0x40293f:c.instructions+=1;goto B40293f;
case 0x402940:goto L402940;
case 0x402941:c.instructions+=36;goto B402941;
case 0x402943:c.instructions+=35;goto B402943;
case 0x402947:c.instructions+=34;goto B402947;
case 0x40294e:c.instructions+=33;goto B40294e;
case 0x402951:c.instructions+=32;goto B402951;
case 0x402954:c.instructions+=31;goto B402954;
case 0x402955:c.instructions+=30;goto B402955;
case 0x402959:c.instructions+=29;goto B402959;
case 0x40295d:c.instructions+=28;goto B40295d;
case 0x402961:c.instructions+=27;goto B402961;
case 0x402968:c.instructions+=26;goto B402968;
case 0x40296b:c.instructions+=25;goto B40296b;
case 0x40296c:c.instructions+=24;goto B40296c;
case 0x40296f:c.instructions+=23;goto B40296f;
case 0x402972:c.instructions+=22;goto B402972;
case 0x402974:c.instructions+=21;goto B402974;
case 0x402976:c.instructions+=20;goto B402976;
case 0x402978:c.instructions+=19;goto B402978;
case 0x40297a:c.instructions+=18;goto B40297a;
case 0x40297c:c.instructions+=17;goto B40297c;
case 0x40297e:c.instructions+=16;goto B40297e;
case 0x402980:c.instructions+=15;goto B402980;
case 0x402982:c.instructions+=14;goto B402982;
case 0x402984:c.instructions+=13;goto B402984;
case 0x402986:c.instructions+=12;goto B402986;
case 0x402988:c.instructions+=11;goto B402988;
case 0x40298a:c.instructions+=10;goto B40298a;
case 0x40298c:c.instructions+=9;goto B40298c;
case 0x402990:c.instructions+=8;goto B402990;
case 0x402996:c.instructions+=7;goto B402996;
case 0x402999:c.instructions+=6;goto B402999;
case 0x40299d:c.instructions+=5;goto B40299d;
case 0x4029a0:c.instructions+=4;goto B4029a0;
case 0x4029a4:c.instructions+=3;goto B4029a4;
case 0x4029a7:c.instructions+=2;goto B4029a7;
case 0x4029ab:c.instructions+=1;goto B4029ab;
case 0x4029b0:goto L4029b0;
case 0x4029b4:c.instructions+=7;goto B4029b4;
case 0x4029b8:c.instructions+=6;goto B4029b8;
case 0x4029bc:c.instructions+=5;goto B4029bc;
case 0x4029be:c.instructions+=4;goto B4029be;
case 0x4029c4:c.instructions+=3;goto B4029c4;
case 0x4029c6:c.instructions+=2;goto B4029c6;
case 0x4029c9:c.instructions+=1;goto B4029c9;
case 0x4029cb:goto L4029cb;
case 0x4029cf:c.instructions+=2;goto B4029cf;
case 0x4029d5:c.instructions+=1;goto B4029d5;
case 0x4029d7:goto L4029d7;
case 0x4029d9:c.instructions+=1;goto B4029d9;
case 0x4029e3:goto L4029e3;
case 0x4029e9:c.instructions+=4;goto B4029e9;
case 0x4029ef:c.instructions+=3;goto B4029ef;
case 0x4029f1:c.instructions+=2;goto B4029f1;
case 0x4029f4:c.instructions+=1;goto B4029f4;
case 0x4029f6:goto L4029f6;
case 0x4029f8:c.instructions+=1;goto B4029f8;
case 0x4029fe:goto L4029fe;
case 0x402a04:c.instructions+=5;goto B402a04;
case 0x402a0a:c.instructions+=4;goto B402a0a;
case 0x402a10:c.instructions+=3;goto B402a10;
case 0x402a12:c.instructions+=2;goto B402a12;
case 0x402a15:c.instructions+=1;goto B402a15;
case 0x402a17:goto L402a17;
case 0x402a18:c.instructions+=3;goto B402a18;
case 0x402a1e:c.instructions+=2;goto B402a1e;
case 0x402a1f:c.instructions+=1;goto B402a1f;
case 0x402a22:goto L402a22;
case 0x402a23:c.instructions+=4;goto B402a23;
case 0x402a25:c.instructions+=3;goto B402a25;
case 0x402a2f:c.instructions+=2;goto B402a2f;
case 0x402a30:c.instructions+=1;goto B402a30;
case 0x402a40:goto L402a40;
case 0x402a41:c.instructions+=11;goto B402a41;
case 0x402a43:c.instructions+=10;goto B402a43;
case 0x402a46:c.instructions+=9;goto B402a46;
case 0x402a49:c.instructions+=8;goto B402a49;
case 0x402a4a:c.instructions+=7;goto B402a4a;
case 0x402a4d:c.instructions+=6;goto B402a4d;
case 0x402a51:c.instructions+=5;goto B402a51;
case 0x402a52:c.instructions+=4;goto B402a52;
case 0x402a56:c.instructions+=3;goto B402a56;
case 0x402a57:c.instructions+=2;goto B402a57;
case 0x402a59:c.instructions+=1;goto B402a59;
case 0x402a5e:goto L402a5e;
case 0x402a61:c.instructions+=6;goto B402a61;
case 0x402a64:c.instructions+=5;goto B402a64;
case 0x402a65:c.instructions+=4;goto B402a65;
case 0x402a69:c.instructions+=3;goto B402a69;
case 0x402a6a:c.instructions+=2;goto B402a6a;
case 0x402a6d:c.instructions+=1;goto B402a6d;
case 0x402a72:goto L402a72;
case 0x402a78:c.instructions+=5;goto B402a78;
case 0x402a7c:c.instructions+=4;goto B402a7c;
case 0x402a80:c.instructions+=3;goto B402a80;
case 0x402a82:c.instructions+=2;goto B402a82;
case 0x402a85:c.instructions+=1;goto B402a85;
case 0x402a87:goto L402a87;
case 0x402a8d:c.instructions+=5;goto B402a8d;
case 0x402a91:c.instructions+=4;goto B402a91;
case 0x402a95:c.instructions+=3;goto B402a95;
case 0x402a97:c.instructions+=2;goto B402a97;
case 0x402a9a:c.instructions+=1;goto B402a9a;
case 0x402a9c:goto L402a9c;
case 0x402aa0:c.instructions+=4;goto B402aa0;
case 0x402aa6:c.instructions+=3;goto B402aa6;
case 0x402aa8:c.instructions+=2;goto B402aa8;
case 0x402aab:c.instructions+=1;goto B402aab;
case 0x402aad:goto L402aad;
case 0x402aaf:c.instructions+=4;goto B402aaf;
case 0x402ab0:c.instructions+=3;goto B402ab0;
case 0x402ab2:c.instructions+=2;goto B402ab2;
case 0x402ab3:c.instructions+=1;goto B402ab3;
case 0x402ab4:goto L402ab4;
case 0x402ab9:c.instructions+=4;goto B402ab9;
case 0x402aba:c.instructions+=3;goto B402aba;
case 0x402abc:c.instructions+=2;goto B402abc;
case 0x402abd:c.instructions+=1;goto B402abd;
case 0x402abe:goto L402abe;
case 0x402ac2:c.instructions+=5;goto B402ac2;
case 0x402ac8:c.instructions+=4;goto B402ac8;
case 0x402aca:c.instructions+=3;goto B402aca;
case 0x402acd:c.instructions+=2;goto B402acd;
case 0x402ad2:c.instructions+=1;goto B402ad2;
case 0x402ad4:goto L402ad4;
case 0x402ad9:goto L402ad9;
case 0x402ada:c.instructions+=3;goto B402ada;
case 0x402adc:c.instructions+=2;goto B402adc;
case 0x402add:c.instructions+=1;goto B402add;
case 0x402ae0:goto L402ae0;
case 0x402ae3:c.instructions+=16;goto B402ae3;
case 0x402ae4:c.instructions+=15;goto B402ae4;
case 0x402ae5:c.instructions+=14;goto B402ae5;
case 0x402ae6:c.instructions+=13;goto B402ae6;
case 0x402aea:c.instructions+=12;goto B402aea;
case 0x402aec:c.instructions+=11;goto B402aec;
case 0x402aef:c.instructions+=10;goto B402aef;
case 0x402af2:c.instructions+=9;goto B402af2;
case 0x402af5:c.instructions+=8;goto B402af5;
case 0x402af7:c.instructions+=7;goto B402af7;
case 0x402afb:c.instructions+=6;goto B402afb;
case 0x402afd:c.instructions+=5;goto B402afd;
case 0x402aff:c.instructions+=4;goto B402aff;
case 0x402b01:c.instructions+=3;goto B402b01;
case 0x402b05:c.instructions+=2;goto B402b05;
case 0x402b09:c.instructions+=1;goto B402b09;
case 0x402b0f:goto L402b0f;
case 0x402b10:c.instructions+=1;goto B402b10;
case 0x402b12:goto L402b12;
case 0x402b16:goto L402b16;
case 0x402b17:c.instructions+=2;goto B402b17;
case 0x402b19:c.instructions+=1;goto B402b19;
case 0x402b1e:goto L402b1e;
case 0x402b20:c.instructions+=5;goto B402b20;
case 0x402b23:c.instructions+=4;goto B402b23;
case 0x402b27:c.instructions+=3;goto B402b27;
case 0x402b29:c.instructions+=2;goto B402b29;
case 0x402b2c:c.instructions+=1;goto B402b2c;
case 0x402b32:goto L402b32;
case 0x402b34:c.instructions+=1;goto B402b34;
case 0x402b39:goto L402b39;
case 0x402b3b:c.instructions+=2;goto B402b3b;
case 0x402b3d:c.instructions+=1;goto B402b3d;
case 0x402b43:goto L402b43;
case 0x402b47:c.instructions+=6;goto B402b47;
case 0x402b48:c.instructions+=5;goto B402b48;
case 0x402b4c:c.instructions+=4;goto B402b4c;
case 0x402b4d:c.instructions+=3;goto B402b4d;
case 0x402b51:c.instructions+=2;goto B402b51;
case 0x402b55:c.instructions+=1;goto B402b55;
case 0x402b5a:goto L402b5a;
case 0x402b5e:c.instructions+=2;goto B402b5e;
case 0x402b60:c.instructions+=1;goto B402b60;
case 0x402b62:goto L402b62;
case 0x402b66:goto L402b66;
case 0x402b6a:c.instructions+=3;goto B402b6a;
case 0x402b6c:c.instructions+=2;goto B402b6c;
case 0x402b6d:c.instructions+=1;goto B402b6d;
case 0x402b73:goto L402b73;
case 0x402b75:c.instructions+=1;goto B402b75;
case 0x402b7b:goto L402b7b;
case 0x402b7c:c.instructions+=2;goto B402b7c;
case 0x402b7e:c.instructions+=1;goto B402b7e;
case 0x402b83:goto L402b83;
case 0x402b85:c.instructions+=2;goto B402b85;
case 0x402b87:c.instructions+=1;goto B402b87;
case 0x402b8d:goto L402b8d;
case 0x402b91:c.instructions+=1;goto B402b91;
case 0x402b93:goto L402b93;
case 0x402b97:c.instructions+=2;goto B402b97;
case 0x402b9e:c.instructions+=1;goto B402b9e;
case 0x402ba3:goto L402ba3;
case 0x402ba5:c.instructions+=1;goto B402ba5;
case 0x402bab:goto L402bab;
case 0x402bad:c.instructions+=1;goto B402bad;
case 0x402bb3:goto L402bb3;
case 0x402bb7:c.instructions+=2;goto B402bb7;
case 0x402bbe:c.instructions+=1;goto B402bbe;
case 0x402bc3:goto L402bc3;
case 0x402bc5:c.instructions+=1;goto B402bc5;
case 0x402bc7:goto L402bc7;
case 0x402bcb:c.instructions+=2;goto B402bcb;
case 0x402bd2:c.instructions+=1;goto B402bd2;
case 0x402bd7:goto L402bd7;
case 0x402bd9:c.instructions+=1;goto B402bd9;
case 0x402bdf:goto L402bdf;
case 0x402be3:c.instructions+=4;goto B402be3;
case 0x402be7:c.instructions+=3;goto B402be7;
case 0x402bee:c.instructions+=2;goto B402bee;
case 0x402bf5:c.instructions+=1;goto B402bf5;
case 0x402bfa:goto L402bfa;
case 0x402bfc:c.instructions+=2;goto B402bfc;
case 0x402bfe:c.instructions+=1;goto B402bfe;
case 0x402c03:goto L402c03;
case 0x402c05:c.instructions+=1;goto B402c05;
case 0x402c07:goto L402c07;
case 0x402c0b:c.instructions+=3;goto B402c0b;
case 0x402c0c:c.instructions+=2;goto B402c0c;
case 0x402c0e:c.instructions+=1;goto B402c0e;
case 0x402c13:goto L402c13;
case 0x402c17:c.instructions+=3;goto B402c17;
case 0x402c18:c.instructions+=2;goto B402c18;
case 0x402c1a:c.instructions+=1;goto B402c1a;
case 0x402c1f:goto L402c1f;
case 0x402c23:c.instructions+=4;goto B402c23;
case 0x402c29:c.instructions+=3;goto B402c29;
case 0x402c2b:c.instructions+=2;goto B402c2b;
case 0x402c2e:c.instructions+=1;goto B402c2e;
case 0x402c30:goto L402c30;
case 0x402c36:c.instructions+=3;goto B402c36;
case 0x402c38:c.instructions+=2;goto B402c38;
case 0x402c3b:c.instructions+=1;goto B402c3b;
case 0x402c3d:goto L402c3d;
case 0x402c41:c.instructions+=3;goto B402c41;
case 0x402c43:c.instructions+=2;goto B402c43;
case 0x402c46:c.instructions+=1;goto B402c46;
case 0x402c48:goto L402c48;
case 0x402c4a:goto L402c4a;
case 0x402c4e:c.instructions+=6;goto B402c4e;
case 0x402c52:c.instructions+=5;goto B402c52;
case 0x402c56:c.instructions+=4;goto B402c56;
case 0x402c57:c.instructions+=3;goto B402c57;
case 0x402c59:c.instructions+=2;goto B402c59;
case 0x402c5d:c.instructions+=1;goto B402c5d;
case 0x402c63:goto L402c63;
case 0x402c65:c.instructions+=2;goto B402c65;
case 0x402c66:c.instructions+=1;goto B402c66;
case 0x402c68:goto L402c68;
case 0x402c6c:c.instructions+=6;goto B402c6c;
case 0x402c72:c.instructions+=5;goto B402c72;
case 0x402c73:c.instructions+=4;goto B402c73;
case 0x402c74:c.instructions+=3;goto B402c74;
case 0x402c78:c.instructions+=2;goto B402c78;
case 0x402c79:c.instructions+=1;goto B402c79;
case 0x402c7e:goto L402c7e;
case 0x402c7f:c.instructions+=5;goto B402c7f;
case 0x402c81:c.instructions+=4;goto B402c81;
case 0x402c82:c.instructions+=3;goto B402c82;
case 0x402c83:c.instructions+=2;goto B402c83;
case 0x402c86:c.instructions+=1;goto B402c86;
case 0x402c87:goto L402c87;
case 0x402c8c:goto L402c8c;
case 0x402c8e:c.instructions+=1;goto B402c8e;
case 0x402c90:goto L402c90;
case 0x402c94:c.instructions+=7;goto B402c94;
case 0x402c95:c.instructions+=6;goto B402c95;
case 0x402c99:c.instructions+=5;goto B402c99;
case 0x402c9a:c.instructions+=4;goto B402c9a;
case 0x402c9c:c.instructions+=3;goto B402c9c;
case 0x402ca0:c.instructions+=2;goto B402ca0;
case 0x402ca4:c.instructions+=1;goto B402ca4;
case 0x402ca9:goto L402ca9;
case 0x402cab:goto L402cab;
case 0x402cad:goto L402cad;
case 0x402caf:goto L402caf;
case 0x402cb1:c.instructions+=1;goto B402cb1;
case 0x402cc0:goto L402cc0;
case 0x402cc1:c.instructions+=17;goto B402cc1;
case 0x402cc3:c.instructions+=16;goto B402cc3;
case 0x402cc6:c.instructions+=15;goto B402cc6;
case 0x402cc9:c.instructions+=14;goto B402cc9;
case 0x402ccc:c.instructions+=13;goto B402ccc;
case 0x402ccf:c.instructions+=12;goto B402ccf;
case 0x402cd0:c.instructions+=11;goto B402cd0;
case 0x402cd1:c.instructions+=10;goto B402cd1;
case 0x402cd4:c.instructions+=9;goto B402cd4;
case 0x402cd5:c.instructions+=8;goto B402cd5;
case 0x402cdb:c.instructions+=7;goto B402cdb;
case 0x402cdf:c.instructions+=6;goto B402cdf;
case 0x402ce0:c.instructions+=5;goto B402ce0;
case 0x402ce4:c.instructions+=4;goto B402ce4;
case 0x402cea:c.instructions+=3;goto B402cea;
case 0x402ceb:c.instructions+=2;goto B402ceb;
case 0x402ced:c.instructions+=1;goto B402ced;
case 0x402cf2:goto L402cf2;
case 0x402cf6:c.instructions+=14;goto B402cf6;
case 0x402cfa:c.instructions+=13;goto B402cfa;
case 0x402cfd:c.instructions+=12;goto B402cfd;
case 0x402d01:c.instructions+=11;goto B402d01;
case 0x402d02:c.instructions+=10;goto B402d02;
case 0x402d08:c.instructions+=9;goto B402d08;
case 0x402d0c:c.instructions+=8;goto B402d0c;
case 0x402d0d:c.instructions+=7;goto B402d0d;
case 0x402d11:c.instructions+=6;goto B402d11;
case 0x402d13:c.instructions+=5;goto B402d13;
case 0x402d17:c.instructions+=4;goto B402d17;
case 0x402d1b:c.instructions+=3;goto B402d1b;
case 0x402d21:c.instructions+=2;goto B402d21;
case 0x402d25:c.instructions+=1;goto B402d25;
case 0x402d2a:goto L402d2a;
case 0x402d2e:c.instructions+=14;goto B402d2e;
case 0x402d31:c.instructions+=13;goto B402d31;
case 0x402d35:c.instructions+=12;goto B402d35;
case 0x402d38:c.instructions+=11;goto B402d38;
case 0x402d3a:c.instructions+=10;goto B402d3a;
case 0x402d41:c.instructions+=9;goto B402d41;
case 0x402d47:c.instructions+=8;goto B402d47;
case 0x402d48:c.instructions+=7;goto B402d48;
case 0x402d49:c.instructions+=6;goto B402d49;
case 0x402d4d:c.instructions+=5;goto B402d4d;
case 0x402d51:c.instructions+=4;goto B402d51;
case 0x402d55:c.instructions+=3;goto B402d55;
case 0x402d5b:c.instructions+=2;goto B402d5b;
case 0x402d5f:c.instructions+=1;goto B402d5f;
case 0x402d64:goto L402d64;
case 0x402d66:c.instructions+=2;goto B402d66;
case 0x402d67:c.instructions+=1;goto B402d67;
case 0x402d6c:goto L402d6c;
case 0x402d6e:c.instructions+=10;goto B402d6e;
case 0x402d71:c.instructions+=9;goto B402d71;
case 0x402d73:c.instructions+=8;goto B402d73;
case 0x402d76:c.instructions+=7;goto B402d76;
case 0x402d77:c.instructions+=6;goto B402d77;
case 0x402d7b:c.instructions+=5;goto B402d7b;
case 0x402d7f:c.instructions+=4;goto B402d7f;
case 0x402d80:c.instructions+=3;goto B402d80;
case 0x402d83:c.instructions+=2;goto B402d83;
case 0x402d85:c.instructions+=1;goto B402d85;
case 0x402d8a:goto L402d8a;
case 0x402d90:c.instructions+=5;goto B402d90;
case 0x402d94:c.instructions+=4;goto B402d94;
case 0x402d9a:c.instructions+=3;goto B402d9a;
case 0x402d9c:c.instructions+=2;goto B402d9c;
case 0x402d9f:c.instructions+=1;goto B402d9f;
case 0x402da1:goto L402da1;
case 0x402da5:c.instructions+=12;goto B402da5;
case 0x402da7:c.instructions+=11;goto B402da7;
case 0x402dad:c.instructions+=10;goto B402dad;
case 0x402db1:c.instructions+=9;goto B402db1;
case 0x402db5:c.instructions+=8;goto B402db5;
case 0x402db9:c.instructions+=7;goto B402db9;
case 0x402dbd:c.instructions+=6;goto B402dbd;
case 0x402dbf:c.instructions+=5;goto B402dbf;
case 0x402dc3:c.instructions+=4;goto B402dc3;
case 0x402dc5:c.instructions+=3;goto B402dc5;
case 0x402dc7:c.instructions+=2;goto B402dc7;
case 0x402dca:c.instructions+=1;goto B402dca;
case 0x402dcc:goto L402dcc;
case 0x402dce:c.instructions+=7;goto B402dce;
case 0x402dd2:c.instructions+=6;goto B402dd2;
case 0x402dd6:c.instructions+=5;goto B402dd6;
case 0x402dda:c.instructions+=4;goto B402dda;
case 0x402de0:c.instructions+=3;goto B402de0;
case 0x402de2:c.instructions+=2;goto B402de2;
case 0x402de5:c.instructions+=1;goto B402de5;
case 0x402de7:goto L402de7;
case 0x402de9:c.instructions+=1;goto B402de9;
case 0x402def:goto L402def;
case 0x402df2:c.instructions+=2;goto B402df2;
case 0x402df4:c.instructions+=1;goto B402df4;
case 0x402df6:goto L402df6;
case 0x402dfc:c.instructions+=4;goto B402dfc;
case 0x402e02:c.instructions+=3;goto B402e02;
case 0x402e04:c.instructions+=2;goto B402e04;
case 0x402e07:c.instructions+=1;goto B402e07;
case 0x402e0d:goto L402e0d;
case 0x402e10:c.instructions+=47;goto B402e10;
case 0x402e13:c.instructions+=46;goto B402e13;
case 0x402e16:c.instructions+=45;goto B402e16;
case 0x402e1a:c.instructions+=44;goto B402e1a;
case 0x402e1c:c.instructions+=43;goto B402e1c;
case 0x402e20:c.instructions+=42;goto B402e20;
case 0x402e23:c.instructions+=41;goto B402e23;
case 0x402e27:c.instructions+=40;goto B402e27;
case 0x402e2b:c.instructions+=39;goto B402e2b;
case 0x402e2f:c.instructions+=38;goto B402e2f;
case 0x402e33:c.instructions+=37;goto B402e33;
case 0x402e37:c.instructions+=36;goto B402e37;
case 0x402e3b:c.instructions+=35;goto B402e3b;
case 0x402e3f:c.instructions+=34;goto B402e3f;
case 0x402e41:c.instructions+=33;goto B402e41;
case 0x402e43:c.instructions+=32;goto B402e43;
case 0x402e47:c.instructions+=31;goto B402e47;
case 0x402e49:c.instructions+=30;goto B402e49;
case 0x402e4d:c.instructions+=29;goto B402e4d;
case 0x402e51:c.instructions+=28;goto B402e51;
case 0x402e55:c.instructions+=27;goto B402e55;
case 0x402e59:c.instructions+=26;goto B402e59;
case 0x402e5b:c.instructions+=25;goto B402e5b;
case 0x402e5d:c.instructions+=24;goto B402e5d;
case 0x402e5f:c.instructions+=23;goto B402e5f;
case 0x402e63:c.instructions+=22;goto B402e63;
case 0x402e65:c.instructions+=21;goto B402e65;
case 0x402e69:c.instructions+=20;goto B402e69;
case 0x402e6b:c.instructions+=19;goto B402e6b;
case 0x402e6d:c.instructions+=18;goto B402e6d;
case 0x402e6f:c.instructions+=17;goto B402e6f;
case 0x402e71:c.instructions+=16;goto B402e71;
case 0x402e73:c.instructions+=15;goto B402e73;
case 0x402e75:c.instructions+=14;goto B402e75;
case 0x402e77:c.instructions+=13;goto B402e77;
case 0x402e7b:c.instructions+=12;goto B402e7b;
case 0x402e7f:c.instructions+=11;goto B402e7f;
case 0x402e81:c.instructions+=10;goto B402e81;
case 0x402e83:c.instructions+=9;goto B402e83;
case 0x402e87:c.instructions+=8;goto B402e87;
case 0x402e89:c.instructions+=7;goto B402e89;
case 0x402e8b:c.instructions+=6;goto B402e8b;
case 0x402e91:c.instructions+=5;goto B402e91;
case 0x402e93:c.instructions+=4;goto B402e93;
case 0x402e95:c.instructions+=3;goto B402e95;
case 0x402e98:c.instructions+=2;goto B402e98;
case 0x402e9a:c.instructions+=1;goto B402e9a;
case 0x402e9c:goto L402e9c;
case 0x402ea0:c.instructions+=4;goto B402ea0;
case 0x402ea6:c.instructions+=3;goto B402ea6;
case 0x402ea8:c.instructions+=2;goto B402ea8;
case 0x402eab:c.instructions+=1;goto B402eab;
case 0x402ead:goto L402ead;
case 0x402eb1:c.instructions+=8;goto B402eb1;
case 0x402eb4:c.instructions+=7;goto B402eb4;
case 0x402eb6:c.instructions+=6;goto B402eb6;
case 0x402eb7:c.instructions+=5;goto B402eb7;
case 0x402eb8:c.instructions+=4;goto B402eb8;
case 0x402eb9:c.instructions+=3;goto B402eb9;
case 0x402ebb:c.instructions+=2;goto B402ebb;
case 0x402ebc:c.instructions+=1;goto B402ebc;
case 0x402ebd:goto L402ebd;
case 0x402ebe:c.instructions+=6;goto B402ebe;
case 0x402ec0:c.instructions+=5;goto B402ec0;
case 0x402ec1:c.instructions+=4;goto B402ec1;
case 0x402ec2:c.instructions+=3;goto B402ec2;
case 0x402ec4:c.instructions+=2;goto B402ec4;
case 0x402ec5:c.instructions+=1;goto B402ec5;
case 0x402ed0:goto L402ed0;
case 0x402ed3:c.instructions+=23;goto B402ed3;
case 0x402ed7:c.instructions+=22;goto B402ed7;
case 0x402edb:c.instructions+=21;goto B402edb;
case 0x402ee1:c.instructions+=20;goto B402ee1;
case 0x402ee8:c.instructions+=19;goto B402ee8;
case 0x402eeb:c.instructions+=18;goto B402eeb;
case 0x402eee:c.instructions+=17;goto B402eee;
case 0x402eef:c.instructions+=16;goto B402eef;
case 0x402ef1:c.instructions+=15;goto B402ef1;
case 0x402ef5:c.instructions+=14;goto B402ef5;
case 0x402ef6:c.instructions+=13;goto B402ef6;
case 0x402ef9:c.instructions+=12;goto B402ef9;
case 0x402efa:c.instructions+=11;goto B402efa;
case 0x402efe:c.instructions+=10;goto B402efe;
case 0x402f01:c.instructions+=9;goto B402f01;
case 0x402f04:c.instructions+=8;goto B402f04;
case 0x402f07:c.instructions+=7;goto B402f07;
case 0x402f09:c.instructions+=6;goto B402f09;
case 0x402f0d:c.instructions+=5;goto B402f0d;
case 0x402f11:c.instructions+=4;goto B402f11;
case 0x402f19:c.instructions+=3;goto B402f19;
case 0x402f21:c.instructions+=2;goto B402f21;
case 0x402f29:c.instructions+=1;goto B402f29;
case 0x402f2f:goto L402f2f;
case 0x402f32:c.instructions+=10;goto B402f32;
case 0x402f35:c.instructions+=9;goto B402f35;
case 0x402f39:c.instructions+=8;goto B402f39;
case 0x402f3a:c.instructions+=7;goto B402f3a;
case 0x402f40:c.instructions+=6;goto B402f40;
case 0x402f42:c.instructions+=5;goto B402f42;
case 0x402f45:c.instructions+=4;goto B402f45;
case 0x402f49:c.instructions+=3;goto B402f49;
case 0x402f4b:c.instructions+=2;goto B402f4b;
case 0x402f4e:c.instructions+=1;goto B402f4e;
case 0x402f54:goto L402f54;
case 0x402f58:c.instructions+=3;goto B402f58;
case 0x402f59:c.instructions+=2;goto B402f59;
case 0x402f5b:c.instructions+=1;goto B402f5b;
case 0x402f60:goto L402f60;
case 0x402f64:c.instructions+=8;goto B402f64;
case 0x402f66:c.instructions+=7;goto B402f66;
case 0x402f69:c.instructions+=6;goto B402f69;
case 0x402f6f:c.instructions+=5;goto B402f6f;
case 0x402f73:c.instructions+=4;goto B402f73;
case 0x402f75:c.instructions+=3;goto B402f75;
case 0x402f77:c.instructions+=2;goto B402f77;
case 0x402f7a:c.instructions+=1;goto B402f7a;
case 0x402f80:goto L402f80;
case 0x402f83:c.instructions+=7;goto B402f83;
case 0x402f85:c.instructions+=6;goto B402f85;
case 0x402f89:c.instructions+=5;goto B402f89;
case 0x402f8d:c.instructions+=4;goto B402f8d;
case 0x402f93:c.instructions+=3;goto B402f93;
case 0x402f95:c.instructions+=2;goto B402f95;
case 0x402f98:c.instructions+=1;goto B402f98;
case 0x402f9a:goto L402f9a;
case 0x402f9e:c.instructions+=1;goto B402f9e;
case 0x402fa0:goto L402fa0;
case 0x402fa2:c.instructions+=1;goto B402fa2;
case 0x402faa:goto L402faa;
case 0x402fad:c.instructions+=4;goto B402fad;
case 0x402fb3:c.instructions+=3;goto B402fb3;
case 0x402fb5:c.instructions+=2;goto B402fb5;
case 0x402fb8:c.instructions+=1;goto B402fb8;
case 0x402fba:goto L402fba;
case 0x402fbc:c.instructions+=3;goto B402fbc;
case 0x402fc0:c.instructions+=2;goto B402fc0;
case 0x402fc4:c.instructions+=1;goto B402fc4;
case 0x402fc6:goto L402fc6;
case 0x402fc8:c.instructions+=1;goto B402fc8;
case 0x402fd0:goto L402fd0;
case 0x402fd4:c.instructions+=10;goto B402fd4;
case 0x402fd8:c.instructions+=9;goto B402fd8;
case 0x402fd9:c.instructions+=8;goto B402fd9;
case 0x402fe0:c.instructions+=7;goto B402fe0;
case 0x402fe4:c.instructions+=6;goto B402fe4;
case 0x402fe5:c.instructions+=5;goto B402fe5;
case 0x402fe6:c.instructions+=4;goto B402fe6;
case 0x402fe7:c.instructions+=3;goto B402fe7;
case 0x402fef:c.instructions+=2;goto B402fef;
case 0x402ff7:c.instructions+=1;goto B402ff7;
case 0x402ffc:goto L402ffc;
case 0x402fff:c.instructions+=1;goto B402fff;
default:missing_instruction(c.pc);}
B402000:L402000:{c.instructions+=4;NFSU2_TR(0x402000);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B402001:{NFSU2_TR(0x402001);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B402004:{NFSU2_TR(0x402004);
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
B402006:{NFSU2_TR(0x402006);
if(r1(R+518)){{goto L402027;}}
}
B402008:L402008:{c.instructions+=2;NFSU2_TR(0x402008);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0x7fffffffull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x7fffffffull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0x7fffffffull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B40200d:{NFSU2_TR(0x40200d);
if(r1(R+518)){{goto L402027;}}
}
B40200f:L40200f:{c.instructions+=7;NFSU2_TR(0x40200f);
__builtin_memmove((R+0),gp(0x86518c),4);
}
B402014:{NFSU2_TR(0x402014);
u8 U[14];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+512,u8((r4(R+0))<(r4(U+4))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+4)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))-u32(r4(U+4))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B402017:{NFSU2_TR(0x402017);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+16)),r4(U+0));
}
B40201b:{NFSU2_TR(0x40201b);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B40201f:{NFSU2_TR(0x40201f);
{u32 ea_=u32(u32(7881320u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B402025:{NFSU2_TR(0x402025);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B402026:{NFSU2_TR(0x402026);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B402027:L402027:{c.instructions+=3;NFSU2_TR(0x402027);
{u32 ea_=u32(u32(7881376u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B40202d:{NFSU2_TR(0x40202d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B40202e:{NFSU2_TR(0x40202e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B402030:L402030:{c.instructions+=3;NFSU2_TR(0x402030);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B402034:{NFSU2_TR(0x402034);
u8 U[22];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x24ull))));
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
B402037:{NFSU2_TR(0x402037);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L402043;}}
}
B402039:L402039:{c.instructions+=2;NFSU2_TR(0x402039);
u8 U[16];
w4(U+0,u32(u32(u32(0xbccull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B402040:{NFSU2_TR(0x402040);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B402043:L402043:{c.instructions+=2;NFSU2_TR(0x402043);
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
B402045:{NFSU2_TR(0x402045);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B402050:L402050:{c.instructions+=6;NFSU2_TR(0x402050);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B402054:{NFSU2_TR(0x402054);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B402056:{NFSU2_TR(0x402056);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B402058:{NFSU2_TR(0x402058);
u8 U[4];
w4(U+0,u32(0xcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40205a:{NFSU2_TR(0x40205a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40205b:{NFSU2_TR(0x40205b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x402060ull));
TAIL_STATIC(0x571640u,571);
}
B402060:L402060:{c.instructions+=1;NFSU2_TR(0x402060);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B402070:L402070:{c.instructions+=5;NFSU2_TR(0x402070);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B402071:{NFSU2_TR(0x402071);
__builtin_memmove((R+24),(R+4),4);
}
B402073:{NFSU2_TR(0x402073);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6fcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B402079:{NFSU2_TR(0x402079);
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
B40207b:{NFSU2_TR(0x40207b);
if(r1(R+518)){{goto L4020a0;}}
}
B40207d:L40207d:{c.instructions+=4;NFSU2_TR(0x40207d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B40207f:{NFSU2_TR(0x40207f);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((R+8),(U+0),4);
}
B402082:{NFSU2_TR(0x402082);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B402083:{NFSU2_TR(0x402083);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x402086ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B402086:L402086:{c.instructions+=3;NFSU2_TR(0x402086);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6fcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B40208c:{NFSU2_TR(0x40208c);
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
B40208e:{NFSU2_TR(0x40208e);
if(r1(R+518)){{goto L402096;}}
}
B402090:L402090:{c.instructions+=3;NFSU2_TR(0x402090);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B402092:{NFSU2_TR(0x402092);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B402094:{NFSU2_TR(0x402094);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x402096ull));
{u32 t_=u32(r4(U+4));TAIL_DYNAMIC(t_);}
}
B402096:L402096:{c.instructions+=1;NFSU2_TR(0x402096);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6fcull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4020a0:L4020a0:{c.instructions+=3;NFSU2_TR(0x4020a0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6f8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4020a6:{NFSU2_TR(0x4020a6);
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
B4020a8:{NFSU2_TR(0x4020a8);
if(r1(R+518)){{goto L4020cd;}}
}
B4020aa:L4020aa:{c.instructions+=4;NFSU2_TR(0x4020aa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B4020ac:{NFSU2_TR(0x4020ac);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((R+0),(U+0),4);
}
B4020af:{NFSU2_TR(0x4020af);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4020b0:{NFSU2_TR(0x4020b0);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4020b3ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4020b3:L4020b3:{c.instructions+=3;NFSU2_TR(0x4020b3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6f8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4020b9:{NFSU2_TR(0x4020b9);
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
B4020bb:{NFSU2_TR(0x4020bb);
if(r1(R+518)){{goto L4020c3;}}
}
B4020bd:L4020bd:{c.instructions+=3;NFSU2_TR(0x4020bd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B4020bf:{NFSU2_TR(0x4020bf);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4020c1:{NFSU2_TR(0x4020c1);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4020c3ull));
{u32 t_=u32(r4(U+4));TAIL_DYNAMIC(t_);}
}
B4020c3:L4020c3:{c.instructions+=1;NFSU2_TR(0x4020c3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6f8ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4020cd:L4020cd:{c.instructions+=2;NFSU2_TR(0x4020cd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4020ce:{NFSU2_TR(0x4020ce);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4020d0:L4020d0:{c.instructions+=5;NFSU2_TR(0x4020d0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4020d1:{NFSU2_TR(0x4020d1);
__builtin_memmove((R+24),(R+4),4);
}
B4020d3:{NFSU2_TR(0x4020d3);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x77dull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B4020d9:{NFSU2_TR(0x4020d9);
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
B4020db:{NFSU2_TR(0x4020db);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L402103;}}
}
B4020dd:L4020dd:{c.instructions+=3;NFSU2_TR(0x4020dd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4020e0:{NFSU2_TR(0x4020e0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4020e3:{NFSU2_TR(0x4020e3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4020e8ull));
TAIL_STATIC(0x5930f0u,593);
}
B4020e8:L4020e8:{c.instructions+=3;NFSU2_TR(0x4020e8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4020eb:{NFSU2_TR(0x4020eb);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4020ed:{NFSU2_TR(0x4020ed);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4020f2ull));
TAIL_STATIC(0x5f46a0u,5f4);
}
B4020f2:L4020f2:{c.instructions+=3;NFSU2_TR(0x4020f2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4020f5:{NFSU2_TR(0x4020f5);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4020f7:{NFSU2_TR(0x4020f7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4020fcull));
TAIL_STATIC(0x5ed5c0u,5ed);
}
B4020fc:L4020fc:{c.instructions+=1;NFSU2_TR(0x4020fc);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x77dull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B402103:L402103:{c.instructions+=2;NFSU2_TR(0x402103);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B402104:{NFSU2_TR(0x402104);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B402110:L402110:{c.instructions+=5;NFSU2_TR(0x402110);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B402111:{NFSU2_TR(0x402111);
__builtin_memmove((R+28),(R+4),4);
}
B402113:{NFSU2_TR(0x402113);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x77dull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B402119:{NFSU2_TR(0x402119);
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
B40211b:{NFSU2_TR(0x40211b);
if(r1(R+518)){{goto L402161;}}
}
B40211d:L40211d:{c.instructions+=6;NFSU2_TR(0x40211d);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B402120:{NFSU2_TR(0x402120);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B402121:{NFSU2_TR(0x402121);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B402124:{NFSU2_TR(0x402124);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B402126:{NFSU2_TR(0x402126);
__builtin_memmove((R+4),(R+24),4);
}
B402128:{NFSU2_TR(0x402128);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x40212dull));
TAIL_STATIC(0x593100u,593);
}
B40212d:L40212d:{c.instructions+=4;NFSU2_TR(0x40212d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B40212f:{NFSU2_TR(0x40212f);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B402131:{NFSU2_TR(0x402131);
__builtin_memmove((R+4),(R+24),4);
}
B402133:{NFSU2_TR(0x402133);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x402136ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B402136:L402136:{c.instructions+=3;NFSU2_TR(0x402136);
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
B402138:{NFSU2_TR(0x402138);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B402139:{NFSU2_TR(0x402139);
if(r1(R+518)){{goto L40215a;}}
}
B40213b:L40213b:{c.instructions+=3;NFSU2_TR(0x40213b);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B40213e:{NFSU2_TR(0x40213e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40213f:{NFSU2_TR(0x40213f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x402144ull));
TAIL_STATIC(0x5f4400u,5f4);
}
B402144:L402144:{c.instructions+=4;NFSU2_TR(0x402144);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B402147:{NFSU2_TR(0x402147);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B40214a:{NFSU2_TR(0x40214a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40214b:{NFSU2_TR(0x40214b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x402150ull));
TAIL_STATIC(0x5f46a0u,5f4);
}
B402150:L402150:{c.instructions+=3;NFSU2_TR(0x402150);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B402153:{NFSU2_TR(0x402153);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B402155:{NFSU2_TR(0x402155);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x40215aull));
TAIL_STATIC(0x5ed5c0u,5ed);
}
B40215a:L40215a:{c.instructions+=1;NFSU2_TR(0x40215a);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x77dull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B402161:L402161:{c.instructions+=2;NFSU2_TR(0x402161);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B402162:{NFSU2_TR(0x402162);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B402170:L402170:{c.instructions+=3;NFSU2_TR(0x402170);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x6e0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B402176:{NFSU2_TR(0x402176);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B402178:{NFSU2_TR(0x402178);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B402180:L402180:{c.instructions+=4;NFSU2_TR(0x402180);
u8 U[8];
__builtin_memmove((U+0),gp(0x89e7a0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x44bull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B40218a:{NFSU2_TR(0x40218a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40218b:{NFSU2_TR(0x40218b);
__builtin_memmove((R+24),(R+4),4);
}
B40218d:{NFSU2_TR(0x40218d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4021a5;}}
}
B40218f:L40218f:{c.instructions+=3;NFSU2_TR(0x40218f);
__builtin_memmove((R+0),gp(0x86b320),4);
}
B402194:{NFSU2_TR(0x402194);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B402196:{NFSU2_TR(0x402196);
if(r1(R+518)){{goto L4021a5;}}
}
B402198:L402198:{c.instructions+=2;NFSU2_TR(0x402198);
u8 U[8];
__builtin_memmove((U+0),gp(0x86b328),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B40219f:{NFSU2_TR(0x40219f);
if(r1(R+518)){{goto L4022ba;}}
}
B4021a5:L4021a5:{c.instructions+=3;NFSU2_TR(0x4021a5);
__builtin_memmove((R+0),gp(0x89e7d8),1);
}
B4021aa:{NFSU2_TR(0x4021aa);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4021ac:{NFSU2_TR(0x4021ac);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4022ba;}}
}
B4021b2:L4021b2:{c.instructions+=3;NFSU2_TR(0x4021b2);
__builtin_memmove((R+0),gp(0x890108),4);
}
B4021b7:{NFSU2_TR(0x4021b7);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4021b9:{NFSU2_TR(0x4021b9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4022ba;}}
}
B4021bf:L4021bf:{c.instructions+=3;NFSU2_TR(0x4021bf);
__builtin_memmove((R+0),gp(0x89e7d9),1);
}
B4021c4:{NFSU2_TR(0x4021c4);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4021c6:{NFSU2_TR(0x4021c6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4022ba;}}
}
B4021cc:L4021cc:{c.instructions+=3;NFSU2_TR(0x4021cc);
__builtin_memmove((R+0),gp(0x890104),4);
}
B4021d1:{NFSU2_TR(0x4021d1);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4021d3:{NFSU2_TR(0x4021d3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4022ba;}}
}
B4021d9:L4021d9:{c.instructions+=3;NFSU2_TR(0x4021d9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4021dc:{NFSU2_TR(0x4021dc);
u8 U[7];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(R+523,sborrow<u8>(r1(U+5),u8(0x3ull)));
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x3ull))));
w1(R+519,u8(s8(r1(U+6))<s8(u8(0x0ull))));
}
B4021e0:{NFSU2_TR(0x4021e0);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L4022ba;}}
}
B4021e6:L4021e6:{c.instructions+=2;NFSU2_TR(0x4021e6);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x730ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4021ec:{NFSU2_TR(0x4021ec);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4021f1ull));
TAIL_STATIC(0x401820u,401);
}
B4021f1:L4021f1:{c.instructions+=2;NFSU2_TR(0x4021f1);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4021f3:{NFSU2_TR(0x4021f3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4022ba;}}
}
B4021f9:L4021f9:{c.instructions+=2;NFSU2_TR(0x4021f9);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x734ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4021ff:{NFSU2_TR(0x4021ff);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x402204ull));
TAIL_STATIC(0x401820u,401);
}
B402204:L402204:{c.instructions+=2;NFSU2_TR(0x402204);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B402206:{NFSU2_TR(0x402206);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4022ba;}}
}
B40220c:L40220c:{c.instructions+=6;NFSU2_TR(0x40220c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B40220f:{NFSU2_TR(0x40220f);
{u32 ea_=u32(r4(R+4)+u32(1068u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B402215:{NFSU2_TR(0x402215);
{u32 ea_=u32(u32(7877892u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B40221b:{NFSU2_TR(0x40221b);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B40221d:{NFSU2_TR(0x40221d);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B402220:{NFSU2_TR(0x402220);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L4022ba;}}
}
B402226:L402226:{c.instructions+=2;NFSU2_TR(0x402226);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x424ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(U+8),u32(0x1ull)));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B40222d:{NFSU2_TR(0x40222d);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L4022ba;}}
}
B402233:L402233:{c.instructions+=3;NFSU2_TR(0x402233);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6f8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B402239:{NFSU2_TR(0x402239);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B40223b:{NFSU2_TR(0x40223b);
if(r1(R+518)){{goto L4022ba;}}
}
B40223d:L40223d:{c.instructions+=3;NFSU2_TR(0x40223d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x204ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B402243:{NFSU2_TR(0x402243);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x8ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B402246:{NFSU2_TR(0x402246);
if(r1(R+518)){{goto L4022ba;}}
}
B402248:L402248:{c.instructions+=2;NFSU2_TR(0x402248);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x9ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B40224b:{NFSU2_TR(0x40224b);
if(r1(R+518)){{goto L4022ba;}}
}
B40224d:L40224d:{c.instructions+=2;NFSU2_TR(0x40224d);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xdull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B402250:{NFSU2_TR(0x402250);
if(r1(R+518)){{goto L4022ba;}}
}
B402252:L402252:{c.instructions+=2;NFSU2_TR(0x402252);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xaull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B402255:{NFSU2_TR(0x402255);
if(r1(R+518)){{goto L4022ba;}}
}
B402257:L402257:{c.instructions+=2;NFSU2_TR(0x402257);
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
B40225a:{NFSU2_TR(0x40225a);
if(r1(R+518)){{goto L4022ba;}}
}
B40225c:L40225c:{c.instructions+=3;NFSU2_TR(0x40225c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B40225e:{NFSU2_TR(0x40225e);
__builtin_memmove((R+4),(R+24),4);
}
B402260:{NFSU2_TR(0x402260);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x402263ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B402263:L402263:{c.instructions+=2;NFSU2_TR(0x402263);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xfffffffeull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B402266:{NFSU2_TR(0x402266);
if(r1(R+518)){{goto L4022ba;}}
}
B402268:L402268:{c.instructions+=5;NFSU2_TR(0x402268);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B40226b:{NFSU2_TR(0x40226b);
__builtin_memmove((R+4),gp(0x890080),4);
}
B402271:{NFSU2_TR(0x402271);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x60ull))));
}
B402274:{NFSU2_TR(0x402274);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B402275:{NFSU2_TR(0x402275);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x40227aull));
TAIL_STATIC(0x5f1160u,5f1);
}
B40227a:L40227a:{c.instructions+=4;NFSU2_TR(0x40227a);
{u32 ea_=u32(u32(7877900u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B402280:{NFSU2_TR(0x402280);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B402282:{NFSU2_TR(0x402282);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B402285:{NFSU2_TR(0x402285);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L4022ba;}}
}
B402287:L402287:{c.instructions+=7;NFSU2_TR(0x402287);
__builtin_memmove((R+4),gp(0x890118),4);
}
B40228d:{NFSU2_TR(0x40228d);
{u32 ea_=u32(r4(R+4)+u32(20u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B402290:{NFSU2_TR(0x402290);
{u32 ea_=u32(u32(7881320u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B402296:{NFSU2_TR(0x402296);
{u32 ea_=u32(u32(7877896u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B40229c:{NFSU2_TR(0x40229c);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B40229e:{NFSU2_TR(0x40229e);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B4022a1:{NFSU2_TR(0x4022a1);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L4022ba;}}
}
B4022a3:L4022a3:{c.instructions+=4;NFSU2_TR(0x4022a3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4022a6:{NFSU2_TR(0x4022a6);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4022a9:{NFSU2_TR(0x4022a9);
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
B4022ab:{NFSU2_TR(0x4022ab);
if(r1(R+518)){{goto L4022b6;}}
}
B4022ad:L4022ad:{c.instructions+=1;NFSU2_TR(0x4022ad);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4022b2ull));
TAIL_STATIC(0x5ee250u,5ee);
}
B4022b2:L4022b2:{c.instructions+=2;NFSU2_TR(0x4022b2);
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
B4022b4:{NFSU2_TR(0x4022b4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4022ba;}}
}
B4022b6:L4022b6:{c.instructions+=3;NFSU2_TR(0x4022b6);
w1(R+0,u8(0x1ull));
}
B4022b8:{NFSU2_TR(0x4022b8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4022b9:{NFSU2_TR(0x4022b9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4022ba:L4022ba:{c.instructions+=3;NFSU2_TR(0x4022ba);
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
B4022bc:{NFSU2_TR(0x4022bc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4022bd:{NFSU2_TR(0x4022bd);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4022c0:L4022c0:{c.instructions+=1;NFSU2_TR(0x4022c0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4022d0:L4022d0:{c.instructions+=5;NFSU2_TR(0x4022d0);
u8 U[5];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B4022d4:{NFSU2_TR(0x4022d4);
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
B4022d6:{NFSU2_TR(0x4022d6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4022d7:{NFSU2_TR(0x4022d7);
__builtin_memmove((R+24),(R+4),4);
}
B4022d9:{NFSU2_TR(0x4022d9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4022f8;}}
}
B4022db:L4022db:{c.instructions+=4;NFSU2_TR(0x4022db);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4022de:{NFSU2_TR(0x4022de);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4022e1:{NFSU2_TR(0x4022e1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B4022e3:{NFSU2_TR(0x4022e3);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4022e6ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4022e6:L4022e6:{c.instructions+=2;NFSU2_TR(0x4022e6);
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
B4022e8:{NFSU2_TR(0x4022e8);
if(r1(R+518)){{goto L402321;}}
}
B4022ea:L4022ea:{c.instructions+=3;NFSU2_TR(0x4022ea);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4022ed:{NFSU2_TR(0x4022ed);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4022ef:{NFSU2_TR(0x4022ef);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4022f4ull));
TAIL_STATIC(0x5f46a0u,5f4);
}
B4022f4:L4022f4:{c.instructions+=2;NFSU2_TR(0x4022f4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4022f5:{NFSU2_TR(0x4022f5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4022f8:L4022f8:{c.instructions+=3;NFSU2_TR(0x4022f8);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x77dull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B4022fe:{NFSU2_TR(0x4022fe);
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
B402300:{NFSU2_TR(0x402300);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L402321;}}
}
B402302:L402302:{c.instructions+=4;NFSU2_TR(0x402302);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B402305:{NFSU2_TR(0x402305);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B402308:{NFSU2_TR(0x402308);
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
B40230a:{NFSU2_TR(0x40230a);
if(r1(R+518)){{goto L402321;}}
}
B40230c:L40230c:{c.instructions+=3;NFSU2_TR(0x40230c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B40230e:{NFSU2_TR(0x40230e);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B402310:{NFSU2_TR(0x402310);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x402313ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B402313:L402313:{c.instructions+=2;NFSU2_TR(0x402313);
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
B402315:{NFSU2_TR(0x402315);
if(r1(R+518)){{goto L402321;}}
}
B402317:L402317:{c.instructions+=3;NFSU2_TR(0x402317);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B40231a:{NFSU2_TR(0x40231a);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40231c:{NFSU2_TR(0x40231c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x402321ull));
TAIL_STATIC(0x5ed5c0u,5ed);
}
B402321:L402321:{c.instructions+=2;NFSU2_TR(0x402321);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B402322:{NFSU2_TR(0x402322);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B402330:L402330:{c.instructions+=3;NFSU2_TR(0x402330);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x6fcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B402336:{NFSU2_TR(0x402336);
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
B402338:{NFSU2_TR(0x402338);
if(r1(R+518)){{goto L40233f;}}
}
B40233a:L40233a:{c.instructions+=2;NFSU2_TR(0x40233a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B40233c:{NFSU2_TR(0x40233c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
{u32 t_=u32(r4(U+4));TAIL_DYNAMIC(t_);}
}
B40233f:L40233f:{c.instructions+=2;NFSU2_TR(0x40233f);
w1(R+0,u8(0x1ull));
}
B402341:{NFSU2_TR(0x402341);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B402350:L402350:{c.instructions+=1;NFSU2_TR(0x402350);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B402360:L402360:{c.instructions+=7;NFSU2_TR(0x402360);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B402361:{NFSU2_TR(0x402361);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B402362:{NFSU2_TR(0x402362);
__builtin_memmove((R+24),(R+4),4);
}
B402364:{NFSU2_TR(0x402364);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6f4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B40236a:{NFSU2_TR(0x40236a);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
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
B40236d:{NFSU2_TR(0x40236d);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B402375:{NFSU2_TR(0x402375);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4023b5;}}
}
B402377:L402377:{c.instructions+=6;NFSU2_TR(0x402377);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B402379:{NFSU2_TR(0x402379);
u8 U[4];
w4(U+0,u32(0x16ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40237b:{NFSU2_TR(0x40237b);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B40237f:{NFSU2_TR(0x40237f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B402380:{NFSU2_TR(0x402380);
__builtin_memmove((R+4),(R+24),4);
}
B402382:{NFSU2_TR(0x402382);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xacull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x402388ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B402388:L402388:{c.instructions+=3;NFSU2_TR(0x402388);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B40238c:{NFSU2_TR(0x40238c);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B40238e:{NFSU2_TR(0x40238e);
if(r1(R+518)){{goto L4023b0;}}
}
B402390:L402390:{c.instructions+=3;NFSU2_TR(0x402390);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6f8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B402396:{NFSU2_TR(0x402396);
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
B402398:{NFSU2_TR(0x402398);
if(r1(R+518)){{goto L4023a8;}}
}
B40239a:L40239a:{c.instructions+=3;NFSU2_TR(0x40239a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x200ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4023a0:{NFSU2_TR(0x4023a0);
u8 U[22];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x200ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(R+8))<(r4(U+14))));
w1(R+523,sborrow<u32>(r4(R+8),r4(U+14)));
w4(U+18,u32(u32(r4(R+8))-u32(r4(U+14))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B4023a6:{NFSU2_TR(0x4023a6);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L4023d3;}}
}
B4023a8:L4023a8:{c.instructions+=4;NFSU2_TR(0x4023a8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B4023aa:{NFSU2_TR(0x4023aa);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4023ac:{NFSU2_TR(0x4023ac);
__builtin_memmove((R+4),(R+0),4);
}
B4023ae:{NFSU2_TR(0x4023ae);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4023b0ull));
{u32 t_=u32(r4(U+4));TAIL_DYNAMIC(t_);}
}
B4023b0:L4023b0:{c.instructions+=4;NFSU2_TR(0x4023b0);
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
B4023b2:{NFSU2_TR(0x4023b2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4023b3:{NFSU2_TR(0x4023b3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4023b4:{NFSU2_TR(0x4023b4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4023b5:L4023b5:{c.instructions+=6;NFSU2_TR(0x4023b5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B4023b7:{NFSU2_TR(0x4023b7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4023b8:{NFSU2_TR(0x4023b8);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B4023bc:{NFSU2_TR(0x4023bc);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4023bd:{NFSU2_TR(0x4023bd);
__builtin_memmove((R+4),(R+24),4);
}
B4023bf:{NFSU2_TR(0x4023bf);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xacull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4023c5ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4023c5:L4023c5:{c.instructions+=2;NFSU2_TR(0x4023c5);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4023c9:{NFSU2_TR(0x4023c9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6f4ull))));
w4(U+4,u32(0x16ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4023d3:L4023d3:{c.instructions+=3;NFSU2_TR(0x4023d3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4023d4:{NFSU2_TR(0x4023d4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4023d5:{NFSU2_TR(0x4023d5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4023e0:L4023e0:{c.instructions+=9;NFSU2_TR(0x4023e0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xcull))));
}
B4023e3:{NFSU2_TR(0x4023e3);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4023e4:{NFSU2_TR(0x4023e4);
__builtin_memmove((R+24),(R+4),4);
}
B4023e6:{NFSU2_TR(0x4023e6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4023e9:{NFSU2_TR(0x4023e9);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4023ea:{NFSU2_TR(0x4023ea);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B4023ec:{NFSU2_TR(0x4023ec);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x40cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+28),(U+4),2);
}
B4023f3:{NFSU2_TR(0x4023f3);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4023f4:{NFSU2_TR(0x4023f4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4023f9ull));
TAIL_STATIC(0x43c2b0u,43c);
}
B4023f9:L4023f9:{c.instructions+=3;NFSU2_TR(0x4023f9);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4023fd:{NFSU2_TR(0x4023fd);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4023fe:{NFSU2_TR(0x4023fe);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x402403ull));
TAIL_STATIC(0x43c370u,43c);
}
B402403:L402403:{c.instructions+=18;NFSU2_TR(0x402403);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B402406:{NFSU2_TR(0x402406);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B402409:{NFSU2_TR(0x402409);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B40240d:{NFSU2_TR(0x40240d);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B402411:{NFSU2_TR(0x402411);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B402414:{NFSU2_TR(0x402414);
__asm__ volatile(".byte 0xd8,0xc1":::"memory");
}
B402416:{NFSU2_TR(0x402416);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B402419:{NFSU2_TR(0x402419);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B40241d:{NFSU2_TR(0x40241d);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B402421:{NFSU2_TR(0x402421);
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
B402424:{NFSU2_TR(0x402424);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B402428:{NFSU2_TR(0x402428);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B40242a:{NFSU2_TR(0x40242a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40242b:{NFSU2_TR(0x40242b);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B40242f:{NFSU2_TR(0x40242f);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B402433:{NFSU2_TR(0x402433);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B402437:{NFSU2_TR(0x402437);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B402439:{NFSU2_TR(0x402439);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x40243cull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B40243c:L40243c:{c.instructions+=4;NFSU2_TR(0x40243c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B40243d:{NFSU2_TR(0x40243d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B40243e:{NFSU2_TR(0x40243e);
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
B402441:{NFSU2_TR(0x402441);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B402450:L402450:{c.instructions+=8;NFSU2_TR(0x402450);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B402451:{NFSU2_TR(0x402451);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B402452:{NFSU2_TR(0x402452);
__builtin_memmove((R+24),(R+4),4);
}
B402454:{NFSU2_TR(0x402454);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B402455:{NFSU2_TR(0x402455);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B402458:{NFSU2_TR(0x402458);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B40245b:{NFSU2_TR(0x40245b);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B40245e:{NFSU2_TR(0x40245e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L40247d;}}
}
B402460:L402460:{c.instructions+=4;NFSU2_TR(0x402460);
{u32 ea_=u32(u32(7877904u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B402466:{NFSU2_TR(0x402466);
{u32 ea_=u32(u32(7881316u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B40246c:{NFSU2_TR(0x40246c);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B402472:{NFSU2_TR(0x402472);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x402477ull));
TAIL_STATIC(0x75bed4u,75b);
}
B402477:L402477:{c.instructions+=1;NFSU2_TR(0x402477);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x730ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B40247d:L40247d:{c.instructions+=3;NFSU2_TR(0x40247d);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B402481:{NFSU2_TR(0x402481);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B402483:{NFSU2_TR(0x402483);
if(r1(R+518)){{goto L40248c;}}
}
B402485:L402485:{c.instructions+=3;NFSU2_TR(0x402485);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B402488:{NFSU2_TR(0x402488);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B40248a:{NFSU2_TR(0x40248a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L402494;}}
}
B40248c:L40248c:{c.instructions+=3;NFSU2_TR(0x40248c);
u8 U[5];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B402490:{NFSU2_TR(0x402490);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B402492:{NFSU2_TR(0x402492);
if(r1(R+518)){{goto L4024b8;}}
}
B402494:L402494:{c.instructions+=5;NFSU2_TR(0x402494);
{u32 ea_=u32(u32(7877788u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B40249a:{NFSU2_TR(0x40249a);
w4(R+28,u32(0x1ull));
}
B40249f:{NFSU2_TR(0x40249f);
{u32 ea_=u32(u32(7881316u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4024a5:{NFSU2_TR(0x4024a5);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B4024ab:{NFSU2_TR(0x4024ab);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4024b0ull));
TAIL_STATIC(0x75bed4u,75b);
}
B4024b0:L4024b0:{c.instructions+=2;NFSU2_TR(0x4024b0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x734ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4024b6:{NFSU2_TR(0x4024b6);
{goto L4024c3;}
}
B4024b8:L4024b8:{c.instructions+=2;NFSU2_TR(0x4024b8);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4024b9:{NFSU2_TR(0x4024b9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4024beull));
TAIL_STATIC(0x5f4400u,5f4);
}
B4024be:L4024be:{c.instructions+=2;NFSU2_TR(0x4024be);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4024c1:{NFSU2_TR(0x4024c1);
__builtin_memmove((R+28),(R+0),4);
}
B4024c3:L4024c3:{c.instructions+=4;NFSU2_TR(0x4024c3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4024c6:{NFSU2_TR(0x4024c6);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x5ccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4024cc:{NFSU2_TR(0x4024cc);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4024ce:{NFSU2_TR(0x4024ce);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4024d5;}}
}
B4024d0:L4024d0:{c.instructions+=1;NFSU2_TR(0x4024d0);
w4(R+28,u32(0x4ull));
}
B4024d5:L4024d5:{c.instructions+=2;NFSU2_TR(0x4024d5);
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
B4024d7:{NFSU2_TR(0x4024d7);
if(r1(R+518)){{goto L4024df;}}
}
B4024d9:L4024d9:{c.instructions+=2;NFSU2_TR(0x4024d9);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4024da:{NFSU2_TR(0x4024da);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4024dfull));
TAIL_STATIC(0x5f46a0u,5f4);
}
B4024df:L4024df:{c.instructions+=4;NFSU2_TR(0x4024df);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4024e0:{NFSU2_TR(0x4024e0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4024e1:{NFSU2_TR(0x4024e1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4024e2:{NFSU2_TR(0x4024e2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4024f0:L4024f0:{c.instructions+=4;NFSU2_TR(0x4024f0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4024f1:{NFSU2_TR(0x4024f1);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4024f4:{NFSU2_TR(0x4024f4);
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
B4024f6:{NFSU2_TR(0x4024f6);
if(r1(R+518)){{goto L40251d;}}
}
B4024f8:L4024f8:{c.instructions+=4;NFSU2_TR(0x4024f8);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x6e0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4024fe:{NFSU2_TR(0x4024fe);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B402500:{NFSU2_TR(0x402500);
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
B402503:{NFSU2_TR(0x402503);
if(r1(R+518)){{goto L40251d;}}
}
B402505:L402505:{c.instructions+=7;NFSU2_TR(0x402505);
u8 U[13];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
w4(R+4,u32(r1(U+12)));
}
B40250a:{NFSU2_TR(0x40250a);
u8 U[45];
w4(U+37,u32(u32(u32(0x10ull))&u32(u32(0x1full))));
__builtin_memmove((U+41),(R+4),4);
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+37))));
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
w1(U+35,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(U+36,u8(u32(r1(R+512))^u32(r1(U+35))));
__builtin_memmove((U+0),(U+34),1);
w1(U+1,u8(u32(r1(U+0))*u32(r1(U+36))));
w1(U+2,u8(!(r1(U+34))));
__builtin_memmove((U+3),(U+2),1);
w1(U+4,u8(u32(r1(U+3))*u32(r1(R+523))));
w1(R+523,u8(u32(r1(U+1))|u32(r1(U+4))));
w1(U+5,u8((r4(U+37))!=(u32(0x0ull))));
w1(U+6,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(U+7,u8(!(r1(U+5))));
w1(U+8,u8(u32(r1(U+7))&u32(r1(R+519))));
w1(U+9,u8(u32(r1(U+5))&u32(r1(U+6))));
w1(R+519,u8(u32(r1(U+8))|u32(r1(U+9))));
w1(U+10,u8((r4(R+4))==(u32(0x0ull))));
w1(U+11,u8(!(r1(U+5))));
w1(U+12,u8(u32(r1(U+11))&u32(r1(R+518))));
w1(U+13,u8(u32(r1(U+5))&u32(r1(U+10))));
w1(R+518,u8(u32(r1(U+12))|u32(r1(U+13))));
w4(U+14,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+18,u8(__builtin_popcountll(u64(r4(U+14)))));
w1(U+19,u8(u32(r1(U+18))&u32(u8(0x1ull))));
w1(U+20,u8((r1(U+19))==(u8(0x0ull))));
w1(U+21,u8(!(r1(U+5))));
w1(U+22,u8(u32(r1(U+21))&u32(r1(R+514))));
w1(U+23,u8(u32(r1(U+5))&u32(r1(U+20))));
w1(R+514,u8(u32(r1(U+22))|u32(r1(U+23))));
}
B40250d:{NFSU2_TR(0x40250d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+16)),r4(U+0));
}
B402511:{NFSU2_TR(0x402511);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B402515:{NFSU2_TR(0x402515);
{u32 ea_=u32(u32(7881336u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B40251b:{NFSU2_TR(0x40251b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B40251c:{NFSU2_TR(0x40251c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B40251d:L40251d:{c.instructions+=3;NFSU2_TR(0x40251d);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B402523:{NFSU2_TR(0x402523);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B402524:{NFSU2_TR(0x402524);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B402530:L402530:{c.instructions+=5;NFSU2_TR(0x402530);
u8 U[5];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B402534:{NFSU2_TR(0x402534);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B402536:{NFSU2_TR(0x402536);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B402537:{NFSU2_TR(0x402537);
__builtin_memmove((R+24),(R+4),4);
}
B402539:{NFSU2_TR(0x402539);
if(r1(R+518)){{goto L402551;}}
}
B40253b:L40253b:{c.instructions+=3;NFSU2_TR(0x40253b);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x710ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B402541:{NFSU2_TR(0x402541);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B402543:{NFSU2_TR(0x402543);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L402551;}}
}
B402545:L402545:{c.instructions+=3;NFSU2_TR(0x402545);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B402547:{NFSU2_TR(0x402547);
w4(R+4,u32(0x88a320ull));
}
B40254c:{NFSU2_TR(0x40254c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x402551ull));
TAIL_STATIC(0x43be80u,43b);
}
B402551:L402551:{c.instructions+=2;NFSU2_TR(0x402551);
__builtin_memmove((R+4),(R+24),4);
}
B402553:{NFSU2_TR(0x402553);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x402558ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4023e0u);}goto L4023e0;}
}
B402558:L402558:{c.instructions+=7;NFSU2_TR(0x402558);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B40255b:{NFSU2_TR(0x40255b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B40255d:{NFSU2_TR(0x40255d);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40255f:{NFSU2_TR(0x40255f);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B402561:{NFSU2_TR(0x402561);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B402563:{NFSU2_TR(0x402563);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B402565:{NFSU2_TR(0x402565);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x402568ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B402568:L402568:{c.instructions+=3;NFSU2_TR(0x402568);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x710ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B40256f:{NFSU2_TR(0x40256f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B402570:{NFSU2_TR(0x402570);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B402580:L402580:{c.instructions+=3;NFSU2_TR(0x402580);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B402583:{NFSU2_TR(0x402583);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B402586:{NFSU2_TR(0x402586);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x40258bull));
TAIL_STATIC(0x610510u,610);
}
B40258b:L40258b:{c.instructions+=2;NFSU2_TR(0x40258b);
w4(R+0,u32(s32(s8(r1(R+0)))));
}
B40258e:{NFSU2_TR(0x40258e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B402590:L402590:{c.instructions+=8;NFSU2_TR(0x402590);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x8ull))));
}
B402593:{NFSU2_TR(0x402593);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B402594:{NFSU2_TR(0x402594);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B402597:{NFSU2_TR(0x402597);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B40259a:{NFSU2_TR(0x40259a);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B40259d:{NFSU2_TR(0x40259d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40259e:{NFSU2_TR(0x40259e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x434ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4025a4:{NFSU2_TR(0x4025a4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4025c8;}}
}
B4025a6:L4025a6:{c.instructions+=7;NFSU2_TR(0x4025a6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4025a9:{NFSU2_TR(0x4025a9);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4025aa:{NFSU2_TR(0x4025aa);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B4025ad:{NFSU2_TR(0x4025ad);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4025af:{NFSU2_TR(0x4025af);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4025b0:{NFSU2_TR(0x4025b0);
__builtin_memmove((R+4),(R+12),4);
}
B4025b2:{NFSU2_TR(0x4025b2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4025b7ull));
TAIL_STATIC(0x5946e0u,594);
}
B4025b7:L4025b7:{c.instructions+=5;NFSU2_TR(0x4025b7);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4025bb:{NFSU2_TR(0x4025bb);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4025bd:{NFSU2_TR(0x4025bd);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4025be:{NFSU2_TR(0x4025be);
__builtin_memmove((R+4),(R+12),4);
}
B4025c0:{NFSU2_TR(0x4025c0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4025c5ull));
TAIL_STATIC(0x594670u,594);
}
B4025c5:L4025c5:{c.instructions+=2;NFSU2_TR(0x4025c5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4025c6:{NFSU2_TR(0x4025c6);
{goto L4025e9;}
}
B4025c8:L4025c8:{c.instructions+=2;NFSU2_TR(0x4025c8);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4025cb:{NFSU2_TR(0x4025cb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L402657;}}
}
B4025d1:L4025d1:{c.instructions+=5;NFSU2_TR(0x4025d1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4025d4:{NFSU2_TR(0x4025d4);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4025d7:{NFSU2_TR(0x4025d7);
{u32 ea_=u32((r4(R+28)*4u)+r4(R+0)+u32(448u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4025de:{NFSU2_TR(0x4025de);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4025e2:{NFSU2_TR(0x4025e2);
{u32 ea_=u32((r4(R+28)*4u)+r4(R+0)+u32(412u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4025e9:L4025e9:{c.instructions+=9;NFSU2_TR(0x4025e9);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B4025ed:{NFSU2_TR(0x4025ed);
{u32 ea_=u32(u32(7877944u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4025f3:{NFSU2_TR(0x4025f3);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B4025f7:{NFSU2_TR(0x4025f7);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4025fb:{NFSU2_TR(0x4025fb);
{u32 ea_=u32(u32(8371928u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B402601:{NFSU2_TR(0x402601);
{u32 ea_=u32(u32(7881304u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B402607:{NFSU2_TR(0x402607);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B402609:{NFSU2_TR(0x402609);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B40260c:{NFSU2_TR(0x40260c);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L402616;}}
}
B40260e:L40260e:{c.instructions+=2;NFSU2_TR(0x40260e);
{u32 ea_=u32(u32(8371928u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B402614:{NFSU2_TR(0x402614);
{goto L40261c;}
}
B402616:L402616:{c.instructions+=1;NFSU2_TR(0x402616);
{u32 ea_=u32(r4(R+24)+u32(1088u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B40261c:L40261c:{c.instructions+=4;NFSU2_TR(0x40261c);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B402620:{NFSU2_TR(0x402620);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B402622:{NFSU2_TR(0x402622);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B402625:{NFSU2_TR(0x402625);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L40262b;}}
}
B402627:L402627:{c.instructions+=2;NFSU2_TR(0x402627);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B402629:{NFSU2_TR(0x402629);
{goto L40262f;}
}
B40262b:L40262b:{c.instructions+=1;NFSU2_TR(0x40262b);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B40262f:L40262f:{c.instructions+=5;NFSU2_TR(0x40262f);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B402633:{NFSU2_TR(0x402633);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B402635:{NFSU2_TR(0x402635);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B402637:{NFSU2_TR(0x402637);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B40263a:{NFSU2_TR(0x40263a);
if(r1(R+514)){{goto L402642;}}
}
B40263c:L40263c:{c.instructions+=2;NFSU2_TR(0x40263c);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B40263e:{NFSU2_TR(0x40263e);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B402642:L402642:{c.instructions+=6;NFSU2_TR(0x402642);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B402644:{NFSU2_TR(0x402644);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B402646:{NFSU2_TR(0x402646);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B402648:{NFSU2_TR(0x402648);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B40264a:{NFSU2_TR(0x40264a);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B40264d:{NFSU2_TR(0x40264d);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L402657;}}
}
B40264f:L40264f:{c.instructions+=5;NFSU2_TR(0x40264f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B402650:{NFSU2_TR(0x402650);
w1(R+0,u8(0x1ull));
}
B402652:{NFSU2_TR(0x402652);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B402653:{NFSU2_TR(0x402653);
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
B402656:{NFSU2_TR(0x402656);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B402657:L402657:{c.instructions+=5;NFSU2_TR(0x402657);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B402658:{NFSU2_TR(0x402658);
w1(R+0,u8(u32(r1(R+0))^u32(r1(R+0))));
}
B40265a:{NFSU2_TR(0x40265a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B40265b:{NFSU2_TR(0x40265b);
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
B40265e:{NFSU2_TR(0x40265e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B402660:L402660:{c.instructions+=12;NFSU2_TR(0x402660);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x8ull))));
}
B402663:{NFSU2_TR(0x402663);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B402664:{NFSU2_TR(0x402664);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B402665:{NFSU2_TR(0x402665);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B402666:{NFSU2_TR(0x402666);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B402667:{NFSU2_TR(0x402667);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B40266a:{NFSU2_TR(0x40266a);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B40266c:{NFSU2_TR(0x40266c);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x40ull))));
}
B40266f:{NFSU2_TR(0x40266f);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B402677:{NFSU2_TR(0x402677);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B40267b:{NFSU2_TR(0x40267b);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B40267d:{NFSU2_TR(0x40267d);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x374ull))));
__builtin_memmove((R+12),(U+0),4);
}
B402683:L402683:{c.instructions+=3;NFSU2_TR(0x402683);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B402684:{NFSU2_TR(0x402684);
__builtin_memmove((R+4),(R+28),4);
}
B402686:{NFSU2_TR(0x402686);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x40268bull));
TAIL_STATIC(0x592870u,592);
}
B40268b:L40268b:{c.instructions+=2;NFSU2_TR(0x40268b);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B40268d:{NFSU2_TR(0x40268d);
if(r1(R+518)){{goto L40269c;}}
}
B40268f:L40268f:{c.instructions+=5;NFSU2_TR(0x40268f);
{u32 ea_=u32(r4(R+12));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B402691:{NFSU2_TR(0x402691);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x1ull))));
}
B402692:{NFSU2_TR(0x402692);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B402694:{NFSU2_TR(0x402694);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B402698:{NFSU2_TR(0x402698);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B40269c:L40269c:{c.instructions+=4;NFSU2_TR(0x40269c);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B40269d:{NFSU2_TR(0x40269d);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x8ull))));
}
B4026a0:{NFSU2_TR(0x4026a0);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x4ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B4026a3:{NFSU2_TR(0x4026a3);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x402683u);}goto L402683;}}
}
B4026a5:L4026a5:{c.instructions+=7;NFSU2_TR(0x4026a5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4026a6:{NFSU2_TR(0x4026a6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4026a7:{NFSU2_TR(0x4026a7);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4026ab:{NFSU2_TR(0x4026ab);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+20))&u32(r4(R+20))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4026ad:{NFSU2_TR(0x4026ad);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4026ae:{NFSU2_TR(0x4026ae);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4026af:{NFSU2_TR(0x4026af);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L4026bd;}}
}
B4026b1:L4026b1:{c.instructions+=3;NFSU2_TR(0x4026b1);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B4026b5:{NFSU2_TR(0x4026b5);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd8,0x38"::"a"(ea_):"memory");}
}
B4026b9:{NFSU2_TR(0x4026b9);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4026bd:L4026bd:{c.instructions+=5;NFSU2_TR(0x4026bd);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4026c1:{NFSU2_TR(0x4026c1);
{u32 ea_=u32(u32(7877948u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B4026c7:{NFSU2_TR(0x4026c7);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4026c9:{NFSU2_TR(0x4026c9);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4026cc:{NFSU2_TR(0x4026cc);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4026d7;}}
}
B4026ce:L4026ce:{c.instructions+=3;NFSU2_TR(0x4026ce);
w4(R+0,u32(0x1ull));
}
B4026d3:{NFSU2_TR(0x4026d3);
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
B4026d6:{NFSU2_TR(0x4026d6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4026d7:L4026d7:{c.instructions+=3;NFSU2_TR(0x4026d7);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4026d9:{NFSU2_TR(0x4026d9);
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
B4026dc:{NFSU2_TR(0x4026dc);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4026e0:L4026e0:{c.instructions+=8;NFSU2_TR(0x4026e0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4026e1:{NFSU2_TR(0x4026e1);
__builtin_memmove((R+0),gp(0x86518c),4);
}
B4026e6:{NFSU2_TR(0x4026e6);
u8 U[14];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x700ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+512,u8((r4(R+0))<(r4(U+4))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+4)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))-u32(r4(U+4))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B4026ec:{NFSU2_TR(0x4026ec);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+16)),r4(U+0));
}
B4026f0:{NFSU2_TR(0x4026f0);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B4026f4:{NFSU2_TR(0x4026f4);
{u32 ea_=u32(u32(7881320u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4026fa:{NFSU2_TR(0x4026fa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4026fb:{NFSU2_TR(0x4026fb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B402700:L402700:{c.instructions+=6;NFSU2_TR(0x402700);
u8 U[4];
w4(U+0,u32(0x4022c0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B402705:{NFSU2_TR(0x402705);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B402707:{NFSU2_TR(0x402707);
u8 U[4];
w4(U+0,u32(0x30ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B402709:{NFSU2_TR(0x402709);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x8ull))));
}
B40270c:{NFSU2_TR(0x40270c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40270d:{NFSU2_TR(0x40270d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x402712ull));
TAIL_STATIC(0x75c401u,75c);
}
B402712:L402712:{c.instructions+=1;NFSU2_TR(0x402712);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B402720:L402720:{c.instructions+=8;NFSU2_TR(0x402720);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B402721:{NFSU2_TR(0x402721);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B402725:{NFSU2_TR(0x402725);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B402726:{NFSU2_TR(0x402726);
u8 U[4];
w4(U+0,u32(0x7842acull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40272b:{NFSU2_TR(0x40272b);
__builtin_memmove((R+28),(R+4),4);
}
B40272d:{NFSU2_TR(0x40272d);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40272f:{NFSU2_TR(0x40272f);
__builtin_memmove((R+4),(R+24),4);
}
B402731:{NFSU2_TR(0x402731);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x402736ull));
TAIL_STATIC(0x578ce0u,578);
}
B402736:L402736:{c.instructions+=7;NFSU2_TR(0x402736);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B402738:{NFSU2_TR(0x402738);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40273a:{NFSU2_TR(0x40273a);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40273c:{NFSU2_TR(0x40273c);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B40273f:{NFSU2_TR(0x40273f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B402740:{NFSU2_TR(0x402740);
__builtin_memmove((R+4),(R+24),4);
}
B402742:{NFSU2_TR(0x402742);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x402747ull));
TAIL_STATIC(0x571640u,571);
}
B402747:L402747:{c.instructions+=4;NFSU2_TR(0x402747);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((R+4),(U+0),4);
}
B40274a:{NFSU2_TR(0x40274a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40274b:{NFSU2_TR(0x40274b);
__builtin_memmove((R+4),(R+24),4);
}
B40274d:{NFSU2_TR(0x40274d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x402752ull));
TAIL_STATIC(0x571770u,571);
}
B402752:L402752:{c.instructions+=4;NFSU2_TR(0x402752);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((R+8),(U+0),4);
}
B402755:{NFSU2_TR(0x402755);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B402756:{NFSU2_TR(0x402756);
__builtin_memmove((R+4),(R+24),4);
}
B402758:{NFSU2_TR(0x402758);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x40275dull));
TAIL_STATIC(0x571770u,571);
}
B40275d:L40275d:{c.instructions+=7;NFSU2_TR(0x40275d);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40275f:{NFSU2_TR(0x40275f);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B402761:{NFSU2_TR(0x402761);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B402763:{NFSU2_TR(0x402763);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x10ull))));
}
B402766:{NFSU2_TR(0x402766);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B402767:{NFSU2_TR(0x402767);
__builtin_memmove((R+4),(R+24),4);
}
B402769:{NFSU2_TR(0x402769);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x40276eull));
TAIL_STATIC(0x571640u,571);
}
B40276e:L40276e:{c.instructions+=2;NFSU2_TR(0x40276e);
__builtin_memmove((R+4),(R+24),4);
}
B402770:{NFSU2_TR(0x402770);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x402775ull));
TAIL_STATIC(0x578d90u,578);
}
B402775:L402775:{c.instructions+=3;NFSU2_TR(0x402775);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B402776:{NFSU2_TR(0x402776);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B402777:{NFSU2_TR(0x402777);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B402780:L402780:{c.instructions+=2;NFSU2_TR(0x402780);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B402782:{NFSU2_TR(0x402782);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x402785ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B402785:L402785:{c.instructions+=1;NFSU2_TR(0x402785);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B402790:L402790:{c.instructions+=6;NFSU2_TR(0x402790);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B402793:{NFSU2_TR(0x402793);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xaull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(s32(s16(r2(U+4)))));
}
B402797:{NFSU2_TR(0x402797);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B402798:{NFSU2_TR(0x402798);
u8 U[4];
w4(U+0,u32(0x7842ccull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40279d:{NFSU2_TR(0x40279d);
u8 U[4];
w4(U+0,u32(0x827a24ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4027a2:{NFSU2_TR(0x4027a2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4027a7ull));
TAIL_STATIC(0x4400d0u,440);
}
B4027a7:L4027a7:{c.instructions+=3;NFSU2_TR(0x4027a7);
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
B4027aa:{NFSU2_TR(0x4027aa);
w4(R+0,u32(0x827a24ull));
}
B4027af:{NFSU2_TR(0x4027af);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4027b0:L4027b0:{c.instructions+=8;NFSU2_TR(0x4027b0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4027b1:{NFSU2_TR(0x4027b1);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B4027b5:{NFSU2_TR(0x4027b5);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4027b6:{NFSU2_TR(0x4027b6);
u8 U[4];
w4(U+0,u32(0x7842bcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4027bb:{NFSU2_TR(0x4027bb);
__builtin_memmove((R+28),(R+4),4);
}
B4027bd:{NFSU2_TR(0x4027bd);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4027bf:{NFSU2_TR(0x4027bf);
__builtin_memmove((R+4),(R+24),4);
}
B4027c1:{NFSU2_TR(0x4027c1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4027c6ull));
TAIL_STATIC(0x578ce0u,578);
}
B4027c6:L4027c6:{c.instructions+=5;NFSU2_TR(0x4027c6);
__builtin_memmove((R+4),gp(0x890080),4);
}
B4027cc:{NFSU2_TR(0x4027cc);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x18ull))));
__builtin_memmove((R+0),(U+0),4);
}
B4027cf:{NFSU2_TR(0x4027cf);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4027d0:{NFSU2_TR(0x4027d0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4027d1:{NFSU2_TR(0x4027d1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4027d6ull));
TAIL_STATIC(0x5f0e60u,5f0);
}
B4027d6:L4027d6:{c.instructions+=4;NFSU2_TR(0x4027d6);
u8 U[4];
w4(U+0,u32(0x7842b4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4027db:{NFSU2_TR(0x4027db);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4027dd:{NFSU2_TR(0x4027dd);
__builtin_memmove((R+4),(R+24),4);
}
B4027df:{NFSU2_TR(0x4027df);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4027e4ull));
TAIL_STATIC(0x578ce0u,578);
}
B4027e4:L4027e4:{c.instructions+=3;NFSU2_TR(0x4027e4);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4027e5:{NFSU2_TR(0x4027e5);
__builtin_memmove((R+4),(R+28),4);
}
B4027e7:{NFSU2_TR(0x4027e7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4027ecull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x402720u);}goto L402720;}
}
B4027ec:L4027ec:{c.instructions+=2;NFSU2_TR(0x4027ec);
__builtin_memmove((R+4),(R+24),4);
}
B4027ee:{NFSU2_TR(0x4027ee);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4027f3ull));
TAIL_STATIC(0x578d90u,578);
}
B4027f3:L4027f3:{c.instructions+=2;NFSU2_TR(0x4027f3);
__builtin_memmove((R+4),(R+24),4);
}
B4027f5:{NFSU2_TR(0x4027f5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4027faull));
TAIL_STATIC(0x578d90u,578);
}
B4027fa:L4027fa:{c.instructions+=3;NFSU2_TR(0x4027fa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4027fb:{NFSU2_TR(0x4027fb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4027fc:{NFSU2_TR(0x4027fc);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B402800:L402800:{c.instructions+=6;NFSU2_TR(0x402800);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B402803:{NFSU2_TR(0x402803);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xaull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(s32(s16(r2(U+4)))));
}
B402807:{NFSU2_TR(0x402807);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B402808:{NFSU2_TR(0x402808);
u8 U[4];
w4(U+0,u32(0x7842dcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40280d:{NFSU2_TR(0x40280d);
u8 U[4];
w4(U+0,u32(0x827a44ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B402812:{NFSU2_TR(0x402812);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x402817ull));
TAIL_STATIC(0x4400d0u,440);
}
B402817:L402817:{c.instructions+=3;NFSU2_TR(0x402817);
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
B40281a:{NFSU2_TR(0x40281a);
w4(R+0,u32(0x827a44ull));
}
B40281f:{NFSU2_TR(0x40281f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B402820:L402820:{c.instructions+=8;NFSU2_TR(0x402820);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B402821:{NFSU2_TR(0x402821);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B402825:{NFSU2_TR(0x402825);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B402826:{NFSU2_TR(0x402826);
u8 U[4];
w4(U+0,u32(0x7842f4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40282b:{NFSU2_TR(0x40282b);
__builtin_memmove((R+28),(R+4),4);
}
B40282d:{NFSU2_TR(0x40282d);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40282f:{NFSU2_TR(0x40282f);
__builtin_memmove((R+4),(R+24),4);
}
B402831:{NFSU2_TR(0x402831);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x402836ull));
TAIL_STATIC(0x578ce0u,578);
}
B402836:L402836:{c.instructions+=5;NFSU2_TR(0x402836);
__builtin_memmove((R+4),gp(0x890080),4);
}
B40283c:{NFSU2_TR(0x40283c);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x18ull))));
__builtin_memmove((R+0),(U+0),4);
}
B40283f:{NFSU2_TR(0x40283f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B402840:{NFSU2_TR(0x402840);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B402841:{NFSU2_TR(0x402841);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x402846ull));
TAIL_STATIC(0x5f0e60u,5f0);
}
B402846:L402846:{c.instructions+=4;NFSU2_TR(0x402846);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1cull))));
__builtin_memmove((R+4),(U+0),4);
}
B402849:{NFSU2_TR(0x402849);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40284a:{NFSU2_TR(0x40284a);
__builtin_memmove((R+4),(R+24),4);
}
B40284c:{NFSU2_TR(0x40284c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x402851ull));
TAIL_STATIC(0x571770u,571);
}
B402851:L402851:{c.instructions+=4;NFSU2_TR(0x402851);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x20ull))));
__builtin_memmove((R+8),(U+0),4);
}
B402854:{NFSU2_TR(0x402854);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B402855:{NFSU2_TR(0x402855);
__builtin_memmove((R+4),(R+24),4);
}
B402857:{NFSU2_TR(0x402857);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x40285cull));
TAIL_STATIC(0x571770u,571);
}
B40285c:L40285c:{c.instructions+=4;NFSU2_TR(0x40285c);
u8 U[4];
w4(U+0,u32(0x7842b4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B402861:{NFSU2_TR(0x402861);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B402863:{NFSU2_TR(0x402863);
__builtin_memmove((R+4),(R+24),4);
}
B402865:{NFSU2_TR(0x402865);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x40286aull));
TAIL_STATIC(0x578ce0u,578);
}
B40286a:L40286a:{c.instructions+=3;NFSU2_TR(0x40286a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40286b:{NFSU2_TR(0x40286b);
__builtin_memmove((R+4),(R+28),4);
}
B40286d:{NFSU2_TR(0x40286d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x402872ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x402720u);}goto L402720;}
}
B402872:L402872:{c.instructions+=2;NFSU2_TR(0x402872);
__builtin_memmove((R+4),(R+24),4);
}
B402874:{NFSU2_TR(0x402874);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x402879ull));
TAIL_STATIC(0x578d90u,578);
}
B402879:L402879:{c.instructions+=2;NFSU2_TR(0x402879);
__builtin_memmove((R+4),(R+24),4);
}
B40287b:{NFSU2_TR(0x40287b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x402880ull));
TAIL_STATIC(0x578d90u,578);
}
B402880:L402880:{c.instructions+=3;NFSU2_TR(0x402880);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B402881:{NFSU2_TR(0x402881);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B402882:{NFSU2_TR(0x402882);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B402890:L402890:{c.instructions+=6;NFSU2_TR(0x402890);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B402893:{NFSU2_TR(0x402893);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xaull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(s32(s16(r2(U+4)))));
}
B402897:{NFSU2_TR(0x402897);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B402898:{NFSU2_TR(0x402898);
u8 U[4];
w4(U+0,u32(0x784308ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40289d:{NFSU2_TR(0x40289d);
u8 U[4];
w4(U+0,u32(0x827a64ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4028a2:{NFSU2_TR(0x4028a2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4028a7ull));
TAIL_STATIC(0x4400d0u,440);
}
B4028a7:L4028a7:{c.instructions+=3;NFSU2_TR(0x4028a7);
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
B4028aa:{NFSU2_TR(0x4028aa);
w4(R+0,u32(0x827a64ull));
}
B4028af:{NFSU2_TR(0x4028af);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4028b0:L4028b0:{c.instructions+=8;NFSU2_TR(0x4028b0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4028b1:{NFSU2_TR(0x4028b1);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B4028b5:{NFSU2_TR(0x4028b5);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4028b6:{NFSU2_TR(0x4028b6);
u8 U[4];
w4(U+0,u32(0x784324ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4028bb:{NFSU2_TR(0x4028bb);
__builtin_memmove((R+28),(R+4),4);
}
B4028bd:{NFSU2_TR(0x4028bd);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4028bf:{NFSU2_TR(0x4028bf);
__builtin_memmove((R+4),(R+24),4);
}
B4028c1:{NFSU2_TR(0x4028c1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4028c6ull));
TAIL_STATIC(0x578ce0u,578);
}
B4028c6:L4028c6:{c.instructions+=5;NFSU2_TR(0x4028c6);
__builtin_memmove((R+4),gp(0x890080),4);
}
B4028cc:{NFSU2_TR(0x4028cc);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x18ull))));
__builtin_memmove((R+0),(U+0),4);
}
B4028cf:{NFSU2_TR(0x4028cf);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4028d0:{NFSU2_TR(0x4028d0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4028d1:{NFSU2_TR(0x4028d1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4028d6ull));
TAIL_STATIC(0x5f0e60u,5f0);
}
B4028d6:L4028d6:{c.instructions+=4;NFSU2_TR(0x4028d6);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1cull))));
__builtin_memmove((R+4),(U+0),4);
}
B4028d9:{NFSU2_TR(0x4028d9);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4028da:{NFSU2_TR(0x4028da);
__builtin_memmove((R+4),(R+24),4);
}
B4028dc:{NFSU2_TR(0x4028dc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4028e1ull));
TAIL_STATIC(0x571770u,571);
}
B4028e1:L4028e1:{c.instructions+=4;NFSU2_TR(0x4028e1);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x20ull))));
__builtin_memmove((R+8),(U+0),4);
}
B4028e4:{NFSU2_TR(0x4028e4);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4028e5:{NFSU2_TR(0x4028e5);
__builtin_memmove((R+4),(R+24),4);
}
B4028e7:{NFSU2_TR(0x4028e7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4028ecull));
TAIL_STATIC(0x571770u,571);
}
B4028ec:L4028ec:{c.instructions+=4;NFSU2_TR(0x4028ec);
u8 U[4];
w4(U+0,u32(0x7842b4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4028f1:{NFSU2_TR(0x4028f1);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4028f3:{NFSU2_TR(0x4028f3);
__builtin_memmove((R+4),(R+24),4);
}
B4028f5:{NFSU2_TR(0x4028f5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4028faull));
TAIL_STATIC(0x578ce0u,578);
}
B4028fa:L4028fa:{c.instructions+=3;NFSU2_TR(0x4028fa);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4028fb:{NFSU2_TR(0x4028fb);
__builtin_memmove((R+4),(R+28),4);
}
B4028fd:{NFSU2_TR(0x4028fd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x402902ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x402720u);}goto L402720;}
}
B402902:L402902:{c.instructions+=2;NFSU2_TR(0x402902);
__builtin_memmove((R+4),(R+24),4);
}
B402904:{NFSU2_TR(0x402904);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x402909ull));
TAIL_STATIC(0x578d90u,578);
}
B402909:L402909:{c.instructions+=2;NFSU2_TR(0x402909);
__builtin_memmove((R+4),(R+24),4);
}
B40290b:{NFSU2_TR(0x40290b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x402910ull));
TAIL_STATIC(0x578d90u,578);
}
B402910:L402910:{c.instructions+=3;NFSU2_TR(0x402910);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B402911:{NFSU2_TR(0x402911);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B402912:{NFSU2_TR(0x402912);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B402920:L402920:{c.instructions+=6;NFSU2_TR(0x402920);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B402923:{NFSU2_TR(0x402923);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xaull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(s32(s16(r2(U+4)))));
}
B402927:{NFSU2_TR(0x402927);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B402928:{NFSU2_TR(0x402928);
u8 U[4];
w4(U+0,u32(0x78433cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40292d:{NFSU2_TR(0x40292d);
u8 U[4];
w4(U+0,u32(0x827a84ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B402932:{NFSU2_TR(0x402932);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x402937ull));
TAIL_STATIC(0x4400d0u,440);
}
B402937:L402937:{c.instructions+=3;NFSU2_TR(0x402937);
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
B40293a:{NFSU2_TR(0x40293a);
w4(R+0,u32(0x827a84ull));
}
B40293f:{NFSU2_TR(0x40293f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B402940:L402940:{c.instructions+=37;NFSU2_TR(0x402940);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B402941:{NFSU2_TR(0x402941);
__builtin_memmove((R+24),(R+4),4);
}
B402943:{NFSU2_TR(0x402943);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B402947:{NFSU2_TR(0x402947);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x308ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(s32(s8(r1(U+4)))));
}
B40294e:{NFSU2_TR(0x40294e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B402951:{NFSU2_TR(0x402951);
u8 U[45];
w4(U+37,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
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
B402954:{NFSU2_TR(0x402954);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B402955:{NFSU2_TR(0x402955);
u8 U[12];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+28),(U+8),4);
}
B402959:{NFSU2_TR(0x402959);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B40295d:{NFSU2_TR(0x40295d);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(s32(s16(r2(U+4)))));
}
B402961:{NFSU2_TR(0x402961);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x89e970ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B402968:{NFSU2_TR(0x402968);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B40296b:{NFSU2_TR(0x40296b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40296c:{NFSU2_TR(0x40296c);
{u32 ea_=u32(r4(R+8)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B40296f:{NFSU2_TR(0x40296f);
{u32 ea_=u32(r4(R+8)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B402972:{NFSU2_TR(0x402972);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B402974:{NFSU2_TR(0x402974);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B402976:{NFSU2_TR(0x402976);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B402978:{NFSU2_TR(0x402978);
__asm__ volatile(".byte 0xd9,0xc2":::"memory");
}
B40297a:{NFSU2_TR(0x40297a);
__asm__ volatile(".byte 0xd8,0xcb":::"memory");
}
B40297c:{NFSU2_TR(0x40297c);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B40297e:{NFSU2_TR(0x40297e);
__asm__ volatile(".byte 0xd9,0xc3":::"memory");
}
B402980:{NFSU2_TR(0x402980);
__asm__ volatile(".byte 0xd8,0xcc":::"memory");
}
B402982:{NFSU2_TR(0x402982);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B402984:{NFSU2_TR(0x402984);
__asm__ volatile(".byte 0xd9,0xfa":::"memory");
}
B402986:{NFSU2_TR(0x402986);
__asm__ volatile(".byte 0xdd,0xdb":::"memory");
}
B402988:{NFSU2_TR(0x402988);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B40298a:{NFSU2_TR(0x40298a);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B40298c:{NFSU2_TR(0x40298c);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B402990:{NFSU2_TR(0x402990);
{u32 ea_=u32(r4(R+24)+u32(496u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B402996:{NFSU2_TR(0x402996);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B402999:{NFSU2_TR(0x402999);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B40299d:{NFSU2_TR(0x40299d);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4029a0:{NFSU2_TR(0x4029a0);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4029a4:{NFSU2_TR(0x4029a4);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4029a7:{NFSU2_TR(0x4029a7);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4029ab:{NFSU2_TR(0x4029ab);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4029b0ull));
TAIL_STATIC(0x60bff0u,60b);
}
B4029b0:L4029b0:{c.instructions+=8;NFSU2_TR(0x4029b0);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B4029b4:{NFSU2_TR(0x4029b4);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B4029b8:{NFSU2_TR(0x4029b8);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4029bc:{NFSU2_TR(0x4029bc);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B4029be:{NFSU2_TR(0x4029be);
{u32 ea_=u32(u32(7881308u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B4029c4:{NFSU2_TR(0x4029c4);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4029c6:{NFSU2_TR(0x4029c6);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4029c9:{NFSU2_TR(0x4029c9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4029d7;}}
}
B4029cb:L4029cb:{c.instructions+=3;NFSU2_TR(0x4029cb);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B4029cf:{NFSU2_TR(0x4029cf);
{u32 ea_=u32(r4(R+24)+u32(500u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4029d5:{NFSU2_TR(0x4029d5);
{goto L4029e3;}
}
B4029d7:L4029d7:{c.instructions+=2;NFSU2_TR(0x4029d7);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B4029d9:{NFSU2_TR(0x4029d9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1f4ull))));
w4(U+4,u32(0x47c34f80ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4029e3:L4029e3:{c.instructions+=5;NFSU2_TR(0x4029e3);
{u32 ea_=u32(r4(R+24)+u32(496u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4029e9:{NFSU2_TR(0x4029e9);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B4029ef:{NFSU2_TR(0x4029ef);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4029f1:{NFSU2_TR(0x4029f1);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4029f4:{NFSU2_TR(0x4029f4);
if(r1(R+518)){{goto L4029fe;}}
}
B4029f6:L4029f6:{c.instructions+=2;NFSU2_TR(0x4029f6);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B4029f8:{NFSU2_TR(0x4029f8);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4029fe:L4029fe:{c.instructions+=6;NFSU2_TR(0x4029fe);
{u32 ea_=u32(r4(R+24)+u32(496u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B402a04:{NFSU2_TR(0x402a04);
{u32 ea_=u32(r4(R+24)+u32(500u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B402a0a:{NFSU2_TR(0x402a0a);
{u32 ea_=u32(u32(7881560u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B402a10:{NFSU2_TR(0x402a10);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B402a12:{NFSU2_TR(0x402a12);
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
B402a15:{NFSU2_TR(0x402a15);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L402a22;}}
}
B402a17:L402a17:{c.instructions+=4;NFSU2_TR(0x402a17);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B402a18:{NFSU2_TR(0x402a18);
{u32 ea_=u32(r4(R+24)+u32(500u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B402a1e:{NFSU2_TR(0x402a1e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B402a1f:{NFSU2_TR(0x402a1f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B402a22:L402a22:{c.instructions+=5;NFSU2_TR(0x402a22);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B402a23:{NFSU2_TR(0x402a23);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B402a25:{NFSU2_TR(0x402a25);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1f4ull))));
w4(U+4,u32(0x3dcccccdull));
s4(u32(r4(U+0)),r4(U+4));
}
B402a2f:{NFSU2_TR(0x402a2f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B402a30:{NFSU2_TR(0x402a30);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B402a40:L402a40:{c.instructions+=12;NFSU2_TR(0x402a40);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B402a41:{NFSU2_TR(0x402a41);
__builtin_memmove((R+20),(R+16),4);
}
B402a43:{NFSU2_TR(0x402a43);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B402a46:{NFSU2_TR(0x402a46);
u8 U[6];
w1(R+512,u8((r4(R+16))<(u32(0x2cull))));
w1(R+523,sborrow<u32>(r4(R+16),u32(0x2cull)));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x2cull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B402a49:{NFSU2_TR(0x402a49);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B402a4a:{NFSU2_TR(0x402a4a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B402a4d:{NFSU2_TR(0x402a4d);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B402a51:{NFSU2_TR(0x402a51);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B402a52:{NFSU2_TR(0x402a52);
u8 U[4];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B402a56:{NFSU2_TR(0x402a56);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B402a57:{NFSU2_TR(0x402a57);
__builtin_memmove((R+4),(R+24),4);
}
B402a59:{NFSU2_TR(0x402a59);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x402a5eull));
TAIL_STATIC(0x5ec250u,5ec);
}
B402a5e:L402a5e:{c.instructions+=7;NFSU2_TR(0x402a5e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B402a61:{NFSU2_TR(0x402a61);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x30ull))));
}
B402a64:{NFSU2_TR(0x402a64);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B402a65:{NFSU2_TR(0x402a65);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B402a69:{NFSU2_TR(0x402a69);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B402a6a:{NFSU2_TR(0x402a6a);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((R+4),(U+0),4);
}
B402a6d:{NFSU2_TR(0x402a6d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x402a72ull));
TAIL_STATIC(0x591fc0u,591);
}
B402a72:L402a72:{c.instructions+=6;NFSU2_TR(0x402a72);
{u32 ea_=u32(u32(7878252u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B402a78:{NFSU2_TR(0x402a78);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B402a7c:{NFSU2_TR(0x402a7c);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B402a80:{NFSU2_TR(0x402a80);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B402a82:{NFSU2_TR(0x402a82);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B402a85:{NFSU2_TR(0x402a85);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L402abe;}}
}
B402a87:L402a87:{c.instructions+=6;NFSU2_TR(0x402a87);
{u32 ea_=u32(u32(7878252u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B402a8d:{NFSU2_TR(0x402a8d);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B402a91:{NFSU2_TR(0x402a91);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B402a95:{NFSU2_TR(0x402a95);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B402a97:{NFSU2_TR(0x402a97);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B402a9a:{NFSU2_TR(0x402a9a);
if(r1(R+514)){{goto L402abe;}}
}
B402a9c:L402a9c:{c.instructions+=5;NFSU2_TR(0x402a9c);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B402aa0:{NFSU2_TR(0x402aa0);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B402aa6:{NFSU2_TR(0x402aa6);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B402aa8:{NFSU2_TR(0x402aa8);
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
B402aab:{NFSU2_TR(0x402aab);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L402ab4;}}
}
B402aad:L402aad:{c.instructions+=5;NFSU2_TR(0x402aad);
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
B402aaf:{NFSU2_TR(0x402aaf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B402ab0:{NFSU2_TR(0x402ab0);
__builtin_memmove((R+16),(R+20),4);
}
B402ab2:{NFSU2_TR(0x402ab2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B402ab3:{NFSU2_TR(0x402ab3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B402ab4:L402ab4:{c.instructions+=5;NFSU2_TR(0x402ab4);
w4(R+0,u32(0x1ull));
}
B402ab9:{NFSU2_TR(0x402ab9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B402aba:{NFSU2_TR(0x402aba);
__builtin_memmove((R+16),(R+20),4);
}
B402abc:{NFSU2_TR(0x402abc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B402abd:{NFSU2_TR(0x402abd);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B402abe:L402abe:{c.instructions+=6;NFSU2_TR(0x402abe);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B402ac2:{NFSU2_TR(0x402ac2);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B402ac8:{NFSU2_TR(0x402ac8);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B402aca:{NFSU2_TR(0x402aca);
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
B402acd:{NFSU2_TR(0x402acd);
w4(R+0,u32(0x3ull));
}
B402ad2:{NFSU2_TR(0x402ad2);
if(r1(R+518)){{goto L402ad9;}}
}
B402ad4:L402ad4:{c.instructions+=1;NFSU2_TR(0x402ad4);
w4(R+0,u32(0x2ull));
}
B402ad9:L402ad9:{c.instructions+=4;NFSU2_TR(0x402ad9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B402ada:{NFSU2_TR(0x402ada);
__builtin_memmove((R+16),(R+20),4);
}
B402adc:{NFSU2_TR(0x402adc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B402add:{NFSU2_TR(0x402add);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B402ae0:L402ae0:{c.instructions+=17;NFSU2_TR(0x402ae0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x18ull))));
}
B402ae3:{NFSU2_TR(0x402ae3);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B402ae4:{NFSU2_TR(0x402ae4);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B402ae5:{NFSU2_TR(0x402ae5);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B402ae6:{NFSU2_TR(0x402ae6);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B402aea:{NFSU2_TR(0x402aea);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B402aec:{NFSU2_TR(0x402aec);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B402aef:{NFSU2_TR(0x402aef);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B402af2:{NFSU2_TR(0x402af2);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B402af5:{NFSU2_TR(0x402af5);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B402af7:{NFSU2_TR(0x402af7);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B402afb:{NFSU2_TR(0x402afb);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B402afd:{NFSU2_TR(0x402afd);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B402aff:{NFSU2_TR(0x402aff);
u8 U[2];
__builtin_memmove((U+0),(R+12),1);
w1(R+523,sborrow<u8>(r1(R+8),r1(U+0)));
w1(U+1,u8(u32(r1(R+8))-u32(r1(U+0))));
w1(R+519,u8(s8(r1(U+1))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B402b01:{NFSU2_TR(0x402b01);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B402b05:{NFSU2_TR(0x402b05);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B402b09:{NFSU2_TR(0x402b09);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L402c7e;}}
}
B402b0f:L402b0f:{c.instructions+=2;NFSU2_TR(0x402b0f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B402b10:{NFSU2_TR(0x402b10);
{goto L402b16;}
}
B402b12:L402b12:{c.instructions+=1;NFSU2_TR(0x402b12);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B402b16:L402b16:{c.instructions+=3;NFSU2_TR(0x402b16);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B402b17:{NFSU2_TR(0x402b17);
__builtin_memmove((R+4),(R+0),4);
}
B402b19:{NFSU2_TR(0x402b19);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x402b1eull));
TAIL_STATIC(0x5a0820u,5a0);
}
B402b1e:L402b1e:{c.instructions+=6;NFSU2_TR(0x402b1e);
__builtin_memmove((R+24),(R+0),4);
}
B402b20:{NFSU2_TR(0x402b20);
{u32 ea_=u32(r4(R+24)+u32(96u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B402b23:{NFSU2_TR(0x402b23);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B402b27:{NFSU2_TR(0x402b27);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B402b29:{NFSU2_TR(0x402b29);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B402b2c:{NFSU2_TR(0x402b2c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L402c4a;}}
}
B402b32:L402b32:{c.instructions+=2;NFSU2_TR(0x402b32);
__builtin_memmove((R+4),(R+24),4);
}
B402b34:{NFSU2_TR(0x402b34);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x402b39ull));
TAIL_STATIC(0x592c60u,592);
}
B402b39:L402b39:{c.instructions+=3;NFSU2_TR(0x402b39);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B402b3b:{NFSU2_TR(0x402b3b);
__builtin_memmove((R+4),(R+24),4);
}
B402b3d:{NFSU2_TR(0x402b3d);
if(r1(R+518)){{goto L402c87;}}
}
B402b43:L402b43:{c.instructions+=7;NFSU2_TR(0x402b43);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B402b47:{NFSU2_TR(0x402b47);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B402b48:{NFSU2_TR(0x402b48);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B402b4c:{NFSU2_TR(0x402b4c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B402b4d:{NFSU2_TR(0x402b4d);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B402b51:{NFSU2_TR(0x402b51);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B402b55:{NFSU2_TR(0x402b55);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x402b5aull));
TAIL_STATIC(0x592c90u,592);
}
B402b5a:L402b5a:{c.instructions+=3;NFSU2_TR(0x402b5a);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B402b5e:{NFSU2_TR(0x402b5e);
u8 U[18];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((U+10),(U+0),4);
w1(R+512,u8((r4(R+24))<(r4(U+10))));
w1(R+523,sborrow<u32>(r4(R+24),r4(U+10)));
w4(U+14,u32(u32(r4(R+24))-u32(r4(U+10))));
w1(R+519,u8(s32(r4(U+14))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+14))==(u32(0x0ull))));
w4(U+4,u32(u32(r4(U+14))&u32(u32(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r4(U+4)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B402b60:{NFSU2_TR(0x402b60);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L402b66;}}
}
B402b62:L402b62:{c.instructions+=1;NFSU2_TR(0x402b62);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B402b66:L402b66:{c.instructions+=4;NFSU2_TR(0x402b66);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B402b6a:{NFSU2_TR(0x402b6a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B402b6c:{NFSU2_TR(0x402b6c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B402b6d:{NFSU2_TR(0x402b6d);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x84ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x402b73ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B402b73:L402b73:{c.instructions+=2;NFSU2_TR(0x402b73);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B402b75:{NFSU2_TR(0x402b75);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L402c4a;}}
}
B402b7b:L402b7b:{c.instructions+=3;NFSU2_TR(0x402b7b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B402b7c:{NFSU2_TR(0x402b7c);
__builtin_memmove((R+4),(R+28),4);
}
B402b7e:{NFSU2_TR(0x402b7e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x402b83ull));
TAIL_STATIC(0x60c0f0u,60c);
}
B402b83:L402b83:{c.instructions+=3;NFSU2_TR(0x402b83);
__builtin_memmove((R+24),(R+0),4);
}
B402b85:{NFSU2_TR(0x402b85);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B402b87:{NFSU2_TR(0x402b87);
if(r1(R+518)){{goto L402c4a;}}
}
B402b8d:L402b8d:{c.instructions+=2;NFSU2_TR(0x402b8d);
u8 U[7];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(r1(R+12))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B402b91:{NFSU2_TR(0x402b91);
if(r1(R+518)){{goto L402bab;}}
}
B402b93:L402b93:{c.instructions+=3;NFSU2_TR(0x402b93);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(s32(s16(r2(U+4)))));
}
B402b97:{NFSU2_TR(0x402b97);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x89e970ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B402b9e:{NFSU2_TR(0x402b9e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x402ba3ull));
TAIL_STATIC(0x60bea0u,60b);
}
B402ba3:L402ba3:{c.instructions+=2;NFSU2_TR(0x402ba3);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B402ba5:{NFSU2_TR(0x402ba5);
if(r1(R+518)){{goto L402c4a;}}
}
B402bab:L402bab:{c.instructions+=2;NFSU2_TR(0x402bab);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+20))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B402bad:{NFSU2_TR(0x402bad);
if(r1(R+518)){{goto L402caf;}}
}
B402bb3:L402bb3:{c.instructions+=3;NFSU2_TR(0x402bb3);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(s32(s16(r2(U+4)))));
}
B402bb7:{NFSU2_TR(0x402bb7);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x89e970ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B402bbe:{NFSU2_TR(0x402bbe);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x402bc3ull));
TAIL_STATIC(0x614880u,614);
}
B402bc3:L402bc3:{c.instructions+=2;NFSU2_TR(0x402bc3);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B402bc5:{NFSU2_TR(0x402bc5);
if(r1(R+518)){{goto L402bdf;}}
}
B402bc7:L402bc7:{c.instructions+=3;NFSU2_TR(0x402bc7);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(s32(s16(r2(U+4)))));
}
B402bcb:{NFSU2_TR(0x402bcb);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x89e970ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B402bd2:{NFSU2_TR(0x402bd2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x402bd7ull));
TAIL_STATIC(0x614880u,614);
}
B402bd7:L402bd7:{c.instructions+=2;NFSU2_TR(0x402bd7);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B402bd9:{NFSU2_TR(0x402bd9);
if(r1(R+518)){{goto L402caf;}}
}
B402bdf:L402bdf:{c.instructions+=5;NFSU2_TR(0x402bdf);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(s32(s16(r2(U+4)))));
}
B402be3:{NFSU2_TR(0x402be3);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(s32(s16(r2(U+4)))));
}
B402be7:{NFSU2_TR(0x402be7);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x89e970ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B402bee:{NFSU2_TR(0x402bee);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x89e970ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B402bf5:{NFSU2_TR(0x402bf5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x402bfaull));
TAIL_STATIC(0x614880u,614);
}
B402bfa:L402bfa:{c.instructions+=3;NFSU2_TR(0x402bfa);
__builtin_memmove((R+4),(R+28),4);
}
B402bfc:{NFSU2_TR(0x402bfc);
__builtin_memmove((R+12),(R+0),1);
}
B402bfe:{NFSU2_TR(0x402bfe);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x402c03ull));
TAIL_STATIC(0x614880u,614);
}
B402c03:L402c03:{c.instructions+=2;NFSU2_TR(0x402c03);
u8 U[5];
__builtin_memmove((U+3),(R+12),1);
w1(R+512,u8((r1(R+0))<(r1(U+3))));
w1(R+523,sborrow<u8>(r1(R+0),r1(U+3)));
w1(U+4,u8(u32(r1(R+0))-u32(r1(U+3))));
w1(R+519,u8(s8(r1(U+4))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+4))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+4))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B402c05:{NFSU2_TR(0x402c05);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L402c48;}}
}
B402c07:L402c07:{c.instructions+=4;NFSU2_TR(0x402c07);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B402c0b:{NFSU2_TR(0x402c0b);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B402c0c:{NFSU2_TR(0x402c0c);
__builtin_memmove((R+4),(R+28),4);
}
B402c0e:{NFSU2_TR(0x402c0e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x402c13ull));
TAIL_STATIC(0x60bff0u,60b);
}
B402c13:L402c13:{c.instructions+=4;NFSU2_TR(0x402c13);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B402c17:{NFSU2_TR(0x402c17);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B402c18:{NFSU2_TR(0x402c18);
__builtin_memmove((R+4),(R+28),4);
}
B402c1a:{NFSU2_TR(0x402c1a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x402c1full));
TAIL_STATIC(0x60bff0u,60b);
}
B402c1f:L402c1f:{c.instructions+=5;NFSU2_TR(0x402c1f);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B402c23:{NFSU2_TR(0x402c23);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B402c29:{NFSU2_TR(0x402c29);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B402c2b:{NFSU2_TR(0x402c2b);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B402c2e:{NFSU2_TR(0x402c2e);
if(r1(R+514)){{goto L402c3d;}}
}
B402c30:L402c30:{c.instructions+=4;NFSU2_TR(0x402c30);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B402c36:{NFSU2_TR(0x402c36);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B402c38:{NFSU2_TR(0x402c38);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B402c3b:{NFSU2_TR(0x402c3b);
if(r1(R+518)){{goto L402cab;}}
}
B402c3d:L402c3d:{c.instructions+=4;NFSU2_TR(0x402c3d);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B402c41:{NFSU2_TR(0x402c41);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B402c43:{NFSU2_TR(0x402c43);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B402c46:{NFSU2_TR(0x402c46);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L402cad;}}
}
B402c48:L402c48:{c.instructions+=1;NFSU2_TR(0x402c48);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B402c4a:L402c4a:{c.instructions+=7;NFSU2_TR(0x402c4a);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B402c4e:{NFSU2_TR(0x402c4e);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B402c52:{NFSU2_TR(0x402c52);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+8,u32(s32(s8(r1(U+4)))));
}
B402c56:{NFSU2_TR(0x402c56);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B402c57:{NFSU2_TR(0x402c57);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B402c59:{NFSU2_TR(0x402c59);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B402c5d:{NFSU2_TR(0x402c5d);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x402b12u);}goto L402b12;}}
}
B402c63:L402c63:{c.instructions+=3;NFSU2_TR(0x402c63);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+20))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B402c65:{NFSU2_TR(0x402c65);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B402c66:{NFSU2_TR(0x402c66);
if(r1(R+518)){{goto L402c7e;}}
}
B402c68:L402c68:{c.instructions+=7;NFSU2_TR(0x402c68);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B402c6c:{NFSU2_TR(0x402c6c);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x30cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B402c72:{NFSU2_TR(0x402c72);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B402c73:{NFSU2_TR(0x402c73);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B402c74:{NFSU2_TR(0x402c74);
u8 U[4];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B402c78:{NFSU2_TR(0x402c78);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B402c79:{NFSU2_TR(0x402c79);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x402c7eull));
TAIL_STATIC(0x60c050u,60c);
}
B402c7e:L402c7e:{c.instructions+=6;NFSU2_TR(0x402c7e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B402c7f:{NFSU2_TR(0x402c7f);
__builtin_memmove((R+0),(R+20),4);
}
B402c81:{NFSU2_TR(0x402c81);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B402c82:{NFSU2_TR(0x402c82);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B402c83:{NFSU2_TR(0x402c83);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x18ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x18ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B402c86:{NFSU2_TR(0x402c86);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B402c87:L402c87:{c.instructions+=1;NFSU2_TR(0x402c87);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x402c8cull));
TAIL_STATIC(0x404800u,404);
}
B402c8c:L402c8c:{c.instructions+=2;NFSU2_TR(0x402c8c);
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
B402c8e:{NFSU2_TR(0x402c8e);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x402c4au);}goto L402c4a;}}
}
B402c90:L402c90:{c.instructions+=8;NFSU2_TR(0x402c90);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B402c94:{NFSU2_TR(0x402c94);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B402c95:{NFSU2_TR(0x402c95);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B402c99:{NFSU2_TR(0x402c99);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B402c9a:{NFSU2_TR(0x402c9a);
__builtin_memmove((R+4),(R+24),4);
}
B402c9c:{NFSU2_TR(0x402c9c);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B402ca0:{NFSU2_TR(0x402ca0);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B402ca4:{NFSU2_TR(0x402ca4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x402ca9ull));
TAIL_STATIC(0x592ce0u,592);
}
B402ca9:L402ca9:{c.instructions+=1;NFSU2_TR(0x402ca9);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x402c4au);}goto L402c4a;}
}
B402cab:L402cab:{c.instructions+=1;NFSU2_TR(0x402cab);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B402cad:L402cad:{c.instructions+=1;NFSU2_TR(0x402cad);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B402caf:L402caf:{c.instructions+=2;NFSU2_TR(0x402caf);
__builtin_memmove((R+20),(R+24),4);
}
B402cb1:{NFSU2_TR(0x402cb1);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x402c4au);}goto L402c4a;}
}
B402cc0:L402cc0:{c.instructions+=18;NFSU2_TR(0x402cc0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B402cc1:{NFSU2_TR(0x402cc1);
__builtin_memmove((R+20),(R+16),4);
}
B402cc3:{NFSU2_TR(0x402cc3);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B402cc6:{NFSU2_TR(0x402cc6);
u8 U[6];
w1(R+512,u8((r4(R+16))<(u32(0x44ull))));
w1(R+523,sborrow<u32>(r4(R+16),u32(0x44ull)));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x44ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B402cc9:{NFSU2_TR(0x402cc9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B402ccc:{NFSU2_TR(0x402ccc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B402ccf:{NFSU2_TR(0x402ccf);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B402cd0:{NFSU2_TR(0x402cd0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B402cd1:{NFSU2_TR(0x402cd1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B402cd4:{NFSU2_TR(0x402cd4);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B402cd5:{NFSU2_TR(0x402cd5);
u8 U[4];
w4(U+0,u32(0x47c34f80ull));
s4(u32(r4(R+0)),r4(U+0));
}
B402cdb:{NFSU2_TR(0x402cdb);
u8 U[4];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B402cdf:{NFSU2_TR(0x402cdf);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B402ce0:{NFSU2_TR(0x402ce0);
u8 U[4];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B402ce4:{NFSU2_TR(0x402ce4);
u8 U[4];
w4(U+0,u32(0x47c34f80ull));
s4(u32(r4(R+4)),r4(U+0));
}
B402cea:{NFSU2_TR(0x402cea);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B402ceb:{NFSU2_TR(0x402ceb);
__builtin_memmove((R+4),(R+24),4);
}
B402ced:{NFSU2_TR(0x402ced);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x402cf2ull));
TAIL_STATIC(0x5ec250u,5ec);
}
B402cf2:L402cf2:{c.instructions+=15;NFSU2_TR(0x402cf2);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B402cf6:{NFSU2_TR(0x402cf6);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B402cfa:{NFSU2_TR(0x402cfa);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B402cfd:{NFSU2_TR(0x402cfd);
u8 U[4];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B402d01:{NFSU2_TR(0x402d01);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B402d02:{NFSU2_TR(0x402d02);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B402d08:{NFSU2_TR(0x402d08);
u8 U[4];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B402d0c:{NFSU2_TR(0x402d0c);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B402d0d:{NFSU2_TR(0x402d0d);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B402d11:{NFSU2_TR(0x402d11);
__builtin_memmove((R+4),(R+28),4);
}
B402d13:{NFSU2_TR(0x402d13);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B402d17:{NFSU2_TR(0x402d17);
{u32 ea_=u32(r4(R+16)+u32(72u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B402d1b:{NFSU2_TR(0x402d1b);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B402d21:{NFSU2_TR(0x402d21);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B402d25:{NFSU2_TR(0x402d25);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x402d2aull));
TAIL_STATIC(0x614840u,614);
}
B402d2a:L402d2a:{c.instructions+=15;NFSU2_TR(0x402d2a);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B402d2e:{NFSU2_TR(0x402d2e);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B402d31:{NFSU2_TR(0x402d31);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B402d35:{NFSU2_TR(0x402d35);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B402d38:{NFSU2_TR(0x402d38);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B402d3a:{NFSU2_TR(0x402d3a);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+12),(U+4),2);
}
B402d41:{NFSU2_TR(0x402d41);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B402d47:{NFSU2_TR(0x402d47);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B402d48:{NFSU2_TR(0x402d48);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B402d49:{NFSU2_TR(0x402d49);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B402d4d:{NFSU2_TR(0x402d4d);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B402d51:{NFSU2_TR(0x402d51);
{u32 ea_=u32(r4(R+16)+u32(72u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B402d55:{NFSU2_TR(0x402d55);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B402d5b:{NFSU2_TR(0x402d5b);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B402d5f:{NFSU2_TR(0x402d5f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x402d64ull));
TAIL_STATIC(0x43e6d0u,43e);
}
B402d64:L402d64:{c.instructions+=3;NFSU2_TR(0x402d64);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+12))));
}
B402d66:{NFSU2_TR(0x402d66);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B402d67:{NFSU2_TR(0x402d67);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x402d6cull));
TAIL_STATIC(0x43c370u,43c);
}
B402d6c:L402d6c:{c.instructions+=11;NFSU2_TR(0x402d6c);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B402d6e:{NFSU2_TR(0x402d6e);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B402d71:{NFSU2_TR(0x402d71);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B402d73:{NFSU2_TR(0x402d73);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B402d76:{NFSU2_TR(0x402d76);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B402d77:{NFSU2_TR(0x402d77);
u8 U[4];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B402d7b:{NFSU2_TR(0x402d7b);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B402d7f:{NFSU2_TR(0x402d7f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B402d80:{NFSU2_TR(0x402d80);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((R+4),(U+0),4);
}
B402d83:{NFSU2_TR(0x402d83);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B402d85:{NFSU2_TR(0x402d85);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x402d8aull));
TAIL_STATIC(0x591fc0u,591);
}
B402d8a:L402d8a:{c.instructions+=6;NFSU2_TR(0x402d8a);
{u32 ea_=u32(u32(7881568u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B402d90:{NFSU2_TR(0x402d90);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B402d94:{NFSU2_TR(0x402d94);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B402d9a:{NFSU2_TR(0x402d9a);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B402d9c:{NFSU2_TR(0x402d9c);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B402d9f:{NFSU2_TR(0x402d9f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L402df6;}}
}
B402da1:L402da1:{c.instructions+=13;NFSU2_TR(0x402da1);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B402da5:{NFSU2_TR(0x402da5);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B402da7:{NFSU2_TR(0x402da7);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B402dad:{NFSU2_TR(0x402dad);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B402db1:{NFSU2_TR(0x402db1);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B402db5:{NFSU2_TR(0x402db5);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B402db9:{NFSU2_TR(0x402db9);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B402dbd:{NFSU2_TR(0x402dbd);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B402dbf:{NFSU2_TR(0x402dbf);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B402dc3:{NFSU2_TR(0x402dc3);
__asm__ volatile(".byte 0xde,0xd9":::"memory");
}
B402dc5:{NFSU2_TR(0x402dc5);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B402dc7:{NFSU2_TR(0x402dc7);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B402dca:{NFSU2_TR(0x402dca);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L402df6;}}
}
B402dcc:L402dcc:{c.instructions+=8;NFSU2_TR(0x402dcc);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B402dce:{NFSU2_TR(0x402dce);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B402dd2:{NFSU2_TR(0x402dd2);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B402dd6:{NFSU2_TR(0x402dd6);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B402dda:{NFSU2_TR(0x402dda);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B402de0:{NFSU2_TR(0x402de0);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B402de2:{NFSU2_TR(0x402de2);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B402de5:{NFSU2_TR(0x402de5);
if(r1(R+518)){{goto L402def;}}
}
B402de7:L402de7:{c.instructions+=2;NFSU2_TR(0x402de7);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B402de9:{NFSU2_TR(0x402de9);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B402def:L402def:{c.instructions+=3;NFSU2_TR(0x402def);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B402df2:{NFSU2_TR(0x402df2);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B402df4:{NFSU2_TR(0x402df4);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B402df6:L402df6:{c.instructions+=5;NFSU2_TR(0x402df6);
{u32 ea_=u32(r4(R+24)+u32(1072u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B402dfc:{NFSU2_TR(0x402dfc);
{u32 ea_=u32(u32(7881560u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B402e02:{NFSU2_TR(0x402e02);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B402e04:{NFSU2_TR(0x402e04);
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
B402e07:{NFSU2_TR(0x402e07);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L402ebd;}}
}
B402e0d:L402e0d:{c.instructions+=48;NFSU2_TR(0x402e0d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B402e10:{NFSU2_TR(0x402e10);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B402e13:{NFSU2_TR(0x402e13);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x74ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B402e16:{NFSU2_TR(0x402e16);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B402e1a:{NFSU2_TR(0x402e1a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+0),(U+0),4);
}
B402e1c:{NFSU2_TR(0x402e1c);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B402e20:{NFSU2_TR(0x402e20);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B402e23:{NFSU2_TR(0x402e23);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B402e27:{NFSU2_TR(0x402e27);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B402e2b:{NFSU2_TR(0x402e2b);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B402e2f:{NFSU2_TR(0x402e2f);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B402e33:{NFSU2_TR(0x402e33);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B402e37:{NFSU2_TR(0x402e37);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B402e3b:{NFSU2_TR(0x402e3b);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B402e3f:{NFSU2_TR(0x402e3f);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B402e41:{NFSU2_TR(0x402e41);
__asm__ volatile(".byte 0xd9,0xca":::"memory");
}
B402e43:{NFSU2_TR(0x402e43);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B402e47:{NFSU2_TR(0x402e47);
__asm__ volatile(".byte 0xde,0xc2":::"memory");
}
B402e49:{NFSU2_TR(0x402e49);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B402e4d:{NFSU2_TR(0x402e4d);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B402e51:{NFSU2_TR(0x402e51);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B402e55:{NFSU2_TR(0x402e55);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B402e59:{NFSU2_TR(0x402e59);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B402e5b:{NFSU2_TR(0x402e5b);
__asm__ volatile(".byte 0xde,0xfa":::"memory");
}
B402e5d:{NFSU2_TR(0x402e5d);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B402e5f:{NFSU2_TR(0x402e5f);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B402e63:{NFSU2_TR(0x402e63);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B402e65:{NFSU2_TR(0x402e65);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B402e69:{NFSU2_TR(0x402e69);
__asm__ volatile(".byte 0xd8,0xca":::"memory");
}
B402e6b:{NFSU2_TR(0x402e6b);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B402e6d:{NFSU2_TR(0x402e6d);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B402e6f:{NFSU2_TR(0x402e6f);
__asm__ volatile(".byte 0xd9,0xc2":::"memory");
}
B402e71:{NFSU2_TR(0x402e71);
__asm__ volatile(".byte 0xd8,0xcb":::"memory");
}
B402e73:{NFSU2_TR(0x402e73);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B402e75:{NFSU2_TR(0x402e75);
__asm__ volatile(".byte 0xd9,0xfa":::"memory");
}
B402e77:{NFSU2_TR(0x402e77);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B402e7b:{NFSU2_TR(0x402e7b);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B402e7f:{NFSU2_TR(0x402e7f);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B402e81:{NFSU2_TR(0x402e81);
__asm__ volatile(".byte 0xd9,0xca":::"memory");
}
B402e83:{NFSU2_TR(0x402e83);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B402e87:{NFSU2_TR(0x402e87);
__asm__ volatile(".byte 0xde,0xc2":::"memory");
}
B402e89:{NFSU2_TR(0x402e89);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B402e8b:{NFSU2_TR(0x402e8b);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B402e91:{NFSU2_TR(0x402e91);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B402e93:{NFSU2_TR(0x402e93);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B402e95:{NFSU2_TR(0x402e95);
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
B402e98:{NFSU2_TR(0x402e98);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B402e9a:{NFSU2_TR(0x402e9a);
if(r1(R+514)){{goto L402ebd;}}
}
B402e9c:L402e9c:{c.instructions+=5;NFSU2_TR(0x402e9c);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B402ea0:{NFSU2_TR(0x402ea0);
{u32 ea_=u32(u32(7881564u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B402ea6:{NFSU2_TR(0x402ea6);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B402ea8:{NFSU2_TR(0x402ea8);
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
B402eab:{NFSU2_TR(0x402eab);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L402ebd;}}
}
B402ead:L402ead:{c.instructions+=9;NFSU2_TR(0x402ead);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B402eb1:{NFSU2_TR(0x402eb1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B402eb4:{NFSU2_TR(0x402eb4);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B402eb6:{NFSU2_TR(0x402eb6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B402eb7:{NFSU2_TR(0x402eb7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B402eb8:{NFSU2_TR(0x402eb8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B402eb9:{NFSU2_TR(0x402eb9);
__builtin_memmove((R+16),(R+20),4);
}
B402ebb:{NFSU2_TR(0x402ebb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B402ebc:{NFSU2_TR(0x402ebc);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B402ebd:L402ebd:{c.instructions+=7;NFSU2_TR(0x402ebd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B402ebe:{NFSU2_TR(0x402ebe);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B402ec0:{NFSU2_TR(0x402ec0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B402ec1:{NFSU2_TR(0x402ec1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B402ec2:{NFSU2_TR(0x402ec2);
__builtin_memmove((R+16),(R+20),4);
}
B402ec4:{NFSU2_TR(0x402ec4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B402ec5:{NFSU2_TR(0x402ec5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B402ed0:L402ed0:{c.instructions+=24;NFSU2_TR(0x402ed0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x28ull))));
}
B402ed3:{NFSU2_TR(0x402ed3);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B402ed7:{NFSU2_TR(0x402ed7);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B402edb:{NFSU2_TR(0x402edb);
u8 U[4];
w4(U+0,u32(0xbf800000ull));
s4(u32(r4(R+0)),r4(U+0));
}
B402ee1:{NFSU2_TR(0x402ee1);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x308ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(s32(s8(r1(U+4)))));
}
B402ee8:{NFSU2_TR(0x402ee8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B402eeb:{NFSU2_TR(0x402eeb);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B402eee:{NFSU2_TR(0x402eee);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B402eef:{NFSU2_TR(0x402eef);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+20),(U+0),4);
}
B402ef1:{NFSU2_TR(0x402ef1);
u8 U[12];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B402ef5:{NFSU2_TR(0x402ef5);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B402ef6:{NFSU2_TR(0x402ef6);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B402ef9:{NFSU2_TR(0x402ef9);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B402efa:{NFSU2_TR(0x402efa);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B402efe:{NFSU2_TR(0x402efe);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B402f01:{NFSU2_TR(0x402f01);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B402f04:{NFSU2_TR(0x402f04);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xffffffffull))));
__builtin_memmove((R+28),(U+0),4);
}
B402f07:{NFSU2_TR(0x402f07);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B402f09:{NFSU2_TR(0x402f09);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B402f0d:{NFSU2_TR(0x402f0d);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B402f11:{NFSU2_TR(0x402f11);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B402f19:{NFSU2_TR(0x402f19);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
w4(U+4,u32(0x47c34f80ull));
s4(u32(r4(U+0)),r4(U+4));
}
B402f21:{NFSU2_TR(0x402f21);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
w4(U+4,u32(0x47c34f80ull));
s4(u32(r4(U+0)),r4(U+4));
}
B402f29:{NFSU2_TR(0x402f29);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x4030f7u,403);}
}
B402f2f:L402f2f:{c.instructions+=11;NFSU2_TR(0x402f2f);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B402f32:{NFSU2_TR(0x402f32);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B402f35:{NFSU2_TR(0x402f35);
u8 U[12];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+24),(U+8),4);
}
B402f39:{NFSU2_TR(0x402f39);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B402f3a:{NFSU2_TR(0x402f3a);
__builtin_memmove((R+12),(R+12),4);
}
B402f40:{NFSU2_TR(0x402f40);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B402f42:{NFSU2_TR(0x402f42);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfffffff0ull))));
__builtin_memmove((R+12),(U+0),4);
}
B402f45:{NFSU2_TR(0x402f45);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B402f49:{NFSU2_TR(0x402f49);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B402f4b:{NFSU2_TR(0x402f4b);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B402f4e:{NFSU2_TR(0x402f4e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x4030c5u,403);}
}
B402f54:L402f54:{c.instructions+=4;NFSU2_TR(0x402f54);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B402f58:{NFSU2_TR(0x402f58);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B402f59:{NFSU2_TR(0x402f59);
__builtin_memmove((R+4),(R+12),4);
}
B402f5b:{NFSU2_TR(0x402f5b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x402f60ull));
TAIL_STATIC(0x60bfa0u,60b);
}
B402f60:L402f60:{c.instructions+=9;NFSU2_TR(0x402f60);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B402f64:{NFSU2_TR(0x402f64);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B402f66:{NFSU2_TR(0x402f66);
{u32 ea_=u32(r4(R+24)+u32(4294967288u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B402f69:{NFSU2_TR(0x402f69);
{u32 ea_=u32(u32(7878264u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B402f6f:{NFSU2_TR(0x402f6f);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B402f73:{NFSU2_TR(0x402f73);
__asm__ volatile(".byte 0xde,0xd9":::"memory");
}
B402f75:{NFSU2_TR(0x402f75);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B402f77:{NFSU2_TR(0x402f77);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B402f7a:{NFSU2_TR(0x402f7a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x4030c5u,403);}
}
B402f80:L402f80:{c.instructions+=8;NFSU2_TR(0x402f80);
{u32 ea_=u32(r4(R+24)+u32(4294967292u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B402f83:{NFSU2_TR(0x402f83);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B402f85:{NFSU2_TR(0x402f85);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B402f89:{NFSU2_TR(0x402f89);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B402f8d:{NFSU2_TR(0x402f8d);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B402f93:{NFSU2_TR(0x402f93);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B402f95:{NFSU2_TR(0x402f95);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B402f98:{NFSU2_TR(0x402f98);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L402fa0;}}
}
B402f9a:L402f9a:{c.instructions+=2;NFSU2_TR(0x402f9a);
{u32 ea_=u32(r4(R+16)+u32(72u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B402f9e:{NFSU2_TR(0x402f9e);
{goto L402faa;}
}
B402fa0:L402fa0:{c.instructions+=2;NFSU2_TR(0x402fa0);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B402fa2:{NFSU2_TR(0x402fa2);
u8 U[8];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B402faa:L402faa:{c.instructions+=5;NFSU2_TR(0x402faa);
{u32 ea_=u32(r4(R+24)+u32(4294967284u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B402fad:{NFSU2_TR(0x402fad);
{u32 ea_=u32(u32(7881572u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B402fb3:{NFSU2_TR(0x402fb3);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B402fb5:{NFSU2_TR(0x402fb5);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B402fb8:{NFSU2_TR(0x402fb8);
if(r1(R+514)){{goto L402fc6;}}
}
B402fba:L402fba:{c.instructions+=4;NFSU2_TR(0x402fba);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B402fbc:{NFSU2_TR(0x402fbc);
{u32 ea_=u32(r4(R+16)+u32(72u));__asm__ volatile(".byte 0xd8,0x38"::"a"(ea_):"memory");}
}
B402fc0:{NFSU2_TR(0x402fc0);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B402fc4:{NFSU2_TR(0x402fc4);
{goto L402fd0;}
}
B402fc6:L402fc6:{c.instructions+=2;NFSU2_TR(0x402fc6);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B402fc8:{NFSU2_TR(0x402fc8);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0x47c34f80ull));
s4(u32(r4(U+0)),r4(U+4));
}
B402fd0:L402fd0:{c.instructions+=11;NFSU2_TR(0x402fd0);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(s32(s16(r2(U+4)))));
}
B402fd4:{NFSU2_TR(0x402fd4);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B402fd8:{NFSU2_TR(0x402fd8);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B402fd9:{NFSU2_TR(0x402fd9);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x89e970ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B402fe0:{NFSU2_TR(0x402fe0);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B402fe4:{NFSU2_TR(0x402fe4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B402fe5:{NFSU2_TR(0x402fe5);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B402fe6:{NFSU2_TR(0x402fe6);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B402fe7:{NFSU2_TR(0x402fe7);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
w4(U+4,u32(0x47c34f80ull));
s4(u32(r4(U+0)),r4(U+4));
}
B402fef:{NFSU2_TR(0x402fef);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
w4(U+4,u32(0x47c34f80ull));
s4(u32(r4(U+0)),r4(U+4));
}
B402ff7:{NFSU2_TR(0x402ff7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x402ffcull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x402cc0u);}goto L402cc0;}
}
B402ffc:L402ffc:{c.instructions+=2;NFSU2_TR(0x402ffc);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B402fff:{NFSU2_TR(0x402fff);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
TAIL_STATIC(0x403003u,403);
}
XIT:NFSU2_TR_EXIT(0x402,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
