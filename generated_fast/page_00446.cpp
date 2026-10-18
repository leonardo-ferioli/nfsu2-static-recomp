#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_401(u8* __restrict R,Cpu& c);
u32 body_43c(u8* __restrict R,Cpu& c);
u32 body_43d(u8* __restrict R,Cpu& c);
u32 body_440(u8* __restrict R,Cpu& c);
u32 body_444(u8* __restrict R,Cpu& c);
u32 body_445(u8* __restrict R,Cpu& c);
u32 body_447(u8* __restrict R,Cpu& c);
u32 body_573(u8* __restrict R,Cpu& c);
u32 body_574(u8* __restrict R,Cpu& c);
u32 body_575(u8* __restrict R,Cpu& c);
u32 body_576(u8* __restrict R,Cpu& c);
u32 body_57d(u8* __restrict R,Cpu& c);
u32 body_5ba(u8* __restrict R,Cpu& c);
u32 body_5d3(u8* __restrict R,Cpu& c);
u32 body_5dd(u8* __restrict R,Cpu& c);
u32 body_5e0(u8* __restrict R,Cpu& c);
u32 body_5e6(u8* __restrict R,Cpu& c);
u32 body_5e7(u8* __restrict R,Cpu& c);
u32 body_5ec(u8* __restrict R,Cpu& c);
u32 body_5f1(u8* __restrict R,Cpu& c);
u32 body_5fa(u8* __restrict R,Cpu& c);
u32 body_75b(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x446,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x446,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_446(u8* __restrict R,Cpu& c);
u32 page_446(Cpu& c){return body_446(c.regs.data(),c);}
__attribute__((noinline)) u32 body_446(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x446001:goto L446001;
case 0x446005:c.instructions+=6;goto B446005;
case 0x446006:c.instructions+=5;goto B446006;
case 0x44600a:c.instructions+=4;goto B44600a;
case 0x44600b:c.instructions+=3;goto B44600b;
case 0x44600f:c.instructions+=2;goto B44600f;
case 0x446010:c.instructions+=1;goto B446010;
case 0x446015:goto L446015;
case 0x446017:c.instructions+=3;goto B446017;
case 0x44601a:c.instructions+=2;goto B44601a;
case 0x44601c:c.instructions+=1;goto B44601c;
case 0x44601f:goto L44601f;
case 0x446025:c.instructions+=6;goto B446025;
case 0x446026:c.instructions+=5;goto B446026;
case 0x446027:c.instructions+=4;goto B446027;
case 0x44602d:c.instructions+=3;goto B44602d;
case 0x446031:c.instructions+=2;goto B446031;
case 0x446032:c.instructions+=1;goto B446032;
case 0x446037:goto L446037;
case 0x446038:c.instructions+=3;goto B446038;
case 0x44603a:c.instructions+=2;goto B44603a;
case 0x44603b:c.instructions+=1;goto B44603b;
case 0x446040:goto L446040;
case 0x446041:c.instructions+=9;goto B446041;
case 0x446043:c.instructions+=8;goto B446043;
case 0x446046:c.instructions+=7;goto B446046;
case 0x446049:c.instructions+=6;goto B446049;
case 0x44604a:c.instructions+=5;goto B44604a;
case 0x44604b:c.instructions+=4;goto B44604b;
case 0x44604d:c.instructions+=3;goto B44604d;
case 0x446050:c.instructions+=2;goto B446050;
case 0x446052:c.instructions+=1;goto B446052;
case 0x446058:goto L446058;
case 0x44605b:c.instructions+=6;goto B44605b;
case 0x44605c:c.instructions+=5;goto B44605c;
case 0x44605f:c.instructions+=4;goto B44605f;
case 0x446060:c.instructions+=3;goto B446060;
case 0x446064:c.instructions+=2;goto B446064;
case 0x446065:c.instructions+=1;goto B446065;
case 0x44606a:goto L44606a;
case 0x44606e:c.instructions+=10;goto B44606e;
case 0x446072:c.instructions+=9;goto B446072;
case 0x446075:c.instructions+=8;goto B446075;
case 0x446079:c.instructions+=7;goto B446079;
case 0x44607d:c.instructions+=6;goto B44607d;
case 0x44607f:c.instructions+=5;goto B44607f;
case 0x446081:c.instructions+=4;goto B446081;
case 0x446087:c.instructions+=3;goto B446087;
case 0x44608b:c.instructions+=2;goto B44608b;
case 0x44608e:c.instructions+=1;goto B44608e;
case 0x446093:goto L446093;
case 0x446095:c.instructions+=4;goto B446095;
case 0x446098:c.instructions+=3;goto B446098;
case 0x44609b:c.instructions+=2;goto B44609b;
case 0x44609c:c.instructions+=1;goto B44609c;
case 0x4460a1:goto L4460a1;
case 0x4460a5:c.instructions+=2;goto B4460a5;
case 0x4460a6:c.instructions+=1;goto B4460a6;
case 0x4460ab:goto L4460ab;
case 0x4460af:c.instructions+=10;goto B4460af;
case 0x4460b2:c.instructions+=9;goto B4460b2;
case 0x4460b6:c.instructions+=8;goto B4460b6;
case 0x4460ba:c.instructions+=7;goto B4460ba;
case 0x4460c0:c.instructions+=6;goto B4460c0;
case 0x4460c2:c.instructions+=5;goto B4460c2;
case 0x4460c6:c.instructions+=4;goto B4460c6;
case 0x4460ca:c.instructions+=3;goto B4460ca;
case 0x4460cc:c.instructions+=2;goto B4460cc;
case 0x4460cf:c.instructions+=1;goto B4460cf;
case 0x4460d1:goto L4460d1;
case 0x4460d3:c.instructions+=1;goto B4460d3;
case 0x4460d7:goto L4460d7;
case 0x4460db:c.instructions+=4;goto B4460db;
case 0x4460dd:c.instructions+=3;goto B4460dd;
case 0x4460df:c.instructions+=2;goto B4460df;
case 0x4460e2:c.instructions+=1;goto B4460e2;
case 0x4460e4:goto L4460e4;
case 0x4460e6:c.instructions+=1;goto B4460e6;
case 0x4460ea:goto L4460ea;
case 0x4460ed:c.instructions+=5;goto B4460ed;
case 0x4460f0:c.instructions+=4;goto B4460f0;
case 0x4460f2:c.instructions+=3;goto B4460f2;
case 0x4460f4:c.instructions+=2;goto B4460f4;
case 0x4460f7:c.instructions+=1;goto B4460f7;
case 0x4460f9:goto L4460f9;
case 0x4460ff:goto L4460ff;
case 0x446100:c.instructions+=4;goto B446100;
case 0x446101:c.instructions+=3;goto B446101;
case 0x446103:c.instructions+=2;goto B446103;
case 0x446104:c.instructions+=1;goto B446104;
case 0x446110:goto L446110;
case 0x446111:c.instructions+=9;goto B446111;
case 0x446113:c.instructions+=8;goto B446113;
case 0x446116:c.instructions+=7;goto B446116;
case 0x44611c:c.instructions+=6;goto B44611c;
case 0x44611d:c.instructions+=5;goto B44611d;
case 0x44611f:c.instructions+=4;goto B44611f;
case 0x446122:c.instructions+=3;goto B446122;
case 0x446126:c.instructions+=2;goto B446126;
case 0x446127:c.instructions+=1;goto B446127;
case 0x44612c:goto L44612c;
case 0x446130:c.instructions+=4;goto B446130;
case 0x446131:c.instructions+=3;goto B446131;
case 0x446135:c.instructions+=2;goto B446135;
case 0x446136:c.instructions+=1;goto B446136;
case 0x44613b:goto L44613b;
case 0x44613e:c.instructions+=7;goto B44613e;
case 0x446141:c.instructions+=6;goto B446141;
case 0x446142:c.instructions+=5;goto B446142;
case 0x446146:c.instructions+=4;goto B446146;
case 0x446147:c.instructions+=3;goto B446147;
case 0x44614b:c.instructions+=2;goto B44614b;
case 0x44614c:c.instructions+=1;goto B44614c;
case 0x446151:goto L446151;
case 0x446154:c.instructions+=8;goto B446154;
case 0x446157:c.instructions+=7;goto B446157;
case 0x44615a:c.instructions+=6;goto B44615a;
case 0x44615b:c.instructions+=5;goto B44615b;
case 0x44615c:c.instructions+=4;goto B44615c;
case 0x446160:c.instructions+=3;goto B446160;
case 0x446161:c.instructions+=2;goto B446161;
case 0x446166:c.instructions+=1;goto B446166;
case 0x44616b:goto L44616b;
case 0x44616c:c.instructions+=3;goto B44616c;
case 0x44616e:c.instructions+=2;goto B44616e;
case 0x44616f:c.instructions+=1;goto B44616f;
case 0x446180:goto L446180;
case 0x446181:c.instructions+=8;goto B446181;
case 0x446183:c.instructions+=7;goto B446183;
case 0x446186:c.instructions+=6;goto B446186;
case 0x446189:c.instructions+=5;goto B446189;
case 0x44618a:c.instructions+=4;goto B44618a;
case 0x44618c:c.instructions+=3;goto B44618c;
case 0x44618f:c.instructions+=2;goto B44618f;
case 0x446191:c.instructions+=1;goto B446191;
case 0x446193:goto L446193;
case 0x446196:c.instructions+=2;goto B446196;
case 0x446198:c.instructions+=1;goto B446198;
case 0x44619a:goto L44619a;
case 0x44619d:c.instructions+=5;goto B44619d;
case 0x4461a0:c.instructions+=4;goto B4461a0;
case 0x4461a1:c.instructions+=3;goto B4461a1;
case 0x4461a2:c.instructions+=2;goto B4461a2;
case 0x4461a5:c.instructions+=1;goto B4461a5;
case 0x4461aa:goto L4461aa;
case 0x4461ab:c.instructions+=3;goto B4461ab;
case 0x4461ad:c.instructions+=2;goto B4461ad;
case 0x4461ae:c.instructions+=1;goto B4461ae;
case 0x4461b1:goto L4461b1;
case 0x4461b4:c.instructions+=3;goto B4461b4;
case 0x4461b8:c.instructions+=2;goto B4461b8;
case 0x4461b9:c.instructions+=1;goto B4461b9;
case 0x4461be:goto L4461be;
case 0x4461c1:c.instructions+=3;goto B4461c1;
case 0x4461c5:c.instructions+=2;goto B4461c5;
case 0x4461c6:c.instructions+=1;goto B4461c6;
case 0x4461cb:goto L4461cb;
case 0x4461d1:c.instructions+=19;goto B4461d1;
case 0x4461d4:c.instructions+=18;goto B4461d4;
case 0x4461d7:c.instructions+=17;goto B4461d7;
case 0x4461db:c.instructions+=16;goto B4461db;
case 0x4461de:c.instructions+=15;goto B4461de;
case 0x4461df:c.instructions+=14;goto B4461df;
case 0x4461e1:c.instructions+=13;goto B4461e1;
case 0x4461e5:c.instructions+=12;goto B4461e5;
case 0x4461e6:c.instructions+=11;goto B4461e6;
case 0x4461e7:c.instructions+=10;goto B4461e7;
case 0x4461e9:c.instructions+=9;goto B4461e9;
case 0x4461ea:c.instructions+=8;goto B4461ea;
case 0x4461ee:c.instructions+=7;goto B4461ee;
case 0x4461f0:c.instructions+=6;goto B4461f0;
case 0x4461f3:c.instructions+=5;goto B4461f3;
case 0x4461f7:c.instructions+=4;goto B4461f7;
case 0x4461f9:c.instructions+=3;goto B4461f9;
case 0x4461fc:c.instructions+=2;goto B4461fc;
case 0x4461fe:c.instructions+=1;goto B4461fe;
case 0x446203:goto L446203;
case 0x446206:c.instructions+=4;goto B446206;
case 0x446207:c.instructions+=3;goto B446207;
case 0x446209:c.instructions+=2;goto B446209;
case 0x44620a:c.instructions+=1;goto B44620a;
case 0x446210:goto L446210;
case 0x446211:c.instructions+=8;goto B446211;
case 0x446213:c.instructions+=7;goto B446213;
case 0x446216:c.instructions+=6;goto B446216;
case 0x446219:c.instructions+=5;goto B446219;
case 0x44621a:c.instructions+=4;goto B44621a;
case 0x44621c:c.instructions+=3;goto B44621c;
case 0x44621f:c.instructions+=2;goto B44621f;
case 0x446221:c.instructions+=1;goto B446221;
case 0x446223:goto L446223;
case 0x446226:c.instructions+=2;goto B446226;
case 0x446228:c.instructions+=1;goto B446228;
case 0x44622a:goto L44622a;
case 0x44622d:c.instructions+=5;goto B44622d;
case 0x446230:c.instructions+=4;goto B446230;
case 0x446231:c.instructions+=3;goto B446231;
case 0x446232:c.instructions+=2;goto B446232;
case 0x446235:c.instructions+=1;goto B446235;
case 0x44623a:goto L44623a;
case 0x44623b:c.instructions+=3;goto B44623b;
case 0x44623d:c.instructions+=2;goto B44623d;
case 0x44623e:c.instructions+=1;goto B44623e;
case 0x446241:goto L446241;
case 0x446244:c.instructions+=3;goto B446244;
case 0x446248:c.instructions+=2;goto B446248;
case 0x446249:c.instructions+=1;goto B446249;
case 0x44624e:goto L44624e;
case 0x446251:c.instructions+=3;goto B446251;
case 0x446255:c.instructions+=2;goto B446255;
case 0x446256:c.instructions+=1;goto B446256;
case 0x44625b:goto L44625b;
case 0x446261:c.instructions+=19;goto B446261;
case 0x446264:c.instructions+=18;goto B446264;
case 0x446267:c.instructions+=17;goto B446267;
case 0x44626b:c.instructions+=16;goto B44626b;
case 0x44626e:c.instructions+=15;goto B44626e;
case 0x44626f:c.instructions+=14;goto B44626f;
case 0x446271:c.instructions+=13;goto B446271;
case 0x446275:c.instructions+=12;goto B446275;
case 0x446276:c.instructions+=11;goto B446276;
case 0x446277:c.instructions+=10;goto B446277;
case 0x446279:c.instructions+=9;goto B446279;
case 0x44627a:c.instructions+=8;goto B44627a;
case 0x44627e:c.instructions+=7;goto B44627e;
case 0x446280:c.instructions+=6;goto B446280;
case 0x446283:c.instructions+=5;goto B446283;
case 0x446287:c.instructions+=4;goto B446287;
case 0x446289:c.instructions+=3;goto B446289;
case 0x44628c:c.instructions+=2;goto B44628c;
case 0x44628e:c.instructions+=1;goto B44628e;
case 0x446293:goto L446293;
case 0x446296:c.instructions+=4;goto B446296;
case 0x446297:c.instructions+=3;goto B446297;
case 0x446299:c.instructions+=2;goto B446299;
case 0x44629a:c.instructions+=1;goto B44629a;
case 0x4462a0:goto L4462a0;
case 0x4462a1:c.instructions+=3;goto B4462a1;
case 0x4462a4:c.instructions+=2;goto B4462a4;
case 0x4462a6:c.instructions+=1;goto B4462a6;
case 0x4462a8:goto L4462a8;
case 0x4462ab:c.instructions+=2;goto B4462ab;
case 0x4462ad:c.instructions+=1;goto B4462ad;
case 0x4462af:goto L4462af;
case 0x4462b3:c.instructions+=3;goto B4462b3;
case 0x4462b6:c.instructions+=2;goto B4462b6;
case 0x4462b7:c.instructions+=1;goto B4462b7;
case 0x4462bc:goto L4462bc;
case 0x4462c1:goto L4462c1;
case 0x4462c2:c.instructions+=1;goto B4462c2;
case 0x4462c5:goto L4462c5;
case 0x4462c8:c.instructions+=3;goto B4462c8;
case 0x4462ca:c.instructions+=2;goto B4462ca;
case 0x4462ce:c.instructions+=1;goto B4462ce;
case 0x4462d3:goto L4462d3;
case 0x4462d7:c.instructions+=5;goto B4462d7;
case 0x4462dd:c.instructions+=4;goto B4462dd;
case 0x4462e1:c.instructions+=3;goto B4462e1;
case 0x4462e5:c.instructions+=2;goto B4462e5;
case 0x4462e7:c.instructions+=1;goto B4462e7;
case 0x4462ec:goto L4462ec;
case 0x4462ed:c.instructions+=1;goto B4462ed;
case 0x4462f0:goto L4462f0;
case 0x4462f1:c.instructions+=9;goto B4462f1;
case 0x4462f3:c.instructions+=8;goto B4462f3;
case 0x4462f6:c.instructions+=7;goto B4462f6;
case 0x4462f9:c.instructions+=6;goto B4462f9;
case 0x4462fa:c.instructions+=5;goto B4462fa;
case 0x4462fc:c.instructions+=4;goto B4462fc;
case 0x4462ff:c.instructions+=3;goto B4462ff;
case 0x446303:c.instructions+=2;goto B446303;
case 0x446304:c.instructions+=1;goto B446304;
case 0x446309:goto L446309;
case 0x44630d:c.instructions+=3;goto B44630d;
case 0x44630e:c.instructions+=2;goto B44630e;
case 0x446311:c.instructions+=1;goto B446311;
case 0x446316:goto L446316;
case 0x44631c:c.instructions+=19;goto B44631c;
case 0x44631f:c.instructions+=18;goto B44631f;
case 0x446322:c.instructions+=17;goto B446322;
case 0x446326:c.instructions+=16;goto B446326;
case 0x446329:c.instructions+=15;goto B446329;
case 0x44632a:c.instructions+=14;goto B44632a;
case 0x44632c:c.instructions+=13;goto B44632c;
case 0x446330:c.instructions+=12;goto B446330;
case 0x446331:c.instructions+=11;goto B446331;
case 0x446332:c.instructions+=10;goto B446332;
case 0x446334:c.instructions+=9;goto B446334;
case 0x446335:c.instructions+=8;goto B446335;
case 0x446339:c.instructions+=7;goto B446339;
case 0x44633b:c.instructions+=6;goto B44633b;
case 0x44633e:c.instructions+=5;goto B44633e;
case 0x446342:c.instructions+=4;goto B446342;
case 0x446344:c.instructions+=3;goto B446344;
case 0x446347:c.instructions+=2;goto B446347;
case 0x446349:c.instructions+=1;goto B446349;
case 0x44634e:goto L44634e;
case 0x446351:c.instructions+=4;goto B446351;
case 0x446352:c.instructions+=3;goto B446352;
case 0x446354:c.instructions+=2;goto B446354;
case 0x446355:c.instructions+=1;goto B446355;
case 0x446360:goto L446360;
case 0x446363:c.instructions+=6;goto B446363;
case 0x446364:c.instructions+=5;goto B446364;
case 0x446366:c.instructions+=4;goto B446366;
case 0x446369:c.instructions+=3;goto B446369;
case 0x44636d:c.instructions+=2;goto B44636d;
case 0x44636e:c.instructions+=1;goto B44636e;
case 0x446373:goto L446373;
case 0x446377:c.instructions+=3;goto B446377;
case 0x446378:c.instructions+=2;goto B446378;
case 0x44637b:c.instructions+=1;goto B44637b;
case 0x446380:goto L446380;
case 0x446386:c.instructions+=16;goto B446386;
case 0x44638a:c.instructions+=15;goto B44638a;
case 0x44638e:c.instructions+=14;goto B44638e;
case 0x446392:c.instructions+=13;goto B446392;
case 0x446396:c.instructions+=12;goto B446396;
case 0x446397:c.instructions+=11;goto B446397;
case 0x446399:c.instructions+=10;goto B446399;
case 0x44639d:c.instructions+=9;goto B44639d;
case 0x44639e:c.instructions+=8;goto B44639e;
case 0x44639f:c.instructions+=7;goto B44639f;
case 0x4463a1:c.instructions+=6;goto B4463a1;
case 0x4463a2:c.instructions+=5;goto B4463a2;
case 0x4463a6:c.instructions+=4;goto B4463a6;
case 0x4463a8:c.instructions+=3;goto B4463a8;
case 0x4463ab:c.instructions+=2;goto B4463ab;
case 0x4463ad:c.instructions+=1;goto B4463ad;
case 0x4463b2:goto L4463b2;
case 0x4463b5:c.instructions+=3;goto B4463b5;
case 0x4463b6:c.instructions+=2;goto B4463b6;
case 0x4463b9:c.instructions+=1;goto B4463b9;
case 0x4463c0:goto L4463c0;
case 0x4463c1:c.instructions+=21;goto B4463c1;
case 0x4463c3:c.instructions+=20;goto B4463c3;
case 0x4463c6:c.instructions+=19;goto B4463c6;
case 0x4463c9:c.instructions+=18;goto B4463c9;
case 0x4463cc:c.instructions+=17;goto B4463cc;
case 0x4463cf:c.instructions+=16;goto B4463cf;
case 0x4463d2:c.instructions+=15;goto B4463d2;
case 0x4463d5:c.instructions+=14;goto B4463d5;
case 0x4463d8:c.instructions+=13;goto B4463d8;
case 0x4463db:c.instructions+=12;goto B4463db;
case 0x4463de:c.instructions+=11;goto B4463de;
case 0x4463e1:c.instructions+=10;goto B4463e1;
case 0x4463e4:c.instructions+=9;goto B4463e4;
case 0x4463e7:c.instructions+=8;goto B4463e7;
case 0x4463ea:c.instructions+=7;goto B4463ea;
case 0x4463ed:c.instructions+=6;goto B4463ed;
case 0x4463f0:c.instructions+=5;goto B4463f0;
case 0x4463f3:c.instructions+=4;goto B4463f3;
case 0x4463f6:c.instructions+=3;goto B4463f6;
case 0x4463f9:c.instructions+=2;goto B4463f9;
case 0x4463fa:c.instructions+=1;goto B4463fa;
case 0x446400:goto L446400;
case 0x446401:c.instructions+=17;goto B446401;
case 0x446403:c.instructions+=16;goto B446403;
case 0x446406:c.instructions+=15;goto B446406;
case 0x44640c:c.instructions+=14;goto B44640c;
case 0x44640d:c.instructions+=13;goto B44640d;
case 0x44640e:c.instructions+=12;goto B44640e;
case 0x44640f:c.instructions+=11;goto B44640f;
case 0x446411:c.instructions+=10;goto B446411;
case 0x446414:c.instructions+=9;goto B446414;
case 0x446417:c.instructions+=8;goto B446417;
case 0x446419:c.instructions+=7;goto B446419;
case 0x446420:c.instructions+=6;goto B446420;
case 0x446421:c.instructions+=5;goto B446421;
case 0x446423:c.instructions+=4;goto B446423;
case 0x446426:c.instructions+=3;goto B446426;
case 0x446427:c.instructions+=2;goto B446427;
case 0x44642d:c.instructions+=1;goto B44642d;
case 0x446432:goto L446432;
case 0x446434:c.instructions+=5;goto B446434;
case 0x44643a:c.instructions+=4;goto B44643a;
case 0x44643b:c.instructions+=3;goto B44643b;
case 0x44643f:c.instructions+=2;goto B44643f;
case 0x446440:c.instructions+=1;goto B446440;
case 0x446445:goto L446445;
case 0x44644c:c.instructions+=15;goto B44644c;
case 0x446453:c.instructions+=14;goto B446453;
case 0x44645a:c.instructions+=13;goto B44645a;
case 0x44645e:c.instructions+=12;goto B44645e;
case 0x446462:c.instructions+=11;goto B446462;
case 0x446466:c.instructions+=10;goto B446466;
case 0x446467:c.instructions+=9;goto B446467;
case 0x44646b:c.instructions+=8;goto B44646b;
case 0x44646f:c.instructions+=7;goto B44646f;
case 0x446470:c.instructions+=6;goto B446470;
case 0x446474:c.instructions+=5;goto B446474;
case 0x446475:c.instructions+=4;goto B446475;
case 0x446480:c.instructions+=3;goto B446480;
case 0x446488:c.instructions+=2;goto B446488;
case 0x446490:c.instructions+=1;goto B446490;
case 0x446495:goto L446495;
case 0x446499:c.instructions+=6;goto B446499;
case 0x44649a:c.instructions+=5;goto B44649a;
case 0x44649e:c.instructions+=4;goto B44649e;
case 0x44649f:c.instructions+=3;goto B44649f;
case 0x4464a3:c.instructions+=2;goto B4464a3;
case 0x4464a4:c.instructions+=1;goto B4464a4;
case 0x4464a9:goto L4464a9;
case 0x4464ad:c.instructions+=4;goto B4464ad;
case 0x4464ae:c.instructions+=3;goto B4464ae;
case 0x4464b2:c.instructions+=2;goto B4464b2;
case 0x4464b3:c.instructions+=1;goto B4464b3;
case 0x4464b8:goto L4464b8;
case 0x4464bc:c.instructions+=4;goto B4464bc;
case 0x4464bd:c.instructions+=3;goto B4464bd;
case 0x4464c1:c.instructions+=2;goto B4464c1;
case 0x4464c2:c.instructions+=1;goto B4464c2;
case 0x4464c7:goto L4464c7;
case 0x4464ca:c.instructions+=6;goto B4464ca;
case 0x4464cb:c.instructions+=5;goto B4464cb;
case 0x4464cf:c.instructions+=4;goto B4464cf;
case 0x4464d0:c.instructions+=3;goto B4464d0;
case 0x4464d7:c.instructions+=2;goto B4464d7;
case 0x4464d8:c.instructions+=1;goto B4464d8;
case 0x4464dd:goto L4464dd;
case 0x4464e0:c.instructions+=15;goto B4464e0;
case 0x4464e3:c.instructions+=14;goto B4464e3;
case 0x4464ea:c.instructions+=13;goto B4464ea;
case 0x4464ec:c.instructions+=12;goto B4464ec;
case 0x4464f0:c.instructions+=11;goto B4464f0;
case 0x4464f7:c.instructions+=10;goto B4464f7;
case 0x4464f9:c.instructions+=9;goto B4464f9;
case 0x4464fd:c.instructions+=8;goto B4464fd;
case 0x446504:c.instructions+=7;goto B446504;
case 0x446506:c.instructions+=6;goto B446506;
case 0x44650a:c.instructions+=5;goto B44650a;
case 0x44650c:c.instructions+=4;goto B44650c;
case 0x44650e:c.instructions+=3;goto B44650e;
case 0x446511:c.instructions+=2;goto B446511;
case 0x446517:c.instructions+=1;goto B446517;
case 0x44651c:goto L44651c;
case 0x44651e:c.instructions+=13;goto B44651e;
case 0x446523:c.instructions+=12;goto B446523;
case 0x446525:c.instructions+=11;goto B446525;
case 0x446527:c.instructions+=10;goto B446527;
case 0x44652a:c.instructions+=9;goto B44652a;
case 0x44652c:c.instructions+=8;goto B44652c;
case 0x44652f:c.instructions+=7;goto B44652f;
case 0x446531:c.instructions+=6;goto B446531;
case 0x446532:c.instructions+=5;goto B446532;
case 0x446536:c.instructions+=4;goto B446536;
case 0x446537:c.instructions+=3;goto B446537;
case 0x44653b:c.instructions+=2;goto B44653b;
case 0x44653c:c.instructions+=1;goto B44653c;
case 0x446541:goto L446541;
case 0x446544:c.instructions+=5;goto B446544;
case 0x44654a:c.instructions+=4;goto B44654a;
case 0x44654d:c.instructions+=3;goto B44654d;
case 0x44654f:c.instructions+=2;goto B44654f;
case 0x446552:c.instructions+=1;goto B446552;
case 0x446554:goto L446554;
case 0x44655b:goto L44655b;
case 0x44655e:c.instructions+=2;goto B44655e;
case 0x446564:c.instructions+=1;goto B446564;
case 0x446569:goto L446569;
case 0x44656b:c.instructions+=13;goto B44656b;
case 0x446570:c.instructions+=12;goto B446570;
case 0x446572:c.instructions+=11;goto B446572;
case 0x446574:c.instructions+=10;goto B446574;
case 0x446577:c.instructions+=9;goto B446577;
case 0x446579:c.instructions+=8;goto B446579;
case 0x44657c:c.instructions+=7;goto B44657c;
case 0x44657e:c.instructions+=6;goto B44657e;
case 0x44657f:c.instructions+=5;goto B44657f;
case 0x446586:c.instructions+=4;goto B446586;
case 0x446587:c.instructions+=3;goto B446587;
case 0x44658b:c.instructions+=2;goto B44658b;
case 0x44658c:c.instructions+=1;goto B44658c;
case 0x446591:goto L446591;
case 0x446598:c.instructions+=15;goto B446598;
case 0x44659b:c.instructions+=14;goto B44659b;
case 0x44659c:c.instructions+=13;goto B44659c;
case 0x4465a0:c.instructions+=12;goto B4465a0;
case 0x4465a4:c.instructions+=11;goto B4465a4;
case 0x4465a6:c.instructions+=10;goto B4465a6;
case 0x4465a7:c.instructions+=9;goto B4465a7;
case 0x4465ab:c.instructions+=8;goto B4465ab;
case 0x4465ac:c.instructions+=7;goto B4465ac;
case 0x4465b3:c.instructions+=6;goto B4465b3;
case 0x4465b7:c.instructions+=5;goto B4465b7;
case 0x4465b9:c.instructions+=4;goto B4465b9;
case 0x4465c0:c.instructions+=3;goto B4465c0;
case 0x4465c4:c.instructions+=2;goto B4465c4;
case 0x4465cb:c.instructions+=1;goto B4465cb;
case 0x4465d0:goto L4465d0;
case 0x4465d4:c.instructions+=20;goto B4465d4;
case 0x4465d8:c.instructions+=19;goto B4465d8;
case 0x4465df:c.instructions+=18;goto B4465df;
case 0x4465e0:c.instructions+=17;goto B4465e0;
case 0x4465e4:c.instructions+=16;goto B4465e4;
case 0x4465e8:c.instructions+=15;goto B4465e8;
case 0x4465e9:c.instructions+=14;goto B4465e9;
case 0x4465ed:c.instructions+=13;goto B4465ed;
case 0x4465f1:c.instructions+=12;goto B4465f1;
case 0x4465f5:c.instructions+=11;goto B4465f5;
case 0x4465f6:c.instructions+=10;goto B4465f6;
case 0x4465fd:c.instructions+=9;goto B4465fd;
case 0x4465fe:c.instructions+=8;goto B4465fe;
case 0x446602:c.instructions+=7;goto B446602;
case 0x44660d:c.instructions+=6;goto B44660d;
case 0x446611:c.instructions+=5;goto B446611;
case 0x44661c:c.instructions+=4;goto B44661c;
case 0x446620:c.instructions+=3;goto B446620;
case 0x44662b:c.instructions+=2;goto B44662b;
case 0x44662f:c.instructions+=1;goto B44662f;
case 0x446634:goto L446634;
case 0x446637:c.instructions+=6;goto B446637;
case 0x446639:c.instructions+=5;goto B446639;
case 0x44663a:c.instructions+=4;goto B44663a;
case 0x446641:c.instructions+=3;goto B446641;
case 0x446642:c.instructions+=2;goto B446642;
case 0x446644:c.instructions+=1;goto B446644;
case 0x446649:goto L446649;
case 0x446650:c.instructions+=4;goto B446650;
case 0x446651:c.instructions+=3;goto B446651;
case 0x446654:c.instructions+=2;goto B446654;
case 0x446655:c.instructions+=1;goto B446655;
case 0x44665a:goto L44665a;
case 0x44665d:c.instructions+=6;goto B44665d;
case 0x44665e:c.instructions+=5;goto B44665e;
case 0x44665f:c.instructions+=4;goto B44665f;
case 0x446660:c.instructions+=3;goto B446660;
case 0x446662:c.instructions+=2;goto B446662;
case 0x446663:c.instructions+=1;goto B446663;
case 0x446670:goto L446670;
case 0x446673:c.instructions+=4;goto B446673;
case 0x44667a:c.instructions+=3;goto B44667a;
case 0x446680:c.instructions+=2;goto B446680;
case 0x446686:c.instructions+=1;goto B446686;
case 0x446690:goto L446690;
case 0x446694:c.instructions+=10;goto B446694;
case 0x446696:c.instructions+=9;goto B446696;
case 0x44669a:c.instructions+=8;goto B44669a;
case 0x44669d:c.instructions+=7;goto B44669d;
case 0x4466a1:c.instructions+=6;goto B4466a1;
case 0x4466a4:c.instructions+=5;goto B4466a4;
case 0x4466a8:c.instructions+=4;goto B4466a8;
case 0x4466ae:c.instructions+=3;goto B4466ae;
case 0x4466b1:c.instructions+=2;goto B4466b1;
case 0x4466b4:c.instructions+=1;goto B4466b4;
case 0x4466c0:goto L4466c0;
case 0x4466c6:c.instructions+=1;goto B4466c6;
case 0x4466d0:goto L4466d0;
case 0x4466d4:c.instructions+=4;goto B4466d4;
case 0x4466d5:c.instructions+=3;goto B4466d5;
case 0x4466d6:c.instructions+=2;goto B4466d6;
case 0x4466d8:c.instructions+=1;goto B4466d8;
case 0x4466dd:goto L4466dd;
case 0x4466e3:c.instructions+=8;goto B4466e3;
case 0x4466e6:c.instructions+=7;goto B4466e6;
case 0x4466ec:c.instructions+=6;goto B4466ec;
case 0x4466ef:c.instructions+=5;goto B4466ef;
case 0x4466f2:c.instructions+=4;goto B4466f2;
case 0x4466f4:c.instructions+=3;goto B4466f4;
case 0x4466f7:c.instructions+=2;goto B4466f7;
case 0x4466f8:c.instructions+=1;goto B4466f8;
case 0x446700:goto L446700;
case 0x446701:c.instructions+=4;goto B446701;
case 0x446703:c.instructions+=3;goto B446703;
case 0x446709:c.instructions+=2;goto B446709;
case 0x44670b:c.instructions+=1;goto B44670b;
case 0x44670d:goto L44670d;
case 0x44670f:c.instructions+=1;goto B44670f;
case 0x446714:goto L446714;
case 0x446716:c.instructions+=1;goto B446716;
case 0x44671b:goto L44671b;
case 0x44671d:c.instructions+=1;goto B44671d;
case 0x446722:goto L446722;
case 0x446724:c.instructions+=1;goto B446724;
case 0x446729:goto L446729;
case 0x44672c:c.instructions+=1;goto B44672c;
case 0x446736:goto L446736;
case 0x446737:c.instructions+=1;goto B446737;
case 0x446740:goto L446740;
case 0x446744:c.instructions+=9;goto B446744;
case 0x446747:c.instructions+=8;goto B446747;
case 0x44674a:c.instructions+=7;goto B44674a;
case 0x446750:c.instructions+=6;goto B446750;
case 0x446751:c.instructions+=5;goto B446751;
case 0x446754:c.instructions+=4;goto B446754;
case 0x446756:c.instructions+=3;goto B446756;
case 0x446758:c.instructions+=2;goto B446758;
case 0x446759:c.instructions+=1;goto B446759;
case 0x44675b:goto L44675b;
case 0x44675f:c.instructions+=3;goto B44675f;
case 0x446762:c.instructions+=2;goto B446762;
case 0x446765:c.instructions+=1;goto B446765;
case 0x446767:goto L446767;
case 0x44676e:c.instructions+=1;goto B44676e;
case 0x446775:goto L446775;
case 0x44677a:c.instructions+=7;goto B44677a;
case 0x44677e:c.instructions+=6;goto B44677e;
case 0x446782:c.instructions+=5;goto B446782;
case 0x446788:c.instructions+=4;goto B446788;
case 0x44678e:c.instructions+=3;goto B44678e;
case 0x446790:c.instructions+=2;goto B446790;
case 0x446793:c.instructions+=1;goto B446793;
case 0x446794:goto L446794;
case 0x446799:c.instructions+=6;goto B446799;
case 0x44679d:c.instructions+=5;goto B44679d;
case 0x4467a1:c.instructions+=4;goto B4467a1;
case 0x4467a7:c.instructions+=3;goto B4467a7;
case 0x4467ad:c.instructions+=2;goto B4467ad;
case 0x4467b0:c.instructions+=1;goto B4467b0;
case 0x4467b1:goto L4467b1;
case 0x4467b5:c.instructions+=1;goto B4467b5;
case 0x4467b7:goto L4467b7;
case 0x4467be:c.instructions+=1;goto B4467be;
case 0x4467bf:goto L4467bf;
case 0x4467c3:c.instructions+=1;goto B4467c3;
case 0x4467c5:goto L4467c5;
case 0x4467cc:c.instructions+=1;goto B4467cc;
case 0x4467cd:goto L4467cd;
case 0x4467d0:c.instructions+=1;goto B4467d0;
case 0x4467d3:goto L4467d3;
case 0x4467da:goto L4467da;
case 0x446800:goto L446800;
case 0x446806:c.instructions+=3;goto B446806;
case 0x44680c:c.instructions+=2;goto B44680c;
case 0x446812:c.instructions+=1;goto B446812;
case 0x446820:goto L446820;
case 0x446823:c.instructions+=6;goto B446823;
case 0x446824:c.instructions+=5;goto B446824;
case 0x446826:c.instructions+=4;goto B446826;
case 0x446829:c.instructions+=3;goto B446829;
case 0x44682c:c.instructions+=2;goto B44682c;
case 0x446834:c.instructions+=1;goto B446834;
case 0x446836:goto L446836;
case 0x446837:c.instructions+=1;goto B446837;
case 0x446839:goto L446839;
case 0x44683a:c.instructions+=1;goto B44683a;
case 0x44683c:goto L44683c;
case 0x446844:c.instructions+=1;goto B446844;
case 0x446846:goto L446846;
case 0x446849:c.instructions+=1;goto B446849;
case 0x44684b:goto L44684b;
case 0x44684e:c.instructions+=3;goto B44684e;
case 0x44684f:c.instructions+=2;goto B44684f;
case 0x446853:c.instructions+=1;goto B446853;
case 0x446857:goto L446857;
case 0x44685b:goto L44685b;
case 0x44685c:c.instructions+=4;goto B44685c;
case 0x446862:c.instructions+=3;goto B446862;
case 0x446864:c.instructions+=2;goto B446864;
case 0x446866:c.instructions+=1;goto B446866;
case 0x44686b:goto L44686b;
case 0x44686f:c.instructions+=4;goto B44686f;
case 0x446872:c.instructions+=3;goto B446872;
case 0x446875:c.instructions+=2;goto B446875;
case 0x446879:c.instructions+=1;goto B446879;
case 0x44687b:goto L44687b;
case 0x44687c:c.instructions+=1;goto B44687c;
case 0x44687e:goto L44687e;
case 0x44687f:c.instructions+=1;goto B44687f;
case 0x446881:goto L446881;
case 0x446889:c.instructions+=1;goto B446889;
case 0x44688b:goto L44688b;
case 0x44688e:c.instructions+=1;goto B44688e;
case 0x446890:goto L446890;
case 0x446893:c.instructions+=3;goto B446893;
case 0x446894:c.instructions+=2;goto B446894;
case 0x446898:c.instructions+=1;goto B446898;
case 0x44689c:goto L44689c;
case 0x4468a0:goto L4468a0;
case 0x4468a5:c.instructions+=2;goto B4468a5;
case 0x4468a7:c.instructions+=1;goto B4468a7;
case 0x4468ac:goto L4468ac;
case 0x4468b0:c.instructions+=7;goto B4468b0;
case 0x4468b1:c.instructions+=6;goto B4468b1;
case 0x4468b5:c.instructions+=5;goto B4468b5;
case 0x4468b8:c.instructions+=4;goto B4468b8;
case 0x4468bc:c.instructions+=3;goto B4468bc;
case 0x4468be:c.instructions+=2;goto B4468be;
case 0x4468c1:c.instructions+=1;goto B4468c1;
case 0x4468c3:goto L4468c3;
case 0x4468c6:c.instructions+=4;goto B4468c6;
case 0x4468ca:c.instructions+=3;goto B4468ca;
case 0x4468cc:c.instructions+=2;goto B4468cc;
case 0x4468cf:c.instructions+=1;goto B4468cf;
case 0x4468d1:goto L4468d1;
case 0x4468d7:c.instructions+=1;goto B4468d7;
case 0x4468d9:goto L4468d9;
case 0x4468dd:goto L4468dd;
case 0x4468e0:c.instructions+=4;goto B4468e0;
case 0x4468e4:c.instructions+=3;goto B4468e4;
case 0x4468e6:c.instructions+=2;goto B4468e6;
case 0x4468e9:c.instructions+=1;goto B4468e9;
case 0x4468eb:goto L4468eb;
case 0x4468ee:c.instructions+=4;goto B4468ee;
case 0x4468f2:c.instructions+=3;goto B4468f2;
case 0x4468f4:c.instructions+=2;goto B4468f4;
case 0x4468f7:c.instructions+=1;goto B4468f7;
case 0x4468f9:goto L4468f9;
case 0x4468ff:goto L4468ff;
case 0x446902:c.instructions+=4;goto B446902;
case 0x446906:c.instructions+=3;goto B446906;
case 0x446908:c.instructions+=2;goto B446908;
case 0x44690b:c.instructions+=1;goto B44690b;
case 0x44690d:goto L44690d;
case 0x446910:c.instructions+=4;goto B446910;
case 0x446914:c.instructions+=3;goto B446914;
case 0x446916:c.instructions+=2;goto B446916;
case 0x446919:c.instructions+=1;goto B446919;
case 0x44691b:goto L44691b;
case 0x446921:goto L446921;
case 0x446924:c.instructions+=4;goto B446924;
case 0x446928:c.instructions+=3;goto B446928;
case 0x44692a:c.instructions+=2;goto B44692a;
case 0x44692d:c.instructions+=1;goto B44692d;
case 0x44692f:goto L44692f;
case 0x446932:c.instructions+=4;goto B446932;
case 0x446936:c.instructions+=3;goto B446936;
case 0x446938:c.instructions+=2;goto B446938;
case 0x44693b:c.instructions+=1;goto B44693b;
case 0x44693d:goto L44693d;
case 0x446943:goto L446943;
case 0x446946:c.instructions+=8;goto B446946;
case 0x446949:c.instructions+=7;goto B446949;
case 0x44694a:c.instructions+=6;goto B44694a;
case 0x446950:c.instructions+=5;goto B446950;
case 0x446956:c.instructions+=4;goto B446956;
case 0x44695c:c.instructions+=3;goto B44695c;
case 0x44695e:c.instructions+=2;goto B44695e;
case 0x446961:c.instructions+=1;goto B446961;
case 0x446970:goto L446970;
case 0x446971:c.instructions+=16;goto B446971;
case 0x446973:c.instructions+=15;goto B446973;
case 0x446976:c.instructions+=14;goto B446976;
case 0x446978:c.instructions+=13;goto B446978;
case 0x44697d:c.instructions+=12;goto B44697d;
case 0x446983:c.instructions+=11;goto B446983;
case 0x446984:c.instructions+=10;goto B446984;
case 0x44698b:c.instructions+=9;goto B44698b;
case 0x446991:c.instructions+=8;goto B446991;
case 0x446994:c.instructions+=7;goto B446994;
case 0x446995:c.instructions+=6;goto B446995;
case 0x446996:c.instructions+=5;goto B446996;
case 0x446999:c.instructions+=4;goto B446999;
case 0x44699b:c.instructions+=3;goto B44699b;
case 0x44699d:c.instructions+=2;goto B44699d;
case 0x44699e:c.instructions+=1;goto B44699e;
case 0x4469a0:goto L4469a0;
case 0x4469a1:c.instructions+=1;goto B4469a1;
case 0x4469a3:goto L4469a3;
case 0x4469a4:c.instructions+=1;goto B4469a4;
case 0x4469a6:goto L4469a6;
case 0x4469aa:c.instructions+=1;goto B4469aa;
case 0x4469ac:goto L4469ac;
case 0x4469af:c.instructions+=1;goto B4469af;
case 0x4469b1:goto L4469b1;
case 0x4469b4:c.instructions+=3;goto B4469b4;
case 0x4469b5:c.instructions+=2;goto B4469b5;
case 0x4469b9:c.instructions+=1;goto B4469b9;
case 0x4469bd:goto L4469bd;
case 0x4469c1:goto L4469c1;
case 0x4469c3:c.instructions+=1;goto B4469c3;
case 0x4469c8:goto L4469c8;
case 0x4469cc:c.instructions+=6;goto B4469cc;
case 0x4469d0:c.instructions+=5;goto B4469d0;
case 0x4469d6:c.instructions+=4;goto B4469d6;
case 0x4469d8:c.instructions+=3;goto B4469d8;
case 0x4469dc:c.instructions+=2;goto B4469dc;
case 0x4469de:c.instructions+=1;goto B4469de;
case 0x4469e3:goto L4469e3;
case 0x4469e9:c.instructions+=2;goto B4469e9;
case 0x4469f0:c.instructions+=1;goto B4469f0;
case 0x4469f4:goto L4469f4;
case 0x4469f7:c.instructions+=3;goto B4469f7;
case 0x4469fb:c.instructions+=2;goto B4469fb;
case 0x4469fe:c.instructions+=1;goto B4469fe;
case 0x446a00:goto L446a00;
case 0x446a01:c.instructions+=1;goto B446a01;
case 0x446a03:goto L446a03;
case 0x446a04:c.instructions+=1;goto B446a04;
case 0x446a06:goto L446a06;
case 0x446a0c:c.instructions+=1;goto B446a0c;
case 0x446a0e:goto L446a0e;
case 0x446a11:c.instructions+=1;goto B446a11;
case 0x446a13:goto L446a13;
case 0x446a16:c.instructions+=3;goto B446a16;
case 0x446a17:c.instructions+=2;goto B446a17;
case 0x446a1b:c.instructions+=1;goto B446a1b;
case 0x446a1f:goto L446a1f;
case 0x446a21:c.instructions+=5;goto B446a21;
case 0x446a23:c.instructions+=4;goto B446a23;
case 0x446a25:c.instructions+=3;goto B446a25;
case 0x446a27:c.instructions+=2;goto B446a27;
case 0x446a2a:c.instructions+=1;goto B446a2a;
case 0x446a30:goto L446a30;
case 0x446a34:c.instructions+=10;goto B446a34;
case 0x446a38:c.instructions+=9;goto B446a38;
case 0x446a3b:c.instructions+=8;goto B446a3b;
case 0x446a3d:c.instructions+=7;goto B446a3d;
case 0x446a40:c.instructions+=6;goto B446a40;
case 0x446a44:c.instructions+=5;goto B446a44;
case 0x446a45:c.instructions+=4;goto B446a45;
case 0x446a46:c.instructions+=3;goto B446a46;
case 0x446a48:c.instructions+=2;goto B446a48;
case 0x446a4b:c.instructions+=1;goto B446a4b;
case 0x446a50:goto L446a50;
case 0x446a54:c.instructions+=2;goto B446a54;
case 0x446a56:c.instructions+=1;goto B446a56;
case 0x446a5c:goto L446a5c;
case 0x446a5e:c.instructions+=53;goto B446a5e;
case 0x446a61:c.instructions+=52;goto B446a61;
case 0x446a64:c.instructions+=51;goto B446a64;
case 0x446a67:c.instructions+=50;goto B446a67;
case 0x446a6b:c.instructions+=49;goto B446a6b;
case 0x446a6f:c.instructions+=48;goto B446a6f;
case 0x446a73:c.instructions+=47;goto B446a73;
case 0x446a75:c.instructions+=46;goto B446a75;
case 0x446a77:c.instructions+=45;goto B446a77;
case 0x446a7b:c.instructions+=44;goto B446a7b;
case 0x446a7f:c.instructions+=43;goto B446a7f;
case 0x446a83:c.instructions+=42;goto B446a83;
case 0x446a87:c.instructions+=41;goto B446a87;
case 0x446a8b:c.instructions+=40;goto B446a8b;
case 0x446a8d:c.instructions+=39;goto B446a8d;
case 0x446a8f:c.instructions+=38;goto B446a8f;
case 0x446a93:c.instructions+=37;goto B446a93;
case 0x446a97:c.instructions+=36;goto B446a97;
case 0x446a99:c.instructions+=35;goto B446a99;
case 0x446a9d:c.instructions+=34;goto B446a9d;
case 0x446aa1:c.instructions+=33;goto B446aa1;
case 0x446aa5:c.instructions+=32;goto B446aa5;
case 0x446aa9:c.instructions+=31;goto B446aa9;
case 0x446aaf:c.instructions+=30;goto B446aaf;
case 0x446ab3:c.instructions+=29;goto B446ab3;
case 0x446ab5:c.instructions+=28;goto B446ab5;
case 0x446abb:c.instructions+=27;goto B446abb;
case 0x446abf:c.instructions+=26;goto B446abf;
case 0x446ac5:c.instructions+=25;goto B446ac5;
case 0x446ac7:c.instructions+=24;goto B446ac7;
case 0x446ac9:c.instructions+=23;goto B446ac9;
case 0x446acd:c.instructions+=22;goto B446acd;
case 0x446ad1:c.instructions+=21;goto B446ad1;
case 0x446ad3:c.instructions+=20;goto B446ad3;
case 0x446ad7:c.instructions+=19;goto B446ad7;
case 0x446adb:c.instructions+=18;goto B446adb;
case 0x446add:c.instructions+=17;goto B446add;
case 0x446adf:c.instructions+=16;goto B446adf;
case 0x446ae5:c.instructions+=15;goto B446ae5;
case 0x446ae9:c.instructions+=14;goto B446ae9;
case 0x446aeb:c.instructions+=13;goto B446aeb;
case 0x446aef:c.instructions+=12;goto B446aef;
case 0x446af2:c.instructions+=11;goto B446af2;
case 0x446af3:c.instructions+=10;goto B446af3;
case 0x446af5:c.instructions+=9;goto B446af5;
case 0x446af6:c.instructions+=8;goto B446af6;
case 0x446afa:c.instructions+=7;goto B446afa;
case 0x446b01:c.instructions+=6;goto B446b01;
case 0x446b05:c.instructions+=5;goto B446b05;
case 0x446b09:c.instructions+=4;goto B446b09;
case 0x446b0d:c.instructions+=3;goto B446b0d;
case 0x446b11:c.instructions+=2;goto B446b11;
case 0x446b15:c.instructions+=1;goto B446b15;
case 0x446b1a:goto L446b1a;
case 0x446b1f:c.instructions+=7;goto B446b1f;
case 0x446b24:c.instructions+=6;goto B446b24;
case 0x446b25:c.instructions+=5;goto B446b25;
case 0x446b26:c.instructions+=4;goto B446b26;
case 0x446b28:c.instructions+=3;goto B446b28;
case 0x446b2a:c.instructions+=2;goto B446b2a;
case 0x446b31:c.instructions+=1;goto B446b31;
case 0x446b36:goto L446b36;
case 0x446b38:c.instructions+=1;goto B446b38;
case 0x446b3a:goto L446b3a;
case 0x446b3e:c.instructions+=5;goto B446b3e;
case 0x446b42:c.instructions+=4;goto B446b42;
case 0x446b46:c.instructions+=3;goto B446b46;
case 0x446b47:c.instructions+=2;goto B446b47;
case 0x446b4b:c.instructions+=1;goto B446b4b;
case 0x446b50:goto L446b50;
case 0x446b54:c.instructions+=2;goto B446b54;
case 0x446b5f:c.instructions+=1;goto B446b5f;
case 0x446b64:goto L446b64;
case 0x446b66:c.instructions+=8;goto B446b66;
case 0x446b6d:c.instructions+=7;goto B446b6d;
case 0x446b74:c.instructions+=6;goto B446b74;
case 0x446b75:c.instructions+=5;goto B446b75;
case 0x446b76:c.instructions+=4;goto B446b76;
case 0x446b77:c.instructions+=3;goto B446b77;
case 0x446b79:c.instructions+=2;goto B446b79;
case 0x446b7a:c.instructions+=1;goto B446b7a;
case 0x446b7b:goto L446b7b;
case 0x446b7f:c.instructions+=2;goto B446b7f;
case 0x446b8a:c.instructions+=1;goto B446b8a;
case 0x446b8f:goto L446b8f;
case 0x446b96:c.instructions+=8;goto B446b96;
case 0x446b97:c.instructions+=7;goto B446b97;
case 0x446b98:c.instructions+=6;goto B446b98;
case 0x446b9a:c.instructions+=5;goto B446b9a;
case 0x446ba1:c.instructions+=4;goto B446ba1;
case 0x446ba2:c.instructions+=3;goto B446ba2;
case 0x446ba4:c.instructions+=2;goto B446ba4;
case 0x446ba5:c.instructions+=1;goto B446ba5;
case 0x446bb0:goto L446bb0;
case 0x446bb2:c.instructions+=2;goto B446bb2;
case 0x446bb4:c.instructions+=1;goto B446bb4;
case 0x446bb6:goto L446bb6;
case 0x446bb7:c.instructions+=1;goto B446bb7;
case 0x446bbc:goto L446bbc;
case 0x446bbd:goto L446bbd;
case 0x446bc0:goto L446bc0;
case 0x446bc1:c.instructions+=14;goto B446bc1;
case 0x446bc3:c.instructions+=13;goto B446bc3;
case 0x446bc6:c.instructions+=12;goto B446bc6;
case 0x446bc9:c.instructions+=11;goto B446bc9;
case 0x446bca:c.instructions+=10;goto B446bca;
case 0x446bcd:c.instructions+=9;goto B446bcd;
case 0x446bce:c.instructions+=8;goto B446bce;
case 0x446bcf:c.instructions+=7;goto B446bcf;
case 0x446bd3:c.instructions+=6;goto B446bd3;
case 0x446bdb:c.instructions+=5;goto B446bdb;
case 0x446be3:c.instructions+=4;goto B446be3;
case 0x446beb:c.instructions+=3;goto B446beb;
case 0x446bf0:c.instructions+=2;goto B446bf0;
case 0x446bf2:c.instructions+=1;goto B446bf2;
case 0x446bf4:goto L446bf4;
case 0x446bf8:goto L446bf8;
case 0x446bfb:c.instructions+=1;goto B446bfb;
case 0x446bfd:goto L446bfd;
case 0x446c01:c.instructions+=2;goto B446c01;
case 0x446c03:c.instructions+=1;goto B446c03;
case 0x446c09:goto L446c09;
case 0x446c0d:c.instructions+=15;goto B446c0d;
case 0x446c11:c.instructions+=14;goto B446c11;
case 0x446c15:c.instructions+=13;goto B446c15;
case 0x446c19:c.instructions+=12;goto B446c19;
case 0x446c1d:c.instructions+=11;goto B446c1d;
case 0x446c23:c.instructions+=10;goto B446c23;
case 0x446c27:c.instructions+=9;goto B446c27;
case 0x446c2d:c.instructions+=8;goto B446c2d;
case 0x446c30:c.instructions+=7;goto B446c30;
case 0x446c32:c.instructions+=6;goto B446c32;
case 0x446c35:c.instructions+=5;goto B446c35;
case 0x446c37:c.instructions+=4;goto B446c37;
case 0x446c3d:c.instructions+=3;goto B446c3d;
case 0x446c3f:c.instructions+=2;goto B446c3f;
case 0x446c42:c.instructions+=1;goto B446c42;
case 0x446c48:goto L446c48;
case 0x446c50:c.instructions+=2;goto B446c50;
case 0x446c53:c.instructions+=1;goto B446c53;
case 0x446c55:goto L446c55;
case 0x446c58:c.instructions+=4;goto B446c58;
case 0x446c5c:c.instructions+=3;goto B446c5c;
case 0x446c5e:c.instructions+=2;goto B446c5e;
case 0x446c60:c.instructions+=1;goto B446c60;
case 0x446c62:goto L446c62;
case 0x446c66:c.instructions+=2;goto B446c66;
case 0x446c68:c.instructions+=1;goto B446c68;
case 0x446c6a:goto L446c6a;
case 0x446c6b:c.instructions+=2;goto B446c6b;
case 0x446c6d:c.instructions+=1;goto B446c6d;
case 0x446c72:goto L446c72;
case 0x446c76:c.instructions+=1;goto B446c76;
case 0x446c7b:goto L446c7b;
case 0x446c7f:c.instructions+=6;goto B446c7f;
case 0x446c80:c.instructions+=5;goto B446c80;
case 0x446c82:c.instructions+=4;goto B446c82;
case 0x446c86:c.instructions+=3;goto B446c86;
case 0x446c87:c.instructions+=2;goto B446c87;
case 0x446c89:c.instructions+=1;goto B446c89;
case 0x446c8e:goto L446c8e;
case 0x446c91:c.instructions+=4;goto B446c91;
case 0x446c95:c.instructions+=3;goto B446c95;
case 0x446c96:c.instructions+=2;goto B446c96;
case 0x446c97:c.instructions+=1;goto B446c97;
case 0x446c9c:goto L446c9c;
case 0x446ca0:c.instructions+=4;goto B446ca0;
case 0x446ca3:c.instructions+=3;goto B446ca3;
case 0x446ca5:c.instructions+=2;goto B446ca5;
case 0x446ca8:c.instructions+=1;goto B446ca8;
case 0x446caa:goto L446caa;
case 0x446cae:c.instructions+=6;goto B446cae;
case 0x446cb2:c.instructions+=5;goto B446cb2;
case 0x446cb4:c.instructions+=4;goto B446cb4;
case 0x446cb8:c.instructions+=3;goto B446cb8;
case 0x446cbc:c.instructions+=2;goto B446cbc;
case 0x446cc0:c.instructions+=1;goto B446cc0;
case 0x446cc2:goto L446cc2;
case 0x446cc4:goto L446cc4;
case 0x446cc6:goto L446cc6;
case 0x446cc7:c.instructions+=2;goto B446cc7;
case 0x446cca:c.instructions+=1;goto B446cca;
case 0x446cd0:goto L446cd0;
case 0x446cd3:c.instructions+=14;goto B446cd3;
case 0x446cd7:c.instructions+=13;goto B446cd7;
case 0x446cda:c.instructions+=12;goto B446cda;
case 0x446cde:c.instructions+=11;goto B446cde;
case 0x446cdf:c.instructions+=10;goto B446cdf;
case 0x446ce1:c.instructions+=9;goto B446ce1;
case 0x446ce5:c.instructions+=8;goto B446ce5;
case 0x446ce6:c.instructions+=7;goto B446ce6;
case 0x446ce9:c.instructions+=6;goto B446ce9;
case 0x446cec:c.instructions+=5;goto B446cec;
case 0x446cef:c.instructions+=4;goto B446cef;
case 0x446cf0:c.instructions+=3;goto B446cf0;
case 0x446cf2:c.instructions+=2;goto B446cf2;
case 0x446cf3:c.instructions+=1;goto B446cf3;
case 0x446d00:goto L446d00;
case 0x446d01:c.instructions+=9;goto B446d01;
case 0x446d05:c.instructions+=8;goto B446d05;
case 0x446d06:c.instructions+=7;goto B446d06;
case 0x446d08:c.instructions+=6;goto B446d08;
case 0x446d0b:c.instructions+=5;goto B446d0b;
case 0x446d0c:c.instructions+=4;goto B446d0c;
case 0x446d0e:c.instructions+=3;goto B446d0e;
case 0x446d11:c.instructions+=2;goto B446d11;
case 0x446d15:c.instructions+=1;goto B446d15;
case 0x446d1a:goto L446d1a;
case 0x446d1c:c.instructions+=3;goto B446d1c;
case 0x446d1e:c.instructions+=2;goto B446d1e;
case 0x446d22:c.instructions+=1;goto B446d22;
case 0x446d24:goto L446d24;
case 0x446d27:c.instructions+=13;goto B446d27;
case 0x446d29:c.instructions+=12;goto B446d29;
case 0x446d2d:c.instructions+=11;goto B446d2d;
case 0x446d2f:c.instructions+=10;goto B446d2f;
case 0x446d32:c.instructions+=9;goto B446d32;
case 0x446d35:c.instructions+=8;goto B446d35;
case 0x446d38:c.instructions+=7;goto B446d38;
case 0x446d3b:c.instructions+=6;goto B446d3b;
case 0x446d3e:c.instructions+=5;goto B446d3e;
case 0x446d3f:c.instructions+=4;goto B446d3f;
case 0x446d42:c.instructions+=3;goto B446d42;
case 0x446d43:c.instructions+=2;goto B446d43;
case 0x446d44:c.instructions+=1;goto B446d44;
case 0x446d47:goto L446d47;
case 0x446d4a:c.instructions+=2;goto B446d4a;
case 0x446d4c:c.instructions+=1;goto B446d4c;
case 0x446d4e:goto L446d4e;
case 0x446d51:c.instructions+=15;goto B446d51;
case 0x446d55:c.instructions+=14;goto B446d55;
case 0x446d58:c.instructions+=13;goto B446d58;
case 0x446d5c:c.instructions+=12;goto B446d5c;
case 0x446d5e:c.instructions+=11;goto B446d5e;
case 0x446d60:c.instructions+=10;goto B446d60;
case 0x446d63:c.instructions+=9;goto B446d63;
case 0x446d66:c.instructions+=8;goto B446d66;
case 0x446d69:c.instructions+=7;goto B446d69;
case 0x446d6c:c.instructions+=6;goto B446d6c;
case 0x446d6f:c.instructions+=5;goto B446d6f;
case 0x446d70:c.instructions+=4;goto B446d70;
case 0x446d73:c.instructions+=3;goto B446d73;
case 0x446d74:c.instructions+=2;goto B446d74;
case 0x446d75:c.instructions+=1;goto B446d75;
case 0x446d78:goto L446d78;
case 0x446d7c:c.instructions+=4;goto B446d7c;
case 0x446d80:c.instructions+=3;goto B446d80;
case 0x446d82:c.instructions+=2;goto B446d82;
case 0x446d85:c.instructions+=1;goto B446d85;
case 0x446d87:goto L446d87;
case 0x446d8d:goto L446d8d;
case 0x446d91:c.instructions+=14;goto B446d91;
case 0x446d94:c.instructions+=13;goto B446d94;
case 0x446d97:c.instructions+=12;goto B446d97;
case 0x446d99:c.instructions+=11;goto B446d99;
case 0x446d9a:c.instructions+=10;goto B446d9a;
case 0x446d9d:c.instructions+=9;goto B446d9d;
case 0x446da0:c.instructions+=8;goto B446da0;
case 0x446da1:c.instructions+=7;goto B446da1;
case 0x446da4:c.instructions+=6;goto B446da4;
case 0x446da6:c.instructions+=5;goto B446da6;
case 0x446da7:c.instructions+=4;goto B446da7;
case 0x446dab:c.instructions+=3;goto B446dab;
case 0x446dac:c.instructions+=2;goto B446dac;
case 0x446dae:c.instructions+=1;goto B446dae;
case 0x446db3:goto L446db3;
case 0x446db4:c.instructions+=3;goto B446db4;
case 0x446db5:c.instructions+=2;goto B446db5;
case 0x446db6:c.instructions+=1;goto B446db6;
case 0x446dc0:goto L446dc0;
case 0x446dc1:c.instructions+=9;goto B446dc1;
case 0x446dc5:c.instructions+=8;goto B446dc5;
case 0x446dc6:c.instructions+=7;goto B446dc6;
case 0x446dc8:c.instructions+=6;goto B446dc8;
case 0x446dcb:c.instructions+=5;goto B446dcb;
case 0x446dcc:c.instructions+=4;goto B446dcc;
case 0x446dce:c.instructions+=3;goto B446dce;
case 0x446dd1:c.instructions+=2;goto B446dd1;
case 0x446dd5:c.instructions+=1;goto B446dd5;
case 0x446dda:goto L446dda;
case 0x446ddc:c.instructions+=3;goto B446ddc;
case 0x446dde:c.instructions+=2;goto B446dde;
case 0x446de2:c.instructions+=1;goto B446de2;
case 0x446de4:goto L446de4;
case 0x446de7:c.instructions+=2;goto B446de7;
case 0x446deb:c.instructions+=1;goto B446deb;
case 0x446df0:goto L446df0;
case 0x446df2:goto L446df2;
case 0x446df3:c.instructions+=3;goto B446df3;
case 0x446df4:c.instructions+=2;goto B446df4;
case 0x446df5:c.instructions+=1;goto B446df5;
case 0x446df8:goto L446df8;
case 0x446dfb:c.instructions+=2;goto B446dfb;
case 0x446dfd:c.instructions+=1;goto B446dfd;
case 0x446dff:goto L446dff;
case 0x446e02:c.instructions+=4;goto B446e02;
case 0x446e08:c.instructions+=3;goto B446e08;
case 0x446e0f:c.instructions+=2;goto B446e0f;
case 0x446e13:c.instructions+=1;goto B446e13;
case 0x446e18:goto L446e18;
case 0x446e1a:goto L446e1a;
case 0x446e1b:c.instructions+=3;goto B446e1b;
case 0x446e1c:c.instructions+=2;goto B446e1c;
case 0x446e1d:c.instructions+=1;goto B446e1d;
case 0x446e20:goto L446e20;
case 0x446e24:c.instructions+=4;goto B446e24;
case 0x446e28:c.instructions+=3;goto B446e28;
case 0x446e2a:c.instructions+=2;goto B446e2a;
case 0x446e2d:c.instructions+=1;goto B446e2d;
case 0x446e2f:goto L446e2f;
case 0x446e35:goto L446e35;
case 0x446e39:c.instructions+=14;goto B446e39;
case 0x446e3c:c.instructions+=13;goto B446e3c;
case 0x446e42:c.instructions+=12;goto B446e42;
case 0x446e44:c.instructions+=11;goto B446e44;
case 0x446e45:c.instructions+=10;goto B446e45;
case 0x446e48:c.instructions+=9;goto B446e48;
case 0x446e4a:c.instructions+=8;goto B446e4a;
case 0x446e4d:c.instructions+=7;goto B446e4d;
case 0x446e4e:c.instructions+=6;goto B446e4e;
case 0x446e53:c.instructions+=5;goto B446e53;
case 0x446e54:c.instructions+=4;goto B446e54;
case 0x446e56:c.instructions+=3;goto B446e56;
case 0x446e5a:c.instructions+=2;goto B446e5a;
case 0x446e5b:c.instructions+=1;goto B446e5b;
case 0x446e60:goto L446e60;
case 0x446e61:c.instructions+=3;goto B446e61;
case 0x446e62:c.instructions+=2;goto B446e62;
case 0x446e63:c.instructions+=1;goto B446e63;
case 0x446e70:goto L446e70;
case 0x446e72:c.instructions+=13;goto B446e72;
case 0x446e77:c.instructions+=12;goto B446e77;
case 0x446e7d:c.instructions+=11;goto B446e7d;
case 0x446e7e:c.instructions+=10;goto B446e7e;
case 0x446e85:c.instructions+=9;goto B446e85;
case 0x446e86:c.instructions+=8;goto B446e86;
case 0x446e87:c.instructions+=7;goto B446e87;
case 0x446e88:c.instructions+=6;goto B446e88;
case 0x446e8c:c.instructions+=5;goto B446e8c;
case 0x446e8d:c.instructions+=4;goto B446e8d;
case 0x446e8f:c.instructions+=3;goto B446e8f;
case 0x446e91:c.instructions+=2;goto B446e91;
case 0x446e95:c.instructions+=1;goto B446e95;
case 0x446e9a:goto L446e9a;
case 0x446e9d:c.instructions+=4;goto B446e9d;
case 0x446e9e:c.instructions+=3;goto B446e9e;
case 0x446ea6:c.instructions+=2;goto B446ea6;
case 0x446eac:c.instructions+=1;goto B446eac;
case 0x446eb1:goto L446eb1;
case 0x446eb3:c.instructions+=6;goto B446eb3;
case 0x446eb6:c.instructions+=5;goto B446eb6;
case 0x446eb8:c.instructions+=4;goto B446eb8;
case 0x446eba:c.instructions+=3;goto B446eba;
case 0x446ebc:c.instructions+=2;goto B446ebc;
case 0x446ebe:c.instructions+=1;goto B446ebe;
case 0x446ec1:goto L446ec1;
case 0x446ec3:goto L446ec3;
case 0x446ec6:c.instructions+=2;goto B446ec6;
case 0x446ec8:c.instructions+=1;goto B446ec8;
case 0x446ecb:goto L446ecb;
case 0x446ecd:goto L446ecd;
case 0x446ed0:c.instructions+=22;goto B446ed0;
case 0x446ed1:c.instructions+=21;goto B446ed1;
case 0x446ed4:c.instructions+=20;goto B446ed4;
case 0x446ed7:c.instructions+=19;goto B446ed7;
case 0x446ed9:c.instructions+=18;goto B446ed9;
case 0x446edc:c.instructions+=17;goto B446edc;
case 0x446ede:c.instructions+=16;goto B446ede;
case 0x446ee1:c.instructions+=15;goto B446ee1;
case 0x446ee4:c.instructions+=14;goto B446ee4;
case 0x446ee7:c.instructions+=13;goto B446ee7;
case 0x446eea:c.instructions+=12;goto B446eea;
case 0x446eec:c.instructions+=11;goto B446eec;
case 0x446eef:c.instructions+=10;goto B446eef;
case 0x446ef2:c.instructions+=9;goto B446ef2;
case 0x446ef6:c.instructions+=8;goto B446ef6;
case 0x446ef8:c.instructions+=7;goto B446ef8;
case 0x446efb:c.instructions+=6;goto B446efb;
case 0x446efd:c.instructions+=5;goto B446efd;
case 0x446f00:c.instructions+=4;goto B446f00;
case 0x446f01:c.instructions+=3;goto B446f01;
case 0x446f08:c.instructions+=2;goto B446f08;
case 0x446f0b:c.instructions+=1;goto B446f0b;
case 0x446f10:goto L446f10;
case 0x446f11:c.instructions+=7;goto B446f11;
case 0x446f13:c.instructions+=6;goto B446f13;
case 0x446f16:c.instructions+=5;goto B446f16;
case 0x446f19:c.instructions+=4;goto B446f19;
case 0x446f1c:c.instructions+=3;goto B446f1c;
case 0x446f1f:c.instructions+=2;goto B446f1f;
case 0x446f20:c.instructions+=1;goto B446f20;
case 0x446f22:goto L446f22;
case 0x446f24:c.instructions+=1;goto B446f24;
case 0x446f27:goto L446f27;
case 0x446f2b:c.instructions+=64;goto B446f2b;
case 0x446f2e:c.instructions+=63;goto B446f2e;
case 0x446f31:c.instructions+=62;goto B446f31;
case 0x446f33:c.instructions+=61;goto B446f33;
case 0x446f36:c.instructions+=60;goto B446f36;
case 0x446f39:c.instructions+=59;goto B446f39;
case 0x446f3c:c.instructions+=58;goto B446f3c;
case 0x446f3f:c.instructions+=57;goto B446f3f;
case 0x446f41:c.instructions+=56;goto B446f41;
case 0x446f44:c.instructions+=55;goto B446f44;
case 0x446f47:c.instructions+=54;goto B446f47;
case 0x446f49:c.instructions+=53;goto B446f49;
case 0x446f4c:c.instructions+=52;goto B446f4c;
case 0x446f4f:c.instructions+=51;goto B446f4f;
case 0x446f51:c.instructions+=50;goto B446f51;
case 0x446f54:c.instructions+=49;goto B446f54;
case 0x446f56:c.instructions+=48;goto B446f56;
case 0x446f58:c.instructions+=47;goto B446f58;
case 0x446f5b:c.instructions+=46;goto B446f5b;
case 0x446f5e:c.instructions+=45;goto B446f5e;
case 0x446f60:c.instructions+=44;goto B446f60;
case 0x446f63:c.instructions+=43;goto B446f63;
case 0x446f66:c.instructions+=42;goto B446f66;
case 0x446f68:c.instructions+=41;goto B446f68;
case 0x446f6b:c.instructions+=40;goto B446f6b;
case 0x446f6e:c.instructions+=39;goto B446f6e;
case 0x446f71:c.instructions+=38;goto B446f71;
case 0x446f74:c.instructions+=37;goto B446f74;
case 0x446f78:c.instructions+=36;goto B446f78;
case 0x446f7b:c.instructions+=35;goto B446f7b;
case 0x446f7e:c.instructions+=34;goto B446f7e;
case 0x446f81:c.instructions+=33;goto B446f81;
case 0x446f83:c.instructions+=32;goto B446f83;
case 0x446f86:c.instructions+=31;goto B446f86;
case 0x446f88:c.instructions+=30;goto B446f88;
case 0x446f8a:c.instructions+=29;goto B446f8a;
case 0x446f8c:c.instructions+=28;goto B446f8c;
case 0x446f8f:c.instructions+=27;goto B446f8f;
case 0x446f92:c.instructions+=26;goto B446f92;
case 0x446f96:c.instructions+=25;goto B446f96;
case 0x446f9a:c.instructions+=24;goto B446f9a;
case 0x446f9e:c.instructions+=23;goto B446f9e;
case 0x446fa4:c.instructions+=22;goto B446fa4;
case 0x446fa6:c.instructions+=21;goto B446fa6;
case 0x446fa9:c.instructions+=20;goto B446fa9;
case 0x446fac:c.instructions+=19;goto B446fac;
case 0x446fae:c.instructions+=18;goto B446fae;
case 0x446fb1:c.instructions+=17;goto B446fb1;
case 0x446fb3:c.instructions+=16;goto B446fb3;
case 0x446fb7:c.instructions+=15;goto B446fb7;
case 0x446fb9:c.instructions+=14;goto B446fb9;
case 0x446fbd:c.instructions+=13;goto B446fbd;
case 0x446fc1:c.instructions+=12;goto B446fc1;
case 0x446fc4:c.instructions+=11;goto B446fc4;
case 0x446fc6:c.instructions+=10;goto B446fc6;
case 0x446fca:c.instructions+=9;goto B446fca;
case 0x446fcc:c.instructions+=8;goto B446fcc;
case 0x446fcf:c.instructions+=7;goto B446fcf;
case 0x446fd2:c.instructions+=6;goto B446fd2;
case 0x446fd5:c.instructions+=5;goto B446fd5;
case 0x446fd8:c.instructions+=4;goto B446fd8;
case 0x446fda:c.instructions+=3;goto B446fda;
case 0x446fdc:c.instructions+=2;goto B446fdc;
case 0x446fdf:c.instructions+=1;goto B446fdf;
case 0x446fe1:goto L446fe1;
case 0x446fe5:goto L446fe5;
case 0x446fe6:c.instructions+=3;goto B446fe6;
case 0x446fe8:c.instructions+=2;goto B446fe8;
case 0x446fe9:c.instructions+=1;goto B446fe9;
case 0x446ff0:goto L446ff0;
case 0x446ff1:c.instructions+=6;goto B446ff1;
case 0x446ff3:c.instructions+=5;goto B446ff3;
case 0x446ff6:c.instructions+=4;goto B446ff6;
case 0x446ff9:c.instructions+=3;goto B446ff9;
case 0x446ffc:c.instructions+=2;goto B446ffc;
case 0x446ffe:c.instructions+=1;goto B446ffe;
default:missing_instruction(c.pc);}
B446001:L446001:{c.instructions+=7;NFSU2_TR(0x446001);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B446005:{NFSU2_TR(0x446005);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B446006:{NFSU2_TR(0x446006);
u8 U[4];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B44600a:{NFSU2_TR(0x44600a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44600b:{NFSU2_TR(0x44600b);
u8 U[4];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B44600f:{NFSU2_TR(0x44600f);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B446010:{NFSU2_TR(0x446010);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x446015ull));
TAIL_STATIC(0x43c9c0u,43c);
}
B446015:L446015:{c.instructions+=4;NFSU2_TR(0x446015);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B446017:{NFSU2_TR(0x446017);
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
B44601a:{NFSU2_TR(0x44601a);
__builtin_memmove((R+4),(R+24),4);
}
B44601c:{NFSU2_TR(0x44601c);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x44601full));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B44601f:L44601f:{c.instructions+=7;NFSU2_TR(0x44601f);
__builtin_memmove((R+4),gp(0x787088),4);
}
B446025:{NFSU2_TR(0x446025);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B446026:{NFSU2_TR(0x446026);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B446027:{NFSU2_TR(0x446027);
__builtin_memmove((R+4),gp(0x890080),4);
}
B44602d:{NFSU2_TR(0x44602d);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B446031:{NFSU2_TR(0x446031);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B446032:{NFSU2_TR(0x446032);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x446037ull));
TAIL_STATIC(0x5f14f0u,5f1);
}
B446037:L446037:{c.instructions+=4;NFSU2_TR(0x446037);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B446038:{NFSU2_TR(0x446038);
__builtin_memmove((R+16),(R+20),4);
}
B44603a:{NFSU2_TR(0x44603a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B44603b:{NFSU2_TR(0x44603b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B446040:L446040:{c.instructions+=10;NFSU2_TR(0x446040);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B446041:{NFSU2_TR(0x446041);
__builtin_memmove((R+20),(R+16),4);
}
B446043:{NFSU2_TR(0x446043);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B446046:{NFSU2_TR(0x446046);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x18ull))));
}
B446049:{NFSU2_TR(0x446049);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44604a:{NFSU2_TR(0x44604a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44604b:{NFSU2_TR(0x44604b);
__builtin_memmove((R+28),(R+4),4);
}
B44604d:{NFSU2_TR(0x44604d);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B446050:{NFSU2_TR(0x446050);
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
B446052:{NFSU2_TR(0x446052);
if(r1(R+518)){{goto L4460ff;}}
}
B446058:L446058:{c.instructions+=7;NFSU2_TR(0x446058);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x60ull))));
}
B44605b:{NFSU2_TR(0x44605b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44605c:{NFSU2_TR(0x44605c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B44605f:{NFSU2_TR(0x44605f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B446060:{NFSU2_TR(0x446060);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B446064:{NFSU2_TR(0x446064);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B446065:{NFSU2_TR(0x446065);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x44606aull));
TAIL_STATIC(0x43c9c0u,43c);
}
B44606a:L44606a:{c.instructions+=11;NFSU2_TR(0x44606a);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44606e:{NFSU2_TR(0x44606e);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B446072:{NFSU2_TR(0x446072);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B446075:{NFSU2_TR(0x446075);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B446079:{NFSU2_TR(0x446079);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B44607d:{NFSU2_TR(0x44607d);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B44607f:{NFSU2_TR(0x44607f);
__asm__ volatile(".byte 0xd9,0xfa":::"memory");
}
B446081:{NFSU2_TR(0x446081);
{u32 ea_=u32(u32(7893524u));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B446087:{NFSU2_TR(0x446087);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B44608b:{NFSU2_TR(0x44608b);
{u32 ea_=u32(r4(R+8)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44608e:{NFSU2_TR(0x44608e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x446093ull));
TAIL_STATIC(0x75bed4u,75b);
}
B446093:L446093:{c.instructions+=5;NFSU2_TR(0x446093);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B446095:{NFSU2_TR(0x446095);
__builtin_memmove((R+24),(R+0),2);
}
B446098:{NFSU2_TR(0x446098);
w2(R+24,shr<u16>(r2(R+24),u64(u32(0x1ull))));
}
B44609b:{NFSU2_TR(0x44609b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44609c:{NFSU2_TR(0x44609c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4460a1ull));
TAIL_STATIC(0x43c2b0u,43c);
}
B4460a1:L4460a1:{c.instructions+=3;NFSU2_TR(0x4460a1);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4460a5:{NFSU2_TR(0x4460a5);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4460a6:{NFSU2_TR(0x4460a6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4460abull));
TAIL_STATIC(0x43c370u,43c);
}
B4460ab:L4460ab:{c.instructions+=11;NFSU2_TR(0x4460ab);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd8,0x38"::"a"(ea_):"memory");}
}
B4460af:{NFSU2_TR(0x4460af);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B4460b2:{NFSU2_TR(0x4460b2);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd8,0x38"::"a"(ea_):"memory");}
}
B4460b6:{NFSU2_TR(0x4460b6);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B4460ba:{NFSU2_TR(0x4460ba);
{u32 ea_=u32(u32(7893528u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4460c0:{NFSU2_TR(0x4460c0);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B4460c2:{NFSU2_TR(0x4460c2);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4460c6:{NFSU2_TR(0x4460c6);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B4460ca:{NFSU2_TR(0x4460ca);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4460cc:{NFSU2_TR(0x4460cc);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4460cf:{NFSU2_TR(0x4460cf);
if(r1(R+518)){{goto L4460d7;}}
}
B4460d1:L4460d1:{c.instructions+=2;NFSU2_TR(0x4460d1);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B4460d3:{NFSU2_TR(0x4460d3);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4460d7:L4460d7:{c.instructions+=5;NFSU2_TR(0x4460d7);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4460db:{NFSU2_TR(0x4460db);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B4460dd:{NFSU2_TR(0x4460dd);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4460df:{NFSU2_TR(0x4460df);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B4460e2:{NFSU2_TR(0x4460e2);
if(r1(R+514)){{goto L4460ea;}}
}
B4460e4:L4460e4:{c.instructions+=2;NFSU2_TR(0x4460e4);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B4460e6:{NFSU2_TR(0x4460e6);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4460ea:L4460ea:{c.instructions+=6;NFSU2_TR(0x4460ea);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4460ed:{NFSU2_TR(0x4460ed);
{u32 ea_=u32(r4(R+28)+u32(8u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B4460f0:{NFSU2_TR(0x4460f0);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B4460f2:{NFSU2_TR(0x4460f2);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4460f4:{NFSU2_TR(0x4460f4);
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
B4460f7:{NFSU2_TR(0x4460f7);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L4460ff;}}
}
B4460f9:L4460f9:{c.instructions+=1;NFSU2_TR(0x4460f9);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x2cull))));
w2(U+4,u16(0x2ull));
s2(u32(r4(U+0)),r2(U+4));
}
B4460ff:L4460ff:{c.instructions+=5;NFSU2_TR(0x4460ff);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B446100:{NFSU2_TR(0x446100);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B446101:{NFSU2_TR(0x446101);
__builtin_memmove((R+16),(R+20),4);
}
B446103:{NFSU2_TR(0x446103);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B446104:{NFSU2_TR(0x446104);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B446110:L446110:{c.instructions+=10;NFSU2_TR(0x446110);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B446111:{NFSU2_TR(0x446111);
__builtin_memmove((R+20),(R+16),4);
}
B446113:{NFSU2_TR(0x446113);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B446116:{NFSU2_TR(0x446116);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x9cull))));
}
B44611c:{NFSU2_TR(0x44611c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44611d:{NFSU2_TR(0x44611d);
__builtin_memmove((R+24),(R+4),4);
}
B44611f:{NFSU2_TR(0x44611f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B446122:{NFSU2_TR(0x446122);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B446126:{NFSU2_TR(0x446126);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B446127:{NFSU2_TR(0x446127);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x44612cull));
TAIL_STATIC(0x5ecc00u,5ec);
}
B44612c:L44612c:{c.instructions+=5;NFSU2_TR(0x44612c);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B446130:{NFSU2_TR(0x446130);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B446131:{NFSU2_TR(0x446131);
u8 U[4];
w4(U+0,u32(u32(u32(0x64ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B446135:{NFSU2_TR(0x446135);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B446136:{NFSU2_TR(0x446136);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x44613bull));
TAIL_STATIC(0x5baf90u,5ba);
}
B44613b:L44613b:{c.instructions+=8;NFSU2_TR(0x44613b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B44613e:{NFSU2_TR(0x44613e);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x60ull))));
}
B446141:{NFSU2_TR(0x446141);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B446142:{NFSU2_TR(0x446142);
u8 U[4];
w4(U+0,u32(u32(u32(0x6cull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B446146:{NFSU2_TR(0x446146);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B446147:{NFSU2_TR(0x446147);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B44614b:{NFSU2_TR(0x44614b);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44614c:{NFSU2_TR(0x44614c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x446151ull));
TAIL_STATIC(0x43c9c0u,43c);
}
B446151:L446151:{c.instructions+=9;NFSU2_TR(0x446151);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B446154:{NFSU2_TR(0x446154);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B446157:{NFSU2_TR(0x446157);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B44615a:{NFSU2_TR(0x44615a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44615b:{NFSU2_TR(0x44615b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44615c:{NFSU2_TR(0x44615c);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B446160:{NFSU2_TR(0x446160);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B446161:{NFSU2_TR(0x446161);
w4(R+4,u32(0x802108ull));
}
B446166:{NFSU2_TR(0x446166);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x44616bull));
TAIL_STATIC(0x5fa970u,5fa);
}
B44616b:L44616b:{c.instructions+=4;NFSU2_TR(0x44616b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B44616c:{NFSU2_TR(0x44616c);
__builtin_memmove((R+16),(R+20),4);
}
B44616e:{NFSU2_TR(0x44616e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B44616f:{NFSU2_TR(0x44616f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B446180:L446180:{c.instructions+=9;NFSU2_TR(0x446180);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B446181:{NFSU2_TR(0x446181);
__builtin_memmove((R+20),(R+16),4);
}
B446183:{NFSU2_TR(0x446183);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B446186:{NFSU2_TR(0x446186);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x2cull))));
}
B446189:{NFSU2_TR(0x446189);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44618a:{NFSU2_TR(0x44618a);
__builtin_memmove((R+24),(R+4),4);
}
B44618c:{NFSU2_TR(0x44618c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B44618f:{NFSU2_TR(0x44618f);
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
B446191:{NFSU2_TR(0x446191);
if(r1(R+518)){{goto L4461b1;}}
}
B446193:L446193:{c.instructions+=3;NFSU2_TR(0x446193);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B446196:{NFSU2_TR(0x446196);
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
B446198:{NFSU2_TR(0x446198);
if(r1(R+518)){{goto L4461b1;}}
}
B44619a:L44619a:{c.instructions+=6;NFSU2_TR(0x44619a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B44619d:{NFSU2_TR(0x44619d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4461a0:{NFSU2_TR(0x4461a0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4461a1:{NFSU2_TR(0x4461a1);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4461a2:{NFSU2_TR(0x4461a2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4461a5:{NFSU2_TR(0x4461a5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4461aaull));
TAIL_STATIC(0x574d70u,574);
}
B4461aa:L4461aa:{c.instructions+=4;NFSU2_TR(0x4461aa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4461ab:{NFSU2_TR(0x4461ab);
__builtin_memmove((R+16),(R+20),4);
}
B4461ad:{NFSU2_TR(0x4461ad);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4461ae:{NFSU2_TR(0x4461ae);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4461b1:L4461b1:{c.instructions+=4;NFSU2_TR(0x4461b1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4461b4:{NFSU2_TR(0x4461b4);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B4461b8:{NFSU2_TR(0x4461b8);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4461b9:{NFSU2_TR(0x4461b9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4461beull));
TAIL_STATIC(0x574d30u,574);
}
B4461be:L4461be:{c.instructions+=4;NFSU2_TR(0x4461be);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4461c1:{NFSU2_TR(0x4461c1);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B4461c5:{NFSU2_TR(0x4461c5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4461c6:{NFSU2_TR(0x4461c6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4461cbull));
TAIL_STATIC(0x574dd0u,574);
}
B4461cb:L4461cb:{c.instructions+=20;NFSU2_TR(0x4461cb);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4461d1:{NFSU2_TR(0x4461d1);
{u32 ea_=u32(r4(R+20)+u32(12u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B4461d4:{NFSU2_TR(0x4461d4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4461d7:{NFSU2_TR(0x4461d7);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4461db:{NFSU2_TR(0x4461db);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4461de:{NFSU2_TR(0x4461de);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4461df:{NFSU2_TR(0x4461df);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B4461e1:{NFSU2_TR(0x4461e1);
u8 U[4];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B4461e5:{NFSU2_TR(0x4461e5);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4461e6:{NFSU2_TR(0x4461e6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4461e7:{NFSU2_TR(0x4461e7);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4461e9:{NFSU2_TR(0x4461e9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4461ea:{NFSU2_TR(0x4461ea);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4461ee:{NFSU2_TR(0x4461ee);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B4461f0:{NFSU2_TR(0x4461f0);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4461f3:{NFSU2_TR(0x4461f3);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4461f7:{NFSU2_TR(0x4461f7);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B4461f9:{NFSU2_TR(0x4461f9);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4461fc:{NFSU2_TR(0x4461fc);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B4461fe:{NFSU2_TR(0x4461fe);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x446203ull));
TAIL_STATIC(0x43d0c0u,43d);
}
B446203:L446203:{c.instructions+=5;NFSU2_TR(0x446203);
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
B446206:{NFSU2_TR(0x446206);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B446207:{NFSU2_TR(0x446207);
__builtin_memmove((R+16),(R+20),4);
}
B446209:{NFSU2_TR(0x446209);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B44620a:{NFSU2_TR(0x44620a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B446210:L446210:{c.instructions+=9;NFSU2_TR(0x446210);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B446211:{NFSU2_TR(0x446211);
__builtin_memmove((R+20),(R+16),4);
}
B446213:{NFSU2_TR(0x446213);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B446216:{NFSU2_TR(0x446216);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x2cull))));
}
B446219:{NFSU2_TR(0x446219);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44621a:{NFSU2_TR(0x44621a);
__builtin_memmove((R+24),(R+4),4);
}
B44621c:{NFSU2_TR(0x44621c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B44621f:{NFSU2_TR(0x44621f);
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
B446221:{NFSU2_TR(0x446221);
if(r1(R+518)){{goto L446241;}}
}
B446223:L446223:{c.instructions+=3;NFSU2_TR(0x446223);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B446226:{NFSU2_TR(0x446226);
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
B446228:{NFSU2_TR(0x446228);
if(r1(R+518)){{goto L446241;}}
}
B44622a:L44622a:{c.instructions+=6;NFSU2_TR(0x44622a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B44622d:{NFSU2_TR(0x44622d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B446230:{NFSU2_TR(0x446230);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B446231:{NFSU2_TR(0x446231);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B446232:{NFSU2_TR(0x446232);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B446235:{NFSU2_TR(0x446235);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x44623aull));
TAIL_STATIC(0x574d70u,574);
}
B44623a:L44623a:{c.instructions+=4;NFSU2_TR(0x44623a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B44623b:{NFSU2_TR(0x44623b);
__builtin_memmove((R+16),(R+20),4);
}
B44623d:{NFSU2_TR(0x44623d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B44623e:{NFSU2_TR(0x44623e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B446241:L446241:{c.instructions+=4;NFSU2_TR(0x446241);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B446244:{NFSU2_TR(0x446244);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B446248:{NFSU2_TR(0x446248);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B446249:{NFSU2_TR(0x446249);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x44624eull));
TAIL_STATIC(0x574d30u,574);
}
B44624e:L44624e:{c.instructions+=4;NFSU2_TR(0x44624e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B446251:{NFSU2_TR(0x446251);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B446255:{NFSU2_TR(0x446255);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B446256:{NFSU2_TR(0x446256);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x44625bull));
TAIL_STATIC(0x574dd0u,574);
}
B44625b:L44625b:{c.instructions+=20;NFSU2_TR(0x44625b);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B446261:{NFSU2_TR(0x446261);
{u32 ea_=u32(r4(R+20)+u32(12u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B446264:{NFSU2_TR(0x446264);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B446267:{NFSU2_TR(0x446267);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44626b:{NFSU2_TR(0x44626b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B44626e:{NFSU2_TR(0x44626e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44626f:{NFSU2_TR(0x44626f);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B446271:{NFSU2_TR(0x446271);
u8 U[4];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B446275:{NFSU2_TR(0x446275);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B446276:{NFSU2_TR(0x446276);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B446277:{NFSU2_TR(0x446277);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B446279:{NFSU2_TR(0x446279);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44627a:{NFSU2_TR(0x44627a);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44627e:{NFSU2_TR(0x44627e);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B446280:{NFSU2_TR(0x446280);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B446283:{NFSU2_TR(0x446283);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B446287:{NFSU2_TR(0x446287);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B446289:{NFSU2_TR(0x446289);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B44628c:{NFSU2_TR(0x44628c);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B44628e:{NFSU2_TR(0x44628e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x446293ull));
TAIL_STATIC(0x43d0c0u,43d);
}
B446293:L446293:{c.instructions+=5;NFSU2_TR(0x446293);
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
B446296:{NFSU2_TR(0x446296);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B446297:{NFSU2_TR(0x446297);
__builtin_memmove((R+16),(R+20),4);
}
B446299:{NFSU2_TR(0x446299);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B44629a:{NFSU2_TR(0x44629a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4462a0:L4462a0:{c.instructions+=4;NFSU2_TR(0x4462a0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4462a1:{NFSU2_TR(0x4462a1);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x7cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4462a4:{NFSU2_TR(0x4462a4);
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
B4462a6:{NFSU2_TR(0x4462a6);
if(r1(R+518)){{goto L4462c5;}}
}
B4462a8:L4462a8:{c.instructions+=3;NFSU2_TR(0x4462a8);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B4462ab:{NFSU2_TR(0x4462ab);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+8))&u32(r1(R+8))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B4462ad:{NFSU2_TR(0x4462ad);
if(r1(R+518)){{goto L4462c5;}}
}
B4462af:L4462af:{c.instructions+=4;NFSU2_TR(0x4462af);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4462b3:{NFSU2_TR(0x4462b3);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4462b6:{NFSU2_TR(0x4462b6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4462b7:{NFSU2_TR(0x4462b7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4462bcull));
TAIL_STATIC(0x574870u,574);
}
B4462bc:L4462bc:{c.instructions+=1;NFSU2_TR(0x4462bc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4462c1ull));
TAIL_STATIC(0x75bed4u,75b);
}
B4462c1:L4462c1:{c.instructions+=2;NFSU2_TR(0x4462c1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4462c2:{NFSU2_TR(0x4462c2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4462c5:L4462c5:{c.instructions+=4;NFSU2_TR(0x4462c5);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4462c8:{NFSU2_TR(0x4462c8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B4462ca:{NFSU2_TR(0x4462ca);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+16)),r4(U+0));
}
B4462ce:{NFSU2_TR(0x4462ce);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4462d3ull));
TAIL_STATIC(0x5748b0u,574);
}
B4462d3:L4462d3:{c.instructions+=6;NFSU2_TR(0x4462d3);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4462d7:{NFSU2_TR(0x4462d7);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4462dd:{NFSU2_TR(0x4462dd);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B4462e1:{NFSU2_TR(0x4462e1);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4462e5:{NFSU2_TR(0x4462e5);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B4462e7:{NFSU2_TR(0x4462e7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4462ecull));
TAIL_STATIC(0x75bed4u,75b);
}
B4462ec:L4462ec:{c.instructions+=2;NFSU2_TR(0x4462ec);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4462ed:{NFSU2_TR(0x4462ed);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4462f0:L4462f0:{c.instructions+=10;NFSU2_TR(0x4462f0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4462f1:{NFSU2_TR(0x4462f1);
__builtin_memmove((R+20),(R+16),4);
}
B4462f3:{NFSU2_TR(0x4462f3);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B4462f6:{NFSU2_TR(0x4462f6);
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
B4462f9:{NFSU2_TR(0x4462f9);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4462fa:{NFSU2_TR(0x4462fa);
__builtin_memmove((R+24),(R+4),4);
}
B4462fc:{NFSU2_TR(0x4462fc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4462ff:{NFSU2_TR(0x4462ff);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B446303:{NFSU2_TR(0x446303);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B446304:{NFSU2_TR(0x446304);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x446309ull));
TAIL_STATIC(0x574d30u,574);
}
B446309:L446309:{c.instructions+=4;NFSU2_TR(0x446309);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B44630d:{NFSU2_TR(0x44630d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44630e:{NFSU2_TR(0x44630e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B446311:{NFSU2_TR(0x446311);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x446316ull));
TAIL_STATIC(0x574dd0u,574);
}
B446316:L446316:{c.instructions+=20;NFSU2_TR(0x446316);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44631c:{NFSU2_TR(0x44631c);
{u32 ea_=u32(r4(R+20)+u32(12u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B44631f:{NFSU2_TR(0x44631f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B446322:{NFSU2_TR(0x446322);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B446326:{NFSU2_TR(0x446326);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B446329:{NFSU2_TR(0x446329);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44632a:{NFSU2_TR(0x44632a);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B44632c:{NFSU2_TR(0x44632c);
u8 U[4];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B446330:{NFSU2_TR(0x446330);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B446331:{NFSU2_TR(0x446331);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B446332:{NFSU2_TR(0x446332);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B446334:{NFSU2_TR(0x446334);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B446335:{NFSU2_TR(0x446335);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B446339:{NFSU2_TR(0x446339);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B44633b:{NFSU2_TR(0x44633b);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B44633e:{NFSU2_TR(0x44633e);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B446342:{NFSU2_TR(0x446342);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B446344:{NFSU2_TR(0x446344);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B446347:{NFSU2_TR(0x446347);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B446349:{NFSU2_TR(0x446349);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x44634eull));
TAIL_STATIC(0x43d0c0u,43d);
}
B44634e:L44634e:{c.instructions+=5;NFSU2_TR(0x44634e);
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
B446351:{NFSU2_TR(0x446351);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B446352:{NFSU2_TR(0x446352);
__builtin_memmove((R+16),(R+20),4);
}
B446354:{NFSU2_TR(0x446354);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B446355:{NFSU2_TR(0x446355);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B446360:L446360:{c.instructions+=7;NFSU2_TR(0x446360);
u8 U[6];
w1(R+512,u8((r4(R+16))<(u32(0x10ull))));
w1(R+523,sborrow<u32>(r4(R+16),u32(0x10ull)));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x10ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B446363:{NFSU2_TR(0x446363);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B446364:{NFSU2_TR(0x446364);
__builtin_memmove((R+24),(R+4),4);
}
B446366:{NFSU2_TR(0x446366);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B446369:{NFSU2_TR(0x446369);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B44636d:{NFSU2_TR(0x44636d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44636e:{NFSU2_TR(0x44636e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x446373ull));
TAIL_STATIC(0x574bf0u,574);
}
B446373:L446373:{c.instructions+=4;NFSU2_TR(0x446373);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B446377:{NFSU2_TR(0x446377);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B446378:{NFSU2_TR(0x446378);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B44637b:{NFSU2_TR(0x44637b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x446380ull));
TAIL_STATIC(0x574c70u,574);
}
B446380:L446380:{c.instructions+=17;NFSU2_TR(0x446380);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B446386:{NFSU2_TR(0x446386);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B44638a:{NFSU2_TR(0x44638a);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B44638e:{NFSU2_TR(0x44638e);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B446392:{NFSU2_TR(0x446392);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B446396:{NFSU2_TR(0x446396);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B446397:{NFSU2_TR(0x446397);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B446399:{NFSU2_TR(0x446399);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B44639d:{NFSU2_TR(0x44639d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44639e:{NFSU2_TR(0x44639e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44639f:{NFSU2_TR(0x44639f);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4463a1:{NFSU2_TR(0x4463a1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4463a2:{NFSU2_TR(0x4463a2);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4463a6:{NFSU2_TR(0x4463a6);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B4463a8:{NFSU2_TR(0x4463a8);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4463ab:{NFSU2_TR(0x4463ab);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B4463ad:{NFSU2_TR(0x4463ad);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4463b2ull));
TAIL_STATIC(0x43d090u,43d);
}
B4463b2:L4463b2:{c.instructions+=4;NFSU2_TR(0x4463b2);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B4463b5:{NFSU2_TR(0x4463b5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4463b6:{NFSU2_TR(0x4463b6);
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
B4463b9:{NFSU2_TR(0x4463b9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4463c0:L4463c0:{c.instructions+=22;NFSU2_TR(0x4463c0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4463c1:{NFSU2_TR(0x4463c1);
__builtin_memmove((R+20),(R+16),4);
}
B4463c3:{NFSU2_TR(0x4463c3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4463c6:{NFSU2_TR(0x4463c6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4463c9:{NFSU2_TR(0x4463c9);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4463cc:{NFSU2_TR(0x4463cc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4463cf:{NFSU2_TR(0x4463cf);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4463d2:{NFSU2_TR(0x4463d2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4463d5:{NFSU2_TR(0x4463d5);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x34ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4463d8:{NFSU2_TR(0x4463d8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4463db:{NFSU2_TR(0x4463db);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x40ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4463de:{NFSU2_TR(0x4463de);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4463e1:{NFSU2_TR(0x4463e1);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x44ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4463e4:{NFSU2_TR(0x4463e4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4463e7:{NFSU2_TR(0x4463e7);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x48ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4463ea:{NFSU2_TR(0x4463ea);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4463ed:{NFSU2_TR(0x4463ed);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x50ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4463f0:{NFSU2_TR(0x4463f0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4463f3:{NFSU2_TR(0x4463f3);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4463f6:{NFSU2_TR(0x4463f6);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x58ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4463f9:{NFSU2_TR(0x4463f9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4463fa:{NFSU2_TR(0x4463fa);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x24ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B446400:L446400:{c.instructions+=18;NFSU2_TR(0x446400);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B446401:{NFSU2_TR(0x446401);
__builtin_memmove((R+20),(R+16),4);
}
B446403:{NFSU2_TR(0x446403);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B446406:{NFSU2_TR(0x446406);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x104ull))));
}
B44640c:{NFSU2_TR(0x44640c);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44640d:{NFSU2_TR(0x44640d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44640e:{NFSU2_TR(0x44640e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44640f:{NFSU2_TR(0x44640f);
__builtin_memmove((R+24),(R+4),4);
}
B446411:{NFSU2_TR(0x446411);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B446414:{NFSU2_TR(0x446414);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B446417:{NFSU2_TR(0x446417);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B446419:{NFSU2_TR(0x446419);
u8 U[4];
w4(U+0,u32(u32(u32(0xb4ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B446420:{NFSU2_TR(0x446420);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B446421:{NFSU2_TR(0x446421);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B446423:{NFSU2_TR(0x446423);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x50ull))));
__builtin_memmove((R+28),(U+0),4);
}
B446426:{NFSU2_TR(0x446426);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B446427:{NFSU2_TR(0x446427);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x5c4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B44642d:{NFSU2_TR(0x44642d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x446432ull));
TAIL_STATIC(0x5e7e70u,5e7);
}
B446432:L446432:{c.instructions+=6;NFSU2_TR(0x446432);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B446434:{NFSU2_TR(0x446434);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x90ull))));
__builtin_memmove((R+8),(U+0),4);
}
B44643a:{NFSU2_TR(0x44643a);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44643b:{NFSU2_TR(0x44643b);
u8 U[4];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B44643f:{NFSU2_TR(0x44643f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B446440:{NFSU2_TR(0x446440);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x446445ull));
TAIL_STATIC(0x4012b0u,401);
}
B446445:L446445:{c.instructions+=16;NFSU2_TR(0x446445);
u8 U[8];
w4(U+0,u32(u32(u32(0xb8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B44644c:{NFSU2_TR(0x44644c);
u8 U[8];
w4(U+0,u32(u32(u32(0xbcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B446453:{NFSU2_TR(0x446453);
u8 U[8];
w4(U+0,u32(u32(u32(0xc0ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B44645a:{NFSU2_TR(0x44645a);
u8 U[8];
w4(U+0,u32(u32(u32(0x68ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B44645e:{NFSU2_TR(0x44645e);
u8 U[4];
w4(U+0,u32(u32(u32(0x68ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B446462:{NFSU2_TR(0x446462);
u8 U[8];
w4(U+0,u32(u32(u32(0x6cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B446466:{NFSU2_TR(0x446466);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B446467:{NFSU2_TR(0x446467);
u8 U[4];
w4(U+0,u32(u32(u32(0x5cull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B44646b:{NFSU2_TR(0x44646b);
u8 U[8];
w4(U+0,u32(u32(u32(0x74ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B44646f:{NFSU2_TR(0x44646f);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B446470:{NFSU2_TR(0x446470);
u8 U[4];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B446474:{NFSU2_TR(0x446474);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B446475:{NFSU2_TR(0x446475);
u8 U[8];
w4(U+0,u32(u32(u32(0x80ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B446480:{NFSU2_TR(0x446480);
u8 U[8];
w4(U+0,u32(u32(u32(0x5cull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B446488:{NFSU2_TR(0x446488);
u8 U[8];
w4(U+0,u32(u32(u32(0x6cull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B446490:{NFSU2_TR(0x446490);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x446495ull));
TAIL_STATIC(0x43d1e0u,43d);
}
B446495:L446495:{c.instructions+=7;NFSU2_TR(0x446495);
u8 U[4];
w4(U+0,u32(u32(u32(0x54ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B446499:{NFSU2_TR(0x446499);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44649a:{NFSU2_TR(0x44649a);
u8 U[4];
w4(U+0,u32(u32(u32(0x78ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B44649e:{NFSU2_TR(0x44649e);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44649f:{NFSU2_TR(0x44649f);
u8 U[4];
w4(U+0,u32(u32(u32(0x6cull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B4464a3:{NFSU2_TR(0x4464a3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4464a4:{NFSU2_TR(0x4464a4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4464a9ull));
TAIL_STATIC(0x43d1e0u,43d);
}
B4464a9:L4464a9:{c.instructions+=5;NFSU2_TR(0x4464a9);
u8 U[4];
w4(U+0,u32(u32(u32(0x60ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B4464ad:{NFSU2_TR(0x4464ad);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4464ae:{NFSU2_TR(0x4464ae);
u8 U[4];
w4(U+0,u32(u32(u32(0x64ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B4464b2:{NFSU2_TR(0x4464b2);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4464b3:{NFSU2_TR(0x4464b3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4464b8ull));
TAIL_STATIC(0x43d010u,43d);
}
B4464b8:L4464b8:{c.instructions+=5;NFSU2_TR(0x4464b8);
u8 U[4];
w4(U+0,u32(u32(u32(0x78ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B4464bc:{NFSU2_TR(0x4464bc);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4464bd:{NFSU2_TR(0x4464bd);
u8 U[4];
w4(U+0,u32(u32(u32(0x7cull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B4464c1:{NFSU2_TR(0x4464c1);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4464c2:{NFSU2_TR(0x4464c2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4464c7ull));
TAIL_STATIC(0x43d010u,43d);
}
B4464c7:L4464c7:{c.instructions+=7;NFSU2_TR(0x4464c7);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((R+8),(U+0),4);
}
B4464ca:{NFSU2_TR(0x4464ca);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4464cb:{NFSU2_TR(0x4464cb);
u8 U[4];
w4(U+0,u32(u32(u32(0x74ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B4464cf:{NFSU2_TR(0x4464cf);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4464d0:{NFSU2_TR(0x4464d0);
u8 U[4];
w4(U+0,u32(u32(u32(0xd8ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B4464d7:{NFSU2_TR(0x4464d7);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4464d8:{NFSU2_TR(0x4464d8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4464ddull));
TAIL_STATIC(0x43c9c0u,43c);
}
B4464dd:L4464dd:{c.instructions+=16;NFSU2_TR(0x4464dd);
{u32 ea_=u32(r4(R+28)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4464e0:{NFSU2_TR(0x4464e0);
{u32 ea_=u32(r4(R+28)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4464e3:{NFSU2_TR(0x4464e3);
{u32 ea_=u32(r4(R+16)+u32(220u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4464ea:{NFSU2_TR(0x4464ea);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B4464ec:{NFSU2_TR(0x4464ec);
{u32 ea_=u32(r4(R+16)+u32(108u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4464f0:{NFSU2_TR(0x4464f0);
{u32 ea_=u32(r4(R+16)+u32(224u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4464f7:{NFSU2_TR(0x4464f7);
__asm__ volatile(".byte 0xd8,0xc2":::"memory");
}
B4464f9:{NFSU2_TR(0x4464f9);
{u32 ea_=u32(r4(R+16)+u32(112u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4464fd:{NFSU2_TR(0x4464fd);
{u32 ea_=u32(r4(R+16)+u32(228u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B446504:{NFSU2_TR(0x446504);
__asm__ volatile(".byte 0xd8,0xc1":::"memory");
}
B446506:{NFSU2_TR(0x446506);
{u32 ea_=u32(r4(R+16)+u32(116u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B44650a:{NFSU2_TR(0x44650a);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B44650c:{NFSU2_TR(0x44650c);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B44650e:{NFSU2_TR(0x44650e);
{u32 ea_=u32(r4(R+24)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B446511:{NFSU2_TR(0x446511);
{u32 ea_=u32(u32(7881272u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B446517:{NFSU2_TR(0x446517);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x44651cull));
TAIL_STATIC(0x75bed4u,75b);
}
B44651c:L44651c:{c.instructions+=14;NFSU2_TR(0x44651c);
__builtin_memmove((R+4),(R+0),4);
}
B44651e:{NFSU2_TR(0x44651e);
w4(R+0,u32(0xb60b60b7ull));
}
B446523:{NFSU2_TR(0x446523);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(r4(R+4)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(u64(r8(U+16))>>32));
w4(R+0,u32(r8(U+16)));
}
B446525:{NFSU2_TR(0x446525);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+4))));
}
B446527:{NFSU2_TR(0x446527);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+8,sar<u32>(r4(R+8),u64(r4(U+0))));
}
B44652a:{NFSU2_TR(0x44652a);
__builtin_memmove((R+0),(R+8),4);
}
B44652c:{NFSU2_TR(0x44652c);
u8 U[4];
w4(U+0,u32(u32(u32(0x1full))&u32(u32(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+0))));
}
B44652f:{NFSU2_TR(0x44652f);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+0))));
}
B446531:{NFSU2_TR(0x446531);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B446532:{NFSU2_TR(0x446532);
u8 U[4];
w4(U+0,u32(u32(u32(0x5cull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B446536:{NFSU2_TR(0x446536);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B446537:{NFSU2_TR(0x446537);
u8 U[4];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B44653b:{NFSU2_TR(0x44653b);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44653c:{NFSU2_TR(0x44653c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x446541ull));
TAIL_STATIC(0x43c390u,43c);
}
B446541:L446541:{c.instructions+=6;NFSU2_TR(0x446541);
{u32 ea_=u32(r4(R+24)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B446544:{NFSU2_TR(0x446544);
{u32 ea_=u32(u32(7895772u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B44654a:{NFSU2_TR(0x44654a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x48ull))));
}
B44654d:{NFSU2_TR(0x44654d);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B44654f:{NFSU2_TR(0x44654f);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B446552:{NFSU2_TR(0x446552);
if(r1(R+514)){{goto L44655b;}}
}
B446554:L446554:{c.instructions+=1;NFSU2_TR(0x446554);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
w4(U+4,u32(0x40400000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B44655b:L44655b:{c.instructions+=3;NFSU2_TR(0x44655b);
{u32 ea_=u32(r4(R+24)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44655e:{NFSU2_TR(0x44655e);
{u32 ea_=u32(u32(7881272u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B446564:{NFSU2_TR(0x446564);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x446569ull));
TAIL_STATIC(0x75bed4u,75b);
}
B446569:L446569:{c.instructions+=14;NFSU2_TR(0x446569);
__builtin_memmove((R+4),(R+0),4);
}
B44656b:{NFSU2_TR(0x44656b);
w4(R+0,u32(0xb60b60b7ull));
}
B446570:{NFSU2_TR(0x446570);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(r4(R+4)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(u64(r8(U+16))>>32));
w4(R+0,u32(r8(U+16)));
}
B446572:{NFSU2_TR(0x446572);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+4))));
}
B446574:{NFSU2_TR(0x446574);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+8,sar<u32>(r4(R+8),u64(r4(U+0))));
}
B446577:{NFSU2_TR(0x446577);
__builtin_memmove((R+0),(R+8),4);
}
B446579:{NFSU2_TR(0x446579);
u8 U[4];
w4(U+0,u32(u32(u32(0x1full))&u32(u32(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+0))));
}
B44657c:{NFSU2_TR(0x44657c);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+0))));
}
B44657e:{NFSU2_TR(0x44657e);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44657f:{NFSU2_TR(0x44657f);
u8 U[4];
w4(U+0,u32(u32(u32(0xd0ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B446586:{NFSU2_TR(0x446586);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B446587:{NFSU2_TR(0x446587);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B44658b:{NFSU2_TR(0x44658b);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44658c:{NFSU2_TR(0x44658c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x446591ull));
TAIL_STATIC(0x43c390u,43c);
}
B446591:L446591:{c.instructions+=16;NFSU2_TR(0x446591);
u8 U[4];
w4(U+0,u32(u32(u32(0x8cull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B446598:{NFSU2_TR(0x446598);
{u32 ea_=u32(r4(R+24)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44659b:{NFSU2_TR(0x44659b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44659c:{NFSU2_TR(0x44659c);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4465a0:{NFSU2_TR(0x4465a0);
u8 U[4];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B4465a4:{NFSU2_TR(0x4465a4);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B4465a6:{NFSU2_TR(0x4465a6);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4465a7:{NFSU2_TR(0x4465a7);
u8 U[4];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B4465ab:{NFSU2_TR(0x4465ab);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4465ac:{NFSU2_TR(0x4465ac);
{u32 ea_=u32(r4(R+16)+u32(152u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4465b3:{NFSU2_TR(0x4465b3);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4465b7:{NFSU2_TR(0x4465b7);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B4465b9:{NFSU2_TR(0x4465b9);
{u32 ea_=u32(r4(R+16)+u32(156u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4465c0:{NFSU2_TR(0x4465c0);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4465c4:{NFSU2_TR(0x4465c4);
{u32 ea_=u32(r4(R+16)+u32(160u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4465cb:{NFSU2_TR(0x4465cb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4465d0ull));
TAIL_STATIC(0x43c9c0u,43c);
}
B4465d0:L4465d0:{c.instructions+=21;NFSU2_TR(0x4465d0);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4465d4:{NFSU2_TR(0x4465d4);
{u32 ea_=u32(r4(R+16)+u32(72u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B4465d8:{NFSU2_TR(0x4465d8);
u8 U[4];
w4(U+0,u32(u32(u32(0xa8ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B4465df:{NFSU2_TR(0x4465df);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4465e0:{NFSU2_TR(0x4465e0);
u8 U[4];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B4465e4:{NFSU2_TR(0x4465e4);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4465e8:{NFSU2_TR(0x4465e8);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4465e9:{NFSU2_TR(0x4465e9);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4465ed:{NFSU2_TR(0x4465ed);
u8 U[4];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B4465f1:{NFSU2_TR(0x4465f1);
{u32 ea_=u32(r4(R+16)+u32(84u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B4465f5:{NFSU2_TR(0x4465f5);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4465f6:{NFSU2_TR(0x4465f6);
u8 U[4];
w4(U+0,u32(u32(u32(0xf4ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B4465fd:{NFSU2_TR(0x4465fd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4465fe:{NFSU2_TR(0x4465fe);
{u32 ea_=u32(r4(R+16)+u32(76u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B446602:{NFSU2_TR(0x446602);
u8 U[8];
w4(U+0,u32(u32(u32(0xb8ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B44660d:{NFSU2_TR(0x44660d);
{u32 ea_=u32(r4(R+16)+u32(80u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B446611:{NFSU2_TR(0x446611);
u8 U[8];
w4(U+0,u32(u32(u32(0xbcull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B44661c:{NFSU2_TR(0x44661c);
{u32 ea_=u32(r4(R+16)+u32(96u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B446620:{NFSU2_TR(0x446620);
u8 U[8];
w4(U+0,u32(u32(u32(0xc0ull))+u32(r4(R+16))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B44662b:{NFSU2_TR(0x44662b);
{u32 ea_=u32(r4(R+16)+u32(80u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B44662f:{NFSU2_TR(0x44662f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x446634ull));
TAIL_STATIC(0x5ba9a0u,5ba);
}
B446634:L446634:{c.instructions+=7;NFSU2_TR(0x446634);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x28ull))));
}
B446637:{NFSU2_TR(0x446637);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B446639:{NFSU2_TR(0x446639);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44663a:{NFSU2_TR(0x44663a);
u8 U[4];
w4(U+0,u32(u32(u32(0xd8ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B446641:{NFSU2_TR(0x446641);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B446642:{NFSU2_TR(0x446642);
__builtin_memmove((R+4),(R+24),4);
}
B446644:{NFSU2_TR(0x446644);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x446649ull));
TAIL_STATIC(0x444530u,444);
}
B446649:L446649:{c.instructions+=5;NFSU2_TR(0x446649);
u8 U[4];
w4(U+0,u32(u32(u32(0xd0ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B446650:{NFSU2_TR(0x446650);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B446651:{NFSU2_TR(0x446651);
u8 U[6];
w1(R+512,carry<u32>(r4(R+24),u32(0x60ull)));
w1(R+523,scarry<u32>(r4(R+24),u32(0x60ull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x60ull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B446654:{NFSU2_TR(0x446654);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B446655:{NFSU2_TR(0x446655);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x44665aull));
TAIL_STATIC(0x4012b0u,401);
}
B44665a:L44665a:{c.instructions+=7;NFSU2_TR(0x44665a);
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
B44665d:{NFSU2_TR(0x44665d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B44665e:{NFSU2_TR(0x44665e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B44665f:{NFSU2_TR(0x44665f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B446660:{NFSU2_TR(0x446660);
__builtin_memmove((R+16),(R+20),4);
}
B446662:{NFSU2_TR(0x446662);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B446663:{NFSU2_TR(0x446663);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B446670:L446670:{c.instructions+=5;NFSU2_TR(0x446670);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B446673:{NFSU2_TR(0x446673);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x270ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B44667a:{NFSU2_TR(0x44667a);
__builtin_memmove((R+4),gp(0x7fb708),4);
}
B446680:{NFSU2_TR(0x446680);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x27cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B446686:{NFSU2_TR(0x446686);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B446690:L446690:{c.instructions+=11;NFSU2_TR(0x446690);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B446694:{NFSU2_TR(0x446694);
__builtin_memmove((R+0),(R+4),4);
}
B446696:{NFSU2_TR(0x446696);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B44669a:{NFSU2_TR(0x44669a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B44669d:{NFSU2_TR(0x44669d);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4466a1:{NFSU2_TR(0x4466a1);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4466a4:{NFSU2_TR(0x4466a4);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4466a8:{NFSU2_TR(0x4466a8);
u8 U[4];
w4(U+0,u32(0x787ae8ull));
s4(u32(r4(R+0)),r4(U+0));
}
B4466ae:{NFSU2_TR(0x4466ae);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4466b1:{NFSU2_TR(0x4466b1);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4466b4:{NFSU2_TR(0x4466b4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4466c0:L4466c0:{c.instructions+=2;NFSU2_TR(0x4466c0);
u8 U[4];
w4(U+0,u32(0x787ae0ull));
s4(u32(r4(R+4)),r4(U+0));
}
B4466c6:{NFSU2_TR(0x4466c6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4466d0:L4466d0:{c.instructions+=5;NFSU2_TR(0x4466d0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4466d4:{NFSU2_TR(0x4466d4);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4466d5:{NFSU2_TR(0x4466d5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4466d6:{NFSU2_TR(0x4466d6);
__builtin_memmove((R+24),(R+4),4);
}
B4466d8:{NFSU2_TR(0x4466d8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4466ddull));
TAIL_STATIC(0x43c350u,43c);
}
B4466dd:L4466dd:{c.instructions+=9;NFSU2_TR(0x4466dd);
{u32 ea_=u32(u32(7881376u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B4466e3:{NFSU2_TR(0x4466e3);
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
B4466e6:{NFSU2_TR(0x4466e6);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4466ec:{NFSU2_TR(0x4466ec);
{u32 ea_=u32(r4(R+24)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4466ef:{NFSU2_TR(0x4466ef);
{u32 ea_=u32(r4(R+24)+u32(12u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B4466f2:{NFSU2_TR(0x4466f2);
__asm__ volatile(".byte 0xde,0xc9":::"memory");
}
B4466f4:{NFSU2_TR(0x4466f4);
{u32 ea_=u32(r4(R+24)+u32(12u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B4466f7:{NFSU2_TR(0x4466f7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4466f8:{NFSU2_TR(0x4466f8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B446700:L446700:{c.instructions+=5;NFSU2_TR(0x446700);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B446701:{NFSU2_TR(0x446701);
__builtin_memmove((R+24),(R+4),4);
}
B446703:{NFSU2_TR(0x446703);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B446709:{NFSU2_TR(0x446709);
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
B44670b:{NFSU2_TR(0x44670b);
if(r1(R+518)){{goto L446736;}}
}
B44670d:L44670d:{c.instructions+=2;NFSU2_TR(0x44670d);
u8 U[4];
w4(U+0,u32(0x48ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44670f:{NFSU2_TR(0x44670f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x446714ull));
TAIL_STATIC(0x57d590u,57d);
}
B446714:L446714:{c.instructions+=2;NFSU2_TR(0x446714);
u8 U[4];
w4(U+0,u32(0x49ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B446716:{NFSU2_TR(0x446716);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x44671bull));
TAIL_STATIC(0x57d590u,57d);
}
B44671b:L44671b:{c.instructions+=2;NFSU2_TR(0x44671b);
u8 U[4];
w4(U+0,u32(0x51ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44671d:{NFSU2_TR(0x44671d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x446722ull));
TAIL_STATIC(0x57d590u,57d);
}
B446722:L446722:{c.instructions+=2;NFSU2_TR(0x446722);
u8 U[4];
w4(U+0,u32(0x52ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B446724:{NFSU2_TR(0x446724);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x446729ull));
TAIL_STATIC(0x57d590u,57d);
}
B446729:L446729:{c.instructions+=2;NFSU2_TR(0x446729);
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
B44672c:{NFSU2_TR(0x44672c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb4ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B446736:L446736:{c.instructions+=2;NFSU2_TR(0x446736);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B446737:{NFSU2_TR(0x446737);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B446740:L446740:{c.instructions+=10;NFSU2_TR(0x446740);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B446744:{NFSU2_TR(0x446744);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B446747:{NFSU2_TR(0x446747);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B44674a:{NFSU2_TR(0x44674a);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x1e0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B446750:{NFSU2_TR(0x446750);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B446751:{NFSU2_TR(0x446751);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B446754:{NFSU2_TR(0x446754);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B446756:{NFSU2_TR(0x446756);
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
B446758:{NFSU2_TR(0x446758);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B446759:{NFSU2_TR(0x446759);
if(r1(R+518)){{goto L4467cd;}}
}
B44675b:L44675b:{c.instructions+=4;NFSU2_TR(0x44675b);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B44675f:{NFSU2_TR(0x44675f);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0xffffffb8ull))));
}
B446762:{NFSU2_TR(0x446762);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
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
B446765:{NFSU2_TR(0x446765);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L4467da;}}
}
B446767:L446767:{c.instructions+=2;NFSU2_TR(0x446767);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4467f0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(r1(U+4)));
}
B44676e:{NFSU2_TR(0x44676e);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x4467dcull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B446775:L446775:{c.instructions+=8;NFSU2_TR(0x446775);
u8 U[5];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+8,u32(r1(U+4)));
}
B44677a:{NFSU2_TR(0x44677a);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B44677e:{NFSU2_TR(0x44677e);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B446782:{NFSU2_TR(0x446782);
{u32 ea_=u32(u32(7882048u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B446788:{NFSU2_TR(0x446788);
{u32 ea_=u32(u32(7895792u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B44678e:{NFSU2_TR(0x44678e);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B446790:{NFSU2_TR(0x446790);
{u32 ea_=u32(r4(R+0)+u32(88u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B446793:{NFSU2_TR(0x446793);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B446794:L446794:{c.instructions+=7;NFSU2_TR(0x446794);
u8 U[5];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(r1(U+4)));
}
B446799:{NFSU2_TR(0x446799);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B44679d:{NFSU2_TR(0x44679d);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B4467a1:{NFSU2_TR(0x4467a1);
{u32 ea_=u32(u32(7882048u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B4467a7:{NFSU2_TR(0x4467a7);
{u32 ea_=u32(u32(7895792u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4467ad:{NFSU2_TR(0x4467ad);
{u32 ea_=u32(r4(R+0)+u32(72u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4467b0:{NFSU2_TR(0x4467b0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4467b1:L4467b1:{c.instructions+=2;NFSU2_TR(0x4467b1);
u8 U[10];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+8),(U+4),1);
w1(R+512,u8((r1(U+8))<(r1(R+8))));
w1(R+523,sborrow<u8>(r1(U+8),r1(R+8)));
w1(U+9,u8(u32(r1(U+8))-u32(r1(R+8))));
w1(R+519,u8(s8(r1(U+9))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+9))==(u8(0x0ull))));
w1(U+5,u8(u32(r1(U+9))&u32(u8(0xffull))));
w1(U+6,u8(__builtin_popcountll(u64(r1(U+5)))));
w1(U+7,u8(u32(r1(U+6))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+7))==(u8(0x0ull))));
}
B4467b5:{NFSU2_TR(0x4467b5);
if(r1(R+518)){{goto L4467d3;}}
}
B4467b7:L4467b7:{c.instructions+=2;NFSU2_TR(0x4467b7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3cull))));
w4(U+4,u32(0x3f7ae148ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4467be:{NFSU2_TR(0x4467be);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4467bf:L4467bf:{c.instructions+=2;NFSU2_TR(0x4467bf);
u8 U[10];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+8),(U+4),1);
w1(R+512,u8((r1(U+8))<(r1(R+8))));
w1(R+523,sborrow<u8>(r1(U+8),r1(R+8)));
w1(U+9,u8(u32(r1(U+8))-u32(r1(R+8))));
w1(R+519,u8(s8(r1(U+9))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+9))==(u8(0x0ull))));
w1(U+5,u8(u32(r1(U+9))&u32(u8(0xffull))));
w1(U+6,u8(__builtin_popcountll(u64(r1(U+5)))));
w1(U+7,u8(u32(r1(U+6))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+7))==(u8(0x0ull))));
}
B4467c3:{NFSU2_TR(0x4467c3);
if(r1(R+518)){{goto L4467d3;}}
}
B4467c5:L4467c5:{c.instructions+=2;NFSU2_TR(0x4467c5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3cull))));
w4(U+4,u32(0x3f828f5cull));
s4(u32(r4(U+0)),r4(U+4));
}
B4467cc:{NFSU2_TR(0x4467cc);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4467cd:L4467cd:{c.instructions+=2;NFSU2_TR(0x4467cd);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x58ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4467d0:{NFSU2_TR(0x4467d0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x48ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4467d3:L4467d3:{c.instructions+=1;NFSU2_TR(0x4467d3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3cull))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4467da:L4467da:{c.instructions+=1;NFSU2_TR(0x4467da);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B446800:L446800:{c.instructions+=4;NFSU2_TR(0x446800);
{u32 ea_=u32(u32(7893608u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B446806:{NFSU2_TR(0x446806);
{u32 ea_=u32(u32(7893604u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B44680c:{NFSU2_TR(0x44680c);
{u32 ea_=u32(u32(7893600u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B446812:{NFSU2_TR(0x446812);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B446820:L446820:{c.instructions+=7;NFSU2_TR(0x446820);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xcull))));
}
B446823:{NFSU2_TR(0x446823);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B446824:{NFSU2_TR(0x446824);
__builtin_memmove((R+24),(R+4),4);
}
B446826:{NFSU2_TR(0x446826);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x74ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B446829:{NFSU2_TR(0x446829);
w1(R+512,u8((r4(R+0))<(u32(0x0ull))));
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B44682c:{NFSU2_TR(0x44682c);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B446834:{NFSU2_TR(0x446834);
if(r1(R+518)){{goto L44684b;}}
}
B446836:L446836:{c.instructions+=2;NFSU2_TR(0x446836);
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
B446837:{NFSU2_TR(0x446837);
if(r1(R+518)){{goto L446846;}}
}
B446839:L446839:{c.instructions+=2;NFSU2_TR(0x446839);
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
B44683a:{NFSU2_TR(0x44683a);
if(r1(R+518)){{goto L44684b;}}
}
B44683c:L44683c:{c.instructions+=2;NFSU2_TR(0x44683c);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B446844:{NFSU2_TR(0x446844);
{goto L44685b;}
}
B446846:L446846:{c.instructions+=2;NFSU2_TR(0x446846);
{u32 ea_=u32(r4(R+24)+u32(112u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B446849:{NFSU2_TR(0x446849);
{goto L446857;}
}
B44684b:L44684b:{c.instructions+=4;NFSU2_TR(0x44684b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B44684e:{NFSU2_TR(0x44684e);
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
B44684f:{NFSU2_TR(0x44684f);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B446853:{NFSU2_TR(0x446853);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B446857:L446857:{c.instructions+=1;NFSU2_TR(0x446857);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B44685b:L44685b:{c.instructions+=5;NFSU2_TR(0x44685b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44685c:{NFSU2_TR(0x44685c);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x134ull))));
__builtin_memmove((R+28),(U+0),4);
}
B446862:{NFSU2_TR(0x446862);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B446864:{NFSU2_TR(0x446864);
__builtin_memmove((R+4),(R+28),4);
}
B446866:{NFSU2_TR(0x446866);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x44686bull));
TAIL_STATIC(0x576c90u,576);
}
B44686b:L44686b:{c.instructions+=5;NFSU2_TR(0x44686b);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B44686f:{NFSU2_TR(0x44686f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x74ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B446872:{NFSU2_TR(0x446872);
w1(R+512,u8((r4(R+0))<(u32(0x0ull))));
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B446875:{NFSU2_TR(0x446875);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B446879:{NFSU2_TR(0x446879);
if(r1(R+518)){{goto L446890;}}
}
B44687b:L44687b:{c.instructions+=2;NFSU2_TR(0x44687b);
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
B44687c:{NFSU2_TR(0x44687c);
if(r1(R+518)){{goto L44688b;}}
}
B44687e:L44687e:{c.instructions+=2;NFSU2_TR(0x44687e);
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
B44687f:{NFSU2_TR(0x44687f);
if(r1(R+518)){{goto L446890;}}
}
B446881:L446881:{c.instructions+=2;NFSU2_TR(0x446881);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B446889:{NFSU2_TR(0x446889);
{goto L4468a0;}
}
B44688b:L44688b:{c.instructions+=2;NFSU2_TR(0x44688b);
{u32 ea_=u32(r4(R+24)+u32(112u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B44688e:{NFSU2_TR(0x44688e);
{goto L44689c;}
}
B446890:L446890:{c.instructions+=4;NFSU2_TR(0x446890);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B446893:{NFSU2_TR(0x446893);
u8 U[6];
w1(R+523,sborrow<u32>(r4(R+4),u32(0x1ull)));
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B446894:{NFSU2_TR(0x446894);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B446898:{NFSU2_TR(0x446898);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B44689c:L44689c:{c.instructions+=1;NFSU2_TR(0x44689c);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4468a0:L4468a0:{c.instructions+=3;NFSU2_TR(0x4468a0);
u8 U[4];
w4(U+0,u32(0x3f800000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4468a5:{NFSU2_TR(0x4468a5);
__builtin_memmove((R+4),(R+28),4);
}
B4468a7:{NFSU2_TR(0x4468a7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4468acull));
TAIL_STATIC(0x576c90u,576);
}
B4468ac:L4468ac:{c.instructions+=8;NFSU2_TR(0x4468ac);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4468b0:{NFSU2_TR(0x4468b0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4468b1:{NFSU2_TR(0x4468b1);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4468b5:{NFSU2_TR(0x4468b5);
{u32 ea_=u32(r4(R+24)+u32(92u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4468b8:{NFSU2_TR(0x4468b8);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B4468bc:{NFSU2_TR(0x4468bc);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4468be:{NFSU2_TR(0x4468be);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4468c1:{NFSU2_TR(0x4468c1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4468d9;}}
}
B4468c3:L4468c3:{c.instructions+=5;NFSU2_TR(0x4468c3);
{u32 ea_=u32(r4(R+24)+u32(92u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4468c6:{NFSU2_TR(0x4468c6);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B4468ca:{NFSU2_TR(0x4468ca);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4468cc:{NFSU2_TR(0x4468cc);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B4468cf:{NFSU2_TR(0x4468cf);
if(r1(R+514)){{goto L4468d9;}}
}
B4468d1:L4468d1:{c.instructions+=2;NFSU2_TR(0x4468d1);
{u32 ea_=u32(u32(7893644u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4468d7:{NFSU2_TR(0x4468d7);
{goto L4468dd;}
}
B4468d9:L4468d9:{c.instructions+=1;NFSU2_TR(0x4468d9);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4468dd:L4468dd:{c.instructions+=5;NFSU2_TR(0x4468dd);
{u32 ea_=u32(r4(R+24)+u32(96u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4468e0:{NFSU2_TR(0x4468e0);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B4468e4:{NFSU2_TR(0x4468e4);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4468e6:{NFSU2_TR(0x4468e6);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4468e9:{NFSU2_TR(0x4468e9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4468ff;}}
}
B4468eb:L4468eb:{c.instructions+=5;NFSU2_TR(0x4468eb);
{u32 ea_=u32(r4(R+24)+u32(96u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4468ee:{NFSU2_TR(0x4468ee);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B4468f2:{NFSU2_TR(0x4468f2);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4468f4:{NFSU2_TR(0x4468f4);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B4468f7:{NFSU2_TR(0x4468f7);
if(r1(R+514)){{goto L4468ff;}}
}
B4468f9:L4468f9:{c.instructions+=1;NFSU2_TR(0x4468f9);
{u32 ea_=u32(u32(7893644u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B4468ff:L4468ff:{c.instructions+=5;NFSU2_TR(0x4468ff);
{u32 ea_=u32(r4(R+24)+u32(100u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B446902:{NFSU2_TR(0x446902);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B446906:{NFSU2_TR(0x446906);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B446908:{NFSU2_TR(0x446908);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B44690b:{NFSU2_TR(0x44690b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L446921;}}
}
B44690d:L44690d:{c.instructions+=5;NFSU2_TR(0x44690d);
{u32 ea_=u32(r4(R+24)+u32(100u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B446910:{NFSU2_TR(0x446910);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B446914:{NFSU2_TR(0x446914);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B446916:{NFSU2_TR(0x446916);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B446919:{NFSU2_TR(0x446919);
if(r1(R+514)){{goto L446921;}}
}
B44691b:L44691b:{c.instructions+=1;NFSU2_TR(0x44691b);
{u32 ea_=u32(u32(7893644u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B446921:L446921:{c.instructions+=5;NFSU2_TR(0x446921);
{u32 ea_=u32(r4(R+24)+u32(104u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B446924:{NFSU2_TR(0x446924);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B446928:{NFSU2_TR(0x446928);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B44692a:{NFSU2_TR(0x44692a);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B44692d:{NFSU2_TR(0x44692d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L446943;}}
}
B44692f:L44692f:{c.instructions+=5;NFSU2_TR(0x44692f);
{u32 ea_=u32(r4(R+24)+u32(104u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B446932:{NFSU2_TR(0x446932);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B446936:{NFSU2_TR(0x446936);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B446938:{NFSU2_TR(0x446938);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B44693b:{NFSU2_TR(0x44693b);
if(r1(R+514)){{goto L446943;}}
}
B44693d:L44693d:{c.instructions+=1;NFSU2_TR(0x44693d);
{u32 ea_=u32(u32(7893644u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B446943:L446943:{c.instructions+=9;NFSU2_TR(0x446943);
{u32 ea_=u32(r4(R+24)+u32(84u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B446946:{NFSU2_TR(0x446946);
{u32 ea_=u32(r4(R+24)+u32(80u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B446949:{NFSU2_TR(0x446949);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B44694a:{NFSU2_TR(0x44694a);
{u32 ea_=u32(u32(7893640u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B446950:{NFSU2_TR(0x446950);
{u32 ea_=u32(u32(7893632u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B446956:{NFSU2_TR(0x446956);
{u32 ea_=u32(u32(7893624u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B44695c:{NFSU2_TR(0x44695c);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B44695e:{NFSU2_TR(0x44695e);
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
B446961:{NFSU2_TR(0x446961);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B446970:L446970:{c.instructions+=17;NFSU2_TR(0x446970);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B446971:{NFSU2_TR(0x446971);
__builtin_memmove((R+20),(R+16),4);
}
B446973:{NFSU2_TR(0x446973);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B446976:{NFSU2_TR(0x446976);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B446978:{NFSU2_TR(0x446978);
u8 U[4];
w4(U+0,u32(0x77224bull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44697d:{NFSU2_TR(0x44697d);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B446983:{NFSU2_TR(0x446983);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B446984:{NFSU2_TR(0x446984);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B44698b:{NFSU2_TR(0x44698b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x388ull))));
}
B446991:{NFSU2_TR(0x446991);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x74ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B446994:{NFSU2_TR(0x446994);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B446995:{NFSU2_TR(0x446995);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B446996:{NFSU2_TR(0x446996);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x6cull))));
__builtin_memmove((R+12),(U+0),4);
}
B446999:{NFSU2_TR(0x446999);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B44699b:{NFSU2_TR(0x44699b);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+24))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B44699d:{NFSU2_TR(0x44699d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44699e:{NFSU2_TR(0x44699e);
if(r1(R+518)){{goto L4469b1;}}
}
B4469a0:L4469a0:{c.instructions+=2;NFSU2_TR(0x4469a0);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B4469a1:{NFSU2_TR(0x4469a1);
if(r1(R+518)){{goto L4469ac;}}
}
B4469a3:L4469a3:{c.instructions+=2;NFSU2_TR(0x4469a3);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B4469a4:{NFSU2_TR(0x4469a4);
if(r1(R+518)){{goto L4469b1;}}
}
B4469a6:L4469a6:{c.instructions+=2;NFSU2_TR(0x4469a6);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4469aa:{NFSU2_TR(0x4469aa);
{goto L4469c1;}
}
B4469ac:L4469ac:{c.instructions+=2;NFSU2_TR(0x4469ac);
{u32 ea_=u32(r4(R+12)+u32(4u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B4469af:{NFSU2_TR(0x4469af);
{goto L4469bd;}
}
B4469b1:L4469b1:{c.instructions+=4;NFSU2_TR(0x4469b1);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4469b4:{NFSU2_TR(0x4469b4);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B4469b5:{NFSU2_TR(0x4469b5);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4469b9:{NFSU2_TR(0x4469b9);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B4469bd:L4469bd:{c.instructions+=1;NFSU2_TR(0x4469bd);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4469c1:L4469c1:{c.instructions+=2;NFSU2_TR(0x4469c1);
__builtin_memmove((R+4),(R+12),4);
}
B4469c3:{NFSU2_TR(0x4469c3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4469c8ull));
TAIL_STATIC(0x573540u,573);
}
B4469c8:L4469c8:{c.instructions+=7;NFSU2_TR(0x4469c8);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x38"::"a"(ea_):"memory");}
}
B4469cc:{NFSU2_TR(0x4469cc);
u8 U[4];
w4(U+0,u32(u32(u32(0x78ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B4469d0:{NFSU2_TR(0x4469d0);
{u32 ea_=u32(u32(7893680u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4469d6:{NFSU2_TR(0x4469d6);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B4469d8:{NFSU2_TR(0x4469d8);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4469dc:{NFSU2_TR(0x4469dc);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B4469de:{NFSU2_TR(0x4469de);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4469e3ull));
TAIL_STATIC(0x5e0b40u,5e0);
}
B4469e3:L4469e3:{c.instructions+=3;NFSU2_TR(0x4469e3);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4469e9:{NFSU2_TR(0x4469e9);
u8 U[8];
w4(U+0,u32(u32(u32(0x39cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4469f0:{NFSU2_TR(0x4469f0);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4469f4:L4469f4:{c.instructions+=4;NFSU2_TR(0x4469f4);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4469f7:{NFSU2_TR(0x4469f7);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B4469fb:{NFSU2_TR(0x4469fb);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B4469fe:{NFSU2_TR(0x4469fe);
if(r1(R+518)){{goto L446a13;}}
}
B446a00:L446a00:{c.instructions+=2;NFSU2_TR(0x446a00);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B446a01:{NFSU2_TR(0x446a01);
if(r1(R+518)){{goto L446a0e;}}
}
B446a03:L446a03:{c.instructions+=2;NFSU2_TR(0x446a03);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B446a04:{NFSU2_TR(0x446a04);
if(r1(R+518)){{goto L446a13;}}
}
B446a06:L446a06:{c.instructions+=2;NFSU2_TR(0x446a06);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B446a0c:{NFSU2_TR(0x446a0c);
{goto L446a1f;}
}
B446a0e:L446a0e:{c.instructions+=2;NFSU2_TR(0x446a0e);
{u32 ea_=u32(r4(R+12)+u32(4u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B446a11:{NFSU2_TR(0x446a11);
{goto L446a1f;}
}
B446a13:L446a13:{c.instructions+=4;NFSU2_TR(0x446a13);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B446a16:{NFSU2_TR(0x446a16);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
}
B446a17:{NFSU2_TR(0x446a17);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B446a1b:{NFSU2_TR(0x446a1b);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B446a1f:L446a1f:{c.instructions+=6;NFSU2_TR(0x446a1f);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B446a21:{NFSU2_TR(0x446a21);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B446a23:{NFSU2_TR(0x446a23);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B446a25:{NFSU2_TR(0x446a25);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B446a27:{NFSU2_TR(0x446a27);
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
B446a2a:{NFSU2_TR(0x446a2a);
if(r1(R+514)){{goto L446b7b;}}
}
B446a30:L446a30:{c.instructions+=11;NFSU2_TR(0x446a30);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B446a34:{NFSU2_TR(0x446a34);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B446a38:{NFSU2_TR(0x446a38);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x1ull))));
}
B446a3b:{NFSU2_TR(0x446a3b);
__builtin_memmove((R+24),(R+0),4);
}
B446a3d:{NFSU2_TR(0x446a3d);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B446a40:{NFSU2_TR(0x446a40);
u8 U[12];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+28),(U+8),4);
}
B446a44:{NFSU2_TR(0x446a44);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B446a45:{NFSU2_TR(0x446a45);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B446a46:{NFSU2_TR(0x446a46);
__builtin_memmove((R+4),(R+12),4);
}
B446a48:{NFSU2_TR(0x446a48);
w4(R+24,u32(u32(r4(R+24))^u32(u32(0x1ull))));
}
B446a4b:{NFSU2_TR(0x446a4b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x446a50ull));
TAIL_STATIC(0x573480u,573);
}
B446a50:L446a50:{c.instructions+=3;NFSU2_TR(0x446a50);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B446a54:{NFSU2_TR(0x446a54);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B446a56:{NFSU2_TR(0x446a56);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L446b3a;}}
}
B446a5c:L446a5c:{c.instructions+=54;NFSU2_TR(0x446a5c);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B446a5e:{NFSU2_TR(0x446a5e);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B446a61:{NFSU2_TR(0x446a61);
{u32 ea_=u32(r4(R+28)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B446a64:{NFSU2_TR(0x446a64);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+24,shl<u32>(r4(R+24),u64(r4(U+0))));
}
B446a67:{NFSU2_TR(0x446a67);
{u32 ea_=u32(r4(R+24)+r4(R+16)+u32(80u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B446a6b:{NFSU2_TR(0x446a6b);
u8 U[16];
w4(U+0,u32(u32(u32(0x54ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+4),(U+12),4);
}
B446a6f:{NFSU2_TR(0x446a6f);
u8 U[16];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+8),(U+12),4);
}
B446a73:{NFSU2_TR(0x446a73);
__asm__ volatile(".byte 0xd9,0xca":::"memory");
}
B446a75:{NFSU2_TR(0x446a75);
__asm__ volatile(".byte 0xd8,0xe2":::"memory");
}
B446a77:{NFSU2_TR(0x446a77);
u8 U[12];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+24),(U+8),4);
}
B446a7b:{NFSU2_TR(0x446a7b);
u8 U[8];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B446a7f:{NFSU2_TR(0x446a7f);
u8 U[8];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B446a83:{NFSU2_TR(0x446a83);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B446a87:{NFSU2_TR(0x446a87);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B446a8b:{NFSU2_TR(0x446a8b);
__builtin_memmove((R+0),(R+8),4);
}
B446a8d:{NFSU2_TR(0x446a8d);
__asm__ volatile(".byte 0xdd,0xd9":::"memory");
}
B446a8f:{NFSU2_TR(0x446a8f);
u8 U[8];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B446a93:{NFSU2_TR(0x446a93);
{u32 ea_=u32(r4(R+16)+u32(76u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B446a97:{NFSU2_TR(0x446a97);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B446a99:{NFSU2_TR(0x446a99);
{u32 ea_=u32(r4(R+16)+u32(72u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B446a9d:{NFSU2_TR(0x446a9d);
u8 U[4];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B446aa1:{NFSU2_TR(0x446aa1);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B446aa5:{NFSU2_TR(0x446aa5);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B446aa9:{NFSU2_TR(0x446aa9);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B446aaf:{NFSU2_TR(0x446aaf);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B446ab3:{NFSU2_TR(0x446ab3);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B446ab5:{NFSU2_TR(0x446ab5);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B446abb:{NFSU2_TR(0x446abb);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B446abf:{NFSU2_TR(0x446abf);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B446ac5:{NFSU2_TR(0x446ac5);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B446ac7:{NFSU2_TR(0x446ac7);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B446ac9:{NFSU2_TR(0x446ac9);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B446acd:{NFSU2_TR(0x446acd);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B446ad1:{NFSU2_TR(0x446ad1);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B446ad3:{NFSU2_TR(0x446ad3);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B446ad7:{NFSU2_TR(0x446ad7);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B446adb:{NFSU2_TR(0x446adb);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B446add:{NFSU2_TR(0x446add);
__asm__ volatile(".byte 0xd9,0xfa":::"memory");
}
B446adf:{NFSU2_TR(0x446adf);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B446ae5:{NFSU2_TR(0x446ae5);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B446ae9:{NFSU2_TR(0x446ae9);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B446aeb:{NFSU2_TR(0x446aeb);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B446aef:{NFSU2_TR(0x446aef);
{u32 ea_=u32(r4(R+24)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B446af2:{NFSU2_TR(0x446af2);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B446af3:{NFSU2_TR(0x446af3);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B446af5:{NFSU2_TR(0x446af5);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B446af6:{NFSU2_TR(0x446af6);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B446afa:{NFSU2_TR(0x446afa);
u8 U[4];
w4(U+0,u32(u32(u32(0x84ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B446b01:{NFSU2_TR(0x446b01);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B446b05:{NFSU2_TR(0x446b05);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B446b09:{NFSU2_TR(0x446b09);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B446b0d:{NFSU2_TR(0x446b0d);
{u32 ea_=u32(r4(R+16)+u32(84u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B446b11:{NFSU2_TR(0x446b11);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B446b15:{NFSU2_TR(0x446b15);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x446b1aull));
TAIL_STATIC(0x5e6fa0u,5e6);
}
B446b1a:L446b1a:{c.instructions+=8;NFSU2_TR(0x446b1a);
u8 U[4];
w4(U+0,u32(0x3f800000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B446b1f:{NFSU2_TR(0x446b1f);
u8 U[4];
w4(U+0,u32(0x3f000000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B446b24:{NFSU2_TR(0x446b24);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B446b25:{NFSU2_TR(0x446b25);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B446b26:{NFSU2_TR(0x446b26);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B446b28:{NFSU2_TR(0x446b28);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B446b2a:{NFSU2_TR(0x446b2a);
u8 U[4];
w4(U+0,u32(u32(u32(0x90ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B446b31:{NFSU2_TR(0x446b31);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x446b36ull));
TAIL_STATIC(0x5d39f0u,5d3);
}
B446b36:L446b36:{c.instructions+=2;NFSU2_TR(0x446b36);
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
B446b38:{NFSU2_TR(0x446b38);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L446b50;}}
}
B446b3a:L446b3a:{c.instructions+=6;NFSU2_TR(0x446b3a);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B446b3e:{NFSU2_TR(0x446b3e);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B446b42:{NFSU2_TR(0x446b42);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B446b46:{NFSU2_TR(0x446b46);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B446b47:{NFSU2_TR(0x446b47);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B446b4b:{NFSU2_TR(0x446b4b);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4469f4u);}goto L4469f4;}
}
B446b50:L446b50:{c.instructions+=3;NFSU2_TR(0x446b50);
u8 U[4];
w4(U+0,u32(u32(u32(0x78ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B446b54:{NFSU2_TR(0x446b54);
u8 U[8];
w4(U+0,u32(u32(u32(0x39cull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B446b5f:{NFSU2_TR(0x446b5f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x446b64ull));
TAIL_STATIC(0x5e0bf0u,5e0);
}
B446b64:L446b64:{c.instructions+=9;NFSU2_TR(0x446b64);
w1(R+0,u8(0x1ull));
}
B446b66:{NFSU2_TR(0x446b66);
u8 U[8];
w4(U+0,u32(u32(u32(0x394ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B446b6d:{NFSU2_TR(0x446b6d);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B446b74:{NFSU2_TR(0x446b74);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B446b75:{NFSU2_TR(0x446b75);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B446b76:{NFSU2_TR(0x446b76);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B446b77:{NFSU2_TR(0x446b77);
__builtin_memmove((R+16),(R+20),4);
}
B446b79:{NFSU2_TR(0x446b79);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B446b7a:{NFSU2_TR(0x446b7a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B446b7b:L446b7b:{c.instructions+=3;NFSU2_TR(0x446b7b);
u8 U[4];
w4(U+0,u32(u32(u32(0x78ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B446b7f:{NFSU2_TR(0x446b7f);
u8 U[8];
w4(U+0,u32(u32(u32(0x39cull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B446b8a:{NFSU2_TR(0x446b8a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x446b8full));
TAIL_STATIC(0x5e0bf0u,5e0);
}
B446b8f:L446b8f:{c.instructions+=9;NFSU2_TR(0x446b8f);
u8 U[8];
w4(U+0,u32(u32(u32(0x394ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B446b96:{NFSU2_TR(0x446b96);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B446b97:{NFSU2_TR(0x446b97);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B446b98:{NFSU2_TR(0x446b98);
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
B446b9a:{NFSU2_TR(0x446b9a);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B446ba1:{NFSU2_TR(0x446ba1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B446ba2:{NFSU2_TR(0x446ba2);
__builtin_memmove((R+16),(R+20),4);
}
B446ba4:{NFSU2_TR(0x446ba4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B446ba5:{NFSU2_TR(0x446ba5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B446bb0:L446bb0:{c.instructions+=3;NFSU2_TR(0x446bb0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B446bb2:{NFSU2_TR(0x446bb2);
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
B446bb4:{NFSU2_TR(0x446bb4);
if(r1(R+518)){{goto L446bbd;}}
}
B446bb6:L446bb6:{c.instructions+=2;NFSU2_TR(0x446bb6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B446bb7:{NFSU2_TR(0x446bb7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x446bbcull));
TAIL_STATIC(0x440540u,440);
}
B446bbc:L446bbc:{c.instructions+=1;NFSU2_TR(0x446bbc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B446bbd:L446bbd:{c.instructions+=1;NFSU2_TR(0x446bbd);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B446bc0:L446bc0:{c.instructions+=15;NFSU2_TR(0x446bc0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B446bc1:{NFSU2_TR(0x446bc1);
__builtin_memmove((R+20),(R+16),4);
}
B446bc3:{NFSU2_TR(0x446bc3);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B446bc6:{NFSU2_TR(0x446bc6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x34ull))));
}
B446bc9:{NFSU2_TR(0x446bc9);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B446bca:{NFSU2_TR(0x446bca);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B446bcd:{NFSU2_TR(0x446bcd);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B446bce:{NFSU2_TR(0x446bce);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B446bcf:{NFSU2_TR(0x446bcf);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B446bd3:{NFSU2_TR(0x446bd3);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0x49742400ull));
s4(u32(r4(U+0)),r4(U+4));
}
B446bdb:{NFSU2_TR(0x446bdb);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B446be3:{NFSU2_TR(0x446be3);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B446beb:{NFSU2_TR(0x446beb);
u8 U[5];
w4(U+0,u32(u32(u32(0x17ull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B446bf0:{NFSU2_TR(0x446bf0);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B446bf2:{NFSU2_TR(0x446bf2);
{goto L446bf8;}
}
B446bf4:L446bf4:{c.instructions+=1;NFSU2_TR(0x446bf4);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B446bf8:L446bf8:{c.instructions+=2;NFSU2_TR(0x446bf8);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B446bfb:{NFSU2_TR(0x446bfb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L446c55;}}
}
B446bfd:L446bfd:{c.instructions+=3;NFSU2_TR(0x446bfd);
u8 U[5];
w4(U+0,u32(u32(u32(0x17ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B446c01:{NFSU2_TR(0x446c01);
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
B446c03:{NFSU2_TR(0x446c03);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L446cd0;}}
}
B446c09:L446c09:{c.instructions+=16;NFSU2_TR(0x446c09);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(s32(s16(r2(U+4)))));
}
B446c0d:{NFSU2_TR(0x446c0d);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1aull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(s32(s16(r2(U+4)))));
}
B446c11:{NFSU2_TR(0x446c11);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B446c15:{NFSU2_TR(0x446c15);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B446c19:{NFSU2_TR(0x446c19);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B446c1d:{NFSU2_TR(0x446c1d);
{u32 ea_=u32(u32(8554292u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B446c23:{NFSU2_TR(0x446c23);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B446c27:{NFSU2_TR(0x446c27);
{u32 ea_=u32(u32(8554292u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B446c2d:{NFSU2_TR(0x446c2d);
{u32 ea_=u32(r4(R+4)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B446c30:{NFSU2_TR(0x446c30);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B446c32:{NFSU2_TR(0x446c32);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B446c35:{NFSU2_TR(0x446c35);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B446c37:{NFSU2_TR(0x446c37);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B446c3d:{NFSU2_TR(0x446c3d);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B446c3f:{NFSU2_TR(0x446c3f);
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
B446c42:{NFSU2_TR(0x446c42);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L446cd0;}}
}
B446c48:L446c48:{c.instructions+=3;NFSU2_TR(0x446c48);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B446c50:{NFSU2_TR(0x446c50);
w4(R+28,u32(u32(r4(R+28))|u32(u32(0xffffffffull))));
}
B446c53:{NFSU2_TR(0x446c53);
{goto L446c7b;}
}
B446c55:L446c55:{c.instructions+=5;NFSU2_TR(0x446c55);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B446c58:{NFSU2_TR(0x446c58);
u8 U[13];
w4(U+0,u32(u32(u32(0x74ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x8ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
__builtin_memmove((R+4),(U+12),1);
}
B446c5c:{NFSU2_TR(0x446c5c);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B446c5e:{NFSU2_TR(0x446c5e);
__builtin_memmove((R+28),(R+24),4);
}
B446c60:{NFSU2_TR(0x446c60);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L446c6a;}}
}
B446c62:L446c62:{c.instructions+=3;NFSU2_TR(0x446c62);
u8 U[13];
w4(U+0,u32(u32(u32(0x75ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x8ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
__builtin_memmove((R+4),(U+12),1);
}
B446c66:{NFSU2_TR(0x446c66);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B446c68:{NFSU2_TR(0x446c68);
if(r1(R+518)){{goto L446cc6;}}
}
B446c6a:L446c6a:{c.instructions+=3;NFSU2_TR(0x446c6a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B446c6b:{NFSU2_TR(0x446c6b);
__builtin_memmove((R+4),(R+12),4);
}
B446c6d:{NFSU2_TR(0x446c6d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x446c72ull));
TAIL_STATIC(0x401c40u,401);
}
B446c72:L446c72:{c.instructions+=2;NFSU2_TR(0x446c72);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B446c76:{NFSU2_TR(0x446c76);
u8 U[5];
w4(U+0,u32(u32(u32(0x17ull))+u32(r4(R+16))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B446c7b:L446c7b:{c.instructions+=7;NFSU2_TR(0x446c7b);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B446c7f:{NFSU2_TR(0x446c7f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B446c80:{NFSU2_TR(0x446c80);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B446c82:{NFSU2_TR(0x446c82);
u8 U[4];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B446c86:{NFSU2_TR(0x446c86);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B446c87:{NFSU2_TR(0x446c87);
__builtin_memmove((R+4),(R+12),4);
}
B446c89:{NFSU2_TR(0x446c89);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x446c8eull));
TAIL_STATIC(0x5dd360u,5dd);
}
B446c8e:L446c8e:{c.instructions+=5;NFSU2_TR(0x446c8e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B446c91:{NFSU2_TR(0x446c91);
u8 U[4];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B446c95:{NFSU2_TR(0x446c95);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B446c96:{NFSU2_TR(0x446c96);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B446c97:{NFSU2_TR(0x446c97);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x446c9cull));
TAIL_STATIC(0x43ce10u,43c);
}
B446c9c:L446c9c:{c.instructions+=5;NFSU2_TR(0x446c9c);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B446ca0:{NFSU2_TR(0x446ca0);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B446ca3:{NFSU2_TR(0x446ca3);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B446ca5:{NFSU2_TR(0x446ca5);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B446ca8:{NFSU2_TR(0x446ca8);
if(r1(R+514)){{goto L446cc4;}}
}
B446caa:L446caa:{c.instructions+=7;NFSU2_TR(0x446caa);
u8 U[5];
w4(U+0,u32(u32(u32(0x17ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B446cae:{NFSU2_TR(0x446cae);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B446cb2:{NFSU2_TR(0x446cb2);
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
B446cb4:{NFSU2_TR(0x446cb4);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B446cb8:{NFSU2_TR(0x446cb8);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B446cbc:{NFSU2_TR(0x446cbc);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B446cc0:{NFSU2_TR(0x446cc0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L446cd0;}}
}
B446cc2:L446cc2:{c.instructions+=1;NFSU2_TR(0x446cc2);
{goto L446cc6;}
}
B446cc4:L446cc4:{c.instructions+=1;NFSU2_TR(0x446cc4);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B446cc6:L446cc6:{c.instructions+=3;NFSU2_TR(0x446cc6);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B446cc7:{NFSU2_TR(0x446cc7);
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
B446cca:{NFSU2_TR(0x446cca);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x446bf4u);}goto L446bf4;}}
}
B446cd0:L446cd0:{c.instructions+=15;NFSU2_TR(0x446cd0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B446cd3:{NFSU2_TR(0x446cd3);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B446cd7:{NFSU2_TR(0x446cd7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B446cda:{NFSU2_TR(0x446cda);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B446cde:{NFSU2_TR(0x446cde);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B446cdf:{NFSU2_TR(0x446cdf);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+0)),r4(U+0));
}
B446ce1:{NFSU2_TR(0x446ce1);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B446ce5:{NFSU2_TR(0x446ce5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B446ce6:{NFSU2_TR(0x446ce6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B446ce9:{NFSU2_TR(0x446ce9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B446cec:{NFSU2_TR(0x446cec);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B446cef:{NFSU2_TR(0x446cef);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B446cf0:{NFSU2_TR(0x446cf0);
__builtin_memmove((R+16),(R+20),4);
}
B446cf2:{NFSU2_TR(0x446cf2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B446cf3:{NFSU2_TR(0x446cf3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B446d00:L446d00:{c.instructions+=10;NFSU2_TR(0x446d00);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B446d01:{NFSU2_TR(0x446d01);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B446d05:{NFSU2_TR(0x446d05);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B446d06:{NFSU2_TR(0x446d06);
__builtin_memmove((R+24),(R+4),4);
}
B446d08:{NFSU2_TR(0x446d08);
{u32 ea_=u32(r4(R+24)+u32(4u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B446d0b:{NFSU2_TR(0x446d0b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B446d0c:{NFSU2_TR(0x446d0c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+28),(U+0),4);
}
B446d0e:{NFSU2_TR(0x446d0e);
{u32 ea_=u32(r4(R+24)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B446d11:{NFSU2_TR(0x446d11);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B446d15:{NFSU2_TR(0x446d15);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x446d1aull));
TAIL_STATIC(0x75bed4u,75b);
}
B446d1a:L446d1a:{c.instructions+=4;NFSU2_TR(0x446d1a);
__builtin_memmove((R+4),(R+0),4);
}
B446d1c:{NFSU2_TR(0x446d1c);
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
B446d1e:{NFSU2_TR(0x446d1e);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B446d22:{NFSU2_TR(0x446d22);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L446d47;}}
}
B446d24:L446d24:{c.instructions+=14;NFSU2_TR(0x446d24);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B446d27:{NFSU2_TR(0x446d27);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B446d29:{NFSU2_TR(0x446d29);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B446d2d:{NFSU2_TR(0x446d2d);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+4)),r4(U+0));
}
B446d2f:{NFSU2_TR(0x446d2f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B446d32:{NFSU2_TR(0x446d32);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B446d35:{NFSU2_TR(0x446d35);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B446d38:{NFSU2_TR(0x446d38);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B446d3b:{NFSU2_TR(0x446d3b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B446d3e:{NFSU2_TR(0x446d3e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B446d3f:{NFSU2_TR(0x446d3f);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B446d42:{NFSU2_TR(0x446d42);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B446d43:{NFSU2_TR(0x446d43);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B446d44:{NFSU2_TR(0x446d44);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B446d47:L446d47:{c.instructions+=3;NFSU2_TR(0x446d47);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xffffffffull))));
__builtin_memmove((R+8),(U+0),4);
}
B446d4a:{NFSU2_TR(0x446d4a);
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
B446d4c:{NFSU2_TR(0x446d4c);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L446d78;}}
}
B446d4e:L446d4e:{c.instructions+=16;NFSU2_TR(0x446d4e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B446d51:{NFSU2_TR(0x446d51);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B446d55:{NFSU2_TR(0x446d55);
u8 U[45];
w4(U+37,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
__builtin_memmove((U+41),(R+28),4);
w4(R+28,shl<u32>(r4(R+28),u64(r4(U+37))));
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
w1(U+35,u8(s32(r4(R+28))<s32(u32(0x0ull))));
w1(U+36,u8(u32(r1(R+512))^u32(r1(U+35))));
__builtin_memmove((U+0),(U+34),1);
w1(U+1,u8(u32(r1(U+0))*u32(r1(U+36))));
w1(U+2,u8(!(r1(U+34))));
__builtin_memmove((U+3),(U+2),1);
w1(U+4,u8(u32(r1(U+3))*u32(r1(R+523))));
w1(R+523,u8(u32(r1(U+1))|u32(r1(U+4))));
w1(U+5,u8((r4(U+37))!=(u32(0x0ull))));
w1(U+6,u8(s32(r4(R+28))<s32(u32(0x0ull))));
w1(U+7,u8(!(r1(U+5))));
w1(U+8,u8(u32(r1(U+7))&u32(r1(R+519))));
w1(U+9,u8(u32(r1(U+5))&u32(r1(U+6))));
w1(R+519,u8(u32(r1(U+8))|u32(r1(U+9))));
w1(U+10,u8((r4(R+28))==(u32(0x0ull))));
w1(U+11,u8(!(r1(U+5))));
w1(U+12,u8(u32(r1(U+11))&u32(r1(R+518))));
w1(U+13,u8(u32(r1(U+5))&u32(r1(U+10))));
w1(R+518,u8(u32(r1(U+12))|u32(r1(U+13))));
w4(U+14,u32(u32(r4(R+28))&u32(u32(0xffull))));
w1(U+18,u8(__builtin_popcountll(u64(r4(U+14)))));
w1(U+19,u8(u32(r1(U+18))&u32(u8(0x1ull))));
w1(U+20,u8((r1(U+19))==(u8(0x0ull))));
w1(U+21,u8(!(r1(U+5))));
w1(U+22,u8(u32(r1(U+21))&u32(r1(R+514))));
w1(U+23,u8(u32(r1(U+5))&u32(r1(U+20))));
w1(R+514,u8(u32(r1(U+22))|u32(r1(U+23))));
}
B446d58:{NFSU2_TR(0x446d58);
u8 U[12];
w4(U+0,u32(u32(u32(0xfffffff0ull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B446d5c:{NFSU2_TR(0x446d5c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B446d5e:{NFSU2_TR(0x446d5e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+8)),r4(U+0));
}
B446d60:{NFSU2_TR(0x446d60);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B446d63:{NFSU2_TR(0x446d63);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B446d66:{NFSU2_TR(0x446d66);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B446d69:{NFSU2_TR(0x446d69);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B446d6c:{NFSU2_TR(0x446d6c);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B446d6f:{NFSU2_TR(0x446d6f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B446d70:{NFSU2_TR(0x446d70);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B446d73:{NFSU2_TR(0x446d73);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B446d74:{NFSU2_TR(0x446d74);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B446d75:{NFSU2_TR(0x446d75);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B446d78:L446d78:{c.instructions+=5;NFSU2_TR(0x446d78);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B446d7c:{NFSU2_TR(0x446d7c);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B446d80:{NFSU2_TR(0x446d80);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B446d82:{NFSU2_TR(0x446d82);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B446d85:{NFSU2_TR(0x446d85);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L446d8d;}}
}
B446d87:L446d87:{c.instructions+=1;NFSU2_TR(0x446d87);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B446d8d:L446d8d:{c.instructions+=15;NFSU2_TR(0x446d8d);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B446d91:{NFSU2_TR(0x446d91);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B446d94:{NFSU2_TR(0x446d94);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B446d97:{NFSU2_TR(0x446d97);
__asm__ volatile(".byte 0xd8,0xe1":::"memory");
}
B446d99:{NFSU2_TR(0x446d99);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B446d9a:{NFSU2_TR(0x446d9a);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B446d9d:{NFSU2_TR(0x446d9d);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B446da0:{NFSU2_TR(0x446da0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B446da1:{NFSU2_TR(0x446da1);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),u32(0x10ull)));
w1(R+523,scarry<u32>(r4(R+0),u32(0x10ull)));
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B446da4:{NFSU2_TR(0x446da4);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B446da6:{NFSU2_TR(0x446da6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B446da7:{NFSU2_TR(0x446da7);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B446dab:{NFSU2_TR(0x446dab);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B446dac:{NFSU2_TR(0x446dac);
__builtin_memmove((R+4),(R+24),4);
}
B446dae:{NFSU2_TR(0x446dae);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x446db3ull));
TAIL_STATIC(0x5766e0u,576);
}
B446db3:L446db3:{c.instructions+=4;NFSU2_TR(0x446db3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B446db4:{NFSU2_TR(0x446db4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B446db5:{NFSU2_TR(0x446db5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B446db6:{NFSU2_TR(0x446db6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B446dc0:L446dc0:{c.instructions+=10;NFSU2_TR(0x446dc0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B446dc1:{NFSU2_TR(0x446dc1);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B446dc5:{NFSU2_TR(0x446dc5);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B446dc6:{NFSU2_TR(0x446dc6);
__builtin_memmove((R+24),(R+4),4);
}
B446dc8:{NFSU2_TR(0x446dc8);
{u32 ea_=u32(r4(R+24)+u32(4u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B446dcb:{NFSU2_TR(0x446dcb);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B446dcc:{NFSU2_TR(0x446dcc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+28),(U+0),4);
}
B446dce:{NFSU2_TR(0x446dce);
{u32 ea_=u32(r4(R+24)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B446dd1:{NFSU2_TR(0x446dd1);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B446dd5:{NFSU2_TR(0x446dd5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x446ddaull));
TAIL_STATIC(0x75bed4u,75b);
}
B446dda:L446dda:{c.instructions+=4;NFSU2_TR(0x446dda);
__builtin_memmove((R+4),(R+0),4);
}
B446ddc:{NFSU2_TR(0x446ddc);
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
B446dde:{NFSU2_TR(0x446dde);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B446de2:{NFSU2_TR(0x446de2);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L446df8;}}
}
B446de4:L446de4:{c.instructions+=3;NFSU2_TR(0x446de4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B446de7:{NFSU2_TR(0x446de7);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B446deb:{NFSU2_TR(0x446deb);
w4(R+4,u32(0x2cull));
}
B446df0:L446df0:{c.instructions+=1;NFSU2_TR(0x446df0);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L446df2;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x446df0u);}goto L446df0;}
}
B446df2:L446df2:{c.instructions+=4;NFSU2_TR(0x446df2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B446df3:{NFSU2_TR(0x446df3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B446df4:{NFSU2_TR(0x446df4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B446df5:{NFSU2_TR(0x446df5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B446df8:L446df8:{c.instructions+=3;NFSU2_TR(0x446df8);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xffffffffull))));
__builtin_memmove((R+0),(U+0),4);
}
B446dfb:{NFSU2_TR(0x446dfb);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+6)));
w4(U+10,u32(u32(r4(R+4))-u32(r4(U+6))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B446dfd:{NFSU2_TR(0x446dfd);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L446e20;}}
}
B446dff:L446dff:{c.instructions+=5;NFSU2_TR(0x446dff);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B446e02:{NFSU2_TR(0x446e02);
u8 U[32];
w8(U+8,u64(s64(s32(r4(R+28)))));
w8(U+16,u64(s64(s32(u32(0xb0ull)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+28,u32(r8(U+24)));
w8(U+0,u64(s64(s32(r4(R+28)))));
w1(R+512,u8((r8(U+0))!=(r8(U+24))));
__builtin_memmove((R+523),(R+512),1);
}
B446e08:{NFSU2_TR(0x446e08);
u8 U[12];
w4(U+0,u32(u32(u32(0xffffff50ull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+24),(U+8),4);
}
B446e0f:{NFSU2_TR(0x446e0f);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B446e13:{NFSU2_TR(0x446e13);
w4(R+4,u32(0x2cull));
}
B446e18:L446e18:{c.instructions+=1;NFSU2_TR(0x446e18);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L446e1a;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x446e18u);}goto L446e18;}
}
B446e1a:L446e1a:{c.instructions+=4;NFSU2_TR(0x446e1a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B446e1b:{NFSU2_TR(0x446e1b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B446e1c:{NFSU2_TR(0x446e1c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B446e1d:{NFSU2_TR(0x446e1d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B446e20:L446e20:{c.instructions+=5;NFSU2_TR(0x446e20);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B446e24:{NFSU2_TR(0x446e24);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B446e28:{NFSU2_TR(0x446e28);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B446e2a:{NFSU2_TR(0x446e2a);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B446e2d:{NFSU2_TR(0x446e2d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L446e35;}}
}
B446e2f:L446e2f:{c.instructions+=1;NFSU2_TR(0x446e2f);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B446e35:L446e35:{c.instructions+=15;NFSU2_TR(0x446e35);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B446e39:{NFSU2_TR(0x446e39);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B446e3c:{NFSU2_TR(0x446e3c);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(u32(0xb0ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B446e42:{NFSU2_TR(0x446e42);
__asm__ volatile(".byte 0xd8,0xe1":::"memory");
}
B446e44:{NFSU2_TR(0x446e44);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B446e45:{NFSU2_TR(0x446e45);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B446e48:{NFSU2_TR(0x446e48);
__builtin_memmove((R+4),(R+24),4);
}
B446e4a:{NFSU2_TR(0x446e4a);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B446e4d:{NFSU2_TR(0x446e4d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B446e4e:{NFSU2_TR(0x446e4e);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xb0ull))));
}
B446e53:{NFSU2_TR(0x446e53);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B446e54:{NFSU2_TR(0x446e54);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B446e56:{NFSU2_TR(0x446e56);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B446e5a:{NFSU2_TR(0x446e5a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B446e5b:{NFSU2_TR(0x446e5b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x446e60ull));
TAIL_STATIC(0x445750u,445);
}
B446e60:L446e60:{c.instructions+=4;NFSU2_TR(0x446e60);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B446e61:{NFSU2_TR(0x446e61);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B446e62:{NFSU2_TR(0x446e62);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B446e63:{NFSU2_TR(0x446e63);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B446e70:L446e70:{c.instructions+=14;NFSU2_TR(0x446e70);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B446e72:{NFSU2_TR(0x446e72);
u8 U[4];
w4(U+0,u32(0x772008ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B446e77:{NFSU2_TR(0x446e77);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B446e7d:{NFSU2_TR(0x446e7d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B446e7e:{NFSU2_TR(0x446e7e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B446e85:{NFSU2_TR(0x446e85);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B446e86:{NFSU2_TR(0x446e86);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B446e87:{NFSU2_TR(0x446e87);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B446e88:{NFSU2_TR(0x446e88);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B446e8c:{NFSU2_TR(0x446e8c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B446e8d:{NFSU2_TR(0x446e8d);
__builtin_memmove((R+24),(R+4),4);
}
B446e8f:{NFSU2_TR(0x446e8f);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B446e91:{NFSU2_TR(0x446e91);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B446e95:{NFSU2_TR(0x446e95);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x446e9aull));
TAIL_STATIC(0x576850u,576);
}
B446e9a:L446e9a:{c.instructions+=5;NFSU2_TR(0x446e9a);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+28,shl<u32>(r4(R+28),u64(r4(U+0))));
}
B446e9d:{NFSU2_TR(0x446e9d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B446e9e:{NFSU2_TR(0x446e9e);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B446ea6:{NFSU2_TR(0x446ea6);
u8 U[4];
w4(U+0,u32(0x787af8ull));
s4(u32(r4(R+24)),r4(U+0));
}
B446eac:{NFSU2_TR(0x446eac);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x446eb1ull));
TAIL_STATIC(0x575620u,575);
}
B446eb1:L446eb1:{c.instructions+=7;NFSU2_TR(0x446eb1);
__builtin_memmove((R+8),(R+0),4);
}
B446eb3:{NFSU2_TR(0x446eb3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B446eb6:{NFSU2_TR(0x446eb6);
__builtin_memmove((R+4),(R+28),4);
}
B446eb8:{NFSU2_TR(0x446eb8);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B446eba:{NFSU2_TR(0x446eba);
__builtin_memmove((R+28),(R+8),4);
}
B446ebc:{NFSU2_TR(0x446ebc);
__builtin_memmove((R+8),(R+4),4);
}
B446ebe:{NFSU2_TR(0x446ebe);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B446ec1:L446ec1:{c.instructions+=1;NFSU2_TR(0x446ec1);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L446ec3;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x446ec1u);}goto L446ec1;}
}
B446ec3:L446ec3:{c.instructions+=3;NFSU2_TR(0x446ec3);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B446ec6:{NFSU2_TR(0x446ec6);
__builtin_memmove((R+4),(R+8),4);
}
B446ec8:{NFSU2_TR(0x446ec8);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B446ecb:L446ecb:{c.instructions+=1;NFSU2_TR(0x446ecb);
u8 U[18];
w1(U+17,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+17)){{goto L446ecd;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x1ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x2ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),1);
s1(u32(r4(U+0)),r1(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x446ecbu);}goto L446ecb;}
}
B446ecd:L446ecd:{c.instructions+=23;NFSU2_TR(0x446ecd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B446ed0:{NFSU2_TR(0x446ed0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B446ed1:{NFSU2_TR(0x446ed1);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B446ed4:{NFSU2_TR(0x446ed4);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B446ed7:{NFSU2_TR(0x446ed7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B446ed9:{NFSU2_TR(0x446ed9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B446edc:{NFSU2_TR(0x446edc);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B446ede:{NFSU2_TR(0x446ede);
{u32 ea_=u32(r4(R+24)+u32(36u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B446ee1:{NFSU2_TR(0x446ee1);
{u32 ea_=u32(r4(R+24)+u32(40u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B446ee4:{NFSU2_TR(0x446ee4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B446ee7:{NFSU2_TR(0x446ee7);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B446eea:{NFSU2_TR(0x446eea);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B446eec:{NFSU2_TR(0x446eec);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B446eef:{NFSU2_TR(0x446eef);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B446ef2:{NFSU2_TR(0x446ef2);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B446ef6:{NFSU2_TR(0x446ef6);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B446ef8:{NFSU2_TR(0x446ef8);
{u32 ea_=u32(r4(R+24)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B446efb:{NFSU2_TR(0x446efb);
__builtin_memmove((R+0),(R+24),4);
}
B446efd:{NFSU2_TR(0x446efd);
{u32 ea_=u32(r4(R+24)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B446f00:{NFSU2_TR(0x446f00);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B446f01:{NFSU2_TR(0x446f01);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B446f08:{NFSU2_TR(0x446f08);
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
B446f0b:{NFSU2_TR(0x446f0b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B446f10:L446f10:{c.instructions+=8;NFSU2_TR(0x446f10);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B446f11:{NFSU2_TR(0x446f11);
__builtin_memmove((R+20),(R+16),4);
}
B446f13:{NFSU2_TR(0x446f13);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B446f16:{NFSU2_TR(0x446f16);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x2cull))));
}
B446f19:{NFSU2_TR(0x446f19);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B446f1c:{NFSU2_TR(0x446f1c);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x5ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(R+512,u8((r1(R+0))<(r1(U+5))));
}
B446f1f:{NFSU2_TR(0x446f1f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B446f20:{NFSU2_TR(0x446f20);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L446f27;}}
}
B446f22:L446f22:{c.instructions+=2;NFSU2_TR(0x446f22);
w1(R+0,u8(u32(r1(R+0))+u32(u8(0x1ull))));
}
B446f24:{NFSU2_TR(0x446f24);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x6ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B446f27:L446f27:{c.instructions+=65;NFSU2_TR(0x446f27);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x7ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B446f2b:{NFSU2_TR(0x446f2b);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B446f2e:{NFSU2_TR(0x446f2e);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B446f31:{NFSU2_TR(0x446f31);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+8))));
}
B446f33:{NFSU2_TR(0x446f33);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B446f36:{NFSU2_TR(0x446f36);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B446f39:{NFSU2_TR(0x446f39);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B446f3c:{NFSU2_TR(0x446f3c);
{u32 ea_=u32(r4(R+4)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B446f3f:{NFSU2_TR(0x446f3f);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B446f41:{NFSU2_TR(0x446f41);
{u32 ea_=u32(r4(R+4)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B446f44:{NFSU2_TR(0x446f44);
{u32 ea_=u32(r4(R+4)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B446f47:{NFSU2_TR(0x446f47);
__asm__ volatile(".byte 0xd8,0xe2":::"memory");
}
B446f49:{NFSU2_TR(0x446f49);
{u32 ea_=u32(r4(R+4)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B446f4c:{NFSU2_TR(0x446f4c);
{u32 ea_=u32(r4(R+4)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B446f4f:{NFSU2_TR(0x446f4f);
__asm__ volatile(".byte 0xd8,0xe1":::"memory");
}
B446f51:{NFSU2_TR(0x446f51);
{u32 ea_=u32(r4(R+4)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B446f54:{NFSU2_TR(0x446f54);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B446f56:{NFSU2_TR(0x446f56);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B446f58:{NFSU2_TR(0x446f58);
{u32 ea_=u32(r4(R+8)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B446f5b:{NFSU2_TR(0x446f5b);
{u32 ea_=u32(r4(R+8)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B446f5e:{NFSU2_TR(0x446f5e);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B446f60:{NFSU2_TR(0x446f60);
{u32 ea_=u32(r4(R+4)+u32(16u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B446f63:{NFSU2_TR(0x446f63);
{u32 ea_=u32(r4(R+4)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B446f66:{NFSU2_TR(0x446f66);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B446f68:{NFSU2_TR(0x446f68);
{u32 ea_=u32(r4(R+4)+u32(20u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B446f6b:{NFSU2_TR(0x446f6b);
{u32 ea_=u32(r4(R+4)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B446f6e:{NFSU2_TR(0x446f6e);
{u32 ea_=u32(r4(R+4)+u32(24u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B446f71:{NFSU2_TR(0x446f71);
{u32 ea_=u32(r4(R+4)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B446f74:{NFSU2_TR(0x446f74);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x7ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B446f78:{NFSU2_TR(0x446f78);
{u32 ea_=u32(r4(R+8)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B446f7b:{NFSU2_TR(0x446f7b);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B446f7e:{NFSU2_TR(0x446f7e);
{u32 ea_=u32(r4(R+8)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B446f81:{NFSU2_TR(0x446f81);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+8),(U+0),4);
}
B446f83:{NFSU2_TR(0x446f83);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B446f86:{NFSU2_TR(0x446f86);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B446f88:{NFSU2_TR(0x446f88);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+24))));
}
B446f8a:{NFSU2_TR(0x446f8a);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+0)),r4(U+0));
}
B446f8c:{NFSU2_TR(0x446f8c);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B446f8f:{NFSU2_TR(0x446f8f);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B446f92:{NFSU2_TR(0x446f92);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B446f96:{NFSU2_TR(0x446f96);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B446f9a:{NFSU2_TR(0x446f9a);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B446f9e:{NFSU2_TR(0x446f9e);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x38"::"a"(ea_):"memory");}
}
B446fa4:{NFSU2_TR(0x446fa4);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B446fa6:{NFSU2_TR(0x446fa6);
{u32 ea_=u32(r4(R+4)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B446fa9:{NFSU2_TR(0x446fa9);
{u32 ea_=u32(r4(R+4)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B446fac:{NFSU2_TR(0x446fac);
__asm__ volatile(".byte 0xd8,0xca":::"memory");
}
B446fae:{NFSU2_TR(0x446fae);
{u32 ea_=u32(r4(R+4)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B446fb1:{NFSU2_TR(0x446fb1);
__asm__ volatile(".byte 0xd8,0xcb":::"memory");
}
B446fb3:{NFSU2_TR(0x446fb3);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B446fb7:{NFSU2_TR(0x446fb7);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B446fb9:{NFSU2_TR(0x446fb9);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B446fbd:{NFSU2_TR(0x446fbd);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B446fc1:{NFSU2_TR(0x446fc1);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B446fc4:{NFSU2_TR(0x446fc4);
__asm__ volatile(".byte 0xdd,0xd9":::"memory");
}
B446fc6:{NFSU2_TR(0x446fc6);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B446fca:{NFSU2_TR(0x446fca);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B446fcc:{NFSU2_TR(0x446fcc);
{u32 ea_=u32(r4(R+4)+u32(36u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B446fcf:{NFSU2_TR(0x446fcf);
{u32 ea_=u32(r4(R+4)+u32(40u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B446fd2:{NFSU2_TR(0x446fd2);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x7ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B446fd5:{NFSU2_TR(0x446fd5);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x5ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B446fd8:{NFSU2_TR(0x446fd8);
w1(R+0,u8(u32(r1(R+0))+u32(u8(0x1ull))));
}
B446fda:{NFSU2_TR(0x446fda);
u8 U[5];
__builtin_memmove((U+3),(R+8),1);
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
B446fdc:{NFSU2_TR(0x446fdc);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x7ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B446fdf:{NFSU2_TR(0x446fdf);
if(r1(R+512)){{goto L446fe5;}}
}
B446fe1:L446fe1:{c.instructions+=1;NFSU2_TR(0x446fe1);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x7ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B446fe5:L446fe5:{c.instructions+=4;NFSU2_TR(0x446fe5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B446fe6:{NFSU2_TR(0x446fe6);
__builtin_memmove((R+16),(R+20),4);
}
B446fe8:{NFSU2_TR(0x446fe8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B446fe9:{NFSU2_TR(0x446fe9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B446ff0:L446ff0:{c.instructions+=7;NFSU2_TR(0x446ff0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B446ff1:{NFSU2_TR(0x446ff1);
__builtin_memmove((R+20),(R+16),4);
}
B446ff3:{NFSU2_TR(0x446ff3);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B446ff6:{NFSU2_TR(0x446ff6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x2cull))));
}
B446ff9:{NFSU2_TR(0x446ff9);
{u32 ea_=u32(r4(R+4)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B446ffc:{NFSU2_TR(0x446ffc);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B446ffe:{NFSU2_TR(0x446ffe);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
TAIL_STATIC(0x447004u,447);
}
XIT:NFSU2_TR_EXIT(0x446,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
