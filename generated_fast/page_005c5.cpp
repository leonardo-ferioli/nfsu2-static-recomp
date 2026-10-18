#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_43c(u8* __restrict R,Cpu& c);
u32 body_43d(u8* __restrict R,Cpu& c);
u32 body_488(u8* __restrict R,Cpu& c);
u32 body_48a(u8* __restrict R,Cpu& c);
u32 body_490(u8* __restrict R,Cpu& c);
u32 body_5bc(u8* __restrict R,Cpu& c);
u32 body_5bd(u8* __restrict R,Cpu& c);
u32 body_5c6(u8* __restrict R,Cpu& c);
u32 body_5ce(u8* __restrict R,Cpu& c);
u32 body_5cf(u8* __restrict R,Cpu& c);
u32 body_60f(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x5c5,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x5c5,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_5c5(u8* __restrict R,Cpu& c);
u32 page_5c5(Cpu& c){return body_5c5(c.regs.data(),c);}
__attribute__((noinline)) u32 body_5c5(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x5c5001:goto L5c5001;
case 0x5c5002:c.instructions+=1;goto B5c5002;
case 0x5c5020:goto L5c5020;
case 0x5c5021:c.instructions+=14;goto B5c5021;
case 0x5c5023:c.instructions+=13;goto B5c5023;
case 0x5c5026:c.instructions+=12;goto B5c5026;
case 0x5c502c:c.instructions+=11;goto B5c502c;
case 0x5c5031:c.instructions+=10;goto B5c5031;
case 0x5c5034:c.instructions+=9;goto B5c5034;
case 0x5c5035:c.instructions+=8;goto B5c5035;
case 0x5c5037:c.instructions+=7;goto B5c5037;
case 0x5c5039:c.instructions+=6;goto B5c5039;
case 0x5c503a:c.instructions+=5;goto B5c503a;
case 0x5c503d:c.instructions+=4;goto B5c503d;
case 0x5c503e:c.instructions+=3;goto B5c503e;
case 0x5c5042:c.instructions+=2;goto B5c5042;
case 0x5c5046:c.instructions+=1;goto B5c5046;
case 0x5c5048:goto L5c5048;
case 0x5c504a:c.instructions+=1;goto B5c504a;
case 0x5c504c:goto L5c504c;
case 0x5c504f:c.instructions+=2;goto B5c504f;
case 0x5c5054:c.instructions+=1;goto B5c5054;
case 0x5c5056:goto L5c5056;
case 0x5c505b:c.instructions+=1;goto B5c505b;
case 0x5c505d:goto L5c505d;
case 0x5c505f:c.instructions+=1;goto B5c505f;
case 0x5c5063:goto L5c5063;
case 0x5c5066:c.instructions+=2;goto B5c5066;
case 0x5c5068:c.instructions+=1;goto B5c5068;
case 0x5c506a:goto L5c506a;
case 0x5c506c:c.instructions+=1;goto B5c506c;
case 0x5c506e:goto L5c506e;
case 0x5c5073:goto L5c5073;
case 0x5c5075:c.instructions+=11;goto B5c5075;
case 0x5c5078:c.instructions+=10;goto B5c5078;
case 0x5c507a:c.instructions+=9;goto B5c507a;
case 0x5c5080:c.instructions+=8;goto B5c5080;
case 0x5c5086:c.instructions+=7;goto B5c5086;
case 0x5c508a:c.instructions+=6;goto B5c508a;
case 0x5c508d:c.instructions+=5;goto B5c508d;
case 0x5c5093:c.instructions+=4;goto B5c5093;
case 0x5c5099:c.instructions+=3;goto B5c5099;
case 0x5c509b:c.instructions+=2;goto B5c509b;
case 0x5c509f:c.instructions+=1;goto B5c509f;
case 0x5c50a1:goto L5c50a1;
case 0x5c50a4:c.instructions+=2;goto B5c50a4;
case 0x5c50a8:c.instructions+=1;goto B5c50a8;
case 0x5c50aa:goto L5c50aa;
case 0x5c50b2:goto L5c50b2;
case 0x5c50b5:c.instructions+=26;goto B5c50b5;
case 0x5c50b9:c.instructions+=25;goto B5c50b9;
case 0x5c50bf:c.instructions+=24;goto B5c50bf;
case 0x5c50c1:c.instructions+=23;goto B5c50c1;
case 0x5c50c4:c.instructions+=22;goto B5c50c4;
case 0x5c50cc:c.instructions+=21;goto B5c50cc;
case 0x5c50d2:c.instructions+=20;goto B5c50d2;
case 0x5c50da:c.instructions+=19;goto B5c50da;
case 0x5c50de:c.instructions+=18;goto B5c50de;
case 0x5c50e1:c.instructions+=17;goto B5c50e1;
case 0x5c50e7:c.instructions+=16;goto B5c50e7;
case 0x5c50ea:c.instructions+=15;goto B5c50ea;
case 0x5c50f0:c.instructions+=14;goto B5c50f0;
case 0x5c50f2:c.instructions+=13;goto B5c50f2;
case 0x5c50f6:c.instructions+=12;goto B5c50f6;
case 0x5c50f9:c.instructions+=11;goto B5c50f9;
case 0x5c50fb:c.instructions+=10;goto B5c50fb;
case 0x5c50ff:c.instructions+=9;goto B5c50ff;
case 0x5c5102:c.instructions+=8;goto B5c5102;
case 0x5c5104:c.instructions+=7;goto B5c5104;
case 0x5c5106:c.instructions+=6;goto B5c5106;
case 0x5c510a:c.instructions+=5;goto B5c510a;
case 0x5c510d:c.instructions+=4;goto B5c510d;
case 0x5c5111:c.instructions+=3;goto B5c5111;
case 0x5c5114:c.instructions+=2;goto B5c5114;
case 0x5c5118:c.instructions+=1;goto B5c5118;
case 0x5c511a:goto L5c511a;
case 0x5c511d:c.instructions+=2;goto B5c511d;
case 0x5c5121:c.instructions+=1;goto B5c5121;
case 0x5c5123:goto L5c5123;
case 0x5c512b:goto L5c512b;
case 0x5c512e:c.instructions+=26;goto B5c512e;
case 0x5c5132:c.instructions+=25;goto B5c5132;
case 0x5c5138:c.instructions+=24;goto B5c5138;
case 0x5c513a:c.instructions+=23;goto B5c513a;
case 0x5c513d:c.instructions+=22;goto B5c513d;
case 0x5c5145:c.instructions+=21;goto B5c5145;
case 0x5c514b:c.instructions+=20;goto B5c514b;
case 0x5c5153:c.instructions+=19;goto B5c5153;
case 0x5c5157:c.instructions+=18;goto B5c5157;
case 0x5c515a:c.instructions+=17;goto B5c515a;
case 0x5c5160:c.instructions+=16;goto B5c5160;
case 0x5c5163:c.instructions+=15;goto B5c5163;
case 0x5c5169:c.instructions+=14;goto B5c5169;
case 0x5c516b:c.instructions+=13;goto B5c516b;
case 0x5c516f:c.instructions+=12;goto B5c516f;
case 0x5c5172:c.instructions+=11;goto B5c5172;
case 0x5c5174:c.instructions+=10;goto B5c5174;
case 0x5c5178:c.instructions+=9;goto B5c5178;
case 0x5c517b:c.instructions+=8;goto B5c517b;
case 0x5c517d:c.instructions+=7;goto B5c517d;
case 0x5c517f:c.instructions+=6;goto B5c517f;
case 0x5c5183:c.instructions+=5;goto B5c5183;
case 0x5c5186:c.instructions+=4;goto B5c5186;
case 0x5c518a:c.instructions+=3;goto B5c518a;
case 0x5c518d:c.instructions+=2;goto B5c518d;
case 0x5c5191:c.instructions+=1;goto B5c5191;
case 0x5c5193:goto L5c5193;
case 0x5c5196:c.instructions+=2;goto B5c5196;
case 0x5c519a:c.instructions+=1;goto B5c519a;
case 0x5c519c:goto L5c519c;
case 0x5c51a4:goto L5c51a4;
case 0x5c51a7:c.instructions+=26;goto B5c51a7;
case 0x5c51ab:c.instructions+=25;goto B5c51ab;
case 0x5c51b1:c.instructions+=24;goto B5c51b1;
case 0x5c51b3:c.instructions+=23;goto B5c51b3;
case 0x5c51b6:c.instructions+=22;goto B5c51b6;
case 0x5c51be:c.instructions+=21;goto B5c51be;
case 0x5c51c4:c.instructions+=20;goto B5c51c4;
case 0x5c51cc:c.instructions+=19;goto B5c51cc;
case 0x5c51d3:c.instructions+=18;goto B5c51d3;
case 0x5c51d6:c.instructions+=17;goto B5c51d6;
case 0x5c51dc:c.instructions+=16;goto B5c51dc;
case 0x5c51df:c.instructions+=15;goto B5c51df;
case 0x5c51e5:c.instructions+=14;goto B5c51e5;
case 0x5c51e7:c.instructions+=13;goto B5c51e7;
case 0x5c51ee:c.instructions+=12;goto B5c51ee;
case 0x5c51f1:c.instructions+=11;goto B5c51f1;
case 0x5c51f3:c.instructions+=10;goto B5c51f3;
case 0x5c51f7:c.instructions+=9;goto B5c51f7;
case 0x5c51fa:c.instructions+=8;goto B5c51fa;
case 0x5c51fc:c.instructions+=7;goto B5c51fc;
case 0x5c51fe:c.instructions+=6;goto B5c51fe;
case 0x5c5202:c.instructions+=5;goto B5c5202;
case 0x5c5205:c.instructions+=4;goto B5c5205;
case 0x5c5209:c.instructions+=3;goto B5c5209;
case 0x5c520c:c.instructions+=2;goto B5c520c;
case 0x5c5210:c.instructions+=1;goto B5c5210;
case 0x5c5212:goto L5c5212;
case 0x5c5215:c.instructions+=2;goto B5c5215;
case 0x5c521c:c.instructions+=1;goto B5c521c;
case 0x5c521e:goto L5c521e;
case 0x5c5229:goto L5c5229;
case 0x5c522d:c.instructions+=18;goto B5c522d;
case 0x5c522f:c.instructions+=17;goto B5c522f;
case 0x5c5232:c.instructions+=16;goto B5c5232;
case 0x5c5235:c.instructions+=15;goto B5c5235;
case 0x5c5240:c.instructions+=14;goto B5c5240;
case 0x5c524b:c.instructions+=13;goto B5c524b;
case 0x5c524e:c.instructions+=12;goto B5c524e;
case 0x5c5251:c.instructions+=11;goto B5c5251;
case 0x5c5253:c.instructions+=10;goto B5c5253;
case 0x5c5257:c.instructions+=9;goto B5c5257;
case 0x5c525a:c.instructions+=8;goto B5c525a;
case 0x5c525c:c.instructions+=7;goto B5c525c;
case 0x5c525e:c.instructions+=6;goto B5c525e;
case 0x5c5261:c.instructions+=5;goto B5c5261;
case 0x5c5268:c.instructions+=4;goto B5c5268;
case 0x5c526b:c.instructions+=3;goto B5c526b;
case 0x5c5272:c.instructions+=2;goto B5c5272;
case 0x5c5279:c.instructions+=1;goto B5c5279;
case 0x5c527f:goto L5c527f;
case 0x5c5282:c.instructions+=1;goto B5c5282;
case 0x5c5288:goto L5c5288;
case 0x5c528c:c.instructions+=32;goto B5c528c;
case 0x5c5290:c.instructions+=31;goto B5c5290;
case 0x5c5294:c.instructions+=30;goto B5c5294;
case 0x5c5298:c.instructions+=29;goto B5c5298;
case 0x5c529c:c.instructions+=28;goto B5c529c;
case 0x5c52a2:c.instructions+=27;goto B5c52a2;
case 0x5c52a6:c.instructions+=26;goto B5c52a6;
case 0x5c52a8:c.instructions+=25;goto B5c52a8;
case 0x5c52ac:c.instructions+=24;goto B5c52ac;
case 0x5c52b0:c.instructions+=23;goto B5c52b0;
case 0x5c52b6:c.instructions+=22;goto B5c52b6;
case 0x5c52ba:c.instructions+=21;goto B5c52ba;
case 0x5c52bc:c.instructions+=20;goto B5c52bc;
case 0x5c52c0:c.instructions+=19;goto B5c52c0;
case 0x5c52c4:c.instructions+=18;goto B5c52c4;
case 0x5c52c6:c.instructions+=17;goto B5c52c6;
case 0x5c52ca:c.instructions+=16;goto B5c52ca;
case 0x5c52ce:c.instructions+=15;goto B5c52ce;
case 0x5c52d0:c.instructions+=14;goto B5c52d0;
case 0x5c52d4:c.instructions+=13;goto B5c52d4;
case 0x5c52d8:c.instructions+=12;goto B5c52d8;
case 0x5c52da:c.instructions+=11;goto B5c52da;
case 0x5c52de:c.instructions+=10;goto B5c52de;
case 0x5c52e2:c.instructions+=9;goto B5c52e2;
case 0x5c52e4:c.instructions+=8;goto B5c52e4;
case 0x5c52e8:c.instructions+=7;goto B5c52e8;
case 0x5c52ea:c.instructions+=6;goto B5c52ea;
case 0x5c52f1:c.instructions+=5;goto B5c52f1;
case 0x5c52f8:c.instructions+=4;goto B5c52f8;
case 0x5c52ff:c.instructions+=3;goto B5c52ff;
case 0x5c5301:c.instructions+=2;goto B5c5301;
case 0x5c5308:c.instructions+=1;goto B5c5308;
case 0x5c530a:goto L5c530a;
case 0x5c530b:c.instructions+=1;goto B5c530b;
case 0x5c5310:goto L5c5310;
case 0x5c5313:goto L5c5313;
case 0x5c5319:c.instructions+=2;goto B5c5319;
case 0x5c531b:c.instructions+=1;goto B5c531b;
case 0x5c531d:goto L5c531d;
case 0x5c5323:c.instructions+=8;goto B5c5323;
case 0x5c5326:c.instructions+=7;goto B5c5326;
case 0x5c5329:c.instructions+=6;goto B5c5329;
case 0x5c532b:c.instructions+=5;goto B5c532b;
case 0x5c532c:c.instructions+=4;goto B5c532c;
case 0x5c5332:c.instructions+=3;goto B5c5332;
case 0x5c5333:c.instructions+=2;goto B5c5333;
case 0x5c5334:c.instructions+=1;goto B5c5334;
case 0x5c533a:goto L5c533a;
case 0x5c533e:goto L5c533e;
case 0x5c5341:c.instructions+=1;goto B5c5341;
case 0x5c5343:goto L5c5343;
case 0x5c5348:c.instructions+=5;goto B5c5348;
case 0x5c534b:c.instructions+=4;goto B5c534b;
case 0x5c5350:c.instructions+=3;goto B5c5350;
case 0x5c5352:c.instructions+=2;goto B5c5352;
case 0x5c5354:c.instructions+=1;goto B5c5354;
case 0x5c5356:goto L5c5356;
case 0x5c535b:c.instructions+=4;goto B5c535b;
case 0x5c535d:c.instructions+=3;goto B5c535d;
case 0x5c535f:c.instructions+=2;goto B5c535f;
case 0x5c5360:c.instructions+=1;goto B5c5360;
case 0x5c5366:goto L5c5366;
case 0x5c536b:c.instructions+=1;goto B5c536b;
case 0x5c536d:goto L5c536d;
case 0x5c5372:c.instructions+=4;goto B5c5372;
case 0x5c5374:c.instructions+=3;goto B5c5374;
case 0x5c5376:c.instructions+=2;goto B5c5376;
case 0x5c5377:c.instructions+=1;goto B5c5377;
case 0x5c537d:goto L5c537d;
case 0x5c5382:goto L5c5382;
case 0x5c5387:c.instructions+=3;goto B5c5387;
case 0x5c5389:c.instructions+=2;goto B5c5389;
case 0x5c538a:c.instructions+=1;goto B5c538a;
case 0x5c5390:goto L5c5390;
case 0x5c5397:c.instructions+=2;goto B5c5397;
case 0x5c5398:c.instructions+=1;goto B5c5398;
case 0x5c539d:goto L5c539d;
case 0x5c53a2:c.instructions+=7;goto B5c53a2;
case 0x5c53a4:c.instructions+=6;goto B5c53a4;
case 0x5c53a7:c.instructions+=5;goto B5c53a7;
case 0x5c53ae:c.instructions+=4;goto B5c53ae;
case 0x5c53af:c.instructions+=3;goto B5c53af;
case 0x5c53b1:c.instructions+=2;goto B5c53b1;
case 0x5c53b2:c.instructions+=1;goto B5c53b2;
case 0x5c53b8:goto L5c53b8;
case 0x5c53c2:c.instructions+=2;goto B5c53c2;
case 0x5c53c6:c.instructions+=1;goto B5c53c6;
case 0x5c53c8:goto L5c53c8;
case 0x5c53cd:c.instructions+=5;goto B5c53cd;
case 0x5c53cf:c.instructions+=4;goto B5c53cf;
case 0x5c53d1:c.instructions+=3;goto B5c53d1;
case 0x5c53d3:c.instructions+=2;goto B5c53d3;
case 0x5c53d4:c.instructions+=1;goto B5c53d4;
case 0x5c53da:goto L5c53da;
case 0x5c53df:c.instructions+=5;goto B5c53df;
case 0x5c53e1:c.instructions+=4;goto B5c53e1;
case 0x5c53e3:c.instructions+=3;goto B5c53e3;
case 0x5c53e5:c.instructions+=2;goto B5c53e5;
case 0x5c53e6:c.instructions+=1;goto B5c53e6;
case 0x5c53ec:goto L5c53ec;
case 0x5c53ee:c.instructions+=1;goto B5c53ee;
case 0x5c53f0:goto L5c53f0;
case 0x5c53f5:c.instructions+=5;goto B5c53f5;
case 0x5c53f7:c.instructions+=4;goto B5c53f7;
case 0x5c53f9:c.instructions+=3;goto B5c53f9;
case 0x5c53fb:c.instructions+=2;goto B5c53fb;
case 0x5c53fc:c.instructions+=1;goto B5c53fc;
case 0x5c5402:goto L5c5402;
case 0x5c5407:c.instructions+=5;goto B5c5407;
case 0x5c5409:c.instructions+=4;goto B5c5409;
case 0x5c540b:c.instructions+=3;goto B5c540b;
case 0x5c540d:c.instructions+=2;goto B5c540d;
case 0x5c540e:c.instructions+=1;goto B5c540e;
case 0x5c5414:goto L5c5414;
case 0x5c5419:c.instructions+=5;goto B5c5419;
case 0x5c541b:c.instructions+=4;goto B5c541b;
case 0x5c541d:c.instructions+=3;goto B5c541d;
case 0x5c541f:c.instructions+=2;goto B5c541f;
case 0x5c5420:c.instructions+=1;goto B5c5420;
case 0x5c5426:goto L5c5426;
case 0x5c5428:c.instructions+=2;goto B5c5428;
case 0x5c542a:c.instructions+=1;goto B5c542a;
case 0x5c542f:goto L5c542f;
case 0x5c5432:c.instructions+=1;goto B5c5432;
case 0x5c5437:goto L5c5437;
case 0x5c543b:c.instructions+=2;goto B5c543b;
case 0x5c543d:c.instructions+=1;goto B5c543d;
case 0x5c543f:goto L5c543f;
case 0x5c5444:c.instructions+=5;goto B5c5444;
case 0x5c5446:c.instructions+=4;goto B5c5446;
case 0x5c5448:c.instructions+=3;goto B5c5448;
case 0x5c544a:c.instructions+=2;goto B5c544a;
case 0x5c544b:c.instructions+=1;goto B5c544b;
case 0x5c5451:goto L5c5451;
case 0x5c5456:c.instructions+=5;goto B5c5456;
case 0x5c5458:c.instructions+=4;goto B5c5458;
case 0x5c545a:c.instructions+=3;goto B5c545a;
case 0x5c545c:c.instructions+=2;goto B5c545c;
case 0x5c545d:c.instructions+=1;goto B5c545d;
case 0x5c5463:goto L5c5463;
case 0x5c5465:c.instructions+=2;goto B5c5465;
case 0x5c5467:c.instructions+=1;goto B5c5467;
case 0x5c546c:goto L5c546c;
case 0x5c546f:c.instructions+=3;goto B5c546f;
case 0x5c5472:c.instructions+=2;goto B5c5472;
case 0x5c5474:c.instructions+=1;goto B5c5474;
case 0x5c5476:goto L5c5476;
case 0x5c547b:c.instructions+=2;goto B5c547b;
case 0x5c547e:c.instructions+=1;goto B5c547e;
case 0x5c5480:goto L5c5480;
case 0x5c5485:c.instructions+=5;goto B5c5485;
case 0x5c5487:c.instructions+=4;goto B5c5487;
case 0x5c548c:c.instructions+=3;goto B5c548c;
case 0x5c5491:c.instructions+=2;goto B5c5491;
case 0x5c5492:c.instructions+=1;goto B5c5492;
case 0x5c5498:goto L5c5498;
case 0x5c549a:c.instructions+=2;goto B5c549a;
case 0x5c549c:c.instructions+=1;goto B5c549c;
case 0x5c549e:goto L5c549e;
case 0x5c54a0:c.instructions+=2;goto B5c54a0;
case 0x5c54a2:c.instructions+=1;goto B5c54a2;
case 0x5c54a4:goto L5c54a4;
case 0x5c54a6:c.instructions+=1;goto B5c54a6;
case 0x5c54a8:goto L5c54a8;
case 0x5c54aa:c.instructions+=1;goto B5c54aa;
case 0x5c54af:goto L5c54af;
case 0x5c54b2:c.instructions+=1;goto B5c54b2;
case 0x5c54b7:goto L5c54b7;
case 0x5c54bc:c.instructions+=2;goto B5c54bc;
case 0x5c54be:c.instructions+=1;goto B5c54be;
case 0x5c54c0:goto L5c54c0;
case 0x5c54c5:c.instructions+=4;goto B5c54c5;
case 0x5c54c8:c.instructions+=3;goto B5c54c8;
case 0x5c54ca:c.instructions+=2;goto B5c54ca;
case 0x5c54cb:c.instructions+=1;goto B5c54cb;
case 0x5c54d1:goto L5c54d1;
case 0x5c54d7:c.instructions+=5;goto B5c54d7;
case 0x5c54da:c.instructions+=4;goto B5c54da;
case 0x5c54dc:c.instructions+=3;goto B5c54dc;
case 0x5c54de:c.instructions+=2;goto B5c54de;
case 0x5c54df:c.instructions+=1;goto B5c54df;
case 0x5c54e5:goto L5c54e5;
case 0x5c54ea:c.instructions+=8;goto B5c54ea;
case 0x5c54ec:c.instructions+=7;goto B5c54ec;
case 0x5c54ee:c.instructions+=6;goto B5c54ee;
case 0x5c54f2:c.instructions+=5;goto B5c54f2;
case 0x5c54f3:c.instructions+=4;goto B5c54f3;
case 0x5c54f5:c.instructions+=3;goto B5c54f5;
case 0x5c54f7:c.instructions+=2;goto B5c54f7;
case 0x5c54f8:c.instructions+=1;goto B5c54f8;
case 0x5c54fe:goto L5c54fe;
case 0x5c5504:c.instructions+=4;goto B5c5504;
case 0x5c5507:c.instructions+=3;goto B5c5507;
case 0x5c5509:c.instructions+=2;goto B5c5509;
case 0x5c550a:c.instructions+=1;goto B5c550a;
case 0x5c5510:goto L5c5510;
case 0x5c5512:c.instructions+=1;goto B5c5512;
case 0x5c5514:goto L5c5514;
case 0x5c5518:c.instructions+=2;goto B5c5518;
case 0x5c551a:c.instructions+=1;goto B5c551a;
case 0x5c551c:goto L5c551c;
case 0x5c5521:c.instructions+=5;goto B5c5521;
case 0x5c5523:c.instructions+=4;goto B5c5523;
case 0x5c5525:c.instructions+=3;goto B5c5525;
case 0x5c5527:c.instructions+=2;goto B5c5527;
case 0x5c5528:c.instructions+=1;goto B5c5528;
case 0x5c552e:goto L5c552e;
case 0x5c5532:c.instructions+=1;goto B5c5532;
case 0x5c5534:goto L5c5534;
case 0x5c5539:c.instructions+=5;goto B5c5539;
case 0x5c553b:c.instructions+=4;goto B5c553b;
case 0x5c553d:c.instructions+=3;goto B5c553d;
case 0x5c553f:c.instructions+=2;goto B5c553f;
case 0x5c5540:c.instructions+=1;goto B5c5540;
case 0x5c5546:goto L5c5546;
case 0x5c554b:c.instructions+=5;goto B5c554b;
case 0x5c554d:c.instructions+=4;goto B5c554d;
case 0x5c554f:c.instructions+=3;goto B5c554f;
case 0x5c5551:c.instructions+=2;goto B5c5551;
case 0x5c5552:c.instructions+=1;goto B5c5552;
case 0x5c5558:goto L5c5558;
case 0x5c555d:goto L5c555d;
case 0x5c5560:c.instructions+=1;goto B5c5560;
case 0x5c5562:goto L5c5562;
case 0x5c5567:c.instructions+=6;goto B5c5567;
case 0x5c5569:c.instructions+=5;goto B5c5569;
case 0x5c556b:c.instructions+=4;goto B5c556b;
case 0x5c556d:c.instructions+=3;goto B5c556d;
case 0x5c556f:c.instructions+=2;goto B5c556f;
case 0x5c5570:c.instructions+=1;goto B5c5570;
case 0x5c5576:goto L5c5576;
case 0x5c5577:c.instructions+=5;goto B5c5577;
case 0x5c5578:c.instructions+=4;goto B5c5578;
case 0x5c5579:c.instructions+=3;goto B5c5579;
case 0x5c557b:c.instructions+=2;goto B5c557b;
case 0x5c557c:c.instructions+=1;goto B5c557c;
case 0x5c5580:goto L5c5580;
case 0x5c5586:c.instructions+=84;goto B5c5586;
case 0x5c558d:c.instructions+=83;goto B5c558d;
case 0x5c5590:c.instructions+=82;goto B5c5590;
case 0x5c5594:c.instructions+=81;goto B5c5594;
case 0x5c5596:c.instructions+=80;goto B5c5596;
case 0x5c5599:c.instructions+=79;goto B5c5599;
case 0x5c559b:c.instructions+=78;goto B5c559b;
case 0x5c559f:c.instructions+=77;goto B5c559f;
case 0x5c55a2:c.instructions+=76;goto B5c55a2;
case 0x5c55a6:c.instructions+=75;goto B5c55a6;
case 0x5c55aa:c.instructions+=74;goto B5c55aa;
case 0x5c55ad:c.instructions+=73;goto B5c55ad;
case 0x5c55b0:c.instructions+=72;goto B5c55b0;
case 0x5c55b2:c.instructions+=71;goto B5c55b2;
case 0x5c55b6:c.instructions+=70;goto B5c55b6;
case 0x5c55b9:c.instructions+=69;goto B5c55b9;
case 0x5c55bb:c.instructions+=68;goto B5c55bb;
case 0x5c55be:c.instructions+=67;goto B5c55be;
case 0x5c55c2:c.instructions+=66;goto B5c55c2;
case 0x5c55c5:c.instructions+=65;goto B5c55c5;
case 0x5c55c9:c.instructions+=64;goto B5c55c9;
case 0x5c55cb:c.instructions+=63;goto B5c55cb;
case 0x5c55ce:c.instructions+=62;goto B5c55ce;
case 0x5c55d2:c.instructions+=61;goto B5c55d2;
case 0x5c55d5:c.instructions+=60;goto B5c55d5;
case 0x5c55d9:c.instructions+=59;goto B5c55d9;
case 0x5c55dc:c.instructions+=58;goto B5c55dc;
case 0x5c55e0:c.instructions+=57;goto B5c55e0;
case 0x5c55e3:c.instructions+=56;goto B5c55e3;
case 0x5c55e6:c.instructions+=55;goto B5c55e6;
case 0x5c55ea:c.instructions+=54;goto B5c55ea;
case 0x5c55ee:c.instructions+=53;goto B5c55ee;
case 0x5c55f1:c.instructions+=52;goto B5c55f1;
case 0x5c55f3:c.instructions+=51;goto B5c55f3;
case 0x5c55f7:c.instructions+=50;goto B5c55f7;
case 0x5c55fa:c.instructions+=49;goto B5c55fa;
case 0x5c55fc:c.instructions+=48;goto B5c55fc;
case 0x5c55ff:c.instructions+=47;goto B5c55ff;
case 0x5c5603:c.instructions+=46;goto B5c5603;
case 0x5c5606:c.instructions+=45;goto B5c5606;
case 0x5c560a:c.instructions+=44;goto B5c560a;
case 0x5c560c:c.instructions+=43;goto B5c560c;
case 0x5c560f:c.instructions+=42;goto B5c560f;
case 0x5c5613:c.instructions+=41;goto B5c5613;
case 0x5c5616:c.instructions+=40;goto B5c5616;
case 0x5c561a:c.instructions+=39;goto B5c561a;
case 0x5c561d:c.instructions+=38;goto B5c561d;
case 0x5c5621:c.instructions+=37;goto B5c5621;
case 0x5c5624:c.instructions+=36;goto B5c5624;
case 0x5c5627:c.instructions+=35;goto B5c5627;
case 0x5c562b:c.instructions+=34;goto B5c562b;
case 0x5c562f:c.instructions+=33;goto B5c562f;
case 0x5c5632:c.instructions+=32;goto B5c5632;
case 0x5c5634:c.instructions+=31;goto B5c5634;
case 0x5c5638:c.instructions+=30;goto B5c5638;
case 0x5c563b:c.instructions+=29;goto B5c563b;
case 0x5c563d:c.instructions+=28;goto B5c563d;
case 0x5c5640:c.instructions+=27;goto B5c5640;
case 0x5c5644:c.instructions+=26;goto B5c5644;
case 0x5c5647:c.instructions+=25;goto B5c5647;
case 0x5c564b:c.instructions+=24;goto B5c564b;
case 0x5c564d:c.instructions+=23;goto B5c564d;
case 0x5c5650:c.instructions+=22;goto B5c5650;
case 0x5c5654:c.instructions+=21;goto B5c5654;
case 0x5c5657:c.instructions+=20;goto B5c5657;
case 0x5c565b:c.instructions+=19;goto B5c565b;
case 0x5c565e:c.instructions+=18;goto B5c565e;
case 0x5c5662:c.instructions+=17;goto B5c5662;
case 0x5c5665:c.instructions+=16;goto B5c5665;
case 0x5c5668:c.instructions+=15;goto B5c5668;
case 0x5c566c:c.instructions+=14;goto B5c566c;
case 0x5c5670:c.instructions+=13;goto B5c5670;
case 0x5c5673:c.instructions+=12;goto B5c5673;
case 0x5c5675:c.instructions+=11;goto B5c5675;
case 0x5c5679:c.instructions+=10;goto B5c5679;
case 0x5c567c:c.instructions+=9;goto B5c567c;
case 0x5c567e:c.instructions+=8;goto B5c567e;
case 0x5c5681:c.instructions+=7;goto B5c5681;
case 0x5c5685:c.instructions+=6;goto B5c5685;
case 0x5c5688:c.instructions+=5;goto B5c5688;
case 0x5c568c:c.instructions+=4;goto B5c568c;
case 0x5c5690:c.instructions+=3;goto B5c5690;
case 0x5c5697:c.instructions+=2;goto B5c5697;
case 0x5c5698:c.instructions+=1;goto B5c5698;
case 0x5c569d:goto L5c569d;
case 0x5c56a3:c.instructions+=5;goto B5c56a3;
case 0x5c56a6:c.instructions+=4;goto B5c56a6;
case 0x5c56ad:c.instructions+=3;goto B5c56ad;
case 0x5c56ae:c.instructions+=2;goto B5c56ae;
case 0x5c56af:c.instructions+=1;goto B5c56af;
case 0x5c56b4:goto L5c56b4;
case 0x5c56ba:c.instructions+=3;goto B5c56ba;
case 0x5c56bd:c.instructions+=2;goto B5c56bd;
case 0x5c56bf:c.instructions+=1;goto B5c56bf;
case 0x5c56c1:goto L5c56c1;
case 0x5c56c7:c.instructions+=9;goto B5c56c7;
case 0x5c56ca:c.instructions+=8;goto B5c56ca;
case 0x5c56cd:c.instructions+=7;goto B5c56cd;
case 0x5c56ce:c.instructions+=6;goto B5c56ce;
case 0x5c56d0:c.instructions+=5;goto B5c56d0;
case 0x5c56d1:c.instructions+=4;goto B5c56d1;
case 0x5c56d7:c.instructions+=3;goto B5c56d7;
case 0x5c56d8:c.instructions+=2;goto B5c56d8;
case 0x5c56d9:c.instructions+=1;goto B5c56d9;
case 0x5c56df:goto L5c56df;
case 0x5c56e0:goto L5c56e0;
case 0x5c56e5:c.instructions+=2;goto B5c56e5;
case 0x5c56e7:c.instructions+=1;goto B5c56e7;
case 0x5c56e9:goto L5c56e9;
case 0x5c56ee:c.instructions+=4;goto B5c56ee;
case 0x5c56f1:c.instructions+=3;goto B5c56f1;
case 0x5c56f3:c.instructions+=2;goto B5c56f3;
case 0x5c56f4:c.instructions+=1;goto B5c56f4;
case 0x5c56fa:goto L5c56fa;
case 0x5c5700:c.instructions+=6;goto B5c5700;
case 0x5c570a:c.instructions+=5;goto B5c570a;
case 0x5c570d:c.instructions+=4;goto B5c570d;
case 0x5c570f:c.instructions+=3;goto B5c570f;
case 0x5c5711:c.instructions+=2;goto B5c5711;
case 0x5c5712:c.instructions+=1;goto B5c5712;
case 0x5c5718:goto L5c5718;
case 0x5c571d:c.instructions+=8;goto B5c571d;
case 0x5c571f:c.instructions+=7;goto B5c571f;
case 0x5c5721:c.instructions+=6;goto B5c5721;
case 0x5c5725:c.instructions+=5;goto B5c5725;
case 0x5c5726:c.instructions+=4;goto B5c5726;
case 0x5c5728:c.instructions+=3;goto B5c5728;
case 0x5c572a:c.instructions+=2;goto B5c572a;
case 0x5c572b:c.instructions+=1;goto B5c572b;
case 0x5c5731:goto L5c5731;
case 0x5c5737:c.instructions+=4;goto B5c5737;
case 0x5c573a:c.instructions+=3;goto B5c573a;
case 0x5c573c:c.instructions+=2;goto B5c573c;
case 0x5c573d:c.instructions+=1;goto B5c573d;
case 0x5c5743:goto L5c5743;
case 0x5c5749:c.instructions+=1;goto B5c5749;
case 0x5c5750:goto L5c5750;
case 0x5c5752:c.instructions+=3;goto B5c5752;
case 0x5c5754:c.instructions+=2;goto B5c5754;
case 0x5c5759:c.instructions+=1;goto B5c5759;
case 0x5c575e:goto L5c575e;
case 0x5c5761:c.instructions+=2;goto B5c5761;
case 0x5c5762:c.instructions+=1;goto B5c5762;
case 0x5c5767:goto L5c5767;
case 0x5c576a:c.instructions+=2;goto B5c576a;
case 0x5c576c:c.instructions+=1;goto B5c576c;
case 0x5c576e:goto L5c576e;
case 0x5c576f:c.instructions+=1;goto B5c576f;
case 0x5c5774:goto L5c5774;
case 0x5c5777:goto L5c5777;
case 0x5c577c:c.instructions+=5;goto B5c577c;
case 0x5c5786:c.instructions+=4;goto B5c5786;
case 0x5c5789:c.instructions+=3;goto B5c5789;
case 0x5c578b:c.instructions+=2;goto B5c578b;
case 0x5c578c:c.instructions+=1;goto B5c578c;
case 0x5c5792:goto L5c5792;
case 0x5c5798:c.instructions+=5;goto B5c5798;
case 0x5c579b:c.instructions+=4;goto B5c579b;
case 0x5c579d:c.instructions+=3;goto B5c579d;
case 0x5c579f:c.instructions+=2;goto B5c579f;
case 0x5c57a0:c.instructions+=1;goto B5c57a0;
case 0x5c57a6:goto L5c57a6;
case 0x5c57aa:c.instructions+=9;goto B5c57aa;
case 0x5c57af:c.instructions+=8;goto B5c57af;
case 0x5c57b1:c.instructions+=7;goto B5c57b1;
case 0x5c57b3:c.instructions+=6;goto B5c57b3;
case 0x5c57b4:c.instructions+=5;goto B5c57b4;
case 0x5c57b8:c.instructions+=4;goto B5c57b8;
case 0x5c57b9:c.instructions+=3;goto B5c57b9;
case 0x5c57bb:c.instructions+=2;goto B5c57bb;
case 0x5c57bc:c.instructions+=1;goto B5c57bc;
case 0x5c57c2:goto L5c57c2;
case 0x5c57c8:c.instructions+=4;goto B5c57c8;
case 0x5c57cb:c.instructions+=3;goto B5c57cb;
case 0x5c57cd:c.instructions+=2;goto B5c57cd;
case 0x5c57ce:c.instructions+=1;goto B5c57ce;
case 0x5c57d4:goto L5c57d4;
case 0x5c57e0:goto L5c57e0;
case 0x5c57e1:c.instructions+=13;goto B5c57e1;
case 0x5c57e2:c.instructions+=12;goto B5c57e2;
case 0x5c57e3:c.instructions+=11;goto B5c57e3;
case 0x5c57e9:c.instructions+=10;goto B5c57e9;
case 0x5c57eb:c.instructions+=9;goto B5c57eb;
case 0x5c57ec:c.instructions+=8;goto B5c57ec;
case 0x5c57ee:c.instructions+=7;goto B5c57ee;
case 0x5c57f0:c.instructions+=6;goto B5c57f0;
case 0x5c57f2:c.instructions+=5;goto B5c57f2;
case 0x5c57f4:c.instructions+=4;goto B5c57f4;
case 0x5c57f5:c.instructions+=3;goto B5c57f5;
case 0x5c57f7:c.instructions+=2;goto B5c57f7;
case 0x5c57f8:c.instructions+=1;goto B5c57f8;
case 0x5c57fe:goto L5c57fe;
case 0x5c5801:c.instructions+=4;goto B5c5801;
case 0x5c5803:c.instructions+=3;goto B5c5803;
case 0x5c5804:c.instructions+=2;goto B5c5804;
case 0x5c5805:c.instructions+=1;goto B5c5805;
case 0x5c580b:goto L5c580b;
case 0x5c580d:c.instructions+=4;goto B5c580d;
case 0x5c580f:c.instructions+=3;goto B5c580f;
case 0x5c5811:c.instructions+=2;goto B5c5811;
case 0x5c5812:c.instructions+=1;goto B5c5812;
case 0x5c5818:goto L5c5818;
case 0x5c581d:c.instructions+=5;goto B5c581d;
case 0x5c581f:c.instructions+=4;goto B5c581f;
case 0x5c5821:c.instructions+=3;goto B5c5821;
case 0x5c5826:c.instructions+=2;goto B5c5826;
case 0x5c5827:c.instructions+=1;goto B5c5827;
case 0x5c582d:goto L5c582d;
case 0x5c5830:c.instructions+=7;goto B5c5830;
case 0x5c5833:c.instructions+=6;goto B5c5833;
case 0x5c5836:c.instructions+=5;goto B5c5836;
case 0x5c5839:c.instructions+=4;goto B5c5839;
case 0x5c583b:c.instructions+=3;goto B5c583b;
case 0x5c583d:c.instructions+=2;goto B5c583d;
case 0x5c583f:c.instructions+=1;goto B5c583f;
case 0x5c5841:goto L5c5841;
case 0x5c5846:c.instructions+=4;goto B5c5846;
case 0x5c5849:c.instructions+=3;goto B5c5849;
case 0x5c584b:c.instructions+=2;goto B5c584b;
case 0x5c584c:c.instructions+=1;goto B5c584c;
case 0x5c5852:goto L5c5852;
case 0x5c5858:c.instructions+=5;goto B5c5858;
case 0x5c585b:c.instructions+=4;goto B5c585b;
case 0x5c585d:c.instructions+=3;goto B5c585d;
case 0x5c585f:c.instructions+=2;goto B5c585f;
case 0x5c5860:c.instructions+=1;goto B5c5860;
case 0x5c5866:goto L5c5866;
case 0x5c5869:c.instructions+=10;goto B5c5869;
case 0x5c586c:c.instructions+=9;goto B5c586c;
case 0x5c586e:c.instructions+=8;goto B5c586e;
case 0x5c586f:c.instructions+=7;goto B5c586f;
case 0x5c5870:c.instructions+=6;goto B5c5870;
case 0x5c5871:c.instructions+=5;goto B5c5871;
case 0x5c5872:c.instructions+=4;goto B5c5872;
case 0x5c5874:c.instructions+=3;goto B5c5874;
case 0x5c5876:c.instructions+=2;goto B5c5876;
case 0x5c5877:c.instructions+=1;goto B5c5877;
case 0x5c587d:goto L5c587d;
case 0x5c5883:c.instructions+=4;goto B5c5883;
case 0x5c5886:c.instructions+=3;goto B5c5886;
case 0x5c5888:c.instructions+=2;goto B5c5888;
case 0x5c5889:c.instructions+=1;goto B5c5889;
case 0x5c588f:goto L5c588f;
case 0x5c5896:c.instructions+=5;goto B5c5896;
case 0x5c5897:c.instructions+=4;goto B5c5897;
case 0x5c5898:c.instructions+=3;goto B5c5898;
case 0x5c5899:c.instructions+=2;goto B5c5899;
case 0x5c589a:c.instructions+=1;goto B5c589a;
case 0x5c58a0:goto L5c58a0;
case 0x5c58a3:c.instructions+=6;goto B5c58a3;
case 0x5c58a4:c.instructions+=5;goto B5c58a4;
case 0x5c58a7:c.instructions+=4;goto B5c58a7;
case 0x5c58a9:c.instructions+=3;goto B5c58a9;
case 0x5c58ab:c.instructions+=2;goto B5c58ab;
case 0x5c58ac:c.instructions+=1;goto B5c58ac;
case 0x5c58ae:goto L5c58ae;
case 0x5c58b2:c.instructions+=2;goto B5c58b2;
case 0x5c58b5:c.instructions+=1;goto B5c58b5;
case 0x5c58b6:goto L5c58b6;
case 0x5c58b8:c.instructions+=10;goto B5c58b8;
case 0x5c58bb:c.instructions+=9;goto B5c58bb;
case 0x5c58bd:c.instructions+=8;goto B5c58bd;
case 0x5c58bf:c.instructions+=7;goto B5c58bf;
case 0x5c58c1:c.instructions+=6;goto B5c58c1;
case 0x5c58c3:c.instructions+=5;goto B5c58c3;
case 0x5c58c6:c.instructions+=4;goto B5c58c6;
case 0x5c58c7:c.instructions+=3;goto B5c58c7;
case 0x5c58ca:c.instructions+=2;goto B5c58ca;
case 0x5c58cc:c.instructions+=1;goto B5c58cc;
case 0x5c58ce:goto L5c58ce;
case 0x5c58cf:goto L5c58cf;
case 0x5c58d2:c.instructions+=3;goto B5c58d2;
case 0x5c58d4:c.instructions+=2;goto B5c58d4;
case 0x5c58d9:c.instructions+=1;goto B5c58d9;
case 0x5c58e0:goto L5c58e0;
case 0x5c58e2:c.instructions+=2;goto B5c58e2;
case 0x5c58e4:c.instructions+=1;goto B5c58e4;
case 0x5c58e6:goto L5c58e6;
case 0x5c58e8:c.instructions+=1;goto B5c58e8;
case 0x5c58ea:goto L5c58ea;
case 0x5c58ed:c.instructions+=3;goto B5c58ed;
case 0x5c58ee:c.instructions+=2;goto B5c58ee;
case 0x5c58f3:c.instructions+=1;goto B5c58f3;
case 0x5c58f5:goto L5c58f5;
case 0x5c58f8:c.instructions+=6;goto B5c58f8;
case 0x5c58ff:c.instructions+=5;goto B5c58ff;
case 0x5c5900:c.instructions+=4;goto B5c5900;
case 0x5c5903:c.instructions+=3;goto B5c5903;
case 0x5c5905:c.instructions+=2;goto B5c5905;
case 0x5c5906:c.instructions+=1;goto B5c5906;
case 0x5c5909:goto L5c5909;
case 0x5c590c:c.instructions+=7;goto B5c590c;
case 0x5c5913:c.instructions+=6;goto B5c5913;
case 0x5c591a:c.instructions+=5;goto B5c591a;
case 0x5c591b:c.instructions+=4;goto B5c591b;
case 0x5c591e:c.instructions+=3;goto B5c591e;
case 0x5c5920:c.instructions+=2;goto B5c5920;
case 0x5c5921:c.instructions+=1;goto B5c5921;
case 0x5c5930:goto L5c5930;
case 0x5c5933:c.instructions+=9;goto B5c5933;
case 0x5c5934:c.instructions+=8;goto B5c5934;
case 0x5c5935:c.instructions+=7;goto B5c5935;
case 0x5c5939:c.instructions+=6;goto B5c5939;
case 0x5c593c:c.instructions+=5;goto B5c593c;
case 0x5c593e:c.instructions+=4;goto B5c593e;
case 0x5c5940:c.instructions+=3;goto B5c5940;
case 0x5c5944:c.instructions+=2;goto B5c5944;
case 0x5c5948:c.instructions+=1;goto B5c5948;
case 0x5c594e:goto L5c594e;
case 0x5c594f:c.instructions+=9;goto B5c594f;
case 0x5c5953:c.instructions+=8;goto B5c5953;
case 0x5c5959:c.instructions+=7;goto B5c5959;
case 0x5c595a:c.instructions+=6;goto B5c595a;
case 0x5c595c:c.instructions+=5;goto B5c595c;
case 0x5c595f:c.instructions+=4;goto B5c595f;
case 0x5c5962:c.instructions+=3;goto B5c5962;
case 0x5c5966:c.instructions+=2;goto B5c5966;
case 0x5c596a:c.instructions+=1;goto B5c596a;
case 0x5c596c:goto L5c596c;
case 0x5c5972:c.instructions+=1;goto B5c5972;
case 0x5c5974:goto L5c5974;
case 0x5c597a:c.instructions+=1;goto B5c597a;
case 0x5c597c:goto L5c597c;
case 0x5c5983:c.instructions+=1;goto B5c5983;
case 0x5c5985:goto L5c5985;
case 0x5c598c:c.instructions+=1;goto B5c598c;
case 0x5c598e:goto L5c598e;
case 0x5c5994:c.instructions+=1;goto B5c5994;
case 0x5c5996:goto L5c5996;
case 0x5c599d:goto L5c599d;
case 0x5c59a2:c.instructions+=3;goto B5c59a2;
case 0x5c59a4:c.instructions+=2;goto B5c59a4;
case 0x5c59a8:c.instructions+=1;goto B5c59a8;
case 0x5c59aa:goto L5c59aa;
case 0x5c59b0:c.instructions+=2;goto B5c59b0;
case 0x5c59b2:c.instructions+=1;goto B5c59b2;
case 0x5c59b4:goto L5c59b4;
case 0x5c59bc:goto L5c59bc;
case 0x5c59bf:c.instructions+=3;goto B5c59bf;
case 0x5c59c1:c.instructions+=2;goto B5c59c1;
case 0x5c59c5:c.instructions+=1;goto B5c59c5;
case 0x5c59c7:goto L5c59c7;
case 0x5c59ca:c.instructions+=3;goto B5c59ca;
case 0x5c59cd:c.instructions+=2;goto B5c59cd;
case 0x5c59d0:c.instructions+=1;goto B5c59d0;
case 0x5c59d2:goto L5c59d2;
case 0x5c59d9:c.instructions+=1;goto B5c59d9;
case 0x5c59dd:goto L5c59dd;
case 0x5c59e0:goto L5c59e0;
case 0x5c59e3:c.instructions+=1;goto B5c59e3;
case 0x5c59e5:goto L5c59e5;
case 0x5c59e7:c.instructions+=1;goto B5c59e7;
case 0x5c59ec:goto L5c59ec;
case 0x5c59f3:c.instructions+=1;goto B5c59f3;
case 0x5c59f5:goto L5c59f5;
case 0x5c59fa:goto L5c59fa;
case 0x5c59fc:c.instructions+=1;goto B5c59fc;
case 0x5c59fe:goto L5c59fe;
case 0x5c5a04:c.instructions+=1;goto B5c5a04;
case 0x5c5a06:goto L5c5a06;
case 0x5c5a0b:c.instructions+=1;goto B5c5a0b;
case 0x5c5a0f:goto L5c5a0f;
case 0x5c5a13:c.instructions+=2;goto B5c5a13;
case 0x5c5a16:c.instructions+=1;goto B5c5a16;
case 0x5c5a1c:goto L5c5a1c;
case 0x5c5a22:c.instructions+=2;goto B5c5a22;
case 0x5c5a24:c.instructions+=1;goto B5c5a24;
case 0x5c5a26:goto L5c5a26;
case 0x5c5a2a:c.instructions+=1;goto B5c5a2a;
case 0x5c5a2c:goto L5c5a2c;
case 0x5c5a32:c.instructions+=1;goto B5c5a32;
case 0x5c5a36:goto L5c5a36;
case 0x5c5a39:c.instructions+=2;goto B5c5a39;
case 0x5c5a3d:c.instructions+=1;goto B5c5a3d;
case 0x5c5a43:goto L5c5a43;
case 0x5c5a45:c.instructions+=5;goto B5c5a45;
case 0x5c5a48:c.instructions+=4;goto B5c5a48;
case 0x5c5a4c:c.instructions+=3;goto B5c5a4c;
case 0x5c5a50:c.instructions+=2;goto B5c5a50;
case 0x5c5a54:c.instructions+=1;goto B5c5a54;
case 0x5c5a56:goto L5c5a56;
case 0x5c5a5a:c.instructions+=1;goto B5c5a5a;
case 0x5c5a60:goto L5c5a60;
case 0x5c5a63:c.instructions+=3;goto B5c5a63;
case 0x5c5a67:c.instructions+=2;goto B5c5a67;
case 0x5c5a69:c.instructions+=1;goto B5c5a69;
case 0x5c5a6b:goto L5c5a6b;
case 0x5c5a6f:c.instructions+=1;goto B5c5a6f;
case 0x5c5a71:goto L5c5a71;
case 0x5c5a75:c.instructions+=6;goto B5c5a75;
case 0x5c5a76:c.instructions+=5;goto B5c5a76;
case 0x5c5a79:c.instructions+=4;goto B5c5a79;
case 0x5c5a7a:c.instructions+=3;goto B5c5a7a;
case 0x5c5a7e:c.instructions+=2;goto B5c5a7e;
case 0x5c5a7f:c.instructions+=1;goto B5c5a7f;
case 0x5c5a84:goto L5c5a84;
case 0x5c5a86:c.instructions+=1;goto B5c5a86;
case 0x5c5a8c:goto L5c5a8c;
case 0x5c5a90:c.instructions+=6;goto B5c5a90;
case 0x5c5a94:c.instructions+=5;goto B5c5a94;
case 0x5c5a97:c.instructions+=4;goto B5c5a97;
case 0x5c5a9b:c.instructions+=3;goto B5c5a9b;
case 0x5c5a9e:c.instructions+=2;goto B5c5a9e;
case 0x5c5aa4:c.instructions+=1;goto B5c5aa4;
case 0x5c5aaa:goto L5c5aaa;
case 0x5c5aad:c.instructions+=2;goto B5c5aad;
case 0x5c5aaf:c.instructions+=1;goto B5c5aaf;
case 0x5c5ab1:goto L5c5ab1;
case 0x5c5ab5:c.instructions+=4;goto B5c5ab5;
case 0x5c5ab8:c.instructions+=3;goto B5c5ab8;
case 0x5c5abb:c.instructions+=2;goto B5c5abb;
case 0x5c5abf:c.instructions+=1;goto B5c5abf;
case 0x5c5ac1:goto L5c5ac1;
case 0x5c5ac6:goto L5c5ac6;
case 0x5c5ac9:c.instructions+=3;goto B5c5ac9;
case 0x5c5acc:c.instructions+=2;goto B5c5acc;
case 0x5c5ad0:c.instructions+=1;goto B5c5ad0;
case 0x5c5ad2:goto L5c5ad2;
case 0x5c5ad5:c.instructions+=2;goto B5c5ad5;
case 0x5c5ad8:c.instructions+=1;goto B5c5ad8;
case 0x5c5ada:goto L5c5ada;
case 0x5c5adc:c.instructions+=1;goto B5c5adc;
case 0x5c5ade:goto L5c5ade;
case 0x5c5ae4:goto L5c5ae4;
case 0x5c5ae8:c.instructions+=2;goto B5c5ae8;
case 0x5c5aea:c.instructions+=1;goto B5c5aea;
case 0x5c5aec:goto L5c5aec;
case 0x5c5aef:c.instructions+=1;goto B5c5aef;
case 0x5c5af1:goto L5c5af1;
case 0x5c5af5:c.instructions+=2;goto B5c5af5;
case 0x5c5af8:c.instructions+=1;goto B5c5af8;
case 0x5c5afa:goto L5c5afa;
case 0x5c5afd:c.instructions+=1;goto B5c5afd;
case 0x5c5aff:goto L5c5aff;
case 0x5c5b02:c.instructions+=2;goto B5c5b02;
case 0x5c5b05:c.instructions+=1;goto B5c5b05;
case 0x5c5b07:goto L5c5b07;
case 0x5c5b0e:goto L5c5b0e;
case 0x5c5b14:c.instructions+=1;goto B5c5b14;
case 0x5c5b16:goto L5c5b16;
case 0x5c5b1c:c.instructions+=1;goto B5c5b1c;
case 0x5c5b1e:goto L5c5b1e;
case 0x5c5b21:c.instructions+=1;goto B5c5b21;
case 0x5c5b23:goto L5c5b23;
case 0x5c5b25:c.instructions+=1;goto B5c5b25;
case 0x5c5b27:goto L5c5b27;
case 0x5c5b2a:c.instructions+=2;goto B5c5b2a;
case 0x5c5b2c:c.instructions+=1;goto B5c5b2c;
case 0x5c5b2e:goto L5c5b2e;
case 0x5c5b31:c.instructions+=1;goto B5c5b31;
case 0x5c5b33:goto L5c5b33;
case 0x5c5b36:c.instructions+=1;goto B5c5b36;
case 0x5c5b38:goto L5c5b38;
case 0x5c5b3b:c.instructions+=2;goto B5c5b3b;
case 0x5c5b3e:c.instructions+=1;goto B5c5b3e;
case 0x5c5b40:goto L5c5b40;
case 0x5c5b41:c.instructions+=1;goto B5c5b41;
case 0x5c5b43:goto L5c5b43;
case 0x5c5b49:c.instructions+=1;goto B5c5b49;
case 0x5c5b4b:goto L5c5b4b;
case 0x5c5b51:c.instructions+=1;goto B5c5b51;
case 0x5c5b53:goto L5c5b53;
case 0x5c5b55:c.instructions+=1;goto B5c5b55;
case 0x5c5b57:goto L5c5b57;
case 0x5c5b5d:c.instructions+=1;goto B5c5b5d;
case 0x5c5b5f:goto L5c5b5f;
case 0x5c5b65:goto L5c5b65;
case 0x5c5b69:c.instructions+=1;goto B5c5b69;
case 0x5c5b6b:goto L5c5b6b;
case 0x5c5b6d:c.instructions+=1;goto B5c5b6d;
case 0x5c5b6f:goto L5c5b6f;
case 0x5c5b73:c.instructions+=1;goto B5c5b73;
case 0x5c5b76:goto L5c5b76;
case 0x5c5b79:c.instructions+=2;goto B5c5b79;
case 0x5c5b7f:c.instructions+=1;goto B5c5b7f;
case 0x5c5b81:goto L5c5b81;
case 0x5c5b87:c.instructions+=1;goto B5c5b87;
case 0x5c5b89:goto L5c5b89;
case 0x5c5b8f:goto L5c5b8f;
case 0x5c5b93:c.instructions+=13;goto B5c5b93;
case 0x5c5b94:c.instructions+=12;goto B5c5b94;
case 0x5c5b98:c.instructions+=11;goto B5c5b98;
case 0x5c5b99:c.instructions+=10;goto B5c5b99;
case 0x5c5b9d:c.instructions+=9;goto B5c5b9d;
case 0x5c5b9e:c.instructions+=8;goto B5c5b9e;
case 0x5c5b9f:c.instructions+=7;goto B5c5b9f;
case 0x5c5ba0:c.instructions+=6;goto B5c5ba0;
case 0x5c5ba1:c.instructions+=5;goto B5c5ba1;
case 0x5c5ba4:c.instructions+=4;goto B5c5ba4;
case 0x5c5ba5:c.instructions+=3;goto B5c5ba5;
case 0x5c5ba6:c.instructions+=2;goto B5c5ba6;
case 0x5c5ba7:c.instructions+=1;goto B5c5ba7;
case 0x5c5bac:goto L5c5bac;
case 0x5c5bb0:c.instructions+=1;goto B5c5bb0;
case 0x5c5bb3:goto L5c5bb3;
case 0x5c5bb7:goto L5c5bb7;
case 0x5c5bbb:c.instructions+=8;goto B5c5bbb;
case 0x5c5bbf:c.instructions+=7;goto B5c5bbf;
case 0x5c5bc2:c.instructions+=6;goto B5c5bc2;
case 0x5c5bc3:c.instructions+=5;goto B5c5bc3;
case 0x5c5bc6:c.instructions+=4;goto B5c5bc6;
case 0x5c5bc8:c.instructions+=3;goto B5c5bc8;
case 0x5c5bcc:c.instructions+=2;goto B5c5bcc;
case 0x5c5bd0:c.instructions+=1;goto B5c5bd0;
case 0x5c5bd6:goto L5c5bd6;
case 0x5c5bd8:c.instructions+=1;goto B5c5bd8;
case 0x5c5bdd:goto L5c5bdd;
case 0x5c5bde:c.instructions+=1;goto B5c5bde;
case 0x5c5bdf:goto L5c5bdf;
case 0x5c5be0:c.instructions+=3;goto B5c5be0;
case 0x5c5be1:c.instructions+=2;goto B5c5be1;
case 0x5c5be4:c.instructions+=1;goto B5c5be4;
case 0x5c5c00:goto L5c5c00;
case 0x5c5c06:c.instructions+=10;goto B5c5c06;
case 0x5c5c07:c.instructions+=9;goto B5c5c07;
case 0x5c5c08:c.instructions+=8;goto B5c5c08;
case 0x5c5c09:c.instructions+=7;goto B5c5c09;
case 0x5c5c10:c.instructions+=6;goto B5c5c10;
case 0x5c5c12:c.instructions+=5;goto B5c5c12;
case 0x5c5c13:c.instructions+=4;goto B5c5c13;
case 0x5c5c1a:c.instructions+=3;goto B5c5c1a;
case 0x5c5c1b:c.instructions+=2;goto B5c5c1b;
case 0x5c5c1c:c.instructions+=1;goto B5c5c1c;
case 0x5c5c1f:goto L5c5c1f;
case 0x5c5c24:c.instructions+=6;goto B5c5c24;
case 0x5c5c26:c.instructions+=5;goto B5c5c26;
case 0x5c5c27:c.instructions+=4;goto B5c5c27;
case 0x5c5c29:c.instructions+=3;goto B5c5c29;
case 0x5c5c2a:c.instructions+=2;goto B5c5c2a;
case 0x5c5c2b:c.instructions+=1;goto B5c5c2b;
case 0x5c5c31:goto L5c5c31;
case 0x5c5c36:c.instructions+=4;goto B5c5c36;
case 0x5c5c38:c.instructions+=3;goto B5c5c38;
case 0x5c5c39:c.instructions+=2;goto B5c5c39;
case 0x5c5c3a:c.instructions+=1;goto B5c5c3a;
case 0x5c5c40:goto L5c5c40;
case 0x5c5c47:c.instructions+=19;goto B5c5c47;
case 0x5c5c4a:c.instructions+=18;goto B5c5c4a;
case 0x5c5c4e:c.instructions+=17;goto B5c5c4e;
case 0x5c5c52:c.instructions+=16;goto B5c5c52;
case 0x5c5c59:c.instructions+=15;goto B5c5c59;
case 0x5c5c60:c.instructions+=14;goto B5c5c60;
case 0x5c5c62:c.instructions+=13;goto B5c5c62;
case 0x5c5c6a:c.instructions+=12;goto B5c5c6a;
case 0x5c5c72:c.instructions+=11;goto B5c5c72;
case 0x5c5c76:c.instructions+=10;goto B5c5c76;
case 0x5c5c7e:c.instructions+=9;goto B5c5c7e;
case 0x5c5c86:c.instructions+=8;goto B5c5c86;
case 0x5c5c8a:c.instructions+=7;goto B5c5c8a;
case 0x5c5c95:c.instructions+=6;goto B5c5c95;
case 0x5c5ca0:c.instructions+=5;goto B5c5ca0;
case 0x5c5ca7:c.instructions+=4;goto B5c5ca7;
case 0x5c5cb2:c.instructions+=3;goto B5c5cb2;
case 0x5c5cbd:c.instructions+=2;goto B5c5cbd;
case 0x5c5cc4:c.instructions+=1;goto B5c5cc4;
case 0x5c5cc8:goto L5c5cc8;
case 0x5c5ccc:c.instructions+=26;goto B5c5ccc;
case 0x5c5ccd:c.instructions+=25;goto B5c5ccd;
case 0x5c5cd0:c.instructions+=24;goto B5c5cd0;
case 0x5c5cd4:c.instructions+=23;goto B5c5cd4;
case 0x5c5cd6:c.instructions+=22;goto B5c5cd6;
case 0x5c5cd8:c.instructions+=21;goto B5c5cd8;
case 0x5c5cdc:c.instructions+=20;goto B5c5cdc;
case 0x5c5ce0:c.instructions+=19;goto B5c5ce0;
case 0x5c5ce3:c.instructions+=18;goto B5c5ce3;
case 0x5c5ce5:c.instructions+=17;goto B5c5ce5;
case 0x5c5ce9:c.instructions+=16;goto B5c5ce9;
case 0x5c5ced:c.instructions+=15;goto B5c5ced;
case 0x5c5cf0:c.instructions+=14;goto B5c5cf0;
case 0x5c5cf6:c.instructions+=13;goto B5c5cf6;
case 0x5c5cfa:c.instructions+=12;goto B5c5cfa;
case 0x5c5cfc:c.instructions+=11;goto B5c5cfc;
case 0x5c5d00:c.instructions+=10;goto B5c5d00;
case 0x5c5d07:c.instructions+=9;goto B5c5d07;
case 0x5c5d0b:c.instructions+=8;goto B5c5d0b;
case 0x5c5d0f:c.instructions+=7;goto B5c5d0f;
case 0x5c5d12:c.instructions+=6;goto B5c5d12;
case 0x5c5d18:c.instructions+=5;goto B5c5d18;
case 0x5c5d1f:c.instructions+=4;goto B5c5d1f;
case 0x5c5d21:c.instructions+=3;goto B5c5d21;
case 0x5c5d28:c.instructions+=2;goto B5c5d28;
case 0x5c5d2f:c.instructions+=1;goto B5c5d2f;
case 0x5c5d31:goto L5c5d31;
case 0x5c5d37:c.instructions+=4;goto B5c5d37;
case 0x5c5d3d:c.instructions+=3;goto B5c5d3d;
case 0x5c5d3f:c.instructions+=2;goto B5c5d3f;
case 0x5c5d41:c.instructions+=1;goto B5c5d41;
case 0x5c5d44:goto L5c5d44;
case 0x5c5d47:c.instructions+=5;goto B5c5d47;
case 0x5c5d4c:c.instructions+=4;goto B5c5d4c;
case 0x5c5d4e:c.instructions+=3;goto B5c5d4e;
case 0x5c5d4f:c.instructions+=2;goto B5c5d4f;
case 0x5c5d50:c.instructions+=1;goto B5c5d50;
case 0x5c5d56:goto L5c5d56;
case 0x5c5d59:c.instructions+=6;goto B5c5d59;
case 0x5c5d5b:c.instructions+=5;goto B5c5d5b;
case 0x5c5d5c:c.instructions+=4;goto B5c5d5c;
case 0x5c5d60:c.instructions+=3;goto B5c5d60;
case 0x5c5d61:c.instructions+=2;goto B5c5d61;
case 0x5c5d62:c.instructions+=1;goto B5c5d62;
case 0x5c5d68:goto L5c5d68;
case 0x5c5d6f:c.instructions+=6;goto B5c5d6f;
case 0x5c5d71:c.instructions+=5;goto B5c5d71;
case 0x5c5d79:c.instructions+=4;goto B5c5d79;
case 0x5c5d81:c.instructions+=3;goto B5c5d81;
case 0x5c5d89:c.instructions+=2;goto B5c5d89;
case 0x5c5d91:c.instructions+=1;goto B5c5d91;
case 0x5c5d93:goto L5c5d93;
case 0x5c5d9a:c.instructions+=1;goto B5c5d9a;
case 0x5c5da1:goto L5c5da1;
case 0x5c5da4:c.instructions+=11;goto B5c5da4;
case 0x5c5da6:c.instructions+=10;goto B5c5da6;
case 0x5c5dad:c.instructions+=9;goto B5c5dad;
case 0x5c5db1:c.instructions+=8;goto B5c5db1;
case 0x5c5db2:c.instructions+=7;goto B5c5db2;
case 0x5c5db5:c.instructions+=6;goto B5c5db5;
case 0x5c5db8:c.instructions+=5;goto B5c5db8;
case 0x5c5dbc:c.instructions+=4;goto B5c5dbc;
case 0x5c5dbd:c.instructions+=3;goto B5c5dbd;
case 0x5c5dc0:c.instructions+=2;goto B5c5dc0;
case 0x5c5dc1:c.instructions+=1;goto B5c5dc1;
case 0x5c5dc7:goto L5c5dc7;
case 0x5c5dc9:c.instructions+=12;goto B5c5dc9;
case 0x5c5dcc:c.instructions+=11;goto B5c5dcc;
case 0x5c5dcf:c.instructions+=10;goto B5c5dcf;
case 0x5c5dd2:c.instructions+=9;goto B5c5dd2;
case 0x5c5dd5:c.instructions+=8;goto B5c5dd5;
case 0x5c5dd8:c.instructions+=7;goto B5c5dd8;
case 0x5c5ddf:c.instructions+=6;goto B5c5ddf;
case 0x5c5de1:c.instructions+=5;goto B5c5de1;
case 0x5c5de4:c.instructions+=4;goto B5c5de4;
case 0x5c5de5:c.instructions+=3;goto B5c5de5;
case 0x5c5de8:c.instructions+=2;goto B5c5de8;
case 0x5c5dea:c.instructions+=1;goto B5c5dea;
case 0x5c5dec:goto L5c5dec;
case 0x5c5dee:c.instructions+=1;goto B5c5dee;
case 0x5c5df0:goto L5c5df0;
case 0x5c5df3:c.instructions+=1;goto B5c5df3;
case 0x5c5df5:goto L5c5df5;
case 0x5c5df7:c.instructions+=2;goto B5c5df7;
case 0x5c5dfa:c.instructions+=1;goto B5c5dfa;
case 0x5c5e01:goto L5c5e01;
case 0x5c5e04:c.instructions+=10;goto B5c5e04;
case 0x5c5e06:c.instructions+=9;goto B5c5e06;
case 0x5c5e0a:c.instructions+=8;goto B5c5e0a;
case 0x5c5e0d:c.instructions+=7;goto B5c5e0d;
case 0x5c5e10:c.instructions+=6;goto B5c5e10;
case 0x5c5e14:c.instructions+=5;goto B5c5e14;
case 0x5c5e17:c.instructions+=4;goto B5c5e17;
case 0x5c5e18:c.instructions+=3;goto B5c5e18;
case 0x5c5e19:c.instructions+=2;goto B5c5e19;
case 0x5c5e1a:c.instructions+=1;goto B5c5e1a;
case 0x5c5e20:goto L5c5e20;
case 0x5c5e23:c.instructions+=7;goto B5c5e23;
case 0x5c5e25:c.instructions+=6;goto B5c5e25;
case 0x5c5e28:c.instructions+=5;goto B5c5e28;
case 0x5c5e2b:c.instructions+=4;goto B5c5e2b;
case 0x5c5e2c:c.instructions+=3;goto B5c5e2c;
case 0x5c5e2f:c.instructions+=2;goto B5c5e2f;
case 0x5c5e32:c.instructions+=1;goto B5c5e32;
case 0x5c5e34:goto L5c5e34;
case 0x5c5e37:c.instructions+=9;goto B5c5e37;
case 0x5c5e39:c.instructions+=8;goto B5c5e39;
case 0x5c5e3b:c.instructions+=7;goto B5c5e3b;
case 0x5c5e42:c.instructions+=6;goto B5c5e42;
case 0x5c5e43:c.instructions+=5;goto B5c5e43;
case 0x5c5e46:c.instructions+=4;goto B5c5e46;
case 0x5c5e4c:c.instructions+=3;goto B5c5e4c;
case 0x5c5e4d:c.instructions+=2;goto B5c5e4d;
case 0x5c5e4e:c.instructions+=1;goto B5c5e4e;
case 0x5c5e54:goto L5c5e54;
case 0x5c5e56:c.instructions+=3;goto B5c5e56;
case 0x5c5e58:c.instructions+=2;goto B5c5e58;
case 0x5c5e59:c.instructions+=1;goto B5c5e59;
case 0x5c5e5e:goto L5c5e5e;
case 0x5c5e5f:c.instructions+=2;goto B5c5e5f;
case 0x5c5e60:c.instructions+=1;goto B5c5e60;
case 0x5c5e65:goto L5c5e65;
case 0x5c5e68:c.instructions+=1;goto B5c5e68;
case 0x5c5e6d:goto L5c5e6d;
case 0x5c5e73:c.instructions+=6;goto B5c5e73;
case 0x5c5e78:c.instructions+=5;goto B5c5e78;
case 0x5c5e79:c.instructions+=4;goto B5c5e79;
case 0x5c5e7f:c.instructions+=3;goto B5c5e7f;
case 0x5c5e81:c.instructions+=2;goto B5c5e81;
case 0x5c5e82:c.instructions+=1;goto B5c5e82;
case 0x5c5e88:goto L5c5e88;
case 0x5c5e8d:c.instructions+=4;goto B5c5e8d;
case 0x5c5e90:c.instructions+=3;goto B5c5e90;
case 0x5c5e92:c.instructions+=2;goto B5c5e92;
case 0x5c5e93:c.instructions+=1;goto B5c5e93;
case 0x5c5e99:goto L5c5e99;
case 0x5c5ea0:c.instructions+=6;goto B5c5ea0;
case 0x5c5ea3:c.instructions+=5;goto B5c5ea3;
case 0x5c5ea5:c.instructions+=4;goto B5c5ea5;
case 0x5c5ea6:c.instructions+=3;goto B5c5ea6;
case 0x5c5ea7:c.instructions+=2;goto B5c5ea7;
case 0x5c5ea8:c.instructions+=1;goto B5c5ea8;
case 0x5c5eae:goto L5c5eae;
case 0x5c5eb3:c.instructions+=8;goto B5c5eb3;
case 0x5c5eb5:c.instructions+=7;goto B5c5eb5;
case 0x5c5eb7:c.instructions+=6;goto B5c5eb7;
case 0x5c5ebb:c.instructions+=5;goto B5c5ebb;
case 0x5c5ebc:c.instructions+=4;goto B5c5ebc;
case 0x5c5ebe:c.instructions+=3;goto B5c5ebe;
case 0x5c5ec0:c.instructions+=2;goto B5c5ec0;
case 0x5c5ec1:c.instructions+=1;goto B5c5ec1;
case 0x5c5ec7:goto L5c5ec7;
case 0x5c5eca:c.instructions+=3;goto B5c5eca;
case 0x5c5ecc:c.instructions+=2;goto B5c5ecc;
case 0x5c5ecd:c.instructions+=1;goto B5c5ecd;
case 0x5c5ed3:goto L5c5ed3;
case 0x5c5ed5:c.instructions+=2;goto B5c5ed5;
case 0x5c5ed7:c.instructions+=1;goto B5c5ed7;
case 0x5c5eda:goto L5c5eda;
case 0x5c5edd:c.instructions+=3;goto B5c5edd;
case 0x5c5edf:c.instructions+=2;goto B5c5edf;
case 0x5c5ee0:c.instructions+=1;goto B5c5ee0;
case 0x5c5ee6:goto L5c5ee6;
case 0x5c5eec:c.instructions+=2;goto B5c5eec;
case 0x5c5ef2:c.instructions+=1;goto B5c5ef2;
case 0x5c5ef7:goto L5c5ef7;
case 0x5c5efa:c.instructions+=6;goto B5c5efa;
case 0x5c5eff:c.instructions+=5;goto B5c5eff;
case 0x5c5f01:c.instructions+=4;goto B5c5f01;
case 0x5c5f02:c.instructions+=3;goto B5c5f02;
case 0x5c5f03:c.instructions+=2;goto B5c5f03;
case 0x5c5f04:c.instructions+=1;goto B5c5f04;
case 0x5c5f0a:goto L5c5f0a;
case 0x5c5f0d:c.instructions+=5;goto B5c5f0d;
case 0x5c5f12:c.instructions+=4;goto B5c5f12;
case 0x5c5f14:c.instructions+=3;goto B5c5f14;
case 0x5c5f15:c.instructions+=2;goto B5c5f15;
case 0x5c5f16:c.instructions+=1;goto B5c5f16;
case 0x5c5f1c:goto L5c5f1c;
case 0x5c5f1f:c.instructions+=13;goto B5c5f1f;
case 0x5c5f22:c.instructions+=12;goto B5c5f22;
case 0x5c5f26:c.instructions+=11;goto B5c5f26;
case 0x5c5f2a:c.instructions+=10;goto B5c5f2a;
case 0x5c5f2e:c.instructions+=9;goto B5c5f2e;
case 0x5c5f32:c.instructions+=8;goto B5c5f32;
case 0x5c5f3a:c.instructions+=7;goto B5c5f3a;
case 0x5c5f3f:c.instructions+=6;goto B5c5f3f;
case 0x5c5f43:c.instructions+=5;goto B5c5f43;
case 0x5c5f44:c.instructions+=4;goto B5c5f44;
case 0x5c5f4c:c.instructions+=3;goto B5c5f4c;
case 0x5c5f4e:c.instructions+=2;goto B5c5f4e;
case 0x5c5f4f:c.instructions+=1;goto B5c5f4f;
case 0x5c5f55:goto L5c5f55;
case 0x5c5f56:c.instructions+=7;goto B5c5f56;
case 0x5c5f5c:c.instructions+=6;goto B5c5f5c;
case 0x5c5f5d:c.instructions+=5;goto B5c5f5d;
case 0x5c5f63:c.instructions+=4;goto B5c5f63;
case 0x5c5f64:c.instructions+=3;goto B5c5f64;
case 0x5c5f65:c.instructions+=2;goto B5c5f65;
case 0x5c5f6b:c.instructions+=1;goto B5c5f6b;
case 0x5c5f70:goto L5c5f70;
case 0x5c5f76:c.instructions+=9;goto B5c5f76;
case 0x5c5f77:c.instructions+=8;goto B5c5f77;
case 0x5c5f78:c.instructions+=7;goto B5c5f78;
case 0x5c5f7f:c.instructions+=6;goto B5c5f7f;
case 0x5c5f81:c.instructions+=5;goto B5c5f81;
case 0x5c5f82:c.instructions+=4;goto B5c5f82;
case 0x5c5f89:c.instructions+=3;goto B5c5f89;
case 0x5c5f8a:c.instructions+=2;goto B5c5f8a;
case 0x5c5f8b:c.instructions+=1;goto B5c5f8b;
case 0x5c5f8e:goto L5c5f8e;
case 0x5c5f93:c.instructions+=6;goto B5c5f93;
case 0x5c5f95:c.instructions+=5;goto B5c5f95;
case 0x5c5f96:c.instructions+=4;goto B5c5f96;
case 0x5c5f98:c.instructions+=3;goto B5c5f98;
case 0x5c5f99:c.instructions+=2;goto B5c5f99;
case 0x5c5f9a:c.instructions+=1;goto B5c5f9a;
case 0x5c5fa0:goto L5c5fa0;
case 0x5c5fa5:c.instructions+=4;goto B5c5fa5;
case 0x5c5fa7:c.instructions+=3;goto B5c5fa7;
case 0x5c5fa8:c.instructions+=2;goto B5c5fa8;
case 0x5c5fa9:c.instructions+=1;goto B5c5fa9;
case 0x5c5faf:goto L5c5faf;
case 0x5c5fb6:c.instructions+=13;goto B5c5fb6;
case 0x5c5fbd:c.instructions+=12;goto B5c5fbd;
case 0x5c5fc0:c.instructions+=11;goto B5c5fc0;
case 0x5c5fc2:c.instructions+=10;goto B5c5fc2;
case 0x5c5fca:c.instructions+=9;goto B5c5fca;
case 0x5c5fd2:c.instructions+=8;goto B5c5fd2;
case 0x5c5fd6:c.instructions+=7;goto B5c5fd6;
case 0x5c5fda:c.instructions+=6;goto B5c5fda;
case 0x5c5fe2:c.instructions+=5;goto B5c5fe2;
case 0x5c5fea:c.instructions+=4;goto B5c5fea;
case 0x5c5fee:c.instructions+=3;goto B5c5fee;
case 0x5c5ff2:c.instructions+=2;goto B5c5ff2;
case 0x5c5ffd:c.instructions+=1;goto B5c5ffd;
default:missing_instruction(c.pc);}
B5c5001:L5c5001:{c.instructions+=2;NFSU2_TR(0x5c5001);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5c5002:{NFSU2_TR(0x5c5002);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5c5020:L5c5020:{c.instructions+=15;NFSU2_TR(0x5c5020);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c5021:{NFSU2_TR(0x5c5021);
__builtin_memmove((R+20),(R+16),4);
}
B5c5023:{NFSU2_TR(0x5c5023);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B5c5026:{NFSU2_TR(0x5c5026);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xd4ull))));
}
B5c502c:{NFSU2_TR(0x5c502c);
__builtin_memmove((R+0),gp(0x8709a0),4);
}
B5c5031:{NFSU2_TR(0x5c5031);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5c5034:{NFSU2_TR(0x5c5034);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c5035:{NFSU2_TR(0x5c5035);
w1(R+12,u8(u32(r1(R+12))^u32(r1(R+12))));
}
B5c5037:{NFSU2_TR(0x5c5037);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5c5039:{NFSU2_TR(0x5c5039);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c503a:{NFSU2_TR(0x5c503a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5c503d:{NFSU2_TR(0x5c503d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c503e:{NFSU2_TR(0x5c503e);
u8 U[5];
w4(U+0,u32(u32(u32(0x1bull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5c5042:{NFSU2_TR(0x5c5042);
u8 U[5];
w4(U+0,u32(u32(u32(0x1aull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5c5046:{NFSU2_TR(0x5c5046);
if(r1(R+518)){{goto L5c5073;}}
}
B5c5048:L5c5048:{c.instructions+=2;NFSU2_TR(0x5c5048);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5c504a:{NFSU2_TR(0x5c504a);
if(r1(R+518)){{goto L5c5063;}}
}
B5c504c:L5c504c:{c.instructions+=3;NFSU2_TR(0x5c504c);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5c504f:{NFSU2_TR(0x5c504f);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x40cdc515ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5c5054:{NFSU2_TR(0x5c5054);
if(r1(R+518)){{goto L5c505d;}}
}
B5c5056:L5c5056:{c.instructions+=2;NFSU2_TR(0x5c5056);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x1149c7daull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5c505b:{NFSU2_TR(0x5c505b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5c5063;}}
}
B5c505d:L5c505d:{c.instructions+=2;NFSU2_TR(0x5c505d);
w1(R+12,u8(0x1ull));
}
B5c505f:{NFSU2_TR(0x5c505f);
u8 U[5];
w4(U+0,u32(u32(u32(0x1bull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5c5063:L5c5063:{c.instructions+=3;NFSU2_TR(0x5c5063);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x71ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5c5066:{NFSU2_TR(0x5c5066);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x72ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5c5068:{NFSU2_TR(0x5c5068);
if(r1(R+518)){{goto L5c506e;}}
}
B5c506a:L5c506a:{c.instructions+=2;NFSU2_TR(0x5c506a);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x73ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5c506c:{NFSU2_TR(0x5c506c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5c5073;}}
}
B5c506e:L5c506e:{c.instructions+=1;NFSU2_TR(0x5c506e);
u8 U[5];
w4(U+0,u32(u32(u32(0x1aull))+u32(r4(R+16))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5c5073:L5c5073:{c.instructions+=12;NFSU2_TR(0x5c5073);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c5075:{NFSU2_TR(0x5c5075);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5c5078:{NFSU2_TR(0x5c5078);
w1(R+0,u8(u32(r1(R+0))&u32(u8(0x2ull))));
w1(R+518,u8((r1(R+0))==(u8(0x0ull))));
}
B5c507a:{NFSU2_TR(0x5c507a);
{u32 ea_=u32(u32(7973904u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c5080:{NFSU2_TR(0x5c5080);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5c5086:{NFSU2_TR(0x5c5086);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5c508a:{NFSU2_TR(0x5c508a);
{u32 ea_=u32(r4(R+24)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c508d:{NFSU2_TR(0x5c508d);
{u32 ea_=u32(u32(7973908u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c5093:{NFSU2_TR(0x5c5093);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5c5099:{NFSU2_TR(0x5c5099);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B5c509b:{NFSU2_TR(0x5c509b);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5c509f:{NFSU2_TR(0x5c509f);
if(r1(R+518)){{goto L5c50aa;}}
}
B5c50a1:L5c50a1:{c.instructions+=3;NFSU2_TR(0x5c50a1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5c50a4:{NFSU2_TR(0x5c50a4);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5c50a8:{NFSU2_TR(0x5c50a8);
{goto L5c50b2;}
}
B5c50aa:L5c50aa:{c.instructions+=1;NFSU2_TR(0x5c50aa);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5c50b2:L5c50b2:{c.instructions+=27;NFSU2_TR(0x5c50b2);
{u32 ea_=u32(r4(R+24)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c50b5:{NFSU2_TR(0x5c50b5);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x61ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+28,u32(r1(U+4)));
}
B5c50b9:{NFSU2_TR(0x5c50b9);
{u32 ea_=u32(u32(7973904u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c50bf:{NFSU2_TR(0x5c50bf);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B5c50c1:{NFSU2_TR(0x5c50c1);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x63ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+9),(U+4),1);
}
B5c50c4:{NFSU2_TR(0x5c50c4);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5c50cc:{NFSU2_TR(0x5c50cc);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5c50d2:{NFSU2_TR(0x5c50d2);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5c50da:{NFSU2_TR(0x5c50da);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5c50de:{NFSU2_TR(0x5c50de);
{u32 ea_=u32(r4(R+24)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c50e1:{NFSU2_TR(0x5c50e1);
{u32 ea_=u32(u32(7973908u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c50e7:{NFSU2_TR(0x5c50e7);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B5c50ea:{NFSU2_TR(0x5c50ea);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5c50f0:{NFSU2_TR(0x5c50f0);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B5c50f2:{NFSU2_TR(0x5c50f2);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5c50f6:{NFSU2_TR(0x5c50f6);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B5c50f9:{NFSU2_TR(0x5c50f9);
w4(R+8,u32(u32(r4(R+8))|u32(r4(R+28))));
}
B5c50fb:{NFSU2_TR(0x5c50fb);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x62ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+28,u32(r1(U+4)));
}
B5c50ff:{NFSU2_TR(0x5c50ff);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B5c5102:{NFSU2_TR(0x5c5102);
w4(R+8,u32(u32(r4(R+8))|u32(r4(R+28))));
}
B5c5104:{NFSU2_TR(0x5c5104);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5c5106:{NFSU2_TR(0x5c5106);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5c510a:{NFSU2_TR(0x5c510a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5c510d:{NFSU2_TR(0x5c510d);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5c5111:{NFSU2_TR(0x5c5111);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5c5114:{NFSU2_TR(0x5c5114);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5c5118:{NFSU2_TR(0x5c5118);
if(r1(R+518)){{goto L5c5123;}}
}
B5c511a:L5c511a:{c.instructions+=3;NFSU2_TR(0x5c511a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5c511d:{NFSU2_TR(0x5c511d);
u8 U[8];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5c5121:{NFSU2_TR(0x5c5121);
{goto L5c512b;}
}
B5c5123:L5c5123:{c.instructions+=1;NFSU2_TR(0x5c5123);
u8 U[8];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5c512b:L5c512b:{c.instructions+=27;NFSU2_TR(0x5c512b);
{u32 ea_=u32(r4(R+24)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c512e:{NFSU2_TR(0x5c512e);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x65ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+28,u32(r1(U+4)));
}
B5c5132:{NFSU2_TR(0x5c5132);
{u32 ea_=u32(u32(7973904u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c5138:{NFSU2_TR(0x5c5138);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B5c513a:{NFSU2_TR(0x5c513a);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x67ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+9),(U+4),1);
}
B5c513d:{NFSU2_TR(0x5c513d);
u8 U[8];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(R+16))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5c5145:{NFSU2_TR(0x5c5145);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5c514b:{NFSU2_TR(0x5c514b);
u8 U[8];
w4(U+0,u32(u32(u32(0x5cull))+u32(r4(R+16))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5c5153:{NFSU2_TR(0x5c5153);
{u32 ea_=u32(r4(R+16)+u32(96u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5c5157:{NFSU2_TR(0x5c5157);
{u32 ea_=u32(r4(R+24)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c515a:{NFSU2_TR(0x5c515a);
{u32 ea_=u32(u32(7973908u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c5160:{NFSU2_TR(0x5c5160);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B5c5163:{NFSU2_TR(0x5c5163);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5c5169:{NFSU2_TR(0x5c5169);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B5c516b:{NFSU2_TR(0x5c516b);
{u32 ea_=u32(r4(R+16)+u32(100u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5c516f:{NFSU2_TR(0x5c516f);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B5c5172:{NFSU2_TR(0x5c5172);
w4(R+8,u32(u32(r4(R+8))|u32(r4(R+28))));
}
B5c5174:{NFSU2_TR(0x5c5174);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x66ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+28,u32(r1(U+4)));
}
B5c5178:{NFSU2_TR(0x5c5178);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B5c517b:{NFSU2_TR(0x5c517b);
w4(R+8,u32(u32(r4(R+8))|u32(r4(R+28))));
}
B5c517d:{NFSU2_TR(0x5c517d);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5c517f:{NFSU2_TR(0x5c517f);
u8 U[8];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5c5183:{NFSU2_TR(0x5c5183);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5c5186:{NFSU2_TR(0x5c5186);
u8 U[8];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5c518a:{NFSU2_TR(0x5c518a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5c518d:{NFSU2_TR(0x5c518d);
u8 U[8];
w4(U+0,u32(u32(u32(0x54ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5c5191:{NFSU2_TR(0x5c5191);
if(r1(R+518)){{goto L5c519c;}}
}
B5c5193:L5c5193:{c.instructions+=3;NFSU2_TR(0x5c5193);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5c5196:{NFSU2_TR(0x5c5196);
u8 U[8];
w4(U+0,u32(u32(u32(0x68ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5c519a:{NFSU2_TR(0x5c519a);
{goto L5c51a4;}
}
B5c519c:L5c519c:{c.instructions+=1;NFSU2_TR(0x5c519c);
u8 U[8];
w4(U+0,u32(u32(u32(0x68ull))+u32(r4(R+16))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5c51a4:L5c51a4:{c.instructions+=27;NFSU2_TR(0x5c51a4);
{u32 ea_=u32(r4(R+24)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c51a7:{NFSU2_TR(0x5c51a7);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x69ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+28,u32(r1(U+4)));
}
B5c51ab:{NFSU2_TR(0x5c51ab);
{u32 ea_=u32(u32(7973904u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c51b1:{NFSU2_TR(0x5c51b1);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B5c51b3:{NFSU2_TR(0x5c51b3);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6bull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+9),(U+4),1);
}
B5c51b6:{NFSU2_TR(0x5c51b6);
u8 U[8];
w4(U+0,u32(u32(u32(0x78ull))+u32(r4(R+16))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5c51be:{NFSU2_TR(0x5c51be);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5c51c4:{NFSU2_TR(0x5c51c4);
u8 U[8];
w4(U+0,u32(u32(u32(0x7cull))+u32(r4(R+16))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5c51cc:{NFSU2_TR(0x5c51cc);
{u32 ea_=u32(r4(R+16)+u32(128u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5c51d3:{NFSU2_TR(0x5c51d3);
{u32 ea_=u32(r4(R+24)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c51d6:{NFSU2_TR(0x5c51d6);
{u32 ea_=u32(u32(7973908u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c51dc:{NFSU2_TR(0x5c51dc);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B5c51df:{NFSU2_TR(0x5c51df);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5c51e5:{NFSU2_TR(0x5c51e5);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B5c51e7:{NFSU2_TR(0x5c51e7);
{u32 ea_=u32(r4(R+16)+u32(132u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5c51ee:{NFSU2_TR(0x5c51ee);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B5c51f1:{NFSU2_TR(0x5c51f1);
w4(R+8,u32(u32(r4(R+8))|u32(r4(R+28))));
}
B5c51f3:{NFSU2_TR(0x5c51f3);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6aull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+28,u32(r1(U+4)));
}
B5c51f7:{NFSU2_TR(0x5c51f7);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B5c51fa:{NFSU2_TR(0x5c51fa);
w4(R+8,u32(u32(r4(R+8))|u32(r4(R+28))));
}
B5c51fc:{NFSU2_TR(0x5c51fc);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5c51fe:{NFSU2_TR(0x5c51fe);
u8 U[8];
w4(U+0,u32(u32(u32(0x6cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5c5202:{NFSU2_TR(0x5c5202);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5c5205:{NFSU2_TR(0x5c5205);
u8 U[8];
w4(U+0,u32(u32(u32(0x70ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5c5209:{NFSU2_TR(0x5c5209);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5c520c:{NFSU2_TR(0x5c520c);
u8 U[8];
w4(U+0,u32(u32(u32(0x74ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5c5210:{NFSU2_TR(0x5c5210);
if(r1(R+518)){{goto L5c521e;}}
}
B5c5212:L5c5212:{c.instructions+=3;NFSU2_TR(0x5c5212);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5c5215:{NFSU2_TR(0x5c5215);
u8 U[8];
w4(U+0,u32(u32(u32(0x88ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5c521c:{NFSU2_TR(0x5c521c);
{goto L5c5229;}
}
B5c521e:L5c521e:{c.instructions+=1;NFSU2_TR(0x5c521e);
u8 U[8];
w4(U+0,u32(u32(u32(0x88ull))+u32(r4(R+16))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5c5229:L5c5229:{c.instructions+=19;NFSU2_TR(0x5c5229);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6dull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B5c522d:{NFSU2_TR(0x5c522d);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B5c522f:{NFSU2_TR(0x5c522f);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6full))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+9),(U+4),1);
}
B5c5232:{NFSU2_TR(0x5c5232);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5c5235:{NFSU2_TR(0x5c5235);
u8 U[8];
w4(U+0,u32(u32(u32(0x98ull))+u32(r4(R+16))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5c5240:{NFSU2_TR(0x5c5240);
u8 U[8];
w4(U+0,u32(u32(u32(0x9cull))+u32(r4(R+16))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5c524b:{NFSU2_TR(0x5c524b);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B5c524e:{NFSU2_TR(0x5c524e);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B5c5251:{NFSU2_TR(0x5c5251);
w4(R+8,u32(u32(r4(R+8))|u32(r4(R+0))));
}
B5c5253:{NFSU2_TR(0x5c5253);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6eull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B5c5257:{NFSU2_TR(0x5c5257);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B5c525a:{NFSU2_TR(0x5c525a);
w4(R+8,u32(u32(r4(R+8))|u32(r4(R+0))));
}
B5c525c:{NFSU2_TR(0x5c525c);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5c525e:{NFSU2_TR(0x5c525e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5c5261:{NFSU2_TR(0x5c5261);
u8 U[8];
w4(U+0,u32(u32(u32(0x8cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5c5268:{NFSU2_TR(0x5c5268);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5c526b:{NFSU2_TR(0x5c526b);
u8 U[8];
w4(U+0,u32(u32(u32(0x90ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5c5272:{NFSU2_TR(0x5c5272);
u8 U[8];
w4(U+0,u32(u32(u32(0x94ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5c5279:{NFSU2_TR(0x5c5279);
if(r1(R+518)){{goto L5c5313;}}
}
B5c527f:L5c527f:{c.instructions+=2;NFSU2_TR(0x5c527f);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x61ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5c5282:{NFSU2_TR(0x5c5282);
if(r1(R+518)){{goto L5c530a;}}
}
B5c5288:L5c5288:{c.instructions+=33;NFSU2_TR(0x5c5288);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(s32(s16(r2(U+4)))));
}
B5c528c:{NFSU2_TR(0x5c528c);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5c5290:{NFSU2_TR(0x5c5290);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x46ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(s32(s16(r2(U+4)))));
}
B5c5294:{NFSU2_TR(0x5c5294);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B5c5298:{NFSU2_TR(0x5c5298);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5c529c:{NFSU2_TR(0x5c529c);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x38"::"a"(ea_):"memory");}
}
B5c52a2:{NFSU2_TR(0x5c52a2);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c52a6:{NFSU2_TR(0x5c52a6);
__asm__ volatile(".byte 0xd8,0xc1":::"memory");
}
B5c52a8:{NFSU2_TR(0x5c52a8);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5c52ac:{NFSU2_TR(0x5c52ac);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B5c52b0:{NFSU2_TR(0x5c52b0);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x38"::"a"(ea_):"memory");}
}
B5c52b6:{NFSU2_TR(0x5c52b6);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c52ba:{NFSU2_TR(0x5c52ba);
__asm__ volatile(".byte 0xd8,0xc1":::"memory");
}
B5c52bc:{NFSU2_TR(0x5c52bc);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5c52c0:{NFSU2_TR(0x5c52c0);
{u32 ea_=u32(r4(R+16)+u32(80u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c52c4:{NFSU2_TR(0x5c52c4);
__asm__ volatile(".byte 0xd8,0xe2":::"memory");
}
B5c52c6:{NFSU2_TR(0x5c52c6);
{u32 ea_=u32(r4(R+16)+u32(80u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5c52ca:{NFSU2_TR(0x5c52ca);
{u32 ea_=u32(r4(R+16)+u32(84u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c52ce:{NFSU2_TR(0x5c52ce);
__asm__ volatile(".byte 0xd8,0xc1":::"memory");
}
B5c52d0:{NFSU2_TR(0x5c52d0);
{u32 ea_=u32(r4(R+16)+u32(84u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5c52d4:{NFSU2_TR(0x5c52d4);
{u32 ea_=u32(r4(R+16)+u32(112u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c52d8:{NFSU2_TR(0x5c52d8);
__asm__ volatile(".byte 0xd8,0xe2":::"memory");
}
B5c52da:{NFSU2_TR(0x5c52da);
{u32 ea_=u32(r4(R+16)+u32(112u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5c52de:{NFSU2_TR(0x5c52de);
{u32 ea_=u32(r4(R+16)+u32(116u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c52e2:{NFSU2_TR(0x5c52e2);
__asm__ volatile(".byte 0xd8,0xe1":::"memory");
}
B5c52e4:{NFSU2_TR(0x5c52e4);
{u32 ea_=u32(r4(R+16)+u32(116u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5c52e8:{NFSU2_TR(0x5c52e8);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5c52ea:{NFSU2_TR(0x5c52ea);
{u32 ea_=u32(r4(R+16)+u32(144u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5c52f1:{NFSU2_TR(0x5c52f1);
{u32 ea_=u32(r4(R+16)+u32(144u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5c52f8:{NFSU2_TR(0x5c52f8);
{u32 ea_=u32(r4(R+16)+u32(148u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c52ff:{NFSU2_TR(0x5c52ff);
__asm__ volatile(".byte 0xd8,0xe1":::"memory");
}
B5c5301:{NFSU2_TR(0x5c5301);
{u32 ea_=u32(r4(R+16)+u32(148u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5c5308:{NFSU2_TR(0x5c5308);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5c530a:L5c530a:{c.instructions+=2;NFSU2_TR(0x5c530a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c530b:{NFSU2_TR(0x5c530b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c5310ull));
TAIL_STATIC(0x5bcc30u,5bc);
}
B5c5310:L5c5310:{c.instructions+=1;NFSU2_TR(0x5c5310);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5c5313:L5c5313:{c.instructions+=3;NFSU2_TR(0x5c5313);
__builtin_memmove((R+8),gp(0x8708b4),4);
}
B5c5319:{NFSU2_TR(0x5c5319);
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
B5c531b:{NFSU2_TR(0x5c531b);
if(r1(R+518)){{goto L5c533e;}}
}
B5c531d:L5c531d:{c.instructions+=9;NFSU2_TR(0x5c531d);
__builtin_memmove((R+4),gp(0x870910),4);
}
B5c5323:{NFSU2_TR(0x5c5323);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5c5326:{NFSU2_TR(0x5c5326);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5c5329:{NFSU2_TR(0x5c5329);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+12),(U+0),4);
}
B5c532b:{NFSU2_TR(0x5c532b);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c532c:{NFSU2_TR(0x5c532c);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1b4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5c5332:{NFSU2_TR(0x5c5332);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c5333:{NFSU2_TR(0x5c5333);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c5334:{NFSU2_TR(0x5c5334);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c533aull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5c533a:L5c533a:{c.instructions+=1;NFSU2_TR(0x5c533a);
u8 U[5];
w4(U+0,u32(u32(u32(0x1bull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+12),(U+4),1);
}
B5c533e:L5c533e:{c.instructions+=2;NFSU2_TR(0x5c533e);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x61ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5c5341:{NFSU2_TR(0x5c5341);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5c53b8;}}
}
B5c5343:L5c5343:{c.instructions+=6;NFSU2_TR(0x5c5343);
__builtin_memmove((R+0),gp(0x870910),4);
}
B5c5348:{NFSU2_TR(0x5c5348);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B5c534b:{NFSU2_TR(0x5c534b);
__builtin_memmove((R+0),gp(0x870974),4);
}
B5c5350:{NFSU2_TR(0x5c5350);
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
B5c5352:{NFSU2_TR(0x5c5352);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5c5354:{NFSU2_TR(0x5c5354);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5c536d;}}
}
B5c5356:L5c5356:{c.instructions+=5;NFSU2_TR(0x5c5356);
u8 U[4];
w4(U+0,u32(0x103ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c535b:{NFSU2_TR(0x5c535b);
u8 U[4];
w4(U+0,u32(0x18ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c535d:{NFSU2_TR(0x5c535d);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c535f:{NFSU2_TR(0x5c535f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c5360:{NFSU2_TR(0x5c5360);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c5366ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5c5366:L5c5366:{c.instructions+=2;NFSU2_TR(0x5c5366);
u8 U[4];
w4(U+0,u32(0x10142ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c536b:{NFSU2_TR(0x5c536b);
{goto L5c5382;}
}
B5c536d:L5c536d:{c.instructions+=5;NFSU2_TR(0x5c536d);
u8 U[4];
w4(U+0,u32(0x100ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c5372:{NFSU2_TR(0x5c5372);
u8 U[4];
w4(U+0,u32(0x18ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c5374:{NFSU2_TR(0x5c5374);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c5376:{NFSU2_TR(0x5c5376);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c5377:{NFSU2_TR(0x5c5377);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c537dull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5c537d:L5c537d:{c.instructions+=1;NFSU2_TR(0x5c537d);
u8 U[4];
w4(U+0,u32(0x20142ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c5382:L5c5382:{c.instructions+=4;NFSU2_TR(0x5c5382);
__builtin_memmove((R+0),gp(0x870974),4);
}
B5c5387:{NFSU2_TR(0x5c5387);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5c5389:{NFSU2_TR(0x5c5389);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c538a:{NFSU2_TR(0x5c538a);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x164ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c5390ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5c5390:L5c5390:{c.instructions+=3;NFSU2_TR(0x5c5390);
u8 U[4];
w4(U+0,u32(u32(u32(0xa0ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5c5397:{NFSU2_TR(0x5c5397);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c5398:{NFSU2_TR(0x5c5398);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c539dull));
TAIL_STATIC(0x43c780u,43c);
}
B5c539d:L5c539d:{c.instructions+=8;NFSU2_TR(0x5c539d);
__builtin_memmove((R+0),gp(0x870974),4);
}
B5c53a2:{NFSU2_TR(0x5c53a2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5c53a4:{NFSU2_TR(0x5c53a4);
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
B5c53a7:{NFSU2_TR(0x5c53a7);
u8 U[4];
w4(U+0,u32(u32(u32(0xa0ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5c53ae:{NFSU2_TR(0x5c53ae);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c53af:{NFSU2_TR(0x5c53af);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c53b1:{NFSU2_TR(0x5c53b1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c53b2:{NFSU2_TR(0x5c53b2);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c53b8ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5c53b8:L5c53b8:{c.instructions+=3;NFSU2_TR(0x5c53b8);
s4(0x87092c,u32(0x0ull));
}
B5c53c2:{NFSU2_TR(0x5c53c2);
u8 U[9];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x70ull))));
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+8,u8(u32(r1(U+4))&u32(u8(0x2ull))));
w1(R+519,u8(s8(r1(U+8))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+8))==(u8(0x0ull))));
w1(U+5,u8(u32(r1(U+8))&u32(u8(0xffull))));
w1(U+6,u8(__builtin_popcountll(u64(r1(U+5)))));
w1(U+7,u8(u32(r1(U+6))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+7))==(u8(0x0ull))));
}
B5c53c6:{NFSU2_TR(0x5c53c6);
if(r1(R+518)){{goto L5c53ec;}}
}
B5c53c8:L5c53c8:{c.instructions+=6;NFSU2_TR(0x5c53c8);
__builtin_memmove((R+0),gp(0x870974),4);
}
B5c53cd:{NFSU2_TR(0x5c53cd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5c53cf:{NFSU2_TR(0x5c53cf);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c53d1:{NFSU2_TR(0x5c53d1);
u8 U[4];
w4(U+0,u32(0x7ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c53d3:{NFSU2_TR(0x5c53d3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c53d4:{NFSU2_TR(0x5c53d4);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c53daull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5c53da:L5c53da:{c.instructions+=6;NFSU2_TR(0x5c53da);
__builtin_memmove((R+0),gp(0x870974),4);
}
B5c53df:{NFSU2_TR(0x5c53df);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5c53e1:{NFSU2_TR(0x5c53e1);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c53e3:{NFSU2_TR(0x5c53e3);
u8 U[4];
w4(U+0,u32(0xeull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c53e5:{NFSU2_TR(0x5c53e5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c53e6:{NFSU2_TR(0x5c53e6);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c53ecull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5c53ec:L5c53ec:{c.instructions+=2;NFSU2_TR(0x5c53ec);
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
B5c53ee:{NFSU2_TR(0x5c53ee);
if(r1(R+518)){{goto L5c5437;}}
}
B5c53f0:L5c53f0:{c.instructions+=6;NFSU2_TR(0x5c53f0);
__builtin_memmove((R+0),gp(0x870974),4);
}
B5c53f5:{NFSU2_TR(0x5c53f5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5c53f7:{NFSU2_TR(0x5c53f7);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c53f9:{NFSU2_TR(0x5c53f9);
u8 U[4];
w4(U+0,u32(0x34ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c53fb:{NFSU2_TR(0x5c53fb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c53fc:{NFSU2_TR(0x5c53fc);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c5402ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5c5402:L5c5402:{c.instructions+=6;NFSU2_TR(0x5c5402);
__builtin_memmove((R+0),gp(0x870974),4);
}
B5c5407:{NFSU2_TR(0x5c5407);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5c5409:{NFSU2_TR(0x5c5409);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c540b:{NFSU2_TR(0x5c540b);
u8 U[4];
w4(U+0,u32(0x38ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c540d:{NFSU2_TR(0x5c540d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c540e:{NFSU2_TR(0x5c540e);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c5414ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5c5414:L5c5414:{c.instructions+=6;NFSU2_TR(0x5c5414);
__builtin_memmove((R+0),gp(0x870974),4);
}
B5c5419:{NFSU2_TR(0x5c5419);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5c541b:{NFSU2_TR(0x5c541b);
u8 U[4];
w4(U+0,u32(0x7ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c541d:{NFSU2_TR(0x5c541d);
u8 U[4];
w4(U+0,u32(0x37ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c541f:{NFSU2_TR(0x5c541f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c5420:{NFSU2_TR(0x5c5420);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c5426ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5c5426:L5c5426:{c.instructions+=3;NFSU2_TR(0x5c5426);
u8 U[4];
w4(U+0,u32(0x5full));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c5428:{NFSU2_TR(0x5c5428);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c542a:{NFSU2_TR(0x5c542a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c542full));
TAIL_STATIC(0x5bcb70u,5bc);
}
B5c542f:L5c542f:{c.instructions+=2;NFSU2_TR(0x5c542f);
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
B5c5432:{NFSU2_TR(0x5c5432);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c5437ull));
TAIL_STATIC(0x5bdf90u,5bd);
}
B5c5437:L5c5437:{c.instructions+=3;NFSU2_TR(0x5c5437);
u8 U[5];
w4(U+0,u32(u32(u32(0x1aull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5c543b:{NFSU2_TR(0x5c543b);
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
B5c543d:{NFSU2_TR(0x5c543d);
if(r1(R+518)){{goto L5c54b7;}}
}
B5c543f:L5c543f:{c.instructions+=6;NFSU2_TR(0x5c543f);
__builtin_memmove((R+0),gp(0x870974),4);
}
B5c5444:{NFSU2_TR(0x5c5444);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5c5446:{NFSU2_TR(0x5c5446);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c5448:{NFSU2_TR(0x5c5448);
u8 U[4];
w4(U+0,u32(0x34ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c544a:{NFSU2_TR(0x5c544a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c544b:{NFSU2_TR(0x5c544b);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c5451ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5c5451:L5c5451:{c.instructions+=6;NFSU2_TR(0x5c5451);
__builtin_memmove((R+0),gp(0x870974),4);
}
B5c5456:{NFSU2_TR(0x5c5456);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5c5458:{NFSU2_TR(0x5c5458);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c545a:{NFSU2_TR(0x5c545a);
u8 U[4];
w4(U+0,u32(0x38ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c545c:{NFSU2_TR(0x5c545c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c545d:{NFSU2_TR(0x5c545d);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c5463ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5c5463:L5c5463:{c.instructions+=3;NFSU2_TR(0x5c5463);
u8 U[4];
w4(U+0,u32(0x5full));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c5465:{NFSU2_TR(0x5c5465);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c5467:{NFSU2_TR(0x5c5467);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c546cull));
TAIL_STATIC(0x5bcb70u,5bc);
}
B5c546c:L5c546c:{c.instructions+=4;NFSU2_TR(0x5c546c);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x71ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5c546f:{NFSU2_TR(0x5c546f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B5c5472:{NFSU2_TR(0x5c5472);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x72ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5c5474:{NFSU2_TR(0x5c5474);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5c54a4;}}
}
B5c5476:L5c5476:{c.instructions+=3;NFSU2_TR(0x5c5476);
__builtin_memmove((R+0),gp(0x86e5f4),4);
}
B5c547b:{NFSU2_TR(0x5c547b);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x20ull))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5c547e:{NFSU2_TR(0x5c547e);
if(r1(R+518)){{goto L5c549e;}}
}
B5c5480:L5c5480:{c.instructions+=6;NFSU2_TR(0x5c5480);
__builtin_memmove((R+0),gp(0x870974),4);
}
B5c5485:{NFSU2_TR(0x5c5485);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5c5487:{NFSU2_TR(0x5c5487);
u8 U[4];
w4(U+0,u32(0xffb0b0b0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c548c:{NFSU2_TR(0x5c548c);
u8 U[4];
w4(U+0,u32(0xc1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c5491:{NFSU2_TR(0x5c5491);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c5492:{NFSU2_TR(0x5c5492);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c5498ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5c5498:L5c5498:{c.instructions+=3;NFSU2_TR(0x5c5498);
u8 U[4];
w4(U+0,u32(0xfull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c549a:{NFSU2_TR(0x5c549a);
u8 U[4];
w4(U+0,u32(0xeull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c549c:{NFSU2_TR(0x5c549c);
{goto L5c54a8;}
}
B5c549e:L5c549e:{c.instructions+=3;NFSU2_TR(0x5c549e);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c54a0:{NFSU2_TR(0x5c54a0);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c54a2:{NFSU2_TR(0x5c54a2);
{goto L5c54a8;}
}
B5c54a4:L5c54a4:{c.instructions+=2;NFSU2_TR(0x5c54a4);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c54a6:{NFSU2_TR(0x5c54a6);
u8 U[4];
w4(U+0,u32(0x5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c54a8:L5c54a8:{c.instructions+=2;NFSU2_TR(0x5c54a8);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c54aa:{NFSU2_TR(0x5c54aa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c54afull));
TAIL_STATIC(0x5bcbc0u,5bc);
}
B5c54af:L5c54af:{c.instructions+=2;NFSU2_TR(0x5c54af);
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
B5c54b2:{NFSU2_TR(0x5c54b2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c54b7ull));
TAIL_STATIC(0x5bdf90u,5bd);
}
B5c54b7:L5c54b7:{c.instructions+=3;NFSU2_TR(0x5c54b7);
__builtin_memmove((R+0),gp(0x7ff05c),1);
}
B5c54bc:{NFSU2_TR(0x5c54bc);
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
B5c54be:{NFSU2_TR(0x5c54be);
if(r1(R+518)){{goto L5c5510;}}
}
B5c54c0:L5c54c0:{c.instructions+=5;NFSU2_TR(0x5c54c0);
__builtin_memmove((R+0),gp(0x870910),4);
}
B5c54c5:{NFSU2_TR(0x5c54c5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5c54c8:{NFSU2_TR(0x5c54c8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5c54ca:{NFSU2_TR(0x5c54ca);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c54cb:{NFSU2_TR(0x5c54cb);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c54d1ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5c54d1:L5c54d1:{c.instructions+=6;NFSU2_TR(0x5c54d1);
__builtin_memmove((R+8),gp(0x870910),4);
}
B5c54d7:{NFSU2_TR(0x5c54d7);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5c54da:{NFSU2_TR(0x5c54da);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5c54dc:{NFSU2_TR(0x5c54dc);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c54de:{NFSU2_TR(0x5c54de);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c54df:{NFSU2_TR(0x5c54df);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x108ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c54e5ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5c54e5:L5c54e5:{c.instructions+=9;NFSU2_TR(0x5c54e5);
__builtin_memmove((R+0),gp(0x870974),4);
}
B5c54ea:{NFSU2_TR(0x5c54ea);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5c54ec:{NFSU2_TR(0x5c54ec);
u8 U[4];
w4(U+0,u32(0x20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c54ee:{NFSU2_TR(0x5c54ee);
u8 U[4];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5c54f2:{NFSU2_TR(0x5c54f2);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c54f3:{NFSU2_TR(0x5c54f3);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c54f5:{NFSU2_TR(0x5c54f5);
u8 U[4];
w4(U+0,u32(0x6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c54f7:{NFSU2_TR(0x5c54f7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c54f8:{NFSU2_TR(0x5c54f8);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x14cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c54feull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5c54fe:L5c54fe:{c.instructions+=5;NFSU2_TR(0x5c54fe);
__builtin_memmove((R+8),gp(0x870910),4);
}
B5c5504:{NFSU2_TR(0x5c5504);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5c5507:{NFSU2_TR(0x5c5507);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5c5509:{NFSU2_TR(0x5c5509);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c550a:{NFSU2_TR(0x5c550a);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x110ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c5510ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5c5510:L5c5510:{c.instructions+=2;NFSU2_TR(0x5c5510);
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
B5c5512:{NFSU2_TR(0x5c5512);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5c551c;}}
}
B5c5514:L5c5514:{c.instructions+=3;NFSU2_TR(0x5c5514);
u8 U[5];
w4(U+0,u32(u32(u32(0x1aull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5c5518:{NFSU2_TR(0x5c5518);
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
B5c551a:{NFSU2_TR(0x5c551a);
if(r1(R+518)){{goto L5c552e;}}
}
B5c551c:L5c551c:{c.instructions+=6;NFSU2_TR(0x5c551c);
__builtin_memmove((R+0),gp(0x870974),4);
}
B5c5521:{NFSU2_TR(0x5c5521);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5c5523:{NFSU2_TR(0x5c5523);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c5525:{NFSU2_TR(0x5c5525);
u8 U[4];
w4(U+0,u32(0x34ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c5527:{NFSU2_TR(0x5c5527);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c5528:{NFSU2_TR(0x5c5528);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c552eull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5c552e:L5c552e:{c.instructions+=2;NFSU2_TR(0x5c552e);
u8 U[9];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x70ull))));
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+8,u8(u32(r1(U+4))&u32(u8(0x2ull))));
w1(R+519,u8(s8(r1(U+8))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+8))==(u8(0x0ull))));
w1(U+5,u8(u32(r1(U+8))&u32(u8(0xffull))));
w1(U+6,u8(__builtin_popcountll(u64(r1(U+5)))));
w1(U+7,u8(u32(r1(U+6))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+7))==(u8(0x0ull))));
}
B5c5532:{NFSU2_TR(0x5c5532);
if(r1(R+518)){{goto L5c5558;}}
}
B5c5534:L5c5534:{c.instructions+=6;NFSU2_TR(0x5c5534);
__builtin_memmove((R+0),gp(0x870974),4);
}
B5c5539:{NFSU2_TR(0x5c5539);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5c553b:{NFSU2_TR(0x5c553b);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c553d:{NFSU2_TR(0x5c553d);
u8 U[4];
w4(U+0,u32(0x7ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c553f:{NFSU2_TR(0x5c553f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c5540:{NFSU2_TR(0x5c5540);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c5546ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5c5546:L5c5546:{c.instructions+=6;NFSU2_TR(0x5c5546);
__builtin_memmove((R+0),gp(0x870974),4);
}
B5c554b:{NFSU2_TR(0x5c554b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5c554d:{NFSU2_TR(0x5c554d);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c554f:{NFSU2_TR(0x5c554f);
u8 U[4];
w4(U+0,u32(0xeull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c5551:{NFSU2_TR(0x5c5551);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c5552:{NFSU2_TR(0x5c5552);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c5558ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5c5558:L5c5558:{c.instructions+=1;NFSU2_TR(0x5c5558);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c555dull));
TAIL_STATIC(0x5bcfc0u,5bc);
}
B5c555d:L5c555d:{c.instructions+=2;NFSU2_TR(0x5c555d);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
w1(R+512,u8((r4(U+6))<(u32(0x61ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x61ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x61ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5c5560:{NFSU2_TR(0x5c5560);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5c5576;}}
}
B5c5562:L5c5562:{c.instructions+=7;NFSU2_TR(0x5c5562);
__builtin_memmove((R+0),gp(0x870974),4);
}
B5c5567:{NFSU2_TR(0x5c5567);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5c5569:{NFSU2_TR(0x5c5569);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c556b:{NFSU2_TR(0x5c556b);
u8 U[4];
w4(U+0,u32(0x18ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c556d:{NFSU2_TR(0x5c556d);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c556f:{NFSU2_TR(0x5c556f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c5570:{NFSU2_TR(0x5c5570);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c5576ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5c5576:L5c5576:{c.instructions+=6;NFSU2_TR(0x5c5576);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5c5577:{NFSU2_TR(0x5c5577);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5c5578:{NFSU2_TR(0x5c5578);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5c5579:{NFSU2_TR(0x5c5579);
__builtin_memmove((R+16),(R+20),4);
}
B5c557b:{NFSU2_TR(0x5c557b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5c557c:{NFSU2_TR(0x5c557c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5c5580:L5c5580:{c.instructions+=85;NFSU2_TR(0x5c5580);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x80ull))));
}
B5c5586:{NFSU2_TR(0x5c5586);
u8 U[8];
w4(U+0,u32(u32(u32(0x84ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5c558d:{NFSU2_TR(0x5c558d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5c5590:{NFSU2_TR(0x5c5590);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5c5594:{NFSU2_TR(0x5c5594);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B5c5596:{NFSU2_TR(0x5c5596);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x63ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+9),(U+4),1);
}
B5c5599:{NFSU2_TR(0x5c5599);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5c559b:{NFSU2_TR(0x5c559b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+16)),r4(U+0));
}
B5c559f:{NFSU2_TR(0x5c559f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5c55a2:{NFSU2_TR(0x5c55a2);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5c55a6:{NFSU2_TR(0x5c55a6);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x61ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(r1(U+4)));
}
B5c55aa:{NFSU2_TR(0x5c55aa);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B5c55ad:{NFSU2_TR(0x5c55ad);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B5c55b0:{NFSU2_TR(0x5c55b0);
w4(R+8,u32(u32(r4(R+8))|u32(r4(R+4))));
}
B5c55b2:{NFSU2_TR(0x5c55b2);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x62ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(r1(U+4)));
}
B5c55b6:{NFSU2_TR(0x5c55b6);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B5c55b9:{NFSU2_TR(0x5c55b9);
w4(R+8,u32(u32(r4(R+8))|u32(r4(R+4))));
}
B5c55bb:{NFSU2_TR(0x5c55bb);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5c55be:{NFSU2_TR(0x5c55be);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5c55c2:{NFSU2_TR(0x5c55c2);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5c55c5:{NFSU2_TR(0x5c55c5);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5c55c9:{NFSU2_TR(0x5c55c9);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B5c55cb:{NFSU2_TR(0x5c55cb);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x67ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+5),(U+4),1);
}
B5c55ce:{NFSU2_TR(0x5c55ce);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5c55d2:{NFSU2_TR(0x5c55d2);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5c55d5:{NFSU2_TR(0x5c55d5);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5c55d9:{NFSU2_TR(0x5c55d9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5c55dc:{NFSU2_TR(0x5c55dc);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5c55e0:{NFSU2_TR(0x5c55e0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5c55e3:{NFSU2_TR(0x5c55e3);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B5c55e6:{NFSU2_TR(0x5c55e6);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5c55ea:{NFSU2_TR(0x5c55ea);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x65ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+8,u32(r1(U+4)));
}
B5c55ee:{NFSU2_TR(0x5c55ee);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B5c55f1:{NFSU2_TR(0x5c55f1);
w4(R+4,u32(u32(r4(R+4))|u32(r4(R+8))));
}
B5c55f3:{NFSU2_TR(0x5c55f3);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x66ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+8,u32(r1(U+4)));
}
B5c55f7:{NFSU2_TR(0x5c55f7);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B5c55fa:{NFSU2_TR(0x5c55fa);
w4(R+4,u32(u32(r4(R+4))|u32(r4(R+8))));
}
B5c55fc:{NFSU2_TR(0x5c55fc);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5c55ff:{NFSU2_TR(0x5c55ff);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5c5603:{NFSU2_TR(0x5c5603);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5c5606:{NFSU2_TR(0x5c5606);
u8 U[8];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5c560a:{NFSU2_TR(0x5c560a);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B5c560c:{NFSU2_TR(0x5c560c);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x6bull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+9),(U+4),1);
}
B5c560f:{NFSU2_TR(0x5c560f);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5c5613:{NFSU2_TR(0x5c5613);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5c5616:{NFSU2_TR(0x5c5616);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5c561a:{NFSU2_TR(0x5c561a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5c561d:{NFSU2_TR(0x5c561d);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5c5621:{NFSU2_TR(0x5c5621);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5c5624:{NFSU2_TR(0x5c5624);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B5c5627:{NFSU2_TR(0x5c5627);
u8 U[8];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5c562b:{NFSU2_TR(0x5c562b);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x69ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(r1(U+4)));
}
B5c562f:{NFSU2_TR(0x5c562f);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B5c5632:{NFSU2_TR(0x5c5632);
w4(R+8,u32(u32(r4(R+8))|u32(r4(R+4))));
}
B5c5634:{NFSU2_TR(0x5c5634);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x6aull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(r1(U+4)));
}
B5c5638:{NFSU2_TR(0x5c5638);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B5c563b:{NFSU2_TR(0x5c563b);
w4(R+8,u32(u32(r4(R+8))|u32(r4(R+4))));
}
B5c563d:{NFSU2_TR(0x5c563d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5c5640:{NFSU2_TR(0x5c5640);
u8 U[8];
w4(U+0,u32(u32(u32(0x54ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5c5644:{NFSU2_TR(0x5c5644);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5c5647:{NFSU2_TR(0x5c5647);
u8 U[8];
w4(U+0,u32(u32(u32(0x64ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5c564b:{NFSU2_TR(0x5c564b);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B5c564d:{NFSU2_TR(0x5c564d);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x6full))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+5),(U+4),1);
}
B5c5650:{NFSU2_TR(0x5c5650);
u8 U[8];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5c5654:{NFSU2_TR(0x5c5654);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5c5657:{NFSU2_TR(0x5c5657);
u8 U[8];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5c565b:{NFSU2_TR(0x5c565b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5c565e:{NFSU2_TR(0x5c565e);
u8 U[8];
w4(U+0,u32(u32(u32(0x60ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5c5662:{NFSU2_TR(0x5c5662);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5c5665:{NFSU2_TR(0x5c5665);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B5c5668:{NFSU2_TR(0x5c5668);
u8 U[8];
w4(U+0,u32(u32(u32(0x68ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5c566c:{NFSU2_TR(0x5c566c);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x6dull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+8,u32(r1(U+4)));
}
B5c5670:{NFSU2_TR(0x5c5670);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B5c5673:{NFSU2_TR(0x5c5673);
w4(R+4,u32(u32(r4(R+4))|u32(r4(R+8))));
}
B5c5675:{NFSU2_TR(0x5c5675);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x6eull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+8,u32(r1(U+4)));
}
B5c5679:{NFSU2_TR(0x5c5679);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B5c567c:{NFSU2_TR(0x5c567c);
w4(R+4,u32(u32(r4(R+4))|u32(r4(R+8))));
}
B5c567e:{NFSU2_TR(0x5c567e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5c5681:{NFSU2_TR(0x5c5681);
u8 U[8];
w4(U+0,u32(u32(u32(0x6cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5c5685:{NFSU2_TR(0x5c5685);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5c5688:{NFSU2_TR(0x5c5688);
u8 U[8];
w4(U+0,u32(u32(u32(0x70ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5c568c:{NFSU2_TR(0x5c568c);
u8 U[8];
w4(U+0,u32(u32(u32(0x74ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5c5690:{NFSU2_TR(0x5c5690);
u8 U[8];
w4(U+0,u32(u32(u32(0x88ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5c5697:{NFSU2_TR(0x5c5697);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c5698:{NFSU2_TR(0x5c5698);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c569dull));
TAIL_STATIC(0x5bcc30u,5bc);
}
B5c569d:L5c569d:{c.instructions+=6;NFSU2_TR(0x5c569d);
__builtin_memmove((R+4),gp(0x870848),4);
}
B5c56a3:{NFSU2_TR(0x5c56a3);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5c56a6:{NFSU2_TR(0x5c56a6);
u8 U[8];
w4(U+0,u32(u32(u32(0x90ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5c56ad:{NFSU2_TR(0x5c56ad);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c56ae:{NFSU2_TR(0x5c56ae);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c56af:{NFSU2_TR(0x5c56af);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c56b4ull));
TAIL_STATIC(0x5bdde0u,5bd);
}
B5c56b4:L5c56b4:{c.instructions+=4;NFSU2_TR(0x5c56b4);
__builtin_memmove((R+8),gp(0x8708b4),4);
}
B5c56ba:{NFSU2_TR(0x5c56ba);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B5c56bd:{NFSU2_TR(0x5c56bd);
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
B5c56bf:{NFSU2_TR(0x5c56bf);
if(r1(R+518)){{goto L5c56e0;}}
}
B5c56c1:L5c56c1:{c.instructions+=10;NFSU2_TR(0x5c56c1);
__builtin_memmove((R+4),gp(0x870910),4);
}
B5c56c7:{NFSU2_TR(0x5c56c7);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5c56ca:{NFSU2_TR(0x5c56ca);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5c56cd:{NFSU2_TR(0x5c56cd);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c56ce:{NFSU2_TR(0x5c56ce);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+24),(U+0),4);
}
B5c56d0:{NFSU2_TR(0x5c56d0);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c56d1:{NFSU2_TR(0x5c56d1);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1b4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5c56d7:{NFSU2_TR(0x5c56d7);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c56d8:{NFSU2_TR(0x5c56d8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c56d9:{NFSU2_TR(0x5c56d9);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c56dfull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5c56df:L5c56df:{c.instructions+=1;NFSU2_TR(0x5c56df);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5c56e0:L5c56e0:{c.instructions+=3;NFSU2_TR(0x5c56e0);
__builtin_memmove((R+0),gp(0x7ff05c),1);
}
B5c56e5:{NFSU2_TR(0x5c56e5);
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
B5c56e7:{NFSU2_TR(0x5c56e7);
if(r1(R+518)){{goto L5c5743;}}
}
B5c56e9:L5c56e9:{c.instructions+=5;NFSU2_TR(0x5c56e9);
__builtin_memmove((R+0),gp(0x870910),4);
}
B5c56ee:{NFSU2_TR(0x5c56ee);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5c56f1:{NFSU2_TR(0x5c56f1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5c56f3:{NFSU2_TR(0x5c56f3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c56f4:{NFSU2_TR(0x5c56f4);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c56faull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5c56fa:L5c56fa:{c.instructions+=7;NFSU2_TR(0x5c56fa);
__builtin_memmove((R+8),gp(0x870910),4);
}
B5c5700:{NFSU2_TR(0x5c5700);
s4(0x87092c,u32(0x0ull));
}
B5c570a:{NFSU2_TR(0x5c570a);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5c570d:{NFSU2_TR(0x5c570d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5c570f:{NFSU2_TR(0x5c570f);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c5711:{NFSU2_TR(0x5c5711);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c5712:{NFSU2_TR(0x5c5712);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x108ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c5718ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5c5718:L5c5718:{c.instructions+=9;NFSU2_TR(0x5c5718);
__builtin_memmove((R+0),gp(0x870974),4);
}
B5c571d:{NFSU2_TR(0x5c571d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5c571f:{NFSU2_TR(0x5c571f);
u8 U[4];
w4(U+0,u32(0x20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c5721:{NFSU2_TR(0x5c5721);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5c5725:{NFSU2_TR(0x5c5725);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c5726:{NFSU2_TR(0x5c5726);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c5728:{NFSU2_TR(0x5c5728);
u8 U[4];
w4(U+0,u32(0x6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c572a:{NFSU2_TR(0x5c572a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c572b:{NFSU2_TR(0x5c572b);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x14cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c5731ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5c5731:L5c5731:{c.instructions+=5;NFSU2_TR(0x5c5731);
__builtin_memmove((R+8),gp(0x870910),4);
}
B5c5737:{NFSU2_TR(0x5c5737);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5c573a:{NFSU2_TR(0x5c573a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5c573c:{NFSU2_TR(0x5c573c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c573d:{NFSU2_TR(0x5c573d);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x110ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c5743ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5c5743:L5c5743:{c.instructions+=2;NFSU2_TR(0x5c5743);
w1(R+512,carry<u32>(r4(R+16),u32(0x80ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x80ull))));
}
B5c5749:{NFSU2_TR(0x5c5749);
TAIL_STATIC(0x5bcfc0u,5bc);
}
B5c5750:L5c5750:{c.instructions+=4;NFSU2_TR(0x5c5750);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c5752:{NFSU2_TR(0x5c5752);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c5754:{NFSU2_TR(0x5c5754);
u8 U[4];
w4(U+0,u32(0x7a3c4cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c5759:{NFSU2_TR(0x5c5759);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c575eull));
TAIL_STATIC(0x43db50u,43d);
}
B5c575e:L5c575e:{c.instructions+=3;NFSU2_TR(0x5c575e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5c5761:{NFSU2_TR(0x5c5761);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c5762:{NFSU2_TR(0x5c5762);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c5767ull));
TAIL_STATIC(0x4901d0u,490);
}
B5c5767:L5c5767:{c.instructions+=3;NFSU2_TR(0x5c5767);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B5c576a:{NFSU2_TR(0x5c576a);
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
B5c576c:{NFSU2_TR(0x5c576c);
if(r1(R+518)){{goto L5c5777;}}
}
B5c576e:L5c576e:{c.instructions+=2;NFSU2_TR(0x5c576e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c576f:{NFSU2_TR(0x5c576f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c5774ull));
TAIL_STATIC(0x5bcc30u,5bc);
}
B5c5774:L5c5774:{c.instructions+=1;NFSU2_TR(0x5c5774);
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
B5c5777:L5c5777:{c.instructions+=6;NFSU2_TR(0x5c5777);
__builtin_memmove((R+0),gp(0x870910),4);
}
B5c577c:{NFSU2_TR(0x5c577c);
s4(0x87092c,u32(0x0ull));
}
B5c5786:{NFSU2_TR(0x5c5786);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5c5789:{NFSU2_TR(0x5c5789);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5c578b:{NFSU2_TR(0x5c578b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c578c:{NFSU2_TR(0x5c578c);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c5792ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5c5792:L5c5792:{c.instructions+=6;NFSU2_TR(0x5c5792);
__builtin_memmove((R+8),gp(0x870910),4);
}
B5c5798:{NFSU2_TR(0x5c5798);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5c579b:{NFSU2_TR(0x5c579b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5c579d:{NFSU2_TR(0x5c579d);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c579f:{NFSU2_TR(0x5c579f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c57a0:{NFSU2_TR(0x5c57a0);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x108ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c57a6ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5c57a6:L5c57a6:{c.instructions+=10;NFSU2_TR(0x5c57a6);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5c57aa:{NFSU2_TR(0x5c57aa);
__builtin_memmove((R+0),gp(0x870974),4);
}
B5c57af:{NFSU2_TR(0x5c57af);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5c57b1:{NFSU2_TR(0x5c57b1);
u8 U[4];
w4(U+0,u32(0x20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c57b3:{NFSU2_TR(0x5c57b3);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c57b4:{NFSU2_TR(0x5c57b4);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5c57b8:{NFSU2_TR(0x5c57b8);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c57b9:{NFSU2_TR(0x5c57b9);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c57bb:{NFSU2_TR(0x5c57bb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c57bc:{NFSU2_TR(0x5c57bc);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x14cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c57c2ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5c57c2:L5c57c2:{c.instructions+=5;NFSU2_TR(0x5c57c2);
__builtin_memmove((R+8),gp(0x870910),4);
}
B5c57c8:{NFSU2_TR(0x5c57c8);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5c57cb:{NFSU2_TR(0x5c57cb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5c57cd:{NFSU2_TR(0x5c57cd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c57ce:{NFSU2_TR(0x5c57ce);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x110ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c57d4ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5c57d4:L5c57d4:{c.instructions+=1;NFSU2_TR(0x5c57d4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5c57e0:L5c57e0:{c.instructions+=14;NFSU2_TR(0x5c57e0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c57e1:{NFSU2_TR(0x5c57e1);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c57e2:{NFSU2_TR(0x5c57e2);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c57e3:{NFSU2_TR(0x5c57e3);
__builtin_memmove((R+24),gp(0x870974),4);
}
B5c57e9:{NFSU2_TR(0x5c57e9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5c57eb:{NFSU2_TR(0x5c57eb);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c57ec:{NFSU2_TR(0x5c57ec);
u8 U[4];
w4(U+0,u32(0x18ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c57ee:{NFSU2_TR(0x5c57ee);
__builtin_memmove((R+28),(R+4),4);
}
B5c57f0:{NFSU2_TR(0x5c57f0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5c57f2:{NFSU2_TR(0x5c57f2);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c57f4:{NFSU2_TR(0x5c57f4);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c57f5:{NFSU2_TR(0x5c57f5);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c57f7:{NFSU2_TR(0x5c57f7);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c57f8:{NFSU2_TR(0x5c57f8);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x190ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c57feull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5c57fe:L5c57fe:{c.instructions+=5;NFSU2_TR(0x5c57fe);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5c5801:{NFSU2_TR(0x5c5801);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5c5803:{NFSU2_TR(0x5c5803);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c5804:{NFSU2_TR(0x5c5804);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c5805:{NFSU2_TR(0x5c5805);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x1a0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c580bull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5c580b:L5c580b:{c.instructions+=5;NFSU2_TR(0x5c580b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5c580d:{NFSU2_TR(0x5c580d);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c580f:{NFSU2_TR(0x5c580f);
u8 U[4];
w4(U+0,u32(0x1bull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c5811:{NFSU2_TR(0x5c5811);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c5812:{NFSU2_TR(0x5c5812);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c5818ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5c5818:L5c5818:{c.instructions+=6;NFSU2_TR(0x5c5818);
__builtin_memmove((R+0),gp(0x870974),4);
}
B5c581d:{NFSU2_TR(0x5c581d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5c581f:{NFSU2_TR(0x5c581f);
u8 U[4];
w4(U+0,u32(0x7ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c5821:{NFSU2_TR(0x5c5821);
u8 U[4];
w4(U+0,u32(0xa8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c5826:{NFSU2_TR(0x5c5826);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c5827:{NFSU2_TR(0x5c5827);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c582dull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5c582d:L5c582d:{c.instructions+=8;NFSU2_TR(0x5c582d);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5c5830:{NFSU2_TR(0x5c5830);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B5c5833:{NFSU2_TR(0x5c5833);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+0))));
}
B5c5836:{NFSU2_TR(0x5c5836);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+20),(U+4),4);
}
B5c5839:{NFSU2_TR(0x5c5839);
w4(R+12,shr<u32>(r4(R+12),u64(u32(0x1ull))));
}
B5c583b:{NFSU2_TR(0x5c583b);
w4(R+20,shl<u32>(r4(R+20),u64(u32(0x1ull))));
}
B5c583d:{NFSU2_TR(0x5c583d);
u8 U[10];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(U+6,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5c583f:{NFSU2_TR(0x5c583f);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5c588f;}}
}
B5c5841:L5c5841:{c.instructions+=5;NFSU2_TR(0x5c5841);
__builtin_memmove((R+0),gp(0x870910),4);
}
B5c5846:{NFSU2_TR(0x5c5846);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5c5849:{NFSU2_TR(0x5c5849);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5c584b:{NFSU2_TR(0x5c584b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c584c:{NFSU2_TR(0x5c584c);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c5852ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5c5852:L5c5852:{c.instructions+=6;NFSU2_TR(0x5c5852);
__builtin_memmove((R+8),gp(0x870910),4);
}
B5c5858:{NFSU2_TR(0x5c5858);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5c585b:{NFSU2_TR(0x5c585b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5c585d:{NFSU2_TR(0x5c585d);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c585f:{NFSU2_TR(0x5c585f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c5860:{NFSU2_TR(0x5c5860);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x108ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c5866ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5c5866:L5c5866:{c.instructions+=11;NFSU2_TR(0x5c5866);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5c5869:{NFSU2_TR(0x5c5869);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5c586c:{NFSU2_TR(0x5c586c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5c586e:{NFSU2_TR(0x5c586e);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c586f:{NFSU2_TR(0x5c586f);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c5870:{NFSU2_TR(0x5c5870);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c5871:{NFSU2_TR(0x5c5871);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c5872:{NFSU2_TR(0x5c5872);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c5874:{NFSU2_TR(0x5c5874);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c5876:{NFSU2_TR(0x5c5876);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c5877:{NFSU2_TR(0x5c5877);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x148ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c587dull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5c587d:L5c587d:{c.instructions+=5;NFSU2_TR(0x5c587d);
__builtin_memmove((R+8),gp(0x870910),4);
}
B5c5883:{NFSU2_TR(0x5c5883);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5c5886:{NFSU2_TR(0x5c5886);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5c5888:{NFSU2_TR(0x5c5888);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c5889:{NFSU2_TR(0x5c5889);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x110ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c588full));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5c588f:L5c588f:{c.instructions+=6;NFSU2_TR(0x5c588f);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5c5896:{NFSU2_TR(0x5c5896);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5c5897:{NFSU2_TR(0x5c5897);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5c5898:{NFSU2_TR(0x5c5898);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5c5899:{NFSU2_TR(0x5c5899);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5c589a:{NFSU2_TR(0x5c589a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5c58a0:L5c58a0:{c.instructions+=7;NFSU2_TR(0x5c58a0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5c58a3:{NFSU2_TR(0x5c58a3);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c58a4:{NFSU2_TR(0x5c58a4);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5c58a7:{NFSU2_TR(0x5c58a7);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B5c58a9:{NFSU2_TR(0x5c58a9);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5c58ab:{NFSU2_TR(0x5c58ab);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c58ac:{NFSU2_TR(0x5c58ac);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5c58cf;}}
}
B5c58ae:L5c58ae:{c.instructions+=3;NFSU2_TR(0x5c58ae);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5c58b2:{NFSU2_TR(0x5c58b2);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x34ull))));
}
B5c58b5:{NFSU2_TR(0x5c58b5);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c58b6:L5c58b6:{c.instructions+=11;NFSU2_TR(0x5c58b6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+28),(U+0),4);
}
B5c58b8:{NFSU2_TR(0x5c58b8);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B5c58bb:{NFSU2_TR(0x5c58bb);
w4(R+28,shl<u32>(r4(R+28),u64(u32(0x1ull))));
}
B5c58bd:{NFSU2_TR(0x5c58bd);
w4(R+28,u32(u32(r4(R+28))-u32(r4(R+24))));
}
B5c58bf:{NFSU2_TR(0x5c58bf);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+12))));
}
B5c58c1:{NFSU2_TR(0x5c58c1);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
s4(u32(r4(R+0)),r4(U+0));
}
B5c58c3:{NFSU2_TR(0x5c58c3);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5c58c6:{NFSU2_TR(0x5c58c6);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B5c58c7:{NFSU2_TR(0x5c58c7);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x3cull))));
}
B5c58ca:{NFSU2_TR(0x5c58ca);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+8),r4(U+0)));
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5c58cc:{NFSU2_TR(0x5c58cc);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5c58b6u);}goto L5c58b6;}}
}
B5c58ce:L5c58ce:{c.instructions+=1;NFSU2_TR(0x5c58ce);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5c58cf:L5c58cf:{c.instructions+=4;NFSU2_TR(0x5c58cf);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5c58d2:{NFSU2_TR(0x5c58d2);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B5c58d4:{NFSU2_TR(0x5c58d4);
w4(R+0,u32(0x800464ull));
}
B5c58d9:{NFSU2_TR(0x5c58d9);
__builtin_memmove((R+16),(R+16),4);
}
B5c58e0:L5c58e0:{c.instructions+=3;NFSU2_TR(0x5c58e0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5c58e2:{NFSU2_TR(0x5c58e2);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5c58e4:{NFSU2_TR(0x5c58e4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5c5909;}}
}
B5c58e6:L5c58e6:{c.instructions+=2;NFSU2_TR(0x5c58e6);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5c58e8:{NFSU2_TR(0x5c58e8);
if(r1(R+518)){{goto L5c5909;}}
}
B5c58ea:L5c58ea:{c.instructions+=4;NFSU2_TR(0x5c58ea);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
}
B5c58ed:{NFSU2_TR(0x5c58ed);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B5c58ee:{NFSU2_TR(0x5c58ee);
u8 U[4];
w1(R+523,sborrow<u32>(r4(R+0),u32(0x800494ull)));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x800494ull))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B5c58f3:{NFSU2_TR(0x5c58f3);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5c58e0u);}goto L5c58e0;}}
}
B5c58f5:L5c58f5:{c.instructions+=7;NFSU2_TR(0x5c58f5);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0xffffffffull))));
}
B5c58f8:{NFSU2_TR(0x5c58f8);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x86eb28ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B5c58ff:{NFSU2_TR(0x5c58ff);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5c5900:{NFSU2_TR(0x5c5900);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x3cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5c5903:{NFSU2_TR(0x5c5903);
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
B5c5905:{NFSU2_TR(0x5c5905);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5c5906:{NFSU2_TR(0x5c5906);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5c5909:L5c5909:{c.instructions+=8;NFSU2_TR(0x5c5909);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B5c590c:{NFSU2_TR(0x5c590c);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x800468ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B5c5913:{NFSU2_TR(0x5c5913);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x86eb28ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B5c591a:{NFSU2_TR(0x5c591a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5c591b:{NFSU2_TR(0x5c591b);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x3cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5c591e:{NFSU2_TR(0x5c591e);
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
B5c5920:{NFSU2_TR(0x5c5920);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5c5921:{NFSU2_TR(0x5c5921);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5c5930:L5c5930:{c.instructions+=10;NFSU2_TR(0x5c5930);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x20ull))));
}
B5c5933:{NFSU2_TR(0x5c5933);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c5934:{NFSU2_TR(0x5c5934);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c5935:{NFSU2_TR(0x5c5935);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B5c5939:{NFSU2_TR(0x5c5939);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5c593c:{NFSU2_TR(0x5c593c);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B5c593e:{NFSU2_TR(0x5c593e);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5c5940:{NFSU2_TR(0x5c5940);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5c5944:{NFSU2_TR(0x5c5944);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5c5948:{NFSU2_TR(0x5c5948);
if(r1(R+518)){{goto L5c5bdf;}}
}
B5c594e:L5c594e:{c.instructions+=10;NFSU2_TR(0x5c594e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c594f:{NFSU2_TR(0x5c594f);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5c5953:{NFSU2_TR(0x5c5953);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(u32(0x200ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5c5959:{NFSU2_TR(0x5c5959);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c595a:{NFSU2_TR(0x5c595a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+28),(U+0),4);
}
B5c595c:{NFSU2_TR(0x5c595c);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5c595f:{NFSU2_TR(0x5c595f);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5c5962:{NFSU2_TR(0x5c5962);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5c5966:{NFSU2_TR(0x5c5966);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5c596a:{NFSU2_TR(0x5c596a);
if(r1(R+518)){{goto L5c598e;}}
}
B5c596c:L5c596c:{c.instructions+=2;NFSU2_TR(0x5c596c);
u8 U[8];
__builtin_memmove((U+0),gp(0x870cc4),4);
w4(U+4,u32(u32(r4(U+0))-u32(r4(R+12))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5c5972:{NFSU2_TR(0x5c5972);
if(r1(R+518)){{goto L5c598e;}}
}
B5c5974:L5c5974:{c.instructions+=2;NFSU2_TR(0x5c5974);
u8 U[8];
__builtin_memmove((U+0),gp(0x870cd4),4);
w4(U+4,u32(u32(r4(U+0))-u32(r4(R+12))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5c597a:{NFSU2_TR(0x5c597a);
if(r1(R+518)){{goto L5c5985;}}
}
B5c597c:L5c597c:{c.instructions+=2;NFSU2_TR(0x5c597c);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x38ull))));
w4(U+4,u32(0x7ff090ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5c5983:{NFSU2_TR(0x5c5983);
{goto L5c599d;}
}
B5c5985:L5c5985:{c.instructions+=2;NFSU2_TR(0x5c5985);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x38ull))));
w4(U+4,u32(0x7ff0b4ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5c598c:{NFSU2_TR(0x5c598c);
{goto L5c599d;}
}
B5c598e:L5c598e:{c.instructions+=2;NFSU2_TR(0x5c598e);
u8 U[8];
__builtin_memmove((U+0),gp(0x870cd4),4);
w4(U+4,u32(u32(r4(U+0))-u32(r4(R+12))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5c5994:{NFSU2_TR(0x5c5994);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5c599d;}}
}
B5c5996:L5c5996:{c.instructions+=1;NFSU2_TR(0x5c5996);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x38ull))));
w4(U+4,u32(0x7ff0d8ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5c599d:L5c599d:{c.instructions+=4;NFSU2_TR(0x5c599d);
__builtin_memmove((R+0),gp(0x8707cd),1);
}
B5c59a2:{NFSU2_TR(0x5c59a2);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5c59a4:{NFSU2_TR(0x5c59a4);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5c59a8:{NFSU2_TR(0x5c59a8);
if(r1(R+518)){{goto L5c59bc;}}
}
B5c59aa:L5c59aa:{c.instructions+=3;NFSU2_TR(0x5c59aa);
__builtin_memmove((R+8),gp(0x870848),4);
}
B5c59b0:{NFSU2_TR(0x5c59b0);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(r4(R+12))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B5c59b2:{NFSU2_TR(0x5c59b2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5c59bc;}}
}
B5c59b4:L5c59b4:{c.instructions+=1;NFSU2_TR(0x5c59b4);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5c59bc:L5c59bc:{c.instructions+=4;NFSU2_TR(0x5c59bc);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5c59bf:{NFSU2_TR(0x5c59bf);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5c59c1:{NFSU2_TR(0x5c59c1);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5c59c5:{NFSU2_TR(0x5c59c5);
if(r1(R+518)){{goto L5c59e0;}}
}
B5c59c7:L5c59c7:{c.instructions+=4;NFSU2_TR(0x5c59c7);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5c59ca:{NFSU2_TR(0x5c59ca);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B5c59cd:{NFSU2_TR(0x5c59cd);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5c59d0:{NFSU2_TR(0x5c59d0);
if(r1(R+518)){{goto L5c59dd;}}
}
B5c59d2:L5c59d2:{c.instructions+=2;NFSU2_TR(0x5c59d2);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x86eb28ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B5c59d9:{NFSU2_TR(0x5c59d9);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5c59dd:L5c59dd:{c.instructions+=1;NFSU2_TR(0x5c59dd);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5c59e0:L5c59e0:{c.instructions+=2;NFSU2_TR(0x5c59e0);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B5c59e3:{NFSU2_TR(0x5c59e3);
if(r1(R+518)){{goto L5c59ec;}}
}
B5c59e5:L5c59e5:{c.instructions+=2;NFSU2_TR(0x5c59e5);
__builtin_memmove((R+4),(R+20),4);
}
B5c59e7:{NFSU2_TR(0x5c59e7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c59ecull));
TAIL_STATIC(0x4905a0u,490);
}
B5c59ec:L5c59ec:{c.instructions+=2;NFSU2_TR(0x5c59ec);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0xbe43edbbull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B5c59f3:{NFSU2_TR(0x5c59f3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5c5a0f;}}
}
B5c59f5:L5c59f5:{c.instructions+=1;NFSU2_TR(0x5c59f5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c59faull));
TAIL_STATIC(0x60fdf0u,60f);
}
B5c59fa:L5c59fa:{c.instructions+=2;NFSU2_TR(0x5c59fa);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5c59fc:{NFSU2_TR(0x5c59fc);
if(r1(R+518)){{goto L5c5a0f;}}
}
B5c59fe:L5c59fe:{c.instructions+=2;NFSU2_TR(0x5c59fe);
u8 U[8];
__builtin_memmove((U+0),gp(0x870d14),4);
w4(U+4,u32(u32(r4(U+0))-u32(r4(R+12))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5c5a04:{NFSU2_TR(0x5c5a04);
if(r1(R+518)){{goto L5c5a0f;}}
}
B5c5a06:L5c5a06:{c.instructions+=2;NFSU2_TR(0x5c5a06);
__builtin_memmove((R+0),gp(0x86eb78),4);
}
B5c5a0b:{NFSU2_TR(0x5c5a0b);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5c5a0f:L5c5a0f:{c.instructions+=3;NFSU2_TR(0x5c5a0f);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5c5a13:{NFSU2_TR(0x5c5a13);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B5c5a16:{NFSU2_TR(0x5c5a16);
if(r1(R+518)){{goto L5c5bd6;}}
}
B5c5a1c:L5c5a1c:{c.instructions+=3;NFSU2_TR(0x5c5a1c);
__builtin_memmove((R+4),gp(0x870848),4);
}
B5c5a22:{NFSU2_TR(0x5c5a22);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(r4(R+12))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B5c5a24:{NFSU2_TR(0x5c5a24);
if(r1(R+518)){{goto L5c5a36;}}
}
B5c5a26:L5c5a26:{c.instructions+=2;NFSU2_TR(0x5c5a26);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x5ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B5c5a2a:{NFSU2_TR(0x5c5a2a);
if(r1(R+518)){{goto L5c5a36;}}
}
B5c5a2c:L5c5a2c:{c.instructions+=2;NFSU2_TR(0x5c5a2c);
__builtin_memmove((R+8),gp(0x86eb44),4);
}
B5c5a32:{NFSU2_TR(0x5c5a32);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5c5a36:L5c5a36:{c.instructions+=3;NFSU2_TR(0x5c5a36);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(U+8),r4(R+12)));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B5c5a39:{NFSU2_TR(0x5c5a39);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5c5a3d:{NFSU2_TR(0x5c5a3d);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5c5bd6;}}
}
B5c5a43:L5c5a43:{c.instructions+=6;NFSU2_TR(0x5c5a43);
__builtin_memmove((R+0),(R+24),4);
}
B5c5a45:{NFSU2_TR(0x5c5a45);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x4ull))));
}
B5c5a48:{NFSU2_TR(0x5c5a48);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5c5a4c:{NFSU2_TR(0x5c5a4c);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B5c5a50:{NFSU2_TR(0x5c5a50);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5c5a54:{NFSU2_TR(0x5c5a54);
{goto L5c5a60;}
}
B5c5a56:L5c5a56:{c.instructions+=2;NFSU2_TR(0x5c5a56);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5c5a5a:{NFSU2_TR(0x5c5a5a);
__builtin_memmove((R+12),(R+12),4);
}
B5c5a60:L5c5a60:{c.instructions+=4;NFSU2_TR(0x5c5a60);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5c5a63:{NFSU2_TR(0x5c5a63);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+24,u32(u32(r4(R+24))+u32(r4(U+4))));
}
B5c5a67:{NFSU2_TR(0x5c5a67);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5c5a69:{NFSU2_TR(0x5c5a69);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5c5a8c;}}
}
B5c5a6b:L5c5a6b:{c.instructions+=2;NFSU2_TR(0x5c5a6b);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B5c5a6f:{NFSU2_TR(0x5c5a6f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5c5a8c;}}
}
B5c5a71:L5c5a71:{c.instructions+=7;NFSU2_TR(0x5c5a71);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5c5a75:{NFSU2_TR(0x5c5a75);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c5a76:{NFSU2_TR(0x5c5a76);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5c5a79:{NFSU2_TR(0x5c5a79);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c5a7a:{NFSU2_TR(0x5c5a7a);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5c5a7e:{NFSU2_TR(0x5c5a7e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c5a7f:{NFSU2_TR(0x5c5a7f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c5a84ull));
TAIL_STATIC(0x5bc300u,5bc);
}
B5c5a84:L5c5a84:{c.instructions+=2;NFSU2_TR(0x5c5a84);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5c5a86:{NFSU2_TR(0x5c5a86);
if(r1(R+518)){{goto L5c5bb7;}}
}
B5c5a8c:L5c5a8c:{c.instructions+=7;NFSU2_TR(0x5c5a8c);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+8,u32(r1(U+4)));
}
B5c5a90:{NFSU2_TR(0x5c5a90);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5c5a94:{NFSU2_TR(0x5c5a94);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5c5a97:{NFSU2_TR(0x5c5a97);
u8 U[16];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x8ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+20),(U+12),4);
}
B5c5a9b:{NFSU2_TR(0x5c5a9b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5c5a9e:{NFSU2_TR(0x5c5a9e);
u8 U[8];
__builtin_memmove((U+0),gp(0x870a18),4);
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5c5aa4:{NFSU2_TR(0x5c5aa4);
if(r1(R+518)){{goto L5c5bb3;}}
}
B5c5aaa:L5c5aaa:{c.instructions+=3;NFSU2_TR(0x5c5aaa);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5c5aad:{NFSU2_TR(0x5c5aad);
u8 U[4];
w1(R+512,u8((r1(R+0))<(u8(0xffull))));
w1(R+523,sborrow<u8>(r1(R+0),u8(0xffull)));
w1(U+3,u8(u32(r1(R+0))-u32(u8(0xffull))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5c5aaf:{NFSU2_TR(0x5c5aaf);
if(r1(R+518)){{goto L5c5ac1;}}
}
B5c5ab1:L5c5ab1:{c.instructions+=5;NFSU2_TR(0x5c5ab1);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5c5ab5:{NFSU2_TR(0x5c5ab5);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5c5ab8:{NFSU2_TR(0x5c5ab8);
w4(R+0,u32(r1(R+0)));
}
B5c5abb:{NFSU2_TR(0x5c5abb);
u8 U[16];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x8ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B5c5abf:{NFSU2_TR(0x5c5abf);
{goto L5c5ac6;}
}
B5c5ac1:L5c5ac1:{c.instructions+=1;NFSU2_TR(0x5c5ac1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c5ac6ull));
TAIL_STATIC(0x48ac50u,48a);
}
B5c5ac6:L5c5ac6:{c.instructions+=4;NFSU2_TR(0x5c5ac6);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x56ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B5c5ac9:{NFSU2_TR(0x5c5ac9);
u8 U[2];
__builtin_memmove((U+0),(R+8),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x2ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B5c5acc:{NFSU2_TR(0x5c5acc);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5c5ad0:{NFSU2_TR(0x5c5ad0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5c5ae4;}}
}
B5c5ad2:L5c5ad2:{c.instructions+=3;NFSU2_TR(0x5c5ad2);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5c5ad5:{NFSU2_TR(0x5c5ad5);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5c5ad8:{NFSU2_TR(0x5c5ad8);
if(r1(R+518)){{goto L5c5ade;}}
}
B5c5ada:L5c5ada:{c.instructions+=2;NFSU2_TR(0x5c5ada);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5c5adc:{NFSU2_TR(0x5c5adc);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5c5ae4;}}
}
B5c5ade:L5c5ade:{c.instructions+=1;NFSU2_TR(0x5c5ade);
__builtin_memmove((R+4),gp(0x86eb44),4);
}
B5c5ae4:L5c5ae4:{c.instructions+=3;NFSU2_TR(0x5c5ae4);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5c5ae8:{NFSU2_TR(0x5c5ae8);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5c5aea:{NFSU2_TR(0x5c5aea);
if(r1(R+518)){{goto L5c5b65;}}
}
B5c5aec:L5c5aec:{c.instructions+=2;NFSU2_TR(0x5c5aec);
u8 U[2];
__builtin_memmove((U+0),(R+8),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x2ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B5c5aef:{NFSU2_TR(0x5c5aef);
if(r1(R+518)){{goto L5c5b27;}}
}
B5c5af1:L5c5af1:{c.instructions+=3;NFSU2_TR(0x5c5af1);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5c5af5:{NFSU2_TR(0x5c5af5);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5c5af8:{NFSU2_TR(0x5c5af8);
if(r1(R+518)){{goto L5c5aff;}}
}
B5c5afa:L5c5afa:{c.instructions+=2;NFSU2_TR(0x5c5afa);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5c5afd:{NFSU2_TR(0x5c5afd);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5c5b1e;}}
}
B5c5aff:L5c5aff:{c.instructions+=3;NFSU2_TR(0x5c5aff);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5c5b02:{NFSU2_TR(0x5c5b02);
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
B5c5b05:{NFSU2_TR(0x5c5b05);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L5c5b65;}}
}
B5c5b07:L5c5b07:{c.instructions+=1;NFSU2_TR(0x5c5b07);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x5c5be8ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5c5b0e:L5c5b0e:{c.instructions+=2;NFSU2_TR(0x5c5b0e);
__builtin_memmove((R+4),gp(0x86eb4c),4);
}
B5c5b14:{NFSU2_TR(0x5c5b14);
{goto L5c5b65;}
}
B5c5b16:L5c5b16:{c.instructions+=2;NFSU2_TR(0x5c5b16);
__builtin_memmove((R+4),gp(0x86eb50),4);
}
B5c5b1c:{NFSU2_TR(0x5c5b1c);
{goto L5c5b65;}
}
B5c5b1e:L5c5b1e:{c.instructions+=2;NFSU2_TR(0x5c5b1e);
u8 U[2];
__builtin_memmove((U+0),(R+8),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x2ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B5c5b21:{NFSU2_TR(0x5c5b21);
if(r1(R+518)){{goto L5c5b27;}}
}
B5c5b23:L5c5b23:{c.instructions+=2;NFSU2_TR(0x5c5b23);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(r1(R+8))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5c5b25:{NFSU2_TR(0x5c5b25);
if(r1(R+518)){{goto L5c5b38;}}
}
B5c5b27:L5c5b27:{c.instructions+=3;NFSU2_TR(0x5c5b27);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5c5b2a:{NFSU2_TR(0x5c5b2a);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5c5b2c:{NFSU2_TR(0x5c5b2c);
if(r1(R+518)){{goto L5c5b57;}}
}
B5c5b2e:L5c5b2e:{c.instructions+=2;NFSU2_TR(0x5c5b2e);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5c5b31:{NFSU2_TR(0x5c5b31);
if(r1(R+518)){{goto L5c5b53;}}
}
B5c5b33:L5c5b33:{c.instructions+=2;NFSU2_TR(0x5c5b33);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x7ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5c5b36:{NFSU2_TR(0x5c5b36);
if(r1(R+518)){{goto L5c5b53;}}
}
B5c5b38:L5c5b38:{c.instructions+=3;NFSU2_TR(0x5c5b38);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5c5b3b:{NFSU2_TR(0x5c5b3b);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x2ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
}
B5c5b3e:{NFSU2_TR(0x5c5b3e);
if(r1(R+518)){{goto L5c5b4b;}}
}
B5c5b40:L5c5b40:{c.instructions+=2;NFSU2_TR(0x5c5b40);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
}
B5c5b41:{NFSU2_TR(0x5c5b41);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5c5b65;}}
}
B5c5b43:L5c5b43:{c.instructions+=2;NFSU2_TR(0x5c5b43);
__builtin_memmove((R+4),gp(0x86eb58),4);
}
B5c5b49:{NFSU2_TR(0x5c5b49);
{goto L5c5b65;}
}
B5c5b4b:L5c5b4b:{c.instructions+=2;NFSU2_TR(0x5c5b4b);
__builtin_memmove((R+4),gp(0x86eb54),4);
}
B5c5b51:{NFSU2_TR(0x5c5b51);
{goto L5c5b65;}
}
B5c5b53:L5c5b53:{c.instructions+=2;NFSU2_TR(0x5c5b53);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5c5b55:{NFSU2_TR(0x5c5b55);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5c5b5f;}}
}
B5c5b57:L5c5b57:{c.instructions+=2;NFSU2_TR(0x5c5b57);
__builtin_memmove((R+4),gp(0x86eb5c),4);
}
B5c5b5d:{NFSU2_TR(0x5c5b5d);
{goto L5c5b65;}
}
B5c5b5f:L5c5b5f:{c.instructions+=1;NFSU2_TR(0x5c5b5f);
__builtin_memmove((R+4),gp(0x86eb60),4);
}
B5c5b65:L5c5b65:{c.instructions+=2;NFSU2_TR(0x5c5b65);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x5ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B5c5b69:{NFSU2_TR(0x5c5b69);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5c5b76;}}
}
B5c5b6b:L5c5b6b:{c.instructions+=2;NFSU2_TR(0x5c5b6b);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5c5b6d:{NFSU2_TR(0x5c5b6d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5c5b76;}}
}
B5c5b6f:L5c5b6f:{c.instructions+=2;NFSU2_TR(0x5c5b6f);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5c5b73:{NFSU2_TR(0x5c5b73);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B5c5b76:L5c5b76:{c.instructions+=3;NFSU2_TR(0x5c5b76);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5c5b79:{NFSU2_TR(0x5c5b79);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x6d57415ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5c5b7f:{NFSU2_TR(0x5c5b7f);
if(r1(R+518)){{goto L5c5b89;}}
}
B5c5b81:L5c5b81:{c.instructions+=2;NFSU2_TR(0x5c5b81);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xbd3d01a8ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5c5b87:{NFSU2_TR(0x5c5b87);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5c5b8f;}}
}
B5c5b89:L5c5b89:{c.instructions+=1;NFSU2_TR(0x5c5b89);
__builtin_memmove((R+4),gp(0x86eb80),4);
}
B5c5b8f:L5c5b8f:{c.instructions+=14;NFSU2_TR(0x5c5b8f);
u8 U[8];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5c5b93:{NFSU2_TR(0x5c5b93);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c5b94:{NFSU2_TR(0x5c5b94);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5c5b98:{NFSU2_TR(0x5c5b98);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c5b99:{NFSU2_TR(0x5c5b99);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5c5b9d:{NFSU2_TR(0x5c5b9d);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c5b9e:{NFSU2_TR(0x5c5b9e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c5b9f:{NFSU2_TR(0x5c5b9f);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c5ba0:{NFSU2_TR(0x5c5ba0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c5ba1:{NFSU2_TR(0x5c5ba1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5c5ba4:{NFSU2_TR(0x5c5ba4);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c5ba5:{NFSU2_TR(0x5c5ba5);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c5ba6:{NFSU2_TR(0x5c5ba6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c5ba7:{NFSU2_TR(0x5c5ba7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c5bacull));
TAIL_STATIC(0x5ceb30u,5ce);
}
B5c5bac:L5c5bac:{c.instructions+=2;NFSU2_TR(0x5c5bac);
u8 U[8];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5c5bb0:{NFSU2_TR(0x5c5bb0);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x24ull))));
}
B5c5bb3:L5c5bb3:{c.instructions+=1;NFSU2_TR(0x5c5bb3);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B5c5bb7:L5c5bb7:{c.instructions+=9;NFSU2_TR(0x5c5bb7);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5c5bbb:{NFSU2_TR(0x5c5bbb);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5c5bbf:{NFSU2_TR(0x5c5bbf);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5c5bc2:{NFSU2_TR(0x5c5bc2);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B5c5bc3:{NFSU2_TR(0x5c5bc3);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x3cull))));
}
B5c5bc6:{NFSU2_TR(0x5c5bc6);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5c5bc8:{NFSU2_TR(0x5c5bc8);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5c5bcc:{NFSU2_TR(0x5c5bcc);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5c5bd0:{NFSU2_TR(0x5c5bd0);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5c5a56u);}goto L5c5a56;}}
}
B5c5bd6:L5c5bd6:{c.instructions+=2;NFSU2_TR(0x5c5bd6);
__builtin_memmove((R+4),(R+20),4);
}
B5c5bd8:{NFSU2_TR(0x5c5bd8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c5bddull));
TAIL_STATIC(0x488e40u,488);
}
B5c5bdd:L5c5bdd:{c.instructions+=2;NFSU2_TR(0x5c5bdd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5c5bde:{NFSU2_TR(0x5c5bde);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5c5bdf:L5c5bdf:{c.instructions+=4;NFSU2_TR(0x5c5bdf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5c5be0:{NFSU2_TR(0x5c5be0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5c5be1:{NFSU2_TR(0x5c5be1);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x20ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x20ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x20ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5c5be4:{NFSU2_TR(0x5c5be4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5c5c00:L5c5c00:{c.instructions+=11;NFSU2_TR(0x5c5c00);
u8 U[6];
w1(R+512,u8((r4(R+16))<(u32(0x13cull))));
w1(R+523,sborrow<u32>(r4(R+16),u32(0x13cull)));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x13cull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5c5c06:{NFSU2_TR(0x5c5c06);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c5c07:{NFSU2_TR(0x5c5c07);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c5c08:{NFSU2_TR(0x5c5c08);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c5c09:{NFSU2_TR(0x5c5c09);
u8 U[8];
w4(U+0,u32(u32(u32(0x14cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5c5c10:{NFSU2_TR(0x5c5c10);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5c5c12:{NFSU2_TR(0x5c5c12);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c5c13:{NFSU2_TR(0x5c5c13);
u8 U[4];
w4(U+0,u32(u32(u32(0x12cull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5c5c1a:{NFSU2_TR(0x5c5c1a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c5c1b:{NFSU2_TR(0x5c5c1b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c5c1c:{NFSU2_TR(0x5c5c1c);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c5c1full));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5c5c1f:L5c5c1f:{c.instructions+=7;NFSU2_TR(0x5c5c1f);
__builtin_memmove((R+0),gp(0x870974),4);
}
B5c5c24:{NFSU2_TR(0x5c5c24);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5c5c26:{NFSU2_TR(0x5c5c26);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c5c27:{NFSU2_TR(0x5c5c27);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
w1(R+519,u8(s32(r4(R+20))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+20))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+20))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5c5c29:{NFSU2_TR(0x5c5c29);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c5c2a:{NFSU2_TR(0x5c5c2a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c5c2b:{NFSU2_TR(0x5c5c2b);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x94ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c5c31ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5c5c31:L5c5c31:{c.instructions+=5;NFSU2_TR(0x5c5c31);
__builtin_memmove((R+0),gp(0x870974),4);
}
B5c5c36:{NFSU2_TR(0x5c5c36);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5c5c38:{NFSU2_TR(0x5c5c38);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c5c39:{NFSU2_TR(0x5c5c39);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c5c3a:{NFSU2_TR(0x5c5c3a);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x9cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c5c40ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5c5c40:L5c5c40:{c.instructions+=20;NFSU2_TR(0x5c5c40);
u8 U[8];
w4(U+0,u32(u32(u32(0x160ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5c5c47:{NFSU2_TR(0x5c5c47);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0xffffffffull))));
}
B5c5c4a:{NFSU2_TR(0x5c5c4a);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5c5c4e:{NFSU2_TR(0x5c5c4e);
u8 U[8];
w4(U+0,u32(u32(u32(0x68ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5c5c52:{NFSU2_TR(0x5c5c52);
u8 U[8];
w4(U+0,u32(u32(u32(0x98ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5c5c59:{NFSU2_TR(0x5c5c59);
u8 U[8];
w4(U+0,u32(u32(u32(0xc8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5c5c60:{NFSU2_TR(0x5c5c60);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5c5c62:{NFSU2_TR(0x5c5c62);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
w4(U+4,u32(0xbf800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5c5c6a:{NFSU2_TR(0x5c5c6a);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5c5c72:{NFSU2_TR(0x5c5c72);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5c5c76:{NFSU2_TR(0x5c5c76);
u8 U[8];
w4(U+0,u32(u32(u32(0x5cull))+u32(r4(R+16))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5c5c7e:{NFSU2_TR(0x5c5c7e);
u8 U[8];
w4(U+0,u32(u32(u32(0x60ull))+u32(r4(R+16))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5c5c86:{NFSU2_TR(0x5c5c86);
u8 U[8];
w4(U+0,u32(u32(u32(0x64ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5c5c8a:{NFSU2_TR(0x5c5c8a);
u8 U[8];
w4(U+0,u32(u32(u32(0x8cull))+u32(r4(R+16))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5c5c95:{NFSU2_TR(0x5c5c95);
u8 U[8];
w4(U+0,u32(u32(u32(0x90ull))+u32(r4(R+16))));
w4(U+4,u32(0xbf800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5c5ca0:{NFSU2_TR(0x5c5ca0);
u8 U[8];
w4(U+0,u32(u32(u32(0x94ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5c5ca7:{NFSU2_TR(0x5c5ca7);
u8 U[8];
w4(U+0,u32(u32(u32(0xbcull))+u32(r4(R+16))));
w4(U+4,u32(0xbf800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5c5cb2:{NFSU2_TR(0x5c5cb2);
u8 U[8];
w4(U+0,u32(u32(u32(0xc0ull))+u32(r4(R+16))));
w4(U+4,u32(0xbf800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5c5cbd:{NFSU2_TR(0x5c5cbd);
u8 U[8];
w4(U+0,u32(u32(u32(0xc4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5c5cc4:{NFSU2_TR(0x5c5cc4);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5c5cc8:L5c5cc8:{c.instructions+=27;NFSU2_TR(0x5c5cc8);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B5c5ccc:{NFSU2_TR(0x5c5ccc);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B5c5ccd:{NFSU2_TR(0x5c5ccd);
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
B5c5cd0:{NFSU2_TR(0x5c5cd0);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B5c5cd4:{NFSU2_TR(0x5c5cd4);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c5cd6:{NFSU2_TR(0x5c5cd6);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B5c5cd8:{NFSU2_TR(0x5c5cd8);
{u32 ea_=u32((r4(R+0)*8u)+r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B5c5cdc:{NFSU2_TR(0x5c5cdc);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c5ce0:{NFSU2_TR(0x5c5ce0);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c5ce3:{NFSU2_TR(0x5c5ce3);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B5c5ce5:{NFSU2_TR(0x5c5ce5);
{u32 ea_=u32((r4(R+0)*8u)+r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B5c5ce9:{NFSU2_TR(0x5c5ce9);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c5ced:{NFSU2_TR(0x5c5ced);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c5cf0:{NFSU2_TR(0x5c5cf0);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B5c5cf6:{NFSU2_TR(0x5c5cf6);
{u32 ea_=u32((r4(R+0)*8u)+r4(R+16)+u32(100u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B5c5cfa:{NFSU2_TR(0x5c5cfa);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5c5cfc:{NFSU2_TR(0x5c5cfc);
{u32 ea_=u32((r4(R+0)*8u)+r4(R+16)+u32(104u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5c5d00:{NFSU2_TR(0x5c5d00);
{u32 ea_=u32((r4(R+0)*8u)+r4(R+16)+u32(148u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5c5d07:{NFSU2_TR(0x5c5d07);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c5d0b:{NFSU2_TR(0x5c5d0b);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5c5d0f:{NFSU2_TR(0x5c5d0f);
{u32 ea_=u32(r4(R+4)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c5d12:{NFSU2_TR(0x5c5d12);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B5c5d18:{NFSU2_TR(0x5c5d18);
{u32 ea_=u32((r4(R+0)*8u)+r4(R+16)+u32(152u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B5c5d1f:{NFSU2_TR(0x5c5d1f);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5c5d21:{NFSU2_TR(0x5c5d21);
{u32 ea_=u32((r4(R+0)*8u)+r4(R+16)+u32(196u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5c5d28:{NFSU2_TR(0x5c5d28);
{u32 ea_=u32((r4(R+0)*8u)+r4(R+16)+u32(200u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5c5d2f:{NFSU2_TR(0x5c5d2f);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5c5cc8u);}goto L5c5cc8;}}
}
B5c5d31:L5c5d31:{c.instructions+=5;NFSU2_TR(0x5c5d31);
__builtin_memmove((R+24),gp(0x86eb64),4);
}
B5c5d37:{NFSU2_TR(0x5c5d37);
__builtin_memmove(gp(0x870910),(R+24),4);
}
B5c5d3d:{NFSU2_TR(0x5c5d3d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5c5d3f:{NFSU2_TR(0x5c5d3f);
__builtin_memmove((R+4),(R+24),4);
}
B5c5d41:{NFSU2_TR(0x5c5d41);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c5d44ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5c5d44:L5c5d44:{c.instructions+=6;NFSU2_TR(0x5c5d44);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5c5d47:{NFSU2_TR(0x5c5d47);
__builtin_memmove((R+0),gp(0x870974),4);
}
B5c5d4c:{NFSU2_TR(0x5c5d4c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5c5d4e:{NFSU2_TR(0x5c5d4e);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c5d4f:{NFSU2_TR(0x5c5d4f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c5d50:{NFSU2_TR(0x5c5d50);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x15cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c5d56ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5c5d56:L5c5d56:{c.instructions+=7;NFSU2_TR(0x5c5d56);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5c5d59:{NFSU2_TR(0x5c5d59);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5c5d5b:{NFSU2_TR(0x5c5d5b);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c5d5c:{NFSU2_TR(0x5c5d5c);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5c5d60:{NFSU2_TR(0x5c5d60);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c5d61:{NFSU2_TR(0x5c5d61);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c5d62:{NFSU2_TR(0x5c5d62);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x104ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c5d68ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5c5d68:L5c5d68:{c.instructions+=7;NFSU2_TR(0x5c5d68);
u8 U[8];
w4(U+0,u32(u32(u32(0x158ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B5c5d6f:{NFSU2_TR(0x5c5d6f);
u8 U[14];
__builtin_memmove((U+6),(R+20),4);
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
B5c5d71:{NFSU2_TR(0x5c5d71);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(0x15ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5c5d79:{NFSU2_TR(0x5c5d79);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0x16ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5c5d81:{NFSU2_TR(0x5c5d81);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0x17ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5c5d89:{NFSU2_TR(0x5c5d89);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
w4(U+4,u32(0x18ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5c5d91:{NFSU2_TR(0x5c5d91);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5c5df0;}}
}
B5c5d93:L5c5d93:{c.instructions+=2;NFSU2_TR(0x5c5d93);
u8 U[8];
w4(U+0,u32(u32(u32(0x15cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B5c5d9a:{NFSU2_TR(0x5c5d9a);
u8 U[4];
w4(U+0,u32(u32(u32(0xf0ull))+u32(r4(R+16))));
__builtin_memmove((R+28),(U+0),4);
}
B5c5da1:L5c5da1:{c.instructions+=12;NFSU2_TR(0x5c5da1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5c5da4:{NFSU2_TR(0x5c5da4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5c5da6:{NFSU2_TR(0x5c5da6);
u8 U[8];
w4(U+0,u32(u32(u32(0x154ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5c5dad:{NFSU2_TR(0x5c5dad);
u8 U[16];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+20))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B5c5db1:{NFSU2_TR(0x5c5db1);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c5db2:{NFSU2_TR(0x5c5db2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5c5db5:{NFSU2_TR(0x5c5db5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B5c5db8:{NFSU2_TR(0x5c5db8);
u8 U[16];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x8ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B5c5dbc:{NFSU2_TR(0x5c5dbc);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c5dbd:{NFSU2_TR(0x5c5dbd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5c5dc0:{NFSU2_TR(0x5c5dc0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c5dc1:{NFSU2_TR(0x5c5dc1);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c5dc7ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5c5dc7:L5c5dc7:{c.instructions+=13;NFSU2_TR(0x5c5dc7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5c5dc9:{NFSU2_TR(0x5c5dc9);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5c5dcc:{NFSU2_TR(0x5c5dcc);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5c5dcf:{NFSU2_TR(0x5c5dcf);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5c5dd2:{NFSU2_TR(0x5c5dd2);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5c5dd5:{NFSU2_TR(0x5c5dd5);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5c5dd8:{NFSU2_TR(0x5c5dd8);
u8 U[8];
w4(U+0,u32(u32(u32(0x158ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5c5ddf:{NFSU2_TR(0x5c5ddf);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+28)),r4(U+0));
}
B5c5de1:{NFSU2_TR(0x5c5de1);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5c5de4:{NFSU2_TR(0x5c5de4);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x1ull))));
}
B5c5de5:{NFSU2_TR(0x5c5de5);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x10ull))));
}
B5c5de8:{NFSU2_TR(0x5c5de8);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
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
B5c5dea:{NFSU2_TR(0x5c5dea);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5c5da1u);}goto L5c5da1;}}
}
B5c5dec:L5c5dec:{c.instructions+=2;NFSU2_TR(0x5c5dec);
__builtin_memmove((R+12),(R+0),4);
}
B5c5dee:{NFSU2_TR(0x5c5dee);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B5c5df0:L5c5df0:{c.instructions+=2;NFSU2_TR(0x5c5df0);
u8 U[14];
__builtin_memmove((U+6),(R+12),4);
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
B5c5df3:{NFSU2_TR(0x5c5df3);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L5c5e34;}}
}
B5c5df5:L5c5df5:{c.instructions+=3;NFSU2_TR(0x5c5df5);
__builtin_memmove((R+8),(R+12),4);
}
B5c5df7:{NFSU2_TR(0x5c5df7);
u8 U[45];
w4(U+37,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
__builtin_memmove((U+41),(R+8),4);
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+37))));
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
w1(U+35,u8(s32(r4(R+8))<s32(u32(0x0ull))));
w1(U+36,u8(u32(r1(R+512))^u32(r1(U+35))));
__builtin_memmove((U+0),(U+34),1);
w1(U+1,u8(u32(r1(U+0))*u32(r1(U+36))));
w1(U+2,u8(!(r1(U+34))));
__builtin_memmove((U+3),(U+2),1);
w1(U+4,u8(u32(r1(U+3))*u32(r1(R+523))));
w1(R+523,u8(u32(r1(U+1))|u32(r1(U+4))));
w1(U+5,u8((r4(U+37))!=(u32(0x0ull))));
w1(U+6,u8(s32(r4(R+8))<s32(u32(0x0ull))));
w1(U+7,u8(!(r1(U+5))));
w1(U+8,u8(u32(r1(U+7))&u32(r1(R+519))));
w1(U+9,u8(u32(r1(U+5))&u32(r1(U+6))));
w1(R+519,u8(u32(r1(U+8))|u32(r1(U+9))));
w1(U+10,u8((r4(R+8))==(u32(0x0ull))));
w1(U+11,u8(!(r1(U+5))));
w1(U+12,u8(u32(r1(U+11))&u32(r1(R+518))));
w1(U+13,u8(u32(r1(U+5))&u32(r1(U+10))));
w1(R+518,u8(u32(r1(U+12))|u32(r1(U+13))));
w4(U+14,u32(u32(r4(R+8))&u32(u32(0xffull))));
w1(U+18,u8(__builtin_popcountll(u64(r4(U+14)))));
w1(U+19,u8(u32(r1(U+18))&u32(u8(0x1ull))));
w1(U+20,u8((r1(U+19))==(u8(0x0ull))));
w1(U+21,u8(!(r1(U+5))));
w1(U+22,u8(u32(r1(U+21))&u32(r1(R+514))));
w1(U+23,u8(u32(r1(U+5))&u32(r1(U+20))));
w1(R+514,u8(u32(r1(U+22))|u32(r1(U+23))));
}
B5c5dfa:{NFSU2_TR(0x5c5dfa);
u8 U[12];
w4(U+0,u32(u32(u32(0xf0ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+28),(U+8),4);
}
B5c5e01:L5c5e01:{c.instructions+=11;NFSU2_TR(0x5c5e01);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5c5e04:{NFSU2_TR(0x5c5e04);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5c5e06:{NFSU2_TR(0x5c5e06);
u8 U[16];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B5c5e0a:{NFSU2_TR(0x5c5e0a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B5c5e0d:{NFSU2_TR(0x5c5e0d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5c5e10:{NFSU2_TR(0x5c5e10);
u8 U[16];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x8ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+8),(U+12),4);
}
B5c5e14:{NFSU2_TR(0x5c5e14);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5c5e17:{NFSU2_TR(0x5c5e17);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c5e18:{NFSU2_TR(0x5c5e18);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c5e19:{NFSU2_TR(0x5c5e19);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c5e1a:{NFSU2_TR(0x5c5e1a);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c5e20ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5c5e20:L5c5e20:{c.instructions+=8;NFSU2_TR(0x5c5e20);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5c5e23:{NFSU2_TR(0x5c5e23);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
s4(u32(r4(R+28)),r4(U+0));
}
B5c5e25:{NFSU2_TR(0x5c5e25);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5c5e28:{NFSU2_TR(0x5c5e28);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5c5e2b:{NFSU2_TR(0x5c5e2b);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B5c5e2c:{NFSU2_TR(0x5c5e2c);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x10ull))));
}
B5c5e2f:{NFSU2_TR(0x5c5e2f);
u8 U[14];
__builtin_memmove((U+6),(R+12),4);
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
B5c5e32:{NFSU2_TR(0x5c5e32);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5c5e01u);}goto L5c5e01;}}
}
B5c5e34:L5c5e34:{c.instructions+=10;NFSU2_TR(0x5c5e34);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5c5e37:{NFSU2_TR(0x5c5e37);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5c5e39:{NFSU2_TR(0x5c5e39);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c5e3b:{NFSU2_TR(0x5c5e3b);
u8 U[4];
w4(U+0,u32(u32(u32(0xf0ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5c5e42:{NFSU2_TR(0x5c5e42);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c5e43:{NFSU2_TR(0x5c5e43);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5c5e46:{NFSU2_TR(0x5c5e46);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x40cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5c5e4c:{NFSU2_TR(0x5c5e4c);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c5e4d:{NFSU2_TR(0x5c5e4d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c5e4e:{NFSU2_TR(0x5c5e4e);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x90ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c5e54ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5c5e54:L5c5e54:{c.instructions+=4;NFSU2_TR(0x5c5e54);
u8 U[4];
w4(U+0,u32(0x6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c5e56:{NFSU2_TR(0x5c5e56);
u8 U[4];
w4(U+0,u32(0x5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c5e58:{NFSU2_TR(0x5c5e58);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c5e59:{NFSU2_TR(0x5c5e59);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c5e5eull));
TAIL_STATIC(0x5bcbc0u,5bc);
}
B5c5e5e:L5c5e5e:{c.instructions+=3;NFSU2_TR(0x5c5e5e);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c5e5f:{NFSU2_TR(0x5c5e5f);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c5e60:{NFSU2_TR(0x5c5e60);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c5e65ull));
TAIL_STATIC(0x5bcb70u,5bc);
}
B5c5e65:L5c5e65:{c.instructions+=2;NFSU2_TR(0x5c5e65);
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
B5c5e68:{NFSU2_TR(0x5c5e68);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c5e6dull));
TAIL_STATIC(0x5bdf90u,5bd);
}
B5c5e6d:L5c5e6d:{c.instructions+=7;NFSU2_TR(0x5c5e6d);
__builtin_memmove((R+8),gp(0x7ff770),4);
}
B5c5e73:{NFSU2_TR(0x5c5e73);
__builtin_memmove((R+0),gp(0x870974),4);
}
B5c5e78:{NFSU2_TR(0x5c5e78);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c5e79:{NFSU2_TR(0x5c5e79);
__builtin_memmove(gp(0x87092c),(R+20),4);
}
B5c5e7f:{NFSU2_TR(0x5c5e7f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5c5e81:{NFSU2_TR(0x5c5e81);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c5e82:{NFSU2_TR(0x5c5e82);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x164ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c5e88ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5c5e88:L5c5e88:{c.instructions+=5;NFSU2_TR(0x5c5e88);
__builtin_memmove((R+0),gp(0x870910),4);
}
B5c5e8d:{NFSU2_TR(0x5c5e8d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5c5e90:{NFSU2_TR(0x5c5e90);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5c5e92:{NFSU2_TR(0x5c5e92);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c5e93:{NFSU2_TR(0x5c5e93);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c5e99ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5c5e99:L5c5e99:{c.instructions+=7;NFSU2_TR(0x5c5e99);
u8 U[8];
w4(U+0,u32(u32(u32(0x158ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5c5ea0:{NFSU2_TR(0x5c5ea0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5c5ea3:{NFSU2_TR(0x5c5ea3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5c5ea5:{NFSU2_TR(0x5c5ea5);
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
B5c5ea6:{NFSU2_TR(0x5c5ea6);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c5ea7:{NFSU2_TR(0x5c5ea7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c5ea8:{NFSU2_TR(0x5c5ea8);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x108ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c5eaeull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5c5eae:L5c5eae:{c.instructions+=9;NFSU2_TR(0x5c5eae);
__builtin_memmove((R+0),gp(0x870974),4);
}
B5c5eb3:{NFSU2_TR(0x5c5eb3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5c5eb5:{NFSU2_TR(0x5c5eb5);
u8 U[4];
w4(U+0,u32(0x30ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c5eb7:{NFSU2_TR(0x5c5eb7);
u8 U[4];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5c5ebb:{NFSU2_TR(0x5c5ebb);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c5ebc:{NFSU2_TR(0x5c5ebc);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c5ebe:{NFSU2_TR(0x5c5ebe);
u8 U[4];
w4(U+0,u32(0x6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c5ec0:{NFSU2_TR(0x5c5ec0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c5ec1:{NFSU2_TR(0x5c5ec1);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x14cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c5ec7ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5c5ec7:L5c5ec7:{c.instructions+=4;NFSU2_TR(0x5c5ec7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5c5eca:{NFSU2_TR(0x5c5eca);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5c5ecc:{NFSU2_TR(0x5c5ecc);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c5ecd:{NFSU2_TR(0x5c5ecd);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x110ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c5ed3ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5c5ed3:L5c5ed3:{c.instructions+=3;NFSU2_TR(0x5c5ed3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5c5ed5:{NFSU2_TR(0x5c5ed5);
__builtin_memmove((R+4),(R+24),4);
}
B5c5ed7:{NFSU2_TR(0x5c5ed7);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c5edaull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5c5eda:L5c5eda:{c.instructions+=4;NFSU2_TR(0x5c5eda);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5c5edd:{NFSU2_TR(0x5c5edd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5c5edf:{NFSU2_TR(0x5c5edf);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c5ee0:{NFSU2_TR(0x5c5ee0);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x114ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c5ee6ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5c5ee6:L5c5ee6:{c.instructions+=3;NFSU2_TR(0x5c5ee6);
__builtin_memmove((R+24),gp(0x870848),4);
}
B5c5eec:{NFSU2_TR(0x5c5eec);
__builtin_memmove(gp(0x870910),(R+20),4);
}
B5c5ef2:{NFSU2_TR(0x5c5ef2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c5ef7ull));
TAIL_STATIC(0x5cf420u,5cf);
}
B5c5ef7:L5c5ef7:{c.instructions+=7;NFSU2_TR(0x5c5ef7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5c5efa:{NFSU2_TR(0x5c5efa);
__builtin_memmove((R+0),gp(0x870974),4);
}
B5c5eff:{NFSU2_TR(0x5c5eff);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5c5f01:{NFSU2_TR(0x5c5f01);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c5f02:{NFSU2_TR(0x5c5f02);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c5f03:{NFSU2_TR(0x5c5f03);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c5f04:{NFSU2_TR(0x5c5f04);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x94ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c5f0aull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5c5f0a:L5c5f0a:{c.instructions+=6;NFSU2_TR(0x5c5f0a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5c5f0d:{NFSU2_TR(0x5c5f0d);
__builtin_memmove((R+0),gp(0x870974),4);
}
B5c5f12:{NFSU2_TR(0x5c5f12);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5c5f14:{NFSU2_TR(0x5c5f14);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c5f15:{NFSU2_TR(0x5c5f15);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c5f16:{NFSU2_TR(0x5c5f16);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x9cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c5f1cull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5c5f1c:L5c5f1c:{c.instructions+=14;NFSU2_TR(0x5c5f1c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5c5f1f:{NFSU2_TR(0x5c5f1f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5c5f22:{NFSU2_TR(0x5c5f22);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5c5f26:{NFSU2_TR(0x5c5f26);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5c5f2a:{NFSU2_TR(0x5c5f2a);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5c5f2e:{NFSU2_TR(0x5c5f2e);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5c5f32:{NFSU2_TR(0x5c5f32);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5c5f3a:{NFSU2_TR(0x5c5f3a);
__builtin_memmove((R+0),gp(0x870974),4);
}
B5c5f3f:{NFSU2_TR(0x5c5f3f);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5c5f43:{NFSU2_TR(0x5c5f43);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c5f44:{NFSU2_TR(0x5c5f44);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5c5f4c:{NFSU2_TR(0x5c5f4c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5c5f4e:{NFSU2_TR(0x5c5f4e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c5f4f:{NFSU2_TR(0x5c5f4f);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xbcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c5f55ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5c5f55:L5c5f55:{c.instructions+=8;NFSU2_TR(0x5c5f55);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5c5f56:{NFSU2_TR(0x5c5f56);
__builtin_memmove(gp(0x870848),(R+24),4);
}
B5c5f5c:{NFSU2_TR(0x5c5f5c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5c5f5d:{NFSU2_TR(0x5c5f5d);
__builtin_memmove(gp(0x870910),(R+20),4);
}
B5c5f63:{NFSU2_TR(0x5c5f63);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5c5f64:{NFSU2_TR(0x5c5f64);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5c5f65:{NFSU2_TR(0x5c5f65);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x13cull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x13cull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x13cull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5c5f6b:{NFSU2_TR(0x5c5f6b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5c5f70:L5c5f70:{c.instructions+=10;NFSU2_TR(0x5c5f70);
u8 U[6];
w1(R+512,u8((r4(R+16))<(u32(0x164ull))));
w1(R+523,sborrow<u32>(r4(R+16),u32(0x164ull)));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x164ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5c5f76:{NFSU2_TR(0x5c5f76);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c5f77:{NFSU2_TR(0x5c5f77);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c5f78:{NFSU2_TR(0x5c5f78);
u8 U[8];
w4(U+0,u32(u32(u32(0x170ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5c5f7f:{NFSU2_TR(0x5c5f7f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5c5f81:{NFSU2_TR(0x5c5f81);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c5f82:{NFSU2_TR(0x5c5f82);
u8 U[4];
w4(U+0,u32(u32(u32(0xf0ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5c5f89:{NFSU2_TR(0x5c5f89);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c5f8a:{NFSU2_TR(0x5c5f8a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c5f8b:{NFSU2_TR(0x5c5f8b);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c5f8eull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5c5f8e:L5c5f8e:{c.instructions+=7;NFSU2_TR(0x5c5f8e);
__builtin_memmove((R+0),gp(0x870974),4);
}
B5c5f93:{NFSU2_TR(0x5c5f93);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5c5f95:{NFSU2_TR(0x5c5f95);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c5f96:{NFSU2_TR(0x5c5f96);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5c5f98:{NFSU2_TR(0x5c5f98);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c5f99:{NFSU2_TR(0x5c5f99);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c5f9a:{NFSU2_TR(0x5c5f9a);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x94ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c5fa0ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5c5fa0:L5c5fa0:{c.instructions+=5;NFSU2_TR(0x5c5fa0);
__builtin_memmove((R+0),gp(0x870974),4);
}
B5c5fa5:{NFSU2_TR(0x5c5fa5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5c5fa7:{NFSU2_TR(0x5c5fa7);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c5fa8:{NFSU2_TR(0x5c5fa8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c5fa9:{NFSU2_TR(0x5c5fa9);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x9cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c5fafull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5c5faf:L5c5faf:{c.instructions+=14;NFSU2_TR(0x5c5faf);
{u32 ea_=u32(r4(R+16)+u32(264u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B5c5fb6:{NFSU2_TR(0x5c5fb6);
u8 U[8];
w4(U+0,u32(u32(u32(0x108ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5c5fbd:{NFSU2_TR(0x5c5fbd);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0xffffffffull))));
}
B5c5fc0:{NFSU2_TR(0x5c5fc0);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B5c5fc2:{NFSU2_TR(0x5c5fc2);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
w4(U+4,u32(0xbf800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5c5fca:{NFSU2_TR(0x5c5fca);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5c5fd2:{NFSU2_TR(0x5c5fd2);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5c5fd6:{NFSU2_TR(0x5c5fd6);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5c5fda:{NFSU2_TR(0x5c5fda);
u8 U[8];
w4(U+0,u32(u32(u32(0x60ull))+u32(r4(R+16))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5c5fe2:{NFSU2_TR(0x5c5fe2);
u8 U[8];
w4(U+0,u32(u32(u32(0x64ull))+u32(r4(R+16))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5c5fea:{NFSU2_TR(0x5c5fea);
u8 U[8];
w4(U+0,u32(u32(u32(0x68ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5c5fee:{NFSU2_TR(0x5c5fee);
u8 U[8];
w4(U+0,u32(u32(u32(0x6cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5c5ff2:{NFSU2_TR(0x5c5ff2);
u8 U[8];
w4(U+0,u32(u32(u32(0x90ull))+u32(r4(R+16))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5c5ffd:{NFSU2_TR(0x5c5ffd);
u8 U[8];
w4(U+0,u32(u32(u32(0x94ull))+u32(r4(R+16))));
w4(U+4,u32(0xbf800000ull));
s4(u32(r4(U+0)),r4(U+4));
TAIL_STATIC(0x5c6008u,5c6);
}
XIT:NFSU2_TR_EXIT(0x5c5,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
