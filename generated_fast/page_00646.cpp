#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_575(u8* __restrict R,Cpu& c);
u32 body_642(u8* __restrict R,Cpu& c);
u32 body_643(u8* __restrict R,Cpu& c);
u32 body_644(u8* __restrict R,Cpu& c);
u32 body_645(u8* __restrict R,Cpu& c);
u32 body_647(u8* __restrict R,Cpu& c);
u32 body_672(u8* __restrict R,Cpu& c);
u32 body_699(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x646,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x646,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_646(u8* __restrict R,Cpu& c);
u32 page_646(Cpu& c){return body_646(c.regs.data(),c);}
__attribute__((noinline)) u32 body_646(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x646001:goto L646001;
case 0x646004:c.instructions+=1;goto B646004;
case 0x646006:goto L646006;
case 0x646009:c.instructions+=1;goto B646009;
case 0x64600b:goto L64600b;
case 0x64600e:c.instructions+=1;goto B64600e;
case 0x646014:goto L646014;
case 0x646017:c.instructions+=1;goto B646017;
case 0x64601c:goto L64601c;
case 0x646021:c.instructions+=1;goto B646021;
case 0x646026:goto L646026;
case 0x646028:c.instructions+=2;goto B646028;
case 0x64602b:c.instructions+=1;goto B64602b;
case 0x646031:goto L646031;
case 0x646034:c.instructions+=4;goto B646034;
case 0x646037:c.instructions+=3;goto B646037;
case 0x64603a:c.instructions+=2;goto B64603a;
case 0x646040:c.instructions+=1;goto B646040;
case 0x646046:goto L646046;
case 0x646049:c.instructions+=2;goto B646049;
case 0x64604c:c.instructions+=1;goto B64604c;
case 0x646052:goto L646052;
case 0x646053:c.instructions+=1;goto B646053;
case 0x646059:goto L646059;
case 0x64605c:c.instructions+=1;goto B64605c;
case 0x64605e:goto L64605e;
case 0x646061:c.instructions+=1;goto B646061;
case 0x646063:goto L646063;
case 0x646066:c.instructions+=1;goto B646066;
case 0x646068:goto L646068;
case 0x64606b:c.instructions+=1;goto B64606b;
case 0x646071:goto L646071;
case 0x646073:c.instructions+=4;goto B646073;
case 0x646075:c.instructions+=3;goto B646075;
case 0x64607a:c.instructions+=2;goto B64607a;
case 0x64607b:c.instructions+=1;goto B64607b;
case 0x64607d:goto L64607d;
case 0x64607f:goto L64607f;
case 0x646085:goto L646085;
case 0x64608a:c.instructions+=1;goto B64608a;
case 0x64608f:goto L64608f;
case 0x646091:c.instructions+=4;goto B646091;
case 0x646093:c.instructions+=3;goto B646093;
case 0x646098:c.instructions+=2;goto B646098;
case 0x646099:c.instructions+=1;goto B646099;
case 0x64609b:goto L64609b;
case 0x64609d:goto L64609d;
case 0x6460a3:goto L6460a3;
case 0x6460a8:c.instructions+=1;goto B6460a8;
case 0x6460ad:goto L6460ad;
case 0x6460af:c.instructions+=4;goto B6460af;
case 0x6460b1:c.instructions+=3;goto B6460b1;
case 0x6460b6:c.instructions+=2;goto B6460b6;
case 0x6460b7:c.instructions+=1;goto B6460b7;
case 0x6460b9:goto L6460b9;
case 0x6460bb:goto L6460bb;
case 0x6460c1:goto L6460c1;
case 0x6460c6:c.instructions+=1;goto B6460c6;
case 0x6460cb:goto L6460cb;
case 0x6460cd:c.instructions+=4;goto B6460cd;
case 0x6460d2:c.instructions+=3;goto B6460d2;
case 0x6460d4:c.instructions+=2;goto B6460d4;
case 0x6460d5:c.instructions+=1;goto B6460d5;
case 0x6460d7:goto L6460d7;
case 0x6460d9:goto L6460d9;
case 0x6460db:goto L6460db;
case 0x6460e0:c.instructions+=1;goto B6460e0;
case 0x6460e5:goto L6460e5;
case 0x6460e7:c.instructions+=4;goto B6460e7;
case 0x6460ec:c.instructions+=3;goto B6460ec;
case 0x6460ee:c.instructions+=2;goto B6460ee;
case 0x6460ef:c.instructions+=1;goto B6460ef;
case 0x6460f1:goto L6460f1;
case 0x6460f3:goto L6460f3;
case 0x6460f5:goto L6460f5;
case 0x6460fa:c.instructions+=1;goto B6460fa;
case 0x6460ff:goto L6460ff;
case 0x646101:c.instructions+=4;goto B646101;
case 0x646106:c.instructions+=3;goto B646106;
case 0x646108:c.instructions+=2;goto B646108;
case 0x646109:c.instructions+=1;goto B646109;
case 0x64610b:goto L64610b;
case 0x64610d:goto L64610d;
case 0x64610f:goto L64610f;
case 0x646114:c.instructions+=1;goto B646114;
case 0x646119:goto L646119;
case 0x64611b:c.instructions+=4;goto B64611b;
case 0x64611d:c.instructions+=3;goto B64611d;
case 0x646122:c.instructions+=2;goto B646122;
case 0x646123:c.instructions+=1;goto B646123;
case 0x646125:goto L646125;
case 0x646127:goto L646127;
case 0x64612d:goto L64612d;
case 0x646132:c.instructions+=1;goto B646132;
case 0x646137:goto L646137;
case 0x646139:c.instructions+=4;goto B646139;
case 0x64613e:c.instructions+=3;goto B64613e;
case 0x646140:c.instructions+=2;goto B646140;
case 0x646141:c.instructions+=1;goto B646141;
case 0x646143:goto L646143;
case 0x646145:goto L646145;
case 0x64614b:goto L64614b;
case 0x64614d:c.instructions+=4;goto B64614d;
case 0x646152:c.instructions+=3;goto B646152;
case 0x646154:c.instructions+=2;goto B646154;
case 0x646155:c.instructions+=1;goto B646155;
case 0x646157:goto L646157;
case 0x646159:goto L646159;
case 0x64615f:goto L64615f;
case 0x646161:c.instructions+=4;goto B646161;
case 0x646166:c.instructions+=3;goto B646166;
case 0x646168:c.instructions+=2;goto B646168;
case 0x646169:c.instructions+=1;goto B646169;
case 0x64616b:goto L64616b;
case 0x64616d:goto L64616d;
case 0x646173:goto L646173;
case 0x646175:c.instructions+=4;goto B646175;
case 0x646177:c.instructions+=3;goto B646177;
case 0x64617c:c.instructions+=2;goto B64617c;
case 0x64617d:c.instructions+=1;goto B64617d;
case 0x64617f:goto L64617f;
case 0x646181:goto L646181;
case 0x646187:goto L646187;
case 0x64618c:c.instructions+=1;goto B64618c;
case 0x646191:goto L646191;
case 0x646193:c.instructions+=4;goto B646193;
case 0x646195:c.instructions+=3;goto B646195;
case 0x64619a:c.instructions+=2;goto B64619a;
case 0x64619b:c.instructions+=1;goto B64619b;
case 0x64619d:goto L64619d;
case 0x64619f:goto L64619f;
case 0x6461a5:goto L6461a5;
case 0x6461aa:c.instructions+=1;goto B6461aa;
case 0x6461af:goto L6461af;
case 0x6461b1:c.instructions+=2;goto B6461b1;
case 0x6461b4:c.instructions+=1;goto B6461b4;
case 0x6461b6:goto L6461b6;
case 0x6461b9:c.instructions+=1;goto B6461b9;
case 0x6461bf:goto L6461bf;
case 0x6461c1:c.instructions+=4;goto B6461c1;
case 0x6461c6:c.instructions+=3;goto B6461c6;
case 0x6461c8:c.instructions+=2;goto B6461c8;
case 0x6461c9:c.instructions+=1;goto B6461c9;
case 0x6461cb:goto L6461cb;
case 0x6461cd:goto L6461cd;
case 0x6461cf:goto L6461cf;
case 0x6461d1:c.instructions+=4;goto B6461d1;
case 0x6461d6:c.instructions+=3;goto B6461d6;
case 0x6461d8:c.instructions+=2;goto B6461d8;
case 0x6461d9:c.instructions+=1;goto B6461d9;
case 0x6461db:goto L6461db;
case 0x6461dd:goto L6461dd;
case 0x6461df:goto L6461df;
case 0x6461e1:c.instructions+=4;goto B6461e1;
case 0x6461e3:c.instructions+=3;goto B6461e3;
case 0x6461e8:c.instructions+=2;goto B6461e8;
case 0x6461e9:c.instructions+=1;goto B6461e9;
case 0x6461eb:goto L6461eb;
case 0x6461ed:goto L6461ed;
case 0x6461f3:goto L6461f3;
case 0x6461f8:c.instructions+=1;goto B6461f8;
case 0x6461fd:goto L6461fd;
case 0x6461ff:c.instructions+=4;goto B6461ff;
case 0x646204:c.instructions+=3;goto B646204;
case 0x646206:c.instructions+=2;goto B646206;
case 0x646207:c.instructions+=1;goto B646207;
case 0x646209:goto L646209;
case 0x64620b:goto L64620b;
case 0x64620d:goto L64620d;
case 0x646212:c.instructions+=1;goto B646212;
case 0x646217:goto L646217;
case 0x646219:c.instructions+=4;goto B646219;
case 0x64621e:c.instructions+=3;goto B64621e;
case 0x646220:c.instructions+=2;goto B646220;
case 0x646221:c.instructions+=1;goto B646221;
case 0x646223:goto L646223;
case 0x646225:goto L646225;
case 0x646227:goto L646227;
case 0x64622c:c.instructions+=1;goto B64622c;
case 0x646231:goto L646231;
case 0x646233:c.instructions+=4;goto B646233;
case 0x646235:c.instructions+=3;goto B646235;
case 0x64623a:c.instructions+=2;goto B64623a;
case 0x64623b:c.instructions+=1;goto B64623b;
case 0x64623d:goto L64623d;
case 0x64623f:goto L64623f;
case 0x646241:goto L646241;
case 0x646247:c.instructions+=3;goto B646247;
case 0x64624a:c.instructions+=2;goto B64624a;
case 0x64624c:c.instructions+=1;goto B64624c;
case 0x64624e:goto L64624e;
case 0x646255:goto L646255;
case 0x64625a:goto L64625a;
case 0x646261:c.instructions+=1;goto B646261;
case 0x646266:goto L646266;
case 0x646269:c.instructions+=2;goto B646269;
case 0x64626b:c.instructions+=1;goto B64626b;
case 0x64626d:goto L64626d;
case 0x646270:c.instructions+=1;goto B646270;
case 0x646272:goto L646272;
case 0x646275:c.instructions+=3;goto B646275;
case 0x64627c:c.instructions+=2;goto B64627c;
case 0x646281:c.instructions+=1;goto B646281;
case 0x646286:goto L646286;
case 0x64628b:c.instructions+=1;goto B64628b;
case 0x646290:goto L646290;
case 0x646297:c.instructions+=1;goto B646297;
case 0x64629c:goto L64629c;
case 0x6462a2:c.instructions+=5;goto B6462a2;
case 0x6462a4:c.instructions+=4;goto B6462a4;
case 0x6462a9:c.instructions+=3;goto B6462a9;
case 0x6462ab:c.instructions+=2;goto B6462ab;
case 0x6462ac:c.instructions+=1;goto B6462ac;
case 0x6462ae:goto L6462ae;
case 0x6462b0:goto L6462b0;
case 0x6462b2:goto L6462b2;
case 0x6462b5:c.instructions+=2;goto B6462b5;
case 0x6462ba:c.instructions+=1;goto B6462ba;
case 0x6462bf:goto L6462bf;
case 0x6462c3:c.instructions+=1;goto B6462c3;
case 0x6462c9:goto L6462c9;
case 0x6462cc:c.instructions+=6;goto B6462cc;
case 0x6462cd:c.instructions+=5;goto B6462cd;
case 0x6462d0:c.instructions+=4;goto B6462d0;
case 0x6462d1:c.instructions+=3;goto B6462d1;
case 0x6462d2:c.instructions+=2;goto B6462d2;
case 0x6462d4:c.instructions+=1;goto B6462d4;
case 0x6462d9:goto L6462d9;
case 0x6462db:c.instructions+=1;goto B6462db;
case 0x6462e1:goto L6462e1;
case 0x6462e5:c.instructions+=4;goto B6462e5;
case 0x6462e7:c.instructions+=3;goto B6462e7;
case 0x6462e8:c.instructions+=2;goto B6462e8;
case 0x6462ee:c.instructions+=1;goto B6462ee;
case 0x6462f1:goto L6462f1;
case 0x6462f3:goto L6462f3;
case 0x6462f5:goto L6462f5;
case 0x6462f8:c.instructions+=5;goto B6462f8;
case 0x6462fb:c.instructions+=4;goto B6462fb;
case 0x6462fe:c.instructions+=3;goto B6462fe;
case 0x646300:c.instructions+=2;goto B646300;
case 0x646301:c.instructions+=1;goto B646301;
case 0x646306:goto L646306;
case 0x646308:c.instructions+=1;goto B646308;
case 0x64630a:goto L64630a;
case 0x64630c:c.instructions+=1;goto B64630c;
case 0x64630e:goto L64630e;
case 0x646310:c.instructions+=1;goto B646310;
case 0x646311:goto L646311;
case 0x646313:c.instructions+=2;goto B646313;
case 0x646316:c.instructions+=1;goto B646316;
case 0x646318:goto L646318;
case 0x64631a:c.instructions+=1;goto B64631a;
case 0x64631f:goto L64631f;
case 0x646322:c.instructions+=1;goto B646322;
case 0x646324:goto L646324;
case 0x646326:c.instructions+=1;goto B646326;
case 0x646328:goto L646328;
case 0x64632b:goto L64632b;
case 0x64632d:c.instructions+=1;goto B64632d;
case 0x64632e:goto L64632e;
case 0x646330:c.instructions+=2;goto B646330;
case 0x646333:c.instructions+=1;goto B646333;
case 0x646339:goto L646339;
case 0x64633b:c.instructions+=10;goto B64633b;
case 0x64633c:c.instructions+=9;goto B64633c;
case 0x646341:c.instructions+=8;goto B646341;
case 0x646347:c.instructions+=7;goto B646347;
case 0x64634c:c.instructions+=6;goto B64634c;
case 0x646353:c.instructions+=5;goto B646353;
case 0x646354:c.instructions+=4;goto B646354;
case 0x646356:c.instructions+=3;goto B646356;
case 0x646359:c.instructions+=2;goto B646359;
case 0x64635c:c.instructions+=1;goto B64635c;
case 0x64635d:goto L64635d;
case 0x64635f:goto L64635f;
case 0x646364:goto L646364;
case 0x646367:goto L646367;
case 0x64636c:c.instructions+=1;goto B64636c;
case 0x646371:goto L646371;
case 0x646376:c.instructions+=1;goto B646376;
case 0x64637b:goto L64637b;
case 0x646380:c.instructions+=1;goto B646380;
case 0x646385:goto L646385;
case 0x64638b:c.instructions+=2;goto B64638b;
case 0x64638d:c.instructions+=1;goto B64638d;
case 0x64638f:goto L64638f;
case 0x646396:c.instructions+=1;goto B646396;
case 0x646398:goto L646398;
case 0x64639f:c.instructions+=1;goto B64639f;
case 0x6463a1:goto L6463a1;
case 0x6463a3:c.instructions+=1;goto B6463a3;
case 0x6463a5:goto L6463a5;
case 0x6463ac:c.instructions+=2;goto B6463ac;
case 0x6463af:c.instructions+=1;goto B6463af;
case 0x6463b1:goto L6463b1;
case 0x6463b4:c.instructions+=1;goto B6463b4;
case 0x6463b6:goto L6463b6;
case 0x6463b7:c.instructions+=1;goto B6463b7;
case 0x6463b9:goto L6463b9;
case 0x6463ba:c.instructions+=1;goto B6463ba;
case 0x6463bc:goto L6463bc;
case 0x6463c1:c.instructions+=1;goto B6463c1;
case 0x6463c3:goto L6463c3;
case 0x6463c8:c.instructions+=1;goto B6463c8;
case 0x6463ca:goto L6463ca;
case 0x6463cf:c.instructions+=1;goto B6463cf;
case 0x6463d1:goto L6463d1;
case 0x6463d6:c.instructions+=1;goto B6463d6;
case 0x6463d8:goto L6463d8;
case 0x6463de:c.instructions+=2;goto B6463de;
case 0x6463e0:c.instructions+=1;goto B6463e0;
case 0x6463e2:goto L6463e2;
case 0x6463e5:c.instructions+=1;goto B6463e5;
case 0x6463e7:goto L6463e7;
case 0x6463ea:c.instructions+=1;goto B6463ea;
case 0x6463ec:goto L6463ec;
case 0x6463f1:c.instructions+=1;goto B6463f1;
case 0x6463f3:goto L6463f3;
case 0x6463f8:c.instructions+=1;goto B6463f8;
case 0x6463fa:goto L6463fa;
case 0x646404:goto L646404;
case 0x646407:goto L646407;
case 0x646408:c.instructions+=4;goto B646408;
case 0x646409:c.instructions+=3;goto B646409;
case 0x64640a:c.instructions+=2;goto B64640a;
case 0x64640b:c.instructions+=1;goto B64640b;
case 0x64640c:goto L64640c;
case 0x64640e:c.instructions+=8;goto B64640e;
case 0x64640f:c.instructions+=7;goto B64640f;
case 0x646411:c.instructions+=6;goto B646411;
case 0x646412:c.instructions+=5;goto B646412;
case 0x646413:c.instructions+=4;goto B646413;
case 0x646414:c.instructions+=3;goto B646414;
case 0x646416:c.instructions+=2;goto B646416;
case 0x646418:c.instructions+=1;goto B646418;
case 0x64641d:goto L64641d;
case 0x64641f:c.instructions+=3;goto B64641f;
case 0x646421:c.instructions+=2;goto B646421;
case 0x646422:c.instructions+=1;goto B646422;
case 0x646424:goto L646424;
case 0x646425:c.instructions+=4;goto B646425;
case 0x646426:c.instructions+=3;goto B646426;
case 0x646429:c.instructions+=2;goto B646429;
case 0x64642b:c.instructions+=1;goto B64642b;
case 0x646430:goto L646430;
case 0x646433:c.instructions+=1;goto B646433;
case 0x646435:goto L646435;
case 0x646438:goto L646438;
case 0x64643b:c.instructions+=2;goto B64643b;
case 0x64643d:c.instructions+=1;goto B64643d;
case 0x646443:goto L646443;
case 0x646446:c.instructions+=1;goto B646446;
case 0x64644c:goto L64644c;
case 0x646452:c.instructions+=3;goto B646452;
case 0x646454:c.instructions+=2;goto B646454;
case 0x646457:c.instructions+=1;goto B646457;
case 0x64645d:goto L64645d;
case 0x646460:c.instructions+=1;goto B646460;
case 0x646466:goto L646466;
case 0x646469:c.instructions+=5;goto B646469;
case 0x64646c:c.instructions+=4;goto B64646c;
case 0x646472:c.instructions+=3;goto B646472;
case 0x646473:c.instructions+=2;goto B646473;
case 0x646479:c.instructions+=1;goto B646479;
case 0x64647e:goto L64647e;
case 0x646480:c.instructions+=2;goto B646480;
case 0x646482:c.instructions+=1;goto B646482;
case 0x646488:goto L646488;
case 0x64648e:c.instructions+=4;goto B64648e;
case 0x646494:c.instructions+=3;goto B646494;
case 0x646495:c.instructions+=2;goto B646495;
case 0x64649b:c.instructions+=1;goto B64649b;
case 0x6464a0:goto L6464a0;
case 0x6464a2:c.instructions+=2;goto B6464a2;
case 0x6464a4:c.instructions+=1;goto B6464a4;
case 0x6464aa:goto L6464aa;
case 0x6464ad:c.instructions+=1;goto B6464ad;
case 0x6464b3:goto L6464b3;
case 0x6464b6:c.instructions+=3;goto B6464b6;
case 0x6464b9:c.instructions+=2;goto B6464b9;
case 0x6464bb:c.instructions+=1;goto B6464bb;
case 0x6464bd:goto L6464bd;
case 0x6464c0:c.instructions+=1;goto B6464c0;
case 0x6464c6:goto L6464c6;
case 0x6464c8:c.instructions+=3;goto B6464c8;
case 0x6464ca:c.instructions+=2;goto B6464ca;
case 0x6464cc:c.instructions+=1;goto B6464cc;
case 0x6464ce:goto L6464ce;
case 0x6464d0:c.instructions+=1;goto B6464d0;
case 0x6464d2:goto L6464d2;
case 0x6464d5:c.instructions+=3;goto B6464d5;
case 0x6464d7:c.instructions+=2;goto B6464d7;
case 0x6464da:c.instructions+=1;goto B6464da;
case 0x6464dc:goto L6464dc;
case 0x6464dd:c.instructions+=5;goto B6464dd;
case 0x6464de:c.instructions+=4;goto B6464de;
case 0x6464df:c.instructions+=3;goto B6464df;
case 0x6464e0:c.instructions+=2;goto B6464e0;
case 0x6464e2:c.instructions+=1;goto B6464e2;
case 0x6464e4:goto L6464e4;
case 0x6464e6:c.instructions+=1;goto B6464e6;
case 0x6464e8:goto L6464e8;
case 0x6464ea:c.instructions+=1;goto B6464ea;
case 0x6464ed:goto L6464ed;
case 0x6464ef:c.instructions+=1;goto B6464ef;
case 0x6464f1:goto L6464f1;
case 0x6464f4:goto L6464f4;
case 0x6464f6:c.instructions+=1;goto B6464f6;
case 0x6464f8:goto L6464f8;
case 0x6464fa:goto L6464fa;
case 0x646500:c.instructions+=7;goto B646500;
case 0x646506:c.instructions+=6;goto B646506;
case 0x64650b:c.instructions+=5;goto B64650b;
case 0x646510:c.instructions+=4;goto B646510;
case 0x646511:c.instructions+=3;goto B646511;
case 0x646514:c.instructions+=2;goto B646514;
case 0x646515:c.instructions+=1;goto B646515;
case 0x64651a:goto L64651a;
case 0x64651d:goto L64651d;
case 0x64651f:c.instructions+=1;goto B64651f;
case 0x646524:goto L646524;
case 0x646526:c.instructions+=1;goto B646526;
case 0x646528:goto L646528;
case 0x64652e:c.instructions+=3;goto B64652e;
case 0x64652f:c.instructions+=2;goto B64652f;
case 0x646531:c.instructions+=1;goto B646531;
case 0x646536:goto L646536;
case 0x646538:goto L646538;
case 0x64653a:goto L64653a;
case 0x64653c:c.instructions+=3;goto B64653c;
case 0x64653f:c.instructions+=2;goto B64653f;
case 0x646541:c.instructions+=1;goto B646541;
case 0x646547:goto L646547;
case 0x64654d:c.instructions+=6;goto B64654d;
case 0x646553:c.instructions+=5;goto B646553;
case 0x646554:c.instructions+=4;goto B646554;
case 0x64655a:c.instructions+=3;goto B64655a;
case 0x64655d:c.instructions+=2;goto B64655d;
case 0x646560:c.instructions+=1;goto B646560;
case 0x646565:goto L646565;
case 0x646567:c.instructions+=2;goto B646567;
case 0x646569:c.instructions+=1;goto B646569;
case 0x64656f:goto L64656f;
case 0x646572:c.instructions+=1;goto B646572;
case 0x646574:goto L646574;
case 0x646576:c.instructions+=4;goto B646576;
case 0x64657c:c.instructions+=3;goto B64657c;
case 0x646581:c.instructions+=2;goto B646581;
case 0x646582:c.instructions+=1;goto B646582;
case 0x646584:goto L646584;
case 0x646586:goto L646586;
case 0x64658c:goto L64658c;
case 0x64658e:c.instructions+=4;goto B64658e;
case 0x646594:c.instructions+=3;goto B646594;
case 0x646599:c.instructions+=2;goto B646599;
case 0x64659a:c.instructions+=1;goto B64659a;
case 0x64659c:goto L64659c;
case 0x64659e:goto L64659e;
case 0x6465a0:goto L6465a0;
case 0x6465a6:c.instructions+=3;goto B6465a6;
case 0x6465a8:c.instructions+=2;goto B6465a8;
case 0x6465ab:c.instructions+=1;goto B6465ab;
case 0x6465ad:goto L6465ad;
case 0x6465b0:c.instructions+=1;goto B6465b0;
case 0x6465b2:goto L6465b2;
case 0x6465b9:goto L6465b9;
case 0x6465ba:c.instructions+=3;goto B6465ba;
case 0x6465bf:c.instructions+=2;goto B6465bf;
case 0x6465c2:c.instructions+=1;goto B6465c2;
case 0x6465c7:goto L6465c7;
case 0x6465ce:c.instructions+=2;goto B6465ce;
case 0x6465d3:c.instructions+=1;goto B6465d3;
case 0x6465d8:goto L6465d8;
case 0x6465db:c.instructions+=1;goto B6465db;
case 0x6465de:goto L6465de;
case 0x6465e1:c.instructions+=3;goto B6465e1;
case 0x6465e4:c.instructions+=2;goto B6465e4;
case 0x6465e6:c.instructions+=1;goto B6465e6;
case 0x6465e8:goto L6465e8;
case 0x6465eb:c.instructions+=3;goto B6465eb;
case 0x6465ed:c.instructions+=2;goto B6465ed;
case 0x6465f3:c.instructions+=1;goto B6465f3;
case 0x6465f4:goto L6465f4;
case 0x6465f6:goto L6465f6;
case 0x6465f9:c.instructions+=8;goto B6465f9;
case 0x6465fc:c.instructions+=7;goto B6465fc;
case 0x646600:c.instructions+=6;goto B646600;
case 0x646606:c.instructions+=5;goto B646606;
case 0x646609:c.instructions+=4;goto B646609;
case 0x64660f:c.instructions+=3;goto B64660f;
case 0x646612:c.instructions+=2;goto B646612;
case 0x646618:c.instructions+=1;goto B646618;
case 0x64661a:goto L64661a;
case 0x646620:c.instructions+=4;goto B646620;
case 0x646626:c.instructions+=3;goto B646626;
case 0x646627:c.instructions+=2;goto B646627;
case 0x64662d:c.instructions+=1;goto B64662d;
case 0x646632:goto L646632;
case 0x646634:c.instructions+=2;goto B646634;
case 0x646636:c.instructions+=1;goto B646636;
case 0x646638:goto L646638;
case 0x64663e:c.instructions+=2;goto B64663e;
case 0x646641:c.instructions+=1;goto B646641;
case 0x646643:goto L646643;
case 0x646646:c.instructions+=1;goto B646646;
case 0x646648:goto L646648;
case 0x64664a:c.instructions+=1;goto B64664a;
case 0x64664f:goto L64664f;
case 0x646651:c.instructions+=1;goto B646651;
case 0x646653:goto L646653;
case 0x646659:c.instructions+=3;goto B646659;
case 0x64665a:c.instructions+=2;goto B64665a;
case 0x64665c:c.instructions+=1;goto B64665c;
case 0x646661:goto L646661;
case 0x646663:goto L646663;
case 0x646665:goto L646665;
case 0x646667:c.instructions+=3;goto B646667;
case 0x64666a:c.instructions+=2;goto B64666a;
case 0x64666c:c.instructions+=1;goto B64666c;
case 0x64666e:goto L64666e;
case 0x646671:c.instructions+=1;goto B646671;
case 0x646676:goto L646676;
case 0x64667b:c.instructions+=1;goto B64667b;
case 0x64667d:goto L64667d;
case 0x646680:c.instructions+=3;goto B646680;
case 0x646682:c.instructions+=2;goto B646682;
case 0x646689:c.instructions+=1;goto B646689;
case 0x64668e:goto L64668e;
case 0x646690:c.instructions+=2;goto B646690;
case 0x646692:c.instructions+=1;goto B646692;
case 0x646694:goto L646694;
case 0x646698:c.instructions+=1;goto B646698;
case 0x64669a:goto L64669a;
case 0x64669d:c.instructions+=2;goto B64669d;
case 0x64669f:c.instructions+=1;goto B64669f;
case 0x6466a1:goto L6466a1;
case 0x6466a3:c.instructions+=1;goto B6466a3;
case 0x6466a8:goto L6466a8;
case 0x6466a9:c.instructions+=5;goto B6466a9;
case 0x6466ab:c.instructions+=4;goto B6466ab;
case 0x6466ac:c.instructions+=3;goto B6466ac;
case 0x6466ad:c.instructions+=2;goto B6466ad;
case 0x6466ae:c.instructions+=1;goto B6466ae;
case 0x6466b1:goto L6466b1;
case 0x6466b3:c.instructions+=15;goto B6466b3;
case 0x6466b4:c.instructions+=14;goto B6466b4;
case 0x6466b6:c.instructions+=13;goto B6466b6;
case 0x6466b9:c.instructions+=12;goto B6466b9;
case 0x6466ba:c.instructions+=11;goto B6466ba;
case 0x6466bb:c.instructions+=10;goto B6466bb;
case 0x6466bc:c.instructions+=9;goto B6466bc;
case 0x6466be:c.instructions+=8;goto B6466be;
case 0x6466c4:c.instructions+=7;goto B6466c4;
case 0x6466c6:c.instructions+=6;goto B6466c6;
case 0x6466c9:c.instructions+=5;goto B6466c9;
case 0x6466ca:c.instructions+=4;goto B6466ca;
case 0x6466cc:c.instructions+=3;goto B6466cc;
case 0x6466cf:c.instructions+=2;goto B6466cf;
case 0x6466d1:c.instructions+=1;goto B6466d1;
case 0x6466d4:goto L6466d4;
case 0x6466d6:goto L6466d6;
case 0x6466db:goto L6466db;
case 0x6466dd:c.instructions+=3;goto B6466dd;
case 0x6466df:c.instructions+=2;goto B6466df;
case 0x6466e0:c.instructions+=1;goto B6466e0;
case 0x6466e2:goto L6466e2;
case 0x6466e8:c.instructions+=6;goto B6466e8;
case 0x6466eb:c.instructions+=5;goto B6466eb;
case 0x6466ee:c.instructions+=4;goto B6466ee;
case 0x6466f1:c.instructions+=3;goto B6466f1;
case 0x6466f4:c.instructions+=2;goto B6466f4;
case 0x6466f7:c.instructions+=1;goto B6466f7;
case 0x6466f9:goto L6466f9;
case 0x6466fc:goto L6466fc;
case 0x6466ff:c.instructions+=1;goto B6466ff;
case 0x646705:goto L646705;
case 0x646708:c.instructions+=2;goto B646708;
case 0x64670a:c.instructions+=1;goto B64670a;
case 0x64670f:goto L64670f;
case 0x646711:c.instructions+=2;goto B646711;
case 0x646713:c.instructions+=1;goto B646713;
case 0x646719:goto L646719;
case 0x64671b:c.instructions+=1;goto B64671b;
case 0x646720:goto L646720;
case 0x646722:c.instructions+=2;goto B646722;
case 0x646723:c.instructions+=1;goto B646723;
case 0x646725:goto L646725;
case 0x64672b:c.instructions+=6;goto B64672b;
case 0x64672e:c.instructions+=5;goto B64672e;
case 0x646731:c.instructions+=4;goto B646731;
case 0x646734:c.instructions+=3;goto B646734;
case 0x646737:c.instructions+=2;goto B646737;
case 0x64673a:c.instructions+=1;goto B64673a;
case 0x64673c:goto L64673c;
case 0x64673f:goto L64673f;
case 0x646742:c.instructions+=1;goto B646742;
case 0x646748:goto L646748;
case 0x64674b:c.instructions+=2;goto B64674b;
case 0x64674d:c.instructions+=1;goto B64674d;
case 0x646752:goto L646752;
case 0x646754:c.instructions+=2;goto B646754;
case 0x646756:c.instructions+=1;goto B646756;
case 0x64675c:goto L64675c;
case 0x64675e:c.instructions+=5;goto B64675e;
case 0x64675f:c.instructions+=4;goto B64675f;
case 0x646761:c.instructions+=3;goto B646761;
case 0x646764:c.instructions+=2;goto B646764;
case 0x64676b:c.instructions+=1;goto B64676b;
case 0x646770:goto L646770;
case 0x646772:c.instructions+=2;goto B646772;
case 0x646773:c.instructions+=1;goto B646773;
case 0x646775:goto L646775;
case 0x64677b:c.instructions+=6;goto B64677b;
case 0x64677e:c.instructions+=5;goto B64677e;
case 0x646781:c.instructions+=4;goto B646781;
case 0x646784:c.instructions+=3;goto B646784;
case 0x646787:c.instructions+=2;goto B646787;
case 0x64678a:c.instructions+=1;goto B64678a;
case 0x64678c:goto L64678c;
case 0x64678f:goto L64678f;
case 0x646792:c.instructions+=1;goto B646792;
case 0x646798:goto L646798;
case 0x64679a:c.instructions+=1;goto B64679a;
case 0x64679f:goto L64679f;
case 0x6467a1:c.instructions+=1;goto B6467a1;
case 0x6467a3:goto L6467a3;
case 0x6467a6:c.instructions+=3;goto B6467a6;
case 0x6467a7:c.instructions+=2;goto B6467a7;
case 0x6467a9:c.instructions+=1;goto B6467a9;
case 0x6467ae:goto L6467ae;
case 0x6467b0:goto L6467b0;
case 0x6467b2:goto L6467b2;
case 0x6467b4:c.instructions+=3;goto B6467b4;
case 0x6467b7:c.instructions+=2;goto B6467b7;
case 0x6467ba:c.instructions+=1;goto B6467ba;
case 0x6467bc:goto L6467bc;
case 0x6467bd:c.instructions+=2;goto B6467bd;
case 0x6467c0:c.instructions+=1;goto B6467c0;
case 0x6467c5:goto L6467c5;
case 0x6467c7:c.instructions+=2;goto B6467c7;
case 0x6467c9:c.instructions+=1;goto B6467c9;
case 0x6467cf:goto L6467cf;
case 0x6467d1:c.instructions+=3;goto B6467d1;
case 0x6467d4:c.instructions+=2;goto B6467d4;
case 0x6467db:c.instructions+=1;goto B6467db;
case 0x6467e0:goto L6467e0;
case 0x6467e2:c.instructions+=2;goto B6467e2;
case 0x6467e3:c.instructions+=1;goto B6467e3;
case 0x6467e5:goto L6467e5;
case 0x6467eb:c.instructions+=6;goto B6467eb;
case 0x6467ee:c.instructions+=5;goto B6467ee;
case 0x6467f1:c.instructions+=4;goto B6467f1;
case 0x6467f4:c.instructions+=3;goto B6467f4;
case 0x6467f7:c.instructions+=2;goto B6467f7;
case 0x6467fa:c.instructions+=1;goto B6467fa;
case 0x6467fc:goto L6467fc;
case 0x6467ff:goto L6467ff;
case 0x646802:c.instructions+=1;goto B646802;
case 0x646804:goto L646804;
case 0x646806:c.instructions+=1;goto B646806;
case 0x64680b:goto L64680b;
case 0x64680d:c.instructions+=1;goto B64680d;
case 0x64680f:goto L64680f;
case 0x646812:c.instructions+=3;goto B646812;
case 0x646813:c.instructions+=2;goto B646813;
case 0x646815:c.instructions+=1;goto B646815;
case 0x64681a:goto L64681a;
case 0x64681c:goto L64681c;
case 0x64681e:goto L64681e;
case 0x646820:c.instructions+=3;goto B646820;
case 0x646823:c.instructions+=2;goto B646823;
case 0x646826:c.instructions+=1;goto B646826;
case 0x646828:goto L646828;
case 0x64682d:c.instructions+=1;goto B64682d;
case 0x64682f:goto L64682f;
case 0x646832:c.instructions+=2;goto B646832;
case 0x646835:c.instructions+=1;goto B646835;
case 0x64683a:goto L64683a;
case 0x64683c:c.instructions+=2;goto B64683c;
case 0x64683e:c.instructions+=1;goto B64683e;
case 0x646840:goto L646840;
case 0x646843:c.instructions+=3;goto B646843;
case 0x646845:c.instructions+=2;goto B646845;
case 0x646848:c.instructions+=1;goto B646848;
case 0x64684a:goto L64684a;
case 0x64684d:c.instructions+=1;goto B64684d;
case 0x646852:goto L646852;
case 0x646855:c.instructions+=4;goto B646855;
case 0x646858:c.instructions+=3;goto B646858;
case 0x64685e:c.instructions+=2;goto B64685e;
case 0x646860:c.instructions+=1;goto B646860;
case 0x646862:goto L646862;
case 0x646865:c.instructions+=1;goto B646865;
case 0x64686a:goto L64686a;
case 0x64686c:goto L64686c;
case 0x64686f:c.instructions+=5;goto B64686f;
case 0x646872:c.instructions+=4;goto B646872;
case 0x646878:c.instructions+=3;goto B646878;
case 0x64687b:c.instructions+=2;goto B64687b;
case 0x64687d:c.instructions+=1;goto B64687d;
case 0x64687f:goto L64687f;
case 0x646881:c.instructions+=1;goto B646881;
case 0x646886:goto L646886;
case 0x646888:c.instructions+=5;goto B646888;
case 0x646889:c.instructions+=4;goto B646889;
case 0x64688a:c.instructions+=3;goto B64688a;
case 0x64688b:c.instructions+=2;goto B64688b;
case 0x64688c:c.instructions+=1;goto B64688c;
case 0x64688f:goto L64688f;
case 0x646892:goto L646892;
case 0x646895:c.instructions+=2;goto B646895;
case 0x646897:c.instructions+=1;goto B646897;
case 0x646899:goto L646899;
case 0x64689b:c.instructions+=2;goto B64689b;
case 0x64689e:c.instructions+=1;goto B64689e;
case 0x6468a1:goto L6468a1;
case 0x6468a3:c.instructions+=3;goto B6468a3;
case 0x6468a4:c.instructions+=2;goto B6468a4;
case 0x6468a6:c.instructions+=1;goto B6468a6;
case 0x6468a8:goto L6468a8;
case 0x6468ab:c.instructions+=1;goto B6468ab;
case 0x6468ad:goto L6468ad;
case 0x6468af:goto L6468af;
case 0x6468b2:c.instructions+=8;goto B6468b2;
case 0x6468b3:c.instructions+=7;goto B6468b3;
case 0x6468b4:c.instructions+=6;goto B6468b4;
case 0x6468b5:c.instructions+=5;goto B6468b5;
case 0x6468b6:c.instructions+=4;goto B6468b6;
case 0x6468b7:c.instructions+=3;goto B6468b7;
case 0x6468b8:c.instructions+=2;goto B6468b8;
case 0x6468bb:c.instructions+=1;goto B6468bb;
case 0x6468c0:goto L6468c0;
case 0x6468c2:c.instructions+=2;goto B6468c2;
case 0x6468c4:c.instructions+=1;goto B6468c4;
case 0x6468c6:goto L6468c6;
case 0x6468c9:c.instructions+=3;goto B6468c9;
case 0x6468ca:c.instructions+=2;goto B6468ca;
case 0x6468cc:c.instructions+=1;goto B6468cc;
case 0x6468d1:goto L6468d1;
case 0x6468d3:c.instructions+=2;goto B6468d3;
case 0x6468d5:c.instructions+=1;goto B6468d5;
case 0x6468d7:goto L6468d7;
case 0x6468da:c.instructions+=2;goto B6468da;
case 0x6468dc:c.instructions+=1;goto B6468dc;
case 0x6468de:goto L6468de;
case 0x6468e0:goto L6468e0;
case 0x6468e3:c.instructions+=1;goto B6468e3;
case 0x6468e8:goto L6468e8;
case 0x6468ea:goto L6468ea;
case 0x6468ec:c.instructions+=11;goto B6468ec;
case 0x6468ed:c.instructions+=10;goto B6468ed;
case 0x6468ef:c.instructions+=9;goto B6468ef;
case 0x6468f2:c.instructions+=8;goto B6468f2;
case 0x6468f3:c.instructions+=7;goto B6468f3;
case 0x6468f4:c.instructions+=6;goto B6468f4;
case 0x6468f5:c.instructions+=5;goto B6468f5;
case 0x6468f7:c.instructions+=4;goto B6468f7;
case 0x6468f9:c.instructions+=3;goto B6468f9;
case 0x6468fb:c.instructions+=2;goto B6468fb;
case 0x6468fe:c.instructions+=1;goto B6468fe;
case 0x646904:goto L646904;
case 0x646907:c.instructions+=1;goto B646907;
case 0x646909:goto L646909;
case 0x64690c:c.instructions+=3;goto B64690c;
case 0x64690d:c.instructions+=2;goto B64690d;
case 0x64690f:c.instructions+=1;goto B64690f;
case 0x646911:goto L646911;
case 0x646914:c.instructions+=7;goto B646914;
case 0x646918:c.instructions+=6;goto B646918;
case 0x64691b:c.instructions+=5;goto B64691b;
case 0x64691e:c.instructions+=4;goto B64691e;
case 0x646921:c.instructions+=3;goto B646921;
case 0x646924:c.instructions+=2;goto B646924;
case 0x646927:c.instructions+=1;goto B646927;
case 0x64692a:goto L64692a;
case 0x64692c:c.instructions+=1;goto B64692c;
case 0x64692e:goto L64692e;
case 0x646931:c.instructions+=2;goto B646931;
case 0x646934:c.instructions+=1;goto B646934;
case 0x64693a:goto L64693a;
case 0x646941:goto L646941;
case 0x646946:c.instructions+=1;goto B646946;
case 0x64694b:goto L64694b;
case 0x64694e:c.instructions+=4;goto B64694e;
case 0x646950:c.instructions+=3;goto B646950;
case 0x646953:c.instructions+=2;goto B646953;
case 0x646955:c.instructions+=1;goto B646955;
case 0x64695a:goto L64695a;
case 0x64695f:goto L64695f;
case 0x646962:c.instructions+=3;goto B646962;
case 0x646965:c.instructions+=2;goto B646965;
case 0x646967:c.instructions+=1;goto B646967;
case 0x64696c:goto L64696c;
case 0x646971:goto L646971;
case 0x646972:goto L646972;
case 0x646975:c.instructions+=3;goto B646975;
case 0x646978:c.instructions+=2;goto B646978;
case 0x64697a:c.instructions+=1;goto B64697a;
case 0x64697f:goto L64697f;
case 0x646984:goto L646984;
case 0x646987:c.instructions+=2;goto B646987;
case 0x64698a:c.instructions+=1;goto B64698a;
case 0x64698c:goto L64698c;
case 0x64698e:c.instructions+=1;goto B64698e;
case 0x646993:goto L646993;
case 0x646998:goto L646998;
case 0x64699a:c.instructions+=1;goto B64699a;
case 0x64699f:goto L64699f;
case 0x6469a4:goto L6469a4;
case 0x6469a7:c.instructions+=1;goto B6469a7;
case 0x6469aa:goto L6469aa;
case 0x6469ac:c.instructions+=1;goto B6469ac;
case 0x6469b1:goto L6469b1;
case 0x6469b6:goto L6469b6;
case 0x6469b9:c.instructions+=5;goto B6469b9;
case 0x6469ba:c.instructions+=4;goto B6469ba;
case 0x6469bb:c.instructions+=3;goto B6469bb;
case 0x6469be:c.instructions+=2;goto B6469be;
case 0x6469c0:c.instructions+=1;goto B6469c0;
case 0x6469c5:goto L6469c5;
case 0x6469c7:goto L6469c7;
case 0x6469ca:c.instructions+=5;goto B6469ca;
case 0x6469cb:c.instructions+=4;goto B6469cb;
case 0x6469cc:c.instructions+=3;goto B6469cc;
case 0x6469cf:c.instructions+=2;goto B6469cf;
case 0x6469d1:c.instructions+=1;goto B6469d1;
case 0x6469d6:goto L6469d6;
case 0x6469d8:c.instructions+=2;goto B6469d8;
case 0x6469da:c.instructions+=1;goto B6469da;
case 0x6469db:goto L6469db;
case 0x6469dc:c.instructions+=1;goto B6469dc;
case 0x6469de:goto L6469de;
case 0x6469e1:c.instructions+=3;goto B6469e1;
case 0x6469e4:c.instructions+=2;goto B6469e4;
case 0x6469e6:c.instructions+=1;goto B6469e6;
case 0x6469eb:goto L6469eb;
case 0x6469f0:goto L6469f0;
case 0x6469f2:c.instructions+=1;goto B6469f2;
case 0x6469f7:goto L6469f7;
case 0x6469fc:goto L6469fc;
case 0x6469fe:c.instructions+=1;goto B6469fe;
case 0x646a03:goto L646a03;
case 0x646a08:goto L646a08;
case 0x646a0a:c.instructions+=2;goto B646a0a;
case 0x646a0c:c.instructions+=1;goto B646a0c;
case 0x646a11:goto L646a11;
case 0x646a17:c.instructions+=1;goto B646a17;
case 0x646a1c:goto L646a1c;
case 0x646a21:goto L646a21;
case 0x646a23:c.instructions+=2;goto B646a23;
case 0x646a25:c.instructions+=1;goto B646a25;
case 0x646a2a:goto L646a2a;
case 0x646a2c:goto L646a2c;
case 0x646a2e:c.instructions+=1;goto B646a2e;
case 0x646a33:goto L646a33;
case 0x646a38:goto L646a38;
case 0x646a3b:c.instructions+=1;goto B646a3b;
case 0x646a40:goto L646a40;
case 0x646a43:c.instructions+=4;goto B646a43;
case 0x646a46:c.instructions+=3;goto B646a46;
case 0x646a48:c.instructions+=2;goto B646a48;
case 0x646a4f:c.instructions+=1;goto B646a4f;
case 0x646a54:goto L646a54;
case 0x646a56:goto L646a56;
case 0x646a59:c.instructions+=6;goto B646a59;
case 0x646a5a:c.instructions+=5;goto B646a5a;
case 0x646a5b:c.instructions+=4;goto B646a5b;
case 0x646a5e:c.instructions+=3;goto B646a5e;
case 0x646a60:c.instructions+=2;goto B646a60;
case 0x646a67:c.instructions+=1;goto B646a67;
case 0x646a6c:goto L646a6c;
case 0x646a6f:c.instructions+=2;goto B646a6f;
case 0x646a76:c.instructions+=1;goto B646a76;
case 0x646a78:goto L646a78;
case 0x646a7b:c.instructions+=3;goto B646a7b;
case 0x646a7d:c.instructions+=2;goto B646a7d;
case 0x646a80:c.instructions+=1;goto B646a80;
case 0x646a83:goto L646a83;
case 0x646a86:c.instructions+=1;goto B646a86;
case 0x646a8b:goto L646a8b;
case 0x646a8e:c.instructions+=2;goto B646a8e;
case 0x646a91:c.instructions+=1;goto B646a91;
case 0x646a96:goto L646a96;
case 0x646a99:c.instructions+=4;goto B646a99;
case 0x646a9c:c.instructions+=3;goto B646a9c;
case 0x646a9f:c.instructions+=2;goto B646a9f;
case 0x646aa3:c.instructions+=1;goto B646aa3;
case 0x646aa5:goto L646aa5;
case 0x646aa8:c.instructions+=4;goto B646aa8;
case 0x646aab:c.instructions+=3;goto B646aab;
case 0x646aad:c.instructions+=2;goto B646aad;
case 0x646ab0:c.instructions+=1;goto B646ab0;
case 0x646ab2:goto L646ab2;
case 0x646ab5:c.instructions+=2;goto B646ab5;
case 0x646ab7:c.instructions+=1;goto B646ab7;
case 0x646ab9:goto L646ab9;
case 0x646abc:goto L646abc;
case 0x646abe:c.instructions+=1;goto B646abe;
case 0x646ac3:goto L646ac3;
case 0x646ac8:c.instructions+=6;goto B646ac8;
case 0x646acd:c.instructions+=5;goto B646acd;
case 0x646ad3:c.instructions+=4;goto B646ad3;
case 0x646ad4:c.instructions+=3;goto B646ad4;
case 0x646ad7:c.instructions+=2;goto B646ad7;
case 0x646ad8:c.instructions+=1;goto B646ad8;
case 0x646add:goto L646add;
case 0x646ae0:c.instructions+=2;goto B646ae0;
case 0x646ae7:c.instructions+=1;goto B646ae7;
case 0x646aec:goto L646aec;
case 0x646aef:c.instructions+=4;goto B646aef;
case 0x646af2:c.instructions+=3;goto B646af2;
case 0x646af5:c.instructions+=2;goto B646af5;
case 0x646af8:c.instructions+=1;goto B646af8;
case 0x646afd:goto L646afd;
case 0x646b00:c.instructions+=4;goto B646b00;
case 0x646b03:c.instructions+=3;goto B646b03;
case 0x646b06:c.instructions+=2;goto B646b06;
case 0x646b09:c.instructions+=1;goto B646b09;
case 0x646b0e:goto L646b0e;
case 0x646b11:c.instructions+=4;goto B646b11;
case 0x646b14:c.instructions+=3;goto B646b14;
case 0x646b17:c.instructions+=2;goto B646b17;
case 0x646b1a:c.instructions+=1;goto B646b1a;
case 0x646b1c:goto L646b1c;
case 0x646b1f:c.instructions+=3;goto B646b1f;
case 0x646b22:c.instructions+=2;goto B646b22;
case 0x646b25:c.instructions+=1;goto B646b25;
case 0x646b28:goto L646b28;
case 0x646b2a:c.instructions+=2;goto B646b2a;
case 0x646b2c:c.instructions+=1;goto B646b2c;
case 0x646b31:goto L646b31;
case 0x646b34:c.instructions+=3;goto B646b34;
case 0x646b37:c.instructions+=2;goto B646b37;
case 0x646b3a:c.instructions+=1;goto B646b3a;
case 0x646b3d:goto L646b3d;
case 0x646b3f:c.instructions+=1;goto B646b3f;
case 0x646b41:goto L646b41;
case 0x646b44:c.instructions+=4;goto B646b44;
case 0x646b47:c.instructions+=3;goto B646b47;
case 0x646b4a:c.instructions+=2;goto B646b4a;
case 0x646b4d:c.instructions+=1;goto B646b4d;
case 0x646b4f:goto L646b4f;
case 0x646b52:c.instructions+=5;goto B646b52;
case 0x646b55:c.instructions+=4;goto B646b55;
case 0x646b58:c.instructions+=3;goto B646b58;
case 0x646b5b:c.instructions+=2;goto B646b5b;
case 0x646b5d:c.instructions+=1;goto B646b5d;
case 0x646b5f:goto L646b5f;
case 0x646b60:c.instructions+=1;goto B646b60;
case 0x646b65:goto L646b65;
case 0x646b68:c.instructions+=7;goto B646b68;
case 0x646b6b:c.instructions+=6;goto B646b6b;
case 0x646b6e:c.instructions+=5;goto B646b6e;
case 0x646b70:c.instructions+=4;goto B646b70;
case 0x646b73:c.instructions+=3;goto B646b73;
case 0x646b76:c.instructions+=2;goto B646b76;
case 0x646b79:c.instructions+=1;goto B646b79;
case 0x646b7e:goto L646b7e;
case 0x646b81:c.instructions+=2;goto B646b81;
case 0x646b84:c.instructions+=1;goto B646b84;
case 0x646b86:goto L646b86;
case 0x646b89:c.instructions+=2;goto B646b89;
case 0x646b8c:c.instructions+=1;goto B646b8c;
case 0x646b8e:goto L646b8e;
case 0x646b90:c.instructions+=2;goto B646b90;
case 0x646b91:c.instructions+=1;goto B646b91;
case 0x646b96:goto L646b96;
case 0x646b99:c.instructions+=2;goto B646b99;
case 0x646b9c:c.instructions+=1;goto B646b9c;
case 0x646b9e:goto L646b9e;
case 0x646ba0:goto L646ba0;
case 0x646ba2:c.instructions+=1;goto B646ba2;
case 0x646ba7:goto L646ba7;
case 0x646baa:c.instructions+=3;goto B646baa;
case 0x646bad:c.instructions+=2;goto B646bad;
case 0x646bb0:c.instructions+=1;goto B646bb0;
case 0x646bb2:goto L646bb2;
case 0x646bb5:goto L646bb5;
case 0x646bb8:c.instructions+=1;goto B646bb8;
case 0x646bbd:goto L646bbd;
case 0x646bbf:c.instructions+=1;goto B646bbf;
case 0x646bc4:goto L646bc4;
case 0x646bc6:c.instructions+=1;goto B646bc6;
case 0x646bc8:goto L646bc8;
case 0x646bce:c.instructions+=3;goto B646bce;
case 0x646bcf:c.instructions+=2;goto B646bcf;
case 0x646bd1:c.instructions+=1;goto B646bd1;
case 0x646bd6:goto L646bd6;
case 0x646bd8:c.instructions+=1;goto B646bd8;
case 0x646bda:goto L646bda;
case 0x646bdc:goto L646bdc;
case 0x646bdd:c.instructions+=2;goto B646bdd;
case 0x646bdf:c.instructions+=1;goto B646bdf;
case 0x646be4:goto L646be4;
case 0x646be7:c.instructions+=1;goto B646be7;
case 0x646be9:goto L646be9;
case 0x646bec:c.instructions+=2;goto B646bec;
case 0x646bee:c.instructions+=1;goto B646bee;
case 0x646bf0:goto L646bf0;
case 0x646bf3:c.instructions+=4;goto B646bf3;
case 0x646bf6:c.instructions+=3;goto B646bf6;
case 0x646bf9:c.instructions+=2;goto B646bf9;
case 0x646bfc:c.instructions+=1;goto B646bfc;
case 0x646bff:goto L646bff;
case 0x646c02:goto L646c02;
case 0x646c03:c.instructions+=4;goto B646c03;
case 0x646c04:c.instructions+=3;goto B646c04;
case 0x646c05:c.instructions+=2;goto B646c05;
case 0x646c06:c.instructions+=1;goto B646c06;
case 0x646c09:goto L646c09;
case 0x646c0b:c.instructions+=1;goto B646c0b;
case 0x646c10:goto L646c10;
case 0x646c12:c.instructions+=1;goto B646c12;
case 0x646c14:goto L646c14;
case 0x646c19:c.instructions+=4;goto B646c19;
case 0x646c1c:c.instructions+=3;goto B646c1c;
case 0x646c1e:c.instructions+=2;goto B646c1e;
case 0x646c1f:c.instructions+=1;goto B646c1f;
case 0x646c24:goto L646c24;
case 0x646c26:goto L646c26;
case 0x646c28:goto L646c28;
case 0x646c2a:c.instructions+=1;goto B646c2a;
case 0x646c2c:goto L646c2c;
case 0x646c31:goto L646c31;
case 0x646c32:c.instructions+=5;goto B646c32;
case 0x646c38:c.instructions+=4;goto B646c38;
case 0x646c39:c.instructions+=3;goto B646c39;
case 0x646c3c:c.instructions+=2;goto B646c3c;
case 0x646c3d:c.instructions+=1;goto B646c3d;
case 0x646c42:goto L646c42;
case 0x646c45:c.instructions+=2;goto B646c45;
case 0x646c4c:c.instructions+=1;goto B646c4c;
case 0x646d0a:goto L646d0a;
case 0x646d0c:c.instructions+=11;goto B646d0c;
case 0x646d0d:c.instructions+=10;goto B646d0d;
case 0x646d0e:c.instructions+=9;goto B646d0e;
case 0x646d10:c.instructions+=8;goto B646d10;
case 0x646d11:c.instructions+=7;goto B646d11;
case 0x646d17:c.instructions+=6;goto B646d17;
case 0x646d1d:c.instructions+=5;goto B646d1d;
case 0x646d27:c.instructions+=4;goto B646d27;
case 0x646d31:c.instructions+=3;goto B646d31;
case 0x646d38:c.instructions+=2;goto B646d38;
case 0x646d3b:c.instructions+=1;goto B646d3b;
case 0x646d40:goto L646d40;
case 0x646d48:c.instructions+=2;goto B646d48;
case 0x646d4a:c.instructions+=1;goto B646d4a;
case 0x646d50:goto L646d50;
case 0x646d52:c.instructions+=1;goto B646d52;
case 0x646d54:goto L646d54;
case 0x646d5a:c.instructions+=1;goto B646d5a;
case 0x646d5f:goto L646d5f;
case 0x646d61:c.instructions+=2;goto B646d61;
case 0x646d66:c.instructions+=1;goto B646d66;
case 0x646d68:goto L646d68;
case 0x646d6a:c.instructions+=1;goto B646d6a;
case 0x646d6f:goto L646d6f;
case 0x646d77:c.instructions+=2;goto B646d77;
case 0x646d79:c.instructions+=1;goto B646d79;
case 0x646d7b:goto L646d7b;
case 0x646d7d:c.instructions+=1;goto B646d7d;
case 0x646d7f:goto L646d7f;
case 0x646d84:c.instructions+=2;goto B646d84;
case 0x646d86:c.instructions+=1;goto B646d86;
case 0x646d88:goto L646d88;
case 0x646d8a:c.instructions+=3;goto B646d8a;
case 0x646d91:c.instructions+=2;goto B646d91;
case 0x646d93:c.instructions+=1;goto B646d93;
case 0x646d95:goto L646d95;
case 0x646d9a:c.instructions+=2;goto B646d9a;
case 0x646d9f:c.instructions+=1;goto B646d9f;
case 0x646da5:goto L646da5;
case 0x646dac:c.instructions+=12;goto B646dac;
case 0x646dad:c.instructions+=11;goto B646dad;
case 0x646dae:c.instructions+=10;goto B646dae;
case 0x646db3:c.instructions+=9;goto B646db3;
case 0x646db6:c.instructions+=8;goto B646db6;
case 0x646dbd:c.instructions+=7;goto B646dbd;
case 0x646dc2:c.instructions+=6;goto B646dc2;
case 0x646dc8:c.instructions+=5;goto B646dc8;
case 0x646dca:c.instructions+=4;goto B646dca;
case 0x646dcd:c.instructions+=3;goto B646dcd;
case 0x646dd4:c.instructions+=2;goto B646dd4;
case 0x646dd9:c.instructions+=1;goto B646dd9;
case 0x646ddf:goto L646ddf;
case 0x646de5:c.instructions+=1;goto B646de5;
case 0x646dea:goto L646dea;
case 0x646def:goto L646def;
case 0x646df7:c.instructions+=2;goto B646df7;
case 0x646df9:c.instructions+=1;goto B646df9;
case 0x646dff:goto L646dff;
case 0x646e01:c.instructions+=1;goto B646e01;
case 0x646e07:goto L646e07;
case 0x646e09:c.instructions+=1;goto B646e09;
case 0x646e0f:goto L646e0f;
case 0x646e11:c.instructions+=3;goto B646e11;
case 0x646e18:c.instructions+=2;goto B646e18;
case 0x646e1a:c.instructions+=1;goto B646e1a;
case 0x646e20:goto L646e20;
case 0x646e27:goto L646e27;
case 0x646e2c:c.instructions+=10;goto B646e2c;
case 0x646e2f:c.instructions+=9;goto B646e2f;
case 0x646e36:c.instructions+=8;goto B646e36;
case 0x646e38:c.instructions+=7;goto B646e38;
case 0x646e3b:c.instructions+=6;goto B646e3b;
case 0x646e3d:c.instructions+=5;goto B646e3d;
case 0x646e40:c.instructions+=4;goto B646e40;
case 0x646e45:c.instructions+=3;goto B646e45;
case 0x646e48:c.instructions+=2;goto B646e48;
case 0x646e4b:c.instructions+=1;goto B646e4b;
case 0x646e51:goto L646e51;
case 0x646e58:goto L646e58;
case 0x646e5a:c.instructions+=2;goto B646e5a;
case 0x646e5c:c.instructions+=1;goto B646e5c;
case 0x646e61:goto L646e61;
case 0x646e63:c.instructions+=2;goto B646e63;
case 0x646e65:c.instructions+=1;goto B646e65;
case 0x646e6a:goto L646e6a;
case 0x646e6c:c.instructions+=2;goto B646e6c;
case 0x646e6e:c.instructions+=1;goto B646e6e;
case 0x646e73:goto L646e73;
case 0x646e75:c.instructions+=2;goto B646e75;
case 0x646e77:c.instructions+=1;goto B646e77;
case 0x646e7c:goto L646e7c;
case 0x646e7e:c.instructions+=2;goto B646e7e;
case 0x646e80:c.instructions+=1;goto B646e80;
case 0x646e85:goto L646e85;
case 0x646e87:c.instructions+=2;goto B646e87;
case 0x646e89:c.instructions+=1;goto B646e89;
case 0x646e8e:goto L646e8e;
case 0x646e90:c.instructions+=2;goto B646e90;
case 0x646e92:c.instructions+=1;goto B646e92;
case 0x646e97:goto L646e97;
case 0x646e99:c.instructions+=2;goto B646e99;
case 0x646e9b:c.instructions+=1;goto B646e9b;
case 0x646ea0:goto L646ea0;
case 0x646ea2:c.instructions+=2;goto B646ea2;
case 0x646ea4:c.instructions+=1;goto B646ea4;
case 0x646ea9:goto L646ea9;
case 0x646eab:c.instructions+=2;goto B646eab;
case 0x646ead:c.instructions+=1;goto B646ead;
case 0x646eb2:goto L646eb2;
case 0x646eb4:c.instructions+=2;goto B646eb4;
case 0x646eb6:c.instructions+=1;goto B646eb6;
case 0x646ebb:goto L646ebb;
case 0x646ebd:c.instructions+=2;goto B646ebd;
case 0x646ebf:c.instructions+=1;goto B646ebf;
case 0x646ec4:goto L646ec4;
case 0x646ec6:c.instructions+=2;goto B646ec6;
case 0x646ec8:c.instructions+=1;goto B646ec8;
case 0x646ecd:goto L646ecd;
case 0x646ecf:c.instructions+=2;goto B646ecf;
case 0x646ed1:c.instructions+=1;goto B646ed1;
case 0x646ed6:goto L646ed6;
case 0x646ed8:c.instructions+=2;goto B646ed8;
case 0x646eda:c.instructions+=1;goto B646eda;
case 0x646edf:goto L646edf;
case 0x646ee1:c.instructions+=2;goto B646ee1;
case 0x646ee3:c.instructions+=1;goto B646ee3;
case 0x646ee8:goto L646ee8;
case 0x646eea:c.instructions+=2;goto B646eea;
case 0x646eec:c.instructions+=1;goto B646eec;
case 0x646ef1:goto L646ef1;
case 0x646ef3:c.instructions+=2;goto B646ef3;
case 0x646ef5:c.instructions+=1;goto B646ef5;
case 0x646efa:goto L646efa;
case 0x646efc:c.instructions+=2;goto B646efc;
case 0x646efe:c.instructions+=1;goto B646efe;
case 0x646f03:goto L646f03;
case 0x646f05:c.instructions+=2;goto B646f05;
case 0x646f07:c.instructions+=1;goto B646f07;
case 0x646f0c:goto L646f0c;
case 0x646f0e:c.instructions+=2;goto B646f0e;
case 0x646f10:c.instructions+=1;goto B646f10;
case 0x646f15:goto L646f15;
case 0x646f17:c.instructions+=2;goto B646f17;
case 0x646f19:c.instructions+=1;goto B646f19;
case 0x646f1e:goto L646f1e;
case 0x646f20:c.instructions+=2;goto B646f20;
case 0x646f22:c.instructions+=1;goto B646f22;
case 0x646f27:goto L646f27;
case 0x646f29:c.instructions+=2;goto B646f29;
case 0x646f2b:c.instructions+=1;goto B646f2b;
case 0x646f30:goto L646f30;
case 0x646f32:c.instructions+=2;goto B646f32;
case 0x646f34:c.instructions+=1;goto B646f34;
case 0x646f39:goto L646f39;
case 0x646f3b:c.instructions+=2;goto B646f3b;
case 0x646f3d:c.instructions+=1;goto B646f3d;
case 0x646f3f:goto L646f3f;
case 0x646f41:c.instructions+=2;goto B646f41;
case 0x646f43:c.instructions+=1;goto B646f43;
case 0x646f45:goto L646f45;
case 0x646f47:c.instructions+=2;goto B646f47;
case 0x646f49:c.instructions+=1;goto B646f49;
case 0x646f4b:goto L646f4b;
case 0x646f4d:c.instructions+=2;goto B646f4d;
case 0x646f4f:c.instructions+=1;goto B646f4f;
case 0x646f51:goto L646f51;
case 0x646f53:c.instructions+=2;goto B646f53;
case 0x646f55:c.instructions+=1;goto B646f55;
case 0x646f57:goto L646f57;
case 0x646f59:c.instructions+=2;goto B646f59;
case 0x646f5b:c.instructions+=1;goto B646f5b;
case 0x646f5d:goto L646f5d;
case 0x646f5f:c.instructions+=2;goto B646f5f;
case 0x646f61:c.instructions+=1;goto B646f61;
case 0x646f63:goto L646f63;
case 0x646f65:c.instructions+=2;goto B646f65;
case 0x646f67:c.instructions+=1;goto B646f67;
case 0x646f69:goto L646f69;
case 0x646f6b:c.instructions+=2;goto B646f6b;
case 0x646f6d:c.instructions+=1;goto B646f6d;
case 0x646f6f:goto L646f6f;
case 0x646f71:c.instructions+=2;goto B646f71;
case 0x646f73:c.instructions+=1;goto B646f73;
case 0x646f75:goto L646f75;
case 0x646f77:c.instructions+=2;goto B646f77;
case 0x646f79:c.instructions+=1;goto B646f79;
case 0x646f7b:goto L646f7b;
case 0x646f7d:c.instructions+=2;goto B646f7d;
case 0x646f7f:c.instructions+=1;goto B646f7f;
case 0x646f81:goto L646f81;
case 0x646f83:c.instructions+=2;goto B646f83;
case 0x646f85:c.instructions+=1;goto B646f85;
case 0x646f87:goto L646f87;
case 0x646f89:c.instructions+=2;goto B646f89;
case 0x646f8b:c.instructions+=1;goto B646f8b;
case 0x646f8d:goto L646f8d;
case 0x646f8f:c.instructions+=2;goto B646f8f;
case 0x646f91:c.instructions+=1;goto B646f91;
case 0x646f93:goto L646f93;
case 0x646f95:c.instructions+=2;goto B646f95;
case 0x646f97:c.instructions+=1;goto B646f97;
case 0x646f99:goto L646f99;
case 0x646f9b:c.instructions+=2;goto B646f9b;
case 0x646f9d:c.instructions+=1;goto B646f9d;
case 0x646f9f:goto L646f9f;
case 0x646fa1:c.instructions+=2;goto B646fa1;
case 0x646fa3:c.instructions+=1;goto B646fa3;
case 0x646fa5:goto L646fa5;
case 0x646fa7:c.instructions+=2;goto B646fa7;
case 0x646fa9:c.instructions+=1;goto B646fa9;
case 0x646fab:goto L646fab;
case 0x646fad:c.instructions+=2;goto B646fad;
case 0x646faf:c.instructions+=1;goto B646faf;
case 0x646fb1:goto L646fb1;
case 0x646fb3:c.instructions+=2;goto B646fb3;
case 0x646fb5:c.instructions+=1;goto B646fb5;
case 0x646fb7:goto L646fb7;
case 0x646fb9:c.instructions+=1;goto B646fb9;
case 0x646fbb:goto L646fbb;
case 0x646fc1:c.instructions+=1;goto B646fc1;
case 0x646fc6:goto L646fc6;
case 0x646fcb:c.instructions+=8;goto B646fcb;
case 0x646fd2:c.instructions+=7;goto B646fd2;
case 0x646fd4:c.instructions+=6;goto B646fd4;
case 0x646fd7:c.instructions+=5;goto B646fd7;
case 0x646fdc:c.instructions+=4;goto B646fdc;
case 0x646fdf:c.instructions+=3;goto B646fdf;
case 0x646fe5:c.instructions+=2;goto B646fe5;
case 0x646fe7:c.instructions+=1;goto B646fe7;
case 0x646fe9:goto L646fe9;
case 0x646feb:c.instructions+=1;goto B646feb;
case 0x646fed:goto L646fed;
case 0x646fee:c.instructions+=6;goto B646fee;
case 0x646fef:c.instructions+=5;goto B646fef;
case 0x646ff1:c.instructions+=4;goto B646ff1;
case 0x646ff6:c.instructions+=3;goto B646ff6;
case 0x646ff7:c.instructions+=2;goto B646ff7;
case 0x646ffa:c.instructions+=1;goto B646ffa;
default:missing_instruction(c.pc);}
B646001:L646001:{c.instructions+=2;NFSU2_TR(0x646001);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0xaull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0xaull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0xaull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B646004:{NFSU2_TR(0x646004);
if(r1(R+518)){{goto L64601c;}}
}
B646006:L646006:{c.instructions+=2;NFSU2_TR(0x646006);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xcull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B646009:{NFSU2_TR(0x646009);
if(r1(R+518)){{goto L646014;}}
}
B64600b:L64600b:{c.instructions+=2;NFSU2_TR(0x64600b);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
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
B64600e:{NFSU2_TR(0x64600e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L64637b;}}
}
B646014:L646014:{c.instructions+=2;NFSU2_TR(0x646014);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x40ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B646017:{NFSU2_TR(0x646017);
{goto L646404;}
}
B64601c:L64601c:{c.instructions+=2;NFSU2_TR(0x64601c);
w4(R+0,u32(0x118ull));
}
B646021:{NFSU2_TR(0x646021);
{goto L646407;}
}
B646026:L646026:{c.instructions+=3;NFSU2_TR(0x646026);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B646028:{NFSU2_TR(0x646028);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B64602b:{NFSU2_TR(0x64602b);
if(r1(R+518)){{goto L64629c;}}
}
B646031:L646031:{c.instructions+=5;NFSU2_TR(0x646031);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B646034:{NFSU2_TR(0x646034);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B646037:{NFSU2_TR(0x646037);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x58ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64603a:{NFSU2_TR(0x64603a);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x280ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B646040:{NFSU2_TR(0x646040);
if(r1(R+518)){{goto L6461af;}}
}
B646046:L646046:{c.instructions+=3;NFSU2_TR(0x646046);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
w4(R+4,u32(s32(s8(r1(U+0)))));
}
B646049:{NFSU2_TR(0x646049);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x64ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B64604c:{NFSU2_TR(0x64604c);
if(r1(R+518)){{goto L646191;}}
}
B646052:L646052:{c.instructions+=2;NFSU2_TR(0x646052);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B646053:{NFSU2_TR(0x646053);
if(r1(R+518)){{goto L646137;}}
}
B646059:L646059:{c.instructions+=2;NFSU2_TR(0x646059);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x4ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B64605c:{NFSU2_TR(0x64605c);
if(r1(R+518)){{goto L6460cb;}}
}
B64605e:L64605e:{c.instructions+=2;NFSU2_TR(0x64605e);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x3ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B646061:{NFSU2_TR(0x646061);
if(r1(R+518)){{goto L6460ad;}}
}
B646063:L646063:{c.instructions+=2;NFSU2_TR(0x646063);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x4ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B646066:{NFSU2_TR(0x646066);
if(r1(R+518)){{goto L64608f;}}
}
B646068:L646068:{c.instructions+=2;NFSU2_TR(0x646068);
u8 U[6];
w1(R+512,u8((r4(R+4))<(u32(0x5ull))));
w1(R+523,sborrow<u32>(r4(R+4),u32(0x5ull)));
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x5ull))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B64606b:{NFSU2_TR(0x64606b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L646290;}}
}
B646071:L646071:{c.instructions+=5;NFSU2_TR(0x646071);
__builtin_memmove((R+24),(R+0),4);
}
B646073:{NFSU2_TR(0x646073);
u8 U[4];
w4(U+0,u32(0x6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B646075:{NFSU2_TR(0x646075);
w4(R+28,u32(0x7aba2cull));
}
B64607a:{NFSU2_TR(0x64607a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B64607b:{NFSU2_TR(0x64607b);
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
B64607d:L64607d:{c.instructions+=1;NFSU2_TR(0x64607d);
u8 U[41];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L64607f;}}
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
__builtin_memmove((U+33),gp(u32(r4(U+17))),1);
__builtin_memmove((U+38),(U+33),1);
__builtin_memmove((U+16),gp(u32(r4(U+0))),1);
__builtin_memmove((U+39),(U+16),1);
w1(R+512,u8((r1(U+39))<(r1(U+38))));
w1(R+523,sborrow<u8>(r1(U+39),r1(U+38)));
w1(U+40,u8(u32(r1(U+39))-u32(r1(U+38))));
w1(R+519,u8(s8(r1(U+40))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+40))==(u8(0x0ull))));
w1(U+35,u8(u32(r1(U+40))&u32(u8(0xffull))));
w1(U+36,u8(__builtin_popcountll(u64(r1(U+35)))));
w1(U+37,u8(u32(r1(U+36))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+37))==(u8(0x0ull))));
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64607du);}goto L64607d;}}
}
B64607f:L64607f:{c.instructions+=1;NFSU2_TR(0x64607f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L646290;}}
}
B646085:L646085:{c.instructions+=2;NFSU2_TR(0x646085);
w4(R+0,u32(0x102ull));
}
B64608a:{NFSU2_TR(0x64608a);
{goto L646407;}
}
B64608f:L64608f:{c.instructions+=5;NFSU2_TR(0x64608f);
__builtin_memmove((R+24),(R+0),4);
}
B646091:{NFSU2_TR(0x646091);
u8 U[4];
w4(U+0,u32(0x7ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B646093:{NFSU2_TR(0x646093);
w4(R+28,u32(0x7aba24ull));
}
B646098:{NFSU2_TR(0x646098);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B646099:{NFSU2_TR(0x646099);
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
B64609b:L64609b:{c.instructions+=1;NFSU2_TR(0x64609b);
u8 U[41];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L64609d;}}
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
__builtin_memmove((U+33),gp(u32(r4(U+17))),1);
__builtin_memmove((U+38),(U+33),1);
__builtin_memmove((U+16),gp(u32(r4(U+0))),1);
__builtin_memmove((U+39),(U+16),1);
w1(R+512,u8((r1(U+39))<(r1(U+38))));
w1(R+523,sborrow<u8>(r1(U+39),r1(U+38)));
w1(U+40,u8(u32(r1(U+39))-u32(r1(U+38))));
w1(R+519,u8(s8(r1(U+40))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+40))==(u8(0x0ull))));
w1(U+35,u8(u32(r1(U+40))&u32(u8(0xffull))));
w1(U+36,u8(__builtin_popcountll(u64(r1(U+35)))));
w1(U+37,u8(u32(r1(U+36))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+37))==(u8(0x0ull))));
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64609bu);}goto L64609b;}}
}
B64609d:L64609d:{c.instructions+=1;NFSU2_TR(0x64609d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L646290;}}
}
B6460a3:L6460a3:{c.instructions+=2;NFSU2_TR(0x6460a3);
w4(R+0,u32(0x10eull));
}
B6460a8:{NFSU2_TR(0x6460a8);
{goto L646407;}
}
B6460ad:L6460ad:{c.instructions+=5;NFSU2_TR(0x6460ad);
__builtin_memmove((R+24),(R+0),4);
}
B6460af:{NFSU2_TR(0x6460af);
u8 U[4];
w4(U+0,u32(0x5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6460b1:{NFSU2_TR(0x6460b1);
w4(R+28,u32(0x7aba1cull));
}
B6460b6:{NFSU2_TR(0x6460b6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6460b7:{NFSU2_TR(0x6460b7);
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
B6460b9:L6460b9:{c.instructions+=1;NFSU2_TR(0x6460b9);
u8 U[41];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L6460bb;}}
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
__builtin_memmove((U+33),gp(u32(r4(U+17))),1);
__builtin_memmove((U+38),(U+33),1);
__builtin_memmove((U+16),gp(u32(r4(U+0))),1);
__builtin_memmove((U+39),(U+16),1);
w1(R+512,u8((r1(U+39))<(r1(U+38))));
w1(R+523,sborrow<u8>(r1(U+39),r1(U+38)));
w1(U+40,u8(u32(r1(U+39))-u32(r1(U+38))));
w1(R+519,u8(s8(r1(U+40))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+40))==(u8(0x0ull))));
w1(U+35,u8(u32(r1(U+40))&u32(u8(0xffull))));
w1(U+36,u8(__builtin_popcountll(u64(r1(U+35)))));
w1(U+37,u8(u32(r1(U+36))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+37))==(u8(0x0ull))));
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6460b9u);}goto L6460b9;}}
}
B6460bb:L6460bb:{c.instructions+=1;NFSU2_TR(0x6460bb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L646290;}}
}
B6460c1:L6460c1:{c.instructions+=2;NFSU2_TR(0x6460c1);
w4(R+0,u32(0x103ull));
}
B6460c6:{NFSU2_TR(0x6460c6);
{goto L646407;}
}
B6460cb:L6460cb:{c.instructions+=5;NFSU2_TR(0x6460cb);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6460cd:{NFSU2_TR(0x6460cd);
w4(R+28,u32(0x7aba18ull));
}
B6460d2:{NFSU2_TR(0x6460d2);
__builtin_memmove((R+24),(R+0),4);
}
B6460d4:{NFSU2_TR(0x6460d4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6460d5:{NFSU2_TR(0x6460d5);
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
B6460d7:L6460d7:{c.instructions+=1;NFSU2_TR(0x6460d7);
u8 U[41];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L6460d9;}}
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
__builtin_memmove((U+33),gp(u32(r4(U+17))),1);
__builtin_memmove((U+38),(U+33),1);
__builtin_memmove((U+16),gp(u32(r4(U+0))),1);
__builtin_memmove((U+39),(U+16),1);
w1(R+512,u8((r1(U+39))<(r1(U+38))));
w1(R+523,sborrow<u8>(r1(U+39),r1(U+38)));
w1(U+40,u8(u32(r1(U+39))-u32(r1(U+38))));
w1(R+519,u8(s8(r1(U+40))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+40))==(u8(0x0ull))));
w1(U+35,u8(u32(r1(U+40))&u32(u8(0xffull))));
w1(U+36,u8(__builtin_popcountll(u64(r1(U+35)))));
w1(U+37,u8(u32(r1(U+36))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+37))==(u8(0x0ull))));
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6460d7u);}goto L6460d7;}}
}
B6460d9:L6460d9:{c.instructions+=1;NFSU2_TR(0x6460d9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6460e5;}}
}
B6460db:L6460db:{c.instructions+=2;NFSU2_TR(0x6460db);
w4(R+0,u32(0x106ull));
}
B6460e0:{NFSU2_TR(0x6460e0);
{goto L64625a;}
}
B6460e5:L6460e5:{c.instructions+=5;NFSU2_TR(0x6460e5);
u8 U[4];
w4(U+0,u32(0x6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6460e7:{NFSU2_TR(0x6460e7);
w4(R+28,u32(0x7aba10ull));
}
B6460ec:{NFSU2_TR(0x6460ec);
__builtin_memmove((R+24),(R+0),4);
}
B6460ee:{NFSU2_TR(0x6460ee);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6460ef:{NFSU2_TR(0x6460ef);
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
B6460f1:L6460f1:{c.instructions+=1;NFSU2_TR(0x6460f1);
u8 U[41];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L6460f3;}}
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
__builtin_memmove((U+33),gp(u32(r4(U+17))),1);
__builtin_memmove((U+38),(U+33),1);
__builtin_memmove((U+16),gp(u32(r4(U+0))),1);
__builtin_memmove((U+39),(U+16),1);
w1(R+512,u8((r1(U+39))<(r1(U+38))));
w1(R+523,sborrow<u8>(r1(U+39),r1(U+38)));
w1(U+40,u8(u32(r1(U+39))-u32(r1(U+38))));
w1(R+519,u8(s8(r1(U+40))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+40))==(u8(0x0ull))));
w1(U+35,u8(u32(r1(U+40))&u32(u8(0xffull))));
w1(U+36,u8(__builtin_popcountll(u64(r1(U+35)))));
w1(U+37,u8(u32(r1(U+36))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+37))==(u8(0x0ull))));
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6460f1u);}goto L6460f1;}}
}
B6460f3:L6460f3:{c.instructions+=1;NFSU2_TR(0x6460f3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6460ff;}}
}
B6460f5:L6460f5:{c.instructions+=2;NFSU2_TR(0x6460f5);
w4(R+0,u32(0x107ull));
}
B6460fa:{NFSU2_TR(0x6460fa);
{goto L646407;}
}
B6460ff:L6460ff:{c.instructions+=5;NFSU2_TR(0x6460ff);
u8 U[4];
w4(U+0,u32(0x7ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B646101:{NFSU2_TR(0x646101);
w4(R+28,u32(0x7aba08ull));
}
B646106:{NFSU2_TR(0x646106);
__builtin_memmove((R+24),(R+0),4);
}
B646108:{NFSU2_TR(0x646108);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B646109:{NFSU2_TR(0x646109);
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
B64610b:L64610b:{c.instructions+=1;NFSU2_TR(0x64610b);
u8 U[41];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L64610d;}}
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
__builtin_memmove((U+33),gp(u32(r4(U+17))),1);
__builtin_memmove((U+38),(U+33),1);
__builtin_memmove((U+16),gp(u32(r4(U+0))),1);
__builtin_memmove((U+39),(U+16),1);
w1(R+512,u8((r1(U+39))<(r1(U+38))));
w1(R+523,sborrow<u8>(r1(U+39),r1(U+38)));
w1(U+40,u8(u32(r1(U+39))-u32(r1(U+38))));
w1(R+519,u8(s8(r1(U+40))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+40))==(u8(0x0ull))));
w1(U+35,u8(u32(r1(U+40))&u32(u8(0xffull))));
w1(U+36,u8(__builtin_popcountll(u64(r1(U+35)))));
w1(U+37,u8(u32(r1(U+36))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+37))==(u8(0x0ull))));
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64610bu);}goto L64610b;}}
}
B64610d:L64610d:{c.instructions+=1;NFSU2_TR(0x64610d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L646119;}}
}
B64610f:L64610f:{c.instructions+=2;NFSU2_TR(0x64610f);
w4(R+0,u32(0x108ull));
}
B646114:{NFSU2_TR(0x646114);
{goto L646407;}
}
B646119:L646119:{c.instructions+=5;NFSU2_TR(0x646119);
__builtin_memmove((R+24),(R+0),4);
}
B64611b:{NFSU2_TR(0x64611b);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64611d:{NFSU2_TR(0x64611d);
w4(R+28,u32(0x7aba00ull));
}
B646122:{NFSU2_TR(0x646122);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B646123:{NFSU2_TR(0x646123);
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
B646125:L646125:{c.instructions+=1;NFSU2_TR(0x646125);
u8 U[41];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L646127;}}
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
__builtin_memmove((U+33),gp(u32(r4(U+17))),1);
__builtin_memmove((U+38),(U+33),1);
__builtin_memmove((U+16),gp(u32(r4(U+0))),1);
__builtin_memmove((U+39),(U+16),1);
w1(R+512,u8((r1(U+39))<(r1(U+38))));
w1(R+523,sborrow<u8>(r1(U+39),r1(U+38)));
w1(U+40,u8(u32(r1(U+39))-u32(r1(U+38))));
w1(R+519,u8(s8(r1(U+40))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+40))==(u8(0x0ull))));
w1(U+35,u8(u32(r1(U+40))&u32(u8(0xffull))));
w1(U+36,u8(__builtin_popcountll(u64(r1(U+35)))));
w1(U+37,u8(u32(r1(U+36))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+37))==(u8(0x0ull))));
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x646125u);}goto L646125;}}
}
B646127:L646127:{c.instructions+=1;NFSU2_TR(0x646127);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L646290;}}
}
B64612d:L64612d:{c.instructions+=2;NFSU2_TR(0x64612d);
w4(R+0,u32(0x104ull));
}
B646132:{NFSU2_TR(0x646132);
{goto L646407;}
}
B646137:L646137:{c.instructions+=5;NFSU2_TR(0x646137);
u8 U[4];
w4(U+0,u32(0x5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B646139:{NFSU2_TR(0x646139);
w4(R+28,u32(0x7ab9f8ull));
}
B64613e:{NFSU2_TR(0x64613e);
__builtin_memmove((R+24),(R+0),4);
}
B646140:{NFSU2_TR(0x646140);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B646141:{NFSU2_TR(0x646141);
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
B646143:L646143:{c.instructions+=1;NFSU2_TR(0x646143);
u8 U[41];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L646145;}}
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
__builtin_memmove((U+33),gp(u32(r4(U+17))),1);
__builtin_memmove((U+38),(U+33),1);
__builtin_memmove((U+16),gp(u32(r4(U+0))),1);
__builtin_memmove((U+39),(U+16),1);
w1(R+512,u8((r1(U+39))<(r1(U+38))));
w1(R+523,sborrow<u8>(r1(U+39),r1(U+38)));
w1(U+40,u8(u32(r1(U+39))-u32(r1(U+38))));
w1(R+519,u8(s8(r1(U+40))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+40))==(u8(0x0ull))));
w1(U+35,u8(u32(r1(U+40))&u32(u8(0xffull))));
w1(U+36,u8(__builtin_popcountll(u64(r1(U+35)))));
w1(U+37,u8(u32(r1(U+36))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+37))==(u8(0x0ull))));
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x646143u);}goto L646143;}}
}
B646145:L646145:{c.instructions+=1;NFSU2_TR(0x646145);
if(r1(R+518)){{goto L646255;}}
}
B64614b:L64614b:{c.instructions+=5;NFSU2_TR(0x64614b);
u8 U[4];
w4(U+0,u32(0x5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64614d:{NFSU2_TR(0x64614d);
w4(R+28,u32(0x7ab9f0ull));
}
B646152:{NFSU2_TR(0x646152);
__builtin_memmove((R+24),(R+0),4);
}
B646154:{NFSU2_TR(0x646154);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B646155:{NFSU2_TR(0x646155);
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
B646157:L646157:{c.instructions+=1;NFSU2_TR(0x646157);
u8 U[41];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L646159;}}
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
__builtin_memmove((U+33),gp(u32(r4(U+17))),1);
__builtin_memmove((U+38),(U+33),1);
__builtin_memmove((U+16),gp(u32(r4(U+0))),1);
__builtin_memmove((U+39),(U+16),1);
w1(R+512,u8((r1(U+39))<(r1(U+38))));
w1(R+523,sborrow<u8>(r1(U+39),r1(U+38)));
w1(U+40,u8(u32(r1(U+39))-u32(r1(U+38))));
w1(R+519,u8(s8(r1(U+40))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+40))==(u8(0x0ull))));
w1(U+35,u8(u32(r1(U+40))&u32(u8(0xffull))));
w1(U+36,u8(__builtin_popcountll(u64(r1(U+35)))));
w1(U+37,u8(u32(r1(U+36))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+37))==(u8(0x0ull))));
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x646157u);}goto L646157;}}
}
B646159:L646159:{c.instructions+=1;NFSU2_TR(0x646159);
if(r1(R+518)){{goto L64620d;}}
}
B64615f:L64615f:{c.instructions+=5;NFSU2_TR(0x64615f);
u8 U[4];
w4(U+0,u32(0x6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B646161:{NFSU2_TR(0x646161);
w4(R+28,u32(0x7ab9e8ull));
}
B646166:{NFSU2_TR(0x646166);
__builtin_memmove((R+24),(R+0),4);
}
B646168:{NFSU2_TR(0x646168);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B646169:{NFSU2_TR(0x646169);
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
B64616b:L64616b:{c.instructions+=1;NFSU2_TR(0x64616b);
u8 U[41];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L64616d;}}
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
__builtin_memmove((U+33),gp(u32(r4(U+17))),1);
__builtin_memmove((U+38),(U+33),1);
__builtin_memmove((U+16),gp(u32(r4(U+0))),1);
__builtin_memmove((U+39),(U+16),1);
w1(R+512,u8((r1(U+39))<(r1(U+38))));
w1(R+523,sborrow<u8>(r1(U+39),r1(U+38)));
w1(U+40,u8(u32(r1(U+39))-u32(r1(U+38))));
w1(R+519,u8(s8(r1(U+40))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+40))==(u8(0x0ull))));
w1(U+35,u8(u32(r1(U+40))&u32(u8(0xffull))));
w1(U+36,u8(__builtin_popcountll(u64(r1(U+35)))));
w1(U+37,u8(u32(r1(U+36))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+37))==(u8(0x0ull))));
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64616bu);}goto L64616b;}}
}
B64616d:L64616d:{c.instructions+=1;NFSU2_TR(0x64616d);
if(r1(R+518)){{goto L646227;}}
}
B646173:L646173:{c.instructions+=5;NFSU2_TR(0x646173);
__builtin_memmove((R+24),(R+0),4);
}
B646175:{NFSU2_TR(0x646175);
u8 U[4];
w4(U+0,u32(0x6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B646177:{NFSU2_TR(0x646177);
w4(R+28,u32(0x7ab51cull));
}
B64617c:{NFSU2_TR(0x64617c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B64617d:{NFSU2_TR(0x64617d);
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
B64617f:L64617f:{c.instructions+=1;NFSU2_TR(0x64617f);
u8 U[41];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L646181;}}
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
__builtin_memmove((U+33),gp(u32(r4(U+17))),1);
__builtin_memmove((U+38),(U+33),1);
__builtin_memmove((U+16),gp(u32(r4(U+0))),1);
__builtin_memmove((U+39),(U+16),1);
w1(R+512,u8((r1(U+39))<(r1(U+38))));
w1(R+523,sborrow<u8>(r1(U+39),r1(U+38)));
w1(U+40,u8(u32(r1(U+39))-u32(r1(U+38))));
w1(R+519,u8(s8(r1(U+40))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+40))==(u8(0x0ull))));
w1(U+35,u8(u32(r1(U+40))&u32(u8(0xffull))));
w1(U+36,u8(__builtin_popcountll(u64(r1(U+35)))));
w1(U+37,u8(u32(r1(U+36))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+37))==(u8(0x0ull))));
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64617fu);}goto L64617f;}}
}
B646181:L646181:{c.instructions+=1;NFSU2_TR(0x646181);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L646290;}}
}
B646187:L646187:{c.instructions+=2;NFSU2_TR(0x646187);
w4(R+0,u32(0x105ull));
}
B64618c:{NFSU2_TR(0x64618c);
{goto L646407;}
}
B646191:L646191:{c.instructions+=5;NFSU2_TR(0x646191);
__builtin_memmove((R+24),(R+0),4);
}
B646193:{NFSU2_TR(0x646193);
u8 U[4];
w4(U+0,u32(0x7ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B646195:{NFSU2_TR(0x646195);
w4(R+28,u32(0x7ab9e0ull));
}
B64619a:{NFSU2_TR(0x64619a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B64619b:{NFSU2_TR(0x64619b);
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
B64619d:L64619d:{c.instructions+=1;NFSU2_TR(0x64619d);
u8 U[41];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L64619f;}}
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
__builtin_memmove((U+33),gp(u32(r4(U+17))),1);
__builtin_memmove((U+38),(U+33),1);
__builtin_memmove((U+16),gp(u32(r4(U+0))),1);
__builtin_memmove((U+39),(U+16),1);
w1(R+512,u8((r1(U+39))<(r1(U+38))));
w1(R+523,sborrow<u8>(r1(U+39),r1(U+38)));
w1(U+40,u8(u32(r1(U+39))-u32(r1(U+38))));
w1(R+519,u8(s8(r1(U+40))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+40))==(u8(0x0ull))));
w1(U+35,u8(u32(r1(U+40))&u32(u8(0xffull))));
w1(U+36,u8(__builtin_popcountll(u64(r1(U+35)))));
w1(U+37,u8(u32(r1(U+36))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+37))==(u8(0x0ull))));
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64619du);}goto L64619d;}}
}
B64619f:L64619f:{c.instructions+=1;NFSU2_TR(0x64619f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L646290;}}
}
B6461a5:L6461a5:{c.instructions+=2;NFSU2_TR(0x6461a5);
w4(R+0,u32(0x101ull));
}
B6461aa:{NFSU2_TR(0x6461aa);
{goto L646407;}
}
B6461af:L6461af:{c.instructions+=3;NFSU2_TR(0x6461af);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((R+4),(U+0),1);
}
B6461b1:{NFSU2_TR(0x6461b1);
u8 U[2];
__builtin_memmove((U+0),(R+4),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x65ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B6461b4:{NFSU2_TR(0x6461b4);
if(r1(R+518)){{goto L6461fd;}}
}
B6461b6:L6461b6:{c.instructions+=2;NFSU2_TR(0x6461b6);
u8 U[5];
__builtin_memmove((U+3),(R+4),1);
w1(R+512,u8((r1(U+3))<(u8(0x69ull))));
w1(R+523,sborrow<u8>(r1(U+3),u8(0x69ull)));
w1(U+4,u8(u32(r1(U+3))-u32(u8(0x69ull))));
w1(R+519,u8(s8(r1(U+4))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+4))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+4))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B6461b9:{NFSU2_TR(0x6461b9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L646290;}}
}
B6461bf:L6461bf:{c.instructions+=5;NFSU2_TR(0x6461bf);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6461c1:{NFSU2_TR(0x6461c1);
w4(R+28,u32(0x7aba18ull));
}
B6461c6:{NFSU2_TR(0x6461c6);
__builtin_memmove((R+24),(R+0),4);
}
B6461c8:{NFSU2_TR(0x6461c8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6461c9:{NFSU2_TR(0x6461c9);
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
B6461cb:L6461cb:{c.instructions+=1;NFSU2_TR(0x6461cb);
u8 U[41];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L6461cd;}}
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
__builtin_memmove((U+33),gp(u32(r4(U+17))),1);
__builtin_memmove((U+38),(U+33),1);
__builtin_memmove((U+16),gp(u32(r4(U+0))),1);
__builtin_memmove((U+39),(U+16),1);
w1(R+512,u8((r1(U+39))<(r1(U+38))));
w1(R+523,sborrow<u8>(r1(U+39),r1(U+38)));
w1(U+40,u8(u32(r1(U+39))-u32(r1(U+38))));
w1(R+519,u8(s8(r1(U+40))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+40))==(u8(0x0ull))));
w1(U+35,u8(u32(r1(U+40))&u32(u8(0xffull))));
w1(U+36,u8(__builtin_popcountll(u64(r1(U+35)))));
w1(U+37,u8(u32(r1(U+36))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+37))==(u8(0x0ull))));
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6461cbu);}goto L6461cb;}}
}
B6461cd:L6461cd:{c.instructions+=1;NFSU2_TR(0x6461cd);
if(r1(R+518)){{goto L6461f3;}}
}
B6461cf:L6461cf:{c.instructions+=5;NFSU2_TR(0x6461cf);
u8 U[4];
w4(U+0,u32(0x6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6461d1:{NFSU2_TR(0x6461d1);
w4(R+28,u32(0x7aba10ull));
}
B6461d6:{NFSU2_TR(0x6461d6);
__builtin_memmove((R+24),(R+0),4);
}
B6461d8:{NFSU2_TR(0x6461d8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6461d9:{NFSU2_TR(0x6461d9);
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
B6461db:L6461db:{c.instructions+=1;NFSU2_TR(0x6461db);
u8 U[41];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L6461dd;}}
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
__builtin_memmove((U+33),gp(u32(r4(U+17))),1);
__builtin_memmove((U+38),(U+33),1);
__builtin_memmove((U+16),gp(u32(r4(U+0))),1);
__builtin_memmove((U+39),(U+16),1);
w1(R+512,u8((r1(U+39))<(r1(U+38))));
w1(R+523,sborrow<u8>(r1(U+39),r1(U+38)));
w1(U+40,u8(u32(r1(U+39))-u32(r1(U+38))));
w1(R+519,u8(s8(r1(U+40))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+40))==(u8(0x0ull))));
w1(U+35,u8(u32(r1(U+40))&u32(u8(0xffull))));
w1(U+36,u8(__builtin_popcountll(u64(r1(U+35)))));
w1(U+37,u8(u32(r1(U+36))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+37))==(u8(0x0ull))));
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6461dbu);}goto L6461db;}}
}
B6461dd:L6461dd:{c.instructions+=1;NFSU2_TR(0x6461dd);
if(r1(R+518)){{goto L6461f3;}}
}
B6461df:L6461df:{c.instructions+=5;NFSU2_TR(0x6461df);
__builtin_memmove((R+24),(R+0),4);
}
B6461e1:{NFSU2_TR(0x6461e1);
u8 U[4];
w4(U+0,u32(0x7ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6461e3:{NFSU2_TR(0x6461e3);
w4(R+28,u32(0x7aba08ull));
}
B6461e8:{NFSU2_TR(0x6461e8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6461e9:{NFSU2_TR(0x6461e9);
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
B6461eb:L6461eb:{c.instructions+=1;NFSU2_TR(0x6461eb);
u8 U[41];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L6461ed;}}
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
__builtin_memmove((U+33),gp(u32(r4(U+17))),1);
__builtin_memmove((U+38),(U+33),1);
__builtin_memmove((U+16),gp(u32(r4(U+0))),1);
__builtin_memmove((U+39),(U+16),1);
w1(R+512,u8((r1(U+39))<(r1(U+38))));
w1(R+523,sborrow<u8>(r1(U+39),r1(U+38)));
w1(U+40,u8(u32(r1(U+39))-u32(r1(U+38))));
w1(R+519,u8(s8(r1(U+40))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+40))==(u8(0x0ull))));
w1(U+35,u8(u32(r1(U+40))&u32(u8(0xffull))));
w1(U+36,u8(__builtin_popcountll(u64(r1(U+35)))));
w1(U+37,u8(u32(r1(U+36))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+37))==(u8(0x0ull))));
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6461ebu);}goto L6461eb;}}
}
B6461ed:L6461ed:{c.instructions+=1;NFSU2_TR(0x6461ed);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L646290;}}
}
B6461f3:L6461f3:{c.instructions+=2;NFSU2_TR(0x6461f3);
w4(R+0,u32(0x10cull));
}
B6461f8:{NFSU2_TR(0x6461f8);
{goto L646407;}
}
B6461fd:L6461fd:{c.instructions+=5;NFSU2_TR(0x6461fd);
u8 U[4];
w4(U+0,u32(0x5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6461ff:{NFSU2_TR(0x6461ff);
w4(R+28,u32(0x7ab9f0ull));
}
B646204:{NFSU2_TR(0x646204);
__builtin_memmove((R+24),(R+0),4);
}
B646206:{NFSU2_TR(0x646206);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B646207:{NFSU2_TR(0x646207);
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
B646209:L646209:{c.instructions+=1;NFSU2_TR(0x646209);
u8 U[41];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L64620b;}}
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
__builtin_memmove((U+33),gp(u32(r4(U+17))),1);
__builtin_memmove((U+38),(U+33),1);
__builtin_memmove((U+16),gp(u32(r4(U+0))),1);
__builtin_memmove((U+39),(U+16),1);
w1(R+512,u8((r1(U+39))<(r1(U+38))));
w1(R+523,sborrow<u8>(r1(U+39),r1(U+38)));
w1(U+40,u8(u32(r1(U+39))-u32(r1(U+38))));
w1(R+519,u8(s8(r1(U+40))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+40))==(u8(0x0ull))));
w1(U+35,u8(u32(r1(U+40))&u32(u8(0xffull))));
w1(U+36,u8(__builtin_popcountll(u64(r1(U+35)))));
w1(U+37,u8(u32(r1(U+36))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+37))==(u8(0x0ull))));
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x646209u);}goto L646209;}}
}
B64620b:L64620b:{c.instructions+=1;NFSU2_TR(0x64620b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L646217;}}
}
B64620d:L64620d:{c.instructions+=2;NFSU2_TR(0x64620d);
w4(R+0,u32(0x10aull));
}
B646212:{NFSU2_TR(0x646212);
{goto L646407;}
}
B646217:L646217:{c.instructions+=5;NFSU2_TR(0x646217);
u8 U[4];
w4(U+0,u32(0x6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B646219:{NFSU2_TR(0x646219);
w4(R+28,u32(0x7ab9e8ull));
}
B64621e:{NFSU2_TR(0x64621e);
__builtin_memmove((R+24),(R+0),4);
}
B646220:{NFSU2_TR(0x646220);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B646221:{NFSU2_TR(0x646221);
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
B646223:L646223:{c.instructions+=1;NFSU2_TR(0x646223);
u8 U[41];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L646225;}}
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
__builtin_memmove((U+33),gp(u32(r4(U+17))),1);
__builtin_memmove((U+38),(U+33),1);
__builtin_memmove((U+16),gp(u32(r4(U+0))),1);
__builtin_memmove((U+39),(U+16),1);
w1(R+512,u8((r1(U+39))<(r1(U+38))));
w1(R+523,sborrow<u8>(r1(U+39),r1(U+38)));
w1(U+40,u8(u32(r1(U+39))-u32(r1(U+38))));
w1(R+519,u8(s8(r1(U+40))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+40))==(u8(0x0ull))));
w1(U+35,u8(u32(r1(U+40))&u32(u8(0xffull))));
w1(U+36,u8(__builtin_popcountll(u64(r1(U+35)))));
w1(U+37,u8(u32(r1(U+36))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+37))==(u8(0x0ull))));
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x646223u);}goto L646223;}}
}
B646225:L646225:{c.instructions+=1;NFSU2_TR(0x646225);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L646231;}}
}
B646227:L646227:{c.instructions+=2;NFSU2_TR(0x646227);
w4(R+0,u32(0x10bull));
}
B64622c:{NFSU2_TR(0x64622c);
{goto L646407;}
}
B646231:L646231:{c.instructions+=5;NFSU2_TR(0x646231);
__builtin_memmove((R+24),(R+0),4);
}
B646233:{NFSU2_TR(0x646233);
u8 U[4];
w4(U+0,u32(0x5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B646235:{NFSU2_TR(0x646235);
w4(R+28,u32(0x7ab9f8ull));
}
B64623a:{NFSU2_TR(0x64623a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B64623b:{NFSU2_TR(0x64623b);
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
B64623d:L64623d:{c.instructions+=1;NFSU2_TR(0x64623d);
u8 U[41];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L64623f;}}
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
__builtin_memmove((U+33),gp(u32(r4(U+17))),1);
__builtin_memmove((U+38),(U+33),1);
__builtin_memmove((U+16),gp(u32(r4(U+0))),1);
__builtin_memmove((U+39),(U+16),1);
w1(R+512,u8((r1(U+39))<(r1(U+38))));
w1(R+523,sborrow<u8>(r1(U+39),r1(U+38)));
w1(U+40,u8(u32(r1(U+39))-u32(r1(U+38))));
w1(R+519,u8(s8(r1(U+40))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+40))==(u8(0x0ull))));
w1(U+35,u8(u32(r1(U+40))&u32(u8(0xffull))));
w1(U+36,u8(__builtin_popcountll(u64(r1(U+35)))));
w1(U+37,u8(u32(r1(U+36))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+37))==(u8(0x0ull))));
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64623du);}goto L64623d;}}
}
B64623f:L64623f:{c.instructions+=1;NFSU2_TR(0x64623f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L646290;}}
}
B646241:L646241:{c.instructions+=4;NFSU2_TR(0x646241);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x268ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B646247:{NFSU2_TR(0x646247);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B64624a:{NFSU2_TR(0x64624a);
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
B64624c:{NFSU2_TR(0x64624c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L646266;}}
}
B64624e:L64624e:{c.instructions+=1;NFSU2_TR(0x64624e);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x50ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B646255:L646255:{c.instructions+=1;NFSU2_TR(0x646255);
w4(R+0,u32(0x109ull));
}
B64625a:L64625a:{c.instructions+=2;NFSU2_TR(0x64625a);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x58ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B646261:{NFSU2_TR(0x646261);
{goto L646407;}
}
B646266:L646266:{c.instructions+=3;NFSU2_TR(0x646266);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B646269:{NFSU2_TR(0x646269);
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
B64626b:{NFSU2_TR(0x64626b);
if(r1(R+518)){{goto L646286;}}
}
B64626d:L64626d:{c.instructions+=2;NFSU2_TR(0x64626d);
u8 U[18];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+10),(U+0),4);
w1(R+512,u8((r4(U+10))<(u32(0x0ull))));
w1(R+523,sborrow<u32>(r4(U+10),u32(0x0ull)));
w4(U+14,u32(u32(r4(U+10))-u32(u32(0x0ull))));
w1(R+519,u8(s32(r4(U+14))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+14))==(u32(0x0ull))));
w4(U+4,u32(u32(r4(U+14))&u32(u32(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r4(U+4)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B646270:{NFSU2_TR(0x646270);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L646286;}}
}
B646272:L646272:{c.instructions+=4;NFSU2_TR(0x646272);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x50ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B646275:{NFSU2_TR(0x646275);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x58ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B64627c:{NFSU2_TR(0x64627c);
w4(R+0,u32(0x109ull));
}
B646281:{NFSU2_TR(0x646281);
{goto L646407;}
}
B646286:L646286:{c.instructions+=2;NFSU2_TR(0x646286);
w4(R+0,u32(0x10dull));
}
B64628b:{NFSU2_TR(0x64628b);
{goto L646407;}
}
B646290:L646290:{c.instructions+=2;NFSU2_TR(0x646290);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4cull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B646297:{NFSU2_TR(0x646297);
{goto L646367;}
}
B64629c:L64629c:{c.instructions+=6;NFSU2_TR(0x64629c);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x280ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6462a2:{NFSU2_TR(0x6462a2);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6462a4:{NFSU2_TR(0x6462a4);
w4(R+28,u32(0x7ab9d8ull));
}
B6462a9:{NFSU2_TR(0x6462a9);
__builtin_memmove((R+24),(R+0),4);
}
B6462ab:{NFSU2_TR(0x6462ab);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6462ac:{NFSU2_TR(0x6462ac);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
}
B6462ae:L6462ae:{c.instructions+=1;NFSU2_TR(0x6462ae);
u8 U[41];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L6462b0;}}
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
__builtin_memmove((U+33),gp(u32(r4(U+17))),1);
__builtin_memmove((U+38),(U+33),1);
__builtin_memmove((U+16),gp(u32(r4(U+0))),1);
__builtin_memmove((U+39),(U+16),1);
w1(R+512,u8((r1(U+39))<(r1(U+38))));
w1(R+523,sborrow<u8>(r1(U+39),r1(U+38)));
w1(U+40,u8(u32(r1(U+39))-u32(r1(U+38))));
w1(R+519,u8(s8(r1(U+40))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+40))==(u8(0x0ull))));
w1(U+35,u8(u32(r1(U+40))&u32(u8(0xffull))));
w1(U+36,u8(__builtin_popcountll(u64(r1(U+35)))));
w1(U+37,u8(u32(r1(U+36))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+37))==(u8(0x0ull))));
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6462aeu);}goto L6462ae;}}
}
B6462b0:L6462b0:{c.instructions+=1;NFSU2_TR(0x6462b0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6462bf;}}
}
B6462b2:L6462b2:{c.instructions+=3;NFSU2_TR(0x6462b2);
u8 U[14];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x58ull))));
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(r4(R+8))));
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
B6462b5:{NFSU2_TR(0x6462b5);
w4(R+0,u32(0x10full));
}
B6462ba:{NFSU2_TR(0x6462ba);
{goto L646407;}
}
B6462bf:L6462bf:{c.instructions+=2;NFSU2_TR(0x6462bf);
u8 U[22];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x58ull))));
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
B6462c3:{NFSU2_TR(0x6462c3);
if(r1(R+518)){{goto L646367;}}
}
B6462c9:L6462c9:{c.instructions+=7;NFSU2_TR(0x6462c9);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+4),(U+0),4);
}
B6462cc:{NFSU2_TR(0x6462cc);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6462cd:{NFSU2_TR(0x6462cd);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6462d0:{NFSU2_TR(0x6462d0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6462d1:{NFSU2_TR(0x6462d1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6462d2:{NFSU2_TR(0x6462d2);
__builtin_memmove((R+4),(R+12),4);
}
B6462d4:{NFSU2_TR(0x6462d4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6462d9ull));
TAIL_STATIC(0x6452dbu,645);
}
B6462d9:L6462d9:{c.instructions+=2;NFSU2_TR(0x6462d9);
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
B6462db:{NFSU2_TR(0x6462db);
if(r1(R+518)){{goto L646367;}}
}
B6462e1:L6462e1:{c.instructions+=5;NFSU2_TR(0x6462e1);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6462e5:{NFSU2_TR(0x6462e5);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6462e7:{NFSU2_TR(0x6462e7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6462e8:{NFSU2_TR(0x6462e8);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x278ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6462ee:{NFSU2_TR(0x6462ee);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6462f1:L6462f1:{c.instructions+=1;NFSU2_TR(0x6462f1);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L6462f3;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6462f1u);}goto L6462f1;}
}
B6462f3:L6462f3:{c.instructions+=1;NFSU2_TR(0x6462f3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L64630e;}}
}
B6462f5:L6462f5:{c.instructions+=6;NFSU2_TR(0x6462f5);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6462f8:{NFSU2_TR(0x6462f8);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6462fb:{NFSU2_TR(0x6462fb);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6462fe:{NFSU2_TR(0x6462fe);
__builtin_memmove((R+4),(R+12),4);
}
B646300:{NFSU2_TR(0x646300);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B646301:{NFSU2_TR(0x646301);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x646306ull));
TAIL_STATIC(0x64570fu,645);
}
B646306:L646306:{c.instructions+=2;NFSU2_TR(0x646306);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B646308:{NFSU2_TR(0x646308);
if(r1(R+518)){{goto L64630e;}}
}
B64630a:L64630a:{c.instructions+=2;NFSU2_TR(0x64630a);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B64630c:{NFSU2_TR(0x64630c);
{goto L646311;}
}
B64630e:L64630e:{c.instructions+=2;NFSU2_TR(0x64630e);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B646310:{NFSU2_TR(0x646310);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B646311:L646311:{c.instructions+=3;NFSU2_TR(0x646311);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B646313:{NFSU2_TR(0x646313);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x44ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B646316:{NFSU2_TR(0x646316);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L646328;}}
}
B646318:L646318:{c.instructions+=2;NFSU2_TR(0x646318);
__builtin_memmove((R+4),(R+12),4);
}
B64631a:{NFSU2_TR(0x64631a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64631full));
TAIL_STATIC(0x645f77u,645);
}
B64631f:L64631f:{c.instructions+=2;NFSU2_TR(0x64631f);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B646322:{NFSU2_TR(0x646322);
if(r1(R+518)){{goto L64632b;}}
}
B646324:L646324:{c.instructions+=2;NFSU2_TR(0x646324);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B646326:{NFSU2_TR(0x646326);
{goto L64632e;}
}
B646328:L646328:{c.instructions+=1;NFSU2_TR(0x646328);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B64632b:L64632b:{c.instructions+=2;NFSU2_TR(0x64632b);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B64632d:{NFSU2_TR(0x64632d);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B64632e:L64632e:{c.instructions+=3;NFSU2_TR(0x64632e);
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
B646330:{NFSU2_TR(0x646330);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x44ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B646333:{NFSU2_TR(0x646333);
if(r1(R+518)){{goto L646407;}}
}
B646339:L646339:{c.instructions+=11;NFSU2_TR(0x646339);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64633b:{NFSU2_TR(0x64633b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B64633c:{NFSU2_TR(0x64633c);
u8 U[4];
w4(U+0,u32(0x7ab8ecull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B646341:{NFSU2_TR(0x646341);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x278ull))));
__builtin_memmove((R+0),(U+0),4);
}
B646347:{NFSU2_TR(0x646347);
u8 U[4];
w4(U+0,u32(0x5eeull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64634c:{NFSU2_TR(0x64634c);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x48ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B646353:{NFSU2_TR(0x646353);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B646354:{NFSU2_TR(0x646354);
__builtin_memmove((R+28),(R+0),4);
}
B646356:{NFSU2_TR(0x646356);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x18ull))));
}
B646359:{NFSU2_TR(0x646359);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((R+24),(U+0),4);
}
B64635c:{NFSU2_TR(0x64635c);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64635d:L64635d:{c.instructions+=1;NFSU2_TR(0x64635d);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L64635f;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64635du);}goto L64635d;}
}
B64635f:L64635f:{c.instructions+=1;NFSU2_TR(0x64635f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x646364ull));
TAIL_STATIC(0x64307cu,643);
}
B646364:L646364:{c.instructions+=1;NFSU2_TR(0x646364);
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
B646367:L646367:{c.instructions+=2;NFSU2_TR(0x646367);
w4(R+0,u32(0x116ull));
}
B64636c:{NFSU2_TR(0x64636c);
{goto L646407;}
}
B646371:L646371:{c.instructions+=2;NFSU2_TR(0x646371);
w4(R+0,u32(0x117ull));
}
B646376:{NFSU2_TR(0x646376);
{goto L646407;}
}
B64637b:L64637b:{c.instructions+=2;NFSU2_TR(0x64637b);
w4(R+0,u32(0x119ull));
}
B646380:{NFSU2_TR(0x646380);
{goto L646407;}
}
B646385:L646385:{c.instructions+=3;NFSU2_TR(0x646385);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x281ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B64638b:{NFSU2_TR(0x64638b);
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
B64638d:{NFSU2_TR(0x64638d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L646398;}}
}
B64638f:L64638f:{c.instructions+=2;NFSU2_TR(0x64638f);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x280ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(s32(s8(r1(U+4)))));
}
B646396:{NFSU2_TR(0x646396);
{goto L646407;}
}
B646398:L646398:{c.instructions+=2;NFSU2_TR(0x646398);
u8 U[10];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x282ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+8),(U+4),1);
w1(R+512,u8((r1(U+8))<(u8(0x0ull))));
w1(R+523,sborrow<u8>(r1(U+8),u8(0x0ull)));
w1(U+9,u8(u32(r1(U+8))-u32(u8(0x0ull))));
w1(R+519,u8(s8(r1(U+9))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+9))==(u8(0x0ull))));
w1(U+5,u8(u32(r1(U+9))&u32(u8(0xffull))));
w1(U+6,u8(__builtin_popcountll(u64(r1(U+5)))));
w1(U+7,u8(u32(r1(U+6))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+7))==(u8(0x0ull))));
}
B64639f:{NFSU2_TR(0x64639f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64637bu);}goto L64637b;}}
}
B6463a1:L6463a1:{c.instructions+=2;NFSU2_TR(0x6463a1);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x3dull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6463a3:{NFSU2_TR(0x6463a3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6463d8;}}
}
B6463a5:L6463a5:{c.instructions+=3;NFSU2_TR(0x6463a5);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x280ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(s32(s8(r1(U+4)))));
}
B6463ac:{NFSU2_TR(0x6463ac);
u8 U[6];
w1(R+512,u8((r4(R+0))<(u32(0x21ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x21ull)));
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x21ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6463af:{NFSU2_TR(0x6463af);
if(r1(R+518)){{goto L6463d1;}}
}
B6463b1:L6463b1:{c.instructions+=2;NFSU2_TR(0x6463b1);
u8 U[6];
w1(R+512,u8((r4(R+0))<(u32(0x1bull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x1bull)));
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1bull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6463b4:{NFSU2_TR(0x6463b4);
if(r1(R+518)){{goto L6463ca;}}
}
B6463b6:L6463b6:{c.instructions+=2;NFSU2_TR(0x6463b6);
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
B6463b7:{NFSU2_TR(0x6463b7);
if(r1(R+518)){{goto L6463c3;}}
}
B6463b9:L6463b9:{c.instructions+=2;NFSU2_TR(0x6463b9);
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
B6463ba:{NFSU2_TR(0x6463ba);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64637bu);}goto L64637b;}}
}
B6463bc:L6463bc:{c.instructions+=2;NFSU2_TR(0x6463bc);
w4(R+0,u32(0x111ull));
}
B6463c1:{NFSU2_TR(0x6463c1);
{goto L646407;}
}
B6463c3:L6463c3:{c.instructions+=2;NFSU2_TR(0x6463c3);
w4(R+0,u32(0x112ull));
}
B6463c8:{NFSU2_TR(0x6463c8);
{goto L646407;}
}
B6463ca:L6463ca:{c.instructions+=2;NFSU2_TR(0x6463ca);
w4(R+0,u32(0x110ull));
}
B6463cf:{NFSU2_TR(0x6463cf);
{goto L646407;}
}
B6463d1:L6463d1:{c.instructions+=2;NFSU2_TR(0x6463d1);
w4(R+0,u32(0x113ull));
}
B6463d6:{NFSU2_TR(0x6463d6);
{goto L646407;}
}
B6463d8:L6463d8:{c.instructions+=3;NFSU2_TR(0x6463d8);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x280ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+12),(U+4),1);
}
B6463de:{NFSU2_TR(0x6463de);
u8 U[5];
__builtin_memmove((U+3),(R+0),1);
w1(R+512,u8((r1(R+12))<(r1(U+3))));
w1(R+523,sborrow<u8>(r1(R+12),r1(U+3)));
w1(U+4,u8(u32(r1(R+12))-u32(r1(U+3))));
w1(R+519,u8(s8(r1(U+4))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+4))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+4))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B6463e0:{NFSU2_TR(0x6463e0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64637bu);}goto L64637b;}}
}
B6463e2:L6463e2:{c.instructions+=2;NFSU2_TR(0x6463e2);
u8 U[5];
__builtin_memmove((U+3),(R+12),1);
w1(R+512,u8((r1(U+3))<(u8(0x26ull))));
w1(R+523,sborrow<u8>(r1(U+3),u8(0x26ull)));
w1(U+4,u8(u32(r1(U+3))-u32(u8(0x26ull))));
w1(R+519,u8(s8(r1(U+4))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+4))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+4))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B6463e5:{NFSU2_TR(0x6463e5);
if(r1(R+518)){{goto L6463f3;}}
}
B6463e7:L6463e7:{c.instructions+=2;NFSU2_TR(0x6463e7);
u8 U[5];
__builtin_memmove((U+3),(R+12),1);
w1(R+512,u8((r1(U+3))<(u8(0x7cull))));
w1(R+523,sborrow<u8>(r1(U+3),u8(0x7cull)));
w1(U+4,u8(u32(r1(U+3))-u32(u8(0x7cull))));
w1(R+519,u8(s8(r1(U+4))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+4))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+4))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B6463ea:{NFSU2_TR(0x6463ea);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64637bu);}goto L64637b;}}
}
B6463ec:L6463ec:{c.instructions+=2;NFSU2_TR(0x6463ec);
w4(R+0,u32(0x115ull));
}
B6463f1:{NFSU2_TR(0x6463f1);
{goto L646407;}
}
B6463f3:L6463f3:{c.instructions+=2;NFSU2_TR(0x6463f3);
w4(R+0,u32(0x114ull));
}
B6463f8:{NFSU2_TR(0x6463f8);
{goto L646407;}
}
B6463fa:L6463fa:{c.instructions+=1;NFSU2_TR(0x6463fa);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x278ull))));
w4(U+4,u32(0xcull));
s4(u32(r4(U+0)),r4(U+4));
}
B646404:L646404:{c.instructions+=1;NFSU2_TR(0x646404);
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
B646407:L646407:{c.instructions+=5;NFSU2_TR(0x646407);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B646408:{NFSU2_TR(0x646408);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B646409:{NFSU2_TR(0x646409);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B64640a:{NFSU2_TR(0x64640a);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B64640b:{NFSU2_TR(0x64640b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B64640c:L64640c:{c.instructions+=9;NFSU2_TR(0x64640c);
__builtin_memmove((R+28),(R+28),4);
}
B64640e:{NFSU2_TR(0x64640e);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64640f:{NFSU2_TR(0x64640f);
__builtin_memmove((R+20),(R+16),4);
}
B646411:{NFSU2_TR(0x646411);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B646412:{NFSU2_TR(0x646412);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B646413:{NFSU2_TR(0x646413);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B646414:{NFSU2_TR(0x646414);
u8 U[4];
w4(U+0,u32(0x14ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B646416:{NFSU2_TR(0x646416);
__builtin_memmove((R+12),(R+4),4);
}
B646418:{NFSU2_TR(0x646418);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64641dull));
TAIL_STATIC(0x575620u,575);
}
B64641d:L64641d:{c.instructions+=4;NFSU2_TR(0x64641d);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B64641f:{NFSU2_TR(0x64641f);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B646421:{NFSU2_TR(0x646421);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B646422:{NFSU2_TR(0x646422);
if(r1(R+518)){{goto L646435;}}
}
B646424:L646424:{c.instructions+=5;NFSU2_TR(0x646424);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B646425:{NFSU2_TR(0x646425);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B646426:{NFSU2_TR(0x646426);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B646429:{NFSU2_TR(0x646429);
__builtin_memmove((R+4),(R+0),4);
}
B64642b:{NFSU2_TR(0x64642b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x646430ull));
TAIL_STATIC(0x643d67u,643);
}
B646430:L646430:{c.instructions+=2;NFSU2_TR(0x646430);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B646433:{NFSU2_TR(0x646433);
{goto L646438;}
}
B646435:L646435:{c.instructions+=1;NFSU2_TR(0x646435);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B646438:L646438:{c.instructions+=3;NFSU2_TR(0x646438);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B64643b:{NFSU2_TR(0x64643b);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B64643d:{NFSU2_TR(0x64643d);
if(r1(R+518)){{goto L646676;}}
}
B646443:L646443:{c.instructions+=2;NFSU2_TR(0x646443);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B646446:{NFSU2_TR(0x646446);
if(r1(R+518)){{goto L6465d8;}}
}
B64644c:L64644c:{c.instructions+=4;NFSU2_TR(0x64644c);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x26cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B646452:{NFSU2_TR(0x646452);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B646454:{NFSU2_TR(0x646454);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B646457:{NFSU2_TR(0x646457);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L6465d8;}}
}
B64645d:L64645d:{c.instructions+=2;NFSU2_TR(0x64645d);
u8 U[3];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((U+1),(U+0),1);
w1(U+2,u8(u32(r1(U+1))-u32(u8(0x28ull))));
w1(R+518,u8((r1(U+2))==(u8(0x0ull))));
}
B646460:{NFSU2_TR(0x646460);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6465d8;}}
}
B646466:L646466:{c.instructions+=6;NFSU2_TR(0x646466);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B646469:{NFSU2_TR(0x646469);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64646c:{NFSU2_TR(0x64646c);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x278ull))));
__builtin_memmove((R+0),(U+0),4);
}
B646472:{NFSU2_TR(0x646472);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B646473:{NFSU2_TR(0x646473);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x298ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B646479:{NFSU2_TR(0x646479);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64647eull));
TAIL_STATIC(0x643afeu,643);
}
B64647e:L64647e:{c.instructions+=3;NFSU2_TR(0x64647e);
__builtin_memmove((R+24),(R+0),4);
}
B646480:{NFSU2_TR(0x646480);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B646482:{NFSU2_TR(0x646482);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L64669a;}}
}
B646488:L646488:{c.instructions+=5;NFSU2_TR(0x646488);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x26cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B64648e:{NFSU2_TR(0x64648e);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x278ull))));
__builtin_memmove((R+28),(U+0),4);
}
B646494:{NFSU2_TR(0x646494);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B646495:{NFSU2_TR(0x646495);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x298ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B64649b:{NFSU2_TR(0x64649b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6464a0ull));
TAIL_STATIC(0x643afeu,643);
}
B6464a0:L6464a0:{c.instructions+=3;NFSU2_TR(0x6464a0);
__builtin_memmove((R+24),(R+0),4);
}
B6464a2:{NFSU2_TR(0x6464a2);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B6464a4:{NFSU2_TR(0x6464a4);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L64669a;}}
}
B6464aa:L6464aa:{c.instructions+=2;NFSU2_TR(0x6464aa);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x9ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B6464ad:{NFSU2_TR(0x6464ad);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6465a0;}}
}
B6464b3:L6464b3:{c.instructions+=4;NFSU2_TR(0x6464b3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6464b6:{NFSU2_TR(0x6464b6);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B6464b9:{NFSU2_TR(0x6464b9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6464bb:{NFSU2_TR(0x6464bb);
{goto L6464f4;}
}
B6464bd:L6464bd:{c.instructions+=2;NFSU2_TR(0x6464bd);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6464c0:{NFSU2_TR(0x6464c0);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x280ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6464c6:L6464c6:{c.instructions+=4;NFSU2_TR(0x6464c6);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+28))),1);
__builtin_memmove((R+8),(U+0),1);
}
B6464c8:{NFSU2_TR(0x6464c8);
__builtin_memmove((R+4),(R+8),1);
}
B6464ca:{NFSU2_TR(0x6464ca);
u8 U[3];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
__builtin_memmove((U+1),(U+0),1);
w1(R+512,u8((r1(R+8))<(r1(U+1))));
w1(U+2,u8(u32(r1(R+8))-u32(r1(U+1))));
w1(R+518,u8((r1(U+2))==(u8(0x0ull))));
}
B6464cc:{NFSU2_TR(0x6464cc);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6464e8;}}
}
B6464ce:L6464ce:{c.instructions+=2;NFSU2_TR(0x6464ce);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6464d0:{NFSU2_TR(0x6464d0);
if(r1(R+518)){{goto L6464e4;}}
}
B6464d2:L6464d2:{c.instructions+=4;NFSU2_TR(0x6464d2);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B6464d5:{NFSU2_TR(0x6464d5);
__builtin_memmove((R+4),(R+8),1);
}
B6464d7:{NFSU2_TR(0x6464d7);
u8 U[7];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(R+512,u8((r1(R+8))<(r1(U+5))));
w1(U+6,u8(u32(r1(R+8))-u32(r1(U+5))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B6464da:{NFSU2_TR(0x6464da);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6464e8;}}
}
B6464dc:L6464dc:{c.instructions+=6;NFSU2_TR(0x6464dc);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B6464dd:{NFSU2_TR(0x6464dd);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B6464de:{NFSU2_TR(0x6464de);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B6464df:{NFSU2_TR(0x6464df);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B6464e0:{NFSU2_TR(0x6464e0);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6464e2:{NFSU2_TR(0x6464e2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6464c6u);}goto L6464c6;}}
}
B6464e4:L6464e4:{c.instructions+=2;NFSU2_TR(0x6464e4);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B6464e6:{NFSU2_TR(0x6464e6);
{goto L6464ed;}
}
B6464e8:L6464e8:{c.instructions+=2;NFSU2_TR(0x6464e8);
u8 U[9];
w4(U+0,u32(r1(R+512)));
w1(R+512,u8((r4(R+4))<(r4(R+4))));
w4(U+4,u32(u32(r4(R+4))-u32(r4(R+4))));
w1(U+8,u8((r4(U+4))<(r4(U+0))));
w1(R+512,u8((r1(R+512))||(r1(U+8))));
w4(R+4,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B6464ea:{NFSU2_TR(0x6464ea);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+4))-u32(u32(0xffffffffull))));
w4(R+4,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B6464ed:L6464ed:{c.instructions+=2;NFSU2_TR(0x6464ed);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6464ef:{NFSU2_TR(0x6464ef);
if(r1(R+518)){{goto L6464fa;}}
}
B6464f1:L6464f1:{c.instructions+=1;NFSU2_TR(0x6464f1);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6464f4:L6464f4:{c.instructions+=2;NFSU2_TR(0x6464f4);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6464f6:{NFSU2_TR(0x6464f6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6464bdu);}goto L6464bd;}}
}
B6464f8:L6464f8:{c.instructions+=1;NFSU2_TR(0x6464f8);
{goto L64651d;}
}
B6464fa:L6464fa:{c.instructions+=8;NFSU2_TR(0x6464fa);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x280ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B646500:{NFSU2_TR(0x646500);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x278ull))));
__builtin_memmove((R+0),(U+0),4);
}
B646506:{NFSU2_TR(0x646506);
u8 U[4];
w4(U+0,u32(0x7aba34ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64650b:{NFSU2_TR(0x64650b);
u8 U[4];
w4(U+0,u32(0x5e7ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B646510:{NFSU2_TR(0x646510);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B646511:{NFSU2_TR(0x646511);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((R+0),(U+0),4);
}
B646514:{NFSU2_TR(0x646514);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B646515:{NFSU2_TR(0x646515);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64651aull));
TAIL_STATIC(0x64307cu,643);
}
B64651a:L64651a:{c.instructions+=1;NFSU2_TR(0x64651a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B64651d:L64651d:{c.instructions+=2;NFSU2_TR(0x64651d);
u8 U[4];
w4(U+0,u32(0x30ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64651f:{NFSU2_TR(0x64651f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x646524ull));
TAIL_STATIC(0x645362u,645);
}
B646524:L646524:{c.instructions+=2;NFSU2_TR(0x646524);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B646526:{NFSU2_TR(0x646526);
if(r1(R+518)){{goto L646538;}}
}
B646528:L646528:{c.instructions+=4;NFSU2_TR(0x646528);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x278ull))));
__builtin_memmove((R+8),(U+0),4);
}
B64652e:{NFSU2_TR(0x64652e);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64652f:{NFSU2_TR(0x64652f);
__builtin_memmove((R+4),(R+0),4);
}
B646531:{NFSU2_TR(0x646531);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x646536ull));
TAIL_STATIC(0x67269fu,672);
}
B646536:L646536:{c.instructions+=1;NFSU2_TR(0x646536);
{goto L64653a;}
}
B646538:L646538:{c.instructions+=1;NFSU2_TR(0x646538);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B64653a:L64653a:{c.instructions+=4;NFSU2_TR(0x64653a);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B64653c:{NFSU2_TR(0x64653c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B64653f:{NFSU2_TR(0x64653f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B646541:{NFSU2_TR(0x646541);
if(r1(R+518)){{goto L646676;}}
}
B646547:L646547:{c.instructions+=7;NFSU2_TR(0x646547);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x26cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B64654d:{NFSU2_TR(0x64654d);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x278ull))));
__builtin_memmove((R+28),(U+0),4);
}
B646553:{NFSU2_TR(0x646553);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B646554:{NFSU2_TR(0x646554);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x298ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B64655a:{NFSU2_TR(0x64655a);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
}
B64655d:{NFSU2_TR(0x64655d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B646560:{NFSU2_TR(0x646560);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x646565ull));
TAIL_STATIC(0x643afeu,643);
}
B646565:L646565:{c.instructions+=3;NFSU2_TR(0x646565);
__builtin_memmove((R+24),(R+0),4);
}
B646567:{NFSU2_TR(0x646567);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B646569:{NFSU2_TR(0x646569);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L64669a;}}
}
B64656f:L64656f:{c.instructions+=2;NFSU2_TR(0x64656f);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B646572:{NFSU2_TR(0x646572);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6465a0;}}
}
B646574:L646574:{c.instructions+=5;NFSU2_TR(0x646574);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B646576:{NFSU2_TR(0x646576);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x280ull))));
__builtin_memmove((R+28),(U+0),4);
}
B64657c:{NFSU2_TR(0x64657c);
w4(R+24,u32(0x7a1598ull));
}
B646581:{NFSU2_TR(0x646581);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B646582:{NFSU2_TR(0x646582);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B646584:L646584:{c.instructions+=1;NFSU2_TR(0x646584);
u8 U[41];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L646586;}}
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
__builtin_memmove((U+33),gp(u32(r4(U+17))),1);
__builtin_memmove((U+38),(U+33),1);
__builtin_memmove((U+16),gp(u32(r4(U+0))),1);
__builtin_memmove((U+39),(U+16),1);
w1(R+512,u8((r1(U+39))<(r1(U+38))));
w1(R+523,sborrow<u8>(r1(U+39),r1(U+38)));
w1(U+40,u8(u32(r1(U+39))-u32(r1(U+38))));
w1(R+519,u8(s8(r1(U+40))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+40))==(u8(0x0ull))));
w1(U+35,u8(u32(r1(U+40))&u32(u8(0xffull))));
w1(U+36,u8(__builtin_popcountll(u64(r1(U+35)))));
w1(U+37,u8(u32(r1(U+36))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+37))==(u8(0x0ull))));
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x646584u);}goto L646584;}}
}
B646586:L646586:{c.instructions+=1;NFSU2_TR(0x646586);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x646488u);}goto L646488;}}
}
B64658c:L64658c:{c.instructions+=5;NFSU2_TR(0x64658c);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64658e:{NFSU2_TR(0x64658e);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x280ull))));
__builtin_memmove((R+28),(U+0),4);
}
B646594:{NFSU2_TR(0x646594);
w4(R+24,u32(0x786050ull));
}
B646599:{NFSU2_TR(0x646599);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B64659a:{NFSU2_TR(0x64659a);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B64659c:L64659c:{c.instructions+=1;NFSU2_TR(0x64659c);
u8 U[41];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L64659e;}}
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
__builtin_memmove((U+33),gp(u32(r4(U+17))),1);
__builtin_memmove((U+38),(U+33),1);
__builtin_memmove((U+16),gp(u32(r4(U+0))),1);
__builtin_memmove((U+39),(U+16),1);
w1(R+512,u8((r1(U+39))<(r1(U+38))));
w1(R+523,sborrow<u8>(r1(U+39),r1(U+38)));
w1(U+40,u8(u32(r1(U+39))-u32(r1(U+38))));
w1(R+519,u8(s8(r1(U+40))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+40))==(u8(0x0ull))));
w1(U+35,u8(u32(r1(U+40))&u32(u8(0xffull))));
w1(U+36,u8(__builtin_popcountll(u64(r1(U+35)))));
w1(U+37,u8(u32(r1(U+36))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+37))==(u8(0x0ull))));
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64659cu);}goto L64659c;}}
}
B64659e:L64659e:{c.instructions+=1;NFSU2_TR(0x64659e);
if(r1(R+518)){{goto L6465d8;}}
}
B6465a0:L6465a0:{c.instructions+=4;NFSU2_TR(0x6465a0);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x278ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6465a6:{NFSU2_TR(0x6465a6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6465a8:{NFSU2_TR(0x6465a8);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xcull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6465ab:{NFSU2_TR(0x6465ab);
if(r1(R+518)){{goto L6465b2;}}
}
B6465ad:L6465ad:{c.instructions+=2;NFSU2_TR(0x6465ad);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xdull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6465b0:{NFSU2_TR(0x6465b0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6465b9;}}
}
B6465b2:L6465b2:{c.instructions+=1;NFSU2_TR(0x6465b2);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x40ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6465b9:L6465b9:{c.instructions+=4;NFSU2_TR(0x6465b9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6465ba:{NFSU2_TR(0x6465ba);
u8 U[4];
w4(U+0,u32(0x5dcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6465bf:{NFSU2_TR(0x6465bf);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6465c2:{NFSU2_TR(0x6465c2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6465c7ull));
TAIL_STATIC(0x6432a0u,643);
}
B6465c7:L6465c7:{c.instructions+=3;NFSU2_TR(0x6465c7);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x44ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6465ce:{NFSU2_TR(0x6465ce);
w4(R+24,u32(0x80004005ull));
}
B6465d3:{NFSU2_TR(0x6465d3);
{goto L64669a;}
}
B6465d8:L6465d8:{c.instructions+=2;NFSU2_TR(0x6465d8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6465db:{NFSU2_TR(0x6465db);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
}
B6465de:L6465de:{c.instructions+=4;NFSU2_TR(0x6465de);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6465e1:{NFSU2_TR(0x6465e1);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6465e4:{NFSU2_TR(0x6465e4);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6465e6:{NFSU2_TR(0x6465e6);
if(r1(R+518)){{goto L64661a;}}
}
B6465e8:L6465e8:{c.instructions+=4;NFSU2_TR(0x6465e8);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6465eb:{NFSU2_TR(0x6465eb);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6465ed:{NFSU2_TR(0x6465ed);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x278ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6465f3:{NFSU2_TR(0x6465f3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6465f4:L6465f4:{c.instructions+=1;NFSU2_TR(0x6465f4);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L6465f6;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6465f4u);}goto L6465f4;}
}
B6465f6:L6465f6:{c.instructions+=9;NFSU2_TR(0x6465f6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6465f9:{NFSU2_TR(0x6465f9);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x64ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6465fc:{NFSU2_TR(0x6465fc);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B646600:{NFSU2_TR(0x646600);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x26cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B646606:{NFSU2_TR(0x646606);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B646609:{NFSU2_TR(0x646609);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x288ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64660f:{NFSU2_TR(0x64660f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B646612:{NFSU2_TR(0x646612);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x28cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B646618:{NFSU2_TR(0x646618);
{goto L646638;}
}
B64661a:L64661a:{c.instructions+=5;NFSU2_TR(0x64661a);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x26cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B646620:{NFSU2_TR(0x646620);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x278ull))));
__builtin_memmove((R+0),(U+0),4);
}
B646626:{NFSU2_TR(0x646626);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B646627:{NFSU2_TR(0x646627);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x298ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B64662d:{NFSU2_TR(0x64662d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x646632ull));
TAIL_STATIC(0x643afeu,643);
}
B646632:L646632:{c.instructions+=3;NFSU2_TR(0x646632);
__builtin_memmove((R+24),(R+0),4);
}
B646634:{NFSU2_TR(0x646634);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B646636:{NFSU2_TR(0x646636);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L64669a;}}
}
B646638:L646638:{c.instructions+=3;NFSU2_TR(0x646638);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x278ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B64663e:{NFSU2_TR(0x64663e);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xcull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B646641:{NFSU2_TR(0x646641);
if(r1(R+518)){{goto L64667d;}}
}
B646643:L646643:{c.instructions+=2;NFSU2_TR(0x646643);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xdull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B646646:{NFSU2_TR(0x646646);
if(r1(R+518)){{goto L64667d;}}
}
B646648:L646648:{c.instructions+=2;NFSU2_TR(0x646648);
u8 U[4];
w4(U+0,u32(0x30ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64664a:{NFSU2_TR(0x64664a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64664full));
TAIL_STATIC(0x645362u,645);
}
B64664f:L64664f:{c.instructions+=2;NFSU2_TR(0x64664f);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B646651:{NFSU2_TR(0x646651);
if(r1(R+518)){{goto L646663;}}
}
B646653:L646653:{c.instructions+=4;NFSU2_TR(0x646653);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x278ull))));
__builtin_memmove((R+8),(U+0),4);
}
B646659:{NFSU2_TR(0x646659);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64665a:{NFSU2_TR(0x64665a);
__builtin_memmove((R+4),(R+0),4);
}
B64665c:{NFSU2_TR(0x64665c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x646661ull));
TAIL_STATIC(0x67269fu,672);
}
B646661:L646661:{c.instructions+=1;NFSU2_TR(0x646661);
{goto L646665;}
}
B646663:L646663:{c.instructions+=1;NFSU2_TR(0x646663);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B646665:L646665:{c.instructions+=4;NFSU2_TR(0x646665);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B646667:{NFSU2_TR(0x646667);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B64666a:{NFSU2_TR(0x64666a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B64666c:{NFSU2_TR(0x64666c);
if(r1(R+518)){{goto L646676;}}
}
B64666e:L64666e:{c.instructions+=2;NFSU2_TR(0x64666e);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
}
B646671:{NFSU2_TR(0x646671);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6465deu);}goto L6465de;}
}
B646676:L646676:{c.instructions+=2;NFSU2_TR(0x646676);
w4(R+24,u32(0x8007000eull));
}
B64667b:{NFSU2_TR(0x64667b);
{goto L64669a;}
}
B64667d:L64667d:{c.instructions+=4;NFSU2_TR(0x64667d);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B646680:{NFSU2_TR(0x646680);
__builtin_memmove((R+4),(R+12),4);
}
B646682:{NFSU2_TR(0x646682);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x40ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B646689:{NFSU2_TR(0x646689);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64668eull));
TAIL_STATIC(0x6455b1u,645);
}
B64668e:L64668e:{c.instructions+=3;NFSU2_TR(0x64668e);
__builtin_memmove((R+24),(R+0),4);
}
B646690:{NFSU2_TR(0x646690);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B646692:{NFSU2_TR(0x646692);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L64669a;}}
}
B646694:L646694:{c.instructions+=2;NFSU2_TR(0x646694);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B646698:{NFSU2_TR(0x646698);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B64669a:L64669a:{c.instructions+=3;NFSU2_TR(0x64669a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B64669d:{NFSU2_TR(0x64669d);
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
B64669f:{NFSU2_TR(0x64669f);
if(r1(R+518)){{goto L6466a8;}}
}
B6466a1:L6466a1:{c.instructions+=2;NFSU2_TR(0x6466a1);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6466a3:{NFSU2_TR(0x6466a3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6466a8ull));
TAIL_STATIC(0x645437u,645);
}
B6466a8:L6466a8:{c.instructions+=6;NFSU2_TR(0x6466a8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6466a9:{NFSU2_TR(0x6466a9);
__builtin_memmove((R+0),(R+24),4);
}
B6466ab:{NFSU2_TR(0x6466ab);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6466ac:{NFSU2_TR(0x6466ac);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6466ad:{NFSU2_TR(0x6466ad);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6466ae:{NFSU2_TR(0x6466ae);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6466b1:L6466b1:{c.instructions+=16;NFSU2_TR(0x6466b1);
__builtin_memmove((R+28),(R+28),4);
}
B6466b3:{NFSU2_TR(0x6466b3);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6466b4:{NFSU2_TR(0x6466b4);
__builtin_memmove((R+20),(R+16),4);
}
B6466b6:{NFSU2_TR(0x6466b6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x64ull))));
}
B6466b9:{NFSU2_TR(0x6466b9);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6466ba:{NFSU2_TR(0x6466ba);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6466bb:{NFSU2_TR(0x6466bb);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6466bc:{NFSU2_TR(0x6466bc);
__builtin_memmove((R+24),(R+4),4);
}
B6466be:{NFSU2_TR(0x6466be);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x26cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6466c4:{NFSU2_TR(0x6466c4);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6466c6:{NFSU2_TR(0x6466c6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6466c9:{NFSU2_TR(0x6466c9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6466ca:{NFSU2_TR(0x6466ca);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6466cc:{NFSU2_TR(0x6466cc);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6466cf:{NFSU2_TR(0x6466cf);
u8 U[4];
w4(U+0,u32(0x14ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6466d1:{NFSU2_TR(0x6466d1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6466d4:L6466d4:{c.instructions+=1;NFSU2_TR(0x6466d4);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L6466d6;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6466d4u);}goto L6466d4;}
}
B6466d6:L6466d6:{c.instructions+=1;NFSU2_TR(0x6466d6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6466dbull));
TAIL_STATIC(0x575620u,575);
}
B6466db:L6466db:{c.instructions+=4;NFSU2_TR(0x6466db);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B6466dd:{NFSU2_TR(0x6466dd);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6466df:{NFSU2_TR(0x6466df);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6466e0:{NFSU2_TR(0x6466e0);
if(r1(R+518)){{goto L6466f9;}}
}
B6466e2:L6466e2:{c.instructions+=7;NFSU2_TR(0x6466e2);
u8 U[4];
w4(U+0,u32(0x7aba80ull));
s4(u32(r4(R+0)),r4(U+0));
}
B6466e8:{NFSU2_TR(0x6466e8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6466eb:{NFSU2_TR(0x6466eb);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6466ee:{NFSU2_TR(0x6466ee);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6466f1:{NFSU2_TR(0x6466f1);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6466f4:{NFSU2_TR(0x6466f4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6466f7:{NFSU2_TR(0x6466f7);
{goto L6466fc;}
}
B6466f9:L6466f9:{c.instructions+=1;NFSU2_TR(0x6466f9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6466fc:L6466fc:{c.instructions+=2;NFSU2_TR(0x6466fc);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6466ff:{NFSU2_TR(0x6466ff);
if(r1(R+518)){{goto L646828;}}
}
B646705:L646705:{c.instructions+=3;NFSU2_TR(0x646705);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B646708:{NFSU2_TR(0x646708);
__builtin_memmove((R+4),(R+24),4);
}
B64670a:{NFSU2_TR(0x64670a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64670full));
TAIL_STATIC(0x6455b1u,645);
}
B64670f:L64670f:{c.instructions+=3;NFSU2_TR(0x64670f);
__builtin_memmove((R+28),(R+0),4);
}
B646711:{NFSU2_TR(0x646711);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+0)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B646713:{NFSU2_TR(0x646713);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L64686c;}}
}
B646719:L646719:{c.instructions+=2;NFSU2_TR(0x646719);
u8 U[4];
w4(U+0,u32(0x14ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64671b:{NFSU2_TR(0x64671b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x646720ull));
TAIL_STATIC(0x575620u,575);
}
B646720:L646720:{c.instructions+=3;NFSU2_TR(0x646720);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B646722:{NFSU2_TR(0x646722);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B646723:{NFSU2_TR(0x646723);
if(r1(R+518)){{goto L64673c;}}
}
B646725:L646725:{c.instructions+=7;NFSU2_TR(0x646725);
u8 U[4];
w4(U+0,u32(0x7aba78ull));
s4(u32(r4(R+0)),r4(U+0));
}
B64672b:{NFSU2_TR(0x64672b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64672e:{NFSU2_TR(0x64672e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B646731:{NFSU2_TR(0x646731);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B646734:{NFSU2_TR(0x646734);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B646737:{NFSU2_TR(0x646737);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64673a:{NFSU2_TR(0x64673a);
{goto L64673f;}
}
B64673c:L64673c:{c.instructions+=1;NFSU2_TR(0x64673c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64673f:L64673f:{c.instructions+=2;NFSU2_TR(0x64673f);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B646742:{NFSU2_TR(0x646742);
if(r1(R+518)){{goto L646828;}}
}
B646748:L646748:{c.instructions+=3;NFSU2_TR(0x646748);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B64674b:{NFSU2_TR(0x64674b);
__builtin_memmove((R+4),(R+24),4);
}
B64674d:{NFSU2_TR(0x64674d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x646752ull));
TAIL_STATIC(0x6455b1u,645);
}
B646752:L646752:{c.instructions+=3;NFSU2_TR(0x646752);
__builtin_memmove((R+28),(R+0),4);
}
B646754:{NFSU2_TR(0x646754);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+0)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B646756:{NFSU2_TR(0x646756);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L64686c;}}
}
B64675c:L64675c:{c.instructions+=6;NFSU2_TR(0x64675c);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64675e:{NFSU2_TR(0x64675e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B64675f:{NFSU2_TR(0x64675f);
u8 U[4];
w4(U+0,u32(0x14ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B646761:{NFSU2_TR(0x646761);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B646764:{NFSU2_TR(0x646764);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
w4(U+4,u32(0x900ull));
s4(u32(r4(U+0)),r4(U+4));
}
B64676b:{NFSU2_TR(0x64676b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x646770ull));
TAIL_STATIC(0x575620u,575);
}
B646770:L646770:{c.instructions+=3;NFSU2_TR(0x646770);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B646772:{NFSU2_TR(0x646772);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B646773:{NFSU2_TR(0x646773);
if(r1(R+518)){{goto L64678c;}}
}
B646775:L646775:{c.instructions+=7;NFSU2_TR(0x646775);
u8 U[4];
w4(U+0,u32(0x7aba64ull));
s4(u32(r4(R+0)),r4(U+0));
}
B64677b:{NFSU2_TR(0x64677b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64677e:{NFSU2_TR(0x64677e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B646781:{NFSU2_TR(0x646781);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B646784:{NFSU2_TR(0x646784);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B646787:{NFSU2_TR(0x646787);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64678a:{NFSU2_TR(0x64678a);
{goto L64678f;}
}
B64678c:L64678c:{c.instructions+=1;NFSU2_TR(0x64678c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64678f:L64678f:{c.instructions+=2;NFSU2_TR(0x64678f);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B646792:{NFSU2_TR(0x646792);
if(r1(R+518)){{goto L646828;}}
}
B646798:L646798:{c.instructions+=2;NFSU2_TR(0x646798);
u8 U[4];
w4(U+0,u32(0x30ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64679a:{NFSU2_TR(0x64679a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64679full));
TAIL_STATIC(0x645362u,645);
}
B64679f:L64679f:{c.instructions+=2;NFSU2_TR(0x64679f);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6467a1:{NFSU2_TR(0x6467a1);
if(r1(R+518)){{goto L6467b0;}}
}
B6467a3:L6467a3:{c.instructions+=4;NFSU2_TR(0x6467a3);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6467a6:{NFSU2_TR(0x6467a6);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6467a7:{NFSU2_TR(0x6467a7);
__builtin_memmove((R+4),(R+0),4);
}
B6467a9:{NFSU2_TR(0x6467a9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6467aeull));
TAIL_STATIC(0x67269fu,672);
}
B6467ae:L6467ae:{c.instructions+=1;NFSU2_TR(0x6467ae);
{goto L6467b2;}
}
B6467b0:L6467b0:{c.instructions+=1;NFSU2_TR(0x6467b0);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6467b2:L6467b2:{c.instructions+=4;NFSU2_TR(0x6467b2);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6467b4:{NFSU2_TR(0x6467b4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6467b7:{NFSU2_TR(0x6467b7);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6467ba:{NFSU2_TR(0x6467ba);
if(r1(R+518)){{goto L646828;}}
}
B6467bc:L6467bc:{c.instructions+=3;NFSU2_TR(0x6467bc);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6467bd:{NFSU2_TR(0x6467bd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6467c0:{NFSU2_TR(0x6467c0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6467c5ull));
TAIL_STATIC(0x6455b1u,645);
}
B6467c5:L6467c5:{c.instructions+=3;NFSU2_TR(0x6467c5);
__builtin_memmove((R+28),(R+0),4);
}
B6467c7:{NFSU2_TR(0x6467c7);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+0)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6467c9:{NFSU2_TR(0x6467c9);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L64686c;}}
}
B6467cf:L6467cf:{c.instructions+=4;NFSU2_TR(0x6467cf);
u8 U[4];
w4(U+0,u32(0x14ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6467d1:{NFSU2_TR(0x6467d1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6467d4:{NFSU2_TR(0x6467d4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
w4(U+4,u32(0x902ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6467db:{NFSU2_TR(0x6467db);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6467e0ull));
TAIL_STATIC(0x575620u,575);
}
B6467e0:L6467e0:{c.instructions+=3;NFSU2_TR(0x6467e0);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6467e2:{NFSU2_TR(0x6467e2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6467e3:{NFSU2_TR(0x6467e3);
if(r1(R+518)){{goto L6467fc;}}
}
B6467e5:L6467e5:{c.instructions+=7;NFSU2_TR(0x6467e5);
u8 U[4];
w4(U+0,u32(0x7aba54ull));
s4(u32(r4(R+0)),r4(U+0));
}
B6467eb:{NFSU2_TR(0x6467eb);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6467ee:{NFSU2_TR(0x6467ee);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6467f1:{NFSU2_TR(0x6467f1);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6467f4:{NFSU2_TR(0x6467f4);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6467f7:{NFSU2_TR(0x6467f7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6467fa:{NFSU2_TR(0x6467fa);
{goto L6467ff;}
}
B6467fc:L6467fc:{c.instructions+=1;NFSU2_TR(0x6467fc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6467ff:L6467ff:{c.instructions+=2;NFSU2_TR(0x6467ff);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B646802:{NFSU2_TR(0x646802);
if(r1(R+518)){{goto L646828;}}
}
B646804:L646804:{c.instructions+=2;NFSU2_TR(0x646804);
u8 U[4];
w4(U+0,u32(0x30ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B646806:{NFSU2_TR(0x646806);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64680bull));
TAIL_STATIC(0x645362u,645);
}
B64680b:L64680b:{c.instructions+=2;NFSU2_TR(0x64680b);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B64680d:{NFSU2_TR(0x64680d);
if(r1(R+518)){{goto L64681c;}}
}
B64680f:L64680f:{c.instructions+=4;NFSU2_TR(0x64680f);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B646812:{NFSU2_TR(0x646812);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B646813:{NFSU2_TR(0x646813);
__builtin_memmove((R+4),(R+0),4);
}
B646815:{NFSU2_TR(0x646815);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64681aull));
TAIL_STATIC(0x67269fu,672);
}
B64681a:L64681a:{c.instructions+=1;NFSU2_TR(0x64681a);
{goto L64681e;}
}
B64681c:L64681c:{c.instructions+=1;NFSU2_TR(0x64681c);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B64681e:L64681e:{c.instructions+=4;NFSU2_TR(0x64681e);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B646820:{NFSU2_TR(0x646820);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B646823:{NFSU2_TR(0x646823);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B646826:{NFSU2_TR(0x646826);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L64682f;}}
}
B646828:L646828:{c.instructions+=2;NFSU2_TR(0x646828);
w4(R+28,u32(0x8007000eull));
}
B64682d:{NFSU2_TR(0x64682d);
{goto L64686c;}
}
B64682f:L64682f:{c.instructions+=3;NFSU2_TR(0x64682f);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B646832:{NFSU2_TR(0x646832);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B646835:{NFSU2_TR(0x646835);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64683aull));
TAIL_STATIC(0x6455b1u,645);
}
B64683a:L64683a:{c.instructions+=3;NFSU2_TR(0x64683a);
__builtin_memmove((R+28),(R+0),4);
}
B64683c:{NFSU2_TR(0x64683c);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+0)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B64683e:{NFSU2_TR(0x64683e);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L64686c;}}
}
B646840:L646840:{c.instructions+=4;NFSU2_TR(0x646840);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B646843:{NFSU2_TR(0x646843);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B646845:{NFSU2_TR(0x646845);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B646848:{NFSU2_TR(0x646848);
if(r1(R+518)){{goto L64686a;}}
}
B64684a:L64684a:{c.instructions+=2;NFSU2_TR(0x64684a);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff9cull))));
__builtin_memmove((R+4),(U+0),4);
}
B64684d:{NFSU2_TR(0x64684d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x646852ull));
TAIL_STATIC(0x642b43u,642);
}
B646852:L646852:{c.instructions+=5;NFSU2_TR(0x646852);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B646855:{NFSU2_TR(0x646855);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff9cull))));
__builtin_memmove((R+0),(U+0),4);
}
B646858:{NFSU2_TR(0x646858);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x26cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64685e:{NFSU2_TR(0x64685e);
u8 U[18];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
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
B646860:{NFSU2_TR(0x646860);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L646892;}}
}
B646862:L646862:{c.instructions+=2;NFSU2_TR(0x646862);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff9cull))));
__builtin_memmove((R+4),(U+0),4);
}
B646865:{NFSU2_TR(0x646865);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64686aull));
TAIL_STATIC(0x6996f4u,699);
}
B64686a:L64686a:{c.instructions+=1;NFSU2_TR(0x64686a);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B64686c:L64686c:{c.instructions+=6;NFSU2_TR(0x64686c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B64686f:{NFSU2_TR(0x64686f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B646872:{NFSU2_TR(0x646872);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x26cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B646878:{NFSU2_TR(0x646878);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B64687b:{NFSU2_TR(0x64687b);
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
B64687d:{NFSU2_TR(0x64687d);
if(r1(R+518)){{goto L646886;}}
}
B64687f:L64687f:{c.instructions+=2;NFSU2_TR(0x64687f);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B646881:{NFSU2_TR(0x646881);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x646886ull));
TAIL_STATIC(0x645437u,645);
}
B646886:L646886:{c.instructions+=6;NFSU2_TR(0x646886);
__builtin_memmove((R+0),(R+28),4);
}
B646888:{NFSU2_TR(0x646888);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B646889:{NFSU2_TR(0x646889);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B64688a:{NFSU2_TR(0x64688a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B64688b:{NFSU2_TR(0x64688b);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B64688c:{NFSU2_TR(0x64688c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B64688f:L64688f:{c.instructions+=1;NFSU2_TR(0x64688f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B646892:L646892:{c.instructions+=3;NFSU2_TR(0x646892);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B646895:{NFSU2_TR(0x646895);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B646897:{NFSU2_TR(0x646897);
if(r1(R+518)){{goto L6468ad;}}
}
B646899:L646899:{c.instructions+=3;NFSU2_TR(0x646899);
__builtin_memmove((R+0),(R+8),4);
}
B64689b:{NFSU2_TR(0x64689b);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((R+4),(U+0),4);
}
B64689e:{NFSU2_TR(0x64689e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6468a1:L6468a1:{c.instructions+=4;NFSU2_TR(0x6468a1);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((R+4),(U+0),1);
}
B6468a3:{NFSU2_TR(0x6468a3);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6468a4:{NFSU2_TR(0x6468a4);
u8 U[2];
__builtin_memmove((U+0),(R+12),1);
w1(U+1,u8(u32(r1(R+4))-u32(r1(U+0))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B6468a6:{NFSU2_TR(0x6468a6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6468a1u);}goto L6468a1;}}
}
B6468a8:L6468a8:{c.instructions+=2;NFSU2_TR(0x6468a8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))-u32(r4(U+4))));
}
B6468ab:{NFSU2_TR(0x6468ab);
{goto L6468af;}
}
B6468ad:L6468ad:{c.instructions+=1;NFSU2_TR(0x6468ad);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6468af:L6468af:{c.instructions+=9;NFSU2_TR(0x6468af);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x18ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6468b2:{NFSU2_TR(0x6468b2);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6468b3:{NFSU2_TR(0x6468b3);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6468b4:{NFSU2_TR(0x6468b4);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6468b5:{NFSU2_TR(0x6468b5);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6468b6:{NFSU2_TR(0x6468b6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6468b7:{NFSU2_TR(0x6468b7);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6468b8:{NFSU2_TR(0x6468b8);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff9cull))));
__builtin_memmove((R+4),(U+0),4);
}
B6468bb:{NFSU2_TR(0x6468bb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6468c0ull));
TAIL_STATIC(0x642b5du,642);
}
B6468c0:L6468c0:{c.instructions+=3;NFSU2_TR(0x6468c0);
__builtin_memmove((R+28),(R+0),4);
}
B6468c2:{NFSU2_TR(0x6468c2);
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
B6468c4:{NFSU2_TR(0x6468c4);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6468e0;}}
}
B6468c6:L6468c6:{c.instructions+=4;NFSU2_TR(0x6468c6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6468c9:{NFSU2_TR(0x6468c9);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6468ca:{NFSU2_TR(0x6468ca);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+4));
}
B6468cc:{NFSU2_TR(0x6468cc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6468d1ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64640cu);}goto L64640c;}
}
B6468d1:L6468d1:{c.instructions+=3;NFSU2_TR(0x6468d1);
__builtin_memmove((R+28),(R+0),4);
}
B6468d3:{NFSU2_TR(0x6468d3);
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
B6468d5:{NFSU2_TR(0x6468d5);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6468e0;}}
}
B6468d7:L6468d7:{c.instructions+=3;NFSU2_TR(0x6468d7);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x8ull))));
}
B6468da:{NFSU2_TR(0x6468da);
u8 U[18];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
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
B6468dc:{NFSU2_TR(0x6468dc);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64688fu);}goto L64688f;}}
}
B6468de:L6468de:{c.instructions+=1;NFSU2_TR(0x6468de);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x646862u);}goto L646862;}
}
B6468e0:L6468e0:{c.instructions+=2;NFSU2_TR(0x6468e0);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff9cull))));
__builtin_memmove((R+4),(U+0),4);
}
B6468e3:{NFSU2_TR(0x6468e3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6468e8ull));
TAIL_STATIC(0x6996f4u,699);
}
B6468e8:L6468e8:{c.instructions+=1;NFSU2_TR(0x6468e8);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64686cu);}goto L64686c;}
}
B6468ea:L6468ea:{c.instructions+=12;NFSU2_TR(0x6468ea);
__builtin_memmove((R+28),(R+28),4);
}
B6468ec:{NFSU2_TR(0x6468ec);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6468ed:{NFSU2_TR(0x6468ed);
__builtin_memmove((R+20),(R+16),4);
}
B6468ef:{NFSU2_TR(0x6468ef);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x40ull))));
}
B6468f2:{NFSU2_TR(0x6468f2);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6468f3:{NFSU2_TR(0x6468f3);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6468f4:{NFSU2_TR(0x6468f4);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6468f5:{NFSU2_TR(0x6468f5);
__builtin_memmove((R+24),(R+4),4);
}
B6468f7:{NFSU2_TR(0x6468f7);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B6468f9:{NFSU2_TR(0x6468f9);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B6468fb:{NFSU2_TR(0x6468fb);
u8 U[22];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
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
B6468fe:{NFSU2_TR(0x6468fe);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L646c02;}}
}
B646904:L646904:{c.instructions+=2;NFSU2_TR(0x646904);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B646907:{NFSU2_TR(0x646907);
{goto L64692a;}
}
B646909:L646909:{c.instructions+=4;NFSU2_TR(0x646909);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B64690c:{NFSU2_TR(0x64690c);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
}
B64690d:{NFSU2_TR(0x64690d);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B64690f:{NFSU2_TR(0x64690f);
if(r1(R+518)){{goto L646941;}}
}
B646911:L646911:{c.instructions+=8;NFSU2_TR(0x646911);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B646914:{NFSU2_TR(0x646914);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffffc0ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+8),4);
s4(u32(r4(U+8)),r4(U+12));
}
B646918:{NFSU2_TR(0x646918);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B64691b:{NFSU2_TR(0x64691b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64691e:{NFSU2_TR(0x64691e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B646921:{NFSU2_TR(0x646921);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B646924:{NFSU2_TR(0x646924);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B646927:{NFSU2_TR(0x646927);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64692a:L64692a:{c.instructions+=2;NFSU2_TR(0x64692a);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+512,u8((r4(R+4))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B64692c:{NFSU2_TR(0x64692c);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x646909u);}goto L646909;}}
}
B64692e:L64692e:{c.instructions+=3;NFSU2_TR(0x64692e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B646931:{NFSU2_TR(0x646931);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0x2eull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x2eull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x2eull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B646934:{NFSU2_TR(0x646934);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L646be4;}}
}
B64693a:L64693a:{c.instructions+=1;NFSU2_TR(0x64693a);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x646c4eull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B646941:L646941:{c.instructions+=2;NFSU2_TR(0x646941);
u8 U[4];
w4(U+0,u32(0x7abae0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B646946:{NFSU2_TR(0x646946);
{goto L646c31;}
}
B64694b:L64694b:{c.instructions+=5;NFSU2_TR(0x64694b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B64694e:{NFSU2_TR(0x64694e);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B646950:{NFSU2_TR(0x646950);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B646953:{NFSU2_TR(0x646953);
__builtin_memmove((R+4),(R+24),4);
}
B646955:{NFSU2_TR(0x646955);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64695aull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64640cu);}goto L64640c;}
}
B64695a:L64695a:{c.instructions+=1;NFSU2_TR(0x64695a);
{goto L646be4;}
}
B64695f:L64695f:{c.instructions+=4;NFSU2_TR(0x64695f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B646962:{NFSU2_TR(0x646962);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B646965:{NFSU2_TR(0x646965);
__builtin_memmove((R+4),(R+24),4);
}
B646967:{NFSU2_TR(0x646967);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64696cull));
TAIL_STATIC(0x645496u,645);
}
B64696c:L64696c:{c.instructions+=1;NFSU2_TR(0x64696c);
{goto L646be4;}
}
B646971:L646971:{c.instructions+=1;NFSU2_TR(0x646971);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B646972:L646972:{c.instructions+=4;NFSU2_TR(0x646972);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B646975:{NFSU2_TR(0x646975);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B646978:{NFSU2_TR(0x646978);
__builtin_memmove((R+4),(R+24),4);
}
B64697a:{NFSU2_TR(0x64697a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64697full));
TAIL_STATIC(0x6442aau,644);
}
B64697f:L64697f:{c.instructions+=1;NFSU2_TR(0x64697f);
{goto L646be4;}
}
B646984:L646984:{c.instructions+=3;NFSU2_TR(0x646984);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B646987:{NFSU2_TR(0x646987);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B64698a:{NFSU2_TR(0x64698a);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x646972u);}goto L646972;}
}
B64698c:L64698c:{c.instructions+=2;NFSU2_TR(0x64698c);
__builtin_memmove((R+4),(R+24),4);
}
B64698e:{NFSU2_TR(0x64698e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x646993ull));
TAIL_STATIC(0x6442e3u,644);
}
B646993:L646993:{c.instructions+=1;NFSU2_TR(0x646993);
{goto L646be4;}
}
B646998:L646998:{c.instructions+=2;NFSU2_TR(0x646998);
__builtin_memmove((R+4),(R+24),4);
}
B64699a:{NFSU2_TR(0x64699a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64699full));
TAIL_STATIC(0x6444dcu,644);
}
B64699f:L64699f:{c.instructions+=1;NFSU2_TR(0x64699f);
{goto L646be4;}
}
B6469a4:L6469a4:{c.instructions+=2;NFSU2_TR(0x6469a4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6469a7:{NFSU2_TR(0x6469a7);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6469aa:L6469aa:{c.instructions+=2;NFSU2_TR(0x6469aa);
__builtin_memmove((R+4),(R+24),4);
}
B6469ac:{NFSU2_TR(0x6469ac);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6469b1ull));
TAIL_STATIC(0x6445c0u,644);
}
B6469b1:L6469b1:{c.instructions+=1;NFSU2_TR(0x6469b1);
{goto L646be4;}
}
B6469b6:L6469b6:{c.instructions+=6;NFSU2_TR(0x6469b6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6469b9:{NFSU2_TR(0x6469b9);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6469ba:{NFSU2_TR(0x6469ba);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6469bb:{NFSU2_TR(0x6469bb);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6469be:{NFSU2_TR(0x6469be);
__builtin_memmove((R+4),(R+24),4);
}
B6469c0:{NFSU2_TR(0x6469c0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6469c5ull));
TAIL_STATIC(0x6452dbu,645);
}
B6469c5:L6469c5:{c.instructions+=1;NFSU2_TR(0x6469c5);
{goto L6469db;}
}
B6469c7:L6469c7:{c.instructions+=6;NFSU2_TR(0x6469c7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6469ca:{NFSU2_TR(0x6469ca);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6469cb:{NFSU2_TR(0x6469cb);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6469cc:{NFSU2_TR(0x6469cc);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6469cf:{NFSU2_TR(0x6469cf);
__builtin_memmove((R+4),(R+24),4);
}
B6469d1:{NFSU2_TR(0x6469d1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6469d6ull));
TAIL_STATIC(0x6452dbu,645);
}
B6469d6:L6469d6:{c.instructions+=3;NFSU2_TR(0x6469d6);
w1(R+512,u8((r4(R+0))!=(u32(0x0ull))));
w4(R+0,u32(0-u32(r4(R+0))));
}
B6469d8:{NFSU2_TR(0x6469d8);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(R+0))));
w4(R+0,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B6469da:{NFSU2_TR(0x6469da);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6469db:L6469db:{c.instructions+=2;NFSU2_TR(0x6469db);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6469dc:{NFSU2_TR(0x6469dc);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6469aau);}goto L6469aa;}
}
B6469de:L6469de:{c.instructions+=4;NFSU2_TR(0x6469de);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6469e1:{NFSU2_TR(0x6469e1);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6469e4:{NFSU2_TR(0x6469e4);
__builtin_memmove((R+4),(R+24),4);
}
B6469e6:{NFSU2_TR(0x6469e6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6469ebull));
TAIL_STATIC(0x644620u,644);
}
B6469eb:L6469eb:{c.instructions+=1;NFSU2_TR(0x6469eb);
{goto L646be4;}
}
B6469f0:L6469f0:{c.instructions+=2;NFSU2_TR(0x6469f0);
__builtin_memmove((R+4),(R+24),4);
}
B6469f2:{NFSU2_TR(0x6469f2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6469f7ull));
TAIL_STATIC(0x64469du,644);
}
B6469f7:L6469f7:{c.instructions+=1;NFSU2_TR(0x6469f7);
{goto L646be4;}
}
B6469fc:L6469fc:{c.instructions+=2;NFSU2_TR(0x6469fc);
__builtin_memmove((R+4),(R+24),4);
}
B6469fe:{NFSU2_TR(0x6469fe);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x646a03ull));
TAIL_STATIC(0x644707u,644);
}
B646a03:L646a03:{c.instructions+=1;NFSU2_TR(0x646a03);
{goto L646be4;}
}
B646a08:L646a08:{c.instructions+=3;NFSU2_TR(0x646a08);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B646a0a:{NFSU2_TR(0x646a0a);
__builtin_memmove((R+4),(R+24),4);
}
B646a0c:{NFSU2_TR(0x646a0c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x646a11ull));
TAIL_STATIC(0x6445c0u,644);
}
B646a11:L646a11:{c.instructions+=2;NFSU2_TR(0x646a11);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x26cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B646a17:{NFSU2_TR(0x646a17);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x646a1cull));
TAIL_STATIC(0x642bc7u,642);
}
B646a1c:L646a1c:{c.instructions+=1;NFSU2_TR(0x646a1c);
{goto L646be4;}
}
B646a21:L646a21:{c.instructions+=3;NFSU2_TR(0x646a21);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B646a23:{NFSU2_TR(0x646a23);
__builtin_memmove((R+4),(R+24),4);
}
B646a25:{NFSU2_TR(0x646a25);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x646a2aull));
TAIL_STATIC(0x644620u,644);
}
B646a2a:L646a2a:{c.instructions+=1;NFSU2_TR(0x646a2a);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x646a11u);}goto L646a11;}
}
B646a2c:L646a2c:{c.instructions+=2;NFSU2_TR(0x646a2c);
__builtin_memmove((R+4),(R+24),4);
}
B646a2e:{NFSU2_TR(0x646a2e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x646a33ull));
TAIL_STATIC(0x64550au,645);
}
B646a33:L646a33:{c.instructions+=1;NFSU2_TR(0x646a33);
{goto L646be4;}
}
B646a38:L646a38:{c.instructions+=2;NFSU2_TR(0x646a38);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B646a3b:{NFSU2_TR(0x646a3b);
{goto L646be4;}
}
B646a40:L646a40:{c.instructions+=5;NFSU2_TR(0x646a40);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B646a43:{NFSU2_TR(0x646a43);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B646a46:{NFSU2_TR(0x646a46);
__builtin_memmove((R+4),(R+24),4);
}
B646a48:{NFSU2_TR(0x646a48);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
w4(U+4,u32(0x2ull));
s4(u32(r4(U+0)),r4(U+4));
}
B646a4f:{NFSU2_TR(0x646a4f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x646a54ull));
TAIL_STATIC(0x645668u,645);
}
B646a54:L646a54:{c.instructions+=1;NFSU2_TR(0x646a54);
{goto L646ab9;}
}
B646a56:L646a56:{c.instructions+=7;NFSU2_TR(0x646a56);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B646a59:{NFSU2_TR(0x646a59);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B646a5a:{NFSU2_TR(0x646a5a);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B646a5b:{NFSU2_TR(0x646a5b);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B646a5e:{NFSU2_TR(0x646a5e);
__builtin_memmove((R+4),(R+24),4);
}
B646a60:{NFSU2_TR(0x646a60);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
w4(U+4,u32(0x2ull));
s4(u32(r4(U+0)),r4(U+4));
}
B646a67:{NFSU2_TR(0x646a67);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x646a6cull));
TAIL_STATIC(0x6452dbu,645);
}
B646a6c:L646a6c:{c.instructions+=3;NFSU2_TR(0x646a6c);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B646a6f:{NFSU2_TR(0x646a6f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B646a76:{NFSU2_TR(0x646a76);
{goto L646abc;}
}
B646a78:L646a78:{c.instructions+=4;NFSU2_TR(0x646a78);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B646a7b:{NFSU2_TR(0x646a7b);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B646a7d:{NFSU2_TR(0x646a7d);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B646a80:{NFSU2_TR(0x646a80);
__builtin_memmove((R+0),(R+518),1);
}
B646a83:L646a83:{c.instructions+=2;NFSU2_TR(0x646a83);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B646a86:{NFSU2_TR(0x646a86);
{goto L646be4;}
}
B646a8b:L646a8b:{c.instructions+=3;NFSU2_TR(0x646a8b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B646a8e:{NFSU2_TR(0x646a8e);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(0-u32(r4(U+4))));
s4(u32(r4(U+0)),r4(U+4));
}
B646a91:{NFSU2_TR(0x646a91);
{goto L646be4;}
}
B646a96:L646a96:{c.instructions+=5;NFSU2_TR(0x646a96);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B646a99:{NFSU2_TR(0x646a99);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B646a9c:{NFSU2_TR(0x646a9c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B646a9f:{NFSU2_TR(0x646a9f);
u8 U[32];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x18ull))));
w8(U+8,u64(s64(s32(r4(R+0)))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+16,u64(s64(s32(r4(U+4)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+0,u32(r8(U+24)));
}
B646aa3:{NFSU2_TR(0x646aa3);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x646a83u);}goto L646a83;}
}
B646aa5:L646aa5:{c.instructions+=5;NFSU2_TR(0x646aa5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B646aa8:{NFSU2_TR(0x646aa8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B646aab:{NFSU2_TR(0x646aab);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B646aad:{NFSU2_TR(0x646aad);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B646ab0:{NFSU2_TR(0x646ab0);
if(r1(R+518)){{goto L646ac3;}}
}
B646ab2:L646ab2:{c.instructions+=3;NFSU2_TR(0x646ab2);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B646ab5:{NFSU2_TR(0x646ab5);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B646ab7:{NFSU2_TR(0x646ab7);
u8 U[56];
w8(U+0,u64(r4(R+4)));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{u64 d_=u64(r8(U+0));if(__builtin_expect(!d_,0))NFSU2_FAULT("integer division by zero",0x646ab7);w8(U+40,u64(u64(r8(U+32))/d_));}
w4(R+0,u32(r8(U+40)));
{u64 d_=u64(r8(U+0));if(__builtin_expect(!d_,0))NFSU2_FAULT("integer division by zero",0x646ab7);w8(U+48,u64(u64(r8(U+32))%d_));}
w4(R+8,u32(r8(U+48)));
}
B646ab9:L646ab9:{c.instructions+=1;NFSU2_TR(0x646ab9);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B646abc:L646abc:{c.instructions+=2;NFSU2_TR(0x646abc);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B646abe:{NFSU2_TR(0x646abe);
{goto L646be4;}
}
B646ac3:L646ac3:{c.instructions+=7;NFSU2_TR(0x646ac3);
u8 U[4];
w4(U+0,u32(0x7abab4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B646ac8:{NFSU2_TR(0x646ac8);
u8 U[4];
w4(U+0,u32(0x5dfull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B646acd:{NFSU2_TR(0x646acd);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x278ull))));
__builtin_memmove((R+0),(U+0),4);
}
B646ad3:{NFSU2_TR(0x646ad3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B646ad4:{NFSU2_TR(0x646ad4);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((R+0),(U+0),4);
}
B646ad7:{NFSU2_TR(0x646ad7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B646ad8:{NFSU2_TR(0x646ad8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x646addull));
TAIL_STATIC(0x64307cu,643);
}
B646add:L646add:{c.instructions+=3;NFSU2_TR(0x646add);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B646ae0:{NFSU2_TR(0x646ae0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B646ae7:{NFSU2_TR(0x646ae7);
{goto L646be4;}
}
B646aec:L646aec:{c.instructions+=5;NFSU2_TR(0x646aec);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B646aef:{NFSU2_TR(0x646aef);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B646af2:{NFSU2_TR(0x646af2);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B646af5:{NFSU2_TR(0x646af5);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+0))));
s4(u32(r4(U+0)),r4(U+4));
}
B646af8:{NFSU2_TR(0x646af8);
{goto L646be4;}
}
B646afd:L646afd:{c.instructions+=5;NFSU2_TR(0x646afd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B646b00:{NFSU2_TR(0x646b00);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B646b03:{NFSU2_TR(0x646b03);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B646b06:{NFSU2_TR(0x646b06);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(r4(R+0))));
s4(u32(r4(U+0)),r4(U+4));
}
B646b09:{NFSU2_TR(0x646b09);
{goto L646be4;}
}
B646b0e:L646b0e:{c.instructions+=5;NFSU2_TR(0x646b0e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B646b11:{NFSU2_TR(0x646b11);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B646b14:{NFSU2_TR(0x646b14);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B646b17:{NFSU2_TR(0x646b17);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B646b1a:{NFSU2_TR(0x646b1a);
{goto L646b28;}
}
B646b1c:L646b1c:{c.instructions+=4;NFSU2_TR(0x646b1c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B646b1f:{NFSU2_TR(0x646b1f);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B646b22:{NFSU2_TR(0x646b22);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B646b25:{NFSU2_TR(0x646b25);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+0))));
}
B646b28:L646b28:{c.instructions+=3;NFSU2_TR(0x646b28);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(R+0))));
w4(R+0,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B646b2a:{NFSU2_TR(0x646b2a);
w4(R+0,u32(0-u32(r4(R+0))));
}
B646b2c:{NFSU2_TR(0x646b2c);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x646a83u);}goto L646a83;}
}
B646b31:L646b31:{c.instructions+=4;NFSU2_TR(0x646b31);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B646b34:{NFSU2_TR(0x646b34);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B646b37:{NFSU2_TR(0x646b37);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B646b3a:{NFSU2_TR(0x646b3a);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+0))));
}
B646b3d:L646b3d:{c.instructions+=2;NFSU2_TR(0x646b3d);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(R+0))));
w4(R+0,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B646b3f:{NFSU2_TR(0x646b3f);
{goto L646b5f;}
}
B646b41:L646b41:{c.instructions+=5;NFSU2_TR(0x646b41);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B646b44:{NFSU2_TR(0x646b44);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B646b47:{NFSU2_TR(0x646b47);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B646b4a:{NFSU2_TR(0x646b4a);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B646b4d:{NFSU2_TR(0x646b4d);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x646b3du);}goto L646b3d;}
}
B646b4f:L646b4f:{c.instructions+=6;NFSU2_TR(0x646b4f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B646b52:{NFSU2_TR(0x646b52);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B646b55:{NFSU2_TR(0x646b55);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B646b58:{NFSU2_TR(0x646b58);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))-u32(r4(U+4))));
}
B646b5b:{NFSU2_TR(0x646b5b);
w1(R+512,u8((r4(R+0))!=(u32(0x0ull))));
w4(R+0,u32(0-u32(r4(R+0))));
}
B646b5d:{NFSU2_TR(0x646b5d);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(R+0))));
w4(R+0,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B646b5f:L646b5f:{c.instructions+=2;NFSU2_TR(0x646b5f);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B646b60:{NFSU2_TR(0x646b60);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x646a83u);}goto L646a83;}
}
B646b65:L646b65:{c.instructions+=8;NFSU2_TR(0x646b65);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B646b68:{NFSU2_TR(0x646b68);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B646b6b:{NFSU2_TR(0x646b6b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B646b6e:{NFSU2_TR(0x646b6e);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B646b70:{NFSU2_TR(0x646b70);
u8 U[16];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B646b73:{NFSU2_TR(0x646b73);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+4),(U+0),1);
}
B646b76:{NFSU2_TR(0x646b76);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B646b79:{NFSU2_TR(0x646b79);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x646abcu);}goto L646abc;}
}
B646b7e:L646b7e:{c.instructions+=3;NFSU2_TR(0x646b7e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B646b81:{NFSU2_TR(0x646b81);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B646b84:{NFSU2_TR(0x646b84);
if(r1(R+518)){{goto L646ba0;}}
}
B646b86:L646b86:{c.instructions+=3;NFSU2_TR(0x646b86);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B646b89:{NFSU2_TR(0x646b89);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B646b8c:{NFSU2_TR(0x646b8c);
if(r1(R+518)){{goto L646ba0;}}
}
B646b8e:L646b8e:{c.instructions+=3;NFSU2_TR(0x646b8e);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B646b90:{NFSU2_TR(0x646b90);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B646b91:{NFSU2_TR(0x646b91);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x646a83u);}goto L646a83;}
}
B646b96:L646b96:{c.instructions+=3;NFSU2_TR(0x646b96);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B646b99:{NFSU2_TR(0x646b99);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B646b9c:{NFSU2_TR(0x646b9c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x646b8eu);}goto L646b8e;}}
}
B646b9e:L646b9e:{c.instructions+=1;NFSU2_TR(0x646b9e);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x646b86u);}goto L646b86;}
}
B646ba0:L646ba0:{c.instructions+=2;NFSU2_TR(0x646ba0);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B646ba2:{NFSU2_TR(0x646ba2);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x646a83u);}goto L646a83;}
}
B646ba7:L646ba7:{c.instructions+=4;NFSU2_TR(0x646ba7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B646baa:{NFSU2_TR(0x646baa);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B646bad:{NFSU2_TR(0x646bad);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B646bb0:{NFSU2_TR(0x646bb0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L646bb5;}}
}
B646bb2:L646bb2:{c.instructions+=1;NFSU2_TR(0x646bb2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B646bb5:L646bb5:{c.instructions+=2;NFSU2_TR(0x646bb5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B646bb8:{NFSU2_TR(0x646bb8);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x646a83u);}goto L646a83;}
}
B646bbd:L646bbd:{c.instructions+=2;NFSU2_TR(0x646bbd);
u8 U[4];
w4(U+0,u32(0x30ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B646bbf:{NFSU2_TR(0x646bbf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x646bc4ull));
TAIL_STATIC(0x645362u,645);
}
B646bc4:L646bc4:{c.instructions+=2;NFSU2_TR(0x646bc4);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B646bc6:{NFSU2_TR(0x646bc6);
if(r1(R+518)){{goto L646bda;}}
}
B646bc8:L646bc8:{c.instructions+=4;NFSU2_TR(0x646bc8);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x278ull))));
__builtin_memmove((R+4),(U+0),4);
}
B646bce:{NFSU2_TR(0x646bce);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B646bcf:{NFSU2_TR(0x646bcf);
__builtin_memmove((R+4),(R+0),4);
}
B646bd1:{NFSU2_TR(0x646bd1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x646bd6ull));
TAIL_STATIC(0x67269fu,672);
}
B646bd6:L646bd6:{c.instructions+=2;NFSU2_TR(0x646bd6);
__builtin_memmove((R+28),(R+0),4);
}
B646bd8:{NFSU2_TR(0x646bd8);
{goto L646bdc;}
}
B646bda:L646bda:{c.instructions+=1;NFSU2_TR(0x646bda);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B646bdc:L646bdc:{c.instructions+=3;NFSU2_TR(0x646bdc);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B646bdd:{NFSU2_TR(0x646bdd);
__builtin_memmove((R+4),(R+24),4);
}
B646bdf:{NFSU2_TR(0x646bdf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x646be4ull));
TAIL_STATIC(0x6453e2u,645);
}
B646be4:L646be4:{c.instructions+=2;NFSU2_TR(0x646be4);
u8 U[22];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
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
B646be7:{NFSU2_TR(0x646be7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L646c02;}}
}
B646be9:L646be9:{c.instructions+=3;NFSU2_TR(0x646be9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B646bec:{NFSU2_TR(0x646bec);
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
B646bee:{NFSU2_TR(0x646bee);
if(r1(R+518)){{goto L646c09;}}
}
B646bf0:L646bf0:{c.instructions+=5;NFSU2_TR(0x646bf0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B646bf3:{NFSU2_TR(0x646bf3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B646bf6:{NFSU2_TR(0x646bf6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B646bf9:{NFSU2_TR(0x646bf9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B646bfc:{NFSU2_TR(0x646bfc);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B646bff:L646bff:{c.instructions+=1;NFSU2_TR(0x646bff);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B646c02:L646c02:{c.instructions+=5;NFSU2_TR(0x646c02);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B646c03:{NFSU2_TR(0x646c03);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B646c04:{NFSU2_TR(0x646c04);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B646c05:{NFSU2_TR(0x646c05);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B646c06:{NFSU2_TR(0x646c06);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B646c09:L646c09:{c.instructions+=2;NFSU2_TR(0x646c09);
u8 U[4];
w4(U+0,u32(0x14ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B646c0b:{NFSU2_TR(0x646c0b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x646c10ull));
TAIL_STATIC(0x645362u,645);
}
B646c10:L646c10:{c.instructions+=2;NFSU2_TR(0x646c10);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B646c12:{NFSU2_TR(0x646c12);
if(r1(R+518)){{goto L646c26;}}
}
B646c14:L646c14:{c.instructions+=5;NFSU2_TR(0x646c14);
u8 U[4];
w4(U+0,u32(0x7abaacull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B646c19:{NFSU2_TR(0x646c19);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B646c1c:{NFSU2_TR(0x646c1c);
__builtin_memmove((R+4),(R+0),4);
}
B646c1e:{NFSU2_TR(0x646c1e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B646c1f:{NFSU2_TR(0x646c1f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x646c24ull));
TAIL_STATIC(0x672498u,672);
}
B646c24:L646c24:{c.instructions+=1;NFSU2_TR(0x646c24);
{goto L646c28;}
}
B646c26:L646c26:{c.instructions+=1;NFSU2_TR(0x646c26);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B646c28:L646c28:{c.instructions+=2;NFSU2_TR(0x646c28);
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
B646c2a:{NFSU2_TR(0x646c2a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x646bffu);}goto L646bff;}}
}
B646c2c:L646c2c:{c.instructions+=1;NFSU2_TR(0x646c2c);
u8 U[4];
w4(U+0,u32(0x7aba8cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B646c31:L646c31:{c.instructions+=6;NFSU2_TR(0x646c31);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B646c32:{NFSU2_TR(0x646c32);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x278ull))));
__builtin_memmove((R+0),(U+0),4);
}
B646c38:{NFSU2_TR(0x646c38);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B646c39:{NFSU2_TR(0x646c39);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((R+0),(U+0),4);
}
B646c3c:{NFSU2_TR(0x646c3c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B646c3d:{NFSU2_TR(0x646c3d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x646c42ull));
TAIL_STATIC(0x64307cu,643);
}
B646c42:L646c42:{c.instructions+=3;NFSU2_TR(0x646c42);
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
B646c45:{NFSU2_TR(0x646c45);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B646c4c:{NFSU2_TR(0x646c4c);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x646c02u);}goto L646c02;}
}
B646d0a:L646d0a:{c.instructions+=12;NFSU2_TR(0x646d0a);
__builtin_memmove((R+28),(R+28),4);
}
B646d0c:{NFSU2_TR(0x646d0c);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B646d0d:{NFSU2_TR(0x646d0d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B646d0e:{NFSU2_TR(0x646d0e);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B646d10:{NFSU2_TR(0x646d10);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B646d11:{NFSU2_TR(0x646d11);
__builtin_memmove(gp(0x8a50e8),(R+24),4);
}
B646d17:{NFSU2_TR(0x646d17);
__builtin_memmove(gp(0x8a50e4),(R+24),4);
}
B646d1d:{NFSU2_TR(0x646d1d);
s4(0x8a50dc,u32(0x8a4ce8ull));
}
B646d27:{NFSU2_TR(0x646d27);
s4(0x8a50d8,u32(0x8a4518ull));
}
B646d31:{NFSU2_TR(0x646d31);
__builtin_memmove(gp(0x8a4ce8),(R+24),2);
}
B646d38:{NFSU2_TR(0x646d38);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0xffffffffull))));
}
B646d3b:{NFSU2_TR(0x646d3b);
__builtin_memmove(gp(0x8a50e0),(R+0),4);
}
B646d40:L646d40:{c.instructions+=3;NFSU2_TR(0x646d40);
u8 U[10];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x2ull))));
w4(U+4,u32(u32(u32(0x804180ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),2);
w4(R+4,u32(s32(s16(r2(U+8)))));
}
B646d48:{NFSU2_TR(0x646d48);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B646d4a:{NFSU2_TR(0x646d4a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L646e27;}}
}
B646d50:L646d50:{c.instructions+=2;NFSU2_TR(0x646d50);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B646d52:{NFSU2_TR(0x646d52);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L646d6f;}}
}
B646d54:L646d54:{c.instructions+=2;NFSU2_TR(0x646d54);
__builtin_memmove((R+4),gp(0x8a5110),4);
}
B646d5a:{NFSU2_TR(0x646d5a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x646d5full));
TAIL_STATIC(0x645f77u,645);
}
B646d5f:L646d5f:{c.instructions+=3;NFSU2_TR(0x646d5f);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B646d61:{NFSU2_TR(0x646d61);
__builtin_memmove(gp(0x8a50e0),(R+0),4);
}
B646d66:{NFSU2_TR(0x646d66);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L646d6f;}}
}
B646d68:L646d68:{c.instructions+=2;NFSU2_TR(0x646d68);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B646d6a:{NFSU2_TR(0x646d6a);
__builtin_memmove(gp(0x8a50e0),(R+0),4);
}
B646d6f:L646d6f:{c.instructions+=3;NFSU2_TR(0x646d6f);
u8 U[10];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x2ull))));
w4(U+4,u32(u32(u32(0x804240ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),2);
w4(R+4,u32(s32(s16(r2(U+8)))));
}
B646d77:{NFSU2_TR(0x646d77);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B646d79:{NFSU2_TR(0x646d79);
if(r1(R+518)){{goto L646dea;}}
}
B646d7b:L646d7b:{c.instructions+=2;NFSU2_TR(0x646d7b);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+0))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
}
B646d7d:{NFSU2_TR(0x646d7d);
if(r1(R+519)){{goto L646dea;}}
}
B646d7f:L646d7f:{c.instructions+=3;NFSU2_TR(0x646d7f);
w4(R+28,u32(0x171ull));
}
B646d84:{NFSU2_TR(0x646d84);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B646d86:{NFSU2_TR(0x646d86);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L646def;}}
}
B646d88:L646d88:{c.instructions+=4;NFSU2_TR(0x646d88);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+4))));
}
B646d8a:{NFSU2_TR(0x646d8a);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x804688ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(s32(s16(r2(U+4)))));
}
B646d91:{NFSU2_TR(0x646d91);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B646d93:{NFSU2_TR(0x646d93);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L646def;}}
}
B646d95:L646d95:{c.instructions+=3;NFSU2_TR(0x646d95);
__builtin_memmove((R+0),gp(0x8a50dc),4);
}
B646d9a:{NFSU2_TR(0x646d9a);
w1(R+512,u8((r4(R+0))<(u32(0x8a50ceull))));
}
B646d9f:{NFSU2_TR(0x646d9f);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){TAIL_STATIC(0x647159u,647);}
}
B646da5:L646da5:{c.instructions+=13;NFSU2_TR(0x646da5);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8043a0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+24,u32(s32(s16(r2(U+4)))));
}
B646dac:{NFSU2_TR(0x646dac);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B646dad:{NFSU2_TR(0x646dad);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B646dae:{NFSU2_TR(0x646dae);
__builtin_memmove(gp(0x8a50dc),(R+0),4);
}
B646db3:{NFSU2_TR(0x646db3);
u8 U[2];
__builtin_memmove((U+0),(R+24),2);
s2(u32(r4(R+0)),r2(U+0));
}
B646db6:{NFSU2_TR(0x646db6);
s4(0x8a50d8,u32(u32(m4(0x8a50d8))+u32(u32(0x4ull))));
}
B646dbd:{NFSU2_TR(0x646dbd);
__builtin_memmove((R+0),gp(0x8a50d0),4);
}
B646dc2:{NFSU2_TR(0x646dc2);
__builtin_memmove((R+4),gp(0x8a50d8),4);
}
B646dc8:{NFSU2_TR(0x646dc8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B646dca:{NFSU2_TR(0x646dca);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0xffffffffull))));
}
B646dcd:{NFSU2_TR(0x646dcd);
u8 U[8];
__builtin_memmove((U+0),gp(0x8a50e4),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x0ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x0ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B646dd4:{NFSU2_TR(0x646dd4);
__builtin_memmove(gp(0x8a50e0),(R+0),4);
}
B646dd9:{NFSU2_TR(0x646dd9);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x646d40u);}goto L646d40;}}
}
B646ddf:L646ddf:{c.instructions+=2;NFSU2_TR(0x646ddf);
s4(0x8a50e4,u32(u32(m4(0x8a50e4))-u32(u32(0x1ull))));
}
B646de5:{NFSU2_TR(0x646de5);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x646d40u);}goto L646d40;}
}
B646dea:L646dea:{c.instructions+=1;NFSU2_TR(0x646dea);
w4(R+28,u32(0x171ull));
}
B646def:L646def:{c.instructions+=3;NFSU2_TR(0x646def);
u8 U[10];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x2ull))));
w4(U+4,u32(u32(u32(0x8042e0ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),2);
w4(R+4,u32(s32(s16(r2(U+8)))));
}
B646df7:{NFSU2_TR(0x646df7);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B646df9:{NFSU2_TR(0x646df9);
if(r1(R+518)){TAIL_STATIC(0x647097u,647);}
}
B646dff:L646dff:{c.instructions+=2;NFSU2_TR(0x646dff);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+0))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
}
B646e01:{NFSU2_TR(0x646e01);
if(r1(R+519)){TAIL_STATIC(0x647097u,647);}
}
B646e07:L646e07:{c.instructions+=2;NFSU2_TR(0x646e07);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B646e09:{NFSU2_TR(0x646e09);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){TAIL_STATIC(0x647097u,647);}
}
B646e0f:L646e0f:{c.instructions+=4;NFSU2_TR(0x646e0f);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+4))));
}
B646e11:{NFSU2_TR(0x646e11);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x804688ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(s32(s16(r2(U+4)))));
}
B646e18:{NFSU2_TR(0x646e18);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B646e1a:{NFSU2_TR(0x646e1a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x647097u,647);}
}
B646e20:L646e20:{c.instructions+=1;NFSU2_TR(0x646e20);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8043a0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(s32(s16(r2(U+4)))));
}
B646e27:L646e27:{c.instructions+=11;NFSU2_TR(0x646e27);
__builtin_memmove((R+0),gp(0x8a50d8),4);
}
B646e2c:{NFSU2_TR(0x646e2c);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+28),(U+4),4);
}
B646e2f:{NFSU2_TR(0x646e2f);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x804120ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+24,u32(s32(s16(r2(U+4)))));
}
B646e36:{NFSU2_TR(0x646e36);
__builtin_memmove((R+12),(R+24),4);
}
B646e38:{NFSU2_TR(0x646e38);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+12,shl<u32>(r4(R+12),u64(r4(U+0))));
}
B646e3b:{NFSU2_TR(0x646e3b);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+12))));
}
B646e3d:{NFSU2_TR(0x646e3d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B646e40:{NFSU2_TR(0x646e40);
__builtin_memmove(gp(0x8a50d4),(R+0),4);
}
B646e45:{NFSU2_TR(0x646e45);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xffffffffull))));
__builtin_memmove((R+0),(U+0),4);
}
B646e48:{NFSU2_TR(0x646e48);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0x2eull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x2eull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x2eull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B646e4b:{NFSU2_TR(0x646e4b);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L646fc6;}}
}
B646e51:L646e51:{c.instructions+=1;NFSU2_TR(0x646e51);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x647172ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B646e58:L646e58:{c.instructions+=3;NFSU2_TR(0x646e58);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B646e5a:{NFSU2_TR(0x646e5a);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B646e5c:{NFSU2_TR(0x646e5c);
{goto L646fbb;}
}
B646e61:L646e61:{c.instructions+=3;NFSU2_TR(0x646e61);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B646e63:{NFSU2_TR(0x646e63);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B646e65:{NFSU2_TR(0x646e65);
{goto L646fbb;}
}
B646e6a:L646e6a:{c.instructions+=3;NFSU2_TR(0x646e6a);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B646e6c:{NFSU2_TR(0x646e6c);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B646e6e:{NFSU2_TR(0x646e6e);
{goto L646fbb;}
}
B646e73:L646e73:{c.instructions+=3;NFSU2_TR(0x646e73);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B646e75:{NFSU2_TR(0x646e75);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B646e77:{NFSU2_TR(0x646e77);
{goto L646fbb;}
}
B646e7c:L646e7c:{c.instructions+=3;NFSU2_TR(0x646e7c);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B646e7e:{NFSU2_TR(0x646e7e);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B646e80:{NFSU2_TR(0x646e80);
{goto L646fbb;}
}
B646e85:L646e85:{c.instructions+=3;NFSU2_TR(0x646e85);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B646e87:{NFSU2_TR(0x646e87);
u8 U[4];
w4(U+0,u32(0x5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B646e89:{NFSU2_TR(0x646e89);
{goto L646fbb;}
}
B646e8e:L646e8e:{c.instructions+=3;NFSU2_TR(0x646e8e);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B646e90:{NFSU2_TR(0x646e90);
u8 U[4];
w4(U+0,u32(0x6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B646e92:{NFSU2_TR(0x646e92);
{goto L646fbb;}
}
B646e97:L646e97:{c.instructions+=3;NFSU2_TR(0x646e97);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B646e99:{NFSU2_TR(0x646e99);
u8 U[4];
w4(U+0,u32(0x7ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B646e9b:{NFSU2_TR(0x646e9b);
{goto L646fbb;}
}
B646ea0:L646ea0:{c.instructions+=3;NFSU2_TR(0x646ea0);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B646ea2:{NFSU2_TR(0x646ea2);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B646ea4:{NFSU2_TR(0x646ea4);
{goto L646fbb;}
}
B646ea9:L646ea9:{c.instructions+=3;NFSU2_TR(0x646ea9);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B646eab:{NFSU2_TR(0x646eab);
u8 U[4];
w4(U+0,u32(0x9ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B646ead:{NFSU2_TR(0x646ead);
{goto L646fbb;}
}
B646eb2:L646eb2:{c.instructions+=3;NFSU2_TR(0x646eb2);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B646eb4:{NFSU2_TR(0x646eb4);
u8 U[4];
w4(U+0,u32(0xaull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B646eb6:{NFSU2_TR(0x646eb6);
{goto L646fbb;}
}
B646ebb:L646ebb:{c.instructions+=3;NFSU2_TR(0x646ebb);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B646ebd:{NFSU2_TR(0x646ebd);
u8 U[4];
w4(U+0,u32(0xbull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B646ebf:{NFSU2_TR(0x646ebf);
{goto L646fbb;}
}
B646ec4:L646ec4:{c.instructions+=3;NFSU2_TR(0x646ec4);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B646ec6:{NFSU2_TR(0x646ec6);
u8 U[4];
w4(U+0,u32(0xcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B646ec8:{NFSU2_TR(0x646ec8);
{goto L646fbb;}
}
B646ecd:L646ecd:{c.instructions+=3;NFSU2_TR(0x646ecd);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B646ecf:{NFSU2_TR(0x646ecf);
u8 U[4];
w4(U+0,u32(0xdull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B646ed1:{NFSU2_TR(0x646ed1);
{goto L646fbb;}
}
B646ed6:L646ed6:{c.instructions+=3;NFSU2_TR(0x646ed6);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B646ed8:{NFSU2_TR(0x646ed8);
u8 U[4];
w4(U+0,u32(0xeull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B646eda:{NFSU2_TR(0x646eda);
{goto L646fbb;}
}
B646edf:L646edf:{c.instructions+=3;NFSU2_TR(0x646edf);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B646ee1:{NFSU2_TR(0x646ee1);
u8 U[4];
w4(U+0,u32(0xfull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B646ee3:{NFSU2_TR(0x646ee3);
{goto L646fbb;}
}
B646ee8:L646ee8:{c.instructions+=3;NFSU2_TR(0x646ee8);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B646eea:{NFSU2_TR(0x646eea);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B646eec:{NFSU2_TR(0x646eec);
{goto L646fbb;}
}
B646ef1:L646ef1:{c.instructions+=3;NFSU2_TR(0x646ef1);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B646ef3:{NFSU2_TR(0x646ef3);
u8 U[4];
w4(U+0,u32(0x11ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B646ef5:{NFSU2_TR(0x646ef5);
{goto L646fbb;}
}
B646efa:L646efa:{c.instructions+=3;NFSU2_TR(0x646efa);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B646efc:{NFSU2_TR(0x646efc);
u8 U[4];
w4(U+0,u32(0x12ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B646efe:{NFSU2_TR(0x646efe);
{goto L646fbb;}
}
B646f03:L646f03:{c.instructions+=3;NFSU2_TR(0x646f03);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B646f05:{NFSU2_TR(0x646f05);
u8 U[4];
w4(U+0,u32(0x13ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B646f07:{NFSU2_TR(0x646f07);
{goto L646fbb;}
}
B646f0c:L646f0c:{c.instructions+=3;NFSU2_TR(0x646f0c);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B646f0e:{NFSU2_TR(0x646f0e);
u8 U[4];
w4(U+0,u32(0x14ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B646f10:{NFSU2_TR(0x646f10);
{goto L646fbb;}
}
B646f15:L646f15:{c.instructions+=3;NFSU2_TR(0x646f15);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B646f17:{NFSU2_TR(0x646f17);
u8 U[4];
w4(U+0,u32(0x15ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B646f19:{NFSU2_TR(0x646f19);
{goto L646fbb;}
}
B646f1e:L646f1e:{c.instructions+=3;NFSU2_TR(0x646f1e);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B646f20:{NFSU2_TR(0x646f20);
u8 U[4];
w4(U+0,u32(0x16ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B646f22:{NFSU2_TR(0x646f22);
{goto L646fbb;}
}
B646f27:L646f27:{c.instructions+=3;NFSU2_TR(0x646f27);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B646f29:{NFSU2_TR(0x646f29);
u8 U[4];
w4(U+0,u32(0x17ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B646f2b:{NFSU2_TR(0x646f2b);
{goto L646fbb;}
}
B646f30:L646f30:{c.instructions+=3;NFSU2_TR(0x646f30);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B646f32:{NFSU2_TR(0x646f32);
u8 U[4];
w4(U+0,u32(0x18ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B646f34:{NFSU2_TR(0x646f34);
{goto L646fbb;}
}
B646f39:L646f39:{c.instructions+=3;NFSU2_TR(0x646f39);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B646f3b:{NFSU2_TR(0x646f3b);
u8 U[4];
w4(U+0,u32(0x19ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B646f3d:{NFSU2_TR(0x646f3d);
{goto L646fbb;}
}
B646f3f:L646f3f:{c.instructions+=3;NFSU2_TR(0x646f3f);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B646f41:{NFSU2_TR(0x646f41);
u8 U[4];
w4(U+0,u32(0x1aull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B646f43:{NFSU2_TR(0x646f43);
{goto L646fbb;}
}
B646f45:L646f45:{c.instructions+=3;NFSU2_TR(0x646f45);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B646f47:{NFSU2_TR(0x646f47);
u8 U[4];
w4(U+0,u32(0x1bull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B646f49:{NFSU2_TR(0x646f49);
{goto L646fbb;}
}
B646f4b:L646f4b:{c.instructions+=3;NFSU2_TR(0x646f4b);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B646f4d:{NFSU2_TR(0x646f4d);
u8 U[4];
w4(U+0,u32(0x1cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B646f4f:{NFSU2_TR(0x646f4f);
{goto L646fbb;}
}
B646f51:L646f51:{c.instructions+=3;NFSU2_TR(0x646f51);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B646f53:{NFSU2_TR(0x646f53);
u8 U[4];
w4(U+0,u32(0x1dull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B646f55:{NFSU2_TR(0x646f55);
{goto L646fbb;}
}
B646f57:L646f57:{c.instructions+=3;NFSU2_TR(0x646f57);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B646f59:{NFSU2_TR(0x646f59);
u8 U[4];
w4(U+0,u32(0x1eull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B646f5b:{NFSU2_TR(0x646f5b);
{goto L646fbb;}
}
B646f5d:L646f5d:{c.instructions+=3;NFSU2_TR(0x646f5d);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B646f5f:{NFSU2_TR(0x646f5f);
u8 U[4];
w4(U+0,u32(0x1full));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B646f61:{NFSU2_TR(0x646f61);
{goto L646fbb;}
}
B646f63:L646f63:{c.instructions+=3;NFSU2_TR(0x646f63);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B646f65:{NFSU2_TR(0x646f65);
u8 U[4];
w4(U+0,u32(0x20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B646f67:{NFSU2_TR(0x646f67);
{goto L646fbb;}
}
B646f69:L646f69:{c.instructions+=3;NFSU2_TR(0x646f69);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B646f6b:{NFSU2_TR(0x646f6b);
u8 U[4];
w4(U+0,u32(0x21ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B646f6d:{NFSU2_TR(0x646f6d);
{goto L646fbb;}
}
B646f6f:L646f6f:{c.instructions+=3;NFSU2_TR(0x646f6f);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B646f71:{NFSU2_TR(0x646f71);
u8 U[4];
w4(U+0,u32(0x22ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B646f73:{NFSU2_TR(0x646f73);
{goto L646fbb;}
}
B646f75:L646f75:{c.instructions+=3;NFSU2_TR(0x646f75);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B646f77:{NFSU2_TR(0x646f77);
u8 U[4];
w4(U+0,u32(0x23ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B646f79:{NFSU2_TR(0x646f79);
{goto L646fbb;}
}
B646f7b:L646f7b:{c.instructions+=3;NFSU2_TR(0x646f7b);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B646f7d:{NFSU2_TR(0x646f7d);
u8 U[4];
w4(U+0,u32(0x24ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B646f7f:{NFSU2_TR(0x646f7f);
{goto L646fbb;}
}
B646f81:L646f81:{c.instructions+=3;NFSU2_TR(0x646f81);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B646f83:{NFSU2_TR(0x646f83);
u8 U[4];
w4(U+0,u32(0x25ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B646f85:{NFSU2_TR(0x646f85);
{goto L646fbb;}
}
B646f87:L646f87:{c.instructions+=3;NFSU2_TR(0x646f87);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B646f89:{NFSU2_TR(0x646f89);
u8 U[4];
w4(U+0,u32(0x26ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B646f8b:{NFSU2_TR(0x646f8b);
{goto L646fbb;}
}
B646f8d:L646f8d:{c.instructions+=3;NFSU2_TR(0x646f8d);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B646f8f:{NFSU2_TR(0x646f8f);
u8 U[4];
w4(U+0,u32(0x27ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B646f91:{NFSU2_TR(0x646f91);
{goto L646fbb;}
}
B646f93:L646f93:{c.instructions+=3;NFSU2_TR(0x646f93);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B646f95:{NFSU2_TR(0x646f95);
u8 U[4];
w4(U+0,u32(0x28ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B646f97:{NFSU2_TR(0x646f97);
{goto L646fbb;}
}
B646f99:L646f99:{c.instructions+=3;NFSU2_TR(0x646f99);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B646f9b:{NFSU2_TR(0x646f9b);
u8 U[4];
w4(U+0,u32(0x29ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B646f9d:{NFSU2_TR(0x646f9d);
{goto L646fbb;}
}
B646f9f:L646f9f:{c.instructions+=3;NFSU2_TR(0x646f9f);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B646fa1:{NFSU2_TR(0x646fa1);
u8 U[4];
w4(U+0,u32(0x2aull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B646fa3:{NFSU2_TR(0x646fa3);
{goto L646fbb;}
}
B646fa5:L646fa5:{c.instructions+=3;NFSU2_TR(0x646fa5);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B646fa7:{NFSU2_TR(0x646fa7);
u8 U[4];
w4(U+0,u32(0x2bull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B646fa9:{NFSU2_TR(0x646fa9);
{goto L646fbb;}
}
B646fab:L646fab:{c.instructions+=3;NFSU2_TR(0x646fab);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B646fad:{NFSU2_TR(0x646fad);
u8 U[4];
w4(U+0,u32(0x2cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B646faf:{NFSU2_TR(0x646faf);
{goto L646fbb;}
}
B646fb1:L646fb1:{c.instructions+=3;NFSU2_TR(0x646fb1);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B646fb3:{NFSU2_TR(0x646fb3);
u8 U[4];
w4(U+0,u32(0x2dull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B646fb5:{NFSU2_TR(0x646fb5);
{goto L646fbb;}
}
B646fb7:L646fb7:{c.instructions+=2;NFSU2_TR(0x646fb7);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B646fb9:{NFSU2_TR(0x646fb9);
u8 U[4];
w4(U+0,u32(0x2eull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B646fbb:L646fbb:{c.instructions+=2;NFSU2_TR(0x646fbb);
__builtin_memmove((R+4),gp(0x8a5110),4);
}
B646fc1:{NFSU2_TR(0x646fc1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x646fc6ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6468eau);}goto L6468ea;}
}
B646fc6:L646fc6:{c.instructions+=9;NFSU2_TR(0x646fc6);
__builtin_memmove((R+0),gp(0x8a50dc),4);
}
B646fcb:{NFSU2_TR(0x646fcb);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8040c0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(s32(s16(r2(U+4)))));
}
B646fd2:{NFSU2_TR(0x646fd2);
w4(R+24,u32(0-u32(r4(R+24))));
}
B646fd4:{NFSU2_TR(0x646fd4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B646fd7:{NFSU2_TR(0x646fd7);
__builtin_memmove(gp(0x8a50dc),(R+0),4);
}
B646fdc:{NFSU2_TR(0x646fdc);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+0))),2);
w4(R+8,u32(s32(s16(r2(U+0)))));
}
B646fdf:{NFSU2_TR(0x646fdf);
s4(0x8a50d8,u32(u32(m4(0x8a50d8))-u32(r4(R+12))));
}
B646fe5:{NFSU2_TR(0x646fe5);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B646fe7:{NFSU2_TR(0x646fe7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x647041u,647);}
}
B646fe9:L646fe9:{c.instructions+=2;NFSU2_TR(0x646fe9);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B646feb:{NFSU2_TR(0x646feb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x647041u,647);}
}
B646fed:L646fed:{c.instructions+=7;NFSU2_TR(0x646fed);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B646fee:{NFSU2_TR(0x646fee);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B646fef:{NFSU2_TR(0x646fef);
u8 U[4];
w4(U+0,u32(0xfull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B646ff1:{NFSU2_TR(0x646ff1);
__builtin_memmove(gp(0x8a50dc),(R+0),4);
}
B646ff6:{NFSU2_TR(0x646ff6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B646ff7:{NFSU2_TR(0x646ff7);
u8 U[2];
__builtin_memmove((U+0),(R+24),2);
s2(u32(r4(R+0)),r2(U+0));
}
B646ffa:{NFSU2_TR(0x646ffa);
s4(0x8a50d8,u32(u32(m4(0x8a50d8))+u32(u32(0x4ull))));
TAIL_STATIC(0x647001u,647);
}
XIT:NFSU2_TR_EXIT(0x646,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
