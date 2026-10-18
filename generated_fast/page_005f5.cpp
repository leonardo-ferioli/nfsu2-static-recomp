#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_401(u8* __restrict R,Cpu& c);
u32 body_402(u8* __restrict R,Cpu& c);
u32 body_43c(u8* __restrict R,Cpu& c);
u32 body_43d(u8* __restrict R,Cpu& c);
u32 body_440(u8* __restrict R,Cpu& c);
u32 body_578(u8* __restrict R,Cpu& c);
u32 body_592(u8* __restrict R,Cpu& c);
u32 body_599(u8* __restrict R,Cpu& c);
u32 body_59f(u8* __restrict R,Cpu& c);
u32 body_5d8(u8* __restrict R,Cpu& c);
u32 body_5da(u8* __restrict R,Cpu& c);
u32 body_5dc(u8* __restrict R,Cpu& c);
u32 body_5e0(u8* __restrict R,Cpu& c);
u32 body_5e5(u8* __restrict R,Cpu& c);
u32 body_5e7(u8* __restrict R,Cpu& c);
u32 body_5ec(u8* __restrict R,Cpu& c);
u32 body_5f4(u8* __restrict R,Cpu& c);
u32 body_5f6(u8* __restrict R,Cpu& c);
u32 body_610(u8* __restrict R,Cpu& c);
u32 body_61f(u8* __restrict R,Cpu& c);
u32 body_75b(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x5f5,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x5f5,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_5f5(u8* __restrict R,Cpu& c);
u32 page_5f5(Cpu& c){return body_5f5(c.regs.data(),c);}
__attribute__((noinline)) u32 body_5f5(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x5f5001:goto L5f5001;
case 0x5f5002:c.instructions+=1;goto B5f5002;
case 0x5f5010:goto L5f5010;
case 0x5f5011:c.instructions+=17;goto B5f5011;
case 0x5f5013:c.instructions+=16;goto B5f5013;
case 0x5f5016:c.instructions+=15;goto B5f5016;
case 0x5f5019:c.instructions+=14;goto B5f5019;
case 0x5f501a:c.instructions+=13;goto B5f501a;
case 0x5f501c:c.instructions+=12;goto B5f501c;
case 0x5f501e:c.instructions+=11;goto B5f501e;
case 0x5f5025:c.instructions+=10;goto B5f5025;
case 0x5f5026:c.instructions+=9;goto B5f5026;
case 0x5f502c:c.instructions+=8;goto B5f502c;
case 0x5f502d:c.instructions+=7;goto B5f502d;
case 0x5f5030:c.instructions+=6;goto B5f5030;
case 0x5f5036:c.instructions+=5;goto B5f5036;
case 0x5f5037:c.instructions+=4;goto B5f5037;
case 0x5f5038:c.instructions+=3;goto B5f5038;
case 0x5f5039:c.instructions+=2;goto B5f5039;
case 0x5f503b:c.instructions+=1;goto B5f503b;
case 0x5f5040:goto L5f5040;
case 0x5f5043:c.instructions+=2;goto B5f5043;
case 0x5f5045:c.instructions+=1;goto B5f5045;
case 0x5f5047:goto L5f5047;
case 0x5f5049:c.instructions+=1;goto B5f5049;
case 0x5f504c:goto L5f504c;
case 0x5f504e:c.instructions+=1;goto B5f504e;
case 0x5f5050:goto L5f5050;
case 0x5f5053:c.instructions+=2;goto B5f5053;
case 0x5f5055:c.instructions+=1;goto B5f5055;
case 0x5f5058:goto L5f5058;
case 0x5f505d:c.instructions+=1;goto B5f505d;
case 0x5f505f:goto L5f505f;
case 0x5f5062:goto L5f5062;
case 0x5f5064:c.instructions+=13;goto B5f5064;
case 0x5f5067:c.instructions+=12;goto B5f5067;
case 0x5f5069:c.instructions+=11;goto B5f5069;
case 0x5f506c:c.instructions+=10;goto B5f506c;
case 0x5f506f:c.instructions+=9;goto B5f506f;
case 0x5f5072:c.instructions+=8;goto B5f5072;
case 0x5f5075:c.instructions+=7;goto B5f5075;
case 0x5f5079:c.instructions+=6;goto B5f5079;
case 0x5f507d:c.instructions+=5;goto B5f507d;
case 0x5f507f:c.instructions+=4;goto B5f507f;
case 0x5f5082:c.instructions+=3;goto B5f5082;
case 0x5f5085:c.instructions+=2;goto B5f5085;
case 0x5f5088:c.instructions+=1;goto B5f5088;
case 0x5f508d:goto L5f508d;
case 0x5f508e:c.instructions+=4;goto B5f508e;
case 0x5f508f:c.instructions+=3;goto B5f508f;
case 0x5f5091:c.instructions+=2;goto B5f5091;
case 0x5f5092:c.instructions+=1;goto B5f5092;
case 0x5f50a0:goto L5f50a0;
case 0x5f50a6:c.instructions+=9;goto B5f50a6;
case 0x5f50a9:c.instructions+=8;goto B5f50a9;
case 0x5f50af:c.instructions+=7;goto B5f50af;
case 0x5f50b0:c.instructions+=6;goto B5f50b0;
case 0x5f50b1:c.instructions+=5;goto B5f50b1;
case 0x5f50b7:c.instructions+=4;goto B5f50b7;
case 0x5f50b9:c.instructions+=3;goto B5f50b9;
case 0x5f50bb:c.instructions+=2;goto B5f50bb;
case 0x5f50be:c.instructions+=1;goto B5f50be;
case 0x5f50c0:goto L5f50c0;
case 0x5f50c6:c.instructions+=1;goto B5f50c6;
case 0x5f50c8:goto L5f50c8;
case 0x5f50ce:goto L5f50ce;
case 0x5f50d4:c.instructions+=3;goto B5f50d4;
case 0x5f50d6:c.instructions+=2;goto B5f50d6;
case 0x5f50d9:c.instructions+=1;goto B5f50d9;
case 0x5f50db:goto L5f50db;
case 0x5f50dd:c.instructions+=2;goto B5f50dd;
case 0x5f50e3:c.instructions+=1;goto B5f50e3;
case 0x5f50e9:goto L5f50e9;
case 0x5f50ef:c.instructions+=8;goto B5f50ef;
case 0x5f50f5:c.instructions+=7;goto B5f50f5;
case 0x5f50f7:c.instructions+=6;goto B5f50f7;
case 0x5f50fb:c.instructions+=5;goto B5f50fb;
case 0x5f50fd:c.instructions+=4;goto B5f50fd;
case 0x5f5101:c.instructions+=3;goto B5f5101;
case 0x5f5103:c.instructions+=2;goto B5f5103;
case 0x5f5106:c.instructions+=1;goto B5f5106;
case 0x5f5108:goto L5f5108;
case 0x5f510a:c.instructions+=3;goto B5f510a;
case 0x5f510c:c.instructions+=2;goto B5f510c;
case 0x5f5110:c.instructions+=1;goto B5f5110;
case 0x5f5112:goto L5f5112;
case 0x5f5118:c.instructions+=5;goto B5f5118;
case 0x5f511c:c.instructions+=4;goto B5f511c;
case 0x5f5120:c.instructions+=3;goto B5f5120;
case 0x5f5122:c.instructions+=2;goto B5f5122;
case 0x5f5125:c.instructions+=1;goto B5f5125;
case 0x5f5127:goto L5f5127;
case 0x5f5129:c.instructions+=1;goto B5f5129;
case 0x5f512d:goto L5f512d;
case 0x5f5133:c.instructions+=5;goto B5f5133;
case 0x5f513b:c.instructions+=4;goto B5f513b;
case 0x5f5141:c.instructions+=3;goto B5f5141;
case 0x5f5143:c.instructions+=2;goto B5f5143;
case 0x5f5146:c.instructions+=1;goto B5f5146;
case 0x5f5148:goto L5f5148;
case 0x5f514e:c.instructions+=3;goto B5f514e;
case 0x5f5150:c.instructions+=2;goto B5f5150;
case 0x5f5153:c.instructions+=1;goto B5f5153;
case 0x5f5155:goto L5f5155;
case 0x5f5157:c.instructions+=1;goto B5f5157;
case 0x5f5159:goto L5f5159;
case 0x5f515e:goto L5f515e;
case 0x5f5160:c.instructions+=4;goto B5f5160;
case 0x5f5166:c.instructions+=3;goto B5f5166;
case 0x5f5168:c.instructions+=2;goto B5f5168;
case 0x5f516b:c.instructions+=1;goto B5f516b;
case 0x5f516d:goto L5f516d;
case 0x5f516f:c.instructions+=1;goto B5f516f;
case 0x5f5175:goto L5f5175;
case 0x5f517b:c.instructions+=6;goto B5f517b;
case 0x5f5181:c.instructions+=5;goto B5f5181;
case 0x5f5183:c.instructions+=4;goto B5f5183;
case 0x5f5189:c.instructions+=3;goto B5f5189;
case 0x5f518b:c.instructions+=2;goto B5f518b;
case 0x5f5191:c.instructions+=1;goto B5f5191;
case 0x5f5196:goto L5f5196;
case 0x5f519c:c.instructions+=12;goto B5f519c;
case 0x5f51a1:c.instructions+=11;goto B5f51a1;
case 0x5f51a5:c.instructions+=10;goto B5f51a5;
case 0x5f51ab:c.instructions+=9;goto B5f51ab;
case 0x5f51af:c.instructions+=8;goto B5f51af;
case 0x5f51b4:c.instructions+=7;goto B5f51b4;
case 0x5f51b8:c.instructions+=6;goto B5f51b8;
case 0x5f51be:c.instructions+=5;goto B5f51be;
case 0x5f51c2:c.instructions+=4;goto B5f51c2;
case 0x5f51c7:c.instructions+=3;goto B5f51c7;
case 0x5f51cb:c.instructions+=2;goto B5f51cb;
case 0x5f51cf:c.instructions+=1;goto B5f51cf;
case 0x5f51d4:goto L5f51d4;
case 0x5f51d8:c.instructions+=3;goto B5f51d8;
case 0x5f51da:c.instructions+=2;goto B5f51da;
case 0x5f51dd:c.instructions+=1;goto B5f51dd;
case 0x5f51df:goto L5f51df;
case 0x5f51e0:c.instructions+=2;goto B5f51e0;
case 0x5f51e3:c.instructions+=1;goto B5f51e3;
case 0x5f51e5:goto L5f51e5;
case 0x5f51e7:c.instructions+=1;goto B5f51e7;
case 0x5f51e9:goto L5f51e9;
case 0x5f51ec:c.instructions+=2;goto B5f51ec;
case 0x5f51ef:c.instructions+=1;goto B5f51ef;
case 0x5f51f1:goto L5f51f1;
case 0x5f51f6:goto L5f51f6;
case 0x5f51fa:c.instructions+=8;goto B5f51fa;
case 0x5f5201:c.instructions+=7;goto B5f5201;
case 0x5f5205:c.instructions+=6;goto B5f5205;
case 0x5f5209:c.instructions+=5;goto B5f5209;
case 0x5f520b:c.instructions+=4;goto B5f520b;
case 0x5f5212:c.instructions+=3;goto B5f5212;
case 0x5f5214:c.instructions+=2;goto B5f5214;
case 0x5f5216:c.instructions+=1;goto B5f5216;
case 0x5f5218:goto L5f5218;
case 0x5f521c:goto L5f521c;
case 0x5f521e:c.instructions+=1;goto B5f521e;
case 0x5f5220:goto L5f5220;
case 0x5f5226:c.instructions+=4;goto B5f5226;
case 0x5f522c:c.instructions+=3;goto B5f522c;
case 0x5f522e:c.instructions+=2;goto B5f522e;
case 0x5f5231:c.instructions+=1;goto B5f5231;
case 0x5f5233:goto L5f5233;
case 0x5f5239:c.instructions+=1;goto B5f5239;
case 0x5f523b:goto L5f523b;
case 0x5f5241:goto L5f5241;
case 0x5f5247:c.instructions+=7;goto B5f5247;
case 0x5f5249:c.instructions+=6;goto B5f5249;
case 0x5f524d:c.instructions+=5;goto B5f524d;
case 0x5f5251:c.instructions+=4;goto B5f5251;
case 0x5f5255:c.instructions+=3;goto B5f5255;
case 0x5f5257:c.instructions+=2;goto B5f5257;
case 0x5f525a:c.instructions+=1;goto B5f525a;
case 0x5f525c:goto L5f525c;
case 0x5f525e:c.instructions+=2;goto B5f525e;
case 0x5f5262:c.instructions+=1;goto B5f5262;
case 0x5f5264:goto L5f5264;
case 0x5f526a:c.instructions+=5;goto B5f526a;
case 0x5f526e:c.instructions+=4;goto B5f526e;
case 0x5f5270:c.instructions+=3;goto B5f5270;
case 0x5f5272:c.instructions+=2;goto B5f5272;
case 0x5f5275:c.instructions+=1;goto B5f5275;
case 0x5f5277:goto L5f5277;
case 0x5f5279:goto L5f5279;
case 0x5f527d:goto L5f527d;
case 0x5f5283:c.instructions+=7;goto B5f5283;
case 0x5f5289:c.instructions+=6;goto B5f5289;
case 0x5f528f:c.instructions+=5;goto B5f528f;
case 0x5f5290:c.instructions+=4;goto B5f5290;
case 0x5f5291:c.instructions+=3;goto B5f5291;
case 0x5f5293:c.instructions+=2;goto B5f5293;
case 0x5f5296:c.instructions+=1;goto B5f5296;
case 0x5f5298:goto L5f5298;
case 0x5f529d:c.instructions+=4;goto B5f529d;
case 0x5f529f:c.instructions+=3;goto B5f529f;
case 0x5f52a5:c.instructions+=2;goto B5f52a5;
case 0x5f52a8:c.instructions+=1;goto B5f52a8;
case 0x5f52a9:goto L5f52a9;
case 0x5f52af:c.instructions+=2;goto B5f52af;
case 0x5f52b2:c.instructions+=1;goto B5f52b2;
case 0x5f52c0:goto L5f52c0;
case 0x5f52c1:c.instructions+=11;goto B5f52c1;
case 0x5f52c3:c.instructions+=10;goto B5f52c3;
case 0x5f52c6:c.instructions+=9;goto B5f52c6;
case 0x5f52c9:c.instructions+=8;goto B5f52c9;
case 0x5f52ca:c.instructions+=7;goto B5f52ca;
case 0x5f52cb:c.instructions+=6;goto B5f52cb;
case 0x5f52cd:c.instructions+=5;goto B5f52cd;
case 0x5f52d0:c.instructions+=4;goto B5f52d0;
case 0x5f52d1:c.instructions+=3;goto B5f52d1;
case 0x5f52d3:c.instructions+=2;goto B5f52d3;
case 0x5f52d7:c.instructions+=1;goto B5f52d7;
case 0x5f52dc:goto L5f52dc;
case 0x5f52df:c.instructions+=2;goto B5f52df;
case 0x5f52e1:c.instructions+=1;goto B5f52e1;
case 0x5f52e6:goto L5f52e6;
case 0x5f52e9:c.instructions+=3;goto B5f52e9;
case 0x5f52ea:c.instructions+=2;goto B5f52ea;
case 0x5f52f0:c.instructions+=1;goto B5f52f0;
case 0x5f52f5:goto L5f52f5;
case 0x5f52f9:c.instructions+=13;goto B5f52f9;
case 0x5f52fc:c.instructions+=12;goto B5f52fc;
case 0x5f5303:c.instructions+=11;goto B5f5303;
case 0x5f530c:c.instructions+=10;goto B5f530c;
case 0x5f530f:c.instructions+=9;goto B5f530f;
case 0x5f5312:c.instructions+=8;goto B5f5312;
case 0x5f5314:c.instructions+=7;goto B5f5314;
case 0x5f5316:c.instructions+=6;goto B5f5316;
case 0x5f5319:c.instructions+=5;goto B5f5319;
case 0x5f531c:c.instructions+=4;goto B5f531c;
case 0x5f5322:c.instructions+=3;goto B5f5322;
case 0x5f5325:c.instructions+=2;goto B5f5325;
case 0x5f532b:c.instructions+=1;goto B5f532b;
case 0x5f5330:goto L5f5330;
case 0x5f5332:c.instructions+=1;goto B5f5332;
case 0x5f5337:goto L5f5337;
case 0x5f533a:c.instructions+=8;goto B5f533a;
case 0x5f5340:c.instructions+=7;goto B5f5340;
case 0x5f5341:c.instructions+=6;goto B5f5341;
case 0x5f5347:c.instructions+=5;goto B5f5347;
case 0x5f534b:c.instructions+=4;goto B5f534b;
case 0x5f534e:c.instructions+=3;goto B5f534e;
case 0x5f534f:c.instructions+=2;goto B5f534f;
case 0x5f5350:c.instructions+=1;goto B5f5350;
case 0x5f5355:goto L5f5355;
case 0x5f5358:c.instructions+=4;goto B5f5358;
case 0x5f535c:c.instructions+=3;goto B5f535c;
case 0x5f535d:c.instructions+=2;goto B5f535d;
case 0x5f535f:c.instructions+=1;goto B5f535f;
case 0x5f5364:goto L5f5364;
case 0x5f5367:c.instructions+=21;goto B5f5367;
case 0x5f536a:c.instructions+=20;goto B5f536a;
case 0x5f536c:c.instructions+=19;goto B5f536c;
case 0x5f5372:c.instructions+=18;goto B5f5372;
case 0x5f5378:c.instructions+=17;goto B5f5378;
case 0x5f537b:c.instructions+=16;goto B5f537b;
case 0x5f537e:c.instructions+=15;goto B5f537e;
case 0x5f5384:c.instructions+=14;goto B5f5384;
case 0x5f538a:c.instructions+=13;goto B5f538a;
case 0x5f538d:c.instructions+=12;goto B5f538d;
case 0x5f5393:c.instructions+=11;goto B5f5393;
case 0x5f5399:c.instructions+=10;goto B5f5399;
case 0x5f539f:c.instructions+=9;goto B5f539f;
case 0x5f53a2:c.instructions+=8;goto B5f53a2;
case 0x5f53a8:c.instructions+=7;goto B5f53a8;
case 0x5f53ae:c.instructions+=6;goto B5f53ae;
case 0x5f53b4:c.instructions+=5;goto B5f53b4;
case 0x5f53b7:c.instructions+=4;goto B5f53b7;
case 0x5f53be:c.instructions+=3;goto B5f53be;
case 0x5f53c1:c.instructions+=2;goto B5f53c1;
case 0x5f53c3:c.instructions+=1;goto B5f53c3;
case 0x5f53c6:goto L5f53c6;
case 0x5f53c9:c.instructions+=2;goto B5f53c9;
case 0x5f53cb:c.instructions+=1;goto B5f53cb;
case 0x5f53ce:goto L5f53ce;
case 0x5f53d0:c.instructions+=1;goto B5f53d0;
case 0x5f53d5:goto L5f53d5;
case 0x5f53d8:c.instructions+=2;goto B5f53d8;
case 0x5f53da:c.instructions+=1;goto B5f53da;
case 0x5f53dd:goto L5f53dd;
case 0x5f53e1:c.instructions+=3;goto B5f53e1;
case 0x5f53e2:c.instructions+=2;goto B5f53e2;
case 0x5f53e4:c.instructions+=1;goto B5f53e4;
case 0x5f53e9:goto L5f53e9;
case 0x5f53ec:c.instructions+=2;goto B5f53ec;
case 0x5f53f0:c.instructions+=1;goto B5f53f0;
case 0x5f53f6:goto L5f53f6;
case 0x5f53fc:c.instructions+=2;goto B5f53fc;
case 0x5f53fe:c.instructions+=1;goto B5f53fe;
case 0x5f5404:goto L5f5404;
case 0x5f540a:c.instructions+=1;goto B5f540a;
case 0x5f540f:goto L5f540f;
case 0x5f5415:c.instructions+=2;goto B5f5415;
case 0x5f5418:c.instructions+=1;goto B5f5418;
case 0x5f541a:goto L5f541a;
case 0x5f541d:c.instructions+=2;goto B5f541d;
case 0x5f541e:c.instructions+=1;goto B5f541e;
case 0x5f5423:goto L5f5423;
case 0x5f5429:c.instructions+=6;goto B5f5429;
case 0x5f542c:c.instructions+=5;goto B5f542c;
case 0x5f542e:c.instructions+=4;goto B5f542e;
case 0x5f5434:c.instructions+=3;goto B5f5434;
case 0x5f543a:c.instructions+=2;goto B5f543a;
case 0x5f5440:c.instructions+=1;goto B5f5440;
case 0x5f5442:goto L5f5442;
case 0x5f5444:c.instructions+=1;goto B5f5444;
case 0x5f5447:goto L5f5447;
case 0x5f544d:c.instructions+=2;goto B5f544d;
case 0x5f5451:c.instructions+=1;goto B5f5451;
case 0x5f5453:goto L5f5453;
case 0x5f5455:c.instructions+=4;goto B5f5455;
case 0x5f5457:c.instructions+=3;goto B5f5457;
case 0x5f545d:c.instructions+=2;goto B5f545d;
case 0x5f545e:c.instructions+=1;goto B5f545e;
case 0x5f5461:goto L5f5461;
case 0x5f5467:c.instructions+=7;goto B5f5467;
case 0x5f546d:c.instructions+=6;goto B5f546d;
case 0x5f546e:c.instructions+=5;goto B5f546e;
case 0x5f546f:c.instructions+=4;goto B5f546f;
case 0x5f5470:c.instructions+=3;goto B5f5470;
case 0x5f5472:c.instructions+=2;goto B5f5472;
case 0x5f5473:c.instructions+=1;goto B5f5473;
case 0x5f5476:goto L5f5476;
case 0x5f547c:c.instructions+=7;goto B5f547c;
case 0x5f5482:c.instructions+=6;goto B5f5482;
case 0x5f5483:c.instructions+=5;goto B5f5483;
case 0x5f5484:c.instructions+=4;goto B5f5484;
case 0x5f5485:c.instructions+=3;goto B5f5485;
case 0x5f5487:c.instructions+=2;goto B5f5487;
case 0x5f5488:c.instructions+=1;goto B5f5488;
case 0x5f548b:goto L5f548b;
case 0x5f5490:c.instructions+=7;goto B5f5490;
case 0x5f5491:c.instructions+=6;goto B5f5491;
case 0x5f5497:c.instructions+=5;goto B5f5497;
case 0x5f5498:c.instructions+=4;goto B5f5498;
case 0x5f5499:c.instructions+=3;goto B5f5499;
case 0x5f549b:c.instructions+=2;goto B5f549b;
case 0x5f549c:c.instructions+=1;goto B5f549c;
case 0x5f54a0:goto L5f54a0;
case 0x5f54a3:c.instructions+=6;goto B5f54a3;
case 0x5f54a4:c.instructions+=5;goto B5f54a4;
case 0x5f54a6:c.instructions+=4;goto B5f54a6;
case 0x5f54a9:c.instructions+=3;goto B5f54a9;
case 0x5f54ac:c.instructions+=2;goto B5f54ac;
case 0x5f54af:c.instructions+=1;goto B5f54af;
case 0x5f54b1:goto L5f54b1;
case 0x5f54b4:c.instructions+=1;goto B5f54b4;
case 0x5f54ba:goto L5f54ba;
case 0x5f54c4:c.instructions+=6;goto B5f54c4;
case 0x5f54ca:c.instructions+=5;goto B5f54ca;
case 0x5f54cb:c.instructions+=4;goto B5f54cb;
case 0x5f54cf:c.instructions+=3;goto B5f54cf;
case 0x5f54d4:c.instructions+=2;goto B5f54d4;
case 0x5f54d5:c.instructions+=1;goto B5f54d5;
case 0x5f54da:goto L5f54da;
case 0x5f54de:c.instructions+=2;goto B5f54de;
case 0x5f54df:c.instructions+=1;goto B5f54df;
case 0x5f54e4:goto L5f54e4;
case 0x5f54e7:c.instructions+=4;goto B5f54e7;
case 0x5f54ed:c.instructions+=3;goto B5f54ed;
case 0x5f54ee:c.instructions+=2;goto B5f54ee;
case 0x5f54f0:c.instructions+=1;goto B5f54f0;
case 0x5f54f5:goto L5f54f5;
case 0x5f54fb:c.instructions+=5;goto B5f54fb;
case 0x5f54fc:c.instructions+=4;goto B5f54fc;
case 0x5f5500:c.instructions+=3;goto B5f5500;
case 0x5f5505:c.instructions+=2;goto B5f5505;
case 0x5f5506:c.instructions+=1;goto B5f5506;
case 0x5f550b:goto L5f550b;
case 0x5f550f:c.instructions+=2;goto B5f550f;
case 0x5f5510:c.instructions+=1;goto B5f5510;
case 0x5f5515:goto L5f5515;
case 0x5f5518:c.instructions+=3;goto B5f5518;
case 0x5f5519:c.instructions+=2;goto B5f5519;
case 0x5f551b:c.instructions+=1;goto B5f551b;
case 0x5f5520:goto L5f5520;
case 0x5f5525:c.instructions+=2;goto B5f5525;
case 0x5f5527:c.instructions+=1;goto B5f5527;
case 0x5f5529:goto L5f5529;
case 0x5f552e:c.instructions+=2;goto B5f552e;
case 0x5f5531:c.instructions+=1;goto B5f5531;
case 0x5f5533:goto L5f5533;
case 0x5f5536:c.instructions+=1;goto B5f5536;
case 0x5f5538:goto L5f5538;
case 0x5f553f:c.instructions+=1;goto B5f553f;
case 0x5f5541:goto L5f5541;
case 0x5f5547:c.instructions+=5;goto B5f5547;
case 0x5f5548:c.instructions+=4;goto B5f5548;
case 0x5f554c:c.instructions+=3;goto B5f554c;
case 0x5f5551:c.instructions+=2;goto B5f5551;
case 0x5f5552:c.instructions+=1;goto B5f5552;
case 0x5f5557:goto L5f5557;
case 0x5f555b:c.instructions+=2;goto B5f555b;
case 0x5f555c:c.instructions+=1;goto B5f555c;
case 0x5f5561:goto L5f5561;
case 0x5f5564:c.instructions+=3;goto B5f5564;
case 0x5f5565:c.instructions+=2;goto B5f5565;
case 0x5f5567:c.instructions+=1;goto B5f5567;
case 0x5f556c:goto L5f556c;
case 0x5f556d:c.instructions+=2;goto B5f556d;
case 0x5f5570:c.instructions+=1;goto B5f5570;
case 0x5f5580:goto L5f5580;
case 0x5f5581:c.instructions+=12;goto B5f5581;
case 0x5f5583:c.instructions+=11;goto B5f5583;
case 0x5f5586:c.instructions+=10;goto B5f5586;
case 0x5f5589:c.instructions+=9;goto B5f5589;
case 0x5f558a:c.instructions+=8;goto B5f558a;
case 0x5f558b:c.instructions+=7;goto B5f558b;
case 0x5f558c:c.instructions+=6;goto B5f558c;
case 0x5f558e:c.instructions+=5;goto B5f558e;
case 0x5f5594:c.instructions+=4;goto B5f5594;
case 0x5f5595:c.instructions+=3;goto B5f5595;
case 0x5f5599:c.instructions+=2;goto B5f5599;
case 0x5f559a:c.instructions+=1;goto B5f559a;
case 0x5f559f:goto L5f559f;
case 0x5f55a2:c.instructions+=14;goto B5f55a2;
case 0x5f55a5:c.instructions+=13;goto B5f55a5;
case 0x5f55a8:c.instructions+=12;goto B5f55a8;
case 0x5f55ac:c.instructions+=11;goto B5f55ac;
case 0x5f55b1:c.instructions+=10;goto B5f55b1;
case 0x5f55b4:c.instructions+=9;goto B5f55b4;
case 0x5f55b8:c.instructions+=8;goto B5f55b8;
case 0x5f55b9:c.instructions+=7;goto B5f55b9;
case 0x5f55bd:c.instructions+=6;goto B5f55bd;
case 0x5f55c1:c.instructions+=5;goto B5f55c1;
case 0x5f55c2:c.instructions+=4;goto B5f55c2;
case 0x5f55c6:c.instructions+=3;goto B5f55c6;
case 0x5f55c7:c.instructions+=2;goto B5f55c7;
case 0x5f55cf:c.instructions+=1;goto B5f55cf;
case 0x5f55d4:goto L5f55d4;
case 0x5f55da:c.instructions+=3;goto B5f55da;
case 0x5f55dd:c.instructions+=2;goto B5f55dd;
case 0x5f55df:c.instructions+=1;goto B5f55df;
case 0x5f55e1:goto L5f55e1;
case 0x5f55e5:c.instructions+=1;goto B5f55e5;
case 0x5f55e7:goto L5f55e7;
case 0x5f55e9:goto L5f55e9;
case 0x5f55ea:c.instructions+=3;goto B5f55ea;
case 0x5f55ee:c.instructions+=2;goto B5f55ee;
case 0x5f55ef:c.instructions+=1;goto B5f55ef;
case 0x5f55f4:goto L5f55f4;
case 0x5f55f6:c.instructions+=3;goto B5f55f6;
case 0x5f55f9:c.instructions+=2;goto B5f55f9;
case 0x5f55fb:c.instructions+=1;goto B5f55fb;
case 0x5f5601:goto L5f5601;
case 0x5f5603:c.instructions+=2;goto B5f5603;
case 0x5f5605:c.instructions+=1;goto B5f5605;
case 0x5f560b:goto L5f560b;
case 0x5f560e:c.instructions+=3;goto B5f560e;
case 0x5f5614:c.instructions+=2;goto B5f5614;
case 0x5f5617:c.instructions+=1;goto B5f5617;
case 0x5f561d:goto L5f561d;
case 0x5f5624:goto L5f5624;
case 0x5f5627:c.instructions+=3;goto B5f5627;
case 0x5f562a:c.instructions+=2;goto B5f562a;
case 0x5f562b:c.instructions+=1;goto B5f562b;
case 0x5f5630:goto L5f5630;
case 0x5f5633:c.instructions+=2;goto B5f5633;
case 0x5f5635:c.instructions+=1;goto B5f5635;
case 0x5f563a:goto L5f563a;
case 0x5f563b:c.instructions+=2;goto B5f563b;
case 0x5f563c:c.instructions+=1;goto B5f563c;
case 0x5f5641:goto L5f5641;
case 0x5f5644:c.instructions+=4;goto B5f5644;
case 0x5f5647:c.instructions+=3;goto B5f5647;
case 0x5f564a:c.instructions+=2;goto B5f564a;
case 0x5f564d:c.instructions+=1;goto B5f564d;
case 0x5f5653:goto L5f5653;
case 0x5f5659:c.instructions+=2;goto B5f5659;
case 0x5f565b:c.instructions+=1;goto B5f565b;
case 0x5f5661:goto L5f5661;
case 0x5f5667:c.instructions+=3;goto B5f5667;
case 0x5f566a:c.instructions+=2;goto B5f566a;
case 0x5f5670:c.instructions+=1;goto B5f5670;
case 0x5f5672:goto L5f5672;
case 0x5f5673:c.instructions+=2;goto B5f5673;
case 0x5f5676:c.instructions+=1;goto B5f5676;
case 0x5f5677:goto L5f5677;
case 0x5f567d:goto L5f567d;
case 0x5f5683:c.instructions+=4;goto B5f5683;
case 0x5f5689:c.instructions+=3;goto B5f5689;
case 0x5f568b:c.instructions+=2;goto B5f568b;
case 0x5f568e:c.instructions+=1;goto B5f568e;
case 0x5f5690:goto L5f5690;
case 0x5f5696:c.instructions+=4;goto B5f5696;
case 0x5f569c:c.instructions+=3;goto B5f569c;
case 0x5f56a1:c.instructions+=2;goto B5f56a1;
case 0x5f56a2:c.instructions+=1;goto B5f56a2;
case 0x5f56a7:goto L5f56a7;
case 0x5f56a9:goto L5f56a9;
case 0x5f56ac:c.instructions+=2;goto B5f56ac;
case 0x5f56b0:c.instructions+=1;goto B5f56b0;
case 0x5f56b2:goto L5f56b2;
case 0x5f56b8:c.instructions+=2;goto B5f56b8;
case 0x5f56ba:c.instructions+=1;goto B5f56ba;
case 0x5f56bc:goto L5f56bc;
case 0x5f56c2:c.instructions+=2;goto B5f56c2;
case 0x5f56c4:c.instructions+=1;goto B5f56c4;
case 0x5f56c6:goto L5f56c6;
case 0x5f56c9:c.instructions+=3;goto B5f56c9;
case 0x5f56cb:c.instructions+=2;goto B5f56cb;
case 0x5f56cd:c.instructions+=1;goto B5f56cd;
case 0x5f56cf:goto L5f56cf;
case 0x5f56d2:c.instructions+=9;goto B5f56d2;
case 0x5f56d3:c.instructions+=8;goto B5f56d3;
case 0x5f56d6:c.instructions+=7;goto B5f56d6;
case 0x5f56d9:c.instructions+=6;goto B5f56d9;
case 0x5f56da:c.instructions+=5;goto B5f56da;
case 0x5f56dd:c.instructions+=4;goto B5f56dd;
case 0x5f56df:c.instructions+=3;goto B5f56df;
case 0x5f56e0:c.instructions+=2;goto B5f56e0;
case 0x5f56e1:c.instructions+=1;goto B5f56e1;
case 0x5f56e4:goto L5f56e4;
case 0x5f56e6:goto L5f56e6;
case 0x5f56eb:c.instructions+=4;goto B5f56eb;
case 0x5f56ed:c.instructions+=3;goto B5f56ed;
case 0x5f56ef:c.instructions+=2;goto B5f56ef;
case 0x5f56f1:c.instructions+=1;goto B5f56f1;
case 0x5f56f4:goto L5f56f4;
case 0x5f56f6:goto L5f56f6;
case 0x5f56f7:c.instructions+=1;goto B5f56f7;
case 0x5f56fc:goto L5f56fc;
case 0x5f56ff:goto L5f56ff;
case 0x5f5702:c.instructions+=1;goto B5f5702;
case 0x5f5708:goto L5f5708;
case 0x5f5709:c.instructions+=5;goto B5f5709;
case 0x5f570a:c.instructions+=4;goto B5f570a;
case 0x5f570b:c.instructions+=3;goto B5f570b;
case 0x5f570d:c.instructions+=2;goto B5f570d;
case 0x5f570e:c.instructions+=1;goto B5f570e;
case 0x5f5730:goto L5f5730;
case 0x5f5731:c.instructions+=12;goto B5f5731;
case 0x5f5733:c.instructions+=11;goto B5f5733;
case 0x5f5736:c.instructions+=10;goto B5f5736;
case 0x5f5739:c.instructions+=9;goto B5f5739;
case 0x5f573f:c.instructions+=8;goto B5f573f;
case 0x5f5740:c.instructions+=7;goto B5f5740;
case 0x5f5741:c.instructions+=6;goto B5f5741;
case 0x5f5743:c.instructions+=5;goto B5f5743;
case 0x5f5749:c.instructions+=4;goto B5f5749;
case 0x5f574a:c.instructions+=3;goto B5f574a;
case 0x5f574c:c.instructions+=2;goto B5f574c;
case 0x5f574f:c.instructions+=1;goto B5f574f;
case 0x5f5751:goto L5f5751;
case 0x5f5757:c.instructions+=2;goto B5f5757;
case 0x5f575d:c.instructions+=1;goto B5f575d;
case 0x5f5763:goto L5f5763;
case 0x5f5769:c.instructions+=17;goto B5f5769;
case 0x5f576b:c.instructions+=16;goto B5f576b;
case 0x5f5771:c.instructions+=15;goto B5f5771;
case 0x5f5775:c.instructions+=14;goto B5f5775;
case 0x5f5779:c.instructions+=13;goto B5f5779;
case 0x5f577d:c.instructions+=12;goto B5f577d;
case 0x5f5781:c.instructions+=11;goto B5f5781;
case 0x5f5787:c.instructions+=10;goto B5f5787;
case 0x5f578b:c.instructions+=9;goto B5f578b;
case 0x5f5791:c.instructions+=8;goto B5f5791;
case 0x5f5797:c.instructions+=7;goto B5f5797;
case 0x5f579d:c.instructions+=6;goto B5f579d;
case 0x5f57a1:c.instructions+=5;goto B5f57a1;
case 0x5f57a9:c.instructions+=4;goto B5f57a9;
case 0x5f57ad:c.instructions+=3;goto B5f57ad;
case 0x5f57b1:c.instructions+=2;goto B5f57b1;
case 0x5f57b5:c.instructions+=1;goto B5f57b5;
case 0x5f57c0:goto L5f57c0;
case 0x5f57c4:c.instructions+=3;goto B5f57c4;
case 0x5f57cb:c.instructions+=2;goto B5f57cb;
case 0x5f57cd:c.instructions+=1;goto B5f57cd;
case 0x5f57d3:goto L5f57d3;
case 0x5f57d7:c.instructions+=7;goto B5f57d7;
case 0x5f57db:c.instructions+=6;goto B5f57db;
case 0x5f57de:c.instructions+=5;goto B5f57de;
case 0x5f57e0:c.instructions+=4;goto B5f57e0;
case 0x5f57e6:c.instructions+=3;goto B5f57e6;
case 0x5f57ec:c.instructions+=2;goto B5f57ec;
case 0x5f57ef:c.instructions+=1;goto B5f57ef;
case 0x5f57f1:goto L5f57f1;
case 0x5f57f4:c.instructions+=1;goto B5f57f4;
case 0x5f57f6:goto L5f57f6;
case 0x5f57fa:c.instructions+=11;goto B5f57fa;
case 0x5f57ff:c.instructions+=10;goto B5f57ff;
case 0x5f5801:c.instructions+=9;goto B5f5801;
case 0x5f5805:c.instructions+=8;goto B5f5805;
case 0x5f5807:c.instructions+=7;goto B5f5807;
case 0x5f580b:c.instructions+=6;goto B5f580b;
case 0x5f580f:c.instructions+=5;goto B5f580f;
case 0x5f5811:c.instructions+=4;goto B5f5811;
case 0x5f5814:c.instructions+=3;goto B5f5814;
case 0x5f5817:c.instructions+=2;goto B5f5817;
case 0x5f5819:c.instructions+=1;goto B5f5819;
case 0x5f581d:goto L5f581d;
case 0x5f5821:c.instructions+=16;goto B5f5821;
case 0x5f5823:c.instructions+=15;goto B5f5823;
case 0x5f5826:c.instructions+=14;goto B5f5826;
case 0x5f5828:c.instructions+=13;goto B5f5828;
case 0x5f582a:c.instructions+=12;goto B5f582a;
case 0x5f582c:c.instructions+=11;goto B5f582c;
case 0x5f582e:c.instructions+=10;goto B5f582e;
case 0x5f5830:c.instructions+=9;goto B5f5830;
case 0x5f5832:c.instructions+=8;goto B5f5832;
case 0x5f5834:c.instructions+=7;goto B5f5834;
case 0x5f5836:c.instructions+=6;goto B5f5836;
case 0x5f583a:c.instructions+=5;goto B5f583a;
case 0x5f583d:c.instructions+=4;goto B5f583d;
case 0x5f5843:c.instructions+=3;goto B5f5843;
case 0x5f5845:c.instructions+=2;goto B5f5845;
case 0x5f5848:c.instructions+=1;goto B5f5848;
case 0x5f584e:goto L5f584e;
case 0x5f5852:c.instructions+=4;goto B5f5852;
case 0x5f5855:c.instructions+=3;goto B5f5855;
case 0x5f5857:c.instructions+=2;goto B5f5857;
case 0x5f585a:c.instructions+=1;goto B5f585a;
case 0x5f5860:goto L5f5860;
case 0x5f5866:c.instructions+=10;goto B5f5866;
case 0x5f586a:c.instructions+=9;goto B5f586a;
case 0x5f5870:c.instructions+=8;goto B5f5870;
case 0x5f5876:c.instructions+=7;goto B5f5876;
case 0x5f5878:c.instructions+=6;goto B5f5878;
case 0x5f587c:c.instructions+=5;goto B5f587c;
case 0x5f5880:c.instructions+=4;goto B5f5880;
case 0x5f5882:c.instructions+=3;goto B5f5882;
case 0x5f5885:c.instructions+=2;goto B5f5885;
case 0x5f5887:c.instructions+=1;goto B5f5887;
case 0x5f588d:goto L5f588d;
case 0x5f5890:c.instructions+=1;goto B5f5890;
case 0x5f5896:goto L5f5896;
case 0x5f5899:c.instructions+=11;goto B5f5899;
case 0x5f589d:c.instructions+=10;goto B5f589d;
case 0x5f589f:c.instructions+=9;goto B5f589f;
case 0x5f58a2:c.instructions+=8;goto B5f58a2;
case 0x5f58a4:c.instructions+=7;goto B5f58a4;
case 0x5f58a6:c.instructions+=6;goto B5f58a6;
case 0x5f58a8:c.instructions+=5;goto B5f58a8;
case 0x5f58ac:c.instructions+=4;goto B5f58ac;
case 0x5f58b2:c.instructions+=3;goto B5f58b2;
case 0x5f58b4:c.instructions+=2;goto B5f58b4;
case 0x5f58b7:c.instructions+=1;goto B5f58b7;
case 0x5f58b9:goto L5f58b9;
case 0x5f58bf:c.instructions+=1;goto B5f58bf;
case 0x5f58c1:goto L5f58c1;
case 0x5f58c5:c.instructions+=4;goto B5f58c5;
case 0x5f58cb:c.instructions+=3;goto B5f58cb;
case 0x5f58cd:c.instructions+=2;goto B5f58cd;
case 0x5f58d0:c.instructions+=1;goto B5f58d0;
case 0x5f58d2:goto L5f58d2;
case 0x5f58d8:c.instructions+=1;goto B5f58d8;
case 0x5f58da:goto L5f58da;
case 0x5f58de:c.instructions+=4;goto B5f58de;
case 0x5f58e4:c.instructions+=3;goto B5f58e4;
case 0x5f58e6:c.instructions+=2;goto B5f58e6;
case 0x5f58e9:c.instructions+=1;goto B5f58e9;
case 0x5f58eb:goto L5f58eb;
case 0x5f58f1:c.instructions+=1;goto B5f58f1;
case 0x5f58f3:goto L5f58f3;
case 0x5f58f7:c.instructions+=4;goto B5f58f7;
case 0x5f58fd:c.instructions+=3;goto B5f58fd;
case 0x5f58ff:c.instructions+=2;goto B5f58ff;
case 0x5f5902:c.instructions+=1;goto B5f5902;
case 0x5f5904:goto L5f5904;
case 0x5f590a:goto L5f590a;
case 0x5f5910:c.instructions+=3;goto B5f5910;
case 0x5f5912:c.instructions+=2;goto B5f5912;
case 0x5f5915:c.instructions+=1;goto B5f5915;
case 0x5f5917:goto L5f5917;
case 0x5f591b:c.instructions+=6;goto B5f591b;
case 0x5f5921:c.instructions+=5;goto B5f5921;
case 0x5f5923:c.instructions+=4;goto B5f5923;
case 0x5f5925:c.instructions+=3;goto B5f5925;
case 0x5f5927:c.instructions+=2;goto B5f5927;
case 0x5f592a:c.instructions+=1;goto B5f592a;
case 0x5f592c:goto L5f592c;
case 0x5f5934:c.instructions+=1;goto B5f5934;
case 0x5f5936:goto L5f5936;
case 0x5f5938:c.instructions+=2;goto B5f5938;
case 0x5f593e:c.instructions+=1;goto B5f593e;
case 0x5f5940:goto L5f5940;
case 0x5f5944:goto L5f5944;
case 0x5f5948:goto L5f5948;
case 0x5f594c:c.instructions+=6;goto B5f594c;
case 0x5f5950:c.instructions+=5;goto B5f5950;
case 0x5f5956:c.instructions+=4;goto B5f5956;
case 0x5f595c:c.instructions+=3;goto B5f595c;
case 0x5f595e:c.instructions+=2;goto B5f595e;
case 0x5f5961:c.instructions+=1;goto B5f5961;
case 0x5f5967:goto L5f5967;
case 0x5f5969:c.instructions+=4;goto B5f5969;
case 0x5f596f:c.instructions+=3;goto B5f596f;
case 0x5f5971:c.instructions+=2;goto B5f5971;
case 0x5f5974:c.instructions+=1;goto B5f5974;
case 0x5f5976:goto L5f5976;
case 0x5f5978:goto L5f5978;
case 0x5f597c:c.instructions+=7;goto B5f597c;
case 0x5f5980:c.instructions+=6;goto B5f5980;
case 0x5f5983:c.instructions+=5;goto B5f5983;
case 0x5f5984:c.instructions+=4;goto B5f5984;
case 0x5f5985:c.instructions+=3;goto B5f5985;
case 0x5f5987:c.instructions+=2;goto B5f5987;
case 0x5f5989:c.instructions+=1;goto B5f5989;
case 0x5f598e:goto L5f598e;
case 0x5f5990:goto L5f5990;
case 0x5f5994:c.instructions+=6;goto B5f5994;
case 0x5f599a:c.instructions+=5;goto B5f599a;
case 0x5f599c:c.instructions+=4;goto B5f599c;
case 0x5f59a2:c.instructions+=3;goto B5f59a2;
case 0x5f59a4:c.instructions+=2;goto B5f59a4;
case 0x5f59a7:c.instructions+=1;goto B5f59a7;
case 0x5f59a9:goto L5f59a9;
case 0x5f59af:goto L5f59af;
case 0x5f59b3:c.instructions+=9;goto B5f59b3;
case 0x5f59b7:c.instructions+=8;goto B5f59b7;
case 0x5f59b8:c.instructions+=7;goto B5f59b8;
case 0x5f59be:c.instructions+=6;goto B5f59be;
case 0x5f59bf:c.instructions+=5;goto B5f59bf;
case 0x5f59c3:c.instructions+=4;goto B5f59c3;
case 0x5f59c4:c.instructions+=3;goto B5f59c4;
case 0x5f59cc:c.instructions+=2;goto B5f59cc;
case 0x5f59d4:c.instructions+=1;goto B5f59d4;
case 0x5f59d9:goto L5f59d9;
case 0x5f59dc:c.instructions+=3;goto B5f59dc;
case 0x5f59e0:c.instructions+=2;goto B5f59e0;
case 0x5f59e1:c.instructions+=1;goto B5f59e1;
case 0x5f59e3:goto L5f59e3;
case 0x5f59e7:c.instructions+=1;goto B5f59e7;
case 0x5f59ed:goto L5f59ed;
case 0x5f59f0:c.instructions+=4;goto B5f59f0;
case 0x5f59f6:c.instructions+=3;goto B5f59f6;
case 0x5f59f8:c.instructions+=2;goto B5f59f8;
case 0x5f59fb:c.instructions+=1;goto B5f59fb;
case 0x5f5a01:goto L5f5a01;
case 0x5f5a05:c.instructions+=2;goto B5f5a05;
case 0x5f5a0a:c.instructions+=1;goto B5f5a0a;
case 0x5f5a10:goto L5f5a10;
case 0x5f5a15:c.instructions+=1;goto B5f5a15;
case 0x5f5a1b:goto L5f5a1b;
case 0x5f5a1f:c.instructions+=5;goto B5f5a1f;
case 0x5f5a21:c.instructions+=4;goto B5f5a21;
case 0x5f5a24:c.instructions+=3;goto B5f5a24;
case 0x5f5a26:c.instructions+=2;goto B5f5a26;
case 0x5f5a29:c.instructions+=1;goto B5f5a29;
case 0x5f5a2f:goto L5f5a2f;
case 0x5f5a32:c.instructions+=2;goto B5f5a32;
case 0x5f5a34:c.instructions+=1;goto B5f5a34;
case 0x5f5a3a:goto L5f5a3a;
case 0x5f5a3d:c.instructions+=1;goto B5f5a3d;
case 0x5f5a43:goto L5f5a43;
case 0x5f5a47:c.instructions+=12;goto B5f5a47;
case 0x5f5a4a:c.instructions+=11;goto B5f5a4a;
case 0x5f5a4c:c.instructions+=10;goto B5f5a4c;
case 0x5f5a51:c.instructions+=9;goto B5f5a51;
case 0x5f5a53:c.instructions+=8;goto B5f5a53;
case 0x5f5a55:c.instructions+=7;goto B5f5a55;
case 0x5f5a58:c.instructions+=6;goto B5f5a58;
case 0x5f5a59:c.instructions+=5;goto B5f5a59;
case 0x5f5a5b:c.instructions+=4;goto B5f5a5b;
case 0x5f5a5d:c.instructions+=3;goto B5f5a5d;
case 0x5f5a60:c.instructions+=2;goto B5f5a60;
case 0x5f5a62:c.instructions+=1;goto B5f5a62;
case 0x5f5a67:goto L5f5a67;
case 0x5f5a6b:c.instructions+=5;goto B5f5a6b;
case 0x5f5a6e:c.instructions+=4;goto B5f5a6e;
case 0x5f5a74:c.instructions+=3;goto B5f5a74;
case 0x5f5a76:c.instructions+=2;goto B5f5a76;
case 0x5f5a79:c.instructions+=1;goto B5f5a79;
case 0x5f5a7b:goto L5f5a7b;
case 0x5f5a7f:c.instructions+=12;goto B5f5a7f;
case 0x5f5a81:c.instructions+=11;goto B5f5a81;
case 0x5f5a84:c.instructions+=10;goto B5f5a84;
case 0x5f5a88:c.instructions+=9;goto B5f5a88;
case 0x5f5a8c:c.instructions+=8;goto B5f5a8c;
case 0x5f5a90:c.instructions+=7;goto B5f5a90;
case 0x5f5a91:c.instructions+=6;goto B5f5a91;
case 0x5f5a95:c.instructions+=5;goto B5f5a95;
case 0x5f5a96:c.instructions+=4;goto B5f5a96;
case 0x5f5a9a:c.instructions+=3;goto B5f5a9a;
case 0x5f5a9b:c.instructions+=2;goto B5f5a9b;
case 0x5f5aa3:c.instructions+=1;goto B5f5aa3;
case 0x5f5aa8:goto L5f5aa8;
case 0x5f5aac:c.instructions+=22;goto B5f5aac;
case 0x5f5aaf:c.instructions+=21;goto B5f5aaf;
case 0x5f5ab3:c.instructions+=20;goto B5f5ab3;
case 0x5f5ab6:c.instructions+=19;goto B5f5ab6;
case 0x5f5ab9:c.instructions+=18;goto B5f5ab9;
case 0x5f5abd:c.instructions+=17;goto B5f5abd;
case 0x5f5ac0:c.instructions+=16;goto B5f5ac0;
case 0x5f5ac4:c.instructions+=15;goto B5f5ac4;
case 0x5f5ac8:c.instructions+=14;goto B5f5ac8;
case 0x5f5ac9:c.instructions+=13;goto B5f5ac9;
case 0x5f5acb:c.instructions+=12;goto B5f5acb;
case 0x5f5acf:c.instructions+=11;goto B5f5acf;
case 0x5f5ad3:c.instructions+=10;goto B5f5ad3;
case 0x5f5ad5:c.instructions+=9;goto B5f5ad5;
case 0x5f5ad9:c.instructions+=8;goto B5f5ad9;
case 0x5f5add:c.instructions+=7;goto B5f5add;
case 0x5f5ae1:c.instructions+=6;goto B5f5ae1;
case 0x5f5ae2:c.instructions+=5;goto B5f5ae2;
case 0x5f5ae6:c.instructions+=4;goto B5f5ae6;
case 0x5f5ae7:c.instructions+=3;goto B5f5ae7;
case 0x5f5ae9:c.instructions+=2;goto B5f5ae9;
case 0x5f5aeb:c.instructions+=1;goto B5f5aeb;
case 0x5f5af0:goto L5f5af0;
case 0x5f5af4:c.instructions+=20;goto B5f5af4;
case 0x5f5af8:c.instructions+=19;goto B5f5af8;
case 0x5f5afc:c.instructions+=18;goto B5f5afc;
case 0x5f5b01:c.instructions+=17;goto B5f5b01;
case 0x5f5b03:c.instructions+=16;goto B5f5b03;
case 0x5f5b04:c.instructions+=15;goto B5f5b04;
case 0x5f5b06:c.instructions+=14;goto B5f5b06;
case 0x5f5b0a:c.instructions+=13;goto B5f5b0a;
case 0x5f5b0e:c.instructions+=12;goto B5f5b0e;
case 0x5f5b12:c.instructions+=11;goto B5f5b12;
case 0x5f5b16:c.instructions+=10;goto B5f5b16;
case 0x5f5b1a:c.instructions+=9;goto B5f5b1a;
case 0x5f5b1f:c.instructions+=8;goto B5f5b1f;
case 0x5f5b22:c.instructions+=7;goto B5f5b22;
case 0x5f5b25:c.instructions+=6;goto B5f5b25;
case 0x5f5b2a:c.instructions+=5;goto B5f5b2a;
case 0x5f5b2e:c.instructions+=4;goto B5f5b2e;
case 0x5f5b32:c.instructions+=3;goto B5f5b32;
case 0x5f5b36:c.instructions+=2;goto B5f5b36;
case 0x5f5b3a:c.instructions+=1;goto B5f5b3a;
case 0x5f5b40:goto L5f5b40;
case 0x5f5b45:c.instructions+=1;goto B5f5b45;
case 0x5f5b4b:goto L5f5b4b;
case 0x5f5b4d:c.instructions+=7;goto B5f5b4d;
case 0x5f5b4f:c.instructions+=6;goto B5f5b4f;
case 0x5f5b53:c.instructions+=5;goto B5f5b53;
case 0x5f5b54:c.instructions+=4;goto B5f5b54;
case 0x5f5b57:c.instructions+=3;goto B5f5b57;
case 0x5f5b58:c.instructions+=2;goto B5f5b58;
case 0x5f5b5e:c.instructions+=1;goto B5f5b5e;
case 0x5f5b63:goto L5f5b63;
case 0x5f5b65:c.instructions+=8;goto B5f5b65;
case 0x5f5b69:c.instructions+=7;goto B5f5b69;
case 0x5f5b6b:c.instructions+=6;goto B5f5b6b;
case 0x5f5b71:c.instructions+=5;goto B5f5b71;
case 0x5f5b77:c.instructions+=4;goto B5f5b77;
case 0x5f5b7a:c.instructions+=3;goto B5f5b7a;
case 0x5f5b7d:c.instructions+=2;goto B5f5b7d;
case 0x5f5b85:c.instructions+=1;goto B5f5b85;
case 0x5f5b87:goto L5f5b87;
case 0x5f5b8b:c.instructions+=9;goto B5f5b8b;
case 0x5f5b8e:c.instructions+=8;goto B5f5b8e;
case 0x5f5b91:c.instructions+=7;goto B5f5b91;
case 0x5f5b94:c.instructions+=6;goto B5f5b94;
case 0x5f5b96:c.instructions+=5;goto B5f5b96;
case 0x5f5b9a:c.instructions+=4;goto B5f5b9a;
case 0x5f5ba0:c.instructions+=3;goto B5f5ba0;
case 0x5f5ba2:c.instructions+=2;goto B5f5ba2;
case 0x5f5ba5:c.instructions+=1;goto B5f5ba5;
case 0x5f5bab:goto L5f5bab;
case 0x5f5baf:c.instructions+=5;goto B5f5baf;
case 0x5f5bb5:c.instructions+=4;goto B5f5bb5;
case 0x5f5bb9:c.instructions+=3;goto B5f5bb9;
case 0x5f5bbb:c.instructions+=2;goto B5f5bbb;
case 0x5f5bbe:c.instructions+=1;goto B5f5bbe;
case 0x5f5bc0:goto L5f5bc0;
case 0x5f5bc2:c.instructions+=1;goto B5f5bc2;
case 0x5f5bc8:goto L5f5bc8;
case 0x5f5bcc:goto L5f5bcc;
case 0x5f5bcf:c.instructions+=3;goto B5f5bcf;
case 0x5f5bd2:c.instructions+=2;goto B5f5bd2;
case 0x5f5bda:c.instructions+=1;goto B5f5bda;
case 0x5f5bdc:goto L5f5bdc;
case 0x5f5be0:c.instructions+=9;goto B5f5be0;
case 0x5f5be3:c.instructions+=8;goto B5f5be3;
case 0x5f5be6:c.instructions+=7;goto B5f5be6;
case 0x5f5be9:c.instructions+=6;goto B5f5be9;
case 0x5f5beb:c.instructions+=5;goto B5f5beb;
case 0x5f5bef:c.instructions+=4;goto B5f5bef;
case 0x5f5bf5:c.instructions+=3;goto B5f5bf5;
case 0x5f5bf7:c.instructions+=2;goto B5f5bf7;
case 0x5f5bfa:c.instructions+=1;goto B5f5bfa;
case 0x5f5c00:goto L5f5c00;
case 0x5f5c04:c.instructions+=5;goto B5f5c04;
case 0x5f5c0a:c.instructions+=4;goto B5f5c0a;
case 0x5f5c0e:c.instructions+=3;goto B5f5c0e;
case 0x5f5c10:c.instructions+=2;goto B5f5c10;
case 0x5f5c13:c.instructions+=1;goto B5f5c13;
case 0x5f5c15:goto L5f5c15;
case 0x5f5c17:c.instructions+=1;goto B5f5c17;
case 0x5f5c1d:goto L5f5c1d;
case 0x5f5c21:goto L5f5c21;
case 0x5f5c25:c.instructions+=5;goto B5f5c25;
case 0x5f5c29:c.instructions+=4;goto B5f5c29;
case 0x5f5c2f:c.instructions+=3;goto B5f5c2f;
case 0x5f5c31:c.instructions+=2;goto B5f5c31;
case 0x5f5c34:c.instructions+=1;goto B5f5c34;
case 0x5f5c3a:goto L5f5c3a;
case 0x5f5c40:c.instructions+=4;goto B5f5c40;
case 0x5f5c46:c.instructions+=3;goto B5f5c46;
case 0x5f5c48:c.instructions+=2;goto B5f5c48;
case 0x5f5c4b:c.instructions+=1;goto B5f5c4b;
case 0x5f5c4d:goto L5f5c4d;
case 0x5f5c50:c.instructions+=5;goto B5f5c50;
case 0x5f5c53:c.instructions+=4;goto B5f5c53;
case 0x5f5c55:c.instructions+=3;goto B5f5c55;
case 0x5f5c57:c.instructions+=2;goto B5f5c57;
case 0x5f5c5a:c.instructions+=1;goto B5f5c5a;
case 0x5f5c5c:goto L5f5c5c;
case 0x5f5c60:c.instructions+=5;goto B5f5c60;
case 0x5f5c64:c.instructions+=4;goto B5f5c64;
case 0x5f5c6a:c.instructions+=3;goto B5f5c6a;
case 0x5f5c6c:c.instructions+=2;goto B5f5c6c;
case 0x5f5c6f:c.instructions+=1;goto B5f5c6f;
case 0x5f5c71:goto L5f5c71;
case 0x5f5c79:c.instructions+=1;goto B5f5c79;
case 0x5f5c7b:goto L5f5c7b;
case 0x5f5c81:c.instructions+=1;goto B5f5c81;
case 0x5f5c86:goto L5f5c86;
case 0x5f5c8c:c.instructions+=1;goto B5f5c8c;
case 0x5f5c8e:goto L5f5c8e;
case 0x5f5c92:c.instructions+=5;goto B5f5c92;
case 0x5f5c96:c.instructions+=4;goto B5f5c96;
case 0x5f5c9c:c.instructions+=3;goto B5f5c9c;
case 0x5f5c9e:c.instructions+=2;goto B5f5c9e;
case 0x5f5ca1:c.instructions+=1;goto B5f5ca1;
case 0x5f5ca3:goto L5f5ca3;
case 0x5f5cab:c.instructions+=1;goto B5f5cab;
case 0x5f5cad:goto L5f5cad;
case 0x5f5caf:goto L5f5caf;
case 0x5f5cb3:c.instructions+=5;goto B5f5cb3;
case 0x5f5cb5:c.instructions+=4;goto B5f5cb5;
case 0x5f5cbb:c.instructions+=3;goto B5f5cbb;
case 0x5f5cbd:c.instructions+=2;goto B5f5cbd;
case 0x5f5cc0:c.instructions+=1;goto B5f5cc0;
case 0x5f5cc2:goto L5f5cc2;
case 0x5f5cc6:c.instructions+=6;goto B5f5cc6;
case 0x5f5cc8:c.instructions+=5;goto B5f5cc8;
case 0x5f5cc9:c.instructions+=4;goto B5f5cc9;
case 0x5f5cca:c.instructions+=3;goto B5f5cca;
case 0x5f5ccc:c.instructions+=2;goto B5f5ccc;
case 0x5f5cce:c.instructions+=1;goto B5f5cce;
case 0x5f5cd3:goto L5f5cd3;
case 0x5f5cd7:goto L5f5cd7;
case 0x5f5cdb:c.instructions+=4;goto B5f5cdb;
case 0x5f5ce1:c.instructions+=3;goto B5f5ce1;
case 0x5f5ce3:c.instructions+=2;goto B5f5ce3;
case 0x5f5ce6:c.instructions+=1;goto B5f5ce6;
case 0x5f5ce8:goto L5f5ce8;
case 0x5f5cec:c.instructions+=6;goto B5f5cec;
case 0x5f5cee:c.instructions+=5;goto B5f5cee;
case 0x5f5cef:c.instructions+=4;goto B5f5cef;
case 0x5f5cf0:c.instructions+=3;goto B5f5cf0;
case 0x5f5cf2:c.instructions+=2;goto B5f5cf2;
case 0x5f5cf4:c.instructions+=1;goto B5f5cf4;
case 0x5f5cf9:goto L5f5cf9;
case 0x5f5cfd:c.instructions+=1;goto B5f5cfd;
case 0x5f5cff:goto L5f5cff;
case 0x5f5d01:goto L5f5d01;
case 0x5f5d07:c.instructions+=12;goto B5f5d07;
case 0x5f5d0d:c.instructions+=11;goto B5f5d0d;
case 0x5f5d13:c.instructions+=10;goto B5f5d13;
case 0x5f5d19:c.instructions+=9;goto B5f5d19;
case 0x5f5d1c:c.instructions+=8;goto B5f5d1c;
case 0x5f5d1f:c.instructions+=7;goto B5f5d1f;
case 0x5f5d22:c.instructions+=6;goto B5f5d22;
case 0x5f5d24:c.instructions+=5;goto B5f5d24;
case 0x5f5d28:c.instructions+=4;goto B5f5d28;
case 0x5f5d2e:c.instructions+=3;goto B5f5d2e;
case 0x5f5d30:c.instructions+=2;goto B5f5d30;
case 0x5f5d33:c.instructions+=1;goto B5f5d33;
case 0x5f5d35:goto L5f5d35;
case 0x5f5d39:c.instructions+=5;goto B5f5d39;
case 0x5f5d3f:c.instructions+=4;goto B5f5d3f;
case 0x5f5d43:c.instructions+=3;goto B5f5d43;
case 0x5f5d45:c.instructions+=2;goto B5f5d45;
case 0x5f5d48:c.instructions+=1;goto B5f5d48;
case 0x5f5d4a:goto L5f5d4a;
case 0x5f5d4c:c.instructions+=2;goto B5f5d4c;
case 0x5f5d54:c.instructions+=1;goto B5f5d54;
case 0x5f5d56:goto L5f5d56;
case 0x5f5d5c:goto L5f5d5c;
case 0x5f5d60:c.instructions+=4;goto B5f5d60;
case 0x5f5d66:c.instructions+=3;goto B5f5d66;
case 0x5f5d68:c.instructions+=2;goto B5f5d68;
case 0x5f5d6b:c.instructions+=1;goto B5f5d6b;
case 0x5f5d6d:goto L5f5d6d;
case 0x5f5d73:c.instructions+=3;goto B5f5d73;
case 0x5f5d75:c.instructions+=2;goto B5f5d75;
case 0x5f5d79:c.instructions+=1;goto B5f5d79;
case 0x5f5d7b:goto L5f5d7b;
case 0x5f5d7f:c.instructions+=4;goto B5f5d7f;
case 0x5f5d81:c.instructions+=3;goto B5f5d81;
case 0x5f5d87:c.instructions+=2;goto B5f5d87;
case 0x5f5d89:c.instructions+=1;goto B5f5d89;
case 0x5f5d8e:goto L5f5d8e;
case 0x5f5d8f:c.instructions+=3;goto B5f5d8f;
case 0x5f5d91:c.instructions+=2;goto B5f5d91;
case 0x5f5d93:c.instructions+=1;goto B5f5d93;
case 0x5f5d96:goto L5f5d96;
case 0x5f5d9a:c.instructions+=7;goto B5f5d9a;
case 0x5f5d9e:c.instructions+=6;goto B5f5d9e;
case 0x5f5da0:c.instructions+=5;goto B5f5da0;
case 0x5f5da1:c.instructions+=4;goto B5f5da1;
case 0x5f5da2:c.instructions+=3;goto B5f5da2;
case 0x5f5da4:c.instructions+=2;goto B5f5da4;
case 0x5f5da6:c.instructions+=1;goto B5f5da6;
case 0x5f5dab:goto L5f5dab;
case 0x5f5dae:c.instructions+=4;goto B5f5dae;
case 0x5f5db4:c.instructions+=3;goto B5f5db4;
case 0x5f5db6:c.instructions+=2;goto B5f5db6;
case 0x5f5db9:c.instructions+=1;goto B5f5db9;
case 0x5f5dbf:goto L5f5dbf;
case 0x5f5dc3:c.instructions+=2;goto B5f5dc3;
case 0x5f5dc5:c.instructions+=1;goto B5f5dc5;
case 0x5f5dcb:goto L5f5dcb;
case 0x5f5dd1:c.instructions+=4;goto B5f5dd1;
case 0x5f5dd7:c.instructions+=3;goto B5f5dd7;
case 0x5f5dd9:c.instructions+=2;goto B5f5dd9;
case 0x5f5ddc:c.instructions+=1;goto B5f5ddc;
case 0x5f5de2:goto L5f5de2;
case 0x5f5de7:c.instructions+=6;goto B5f5de7;
case 0x5f5ded:c.instructions+=5;goto B5f5ded;
case 0x5f5dee:c.instructions+=4;goto B5f5dee;
case 0x5f5df1:c.instructions+=3;goto B5f5df1;
case 0x5f5df2:c.instructions+=2;goto B5f5df2;
case 0x5f5df4:c.instructions+=1;goto B5f5df4;
case 0x5f5df9:goto L5f5df9;
case 0x5f5dfc:c.instructions+=2;goto B5f5dfc;
case 0x5f5e00:c.instructions+=1;goto B5f5e00;
case 0x5f5e02:goto L5f5e02;
case 0x5f5e08:c.instructions+=2;goto B5f5e08;
case 0x5f5e0a:c.instructions+=1;goto B5f5e0a;
case 0x5f5e0c:goto L5f5e0c;
case 0x5f5e12:c.instructions+=3;goto B5f5e12;
case 0x5f5e15:c.instructions+=2;goto B5f5e15;
case 0x5f5e1b:c.instructions+=1;goto B5f5e1b;
case 0x5f5e1d:goto L5f5e1d;
case 0x5f5e1e:c.instructions+=2;goto B5f5e1e;
case 0x5f5e21:c.instructions+=1;goto B5f5e21;
case 0x5f5e22:goto L5f5e22;
case 0x5f5e24:goto L5f5e24;
case 0x5f5e2a:c.instructions+=4;goto B5f5e2a;
case 0x5f5e30:c.instructions+=3;goto B5f5e30;
case 0x5f5e32:c.instructions+=2;goto B5f5e32;
case 0x5f5e35:c.instructions+=1;goto B5f5e35;
case 0x5f5e37:goto L5f5e37;
case 0x5f5e3b:c.instructions+=2;goto B5f5e3b;
case 0x5f5e3d:c.instructions+=1;goto B5f5e3d;
case 0x5f5e3f:goto L5f5e3f;
case 0x5f5e45:c.instructions+=2;goto B5f5e45;
case 0x5f5e47:c.instructions+=1;goto B5f5e47;
case 0x5f5e49:goto L5f5e49;
case 0x5f5e4e:c.instructions+=4;goto B5f5e4e;
case 0x5f5e54:c.instructions+=3;goto B5f5e54;
case 0x5f5e59:c.instructions+=2;goto B5f5e59;
case 0x5f5e5a:c.instructions+=1;goto B5f5e5a;
case 0x5f5e5f:goto L5f5e5f;
case 0x5f5e66:goto L5f5e66;
case 0x5f5e6a:c.instructions+=2;goto B5f5e6a;
case 0x5f5e6c:c.instructions+=1;goto B5f5e6c;
case 0x5f5e6e:goto L5f5e6e;
case 0x5f5e75:goto L5f5e75;
case 0x5f5e7b:c.instructions+=2;goto B5f5e7b;
case 0x5f5e7d:c.instructions+=1;goto B5f5e7d;
case 0x5f5e7f:goto L5f5e7f;
case 0x5f5e82:c.instructions+=2;goto B5f5e82;
case 0x5f5e84:c.instructions+=1;goto B5f5e84;
case 0x5f5e89:goto L5f5e89;
case 0x5f5e8f:c.instructions+=3;goto B5f5e8f;
case 0x5f5e91:c.instructions+=2;goto B5f5e91;
case 0x5f5e94:c.instructions+=1;goto B5f5e94;
case 0x5f5e96:goto L5f5e96;
case 0x5f5e98:c.instructions+=4;goto B5f5e98;
case 0x5f5e9a:c.instructions+=3;goto B5f5e9a;
case 0x5f5e9f:c.instructions+=2;goto B5f5e9f;
case 0x5f5ea1:c.instructions+=1;goto B5f5ea1;
case 0x5f5ea3:goto L5f5ea3;
case 0x5f5ea9:c.instructions+=4;goto B5f5ea9;
case 0x5f5eae:c.instructions+=3;goto B5f5eae;
case 0x5f5eaf:c.instructions+=2;goto B5f5eaf;
case 0x5f5eb5:c.instructions+=1;goto B5f5eb5;
case 0x5f5eba:goto L5f5eba;
case 0x5f5ebc:goto L5f5ebc;
case 0x5f5ec2:c.instructions+=3;goto B5f5ec2;
case 0x5f5ec8:c.instructions+=2;goto B5f5ec8;
case 0x5f5ece:c.instructions+=1;goto B5f5ece;
case 0x5f5ed0:goto L5f5ed0;
case 0x5f5ed2:c.instructions+=1;goto B5f5ed2;
case 0x5f5ed7:goto L5f5ed7;
case 0x5f5edd:c.instructions+=3;goto B5f5edd;
case 0x5f5edf:c.instructions+=2;goto B5f5edf;
case 0x5f5ee2:c.instructions+=1;goto B5f5ee2;
case 0x5f5ee4:goto L5f5ee4;
case 0x5f5ee6:c.instructions+=3;goto B5f5ee6;
case 0x5f5ee8:c.instructions+=2;goto B5f5ee8;
case 0x5f5eed:c.instructions+=1;goto B5f5eed;
case 0x5f5eef:goto L5f5eef;
case 0x5f5ef1:c.instructions+=1;goto B5f5ef1;
case 0x5f5ef6:goto L5f5ef6;
case 0x5f5ef9:c.instructions+=2;goto B5f5ef9;
case 0x5f5efb:c.instructions+=1;goto B5f5efb;
case 0x5f5f00:goto L5f5f00;
case 0x5f5f02:c.instructions+=1;goto B5f5f02;
case 0x5f5f04:goto L5f5f04;
case 0x5f5f0a:c.instructions+=8;goto B5f5f0a;
case 0x5f5f0d:c.instructions+=7;goto B5f5f0d;
case 0x5f5f13:c.instructions+=6;goto B5f5f13;
case 0x5f5f19:c.instructions+=5;goto B5f5f19;
case 0x5f5f1b:c.instructions+=4;goto B5f5f1b;
case 0x5f5f21:c.instructions+=3;goto B5f5f21;
case 0x5f5f23:c.instructions+=2;goto B5f5f23;
case 0x5f5f26:c.instructions+=1;goto B5f5f26;
case 0x5f5f2c:goto L5f5f2c;
case 0x5f5f32:c.instructions+=3;goto B5f5f32;
case 0x5f5f34:c.instructions+=2;goto B5f5f34;
case 0x5f5f37:c.instructions+=1;goto B5f5f37;
case 0x5f5f3d:goto L5f5f3d;
case 0x5f5f3f:c.instructions+=3;goto B5f5f3f;
case 0x5f5f41:c.instructions+=2;goto B5f5f41;
case 0x5f5f46:c.instructions+=1;goto B5f5f46;
case 0x5f5f48:goto L5f5f48;
case 0x5f5f4a:c.instructions+=1;goto B5f5f4a;
case 0x5f5f4f:goto L5f5f4f;
case 0x5f5f56:c.instructions+=1;goto B5f5f56;
case 0x5f5f5c:goto L5f5f5c;
case 0x5f5f5f:c.instructions+=3;goto B5f5f5f;
case 0x5f5f61:c.instructions+=2;goto B5f5f61;
case 0x5f5f67:c.instructions+=1;goto B5f5f67;
case 0x5f5f6c:goto L5f5f6c;
case 0x5f5f6f:c.instructions+=6;goto B5f5f6f;
case 0x5f5f73:c.instructions+=5;goto B5f5f73;
case 0x5f5f77:c.instructions+=4;goto B5f5f77;
case 0x5f5f7d:c.instructions+=3;goto B5f5f7d;
case 0x5f5f7f:c.instructions+=2;goto B5f5f7f;
case 0x5f5f83:c.instructions+=1;goto B5f5f83;
case 0x5f5f85:goto L5f5f85;
case 0x5f5f8b:c.instructions+=1;goto B5f5f8b;
case 0x5f5f8f:goto L5f5f8f;
case 0x5f5f95:c.instructions+=3;goto B5f5f95;
case 0x5f5f97:c.instructions+=2;goto B5f5f97;
case 0x5f5f9a:c.instructions+=1;goto B5f5f9a;
case 0x5f5fa0:goto L5f5fa0;
case 0x5f5fa3:c.instructions+=8;goto B5f5fa3;
case 0x5f5fa9:c.instructions+=7;goto B5f5fa9;
case 0x5f5faf:c.instructions+=6;goto B5f5faf;
case 0x5f5fb5:c.instructions+=5;goto B5f5fb5;
case 0x5f5fbb:c.instructions+=4;goto B5f5fbb;
case 0x5f5fbd:c.instructions+=3;goto B5f5fbd;
case 0x5f5fc3:c.instructions+=2;goto B5f5fc3;
case 0x5f5fc5:c.instructions+=1;goto B5f5fc5;
case 0x5f5fcb:goto L5f5fcb;
case 0x5f5fce:c.instructions+=1;goto B5f5fce;
case 0x5f5fd0:goto L5f5fd0;
case 0x5f5fd6:c.instructions+=1;goto B5f5fd6;
case 0x5f5fd8:goto L5f5fd8;
case 0x5f5fda:goto L5f5fda;
case 0x5f5fdc:c.instructions+=1;goto B5f5fdc;
case 0x5f5fe1:goto L5f5fe1;
case 0x5f5fe3:c.instructions+=1;goto B5f5fe3;
case 0x5f5fe9:goto L5f5fe9;
case 0x5f5feb:c.instructions+=4;goto B5f5feb;
case 0x5f5fed:c.instructions+=3;goto B5f5fed;
case 0x5f5ff2:c.instructions+=2;goto B5f5ff2;
case 0x5f5ff4:c.instructions+=1;goto B5f5ff4;
case 0x5f5ff9:goto L5f5ff9;
case 0x5f5fff:goto L5f5fff;
default:missing_instruction(c.pc);}
B5f5001:L5f5001:{c.instructions+=2;NFSU2_TR(0x5f5001);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5f5002:{NFSU2_TR(0x5f5002);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5f5010:L5f5010:{c.instructions+=18;NFSU2_TR(0x5f5010);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f5011:{NFSU2_TR(0x5f5011);
__builtin_memmove((R+20),(R+16),4);
}
B5f5013:{NFSU2_TR(0x5f5013);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B5f5016:{NFSU2_TR(0x5f5016);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x18ull))));
}
B5f5019:{NFSU2_TR(0x5f5019);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f501a:{NFSU2_TR(0x5f501a);
__builtin_memmove((R+24),(R+4),4);
}
B5f501c:{NFSU2_TR(0x5f501c);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B5f501e:{NFSU2_TR(0x5f501e);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+4),(U+4),2);
}
B5f5025:{NFSU2_TR(0x5f5025);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f5026:{NFSU2_TR(0x5f5026);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5c4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B5f502c:{NFSU2_TR(0x5f502c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f502d:{NFSU2_TR(0x5f502d);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5f5030:{NFSU2_TR(0x5f5030);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x90ull))));
__builtin_memmove((R+8),(U+0),4);
}
B5f5036:{NFSU2_TR(0x5f5036);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f5037:{NFSU2_TR(0x5f5037);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f5038:{NFSU2_TR(0x5f5038);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f5039:{NFSU2_TR(0x5f5039);
__builtin_memmove((R+4),(R+24),4);
}
B5f503b:{NFSU2_TR(0x5f503b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f5040ull));
TAIL_STATIC(0x5f49f0u,5f4);
}
B5f5040:L5f5040:{c.instructions+=3;NFSU2_TR(0x5f5040);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5f5043:{NFSU2_TR(0x5f5043);
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
B5f5045:{NFSU2_TR(0x5f5045);
if(r1(R+518)){{goto L5f505f;}}
}
B5f5047:L5f5047:{c.instructions+=2;NFSU2_TR(0x5f5047);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5f5049:{NFSU2_TR(0x5f5049);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f504cull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5f504c:L5f504c:{c.instructions+=2;NFSU2_TR(0x5f504c);
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
B5f504e:{NFSU2_TR(0x5f504e);
if(r1(R+518)){{goto L5f505f;}}
}
B5f5050:L5f5050:{c.instructions+=3;NFSU2_TR(0x5f5050);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5f5053:{NFSU2_TR(0x5f5053);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5f5055:{NFSU2_TR(0x5f5055);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f5058ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5f5058:L5f5058:{c.instructions+=2;NFSU2_TR(0x5f5058);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1f0ull))));
}
B5f505d:{NFSU2_TR(0x5f505d);
{goto L5f5062;}
}
B5f505f:L5f505f:{c.instructions+=1;NFSU2_TR(0x5f505f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5f5062:L5f5062:{c.instructions+=14;NFSU2_TR(0x5f5062);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5f5064:{NFSU2_TR(0x5f5064);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5f5067:{NFSU2_TR(0x5f5067);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5f5069:{NFSU2_TR(0x5f5069);
{u32 ea_=u32(r4(R+28)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5f506c:{NFSU2_TR(0x5f506c);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5f506f:{NFSU2_TR(0x5f506f);
{u32 ea_=u32(r4(R+28)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5f5072:{NFSU2_TR(0x5f5072);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5f5075:{NFSU2_TR(0x5f5075);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5f5079:{NFSU2_TR(0x5f5079);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5f507d:{NFSU2_TR(0x5f507d);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5f507f:{NFSU2_TR(0x5f507f);
{u32 ea_=u32(r4(R+24)+u32(80u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5f5082:{NFSU2_TR(0x5f5082);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f5085:{NFSU2_TR(0x5f5085);
{u32 ea_=u32(r4(R+24)+u32(84u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5f5088:{NFSU2_TR(0x5f5088);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f508dull));
TAIL_STATIC(0x592460u,592);
}
B5f508d:L5f508d:{c.instructions+=5;NFSU2_TR(0x5f508d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5f508e:{NFSU2_TR(0x5f508e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5f508f:{NFSU2_TR(0x5f508f);
__builtin_memmove((R+16),(R+20),4);
}
B5f5091:{NFSU2_TR(0x5f5091);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5f5092:{NFSU2_TR(0x5f5092);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5f50a0:L5f50a0:{c.instructions+=10;NFSU2_TR(0x5f50a0);
{u32 ea_=u32(u32(8978684u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5f50a6:{NFSU2_TR(0x5f50a6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x20ull))));
}
B5f50a9:{NFSU2_TR(0x5f50a9);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5f50af:{NFSU2_TR(0x5f50af);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f50b0:{NFSU2_TR(0x5f50b0);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f50b1:{NFSU2_TR(0x5f50b1);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x434ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5f50b7:{NFSU2_TR(0x5f50b7);
__builtin_memmove((R+24),(R+28),4);
}
B5f50b9:{NFSU2_TR(0x5f50b9);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5f50bb:{NFSU2_TR(0x5f50bb);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5f50be:{NFSU2_TR(0x5f50be);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5f50c8;}}
}
B5f50c0:L5f50c0:{c.instructions+=2;NFSU2_TR(0x5f50c0);
{u32 ea_=u32(u32(8978684u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5f50c6:{NFSU2_TR(0x5f50c6);
{goto L5f50ce;}
}
B5f50c8:L5f50c8:{c.instructions+=1;NFSU2_TR(0x5f50c8);
{u32 ea_=u32(r4(R+4)+u32(1072u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5f50ce:L5f50ce:{c.instructions+=4;NFSU2_TR(0x5f50ce);
{u32 ea_=u32(u32(8397340u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B5f50d4:{NFSU2_TR(0x5f50d4);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5f50d6:{NFSU2_TR(0x5f50d6);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5f50d9:{NFSU2_TR(0x5f50d9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5f50e9;}}
}
B5f50db:L5f50db:{c.instructions+=3;NFSU2_TR(0x5f50db);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5f50dd:{NFSU2_TR(0x5f50dd);
{u32 ea_=u32(u32(8397340u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5f50e3:{NFSU2_TR(0x5f50e3);
{u32 ea_=u32(u32(7881308u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5f50e9:L5f50e9:{c.instructions+=9;NFSU2_TR(0x5f50e9);
{u32 ea_=u32(r4(R+4)+u32(1344u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5f50ef:{NFSU2_TR(0x5f50ef);
{u32 ea_=u32(u32(8397348u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5f50f5:{NFSU2_TR(0x5f50f5);
__asm__ volatile(".byte 0xd8,0xc1":::"memory");
}
B5f50f7:{NFSU2_TR(0x5f50f7);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5f50fb:{NFSU2_TR(0x5f50fb);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B5f50fd:{NFSU2_TR(0x5f50fd);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5f5101:{NFSU2_TR(0x5f5101);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5f5103:{NFSU2_TR(0x5f5103);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5f5106:{NFSU2_TR(0x5f5106);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5f5112;}}
}
B5f5108:L5f5108:{c.instructions+=4;NFSU2_TR(0x5f5108);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5f510a:{NFSU2_TR(0x5f510a);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5f510c:{NFSU2_TR(0x5f510c);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5f5110:{NFSU2_TR(0x5f5110);
{goto L5f512d;}
}
B5f5112:L5f5112:{c.instructions+=6;NFSU2_TR(0x5f5112);
{u32 ea_=u32(u32(8397348u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5f5118:{NFSU2_TR(0x5f5118);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5f511c:{NFSU2_TR(0x5f511c);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B5f5120:{NFSU2_TR(0x5f5120);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5f5122:{NFSU2_TR(0x5f5122);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5f5125:{NFSU2_TR(0x5f5125);
if(r1(R+514)){{goto L5f512d;}}
}
B5f5127:L5f5127:{c.instructions+=2;NFSU2_TR(0x5f5127);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5f5129:{NFSU2_TR(0x5f5129);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5f512d:L5f512d:{c.instructions+=6;NFSU2_TR(0x5f512d);
{u32 ea_=u32(r4(R+4)+u32(1344u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B5f5133:{NFSU2_TR(0x5f5133);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5f513b:{NFSU2_TR(0x5f513b);
{u32 ea_=u32(u32(8397320u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B5f5141:{NFSU2_TR(0x5f5141);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5f5143:{NFSU2_TR(0x5f5143);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5f5146:{NFSU2_TR(0x5f5146);
if(r1(R+514)){{goto L5f5196;}}
}
B5f5148:L5f5148:{c.instructions+=4;NFSU2_TR(0x5f5148);
{u32 ea_=u32(u32(8397316u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B5f514e:{NFSU2_TR(0x5f514e);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5f5150:{NFSU2_TR(0x5f5150);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5f5153:{NFSU2_TR(0x5f5153);
if(r1(R+514)){{goto L5f5159;}}
}
B5f5155:L5f5155:{c.instructions+=2;NFSU2_TR(0x5f5155);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B5f5157:{NFSU2_TR(0x5f5157);
{goto L5f515e;}
}
B5f5159:L5f5159:{c.instructions+=1;NFSU2_TR(0x5f5159);
w4(R+24,u32(0x2ull));
}
B5f515e:L5f515e:{c.instructions+=5;NFSU2_TR(0x5f515e);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B5f5160:{NFSU2_TR(0x5f5160);
{u32 ea_=u32(u32(8397320u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B5f5166:{NFSU2_TR(0x5f5166);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5f5168:{NFSU2_TR(0x5f5168);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5f516b:{NFSU2_TR(0x5f516b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5f5175;}}
}
B5f516d:L5f516d:{c.instructions+=2;NFSU2_TR(0x5f516d);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5f516f:{NFSU2_TR(0x5f516f);
{u32 ea_=u32(u32(8397320u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5f5175:L5f5175:{c.instructions+=7;NFSU2_TR(0x5f5175);
{u32 ea_=u32(u32(8397272u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5f517b:{NFSU2_TR(0x5f517b);
{u32 ea_=u32(u32(8397268u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5f5181:{NFSU2_TR(0x5f5181);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5f5183:{NFSU2_TR(0x5f5183);
{u32 ea_=u32(u32(8397320u));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B5f5189:{NFSU2_TR(0x5f5189);
__asm__ volatile(".byte 0xde,0xc9":::"memory");
}
B5f518b:{NFSU2_TR(0x5f518b);
{u32 ea_=u32(u32(8397268u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5f5191:{NFSU2_TR(0x5f5191);
{goto L5f5218;}
}
B5f5196:L5f5196:{c.instructions+=13;NFSU2_TR(0x5f5196);
__builtin_memmove((R+8),gp(0x80220c),4);
}
B5f519c:{NFSU2_TR(0x5f519c);
__builtin_memmove((R+0),gp(0x802208),4);
}
B5f51a1:{NFSU2_TR(0x5f51a1);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f51a5:{NFSU2_TR(0x5f51a5);
__builtin_memmove((R+8),gp(0x802214),4);
}
B5f51ab:{NFSU2_TR(0x5f51ab);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f51af:{NFSU2_TR(0x5f51af);
__builtin_memmove((R+0),gp(0x802210),4);
}
B5f51b4:{NFSU2_TR(0x5f51b4);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f51b8:{NFSU2_TR(0x5f51b8);
__builtin_memmove((R+8),gp(0x80221c),4);
}
B5f51be:{NFSU2_TR(0x5f51be);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f51c2:{NFSU2_TR(0x5f51c2);
__builtin_memmove((R+0),gp(0x802218),4);
}
B5f51c7:{NFSU2_TR(0x5f51c7);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f51cb:{NFSU2_TR(0x5f51cb);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f51cf:{NFSU2_TR(0x5f51cf);
w4(R+8,u32(0x1ull));
}
B5f51d4:L5f51d4:{c.instructions+=4;NFSU2_TR(0x5f51d4);
{u32 ea_=u32((r4(R+8)*4u)+r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B5f51d8:{NFSU2_TR(0x5f51d8);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5f51da:{NFSU2_TR(0x5f51da);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5f51dd:{NFSU2_TR(0x5f51dd);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L5f51e9;}}
}
B5f51df:L5f51df:{c.instructions+=3;NFSU2_TR(0x5f51df);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B5f51e0:{NFSU2_TR(0x5f51e0);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x5ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x5ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5f51e3:{NFSU2_TR(0x5f51e3);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5f51d4u);}goto L5f51d4;}}
}
B5f51e5:L5f51e5:{c.instructions+=2;NFSU2_TR(0x5f51e5);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5f51e7:{NFSU2_TR(0x5f51e7);
{goto L5f521c;}
}
B5f51e9:L5f51e9:{c.instructions+=3;NFSU2_TR(0x5f51e9);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x2ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5f51ec:{NFSU2_TR(0x5f51ec);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x6ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x6ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5f51ef:{NFSU2_TR(0x5f51ef);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5f51f6;}}
}
B5f51f1:L5f51f1:{c.instructions+=1;NFSU2_TR(0x5f51f1);
w4(R+24,u32(0x6ull));
}
B5f51f6:L5f51f6:{c.instructions+=9;NFSU2_TR(0x5f51f6);
{u32 ea_=u32((r4(R+8)*4u)+r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5f51fa:{NFSU2_TR(0x5f51fa);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x8ull))));
w4(U+4,u32(u32(u32(0x8021dcull))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B5f5201:{NFSU2_TR(0x5f5201);
{u32 ea_=u32((r4(R+8)*4u)+r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5f5205:{NFSU2_TR(0x5f5205);
{u32 ea_=u32((r4(R+8)*4u)+r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5f5209:{NFSU2_TR(0x5f5209);
__asm__ volatile(".byte 0xde,0xf9":::"memory");
}
B5f520b:{NFSU2_TR(0x5f520b);
{u32 ea_=u32((r4(R+8)*8u)+u32(8397280u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5f5212:{NFSU2_TR(0x5f5212);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5f5214:{NFSU2_TR(0x5f5214);
__asm__ volatile(".byte 0xde,0xc9":::"memory");
}
B5f5216:{NFSU2_TR(0x5f5216);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5f5218:L5f5218:{c.instructions+=1;NFSU2_TR(0x5f5218);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5f521c:L5f521c:{c.instructions+=2;NFSU2_TR(0x5f521c);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5f521e:{NFSU2_TR(0x5f521e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5f5279;}}
}
B5f5220:L5f5220:{c.instructions+=5;NFSU2_TR(0x5f5220);
{u32 ea_=u32(u32(8371928u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5f5226:{NFSU2_TR(0x5f5226);
{u32 ea_=u32(u32(7881304u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5f522c:{NFSU2_TR(0x5f522c);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5f522e:{NFSU2_TR(0x5f522e);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5f5231:{NFSU2_TR(0x5f5231);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L5f523b;}}
}
B5f5233:L5f5233:{c.instructions+=2;NFSU2_TR(0x5f5233);
{u32 ea_=u32(u32(8371928u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5f5239:{NFSU2_TR(0x5f5239);
{goto L5f5241;}
}
B5f523b:L5f523b:{c.instructions+=1;NFSU2_TR(0x5f523b);
{u32 ea_=u32(r4(R+4)+u32(1088u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5f5241:L5f5241:{c.instructions+=8;NFSU2_TR(0x5f5241);
{u32 ea_=u32(u32(8397344u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5f5247:{NFSU2_TR(0x5f5247);
__asm__ volatile(".byte 0xd8,0xc1":::"memory");
}
B5f5249:{NFSU2_TR(0x5f5249);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5f524d:{NFSU2_TR(0x5f524d);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5f5251:{NFSU2_TR(0x5f5251);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5f5255:{NFSU2_TR(0x5f5255);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5f5257:{NFSU2_TR(0x5f5257);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5f525a:{NFSU2_TR(0x5f525a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5f5264;}}
}
B5f525c:L5f525c:{c.instructions+=3;NFSU2_TR(0x5f525c);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5f525e:{NFSU2_TR(0x5f525e);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5f5262:{NFSU2_TR(0x5f5262);
{goto L5f527d;}
}
B5f5264:L5f5264:{c.instructions+=6;NFSU2_TR(0x5f5264);
{u32 ea_=u32(u32(8397344u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5f526a:{NFSU2_TR(0x5f526a);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5f526e:{NFSU2_TR(0x5f526e);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B5f5270:{NFSU2_TR(0x5f5270);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5f5272:{NFSU2_TR(0x5f5272);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5f5275:{NFSU2_TR(0x5f5275);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L5f527d;}}
}
B5f5277:L5f5277:{c.instructions+=1;NFSU2_TR(0x5f5277);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5f5279:L5f5279:{c.instructions+=1;NFSU2_TR(0x5f5279);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5f527d:L5f527d:{c.instructions+=8;NFSU2_TR(0x5f527d);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x434ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f5283:{NFSU2_TR(0x5f5283);
{u32 ea_=u32(u32(8371928u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5f5289:{NFSU2_TR(0x5f5289);
{u32 ea_=u32(u32(7881304u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5f528f:{NFSU2_TR(0x5f528f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5f5290:{NFSU2_TR(0x5f5290);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5f5291:{NFSU2_TR(0x5f5291);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5f5293:{NFSU2_TR(0x5f5293);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5f5296:{NFSU2_TR(0x5f5296);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L5f52a9;}}
}
B5f5298:L5f5298:{c.instructions+=5;NFSU2_TR(0x5f5298);
__builtin_memmove((R+0),gp(0x7fbed8),4);
}
B5f529d:{NFSU2_TR(0x5f529d);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5f529f:{NFSU2_TR(0x5f529f);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x440ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f52a5:{NFSU2_TR(0x5f52a5);
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
B5f52a8:{NFSU2_TR(0x5f52a8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5f52a9:L5f52a9:{c.instructions+=3;NFSU2_TR(0x5f52a9);
{u32 ea_=u32(r4(R+4)+u32(1088u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5f52af:{NFSU2_TR(0x5f52af);
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
B5f52b2:{NFSU2_TR(0x5f52b2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5f52c0:L5f52c0:{c.instructions+=12;NFSU2_TR(0x5f52c0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f52c1:{NFSU2_TR(0x5f52c1);
__builtin_memmove((R+20),(R+16),4);
}
B5f52c3:{NFSU2_TR(0x5f52c3);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B5f52c6:{NFSU2_TR(0x5f52c6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x14ull))));
}
B5f52c9:{NFSU2_TR(0x5f52c9);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f52ca:{NFSU2_TR(0x5f52ca);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f52cb:{NFSU2_TR(0x5f52cb);
__builtin_memmove((R+24),(R+4),4);
}
B5f52cd:{NFSU2_TR(0x5f52cd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5f52d0:{NFSU2_TR(0x5f52d0);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f52d1:{NFSU2_TR(0x5f52d1);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f52d3:{NFSU2_TR(0x5f52d3);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f52d7:{NFSU2_TR(0x5f52d7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f52dcull));
TAIL_STATIC(0x5f46a0u,5f4);
}
B5f52dc:L5f52dc:{c.instructions+=3;NFSU2_TR(0x5f52dc);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5f52df:{NFSU2_TR(0x5f52df);
__builtin_memmove((R+4),(R+28),4);
}
B5f52e1:{NFSU2_TR(0x5f52e1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f52e6ull));
TAIL_STATIC(0x59f880u,59f);
}
B5f52e6:L5f52e6:{c.instructions+=4;NFSU2_TR(0x5f52e6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B5f52e9:{NFSU2_TR(0x5f52e9);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f52ea:{NFSU2_TR(0x5f52ea);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8d8ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5f52f0:{NFSU2_TR(0x5f52f0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f52f5ull));
TAIL_STATIC(0x5da330u,5da);
}
B5f52f5:L5f52f5:{c.instructions+=14;NFSU2_TR(0x5f52f5);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+4),(U+4),2);
}
B5f52f9:{NFSU2_TR(0x5f52f9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5f52fc:{NFSU2_TR(0x5f52fc);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40cull))));
__builtin_memmove((U+4),(R+4),2);
s2(u32(r4(U+0)),r2(U+4));
}
B5f5303:{NFSU2_TR(0x5f5303);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40eull))));
w2(U+4,u16(0x0ull));
s2(u32(r4(U+0)),r2(U+4));
}
B5f530c:{NFSU2_TR(0x5f530c);
{u32 ea_=u32(r4(R+12)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5f530f:{NFSU2_TR(0x5f530f);
{u32 ea_=u32(r4(R+12)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5f5312:{NFSU2_TR(0x5f5312);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5f5314:{NFSU2_TR(0x5f5314);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5f5316:{NFSU2_TR(0x5f5316);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f5319:{NFSU2_TR(0x5f5319);
{u32 ea_=u32(r4(R+24)+u32(100u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5f531c:{NFSU2_TR(0x5f531c);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5c4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5f5322:{NFSU2_TR(0x5f5322);
{u32 ea_=u32(r4(R+24)+u32(104u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5f5325:{NFSU2_TR(0x5f5325);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x42cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f532b:{NFSU2_TR(0x5f532b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f5330ull));
TAIL_STATIC(0x5dca30u,5dc);
}
B5f5330:L5f5330:{c.instructions+=2;NFSU2_TR(0x5f5330);
__builtin_memmove((R+4),(R+24),4);
}
B5f5332:{NFSU2_TR(0x5f5332);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f5337ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5f5010u);}goto L5f5010;}
}
B5f5337:L5f5337:{c.instructions+=9;NFSU2_TR(0x5f5337);
{u32 ea_=u32(r4(R+20)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5f533a:{NFSU2_TR(0x5f533a);
{u32 ea_=u32(u32(7881560u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5f5340:{NFSU2_TR(0x5f5340);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f5341:{NFSU2_TR(0x5f5341);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x90ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5f5347:{NFSU2_TR(0x5f5347);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5f534b:{NFSU2_TR(0x5f534b);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5f534e:{NFSU2_TR(0x5f534e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f534f:{NFSU2_TR(0x5f534f);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f5350:{NFSU2_TR(0x5f5350);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f5355ull));
TAIL_STATIC(0x43cf90u,43c);
}
B5f5355:L5f5355:{c.instructions+=5;NFSU2_TR(0x5f5355);
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
B5f5358:{NFSU2_TR(0x5f5358);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5f535c:{NFSU2_TR(0x5f535c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f535d:{NFSU2_TR(0x5f535d);
__builtin_memmove((R+4),(R+28),4);
}
B5f535f:{NFSU2_TR(0x5f535f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f5364ull));
TAIL_STATIC(0x592160u,592);
}
B5f5364:L5f5364:{c.instructions+=22;NFSU2_TR(0x5f5364);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5f5367:{NFSU2_TR(0x5f5367);
{u32 ea_=u32(r4(R+4)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5f536a:{NFSU2_TR(0x5f536a);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
w1(R+519,u8(s32(r4(R+12))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+12))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+12))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5f536c:{NFSU2_TR(0x5f536c);
{u32 ea_=u32(r4(R+24)+u32(1068u));__asm__ volatile(".byte 0xd8,0x38"::"a"(ea_):"memory");}
}
B5f5372:{NFSU2_TR(0x5f5372);
{u32 ea_=u32(r4(R+24)+u32(816u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5f5378:{NFSU2_TR(0x5f5378);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5f537b:{NFSU2_TR(0x5f537b);
{u32 ea_=u32(r4(R+8)+u32(80u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5f537e:{NFSU2_TR(0x5f537e);
{u32 ea_=u32(r4(R+24)+u32(1068u));__asm__ volatile(".byte 0xd8,0x38"::"a"(ea_):"memory");}
}
B5f5384:{NFSU2_TR(0x5f5384);
{u32 ea_=u32(r4(R+24)+u32(820u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5f538a:{NFSU2_TR(0x5f538a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5f538d:{NFSU2_TR(0x5f538d);
{u32 ea_=u32(r4(R+0)+u32(128u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5f5393:{NFSU2_TR(0x5f5393);
{u32 ea_=u32(r4(R+24)+u32(1068u));__asm__ volatile(".byte 0xd8,0x38"::"a"(ea_):"memory");}
}
B5f5399:{NFSU2_TR(0x5f5399);
{u32 ea_=u32(r4(R+24)+u32(824u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5f539f:{NFSU2_TR(0x5f539f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5f53a2:{NFSU2_TR(0x5f53a2);
{u32 ea_=u32(r4(R+4)+u32(176u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5f53a8:{NFSU2_TR(0x5f53a8);
{u32 ea_=u32(r4(R+24)+u32(1068u));__asm__ volatile(".byte 0xd8,0x38"::"a"(ea_):"memory");}
}
B5f53ae:{NFSU2_TR(0x5f53ae);
{u32 ea_=u32(r4(R+24)+u32(828u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5f53b4:{NFSU2_TR(0x5f53b4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5f53b7:{NFSU2_TR(0x5f53b7);
u8 U[6];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x1e0ull))));
__builtin_memmove((U+4),(R+12),2);
s2(u32(r4(U+0)),r2(U+4));
}
B5f53be:{NFSU2_TR(0x5f53be);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5f53c1:{NFSU2_TR(0x5f53c1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5f53c3:{NFSU2_TR(0x5f53c3);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f53c6ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5f53c6:L5f53c6:{c.instructions+=3;NFSU2_TR(0x5f53c6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5f53c9:{NFSU2_TR(0x5f53c9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5f53cb:{NFSU2_TR(0x5f53cb);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f53ceull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5f53ce:L5f53ce:{c.instructions+=2;NFSU2_TR(0x5f53ce);
__builtin_memmove((R+4),(R+28),4);
}
B5f53d0:{NFSU2_TR(0x5f53d0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f53d5ull));
TAIL_STATIC(0x5923e0u,592);
}
B5f53d5:L5f53d5:{c.instructions+=3;NFSU2_TR(0x5f53d5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5f53d8:{NFSU2_TR(0x5f53d8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5f53da:{NFSU2_TR(0x5f53da);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f53ddull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5f53dd:L5f53dd:{c.instructions+=4;NFSU2_TR(0x5f53dd);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5f53e1:{NFSU2_TR(0x5f53e1);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f53e2:{NFSU2_TR(0x5f53e2);
__builtin_memmove((R+4),(R+24),4);
}
B5f53e4:{NFSU2_TR(0x5f53e4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f53e9ull));
TAIL_STATIC(0x5f46a0u,5f4);
}
B5f53e9:L5f53e9:{c.instructions+=3;NFSU2_TR(0x5f53e9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5f53ec:{NFSU2_TR(0x5f53ec);
u8 U[22];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0x1ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0x1ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B5f53f0:{NFSU2_TR(0x5f53f0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5f5476;}}
}
B5f53f6:L5f53f6:{c.instructions+=3;NFSU2_TR(0x5f53f6);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x900ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B5f53fc:{NFSU2_TR(0x5f53fc);
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
B5f53fe:{NFSU2_TR(0x5f53fe);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5f548b;}}
}
B5f5404:L5f5404:{c.instructions+=2;NFSU2_TR(0x5f5404);
__builtin_memmove((R+4),gp(0x8650b8),4);
}
B5f540a:{NFSU2_TR(0x5f540a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f540full));
TAIL_STATIC(0x578ee0u,578);
}
B5f540f:L5f540f:{c.instructions+=3;NFSU2_TR(0x5f540f);
u8 U[14];
__builtin_memmove((U+6),gp(0x82a3a4),4);
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
B5f5415:{NFSU2_TR(0x5f5415);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5f5418:{NFSU2_TR(0x5f5418);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L5f5461;}}
}
B5f541a:L5f541a:{c.instructions+=3;NFSU2_TR(0x5f541a);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5f541d:{NFSU2_TR(0x5f541d);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f541e:{NFSU2_TR(0x5f541e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f5423ull));
TAIL_STATIC(0x4022c0u,402);
}
B5f5423:L5f5423:{c.instructions+=7;NFSU2_TR(0x5f5423);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x238ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5f5429:{NFSU2_TR(0x5f5429);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5f542c:{NFSU2_TR(0x5f542c);
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
B5f542e:{NFSU2_TR(0x5f542e);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x225ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5f5434:{NFSU2_TR(0x5f5434);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f543a:{NFSU2_TR(0x5f543a);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xacull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f5440:{NFSU2_TR(0x5f5440);
if(r1(R+518)){{goto L5f548b;}}
}
B5f5442:L5f5442:{c.instructions+=2;NFSU2_TR(0x5f5442);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5f5444:{NFSU2_TR(0x5f5444);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f5447ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5f5447:L5f5447:{c.instructions+=3;NFSU2_TR(0x5f5447);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x238ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5f544d:{NFSU2_TR(0x5f544d);
u8 U[22];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0x1ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0x1ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B5f5451:{NFSU2_TR(0x5f5451);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5f5476;}}
}
B5f5453:L5f5453:{c.instructions+=5;NFSU2_TR(0x5f5453);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5f5455:{NFSU2_TR(0x5f5455);
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
B5f5457:{NFSU2_TR(0x5f5457);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x249ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5f545d:{NFSU2_TR(0x5f545d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f545e:{NFSU2_TR(0x5f545e);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f5461ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5f5461:L5f5461:{c.instructions+=8;NFSU2_TR(0x5f5461);
__builtin_memmove((R+4),gp(0x86518c),4);
}
B5f5467:{NFSU2_TR(0x5f5467);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x9c0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f546d:{NFSU2_TR(0x5f546d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5f546e:{NFSU2_TR(0x5f546e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5f546f:{NFSU2_TR(0x5f546f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5f5470:{NFSU2_TR(0x5f5470);
__builtin_memmove((R+16),(R+20),4);
}
B5f5472:{NFSU2_TR(0x5f5472);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5f5473:{NFSU2_TR(0x5f5473);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5f5476:L5f5476:{c.instructions+=8;NFSU2_TR(0x5f5476);
__builtin_memmove((R+8),gp(0x86518c),4);
}
B5f547c:{NFSU2_TR(0x5f547c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x9c0ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f5482:{NFSU2_TR(0x5f5482);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5f5483:{NFSU2_TR(0x5f5483);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5f5484:{NFSU2_TR(0x5f5484);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5f5485:{NFSU2_TR(0x5f5485);
__builtin_memmove((R+16),(R+20),4);
}
B5f5487:{NFSU2_TR(0x5f5487);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5f5488:{NFSU2_TR(0x5f5488);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5f548b:L5f548b:{c.instructions+=8;NFSU2_TR(0x5f548b);
__builtin_memmove((R+0),gp(0x86518c),4);
}
B5f5490:{NFSU2_TR(0x5f5490);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5f5491:{NFSU2_TR(0x5f5491);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x9c0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f5497:{NFSU2_TR(0x5f5497);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5f5498:{NFSU2_TR(0x5f5498);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5f5499:{NFSU2_TR(0x5f5499);
__builtin_memmove((R+16),(R+20),4);
}
B5f549b:{NFSU2_TR(0x5f549b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5f549c:{NFSU2_TR(0x5f549c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5f54a0:L5f54a0:{c.instructions+=7;NFSU2_TR(0x5f54a0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x20ull))));
}
B5f54a3:{NFSU2_TR(0x5f54a3);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f54a4:{NFSU2_TR(0x5f54a4);
__builtin_memmove((R+24),(R+4),4);
}
B5f54a6:{NFSU2_TR(0x5f54a6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5f54a9:{NFSU2_TR(0x5f54a9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5f54ac:{NFSU2_TR(0x5f54ac);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5f54af:{NFSU2_TR(0x5f54af);
if(r1(R+518)){{goto L5f54ba;}}
}
B5f54b1:L5f54b1:{c.instructions+=2;NFSU2_TR(0x5f54b1);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5f54b4:{NFSU2_TR(0x5f54b4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5f556c;}}
}
B5f54ba:L5f54ba:{c.instructions+=7;NFSU2_TR(0x5f54ba);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8b4ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5f54c4:{NFSU2_TR(0x5f54c4);
__builtin_memmove((R+4),gp(0x88f2c0),4);
}
B5f54ca:{NFSU2_TR(0x5f54ca);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f54cb:{NFSU2_TR(0x5f54cb);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5f54cf:{NFSU2_TR(0x5f54cf);
u8 U[4];
w4(U+0,u32(0x7a0780ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f54d4:{NFSU2_TR(0x5f54d4);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f54d5:{NFSU2_TR(0x5f54d5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f54daull));
TAIL_STATIC(0x4400d0u,440);
}
B5f54da:L5f54da:{c.instructions+=3;NFSU2_TR(0x5f54da);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5f54de:{NFSU2_TR(0x5f54de);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f54df:{NFSU2_TR(0x5f54df);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f54e4ull));
TAIL_STATIC(0x43db50u,43d);
}
B5f54e4:L5f54e4:{c.instructions+=5;NFSU2_TR(0x5f54e4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B5f54e7:{NFSU2_TR(0x5f54e7);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x5c4ull))));
}
B5f54ed:{NFSU2_TR(0x5f54ed);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f54ee:{NFSU2_TR(0x5f54ee);
__builtin_memmove((R+4),(R+24),4);
}
B5f54f0:{NFSU2_TR(0x5f54f0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f54f5ull));
TAIL_STATIC(0x5d80f0u,5d8);
}
B5f54f5:L5f54f5:{c.instructions+=6;NFSU2_TR(0x5f54f5);
__builtin_memmove((R+4),gp(0x88f2c0),4);
}
B5f54fb:{NFSU2_TR(0x5f54fb);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f54fc:{NFSU2_TR(0x5f54fc);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5f5500:{NFSU2_TR(0x5f5500);
u8 U[4];
w4(U+0,u32(0x7a0794ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f5505:{NFSU2_TR(0x5f5505);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f5506:{NFSU2_TR(0x5f5506);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f550bull));
TAIL_STATIC(0x4400d0u,440);
}
B5f550b:L5f550b:{c.instructions+=3;NFSU2_TR(0x5f550b);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5f550f:{NFSU2_TR(0x5f550f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f5510:{NFSU2_TR(0x5f5510);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f5515ull));
TAIL_STATIC(0x43db50u,43d);
}
B5f5515:L5f5515:{c.instructions+=4;NFSU2_TR(0x5f5515);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B5f5518:{NFSU2_TR(0x5f5518);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f5519:{NFSU2_TR(0x5f5519);
__builtin_memmove((R+4),(R+24),4);
}
B5f551b:{NFSU2_TR(0x5f551b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f5520ull));
TAIL_STATIC(0x5d80f0u,5d8);
}
B5f5520:L5f5520:{c.instructions+=3;NFSU2_TR(0x5f5520);
__builtin_memmove((R+0),gp(0x89e7b0),4);
}
B5f5525:{NFSU2_TR(0x5f5525);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5f5527:{NFSU2_TR(0x5f5527);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5f556c;}}
}
B5f5529:L5f5529:{c.instructions+=3;NFSU2_TR(0x5f5529);
__builtin_memmove((R+0),gp(0x850078),4);
}
B5f552e:{NFSU2_TR(0x5f552e);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5f5531:{NFSU2_TR(0x5f5531);
if(r1(R+518)){{goto L5f5541;}}
}
B5f5533:L5f5533:{c.instructions+=2;NFSU2_TR(0x5f5533);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5f5536:{NFSU2_TR(0x5f5536);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5f556c;}}
}
B5f5538:L5f5538:{c.instructions+=2;NFSU2_TR(0x5f5538);
u8 U[8];
__builtin_memmove((U+0),gp(0x83aab4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x8ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5f553f:{NFSU2_TR(0x5f553f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5f556c;}}
}
B5f5541:L5f5541:{c.instructions+=6;NFSU2_TR(0x5f5541);
__builtin_memmove((R+4),gp(0x862838),4);
}
B5f5547:{NFSU2_TR(0x5f5547);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f5548:{NFSU2_TR(0x5f5548);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5f554c:{NFSU2_TR(0x5f554c);
u8 U[4];
w4(U+0,u32(0x7a0738ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f5551:{NFSU2_TR(0x5f5551);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f5552:{NFSU2_TR(0x5f5552);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f5557ull));
TAIL_STATIC(0x4400d0u,440);
}
B5f5557:L5f5557:{c.instructions+=3;NFSU2_TR(0x5f5557);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5f555b:{NFSU2_TR(0x5f555b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f555c:{NFSU2_TR(0x5f555c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f5561ull));
TAIL_STATIC(0x43db50u,43d);
}
B5f5561:L5f5561:{c.instructions+=4;NFSU2_TR(0x5f5561);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B5f5564:{NFSU2_TR(0x5f5564);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f5565:{NFSU2_TR(0x5f5565);
__builtin_memmove((R+4),(R+24),4);
}
B5f5567:{NFSU2_TR(0x5f5567);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f556cull));
TAIL_STATIC(0x5d80f0u,5d8);
}
B5f556c:L5f556c:{c.instructions+=3;NFSU2_TR(0x5f556c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5f556d:{NFSU2_TR(0x5f556d);
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
B5f5570:{NFSU2_TR(0x5f5570);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5f5580:L5f5580:{c.instructions+=13;NFSU2_TR(0x5f5580);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f5581:{NFSU2_TR(0x5f5581);
__builtin_memmove((R+20),(R+16),4);
}
B5f5583:{NFSU2_TR(0x5f5583);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B5f5586:{NFSU2_TR(0x5f5586);
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
B5f5589:{NFSU2_TR(0x5f5589);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f558a:{NFSU2_TR(0x5f558a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f558b:{NFSU2_TR(0x5f558b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f558c:{NFSU2_TR(0x5f558c);
__builtin_memmove((R+28),(R+4),4);
}
B5f558e:{NFSU2_TR(0x5f558e);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xd0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B5f5594:{NFSU2_TR(0x5f5594);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f5595:{NFSU2_TR(0x5f5595);
u8 U[4];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5f5599:{NFSU2_TR(0x5f5599);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f559a:{NFSU2_TR(0x5f559a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f559full));
TAIL_STATIC(0x4012b0u,401);
}
B5f559f:L5f559f:{c.instructions+=15;NFSU2_TR(0x5f559f);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5f55a2:{NFSU2_TR(0x5f55a2);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5f55a5:{NFSU2_TR(0x5f55a5);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5f55a8:{NFSU2_TR(0x5f55a8);
u8 U[8];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f55ac:{NFSU2_TR(0x5f55ac);
u8 U[4];
w4(U+0,u32(0x3e19999aull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f55b1:{NFSU2_TR(0x5f55b1);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x70ull))));
__builtin_memmove((R+8),(U+0),4);
}
B5f55b4:{NFSU2_TR(0x5f55b4);
u8 U[8];
w4(U+0,u32(u32(u32(0x60ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f55b8:{NFSU2_TR(0x5f55b8);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f55b9:{NFSU2_TR(0x5f55b9);
u8 U[4];
w4(U+0,u32(u32(u32(0x60ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5f55bd:{NFSU2_TR(0x5f55bd);
u8 U[8];
w4(U+0,u32(u32(u32(0x68ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f55c1:{NFSU2_TR(0x5f55c1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f55c2:{NFSU2_TR(0x5f55c2);
u8 U[4];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5f55c6:{NFSU2_TR(0x5f55c6);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f55c7:{NFSU2_TR(0x5f55c7);
u8 U[8];
w4(U+0,u32(u32(u32(0x74ull))+u32(r4(R+16))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5f55cf:{NFSU2_TR(0x5f55cf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f55d4ull));
TAIL_STATIC(0x43d0c0u,43d);
}
B5f55d4:L5f55d4:{c.instructions+=4;NFSU2_TR(0x5f55d4);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x5ccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5f55da:{NFSU2_TR(0x5f55da);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B5f55dd:{NFSU2_TR(0x5f55dd);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5f55df:{NFSU2_TR(0x5f55df);
if(r1(R+518)){{goto L5f55e7;}}
}
B5f55e1:L5f55e1:{c.instructions+=2;NFSU2_TR(0x5f55e1);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(s32(s16(r2(U+4)))));
}
B5f55e5:{NFSU2_TR(0x5f55e5);
{goto L5f55e9;}
}
B5f55e7:L5f55e7:{c.instructions+=1;NFSU2_TR(0x5f55e7);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5f55e9:L5f55e9:{c.instructions+=4;NFSU2_TR(0x5f55e9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f55ea:{NFSU2_TR(0x5f55ea);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5f55ee:{NFSU2_TR(0x5f55ee);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f55ef:{NFSU2_TR(0x5f55ef);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f55f4ull));
TAIL_STATIC(0x5e03b0u,5e0);
}
B5f55f4:L5f55f4:{c.instructions+=4;NFSU2_TR(0x5f55f4);
__builtin_memmove((R+12),(R+0),4);
}
B5f55f6:{NFSU2_TR(0x5f55f6);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B5f55f9:{NFSU2_TR(0x5f55f9);
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
B5f55fb:{NFSU2_TR(0x5f55fb);
if(r1(R+518)){{goto L5f5708;}}
}
B5f5601:L5f5601:{c.instructions+=3;NFSU2_TR(0x5f5601);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5f5603:{NFSU2_TR(0x5f5603);
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
B5f5605:{NFSU2_TR(0x5f5605);
if(r1(R+518)){{goto L5f5708;}}
}
B5f560b:L5f560b:{c.instructions+=4;NFSU2_TR(0x5f560b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5f560e:{NFSU2_TR(0x5f560e);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0xfffefffdull))));
}
B5f5614:{NFSU2_TR(0x5f5614);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
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
B5f5617:{NFSU2_TR(0x5f5617);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L5f56f6;}}
}
B5f561d:L5f561d:{c.instructions+=1;NFSU2_TR(0x5f561d);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x5f5710ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5f5624:L5f5624:{c.instructions+=4;NFSU2_TR(0x5f5624);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5f5627:{NFSU2_TR(0x5f5627);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5f562a:{NFSU2_TR(0x5f562a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f562b:{NFSU2_TR(0x5f562b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f5630ull));
TAIL_STATIC(0x4022c0u,402);
}
B5f5630:L5f5630:{c.instructions+=3;NFSU2_TR(0x5f5630);
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
B5f5633:{NFSU2_TR(0x5f5633);
__builtin_memmove((R+4),(R+28),4);
}
B5f5635:{NFSU2_TR(0x5f5635);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f563aull));
TAIL_STATIC(0x4018a0u,401);
}
B5f563a:L5f563a:{c.instructions+=3;NFSU2_TR(0x5f563a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f563b:{NFSU2_TR(0x5f563b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f563c:{NFSU2_TR(0x5f563c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f5641ull));
TAIL_STATIC(0x5dc1a0u,5dc);
}
B5f5641:L5f5641:{c.instructions+=5;NFSU2_TR(0x5f5641);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5f5644:{NFSU2_TR(0x5f5644);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5f5647:{NFSU2_TR(0x5f5647);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B5f564a:{NFSU2_TR(0x5f564a);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5f564d:{NFSU2_TR(0x5f564d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5f56ff;}}
}
B5f5653:L5f5653:{c.instructions+=3;NFSU2_TR(0x5f5653);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x900ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B5f5659:{NFSU2_TR(0x5f5659);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5f565b:{NFSU2_TR(0x5f565b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5f56ff;}}
}
B5f5661:L5f5661:{c.instructions+=4;NFSU2_TR(0x5f5661);
__builtin_memmove((R+4),gp(0x7fb724),4);
}
B5f5667:{NFSU2_TR(0x5f5667);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x3ull))));
}
B5f566a:{NFSU2_TR(0x5f566a);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x80000003ull))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B5f5670:{NFSU2_TR(0x5f5670);
u8 U[1];
w1(U+0,u8(!(r1(R+519))));
if(r1(U+0)){{goto L5f5677;}}
}
B5f5672:L5f5672:{c.instructions+=3;NFSU2_TR(0x5f5672);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
}
B5f5673:{NFSU2_TR(0x5f5673);
w4(R+4,u32(u32(r4(R+4))|u32(u32(0xfffffffcull))));
}
B5f5676:{NFSU2_TR(0x5f5676);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B5f5677:L5f5677:{c.instructions+=1;NFSU2_TR(0x5f5677);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5f56ff;}}
}
B5f567d:L5f567d:{c.instructions+=5;NFSU2_TR(0x5f567d);
{u32 ea_=u32(r4(R+28)+u32(1072u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5f5683:{NFSU2_TR(0x5f5683);
{u32 ea_=u32(u32(7881848u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5f5689:{NFSU2_TR(0x5f5689);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5f568b:{NFSU2_TR(0x5f568b);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5f568e:{NFSU2_TR(0x5f568e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5f56ff;}}
}
B5f5690:L5f5690:{c.instructions+=5;NFSU2_TR(0x5f5690);
__builtin_memmove((R+8),gp(0x7a55dc),4);
}
B5f5696:{NFSU2_TR(0x5f5696);
__builtin_memmove((R+4),gp(0x8650b8),4);
}
B5f569c:{NFSU2_TR(0x5f569c);
u8 U[4];
w4(U+0,u32(0x7a62ecull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f56a1:{NFSU2_TR(0x5f56a1);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f56a2:{NFSU2_TR(0x5f56a2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f56a7ull));
TAIL_STATIC(0x578e90u,578);
}
B5f56a7:L5f56a7:{c.instructions+=1;NFSU2_TR(0x5f56a7);
{goto L5f56ff;}
}
B5f56a9:L5f56a9:{c.instructions+=3;NFSU2_TR(0x5f56a9);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5f56ac:{NFSU2_TR(0x5f56ac);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B5f56b0:{NFSU2_TR(0x5f56b0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5f56ff;}}
}
B5f56b2:L5f56b2:{c.instructions+=3;NFSU2_TR(0x5f56b2);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x900ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B5f56b8:{NFSU2_TR(0x5f56b8);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(r1(R+8))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5f56ba:{NFSU2_TR(0x5f56ba);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5f56ff;}}
}
B5f56bc:L5f56bc:{c.instructions+=3;NFSU2_TR(0x5f56bc);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x968ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5f56c2:{NFSU2_TR(0x5f56c2);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5f56c4:{NFSU2_TR(0x5f56c4);
if(r1(R+518)){{goto L5f56ff;}}
}
B5f56c6:L5f56c6:{c.instructions+=4;NFSU2_TR(0x5f56c6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5f56c9:{NFSU2_TR(0x5f56c9);
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
B5f56cb:{NFSU2_TR(0x5f56cb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5f56cd:{NFSU2_TR(0x5f56cd);
if(r1(R+518)){{goto L5f56e6;}}
}
B5f56cf:L5f56cf:{c.instructions+=10;NFSU2_TR(0x5f56cf);
{u32 ea_=u32(r4(R+0)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5f56d2:{NFSU2_TR(0x5f56d2);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f56d3:{NFSU2_TR(0x5f56d3);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5f56d6:{NFSU2_TR(0x5f56d6);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5f56d9:{NFSU2_TR(0x5f56d9);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f56da:{NFSU2_TR(0x5f56da);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5f56dd:{NFSU2_TR(0x5f56dd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5f56df:{NFSU2_TR(0x5f56df);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f56e0:{NFSU2_TR(0x5f56e0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f56e1:{NFSU2_TR(0x5f56e1);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f56e4ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5f56e4:L5f56e4:{c.instructions+=1;NFSU2_TR(0x5f56e4);
{goto L5f56ff;}
}
B5f56e6:L5f56e6:{c.instructions+=5;NFSU2_TR(0x5f56e6);
u8 U[4];
w4(U+0,u32(0xbf800000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f56eb:{NFSU2_TR(0x5f56eb);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f56ed:{NFSU2_TR(0x5f56ed);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f56ef:{NFSU2_TR(0x5f56ef);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f56f1:{NFSU2_TR(0x5f56f1);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f56f4ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5f56f4:L5f56f4:{c.instructions+=1;NFSU2_TR(0x5f56f4);
{goto L5f56ff;}
}
B5f56f6:L5f56f6:{c.instructions+=2;NFSU2_TR(0x5f56f6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f56f7:{NFSU2_TR(0x5f56f7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f56fcull));
TAIL_STATIC(0x5e53f0u,5e5);
}
B5f56fc:L5f56fc:{c.instructions+=1;NFSU2_TR(0x5f56fc);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5f56ff:L5f56ff:{c.instructions+=2;NFSU2_TR(0x5f56ff);
u8 U[6];
w1(R+512,carry<u32>(r4(R+12),u32(0x4ull)));
w1(R+523,scarry<u32>(r4(R+12),u32(0x4ull)));
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(R+12))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+12))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+12))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5f5702:{NFSU2_TR(0x5f5702);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5f5601u);}goto L5f5601;}}
}
B5f5708:L5f5708:{c.instructions+=6;NFSU2_TR(0x5f5708);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5f5709:{NFSU2_TR(0x5f5709);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5f570a:{NFSU2_TR(0x5f570a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5f570b:{NFSU2_TR(0x5f570b);
__builtin_memmove((R+16),(R+20),4);
}
B5f570d:{NFSU2_TR(0x5f570d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5f570e:{NFSU2_TR(0x5f570e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5f5730:L5f5730:{c.instructions+=13;NFSU2_TR(0x5f5730);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f5731:{NFSU2_TR(0x5f5731);
__builtin_memmove((R+20),(R+16),4);
}
B5f5733:{NFSU2_TR(0x5f5733);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B5f5736:{NFSU2_TR(0x5f5736);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x74ull))));
}
B5f5739:{NFSU2_TR(0x5f5739);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5f573f:{NFSU2_TR(0x5f573f);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f5740:{NFSU2_TR(0x5f5740);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f5741:{NFSU2_TR(0x5f5741);
__builtin_memmove((R+24),(R+4),4);
}
B5f5743:{NFSU2_TR(0x5f5743);
{u32 ea_=u32(r4(R+24)+u32(2476u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5f5749:{NFSU2_TR(0x5f5749);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f574a:{NFSU2_TR(0x5f574a);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5f574c:{NFSU2_TR(0x5f574c);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5f574f:{NFSU2_TR(0x5f574f);
if(r1(R+514)){{goto L5f5763;}}
}
B5f5751:L5f5751:{c.instructions+=3;NFSU2_TR(0x5f5751);
{u32 ea_=u32(u32(8802700u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B5f5757:{NFSU2_TR(0x5f5757);
{u32 ea_=u32(u32(7881320u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5f575d:{NFSU2_TR(0x5f575d);
{u32 ea_=u32(r4(R+24)+u32(2476u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5f5763:L5f5763:{c.instructions+=18;NFSU2_TR(0x5f5763);
{u32 ea_=u32(r4(R+24)+u32(1072u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5f5769:{NFSU2_TR(0x5f5769);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5f576b:{NFSU2_TR(0x5f576b);
{u32 ea_=u32(u32(7881324u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5f5771:{NFSU2_TR(0x5f5771);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f5775:{NFSU2_TR(0x5f5775);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f5779:{NFSU2_TR(0x5f5779);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f577d:{NFSU2_TR(0x5f577d);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f5781:{NFSU2_TR(0x5f5781);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x130ull))));
__builtin_memmove((R+0),(U+0),4);
}
B5f5787:{NFSU2_TR(0x5f5787);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f578b:{NFSU2_TR(0x5f578b);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x99cull))));
__builtin_memmove((R+4),(U+0),4);
}
B5f5791:{NFSU2_TR(0x5f5791);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x330ull))));
__builtin_memmove((R+8),(U+0),4);
}
B5f5797:{NFSU2_TR(0x5f5797);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3b4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B5f579d:{NFSU2_TR(0x5f579d);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5f57a1:{NFSU2_TR(0x5f57a1);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0x50000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5f57a9:{NFSU2_TR(0x5f57a9);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f57ad:{NFSU2_TR(0x5f57ad);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f57b1:{NFSU2_TR(0x5f57b1);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f57b5:{NFSU2_TR(0x5f57b5);
{goto L5f57c0;}
}
B5f57c0:L5f57c0:{c.instructions+=4;NFSU2_TR(0x5f57c0);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5f57c4:{NFSU2_TR(0x5f57c4);
u8 U[13];
w4(U+0,u32(u32(u32(0x390ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
__builtin_memmove((R+0),(U+12),1);
}
B5f57cb:{NFSU2_TR(0x5f57cb);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5f57cd:{NFSU2_TR(0x5f57cd);
if(r1(R+518)){{goto L5f5af0;}}
}
B5f57d3:L5f57d3:{c.instructions+=8;NFSU2_TR(0x5f57d3);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B5f57d7:{NFSU2_TR(0x5f57d7);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5f57db:{NFSU2_TR(0x5f57db);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B5f57de:{NFSU2_TR(0x5f57de);
__builtin_memmove((R+28),(R+12),4);
}
B5f57e0:{NFSU2_TR(0x5f57e0);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+28)))));
w8(U+8,u64(s64(s32(u32(0x98ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+28,u32(r8(U+16)));
}
B5f57e6:{NFSU2_TR(0x5f57e6);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x800ee0ull))));
}
B5f57ec:{NFSU2_TR(0x5f57ec);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xdull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5f57ef:{NFSU2_TR(0x5f57ef);
if(r1(R+518)){{goto L5f57f6;}}
}
B5f57f1:L5f57f1:{c.instructions+=2;NFSU2_TR(0x5f57f1);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xeull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5f57f4:{NFSU2_TR(0x5f57f4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5f581d;}}
}
B5f57f6:L5f57f6:{c.instructions+=12;NFSU2_TR(0x5f57f6);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5f57fa:{NFSU2_TR(0x5f57fa);
w4(R+0,u32(0x1ull));
}
B5f57ff:{NFSU2_TR(0x5f57ff);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r1(U+0))));
}
B5f5801:{NFSU2_TR(0x5f5801);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5f5805:{NFSU2_TR(0x5f5805);
w4(R+4,u32(u32(r4(R+4))|u32(r4(R+0))));
}
B5f5807:{NFSU2_TR(0x5f5807);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5f580b:{NFSU2_TR(0x5f580b);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f580f:{NFSU2_TR(0x5f580f);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B5f5811:{NFSU2_TR(0x5f5811);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xeull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5f5814:{NFSU2_TR(0x5f5814);
__builtin_memmove((R+4),(R+518),1);
}
B5f5817:{NFSU2_TR(0x5f5817);
w4(R+0,u32(u32(r4(R+0))|u32(r4(R+4))));
}
B5f5819:{NFSU2_TR(0x5f5819);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f581d:L5f581d:{c.instructions+=17;NFSU2_TR(0x5f581d);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5f5821:{NFSU2_TR(0x5f5821);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5f5823:{NFSU2_TR(0x5f5823);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5f5826:{NFSU2_TR(0x5f5826);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B5f5828:{NFSU2_TR(0x5f5828);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B5f582a:{NFSU2_TR(0x5f582a);
__asm__ volatile(".byte 0xd9,0xc2":::"memory");
}
B5f582c:{NFSU2_TR(0x5f582c);
__asm__ volatile(".byte 0xd8,0xcb":::"memory");
}
B5f582e:{NFSU2_TR(0x5f582e);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5f5830:{NFSU2_TR(0x5f5830);
__asm__ volatile(".byte 0xd9,0xfa":::"memory");
}
B5f5832:{NFSU2_TR(0x5f5832);
__asm__ volatile(".byte 0xdd,0xda":::"memory");
}
B5f5834:{NFSU2_TR(0x5f5834);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5f5836:{NFSU2_TR(0x5f5836);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5f583a:{NFSU2_TR(0x5f583a);
{u32 ea_=u32(r4(R+20)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5f583d:{NFSU2_TR(0x5f583d);
{u32 ea_=u32(u32(8017400u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5f5843:{NFSU2_TR(0x5f5843);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5f5845:{NFSU2_TR(0x5f5845);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5f5848:{NFSU2_TR(0x5f5848);
if(r1(R+514)){{goto L5f59e3;}}
}
B5f584e:L5f584e:{c.instructions+=5;NFSU2_TR(0x5f584e);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5f5852:{NFSU2_TR(0x5f5852);
{u32 ea_=u32(r4(R+28)+u32(96u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5f5855:{NFSU2_TR(0x5f5855);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5f5857:{NFSU2_TR(0x5f5857);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5f585a:{NFSU2_TR(0x5f585a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5f59e3;}}
}
B5f5860:L5f5860:{c.instructions+=11;NFSU2_TR(0x5f5860);
{u32 ea_=u32(u32(8802700u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B5f5866:{NFSU2_TR(0x5f5866);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5f586a:{NFSU2_TR(0x5f586a);
{u32 ea_=u32(u32(7881320u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5f5870:{NFSU2_TR(0x5f5870);
{u32 ea_=u32(r4(R+24)+u32(2476u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5f5876:{NFSU2_TR(0x5f5876);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5f5878:{NFSU2_TR(0x5f5878);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5f587c:{NFSU2_TR(0x5f587c);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5f5880:{NFSU2_TR(0x5f5880);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B5f5882:{NFSU2_TR(0x5f5882);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5f5885:{NFSU2_TR(0x5f5885);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5f5887:{NFSU2_TR(0x5f5887);
if(r1(R+518)){{goto L5f59ed;}}
}
B5f588d:L5f588d:{c.instructions+=2;NFSU2_TR(0x5f588d);
u8 U[3];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((U+1),(U+0),1);
w1(U+2,u8(u32(r1(U+1))-u32(u8(0x0ull))));
w1(R+518,u8((r1(U+2))==(u8(0x0ull))));
}
B5f5890:{NFSU2_TR(0x5f5890);
if(r1(R+518)){{goto L5f59ed;}}
}
B5f5896:L5f5896:{c.instructions+=12;NFSU2_TR(0x5f5896);
{u32 ea_=u32(r4(R+28)+u32(96u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5f5899:{NFSU2_TR(0x5f5899);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5f589d:{NFSU2_TR(0x5f589d);
__asm__ volatile(".byte 0xd8,0xe1":::"memory");
}
B5f589f:{NFSU2_TR(0x5f589f);
{u32 ea_=u32(r4(R+28)+u32(100u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5f58a2:{NFSU2_TR(0x5f58a2);
__asm__ volatile(".byte 0xd8,0xe2":::"memory");
}
B5f58a4:{NFSU2_TR(0x5f58a4);
__asm__ volatile(".byte 0xde,0xf9":::"memory");
}
B5f58a6:{NFSU2_TR(0x5f58a6);
__asm__ volatile(".byte 0xdd,0xd9":::"memory");
}
B5f58a8:{NFSU2_TR(0x5f58a8);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5f58ac:{NFSU2_TR(0x5f58ac);
{u32 ea_=u32(u32(8017436u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5f58b2:{NFSU2_TR(0x5f58b2);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5f58b4:{NFSU2_TR(0x5f58b4);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5f58b7:{NFSU2_TR(0x5f58b7);
if(r1(R+514)){{goto L5f58c1;}}
}
B5f58b9:L5f58b9:{c.instructions+=2;NFSU2_TR(0x5f58b9);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5f58bf:{NFSU2_TR(0x5f58bf);
{goto L5f590a;}
}
B5f58c1:L5f58c1:{c.instructions+=5;NFSU2_TR(0x5f58c1);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5f58c5:{NFSU2_TR(0x5f58c5);
{u32 ea_=u32(u32(8017440u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5f58cb:{NFSU2_TR(0x5f58cb);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5f58cd:{NFSU2_TR(0x5f58cd);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5f58d0:{NFSU2_TR(0x5f58d0);
if(r1(R+514)){{goto L5f58da;}}
}
B5f58d2:L5f58d2:{c.instructions+=2;NFSU2_TR(0x5f58d2);
{u32 ea_=u32(u32(7884072u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5f58d8:{NFSU2_TR(0x5f58d8);
{goto L5f590a;}
}
B5f58da:L5f58da:{c.instructions+=5;NFSU2_TR(0x5f58da);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5f58de:{NFSU2_TR(0x5f58de);
{u32 ea_=u32(u32(8017444u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5f58e4:{NFSU2_TR(0x5f58e4);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5f58e6:{NFSU2_TR(0x5f58e6);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5f58e9:{NFSU2_TR(0x5f58e9);
if(r1(R+514)){{goto L5f58f3;}}
}
B5f58eb:L5f58eb:{c.instructions+=2;NFSU2_TR(0x5f58eb);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5f58f1:{NFSU2_TR(0x5f58f1);
{goto L5f590a;}
}
B5f58f3:L5f58f3:{c.instructions+=5;NFSU2_TR(0x5f58f3);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5f58f7:{NFSU2_TR(0x5f58f7);
{u32 ea_=u32(u32(8017448u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5f58fd:{NFSU2_TR(0x5f58fd);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5f58ff:{NFSU2_TR(0x5f58ff);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5f5902:{NFSU2_TR(0x5f5902);
if(r1(R+514)){{goto L5f590a;}}
}
B5f5904:L5f5904:{c.instructions+=1;NFSU2_TR(0x5f5904);
{u32 ea_=u32(u32(7886096u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5f590a:L5f590a:{c.instructions+=4;NFSU2_TR(0x5f590a);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B5f5910:{NFSU2_TR(0x5f5910);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5f5912:{NFSU2_TR(0x5f5912);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5f5915:{NFSU2_TR(0x5f5915);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5f5936;}}
}
B5f5917:L5f5917:{c.instructions+=7;NFSU2_TR(0x5f5917);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B5f591b:{NFSU2_TR(0x5f591b);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5f5921:{NFSU2_TR(0x5f5921);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B5f5923:{NFSU2_TR(0x5f5923);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5f5925:{NFSU2_TR(0x5f5925);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5f5927:{NFSU2_TR(0x5f5927);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5f592a:{NFSU2_TR(0x5f592a);
if(r1(R+514)){{goto L5f5940;}}
}
B5f592c:L5f592c:{c.instructions+=2;NFSU2_TR(0x5f592c);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5f5934:{NFSU2_TR(0x5f5934);
{goto L5f5948;}
}
B5f5936:L5f5936:{c.instructions+=3;NFSU2_TR(0x5f5936);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5f5938:{NFSU2_TR(0x5f5938);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5f593e:{NFSU2_TR(0x5f593e);
{goto L5f5944;}
}
B5f5940:L5f5940:{c.instructions+=1;NFSU2_TR(0x5f5940);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5f5944:L5f5944:{c.instructions+=1;NFSU2_TR(0x5f5944);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5f5948:L5f5948:{c.instructions+=7;NFSU2_TR(0x5f5948);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5f594c:{NFSU2_TR(0x5f594c);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5f5950:{NFSU2_TR(0x5f5950);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5f5956:{NFSU2_TR(0x5f5956);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xfffffa48ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f595c:{NFSU2_TR(0x5f595c);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5f595e:{NFSU2_TR(0x5f595e);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5f5961:{NFSU2_TR(0x5f5961);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5f59ed;}}
}
B5f5967:L5f5967:{c.instructions+=5;NFSU2_TR(0x5f5967);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5f5969:{NFSU2_TR(0x5f5969);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5f596f:{NFSU2_TR(0x5f596f);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5f5971:{NFSU2_TR(0x5f5971);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5f5974:{NFSU2_TR(0x5f5974);
if(r1(R+514)){{goto L5f5990;}}
}
B5f5976:L5f5976:{c.instructions+=1;NFSU2_TR(0x5f5976);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f5978:L5f5978:{c.instructions+=8;NFSU2_TR(0x5f5978);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5f597c:{NFSU2_TR(0x5f597c);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5f5980:{NFSU2_TR(0x5f5980);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B5f5983:{NFSU2_TR(0x5f5983);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f5984:{NFSU2_TR(0x5f5984);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f5985:{NFSU2_TR(0x5f5985);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f5987:{NFSU2_TR(0x5f5987);
__builtin_memmove((R+4),(R+24),4);
}
B5f5989:{NFSU2_TR(0x5f5989);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f598eull));
TAIL_STATIC(0x61fb00u,61f);
}
B5f598e:L5f598e:{c.instructions+=1;NFSU2_TR(0x5f598e);
{goto L5f59ed;}
}
B5f5990:L5f5990:{c.instructions+=7;NFSU2_TR(0x5f5990);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5f5994:{NFSU2_TR(0x5f5994);
{u32 ea_=u32(u32(8017460u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5f599a:{NFSU2_TR(0x5f599a);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5f599c:{NFSU2_TR(0x5f599c);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5f59a2:{NFSU2_TR(0x5f59a2);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5f59a4:{NFSU2_TR(0x5f59a4);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5f59a7:{NFSU2_TR(0x5f59a7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5f59af;}}
}
B5f59a9:L5f59a9:{c.instructions+=1;NFSU2_TR(0x5f59a9);
{u32 ea_=u32(u32(7881376u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5f59af:L5f59af:{c.instructions+=10;NFSU2_TR(0x5f59af);
u8 U[4];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5f59b3:{NFSU2_TR(0x5f59b3);
{u32 ea_=u32(r4(R+16)+u32(80u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5f59b7:{NFSU2_TR(0x5f59b7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f59b8:{NFSU2_TR(0x5f59b8);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd0ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5f59be:{NFSU2_TR(0x5f59be);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f59bf:{NFSU2_TR(0x5f59bf);
u8 U[4];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5f59c3:{NFSU2_TR(0x5f59c3);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f59c4:{NFSU2_TR(0x5f59c4);
u8 U[8];
w4(U+0,u32(u32(u32(0x60ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5f59cc:{NFSU2_TR(0x5f59cc);
u8 U[8];
w4(U+0,u32(u32(u32(0x64ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5f59d4:{NFSU2_TR(0x5f59d4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f59d9ull));
TAIL_STATIC(0x43c9c0u,43c);
}
B5f59d9:L5f59d9:{c.instructions+=4;NFSU2_TR(0x5f59d9);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B5f59dc:{NFSU2_TR(0x5f59dc);
u8 U[4];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5f59e0:{NFSU2_TR(0x5f59e0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f59e1:{NFSU2_TR(0x5f59e1);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5f5978u);}goto L5f5978;}
}
B5f59e3:L5f59e3:{c.instructions+=2;NFSU2_TR(0x5f59e3);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5f59e7:{NFSU2_TR(0x5f59e7);
u8 U[4];
w4(U+0,u32(0x0ull));
s4(u32(r4(R+0)),r4(U+0));
}
B5f59ed:L5f59ed:{c.instructions+=5;NFSU2_TR(0x5f59ed);
{u32 ea_=u32(r4(R+20)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5f59f0:{NFSU2_TR(0x5f59f0);
{u32 ea_=u32(u32(8017396u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5f59f6:{NFSU2_TR(0x5f59f6);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5f59f8:{NFSU2_TR(0x5f59f8);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5f59fb:{NFSU2_TR(0x5f59fb);
if(r1(R+514)){{goto L5f5af0;}}
}
B5f5a01:L5f5a01:{c.instructions+=3;NFSU2_TR(0x5f5a01);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5f5a05:{NFSU2_TR(0x5f5a05);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x50000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5f5a0a:{NFSU2_TR(0x5f5a0a);
if(r1(R+518)){{goto L5f5af0;}}
}
B5f5a10:L5f5a10:{c.instructions+=2;NFSU2_TR(0x5f5a10);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x60000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5f5a15:{NFSU2_TR(0x5f5a15);
if(r1(R+518)){{goto L5f5af0;}}
}
B5f5a1b:L5f5a1b:{c.instructions+=6;NFSU2_TR(0x5f5a1b);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5f5a1f:{NFSU2_TR(0x5f5a1f);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5f5a21:{NFSU2_TR(0x5f5a21);
{u32 ea_=u32(r4(R+28)+u32(108u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5f5a24:{NFSU2_TR(0x5f5a24);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5f5a26:{NFSU2_TR(0x5f5a26);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5f5a29:{NFSU2_TR(0x5f5a29);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5f5af0;}}
}
B5f5a2f:L5f5a2f:{c.instructions+=3;NFSU2_TR(0x5f5a2f);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5f5a32:{NFSU2_TR(0x5f5a32);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5f5a34:{NFSU2_TR(0x5f5a34);
if(r1(R+518)){{goto L5f5af0;}}
}
B5f5a3a:L5f5a3a:{c.instructions+=2;NFSU2_TR(0x5f5a3a);
u8 U[3];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((U+1),(U+0),1);
w1(U+2,u8(u32(r1(U+1))-u32(u8(0x0ull))));
w1(R+518,u8((r1(U+2))==(u8(0x0ull))));
}
B5f5a3d:{NFSU2_TR(0x5f5a3d);
if(r1(R+518)){{goto L5f5af0;}}
}
B5f5a43:L5f5a43:{c.instructions+=13;NFSU2_TR(0x5f5a43);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5f5a47:{NFSU2_TR(0x5f5a47);
{u32 ea_=u32(r4(R+28)+u32(108u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5f5a4a:{NFSU2_TR(0x5f5a4a);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5f5a4c:{NFSU2_TR(0x5f5a4c);
u8 U[4];
w4(U+0,u32(0x3f800000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f5a51:{NFSU2_TR(0x5f5a51);
__asm__ volatile(".byte 0xd8,0xe1":::"memory");
}
B5f5a53:{NFSU2_TR(0x5f5a53);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f5a55:{NFSU2_TR(0x5f5a55);
{u32 ea_=u32(r4(R+28)+u32(112u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5f5a58:{NFSU2_TR(0x5f5a58);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f5a59:{NFSU2_TR(0x5f5a59);
__asm__ volatile(".byte 0xd8,0xe2":::"memory");
}
B5f5a5b:{NFSU2_TR(0x5f5a5b);
__asm__ volatile(".byte 0xde,0xf9":::"memory");
}
B5f5a5d:{NFSU2_TR(0x5f5a5d);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5f5a60:{NFSU2_TR(0x5f5a60);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5f5a62:{NFSU2_TR(0x5f5a62);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f5a67ull));
TAIL_STATIC(0x401090u,401);
}
B5f5a67:L5f5a67:{c.instructions+=6;NFSU2_TR(0x5f5a67);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B5f5a6b:{NFSU2_TR(0x5f5a6b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B5f5a6e:{NFSU2_TR(0x5f5a6e);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5f5a74:{NFSU2_TR(0x5f5a74);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5f5a76:{NFSU2_TR(0x5f5a76);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5f5a79:{NFSU2_TR(0x5f5a79);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5f5af0;}}
}
B5f5a7b:L5f5a7b:{c.instructions+=13;NFSU2_TR(0x5f5a7b);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5f5a7f:{NFSU2_TR(0x5f5a7f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5f5a81:{NFSU2_TR(0x5f5a81);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5f5a84:{NFSU2_TR(0x5f5a84);
u8 U[4];
w4(U+0,u32(u32(u32(0x60ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5f5a88:{NFSU2_TR(0x5f5a88);
u8 U[8];
w4(U+0,u32(u32(u32(0x60ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f5a8c:{NFSU2_TR(0x5f5a8c);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5f5a90:{NFSU2_TR(0x5f5a90);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f5a91:{NFSU2_TR(0x5f5a91);
u8 U[8];
w4(U+0,u32(u32(u32(0x68ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f5a95:{NFSU2_TR(0x5f5a95);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f5a96:{NFSU2_TR(0x5f5a96);
u8 U[4];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5f5a9a:{NFSU2_TR(0x5f5a9a);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f5a9b:{NFSU2_TR(0x5f5a9b);
u8 U[8];
w4(U+0,u32(u32(u32(0x74ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5f5aa3:{NFSU2_TR(0x5f5aa3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f5aa8ull));
TAIL_STATIC(0x43c9c0u,43c);
}
B5f5aa8:L5f5aa8:{c.instructions+=23;NFSU2_TR(0x5f5aa8);
{u32 ea_=u32(r4(R+16)+u32(76u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5f5aac:{NFSU2_TR(0x5f5aac);
{u32 ea_=u32(r4(R+24)+u32(112u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5f5aaf:{NFSU2_TR(0x5f5aaf);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5f5ab3:{NFSU2_TR(0x5f5ab3);
{u32 ea_=u32(r4(R+24)+u32(116u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5f5ab6:{NFSU2_TR(0x5f5ab6);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B5f5ab9:{NFSU2_TR(0x5f5ab9);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5f5abd:{NFSU2_TR(0x5f5abd);
{u32 ea_=u32(r4(R+24)+u32(120u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5f5ac0:{NFSU2_TR(0x5f5ac0);
u8 U[4];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5f5ac4:{NFSU2_TR(0x5f5ac4);
{u32 ea_=u32(r4(R+16)+u32(72u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5f5ac8:{NFSU2_TR(0x5f5ac8);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f5ac9:{NFSU2_TR(0x5f5ac9);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+12))));
}
B5f5acb:{NFSU2_TR(0x5f5acb);
{u32 ea_=u32(r4(R+16)+u32(124u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5f5acf:{NFSU2_TR(0x5f5acf);
u8 U[8];
w4(U+0,u32(u32(u32(0x7cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5f5ad3:{NFSU2_TR(0x5f5ad3);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5f5ad5:{NFSU2_TR(0x5f5ad5);
u8 U[8];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f5ad9:{NFSU2_TR(0x5f5ad9);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5f5add:{NFSU2_TR(0x5f5add);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5f5ae1:{NFSU2_TR(0x5f5ae1);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f5ae2:{NFSU2_TR(0x5f5ae2);
{u32 ea_=u32(r4(R+16)+u32(76u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5f5ae6:{NFSU2_TR(0x5f5ae6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f5ae7:{NFSU2_TR(0x5f5ae7);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f5ae9:{NFSU2_TR(0x5f5ae9);
__builtin_memmove((R+4),(R+24),4);
}
B5f5aeb:{NFSU2_TR(0x5f5aeb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f5af0ull));
TAIL_STATIC(0x61fb00u,61f);
}
B5f5af0:L5f5af0:{c.instructions+=21;NFSU2_TR(0x5f5af0);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5f5af4:{NFSU2_TR(0x5f5af4);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5f5af8:{NFSU2_TR(0x5f5af8);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5f5afc:{NFSU2_TR(0x5f5afc);
w4(R+0,u32(0x4ull));
}
B5f5b01:{NFSU2_TR(0x5f5b01);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+0))));
}
B5f5b03:{NFSU2_TR(0x5f5b03);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B5f5b04:{NFSU2_TR(0x5f5b04);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+0))));
}
B5f5b06:{NFSU2_TR(0x5f5b06);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5f5b0a:{NFSU2_TR(0x5f5b0a);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f5b0e:{NFSU2_TR(0x5f5b0e);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5f5b12:{NFSU2_TR(0x5f5b12);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f5b16:{NFSU2_TR(0x5f5b16);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5f5b1a:{NFSU2_TR(0x5f5b1a);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x10000ull))));
}
B5f5b1f:{NFSU2_TR(0x5f5b1f);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x8ull))));
}
B5f5b22:{NFSU2_TR(0x5f5b22);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x40ull))));
}
B5f5b25:{NFSU2_TR(0x5f5b25);
u8 U[4];
w1(R+523,sborrow<u32>(r4(R+0),u32(0x90000ull)));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x90000ull))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B5f5b2a:{NFSU2_TR(0x5f5b2a);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f5b2e:{NFSU2_TR(0x5f5b2e);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f5b32:{NFSU2_TR(0x5f5b32);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f5b36:{NFSU2_TR(0x5f5b36);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f5b3a:{NFSU2_TR(0x5f5b3a);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5f57c0u);}goto L5f57c0;}}
}
B5f5b40:L5f5b40:{c.instructions+=2;NFSU2_TR(0x5f5b40);
u8 U[16];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(U+8),u32(0x2ull)));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x2ull))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B5f5b45:{NFSU2_TR(0x5f5b45);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5f5dab;}}
}
B5f5b4b:L5f5b4b:{c.instructions+=8;NFSU2_TR(0x5f5b4b);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f5b4d:{NFSU2_TR(0x5f5b4d);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f5b4f:{NFSU2_TR(0x5f5b4f);
u8 U[4];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5f5b53:{NFSU2_TR(0x5f5b53);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f5b54:{NFSU2_TR(0x5f5b54);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
__builtin_memmove((R+8),(U+0),4);
}
B5f5b57:{NFSU2_TR(0x5f5b57);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f5b58:{NFSU2_TR(0x5f5b58);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5c4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5f5b5e:{NFSU2_TR(0x5f5b5e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f5b63ull));
TAIL_STATIC(0x5e7e70u,5e7);
}
B5f5b63:L5f5b63:{c.instructions+=9;NFSU2_TR(0x5f5b63);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5f5b65:{NFSU2_TR(0x5f5b65);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5f5b69:{NFSU2_TR(0x5f5b69);
__builtin_memmove((R+28),(R+4),4);
}
B5f5b6b:{NFSU2_TR(0x5f5b6b);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+28)))));
w8(U+8,u64(s64(s32(u32(0x98ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+28,u32(r8(U+16)));
}
B5f5b71:{NFSU2_TR(0x5f5b71);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x800ee0ull))));
}
B5f5b77:{NFSU2_TR(0x5f5b77);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5f5b7a:{NFSU2_TR(0x5f5b7a);
u8 U[3];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((U+1),(U+0),1);
w1(U+2,u8(u32(r1(U+1))-u32(u8(0x0ull))));
w1(R+518,u8((r1(U+2))==(u8(0x0ull))));
}
B5f5b7d:{NFSU2_TR(0x5f5b7d);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5f5b85:{NFSU2_TR(0x5f5b85);
if(r1(R+518)){{goto L5f5bcc;}}
}
B5f5b87:L5f5b87:{c.instructions+=10;NFSU2_TR(0x5f5b87);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5f5b8b:{NFSU2_TR(0x5f5b8b);
{u32 ea_=u32(r4(R+28)+u32(72u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5f5b8e:{NFSU2_TR(0x5f5b8e);
{u32 ea_=u32(r4(R+28)+u32(76u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5f5b91:{NFSU2_TR(0x5f5b91);
{u32 ea_=u32(r4(R+28)+u32(72u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5f5b94:{NFSU2_TR(0x5f5b94);
__asm__ volatile(".byte 0xde,0xf9":::"memory");
}
B5f5b96:{NFSU2_TR(0x5f5b96);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B5f5b9a:{NFSU2_TR(0x5f5b9a);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5f5ba0:{NFSU2_TR(0x5f5ba0);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5f5ba2:{NFSU2_TR(0x5f5ba2);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5f5ba5:{NFSU2_TR(0x5f5ba5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5f5c7b;}}
}
B5f5bab:L5f5bab:{c.instructions+=6;NFSU2_TR(0x5f5bab);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5f5baf:{NFSU2_TR(0x5f5baf);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5f5bb5:{NFSU2_TR(0x5f5bb5);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5f5bb9:{NFSU2_TR(0x5f5bb9);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5f5bbb:{NFSU2_TR(0x5f5bbb);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5f5bbe:{NFSU2_TR(0x5f5bbe);
if(r1(R+514)){{goto L5f5bc8;}}
}
B5f5bc0:L5f5bc0:{c.instructions+=2;NFSU2_TR(0x5f5bc0);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5f5bc2:{NFSU2_TR(0x5f5bc2);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5f5bc8:L5f5bc8:{c.instructions+=1;NFSU2_TR(0x5f5bc8);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5f5bcc:L5f5bcc:{c.instructions+=4;NFSU2_TR(0x5f5bcc);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5f5bcf:{NFSU2_TR(0x5f5bcf);
u8 U[3];
__builtin_memmove((U+0),gp(u32(r4(R+8))),1);
__builtin_memmove((U+1),(U+0),1);
w1(U+2,u8(u32(r1(U+1))-u32(u8(0x0ull))));
w1(R+518,u8((r1(U+2))==(u8(0x0ull))));
}
B5f5bd2:{NFSU2_TR(0x5f5bd2);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5f5bda:{NFSU2_TR(0x5f5bda);
if(r1(R+518)){{goto L5f5c21;}}
}
B5f5bdc:L5f5bdc:{c.instructions+=10;NFSU2_TR(0x5f5bdc);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5f5be0:{NFSU2_TR(0x5f5be0);
{u32 ea_=u32(r4(R+28)+u32(84u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5f5be3:{NFSU2_TR(0x5f5be3);
{u32 ea_=u32(r4(R+28)+u32(88u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5f5be6:{NFSU2_TR(0x5f5be6);
{u32 ea_=u32(r4(R+28)+u32(84u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5f5be9:{NFSU2_TR(0x5f5be9);
__asm__ volatile(".byte 0xde,0xf9":::"memory");
}
B5f5beb:{NFSU2_TR(0x5f5beb);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B5f5bef:{NFSU2_TR(0x5f5bef);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5f5bf5:{NFSU2_TR(0x5f5bf5);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5f5bf7:{NFSU2_TR(0x5f5bf7);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5f5bfa:{NFSU2_TR(0x5f5bfa);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5f5c86;}}
}
B5f5c00:L5f5c00:{c.instructions+=6;NFSU2_TR(0x5f5c00);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5f5c04:{NFSU2_TR(0x5f5c04);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5f5c0a:{NFSU2_TR(0x5f5c0a);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5f5c0e:{NFSU2_TR(0x5f5c0e);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5f5c10:{NFSU2_TR(0x5f5c10);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5f5c13:{NFSU2_TR(0x5f5c13);
if(r1(R+514)){{goto L5f5c1d;}}
}
B5f5c15:L5f5c15:{c.instructions+=2;NFSU2_TR(0x5f5c15);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5f5c17:{NFSU2_TR(0x5f5c17);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5f5c1d:L5f5c1d:{c.instructions+=1;NFSU2_TR(0x5f5c1d);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5f5c21:L5f5c21:{c.instructions+=6;NFSU2_TR(0x5f5c21);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5f5c25:{NFSU2_TR(0x5f5c25);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5f5c29:{NFSU2_TR(0x5f5c29);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B5f5c2f:{NFSU2_TR(0x5f5c2f);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5f5c31:{NFSU2_TR(0x5f5c31);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5f5c34:{NFSU2_TR(0x5f5c34);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5f5cff;}}
}
B5f5c3a:L5f5c3a:{c.instructions+=5;NFSU2_TR(0x5f5c3a);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5f5c40:{NFSU2_TR(0x5f5c40);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B5f5c46:{NFSU2_TR(0x5f5c46);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5f5c48:{NFSU2_TR(0x5f5c48);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5f5c4b:{NFSU2_TR(0x5f5c4b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5f5cad;}}
}
B5f5c4d:L5f5c4d:{c.instructions+=6;NFSU2_TR(0x5f5c4d);
{u32 ea_=u32(r4(R+28)+u32(72u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5f5c50:{NFSU2_TR(0x5f5c50);
{u32 ea_=u32(r4(R+28)+u32(84u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5f5c53:{NFSU2_TR(0x5f5c53);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5f5c55:{NFSU2_TR(0x5f5c55);
__asm__ volatile(".byte 0xdc,0xc0":::"memory");
}
B5f5c57:{NFSU2_TR(0x5f5c57);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5f5c5a:{NFSU2_TR(0x5f5c5a);
if(r1(R+514)){{goto L5f5c8e;}}
}
B5f5c5c:L5f5c5c:{c.instructions+=6;NFSU2_TR(0x5f5c5c);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B5f5c60:{NFSU2_TR(0x5f5c60);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B5f5c64:{NFSU2_TR(0x5f5c64);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5f5c6a:{NFSU2_TR(0x5f5c6a);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5f5c6c:{NFSU2_TR(0x5f5c6c);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5f5c6f:{NFSU2_TR(0x5f5c6f);
if(r1(R+518)){{goto L5f5caf;}}
}
B5f5c71:L5f5c71:{c.instructions+=2;NFSU2_TR(0x5f5c71);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5f5c79:{NFSU2_TR(0x5f5c79);
{goto L5f5caf;}
}
B5f5c7b:L5f5c7b:{c.instructions+=2;NFSU2_TR(0x5f5c7b);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5f5c81:{NFSU2_TR(0x5f5c81);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5f5bc8u);}goto L5f5bc8;}
}
B5f5c86:L5f5c86:{c.instructions+=2;NFSU2_TR(0x5f5c86);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5f5c8c:{NFSU2_TR(0x5f5c8c);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5f5c1du);}goto L5f5c1d;}
}
B5f5c8e:L5f5c8e:{c.instructions+=6;NFSU2_TR(0x5f5c8e);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B5f5c92:{NFSU2_TR(0x5f5c92);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B5f5c96:{NFSU2_TR(0x5f5c96);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5f5c9c:{NFSU2_TR(0x5f5c9c);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5f5c9e:{NFSU2_TR(0x5f5c9e);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5f5ca1:{NFSU2_TR(0x5f5ca1);
if(r1(R+518)){{goto L5f5caf;}}
}
B5f5ca3:L5f5ca3:{c.instructions+=2;NFSU2_TR(0x5f5ca3);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5f5cab:{NFSU2_TR(0x5f5cab);
{goto L5f5caf;}
}
B5f5cad:L5f5cad:{c.instructions+=1;NFSU2_TR(0x5f5cad);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5f5caf:L5f5caf:{c.instructions+=6;NFSU2_TR(0x5f5caf);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5f5cb3:{NFSU2_TR(0x5f5cb3);
__builtin_memmove((R+12),(R+4),4);
}
B5f5cb5:{NFSU2_TR(0x5f5cb5);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5f5cbb:{NFSU2_TR(0x5f5cbb);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5f5cbd:{NFSU2_TR(0x5f5cbd);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5f5cc0:{NFSU2_TR(0x5f5cc0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5f5cd7;}}
}
B5f5cc2:L5f5cc2:{c.instructions+=7;NFSU2_TR(0x5f5cc2);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5f5cc6:{NFSU2_TR(0x5f5cc6);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f5cc8:{NFSU2_TR(0x5f5cc8);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f5cc9:{NFSU2_TR(0x5f5cc9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f5cca:{NFSU2_TR(0x5f5cca);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f5ccc:{NFSU2_TR(0x5f5ccc);
__builtin_memmove((R+4),(R+24),4);
}
B5f5cce:{NFSU2_TR(0x5f5cce);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f5cd3ull));
TAIL_STATIC(0x61fb00u,61f);
}
B5f5cd3:L5f5cd3:{c.instructions+=1;NFSU2_TR(0x5f5cd3);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5f5cd7:L5f5cd7:{c.instructions+=5;NFSU2_TR(0x5f5cd7);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5f5cdb:{NFSU2_TR(0x5f5cdb);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5f5ce1:{NFSU2_TR(0x5f5ce1);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5f5ce3:{NFSU2_TR(0x5f5ce3);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5f5ce6:{NFSU2_TR(0x5f5ce6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5f5d01;}}
}
B5f5ce8:L5f5ce8:{c.instructions+=7;NFSU2_TR(0x5f5ce8);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5f5cec:{NFSU2_TR(0x5f5cec);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f5cee:{NFSU2_TR(0x5f5cee);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f5cef:{NFSU2_TR(0x5f5cef);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f5cf0:{NFSU2_TR(0x5f5cf0);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f5cf2:{NFSU2_TR(0x5f5cf2);
__builtin_memmove((R+4),(R+24),4);
}
B5f5cf4:{NFSU2_TR(0x5f5cf4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f5cf9ull));
TAIL_STATIC(0x61fb00u,61f);
}
B5f5cf9:L5f5cf9:{c.instructions+=2;NFSU2_TR(0x5f5cf9);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5f5cfd:{NFSU2_TR(0x5f5cfd);
{goto L5f5d01;}
}
B5f5cff:L5f5cff:{c.instructions+=1;NFSU2_TR(0x5f5cff);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5f5d01:L5f5d01:{c.instructions+=13;NFSU2_TR(0x5f5d01);
{u32 ea_=u32(r4(R+24)+u32(880u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5f5d07:{NFSU2_TR(0x5f5d07);
{u32 ea_=u32(r4(R+24)+u32(884u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5f5d0d:{NFSU2_TR(0x5f5d0d);
{u32 ea_=u32(r4(R+24)+u32(888u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5f5d13:{NFSU2_TR(0x5f5d13);
{u32 ea_=u32(r4(R+24)+u32(892u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5f5d19:{NFSU2_TR(0x5f5d19);
{u32 ea_=u32(r4(R+28)+u32(120u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5f5d1c:{NFSU2_TR(0x5f5d1c);
{u32 ea_=u32(r4(R+28)+u32(124u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5f5d1f:{NFSU2_TR(0x5f5d1f);
{u32 ea_=u32(r4(R+28)+u32(120u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5f5d22:{NFSU2_TR(0x5f5d22);
__asm__ volatile(".byte 0xde,0xf9":::"memory");
}
B5f5d24:{NFSU2_TR(0x5f5d24);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B5f5d28:{NFSU2_TR(0x5f5d28);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5f5d2e:{NFSU2_TR(0x5f5d2e);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5f5d30:{NFSU2_TR(0x5f5d30);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5f5d33:{NFSU2_TR(0x5f5d33);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5f5d56;}}
}
B5f5d35:L5f5d35:{c.instructions+=6;NFSU2_TR(0x5f5d35);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5f5d39:{NFSU2_TR(0x5f5d39);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5f5d3f:{NFSU2_TR(0x5f5d3f);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5f5d43:{NFSU2_TR(0x5f5d43);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5f5d45:{NFSU2_TR(0x5f5d45);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5f5d48:{NFSU2_TR(0x5f5d48);
if(r1(R+514)){{goto L5f5d5c;}}
}
B5f5d4a:L5f5d4a:{c.instructions+=3;NFSU2_TR(0x5f5d4a);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5f5d4c:{NFSU2_TR(0x5f5d4c);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5f5d54:{NFSU2_TR(0x5f5d54);
{goto L5f5d6d;}
}
B5f5d56:L5f5d56:{c.instructions+=1;NFSU2_TR(0x5f5d56);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5f5d5c:L5f5d5c:{c.instructions+=5;NFSU2_TR(0x5f5d5c);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B5f5d60:{NFSU2_TR(0x5f5d60);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5f5d66:{NFSU2_TR(0x5f5d66);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5f5d68:{NFSU2_TR(0x5f5d68);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5f5d6b:{NFSU2_TR(0x5f5d6b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5f5dab;}}
}
B5f5d6d:L5f5d6d:{c.instructions+=4;NFSU2_TR(0x5f5d6d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x968ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5f5d73:{NFSU2_TR(0x5f5d73);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5f5d75:{NFSU2_TR(0x5f5d75);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f5d79:{NFSU2_TR(0x5f5d79);
if(r1(R+518)){{goto L5f5d96;}}
}
B5f5d7b:L5f5d7b:{c.instructions+=5;NFSU2_TR(0x5f5d7b);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5f5d7f:{NFSU2_TR(0x5f5d7f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+12),(U+0),4);
}
B5f5d81:{NFSU2_TR(0x5f5d81);
{u32 ea_=u32(u32(7904500u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5f5d87:{NFSU2_TR(0x5f5d87);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f5d89:{NFSU2_TR(0x5f5d89);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f5d8eull));
TAIL_STATIC(0x75bed4u,75b);
}
B5f5d8e:L5f5d8e:{c.instructions+=4;NFSU2_TR(0x5f5d8e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f5d8f:{NFSU2_TR(0x5f5d8f);
u8 U[4];
w4(U+0,u32(0x5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f5d91:{NFSU2_TR(0x5f5d91);
__builtin_memmove((R+4),(R+28),4);
}
B5f5d93:{NFSU2_TR(0x5f5d93);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f5d96ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5f5d96:L5f5d96:{c.instructions+=8;NFSU2_TR(0x5f5d96);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5f5d9a:{NFSU2_TR(0x5f5d9a);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5f5d9e:{NFSU2_TR(0x5f5d9e);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f5da0:{NFSU2_TR(0x5f5da0);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f5da1:{NFSU2_TR(0x5f5da1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f5da2:{NFSU2_TR(0x5f5da2);
u8 U[4];
w4(U+0,u32(0x5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f5da4:{NFSU2_TR(0x5f5da4);
__builtin_memmove((R+4),(R+24),4);
}
B5f5da6:{NFSU2_TR(0x5f5da6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f5dabull));
TAIL_STATIC(0x61fb00u,61f);
}
B5f5dab:L5f5dab:{c.instructions+=5;NFSU2_TR(0x5f5dab);
{u32 ea_=u32(r4(R+20)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5f5dae:{NFSU2_TR(0x5f5dae);
{u32 ea_=u32(u32(8017404u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5f5db4:{NFSU2_TR(0x5f5db4);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5f5db6:{NFSU2_TR(0x5f5db6);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5f5db9:{NFSU2_TR(0x5f5db9);
if(r1(R+514)){{goto L5f5e66;}}
}
B5f5dbf:L5f5dbf:{c.instructions+=3;NFSU2_TR(0x5f5dbf);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5f5dc3:{NFSU2_TR(0x5f5dc3);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5f5dc5:{NFSU2_TR(0x5f5dc5);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5f5e66;}}
}
B5f5dcb:L5f5dcb:{c.instructions+=5;NFSU2_TR(0x5f5dcb);
{u32 ea_=u32(r4(R+24)+u32(1072u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5f5dd1:{NFSU2_TR(0x5f5dd1);
{u32 ea_=u32(u32(7882080u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5f5dd7:{NFSU2_TR(0x5f5dd7);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5f5dd9:{NFSU2_TR(0x5f5dd9);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5f5ddc:{NFSU2_TR(0x5f5ddc);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5f5e66;}}
}
B5f5de2:L5f5de2:{c.instructions+=7;NFSU2_TR(0x5f5de2);
__builtin_memmove((R+0),gp(0x7fb720),4);
}
B5f5de7:{NFSU2_TR(0x5f5de7);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xb4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5f5ded:{NFSU2_TR(0x5f5ded);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f5dee:{NFSU2_TR(0x5f5dee);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x3cull))));
}
B5f5df1:{NFSU2_TR(0x5f5df1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f5df2:{NFSU2_TR(0x5f5df2);
__builtin_memmove((R+4),(R+24),4);
}
B5f5df4:{NFSU2_TR(0x5f5df4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f5df9ull));
TAIL_STATIC(0x5ec0e0u,5ec);
}
B5f5df9:L5f5df9:{c.instructions+=3;NFSU2_TR(0x5f5df9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5f5dfc:{NFSU2_TR(0x5f5dfc);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B5f5e00:{NFSU2_TR(0x5f5e00);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5f5e66;}}
}
B5f5e02:L5f5e02:{c.instructions+=3;NFSU2_TR(0x5f5e02);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x900ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B5f5e08:{NFSU2_TR(0x5f5e08);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5f5e0a:{NFSU2_TR(0x5f5e0a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5f5e66;}}
}
B5f5e0c:L5f5e0c:{c.instructions+=4;NFSU2_TR(0x5f5e0c);
__builtin_memmove((R+8),gp(0x7fb724),4);
}
B5f5e12:{NFSU2_TR(0x5f5e12);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x3ull))));
}
B5f5e15:{NFSU2_TR(0x5f5e15);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0x80000003ull))));
w1(R+519,u8(s32(r4(R+8))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
}
B5f5e1b:{NFSU2_TR(0x5f5e1b);
u8 U[1];
w1(U+0,u8(!(r1(R+519))));
if(r1(U+0)){{goto L5f5e22;}}
}
B5f5e1d:L5f5e1d:{c.instructions+=3;NFSU2_TR(0x5f5e1d);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
}
B5f5e1e:{NFSU2_TR(0x5f5e1e);
w4(R+8,u32(u32(r4(R+8))|u32(u32(0xfffffffcull))));
}
B5f5e21:{NFSU2_TR(0x5f5e21);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
}
B5f5e22:L5f5e22:{c.instructions+=1;NFSU2_TR(0x5f5e22);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5f5e66;}}
}
B5f5e24:L5f5e24:{c.instructions+=5;NFSU2_TR(0x5f5e24);
{u32 ea_=u32(r4(R+24)+u32(1072u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5f5e2a:{NFSU2_TR(0x5f5e2a);
{u32 ea_=u32(u32(7881848u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5f5e30:{NFSU2_TR(0x5f5e30);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5f5e32:{NFSU2_TR(0x5f5e32);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5f5e35:{NFSU2_TR(0x5f5e35);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5f5e66;}}
}
B5f5e37:L5f5e37:{c.instructions+=3;NFSU2_TR(0x5f5e37);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5f5e3b:{NFSU2_TR(0x5f5e3b);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5f5e3d:{NFSU2_TR(0x5f5e3d);
if(r1(R+518)){{goto L5f5ea3;}}
}
B5f5e3f:L5f5e3f:{c.instructions+=3;NFSU2_TR(0x5f5e3f);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x9d4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5f5e45:{NFSU2_TR(0x5f5e45);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5f5e47:{NFSU2_TR(0x5f5e47);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5f5e66;}}
}
B5f5e49:L5f5e49:{c.instructions+=5;NFSU2_TR(0x5f5e49);
__builtin_memmove((R+0),gp(0x7a55e0),4);
}
B5f5e4e:{NFSU2_TR(0x5f5e4e);
__builtin_memmove((R+4),gp(0x8650b8),4);
}
B5f5e54:{NFSU2_TR(0x5f5e54);
u8 U[4];
w4(U+0,u32(0x7a6308ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f5e59:{NFSU2_TR(0x5f5e59);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f5e5a:{NFSU2_TR(0x5f5e5a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f5e5full));
TAIL_STATIC(0x578e90u,578);
}
B5f5e5f:L5f5e5f:{c.instructions+=1;NFSU2_TR(0x5f5e5f);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x9d4ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5f5e66:L5f5e66:{c.instructions+=3;NFSU2_TR(0x5f5e66);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5f5e6a:{NFSU2_TR(0x5f5e6a);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5f5e6c:{NFSU2_TR(0x5f5e6c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5f5e75;}}
}
B5f5e6e:L5f5e6e:{c.instructions+=1;NFSU2_TR(0x5f5e6e);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x9d4ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5f5e75:L5f5e75:{c.instructions+=3;NFSU2_TR(0x5f5e75);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x958ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5f5e7b:{NFSU2_TR(0x5f5e7b);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5f5e7d:{NFSU2_TR(0x5f5e7d);
if(r1(R+518)){{goto L5f5ef6;}}
}
B5f5e7f:L5f5e7f:{c.instructions+=3;NFSU2_TR(0x5f5e7f);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((R+12),(U+0),4);
}
B5f5e82:{NFSU2_TR(0x5f5e82);
__builtin_memmove((R+4),(R+12),4);
}
B5f5e84:{NFSU2_TR(0x5f5e84);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f5e89ull));
TAIL_STATIC(0x610ad0u,610);
}
B5f5e89:L5f5e89:{c.instructions+=4;NFSU2_TR(0x5f5e89);
{u32 ea_=u32(u32(8017328u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5f5e8f:{NFSU2_TR(0x5f5e8f);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5f5e91:{NFSU2_TR(0x5f5e91);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5f5e94:{NFSU2_TR(0x5f5e94);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5f5ebc;}}
}
B5f5e96:L5f5e96:{c.instructions+=5;NFSU2_TR(0x5f5e96);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f5e98:{NFSU2_TR(0x5f5e98);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f5e9a:{NFSU2_TR(0x5f5e9a);
u8 U[4];
w4(U+0,u32(0x3f800000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f5e9f:{NFSU2_TR(0x5f5e9f);
u8 U[4];
w4(U+0,u32(0x7ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f5ea1:{NFSU2_TR(0x5f5ea1);
{goto L5f5eef;}
}
B5f5ea3:L5f5ea3:{c.instructions+=5;NFSU2_TR(0x5f5ea3);
__builtin_memmove((R+4),gp(0x7a55e4),4);
}
B5f5ea9:{NFSU2_TR(0x5f5ea9);
u8 U[4];
w4(U+0,u32(0x7a62f8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f5eae:{NFSU2_TR(0x5f5eae);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f5eaf:{NFSU2_TR(0x5f5eaf);
__builtin_memmove((R+4),gp(0x8650b8),4);
}
B5f5eb5:{NFSU2_TR(0x5f5eb5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f5ebaull));
TAIL_STATIC(0x578e90u,578);
}
B5f5eba:L5f5eba:{c.instructions+=1;NFSU2_TR(0x5f5eba);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5f5e6eu);}goto L5f5e6e;}
}
B5f5ebc:L5f5ebc:{c.instructions+=4;NFSU2_TR(0x5f5ebc);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5f5ec2:{NFSU2_TR(0x5f5ec2);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0x30000000ull))));
}
B5f5ec8:{NFSU2_TR(0x5f5ec8);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x30000000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5f5ece:{NFSU2_TR(0x5f5ece);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5f5ef6;}}
}
B5f5ed0:L5f5ed0:{c.instructions+=2;NFSU2_TR(0x5f5ed0);
__builtin_memmove((R+4),(R+12),4);
}
B5f5ed2:{NFSU2_TR(0x5f5ed2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f5ed7ull));
TAIL_STATIC(0x610ad0u,610);
}
B5f5ed7:L5f5ed7:{c.instructions+=4;NFSU2_TR(0x5f5ed7);
{u32 ea_=u32(u32(8017332u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5f5edd:{NFSU2_TR(0x5f5edd);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5f5edf:{NFSU2_TR(0x5f5edf);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5f5ee2:{NFSU2_TR(0x5f5ee2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5f5ef6;}}
}
B5f5ee4:L5f5ee4:{c.instructions+=4;NFSU2_TR(0x5f5ee4);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f5ee6:{NFSU2_TR(0x5f5ee6);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f5ee8:{NFSU2_TR(0x5f5ee8);
u8 U[4];
w4(U+0,u32(0x3f800000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f5eed:{NFSU2_TR(0x5f5eed);
u8 U[4];
w4(U+0,u32(0x6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f5eef:L5f5eef:{c.instructions+=2;NFSU2_TR(0x5f5eef);
__builtin_memmove((R+4),(R+24),4);
}
B5f5ef1:{NFSU2_TR(0x5f5ef1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f5ef6ull));
TAIL_STATIC(0x61fb00u,61f);
}
B5f5ef6:L5f5ef6:{c.instructions+=3;NFSU2_TR(0x5f5ef6);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5f5ef9:{NFSU2_TR(0x5f5ef9);
__builtin_memmove((R+4),(R+28),4);
}
B5f5efb:{NFSU2_TR(0x5f5efb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f5f00ull));
TAIL_STATIC(0x59fa30u,59f);
}
B5f5f00:L5f5f00:{c.instructions+=2;NFSU2_TR(0x5f5f00);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5f5f02:{NFSU2_TR(0x5f5f02);
if(r1(R+518)){{goto L5f5f4f;}}
}
B5f5f04:L5f5f04:{c.instructions+=9;NFSU2_TR(0x5f5f04);
{u32 ea_=u32(r4(R+24)+u32(1072u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5f5f0a:{NFSU2_TR(0x5f5f0a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5f5f0d:{NFSU2_TR(0x5f5f0d);
{u32 ea_=u32(u32(7881324u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5f5f13:{NFSU2_TR(0x5f5f13);
{u32 ea_=u32(r4(R+0)+u32(524u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5f5f19:{NFSU2_TR(0x5f5f19);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B5f5f1b:{NFSU2_TR(0x5f5f1b);
{u32 ea_=u32(u32(7881564u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5f5f21:{NFSU2_TR(0x5f5f21);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5f5f23:{NFSU2_TR(0x5f5f23);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5f5f26:{NFSU2_TR(0x5f5f26);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L5f5fd8;}}
}
B5f5f2c:L5f5f2c:{c.instructions+=4;NFSU2_TR(0x5f5f2c);
{u32 ea_=u32(u32(8017504u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5f5f32:{NFSU2_TR(0x5f5f32);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5f5f34:{NFSU2_TR(0x5f5f34);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5f5f37:{NFSU2_TR(0x5f5f37);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L5f5fda;}}
}
B5f5f3d:L5f5f3d:{c.instructions+=4;NFSU2_TR(0x5f5f3d);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f5f3f:{NFSU2_TR(0x5f5f3f);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f5f41:{NFSU2_TR(0x5f5f41);
u8 U[4];
w4(U+0,u32(0x3f800000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f5f46:{NFSU2_TR(0x5f5f46);
u8 U[4];
w4(U+0,u32(0xaull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f5f48:L5f5f48:{c.instructions+=2;NFSU2_TR(0x5f5f48);
__builtin_memmove((R+4),(R+24),4);
}
B5f5f4a:{NFSU2_TR(0x5f5f4a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f5f4full));
TAIL_STATIC(0x61fb00u,61f);
}
B5f5f4f:L5f5f4f:{c.instructions+=2;NFSU2_TR(0x5f5f4f);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x434ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B5f5f56:{NFSU2_TR(0x5f5f56);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x5f607du,5f6);}
}
B5f5f5c:L5f5f5c:{c.instructions+=4;NFSU2_TR(0x5f5f5c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5f5f5f:{NFSU2_TR(0x5f5f5f);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f5f61:{NFSU2_TR(0x5f5f61);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x2f0ull))));
}
B5f5f67:{NFSU2_TR(0x5f5f67);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f5f6cull));
TAIL_STATIC(0x5995e0u,599);
}
B5f5f6c:L5f5f6c:{c.instructions+=7;NFSU2_TR(0x5f5f6c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5f5f6f:{NFSU2_TR(0x5f5f6f);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f5f73:{NFSU2_TR(0x5f5f73);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B5f5f77:{NFSU2_TR(0x5f5f77);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x328ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5f5f7d:{NFSU2_TR(0x5f5f7d);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5f5f7f:{NFSU2_TR(0x5f5f7f);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B5f5f83:{NFSU2_TR(0x5f5f83);
if(r1(R+518)){{goto L5f5f8f;}}
}
B5f5f85:L5f5f85:{c.instructions+=2;NFSU2_TR(0x5f5f85);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5f5f8b:{NFSU2_TR(0x5f5f8b);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B5f5f8f:L5f5f8f:{c.instructions+=4;NFSU2_TR(0x5f5f8f);
{u32 ea_=u32(u32(7881920u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5f5f95:{NFSU2_TR(0x5f5f95);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5f5f97:{NFSU2_TR(0x5f5f97);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5f5f9a:{NFSU2_TR(0x5f5f9a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x5f607du,5f6);}
}
B5f5fa0:L5f5fa0:{c.instructions+=9;NFSU2_TR(0x5f5fa0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5f5fa3:{NFSU2_TR(0x5f5fa3);
{u32 ea_=u32(r4(R+0)+u32(504u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5f5fa9:{NFSU2_TR(0x5f5fa9);
{u32 ea_=u32(r4(R+0)+u32(496u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5f5faf:{NFSU2_TR(0x5f5faf);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x924ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5f5fb5:{NFSU2_TR(0x5f5fb5);
{u32 ea_=u32(u32(8371928u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5f5fbb:{NFSU2_TR(0x5f5fbb);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5f5fbd:{NFSU2_TR(0x5f5fbd);
{u32 ea_=u32(u32(7881304u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5f5fc3:{NFSU2_TR(0x5f5fc3);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5f5fc5:{NFSU2_TR(0x5f5fc5);
if(r1(R+518)){TAIL_STATIC(0x5f6050u,5f6);}
}
B5f5fcb:L5f5fcb:{c.instructions+=2;NFSU2_TR(0x5f5fcb);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5f5fce:{NFSU2_TR(0x5f5fce);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L5f5ff9;}}
}
B5f5fd0:L5f5fd0:{c.instructions+=2;NFSU2_TR(0x5f5fd0);
{u32 ea_=u32(u32(8371928u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5f5fd6:{NFSU2_TR(0x5f5fd6);
{goto L5f5fff;}
}
B5f5fd8:L5f5fd8:{c.instructions+=1;NFSU2_TR(0x5f5fd8);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5f5fda:L5f5fda:{c.instructions+=2;NFSU2_TR(0x5f5fda);
__builtin_memmove((R+4),(R+28),4);
}
B5f5fdc:{NFSU2_TR(0x5f5fdc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f5fe1ull));
TAIL_STATIC(0x59fa30u,59f);
}
B5f5fe1:L5f5fe1:{c.instructions+=2;NFSU2_TR(0x5f5fe1);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5f5fe3:{NFSU2_TR(0x5f5fe3);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5f5f3du);}goto L5f5f3d;}}
}
B5f5fe9:L5f5fe9:{c.instructions+=5;NFSU2_TR(0x5f5fe9);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f5feb:{NFSU2_TR(0x5f5feb);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f5fed:{NFSU2_TR(0x5f5fed);
u8 U[4];
w4(U+0,u32(0x3f800000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f5ff2:{NFSU2_TR(0x5f5ff2);
u8 U[4];
w4(U+0,u32(0xdull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f5ff4:{NFSU2_TR(0x5f5ff4);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5f5f48u);}goto L5f5f48;}
}
B5f5ff9:L5f5ff9:{c.instructions+=1;NFSU2_TR(0x5f5ff9);
{u32 ea_=u32(r4(R+24)+u32(1088u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5f5fff:L5f5fff:{c.instructions+=1;NFSU2_TR(0x5f5fff);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
TAIL_STATIC(0x5f6001u,5f6);
}
XIT:NFSU2_TR_EXIT(0x5f5,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
