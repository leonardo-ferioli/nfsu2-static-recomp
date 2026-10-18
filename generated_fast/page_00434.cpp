#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_401(u8* __restrict R,Cpu& c);
u32 body_431(u8* __restrict R,Cpu& c);
u32 body_433(u8* __restrict R,Cpu& c);
u32 body_435(u8* __restrict R,Cpu& c);
u32 body_43c(u8* __restrict R,Cpu& c);
u32 body_43d(u8* __restrict R,Cpu& c);
u32 body_440(u8* __restrict R,Cpu& c);
u32 body_502(u8* __restrict R,Cpu& c);
u32 body_575(u8* __restrict R,Cpu& c);
u32 body_6d7(u8* __restrict R,Cpu& c);
u32 body_6d8(u8* __restrict R,Cpu& c);
u32 body_6e2(u8* __restrict R,Cpu& c);
u32 body_6e3(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x434,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x434,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_434(u8* __restrict R,Cpu& c);
u32 page_434(Cpu& c){return body_434(c.regs.data(),c);}
__attribute__((noinline)) u32 body_434(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x434003:goto L434003;
case 0x434004:c.instructions+=2;goto B434004;
case 0x434008:c.instructions+=1;goto B434008;
case 0x43400d:goto L43400d;
case 0x43400e:goto L43400e;
case 0x434012:c.instructions+=2;goto B434012;
case 0x434014:c.instructions+=1;goto B434014;
case 0x434016:goto L434016;
case 0x43401c:c.instructions+=4;goto B43401c;
case 0x43401d:c.instructions+=3;goto B43401d;
case 0x434021:c.instructions+=2;goto B434021;
case 0x434022:c.instructions+=1;goto B434022;
case 0x434027:goto L434027;
case 0x43402a:c.instructions+=1;goto B43402a;
case 0x43402b:goto L43402b;
case 0x43402e:c.instructions+=1;goto B43402e;
case 0x434030:goto L434030;
case 0x434036:c.instructions+=3;goto B434036;
case 0x434037:c.instructions+=2;goto B434037;
case 0x43403b:c.instructions+=1;goto B43403b;
case 0x434040:goto L434040;
case 0x434041:goto L434041;
case 0x434044:c.instructions+=1;goto B434044;
case 0x434046:goto L434046;
case 0x43404c:c.instructions+=3;goto B43404c;
case 0x43404d:c.instructions+=2;goto B43404d;
case 0x434051:c.instructions+=1;goto B434051;
case 0x434056:goto L434056;
case 0x434057:goto L434057;
case 0x43405a:c.instructions+=1;goto B43405a;
case 0x43405c:goto L43405c;
case 0x434062:c.instructions+=3;goto B434062;
case 0x434063:c.instructions+=2;goto B434063;
case 0x434067:c.instructions+=1;goto B434067;
case 0x43406c:goto L43406c;
case 0x43406d:goto L43406d;
case 0x434070:c.instructions+=1;goto B434070;
case 0x434072:goto L434072;
case 0x434078:c.instructions+=3;goto B434078;
case 0x434079:c.instructions+=2;goto B434079;
case 0x43407d:c.instructions+=1;goto B43407d;
case 0x434082:goto L434082;
case 0x434083:goto L434083;
case 0x434086:c.instructions+=1;goto B434086;
case 0x434088:goto L434088;
case 0x43408e:c.instructions+=3;goto B43408e;
case 0x43408f:c.instructions+=2;goto B43408f;
case 0x434093:c.instructions+=1;goto B434093;
case 0x434098:goto L434098;
case 0x434099:goto L434099;
case 0x43409c:c.instructions+=1;goto B43409c;
case 0x4340a2:goto L4340a2;
case 0x4340a8:c.instructions+=3;goto B4340a8;
case 0x4340a9:c.instructions+=2;goto B4340a9;
case 0x4340ad:c.instructions+=1;goto B4340ad;
case 0x4340b2:goto L4340b2;
case 0x4340b3:goto L4340b3;
case 0x4340b7:c.instructions+=2;goto B4340b7;
case 0x4340b9:c.instructions+=1;goto B4340b9;
case 0x4340bb:goto L4340bb;
case 0x4340bf:c.instructions+=4;goto B4340bf;
case 0x4340c5:c.instructions+=3;goto B4340c5;
case 0x4340c6:c.instructions+=2;goto B4340c6;
case 0x4340c7:c.instructions+=1;goto B4340c7;
case 0x4340cc:goto L4340cc;
case 0x4340cf:c.instructions+=1;goto B4340cf;
case 0x4340d0:goto L4340d0;
case 0x4340d3:c.instructions+=1;goto B4340d3;
case 0x4340d5:goto L4340d5;
case 0x4340db:c.instructions+=3;goto B4340db;
case 0x4340dc:c.instructions+=2;goto B4340dc;
case 0x4340e0:c.instructions+=1;goto B4340e0;
case 0x4340e5:goto L4340e5;
case 0x4340e6:goto L4340e6;
case 0x4340e9:c.instructions+=1;goto B4340e9;
case 0x4340eb:goto L4340eb;
case 0x4340f1:c.instructions+=3;goto B4340f1;
case 0x4340f2:c.instructions+=2;goto B4340f2;
case 0x4340f6:c.instructions+=1;goto B4340f6;
case 0x4340fb:goto L4340fb;
case 0x4340fc:goto L4340fc;
case 0x4340ff:c.instructions+=1;goto B4340ff;
case 0x434101:goto L434101;
case 0x434107:c.instructions+=3;goto B434107;
case 0x434108:c.instructions+=2;goto B434108;
case 0x43410c:c.instructions+=1;goto B43410c;
case 0x434111:goto L434111;
case 0x434112:goto L434112;
case 0x434115:c.instructions+=1;goto B434115;
case 0x434117:goto L434117;
case 0x43411d:c.instructions+=3;goto B43411d;
case 0x43411e:c.instructions+=2;goto B43411e;
case 0x434122:c.instructions+=1;goto B434122;
case 0x434127:goto L434127;
case 0x434128:goto L434128;
case 0x43412b:c.instructions+=1;goto B43412b;
case 0x43412d:goto L43412d;
case 0x434133:c.instructions+=3;goto B434133;
case 0x434134:c.instructions+=2;goto B434134;
case 0x434138:c.instructions+=1;goto B434138;
case 0x43413d:goto L43413d;
case 0x43413e:goto L43413e;
case 0x434141:c.instructions+=1;goto B434141;
case 0x434143:goto L434143;
case 0x434149:c.instructions+=3;goto B434149;
case 0x43414a:c.instructions+=2;goto B43414a;
case 0x43414e:c.instructions+=1;goto B43414e;
case 0x434153:goto L434153;
case 0x434154:goto L434154;
case 0x434158:c.instructions+=2;goto B434158;
case 0x43415a:c.instructions+=1;goto B43415a;
case 0x43415c:goto L43415c;
case 0x434160:c.instructions+=4;goto B434160;
case 0x434166:c.instructions+=3;goto B434166;
case 0x434167:c.instructions+=2;goto B434167;
case 0x434168:c.instructions+=1;goto B434168;
case 0x43416d:goto L43416d;
case 0x434170:goto L434170;
case 0x434190:goto L434190;
case 0x434191:c.instructions+=9;goto B434191;
case 0x434193:c.instructions+=8;goto B434193;
case 0x434196:c.instructions+=7;goto B434196;
case 0x434199:c.instructions+=6;goto B434199;
case 0x43419a:c.instructions+=5;goto B43419a;
case 0x43419b:c.instructions+=4;goto B43419b;
case 0x4341a1:c.instructions+=3;goto B4341a1;
case 0x4341a2:c.instructions+=2;goto B4341a2;
case 0x4341a7:c.instructions+=1;goto B4341a7;
case 0x4341ac:goto L4341ac;
case 0x4341ae:c.instructions+=1;goto B4341ae;
case 0x4341b0:goto L4341b0;
case 0x4341b3:c.instructions+=3;goto B4341b3;
case 0x4341b6:c.instructions+=2;goto B4341b6;
case 0x4341b9:c.instructions+=1;goto B4341b9;
case 0x4341bb:goto L4341bb;
case 0x4341bd:c.instructions+=2;goto B4341bd;
case 0x4341bf:c.instructions+=1;goto B4341bf;
case 0x4341c1:goto L4341c1;
case 0x4341c3:goto L4341c3;
case 0x4341c6:goto L4341c6;
case 0x4341c7:c.instructions+=1;goto B4341c7;
case 0x4341cc:goto L4341cc;
case 0x4341cf:c.instructions+=4;goto B4341cf;
case 0x4341d2:c.instructions+=3;goto B4341d2;
case 0x4341d5:c.instructions+=2;goto B4341d5;
case 0x4341d7:c.instructions+=1;goto B4341d7;
case 0x4341d9:goto L4341d9;
case 0x4341e0:goto L4341e0;
case 0x4341e3:c.instructions+=1;goto B4341e3;
case 0x4341e5:goto L4341e5;
case 0x4341e8:c.instructions+=2;goto B4341e8;
case 0x4341eb:c.instructions+=1;goto B4341eb;
case 0x4341ed:goto L4341ed;
case 0x4341ef:c.instructions+=2;goto B4341ef;
case 0x4341f1:c.instructions+=1;goto B4341f1;
case 0x4341f3:goto L4341f3;
case 0x4341f6:c.instructions+=1;goto B4341f6;
case 0x4341f8:goto L4341f8;
case 0x4341fa:c.instructions+=1;goto B4341fa;
case 0x4341fc:goto L4341fc;
case 0x4341ff:c.instructions+=2;goto B4341ff;
case 0x434202:c.instructions+=1;goto B434202;
case 0x434204:goto L434204;
case 0x434207:c.instructions+=1;goto B434207;
case 0x434209:goto L434209;
case 0x43420e:c.instructions+=1;goto B43420e;
case 0x434210:goto L434210;
case 0x434212:c.instructions+=1;goto B434212;
case 0x434214:goto L434214;
case 0x434216:c.instructions+=2;goto B434216;
case 0x43421b:c.instructions+=1;goto B43421b;
case 0x43421d:goto L43421d;
case 0x434220:c.instructions+=2;goto B434220;
case 0x434223:c.instructions+=1;goto B434223;
case 0x434225:goto L434225;
case 0x434228:c.instructions+=1;goto B434228;
case 0x43422a:goto L43422a;
case 0x43422f:c.instructions+=1;goto B43422f;
case 0x434231:goto L434231;
case 0x434236:goto L434236;
case 0x434239:c.instructions+=5;goto B434239;
case 0x43423c:c.instructions+=4;goto B43423c;
case 0x434240:c.instructions+=3;goto B434240;
case 0x434244:c.instructions+=2;goto B434244;
case 0x434246:c.instructions+=1;goto B434246;
case 0x434248:goto L434248;
case 0x43424a:c.instructions+=4;goto B43424a;
case 0x43424c:c.instructions+=3;goto B43424c;
case 0x43424f:c.instructions+=2;goto B43424f;
case 0x434252:c.instructions+=1;goto B434252;
case 0x434254:goto L434254;
case 0x434258:c.instructions+=2;goto B434258;
case 0x43425a:c.instructions+=1;goto B43425a;
case 0x43425c:goto L43425c;
case 0x43425e:c.instructions+=3;goto B43425e;
case 0x434261:c.instructions+=2;goto B434261;
case 0x434264:c.instructions+=1;goto B434264;
case 0x434267:goto L434267;
case 0x43426b:goto L43426b;
case 0x43426f:c.instructions+=4;goto B43426f;
case 0x434270:c.instructions+=3;goto B434270;
case 0x434271:c.instructions+=2;goto B434271;
case 0x434273:c.instructions+=1;goto B434273;
case 0x434278:goto L434278;
case 0x43427e:c.instructions+=7;goto B43427e;
case 0x434280:c.instructions+=6;goto B434280;
case 0x434284:c.instructions+=5;goto B434284;
case 0x434286:c.instructions+=4;goto B434286;
case 0x43428c:c.instructions+=3;goto B43428c;
case 0x43428f:c.instructions+=2;goto B43428f;
case 0x434293:c.instructions+=1;goto B434293;
case 0x434295:goto L434295;
case 0x434299:c.instructions+=2;goto B434299;
case 0x43429b:c.instructions+=1;goto B43429b;
case 0x43429d:goto L43429d;
case 0x4342a0:c.instructions+=8;goto B4342a0;
case 0x4342a3:c.instructions+=7;goto B4342a3;
case 0x4342a6:c.instructions+=6;goto B4342a6;
case 0x4342a9:c.instructions+=5;goto B4342a9;
case 0x4342ac:c.instructions+=4;goto B4342ac;
case 0x4342af:c.instructions+=3;goto B4342af;
case 0x4342b5:c.instructions+=2;goto B4342b5;
case 0x4342b9:c.instructions+=1;goto B4342b9;
case 0x4342bb:goto L4342bb;
case 0x4342bd:c.instructions+=12;goto B4342bd;
case 0x4342c0:c.instructions+=11;goto B4342c0;
case 0x4342c6:c.instructions+=10;goto B4342c6;
case 0x4342c9:c.instructions+=9;goto B4342c9;
case 0x4342cc:c.instructions+=8;goto B4342cc;
case 0x4342d2:c.instructions+=7;goto B4342d2;
case 0x4342d5:c.instructions+=6;goto B4342d5;
case 0x4342db:c.instructions+=5;goto B4342db;
case 0x4342de:c.instructions+=4;goto B4342de;
case 0x4342e1:c.instructions+=3;goto B4342e1;
case 0x4342e4:c.instructions+=2;goto B4342e4;
case 0x4342e8:c.instructions+=1;goto B4342e8;
case 0x4342ea:goto L4342ea;
case 0x4342ec:c.instructions+=1;goto B4342ec;
case 0x4342ee:goto L4342ee;
case 0x4342f1:c.instructions+=2;goto B4342f1;
case 0x4342f7:c.instructions+=1;goto B4342f7;
case 0x4342f9:goto L4342f9;
case 0x4342fb:c.instructions+=1;goto B4342fb;
case 0x4342fd:goto L4342fd;
case 0x434300:c.instructions+=2;goto B434300;
case 0x434306:c.instructions+=1;goto B434306;
case 0x434308:goto L434308;
case 0x43430e:goto L43430e;
case 0x434311:goto L434311;
case 0x434314:c.instructions+=3;goto B434314;
case 0x434318:c.instructions+=2;goto B434318;
case 0x43431b:c.instructions+=1;goto B43431b;
case 0x434321:goto L434321;
case 0x434328:goto L434328;
case 0x43432a:c.instructions+=2;goto B43432a;
case 0x434330:c.instructions+=1;goto B434330;
case 0x434332:goto L434332;
case 0x434334:c.instructions+=2;goto B434334;
case 0x434338:c.instructions+=1;goto B434338;
case 0x43433a:goto L43433a;
case 0x43433c:c.instructions+=5;goto B43433c;
case 0x434340:c.instructions+=4;goto B434340;
case 0x434344:c.instructions+=3;goto B434344;
case 0x434346:c.instructions+=2;goto B434346;
case 0x434349:c.instructions+=1;goto B434349;
case 0x43434b:goto L43434b;
case 0x43434f:c.instructions+=1;goto B43434f;
case 0x434351:goto L434351;
case 0x434355:goto L434355;
case 0x434359:c.instructions+=4;goto B434359;
case 0x43435d:c.instructions+=3;goto B43435d;
case 0x43435f:c.instructions+=2;goto B43435f;
case 0x434362:c.instructions+=1;goto B434362;
case 0x434364:goto L434364;
case 0x43436b:c.instructions+=1;goto B43436b;
case 0x43436d:goto L43436d;
case 0x43436f:c.instructions+=5;goto B43436f;
case 0x434373:c.instructions+=4;goto B434373;
case 0x434377:c.instructions+=3;goto B434377;
case 0x434379:c.instructions+=2;goto B434379;
case 0x43437c:c.instructions+=1;goto B43437c;
case 0x43437e:goto L43437e;
case 0x434382:c.instructions+=1;goto B434382;
case 0x434384:goto L434384;
case 0x434388:goto L434388;
case 0x43438c:c.instructions+=4;goto B43438c;
case 0x434390:c.instructions+=3;goto B434390;
case 0x434392:c.instructions+=2;goto B434392;
case 0x434395:c.instructions+=1;goto B434395;
case 0x434397:goto L434397;
case 0x43439e:goto L43439e;
case 0x4343a2:goto L4343a2;
case 0x4343a5:c.instructions+=8;goto B4343a5;
case 0x4343ab:c.instructions+=7;goto B4343ab;
case 0x4343ae:c.instructions+=6;goto B4343ae;
case 0x4343b0:c.instructions+=5;goto B4343b0;
case 0x4343b2:c.instructions+=4;goto B4343b2;
case 0x4343b5:c.instructions+=3;goto B4343b5;
case 0x4343b8:c.instructions+=2;goto B4343b8;
case 0x4343ba:c.instructions+=1;goto B4343ba;
case 0x4343bf:goto L4343bf;
case 0x4343c2:c.instructions+=6;goto B4343c2;
case 0x4343c5:c.instructions+=5;goto B4343c5;
case 0x4343c8:c.instructions+=4;goto B4343c8;
case 0x4343cb:c.instructions+=3;goto B4343cb;
case 0x4343cc:c.instructions+=2;goto B4343cc;
case 0x4343cd:c.instructions+=1;goto B4343cd;
case 0x4343d2:goto L4343d2;
case 0x4343d5:c.instructions+=6;goto B4343d5;
case 0x4343d7:c.instructions+=5;goto B4343d7;
case 0x4343da:c.instructions+=4;goto B4343da;
case 0x4343e0:c.instructions+=3;goto B4343e0;
case 0x4343e2:c.instructions+=2;goto B4343e2;
case 0x4343e5:c.instructions+=1;goto B4343e5;
case 0x4343e7:goto L4343e7;
case 0x4343ea:c.instructions+=5;goto B4343ea;
case 0x4343ec:c.instructions+=4;goto B4343ec;
case 0x4343f2:c.instructions+=3;goto B4343f2;
case 0x4343f4:c.instructions+=2;goto B4343f4;
case 0x4343f7:c.instructions+=1;goto B4343f7;
case 0x4343f9:goto L4343f9;
case 0x4343fc:c.instructions+=5;goto B4343fc;
case 0x4343fe:c.instructions+=4;goto B4343fe;
case 0x434404:c.instructions+=3;goto B434404;
case 0x434406:c.instructions+=2;goto B434406;
case 0x434409:c.instructions+=1;goto B434409;
case 0x43440b:goto L43440b;
case 0x43440f:c.instructions+=8;goto B43440f;
case 0x434412:c.instructions+=7;goto B434412;
case 0x434413:c.instructions+=6;goto B434413;
case 0x434416:c.instructions+=5;goto B434416;
case 0x43441a:c.instructions+=4;goto B43441a;
case 0x43441b:c.instructions+=3;goto B43441b;
case 0x43441c:c.instructions+=2;goto B43441c;
case 0x43441d:c.instructions+=1;goto B43441d;
case 0x434422:goto L434422;
case 0x434426:c.instructions+=8;goto B434426;
case 0x43442a:c.instructions+=7;goto B43442a;
case 0x43442e:c.instructions+=6;goto B43442e;
case 0x434431:c.instructions+=5;goto B434431;
case 0x434435:c.instructions+=4;goto B434435;
case 0x434438:c.instructions+=3;goto B434438;
case 0x43443b:c.instructions+=2;goto B43443b;
case 0x43443e:c.instructions+=1;goto B43443e;
case 0x434441:goto L434441;
case 0x434442:c.instructions+=5;goto B434442;
case 0x434443:c.instructions+=4;goto B434443;
case 0x434444:c.instructions+=3;goto B434444;
case 0x434446:c.instructions+=2;goto B434446;
case 0x434447:c.instructions+=1;goto B434447;
case 0x434460:goto L434460;
case 0x434461:c.instructions+=9;goto B434461;
case 0x434463:c.instructions+=8;goto B434463;
case 0x434466:c.instructions+=7;goto B434466;
case 0x434469:c.instructions+=6;goto B434469;
case 0x43446a:c.instructions+=5;goto B43446a;
case 0x43446b:c.instructions+=4;goto B43446b;
case 0x43446c:c.instructions+=3;goto B43446c;
case 0x43446f:c.instructions+=2;goto B43446f;
case 0x434470:c.instructions+=1;goto B434470;
case 0x434475:goto L434475;
case 0x434478:c.instructions+=5;goto B434478;
case 0x43447b:c.instructions+=4;goto B43447b;
case 0x43447e:c.instructions+=3;goto B43447e;
case 0x434480:c.instructions+=2;goto B434480;
case 0x434484:c.instructions+=1;goto B434484;
case 0x434486:goto L434486;
case 0x434489:c.instructions+=1;goto B434489;
case 0x43448b:goto L43448b;
case 0x43448e:c.instructions+=2;goto B43448e;
case 0x434491:c.instructions+=1;goto B434491;
case 0x434493:goto L434493;
case 0x434495:c.instructions+=2;goto B434495;
case 0x434497:c.instructions+=1;goto B434497;
case 0x434499:goto L434499;
case 0x43449c:c.instructions+=1;goto B43449c;
case 0x43449e:goto L43449e;
case 0x4344a0:c.instructions+=1;goto B4344a0;
case 0x4344a2:goto L4344a2;
case 0x4344a5:c.instructions+=2;goto B4344a5;
case 0x4344a8:c.instructions+=1;goto B4344a8;
case 0x4344aa:goto L4344aa;
case 0x4344ad:c.instructions+=1;goto B4344ad;
case 0x4344af:goto L4344af;
case 0x4344b1:c.instructions+=1;goto B4344b1;
case 0x4344b3:goto L4344b3;
case 0x4344b5:c.instructions+=1;goto B4344b5;
case 0x4344b7:goto L4344b7;
case 0x4344b9:c.instructions+=2;goto B4344b9;
case 0x4344bb:c.instructions+=1;goto B4344bb;
case 0x4344bd:goto L4344bd;
case 0x4344c0:c.instructions+=2;goto B4344c0;
case 0x4344c3:c.instructions+=1;goto B4344c3;
case 0x4344c5:goto L4344c5;
case 0x4344c8:c.instructions+=1;goto B4344c8;
case 0x4344ca:goto L4344ca;
case 0x4344cc:c.instructions+=1;goto B4344cc;
case 0x4344ce:goto L4344ce;
case 0x4344d0:goto L4344d0;
case 0x4344d2:c.instructions+=2;goto B4344d2;
case 0x4344d5:c.instructions+=1;goto B4344d5;
case 0x4344d7:goto L4344d7;
case 0x4344d9:c.instructions+=1;goto B4344d9;
case 0x4344db:goto L4344db;
case 0x4344dd:c.instructions+=1;goto B4344dd;
case 0x4344df:goto L4344df;
case 0x4344e1:goto L4344e1;
case 0x4344e3:c.instructions+=1;goto B4344e3;
case 0x4344e5:goto L4344e5;
case 0x4344e8:c.instructions+=1;goto B4344e8;
case 0x4344ea:goto L4344ea;
case 0x4344ec:c.instructions+=1;goto B4344ec;
case 0x4344ee:goto L4344ee;
case 0x4344f0:goto L4344f0;
case 0x4344f2:c.instructions+=2;goto B4344f2;
case 0x4344f5:c.instructions+=1;goto B4344f5;
case 0x4344f7:goto L4344f7;
case 0x4344f9:c.instructions+=4;goto B4344f9;
case 0x4344fb:c.instructions+=3;goto B4344fb;
case 0x4344fe:c.instructions+=2;goto B4344fe;
case 0x434500:c.instructions+=1;goto B434500;
case 0x434502:goto L434502;
case 0x434504:c.instructions+=1;goto B434504;
case 0x434506:goto L434506;
case 0x434508:c.instructions+=3;goto B434508;
case 0x43450a:c.instructions+=2;goto B43450a;
case 0x43450d:c.instructions+=1;goto B43450d;
case 0x43450f:goto L43450f;
case 0x434512:c.instructions+=4;goto B434512;
case 0x434516:c.instructions+=3;goto B434516;
case 0x434517:c.instructions+=2;goto B434517;
case 0x434518:c.instructions+=1;goto B434518;
case 0x43451d:goto L43451d;
case 0x434520:c.instructions+=2;goto B434520;
case 0x434521:c.instructions+=1;goto B434521;
case 0x434526:goto L434526;
case 0x434529:c.instructions+=6;goto B434529;
case 0x43452a:c.instructions+=5;goto B43452a;
case 0x43452e:c.instructions+=4;goto B43452e;
case 0x43452f:c.instructions+=3;goto B43452f;
case 0x434530:c.instructions+=2;goto B434530;
case 0x434531:c.instructions+=1;goto B434531;
case 0x434536:goto L434536;
case 0x43453a:c.instructions+=3;goto B43453a;
case 0x43453b:c.instructions+=2;goto B43453b;
case 0x43453c:c.instructions+=1;goto B43453c;
case 0x434541:goto L434541;
case 0x434544:c.instructions+=6;goto B434544;
case 0x434545:c.instructions+=5;goto B434545;
case 0x434546:c.instructions+=4;goto B434546;
case 0x434547:c.instructions+=3;goto B434547;
case 0x434549:c.instructions+=2;goto B434549;
case 0x43454a:c.instructions+=1;goto B43454a;
case 0x434550:goto L434550;
case 0x434551:c.instructions+=5;goto B434551;
case 0x434552:c.instructions+=4;goto B434552;
case 0x434558:c.instructions+=3;goto B434558;
case 0x434559:c.instructions+=2;goto B434559;
case 0x43455e:c.instructions+=1;goto B43455e;
case 0x434563:goto L434563;
case 0x434565:c.instructions+=2;goto B434565;
case 0x434569:c.instructions+=1;goto B434569;
case 0x43456b:goto L43456b;
case 0x434570:goto L434570;
case 0x434573:c.instructions+=2;goto B434573;
case 0x434576:c.instructions+=1;goto B434576;
case 0x434578:goto L434578;
case 0x43457a:c.instructions+=2;goto B43457a;
case 0x43457c:c.instructions+=1;goto B43457c;
case 0x43457e:goto L43457e;
case 0x43457f:c.instructions+=1;goto B43457f;
case 0x434584:goto L434584;
case 0x434588:c.instructions+=5;goto B434588;
case 0x43458b:c.instructions+=4;goto B43458b;
case 0x43458d:c.instructions+=3;goto B43458d;
case 0x434590:c.instructions+=2;goto B434590;
case 0x434592:c.instructions+=1;goto B434592;
case 0x434594:goto L434594;
case 0x434597:c.instructions+=1;goto B434597;
case 0x434599:goto L434599;
case 0x43459c:c.instructions+=1;goto B43459c;
case 0x43459e:goto L43459e;
case 0x4345a0:c.instructions+=2;goto B4345a0;
case 0x4345a2:c.instructions+=1;goto B4345a2;
case 0x4345a4:goto L4345a4;
case 0x4345a6:goto L4345a6;
case 0x4345a8:c.instructions+=1;goto B4345a8;
case 0x4345aa:goto L4345aa;
case 0x4345ad:c.instructions+=2;goto B4345ad;
case 0x4345b0:c.instructions+=1;goto B4345b0;
case 0x4345b2:goto L4345b2;
case 0x4345b5:c.instructions+=1;goto B4345b5;
case 0x4345b7:goto L4345b7;
case 0x4345b9:c.instructions+=1;goto B4345b9;
case 0x4345bb:goto L4345bb;
case 0x4345bd:c.instructions+=2;goto B4345bd;
case 0x4345bf:c.instructions+=1;goto B4345bf;
case 0x4345c1:goto L4345c1;
case 0x4345c4:c.instructions+=2;goto B4345c4;
case 0x4345c7:c.instructions+=1;goto B4345c7;
case 0x4345c9:goto L4345c9;
case 0x4345cc:c.instructions+=1;goto B4345cc;
case 0x4345ce:goto L4345ce;
case 0x4345d0:c.instructions+=1;goto B4345d0;
case 0x4345d2:goto L4345d2;
case 0x4345d4:goto L4345d4;
case 0x4345d6:c.instructions+=2;goto B4345d6;
case 0x4345d9:c.instructions+=1;goto B4345d9;
case 0x4345db:goto L4345db;
case 0x4345df:c.instructions+=8;goto B4345df;
case 0x4345e1:c.instructions+=7;goto B4345e1;
case 0x4345e3:c.instructions+=6;goto B4345e3;
case 0x4345e6:c.instructions+=5;goto B4345e6;
case 0x4345e7:c.instructions+=4;goto B4345e7;
case 0x4345e8:c.instructions+=3;goto B4345e8;
case 0x4345e9:c.instructions+=2;goto B4345e9;
case 0x4345ec:c.instructions+=1;goto B4345ec;
case 0x4345ed:goto L4345ed;
case 0x4345ef:c.instructions+=1;goto B4345ef;
case 0x4345f1:goto L4345f1;
case 0x4345f5:c.instructions+=4;goto B4345f5;
case 0x4345f7:c.instructions+=3;goto B4345f7;
case 0x4345fa:c.instructions+=2;goto B4345fa;
case 0x4345fd:c.instructions+=1;goto B4345fd;
case 0x434600:goto L434600;
case 0x434601:c.instructions+=3;goto B434601;
case 0x434602:c.instructions+=2;goto B434602;
case 0x434603:c.instructions+=1;goto B434603;
case 0x434610:goto L434610;
case 0x434611:c.instructions+=5;goto B434611;
case 0x434612:c.instructions+=4;goto B434612;
case 0x434618:c.instructions+=3;goto B434618;
case 0x434619:c.instructions+=2;goto B434619;
case 0x43461e:c.instructions+=1;goto B43461e;
case 0x434623:goto L434623;
case 0x434625:c.instructions+=2;goto B434625;
case 0x434629:c.instructions+=1;goto B434629;
case 0x43462b:goto L43462b;
case 0x434630:goto L434630;
case 0x434633:c.instructions+=2;goto B434633;
case 0x434636:c.instructions+=1;goto B434636;
case 0x434638:goto L434638;
case 0x43463a:c.instructions+=2;goto B43463a;
case 0x43463c:c.instructions+=1;goto B43463c;
case 0x43463e:goto L43463e;
case 0x43463f:c.instructions+=1;goto B43463f;
case 0x434644:goto L434644;
case 0x434648:c.instructions+=6;goto B434648;
case 0x43464a:c.instructions+=5;goto B43464a;
case 0x43464d:c.instructions+=4;goto B43464d;
case 0x434650:c.instructions+=3;goto B434650;
case 0x434653:c.instructions+=2;goto B434653;
case 0x434655:c.instructions+=1;goto B434655;
case 0x434657:goto L434657;
case 0x43465a:c.instructions+=1;goto B43465a;
case 0x43465c:goto L43465c;
case 0x43465f:c.instructions+=1;goto B43465f;
case 0x434661:goto L434661;
case 0x434663:c.instructions+=2;goto B434663;
case 0x434665:c.instructions+=1;goto B434665;
case 0x434667:goto L434667;
case 0x434669:goto L434669;
case 0x43466b:c.instructions+=2;goto B43466b;
case 0x43466c:c.instructions+=1;goto B43466c;
case 0x43466e:goto L43466e;
case 0x434671:c.instructions+=2;goto B434671;
case 0x434674:c.instructions+=1;goto B434674;
case 0x434676:goto L434676;
case 0x434679:c.instructions+=1;goto B434679;
case 0x43467b:goto L43467b;
case 0x43467d:c.instructions+=1;goto B43467d;
case 0x43467f:goto L43467f;
case 0x434681:c.instructions+=2;goto B434681;
case 0x434683:c.instructions+=1;goto B434683;
case 0x434685:goto L434685;
case 0x434688:c.instructions+=2;goto B434688;
case 0x43468b:c.instructions+=1;goto B43468b;
case 0x43468d:goto L43468d;
case 0x434690:c.instructions+=1;goto B434690;
case 0x434692:goto L434692;
case 0x434694:c.instructions+=1;goto B434694;
case 0x434696:goto L434696;
case 0x434698:goto L434698;
case 0x43469b:c.instructions+=3;goto B43469b;
case 0x43469d:c.instructions+=2;goto B43469d;
case 0x43469e:c.instructions+=1;goto B43469e;
case 0x4346a0:goto L4346a0;
case 0x4346a4:c.instructions+=5;goto B4346a4;
case 0x4346a6:c.instructions+=4;goto B4346a6;
case 0x4346a8:c.instructions+=3;goto B4346a8;
case 0x4346ab:c.instructions+=2;goto B4346ab;
case 0x4346ae:c.instructions+=1;goto B4346ae;
case 0x4346b0:goto L4346b0;
case 0x4346b2:c.instructions+=1;goto B4346b2;
case 0x4346b4:goto L4346b4;
case 0x4346b8:c.instructions+=4;goto B4346b8;
case 0x4346ba:c.instructions+=3;goto B4346ba;
case 0x4346bd:c.instructions+=2;goto B4346bd;
case 0x4346c0:c.instructions+=1;goto B4346c0;
case 0x4346c3:goto L4346c3;
case 0x4346c4:c.instructions+=2;goto B4346c4;
case 0x4346c5:c.instructions+=1;goto B4346c5;
case 0x4346ca:goto L4346ca;
case 0x4346cd:c.instructions+=5;goto B4346cd;
case 0x4346cf:c.instructions+=4;goto B4346cf;
case 0x4346d0:c.instructions+=3;goto B4346d0;
case 0x4346d1:c.instructions+=2;goto B4346d1;
case 0x4346d2:c.instructions+=1;goto B4346d2;
case 0x4346d4:goto L4346d4;
case 0x4346da:c.instructions+=10;goto B4346da;
case 0x4346e0:c.instructions+=9;goto B4346e0;
case 0x4346e3:c.instructions+=8;goto B4346e3;
case 0x4346e6:c.instructions+=7;goto B4346e6;
case 0x4346e8:c.instructions+=6;goto B4346e8;
case 0x4346eb:c.instructions+=5;goto B4346eb;
case 0x4346ee:c.instructions+=4;goto B4346ee;
case 0x4346f0:c.instructions+=3;goto B4346f0;
case 0x4346f2:c.instructions+=2;goto B4346f2;
case 0x4346f4:c.instructions+=1;goto B4346f4;
case 0x4346f5:goto L4346f5;
case 0x4346fb:c.instructions+=1;goto B4346fb;
case 0x434700:goto L434700;
case 0x434706:c.instructions+=1;goto B434706;
case 0x434710:goto L434710;
case 0x434711:c.instructions+=5;goto B434711;
case 0x434712:c.instructions+=4;goto B434712;
case 0x434714:c.instructions+=3;goto B434714;
case 0x434716:c.instructions+=2;goto B434716;
case 0x434718:c.instructions+=1;goto B434718;
case 0x43471e:goto L43471e;
case 0x434722:c.instructions+=3;goto B434722;
case 0x434725:c.instructions+=2;goto B434725;
case 0x434727:c.instructions+=1;goto B434727;
case 0x434729:goto L434729;
case 0x43472d:c.instructions+=5;goto B43472d;
case 0x43472f:c.instructions+=4;goto B43472f;
case 0x434730:c.instructions+=3;goto B434730;
case 0x434731:c.instructions+=2;goto B434731;
case 0x434733:c.instructions+=1;goto B434733;
case 0x434738:goto L434738;
case 0x43473a:goto L43473a;
case 0x43473c:goto L43473c;
case 0x43473e:c.instructions+=4;goto B43473e;
case 0x434741:c.instructions+=3;goto B434741;
case 0x434744:c.instructions+=2;goto B434744;
case 0x43474b:c.instructions+=1;goto B43474b;
case 0x434750:goto L434750;
case 0x434753:c.instructions+=2;goto B434753;
case 0x434755:c.instructions+=1;goto B434755;
case 0x434757:goto L434757;
case 0x43475d:c.instructions+=2;goto B43475d;
case 0x434764:c.instructions+=1;goto B434764;
case 0x434766:goto L434766;
case 0x434768:goto L434768;
case 0x43476b:c.instructions+=8;goto B43476b;
case 0x43476f:c.instructions+=7;goto B43476f;
case 0x434772:c.instructions+=6;goto B434772;
case 0x434773:c.instructions+=5;goto B434773;
case 0x434777:c.instructions+=4;goto B434777;
case 0x434778:c.instructions+=3;goto B434778;
case 0x43477d:c.instructions+=2;goto B43477d;
case 0x434785:c.instructions+=1;goto B434785;
case 0x43478a:goto L43478a;
case 0x43478e:c.instructions+=8;goto B43478e;
case 0x434790:c.instructions+=7;goto B434790;
case 0x434792:c.instructions+=6;goto B434792;
case 0x434794:c.instructions+=5;goto B434794;
case 0x434797:c.instructions+=4;goto B434797;
case 0x43479a:c.instructions+=3;goto B43479a;
case 0x43479c:c.instructions+=2;goto B43479c;
case 0x43479d:c.instructions+=1;goto B43479d;
case 0x43479f:goto L43479f;
case 0x4347a2:c.instructions+=2;goto B4347a2;
case 0x4347a4:c.instructions+=1;goto B4347a4;
case 0x4347a7:goto L4347a7;
case 0x4347a8:c.instructions+=3;goto B4347a8;
case 0x4347aa:c.instructions+=2;goto B4347aa;
case 0x4347ab:c.instructions+=1;goto B4347ab;
case 0x4347b0:goto L4347b0;
case 0x4347b1:c.instructions+=14;goto B4347b1;
case 0x4347b3:c.instructions+=13;goto B4347b3;
case 0x4347b4:c.instructions+=12;goto B4347b4;
case 0x4347b6:c.instructions+=11;goto B4347b6;
case 0x4347b9:c.instructions+=10;goto B4347b9;
case 0x4347bb:c.instructions+=9;goto B4347bb;
case 0x4347be:c.instructions+=8;goto B4347be;
case 0x4347c1:c.instructions+=7;goto B4347c1;
case 0x4347c4:c.instructions+=6;goto B4347c4;
case 0x4347c7:c.instructions+=5;goto B4347c7;
case 0x4347ca:c.instructions+=4;goto B4347ca;
case 0x4347cd:c.instructions+=3;goto B4347cd;
case 0x4347d0:c.instructions+=2;goto B4347d0;
case 0x4347d3:c.instructions+=1;goto B4347d3;
case 0x4347d5:goto L4347d5;
case 0x4347d7:c.instructions+=2;goto B4347d7;
case 0x4347d9:c.instructions+=1;goto B4347d9;
case 0x4347dc:goto L4347dc;
case 0x4347df:c.instructions+=2;goto B4347df;
case 0x4347e1:c.instructions+=1;goto B4347e1;
case 0x4347e3:goto L4347e3;
case 0x4347e4:c.instructions+=1;goto B4347e4;
case 0x4347e9:goto L4347e9;
case 0x4347ec:goto L4347ec;
case 0x4347ef:c.instructions+=2;goto B4347ef;
case 0x4347f1:c.instructions+=1;goto B4347f1;
case 0x4347f3:goto L4347f3;
case 0x4347f5:c.instructions+=1;goto B4347f5;
case 0x4347fa:goto L4347fa;
case 0x4347fc:c.instructions+=2;goto B4347fc;
case 0x4347fd:c.instructions+=1;goto B4347fd;
case 0x434803:goto L434803;
case 0x434806:goto L434806;
case 0x434807:c.instructions+=2;goto B434807;
case 0x434808:c.instructions+=1;goto B434808;
case 0x434810:goto L434810;
case 0x434812:c.instructions+=16;goto B434812;
case 0x434814:c.instructions+=15;goto B434814;
case 0x434817:c.instructions+=14;goto B434817;
case 0x43481a:c.instructions+=13;goto B43481a;
case 0x43481d:c.instructions+=12;goto B43481d;
case 0x434820:c.instructions+=11;goto B434820;
case 0x434823:c.instructions+=10;goto B434823;
case 0x434826:c.instructions+=9;goto B434826;
case 0x434829:c.instructions+=8;goto B434829;
case 0x43482c:c.instructions+=7;goto B43482c;
case 0x43482f:c.instructions+=6;goto B43482f;
case 0x434832:c.instructions+=5;goto B434832;
case 0x434835:c.instructions+=4;goto B434835;
case 0x434839:c.instructions+=3;goto B434839;
case 0x43483f:c.instructions+=2;goto B43483f;
case 0x434842:c.instructions+=1;goto B434842;
case 0x434850:goto L434850;
case 0x434851:c.instructions+=7;goto B434851;
case 0x434852:c.instructions+=6;goto B434852;
case 0x434853:c.instructions+=5;goto B434853;
case 0x434859:c.instructions+=4;goto B434859;
case 0x43485b:c.instructions+=3;goto B43485b;
case 0x43485c:c.instructions+=2;goto B43485c;
case 0x43485d:c.instructions+=1;goto B43485d;
case 0x43485f:goto L43485f;
case 0x434862:c.instructions+=1;goto B434862;
case 0x434864:goto L434864;
case 0x434866:goto L434866;
case 0x43486b:c.instructions+=1;goto B43486b;
case 0x434870:goto L434870;
case 0x434872:c.instructions+=3;goto B434872;
case 0x434874:c.instructions+=2;goto B434874;
case 0x434878:c.instructions+=1;goto B434878;
case 0x43487a:goto L43487a;
case 0x434880:goto L434880;
case 0x434883:c.instructions+=2;goto B434883;
case 0x434885:c.instructions+=1;goto B434885;
case 0x434887:goto L434887;
case 0x43488a:c.instructions+=3;goto B43488a;
case 0x43488c:c.instructions+=2;goto B43488c;
case 0x43488e:c.instructions+=1;goto B43488e;
case 0x434890:goto L434890;
case 0x434893:c.instructions+=3;goto B434893;
case 0x434896:c.instructions+=2;goto B434896;
case 0x434897:c.instructions+=1;goto B434897;
case 0x43489c:goto L43489c;
case 0x4348a0:c.instructions+=3;goto B4348a0;
case 0x4348a3:c.instructions+=2;goto B4348a3;
case 0x4348a5:c.instructions+=1;goto B4348a5;
case 0x4348a7:goto L4348a7;
case 0x4348a8:c.instructions+=2;goto B4348a8;
case 0x4348aa:c.instructions+=1;goto B4348aa;
case 0x4348ac:goto L4348ac;
case 0x4348b0:goto L4348b0;
case 0x4348b3:c.instructions+=2;goto B4348b3;
case 0x4348b5:c.instructions+=1;goto B4348b5;
case 0x4348b7:goto L4348b7;
case 0x4348ba:c.instructions+=1;goto B4348ba;
case 0x4348bc:goto L4348bc;
case 0x4348be:goto L4348be;
case 0x4348c0:c.instructions+=1;goto B4348c0;
case 0x4348c2:goto L4348c2;
case 0x4348c3:c.instructions+=6;goto B4348c3;
case 0x4348c4:c.instructions+=5;goto B4348c4;
case 0x4348c5:c.instructions+=4;goto B4348c5;
case 0x4348c7:c.instructions+=3;goto B4348c7;
case 0x4348c8:c.instructions+=2;goto B4348c8;
case 0x4348c9:c.instructions+=1;goto B4348c9;
case 0x4348ca:goto L4348ca;
case 0x4348ce:c.instructions+=10;goto B4348ce;
case 0x4348d2:c.instructions+=9;goto B4348d2;
case 0x4348d4:c.instructions+=8;goto B4348d4;
case 0x4348d5:c.instructions+=7;goto B4348d5;
case 0x4348d7:c.instructions+=6;goto B4348d7;
case 0x4348d8:c.instructions+=5;goto B4348d8;
case 0x4348d9:c.instructions+=4;goto B4348d9;
case 0x4348de:c.instructions+=3;goto B4348de;
case 0x4348df:c.instructions+=2;goto B4348df;
case 0x4348e0:c.instructions+=1;goto B4348e0;
case 0x4348f0:goto L4348f0;
case 0x4348f1:c.instructions+=3;goto B4348f1;
case 0x4348f5:c.instructions+=2;goto B4348f5;
case 0x4348fb:c.instructions+=1;goto B4348fb;
case 0x434901:goto L434901;
case 0x434904:c.instructions+=7;goto B434904;
case 0x434905:c.instructions+=6;goto B434905;
case 0x434908:c.instructions+=5;goto B434908;
case 0x43490b:c.instructions+=4;goto B43490b;
case 0x43490d:c.instructions+=3;goto B43490d;
case 0x434911:c.instructions+=2;goto B434911;
case 0x434913:c.instructions+=1;goto B434913;
case 0x434915:goto L434915;
case 0x43491a:c.instructions+=2;goto B43491a;
case 0x43491c:c.instructions+=1;goto B43491c;
case 0x43491e:goto L43491e;
case 0x434920:c.instructions+=4;goto B434920;
case 0x434925:c.instructions+=3;goto B434925;
case 0x434927:c.instructions+=2;goto B434927;
case 0x434929:c.instructions+=1;goto B434929;
case 0x43492e:goto L43492e;
case 0x434931:c.instructions+=2;goto B434931;
case 0x434936:c.instructions+=1;goto B434936;
case 0x43493d:goto L43493d;
case 0x434943:c.instructions+=3;goto B434943;
case 0x434944:c.instructions+=2;goto B434944;
case 0x434945:c.instructions+=1;goto B434945;
case 0x43494a:goto L43494a;
case 0x43494d:c.instructions+=2;goto B43494d;
case 0x43494f:c.instructions+=1;goto B43494f;
case 0x434951:goto L434951;
case 0x434952:c.instructions+=2;goto B434952;
case 0x434954:c.instructions+=1;goto B434954;
case 0x434959:goto L434959;
case 0x43495b:c.instructions+=1;goto B43495b;
case 0x43495d:goto L43495d;
case 0x43495f:goto L43495f;
case 0x434962:c.instructions+=6;goto B434962;
case 0x434964:c.instructions+=5;goto B434964;
case 0x434968:c.instructions+=4;goto B434968;
case 0x434969:c.instructions+=3;goto B434969;
case 0x43496a:c.instructions+=2;goto B43496a;
case 0x43496c:c.instructions+=1;goto B43496c;
case 0x434971:goto L434971;
case 0x434973:c.instructions+=1;goto B434973;
case 0x434975:goto L434975;
case 0x434978:c.instructions+=1;goto B434978;
case 0x43497a:goto L43497a;
case 0x43497c:goto L43497c;
case 0x434982:c.instructions+=5;goto B434982;
case 0x434984:c.instructions+=4;goto B434984;
case 0x434989:c.instructions+=3;goto B434989;
case 0x43498c:c.instructions+=2;goto B43498c;
case 0x434992:c.instructions+=1;goto B434992;
case 0x434993:goto L434993;
case 0x434994:c.instructions+=3;goto B434994;
case 0x434999:c.instructions+=2;goto B434999;
case 0x43499a:c.instructions+=1;goto B43499a;
case 0x43499b:goto L43499b;
case 0x43499d:c.instructions+=2;goto B43499d;
case 0x43499e:c.instructions+=1;goto B43499e;
case 0x4349a0:goto L4349a0;
case 0x4349a1:c.instructions+=3;goto B4349a1;
case 0x4349a5:c.instructions+=2;goto B4349a5;
case 0x4349ab:c.instructions+=1;goto B4349ab;
case 0x4349ad:goto L4349ad;
case 0x4349b2:c.instructions+=3;goto B4349b2;
case 0x4349b4:c.instructions+=2;goto B4349b4;
case 0x4349b5:c.instructions+=1;goto B4349b5;
case 0x4349b7:goto L4349b7;
case 0x4349ba:c.instructions+=1;goto B4349ba;
case 0x4349bc:goto L4349bc;
case 0x4349be:goto L4349be;
case 0x4349c3:c.instructions+=1;goto B4349c3;
case 0x4349c8:goto L4349c8;
case 0x4349ca:c.instructions+=1;goto B4349ca;
case 0x4349cc:goto L4349cc;
case 0x4349d0:goto L4349d0;
case 0x4349d3:c.instructions+=1;goto B4349d3;
case 0x4349d5:goto L4349d5;
case 0x4349d8:c.instructions+=2;goto B4349d8;
case 0x4349da:c.instructions+=1;goto B4349da;
case 0x4349dc:goto L4349dc;
case 0x4349df:c.instructions+=1;goto B4349df;
case 0x4349e1:goto L4349e1;
case 0x4349e3:goto L4349e3;
case 0x4349e5:c.instructions+=1;goto B4349e5;
case 0x4349e7:goto L4349e7;
case 0x4349e8:c.instructions+=3;goto B4349e8;
case 0x4349ed:c.instructions+=2;goto B4349ed;
case 0x4349ee:c.instructions+=1;goto B4349ee;
case 0x4349ef:goto L4349ef;
case 0x4349f1:c.instructions+=1;goto B4349f1;
case 0x4349f6:goto L4349f6;
case 0x4349f9:c.instructions+=7;goto B4349f9;
case 0x4349fc:c.instructions+=6;goto B4349fc;
case 0x4349fe:c.instructions+=5;goto B4349fe;
case 0x434a01:c.instructions+=4;goto B434a01;
case 0x434a03:c.instructions+=3;goto B434a03;
case 0x434a05:c.instructions+=2;goto B434a05;
case 0x434a07:c.instructions+=1;goto B434a07;
case 0x434a09:goto L434a09;
case 0x434a0a:c.instructions+=3;goto B434a0a;
case 0x434a0f:c.instructions+=2;goto B434a0f;
case 0x434a10:c.instructions+=1;goto B434a10;
case 0x434a11:goto L434a11;
case 0x434a13:c.instructions+=2;goto B434a13;
case 0x434a14:c.instructions+=1;goto B434a14;
case 0x434a20:goto L434a20;
case 0x434a21:c.instructions+=8;goto B434a21;
case 0x434a22:c.instructions+=7;goto B434a22;
case 0x434a24:c.instructions+=6;goto B434a24;
case 0x434a27:c.instructions+=5;goto B434a27;
case 0x434a28:c.instructions+=4;goto B434a28;
case 0x434a2a:c.instructions+=3;goto B434a2a;
case 0x434a2c:c.instructions+=2;goto B434a2c;
case 0x434a2f:c.instructions+=1;goto B434a2f;
case 0x434a31:goto L434a31;
case 0x434a32:c.instructions+=1;goto B434a32;
case 0x434a37:goto L434a37;
case 0x434a3a:c.instructions+=1;goto B434a3a;
case 0x434a3d:goto L434a3d;
case 0x434a40:c.instructions+=3;goto B434a40;
case 0x434a42:c.instructions+=2;goto B434a42;
case 0x434a45:c.instructions+=1;goto B434a45;
case 0x434a47:goto L434a47;
case 0x434a49:c.instructions+=2;goto B434a49;
case 0x434a4a:c.instructions+=1;goto B434a4a;
case 0x434a50:goto L434a50;
case 0x434a53:c.instructions+=1;goto B434a53;
case 0x434a56:goto L434a56;
case 0x434a59:c.instructions+=2;goto B434a59;
case 0x434a5c:c.instructions+=1;goto B434a5c;
case 0x434a61:goto L434a61;
case 0x434a63:c.instructions+=2;goto B434a63;
case 0x434a65:c.instructions+=1;goto B434a65;
case 0x434a67:goto L434a67;
case 0x434a6d:c.instructions+=3;goto B434a6d;
case 0x434a6f:c.instructions+=2;goto B434a6f;
case 0x434a70:c.instructions+=1;goto B434a70;
case 0x434a73:goto L434a73;
case 0x434a75:goto L434a75;
case 0x434a78:c.instructions+=2;goto B434a78;
case 0x434a79:c.instructions+=1;goto B434a79;
case 0x434a7b:goto L434a7b;
case 0x434a7c:c.instructions+=3;goto B434a7c;
case 0x434a7d:c.instructions+=2;goto B434a7d;
case 0x434a7e:c.instructions+=1;goto B434a7e;
case 0x434a80:goto L434a80;
case 0x434a83:c.instructions+=11;goto B434a83;
case 0x434a87:c.instructions+=10;goto B434a87;
case 0x434a88:c.instructions+=9;goto B434a88;
case 0x434a8c:c.instructions+=8;goto B434a8c;
case 0x434a8e:c.instructions+=7;goto B434a8e;
case 0x434a8f:c.instructions+=6;goto B434a8f;
case 0x434a93:c.instructions+=5;goto B434a93;
case 0x434a94:c.instructions+=4;goto B434a94;
case 0x434a95:c.instructions+=3;goto B434a95;
case 0x434a9d:c.instructions+=2;goto B434a9d;
case 0x434aa5:c.instructions+=1;goto B434aa5;
case 0x434aaa:goto L434aaa;
case 0x434aad:c.instructions+=2;goto B434aad;
case 0x434aaf:c.instructions+=1;goto B434aaf;
case 0x434ab1:goto L434ab1;
case 0x434ab5:c.instructions+=4;goto B434ab5;
case 0x434ab9:c.instructions+=3;goto B434ab9;
case 0x434aba:c.instructions+=2;goto B434aba;
case 0x434abb:c.instructions+=1;goto B434abb;
case 0x434ac0:goto L434ac0;
case 0x434ac4:c.instructions+=6;goto B434ac4;
case 0x434ac7:c.instructions+=5;goto B434ac7;
case 0x434acb:c.instructions+=4;goto B434acb;
case 0x434acd:c.instructions+=3;goto B434acd;
case 0x434ace:c.instructions+=2;goto B434ace;
case 0x434ad0:c.instructions+=1;goto B434ad0;
case 0x434ad3:goto L434ad3;
case 0x434ad7:c.instructions+=4;goto B434ad7;
case 0x434ad9:c.instructions+=3;goto B434ad9;
case 0x434ade:c.instructions+=2;goto B434ade;
case 0x434adf:c.instructions+=1;goto B434adf;
case 0x434ae1:goto L434ae1;
case 0x434ae4:goto L434ae4;
case 0x434ae7:c.instructions+=3;goto B434ae7;
case 0x434ae8:c.instructions+=2;goto B434ae8;
case 0x434aeb:c.instructions+=1;goto B434aeb;
case 0x434aee:goto L434aee;
case 0x434af0:c.instructions+=3;goto B434af0;
case 0x434af1:c.instructions+=2;goto B434af1;
case 0x434af4:c.instructions+=1;goto B434af4;
case 0x434b00:goto L434b00;
case 0x434b03:c.instructions+=27;goto B434b03;
case 0x434b09:c.instructions+=26;goto B434b09;
case 0x434b0a:c.instructions+=25;goto B434b0a;
case 0x434b0e:c.instructions+=24;goto B434b0e;
case 0x434b0f:c.instructions+=23;goto B434b0f;
case 0x434b11:c.instructions+=22;goto B434b11;
case 0x434b14:c.instructions+=21;goto B434b14;
case 0x434b17:c.instructions+=20;goto B434b17;
case 0x434b18:c.instructions+=19;goto B434b18;
case 0x434b1a:c.instructions+=18;goto B434b1a;
case 0x434b1c:c.instructions+=17;goto B434b1c;
case 0x434b1f:c.instructions+=16;goto B434b1f;
case 0x434b23:c.instructions+=15;goto B434b23;
case 0x434b29:c.instructions+=14;goto B434b29;
case 0x434b2c:c.instructions+=13;goto B434b2c;
case 0x434b2f:c.instructions+=12;goto B434b2f;
case 0x434b33:c.instructions+=11;goto B434b33;
case 0x434b39:c.instructions+=10;goto B434b39;
case 0x434b3c:c.instructions+=9;goto B434b3c;
case 0x434b40:c.instructions+=8;goto B434b40;
case 0x434b46:c.instructions+=7;goto B434b46;
case 0x434b49:c.instructions+=6;goto B434b49;
case 0x434b4c:c.instructions+=5;goto B434b4c;
case 0x434b50:c.instructions+=4;goto B434b50;
case 0x434b56:c.instructions+=3;goto B434b56;
case 0x434b59:c.instructions+=2;goto B434b59;
case 0x434b5d:c.instructions+=1;goto B434b5d;
case 0x434b5f:goto L434b5f;
case 0x434b62:c.instructions+=3;goto B434b62;
case 0x434b65:c.instructions+=2;goto B434b65;
case 0x434b69:c.instructions+=1;goto B434b69;
case 0x434b6b:goto L434b6b;
case 0x434b6e:c.instructions+=1;goto B434b6e;
case 0x434b72:goto L434b72;
case 0x434b74:c.instructions+=1;goto B434b74;
case 0x434b76:goto L434b76;
case 0x434b79:c.instructions+=2;goto B434b79;
case 0x434b7d:c.instructions+=1;goto B434b7d;
case 0x434b7f:goto L434b7f;
case 0x434b87:goto L434b87;
case 0x434b89:c.instructions+=1;goto B434b89;
case 0x434b8b:goto L434b8b;
case 0x434b8e:c.instructions+=2;goto B434b8e;
case 0x434b92:c.instructions+=1;goto B434b92;
case 0x434b94:goto L434b94;
case 0x434b97:c.instructions+=1;goto B434b97;
case 0x434b9b:goto L434b9b;
case 0x434b9d:c.instructions+=10;goto B434b9d;
case 0x434ba0:c.instructions+=9;goto B434ba0;
case 0x434ba2:c.instructions+=8;goto B434ba2;
case 0x434ba4:c.instructions+=7;goto B434ba4;
case 0x434ba7:c.instructions+=6;goto B434ba7;
case 0x434baa:c.instructions+=5;goto B434baa;
case 0x434bad:c.instructions+=4;goto B434bad;
case 0x434bb0:c.instructions+=3;goto B434bb0;
case 0x434bb3:c.instructions+=2;goto B434bb3;
case 0x434bb5:c.instructions+=1;goto B434bb5;
case 0x434bb7:goto L434bb7;
case 0x434bb9:c.instructions+=1;goto B434bb9;
case 0x434bbb:goto L434bbb;
case 0x434bbe:c.instructions+=2;goto B434bbe;
case 0x434bc0:c.instructions+=1;goto B434bc0;
case 0x434bc2:goto L434bc2;
case 0x434bc4:c.instructions+=1;goto B434bc4;
case 0x434bc6:goto L434bc6;
case 0x434bc9:c.instructions+=1;goto B434bc9;
case 0x434bcb:goto L434bcb;
case 0x434bce:goto L434bce;
case 0x434bd1:c.instructions+=3;goto B434bd1;
case 0x434bd3:c.instructions+=2;goto B434bd3;
case 0x434bd7:c.instructions+=1;goto B434bd7;
case 0x434bd9:goto L434bd9;
case 0x434bdd:c.instructions+=4;goto B434bdd;
case 0x434be1:c.instructions+=3;goto B434be1;
case 0x434be3:c.instructions+=2;goto B434be3;
case 0x434be6:c.instructions+=1;goto B434be6;
case 0x434be8:goto L434be8;
case 0x434beb:c.instructions+=5;goto B434beb;
case 0x434bf0:c.instructions+=4;goto B434bf0;
case 0x434bf4:c.instructions+=3;goto B434bf4;
case 0x434bf6:c.instructions+=2;goto B434bf6;
case 0x434bf9:c.instructions+=1;goto B434bf9;
case 0x434bfb:goto L434bfb;
case 0x434c00:goto L434c00;
case 0x434c04:c.instructions+=2;goto B434c04;
case 0x434c07:c.instructions+=1;goto B434c07;
case 0x434c09:goto L434c09;
case 0x434c0d:c.instructions+=4;goto B434c0d;
case 0x434c11:c.instructions+=3;goto B434c11;
case 0x434c13:c.instructions+=2;goto B434c13;
case 0x434c16:c.instructions+=1;goto B434c16;
case 0x434c18:goto L434c18;
case 0x434c1b:c.instructions+=5;goto B434c1b;
case 0x434c20:c.instructions+=4;goto B434c20;
case 0x434c24:c.instructions+=3;goto B434c24;
case 0x434c26:c.instructions+=2;goto B434c26;
case 0x434c29:c.instructions+=1;goto B434c29;
case 0x434c2b:goto L434c2b;
case 0x434c30:goto L434c30;
case 0x434c34:c.instructions+=4;goto B434c34;
case 0x434c37:c.instructions+=3;goto B434c37;
case 0x434c39:c.instructions+=2;goto B434c39;
case 0x434c3d:c.instructions+=1;goto B434c3d;
case 0x434c3f:goto L434c3f;
case 0x434c43:c.instructions+=6;goto B434c43;
case 0x434c47:c.instructions+=5;goto B434c47;
case 0x434c4b:c.instructions+=4;goto B434c4b;
case 0x434c4f:c.instructions+=3;goto B434c4f;
case 0x434c51:c.instructions+=2;goto B434c51;
case 0x434c54:c.instructions+=1;goto B434c54;
case 0x434c56:goto L434c56;
case 0x434c5a:c.instructions+=5;goto B434c5a;
case 0x434c5c:c.instructions+=4;goto B434c5c;
case 0x434c60:c.instructions+=3;goto B434c60;
case 0x434c61:c.instructions+=2;goto B434c61;
case 0x434c62:c.instructions+=1;goto B434c62;
case 0x434c67:goto L434c67;
case 0x434c6b:c.instructions+=1;goto B434c6b;
case 0x434c6e:goto L434c6e;
case 0x434c74:c.instructions+=11;goto B434c74;
case 0x434c76:c.instructions+=10;goto B434c76;
case 0x434c79:c.instructions+=9;goto B434c79;
case 0x434c7a:c.instructions+=8;goto B434c7a;
case 0x434c80:c.instructions+=7;goto B434c80;
case 0x434c84:c.instructions+=6;goto B434c84;
case 0x434c87:c.instructions+=5;goto B434c87;
case 0x434c8a:c.instructions+=4;goto B434c8a;
case 0x434c8b:c.instructions+=3;goto B434c8b;
case 0x434c8c:c.instructions+=2;goto B434c8c;
case 0x434c8f:c.instructions+=1;goto B434c8f;
case 0x434c92:goto L434c92;
case 0x434c96:c.instructions+=2;goto B434c96;
case 0x434c98:c.instructions+=1;goto B434c98;
case 0x434c9a:goto L434c9a;
case 0x434c9e:c.instructions+=6;goto B434c9e;
case 0x434ca2:c.instructions+=5;goto B434ca2;
case 0x434ca6:c.instructions+=4;goto B434ca6;
case 0x434caa:c.instructions+=3;goto B434caa;
case 0x434cac:c.instructions+=2;goto B434cac;
case 0x434caf:c.instructions+=1;goto B434caf;
case 0x434cb1:goto L434cb1;
case 0x434cb5:c.instructions+=5;goto B434cb5;
case 0x434cb7:c.instructions+=4;goto B434cb7;
case 0x434cbb:c.instructions+=3;goto B434cbb;
case 0x434cbc:c.instructions+=2;goto B434cbc;
case 0x434cbd:c.instructions+=1;goto B434cbd;
case 0x434cc2:goto L434cc2;
case 0x434cc6:c.instructions+=1;goto B434cc6;
case 0x434cc9:goto L434cc9;
case 0x434ccf:c.instructions+=11;goto B434ccf;
case 0x434cd1:c.instructions+=10;goto B434cd1;
case 0x434cd4:c.instructions+=9;goto B434cd4;
case 0x434cd5:c.instructions+=8;goto B434cd5;
case 0x434cdb:c.instructions+=7;goto B434cdb;
case 0x434cdf:c.instructions+=6;goto B434cdf;
case 0x434ce2:c.instructions+=5;goto B434ce2;
case 0x434ce5:c.instructions+=4;goto B434ce5;
case 0x434ce6:c.instructions+=3;goto B434ce6;
case 0x434ce7:c.instructions+=2;goto B434ce7;
case 0x434cea:c.instructions+=1;goto B434cea;
case 0x434ced:goto L434ced;
case 0x434cef:c.instructions+=1;goto B434cef;
case 0x434cf1:goto L434cf1;
case 0x434cf5:c.instructions+=4;goto B434cf5;
case 0x434cf9:c.instructions+=3;goto B434cf9;
case 0x434cfb:c.instructions+=2;goto B434cfb;
case 0x434cfe:c.instructions+=1;goto B434cfe;
case 0x434d04:goto L434d04;
case 0x434d06:c.instructions+=1;goto B434d06;
case 0x434d08:goto L434d08;
case 0x434d0c:c.instructions+=8;goto B434d0c;
case 0x434d0e:c.instructions+=7;goto B434d0e;
case 0x434d0f:c.instructions+=6;goto B434d0f;
case 0x434d16:c.instructions+=5;goto B434d16;
case 0x434d19:c.instructions+=4;goto B434d19;
case 0x434d1a:c.instructions+=3;goto B434d1a;
case 0x434d1b:c.instructions+=2;goto B434d1b;
case 0x434d1e:c.instructions+=1;goto B434d1e;
case 0x434d21:goto L434d21;
case 0x434d26:c.instructions+=9;goto B434d26;
case 0x434d28:c.instructions+=8;goto B434d28;
case 0x434d2c:c.instructions+=7;goto B434d2c;
case 0x434d2e:c.instructions+=6;goto B434d2e;
case 0x434d2f:c.instructions+=5;goto B434d2f;
case 0x434d32:c.instructions+=4;goto B434d32;
case 0x434d33:c.instructions+=3;goto B434d33;
case 0x434d34:c.instructions+=2;goto B434d34;
case 0x434d37:c.instructions+=1;goto B434d37;
case 0x434d3a:goto L434d3a;
case 0x434d3c:c.instructions+=1;goto B434d3c;
case 0x434d3e:goto L434d3e;
case 0x434d41:c.instructions+=3;goto B434d41;
case 0x434d43:c.instructions+=2;goto B434d43;
case 0x434d45:c.instructions+=1;goto B434d45;
case 0x434d47:goto L434d47;
case 0x434d48:c.instructions+=1;goto B434d48;
case 0x434d4a:goto L434d4a;
case 0x434d4e:c.instructions+=4;goto B434d4e;
case 0x434d52:c.instructions+=3;goto B434d52;
case 0x434d54:c.instructions+=2;goto B434d54;
case 0x434d57:c.instructions+=1;goto B434d57;
case 0x434d59:goto L434d59;
case 0x434d5b:c.instructions+=10;goto B434d5b;
case 0x434d5d:c.instructions+=9;goto B434d5d;
case 0x434d61:c.instructions+=8;goto B434d61;
case 0x434d62:c.instructions+=7;goto B434d62;
case 0x434d65:c.instructions+=6;goto B434d65;
case 0x434d68:c.instructions+=5;goto B434d68;
case 0x434d6b:c.instructions+=4;goto B434d6b;
case 0x434d6c:c.instructions+=3;goto B434d6c;
case 0x434d6d:c.instructions+=2;goto B434d6d;
case 0x434d70:c.instructions+=1;goto B434d70;
case 0x434d73:goto L434d73;
case 0x434d77:c.instructions+=4;goto B434d77;
case 0x434d7b:c.instructions+=3;goto B434d7b;
case 0x434d7d:c.instructions+=2;goto B434d7d;
case 0x434d80:c.instructions+=1;goto B434d80;
case 0x434d82:goto L434d82;
case 0x434d86:c.instructions+=2;goto B434d86;
case 0x434d8d:c.instructions+=1;goto B434d8d;
case 0x434d91:goto L434d91;
case 0x434d93:c.instructions+=6;goto B434d93;
case 0x434d96:c.instructions+=5;goto B434d96;
case 0x434d97:c.instructions+=4;goto B434d97;
case 0x434d98:c.instructions+=3;goto B434d98;
case 0x434d99:c.instructions+=2;goto B434d99;
case 0x434d9c:c.instructions+=1;goto B434d9c;
case 0x434da0:goto L434da0;
case 0x434da2:c.instructions+=9;goto B434da2;
case 0x434da4:c.instructions+=8;goto B434da4;
case 0x434da7:c.instructions+=7;goto B434da7;
case 0x434daa:c.instructions+=6;goto B434daa;
case 0x434dad:c.instructions+=5;goto B434dad;
case 0x434db0:c.instructions+=4;goto B434db0;
case 0x434db3:c.instructions+=3;goto B434db3;
case 0x434db6:c.instructions+=2;goto B434db6;
case 0x434db9:c.instructions+=1;goto B434db9;
case 0x434dc0:goto L434dc0;
case 0x434dc1:c.instructions+=5;goto B434dc1;
case 0x434dc2:c.instructions+=4;goto B434dc2;
case 0x434dc8:c.instructions+=3;goto B434dc8;
case 0x434dc9:c.instructions+=2;goto B434dc9;
case 0x434dce:c.instructions+=1;goto B434dce;
case 0x434dd3:goto L434dd3;
case 0x434dd5:c.instructions+=2;goto B434dd5;
case 0x434dd7:c.instructions+=1;goto B434dd7;
case 0x434dd9:goto L434dd9;
case 0x434ddd:c.instructions+=1;goto B434ddd;
case 0x434de0:goto L434de0;
case 0x434de3:c.instructions+=2;goto B434de3;
case 0x434de5:c.instructions+=1;goto B434de5;
case 0x434de7:goto L434de7;
case 0x434de8:c.instructions+=1;goto B434de8;
case 0x434ded:goto L434ded;
case 0x434df0:c.instructions+=2;goto B434df0;
case 0x434df2:c.instructions+=1;goto B434df2;
case 0x434df4:goto L434df4;
case 0x434df6:c.instructions+=2;goto B434df6;
case 0x434df8:c.instructions+=1;goto B434df8;
case 0x434dfa:goto L434dfa;
case 0x434dfb:c.instructions+=4;goto B434dfb;
case 0x434dfc:c.instructions+=3;goto B434dfc;
case 0x434dfe:c.instructions+=2;goto B434dfe;
case 0x434dff:c.instructions+=1;goto B434dff;
case 0x434e00:goto L434e00;
case 0x434e01:c.instructions+=4;goto B434e01;
case 0x434e03:c.instructions+=3;goto B434e03;
case 0x434e04:c.instructions+=2;goto B434e04;
case 0x434e05:c.instructions+=1;goto B434e05;
case 0x434e10:goto L434e10;
case 0x434e11:c.instructions+=3;goto B434e11;
case 0x434e15:c.instructions+=2;goto B434e15;
case 0x434e1b:c.instructions+=1;goto B434e1b;
case 0x434e21:goto L434e21;
case 0x434e26:c.instructions+=2;goto B434e26;
case 0x434e28:c.instructions+=1;goto B434e28;
case 0x434e2a:goto L434e2a;
case 0x434e2c:c.instructions+=4;goto B434e2c;
case 0x434e31:c.instructions+=3;goto B434e31;
case 0x434e33:c.instructions+=2;goto B434e33;
case 0x434e35:c.instructions+=1;goto B434e35;
case 0x434e3a:goto L434e3a;
case 0x434e3d:c.instructions+=2;goto B434e3d;
case 0x434e42:c.instructions+=1;goto B434e42;
case 0x434e49:goto L434e49;
case 0x434e4e:c.instructions+=5;goto B434e4e;
case 0x434e4f:c.instructions+=4;goto B434e4f;
case 0x434e50:c.instructions+=3;goto B434e50;
case 0x434e51:c.instructions+=2;goto B434e51;
case 0x434e52:c.instructions+=1;goto B434e52;
case 0x434e57:goto L434e57;
case 0x434e5a:c.instructions+=2;goto B434e5a;
case 0x434e5c:c.instructions+=1;goto B434e5c;
case 0x434e5e:goto L434e5e;
case 0x434e60:c.instructions+=1;goto B434e60;
case 0x434e65:goto L434e65;
case 0x434e67:c.instructions+=1;goto B434e67;
case 0x434e69:goto L434e69;
case 0x434e6b:goto L434e6b;
case 0x434e6e:c.instructions+=7;goto B434e6e;
case 0x434e71:c.instructions+=6;goto B434e71;
case 0x434e74:c.instructions+=5;goto B434e74;
case 0x434e76:c.instructions+=4;goto B434e76;
case 0x434e78:c.instructions+=3;goto B434e78;
case 0x434e7a:c.instructions+=2;goto B434e7a;
case 0x434e7e:c.instructions+=1;goto B434e7e;
case 0x434e84:goto L434e84;
case 0x434e87:c.instructions+=2;goto B434e87;
case 0x434e89:c.instructions+=1;goto B434e89;
case 0x434e8b:goto L434e8b;
case 0x434e8d:c.instructions+=4;goto B434e8d;
case 0x434e8e:c.instructions+=3;goto B434e8e;
case 0x434e8f:c.instructions+=2;goto B434e8f;
case 0x434e91:c.instructions+=1;goto B434e91;
case 0x434e96:goto L434e96;
case 0x434e98:goto L434e98;
case 0x434e9a:goto L434e9a;
case 0x434e9c:c.instructions+=4;goto B434e9c;
case 0x434e9f:c.instructions+=3;goto B434e9f;
case 0x434ea2:c.instructions+=2;goto B434ea2;
case 0x434ea9:c.instructions+=1;goto B434ea9;
case 0x434eae:goto L434eae;
case 0x434eb1:c.instructions+=11;goto B434eb1;
case 0x434eb6:c.instructions+=10;goto B434eb6;
case 0x434eb8:c.instructions+=9;goto B434eb8;
case 0x434ebe:c.instructions+=8;goto B434ebe;
case 0x434ebf:c.instructions+=7;goto B434ebf;
case 0x434ec2:c.instructions+=6;goto B434ec2;
case 0x434ec8:c.instructions+=5;goto B434ec8;
case 0x434ec9:c.instructions+=4;goto B434ec9;
case 0x434eca:c.instructions+=3;goto B434eca;
case 0x434ecf:c.instructions+=2;goto B434ecf;
case 0x434ed0:c.instructions+=1;goto B434ed0;
case 0x434ed1:goto L434ed1;
case 0x434ed3:c.instructions+=2;goto B434ed3;
case 0x434ed4:c.instructions+=1;goto B434ed4;
case 0x434ee0:goto L434ee0;
case 0x434ee1:c.instructions+=7;goto B434ee1;
case 0x434ee3:c.instructions+=6;goto B434ee3;
case 0x434ee6:c.instructions+=5;goto B434ee6;
case 0x434ee7:c.instructions+=4;goto B434ee7;
case 0x434ee9:c.instructions+=3;goto B434ee9;
case 0x434eeb:c.instructions+=2;goto B434eeb;
case 0x434eed:c.instructions+=1;goto B434eed;
case 0x434eef:goto L434eef;
case 0x434ef0:c.instructions+=1;goto B434ef0;
case 0x434ef5:goto L434ef5;
case 0x434ef8:c.instructions+=1;goto B434ef8;
case 0x434efb:goto L434efb;
case 0x434efe:c.instructions+=3;goto B434efe;
case 0x434f00:c.instructions+=2;goto B434f00;
case 0x434f03:c.instructions+=1;goto B434f03;
case 0x434f05:goto L434f05;
case 0x434f07:c.instructions+=2;goto B434f07;
case 0x434f08:c.instructions+=1;goto B434f08;
case 0x434f0e:goto L434f0e;
case 0x434f11:c.instructions+=1;goto B434f11;
case 0x434f14:goto L434f14;
case 0x434f17:c.instructions+=3;goto B434f17;
case 0x434f18:c.instructions+=2;goto B434f18;
case 0x434f19:c.instructions+=1;goto B434f19;
case 0x434f20:goto L434f20;
case 0x434f21:c.instructions+=9;goto B434f21;
case 0x434f22:c.instructions+=8;goto B434f22;
case 0x434f23:c.instructions+=7;goto B434f23;
case 0x434f25:c.instructions+=6;goto B434f25;
case 0x434f28:c.instructions+=5;goto B434f28;
case 0x434f2a:c.instructions+=4;goto B434f2a;
case 0x434f2c:c.instructions+=3;goto B434f2c;
case 0x434f2d:c.instructions+=2;goto B434f2d;
case 0x434f2f:c.instructions+=1;goto B434f2f;
case 0x434f31:goto L434f31;
case 0x434f32:c.instructions+=1;goto B434f32;
case 0x434f37:goto L434f37;
case 0x434f3a:c.instructions+=1;goto B434f3a;
case 0x434f3d:goto L434f3d;
case 0x434f40:c.instructions+=3;goto B434f40;
case 0x434f42:c.instructions+=2;goto B434f42;
case 0x434f45:c.instructions+=1;goto B434f45;
case 0x434f47:goto L434f47;
case 0x434f49:c.instructions+=2;goto B434f49;
case 0x434f4a:c.instructions+=1;goto B434f4a;
case 0x434f50:goto L434f50;
case 0x434f53:c.instructions+=1;goto B434f53;
case 0x434f56:goto L434f56;
case 0x434f5a:c.instructions+=10;goto B434f5a;
case 0x434f5d:c.instructions+=9;goto B434f5d;
case 0x434f5f:c.instructions+=8;goto B434f5f;
case 0x434f62:c.instructions+=7;goto B434f62;
case 0x434f65:c.instructions+=6;goto B434f65;
case 0x434f68:c.instructions+=5;goto B434f68;
case 0x434f6b:c.instructions+=4;goto B434f6b;
case 0x434f72:c.instructions+=3;goto B434f72;
case 0x434f73:c.instructions+=2;goto B434f73;
case 0x434f76:c.instructions+=1;goto B434f76;
case 0x434f7b:goto L434f7b;
case 0x434f7e:c.instructions+=4;goto B434f7e;
case 0x434f81:c.instructions+=3;goto B434f81;
case 0x434f83:c.instructions+=2;goto B434f83;
case 0x434f85:c.instructions+=1;goto B434f85;
case 0x434f87:goto L434f87;
case 0x434f8a:c.instructions+=4;goto B434f8a;
case 0x434f8d:c.instructions+=3;goto B434f8d;
case 0x434f8e:c.instructions+=2;goto B434f8e;
case 0x434f90:c.instructions+=1;goto B434f90;
case 0x434f92:goto L434f92;
case 0x434f95:c.instructions+=1;goto B434f95;
case 0x434f97:goto L434f97;
case 0x434f9a:c.instructions+=6;goto B434f9a;
case 0x434f9d:c.instructions+=5;goto B434f9d;
case 0x434fa0:c.instructions+=4;goto B434fa0;
case 0x434fa3:c.instructions+=3;goto B434fa3;
case 0x434fa4:c.instructions+=2;goto B434fa4;
case 0x434fa5:c.instructions+=1;goto B434fa5;
case 0x434fab:goto L434fab;
case 0x434fae:c.instructions+=3;goto B434fae;
case 0x434fb0:c.instructions+=2;goto B434fb0;
case 0x434fb3:c.instructions+=1;goto B434fb3;
case 0x434fb5:goto L434fb5;
case 0x434fb8:c.instructions+=4;goto B434fb8;
case 0x434fb9:c.instructions+=3;goto B434fb9;
case 0x434fba:c.instructions+=2;goto B434fba;
case 0x434fbd:c.instructions+=1;goto B434fbd;
case 0x434fc2:goto L434fc2;
case 0x434fc3:c.instructions+=5;goto B434fc3;
case 0x434fc4:c.instructions+=4;goto B434fc4;
case 0x434fc5:c.instructions+=3;goto B434fc5;
case 0x434fca:c.instructions+=2;goto B434fca;
case 0x434fcb:c.instructions+=1;goto B434fcb;
case 0x434fce:goto L434fce;
case 0x434fd1:c.instructions+=3;goto B434fd1;
case 0x434fd3:c.instructions+=2;goto B434fd3;
case 0x434fd5:c.instructions+=1;goto B434fd5;
case 0x434fd7:goto L434fd7;
case 0x434fd8:c.instructions+=1;goto B434fd8;
case 0x434fdd:goto L434fdd;
case 0x434fe0:c.instructions+=1;goto B434fe0;
case 0x434fe3:goto L434fe3;
case 0x434fe6:c.instructions+=3;goto B434fe6;
case 0x434fe8:c.instructions+=2;goto B434fe8;
case 0x434feb:c.instructions+=1;goto B434feb;
case 0x434fed:goto L434fed;
case 0x434fef:c.instructions+=2;goto B434fef;
case 0x434ff0:c.instructions+=1;goto B434ff0;
case 0x434ff6:goto L434ff6;
case 0x434ff9:c.instructions+=1;goto B434ff9;
case 0x434ffc:goto L434ffc;
case 0x434ffd:c.instructions+=1;goto B434ffd;
default:missing_instruction(c.pc);}
B434003:L434003:{c.instructions+=3;NFSU2_TR(0x434003);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B434004:{NFSU2_TR(0x434004);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B434008:{NFSU2_TR(0x434008);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x43400dull));
TAIL_STATIC(0x4013d0u,401);
}
B43400d:L43400d:{c.instructions+=1;NFSU2_TR(0x43400d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B43400e:L43400e:{c.instructions+=3;NFSU2_TR(0x43400e);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B434012:{NFSU2_TR(0x434012);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B434014:{NFSU2_TR(0x434014);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L43402b;}}
}
B434016:L434016:{c.instructions+=5;NFSU2_TR(0x434016);
u8 U[6];
w1(R+512,carry<u32>(r4(R+4),u32(0x190ull)));
w1(R+523,scarry<u32>(r4(R+4),u32(0x190ull)));
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x190ull))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B43401c:{NFSU2_TR(0x43401c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43401d:{NFSU2_TR(0x43401d);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B434021:{NFSU2_TR(0x434021);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B434022:{NFSU2_TR(0x434022);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x434027ull));
TAIL_STATIC(0x4012b0u,401);
}
B434027:L434027:{c.instructions+=2;NFSU2_TR(0x434027);
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
B43402a:{NFSU2_TR(0x43402a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B43402b:L43402b:{c.instructions+=2;NFSU2_TR(0x43402b);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B43402e:{NFSU2_TR(0x43402e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L434041;}}
}
B434030:L434030:{c.instructions+=4;NFSU2_TR(0x434030);
u8 U[6];
w1(R+512,carry<u32>(r4(R+4),u32(0x1d0ull)));
w1(R+523,scarry<u32>(r4(R+4),u32(0x1d0ull)));
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1d0ull))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B434036:{NFSU2_TR(0x434036);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B434037:{NFSU2_TR(0x434037);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B43403b:{NFSU2_TR(0x43403b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x434040ull));
TAIL_STATIC(0x4013d0u,401);
}
B434040:L434040:{c.instructions+=1;NFSU2_TR(0x434040);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B434041:L434041:{c.instructions+=2;NFSU2_TR(0x434041);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B434044:{NFSU2_TR(0x434044);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L434057;}}
}
B434046:L434046:{c.instructions+=4;NFSU2_TR(0x434046);
u8 U[6];
w1(R+512,carry<u32>(r4(R+4),u32(0x210ull)));
w1(R+523,scarry<u32>(r4(R+4),u32(0x210ull)));
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x210ull))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B43404c:{NFSU2_TR(0x43404c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43404d:{NFSU2_TR(0x43404d);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B434051:{NFSU2_TR(0x434051);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x434056ull));
TAIL_STATIC(0x4013d0u,401);
}
B434056:L434056:{c.instructions+=1;NFSU2_TR(0x434056);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B434057:L434057:{c.instructions+=2;NFSU2_TR(0x434057);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B43405a:{NFSU2_TR(0x43405a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L43406d;}}
}
B43405c:L43405c:{c.instructions+=4;NFSU2_TR(0x43405c);
u8 U[6];
w1(R+512,carry<u32>(r4(R+4),u32(0x350ull)));
w1(R+523,scarry<u32>(r4(R+4),u32(0x350ull)));
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x350ull))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B434062:{NFSU2_TR(0x434062);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B434063:{NFSU2_TR(0x434063);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B434067:{NFSU2_TR(0x434067);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x43406cull));
TAIL_STATIC(0x4013d0u,401);
}
B43406c:L43406c:{c.instructions+=1;NFSU2_TR(0x43406c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B43406d:L43406d:{c.instructions+=2;NFSU2_TR(0x43406d);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B434070:{NFSU2_TR(0x434070);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L434083;}}
}
B434072:L434072:{c.instructions+=4;NFSU2_TR(0x434072);
u8 U[6];
w1(R+512,carry<u32>(r4(R+4),u32(0x390ull)));
w1(R+523,scarry<u32>(r4(R+4),u32(0x390ull)));
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x390ull))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B434078:{NFSU2_TR(0x434078);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B434079:{NFSU2_TR(0x434079);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B43407d:{NFSU2_TR(0x43407d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x434082ull));
TAIL_STATIC(0x4013d0u,401);
}
B434082:L434082:{c.instructions+=1;NFSU2_TR(0x434082);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B434083:L434083:{c.instructions+=2;NFSU2_TR(0x434083);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x5ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B434086:{NFSU2_TR(0x434086);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L434099;}}
}
B434088:L434088:{c.instructions+=4;NFSU2_TR(0x434088);
u8 U[6];
w1(R+512,carry<u32>(r4(R+4),u32(0x3d0ull)));
w1(R+523,scarry<u32>(r4(R+4),u32(0x3d0ull)));
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x3d0ull))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B43408e:{NFSU2_TR(0x43408e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43408f:{NFSU2_TR(0x43408f);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B434093:{NFSU2_TR(0x434093);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x434098ull));
TAIL_STATIC(0x4013d0u,401);
}
B434098:L434098:{c.instructions+=1;NFSU2_TR(0x434098);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B434099:L434099:{c.instructions+=2;NFSU2_TR(0x434099);
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
B43409c:{NFSU2_TR(0x43409c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L434170;}}
}
B4340a2:L4340a2:{c.instructions+=4;NFSU2_TR(0x4340a2);
u8 U[6];
w1(R+512,carry<u32>(r4(R+4),u32(0x410ull)));
w1(R+523,scarry<u32>(r4(R+4),u32(0x410ull)));
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x410ull))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4340a8:{NFSU2_TR(0x4340a8);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4340a9:{NFSU2_TR(0x4340a9);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4340ad:{NFSU2_TR(0x4340ad);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4340b2ull));
TAIL_STATIC(0x4013d0u,401);
}
B4340b2:L4340b2:{c.instructions+=1;NFSU2_TR(0x4340b2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4340b3:L4340b3:{c.instructions+=3;NFSU2_TR(0x4340b3);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4340b7:{NFSU2_TR(0x4340b7);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4340b9:{NFSU2_TR(0x4340b9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4340d0;}}
}
B4340bb:L4340bb:{c.instructions+=5;NFSU2_TR(0x4340bb);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4340bf:{NFSU2_TR(0x4340bf);
u8 U[6];
w1(R+512,carry<u32>(r4(R+4),u32(0x250ull)));
w1(R+523,scarry<u32>(r4(R+4),u32(0x250ull)));
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x250ull))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4340c5:{NFSU2_TR(0x4340c5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4340c6:{NFSU2_TR(0x4340c6);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4340c7:{NFSU2_TR(0x4340c7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4340ccull));
TAIL_STATIC(0x4012b0u,401);
}
B4340cc:L4340cc:{c.instructions+=2;NFSU2_TR(0x4340cc);
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
B4340cf:{NFSU2_TR(0x4340cf);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4340d0:L4340d0:{c.instructions+=2;NFSU2_TR(0x4340d0);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4340d3:{NFSU2_TR(0x4340d3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4340e6;}}
}
B4340d5:L4340d5:{c.instructions+=4;NFSU2_TR(0x4340d5);
u8 U[6];
w1(R+512,carry<u32>(r4(R+4),u32(0x290ull)));
w1(R+523,scarry<u32>(r4(R+4),u32(0x290ull)));
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x290ull))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4340db:{NFSU2_TR(0x4340db);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4340dc:{NFSU2_TR(0x4340dc);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4340e0:{NFSU2_TR(0x4340e0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4340e5ull));
TAIL_STATIC(0x4013d0u,401);
}
B4340e5:L4340e5:{c.instructions+=1;NFSU2_TR(0x4340e5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4340e6:L4340e6:{c.instructions+=2;NFSU2_TR(0x4340e6);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4340e9:{NFSU2_TR(0x4340e9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4340fc;}}
}
B4340eb:L4340eb:{c.instructions+=4;NFSU2_TR(0x4340eb);
u8 U[6];
w1(R+512,carry<u32>(r4(R+4),u32(0x2d0ull)));
w1(R+523,scarry<u32>(r4(R+4),u32(0x2d0ull)));
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x2d0ull))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4340f1:{NFSU2_TR(0x4340f1);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4340f2:{NFSU2_TR(0x4340f2);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4340f6:{NFSU2_TR(0x4340f6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4340fbull));
TAIL_STATIC(0x4013d0u,401);
}
B4340fb:L4340fb:{c.instructions+=1;NFSU2_TR(0x4340fb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4340fc:L4340fc:{c.instructions+=2;NFSU2_TR(0x4340fc);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4340ff:{NFSU2_TR(0x4340ff);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L434112;}}
}
B434101:L434101:{c.instructions+=4;NFSU2_TR(0x434101);
u8 U[6];
w1(R+512,carry<u32>(r4(R+4),u32(0x450ull)));
w1(R+523,scarry<u32>(r4(R+4),u32(0x450ull)));
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x450ull))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B434107:{NFSU2_TR(0x434107);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B434108:{NFSU2_TR(0x434108);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B43410c:{NFSU2_TR(0x43410c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x434111ull));
TAIL_STATIC(0x4013d0u,401);
}
B434111:L434111:{c.instructions+=1;NFSU2_TR(0x434111);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B434112:L434112:{c.instructions+=2;NFSU2_TR(0x434112);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B434115:{NFSU2_TR(0x434115);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L434128;}}
}
B434117:L434117:{c.instructions+=4;NFSU2_TR(0x434117);
u8 U[6];
w1(R+512,carry<u32>(r4(R+4),u32(0x490ull)));
w1(R+523,scarry<u32>(r4(R+4),u32(0x490ull)));
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x490ull))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B43411d:{NFSU2_TR(0x43411d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43411e:{NFSU2_TR(0x43411e);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B434122:{NFSU2_TR(0x434122);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x434127ull));
TAIL_STATIC(0x4013d0u,401);
}
B434127:L434127:{c.instructions+=1;NFSU2_TR(0x434127);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B434128:L434128:{c.instructions+=2;NFSU2_TR(0x434128);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x5ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B43412b:{NFSU2_TR(0x43412b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L43413e;}}
}
B43412d:L43412d:{c.instructions+=4;NFSU2_TR(0x43412d);
u8 U[6];
w1(R+512,carry<u32>(r4(R+4),u32(0x4d0ull)));
w1(R+523,scarry<u32>(r4(R+4),u32(0x4d0ull)));
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4d0ull))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B434133:{NFSU2_TR(0x434133);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B434134:{NFSU2_TR(0x434134);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B434138:{NFSU2_TR(0x434138);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x43413dull));
TAIL_STATIC(0x4013d0u,401);
}
B43413d:L43413d:{c.instructions+=1;NFSU2_TR(0x43413d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B43413e:L43413e:{c.instructions+=2;NFSU2_TR(0x43413e);
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
B434141:{NFSU2_TR(0x434141);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L434170;}}
}
B434143:L434143:{c.instructions+=4;NFSU2_TR(0x434143);
u8 U[6];
w1(R+512,carry<u32>(r4(R+4),u32(0x510ull)));
w1(R+523,scarry<u32>(r4(R+4),u32(0x510ull)));
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x510ull))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B434149:{NFSU2_TR(0x434149);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43414a:{NFSU2_TR(0x43414a);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B43414e:{NFSU2_TR(0x43414e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x434153ull));
TAIL_STATIC(0x4013d0u,401);
}
B434153:L434153:{c.instructions+=1;NFSU2_TR(0x434153);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B434154:L434154:{c.instructions+=3;NFSU2_TR(0x434154);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B434158:{NFSU2_TR(0x434158);
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
B43415a:{NFSU2_TR(0x43415a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L434170;}}
}
B43415c:L43415c:{c.instructions+=5;NFSU2_TR(0x43415c);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B434160:{NFSU2_TR(0x434160);
u8 U[6];
w1(R+512,carry<u32>(r4(R+4),u32(0x310ull)));
w1(R+523,scarry<u32>(r4(R+4),u32(0x310ull)));
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x310ull))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B434166:{NFSU2_TR(0x434166);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B434167:{NFSU2_TR(0x434167);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B434168:{NFSU2_TR(0x434168);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x43416dull));
TAIL_STATIC(0x4012b0u,401);
}
B43416d:L43416d:{c.instructions+=1;NFSU2_TR(0x43416d);
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
B434170:L434170:{c.instructions+=1;NFSU2_TR(0x434170);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B434190:L434190:{c.instructions+=10;NFSU2_TR(0x434190);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B434191:{NFSU2_TR(0x434191);
__builtin_memmove((R+20),(R+16),4);
}
B434193:{NFSU2_TR(0x434193);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B434196:{NFSU2_TR(0x434196);
u8 U[6];
w1(R+512,u8((r4(R+16))<(u32(0x54ull))));
w1(R+523,sborrow<u32>(r4(R+16),u32(0x54ull)));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x54ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B434199:{NFSU2_TR(0x434199);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43419a:{NFSU2_TR(0x43419a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43419b:{NFSU2_TR(0x43419b);
__builtin_memmove((R+24),gp(0x827ca4),4);
}
B4341a1:{NFSU2_TR(0x4341a1);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4341a2:{NFSU2_TR(0x4341a2);
w4(R+4,u32(0x827ca4ull));
}
B4341a7:{NFSU2_TR(0x4341a7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4341acull));
TAIL_STATIC(0x502fd0u,502);
}
B4341ac:L4341ac:{c.instructions+=2;NFSU2_TR(0x4341ac);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4341ae:{NFSU2_TR(0x4341ae);
if(r1(R+518)){{goto L4341c3;}}
}
B4341b0:L4341b0:{c.instructions+=4;NFSU2_TR(0x4341b0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4341b3:{NFSU2_TR(0x4341b3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4341b6:{NFSU2_TR(0x4341b6);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B4341b9:{NFSU2_TR(0x4341b9);
if(r1(R+518)){{goto L4341c6;}}
}
B4341bb:L4341bb:{c.instructions+=3;NFSU2_TR(0x4341bb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+24),(U+0),4);
}
B4341bd:{NFSU2_TR(0x4341bd);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4341bf:{NFSU2_TR(0x4341bf);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4341b0u);}goto L4341b0;}}
}
B4341c1:L4341c1:{c.instructions+=1;NFSU2_TR(0x4341c1);
{goto L4341c6;}
}
B4341c3:L4341c3:{c.instructions+=1;NFSU2_TR(0x4341c3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4341c6:L4341c6:{c.instructions+=2;NFSU2_TR(0x4341c6);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4341c7:{NFSU2_TR(0x4341c7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4341ccull));
TAIL_STATIC(0x433a30u,433);
}
B4341cc:L4341cc:{c.instructions+=5;NFSU2_TR(0x4341cc);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4341cf:{NFSU2_TR(0x4341cf);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((R+24),(U+0),4);
}
B4341d2:{NFSU2_TR(0x4341d2);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4341d5:{NFSU2_TR(0x4341d5);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4341d7:{NFSU2_TR(0x4341d7);
if(r1(R+518)){{goto L4341f3;}}
}
B4341d9:L4341d9:{c.instructions+=1;NFSU2_TR(0x4341d9);
__builtin_memmove((R+16),(R+16),4);
}
B4341e0:L4341e0:{c.instructions+=2;NFSU2_TR(0x4341e0);
u8 U[16];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B4341e3:{NFSU2_TR(0x4341e3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4341ed;}}
}
B4341e5:L4341e5:{c.instructions+=3;NFSU2_TR(0x4341e5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4341e8:{NFSU2_TR(0x4341e8);
u8 U[16];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+4))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B4341eb:{NFSU2_TR(0x4341eb);
if(r1(R+518)){{goto L434210;}}
}
B4341ed:L4341ed:{c.instructions+=3;NFSU2_TR(0x4341ed);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+8),(U+0),4);
}
B4341ef:{NFSU2_TR(0x4341ef);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4341f1:{NFSU2_TR(0x4341f1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4341e0u);}goto L4341e0;}}
}
B4341f3:L4341f3:{c.instructions+=2;NFSU2_TR(0x4341f3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4341f6:{NFSU2_TR(0x4341f6);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B4341f8:L4341f8:{c.instructions+=2;NFSU2_TR(0x4341f8);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4341fa:{NFSU2_TR(0x4341fa);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L434214;}}
}
B4341fc:L4341fc:{c.instructions+=3;NFSU2_TR(0x4341fc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4341ff:{NFSU2_TR(0x4341ff);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B434202:{NFSU2_TR(0x434202);
if(r1(R+518)){{goto L434209;}}
}
B434204:L434204:{c.instructions+=2;NFSU2_TR(0x434204);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x5ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B434207:{NFSU2_TR(0x434207);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L434214;}}
}
B434209:L434209:{c.instructions+=2;NFSU2_TR(0x434209);
u8 U[5];
w4(U+0,u32(u32(u32(0x12ull))+u32(r4(R+16))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B43420e:{NFSU2_TR(0x43420e);
{goto L43421d;}
}
B434210:L434210:{c.instructions+=2;NFSU2_TR(0x434210);
__builtin_memmove((R+24),(R+8),4);
}
B434212:{NFSU2_TR(0x434212);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4341f8u);}goto L4341f8;}
}
B434214:L434214:{c.instructions+=3;NFSU2_TR(0x434214);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B434216:{NFSU2_TR(0x434216);
u8 U[5];
w4(U+0,u32(u32(u32(0x12ull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B43421b:{NFSU2_TR(0x43421b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L434231;}}
}
B43421d:L43421d:{c.instructions+=3;NFSU2_TR(0x43421d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B434220:{NFSU2_TR(0x434220);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B434223:{NFSU2_TR(0x434223);
if(r1(R+518)){{goto L43422a;}}
}
B434225:L434225:{c.instructions+=2;NFSU2_TR(0x434225);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B434228:{NFSU2_TR(0x434228);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L434231;}}
}
B43422a:L43422a:{c.instructions+=2;NFSU2_TR(0x43422a);
u8 U[5];
w4(U+0,u32(u32(u32(0x13ull))+u32(r4(R+16))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B43422f:{NFSU2_TR(0x43422f);
{goto L434236;}
}
B434231:L434231:{c.instructions+=1;NFSU2_TR(0x434231);
u8 U[5];
w4(U+0,u32(u32(u32(0x13ull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B434236:L434236:{c.instructions+=6;NFSU2_TR(0x434236);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B434239:{NFSU2_TR(0x434239);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B43423c:{NFSU2_TR(0x43423c);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B434240:{NFSU2_TR(0x434240);
u8 U[5];
w4(U+0,u32(u32(u32(0x13ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B434244:{NFSU2_TR(0x434244);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(r1(R+8))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B434246:{NFSU2_TR(0x434246);
if(r1(R+518)){{goto L434254;}}
}
B434248:L434248:{c.instructions+=5;NFSU2_TR(0x434248);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B43424a:{NFSU2_TR(0x43424a);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B43424c:{NFSU2_TR(0x43424c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+8),(U+0),1);
}
B43424f:{NFSU2_TR(0x43424f);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x2ull))));
}
B434252:{NFSU2_TR(0x434252);
{goto L434267;}
}
B434254:L434254:{c.instructions+=3;NFSU2_TR(0x434254);
u8 U[5];
w4(U+0,u32(u32(u32(0x12ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B434258:{NFSU2_TR(0x434258);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(r1(R+8))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B43425a:{NFSU2_TR(0x43425a);
if(r1(R+518)){{goto L43426b;}}
}
B43425c:L43425c:{c.instructions+=4;NFSU2_TR(0x43425c);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B43425e:{NFSU2_TR(0x43425e);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B434261:{NFSU2_TR(0x434261);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+8),(U+0),1);
}
B434264:{NFSU2_TR(0x434264);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x4ull))));
}
B434267:L434267:{c.instructions+=1;NFSU2_TR(0x434267);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43426b:L43426b:{c.instructions+=5;NFSU2_TR(0x43426b);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B43426f:{NFSU2_TR(0x43426f);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B434270:{NFSU2_TR(0x434270);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B434271:{NFSU2_TR(0x434271);
__builtin_memmove((R+4),(R+0),4);
}
B434273:{NFSU2_TR(0x434273);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x434278ull));
TAIL_STATIC(0x433ad0u,433);
}
B434278:L434278:{c.instructions+=8;NFSU2_TR(0x434278);
{u32 ea_=u32(u32(8802700u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B43427e:{NFSU2_TR(0x43427e);
__builtin_memmove((R+28),(R+0),4);
}
B434280:{NFSU2_TR(0x434280);
u8 U[5];
w4(U+0,u32(u32(u32(0x12ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B434284:{NFSU2_TR(0x434284);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B434286:{NFSU2_TR(0x434286);
{u32 ea_=u32(u32(7881320u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B43428c:{NFSU2_TR(0x43428c);
{u32 ea_=u32(r4(R+24)+u32(24u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B43428f:{NFSU2_TR(0x43428f);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B434293:{NFSU2_TR(0x434293);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4342bb;}}
}
B434295:L434295:{c.instructions+=3;NFSU2_TR(0x434295);
u8 U[5];
w4(U+0,u32(u32(u32(0x13ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B434299:{NFSU2_TR(0x434299);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B43429b:{NFSU2_TR(0x43429b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4342bb;}}
}
B43429d:L43429d:{c.instructions+=9;NFSU2_TR(0x43429d);
{u32 ea_=u32(r4(R+24)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4342a0:{NFSU2_TR(0x4342a0);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4342a3:{NFSU2_TR(0x4342a3);
{u32 ea_=u32(r4(R+0)+u32(96u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4342a6:{NFSU2_TR(0x4342a6);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4342a9:{NFSU2_TR(0x4342a9);
{u32 ea_=u32(r4(R+0)+u32(100u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4342ac:{NFSU2_TR(0x4342ac);
{u32 ea_=u32(r4(R+0)+u32(96u));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B4342af:{NFSU2_TR(0x4342af);
{u32 ea_=u32(u32(7887832u));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B4342b5:{NFSU2_TR(0x4342b5);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4342b9:{NFSU2_TR(0x4342b9);
{goto L434311;}
}
B4342bb:L4342bb:{c.instructions+=13;NFSU2_TR(0x4342bb);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4342bd:{NFSU2_TR(0x4342bd);
{u32 ea_=u32(r4(R+24)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4342c0:{NFSU2_TR(0x4342c0);
{u32 ea_=u32(u32(7886096u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4342c6:{NFSU2_TR(0x4342c6);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4342c9:{NFSU2_TR(0x4342c9);
{u32 ea_=u32(r4(R+4)+u32(96u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4342cc:{NFSU2_TR(0x4342cc);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4342d2:{NFSU2_TR(0x4342d2);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4342d5:{NFSU2_TR(0x4342d5);
{u32 ea_=u32(u32(7887832u));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B4342db:{NFSU2_TR(0x4342db);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B4342de:{NFSU2_TR(0x4342de);
{u32 ea_=u32(r4(R+0)+u32(96u));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B4342e1:{NFSU2_TR(0x4342e1);
{u32 ea_=u32(r4(R+0)+u32(100u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4342e4:{NFSU2_TR(0x4342e4);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4342e8:{NFSU2_TR(0x4342e8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4342f9;}}
}
B4342ea:L4342ea:{c.instructions+=2;NFSU2_TR(0x4342ea);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4342ec:{NFSU2_TR(0x4342ec);
if(r1(R+518)){{goto L434308;}}
}
B4342ee:L4342ee:{c.instructions+=3;NFSU2_TR(0x4342ee);
{u32 ea_=u32(r4(R+24)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4342f1:{NFSU2_TR(0x4342f1);
{u32 ea_=u32(u32(7886096u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4342f7:{NFSU2_TR(0x4342f7);
{goto L43430e;}
}
B4342f9:L4342f9:{c.instructions+=2;NFSU2_TR(0x4342f9);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4342fb:{NFSU2_TR(0x4342fb);
if(r1(R+518)){{goto L434308;}}
}
B4342fd:L4342fd:{c.instructions+=3;NFSU2_TR(0x4342fd);
{u32 ea_=u32(r4(R+24)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B434300:{NFSU2_TR(0x434300);
{u32 ea_=u32(u32(7889640u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B434306:{NFSU2_TR(0x434306);
{goto L43430e;}
}
B434308:L434308:{c.instructions+=1;NFSU2_TR(0x434308);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B43430e:L43430e:{c.instructions+=1;NFSU2_TR(0x43430e);
{u32 ea_=u32(r4(R+0)+u32(96u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B434311:L434311:{c.instructions+=4;NFSU2_TR(0x434311);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B434314:{NFSU2_TR(0x434314);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B434318:{NFSU2_TR(0x434318);
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
B43431b:{NFSU2_TR(0x43431b);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L4343a2;}}
}
B434321:L434321:{c.instructions+=1;NFSU2_TR(0x434321);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x434448ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B434328:L434328:{c.instructions+=3;NFSU2_TR(0x434328);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B43432a:{NFSU2_TR(0x43432a);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B434330:{NFSU2_TR(0x434330);
{goto L4343a2;}
}
B434332:L434332:{c.instructions+=3;NFSU2_TR(0x434332);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B434334:{NFSU2_TR(0x434334);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B434338:{NFSU2_TR(0x434338);
{goto L4343a2;}
}
B43433a:L43433a:{c.instructions+=6;NFSU2_TR(0x43433a);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B43433c:{NFSU2_TR(0x43433c);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B434340:{NFSU2_TR(0x434340);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B434344:{NFSU2_TR(0x434344);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B434346:{NFSU2_TR(0x434346);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B434349:{NFSU2_TR(0x434349);
if(r1(R+514)){{goto L434351;}}
}
B43434b:L43434b:{c.instructions+=2;NFSU2_TR(0x43434b);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B43434f:{NFSU2_TR(0x43434f);
{goto L434355;}
}
B434351:L434351:{c.instructions+=1;NFSU2_TR(0x434351);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B434355:L434355:{c.instructions+=5;NFSU2_TR(0x434355);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B434359:{NFSU2_TR(0x434359);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B43435d:{NFSU2_TR(0x43435d);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B43435f:{NFSU2_TR(0x43435f);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B434362:{NFSU2_TR(0x434362);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4343a2;}}
}
B434364:L434364:{c.instructions+=2;NFSU2_TR(0x434364);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B43436b:{NFSU2_TR(0x43436b);
{goto L4343a2;}
}
B43436d:L43436d:{c.instructions+=6;NFSU2_TR(0x43436d);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B43436f:{NFSU2_TR(0x43436f);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B434373:{NFSU2_TR(0x434373);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B434377:{NFSU2_TR(0x434377);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B434379:{NFSU2_TR(0x434379);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B43437c:{NFSU2_TR(0x43437c);
if(r1(R+514)){{goto L434384;}}
}
B43437e:L43437e:{c.instructions+=2;NFSU2_TR(0x43437e);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B434382:{NFSU2_TR(0x434382);
{goto L434388;}
}
B434384:L434384:{c.instructions+=1;NFSU2_TR(0x434384);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B434388:L434388:{c.instructions+=5;NFSU2_TR(0x434388);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B43438c:{NFSU2_TR(0x43438c);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B434390:{NFSU2_TR(0x434390);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B434392:{NFSU2_TR(0x434392);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B434395:{NFSU2_TR(0x434395);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L43439e;}}
}
B434397:L434397:{c.instructions+=1;NFSU2_TR(0x434397);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B43439e:L43439e:{c.instructions+=1;NFSU2_TR(0x43439e);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B4343a2:L4343a2:{c.instructions+=9;NFSU2_TR(0x4343a2);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4343a5:{NFSU2_TR(0x4343a5);
{u32 ea_=u32(u32(7887832u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4343ab:{NFSU2_TR(0x4343ab);
{u32 ea_=u32(r4(R+0)+u32(96u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4343ae:{NFSU2_TR(0x4343ae);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4343b0:{NFSU2_TR(0x4343b0);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B4343b2:{NFSU2_TR(0x4343b2);
{u32 ea_=u32(r4(R+0)+u32(104u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4343b5:{NFSU2_TR(0x4343b5);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4343b8:{NFSU2_TR(0x4343b8);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B4343ba:{NFSU2_TR(0x4343ba);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4343bfull));
TAIL_STATIC(0x431400u,431);
}
B4343bf:L4343bf:{c.instructions+=7;NFSU2_TR(0x4343bf);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4343c2:{NFSU2_TR(0x4343c2);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4343c5:{NFSU2_TR(0x4343c5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B4343c8:{NFSU2_TR(0x4343c8);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),u32(0x40ull)));
w1(R+523,scarry<u32>(r4(R+0),u32(0x40ull)));
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x40ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4343cb:{NFSU2_TR(0x4343cb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4343cc:{NFSU2_TR(0x4343cc);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4343cd:{NFSU2_TR(0x4343cd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4343d2ull));
TAIL_STATIC(0x4012b0u,401);
}
B4343d2:L4343d2:{c.instructions+=7;NFSU2_TR(0x4343d2);
{u32 ea_=u32(r4(R+24)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4343d5:{NFSU2_TR(0x4343d5);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B4343d7:{NFSU2_TR(0x4343d7);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4343da:{NFSU2_TR(0x4343da);
{u32 ea_=u32(u32(7889632u));__asm__ volatile(".byte 0xdc,0x18"::"a"(ea_):"memory");}
}
B4343e0:{NFSU2_TR(0x4343e0);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4343e2:{NFSU2_TR(0x4343e2);
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
B4343e5:{NFSU2_TR(0x4343e5);
if(r1(R+514)){{goto L434441;}}
}
B4343e7:L4343e7:{c.instructions+=6;NFSU2_TR(0x4343e7);
{u32 ea_=u32(r4(R+24)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4343ea:{NFSU2_TR(0x4343ea);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B4343ec:{NFSU2_TR(0x4343ec);
{u32 ea_=u32(u32(7889632u));__asm__ volatile(".byte 0xdc,0x18"::"a"(ea_):"memory");}
}
B4343f2:{NFSU2_TR(0x4343f2);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4343f4:{NFSU2_TR(0x4343f4);
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
B4343f7:{NFSU2_TR(0x4343f7);
if(r1(R+514)){{goto L434441;}}
}
B4343f9:L4343f9:{c.instructions+=6;NFSU2_TR(0x4343f9);
{u32 ea_=u32(r4(R+24)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4343fc:{NFSU2_TR(0x4343fc);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B4343fe:{NFSU2_TR(0x4343fe);
{u32 ea_=u32(u32(7889632u));__asm__ volatile(".byte 0xdc,0x18"::"a"(ea_):"memory");}
}
B434404:{NFSU2_TR(0x434404);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B434406:{NFSU2_TR(0x434406);
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
B434409:{NFSU2_TR(0x434409);
if(r1(R+514)){{goto L434441;}}
}
B43440b:L43440b:{c.instructions+=9;NFSU2_TR(0x43440b);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B43440f:{NFSU2_TR(0x43440f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B434412:{NFSU2_TR(0x434412);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B434413:{NFSU2_TR(0x434413);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B434416:{NFSU2_TR(0x434416);
u8 U[4];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B43441a:{NFSU2_TR(0x43441a);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43441b:{NFSU2_TR(0x43441b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43441c:{NFSU2_TR(0x43441c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43441d:{NFSU2_TR(0x43441d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x434422ull));
TAIL_STATIC(0x433f40u,433);
}
B434422:L434422:{c.instructions+=9;NFSU2_TR(0x434422);
u8 U[8];
w4(U+0,u32(u32(u32(0x60ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B434426:{NFSU2_TR(0x434426);
u8 U[8];
w4(U+0,u32(u32(u32(0x64ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B43442a:{NFSU2_TR(0x43442a);
u8 U[8];
w4(U+0,u32(u32(u32(0x68ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B43442e:{NFSU2_TR(0x43442e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B434431:{NFSU2_TR(0x434431);
u8 U[8];
w4(U+0,u32(u32(u32(0x6cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B434435:{NFSU2_TR(0x434435);
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
B434438:{NFSU2_TR(0x434438);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43443b:{NFSU2_TR(0x43443b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43443e:{NFSU2_TR(0x43443e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B434441:L434441:{c.instructions+=6;NFSU2_TR(0x434441);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B434442:{NFSU2_TR(0x434442);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B434443:{NFSU2_TR(0x434443);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B434444:{NFSU2_TR(0x434444);
__builtin_memmove((R+16),(R+20),4);
}
B434446:{NFSU2_TR(0x434446);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B434447:{NFSU2_TR(0x434447);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B434460:L434460:{c.instructions+=10;NFSU2_TR(0x434460);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B434461:{NFSU2_TR(0x434461);
__builtin_memmove((R+20),(R+16),4);
}
B434463:{NFSU2_TR(0x434463);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B434466:{NFSU2_TR(0x434466);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x44ull))));
}
B434469:{NFSU2_TR(0x434469);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43446a:{NFSU2_TR(0x43446a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43446b:{NFSU2_TR(0x43446b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43446c:{NFSU2_TR(0x43446c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B43446f:{NFSU2_TR(0x43446f);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B434470:{NFSU2_TR(0x434470);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x434475ull));
TAIL_STATIC(0x433a30u,433);
}
B434475:L434475:{c.instructions+=6;NFSU2_TR(0x434475);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B434478:{NFSU2_TR(0x434478);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((R+24),(U+0),4);
}
B43447b:{NFSU2_TR(0x43447b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B43447e:{NFSU2_TR(0x43447e);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B434480:{NFSU2_TR(0x434480);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B434484:{NFSU2_TR(0x434484);
if(r1(R+518)){{goto L434499;}}
}
B434486:L434486:{c.instructions+=2;NFSU2_TR(0x434486);
u8 U[16];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B434489:{NFSU2_TR(0x434489);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L434493;}}
}
B43448b:L43448b:{c.instructions+=3;NFSU2_TR(0x43448b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B43448e:{NFSU2_TR(0x43448e);
u8 U[16];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+12))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B434491:{NFSU2_TR(0x434491);
if(r1(R+518)){{goto L4344b3;}}
}
B434493:L434493:{c.instructions+=3;NFSU2_TR(0x434493);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+8),(U+0),4);
}
B434495:{NFSU2_TR(0x434495);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B434497:{NFSU2_TR(0x434497);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x434486u);}goto L434486;}}
}
B434499:L434499:{c.instructions+=2;NFSU2_TR(0x434499);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B43449c:{NFSU2_TR(0x43449c);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B43449e:L43449e:{c.instructions+=2;NFSU2_TR(0x43449e);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4344a0:{NFSU2_TR(0x4344a0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4344b7;}}
}
B4344a2:L4344a2:{c.instructions+=3;NFSU2_TR(0x4344a2);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4344a5:{NFSU2_TR(0x4344a5);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4344a8:{NFSU2_TR(0x4344a8);
if(r1(R+518)){{goto L4344af;}}
}
B4344aa:L4344aa:{c.instructions+=2;NFSU2_TR(0x4344aa);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4344ad:{NFSU2_TR(0x4344ad);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4344b7;}}
}
B4344af:L4344af:{c.instructions+=2;NFSU2_TR(0x4344af);
w1(R+4,u8(0x1ull));
}
B4344b1:{NFSU2_TR(0x4344b1);
{goto L4344bd;}
}
B4344b3:L4344b3:{c.instructions+=2;NFSU2_TR(0x4344b3);
__builtin_memmove((R+28),(R+8),4);
}
B4344b5:{NFSU2_TR(0x4344b5);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x43449eu);}goto L43449e;}
}
B4344b7:L4344b7:{c.instructions+=3;NFSU2_TR(0x4344b7);
w1(R+4,u8(u32(r1(R+4))^u32(r1(R+4))));
}
B4344b9:{NFSU2_TR(0x4344b9);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4344bb:{NFSU2_TR(0x4344bb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4344ce;}}
}
B4344bd:L4344bd:{c.instructions+=3;NFSU2_TR(0x4344bd);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4344c0:{NFSU2_TR(0x4344c0);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4344c3:{NFSU2_TR(0x4344c3);
if(r1(R+518)){{goto L4344ca;}}
}
B4344c5:L4344c5:{c.instructions+=2;NFSU2_TR(0x4344c5);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x5ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4344c8:{NFSU2_TR(0x4344c8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4344ce;}}
}
B4344ca:L4344ca:{c.instructions+=2;NFSU2_TR(0x4344ca);
w1(R+8,u8(0x1ull));
}
B4344cc:{NFSU2_TR(0x4344cc);
{goto L4344d0;}
}
B4344ce:L4344ce:{c.instructions+=1;NFSU2_TR(0x4344ce);
w1(R+8,u8(u32(r1(R+8))^u32(r1(R+8))));
}
B4344d0:L4344d0:{c.instructions+=3;NFSU2_TR(0x4344d0);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4344d2:{NFSU2_TR(0x4344d2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B4344d5:{NFSU2_TR(0x4344d5);
if(r1(R+518)){{goto L4344df;}}
}
B4344d7:L4344d7:{c.instructions+=2;NFSU2_TR(0x4344d7);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4344d9:{NFSU2_TR(0x4344d9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4344df;}}
}
B4344db:L4344db:{c.instructions+=2;NFSU2_TR(0x4344db);
w1(R+0,u8(0x1ull));
}
B4344dd:{NFSU2_TR(0x4344dd);
{goto L4344e1;}
}
B4344df:L4344df:{c.instructions+=1;NFSU2_TR(0x4344df);
w1(R+0,u8(u32(r1(R+0))^u32(r1(R+0))));
}
B4344e1:L4344e1:{c.instructions+=2;NFSU2_TR(0x4344e1);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(r1(R+8))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4344e3:{NFSU2_TR(0x4344e3);
if(r1(R+518)){{goto L4344ee;}}
}
B4344e5:L4344e5:{c.instructions+=2;NFSU2_TR(0x4344e5);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4344e8:{NFSU2_TR(0x4344e8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4344ee;}}
}
B4344ea:L4344ea:{c.instructions+=2;NFSU2_TR(0x4344ea);
w1(R+12,u8(0x1ull));
}
B4344ec:{NFSU2_TR(0x4344ec);
{goto L4344f0;}
}
B4344ee:L4344ee:{c.instructions+=1;NFSU2_TR(0x4344ee);
w1(R+12,u8(u32(r1(R+12))^u32(r1(R+12))));
}
B4344f0:L4344f0:{c.instructions+=3;NFSU2_TR(0x4344f0);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4344f2:{NFSU2_TR(0x4344f2);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B4344f5:{NFSU2_TR(0x4344f5);
if(r1(R+518)){{goto L434502;}}
}
B4344f7:L4344f7:{c.instructions+=5;NFSU2_TR(0x4344f7);
w1(R+512,u8((r1(R+0))!=(u8(0x0ull))));
w1(R+0,u8(0-u32(r1(R+0))));
}
B4344f9:{NFSU2_TR(0x4344f9);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(R+0))));
w4(R+0,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B4344fb:{NFSU2_TR(0x4344fb);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x3ull))));
}
B4344fe:{NFSU2_TR(0x4344fe);
__builtin_memmove((R+24),(R+0),4);
}
B434500:{NFSU2_TR(0x434500);
{goto L43450f;}
}
B434502:L434502:{c.instructions+=2;NFSU2_TR(0x434502);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(r1(R+8))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B434504:{NFSU2_TR(0x434504);
if(r1(R+518)){{goto L43450f;}}
}
B434506:L434506:{c.instructions+=4;NFSU2_TR(0x434506);
w1(R+512,u8((r1(R+12))!=(u8(0x0ull))));
w1(R+12,u8(0-u32(r1(R+12))));
}
B434508:{NFSU2_TR(0x434508);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+12))-u32(r4(R+12))));
w4(R+12,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B43450a:{NFSU2_TR(0x43450a);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x5ull))));
}
B43450d:{NFSU2_TR(0x43450d);
__builtin_memmove((R+24),(R+12),4);
}
B43450f:L43450f:{c.instructions+=5;NFSU2_TR(0x43450f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B434512:{NFSU2_TR(0x434512);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B434516:{NFSU2_TR(0x434516);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B434517:{NFSU2_TR(0x434517);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B434518:{NFSU2_TR(0x434518);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x43451dull));
TAIL_STATIC(0x433ad0u,433);
}
B43451d:L43451d:{c.instructions+=3;NFSU2_TR(0x43451d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B434520:{NFSU2_TR(0x434520);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B434521:{NFSU2_TR(0x434521);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x434526ull));
TAIL_STATIC(0x43c780u,43c);
}
B434526:L434526:{c.instructions+=7;NFSU2_TR(0x434526);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B434529:{NFSU2_TR(0x434529);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43452a:{NFSU2_TR(0x43452a);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B43452e:{NFSU2_TR(0x43452e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43452f:{NFSU2_TR(0x43452f);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B434530:{NFSU2_TR(0x434530);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B434531:{NFSU2_TR(0x434531);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x434536ull));
TAIL_STATIC(0x433f40u,433);
}
B434536:L434536:{c.instructions+=4;NFSU2_TR(0x434536);
u8 U[4];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B43453a:{NFSU2_TR(0x43453a);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43453b:{NFSU2_TR(0x43453b);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43453c:{NFSU2_TR(0x43453c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x434541ull));
TAIL_STATIC(0x4012b0u,401);
}
B434541:L434541:{c.instructions+=7;NFSU2_TR(0x434541);
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
B434544:{NFSU2_TR(0x434544);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B434545:{NFSU2_TR(0x434545);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B434546:{NFSU2_TR(0x434546);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B434547:{NFSU2_TR(0x434547);
__builtin_memmove((R+16),(R+20),4);
}
B434549:{NFSU2_TR(0x434549);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B43454a:{NFSU2_TR(0x43454a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B434550:L434550:{c.instructions+=6;NFSU2_TR(0x434550);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B434551:{NFSU2_TR(0x434551);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B434552:{NFSU2_TR(0x434552);
__builtin_memmove((R+24),gp(0x827ca4),4);
}
B434558:{NFSU2_TR(0x434558);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B434559:{NFSU2_TR(0x434559);
w4(R+4,u32(0x827ca4ull));
}
B43455e:{NFSU2_TR(0x43455e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x434563ull));
TAIL_STATIC(0x502fd0u,502);
}
B434563:L434563:{c.instructions+=3;NFSU2_TR(0x434563);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B434565:{NFSU2_TR(0x434565);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B434569:{NFSU2_TR(0x434569);
if(r1(R+518)){{goto L43457e;}}
}
B43456b:L43456b:{c.instructions+=1;NFSU2_TR(0x43456b);
{goto L434570;}
}
B434570:L434570:{c.instructions+=3;NFSU2_TR(0x434570);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B434573:{NFSU2_TR(0x434573);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B434576:{NFSU2_TR(0x434576);
if(r1(R+518)){{goto L43457e;}}
}
B434578:L434578:{c.instructions+=3;NFSU2_TR(0x434578);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+24),(U+0),4);
}
B43457a:{NFSU2_TR(0x43457a);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B43457c:{NFSU2_TR(0x43457c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x434570u);}goto L434570;}}
}
B43457e:L43457e:{c.instructions+=2;NFSU2_TR(0x43457e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43457f:{NFSU2_TR(0x43457f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x434584ull));
TAIL_STATIC(0x433a30u,433);
}
B434584:L434584:{c.instructions+=6;NFSU2_TR(0x434584);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B434588:{NFSU2_TR(0x434588);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((R+4),(U+0),4);
}
B43458b:{NFSU2_TR(0x43458b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B43458d:{NFSU2_TR(0x43458d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B434590:{NFSU2_TR(0x434590);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B434592:{NFSU2_TR(0x434592);
if(r1(R+518)){{goto L4345a4;}}
}
B434594:L434594:{c.instructions+=2;NFSU2_TR(0x434594);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B434597:{NFSU2_TR(0x434597);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L43459e;}}
}
B434599:L434599:{c.instructions+=2;NFSU2_TR(0x434599);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+8))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B43459c:{NFSU2_TR(0x43459c);
if(r1(R+518)){{goto L4345a6;}}
}
B43459e:L43459e:{c.instructions+=3;NFSU2_TR(0x43459e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4345a0:{NFSU2_TR(0x4345a0);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4345a2:{NFSU2_TR(0x4345a2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x434594u);}goto L434594;}}
}
B4345a4:L4345a4:{c.instructions+=1;NFSU2_TR(0x4345a4);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4345a6:L4345a6:{c.instructions+=2;NFSU2_TR(0x4345a6);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4345a8:{NFSU2_TR(0x4345a8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4345bb;}}
}
B4345aa:L4345aa:{c.instructions+=3;NFSU2_TR(0x4345aa);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4345ad:{NFSU2_TR(0x4345ad);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4345b0:{NFSU2_TR(0x4345b0);
if(r1(R+518)){{goto L4345b7;}}
}
B4345b2:L4345b2:{c.instructions+=2;NFSU2_TR(0x4345b2);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x5ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4345b5:{NFSU2_TR(0x4345b5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4345bb;}}
}
B4345b7:L4345b7:{c.instructions+=2;NFSU2_TR(0x4345b7);
w1(R+12,u8(0x1ull));
}
B4345b9:{NFSU2_TR(0x4345b9);
{goto L4345c1;}
}
B4345bb:L4345bb:{c.instructions+=3;NFSU2_TR(0x4345bb);
w1(R+12,u8(u32(r1(R+12))^u32(r1(R+12))));
}
B4345bd:{NFSU2_TR(0x4345bd);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4345bf:{NFSU2_TR(0x4345bf);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4345d2;}}
}
B4345c1:L4345c1:{c.instructions+=3;NFSU2_TR(0x4345c1);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4345c4:{NFSU2_TR(0x4345c4);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4345c7:{NFSU2_TR(0x4345c7);
if(r1(R+518)){{goto L4345ce;}}
}
B4345c9:L4345c9:{c.instructions+=2;NFSU2_TR(0x4345c9);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4345cc:{NFSU2_TR(0x4345cc);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4345d2;}}
}
B4345ce:L4345ce:{c.instructions+=2;NFSU2_TR(0x4345ce);
w1(R+4,u8(0x1ull));
}
B4345d0:{NFSU2_TR(0x4345d0);
{goto L4345d4;}
}
B4345d2:L4345d2:{c.instructions+=1;NFSU2_TR(0x4345d2);
w1(R+4,u8(u32(r1(R+4))^u32(r1(R+4))));
}
B4345d4:L4345d4:{c.instructions+=3;NFSU2_TR(0x4345d4);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4345d6:{NFSU2_TR(0x4345d6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4345d9:{NFSU2_TR(0x4345d9);
if(r1(R+518)){{goto L4345ed;}}
}
B4345db:L4345db:{c.instructions+=9;NFSU2_TR(0x4345db);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4345df:{NFSU2_TR(0x4345df);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4345e1:{NFSU2_TR(0x4345e1);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4345e3:{NFSU2_TR(0x4345e3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+0),(U+0),1);
}
B4345e6:{NFSU2_TR(0x4345e6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4345e7:{NFSU2_TR(0x4345e7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4345e8:{NFSU2_TR(0x4345e8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4345e9:{NFSU2_TR(0x4345e9);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),u32(0x2ull)));
w1(R+523,scarry<u32>(r4(R+0),u32(0x2ull)));
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x2ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4345ec:{NFSU2_TR(0x4345ec);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4345ed:L4345ed:{c.instructions+=2;NFSU2_TR(0x4345ed);
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
B4345ef:{NFSU2_TR(0x4345ef);
if(r1(R+518)){{goto L434600;}}
}
B4345f1:L4345f1:{c.instructions+=5;NFSU2_TR(0x4345f1);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4345f5:{NFSU2_TR(0x4345f5);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4345f7:{NFSU2_TR(0x4345f7);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4345fa:{NFSU2_TR(0x4345fa);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+0),(U+0),1);
}
B4345fd:{NFSU2_TR(0x4345fd);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),u32(0x4ull)));
w1(R+523,scarry<u32>(r4(R+0),u32(0x4ull)));
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B434600:L434600:{c.instructions+=4;NFSU2_TR(0x434600);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B434601:{NFSU2_TR(0x434601);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B434602:{NFSU2_TR(0x434602);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B434603:{NFSU2_TR(0x434603);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B434610:L434610:{c.instructions+=6;NFSU2_TR(0x434610);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B434611:{NFSU2_TR(0x434611);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B434612:{NFSU2_TR(0x434612);
__builtin_memmove((R+24),gp(0x827ca4),4);
}
B434618:{NFSU2_TR(0x434618);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B434619:{NFSU2_TR(0x434619);
w4(R+4,u32(0x827ca4ull));
}
B43461e:{NFSU2_TR(0x43461e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x434623ull));
TAIL_STATIC(0x502fd0u,502);
}
B434623:L434623:{c.instructions+=3;NFSU2_TR(0x434623);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B434625:{NFSU2_TR(0x434625);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B434629:{NFSU2_TR(0x434629);
if(r1(R+518)){{goto L43463e;}}
}
B43462b:L43462b:{c.instructions+=1;NFSU2_TR(0x43462b);
{goto L434630;}
}
B434630:L434630:{c.instructions+=3;NFSU2_TR(0x434630);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B434633:{NFSU2_TR(0x434633);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B434636:{NFSU2_TR(0x434636);
if(r1(R+518)){{goto L43463e;}}
}
B434638:L434638:{c.instructions+=3;NFSU2_TR(0x434638);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+24),(U+0),4);
}
B43463a:{NFSU2_TR(0x43463a);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B43463c:{NFSU2_TR(0x43463c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x434630u);}goto L434630;}}
}
B43463e:L43463e:{c.instructions+=2;NFSU2_TR(0x43463e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43463f:{NFSU2_TR(0x43463f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x434644ull));
TAIL_STATIC(0x433a30u,433);
}
B434644:L434644:{c.instructions+=7;NFSU2_TR(0x434644);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B434648:{NFSU2_TR(0x434648);
__builtin_memmove((R+4),(R+0),4);
}
B43464a:{NFSU2_TR(0x43464a);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B43464d:{NFSU2_TR(0x43464d);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((R+24),(U+0),4);
}
B434650:{NFSU2_TR(0x434650);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B434653:{NFSU2_TR(0x434653);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B434655:{NFSU2_TR(0x434655);
if(r1(R+518)){{goto L434667;}}
}
B434657:L434657:{c.instructions+=2;NFSU2_TR(0x434657);
u8 U[16];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B43465a:{NFSU2_TR(0x43465a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L434661;}}
}
B43465c:L43465c:{c.instructions+=2;NFSU2_TR(0x43465c);
u8 U[16];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+20))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B43465f:{NFSU2_TR(0x43465f);
if(r1(R+518)){{goto L434669;}}
}
B434661:L434661:{c.instructions+=3;NFSU2_TR(0x434661);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+8),(U+0),4);
}
B434663:{NFSU2_TR(0x434663);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B434665:{NFSU2_TR(0x434665);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x434657u);}goto L434657;}}
}
B434667:L434667:{c.instructions+=1;NFSU2_TR(0x434667);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B434669:L434669:{c.instructions+=3;NFSU2_TR(0x434669);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))&u32(r4(R+20))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B43466b:{NFSU2_TR(0x43466b);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43466c:{NFSU2_TR(0x43466c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L43467f;}}
}
B43466e:L43466e:{c.instructions+=3;NFSU2_TR(0x43466e);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B434671:{NFSU2_TR(0x434671);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B434674:{NFSU2_TR(0x434674);
if(r1(R+518)){{goto L43467b;}}
}
B434676:L434676:{c.instructions+=2;NFSU2_TR(0x434676);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x5ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B434679:{NFSU2_TR(0x434679);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L43467f;}}
}
B43467b:L43467b:{c.instructions+=2;NFSU2_TR(0x43467b);
w1(R+0,u8(0x1ull));
}
B43467d:{NFSU2_TR(0x43467d);
{goto L434685;}
}
B43467f:L43467f:{c.instructions+=3;NFSU2_TR(0x43467f);
w1(R+0,u8(u32(r1(R+0))^u32(r1(R+0))));
}
B434681:{NFSU2_TR(0x434681);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))&u32(r4(R+20))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B434683:{NFSU2_TR(0x434683);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L434696;}}
}
B434685:L434685:{c.instructions+=3;NFSU2_TR(0x434685);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B434688:{NFSU2_TR(0x434688);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B43468b:{NFSU2_TR(0x43468b);
if(r1(R+518)){{goto L434692;}}
}
B43468d:L43468d:{c.instructions+=2;NFSU2_TR(0x43468d);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B434690:{NFSU2_TR(0x434690);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L434696;}}
}
B434692:L434692:{c.instructions+=2;NFSU2_TR(0x434692);
w1(R+12,u8(0x1ull));
}
B434694:{NFSU2_TR(0x434694);
{goto L434698;}
}
B434696:L434696:{c.instructions+=1;NFSU2_TR(0x434696);
w1(R+12,u8(u32(r1(R+12))^u32(r1(R+12))));
}
B434698:L434698:{c.instructions+=4;NFSU2_TR(0x434698);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B43469b:{NFSU2_TR(0x43469b);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(r1(R+12))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B43469d:{NFSU2_TR(0x43469d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B43469e:{NFSU2_TR(0x43469e);
if(r1(R+518)){{goto L4346b0;}}
}
B4346a0:L4346a0:{c.instructions+=6;NFSU2_TR(0x4346a0);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B4346a4:{NFSU2_TR(0x4346a4);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B4346a6:{NFSU2_TR(0x4346a6);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4346a8:{NFSU2_TR(0x4346a8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+8),(U+0),1);
}
B4346ab:{NFSU2_TR(0x4346ab);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x2ull))));
}
B4346ae:{NFSU2_TR(0x4346ae);
{goto L4346c3;}
}
B4346b0:L4346b0:{c.instructions+=2;NFSU2_TR(0x4346b0);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4346b2:{NFSU2_TR(0x4346b2);
if(r1(R+518)){{goto L4346c3;}}
}
B4346b4:L4346b4:{c.instructions+=5;NFSU2_TR(0x4346b4);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B4346b8:{NFSU2_TR(0x4346b8);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B4346ba:{NFSU2_TR(0x4346ba);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4346bd:{NFSU2_TR(0x4346bd);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+8),(U+0),1);
}
B4346c0:{NFSU2_TR(0x4346c0);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x4ull))));
}
B4346c3:L4346c3:{c.instructions+=3;NFSU2_TR(0x4346c3);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4346c4:{NFSU2_TR(0x4346c4);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4346c5:{NFSU2_TR(0x4346c5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4346caull));
TAIL_STATIC(0x433ad0u,433);
}
B4346ca:L4346ca:{c.instructions+=6;NFSU2_TR(0x4346ca);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4346cd:{NFSU2_TR(0x4346cd);
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
B4346cf:{NFSU2_TR(0x4346cf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4346d0:{NFSU2_TR(0x4346d0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4346d1:{NFSU2_TR(0x4346d1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4346d2:{NFSU2_TR(0x4346d2);
if(r1(R+518)){{goto L4346f5;}}
}
B4346d4:L4346d4:{c.instructions+=11;NFSU2_TR(0x4346d4);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4346da:{NFSU2_TR(0x4346da);
{u32 ea_=u32(u32(7887832u));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B4346e0:{NFSU2_TR(0x4346e0);
{u32 ea_=u32(r4(R+0)+u32(104u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4346e3:{NFSU2_TR(0x4346e3);
{u32 ea_=u32(r4(R+0)+u32(96u));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B4346e6:{NFSU2_TR(0x4346e6);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B4346e8:{NFSU2_TR(0x4346e8);
{u32 ea_=u32(r4(R+0)+u32(100u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4346eb:{NFSU2_TR(0x4346eb);
{u32 ea_=u32(r4(R+0)+u32(96u));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B4346ee:{NFSU2_TR(0x4346ee);
__asm__ volatile(".byte 0xd8,0xca":::"memory");
}
B4346f0:{NFSU2_TR(0x4346f0);
__asm__ volatile(".byte 0xde,0xf9":::"memory");
}
B4346f2:{NFSU2_TR(0x4346f2);
__asm__ volatile(".byte 0xdd,0xd9":::"memory");
}
B4346f4:{NFSU2_TR(0x4346f4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4346f5:L4346f5:{c.instructions+=2;NFSU2_TR(0x4346f5);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4346fb:{NFSU2_TR(0x4346fb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B434700:L434700:{c.instructions+=2;NFSU2_TR(0x434700);
u8 U[4];
w4(U+0,u32(0x7862ecull));
s4(u32(r4(R+4)),r4(U+0));
}
B434706:{NFSU2_TR(0x434706);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B434710:L434710:{c.instructions+=6;NFSU2_TR(0x434710);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B434711:{NFSU2_TR(0x434711);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B434712:{NFSU2_TR(0x434712);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B434714:{NFSU2_TR(0x434714);
u8 U[4];
w4(U+0,u32(0x30ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B434716:{NFSU2_TR(0x434716);
__builtin_memmove((R+24),(R+4),4);
}
B434718:{NFSU2_TR(0x434718);
u8 U[4];
__builtin_memmove((U+0),gp(0x80bfd8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x43471eull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B43471e:L43471e:{c.instructions+=4;NFSU2_TR(0x43471e);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B434722:{NFSU2_TR(0x434722);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B434725:{NFSU2_TR(0x434725);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B434727:{NFSU2_TR(0x434727);
if(r1(R+518)){{goto L43473a;}}
}
B434729:L434729:{c.instructions+=6;NFSU2_TR(0x434729);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B43472d:{NFSU2_TR(0x43472d);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43472f:{NFSU2_TR(0x43472f);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B434730:{NFSU2_TR(0x434730);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B434731:{NFSU2_TR(0x434731);
__builtin_memmove((R+4),(R+0),4);
}
B434733:{NFSU2_TR(0x434733);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x434738ull));
TAIL_STATIC(0x6d80b0u,6d8);
}
B434738:L434738:{c.instructions+=1;NFSU2_TR(0x434738);
{goto L43473c;}
}
B43473a:L43473a:{c.instructions+=1;NFSU2_TR(0x43473a);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B43473c:L43473c:{c.instructions+=5;NFSU2_TR(0x43473c);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43473e:{NFSU2_TR(0x43473e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B434741:{NFSU2_TR(0x434741);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B434744:{NFSU2_TR(0x434744);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B43474b:{NFSU2_TR(0x43474b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x434750ull));
TAIL_STATIC(0x575620u,575);
}
B434750:L434750:{c.instructions+=3;NFSU2_TR(0x434750);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B434753:{NFSU2_TR(0x434753);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B434755:{NFSU2_TR(0x434755);
if(r1(R+518)){{goto L434766;}}
}
B434757:L434757:{c.instructions+=3;NFSU2_TR(0x434757);
u8 U[4];
w4(U+0,u32(0x786098ull));
s4(u32(r4(R+0)),r4(U+0));
}
B43475d:{NFSU2_TR(0x43475d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B434764:{NFSU2_TR(0x434764);
{goto L434768;}
}
B434766:L434766:{c.instructions+=1;NFSU2_TR(0x434766);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B434768:L434768:{c.instructions+=9;NFSU2_TR(0x434768);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B43476b:{NFSU2_TR(0x43476b);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B43476f:{NFSU2_TR(0x43476f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B434772:{NFSU2_TR(0x434772);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B434773:{NFSU2_TR(0x434773);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B434777:{NFSU2_TR(0x434777);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B434778:{NFSU2_TR(0x434778);
u8 U[4];
w4(U+0,u32(0x7bff3cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43477d:{NFSU2_TR(0x43477d);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B434785:{NFSU2_TR(0x434785);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x43478aull));
TAIL_STATIC(0x6d7960u,6d7);
}
B43478a:L43478a:{c.instructions+=9;NFSU2_TR(0x43478a);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B43478e:{NFSU2_TR(0x43478e);
w1(R+512,u8((r1(R+0))!=(u8(0x0ull))));
w1(R+0,u8(0-u32(r1(R+0))));
}
B434790:{NFSU2_TR(0x434790);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(R+0))));
w4(R+0,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B434792:{NFSU2_TR(0x434792);
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
B434794:{NFSU2_TR(0x434794);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B434797:{NFSU2_TR(0x434797);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43479a:{NFSU2_TR(0x43479a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B43479c:{NFSU2_TR(0x43479c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43479d:{NFSU2_TR(0x43479d);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x43479full));
{u32 t_=u32(r4(U+4));TAIL_DYNAMIC(t_);}
}
B43479f:L43479f:{c.instructions+=3;NFSU2_TR(0x43479f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4347a2:{NFSU2_TR(0x4347a2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4347a4:{NFSU2_TR(0x4347a4);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4347a7ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4347a7:L4347a7:{c.instructions+=4;NFSU2_TR(0x4347a7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4347a8:{NFSU2_TR(0x4347a8);
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
B4347aa:{NFSU2_TR(0x4347aa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4347ab:{NFSU2_TR(0x4347ab);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4347b0:L4347b0:{c.instructions+=15;NFSU2_TR(0x4347b0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4347b1:{NFSU2_TR(0x4347b1);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B4347b3:{NFSU2_TR(0x4347b3);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4347b4:{NFSU2_TR(0x4347b4);
__builtin_memmove((R+24),(R+4),4);
}
B4347b6:{NFSU2_TR(0x4347b6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4347b9:{NFSU2_TR(0x4347b9);
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
B4347bb:{NFSU2_TR(0x4347bb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4347be:{NFSU2_TR(0x4347be);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4347c1:{NFSU2_TR(0x4347c1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4347c4:{NFSU2_TR(0x4347c4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4347c7:{NFSU2_TR(0x4347c7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4347ca:{NFSU2_TR(0x4347ca);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4347cd:{NFSU2_TR(0x4347cd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4347d0:{NFSU2_TR(0x4347d0);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4347d3:{NFSU2_TR(0x4347d3);
if(r1(R+518)){{goto L4347dc;}}
}
B4347d5:L4347d5:{c.instructions+=3;NFSU2_TR(0x4347d5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4347d7:{NFSU2_TR(0x4347d7);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4347d9:{NFSU2_TR(0x4347d9);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4347dcull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4347dc:L4347dc:{c.instructions+=3;NFSU2_TR(0x4347dc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4347df:{NFSU2_TR(0x4347df);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4347e1:{NFSU2_TR(0x4347e1);
if(r1(R+518)){{goto L4347ec;}}
}
B4347e3:L4347e3:{c.instructions+=2;NFSU2_TR(0x4347e3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4347e4:{NFSU2_TR(0x4347e4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4347e9ull));
TAIL_STATIC(0x575630u,575);
}
B4347e9:L4347e9:{c.instructions+=1;NFSU2_TR(0x4347e9);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4347ec:L4347ec:{c.instructions+=3;NFSU2_TR(0x4347ec);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B4347ef:{NFSU2_TR(0x4347ef);
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
B4347f1:{NFSU2_TR(0x4347f1);
if(r1(R+518)){{goto L434806;}}
}
B4347f3:L4347f3:{c.instructions+=2;NFSU2_TR(0x4347f3);
__builtin_memmove((R+4),(R+24),4);
}
B4347f5:{NFSU2_TR(0x4347f5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4347faull));
TAIL_STATIC(0x6d8100u,6d8);
}
B4347fa:L4347fa:{c.instructions+=3;NFSU2_TR(0x4347fa);
u8 U[4];
w4(U+0,u32(0x30ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4347fc:{NFSU2_TR(0x4347fc);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4347fd:{NFSU2_TR(0x4347fd);
u8 U[4];
__builtin_memmove((U+0),gp(0x80bfdc),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x434803ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B434803:L434803:{c.instructions+=1;NFSU2_TR(0x434803);
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
B434806:L434806:{c.instructions+=3;NFSU2_TR(0x434806);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B434807:{NFSU2_TR(0x434807);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B434808:{NFSU2_TR(0x434808);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B434810:L434810:{c.instructions+=17;NFSU2_TR(0x434810);
__builtin_memmove((R+0),(R+4),4);
}
B434812:{NFSU2_TR(0x434812);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B434814:{NFSU2_TR(0x434814);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B434817:{NFSU2_TR(0x434817);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43481a:{NFSU2_TR(0x43481a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43481d:{NFSU2_TR(0x43481d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B434820:{NFSU2_TR(0x434820);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B434823:{NFSU2_TR(0x434823);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B434826:{NFSU2_TR(0x434826);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B434829:{NFSU2_TR(0x434829);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43482c:{NFSU2_TR(0x43482c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43482f:{NFSU2_TR(0x43482f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B434832:{NFSU2_TR(0x434832);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x34ull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B434835:{NFSU2_TR(0x434835);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B434839:{NFSU2_TR(0x434839);
u8 U[4];
w4(U+0,u32(0x7862f0ull));
s4(u32(r4(R+0)),r4(U+0));
}
B43483f:{NFSU2_TR(0x43483f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B434842:{NFSU2_TR(0x434842);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B434850:L434850:{c.instructions+=8;NFSU2_TR(0x434850);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B434851:{NFSU2_TR(0x434851);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B434852:{NFSU2_TR(0x434852);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B434853:{NFSU2_TR(0x434853);
__builtin_memmove((R+20),gp(0x827da4),4);
}
B434859:{NFSU2_TR(0x434859);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))&u32(r4(R+20))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B43485b:{NFSU2_TR(0x43485b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43485c:{NFSU2_TR(0x43485c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43485d:{NFSU2_TR(0x43485d);
if(r1(R+518)){{goto L434864;}}
}
B43485f:L43485f:{c.instructions+=2;NFSU2_TR(0x43485f);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
}
B434862:{NFSU2_TR(0x434862);
{goto L434866;}
}
B434864:L434864:{c.instructions+=1;NFSU2_TR(0x434864);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B434866:L434866:{c.instructions+=2;NFSU2_TR(0x434866);
w4(R+4,u32(0x827da4ull));
}
B43486b:{NFSU2_TR(0x43486b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x434870ull));
TAIL_STATIC(0x431780u,431);
}
B434870:L434870:{c.instructions+=4;NFSU2_TR(0x434870);
__builtin_memmove((R+4),(R+0),4);
}
B434872:{NFSU2_TR(0x434872);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+20))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B434874:{NFSU2_TR(0x434874);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B434878:{NFSU2_TR(0x434878);
if(r1(R+518)){{goto L4348c2;}}
}
B43487a:L43487a:{c.instructions+=1;NFSU2_TR(0x43487a);
__builtin_memmove((R+12),(R+12),4);
}
B434880:L434880:{c.instructions+=3;NFSU2_TR(0x434880);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B434883:{NFSU2_TR(0x434883);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B434885:{NFSU2_TR(0x434885);
if(r1(R+518)){{goto L4348b0;}}
}
B434887:L434887:{c.instructions+=4;NFSU2_TR(0x434887);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B43488a:{NFSU2_TR(0x43488a);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B43488c:{NFSU2_TR(0x43488c);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B43488e:{NFSU2_TR(0x43488e);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L4348b0;}}
}
B434890:L434890:{c.instructions+=4;NFSU2_TR(0x434890);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B434893:{NFSU2_TR(0x434893);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B434896:{NFSU2_TR(0x434896);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B434897:{NFSU2_TR(0x434897);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x43489cull));
TAIL_STATIC(0x43db50u,43d);
}
B43489c:L43489c:{c.instructions+=4;NFSU2_TR(0x43489c);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4348a0:{NFSU2_TR(0x4348a0);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4348a3:{NFSU2_TR(0x4348a3);
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
B4348a5:{NFSU2_TR(0x4348a5);
if(r1(R+518)){{goto L4348ca;}}
}
B4348a7:L4348a7:{c.instructions+=3;NFSU2_TR(0x4348a7);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B4348a8:{NFSU2_TR(0x4348a8);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B4348aa:{NFSU2_TR(0x4348aa);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x434890u);}goto L434890;}}
}
B4348ac:L4348ac:{c.instructions+=1;NFSU2_TR(0x4348ac);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4348b0:L4348b0:{c.instructions+=3;NFSU2_TR(0x4348b0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4348b3:{NFSU2_TR(0x4348b3);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4348b5:{NFSU2_TR(0x4348b5);
if(r1(R+518)){{goto L4348bc;}}
}
B4348b7:L4348b7:{c.instructions+=2;NFSU2_TR(0x4348b7);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+20),(U+0),4);
}
B4348ba:{NFSU2_TR(0x4348ba);
{goto L4348be;}
}
B4348bc:L4348bc:{c.instructions+=1;NFSU2_TR(0x4348bc);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B4348be:L4348be:{c.instructions+=2;NFSU2_TR(0x4348be);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+20))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4348c0:{NFSU2_TR(0x4348c0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x434880u);}goto L434880;}}
}
B4348c2:L4348c2:{c.instructions+=7;NFSU2_TR(0x4348c2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4348c3:{NFSU2_TR(0x4348c3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4348c4:{NFSU2_TR(0x4348c4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4348c5:{NFSU2_TR(0x4348c5);
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
B4348c7:{NFSU2_TR(0x4348c7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4348c8:{NFSU2_TR(0x4348c8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4348c9:{NFSU2_TR(0x4348c9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4348ca:L4348ca:{c.instructions+=11;NFSU2_TR(0x4348ca);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4348ce:{NFSU2_TR(0x4348ce);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4348d2:{NFSU2_TR(0x4348d2);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
s4(u32(r4(R+4)),r4(U+0));
}
B4348d4:{NFSU2_TR(0x4348d4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4348d5:{NFSU2_TR(0x4348d5);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+8)),r4(U+0));
}
B4348d7:{NFSU2_TR(0x4348d7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4348d8:{NFSU2_TR(0x4348d8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4348d9:{NFSU2_TR(0x4348d9);
w4(R+0,u32(0x1ull));
}
B4348de:{NFSU2_TR(0x4348de);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4348df:{NFSU2_TR(0x4348df);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4348e0:{NFSU2_TR(0x4348e0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4348f0:L4348f0:{c.instructions+=4;NFSU2_TR(0x4348f0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4348f1:{NFSU2_TR(0x4348f1);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B4348f5:{NFSU2_TR(0x4348f5);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0xe34010ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B4348fb:{NFSU2_TR(0x4348fb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L43499b;}}
}
B434901:L434901:{c.instructions+=8;NFSU2_TR(0x434901);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B434904:{NFSU2_TR(0x434904);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B434905:{NFSU2_TR(0x434905);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x17ull))));
__builtin_memmove((R+12),(U+0),4);
}
B434908:{NFSU2_TR(0x434908);
w4(R+12,u32(u32(r4(R+12))&u32(u32(0xfffffff0ull))));
}
B43490b:{NFSU2_TR(0x43490b);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+12))));
}
B43490d:{NFSU2_TR(0x43490d);
u8 U[12];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B434911:{NFSU2_TR(0x434911);
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
B434913:{NFSU2_TR(0x434913);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L434993;}}
}
B434915:L434915:{c.instructions+=3;NFSU2_TR(0x434915);
__builtin_memmove((R+0),gp(0x827b50),1);
}
B43491a:{NFSU2_TR(0x43491a);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B43491c:{NFSU2_TR(0x43491c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L43493d;}}
}
B43491e:L43491e:{c.instructions+=5;NFSU2_TR(0x43491e);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B434920:{NFSU2_TR(0x434920);
u8 U[4];
w4(U+0,u32(0x786020ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B434925:{NFSU2_TR(0x434925);
u8 U[4];
w4(U+0,u32(0x51ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B434927:{NFSU2_TR(0x434927);
u8 U[4];
w4(U+0,u32(0x3cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B434929:{NFSU2_TR(0x434929);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x43492eull));
TAIL_STATIC(0x440df0u,440);
}
B43492e:L43492e:{c.instructions+=3;NFSU2_TR(0x43492e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B434931:{NFSU2_TR(0x434931);
__builtin_memmove(gp(0x827b4c),(R+0),4);
}
B434936:{NFSU2_TR(0x434936);
s1(0x827b50,u8(0x1ull));
}
B43493d:L43493d:{c.instructions+=4;NFSU2_TR(0x43493d);
__builtin_memmove((R+8),gp(0x827b4c),4);
}
B434943:{NFSU2_TR(0x434943);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B434944:{NFSU2_TR(0x434944);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B434945:{NFSU2_TR(0x434945);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x43494aull));
TAIL_STATIC(0x440e50u,440);
}
B43494a:L43494a:{c.instructions+=3;NFSU2_TR(0x43494a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B43494d:{NFSU2_TR(0x43494d);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B43494f:{NFSU2_TR(0x43494f);
if(r1(R+518)){{goto L43495d;}}
}
B434951:L434951:{c.instructions+=3;NFSU2_TR(0x434951);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B434952:{NFSU2_TR(0x434952);
__builtin_memmove((R+4),(R+0),4);
}
B434954:{NFSU2_TR(0x434954);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x434959ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x434810u);}goto L434810;}
}
B434959:L434959:{c.instructions+=2;NFSU2_TR(0x434959);
__builtin_memmove((R+28),(R+0),4);
}
B43495b:{NFSU2_TR(0x43495b);
{goto L43495f;}
}
B43495d:L43495d:{c.instructions+=1;NFSU2_TR(0x43495d);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B43495f:L43495f:{c.instructions+=7;NFSU2_TR(0x43495f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B434962:{NFSU2_TR(0x434962);
u8 U[6];
w1(R+512,u8((r4(R+0))<(r4(R+12))));
w1(R+523,sborrow<u32>(r4(R+0),r4(R+12)));
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+12))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B434964:{NFSU2_TR(0x434964);
u8 U[12];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B434968:{NFSU2_TR(0x434968);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B434969:{NFSU2_TR(0x434969);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43496a:{NFSU2_TR(0x43496a);
__builtin_memmove((R+4),(R+28),4);
}
B43496c:{NFSU2_TR(0x43496c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x434971ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x434710u);}goto L434710;}
}
B434971:L434971:{c.instructions+=2;NFSU2_TR(0x434971);
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
B434973:{NFSU2_TR(0x434973);
if(r1(R+518)){{goto L43497a;}}
}
B434975:L434975:{c.instructions+=2;NFSU2_TR(0x434975);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B434978:{NFSU2_TR(0x434978);
{goto L43497c;}
}
B43497a:L43497a:{c.instructions+=1;NFSU2_TR(0x43497a);
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
B43497c:L43497c:{c.instructions+=6;NFSU2_TR(0x43497c);
__builtin_memmove((R+4),gp(0x827da8),4);
}
B434982:{NFSU2_TR(0x434982);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B434984:{NFSU2_TR(0x434984);
__builtin_memmove(gp(0x827da8),(R+0),4);
}
B434989:{NFSU2_TR(0x434989);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43498c:{NFSU2_TR(0x43498c);
u8 U[4];
w4(U+0,u32(0x827da4ull));
s4(u32(r4(R+0)),r4(U+0));
}
B434992:{NFSU2_TR(0x434992);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B434993:L434993:{c.instructions+=4;NFSU2_TR(0x434993);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B434994:{NFSU2_TR(0x434994);
w4(R+0,u32(0x1ull));
}
B434999:{NFSU2_TR(0x434999);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B43499a:{NFSU2_TR(0x43499a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B43499b:L43499b:{c.instructions+=3;NFSU2_TR(0x43499b);
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
B43499d:{NFSU2_TR(0x43499d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B43499e:{NFSU2_TR(0x43499e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4349a0:L4349a0:{c.instructions+=4;NFSU2_TR(0x4349a0);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4349a1:{NFSU2_TR(0x4349a1);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4349a5:{NFSU2_TR(0x4349a5);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0xe34010ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B4349ab:{NFSU2_TR(0x4349ab);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L434a11;}}
}
B4349ad:L4349ad:{c.instructions+=4;NFSU2_TR(0x4349ad);
__builtin_memmove((R+0),gp(0x827da4),4);
}
B4349b2:{NFSU2_TR(0x4349b2);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4349b4:{NFSU2_TR(0x4349b4);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4349b5:{NFSU2_TR(0x4349b5);
if(r1(R+518)){{goto L4349bc;}}
}
B4349b7:L4349b7:{c.instructions+=2;NFSU2_TR(0x4349b7);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+24),(U+0),4);
}
B4349ba:{NFSU2_TR(0x4349ba);
{goto L4349be;}
}
B4349bc:L4349bc:{c.instructions+=1;NFSU2_TR(0x4349bc);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B4349be:L4349be:{c.instructions+=2;NFSU2_TR(0x4349be);
w4(R+4,u32(0x827da4ull));
}
B4349c3:{NFSU2_TR(0x4349c3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4349c8ull));
TAIL_STATIC(0x431780u,431);
}
B4349c8:L4349c8:{c.instructions+=2;NFSU2_TR(0x4349c8);
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
B4349ca:{NFSU2_TR(0x4349ca);
if(r1(R+518)){{goto L434a09;}}
}
B4349cc:L4349cc:{c.instructions+=1;NFSU2_TR(0x4349cc);
__builtin_memmove((R+16),(R+16),4);
}
B4349d0:L4349d0:{c.instructions+=2;NFSU2_TR(0x4349d0);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B4349d3:{NFSU2_TR(0x4349d3);
if(r1(R+518)){{goto L4349ef;}}
}
B4349d5:L4349d5:{c.instructions+=3;NFSU2_TR(0x4349d5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B4349d8:{NFSU2_TR(0x4349d8);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4349da:{NFSU2_TR(0x4349da);
if(r1(R+518)){{goto L4349e1;}}
}
B4349dc:L4349dc:{c.instructions+=2;NFSU2_TR(0x4349dc);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0xfffffffcull))));
}
B4349df:{NFSU2_TR(0x4349df);
{goto L4349e3;}
}
B4349e1:L4349e1:{c.instructions+=1;NFSU2_TR(0x4349e1);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B4349e3:L4349e3:{c.instructions+=2;NFSU2_TR(0x4349e3);
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
B4349e5:{NFSU2_TR(0x4349e5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4349d0u);}goto L4349d0;}}
}
B4349e7:L4349e7:{c.instructions+=4;NFSU2_TR(0x4349e7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4349e8:{NFSU2_TR(0x4349e8);
w4(R+0,u32(0x1ull));
}
B4349ed:{NFSU2_TR(0x4349ed);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4349ee:{NFSU2_TR(0x4349ee);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4349ef:L4349ef:{c.instructions+=2;NFSU2_TR(0x4349ef);
__builtin_memmove((R+4),(R+24),4);
}
B4349f1:{NFSU2_TR(0x4349f1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4349f6ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4347b0u);}goto L4347b0;}
}
B4349f6:L4349f6:{c.instructions+=8;NFSU2_TR(0x4349f6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4349f9:{NFSU2_TR(0x4349f9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4349fc:{NFSU2_TR(0x4349fc);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B4349fe:{NFSU2_TR(0x4349fe);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B434a01:{NFSU2_TR(0x434a01);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B434a03:{NFSU2_TR(0x434a03);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B434a05:{NFSU2_TR(0x434a05);
__builtin_memmove((R+4),(R+24),4);
}
B434a07:{NFSU2_TR(0x434a07);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x434a09ull));
{u32 t_=u32(r4(U+4));TAIL_DYNAMIC(t_);}
}
B434a09:L434a09:{c.instructions+=4;NFSU2_TR(0x434a09);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B434a0a:{NFSU2_TR(0x434a0a);
w4(R+0,u32(0x1ull));
}
B434a0f:{NFSU2_TR(0x434a0f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B434a10:{NFSU2_TR(0x434a10);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B434a11:L434a11:{c.instructions+=3;NFSU2_TR(0x434a11);
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
B434a13:{NFSU2_TR(0x434a13);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B434a14:{NFSU2_TR(0x434a14);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B434a20:L434a20:{c.instructions+=9;NFSU2_TR(0x434a20);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B434a21:{NFSU2_TR(0x434a21);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B434a22:{NFSU2_TR(0x434a22);
__builtin_memmove((R+24),(R+4),4);
}
B434a24:{NFSU2_TR(0x434a24);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B434a27:{NFSU2_TR(0x434a27);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B434a28:{NFSU2_TR(0x434a28);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B434a2a:{NFSU2_TR(0x434a2a);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B434a2c:{NFSU2_TR(0x434a2c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B434a2f:{NFSU2_TR(0x434a2f);
if(r1(R+518)){{goto L434a3d;}}
}
B434a31:L434a31:{c.instructions+=2;NFSU2_TR(0x434a31);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B434a32:{NFSU2_TR(0x434a32);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x434a37ull));
TAIL_STATIC(0x575630u,575);
}
B434a37:L434a37:{c.instructions+=2;NFSU2_TR(0x434a37);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B434a3a:{NFSU2_TR(0x434a3a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B434a3d:L434a3d:{c.instructions+=4;NFSU2_TR(0x434a3d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B434a40:{NFSU2_TR(0x434a40);
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
B434a42:{NFSU2_TR(0x434a42);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B434a45:{NFSU2_TR(0x434a45);
if(r1(R+518)){{goto L434a56;}}
}
B434a47:L434a47:{c.instructions+=3;NFSU2_TR(0x434a47);
u8 U[4];
w4(U+0,u32(0x40ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B434a49:{NFSU2_TR(0x434a49);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B434a4a:{NFSU2_TR(0x434a4a);
u8 U[4];
__builtin_memmove((U+0),gp(0x80bfdc),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x434a50ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B434a50:L434a50:{c.instructions+=2;NFSU2_TR(0x434a50);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B434a53:{NFSU2_TR(0x434a53);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B434a56:L434a56:{c.instructions+=3;NFSU2_TR(0x434a56);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B434a59:{NFSU2_TR(0x434a59);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x48ull))));
}
B434a5c:{NFSU2_TR(0x434a5c);
w4(R+12,u32(0x4ull));
}
B434a61:L434a61:{c.instructions+=3;NFSU2_TR(0x434a61);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B434a63:{NFSU2_TR(0x434a63);
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
B434a65:{NFSU2_TR(0x434a65);
if(r1(R+518)){{goto L434a75;}}
}
B434a67:L434a67:{c.instructions+=4;NFSU2_TR(0x434a67);
__builtin_memmove((R+4),gp(0x8ab294),4);
}
B434a6d:{NFSU2_TR(0x434a6d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B434a6f:{NFSU2_TR(0x434a6f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B434a70:{NFSU2_TR(0x434a70);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x434a73ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B434a73:L434a73:{c.instructions+=1;NFSU2_TR(0x434a73);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
s4(u32(r4(R+24)),r4(U+0));
}
B434a75:L434a75:{c.instructions+=3;NFSU2_TR(0x434a75);
w1(R+512,carry<u32>(r4(R+24),u32(0x4ull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x4ull))));
}
B434a78:{NFSU2_TR(0x434a78);
u8 U[6];
w1(R+523,sborrow<u32>(r4(R+12),u32(0x1ull)));
w4(R+12,u32(u32(r4(R+12))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+12))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+12))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+12))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B434a79:{NFSU2_TR(0x434a79);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x434a61u);}goto L434a61;}}
}
B434a7b:L434a7b:{c.instructions+=4;NFSU2_TR(0x434a7b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B434a7c:{NFSU2_TR(0x434a7c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B434a7d:{NFSU2_TR(0x434a7d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B434a7e:{NFSU2_TR(0x434a7e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B434a80:L434a80:{c.instructions+=12;NFSU2_TR(0x434a80);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x8ull))));
}
B434a83:{NFSU2_TR(0x434a83);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B434a87:{NFSU2_TR(0x434a87);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B434a88:{NFSU2_TR(0x434a88);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B434a8c:{NFSU2_TR(0x434a8c);
__builtin_memmove((R+24),(R+4),4);
}
B434a8e:{NFSU2_TR(0x434a8e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B434a8f:{NFSU2_TR(0x434a8f);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B434a93:{NFSU2_TR(0x434a93);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B434a94:{NFSU2_TR(0x434a94);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B434a95:{NFSU2_TR(0x434a95);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B434a9d:{NFSU2_TR(0x434a9d);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B434aa5:{NFSU2_TR(0x434aa5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x434aaaull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x434850u);}goto L434850;}
}
B434aaa:L434aaa:{c.instructions+=3;NFSU2_TR(0x434aaa);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B434aad:{NFSU2_TR(0x434aad);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B434aaf:{NFSU2_TR(0x434aaf);
if(r1(R+518)){{goto L434aee;}}
}
B434ab1:L434ab1:{c.instructions+=5;NFSU2_TR(0x434ab1);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B434ab5:{NFSU2_TR(0x434ab5);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B434ab9:{NFSU2_TR(0x434ab9);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B434aba:{NFSU2_TR(0x434aba);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B434abb:{NFSU2_TR(0x434abb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x434ac0ull));
TAIL_STATIC(0x6e2d40u,6e2);
}
B434ac0:L434ac0:{c.instructions+=7;NFSU2_TR(0x434ac0);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B434ac4:{NFSU2_TR(0x434ac4);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x64ull))));
__builtin_memmove((R+4),(U+0),4);
}
B434ac7:{NFSU2_TR(0x434ac7);
u8 U[16];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+0),4);
s4(u32(r4(U+8)),r4(U+12));
}
B434acb:{NFSU2_TR(0x434acb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B434acd:{NFSU2_TR(0x434acd);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B434ace:{NFSU2_TR(0x434ace);
__builtin_memmove((R+4),(R+0),4);
}
B434ad0:{NFSU2_TR(0x434ad0);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x434ad3ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B434ad3:L434ad3:{c.instructions+=5;NFSU2_TR(0x434ad3);
u8 U[16];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+4),(U+12),4);
}
B434ad7:{NFSU2_TR(0x434ad7);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B434ad9:{NFSU2_TR(0x434ad9);
w4(R+0,u32(0x1ull));
}
B434ade:{NFSU2_TR(0x434ade);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B434adf:{NFSU2_TR(0x434adf);
if(r1(R+518)){{goto L434ae4;}}
}
B434ae1:L434ae1:{c.instructions+=1;NFSU2_TR(0x434ae1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B434ae4:L434ae4:{c.instructions+=4;NFSU2_TR(0x434ae4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B434ae7:{NFSU2_TR(0x434ae7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B434ae8:{NFSU2_TR(0x434ae8);
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
B434aeb:{NFSU2_TR(0x434aeb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B434aee:L434aee:{c.instructions+=4;NFSU2_TR(0x434aee);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B434af0:{NFSU2_TR(0x434af0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B434af1:{NFSU2_TR(0x434af1);
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
B434af4:{NFSU2_TR(0x434af4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B434b00:L434b00:{c.instructions+=28;NFSU2_TR(0x434b00);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x28ull))));
}
B434b03:{NFSU2_TR(0x434b03);
{u32 ea_=u32(u32(7887832u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B434b09:{NFSU2_TR(0x434b09);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B434b0a:{NFSU2_TR(0x434b0a);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B434b0e:{NFSU2_TR(0x434b0e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B434b0f:{NFSU2_TR(0x434b0f);
__builtin_memmove((R+24),(R+4),4);
}
B434b11:{NFSU2_TR(0x434b11);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B434b14:{NFSU2_TR(0x434b14);
{u32 ea_=u32(r4(R+24)+u32(96u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B434b17:{NFSU2_TR(0x434b17);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B434b18:{NFSU2_TR(0x434b18);
__builtin_memmove((R+4),(R+0),4);
}
B434b1a:{NFSU2_TR(0x434b1a);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B434b1c:{NFSU2_TR(0x434b1c);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x40ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B434b1f:{NFSU2_TR(0x434b1f);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B434b23:{NFSU2_TR(0x434b23);
{u32 ea_=u32(u32(7887832u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B434b29:{NFSU2_TR(0x434b29);
{u32 ea_=u32(r4(R+24)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B434b2c:{NFSU2_TR(0x434b2c);
{u32 ea_=u32(r4(R+24)+u32(96u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B434b2f:{NFSU2_TR(0x434b2f);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B434b33:{NFSU2_TR(0x434b33);
{u32 ea_=u32(u32(7887832u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B434b39:{NFSU2_TR(0x434b39);
{u32 ea_=u32(r4(R+24)+u32(108u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B434b3c:{NFSU2_TR(0x434b3c);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B434b40:{NFSU2_TR(0x434b40);
{u32 ea_=u32(u32(7887832u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B434b46:{NFSU2_TR(0x434b46);
{u32 ea_=u32(r4(R+24)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B434b49:{NFSU2_TR(0x434b49);
{u32 ea_=u32(r4(R+24)+u32(96u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B434b4c:{NFSU2_TR(0x434b4c);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B434b50:{NFSU2_TR(0x434b50);
{u32 ea_=u32(u32(7887832u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B434b56:{NFSU2_TR(0x434b56);
{u32 ea_=u32(r4(R+24)+u32(112u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B434b59:{NFSU2_TR(0x434b59);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B434b5d:{NFSU2_TR(0x434b5d);
if(r1(R+518)){{goto L434b6b;}}
}
B434b5f:L434b5f:{c.instructions+=4;NFSU2_TR(0x434b5f);
{u32 ea_=u32(r4(R+24)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B434b62:{NFSU2_TR(0x434b62);
{u32 ea_=u32(r4(R+24)+u32(64u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B434b65:{NFSU2_TR(0x434b65);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B434b69:{NFSU2_TR(0x434b69);
{goto L434b72;}
}
B434b6b:L434b6b:{c.instructions+=2;NFSU2_TR(0x434b6b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B434b6e:{NFSU2_TR(0x434b6e);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B434b72:L434b72:{c.instructions+=2;NFSU2_TR(0x434b72);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B434b74:{NFSU2_TR(0x434b74);
if(r1(R+518)){{goto L434b7f;}}
}
B434b76:L434b76:{c.instructions+=3;NFSU2_TR(0x434b76);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B434b79:{NFSU2_TR(0x434b79);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B434b7d:{NFSU2_TR(0x434b7d);
{goto L434b87;}
}
B434b7f:L434b7f:{c.instructions+=1;NFSU2_TR(0x434b7f);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B434b87:L434b87:{c.instructions+=2;NFSU2_TR(0x434b87);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B434b89:{NFSU2_TR(0x434b89);
if(r1(R+518)){{goto L434b94;}}
}
B434b8b:L434b8b:{c.instructions+=3;NFSU2_TR(0x434b8b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B434b8e:{NFSU2_TR(0x434b8e);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B434b92:{NFSU2_TR(0x434b92);
{goto L434b9b;}
}
B434b94:L434b94:{c.instructions+=2;NFSU2_TR(0x434b94);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B434b97:{NFSU2_TR(0x434b97);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B434b9b:L434b9b:{c.instructions+=11;NFSU2_TR(0x434b9b);
__builtin_memmove((R+4),(R+0),4);
}
B434b9d:{NFSU2_TR(0x434b9d);
u8 U[4];
w4(U+0,u32(u32(u32(0x3ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B434ba0:{NFSU2_TR(0x434ba0);
__builtin_memmove((R+12),(R+0),4);
}
B434ba2:{NFSU2_TR(0x434ba2);
__builtin_memmove((R+8),(R+0),4);
}
B434ba4:{NFSU2_TR(0x434ba4);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w4(R+12,shr<u32>(r4(R+12),u64(r4(U+0))));
}
B434ba7:{NFSU2_TR(0x434ba7);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+8,shr<u32>(r4(R+8),u64(r4(U+0))));
}
B434baa:{NFSU2_TR(0x434baa);
w1(R+4,u8(u32(r1(R+4))&u32(u8(0x1ull))));
}
B434bad:{NFSU2_TR(0x434bad);
w1(R+12,u8(u32(r1(R+12))&u32(u8(0x1ull))));
}
B434bb0:{NFSU2_TR(0x434bb0);
w1(R+8,u8(u32(r1(R+8))&u32(u8(0x1ull))));
}
B434bb3:{NFSU2_TR(0x434bb3);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B434bb5:{NFSU2_TR(0x434bb5);
if(r1(R+518)){{goto L434bc2;}}
}
B434bb7:L434bb7:{c.instructions+=2;NFSU2_TR(0x434bb7);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(r1(R+8))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B434bb9:{NFSU2_TR(0x434bb9);
if(r1(R+518)){{goto L434bce;}}
}
B434bbb:L434bbb:{c.instructions+=3;NFSU2_TR(0x434bbb);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xffffffefull))));
}
B434bbe:{NFSU2_TR(0x434bbe);
w1(R+8,u8(u32(r1(R+8))^u32(r1(R+8))));
}
B434bc0:{NFSU2_TR(0x434bc0);
{goto L434bcb;}
}
B434bc2:L434bc2:{c.instructions+=2;NFSU2_TR(0x434bc2);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(r1(R+8))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B434bc4:{NFSU2_TR(0x434bc4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L434bce;}}
}
B434bc6:L434bc6:{c.instructions+=2;NFSU2_TR(0x434bc6);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0x8ull))));
}
B434bc9:{NFSU2_TR(0x434bc9);
w1(R+4,u8(0x1ull));
}
B434bcb:L434bcb:{c.instructions+=1;NFSU2_TR(0x434bcb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B434bce:L434bce:{c.instructions+=4;NFSU2_TR(0x434bce);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B434bd1:{NFSU2_TR(0x434bd1);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+519,u8(s8(r1(U+0))<s8(u8(0x0ull))));
}
B434bd3:{NFSU2_TR(0x434bd3);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B434bd7:{NFSU2_TR(0x434bd7);
u8 U[1];
w1(U+0,u8(!(r1(R+519))));
if(r1(U+0)){{goto L434bfb;}}
}
B434bd9:L434bd9:{c.instructions+=5;NFSU2_TR(0x434bd9);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B434bdd:{NFSU2_TR(0x434bdd);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B434be1:{NFSU2_TR(0x434be1);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B434be3:{NFSU2_TR(0x434be3);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B434be6:{NFSU2_TR(0x434be6);
if(r1(R+514)){{goto L434bfb;}}
}
B434be8:L434be8:{c.instructions+=6;NFSU2_TR(0x434be8);
{u32 ea_=u32(r4(R+24)+u32(104u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B434beb:{NFSU2_TR(0x434beb);
u8 U[5];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B434bf0:{NFSU2_TR(0x434bf0);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B434bf4:{NFSU2_TR(0x434bf4);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B434bf6:{NFSU2_TR(0x434bf6);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B434bf9:{NFSU2_TR(0x434bf9);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L434c00;}}
}
B434bfb:L434bfb:{c.instructions+=1;NFSU2_TR(0x434bfb);
u8 U[5];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B434c00:L434c00:{c.instructions+=3;NFSU2_TR(0x434c00);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B434c04:{NFSU2_TR(0x434c04);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B434c07:{NFSU2_TR(0x434c07);
if(r1(R+518)){{goto L434c2b;}}
}
B434c09:L434c09:{c.instructions+=5;NFSU2_TR(0x434c09);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B434c0d:{NFSU2_TR(0x434c0d);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B434c11:{NFSU2_TR(0x434c11);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B434c13:{NFSU2_TR(0x434c13);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B434c16:{NFSU2_TR(0x434c16);
if(r1(R+514)){{goto L434c2b;}}
}
B434c18:L434c18:{c.instructions+=6;NFSU2_TR(0x434c18);
{u32 ea_=u32(r4(R+24)+u32(104u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B434c1b:{NFSU2_TR(0x434c1b);
u8 U[5];
w4(U+0,u32(u32(u32(0xfull))+u32(r4(R+16))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B434c20:{NFSU2_TR(0x434c20);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B434c24:{NFSU2_TR(0x434c24);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B434c26:{NFSU2_TR(0x434c26);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B434c29:{NFSU2_TR(0x434c29);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L434c30;}}
}
B434c2b:L434c2b:{c.instructions+=1;NFSU2_TR(0x434c2b);
u8 U[5];
w4(U+0,u32(u32(u32(0xfull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B434c30:L434c30:{c.instructions+=5;NFSU2_TR(0x434c30);
u8 U[5];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B434c34:{NFSU2_TR(0x434c34);
{u32 ea_=u32(r4(R+24)+u32(104u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B434c37:{NFSU2_TR(0x434c37);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B434c39:{NFSU2_TR(0x434c39);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B434c3d:{NFSU2_TR(0x434c3d);
if(r1(R+518)){{goto L434c92;}}
}
B434c3f:L434c3f:{c.instructions+=7;NFSU2_TR(0x434c3f);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B434c43:{NFSU2_TR(0x434c43);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B434c47:{NFSU2_TR(0x434c47);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B434c4b:{NFSU2_TR(0x434c4b);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B434c4f:{NFSU2_TR(0x434c4f);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B434c51:{NFSU2_TR(0x434c51);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B434c54:{NFSU2_TR(0x434c54);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L434c6e;}}
}
B434c56:L434c56:{c.instructions+=6;NFSU2_TR(0x434c56);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B434c5a:{NFSU2_TR(0x434c5a);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B434c5c:{NFSU2_TR(0x434c5c);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B434c60:{NFSU2_TR(0x434c60);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B434c61:{NFSU2_TR(0x434c61);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B434c62:{NFSU2_TR(0x434c62);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x434c67ull));
TAIL_STATIC(0x43c240u,43c);
}
B434c67:L434c67:{c.instructions+=2;NFSU2_TR(0x434c67);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B434c6b:{NFSU2_TR(0x434c6b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B434c6e:L434c6e:{c.instructions+=12;NFSU2_TR(0x434c6e);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B434c74:{NFSU2_TR(0x434c74);
__builtin_memmove((R+0),(R+28),4);
}
B434c76:{NFSU2_TR(0x434c76);
{u32 ea_=u32(r4(R+24)+u32(96u));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B434c79:{NFSU2_TR(0x434c79);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B434c7a:{NFSU2_TR(0x434c7a);
{u32 ea_=u32(u32(7887832u));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B434c80:{NFSU2_TR(0x434c80);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B434c84:{NFSU2_TR(0x434c84);
{u32 ea_=u32(r4(R+24)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B434c87:{NFSU2_TR(0x434c87);
{u32 ea_=u32(r4(R+24)+u32(104u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B434c8a:{NFSU2_TR(0x434c8a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B434c8b:{NFSU2_TR(0x434c8b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B434c8c:{NFSU2_TR(0x434c8c);
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
B434c8f:{NFSU2_TR(0x434c8f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B434c92:L434c92:{c.instructions+=3;NFSU2_TR(0x434c92);
u8 U[5];
w4(U+0,u32(u32(u32(0xfull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B434c96:{NFSU2_TR(0x434c96);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B434c98:{NFSU2_TR(0x434c98);
if(r1(R+518)){{goto L434ced;}}
}
B434c9a:L434c9a:{c.instructions+=7;NFSU2_TR(0x434c9a);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B434c9e:{NFSU2_TR(0x434c9e);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B434ca2:{NFSU2_TR(0x434ca2);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B434ca6:{NFSU2_TR(0x434ca6);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B434caa:{NFSU2_TR(0x434caa);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B434cac:{NFSU2_TR(0x434cac);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B434caf:{NFSU2_TR(0x434caf);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L434cc9;}}
}
B434cb1:L434cb1:{c.instructions+=6;NFSU2_TR(0x434cb1);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B434cb5:{NFSU2_TR(0x434cb5);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B434cb7:{NFSU2_TR(0x434cb7);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B434cbb:{NFSU2_TR(0x434cbb);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B434cbc:{NFSU2_TR(0x434cbc);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B434cbd:{NFSU2_TR(0x434cbd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x434cc2ull));
TAIL_STATIC(0x43c240u,43c);
}
B434cc2:L434cc2:{c.instructions+=2;NFSU2_TR(0x434cc2);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B434cc6:{NFSU2_TR(0x434cc6);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B434cc9:L434cc9:{c.instructions+=12;NFSU2_TR(0x434cc9);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B434ccf:{NFSU2_TR(0x434ccf);
__builtin_memmove((R+0),(R+28),4);
}
B434cd1:{NFSU2_TR(0x434cd1);
{u32 ea_=u32(r4(R+24)+u32(96u));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B434cd4:{NFSU2_TR(0x434cd4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B434cd5:{NFSU2_TR(0x434cd5);
{u32 ea_=u32(u32(7887832u));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B434cdb:{NFSU2_TR(0x434cdb);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B434cdf:{NFSU2_TR(0x434cdf);
{u32 ea_=u32(r4(R+24)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B434ce2:{NFSU2_TR(0x434ce2);
{u32 ea_=u32(r4(R+24)+u32(104u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B434ce5:{NFSU2_TR(0x434ce5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B434ce6:{NFSU2_TR(0x434ce6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B434ce7:{NFSU2_TR(0x434ce7);
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
B434cea:{NFSU2_TR(0x434cea);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B434ced:L434ced:{c.instructions+=2;NFSU2_TR(0x434ced);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B434cef:{NFSU2_TR(0x434cef);
if(r1(R+518)){{goto L434d3a;}}
}
B434cf1:L434cf1:{c.instructions+=5;NFSU2_TR(0x434cf1);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B434cf5:{NFSU2_TR(0x434cf5);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B434cf9:{NFSU2_TR(0x434cf9);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B434cfb:{NFSU2_TR(0x434cfb);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B434cfe:{NFSU2_TR(0x434cfe);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L434d91;}}
}
B434d04:L434d04:{c.instructions+=2;NFSU2_TR(0x434d04);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(r1(R+12))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B434d06:{NFSU2_TR(0x434d06);
if(r1(R+518)){{goto L434d21;}}
}
B434d08:L434d08:{c.instructions+=9;NFSU2_TR(0x434d08);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B434d0c:{NFSU2_TR(0x434d0c);
__builtin_memmove((R+0),(R+28),4);
}
B434d0e:{NFSU2_TR(0x434d0e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B434d0f:{NFSU2_TR(0x434d0f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B434d16:{NFSU2_TR(0x434d16);
{u32 ea_=u32(r4(R+24)+u32(104u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B434d19:{NFSU2_TR(0x434d19);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B434d1a:{NFSU2_TR(0x434d1a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B434d1b:{NFSU2_TR(0x434d1b);
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
B434d1e:{NFSU2_TR(0x434d1e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B434d21:L434d21:{c.instructions+=10;NFSU2_TR(0x434d21);
w4(R+28,u32(0x1ull));
}
B434d26:{NFSU2_TR(0x434d26);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B434d28:{NFSU2_TR(0x434d28);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B434d2c:{NFSU2_TR(0x434d2c);
__builtin_memmove((R+0),(R+28),4);
}
B434d2e:{NFSU2_TR(0x434d2e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B434d2f:{NFSU2_TR(0x434d2f);
{u32 ea_=u32(r4(R+24)+u32(104u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B434d32:{NFSU2_TR(0x434d32);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B434d33:{NFSU2_TR(0x434d33);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B434d34:{NFSU2_TR(0x434d34);
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
B434d37:{NFSU2_TR(0x434d37);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B434d3a:L434d3a:{c.instructions+=2;NFSU2_TR(0x434d3a);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(r1(R+8))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B434d3c:{NFSU2_TR(0x434d3c);
if(r1(R+518)){{goto L434d91;}}
}
B434d3e:L434d3e:{c.instructions+=4;NFSU2_TR(0x434d3e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B434d41:{NFSU2_TR(0x434d41);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B434d43:{NFSU2_TR(0x434d43);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+4))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B434d45:{NFSU2_TR(0x434d45);
if(r1(R+518)){{goto L434d73;}}
}
B434d47:L434d47:{c.instructions+=2;NFSU2_TR(0x434d47);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B434d48:{NFSU2_TR(0x434d48);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L434d91;}}
}
B434d4a:L434d4a:{c.instructions+=5;NFSU2_TR(0x434d4a);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B434d4e:{NFSU2_TR(0x434d4e);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B434d52:{NFSU2_TR(0x434d52);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B434d54:{NFSU2_TR(0x434d54);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B434d57:{NFSU2_TR(0x434d57);
if(r1(R+514)){{goto L434d91;}}
}
B434d59:L434d59:{c.instructions+=11;NFSU2_TR(0x434d59);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B434d5b:{NFSU2_TR(0x434d5b);
__builtin_memmove((R+0),(R+28),4);
}
B434d5d:{NFSU2_TR(0x434d5d);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B434d61:{NFSU2_TR(0x434d61);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B434d62:{NFSU2_TR(0x434d62);
{u32 ea_=u32(r4(R+24)+u32(104u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B434d65:{NFSU2_TR(0x434d65);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B434d68:{NFSU2_TR(0x434d68);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B434d6b:{NFSU2_TR(0x434d6b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B434d6c:{NFSU2_TR(0x434d6c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B434d6d:{NFSU2_TR(0x434d6d);
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
B434d70:{NFSU2_TR(0x434d70);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B434d73:L434d73:{c.instructions+=5;NFSU2_TR(0x434d73);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B434d77:{NFSU2_TR(0x434d77);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B434d7b:{NFSU2_TR(0x434d7b);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B434d7d:{NFSU2_TR(0x434d7d);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B434d80:{NFSU2_TR(0x434d80);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L434d91;}}
}
B434d82:L434d82:{c.instructions+=3;NFSU2_TR(0x434d82);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B434d86:{NFSU2_TR(0x434d86);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B434d8d:{NFSU2_TR(0x434d8d);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B434d91:L434d91:{c.instructions+=7;NFSU2_TR(0x434d91);
__builtin_memmove((R+0),(R+28),4);
}
B434d93:{NFSU2_TR(0x434d93);
{u32 ea_=u32(r4(R+24)+u32(104u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B434d96:{NFSU2_TR(0x434d96);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B434d97:{NFSU2_TR(0x434d97);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B434d98:{NFSU2_TR(0x434d98);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B434d99:{NFSU2_TR(0x434d99);
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
B434d9c:{NFSU2_TR(0x434d9c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B434da0:L434da0:{c.instructions+=10;NFSU2_TR(0x434da0);
__builtin_memmove((R+0),(R+4),4);
}
B434da2:{NFSU2_TR(0x434da2);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B434da4:{NFSU2_TR(0x434da4);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B434da7:{NFSU2_TR(0x434da7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B434daa:{NFSU2_TR(0x434daa);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B434dad:{NFSU2_TR(0x434dad);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B434db0:{NFSU2_TR(0x434db0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B434db3:{NFSU2_TR(0x434db3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B434db6:{NFSU2_TR(0x434db6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B434db9:{NFSU2_TR(0x434db9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B434dc0:L434dc0:{c.instructions+=6;NFSU2_TR(0x434dc0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B434dc1:{NFSU2_TR(0x434dc1);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B434dc2:{NFSU2_TR(0x434dc2);
__builtin_memmove((R+24),gp(0x827c74),4);
}
B434dc8:{NFSU2_TR(0x434dc8);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B434dc9:{NFSU2_TR(0x434dc9);
w4(R+4,u32(0x827c74ull));
}
B434dce:{NFSU2_TR(0x434dce);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x434dd3ull));
TAIL_STATIC(0x502fd0u,502);
}
B434dd3:L434dd3:{c.instructions+=3;NFSU2_TR(0x434dd3);
__builtin_memmove((R+28),(R+0),4);
}
B434dd5:{NFSU2_TR(0x434dd5);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B434dd7:{NFSU2_TR(0x434dd7);
if(r1(R+518)){{goto L434dfa;}}
}
B434dd9:L434dd9:{c.instructions+=2;NFSU2_TR(0x434dd9);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B434ddd:{NFSU2_TR(0x434ddd);
__builtin_memmove((R+4),(R+4),4);
}
B434de0:L434de0:{c.instructions+=3;NFSU2_TR(0x434de0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B434de3:{NFSU2_TR(0x434de3);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B434de5:{NFSU2_TR(0x434de5);
if(r1(R+518)){{goto L434df4;}}
}
B434de7:L434de7:{c.instructions+=2;NFSU2_TR(0x434de7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B434de8:{NFSU2_TR(0x434de8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x434dedull));
TAIL_STATIC(0x43db50u,43d);
}
B434ded:L434ded:{c.instructions+=3;NFSU2_TR(0x434ded);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B434df0:{NFSU2_TR(0x434df0);
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
B434df2:{NFSU2_TR(0x434df2);
if(r1(R+518)){{goto L434e00;}}
}
B434df4:L434df4:{c.instructions+=3;NFSU2_TR(0x434df4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+24),(U+0),4);
}
B434df6:{NFSU2_TR(0x434df6);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B434df8:{NFSU2_TR(0x434df8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x434de0u);}goto L434de0;}}
}
B434dfa:L434dfa:{c.instructions+=5;NFSU2_TR(0x434dfa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B434dfb:{NFSU2_TR(0x434dfb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B434dfc:{NFSU2_TR(0x434dfc);
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
B434dfe:{NFSU2_TR(0x434dfe);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B434dff:{NFSU2_TR(0x434dff);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B434e00:L434e00:{c.instructions+=5;NFSU2_TR(0x434e00);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B434e01:{NFSU2_TR(0x434e01);
__builtin_memmove((R+0),(R+24),4);
}
B434e03:{NFSU2_TR(0x434e03);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B434e04:{NFSU2_TR(0x434e04);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B434e05:{NFSU2_TR(0x434e05);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B434e10:L434e10:{c.instructions+=4;NFSU2_TR(0x434e10);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B434e11:{NFSU2_TR(0x434e11);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B434e15:{NFSU2_TR(0x434e15);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0xe34009ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B434e1b:{NFSU2_TR(0x434e1b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L434ed1;}}
}
B434e21:L434e21:{c.instructions+=3;NFSU2_TR(0x434e21);
__builtin_memmove((R+0),gp(0x827b60),1);
}
B434e26:{NFSU2_TR(0x434e26);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B434e28:{NFSU2_TR(0x434e28);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L434e49;}}
}
B434e2a:L434e2a:{c.instructions+=5;NFSU2_TR(0x434e2a);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B434e2c:{NFSU2_TR(0x434e2c);
u8 U[4];
w4(U+0,u32(0x786054ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B434e31:{NFSU2_TR(0x434e31);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B434e33:{NFSU2_TR(0x434e33);
u8 U[4];
w4(U+0,u32(0x28ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B434e35:{NFSU2_TR(0x434e35);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x434e3aull));
TAIL_STATIC(0x440df0u,440);
}
B434e3a:L434e3a:{c.instructions+=3;NFSU2_TR(0x434e3a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B434e3d:{NFSU2_TR(0x434e3d);
__builtin_memmove(gp(0x827b5c),(R+0),4);
}
B434e42:{NFSU2_TR(0x434e42);
s1(0x827b60,u8(0x1ull));
}
B434e49:L434e49:{c.instructions+=6;NFSU2_TR(0x434e49);
__builtin_memmove((R+0),gp(0x827b5c),4);
}
B434e4e:{NFSU2_TR(0x434e4e);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B434e4f:{NFSU2_TR(0x434e4f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B434e50:{NFSU2_TR(0x434e50);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B434e51:{NFSU2_TR(0x434e51);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B434e52:{NFSU2_TR(0x434e52);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x434e57ull));
TAIL_STATIC(0x440e50u,440);
}
B434e57:L434e57:{c.instructions+=3;NFSU2_TR(0x434e57);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B434e5a:{NFSU2_TR(0x434e5a);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B434e5c:{NFSU2_TR(0x434e5c);
if(r1(R+518)){{goto L434e69;}}
}
B434e5e:L434e5e:{c.instructions+=2;NFSU2_TR(0x434e5e);
__builtin_memmove((R+4),(R+0),4);
}
B434e60:{NFSU2_TR(0x434e60);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x434e65ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x434da0u);}goto L434da0;}
}
B434e65:L434e65:{c.instructions+=2;NFSU2_TR(0x434e65);
__builtin_memmove((R+24),(R+0),4);
}
B434e67:{NFSU2_TR(0x434e67);
{goto L434e6b;}
}
B434e69:L434e69:{c.instructions+=1;NFSU2_TR(0x434e69);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B434e6b:L434e6b:{c.instructions+=8;NFSU2_TR(0x434e6b);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B434e6e:{NFSU2_TR(0x434e6e);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x17ull))));
__builtin_memmove((R+28),(U+0),4);
}
B434e71:{NFSU2_TR(0x434e71);
w4(R+28,u32(u32(r4(R+28))&u32(u32(0xfffffff0ull))));
}
B434e74:{NFSU2_TR(0x434e74);
u8 U[6];
w1(R+512,u8((r4(R+4))<(r4(R+28))));
w1(R+523,sborrow<u32>(r4(R+4),r4(R+28)));
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+28))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B434e76:{NFSU2_TR(0x434e76);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B434e78:{NFSU2_TR(0x434e78);
u8 U[4];
w4(U+0,u32(0x30ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B434e7a:{NFSU2_TR(0x434e7a);
u8 U[12];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+20),(U+8),4);
}
B434e7e:{NFSU2_TR(0x434e7e);
u8 U[4];
__builtin_memmove((U+0),gp(0x80bfd8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x434e84ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B434e84:L434e84:{c.instructions+=3;NFSU2_TR(0x434e84);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B434e87:{NFSU2_TR(0x434e87);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B434e89:{NFSU2_TR(0x434e89);
if(r1(R+518)){{goto L434e98;}}
}
B434e8b:L434e8b:{c.instructions+=5;NFSU2_TR(0x434e8b);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B434e8d:{NFSU2_TR(0x434e8d);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B434e8e:{NFSU2_TR(0x434e8e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B434e8f:{NFSU2_TR(0x434e8f);
__builtin_memmove((R+4),(R+0),4);
}
B434e91:{NFSU2_TR(0x434e91);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x434e96ull));
TAIL_STATIC(0x6d80b0u,6d8);
}
B434e96:L434e96:{c.instructions+=1;NFSU2_TR(0x434e96);
{goto L434e9a;}
}
B434e98:L434e98:{c.instructions+=1;NFSU2_TR(0x434e98);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B434e9a:L434e9a:{c.instructions+=5;NFSU2_TR(0x434e9a);
__builtin_memmove((R+4),(R+24),4);
}
B434e9c:{NFSU2_TR(0x434e9c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B434e9f:{NFSU2_TR(0x434e9f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B434ea2:{NFSU2_TR(0x434ea2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B434ea9:{NFSU2_TR(0x434ea9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x434eaeull));
TAIL_STATIC(0x431510u,431);
}
B434eae:L434eae:{c.instructions+=12;NFSU2_TR(0x434eae);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B434eb1:{NFSU2_TR(0x434eb1);
__builtin_memmove((R+0),gp(0x827c78),4);
}
B434eb6:{NFSU2_TR(0x434eb6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+0)),r4(U+0));
}
B434eb8:{NFSU2_TR(0x434eb8);
__builtin_memmove(gp(0x827c78),(R+24),4);
}
B434ebe:{NFSU2_TR(0x434ebe);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B434ebf:{NFSU2_TR(0x434ebf);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B434ec2:{NFSU2_TR(0x434ec2);
u8 U[4];
w4(U+0,u32(0x827c74ull));
s4(u32(r4(R+24)),r4(U+0));
}
B434ec8:{NFSU2_TR(0x434ec8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B434ec9:{NFSU2_TR(0x434ec9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B434eca:{NFSU2_TR(0x434eca);
w4(R+0,u32(0x1ull));
}
B434ecf:{NFSU2_TR(0x434ecf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B434ed0:{NFSU2_TR(0x434ed0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B434ed1:L434ed1:{c.instructions+=3;NFSU2_TR(0x434ed1);
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
B434ed3:{NFSU2_TR(0x434ed3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B434ed4:{NFSU2_TR(0x434ed4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B434ee0:L434ee0:{c.instructions+=8;NFSU2_TR(0x434ee0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B434ee1:{NFSU2_TR(0x434ee1);
__builtin_memmove((R+24),(R+4),4);
}
B434ee3:{NFSU2_TR(0x434ee3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B434ee6:{NFSU2_TR(0x434ee6);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B434ee7:{NFSU2_TR(0x434ee7);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B434ee9:{NFSU2_TR(0x434ee9);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B434eeb:{NFSU2_TR(0x434eeb);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
s4(u32(r4(R+24)),r4(U+0));
}
B434eed:{NFSU2_TR(0x434eed);
if(r1(R+518)){{goto L434efb;}}
}
B434eef:L434eef:{c.instructions+=2;NFSU2_TR(0x434eef);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B434ef0:{NFSU2_TR(0x434ef0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x434ef5ull));
TAIL_STATIC(0x575630u,575);
}
B434ef5:L434ef5:{c.instructions+=2;NFSU2_TR(0x434ef5);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B434ef8:{NFSU2_TR(0x434ef8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B434efb:L434efb:{c.instructions+=4;NFSU2_TR(0x434efb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B434efe:{NFSU2_TR(0x434efe);
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
B434f00:{NFSU2_TR(0x434f00);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B434f03:{NFSU2_TR(0x434f03);
if(r1(R+518)){{goto L434f14;}}
}
B434f05:L434f05:{c.instructions+=3;NFSU2_TR(0x434f05);
u8 U[4];
w4(U+0,u32(0x40ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B434f07:{NFSU2_TR(0x434f07);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B434f08:{NFSU2_TR(0x434f08);
u8 U[4];
__builtin_memmove((U+0),gp(0x80bfdc),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x434f0eull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B434f0e:L434f0e:{c.instructions+=2;NFSU2_TR(0x434f0e);
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
B434f11:{NFSU2_TR(0x434f11);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B434f14:L434f14:{c.instructions+=4;NFSU2_TR(0x434f14);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B434f17:{NFSU2_TR(0x434f17);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B434f18:{NFSU2_TR(0x434f18);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B434f19:{NFSU2_TR(0x434f19);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B434f20:L434f20:{c.instructions+=10;NFSU2_TR(0x434f20);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B434f21:{NFSU2_TR(0x434f21);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B434f22:{NFSU2_TR(0x434f22);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B434f23:{NFSU2_TR(0x434f23);
__builtin_memmove((R+24),(R+4),4);
}
B434f25:{NFSU2_TR(0x434f25);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B434f28:{NFSU2_TR(0x434f28);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B434f2a:{NFSU2_TR(0x434f2a);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B434f2c:{NFSU2_TR(0x434f2c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B434f2d:{NFSU2_TR(0x434f2d);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
s4(u32(r4(R+24)),r4(U+0));
}
B434f2f:{NFSU2_TR(0x434f2f);
if(r1(R+518)){{goto L434f3d;}}
}
B434f31:L434f31:{c.instructions+=2;NFSU2_TR(0x434f31);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B434f32:{NFSU2_TR(0x434f32);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x434f37ull));
TAIL_STATIC(0x575630u,575);
}
B434f37:L434f37:{c.instructions+=2;NFSU2_TR(0x434f37);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B434f3a:{NFSU2_TR(0x434f3a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B434f3d:L434f3d:{c.instructions+=4;NFSU2_TR(0x434f3d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B434f40:{NFSU2_TR(0x434f40);
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
B434f42:{NFSU2_TR(0x434f42);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B434f45:{NFSU2_TR(0x434f45);
if(r1(R+518)){{goto L434f56;}}
}
B434f47:L434f47:{c.instructions+=3;NFSU2_TR(0x434f47);
u8 U[4];
w4(U+0,u32(0x40ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B434f49:{NFSU2_TR(0x434f49);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B434f4a:{NFSU2_TR(0x434f4a);
u8 U[4];
__builtin_memmove((U+0),gp(0x80bfdc),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x434f50ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B434f50:L434f50:{c.instructions+=2;NFSU2_TR(0x434f50);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B434f53:{NFSU2_TR(0x434f53);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B434f56:L434f56:{c.instructions+=11;NFSU2_TR(0x434f56);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B434f5a:{NFSU2_TR(0x434f5a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B434f5d:{NFSU2_TR(0x434f5d);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
s4(u32(r4(R+24)),r4(U+0));
}
B434f5f:{NFSU2_TR(0x434f5f);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B434f62:{NFSU2_TR(0x434f62);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B434f65:{NFSU2_TR(0x434f65);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+28),(U+4),4);
}
B434f68:{NFSU2_TR(0x434f68);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+28,shl<u32>(r4(R+28),u64(r4(U+0))));
}
B434f6b:{NFSU2_TR(0x434f6b);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x0ull))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B434f72:{NFSU2_TR(0x434f72);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B434f73:{NFSU2_TR(0x434f73);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B434f76:{NFSU2_TR(0x434f76);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x434f7bull));
TAIL_STATIC(0x575620u,575);
}
B434f7b:L434f7b:{c.instructions+=5;NFSU2_TR(0x434f7b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B434f7e:{NFSU2_TR(0x434f7e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B434f81:{NFSU2_TR(0x434f81);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B434f83:{NFSU2_TR(0x434f83);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+0)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B434f85:{NFSU2_TR(0x434f85);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L434f92;}}
}
B434f87:L434f87:{c.instructions+=5;NFSU2_TR(0x434f87);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B434f8a:{NFSU2_TR(0x434f8a);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+20),4);
s4(u32(r4(U+4)),r4(U+8));
}
B434f8d:{NFSU2_TR(0x434f8d);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B434f8e:{NFSU2_TR(0x434f8e);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B434f90:{NFSU2_TR(0x434f90);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x434f87u);}goto L434f87;}}
}
B434f92:L434f92:{c.instructions+=2;NFSU2_TR(0x434f92);
u8 U[22];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(r4(R+20))));
w1(R+523,sborrow<u32>(r4(U+14),r4(R+20)));
w4(U+18,u32(u32(r4(U+14))-u32(r4(R+20))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B434f95:{NFSU2_TR(0x434f95);
if(r1(R+518)){{goto L434fce;}}
}
B434f97:L434f97:{c.instructions+=7;NFSU2_TR(0x434f97);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B434f9a:{NFSU2_TR(0x434f9a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B434f9d:{NFSU2_TR(0x434f9d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B434fa0:{NFSU2_TR(0x434fa0);
u8 U[45];
w4(U+37,u32(u32(u32(0x6ull))&u32(u32(0x1full))));
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
B434fa3:{NFSU2_TR(0x434fa3);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B434fa4:{NFSU2_TR(0x434fa4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B434fa5:{NFSU2_TR(0x434fa5);
u8 U[4];
__builtin_memmove((U+0),gp(0x80bfd8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x434fabull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B434fab:L434fab:{c.instructions+=4;NFSU2_TR(0x434fab);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B434fae:{NFSU2_TR(0x434fae);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B434fb0:{NFSU2_TR(0x434fb0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B434fb3:{NFSU2_TR(0x434fb3);
if(r1(R+518)){{goto L434fce;}}
}
B434fb5:L434fb5:{c.instructions+=5;NFSU2_TR(0x434fb5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B434fb8:{NFSU2_TR(0x434fb8);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B434fb9:{NFSU2_TR(0x434fb9);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B434fba:{NFSU2_TR(0x434fba);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B434fbd:{NFSU2_TR(0x434fbd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x434fc2ull));
TAIL_STATIC(0x6e3c70u,6e3);
}
B434fc2:L434fc2:{c.instructions+=6;NFSU2_TR(0x434fc2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B434fc3:{NFSU2_TR(0x434fc3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B434fc4:{NFSU2_TR(0x434fc4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B434fc5:{NFSU2_TR(0x434fc5);
w4(R+0,u32(0x1ull));
}
B434fca:{NFSU2_TR(0x434fca);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B434fcb:{NFSU2_TR(0x434fcb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B434fce:L434fce:{c.instructions+=4;NFSU2_TR(0x434fce);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B434fd1:{NFSU2_TR(0x434fd1);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B434fd3:{NFSU2_TR(0x434fd3);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
s4(u32(r4(R+24)),r4(U+0));
}
B434fd5:{NFSU2_TR(0x434fd5);
if(r1(R+518)){{goto L434fe3;}}
}
B434fd7:L434fd7:{c.instructions+=2;NFSU2_TR(0x434fd7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B434fd8:{NFSU2_TR(0x434fd8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x434fddull));
TAIL_STATIC(0x575630u,575);
}
B434fdd:L434fdd:{c.instructions+=2;NFSU2_TR(0x434fdd);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B434fe0:{NFSU2_TR(0x434fe0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B434fe3:L434fe3:{c.instructions+=4;NFSU2_TR(0x434fe3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B434fe6:{NFSU2_TR(0x434fe6);
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
B434fe8:{NFSU2_TR(0x434fe8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B434feb:{NFSU2_TR(0x434feb);
if(r1(R+518)){{goto L434ffc;}}
}
B434fed:L434fed:{c.instructions+=3;NFSU2_TR(0x434fed);
u8 U[4];
w4(U+0,u32(0x40ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B434fef:{NFSU2_TR(0x434fef);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B434ff0:{NFSU2_TR(0x434ff0);
u8 U[4];
__builtin_memmove((U+0),gp(0x80bfdc),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x434ff6ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B434ff6:L434ff6:{c.instructions+=2;NFSU2_TR(0x434ff6);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B434ff9:{NFSU2_TR(0x434ff9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B434ffc:L434ffc:{c.instructions+=2;NFSU2_TR(0x434ffc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B434ffd:{NFSU2_TR(0x434ffd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
TAIL_STATIC(0x435000u,435);
}
XIT:NFSU2_TR_EXIT(0x434,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
