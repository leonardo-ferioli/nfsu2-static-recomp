#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_575(u8* __restrict R,Cpu& c);
u32 body_673(u8* __restrict R,Cpu& c);
u32 body_675(u8* __restrict R,Cpu& c);
u32 body_676(u8* __restrict R,Cpu& c);
u32 body_677(u8* __restrict R,Cpu& c);
u32 body_679(u8* __restrict R,Cpu& c);
u32 body_681(u8* __restrict R,Cpu& c);
u32 body_699(u8* __restrict R,Cpu& c);
u32 body_75c(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x678,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x678,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_678(u8* __restrict R,Cpu& c);
u32 page_678(Cpu& c){return body_678(c.regs.data(),c);}
__attribute__((noinline)) u32 body_678(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x678001:goto L678001;
case 0x678003:goto L678003;
case 0x678006:c.instructions+=9;goto B678006;
case 0x678008:c.instructions+=8;goto B678008;
case 0x67800b:c.instructions+=7;goto B67800b;
case 0x67800d:c.instructions+=6;goto B67800d;
case 0x678010:c.instructions+=5;goto B678010;
case 0x678012:c.instructions+=4;goto B678012;
case 0x678015:c.instructions+=3;goto B678015;
case 0x678016:c.instructions+=2;goto B678016;
case 0x678019:c.instructions+=1;goto B678019;
case 0x67801e:goto L67801e;
case 0x678020:c.instructions+=2;goto B678020;
case 0x678022:c.instructions+=1;goto B678022;
case 0x678024:goto L678024;
case 0x678029:goto L678029;
case 0x67802b:c.instructions+=2;goto B67802b;
case 0x67802e:c.instructions+=1;goto B67802e;
case 0x678034:goto L678034;
case 0x678035:c.instructions+=7;goto B678035;
case 0x678036:c.instructions+=6;goto B678036;
case 0x678039:c.instructions+=5;goto B678039;
case 0x67803c:c.instructions+=4;goto B67803c;
case 0x67803f:c.instructions+=3;goto B67803f;
case 0x678044:c.instructions+=2;goto B678044;
case 0x678045:c.instructions+=1;goto B678045;
case 0x67804a:goto L67804a;
case 0x67804d:c.instructions+=7;goto B67804d;
case 0x67804f:c.instructions+=6;goto B67804f;
case 0x678055:c.instructions+=5;goto B678055;
case 0x678057:c.instructions+=4;goto B678057;
case 0x67805d:c.instructions+=3;goto B67805d;
case 0x67805f:c.instructions+=2;goto B67805f;
case 0x678062:c.instructions+=1;goto B678062;
case 0x678064:goto L678064;
case 0x678065:c.instructions+=3;goto B678065;
case 0x678068:c.instructions+=2;goto B678068;
case 0x67806a:c.instructions+=1;goto B67806a;
case 0x67806f:goto L67806f;
case 0x678071:c.instructions+=2;goto B678071;
case 0x678073:c.instructions+=1;goto B678073;
case 0x678079:goto L678079;
case 0x67807b:c.instructions+=10;goto B67807b;
case 0x67807d:c.instructions+=9;goto B67807d;
case 0x678080:c.instructions+=8;goto B678080;
case 0x678086:c.instructions+=7;goto B678086;
case 0x678089:c.instructions+=6;goto B678089;
case 0x67808b:c.instructions+=5;goto B67808b;
case 0x678090:c.instructions+=4;goto B678090;
case 0x678091:c.instructions+=3;goto B678091;
case 0x678094:c.instructions+=2;goto B678094;
case 0x678096:c.instructions+=1;goto B678096;
case 0x67809b:goto L67809b;
case 0x67809d:c.instructions+=2;goto B67809d;
case 0x67809f:c.instructions+=1;goto B67809f;
case 0x6780a5:goto L6780a5;
case 0x6780a8:c.instructions+=4;goto B6780a8;
case 0x6780ae:c.instructions+=3;goto B6780ae;
case 0x6780b0:c.instructions+=2;goto B6780b0;
case 0x6780b3:c.instructions+=1;goto B6780b3;
case 0x6780b9:goto L6780b9;
case 0x6780bb:c.instructions+=4;goto B6780bb;
case 0x6780bd:c.instructions+=3;goto B6780bd;
case 0x6780c0:c.instructions+=2;goto B6780c0;
case 0x6780c6:c.instructions+=1;goto B6780c6;
case 0x6780cb:goto L6780cb;
case 0x6780cd:c.instructions+=3;goto B6780cd;
case 0x6780d0:c.instructions+=2;goto B6780d0;
case 0x6780d1:c.instructions+=1;goto B6780d1;
case 0x6780d6:goto L6780d6;
case 0x6780d8:c.instructions+=3;goto B6780d8;
case 0x6780d9:c.instructions+=2;goto B6780d9;
case 0x6780dc:c.instructions+=1;goto B6780dc;
case 0x6780de:goto L6780de;
case 0x6780e3:c.instructions+=1;goto B6780e3;
case 0x6780e8:goto L6780e8;
case 0x6780eb:c.instructions+=3;goto B6780eb;
case 0x6780ed:c.instructions+=2;goto B6780ed;
case 0x6780ef:c.instructions+=1;goto B6780ef;
case 0x6780f2:goto L6780f2;
case 0x6780f6:c.instructions+=4;goto B6780f6;
case 0x6780f7:c.instructions+=3;goto B6780f7;
case 0x6780f9:c.instructions+=2;goto B6780f9;
case 0x6780fc:c.instructions+=1;goto B6780fc;
case 0x6780fe:goto L6780fe;
case 0x6780ff:c.instructions+=3;goto B6780ff;
case 0x678102:c.instructions+=2;goto B678102;
case 0x678104:c.instructions+=1;goto B678104;
case 0x678109:goto L678109;
case 0x67810b:c.instructions+=2;goto B67810b;
case 0x67810d:c.instructions+=1;goto B67810d;
case 0x678113:goto L678113;
case 0x678114:c.instructions+=3;goto B678114;
case 0x678117:c.instructions+=2;goto B678117;
case 0x678119:c.instructions+=1;goto B678119;
case 0x67811e:goto L67811e;
case 0x678120:c.instructions+=2;goto B678120;
case 0x678122:c.instructions+=1;goto B678122;
case 0x678124:goto L678124;
case 0x678125:c.instructions+=3;goto B678125;
case 0x678128:c.instructions+=2;goto B678128;
case 0x67812a:c.instructions+=1;goto B67812a;
case 0x67812f:goto L67812f;
case 0x678131:c.instructions+=2;goto B678131;
case 0x678133:c.instructions+=1;goto B678133;
case 0x678135:goto L678135;
case 0x678137:c.instructions+=10;goto B678137;
case 0x678139:c.instructions+=9;goto B678139;
case 0x67813c:c.instructions+=8;goto B67813c;
case 0x678142:c.instructions+=7;goto B678142;
case 0x678145:c.instructions+=6;goto B678145;
case 0x678147:c.instructions+=5;goto B678147;
case 0x67814c:c.instructions+=4;goto B67814c;
case 0x67814d:c.instructions+=3;goto B67814d;
case 0x678150:c.instructions+=2;goto B678150;
case 0x678152:c.instructions+=1;goto B678152;
case 0x678157:goto L678157;
case 0x678159:c.instructions+=2;goto B678159;
case 0x67815b:c.instructions+=1;goto B67815b;
case 0x67815d:goto L67815d;
case 0x67815f:c.instructions+=9;goto B67815f;
case 0x678162:c.instructions+=8;goto B678162;
case 0x678164:c.instructions+=7;goto B678164;
case 0x678167:c.instructions+=6;goto B678167;
case 0x67816c:c.instructions+=5;goto B67816c;
case 0x67816f:c.instructions+=4;goto B67816f;
case 0x678171:c.instructions+=3;goto B678171;
case 0x678172:c.instructions+=2;goto B678172;
case 0x678175:c.instructions+=1;goto B678175;
case 0x67817a:goto L67817a;
case 0x67817c:c.instructions+=2;goto B67817c;
case 0x67817e:c.instructions+=1;goto B67817e;
case 0x678180:goto L678180;
case 0x678182:c.instructions+=3;goto B678182;
case 0x678184:c.instructions+=2;goto B678184;
case 0x678187:c.instructions+=1;goto B678187;
case 0x67818d:goto L67818d;
case 0x678190:c.instructions+=1;goto B678190;
case 0x678191:goto L678191;
case 0x678194:c.instructions+=2;goto B678194;
case 0x678196:c.instructions+=1;goto B678196;
case 0x67819b:goto L67819b;
case 0x67819d:c.instructions+=2;goto B67819d;
case 0x67819f:c.instructions+=1;goto B67819f;
case 0x6781a1:goto L6781a1;
case 0x6781a3:goto L6781a3;
case 0x6781a6:c.instructions+=1;goto B6781a6;
case 0x6781ab:goto L6781ab;
case 0x6781ac:c.instructions+=6;goto B6781ac;
case 0x6781ad:c.instructions+=5;goto B6781ad;
case 0x6781af:c.instructions+=4;goto B6781af;
case 0x6781b0:c.instructions+=3;goto B6781b0;
case 0x6781b1:c.instructions+=2;goto B6781b1;
case 0x6781b2:c.instructions+=1;goto B6781b2;
case 0x6781b5:goto L6781b5;
case 0x6781b7:c.instructions+=11;goto B6781b7;
case 0x6781b8:c.instructions+=10;goto B6781b8;
case 0x6781ba:c.instructions+=9;goto B6781ba;
case 0x6781bd:c.instructions+=8;goto B6781bd;
case 0x6781be:c.instructions+=7;goto B6781be;
case 0x6781c1:c.instructions+=6;goto B6781c1;
case 0x6781c4:c.instructions+=5;goto B6781c4;
case 0x6781c5:c.instructions+=4;goto B6781c5;
case 0x6781c8:c.instructions+=3;goto B6781c8;
case 0x6781c9:c.instructions+=2;goto B6781c9;
case 0x6781cb:c.instructions+=1;goto B6781cb;
case 0x6781d0:goto L6781d0;
case 0x6781d2:c.instructions+=4;goto B6781d2;
case 0x6781d4:c.instructions+=3;goto B6781d4;
case 0x6781d5:c.instructions+=2;goto B6781d5;
case 0x6781d8:c.instructions+=1;goto B6781d8;
case 0x6781da:goto L6781da;
case 0x6781e1:c.instructions+=1;goto B6781e1;
case 0x6781e6:goto L6781e6;
case 0x6781e8:c.instructions+=2;goto B6781e8;
case 0x6781ea:c.instructions+=1;goto B6781ea;
case 0x6781ed:goto L6781ed;
case 0x6781f1:c.instructions+=4;goto B6781f1;
case 0x6781f2:c.instructions+=3;goto B6781f2;
case 0x6781f4:c.instructions+=2;goto B6781f4;
case 0x6781f7:c.instructions+=1;goto B6781f7;
case 0x6781f9:goto L6781f9;
case 0x6781fc:c.instructions+=3;goto B6781fc;
case 0x6781fe:c.instructions+=2;goto B6781fe;
case 0x678200:c.instructions+=1;goto B678200;
case 0x678202:goto L678202;
case 0x678205:c.instructions+=4;goto B678205;
case 0x678208:c.instructions+=3;goto B678208;
case 0x678209:c.instructions+=2;goto B678209;
case 0x67820b:c.instructions+=1;goto B67820b;
case 0x67820d:goto L67820d;
case 0x67820e:c.instructions+=3;goto B67820e;
case 0x678211:c.instructions+=2;goto B678211;
case 0x678213:c.instructions+=1;goto B678213;
case 0x678218:goto L678218;
case 0x67821a:c.instructions+=2;goto B67821a;
case 0x67821d:c.instructions+=1;goto B67821d;
case 0x678223:goto L678223;
case 0x678224:c.instructions+=3;goto B678224;
case 0x678227:c.instructions+=2;goto B678227;
case 0x678229:c.instructions+=1;goto B678229;
case 0x67822e:goto L67822e;
case 0x678230:c.instructions+=2;goto B678230;
case 0x678233:c.instructions+=1;goto B678233;
case 0x678239:goto L678239;
case 0x67823a:c.instructions+=12;goto B67823a;
case 0x67823c:c.instructions+=11;goto B67823c;
case 0x67823d:c.instructions+=10;goto B67823d;
case 0x678240:c.instructions+=9;goto B678240;
case 0x678242:c.instructions+=8;goto B678242;
case 0x678245:c.instructions+=7;goto B678245;
case 0x67824b:c.instructions+=6;goto B67824b;
case 0x67824d:c.instructions+=5;goto B67824d;
case 0x678252:c.instructions+=4;goto B678252;
case 0x678253:c.instructions+=3;goto B678253;
case 0x678256:c.instructions+=2;goto B678256;
case 0x678258:c.instructions+=1;goto B678258;
case 0x67825d:goto L67825d;
case 0x67825f:c.instructions+=2;goto B67825f;
case 0x678262:c.instructions+=1;goto B678262;
case 0x678264:goto L678264;
case 0x678266:c.instructions+=8;goto B678266;
case 0x678268:c.instructions+=7;goto B678268;
case 0x67826b:c.instructions+=6;goto B67826b;
case 0x678271:c.instructions+=5;goto B678271;
case 0x678274:c.instructions+=4;goto B678274;
case 0x678276:c.instructions+=3;goto B678276;
case 0x678277:c.instructions+=2;goto B678277;
case 0x67827a:c.instructions+=1;goto B67827a;
case 0x67827f:goto L67827f;
case 0x678281:c.instructions+=2;goto B678281;
case 0x678284:c.instructions+=1;goto B678284;
case 0x678286:goto L678286;
case 0x678288:c.instructions+=2;goto B678288;
case 0x67828a:c.instructions+=1;goto B67828a;
case 0x67828c:goto L67828c;
case 0x67828f:c.instructions+=16;goto B67828f;
case 0x678292:c.instructions+=15;goto B678292;
case 0x678298:c.instructions+=14;goto B678298;
case 0x67829b:c.instructions+=13;goto B67829b;
case 0x67829e:c.instructions+=12;goto B67829e;
case 0x6782a1:c.instructions+=11;goto B6782a1;
case 0x6782a4:c.instructions+=10;goto B6782a4;
case 0x6782a7:c.instructions+=9;goto B6782a7;
case 0x6782ad:c.instructions+=8;goto B6782ad;
case 0x6782b0:c.instructions+=7;goto B6782b0;
case 0x6782b3:c.instructions+=6;goto B6782b3;
case 0x6782b6:c.instructions+=5;goto B6782b6;
case 0x6782b9:c.instructions+=4;goto B6782b9;
case 0x6782ba:c.instructions+=3;goto B6782ba;
case 0x6782bc:c.instructions+=2;goto B6782bc;
case 0x6782bf:c.instructions+=1;goto B6782bf;
case 0x6782c1:goto L6782c1;
case 0x6782c4:c.instructions+=5;goto B6782c4;
case 0x6782ca:c.instructions+=4;goto B6782ca;
case 0x6782cd:c.instructions+=3;goto B6782cd;
case 0x6782d0:c.instructions+=2;goto B6782d0;
case 0x6782d3:c.instructions+=1;goto B6782d3;
case 0x6782d7:goto L6782d7;
case 0x6782d8:goto L6782d8;
case 0x6782db:c.instructions+=1;goto B6782db;
case 0x6782e0:goto L6782e0;
case 0x6782e3:c.instructions+=5;goto B6782e3;
case 0x6782e4:c.instructions+=4;goto B6782e4;
case 0x6782e5:c.instructions+=3;goto B6782e5;
case 0x6782e6:c.instructions+=2;goto B6782e6;
case 0x6782e7:c.instructions+=1;goto B6782e7;
case 0x6782ea:goto L6782ea;
case 0x6782ec:c.instructions+=11;goto B6782ec;
case 0x6782ed:c.instructions+=10;goto B6782ed;
case 0x6782ef:c.instructions+=9;goto B6782ef;
case 0x6782f2:c.instructions+=8;goto B6782f2;
case 0x6782f3:c.instructions+=7;goto B6782f3;
case 0x6782f4:c.instructions+=6;goto B6782f4;
case 0x6782f5:c.instructions+=5;goto B6782f5;
case 0x6782f7:c.instructions+=4;goto B6782f7;
case 0x6782fa:c.instructions+=3;goto B6782fa;
case 0x6782fe:c.instructions+=2;goto B6782fe;
case 0x678301:c.instructions+=1;goto B678301;
case 0x678307:goto L678307;
case 0x67830a:c.instructions+=4;goto B67830a;
case 0x67830c:c.instructions+=3;goto B67830c;
case 0x67830f:c.instructions+=2;goto B67830f;
case 0x678310:c.instructions+=1;goto B678310;
case 0x678315:goto L678315;
case 0x678317:c.instructions+=4;goto B678317;
case 0x678319:c.instructions+=3;goto B678319;
case 0x67831a:c.instructions+=2;goto B67831a;
case 0x67831d:c.instructions+=1;goto B67831d;
case 0x678323:goto L678323;
case 0x678326:c.instructions+=4;goto B678326;
case 0x678327:c.instructions+=3;goto B678327;
case 0x678328:c.instructions+=2;goto B678328;
case 0x67832a:c.instructions+=1;goto B67832a;
case 0x67832f:goto L67832f;
case 0x678331:c.instructions+=2;goto B678331;
case 0x678333:c.instructions+=1;goto B678333;
case 0x678339:goto L678339;
case 0x67833b:c.instructions+=4;goto B67833b;
case 0x67833d:c.instructions+=3;goto B67833d;
case 0x678340:c.instructions+=2;goto B678340;
case 0x678343:c.instructions+=1;goto B678343;
case 0x678345:goto L678345;
case 0x678349:c.instructions+=4;goto B678349;
case 0x67834a:c.instructions+=3;goto B67834a;
case 0x67834c:c.instructions+=2;goto B67834c;
case 0x67834f:c.instructions+=1;goto B67834f;
case 0x678351:goto L678351;
case 0x678354:c.instructions+=6;goto B678354;
case 0x678356:c.instructions+=5;goto B678356;
case 0x678357:c.instructions+=4;goto B678357;
case 0x678359:c.instructions+=3;goto B678359;
case 0x67835b:c.instructions+=2;goto B67835b;
case 0x67835e:c.instructions+=1;goto B67835e;
case 0x678360:goto L678360;
case 0x678363:c.instructions+=3;goto B678363;
case 0x678366:c.instructions+=2;goto B678366;
case 0x678369:c.instructions+=1;goto B678369;
case 0x67836c:goto L67836c;
case 0x67836f:c.instructions+=8;goto B67836f;
case 0x678372:c.instructions+=7;goto B678372;
case 0x678375:c.instructions+=6;goto B678375;
case 0x678377:c.instructions+=5;goto B678377;
case 0x678379:c.instructions+=4;goto B678379;
case 0x67837c:c.instructions+=3;goto B67837c;
case 0x67837d:c.instructions+=2;goto B67837d;
case 0x67837f:c.instructions+=1;goto B67837f;
case 0x678381:goto L678381;
case 0x678385:c.instructions+=1;goto B678385;
case 0x678387:goto L678387;
case 0x678388:c.instructions+=6;goto B678388;
case 0x67838e:c.instructions+=5;goto B67838e;
case 0x678390:c.instructions+=4;goto B678390;
case 0x678391:c.instructions+=3;goto B678391;
case 0x678393:c.instructions+=2;goto B678393;
case 0x678398:c.instructions+=1;goto B678398;
case 0x67839a:goto L67839a;
case 0x67839b:c.instructions+=5;goto B67839b;
case 0x67839c:c.instructions+=4;goto B67839c;
case 0x6783a2:c.instructions+=3;goto B6783a2;
case 0x6783a3:c.instructions+=2;goto B6783a3;
case 0x6783a5:c.instructions+=1;goto B6783a5;
case 0x6783aa:goto L6783aa;
case 0x6783ad:c.instructions+=4;goto B6783ad;
case 0x6783b0:c.instructions+=3;goto B6783b0;
case 0x6783b1:c.instructions+=2;goto B6783b1;
case 0x6783b4:c.instructions+=1;goto B6783b4;
case 0x6783b9:goto L6783b9;
case 0x6783bb:c.instructions+=2;goto B6783bb;
case 0x6783bd:c.instructions+=1;goto B6783bd;
case 0x6783c3:goto L6783c3;
case 0x6783c6:c.instructions+=8;goto B6783c6;
case 0x6783c8:c.instructions+=7;goto B6783c8;
case 0x6783ca:c.instructions+=6;goto B6783ca;
case 0x6783cd:c.instructions+=5;goto B6783cd;
case 0x6783d3:c.instructions+=4;goto B6783d3;
case 0x6783d6:c.instructions+=3;goto B6783d6;
case 0x6783d7:c.instructions+=2;goto B6783d7;
case 0x6783da:c.instructions+=1;goto B6783da;
case 0x6783df:goto L6783df;
case 0x6783e1:c.instructions+=2;goto B6783e1;
case 0x6783e3:c.instructions+=1;goto B6783e3;
case 0x6783e9:goto L6783e9;
case 0x6783ec:c.instructions+=2;goto B6783ec;
case 0x6783ee:c.instructions+=1;goto B6783ee;
case 0x6783f0:goto L6783f0;
case 0x6783f3:c.instructions+=3;goto B6783f3;
case 0x6783f6:c.instructions+=2;goto B6783f6;
case 0x6783f8:c.instructions+=1;goto B6783f8;
case 0x6783fb:goto L6783fb;
case 0x6783fd:goto L6783fd;
case 0x6783ff:c.instructions+=1;goto B6783ff;
case 0x678402:goto L678402;
case 0x678404:goto L678404;
case 0x678407:c.instructions+=2;goto B678407;
case 0x678409:c.instructions+=1;goto B678409;
case 0x67840f:goto L67840f;
case 0x678412:c.instructions+=1;goto B678412;
case 0x678417:goto L678417;
case 0x67841a:c.instructions+=4;goto B67841a;
case 0x67841d:c.instructions+=3;goto B67841d;
case 0x678420:c.instructions+=2;goto B678420;
case 0x678421:c.instructions+=1;goto B678421;
case 0x678426:goto L678426;
case 0x678428:c.instructions+=3;goto B678428;
case 0x678429:c.instructions+=2;goto B678429;
case 0x67842c:c.instructions+=1;goto B67842c;
case 0x67842e:goto L67842e;
case 0x678433:c.instructions+=1;goto B678433;
case 0x678438:goto L678438;
case 0x67843b:c.instructions+=4;goto B67843b;
case 0x67843c:c.instructions+=3;goto B67843c;
case 0x67843f:c.instructions+=2;goto B67843f;
case 0x678441:c.instructions+=1;goto B678441;
case 0x678446:goto L678446;
case 0x678448:c.instructions+=2;goto B678448;
case 0x67844a:c.instructions+=1;goto B67844a;
case 0x678450:goto L678450;
case 0x678453:c.instructions+=4;goto B678453;
case 0x678455:c.instructions+=3;goto B678455;
case 0x678457:c.instructions+=2;goto B678457;
case 0x67845a:c.instructions+=1;goto B67845a;
case 0x67845d:goto L67845d;
case 0x678461:c.instructions+=4;goto B678461;
case 0x678462:c.instructions+=3;goto B678462;
case 0x678464:c.instructions+=2;goto B678464;
case 0x678467:c.instructions+=1;goto B678467;
case 0x678469:goto L678469;
case 0x67846c:c.instructions+=11;goto B67846c;
case 0x67846e:c.instructions+=10;goto B67846e;
case 0x678470:c.instructions+=9;goto B678470;
case 0x678473:c.instructions+=8;goto B678473;
case 0x678475:c.instructions+=7;goto B678475;
case 0x678478:c.instructions+=6;goto B678478;
case 0x67847e:c.instructions+=5;goto B67847e;
case 0x678481:c.instructions+=4;goto B678481;
case 0x678487:c.instructions+=3;goto B678487;
case 0x67848a:c.instructions+=2;goto B67848a;
case 0x67848d:c.instructions+=1;goto B67848d;
case 0x678492:goto L678492;
case 0x678494:c.instructions+=2;goto B678494;
case 0x678496:c.instructions+=1;goto B678496;
case 0x67849c:goto L67849c;
case 0x67849e:c.instructions+=9;goto B67849e;
case 0x6784a1:c.instructions+=8;goto B6784a1;
case 0x6784a7:c.instructions+=7;goto B6784a7;
case 0x6784aa:c.instructions+=6;goto B6784aa;
case 0x6784ad:c.instructions+=5;goto B6784ad;
case 0x6784ae:c.instructions+=4;goto B6784ae;
case 0x6784b1:c.instructions+=3;goto B6784b1;
case 0x6784b4:c.instructions+=2;goto B6784b4;
case 0x6784b6:c.instructions+=1;goto B6784b6;
case 0x6784bb:goto L6784bb;
case 0x6784bd:c.instructions+=2;goto B6784bd;
case 0x6784bf:c.instructions+=1;goto B6784bf;
case 0x6784c5:goto L6784c5;
case 0x6784c7:c.instructions+=7;goto B6784c7;
case 0x6784c9:c.instructions+=6;goto B6784c9;
case 0x6784cc:c.instructions+=5;goto B6784cc;
case 0x6784ce:c.instructions+=4;goto B6784ce;
case 0x6784d1:c.instructions+=3;goto B6784d1;
case 0x6784d4:c.instructions+=2;goto B6784d4;
case 0x6784d7:c.instructions+=1;goto B6784d7;
case 0x6784dc:goto L6784dc;
case 0x6784de:c.instructions+=2;goto B6784de;
case 0x6784e0:c.instructions+=1;goto B6784e0;
case 0x6784e2:goto L6784e2;
case 0x6784e4:c.instructions+=2;goto B6784e4;
case 0x6784e6:c.instructions+=1;goto B6784e6;
case 0x6784e8:goto L6784e8;
case 0x6784eb:c.instructions+=1;goto B6784eb;
case 0x6784ee:goto L6784ee;
case 0x6784f1:c.instructions+=4;goto B6784f1;
case 0x6784f4:c.instructions+=3;goto B6784f4;
case 0x6784f7:c.instructions+=2;goto B6784f7;
case 0x6784fa:c.instructions+=1;goto B6784fa;
case 0x6784fc:goto L6784fc;
case 0x6784fd:c.instructions+=2;goto B6784fd;
case 0x6784ff:c.instructions+=1;goto B6784ff;
case 0x678501:goto L678501;
case 0x678503:c.instructions+=1;goto B678503;
case 0x678505:goto L678505;
case 0x678507:c.instructions+=2;goto B678507;
case 0x678509:c.instructions+=1;goto B678509;
case 0x67850b:goto L67850b;
case 0x67850e:c.instructions+=8;goto B67850e;
case 0x678511:c.instructions+=7;goto B678511;
case 0x678514:c.instructions+=6;goto B678514;
case 0x678517:c.instructions+=5;goto B678517;
case 0x67851a:c.instructions+=4;goto B67851a;
case 0x67851d:c.instructions+=3;goto B67851d;
case 0x67851e:c.instructions+=2;goto B67851e;
case 0x678520:c.instructions+=1;goto B678520;
case 0x678522:goto L678522;
case 0x678525:c.instructions+=2;goto B678525;
case 0x678527:c.instructions+=1;goto B678527;
case 0x678529:goto L678529;
case 0x67852c:c.instructions+=3;goto B67852c;
case 0x67852f:c.instructions+=2;goto B67852f;
case 0x678531:c.instructions+=1;goto B678531;
case 0x678534:goto L678534;
case 0x678536:goto L678536;
case 0x678538:c.instructions+=1;goto B678538;
case 0x67853b:goto L67853b;
case 0x67853d:goto L67853d;
case 0x678540:c.instructions+=2;goto B678540;
case 0x678542:c.instructions+=1;goto B678542;
case 0x678544:goto L678544;
case 0x678547:goto L678547;
case 0x67854a:c.instructions+=2;goto B67854a;
case 0x67854c:c.instructions+=1;goto B67854c;
case 0x67854f:goto L67854f;
case 0x678551:goto L678551;
case 0x678553:c.instructions+=1;goto B678553;
case 0x678556:goto L678556;
case 0x678558:goto L678558;
case 0x67855a:goto L67855a;
case 0x67855d:c.instructions+=1;goto B67855d;
case 0x678562:goto L678562;
case 0x678563:c.instructions+=6;goto B678563;
case 0x678565:c.instructions+=5;goto B678565;
case 0x678566:c.instructions+=4;goto B678566;
case 0x678567:c.instructions+=3;goto B678567;
case 0x678568:c.instructions+=2;goto B678568;
case 0x678569:c.instructions+=1;goto B678569;
case 0x67856c:goto L67856c;
case 0x67856e:c.instructions+=7;goto B67856e;
case 0x67856f:c.instructions+=6;goto B67856f;
case 0x678571:c.instructions+=5;goto B678571;
case 0x678572:c.instructions+=4;goto B678572;
case 0x678576:c.instructions+=3;goto B678576;
case 0x678577:c.instructions+=2;goto B678577;
case 0x678579:c.instructions+=1;goto B678579;
case 0x67857b:goto L67857b;
case 0x67857d:c.instructions+=1;goto B67857d;
case 0x678582:goto L678582;
case 0x678585:c.instructions+=4;goto B678585;
case 0x678588:c.instructions+=3;goto B678588;
case 0x67858c:c.instructions+=2;goto B67858c;
case 0x67858f:c.instructions+=1;goto B67858f;
case 0x678591:goto L678591;
case 0x678594:c.instructions+=2;goto B678594;
case 0x678597:c.instructions+=1;goto B678597;
case 0x678599:goto L678599;
case 0x67859b:goto L67859b;
case 0x67859d:c.instructions+=1;goto B67859d;
case 0x67859f:goto L67859f;
case 0x6785a4:c.instructions+=1;goto B6785a4;
case 0x6785a9:goto L6785a9;
case 0x6785aa:c.instructions+=1;goto B6785aa;
case 0x6785af:goto L6785af;
case 0x6785b2:c.instructions+=3;goto B6785b2;
case 0x6785b5:c.instructions+=2;goto B6785b5;
case 0x6785b8:c.instructions+=1;goto B6785b8;
case 0x6785ba:goto L6785ba;
case 0x6785bd:c.instructions+=2;goto B6785bd;
case 0x6785c0:c.instructions+=1;goto B6785c0;
case 0x6785c2:goto L6785c2;
case 0x6785c4:goto L6785c4;
case 0x6785c6:c.instructions+=1;goto B6785c6;
case 0x6785c8:goto L6785c8;
case 0x6785cd:c.instructions+=1;goto B6785cd;
case 0x6785cf:goto L6785cf;
case 0x6785d3:c.instructions+=3;goto B6785d3;
case 0x6785d6:c.instructions+=2;goto B6785d6;
case 0x6785d9:c.instructions+=1;goto B6785d9;
case 0x6785db:goto L6785db;
case 0x6785dd:c.instructions+=1;goto B6785dd;
case 0x6785df:goto L6785df;
case 0x6785e0:c.instructions+=5;goto B6785e0;
case 0x6785e1:c.instructions+=4;goto B6785e1;
case 0x6785e6:c.instructions+=3;goto B6785e6;
case 0x6785e8:c.instructions+=2;goto B6785e8;
case 0x6785ed:c.instructions+=1;goto B6785ed;
case 0x6785ef:goto L6785ef;
case 0x6785f2:c.instructions+=2;goto B6785f2;
case 0x6785f5:c.instructions+=1;goto B6785f5;
case 0x6785f7:goto L6785f7;
case 0x6785f9:c.instructions+=1;goto B6785f9;
case 0x6785fc:goto L6785fc;
case 0x6785ff:c.instructions+=2;goto B6785ff;
case 0x678601:c.instructions+=1;goto B678601;
case 0x678603:goto L678603;
case 0x678606:c.instructions+=2;goto B678606;
case 0x678609:c.instructions+=1;goto B678609;
case 0x67860b:goto L67860b;
case 0x678611:c.instructions+=1;goto B678611;
case 0x678614:goto L678614;
case 0x678615:c.instructions+=1;goto B678615;
case 0x678616:goto L678616;
case 0x678618:c.instructions+=12;goto B678618;
case 0x67861b:c.instructions+=11;goto B67861b;
case 0x67861e:c.instructions+=10;goto B67861e;
case 0x678621:c.instructions+=9;goto B678621;
case 0x678623:c.instructions+=8;goto B678623;
case 0x678624:c.instructions+=7;goto B678624;
case 0x678627:c.instructions+=6;goto B678627;
case 0x67862a:c.instructions+=5;goto B67862a;
case 0x67862d:c.instructions+=4;goto B67862d;
case 0x678630:c.instructions+=3;goto B678630;
case 0x678633:c.instructions+=2;goto B678633;
case 0x678636:c.instructions+=1;goto B678636;
case 0x67863b:goto L67863b;
case 0x67863c:c.instructions+=2;goto B67863c;
case 0x67863d:c.instructions+=1;goto B67863d;
case 0x678640:goto L678640;
case 0x678642:c.instructions+=12;goto B678642;
case 0x678643:c.instructions+=11;goto B678643;
case 0x678645:c.instructions+=10;goto B678645;
case 0x678646:c.instructions+=9;goto B678646;
case 0x678647:c.instructions+=8;goto B678647;
case 0x67864a:c.instructions+=7;goto B67864a;
case 0x67864c:c.instructions+=6;goto B67864c;
case 0x67864d:c.instructions+=5;goto B67864d;
case 0x67864e:c.instructions+=4;goto B67864e;
case 0x67864f:c.instructions+=3;goto B67864f;
case 0x678651:c.instructions+=2;goto B678651;
case 0x678658:c.instructions+=1;goto B678658;
case 0x67865a:goto L67865a;
case 0x67865d:c.instructions+=1;goto B67865d;
case 0x678660:goto L678660;
case 0x678663:c.instructions+=6;goto B678663;
case 0x678665:c.instructions+=5;goto B678665;
case 0x678668:c.instructions+=4;goto B678668;
case 0x67866b:c.instructions+=3;goto B67866b;
case 0x67866e:c.instructions+=2;goto B67866e;
case 0x678671:c.instructions+=1;goto B678671;
case 0x678673:goto L678673;
case 0x678676:c.instructions+=1;goto B678676;
case 0x678678:goto L678678;
case 0x67867b:c.instructions+=5;goto B67867b;
case 0x67867e:c.instructions+=4;goto B67867e;
case 0x678681:c.instructions+=3;goto B678681;
case 0x678684:c.instructions+=2;goto B678684;
case 0x678688:c.instructions+=1;goto B678688;
case 0x67868a:goto L67868a;
case 0x67868d:c.instructions+=3;goto B67868d;
case 0x678690:c.instructions+=2;goto B678690;
case 0x678693:c.instructions+=1;goto B678693;
case 0x678696:goto L678696;
case 0x678699:c.instructions+=4;goto B678699;
case 0x67869b:c.instructions+=3;goto B67869b;
case 0x67869e:c.instructions+=2;goto B67869e;
case 0x6786a0:c.instructions+=1;goto B6786a0;
case 0x6786a2:goto L6786a2;
case 0x6786a5:c.instructions+=5;goto B6786a5;
case 0x6786a8:c.instructions+=4;goto B6786a8;
case 0x6786ab:c.instructions+=3;goto B6786ab;
case 0x6786ae:c.instructions+=2;goto B6786ae;
case 0x6786b2:c.instructions+=1;goto B6786b2;
case 0x6786b4:goto L6786b4;
case 0x6786b7:c.instructions+=1;goto B6786b7;
case 0x6786b9:goto L6786b9;
case 0x6786bd:goto L6786bd;
case 0x6786c0:c.instructions+=2;goto B6786c0;
case 0x6786c3:c.instructions+=1;goto B6786c3;
case 0x6786c5:goto L6786c5;
case 0x6786c7:c.instructions+=2;goto B6786c7;
case 0x6786ca:c.instructions+=1;goto B6786ca;
case 0x6786cc:goto L6786cc;
case 0x6786cf:c.instructions+=1;goto B6786cf;
case 0x6786d1:goto L6786d1;
case 0x6786d4:c.instructions+=1;goto B6786d4;
case 0x6786d6:goto L6786d6;
case 0x6786d9:c.instructions+=12;goto B6786d9;
case 0x6786dc:c.instructions+=11;goto B6786dc;
case 0x6786df:c.instructions+=10;goto B6786df;
case 0x6786e2:c.instructions+=9;goto B6786e2;
case 0x6786e5:c.instructions+=8;goto B6786e5;
case 0x6786e8:c.instructions+=7;goto B6786e8;
case 0x6786e9:c.instructions+=6;goto B6786e9;
case 0x6786ea:c.instructions+=5;goto B6786ea;
case 0x6786ed:c.instructions+=4;goto B6786ed;
case 0x6786ef:c.instructions+=3;goto B6786ef;
case 0x6786f1:c.instructions+=2;goto B6786f1;
case 0x6786f4:c.instructions+=1;goto B6786f4;
case 0x6786f9:goto L6786f9;
case 0x6786fc:c.instructions+=3;goto B6786fc;
case 0x6786ff:c.instructions+=2;goto B6786ff;
case 0x678702:c.instructions+=1;goto B678702;
case 0x678704:goto L678704;
case 0x678707:c.instructions+=9;goto B678707;
case 0x67870a:c.instructions+=8;goto B67870a;
case 0x67870d:c.instructions+=7;goto B67870d;
case 0x678710:c.instructions+=6;goto B678710;
case 0x678713:c.instructions+=5;goto B678713;
case 0x678716:c.instructions+=4;goto B678716;
case 0x678717:c.instructions+=3;goto B678717;
case 0x67871a:c.instructions+=2;goto B67871a;
case 0x67871d:c.instructions+=1;goto B67871d;
case 0x67871f:goto L67871f;
case 0x678722:c.instructions+=9;goto B678722;
case 0x678724:c.instructions+=8;goto B678724;
case 0x678726:c.instructions+=7;goto B678726;
case 0x678728:c.instructions+=6;goto B678728;
case 0x67872a:c.instructions+=5;goto B67872a;
case 0x67872d:c.instructions+=4;goto B67872d;
case 0x67872f:c.instructions+=3;goto B67872f;
case 0x678732:c.instructions+=2;goto B678732;
case 0x678735:c.instructions+=1;goto B678735;
case 0x67873a:goto L67873a;
case 0x67873c:c.instructions+=1;goto B67873c;
case 0x67873e:goto L67873e;
case 0x678740:goto L678740;
case 0x678741:c.instructions+=4;goto B678741;
case 0x678742:c.instructions+=3;goto B678742;
case 0x678743:c.instructions+=2;goto B678743;
case 0x678744:c.instructions+=1;goto B678744;
case 0x678747:goto L678747;
case 0x67874c:c.instructions+=1;goto B67874c;
case 0x67874e:goto L67874e;
case 0x678750:c.instructions+=10;goto B678750;
case 0x678751:c.instructions+=9;goto B678751;
case 0x678753:c.instructions+=8;goto B678753;
case 0x678756:c.instructions+=7;goto B678756;
case 0x678757:c.instructions+=6;goto B678757;
case 0x678758:c.instructions+=5;goto B678758;
case 0x67875a:c.instructions+=4;goto B67875a;
case 0x67875d:c.instructions+=3;goto B67875d;
case 0x67875e:c.instructions+=2;goto B67875e;
case 0x678761:c.instructions+=1;goto B678761;
case 0x678766:goto L678766;
case 0x678769:c.instructions+=5;goto B678769;
case 0x67876c:c.instructions+=4;goto B67876c;
case 0x67876f:c.instructions+=3;goto B67876f;
case 0x678772:c.instructions+=2;goto B678772;
case 0x678774:c.instructions+=1;goto B678774;
case 0x678776:goto L678776;
case 0x678779:c.instructions+=4;goto B678779;
case 0x67877c:c.instructions+=3;goto B67877c;
case 0x67877e:c.instructions+=2;goto B67877e;
case 0x678783:c.instructions+=1;goto B678783;
case 0x678785:goto L678785;
case 0x67878a:c.instructions+=1;goto B67878a;
case 0x67878c:goto L67878c;
case 0x67878f:c.instructions+=5;goto B67878f;
case 0x678790:c.instructions+=4;goto B678790;
case 0x678793:c.instructions+=3;goto B678793;
case 0x678795:c.instructions+=2;goto B678795;
case 0x678797:c.instructions+=1;goto B678797;
case 0x67879c:goto L67879c;
case 0x67879e:c.instructions+=1;goto B67879e;
case 0x6787a0:goto L6787a0;
case 0x6787a3:c.instructions+=5;goto B6787a3;
case 0x6787a9:c.instructions+=4;goto B6787a9;
case 0x6787ab:c.instructions+=3;goto B6787ab;
case 0x6787ad:c.instructions+=2;goto B6787ad;
case 0x6787b0:c.instructions+=1;goto B6787b0;
case 0x6787b2:goto L6787b2;
case 0x6787b5:c.instructions+=2;goto B6787b5;
case 0x6787b8:c.instructions+=1;goto B6787b8;
case 0x6787ba:goto L6787ba;
case 0x6787bd:c.instructions+=5;goto B6787bd;
case 0x6787be:c.instructions+=4;goto B6787be;
case 0x6787c1:c.instructions+=3;goto B6787c1;
case 0x6787c4:c.instructions+=2;goto B6787c4;
case 0x6787c6:c.instructions+=1;goto B6787c6;
case 0x6787cb:goto L6787cb;
case 0x6787cd:c.instructions+=1;goto B6787cd;
case 0x6787cf:goto L6787cf;
case 0x6787d2:c.instructions+=5;goto B6787d2;
case 0x6787d8:c.instructions+=4;goto B6787d8;
case 0x6787da:c.instructions+=3;goto B6787da;
case 0x6787dc:c.instructions+=2;goto B6787dc;
case 0x6787df:c.instructions+=1;goto B6787df;
case 0x6787e1:goto L6787e1;
case 0x6787e4:c.instructions+=1;goto B6787e4;
case 0x6787e6:goto L6787e6;
case 0x6787e8:c.instructions+=1;goto B6787e8;
case 0x6787ee:goto L6787ee;
case 0x6787f0:goto L6787f0;
case 0x6787f1:c.instructions+=4;goto B6787f1;
case 0x6787f2:c.instructions+=3;goto B6787f2;
case 0x6787f3:c.instructions+=2;goto B6787f3;
case 0x6787f4:c.instructions+=1;goto B6787f4;
case 0x6787f7:goto L6787f7;
case 0x6787f9:c.instructions+=2;goto B6787f9;
case 0x6787fe:c.instructions+=1;goto B6787fe;
case 0x678804:goto L678804;
case 0x678807:c.instructions+=5;goto B678807;
case 0x678808:c.instructions+=4;goto B678808;
case 0x67880b:c.instructions+=3;goto B67880b;
case 0x67880d:c.instructions+=2;goto B67880d;
case 0x67880f:c.instructions+=1;goto B67880f;
case 0x678814:goto L678814;
case 0x678816:c.instructions+=1;goto B678816;
case 0x678818:goto L678818;
case 0x67881b:c.instructions+=3;goto B67881b;
case 0x67881e:c.instructions+=2;goto B67881e;
case 0x678820:c.instructions+=1;goto B678820;
case 0x678822:goto L678822;
case 0x678828:goto L678828;
case 0x67882b:c.instructions+=4;goto B67882b;
case 0x67882d:c.instructions+=3;goto B67882d;
case 0x67882f:c.instructions+=2;goto B67882f;
case 0x678832:c.instructions+=1;goto B678832;
case 0x678834:goto L678834;
case 0x678837:c.instructions+=8;goto B678837;
case 0x67883a:c.instructions+=7;goto B67883a;
case 0x67883d:c.instructions+=6;goto B67883d;
case 0x67883f:c.instructions+=5;goto B67883f;
case 0x678842:c.instructions+=4;goto B678842;
case 0x678843:c.instructions+=3;goto B678843;
case 0x678845:c.instructions+=2;goto B678845;
case 0x678847:c.instructions+=1;goto B678847;
case 0x67884c:goto L67884c;
case 0x67884e:c.instructions+=1;goto B67884e;
case 0x678850:goto L678850;
case 0x678853:c.instructions+=3;goto B678853;
case 0x678855:c.instructions+=2;goto B678855;
case 0x678858:c.instructions+=1;goto B678858;
case 0x67885a:goto L67885a;
case 0x67885c:c.instructions+=4;goto B67885c;
case 0x67885f:c.instructions+=3;goto B67885f;
case 0x678862:c.instructions+=2;goto B678862;
case 0x678864:c.instructions+=1;goto B678864;
case 0x678866:goto L678866;
case 0x678869:c.instructions+=5;goto B678869;
case 0x67886c:c.instructions+=4;goto B67886c;
case 0x67886f:c.instructions+=3;goto B67886f;
case 0x678872:c.instructions+=2;goto B678872;
case 0x678875:c.instructions+=1;goto B678875;
case 0x67887b:goto L67887b;
case 0x67887e:c.instructions+=5;goto B67887e;
case 0x678881:c.instructions+=4;goto B678881;
case 0x678884:c.instructions+=3;goto B678884;
case 0x678887:c.instructions+=2;goto B678887;
case 0x67888a:c.instructions+=1;goto B67888a;
case 0x678890:goto L678890;
case 0x678892:c.instructions+=1;goto B678892;
case 0x678898:goto L678898;
case 0x67889b:c.instructions+=1;goto B67889b;
case 0x6788a1:goto L6788a1;
case 0x6788a4:c.instructions+=2;goto B6788a4;
case 0x6788a6:c.instructions+=1;goto B6788a6;
case 0x6788a8:goto L6788a8;
case 0x6788ab:c.instructions+=2;goto B6788ab;
case 0x6788ad:c.instructions+=1;goto B6788ad;
case 0x6788b0:goto L6788b0;
case 0x6788b3:c.instructions+=1;goto B6788b3;
case 0x6788b5:goto L6788b5;
case 0x6788b7:goto L6788b7;
case 0x6788b9:c.instructions+=2;goto B6788b9;
case 0x6788ba:c.instructions+=1;goto B6788ba;
case 0x6788bf:goto L6788bf;
case 0x6788c4:c.instructions+=1;goto B6788c4;
case 0x6788ca:goto L6788ca;
case 0x6788cd:c.instructions+=10;goto B6788cd;
case 0x6788d0:c.instructions+=9;goto B6788d0;
case 0x6788d3:c.instructions+=8;goto B6788d3;
case 0x6788d6:c.instructions+=7;goto B6788d6;
case 0x6788d9:c.instructions+=6;goto B6788d9;
case 0x6788dc:c.instructions+=5;goto B6788dc;
case 0x6788df:c.instructions+=4;goto B6788df;
case 0x6788e2:c.instructions+=3;goto B6788e2;
case 0x6788e7:c.instructions+=2;goto B6788e7;
case 0x6788ea:c.instructions+=1;goto B6788ea;
case 0x6788f0:goto L6788f0;
case 0x6788f3:c.instructions+=1;goto B6788f3;
case 0x6788f9:goto L6788f9;
case 0x6788fc:c.instructions+=5;goto B6788fc;
case 0x678902:c.instructions+=4;goto B678902;
case 0x678904:c.instructions+=3;goto B678904;
case 0x678906:c.instructions+=2;goto B678906;
case 0x678909:c.instructions+=1;goto B678909;
case 0x67890f:goto L67890f;
case 0x678912:c.instructions+=8;goto B678912;
case 0x678915:c.instructions+=7;goto B678915;
case 0x678918:c.instructions+=6;goto B678918;
case 0x67891b:c.instructions+=5;goto B67891b;
case 0x67891e:c.instructions+=4;goto B67891e;
case 0x678921:c.instructions+=3;goto B678921;
case 0x678924:c.instructions+=2;goto B678924;
case 0x678927:c.instructions+=1;goto B678927;
case 0x67892d:goto L67892d;
case 0x678931:c.instructions+=1;goto B678931;
case 0x678937:goto L678937;
case 0x67893a:c.instructions+=5;goto B67893a;
case 0x678940:c.instructions+=4;goto B678940;
case 0x678942:c.instructions+=3;goto B678942;
case 0x678944:c.instructions+=2;goto B678944;
case 0x678947:c.instructions+=1;goto B678947;
case 0x67894d:goto L67894d;
case 0x678950:c.instructions+=8;goto B678950;
case 0x678953:c.instructions+=7;goto B678953;
case 0x678955:c.instructions+=6;goto B678955;
case 0x678958:c.instructions+=5;goto B678958;
case 0x67895b:c.instructions+=4;goto B67895b;
case 0x67895e:c.instructions+=3;goto B67895e;
case 0x678961:c.instructions+=2;goto B678961;
case 0x678965:c.instructions+=1;goto B678965;
case 0x67896b:goto L67896b;
case 0x67896f:c.instructions+=1;goto B67896f;
case 0x678975:goto L678975;
case 0x678978:c.instructions+=8;goto B678978;
case 0x67897b:c.instructions+=7;goto B67897b;
case 0x67897e:c.instructions+=6;goto B67897e;
case 0x678981:c.instructions+=5;goto B678981;
case 0x678983:c.instructions+=4;goto B678983;
case 0x678988:c.instructions+=3;goto B678988;
case 0x67898d:c.instructions+=2;goto B67898d;
case 0x678990:c.instructions+=1;goto B678990;
case 0x678996:goto L678996;
case 0x678999:c.instructions+=3;goto B678999;
case 0x67899d:c.instructions+=2;goto B67899d;
case 0x67899f:c.instructions+=1;goto B67899f;
case 0x6789a1:goto L6789a1;
case 0x6789a4:goto L6789a4;
case 0x6789a6:c.instructions+=1;goto B6789a6;
case 0x6789a8:goto L6789a8;
case 0x6789ab:c.instructions+=3;goto B6789ab;
case 0x6789ae:c.instructions+=2;goto B6789ae;
case 0x6789b1:c.instructions+=1;goto B6789b1;
case 0x6789b3:goto L6789b3;
case 0x6789b7:c.instructions+=2;goto B6789b7;
case 0x6789be:c.instructions+=1;goto B6789be;
case 0x6789c0:goto L6789c0;
case 0x6789c3:goto L6789c3;
case 0x6789c6:c.instructions+=14;goto B6789c6;
case 0x6789c9:c.instructions+=13;goto B6789c9;
case 0x6789cb:c.instructions+=12;goto B6789cb;
case 0x6789cf:c.instructions+=11;goto B6789cf;
case 0x6789d2:c.instructions+=10;goto B6789d2;
case 0x6789d5:c.instructions+=9;goto B6789d5;
case 0x6789d8:c.instructions+=8;goto B6789d8;
case 0x6789db:c.instructions+=7;goto B6789db;
case 0x6789de:c.instructions+=6;goto B6789de;
case 0x6789e1:c.instructions+=5;goto B6789e1;
case 0x6789e4:c.instructions+=4;goto B6789e4;
case 0x6789e7:c.instructions+=3;goto B6789e7;
case 0x6789ea:c.instructions+=2;goto B6789ea;
case 0x6789ee:c.instructions+=1;goto B6789ee;
case 0x6789f4:goto L6789f4;
case 0x6789f8:c.instructions+=1;goto B6789f8;
case 0x6789fe:goto L6789fe;
case 0x678a01:c.instructions+=7;goto B678a01;
case 0x678a04:c.instructions+=6;goto B678a04;
case 0x678a07:c.instructions+=5;goto B678a07;
case 0x678a0a:c.instructions+=4;goto B678a0a;
case 0x678a0c:c.instructions+=3;goto B678a0c;
case 0x678a12:c.instructions+=2;goto B678a12;
case 0x678a18:c.instructions+=1;goto B678a18;
case 0x678a1e:goto L678a1e;
case 0x678a22:c.instructions+=2;goto B678a22;
case 0x678a26:c.instructions+=1;goto B678a26;
case 0x678a28:goto L678a28;
case 0x678a2b:goto L678a2b;
case 0x678a2d:c.instructions+=2;goto B678a2d;
case 0x678a30:c.instructions+=1;goto B678a30;
case 0x678a32:goto L678a32;
case 0x678a35:c.instructions+=4;goto B678a35;
case 0x678a38:c.instructions+=3;goto B678a38;
case 0x678a3b:c.instructions+=2;goto B678a3b;
case 0x678a3e:c.instructions+=1;goto B678a3e;
case 0x678a40:goto L678a40;
case 0x678a44:c.instructions+=10;goto B678a44;
case 0x678a47:c.instructions+=9;goto B678a47;
case 0x678a4a:c.instructions+=8;goto B678a4a;
case 0x678a4d:c.instructions+=7;goto B678a4d;
case 0x678a50:c.instructions+=6;goto B678a50;
case 0x678a53:c.instructions+=5;goto B678a53;
case 0x678a56:c.instructions+=4;goto B678a56;
case 0x678a57:c.instructions+=3;goto B678a57;
case 0x678a58:c.instructions+=2;goto B678a58;
case 0x678a5a:c.instructions+=1;goto B678a5a;
case 0x678a5f:goto L678a5f;
case 0x678a61:c.instructions+=1;goto B678a61;
case 0x678a63:goto L678a63;
case 0x678a66:c.instructions+=3;goto B678a66;
case 0x678a69:c.instructions+=2;goto B678a69;
case 0x678a6b:c.instructions+=1;goto B678a6b;
case 0x678a6d:goto L678a6d;
case 0x678a73:goto L678a73;
case 0x678a76:c.instructions+=4;goto B678a76;
case 0x678a78:c.instructions+=3;goto B678a78;
case 0x678a7a:c.instructions+=2;goto B678a7a;
case 0x678a7d:c.instructions+=1;goto B678a7d;
case 0x678a7f:goto L678a7f;
case 0x678a81:c.instructions+=6;goto B678a81;
case 0x678a84:c.instructions+=5;goto B678a84;
case 0x678a85:c.instructions+=4;goto B678a85;
case 0x678a87:c.instructions+=3;goto B678a87;
case 0x678a89:c.instructions+=2;goto B678a89;
case 0x678a8c:c.instructions+=1;goto B678a8c;
case 0x678a91:goto L678a91;
case 0x678a93:c.instructions+=1;goto B678a93;
case 0x678a95:goto L678a95;
case 0x678a98:c.instructions+=3;goto B678a98;
case 0x678a9a:c.instructions+=2;goto B678a9a;
case 0x678a9d:c.instructions+=1;goto B678a9d;
case 0x678a9f:goto L678a9f;
case 0x678aa2:c.instructions+=1;goto B678aa2;
case 0x678aa8:goto L678aa8;
case 0x678aaa:goto L678aaa;
case 0x678aad:c.instructions+=5;goto B678aad;
case 0x678ab0:c.instructions+=4;goto B678ab0;
case 0x678ab3:c.instructions+=3;goto B678ab3;
case 0x678ab6:c.instructions+=2;goto B678ab6;
case 0x678ab9:c.instructions+=1;goto B678ab9;
case 0x678abb:goto L678abb;
case 0x678abe:c.instructions+=5;goto B678abe;
case 0x678ac1:c.instructions+=4;goto B678ac1;
case 0x678ac4:c.instructions+=3;goto B678ac4;
case 0x678ac7:c.instructions+=2;goto B678ac7;
case 0x678aca:c.instructions+=1;goto B678aca;
case 0x678acc:goto L678acc;
case 0x678ace:c.instructions+=1;goto B678ace;
case 0x678ad0:goto L678ad0;
case 0x678ad3:c.instructions+=1;goto B678ad3;
case 0x678ad5:goto L678ad5;
case 0x678ad8:c.instructions+=3;goto B678ad8;
case 0x678adb:c.instructions+=2;goto B678adb;
case 0x678adf:c.instructions+=1;goto B678adf;
case 0x678ae5:goto L678ae5;
case 0x678aea:goto L678aea;
case 0x678aed:c.instructions+=2;goto B678aed;
case 0x678aef:c.instructions+=1;goto B678aef;
case 0x678af5:goto L678af5;
case 0x678af8:c.instructions+=3;goto B678af8;
case 0x678afb:c.instructions+=2;goto B678afb;
case 0x678afe:c.instructions+=1;goto B678afe;
case 0x678b03:goto L678b03;
case 0x678b05:c.instructions+=30;goto B678b05;
case 0x678b06:c.instructions+=29;goto B678b06;
case 0x678b08:c.instructions+=28;goto B678b08;
case 0x678b0b:c.instructions+=27;goto B678b0b;
case 0x678b0c:c.instructions+=26;goto B678b0c;
case 0x678b0e:c.instructions+=25;goto B678b0e;
case 0x678b11:c.instructions+=24;goto B678b11;
case 0x678b14:c.instructions+=23;goto B678b14;
case 0x678b17:c.instructions+=22;goto B678b17;
case 0x678b1a:c.instructions+=21;goto B678b1a;
case 0x678b1d:c.instructions+=20;goto B678b1d;
case 0x678b20:c.instructions+=19;goto B678b20;
case 0x678b23:c.instructions+=18;goto B678b23;
case 0x678b26:c.instructions+=17;goto B678b26;
case 0x678b29:c.instructions+=16;goto B678b29;
case 0x678b2a:c.instructions+=15;goto B678b2a;
case 0x678b2b:c.instructions+=14;goto B678b2b;
case 0x678b2d:c.instructions+=13;goto B678b2d;
case 0x678b30:c.instructions+=12;goto B678b30;
case 0x678b33:c.instructions+=11;goto B678b33;
case 0x678b34:c.instructions+=10;goto B678b34;
case 0x678b37:c.instructions+=9;goto B678b37;
case 0x678b3a:c.instructions+=8;goto B678b3a;
case 0x678b3d:c.instructions+=7;goto B678b3d;
case 0x678b40:c.instructions+=6;goto B678b40;
case 0x678b43:c.instructions+=5;goto B678b43;
case 0x678b46:c.instructions+=4;goto B678b46;
case 0x678b49:c.instructions+=3;goto B678b49;
case 0x678b4c:c.instructions+=2;goto B678b4c;
case 0x678b4f:c.instructions+=1;goto B678b4f;
case 0x678b54:goto L678b54;
case 0x678b56:c.instructions+=1;goto B678b56;
case 0x678b58:goto L678b58;
case 0x678b5e:c.instructions+=5;goto B678b5e;
case 0x678b61:c.instructions+=4;goto B678b61;
case 0x678b63:c.instructions+=3;goto B678b63;
case 0x678b65:c.instructions+=2;goto B678b65;
case 0x678b68:c.instructions+=1;goto B678b68;
case 0x678b6a:goto L678b6a;
case 0x678b6d:c.instructions+=4;goto B678b6d;
case 0x678b6f:c.instructions+=3;goto B678b6f;
case 0x678b71:c.instructions+=2;goto B678b71;
case 0x678b74:c.instructions+=1;goto B678b74;
case 0x678b76:goto L678b76;
case 0x678b78:c.instructions+=5;goto B678b78;
case 0x678b7b:c.instructions+=4;goto B678b7b;
case 0x678b7d:c.instructions+=3;goto B678b7d;
case 0x678b7f:c.instructions+=2;goto B678b7f;
case 0x678b82:c.instructions+=1;goto B678b82;
case 0x678b84:goto L678b84;
case 0x678b86:c.instructions+=6;goto B678b86;
case 0x678b89:c.instructions+=5;goto B678b89;
case 0x678b8b:c.instructions+=4;goto B678b8b;
case 0x678b8d:c.instructions+=3;goto B678b8d;
case 0x678b8f:c.instructions+=2;goto B678b8f;
case 0x678b92:c.instructions+=1;goto B678b92;
case 0x678b94:goto L678b94;
case 0x678b95:c.instructions+=2;goto B678b95;
case 0x678b98:c.instructions+=1;goto B678b98;
case 0x678b9a:goto L678b9a;
case 0x678b9b:c.instructions+=2;goto B678b9b;
case 0x678b9d:c.instructions+=1;goto B678b9d;
case 0x678ba0:goto L678ba0;
case 0x678ba2:c.instructions+=1;goto B678ba2;
case 0x678ba7:goto L678ba7;
case 0x678ba9:c.instructions+=1;goto B678ba9;
case 0x678bae:goto L678bae;
case 0x678bb0:goto L678bb0;
case 0x678bb2:c.instructions+=5;goto B678bb2;
case 0x678bb5:c.instructions+=4;goto B678bb5;
case 0x678bb6:c.instructions+=3;goto B678bb6;
case 0x678bb7:c.instructions+=2;goto B678bb7;
case 0x678bb9:c.instructions+=1;goto B678bb9;
case 0x678bbe:goto L678bbe;
case 0x678bc0:c.instructions+=2;goto B678bc0;
case 0x678bc2:c.instructions+=1;goto B678bc2;
case 0x678bc8:goto L678bc8;
case 0x678bcc:c.instructions+=8;goto B678bcc;
case 0x678bcf:c.instructions+=7;goto B678bcf;
case 0x678bd2:c.instructions+=6;goto B678bd2;
case 0x678bd5:c.instructions+=5;goto B678bd5;
case 0x678bd8:c.instructions+=4;goto B678bd8;
case 0x678bdb:c.instructions+=3;goto B678bdb;
case 0x678bde:c.instructions+=2;goto B678bde;
case 0x678be1:c.instructions+=1;goto B678be1;
case 0x678be7:goto L678be7;
case 0x678bea:c.instructions+=5;goto B678bea;
case 0x678bed:c.instructions+=4;goto B678bed;
case 0x678bef:c.instructions+=3;goto B678bef;
case 0x678bf5:c.instructions+=2;goto B678bf5;
case 0x678bfb:c.instructions+=1;goto B678bfb;
case 0x678c01:goto L678c01;
case 0x678c04:c.instructions+=4;goto B678c04;
case 0x678c06:c.instructions+=3;goto B678c06;
case 0x678c08:c.instructions+=2;goto B678c08;
case 0x678c0b:c.instructions+=1;goto B678c0b;
case 0x678c0d:goto L678c0d;
case 0x678c10:c.instructions+=1;goto B678c10;
case 0x678c12:goto L678c12;
case 0x678c15:goto L678c15;
case 0x678c17:c.instructions+=1;goto B678c17;
case 0x678c19:goto L678c19;
case 0x678c1a:c.instructions+=4;goto B678c1a;
case 0x678c1d:c.instructions+=3;goto B678c1d;
case 0x678c20:c.instructions+=2;goto B678c20;
case 0x678c23:c.instructions+=1;goto B678c23;
case 0x678c25:goto L678c25;
case 0x678c28:c.instructions+=10;goto B678c28;
case 0x678c2b:c.instructions+=9;goto B678c2b;
case 0x678c2e:c.instructions+=8;goto B678c2e;
case 0x678c30:c.instructions+=7;goto B678c30;
case 0x678c33:c.instructions+=6;goto B678c33;
case 0x678c36:c.instructions+=5;goto B678c36;
case 0x678c39:c.instructions+=4;goto B678c39;
case 0x678c3c:c.instructions+=3;goto B678c3c;
case 0x678c3f:c.instructions+=2;goto B678c3f;
case 0x678c42:c.instructions+=1;goto B678c42;
case 0x678c48:goto L678c48;
case 0x678c4b:c.instructions+=2;goto B678c4b;
case 0x678c4e:c.instructions+=1;goto B678c4e;
case 0x678c54:goto L678c54;
case 0x678c57:c.instructions+=5;goto B678c57;
case 0x678c5a:c.instructions+=4;goto B678c5a;
case 0x678c5c:c.instructions+=3;goto B678c5c;
case 0x678c62:c.instructions+=2;goto B678c62;
case 0x678c68:c.instructions+=1;goto B678c68;
case 0x678c6e:goto L678c6e;
case 0x678c72:c.instructions+=2;goto B678c72;
case 0x678c76:c.instructions+=1;goto B678c76;
case 0x678c78:goto L678c78;
case 0x678c7b:goto L678c7b;
case 0x678c7d:c.instructions+=1;goto B678c7d;
case 0x678c7f:goto L678c7f;
case 0x678c82:c.instructions+=4;goto B678c82;
case 0x678c85:c.instructions+=3;goto B678c85;
case 0x678c88:c.instructions+=2;goto B678c88;
case 0x678c8b:c.instructions+=1;goto B678c8b;
case 0x678c8d:goto L678c8d;
case 0x678c90:c.instructions+=3;goto B678c90;
case 0x678c93:c.instructions+=2;goto B678c93;
case 0x678c96:c.instructions+=1;goto B678c96;
case 0x678c9c:goto L678c9c;
case 0x678c9e:c.instructions+=5;goto B678c9e;
case 0x678ca1:c.instructions+=4;goto B678ca1;
case 0x678ca2:c.instructions+=3;goto B678ca2;
case 0x678ca4:c.instructions+=2;goto B678ca4;
case 0x678ca6:c.instructions+=1;goto B678ca6;
case 0x678cab:goto L678cab;
case 0x678cad:c.instructions+=2;goto B678cad;
case 0x678caf:c.instructions+=1;goto B678caf;
case 0x678cb5:goto L678cb5;
case 0x678cb9:c.instructions+=12;goto B678cb9;
case 0x678cbd:c.instructions+=11;goto B678cbd;
case 0x678cbf:c.instructions+=10;goto B678cbf;
case 0x678cc1:c.instructions+=9;goto B678cc1;
case 0x678cc4:c.instructions+=8;goto B678cc4;
case 0x678cc5:c.instructions+=7;goto B678cc5;
case 0x678cc8:c.instructions+=6;goto B678cc8;
case 0x678cc9:c.instructions+=5;goto B678cc9;
case 0x678cce:c.instructions+=4;goto B678cce;
case 0x678ccf:c.instructions+=3;goto B678ccf;
case 0x678cd2:c.instructions+=2;goto B678cd2;
case 0x678cd4:c.instructions+=1;goto B678cd4;
case 0x678cd9:goto L678cd9;
case 0x678cdb:c.instructions+=2;goto B678cdb;
case 0x678cdd:c.instructions+=1;goto B678cdd;
case 0x678ce3:goto L678ce3;
case 0x678ce5:c.instructions+=9;goto B678ce5;
case 0x678ce7:c.instructions+=8;goto B678ce7;
case 0x678cea:c.instructions+=7;goto B678cea;
case 0x678ceb:c.instructions+=6;goto B678ceb;
case 0x678cee:c.instructions+=5;goto B678cee;
case 0x678cef:c.instructions+=4;goto B678cef;
case 0x678cf0:c.instructions+=3;goto B678cf0;
case 0x678cf3:c.instructions+=2;goto B678cf3;
case 0x678cf5:c.instructions+=1;goto B678cf5;
case 0x678cfa:goto L678cfa;
case 0x678cfc:c.instructions+=2;goto B678cfc;
case 0x678cfe:c.instructions+=1;goto B678cfe;
case 0x678d04:goto L678d04;
case 0x678d07:c.instructions+=10;goto B678d07;
case 0x678d0a:c.instructions+=9;goto B678d0a;
case 0x678d0d:c.instructions+=8;goto B678d0d;
case 0x678d10:c.instructions+=7;goto B678d10;
case 0x678d13:c.instructions+=6;goto B678d13;
case 0x678d16:c.instructions+=5;goto B678d16;
case 0x678d19:c.instructions+=4;goto B678d19;
case 0x678d1c:c.instructions+=3;goto B678d1c;
case 0x678d20:c.instructions+=2;goto B678d20;
case 0x678d22:c.instructions+=1;goto B678d22;
case 0x678d24:goto L678d24;
case 0x678d27:c.instructions+=1;goto B678d27;
case 0x678d29:goto L678d29;
case 0x678d2d:c.instructions+=1;goto B678d2d;
case 0x678d2f:goto L678d2f;
case 0x678d31:c.instructions+=2;goto B678d31;
case 0x678d32:c.instructions+=1;goto B678d32;
case 0x678d37:goto L678d37;
case 0x678d3b:c.instructions+=3;goto B678d3b;
case 0x678d3d:c.instructions+=2;goto B678d3d;
case 0x678d3e:c.instructions+=1;goto B678d3e;
case 0x678d43:goto L678d43;
case 0x678d46:c.instructions+=3;goto B678d46;
case 0x678d49:c.instructions+=2;goto B678d49;
case 0x678d4b:c.instructions+=1;goto B678d4b;
case 0x678d51:goto L678d51;
case 0x678d55:c.instructions+=11;goto B678d55;
case 0x678d59:c.instructions+=10;goto B678d59;
case 0x678d5d:c.instructions+=9;goto B678d5d;
case 0x678d5f:c.instructions+=8;goto B678d5f;
case 0x678d61:c.instructions+=7;goto B678d61;
case 0x678d64:c.instructions+=6;goto B678d64;
case 0x678d65:c.instructions+=5;goto B678d65;
case 0x678d68:c.instructions+=4;goto B678d68;
case 0x678d69:c.instructions+=3;goto B678d69;
case 0x678d6e:c.instructions+=2;goto B678d6e;
case 0x678d71:c.instructions+=1;goto B678d71;
case 0x678d76:goto L678d76;
case 0x678d78:c.instructions+=2;goto B678d78;
case 0x678d7a:c.instructions+=1;goto B678d7a;
case 0x678d80:goto L678d80;
case 0x678d82:c.instructions+=9;goto B678d82;
case 0x678d84:c.instructions+=8;goto B678d84;
case 0x678d87:c.instructions+=7;goto B678d87;
case 0x678d88:c.instructions+=6;goto B678d88;
case 0x678d8b:c.instructions+=5;goto B678d8b;
case 0x678d8c:c.instructions+=4;goto B678d8c;
case 0x678d91:c.instructions+=3;goto B678d91;
case 0x678d94:c.instructions+=2;goto B678d94;
case 0x678d96:c.instructions+=1;goto B678d96;
case 0x678d9b:goto L678d9b;
case 0x678d9d:c.instructions+=2;goto B678d9d;
case 0x678d9f:c.instructions+=1;goto B678d9f;
case 0x678da5:goto L678da5;
case 0x678da7:c.instructions+=10;goto B678da7;
case 0x678daa:c.instructions+=9;goto B678daa;
case 0x678dab:c.instructions+=8;goto B678dab;
case 0x678dae:c.instructions+=7;goto B678dae;
case 0x678daf:c.instructions+=6;goto B678daf;
case 0x678db2:c.instructions+=5;goto B678db2;
case 0x678db3:c.instructions+=4;goto B678db3;
case 0x678db8:c.instructions+=3;goto B678db8;
case 0x678dbb:c.instructions+=2;goto B678dbb;
case 0x678dbd:c.instructions+=1;goto B678dbd;
case 0x678dc2:goto L678dc2;
case 0x678dc4:c.instructions+=2;goto B678dc4;
case 0x678dc6:c.instructions+=1;goto B678dc6;
case 0x678dcc:goto L678dcc;
case 0x678dcf:c.instructions+=9;goto B678dcf;
case 0x678dd2:c.instructions+=8;goto B678dd2;
case 0x678dd5:c.instructions+=7;goto B678dd5;
case 0x678dd8:c.instructions+=6;goto B678dd8;
case 0x678ddb:c.instructions+=5;goto B678ddb;
case 0x678ddd:c.instructions+=4;goto B678ddd;
case 0x678dde:c.instructions+=3;goto B678dde;
case 0x678de1:c.instructions+=2;goto B678de1;
case 0x678de4:c.instructions+=1;goto B678de4;
case 0x678dea:goto L678dea;
case 0x678ded:c.instructions+=1;goto B678ded;
case 0x678df3:goto L678df3;
case 0x678df7:c.instructions+=1;goto B678df7;
case 0x678dfd:goto L678dfd;
case 0x678e00:c.instructions+=1;goto B678e00;
case 0x678e05:goto L678e05;
case 0x678e08:c.instructions+=13;goto B678e08;
case 0x678e0b:c.instructions+=12;goto B678e0b;
case 0x678e0e:c.instructions+=11;goto B678e0e;
case 0x678e11:c.instructions+=10;goto B678e11;
case 0x678e14:c.instructions+=9;goto B678e14;
case 0x678e16:c.instructions+=8;goto B678e16;
case 0x678e19:c.instructions+=7;goto B678e19;
case 0x678e1a:c.instructions+=6;goto B678e1a;
case 0x678e1d:c.instructions+=5;goto B678e1d;
case 0x678e1e:c.instructions+=4;goto B678e1e;
case 0x678e21:c.instructions+=3;goto B678e21;
case 0x678e22:c.instructions+=2;goto B678e22;
case 0x678e25:c.instructions+=1;goto B678e25;
case 0x678e2a:goto L678e2a;
case 0x678e2c:c.instructions+=2;goto B678e2c;
case 0x678e2e:c.instructions+=1;goto B678e2e;
case 0x678e34:goto L678e34;
case 0x678e36:c.instructions+=10;goto B678e36;
case 0x678e39:c.instructions+=9;goto B678e39;
case 0x678e3a:c.instructions+=8;goto B678e3a;
case 0x678e3d:c.instructions+=7;goto B678e3d;
case 0x678e3e:c.instructions+=6;goto B678e3e;
case 0x678e41:c.instructions+=5;goto B678e41;
case 0x678e42:c.instructions+=4;goto B678e42;
case 0x678e47:c.instructions+=3;goto B678e47;
case 0x678e4a:c.instructions+=2;goto B678e4a;
case 0x678e4c:c.instructions+=1;goto B678e4c;
case 0x678e51:goto L678e51;
case 0x678e53:c.instructions+=2;goto B678e53;
case 0x678e55:c.instructions+=1;goto B678e55;
case 0x678e5b:goto L678e5b;
case 0x678e5d:c.instructions+=10;goto B678e5d;
case 0x678e60:c.instructions+=9;goto B678e60;
case 0x678e61:c.instructions+=8;goto B678e61;
case 0x678e64:c.instructions+=7;goto B678e64;
case 0x678e65:c.instructions+=6;goto B678e65;
case 0x678e68:c.instructions+=5;goto B678e68;
case 0x678e69:c.instructions+=4;goto B678e69;
case 0x678e6e:c.instructions+=3;goto B678e6e;
case 0x678e71:c.instructions+=2;goto B678e71;
case 0x678e73:c.instructions+=1;goto B678e73;
case 0x678e78:goto L678e78;
case 0x678e7a:c.instructions+=2;goto B678e7a;
case 0x678e7c:c.instructions+=1;goto B678e7c;
case 0x678e82:goto L678e82;
case 0x678e84:c.instructions+=2;goto B678e84;
case 0x678e85:c.instructions+=1;goto B678e85;
case 0x678e88:goto L678e88;
case 0x678e8c:goto L678e8c;
case 0x678e8d:c.instructions+=5;goto B678e8d;
case 0x678e90:c.instructions+=4;goto B678e90;
case 0x678e91:c.instructions+=3;goto B678e91;
case 0x678e93:c.instructions+=2;goto B678e93;
case 0x678e95:c.instructions+=1;goto B678e95;
case 0x678e9a:goto L678e9a;
case 0x678e9c:c.instructions+=2;goto B678e9c;
case 0x678e9e:c.instructions+=1;goto B678e9e;
case 0x678ea4:goto L678ea4;
case 0x678ea7:c.instructions+=11;goto B678ea7;
case 0x678eaa:c.instructions+=10;goto B678eaa;
case 0x678ead:c.instructions+=9;goto B678ead;
case 0x678eb0:c.instructions+=8;goto B678eb0;
case 0x678eb3:c.instructions+=7;goto B678eb3;
case 0x678eb6:c.instructions+=6;goto B678eb6;
case 0x678eb9:c.instructions+=5;goto B678eb9;
case 0x678ebd:c.instructions+=4;goto B678ebd;
case 0x678ec2:c.instructions+=3;goto B678ec2;
case 0x678ec5:c.instructions+=2;goto B678ec5;
case 0x678ecc:c.instructions+=1;goto B678ecc;
case 0x678ece:goto L678ece;
case 0x678ed0:c.instructions+=2;goto B678ed0;
case 0x678ed2:c.instructions+=1;goto B678ed2;
case 0x678ed7:goto L678ed7;
case 0x678ed9:c.instructions+=3;goto B678ed9;
case 0x678eda:c.instructions+=2;goto B678eda;
case 0x678edb:c.instructions+=1;goto B678edb;
case 0x678edd:goto L678edd;
case 0x678edf:c.instructions+=2;goto B678edf;
case 0x678ee1:c.instructions+=1;goto B678ee1;
case 0x678ee6:goto L678ee6;
case 0x678ee8:c.instructions+=3;goto B678ee8;
case 0x678ee9:c.instructions+=2;goto B678ee9;
case 0x678eea:c.instructions+=1;goto B678eea;
case 0x678eec:goto L678eec;
case 0x678eef:c.instructions+=3;goto B678eef;
case 0x678ef1:c.instructions+=2;goto B678ef1;
case 0x678ef4:c.instructions+=1;goto B678ef4;
case 0x678ef6:goto L678ef6;
case 0x678ef9:c.instructions+=1;goto B678ef9;
case 0x678efb:goto L678efb;
case 0x678f02:c.instructions+=1;goto B678f02;
case 0x678f04:goto L678f04;
case 0x678f07:c.instructions+=1;goto B678f07;
case 0x678f09:goto L678f09;
case 0x678f0b:c.instructions+=2;goto B678f0b;
case 0x678f0d:c.instructions+=1;goto B678f0d;
case 0x678f12:goto L678f12;
case 0x678f14:c.instructions+=3;goto B678f14;
case 0x678f15:c.instructions+=2;goto B678f15;
case 0x678f16:c.instructions+=1;goto B678f16;
case 0x678f18:goto L678f18;
case 0x678f1a:c.instructions+=2;goto B678f1a;
case 0x678f1c:c.instructions+=1;goto B678f1c;
case 0x678f21:goto L678f21;
case 0x678f23:c.instructions+=3;goto B678f23;
case 0x678f24:c.instructions+=2;goto B678f24;
case 0x678f25:c.instructions+=1;goto B678f25;
case 0x678f27:goto L678f27;
case 0x678f2a:c.instructions+=3;goto B678f2a;
case 0x678f2c:c.instructions+=2;goto B678f2c;
case 0x678f2f:c.instructions+=1;goto B678f2f;
case 0x678f31:goto L678f31;
case 0x678f34:c.instructions+=1;goto B678f34;
case 0x678f36:goto L678f36;
case 0x678f3a:c.instructions+=1;goto B678f3a;
case 0x678f3c:goto L678f3c;
case 0x678f3e:c.instructions+=3;goto B678f3e;
case 0x678f3f:c.instructions+=2;goto B678f3f;
case 0x678f42:c.instructions+=1;goto B678f42;
case 0x678f45:goto L678f45;
case 0x678f48:c.instructions+=1;goto B678f48;
case 0x678f4a:goto L678f4a;
case 0x678f4d:c.instructions+=3;goto B678f4d;
case 0x678f4f:c.instructions+=2;goto B678f4f;
case 0x678f52:c.instructions+=1;goto B678f52;
case 0x678f54:goto L678f54;
case 0x678f57:c.instructions+=1;goto B678f57;
case 0x678f59:goto L678f59;
case 0x678f5c:c.instructions+=1;goto B678f5c;
case 0x678f5e:goto L678f5e;
case 0x678f61:c.instructions+=1;goto B678f61;
case 0x678f63:goto L678f63;
case 0x678f67:c.instructions+=1;goto B678f67;
case 0x678f69:goto L678f69;
case 0x678f6b:c.instructions+=2;goto B678f6b;
case 0x678f6c:c.instructions+=1;goto B678f6c;
case 0x678f6f:goto L678f6f;
case 0x678f72:goto L678f72;
case 0x678f74:c.instructions+=2;goto B678f74;
case 0x678f77:c.instructions+=1;goto B678f77;
case 0x678f79:goto L678f79;
case 0x678f7c:c.instructions+=1;goto B678f7c;
case 0x678f7e:goto L678f7e;
case 0x678f81:c.instructions+=1;goto B678f81;
case 0x678f83:goto L678f83;
case 0x678f86:c.instructions+=1;goto B678f86;
case 0x678f88:goto L678f88;
case 0x678f8b:c.instructions+=2;goto B678f8b;
case 0x678f8e:c.instructions+=1;goto B678f8e;
case 0x678f90:goto L678f90;
case 0x678f92:goto L678f92;
case 0x678f95:c.instructions+=2;goto B678f95;
case 0x678f98:c.instructions+=1;goto B678f98;
case 0x678f9a:goto L678f9a;
case 0x678f9d:goto L678f9d;
case 0x678fa0:c.instructions+=1;goto B678fa0;
case 0x678fa2:goto L678fa2;
case 0x678fa6:c.instructions+=1;goto B678fa6;
case 0x678fa8:goto L678fa8;
case 0x678fab:goto L678fab;
case 0x678fae:c.instructions+=1;goto B678fae;
case 0x678fb0:goto L678fb0;
case 0x678fb4:c.instructions+=1;goto B678fb4;
case 0x678fb6:goto L678fb6;
case 0x678fb9:goto L678fb9;
case 0x678fbc:c.instructions+=6;goto B678fbc;
case 0x678fbf:c.instructions+=5;goto B678fbf;
case 0x678fc2:c.instructions+=4;goto B678fc2;
case 0x678fc5:c.instructions+=3;goto B678fc5;
case 0x678fc6:c.instructions+=2;goto B678fc6;
case 0x678fc9:c.instructions+=1;goto B678fc9;
case 0x678fce:goto L678fce;
case 0x678fd0:c.instructions+=3;goto B678fd0;
case 0x678fd1:c.instructions+=2;goto B678fd1;
case 0x678fd4:c.instructions+=1;goto B678fd4;
case 0x678fda:goto L678fda;
case 0x678fdd:c.instructions+=3;goto B678fdd;
case 0x678fe0:c.instructions+=2;goto B678fe0;
case 0x678fe1:c.instructions+=1;goto B678fe1;
case 0x678fe6:goto L678fe6;
case 0x678fe8:c.instructions+=3;goto B678fe8;
case 0x678fe9:c.instructions+=2;goto B678fe9;
case 0x678fec:c.instructions+=1;goto B678fec;
case 0x678ff2:goto L678ff2;
case 0x678ff5:c.instructions+=3;goto B678ff5;
case 0x678ff8:c.instructions+=2;goto B678ff8;
case 0x678ff9:c.instructions+=1;goto B678ff9;
case 0x678ffe:goto L678ffe;
default:missing_instruction(c.pc);}
B678001:L678001:{c.instructions+=1;NFSU2_TR(0x678001);
if(r1(R+518)){{goto L678029;}}
}
B678003:L678003:{c.instructions+=10;NFSU2_TR(0x678003);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B678006:{NFSU2_TR(0x678006);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B678008:{NFSU2_TR(0x678008);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67800b:{NFSU2_TR(0x67800b);
w4(R+0,u32(u32(r4(R+0))|u32(r4(R+28))));
}
B67800d:{NFSU2_TR(0x67800d);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B678010:{NFSU2_TR(0x678010);
__builtin_memmove((R+4),(R+12),4);
}
B678012:{NFSU2_TR(0x678012);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B678015:{NFSU2_TR(0x678015);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B678016:{NFSU2_TR(0x678016);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B678019:{NFSU2_TR(0x678019);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67801eull));
TAIL_STATIC(0x6758ceu,675);
}
B67801e:L67801e:{c.instructions+=3;NFSU2_TR(0x67801e);
__builtin_memmove((R+24),(R+0),4);
}
B678020:{NFSU2_TR(0x678020);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B678022:{NFSU2_TR(0x678022);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x677fd3u,677);}
}
B678024:L678024:{c.instructions+=1;NFSU2_TR(0x678024);
{goto L6781a3;}
}
B678029:L678029:{c.instructions+=3;NFSU2_TR(0x678029);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B67802b:{NFSU2_TR(0x67802b);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(U+8),r4(R+0)));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B67802e:{NFSU2_TR(0x67802e);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L6781a1;}}
}
B678034:L678034:{c.instructions+=8;NFSU2_TR(0x678034);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B678035:{NFSU2_TR(0x678035);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B678036:{NFSU2_TR(0x678036);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B678039:{NFSU2_TR(0x678039);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B67803c:{NFSU2_TR(0x67803c);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67803f:{NFSU2_TR(0x67803f);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0x10300000ull))));
}
B678044:{NFSU2_TR(0x678044);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B678045:{NFSU2_TR(0x678045);
{goto L678191;}
}
B67804a:L67804a:{c.instructions+=8;NFSU2_TR(0x67804a);
{u32 ea_=u32(r4(R+20)+u32(4294967280u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B67804d:{NFSU2_TR(0x67804d);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B67804f:{NFSU2_TR(0x67804f);
{u32 ea_=u32(u32(7890144u));__asm__ volatile(".byte 0xdc,0x20"::"a"(ea_):"memory");}
}
B678055:{NFSU2_TR(0x678055);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B678057:{NFSU2_TR(0x678057);
{u32 ea_=u32(u32(7889632u));__asm__ volatile(".byte 0xdc,0x18"::"a"(ea_):"memory");}
}
B67805d:{NFSU2_TR(0x67805d);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B67805f:{NFSU2_TR(0x67805f);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B678062:{NFSU2_TR(0x678062);
if(r1(R+514)){{goto L6780cb;}}
}
B678064:L678064:{c.instructions+=4;NFSU2_TR(0x678064);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B678065:{NFSU2_TR(0x678065);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B678068:{NFSU2_TR(0x678068);
__builtin_memmove((R+4),(R+12),4);
}
B67806a:{NFSU2_TR(0x67806a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67806full));
TAIL_STATIC(0x673b2cu,673);
}
B67806f:L67806f:{c.instructions+=3;NFSU2_TR(0x67806f);
__builtin_memmove((R+24),(R+0),4);
}
B678071:{NFSU2_TR(0x678071);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B678073:{NFSU2_TR(0x678073);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6781a3;}}
}
B678079:L678079:{c.instructions+=11;NFSU2_TR(0x678079);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67807b:{NFSU2_TR(0x67807b);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67807d:{NFSU2_TR(0x67807d);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B678080:{NFSU2_TR(0x678080);
w4(R+28,u32(u32(r4(R+28))&u32(u32(0xfffffull))));
}
B678086:{NFSU2_TR(0x678086);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B678089:{NFSU2_TR(0x678089);
__builtin_memmove((R+0),(R+28),4);
}
B67808b:{NFSU2_TR(0x67808b);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0x10700000ull))));
}
B678090:{NFSU2_TR(0x678090);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B678091:{NFSU2_TR(0x678091);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B678094:{NFSU2_TR(0x678094);
__builtin_memmove((R+4),(R+12),4);
}
B678096:{NFSU2_TR(0x678096);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67809bull));
TAIL_STATIC(0x6758ceu,675);
}
B67809b:L67809b:{c.instructions+=3;NFSU2_TR(0x67809b);
__builtin_memmove((R+24),(R+0),4);
}
B67809d:{NFSU2_TR(0x67809d);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B67809f:{NFSU2_TR(0x67809f);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6781a3;}}
}
B6780a5:L6780a5:{c.instructions+=5;NFSU2_TR(0x6780a5);
{u32 ea_=u32(r4(R+20)+u32(4294967280u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B6780a8:{NFSU2_TR(0x6780a8);
{u32 ea_=u32(u32(7892576u));__asm__ volatile(".byte 0xdc,0x18"::"a"(ea_):"memory");}
}
B6780ae:{NFSU2_TR(0x6780ae);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B6780b0:{NFSU2_TR(0x6780b0);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6780b3:{NFSU2_TR(0x6780b3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6781a1;}}
}
B6780b9:L6780b9:{c.instructions+=5;NFSU2_TR(0x6780b9);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6780bb:{NFSU2_TR(0x6780bb);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6780bd:{NFSU2_TR(0x6780bd);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6780c0:{NFSU2_TR(0x6780c0);
w4(R+28,u32(u32(r4(R+28))|u32(u32(0x10300000ull))));
}
B6780c6:{NFSU2_TR(0x6780c6);
{goto L67818d;}
}
B6780cb:L6780cb:{c.instructions+=4;NFSU2_TR(0x6780cb);
__builtin_memmove((R+0),(R+28),4);
}
B6780cd:{NFSU2_TR(0x6780cd);
u8 U[4];
w4(U+0,u32(u32(u32(0x3ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B6780d0:{NFSU2_TR(0x6780d0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6780d1:{NFSU2_TR(0x6780d1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6780d6ull));
TAIL_STATIC(0x575620u,575);
}
B6780d6:L6780d6:{c.instructions+=4;NFSU2_TR(0x6780d6);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6780d8:{NFSU2_TR(0x6780d8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6780d9:{NFSU2_TR(0x6780d9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6780dc:{NFSU2_TR(0x6780dc);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6780e8;}}
}
B6780de:L6780de:{c.instructions+=2;NFSU2_TR(0x6780de);
w4(R+24,u32(0x8007000eull));
}
B6780e3:{NFSU2_TR(0x6780e3);
{goto L6781a3;}
}
B6780e8:L6780e8:{c.instructions+=4;NFSU2_TR(0x6780e8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6780eb:{NFSU2_TR(0x6780eb);
__builtin_memmove((R+4),(R+28),4);
}
B6780ed:{NFSU2_TR(0x6780ed);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6780ef:{NFSU2_TR(0x6780ef);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B6780f2:L6780f2:{c.instructions+=5;NFSU2_TR(0x6780f2);
u8 U[16];
w4(U+0,u32(u32(u32(0xfffffff0ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+8),4);
s4(u32(r4(U+8)),r4(U+12));
}
B6780f6:{NFSU2_TR(0x6780f6);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6780f7:{NFSU2_TR(0x6780f7);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+4))));
}
B6780f9:{NFSU2_TR(0x6780f9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(U+0))<(u32(0x2ull))));
}
B6780fc:{NFSU2_TR(0x6780fc);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6780f2u);}goto L6780f2;}}
}
B6780fe:L6780fe:{c.instructions+=4;NFSU2_TR(0x6780fe);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6780ff:{NFSU2_TR(0x6780ff);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B678102:{NFSU2_TR(0x678102);
__builtin_memmove((R+4),(R+12),4);
}
B678104:{NFSU2_TR(0x678104);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x678109ull));
TAIL_STATIC(0x673b2cu,673);
}
B678109:L678109:{c.instructions+=3;NFSU2_TR(0x678109);
__builtin_memmove((R+24),(R+0),4);
}
B67810b:{NFSU2_TR(0x67810b);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B67810d:{NFSU2_TR(0x67810d);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6781a3;}}
}
B678113:L678113:{c.instructions+=4;NFSU2_TR(0x678113);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B678114:{NFSU2_TR(0x678114);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B678117:{NFSU2_TR(0x678117);
__builtin_memmove((R+4),(R+12),4);
}
B678119:{NFSU2_TR(0x678119);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67811eull));
TAIL_STATIC(0x673b2cu,673);
}
B67811e:L67811e:{c.instructions+=3;NFSU2_TR(0x67811e);
__builtin_memmove((R+24),(R+0),4);
}
B678120:{NFSU2_TR(0x678120);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B678122:{NFSU2_TR(0x678122);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6781a3;}}
}
B678124:L678124:{c.instructions+=4;NFSU2_TR(0x678124);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B678125:{NFSU2_TR(0x678125);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B678128:{NFSU2_TR(0x678128);
__builtin_memmove((R+4),(R+12),4);
}
B67812a:{NFSU2_TR(0x67812a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67812full));
TAIL_STATIC(0x673b2cu,673);
}
B67812f:L67812f:{c.instructions+=3;NFSU2_TR(0x67812f);
__builtin_memmove((R+24),(R+0),4);
}
B678131:{NFSU2_TR(0x678131);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B678133:{NFSU2_TR(0x678133);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6781a3;}}
}
B678135:L678135:{c.instructions+=11;NFSU2_TR(0x678135);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B678137:{NFSU2_TR(0x678137);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B678139:{NFSU2_TR(0x678139);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67813c:{NFSU2_TR(0x67813c);
w4(R+28,u32(u32(r4(R+28))&u32(u32(0xfffffull))));
}
B678142:{NFSU2_TR(0x678142);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B678145:{NFSU2_TR(0x678145);
__builtin_memmove((R+0),(R+28),4);
}
B678147:{NFSU2_TR(0x678147);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0x10600000ull))));
}
B67814c:{NFSU2_TR(0x67814c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67814d:{NFSU2_TR(0x67814d);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B678150:{NFSU2_TR(0x678150);
__builtin_memmove((R+4),(R+12),4);
}
B678152:{NFSU2_TR(0x678152);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x678157ull));
TAIL_STATIC(0x6758ceu,675);
}
B678157:L678157:{c.instructions+=3;NFSU2_TR(0x678157);
__builtin_memmove((R+24),(R+0),4);
}
B678159:{NFSU2_TR(0x678159);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B67815b:{NFSU2_TR(0x67815b);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6781a3;}}
}
B67815d:L67815d:{c.instructions+=10;NFSU2_TR(0x67815d);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67815f:{NFSU2_TR(0x67815f);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B678162:{NFSU2_TR(0x678162);
__builtin_memmove((R+0),(R+28),4);
}
B678164:{NFSU2_TR(0x678164);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B678167:{NFSU2_TR(0x678167);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0x20500000ull))));
}
B67816c:{NFSU2_TR(0x67816c);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67816f:{NFSU2_TR(0x67816f);
__builtin_memmove((R+4),(R+12),4);
}
B678171:{NFSU2_TR(0x678171);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B678172:{NFSU2_TR(0x678172);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B678175:{NFSU2_TR(0x678175);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67817aull));
TAIL_STATIC(0x6758ceu,675);
}
B67817a:L67817a:{c.instructions+=3;NFSU2_TR(0x67817a);
__builtin_memmove((R+24),(R+0),4);
}
B67817c:{NFSU2_TR(0x67817c);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B67817e:{NFSU2_TR(0x67817e);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6781a3;}}
}
B678180:L678180:{c.instructions+=4;NFSU2_TR(0x678180);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B678182:{NFSU2_TR(0x678182);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B678184:{NFSU2_TR(0x678184);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B678187:{NFSU2_TR(0x678187);
w4(R+28,u32(u32(r4(R+28))|u32(u32(0x10500000ull))));
}
B67818d:L67818d:{c.instructions+=2;NFSU2_TR(0x67818d);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B678190:{NFSU2_TR(0x678190);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B678191:L678191:{c.instructions+=3;NFSU2_TR(0x678191);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B678194:{NFSU2_TR(0x678194);
__builtin_memmove((R+4),(R+12),4);
}
B678196:{NFSU2_TR(0x678196);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67819bull));
TAIL_STATIC(0x6758ceu,675);
}
B67819b:L67819b:{c.instructions+=3;NFSU2_TR(0x67819b);
__builtin_memmove((R+24),(R+0),4);
}
B67819d:{NFSU2_TR(0x67819d);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B67819f:{NFSU2_TR(0x67819f);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6781a3;}}
}
B6781a1:L6781a1:{c.instructions+=1;NFSU2_TR(0x6781a1);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B6781a3:L6781a3:{c.instructions+=2;NFSU2_TR(0x6781a3);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6781a6:{NFSU2_TR(0x6781a6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6781abull));
TAIL_STATIC(0x575630u,575);
}
B6781ab:L6781ab:{c.instructions+=7;NFSU2_TR(0x6781ab);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6781ac:{NFSU2_TR(0x6781ac);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6781ad:{NFSU2_TR(0x6781ad);
__builtin_memmove((R+0),(R+24),4);
}
B6781af:{NFSU2_TR(0x6781af);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6781b0:{NFSU2_TR(0x6781b0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6781b1:{NFSU2_TR(0x6781b1);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6781b2:{NFSU2_TR(0x6781b2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6781b5:L6781b5:{c.instructions+=12;NFSU2_TR(0x6781b5);
__builtin_memmove((R+28),(R+28),4);
}
B6781b7:{NFSU2_TR(0x6781b7);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6781b8:{NFSU2_TR(0x6781b8);
__builtin_memmove((R+20),(R+16),4);
}
B6781ba:{NFSU2_TR(0x6781ba);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x10ull))));
}
B6781bd:{NFSU2_TR(0x6781bd);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6781be:{NFSU2_TR(0x6781be);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6781c1:{NFSU2_TR(0x6781c1);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B6781c4:{NFSU2_TR(0x6781c4);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6781c5:{NFSU2_TR(0x6781c5);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B6781c8:{NFSU2_TR(0x6781c8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6781c9:{NFSU2_TR(0x6781c9);
__builtin_memmove((R+24),(R+4),4);
}
B6781cb:{NFSU2_TR(0x6781cb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6781d0ull));
TAIL_STATIC(0x575620u,575);
}
B6781d0:L6781d0:{c.instructions+=5;NFSU2_TR(0x6781d0);
__builtin_memmove((R+8),(R+0),4);
}
B6781d2:{NFSU2_TR(0x6781d2);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6781d4:{NFSU2_TR(0x6781d4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6781d5:{NFSU2_TR(0x6781d5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6781d8:{NFSU2_TR(0x6781d8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6781e6;}}
}
B6781da:L6781da:{c.instructions+=2;NFSU2_TR(0x6781da);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
w4(U+4,u32(0x8007000eull));
s4(u32(r4(U+0)),r4(U+4));
}
B6781e1:{NFSU2_TR(0x6781e1);
{goto L6782d8;}
}
B6781e6:L6781e6:{c.instructions+=3;NFSU2_TR(0x6781e6);
__builtin_memmove((R+4),(R+12),4);
}
B6781e8:{NFSU2_TR(0x6781e8);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6781ea:{NFSU2_TR(0x6781ea);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B6781ed:L6781ed:{c.instructions+=5;NFSU2_TR(0x6781ed);
u8 U[16];
w4(U+0,u32(u32(u32(0xfffffff0ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+8),4);
s4(u32(r4(U+8)),r4(U+12));
}
B6781f1:{NFSU2_TR(0x6781f1);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6781f2:{NFSU2_TR(0x6781f2);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+4))));
}
B6781f4:{NFSU2_TR(0x6781f4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(U+0))<(u32(0x3ull))));
}
B6781f7:{NFSU2_TR(0x6781f7);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6781edu);}goto L6781ed;}}
}
B6781f9:L6781f9:{c.instructions+=4;NFSU2_TR(0x6781f9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6781fc:{NFSU2_TR(0x6781fc);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6781fe:{NFSU2_TR(0x6781fe);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B678200:{NFSU2_TR(0x678200);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L67820d;}}
}
B678202:L678202:{c.instructions+=5;NFSU2_TR(0x678202);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B678205:{NFSU2_TR(0x678205);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4),4);
s4(u32(r4(U+4)),r4(U+8));
}
B678208:{NFSU2_TR(0x678208);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B678209:{NFSU2_TR(0x678209);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
}
B67820b:{NFSU2_TR(0x67820b);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x678202u);}goto L678202;}}
}
B67820d:L67820d:{c.instructions+=4;NFSU2_TR(0x67820d);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67820e:{NFSU2_TR(0x67820e);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B678211:{NFSU2_TR(0x678211);
__builtin_memmove((R+4),(R+24),4);
}
B678213:{NFSU2_TR(0x678213);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x678218ull));
TAIL_STATIC(0x673b2cu,673);
}
B678218:L678218:{c.instructions+=3;NFSU2_TR(0x678218);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B67821a:{NFSU2_TR(0x67821a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B67821d:{NFSU2_TR(0x67821d);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6782d8;}}
}
B678223:L678223:{c.instructions+=4;NFSU2_TR(0x678223);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B678224:{NFSU2_TR(0x678224);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B678227:{NFSU2_TR(0x678227);
__builtin_memmove((R+4),(R+24),4);
}
B678229:{NFSU2_TR(0x678229);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67822eull));
TAIL_STATIC(0x673b2cu,673);
}
B67822e:L67822e:{c.instructions+=3;NFSU2_TR(0x67822e);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B678230:{NFSU2_TR(0x678230);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B678233:{NFSU2_TR(0x678233);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6782d8;}}
}
B678239:L678239:{c.instructions+=13;NFSU2_TR(0x678239);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67823a:{NFSU2_TR(0x67823a);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67823c:{NFSU2_TR(0x67823c);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67823d:{NFSU2_TR(0x67823d);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B678240:{NFSU2_TR(0x678240);
__builtin_memmove((R+28),(R+12),4);
}
B678242:{NFSU2_TR(0x678242);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B678245:{NFSU2_TR(0x678245);
w4(R+28,u32(u32(r4(R+28))&u32(u32(0xfffffull))));
}
B67824b:{NFSU2_TR(0x67824b);
__builtin_memmove((R+0),(R+28),4);
}
B67824d:{NFSU2_TR(0x67824d);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0x20500000ull))));
}
B678252:{NFSU2_TR(0x678252);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B678253:{NFSU2_TR(0x678253);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B678256:{NFSU2_TR(0x678256);
__builtin_memmove((R+4),(R+24),4);
}
B678258:{NFSU2_TR(0x678258);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67825dull));
TAIL_STATIC(0x6758ceu,675);
}
B67825d:L67825d:{c.instructions+=3;NFSU2_TR(0x67825d);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B67825f:{NFSU2_TR(0x67825f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B678262:{NFSU2_TR(0x678262);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6782d7;}}
}
B678264:L678264:{c.instructions+=9;NFSU2_TR(0x678264);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B678266:{NFSU2_TR(0x678266);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B678268:{NFSU2_TR(0x678268);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67826b:{NFSU2_TR(0x67826b);
w4(R+28,u32(u32(r4(R+28))|u32(u32(0x11000000ull))));
}
B678271:{NFSU2_TR(0x678271);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B678274:{NFSU2_TR(0x678274);
__builtin_memmove((R+4),(R+24),4);
}
B678276:{NFSU2_TR(0x678276);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B678277:{NFSU2_TR(0x678277);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67827a:{NFSU2_TR(0x67827a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67827full));
TAIL_STATIC(0x6758ceu,675);
}
B67827f:L67827f:{c.instructions+=3;NFSU2_TR(0x67827f);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B678281:{NFSU2_TR(0x678281);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B678284:{NFSU2_TR(0x678284);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6782d7;}}
}
B678286:L678286:{c.instructions+=3;NFSU2_TR(0x678286);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B678288:{NFSU2_TR(0x678288);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B67828a:{NFSU2_TR(0x67828a);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6782c1;}}
}
B67828c:L67828c:{c.instructions+=17;NFSU2_TR(0x67828c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B67828f:{NFSU2_TR(0x67828f);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B678292:{NFSU2_TR(0x678292);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xa8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B678298:{NFSU2_TR(0x678298);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B67829b:{NFSU2_TR(0x67829b);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B67829e:{NFSU2_TR(0x67829e);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6782a1:{NFSU2_TR(0x6782a1);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6782a4:{NFSU2_TR(0x6782a4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6782a7:{NFSU2_TR(0x6782a7);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xa8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6782ad:{NFSU2_TR(0x6782ad);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6782b0:{NFSU2_TR(0x6782b0);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6782b3:{NFSU2_TR(0x6782b3);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6782b6:{NFSU2_TR(0x6782b6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6782b9:{NFSU2_TR(0x6782b9);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B6782ba:{NFSU2_TR(0x6782ba);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w1(R+512,u8((r4(R+8))<(r4(U+0))));
}
B6782bc:{NFSU2_TR(0x6782bc);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6782bf:{NFSU2_TR(0x6782bf);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x67828cu);}goto L67828c;}}
}
B6782c1:L6782c1:{c.instructions+=6;NFSU2_TR(0x6782c1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6782c4:{NFSU2_TR(0x6782c4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6782ca:{NFSU2_TR(0x6782ca);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6782cd:{NFSU2_TR(0x6782cd);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6782d0:{NFSU2_TR(0x6782d0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6782d3:{NFSU2_TR(0x6782d3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6782d7:L6782d7:{c.instructions+=1;NFSU2_TR(0x6782d7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6782d8:L6782d8:{c.instructions+=2;NFSU2_TR(0x6782d8);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6782db:{NFSU2_TR(0x6782db);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6782e0ull));
TAIL_STATIC(0x575630u,575);
}
B6782e0:L6782e0:{c.instructions+=6;NFSU2_TR(0x6782e0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6782e3:{NFSU2_TR(0x6782e3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6782e4:{NFSU2_TR(0x6782e4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6782e5:{NFSU2_TR(0x6782e5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6782e6:{NFSU2_TR(0x6782e6);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6782e7:{NFSU2_TR(0x6782e7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6782ea:L6782ea:{c.instructions+=12;NFSU2_TR(0x6782ea);
__builtin_memmove((R+28),(R+28),4);
}
B6782ec:{NFSU2_TR(0x6782ec);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6782ed:{NFSU2_TR(0x6782ed);
__builtin_memmove((R+20),(R+16),4);
}
B6782ef:{NFSU2_TR(0x6782ef);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x18ull))));
}
B6782f2:{NFSU2_TR(0x6782f2);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6782f3:{NFSU2_TR(0x6782f3);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6782f4:{NFSU2_TR(0x6782f4);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6782f5:{NFSU2_TR(0x6782f5);
__builtin_memmove((R+28),(R+4),4);
}
B6782f7:{NFSU2_TR(0x6782f7);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6782fa:{NFSU2_TR(0x6782fa);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x71ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x10ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B6782fe:{NFSU2_TR(0x6782fe);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B678301:{NFSU2_TR(0x678301);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L678417;}}
}
B678307:L678307:{c.instructions+=5;NFSU2_TR(0x678307);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B67830a:{NFSU2_TR(0x67830a);
__builtin_memmove((R+0),(R+24),4);
}
B67830c:{NFSU2_TR(0x67830c);
u8 U[4];
w4(U+0,u32(u32(u32(0x3ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B67830f:{NFSU2_TR(0x67830f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B678310:{NFSU2_TR(0x678310);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x678315ull));
TAIL_STATIC(0x575620u,575);
}
B678315:L678315:{c.instructions+=5;NFSU2_TR(0x678315);
__builtin_memmove((R+12),(R+0),4);
}
B678317:{NFSU2_TR(0x678317);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B678319:{NFSU2_TR(0x678319);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B67831a:{NFSU2_TR(0x67831a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B67831d:{NFSU2_TR(0x67831d);
if(r1(R+518)){{goto L67842e;}}
}
B678323:L678323:{c.instructions+=5;NFSU2_TR(0x678323);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B678326:{NFSU2_TR(0x678326);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B678327:{NFSU2_TR(0x678327);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B678328:{NFSU2_TR(0x678328);
__builtin_memmove((R+4),(R+28),4);
}
B67832a:{NFSU2_TR(0x67832a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67832full));
TAIL_STATIC(0x673b2cu,673);
}
B67832f:L67832f:{c.instructions+=3;NFSU2_TR(0x67832f);
__builtin_memmove((R+28),(R+0),4);
}
B678331:{NFSU2_TR(0x678331);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B678333:{NFSU2_TR(0x678333);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L67855a;}}
}
B678339:L678339:{c.instructions+=5;NFSU2_TR(0x678339);
__builtin_memmove((R+8),(R+24),4);
}
B67833b:{NFSU2_TR(0x67833b);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B67833d:{NFSU2_TR(0x67833d);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B678340:{NFSU2_TR(0x678340);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B678343:{NFSU2_TR(0x678343);
__builtin_memmove((R+4),(R+12),4);
}
B678345:L678345:{c.instructions+=5;NFSU2_TR(0x678345);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffffe8ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+4),4);
s4(u32(r4(U+8)),r4(U+12));
}
B678349:{NFSU2_TR(0x678349);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B67834a:{NFSU2_TR(0x67834a);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+8))));
}
B67834c:{NFSU2_TR(0x67834c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(U+0))<(u32(0x2ull))));
}
B67834f:{NFSU2_TR(0x67834f);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x678345u);}goto L678345;}}
}
B678351:L678351:{c.instructions+=7;NFSU2_TR(0x678351);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B678354:{NFSU2_TR(0x678354);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B678356:{NFSU2_TR(0x678356);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+8),(U+0),4);
}
B678357:{NFSU2_TR(0x678357);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B678359:{NFSU2_TR(0x678359);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B67835b:{NFSU2_TR(0x67835b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B67835e:{NFSU2_TR(0x67835e);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L678387;}}
}
B678360:L678360:{c.instructions+=4;NFSU2_TR(0x678360);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B678363:{NFSU2_TR(0x678363);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B678366:{NFSU2_TR(0x678366);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B678369:{NFSU2_TR(0x678369);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B67836c:L67836c:{c.instructions+=9;NFSU2_TR(0x67836c);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B67836f:{NFSU2_TR(0x67836f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B678372:{NFSU2_TR(0x678372);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B678375:{NFSU2_TR(0x678375);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+28),(U+0),4);
}
B678377:{NFSU2_TR(0x678377);
w4(R+28,u32(u32(r4(R+28))&u32(r4(R+8))));
}
B678379:{NFSU2_TR(0x678379);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(r4(R+28))));
s4(u32(r4(U+0)),r4(U+4));
}
B67837c:{NFSU2_TR(0x67837c);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B67837d:{NFSU2_TR(0x67837d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w1(R+512,u8((r4(R+4))<(r4(U+0))));
}
B67837f:{NFSU2_TR(0x67837f);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x67836cu);}goto L67836c;}}
}
B678381:L678381:{c.instructions+=2;NFSU2_TR(0x678381);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B678385:{NFSU2_TR(0x678385);
if(r1(R+518)){{goto L67839a;}}
}
B678387:L678387:{c.instructions+=7;NFSU2_TR(0x678387);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B678388:{NFSU2_TR(0x678388);
w4(R+24,u32(u32(r4(R+24))&u32(u32(0xfffffull))));
}
B67838e:{NFSU2_TR(0x67838e);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B678390:{NFSU2_TR(0x678390);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B678391:{NFSU2_TR(0x678391);
__builtin_memmove((R+0),(R+24),4);
}
B678393:{NFSU2_TR(0x678393);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0x10000000ull))));
}
B678398:{NFSU2_TR(0x678398);
{goto L6783aa;}
}
B67839a:L67839a:{c.instructions+=6;NFSU2_TR(0x67839a);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67839b:{NFSU2_TR(0x67839b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67839c:{NFSU2_TR(0x67839c);
w4(R+24,u32(u32(r4(R+24))&u32(u32(0xfffffull))));
}
B6783a2:{NFSU2_TR(0x6783a2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6783a3:{NFSU2_TR(0x6783a3);
__builtin_memmove((R+0),(R+24),4);
}
B6783a5:{NFSU2_TR(0x6783a5);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0x20500000ull))));
}
B6783aa:L6783aa:{c.instructions+=5;NFSU2_TR(0x6783aa);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6783ad:{NFSU2_TR(0x6783ad);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6783b0:{NFSU2_TR(0x6783b0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6783b1:{NFSU2_TR(0x6783b1);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6783b4:{NFSU2_TR(0x6783b4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6783b9ull));
TAIL_STATIC(0x6758ceu,675);
}
B6783b9:L6783b9:{c.instructions+=3;NFSU2_TR(0x6783b9);
__builtin_memmove((R+28),(R+0),4);
}
B6783bb:{NFSU2_TR(0x6783bb);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B6783bd:{NFSU2_TR(0x6783bd);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L67855a;}}
}
B6783c3:L6783c3:{c.instructions+=9;NFSU2_TR(0x6783c3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6783c6:{NFSU2_TR(0x6783c6);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6783c8:{NFSU2_TR(0x6783c8);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6783ca:{NFSU2_TR(0x6783ca);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6783cd:{NFSU2_TR(0x6783cd);
w4(R+24,u32(u32(r4(R+24))|u32(u32(0x10100000ull))));
}
B6783d3:{NFSU2_TR(0x6783d3);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6783d6:{NFSU2_TR(0x6783d6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6783d7:{NFSU2_TR(0x6783d7);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6783da:{NFSU2_TR(0x6783da);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6783dfull));
TAIL_STATIC(0x6758ceu,675);
}
B6783df:L6783df:{c.instructions+=3;NFSU2_TR(0x6783df);
__builtin_memmove((R+28),(R+0),4);
}
B6783e1:{NFSU2_TR(0x6783e1);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B6783e3:{NFSU2_TR(0x6783e3);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L67855a;}}
}
B6783e9:L6783e9:{c.instructions+=3;NFSU2_TR(0x6783e9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6783ec:{NFSU2_TR(0x6783ec);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6783ee:{NFSU2_TR(0x6783ee);
if(r1(R+518)){{goto L678404;}}
}
B6783f0:L6783f0:{c.instructions+=4;NFSU2_TR(0x6783f0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6783f3:{NFSU2_TR(0x6783f3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6783f6:{NFSU2_TR(0x6783f6);
__builtin_memmove((R+0),(R+4),4);
}
B6783f8:{NFSU2_TR(0x6783f8);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B6783fb:L6783fb:{c.instructions+=1;NFSU2_TR(0x6783fb);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L6783fd;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6783fbu);}goto L6783fb;}
}
B6783fd:L6783fd:{c.instructions+=2;NFSU2_TR(0x6783fd);
__builtin_memmove((R+4),(R+0),4);
}
B6783ff:{NFSU2_TR(0x6783ff);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B678402:L678402:{c.instructions+=1;NFSU2_TR(0x678402);
u8 U[35];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L678404;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x678402u);}goto L678402;}
}
B678404:L678404:{c.instructions+=3;NFSU2_TR(0x678404);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B678407:{NFSU2_TR(0x678407);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B678409:{NFSU2_TR(0x678409);
if(r1(R+518)){{goto L678558;}}
}
B67840f:L67840f:{c.instructions+=2;NFSU2_TR(0x67840f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B678412:{NFSU2_TR(0x678412);
{goto L678547;}
}
B678417:L678417:{c.instructions+=5;NFSU2_TR(0x678417);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B67841a:{NFSU2_TR(0x67841a);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B67841d:{NFSU2_TR(0x67841d);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B678420:{NFSU2_TR(0x678420);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B678421:{NFSU2_TR(0x678421);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x678426ull));
TAIL_STATIC(0x575620u,575);
}
B678426:L678426:{c.instructions+=4;NFSU2_TR(0x678426);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B678428:{NFSU2_TR(0x678428);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B678429:{NFSU2_TR(0x678429);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B67842c:{NFSU2_TR(0x67842c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L678438;}}
}
B67842e:L67842e:{c.instructions+=2;NFSU2_TR(0x67842e);
w4(R+28,u32(0x8007000eull));
}
B678433:{NFSU2_TR(0x678433);
{goto L67855a;}
}
B678438:L678438:{c.instructions+=5;NFSU2_TR(0x678438);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B67843b:{NFSU2_TR(0x67843b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67843c:{NFSU2_TR(0x67843c);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67843f:{NFSU2_TR(0x67843f);
__builtin_memmove((R+4),(R+28),4);
}
B678441:{NFSU2_TR(0x678441);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x678446ull));
TAIL_STATIC(0x673b2cu,673);
}
B678446:L678446:{c.instructions+=3;NFSU2_TR(0x678446);
__builtin_memmove((R+28),(R+0),4);
}
B678448:{NFSU2_TR(0x678448);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B67844a:{NFSU2_TR(0x67844a);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L67855a;}}
}
B678450:L678450:{c.instructions+=5;NFSU2_TR(0x678450);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B678453:{NFSU2_TR(0x678453);
__builtin_memmove((R+8),(R+12),4);
}
B678455:{NFSU2_TR(0x678455);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B678457:{NFSU2_TR(0x678457);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B67845a:{NFSU2_TR(0x67845a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B67845d:L67845d:{c.instructions+=5;NFSU2_TR(0x67845d);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffffe8ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+4),4);
s4(u32(r4(U+8)),r4(U+12));
}
B678461:{NFSU2_TR(0x678461);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B678462:{NFSU2_TR(0x678462);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+8))));
}
B678464:{NFSU2_TR(0x678464);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(U+0))<(u32(0x3ull))));
}
B678467:{NFSU2_TR(0x678467);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x67845du);}goto L67845d;}}
}
B678469:L678469:{c.instructions+=12;NFSU2_TR(0x678469);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B67846c:{NFSU2_TR(0x67846c);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67846e:{NFSU2_TR(0x67846e);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B678470:{NFSU2_TR(0x678470);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B678473:{NFSU2_TR(0x678473);
__builtin_memmove((R+24),(R+12),4);
}
B678475:{NFSU2_TR(0x678475);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B678478:{NFSU2_TR(0x678478);
w4(R+24,u32(u32(r4(R+24))&u32(u32(0xfffffull))));
}
B67847e:{NFSU2_TR(0x67847e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B678481:{NFSU2_TR(0x678481);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffaull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w2(U+4,u16(u32(r2(U+4))|u32(u16(0x1010ull))));
s2(u32(r4(U+0)),r2(U+4));
}
B678487:{NFSU2_TR(0x678487);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67848a:{NFSU2_TR(0x67848a);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67848d:{NFSU2_TR(0x67848d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x678492ull));
TAIL_STATIC(0x6758ceu,675);
}
B678492:L678492:{c.instructions+=3;NFSU2_TR(0x678492);
__builtin_memmove((R+28),(R+0),4);
}
B678494:{NFSU2_TR(0x678494);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B678496:{NFSU2_TR(0x678496);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L67855a;}}
}
B67849c:L67849c:{c.instructions+=10;NFSU2_TR(0x67849c);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67849e:{NFSU2_TR(0x67849e);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6784a1:{NFSU2_TR(0x6784a1);
w4(R+24,u32(u32(r4(R+24))|u32(u32(0x20100000ull))));
}
B6784a7:{NFSU2_TR(0x6784a7);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6784aa:{NFSU2_TR(0x6784aa);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6784ad:{NFSU2_TR(0x6784ad);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6784ae:{NFSU2_TR(0x6784ae);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6784b1:{NFSU2_TR(0x6784b1);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6784b4:{NFSU2_TR(0x6784b4);
__builtin_memmove((R+4),(R+24),4);
}
B6784b6:{NFSU2_TR(0x6784b6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6784bbull));
TAIL_STATIC(0x6758ceu,675);
}
B6784bb:L6784bb:{c.instructions+=3;NFSU2_TR(0x6784bb);
__builtin_memmove((R+28),(R+0),4);
}
B6784bd:{NFSU2_TR(0x6784bd);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B6784bf:{NFSU2_TR(0x6784bf);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L67855a;}}
}
B6784c5:L6784c5:{c.instructions+=8;NFSU2_TR(0x6784c5);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6784c7:{NFSU2_TR(0x6784c7);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6784c9:{NFSU2_TR(0x6784c9);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6784cc:{NFSU2_TR(0x6784cc);
__builtin_memmove((R+4),(R+24),4);
}
B6784ce:{NFSU2_TR(0x6784ce);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6784d1:{NFSU2_TR(0x6784d1);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6784d4:{NFSU2_TR(0x6784d4);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6784d7:{NFSU2_TR(0x6784d7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6784dcull));
TAIL_STATIC(0x6758ceu,675);
}
B6784dc:L6784dc:{c.instructions+=3;NFSU2_TR(0x6784dc);
__builtin_memmove((R+28),(R+0),4);
}
B6784de:{NFSU2_TR(0x6784de);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B6784e0:{NFSU2_TR(0x6784e0);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L67855a;}}
}
B6784e2:L6784e2:{c.instructions+=3;NFSU2_TR(0x6784e2);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6784e4:{NFSU2_TR(0x6784e4);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6784e6:{NFSU2_TR(0x6784e6);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L678501;}}
}
B6784e8:L6784e8:{c.instructions+=2;NFSU2_TR(0x6784e8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6784eb:{NFSU2_TR(0x6784eb);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6784ee:L6784ee:{c.instructions+=5;NFSU2_TR(0x6784ee);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6784f1:{NFSU2_TR(0x6784f1);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B6784f4:{NFSU2_TR(0x6784f4);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B6784f7:{NFSU2_TR(0x6784f7);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+8))),1);
w1(U+1,u8(u32(r1(U+0))&u32(u8(0x17ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B6784fa:{NFSU2_TR(0x6784fa);
if(r1(R+518)){{goto L678501;}}
}
B6784fc:L6784fc:{c.instructions+=3;NFSU2_TR(0x6784fc);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6784fd:{NFSU2_TR(0x6784fd);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
}
B6784ff:{NFSU2_TR(0x6784ff);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6784eeu);}goto L6784ee;}}
}
B678501:L678501:{c.instructions+=2;NFSU2_TR(0x678501);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B678503:{NFSU2_TR(0x678503);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L678522;}}
}
B678505:L678505:{c.instructions+=3;NFSU2_TR(0x678505);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B678507:{NFSU2_TR(0x678507);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B678509:{NFSU2_TR(0x678509);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L678522;}}
}
B67850b:L67850b:{c.instructions+=9;NFSU2_TR(0x67850b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B67850e:{NFSU2_TR(0x67850e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B678511:{NFSU2_TR(0x678511);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B678514:{NFSU2_TR(0x678514);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B678517:{NFSU2_TR(0x678517);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B67851a:{NFSU2_TR(0x67851a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
w4(U+0,u32(u32(r4(U+0))|u32(u32(0x17ull))));
s4(u32(r4(R+0)),r4(U+0));
}
B67851d:{NFSU2_TR(0x67851d);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B67851e:{NFSU2_TR(0x67851e);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w1(R+512,u8((r4(R+4))<(r4(U+0))));
}
B678520:{NFSU2_TR(0x678520);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x67850bu);}goto L67850b;}}
}
B678522:L678522:{c.instructions+=3;NFSU2_TR(0x678522);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B678525:{NFSU2_TR(0x678525);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B678527:{NFSU2_TR(0x678527);
if(r1(R+518)){{goto L67853d;}}
}
B678529:L678529:{c.instructions+=4;NFSU2_TR(0x678529);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B67852c:{NFSU2_TR(0x67852c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B67852f:{NFSU2_TR(0x67852f);
__builtin_memmove((R+0),(R+4),4);
}
B678531:{NFSU2_TR(0x678531);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B678534:L678534:{c.instructions+=1;NFSU2_TR(0x678534);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L678536;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x678534u);}goto L678534;}
}
B678536:L678536:{c.instructions+=2;NFSU2_TR(0x678536);
__builtin_memmove((R+4),(R+0),4);
}
B678538:{NFSU2_TR(0x678538);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B67853b:L67853b:{c.instructions+=1;NFSU2_TR(0x67853b);
u8 U[35];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L67853d;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x67853bu);}goto L67853b;}
}
B67853d:L67853d:{c.instructions+=3;NFSU2_TR(0x67853d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B678540:{NFSU2_TR(0x678540);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B678542:{NFSU2_TR(0x678542);
if(r1(R+518)){{goto L678558;}}
}
B678544:L678544:{c.instructions+=1;NFSU2_TR(0x678544);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B678547:L678547:{c.instructions+=3;NFSU2_TR(0x678547);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B67854a:{NFSU2_TR(0x67854a);
__builtin_memmove((R+0),(R+4),4);
}
B67854c:{NFSU2_TR(0x67854c);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B67854f:L67854f:{c.instructions+=1;NFSU2_TR(0x67854f);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L678551;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x67854fu);}goto L67854f;}
}
B678551:L678551:{c.instructions+=2;NFSU2_TR(0x678551);
__builtin_memmove((R+4),(R+0),4);
}
B678553:{NFSU2_TR(0x678553);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B678556:L678556:{c.instructions+=1;NFSU2_TR(0x678556);
u8 U[35];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L678558;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x678556u);}goto L678556;}
}
B678558:L678558:{c.instructions+=1;NFSU2_TR(0x678558);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B67855a:L67855a:{c.instructions+=2;NFSU2_TR(0x67855a);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67855d:{NFSU2_TR(0x67855d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x678562ull));
TAIL_STATIC(0x575630u,575);
}
B678562:L678562:{c.instructions+=7;NFSU2_TR(0x678562);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B678563:{NFSU2_TR(0x678563);
__builtin_memmove((R+0),(R+28),4);
}
B678565:{NFSU2_TR(0x678565);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B678566:{NFSU2_TR(0x678566);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B678567:{NFSU2_TR(0x678567);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B678568:{NFSU2_TR(0x678568);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B678569:{NFSU2_TR(0x678569);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B67856c:L67856c:{c.instructions+=8;NFSU2_TR(0x67856c);
__builtin_memmove((R+28),(R+28),4);
}
B67856e:{NFSU2_TR(0x67856e);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67856f:{NFSU2_TR(0x67856f);
__builtin_memmove((R+20),(R+16),4);
}
B678571:{NFSU2_TR(0x678571);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B678572:{NFSU2_TR(0x678572);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B678576:{NFSU2_TR(0x678576);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B678577:{NFSU2_TR(0x678577);
__builtin_memmove((R+28),(R+4),4);
}
B678579:{NFSU2_TR(0x678579);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L678582;}}
}
B67857b:L67857b:{c.instructions+=2;NFSU2_TR(0x67857b);
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
B67857d:{NFSU2_TR(0x67857d);
{goto L67863b;}
}
B678582:L678582:{c.instructions+=5;NFSU2_TR(0x678582);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B678585:{NFSU2_TR(0x678585);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B678588:{NFSU2_TR(0x678588);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B67858c:{NFSU2_TR(0x67858c);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B67858f:{NFSU2_TR(0x67858f);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L678599;}}
}
B678591:L678591:{c.instructions+=3;NFSU2_TR(0x678591);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B678594:{NFSU2_TR(0x678594);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B678597:{NFSU2_TR(0x678597);
{goto L67859b;}
}
B678599:L678599:{c.instructions+=1;NFSU2_TR(0x678599);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B67859b:L67859b:{c.instructions+=2;NFSU2_TR(0x67859b);
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
B67859d:{NFSU2_TR(0x67859d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6785a9;}}
}
B67859f:L67859f:{c.instructions+=2;NFSU2_TR(0x67859f);
w4(R+0,u32(0x80004005ull));
}
B6785a4:{NFSU2_TR(0x6785a4);
{goto L67863b;}
}
B6785a9:L6785a9:{c.instructions+=2;NFSU2_TR(0x6785a9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6785aa:{NFSU2_TR(0x6785aa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6785afull));
TAIL_STATIC(0x699cf0u,699);
}
B6785af:L6785af:{c.instructions+=4;NFSU2_TR(0x6785af);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6785b2:{NFSU2_TR(0x6785b2);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6785b5:{NFSU2_TR(0x6785b5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6785b8:{NFSU2_TR(0x6785b8);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L6785c2;}}
}
B6785ba:L6785ba:{c.instructions+=3;NFSU2_TR(0x6785ba);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6785bd:{NFSU2_TR(0x6785bd);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6785c0:{NFSU2_TR(0x6785c0);
{goto L6785c4;}
}
B6785c2:L6785c2:{c.instructions+=1;NFSU2_TR(0x6785c2);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B6785c4:L6785c4:{c.instructions+=2;NFSU2_TR(0x6785c4);
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
B6785c6:{NFSU2_TR(0x6785c6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6785cf;}}
}
B6785c8:L6785c8:{c.instructions+=2;NFSU2_TR(0x6785c8);
w4(R+0,u32(0x8007000eull));
}
B6785cd:{NFSU2_TR(0x6785cd);
{goto L67863b;}
}
B6785cf:L6785cf:{c.instructions+=4;NFSU2_TR(0x6785cf);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0x40ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6785d3:{NFSU2_TR(0x6785d3);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6785d6:{NFSU2_TR(0x6785d6);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(u8(0x10ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6785d9:{NFSU2_TR(0x6785d9);
if(r1(R+518)){{goto L678616;}}
}
B6785db:L6785db:{c.instructions+=2;NFSU2_TR(0x6785db);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(r1(R+8))));
w1(R+519,u8(s8(r1(U+0))<s8(u8(0x0ull))));
}
B6785dd:{NFSU2_TR(0x6785dd);
if(r1(R+519)){{goto L678616;}}
}
B6785df:L6785df:{c.instructions+=6;NFSU2_TR(0x6785df);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6785e0:{NFSU2_TR(0x6785e0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6785e1:{NFSU2_TR(0x6785e1);
w4(R+24,u32(0x200ull));
}
B6785e6:{NFSU2_TR(0x6785e6);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6785e8:{NFSU2_TR(0x6785e8);
w4(R+12,u32(0x400ull));
}
B6785ed:{NFSU2_TR(0x6785ed);
if(r1(R+518)){{goto L6785fc;}}
}
B6785ef:L6785ef:{c.instructions+=3;NFSU2_TR(0x6785ef);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6785f2:{NFSU2_TR(0x6785f2);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+8,u32(u32(r4(U+4))&u32(r4(R+24))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B6785f5:{NFSU2_TR(0x6785f5);
if(r1(R+518)){{goto L6785fc;}}
}
B6785f7:L6785f7:{c.instructions+=2;NFSU2_TR(0x6785f7);
w4(R+8,u32(u32(r4(R+8))|u32(r4(R+12))));
}
B6785f9:{NFSU2_TR(0x6785f9);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6785fc:L6785fc:{c.instructions+=3;NFSU2_TR(0x6785fc);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6785ff:{NFSU2_TR(0x6785ff);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B678601:{NFSU2_TR(0x678601);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L678614;}}
}
B678603:L678603:{c.instructions+=3;NFSU2_TR(0x678603);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B678606:{NFSU2_TR(0x678606);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+8,u32(u32(r4(U+4))&u32(r4(R+12))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B678609:{NFSU2_TR(0x678609);
if(r1(R+518)){{goto L678614;}}
}
B67860b:L67860b:{c.instructions+=2;NFSU2_TR(0x67860b);
w4(R+8,u32(u32(r4(R+8))|u32(u32(0x100400ull))));
}
B678611:{NFSU2_TR(0x678611);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B678614:L678614:{c.instructions+=2;NFSU2_TR(0x678614);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B678615:{NFSU2_TR(0x678615);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B678616:L678616:{c.instructions+=13;NFSU2_TR(0x678616);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B678618:{NFSU2_TR(0x678618);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67861b:{NFSU2_TR(0x67861b);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+0),(U+0),4);
}
B67861e:{NFSU2_TR(0x67861e);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B678621:{NFSU2_TR(0x678621);
__builtin_memmove((R+4),(R+28),4);
}
B678623:{NFSU2_TR(0x678623);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B678624:{NFSU2_TR(0x678624);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B678627:{NFSU2_TR(0x678627);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67862a:{NFSU2_TR(0x67862a);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67862d:{NFSU2_TR(0x67862d);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B678630:{NFSU2_TR(0x678630);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B678633:{NFSU2_TR(0x678633);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B678636:{NFSU2_TR(0x678636);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67863bull));
TAIL_STATIC(0x67614bu,676);
}
B67863b:L67863b:{c.instructions+=3;NFSU2_TR(0x67863b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B67863c:{NFSU2_TR(0x67863c);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B67863d:{NFSU2_TR(0x67863d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x1cull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B678640:L678640:{c.instructions+=13;NFSU2_TR(0x678640);
__builtin_memmove((R+28),(R+28),4);
}
B678642:{NFSU2_TR(0x678642);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B678643:{NFSU2_TR(0x678643);
__builtin_memmove((R+20),(R+16),4);
}
B678645:{NFSU2_TR(0x678645);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B678646:{NFSU2_TR(0x678646);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B678647:{NFSU2_TR(0x678647);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B67864a:{NFSU2_TR(0x67864a);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B67864c:{NFSU2_TR(0x67864c);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67864d:{NFSU2_TR(0x67864d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67864e:{NFSU2_TR(0x67864e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67864f:{NFSU2_TR(0x67864f);
__builtin_memmove((R+28),(R+4),4);
}
B678651:{NFSU2_TR(0x678651);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B678658:{NFSU2_TR(0x678658);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6786c5;}}
}
B67865a:L67865a:{c.instructions+=2;NFSU2_TR(0x67865a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B67865d:{NFSU2_TR(0x67865d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B678660:L678660:{c.instructions+=7;NFSU2_TR(0x678660);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B678663:{NFSU2_TR(0x678663);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+4),(U+0),4);
}
B678665:{NFSU2_TR(0x678665);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B678668:{NFSU2_TR(0x678668);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B67866b:{NFSU2_TR(0x67866b);
w4(R+24,u32(u32(r4(R+24))|u32(u32(0xffffffffull))));
}
B67866e:{NFSU2_TR(0x67866e);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+24))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B678671:{NFSU2_TR(0x678671);
if(r1(R+518)){{goto L6786a2;}}
}
B678673:L678673:{c.instructions+=2;NFSU2_TR(0x678673);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+24))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B678676:{NFSU2_TR(0x678676);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6786a2;}}
}
B678678:L678678:{c.instructions+=6;NFSU2_TR(0x678678);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B67867b:{NFSU2_TR(0x67867b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B67867e:{NFSU2_TR(0x67867e);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B678681:{NFSU2_TR(0x678681);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B678684:{NFSU2_TR(0x678684);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B678688:{NFSU2_TR(0x678688);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L678696;}}
}
B67868a:L67868a:{c.instructions+=4;NFSU2_TR(0x67868a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B67868d:{NFSU2_TR(0x67868d);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x60ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B678690:{NFSU2_TR(0x678690);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B678693:{NFSU2_TR(0x678693);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x64ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B678696:L678696:{c.instructions+=5;NFSU2_TR(0x678696);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B678699:{NFSU2_TR(0x678699);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+8)),r4(U+0));
}
B67869b:{NFSU2_TR(0x67869b);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+24))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B67869e:{NFSU2_TR(0x67869e);
__builtin_memmove((R+0),(R+4),4);
}
B6786a0:{NFSU2_TR(0x6786a0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x678673u);}goto L678673;}}
}
B6786a2:L6786a2:{c.instructions+=6;NFSU2_TR(0x6786a2);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6786a5:{NFSU2_TR(0x6786a5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6786a8:{NFSU2_TR(0x6786a8);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6786ab:{NFSU2_TR(0x6786ab);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6786ae:{NFSU2_TR(0x6786ae);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x5ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B6786b2:{NFSU2_TR(0x6786b2);
if(r1(R+518)){{goto L6786b9;}}
}
B6786b4:L6786b4:{c.instructions+=2;NFSU2_TR(0x6786b4);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+24))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6786b7:{NFSU2_TR(0x6786b7);
if(r1(R+518)){{goto L6786bd;}}
}
B6786b9:L6786b9:{c.instructions+=1;NFSU2_TR(0x6786b9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6786bd:L6786bd:{c.instructions+=3;NFSU2_TR(0x6786bd);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x4ull))));
}
B6786c0:{NFSU2_TR(0x6786c0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6786c3:{NFSU2_TR(0x6786c3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x678660u);}goto L678660;}}
}
B6786c5:L6786c5:{c.instructions+=3;NFSU2_TR(0x6786c5);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B6786c7:{NFSU2_TR(0x6786c7);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6786ca:{NFSU2_TR(0x6786ca);
if(r1(R+518)){{goto L67873e;}}
}
B6786cc:L6786cc:{c.instructions+=2;NFSU2_TR(0x6786cc);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6786cf:{NFSU2_TR(0x6786cf);
if(r1(R+518)){{goto L67873e;}}
}
B6786d1:L6786d1:{c.instructions+=2;NFSU2_TR(0x6786d1);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+12))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6786d4:{NFSU2_TR(0x6786d4);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L67871f;}}
}
B6786d6:L6786d6:{c.instructions+=13;NFSU2_TR(0x6786d6);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6786d9:{NFSU2_TR(0x6786d9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6786dc:{NFSU2_TR(0x6786dc);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6786df:{NFSU2_TR(0x6786df);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6786e2:{NFSU2_TR(0x6786e2);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+24),(U+8),4);
}
B6786e5:{NFSU2_TR(0x6786e5);
{u32 ea_=u32(r4(R+24)+u32(32u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B6786e8:{NFSU2_TR(0x6786e8);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6786e9:{NFSU2_TR(0x6786e9);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6786ea:{NFSU2_TR(0x6786ea);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B6786ed:{NFSU2_TR(0x6786ed);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6786ef:{NFSU2_TR(0x6786ef);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6786f1:{NFSU2_TR(0x6786f1);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6786f4:{NFSU2_TR(0x6786f4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6786f9ull));
TAIL_STATIC(0x699c39u,699);
}
B6786f9:L6786f9:{c.instructions+=4;NFSU2_TR(0x6786f9);
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
B6786fc:{NFSU2_TR(0x6786fc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6786ff:{NFSU2_TR(0x6786ff);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+0),4);
s4(u32(r4(U+4)),r4(U+8));
}
B678702:{NFSU2_TR(0x678702);
if(r1(R+518)){{goto L678747;}}
}
B678704:L678704:{c.instructions+=10;NFSU2_TR(0x678704);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B678707:{NFSU2_TR(0x678707);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B67870a:{NFSU2_TR(0x67870a);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B67870d:{NFSU2_TR(0x67870d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B678710:{NFSU2_TR(0x678710);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x60ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B678713:{NFSU2_TR(0x678713);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B678716:{NFSU2_TR(0x678716);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B678717:{NFSU2_TR(0x678717);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+12))<(r4(U+8))));
}
B67871a:{NFSU2_TR(0x67871a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x64ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B67871d:{NFSU2_TR(0x67871d);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6786d6u);}goto L6786d6;}}
}
B67871f:L67871f:{c.instructions+=10;NFSU2_TR(0x67871f);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B678722:{NFSU2_TR(0x678722);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B678724:{NFSU2_TR(0x678724);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B678726:{NFSU2_TR(0x678726);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B678728:{NFSU2_TR(0x678728);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67872a:{NFSU2_TR(0x67872a);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67872d:{NFSU2_TR(0x67872d);
__builtin_memmove((R+4),(R+28),4);
}
B67872f:{NFSU2_TR(0x67872f);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B678732:{NFSU2_TR(0x678732);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B678735:{NFSU2_TR(0x678735);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67873aull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x67856cu);}goto L67856c;}
}
B67873a:L67873a:{c.instructions+=2;NFSU2_TR(0x67873a);
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
B67873c:{NFSU2_TR(0x67873c);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L678740;}}
}
B67873e:L67873e:{c.instructions+=1;NFSU2_TR(0x67873e);
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
B678740:L678740:{c.instructions+=5;NFSU2_TR(0x678740);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B678741:{NFSU2_TR(0x678741);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B678742:{NFSU2_TR(0x678742);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B678743:{NFSU2_TR(0x678743);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B678744:{NFSU2_TR(0x678744);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B678747:L678747:{c.instructions+=2;NFSU2_TR(0x678747);
w4(R+0,u32(0x8007000eull));
}
B67874c:{NFSU2_TR(0x67874c);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x678740u);}goto L678740;}
}
B67874e:L67874e:{c.instructions+=11;NFSU2_TR(0x67874e);
__builtin_memmove((R+28),(R+28),4);
}
B678750:{NFSU2_TR(0x678750);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B678751:{NFSU2_TR(0x678751);
__builtin_memmove((R+20),(R+16),4);
}
B678753:{NFSU2_TR(0x678753);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x24ull))));
}
B678756:{NFSU2_TR(0x678756);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B678757:{NFSU2_TR(0x678757);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B678758:{NFSU2_TR(0x678758);
__builtin_memmove((R+24),(R+4),4);
}
B67875a:{NFSU2_TR(0x67875a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B67875d:{NFSU2_TR(0x67875d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67875e:{NFSU2_TR(0x67875e);
w4(R+12,u32(u32(r4(R+12))|u32(u32(0xffffffffull))));
}
B678761:{NFSU2_TR(0x678761);
{goto L6787e6;}
}
B678766:L678766:{c.instructions+=6;NFSU2_TR(0x678766);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B678769:{NFSU2_TR(0x678769);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B67876c:{NFSU2_TR(0x67876c);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B67876f:{NFSU2_TR(0x67876f);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B678772:{NFSU2_TR(0x678772);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B678774:{NFSU2_TR(0x678774);
if(r1(R+518)){{goto L6787ee;}}
}
B678776:L678776:{c.instructions+=5;NFSU2_TR(0x678776);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B678779:{NFSU2_TR(0x678779);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B67877c:{NFSU2_TR(0x67877c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B67877e:{NFSU2_TR(0x67877e);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x10000001ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B678783:{NFSU2_TR(0x678783);
if(r1(R+518)){{goto L6787e1;}}
}
B678785:L678785:{c.instructions+=2;NFSU2_TR(0x678785);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x20500001ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B67878a:{NFSU2_TR(0x67878a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6787f7;}}
}
B67878c:L67878c:{c.instructions+=6;NFSU2_TR(0x67878c);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B67878f:{NFSU2_TR(0x67878f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B678790:{NFSU2_TR(0x678790);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B678793:{NFSU2_TR(0x678793);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+4));
}
B678795:{NFSU2_TR(0x678795);
__builtin_memmove((R+4),(R+24),4);
}
B678797:{NFSU2_TR(0x678797);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67879cull));
TAIL_STATIC(0x675732u,675);
}
B67879c:L67879c:{c.instructions+=2;NFSU2_TR(0x67879c);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B67879e:{NFSU2_TR(0x67879e);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6787ba;}}
}
B6787a0:L6787a0:{c.instructions+=6;NFSU2_TR(0x6787a0);
{u32 ea_=u32(r4(R+20)+u32(4294967268u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B6787a3:{NFSU2_TR(0x6787a3);
{u32 ea_=u32(u32(7892584u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B6787a9:{NFSU2_TR(0x6787a9);
__asm__ volatile(".byte 0xda,0xe9":::"memory");
}
B6787ab:{NFSU2_TR(0x6787ab);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B6787ad:{NFSU2_TR(0x6787ad);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B6787b0:{NFSU2_TR(0x6787b0);
if(r1(R+514)){{goto L6787ba;}}
}
B6787b2:L6787b2:{c.instructions+=3;NFSU2_TR(0x6787b2);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6787b5:{NFSU2_TR(0x6787b5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6787b8:{NFSU2_TR(0x6787b8);
{goto L6787e6;}
}
B6787ba:L6787ba:{c.instructions+=6;NFSU2_TR(0x6787ba);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6787bd:{NFSU2_TR(0x6787bd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6787be:{NFSU2_TR(0x6787be);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6787c1:{NFSU2_TR(0x6787c1);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6787c4:{NFSU2_TR(0x6787c4);
__builtin_memmove((R+4),(R+24),4);
}
B6787c6:{NFSU2_TR(0x6787c6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6787cbull));
TAIL_STATIC(0x675732u,675);
}
B6787cb:L6787cb:{c.instructions+=2;NFSU2_TR(0x6787cb);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B6787cd:{NFSU2_TR(0x6787cd);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6787ee;}}
}
B6787cf:L6787cf:{c.instructions+=6;NFSU2_TR(0x6787cf);
{u32 ea_=u32(r4(R+20)+u32(4294967268u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B6787d2:{NFSU2_TR(0x6787d2);
{u32 ea_=u32(u32(7892584u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B6787d8:{NFSU2_TR(0x6787d8);
__asm__ volatile(".byte 0xda,0xe9":::"memory");
}
B6787da:{NFSU2_TR(0x6787da);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B6787dc:{NFSU2_TR(0x6787dc);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B6787df:{NFSU2_TR(0x6787df);
if(r1(R+514)){{goto L6787ee;}}
}
B6787e1:L6787e1:{c.instructions+=2;NFSU2_TR(0x6787e1);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6787e4:{NFSU2_TR(0x6787e4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6787e6:L6787e6:{c.instructions+=2;NFSU2_TR(0x6787e6);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6787e8:{NFSU2_TR(0x6787e8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x678766u);}goto L678766;}}
}
B6787ee:L6787ee:{c.instructions+=1;NFSU2_TR(0x6787ee);
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
B6787f0:L6787f0:{c.instructions+=5;NFSU2_TR(0x6787f0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6787f1:{NFSU2_TR(0x6787f1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6787f2:{NFSU2_TR(0x6787f2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6787f3:{NFSU2_TR(0x6787f3);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6787f4:{NFSU2_TR(0x6787f4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6787f7:L6787f7:{c.instructions+=3;NFSU2_TR(0x6787f7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6787f9:{NFSU2_TR(0x6787f9);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x20200001ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6787fe:{NFSU2_TR(0x6787fe);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6788bf;}}
}
B678804:L678804:{c.instructions+=6;NFSU2_TR(0x678804);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B678807:{NFSU2_TR(0x678807);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B678808:{NFSU2_TR(0x678808);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B67880b:{NFSU2_TR(0x67880b);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+4));
}
B67880d:{NFSU2_TR(0x67880d);
__builtin_memmove((R+4),(R+24),4);
}
B67880f:{NFSU2_TR(0x67880f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x678814ull));
TAIL_STATIC(0x675732u,675);
}
B678814:L678814:{c.instructions+=2;NFSU2_TR(0x678814);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B678816:{NFSU2_TR(0x678816);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6787eeu);}goto L6787ee;}}
}
B678818:L678818:{c.instructions+=4;NFSU2_TR(0x678818);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B67881b:{NFSU2_TR(0x67881b);
{u32 ea_=u32(r4(R+20)+u32(12u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B67881e:{NFSU2_TR(0x67881e);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B678820:{NFSU2_TR(0x678820);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L678828;}}
}
B678822:L678822:{c.instructions+=1;NFSU2_TR(0x678822);
{u32 ea_=u32(u32(8042640u));__asm__ volatile(".byte 0xdc,0x00"::"a"(ea_):"memory");}
}
B678828:L678828:{c.instructions+=5;NFSU2_TR(0x678828);
{u32 ea_=u32(r4(R+20)+u32(4294967268u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B67882b:{NFSU2_TR(0x67882b);
__asm__ volatile(".byte 0xda,0xe9":::"memory");
}
B67882d:{NFSU2_TR(0x67882d);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B67882f:{NFSU2_TR(0x67882f);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B678832:{NFSU2_TR(0x678832);
if(r1(R+514)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6787eeu);}goto L6787ee;}}
}
B678834:L678834:{c.instructions+=9;NFSU2_TR(0x678834);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B678837:{NFSU2_TR(0x678837);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B67883a:{NFSU2_TR(0x67883a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B67883d:{NFSU2_TR(0x67883d);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67883f:{NFSU2_TR(0x67883f);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B678842:{NFSU2_TR(0x678842);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B678843:{NFSU2_TR(0x678843);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B678845:{NFSU2_TR(0x678845);
__builtin_memmove((R+4),(R+24),4);
}
B678847:{NFSU2_TR(0x678847);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67884cull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x678640u);}goto L678640;}
}
B67884c:L67884c:{c.instructions+=2;NFSU2_TR(0x67884c);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B67884e:{NFSU2_TR(0x67884e);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6787eeu);}goto L6787ee;}}
}
B678850:L678850:{c.instructions+=4;NFSU2_TR(0x678850);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B678853:{NFSU2_TR(0x678853);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+0),(U+0),4);
}
B678855:{NFSU2_TR(0x678855);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B678858:{NFSU2_TR(0x678858);
if(r1(R+518)){{goto L678866;}}
}
B67885a:L67885a:{c.instructions+=5;NFSU2_TR(0x67885a);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B67885c:{NFSU2_TR(0x67885c);
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
B67885f:{NFSU2_TR(0x67885f);
__builtin_memmove((R+4),(R+518),1);
}
B678862:{NFSU2_TR(0x678862);
__builtin_memmove((R+0),(R+4),4);
}
B678864:{NFSU2_TR(0x678864);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6787f0u);}goto L6787f0;}
}
B678866:L678866:{c.instructions+=6;NFSU2_TR(0x678866);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B678869:{NFSU2_TR(0x678869);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B67886c:{NFSU2_TR(0x67886c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B67886f:{NFSU2_TR(0x67886f);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B678872:{NFSU2_TR(0x678872);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
w1(U+1,u8(u32(r1(U+0))&u32(u8(0x2ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B678875:{NFSU2_TR(0x678875);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6787eeu);}goto L6787ee;}}
}
B67887b:L67887b:{c.instructions+=6;NFSU2_TR(0x67887b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B67887e:{NFSU2_TR(0x67887e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B678881:{NFSU2_TR(0x678881);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B678884:{NFSU2_TR(0x678884);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B678887:{NFSU2_TR(0x678887);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B67888a:{NFSU2_TR(0x67888a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6787eeu);}goto L6787ee;}}
}
B678890:L678890:{c.instructions+=2;NFSU2_TR(0x678890);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(u8(0x10ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B678892:{NFSU2_TR(0x678892);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6787eeu);}goto L6787ee;}}
}
B678898:L678898:{c.instructions+=2;NFSU2_TR(0x678898);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x2ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B67889b:{NFSU2_TR(0x67889b);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6787eeu);}goto L6787ee;}}
}
B6788a1:L6788a1:{c.instructions+=3;NFSU2_TR(0x6788a1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6788a4:{NFSU2_TR(0x6788a4);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6788a6:{NFSU2_TR(0x6788a6);
if(r1(R+518)){{goto L6788b5;}}
}
B6788a8:L6788a8:{c.instructions+=3;NFSU2_TR(0x6788a8);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6788ab:{NFSU2_TR(0x6788ab);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+24),(U+0),4);
}
B6788ad:{NFSU2_TR(0x6788ad);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6788b0:L6788b0:{c.instructions+=2;NFSU2_TR(0x6788b0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6788b3:{NFSU2_TR(0x6788b3);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B6788b5:L6788b5:{c.instructions+=1;NFSU2_TR(0x6788b5);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+12)),r4(U+0));
}
B6788b7:L6788b7:{c.instructions+=3;NFSU2_TR(0x6788b7);
w1(R+512,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6788b9:{NFSU2_TR(0x6788b9);
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
B6788ba:{NFSU2_TR(0x6788ba);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6787f0u);}goto L6787f0;}
}
B6788bf:L6788bf:{c.instructions+=2;NFSU2_TR(0x6788bf);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x30000001ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6788c4:{NFSU2_TR(0x6788c4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6787eeu);}goto L6787ee;}}
}
B6788ca:L6788ca:{c.instructions+=11;NFSU2_TR(0x6788ca);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6788cd:{NFSU2_TR(0x6788cd);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6788d0:{NFSU2_TR(0x6788d0);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6788d3:{NFSU2_TR(0x6788d3);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6788d6:{NFSU2_TR(0x6788d6);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6788d9:{NFSU2_TR(0x6788d9);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6788dc:{NFSU2_TR(0x6788dc);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6788df:{NFSU2_TR(0x6788df);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6788e2:{NFSU2_TR(0x6788e2);
w4(R+8,u32(0x100ull));
}
B6788e7:{NFSU2_TR(0x6788e7);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+8,u32(u32(r4(U+4))&u32(r4(R+8))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B6788ea:{NFSU2_TR(0x6788ea);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6787eeu);}goto L6787ee;}}
}
B6788f0:L6788f0:{c.instructions+=2;NFSU2_TR(0x6788f0);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6788f3:{NFSU2_TR(0x6788f3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6787eeu);}goto L6787ee;}}
}
B6788f9:L6788f9:{c.instructions+=6;NFSU2_TR(0x6788f9);
{u32 ea_=u32(r4(R+4)+u32(32u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B6788fc:{NFSU2_TR(0x6788fc);
{u32 ea_=u32(u32(7892576u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B678902:{NFSU2_TR(0x678902);
__asm__ volatile(".byte 0xda,0xe9":::"memory");
}
B678904:{NFSU2_TR(0x678904);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B678906:{NFSU2_TR(0x678906);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B678909:{NFSU2_TR(0x678909);
if(r1(R+514)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6787eeu);}goto L6787ee;}}
}
B67890f:L67890f:{c.instructions+=9;NFSU2_TR(0x67890f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B678912:{NFSU2_TR(0x678912);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B678915:{NFSU2_TR(0x678915);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B678918:{NFSU2_TR(0x678918);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B67891b:{NFSU2_TR(0x67891b);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B67891e:{NFSU2_TR(0x67891e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B678921:{NFSU2_TR(0x678921);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B678924:{NFSU2_TR(0x678924);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+8,u32(u32(r4(U+4))&u32(r4(R+8))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B678927:{NFSU2_TR(0x678927);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6787eeu);}goto L6787ee;}}
}
B67892d:L67892d:{c.instructions+=2;NFSU2_TR(0x67892d);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B678931:{NFSU2_TR(0x678931);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6787eeu);}goto L6787ee;}}
}
B678937:L678937:{c.instructions+=6;NFSU2_TR(0x678937);
{u32 ea_=u32(r4(R+4)+u32(32u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B67893a:{NFSU2_TR(0x67893a);
{u32 ea_=u32(u32(7892584u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B678940:{NFSU2_TR(0x678940);
__asm__ volatile(".byte 0xda,0xe9":::"memory");
}
B678942:{NFSU2_TR(0x678942);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B678944:{NFSU2_TR(0x678944);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B678947:{NFSU2_TR(0x678947);
if(r1(R+514)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6787eeu);}goto L6787ee;}}
}
B67894d:L67894d:{c.instructions+=9;NFSU2_TR(0x67894d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B678950:{NFSU2_TR(0x678950);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B678953:{NFSU2_TR(0x678953);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+28),(U+0),4);
}
B678955:{NFSU2_TR(0x678955);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B678958:{NFSU2_TR(0x678958);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B67895b:{NFSU2_TR(0x67895b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B67895e:{NFSU2_TR(0x67895e);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B678961:{NFSU2_TR(0x678961);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x2ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B678965:{NFSU2_TR(0x678965);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6787eeu);}goto L6787ee;}}
}
B67896b:L67896b:{c.instructions+=2;NFSU2_TR(0x67896b);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B67896f:{NFSU2_TR(0x67896f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6787eeu);}goto L6787ee;}}
}
B678975:L678975:{c.instructions+=9;NFSU2_TR(0x678975);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B678978:{NFSU2_TR(0x678978);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B67897b:{NFSU2_TR(0x67897b);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B67897e:{NFSU2_TR(0x67897e);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B678981:{NFSU2_TR(0x678981);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B678983:{NFSU2_TR(0x678983);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfff00000ull))));
}
B678988:{NFSU2_TR(0x678988);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x20400000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B67898d:{NFSU2_TR(0x67898d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B678990:{NFSU2_TR(0x678990);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6787eeu);}goto L6787ee;}}
}
B678996:L678996:{c.instructions+=4;NFSU2_TR(0x678996);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B678999:{NFSU2_TR(0x678999);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B67899d:{NFSU2_TR(0x67899d);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B67899f:{NFSU2_TR(0x67899f);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6789b3;}}
}
B6789a1:L6789a1:{c.instructions+=1;NFSU2_TR(0x6789a1);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6789a4:L6789a4:{c.instructions+=2;NFSU2_TR(0x6789a4);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(r4(R+28))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B6789a6:{NFSU2_TR(0x6789a6);
if(r1(R+518)){{goto L6789b3;}}
}
B6789a8:L6789a8:{c.instructions+=4;NFSU2_TR(0x6789a8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6789ab:{NFSU2_TR(0x6789ab);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x4ull))));
}
B6789ae:{NFSU2_TR(0x6789ae);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+0))));
}
B6789b1:{NFSU2_TR(0x6789b1);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6789a4u);}goto L6789a4;}}
}
B6789b3:L6789b3:{c.instructions+=3;NFSU2_TR(0x6789b3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6789b7:{NFSU2_TR(0x6789b7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6789be:{NFSU2_TR(0x6789be);
{goto L6789c3;}
}
B6789c0:L6789c0:{c.instructions+=1;NFSU2_TR(0x6789c0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6789c3:L6789c3:{c.instructions+=15;NFSU2_TR(0x6789c3);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6789c6:{NFSU2_TR(0x6789c6);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6789c9:{NFSU2_TR(0x6789c9);
__builtin_memmove((R+4),(R+0),4);
}
B6789cb:{NFSU2_TR(0x6789cb);
u8 U[32];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
w8(U+8,u64(s64(s32(r4(R+4)))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+16,u64(s64(s32(r4(U+4)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+4,u32(r8(U+24)));
}
B6789cf:{NFSU2_TR(0x6789cf);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+4,u32(u32(r4(R+4))+u32(r4(U+4))));
}
B6789d2:{NFSU2_TR(0x6789d2);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B6789d5:{NFSU2_TR(0x6789d5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6789d8:{NFSU2_TR(0x6789d8);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6789db:{NFSU2_TR(0x6789db);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6789de:{NFSU2_TR(0x6789de);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6789e1:{NFSU2_TR(0x6789e1);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B6789e4:{NFSU2_TR(0x6789e4);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6789e7:{NFSU2_TR(0x6789e7);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6789ea:{NFSU2_TR(0x6789ea);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x2ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B6789ee:{NFSU2_TR(0x6789ee);
if(r1(R+518)){{goto L678ad5;}}
}
B6789f4:L6789f4:{c.instructions+=2;NFSU2_TR(0x6789f4);
u8 U[16];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6789f8:{NFSU2_TR(0x6789f8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L678ad5;}}
}
B6789fe:L6789fe:{c.instructions+=8;NFSU2_TR(0x6789fe);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B678a01:{NFSU2_TR(0x678a01);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B678a04:{NFSU2_TR(0x678a04);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B678a07:{NFSU2_TR(0x678a07);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B678a0a:{NFSU2_TR(0x678a0a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B678a0c:{NFSU2_TR(0x678a0c);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0xfff00000ull))));
}
B678a12:{NFSU2_TR(0x678a12);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x10100000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B678a18:{NFSU2_TR(0x678a18);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L678ad5;}}
}
B678a1e:L678a1e:{c.instructions+=3;NFSU2_TR(0x678a1e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B678a22:{NFSU2_TR(0x678a22);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x0ull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B678a26:{NFSU2_TR(0x678a26);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L678a40;}}
}
B678a28:L678a28:{c.instructions+=1;NFSU2_TR(0x678a28);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B678a2b:L678a2b:{c.instructions+=3;NFSU2_TR(0x678a2b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+12),(U+0),4);
}
B678a2d:{NFSU2_TR(0x678a2d);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+12))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B678a30:{NFSU2_TR(0x678a30);
if(r1(R+518)){{goto L678a40;}}
}
B678a32:L678a32:{c.instructions+=5;NFSU2_TR(0x678a32);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B678a35:{NFSU2_TR(0x678a35);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B678a38:{NFSU2_TR(0x678a38);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x4ull))));
}
B678a3b:{NFSU2_TR(0x678a3b);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+12))));
}
B678a3e:{NFSU2_TR(0x678a3e);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x678a2bu);}goto L678a2b;}}
}
B678a40:L678a40:{c.instructions+=11;NFSU2_TR(0x678a40);
u8 U[32];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
w8(U+8,u64(s64(s32(r4(R+0)))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+16,u64(s64(s32(r4(U+4)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+0,u32(r8(U+24)));
}
B678a44:{NFSU2_TR(0x678a44);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))+u32(r4(U+4))));
}
B678a47:{NFSU2_TR(0x678a47);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B678a4a:{NFSU2_TR(0x678a4a);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B678a4d:{NFSU2_TR(0x678a4d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B678a50:{NFSU2_TR(0x678a50);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+12),(U+8),4);
}
B678a53:{NFSU2_TR(0x678a53);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((R+0),(U+0),4);
}
B678a56:{NFSU2_TR(0x678a56);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B678a57:{NFSU2_TR(0x678a57);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B678a58:{NFSU2_TR(0x678a58);
__builtin_memmove((R+4),(R+24),4);
}
B678a5a:{NFSU2_TR(0x678a5a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x678a5full));
TAIL_STATIC(0x675732u,675);
}
B678a5f:L678a5f:{c.instructions+=2;NFSU2_TR(0x678a5f);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B678a61:{NFSU2_TR(0x678a61);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L678ad5;}}
}
B678a63:L678a63:{c.instructions+=4;NFSU2_TR(0x678a63);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B678a66:{NFSU2_TR(0x678a66);
{u32 ea_=u32(r4(R+20)+u32(12u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B678a69:{NFSU2_TR(0x678a69);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B678a6b:{NFSU2_TR(0x678a6b);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L678a73;}}
}
B678a6d:L678a6d:{c.instructions+=1;NFSU2_TR(0x678a6d);
{u32 ea_=u32(u32(8042640u));__asm__ volatile(".byte 0xdc,0x00"::"a"(ea_):"memory");}
}
B678a73:L678a73:{c.instructions+=5;NFSU2_TR(0x678a73);
{u32 ea_=u32(r4(R+20)+u32(4294967260u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B678a76:{NFSU2_TR(0x678a76);
__asm__ volatile(".byte 0xda,0xe9":::"memory");
}
B678a78:{NFSU2_TR(0x678a78);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B678a7a:{NFSU2_TR(0x678a7a);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B678a7d:{NFSU2_TR(0x678a7d);
if(r1(R+514)){{goto L678ad5;}}
}
B678a7f:L678a7f:{c.instructions+=7;NFSU2_TR(0x678a7f);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B678a81:{NFSU2_TR(0x678a81);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B678a84:{NFSU2_TR(0x678a84);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B678a85:{NFSU2_TR(0x678a85);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B678a87:{NFSU2_TR(0x678a87);
__builtin_memmove((R+4),(R+24),4);
}
B678a89:{NFSU2_TR(0x678a89);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B678a8c:{NFSU2_TR(0x678a8c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x678a91ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x678640u);}goto L678640;}
}
B678a91:L678a91:{c.instructions+=2;NFSU2_TR(0x678a91);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B678a93:{NFSU2_TR(0x678a93);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L678ad5;}}
}
B678a95:L678a95:{c.instructions+=4;NFSU2_TR(0x678a95);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B678a98:{NFSU2_TR(0x678a98);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+0),(U+0),4);
}
B678a9a:{NFSU2_TR(0x678a9a);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B678a9d:{NFSU2_TR(0x678a9d);
if(r1(R+518)){{goto L678aaa;}}
}
B678a9f:L678a9f:{c.instructions+=2;NFSU2_TR(0x678a9f);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B678aa2:{NFSU2_TR(0x678aa2);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6788b7u);}goto L6788b7;}}
}
B678aa8:L678aa8:{c.instructions+=1;NFSU2_TR(0x678aa8);
{goto L678ad5;}
}
B678aaa:L678aaa:{c.instructions+=6;NFSU2_TR(0x678aaa);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B678aad:{NFSU2_TR(0x678aad);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B678ab0:{NFSU2_TR(0x678ab0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B678ab3:{NFSU2_TR(0x678ab3);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B678ab6:{NFSU2_TR(0x678ab6);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+4))),1);
w1(U+1,u8(u32(r1(U+0))&u32(u8(0x2ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B678ab9:{NFSU2_TR(0x678ab9);
if(r1(R+518)){{goto L678ad5;}}
}
B678abb:L678abb:{c.instructions+=6;NFSU2_TR(0x678abb);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B678abe:{NFSU2_TR(0x678abe);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B678ac1:{NFSU2_TR(0x678ac1);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B678ac4:{NFSU2_TR(0x678ac4);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B678ac7:{NFSU2_TR(0x678ac7);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B678aca:{NFSU2_TR(0x678aca);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L678ad5;}}
}
B678acc:L678acc:{c.instructions+=2;NFSU2_TR(0x678acc);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(u8(0x10ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B678ace:{NFSU2_TR(0x678ace);
if(r1(R+518)){{goto L678ad5;}}
}
B678ad0:L678ad0:{c.instructions+=2;NFSU2_TR(0x678ad0);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x2ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B678ad3:{NFSU2_TR(0x678ad3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L678aea;}}
}
B678ad5:L678ad5:{c.instructions+=4;NFSU2_TR(0x678ad5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B678ad8:{NFSU2_TR(0x678ad8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B678adb:{NFSU2_TR(0x678adb);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x2ull))));
}
B678adf:{NFSU2_TR(0x678adf);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6789c0u);}goto L6789c0;}}
}
B678ae5:L678ae5:{c.instructions+=1;NFSU2_TR(0x678ae5);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6787eeu);}goto L6787ee;}
}
B678aea:L678aea:{c.instructions+=3;NFSU2_TR(0x678aea);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B678aed:{NFSU2_TR(0x678aed);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B678aef:{NFSU2_TR(0x678aef);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6788b5u);}goto L6788b5;}}
}
B678af5:L678af5:{c.instructions+=4;NFSU2_TR(0x678af5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B678af8:{NFSU2_TR(0x678af8);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B678afb:{NFSU2_TR(0x678afb);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B678afe:{NFSU2_TR(0x678afe);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6788b0u);}goto L6788b0;}
}
B678b03:L678b03:{c.instructions+=31;NFSU2_TR(0x678b03);
__builtin_memmove((R+28),(R+28),4);
}
B678b05:{NFSU2_TR(0x678b05);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B678b06:{NFSU2_TR(0x678b06);
__builtin_memmove((R+20),(R+16),4);
}
B678b08:{NFSU2_TR(0x678b08);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x7cull))));
}
B678b0b:{NFSU2_TR(0x678b0b);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B678b0c:{NFSU2_TR(0x678b0c);
__builtin_memmove((R+12),(R+4),4);
}
B678b0e:{NFSU2_TR(0x678b0e);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B678b11:{NFSU2_TR(0x678b11);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffbcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B678b14:{NFSU2_TR(0x678b14);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B678b17:{NFSU2_TR(0x678b17);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B678b1a:{NFSU2_TR(0x678b1a);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B678b1d:{NFSU2_TR(0x678b1d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B678b20:{NFSU2_TR(0x678b20);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B678b23:{NFSU2_TR(0x678b23);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B678b26:{NFSU2_TR(0x678b26);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B678b29:{NFSU2_TR(0x678b29);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B678b2a:{NFSU2_TR(0x678b2a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B678b2b:{NFSU2_TR(0x678b2b);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B678b2d:{NFSU2_TR(0x678b2d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B678b30:{NFSU2_TR(0x678b30);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff8cull))));
__builtin_memmove((R+0),(U+0),4);
}
B678b33:{NFSU2_TR(0x678b33);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B678b34:{NFSU2_TR(0x678b34);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B678b37:{NFSU2_TR(0x678b37);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B678b3a:{NFSU2_TR(0x678b3a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B678b3d:{NFSU2_TR(0x678b3d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B678b40:{NFSU2_TR(0x678b40);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B678b43:{NFSU2_TR(0x678b43);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffacull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B678b46:{NFSU2_TR(0x678b46);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B678b49:{NFSU2_TR(0x678b49);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B678b4c:{NFSU2_TR(0x678b4c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc4ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B678b4f:{NFSU2_TR(0x678b4f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x678b54ull));
TAIL_STATIC(0x673e90u,673);
}
B678b54:L678b54:{c.instructions+=2;NFSU2_TR(0x678b54);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B678b56:{NFSU2_TR(0x678b56);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L678bb0;}}
}
B678b58:L678b58:{c.instructions+=6;NFSU2_TR(0x678b58);
{u32 ea_=u32(u32(7892576u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B678b5e:{NFSU2_TR(0x678b5e);
{u32 ea_=u32(r4(R+20)+u32(4294967180u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B678b61:{NFSU2_TR(0x678b61);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B678b63:{NFSU2_TR(0x678b63);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B678b65:{NFSU2_TR(0x678b65);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B678b68:{NFSU2_TR(0x678b68);
if(r1(R+518)){{goto L678b9a;}}
}
B678b6a:L678b6a:{c.instructions+=5;NFSU2_TR(0x678b6a);
{u32 ea_=u32(r4(R+20)+u32(4294967188u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B678b6d:{NFSU2_TR(0x678b6d);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B678b6f:{NFSU2_TR(0x678b6f);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B678b71:{NFSU2_TR(0x678b71);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B678b74:{NFSU2_TR(0x678b74);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L678b9a;}}
}
B678b76:L678b76:{c.instructions+=6;NFSU2_TR(0x678b76);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B678b78:{NFSU2_TR(0x678b78);
{u32 ea_=u32(r4(R+20)+u32(4294967180u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B678b7b:{NFSU2_TR(0x678b7b);
__asm__ volatile(".byte 0xda,0xe9":::"memory");
}
B678b7d:{NFSU2_TR(0x678b7d);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B678b7f:{NFSU2_TR(0x678b7f);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B678b82:{NFSU2_TR(0x678b82);
if(r1(R+514)){{goto L678bae;}}
}
B678b84:L678b84:{c.instructions+=7;NFSU2_TR(0x678b84);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B678b86:{NFSU2_TR(0x678b86);
{u32 ea_=u32(r4(R+20)+u32(4294967188u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B678b89:{NFSU2_TR(0x678b89);
__asm__ volatile(".byte 0xda,0xe9":::"memory");
}
B678b8b:{NFSU2_TR(0x678b8b);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B678b8d:{NFSU2_TR(0x678b8d);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B678b8f:{NFSU2_TR(0x678b8f);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B678b92:{NFSU2_TR(0x678b92);
if(r1(R+514)){{goto L678bb0;}}
}
B678b94:L678b94:{c.instructions+=3;NFSU2_TR(0x678b94);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B678b95:{NFSU2_TR(0x678b95);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B678b98:{NFSU2_TR(0x678b98);
{goto L678ba0;}
}
B678b9a:L678b9a:{c.instructions+=3;NFSU2_TR(0x678b9a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B678b9b:{NFSU2_TR(0x678b9b);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B678b9d:{NFSU2_TR(0x678b9d);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B678ba0:L678ba0:{c.instructions+=2;NFSU2_TR(0x678ba0);
__builtin_memmove((R+4),(R+12),4);
}
B678ba2:{NFSU2_TR(0x678ba2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x678ba7ull));
TAIL_STATIC(0x681bf8u,681);
}
B678ba7:L678ba7:{c.instructions+=2;NFSU2_TR(0x678ba7);
__builtin_memmove((R+24),(R+0),4);
}
B678ba9:{NFSU2_TR(0x678ba9);
TAIL_STATIC(0x6797f8u,679);
}
B678bae:L678bae:{c.instructions+=1;NFSU2_TR(0x678bae);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B678bb0:L678bb0:{c.instructions+=6;NFSU2_TR(0x678bb0);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B678bb2:{NFSU2_TR(0x678bb2);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((R+0),(U+0),4);
}
B678bb5:{NFSU2_TR(0x678bb5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B678bb6:{NFSU2_TR(0x678bb6);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B678bb7:{NFSU2_TR(0x678bb7);
__builtin_memmove((R+4),(R+12),4);
}
B678bb9:{NFSU2_TR(0x678bb9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x678bbeull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x678640u);}goto L678640;}
}
B678bbe:L678bbe:{c.instructions+=3;NFSU2_TR(0x678bbe);
__builtin_memmove((R+24),(R+0),4);
}
B678bc0:{NFSU2_TR(0x678bc0);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B678bc2:{NFSU2_TR(0x678bc2);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x6797f8u,679);}
}
B678bc8:L678bc8:{c.instructions+=9;NFSU2_TR(0x678bc8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0xffffffffull))));
s4(u32(r4(U+0)),r4(U+4));
}
B678bcc:{NFSU2_TR(0x678bcc);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B678bcf:{NFSU2_TR(0x678bcf);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B678bd2:{NFSU2_TR(0x678bd2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B678bd5:{NFSU2_TR(0x678bd5);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B678bd8:{NFSU2_TR(0x678bd8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B678bdb:{NFSU2_TR(0x678bdb);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B678bde:{NFSU2_TR(0x678bde);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B678be1:{NFSU2_TR(0x678be1);
if(r1(R+518)){{goto L678d43;}}
}
B678be7:L678be7:{c.instructions+=6;NFSU2_TR(0x678be7);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B678bea:{NFSU2_TR(0x678bea);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B678bed:{NFSU2_TR(0x678bed);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B678bef:{NFSU2_TR(0x678bef);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0xfff00000ull))));
}
B678bf5:{NFSU2_TR(0x678bf5);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x20300000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B678bfb:{NFSU2_TR(0x678bfb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L678d43;}}
}
B678c01:L678c01:{c.instructions+=5;NFSU2_TR(0x678c01);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B678c04:{NFSU2_TR(0x678c04);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B678c06:{NFSU2_TR(0x678c06);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B678c08:{NFSU2_TR(0x678c08);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B678c0b:{NFSU2_TR(0x678c0b);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L678c25;}}
}
B678c0d:L678c0d:{c.instructions+=2;NFSU2_TR(0x678c0d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B678c10:{NFSU2_TR(0x678c10);
{goto L678c15;}
}
B678c12:L678c12:{c.instructions+=1;NFSU2_TR(0x678c12);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B678c15:L678c15:{c.instructions+=2;NFSU2_TR(0x678c15);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(r4(R+24))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B678c17:{NFSU2_TR(0x678c17);
if(r1(R+518)){{goto L678c25;}}
}
B678c19:L678c19:{c.instructions+=5;NFSU2_TR(0x678c19);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B678c1a:{NFSU2_TR(0x678c1a);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x4ull))));
}
B678c1d:{NFSU2_TR(0x678c1d);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+8))<(r4(U+8))));
}
B678c20:{NFSU2_TR(0x678c20);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B678c23:{NFSU2_TR(0x678c23);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x678c12u);}goto L678c12;}}
}
B678c25:L678c25:{c.instructions+=11;NFSU2_TR(0x678c25);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B678c28:{NFSU2_TR(0x678c28);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B678c2b:{NFSU2_TR(0x678c2b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B678c2e:{NFSU2_TR(0x678c2e);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+8))));
}
B678c30:{NFSU2_TR(0x678c30);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B678c33:{NFSU2_TR(0x678c33);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B678c36:{NFSU2_TR(0x678c36);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B678c39:{NFSU2_TR(0x678c39);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+24),(U+8),4);
}
B678c3c:{NFSU2_TR(0x678c3c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B678c3f:{NFSU2_TR(0x678c3f);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B678c42:{NFSU2_TR(0x678c42);
if(r1(R+518)){{goto L678d43;}}
}
B678c48:L678c48:{c.instructions+=3;NFSU2_TR(0x678c48);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B678c4b:{NFSU2_TR(0x678c4b);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+8))),1);
w1(U+1,u8(u32(r1(U+0))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B678c4e:{NFSU2_TR(0x678c4e);
if(r1(R+518)){{goto L678d43;}}
}
B678c54:L678c54:{c.instructions+=6;NFSU2_TR(0x678c54);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B678c57:{NFSU2_TR(0x678c57);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+24),(U+8),4);
}
B678c5a:{NFSU2_TR(0x678c5a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B678c5c:{NFSU2_TR(0x678c5c);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0xfff00000ull))));
}
B678c62:{NFSU2_TR(0x678c62);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x10100000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B678c68:{NFSU2_TR(0x678c68);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L678d43;}}
}
B678c6e:L678c6e:{c.instructions+=3;NFSU2_TR(0x678c6e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B678c72:{NFSU2_TR(0x678c72);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x0ull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B678c76:{NFSU2_TR(0x678c76);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L678c8d;}}
}
B678c78:L678c78:{c.instructions+=1;NFSU2_TR(0x678c78);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B678c7b:L678c7b:{c.instructions+=2;NFSU2_TR(0x678c7b);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(r4(R+28))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B678c7d:{NFSU2_TR(0x678c7d);
if(r1(R+518)){{goto L678c8d;}}
}
B678c7f:L678c7f:{c.instructions+=5;NFSU2_TR(0x678c7f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B678c82:{NFSU2_TR(0x678c82);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B678c85:{NFSU2_TR(0x678c85);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4ull))));
}
B678c88:{NFSU2_TR(0x678c88);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+8))));
}
B678c8b:{NFSU2_TR(0x678c8b);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x678c7bu);}goto L678c7b;}}
}
B678c8d:L678c8d:{c.instructions+=4;NFSU2_TR(0x678c8d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B678c90:{NFSU2_TR(0x678c90);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B678c93:{NFSU2_TR(0x678c93);
u8 U[20];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(U+16,u32(u32(r4(U+12))-u32(r4(R+0))));
w1(R+518,u8((r4(U+16))==(u32(0x0ull))));
}
B678c96:{NFSU2_TR(0x678c96);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L678d43;}}
}
B678c9c:L678c9c:{c.instructions+=6;NFSU2_TR(0x678c9c);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B678c9e:{NFSU2_TR(0x678c9e);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B678ca1:{NFSU2_TR(0x678ca1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B678ca2:{NFSU2_TR(0x678ca2);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B678ca4:{NFSU2_TR(0x678ca4);
__builtin_memmove((R+4),(R+12),4);
}
B678ca6:{NFSU2_TR(0x678ca6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x678cabull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x678640u);}goto L678640;}
}
B678cab:L678cab:{c.instructions+=3;NFSU2_TR(0x678cab);
__builtin_memmove((R+24),(R+0),4);
}
B678cad:{NFSU2_TR(0x678cad);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B678caf:{NFSU2_TR(0x678caf);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x6797f8u,679);}
}
B678cb5:L678cb5:{c.instructions+=13;NFSU2_TR(0x678cb5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0xffffffffull))));
s4(u32(r4(U+0)),r4(U+4));
}
B678cb9:{NFSU2_TR(0x678cb9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0xffffffffull))));
s4(u32(r4(U+0)),r4(U+4));
}
B678cbd:{NFSU2_TR(0x678cbd);
u8 U[4];
w4(U+0,u32(0x17ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B678cbf:{NFSU2_TR(0x678cbf);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B678cc1:{NFSU2_TR(0x678cc1);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B678cc4:{NFSU2_TR(0x678cc4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B678cc5:{NFSU2_TR(0x678cc5);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((R+0),(U+0),4);
}
B678cc8:{NFSU2_TR(0x678cc8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B678cc9:{NFSU2_TR(0x678cc9);
w4(R+28,u32(0x10000001ull));
}
B678cce:{NFSU2_TR(0x678cce);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B678ccf:{NFSU2_TR(0x678ccf);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B678cd2:{NFSU2_TR(0x678cd2);
__builtin_memmove((R+4),(R+12),4);
}
B678cd4:{NFSU2_TR(0x678cd4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x678cd9ull));
TAIL_STATIC(0x6758ceu,675);
}
B678cd9:L678cd9:{c.instructions+=3;NFSU2_TR(0x678cd9);
__builtin_memmove((R+24),(R+0),4);
}
B678cdb:{NFSU2_TR(0x678cdb);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B678cdd:{NFSU2_TR(0x678cdd);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x6797f8u,679);}
}
B678ce3:L678ce3:{c.instructions+=10;NFSU2_TR(0x678ce3);
u8 U[4];
w4(U+0,u32(0x17ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B678ce5:{NFSU2_TR(0x678ce5);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B678ce7:{NFSU2_TR(0x678ce7);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((R+0),(U+0),4);
}
B678cea:{NFSU2_TR(0x678cea);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B678ceb:{NFSU2_TR(0x678ceb);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B678cee:{NFSU2_TR(0x678cee);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B678cef:{NFSU2_TR(0x678cef);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B678cf0:{NFSU2_TR(0x678cf0);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B678cf3:{NFSU2_TR(0x678cf3);
__builtin_memmove((R+4),(R+12),4);
}
B678cf5:{NFSU2_TR(0x678cf5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x678cfaull));
TAIL_STATIC(0x6758ceu,675);
}
B678cfa:L678cfa:{c.instructions+=3;NFSU2_TR(0x678cfa);
__builtin_memmove((R+24),(R+0),4);
}
B678cfc:{NFSU2_TR(0x678cfc);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B678cfe:{NFSU2_TR(0x678cfe);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x6797f8u,679);}
}
B678d04:L678d04:{c.instructions+=11;NFSU2_TR(0x678d04);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B678d07:{NFSU2_TR(0x678d07);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B678d0a:{NFSU2_TR(0x678d0a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B678d0d:{NFSU2_TR(0x678d0d);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B678d10:{NFSU2_TR(0x678d10);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B678d13:{NFSU2_TR(0x678d13);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B678d16:{NFSU2_TR(0x678d16);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B678d19:{NFSU2_TR(0x678d19);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B678d1c:{NFSU2_TR(0x678d1c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B678d20:{NFSU2_TR(0x678d20);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(u8(0x10ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B678d22:{NFSU2_TR(0x678d22);
if(r1(R+518)){{goto L678d37;}}
}
B678d24:L678d24:{c.instructions+=2;NFSU2_TR(0x678d24);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x2ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B678d27:{NFSU2_TR(0x678d27);
if(r1(R+518)){{goto L678d37;}}
}
B678d29:L678d29:{c.instructions+=2;NFSU2_TR(0x678d29);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B678d2d:{NFSU2_TR(0x678d2d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L678d37;}}
}
B678d2f:L678d2f:{c.instructions+=3;NFSU2_TR(0x678d2f);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B678d31:{NFSU2_TR(0x678d31);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B678d32:{NFSU2_TR(0x678d32);
{goto L678dfd;}
}
B678d37:L678d37:{c.instructions+=4;NFSU2_TR(0x678d37);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B678d3b:{NFSU2_TR(0x678d3b);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B678d3d:{NFSU2_TR(0x678d3d);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B678d3e:{NFSU2_TR(0x678d3e);
{goto L678e8c;}
}
B678d43:L678d43:{c.instructions+=4;NFSU2_TR(0x678d43);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B678d46:{NFSU2_TR(0x678d46);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+28))),1);
w1(U+1,u8(u32(r1(U+0))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B678d49:{NFSU2_TR(0x678d49);
__builtin_memmove((R+4),(R+12),4);
}
B678d4b:{NFSU2_TR(0x678d4b);
if(r1(R+518)){{goto L678e05;}}
}
B678d51:L678d51:{c.instructions+=12;NFSU2_TR(0x678d51);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0xffffffffull))));
s4(u32(r4(U+0)),r4(U+4));
}
B678d55:{NFSU2_TR(0x678d55);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0xffffffffull))));
s4(u32(r4(U+0)),r4(U+4));
}
B678d59:{NFSU2_TR(0x678d59);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0xffffffffull))));
s4(u32(r4(U+0)),r4(U+4));
}
B678d5d:{NFSU2_TR(0x678d5d);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B678d5f:{NFSU2_TR(0x678d5f);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B678d61:{NFSU2_TR(0x678d61);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((R+0),(U+0),4);
}
B678d64:{NFSU2_TR(0x678d64);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B678d65:{NFSU2_TR(0x678d65);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((R+0),(U+0),4);
}
B678d68:{NFSU2_TR(0x678d68);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B678d69:{NFSU2_TR(0x678d69);
u8 U[4];
w4(U+0,u32(0x10100001ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B678d6e:{NFSU2_TR(0x678d6e);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B678d71:{NFSU2_TR(0x678d71);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x678d76ull));
TAIL_STATIC(0x6758ceu,675);
}
B678d76:L678d76:{c.instructions+=3;NFSU2_TR(0x678d76);
__builtin_memmove((R+24),(R+0),4);
}
B678d78:{NFSU2_TR(0x678d78);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B678d7a:{NFSU2_TR(0x678d7a);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x6797f8u,679);}
}
B678d80:L678d80:{c.instructions+=10;NFSU2_TR(0x678d80);
u8 U[4];
w4(U+0,u32(0x17ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B678d82:{NFSU2_TR(0x678d82);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B678d84:{NFSU2_TR(0x678d84);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((R+0),(U+0),4);
}
B678d87:{NFSU2_TR(0x678d87);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B678d88:{NFSU2_TR(0x678d88);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((R+0),(U+0),4);
}
B678d8b:{NFSU2_TR(0x678d8b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B678d8c:{NFSU2_TR(0x678d8c);
u8 U[4];
w4(U+0,u32(0x10000001ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B678d91:{NFSU2_TR(0x678d91);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B678d94:{NFSU2_TR(0x678d94);
__builtin_memmove((R+4),(R+12),4);
}
B678d96:{NFSU2_TR(0x678d96);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x678d9bull));
TAIL_STATIC(0x6758ceu,675);
}
B678d9b:L678d9b:{c.instructions+=3;NFSU2_TR(0x678d9b);
__builtin_memmove((R+24),(R+0),4);
}
B678d9d:{NFSU2_TR(0x678d9d);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B678d9f:{NFSU2_TR(0x678d9f);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x6797f8u,679);}
}
B678da5:L678da5:{c.instructions+=11;NFSU2_TR(0x678da5);
u8 U[4];
w4(U+0,u32(0x17ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B678da7:{NFSU2_TR(0x678da7);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((R+0),(U+0),4);
}
B678daa:{NFSU2_TR(0x678daa);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B678dab:{NFSU2_TR(0x678dab);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((R+0),(U+0),4);
}
B678dae:{NFSU2_TR(0x678dae);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B678daf:{NFSU2_TR(0x678daf);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B678db2:{NFSU2_TR(0x678db2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B678db3:{NFSU2_TR(0x678db3);
u8 U[4];
w4(U+0,u32(0x20300001ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B678db8:{NFSU2_TR(0x678db8);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B678dbb:{NFSU2_TR(0x678dbb);
__builtin_memmove((R+4),(R+12),4);
}
B678dbd:{NFSU2_TR(0x678dbd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x678dc2ull));
TAIL_STATIC(0x6758ceu,675);
}
B678dc2:L678dc2:{c.instructions+=3;NFSU2_TR(0x678dc2);
__builtin_memmove((R+24),(R+0),4);
}
B678dc4:{NFSU2_TR(0x678dc4);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B678dc6:{NFSU2_TR(0x678dc6);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x6797f8u,679);}
}
B678dcc:L678dcc:{c.instructions+=10;NFSU2_TR(0x678dcc);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B678dcf:{NFSU2_TR(0x678dcf);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B678dd2:{NFSU2_TR(0x678dd2);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B678dd5:{NFSU2_TR(0x678dd5);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B678dd8:{NFSU2_TR(0x678dd8);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B678ddb:{NFSU2_TR(0x678ddb);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B678ddd:{NFSU2_TR(0x678ddd);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B678dde:{NFSU2_TR(0x678dde);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x10ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B678de1:{NFSU2_TR(0x678de1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B678de4:{NFSU2_TR(0x678de4);
if(r1(R+518)){{goto L678e88;}}
}
B678dea:L678dea:{c.instructions+=2;NFSU2_TR(0x678dea);
u8 U[1];
w1(U+0,u8(u32(r1(R+5))&u32(u8(0x2ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B678ded:{NFSU2_TR(0x678ded);
if(r1(R+518)){{goto L678e88;}}
}
B678df3:L678df3:{c.instructions+=2;NFSU2_TR(0x678df3);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B678df7:{NFSU2_TR(0x678df7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L678e88;}}
}
B678dfd:L678dfd:{c.instructions+=2;NFSU2_TR(0x678dfd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B678e00:{NFSU2_TR(0x678e00);
{goto L678e8c;}
}
B678e05:L678e05:{c.instructions+=14;NFSU2_TR(0x678e05);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0xffffffffull))));
}
B678e08:{NFSU2_TR(0x678e08);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B678e0b:{NFSU2_TR(0x678e0b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B678e0e:{NFSU2_TR(0x678e0e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B678e11:{NFSU2_TR(0x678e11);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B678e14:{NFSU2_TR(0x678e14);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B678e16:{NFSU2_TR(0x678e16);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((R+0),(U+0),4);
}
B678e19:{NFSU2_TR(0x678e19);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B678e1a:{NFSU2_TR(0x678e1a);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((R+0),(U+0),4);
}
B678e1d:{NFSU2_TR(0x678e1d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B678e1e:{NFSU2_TR(0x678e1e);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B678e21:{NFSU2_TR(0x678e21);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B678e22:{NFSU2_TR(0x678e22);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B678e25:{NFSU2_TR(0x678e25);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x678e2aull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6782eau);}goto L6782ea;}
}
B678e2a:L678e2a:{c.instructions+=3;NFSU2_TR(0x678e2a);
__builtin_memmove((R+24),(R+0),4);
}
B678e2c:{NFSU2_TR(0x678e2c);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B678e2e:{NFSU2_TR(0x678e2e);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x6797f8u,679);}
}
B678e34:L678e34:{c.instructions+=11;NFSU2_TR(0x678e34);
u8 U[4];
w4(U+0,u32(0x17ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B678e36:{NFSU2_TR(0x678e36);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B678e39:{NFSU2_TR(0x678e39);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B678e3a:{NFSU2_TR(0x678e3a);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((R+0),(U+0),4);
}
B678e3d:{NFSU2_TR(0x678e3d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B678e3e:{NFSU2_TR(0x678e3e);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((R+0),(U+0),4);
}
B678e41:{NFSU2_TR(0x678e41);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B678e42:{NFSU2_TR(0x678e42);
u8 U[4];
w4(U+0,u32(0x20200001ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B678e47:{NFSU2_TR(0x678e47);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B678e4a:{NFSU2_TR(0x678e4a);
__builtin_memmove((R+4),(R+12),4);
}
B678e4c:{NFSU2_TR(0x678e4c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x678e51ull));
TAIL_STATIC(0x6758ceu,675);
}
B678e51:L678e51:{c.instructions+=3;NFSU2_TR(0x678e51);
__builtin_memmove((R+24),(R+0),4);
}
B678e53:{NFSU2_TR(0x678e53);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B678e55:{NFSU2_TR(0x678e55);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x6797f8u,679);}
}
B678e5b:L678e5b:{c.instructions+=11;NFSU2_TR(0x678e5b);
u8 U[4];
w4(U+0,u32(0x17ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B678e5d:{NFSU2_TR(0x678e5d);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B678e60:{NFSU2_TR(0x678e60);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B678e61:{NFSU2_TR(0x678e61);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((R+0),(U+0),4);
}
B678e64:{NFSU2_TR(0x678e64);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B678e65:{NFSU2_TR(0x678e65);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B678e68:{NFSU2_TR(0x678e68);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B678e69:{NFSU2_TR(0x678e69);
u8 U[4];
w4(U+0,u32(0x20300001ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B678e6e:{NFSU2_TR(0x678e6e);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B678e71:{NFSU2_TR(0x678e71);
__builtin_memmove((R+4),(R+12),4);
}
B678e73:{NFSU2_TR(0x678e73);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x678e78ull));
TAIL_STATIC(0x6758ceu,675);
}
B678e78:L678e78:{c.instructions+=3;NFSU2_TR(0x678e78);
__builtin_memmove((R+24),(R+0),4);
}
B678e7a:{NFSU2_TR(0x678e7a);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B678e7c:{NFSU2_TR(0x678e7c);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x6797f8u,679);}
}
B678e82:L678e82:{c.instructions+=3;NFSU2_TR(0x678e82);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B678e84:{NFSU2_TR(0x678e84);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B678e85:{NFSU2_TR(0x678e85);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B678e88:L678e88:{c.instructions+=1;NFSU2_TR(0x678e88);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B678e8c:L678e8c:{c.instructions+=6;NFSU2_TR(0x678e8c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B678e8d:{NFSU2_TR(0x678e8d);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((R+0),(U+0),4);
}
B678e90:{NFSU2_TR(0x678e90);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B678e91:{NFSU2_TR(0x678e91);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B678e93:{NFSU2_TR(0x678e93);
__builtin_memmove((R+4),(R+12),4);
}
B678e95:{NFSU2_TR(0x678e95);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x678e9aull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x678640u);}goto L678640;}
}
B678e9a:L678e9a:{c.instructions+=3;NFSU2_TR(0x678e9a);
__builtin_memmove((R+24),(R+0),4);
}
B678e9c:{NFSU2_TR(0x678e9c);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B678e9e:{NFSU2_TR(0x678e9e);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x6797f8u,679);}
}
B678ea4:L678ea4:{c.instructions+=12;NFSU2_TR(0x678ea4);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B678ea7:{NFSU2_TR(0x678ea7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B678eaa:{NFSU2_TR(0x678eaa);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B678ead:{NFSU2_TR(0x678ead);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B678eb0:{NFSU2_TR(0x678eb0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B678eb3:{NFSU2_TR(0x678eb3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B678eb6:{NFSU2_TR(0x678eb6);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+24),(U+8),4);
}
B678eb9:{NFSU2_TR(0x678eb9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B678ebd:{NFSU2_TR(0x678ebd);
w4(R+28,u32(0x800ull));
}
B678ec2:{NFSU2_TR(0x678ec2);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+8,u32(u32(r4(U+4))&u32(r4(R+28))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B678ec5:{NFSU2_TR(0x678ec5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B678ecc:{NFSU2_TR(0x678ecc);
if(r1(R+518)){{goto L678f4a;}}
}
B678ece:L678ece:{c.instructions+=3;NFSU2_TR(0x678ece);
u8 U[4];
w4(U+0,u32(0x62ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B678ed0:{NFSU2_TR(0x678ed0);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+4));
}
B678ed2:{NFSU2_TR(0x678ed2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x678ed7ull));
TAIL_STATIC(0x75cf10u,75c);
}
B678ed7:L678ed7:{c.instructions+=4;NFSU2_TR(0x678ed7);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B678ed9:{NFSU2_TR(0x678ed9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B678eda:{NFSU2_TR(0x678eda);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B678edb:{NFSU2_TR(0x678edb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L678eec;}}
}
B678edd:L678edd:{c.instructions+=3;NFSU2_TR(0x678edd);
u8 U[4];
w4(U+0,u32(0x42ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B678edf:{NFSU2_TR(0x678edf);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+4));
}
B678ee1:{NFSU2_TR(0x678ee1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x678ee6ull));
TAIL_STATIC(0x75cf10u,75c);
}
B678ee6:L678ee6:{c.instructions+=4;NFSU2_TR(0x678ee6);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B678ee8:{NFSU2_TR(0x678ee8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B678ee9:{NFSU2_TR(0x678ee9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B678eea:{NFSU2_TR(0x678eea);
if(r1(R+518)){{goto L678f04;}}
}
B678eec:L678eec:{c.instructions+=4;NFSU2_TR(0x678eec);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B678eef:{NFSU2_TR(0x678eef);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B678ef1:{NFSU2_TR(0x678ef1);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+4))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B678ef4:{NFSU2_TR(0x678ef4);
if(r1(R+518)){{goto L678f72;}}
}
B678ef6:L678ef6:{c.instructions+=2;NFSU2_TR(0x678ef6);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+4))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B678ef9:{NFSU2_TR(0x678ef9);
if(r1(R+518)){{goto L678f72;}}
}
B678efb:L678efb:{c.instructions+=2;NFSU2_TR(0x678efb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B678f02:{NFSU2_TR(0x678f02);
{goto L678f6f;}
}
B678f04:L678f04:{c.instructions+=2;NFSU2_TR(0x678f04);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+8,u32(u32(r4(U+4))&u32(r4(R+28))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B678f07:{NFSU2_TR(0x678f07);
if(r1(R+518)){{goto L678f4a;}}
}
B678f09:L678f09:{c.instructions+=3;NFSU2_TR(0x678f09);
u8 U[4];
w4(U+0,u32(0x63ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B678f0b:{NFSU2_TR(0x678f0b);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+4));
}
B678f0d:{NFSU2_TR(0x678f0d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x678f12ull));
TAIL_STATIC(0x75cf10u,75c);
}
B678f12:L678f12:{c.instructions+=4;NFSU2_TR(0x678f12);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B678f14:{NFSU2_TR(0x678f14);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B678f15:{NFSU2_TR(0x678f15);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B678f16:{NFSU2_TR(0x678f16);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L678f27;}}
}
B678f18:L678f18:{c.instructions+=3;NFSU2_TR(0x678f18);
u8 U[4];
w4(U+0,u32(0x43ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B678f1a:{NFSU2_TR(0x678f1a);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+4));
}
B678f1c:{NFSU2_TR(0x678f1c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x678f21ull));
TAIL_STATIC(0x75cf10u,75c);
}
B678f21:L678f21:{c.instructions+=4;NFSU2_TR(0x678f21);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B678f23:{NFSU2_TR(0x678f23);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B678f24:{NFSU2_TR(0x678f24);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B678f25:{NFSU2_TR(0x678f25);
if(r1(R+518)){{goto L678f4a;}}
}
B678f27:L678f27:{c.instructions+=4;NFSU2_TR(0x678f27);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B678f2a:{NFSU2_TR(0x678f2a);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B678f2c:{NFSU2_TR(0x678f2c);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B678f2f:{NFSU2_TR(0x678f2f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L678f3c;}}
}
B678f31:L678f31:{c.instructions+=2;NFSU2_TR(0x678f31);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B678f34:{NFSU2_TR(0x678f34);
if(r1(R+518)){{goto L678f45;}}
}
B678f36:L678f36:{c.instructions+=2;NFSU2_TR(0x678f36);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B678f3a:{NFSU2_TR(0x678f3a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L678f45;}}
}
B678f3c:L678f3c:{c.instructions+=4;NFSU2_TR(0x678f3c);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B678f3e:{NFSU2_TR(0x678f3e);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B678f3f:{NFSU2_TR(0x678f3f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B678f42:{NFSU2_TR(0x678f42);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B678f45:L678f45:{c.instructions+=2;NFSU2_TR(0x678f45);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B678f48:{NFSU2_TR(0x678f48);
{goto L678f72;}
}
B678f4a:L678f4a:{c.instructions+=4;NFSU2_TR(0x678f4a);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B678f4d:{NFSU2_TR(0x678f4d);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B678f4f:{NFSU2_TR(0x678f4f);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+4))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B678f52:{NFSU2_TR(0x678f52);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L678f69;}}
}
B678f54:L678f54:{c.instructions+=2;NFSU2_TR(0x678f54);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+4))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B678f57:{NFSU2_TR(0x678f57);
if(r1(R+518)){{goto L678f5e;}}
}
B678f59:L678f59:{c.instructions+=2;NFSU2_TR(0x678f59);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+4))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B678f5c:{NFSU2_TR(0x678f5c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L678f69;}}
}
B678f5e:L678f5e:{c.instructions+=2;NFSU2_TR(0x678f5e);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+4))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B678f61:{NFSU2_TR(0x678f61);
if(r1(R+518)){{goto L678f72;}}
}
B678f63:L678f63:{c.instructions+=2;NFSU2_TR(0x678f63);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B678f67:{NFSU2_TR(0x678f67);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L678f72;}}
}
B678f69:L678f69:{c.instructions+=3;NFSU2_TR(0x678f69);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B678f6b:{NFSU2_TR(0x678f6b);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B678f6c:{NFSU2_TR(0x678f6c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B678f6f:L678f6f:{c.instructions+=1;NFSU2_TR(0x678f6f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B678f72:L678f72:{c.instructions+=3;NFSU2_TR(0x678f72);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B678f74:{NFSU2_TR(0x678f74);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+24))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B678f77:{NFSU2_TR(0x678f77);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L678f9d;}}
}
B678f79:L678f79:{c.instructions+=2;NFSU2_TR(0x678f79);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+24))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B678f7c:{NFSU2_TR(0x678f7c);
if(r1(R+518)){{goto L678fab;}}
}
B678f7e:L678f7e:{c.instructions+=2;NFSU2_TR(0x678f7e);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+24))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B678f81:{NFSU2_TR(0x678f81);
if(r1(R+518)){{goto L678f9d;}}
}
B678f83:L678f83:{c.instructions+=2;NFSU2_TR(0x678f83);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+24))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B678f86:{NFSU2_TR(0x678f86);
if(r1(R+518)){{goto L678f92;}}
}
B678f88:L678f88:{c.instructions+=3;NFSU2_TR(0x678f88);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B678f8b:{NFSU2_TR(0x678f8b);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+4))<(r4(U+8))));
}
B678f8e:{NFSU2_TR(0x678f8e);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L678f9a;}}
}
B678f90:L678f90:{c.instructions+=1;NFSU2_TR(0x678f90);
{goto L678f9d;}
}
B678f92:L678f92:{c.instructions+=3;NFSU2_TR(0x678f92);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B678f95:{NFSU2_TR(0x678f95);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+4))<(r4(U+8))));
}
B678f98:{NFSU2_TR(0x678f98);
if(r1(R+512)){{goto L678f9d;}}
}
B678f9a:L678f9a:{c.instructions+=1;NFSU2_TR(0x678f9a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B678f9d:L678f9d:{c.instructions+=2;NFSU2_TR(0x678f9d);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+24))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B678fa0:{NFSU2_TR(0x678fa0);
if(r1(R+518)){{goto L678fab;}}
}
B678fa2:L678fa2:{c.instructions+=2;NFSU2_TR(0x678fa2);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x15ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x2ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B678fa6:{NFSU2_TR(0x678fa6);
if(r1(R+518)){{goto L678fab;}}
}
B678fa8:L678fa8:{c.instructions+=1;NFSU2_TR(0x678fa8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B678fab:L678fab:{c.instructions+=2;NFSU2_TR(0x678fab);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+24))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B678fae:{NFSU2_TR(0x678fae);
if(r1(R+518)){{goto L678fb9;}}
}
B678fb0:L678fb0:{c.instructions+=2;NFSU2_TR(0x678fb0);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x15ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x4ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B678fb4:{NFSU2_TR(0x678fb4);
if(r1(R+518)){{goto L678fb9;}}
}
B678fb6:L678fb6:{c.instructions+=1;NFSU2_TR(0x678fb6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B678fb9:L678fb9:{c.instructions+=7;NFSU2_TR(0x678fb9);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B678fbc:{NFSU2_TR(0x678fbc);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B678fbf:{NFSU2_TR(0x678fbf);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B678fc2:{NFSU2_TR(0x678fc2);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B678fc5:{NFSU2_TR(0x678fc5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B678fc6:{NFSU2_TR(0x678fc6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B678fc9:{NFSU2_TR(0x678fc9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x678fceull));
TAIL_STATIC(0x575620u,575);
}
B678fce:L678fce:{c.instructions+=4;NFSU2_TR(0x678fce);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B678fd0:{NFSU2_TR(0x678fd0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B678fd1:{NFSU2_TR(0x678fd1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B678fd4:{NFSU2_TR(0x678fd4);
if(r1(R+518)){TAIL_STATIC(0x6797f3u,679);}
}
B678fda:L678fda:{c.instructions+=4;NFSU2_TR(0x678fda);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B678fdd:{NFSU2_TR(0x678fdd);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B678fe0:{NFSU2_TR(0x678fe0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B678fe1:{NFSU2_TR(0x678fe1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x678fe6ull));
TAIL_STATIC(0x575620u,575);
}
B678fe6:L678fe6:{c.instructions+=4;NFSU2_TR(0x678fe6);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B678fe8:{NFSU2_TR(0x678fe8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B678fe9:{NFSU2_TR(0x678fe9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B678fec:{NFSU2_TR(0x678fec);
if(r1(R+518)){TAIL_STATIC(0x6797f3u,679);}
}
B678ff2:L678ff2:{c.instructions+=4;NFSU2_TR(0x678ff2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B678ff5:{NFSU2_TR(0x678ff5);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B678ff8:{NFSU2_TR(0x678ff8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B678ff9:{NFSU2_TR(0x678ff9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x678ffeull));
TAIL_STATIC(0x575620u,575);
}
B678ffe:L678ffe:{c.instructions+=1;NFSU2_TR(0x678ffe);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
TAIL_STATIC(0x679000u,679);
}
XIT:NFSU2_TR_EXIT(0x678,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
